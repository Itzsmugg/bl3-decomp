// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143169a20 FUN_143169a20 body=1979 status=ok
// SIG undefined FUN_143169a20(void)

void FUN_143169a20(byte param_1,uint param_2,uint param_3,uint param_4,longlong param_5,
                  longlong param_6)

{
  longlong lVar1;
  longlong lVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar8 = param_3 >> 0xc & 0x737;
  uVar7 = (ulonglong)param_4;
  uVar5 = (uint)param_1;
  if (uVar8 < 0x604) {
    if (uVar8 == 0x603) {
      uVar8 = 0;
      if (param_1 != 0) {
        uVar6 = param_2 >> 0xc;
        do {
          lVar2 = param_5 + (ulonglong)(((param_2 & 0xff) + 3 & 0xfffffffc) * uVar8) * 4;
          pfVar3 = (float *)(param_6 + (ulonglong)((param_4 + 3 & 0xfffffffc) * uVar8) * 4);
          if (param_4 != 0) {
            _guard_xfg_dispatch_icall_nop(pfVar3,0,uVar7 << 2);
          }
          uVar9 = 0;
          uVar10 = 0;
          uVar4 = 1;
          if (uVar6 != 0) {
            do {
              if ((uVar4 & uVar6) != 0) {
                *pfVar3 = (float)(&DAT_145ac99e0)[uVar9 * 4] * *(float *)(lVar2 + uVar10 * 4) +
                          *pfVar3;
                pfVar3[1] = (float)(&DAT_145ac99e4)[uVar9 * 4] * *(float *)(lVar2 + uVar10 * 4) +
                            pfVar3[1];
                pfVar3[2] = (float)(&DAT_145ac99e8)[uVar9 * 4] * *(float *)(lVar2 + uVar10 * 4) +
                            pfVar3[2];
                lVar1 = uVar10 * 4;
                uVar10 = (ulonglong)((int)uVar10 + 1);
                pfVar3[3] = (float)(&DAT_145ac99ec)[uVar9 * 4] * *(float *)(lVar2 + lVar1) +
                            pfVar3[3];
              }
              uVar9 = (ulonglong)((int)uVar9 + 1);
              uVar4 = uVar4 * 2;
            } while (uVar4 <= uVar6);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar5);
      }
    }
    else if (uVar8 == 3) {
      uVar8 = 0;
      if (param_1 != 0) {
        uVar6 = param_2 >> 0xc;
        do {
          lVar2 = param_5 + (ulonglong)(((param_2 & 0xff) + 3 & 0xfffffffc) * uVar8) * 4;
          pfVar3 = (float *)(param_6 + (ulonglong)((param_4 + 3 & 0xfffffffc) * uVar8) * 4);
          if (param_4 != 0) {
            _guard_xfg_dispatch_icall_nop(pfVar3,0,uVar7 << 2);
          }
          uVar9 = 0;
          uVar10 = 0;
          uVar4 = 1;
          if (uVar6 != 0) {
            do {
              if ((uVar4 & uVar6) != 0) {
                *pfVar3 = (float)(&DAT_145ac9870)[uVar9 * 2] * *(float *)(lVar2 + uVar10 * 4) +
                          *pfVar3;
                lVar1 = uVar10 * 4;
                uVar10 = (ulonglong)((int)uVar10 + 1);
                pfVar3[1] = (float)(&DAT_145ac9874)[uVar9 * 2] * *(float *)(lVar2 + lVar1) +
                            pfVar3[1];
              }
              uVar9 = (ulonglong)((int)uVar9 + 1);
              uVar4 = uVar4 * 2;
            } while (uVar4 <= uVar6);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar5);
      }
    }
    else if (uVar8 == 4) {
      uVar8 = 0;
      if (param_1 != 0) {
        uVar6 = param_2 >> 0xc;
        do {
          pfVar3 = (float *)(param_6 + (ulonglong)((param_4 + 3 & 0xfffffffc) * uVar8) * 4);
          if (param_4 != 0) {
            _guard_xfg_dispatch_icall_nop(pfVar3,0,uVar7 << 2);
          }
          uVar9 = 0;
          uVar10 = 0;
          uVar4 = 1;
          if (uVar6 != 0) {
            do {
              if ((uVar4 & uVar6) != 0) {
                lVar2 = uVar10 * 4;
                uVar10 = (ulonglong)((int)uVar10 + 1);
                *pfVar3 = *(float *)(param_5 + (ulonglong)
                                               (((param_2 & 0xff) + 3 & 0xfffffffc) * uVar8) * 4 +
                                    lVar2) * (float)(&DAT_145ac9820)[uVar9] + *pfVar3;
              }
              uVar9 = (ulonglong)((int)uVar9 + 1);
              uVar4 = uVar4 * 2;
            } while (uVar4 <= uVar6);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar5);
      }
    }
    else if ((uVar8 == 7) && (uVar8 = 0, param_1 != 0)) {
      uVar5 = param_2 >> 0xc;
      do {
        lVar2 = param_5 + (ulonglong)(((param_2 & 0xff) + 3 & 0xfffffffc) * uVar8) * 4;
        pfVar3 = (float *)(param_6 + (ulonglong)((param_4 + 3 & 0xfffffffc) * uVar8) * 4);
        if (param_4 != 0) {
          _guard_xfg_dispatch_icall_nop(pfVar3,0,uVar7 << 2);
        }
        uVar9 = 0;
        uVar10 = 0;
        uVar6 = 1;
        if (uVar5 != 0) {
          do {
            if ((uVar6 & uVar5) != 0) {
              *pfVar3 = (float)(&DAT_145ac9900)[uVar9 * 3] * *(float *)(lVar2 + uVar10 * 4) +
                        *pfVar3;
              pfVar3[1] = (float)(&DAT_145ac9904)[uVar9 * 3] * *(float *)(lVar2 + uVar10 * 4) +
                          pfVar3[1];
              lVar1 = uVar10 * 4;
              uVar10 = (ulonglong)((int)uVar10 + 1);
              pfVar3[2] = (float)(&DAT_145ac9908)[uVar9 * 3] * *(float *)(lVar2 + lVar1) + pfVar3[2]
              ;
            }
            uVar9 = (ulonglong)((int)uVar9 + 1);
            uVar6 = uVar6 * 2;
          } while (uVar6 <= uVar5);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < param_1);
    }
  }
  else if (uVar8 == 0x607) {
    uVar8 = 0;
    if (param_1 != 0) {
      uVar6 = param_2 >> 0xc;
      do {
        lVar2 = param_5 + (ulonglong)(((param_2 & 0xff) + 3 & 0xfffffffc) * uVar8) * 4;
        pfVar3 = (float *)(param_6 + (ulonglong)((param_4 + 3 & 0xfffffffc) * uVar8) * 4);
        if (param_4 != 0) {
          _guard_xfg_dispatch_icall_nop(pfVar3,0,uVar7 << 2);
        }
        uVar9 = 0;
        uVar10 = 0;
        uVar4 = 1;
        if (uVar6 != 0) {
          do {
            if ((uVar4 & uVar6) != 0) {
              *pfVar3 = (float)(&DAT_145ac9b00)[uVar9 * 5] * *(float *)(lVar2 + uVar10 * 4) +
                        *pfVar3;
              pfVar3[1] = (float)(&DAT_145ac9b04)[uVar9 * 5] * *(float *)(lVar2 + uVar10 * 4) +
                          pfVar3[1];
              pfVar3[2] = (float)(&DAT_145ac9b08)[uVar9 * 5] * *(float *)(lVar2 + uVar10 * 4) +
                          pfVar3[2];
              pfVar3[3] = (float)(&DAT_145ac9b0c)[uVar9 * 5] * *(float *)(lVar2 + uVar10 * 4) +
                          pfVar3[3];
              lVar1 = uVar10 * 4;
              uVar10 = (ulonglong)((int)uVar10 + 1);
              pfVar3[4] = (float)(&DAT_145ac9b10)[uVar9 * 5] * *(float *)(lVar2 + lVar1) + pfVar3[4]
              ;
            }
            uVar9 = (ulonglong)((int)uVar9 + 1);
            uVar4 = uVar4 * 2;
          } while (uVar4 <= uVar6);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar5);
    }
  }
  else if (uVar8 == 0x633) {
    uVar8 = 0;
    if (param_1 != 0) {
      uVar6 = param_2 >> 0xc;
      do {
        lVar2 = param_5 + (ulonglong)(((param_2 & 0xff) + 3 & 0xfffffffc) * uVar8) * 4;
        pfVar3 = (float *)(param_6 + (ulonglong)((param_4 + 3 & 0xfffffffc) * uVar8) * 4);
        if (param_4 != 0) {
          _guard_xfg_dispatch_icall_nop(pfVar3,0,uVar7 << 2);
        }
        uVar9 = 0;
        uVar10 = 0;
        uVar4 = 1;
        if (uVar6 != 0) {
          do {
            if ((uVar4 & uVar6) != 0) {
              *pfVar3 = (float)(&DAT_145ac9c70)[uVar9 * 6] * *(float *)(lVar2 + uVar10 * 4) +
                        *pfVar3;
              pfVar3[1] = (float)(&DAT_145ac9c74)[uVar9 * 6] * *(float *)(lVar2 + uVar10 * 4) +
                          pfVar3[1];
              pfVar3[2] = (float)(&DAT_145ac9c78)[uVar9 * 6] * *(float *)(lVar2 + uVar10 * 4) +
                          pfVar3[2];
              pfVar3[3] = (float)(&DAT_145ac9c7c)[uVar9 * 6] * *(float *)(lVar2 + uVar10 * 4) +
                          pfVar3[3];
              pfVar3[4] = (float)(&DAT_145ac9c80)[uVar9 * 6] * *(float *)(lVar2 + uVar10 * 4) +
                          pfVar3[4];
              lVar1 = uVar10 * 4;
              uVar10 = (ulonglong)((int)uVar10 + 1);
              pfVar3[5] = (float)(&DAT_145ac9c84)[uVar9 * 6] * *(float *)(lVar2 + lVar1) + pfVar3[5]
              ;
            }
            uVar9 = (ulonglong)((int)uVar9 + 1);
            uVar4 = uVar4 * 2;
          } while (uVar4 <= uVar6);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar5);
    }
  }
  else if ((uVar8 == 0x637) && (uVar8 = 0, param_1 != 0)) {
    uVar6 = param_2 >> 0xc;
    do {
      lVar2 = param_5 + (ulonglong)(((param_2 & 0xff) + 3 & 0xfffffffc) * uVar8) * 4;
      pfVar3 = (float *)(param_6 + (ulonglong)((param_4 + 3 & 0xfffffffc) * uVar8) * 4);
      if (param_4 != 0) {
        _guard_xfg_dispatch_icall_nop(pfVar3,0,uVar7 << 2);
      }
      uVar9 = 0;
      uVar10 = 0;
      uVar4 = 1;
      if (uVar6 != 0) {
        do {
          if ((uVar4 & uVar6) != 0) {
            *pfVar3 = (float)(&DAT_145ac9e20)[uVar9 * 7] * *(float *)(lVar2 + uVar10 * 4) + *pfVar3;
            pfVar3[1] = (float)(&DAT_145ac9e24)[uVar9 * 7] * *(float *)(lVar2 + uVar10 * 4) +
                        pfVar3[1];
            pfVar3[2] = (float)(&DAT_145ac9e28)[uVar9 * 7] * *(float *)(lVar2 + uVar10 * 4) +
                        pfVar3[2];
            pfVar3[3] = (float)(&DAT_145ac9e2c)[uVar9 * 7] * *(float *)(lVar2 + uVar10 * 4) +
                        pfVar3[3];
            pfVar3[4] = (float)(&DAT_145ac9e30)[uVar9 * 7] * *(float *)(lVar2 + uVar10 * 4) +
                        pfVar3[4];
            pfVar3[5] = (float)(&DAT_145ac9e34)[uVar9 * 7] * *(float *)(lVar2 + uVar10 * 4) +
                        pfVar3[5];
            lVar1 = uVar10 * 4;
            uVar10 = (ulonglong)((int)uVar10 + 1);
            pfVar3[6] = (float)(&DAT_145ac9e38)[uVar9 * 7] * *(float *)(lVar2 + lVar1) + pfVar3[6];
          }
          uVar9 = (ulonglong)((int)uVar9 + 1);
          uVar4 = uVar4 * 2;
        } while (uVar4 <= uVar6);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar5);
  }
  return;
}



// FUNCTION 14316a1e0 TransformSampledSphere body=2419 status=ok
// SIG undefined TransformSampledSphere(void)

void TransformSampledSphere
               (float *param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
               float param_6,float *param_7)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  
  BuildSphereTransformations(param_3,param_4,param_5,&local_f8,&local_d0);
  pfVar1 = param_1 + (uint)(param_2 * 4);
  if (param_1 < pfVar1) {
    pfVar4 = param_7;
    pfVar8 = param_1;
    if (0x3f < (ulonglong)(uint)(param_2 * 4) * 4) {
      fVar13 = (1.0 - param_6) * 1.5707964;
      do {
        fVar2 = pfVar8[1];
        fVar3 = *pfVar8;
        fVar10 = pfVar8[2];
        fVar11 = fVar2 * local_bc + fVar3 * local_c8 + fVar10 * local_b0;
        fVar11 = ((fVar11 * fVar11 * 0.719088 - 0.35786) * fVar11 * fVar11 + 1.085865) * fVar11;
        fVar9 = fVar11 * param_6 + fVar13;
        fVar12 = fVar9 * fVar9;
        fVar9 = (1.0 - fVar12 * 0.16666667) * fVar9;
        fVar11 = ((fVar12 * 0.041666668 - 0.5) * fVar12 + 1.0) /
                 ((fVar11 * fVar11 * 0.041666668 - 0.5) * fVar11 * fVar11 + 1.0);
        fVar12 = (fVar2 * local_c0 + fVar3 * local_cc + fVar10 * local_b4) * fVar11;
        fVar11 = (fVar2 * local_c4 + fVar3 * local_d0 + fVar10 * local_b8) * fVar11;
        *pfVar4 = fVar11 * local_f8 + fVar12 * local_ec + fVar9 * local_e0;
        *(float *)((longlong)param_7 + (8 - (longlong)param_1) + (longlong)pfVar8) =
             fVar11 * local_f0 + fVar12 * local_e4 + fVar9 * local_d8;
        *(float *)((longlong)param_7 + (4 - (longlong)param_1) + (longlong)pfVar8) =
             fVar11 * local_f4 + fVar12 * local_e8 + fVar9 * local_dc;
        fVar2 = pfVar8[4];
        fVar3 = pfVar8[5];
        fVar10 = pfVar8[6];
        fVar11 = fVar2 * local_c8 + fVar3 * local_bc + fVar10 * local_b0;
        fVar11 = ((fVar11 * fVar11 * 0.719088 - 0.35786) * fVar11 * fVar11 + 1.085865) * fVar11;
        fVar9 = fVar11 * param_6 + fVar13;
        fVar12 = fVar9 * fVar9;
        fVar9 = (1.0 - fVar12 * 0.16666667) * fVar9;
        fVar11 = ((fVar12 * 0.041666668 - 0.5) * fVar12 + 1.0) /
                 ((fVar11 * fVar11 * 0.041666668 - 0.5) * fVar11 * fVar11 + 1.0);
        fVar12 = (fVar2 * local_cc + fVar3 * local_c0 + fVar10 * local_b4) * fVar11;
        fVar11 = (fVar2 * local_d0 + fVar3 * local_c4 + fVar10 * local_b8) * fVar11;
        *(float *)((longlong)param_7 + (0x10 - (longlong)param_1) + (longlong)pfVar8) =
             fVar11 * local_f8 + fVar12 * local_ec + fVar9 * local_e0;
        *(float *)((longlong)param_7 + (0x14 - (longlong)param_1) + (longlong)pfVar8) =
             fVar11 * local_f4 + fVar12 * local_e8 + fVar9 * local_dc;
        *(float *)((longlong)param_7 + (0x18 - (longlong)param_1) + (longlong)pfVar8) =
             fVar11 * local_f0 + fVar12 * local_e4 + fVar9 * local_d8;
        fVar2 = pfVar8[8];
        fVar3 = pfVar8[9];
        fVar10 = pfVar8[10];
        fVar12 = fVar2 * local_c8 + fVar3 * local_bc + fVar10 * local_b0;
        fVar12 = ((fVar12 * fVar12 * 0.719088 - 0.35786) * fVar12 * fVar12 + 1.085865) * fVar12;
        fVar9 = fVar12 * param_6 + fVar13;
        fVar11 = fVar9 * fVar9;
        fVar9 = (1.0 - fVar11 * 0.16666667) * fVar9;
        fVar11 = ((fVar11 * 0.041666668 - 0.5) * fVar11 + 1.0) /
                 ((fVar12 * fVar12 * 0.041666668 - 0.5) * fVar12 * fVar12 + 1.0);
        fVar12 = (fVar2 * local_d0 + fVar3 * local_c4 + fVar10 * local_b8) * fVar11;
        fVar11 = (fVar2 * local_cc + fVar3 * local_c0 + fVar10 * local_b4) * fVar11;
        *(float *)((longlong)param_7 + (0x20 - (longlong)param_1) + (longlong)pfVar8) =
             fVar12 * local_f8 + fVar11 * local_ec + fVar9 * local_e0;
        *(float *)((longlong)param_7 + (0x24 - (longlong)param_1) + (longlong)pfVar8) =
             fVar12 * local_f4 + fVar11 * local_e8 + fVar9 * local_dc;
        *(float *)((longlong)param_7 + (0x28 - (longlong)param_1) + (longlong)pfVar8) =
             fVar12 * local_f0 + fVar11 * local_e4 + fVar9 * local_d8;
        fVar2 = pfVar8[0xc];
        fVar3 = pfVar8[0xd];
        fVar10 = pfVar8[0xe];
        pfVar4 = pfVar4 + 0x10;
        fVar12 = fVar2 * local_c8 + fVar3 * local_bc + fVar10 * local_b0;
        fVar12 = ((fVar12 * fVar12 * 0.719088 - 0.35786) * fVar12 * fVar12 + 1.085865) * fVar12;
        fVar9 = fVar12 * param_6 + fVar13;
        fVar11 = fVar9 * fVar9;
        fVar9 = (1.0 - fVar11 * 0.16666667) * fVar9;
        fVar11 = ((fVar11 * 0.041666668 - 0.5) * fVar11 + 1.0) /
                 ((fVar12 * fVar12 * 0.041666668 - 0.5) * fVar12 * fVar12 + 1.0);
        fVar12 = (fVar2 * local_d0 + fVar3 * local_c4 + fVar10 * local_b8) * fVar11;
        fVar11 = (fVar2 * local_cc + fVar3 * local_c0 + fVar10 * local_b4) * fVar11;
        *(float *)((longlong)param_7 + (0x30 - (longlong)param_1) + (longlong)pfVar8) =
             fVar12 * local_f8 + fVar11 * local_ec + fVar9 * local_e0;
        *(float *)((longlong)param_7 + (0x34 - (longlong)param_1) + (longlong)pfVar8) =
             fVar12 * local_f4 + fVar11 * local_e8 + fVar9 * local_dc;
        *(float *)((longlong)param_7 + (0x38 - (longlong)param_1) + (longlong)pfVar8) =
             fVar12 * local_f0 + fVar11 * local_e4 + fVar9 * local_d8;
        pfVar8 = pfVar8 + 0x10;
      } while (pfVar8 < pfVar1 + -0xc);
    }
    if (pfVar8 < pfVar1) {
      pfVar7 = pfVar8 + 2;
      pfVar6 = pfVar4 + 2;
      do {
        fVar13 = *(float *)((longlong)pfVar8 + (-8 - (longlong)pfVar4) + (longlong)pfVar6);
        fVar2 = pfVar7[-1];
        fVar3 = *pfVar7;
        pfVar7 = pfVar7 + 4;
        fVar9 = fVar13 * local_c8 + fVar2 * local_bc + fVar3 * local_b0;
        fVar9 = ((fVar9 * fVar9 * 0.719088 - 0.35786) * fVar9 * fVar9 + 1.085865) * fVar9;
        fVar10 = fVar9 * param_6 + (1.0 - param_6) * 1.5707964;
        fVar11 = fVar10 * fVar10;
        fVar10 = (1.0 - fVar11 * 0.16666667) * fVar10;
        fVar9 = ((fVar11 * 0.041666668 - 0.5) * fVar11 + 1.0) /
                ((fVar9 * fVar9 * 0.041666668 - 0.5) * fVar9 * fVar9 + 1.0);
        fVar11 = (fVar13 * local_cc + fVar2 * local_c0 + fVar3 * local_b4) * fVar9;
        fVar9 = (fVar13 * local_d0 + fVar2 * local_c4 + fVar3 * local_b8) * fVar9;
        pfVar6[-2] = fVar9 * local_f8 + fVar11 * local_ec + fVar10 * local_e0;
        *pfVar6 = fVar9 * local_f0 + fVar11 * local_e4 + fVar10 * local_d8;
        pfVar6[-1] = fVar9 * local_f4 + fVar11 * local_e8 + fVar10 * local_dc;
        pfVar5 = (float *)((longlong)pfVar6 + (longlong)pfVar8 + (8 - (longlong)pfVar4));
        pfVar6 = pfVar6 + 4;
      } while (pfVar5 < pfVar1);
    }
  }
  return;
}



// FUNCTION 14316ab60 TransformSampledSphereSIMD body=1102 status=ok
// SIG undefined TransformSampledSphereSIMD(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TransformSampledSphereSIMD
               (float *param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
               float param_6,longlong param_7)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float *pfVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
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
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  
  BuildSphereTransformations(param_3,param_4,param_5,&local_1c0,&local_1e8);
  auVar12 = _DAT_145aca370;
  param_6 = param_6 - 0.5;
  fVar15 = (1.5707964 - param_6 * param_6 * 2.5838563) * param_6 + 0.5;
  if (param_1 < param_1 + (uint)(param_2 * 4)) {
    pfVar13 = (float *)(param_7 + 0x20);
    uVar2 = DAT_145aca370._8_4_;
    uVar3 = DAT_145aca370._12_4_;
    pfVar14 = param_1 + 8;
    do {
      fVar24 = pfVar14[-4];
      fVar26 = pfVar14[-3];
      fVar28 = pfVar14[-2];
      fVar30 = pfVar14[4];
      fVar4 = pfVar14[5];
      fVar5 = pfVar14[6];
      fVar6 = pfVar14[-8];
      fVar7 = pfVar14[-7];
      fVar8 = pfVar14[-6];
      fVar9 = *pfVar14;
      fVar10 = pfVar14[1];
      fVar11 = pfVar14[2];
      auVar20._0_4_ = fVar7 * local_1d4 + fVar6 * local_1e0 + fVar8 * local_1c8;
      auVar20._4_4_ = fVar26 * local_1d4 + fVar24 * local_1e0 + fVar28 * local_1c8;
      auVar20._8_4_ = fVar10 * local_1d4 + fVar9 * local_1e0 + fVar11 * local_1c8;
      auVar20._12_4_ = fVar4 * local_1d4 + fVar30 * local_1e0 + fVar5 * local_1c8;
      auVar21 = minps(auVar20,auVar12);
      auVar22._8_4_ = uVar2 ^ 0x80000000;
      auVar22._0_8_ = auVar12._0_8_ ^ 0x8000000080000000;
      auVar22._12_4_ = uVar3 ^ 0x80000000;
      auVar22 = maxps(auVar21,auVar22);
      fVar23 = auVar22._0_4_;
      fVar25 = auVar22._4_4_;
      fVar27 = auVar22._8_4_;
      fVar29 = auVar22._12_4_;
      fVar31 = (fVar23 - 1.0) * fVar15 + 1.0;
      fVar32 = (fVar25 - 1.0) * fVar15 + 1.0;
      fVar33 = (fVar27 - 1.0) * fVar15 + 1.0;
      fVar34 = (fVar29 - 1.0) * fVar15 + 1.0;
      fVar16 = -fVar31 * fVar31 + 1.0001;
      fVar17 = -fVar32 * fVar32 + 1.0001;
      fVar18 = -fVar33 * fVar33 + 1.0001;
      fVar19 = -fVar34 * fVar34 + 1.0001;
      auVar21._4_4_ = (-fVar25 * fVar25 + 1.0) * fVar17;
      auVar21._0_4_ = (-fVar23 * fVar23 + 1.0) * fVar16;
      auVar21._8_4_ = (-fVar27 * fVar27 + 1.0) * fVar18;
      auVar21._12_4_ = (-fVar29 * fVar29 + 1.0) * fVar19;
      auVar21 = rsqrtps(auVar22,auVar21);
      fVar16 = auVar21._0_4_ * fVar16;
      fVar17 = auVar21._4_4_ * fVar17;
      fVar18 = auVar21._8_4_ * fVar18;
      fVar19 = auVar21._12_4_ * fVar19;
      fVar23 = (fVar7 * local_1d8 + fVar6 * local_1e4 + fVar8 * local_1cc) * fVar16;
      fVar25 = (fVar26 * local_1d8 + fVar24 * local_1e4 + fVar28 * local_1cc) * fVar17;
      fVar27 = (fVar10 * local_1d8 + fVar9 * local_1e4 + fVar11 * local_1cc) * fVar18;
      fVar29 = (fVar4 * local_1d8 + fVar30 * local_1e4 + fVar5 * local_1cc) * fVar19;
      fVar16 = (fVar7 * local_1dc + fVar6 * local_1e8 + fVar8 * local_1d0) * fVar16;
      fVar17 = (fVar26 * local_1dc + fVar24 * local_1e8 + fVar28 * local_1d0) * fVar17;
      fVar18 = (fVar10 * local_1dc + fVar9 * local_1e8 + fVar11 * local_1d0) * fVar18;
      fVar19 = (fVar4 * local_1dc + fVar30 * local_1e8 + fVar5 * local_1d0) * fVar19;
      fVar24 = fVar23 * local_1ac + fVar16 * local_1b8 + fVar31 * local_1a0;
      fVar26 = fVar25 * local_1ac + fVar17 * local_1b8 + fVar32 * local_1a0;
      fVar28 = fVar27 * local_1ac + fVar18 * local_1b8 + fVar33 * local_1a0;
      fVar30 = fVar29 * local_1ac + fVar19 * local_1b8 + fVar34 * local_1a0;
      pfVar1 = pfVar14 + 8;
      pfVar13[-8] = fVar23 * local_1b4 + fVar16 * local_1c0 + fVar31 * local_1a8;
      pfVar13[-7] = fVar23 * local_1b0 + fVar16 * local_1bc + fVar31 * local_1a4;
      pfVar13[-6] = fVar24;
      pfVar13[-5] = fVar24;
      pfVar13[-4] = fVar25 * local_1b4 + fVar17 * local_1c0 + fVar32 * local_1a8;
      pfVar13[-3] = fVar25 * local_1b0 + fVar17 * local_1bc + fVar32 * local_1a4;
      pfVar13[-2] = fVar26;
      pfVar13[-1] = fVar26;
      *pfVar13 = fVar27 * local_1b4 + fVar18 * local_1c0 + fVar33 * local_1a8;
      pfVar13[1] = fVar27 * local_1b0 + fVar18 * local_1bc + fVar33 * local_1a4;
      pfVar13[2] = fVar28;
      pfVar13[3] = fVar28;
      pfVar13[4] = fVar29 * local_1b4 + fVar19 * local_1c0 + fVar34 * local_1a8;
      pfVar13[5] = fVar29 * local_1b0 + fVar19 * local_1bc + fVar34 * local_1a4;
      pfVar13[6] = fVar30;
      pfVar13[7] = fVar30;
      pfVar13 = pfVar13 + 0x10;
      pfVar14 = pfVar14 + 0x10;
    } while (pfVar1 < param_1 + (uint)(param_2 * 4));
  }
  return;
}



// FUNCTION 14316afb0 _ComputeSN3DphericalHarmonics body=787 status=ok
// SIG undefined _ComputeSN3DphericalHarmonics(void)

void CAkSpeakerPan::_ComputeSN3DphericalHarmonics
               (float param_1,float param_2,float param_3,uint param_4,uint param_5,
               undefined4 *param_6)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar4 = (ulonglong)param_5;
  *param_6 = 0x3f800000;
  param_6[uVar4] = param_2;
  pfVar1 = (float *)(param_6 + uVar4 * 2);
  *pfVar1 = param_3;
  pfVar1 = pfVar1 + uVar4;
  *pfVar1 = param_1;
  pfVar1 = pfVar1 + uVar4;
  if (4 < param_4) {
    fVar5 = param_3 * param_3;
    if (0.99 <= fVar5) {
      uVar2 = 4;
      if (4 < param_4) {
        do {
          uVar3 = uVar2 + 1;
          param_6[uVar2 * param_5] = 0;
          uVar2 = uVar3;
        } while (uVar3 < param_4);
      }
      param_6[param_5 * 6] = fVar5;
      if (9 < param_4) {
        param_6[param_5 * 0xc] = param_3;
        return;
      }
    }
    else {
      fVar5 = 1.0 - fVar5;
      fVar8 = SQRT(fVar5);
      param_2 = param_2 * (1.0 / fVar8);
      param_1 = (1.0 / fVar8) * param_1;
      fVar9 = (param_1 + param_1) * param_2;
      *pfVar1 = fVar9 * fVar5 * 0.8660254;
      pfVar1 = pfVar1 + uVar4;
      *pfVar1 = param_2 * 1.7320508 * param_3 * fVar8;
      pfVar1 = pfVar1 + uVar4;
      fVar10 = param_1 * param_1 - param_2 * param_2;
      *pfVar1 = param_3 * 1.5 * param_3 - 0.5;
      pfVar1 = pfVar1 + uVar4;
      *pfVar1 = (param_1 + param_1) * param_3 * fVar8 * 0.8660254;
      pfVar1 = pfVar1 + uVar4;
      *pfVar1 = fVar10 * 0.8660254 * fVar5;
      pfVar1 = pfVar1 + uVar4;
      if (9 < param_4) {
        fVar7 = param_3 * 5.0 * param_3;
        fVar6 = (fVar7 - 1.0) * fVar8;
        *pfVar1 = (param_1 * 3.0 * param_1 * param_2 - param_2 * param_2 * param_2) * 0.7905694 *
                  fVar5 * fVar8;
        pfVar1 = pfVar1 + uVar4;
        *pfVar1 = fVar9 * 1.9364917 * param_3 * fVar5;
        pfVar1 = pfVar1 + uVar4;
        *pfVar1 = param_2 * 0.61237246 * fVar6;
        pfVar1 = pfVar1 + uVar4;
        *pfVar1 = (fVar7 - 3.0) * param_3 * 0.5;
        pfVar1 = pfVar1 + uVar4;
        *pfVar1 = param_1 * 0.61237246 * fVar6;
        pfVar1[uVar4] = fVar10 * 1.9364917 * param_3 * fVar5;
        (pfVar1 + uVar4)[uVar4] =
             (param_1 * param_1 * param_1 - param_2 * 3.0 * param_2 * param_1) * 0.7905694 *
             fVar5 * fVar8;
      }
    }
  }
  return;
}



// FUNCTION 14316b2d0 _GetSpeakerVolumes2DPan2 body=135 status=ok
// SIG undefined _GetSpeakerVolumes2DPan2(void)

void _GetSpeakerVolumes2DPan2(float param_1,float param_2,float *param_3,byte param_4)

{
  uint uVar1;
  bool bVar2;
  
  *param_3 = SQRT((1.0 - param_1) * param_2);
  param_3[1] = SQRT(param_1 * param_2);
  bVar2 = (param_4 & 4) != 0;
  if (bVar2) {
    param_3[2] = 0.0;
  }
  uVar1 = (uint)bVar2;
  param_3[uVar1 + 2] = SQRT((1.0 - param_2) * (1.0 - param_1));
  param_3[uVar1 + 3] = SQRT((1.0 - param_2) * param_1);
  return;
}



// FUNCTION 14316b360 _GetSpeakerVolumes2DPan2HasCenter body=221 status=ok
// SIG undefined _GetSpeakerVolumes2DPan2HasCenter(void)

void _GetSpeakerVolumes2DPan2HasCenter(float param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  if (param_2 < 0.5) {
    param_2 = param_2 * 1.2;
    fVar1 = 1.0;
  }
  else {
    fVar1 = 0.8;
    param_2 = param_2 * 0.8;
  }
  fVar1 = fVar1 - param_2;
  fVar2 = 1.0 - fVar1;
  *param_3 = SQRT(fVar2 * (2.0 - (param_1 + param_1)) * 0.33333334);
  param_3[1] = SQRT(fVar2 * (param_1 + param_1) * 0.33333334);
  param_3[2] = SQRT(fVar2 * 0.33333334);
  param_3[3] = SQRT(fVar1 * (1.0 - param_1));
  param_3[4] = SQRT(fVar1 * param_1);
  return;
}



// FUNCTION 14316b440 _GetSpeakerVolumes2DPan3 body=246 status=ok
// SIG undefined _GetSpeakerVolumes2DPan3(void)

void _GetSpeakerVolumes2DPan3(float param_1,float param_2,float *param_3,byte param_4)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = 1.0 - param_1;
  fVar4 = (3.0 - param_2 * 4.0) * 0.33333334;
  fVar3 = (param_2 * 4.0 - 1.0) * 0.33333334;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  fVar5 = 1.0 - (fVar4 + fVar3);
  *param_3 = SQRT(fVar6 * fVar3);
  param_3[1] = SQRT(fVar3 * param_1);
  bVar2 = (param_4 & 4) != 0;
  if (bVar2) {
    param_3[2] = 0.0;
  }
  uVar1 = (uint)bVar2;
  param_3[uVar1 + 2] = SQRT(fVar4 * fVar6);
  param_3[uVar1 + 3] = SQRT(fVar4 * param_1);
  param_3[uVar1 + 4] = SQRT(fVar5 * fVar6);
  param_3[uVar1 + 5] = SQRT(fVar5 * param_1);
  return;
}



// FUNCTION 14316b540 _GetSpeakerVolumes2DPan3HasCenter body=280 status=ok
// SIG undefined _GetSpeakerVolumes2DPan3HasCenter(void)

void _GetSpeakerVolumes2DPan3HasCenter(float param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = param_2 * 1.1428572 - 0.14285715;
  fVar2 = 1.0 - param_2 * 1.4285715;
  fVar3 = 0.6666667 - param_1 * 0.6666667;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar1 = 0.6666666 - fVar3;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  fVar5 = 1.0 - (fVar2 + fVar4);
  *param_3 = SQRT(fVar4 * fVar3);
  param_3[1] = SQRT(fVar1 * fVar4);
  param_3[2] = SQRT(fVar4 * 0.33333334);
  param_3[3] = SQRT(fVar2 * (1.0 - param_1));
  param_3[4] = SQRT(fVar2 * param_1);
  param_3[5] = SQRT(fVar5 * (1.0 - param_1));
  param_3[6] = SQRT(fVar5 * param_1);
  return;
}



// FUNCTION 14316b660 `scalar_deleting_destructor' body=70 status=ok
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
  *(undefined ***)this = &PTR__scalar_deleting_destructor__145aca4a0;
  CAkSwitchAware::UnsubscribeSwitches();
  FUN_141868ed0(this);
  if ((param_1 & 1) != 0) {
    FMemory::operator_delete(this,0x18);
  }
  return this;
}



// FUNCTION 14316b6b0 FUN_14316b6b0 body=80 status=ok
// SIG undefined FUN_14316b6b0(void)

longlong FUN_14316b6b0(longlong *param_1)

{
  uint uVar1;
  char cVar2;
  
  uVar1 = *(uint *)(param_1 + 1);
  if ((*(uint *)((longlong)param_1 + 0xc) <= uVar1) &&
     (cVar2 = FUN_143151530(param_1,1), cVar2 == '\0')) {
    return 0;
  }
  if (*(uint *)((longlong)param_1 + 0xc) <= uVar1) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar1 + 1;
  return *param_1 + (ulonglong)uVar1 * 4;
}



// FUNCTION 14316b700 FUN_14316b700 body=145 status=ok
// SIG undefined FUN_14316b700(void)

ulonglong FUN_14316b700(longlong *param_1,uint param_2,undefined1 *param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  iVar4 = (int)param_1[1] + -1;
  iVar2 = 0;
  if (-1 < iVar4) {
    uVar3 = uVar5;
    do {
      iVar2 = (iVar4 - (int)uVar3) / 2 + (int)uVar3;
      uVar1 = *(uint *)((longlong)iVar2 * 0x10 + *param_1);
      if (param_2 < uVar1) {
        iVar4 = iVar2 + -1;
      }
      else {
        if (param_2 <= uVar1) {
          *param_3 = 1;
          return *param_1 + (longlong)iVar2 * 0x10;
        }
        uVar3 = (ulonglong)(iVar2 + 1);
      }
      iVar2 = (int)uVar3;
    } while (iVar2 <= iVar4);
  }
  *param_3 = 0;
  if (*param_1 != 0) {
    uVar5 = (longlong)iVar2 * 0x10 + *param_1;
  }
  return uVar5;
}



// FUNCTION 14316b7a0 FUN_14316b7a0 body=211 status=ok
// SIG undefined FUN_14316b7a0(void)

ulonglong FUN_14316b7a0(longlong *param_1,ulonglong *param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar5 = 0;
  iVar8 = (int)param_1[1] + -1;
  iVar6 = 0;
  if (-1 < iVar8) {
    lVar2 = *param_1;
    uVar3 = *param_2;
    uVar7 = uVar5;
    do {
      iVar6 = (int)uVar7 + (iVar8 - (int)uVar7) / 2;
      lVar1 = (longlong)iVar6 * 0x18;
      uVar4 = *(ulonglong *)(lVar1 + lVar2);
      if ((uVar3 < uVar4) || ((uVar3 == uVar4 && (param_2[1] < *(ulonglong *)(lVar1 + 8 + lVar2)))))
      {
        iVar8 = iVar6 + -1;
      }
      else {
        if ((uVar3 <= uVar4) &&
           ((uVar3 != uVar4 || (param_2[1] <= *(ulonglong *)(lVar1 + 8 + lVar2))))) {
          *param_3 = 1;
          return *param_1 + lVar1;
        }
        uVar7 = (ulonglong)(iVar6 + 1);
      }
      iVar6 = (int)uVar7;
    } while (iVar6 <= iVar8);
  }
  *param_3 = 0;
  if (*param_1 != 0) {
    uVar5 = *param_1 + (longlong)iVar6 * 0x18;
  }
  return uVar5;
}



// FUNCTION 14316b880 FUN_14316b880 body=163 status=ok
// SIG undefined FUN_14316b880(void)

/* WARNING: Removing unreachable block (ram,0x00014316b91b) */
/* WARNING: Removing unreachable block (ram,0x00014316b8e4) */

longlong FUN_14316b880(longlong *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = (int)param_1[1] + -1;
  if (-1 < iVar4) {
    do {
      iVar2 = (iVar4 - iVar3) / 2 + iVar3;
      uVar1 = *(uint *)(*param_1 + (longlong)iVar2 * 4);
      if (param_2 < uVar1) {
        iVar4 = iVar2 + -1;
      }
      else {
        if (param_2 <= uVar1) {
          return *param_1 + (longlong)iVar2 * 4;
        }
        iVar3 = iVar2 + 1;
      }
    } while (iVar3 <= iVar4);
  }
  if (*param_1 == 0) {
    return 0;
  }
  return 0;
}



// FUNCTION 14316b930 FUN_14316b930 body=163 status=ok
// SIG undefined FUN_14316b930(void)

/* WARNING: Removing unreachable block (ram,0x00014316b9cb) */
/* WARNING: Removing unreachable block (ram,0x00014316b994) */

uint * FUN_14316b930(longlong *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = (int)param_1[1] + -1;
  if (-1 < iVar5) {
    do {
      iVar2 = (iVar5 - iVar4) / 2 + iVar4;
      puVar3 = (uint *)((longlong)iVar2 * 0x10 + *param_1);
      uVar1 = *puVar3;
      if (param_2 < uVar1) {
        iVar5 = iVar2 + -1;
      }
      else {
        if (param_2 <= uVar1) {
          return puVar3;
        }
        iVar4 = iVar2 + 1;
      }
    } while (iVar4 <= iVar5);
  }
  if (*param_1 == 0) {
    return (uint *)0x0;
  }
  return (uint *)0x0;
}



// FUNCTION 14316b9e0 FUN_14316b9e0 body=195 status=ok
// SIG undefined FUN_14316b9e0(void)

ulonglong FUN_14316b9e0(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_2;
  uVar5 = 0;
  iVar8 = (int)param_1[1] + -1;
  iVar4 = 0;
  if (-1 < iVar8) {
    uVar7 = uVar5;
    do {
      iVar4 = (iVar8 - (int)uVar7) / 2 + (int)uVar7;
      uVar1 = *(ulonglong *)(*param_1 + (longlong)iVar4 * 0x18);
      uVar6 = *param_1 + (longlong)iVar4 * 0x18;
      if ((uVar2 < uVar1) || ((uVar2 == uVar1 && (param_2[1] < *(ulonglong *)(uVar6 + 8))))) {
        iVar8 = iVar4 + -1;
      }
      else {
        if ((uVar2 <= uVar1) && ((uVar2 != uVar1 || (param_2[1] <= *(ulonglong *)(uVar6 + 8))))) {
          bVar3 = true;
          goto LAB_14316ba84;
        }
        uVar7 = (ulonglong)(iVar4 + 1);
      }
      iVar4 = (int)uVar7;
    } while (iVar4 <= iVar8);
  }
  bVar3 = false;
  uVar6 = uVar5;
  if (*param_1 != 0) {
    uVar6 = *param_1 + (longlong)iVar4 * 0x18;
  }
LAB_14316ba84:
  if (bVar3) {
    uVar5 = uVar6;
  }
  return uVar5;
}



// FUNCTION 14316bab0 FreeData body=152 status=ok
// SIG undefined FreeData(void)

void AkKeyDataPtrStruct<AkCachePinnedFileSetKey,AkCachePinnedFileSet,AkArrayAllocatorNoAlign<_ArrayPoolDefault>_>
     ::FreeData(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    if ((void *)puVar1[2] != (void *)0x0) {
      *(undefined4 *)(puVar1 + 3) = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,(void *)puVar1[2]);
      puVar1[2] = 0;
      *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
    }
    if ((void *)puVar1[4] != (void *)0x0) {
      *(undefined4 *)(puVar1 + 5) = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,(void *)puVar1[4]);
      puVar1[4] = 0;
      *(undefined4 *)((longlong)puVar1 + 0x2c) = 0;
    }
    if ((void *)*puVar1 != (void *)0x0) {
      *(undefined4 *)(puVar1 + 1) = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*puVar1);
      *puVar1 = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    }
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



// FUNCTION 14316bb50 FUN_14316bb50 body=1661 status=ok
// SIG undefined FUN_14316bb50(void)

void FUN_14316bb50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  uint *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  undefined4 *puVar21;
  undefined8 *puVar22;
  int iVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  ulonglong uVar26;
  longlong *plVar27;
  undefined1 local_res8 [8];
  void *local_a8;
  ulonglong uStack_a0;
  longlong *local_98;
  ulonglong local_90;
  longlong *local_88;
  ulonglong local_80;
  undefined4 local_78;
  uint local_74;
  undefined4 local_70;
  undefined8 local_68;
  byte local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong uStack_48;
  undefined4 *local_40;
  ulonglong uStack_38;
  
  local_50 = *(undefined4 **)(param_1 + 0x10);
  uStack_48 = *(ulonglong *)(param_1 + 0x18);
  local_98 = (longlong *)0x0;
  local_40 = *(undefined4 **)(param_1 + 0x20);
  uStack_38 = *(ulonglong *)(param_1 + 0x28);
  local_90 = 0;
  local_88 = (longlong *)0x0;
  local_80 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  local_a8 = (void *)0x0;
  uStack_a0 = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  CAkEvent::GatherSounds(param_2,&local_98,&local_88,&local_a8,param_3,param_4,param_5);
  uVar19 = local_90 & 0xffffffff;
  if (local_98 != local_98 + uVar19) {
    uVar26 = 0;
    plVar16 = local_98;
    do {
      lVar13 = *plVar16;
      iVar23 = *(int *)(param_1 + 0x18) + -1;
      uVar1 = *(uint *)(lVar13 + 4);
      iVar6 = 0;
      if (-1 < iVar23) {
        uVar24 = *(ulonglong *)(param_1 + 0x10);
        uVar14 = uVar26;
        iVar7 = iVar23;
        do {
          iVar6 = (iVar7 - (int)uVar14) / 2 + (int)uVar14;
          uVar2 = *(uint *)(uVar24 + (longlong)iVar6 * 4);
          if (uVar1 < uVar2) {
            iVar7 = iVar6 + -1;
          }
          else {
            if (uVar1 <= uVar2) {
              bVar4 = true;
              uVar14 = uVar24 + (longlong)iVar6 * 4;
              goto LAB_14316bc7c;
            }
            uVar14 = (ulonglong)(iVar6 + 1);
          }
          iVar6 = (int)uVar14;
        } while (iVar6 <= iVar7);
      }
      uVar9 = *(ulonglong *)(param_1 + 0x10);
      bVar4 = false;
      uVar14 = uVar26;
      uVar24 = uVar26;
      if (uVar9 != 0) {
        uVar14 = uVar9 + (longlong)iVar6 * 4;
        uVar24 = uVar9;
      }
LAB_14316bc7c:
      uVar9 = uVar26;
      if (bVar4) {
        uVar9 = uVar14;
      }
      if ((uVar9 == 0) && (*(int *)(lVar13 + 8) != 0)) {
        uVar19 = uVar26;
        if (-1 < iVar23) {
          do {
            iVar6 = (iVar23 - (int)uVar19) / 2 + (int)uVar19;
            uVar2 = *(uint *)(uVar24 + (longlong)iVar6 * 4);
            if (uVar1 < uVar2) {
              iVar23 = iVar6 + -1;
            }
            else {
              if (uVar1 <= uVar2) goto LAB_14316bd06;
              uVar19 = (ulonglong)(iVar6 + 1);
            }
          } while ((int)uVar19 <= iVar23);
          uVar24 = *(ulonglong *)(param_1 + 0x10);
        }
        if ((uVar24 == 0) || (lVar15 = (longlong)(int)uVar19 * 4, lVar15 + uVar24 == 0)) {
          puVar10 = (uint *)FUN_14316b6b0(param_1 + 0x10);
        }
        else {
          puVar10 = (uint *)FUN_14316c4d0(param_1 + 0x10,lVar15 >> 2 & 0xffffffff);
        }
        if (puVar10 != (uint *)0x0) {
          *puVar10 = uVar1;
        }
LAB_14316bd06:
        if ((*(uint *)(lVar13 + 0xc) & 0x500) == 0) {
          local_5c = *(undefined4 *)(lVar13 + 4);
        }
        else {
          local_5c = 0xffffffff;
        }
        local_60 = (byte)*(uint *)(lVar13 + 0xc) & 1;
        local_74 = (uint)*(ushort *)(lVar13 + 0x1a);
        local_58 = *(undefined4 *)(lVar13 + 8);
        local_78 = 0;
        local_70 = 0;
        local_68 = 0;
        (**(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x38))
                  (AK::IAkStreamMgr::m_pStreamMgr,uVar1,&local_78,*(undefined1 *)(param_1 + 0x30));
        uVar19 = local_90 & 0xffffffff;
      }
      plVar16 = plVar16 + 1;
    } while (plVar16 != local_98 + uVar19);
  }
  plVar27 = (longlong *)(param_1 + 0x20);
  uVar19 = local_80 & 0xffffffff;
  plVar16 = local_88;
  if (local_88 != local_88 + uVar19) {
    do {
      lVar13 = *plVar16;
      iVar23 = 0;
      iVar6 = *(int *)(param_1 + 0x18) + -1;
      uVar1 = *(uint *)(lVar13 + 4);
      if (-1 < iVar6) {
        do {
          iVar7 = (iVar6 - iVar23) / 2 + iVar23;
          lVar15 = *(longlong *)(param_1 + 0x10) + (longlong)iVar7 * 4;
          uVar2 = *(uint *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar7 * 4);
          if (uVar1 < uVar2) {
            iVar6 = iVar7 + -1;
          }
          else {
            if (uVar1 <= uVar2) {
              bVar4 = true;
              goto LAB_14316bdfa;
            }
            iVar23 = iVar7 + 1;
          }
        } while (iVar23 <= iVar6);
      }
      bVar4 = false;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = *(longlong *)(param_1 + 0x10) + (longlong)iVar23 * 4;
      }
LAB_14316bdfa:
      lVar11 = 0;
      if (bVar4) {
        lVar11 = lVar15;
      }
      if (lVar11 == 0) {
        iVar6 = 0;
        iVar23 = *(int *)(param_1 + 0x28) + -1;
        if (-1 < iVar23) {
          lVar15 = *plVar27;
          iVar7 = iVar23;
          do {
            iVar8 = (iVar7 - iVar6) / 2 + iVar6;
            lVar11 = lVar15 + (longlong)iVar8 * 4;
            uVar2 = *(uint *)(lVar15 + (longlong)iVar8 * 4);
            if (uVar1 < uVar2) {
              iVar7 = iVar8 + -1;
            }
            else {
              if (uVar1 <= uVar2) {
                bVar4 = true;
                goto LAB_14316be6a;
              }
              iVar6 = iVar8 + 1;
            }
          } while (iVar6 <= iVar7);
        }
        lVar15 = *plVar27;
        bVar4 = false;
        if (lVar15 == 0) {
          lVar11 = 0;
          lVar15 = 0;
        }
        else {
          lVar11 = lVar15 + (longlong)iVar6 * 4;
        }
LAB_14316be6a:
        lVar12 = 0;
        if (bVar4) {
          lVar12 = lVar11;
        }
        if ((lVar12 == 0) && (*(int *)(lVar13 + 8) != 0)) {
          iVar6 = 0;
          if (-1 < iVar23) {
            do {
              iVar7 = (iVar23 - iVar6) / 2 + iVar6;
              uVar2 = *(uint *)(lVar15 + (longlong)iVar7 * 4);
              if (uVar1 < uVar2) {
                iVar23 = iVar7 + -1;
              }
              else {
                if (uVar1 <= uVar2) goto LAB_14316bf1e;
                iVar6 = iVar7 + 1;
              }
            } while (iVar6 <= iVar23);
            lVar15 = *plVar27;
          }
          if ((lVar15 == 0) || ((longlong)iVar6 * 4 + lVar15 == 0)) {
            uVar2 = *(uint *)(param_1 + 0x28);
            if ((uVar2 < *(uint *)(param_1 + 0x2c)) ||
               ((cVar5 = FUN_143151530(plVar27,1), cVar5 != '\0' &&
                (uVar2 < *(uint *)(param_1 + 0x2c))))) {
              uVar2 = *(uint *)(param_1 + 0x28);
              *(uint *)(param_1 + 0x28) = uVar2 + 1;
              puVar10 = (uint *)(*plVar27 + (ulonglong)uVar2 * 4);
              goto LAB_14316bf17;
            }
          }
          else {
            puVar10 = (uint *)FUN_14316c4d0(plVar27,(longlong)iVar6 * 4 >> 2 & 0xffffffff);
LAB_14316bf17:
            if (puVar10 != (uint *)0x0) {
              *puVar10 = uVar1;
            }
          }
LAB_14316bf1e:
          if ((*(uint *)(lVar13 + 0xc) & 0x500) == 0) {
            local_5c = *(undefined4 *)(lVar13 + 4);
          }
          else {
            local_5c = 0xffffffff;
          }
          local_60 = (byte)*(uint *)(lVar13 + 0xc) & 1;
          local_74 = (uint)*(ushort *)(lVar13 + 0x1a);
          local_58 = *(undefined4 *)(lVar13 + 8);
          local_78 = 0;
          local_70 = 0;
          local_68 = 0;
          (**(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x38))
                    (AK::IAkStreamMgr::m_pStreamMgr,uVar1,&local_78,*(undefined1 *)(param_1 + 0x31))
          ;
          uVar19 = local_80 & 0xffffffff;
        }
      }
      plVar16 = plVar16 + 1;
    } while (plVar16 != local_88 + uVar19);
  }
  puVar21 = local_50;
  puVar25 = (undefined8 *)0x0;
  puVar20 = (undefined8 *)
            ((ulonglong)((longlong)(local_50 + (uStack_48 & 0xffffffff)) + (3 - (longlong)local_50))
            >> 2);
  if (local_50 + (uStack_48 & 0xffffffff) < local_50) {
    puVar20 = puVar25;
  }
  puVar17 = local_50;
  puVar22 = puVar25;
  if (puVar20 != (undefined8 *)0x0) {
    do {
      (**(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x40))
                (AK::IAkStreamMgr::m_pStreamMgr,*puVar17,*(undefined1 *)(param_1 + 0x30));
      puVar22 = (undefined8 *)((longlong)puVar22 + 1);
      puVar17 = puVar17 + 1;
    } while (puVar22 != puVar20);
  }
  puVar17 = local_40;
  puVar20 = (undefined8 *)
            ((ulonglong)((longlong)(local_40 + (uStack_38 & 0xffffffff)) + (3 - (longlong)local_40))
            >> 2);
  if (local_40 + (uStack_38 & 0xffffffff) < local_40) {
    puVar20 = puVar25;
  }
  puVar18 = local_40;
  puVar22 = puVar25;
  if (puVar20 != (undefined8 *)0x0) {
    do {
      (**(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x40))
                (AK::IAkStreamMgr::m_pStreamMgr,*puVar18,*(undefined1 *)(param_1 + 0x31));
      puVar22 = (undefined8 *)((longlong)puVar22 + 1);
      puVar18 = puVar18 + 1;
    } while (puVar22 != puVar20);
  }
  if (puVar21 != (undefined4 *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,puVar21);
  }
  if (puVar17 != (undefined4 *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,puVar17);
  }
  if (local_a8 != (void *)((longlong)local_a8 + (uStack_a0 & 0xffffffff) * 8)) {
    puVar21 = (undefined4 *)((longlong)local_a8 + 4);
    do {
      uVar3 = *puVar21;
      lVar13 = FUN_14316b880(param_1,uVar3);
      if (lVar13 == 0) {
        lVar13 = FUN_14316b930(&DAT_146b51ef0,uVar3);
        if (lVar13 == 0) {
          lVar13 = FUN_14316c830(&DAT_146b51ef0,uVar3,local_res8);
          if (lVar13 != 0) {
            puVar22 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x18);
            puVar20 = puVar25;
            if (puVar22 != (undefined8 *)0x0) {
              puVar17 = *(undefined4 **)(puVar21 + -1);
              puVar22[1] = puVar17;
              local_50 = puVar17;
              CAkSwitchAware::CAkSwitchAware(puVar22);
              *puVar22 = &PTR__scalar_deleting_destructor__145aca4a0;
              *(undefined4 *)(puVar22 + 2) = 1;
              CAkSwitchAware::SubscribeSwitch
                        (puVar22,local_50._4_4_,(ulonglong)puVar17 & 0xffffffff);
              puVar20 = puVar22;
            }
            *(undefined8 **)(lVar13 + 8) = puVar20;
            if (puVar20 != (undefined8 *)0x0) goto LAB_14316c12e;
            FUN_14316cfb0(&DAT_146b51ef0,*puVar21);
          }
        }
        else {
          (**(code **)(**(longlong **)(lVar13 + 8) + 0x10))();
LAB_14316c12e:
          FUN_14316c790(param_1,*puVar21);
        }
      }
      puVar17 = puVar21 + 1;
      puVar21 = puVar21 + 2;
    } while (puVar17 != (undefined4 *)((longlong)local_a8 + (uStack_a0 & 0xffffffff) * 8));
  }
  if (local_98 != (longlong *)0x0) {
    local_90 = local_90 & 0xffffffff00000000;
    AK::MemoryMgr::Free(g_DefaultPoolId,local_98);
    local_98 = (longlong *)0x0;
    local_90 = local_90 & 0xffffffff;
  }
  if (local_88 != (longlong *)0x0) {
    local_80 = local_80 & 0xffffffff00000000;
    AK::MemoryMgr::Free(g_DefaultPoolId,local_88);
    local_88 = (longlong *)0x0;
    local_80 = local_80 & 0xffffffff;
  }
  if (local_a8 != (void *)0x0) {
    uStack_a0 = uStack_a0 & 0xffffffff00000000;
    AK::MemoryMgr::Free(g_DefaultPoolId,local_a8);
  }
  return;
}



// FUNCTION 14316c1d0 FUN_14316c1d0 body=398 status=ok
// SIG undefined FUN_14316c1d0(void)

int FUN_14316c1d0(undefined8 param_1,undefined8 param_2,float *param_3,char *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  char cVar5;
  int iVar6;
  float fVar7;
  char local_res8 [8];
  float local_res10 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  
  *param_4 = '\0';
  fVar7 = 3.4028235e+38;
  iVar6 = 2;
  *param_3 = 0.0;
  local_38 = param_2;
  uStack_30 = param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b51ec8);
  lVar2 = FUN_14316b9e0(&DAT_146b51eb8,&local_38);
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(lVar2 + 0x10);
    puVar4 = *(undefined4 **)(lVar3 + 0x10);
    if (puVar4 != puVar4 + *(uint *)(lVar3 + 0x18)) {
      do {
        iVar1 = (**(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x50))
                          (AK::IAkStreamMgr::m_pStreamMgr,*puVar4,local_res10,local_res8);
        if (iVar1 == 1) {
          iVar6 = 1;
          if (local_res10[0] <= fVar7) {
            fVar7 = local_res10[0];
          }
          if ((*param_4 == '\0') && (local_res8[0] == '\0')) {
            cVar5 = '\0';
          }
          else {
            cVar5 = '\x01';
          }
          *param_4 = cVar5;
        }
        lVar3 = *(longlong *)(lVar2 + 0x10);
        puVar4 = puVar4 + 1;
      } while (puVar4 != (undefined4 *)
                         (*(longlong *)(lVar3 + 0x10) + (ulonglong)*(uint *)(lVar3 + 0x18) * 4));
    }
    puVar4 = *(undefined4 **)(lVar3 + 0x20);
    if (puVar4 != puVar4 + *(uint *)(lVar3 + 0x28)) {
      do {
        iVar1 = (**(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x50))
                          (AK::IAkStreamMgr::m_pStreamMgr,*puVar4,local_res10,local_res8);
        if (iVar1 == 1) {
          iVar6 = 1;
          if (local_res10[0] <= fVar7) {
            fVar7 = local_res10[0];
          }
          if ((*param_4 == '\0') && (local_res8[0] == '\0')) {
            cVar5 = '\0';
          }
          else {
            cVar5 = '\x01';
          }
          *param_4 = cVar5;
        }
        puVar4 = puVar4 + 1;
      } while (puVar4 != (undefined4 *)
                         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x20) +
                         (ulonglong)*(uint *)(*(longlong *)(lVar2 + 0x10) + 0x28) * 4));
    }
    if (iVar6 == 1) {
      *param_3 = fVar7;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b51ec8);
  return iVar6;
}



// FUNCTION 14316c360 FUN_14316c360 body=169 status=ok
// SIG undefined FUN_14316c360(void)

undefined8 FUN_14316c360(longlong *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar5 = *(int *)((longlong)param_1 + 0xc) + param_2;
  puVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar5 << 4);
  if (puVar2 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*param_1;
    if ((puVar4 != (undefined8 *)0x0) && (puVar4 != puVar2)) {
      uVar6 = (ulonglong)*(uint *)(param_1 + 1);
      puVar3 = puVar2;
      if (uVar6 != 0) {
        do {
          if (puVar3 != (undefined8 *)0x0) {
            puVar3[1] = 0;
          }
          puVar4 = (undefined8 *)((longlong)puVar3 + (*param_1 - (longlong)puVar2));
          uVar1 = puVar4[1];
          *puVar3 = *puVar4;
          puVar3[1] = uVar1;
          uVar6 = uVar6 - 1;
          puVar3 = puVar3 + 2;
        } while (uVar6 != 0);
        puVar4 = (undefined8 *)*param_1;
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar4);
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar5;
    *param_1 = (longlong)puVar2;
    return 1;
  }
  return 0;
}



// FUNCTION 14316c410 FUN_14316c410 body=187 status=ok
// SIG undefined FUN_14316c410(void)

undefined8 FUN_14316c410(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar6 = *(int *)((longlong)param_1 + 0xc) + param_2;
  puVar3 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar6 * 0x18);
  if (puVar3 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*param_1;
    if ((puVar5 != (undefined8 *)0x0) && (puVar5 != puVar3)) {
      uVar7 = (ulonglong)*(uint *)(param_1 + 1);
      puVar4 = puVar3;
      if (uVar7 != 0) {
        do {
          if (puVar4 != (undefined8 *)0x0) {
            *puVar4 = 0;
            puVar4[1] = 0;
            puVar4[2] = 0;
          }
          lVar1 = *param_1;
          puVar5 = (undefined8 *)((longlong)puVar4 + (lVar1 - (longlong)puVar3));
          uVar2 = puVar5[1];
          *puVar4 = *puVar5;
          puVar4[1] = uVar2;
          puVar4[2] = *(undefined8 *)((longlong)puVar4 + lVar1 + (0x10 - (longlong)puVar3));
          uVar7 = uVar7 - 1;
          puVar4 = puVar4 + 3;
        } while (uVar7 != 0);
        puVar5 = (undefined8 *)*param_1;
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar5);
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar6;
    *param_1 = (longlong)puVar3;
    return 1;
  }
  return 0;
}



// FUNCTION 14316c4d0 FUN_14316c4d0 body=142 status=ok
// SIG undefined FUN_14316c4d0(void)

longlong FUN_14316c4d0(longlong *param_1,uint param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined4 *puVar5;
  longlong lVar6;
  
  uVar3 = *(uint *)(param_1 + 1);
  if ((*(uint *)((longlong)param_1 + 0xc) <= uVar3) &&
     (cVar4 = FUN_143151530(param_1,1), cVar4 == '\0')) {
    return 0;
  }
  if (*(uint *)((longlong)param_1 + 0xc) <= uVar3) {
    return 0;
  }
  uVar3 = *(uint *)(param_1 + 1);
  lVar2 = (ulonglong)param_2 * 4;
  lVar6 = *param_1;
  *(uint *)(param_1 + 1) = uVar3 + 1;
  puVar5 = (undefined4 *)(lVar6 + (ulonglong)uVar3 * 4);
  if ((undefined4 *)(lVar2 + lVar6) < puVar5) {
    do {
      puVar1 = puVar5 + -1;
      *puVar5 = puVar5[-1];
      lVar6 = *param_1;
      puVar5 = puVar1;
    } while ((undefined4 *)(lVar6 + lVar2) < puVar1);
  }
  return lVar2 + lVar6;
}



// FUNCTION 14316c560 FUN_14316c560 body=473 status=ok
// SIG undefined FUN_14316c560(void)

void FUN_14316c560(undefined8 param_1,undefined8 param_2,char param_3,char param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_28 = param_2;
  uStack_20 = param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b51ec8);
  uVar3 = uStack_20;
  uVar2 = local_28;
  lVar4 = FUN_14316b9e0(&DAT_146b51eb8,&local_28);
  if (lVar4 == 0) {
    local_28 = uVar2;
    uStack_20 = uVar3;
    plVar5 = (longlong *)FUN_14316c960(&DAT_146b51eb8,&local_28,local_res8);
    if (plVar5 != (longlong *)0x0) {
      puVar6 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x38);
      plVar5[2] = (longlong)puVar6;
      if (puVar6 == (undefined8 *)0x0) {
        local_28 = uVar2;
        uStack_20 = uVar3;
        FUN_14316d060(&DAT_146b51eb8,&local_28);
      }
      else {
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        *(undefined2 *)(puVar6 + 6) = 0;
        if (*plVar5 != 0) {
          piVar1 = (int *)(*plVar5 + 0x50);
          *piVar1 = *piVar1 + 1;
        }
        *(char *)(plVar5[2] + 0x30) = param_3;
        *(char *)(plVar5[2] + 0x31) = param_4;
        FUN_14316bb50(plVar5[2],plVar5[1],*plVar5,0,0);
      }
    }
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x10);
    if ((param_3 != *(char *)(lVar4 + 0x30)) || (param_4 != *(char *)(lVar4 + 0x31))) {
      puVar7 = *(undefined4 **)(lVar4 + 0x10);
      if (puVar7 != puVar7 + *(uint *)(lVar4 + 0x18)) {
        do {
          (**(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x48))
                    (AK::IAkStreamMgr::m_pStreamMgr,*puVar7,param_3,*(undefined1 *)(lVar4 + 0x30));
          puVar7 = puVar7 + 1;
        } while (puVar7 != (undefined4 *)
                           (*(longlong *)(lVar4 + 0x10) + (ulonglong)*(uint *)(lVar4 + 0x18) * 4));
      }
      puVar7 = *(undefined4 **)(lVar4 + 0x20);
      if (puVar7 != puVar7 + *(uint *)(lVar4 + 0x28)) {
        do {
          (**(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x48))
                    (AK::IAkStreamMgr::m_pStreamMgr,*puVar7,param_4,*(undefined1 *)(lVar4 + 0x31));
          puVar7 = puVar7 + 1;
        } while (puVar7 != (undefined4 *)
                           (*(longlong *)(lVar4 + 0x20) + (ulonglong)*(uint *)(lVar4 + 0x28) * 4));
      }
      *(char *)(lVar4 + 0x30) = param_3;
      *(char *)(lVar4 + 0x31) = param_4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014316c732. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b51ec8);
  return;
}



// FUNCTION 14316c740 Release body=69 status=ok
// SIG undefined Release(void)

undefined4 AkCacheGameSyncMon::Release(undefined8 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  long lVar3;
  
  piVar1 = (int *)(param_1 + 2);
  *piVar1 = *piVar1 + -1;
  lVar3 = g_DefaultPoolId;
  uVar2 = *(undefined4 *)(param_1 + 2);
  if (*piVar1 == 0) {
    (**(code **)*param_1)(param_1,0);
    AK::MemoryMgr::Free(lVar3,param_1);
  }
  return uVar2;
}



// FUNCTION 14316c790 FUN_14316c790 body=150 status=ok
// SIG undefined FUN_14316c790(void)

uint * FUN_14316c790(longlong *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = (int)param_1[1] + -1;
  if (-1 < iVar5) {
    do {
      iVar2 = (iVar5 - iVar4) / 2 + iVar4;
      uVar1 = *(uint *)(*param_1 + (longlong)iVar2 * 4);
      if (param_2 < uVar1) {
        iVar5 = iVar2 + -1;
      }
      else {
        if (param_2 <= uVar1) {
          return (uint *)(*param_1 + (longlong)iVar2 * 4);
        }
        iVar4 = iVar2 + 1;
      }
    } while (iVar4 <= iVar5);
  }
  if ((*param_1 == 0) || ((longlong)iVar4 * 4 + *param_1 == 0)) {
    puVar3 = (uint *)FUN_14316b6b0(param_1);
  }
  else {
    puVar3 = (uint *)FUN_14316c4d0(param_1,(longlong)iVar4 * 4 >> 2 & 0xffffffff);
  }
  if (puVar3 != (uint *)0x0) {
    *puVar3 = param_2;
  }
  return puVar3;
}



// FUNCTION 14316c830 FUN_14316c830 body=297 status=ok
// SIG undefined FUN_14316c830(void)

undefined4 * FUN_14316c830(longlong *param_1,undefined4 param_2,char *param_3)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  puVar3 = (undefined4 *)FUN_14316b700();
  if (*param_3 != '\0') {
    return puVar3;
  }
  uVar1 = *(uint *)(param_1 + 1);
  if (puVar3 == (undefined4 *)0x0) {
    if ((*(uint *)((longlong)param_1 + 0xc) <= uVar1) &&
       (cVar2 = FUN_14316c360(param_1,1), cVar2 == '\0')) {
      return (undefined4 *)0x0;
    }
    if (*(uint *)((longlong)param_1 + 0xc) <= uVar1) {
      return (undefined4 *)0x0;
    }
    uVar1 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar1 + 1;
    puVar3 = (undefined4 *)((ulonglong)uVar1 * 0x10 + *param_1);
    if (puVar3 != (undefined4 *)0x0) {
      *(undefined8 *)(puVar3 + 2) = 0;
    }
  }
  else {
    lVar6 = *param_1;
    if (((*(uint *)((longlong)param_1 + 0xc) <= uVar1) &&
        (cVar2 = FUN_14316c360(param_1,1), cVar2 == '\0')) ||
       (*(uint *)((longlong)param_1 + 0xc) <= uVar1)) {
      return (undefined4 *)0x0;
    }
    uVar1 = *(uint *)(param_1 + 1);
    lVar5 = *param_1;
    *(uint *)(param_1 + 1) = uVar1 + 1;
    puVar4 = (undefined8 *)((ulonglong)uVar1 * 0x10 + lVar5);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = 0;
      lVar5 = *param_1;
    }
    lVar6 = ((longlong)puVar3 - lVar6 >> 4 & 0xffffffffU) * 0x10;
    if ((undefined8 *)(lVar6 + lVar5) < puVar4) {
      do {
        *puVar4 = puVar4[-2];
        puVar4[1] = puVar4[-1];
        lVar5 = *param_1;
        puVar4 = puVar4 + -2;
      } while ((undefined8 *)(lVar5 + lVar6) < puVar4);
    }
    if (lVar6 + lVar5 != 0) {
      *(undefined8 *)(lVar6 + lVar5 + 8) = 0;
      lVar5 = *param_1;
    }
    puVar3 = (undefined4 *)(lVar5 + lVar6);
  }
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = param_2;
  }
  return puVar3;
}



// FUNCTION 14316c960 FUN_14316c960 body=381 status=ok
// SIG undefined FUN_14316c960(void)

undefined8 * FUN_14316c960(longlong *param_1,undefined8 *param_2,char *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)param_2;
  uStack_14 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_10 = *(undefined4 *)(param_2 + 1);
  uStack_c = *(undefined4 *)((longlong)param_2 + 0xc);
  puVar4 = (undefined8 *)FUN_14316b7a0(local_18,&local_18);
  if (*param_3 != '\0') {
    return puVar4;
  }
  uVar1 = *(uint *)(param_1 + 1);
  if (puVar4 == (undefined8 *)0x0) {
    if (((uVar1 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar3 = FUN_14316c410(param_1,1), cVar3 != '\0')) &&
       (uVar1 < *(uint *)((longlong)param_1 + 0xc))) {
      puVar4 = (undefined8 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x18);
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
      if (puVar4 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      goto LAB_14316cab2;
    }
  }
  else {
    lVar5 = ((longlong)puVar4 - *param_1) / 6 + ((longlong)puVar4 - *param_1 >> 0x3f);
    if (((uVar1 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar3 = FUN_14316c410(param_1), cVar3 != '\0')) &&
       (uVar1 < *(uint *)((longlong)param_1 + 0xc))) {
      lVar6 = *param_1;
      puVar4 = (undefined8 *)(lVar6 + (ulonglong)*(uint *)(param_1 + 1) * 0x18);
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        lVar6 = *param_1;
      }
      lVar5 = ((lVar5 >> 2) - (lVar5 >> 0x3f) & 0xffffffffU) * 0x18;
      if ((undefined8 *)(lVar5 + lVar6) < puVar4) {
        do {
          *puVar4 = puVar4[-3];
          puVar4[1] = puVar4[-2];
          puVar4[2] = puVar4[-1];
          puVar4 = puVar4 + -3;
          lVar6 = *param_1;
        } while ((undefined8 *)(lVar6 + lVar5) < puVar4);
      }
      puVar4 = (undefined8 *)(lVar5 + lVar6);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        lVar6 = *param_1;
      }
      puVar4 = (undefined8 *)(lVar5 + lVar6);
LAB_14316cab2:
      if (puVar4 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      uVar2 = param_2[1];
      *puVar4 = *param_2;
      puVar4[1] = uVar2;
      return puVar4;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14316cae0 FUN_14316cae0 body=363 status=ok
// SIG undefined FUN_14316cae0(void)

void FUN_14316cae0(longlong param_1,undefined4 param_2,ulonglong *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  ulonglong *puVar5;
  int iVar6;
  int iVar7;
  ulonglong local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined1 local_30;
  undefined1 local_28;
  undefined8 local_20;
  
  uVar1 = *param_3;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b51ec8);
  iVar6 = 0;
  iVar4 = 0;
  iVar7 = DAT_146b51ec0 - 1;
  if (-1 < iVar7) {
    do {
      iVar4 = (iVar7 - iVar6) / 2 + iVar6;
      uVar2 = *(ulonglong *)(DAT_146b51eb8 + (longlong)iVar4 * 0x18);
      puVar5 = (ulonglong *)(DAT_146b51eb8 + (longlong)iVar4 * 0x18);
      if ((uVar1 < uVar2) || ((uVar1 == uVar2 && (puVar5[1] != 0)))) {
        iVar7 = iVar4 + -1;
        iVar4 = iVar6;
      }
      else {
        if (uVar1 <= uVar2) goto LAB_14316cb93;
        iVar4 = iVar4 + 1;
      }
      iVar6 = iVar4;
    } while (iVar4 <= iVar7);
  }
  if (DAT_146b51eb8 == 0) {
    puVar5 = (ulonglong *)0x0;
  }
  else {
    puVar5 = (ulonglong *)(DAT_146b51eb8 + (longlong)iVar4 * 0x18);
  }
LAB_14316cb93:
  if (puVar5 != (ulonglong *)(DAT_146b51eb8 + (ulonglong)DAT_146b51ec0 * 0x18)) {
    do {
      if (puVar5 == (ulonglong *)0x0) break;
      if (*puVar5 != *param_3) {
        if (*param_3 != 0) break;
        if (param_4 != (undefined8 *)0x0) {
          local_40 = 0;
          local_38 = 0;
          local_30 = 0xff;
          local_28 = 0xff;
          local_20 = 0;
          local_48 = *puVar5;
          cVar3 = (**(code **)*param_4)(param_4,&local_48);
          if (cVar3 != '\0') break;
        }
      }
      FUN_14316bb50(puVar5[2],puVar5[1],*puVar5,*(undefined4 *)(param_1 + 0xc),param_2);
      puVar5 = puVar5 + 3;
    } while (puVar5 != (ulonglong *)(DAT_146b51eb8 + (ulonglong)DAT_146b51ec0 * 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00014316cc44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b51ec8);
  return;
}



// FUNCTION 14316cc50 UnpinAllFilesInStreamCache body=486 status=ok
// SIG undefined UnpinAllFilesInStreamCache(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UnpinAllFilesInStreamCache(longlong param_1)

{
  int *piVar1;
  long lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b51ec8);
  uVar3 = (ulonglong)DAT_146b51ec0;
  puVar4 = DAT_146b51eb8;
  puVar5 = DAT_146b51eb8;
  if (DAT_146b51eb8 != DAT_146b51eb8 + uVar3 * 3) {
    do {
      if (puVar4[1] == param_1) {
        AkCachePinnedFileSet::UnpinFilesInStreamCache(puVar4[2]);
        FUN_14316d150(puVar4[2]);
        puVar5 = (undefined8 *)*puVar4;
        if (puVar5 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar5 + 10);
          *piVar1 = *piVar1 + -1;
          lVar2 = g_DefaultPoolId;
          if (*piVar1 == 0) {
            (**(code **)*puVar5)(puVar5,0);
            AK::MemoryMgr::Free(lVar2,puVar5);
          }
        }
        puVar5 = (undefined8 *)puVar4[2];
        if (puVar5 != (undefined8 *)0x0) {
          if ((void *)puVar5[2] != (void *)0x0) {
            *(undefined4 *)(puVar5 + 3) = 0;
            AK::MemoryMgr::Free(g_DefaultPoolId,(void *)puVar5[2]);
            puVar5[2] = 0;
            *(undefined4 *)((longlong)puVar5 + 0x1c) = 0;
          }
          if ((void *)puVar5[4] != (void *)0x0) {
            *(undefined4 *)(puVar5 + 5) = 0;
            AK::MemoryMgr::Free(g_DefaultPoolId,(void *)puVar5[4]);
            puVar5[4] = 0;
            *(undefined4 *)((longlong)puVar5 + 0x2c) = 0;
          }
          if ((void *)*puVar5 != (void *)0x0) {
            *(undefined4 *)(puVar5 + 1) = 0;
            AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*puVar5);
            *puVar5 = 0;
            *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
          }
          AK::MemoryMgr::Free(g_DefaultPoolId,(void *)puVar4[2]);
          puVar4[2] = 0;
        }
        if (puVar4 < DAT_146b51eb8 + ((ulonglong)DAT_146b51ec0 - 1) * 3) {
          puVar5 = puVar4 + 3;
          puVar6 = puVar4;
          for (uVar3 = ((ulonglong)
                        ((longlong)(DAT_146b51eb8 + ((ulonglong)DAT_146b51ec0 - 1) * 3) +
                        (-1 - (longlong)puVar4)) / 0x18 + 1) * 3 & 0x1fffffffffffffff; uVar3 != 0;
              uVar3 = uVar3 - 1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
        }
        DAT_146b51ec0 = DAT_146b51ec0 - 1;
        uVar3 = (ulonglong)DAT_146b51ec0;
        puVar5 = DAT_146b51eb8;
      }
      else {
        puVar4 = puVar4 + 3;
      }
    } while (puVar4 != puVar5 + uVar3 * 3);
  }
  if (((int)uVar3 == 0) && (puVar5 != (undefined8 *)0x0)) {
    DAT_146b51ec0 = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,puVar5);
    DAT_146b51eb8 = (undefined8 *)0x0;
    _DAT_146b51ec4 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014316ce2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b51ec8);
  return;
}



// FUNCTION 14316ce40 FUN_14316ce40 body=203 status=ok
// SIG undefined FUN_14316ce40(void)

void FUN_14316ce40(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_28 = param_2;
  uStack_20 = param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b51ec8);
  uVar5 = uStack_20;
  uVar4 = local_28;
  puVar6 = (undefined8 *)FUN_14316b9e0(&DAT_146b51eb8,&local_28);
  if (puVar6 != (undefined8 *)0x0) {
    AkCachePinnedFileSet::UnpinFilesInStreamCache(puVar6[2]);
    FUN_14316d150(puVar6[2]);
    puVar2 = (undefined8 *)*puVar6;
    if (puVar2 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar2 + 10);
      *piVar1 = *piVar1 + -1;
      lVar3 = g_DefaultPoolId;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,0);
        AK::MemoryMgr::Free(lVar3,puVar2);
      }
    }
    AkKeyDataPtrStruct<AkCachePinnedFileSetKey,AkCachePinnedFileSet,AkArrayAllocatorNoAlign<_ArrayPoolDefault>_>
    ::FreeData(puVar6);
    local_28 = uVar4;
    uStack_20 = uVar5;
    FUN_14316d060(&DAT_146b51eb8,&local_28);
  }
                    /* WARNING: Could not recover jumptable at 0x00014316cf04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b51ec8);
  return;
}



// FUNCTION 14316cf10 UnpinFilesInStreamCache body=155 status=ok
// SIG undefined UnpinFilesInStreamCache(void)

void AkCachePinnedFileSet::UnpinFilesInStreamCache(longlong param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  if (puVar1 != puVar1 + *(uint *)(param_1 + 0x18)) {
    do {
      (**(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x40))
                (AK::IAkStreamMgr::m_pStreamMgr,*puVar1,*(undefined1 *)(param_1 + 0x30));
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined4 *)
                       (*(longlong *)(param_1 + 0x10) + (ulonglong)*(uint *)(param_1 + 0x18) * 4));
  }
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  if (puVar1 != puVar1 + *(uint *)(param_1 + 0x28)) {
    do {
      (**(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x40))
                (AK::IAkStreamMgr::m_pStreamMgr,*puVar1,*(undefined1 *)(param_1 + 0x31));
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined4 *)
                       (*(longlong *)(param_1 + 0x20) + (ulonglong)*(uint *)(param_1 + 0x28) * 4));
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 14316cfb0 FUN_14316cfb0 body=171 status=ok
// SIG undefined FUN_14316cfb0(void)

ulonglong FUN_14316cfb0(longlong *param_1,uint param_2)

{
  uint uVar1;
  ulonglong in_RAX;
  uint *puVar2;
  ulonglong uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar7 = *(uint *)(param_1 + 1);
  uVar8 = (ulonglong)uVar7;
  iVar6 = 0;
  iVar5 = uVar7 - 1;
  if (-1 < iVar5) {
    do {
      uVar1 = (iVar5 - iVar6) / 2 + iVar6;
      in_RAX = (ulonglong)uVar1;
      puVar4 = (uint *)((longlong)(int)uVar1 * 0x10 + *param_1);
      if (param_2 < *puVar4) {
        iVar5 = uVar1 - 1;
      }
      else {
        if (param_2 <= *puVar4) {
          puVar2 = (uint *)(*param_1 + -0x10 + uVar8 * 0x10);
          if (puVar4 < puVar2) {
            uVar3 = ((ulonglong)((longlong)puVar2 + (-1 - (longlong)puVar4)) >> 3 &
                    0xfffffffffffffffe) + 2 & 0x1ffffffffffffffe;
            puVar2 = puVar4 + 4;
            for (; uVar3 != 0; uVar3 = uVar3 - 1) {
              *(undefined8 *)puVar4 = *(undefined8 *)puVar2;
              puVar2 = puVar2 + 2;
              puVar4 = puVar4 + 2;
            }
            uVar7 = *(uint *)(param_1 + 1);
          }
          *(uint *)(param_1 + 1) = uVar7 - 1;
          return CONCAT71((int7)(uVar8 * 0x10 >> 8),1);
        }
        iVar6 = uVar1 + 1;
      }
    } while (iVar6 <= iVar5);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14316d060 FUN_14316d060 body=238 status=ok
// SIG undefined FUN_14316d060(void)

ulonglong FUN_14316d060(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  ulonglong in_RAX;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  
  uVar7 = *(uint *)(param_1 + 1);
  uVar5 = (ulonglong)uVar7;
  iVar8 = 0;
  uVar6 = *param_2;
  iVar11 = uVar7 - 1;
  if (-1 < iVar11) {
    lVar1 = *param_1;
    do {
      uVar4 = (iVar11 - iVar8) / 2 + iVar8;
      in_RAX = (ulonglong)uVar4;
      uVar2 = *(ulonglong *)(lVar1 + (longlong)(int)uVar4 * 0x18);
      puVar10 = (undefined8 *)(lVar1 + (longlong)(int)uVar4 * 0x18);
      if ((uVar6 < uVar2) || ((uVar6 == uVar2 && (param_2[1] < (ulonglong)puVar10[1])))) {
        iVar11 = uVar4 - 1;
      }
      else {
        if ((uVar6 <= uVar2) && ((uVar6 != uVar2 || (param_2[1] <= (ulonglong)puVar10[1])))) {
          puVar9 = (undefined8 *)(lVar1 + (uVar5 - 1) * 0x18);
          if (puVar10 < puVar9) {
            uVar6 = (longlong)puVar9 + (-1 - (longlong)puVar10);
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar6;
            uVar5 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar3,0);
            puVar9 = puVar10 + 3;
            for (uVar6 = (uVar6 / 0x18 + 1) * 3 & 0x1fffffffffffffff; uVar6 != 0; uVar6 = uVar6 - 1)
            {
              *puVar10 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar10 = puVar10 + 1;
            }
            uVar7 = *(uint *)(param_1 + 1);
          }
          *(uint *)(param_1 + 1) = uVar7 - 1;
          return CONCAT71((int7)(uVar5 >> 8),1);
        }
        iVar8 = uVar4 + 1;
      }
    } while (iVar8 <= iVar11);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14316d150 FUN_14316d150 body=495 status=ok
// SIG undefined FUN_14316d150(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14316d150(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  void *pvVar10;
  uint *puVar11;
  
  puVar11 = (uint *)0x0;
  puVar8 = (uint *)*param_1;
  if (puVar8 != puVar8 + *(uint *)(param_1 + 1)) {
    uVar6 = (ulonglong)DAT_146b51ef8;
    pvVar10 = DAT_146b51ef0;
    do {
      uVar2 = *puVar8;
      iVar9 = (int)uVar6 + -1;
      puVar5 = puVar11;
      iVar4 = 0;
      if (-1 < iVar9) {
        do {
          iVar4 = (iVar9 - (int)puVar5) / 2 + (int)puVar5;
          puVar7 = (uint *)((longlong)iVar4 * 0x10 + (longlong)pvVar10);
          uVar1 = *puVar7;
          if (uVar2 < uVar1) {
            iVar9 = iVar4 + -1;
          }
          else {
            if (uVar2 <= uVar1) {
              bVar3 = true;
              goto LAB_14316d201;
            }
            puVar5 = (uint *)(ulonglong)(iVar4 + 1);
          }
          iVar4 = (int)puVar5;
        } while (iVar4 <= iVar9);
      }
      bVar3 = false;
      puVar7 = puVar11;
      if (pvVar10 != (void *)0x0) {
        puVar7 = (uint *)((longlong)iVar4 * 0x10 + (longlong)pvVar10);
      }
LAB_14316d201:
      puVar5 = puVar11;
      if (bVar3) {
        puVar5 = puVar7;
      }
      if (puVar5 != (uint *)0x0) {
        iVar4 = (**(code **)(**(longlong **)(puVar5 + 2) + 0x18))();
        if (iVar4 == 0) {
          puVar5[2] = 0;
          puVar5[3] = 0;
          uVar6 = (ulonglong)DAT_146b51ef8;
          iVar4 = DAT_146b51ef8 - 1;
          puVar5 = puVar11;
          pvVar10 = DAT_146b51ef0;
          if (-1 < iVar4) {
            do {
              iVar9 = (iVar4 - (int)puVar5) / 2 + (int)puVar5;
              puVar7 = (uint *)((longlong)iVar9 * 0x10 + (longlong)DAT_146b51ef0);
              if (*puVar7 <= uVar2) {
                if (*puVar7 < uVar2) {
                  puVar5 = (uint *)(ulonglong)(iVar9 + 1);
                  goto LAB_14316d269;
                }
                puVar5 = (uint *)((longlong)DAT_146b51ef0 + uVar6 * 0x10 + -0x10);
                if (puVar7 < puVar5) {
                  uVar6 = ((ulonglong)((longlong)puVar5 + (-1 - (longlong)puVar7)) >> 3 &
                          0xfffffffffffffffe) + 2 & 0x1ffffffffffffffe;
                  puVar5 = puVar7 + 4;
                  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
                    *(undefined8 *)puVar7 = *(undefined8 *)puVar5;
                    puVar5 = puVar5 + 2;
                    puVar7 = puVar7 + 2;
                  }
                }
                DAT_146b51ef8 = DAT_146b51ef8 - 1;
                uVar6 = (ulonglong)DAT_146b51ef8;
                pvVar10 = DAT_146b51ef0;
                break;
              }
              iVar4 = iVar9 + -1;
LAB_14316d269:
            } while ((int)puVar5 <= iVar4);
          }
        }
        else {
          uVar6 = (ulonglong)DAT_146b51ef8;
          pvVar10 = DAT_146b51ef0;
        }
      }
      puVar8 = puVar8 + 1;
    } while (puVar8 != (uint *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 4));
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((DAT_146b51ef8 == 0) && (DAT_146b51ef0 != (void *)0x0)) {
    DAT_146b51ef8 = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,DAT_146b51ef0);
    DAT_146b51ef0 = (void *)0x0;
    _DAT_146b51efc = 0;
  }
  return;
}



// FUNCTION 14316d340 AddCtx body=260 status=ok
// SIG undefined AddCtx(void)

longlong *
CAkMidiDeviceMgr::AddCtx(undefined8 param_1,int param_2,longlong param_3,undefined1 param_4)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  longlong local_28 [2];
  undefined4 local_18;
  int local_14;
  
  if (((DAT_146b51f00 == 0) || (param_3 == 0)) || (param_2 == 0)) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar5 = (longlong *)0x0;
    local_28[1] = 0;
    local_18 = 0;
    local_28[0] = 0;
    LOCK();
    UNLOCK();
    local_14 = AK::SoundEngine::g_PlayingID + 1;
    local_30 = 0;
    local_38 = 0;
    local_34 = 4;
    AK::SoundEngine::g_PlayingID = AK::SoundEngine::g_PlayingID + 1;
    pvVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x78);
    plVar4 = plVar5;
    if (((pvVar2 != (void *)0x0) &&
        (plVar3 = (longlong *)
                  CAkMidiDeviceCtx::CAkMidiDeviceCtx
                            (pvVar2,param_1,param_3,&local_38,local_28,param_2,param_4),
        plVar3 != (longlong *)0x0)) &&
       (iVar1 = (**(code **)(*plVar3 + 8))(plVar3), plVar4 = plVar3, iVar1 != 1)) {
      CAkMidiBaseCtx::Release(plVar3);
      plVar4 = plVar5;
    }
    if (local_28[0] != 0) {
      AkExternalSourceArray::Release();
    }
  }
  return plVar4;
}



// FUNCTION 14316d450 Create body=146 status=ok
// SIG undefined Create(void)

undefined8 * CAkMidiDeviceMgr::Create(void)

{
  undefined8 *puVar1;
  
  if (DAT_146b51f00 == (undefined8 *)0x0) {
    puVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x38);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      CAkMidiBaseMgr::CAkMidiBaseMgr(puVar1);
      *puVar1 = &PTR_LAB_145aca4c0;
    }
    if (puVar1 != (undefined8 *)0x0) {
      DAT_146b51f00 = puVar1;
      AK::SoundEngine::RegisterGlobalCallback(GlobalCallback,0x90,(void *)0x0,0,0,0);
      return DAT_146b51f00;
    }
    DAT_146b51f00 = (undefined8 *)0x0;
  }
  return DAT_146b51f00;
}



// FUNCTION 14316d4f0 Destroy body=120 status=ok
// SIG undefined Destroy(void)

void CAkMidiDeviceMgr::Destroy(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  long lVar3;
  
  AK::SoundEngine::UnregisterGlobalCallback(GlobalCallback,0x90);
  lVar2 = param_1[2];
  lVar3 = g_DefaultPoolId;
  while (g_DefaultPoolId = lVar3, lVar2 != 0) {
    lVar1 = *(longlong *)(lVar2 + 8);
    CAkMidiDeviceCtx::DetachAndRelease(lVar2);
    lVar2 = lVar1;
    lVar3 = g_DefaultPoolId;
  }
  *param_1 = &PTR_LAB_145aca4c0;
  DAT_146b51f00 = 0;
  FUN_1431bad30(param_1);
  AK::MemoryMgr::Free(lVar3,param_1);
  return;
}



// FUNCTION 14316d570 GetCtx body=48 status=ok
// SIG undefined GetCtx(void)

longlong CAkMidiDeviceMgr::GetCtx(longlong param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  
  if (((DAT_146b51f00 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    for (lVar1 = *(longlong *)(param_1 + 0x10); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 8)) {
      if ((*(int *)(lVar1 + 0x3c) == param_2) && (*(longlong *)(lVar1 + 0x10) == param_3)) {
        return lVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 14316d5a0 GlobalCallback body=141 status=ok
// SIG undefined GlobalCallback(void)

void CAkMidiDeviceMgr::GlobalCallback(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 uVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if ((DAT_146b51f00 != 0) &&
     (uVar4 = (**(code **)(*param_1 + 0x10))(), lVar3 = DAT_146b51f00, DAT_146b51f00 != 0)) {
    local_18 = 0;
    uStack_10 = 0;
    lVar2 = *(longlong *)(DAT_146b51f00 + 0x10);
    while (lVar2 != 0) {
      lVar1 = *(longlong *)(lVar2 + 8);
      CAkMidiDeviceCtx::OnFrame(lVar2,&local_18,uVar4);
      lVar2 = lVar1;
    }
    FUN_1431bb5f0(lVar3,&local_18,uVar4);
  }
  return;
}



// FUNCTION 14316d630 PostEvents body=249 status=ok
// SIG undefined PostEvents(void)

void CAkMidiDeviceMgr::PostEvents
               (undefined8 param_1,int param_2,__uint64 param_3,longlong param_4,uint param_5)

{
  CAkRegisteredObj *pCVar1;
  long lVar2;
  CAkRegisteredObj *pCVar3;
  longlong lVar4;
  ushort uVar5;
  
  if ((((DAT_146b51f00 != 0) && (param_2 != 0)) && (param_3 != 0xffffffffffffffff)) &&
     (pCVar3 = CAkRegistryMgr::GetObjAndAddref(g_pRegistryMgr,param_3),
     pCVar3 != (CAkRegisteredObj *)0x0)) {
    lVar4 = GetCtx(param_1,param_2,pCVar3);
    if (lVar4 == 0) {
      lVar4 = AddCtx(param_1,param_2,pCVar3,1);
    }
    pCVar1 = pCVar3 + 0x50;
    *(int *)pCVar1 = *(int *)pCVar1 + -1;
    lVar2 = g_DefaultPoolId;
    if (*(int *)pCVar1 == 0) {
      (*(code *)**(undefined8 **)pCVar3)(pCVar3,0);
      AK::MemoryMgr::Free(lVar2,pCVar3);
    }
    if ((lVar4 != 0) && (uVar5 = 0, param_5 != 0)) {
      do {
        CAkMidiDeviceCtx::AddEvent
                  (lVar4,param_4 + (ulonglong)uVar5 * 8,
                   *(undefined4 *)(param_4 + 4 + (ulonglong)uVar5 * 8));
        uVar5 = uVar5 + 1;
      } while (uVar5 < param_5);
    }
  }
  return;
}



// FUNCTION 14316d730 StopAll body=123 status=ok
// SIG undefined StopAll(void)

void CAkMidiDeviceMgr::StopAll(longlong param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (DAT_146b51f00 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    while (lVar2 = lVar1, lVar2 != 0) {
      lVar1 = *(longlong *)(lVar2 + 8);
      if ((*(int *)(lVar2 + 0x3c) == param_2) || (param_2 == 0)) {
        if (*(longlong *)(lVar2 + 0x10) == 0) {
          lVar2 = -1;
        }
        else {
          lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x48);
        }
        if ((lVar2 == param_3) || (param_3 == -1)) {
          CAkMidiDeviceCtx::DetachAndRelease();
        }
      }
    }
  }
  return;
}



// FUNCTION 14316d7b0 CAkVPLFilterNodeOutOfPlace body=179 status=ok
// SIG undefined CAkVPLFilterNodeOutOfPlace(void)

undefined8 * CAkVPLFilterNodeOutOfPlace::CAkVPLFilterNodeOutOfPlace(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 10) = 0xff;
  *(undefined1 *)(param_1 + 0xb) = 0xff;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[4] = &PTR__scalar_deleting_destructor__145aca6e8;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *param_1 = &PTR__scalar_deleting_destructor__145aca798;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) & 0xff;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0x2b;
  *(undefined2 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(uint *)(param_1 + 0x1e) = *(uint *)(param_1 + 0x1e) & 0xff;
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0x2b;
  *(undefined2 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  return param_1;
}



// FUNCTION 14316d870 FUN_14316d870 body=543 status=ok
// SIG undefined FUN_14316d870(void)

undefined8 * FUN_14316d870(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xc5800000;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0xf9 | 1;
  *param_1 = &PTR__scalar_deleting_destructor__145aca668;
  param_1[0x10] = &PTR__scalar_deleting_destructor__145aca560;
  param_1[0x11] = 0;
  CAkResampler::CAkResampler(param_1 + 0x12);
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(uint *)(param_1 + 0x1f) = *(uint *)(param_1 + 0x1f) & 0xff;
  param_1[0x1e] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0x2b;
  *(undefined2 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(uint *)(param_1 + 0x26) = *(uint *)(param_1 + 0x26) & 0xff;
  param_1[0x2c] = param_1;
  param_1[0x2d] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0x2b;
  *(undefined2 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x124) = 1;
  param_1[0x25] = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0x2b;
  *(undefined2 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 1;
  param_1[0x30] = 0;
  param_1[0x2f] = &PTR__scalar_deleting_destructor__145aca518;
  CAkSrcLpHpFilter::CAkSrcLpHpFilter(param_1 + 0x31);
  param_1[0x45] = 0;
  param_1[0x44] = &PTR__scalar_deleting_destructor__145aca5a8;
  param_1[0x46] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(byte *)((longlong)param_1 + 0x254) = *(byte *)((longlong)param_1 + 0x254) & 0xfe;
  *(undefined4 *)(param_1 + 0x49) = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xff;
  param_1[0x4b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x264) = 0x2b;
  *(undefined2 *)(param_1 + 0x4e) = 0;
  param_1[0x4f] = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  *(uint *)(param_1 + 0x53) = *(uint *)(param_1 + 0x53) & 0xff;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  return param_1;
}



// FUNCTION 14316da90 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FWorldTilesGatherer::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_143182750();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 14316dad0 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkVPLBQFNode::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  AK::MemoryMgr::StartProfileThreadUsage((int)param_1 + 0x10);
  *param_1 = &PTR_FUN_145aca4d0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 14316db20 `scalar_deleting_destructor' body=99 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkVPLFilterNode::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  param_1[4] = &PTR__scalar_deleting_destructor__145ac6a78;
  FUN_14318ccc0(param_1 + 4);
  param_1[4] = &PTR_FUN_144024f50;
  *param_1 = &PTR_FUN_145aca4d0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 14316db90 `scalar_deleting_destructor' body=99 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
CAkVPLFilterNodeOutOfPlace::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  param_1[4] = &PTR__scalar_deleting_destructor__145ac6a78;
  FUN_14318ccc0(param_1 + 4);
  param_1[4] = &PTR_FUN_144024f50;
  *param_1 = &PTR_FUN_145aca4d0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x148);
  }
  return param_1;
}



// FUNCTION 14316dc00 FUN_14316dc00 body=43 status=ok
// SIG undefined FUN_14316dc00(void)

undefined8 * FUN_14316dc00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145aca4d0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14316dc30 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkVPLPitchNode::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  AK::MemoryMgr::StartProfileThreadUsage((int)param_1 + 0x10);
  *param_1 = &PTR_FUN_145aca4d0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 14316dc80 `scalar_deleting_destructor' body=132 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkVPLSrcCbxNode::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145aca668;
  CAkVPLVolAutmNode::~CAkVPLVolAutmNode(param_1 + 0x44);
  AK::MemoryMgr::StartProfileThreadUsage((int)param_1 + 0x188);
  param_1[0x2f] = &PTR_FUN_145aca4d0;
  AK::MemoryMgr::StartProfileThreadUsage((int)param_1 + 0x90);
  param_1[0x10] = &PTR_FUN_145aca4d0;
  FUN_143182750(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2a0);
  }
  return param_1;
}



// FUNCTION 14316dd10 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 CAkVPLVolAutmNode::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~CAkVPLVolAutmNode();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14316dd50 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
CAkVPLFilterNodeBase::PluginParams::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ac6a78;
  FUN_14318ccc0();
  *param_1 = &PTR_FUN_144024f50;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 14316dda0 FUN_14316dda0 body=1025 status=ok
// SIG undefined FUN_14316dda0(void)

int FUN_14316dda0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  longlong *_Dst;
  void *_Dst_00;
  byte bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong *plVar11;
  longlong *local_res10;
  undefined8 local_b8;
  undefined2 local_b0;
  undefined1 local_ae;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined2 local_90;
  longlong local_88 [10];
  
  uVar3 = DAT_1467bdcac;
  local_88[0] = *(longlong *)(param_1 + 0x238);
  lVar1 = *(longlong *)(local_88[0] + 0x18);
  local_a8 = *(undefined8 *)(lVar1 + 0x230);
  local_a0 = *(undefined4 *)(lVar1 + 0x238);
  iVar5 = CAkVPLPitchNode::Init(param_1 + 0x80,&local_a8,lVar1,DAT_1467bdcac);
  if (iVar5 != 1) {
    return 2;
  }
  uVar7 = 2;
  plVar11 = (longlong *)(param_1 + 0x200);
  uVar10 = 0;
  local_a8 = CONCAT44(local_a8._4_4_,uVar3);
  plVar9 = plVar11;
  local_88[1] = param_1 + 0x80;
  do {
    local_98 = (longlong *)0x0;
    FUN_14317dce0(lVar1,uVar10,&local_98);
    if (local_98 != (longlong *)0x0) {
      local_res10 = (longlong *)0x0;
      local_b8 = 0;
      local_b0 = 1;
      local_ae = 0;
      iVar5 = FUN_143128650((int)local_98[6],&local_res10,&local_b8);
      if (iVar5 == 1) {
        iVar5 = CAkEffectsMgr::ValidatePluginInfo((int)local_98[6],3,&local_b8);
        if (iVar5 == 0) {
          if ((char)local_b0 == '\0') {
            _Dst_00 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,0x148);
            if (_Dst_00 == (void *)0x0) goto LAB_14316e179;
            _guard_xfg_dispatch_icall_nop(_Dst_00,0,0x148);
            _Dst = (longlong *)CAkVPLFilterNodeOutOfPlace::CAkVPLFilterNodeOutOfPlace(_Dst_00);
          }
          else {
            if (local_b0._1_1_ != '\0') goto LAB_14316ded0;
            _Dst = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,0xb0);
            if (_Dst == (longlong *)0x0) goto LAB_14316e179;
            _guard_xfg_dispatch_icall_nop(_Dst,0,0xb0);
            _Dst[5] = 0;
            _Dst[6] = 0;
            _Dst[7] = 0;
            *(undefined4 *)(_Dst + 8) = 0;
            *(undefined4 *)(_Dst + 9) = 0;
            *(undefined1 *)(_Dst + 10) = 0xff;
            *(undefined1 *)(_Dst + 0xb) = 0xff;
            _Dst[0xc] = 0;
            _Dst[0xd] = 0;
            _Dst[0xe] = 0;
            _Dst[4] = (longlong)&PTR__scalar_deleting_destructor__145aca6e8;
            _Dst[0xf] = 0;
            *(undefined4 *)(_Dst + 0x10) = 0xffffffff;
            *_Dst = (longlong)&PTR__scalar_deleting_destructor__145aca710;
            *(undefined1 *)(_Dst + 0x15) = 0;
            *(uint *)(_Dst + 0x15) = *(uint *)(_Dst + 0x15) & 0xff;
          }
          if (_Dst == (longlong *)0x0) {
LAB_14316e179:
            (**(code **)(*local_res10 + 8))(local_res10,&PTR_PTR_1467be108);
            if (local_98 == (longlong *)0x0) {
              return 2;
            }
            (**(code **)(*local_98 + 0x10))();
            return 2;
          }
          iVar5 = (**(code **)(*_Dst + 0x48))(_Dst,local_res10,&local_98,uVar10,param_1,&local_a8);
          if (iVar5 == 1) {
            uVar8 = (ulonglong)(byte)((char)uVar7 + 1);
            *plVar9 = (longlong)_Dst;
            local_88[uVar7] = (longlong)_Dst;
            uVar7 = uVar8;
            if (local_98 != (longlong *)0x0) {
              (**(code **)(*local_98 + 0x10))();
              local_98 = (longlong *)0x0;
            }
          }
          else {
            (**(code **)(*_Dst + 0x50))(_Dst);
            lVar4 = g_LEngineDefaultPoolId;
            (**(code **)*_Dst)(_Dst,0);
            AK::MemoryMgr::Free(lVar4,_Dst);
            if (local_98 != (longlong *)0x0) {
              (**(code **)(*local_98 + 0x10))();
              local_98 = (longlong *)0x0;
            }
          }
          goto LAB_14316e04b;
        }
LAB_14316ded0:
        (**(code **)(*local_res10 + 8))(local_res10,&PTR_PTR_1467be108);
      }
      if (local_98 != (longlong *)0x0) {
        (**(code **)(*local_98 + 0x10))();
        local_98 = (longlong *)0x0;
      }
    }
LAB_14316e04b:
    uVar10 = uVar10 + 1;
    plVar9 = plVar9 + 1;
    if (3 < uVar10) {
      *(undefined4 *)(param_1 + 0x298) = local_a8._4_4_;
      iVar5 = CAkSrcLpHpFilter::Init(param_1 + 0x188,local_a8._4_4_,0);
      if (iVar5 == 1) {
        bVar6 = (char)uVar7 + 1;
        local_88[uVar7] = param_1 + 0x178;
        iVar5 = EVP_MD_meth_set_init(param_1 + 0x220,lVar1);
        if (iVar5 == 1) {
          local_88[bVar6] = param_1 + 0x220;
          plVar9 = local_88 + bVar6;
          for (; bVar6 != 0; bVar6 = bVar6 - 1) {
            (**(code **)(*(longlong *)*plVar9 + 0x40))((longlong *)*plVar9,plVar9[-1]);
            plVar9 = plVar9 + -1;
          }
          uVar10 = 0;
          do {
            if (*(longlong *)(param_1 + 0x238) != 0) {
              lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x238) + 0x18);
              lVar2 = *plVar11;
              plVar9 = *(longlong **)(lVar1 + 0x188);
              if (lVar2 != 0) {
                local_98 = (longlong *)0x0;
                (**(code **)(*plVar9 + 0x1c8))
                          (plVar9,uVar10,&local_98,*(undefined8 *)(lVar1 + 0x30));
                *(undefined2 *)(lVar2 + 0x8a) = local_90;
                if (local_98 != (longlong *)0x0) {
                  (**(code **)(*local_98 + 0x10))();
                }
              }
            }
            uVar10 = uVar10 + 1;
            plVar11 = plVar11 + 1;
          } while (uVar10 < 4);
        }
      }
      return iVar5;
    }
  } while( true );
}



// FUNCTION 14316e1b0 FUN_14316e1b0 body=538 status=ok
// SIG undefined FUN_14316e1b0(void)

int FUN_14316e1b0(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  long lVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  void *pvVar8;
  longlong lVar9;
  int local_res10 [4];
  int local_res20 [2];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined1 local_40 [8];
  short *local_38;
  
  lVar2 = *(longlong *)(param_2 + 0x220);
  if ((*(longlong *)(param_2 + 0x2c0) != 0) && (uVar1 = *(uint *)(param_2 + 0x2c8), uVar1 != 0)) {
    AkFileParser::Parse(*(longlong *)(param_2 + 0x2c0),uVar1,local_40,0,local_44,local_48,
                        local_res20,local_res10,0,0,1);
    if (*local_38 == -2) {
      *(undefined4 *)(lVar2 + 0x18) = 0x10001;
    }
    if ((uint)(local_res10[0] + local_res20[0]) <= uVar1) {
      *(uint *)(lVar2 + 0xc) = *(uint *)(lVar2 + 0xc) & 0xffffff8f;
      *(uint *)(lVar2 + 0xc) = *(uint *)(lVar2 + 0xc) | 0xc;
    }
  }
  puVar7 = (undefined8 *)
           CAkVPLSrcNode::Create
                     (*(uint *)(lVar2 + 0xc) >> 2 & 0x1f,*(undefined4 *)(lVar2 + 0x18),param_2);
  if (puVar7 == (undefined8 *)0x0) {
    CAkPBI::Destroy(param_2,1);
    return 2;
  }
  lVar2 = puVar7[3];
  *(longlong *)(lVar2 + 0x228) = param_1;
  if (param_3 != '\0') {
    uVar5 = FUN_14317ddc0(lVar2,param_1 + 0x24c);
    *(undefined4 *)(param_1 + 0x250) = uVar5;
    if (*(int *)(param_1 + 0x1c) == 0) {
      pvVar8 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x68);
      *(void **)(param_1 + 0x10) = pvVar8;
      if (pvVar8 == (void *)0x0) {
        iVar6 = 2;
        goto LAB_14316e36a;
      }
      *(undefined4 *)(param_1 + 0x1c) = 1;
    }
  }
  if ((*(int *)(param_1 + 0x250) != 0) && (cVar4 = FUN_14317c160(lVar2 + 0x18,0), cVar4 != '\0')) {
    if (*(int *)(param_1 + 0x250) == 1) {
      iVar6 = 3;
      goto LAB_14316e36a;
    }
    if ((*(int *)(param_1 + 0x24c) == 0) && (param_3 != '\0')) {
      iVar6 = 1;
      if ((*(int *)(param_1 + 0x250) != 0) && ((*(byte *)(param_1 + 0x68) & 1) != 0)) {
        FUN_14317fad0(lVar2);
      }
      *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) & 0xfe;
      goto LAB_14316e31e;
    }
  }
  iVar6 = CAkVPLSrcNode::FetchStreamedData
                    (puVar7,*(undefined8 *)(lVar2 + 0x2c0),*(undefined4 *)(lVar2 + 0x2c8));
  if ((iVar6 == 1) || (iVar6 == 0x3f)) {
LAB_14316e31e:
    if (param_3 != '\0') {
      *(undefined8 **)(param_1 + 0x238) = puVar7;
      lVar9 = puVar7[3] + 0x18;
      if (puVar7[3] == 0) {
        lVar9 = 0;
      }
      *(longlong *)(param_1 + 8) = lVar9;
      *(byte *)(lVar2 + 0x296) = *(byte *)(lVar2 + 0x296) & 0xfd;
      return iVar6;
    }
    *(undefined8 **)(param_1 + 0x240) = puVar7;
    return iVar6;
  }
LAB_14316e36a:
  FUN_143181830(puVar7,1);
  lVar3 = g_LEngineDefaultPoolId;
  (**(code **)*puVar7)(puVar7,0);
  AK::MemoryMgr::Free(lVar3,puVar7);
  return iVar6;
}



// FUNCTION 14316e3d0 FUN_14316e3d0 body=374 status=ok
// SIG undefined FUN_14316e3d0(void)

int FUN_14316e3d0(longlong param_1,undefined8 *param_2,char param_3,char param_4)

{
  longlong lVar1;
  long lVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  void *pvVar6;
  longlong lVar7;
  
  lVar1 = param_2[3];
  *(longlong *)(lVar1 + 0x228) = param_1;
  if ((param_3 == '\0') || (param_4 == '\0')) {
LAB_14316e448:
    if (*(int *)(param_1 + 0x250) == 0) {
LAB_14316e4d6:
      iVar5 = CAkVPLSrcNode::FetchStreamedData
                        (param_2,*(undefined8 *)(lVar1 + 0x2c0),*(undefined4 *)(lVar1 + 0x2c8));
      if ((iVar5 != 1) && (iVar5 != 0x3f)) goto LAB_14316e4f8;
    }
    else {
      cVar3 = FUN_14317c160(lVar1 + 0x18);
      if (cVar3 == '\0') goto LAB_14316e4d6;
      if (*(int *)(param_1 + 0x250) == 1) {
        iVar5 = 3;
        goto LAB_14316e4f8;
      }
      if (((*(int *)(param_1 + 0x24c) != 0) || (param_3 == '\0')) || (param_4 == '\0'))
      goto LAB_14316e4d6;
      iVar5 = 1;
      if ((*(int *)(param_1 + 0x250) != 0) && ((*(byte *)(param_1 + 0x68) & 1) != 0)) {
        FUN_14317fad0(lVar1);
      }
      *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) & 0xfe;
    }
    if (param_3 == '\0') {
      *(undefined8 **)(param_1 + 0x240) = param_2;
    }
    else {
      *(undefined8 **)(param_1 + 0x238) = param_2;
      lVar7 = param_2[3] + 0x18;
      if (param_2[3] == 0) {
        lVar7 = 0;
      }
      *(longlong *)(param_1 + 8) = lVar7;
      *(byte *)(lVar1 + 0x296) = *(byte *)(lVar1 + 0x296) & 0xfd;
    }
  }
  else {
    uVar4 = FUN_14317ddc0(lVar1);
    *(undefined4 *)(param_1 + 0x250) = uVar4;
    if (*(int *)(param_1 + 0x1c) != 0) goto LAB_14316e448;
    pvVar6 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x68);
    *(void **)(param_1 + 0x10) = pvVar6;
    if (pvVar6 != (void *)0x0) {
      *(undefined4 *)(param_1 + 0x1c) = 1;
      goto LAB_14316e448;
    }
    iVar5 = 2;
LAB_14316e4f8:
    FUN_143181830(param_2,1);
    lVar2 = g_LEngineDefaultPoolId;
    (**(code **)*param_2)(param_2,0);
    AK::MemoryMgr::Free(lVar2,param_2);
  }
  return iVar5;
}



// FUNCTION 14316e550 ClearVPL body=153 status=ok
// SIG undefined ClearVPL(void)

void AkVPLSrcCbxRec::ClearVPL(longlong param_1)

{
  undefined8 *puVar1;
  long lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = (longlong *)(param_1 + 0x180);
  lVar4 = 4;
  do {
    if ((longlong *)*plVar3 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar3 + 0x50))();
      lVar2 = g_LEngineDefaultPoolId;
      puVar1 = (undefined8 *)*plVar3;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,0);
        AK::MemoryMgr::Free(lVar2,puVar1);
      }
      *plVar3 = 0;
    }
    plVar3 = plVar3 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  CAkVPLPitchNode::Term(param_1);
  CAkSrcLpHpFilter::Term(param_1 + 0x108);
  return;
}



// FUNCTION 14316e610 FUN_14316e610 body=175 status=ok
// SIG undefined FUN_14316e610(void)

void FUN_14316e610(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x238) + 0x18);
  plVar1 = (longlong *)(lVar2 + 0x18);
  if ((*(byte *)(lVar2 + 0x194) & 1) == 0) {
    (**(code **)(*plVar1 + 0x48))(plVar1,0);
  }
  else if ((*(byte *)(lVar2 + 0x194) & 0x10) != 0) {
    (**(code **)(*plVar1 + 0x50))();
  }
  if ((*(byte *)(lVar2 + 0x195) & 3) == 0) {
    FUN_143184080(param_1);
    FUN_143183320(param_1);
    return;
  }
  cVar3 = FUN_14317f140(lVar2);
  if ((cVar3 != '\0') || (*(int *)(param_1 + 0x250) == 0)) {
    *(undefined4 *)(param_1 + 0x250) = 2;
    *(undefined4 *)(param_1 + 0x24c) = 1;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_14317f9d0(lVar2);
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}



// FUNCTION 14316e6c0 FUN_14316e6c0 body=164 status=ok
// SIG undefined FUN_14316e6c0(void)

void FUN_14316e6c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x238) + 0x18);
  if (((*(uint *)(plVar1 + 1) & 0x100000) != 0) && (*(int *)(param_2 + 0x28) != -1)) {
    FUN_143162940(DAT_146b50b70,(int)plVar1[0x40],param_2 + 0x28);
  }
  uVar3 = (**(code **)(*plVar1 + 0x60))(plVar1);
  if (uVar3 != 0xffffffff) {
    if (uVar3 < *(ushort *)(param_2 + 0x12)) {
      *(short *)(param_2 + 0x12) = (short)uVar3;
    }
    *(undefined4 *)(param_1 + 0x248) = 2;
  }
  lVar2 = *(longlong *)(param_1 + 0x240);
  if (lVar2 != 0) {
    iVar4 = CAkVPLSrcNode::FetchStreamedData
                      (lVar2,*(undefined8 *)(*(longlong *)(lVar2 + 0x18) + 0x2c0),
                       *(undefined4 *)(*(longlong *)(lVar2 + 0x18) + 0x2c8));
    if (iVar4 == 2) {
      *(undefined4 *)(param_2 + 0x38) = 2;
    }
  }
  return;
}



// FUNCTION 14316e770 FetchStreamedData body=211 status=ok
// SIG undefined FetchStreamedData(void)

undefined8 CAkVPLSrcCbxNode::FetchStreamedData(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x238) + 0x18);
  iVar2 = CAkVPLSrcNode::FetchStreamedData
                    (*(longlong *)(param_1 + 0x238),*(undefined8 *)(lVar1 + 0x2c0),
                     *(undefined4 *)(lVar1 + 0x2c8));
  if (iVar2 == 0x3f) {
    if (*(int *)(param_2 + 0x2b8) < 0) {
      FUN_14316e990(param_1);
    }
  }
  else {
    if (iVar2 != 1) {
      return 2;
    }
    fVar4 = (float)((uint)DAT_1467bdcb8 * (DAT_146b50bd0 + 1)) * *(float *)(param_2 + 0x23c);
    if (fVar4 <= 0.0) {
      fVar3 = -0.5;
    }
    else {
      fVar3 = 0.5;
    }
    if (*(int *)(param_2 + 0x2b8) < (int)(fVar3 + fVar4)) {
      if (*(int *)(param_2 + 0x2b8) < 0) {
        FUN_14316e990(param_1);
      }
      return 1;
    }
  }
  return 0x3f;
}



// FUNCTION 14316e880 FUN_14316e880 body=167 status=ok
// SIG undefined FUN_14316e880(void)

float FUN_14316e880(longlong param_1)

{
  longlong lVar1;
  float *pfVar2;
  uint uVar3;
  float fVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  fVar4 = (*(float *)(lVar1 + 0x1dc) + *(float *)(lVar1 + 0x98)) * 0.05;
  if (-37.0 <= fVar4) {
    uVar3 = (uint)(longlong)(fVar4 * 27866352.0 + 1.0653532e+09);
    fVar4 = (float)((uVar3 & 0x7fffff) + 0x3f800000);
    fVar4 = ((fVar4 * 0.32518977 + 0.020805772) * fVar4 + 0.65304345) * (float)(uVar3 & 0xff800000);
  }
  else {
    fVar4 = 0.0;
  }
  pfVar2 = *(float **)(param_1 + 0x10);
  if ((pfVar2 != (float *)0x0) && (fVar4 = fVar4 * pfVar2[1], (*(byte *)(lVar1 + 0x9c) & 1) != 0)) {
    fVar4 = fVar4 * *pfVar2;
  }
  return fVar4;
}



// FUNCTION 14316e990 FUN_14316e990 body=99 status=ok
// SIG undefined FUN_14316e990(void)

void FUN_14316e990(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  if ((*(byte *)(*(longlong *)(param_1 + 0x238) + 0x20) & 2) == 0) {
    *(byte *)(param_1 + 0x254) = *(byte *)(param_1 + 0x254) | 1;
    lVar4 = *(longlong *)(param_1 + 8);
    puVar3 = (undefined4 *)(lVar4 + 0x1e8);
    if (lVar4 == 0) {
      puVar3 = (undefined4 *)&DAT_00000200;
    }
    uVar1 = *puVar3;
    if (lVar4 == 0) {
      lVar4 = 0x18;
    }
    uVar2 = FUN_14317c030(lVar4);
    CAkPlayingMgr::NotifyStarvation(DAT_146b50b00,uVar1,uVar2);
    return;
  }
  return;
}



// FUNCTION 14316ea00 FUN_14316ea00 body=178 status=ok
// SIG undefined FUN_14316ea00(void)

undefined8 FUN_14316ea00(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0;
  plVar4 = (longlong *)(param_1 + 0x200);
  uVar5 = uVar6;
  do {
    plVar1 = (longlong *)*plVar4;
    if ((plVar1 != (longlong *)0x0) && (plVar1[3] != 0)) {
      uVar3 = (**(code **)(*plVar1 + 0x78))(plVar1);
      cVar2 = CAkEffectContextBase::IsUsingThisSlot(plVar1[3],param_2,uVar3);
      if (cVar2 != '\0') {
        return 1;
      }
    }
    uVar5 = uVar5 + 1;
    plVar4 = plVar4 + 1;
  } while (uVar5 < 4);
  plVar4 = (longlong *)(param_1 + 0x238);
  while ((plVar1 = (longlong *)*plVar4, plVar1 == (longlong *)0x0 ||
         (cVar2 = (**(code **)(*plVar1 + 0x88))(plVar1,param_2), cVar2 == '\0'))) {
    uVar6 = uVar6 + 1;
    plVar4 = plVar4 + 1;
    if (1 < uVar6) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 14316eac0 FUN_14316eac0 body=86 status=ok
// SIG undefined FUN_14316eac0(void)

void FUN_14316eac0(longlong param_1)

{
  if (*(int *)(param_1 + 0x248) == 1) {
    CAkVPLSrcNode::Pause(*(undefined8 *)(param_1 + 0x238));
    *(undefined4 *)(param_1 + 0x248) = 3;
  }
  else if (*(int *)(param_1 + 0x248) != 3) {
    if (*(longlong *)(param_1 + 0x238) != 0) {
      CAkVPLSrcNode::Stop();
    }
    *(undefined4 *)(param_1 + 0x248) = 2;
    return;
  }
  return;
}



// FUNCTION 14316eb20 FUN_14316eb20 body=175 status=ok
// SIG undefined FUN_14316eb20(void)

void FUN_14316eb20(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *local_18;
  undefined2 local_10;
  
  uVar4 = 0;
  plVar5 = (longlong *)(param_1 + 0x200);
  do {
    if (*(longlong *)(param_1 + 0x238) != 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x238) + 0x18);
      lVar2 = *plVar5;
      plVar3 = *(longlong **)(lVar1 + 0x188);
      if (lVar2 != 0) {
        local_18 = (longlong *)0x0;
        (**(code **)(*plVar3 + 0x1c8))(plVar3,uVar4,&local_18,*(undefined8 *)(lVar1 + 0x30));
        *(undefined2 *)(lVar2 + 0x8a) = local_10;
        if (local_18 != (longlong *)0x0) {
          (**(code **)(*local_18 + 0x10))();
        }
      }
    }
    uVar4 = uVar4 + 1;
    plVar5 = plVar5 + 1;
  } while (uVar4 < 4);
  return;
}



// FUNCTION 14316ebd0 ReleaseBuffer body=36 status=ok
// SIG undefined ReleaseBuffer(void)

void CAkVPLSrcCbxNode::ReleaseBuffer(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x178) + 0x10))();
  *(undefined8 *)(param_1 + 0x70) = 0;
  return;
}



// FUNCTION 14316ec10 RemovePipeline body=117 status=ok
// SIG undefined RemovePipeline(void)

void CAkVPLSrcCbxNode::RemovePipeline(longlong param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FUN_143181830();
    lVar2 = g_LEngineDefaultPoolId;
    puVar1 = *(undefined8 **)(param_1 + 0x238);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      AK::MemoryMgr::Free(lVar2,puVar1);
    }
    *(undefined8 *)(param_1 + 0x238) = 0;
  }
  AkVPLSrcCbxRec::ClearVPL(param_1 + 0x80);
  *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) | 1;
  return;
}



// FUNCTION 14316ec90 FUN_14316ec90 body=15 status=ok
// SIG undefined FUN_14316ec90(void)

void FUN_14316ec90(longlong param_1)

{
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x128) = 0x42ca0000;
  return;
}



// FUNCTION 14316eca0 FUN_14316eca0 body=101 status=ok
// SIG undefined FUN_14316eca0(void)

void FUN_14316eca0(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x248) != 1) {
    if (*(int *)(param_1 + 0x248) != 3) {
      if (*(longlong *)(param_1 + 0x238) != 0) {
        CAkVPLSrcNode::Stop();
      }
      *(undefined4 *)(param_1 + 0x248) = 2;
      return;
    }
    uVar1 = CAkResampler::GetLastRate(param_1 + 0x90);
    CAkVPLSrcNode::Resume(*(undefined8 *)(param_1 + 0x238),uVar1);
    *(undefined4 *)(param_1 + 0x248) = 1;
  }
  return;
}



// FUNCTION 14316ed30 SeekSource body=215 status=ok
// SIG undefined SeekSource(void)

void CAkVPLSrcCbxNode::SeekSource(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  
  if ((*(int *)(param_1 + 0x24c) == 0) && (*(int *)(param_1 + 0x250) == 2)) {
    lVar1 = *(longlong *)(param_1 + 8);
    lVar3 = lVar1 + -0x18;
    if (lVar1 == 0) {
      lVar3 = 0;
    }
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x28c) = 0;
      pbVar4 = (byte *)(lVar1 + 0x27d);
      if (lVar1 == 0) {
        pbVar4 = &DAT_00000295;
      }
      *pbVar4 = *pbVar4 & 0x3f;
      pbVar4 = (byte *)(lVar1 + 0x27e);
      if (lVar1 == 0) {
        pbVar4 = &DAT_00000296;
      }
      *pbVar4 = *pbVar4 & 0xfe;
      return;
    }
  }
  else if ((*(longlong *)(param_1 + 0x238) != 0) &&
          ((*(byte *)(*(longlong *)(param_1 + 0x238) + 0x20) & 1) != 0)) {
    (**(code **)(*(longlong *)(param_1 + 0x178) + 0x10))(param_1 + 0x178);
    *(undefined8 *)(param_1 + 0x70) = 0;
    iVar2 = (**(code **)(*(longlong *)(param_1 + 0x178) + 0x30))(param_1 + 0x178);
    if (iVar2 != 1) {
      if (*(longlong *)(param_1 + 0x238) != 0) {
        CAkVPLSrcNode::Stop();
      }
      *(undefined4 *)(param_1 + 0x248) = 2;
    }
  }
  return;
}



// FUNCTION 14316ee10 SetAudible body=101 status=ok
// SIG undefined SetAudible(void)

void CAkVPLSrcCbxNode::SetAudible(longlong param_1,undefined8 param_2,byte param_3)

{
  if (*(int *)(param_1 + 0x250) != 0) {
    if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
      if (param_3 != 0) {
        FUN_14317dac0(param_2,1);
      }
    }
    else if (param_3 == 0) {
      FUN_14317fad0(param_2);
      *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) & 0xfe;
      *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_1 + 0x68);
      return;
    }
  }
  *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) & 0xfe;
  *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) | param_3;
  return;
}



// FUNCTION 14316ee80 SetFxBypass body=135 status=ok
// SIG undefined SetFxBypass(void)

void CAkVPLSrcCbxNode::SetFxBypass(longlong param_1,uint param_2,byte param_3)

{
  if ((*(longlong *)(param_1 + 0x200) != 0) && ((param_3 & 1) != 0)) {
    *(ushort *)(*(longlong *)(param_1 + 0x200) + 0x8a) = (ushort)param_2 & 1;
  }
  if ((*(longlong *)(param_1 + 0x208) != 0) && ((param_3 & 2) != 0)) {
    *(ushort *)(*(longlong *)(param_1 + 0x208) + 0x8a) = (ushort)(param_2 >> 1) & 1;
  }
  if ((*(longlong *)(param_1 + 0x210) != 0) && ((param_3 & 4) != 0)) {
    *(ushort *)(*(longlong *)(param_1 + 0x210) + 0x8a) = (ushort)(param_2 >> 2) & 1;
  }
  if ((*(longlong *)(param_1 + 0x218) != 0) && ((param_3 & 8) != 0)) {
    *(ushort *)(*(longlong *)(param_1 + 0x218) + 0x8a) = (ushort)(param_2 >> 3) & 1;
  }
  return;
}



// FUNCTION 14316ef10 FUN_14316ef10 body=85 status=ok
// SIG undefined FUN_14316ef10(void)

void FUN_14316ef10(longlong param_1)

{
  if (*(int *)(param_1 + 0x248) == 0) {
    FUN_143181700(*(undefined8 *)(param_1 + 0x238));
    *(undefined4 *)(param_1 + 0x248) = 1;
  }
  else if (*(int *)(param_1 + 0x248) != 2) {
    if (*(longlong *)(param_1 + 0x238) != 0) {
      CAkVPLSrcNode::Stop();
    }
    *(undefined4 *)(param_1 + 0x248) = 2;
    return;
  }
  return;
}



// FUNCTION 14316ef70 FUN_14316ef70 body=1811 status=ok
// SIG undefined FUN_14316ef70(void)

ulonglong FUN_14316ef70(longlong param_1,undefined8 *param_2)

{
  float *pfVar1;
  byte bVar2;
  longlong *plVar3;
  bool bVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  byte *pbVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  byte bVar14;
  undefined1 uVar15;
  undefined4 *puVar16;
  int iVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  char local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 local_res24;
  undefined4 in_stack_ffffffffffffff78;
  uint uVar22;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_60 [5];
  
  uVar20 = *(undefined4 *)(param_1 + 0x298);
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x238) + 0x18);
  lVar9 = plVar3[0x5d];
  if (((int)lVar9 != -1) && (*(undefined4 *)(param_1 + 0x248) = 2, (int)lVar9 == 0)) {
    return 0;
  }
  *(undefined4 *)(param_2 + 1) = uVar20;
  *param_2 = 0;
  *(undefined2 *)(param_2 + 2) = DAT_1467bdcb8;
  local_68 = (undefined4)plVar3[0x40];
  puVar16 = &local_68;
  if ((*(byte *)(plVar3 + 1) & 0x10) == 0) {
    puVar16 = (undefined4 *)0x0;
  }
  bVar14 = *(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x238) + 0x18) + 0x296);
  local_64 = uVar20;
  uVar18 = FUN_14316e880();
  uVar22 = CONCAT31((int3)((uint)in_stack_ffffffffffffff78 >> 8),bVar14 >> 3) & 0xffffff01;
  FUN_143182e70(param_1,plVar3 + 3,uVar20,uVar18,uVar22,local_res18,local_res8,puVar16);
  fVar21 = *(float *)((longlong)plVar3 + 0x8c);
  if (0.0 <= fVar21) {
    if (100.0 <= fVar21) {
      fVar21 = 100.0;
    }
  }
  else {
    fVar21 = 0.0;
  }
  fVar19 = *(float *)(param_1 + 0x1dc);
  if (fVar21 != fVar19) {
    *(undefined1 *)(param_1 + 0x1e3) = 1;
    uVar6 = (uint)DAT_1467bdcbc;
    *(float *)(param_1 + 0x1dc) = fVar21;
    *(float *)(param_1 + 0x1d8) =
         ((fVar19 - *(float *)(param_1 + 0x1d8)) / (float)uVar6) *
         (float)*(ushort *)(param_1 + 0x1e0) + *(float *)(param_1 + 0x1d8);
  }
  fVar21 = *(float *)(plVar3 + 0x12);
  if (0.0 <= fVar21) {
    if (100.0 <= fVar21) {
      fVar21 = 100.0;
    }
  }
  else {
    fVar21 = 0.0;
  }
  fVar19 = *(float *)(param_1 + 0x1ec);
  if (fVar21 != fVar19) {
    *(undefined1 *)(param_1 + 499) = 1;
    uVar6 = (uint)DAT_1467bdcbc;
    *(float *)(param_1 + 0x1ec) = fVar21;
    *(float *)(param_1 + 0x1e8) =
         ((fVar19 - *(float *)(param_1 + 0x1e8)) / (float)uVar6) *
         (float)*(ushort *)(param_1 + 0x1f0) + *(float *)(param_1 + 0x1e8);
  }
  bVar4 = true;
  fVar21 = (float)*(ushort *)(param_2 + 2) * *(float *)((longlong)plVar3 + 0x23c);
  if (fVar21 <= 0.0) {
    fVar19 = -0.5;
  }
  else {
    fVar19 = 0.5;
  }
  iVar17 = (int)(fVar19 + fVar21);
  if (local_res8[0] == '\0') {
    if (*(int *)(param_1 + 0x250) == 2) {
      bVar4 = false;
      if (((*(byte *)(param_1 + 0x68) & 1) != 0) &&
         ((**(code **)(*(longlong *)(param_1 + 0x178) + 0x20))
                    (param_1 + 0x178,*(undefined4 *)(param_1 + 0x24c)),
         *(int *)(param_1 + 0x24c) != 2)) {
        (**(code **)(*(longlong *)(param_1 + 0x178) + 0x10))(param_1 + 0x178);
      }
      if ((*(int *)(param_1 + 0x24c) == 1) && ((int)plVar3[0x57] < iVar17)) {
        local_res20 = iVar17;
        uVar18 = (**(code **)(*(longlong *)(param_1 + 0x178) + 0x18))
                           ((longlong *)(param_1 + 0x178),&local_res20);
        *(undefined4 *)(param_2 + 7) = uVar18;
      }
    }
    else if (*(int *)(param_1 + 0x250) == 1) {
      if (*(longlong *)(param_1 + 0x238) != 0) {
        CAkVPLSrcNode::Stop();
      }
      *(undefined4 *)(param_1 + 0x248) = 2;
      goto LAB_14316f2ea;
    }
  }
  else {
    lVar9 = *(longlong *)(param_1 + 0x238);
    if ((((*(byte *)(param_1 + 0x68) & 1) == 0) || ((*(byte *)(lVar9 + 0x20) & 1) == 0)) &&
       (*(int *)(param_1 + 0x250) == 2)) {
      if ((*(byte *)(lVar9 + 0x20) & 1) == 0) {
        iVar7 = CAkVPLSrcNode::FetchStreamedData(lVar9,plVar3[0x58],(int)plVar3[0x59]);
        if (iVar7 == 0x3f) {
          local_res8[0] = '\0';
        }
        else {
          if (iVar7 == 1) goto LAB_14316f2ed;
          CAkVPLSrcCbxNode::Stop(param_1);
          local_res8[0] = '\0';
        }
LAB_14316f2ea:
        bVar4 = false;
      }
      else {
        uVar15 = 0;
        iVar7 = (**(code **)(*plVar3 + 0x50))(plVar3,*(undefined4 *)(param_1 + 0x24c));
        if (iVar7 == 1) {
          uVar15 = 1;
        }
        else if (iVar7 == 2) goto LAB_14316f241;
        iVar7 = (**(code **)(*(longlong *)(param_1 + 0x178) + 0x28))
                          ((longlong *)(param_1 + 0x178),*(undefined4 *)(param_1 + 0x24c),uVar15);
        if (iVar7 != 1) {
LAB_14316f241:
          uVar8 = CAkVPLSrcCbxNode::Stop(param_1);
          return uVar8 & 0xffffffffffffff00;
        }
      }
    }
  }
LAB_14316f2ed:
  if ((*(byte *)(param_1 + 0x254) & 1) == 0) goto LAB_14316f414;
  iVar7 = (**(code **)(*plVar3 + 0x50))(plVar3,*(undefined4 *)(param_1 + 0x24c));
  if (iVar7 == 1) {
    if ((*(int *)(param_1 + 0x24c) == 0) && (*(int *)(param_1 + 0x250) == 2)) {
      lVar11 = *(longlong *)(param_1 + 8);
      lVar9 = lVar11 + -0x18;
      if (lVar11 == 0) {
        lVar9 = 0;
      }
      if (lVar9 != 0) {
        *(undefined4 *)(lVar9 + 0x28c) = 0;
        pbVar10 = (byte *)(lVar11 + 0x27d);
        if (lVar11 == 0) {
          pbVar10 = &DAT_00000295;
        }
        *pbVar10 = *pbVar10 & 0x3f;
        pbVar10 = (byte *)(lVar11 + 0x27e);
        if (lVar11 == 0) {
          pbVar10 = &DAT_00000296;
        }
        *pbVar10 = *pbVar10 & 0xfe;
        CAkVPL3dMixable::SetPreviousSilentOnAllConnections(param_1,0x201);
        goto LAB_14316f40d;
      }
    }
    else if ((*(longlong *)(param_1 + 0x238) != 0) &&
            ((*(byte *)(*(longlong *)(param_1 + 0x238) + 0x20) & 1) != 0)) {
      (**(code **)(*(longlong *)(param_1 + 0x178) + 0x10))(param_1 + 0x178);
      *(undefined8 *)(param_1 + 0x70) = 0;
      iVar7 = (**(code **)(*(longlong *)(param_1 + 0x178) + 0x30))(param_1 + 0x178);
      if (iVar7 != 1) {
        if (*(longlong *)(param_1 + 0x238) != 0) {
          CAkVPLSrcNode::Stop();
        }
        *(undefined4 *)(param_1 + 0x248) = 2;
      }
    }
    CAkVPL3dMixable::SetPreviousSilentOnAllConnections(param_1,1);
  }
  else if (iVar7 == 2) {
    if (*(longlong *)(param_1 + 0x238) != 0) {
      CAkVPLSrcNode::Stop();
    }
    *(undefined4 *)(param_1 + 0x248) = 2;
    bVar4 = false;
  }
LAB_14316f40d:
  *(byte *)(param_1 + 0x254) = *(byte *)(param_1 + 0x254) & 0xfe;
LAB_14316f414:
  iVar7 = (int)plVar3[0x57];
  if ((bVar4) && (iVar7 < iVar17)) {
    bVar14 = 1;
  }
  else {
    bVar14 = 0;
  }
  if (-1 < iVar7) {
    *(int *)(plVar3 + 0x57) = iVar7 - iVar17;
  }
  CAkVPLSrcCbxNode::SetAudible(param_1,plVar3,local_res8[0]);
  if ((bVar14 != 0) && (*(longlong *)(param_1 + 0x168) == 0)) {
    iVar17 = FUN_14316dda0(param_1);
    if (iVar17 == 1) {
      if ((*(byte *)((longlong)plVar3 + 0x194) & 1) == 0) {
        (**(code **)(plVar3[3] + 0x48))(plVar3 + 3,0);
      }
      else if ((*(byte *)((longlong)plVar3 + 0x194) & 0x10) != 0) {
        (**(code **)(plVar3[3] + 0x50))(plVar3 + 3);
      }
      *(undefined4 *)(plVar3 + 0x28) = 0x42ca0000;
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x298);
      *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) & 0xfd;
      FUN_143183f00(param_1);
      local_res20 = (int)plVar3[0x40];
      piVar13 = &local_res20;
      if ((*(byte *)(plVar3 + 1) & 0x10) == 0) {
        piVar13 = (int *)0x0;
      }
      bVar2 = *(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x238) + 0x18) + 0x296);
      local_res24 = uVar20;
      uVar20 = FUN_14316e880();
      FUN_143182e70(param_1,plVar3 + 3,*(undefined4 *)(param_1 + 0x298),uVar20,
                    CONCAT31((int3)(uVar22 >> 8),bVar2 >> 3) & 0xffffff01,local_res18,local_res8,
                    piVar13);
    }
    else {
      if (*(longlong *)(param_1 + 0x238) != 0) {
        CAkVPLSrcNode::Stop();
      }
      *(undefined4 *)(param_1 + 0x248) = 2;
      bVar14 = 0;
    }
  }
  if ((*(uint *)(plVar3 + 1) & 0x4000000) != 0) {
    lVar9 = *(longlong *)(param_1 + 0x40);
    fVar21 = -200.0;
    fVar19 = -200.0;
    while (fVar5 = fVar19, lVar9 != 0) {
      local_res20 = 1;
      (**(code **)(*(longlong *)(lVar9 + 8) + 0x40))((longlong *)(lVar9 + 8),local_60,&local_res20);
      lVar11 = *(longlong *)(param_1 + 0x10);
      lVar12 = (ulonglong)*(uint *)(param_1 + 0x18) * 0x68 + lVar11;
      for (; lVar11 != lVar12; lVar11 = lVar11 + 0x68) {
        if (*(longlong *)(lVar11 + 0x50) == local_60[0]) {
          fVar19 = *(float *)(lVar11 + 0x30);
          if (*(float *)(lVar11 + 0x30) <= fVar21) {
            fVar19 = fVar21;
          }
          fVar21 = fVar19;
          if (fVar19 <= *(float *)(lVar11 + 0x34)) {
            fVar21 = *(float *)(lVar11 + 0x34);
          }
        }
      }
      pfVar1 = (float *)(lVar9 + 0x158);
      lVar9 = *(longlong *)(lVar9 + 0x48);
      fVar19 = *pfVar1;
      if (*pfVar1 <= fVar5) {
        fVar19 = fVar5;
      }
    }
    if (((*(byte *)((longlong)plVar3 + 0x296) & 4) == 0) &&
       ((*(byte *)((longlong)plVar3 + 0x195) & 3) == 0)) {
      uVar15 = 0;
    }
    else {
      uVar15 = 1;
    }
    FUN_143152170(DAT_146b50b00,(int)plVar3[0x40],*(undefined4 *)((longlong)plVar3 + 0x2a4),fVar5,
                  fVar21,uVar15);
  }
  *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) | 2;
  return (ulonglong)bVar14;
}



// FUNCTION 14316f690 Stop body=42 status=ok
// SIG undefined Stop(void)

void CAkVPLSrcCbxNode::Stop(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x238) != 0) {
    CAkVPLSrcNode::Stop();
  }
  *(undefined4 *)(param_1 + 0x248) = 2;
  return;
}



// FUNCTION 14316f6c0 FUN_14316f6c0 body=177 status=ok
// SIG undefined FUN_14316f6c0(void)

void FUN_14316f6c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x238);
  if ((plVar1 == (longlong *)0x0) || (param_2 != plVar1[3])) {
    lVar2 = *(longlong *)(param_1 + 0x240);
    if ((lVar2 != 0) && (param_2 == *(longlong *)(lVar2 + 0x18))) {
      FUN_143181830(lVar2,0);
      lVar4 = g_LEngineDefaultPoolId;
      puVar3 = *(undefined8 **)(param_1 + 0x240);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,0);
        AK::MemoryMgr::Free(lVar4,puVar3);
      }
      *(undefined8 *)(param_1 + 0x240) = 0;
    }
    return;
  }
  if (((*(byte *)(plVar1 + 4) & 1) != 0) && (iVar5 = (**(code **)(*plVar1 + 0x68))(), iVar5 == 1)) {
    return;
  }
  if (*(longlong *)(param_1 + 0x238) != 0) {
    CAkVPLSrcNode::Stop();
  }
  *(undefined4 *)(param_1 + 0x248) = 2;
  return;
}



// FUNCTION 14316f780 SwitchToNextSrc body=163 status=ok
// SIG undefined SwitchToNextSrc(void)

void CAkVPLSrcCbxNode::SwitchToNextSrc(longlong param_1)

{
  byte *pbVar1;
  undefined8 *puVar2;
  longlong lVar3;
  long lVar4;
  longlong lVar5;
  
  FUN_143181830(*(undefined8 *)(param_1 + 0x238),0);
  lVar4 = g_LEngineDefaultPoolId;
  puVar2 = *(undefined8 **)(param_1 + 0x238);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,0);
    AK::MemoryMgr::Free(lVar4,puVar2);
  }
  *(longlong *)(param_1 + 0x238) = *(longlong *)(param_1 + 0x240);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x240) + 0x18);
  *(undefined8 *)(param_1 + 0x240) = 0;
  lVar5 = lVar3 + 0x18;
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  *(longlong *)(param_1 + 8) = lVar5;
  FUN_143181700();
  *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x18);
  pbVar1 = (byte *)(*(longlong *)(*(longlong *)(param_1 + 0x238) + 0x18) + 0x296);
  *pbVar1 = *pbVar1 & 0xfd;
  return;
}



// FUNCTION 14316f830 Term body=186 status=ok
// SIG undefined Term(void)

void CAkVPLSrcCbxNode::Term(longlong param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FUN_143181830(*(longlong *)(param_1 + 0x238),0);
    lVar2 = g_LEngineDefaultPoolId;
    puVar1 = *(undefined8 **)(param_1 + 0x238);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      AK::MemoryMgr::Free(lVar2,puVar1);
    }
    *(undefined8 *)(param_1 + 0x238) = 0;
  }
  AkVPLSrcCbxRec::ClearVPL(param_1 + 0x80);
  *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) | 1;
  if (*(longlong *)(param_1 + 0x240) != 0) {
    FUN_143181830(*(longlong *)(param_1 + 0x240),0);
    lVar2 = g_LEngineDefaultPoolId;
    puVar1 = *(undefined8 **)(param_1 + 0x240);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      AK::MemoryMgr::Free(lVar2,puVar1);
    }
    *(undefined8 *)(param_1 + 0x240) = 0;
  }
  return;
}



// FUNCTION 14316f8f0 FUN_14316f8f0 body=24 status=ok
// SIG undefined FUN_14316f8f0(void)

void FUN_14316f8f0(longlong param_1,ulonglong param_2,short param_3)

{
  short *psVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x200 + (param_2 & 0xffffffff) * 8);
  if (lVar2 != 0) {
    psVar1 = (short *)(lVar2 + 0x8a);
    *psVar1 = *psVar1 + param_3;
  }
  return;
}



// FUNCTION 14316f910 FUN_14316f910 body=1147 status=ok
// SIG undefined FUN_14316f910(void)

void FUN_14316f910(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  uint *puVar9;
  longlong *plVar10;
  void *_Dst;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  longlong *plVar14;
  undefined1 local_res18 [8];
  longlong *local_res20;
  undefined8 local_80;
  undefined2 local_78;
  undefined1 local_76;
  undefined8 local_70;
  uint local_68;
  longlong *local_60;
  undefined2 local_58;
  
  if (param_2 == 0xffffffff) {
    return;
  }
  plVar8 = (longlong *)0x0;
  plVar14 = (longlong *)0x0;
  bVar2 = false;
  lVar7 = (longlong)(int)(param_2 + 1);
  bVar3 = false;
  if (lVar7 < 4) {
    plVar11 = (longlong *)(param_1 + 0x200 + lVar7 * 8);
    do {
      if ((longlong *)*plVar11 != (longlong *)0x0) {
        bVar3 = true;
        plVar8 = (longlong *)*plVar11;
        break;
      }
      lVar7 = lVar7 + 1;
      plVar11 = plVar11 + 1;
    } while (lVar7 < 4);
  }
  lVar7 = (longlong)(int)(param_2 - 1);
  plVar11 = (longlong *)(param_1 + 0x178);
  if (plVar8 != (longlong *)0x0) {
    plVar11 = plVar8;
  }
  if (-1 < (int)(param_2 - 1)) {
    plVar8 = (longlong *)(param_1 + 0x200 + lVar7 * 8);
    do {
      if ((longlong *)*plVar8 != (longlong *)0x0) {
        bVar2 = true;
        plVar14 = (longlong *)*plVar8;
        break;
      }
      plVar8 = plVar8 + -1;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  plVar8 = (longlong *)(param_1 + 0x80);
  if (plVar14 != (longlong *)0x0) {
    plVar8 = plVar14;
  }
  plVar14 = *(longlong **)(*(longlong *)(param_1 + 0x238) + 0x18);
  local_70 = plVar14[0x46];
  local_68 = *(uint *)(plVar14 + 0x47);
  local_res20 = plVar14;
  if (bVar2) {
    puVar9 = (uint *)(**(code **)(*plVar8 + 0x80))(plVar8,local_res18);
    local_70 = (ulonglong)*puVar9 << 0x20;
    uVar13 = *puVar9;
  }
  else {
    local_70._4_4_ = (uint)((ulonglong)local_70 >> 0x20);
    uVar13 = local_70._4_4_;
  }
  local_70._0_4_ = DAT_1467bdcac;
  plVar10 = *(longlong **)(param_1 + ((ulonglong)param_2 + 0x40) * 8);
  puVar1 = (undefined8 *)(param_1 + ((ulonglong)param_2 + 0x40) * 8);
  local_68 = ((uVar13 & 0xff) * 0x20 | 0xa000) << 3 | local_68 & 0xfffd0020 | 0x20;
  if (plVar10 != (longlong *)0x0) {
    puVar9 = (uint *)(**(code **)(*plVar10 + 0x80))(plVar10,local_res18);
    uVar13 = *puVar9;
    if ((int)param_2 < 4) {
      plVar14 = (longlong *)(param_1 + (longlong)(int)param_2 * 8 + 0x200);
      uVar12 = param_2;
      do {
        if ((((longlong *)*plVar14 != (longlong *)0x0) &&
            (cVar5 = (**(code **)(*(longlong *)*plVar14 + 0x60))(), cVar5 != '\0')) &&
           (uVar12 != param_2)) break;
        uVar12 = uVar12 + 1;
        plVar14 = plVar14 + 1;
      } while ((int)uVar12 < 4);
    }
    CAkVPLNode::Disconnect(plVar11);
    (**(code **)(*plVar10 + 0x50))(plVar10);
    lVar4 = g_LEngineDefaultPoolId;
    (**(code **)*plVar10)(plVar10,0);
    AK::MemoryMgr::Free(lVar4,plVar10);
    *puVar1 = 0;
    plVar14 = local_res20;
  }
  plVar10 = (longlong *)0x0;
  local_60 = (longlong *)0x0;
  (**(code **)(*(longlong *)plVar14[0x31] + 0x1c8))
            ((longlong *)plVar14[0x31],param_2,&local_60,plVar14[6]);
  uVar12 = local_70._4_4_;
  if (local_60 == (longlong *)0x0) {
LAB_14316fcde:
    if ((((char)uVar12 != (char)uVar13) || (((uVar12 ^ uVar13) & 0xf00) != 0)) ||
       (((uVar12 ^ uVar13) & 0xfffff000) != 0)) {
      if (bVar3) {
        FUN_14316f910(param_1,param_2 + 1);
        goto LAB_14316fd4a;
      }
      CAkSrcLpHpFilter::Term(param_1 + 0x188);
      CAkSrcLpHpFilter::Init(param_1 + 0x188,uVar12,0);
      *(uint *)(param_1 + 0x298) = uVar12;
    }
    if (plVar10 != (longlong *)0x0) {
      plVar8 = plVar10;
    }
  }
  else {
    local_78 = 1;
    local_res20 = (longlong *)0x0;
    local_80 = 0;
    local_76 = 0;
    iVar6 = FUN_143128650((int)local_60[6],&local_res20,&local_80);
    if (iVar6 == 1) {
      iVar6 = CAkEffectsMgr::ValidatePluginInfo((int)local_60[6],3,&local_80);
      if (iVar6 == 0) {
        if ((char)local_78 == '\0') {
          _Dst = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,0x148);
          if (_Dst != (void *)0x0) {
            _guard_xfg_dispatch_icall_nop(_Dst,0,0x148);
            plVar10 = (longlong *)CAkVPLFilterNodeOutOfPlace::CAkVPLFilterNodeOutOfPlace(_Dst);
LAB_14316fc54:
            if (plVar10 != (longlong *)0x0) {
              iVar6 = (**(code **)(*plVar10 + 0x48))
                                (plVar10,local_res20,&local_60,param_2,param_1,&local_70);
              if (iVar6 == 1) {
                *puVar1 = plVar10;
                *(undefined2 *)((longlong)plVar10 + 0x8a) = local_58;
                (**(code **)(*plVar10 + 0x40))(plVar10,plVar8);
                puVar9 = (uint *)(**(code **)(*plVar10 + 0x80))(plVar10,local_res18);
                uVar12 = *puVar9;
                goto LAB_14316fcde;
              }
              (**(code **)(*plVar10 + 0x50))();
              lVar4 = g_LEngineDefaultPoolId;
              (**(code **)*plVar10)(plVar10,0);
              AK::MemoryMgr::Free(lVar4,plVar10);
            }
          }
        }
        else {
          if (local_78._1_1_ != '\0') goto LAB_14316fb72;
          plVar10 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,0xb0);
          if (plVar10 != (longlong *)0x0) {
            _guard_xfg_dispatch_icall_nop(plVar10,0,0xb0);
            plVar10[5] = 0;
            plVar10[6] = 0;
            plVar10[7] = 0;
            *(undefined4 *)(plVar10 + 8) = 0;
            *(undefined4 *)(plVar10 + 9) = 0;
            *(undefined1 *)(plVar10 + 10) = 0xff;
            *(undefined1 *)(plVar10 + 0xb) = 0xff;
            plVar10[0xc] = 0;
            plVar10[0xd] = 0;
            plVar10[0xe] = 0;
            plVar10[4] = (longlong)&PTR__scalar_deleting_destructor__145aca6e8;
            plVar10[0xf] = 0;
            *(undefined4 *)(plVar10 + 0x10) = 0xffffffff;
            *plVar10 = (longlong)&PTR__scalar_deleting_destructor__145aca710;
            *(undefined1 *)(plVar10 + 0x15) = 0;
            *(uint *)(plVar10 + 0x15) = *(uint *)(plVar10 + 0x15) & 0xff;
            goto LAB_14316fc54;
          }
        }
      }
      else {
LAB_14316fb72:
        (**(code **)(*local_res20 + 8))(local_res20,&PTR_PTR_1467be108);
      }
    }
  }
  (**(code **)(*plVar11 + 0x40))(plVar11,plVar8);
LAB_14316fd4a:
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x10))();
  }
  return;
}



// FUNCTION 14316fdd0 FUN_14316fdd0 body=14 status=ok
// SIG undefined FUN_14316fdd0(void)

void FUN_14316fdd0(longlong param_1,__uint64 param_2)

{
  AK::MemoryMgr::Malign(*(long *)(param_1 + 8),param_2,0x10);
  return;
}



// FUNCTION 14316fde0 FUN_14316fde0 body=8 status=ok
// SIG undefined FUN_14316fde0(void)

void FUN_14316fde0(longlong param_1,void *param_2)

{
  AK::MemoryMgr::Falign(*(long *)(param_1 + 8),param_2);
  return;
}



// FUNCTION 14316fdf0 FUN_14316fdf0 body=497 status=ok
// SIG undefined FUN_14316fdf0(void)

undefined8 FUN_14316fdf0(ulonglong *param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong local_28;
  ulonglong *local_20;
  undefined8 local_18;
  
  puVar5 = (ulonglong *)param_1[1];
  uVar6 = 0;
  puVar3 = *(ulonglong **)(param_2 + 8);
  iVar9 = 0;
  puVar4 = puVar5 + (uint)param_1[2];
  if (puVar5 != puVar4) {
    puVar1 = puVar3 + *(uint *)(param_2 + 0x10);
    uVar8 = uVar6;
    do {
      iVar9 = (int)uVar8;
      if (puVar3 == puVar1) break;
      if (*puVar5 == *puVar3) {
        uVar8 = (ulonglong)(iVar9 + 1);
        puVar5 = puVar5 + 1;
LAB_14316fe45:
        puVar3 = puVar3 + 1;
      }
      else {
        if (*puVar3 <= *puVar5) goto LAB_14316fe45;
        puVar5 = puVar5 + 1;
      }
      iVar9 = (int)uVar8;
    } while (puVar5 != puVar4);
  }
  local_18 = 0;
  uVar7 = (uint)param_1[2] + (*(uint *)(param_2 + 0x10) - iVar9);
  local_20 = (ulonglong *)0x0;
  if (uVar7 != 0) {
    if ((ulonglong)uVar7 << 3 < 9) {
      puVar4 = &local_28;
    }
    else {
      puVar4 = AK::MemoryMgr::Malign(g_DefaultPoolId,(ulonglong)uVar7 << 3,8);
      if (puVar4 == (ulonglong *)0x0) {
        return 0;
      }
      if ((local_20 != (ulonglong *)0x0) && (local_20 != puVar4)) {
        if ((local_18 & 0xffffffff) != 0) {
          do {
            puVar4[uVar6] = local_20[uVar6];
            uVar6 = uVar6 + 1;
          } while (uVar6 < (local_18 & 0xffffffff));
        }
        if (&local_28 != local_20) {
          AK::MemoryMgr::Falign(g_DefaultPoolId,local_20);
        }
      }
    }
    local_18 = (ulonglong)uVar7 << 0x20;
    local_20 = puVar4;
  }
  puVar4 = (ulonglong *)param_1[1];
  puVar5 = *(ulonglong **)(param_2 + 8);
  local_18 = CONCAT44(local_18._4_4_,uVar7);
  puVar3 = local_20;
LAB_14316ff00:
  while( true ) {
    puVar1 = (ulonglong *)(*(longlong *)(param_2 + 8) + (ulonglong)*(uint *)(param_2 + 0x10) * 8);
    if (puVar5 != puVar1) break;
    puVar2 = (ulonglong *)param_1[1];
    if (puVar4 == puVar2 + (uint)param_1[2]) {
      if (puVar2 != (ulonglong *)0x0) {
        *(undefined4 *)(param_1 + 2) = 0;
        if (param_1 != puVar2) {
          AK::MemoryMgr::Falign(g_DefaultPoolId,puVar2);
        }
        param_1[1] = 0;
      }
      if (&local_28 == local_20) {
        *param_1 = local_28;
        local_20 = param_1;
      }
      param_1[1] = (ulonglong)local_20;
      *(undefined4 *)(param_1 + 2) = (undefined4)local_18;
      *(undefined4 *)((longlong)param_1 + 0x14) = local_18._4_4_;
      return CONCAT71((uint7)(uint3)(local_18 >> 0x28),1);
    }
    if (puVar5 != puVar1) break;
LAB_14316ff5f:
    uVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    *puVar3 = uVar6;
    puVar3 = puVar3 + 1;
  }
  if (puVar4 != (ulonglong *)(param_1[1] + (ulonglong)(uint)param_1[2] * 8)) {
    uVar6 = *puVar4;
    if (uVar6 <= *puVar5) {
      if (*puVar5 != uVar6) goto LAB_14316ff5f;
      puVar4 = puVar4 + 1;
      *puVar3 = uVar6;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
      goto LAB_14316ff00;
    }
  }
  uVar6 = *puVar5;
  puVar5 = puVar5 + 1;
  *puVar3 = uVar6;
  puVar3 = puVar3 + 1;
  goto LAB_14316ff00;
}



// FUNCTION 14316fff0 FUN_14316fff0 body=336 status=ok
// SIG undefined FUN_14316fff0(void)

undefined8 FUN_14316fff0(longlong param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  if (*(char *)(param_1 + 0xb8) == '\0') {
    if (*(char *)(DAT_146b51f28 + 0xb8) == '\0') {
      uVar3 = CAkConnectedListeners::GetDefault();
      lVar4 = CAkConnectedListeners::GetUserAssocs(uVar3);
    }
    else {
      lVar4 = DAT_146b51f28 + 0x20;
    }
    iVar2 = CAkLstnrAssocs::CopyFrom(param_1 + 0x20,lVar4);
    if (iVar2 != 1) {
      return 0;
    }
    *(undefined1 *)(param_1 + 0xb8) = 1;
  }
  plVar6 = *(longlong **)(param_2 + 8);
  bVar1 = true;
  if (plVar6 != plVar6 + *(uint *)(param_2 + 0x10)) {
    do {
      lVar4 = *plVar6;
      local_48 = (undefined4)lVar4;
      uStack_44 = (undefined4)((ulonglong)lVar4 >> 0x20);
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = 0;
      lVar5 = FUN_143171140(param_1 + 0x20,&local_38,local_res8);
      if (lVar5 == 0) {
LAB_1431700ee:
        bVar1 = false;
      }
      else {
        if (lVar4 != -1) {
          if ((((longlong *)(lVar5 - 0x18U) < *(longlong **)(param_1 + 0x38)) ||
              (*(longlong *)(lVar5 - 0x18U) != lVar4)) &&
             ((*(longlong **)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x40) * 3 + -3 <
               (longlong *)(lVar5 + 0x18U) || (*(longlong *)(lVar5 + 0x18U) != lVar4)))) {
            FUN_143132250(param_1 + 0x48,lVar4);
          }
        }
        if (!bVar1) goto LAB_1431700ee;
        bVar1 = true;
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != (longlong *)
                       (*(longlong *)(param_2 + 8) + (ulonglong)*(uint *)(param_2 + 0x10) * 8));
    if (!bVar1) {
      return 0;
    }
  }
  CAkConnectedListeners::BuildListenerSet(param_1);
  return 1;
}



// FUNCTION 143170140 FUN_143170140 body=209 status=ok
// SIG undefined FUN_143170140(void)

ulonglong FUN_143170140(longlong param_1,ulonglong *param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar5 = 0;
  iVar8 = *(int *)(param_1 + 0x20) + -1;
  iVar6 = 0;
  if (-1 < iVar8) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    uVar3 = *param_2;
    uVar7 = uVar5;
    do {
      iVar6 = (int)uVar7 + (iVar8 - (int)uVar7) / 2;
      lVar1 = (longlong)iVar6 * 0x18;
      uVar4 = *(ulonglong *)(lVar1 + lVar2);
      if ((uVar3 < uVar4) || ((uVar3 == uVar4 && ((uint)param_2[1] < *(uint *)(lVar1 + 8 + lVar2))))
         ) {
        iVar8 = iVar6 + -1;
      }
      else {
        if ((uVar3 <= uVar4) &&
           ((uVar3 != uVar4 || ((uint)param_2[1] <= *(uint *)(lVar1 + 8 + lVar2))))) {
          *param_3 = 1;
          return *(longlong *)(param_1 + 0x18) + lVar1;
        }
        uVar7 = (ulonglong)(iVar6 + 1);
      }
      iVar6 = (int)uVar7;
    } while (iVar6 <= iVar8);
  }
  *param_3 = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    uVar5 = *(longlong *)(param_1 + 0x18) + (longlong)iVar6 * 0x18;
  }
  return uVar5;
}



// FUNCTION 143170220 BuildListenerSet body=323 status=ok
// SIG undefined BuildListenerSet(void)

void CAkConnectedListeners::BuildListenerSet(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(char *)(param_1 + 0xb8) == '\0') {
    uVar2 = GetDefault();
    lVar1 = GetUserAssocs(uVar2);
  }
  else {
    lVar1 = param_1 + 0x20;
  }
  FUN_14316fdf0(param_1 + 0xa0,lVar1 + 0x28);
  if (*(char *)(param_1 + 0xb9) == '\0') {
    uVar2 = GetDefault();
    lVar1 = GetAuxAssocs(uVar2);
  }
  else {
    lVar1 = param_1 + 0x60;
  }
  FUN_14316fdf0(param_1 + 0xa0,lVar1 + 0x28);
  FUN_1431704b0(param_1 + 0xa0);
  lVar1 = DAT_146b50850;
  if (DAT_146b51f28 == param_1) {
    for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x10)) {
      if ((lVar1 != param_1) &&
         ((*(char *)(lVar1 + 0xb9) == '\0' || (*(char *)(lVar1 + 0xb8) == '\0')))) {
        *(undefined4 *)(lVar1 + 0xb0) = 0;
        if (*(char *)(lVar1 + 0xb8) == '\0') {
          uVar2 = GetDefault();
          lVar3 = GetUserAssocs(uVar2);
        }
        else {
          lVar3 = lVar1 + 0x20;
        }
        FUN_14316fdf0(lVar1 + 0xa0,lVar3 + 0x28);
        if (*(char *)(lVar1 + 0xb9) == '\0') {
          uVar2 = GetDefault();
          lVar3 = GetAuxAssocs(uVar2);
        }
        else {
          lVar3 = lVar1 + 0x60;
        }
        FUN_14316fdf0(lVar1 + 0xa0,lVar3 + 0x28);
        FUN_1431704b0(lVar1 + 0xa0);
      }
    }
  }
  return;
}



// FUNCTION 143170370 CopyFrom body=306 status=ok
// SIG undefined CopyFrom(void)

undefined8 CAkLstnrAssocs::CopyFrom(void *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  char cVar8;
  ulonglong uVar9;
  uint uVar10;
  
  pvVar4 = *(void **)((longlong)param_1 + 0x18);
  if (pvVar4 != (void *)0x0) {
    *(undefined4 *)((longlong)param_1 + 0x20) = 0;
    if (param_1 != pvVar4) {
      AK::MemoryMgr::Falign(g_DefaultPoolId,pvVar4);
    }
    *(undefined8 *)((longlong)param_1 + 0x18) = 0;
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  cVar8 = AkArray<CAkLstnrAssoc,CAkLstnrAssoc_const_&,AkHybridAllocator<24,8>,4,AkAssignmentMovePolicy<CAkLstnrAssoc>_>
          ::Resize(param_1,*(undefined4 *)(param_2 + 0x20));
  if (cVar8 != '\0') {
    uVar9 = 0;
    if (*(int *)(param_2 + 0x20) != 0) {
      do {
        uVar10 = (int)uVar9 + 1;
        lVar5 = *(longlong *)((longlong)param_1 + 0x18);
        lVar3 = uVar9 * 0x18;
        lVar6 = *(longlong *)(param_2 + 0x18);
        puVar1 = (undefined8 *)(lVar3 + lVar6);
        uVar7 = puVar1[1];
        puVar2 = (undefined8 *)(lVar3 + lVar5);
        *puVar2 = *puVar1;
        puVar2[1] = uVar7;
        *(undefined8 *)(lVar3 + 0x10 + lVar5) = *(undefined8 *)(lVar3 + 0x10 + lVar6);
        uVar9 = (ulonglong)uVar10;
      } while (uVar10 < *(uint *)(param_2 + 0x20));
    }
    pvVar4 = *(void **)((longlong)param_1 + 0x30);
    if (pvVar4 != (void *)0x0) {
      *(undefined4 *)((longlong)param_1 + 0x38) = 0;
      if ((void *)((longlong)param_1 + 0x28) != pvVar4) {
        AK::MemoryMgr::Falign(g_DefaultPoolId,pvVar4);
      }
      *(undefined8 *)((longlong)param_1 + 0x30) = 0;
      *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
    }
    uVar10 = *(uint *)(param_2 + 0x38);
    if (((uVar10 < *(uint *)((longlong)param_1 + 0x38)) ||
        (uVar10 <= *(uint *)((longlong)param_1 + 0x3c))) ||
       (cVar8 = FUN_143131d70((void *)((longlong)param_1 + 0x28),
                              uVar10 - *(uint *)((longlong)param_1 + 0x38)), cVar8 != '\0')) {
      *(uint *)((longlong)param_1 + 0x38) = uVar10;
      uVar9 = 0;
      if (*(int *)(param_2 + 0x38) != 0) {
        do {
          uVar10 = (int)uVar9 + 1;
          *(undefined8 *)(uVar9 * 8 + *(longlong *)((longlong)param_1 + 0x30)) =
               *(undefined8 *)(uVar9 * 8 + *(longlong *)(param_2 + 0x30));
          uVar9 = (ulonglong)uVar10;
        } while (uVar10 < *(uint *)(param_2 + 0x38));
      }
      return 1;
    }
  }
  return 2;
}



// FUNCTION 1431704b0 FUN_1431704b0 body=528 status=ok
// SIG undefined FUN_1431704b0(void)

void FUN_1431704b0(longlong param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  CAkRegisteredObj *pCVar4;
  CAkRegisteredObj *pCVar5;
  ulonglong uVar6;
  void *pvVar7;
  longlong *plVar8;
  CAkRegisteredObj *pCVar9;
  __uint64 _Var10;
  CAkRegisteredObj *pCVar11;
  __uint64 *p_Var12;
  uint uVar13;
  ulonglong uVar14;
  
  p_Var12 = *(__uint64 **)(param_1 + 8);
  if (p_Var12 != p_Var12 + *(uint *)(param_1 + 0x10)) {
    do {
      pCVar4 = CAkRegistryMgr::GetObjAndAddref(g_pRegistryMgr,*p_Var12);
      if (pCVar4 != (CAkRegisteredObj *)0x0) {
        if (*(uint *)(pCVar4 + 0x40) < 3) {
          uVar13 = *(uint *)(pCVar4 + 0x40);
          uVar6 = (ulonglong)uVar13;
          if (3 < uVar13) {
LAB_1431705e9:
            *(undefined4 *)(pCVar4 + 0x40) = 3;
            goto LAB_1431705f0;
          }
          if (2 < *(uint *)(pCVar4 + 0x44)) {
joined_r0x0001431705c3:
            for (; uVar6 < 3; uVar6 = uVar6 + 1) {
              puVar1 = (undefined8 *)(*(longlong *)(pCVar4 + 0x38) + uVar6 * 8);
              if (puVar1 != (undefined8 *)0x0) {
                *puVar1 = 0;
              }
            }
            goto LAB_1431705e9;
          }
          uVar13 = (*(uint *)(pCVar4 + 0x44) - uVar13) + 3;
          _Var10 = (ulonglong)uVar13 << 3;
          pCVar5 = pCVar4 + 0x28;
          if (0x10 < _Var10) {
            pCVar5 = AK::MemoryMgr::Malign(g_DefaultPoolId,_Var10,8);
          }
          if (pCVar5 != (CAkRegisteredObj *)0x0) {
            pCVar11 = *(CAkRegisteredObj **)(pCVar4 + 0x38);
            if ((pCVar11 != (CAkRegisteredObj *)0x0) && (pCVar11 != pCVar5)) {
              uVar14 = (ulonglong)*(uint *)(pCVar4 + 0x40);
              pCVar9 = pCVar5;
              if (uVar14 != 0) {
                do {
                  if (pCVar9 != (CAkRegisteredObj *)0x0) {
                    *(undefined8 *)pCVar9 = 0;
                  }
                  *(undefined8 *)pCVar9 =
                       *(undefined8 *)(pCVar9 + (*(longlong *)(pCVar4 + 0x38) - (longlong)pCVar5));
                  uVar14 = uVar14 - 1;
                  pCVar9 = pCVar9 + 8;
                } while (uVar14 != 0);
                pCVar11 = *(CAkRegisteredObj **)(pCVar4 + 0x38);
              }
              if (pCVar4 + 0x28 != pCVar11) {
                AK::MemoryMgr::Falign(g_DefaultPoolId,pCVar11);
              }
            }
            *(CAkRegisteredObj **)(pCVar4 + 0x38) = pCVar5;
            *(uint *)(pCVar4 + 0x44) = uVar13;
            goto joined_r0x0001431705c3;
          }
        }
        else {
LAB_1431705f0:
          if (((*(longlong *)(*(longlong *)(pCVar4 + 0x38) + 0x10) == 0) &&
              (pvVar7 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x90), pvVar7 != (void *)0x0)) &&
             (plVar8 = (longlong *)CAkListener::CAkListener(pvVar7), plVar8 != (longlong *)0x0)) {
            *(longlong **)(*(longlong *)(pCVar4 + 0x38) + 0x10) = plVar8;
            plVar8[1] = (longlong)pCVar4;
            iVar3 = (**(code **)(*plVar8 + 8))(plVar8,*(undefined8 *)(pCVar4 + 0x48));
            lVar2 = g_DefaultPoolId;
            if (iVar3 != 1) {
              (**(code **)*plVar8)(plVar8,0);
              AK::MemoryMgr::Free(lVar2,plVar8);
              *(undefined8 *)(*(longlong *)(pCVar4 + 0x38) + 0x10) = 0;
            }
          }
        }
        pCVar5 = pCVar4 + 0x50;
        *(int *)pCVar5 = *(int *)pCVar5 + -1;
        lVar2 = g_DefaultPoolId;
        if (*(int *)pCVar5 == 0) {
          (*(code *)**(undefined8 **)pCVar4)(pCVar4,0);
          AK::MemoryMgr::Free(lVar2,pCVar4);
        }
      }
      p_Var12 = p_Var12 + 1;
    } while (p_Var12 !=
             (__uint64 *)(*(longlong *)(param_1 + 8) + (ulonglong)*(uint *)(param_1 + 0x10) * 8));
  }
  return;
}



// FUNCTION 1431706c0 FUN_1431706c0 body=196 status=ok
// SIG undefined FUN_1431706c0(void)

ulonglong FUN_1431706c0(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  uint uStack_10;
  
  uVar2 = *param_2;
  uVar5 = 0;
  iVar8 = *(int *)(param_1 + 0x20) + -1;
  iVar4 = 0;
  if (-1 < iVar8) {
    uStack_10 = (uint)param_2[1];
    uVar7 = uVar5;
    do {
      iVar4 = (iVar8 - (int)uVar7) / 2 + (int)uVar7;
      uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar4 * 0x18);
      uVar6 = *(longlong *)(param_1 + 0x18) + (longlong)iVar4 * 0x18;
      if ((uVar2 < uVar1) || ((uVar2 == uVar1 && (uStack_10 < *(uint *)(uVar6 + 8))))) {
        iVar8 = iVar4 + -1;
      }
      else {
        if ((uVar2 <= uVar1) && ((uVar2 != uVar1 || (uStack_10 <= *(uint *)(uVar6 + 8))))) {
          bVar3 = true;
          goto LAB_143170765;
        }
        uVar7 = (ulonglong)(iVar4 + 1);
      }
      iVar4 = (int)uVar7;
    } while (iVar4 <= iVar8);
  }
  bVar3 = false;
  uVar6 = uVar5;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    uVar6 = *(longlong *)(param_1 + 0x18) + (longlong)iVar4 * 0x18;
  }
LAB_143170765:
  if (bVar3) {
    uVar5 = uVar6;
  }
  return uVar5;
}



// FUNCTION 143170790 GetGain body=50 status=ok
// SIG undefined GetGain(void)

undefined4 CAkLstnrAssocs::GetGain(undefined8 param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  lVar1 = FUN_1431706c0(local_18,&local_18);
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0x10);
  }
  return 0x3f800000;
}



// FUNCTION 1431707d0 FUN_1431707d0 body=709 status=ok
// SIG undefined FUN_1431707d0(void)

void FUN_1431707d0(longlong param_1,longlong *param_2,float param_3,undefined4 param_4,
                  undefined4 param_5,longlong param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  void *pvVar6;
  void *pvVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  ulonglong uVar13;
  float fVar14;
  
  plVar12 = *(longlong **)(param_1 + 0x18);
  if (plVar12 != plVar12 + (ulonglong)*(uint *)(param_1 + 0x20) * 3) {
    do {
      fVar14 = param_3 * *(float *)(plVar12 + 2);
      if (DAT_1467be0f0 < fVar14) {
        if (*plVar12 == -1) {
          puVar11 = *(undefined8 **)(param_6 + 8);
          if (puVar11 != puVar11 + *(uint *)(param_6 + 0x10)) {
            do {
              uVar3 = *(uint *)(param_2 + 1);
              if (uVar3 < *(uint *)((longlong)param_2 + 0xc)) {
LAB_14317090b:
                uVar3 = *(uint *)(param_2 + 1);
                *(uint *)(param_2 + 1) = uVar3 + 1;
                puVar9 = (undefined8 *)((ulonglong)uVar3 * 0x20 + *param_2);
                if (puVar9 != (undefined8 *)0x0) {
                  *puVar9 = *puVar11;
                  lVar8 = plVar12[1];
                  *(float *)((longlong)puVar9 + 0xc) = fVar14;
                  *(undefined4 *)((longlong)puVar9 + 0x14) = param_4;
                  *(undefined4 *)(puVar9 + 3) = param_5;
                  *(int *)(puVar9 + 1) = (int)lVar8;
                  *(undefined4 *)(puVar9 + 2) = 1;
                }
              }
              else {
                uVar1 = *(uint *)((longlong)param_2 + 0xc) + 1;
                pvVar6 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 5);
                if (pvVar6 != (void *)0x0) {
                  pvVar7 = (void *)*param_2;
                  if ((pvVar7 != (void *)0x0) && (pvVar7 != pvVar6)) {
                    uVar13 = (ulonglong)*(uint *)(param_2 + 1);
                    if (uVar13 != 0) {
                      lVar8 = 0;
                      do {
                        lVar4 = *param_2;
                        puVar9 = (undefined8 *)(lVar8 + lVar4);
                        uVar5 = puVar9[1];
                        *(undefined8 *)(lVar8 + (longlong)pvVar6) = *puVar9;
                        ((undefined8 *)(lVar8 + (longlong)pvVar6))[1] = uVar5;
                        puVar9 = (undefined8 *)(lVar8 + 0x10 + lVar4);
                        uVar5 = puVar9[1];
                        puVar2 = (undefined8 *)(lVar8 + 0x10 + (longlong)pvVar6);
                        *puVar2 = *puVar9;
                        puVar2[1] = uVar5;
                        uVar13 = uVar13 - 1;
                        lVar8 = lVar8 + 0x20;
                      } while (uVar13 != 0);
                      pvVar7 = (void *)*param_2;
                    }
                    AK::MemoryMgr::Free(g_DefaultPoolId,pvVar7);
                  }
                  *param_2 = (longlong)pvVar6;
                  *(uint *)((longlong)param_2 + 0xc) = uVar1;
                  if (uVar3 < uVar1) goto LAB_14317090b;
                }
              }
              puVar11 = puVar11 + 1;
            } while (puVar11 !=
                     (undefined8 *)
                     (*(longlong *)(param_6 + 8) + (ulonglong)*(uint *)(param_6 + 0x10) * 8));
          }
        }
        else {
          uVar3 = *(uint *)(param_2 + 1);
          if (uVar3 < *(uint *)((longlong)param_2 + 0xc)) {
LAB_1431709f6:
            uVar3 = *(uint *)(param_2 + 1);
            *(uint *)(param_2 + 1) = uVar3 + 1;
            plVar10 = (longlong *)((ulonglong)uVar3 * 0x20 + *param_2);
            if (plVar10 != (longlong *)0x0) {
              *plVar10 = *plVar12;
              lVar8 = plVar12[1];
              *(float *)((longlong)plVar10 + 0xc) = fVar14;
              *(undefined4 *)((longlong)plVar10 + 0x14) = param_4;
              *(undefined4 *)(plVar10 + 3) = param_5;
              *(int *)(plVar10 + 1) = (int)lVar8;
              *(undefined4 *)(plVar10 + 2) = 1;
            }
          }
          else {
            uVar1 = *(uint *)((longlong)param_2 + 0xc) + 1;
            pvVar6 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 5);
            if (pvVar6 != (void *)0x0) {
              pvVar7 = (void *)*param_2;
              if ((pvVar7 != (void *)0x0) && (pvVar7 != pvVar6)) {
                uVar13 = (ulonglong)*(uint *)(param_2 + 1);
                if (uVar13 != 0) {
                  lVar8 = 0;
                  do {
                    lVar4 = *param_2;
                    puVar11 = (undefined8 *)(lVar8 + lVar4);
                    uVar5 = puVar11[1];
                    *(undefined8 *)(lVar8 + (longlong)pvVar6) = *puVar11;
                    ((undefined8 *)(lVar8 + (longlong)pvVar6))[1] = uVar5;
                    puVar11 = (undefined8 *)(lVar8 + 0x10 + lVar4);
                    uVar5 = puVar11[1];
                    puVar9 = (undefined8 *)(lVar8 + 0x10 + (longlong)pvVar6);
                    *puVar9 = *puVar11;
                    puVar9[1] = uVar5;
                    uVar13 = uVar13 - 1;
                    lVar8 = lVar8 + 0x20;
                  } while (uVar13 != 0);
                  pvVar7 = (void *)*param_2;
                }
                AK::MemoryMgr::Free(g_DefaultPoolId,pvVar7);
              }
              *param_2 = (longlong)pvVar6;
              *(uint *)((longlong)param_2 + 0xc) = uVar1;
              if (uVar3 < uVar1) goto LAB_1431709f6;
            }
          }
        }
      }
      plVar12 = plVar12 + 3;
    } while (plVar12 !=
             (longlong *)
             (*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x20) * 0x18));
  }
  return;
}



// FUNCTION 143170aa0 FUN_143170aa0 body=560 status=ok
// SIG undefined FUN_143170aa0(void)

undefined8 FUN_143170aa0(void *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  void *pvVar5;
  __uint64 _Var6;
  undefined8 *puVar7;
  void *pvVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  uVar9 = *(int *)((longlong)param_1 + 0x24) + param_2;
  _Var6 = (ulonglong)uVar9 * 0x18;
  pvVar5 = param_1;
  if (0x18 < _Var6) {
    pvVar5 = AK::MemoryMgr::Malign(g_DefaultPoolId,_Var6,8);
  }
  if (pvVar5 != (void *)0x0) {
    pvVar8 = *(void **)((longlong)param_1 + 0x18);
    uVar10 = (ulonglong)*(uint *)((longlong)param_1 + 0x20);
    if ((pvVar8 != (void *)0x0) && (pvVar8 != pvVar5)) {
      uVar13 = 0;
      if (3 < uVar10) {
        lVar11 = -(longlong)pvVar5;
        lVar12 = (uVar10 - 4 >> 2) + 1;
        uVar13 = lVar12 * 4;
        puVar7 = (undefined8 *)((longlong)pvVar5 + 0x10);
        do {
          puVar2 = puVar7 + -2;
          if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = 0xffffffffffffffff;
            *(undefined4 *)(puVar7 + -1) = 0;
            *(undefined4 *)puVar7 = 0x3f800000;
          }
          lVar3 = *(longlong *)((longlong)param_1 + 0x18);
          puVar1 = (undefined8 *)((longlong)puVar7 + lVar3 + lVar11 + -0x10);
          uVar4 = puVar1[1];
          *puVar2 = *puVar1;
          puVar7[-1] = uVar4;
          *puVar7 = *(undefined8 *)((longlong)puVar7 + lVar3 + lVar11);
          puVar2 = puVar7 + 1;
          if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = 0xffffffffffffffff;
            *(undefined4 *)(puVar7 + 2) = 0;
            *(undefined4 *)(puVar7 + 3) = 0x3f800000;
          }
          lVar3 = *(longlong *)((longlong)param_1 + 0x18);
          puVar1 = (undefined8 *)((longlong)puVar7 + lVar3 + lVar11 + 8);
          uVar4 = puVar1[1];
          *puVar2 = *puVar1;
          puVar7[2] = uVar4;
          puVar2 = puVar7 + 4;
          puVar7[3] = *(undefined8 *)((longlong)puVar7 + lVar3 + lVar11 + 0x18);
          if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = 0xffffffffffffffff;
            *(undefined4 *)(puVar7 + 5) = 0;
            *(undefined4 *)(puVar7 + 6) = 0x3f800000;
          }
          lVar3 = *(longlong *)((longlong)param_1 + 0x18);
          puVar1 = (undefined8 *)((longlong)puVar7 + lVar3 + -(longlong)pvVar5 + 0x20);
          uVar4 = puVar1[1];
          *puVar2 = *puVar1;
          puVar7[5] = uVar4;
          puVar7[6] = *(undefined8 *)((longlong)puVar7 + lVar3 + -(longlong)pvVar5 + 0x30);
          puVar2 = puVar7 + 7;
          if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = 0xffffffffffffffff;
            *(undefined4 *)(puVar7 + 8) = 0;
            *(undefined4 *)(puVar7 + 9) = 0x3f800000;
          }
          lVar3 = *(longlong *)((longlong)param_1 + 0x18);
          puVar1 = (undefined8 *)((longlong)puVar7 + lVar3 + -(longlong)pvVar5 + 0x38);
          uVar4 = puVar1[1];
          *puVar2 = *puVar1;
          puVar7[8] = uVar4;
          puVar7[9] = *(undefined8 *)((longlong)puVar7 + lVar3 + -(longlong)pvVar5 + 0x48);
          lVar12 = lVar12 + -1;
          puVar7 = puVar7 + 0xc;
        } while (lVar12 != 0);
        pvVar8 = *(void **)((longlong)param_1 + 0x18);
      }
      if (uVar13 < uVar10) {
        lVar11 = uVar10 - uVar13;
        puVar7 = (undefined8 *)((longlong)pvVar5 + uVar13 * 0x18);
        do {
          if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = 0xffffffffffffffff;
            *(undefined4 *)(puVar7 + 1) = 0;
            *(undefined4 *)(puVar7 + 2) = 0x3f800000;
          }
          lVar12 = *(longlong *)((longlong)param_1 + 0x18);
          puVar2 = (undefined8 *)((longlong)puVar7 + (lVar12 - (longlong)pvVar5));
          uVar4 = puVar2[1];
          *puVar7 = *puVar2;
          puVar7[1] = uVar4;
          puVar7[2] = *(undefined8 *)((longlong)puVar7 + lVar12 + (0x10 - (longlong)pvVar5));
          puVar7 = puVar7 + 3;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        pvVar8 = *(void **)((longlong)param_1 + 0x18);
      }
      if (param_1 != pvVar8) {
        AK::MemoryMgr::Falign(g_DefaultPoolId,pvVar8);
      }
    }
    *(void **)((longlong)param_1 + 0x18) = pvVar5;
    *(uint *)((longlong)param_1 + 0x24) = uVar9;
    return 1;
  }
  return 0;
}



// FUNCTION 143170cd0 FUN_143170cd0 body=216 status=ok
// SIG undefined FUN_143170cd0(void)

void FUN_143170cd0(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  
  uVar1 = *param_2;
  if (uVar1 != 0xffffffffffffffff) {
    if (((param_2 + -3 < *(ulonglong **)(param_1 + 0x18)) || (param_2[-3] != uVar1)) &&
       ((*(ulonglong **)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x20) * 3 + -3 <
         param_2 + 3 || (param_2[3] != uVar1)))) {
      uVar9 = *(uint *)(param_1 + 0x38);
      iVar7 = 0;
      iVar5 = uVar9 - 1;
      if (-1 < iVar5) {
        lVar4 = *(longlong *)(param_1 + 0x30);
        do {
          iVar3 = (iVar5 - iVar7) / 2 + iVar7;
          uVar2 = *(ulonglong *)(lVar4 + (longlong)iVar3 * 8);
          puVar6 = (undefined8 *)(lVar4 + (longlong)iVar3 * 8);
          if (uVar1 < uVar2) {
            iVar5 = iVar3 + -1;
          }
          else {
            if (uVar1 <= uVar2) {
              puVar8 = (undefined8 *)(lVar4 + ((ulonglong)uVar9 - 1) * 8);
              if (puVar6 < puVar8) {
                lVar4 = ((ulonglong)((longlong)puVar8 + (-1 - (longlong)puVar6)) >> 3) + 1;
                puVar8 = puVar6;
                for (; puVar6 = puVar6 + 1, lVar4 != 0; lVar4 = lVar4 + -1) {
                  *puVar8 = *puVar6;
                  puVar8 = puVar8 + 1;
                }
                uVar9 = *(uint *)(param_1 + 0x38);
              }
              *(uint *)(param_1 + 0x38) = uVar9 - 1;
              return;
            }
            iVar7 = iVar3 + 1;
          }
        } while (iVar7 <= iVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143170db0 FUN_143170db0 body=183 status=ok
// SIG undefined FUN_143170db0(void)

undefined8 FUN_143170db0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  cVar1 = *(char *)(param_1 + 0xb8);
  if (cVar1 == '\0') {
    if (*(char *)(DAT_146b51f28 + 0xb8) == '\0') {
      uVar4 = CAkConnectedListeners::GetDefault();
      lVar5 = CAkConnectedListeners::GetUserAssocs(uVar4);
    }
    else {
      lVar5 = DAT_146b51f28 + 0x20;
    }
    iVar3 = CAkLstnrAssocs::CopyFrom(param_1 + 0x20,lVar5);
    if (iVar3 != 1) {
      return 0;
    }
    *(undefined1 *)(param_1 + 0xb8) = 1;
  }
  cVar2 = FUN_143170e70(param_1 + 0x20,param_2);
  if (cVar2 == '\0') {
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
      CAkConnectedListeners::BuildListenerSet(param_1);
    }
    return 0;
  }
  CAkConnectedListeners::BuildListenerSet(param_1);
  return 1;
}



// FUNCTION 143170e70 FUN_143170e70 body=323 status=ok
// SIG undefined FUN_143170e70(void)

undefined1 FUN_143170e70(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong *puVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined1 uVar11;
  
  puVar6 = *(ulonglong **)(param_2 + 8);
  uVar11 = 0;
  if (puVar6 != puVar6 + *(uint *)(param_2 + 0x10)) {
    do {
      iVar9 = 0;
      iVar7 = *(int *)(param_1 + 0x20) + -1;
      uVar4 = *puVar6;
      if (-1 < iVar7) {
        do {
          iVar3 = (iVar7 - iVar9) / 2 + iVar9;
          uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 0x18);
          puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 0x18);
          if ((uVar4 < uVar1) || ((uVar4 == uVar1 && (*(int *)(puVar8 + 1) != 0)))) {
            iVar7 = iVar3 + -1;
          }
          else {
            if (uVar4 <= uVar1) {
              bVar2 = true;
              goto LAB_143170f1b;
            }
            iVar9 = iVar3 + 1;
          }
        } while (iVar9 <= iVar7);
      }
      bVar2 = false;
      if (*(longlong *)(param_1 + 0x18) == 0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar9 * 0x18);
      }
LAB_143170f1b:
      puVar10 = (undefined8 *)0x0;
      if (bVar2) {
        puVar10 = puVar8;
      }
      if (puVar10 != (undefined8 *)0x0) {
        FUN_143170cd0(param_1,puVar10);
        uVar5 = *(uint *)(param_1 + 0x20);
        puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + ((ulonglong)uVar5 - 1) * 0x18);
        if (puVar10 < puVar8) {
          uVar4 = ((ulonglong)((longlong)puVar8 + (-1 - (longlong)puVar10)) / 0x18 + 1) * 3 &
                  0x1fffffffffffffff;
          puVar8 = puVar10 + 3;
          for (; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar10 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar10 = puVar10 + 1;
          }
          uVar5 = *(uint *)(param_1 + 0x20);
        }
        uVar11 = 1;
        *(uint *)(param_1 + 0x20) = uVar5 - 1;
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 != (ulonglong *)
                       (*(longlong *)(param_2 + 8) + (ulonglong)*(uint *)(param_2 + 0x10) * 8));
  }
  return uVar11;
}



// FUNCTION 143170fc0 ResetListenersToDefault body=31 status=ok
// SIG undefined ResetListenersToDefault(void)

undefined8 CAkConnectedListeners::ResetListenersToDefault(longlong param_1)

{
  *(undefined1 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  BuildListenerSet();
  return 1;
}



// FUNCTION 143170fe0 Resize body=344 status=ok
// SIG undefined Resize(void)

undefined1
AkArray<CAkLstnrAssoc,CAkLstnrAssoc_const_&,AkHybridAllocator<24,8>,4,AkAssignmentMovePolicy<CAkLstnrAssoc>_>
::Resize(longlong param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar7 = (ulonglong)uVar1;
  uVar6 = (ulonglong)param_2;
  if (uVar1 <= param_2) {
    if (*(uint *)(param_1 + 0x24) < param_2) {
      cVar2 = FUN_143170aa0(param_1,param_2 - uVar1);
      if (cVar2 == '\0') {
        return 0;
      }
    }
    if (uVar7 < uVar6) {
      if (3 < uVar6 - uVar7) {
        lVar4 = uVar7 * 0x18;
        lVar8 = ((uVar6 - uVar7) - 4 >> 2) + 1;
        uVar7 = uVar7 + lVar8 * 4;
        do {
          lVar3 = *(longlong *)(param_1 + 0x18);
          puVar5 = (undefined8 *)(lVar4 + lVar3);
          if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = 0xffffffffffffffff;
            *(undefined4 *)(puVar5 + 1) = 0;
            *(undefined4 *)(puVar5 + 2) = 0x3f800000;
            lVar3 = *(longlong *)(param_1 + 0x18);
          }
          puVar5 = (undefined8 *)(lVar3 + 0x18 + lVar4);
          if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = 0xffffffffffffffff;
            *(undefined4 *)(puVar5 + 1) = 0;
            *(undefined4 *)(puVar5 + 2) = 0x3f800000;
            lVar3 = *(longlong *)(param_1 + 0x18);
          }
          puVar5 = (undefined8 *)(lVar3 + 0x30 + lVar4);
          if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = 0xffffffffffffffff;
            *(undefined4 *)(puVar5 + 1) = 0;
            *(undefined4 *)(puVar5 + 2) = 0x3f800000;
            lVar3 = *(longlong *)(param_1 + 0x18);
          }
          puVar5 = (undefined8 *)(lVar3 + 0x48 + lVar4);
          if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = 0xffffffffffffffff;
            *(undefined4 *)(puVar5 + 1) = 0;
            *(undefined4 *)(puVar5 + 2) = 0x3f800000;
          }
          lVar4 = lVar4 + 0x60;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      if (uVar7 < uVar6) {
        lVar4 = uVar7 * 0x18;
        lVar8 = uVar6 - uVar7;
        do {
          puVar5 = (undefined8 *)(lVar4 + *(longlong *)(param_1 + 0x18));
          if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = 0xffffffffffffffff;
            *(undefined4 *)(puVar5 + 1) = 0;
            *(undefined4 *)(puVar5 + 2) = 0x3f800000;
          }
          lVar4 = lVar4 + 0x18;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
    }
  }
  *(uint *)(param_1 + 0x20) = param_2;
  return 1;
}



// FUNCTION 143171140 FUN_143171140 body=398 status=ok
// SIG undefined FUN_143171140(void)

undefined8 * FUN_143171140(longlong param_1,undefined8 *param_2,char *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)param_2;
  uStack_14 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_10 = *(undefined4 *)(param_2 + 1);
  uStack_c = *(undefined4 *)((longlong)param_2 + 0xc);
  puVar4 = (undefined8 *)FUN_143170140(local_18,&local_18);
  if (*param_3 != '\0') {
    return puVar4;
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  if (puVar4 == (undefined8 *)0x0) {
    if (((uVar1 < *(uint *)(param_1 + 0x24)) || (cVar3 = FUN_143170aa0(param_1,4), cVar3 != '\0'))
       && (uVar1 < *(uint *)(param_1 + 0x24))) {
      puVar4 = (undefined8 *)
               (*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x20) * 0x18);
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) + 1;
      if (puVar4 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      *puVar4 = 0xffffffffffffffff;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)(puVar4 + 2) = 0x3f800000;
      goto LAB_1431712a6;
    }
  }
  else {
    lVar6 = (longlong)puVar4 - *(longlong *)(param_1 + 0x18);
    lVar6 = lVar6 / 6 + (lVar6 >> 0x3f);
    if (((uVar1 < *(uint *)(param_1 + 0x24)) || (cVar3 = FUN_143170aa0(param_1,4), cVar3 != '\0'))
       && (uVar1 < *(uint *)(param_1 + 0x24))) {
      lVar7 = *(longlong *)(param_1 + 0x18);
      puVar4 = (undefined8 *)(lVar7 + (ulonglong)*(uint *)(param_1 + 0x20) * 0x18);
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) + 1;
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 1) = 0;
        *(undefined4 *)(puVar4 + 2) = 0x3f800000;
        lVar7 = *(longlong *)(param_1 + 0x18);
      }
      uVar5 = (lVar6 >> 2) - (lVar6 >> 0x3f) & 0xffffffff;
      if ((undefined8 *)(lVar7 + uVar5 * 0x18) < puVar4) {
        do {
          *puVar4 = puVar4[-3];
          puVar4[1] = puVar4[-2];
          puVar4[2] = puVar4[-1];
          puVar4 = puVar4 + -3;
          lVar7 = *(longlong *)(param_1 + 0x18);
        } while ((undefined8 *)(lVar7 + uVar5 * 0x18) < puVar4);
      }
      puVar4 = (undefined8 *)(lVar7 + uVar5 * 0x18);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 1) = 0;
        *(undefined4 *)(puVar4 + 2) = 0x3f800000;
        lVar7 = *(longlong *)(param_1 + 0x18);
      }
      puVar4 = (undefined8 *)(lVar7 + uVar5 * 0x18);
LAB_1431712a6:
      if (puVar4 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      uVar2 = param_2[1];
      *puVar4 = *param_2;
      puVar4[1] = uVar2;
      return puVar4;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1431712d0 FUN_1431712d0 body=158 status=ok
// SIG undefined FUN_1431712d0(void)

undefined8 FUN_1431712d0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0xb8) == '\0') {
    if (*(char *)(DAT_146b51f28 + 0xb8) == '\0') {
      uVar2 = CAkConnectedListeners::GetDefault();
      lVar3 = CAkConnectedListeners::GetUserAssocs(uVar2);
    }
    else {
      lVar3 = DAT_146b51f28 + 0x20;
    }
    iVar1 = CAkLstnrAssocs::CopyFrom(param_1 + 0x20,lVar3);
    if (iVar1 == 1) {
      *(undefined1 *)(param_1 + 0xb8) = 1;
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x38);
  lVar4 = lVar3;
  if (lVar3 != lVar3 + (ulonglong)*(uint *)(param_1 + 0x40) * 0x18) {
    do {
      *(undefined4 *)(lVar4 + 0x10) = param_2;
      lVar4 = lVar4 + 0x18;
    } while (lVar4 != lVar3 + (ulonglong)*(uint *)(param_1 + 0x40) * 0x18);
  }
  CAkConnectedListeners::BuildListenerSet(param_1);
  return 1;
}



// FUNCTION 143171370 FUN_143171370 body=227 status=ok
// SIG undefined FUN_143171370(void)

undefined8 FUN_143171370(longlong param_1,longlong param_2,uint *param_3)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  float *pfVar4;
  ulonglong uVar5;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_28;
  undefined4 uStack_24;
  float fStack_20;
  
  *(undefined1 *)(param_1 + 0xb9) = 1;
  uVar1 = *param_3;
  bVar2 = true;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (uVar1 != 0) {
    pfVar4 = (float *)(param_2 + 0xc);
    uVar5 = (ulonglong)uVar1;
    do {
      if ((pfVar4[-1] != 0.0) && (0.0 < *pfVar4)) {
        local_38 = (undefined4)*(undefined8 *)(pfVar4 + -3);
        uStack_34 = (undefined4)((ulonglong)*(undefined8 *)(pfVar4 + -3) >> 0x20);
        local_28 = local_38;
        uStack_24 = uStack_34;
        fStack_20 = pfVar4[-1];
        cVar3 = FUN_143171460(param_1 + 0x60,&local_28);
        if ((cVar3 == '\0') || (!bVar2)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
      }
      pfVar4 = pfVar4 + 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    if (!bVar2) {
      return 0;
    }
  }
  CAkConnectedListeners::BuildListenerSet(param_1);
  return 1;
}



// FUNCTION 143171460 FUN_143171460 body=198 status=ok
// SIG undefined FUN_143171460(void)

undefined8 FUN_143171460(longlong param_1,undefined4 *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  lVar2 = FUN_1431706c0(local_38,&local_38);
  if (lVar2 == 0) {
    local_38 = *param_2;
    uStack_34 = param_2[1];
    uStack_30 = param_2[2];
    uStack_2c = param_2[3];
    local_28 = local_38;
    uStack_24 = uStack_34;
    uStack_20 = uStack_30;
    uStack_1c = uStack_2c;
    lVar2 = FUN_143171140(param_1,&local_38,local_res8);
    if ((lVar2 != 0) && (lVar1 = CONCAT44(uStack_24,local_28), lVar1 != -1)) {
      if (((longlong *)(lVar2 + -0x18) < *(longlong **)(param_1 + 0x18)) ||
         (*(longlong *)(lVar2 + -0x18) != lVar1)) {
        if ((*(longlong **)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x20) * 3 + -3 <
             (longlong *)(lVar2 + 0x18U)) || (*(longlong *)(lVar2 + 0x18U) != lVar1)) {
          FUN_143132250(param_1 + 0x28);
        }
      }
    }
    if (lVar2 == 0) {
      return 0;
    }
  }
  *(undefined4 *)(lVar2 + 0x10) = param_3;
  return 1;
}



// FUNCTION 143171530 SetListeners body=53 status=ok
// SIG undefined SetListeners(void)

undefined1 CAkConnectedListeners::SetListeners(longlong param_1)

{
  char cVar1;
  
  *(undefined1 *)(param_1 + 0xb8) = 1;
  cVar1 = FUN_143171570(param_1 + 0x20);
  if (cVar1 != '\0') {
    BuildListenerSet(param_1);
    return 1;
  }
  return 0;
}



// FUNCTION 143171570 FUN_143171570 body=529 status=ok
// SIG undefined FUN_143171570(void)

bool FUN_143171570(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  int iVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 local_res8 [8];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  uVar7 = (ulonglong)*(uint *)(param_1 + 0x20);
  uVar15 = 0;
  puVar9 = *(ulonglong **)(param_1 + 0x18);
  bVar2 = true;
  if (puVar9 != puVar9 + uVar7 * 3) {
    do {
      if ((int)puVar9[1] == 0) {
        iVar10 = *(int *)(param_2 + 0x10) + -1;
        iVar4 = 0;
        if (-1 < iVar10) {
          uVar7 = uVar15;
          do {
            iVar4 = (iVar10 - (int)uVar7) / 2 + (int)uVar7;
            uVar8 = *(ulonglong *)(*(longlong *)(param_2 + 8) + (longlong)iVar4 * 8);
            if (*puVar9 < uVar8) {
              iVar10 = iVar4 + -1;
            }
            else {
              if (*puVar9 <= uVar8) {
                uVar7 = (ulonglong)*(uint *)(param_1 + 0x20);
                bVar3 = true;
                uVar8 = *(longlong *)(param_2 + 8) + (longlong)iVar4 * 8;
                goto LAB_14317162b;
              }
              uVar7 = (ulonglong)(iVar4 + 1);
            }
            iVar4 = (int)uVar7;
          } while (iVar4 <= iVar10);
          uVar7 = (ulonglong)*(uint *)(param_1 + 0x20);
        }
        bVar3 = false;
        uVar8 = uVar15;
        if (*(longlong *)(param_2 + 8) != 0) {
          uVar8 = *(longlong *)(param_2 + 8) + (longlong)iVar4 * 8;
        }
LAB_14317162b:
        uVar5 = uVar15;
        if (bVar3) {
          uVar5 = uVar8;
        }
        if (uVar5 != 0) goto LAB_143171694;
        FUN_143170cd0(param_1,puVar9);
        uVar14 = *(uint *)(param_1 + 0x20);
        puVar11 = (ulonglong *)(*(longlong *)(param_1 + 0x18) + ((ulonglong)uVar14 - 1) * 0x18);
        if (puVar9 < puVar11) {
          uVar7 = ((ulonglong)((longlong)puVar11 + (-1 - (longlong)puVar9)) / 0x18 + 1) * 3 &
                  0x1fffffffffffffff;
          puVar11 = puVar9 + 3;
          puVar12 = puVar9;
          for (; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar12 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar12 = puVar12 + 1;
          }
          uVar14 = *(uint *)(param_1 + 0x20);
        }
        uVar7 = (ulonglong)(uVar14 - 1);
        *(uint *)(param_1 + 0x20) = uVar14 - 1;
      }
      else {
LAB_143171694:
        puVar9 = puVar9 + 3;
      }
    } while (puVar9 != (ulonglong *)(*(longlong *)(param_1 + 0x18) + uVar7 * 0x18));
  }
  plVar13 = *(longlong **)(param_2 + 8);
  if (plVar13 != plVar13 + *(uint *)(param_2 + 0x10)) {
    do {
      lVar1 = *plVar13;
      local_48 = (undefined4)lVar1;
      uStack_44 = (undefined4)((ulonglong)lVar1 >> 0x20);
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = 0;
      lVar6 = FUN_143171140(param_1,&local_38,local_res8);
      if (lVar6 == 0) {
LAB_14317174c:
        bVar2 = false;
      }
      else {
        if (lVar1 != -1) {
          if ((((longlong *)(lVar6 - 0x18U) < *(longlong **)(param_1 + 0x18)) ||
              (*(longlong *)(lVar6 - 0x18U) != lVar1)) &&
             ((*(longlong **)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x20) * 3 + -3 <
               (longlong *)(lVar6 + 0x18U) || (*(longlong *)(lVar6 + 0x18U) != lVar1)))) {
            FUN_143132250(param_1 + 0x28,lVar1);
          }
        }
        if (!bVar2) goto LAB_14317174c;
        bVar2 = true;
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 !=
             (longlong *)(*(longlong *)(param_2 + 8) + (ulonglong)*(uint *)(param_2 + 0x10) * 8));
  }
  return bVar2;
}



// FUNCTION 143171790 FUN_143171790 body=180 status=ok
// SIG undefined FUN_143171790(void)

undefined8 FUN_143171790(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_28;
  undefined4 uStack_20;
  
  if (*(char *)(param_1 + 0xb8) == '\0') {
    if (*(char *)(DAT_146b51f28 + 0xb8) == '\0') {
      uVar3 = CAkConnectedListeners::GetDefault();
      lVar4 = CAkConnectedListeners::GetUserAssocs(uVar3);
    }
    else {
      lVar4 = DAT_146b51f28 + 0x20;
    }
    iVar2 = CAkLstnrAssocs::CopyFrom(param_1 + 0x20,lVar4);
    if (iVar2 == 1) {
      *(undefined1 *)(param_1 + 0xb8) = 1;
    }
  }
  uStack_20 = 0;
  local_28 = param_2;
  cVar1 = FUN_143171460(param_1 + 0x20,&local_28,param_3);
  if (cVar1 != '\0') {
    CAkConnectedListeners::BuildListenerSet(param_1);
    return 1;
  }
  return 0;
}



// FUNCTION 143171850 Term body=144 status=ok
// SIG undefined Term(void)

void CAkConnectedListeners::Term(longlong param_1)

{
  void *pvVar1;
  
  CAkLstnrAssocs::Term(param_1 + 0x20);
  CAkLstnrAssocs::Term(param_1 + 0x60);
  pvVar1 = *(void **)(param_1 + 0xa8);
  if (pvVar1 != (void *)0x0) {
    *(undefined4 *)(param_1 + 0xb0) = 0;
    if ((void *)(param_1 + 0xa0) != pvVar1) {
      AK::MemoryMgr::Falign(g_DefaultPoolId,pvVar1);
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  *(bool *)(param_1 + 0xb9) = DAT_146b51f28 == param_1;
  *(bool *)(param_1 + 0xb9) = DAT_146b51f28 == param_1;
  return;
}



// FUNCTION 1431718e0 Term body=110 status=ok
// SIG undefined Term(void)

void CAkLstnrAssocs::Term(void *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    *(undefined4 *)((longlong)param_1 + 0x20) = 0;
    if (param_1 != pvVar1) {
      AK::MemoryMgr::Falign(g_DefaultPoolId,pvVar1);
    }
    *(undefined8 *)((longlong)param_1 + 0x18) = 0;
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  pvVar1 = *(void **)((longlong)param_1 + 0x30);
  if (pvVar1 != (void *)0x0) {
    *(undefined4 *)((longlong)param_1 + 0x38) = 0;
    if ((void *)((longlong)param_1 + 0x28) != pvVar1) {
      AK::MemoryMgr::Falign(g_DefaultPoolId,pvVar1);
    }
    *(undefined8 *)((longlong)param_1 + 0x30) = 0;
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  return;
}



// FUNCTION 143171950 CAkEmitter body=126 status=ok
// SIG undefined CAkEmitter(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * CAkEmitter::CAkEmitter(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_145aca858;
  param_1[3] = DAT_146b508a8;
  param_1[2] = 0;
  puVar1 = param_1;
  if (DAT_146b508b0 != (undefined8 *)0x0) {
    *(undefined8 **)((longlong)DAT_146b508a8 + 0x10) = param_1;
    puVar1 = DAT_146b508b0;
  }
  DAT_146b508b0 = puVar1;
  _DAT_146b508a0 = _DAT_146b508a0 + 1;
  DAT_146b508a8 = param_1;
  *param_1 = &PTR__vector_deleting_destructor__145aca868;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) & 0xf8;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  param_1[9] = 0;
  param_1[10] = 0;
  *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) | 1;
  return param_1;
}



// FUNCTION 1431719d0 CAkModifiedNodes body=107 status=ok
// SIG undefined CAkModifiedNodes(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * CAkModifiedNodes::CAkModifiedNodes(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_145aca838;
  param_1[3] = DAT_146b50890;
  param_1[2] = 0;
  puVar1 = param_1;
  if (DAT_146b50898 != (undefined8 *)0x0) {
    *(undefined8 **)((longlong)DAT_146b50890 + 0x10) = param_1;
    puVar1 = DAT_146b50898;
  }
  DAT_146b50898 = puVar1;
  _DAT_146b50888 = _DAT_146b50888 + 1;
  DAT_146b50890 = param_1;
  *param_1 = &PTR__scalar_deleting_destructor__145aca848;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 143171a40 ~AkPositionStore body=186 status=ok
// SIG undefined ~AkPositionStore(void)

void AkPositionStore::~AkPositionStore(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if ((void *)*param_1 != (void *)0x0) {
    *(undefined2 *)(param_1 + 3) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*param_1);
    *param_1 = 0;
  }
  pvVar1 = (void *)param_1[1];
  pvVar2 = pvVar1;
  if (pvVar1 != (void *)((longlong)pvVar1 + (ulonglong)*(uint *)(param_1 + 2) * 0x18)) {
    do {
      if (*(void **)((longlong)pvVar1 + 8) != (void *)0x0) {
        *(undefined4 *)((longlong)pvVar1 + 0x10) = 0;
        AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)((longlong)pvVar1 + 8));
        *(undefined8 *)((longlong)pvVar1 + 8) = 0;
        *(undefined4 *)((longlong)pvVar1 + 0x14) = 0;
      }
      pvVar1 = (void *)((longlong)pvVar1 + 0x18);
      pvVar2 = (void *)param_1[1];
    } while (pvVar1 != (void *)((longlong)pvVar2 + (ulonglong)*(uint *)(param_1 + 2) * 0x18));
  }
  if (pvVar2 != (void *)0x0) {
    *(undefined4 *)(param_1 + 2) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,pvVar2);
    param_1[1] = 0;
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  return;
}



// FUNCTION 143171b00 ~CAkEmitter body=170 status=ok
// SIG void ~CAkEmitter(CAkEmitter * this)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual __cdecl CAkEmitter::~CAkEmitter(void) __ptr64 */

void __thiscall CAkEmitter::~CAkEmitter(CAkEmitter *this)

{
  CAkEmitter *pCVar1;
  CAkEmitter *pCVar2;
  
                    /* 0x3171b00  25  ??1CAkEmitter@@UEAA@XZ */
  *(undefined ***)this = &PTR__vector_deleting_destructor__145aca868;
  if (*(void **)(this + 0x48) != (void *)0x0) {
    *(undefined4 *)(this + 0x50) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(this + 0x48));
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined4 *)(this + 0x54) = 0;
  }
  AkPositionStore::~AkPositionStore(this + 0x20);
  *(undefined ***)this = &PTR_FUN_145aca858;
  pCVar2 = (CAkEmitter *)0x0;
  if (*(longlong *)(this + 0x10) != 0) {
    *(undefined8 *)(*(longlong *)(this + 0x10) + 0x18) = *(undefined8 *)(this + 0x18);
    pCVar2 = *(CAkEmitter **)(this + 0x10);
  }
  pCVar1 = *(CAkEmitter **)(this + 0x18);
  if (this != DAT_146b508b0) {
    *(CAkEmitter **)(pCVar1 + 0x10) = pCVar2;
    pCVar2 = DAT_146b508b0;
  }
  DAT_146b508b0 = pCVar2;
  if (this == DAT_146b508a8) {
    DAT_146b508a8 = pCVar1;
  }
  _DAT_146b508a0 = _DAT_146b508a0 + -1;
  *(undefined ***)this = &PTR_FUN_145ac68a8;
  return;
}



// FUNCTION 143171bb0 ~CAkModifiedNodes body=403 status=ok
// SIG undefined ~CAkModifiedNodes(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CAkModifiedNodes::~CAkModifiedNodes(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)param_1[4];
  *param_1 = &PTR__scalar_deleting_destructor__145aca848;
  for (; puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)*puVar3) {
    plVar2 = (longlong *)FUN_14313b2c0(DAT_146b50af8,puVar3 + 1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x40))(plVar2,param_1[1]);
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  while (puVar3 = (undefined8 *)param_1[4], puVar3 != (undefined8 *)0x0) {
    param_1[4] = *puVar3;
    if (puVar3 == (undefined8 *)param_1[5]) {
      param_1[5] = 0;
    }
    if ((puVar3 < (undefined8 *)param_1[7]) ||
       ((undefined8 *)param_1[7] + (ulonglong)*(uint *)(param_1 + 8) * 2 <= puVar3)) {
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar3);
      *(int *)((longlong)param_1 + 0x44) = *(int *)((longlong)param_1 + 0x44) + -1;
    }
    else {
      *puVar3 = param_1[6];
      *(int *)((longlong)param_1 + 0x44) = *(int *)((longlong)param_1 + 0x44) + -1;
      param_1[6] = puVar3;
    }
  }
  puVar3 = (undefined8 *)param_1[6];
  while (puVar1 = puVar3, puVar1 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar1;
    if ((puVar1 < (undefined8 *)param_1[7]) ||
       ((undefined8 *)param_1[7] + (ulonglong)*(uint *)(param_1 + 8) * 2 <= puVar1)) {
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar1);
    }
  }
  if ((void *)param_1[7] != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[7]);
    param_1[7] = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_145aca838;
  puVar3 = (undefined8 *)0x0;
  if (param_1[2] != 0) {
    *(undefined8 *)(param_1[2] + 0x18) = param_1[3];
    puVar3 = (undefined8 *)param_1[2];
  }
  puVar1 = (undefined8 *)param_1[3];
  if (param_1 != DAT_146b50898) {
    puVar1[2] = puVar3;
    puVar3 = DAT_146b50898;
  }
  DAT_146b50898 = puVar3;
  if (param_1 == DAT_146b50890) {
    DAT_146b50890 = puVar1;
  }
  _DAT_146b50888 = _DAT_146b50888 + -1;
  *param_1 = &PTR_FUN_145ac68a8;
  return;
}



// FUNCTION 143171d50 ~CAkRegisteredObj body=47 status=ok
// SIG void ~CAkRegisteredObj(CAkRegisteredObj * this)

/* public: virtual __cdecl CAkRegisteredObj::~CAkRegisteredObj(void) __ptr64 */

void __thiscall CAkRegisteredObj::~CAkRegisteredObj(CAkRegisteredObj *this)

{
                    /* 0x3171d50  27  ??1CAkRegisteredObj@@UEAA@XZ */
  *(undefined ***)this = &PTR__vector_deleting_destructor__145ac78e8;
  CAkSwitchMgr::UnregisterGameObject(g_pSwitchMgr,this);
  CAkGameObject::~CAkGameObject((CAkGameObject *)this);
  return;
}



// FUNCTION 143171d80 `vector_deleting_destructor' body=181 status=ok
// SIG undefined `vector_deleting_destructor'(void)

CAkEmitter * CAkRegisteredObj::_vector_deleting_destructor_(CAkEmitter *param_1,uint param_2)

{
  CAkEmitter *this;
  longlong lVar1;
  
  if ((param_2 & 2) != 0) {
    lVar1 = *(longlong *)(param_1 + -8);
    this = param_1 + lVar1 * 0x60;
    for (; lVar1 != 0; lVar1 = lVar1 + -1) {
      this = this + -0x60;
      CAkEmitter::~CAkEmitter(this);
    }
    if ((param_2 & 1) != 0) {
      FMemory::operator_delete(param_1 + -8,*(longlong *)(param_1 + -8) * 0x60 + 8);
    }
    return param_1 + -8;
  }
  CAkEmitter::~CAkEmitter(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 143171e40 FUN_143171e40 body=134 status=ok
// SIG undefined FUN_143171e40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143171e40(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_145aca838;
  puVar2 = (undefined8 *)0x0;
  if (param_1[2] != 0) {
    *(undefined8 *)(param_1[2] + 0x18) = param_1[3];
    puVar2 = (undefined8 *)param_1[2];
  }
  puVar1 = (undefined8 *)param_1[3];
  if (param_1 != DAT_146b50898) {
    puVar1[2] = puVar2;
    puVar2 = DAT_146b50898;
  }
  DAT_146b50898 = puVar2;
  if (param_1 == DAT_146b50890) {
    DAT_146b50890 = puVar1;
  }
  _DAT_146b50888 = _DAT_146b50888 + -1;
  *param_1 = &PTR_FUN_145ac68a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 143171ed0 FUN_143171ed0 body=134 status=ok
// SIG undefined FUN_143171ed0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143171ed0(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_145aca858;
  puVar2 = (undefined8 *)0x0;
  if (param_1[2] != 0) {
    *(undefined8 *)(param_1[2] + 0x18) = param_1[3];
    puVar2 = (undefined8 *)param_1[2];
  }
  puVar1 = (undefined8 *)param_1[3];
  if (param_1 != DAT_146b508b0) {
    puVar1[2] = puVar2;
    puVar2 = DAT_146b508b0;
  }
  DAT_146b508b0 = puVar2;
  if (param_1 == DAT_146b508a8) {
    DAT_146b508a8 = puVar1;
  }
  _DAT_146b508a0 = _DAT_146b508a0 + -1;
  *param_1 = &PTR_FUN_145ac68a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 143171f60 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 CAkModifiedNodes::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~CAkModifiedNodes();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 143171fa0 FUN_143171fa0 body=345 status=ok
// SIG undefined FUN_143171fa0(void)

undefined1 FUN_143171fa0(longlong *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  uVar2 = *(uint *)(param_1 + 1);
  uVar8 = (ulonglong)uVar2;
  uVar9 = (ulonglong)param_2;
  if (uVar2 <= param_2) {
    if (*(uint *)((longlong)param_1 + 0xc) < param_2) {
      cVar4 = FUN_1431721a0(param_1,param_2 - uVar2);
      if (cVar4 == '\0') {
        return 0;
      }
    }
    if (uVar8 < uVar9) {
      uVar11 = uVar8;
      if (3 < uVar9 - uVar8) {
        lVar7 = uVar8 << 4;
        lVar10 = ((uVar9 - uVar8) - 4 >> 2) + 1;
        uVar11 = uVar8 + lVar10 * 4;
        do {
          lVar5 = *param_1;
          puVar6 = (undefined8 *)(lVar7 + lVar5);
          if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = 0;
            puVar6[1] = 0;
            lVar5 = *param_1;
          }
          puVar6 = (undefined8 *)(lVar5 + 0x10 + lVar7);
          if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = 0;
            puVar6[1] = 0;
            lVar5 = *param_1;
          }
          puVar6 = (undefined8 *)(lVar5 + 0x20 + lVar7);
          if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = 0;
            puVar6[1] = 0;
            lVar5 = *param_1;
          }
          puVar6 = (undefined8 *)(lVar5 + 0x30 + lVar7);
          if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = 0;
            puVar6[1] = 0;
          }
          lVar7 = lVar7 + 0x40;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      if (uVar11 < uVar9) {
        lVar7 = uVar11 << 4;
        lVar10 = uVar9 - uVar11;
        do {
          puVar6 = (undefined8 *)(lVar7 + *param_1);
          if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = 0;
            puVar6[1] = 0;
          }
          lVar7 = lVar7 + 0x10;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
    }
  }
  *(uint *)(param_1 + 1) = param_2;
  if (((uVar2 != 0) && (uVar2 < param_2)) && (uVar8 < uVar9)) {
    lVar10 = uVar9 - uVar8;
    lVar7 = uVar8 << 4;
    do {
      puVar6 = (undefined8 *)(*param_1 + (ulonglong)(uVar2 - 1) * 0x10);
      uVar3 = puVar6[1];
      puVar1 = (undefined8 *)(lVar7 + *param_1);
      *puVar1 = *puVar6;
      puVar1[1] = uVar3;
      lVar10 = lVar10 + -1;
      lVar7 = lVar7 + 0x10;
    } while (lVar10 != 0);
  }
  return 1;
}



// FUNCTION 143172100 GetConnectedListeners body=25 status=ok
// SIG undefined GetConnectedListeners(void)

void CAkRegisteredObj::GetConnectedListeners(longlong param_1)

{
  if ((1 < *(uint *)(param_1 + 0x40)) && (*(longlong *)(*(longlong *)(param_1 + 0x38) + 8) != 0)) {
    return;
  }
  CAkConnectedListeners::GetDefault();
  return;
}



// FUNCTION 143172120 GetListeners body=39 status=ok
// SIG undefined GetListeners(void)

longlong CAkRegisteredObj::GetListeners(longlong param_1)

{
  longlong lVar1;
  
  if ((*(uint *)(param_1 + 0x40) < 2) ||
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 8), lVar1 == 0)) {
    lVar1 = CAkConnectedListeners::GetDefault();
  }
  return lVar1 + 0xa0;
}



// FUNCTION 143172150 GetNumEmitterListenerPairs body=72 status=ok
// SIG undefined GetNumEmitterListenerPairs(void)

int CAkRegisteredObj::GetNumEmitterListenerPairs(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(uint *)(param_1 + 0x40) != 0) {
    lVar1 = **(longlong **)(param_1 + 0x38);
    if (lVar1 != 0) {
      if ((*(uint *)(param_1 + 0x40) < 2) ||
         (lVar2 = (*(longlong **)(param_1 + 0x38))[1], lVar2 == 0)) {
        lVar2 = CAkConnectedListeners::GetDefault();
      }
      return (uint)*(ushort *)(lVar1 + 0x38) * *(int *)(lVar2 + 0xb0);
    }
  }
  return 0;
}



// FUNCTION 1431721a0 FUN_1431721a0 body=419 status=ok
// SIG undefined FUN_1431721a0(void)

undefined8 FUN_1431721a0(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  uVar8 = *(int *)((longlong)param_1 + 0xc) + param_2;
  pvVar5 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar8 << 4);
  if (pvVar5 == (void *)0x0) {
    return 0;
  }
  pvVar6 = (void *)*param_1;
  uVar9 = (ulonglong)*(uint *)(param_1 + 1);
  if ((pvVar6 != (void *)0x0) && (pvVar6 != pvVar5)) {
    uVar11 = 0;
    if (3 < uVar9) {
      lVar10 = (uVar9 - 4 >> 2) + 1;
      uVar11 = lVar10 * 4;
      puVar7 = (undefined8 *)((longlong)pvVar5 + 8);
      do {
        puVar2 = puVar7 + -1;
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined4 *)puVar2 = 0;
          *(undefined8 *)((longlong)puVar7 + -4) = 0;
          *(undefined4 *)((longlong)puVar7 + 4) = 0;
        }
        puVar1 = (undefined8 *)((longlong)puVar7 + *param_1 + -(longlong)pvVar5 + -8);
        uVar4 = puVar1[1];
        *puVar2 = *puVar1;
        *puVar7 = uVar4;
        puVar2 = puVar7 + 1;
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined4 *)puVar2 = 0;
          *(undefined8 *)((longlong)puVar7 + 0xc) = 0;
          *(undefined4 *)((longlong)puVar7 + 0x14) = 0;
        }
        puVar3 = (undefined8 *)((longlong)puVar7 + *param_1 + -(longlong)pvVar5 + 8);
        uVar4 = puVar3[1];
        puVar1 = puVar7 + 3;
        *puVar2 = *puVar3;
        puVar7[2] = uVar4;
        if (puVar1 != (undefined8 *)0x0) {
          *(undefined4 *)puVar1 = 0;
          *(undefined8 *)((longlong)puVar7 + 0x1c) = 0;
          *(undefined4 *)((longlong)puVar7 + 0x24) = 0;
        }
        puVar2 = (undefined8 *)(*param_1 + (0x18 - (longlong)pvVar5) + (longlong)puVar7);
        uVar4 = puVar2[1];
        *puVar1 = *puVar2;
        puVar7[4] = uVar4;
        puVar2 = puVar7 + 5;
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined4 *)puVar2 = 0;
          *(undefined8 *)((longlong)puVar7 + 0x2c) = 0;
          *(undefined4 *)((longlong)puVar7 + 0x34) = 0;
        }
        puVar1 = (undefined8 *)((0x28 - (longlong)pvVar5) + *param_1 + (longlong)puVar7);
        uVar4 = puVar1[1];
        *puVar2 = *puVar1;
        puVar7[6] = uVar4;
        lVar10 = lVar10 + -1;
        puVar7 = puVar7 + 8;
      } while (lVar10 != 0);
      pvVar6 = (void *)*param_1;
    }
    if (uVar11 < uVar9) {
      puVar7 = (undefined8 *)(uVar11 * 0x10 + (longlong)pvVar5);
      lVar10 = uVar9 - uVar11;
      do {
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = 0;
          puVar7[1] = 0;
        }
        puVar2 = (undefined8 *)((longlong)puVar7 + (*param_1 - (longlong)pvVar5));
        uVar4 = puVar2[1];
        *puVar7 = *puVar2;
        puVar7[1] = uVar4;
        puVar7 = puVar7 + 2;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      pvVar6 = (void *)*param_1;
    }
    AK::MemoryMgr::Free(g_DefaultPoolId,pvVar6);
  }
  *param_1 = (longlong)pvVar5;
  *(uint *)((longlong)param_1 + 0xc) = uVar8;
  return 1;
}



// FUNCTION 143172350 FUN_143172350 body=321 status=ok
// SIG undefined FUN_143172350(void)

undefined8 FUN_143172350(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  void *pvVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar8 = *(int *)((longlong)param_1 + 0xc) + param_2;
  pvVar5 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar8 * 0x68);
  if (pvVar5 == (void *)0x0) {
    return 0;
  }
  pvVar7 = (void *)*param_1;
  if ((pvVar7 != (void *)0x0) && (pvVar7 != pvVar5)) {
    uVar9 = (ulonglong)*(uint *)(param_1 + 1);
    if (uVar9 != 0) {
      lVar3 = -(longlong)pvVar5;
      puVar6 = (undefined8 *)((longlong)pvVar5 + 0x28);
      do {
        if (puVar6 + -5 != (undefined8 *)0x0) {
          *(undefined8 *)((longlong)puVar6 + -4) = 0;
          *(undefined4 *)((longlong)puVar6 + 4) = 0;
          *(undefined4 *)(puVar6 + 1) = 0x3f800000;
          *(undefined4 *)((longlong)puVar6 + 0xc) = 0x3f800000;
          puVar6[2] = 0x3f800000;
          puVar6[3] = 0;
          *(undefined4 *)(puVar6 + 4) = 0;
          *(undefined4 *)((longlong)puVar6 + 0x24) = 0xffffffff;
          puVar6[5] = 0;
          *(undefined4 *)(puVar6 + 6) = 0x3f800000;
          *(undefined8 *)((longlong)puVar6 + 0x34) = 0x3f800000;
          *(undefined4 *)((longlong)puVar6 + 0x3c) = 0;
        }
        lVar2 = *param_1;
        puVar1 = (undefined8 *)((longlong)puVar6 + lVar2 + lVar3 + -0x28);
        uVar4 = puVar1[1];
        puVar6[-5] = *puVar1;
        puVar6[-4] = uVar4;
        puVar1 = (undefined8 *)((longlong)puVar6 + lVar2 + lVar3 + -0x18);
        uVar4 = puVar1[1];
        puVar6[-3] = *puVar1;
        puVar6[-2] = uVar4;
        puVar1 = (undefined8 *)((longlong)puVar6 + lVar2 + lVar3 + -8);
        uVar4 = puVar1[1];
        puVar6[-1] = *puVar1;
        *puVar6 = uVar4;
        puVar1 = (undefined8 *)((longlong)puVar6 + lVar2 + lVar3 + 8);
        uVar4 = puVar1[1];
        puVar6[1] = *puVar1;
        puVar6[2] = uVar4;
        puVar1 = (undefined8 *)((longlong)puVar6 + lVar2 + lVar3 + 0x18);
        uVar4 = puVar1[1];
        puVar6[3] = *puVar1;
        puVar6[4] = uVar4;
        puVar1 = (undefined8 *)((longlong)puVar6 + lVar2 + lVar3 + 0x28);
        uVar4 = puVar1[1];
        puVar6[5] = *puVar1;
        puVar6[6] = uVar4;
        puVar6[7] = *(undefined8 *)((longlong)puVar6 + lVar2 + lVar3 + 0x38);
        uVar9 = uVar9 - 1;
        puVar6 = puVar6 + 0xd;
      } while (uVar9 != 0);
      pvVar7 = (void *)*param_1;
    }
    AK::MemoryMgr::Free(g_DefaultPoolId,pvVar7);
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar8;
  *param_1 = (longlong)pvVar5;
  return 1;
}



// FUNCTION 1431724a0 FUN_1431724a0 body=450 status=ok
// SIG undefined FUN_1431724a0(void)

longlong * FUN_1431724a0(longlong *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  void *pvVar4;
  void *pvVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  
  uVar2 = *(uint *)(param_1 + 1);
  plVar3 = (longlong *)*param_1;
  plVar9 = plVar3 + (ulonglong)uVar2 * 3;
  for (; (plVar3 != plVar9 && (*plVar3 != param_2)); plVar3 = plVar3 + 3) {
  }
  plVar6 = plVar3 + 1;
  if (plVar3 == plVar9) {
    plVar6 = (longlong *)0x0;
  }
  if (plVar6 != (longlong *)0x0) {
    return plVar6;
  }
  if (*(uint *)((longlong)param_1 + 0xc) <= uVar2) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc) + 1;
    pvVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 * 0x18);
    if (pvVar4 == (void *)0x0) {
      return (longlong *)0x0;
    }
    pvVar5 = (void *)*param_1;
    if ((pvVar5 != (void *)0x0) && (pvVar5 != pvVar4)) {
      uVar10 = (ulonglong)*(uint *)(param_1 + 1);
      if (uVar10 != 0) {
        puVar7 = (undefined8 *)((longlong)pvVar4 + 0x10);
        do {
          if (puVar7 + -2 != (undefined8 *)0x0) {
            puVar7[-1] = 0;
            *puVar7 = 0;
          }
          puVar8 = (undefined8 *)((longlong)puVar7 + *param_1 + (-0x10 - (longlong)pvVar4));
          puVar7[-2] = *puVar8;
          if ((void *)puVar7[-1] != (void *)0x0) {
            *(undefined4 *)puVar7 = 0;
            AK::MemoryMgr::Free(g_DefaultPoolId,(void *)puVar7[-1]);
            puVar7[-1] = 0;
            *(undefined4 *)((longlong)puVar7 + 4) = 0;
          }
          puVar7[-1] = puVar8[1];
          *(undefined4 *)puVar7 = *(undefined4 *)(puVar8 + 2);
          *(undefined4 *)((longlong)puVar7 + 4) = *(undefined4 *)((longlong)puVar8 + 0x14);
          puVar7 = puVar7 + 3;
          puVar8[1] = 0;
          puVar8[2] = 0;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
        pvVar5 = (void *)*param_1;
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,pvVar5);
    }
    plVar9 = (longlong *)0x0;
    *param_1 = (longlong)pvVar4;
    *(uint *)((longlong)param_1 + 0xc) = uVar1;
    if (uVar1 <= uVar2) goto LAB_143172643;
  }
  plVar9 = (longlong *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x18);
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
  if (plVar9 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  plVar9[1] = 0;
  plVar9[2] = 0;
LAB_143172643:
  if (plVar9 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  *plVar9 = param_2;
  return plVar9 + 1;
}



// FUNCTION 143172670 FUN_143172670 body=13 status=ok
// SIG undefined FUN_143172670(void)

void FUN_143172670(longlong param_1)

{
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 1;
  FUN_143172800(param_1 + 0x20);
  return;
}



// FUNCTION 143172680 SetNodeAsModified body=201 status=ok
// SIG undefined SetNodeAsModified(void)

undefined8 CAkModifiedNodes::SetNodeAsModified(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined4 uStackX_c;
  
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  iVar1 = *(int *)(param_2 + 0x10);
  bVar3 = *(byte *)(param_2 + 0xa8) >> 7;
  uStackX_c = CONCAT31(uStackX_c._1_3_,bVar3);
  do {
    if (puVar2 == (undefined8 *)0x0) {
LAB_1431726cf:
      puVar2 = *(undefined8 **)(param_1 + 0x30);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x10);
        if (puVar2 == (undefined8 *)0x0) {
          return 2;
        }
        *puVar2 = *(undefined8 *)(param_1 + 0x30);
        *(undefined8 **)(param_1 + 0x30) = puVar2;
      }
      if (*(undefined8 **)(param_1 + 0x28) == (undefined8 *)0x0) {
        *(undefined8 **)(param_1 + 0x20) = puVar2;
      }
      else {
        **(undefined8 **)(param_1 + 0x28) = puVar2;
        puVar2 = *(undefined8 **)(param_1 + 0x30);
      }
      *(undefined8 **)(param_1 + 0x28) = puVar2;
      *(undefined8 *)(param_1 + 0x30) = *puVar2;
      *puVar2 = 0;
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
      *(ulonglong *)(*(longlong *)(param_1 + 0x28) + 8) = CONCAT44(uStackX_c,iVar1);
      return 1;
    }
    if ((iVar1 == *(int *)(puVar2 + 1)) && (bVar3 == *(byte *)((longlong)puVar2 + 0xc))) {
      if (puVar2 != (undefined8 *)0xfffffffffffffff8) {
        return 1;
      }
      goto LAB_1431726cf;
    }
    puVar2 = (undefined8 *)*puVar2;
  } while( true );
}



// FUNCTION 143172750 FUN_143172750 body=162 status=ok
// SIG undefined FUN_143172750(void)

undefined8 FUN_143172750(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  
  plVar3 = (longlong *)FUN_1431724a0(param_1 + 0x28);
  if (plVar3 != (longlong *)0x0) {
    iVar1 = (int)plVar3[1];
    if ((int)plVar3[1] == 0) {
      iVar1 = 1;
    }
    cVar2 = FUN_143171fa0(plVar3,iVar1);
    if (cVar2 != '\0') {
      *(undefined4 *)(*plVar3 + 4) = param_3;
      *(undefined4 *)*plVar3 = param_4;
      uVar5 = 1;
      if (1 < *(uint *)(plVar3 + 1)) {
        do {
          uVar4 = (int)uVar5 + 1;
          *(undefined4 *)(*plVar3 + 4 + uVar5 * 0x10) = param_3;
          *(undefined4 *)(*plVar3 + uVar5 * 0x10) = param_4;
          uVar5 = (ulonglong)uVar4;
        } while (uVar4 < *(uint *)(plVar3 + 1));
      }
    }
  }
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 1;
  return 1;
}



// FUNCTION 143172800 FUN_143172800 body=359 status=ok
// SIG undefined FUN_143172800(void)

undefined8 FUN_143172800(longlong param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  
  plVar4 = (longlong *)FUN_1431724a0(param_1 + 8);
  if (plVar4 != (longlong *)0x0) {
    uVar7 = (ulonglong)*(uint *)(plVar4 + 1);
    if (*(uint *)(plVar4 + 1) < param_4) {
      uVar7 = (ulonglong)param_4;
    }
    cVar2 = FUN_143171fa0(plVar4,uVar7);
    if (cVar2 != '\0') {
      uVar3 = 0;
      if (3 < param_4) {
        uVar3 = (param_4 - 4 >> 2) + 1;
        uVar7 = (ulonglong)uVar3;
        uVar3 = uVar3 * 4;
        lVar5 = 0;
        puVar6 = (undefined4 *)(param_3 + 0xc);
        do {
          lVar1 = lVar5 + 0x40;
          *(undefined4 *)(*plVar4 + -0x3c + lVar1) = puVar6[-2];
          *(undefined4 *)(lVar5 + *plVar4) = puVar6[-3];
          *(undefined4 *)(*plVar4 + -0x2c + lVar1) = *puVar6;
          *(undefined4 *)(*plVar4 + -0x30 + lVar1) = puVar6[-1];
          *(undefined4 *)(*plVar4 + -0x1c + lVar1) = puVar6[2];
          *(undefined4 *)(*plVar4 + -0x20 + lVar1) = puVar6[1];
          *(undefined4 *)(*plVar4 + -0xc + lVar1) = puVar6[4];
          *(undefined4 *)(lVar5 + 0x30 + *plVar4) = puVar6[3];
          uVar7 = uVar7 - 1;
          lVar5 = lVar1;
          puVar6 = puVar6 + 8;
        } while (uVar7 != 0);
      }
      if (uVar3 < param_4) {
        uVar7 = (ulonglong)(param_4 - uVar3);
        lVar5 = (ulonglong)uVar3 << 4;
        puVar6 = (undefined4 *)(param_3 + (ulonglong)uVar3 * 8);
        do {
          *(undefined4 *)(lVar5 + 4 + *plVar4) = puVar6[1];
          *(undefined4 *)(lVar5 + *plVar4) = *puVar6;
          uVar7 = uVar7 - 1;
          lVar5 = lVar5 + 0x10;
          puVar6 = puVar6 + 2;
        } while (uVar7 != 0);
      }
      if ((param_4 != 0) && (param_4 < *(uint *)(plVar4 + 1))) {
        uVar7 = (ulonglong)param_4;
        do {
          uVar3 = (int)uVar7 + 1;
          *(undefined4 *)(*plVar4 + 4 + uVar7 * 0x10) =
               *(undefined4 *)(param_3 + 4 + (ulonglong)(param_4 - 1) * 8);
          *(undefined4 *)(*plVar4 + uVar7 * 0x10) =
               *(undefined4 *)(param_3 + (ulonglong)(param_4 - 1) * 8);
          uVar7 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(plVar4 + 1));
      }
    }
  }
  return 1;
}



// FUNCTION 143172970 FUN_143172970 body=287 status=ok
// SIG undefined FUN_143172970(void)

void FUN_143172970(longlong param_1,longlong param_2,uint param_3,byte param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  void *_Dst;
  uint uVar6;
  ulonglong uVar7;
  
  plVar1 = (longlong *)(param_1 + 0x20);
  uVar7 = 0;
  if ((plVar1 != (longlong *)0x0) && (param_3 != *(ushort *)(param_1 + 0x38))) {
    if (*plVar1 != 0) {
      *(undefined2 *)(param_1 + 0x38) = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*plVar1);
      *plVar1 = 0;
    }
    if (param_3 != 0) {
      _Dst = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)param_3 * 0x30);
      if (_Dst == (void *)0x0) goto LAB_143172a62;
      _guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)param_3 * 0x30);
      *plVar1 = (longlong)_Dst;
      *(short *)(param_1 + 0x38) = (short)param_3;
    }
  }
  if (*(short *)(param_1 + 0x38) != 0) {
    do {
      lVar4 = *plVar1;
      uVar6 = (int)uVar7 + 1;
      puVar3 = (undefined8 *)(param_2 + uVar7 * 0x30);
      uVar5 = puVar3[1];
      puVar2 = (undefined8 *)(lVar4 + uVar7 * 0x30);
      *puVar2 = *puVar3;
      puVar2[1] = uVar5;
      puVar2 = (undefined8 *)(param_2 + 0x10 + uVar7 * 0x30);
      uVar5 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x10 + uVar7 * 0x30);
      *puVar3 = *puVar2;
      puVar3[1] = uVar5;
      *(undefined4 *)(lVar4 + 0x20 + uVar7 * 0x30) = *(undefined4 *)(param_2 + 0x20 + uVar7 * 0x30);
      *(undefined4 *)(*plVar1 + 0x24 + uVar7 * 0x30) =
           *(undefined4 *)(param_2 + 0x24 + uVar7 * 0x30);
      *(undefined4 *)(*plVar1 + 0x28 + uVar7 * 0x30) =
           *(undefined4 *)(param_2 + 0x28 + uVar7 * 0x30);
      *(undefined4 *)(*plVar1 + 0x2c + uVar7 * 0x30) =
           *(undefined4 *)(param_2 + 0x2c + uVar7 * 0x30);
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < *(ushort *)(param_1 + 0x38));
  }
LAB_143172a62:
  *(byte *)(param_1 + 0x3a) = *(byte *)(param_1 + 0x3a) & 0xf8;
  *(byte *)(param_1 + 0x3a) = *(byte *)(param_1 + 0x3a) | param_4 & 7;
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 1;
  return;
}



// FUNCTION 143172a90 FUN_143172a90 body=1563 status=ok
// SIG undefined FUN_143172a90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143172a90(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  float fVar5;
  longlong lVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  float *pfVar19;
  longlong lVar20;
  undefined8 *puVar21;
  int iVar22;
  longlong *plVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  ulonglong uVar27;
  undefined4 *puVar28;
  longlong lVar29;
  float fVar30;
  float fVar31;
  longlong local_res8;
  float local_res10 [2];
  uint local_res18;
  longlong local_res20;
  undefined8 auStack_110 [5];
  longlong local_e8;
  ulonglong *local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  ulonglong local_98;
  longlong local_90;
  longlong local_88;
  
  if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
    uVar17 = 0;
    uVar27 = (ulonglong)*(ushort *)(param_1 + 0x38);
    fVar31 = 1e+10;
    local_d8 = 0;
    fVar30 = (float)(uint)*(ushort *)(param_1 + 0x38);
    local_res8 = param_1;
    local_res10[0] = fVar30;
    if ((*(uint *)(*(longlong *)(param_1 + 8) + 0x40) < 2) ||
       (lVar10 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x38) + 8),
       local_res20 = lVar10, lVar10 == 0)) {
      auStack_110[0] = 0x143172b0d;
      lVar10 = CAkConnectedListeners::GetDefault();
    }
    plVar1 = (longlong *)(param_1 + 0x48);
    local_res18 = *(int *)(lVar10 + 0xb0) * (int)fVar30;
    *(undefined4 *)(param_1 + 0x50) = 0;
    local_res20 = lVar10;
    if (*(uint *)(param_1 + 0x54) < local_res18) {
      auStack_110[0] = 0x143172b42;
      cVar8 = FUN_143172350(plVar1,local_res18 - *(uint *)(param_1 + 0x54));
      if (cVar8 == '\0') {
        return;
      }
    }
    local_a0 = *(longlong *)(param_1 + 0x20);
    uVar12 = uVar27 * 0x10 + 0xf;
    if (uVar12 <= uVar27 * 0x10) {
      uVar12 = 0xffffffffffffff0;
    }
    auStack_110[0] = 0x143172b7c;
    puVar18 = *(ulonglong **)(lVar10 + 0xa8);
    lVar6 = -(uVar12 & 0xfffffffffffffff0);
    lVar29 = (longlong)&local_e8 + lVar6;
    lVar20 = param_1;
    local_98 = uVar27;
    local_88 = lVar29;
    if (puVar18 != puVar18 + *(uint *)(lVar10 + 0xb0)) {
      do {
        uVar12 = *puVar18;
        local_e0 = puVar18;
        *(undefined8 *)((longlong)auStack_110 + lVar6) = 0x143172bae;
        local_e8 = CAkListener::GetListenerData(uVar12);
        if (local_e8 != 0) {
          plVar13 = *(longlong **)(lVar20 + 0x28);
          plVar2 = plVar13 + (ulonglong)*(uint *)(lVar20 + 0x30) * 3;
          for (; (plVar13 != plVar2 &&
                 (*plVar13 != *(longlong *)(*(longlong *)(local_e8 + 8) + 0x48)));
              plVar13 = plVar13 + 3) {
          }
          plVar23 = plVar13 + 1;
          if (plVar13 == plVar2) {
            plVar23 = (longlong *)0x0;
          }
          uVar26 = (uint)uVar27;
          if ((plVar23 == (longlong *)0x0) || (uVar24 = *(uint *)(plVar23 + 1), uVar24 == 0)) {
            if (uVar26 != 0) {
              puVar21 = (undefined8 *)(lVar29 + 8);
              uVar12 = uVar27;
              do {
                puVar21[-1] = 0;
                *puVar21 = 0;
                puVar21 = puVar21 + 2;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
          }
          else {
            uVar12 = uVar27;
            if (uVar24 <= uVar26) {
              uVar12 = (ulonglong)uVar24;
            }
            uVar24 = (uint)uVar12;
            if (uVar24 != 0) {
              lVar14 = 0;
              uVar15 = uVar12;
              do {
                uVar11 = ((undefined8 *)(lVar14 + *plVar23))[1];
                *(undefined8 *)(lVar14 + lVar29) = *(undefined8 *)(lVar14 + *plVar23);
                ((undefined8 *)(lVar14 + lVar29))[1] = uVar11;
                uVar15 = uVar15 - 1;
                lVar14 = lVar14 + 0x10;
              } while (uVar15 != 0);
            }
            if (uVar24 < uVar26) {
              uVar15 = (ulonglong)(uVar26 - uVar24);
              puVar21 = (undefined8 *)(uVar12 * 0x10 + lVar29);
              do {
                puVar3 = (undefined8 *)(*plVar23 + (ulonglong)(uVar24 - 1) * 0x10);
                uVar11 = puVar3[1];
                *puVar21 = *puVar3;
                puVar21[1] = uVar11;
                uVar15 = uVar15 - 1;
                puVar21 = puVar21 + 2;
              } while (uVar15 != 0);
            }
          }
          if (*(char *)(lVar10 + 0xb8) == '\0') {
            *(undefined8 *)((longlong)auStack_110 + lVar6) = 0x143172cb5;
            uVar11 = CAkConnectedListeners::GetDefault();
            *(undefined8 *)((longlong)auStack_110 + lVar6) = 0x143172cbd;
            lVar10 = CAkConnectedListeners::GetUserAssocs(uVar11);
          }
          else {
            lVar10 = lVar10 + 0x20;
          }
          lVar14 = local_res8;
          iVar22 = 0;
          iVar25 = *(int *)(lVar10 + 0x38) + -1;
          if (-1 < iVar25) {
            do {
              iVar9 = (iVar25 - iVar22) / 2 + iVar22;
              uVar12 = *(ulonglong *)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar9 * 8);
              lVar16 = *(longlong *)(lVar10 + 0x30) + (longlong)iVar9 * 8;
              if (*puVar18 < uVar12) {
                iVar25 = iVar9 + -1;
              }
              else {
                if (*puVar18 <= uVar12) {
                  bVar7 = true;
                  goto LAB_143172d26;
                }
                iVar22 = iVar9 + 1;
              }
            } while (iVar22 <= iVar25);
          }
          bVar7 = false;
          if (*(longlong *)(lVar10 + 0x30) == 0) {
            lVar16 = 0;
          }
          else {
            lVar16 = *(longlong *)(lVar10 + 0x30) + (longlong)iVar22 * 8;
          }
LAB_143172d26:
          local_90 = 0;
          if (bVar7) {
            local_90 = lVar16;
          }
          lVar10 = local_res20;
          if (uVar26 != 0) {
            pfVar19 = (float *)(local_a0 + 0x28);
            puVar28 = (undefined4 *)(lVar29 + 8);
            uVar27 = local_98;
            do {
              uVar26 = *(uint *)(param_1 + 0x50);
              if (uVar26 < *(uint *)(param_1 + 0x54)) {
LAB_143172d7c:
                uVar26 = *(uint *)(param_1 + 0x50);
                *(uint *)(param_1 + 0x50) = uVar26 + 1;
                puVar21 = (undefined8 *)((ulonglong)uVar26 * 0x68 + *plVar1);
                if (puVar21 != (undefined8 *)0x0) {
                  *(undefined8 *)((longlong)puVar21 + 0x24) = 0;
                  *(undefined4 *)((longlong)puVar21 + 0x2c) = 0;
                  *(undefined4 *)(puVar21 + 6) = 0x3f800000;
                  *(undefined4 *)((longlong)puVar21 + 0x34) = 0x3f800000;
                  puVar21[7] = 0x3f800000;
                  puVar21[8] = 0;
                  *(undefined4 *)(puVar21 + 9) = 0;
                  *(undefined4 *)((longlong)puVar21 + 0x4c) = 0xffffffff;
                  puVar21[10] = 0;
                  *(undefined4 *)(puVar21 + 0xb) = 0x3f800000;
                  *(undefined8 *)((longlong)puVar21 + 0x5c) = 0x3f800000;
                  *(undefined4 *)((longlong)puVar21 + 100) = 0;
                }
              }
              else {
                *(undefined8 *)((longlong)auStack_110 + lVar6) = 0x143172d6b;
                cVar8 = FUN_143172350(plVar1,1);
                if (cVar8 == '\0') {
                  puVar21 = (undefined8 *)0x0;
                }
                else {
                  puVar21 = (undefined8 *)0x0;
                  if (uVar26 < *(uint *)(param_1 + 0x54)) goto LAB_143172d7c;
                }
              }
              lVar10 = local_e8;
              fVar30 = pfVar19[-1];
              uVar11 = *(undefined8 *)(pfVar19 + -8);
              *puVar21 = *(undefined8 *)(pfVar19 + -10);
              puVar21[1] = uVar11;
              uVar11 = *(undefined8 *)(pfVar19 + -4);
              puVar21[2] = *(undefined8 *)(pfVar19 + -6);
              puVar21[3] = uVar11;
              fVar5 = pfVar19[-2];
              *(float *)((longlong)puVar21 + 0x4c) = fVar30;
              *(float *)(puVar21 + 4) = fVar5;
              puVar21[10] = *(undefined8 *)(*(longlong *)(local_e8 + 8) + 0x48);
              *(undefined4 *)(puVar21 + 8) = puVar28[-1];
              *(undefined4 *)((longlong)puVar21 + 0x3c) = puVar28[-2];
              *(undefined4 *)((longlong)puVar21 + 0x44) = *puVar28;
              *(undefined4 *)(puVar21 + 9) = puVar28[1];
              *(undefined8 *)((longlong)auStack_110 + lVar6) = 0x143172e37;
              fVar30 = (float)FUN_14312f800(lVar10,lVar10,puVar21);
              *(float *)(puVar21 + 6) = *(float *)(puVar21 + 6) * *pfVar19;
              *(float *)((longlong)puVar21 + 0x34) = *(float *)((longlong)puVar21 + 0x34) * *pfVar19
              ;
              *(float *)(puVar21 + 7) = *(float *)(puVar21 + 7) * *pfVar19;
              *(float *)((longlong)puVar21 + 100) = pfVar19[1];
              if ((local_90 != 0) && (fVar30 < fVar31)) {
                uVar17 = (ulonglong)(*(int *)(lVar14 + 0x50) - 1);
                local_d8 = local_e8;
                fVar31 = fVar30;
              }
              puVar28 = puVar28 + 4;
              pfVar19 = pfVar19 + 0xc;
              uVar27 = uVar27 - 1;
            } while (uVar27 != 0);
            uVar27 = (ulonglong)(uint)local_res10[0];
            puVar18 = local_e0;
            lVar20 = local_res8;
            lVar10 = local_res20;
            lVar29 = local_88;
          }
        }
        lVar14 = local_d8;
        puVar18 = puVar18 + 1;
      } while (puVar18 !=
               (ulonglong *)(*(longlong *)(lVar10 + 0xa8) + (ulonglong)*(uint *)(lVar10 + 0xb0) * 8)
              );
      if ((local_d8 != 0) && (local_res18 != 0)) {
        local_d0 = *(undefined8 *)(lVar20 + 8);
        lVar10 = uVar17 * 0x68 + *plVar1;
        local_c8 = 0;
        local_c0 = 0;
        local_a8 = 0;
        local_b8 = 0xff;
        local_b0 = 0xff;
        local_e0 = puVar18;
        *(undefined8 *)((longlong)auStack_110 + lVar6) = 0x143172f37;
        CAkListener::ComputeSphericalCoordinates(lVar14,lVar10,&local_res8,local_res10);
        uVar4 = *(undefined4 *)(lVar10 + 0x60);
        *(undefined8 *)((longlong)auStack_110 + lVar6) = 0x143172f51;
        FUN_143137350(g_pRTPCMgr,1,&local_d0,uVar4);
        *(undefined8 *)((longlong)auStack_110 + lVar6) = 0x143172f9a;
        FUN_143137350(g_pRTPCMgr,2,&local_d0,
                      ((float)local_res8 - (float)(int)((float)local_res8 * 0.15915494)) * 57.29578)
        ;
        *(undefined8 *)((longlong)auStack_110 + lVar6) = 0x143172fd2;
        FUN_143137350(g_pRTPCMgr,3,&local_d0,
                      (local_res10[0] - (float)(int)(local_res10[0] * 0.15915494)) * 57.29578);
        fVar31 = *(float *)(lVar10 + 0x28);
        *(undefined8 *)((longlong)auStack_110 + lVar6) = 0x143173007;
        FUN_143137350(g_pRTPCMgr,4,&local_d0,(fVar31 - (float)(int)(fVar31 * 0.15915494)) * 57.29578
                     );
        fVar31 = *(float *)(lVar10 + 0x40);
        *(undefined8 *)((longlong)auStack_110 + lVar6) = 0x143173029;
        FUN_143137350(g_pRTPCMgr,5,&local_d0,fVar31 * 100.0);
        fVar31 = *(float *)(lVar10 + 0x3c);
        *(undefined8 *)((longlong)auStack_110 + lVar6) = 0x14317304b;
        FUN_143137350(g_pRTPCMgr,6,&local_d0,fVar31 * 100.0);
        fVar31 = *(float *)(lVar10 + 0x2c);
        *(undefined8 *)((longlong)auStack_110 + lVar6) = 0x143173080;
        FUN_143137350(g_pRTPCMgr,7,&local_d0,(fVar31 - (float)(int)(fVar31 * 0.15915494)) * 57.29578
                     );
      }
    }
    *(uint *)(lVar20 + 0x58) = *(uint *)(lVar20 + 0x58) & 0xfffffffe;
  }
  return;
}



// FUNCTION 1431730b0 CAkLimiter body=28 status=ok
// SIG undefined CAkLimiter(void)

undefined8 *
CAkLimiter::CAkLimiter(undefined8 *param_1,undefined2 param_2,undefined1 param_3,undefined1 param_4)

{
  *(undefined2 *)(param_1 + 2) = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x12) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x13) = param_4;
  return param_1;
}



// FUNCTION 1431730d0 CAkParameterNodeBase body=214 status=ok
// SIG undefined CAkParameterNodeBase(void)

undefined8 * CAkParameterNodeBase::CAkParameterNodeBase(undefined8 *param_1)

{
  CAkIndexable::CAkIndexable();
  *param_1 = &PTR__scalar_deleting_destructor__145ac7980;
  CAkParamNodeStateAware::CAkParamNodeStateAware(param_1 + 3);
  CAkRTPCSubscriberNode::CAkRTPCSubscriberNode(param_1 + 6);
  *param_1 = &PTR_FUN_145acaa68;
  param_1[8] = 0;
  param_1[3] = &PTR_LAB_145acaca0;
  param_1[6] = &PTR_PushParamUpdate_145ac7228;
  CAkRTPCSubscriberNode::CAkRTPCSubscriberNode(param_1 + 9);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(ushort *)((longlong)param_1 + 0xa6) = *(ushort *)((longlong)param_1 + 0xa6) & 0xfc00;
  *(byte *)((longlong)param_1 + 0xa9) = *(byte *)((longlong)param_1 + 0xa9) & 2;
  *(byte *)((longlong)param_1 + 0xaa) = *(byte *)((longlong)param_1 + 0xaa) & 0xf8;
  *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) & 0x40 | 0x10;
  return param_1;
}



// FUNCTION 1431731b0 FUN_1431731b0 body=934 status=ok
// SIG undefined FUN_1431731b0(void)

longlong FUN_1431731b0(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong *plVar4;
  
  *(undefined8 *)(param_1 + 0x3000) = 0;
  *(undefined4 *)(param_1 + 0x3008) = 0;
  *(undefined8 *)(param_1 + 0x3010) = 0;
  uVar3 = 2;
  do {
    plVar4 = (longlong *)((ulonglong)(uVar3 - 2) * 0x60 + param_1);
    if (*(longlong *)(param_1 + 0x3010) == 0) {
      *(longlong **)(param_1 + 0x3010) = plVar4;
      *plVar4 = 0;
      plVar4 = *(longlong **)(param_1 + 0x3010);
    }
    else {
      *plVar4 = *(longlong *)(param_1 + 0x3010);
      *(longlong **)(param_1 + 0x3010) = plVar4;
    }
    *(int *)(param_1 + 0x3008) = *(int *)(param_1 + 0x3008) + 1;
    puVar2 = (undefined8 *)((ulonglong)(uVar3 - 1) * 0x60 + param_1);
    if (plVar4 == (longlong *)0x0) {
      *(undefined8 **)(param_1 + 0x3010) = puVar2;
      *puVar2 = 0;
    }
    else {
      *puVar2 = plVar4;
      *(undefined8 **)(param_1 + 0x3010) = puVar2;
    }
    *(int *)(param_1 + 0x3008) = *(int *)(param_1 + 0x3008) + 1;
    plVar4 = (longlong *)((ulonglong)uVar3 * 0x60 + param_1);
    if (*(longlong *)(param_1 + 0x3010) == 0) {
      *(longlong **)(param_1 + 0x3010) = plVar4;
      *plVar4 = 0;
    }
    else {
      *plVar4 = *(longlong *)(param_1 + 0x3010);
      *(longlong **)(param_1 + 0x3010) = plVar4;
    }
    *(int *)(param_1 + 0x3008) = *(int *)(param_1 + 0x3008) + 1;
    plVar4 = (longlong *)((ulonglong)(uVar3 + 1) * 0x60 + param_1);
    if (*(longlong *)(param_1 + 0x3010) == 0) {
      *(longlong **)(param_1 + 0x3010) = plVar4;
      *plVar4 = 0;
    }
    else {
      *plVar4 = *(longlong *)(param_1 + 0x3010);
      *(longlong **)(param_1 + 0x3010) = plVar4;
    }
    *(int *)(param_1 + 0x3008) = *(int *)(param_1 + 0x3008) + 1;
    plVar4 = (longlong *)((ulonglong)(uVar3 + 2) * 0x60 + param_1);
    if (*(longlong *)(param_1 + 0x3010) == 0) {
      *(longlong **)(param_1 + 0x3010) = plVar4;
      *plVar4 = 0;
    }
    else {
      *plVar4 = *(longlong *)(param_1 + 0x3010);
      *(longlong **)(param_1 + 0x3010) = plVar4;
    }
    *(int *)(param_1 + 0x3008) = *(int *)(param_1 + 0x3008) + 1;
    plVar4 = (longlong *)((ulonglong)(uVar3 + 3) * 0x60 + param_1);
    if (*(longlong *)(param_1 + 0x3010) == 0) {
      *(longlong **)(param_1 + 0x3010) = plVar4;
      *plVar4 = 0;
    }
    else {
      *plVar4 = *(longlong *)(param_1 + 0x3010);
      *(longlong **)(param_1 + 0x3010) = plVar4;
    }
    *(int *)(param_1 + 0x3008) = *(int *)(param_1 + 0x3008) + 1;
    plVar4 = (longlong *)((ulonglong)(uVar3 + 4) * 0x60 + param_1);
    if (*(longlong *)(param_1 + 0x3010) == 0) {
      *(longlong **)(param_1 + 0x3010) = plVar4;
      *plVar4 = 0;
    }
    else {
      *plVar4 = *(longlong *)(param_1 + 0x3010);
      *(longlong **)(param_1 + 0x3010) = plVar4;
    }
    *(int *)(param_1 + 0x3008) = *(int *)(param_1 + 0x3008) + 1;
    plVar4 = (longlong *)((ulonglong)(uVar3 + 5) * 0x60 + param_1);
    if (*(longlong *)(param_1 + 0x3010) == 0) {
      *(longlong **)(param_1 + 0x3010) = plVar4;
      *plVar4 = 0;
    }
    else {
      *plVar4 = *(longlong *)(param_1 + 0x3010);
      *(longlong **)(param_1 + 0x3010) = plVar4;
    }
    *(int *)(param_1 + 0x3008) = *(int *)(param_1 + 0x3008) + 1;
    plVar4 = (longlong *)((ulonglong)(uVar3 + 6) * 0x60 + param_1);
    if (*(longlong *)(param_1 + 0x3010) == 0) {
      *(longlong **)(param_1 + 0x3010) = plVar4;
      *plVar4 = 0;
    }
    else {
      *plVar4 = *(longlong *)(param_1 + 0x3010);
      *(longlong **)(param_1 + 0x3010) = plVar4;
    }
    *(int *)(param_1 + 0x3008) = *(int *)(param_1 + 0x3008) + 1;
    plVar4 = (longlong *)((ulonglong)(uVar3 + 7) * 0x60 + param_1);
    if (*(longlong *)(param_1 + 0x3010) == 0) {
      *(longlong **)(param_1 + 0x3010) = plVar4;
      *plVar4 = 0;
    }
    else {
      *plVar4 = *(longlong *)(param_1 + 0x3010);
      *(longlong **)(param_1 + 0x3010) = plVar4;
    }
    *(int *)(param_1 + 0x3008) = *(int *)(param_1 + 0x3008) + 1;
    plVar4 = (longlong *)((ulonglong)(uVar3 + 8) * 0x60 + param_1);
    if (*(longlong *)(param_1 + 0x3010) == 0) {
      *(longlong **)(param_1 + 0x3010) = plVar4;
      *plVar4 = 0;
    }
    else {
      *plVar4 = *(longlong *)(param_1 + 0x3010);
      *(longlong **)(param_1 + 0x3010) = plVar4;
    }
    *(int *)(param_1 + 0x3008) = *(int *)(param_1 + 0x3008) + 1;
    plVar4 = (longlong *)((ulonglong)(uVar3 + 9) * 0x60 + param_1);
    if (*(longlong *)(param_1 + 0x3010) == 0) {
      *(longlong **)(param_1 + 0x3010) = plVar4;
      *plVar4 = 0;
    }
    else {
      *plVar4 = *(longlong *)(param_1 + 0x3010);
      *(longlong **)(param_1 + 0x3010) = plVar4;
    }
    *(int *)(param_1 + 0x3008) = *(int *)(param_1 + 0x3008) + 1;
    plVar4 = (longlong *)((ulonglong)(uVar3 + 10) * 0x60 + param_1);
    if (*(longlong *)(param_1 + 0x3010) == 0) {
      *(longlong **)(param_1 + 0x3010) = plVar4;
      *plVar4 = 0;
    }
    else {
      *plVar4 = *(longlong *)(param_1 + 0x3010);
      *(longlong **)(param_1 + 0x3010) = plVar4;
    }
    *(int *)(param_1 + 0x3008) = *(int *)(param_1 + 0x3008) + 1;
    plVar4 = (longlong *)((ulonglong)(uVar3 + 0xb) * 0x60 + param_1);
    if (*(longlong *)(param_1 + 0x3010) == 0) {
      *(longlong **)(param_1 + 0x3010) = plVar4;
      *plVar4 = 0;
    }
    else {
      *plVar4 = *(longlong *)(param_1 + 0x3010);
      *(longlong **)(param_1 + 0x3010) = plVar4;
    }
    *(int *)(param_1 + 0x3008) = *(int *)(param_1 + 0x3008) + 1;
    plVar4 = (longlong *)((ulonglong)(uVar3 + 0xc) * 0x60 + param_1);
    if (*(longlong *)(param_1 + 0x3010) == 0) {
      *(longlong **)(param_1 + 0x3010) = plVar4;
      *plVar4 = 0;
    }
    else {
      *plVar4 = *(longlong *)(param_1 + 0x3010);
      *(longlong **)(param_1 + 0x3010) = plVar4;
    }
    *(int *)(param_1 + 0x3008) = *(int *)(param_1 + 0x3008) + 1;
    plVar4 = (longlong *)((ulonglong)(uVar3 + 0xd) * 0x60 + param_1);
    if (*(longlong *)(param_1 + 0x3010) == 0) {
      *(longlong **)(param_1 + 0x3010) = plVar4;
      *plVar4 = 0;
    }
    else {
      *plVar4 = *(longlong *)(param_1 + 0x3010);
      *(longlong **)(param_1 + 0x3010) = plVar4;
    }
    *(int *)(param_1 + 0x3008) = *(int *)(param_1 + 0x3008) + 1;
    uVar1 = uVar3 + 0xe;
    uVar3 = uVar3 + 0x10;
  } while (uVar1 < 0x80);
  return param_1;
}



// FUNCTION 143173560 FUN_143173560 body=487 status=ok
// SIG undefined FUN_143173560(void)

void FUN_143173560(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  longlong *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  plVar3 = (longlong *)param_1[0xc];
  *param_1 = &PTR_FUN_145acaa68;
  param_1[3] = &PTR_LAB_145acaca0;
  param_1[6] = &PTR_PushParamUpdate_145ac7228;
  if (plVar3 != (longlong *)0x0) {
    pvVar5 = (void *)*plVar3;
    pvVar4 = pvVar5;
    if (pvVar5 != (void *)((ulonglong)*(uint *)(plVar3 + 1) * 0x10 + (longlong)pvVar5)) {
      do {
        lVar2 = g_DefaultPoolId;
        pvVar5 = *(void **)((longlong)pvVar4 + 8);
        if (pvVar5 != (void *)0x0) {
          CAkSIS::~CAkSIS(pvVar5);
          AK::MemoryMgr::Free(lVar2,pvVar5);
        }
        plVar3 = (longlong *)param_1[0xc];
        pvVar4 = (void *)((longlong)pvVar4 + 0x10);
        pvVar5 = (void *)*plVar3;
      } while (pvVar4 != (void *)((ulonglong)*(uint *)(plVar3 + 1) * 0x10 + (longlong)pvVar5));
    }
    if (pvVar5 != (void *)0x0) {
      *(undefined4 *)(plVar3 + 1) = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,pvVar5);
      *plVar3 = 0;
      *(undefined4 *)((longlong)plVar3 + 0xc) = 0;
      plVar3 = (longlong *)param_1[0xc];
    }
    if (plVar3 != (longlong *)0x0) {
      AK::MemoryMgr::Free(g_DefaultPoolId,plVar3);
    }
    param_1[0xc] = 0;
  }
  if ((void *)param_1[0x12] != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[0x12]);
  }
  if (param_1[0xe] != 0) {
    CAk3DAutomationParamsEx::FreePathInfo();
    FUN_1431bde20(param_1[0xe]);
    lVar2 = g_DefaultPoolId;
    puVar1 = (undefined8 *)param_1[0xe];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      AK::MemoryMgr::Free(lVar2,puVar1);
    }
    param_1[0xe] = 0;
  }
  if ((void *)param_1[0xd] != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[0xd]);
  }
  lVar2 = g_DefaultPoolId;
  pvVar5 = (void *)param_1[0xb];
  if (pvVar5 != (void *)0x0) {
    CAkSIS::~CAkSIS(pvVar5);
    AK::MemoryMgr::Free(lVar2,pvVar5);
  }
  if (param_1[0xf] != 0) {
    FUN_143174500(param_1);
  }
  FUN_1431ac010(param_1 + 6);
  if ((void *)param_1[0x13] != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[0x13]);
  }
  param_1[0x13] = 0;
  CAkRTPCSubscriberNode::~CAkRTPCSubscriberNode(param_1 + 9);
  CAkRTPCSubscriberNode::~CAkRTPCSubscriberNode(param_1 + 6);
  CAkParamNodeStateAware::~CAkParamNodeStateAware(param_1 + 3);
  CAkPBIAware::~CAkPBIAware(param_1);
  return;
}



// FUNCTION 143173760 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
CAk3DAutomationParamsEx::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~CAk3DAutomationParamsEx();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1431737a0 FUN_1431737a0 body=52 status=ok
// SIG undefined FUN_1431737a0(void)

undefined8 FUN_1431737a0(undefined8 param_1,ulonglong param_2)

{
  FUN_143173560();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 1431737e0 Add body=123 status=ok
// SIG undefined Add(void)

undefined8 CAkLimiter::Add(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = *(undefined8 *)(param_2 + 0x2a0);
  local_10 = *(undefined4 *)(param_2 + 0x2a8);
  iVar1 = *(int *)(param_1 + 8);
  plVar2 = (longlong *)FUN_143173960(local_18,&local_18);
  if (plVar2 == (longlong *)0x0) {
    uVar3 = 2;
  }
  else {
    if (iVar1 == 0) {
      CAkURenderer::AddLimiter(param_1);
    }
    *plVar2 = param_2;
    uVar3 = 1;
    *(short *)(param_1 + 0x28) = *(short *)(param_1 + 0x28) + 1;
  }
  return uVar3;
}



// FUNCTION 143173860 AddChildByPtr body=48 status=ok
// SIG undefined AddChildByPtr(void)

void CAkParameterNodeBase::AddChildByPtr(longlong *param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 8))(param_2);
                    /* WARNING: Could not recover jumptable at 0x00014317388c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1,param_2);
  return;
}



// FUNCTION 143173890 FUN_143173890 body=197 status=ok
// SIG undefined FUN_143173890(void)

undefined8 * FUN_143173890(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  void *pvVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 < *(uint *)((longlong)param_1 + 0xc)) {
LAB_143173920:
    uVar2 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar2 + 1;
    puVar5 = (undefined8 *)(*param_1 + (ulonglong)uVar2 * 8);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = param_2;
    }
  }
  else {
    uVar1 = *(uint *)((longlong)param_1 + 0xc) + 3;
    pvVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 3);
    if (pvVar4 != (void *)0x0) {
      pvVar6 = (void *)*param_1;
      if ((pvVar6 != (void *)0x0) && (pvVar6 != pvVar4)) {
        uVar3 = *(uint *)(param_1 + 1);
        uVar7 = 0;
        if ((ulonglong)uVar3 != 0) {
          do {
            *(undefined8 *)((longlong)pvVar4 + uVar7 * 8) = *(undefined8 *)(*param_1 + uVar7 * 8);
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar3);
          pvVar6 = (void *)*param_1;
        }
        AK::MemoryMgr::Free(g_DefaultPoolId,pvVar6);
      }
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = uVar1;
      if (uVar2 < uVar1) goto LAB_143173920;
    }
    puVar5 = (undefined8 *)0x0;
  }
  return puVar5;
}



// FUNCTION 143173960 FUN_143173960 body=266 status=ok
// SIG undefined FUN_143173960(void)

longlong FUN_143173960(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 local_res10 [8];
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = *param_2;
  local_10 = *(undefined4 *)(param_2 + 1);
  lVar5 = FUN_143173e70(local_18,&local_18,local_res10);
  uVar2 = *(uint *)(param_1 + 1);
  if (lVar5 == 0) {
    if ((*(uint *)((longlong)param_1 + 0xc) <= uVar2) &&
       (cVar4 = FUN_143134440(param_1,8), cVar4 == '\0')) {
      return 0;
    }
    if (uVar2 < *(uint *)((longlong)param_1 + 0xc)) {
      uVar2 = *(uint *)(param_1 + 1);
      *(uint *)(param_1 + 1) = uVar2 + 1;
      return *param_1 + (ulonglong)uVar2 * 8;
    }
  }
  else {
    lVar3 = *param_1;
    if ((*(uint *)((longlong)param_1 + 0xc) <= uVar2) &&
       (cVar4 = FUN_143134440(param_1,8), cVar4 == '\0')) {
      return 0;
    }
    if (uVar2 < *(uint *)((longlong)param_1 + 0xc)) {
      uVar2 = *(uint *)(param_1 + 1);
      lVar7 = *param_1;
      *(uint *)(param_1 + 1) = uVar2 + 1;
      puVar6 = (undefined8 *)(lVar7 + (ulonglong)uVar2 * 8);
      lVar5 = (lVar5 - lVar3 >> 3 & 0xffffffffU) * 8;
      if ((undefined8 *)(lVar5 + lVar7) < puVar6) {
        do {
          puVar1 = puVar6 + -1;
          *puVar6 = puVar6[-1];
          lVar7 = *param_1;
          puVar6 = puVar1;
        } while ((undefined8 *)(lVar7 + lVar5) < puVar1);
      }
      return lVar5 + lVar7;
    }
  }
  return 0;
}



// FUNCTION 143173a70 AddRef body=87 status=ok
// SIG undefined AddRef(void)

int CAkParameterNodeBase::AddRef(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  
  lpCriticalSection =
       (LPCRITICAL_SECTION)
       CAkAudioLibIndex::GetNodeIndex(DAT_146b50af8,*(byte *)(param_1 + 0xa8) >> 7);
  EnterCriticalSection(lpCriticalSection);
  iVar1 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar1;
  LeaveCriticalSection(lpCriticalSection);
  return iVar1;
}



// FUNCTION 143173ad0 FUN_143173ad0 body=314 status=ok
// SIG undefined FUN_143173ad0(void)

void FUN_143173ad0(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar7 = 0;
  if (uVar1 != 0) {
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 8) + 8 + uVar7 * 0x10) == param_2) {
        *(undefined8 *)(*(longlong *)(param_1 + 8) + uVar7 * 0x10) = param_3;
        return;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < uVar1);
  }
  if (*(uint *)(param_1 + 0x14) <= uVar1) {
    uVar6 = *(uint *)(param_1 + 0x14) + 1;
    puVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar6 << 4);
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    puVar5 = *(undefined8 **)(param_1 + 8);
    if ((puVar5 != (undefined8 *)0x0) && (puVar5 != puVar2)) {
      uVar7 = (ulonglong)*(uint *)(param_1 + 0x10);
      puVar4 = puVar2;
      if (uVar7 != 0) {
        do {
          if (puVar4 != (undefined8 *)0x0) {
            *puVar4 = 0;
            puVar4[1] = 0;
          }
          lVar3 = *(longlong *)(param_1 + 8) - (longlong)puVar2;
          *puVar4 = *(undefined8 *)(lVar3 + (longlong)puVar4);
          puVar4[1] = *(undefined8 *)(lVar3 + 8 + (longlong)puVar4);
          uVar7 = uVar7 - 1;
          puVar4 = puVar4 + 2;
        } while (uVar7 != 0);
        puVar5 = *(undefined8 **)(param_1 + 8);
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar5);
    }
    *(undefined8 **)(param_1 + 8) = puVar2;
    *(uint *)(param_1 + 0x14) = uVar6;
    if (uVar6 <= uVar1) {
      return;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = uVar1 + 1;
  puVar2 = (undefined8 *)((ulonglong)uVar1 * 0x10 + *(longlong *)(param_1 + 8));
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = param_3;
    puVar2[1] = param_2;
  }
  return;
}



// FUNCTION 143173c10 FUN_143173c10 body=241 status=ok
// SIG undefined FUN_143173c10(void)

void FUN_143173c10(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *local_res8;
  longlong local_68;
  int local_60;
  int local_58;
  char local_50;
  char local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  
  FUN_1431aafe0(&local_68,param_3,param_2);
  FUN_1431ab4d0(param_1 + 0x10,&local_res8,local_30);
  plVar3 = (longlong *)((ulonglong)*(uint *)(param_1 + 0x18) * 0x40 + *(longlong *)(param_1 + 0x10))
  ;
  if (local_res8 != plVar3) {
    plVar2 = local_res8 + 4;
    do {
      if ((((*local_res8 != local_68) || ((int)plVar2[-3] != local_60)) ||
          ((int)plVar2[-2] != local_58)) ||
         ((((char)plVar2[-1] != local_50 || ((char)*plVar2 != local_48)) || (plVar2[1] != local_40))
         )) break;
      if (plVar2[3] == local_30) {
        local_res8[6] = local_38;
        return;
      }
      local_res8 = local_res8 + 8;
      plVar2 = plVar2 + 8;
    } while (local_res8 != plVar3);
  }
  cVar1 = FUN_143176980(param_1 + 0x10,&local_68);
  if (cVar1 != '\0') {
    *(ulonglong *)(param_1 + 8) = *(ulonglong *)(param_1 + 8) & param_3;
  }
  return;
}



// FUNCTION 143173d10 AddToIndex body=121 status=ok
// SIG undefined AddToIndex(void)

void CAkParameterNodeBase::AddToIndex(longlong param_1)

{
  ulonglong uVar1;
  char cVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)CAkAudioLibIndex::GetNodeIndex(DAT_146b50af8);
  EnterCriticalSection(lpCriticalSection);
  cVar2 = FUN_14313b140(lpCriticalSection + 1);
  if (cVar2 != '\0') {
    uVar1 = (ulonglong)*(uint *)(param_1 + 0x10) % (ulonglong)(uint)lpCriticalSection[1].LockCount;
    *(undefined8 *)(param_1 + 8) =
         *(undefined8 *)(&(lpCriticalSection[1].DebugInfo)->Type + uVar1 * 4);
    *(longlong *)(&(lpCriticalSection[1].DebugInfo)->Type + uVar1 * 4) = param_1;
    *(int *)&lpCriticalSection[1].OwningThread = *(int *)&lpCriticalSection[1].OwningThread + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000143173d82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 143173d90 FUN_143173d90 body=43 status=ok
// SIG undefined FUN_143173d90(void)

void FUN_143173d90(longlong param_1)

{
  byte *pbVar1;
  
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x78) + 0x58) & 2) == 0)) {
    CAkURenderer::AddToActiveNodes();
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x78) + 0x58);
    *pbVar1 = *pbVar1 | 2;
  }
  return;
}



// FUNCTION 143173dc0 FUN_143173dc0 body=175 status=ok
// SIG undefined FUN_143173dc0(void)

void FUN_143173dc0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 local_res8;
  
  if ((param_1[0xf] != 0) && (param_1[0x11] != *param_2)) {
    (**(code **)(*param_1 + 0xe8))();
    DAT_146b50f50 = 1;
    lVar1 = param_1[0xf];
    if (lVar1 == 0) {
      uVar3 = 0;
      uVar4 = 0;
    }
    else {
      uVar3 = *(undefined2 *)(lVar1 + 0x52);
      uVar4 = *(undefined2 *)(lVar1 + 0x56);
    }
    local_res8 = CONCAT22(uVar3,uVar4);
    FUN_143174430(param_1,local_res8);
    if (*param_2 == 0) {
      if (param_1[0x10] != 0) {
        FUN_143176870(param_1[0x10],local_res8);
      }
    }
    else {
      cVar2 = CAkParameterNodeBase::IncrementAllCountBus(param_1,*param_2,local_res8);
      if (cVar2 == '\0') {
        *param_2 = 0;
        return;
      }
    }
  }
  return;
}



// FUNCTION 143173e70 FUN_143173e70 body=306 status=ok
// SIG undefined FUN_143173e70(void)

ulonglong FUN_143173e70(longlong *param_1,float *param_2,undefined1 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  
  uVar6 = 0;
  iVar7 = (int)param_1[1] + -1;
  iVar9 = 0;
  if (-1 < iVar7) {
    fVar1 = *param_2;
    uVar8 = uVar6;
    do {
      iVar9 = (int)uVar8 + (iVar7 - (int)uVar8) / 2;
      lVar5 = *(longlong *)(*param_1 + (longlong)iVar9 * 8);
      fVar2 = *(float *)(lVar5 + 0x2a0);
      if (fVar1 == fVar2) {
        fVar3 = param_2[2];
        fVar4 = *(float *)(lVar5 + 0x2a8);
        if (*(char *)((longlong)param_1 + 0x12) == '\0') {
          bVar11 = (uint)fVar3 < (uint)fVar4;
          bVar10 = false;
          if (fVar3 == fVar4) {
            bVar11 = (uint)param_2[1] < (uint)*(float *)(lVar5 + 0x2a4);
            bVar10 = param_2[1] == *(float *)(lVar5 + 0x2a4);
          }
          goto LAB_143173f0b;
        }
        bVar10 = (uint)fVar3 < (uint)fVar4;
        if (fVar3 == fVar4) {
          bVar10 = (uint)param_2[1] < (uint)*(float *)(lVar5 + 0x2a4);
        }
      }
      else {
        bVar10 = fVar1 == fVar2;
        bVar11 = fVar1 < fVar2;
LAB_143173f0b:
        bVar10 = !bVar11 && !bVar10;
      }
      if (bVar10) {
        iVar7 = iVar9 + -1;
      }
      else {
        if (fVar1 == fVar2) {
          fVar2 = param_2[2];
          fVar3 = *(float *)(lVar5 + 0x2a8);
          if (*(char *)((longlong)param_1 + 0x12) != '\0') {
            bVar11 = (uint)fVar2 < (uint)fVar3;
            bVar10 = false;
            if (fVar2 == fVar3) {
              bVar11 = (uint)param_2[1] < (uint)*(float *)(lVar5 + 0x2a4);
              bVar10 = param_2[1] == *(float *)(lVar5 + 0x2a4);
            }
            goto LAB_143173f53;
          }
          bVar10 = (uint)fVar2 < (uint)fVar3;
          if (fVar2 == fVar3) {
            bVar10 = (uint)param_2[1] < (uint)*(float *)(lVar5 + 0x2a4);
          }
        }
        else {
          bVar10 = fVar2 == fVar1;
          bVar11 = fVar2 < fVar1;
LAB_143173f53:
          bVar10 = !bVar11 && !bVar10;
        }
        if (!bVar10) {
          *param_3 = 1;
          return *param_1 + (longlong)iVar9 * 8;
        }
        uVar8 = (ulonglong)(iVar9 + 1);
      }
      iVar9 = (int)uVar8;
    } while (iVar9 <= iVar7);
  }
  *param_3 = 0;
  if (*param_1 != 0) {
    uVar6 = *param_1 + (longlong)iVar9 * 8;
  }
  return uVar6;
}



// FUNCTION 143173fb0 FUN_143173fb0 body=406 status=ok
// SIG undefined FUN_143173fb0(void)

void FUN_143173fb0(longlong *param_1,undefined4 param_2,uint param_3,longlong param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  
  lVar4 = (**(code **)(*param_1 + 0x220))(param_1,param_4);
  if (lVar4 != 0) {
    *(byte *)(lVar4 + 0x20) =
         ~(byte)param_3 & *(byte *)(lVar4 + 0x20) | (byte)param_3 & (byte)param_2;
  }
  iVar3 = (**(code **)(*param_1 + 0x80))(param_1);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x80))(param_1);
  }
  if (param_4 == 0) {
    (**(code **)(*param_1 + 0x1c0))(param_1,param_2,param_3);
  }
  iVar3 = (**(code **)(*param_1 + 0x80))(param_1);
  plVar5 = param_1;
  if ((iVar3 != 0) && (iVar3 = (**(code **)(*param_1 + 0x80))(param_1), iVar3 != 10)) {
    plVar1 = param_1 + 0x10;
    lVar4 = *plVar1;
    while ((lVar4 != 0 && ((*(uint *)(plVar5 + 0x14) & 0x1f000) == 0))) {
      plVar5 = (longlong *)*plVar1;
      plVar1 = plVar5 + 0x10;
      lVar4 = *plVar1;
    }
  }
  uVar7 = 1;
  uVar6 = 0x1d;
  lVar4 = 4;
  do {
    if ((((ulonglong *)plVar5[7] != (ulonglong *)0x0) &&
        ((*(ulonglong *)plVar5[7] >> ((ulonglong)(uVar6 & 0xff) & 0x3f) & 1) != 0)) ||
       (cVar2 = (**(code **)(plVar5[3] + 0x18))(plVar5 + 3,uVar6), cVar2 != '\0')) {
      param_3 = param_3 & ~uVar7;
    }
    uVar6 = uVar6 + 1;
    uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  if ((((ulonglong *)plVar5[7] != (ulonglong *)0x0) &&
      ((*(ulonglong *)plVar5[7] & 0x200000000) != 0)) ||
     (cVar2 = (**(code **)(plVar5[3] + 0x18))(plVar5 + 3,0x21), cVar2 != '\0')) {
    param_3 = param_3 & 0xffffffef;
  }
                    /* WARNING: Could not recover jumptable at 0x00014317413f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf8))(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 143174150 FUN_143174150 body=55 status=ok
// SIG undefined FUN_143174150(void)

void FUN_143174150(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  if (((((lVar1 != 0) && (*(short *)(lVar1 + 0x50) < 1)) && (*(short *)(lVar1 + 0x54) < 1)) &&
      ((*(short *)(lVar1 + 0x48) == 0 && (*(short *)(lVar1 + 0x4a) == 0)))) &&
     ((*(longlong *)(lVar1 + 0x18) == 0 && (*(int *)(lVar1 + 8) == 0)))) {
    if ((*(byte *)(*(longlong *)(param_1 + 0x78) + 0x58) & 2) != 0) {
      CAkURenderer::RemoveFromActiveNodes();
    }
    FUN_143178160(param_1);
    plVar2 = *(longlong **)(param_1 + 0x78);
    plVar4 = (longlong *)0x0;
    if ((void *)plVar2[4] != (void *)0x0) {
      *(undefined4 *)(plVar2 + 5) = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,(void *)plVar2[4]);
      plVar2[4] = 0;
      *(undefined4 *)((longlong)plVar2 + 0x2c) = 0;
    }
    plVar2[3] = 0;
    plVar3 = DAT_146b51f38;
    if ((void *)*plVar2 != (void *)0x0) {
      *(undefined4 *)(plVar2 + 1) = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*plVar2);
      *plVar2 = 0;
      *(undefined4 *)((longlong)plVar2 + 0xc) = 0;
      plVar3 = DAT_146b51f38;
    }
    for (; (plVar3 != (longlong *)0x0 && ((plVar2 < plVar3 || (plVar3 + 0x600 <= plVar2))));
        plVar3 = (longlong *)plVar3[0x600]) {
      plVar4 = plVar3;
    }
    if (plVar3[0x602] == 0) {
      plVar3[0x602] = (longlong)plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = plVar3[0x602];
      plVar3[0x602] = (longlong)plVar2;
    }
    *(int *)(plVar3 + 0x601) = (int)plVar3[0x601] + 1;
    if ((int)plVar3[0x601] == 0x80) {
      plVar2 = (longlong *)plVar3[0x600];
      if (plVar3 != DAT_146b51f38) {
        plVar4[0x600] = plVar3[0x600];
        plVar2 = DAT_146b51f38;
      }
      DAT_146b51f38 = plVar2;
      AK::MemoryMgr::Free(g_DefaultPoolId,plVar3);
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
    return;
  }
  return;
}



// FUNCTION 143174190 FUN_143174190 body=182 status=ok
// SIG undefined FUN_143174190(void)

void FUN_143174190(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar2 = (longlong *)**(longlong **)(param_1 + 0x78);
  plVar4 = plVar2 + (ulonglong)*(uint *)(*(longlong **)(param_1 + 0x78) + 1) * 2;
  for (; (plVar2 != plVar4 && (*plVar2 != param_2)); plVar2 = plVar2 + 2) {
  }
  plVar3 = plVar2 + 1;
  if (plVar2 == plVar4) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 != (longlong *)0x0) {
    lVar1 = *plVar3;
    if ((lVar1 == 0) ||
       ((*(short *)(lVar1 + 0x28) == 0 && ((lVar1 == 0 || (*(short *)(lVar1 + 0x2a) == 0)))))) {
      FUN_143174620();
      FUN_143179e50(*(undefined8 *)(param_1 + 0x78),param_2);
    }
    lVar1 = *(longlong *)(param_1 + 0x78);
    if ((((lVar1 != 0) && (*(short *)(lVar1 + 0x50) < 1)) && (*(short *)(lVar1 + 0x54) < 1)) &&
       (((*(short *)(lVar1 + 0x48) == 0 && (*(short *)(lVar1 + 0x4a) == 0)) &&
        ((*(longlong *)(lVar1 + 0x18) == 0 && (*(int *)(lVar1 + 8) == 0)))))) {
      FUN_143174500(param_1);
    }
  }
  return;
}



// FUNCTION 143174250 ClearLimitersAndMakeDirty body=32 status=ok
// SIG undefined ClearLimitersAndMakeDirty(void)

void CAkParameterNodeBase::ClearLimitersAndMakeDirty(longlong *param_1)

{
  if (param_1[0xf] != 0) {
    (**(code **)(*param_1 + 0xe8))();
    DAT_146b50f50 = 1;
  }
  return;
}



// FUNCTION 143174270 FUN_143174270 body=164 status=ok
// SIG undefined FUN_143174270(void)

void FUN_143174270(longlong param_1,ushort param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  if (lVar1 != 0) {
    *(short *)(lVar1 + 0x54) = *(short *)(lVar1 + 0x54) + -1;
    if ((param_2 & 1) != 0) {
      *(short *)(lVar1 + 0x56) = *(short *)(lVar1 + 0x56) + -1;
    }
    lVar1 = *(longlong *)(param_1 + 0x78);
    if (((((*(short *)(lVar1 + 0x50) < 1) && (*(short *)(lVar1 + 0x54) < 1)) &&
         (*(short *)(lVar1 + 0x48) == 0)) &&
        ((*(short *)(lVar1 + 0x4a) == 0 && (*(longlong *)(lVar1 + 0x18) == 0)))) &&
       (*(int *)(lVar1 + 8) == 0)) {
      FUN_143174500();
    }
  }
  if (((param_2 & 1) != 0) && (plVar2 = *(longlong **)(param_1 + 0x88), plVar2 != (longlong *)0x0))
  {
    param_2 = param_2 & 0xfffe;
    (**(code **)(*plVar2 + 0x130))(plVar2,1);
  }
  plVar2 = *(longlong **)(param_1 + 0x80);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x130))(plVar2,param_2);
  }
  return;
}



// FUNCTION 143174320 FUN_143174320 body=71 status=ok
// SIG undefined FUN_143174320(void)

void FUN_143174320(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  if (lVar1 != 0) {
    *(short *)(lVar1 + 0x54) = *(short *)(lVar1 + 0x54) + -1;
    if (param_2 != '\0') {
      *(short *)(lVar1 + 0x56) = *(short *)(lVar1 + 0x56) + -1;
    }
    lVar1 = *(longlong *)(param_1 + 0x78);
    if (((((*(short *)(lVar1 + 0x50) < 1) && (*(short *)(lVar1 + 0x54) < 1)) &&
         (*(short *)(lVar1 + 0x48) == 0)) &&
        ((*(short *)(lVar1 + 0x4a) == 0 && (*(longlong *)(lVar1 + 0x18) == 0)))) &&
       (*(int *)(lVar1 + 8) == 0)) {
      if ((*(byte *)(*(longlong *)(param_1 + 0x78) + 0x58) & 2) != 0) {
        CAkURenderer::RemoveFromActiveNodes();
      }
      FUN_143178160(param_1);
      plVar2 = *(longlong **)(param_1 + 0x78);
      plVar4 = (longlong *)0x0;
      if ((void *)plVar2[4] != (void *)0x0) {
        *(undefined4 *)(plVar2 + 5) = 0;
        AK::MemoryMgr::Free(g_DefaultPoolId,(void *)plVar2[4]);
        plVar2[4] = 0;
        *(undefined4 *)((longlong)plVar2 + 0x2c) = 0;
      }
      plVar2[3] = 0;
      plVar3 = DAT_146b51f38;
      if ((void *)*plVar2 != (void *)0x0) {
        *(undefined4 *)(plVar2 + 1) = 0;
        AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*plVar2);
        *plVar2 = 0;
        *(undefined4 *)((longlong)plVar2 + 0xc) = 0;
        plVar3 = DAT_146b51f38;
      }
      for (; (plVar3 != (longlong *)0x0 && ((plVar2 < plVar3 || (plVar3 + 0x600 <= plVar2))));
          plVar3 = (longlong *)plVar3[0x600]) {
        plVar4 = plVar3;
      }
      if (plVar3[0x602] == 0) {
        plVar3[0x602] = (longlong)plVar2;
        *plVar2 = 0;
      }
      else {
        *plVar2 = plVar3[0x602];
        plVar3[0x602] = (longlong)plVar2;
      }
      *(int *)(plVar3 + 0x601) = (int)plVar3[0x601] + 1;
      if ((int)plVar3[0x601] == 0x80) {
        plVar2 = (longlong *)plVar3[0x600];
        if (plVar3 != DAT_146b51f38) {
          plVar4[0x600] = plVar3[0x600];
          plVar2 = DAT_146b51f38;
        }
        DAT_146b51f38 = plVar2;
        AK::MemoryMgr::Free(g_DefaultPoolId,plVar3);
      }
      *(undefined8 *)(param_1 + 0x78) = 0;
      return;
    }
  }
  return;
}



// FUNCTION 143174370 DecrementAllCountBus body=192 status=ok
// SIG undefined DecrementAllCountBus(void)

void CAkParameterNodeBase::DecrementAllCountBus
               (undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  ushort uVar1;
  uint uVar2;
  short sStackX_1a;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 local_1b;
  
  if (param_2 != (longlong *)0x0) {
    uVar2 = 0;
    uVar1 = 0;
    if (0 < (short)param_3) {
      do {
        (**(code **)(*param_2 + 0x130))(param_2,1);
        uVar1 = uVar1 + 1;
      } while ((int)(uint)uVar1 < (int)(short)param_3);
    }
    sStackX_1a = (short)((uint)param_3 >> 0x10);
    local_20 = 1;
    local_1b = 1;
    local_38[0] = 0;
    local_30 = 0;
    uStack_28 = 0;
    if (0 < sStackX_1a) {
      do {
        local_1c = 0;
        (**(code **)(*param_2 + 0x120))(param_2,local_38);
        uVar2 = (uint)(ushort)((short)uVar2 + 1);
      } while ((int)uVar2 < (int)sStackX_1a);
    }
  }
  return;
}



// FUNCTION 143174430 FUN_143174430 body=115 status=ok
// SIG undefined FUN_143174430(void)

void FUN_143174430(longlong param_1,undefined4 param_2)

{
  short *psVar1;
  longlong *plVar2;
  undefined2 uStackX_12;
  
  if (*(longlong *)(param_1 + 0x88) == 0) {
    uStackX_12 = (short)((uint)param_2 >> 0x10);
    do {
      plVar2 = (longlong *)(param_1 + 0x80);
      param_1 = *plVar2;
      if (param_1 == 0) {
        return;
      }
      if (*(longlong *)(param_1 + 0x78) != 0) {
        psVar1 = (short *)(*(longlong *)(param_1 + 0x78) + 0x56);
        *psVar1 = *psVar1 - (short)param_2;
        param_1 = *plVar2;
      }
      if (*(longlong *)(param_1 + 0x78) != 0) {
        psVar1 = (short *)(*(longlong *)(param_1 + 0x78) + 0x52);
        *psVar1 = *psVar1 - uStackX_12;
        param_1 = *plVar2;
      }
    } while (*(longlong *)(param_1 + 0x88) == 0);
  }
  CAkParameterNodeBase::DecrementAllCountBus(param_1,*(undefined8 *)(param_1 + 0x88),param_2);
  return;
}



// FUNCTION 1431744b0 FUN_1431744b0 body=71 status=ok
// SIG undefined FUN_1431744b0(void)

void FUN_1431744b0(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  if (lVar1 != 0) {
    *(short *)(lVar1 + 0x50) = *(short *)(lVar1 + 0x50) + -1;
    if (param_2 != '\0') {
      *(short *)(lVar1 + 0x52) = *(short *)(lVar1 + 0x52) + -1;
    }
    lVar1 = *(longlong *)(param_1 + 0x78);
    if (((((*(short *)(lVar1 + 0x50) < 1) && (*(short *)(lVar1 + 0x54) < 1)) &&
         (*(short *)(lVar1 + 0x48) == 0)) &&
        ((*(short *)(lVar1 + 0x4a) == 0 && (*(longlong *)(lVar1 + 0x18) == 0)))) &&
       (*(int *)(lVar1 + 8) == 0)) {
      if ((*(byte *)(*(longlong *)(param_1 + 0x78) + 0x58) & 2) != 0) {
        CAkURenderer::RemoveFromActiveNodes();
      }
      FUN_143178160(param_1);
      plVar2 = *(longlong **)(param_1 + 0x78);
      plVar4 = (longlong *)0x0;
      if ((void *)plVar2[4] != (void *)0x0) {
        *(undefined4 *)(plVar2 + 5) = 0;
        AK::MemoryMgr::Free(g_DefaultPoolId,(void *)plVar2[4]);
        plVar2[4] = 0;
        *(undefined4 *)((longlong)plVar2 + 0x2c) = 0;
      }
      plVar2[3] = 0;
      plVar3 = DAT_146b51f38;
      if ((void *)*plVar2 != (void *)0x0) {
        *(undefined4 *)(plVar2 + 1) = 0;
        AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*plVar2);
        *plVar2 = 0;
        *(undefined4 *)((longlong)plVar2 + 0xc) = 0;
        plVar3 = DAT_146b51f38;
      }
      for (; (plVar3 != (longlong *)0x0 && ((plVar2 < plVar3 || (plVar3 + 0x600 <= plVar2))));
          plVar3 = (longlong *)plVar3[0x600]) {
        plVar4 = plVar3;
      }
      if (plVar3[0x602] == 0) {
        plVar3[0x602] = (longlong)plVar2;
        *plVar2 = 0;
      }
      else {
        *plVar2 = plVar3[0x602];
        plVar3[0x602] = (longlong)plVar2;
      }
      *(int *)(plVar3 + 0x601) = (int)plVar3[0x601] + 1;
      if ((int)plVar3[0x601] == 0x80) {
        plVar2 = (longlong *)plVar3[0x600];
        if (plVar3 != DAT_146b51f38) {
          plVar4[0x600] = plVar3[0x600];
          plVar2 = DAT_146b51f38;
        }
        DAT_146b51f38 = plVar2;
        AK::MemoryMgr::Free(g_DefaultPoolId,plVar3);
      }
      *(undefined8 *)(param_1 + 0x78) = 0;
      return;
    }
  }
  return;
}



// FUNCTION 143174500 FUN_143174500 body=275 status=ok
// SIG undefined FUN_143174500(void)

void FUN_143174500(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if ((*(byte *)(*(longlong *)(param_1 + 0x78) + 0x58) & 2) != 0) {
    CAkURenderer::RemoveFromActiveNodes();
  }
  FUN_143178160(param_1);
  plVar1 = *(longlong **)(param_1 + 0x78);
  plVar3 = (longlong *)0x0;
  if ((void *)plVar1[4] != (void *)0x0) {
    *(undefined4 *)(plVar1 + 5) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)plVar1[4]);
    plVar1[4] = 0;
    *(undefined4 *)((longlong)plVar1 + 0x2c) = 0;
  }
  plVar1[3] = 0;
  plVar2 = DAT_146b51f38;
  if ((void *)*plVar1 != (void *)0x0) {
    *(undefined4 *)(plVar1 + 1) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*plVar1);
    *plVar1 = 0;
    *(undefined4 *)((longlong)plVar1 + 0xc) = 0;
    plVar2 = DAT_146b51f38;
  }
  for (; (plVar2 != (longlong *)0x0 && ((plVar1 < plVar2 || (plVar2 + 0x600 <= plVar1))));
      plVar2 = (longlong *)plVar2[0x600]) {
    plVar3 = plVar2;
  }
  if (plVar2[0x602] == 0) {
    plVar2[0x602] = (longlong)plVar1;
    *plVar1 = 0;
  }
  else {
    *plVar1 = plVar2[0x602];
    plVar2[0x602] = (longlong)plVar1;
  }
  *(int *)(plVar2 + 0x601) = (int)plVar2[0x601] + 1;
  if ((int)plVar2[0x601] == 0x80) {
    plVar1 = (longlong *)plVar2[0x600];
    if (plVar2 != DAT_146b51f38) {
      plVar3[0x600] = plVar2[0x600];
      plVar1 = DAT_146b51f38;
    }
    DAT_146b51f38 = plVar1;
    AK::MemoryMgr::Free(g_DefaultPoolId,plVar2);
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  return;
}



// FUNCTION 143174620 FUN_143174620 body=97 status=ok
// SIG undefined FUN_143174620(void)

void FUN_143174620(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    if ((void *)*puVar1 != (void *)0x0) {
      *(undefined4 *)(puVar1 + 1) = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*puVar1);
      *puVar1 = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      puVar1 = (undefined8 *)*param_1;
    }
    if (puVar1 != (undefined8 *)0x0) {
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar1);
    }
    *param_1 = 0;
  }
  return;
}



// FUNCTION 143174690 FUN_143174690 body=475 status=ok
// SIG undefined FUN_143174690(void)

undefined8 * FUN_143174690(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  if (*(longlong *)(param_1 + 0x78) != 0) {
    return (undefined8 *)0x1;
  }
  puVar9 = (undefined8 *)0x0;
  for (pvVar6 = DAT_146b51f38; pvVar6 != (void *)0x0; pvVar6 = *(void **)((longlong)pvVar6 + 0x3000)
      ) {
    if (*(longlong *)((longlong)pvVar6 + 0x3010) != 0) goto LAB_143174728;
  }
  pvVar6 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x3018);
  puVar8 = puVar9;
  if (pvVar6 != (void *)0x0) {
    FUN_1431731b0(pvVar6);
    if (DAT_146b51f38 == (void *)0x0) {
      DAT_146b51f38 = pvVar6;
      *(undefined8 *)((longlong)pvVar6 + 0x3000) = 0;
    }
    else {
      *(void **)((longlong)pvVar6 + 0x3000) = DAT_146b51f38;
      DAT_146b51f38 = pvVar6;
    }
LAB_143174728:
    puVar8 = *(undefined8 **)((longlong)pvVar6 + 0x3010);
    if (puVar8 != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)*puVar8;
      if ((undefined8 *)*puVar8 == (undefined8 *)0x0) {
        puVar7 = puVar9;
      }
      *(undefined8 **)((longlong)pvVar6 + 0x3010) = puVar7;
      *(int *)((longlong)pvVar6 + 0x3008) = *(int *)((longlong)pvVar6 + 0x3008) + -1;
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[3] = 0;
        puVar8[4] = 0;
        puVar8[5] = 0;
        *(undefined4 *)(puVar8 + 6) = 0;
        *(undefined4 *)(puVar8 + 9) = 0;
        puVar8[10] = 0;
        *(byte *)(puVar8 + 0xb) = *(byte *)(puVar8 + 0xb) & 0xfd | 1;
      }
    }
  }
  *(undefined8 **)(param_1 + 0x78) = puVar8;
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0xa8);
    uVar4 = CAkParameterNodeBase::GetMaxNumInstances(param_1,0);
    lVar2 = *(longlong *)(param_1 + 0x78);
    *(undefined2 *)(lVar2 + 0x30) = uVar4;
    *(byte *)(lVar2 + 0x32) = bVar1 & 1;
    *(byte *)(lVar2 + 0x33) = bVar1 >> 1 & 1;
    cVar3 = *(char *)(param_1 + 0xa8);
    puVar8 = puVar9;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      iVar5 = CAkParameterNodeBase::GetDepth();
      puVar8 = (undefined8 *)(ulonglong)(iVar5 + 1);
    }
    *(ulonglong *)(lVar2 + 0x40) =
         ((longlong)(((int)cVar3 >> 7) + 2) << 0x1d | (ulonglong)puVar8) << 0x20 |
         (ulonglong)*(uint *)(param_1 + 0x10);
    *(undefined8 *)(lVar2 + 0x50) = 0;
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | bVar1 >> 4 & 1;
    puVar8 = (undefined8 *)0x1;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      cVar3 = FUN_143174690();
      puVar8 = (undefined8 *)0x1;
      if (cVar3 == '\0') {
        puVar8 = puVar9;
      }
    }
    if ((*(longlong *)(param_1 + 0x80) != 0) && (cVar3 = FUN_143174690(), cVar3 == '\0')) {
      puVar8 = puVar9;
    }
  }
  return puVar8;
}



// FUNCTION 143174870 FUN_143174870 body=149 status=ok
// SIG undefined FUN_143174870(void)

undefined8 FUN_143174870(longlong param_1)

{
  undefined8 *_Dst;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    return 1;
  }
  *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | 0xffe;
  _Dst = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x50);
  if (_Dst != (undefined8 *)0x0) {
    _guard_xfg_dispatch_icall_nop(_Dst,0,0x50);
    CAk3DAutomationParams::CAk3DAutomationParams(_Dst);
    *_Dst = &PTR__scalar_deleting_destructor__145acaa60;
    *(undefined4 *)(_Dst + 8) = 0;
    _Dst[9] = 0;
    *(undefined4 *)(_Dst + 1) = *(undefined4 *)(param_1 + 0x10);
    *(undefined8 **)(param_1 + 0x70) = _Dst;
    return 1;
  }
  return 0x34;
}



// FUNCTION 143174960 FUN_143174960 body=14 status=ok
// SIG undefined FUN_143174960(void)

void FUN_143174960(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  if (lVar1 == 0) {
    return;
  }
  if (*(longlong *)(lVar1 + 0x48) != 0) {
    AkSharedPathState::Release();
  }
  *(undefined8 *)(lVar1 + 0x48) = 0;
  return;
}



// FUNCTION 143174970 Get2DParams body=524 status=ok
// SIG undefined Get2DParams(void)

void CAkParameterNodeBase::Get2DParams(longlong param_1,undefined8 param_2,float *param_3)

{
  byte *pbVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  uint *puVar5;
  float *pfVar6;
  float fVar7;
  float local_res8 [2];
  
  pbVar1 = *(byte **)(param_1 + 0x98);
  pfVar6 = (float *)0x0;
  local_res8[0] = 0.0;
  pfVar3 = pfVar6;
  if (pbVar1 != (byte *)0x0) {
    pfVar2 = pfVar6;
    do {
      uVar4 = (int)pfVar2 + 1;
      if (pbVar1[uVar4] == 0xc) {
        pfVar3 = (float *)(pbVar1 + (longlong)pfVar2 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
        break;
      }
      pfVar2 = (float *)(ulonglong)uVar4;
    } while (uVar4 < *pbVar1);
  }
  pfVar2 = local_res8;
  if (pfVar3 != (float *)0x0) {
    pfVar2 = pfVar3;
  }
  *param_3 = *pfVar2;
  pbVar1 = *(byte **)(param_1 + 0x98);
  local_res8[0] = 0.0;
  pfVar3 = pfVar6;
  if (pbVar1 != (byte *)0x0) {
    pfVar2 = pfVar6;
    do {
      uVar4 = (int)pfVar2 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar4 + (longlong)pbVar1) == 0xd) {
        pfVar3 = (float *)(pbVar1 + (longlong)pfVar2 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
        break;
      }
      pfVar2 = (float *)(ulonglong)uVar4;
    } while (uVar4 < *pbVar1);
  }
  pfVar2 = local_res8;
  if (pfVar3 != (float *)0x0) {
    pfVar2 = pfVar3;
  }
  local_res8[0] = *pfVar2;
  param_3[1] = local_res8[0];
  puVar5 = *(uint **)(param_1 + 0x38);
  if ((puVar5 != (uint *)0x0) && ((*puVar5 >> 0x12 & 1) != 0)) {
    fVar7 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x12,param_2);
    *param_3 = fVar7 + *param_3;
    puVar5 = *(uint **)(param_1 + 0x38);
  }
  if ((puVar5 != (uint *)0x0) && ((*puVar5 >> 0x13 & 1) != 0)) {
    fVar7 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x13,param_2);
    param_3[1] = fVar7 + param_3[1];
    puVar5 = *(uint **)(param_1 + 0x38);
  }
  if ((puVar5 == (uint *)0x0) || ((*puVar5 >> 0x18 & 1) == 0)) {
    pbVar1 = *(byte **)(param_1 + 0x98);
    local_res8[0] = 0.0;
    if (pbVar1 != (byte *)0x0) {
      pfVar3 = pfVar6;
      do {
        uVar4 = (int)pfVar3 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar4 + (longlong)pbVar1) == 0xe) {
          pfVar6 = (float *)(pbVar1 + (longlong)pfVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                            );
          break;
        }
        pfVar3 = (float *)(ulonglong)uVar4;
      } while (uVar4 < *pbVar1);
    }
    pfVar3 = local_res8;
    if (pfVar6 != (float *)0x0) {
      pfVar3 = pfVar6;
    }
    fVar7 = *pfVar3;
  }
  else {
    fVar7 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x18,param_2);
  }
  param_3[2] = fVar7;
  *(byte *)(param_3 + 3) =
       *(byte *)(param_3 + 3) ^ (*(byte *)(param_1 + 0xa9) >> 2 ^ *(byte *)(param_3 + 3)) & 7;
  *(byte *)(param_3 + 3) =
       *(byte *)(param_3 + 3) ^ (*(char *)(param_1 + 0xa9) << 2 ^ *(byte *)(param_3 + 3)) & 8;
  return;
}



// FUNCTION 143174b80 FUN_143174b80 body=196 status=ok
// SIG undefined FUN_143174b80(void)

void FUN_143174b80(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  void *pvVar4;
  longlong lVar5;
  
  uVar1 = *(uint *)(param_1 + 0xa0);
  lVar5 = *(longlong *)(param_1 + 0x80);
  while ((lVar2 = lVar5, (uVar1 & 0xffe) == 0 && (*(longlong *)(param_1 + 0x80) != 0))) {
    uVar1 = *(uint *)(lVar2 + 0xa0);
    lVar5 = *(longlong *)(lVar2 + 0x80);
    param_1 = lVar2;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    pvVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x40);
    if (pvVar4 == (void *)0x0) {
      *param_2 = 0;
      return;
    }
    lVar5 = CAk3DAutomationParams::CAk3DAutomationParams(pvVar4);
    if (lVar5 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x70);
      uVar3 = *(undefined8 *)(lVar2 + 0x10);
      *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(lVar2 + 8);
      *(undefined8 *)(lVar5 + 0x10) = uVar3;
      uVar3 = *(undefined8 *)(lVar2 + 0x20);
      *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
      *(undefined8 *)(lVar5 + 0x20) = uVar3;
      uVar3 = *(undefined8 *)(lVar2 + 0x30);
      *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
      *(undefined8 *)(lVar5 + 0x30) = uVar3;
      *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)(lVar2 + 0x38);
    }
    *param_2 = lVar5;
    return;
  }
  *param_2 = 0;
  return;
}



// FUNCTION 143174c50 Get3DPanning body=638 status=ok
// SIG undefined Get3DPanning(void)

void CAkParameterNodeBase::Get3DPanning(longlong *param_1,undefined8 param_2,float *param_3)

{
  uint *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  float fVar6;
  float fVar7;
  float local_res8 [2];
  
  puVar1 = (uint *)param_1[7];
  if ((puVar1 == (uint *)0x0) || ((*puVar1 >> 0x14 & 1) == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((puVar1 == (uint *)0x0) || ((*puVar1 >> 0x15 & 1) == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((puVar1 == (uint *)0x0) || ((*puVar1 >> 0x16 & 1) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  local_res8[0] = 0.0;
  if ((bVar2 || bVar3) || bVar4) {
    param_3[0] = 0.0;
    param_3[1] = 0.0;
    param_3[2] = 0.0;
    if (bVar4) {
      fVar7 = 0.0;
      cVar5 = (**(code **)(param_1[3] + 0x18))(param_1 + 3,0x14);
      if (cVar5 != '\0') {
        fVar7 = (float)FUN_1431437a0(param_1 + 3,0x14);
      }
      if (((uint *)param_1[7] != (uint *)0x0) && ((*(uint *)param_1[7] >> 0x14 & 1) != 0)) {
        fVar6 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 6,0x14,param_2);
        fVar7 = fVar7 + fVar6;
      }
      *param_3 = fVar7;
      cVar5 = (**(code **)(*param_1 + 0x100))(param_1,local_res8);
      if (cVar5 != '\0') {
        *param_3 = local_res8[0] * 0.01 * *param_3;
      }
    }
    if (bVar3) {
      fVar7 = 0.0;
      cVar5 = (**(code **)(param_1[3] + 0x18))(param_1 + 3,0x15);
      if (cVar5 != '\0') {
        fVar7 = (float)FUN_1431437a0(param_1 + 3,0x15);
      }
      if (((uint *)param_1[7] != (uint *)0x0) && ((*(uint *)param_1[7] >> 0x15 & 1) != 0)) {
        fVar6 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 6,0x15,param_2);
        fVar7 = fVar7 + fVar6;
      }
      param_3[2] = fVar7;
      if ((local_res8[0] != 0.0) ||
         (cVar5 = (**(code **)(*param_1 + 0x100))(param_1,local_res8), cVar5 != '\0')) {
        param_3[2] = local_res8[0] * 0.01 * param_3[2];
      }
    }
    if (bVar2) {
      fVar7 = 0.0;
      cVar5 = (**(code **)(param_1[3] + 0x18))(param_1 + 3,0x16);
      if (cVar5 != '\0') {
        fVar7 = (float)FUN_1431437a0(param_1 + 3,0x16);
      }
      if (((uint *)param_1[7] != (uint *)0x0) && ((*(uint *)param_1[7] >> 0x16 & 1) != 0)) {
        fVar6 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 6,0x16,param_2);
        fVar7 = fVar7 + fVar6;
      }
      param_3[1] = fVar7;
      if ((local_res8[0] != 0.0) ||
         (cVar5 = (**(code **)(*param_1 + 0x100))(param_1,local_res8), cVar5 != '\0')) {
        param_3[1] = local_res8[0] * 0.01 * param_3[1];
      }
    }
  }
  return;
}



// FUNCTION 143174ed0 GetAttachedPropFX body=324 status=ok
// SIG undefined GetAttachedPropFX(void)

void CAkParameterNodeBase::GetAttachedPropFX(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  byte *pbVar4;
  longlong lVar5;
  uint *puVar6;
  longlong *plVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  LPCRITICAL_SECTION lpCriticalSection;
  uint local_res8 [2];
  
  lVar5 = DAT_146b50af8;
  bVar1 = *(byte *)(param_1 + 0xa8);
  while ((((bVar1 & 8) == 0 && (lVar3 = *(longlong *)(param_1 + 0x80), lVar3 != 0)) &&
         (*(longlong *)(param_1 + 0x88) == 0))) {
    bVar1 = *(byte *)(lVar3 + 0xa8);
    param_1 = lVar3;
  }
  pbVar4 = *(byte **)(param_1 + 0x98);
  puVar10 = (uint *)0x0;
  local_res8[0] = DAT_1467be204;
  puVar9 = puVar10;
  if (pbVar4 != (byte *)0x0) {
    puVar6 = puVar10;
    do {
      uVar8 = (int)puVar6 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar8 + (longlong)pbVar4) == 0x39) {
        puVar9 = (uint *)(pbVar4 + (longlong)puVar6 * 4 + ((ulonglong)(*pbVar4 + 4) & 0xfffffffc));
        break;
      }
      puVar6 = (uint *)(ulonglong)uVar8;
    } while (uVar8 < *pbVar4);
  }
  puVar6 = local_res8;
  if (puVar9 != (uint *)0x0) {
    puVar6 = puVar9;
  }
  uVar8 = *puVar6;
  if (uVar8 == 0xffffffff) {
    plVar7 = (longlong *)*param_2;
    *param_2 = 0;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_146b50af8 + 0x2c0);
    EnterCriticalSection(lpCriticalSection);
    uVar2 = *(uint *)(lVar5 + 0x2f0);
    if (uVar2 != 0) {
      for (puVar9 = *(uint **)(*(longlong *)(lVar5 + 0x2e8) +
                              ((ulonglong)uVar8 % (ulonglong)uVar2) * 8); puVar9 != (uint *)0x0;
          puVar9 = *(uint **)(puVar9 + 2)) {
        if (puVar9[4] == uVar8) {
          if (puVar9 != (uint *)0x0) {
            puVar9[5] = puVar9[5] + 1;
            LeaveCriticalSection(lpCriticalSection);
            goto LAB_143174fba;
          }
          break;
        }
      }
    }
    LeaveCriticalSection(lpCriticalSection);
    puVar9 = puVar10;
LAB_143174fba:
    plVar7 = (longlong *)*param_2;
    *param_2 = puVar9;
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x10))();
  }
  *(undefined2 *)(param_2 + 1) = 0;
  return;
}



// FUNCTION 143175020 FUN_143175020 body=707 status=ok
// SIG undefined FUN_143175020(void)

void FUN_143175020(longlong param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  longlong lVar2;
  char cVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_res8 [2];
  
  pbVar1 = *(byte **)(param_1 + 0x98);
  pfVar7 = (float *)0x0;
  local_res8[0] = DAT_1467be180;
  pfVar5 = pfVar7;
  if (pbVar1 != (byte *)0x0) {
    pfVar4 = pfVar7;
    do {
      uVar6 = (int)pfVar4 + 1;
      if (pbVar1[uVar6] == 0x18) {
        pfVar5 = (float *)(pbVar1 + (longlong)pfVar4 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
        break;
      }
      pfVar4 = (float *)(ulonglong)uVar6;
    } while (uVar6 < *pbVar1);
  }
  fVar10 = 0.0;
  pfVar4 = local_res8;
  if (pfVar5 != (float *)0x0) {
    pfVar4 = pfVar5;
  }
  fVar9 = 0.0;
  local_res8[0] = *pfVar4;
  lVar2 = *(longlong *)(param_1 + 0x18);
  *(float *)(param_2 + 0x28) = local_res8[0] + *(float *)(param_2 + 0x28);
  cVar3 = (**(code **)(lVar2 + 0x18))(param_1 + 0x18,0x2b);
  if (cVar3 != '\0') {
    fVar9 = (float)FUN_1431437a0(param_1 + 0x18,0x2b);
  }
  if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
     ((**(ulonglong **)(param_1 + 0x38) & 0x80000000000) != 0)) {
    fVar8 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x2b,param_3);
    fVar9 = fVar9 + fVar8;
  }
  *(float *)(param_2 + 0x28) = fVar9 + *(float *)(param_2 + 0x28);
  pbVar1 = *(byte **)(param_1 + 0x98);
  local_res8[0] = DAT_1467be188;
  pfVar5 = pfVar7;
  if (pbVar1 != (byte *)0x0) {
    pfVar4 = pfVar7;
    do {
      uVar6 = (int)pfVar4 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar6 + (longlong)pbVar1) == 0x1a) {
        pfVar5 = (float *)(pbVar1 + (longlong)pfVar4 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
        break;
      }
      pfVar4 = (float *)(ulonglong)uVar6;
    } while (uVar6 < *pbVar1);
  }
  fVar9 = 0.0;
  pfVar4 = local_res8;
  if (pfVar5 != (float *)0x0) {
    pfVar4 = pfVar5;
  }
  local_res8[0] = *pfVar4;
  *(float *)(param_2 + 0x2c) = local_res8[0] + *(float *)(param_2 + 0x2c);
  cVar3 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0x2d);
  if (cVar3 != '\0') {
    fVar9 = (float)FUN_1431437a0(param_1 + 0x18,0x2d);
  }
  if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
     ((**(ulonglong **)(param_1 + 0x38) & 0x200000000000) != 0)) {
    fVar8 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x2d,param_3);
    fVar9 = fVar9 + fVar8;
  }
  *(float *)(param_2 + 0x2c) = fVar9 + *(float *)(param_2 + 0x2c);
  pbVar1 = *(byte **)(param_1 + 0x98);
  local_res8[0] = DAT_1467be184;
  if (pbVar1 != (byte *)0x0) {
    pfVar5 = pfVar7;
    do {
      uVar6 = (int)pfVar5 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar6 + (longlong)pbVar1) == 0x19) {
        pfVar7 = (float *)(pbVar1 + (longlong)pfVar5 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
        break;
      }
      pfVar5 = (float *)(ulonglong)uVar6;
    } while (uVar6 < *pbVar1);
  }
  pfVar5 = local_res8;
  if (pfVar7 != (float *)0x0) {
    pfVar5 = pfVar7;
  }
  local_res8[0] = *pfVar5;
  *(float *)(param_2 + 0x30) = local_res8[0] + *(float *)(param_2 + 0x30);
  cVar3 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0x2c);
  if (cVar3 != '\0') {
    fVar10 = (float)FUN_1431437a0(param_1 + 0x18,0x2c);
  }
  if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
     ((**(ulonglong **)(param_1 + 0x38) & 0x100000000000) != 0)) {
    fVar9 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x2c,param_3);
    fVar10 = fVar10 + fVar9;
  }
  *(float *)(param_2 + 0x30) = fVar10 + *(float *)(param_2 + 0x30);
  return;
}



// FUNCTION 1431752f0 GetBypassFX body=391 status=ok
// SIG undefined GetBypassFX(void)

uint CAkParameterNodeBase::GetBypassFX(longlong param_1,uint param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  byte bVar4;
  longlong *plVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined1 local_30;
  undefined1 local_28;
  undefined8 local_20;
  
  if (*(longlong *)(param_1 + 0x68) == 0) {
    return 0;
  }
  iVar6 = param_2 + 0x1d;
  if (*(int *)(*(longlong *)(param_1 + 0x68) + 4 + (ulonglong)param_2 * 8) != 0) {
    if (((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
        ((**(ulonglong **)(param_1 + 0x38) >> ((longlong)iVar6 & 0x3fU) & 1) != 0)) ||
       (cVar1 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18), cVar1 != '\0'))
    {
      local_40 = 0;
      fVar8 = 0.0;
      local_38 = 0;
      local_20 = 0;
      local_30 = 0xff;
      local_28 = 0xff;
      local_48 = param_3;
      cVar1 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,iVar6);
      if (cVar1 != '\0') {
        fVar8 = (float)FUN_1431437a0(param_1 + 0x18,iVar6);
      }
      if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
         ((**(ulonglong **)(param_1 + 0x38) >> ((longlong)iVar6 & 0x3fU) & 1) != 0)) {
        fVar7 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,iVar6,&local_48);
        fVar8 = fVar8 + fVar7;
      }
      return (int)fVar8;
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x60);
  plVar5 = (longlong *)0x0;
  if (plVar3 != (longlong *)0x0) {
    plVar2 = (longlong *)*plVar3;
    plVar3 = plVar2 + (ulonglong)*(uint *)(plVar3 + 1) * 2;
    if (plVar2 != plVar3) {
      do {
        if (*plVar2 == param_3) break;
        plVar2 = plVar2 + 2;
      } while (plVar2 != plVar3);
      if (plVar2 != plVar3) {
        plVar5 = plVar2 + 1;
      }
    }
  }
  if (plVar5 == (longlong *)0x0) {
    if (*(longlong *)(param_1 + 0x58) != 0) {
      return (uint)(*(byte *)(*(longlong *)(param_1 + 0x58) + 0x20) >> ((byte)param_2 & 0x1f) & 1);
    }
    bVar4 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x24);
  }
  else {
    bVar4 = *(byte *)(*plVar5 + 0x20);
  }
  return (uint)(bVar4 >> ((byte)param_2 & 0x1f) & 1);
}



// FUNCTION 143175480 GetControlBus body=49 status=ok
// SIG undefined GetControlBus(void)

undefined8 CAkParameterNodeBase::GetControlBus(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x88);
  while( true ) {
    if (lVar1 != 0) {
      return *(undefined8 *)(param_1 + 0x88);
    }
    param_1 = *(longlong *)(param_1 + 0x80);
    if (param_1 == 0) break;
    lVar1 = *(longlong *)(param_1 + 0x88);
  }
  return 0;
}



// FUNCTION 1431754c0 GetDepth body=35 status=ok
// SIG undefined GetDepth(void)

int CAkParameterNodeBase::GetDepth(longlong param_1)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x80) != 0) {
    iVar1 = GetDepth();
    return iVar1 + 1;
  }
  return 0;
}



// FUNCTION 1431754f0 GetMaxNumInstances body=118 status=ok
// SIG undefined GetMaxNumInstances(void)

uint CAkParameterNodeBase::GetMaxNumInstances(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  float fVar2;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined1 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  uVar1 = *(ushort *)(param_1 + 0xa6) & 0x3ff;
  if (((*(uint **)(param_1 + 0x38) != (uint *)0x0) &&
      ((**(uint **)(param_1 + 0x38) >> 0x10 & 1) != 0)) && (uVar1 != 0)) {
    local_30 = 0;
    local_28 = 0;
    local_20 = 0xff;
    local_18 = 0xff;
    local_10 = 0;
    local_38 = param_2;
    fVar2 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x10,&local_38);
    return (int)fVar2;
  }
  return (uint)uVar1;
}



// FUNCTION 143175570 FUN_143175570 body=238 status=ok
// SIG undefined FUN_143175570(void)

undefined8 FUN_143175570(longlong param_1,undefined4 *param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong lVar3;
  byte *pbVar4;
  uint uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  byte local_res8 [8];
  
  pbVar7 = (byte *)0x0;
  *param_2 = 0;
  do {
    lVar3 = param_1;
    if ((*(uint *)(lVar3 + 0xa0) & 0xffe) != 0) break;
    param_1 = *(longlong *)(lVar3 + 0x80);
  } while (*(longlong *)(lVar3 + 0x80) != 0);
  pbVar1 = *(byte **)(lVar3 + 0x98);
  uVar6 = 0;
  local_res8[0] = 0;
  local_res8[1] = 0;
  local_res8[2] = 0;
  local_res8[3] = 0;
  if (pbVar1 != (byte *)0x0) {
    pbVar4 = pbVar7;
    do {
      uVar5 = (int)pbVar4 + 1;
      if (((byte *)(ulonglong)uVar5)[(longlong)pbVar1] == 0x46) {
        pbVar7 = pbVar1 + (longlong)pbVar4 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc);
        break;
      }
      pbVar4 = (byte *)(ulonglong)uVar5;
    } while (uVar5 < *pbVar1);
  }
  pbVar1 = local_res8;
  if (pbVar7 != (byte *)0x0) {
    pbVar1 = pbVar7;
  }
  plVar2 = (longlong *)
           CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef
                     (DAT_146b50af8 + 0x180,*(undefined4 *)pbVar1);
  if (plVar2 != (longlong *)0x0) {
    if (*(byte *)(plVar2 + 0x14) != 0xff) {
      lVar3 = (ulonglong)*(byte *)(plVar2 + 0x14) + 3;
      if ((plVar2[lVar3 * 2] != 0) && (plVar2 + lVar3 * 2 != (longlong *)0x0)) {
        uVar6 = 1;
        *param_2 = *(undefined4 *)
                    (plVar2[lVar3 * 2] + (ulonglong)((int)(plVar2 + lVar3 * 2)[1] - 1) * 0xc);
      }
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return uVar6;
}



// FUNCTION 143175660 FUN_143175660 body=40 status=ok
// SIG undefined FUN_143175660(void)

undefined8 FUN_143175660(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x88);
  if ((plVar2 == (longlong *)0x0) &&
     (plVar2 = *(longlong **)(param_1 + 0x80), plVar2 == (longlong *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000143175672. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*plVar2 + 0x108))();
  return uVar1;
}



// FUNCTION 143175690 GetModulatorParamXfrms body=144 status=ok
// SIG undefined GetModulatorParamXfrms(void)

undefined8
CAkParameterNodeBase::GetModulatorParamXfrms
          (longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_1 + 0x38);
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 1) != 0) {
      FUN_1431ab4f0(param_1 + 0x30,param_2,0,param_3,param_4);
      pbVar1 = *(byte **)(param_1 + 0x38);
    }
    if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 0x80) != 0)) {
      FUN_1431ab4f0(param_1 + 0x30,param_2,7,param_3,param_4);
    }
  }
  return 1;
}



// FUNCTION 143175720 GetPathState body=47 status=ok
// SIG undefined GetPathState(void)

longlong CAkParameterNodeBase::GetPathState(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  while( true ) {
    if (lVar1 != 0) {
      return *(longlong *)(param_1 + 0x70) + 0x40;
    }
    param_1 = *(longlong *)(param_1 + 0x80);
    if (param_1 == 0) break;
    lVar1 = *(longlong *)(param_1 + 0x70);
  }
  return 0;
}



// FUNCTION 143175750 FUN_143175750 body=339 status=ok
// SIG undefined FUN_143175750(void)

void FUN_143175750(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  undefined4 uVar8;
  byte local_res8 [8];
  
  uVar6 = *(uint *)(param_1 + 0xa0);
  lVar2 = *(longlong *)(param_1 + 0x80);
  while ((lVar1 = lVar2, (uVar6 & 0xffe) == 0 && (*(longlong *)(param_1 + 0x80) != 0))) {
    uVar6 = *(uint *)(lVar1 + 0xa0);
    lVar2 = *(longlong *)(lVar1 + 0x80);
    param_1 = lVar1;
  }
  CAkParameterNodeBase::Get2DParams(param_1);
  pbVar7 = (byte *)0x0;
  *(undefined1 *)(param_4 + 5) = *(undefined1 *)(param_1 + 0xa4);
  pbVar3 = *(byte **)(param_1 + 0x98);
  local_res8[0] = 0;
  local_res8[1] = 0;
  local_res8[2] = 0;
  local_res8[3] = 0;
  pbVar5 = pbVar7;
  if (pbVar3 != (byte *)0x0) {
    pbVar4 = pbVar7;
    do {
      uVar6 = (int)pbVar4 + 1;
      if (((byte *)(ulonglong)uVar6)[(longlong)pbVar3] == 0x46) {
        pbVar5 = pbVar3 + (longlong)pbVar4 * 4 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc);
        break;
      }
      pbVar4 = (byte *)(ulonglong)uVar6;
    } while (uVar6 < *pbVar3);
  }
  pbVar3 = local_res8;
  if (pbVar5 != (byte *)0x0) {
    pbVar3 = pbVar5;
  }
  param_4[1] = *(undefined4 *)pbVar3;
  if ((*(uint **)(param_1 + 0x38) != (uint *)0x0) &&
     ((**(uint **)(param_1 + 0x38) >> 0x17 & 1) != 0)) {
    uVar8 = FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x17,param_2);
    *param_4 = uVar8;
    return;
  }
  pbVar3 = *(byte **)(param_1 + 0x98);
  local_res8[0] = 0;
  local_res8[1] = 0;
  local_res8[2] = 200;
  local_res8[3] = 0x42;
  if (pbVar3 != (byte *)0x0) {
    pbVar5 = pbVar7;
    do {
      uVar6 = (int)pbVar5 + 1;
      if (((byte *)(ulonglong)uVar6)[(longlong)pbVar3] == 0x47) {
        pbVar7 = pbVar3 + (longlong)pbVar5 * 4 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc);
        break;
      }
      pbVar5 = (byte *)(ulonglong)uVar6;
    } while (uVar6 < *pbVar3);
  }
  pbVar3 = local_res8;
  if (pbVar7 != (byte *)0x0) {
    pbVar3 = pbVar7;
  }
  *param_4 = *(undefined4 *)pbVar3;
  return;
}



// FUNCTION 1431758b0 FUN_1431758b0 body=555 status=ok
// SIG undefined FUN_1431758b0(void)

undefined8 * FUN_1431758b0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_res8 [2];
  float local_res20;
  float fStackX_24;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined1 local_50;
  undefined1 local_48;
  undefined8 local_40;
  
  if ((*(longlong *)(param_1 + 0x80) != 0) && ((*(byte *)(param_1 + 0xa0) & 1) == 0)) {
    FUN_1431758b0();
    return param_2;
  }
  pfVar7 = (float *)0x0;
  pbVar1 = *(byte **)(param_1 + 0x98);
  fVar10 = 0.0;
  local_res20 = 50.0;
  fStackX_24 = 0.0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0xff;
  local_48 = 0xff;
  local_40 = 0;
  local_res8[0] = DAT_1467be13c;
  pfVar5 = pfVar7;
  if (pbVar1 != (byte *)0x0) {
    pfVar4 = pfVar7;
    do {
      uVar6 = (int)pfVar4 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar6 + (longlong)pbVar1) == 7) {
        pfVar5 = (float *)(pbVar1 + (longlong)pfVar4 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
        break;
      }
      pfVar4 = (float *)(ulonglong)uVar6;
    } while (uVar6 < *pbVar1);
  }
  fVar9 = 0.0;
  pfVar4 = local_res8;
  if (pfVar5 != (float *)0x0) {
    pfVar4 = pfVar5;
  }
  local_res8[0] = *pfVar4;
  local_68 = param_3;
  cVar2 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0x11);
  if (cVar2 != '\0') {
    fVar9 = (float)FUN_1431437a0(param_1 + 0x18,0x11);
  }
  if ((*(uint **)(param_1 + 0x38) != (uint *)0x0) &&
     ((**(uint **)(param_1 + 0x38) >> 0x11 & 1) != 0)) {
    fVar8 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x11,&local_68);
    fVar9 = fVar9 + fVar8;
  }
  fVar9 = fVar9 + local_res8[0];
  iVar3 = _finite((double)fVar9);
  if (iVar3 != 0) {
    local_res20 = fVar9;
  }
  if ((*(byte *)(param_1 + 0xa8) & 0x20) != 0) {
    pbVar1 = *(byte **)(param_1 + 0x98);
    local_res8[0] = DAT_1467be140;
    if (pbVar1 != (byte *)0x0) {
      pfVar5 = pfVar7;
      do {
        uVar6 = (int)pfVar5 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar6 + (longlong)pbVar1) == 8) {
          pfVar7 = (float *)(pbVar1 + (longlong)pfVar5 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                            );
          break;
        }
        pfVar5 = (float *)(ulonglong)uVar6;
      } while (uVar6 < *pbVar1);
    }
    pfVar5 = local_res8;
    if (pfVar7 != (float *)0x0) {
      pfVar5 = pfVar7;
    }
    fVar10 = *pfVar5;
    local_res8[0] = fVar10;
  }
  iVar3 = _finite((double)fVar10);
  if (iVar3 != 0) {
    fStackX_24 = fVar10;
  }
  *param_2 = CONCAT44(fStackX_24,local_res20);
  return param_2;
}



// FUNCTION 143175ae0 FUN_143175ae0 body=761 status=ok
// SIG undefined FUN_143175ae0(void)

undefined8 * FUN_143175ae0(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  void *pvVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  void *pvVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined1 uVar14;
  longlong *plVar15;
  longlong *plVar16;
  uint uVar17;
  
  if (param_2 == 0) {
    CAkRegistryMgr::SetNodeIDAsModified(g_pRegistryMgr,param_1);
    if (*(undefined8 **)(param_1 + 0x58) == (undefined8 *)0x0) {
      if (*(longlong *)(param_1 + 0x68) == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined1 *)(*(longlong *)(param_1 + 0x68) + 0x24);
      }
      puVar9 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x28);
      puVar5 = (undefined8 *)0x0;
      if (puVar9 != (undefined8 *)0x0) {
        puVar9[1] = param_1;
        *puVar9 = &PTR_FUN_145ac6f58;
        puVar9[2] = 0;
        puVar9[3] = 0;
        *(undefined1 *)(puVar9 + 4) = uVar14;
        puVar5 = puVar9;
      }
      *(undefined8 **)(param_1 + 0x58) = puVar5;
      return puVar5;
    }
    return *(undefined8 **)(param_1 + 0x58);
  }
  plVar16 = *(longlong **)(param_1 + 0x60);
  plVar10 = (longlong *)0x0;
  if (plVar16 == (longlong *)0x0) {
    puVar5 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x10);
    *(undefined8 **)(param_1 + 0x60) = puVar5;
    plVar16 = (longlong *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = 0;
      puVar5[1] = 0;
      plVar16 = *(longlong **)(param_1 + 0x60);
    }
    if (plVar16 == (longlong *)0x0) {
      return (undefined8 *)0x0;
    }
  }
  plVar6 = (longlong *)*plVar16;
  plVar16 = plVar6 + (ulonglong)*(uint *)(plVar16 + 1) * 2;
  for (; (plVar6 != plVar16 && (*plVar6 != param_2)); plVar6 = plVar6 + 2) {
  }
  plVar13 = plVar6 + 1;
  if (plVar6 == plVar16) {
    plVar13 = plVar10;
  }
  if (plVar13 != (longlong *)0x0) {
    return (undefined8 *)*plVar13;
  }
  if (*(longlong *)(param_1 + 0x68) == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(undefined1 *)(*(longlong *)(param_1 + 0x68) + 0x24);
  }
  puVar5 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x28);
  if (puVar5 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar5[1] = param_1;
  *puVar5 = &PTR_FUN_145ac6f58;
  puVar5[2] = param_2;
  puVar5[3] = 0;
  *(undefined1 *)(puVar5 + 4) = uVar14;
  plVar16 = *(longlong **)(param_1 + 0x60);
  uVar17 = *(uint *)(plVar16 + 1);
  plVar6 = (longlong *)*plVar16;
  plVar13 = plVar6 + (ulonglong)uVar17 * 2;
  for (; (plVar6 != plVar13 && (*plVar6 != param_2)); plVar6 = plVar6 + 2) {
  }
  plVar15 = plVar6 + 1;
  if (plVar6 == plVar13) {
    plVar15 = plVar10;
  }
  if (plVar15 == (longlong *)0x0) {
    if (uVar17 < *(uint *)((longlong)plVar16 + 0xc)) {
LAB_143175c82:
      uVar17 = *(uint *)(plVar16 + 1);
      *(uint *)(plVar16 + 1) = uVar17 + 1;
      plVar15 = (longlong *)((ulonglong)uVar17 * 0x10 + *plVar16);
      if (plVar15 == (longlong *)0x0) goto LAB_143175d3d;
      *plVar15 = param_2;
      plVar15 = plVar15 + 1;
      goto LAB_143175ca3;
    }
    uVar1 = *(uint *)((longlong)plVar16 + 0xc) + 1;
    pvVar7 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 4);
    if (pvVar7 != (void *)0x0) {
      pvVar11 = (void *)*plVar16;
      if ((pvVar11 != (void *)0x0) && (pvVar11 != pvVar7)) {
        uVar12 = (ulonglong)*(uint *)(plVar16 + 1);
        if (uVar12 != 0) {
          do {
            puVar9 = (undefined8 *)(*plVar16 + -0x10 + (longlong)(plVar10 + 2));
            uVar2 = puVar9[1];
            *(undefined8 *)((longlong)plVar10 + (longlong)pvVar7) = *puVar9;
            ((undefined8 *)((longlong)plVar10 + (longlong)pvVar7))[1] = uVar2;
            uVar12 = uVar12 - 1;
            plVar10 = plVar10 + 2;
          } while (uVar12 != 0);
          pvVar11 = (void *)*plVar16;
        }
        AK::MemoryMgr::Free(g_DefaultPoolId,pvVar11);
      }
      *plVar16 = (longlong)pvVar7;
      *(uint *)((longlong)plVar16 + 0xc) = uVar1;
      if (uVar1 <= uVar17) goto LAB_143175d3d;
      goto LAB_143175c82;
    }
  }
  else {
LAB_143175ca3:
    *plVar15 = (longlong)puVar5;
  }
  if (plVar15 != (longlong *)0x0) {
    lVar8 = FUN_14315bb10(param_2);
    if ((lVar8 != 0) && (iVar4 = CAkModifiedNodes::SetNodeAsModified(lVar8,param_1), iVar4 == 1)) {
      return puVar5;
    }
    puVar9 = *(undefined8 **)(param_1 + 0x60);
    plVar16 = (longlong *)*puVar9;
    uVar17 = *(uint *)(puVar9 + 1);
    plVar10 = plVar16 + (ulonglong)uVar17 * 2;
    if (plVar16 != plVar10) {
      do {
        if (*plVar16 == param_2) break;
        plVar16 = plVar16 + 2;
      } while (plVar16 != plVar10);
      if (plVar16 != plVar10) {
        if (plVar16 < plVar10 + -2) {
          uVar12 = ((ulonglong)((longlong)(plVar10 + -2) + (-1 - (longlong)plVar16)) >> 3 &
                   0xfffffffffffffffe) + 2 & 0x1ffffffffffffffe;
          plVar10 = plVar16 + 2;
          for (; uVar12 != 0; uVar12 = uVar12 - 1) {
            *plVar16 = *plVar10;
            plVar10 = plVar10 + 1;
            plVar16 = plVar16 + 1;
          }
          uVar17 = *(uint *)(puVar9 + 1);
        }
        *(uint *)(puVar9 + 1) = uVar17 - 1;
      }
    }
  }
LAB_143175d3d:
  lVar3 = g_DefaultPoolId;
  CAkSIS::~CAkSIS(puVar5);
  AK::MemoryMgr::Free(lVar3,puVar5);
  return (undefined8 *)0x0;
}



// FUNCTION 143175de0 GetStateSyncTypes body=139 status=ok
// SIG undefined GetStateSyncTypes(void)

undefined1
CAkParameterNodeBase::GetStateSyncTypes
          (longlong param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  
  cVar1 = FUN_143190a20(param_1 + 0x18);
  while( true ) {
    if (cVar1 != '\0') {
      return 1;
    }
    if ((param_4 == '\0') && (*(longlong *)(param_1 + 0x88) != 0)) {
      param_4 = '\x01';
      cVar1 = CAkBus::GetStateSyncTypes(*(longlong *)(param_1 + 0x88),param_2,param_3);
      if (cVar1 != '\0') {
        return 1;
      }
    }
    param_1 = *(longlong *)(param_1 + 0x80);
    if (param_1 == 0) break;
    cVar1 = FUN_143190a20(param_1 + 0x18,param_2,param_3);
  }
  return 0;
}



// FUNCTION 143175e70 FUN_143175e70 body=792 status=ok
// SIG undefined FUN_143175e70(void)

undefined8 FUN_143175e70(longlong param_1,float *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  float *pfVar3;
  longlong *plVar4;
  longlong lVar5;
  float *pfVar6;
  longlong *plVar7;
  uint uVar8;
  float *pfVar9;
  float local_res8 [2];
  
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  param_2[8] = 0.0;
  param_2[9] = 0.0;
  param_2[10] = 0.0;
  param_2[0xb] = 0.0;
  param_2[0xc] = 0.0;
  param_2[0xd] = 0.0;
  param_2[0xe] = 0.0;
  param_2[0xf] = 0.0;
  param_2[0x10] = 0.0;
  lVar5 = param_1;
  if (param_1 == 0) {
    return 0xf;
  }
  do {
    lVar2 = lVar5;
    if ((*(uint *)(lVar2 + 0xa0) & 0xffe) != 0) break;
    lVar5 = *(longlong *)(lVar2 + 0x80);
  } while (*(longlong *)(lVar2 + 0x80) != 0);
  pfVar9 = (float *)0x0;
  local_res8[0] = 0.0;
  param_2[1] = (float)(*(byte *)(lVar2 + 0xa9) >> 2 & 7);
  param_2[2] = (float)(*(byte *)(param_1 + 0xa4) & 7);
  *(byte *)(param_2 + 3) = *(byte *)(param_1 + 0xa4) >> 6 & 1;
  param_2[4] = (float)(*(byte *)(param_1 + 0xa4) >> 3 & 7);
  pbVar1 = *(byte **)(param_1 + 0x98);
  pfVar6 = pfVar9;
  if (pbVar1 != (byte *)0x0) {
    pfVar3 = pfVar9;
    do {
      uVar8 = (int)pfVar3 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar8 + (longlong)pbVar1) == 0x46) {
        pfVar6 = (float *)(pbVar1 + (longlong)pfVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
        break;
      }
      pfVar3 = (float *)(ulonglong)uVar8;
    } while (uVar8 < *pbVar1);
  }
  pfVar3 = local_res8;
  if (pfVar6 != (float *)0x0) {
    pfVar3 = pfVar6;
  }
  plVar4 = (longlong *)
           CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef(DAT_146b50af8 + 0x180,*pfVar3);
  if (plVar4 != (longlong *)0x0) {
    *(undefined1 *)(param_2 + 5) = 1;
    *(byte *)((longlong)param_2 + 0x15) = *(byte *)((longlong)plVar4 + 0xa7) & 1;
    if ((*(byte *)((longlong)plVar4 + 0xa7) & 1) != 0) {
      param_2[6] = *(float *)(plVar4 + 3);
      param_2[7] = *(float *)((longlong)plVar4 + 0x1c);
      param_2[8] = *(float *)(plVar4 + 4);
      param_2[9] = *(float *)((longlong)plVar4 + 0x24);
      param_2[10] = *(float *)(plVar4 + 5);
    }
    if (*(byte *)(plVar4 + 0x14) != 0xff) {
      lVar5 = (ulonglong)*(byte *)(plVar4 + 0x14) + 3;
      plVar7 = plVar4 + lVar5 * 2;
      if ((plVar4[lVar5 * 2] != 0) && (plVar7 != (longlong *)0x0)) {
        param_2[0xb] = *(float *)(plVar4[lVar5 * 2] + (ulonglong)((int)plVar7[1] - 1) * 0xc);
        param_2[0xc] = *(float *)(*plVar7 + 4 + (ulonglong)((int)plVar7[1] - 1) * 0xc);
      }
    }
    if (*(byte *)((longlong)plVar4 + 0xa1) != 0xff) {
      lVar5 = (ulonglong)*(byte *)((longlong)plVar4 + 0xa1) + 3;
      if ((plVar4[lVar5 * 2] != 0) && (plVar4 + lVar5 * 2 != (longlong *)0x0)) {
        param_2[0xd] = *(float *)(plVar4[lVar5 * 2] + 4 +
                                 (ulonglong)((int)(plVar4 + lVar5 * 2)[1] - 1) * 0xc);
      }
    }
    if (*(byte *)((longlong)plVar4 + 0xa2) != 0xff) {
      lVar5 = (ulonglong)*(byte *)((longlong)plVar4 + 0xa2) + 3;
      if ((plVar4[lVar5 * 2] != 0) && (plVar4 + lVar5 * 2 != (longlong *)0x0)) {
        param_2[0xe] = *(float *)(plVar4[lVar5 * 2] + 4 +
                                 (ulonglong)((int)(plVar4 + lVar5 * 2)[1] - 1) * 0xc);
      }
    }
    if (*(byte *)((longlong)plVar4 + 0xa3) != 0xff) {
      lVar5 = (ulonglong)*(byte *)((longlong)plVar4 + 0xa3) + 3;
      if ((plVar4[lVar5 * 2] != 0) && (plVar4 + lVar5 * 2 != (longlong *)0x0)) {
        param_2[0xf] = *(float *)(plVar4[lVar5 * 2] + 4 +
                                 (ulonglong)((int)(plVar4 + lVar5 * 2)[1] - 1) * 0xc);
      }
    }
    if (*(byte *)((longlong)plVar4 + 0xa4) != 0xff) {
      plVar7 = plVar4 + ((ulonglong)*(byte *)((longlong)plVar4 + 0xa4) + 3) * 2;
      if ((*plVar7 != 0) && (plVar7 != (longlong *)0x0)) {
        param_2[0x10] = *(float *)(*plVar7 + 4 + (ulonglong)((int)plVar7[1] - 1) * 0xc);
      }
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  pbVar1 = *(byte **)(lVar2 + 0x98);
  local_res8[0] = 0.0;
  if (pbVar1 != (byte *)0x0) {
    pfVar6 = pfVar9;
    do {
      uVar8 = (int)pfVar6 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar8 + (longlong)pbVar1) == 0xe) {
        pfVar9 = (float *)(pbVar1 + (longlong)pfVar6 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
        break;
      }
      pfVar6 = (float *)(ulonglong)uVar8;
    } while (uVar8 < *pbVar1);
  }
  pfVar6 = local_res8;
  if (pfVar9 != (float *)0x0) {
    pfVar6 = pfVar9;
  }
  *param_2 = *pfVar6 * 0.01;
  return 1;
}



// FUNCTION 143176190 GetVoiceProperties body=974 status=ok
// SIG undefined GetVoiceProperties(void)

void CAkParameterNodeBase::GetVoiceProperties
               (longlong param_1,float *param_2,undefined8 param_3,longlong *param_4)

{
  byte *pbVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  float *pfVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong local_38;
  uint uStack_30;
  
  plVar8 = (longlong *)0x0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    pbVar1 = *(byte **)(*(longlong *)(param_1 + 0x58) + 0x18);
    if (pbVar1 != (byte *)0x0) {
      plVar4 = plVar8;
      do {
        uVar5 = (int)plVar4 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar5 + (longlong)pbVar1) == 0) {
          if ((float *)(pbVar1 + (longlong)plVar4 * 0x10 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc))
              != (float *)0x0) {
            *param_2 = *(float *)(pbVar1 + (longlong)plVar4 * 0x10 +
                                           ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)) + *param_2;
          }
          break;
        }
        plVar4 = (longlong *)(ulonglong)uVar5;
      } while (uVar5 < *pbVar1);
    }
    pbVar1 = *(byte **)(*(longlong *)(param_1 + 0x58) + 0x18);
    if (pbVar1 != (byte *)0x0) {
      plVar4 = plVar8;
      do {
        uVar5 = (int)plVar4 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar5 + (longlong)pbVar1) == 2) {
          if ((float *)(pbVar1 + (longlong)plVar4 * 0x10 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc))
              != (float *)0x0) {
            param_2[2] = param_2[2] +
                         *(float *)(pbVar1 + (longlong)plVar4 * 0x10 +
                                             ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
          }
          break;
        }
        plVar4 = (longlong *)(ulonglong)uVar5;
      } while (uVar5 < *pbVar1);
    }
    pbVar1 = *(byte **)(*(longlong *)(param_1 + 0x58) + 0x18);
    if (pbVar1 != (byte *)0x0) {
      plVar4 = plVar8;
      do {
        uVar5 = (int)plVar4 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar5 + (longlong)pbVar1) == 3) {
          if ((float *)(pbVar1 + (longlong)plVar4 * 0x10 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc))
              != (float *)0x0) {
            param_2[3] = param_2[3] +
                         *(float *)(pbVar1 + (longlong)plVar4 * 0x10 +
                                             ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
          }
          break;
        }
        plVar4 = (longlong *)(ulonglong)uVar5;
      } while (uVar5 < *pbVar1);
    }
    pbVar1 = *(byte **)(*(longlong *)(param_1 + 0x58) + 0x18);
    if (pbVar1 != (byte *)0x0) {
      plVar4 = plVar8;
      do {
        uVar5 = (int)plVar4 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar5 + (longlong)pbVar1) == 4) {
          if ((float *)(pbVar1 + (longlong)plVar4 * 0x10 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc))
              != (float *)0x0) {
            param_2[4] = *(float *)(pbVar1 + (longlong)plVar4 * 0x10 +
                                             ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)) + param_2[4];
          }
          break;
        }
        plVar4 = (longlong *)(ulonglong)uVar5;
      } while (uVar5 < *pbVar1);
    }
    pbVar1 = *(byte **)(*(longlong *)(param_1 + 0x58) + 0x18);
    if (pbVar1 != (byte *)0x0) {
      plVar4 = plVar8;
      do {
        uVar5 = (int)plVar4 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar5 + (longlong)pbVar1) == 0xb) {
          pfVar6 = (float *)(pbVar1 + (longlong)plVar4 * 0x10 +
                                      ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
          if ((pfVar6 != (float *)0x0) && (*pfVar6 != 1.0)) {
            uStack_30 = uStack_30 & 0xfffffffd | 1;
            local_38 = param_1;
            FUN_143178370(param_3,&local_38,pfVar6);
          }
          break;
        }
        plVar4 = (longlong *)(ulonglong)uVar5;
      } while (uVar5 < *pbVar1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x60);
  if (plVar4 != (longlong *)0x0) {
    plVar3 = (longlong *)*plVar4;
    plVar4 = plVar3 + (ulonglong)*(uint *)(plVar4 + 1) * 2;
    for (; (plVar3 != plVar4 && (*plVar3 != *param_4)); plVar3 = plVar3 + 2) {
    }
    plVar7 = plVar3 + 1;
    if (plVar3 == plVar4) {
      plVar7 = plVar8;
    }
    if (plVar7 != (longlong *)0x0) {
      lVar2 = *plVar7;
      pbVar1 = *(byte **)(lVar2 + 0x18);
      if (pbVar1 != (byte *)0x0) {
        plVar4 = plVar8;
        do {
          uVar5 = (int)plVar4 + 1;
          if (*(byte *)((longlong)(ulonglong)uVar5 + (longlong)pbVar1) == 0) {
            if ((float *)(pbVar1 + (longlong)plVar4 * 0x10 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                         ) != (float *)0x0) {
              *param_2 = *param_2 +
                         *(float *)(pbVar1 + (longlong)plVar4 * 0x10 +
                                             ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
            }
            break;
          }
          plVar4 = (longlong *)(ulonglong)uVar5;
        } while (uVar5 < *pbVar1);
      }
      pbVar1 = *(byte **)(lVar2 + 0x18);
      if (pbVar1 != (byte *)0x0) {
        plVar4 = plVar8;
        do {
          uVar5 = (int)plVar4 + 1;
          if (*(byte *)((longlong)(ulonglong)uVar5 + (longlong)pbVar1) == 2) {
            if ((float *)(pbVar1 + (longlong)plVar4 * 0x10 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                         ) != (float *)0x0) {
              param_2[2] = *(float *)(pbVar1 + (longlong)plVar4 * 0x10 +
                                               ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)) + param_2[2]
              ;
            }
            break;
          }
          plVar4 = (longlong *)(ulonglong)uVar5;
        } while (uVar5 < *pbVar1);
      }
      pbVar1 = *(byte **)(lVar2 + 0x18);
      if (pbVar1 != (byte *)0x0) {
        plVar4 = plVar8;
        do {
          uVar5 = (int)plVar4 + 1;
          if (*(byte *)((longlong)(ulonglong)uVar5 + (longlong)pbVar1) == 3) {
            if ((float *)(pbVar1 + (longlong)plVar4 * 0x10 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                         ) != (float *)0x0) {
              param_2[3] = param_2[3] +
                           *(float *)(pbVar1 + (longlong)plVar4 * 0x10 +
                                               ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
            }
            break;
          }
          plVar4 = (longlong *)(ulonglong)uVar5;
        } while (uVar5 < *pbVar1);
      }
      pbVar1 = *(byte **)(lVar2 + 0x18);
      if (pbVar1 != (byte *)0x0) {
        plVar4 = plVar8;
        do {
          uVar5 = (int)plVar4 + 1;
          if (*(byte *)((longlong)(ulonglong)uVar5 + (longlong)pbVar1) == 4) {
            if ((float *)(pbVar1 + (longlong)plVar4 * 0x10 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                         ) != (float *)0x0) {
              param_2[4] = *(float *)(pbVar1 + (longlong)plVar4 * 0x10 +
                                               ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)) + param_2[4]
              ;
            }
            break;
          }
          plVar4 = (longlong *)(ulonglong)uVar5;
        } while (uVar5 < *pbVar1);
      }
      pbVar1 = *(byte **)(lVar2 + 0x18);
      if (pbVar1 != (byte *)0x0) {
        do {
          uVar5 = (int)plVar8 + 1;
          if (pbVar1[uVar5] == 0xb) {
            if ((float *)(pbVar1 + (longlong)plVar8 * 0x10 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                         ) == (float *)0x0) {
              return;
            }
            if (*(float *)(pbVar1 + (longlong)plVar8 * 0x10 +
                                    ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)) == 1.0) {
              return;
            }
            uStack_30 = uStack_30 & 0xfffffffc;
            local_38 = param_1;
            FUN_143178370(param_3,&local_38);
            return;
          }
          plVar8 = (longlong *)(ulonglong)uVar5;
        } while (uVar5 < *pbVar1);
      }
    }
  }
  return;
}



// FUNCTION 143176560 FUN_143176560 body=244 status=ok
// SIG undefined FUN_143176560(void)

undefined8 FUN_143176560(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar7 = *(int *)((longlong)param_1 + 0xc) + param_2;
  pvVar3 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar7 << 6);
  if (pvVar3 == (void *)0x0) {
    return 0;
  }
  pvVar6 = (void *)*param_1;
  if ((pvVar6 != (void *)0x0) && (pvVar6 != pvVar3)) {
    uVar8 = (ulonglong)*(uint *)(param_1 + 1);
    if (uVar8 != 0) {
      puVar4 = (undefined8 *)((longlong)pvVar3 + 0x20);
      do {
        puVar1 = puVar4 + -4;
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = 0;
          *(undefined4 *)(puVar4 + -3) = 0;
          *(undefined4 *)(puVar4 + -2) = 0;
          *(undefined1 *)(puVar4 + -1) = 0xff;
          *(undefined1 *)puVar4 = 0xff;
          puVar4[1] = 0;
          puVar4[2] = 0;
          puVar4[3] = 0;
        }
        puVar5 = (undefined8 *)((longlong)puVar4 + *param_1 + (-0x20 - (longlong)pvVar3));
        uVar2 = puVar5[1];
        *puVar1 = *puVar5;
        puVar4[-3] = uVar2;
        uVar2 = puVar5[3];
        puVar4[-2] = puVar5[2];
        puVar4[-1] = uVar2;
        uVar2 = puVar5[5];
        *puVar4 = puVar5[4];
        puVar4[1] = uVar2;
        puVar4[2] = puVar5[6];
        puVar4[3] = puVar5[7];
        puVar4 = puVar4 + 8;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      pvVar6 = (void *)*param_1;
    }
    AK::MemoryMgr::Free(g_DefaultPoolId,pvVar6);
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar7;
  *param_1 = (longlong)pvVar3;
  return 1;
}



// FUNCTION 143176660 HasListenerRelativeRouting body=12 status=ok
// SIG undefined HasListenerRelativeRouting(void)

byte CAkParameterNodeBase::HasListenerRelativeRouting(longlong param_1)

{
  return *(byte *)(param_1 + 0xa9) >> 1 & 1;
}



// FUNCTION 143176670 FUN_143176670 body=159 status=ok
// SIG undefined FUN_143176670(void)

byte FUN_143176670(longlong param_1,ushort param_2)

{
  longlong lVar1;
  longlong *plVar2;
  byte bVar3;
  byte bVar4;
  
  bVar3 = FUN_143174690();
  lVar1 = *(longlong *)(param_1 + 0x78);
  if (lVar1 != 0) {
    *(short *)(lVar1 + 0x54) = *(short *)(lVar1 + 0x54) + 1;
    if ((param_2 & 1) == 0) goto LAB_1431766d1;
    *(short *)(lVar1 + 0x56) = *(short *)(lVar1 + 0x56) + 1;
  }
  if (((param_2 & 1) != 0) && (plVar2 = *(longlong **)(param_1 + 0x88), plVar2 != (longlong *)0x0))
  {
    param_2 = param_2 & 0xfffe;
    bVar4 = (**(code **)(*plVar2 + 0x128))(plVar2,1);
    bVar3 = bVar4 & bVar3;
  }
LAB_1431766d1:
  plVar2 = *(longlong **)(param_1 + 0x80);
  if (plVar2 != (longlong *)0x0) {
    bVar4 = (**(code **)(*plVar2 + 0x128))(plVar2,param_2);
    return bVar4 & bVar3;
  }
  return bVar3;
}



// FUNCTION 143176710 FUN_143176710 body=54 status=ok
// SIG undefined FUN_143176710(void)

void FUN_143176710(longlong param_1,char param_2)

{
  longlong lVar1;
  
  FUN_143174690();
  lVar1 = *(longlong *)(param_1 + 0x78);
  if ((lVar1 != 0) && (*(short *)(lVar1 + 0x54) = *(short *)(lVar1 + 0x54) + 1, param_2 != '\0')) {
    *(short *)(lVar1 + 0x56) = *(short *)(lVar1 + 0x56) + 1;
  }
  return;
}



// FUNCTION 143176750 IncrementAllCountBus body=276 status=ok
// SIG undefined IncrementAllCountBus(void)

undefined8
CAkParameterNodeBase::IncrementAllCountBus(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  short sStackX_1a;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  
  if (param_2 != (longlong *)0x0) {
    uVar5 = 0;
    sVar3 = (short)param_3;
    uVar4 = 0;
    if (0 < sVar3) {
      do {
        cVar1 = (**(code **)(*param_2 + 0x128))(param_2,1);
        if (cVar1 == '\0') {
          DecrementAllCountBus(param_1,param_2,uVar4);
          return 0;
        }
        uVar4 = uVar4 + 1;
      } while ((int)(uint)uVar4 < (int)sVar3);
    }
    sStackX_1a = (short)((uint)param_3 >> 0x10);
    local_48[0] = 0;
    local_30 = 1;
    local_2b = 1;
    local_40 = 0;
    uStack_38 = 0;
    if (0 < sStackX_1a) {
      do {
        local_2c = 0;
        iVar2 = (**(code **)(*param_2 + 0x118))(param_2,local_48,1,1);
        if (iVar2 == 0) {
          DecrementAllCountBus(param_1,param_2,CONCAT22(uVar5,sVar3));
          return 0;
        }
        uVar5 = uVar5 + 1;
      } while ((int)(uint)uVar5 < (int)sStackX_1a);
    }
  }
  return 1;
}



// FUNCTION 143176870 FUN_143176870 body=73 status=ok
// SIG undefined FUN_143176870(void)

void FUN_143176870(longlong param_1,undefined4 param_2)

{
  short *psVar1;
  
  while( true ) {
    if (*(longlong *)(param_1 + 0x78) != 0) {
      psVar1 = (short *)(*(longlong *)(param_1 + 0x78) + 0x56);
      *psVar1 = *psVar1 + (short)param_2;
      if (*(longlong *)(param_1 + 0x78) != 0) {
        psVar1 = (short *)(*(longlong *)(param_1 + 0x78) + 0x52);
        *psVar1 = *psVar1 + (short)((uint)param_2 >> 0x10);
      }
    }
    if (*(longlong *)(param_1 + 0x88) != 0) break;
    param_1 = *(longlong *)(param_1 + 0x80);
    if (param_1 == 0) {
      return;
    }
  }
  CAkParameterNodeBase::IncrementAllCountBus(param_1,*(longlong *)(param_1 + 0x88),param_2);
  return;
}



// FUNCTION 1431768c0 FUN_1431768c0 body=61 status=ok
// SIG undefined FUN_1431768c0(void)

int FUN_1431768c0(longlong param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_143174690();
  lVar1 = *(longlong *)(param_1 + 0x78);
  if ((lVar1 != 0) && (*(short *)(lVar1 + 0x50) = *(short *)(lVar1 + 0x50) + 1, param_2 != '\0')) {
    *(short *)(lVar1 + 0x52) = *(short *)(lVar1 + 0x52) + 1;
  }
  return 2 - (uint)(cVar2 != '\0');
}



// FUNCTION 143176900 FUN_143176900 body=115 status=ok
// SIG undefined FUN_143176900(void)

void FUN_143176900(longlong param_1,longlong param_2,undefined8 param_3,undefined2 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  *(undefined1 *)(param_1 + 0x12) = param_5;
  *(undefined1 *)(param_1 + 0x13) = param_6;
  *(undefined2 *)(param_1 + 0x10) = param_4;
  cVar1 = *(char *)(param_2 + 0xa8);
  uVar2 = *(uint *)(param_2 + 0x10);
  if (*(longlong *)(param_2 + 0x80) == 0) {
    uVar4 = 0;
  }
  else {
    iVar3 = CAkParameterNodeBase::GetDepth();
    uVar4 = (ulonglong)(iVar3 + 1);
  }
  *(ulonglong *)(param_1 + 0x20) =
       ((longlong)(((int)cVar1 >> 7) + 2) << 0x1d | uVar4) << 0x20 | (ulonglong)uVar2;
  return;
}



// FUNCTION 143176980 FUN_143176980 body=530 status=ok
// SIG undefined FUN_143176980(void)

ulonglong FUN_143176980(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
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
  undefined8 *puVar18;
  undefined4 *puVar19;
  longlong lVar20;
  longlong lVar21;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar21 = *param_1;
  if (param_3 == (ulonglong)uVar2 * 0x40 + lVar21) {
    uVar5 = *(undefined4 *)param_2;
    uVar6 = *(undefined4 *)((longlong)param_2 + 4);
    uVar7 = *(undefined4 *)(param_2 + 1);
    uVar8 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar9 = *(undefined4 *)(param_2 + 2);
    uVar10 = *(undefined4 *)((longlong)param_2 + 0x14);
    uVar11 = *(undefined4 *)(param_2 + 3);
    uVar12 = *(undefined4 *)((longlong)param_2 + 0x1c);
    uVar13 = *(undefined4 *)(param_2 + 4);
    uVar14 = *(undefined4 *)((longlong)param_2 + 0x24);
    uVar15 = *(undefined4 *)(param_2 + 5);
    uVar16 = *(undefined4 *)((longlong)param_2 + 0x2c);
    uVar4 = param_2[6];
    uVar17 = param_2[7];
    if ((uVar2 < *(uint *)((longlong)param_1 + 0xc)) ||
       ((puVar18 = (undefined8 *)FUN_143176560(param_1,1), (char)puVar18 != '\0' &&
        (uVar2 < *(uint *)((longlong)param_1 + 0xc))))) {
      uVar3 = *(uint *)(param_1 + 1);
      uVar2 = uVar3 + 1;
      puVar18 = (undefined8 *)(ulonglong)uVar2;
      *(uint *)(param_1 + 1) = uVar2;
      puVar19 = (undefined4 *)((ulonglong)uVar3 * 0x40 + *param_1);
      if (puVar19 != (undefined4 *)0x0) {
        *(undefined1 *)(puVar19 + 6) = 0xff;
        *(undefined1 *)(puVar19 + 8) = 0xff;
        *puVar19 = uVar5;
        puVar19[1] = uVar6;
        puVar19[2] = uVar7;
        puVar19[3] = uVar8;
        puVar19[4] = uVar9;
        puVar19[5] = uVar10;
        puVar19[6] = uVar11;
        puVar19[7] = uVar12;
        puVar19[8] = uVar13;
        puVar19[9] = uVar14;
        puVar19[10] = uVar15;
        puVar19[0xb] = uVar16;
        *(undefined8 *)(puVar19 + 0xc) = uVar4;
        *(undefined8 *)(puVar19 + 0xe) = uVar17;
        return CONCAT71((int7)((ulonglong)uVar17 >> 8),1);
      }
    }
  }
  else if ((uVar2 < *(uint *)((longlong)param_1 + 0xc)) ||
          ((puVar18 = (undefined8 *)FUN_143176560(param_1,1), (char)puVar18 != '\0' &&
           (uVar2 < *(uint *)((longlong)param_1 + 0xc))))) {
    uVar2 = *(uint *)(param_1 + 1);
    lVar20 = *param_1;
    *(uint *)(param_1 + 1) = uVar2 + 1;
    puVar18 = (undefined8 *)((ulonglong)uVar2 * 0x40 + lVar20);
    if (puVar18 != (undefined8 *)0x0) {
      *puVar18 = 0;
      *(undefined4 *)(puVar18 + 1) = 0;
      *(undefined4 *)(puVar18 + 2) = 0;
      *(undefined1 *)(puVar18 + 3) = 0xff;
      *(undefined1 *)(puVar18 + 4) = 0xff;
      puVar18[5] = 0;
      puVar18[6] = 0;
      puVar18[7] = 0;
      lVar20 = *param_1;
    }
    lVar21 = (param_3 - lVar21 >> 6 & 0xffffffffU) * 0x40;
    if ((undefined8 *)(lVar21 + lVar20) < puVar18) {
      puVar18 = puVar18 + -1;
      do {
        puVar18[1] = puVar18[-7];
        puVar18[2] = puVar18[-6];
        puVar18[3] = puVar18[-5];
        puVar18[4] = puVar18[-4];
        puVar18[5] = puVar18[-3];
        puVar18[6] = puVar18[-2];
        puVar18[7] = puVar18[-1];
        puVar18[8] = *puVar18;
        puVar1 = puVar18 + -7;
        lVar20 = *param_1;
        puVar18 = puVar18 + -8;
      } while ((undefined8 *)(lVar20 + lVar21) < puVar1);
    }
    puVar18 = (undefined8 *)(lVar21 + lVar20);
    if (puVar18 != (undefined8 *)0x0) {
      *puVar18 = 0;
      *(undefined4 *)(puVar18 + 1) = 0;
      *(undefined4 *)(puVar18 + 2) = 0;
      *(undefined1 *)(puVar18 + 3) = 0xff;
      *(undefined1 *)(puVar18 + 4) = 0xff;
      puVar18[5] = 0;
      puVar18[6] = 0;
      puVar18[7] = 0;
      lVar20 = *param_1;
    }
    puVar1 = (undefined8 *)(lVar21 + lVar20);
    if (puVar1 != (undefined8 *)0x0) {
      uVar4 = param_2[1];
      *puVar1 = *param_2;
      puVar1[1] = uVar4;
      uVar4 = param_2[3];
      puVar1[2] = param_2[2];
      puVar1[3] = uVar4;
      uVar4 = param_2[5];
      puVar1[4] = param_2[4];
      puVar1[5] = uVar4;
      puVar1[6] = param_2[6];
      uVar4 = param_2[7];
      puVar1[7] = uVar4;
      return CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
    }
  }
  return (ulonglong)puVar18 & 0xffffffffffffff00;
}



// FUNCTION 143176ba0 IsInfiniteLooping body=30 status=ok
// SIG undefined IsInfiniteLooping(void)

ulonglong CAkParameterNodeBase::IsInfiniteLooping(longlong param_1,longlong param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if ((param_1 != param_2) && (*(longlong **)(param_1 + 0x80) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000143176bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x228))();
    return uVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 143176bc0 IsException body=68 status=ok
// SIG undefined IsException(void)

undefined8 CAkParameterNodeBase::IsException(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = (int *)*param_2;
  piVar1 = piVar2 + (ulonglong)*(uint *)(param_2 + 1) * 2;
  for (; (piVar2 != piVar1 &&
         ((*(int *)(param_1 + 0x10) != *piVar2 ||
          (*(byte *)(param_1 + 0xa8) >> 7 != *(byte *)(piVar2 + 1))))); piVar2 = piVar2 + 2) {
  }
  piVar3 = (int *)0x0;
  if (piVar2 != piVar1) {
    piVar3 = piVar2;
  }
  return CONCAT71((int7)((ulonglong)piVar2 >> 8),piVar3 != (int *)0x0);
}



// FUNCTION 143176c10 FUN_143176c10 body=13 status=ok
// SIG undefined FUN_143176c10(void)

void FUN_143176c10(longlong *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143176c16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x228))(param_1,param_2,param_1);
  return;
}



// FUNCTION 143176c20 IsMidiBreakLoopOnNoteOff body=50 status=ok
// SIG undefined IsMidiBreakLoopOnNoteOff(void)

byte CAkParameterNodeBase::IsMidiBreakLoopOnNoteOff(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  bVar1 = *(byte *)(param_1 + 0xa9);
  lVar3 = *(longlong *)(param_1 + 0x80);
  while ((lVar2 = lVar3, (bVar1 & 0x20) == 0 && (lVar2 != 0))) {
    bVar1 = *(byte *)(lVar2 + 0xa9);
    param_1 = lVar2;
    lVar3 = *(longlong *)(lVar2 + 0x80);
  }
  return *(byte *)(param_1 + 0xaa) & 1;
}



// FUNCTION 143176c60 IsMidiNoteTracking body=167 status=ok
// SIG undefined IsMidiNoteTracking(void)

byte CAkParameterNodeBase::IsMidiNoteTracking(longlong param_1,undefined4 *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  undefined4 local_res8 [2];
  
  bVar1 = *(byte *)(param_1 + 0xa9);
  lVar3 = *(longlong *)(param_1 + 0x80);
  while ((lVar2 = lVar3, (bVar1 & 0x40) == 0 && (lVar2 != 0))) {
    bVar1 = *(byte *)(lVar2 + 0xa9);
    param_1 = lVar2;
    lVar3 = *(longlong *)(lVar2 + 0x80);
  }
  pbVar4 = *(byte **)(param_1 + 0x98);
  pbVar7 = (byte *)0x0;
  local_res8[0] = DAT_1467be1d4;
  if (pbVar4 != (byte *)0x0) {
    pbVar5 = pbVar7;
    do {
      uVar6 = (int)pbVar5 + 1;
      if (((byte *)(ulonglong)uVar6)[(longlong)pbVar4] == 0x2d) {
        pbVar7 = pbVar4 + (longlong)pbVar5 * 4 + ((ulonglong)(*pbVar4 + 4) & 0xfffffffc);
        break;
      }
      pbVar5 = (byte *)(ulonglong)uVar6;
    } while (uVar6 < *pbVar4);
  }
  pbVar4 = (byte *)local_res8;
  if (pbVar7 != (byte *)0x0) {
    pbVar4 = pbVar7;
  }
  *param_2 = *(undefined4 *)pbVar4;
  return *(byte *)(param_1 + 0xa9) >> 7;
}



// FUNCTION 143176d10 FUN_143176d10 body=232 status=ok
// SIG undefined FUN_143176d10(void)

undefined8 FUN_143176d10(longlong *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x80))();
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x80))(param_1);
  }
  lVar3 = param_1[0xd];
  if (lVar3 == 0) {
    if (param_2 == 0) {
      return 1;
    }
    puVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x28);
    param_1[0xd] = (longlong)puVar2;
    if (puVar2 == (undefined8 *)0x0) {
      return 0x34;
    }
    *puVar2 = 0;
    *(undefined2 *)(puVar2 + 1) = 0;
    *(undefined2 *)(puVar2 + 2) = 0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *(undefined2 *)(puVar2 + 3) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
    *(undefined2 *)(puVar2 + 4) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
    *(undefined1 *)((longlong)puVar2 + 0x24) = 0;
    lVar3 = param_1[0xd];
    if (lVar3 == 0) {
      return 0x34;
    }
  }
  *(byte *)(lVar3 + 0x24) = ~(byte)param_3 & *(byte *)(lVar3 + 0x24) | (byte)param_2 & (byte)param_3
  ;
  (**(code **)(*param_1 + 0x1c0))(param_1,param_2,param_3);
  (**(code **)(*param_1 + 0xf8))(param_1,param_2,param_3,0,0);
  return 1;
}



// FUNCTION 143176e00 Notification body=144 status=ok
// SIG undefined Notification(void)

void CAkParameterNodeBase::Notification
               (longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
               undefined8 param_5)

{
  char cVar1;
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  cVar1 = (**(code **)(*param_1 + 0x1f0))();
  if (cVar1 != '\0') {
    local_60 = *param_4;
    uStack_58 = param_4[1];
    local_50 = *(undefined4 *)(param_4 + 2);
    uStack_4c = *(undefined4 *)((longlong)param_4 + 0x14);
    uStack_48 = *(undefined4 *)(param_4 + 3);
    uStack_44 = *(undefined4 *)((longlong)param_4 + 0x1c);
    local_28 = param_5;
    local_40 = *(undefined4 *)(param_4 + 4);
    uStack_3c = *(undefined4 *)((longlong)param_4 + 0x24);
    uStack_38 = *(undefined4 *)(param_4 + 5);
    uStack_34 = *(undefined4 *)((longlong)param_4 + 0x2c);
    local_30 = 0;
    local_68[0] = param_2;
    local_20 = param_3;
    (**(code **)(*param_1 + 0xb8))(param_1,local_68);
  }
  return;
}



// FUNCTION 143176e90 FUN_143176e90 body=163 status=ok
// SIG undefined FUN_143176e90(void)

void FUN_143176e90(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  (**(code **)(*param_1 + 0x230))(param_1,local_res10);
  DAT_146b50f51 = local_res10[0] == 0;
  if (local_res10[0] == 0) {
    uVar1 = *(uint *)(param_1 + 0x14) & 0xe3ffffff;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x14) | 0x1c000000;
  }
  *(uint *)(param_1 + 0x14) = uVar1;
  if ((param_1[0x11] != local_res10[0]) && (param_1[0x11] = local_res10[0], param_1[0xf] != 0)) {
    CAkLEngine::ReevaluateGraph(1);
    (**(code **)(*param_1 + 400))(param_1,1);
  }
  return;
}



// FUNCTION 143176f40 Pause body=90 status=ok
// SIG undefined Pause(void)

void CAkParameterNodeBase::Pause
               (longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined2 local_18;
  undefined1 local_16;
  undefined2 local_15;
  undefined8 local_10;
  
  local_20 = param_5;
  local_1c = 0;
  local_15 = 0;
  local_10 = 0;
  local_18 = 0;
  local_16 = 0;
  local_38[0] = 1;
  local_30 = param_2;
  local_28 = param_3;
  local_24 = param_4;
  (**(code **)(*param_1 + 0x90))(param_1,local_38);
  return;
}



// FUNCTION 143176fa0 FUN_143176fa0 body=96 status=ok
// SIG undefined FUN_143176fa0(void)

ulonglong FUN_143176fa0(undefined4 param_1,undefined4 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  plVar1 = (longlong *)CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,param_1,0);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 2;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x138))(plVar1,param_2);
    if ((int)uVar2 != 1) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      return uVar2 & 0xffffffff;
    }
  }
  return uVar2;
}



// FUNCTION 143177000 FUN_143177000 body=583 status=ok
// SIG undefined FUN_143177000(void)

undefined4 FUN_143177000(longlong param_1,undefined4 *param_2,char param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  short sVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *local_res8;
  
  uVar6 = 1;
  sVar5 = CAkParameterNodeBase::GetMaxNumInstances(param_1,*(undefined8 *)(param_2 + 2));
  plVar10 = *(longlong **)(param_1 + 0x78);
  if (plVar10 == (longlong *)0x0) {
    return 1;
  }
  plVar9 = (longlong *)*plVar10;
  lVar2 = *(longlong *)(param_2 + 2);
  plVar10 = plVar9 + (ulonglong)*(uint *)(plVar10 + 1) * 2;
  for (; (plVar9 != plVar10 && (*plVar9 != lVar2)); plVar9 = plVar9 + 2) {
  }
  plVar11 = (longlong *)0x0;
  plVar8 = plVar9 + 1;
  if (plVar9 == plVar10) {
    plVar8 = plVar11;
  }
  if (plVar8 != (longlong *)0x0) {
    if (param_3 != '\0') {
      lVar3 = *plVar8;
      if (lVar3 != 0) {
        plVar11 = (longlong *)(ulonglong)*(ushort *)(lVar3 + 0x10);
      }
      sVar5 = (short)plVar11;
      if ((((*(char *)((longlong)param_2 + 0x1d) != '\0') && (lVar3 != 0)) &&
          (*(short *)(lVar3 + 0x10) != 0)) &&
         ((int)plVar11 <=
          (int)(((uint)*(ushort *)(lVar3 + 0x28) - (uint)*(ushort *)((longlong)param_2 + 0x1a)) -
               (uint)*(ushort *)(lVar3 + 0x2a)))) {
        local_res8 = (undefined8 *)0x0;
        uVar6 = FUN_143160a80(lVar3,plVar11,*param_2,lVar2,*(byte *)(param_1 + 0xa8) & 1,
                              *(byte *)(param_1 + 0xa8) >> 1 & 1,&local_res8,1);
        *(short *)((longlong)param_2 + 0x1a) = *(short *)((longlong)param_2 + 0x1a) + 1;
      }
      goto LAB_143177202;
    }
    if (plVar8 != (longlong *)0x0) goto LAB_143177202;
  }
  sVar5 = CAkParameterNodeBase::GetMaxNumInstances(param_1,lVar2);
  bVar1 = *(byte *)(param_1 + 0xa8);
  uVar4 = *(undefined8 *)(param_2 + 2);
  puVar7 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x30);
  local_res8 = puVar7;
  if (puVar7 == (undefined8 *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    *puVar7 = 0;
    puVar7[1] = 0;
    *(undefined4 *)(puVar7 + 2) = 0;
    *(undefined4 *)(puVar7 + 5) = 0;
    FUN_143176900(puVar7,param_1,uVar4,sVar5,bVar1 & 1,bVar1 >> 1 & 1);
    plVar8 = (longlong *)FUN_143178210(*(undefined8 *)(param_1 + 0x78),uVar4,&local_res8);
    if (plVar8 != (longlong *)0x0) goto LAB_143177202;
    if ((void *)*puVar7 != (void *)0x0) {
      *(undefined4 *)(puVar7 + 1) = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*puVar7);
      *puVar7 = 0;
      *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    }
    AK::MemoryMgr::Free(g_DefaultPoolId,puVar7);
  }
  uVar6 = 2;
LAB_143177202:
  if (((plVar8 != (longlong *)0x0) && (sVar5 != 0)) && (*(longlong *)(param_2 + 4) != 0)) {
    FUN_143173890(*(longlong *)(param_2 + 4),*plVar8);
  }
  return uVar6;
}



// FUNCTION 143177250 FUN_143177250 body=266 status=ok
// SIG undefined FUN_143177250(void)

undefined4 FUN_143177250(longlong param_1,undefined4 *param_2,char param_3)

{
  longlong lVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  ushort uVar5;
  undefined8 local_res8;
  
  uVar2 = CAkParameterNodeBase::GetMaxNumInstances(param_1,0);
  if (*(longlong *)(param_1 + 0x78) == 0) {
    FUN_143174690(param_1);
  }
  if (uVar2 != 0) {
    if ((*(longlong *)(param_2 + 4) != 0) && (*(longlong *)(param_1 + 0x78) != 0)) {
      FUN_143173890(*(longlong *)(param_2 + 4),*(longlong *)(param_1 + 0x78) + 0x20);
    }
    if (param_3 != '\0') {
      if (*(char *)((longlong)param_2 + 0x1d) == '\0') {
        return 1;
      }
      if (*(short *)((longlong)param_2 + 0x1a) != 0) {
        return 1;
      }
      lVar1 = *(longlong *)(param_1 + 0x78);
      if (lVar1 == 0) {
        uVar5 = 0;
        uVar3 = 0;
      }
      else {
        uVar5 = *(ushort *)(lVar1 + 0x48);
        uVar3 = *(ushort *)(lVar1 + 0x4a);
      }
      if ((int)((uint)uVar5 - (uint)uVar3) < (int)(uint)uVar2) {
        return 1;
      }
      local_res8 = 0;
      uVar4 = FUN_143160a80(lVar1 + 0x20,uVar2,*param_2,0,*(byte *)(param_1 + 0xa8) & 1,
                            *(byte *)(param_1 + 0xa8) >> 1 & 1,&local_res8,1);
      *(short *)((longlong)param_2 + 0x1a) = *(short *)((longlong)param_2 + 0x1a) + 1;
      return uVar4;
    }
  }
  return 1;
}



// FUNCTION 143177360 FUN_143177360 body=1355 status=ok
// SIG undefined FUN_143177360(void)

void FUN_143177360(ulonglong param_1,undefined8 param_2,ulonglong *param_3,char param_4)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  uVar11 = 0;
  bVar2 = false;
  uVar12 = param_1;
  uVar9 = uVar11;
  if (-1 < *(char *)(param_1 + 0xa8)) {
    uVar12 = uVar11;
    uVar9 = param_1;
  }
  for (; uVar9 != 0; uVar9 = *(ulonglong *)(uVar9 + 0x80)) {
    if ((*param_3 & (~uVar11 | 0x120df)) == 0) break;
    puVar10 = *(ulonglong **)(uVar9 + 0x38);
    uVar5 = (ulonglong)*(uint *)(uVar9 + 0xa0) << 0x11;
    uVar6 = uVar5 | 0x1ff87e3fffe0000;
    if (*(ulonglong *)(uVar9 + 0x80) != 0) {
      uVar6 = uVar5;
    }
    uVar5 = (uVar6 | 0x120df) & *param_3 & ~uVar11;
    if (puVar10 != (ulonglong *)0x0) {
      uVar8 = *puVar10;
      if ((uVar5 & uVar8) == 0) {
        cVar3 = FUN_1431abd70(puVar10 + 2,param_2);
        if ((cVar3 != '\0') && ((int)puVar10[3] == 0)) {
          puVar10[1] = 0xffffffffffffffff;
          uVar8 = puVar10[2];
          uVar7 = (ulonglong)(uint)puVar10[3] * 0x40 + uVar8;
          for (; uVar8 != uVar7; uVar8 = uVar8 + 0x40) {
            puVar10[1] = puVar10[1] & *(ulonglong *)(uVar8 + 0x30);
          }
        }
      }
      else {
        if ((int)puVar10[3] == 0) {
          FUN_143132ba0(g_pRTPCMgr,uVar9 + 0x30,*puVar10);
          puVar10 = *(ulonglong **)(uVar9 + 0x38);
        }
        FUN_143173c10(puVar10,param_2,uVar5 & uVar8);
      }
    }
    lVar1 = *(longlong *)(uVar9 + 0x28);
    if (lVar1 != 0) {
      if ((*(ulonglong *)(lVar1 + 0x10) & uVar5) == 0) {
        CAkParamNodeStateTargetData::RemoveTarget(lVar1 + 0x10,param_2);
      }
      else {
        FUN_143173ad0();
      }
    }
    puVar10 = *(ulonglong **)(uVar9 + 0x50);
    if (puVar10 != (ulonglong *)0x0) {
      uVar8 = *puVar10;
      if ((uVar8 & uVar5) == 0) {
        cVar3 = FUN_1431abd70(puVar10 + 2,param_2);
        if ((cVar3 != '\0') && ((int)puVar10[3] == 0)) {
          puVar10[1] = 0xffffffffffffffff;
          uVar5 = puVar10[2];
          uVar8 = (ulonglong)(uint)puVar10[3] * 0x40 + uVar5;
          for (; uVar5 != uVar8; uVar5 = uVar5 + 0x40) {
            puVar10[1] = puVar10[1] & *(ulonglong *)(uVar5 + 0x30);
          }
        }
      }
      else {
        if ((int)puVar10[3] == 0) {
          FUN_143132ba0(g_pRTPCMgr,uVar9 + 0x48,*puVar10);
          puVar10 = *(ulonglong **)(uVar9 + 0x50);
        }
        FUN_143173c10(puVar10,param_2,uVar8 & uVar5);
      }
    }
    uVar11 = uVar11 | uVar6;
    if ((((param_4 != '\0') && (uVar12 == 0)) && (uVar6 = *(ulonglong *)(uVar9 + 0x88), uVar6 != 0))
       && (cVar3 = CAkBus::IsMixingBus(uVar6), uVar12 = uVar6, cVar3 != '\0')) {
      uVar11 = uVar11 | 0x380000000020;
      bVar2 = true;
    }
  }
  if (uVar12 != 0) {
    uVar9 = *param_3;
    uVar6 = uVar9 & (~uVar11 | 0x3800000100bf);
    while (uVar6 != 0) {
      uVar6 = uVar11 & 0xffffc7ffffffffdf;
      if (bVar2) {
        uVar6 = uVar11;
      }
      uVar4 = 0;
      if (*(ulonglong *)(uVar12 + 0x88) != 0) {
        uVar4 = *(uint *)(uVar12 + 0xa0);
      }
      puVar10 = *(ulonglong **)(uVar12 + 0x38);
      uVar9 = ((ulonglong)uVar4 << 0x11 | 0x7fbf9ffffd00bf) & ~uVar6 & uVar9;
      if (puVar10 != (ulonglong *)0x0) {
        uVar11 = *puVar10;
        if ((uVar11 & uVar9) == 0) {
          cVar3 = FUN_1431abd70(puVar10 + 2,param_2);
          if ((cVar3 != '\0') && ((int)puVar10[3] == 0)) {
            puVar10[1] = 0xffffffffffffffff;
            uVar11 = puVar10[2];
            uVar5 = (ulonglong)(uint)puVar10[3] * 0x40 + uVar11;
            for (; uVar11 != uVar5; uVar11 = uVar11 + 0x40) {
              puVar10[1] = puVar10[1] & *(ulonglong *)(uVar11 + 0x30);
            }
          }
        }
        else {
          if ((int)puVar10[3] == 0) {
            FUN_143132ba0(g_pRTPCMgr,uVar12 + 0x30,*puVar10);
            puVar10 = *(ulonglong **)(uVar12 + 0x38);
          }
          FUN_143173c10(puVar10,param_2,uVar11 & uVar9);
        }
      }
      lVar1 = *(longlong *)(uVar12 + 0x28);
      if (lVar1 != 0) {
        if ((*(ulonglong *)(lVar1 + 0x10) & uVar9) == 0) {
          CAkParamNodeStateTargetData::RemoveTarget(lVar1 + 0x10,param_2);
        }
        else {
          FUN_143173ad0();
        }
      }
      puVar10 = *(ulonglong **)(uVar12 + 0x168);
      if (puVar10 != (ulonglong *)0x0) {
        uVar11 = *puVar10;
        if ((uVar11 & uVar9) == 0) {
          cVar3 = FUN_1431abd70(puVar10 + 2,param_2);
          if ((cVar3 != '\0') && ((int)puVar10[3] == 0)) {
            puVar10[1] = 0xffffffffffffffff;
            uVar11 = puVar10[2];
            uVar5 = (ulonglong)(uint)puVar10[3] * 0x40 + uVar11;
            for (; uVar11 != uVar5; uVar11 = uVar11 + 0x40) {
              puVar10[1] = puVar10[1] & *(ulonglong *)(uVar11 + 0x30);
            }
          }
        }
        else {
          if ((int)puVar10[3] == 0) {
            FUN_143132ba0(g_pRTPCMgr,uVar12 + 0x160,*puVar10);
            puVar10 = *(ulonglong **)(uVar12 + 0x168);
          }
          FUN_143173c10(puVar10,param_2,uVar11 & uVar9);
        }
      }
      puVar10 = *(ulonglong **)(uVar12 + 0x50);
      if (puVar10 != (ulonglong *)0x0) {
        uVar11 = *puVar10;
        if ((uVar9 & uVar11) == 0) {
          cVar3 = FUN_1431abd70(puVar10 + 2,param_2);
          if ((cVar3 != '\0') && ((int)puVar10[3] == 0)) {
            puVar10[1] = 0xffffffffffffffff;
            uVar11 = puVar10[2];
            uVar9 = (ulonglong)(uint)puVar10[3] * 0x40 + uVar11;
            for (; uVar11 != uVar9; uVar11 = uVar11 + 0x40) {
              puVar10[1] = puVar10[1] & *(ulonglong *)(uVar11 + 0x30);
            }
          }
        }
        else {
          if ((int)puVar10[3] == 0) {
            FUN_143132ba0(g_pRTPCMgr,uVar12 + 0x48,*puVar10);
            puVar10 = *(ulonglong **)(uVar12 + 0x50);
          }
          FUN_143173c10(puVar10,param_2,uVar9 & uVar11);
        }
      }
      uVar11 = uVar6 | (ulonglong)uVar4 << 0x11;
      uVar12 = *(ulonglong *)(uVar12 + 0x88);
      if (uVar12 == 0) {
        return;
      }
      if ((!bVar2) && (cVar3 = CAkBus::IsMixingBus(uVar12), cVar3 != '\0')) {
        uVar11 = uVar11 | 0x380000000020;
        bVar2 = true;
      }
      uVar9 = *param_3;
      uVar6 = uVar9 & (~uVar11 | 0x3800000100bf);
    }
  }
  return;
}



// FUNCTION 1431778b0 Release body=319 status=ok
// SIG undefined Release(void)

undefined4 CAkParameterNodeBase::Release(longlong *param_1)

{
  int *piVar1;
  WORD *pWVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  long lVar8;
  longlong lVar9;
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;
  
  lpCriticalSection =
       (LPCRITICAL_SECTION)
       CAkAudioLibIndex::GetNodeIndex(DAT_146b50af8,*(byte *)(param_1 + 0x15) >> 7);
  EnterCriticalSection(lpCriticalSection);
  piVar1 = (int *)((longlong)param_1 + 0x14);
  *piVar1 = *piVar1 + -1;
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x14);
  if (*piVar1 == 0) {
    uVar4 = *(uint *)(param_1 + 2);
    lpCriticalSection_00 = (LPCRITICAL_SECTION)CAkAudioLibIndex::GetNodeIndex(DAT_146b50af8);
    EnterCriticalSection(lpCriticalSection_00);
    if (lpCriticalSection_00[1].LockCount != 0) {
      pWVar2 = &(lpCriticalSection_00[1].DebugInfo)->Type +
               ((ulonglong)uVar4 % (ulonglong)(uint)lpCriticalSection_00[1].LockCount) * 4;
      lVar9 = *(longlong *)pWVar2;
      lVar7 = 0;
      while (lVar6 = lVar9, lVar6 != 0) {
        if (*(uint *)(lVar6 + 0x10) == uVar4) {
          if (lVar7 == 0) {
            *(longlong *)pWVar2 = *(longlong *)(lVar6 + 8);
          }
          else {
            *(longlong *)(lVar7 + 8) = *(longlong *)(lVar6 + 8);
          }
          *(int *)&lpCriticalSection_00[1].OwningThread =
               *(int *)&lpCriticalSection_00[1].OwningThread + -1;
          break;
        }
        lVar7 = lVar6;
        lVar9 = *(longlong *)(lVar6 + 8);
      }
    }
    LeaveCriticalSection(lpCriticalSection_00);
    (**(code **)(*param_1 + 0x28))(param_1);
    FUN_143178160(param_1);
    plVar5 = (longlong *)param_1[0x10];
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x60))(plVar5,param_1);
    }
    plVar5 = (longlong *)param_1[0x11];
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x60))(plVar5,param_1);
    }
    lVar8 = g_DefaultPoolId;
    (**(code **)*param_1)(param_1,0);
    AK::MemoryMgr::Free(lVar8,param_1);
  }
  LeaveCriticalSection(lpCriticalSection);
  return uVar3;
}



// FUNCTION 1431779f0 FUN_1431779f0 body=159 status=ok
// SIG undefined FUN_1431779f0(void)

void FUN_1431779f0(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint uVar4;
  char local_res8 [8];
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = *(undefined8 *)(param_2 + 0x2a0);
  local_10 = *(undefined4 *)(param_2 + 0x2a8);
  puVar1 = (undefined8 *)FUN_143173e70(local_18,&local_18,local_res8);
  uVar4 = *(uint *)(param_1 + 1);
  if (local_res8[0] != '\0') {
    puVar2 = (undefined8 *)(*param_1 + (ulonglong)uVar4 * 8 + -8);
    if (puVar1 < puVar2) {
      lVar3 = ((ulonglong)((longlong)puVar2 + (-1 - (longlong)puVar1)) >> 3) + 1;
      puVar2 = puVar1;
      for (; puVar1 = puVar1 + 1, lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar2 = *puVar1;
        puVar2 = puVar2 + 1;
      }
      uVar4 = *(uint *)(param_1 + 1);
    }
    uVar4 = uVar4 - 1;
    *(uint *)(param_1 + 1) = uVar4;
  }
  if (uVar4 == 0) {
    CAkURenderer::RemoveLimiter(param_1);
  }
  if (local_res8[0] != '\0') {
    *(short *)(param_1 + 5) = (short)param_1[5] + -1;
  }
  return;
}



// FUNCTION 143177a90 FUN_143177a90 body=50 status=ok
// SIG undefined FUN_143177a90(void)

void FUN_143177a90(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x78);
  if (((lVar2 != 0) && ((*(byte *)(lVar2 + 0x58) & 2) != 0)) && (*(short *)(lVar2 + 0x54) == 0)) {
    CAkURenderer::RemoveFromActiveNodes();
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x78) + 0x58);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  return;
}



// FUNCTION 143177af0 RemoveTarget body=120 status=ok
// SIG undefined RemoveTarget(void)

void CAkParamNodeStateTargetData::RemoveTarget(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(param_1 + 0x10);
  uVar4 = 0;
  if (uVar6 != 0) {
    while( true ) {
      puVar2 = (undefined8 *)(uVar4 * 0x10 + *(longlong *)(param_1 + 8));
      if (puVar2[1] == param_2) break;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      if (uVar6 <= uVar3) {
        return;
      }
    }
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 8) + -0x10 + (ulonglong)uVar6 * 0x10);
    if (puVar2 < puVar5) {
      do {
        puVar1 = puVar2 + 2;
        *puVar2 = puVar2[2];
        puVar2[1] = puVar2[3];
        puVar2 = puVar1;
      } while (puVar1 < puVar5);
      uVar6 = *(uint *)(param_1 + 0x10);
    }
    *(uint *)(param_1 + 0x10) = uVar6 - 1;
  }
  return;
}



// FUNCTION 143177b70 FUN_143177b70 body=211 status=ok
// SIG undefined FUN_143177b70(void)

undefined8 FUN_143177b70(longlong *param_1,ulonglong param_2,char param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = param_1[0xd];
  if (lVar3 == 0) {
    if (param_3 == '\0') {
      return 1;
    }
    puVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x28);
    param_1[0xd] = (longlong)puVar2;
    if (puVar2 == (undefined8 *)0x0) {
      return 0x34;
    }
    *puVar2 = 0;
    *(undefined2 *)(puVar2 + 1) = 0;
    *(undefined2 *)(puVar2 + 2) = 0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *(undefined2 *)(puVar2 + 3) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
    *(undefined2 *)(puVar2 + 4) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
    *(undefined1 *)((longlong)puVar2 + 0x24) = 0;
    lVar3 = param_1[0xd];
    if (lVar3 == 0) {
      return 0x34;
    }
  }
  lVar1 = (param_2 & 0xffffffff) * 8;
  *(char *)(lVar1 + 8 + lVar3) = param_3;
  lVar3 = param_1[0xd];
  if ((param_3 != '\0') && (*(int *)(lVar1 + 4 + lVar3) != 0)) {
    *(undefined1 *)(lVar1 + 9 + lVar3) = 0;
    *(undefined4 *)(lVar1 + 4 + lVar3) = 0;
    (**(code **)(*param_1 + 400))(param_1,0);
    (**(code **)(*param_1 + 0x110))(param_1,param_2 & 0xffffffff);
  }
  return 1;
}



// FUNCTION 143177c50 FUN_143177c50 body=652 status=ok
// SIG undefined FUN_143177c50(void)

void FUN_143177c50(longlong *param_1,undefined8 *param_2,float *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  bool bVar16;
  bool bVar17;
  char local_res10 [8];
  undefined8 local_28;
  float local_20;
  
  local_28 = *param_2;
  local_20 = *(float *)(param_2 + 1);
  plVar7 = (longlong *)FUN_143173e70(local_28,&local_28,local_res10);
  if (local_res10[0] == '\0') {
    return;
  }
  uVar14 = (int)param_1[1] - 1;
  uVar15 = (ulonglong)uVar14;
  lVar5 = *param_1;
  uVar13 = (longlong)plVar7 - lVar5 >> 3;
  uVar12 = (uint)uVar13;
  if (uVar12 != 0) {
    fVar2 = *param_3;
    lVar8 = *(longlong *)(lVar5 + (ulonglong)(uVar12 - 1) * 8);
    uVar9 = (ulonglong)(uVar12 - 1);
    fVar3 = *(float *)(lVar8 + 0x2a0);
    if (fVar2 == fVar3) {
      fVar3 = *(float *)(lVar8 + 0x2a8);
      fVar4 = param_3[2];
      if (*(char *)((longlong)param_1 + 0x12) == '\0') {
        bVar17 = (uint)fVar4 < (uint)fVar3;
        bVar16 = false;
        if (fVar4 == fVar3) {
          bVar17 = (uint)param_3[1] < (uint)*(float *)(lVar8 + 0x2a4);
          bVar16 = param_3[1] == *(float *)(lVar8 + 0x2a4);
        }
        goto LAB_143177d0e;
      }
      bVar16 = (uint)fVar4 < (uint)fVar3;
      if (fVar4 == fVar3) {
        bVar16 = (uint)param_3[1] < (uint)*(float *)(lVar8 + 0x2a4);
      }
    }
    else {
      bVar16 = fVar2 == fVar3;
      bVar17 = fVar2 < fVar3;
LAB_143177d0e:
      bVar16 = !bVar17 && !bVar16;
    }
    if (bVar16) {
      if (uVar12 < 2) goto LAB_143177d71;
      lVar6 = *(longlong *)(lVar5 + (ulonglong)(uVar12 - 2) * 8);
      fVar3 = *(float *)(lVar6 + 0x2a0);
      if (fVar2 == fVar3) {
        fVar2 = *(float *)(lVar6 + 0x2a8);
        fVar3 = param_3[2];
        if (*(char *)((longlong)param_1 + 0x12) != '\0') {
          bVar17 = (uint)fVar3 < (uint)fVar2;
          bVar16 = false;
          if (fVar3 == fVar2) {
            bVar17 = (uint)param_3[1] < (uint)*(float *)(lVar6 + 0x2a4);
            bVar16 = param_3[1] == *(float *)(lVar6 + 0x2a4);
          }
          goto LAB_143177d66;
        }
        bVar16 = (uint)fVar3 < (uint)fVar2;
        if (fVar3 == fVar2) {
          bVar16 = (uint)param_3[1] < (uint)*(float *)(lVar6 + 0x2a4);
        }
      }
      else {
        bVar16 = fVar3 == fVar2;
        bVar17 = fVar3 < fVar2;
LAB_143177d66:
        bVar16 = !bVar17 && !bVar16;
      }
      if (bVar16) goto LAB_143177d71;
      goto LAB_143177e54;
    }
  }
  if (uVar14 <= uVar12) {
    return;
  }
  fVar2 = *param_3;
  lVar8 = *(longlong *)(lVar5 + (ulonglong)(uVar12 + 1) * 8);
  uVar9 = (ulonglong)(uVar12 + 1);
  fVar3 = *(float *)(lVar8 + 0x2a0);
  if (fVar2 == fVar3) {
    fVar3 = *(float *)(lVar8 + 0x2a8);
    fVar4 = param_3[2];
    if (*(char *)((longlong)param_1 + 0x12) != '\0') {
      bVar17 = (uint)fVar4 < (uint)fVar3;
      bVar16 = false;
      if (fVar4 == fVar3) {
        bVar17 = (uint)param_3[1] < (uint)*(float *)(lVar8 + 0x2a4);
        bVar16 = param_3[1] == *(float *)(lVar8 + 0x2a4);
      }
      goto LAB_143177deb;
    }
    bVar16 = (uint)fVar4 < (uint)fVar3;
    if (fVar4 == fVar3) {
      bVar16 = (uint)param_3[1] < (uint)*(float *)(lVar8 + 0x2a4);
    }
  }
  else {
    bVar16 = fVar3 == fVar2;
    bVar17 = fVar3 < fVar2;
LAB_143177deb:
    bVar16 = !bVar17 && !bVar16;
  }
  if (!bVar16) {
    return;
  }
  if ((int)param_1[1] - 2U <= uVar12) goto LAB_143177d71;
  lVar6 = *(longlong *)(lVar5 + (ulonglong)(uVar12 + 2) * 8);
  fVar3 = *(float *)(lVar6 + 0x2a0);
  if (fVar2 == fVar3) {
    fVar2 = *(float *)(lVar6 + 0x2a8);
    fVar3 = param_3[2];
    if (*(char *)((longlong)param_1 + 0x12) == '\0') {
      bVar17 = (uint)fVar3 < (uint)fVar2;
      bVar16 = false;
      if (fVar3 == fVar2) {
        bVar17 = (uint)param_3[1] < (uint)*(float *)(lVar6 + 0x2a4);
        bVar16 = param_3[1] == *(float *)(lVar6 + 0x2a4);
      }
      goto LAB_143177e49;
    }
    bVar16 = (uint)fVar3 < (uint)fVar2;
    if (fVar3 == fVar2) {
      bVar16 = (uint)param_3[1] < (uint)*(float *)(lVar6 + 0x2a4);
    }
  }
  else {
    bVar16 = fVar2 == fVar3;
    bVar17 = fVar2 < fVar3;
LAB_143177e49:
    bVar16 = !bVar17 && !bVar16;
  }
  if (!bVar16) {
LAB_143177e54:
    local_28 = *(undefined8 *)param_3;
    local_20 = param_3[2];
    lVar8 = FUN_143173e70(param_1,&local_28,local_res10);
    if (lVar8 != 0) {
      uVar9 = lVar8 - lVar5 >> 3;
      uVar14 = (uint)uVar9;
      uVar15 = (ulonglong)(uVar14 - 1);
      if (uVar14 <= uVar12) {
        uVar15 = uVar9 & 0xffffffff;
      }
    }
    puVar1 = (undefined8 *)(lVar5 + uVar15 * 8);
    puVar11 = (undefined8 *)(lVar5 + (uVar13 & 0xffffffff) * 8);
    if (puVar11 != puVar1) {
      if ((uint)uVar15 < uVar12) {
        do {
          puVar10 = puVar11 + -1;
          *puVar11 = puVar11[-1];
          puVar11 = puVar10;
        } while (puVar10 != puVar1);
        *puVar1 = *param_4;
        return;
      }
      do {
        puVar10 = puVar11 + 1;
        *puVar11 = puVar11[1];
        puVar11 = puVar10;
      } while (puVar10 != puVar1);
    }
    *puVar1 = *param_4;
    return;
  }
LAB_143177d71:
  *(longlong *)(lVar5 + uVar9 * 8) = *plVar7;
  *plVar7 = lVar8;
  return;
}



// FUNCTION 143177ee0 FUN_143177ee0 body=367 status=ok
// SIG undefined FUN_143177ee0(void)

void FUN_143177ee0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  longlong *plVar2;
  byte *pbVar3;
  uint uVar4;
  longlong lVar5;
  
  plVar2 = (longlong *)param_1[0xc];
  if ((plVar2 != (longlong *)0x0) &&
     (lVar5 = *plVar2, lVar5 != (ulonglong)*(uint *)(plVar2 + 1) * 0x10 + lVar5)) {
    do {
      pbVar3 = *(byte **)(*(longlong *)(lVar5 + 8) + 0x18);
      if (pbVar3 != (byte *)0x0) {
        uVar4 = 0;
        do {
          uVar1 = uVar4 + 1;
          if (pbVar3[uVar1] == (byte)param_2) {
            if (((float *)(pbVar3 + (ulonglong)uVar4 * 0x10 +
                                    ((ulonglong)(*pbVar3 + 4) & 0xfffffffc)) != (float *)0x0) &&
               (*(float *)(pbVar3 + (ulonglong)uVar4 * 0x10 +
                                    ((ulonglong)(*pbVar3 + 4) & 0xfffffffc)) != 0.0)) {
              (**(code **)(*param_1 + 0x168))
                        (param_1,param_2,*(undefined8 *)(*(longlong *)(lVar5 + 8) + 0x10),0,0,4,0);
            }
            break;
          }
          uVar4 = uVar1;
        } while (uVar1 < *pbVar3);
      }
      lVar5 = lVar5 + 0x10;
    } while (lVar5 != (ulonglong)*(uint *)((longlong *)param_1[0xc] + 1) * 0x10 +
                      *(longlong *)param_1[0xc]);
  }
  if ((param_1[0xb] != 0) && (pbVar3 = *(byte **)(param_1[0xb] + 0x18), pbVar3 != (byte *)0x0)) {
    uVar4 = 0;
    do {
      uVar1 = uVar4 + 1;
      if (pbVar3[uVar1] == (byte)param_2) {
        if ((float *)(pbVar3 + (ulonglong)uVar4 * 0x10 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc)) ==
            (float *)0x0) {
          return;
        }
        if (*(float *)(pbVar3 + (ulonglong)uVar4 * 0x10 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc))
            == 0.0) {
          return;
        }
        (**(code **)(*param_1 + 0x168))(param_1,param_2,0,0,0,param_3,param_4);
        return;
      }
      uVar4 = uVar1;
    } while (uVar1 < *pbVar3);
  }
  return;
}



// FUNCTION 143178050 ResetBypassFX body=45 status=ok
// SIG undefined ResetBypassFX(void)

void CAkParameterNodeBase::ResetBypassFX(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  if (*(longlong *)(param_1 + 0x68) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x68) + 0x24);
  }
  FUN_143173fb0(param_1,uVar1,param_2,param_3,1);
  return;
}



// FUNCTION 143178080 ResetFXBypass body=126 status=ok
// SIG undefined ResetFXBypass(void)

void CAkParameterNodeBase::ResetFXBypass(longlong param_1,byte param_2,byte param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x58);
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0x20) = ~param_3 & *(byte *)(lVar2 + 0x20) | param_3 & param_2;
  }
  plVar1 = *(longlong **)(param_1 + 0x60);
  if ((plVar1 != (longlong *)0x0) &&
     (lVar2 = *plVar1, lVar2 != (ulonglong)*(uint *)(plVar1 + 1) * 0x10 + lVar2)) {
    do {
      plVar1 = (longlong *)(lVar2 + 8);
      lVar2 = lVar2 + 0x10;
      *(byte *)(*plVar1 + 0x20) = *(byte *)(*plVar1 + 0x20) & ~param_3 | param_2 & param_3;
    } while (lVar2 != (ulonglong)*(uint *)(*(longlong **)(param_1 + 0x60) + 1) * 0x10 +
                      **(longlong **)(param_1 + 0x60));
  }
  return;
}



// FUNCTION 143178100 Resume body=90 status=ok
// SIG undefined Resume(void)

void CAkParameterNodeBase::Resume
               (longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined2 local_18;
  undefined1 local_16;
  undefined2 local_15;
  undefined8 local_10;
  
  local_20 = param_5;
  local_1c = 0;
  local_15 = 0;
  local_10 = 0;
  local_18 = 0;
  local_16 = 0;
  local_38[0] = 2;
  local_30 = param_2;
  local_28 = param_3;
  local_24 = param_4;
  (**(code **)(*param_1 + 0x90))(param_1,local_38);
  return;
}



// FUNCTION 143178160 FUN_143178160 body=165 status=ok
// SIG undefined FUN_143178160(void)

void FUN_143178160(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x78) != 0) {
    if (((((*(longlong *)(param_1 + 0x80) != 0) &&
          (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x78), lVar1 != 0)) &&
         (*(short *)(lVar1 + 0x50) < 1)) &&
        ((*(short *)(lVar1 + 0x54) < 1 && (*(short *)(lVar1 + 0x48) == 0)))) &&
       ((*(short *)(lVar1 + 0x4a) == 0 &&
        ((*(longlong *)(lVar1 + 0x18) == 0 && (*(int *)(lVar1 + 8) == 0)))))) {
      FUN_143174500();
    }
    if ((((*(longlong *)(param_1 + 0x88) != 0) &&
         (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x78), lVar1 != 0)) &&
        (*(short *)(lVar1 + 0x50) < 1)) &&
       (((*(short *)(lVar1 + 0x54) < 1 && (*(short *)(lVar1 + 0x48) == 0)) &&
        ((*(short *)(lVar1 + 0x4a) == 0 &&
         ((*(longlong *)(lVar1 + 0x18) == 0 && (*(int *)(lVar1 + 8) == 0)))))))) {
      FUN_143174500();
      return;
    }
  }
  return;
}



// FUNCTION 143178210 FUN_143178210 body=340 status=ok
// SIG undefined FUN_143178210(void)

longlong * FUN_143178210(longlong *param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  
  plVar6 = (longlong *)*param_1;
  uVar2 = *(uint *)(param_1 + 1);
  plVar5 = plVar6 + (ulonglong)uVar2 * 2;
  for (; (plVar6 != plVar5 && (*plVar6 != param_2)); plVar6 = plVar6 + 2) {
  }
  plVar9 = plVar6 + 1;
  if (plVar6 == plVar5) {
    plVar9 = (longlong *)0x0;
  }
  if (plVar9 != (longlong *)0x0) {
    *plVar9 = *param_3;
    return plVar9;
  }
  if (*(uint *)((longlong)param_1 + 0xc) <= uVar2) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc) + 1;
    puVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 4);
    if (puVar4 == (undefined8 *)0x0) {
      return (longlong *)0x0;
    }
    puVar8 = (undefined8 *)*param_1;
    if ((puVar8 != (undefined8 *)0x0) && (puVar8 != puVar4)) {
      uVar10 = (ulonglong)*(uint *)(param_1 + 1);
      puVar7 = puVar4;
      if (uVar10 != 0) {
        do {
          if (puVar7 != (undefined8 *)0x0) {
            puVar7[1] = 0;
          }
          puVar8 = (undefined8 *)((longlong)puVar7 + (*param_1 - (longlong)puVar4));
          uVar3 = puVar8[1];
          *puVar7 = *puVar8;
          puVar7[1] = uVar3;
          uVar10 = uVar10 - 1;
          puVar7 = puVar7 + 2;
        } while (uVar10 != 0);
        puVar8 = (undefined8 *)*param_1;
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar8);
    }
    plVar6 = (longlong *)0x0;
    *param_1 = (longlong)puVar4;
    *(uint *)((longlong)param_1 + 0xc) = uVar1;
    if (uVar1 <= uVar2) goto LAB_143178331;
  }
  uVar2 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar2 + 1;
  plVar6 = (longlong *)((ulonglong)uVar2 * 0x10 + *param_1);
  if (plVar6 != (longlong *)0x0) {
    plVar6[1] = 0;
  }
LAB_143178331:
  if (plVar6 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = plVar6 + 1;
    *plVar6 = param_2;
    *plVar5 = *param_3;
  }
  return plVar5;
}



// FUNCTION 143178370 FUN_143178370 body=227 status=ok
// SIG undefined FUN_143178370(void)

longlong * FUN_143178370(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar4 = (longlong *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  plVar5 = plVar4 + (ulonglong)uVar1 * 3;
  while ((plVar4 != plVar5 &&
         ((*plVar4 != *param_2 || (((*(uint *)(plVar4 + 1) ^ *(uint *)(param_2 + 1)) & 1) != 0)))))
  {
    plVar4 = plVar4 + 3;
  }
  plVar6 = (longlong *)0x0;
  plVar7 = plVar4 + 2;
  if (plVar4 == plVar5) {
    plVar7 = plVar6;
  }
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)plVar7 = *param_3;
    return plVar7;
  }
  if (*(uint *)((longlong)param_1 + 0xc) <= uVar1) {
    cVar3 = FUN_143147540(param_1,1);
    if (cVar3 == '\0') {
      return (longlong *)0x0;
    }
    plVar5 = plVar6;
    if (*(uint *)((longlong)param_1 + 0xc) <= uVar1) goto LAB_143178420;
  }
  uVar1 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar1 + 1;
  plVar5 = (longlong *)(*param_1 + (ulonglong)uVar1 * 0x18);
LAB_143178420:
  if (plVar5 != (longlong *)0x0) {
    lVar2 = param_2[1];
    *plVar5 = *param_2;
    plVar5[1] = lVar2;
    plVar6 = plVar5 + 2;
    *(undefined4 *)plVar6 = *param_3;
  }
  return plVar6;
}



// FUNCTION 143178460 FUN_143178460 body=167 status=ok
// SIG undefined FUN_143178460(void)

void FUN_143178460(longlong *param_1,undefined8 param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 local_res10 [2];
  
  pbVar4 = (byte *)0x0;
  pbVar1 = (byte *)param_1[0x13];
  local_res10[0] = (&DAT_1467be120)[(int)param_2];
  if (pbVar1 != (byte *)0x0) {
    pbVar3 = pbVar4;
    do {
      uVar2 = (int)pbVar3 + 1;
      if (pbVar1[uVar2] == (byte)param_2) {
        pbVar4 = pbVar1 + (longlong)pbVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc);
        break;
      }
      pbVar3 = (byte *)(ulonglong)uVar2;
    } while (uVar2 < *pbVar1);
  }
  pbVar1 = (byte *)local_res10;
  if (pbVar4 != (byte *)0x0) {
    pbVar1 = pbVar4;
  }
  if (*(int *)pbVar1 != param_3) {
    AkPropBundle<AkPropValue,unsigned_char>::SetAkProp(param_1 + 0x13,param_2,param_3);
    (**(code **)(*param_1 + 400))(param_1,0);
  }
  return;
}



// FUNCTION 143178510 FUN_143178510 body=757 status=ok
// SIG undefined FUN_143178510(void)

void FUN_143178510(longlong *param_1,ulonglong param_2,float param_3)

{
  byte *pbVar1;
  float *pfVar2;
  byte bVar3;
  uint uVar4;
  float *pfVar5;
  uint uVar6;
  float local_res10 [2];
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined1 local_30;
  undefined1 local_28;
  undefined8 local_20;
  
  uVar4 = (uint)param_2;
  bVar3 = (byte)param_2;
  if ((uVar4 < 6) || (uVar4 - 0x13 < 8)) {
    pbVar1 = (byte *)param_1[0x13];
    pfVar5 = (float *)0x0;
    local_res10[0] = 0.0;
    if (pbVar1 != (byte *)0x0) {
      pfVar2 = pfVar5;
      do {
        uVar6 = (int)pfVar2 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar6 + (longlong)pbVar1) == bVar3) {
          pfVar5 = (float *)(pbVar1 + (longlong)pfVar2 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                            );
          break;
        }
        pfVar2 = (float *)(ulonglong)uVar6;
      } while (uVar6 < *pbVar1);
    }
    pfVar2 = local_res10;
    if (pfVar5 != (float *)0x0) {
      pfVar2 = pfVar5;
    }
    local_res10[0] = *pfVar2;
    if (param_3 - local_res10[0] == 0.0) {
      return;
    }
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_20 = 0;
    local_30 = 0xff;
    local_28 = 0xff;
    (**(code **)(*param_1 + 0xc0))(param_1,(&DAT_145aca880)[(int)uVar4],*param_1,&local_48,0);
  }
  else {
    pfVar5 = (float *)0x0;
    if (1 < uVar4 - 0xc) {
      if (uVar4 != 0xe) {
        pbVar1 = (byte *)param_1[0x13];
        local_res10[0] = (float)(&DAT_1467be120)[(int)uVar4];
        if (pbVar1 != (byte *)0x0) {
          pfVar2 = pfVar5;
          do {
            uVar4 = (int)pfVar2 + 1;
            if (*(byte *)((longlong)(ulonglong)uVar4 + (longlong)pbVar1) == bVar3) {
              pfVar5 = (float *)(pbVar1 + (longlong)pfVar2 * 4 +
                                          ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
              break;
            }
            pfVar2 = (float *)(ulonglong)uVar4;
          } while (uVar4 < *pbVar1);
        }
        pfVar2 = local_res10;
        if (pfVar5 != (float *)0x0) {
          pfVar2 = pfVar5;
        }
        if (*pfVar2 == param_3) {
          return;
        }
        local_res10[0] = param_3;
        AkPropBundle<AkPropValue,unsigned_char>::SetAkProp(param_1 + 0x13,param_2,param_3);
        (**(code **)(*param_1 + 400))(param_1,0);
        return;
      }
      pbVar1 = (byte *)param_1[0x13];
      local_res10[0] = 0.0;
      if (pbVar1 != (byte *)0x0) {
        pfVar2 = pfVar5;
        do {
          uVar4 = (int)pfVar2 + 1;
          if (*(byte *)((longlong)(ulonglong)uVar4 + (longlong)pbVar1) == 0xe) {
            pfVar5 = (float *)(pbVar1 + (longlong)pfVar2 * 4 +
                                        ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
            break;
          }
          pfVar2 = (float *)(ulonglong)uVar4;
        } while (uVar4 < *pbVar1);
      }
      pfVar2 = local_res10;
      if (pfVar5 != (float *)0x0) {
        pfVar2 = pfVar5;
      }
      local_res10[0] = *pfVar2;
      if (param_3 - local_res10[0] == 0.0) {
        return;
      }
      (**(code **)(*param_1 + 0x1f8))(param_1,param_3,0x18,0,0);
      param_2 = 0xe;
      goto LAB_1431787b9;
    }
    pbVar1 = (byte *)param_1[0x13];
    local_res10[0] = 0.0;
    if (pbVar1 != (byte *)0x0) {
      pfVar2 = pfVar5;
      do {
        uVar6 = (int)pfVar2 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar6 + (longlong)pbVar1) == bVar3) {
          pfVar5 = (float *)(pbVar1 + (longlong)pfVar2 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                            );
          break;
        }
        pfVar2 = (float *)(ulonglong)uVar6;
      } while (uVar6 < *pbVar1);
    }
    pfVar2 = local_res10;
    if (pfVar5 != (float *)0x0) {
      pfVar2 = pfVar5;
    }
    local_res10[0] = *pfVar2;
    if (param_3 - local_res10[0] == 0.0) {
      return;
    }
    (**(code **)(*param_1 + 0x1f8))
              (param_1,param_3 - local_res10[0],(&DAT_145aca880)[(int)uVar4],0,0);
  }
  param_2 = param_2 & 0xff;
LAB_1431787b9:
  local_res10[0] = param_3;
  AkPropBundle<AkPropValue,unsigned_char>::SetAkProp(param_1 + 0x13,param_2,param_3);
  return;
}



// FUNCTION 143178810 FUN_143178810 body=321 status=ok
// SIG undefined FUN_143178810(void)

undefined8 FUN_143178810(longlong *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  
  bVar1 = *(byte *)*param_2;
  *param_2 = (byte *)*param_2 + 1;
  uVar4 = *(uint *)(param_1 + 0x14) | 0x200000;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(uint *)(param_1 + 0x14) & 0xffdfffff;
  }
  *(uint *)(param_1 + 0x14) = uVar4;
  (**(code **)(*param_1 + 400))(param_1,0);
  *(byte *)((longlong)param_1 + 0xa9) = *(byte *)((longlong)param_1 + 0xa9) & 0xfe;
  *(byte *)((longlong)param_1 + 0xa9) = *(byte *)((longlong)param_1 + 0xa9) | bVar1 >> 1 & 1;
  uVar4 = *(uint *)(param_1 + 0x14) | 0xc3c00000;
  if ((bVar1 & 4) == 0) {
    uVar4 = *(uint *)(param_1 + 0x14) & 0x3c3fffff;
  }
  *(uint *)(param_1 + 0x14) = uVar4;
  (**(code **)(*param_1 + 400))(param_1,0);
  lVar5 = 0;
  do {
    iVar6 = 0;
    if ((bVar1 & 8) != 0) {
      iVar6 = *(int *)*param_2;
      *param_2 = (int *)*param_2 + 1;
    }
    lVar3 = param_1[0x12];
    if (lVar3 == 0) {
      if (iVar6 != 0) {
        puVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x10);
        param_1[0x12] = (longlong)puVar2;
        if (puVar2 == (undefined8 *)0x0) {
          return 0x34;
        }
        *puVar2 = 0;
        puVar2[1] = 0;
        lVar3 = param_1[0x12];
        if (lVar3 == 0) {
          return 0x34;
        }
        goto LAB_143178911;
      }
    }
    else {
LAB_143178911:
      *(int *)(lVar5 + lVar3) = iVar6;
      (**(code **)(*param_1 + 400))(param_1,0);
    }
    lVar5 = lVar5 + 4;
    if (0xf < lVar5) {
      return 1;
    }
  } while( true );
}



// FUNCTION 143178960 FUN_143178960 body=218 status=ok
// SIG undefined FUN_143178960(void)

undefined8 FUN_143178960(longlong *param_1,uint param_2,int param_3,char param_4,int param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int *piVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_2;
  if (3 < param_2) {
    return 0x1f;
  }
  piVar4 = (int *)param_1[0xd];
  if (piVar4 == (int *)0x0) {
    puVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x28);
    param_1[0xd] = (longlong)puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      *(undefined2 *)(puVar2 + 1) = 0;
      *(undefined2 *)(puVar2 + 2) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      *(undefined2 *)(puVar2 + 3) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
      *(undefined2 *)(puVar2 + 4) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
      *(undefined1 *)((longlong)puVar2 + 0x24) = 0;
      piVar4 = (int *)param_1[0xd];
      if (piVar4 != (int *)0x0) goto LAB_1431789e0;
    }
    uVar3 = 0x34;
  }
  else {
LAB_1431789e0:
    if (*piVar4 <= param_5) {
      *piVar4 = param_5;
      lVar1 = param_1[0xd];
      if ((*(char *)(lVar1 + 9 + uVar5 * 8) != param_4) ||
         (*(int *)(lVar1 + 4 + uVar5 * 8) != param_3)) {
        *(char *)(lVar1 + 9 + uVar5 * 8) = param_4;
        *(int *)(lVar1 + 4 + uVar5 * 8) = param_3;
        (**(code **)(*param_1 + 400))(param_1,0);
        (**(code **)(*param_1 + 0x110))(param_1,uVar5);
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 143178a40 FUN_143178a40 body=129 status=ok
// SIG undefined FUN_143178a40(void)

void FUN_143178a40(longlong param_1,byte param_2)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 0xa8) & 1) != param_2) {
    *(byte *)(param_1 + 0xa8) = *(byte *)(param_1 + 0xa8) & 0xfe | param_2;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      FUN_143179580(*(longlong *)(param_1 + 0x78) + 0x20);
      lVar1 = **(longlong **)(param_1 + 0x78);
      if (lVar1 != (ulonglong)*(uint *)(*(longlong **)(param_1 + 0x78) + 1) * 0x10 + lVar1) {
        do {
          if (*(longlong *)(lVar1 + 8) != 0) {
            FUN_143179580();
          }
          lVar1 = lVar1 + 0x10;
        } while (lVar1 != (ulonglong)*(uint *)(*(longlong **)(param_1 + 0x78) + 1) * 0x10 +
                          **(longlong **)(param_1 + 0x78));
      }
    }
  }
  return;
}



// FUNCTION 143178ad0 FUN_143178ad0 body=922 status=ok
// SIG undefined FUN_143178ad0(void)

ulonglong FUN_143178ad0(longlong *param_1,longlong *param_2,int *param_3,char param_4)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  ushort uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  
  uVar12 = (**(code **)(*param_1 + 0x208))();
  if (((int)uVar12 == 1) && (param_4 == '\0')) {
    bVar2 = *(byte *)*param_2;
    *param_2 = (longlong)((byte *)*param_2 + 1);
    *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) & 0xf7;
    *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) | (bVar2 & (byte)uVar12) << 3;
    iVar6 = *(int *)*param_2;
    *param_2 = (longlong)((int *)*param_2 + 1);
    uVar10 = uVar12 & 0xffffffff;
    if (iVar6 != 0) {
      plVar13 = (longlong *)
                CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,iVar6,uVar12 & 0xffffffff);
      if (plVar13 == (longlong *)0x0) {
        return 2;
      }
      uVar11 = CAkParameterNodeBase::AddChildByPtr(plVar13,param_1);
      (**(code **)(*plVar13 + 0x10))(plVar13);
      uVar10 = (ulonglong)uVar11;
      if (uVar11 != 1) {
        return (ulonglong)uVar11;
      }
    }
    uVar12 = uVar10;
    iVar6 = *(int *)*param_2;
    *param_2 = (longlong)((int *)*param_2 + 1);
    if ((iVar6 != 0) &&
       (plVar13 = (longlong *)CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,iVar6,0),
       plVar13 != (longlong *)0x0)) {
      uVar11 = CAkParameterNodeBase::AddChildByPtr(plVar13,param_1);
      uVar12 = (ulonglong)uVar11;
      (**(code **)(*plVar13 + 0x10))(plVar13);
      if (uVar11 != 1) {
        return uVar12;
      }
    }
    bVar2 = *(byte *)*param_2;
    *param_2 = (longlong)((byte *)*param_2 + 1);
    if ((*(byte *)(param_1 + 0x14) & 1) != (bVar2 & 1)) {
      if ((bVar2 & 1) == 0) {
        uVar11 = *(uint *)(param_1 + 0x14) & 0xfffffffe;
      }
      else {
        uVar11 = *(uint *)(param_1 + 0x14) | 1;
      }
      *(uint *)(param_1 + 0x14) = uVar11;
      (**(code **)(*param_1 + 400))(param_1,0);
    }
    bVar14 = bVar2 >> 1 & 1;
    if ((*(byte *)(param_1 + 0x15) >> 5 & 1) != bVar14) {
      *(byte *)(param_1 + 0x15) = bVar14 << 5 | *(byte *)(param_1 + 0x15) & 0xdf;
      (**(code **)(*param_1 + 400))(param_1,0);
    }
    *(byte *)((longlong)param_1 + 0xa9) = *(byte *)((longlong)param_1 + 0xa9) & 0x1f;
    *(byte *)((longlong)param_1 + 0xaa) = *(byte *)((longlong)param_1 + 0xaa) & 0xfe;
    *(byte *)((longlong)param_1 + 0xa9) = *(byte *)((longlong)param_1 + 0xa9) | (bVar2 & 0xfc) << 3;
    *(byte *)((longlong)param_1 + 0xaa) = *(byte *)((longlong)param_1 + 0xaa) | bVar2 >> 5 & 1;
    if ((int)uVar12 == 1) {
      uVar11 = (**(code **)(*param_1 + 0x200))(param_1,param_2,param_3);
      uVar12 = (ulonglong)uVar11;
      if (uVar11 == 1) {
        uVar11 = FUN_143178ef0(param_1,param_2,param_3);
        uVar12 = (ulonglong)uVar11;
        if (uVar11 == 1) {
          uVar11 = (**(code **)(*param_1 + 0x210))(param_1,param_2,param_3);
          uVar12 = (ulonglong)uVar11;
          if (uVar11 == 1) {
            uVar11 = (**(code **)(*param_1 + 0x218))(param_1,param_2,param_3);
            uVar12 = (ulonglong)uVar11;
            if (uVar11 == 1) {
              uVar11 = (**(code **)(param_1[3] + 0x68))(param_1 + 3,param_2,param_3);
              uVar12 = (ulonglong)uVar11;
              if (uVar11 == 1) {
                uVar16 = 0;
                uVar5 = *(ushort *)*param_2;
                *param_2 = (longlong)((ushort *)*param_2 + 1);
                uVar11 = (uint)uVar5;
                if (uVar11 != 0) {
                  do {
                    puVar9 = (undefined4 *)*param_2;
                    uVar7 = *puVar9;
                    *param_2 = (longlong)(puVar9 + 1);
                    uVar3 = *(undefined1 *)(puVar9 + 1);
                    *param_2 = (longlong)puVar9 + 5;
                    uVar4 = *(undefined1 *)((longlong)puVar9 + 5);
                    *param_2 = (longlong)puVar9 + 6;
                    bVar2 = *(byte *)((longlong)puVar9 + 6);
                    pbVar1 = (byte *)((longlong)puVar9 + 7);
                    *param_2 = (longlong)pbVar1;
                    uVar15 = bVar2 & 0x7f;
                    while ((char)bVar2 < '\0') {
                      bVar2 = *(byte *)*param_2;
                      pbVar1 = (byte *)*param_2 + 1;
                      *param_2 = (longlong)pbVar1;
                      uVar15 = bVar2 & 0x7f | uVar15 << 7;
                    }
                    uVar8 = *(undefined4 *)pbVar1;
                    *param_2 = (longlong)(pbVar1 + 4);
                    bVar2 = pbVar1[4];
                    *param_2 = (longlong)(pbVar1 + 5);
                    uVar5 = *(ushort *)(pbVar1 + 5);
                    *param_2 = (longlong)(pbVar1 + 7);
                    uVar15 = (**(code **)(*param_1 + 0x1d8))
                                       (param_1,uVar7,uVar3,uVar4,uVar15,uVar8,bVar2,pbVar1 + 7,
                                        (uint)uVar5,1);
                    if (uVar15 != 1) {
                      return (ulonglong)uVar15;
                    }
                    uVar16 = uVar16 + 1;
                    *param_2 = *param_2 + (ulonglong)uVar5 * 0xc;
                    *param_3 = *param_3 + (uint)uVar5 * -0xc;
                    uVar12 = 1;
                  } while (uVar16 < uVar11);
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar12;
}



// FUNCTION 143178e70 FUN_143178e70 body=117 status=ok
// SIG undefined FUN_143178e70(void)

void FUN_143178e70(longlong param_1,byte param_2)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 0xa8) >> 1 & 1) != param_2) {
    *(byte *)(param_1 + 0xa8) = *(byte *)(param_1 + 0xa8) & 0xfd | param_2 * '\x02';
    if (*(longlong *)(param_1 + 0x78) != 0) {
      *(byte *)(*(longlong *)(param_1 + 0x78) + 0x33) = param_2;
      lVar1 = **(longlong **)(param_1 + 0x78);
      if (lVar1 != (ulonglong)*(uint *)(*(longlong **)(param_1 + 0x78) + 1) * 0x10 + lVar1) {
        do {
          if (*(longlong *)(lVar1 + 8) != 0) {
            *(byte *)(*(longlong *)(lVar1 + 8) + 0x13) = param_2;
          }
          lVar1 = lVar1 + 0x10;
        } while (lVar1 != (ulonglong)*(uint *)(*(longlong **)(param_1 + 0x78) + 1) * 0x10 +
                          **(longlong **)(param_1 + 0x78));
      }
    }
  }
  return;
}



// FUNCTION 143178ef0 FUN_143178ef0 body=693 status=ok
// SIG undefined FUN_143178ef0(void)

ulonglong FUN_143178ef0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  byte bVar9;
  char cVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  byte bVar16;
  uint *puVar17;
  ulonglong uVar18;
  
  bVar3 = *(byte *)*param_2;
  *param_2 = (longlong)((byte *)*param_2 + 1);
  uVar11 = *(uint *)(param_1 + 0xa0) | 0xffe;
  if ((bVar3 & 1) == 0) {
    uVar11 = *(uint *)(param_1 + 0xa0) & 0xfffff001;
  }
  *(uint *)(param_1 + 0xa0) = uVar11;
  bVar4 = *(byte *)(param_1 + 0xa9);
  bVar16 = bVar3 >> 1 & 1;
  bVar9 = bVar16 * '\x02';
  *(byte *)(param_1 + 0xa9) = bVar9 | bVar4 & 0xfd;
  if ((bVar3 & 1) != 0) {
    *(byte *)(param_1 + 0xa4) = *(byte *)(param_1 + 0xa4) & 0xf8;
    *(byte *)(param_1 + 0xa4) = *(byte *)(param_1 + 0xa4) | bVar3 >> 5 & 3;
    *(byte *)(param_1 + 0xa9) = bVar9 | bVar4 & 0xe1 | bVar3 & 0xc;
    if (bVar16 != 0) {
      bVar3 = *(byte *)*param_2;
      *param_2 = (longlong)((byte *)*param_2 + 1);
      *(byte *)(param_1 + 0xa4) = *(byte *)(param_1 + 0xa4) & 7;
      *(byte *)(param_1 + 0xa4) = *(byte *)(param_1 + 0xa4) | (bVar3 & 0xfb) << 3;
      if (1 < (byte)((*(byte *)(param_1 + 0xa4) & 7) - 1)) {
        return 1;
      }
      uVar12 = FUN_143174870(param_1);
      uVar18 = uVar12 & 0xffffffff;
      if ((int)uVar12 == 1) {
        lVar7 = *(longlong *)(param_1 + 0x70);
        puVar14 = (uint *)0x0;
        bVar4 = *(byte *)*param_2;
        *param_2 = (longlong)((byte *)*param_2 + 1);
        *(uint *)(lVar7 + 0x38) = *(uint *)(lVar7 + 0x38) & 0x7fffffff;
        *(uint *)(lVar7 + 0x18) = (uint)bVar4;
        *(uint *)(lVar7 + 0x38) = *(uint *)(lVar7 + 0x38) | (bVar3 & 0xffffffe0) << 0x1a;
        uVar5 = *(undefined4 *)*param_2;
        *param_2 = (longlong)((undefined4 *)*param_2 + 1);
        *(undefined4 *)(lVar7 + 0x1c) = uVar5;
        uVar11 = *(uint *)*param_2;
        puVar15 = (uint *)*param_2 + 1;
        *param_2 = (longlong)puVar15;
        puVar13 = puVar15;
        puVar17 = puVar14;
        if (uVar11 != 0) {
          puVar13 = puVar15 + (ulonglong)uVar11 * 4;
          *param_2 = (longlong)puVar13;
          puVar17 = puVar15;
        }
        uVar6 = *puVar13;
        puVar13 = puVar13 + 1;
        *param_2 = (longlong)puVar13;
        uVar12 = uVar18;
        if ((uVar6 != 0) && (*param_2 = (longlong)(puVar13 + (ulonglong)uVar6 * 2), uVar11 != 0)) {
          uVar12 = 1;
          FUN_143174870(param_1);
          if ((*(longlong *)(param_1 + 0x70) != 0) &&
             (cVar10 = CAk3DAutomationParams::PathIsDifferent
                                 (*(longlong *)(param_1 + 0x70),puVar17,uVar11,puVar13,uVar6),
             cVar10 != '\0')) {
            uVar11 = CAk3DAutomationParams::SetPath
                               (*(undefined8 *)(param_1 + 0x70),puVar17,uVar11,puVar13,uVar6);
            uVar12 = (ulonglong)uVar11;
          }
        }
        puVar15 = puVar14;
        if (uVar6 != 0) {
          do {
            puVar8 = (undefined4 *)*param_2;
            uVar5 = *puVar8;
            uVar1 = puVar8[1];
            uVar2 = puVar8[2];
            *param_2 = (longlong)(puVar8 + 3);
            FUN_143174870(param_1);
            lVar7 = *(longlong *)(param_1 + 0x70);
            if ((lVar7 != 0) && ((uint)puVar14 < (*(uint *)(lVar7 + 0x38) & 0x7fffffff))) {
              *(undefined4 *)(*(longlong *)(lVar7 + 0x30) + 0xc + (longlong)puVar15) = uVar5;
              *(undefined4 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x30) + 0x10 + (longlong)puVar15) =
                   uVar1;
              *(undefined4 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x30) + 0x14 + (longlong)puVar15) =
                   uVar2;
            }
            uVar11 = (uint)puVar14 + 1;
            puVar14 = (uint *)(ulonglong)uVar11;
            puVar15 = puVar15 + 6;
          } while (uVar11 < uVar6);
        }
      }
      return uVar12;
    }
  }
  return 1;
}



// FUNCTION 1431791b0 SetRTPC body=9 status=ok
// SIG undefined SetRTPC(void)

void CAkParameterNodeBase::SetRTPC(longlong param_1)

{
  CAkRTPCSubscriberNode::SetRTPC(param_1 + 0x30);
  return;
}



// FUNCTION 1431791c0 SetVVoicesOptOverrideParent body=17 status=ok
// SIG undefined SetVVoicesOptOverrideParent(void)

void CAkParameterNodeBase::SetVVoicesOptOverrideParent(longlong param_1,char param_2)

{
  *(byte *)(param_1 + 0xa8) = *(byte *)(param_1 + 0xa8) & 0xfb;
  *(byte *)(param_1 + 0xa8) = *(byte *)(param_1 + 0xa8) | param_2 << 2;
  return;
}



// FUNCTION 1431791e0 FUN_1431791e0 body=582 status=ok
// SIG undefined FUN_1431791e0(void)

void FUN_1431791e0(longlong param_1,longlong param_2,int param_3,float param_4,int param_5,
                  undefined4 param_6,int param_7)

{
  byte *pbVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  float *pfVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float local_78 [2];
  longlong local_70;
  undefined8 local_68;
  float local_60;
  float local_5c;
  int local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined2 local_4f;
  undefined8 local_48;
  
  lVar8 = (longlong)param_3;
  fVar10 = 0.0;
  pfVar2 = (float *)CAkSIS::GetSISValue(param_2,param_3,0);
  if (pfVar2 != (float *)0x0) {
    lVar6 = *(longlong *)(pfVar2 + 2);
    if (lVar6 == 0) {
      local_60 = *pfVar2;
      pfVar7 = (float *)0x0;
      if (param_5 == 1) {
        pbVar1 = *(byte **)(param_1 + 0x98);
        local_78[0] = (float)(&DAT_1467be120)[lVar8];
        if (pbVar1 != (byte *)0x0) {
          pfVar3 = pfVar7;
          do {
            uVar5 = (int)pfVar3 + 1;
            if (*(byte *)((longlong)(ulonglong)uVar5 + (longlong)pbVar1) == (byte)param_3) {
              pfVar7 = (float *)(pbVar1 + (longlong)pfVar3 * 4 +
                                          ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
              break;
            }
            pfVar3 = (float *)(ulonglong)uVar5;
          } while (uVar5 < *pbVar1);
        }
        pfVar3 = local_78;
        if (pfVar7 != (float *)0x0) {
          pfVar3 = pfVar7;
        }
        local_78[0] = *pfVar3;
        fVar10 = param_4 - local_78[0];
      }
      else if (param_5 == 2) {
        fVar10 = local_60 + param_4;
      }
      if ((local_60 == fVar10) || (param_7 == 0)) {
        *pfVar2 = fVar10;
        local_70 = *(longlong *)(param_2 + 0x10);
        fVar9 = fVar10 - local_60;
        local_68 = (ulonglong)local_68._4_4_ << 0x20;
        local_60 = 0.0;
        local_58 = CONCAT31(local_58._1_3_,0xff);
        local_50 = 0xff;
        local_48 = 0;
        CAkRTPCSubscriberNode::PushParamUpdate_Scoped
                  (param_1 + 0x48,(&DAT_145aca880)[lVar8],&local_70,fVar10,fVar9);
      }
      else {
        local_58 = param_7;
        local_54 = param_6;
        local_50 = (&DAT_145aca9a0)[lVar8];
        local_4f = 1;
        local_70 = param_2;
        local_68 = lVar8;
        local_5c = fVar10;
        uVar4 = FUN_14314fa00(DAT_146b50af0,&local_70,1,0);
        *(undefined8 *)(pfVar2 + 2) = uVar4;
      }
    }
    else {
      if (param_5 == 1) {
        pbVar1 = *(byte **)(param_1 + 0x98);
        pfVar7 = (float *)0x0;
        local_78[0] = (float)(&DAT_1467be120)[lVar8];
        if (pbVar1 != (byte *)0x0) {
          pfVar3 = pfVar7;
          do {
            uVar5 = (int)pfVar3 + 1;
            if (*(byte *)((longlong)(ulonglong)uVar5 + (longlong)pbVar1) == (byte)param_3) {
              pfVar7 = (float *)(pbVar1 + (longlong)pfVar3 * 4 +
                                          ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
              break;
            }
            pfVar3 = (float *)(ulonglong)uVar5;
          } while (uVar5 < *pbVar1);
        }
        lVar6 = *(longlong *)(pfVar2 + 2);
        pfVar2 = local_78;
        if (pfVar7 != (float *)0x0) {
          pfVar2 = pfVar7;
        }
        local_78[0] = *pfVar2;
        param_4 = param_4 - local_78[0];
      }
      CAkTransitionManager::ChangeParameter
                (DAT_146b50af0,lVar6,lVar8,param_4,param_7,param_6,param_5);
    }
  }
  return;
}



// FUNCTION 143179430 StartSisMuteTransitions body=248 status=ok
// SIG undefined StartSisMuteTransitions(void)

void CAkParameterNodeBase::StartSisMuteTransitions
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               int param_5)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined1 local_26;
  
  puVar1 = (undefined4 *)CAkSIS::GetSISValue(param_2,0xb,0x3f800000);
  if (puVar1 != (undefined4 *)0x0) {
    if (*(longlong *)(puVar1 + 2) == 0) {
      if (param_5 == 0) {
        FUN_1431ac4f0(param_2,0xb,param_3,1);
      }
      else {
        local_38 = *puVar1;
        local_40 = 0xb;
        local_30 = param_5;
        local_28 = 0x100;
        local_26 = 0;
        local_48 = param_2;
        local_34 = param_3;
        local_2c = param_4;
        uVar2 = FUN_14314fa00(DAT_146b50af0,&local_48,1,0);
        *(undefined8 *)(puVar1 + 2) = uVar2;
      }
    }
    else {
      CAkTransitionManager::ChangeParameter
                (DAT_146b50af0,*(longlong *)(puVar1 + 2),0xb,param_3,param_5,param_4,0);
    }
  }
  return;
}



// FUNCTION 143179530 Stop body=80 status=ok
// SIG undefined Stop(void)

void CAkParameterNodeBase::Stop
               (longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined2 local_18;
  undefined1 local_16;
  undefined2 local_15;
  undefined8 local_10;
  
  local_1c = 0;
  local_15 = 0;
  local_10 = 0;
  local_18 = 0;
  local_16 = 0;
  local_20 = param_5;
  local_38[0] = 0;
  local_30 = param_2;
  local_28 = param_3;
  local_24 = param_4;
  (**(code **)(*param_1 + 0x90))(param_1,local_38);
  return;
}



// FUNCTION 143179580 FUN_143179580 body=335 status=ok
// SIG undefined FUN_143179580(void)

void FUN_143179580(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined4 local_20;
  
  *(bool *)((longlong)param_1 + 0x12) = *(char *)((longlong)param_1 + 0x12) == '\0';
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 != 0) {
    plVar11 = (longlong *)*param_1;
    *(undefined4 *)(param_1 + 1) = 0;
    if (0 < (int)uVar2) {
      uVar9 = (ulonglong)uVar2;
      do {
        lVar3 = *plVar11;
        local_28 = *(undefined8 *)(lVar3 + 0x2a0);
        local_20 = *(undefined4 *)(lVar3 + 0x2a8);
        lVar6 = FUN_143173e70(param_1,&local_28,local_res8);
        uVar2 = *(uint *)(param_1 + 1);
        if (lVar6 == 0) {
          if (((*(uint *)((longlong)param_1 + 0xc) <= uVar2) &&
              (cVar5 = FUN_143134440(param_1,8), cVar5 == '\0')) ||
             (*(uint *)((longlong)param_1 + 0xc) <= uVar2)) goto LAB_14317969d;
          uVar2 = *(uint *)(param_1 + 1);
          *(uint *)(param_1 + 1) = uVar2 + 1;
          plVar7 = (longlong *)(*param_1 + (ulonglong)uVar2 * 8);
        }
        else {
          lVar4 = *param_1;
          if (((uVar2 < *(uint *)((longlong)param_1 + 0xc)) ||
              (cVar5 = FUN_143134440(param_1,8), cVar5 != '\0')) &&
             (uVar2 < *(uint *)((longlong)param_1 + 0xc))) {
            uVar2 = *(uint *)(param_1 + 1);
            lVar10 = *param_1;
            *(uint *)(param_1 + 1) = uVar2 + 1;
            puVar8 = (undefined8 *)(lVar10 + (ulonglong)uVar2 * 8);
            lVar6 = (lVar6 - lVar4 >> 3 & 0xffffffffU) * 8;
            if ((undefined8 *)(lVar6 + lVar10) < puVar8) {
              do {
                puVar1 = puVar8 + -1;
                *puVar8 = puVar8[-1];
                lVar10 = *param_1;
                puVar8 = puVar1;
              } while ((undefined8 *)(lVar10 + lVar6) < puVar1);
            }
            plVar7 = (longlong *)(lVar6 + lVar10);
          }
          else {
LAB_14317969d:
            plVar7 = (longlong *)0x0;
          }
        }
        plVar11 = plVar11 + 1;
        *plVar7 = lVar3;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  return;
}



// FUNCTION 1431796d0 TriggerModulators body=185 status=ok
// SIG undefined TriggerModulators(void)

void CAkParameterNodeBase::TriggerModulators
               (longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong local_28;
  longlong local_20;
  undefined8 local_18;
  
  local_28 = param_1 + 0x30;
  local_18 = 2;
  local_20 = param_1;
  CAkModulatorMgr::Trigger(DAT_146b50ae0,&local_28,param_2,param_3);
  plVar3 = *(longlong **)(param_1 + 0x80);
  if ((param_4 == '\0') || (*(longlong **)(param_1 + 0x88) == (longlong *)0x0)) {
    if (plVar3 == (longlong *)0x0) {
      return;
    }
    lVar2 = *plVar3;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x88);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x148))(plVar3,param_2,param_3,0);
      plVar1 = *(longlong **)(param_1 + 0x88);
    }
    plVar3 = plVar1;
    lVar2 = *plVar3;
    param_4 = '\0';
  }
  (**(code **)(lVar2 + 0x148))(plVar3,param_2,param_3,param_4);
  return;
}



// FUNCTION 143179790 FUN_143179790 body=81 status=ok
// SIG undefined FUN_143179790(void)

void FUN_143179790(undefined4 param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,param_1,0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x140))(plVar1,param_2);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}



// FUNCTION 1431797f0 FUN_1431797f0 body=480 status=ok
// SIG undefined FUN_1431797f0(void)

void FUN_1431797f0(longlong param_1,longlong param_2,undefined4 param_3,int param_4)

{
  byte *pbVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  float *pfVar8;
  longlong *plVar9;
  longlong local_48 [2];
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined1 local_26;
  
  if (param_2 == 0) {
    if ((*(longlong *)(param_1 + 0x58) != 0) &&
       (pbVar1 = *(byte **)(*(longlong *)(param_1 + 0x58) + 0x18), pbVar1 != (byte *)0x0)) {
      uVar6 = 0;
      do {
        uVar7 = (int)uVar6 + 1;
        if (pbVar1[uVar7] == 0xb) {
          pfVar8 = (float *)(pbVar1 + uVar6 * 0x10 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
          if (pfVar8 == (float *)0x0) {
            return;
          }
          if ((*pfVar8 == 1.0) && (*(longlong *)(pfVar8 + 2) == 0)) {
            return;
          }
          CAkRegistryMgr::SetNodeIDAsModified(g_pRegistryMgr,param_1);
          local_48[0] = *(longlong *)(param_1 + 0x58);
          goto LAB_1431798e6;
        }
        uVar6 = (ulonglong)uVar7;
      } while (uVar7 < *pbVar1);
    }
  }
  else {
    plVar5 = *(longlong **)(param_1 + 0x60);
    if (plVar5 != (longlong *)0x0) {
      plVar2 = (longlong *)*plVar5;
      plVar5 = plVar2 + (ulonglong)*(uint *)(plVar5 + 1) * 2;
      for (; (plVar2 != plVar5 && (*plVar2 != param_2)); plVar2 = plVar2 + 2) {
      }
      plVar9 = plVar2 + 1;
      if (plVar2 == plVar5) {
        plVar9 = (longlong *)0x0;
      }
      if (plVar9 != (longlong *)0x0) {
        local_48[0] = *plVar9;
LAB_1431798e6:
        if ((local_48[0] != 0) &&
           (puVar3 = (undefined4 *)CAkSIS::GetSISValue(local_48[0],0xb,0x3f800000),
           puVar3 != (undefined4 *)0x0)) {
          if (*(longlong *)(puVar3 + 2) == 0) {
            if (param_4 == 0) {
              FUN_1431ac4f0(local_48[0],0xb,0x3f800000,1);
            }
            else {
              local_38 = *puVar3;
              local_48[1] = 0xb;
              local_34 = 0x3f800000;
              local_28 = 0x100;
              local_26 = 0;
              local_30 = param_4;
              local_2c = param_3;
              uVar4 = FUN_14314fa00(DAT_146b50af0,local_48,1,0);
              *(undefined8 *)(puVar3 + 2) = uVar4;
            }
          }
          else {
            CAkTransitionManager::ChangeParameter
                      (DAT_146b50af0,*(longlong *)(puVar3 + 2),0xb,0x3f800000,param_4,param_3,0);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1431799d0 Unregister body=243 status=ok
// SIG undefined Unregister(void)

void CAkParameterNodeBase::Unregister(longlong param_1,longlong param_2)

{
  void *pvVar1;
  long lVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x60);
  if ((plVar3 != (longlong *)0x0) &&
     (plVar6 = (longlong *)*plVar3, plVar6 != plVar6 + (ulonglong)*(uint *)(plVar3 + 1) * 2)) {
    do {
      lVar2 = g_DefaultPoolId;
      if (*plVar6 == param_2) {
        pvVar1 = (void *)plVar6[1];
        if (pvVar1 != (void *)0x0) {
          CAkSIS::~CAkSIS(pvVar1);
          AK::MemoryMgr::Free(lVar2,pvVar1);
          plVar3 = *(longlong **)(param_1 + 0x60);
        }
        uVar7 = *(uint *)(plVar3 + 1);
        plVar4 = (longlong *)(*plVar3 + -0x10 + (ulonglong)uVar7 * 0x10);
        if (plVar6 < plVar4) {
          uVar5 = ((ulonglong)((longlong)plVar4 + (-1 - (longlong)plVar6)) >> 3 & 0xfffffffffffffffe
                  ) + 2 & 0x1ffffffffffffffe;
          plVar4 = plVar6 + 2;
          plVar8 = plVar6;
          for (; uVar5 != 0; uVar5 = uVar5 - 1) {
            *plVar8 = *plVar4;
            plVar4 = plVar4 + 1;
            plVar8 = plVar8 + 1;
          }
          uVar7 = *(uint *)(plVar3 + 1);
        }
        *(uint *)(plVar3 + 1) = uVar7 - 1;
      }
      else {
        plVar6 = plVar6 + 2;
      }
      plVar3 = *(longlong **)(param_1 + 0x60);
    } while (plVar6 != (longlong *)((ulonglong)*(uint *)(plVar3 + 1) * 0x10 + *plVar3));
  }
  return;
}



// FUNCTION 143179ad0 UnregisterParameterTarget body=893 status=ok
// SIG undefined UnregisterParameterTarget(void)

void CAkParameterNodeBase::UnregisterParameterTarget
               (ulonglong param_1,undefined8 param_2,ulonglong *param_3,char param_4)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar8 = 0;
  uVar9 = param_1;
  uVar4 = uVar8;
  if (-1 < *(char *)(param_1 + 0xa8)) {
    uVar9 = uVar8;
    uVar4 = param_1;
  }
  while ((uVar4 != 0 && ((*param_3 & (~uVar8 | 0x120df)) != 0))) {
    lVar2 = *(longlong *)(uVar4 + 0x38);
    if (lVar2 != 0) {
      cVar5 = FUN_1431abd70(lVar2 + 0x10,param_2);
      if ((cVar5 != '\0') && (*(int *)(lVar2 + 0x18) == 0)) {
        *(undefined8 *)(lVar2 + 8) = 0xffffffffffffffff;
        lVar6 = *(longlong *)(lVar2 + 0x10);
        lVar7 = (ulonglong)*(uint *)(lVar2 + 0x18) * 0x40 + lVar6;
        for (; lVar6 != lVar7; lVar6 = lVar6 + 0x40) {
          *(ulonglong *)(lVar2 + 8) = *(ulonglong *)(lVar2 + 8) & *(ulonglong *)(lVar6 + 0x30);
        }
      }
      puVar3 = *(undefined8 **)(uVar4 + 0x38);
      if ((puVar3 == (undefined8 *)0x0) || (*(int *)(puVar3 + 3) == 0)) {
        FUN_1431338f0(g_pRTPCMgr,uVar4 + 0x30,*puVar3);
      }
    }
    if (*(longlong *)(uVar4 + 0x28) != 0) {
      CAkParamNodeStateTargetData::RemoveTarget(*(longlong *)(uVar4 + 0x28) + 0x10,param_2);
    }
    lVar2 = *(longlong *)(uVar4 + 0x50);
    if (lVar2 != 0) {
      cVar5 = FUN_1431abd70(lVar2 + 0x10,param_2);
      if ((cVar5 != '\0') && (*(int *)(lVar2 + 0x18) == 0)) {
        *(undefined8 *)(lVar2 + 8) = 0xffffffffffffffff;
        lVar6 = *(longlong *)(lVar2 + 0x10);
        lVar7 = (ulonglong)*(uint *)(lVar2 + 0x18) * 0x40 + lVar6;
        for (; lVar6 != lVar7; lVar6 = lVar6 + 0x40) {
          *(ulonglong *)(lVar2 + 8) = *(ulonglong *)(lVar2 + 8) & *(ulonglong *)(lVar6 + 0x30);
        }
      }
      puVar3 = *(undefined8 **)(uVar4 + 0x50);
      if ((puVar3 == (undefined8 *)0x0) || (*(int *)(puVar3 + 3) == 0)) {
        FUN_1431338f0(g_pRTPCMgr,uVar4 + 0x48,*puVar3);
      }
    }
    uVar8 = uVar8 | (ulonglong)*(uint *)(uVar4 + 0xa0) << 0x11;
    if ((param_4 != '\0') && (uVar9 == 0)) {
      uVar9 = *(ulonglong *)(uVar4 + 0x88);
    }
    uVar4 = *(ulonglong *)(uVar4 + 0x80);
  }
  for (; (uVar9 != 0 && ((*param_3 & (~uVar8 | 0x3800000100bf)) != 0));
      uVar8 = uVar8 | (ulonglong)*puVar1 << 0x11) {
    lVar2 = *(longlong *)(uVar9 + 0x38);
    if (lVar2 != 0) {
      cVar5 = FUN_1431abd70(lVar2 + 0x10,param_2);
      if ((cVar5 != '\0') && (*(int *)(lVar2 + 0x18) == 0)) {
        *(undefined8 *)(lVar2 + 8) = 0xffffffffffffffff;
        lVar6 = *(longlong *)(lVar2 + 0x10);
        lVar7 = (ulonglong)*(uint *)(lVar2 + 0x18) * 0x40 + lVar6;
        for (; lVar6 != lVar7; lVar6 = lVar6 + 0x40) {
          *(ulonglong *)(lVar2 + 8) = *(ulonglong *)(lVar2 + 8) & *(ulonglong *)(lVar6 + 0x30);
        }
      }
      puVar3 = *(undefined8 **)(uVar9 + 0x38);
      if ((puVar3 == (undefined8 *)0x0) || (*(int *)(puVar3 + 3) == 0)) {
        FUN_1431338f0(g_pRTPCMgr,uVar9 + 0x30,*puVar3);
      }
    }
    if (*(longlong *)(uVar9 + 0x28) != 0) {
      CAkParamNodeStateTargetData::RemoveTarget(*(longlong *)(uVar9 + 0x28) + 0x10,param_2);
    }
    lVar2 = *(longlong *)(uVar9 + 0x168);
    if (lVar2 != 0) {
      cVar5 = FUN_1431abd70(lVar2 + 0x10,param_2);
      if ((cVar5 != '\0') && (*(int *)(lVar2 + 0x18) == 0)) {
        *(undefined8 *)(lVar2 + 8) = 0xffffffffffffffff;
        lVar6 = *(longlong *)(lVar2 + 0x10);
        lVar7 = (ulonglong)*(uint *)(lVar2 + 0x18) * 0x40 + lVar6;
        for (; lVar6 != lVar7; lVar6 = lVar6 + 0x40) {
          *(ulonglong *)(lVar2 + 8) = *(ulonglong *)(lVar2 + 8) & *(ulonglong *)(lVar6 + 0x30);
        }
      }
      puVar3 = *(undefined8 **)(uVar9 + 0x168);
      if ((puVar3 == (undefined8 *)0x0) || (*(int *)(puVar3 + 3) == 0)) {
        FUN_1431338f0(g_pRTPCMgr,uVar9 + 0x160,*puVar3);
      }
    }
    lVar2 = *(longlong *)(uVar9 + 0x50);
    if (lVar2 != 0) {
      cVar5 = FUN_1431abd70(lVar2 + 0x10,param_2);
      if ((cVar5 != '\0') && (*(int *)(lVar2 + 0x18) == 0)) {
        *(undefined8 *)(lVar2 + 8) = 0xffffffffffffffff;
        lVar6 = *(longlong *)(lVar2 + 0x10);
        lVar7 = (ulonglong)*(uint *)(lVar2 + 0x18) * 0x40 + lVar6;
        for (; lVar6 != lVar7; lVar6 = lVar6 + 0x40) {
          *(ulonglong *)(lVar2 + 8) = *(ulonglong *)(lVar2 + 8) & *(ulonglong *)(lVar6 + 0x30);
        }
      }
      puVar3 = *(undefined8 **)(uVar9 + 0x50);
      if ((puVar3 == (undefined8 *)0x0) || (*(int *)(puVar3 + 3) == 0)) {
        FUN_1431338f0(g_pRTPCMgr,uVar9 + 0x48,*puVar3);
      }
    }
    puVar1 = (uint *)(uVar9 + 0xa0);
    uVar9 = *(ulonglong *)(uVar9 + 0x88);
  }
  return;
}



// FUNCTION 143179e50 FUN_143179e50 body=121 status=ok
// SIG undefined FUN_143179e50(void)

void FUN_143179e50(undefined8 *param_1,longlong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)*param_1;
  uVar2 = *(uint *)(param_1 + 1);
  plVar3 = plVar4 + (ulonglong)uVar2 * 2;
  if (plVar4 != plVar3) {
    do {
      if (*plVar4 == param_2) break;
      plVar4 = plVar4 + 2;
    } while (plVar4 != plVar3);
    if (plVar4 != plVar3) {
      if (plVar4 < plVar3 + -2) {
        uVar1 = ((ulonglong)((longlong)(plVar3 + -2) + (-1 - (longlong)plVar4)) >> 3 &
                0xfffffffffffffffe) + 2 & 0x1ffffffffffffffe;
        plVar3 = plVar4 + 2;
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *plVar4 = *plVar3;
          plVar3 = plVar3 + 1;
          plVar4 = plVar4 + 1;
        }
        uVar2 = *(uint *)(param_1 + 1);
      }
      *(uint *)(param_1 + 1) = uVar2 - 1;
    }
  }
  return;
}



// FUNCTION 143179ed0 FUN_143179ed0 body=231 status=ok
// SIG undefined FUN_143179ed0(void)

void FUN_143179ed0(longlong *param_1,int param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  uint uVar3;
  byte *pbVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 local_res10 [6];
  
  CAkRTPCSubscriberNode::UnsetRTPC(param_1 + 6);
  (**(code **)(*param_1 + 400))(param_1);
  (**(code **)(*param_1 + 0xe0))(param_1,0,param_2,0);
  if (param_2 == 0x12) {
    bVar5 = 0xc;
    local_res10[0] = DAT_1467be150;
  }
  else {
    if (param_2 != 0x13) {
      if (2 < param_2 - 0x14U) {
        return;
      }
      uVar6 = 0;
      goto LAB_143179f7c;
    }
    bVar5 = 0xd;
    local_res10[0] = DAT_1467be154;
  }
  pbVar4 = (byte *)param_1[0x13];
  if (pbVar4 != (byte *)0x0) {
    uVar2 = 0;
    do {
      uVar3 = (int)uVar2 + 1;
      if (pbVar4[uVar3] == bVar5) {
        pbVar4 = pbVar4 + uVar2 * 4 + ((ulonglong)(*pbVar4 + 4) & 0xfffffffc);
        goto LAB_143179f64;
      }
      uVar2 = (ulonglong)uVar3;
    } while (uVar3 < *pbVar4);
  }
  pbVar4 = (byte *)0x0;
LAB_143179f64:
  pbVar1 = (byte *)local_res10;
  if (pbVar4 != (byte *)0x0) {
    pbVar1 = pbVar4;
  }
  uVar6 = *(undefined4 *)pbVar1;
  local_res10[0] = uVar6;
LAB_143179f7c:
  (**(code **)(*param_1 + 0x1f8))(param_1,uVar6,param_2,0,0);
  return;
}



// FUNCTION 143179fc0 FUN_143179fc0 body=155 status=ok
// SIG undefined FUN_143179fc0(void)

void FUN_143179fc0(undefined8 param_1,float param_2,longlong param_3)

{
  int iVar1;
  longlong local_res18 [2];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_38 = CONCAT44(local_38._4_4_,0x42480000);
  local_res18[0] = param_3;
  iVar1 = _finite((double)param_2);
  if (iVar1 != 0) {
    local_38 = (ulonglong)(uint)param_2;
  }
  local_38 = CONCAT44(*(undefined4 *)(param_3 + 0x2a4),(undefined4)local_38);
  local_30 = *(undefined4 *)(param_3 + 0x2a8);
  local_28 = *(undefined8 *)(param_3 + 0x2a0);
  local_20 = local_30;
  FUN_143177c50(param_1,&local_28,&local_38,local_res18);
  return;
}



// FUNCTION 14317a060 UpdateBaseParams body=92 status=ok
// SIG undefined UpdateBaseParams(void)

void CAkParameterNodeBase::UpdateBaseParams
               (longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  
  do {
    lVar1 = param_1;
    if ((*(uint *)(lVar1 + 0xa0) & 0xffe) != 0) break;
    param_1 = *(longlong *)(lVar1 + 0x80);
  } while (*(longlong *)(lVar1 + 0x80) != 0);
  Get2DParams(lVar1);
  if (param_4 != 0) {
    Get3DPanning(lVar1,param_2,param_4 + 0xc);
  }
  return;
}



// FUNCTION 14317a0c0 FUN_14317a0c0 body=398 status=ok
// SIG undefined FUN_14317a0c0(void)

void FUN_14317a0c0(longlong *param_1)

{
  longlong *plVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar2 = *(ushort *)(param_1 + 2);
  if (uVar2 != 0) {
    if ((uint)uVar2 < *(uint *)(param_1 + 1)) {
      plVar9 = (longlong *)*param_1;
      uVar11 = 0;
      plVar1 = plVar9 + *(uint *)(param_1 + 1);
      uVar10 = uVar11;
      while ((plVar9 != plVar1 && ((uint)uVar10 < (uint)uVar2))) {
        lVar3 = *plVar9;
        if (((*(byte *)(lVar3 + 0x296) & 2) == 0) &&
           (((*(byte *)(lVar3 + 0x295) & 1) == 0 && ((*(byte *)(lVar3 + 0x195) & 3) == 0)))) {
          lVar4 = *(longlong *)(lVar3 + 0x228);
          if (lVar4 == 0) {
LAB_14317a1ab:
            if ((*(byte *)(lVar3 + 0x293) & 0x78) != 0) goto LAB_14317a1b8;
          }
          else {
            bVar6 = true;
            bVar7 = true;
            for (lVar5 = *(longlong *)(lVar4 + 0x40); lVar5 != 0;
                lVar5 = *(longlong *)(lVar5 + 0x48)) {
              if ((bVar7) && ((*(uint *)(lVar5 + 0x168) >> 1 & 1) != 0)) {
                bVar7 = true;
              }
              else {
                bVar7 = false;
              }
              if ((bVar6) && ((*(byte *)(lVar5 + 0x168) & 1) != 0)) {
                bVar6 = true;
              }
              else {
                bVar6 = false;
              }
            }
            bVar8 = bVar6;
            if ((((*(byte *)(lVar4 + 0x68) & 2) == 0) || (bVar8 = bVar7, bVar6)) && (bVar8))
            goto LAB_14317a1ab;
          }
          uVar10 = (ulonglong)((uint)uVar10 + 1);
        }
LAB_14317a1b8:
        plVar9 = plVar9 + 1;
      }
      uVar10 = (ulonglong)((longlong)plVar1 + (7 - (longlong)plVar9)) >> 3;
      if (plVar1 < plVar9) {
        uVar10 = uVar11;
      }
      if (uVar10 != 0) {
        do {
          lVar3 = *plVar9;
          if (((*(byte *)(lVar3 + 0x295) & 1) == 0) && ((*(byte *)(lVar3 + 0x296) & 2) == 0)) {
            if (*(char *)((longlong)param_1 + 0x13) == '\0') {
              CAkPBI::Kick(lVar3,(param_1 == &DAT_146b50ff0) + '\x01');
            }
            else {
              FUN_14317dbc0();
            }
          }
          plVar9 = plVar9 + 1;
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar10);
      }
    }
  }
  return;
}



// FUNCTION 14317a250 _GetBypassAllFX body=357 status=ok
// SIG undefined _GetBypassAllFX(void)

uint CAkParameterNodeBase::_GetBypassAllFX(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined1 local_30;
  undefined1 local_28;
  undefined8 local_20;
  
  if ((*(longlong *)(param_1 + 0x68) == 0) ||
     ((*(byte *)(*(longlong *)(param_1 + 0x68) + 0x24) & 0x10) == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  if (((*(ulonglong **)(param_1 + 0x38) == (ulonglong *)0x0) ||
      ((**(ulonglong **)(param_1 + 0x38) & 0x200000000) == 0)) &&
     (cVar1 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0x21),
     cVar1 == '\0')) {
    plVar3 = *(longlong **)(param_1 + 0x60);
    if (plVar3 != (longlong *)0x0) {
      plVar2 = (longlong *)*plVar3;
      plVar3 = plVar2 + (ulonglong)*(uint *)(plVar3 + 1) * 2;
      if (plVar2 != plVar3) {
        do {
          if (*plVar2 == param_2) break;
          plVar2 = plVar2 + 2;
        } while (plVar2 != plVar3);
        if ((plVar2 != plVar3) && (plVar2 + 1 != (longlong *)0x0)) {
          return (uint)(*(byte *)(plVar2[1] + 0x20) >> 4 & 1);
        }
      }
    }
    if (*(longlong *)(param_1 + 0x58) != 0) {
      uVar4 = (uint)(*(byte *)(*(longlong *)(param_1 + 0x58) + 0x20) >> 4 & 1);
    }
  }
  else {
    local_40 = 0;
    fVar6 = 0.0;
    local_38 = 0;
    local_30 = 0xff;
    local_28 = 0xff;
    local_20 = 0;
    local_48 = param_2;
    cVar1 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0x21);
    if (cVar1 != '\0') {
      fVar6 = (float)FUN_1431437a0(param_1 + 0x18,0x21);
    }
    if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
       ((**(ulonglong **)(param_1 + 0x38) & 0x200000000) != 0)) {
      fVar5 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x21,&local_48);
      fVar6 = fVar6 + fVar5;
    }
    uVar4 = (uint)fVar6;
  }
  return uVar4;
}



// FUNCTION 14317a3c0 `scalar_deleting_destructor' body=128 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkEvent::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__145acad90;
  UnpinAllFilesInStreamCache();
  plVar1 = (longlong *)param_1[4];
  while (plVar1 != (longlong *)0x0) {
    if (plVar1 != (longlong *)0x0) {
      param_1[4] = plVar1[3];
    }
    (**(code **)(*plVar1 + 0x10))();
    plVar1 = (longlong *)param_1[4];
  }
  param_1[4] = 0;
  CAkIndexable::~CAkIndexable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14317a440 AddRef body=77 status=ok
// SIG undefined AddRef(void)

int CAkEvent::AddRef(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = DAT_146b50af8;
  EnterCriticalSection((LPCRITICAL_SECTION)(DAT_146b50af8 + 0xc0));
  iVar2 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar2;
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0xc0));
  return iVar2;
}



// FUNCTION 14317a490 AddToIndex body=113 status=ok
// SIG undefined AddToIndex(void)

void CAkEvent::AddToIndex(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lVar2 = DAT_146b50af8;
  lpCriticalSection = (LPCRITICAL_SECTION)(DAT_146b50af8 + 0xc0);
  EnterCriticalSection(lpCriticalSection);
  cVar3 = FUN_14313b140(lVar2 + 0xe8);
  if (cVar3 != '\0') {
    uVar1 = (ulonglong)*(uint *)(param_1 + 0x10) % (ulonglong)*(uint *)(lVar2 + 0xf0);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(longlong *)(lVar2 + 0xe8) + uVar1 * 8);
    *(longlong *)(*(longlong *)(lVar2 + 0xe8) + uVar1 * 8) = param_1;
    *(int *)(lVar2 + 0xf8) = *(int *)(lVar2 + 0xf8) + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014317a4fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 14317a510 CreateNoIndex body=96 status=ok
// SIG undefined CreateNoIndex(void)

undefined8 * CAkEvent::CreateNoIndex(undefined4 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x30);
  if (puVar1 != (undefined8 *)0x0) {
    CAkIndexable::CAkIndexable(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__145acad90;
    puVar1[4] = 0;
    *(undefined4 *)(puVar1 + 5) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14317a570 GatherSounds body=210 status=ok
// SIG undefined GatherSounds(void)

undefined8
CAkEvent::GatherSounds
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  longlong lVar1;
  longlong *plVar2;
  
  for (lVar1 = *(longlong *)(param_1 + 0x20); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x18)) {
    if ((*(short *)(lVar1 + 0x34) == 0x403) &&
       (plVar2 = (longlong *)CAkAction::GetAndRefTarget(lVar1), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x78))(plVar2,param_2,param_3,param_4,1,param_5,param_6,param_7);
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  return 1;
}



// FUNCTION 14317a650 QueryAudioObjectIDs body=283 status=ok
// SIG undefined QueryAudioObjectIDs(void)

undefined8 CAkEvent::QueryAudioObjectIDs(longlong param_1,uint *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  uint local_res8 [2];
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  local_res8[0] = 0;
  do {
    if (lVar1 == 0) {
LAB_14317a74e:
      uVar3 = 3;
      if (*param_2 != 0) {
        uVar3 = 1;
      }
      *param_2 = local_res8[0];
      return uVar3;
    }
    if ((*(short *)(lVar1 + 0x34) == 0x403) &&
       (plVar2 = (longlong *)CAkAction::GetAndRefTarget(lVar1), plVar2 != (longlong *)0x0)) {
      if (*param_2 != 0) {
        *(int *)(param_3 + (ulonglong)local_res8[0] * 0xc) = (int)plVar2[2];
        if (plVar2[0x10] == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(plVar2[0x10] + 0x10);
        }
        *(undefined4 *)(param_3 + 4 + (ulonglong)local_res8[0] * 0xc) = uVar4;
        *(undefined4 *)(param_3 + 8 + (ulonglong)local_res8[0] * 0xc) = 0;
        if (local_res8[0] + 1 == *param_2) {
          local_res8[0] = local_res8[0] + 1;
          (**(code **)(*plVar2 + 0x10))(plVar2);
          goto LAB_14317a74e;
        }
      }
      local_res8[0] = local_res8[0] + 1;
      (**(code **)(*plVar2 + 0x70))(plVar2,param_2,param_3,local_res8,1);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      if (local_res8[0] == *param_2) goto LAB_14317a74e;
    }
    lVar1 = *(longlong *)(lVar1 + 0x18);
  } while( true );
}



// FUNCTION 14317a770 Release body=239 status=ok
// SIG undefined Release(void)

undefined4 CAkEvent::Release(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  long lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lVar8 = DAT_146b50af8;
  EnterCriticalSection((LPCRITICAL_SECTION)(DAT_146b50af8 + 0xc0));
  piVar1 = (int *)((longlong)param_1 + 0x14);
  *piVar1 = *piVar1 + -1;
  lVar9 = DAT_146b50af8;
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x14);
  if (*piVar1 == 0) {
    uVar4 = *(uint *)(param_1 + 2);
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_146b50af8 + 0xc0);
    EnterCriticalSection(lpCriticalSection);
    if (*(uint *)(lVar9 + 0xf0) != 0) {
      plVar2 = (longlong *)
               (*(longlong *)(lVar9 + 0xe8) +
               ((ulonglong)uVar4 % (ulonglong)*(uint *)(lVar9 + 0xf0)) * 8);
      lVar10 = *plVar2;
      lVar6 = 0;
      while (lVar5 = lVar10, lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x10) == uVar4) {
          if (lVar6 == 0) {
            *plVar2 = *(longlong *)(lVar5 + 8);
          }
          else {
            *(longlong *)(lVar6 + 8) = *(longlong *)(lVar5 + 8);
          }
          *(int *)(lVar9 + 0xf8) = *(int *)(lVar9 + 0xf8) + -1;
          break;
        }
        lVar6 = lVar5;
        lVar10 = *(longlong *)(lVar5 + 8);
      }
    }
    LeaveCriticalSection(lpCriticalSection);
    lVar7 = g_DefaultPoolId;
    (**(code **)*param_1)(param_1,0);
    AK::MemoryMgr::Free(lVar7,param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0xc0));
  return uVar3;
}



// FUNCTION 14317a860 FUN_14317a860 body=191 status=ok
// SIG undefined FUN_14317a860(void)

undefined8 FUN_14317a860(longlong param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  byte *pbVar4;
  uint uVar5;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar6;
  
  bVar1 = *(byte *)(param_2 + 4);
  pbVar4 = (byte *)(param_2 + 5);
  uVar8 = bVar1 & 0x7f;
  while ((char)bVar1 < '\0') {
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 1;
    uVar8 = bVar1 & 0x7f | uVar8 << 7;
  }
  uVar6 = 0;
  uVar7 = uVar6;
  if (uVar8 != 0) {
    do {
      iVar2 = *(int *)pbVar4;
      pbVar4 = pbVar4 + 4;
      if (iVar2 == 0) {
        return 0xe;
      }
      uVar3 = CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef(DAT_146b50af8 + 0x100);
      if (uVar3 == 0) {
        return 2;
      }
      *(undefined8 *)(uVar3 + 0x18) = 0;
      if (uVar7 == 0) {
        *(ulonglong *)(param_1 + 0x20) = uVar3;
      }
      else {
        *(ulonglong *)(uVar7 + 0x18) = uVar3;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      uVar7 = uVar3;
    } while (uVar5 < uVar8);
  }
  return 1;
}



// FUNCTION 14317a920 FUN_14317a920 body=301 status=ok
// SIG undefined FUN_14317a920(void)

undefined8 * FUN_14317a920(undefined8 *param_1,undefined8 param_2,longlong *param_3,byte param_4)

{
  char cVar1;
  byte bVar2;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined1 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_30 = 0;
  local_28 = 0;
  local_10 = 0;
  local_20 = 0xff;
  local_18 = 0xff;
  local_38 = param_2;
  FUN_1431aaf50(param_1,&local_38,1);
  *param_1 = &PTR_FUN_145acadb0;
  FUN_141713660(param_1 + 0xb);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  AkPositioningParams::AkPositioningParams(param_1 + 0x27);
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(byte *)((longlong)param_1 + 0x17d) = *(byte *)((longlong)param_1 + 0x17d) & 0xfc;
  bVar2 = (param_4 & 1) << 6 | 0x14;
  param_1[0x2d] = 0;
  *(byte *)((longlong)param_1 + 0x17c) = bVar2;
  param_1[0x2e] = param_3;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  if ((*(uint *)(param_3 + 0x14) & 0xe0000) == 0) {
    if ((param_3[0x11] == 0) && (param_3[0x10] == 0)) {
      cVar1 = '\0';
    }
    else {
      cVar1 = CAkParameterNodeBase::IsInHdrHierarchy();
    }
  }
  else {
    cVar1 = '\x01';
  }
  *(byte *)((longlong)param_1 + 0x17c) = cVar1 << 7 | bVar2;
  *(int *)(param_1[3] + 0x50) = *(int *)(param_1[3] + 0x50) + 1;
  (**(code **)(*param_3 + 8))(param_3);
  *(undefined4 *)(param_1 + 0x25) = 0x42ca0000;
  return param_1;
}



// FUNCTION 14317aa50 FUN_14317aa50 body=107 status=ok
// SIG undefined FUN_14317aa50(void)

void FUN_14317aa50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145acadb0;
  if ((void *)param_1[0x2b] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[0x2b]);
    param_1[0x2b] = 0;
    *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  }
  AkPositioningParams::~AkPositioningParams(param_1 + 0x27);
  FUN_1431aceb0(param_1 + 0xb);
  FUN_1431ab010(param_1);
  return;
}



// FUNCTION 14317aac0 FUN_14317aac0 body=141 status=ok
// SIG undefined FUN_14317aac0(void)

undefined8 * FUN_14317aac0(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_145acadb0;
  if ((void *)param_1[0x2b] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[0x2b]);
    param_1[0x2b] = 0;
    *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  }
  AkPositioningParams::~AkPositioningParams(param_1 + 0x27);
  FUN_1431aceb0(param_1 + 0xb);
  FUN_1431ab010(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x180);
  }
  return param_1;
}



// FUNCTION 14317ab50 FUN_14317ab50 body=152 status=ok
// SIG undefined FUN_14317ab50(void)

longlong FUN_14317ab50(longlong *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 1);
  if ((*(uint *)((longlong)param_1 + 0xc) <= uVar1) &&
     (cVar2 = FUN_143172350(param_1,1), cVar2 == '\0')) {
    return 0;
  }
  if (*(uint *)((longlong)param_1 + 0xc) <= uVar1) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar1 + 1;
  lVar3 = (ulonglong)uVar1 * 0x68 + *param_1;
  if (lVar3 != 0) {
    *(undefined4 *)(lVar3 + 0x30) = 0x3f800000;
    *(undefined8 *)(lVar3 + 0x24) = 0;
    *(undefined4 *)(lVar3 + 0x2c) = 0;
    *(undefined8 *)(lVar3 + 0x40) = 0;
    *(undefined4 *)(lVar3 + 0x48) = 0;
    *(undefined8 *)(lVar3 + 0x50) = 0;
    *(undefined4 *)(lVar3 + 100) = 0;
    *(undefined4 *)(lVar3 + 0x34) = 0x3f800000;
    *(undefined8 *)(lVar3 + 0x38) = 0x3f800000;
    *(undefined4 *)(lVar3 + 0x4c) = 0xffffffff;
    *(undefined4 *)(lVar3 + 0x58) = 0x3f800000;
    *(undefined8 *)(lVar3 + 0x5c) = 0x3f800000;
  }
  return lVar3;
}



// FUNCTION 14317abf0 FUN_14317abf0 body=439 status=ok
// SIG undefined FUN_14317abf0(void)

undefined8 FUN_14317abf0(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  void *pvVar7;
  undefined8 *puVar8;
  longlong lVar9;
  void *pvVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  lVar6 = 0;
  lVar9 = *(longlong *)(param_1 + 0x18);
  if (*(int *)(lVar9 + 0x40) != 0) {
    lVar6 = **(longlong **)(lVar9 + 0x38);
  }
  uVar3 = *(ushort *)(lVar6 + 0x38);
  uVar13 = (ulonglong)uVar3;
  if (uVar3 != 0) {
    pvVar7 = AK::MemoryMgr::Malloc(g_DefaultPoolId,uVar13 * 0x30);
    *(void **)(param_1 + 0x158) = pvVar7;
    if (pvVar7 == (void *)0x0) {
      return 0x34;
    }
    *(uint *)(param_1 + 0x164) = (uint)uVar3;
    lVar9 = *(longlong *)(param_1 + 0x18);
  }
  lVar6 = 0;
  if (*(int *)(lVar9 + 0x40) != 0) {
    lVar6 = **(longlong **)(lVar9 + 0x38);
  }
  puVar11 = *(undefined8 **)(lVar6 + 0x20);
  if (uVar3 != 0) {
    do {
      uVar4 = *(uint *)(param_1 + 0x160);
      if (uVar4 < *(uint *)(param_1 + 0x164)) {
LAB_14317ad34:
        uVar4 = *(uint *)(param_1 + 0x160);
        *(uint *)(param_1 + 0x160) = uVar4 + 1;
        puVar8 = (undefined8 *)((ulonglong)uVar4 * 0x30 + *(longlong *)(param_1 + 0x158));
      }
      else {
        uVar1 = *(uint *)(param_1 + 0x164) + 1;
        pvVar7 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 * 0x30);
        if (pvVar7 != (void *)0x0) {
          pvVar10 = *(void **)(param_1 + 0x158);
          if ((pvVar10 != (void *)0x0) && (pvVar10 != pvVar7)) {
            uVar12 = (ulonglong)*(uint *)(param_1 + 0x160);
            if (uVar12 != 0) {
              lVar9 = 0;
              do {
                lVar6 = *(longlong *)(param_1 + 0x158);
                uVar5 = ((undefined8 *)(lVar9 + lVar6))[1];
                *(undefined8 *)(lVar9 + (longlong)pvVar7) = *(undefined8 *)(lVar9 + lVar6);
                ((undefined8 *)(lVar9 + (longlong)pvVar7))[1] = uVar5;
                puVar8 = (undefined8 *)(lVar9 + 0x10 + lVar6);
                uVar5 = puVar8[1];
                puVar2 = (undefined8 *)(lVar9 + 0x10 + (longlong)pvVar7);
                *puVar2 = *puVar8;
                puVar2[1] = uVar5;
                puVar8 = (undefined8 *)(lVar9 + 0x20 + lVar6);
                uVar5 = puVar8[1];
                puVar2 = (undefined8 *)(lVar9 + 0x20 + (longlong)pvVar7);
                *puVar2 = *puVar8;
                puVar2[1] = uVar5;
                uVar12 = uVar12 - 1;
                lVar9 = lVar9 + 0x30;
              } while (uVar12 != 0);
              pvVar10 = *(void **)(param_1 + 0x158);
            }
            AK::MemoryMgr::Free(g_DefaultPoolId,pvVar10);
          }
          *(void **)(param_1 + 0x158) = pvVar7;
          *(uint *)(param_1 + 0x164) = uVar1;
          if (uVar4 < uVar1) goto LAB_14317ad34;
        }
        puVar8 = (undefined8 *)0x0;
      }
      uVar5 = puVar11[1];
      *puVar8 = *puVar11;
      puVar8[1] = uVar5;
      uVar5 = puVar11[3];
      puVar8[2] = puVar11[2];
      puVar8[3] = uVar5;
      puVar2 = puVar11 + 4;
      uVar5 = puVar11[5];
      puVar11 = puVar11 + 6;
      puVar8[4] = *puVar2;
      puVar8[5] = uVar5;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  *(byte *)(param_1 + 0x17c) = *(byte *)(param_1 + 0x17c) | 8;
  return 1;
}


