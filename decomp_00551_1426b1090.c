// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1426b1090 FUN_1426b1090 body=337 status=ok
// SIG undefined FUN_1426b1090(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1426b1090(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_108 [32];
  ulonglong local_e8;
  longlong local_e0 [3];
  undefined1 *local_c8;
  ulonglong **ppuStack_c0;
  ulonglong *local_b8;
  longlong local_b0;
  undefined1 *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined1 local_88 [32];
  undefined1 local_68 [16];
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_e8 = param_2;
  cVar1 = FWeakObjectPtr::IsValid(param_2 + 0x140);
  if (((cVar1 != '\0') && (*(longlong *)(local_e8 + 200) != param_1)) &&
     (cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x140), cVar1 != '\0')) {
    local_e0[0] = 0;
    local_e0[1] = 0;
    FUN_142699110(param_1,local_88,0,0);
    local_68._12_4_ = 0;
    local_68._0_12_ = *(undefined1 (*) [12])(param_1 + 0x14);
    FUN_14162bcf0(param_3,local_58,local_88);
    if (*(longlong **)(param_1 + 0x110) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x110) + 0x30))();
    }
    if (*(longlong **)(param_1 + 0x118) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x118) + 0x30))();
    }
    local_b8 = &local_e8;
    local_a8 = local_58;
    local_a0 = local_e0;
    ppuStack_c0 = &local_b8;
    local_c8 = &LAB_14268f6d0;
    local_b0 = param_1;
    local_98 = param_3;
    FUN_142693730(param_1,&local_c8);
    FUN_1426b01e0(param_1);
    if (local_e0[0] != 0) {
      FMemory::Free();
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1426b11f0 isUnit body=112 status=ok
// SIG undefined isUnit(void)

undefined1 physx::PxQuat::isUnit(float *param_1)

{
  char cVar1;
  
  cVar1 = isFinite();
  if ((cVar1 != '\0') &&
     (ABS(SQRT(*param_1 * *param_1 + param_1[1] * param_1[1] + param_1[2] * param_1[2] +
               param_1[3] * param_1[3]) - 1.0) < 0.0001)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1426b1260 isValid body=114 status=ok
// SIG undefined isValid(void)

undefined4 physx::PxBoxGeometry::isValid(int *param_1)

{
  uint uVar1;
  
  if (*param_1 == 3) {
    uVar1 = _fpclass((double)(float)param_1[1]);
    if ((uVar1 & 0x207) == 0) {
      uVar1 = _fpclass((double)(float)param_1[2]);
      if ((uVar1 & 0x207) == 0) {
        uVar1 = _fpclass((double)(float)param_1[3]);
        if (((((uVar1 & 0x207) == 0) && (0.0 < (float)param_1[1])) && (0.0 < (float)param_1[2])) &&
           (0.0 < (float)param_1[3])) {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1426b12e0 isValid body=87 status=ok
// SIG undefined isValid(void)

undefined4 physx::PxCapsuleGeometry::isValid(int *param_1)

{
  uint uVar1;
  
  if (*param_1 == 2) {
    uVar1 = _fpclass((double)(float)param_1[1]);
    if ((uVar1 & 0x207) == 0) {
      uVar1 = _fpclass((double)(float)param_1[2]);
      if ((((uVar1 & 0x207) == 0) && (0.0 < (float)param_1[1])) && (0.0 < (float)param_1[2])) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1426b1340 FUN_1426b1340 body=169 status=ok
// SIG undefined FUN_1426b1340(void)

undefined4 FUN_1426b1340(int *param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  if (*param_1 == 4) {
    uVar4 = _fpclass((double)(float)param_1[1]);
    if ((uVar4 & 0x207) == 0) {
      uVar4 = _fpclass((double)(float)param_1[2]);
      if ((uVar4 & 0x207) == 0) {
        uVar4 = _fpclass((double)(float)param_1[3]);
        if ((uVar4 & 0x207) == 0) {
          cVar3 = physx::PxQuat::isUnit(param_1 + 4);
          if (cVar3 != '\0') {
            fVar6 = (float)param_1[2];
            fVar1 = (float)param_1[3];
            fVar2 = (float)param_1[1];
            fVar5 = fVar6;
            if (fVar6 <= fVar1) {
              fVar5 = fVar1;
            }
            if (fVar5 <= fVar2) {
              fVar5 = fVar2;
            }
            if (fVar5 <= 1e+06) {
              if (fVar1 <= fVar6) {
                fVar6 = fVar1;
              }
              if (fVar2 <= fVar6) {
                fVar6 = fVar2;
              }
              if ((1e-06 <= fVar6) && (*(longlong *)(param_1 + 8) != 0)) {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1426b13f0 FUN_1426b13f0 body=60 status=ok
// SIG undefined FUN_1426b13f0(void)

undefined4 FUN_1426b13f0(int *param_1)

{
  uint uVar1;
  
  if (*param_1 == 0) {
    uVar1 = _fpclass((double)(float)param_1[1]);
    if (((uVar1 & 0x207) == 0) && (0.0 < (float)param_1[1])) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1426b1430 scaleInertia body=2477 status=ok
// SIG undefined scaleInertia(void)

float * physx::PxMassProperties::scaleInertia
                  (float *param_1,float *param_2,float *param_3,float *param_4)

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
  
  fVar2 = param_3[1];
  fVar4 = *param_3;
  fVar6 = fVar4 + fVar4;
  fVar25 = param_3[2];
  fVar19 = fVar2 + fVar2;
  fVar8 = param_3[3];
  fVar17 = param_2[8];
  fVar1 = (fVar25 + fVar25) * fVar8;
  fVar3 = (fVar25 + fVar25) * fVar25;
  fVar21 = fVar1 + fVar6 * fVar2;
  fVar1 = fVar6 * fVar2 - fVar1;
  fVar23 = param_2[5];
  fVar9 = param_2[6];
  fVar14 = 1.0 - fVar4 * fVar6;
  fVar26 = fVar6 * fVar25 - fVar19 * fVar8;
  fVar20 = fVar19 * fVar8 + fVar6 * fVar25;
  fVar12 = fVar19 * fVar25 + fVar6 * fVar8;
  fVar24 = fVar19 * fVar25 - fVar6 * fVar8;
  fVar15 = fVar14 - fVar19 * fVar2;
  fVar14 = fVar14 - fVar3;
  fVar3 = (1.0 - fVar19 * fVar2) - fVar3;
  fVar2 = param_2[7];
  fVar4 = param_2[4];
  fVar25 = param_2[3];
  fVar8 = param_2[2];
  fVar10 = fVar24 * fVar23 + fVar14 * fVar4 + fVar21 * fVar25;
  fVar6 = param_2[1];
  fVar19 = *param_2;
  fVar27 = fVar26 * fVar19 + fVar6 * fVar12 + fVar8 * fVar15;
  fVar22 = fVar21 * fVar19 + fVar6 * fVar14 + fVar8 * fVar24;
  fVar7 = fVar15 * fVar23 + fVar12 * fVar4 + fVar26 * fVar25;
  fVar11 = fVar14 * fVar2 + fVar21 * fVar9 + fVar24 * fVar17;
  fVar16 = fVar12 * fVar2 + fVar26 * fVar9 + fVar15 * fVar17;
  fVar13 = fVar11 * fVar24 + fVar14 * fVar10 + fVar21 * fVar22;
  fVar18 = param_4[1];
  fVar5 = param_4[2];
  fVar25 = (fVar3 * fVar9 + fVar1 * fVar2 + fVar20 * fVar17) * fVar20 +
           fVar1 * (fVar3 * fVar25 + fVar1 * fVar4 + fVar20 * fVar23) +
           fVar3 * (fVar3 * fVar19 + fVar6 * fVar1 + fVar8 * fVar20);
  fVar4 = fVar7 * fVar12 + fVar27 * fVar26 + fVar16 * fVar15;
  fVar8 = (fVar25 + fVar13 + fVar4) * 0.5;
  fVar2 = *param_4;
  fVar25 = fVar2 * fVar2 * (fVar8 - fVar25);
  fVar17 = fVar18 * fVar18 * (fVar8 - fVar13);
  fVar23 = fVar5 * fVar5 * (fVar8 - fVar4);
  fVar26 = -param_3[1];
  fVar15 = -*param_3;
  fVar8 = -param_3[2];
  fVar13 = fVar18 * fVar2 * fVar5;
  fVar9 = fVar2 * (fVar7 * fVar1 + fVar27 * fVar3 + fVar20 * fVar16) * fVar5;
  fVar5 = fVar18 * (fVar16 * fVar24 + fVar7 * fVar14 + fVar27 * fVar21) * fVar5;
  fVar4 = fVar13 * fVar9;
  fVar6 = fVar15 + fVar15;
  fVar14 = (fVar23 + fVar17) * fVar13;
  fVar12 = (fVar23 + fVar25) * fVar13;
  fVar19 = fVar13 * fVar5;
  fVar16 = fVar13 * (fVar17 + fVar25);
  fVar7 = fVar26 + fVar26;
  fVar5 = fVar13 * fVar5;
  fVar9 = fVar13 * fVar9;
  fVar13 = fVar13 * fVar2 * (fVar1 * fVar10 + fVar3 * fVar22 + fVar11 * fVar20) * fVar18;
  fVar17 = (fVar8 + fVar8) * param_3[3];
  fVar2 = (fVar8 + fVar8) * fVar8;
  fVar18 = (1.0 - fVar7 * fVar26) - fVar2;
  fVar10 = fVar6 * fVar8 - fVar7 * param_3[3];
  fVar1 = fVar17 + fVar6 * fVar26;
  fVar17 = fVar6 * fVar26 - fVar17;
  fVar23 = 1.0 - fVar6 * fVar15;
  fVar11 = fVar7 * fVar8 - fVar6 * param_3[3];
  fVar3 = fVar7 * fVar8 + fVar6 * param_3[3];
  fVar2 = fVar23 - fVar2;
  fVar25 = fVar7 * param_3[3] + fVar6 * fVar8;
  fVar23 = fVar23 - fVar7 * fVar26;
  fVar6 = fVar18 * fVar4 + fVar17 * fVar19 + fVar25 * fVar16;
  fVar8 = fVar1 * fVar4 + fVar2 * fVar19 + fVar11 * fVar16;
  fVar15 = fVar18 * fVar13 + fVar17 * fVar12 + fVar25 * fVar5;
  fVar20 = fVar1 * fVar13 + fVar2 * fVar12 + fVar11 * fVar5;
  fVar7 = fVar13 * fVar10 + fVar12 * fVar3 + fVar5 * fVar23;
  fVar12 = fVar4 * fVar10 + fVar19 * fVar3 + fVar16 * fVar23;
  fVar5 = fVar18 * fVar14 + fVar17 * fVar13 + fVar25 * fVar9;
  fVar19 = fVar1 * fVar14 + fVar2 * fVar13 + fVar11 * fVar9;
  fVar4 = fVar14 * fVar10 + fVar13 * fVar3 + fVar9 * fVar23;
  *param_1 = fVar5 * fVar18 + fVar15 * fVar17 + fVar25 * fVar6;
  param_1[1] = fVar19 * fVar18 + fVar20 * fVar17 + fVar25 * fVar8;
  param_1[2] = fVar18 * fVar4 + fVar17 * fVar7 + fVar25 * fVar12;
  param_1[3] = fVar5 * fVar1 + fVar15 * fVar2 + fVar11 * fVar6;
  param_1[4] = fVar19 * fVar1 + fVar20 * fVar2 + fVar11 * fVar8;
  param_1[5] = fVar1 * fVar4 + fVar2 * fVar7 + fVar11 * fVar12;
  param_1[6] = fVar5 * fVar10 + fVar15 * fVar3 + fVar6 * fVar23;
  param_1[7] = fVar19 * fVar10 + fVar20 * fVar3 + fVar8 * fVar23;
  param_1[8] = fVar4 * fVar10 + fVar7 * fVar3 + fVar23 * fVar12;
  return param_1;
}



// FUNCTION 1426b1de0 sum body=2712 status=ok
// SIG undefined sum(void)

float * physx::PxMassProperties::sum(float *param_1,longlong param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float fVar2;
  ulonglong uVar3;
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
  float local_148;
  float local_144;
  float local_12c;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  
  fVar9 = 0.0;
  fVar25 = 0.0;
  fVar27 = 0.0;
  fVar30 = 0.0;
  local_f4 = 0.0;
  local_148 = 0.0;
  local_144 = 0.0;
  local_12c = 0.0;
  if (param_4 != 0) {
    pfVar4 = (float *)(param_2 + 0x2c);
    uVar3 = (ulonglong)param_4;
    pfVar5 = (float *)(param_3 + 0x18);
    do {
      fVar25 = pfVar5[-3];
      fVar6 = pfVar5[-5];
      fVar2 = pfVar5[-6];
      fVar7 = pfVar5[-4];
      fVar8 = pfVar4[1];
      fVar27 = fVar27 + fVar8;
      fVar23 = pfVar4[-2] + pfVar4[-2];
      fVar14 = pfVar4[-1] + pfVar4[-1];
      fVar19 = *pfVar4 + *pfVar4;
      pfVar4 = pfVar4 + 0xd;
      fVar17 = fVar25 * fVar25 - 0.5;
      fVar12 = fVar2 * fVar23 + fVar6 * fVar14 + fVar7 * fVar19;
      fVar30 = fVar30 + ((fVar6 * fVar19 - fVar7 * fVar14) * fVar25 + fVar17 * fVar23 +
                         fVar2 * fVar12 + pfVar5[-2]) * fVar8;
      pfVar1 = pfVar5 + -1;
      fVar10 = *pfVar5;
      pfVar5 = pfVar5 + 7;
      fVar9 = local_148 +
              ((fVar7 * fVar23 - fVar2 * fVar19) * fVar25 + fVar17 * fVar14 + fVar6 * fVar12 +
              *pfVar1) * fVar8;
      fVar25 = local_144 +
               ((fVar2 * fVar14 - fVar6 * fVar23) * fVar25 + fVar17 * fVar19 + fVar7 * fVar12 +
               fVar10) * fVar8;
      uVar3 = uVar3 - 1;
      local_148 = fVar9;
      local_144 = fVar25;
      local_f4 = fVar27;
    } while (uVar3 != 0);
  }
  fVar6 = 0.0;
  fVar27 = 1.0 / local_f4;
  fStack_bc = 0.0;
  fStack_c0 = 0.0;
  local_c8 = 0.0;
  fStack_c4 = 0.0;
  fStack_d0 = 0.0;
  fStack_cc = 0.0;
  local_d8 = 0.0;
  fStack_d4 = 0.0;
  if (param_4 != 0) {
    pfVar4 = (float *)(param_3 + 0x18);
    pfVar5 = (float *)(param_2 + 0x2c);
    local_fc = 0.0;
    local_100 = 0.0;
    local_104 = 0.0;
    local_f8 = 0.0;
    local_10c = 0.0;
    local_110 = 0.0;
    local_114 = 0.0;
    local_108 = 0.0;
    uVar3 = (ulonglong)param_4;
    do {
      fVar6 = pfVar4[-5];
      fVar2 = pfVar4[-4];
      fVar7 = pfVar4[-6];
      fVar8 = pfVar4[-3];
      fVar17 = pfVar5[-1] + pfVar5[-1];
      fVar23 = *pfVar5 + *pfVar5;
      fVar15 = pfVar5[-2] + pfVar5[-2];
      fVar19 = fVar8 * fVar8 - 0.5;
      fVar10 = fVar7 * fVar15 + fVar6 * fVar17 + fVar2 * fVar23;
      fVar12 = fVar30 * fVar27 -
               ((fVar6 * fVar23 - fVar2 * fVar17) * fVar8 + fVar19 * fVar15 + fVar7 * fVar10 +
               pfVar4[-2]);
      fVar13 = fVar6 + fVar6;
      fVar14 = fVar9 * fVar27 -
               ((fVar2 * fVar15 - fVar7 * fVar23) * fVar8 + fVar19 * fVar17 + fVar6 * fVar10 +
               pfVar4[-1]);
      fVar11 = fVar7 + fVar7;
      fVar17 = fVar25 * fVar27 -
               ((fVar7 * fVar17 - fVar6 * fVar15) * fVar8 + fVar19 * fVar23 + fVar2 * fVar10 +
               *pfVar4);
      fVar23 = (fVar2 + fVar2) * fVar2;
      fVar16 = 1.0 - fVar7 * fVar11;
      fVar19 = (fVar2 + fVar2) * fVar8;
      fVar31 = (1.0 - fVar13 * fVar6) - fVar23;
      fVar26 = fVar11 * fVar2 - fVar13 * fVar8;
      fVar15 = fVar13 * fVar8 + fVar11 * fVar2;
      fVar20 = fVar19 + fVar11 * fVar6;
      fVar19 = fVar11 * fVar6 - fVar19;
      fVar7 = pfVar5[-3];
      fVar23 = fVar16 - fVar23;
      fVar10 = pfVar5[-4];
      fVar28 = fVar13 * fVar2 - fVar11 * fVar8;
      fVar18 = fVar13 * fVar2 + fVar11 * fVar8;
      fVar16 = fVar16 - fVar13 * fVar6;
      fVar6 = pfVar5[-5];
      fVar2 = pfVar5[-6];
      fVar32 = fVar26 * fVar6 + fVar18 * fVar10 + fVar16 * fVar7;
      fVar11 = fVar20 * fVar6 + fVar23 * fVar10 + fVar28 * fVar7;
      fVar24 = fVar31 * fVar6 + fVar19 * fVar10 + fVar15 * fVar7;
      fVar6 = pfVar5[-7];
      fVar7 = pfVar5[-8];
      fVar8 = pfVar5[-9];
      fVar10 = pfVar5[-10];
      fVar29 = fVar31 * fVar7 + fVar19 * fVar6 + fVar15 * fVar2;
      fVar33 = fVar20 * fVar7 + fVar23 * fVar6 + fVar28 * fVar2;
      fVar21 = fVar26 * fVar7 + fVar18 * fVar6 + fVar16 * fVar2;
      fVar13 = pfVar5[-0xb] * fVar20 + fVar23 * fVar10 + fVar8 * fVar28;
      fVar22 = pfVar5[-0xb] * fVar31 + fVar10 * fVar19 + fVar8 * fVar15;
      fVar6 = pfVar5[-0xb] * fVar26 + fVar10 * fVar18 + fVar16 * fVar8;
      fVar7 = -fVar12;
      fVar2 = pfVar5[1];
      fVar8 = -fVar17;
      fVar10 = -fVar14;
      fStack_cc = local_108 +
                  fVar10 * fVar12 * fVar2 + fVar22 * fVar20 + fVar29 * fVar23 + fVar24 * fVar28;
      fStack_d4 = local_110 +
                  fVar10 * fVar12 * fVar2 + fVar13 * fVar31 + fVar33 * fVar19 + fVar11 * fVar15;
      fStack_d0 = local_10c +
                  fVar7 * fVar17 * fVar2 + fVar6 * fVar31 + fVar21 * fVar19 + fVar32 * fVar15;
      local_c8 = local_104 +
                 (fVar12 * fVar12 + fVar8 * fVar8) * fVar2 +
                 fVar13 * fVar20 + fVar33 * fVar23 + fVar11 * fVar28;
      fStack_c4 = local_100 +
                  fVar8 * fVar14 * fVar2 + fVar6 * fVar20 + fVar21 * fVar23 + fVar32 * fVar28;
      fStack_bc = local_f8 +
                  fVar8 * fVar14 * fVar2 + fVar13 * fVar26 + fVar33 * fVar18 + fVar11 * fVar16;
      fVar6 = local_12c +
              (fVar14 * fVar14 + fVar7 * fVar7) * fVar2 +
              fVar6 * fVar26 + fVar21 * fVar18 + fVar32 * fVar16;
      fStack_c0 = local_fc +
                  fVar7 * fVar17 * fVar2 + fVar22 * fVar26 + fVar29 * fVar18 + fVar24 * fVar16;
      local_d8 = local_114 +
                 (fVar17 * fVar17 + fVar10 * fVar10) * fVar2 +
                 fVar22 * fVar31 + fVar29 * fVar19 + fVar24 * fVar15;
      pfVar4 = pfVar4 + 7;
      pfVar5 = pfVar5 + 0xd;
      uVar3 = uVar3 - 1;
      local_12c = fVar6;
      local_114 = local_d8;
      local_110 = fStack_d4;
      local_10c = fStack_d0;
      local_108 = fStack_cc;
      local_104 = local_c8;
      local_100 = fStack_c4;
      local_fc = fStack_c0;
      local_f8 = fStack_bc;
    } while (uVar3 != 0);
  }
  *param_1 = local_d8;
  param_1[1] = fStack_d4;
  param_1[2] = fStack_d0;
  param_1[3] = fStack_cc;
  param_1[4] = local_c8;
  param_1[5] = fStack_c4;
  param_1[6] = fStack_c0;
  param_1[7] = fStack_bc;
  param_1[8] = fVar6;
  param_1[9] = fVar30 * fVar27;
  param_1[0xb] = fVar25 * fVar27;
  param_1[10] = fVar9 * fVar27;
  param_1[0xc] = local_f4;
  return param_1;
}



// FUNCTION 1426b2880 zzGetMembersBefore body=531 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FParticleSpriteUniformParameters::zzGetMembersBefore(longlong *param_1)

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
  *puVar1 = L"RotationScale";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x80;
  puVar2[1] = 4;
  puVar2[2] = 1;
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
  *puVar1 = L"RotationBias";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x84;
  puVar2[1] = 4;
  puVar2[2] = 1;
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
  *puVar1 = L"NormalsType";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x88;
  puVar2[1] = 4;
  puVar2[2] = 1;
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
  *puVar1 = L"InvDeltaSeconds";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x40000008c;
  puVar1[1] = 0x100000001;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 1426b2aa0 zzGetMembersBefore body=525 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FParticleSpriteUniformParameters::zzGetMembersBefore(longlong *param_1)

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
  *puVar1 = L"SubImageSize";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x50;
  puVar2[1] = 4;
  puVar2[2] = 1;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
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
  *puVar1 = L"CameraFacingBlend";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x60;
  puVar2[1] = 4;
  puVar2[2] = 1;
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
  *puVar1 = L"RemoveHMDRoll";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x6c;
  puVar2[1] = 4;
  puVar2[2] = 1;
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
  *puVar1 = L"MacroUVParameters";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000070;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 1426b2cb0 zzGetMembersBefore body=628 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FParticleSpriteUniformParameters::zzGetMembersBefore(longlong *param_1)

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
  *puVar3 = L"AxisLockRight";
  puVar3[1] = &DAT_143f3eda8;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x14) = 4;
  *(undefined4 *)(puVar3 + 3) = 1;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = 1;
  *(undefined4 *)(puVar3 + 4) = 4;
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
  *puVar3 = L"AxisLockUp";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x10;
  puVar1[1] = 4;
  puVar1[2] = 1;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
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
  *puVar3 = L"TangentSelector";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x20;
  puVar1[1] = 4;
  puVar1[2] = 1;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
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
  *puVar3 = L"NormalsSphereCenter";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x30;
  puVar1[1] = 4;
  puVar1[2] = 1;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
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
  *puVar3 = L"NormalsCylinderUnitDirection";
  puVar3[1] = &DAT_143f3eda8;
  puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar3 = 0x400000040;
  puVar3[1] = 0x100000001;
  puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar3 = 4;
  puVar3[1] = 0;
  return param_1;
}



// FUNCTION 1426b2f30 FUN_1426b2f30 body=642 status=ok
// SIG undefined FUN_1426b2f30(void)

void FUN_1426b2f30(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float local_res10 [2];
  undefined8 *local_res18;
  float local_res20 [2];
  undefined8 local_90;
  undefined8 local_88;
  longlong *local_80;
  int local_78;
  undefined4 local_74;
  undefined1 local_70 [56];
  
  iVar12 = 0;
  if (0 < (int)param_2[1]) {
    lVar10 = 0;
    local_res18 = param_3;
    do {
      plVar8 = (longlong *)0x0;
      lVar1 = *(longlong *)(param_1 + 0x48);
      lVar11 = *param_2 + lVar10;
      local_90 = 3;
      local_88 = 0;
      local_80 = (longlong *)0x0;
      local_74 = 0;
      iVar9 = 0;
      if (lVar1 != 0) {
        lVar5 = FUN_142a0cc80();
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((bVar3) && (iVar9 = 0, &local_80 != (longlong **)(lVar1 + 0x920))) {
          local_78 = *(int *)(lVar1 + 0x928);
          lVar5 = (longlong)local_78;
          plVar2 = *(longlong **)(lVar1 + 0x920);
          plVar8 = (longlong *)0x0;
          iVar9 = local_78;
          if (local_78 != 0) {
            TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                      (&local_80,local_78,0);
            plVar8 = local_80;
            _guard_xfg_dispatch_icall_nop(local_80,plVar2,lVar5 << 3);
            iVar9 = local_78;
          }
        }
      }
      plVar2 = *(longlong **)(lVar11 + 0x50);
      plVar7 = plVar2;
      if (plVar2 != plVar2 + *(int *)(lVar11 + 0x58)) {
LAB_1426b3055:
        if (*plVar7 == 0) goto code_r0x0001426b305e;
        for (plVar7 = plVar8; plVar7 != plVar8 + iVar9; plVar7 = plVar7 + 1) {
          if (plVar2 != plVar2 + *(int *)(lVar11 + 0x58)) {
            plVar6 = plVar2;
            do {
              if (*plVar6 == *plVar7) goto LAB_1426b3067;
              plVar6 = plVar6 + 1;
            } while (plVar6 != plVar2 + *(int *)(lVar11 + 0x58));
          }
        }
        bVar3 = true;
        goto LAB_1426b3069;
      }
LAB_1426b3067:
      bVar3 = false;
LAB_1426b3069:
      if (plVar8 != (longlong *)0x0) {
        FMemory::Free(plVar8);
      }
      if ((!bVar3) && (cVar4 = FUN_1426b46d0(param_1,lVar11,&local_90,local_70), cVar4 != '\0')) {
        fVar13 = local_88._4_4_;
        if ((float)local_88 <= local_88._4_4_) {
          fVar13 = (float)local_88;
        }
        local_res10[0] = *(float *)(lVar11 + 8);
        if (local_90._4_4_ <= fVar13) {
          fVar13 = local_90._4_4_;
        }
        fVar13 = fVar13 * *(float *)(param_1 + 0x38);
        fVar14 = *(float *)(param_1 + 0x3c);
        if ((*(float *)(param_1 + 0x3c) <= fVar13) &&
           (fVar14 = *(float *)(param_1 + 0x40), fVar13 <= *(float *)(param_1 + 0x40))) {
          fVar14 = fVar13;
        }
        local_res20[0] = local_res10[0] + 1.0;
        if (local_res10[0] + 1.0 <= fVar14) {
          local_res20[0] = fVar14;
        }
        (*(code *)*local_res18)(local_res18[1],lVar11,&local_90,local_70,local_res20,local_res10);
      }
      iVar12 = iVar12 + 1;
      lVar10 = lVar10 + 0xe0;
    } while (iVar12 < (int)param_2[1]);
  }
  return;
code_r0x0001426b305e:
  plVar7 = plVar7 + 1;
  if (plVar7 == plVar2 + *(int *)(lVar11 + 0x58)) goto LAB_1426b3067;
  goto LAB_1426b3055;
}



// FUNCTION 1426b31c0 FUN_1426b31c0 body=802 status=ok
// SIG undefined FUN_1426b31c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1426b31c0(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  float fVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  float *pfVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_148 [32];
  float *local_128;
  float *local_120;
  float local_118 [2];
  float local_110 [2];
  longlong *local_108;
  int local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 *local_f0;
  longlong *local_e8;
  undefined1 local_e0 [32];
  undefined1 local_c0 [24];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 local_94;
  undefined4 local_8c;
  longlong *local_88;
  undefined1 local_80;
  undefined2 local_7f;
  undefined1 local_7d;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  uVar12 = 0;
  uVar15 = uVar12;
  local_f0 = param_3;
  local_e8 = param_2;
  if (0 < (int)param_2[1]) {
    do {
      lVar2 = *(longlong *)(param_1 + 0x48);
      lVar13 = *local_e8 + uVar12;
      iVar11 = 0;
      local_a8 = 4;
      local_94 = 0;
      local_8c = 0x3f800000;
      local_88 = (longlong *)0x0;
      local_80 = 0;
      local_7f = 0;
      local_7d = 0;
      local_108 = (longlong *)0x0;
      local_fc = 0;
      local_a4 = 0x3f800000;
      uStack_a0 = 0x3f800000;
      uStack_9c = 0x3f800000;
      uStack_98 = 0;
      plVar10 = (longlong *)0x0;
      if (lVar2 != 0) {
        lVar6 = FUN_142a0cc80();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if ((bVar4) && (plVar10 = (longlong *)0x0, &local_108 != (longlong **)(lVar2 + 0x920))) {
          local_100 = *(int *)(lVar2 + 0x928);
          lVar6 = (longlong)local_100;
          plVar3 = *(longlong **)(lVar2 + 0x920);
          iVar11 = local_100;
          if (local_100 != 0) {
            TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                      (&local_108,local_100,0);
            plVar10 = local_108;
            _guard_xfg_dispatch_icall_nop(local_108,plVar3,lVar6 << 3);
            iVar11 = local_100;
          }
        }
      }
      plVar3 = *(longlong **)(lVar13 + 0x50);
      if (plVar3 != plVar3 + *(int *)(lVar13 + 0x58)) {
        local_f8 = 0;
        plVar9 = plVar3;
LAB_1426b3337:
        if (*plVar9 == 0) goto code_r0x0001426b3340;
        for (plVar9 = plVar10; plVar9 != plVar10 + iVar11; plVar9 = plVar9 + 1) {
          if (plVar3 != plVar3 + *(int *)(lVar13 + 0x58)) {
            plVar8 = plVar3;
            do {
              if (*plVar8 == *plVar9) goto LAB_1426b3349;
              plVar8 = plVar8 + 1;
            } while (plVar8 != plVar3 + *(int *)(lVar13 + 0x58));
          }
        }
        bVar4 = true;
        goto LAB_1426b334b;
      }
LAB_1426b3349:
      bVar4 = false;
LAB_1426b334b:
      if (plVar10 != (longlong *)0x0) {
        FMemory::Free(plVar10);
      }
      if ((!bVar4) && (cVar5 = FUN_1426b48e0(param_1,lVar13,&local_a8,local_e0), cVar5 != '\0')) {
        fVar1 = *(float *)(lVar13 + 8);
        pfVar7 = (float *)(**(code **)(*local_88 + 0x68))(local_88,local_c0);
        fVar18 = (pfVar7[5] - pfVar7[2]) * 0.5;
        fVar16 = (pfVar7[4] - pfVar7[1]) * 0.5;
        fVar17 = (pfVar7[3] - *pfVar7) * 0.5;
        if (fVar16 <= fVar18) {
          fVar18 = fVar16;
        }
        if (fVar17 <= fVar18) {
          fVar18 = fVar17;
        }
        fVar18 = fVar18 * *(float *)(param_1 + 0x38);
        fVar16 = *(float *)(param_1 + 0x3c);
        if ((*(float *)(param_1 + 0x3c) <= fVar18) &&
           (fVar16 = *(float *)(param_1 + 0x40), fVar18 <= *(float *)(param_1 + 0x40))) {
          fVar16 = fVar18;
        }
        local_120 = local_118;
        local_110[0] = fVar1 + 1.0;
        local_128 = local_110;
        if (local_110[0] <= fVar16) {
          local_110[0] = fVar16;
        }
        local_118[0] = fVar1;
        (*(code *)*local_f0)(local_f0[1],lVar13,&local_a8,local_e0);
      }
      uVar14 = (int)uVar15 + 1;
      uVar12 = uVar12 + 0xd0;
      uVar15 = (ulonglong)uVar14;
    } while ((int)uVar14 < (int)local_e8[1]);
  }
  return;
code_r0x0001426b3340:
  plVar9 = plVar9 + 1;
  if (plVar9 == plVar3 + *(int *)(lVar13 + 0x58)) goto LAB_1426b3349;
  goto LAB_1426b3337;
}



// FUNCTION 1426b34f0 FUN_1426b34f0 body=820 status=ok
// SIG undefined FUN_1426b34f0(void)

void FUN_1426b34f0(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float local_res20 [2];
  undefined8 local_168;
  float local_160 [2];
  longlong *local_158;
  int local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined **local_118 [10];
  longlong local_c8;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  float local_6c;
  
  iVar10 = 0;
  if (0 < (int)param_2[1]) {
    lVar11 = 0;
    do {
      plVar8 = (longlong *)0x0;
      lVar1 = *(longlong *)(param_1 + 0x48);
      lVar12 = *param_2 + lVar11;
      local_168 = 0;
      local_158 = (longlong *)0x0;
      local_14c = 0;
      iVar9 = 0;
      if (lVar1 != 0) {
        lVar5 = FUN_142a0cc80();
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((bVar3) && (iVar9 = 0, &local_158 != (longlong **)(lVar1 + 0x920))) {
          local_150 = *(int *)(lVar1 + 0x928);
          lVar5 = (longlong)local_150;
          plVar2 = *(longlong **)(lVar1 + 0x920);
          plVar8 = (longlong *)0x0;
          iVar9 = local_150;
          if (local_150 != 0) {
            TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                      (&local_158,local_150,0);
            plVar8 = local_158;
            _guard_xfg_dispatch_icall_nop(local_158,plVar2,lVar5 << 3);
            iVar9 = local_150;
          }
        }
      }
      plVar2 = *(longlong **)(lVar12 + 0x50);
      if (plVar2 != plVar2 + *(int *)(lVar12 + 0x58)) {
        local_148 = 0;
        plVar7 = plVar2;
LAB_1426b3630:
        if (*plVar7 == 0) goto code_r0x0001426b3639;
        for (plVar7 = plVar8; plVar7 != plVar8 + iVar9; plVar7 = plVar7 + 1) {
          if (plVar2 != plVar2 + *(int *)(lVar12 + 0x58)) {
            plVar6 = plVar2;
            do {
              if (*plVar6 == *plVar7) goto LAB_1426b3642;
              plVar6 = plVar6 + 1;
            } while (plVar6 != plVar2 + *(int *)(lVar12 + 0x58));
          }
        }
        bVar3 = true;
        goto LAB_1426b3644;
      }
LAB_1426b3642:
      bVar3 = false;
LAB_1426b3644:
      if (plVar8 != (longlong *)0x0) {
        FMemory::Free(plVar8);
      }
      if (!bVar3) {
        FUN_1426c7f60(lVar12,local_118,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10))
        ;
        local_168._4_4_ = local_6c;
        if (local_6c <= 0.0001) {
          local_168._4_4_ = 0.0001;
        }
        if ((((int)local_168 != 0) ||
            (uVar4 = _fpclass((double)local_168._4_4_), (uVar4 & 0x207) != 0)) ||
           (local_168._4_4_ <= 0.0)) {
          local_118[0] = &PTR__scalar_deleting_destructor__1440fbd58;
          if (local_c8 != 0) {
            FMemory::Free();
          }
        }
        else {
          local_12c = local_74;
          local_118[0] = &PTR__scalar_deleting_destructor__1440fbd58;
          local_140 = 0;
          uStack_138 = 0x3f80000000000000;
          local_130 = local_78;
          local_128 = local_70;
          if (local_c8 != 0) {
            FMemory::Free();
          }
          fVar14 = local_168._4_4_ * *(float *)(param_1 + 0x38);
          local_res20[0] = *(float *)(lVar12 + 8);
          fVar13 = *(float *)(param_1 + 0x3c);
          if ((*(float *)(param_1 + 0x3c) <= fVar14) &&
             (fVar13 = *(float *)(param_1 + 0x40), fVar14 <= *(float *)(param_1 + 0x40))) {
            fVar13 = fVar14;
          }
          local_160[0] = local_res20[0] + 1.0;
          if (local_res20[0] + 1.0 <= fVar13) {
            local_160[0] = fVar13;
          }
          (*(code *)*param_3)(param_3[1],lVar12,&local_168,&local_140,local_160,local_res20);
        }
      }
      iVar10 = iVar10 + 1;
      lVar11 = lVar11 + 0xb0;
    } while (iVar10 < (int)param_2[1]);
  }
  return;
code_r0x0001426b3639:
  plVar7 = plVar7 + 1;
  if (plVar7 == plVar2 + *(int *)(lVar12 + 0x58)) goto LAB_1426b3642;
  goto LAB_1426b3630;
}



// FUNCTION 1426b3830 FUN_1426b3830 body=1382 status=ok
// SIG undefined FUN_1426b3830(void)

void FUN_1426b3830(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  float *pfVar10;
  longlong *plVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float local_res20 [2];
  undefined8 local_208;
  float local_200;
  float local_1f8 [2];
  longlong *local_1f0;
  int local_1e8;
  undefined4 local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8 [16];
  undefined **local_1a8 [10];
  longlong local_158;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined1 local_ec [12];
  float local_e0;
  float local_dc;
  
  iVar14 = 0;
  if (0 < (int)param_2[1]) {
    lVar15 = 0;
    do {
      plVar13 = (longlong *)0x0;
      lVar3 = *(longlong *)(param_1 + 0x48);
      iVar12 = 0;
      lVar16 = *param_2 + lVar15;
      local_208 = 2;
      local_200 = 0.0;
      local_1f0 = (longlong *)0x0;
      local_1e4 = 0;
      if (lVar3 != 0) {
        lVar8 = FUN_142a0cc80();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if ((bVar5) && (&local_1f0 != (longlong **)(lVar3 + 0x920))) {
          local_1e8 = *(int *)(lVar3 + 0x928);
          lVar8 = (longlong)local_1e8;
          plVar4 = *(longlong **)(lVar3 + 0x920);
          plVar13 = (longlong *)0x0;
          iVar12 = local_1e8;
          if (local_1e8 != 0) {
            TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                      (&local_1f0,local_1e8,0);
            plVar13 = local_1f0;
            _guard_xfg_dispatch_icall_nop(local_1f0,plVar4,lVar8 << 3);
            iVar12 = local_1e8;
          }
        }
      }
      plVar4 = *(longlong **)(lVar16 + 0x50);
      if (plVar4 != plVar4 + *(int *)(lVar16 + 0x58)) {
        local_1c0 = 0;
        plVar11 = plVar4;
LAB_1426b39a5:
        if (*plVar11 == 0) goto code_r0x0001426b39aa;
        for (plVar11 = plVar13; plVar11 != plVar13 + iVar12; plVar11 = plVar11 + 1) {
          if (plVar4 != plVar4 + *(int *)(lVar16 + 0x58)) {
            plVar9 = plVar4;
            do {
              if (*plVar9 == *plVar11) goto LAB_1426b39b3;
              plVar9 = plVar9 + 1;
            } while (plVar9 != plVar4 + *(int *)(lVar16 + 0x58));
          }
        }
        bVar5 = true;
        goto LAB_1426b39b5;
      }
LAB_1426b39b3:
      bVar5 = false;
LAB_1426b39b5:
      if (plVar13 != (longlong *)0x0) {
        FMemory::Free(plVar13);
      }
      if (!bVar5) {
        FUN_1426c8100(lVar16,local_1a8,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10))
        ;
        local_200 = local_dc * 0.5;
        if (local_200 < 0.0001) {
          local_200 = 0.0001;
        }
        local_208._4_4_ = local_e0;
        if (local_e0 <= 0.0001) {
          local_208._4_4_ = 0.0001;
        }
        if (((((int)local_208 == 2) &&
             (uVar7 = _fpclass((double)local_208._4_4_), (uVar7 & 0x207) == 0)) &&
            (uVar7 = _fpclass((double)local_200), (uVar7 & 0x207) == 0)) &&
           ((0.0 < local_208._4_4_ && (0.0 < local_200)))) {
          pfVar10 = (float *)FRotator::Quaternion(local_ec,local_1b8);
          fVar17 = *pfVar10;
          fVar18 = pfVar10[3];
          fVar1 = pfVar10[1];
          fVar2 = pfVar10[2];
          local_1e0 = (fVar18 * DAT_146534980 + fVar17 * DAT_14653498c + fVar1 * DAT_146534988) -
                      fVar2 * DAT_146534984;
          local_1dc = (fVar1 * DAT_14653498c + fVar18 * DAT_146534984 + fVar2 * DAT_146534980) -
                      fVar17 * DAT_146534988;
          local_1c8 = local_f0;
          local_1d8 = (fVar2 * DAT_14653498c + fVar18 * DAT_146534988 + fVar17 * DAT_146534984) -
                      fVar1 * DAT_146534980;
          local_1cc = local_f4;
          local_1d4 = ((fVar18 * DAT_14653498c - fVar17 * DAT_146534980) - fVar1 * DAT_146534984) -
                      fVar2 * DAT_146534988;
          local_1d0 = local_f8;
          uVar7 = _fpclass((double)local_f8);
          if (((uVar7 & 0x207) == 0) &&
             ((uVar7 = _fpclass((double)local_1cc), (uVar7 & 0x207) == 0 &&
              (uVar7 = _fpclass((double)local_1c8), (uVar7 & 0x207) == 0)))) {
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
          if (((bVar5) && (cVar6 = physx::PxQuat::isFinite(&local_1e0), cVar6 != '\0')) &&
             (cVar6 = physx::PxQuat::isUnit(&local_1e0), cVar6 != '\0')) {
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
          if (bVar5) {
            local_1a8[0] = &PTR__scalar_deleting_destructor__1440fbd58;
            if (local_158 != 0) {
              FMemory::Free();
            }
            fVar18 = local_208._4_4_ * *(float *)(param_1 + 0x38);
            local_res20[0] = *(float *)(lVar16 + 8);
            fVar17 = *(float *)(param_1 + 0x3c);
            if ((*(float *)(param_1 + 0x3c) <= fVar18) &&
               (fVar17 = *(float *)(param_1 + 0x40), fVar18 <= *(float *)(param_1 + 0x40))) {
              fVar17 = fVar18;
            }
            local_1f8[0] = local_res20[0] + 1.0;
            if (local_res20[0] + 1.0 <= fVar17) {
              local_1f8[0] = fVar17;
            }
            (*(code *)*param_3)(param_3[1],lVar16,&local_208,&local_1e0,local_1f8,local_res20);
            goto LAB_1426b3cee;
          }
        }
        local_1a8[0] = &PTR__scalar_deleting_destructor__1440fbd58;
        if (local_158 != 0) {
          FMemory::Free();
        }
      }
LAB_1426b3cee:
      iVar14 = iVar14 + 1;
      lVar15 = lVar15 + 0xd0;
    } while (iVar14 < (int)param_2[1]);
  }
  return;
code_r0x0001426b39aa:
  plVar11 = plVar11 + 1;
  if (plVar11 == plVar4 + *(int *)(lVar16 + 0x58)) goto LAB_1426b39b3;
  goto LAB_1426b39a5;
}



// FUNCTION 1426b3da0 FUN_1426b3da0 body=1008 status=ok
// SIG undefined FUN_1426b3da0(void)

undefined8
FUN_1426b3da0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5,longlong param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  undefined8 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong *local_58;
  int local_50;
  undefined4 local_4c;
  
  plVar9 = (longlong *)0x0;
  local_58 = (longlong *)0x0;
  local_4c = 0;
  iVar10 = 0;
  if (param_6 != 0) {
    lVar4 = FUN_142a0cc80();
    if ((*(int *)(*(longlong *)(param_6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    iVar10 = 0;
    if ((bVar3) && (&local_58 != (longlong **)(param_6 + 0x920))) {
      local_50 = *(int *)(param_6 + 0x928);
      lVar4 = (longlong)local_50;
      plVar7 = *(longlong **)(param_6 + 0x920);
      iVar10 = local_50;
      if (local_50 != 0) {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_58,local_50,0);
        plVar9 = local_58;
        _guard_xfg_dispatch_icall_nop(local_58,plVar7,lVar4 << 3);
        iVar10 = local_50;
      }
    }
  }
  plVar7 = *(longlong **)(param_1 + 0x28);
  fVar12 = 3.4028235e+38;
  uVar13 = 0;
  plVar8 = plVar7 + (longlong)*(int *)(param_1 + 0x30) * 0x16;
  for (; plVar7 != plVar8; plVar7 = plVar7 + 0x16) {
    plVar2 = (longlong *)plVar7[10];
    plVar1 = plVar2 + (int)plVar7[0xb];
    plVar6 = plVar2;
joined_r0x0001426b3eb2:
    if (plVar6 == plVar1) {
LAB_1426b3ed2:
      uVar11 = (**(code **)(*plVar7 + 8))(plVar7,param_2,param_3,&local_78,&local_68);
      if ((float)uVar11 < fVar12) {
        *param_4 = local_78;
        *(undefined4 *)(param_4 + 1) = local_70;
        *param_5 = local_68;
        *(undefined4 *)(param_5 + 1) = local_60;
        fVar12 = (float)uVar11;
        uVar13 = (int)((ulonglong)uVar11 >> 0x20);
      }
    }
    else {
      if (*plVar6 == 0) goto code_r0x0001426b3ec9;
      for (plVar6 = plVar9; plVar6 != plVar9 + iVar10; plVar6 = plVar6 + 1) {
        if (plVar2 != plVar1) {
          plVar5 = plVar2;
          do {
            if (*plVar5 == *plVar6) goto LAB_1426b3ed2;
            plVar5 = plVar5 + 1;
          } while (plVar5 != plVar1);
        }
      }
    }
  }
  plVar7 = *(longlong **)(param_1 + 0x48);
  plVar8 = plVar7 + (longlong)*(int *)(param_1 + 0x50) * 0x1a;
  for (; plVar7 != plVar8; plVar7 = plVar7 + 0x1a) {
    plVar2 = (longlong *)plVar7[10];
    plVar1 = plVar2 + (int)plVar7[0xb];
    plVar6 = plVar2;
joined_r0x0001426b3f72:
    if (plVar6 == plVar1) {
LAB_1426b3f92:
      uVar11 = (**(code **)(*plVar7 + 8))(plVar7,param_2,param_3,&local_78,&local_68);
      if ((float)uVar11 < fVar12) {
        *param_4 = local_78;
        *(undefined4 *)(param_4 + 1) = local_70;
        *param_5 = local_68;
        *(undefined4 *)(param_5 + 1) = local_60;
        fVar12 = (float)uVar11;
        uVar13 = (int)((ulonglong)uVar11 >> 0x20);
      }
    }
    else {
      if (*plVar6 == 0) goto code_r0x0001426b3f89;
      for (plVar6 = plVar9; plVar6 != plVar9 + iVar10; plVar6 = plVar6 + 1) {
        if (plVar2 != plVar1) {
          plVar5 = plVar2;
          do {
            if (*plVar5 == *plVar6) goto LAB_1426b3f92;
            plVar5 = plVar5 + 1;
          } while (plVar5 != plVar1);
        }
      }
    }
  }
  plVar7 = *(longlong **)(param_1 + 0x38);
  plVar8 = plVar7 + (longlong)*(int *)(param_1 + 0x40) * 0x1c;
  do {
    if (plVar7 == plVar8) {
      if (plVar9 != (longlong *)0x0) {
        FMemory::Free(plVar9);
      }
      return CONCAT44(uVar13,fVar12);
    }
    plVar2 = (longlong *)plVar7[10];
    plVar1 = plVar2 + (int)plVar7[0xb];
    plVar6 = plVar2;
joined_r0x0001426b4022:
    if (plVar6 == plVar1) {
LAB_1426b4042:
      uVar11 = (**(code **)(*plVar7 + 8))(plVar7,param_2,param_3,&local_78,&local_68);
      if ((float)uVar11 < fVar12) {
        *param_4 = local_78;
        *(undefined4 *)(param_4 + 1) = local_70;
        *param_5 = local_68;
        *(undefined4 *)(param_5 + 1) = local_60;
        fVar12 = (float)uVar11;
        uVar13 = (int)((ulonglong)uVar11 >> 0x20);
      }
    }
    else {
      if (*plVar6 == 0) goto code_r0x0001426b4039;
      for (plVar6 = plVar9; plVar6 != plVar9 + iVar10; plVar6 = plVar6 + 1) {
        if (plVar2 != plVar1) {
          plVar5 = plVar2;
          do {
            if (*plVar5 == *plVar6) goto LAB_1426b4042;
            plVar5 = plVar5 + 1;
          } while (plVar5 != plVar1);
        }
      }
    }
    plVar7 = plVar7 + 0x1c;
  } while( true );
code_r0x0001426b3ec9:
  plVar6 = plVar6 + 1;
  goto joined_r0x0001426b3eb2;
code_r0x0001426b3f89:
  plVar6 = plVar6 + 1;
  goto joined_r0x0001426b3f72;
code_r0x0001426b4039:
  plVar6 = plVar6 + 1;
  goto joined_r0x0001426b4022;
}



// FUNCTION 1426b4190 FUN_1426b4190 body=848 status=ok
// SIG undefined FUN_1426b4190(void)

float FUN_1426b4190(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,longlong param_6)

{
  longlong *plVar1;
  bool bVar2;
  float fVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  float fVar11;
  longlong *local_48;
  int local_40;
  undefined4 local_3c;
  
  local_48 = (longlong *)0x0;
  local_3c = 0;
  plVar7 = (longlong *)0x0;
  plVar8 = (longlong *)0x0;
  iVar10 = 0;
  if (param_6 != 0) {
    lVar4 = FUN_142a0cc80();
    if ((*(int *)(*(longlong *)(param_6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    plVar8 = plVar7;
    iVar10 = 0;
    if ((bVar2) && (&local_48 != (longlong **)(param_6 + 0x920))) {
      local_40 = *(int *)(param_6 + 0x928);
      lVar4 = (longlong)local_40;
      plVar7 = *(longlong **)(param_6 + 0x920);
      iVar10 = local_40;
      if (local_40 != 0) {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_48,local_40,0);
        plVar8 = local_48;
        _guard_xfg_dispatch_icall_nop(local_48,plVar7,lVar4 << 3);
        iVar10 = local_40;
      }
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x28);
  lVar9 = (longlong)*(int *)(param_1 + 0x30) * 0xb0 + lVar4;
  fVar3 = 3.4028235e+38;
  for (; lVar4 != lVar9; lVar4 = lVar4 + 0xb0) {
    plVar1 = *(longlong **)(lVar4 + 0x50);
    plVar7 = plVar1 + *(int *)(lVar4 + 0x58);
    plVar6 = plVar1;
joined_r0x0001426b42a2:
    if (plVar6 == plVar7) {
LAB_1426b42c2:
      fVar11 = (float)FUN_1426c9480(lVar4,param_2,param_3);
      if (fVar3 <= fVar11) {
        fVar11 = fVar3;
      }
    }
    else {
      if (*plVar6 == 0) goto code_r0x0001426b42b9;
      for (plVar6 = plVar8; fVar11 = fVar3, plVar6 != plVar8 + iVar10; plVar6 = plVar6 + 1) {
        if (plVar1 != plVar7) {
          plVar5 = plVar1;
          do {
            if (*plVar5 == *plVar6) goto LAB_1426b42c2;
            plVar5 = plVar5 + 1;
          } while (plVar5 != plVar7);
        }
      }
    }
    fVar3 = fVar11;
  }
  lVar4 = *(longlong *)(param_1 + 0x48);
  lVar9 = (longlong)*(int *)(param_1 + 0x50) * 0xd0 + lVar4;
  for (; lVar4 != lVar9; lVar4 = lVar4 + 0xd0) {
    plVar1 = *(longlong **)(lVar4 + 0x50);
    plVar7 = plVar1 + *(int *)(lVar4 + 0x58);
    plVar6 = plVar1;
joined_r0x0001426b4312:
    if (plVar6 == plVar7) {
LAB_1426b4332:
      fVar11 = (float)FUN_1426c95e0(lVar4,param_2,param_3);
      if (fVar3 <= fVar11) {
        fVar11 = fVar3;
      }
    }
    else {
      if (*plVar6 == 0) goto code_r0x0001426b4329;
      for (plVar6 = plVar8; fVar11 = fVar3, plVar6 != plVar8 + iVar10; plVar6 = plVar6 + 1) {
        if (plVar1 != plVar7) {
          plVar5 = plVar1;
          do {
            if (*plVar5 == *plVar6) goto LAB_1426b4332;
            plVar5 = plVar5 + 1;
          } while (plVar5 != plVar7);
        }
      }
    }
    fVar3 = fVar11;
  }
  lVar4 = *(longlong *)(param_1 + 0x38);
  lVar9 = (longlong)*(int *)(param_1 + 0x40) * 0xe0 + lVar4;
  do {
    if (lVar4 == lVar9) {
      if (plVar8 != (longlong *)0x0) {
        FMemory::Free(plVar8);
      }
      return fVar3;
    }
    plVar1 = *(longlong **)(lVar4 + 0x50);
    plVar7 = plVar1 + *(int *)(lVar4 + 0x58);
    plVar6 = plVar1;
joined_r0x0001426b4382:
    if (plVar6 == plVar7) {
LAB_1426b43a2:
      fVar11 = (float)FUN_1426c8d50(lVar4,param_2,param_3);
      if (fVar3 <= fVar11) {
        fVar11 = fVar3;
      }
    }
    else {
      if (*plVar6 == 0) goto code_r0x0001426b4399;
      for (plVar6 = plVar8; fVar11 = fVar3, plVar6 != plVar8 + iVar10; plVar6 = plVar6 + 1) {
        if (plVar1 != plVar7) {
          plVar5 = plVar1;
          do {
            if (*plVar5 == *plVar6) goto LAB_1426b43a2;
            plVar5 = plVar5 + 1;
          } while (plVar5 != plVar7);
        }
      }
    }
    fVar3 = fVar11;
    lVar4 = lVar4 + 0xe0;
  } while( true );
code_r0x0001426b42b9:
  plVar6 = plVar6 + 1;
  goto joined_r0x0001426b42a2;
code_r0x0001426b4329:
  plVar6 = plVar6 + 1;
  goto joined_r0x0001426b4312;
code_r0x0001426b4399:
  plVar6 = plVar6 + 1;
  goto joined_r0x0001426b4382;
}



// FUNCTION 1426b44e0 FUN_1426b44e0 body=495 status=ok
// SIG undefined FUN_1426b44e0(void)

ulonglong FUN_1426b44e0(ulonglong *param_1,undefined8 *param_2,int *param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  ulonglong uVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 local_28 [32];
  
  *(undefined8 *)(param_3 + 10) = *param_2;
  fVar5 = *(float *)((longlong)param_1 + 0x2c);
  fVar4 = *(float *)(param_1 + 6);
  param_3[3] = *(int *)((longlong)param_1 + 0x34);
  param_3[2] = (int)fVar4;
  if (0.0 < fVar5) {
    if (fVar5 <= 0.0001) {
      fVar5 = 0.0001;
    }
  }
  else if (-0.0001 <= fVar5) {
    fVar5 = -0.0001;
  }
  param_3[1] = (int)fVar5;
  if (0.0 < fVar4) {
    if (fVar4 <= 0.0001) {
      fVar4 = 0.0001;
    }
  }
  else if (-0.0001 <= fVar4) {
    fVar4 = -0.0001;
  }
  param_3[2] = (int)fVar4;
  fVar5 = (float)param_3[3];
  if (0.0 < fVar5) {
    if (fVar5 <= 0.0001) {
      fVar5 = 0.0001;
    }
  }
  else if (-0.0001 <= fVar5) {
    fVar5 = -0.0001;
  }
  uVar2 = *param_1;
  param_3[3] = (int)fVar5;
  if ((*(byte *)(uVar2 + 0x99) & 8) != 0) {
    *(byte *)(param_3 + 8) = *(byte *)(param_3 + 8) | 2;
  }
  if (*param_3 == 5) {
    uVar1 = _fpclass((double)(float)param_3[1]);
    uVar2 = CONCAT44(extraout_var,uVar1);
    if ((uVar1 & 0x207) == 0) {
      uVar1 = _fpclass((double)(float)param_3[2]);
      uVar2 = CONCAT44(extraout_var_00,uVar1);
      if ((uVar1 & 0x207) == 0) {
        uVar1 = _fpclass((double)(float)param_3[3]);
        uVar2 = CONCAT44(extraout_var_01,uVar1);
        if (((uVar1 & 0x207) == 0) &&
           (uVar2 = physx::PxQuat::isUnit(param_3 + 4), (char)uVar2 != '\0')) {
          fVar4 = ABS((float)param_3[3]);
          fVar6 = ABS((float)param_3[1]);
          fVar7 = ABS((float)param_3[2]);
          fVar5 = fVar4;
          if (fVar4 <= fVar7) {
            fVar5 = fVar7;
          }
          if (fVar5 <= fVar6) {
            fVar5 = fVar6;
          }
          if (fVar5 <= 1e+06) {
            if (fVar7 <= fVar4) {
              fVar4 = fVar7;
            }
            if (fVar6 <= fVar4) {
              fVar4 = fVar6;
            }
            if ((1e-06 <= fVar4) && (*(longlong *)(param_3 + 10) != 0)) {
              puVar3 = (undefined4 *)U2PTransform(local_28,param_1[2]);
              *param_4 = *puVar3;
              param_4[1] = puVar3[1];
              param_4[2] = puVar3[2];
              param_4[3] = puVar3[3];
              fVar5 = (float)puVar3[4];
              param_4[4] = fVar5;
              param_4[5] = puVar3[5];
              param_4[6] = puVar3[6];
              param_4[4] = fVar5 * *(float *)param_1[1];
              param_4[5] = *(float *)(param_1[1] + 4) * (float)param_4[5];
              uVar2 = param_1[1];
              param_4[6] = *(float *)(uVar2 + 8) * (float)param_4[6];
              return CONCAT71((int7)(uVar2 >> 8),1);
            }
          }
        }
      }
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1426b46d0 FUN_1426b46d0 body=523 status=ok
// SIG undefined FUN_1426b46d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1426b46d0(longlong param_1,undefined8 param_2,int *param_3,undefined4 *param_4)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined **local_148 [10];
  longlong local_f8;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_8c [12];
  float local_80;
  float local_7c;
  float local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  FUN_1426c7820(param_2,local_148,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  FRotator::Quaternion(local_8c,&local_168);
  local_68 = local_168;
  uStack_60 = uStack_160;
  local_58._8_4_ = local_90;
  local_58._0_8_ = local_98;
  local_58._12_4_ = 0;
  local_7c = local_7c * 0.5;
  local_80 = local_80 * 0.5;
  local_78 = local_78 * 0.5;
  if (local_7c <= 0.0001) {
    local_7c = 0.0001;
  }
  if (local_80 <= 0.0001) {
    local_80 = 0.0001;
  }
  local_48._4_4_ = DAT_1464aa788._4_4_;
  local_48._0_4_ = (undefined4)DAT_1464aa788;
  local_48._8_4_ = DAT_1464aa790;
  local_48._12_4_ = 0;
  if (local_78 <= 0.0001) {
    local_78 = 0.0001;
  }
  param_3[2] = (int)local_7c;
  param_3[1] = (int)local_80;
  param_3[3] = (int)local_78;
  if (*param_3 == 3) {
    uVar2 = _fpclass((double)local_80);
    if ((uVar2 & 0x207) == 0) {
      uVar2 = _fpclass((double)(float)param_3[2]);
      if ((uVar2 & 0x207) == 0) {
        uVar2 = _fpclass((double)(float)param_3[3]);
        if (((((uVar2 & 0x207) == 0) && (0.0 < (float)param_3[1])) && (0.0 < (float)param_3[2])) &&
           (0.0 < (float)param_3[3])) {
          cVar1 = FTransform::IsValid(&local_68);
          if (cVar1 != '\0') {
            puVar3 = (undefined4 *)U2PTransform(&local_168,&local_68);
            *param_4 = *puVar3;
            param_4[1] = puVar3[1];
            param_4[2] = puVar3[2];
            param_4[3] = puVar3[3];
            param_4[4] = puVar3[4];
            param_4[5] = puVar3[5];
            param_4[6] = puVar3[6];
            cVar1 = FUN_14062e090(param_4);
            if (cVar1 != '\0') {
              uVar4 = 1;
              goto LAB_1426b4898;
            }
          }
        }
      }
    }
  }
  uVar4 = 0;
LAB_1426b4898:
  local_148[0] = &PTR__scalar_deleting_destructor__1440fbd58;
  if (local_f8 != 0) {
    FMemory::Free();
  }
  return uVar4;
}



// FUNCTION 1426b48e0 FUN_1426b48e0 body=866 status=ok
// SIG undefined FUN_1426b48e0(void)

undefined8 FUN_1426b48e0(longlong param_1,longlong param_2,int *param_3,float *param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  undefined8 uVar5;
  longlong *plVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 local_a8 [24];
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  
  lVar9 = *(longlong *)(param_1 + 0x10);
  fVar3 = *(float *)(lVar9 + 0x20);
  pfVar4 = *(float **)(param_1 + 8);
  fVar10 = *(float *)(lVar9 + 0x24) * pfVar4[1];
  fVar12 = *pfVar4;
  fVar11 = *(float *)(lVar9 + 0x28) * pfVar4[2];
  param_4[0] = 0.0;
  param_4[1] = 0.0;
  param_4[2] = 0.0;
  param_4[3] = 1.0;
  param_4[4] = 0.0;
  param_4[5] = 0.0;
  param_4[6] = 0.0;
  if (fVar10 <= 0.0) {
    param_4[1] = 0.0;
    param_4[3] = -4.371139e-08;
    if (fVar11 <= 0.0) {
      *param_4 = 1.0;
      param_4[2] = 0.0;
    }
    else {
      *param_4 = 0.0;
      param_4[2] = 1.0;
    }
  }
  else if (fVar11 <= 0.0) {
    *param_4 = 0.0;
    param_4[1] = 1.0;
    param_4[2] = 0.0;
    param_4[3] = -4.371139e-08;
  }
  if (0.0 <= fVar10 * fVar3 * fVar12 * fVar11) {
    lVar9 = *(longlong *)(param_2 + 0xc0);
  }
  else {
    lVar9 = *(longlong *)(param_2 + 200);
  }
  if (lVar9 != 0) {
    *(longlong *)(param_3 + 8) = lVar9;
    iVar1 = *(int *)(param_1 + 0x24);
    iVar2 = *(int *)(param_1 + 0x28);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    param_3[1] = *(int *)(param_1 + 0x20);
    param_3[2] = iVar1;
    param_3[3] = iVar2;
    U2PTransform(&local_90,uVar5);
    fVar12 = param_4[3];
    fVar3 = *param_4;
    fVar10 = param_4[1];
    fVar11 = param_4[2];
    pfVar4 = *(float **)(param_1 + 8);
    param_4[3] = ((local_84 * fVar12 - local_90 * fVar3) - local_8c * fVar10) - local_88 * fVar11;
    *param_4 = (local_84 * fVar3 + fVar12 * local_90 + local_88 * fVar10) - local_8c * fVar11;
    param_4[1] = (local_84 * fVar10 + fVar12 * local_8c + local_90 * fVar11) - local_88 * fVar3;
    param_4[2] = (local_84 * fVar11 + local_88 * fVar12 + local_8c * fVar3) - local_90 * fVar10;
    param_4[4] = local_80;
    param_4[6] = local_78;
    param_4[5] = local_7c;
    param_4[4] = *pfVar4 * param_4[4];
    param_4[5] = *(float *)(*(longlong *)(param_1 + 8) + 4) * param_4[5];
    param_4[6] = *(float *)(*(longlong *)(param_1 + 8) + 8) * param_4[6];
    if (*param_3 == 4) {
      uVar8 = _fpclass((double)(float)param_3[1]);
      if ((uVar8 & 0x207) == 0) {
        uVar8 = _fpclass((double)(float)param_3[2]);
        if ((uVar8 & 0x207) == 0) {
          uVar8 = _fpclass((double)(float)param_3[3]);
          if (((uVar8 & 0x207) == 0) && (cVar7 = physx::PxQuat::isUnit(param_3 + 4), cVar7 != '\0'))
          {
            fVar12 = (float)param_3[2];
            fVar3 = (float)param_3[3];
            fVar10 = (float)param_3[1];
            fVar11 = fVar12;
            if (fVar12 <= fVar3) {
              fVar11 = fVar3;
            }
            if (fVar11 <= fVar10) {
              fVar11 = fVar10;
            }
            if (fVar11 <= 1e+06) {
              if (fVar3 <= fVar12) {
                fVar12 = fVar3;
              }
              if (fVar10 <= fVar12) {
                fVar12 = fVar10;
              }
              if ((1e-06 <= fVar12) &&
                 (plVar6 = *(longlong **)(param_3 + 8), plVar6 != (longlong *)0x0)) {
                (**(code **)(*plVar6 + 0x68))(plVar6,local_a8);
                cVar7 = FUN_14062e090(param_4);
                if (cVar7 != '\0') {
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1426b4c50 is<physx::PxRigidBody> body=39 status=ok
// SIG undefined is<physx::PxRigidBody>(void)

longlong * physx::PxBase::is<physx::PxRigidBody>(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x20))(param_1,"PxRigidBody");
  plVar2 = (longlong *)0x0;
  if (cVar1 != '\0') {
    plVar2 = param_1;
  }
  return plVar2;
}



// FUNCTION 1426b4c80 FUN_1426b4c80 body=172 status=ok
// SIG undefined FUN_1426b4c80(void)

undefined1 * FUN_1426b4c80(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  _Src = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 0x20) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 0x18,iVar1,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x18),_Src,(longlong)iVar1 << 3);
  }
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  return param_1;
}



// FUNCTION 1426b4d30 FUN_1426b4d30 body=214 status=ok
// SIG undefined FUN_1426b4d30(void)

undefined8 *
FUN_1426b4d30(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong **param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *local_18;
  int local_10;
  
  local_10 = 0;
  local_18 = (longlong *)0x0;
  if (((param_4 != &local_18) && (*(int *)(param_4 + 1) != 0)) &&
     (plVar1 = *param_4, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_18);
  }
  param_1[1] = param_2;
  *param_1 = &PTR_GetPoolName_145164870;
  param_1[2] = param_3;
  param_1[3] = (longlong *)0x0;
  *(undefined4 *)(param_1 + 4) = 0;
  if (((&local_18 != (longlong **)(param_1 + 3)) && (local_10 != 0)) &&
     (local_18 != (longlong *)0x0)) {
    (**(code **)(*local_18 + 0x30))();
  }
  uVar2 = FDelegateHandle::GenerateNewID();
  param_1[5] = uVar2;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  *param_1 = &PTR_GetPoolName_1451648b8;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_4);
  return param_1;
}



// FUNCTION 1426b4e10 FUN_1426b4e10 body=224 status=ok
// SIG undefined FUN_1426b4e10(void)

undefined8 *
FUN_1426b4e10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong **param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *local_28;
  int local_20;
  
  local_28 = (longlong *)0x0;
  local_20 = 0;
  if (((param_5 != &local_28) && (*(int *)(param_5 + 1) != 0)) &&
     (plVar1 = *param_5, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_28);
  }
  *param_1 = &PTR_FUN_1451647e0;
  FWeakObjectPtr::operator=(param_1 + 1,param_2);
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = (longlong *)0x0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((&local_28 != (longlong **)(param_1 + 4)) && (local_20 != 0)) &&
     (local_28 != (longlong *)0x0)) {
    (**(code **)(*local_28 + 0x30))();
  }
  uVar2 = FDelegateHandle::GenerateNewID();
  param_1[6] = uVar2;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
  *param_1 = &PTR_FUN_145164828;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_5);
  return param_1;
}



// FUNCTION 1426b4ef0 FUN_1426b4ef0 body=77 status=ok
// SIG undefined FUN_1426b4ef0(void)

undefined4 * FUN_1426b4ef0(undefined4 *param_1)

{
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfc;
  *param_1 = 0x42480000;
  *(undefined8 *)(param_1 + 1) = 0x3f800000;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfc;
  param_1[4] = 0x42480000;
  *(undefined8 *)(param_1 + 5) = 0x3f800000;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfc;
  param_1[8] = 0x42480000;
  *(undefined8 *)(param_1 + 9) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  return param_1;
}



// FUNCTION 1426b4f40 FUN_1426b4f40 body=626 status=ok
// SIG undefined FUN_1426b4f40(void)

undefined8 *
FUN_1426b4f40(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  DWORD DVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_28;
  undefined4 local_20;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[9] = param_5;
  local_28 = *param_3;
  local_20 = *(undefined4 *)(param_3 + 1);
  SetupNonUniformHelper(&local_28,(longlong)param_1 + 0x1c,param_1 + 3,param_1 + 4);
  lVar5 = param_1[2];
  fVar10 = *(float *)(lVar5 + 0x20);
  fVar9 = *(float *)(lVar5 + 0x24);
  fVar8 = *(float *)(lVar5 + 0x28);
  if (((ABS(fVar10) <= 0.0001) && (ABS(fVar9) <= 0.0001)) && (ABS(fVar8) <= 0.0001)) {
    fVar10 = 0.1;
    fVar9 = 0.1;
    fVar8 = 0.1;
  }
  fVar9 = ABS(fVar9);
  fVar10 = ABS(fVar10);
  fVar8 = ABS(fVar8);
  fVar7 = fVar9;
  if (fVar10 <= fVar9) {
    fVar7 = fVar10;
  }
  if (fVar8 <= fVar7) {
    fVar7 = fVar8;
  }
  if (fVar7 <= 1e-08) {
    fVar7 = 0.1;
  }
  *(float *)(param_1 + 3) = fVar7 * *(float *)(param_1 + 3);
  *(float *)((longlong)param_1 + 0x24) = fVar9 * *(float *)((longlong)param_1 + 0x24);
  *(float *)(param_1 + 4) = fVar10 * *(float *)(param_1 + 4);
  *(float *)(param_1 + 5) = fVar8 * *(float *)(param_1 + 5);
  *(undefined8 *)((longlong)param_1 + 0x2c) = *(undefined8 *)param_1[1];
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((undefined8 *)param_1[1] + 1);
  *(float *)((longlong)param_1 + 0x2c) = fVar10 * *(float *)((longlong)param_1 + 0x2c);
  *(float *)(param_1 + 6) = fVar9 * *(float *)(param_1 + 6);
  *(float *)((longlong)param_1 + 0x34) = fVar8 * *(float *)((longlong)param_1 + 0x34);
  lVar5 = DAT_146b079f0;
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  lVar6 = 4;
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    if (DVar2 == DAT_1468c21c0) goto LAB_1426b50a9;
    lVar3 = 4;
  }
  else {
LAB_1426b50a9:
    lVar3 = 0;
  }
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(lVar3 + lVar5);
  lVar5 = DAT_146b07a08;
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    if (DVar2 != DAT_1468c21c0) goto LAB_1426b50e5;
  }
  lVar6 = 0;
LAB_1426b50e5:
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar6 + lVar5);
  fVar10 = *(float *)(param_1 + 7);
  if (fVar10 < 0.0) {
    plVar4 = (longlong *)UAudioSettings::GetPrivateStaticClass();
    lVar5 = plVar4[0x1f];
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x368))(plVar4);
      lVar5 = plVar4[0x1f];
    }
    fVar10 = *(float *)(lVar5 + 0x9c);
  }
  *(float *)(param_1 + 7) = fVar10;
  fVar10 = *(float *)(param_1 + 8);
  if (fVar10 < 0.0) {
    plVar4 = (longlong *)UAudioSettings::GetPrivateStaticClass();
    lVar5 = plVar4[0x1f];
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x368))(plVar4);
      lVar5 = plVar4[0x1f];
    }
    fVar10 = *(float *)(lVar5 + 0xa4);
  }
  *(float *)(param_1 + 8) = fVar10;
  plVar4 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar5 = plVar4[0x1f];
  if (lVar5 == 0) {
    (**(code **)(*plVar4 + 0x368))(plVar4);
    lVar5 = plVar4[0x1f];
  }
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)(lVar5 + 0xa0);
  return param_1;
}



// FUNCTION 1426b5220 FUN_1426b5220 body=22 status=ok
// SIG undefined FUN_1426b5220(void)

undefined4 * FUN_1426b5220(undefined4 *param_1)

{
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfc;
  *param_1 = 0x42480000;
  *(undefined8 *)(param_1 + 1) = 0x3f800000;
  return param_1;
}



// FUNCTION 1426b5240 FUN_1426b5240 body=236 status=ok
// SIG undefined FUN_1426b5240(void)

undefined4 * FUN_1426b5240(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[0x21] = param_1[0x21] | 1;
  param_1[0x22] = 0;
  FConstraintProfileProperties::FConstraintProfileProperties(param_1 + 0x23);
  param_1[100] = 4;
  *(undefined4 **)(param_1 + 0x66) = param_1;
  param_1[0x68] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x6a) = 0;
  param_1[0x6c] = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xf) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x12) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x15) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0x3f800000;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)(param_1 + 0x1b) = 0x3f80000000000000;
  param_1[0x1d] = 0;
  return param_1;
}



// FUNCTION 1426b5330 FConstraintProfileProperties body=383 status=ok
// SIG undefined FConstraintProfileProperties(void)

undefined4 * FConstraintProfileProperties::FConstraintProfileProperties(undefined4 *param_1)

{
  *param_1 = 0x40a00000;
  param_1[1] = 0x43340000;
  param_1[2] = 0x43960000;
  *(undefined8 *)(param_1 + 3) = 0x43fa0000;
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfe;
  param_1[6] = 0;
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0x202;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 2;
  param_1[5] = 0;
  param_1[7] = 0x40a00000;
  *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) & 0xfe;
  param_1[0xb] = 0x42480000;
  *(undefined8 *)(param_1 + 0xc) = 0x40a00000;
  param_1[0x10] = 0x42340000;
  param_1[0x11] = 0x42340000;
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) | 1;
  param_1[0xe] = 0x3f800000;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) & 0xfe;
  param_1[0x13] = 0x42480000;
  *(undefined8 *)(param_1 + 0x14) = 0x40a00000;
  param_1[0x18] = 0x42340000;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 1;
  param_1[0x16] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(byte *)(param_1 + 0x23) = *(byte *)(param_1 + 0x23) & 0xfc;
  param_1[0x20] = 0x42480000;
  *(undefined8 *)(param_1 + 0x21) = 0x3f800000;
  *(byte *)(param_1 + 0x27) = *(byte *)(param_1 + 0x27) & 0xfc;
  param_1[0x24] = 0x42480000;
  *(undefined8 *)(param_1 + 0x25) = 0x3f800000;
  *(byte *)(param_1 + 0x2b) = *(byte *)(param_1 + 0x2b) & 0xfc;
  param_1[0x28] = 0x42480000;
  *(undefined8 *)(param_1 + 0x29) = 0x3f800000;
  *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) & 0xfe;
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xfc;
  param_1[0x2d] = 0x42480000;
  *(undefined8 *)(param_1 + 0x2e) = 0x3f800000;
  *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) & 0xfc;
  param_1[0x31] = 0x42480000;
  *(undefined8 *)(param_1 + 0x32) = 0x3f800000;
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xfc;
  param_1[0x35] = 0x42480000;
  *(undefined8 *)(param_1 + 0x36) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x39) = 0;
  *(undefined8 *)(param_1 + 0x3b) = 0;
  *(undefined8 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) & 0xe4 | 4;
  return param_1;
}



// FUNCTION 1426b54b0 FCookBodySetupInfo body=82 status=ok
// SIG undefined FCookBodySetupInfo(void)

undefined8 * FCookBodySetupInfo::FCookBodySetupInfo(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffff8;
  *(undefined2 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x84) = 0;
  return param_1;
}



// FUNCTION 1426b5510 FUN_1426b5510 body=118 status=ok
// SIG undefined FUN_1426b5510(void)

undefined8 * FUN_1426b5510(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  return param_1;
}



// FUNCTION 1426b5590 FUN_1426b5590 body=129 status=ok
// SIG undefined FUN_1426b5590(void)

undefined8 * FUN_1426b5590(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_140c630e0();
  *param_1 = &PTR_FUN_1440fbd88;
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  param_1[0xd] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  param_1[0xf] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  param_1[0x10] = *(undefined8 *)(param_2 + 0x80);
  param_1[0x11] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  param_1[0x12] = *(undefined8 *)(param_2 + 0x90);
  param_1[0x13] = uVar1;
  param_1[0x14] = *(undefined8 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  return param_1;
}



// FUNCTION 1426b5650 FUN_1426b5650 body=78 status=ok
// SIG undefined FUN_1426b5650(void)

undefined8 * FUN_1426b5650(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(byte *)((longlong)param_1 + 0x24) = *(byte *)((longlong)param_1 + 0x24) & 0xfc;
  *(undefined4 *)(param_1 + 3) = 0x42480000;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfc;
  *(undefined4 *)(param_1 + 5) = 0x42480000;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0x44) = *(byte *)((longlong)param_1 + 0x44) & 0xfc;
  *(undefined4 *)(param_1 + 7) = 0x42480000;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xfe;
  return param_1;
}



// FUNCTION 1426b56a0 FUN_1426b56a0 body=3727 status=ok
// SIG undefined FUN_1426b56a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1426b56a0(longlong param_1,longlong param_2,float *param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  unkbyte10 Var7;
  undefined1 auVar8 [13];
  undefined1 auVar9 [13];
  undefined1 auVar10 [13];
  undefined1 auVar11 [13];
  undefined1 auVar12 [13];
  undefined1 auVar13 [13];
  uint5 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int iVar22;
  undefined8 uVar23;
  int iVar24;
  longlong *plVar25;
  uint uVar26;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  ulonglong uVar32;
  longlong lVar33;
  int iVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  longlong lVar37;
  uint uVar38;
  uint uVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  byte bVar56;
  byte bVar57;
  float fVar53;
  float fVar54;
  byte bVar58;
  byte bVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined1 uVar65;
  undefined4 local_res8;
  undefined4 local_res10;
  undefined4 local_res18;
  undefined8 local_2a8;
  float fStack_2a0;
  float fStack_29c;
  undefined8 local_298;
  float fStack_290;
  float fStack_28c;
  uint local_288;
  undefined8 local_278;
  float fStack_270;
  float fStack_26c;
  float local_268;
  undefined8 local_264;
  float local_25c;
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
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  undefined4 local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  undefined4 local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  float local_198;
  float fStack_194;
  float fStack_190;
  undefined4 uStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  undefined4 uStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  undefined4 uStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  undefined4 uStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  undefined4 uStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  undefined4 uStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
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
  undefined4 uStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  undefined4 uStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  ulonglong uVar27;
  undefined1 auVar55 [16];
  
  FUN_1424290d0(param_1,param_4,1,0,0);
  fVar40 = (float)FUN_1426c8ca0(param_2,param_3);
  fVar61 = ABS(param_3[1]);
  if (ABS(param_3[1]) <= ABS(*param_3)) {
    fVar61 = ABS(*param_3);
  }
  fVar54 = fVar40 * 0.5;
  uVar65 = (undefined1)((uint)fVar54 >> 0x18);
  fVar62 = *(float *)(param_2 + 0x78) * fVar61;
  fVar53 = ABS(param_3[2]) *
           (*(float *)(param_2 + 0x78) + *(float *)(param_2 + 0x80) + *(float *)(param_2 + 0x7c)) *
           0.5;
  auVar55 = ZEXT416((uint)fVar53);
  if (fVar53 <= 0.1) {
    auVar55 = ZEXT416(0x3dcccccd);
  }
  fVar53 = auVar55._0_4_;
  if (0.1 <= fVar62) {
    if (fVar62 <= fVar53) {
      auVar55._0_4_ = fVar62;
    }
  }
  else {
    auVar55._0_12_ = ZEXT812(0x3dcccccd);
    auVar55._12_4_ = 0;
  }
  fVar63 = auVar55._0_4_;
  fVar61 = *(float *)(param_2 + 0x7c) * fVar61;
  fVar62 = 0.1;
  if ((0.1 <= fVar61) && (fVar62 = fVar53, fVar61 <= fVar53)) {
    fVar62 = fVar61;
  }
  fVar61 = -fVar54;
  if (((ABS(fVar40) <= 1e-08) || (fVar53 = fVar62, fVar64 = fVar61, fVar40 <= ABS(fVar63 - fVar62)))
     && (fVar53 = fVar63, fVar64 = fVar54, fVar63 <= fVar62)) {
    uVar65 = (undefined1)((uint)fVar61 >> 0x18);
    fVar53 = fVar62;
    fVar64 = fVar61;
    fVar63 = fVar62;
  }
  uVar23 = FMemory::Malloc(0x3d18,0);
  *(undefined8 *)(param_1 + 0x20) = uVar23;
  uVar23 = FMemory::Malloc(0x398,0);
  *(undefined8 *)(param_1 + 0x28) = uVar23;
  fVar61 = ((fVar63 - fVar53) * fVar63) / (fVar63 * fVar40);
  if (-1.0 <= fVar61) {
    if (1.0 <= fVar61) {
      fVar61 = 1.0;
    }
  }
  else {
    fVar61 = -1.0;
  }
  uVar32 = 0;
  fVar61 = _guard_xfg_dispatch_icall_nop(fVar61);
  local_2a8 = (ulonglong)local_2a8._4_4_ << 0x20;
  local_278 = (ulonglong)local_278._4_4_ << 0x20;
  local_298 = (ulonglong)local_298._4_4_ << 0x20;
  local_264 = 0x3f800000;
  local_25c = 0.0;
  uVar27 = uVar32;
  uVar35 = uVar32;
  uVar36 = uVar32;
  do {
    plVar25 = (longlong *)(*(longlong *)(param_1 + 0x28) + uVar36);
    iVar34 = (int)uVar27;
    if ((longlong)(int)(9.0 - (4.5 - fVar61 * 2.8647888)) < (longlong)uVar35) {
      uVar23 = __libm_sse2_sincosf_();
      fStack_2a0 = (float)((ulonglong)uVar23 >> 0x20) * fVar53;
      fStack_290 = (float)uVar23 * fVar53;
      fStack_270 = fVar64;
    }
    else {
      uVar23 = __libm_sse2_sincosf_();
      fStack_2a0 = (float)((ulonglong)uVar23 >> 0x20) * fVar63;
      fStack_290 = (float)uVar23 * fVar63;
      fStack_270 = (float)CONCAT13(uVar65,SUB43(fVar54,0));
    }
    fStack_270 = fStack_2a0 + fStack_270;
    local_2a8 = CONCAT44(fStack_290,(undefined4)local_2a8);
    local_278 = CONCAT44(fStack_290,(int)local_278);
    *plVar25 = local_278;
    local_298 = CONCAT44(fStack_2a0,(undefined4)local_298) ^ 0x8000000000000000;
    *(float *)(plVar25 + 1) = fStack_270;
    FDynamicMeshVertex::SetTangents(plVar25,&local_264,&local_298,&local_2a8);
    uVar26 = iVar34 + 1;
    uVar27 = (ulonglong)uVar26;
    uVar35 = uVar35 + 1;
    *(undefined4 *)((longlong)plVar25 + 0xc) = 0;
    uVar36 = uVar36 + 0x5c;
    *(float *)(plVar25 + 2) = (float)iVar34 * 0.11111111;
    auVar55 = _DAT_144101760;
  } while ((int)uVar26 < 10);
  local_198 = -0.00019840874;
  fStack_194 = -0.00019840874;
  fStack_190 = -0.00019840874;
  uStack_18c = 0xb9500bf1;
  local_188 = 0.008333331;
  fStack_184 = 0.008333331;
  fStack_180 = 0.008333331;
  uStack_17c = 0x3c088886;
  local_178 = -0.16666667;
  fStack_174 = -0.16666667;
  fStack_170 = -0.16666667;
  uStack_16c = 0xbe2aaaab;
  local_158 = 2.4760495e-05;
  fStack_154 = 2.4760495e-05;
  fStack_150 = 2.4760495e-05;
  uStack_14c = 0x37cfb4c2;
  local_148 = -0.0013888378;
  fStack_144 = -0.0013888378;
  fStack_140 = -0.0013888378;
  uStack_13c = 0xbab609aa;
  local_138 = 0.041666638;
  fStack_134 = 0.041666638;
  fStack_130 = 0.041666638;
  uStack_12c = 0x3d2aaaa3;
  local_108 = 1.0;
  fStack_104 = 1.0;
  fStack_100 = 1.0;
  uStack_fc = 0x3f800000;
  local_288 = 0;
  local_e8 = -2.3889859e-08;
  fStack_e4 = -2.3889859e-08;
  fStack_e0 = -2.3889859e-08;
  uStack_dc = 0xb2cd365b;
  local_f8 = 2.7525562e-06;
  fStack_f4 = 2.7525562e-06;
  fStack_f0 = 2.7525562e-06;
  uStack_ec = 0x3638b88e;
  local_118 = 1.0;
  fStack_114 = 1.0;
  fStack_110 = 1.0;
  uStack_10c = 0x3f800000;
  local_168 = -2.6051615e-07;
  fStack_164 = -2.6051615e-07;
  fStack_160 = -2.6051615e-07;
  uStack_15c = 0xb48bdd11;
  local_128 = -0.5;
  fStack_124 = -0.5;
  fStack_120 = -0.5;
  uStack_11c = 0xbf000000;
  fStack_20c = 1.0;
  fStack_1fc = 0.0;
  fStack_1ec = 0.0;
  fStack_1dc = 0.0;
  local_res8 = 0x7f000000;
  local_res10 = 0x7f000000;
  local_res18 = 0x7f000000;
  local_2a8 = 0;
  do {
    lVar33 = local_2a8;
    lVar37 = 0;
    fStack_24c = 0.0;
    local_268 = (float)(int)uVar32 * 0.0625;
    fVar61 = local_268 * 360.0 * fRam0000000146b07c24;
    fStack_250 = _DAT_146b07c20 * 0.0 -
                 (float)(int)(_DAT_146b07c20 * 0.0 * _DAT_146b07c10) * _DAT_146b07c00;
    fVar61 = fVar61 - (float)(int)(fVar61 * fRam0000000146b07c14) * fRam0000000146b07c04;
    fVar40 = fRam0000000146b07c28 * 0.0 -
             (float)(int)(fRam0000000146b07c28 * 0.0 * fRam0000000146b07c18) * fRam0000000146b07c08;
    uVar26 = -(uint)(_DAT_146b07bd0 < (float)((uint)fStack_250 & _DAT_146b07a40));
    uVar38 = -(uint)(fRam0000000146b07bd4 < (float)((uint)fVar61 & uRam0000000146b07a44));
    uVar39 = -(uint)(fRam0000000146b07bd8 < (float)((uint)fVar40 & uRam0000000146b07a48));
    fStack_250 = (float)(((uint)((float)((uint)fStack_250 & _DAT_146b07bf0 | _DAT_146b07be0) -
                                fStack_250) ^ (uint)fStack_250) & uVar26 ^ (uint)fStack_250);
    fVar61 = (float)(((uint)((float)((uint)fVar61 & uRam0000000146b07bf4 | uRam0000000146b07be4) -
                            fVar61) ^ (uint)fVar61) & uVar38 ^ (uint)fVar61);
    fVar40 = (float)(((uint)((float)((uint)fVar40 & uRam0000000146b07bf8 | uRam0000000146b07be8) -
                            fVar40) ^ (uint)fVar40) & uVar39 ^ (uint)fVar40);
    fVar54 = fStack_250 * fStack_250;
    fVar53 = fVar61 * fVar61;
    fVar62 = fVar40 * fVar40;
    fStack_230 = (((((local_168 * fVar54 + local_158) * fVar54 + local_148) * fVar54 + local_138) *
                   fVar54 + local_128) * fVar54 + local_108) *
                 (float)((_DAT_146b07aa0 ^ _DAT_146b07a10) & uVar26 ^ _DAT_146b07a10);
    fVar63 = (((((fStack_164 * fVar53 + fStack_154) * fVar53 + fStack_144) * fVar53 + fStack_134) *
               fVar53 + fStack_124) * fVar53 + fStack_104) *
             (float)((uRam0000000146b07aa4 ^ uRam0000000146b07a14) & uVar38 ^ uRam0000000146b07a14);
    fVar64 = (((((fStack_160 * fVar62 + fStack_150) * fVar62 + fStack_140) * fVar62 + fStack_130) *
               fVar62 + fStack_120) * fVar62 + fStack_100) *
             (float)((uRam0000000146b07aa8 ^ uRam0000000146b07a18) & uVar39 ^ uRam0000000146b07a18);
    fStack_250 = (((((local_e8 * fVar54 + local_f8) * fVar54 + local_198) * fVar54 + local_188) *
                   fVar54 + local_178) * fVar54 + local_118) * fStack_250;
    fVar61 = (((((fStack_e4 * fVar53 + fStack_f4) * fVar53 + fStack_194) * fVar53 + fStack_184) *
               fVar53 + fStack_174) * fVar53 + fStack_114) * fVar61;
    fVar40 = (((((fStack_e0 * fVar62 + fStack_f0) * fVar62 + fStack_190) * fVar62 + fStack_180) *
               fVar62 + fStack_170) * fVar62 + fStack_110) * fVar40;
    local_258 = fVar63 * fStack_230;
    fStack_254 = fStack_230 * fVar61;
    local_248 = fVar40 * fStack_250 * fVar63 - fVar64 * fVar61;
    fStack_23c = 0.0;
    fStack_22c = 0.0;
    fStack_21c = 1.0;
    fStack_240 = -(fStack_230 * fVar40);
    fStack_244 = fVar64 * fVar63 + fVar40 * fStack_250 * fVar61;
    fStack_230 = fVar64 * fStack_230;
    fStack_234 = fVar63 * fVar40 - fVar64 * fStack_250 * fVar61;
    local_228 = DAT_1468b5d90;
    local_238 = -(fVar40 * fVar61 + fVar64 * fStack_250 * fVar63);
    fStack_224 = DAT_1468b5d94;
    fStack_220 = DAT_1468b5d98;
    fVar61 = local_258;
    fVar40 = fStack_254;
    fVar54 = fStack_250;
    fVar53 = DAT_1468b5d90;
    fVar62 = DAT_1468b5d94;
    fVar63 = DAT_1468b5d98;
    fVar64 = 1.0;
    do {
      fVar21 = fStack_21c;
      fVar20 = fStack_220;
      fVar19 = fStack_224;
      fVar18 = local_228;
      fVar17 = fStack_250;
      fVar16 = fStack_254;
      fVar15 = local_258;
      lVar5 = *(longlong *)(param_1 + 0x28);
      lVar1 = lVar37 + lVar33;
      lVar6 = *(longlong *)(param_1 + 0x20);
      local_218 = *(float *)(lVar37 + lVar5);
      fStack_214 = *(float *)(lVar37 + 4 + lVar5);
      fStack_210 = *(float *)(lVar37 + 8 + lVar5);
      local_25c = fStack_20c * fVar63 + fStack_210 * fStack_230 +
                  fStack_214 * fStack_240 + local_218 * fVar54;
      *(ulonglong *)(lVar1 + lVar6) =
           CONCAT44(fStack_20c * fVar62 + fStack_210 * fStack_234 +
                    fStack_214 * fStack_244 + local_218 * fVar40,
                    fStack_20c * fVar53 + fStack_210 * local_238 +
                    fStack_214 * local_248 + local_218 * fVar61);
      *(float *)(lVar1 + 8 + lVar6) = local_25c;
      uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x50 + lVar37);
      uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x4c + lVar37);
      bVar58 = (byte)((uint)uVar3 >> 0x18);
      auVar42._0_2_ = CONCAT11(0,(byte)uVar3);
      auVar8[0xc] = bVar58;
      auVar8._0_12_ = ZEXT812(0);
      uVar14 = CONCAT32(auVar8._10_3_,(ushort)(byte)((uint)uVar3 >> 0x10));
      Var7 = CONCAT82((ulonglong)uVar14 << 0x10,(ushort)(byte)((uint)uVar3 >> 8));
      auVar42._2_2_ = 0;
      auVar42._4_10_ = Var7;
      auVar42._14_2_ = 0;
      auVar41._0_4_ = -(uint)(0x7f < auVar42._0_2_);
      auVar41._4_4_ = -(uint)(0x7f < (uint)Var7);
      auVar41._8_4_ = -(uint)(0x7f < (int)uVar14);
      auVar41._12_4_ = -(uint)(0x7f < bVar58);
      auVar42 = auVar41 & auVar55 | auVar42;
      local_208 = (float)auVar42._0_4_ * 0.007874016;
      fStack_204 = (float)auVar42._4_4_ * 0.007874016;
      fStack_200 = (float)auVar42._8_4_ * 0.007874016;
      fVar53 = fStack_1fc * fVar53 + fStack_200 * local_238 +
               fStack_204 * local_248 + local_208 * local_258;
      fVar60 = fStack_1fc * fVar62 + fStack_200 * fStack_234 +
               fStack_204 * fStack_244 + local_208 * fStack_254;
      fStack_290 = fStack_1fc * fVar63 + fStack_200 * fStack_230 +
                   fStack_204 * fStack_240 + local_208 * fStack_250;
      fStack_28c = fStack_1fc * fVar64 + fStack_200 * fStack_22c +
                   fStack_204 * fStack_23c + local_208 * fStack_24c;
      local_298 = CONCAT44(fVar60,fVar53);
      bVar59 = (byte)((uint)uVar4 >> 0x18);
      bVar57 = (byte)((uint)uVar4 >> 0x10);
      bVar56 = (byte)((uint)uVar4 >> 8);
      auVar44._0_2_ = CONCAT11(0,(byte)uVar4);
      auVar9[0xc] = bVar59;
      auVar9._0_12_ = ZEXT812(0);
      uVar14 = CONCAT32(auVar9._10_3_,(ushort)bVar57);
      Var7 = CONCAT82((ulonglong)uVar14 << 0x10,(ushort)bVar56);
      auVar44._2_2_ = 0;
      auVar44._4_10_ = Var7;
      auVar44._14_2_ = 0;
      auVar46._0_2_ = CONCAT11(0,(byte)uVar4);
      auVar43._0_4_ = -(uint)(0x7f < auVar44._0_2_);
      auVar43._4_4_ = -(uint)(0x7f < (uint)Var7);
      auVar43._8_4_ = -(uint)(0x7f < (int)uVar14);
      auVar43._12_4_ = -(uint)(0x7f < bVar59);
      auVar10[0xc] = bVar59;
      auVar10._0_12_ = ZEXT812(0);
      uVar14 = CONCAT32(auVar10._10_3_,(ushort)bVar57);
      Var7 = CONCAT82((ulonglong)uVar14 << 0x10,(ushort)bVar56);
      auVar46._2_2_ = 0;
      auVar46._4_10_ = Var7;
      auVar46._14_2_ = 0;
      auVar44 = auVar43 & auVar55 | auVar44;
      fVar61 = (float)auVar44._0_4_ * 0.007874016;
      fVar40 = (float)auVar44._4_4_ * 0.007874016;
      fVar54 = (float)auVar44._8_4_ * 0.007874016;
      fStack_1f4 = (float)(int)(char)bVar58 * 0.007843138 - 1.0;
      local_1f8 = fStack_1f4 * (fStack_204 * fVar54 - fStack_200 * fVar40);
      fStack_1f0 = fStack_1f4 * (local_208 * fVar40 - fStack_204 * fVar61);
      fStack_1f4 = fStack_1f4 * (fStack_200 * fVar61 - local_208 * fVar54);
      auVar45._0_4_ = -(uint)(0x7f < auVar46._0_2_);
      auVar45._4_4_ = -(uint)(0x7f < (uint)Var7);
      auVar45._8_4_ = -(uint)(0x7f < (int)uVar14);
      auVar45._12_4_ = -(uint)(0x7f < bVar59);
      auVar46 = auVar45 & auVar55 | auVar46;
      fVar40 = fStack_1ec * local_228 + fStack_1f0 * local_238 +
               fStack_1f4 * local_248 + local_1f8 * local_258;
      fVar54 = fStack_1ec * fStack_224 + fStack_1f0 * fStack_234 +
               fStack_1f4 * fStack_244 + local_1f8 * fStack_254;
      fStack_270 = fStack_1ec * fStack_220 + fStack_1f0 * fStack_230 +
                   fStack_1f4 * fStack_240 + local_1f8 * fStack_250;
      fStack_26c = fStack_1ec * fStack_21c + fStack_1f0 * fStack_22c +
                   fStack_1f4 * fStack_23c + local_1f8 * fStack_24c;
      local_278 = CONCAT44(fVar54,fVar40);
      local_1e8 = (float)auVar46._0_4_ * 0.007874016;
      fStack_1e4 = (float)auVar46._4_4_ * 0.007874016;
      fStack_1e0 = (float)auVar46._8_4_ * 0.007874016;
      lVar5 = *(longlong *)(param_1 + 0x20);
      fVar62 = fStack_1dc * local_228 + fStack_1e0 * local_238 +
               fStack_1e4 * local_248 + local_1e8 * local_258;
      fVar61 = fStack_1dc * fStack_224 + fStack_1e0 * fStack_234 +
               fStack_1e4 * fStack_244 + local_1e8 * fStack_254;
      fStack_2a0 = fStack_1dc * fStack_220 + fStack_1e0 * fStack_230 +
                   fStack_1e4 * fStack_240 + local_1e8 * fStack_250;
      fStack_29c = fStack_1dc * fStack_21c + fStack_1e0 * fStack_22c +
                   fStack_1e4 * fStack_23c + local_1e8 * fStack_24c;
      local_2a8 = CONCAT44(fVar61,fVar62);
      fVar62 = fVar62 * 127.0;
      iVar34 = (int)ROUND(fVar62 + fVar62 + 0.5) >> 1;
      if (iVar34 < -0x80) {
        iVar30 = -0x80;
      }
      else {
        iVar30 = 0x7f;
        if (iVar34 < 0x7f) {
          iVar30 = iVar34;
        }
      }
      fVar61 = fVar61 * 127.0;
      *(char *)(lVar1 + 0x4c + lVar5) = (char)iVar30;
      iVar30 = (int)ROUND(fVar61 + fVar61 + 0.5) >> 1;
      if (iVar30 < -0x80) {
        iVar31 = -0x80;
      }
      else {
        iVar31 = 0x7f;
        if (iVar30 < 0x7f) {
          iVar31 = iVar30;
        }
      }
      *(char *)(lVar1 + 0x4d + lVar5) = (char)iVar31;
      iVar31 = (int)ROUND(fStack_2a0 * 127.0 + fStack_2a0 * 127.0 + 0.5) >> 1;
      if (iVar31 < -0x80) {
        iVar29 = -0x80;
      }
      else {
        iVar29 = 0x7f;
        if (iVar31 < 0x7f) {
          iVar29 = iVar31;
        }
      }
      *(char *)(lVar1 + 0x4e + lVar5) = (char)iVar29;
      *(undefined1 *)(lVar1 + 0x4f + lVar5) = 0x7f;
      iVar29 = (int)ROUND(fVar53 * 254.0 + 0.5) >> 1;
      if (iVar29 < -0x80) {
        iVar24 = -0x80;
      }
      else {
        iVar24 = 0x7f;
        if (iVar29 < 0x7f) {
          iVar24 = iVar29;
        }
      }
      *(char *)(lVar1 + 0x50 + lVar5) = (char)iVar24;
      iVar24 = (int)ROUND(fVar60 * 254.0 + 0.5) >> 1;
      if (iVar24 < -0x80) {
        iVar28 = -0x80;
      }
      else {
        iVar28 = 0x7f;
        if (iVar24 < 0x7f) {
          iVar28 = iVar24;
        }
      }
      *(char *)(lVar1 + 0x51 + lVar5) = (char)iVar28;
      iVar28 = (int)ROUND(fStack_290 * 254.0 + 0.5) >> 1;
      if (iVar28 < -0x80) {
        iVar22 = -0x80;
      }
      else {
        iVar22 = 0x7f;
        if (iVar28 < 0x7f) {
          iVar22 = iVar28;
        }
      }
      *(char *)(lVar1 + 0x52 + lVar5) = (char)iVar22;
      *(undefined1 *)(lVar1 + 0x53 + lVar5) = 0x7f;
      if (iVar29 < -0x80) {
        local_res8 = CONCAT31(local_res8._1_3_,0x80);
      }
      else {
        uVar65 = 0x7f;
        if (iVar29 < 0x7f) {
          uVar65 = (char)iVar29;
        }
        local_res8 = CONCAT31(local_res8._1_3_,uVar65);
      }
      uVar3 = local_res8;
      if (iVar24 < -0x80) {
        local_res8._0_2_ = CONCAT11(0x80,(undefined1)local_res8);
      }
      else {
        uVar65 = 0x7f;
        if (iVar24 < 0x7f) {
          uVar65 = (char)iVar24;
        }
        local_res8._0_2_ = CONCAT11(uVar65,(undefined1)local_res8);
      }
      local_res8._3_1_ = SUB41(uVar3,3);
      if (iVar28 < -0x80) {
        local_res8._0_3_ = CONCAT12(0x80,(undefined2)local_res8);
      }
      else {
        uVar65 = 0x7f;
        if (iVar28 < 0x7f) {
          uVar65 = (char)iVar28;
        }
        local_res8._0_3_ = CONCAT12(uVar65,(undefined2)local_res8);
      }
      fVar40 = fVar40 * 127.0;
      iVar29 = (int)ROUND(fVar40 + fVar40 + 0.5) >> 1;
      if (iVar29 < -0x80) {
        local_res10 = CONCAT31(local_res10._1_3_,0x80);
      }
      else {
        uVar65 = 0x7f;
        if (iVar29 < 0x7f) {
          uVar65 = (char)iVar29;
        }
        local_res10 = CONCAT31(local_res10._1_3_,uVar65);
      }
      uVar3 = local_res10;
      fVar54 = fVar54 * 127.0;
      iVar29 = (int)ROUND(fVar54 + fVar54 + 0.5) >> 1;
      if (iVar29 < -0x80) {
        local_res10._0_2_ = CONCAT11(0x80,(undefined1)local_res10);
      }
      else {
        uVar65 = 0x7f;
        if (iVar29 < 0x7f) {
          uVar65 = (char)iVar29;
        }
        local_res10._0_2_ = CONCAT11(uVar65,(undefined1)local_res10);
      }
      iVar29 = (int)ROUND(fStack_270 * 127.0 + fStack_270 * 127.0 + 0.5) >> 1;
      local_res10._3_1_ = SUB41(uVar3,3);
      if (iVar29 < -0x80) {
        local_res10._0_3_ = CONCAT12(0x80,(undefined2)local_res10);
      }
      else {
        uVar65 = 0x7f;
        if (iVar29 < 0x7f) {
          uVar65 = (char)iVar29;
        }
        local_res10._0_3_ = CONCAT12(uVar65,(undefined2)local_res10);
      }
      if (iVar34 < -0x80) {
        local_res18 = CONCAT31(local_res18._1_3_,0x80);
      }
      else {
        uVar65 = 0x7f;
        if (iVar34 < 0x7f) {
          uVar65 = (char)iVar34;
        }
        local_res18 = CONCAT31(local_res18._1_3_,uVar65);
      }
      uVar3 = local_res18;
      if (iVar30 < -0x80) {
        local_res18._0_2_ = CONCAT11(0x80,(undefined1)local_res18);
      }
      else {
        uVar65 = 0x7f;
        if (iVar30 < 0x7f) {
          uVar65 = (char)iVar30;
        }
        local_res18._0_2_ = CONCAT11(uVar65,(undefined1)local_res18);
      }
      local_res18._3_1_ = SUB41(uVar3,3);
      if (iVar31 < -0x80) {
        local_res18._0_3_ = CONCAT12(0x80,(undefined2)local_res18);
      }
      else {
        uVar65 = 0x7f;
        if (iVar31 < 0x7f) {
          uVar65 = (char)iVar31;
        }
        local_res18._0_3_ = CONCAT12(uVar65,(undefined2)local_res18);
      }
      auVar48._0_2_ = CONCAT11(0,(byte)(undefined3)local_res8);
      auVar11[0xc] = local_res8._3_1_;
      auVar11._0_12_ = ZEXT812(0);
      uVar14 = CONCAT32(auVar11._10_3_,(ushort)(byte)((uint3)(undefined3)local_res8 >> 0x10));
      Var7 = CONCAT82((ulonglong)uVar14 << 0x10,(ushort)(byte)((uint3)(undefined3)local_res8 >> 8));
      auVar48._2_2_ = 0;
      auVar48._4_10_ = Var7;
      auVar48._14_2_ = 0;
      local_1cc = 0;
      auVar47._0_4_ = -(uint)(0x7f < auVar48._0_2_);
      auVar47._4_4_ = -(uint)(0x7f < (uint)Var7);
      auVar47._8_4_ = -(uint)(0x7f < (int)uVar14);
      auVar47._12_4_ = -(uint)(0x7f < local_res8._3_1_);
      local_1bc = 0;
      local_1ac = 0;
      auVar48 = auVar47 & auVar55 | auVar48;
      auVar50._0_2_ = CONCAT11(0,(byte)(undefined3)local_res10);
      auVar12[0xc] = local_res10._3_1_;
      auVar12._0_12_ = ZEXT812(0);
      uVar14 = CONCAT32(auVar12._10_3_,(ushort)(byte)((uint3)(undefined3)local_res10 >> 0x10));
      Var7 = CONCAT82((ulonglong)uVar14 << 0x10,(ushort)(byte)((uint3)(undefined3)local_res10 >> 8))
      ;
      auVar50._2_2_ = 0;
      auVar50._4_10_ = Var7;
      auVar50._14_2_ = 0;
      local_1b8 = (float)auVar48._0_4_ * 0.007874016;
      local_1b4 = (float)auVar48._4_4_ * 0.007874016;
      local_1b0 = (float)auVar48._8_4_ * 0.007874016;
      auVar49._0_4_ = -(uint)(0x7f < auVar50._0_2_);
      auVar49._4_4_ = -(uint)(0x7f < (uint)Var7);
      auVar49._8_4_ = -(uint)(0x7f < (int)uVar14);
      auVar49._12_4_ = -(uint)(0x7f < local_res10._3_1_);
      auVar50 = auVar49 & auVar55 | auVar50;
      auVar52._0_2_ = CONCAT11(0,(byte)(undefined3)local_res18);
      local_1c8 = (float)auVar50._0_4_ * 0.007874016;
      local_1c4 = (float)auVar50._4_4_ * 0.007874016;
      local_1c0 = (float)auVar50._8_4_ * 0.007874016;
      auVar13[0xc] = local_res18._3_1_;
      auVar13._0_12_ = ZEXT812(0);
      uVar14 = CONCAT32(auVar13._10_3_,(ushort)(byte)((uint3)(undefined3)local_res18 >> 0x10));
      Var7 = CONCAT82((ulonglong)uVar14 << 0x10,(ushort)(byte)((uint3)(undefined3)local_res18 >> 8))
      ;
      auVar52._2_2_ = 0;
      auVar52._4_10_ = Var7;
      auVar52._14_2_ = 0;
      auVar51._0_4_ = -(uint)(0x7f < auVar52._0_2_);
      auVar51._4_4_ = -(uint)(0x7f < (uint)Var7);
      auVar51._8_4_ = -(uint)(0x7f < (int)uVar14);
      auVar51._12_4_ = -(uint)(0x7f < local_res18._3_1_);
      auVar52 = auVar51 & auVar55 | auVar52;
      local_1d8 = (float)auVar52._0_4_ * 0.007874016;
      local_1d4 = (float)auVar52._4_4_ * 0.007874016;
      local_1d0 = (float)auVar52._8_4_ * 0.007874016;
      local_1a8 = 0;
      uStack_1a0 = 0x3f80000000000000;
      fVar61 = (float)FMatrix::Determinant(&local_1d8);
      if (0.0 <= fVar61) {
        fVar61 = 1.0;
      }
      else {
        fVar61 = -1.0;
      }
      uVar65 = 0x7f;
      if (fVar61 < 0.0) {
        uVar65 = 0x81;
      }
      *(undefined1 *)(lVar1 + 0x53 + lVar5) = uVar65;
      *(float *)(lVar1 + 0xc + *(longlong *)(param_1 + 0x20)) = local_268;
      puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x10 + lVar37);
      lVar37 = lVar37 + 0x5c;
      *(undefined4 *)(lVar1 + 0x10 + *(longlong *)(param_1 + 0x20)) = *puVar2;
      fVar61 = fVar15;
      fVar40 = fVar16;
      fVar54 = fVar17;
      fVar53 = fVar18;
      fVar62 = fVar19;
      fVar63 = fVar20;
      fVar64 = fVar21;
    } while (lVar37 < 0x398);
    local_2a8 = lVar33 + 0x398;
    local_288 = local_288 + 1;
    uVar32 = (ulonglong)local_288;
    lVar33 = 0;
  } while ((int)local_288 < 0x11);
  lVar37 = 0xaa;
  do {
    FUN_14242c030(param_1,*(longlong *)(param_1 + 0x20) + lVar33);
    lVar33 = lVar33 + 0x5c;
    lVar37 = lVar37 + -1;
  } while (lVar37 != 0);
  iVar34 = 1;
  do {
    lVar33 = 9;
    iVar30 = iVar34;
    do {
      FUN_14242bf10(param_1,iVar30 + -1,iVar30 + 9,iVar30);
      FUN_14242bf10(param_1,iVar30 + 9,iVar30 + 10,iVar30);
      iVar30 = iVar30 + 1;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
    iVar34 = iVar34 + 10;
  } while (iVar34 < 0xa1);
  return param_1;
}



// FUNCTION 1426b6560 FUN_1426b6560 body=414 status=ok
// SIG undefined FUN_1426b6560(void)

undefined8 * FUN_1426b6560(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  FUN_141781840();
  *param_1 = &PTR_FUN_145163d90;
  puVar2 = param_1 + 0xf;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  lVar1 = 3;
  if (param_1 + 0x12 < puVar2) {
    lVar1 = 0;
  }
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  if (puVar2 <= param_1 + 0x12) {
    for (; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
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
  FUN_1426852e0(param_1 + 0x28);
  *(byte *)((longlong)param_1 + 0x99) = *(byte *)((longlong)param_1 + 0x99) & 0xfb | 2;
  *(undefined1 *)((longlong)param_1 + 0x9c) = 0;
  *(byte *)((longlong)param_1 + 0x99) = *(byte *)((longlong)param_1 + 0x99) | 0x50;
  *(byte *)((longlong)param_1 + 0x9a) = *(byte *)((longlong)param_1 + 0x9a) & 0xfa | 2;
  FUN_1426a9ae0(param_1 + 0x28,5);
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 8;
  *(byte *)((longlong)param_1 + 0x99) = *(byte *)((longlong)param_1 + 0x99) & 0xdf;
  param_1[0x5e] = 0;
  *(undefined4 *)((longlong)param_1 + 0x304) = 0;
  param_1[0x5f] = 0x3f8000003f800000;
  *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
  return param_1;
}



// FUNCTION 1426b6700 FUN_1426b6700 body=33 status=ok
// SIG undefined FUN_1426b6700(void)

undefined8 * FUN_1426b6700(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_145164560;
  return param_1;
}



// FUNCTION 1426b6730 FUN_1426b6730 body=115 status=ok
// SIG undefined FUN_1426b6730(void)

undefined8 * FUN_1426b6730(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR_FUN_145163968;
  param_1[5] = &PTR_LAB_145163d60;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 3;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 0x36) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2f) = 0x3f800000;
  return param_1;
}



// FUNCTION 1426b67b0 UPhysicalMaterial body=110 status=ok
// SIG undefined UPhysicalMaterial(void)

undefined8 * UPhysicalMaterial::UPhysicalMaterial(undefined8 *param_1)

{
  undefined4 uStack_14;
  
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1451642c8;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)((longlong)param_1 + 0x2d) = 0;
  *(undefined4 *)(param_1 + 5) = 0x3f333333;
  *(undefined4 *)(param_1 + 6) = 0x3e99999a;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f400000;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3f800000;
  param_1[0xe] = CONCAT44(uStack_14,2);
  param_1[0xf] = param_1;
  return param_1;
}



// FUNCTION 1426b6820 UPhysicsAsset body=192 status=ok
// SIG undefined UPhysicsAsset(void)

undefined8 * UPhysicsAsset::UPhysicsAsset(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__145164028;
  param_1[5] = &PTR_LAB_1451642a0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0xffffffff;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0xffffffff;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  return param_1;
}



// FUNCTION 1426b68e0 ~FBodySetupUVInfo body=114 status=ok
// SIG undefined ~FBodySetupUVInfo(void)

void FBodySetupUVInfo::~FBodySetupUVInfo(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = (int)param_1[5];
  plVar1 = (longlong *)param_1[4];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[4];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1426b6960 FUN_1426b6960 body=224 status=ok
// SIG undefined FUN_1426b6960(void)

void FUN_1426b6960(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  FBodySetupUVInfo::~FBodySetupUVInfo(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x68);
  plVar1 = *(longlong **)(param_1 + 0x60);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x60);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  iVar2 = *(int *)(param_1 + 0x58);
  plVar1 = *(longlong **)(param_1 + 0x50);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x50);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FTriMeshCollisionData::~FTriMeshCollisionData(param_1);
  return;
}



// FUNCTION 1426b6a40 ~FTriMeshCollisionData body=128 status=ok
// SIG undefined ~FTriMeshCollisionData(void)

void FTriMeshCollisionData::~FTriMeshCollisionData(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = (int)param_1[7];
  plVar1 = (longlong *)param_1[6];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[6];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1426b6ac0 operator= body=325 status=ok
// SIG undefined operator=(void)

undefined8 * FBodySetupUVInfo::operator=(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  
  if (param_1 != param_2) {
    iVar5 = *(int *)(param_2 + 1);
    pvVar2 = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar5;
    if ((iVar5 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<int,FDefaultAllocator>::ResizeForCopy(param_1,iVar5);
      ::_guard_xfg_dispatch_icall_nop((void *)*param_1,pvVar2,(longlong)iVar5 << 2);
    }
  }
  TArray<FVector,FDefaultAllocator>::operator=(param_1 + 2,param_2 + 2);
  puVar4 = param_1 + 4;
  if (puVar4 != param_2 + 4) {
    plVar3 = (longlong *)*puVar4;
    for (iVar5 = *(int *)(param_1 + 5); iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
    }
    iVar5 = *(int *)(param_2 + 5);
    puVar6 = (undefined8 *)param_2[4];
    *(int *)(param_1 + 5) = iVar5;
    if ((iVar5 == 0) && (*(int *)((longlong)param_1 + 0x2c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar4,iVar5);
      puVar4 = (undefined8 *)*puVar4;
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar4 = 0;
        iVar1 = *(int *)(puVar6 + 1);
        pvVar2 = (void *)*puVar6;
        *(int *)(puVar4 + 1) = iVar1;
        if (iVar1 == 0) {
          *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar4,iVar1,0);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar4,pvVar2,(longlong)iVar1 << 3);
        }
        puVar4 = puVar4 + 2;
        puVar6 = puVar6 + 2;
      }
    }
  }
  return param_1;
}



// FUNCTION 1426b6c10 operator= body=430 status=ok
// SIG undefined operator=(void)

undefined4 * FConstraintProfileProperties::operator=(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  uVar1 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = uVar1;
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  *(undefined1 *)((longlong)param_1 + 0x29) = *(undefined1 *)((longlong)param_2 + 0x29);
  *(undefined1 *)((longlong)param_1 + 0x2a) = *(undefined1 *)((longlong)param_2 + 0x2a);
  uVar1 = *(undefined8 *)(param_2 + 0xd);
  *(undefined8 *)(param_1 + 0xb) = *(undefined8 *)(param_2 + 0xb);
  *(undefined8 *)(param_1 + 0xd) = uVar1;
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  *(undefined1 *)((longlong)param_1 + 0x49) = *(undefined1 *)((longlong)param_2 + 0x49);
  uVar1 = *(undefined8 *)(param_2 + 0x15);
  *(undefined8 *)(param_1 + 0x13) = *(undefined8 *)(param_2 + 0x13);
  *(undefined8 *)(param_1 + 0x15) = uVar1;
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  uVar1 = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x1c) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x24) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x26) = *(undefined8 *)(param_2 + 0x26);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
  param_1[0x2c] = param_2[0x2c];
  uVar1 = *(undefined8 *)(param_2 + 0x2f);
  *(undefined8 *)(param_1 + 0x2d) = *(undefined8 *)(param_2 + 0x2d);
  *(undefined8 *)(param_1 + 0x2f) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x33);
  *(undefined8 *)(param_1 + 0x31) = *(undefined8 *)(param_2 + 0x31);
  *(undefined8 *)(param_1 + 0x33) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x37);
  *(undefined8 *)(param_1 + 0x35) = *(undefined8 *)(param_2 + 0x35);
  *(undefined8 *)(param_1 + 0x37) = uVar1;
  *(undefined8 *)(param_1 + 0x39) = *(undefined8 *)(param_2 + 0x39);
  param_1[0x3b] = param_2[0x3b];
  *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
  param_1[0x3e] = param_2[0x3e];
  *(undefined1 *)(param_1 + 0x3f) = *(undefined1 *)(param_2 + 0x3f);
  *(byte *)(param_1 + 0x40) =
       *(byte *)(param_1 + 0x40) ^ (*(byte *)(param_1 + 0x40) ^ *(byte *)(param_2 + 0x40)) & 1;
  bVar2 = (*(byte *)(param_2 + 0x40) ^ *(byte *)(param_1 + 0x40)) & 2 ^ *(byte *)(param_1 + 0x40);
  *(byte *)(param_1 + 0x40) = bVar2;
  bVar2 = (bVar2 ^ *(byte *)(param_2 + 0x40)) & 4 ^ bVar2;
  *(byte *)(param_1 + 0x40) = bVar2;
  bVar2 = (bVar2 ^ *(byte *)(param_2 + 0x40)) & 8 ^ bVar2;
  *(byte *)(param_1 + 0x40) = bVar2;
  *(byte *)(param_1 + 0x40) = (bVar2 ^ *(byte *)(param_2 + 0x40)) & 0x10 ^ bVar2;
  return param_1;
}



// FUNCTION 1426b6dc0 FUN_1426b6dc0 body=744 status=ok
// SIG undefined FUN_1426b6dc0(void)

longlong * FUN_1426b6dc0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  uint *puVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  int local_res8 [2];
  longlong *local_48;
  undefined1 local_40 [4];
  uint local_3c;
  longlong local_38;
  uint local_30;
  int local_2c;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x14,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x14);
  plVar1 = param_2 + 2;
  iVar5 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar6 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) << 2);
  plVar10 = (longlong *)param_1[1];
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    if ((int *)plVar10[1] < (int *)*plVar10 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(int *)*plVar10;
      *plVar10 = *plVar10 + 4;
    }
    TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
              (&local_48,param_2);
    if (local_2c < *(int *)(local_38 + 0x18)) {
      do {
        lVar4 = *local_48 + (longlong)local_2c * 0x14;
        FUN_140d66f10(param_1,lVar4);
        (**(code **)(*param_1 + 8))(param_1,lVar4 + 8);
        local_30 = local_30 & ~local_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_40);
      } while (local_2c < *(int *)(local_38 + 0x18));
    }
    return param_1;
  }
  iVar5 = 0;
  local_res8[0] = 0;
  if ((int *)plVar10[1] < (int *)*plVar10 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar10;
    *plVar10 = *plVar10 + 4;
  }
  iVar6 = local_res8[0];
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeTo
              (param_2,local_res8[0]);
  }
  *(undefined4 *)(param_2 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  uVar7 = iVar6 + 0x1f + (iVar6 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_2 + 0x2c) != uVar7) {
    *(uint *)((longlong)param_2 + 0x2c) = uVar7;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(plVar1,0);
  }
  if (0 < local_res8[0]) {
    do {
      if (*(int *)((longlong)param_2 + 0x34) == 0) {
        iVar6 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar6 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
          ResizeGrow(param_2,iVar6);
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(plVar1,0,1);
      }
      else {
        iVar6 = (int)param_2[6];
        iVar8 = *(int *)((longlong)param_2 + 0x34) + -1;
        iVar9 = *(int *)(*param_2 + 4 + (longlong)iVar6 * 0x14);
        *(int *)(param_2 + 6) = iVar9;
        *(int *)((longlong)param_2 + 0x34) = iVar8;
        if (iVar8 != 0) {
          *(undefined4 *)(*param_2 + (longlong)iVar9 * 0x14) = 0xffffffff;
        }
      }
      plVar10 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar10 = plVar1;
      }
      iVar9 = iVar6;
      if (iVar6 < 0) {
        iVar9 = iVar6 + 0x1f;
      }
      puVar3 = (uint *)((longlong)plVar10 + (longlong)(iVar9 >> 5) * 4);
      *puVar3 = *puVar3 | 1 << ((byte)iVar6 & 0x1f);
      lVar4 = *param_2 + (longlong)iVar6 * 0x14;
      puVar2 = (undefined1 *)(lVar4 + 8);
      *puVar2 = 0;
      *(undefined4 *)(lVar4 + 0xc) = 0xffffffff;
      FUN_140d66f10(param_1);
      (**(code **)(*param_1 + 8))(param_1,puVar2);
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 1426b70b0 operator() body=140 status=ok
// SIG undefined operator()(void)

void <lambda_fdd0bff55fa01b81e89277557721ed04>::operator()(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_6c [100];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  lVar3 = (**(code **)(*param_2 + 0x158))(param_2,local_6c);
  local_78 = *(undefined4 *)(lVar3 + 0x10);
  local_74 = *(undefined4 *)(lVar3 + 0x14);
  local_70 = *(undefined4 *)(lVar3 + 0x18);
  local_88 = uVar1;
  uStack_80 = uVar2;
  (**(code **)(*param_2 + 0x150))(param_2,&local_88);
  return;
}



// FUNCTION 1426b7140 FUN_1426b7140 body=246 status=ok
// SIG undefined FUN_1426b7140(void)

void FUN_1426b7140(char *param_1,int *param_2)

{
  byte *pbVar1;
  bool bVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong local_38;
  byte local_30;
  undefined8 local_2c;
  undefined8 uStack_24;
  undefined8 local_1c;
  
  lVar4 = FWeakObjectPtr::Get(param_2 + 0x50);
  if (lVar4 != 0) {
    lVar5 = UGCombatTextWidget::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      plVar6 = *(longlong **)(lVar4 + 0x310);
      plVar7 = plVar6 + (longlong)*(int *)(lVar4 + 0x318) * 6;
      for (; plVar6 != plVar7; plVar6 = plVar6 + 6) {
        if (*(longlong *)(param_1 + 8) == *plVar6) {
          if (plVar6 != (longlong *)0x0) {
            plVar6 = plVar6 + 1;
            goto LAB_1426b7209;
          }
          break;
        }
      }
      if (*param_1 != '\0') {
        plVar6 = &local_38;
        local_30 = local_30 | 1;
        local_38 = 0;
        local_2c = 0;
        uStack_24 = 0;
        local_1c = 0;
LAB_1426b7209:
        pbVar1 = *(byte **)(param_1 + 0x20);
        bVar3 = UpdatePhysicalAnimationSettings
                          (*(undefined8 *)
                            (*(longlong *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x40) +
                              (longlong)*param_2 * 8) + 0x90),plVar6,*(undefined8 *)(param_1 + 0x18)
                           ,*(longlong *)(param_1 + 0x10));
        *pbVar1 = *pbVar1 | bVar3;
      }
    }
  }
  return;
}



// FUNCTION 1426b7240 operator() body=391 status=ok
// SIG undefined operator()(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void <lambda_29d7b1a59d6501cc606fc1ea52e646e2>::operator()(undefined8 *param_1,longlong *param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined1 auStack_108 [32];
  float local_e8;
  float local_e4;
  float local_e0;
  undefined4 local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined4 local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8 [32];
  undefined1 local_88 [48];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  pfVar1 = (float *)param_1[1];
  pfVar2 = (float *)*param_1;
  local_dc = 0;
  local_cc = 0;
  local_d0 = pfVar1[2];
  local_e8 = *pfVar2;
  local_e4 = pfVar2[1];
  local_e0 = pfVar2[2];
  local_d4 = pfVar1[1];
  local_d8 = *pfVar1;
  puVar3 = (undefined4 *)param_1[2];
  local_bc = 0;
  local_c8 = local_e4 * local_d0 - local_e0 * local_d4;
  local_b4 = puVar3[1];
  local_c4 = local_d8 * local_e0 - local_e8 * local_d0;
  local_ac = 0x3f800000;
  local_c0 = local_e8 * local_d4 - local_d8 * local_e4;
  local_b8 = *puVar3;
  local_b0 = puVar3[2];
  FUN_140487e30(local_88,&local_e8);
  U2PTransform(local_a8,local_88);
  (**(code **)(*param_2 + 0x38))(param_2,*(undefined4 *)param_1[3],local_a8);
  return;
}



// FUNCTION 1426b73d0 operator() body=170 status=ok
// SIG undefined operator()(void)

void <lambda_53f4b14cf9034c46682f588ffa2441bb>::operator()(undefined4 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c [84];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  puVar4 = (undefined4 *)(**(code **)(*param_2 + 0x158))(param_2,local_5c);
  local_78 = *puVar4;
  local_74 = puVar4[1];
  local_70 = puVar4[2];
  local_6c = puVar4[3];
  local_68 = uVar1;
  local_64 = uVar2;
  local_60 = uVar3;
  (**(code **)(*param_2 + 0x150))(param_2,&local_78);
  return;
}



// FUNCTION 1426b7480 FUN_1426b7480 body=842 status=ok
// SIG undefined FUN_1426b7480(void)

longlong *
FUN_1426b7480(char *param_1,int *param_2,undefined8 param_3,undefined4 param_4,undefined4 param_5,
             longlong param_6,undefined8 param_7,longlong param_8)

{
  longlong lVar1;
  longlong lVar2;
  byte *pbVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  byte bVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  byte local_res8 [8];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  uint uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  
  local_68 = FUN_1426c86a0(*(undefined8 *)(DAT_146b17150 + 0x6c8));
  pbVar3 = (byte *)CONCAT71(param_7._1_7_,(byte)param_7);
  param_7._0_1_ = *pbVar3;
  local_60 = local_68;
  plVar5 = (longlong *)
           (**(code **)(*DAT_146b08400 + 0xd8))
                     (DAT_146b08400,param_2,&local_68,1,*param_1 == '\0',&param_7);
  if (plVar5 != (longlong *)0x0) {
    plVar5[2] = param_6;
    (**(code **)(*plVar5 + 0x88))(plVar5,param_3);
    plVar8 = *(longlong **)(param_1 + 8);
    if (plVar8 != (longlong *)0x0) {
      iVar4 = (int)plVar8[1];
      *(int *)(plVar8 + 1) = iVar4 + 1;
      if (*(int *)((longlong)plVar8 + 0xc) < iVar4 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar8,iVar4);
      }
      *(longlong **)(*plVar8 + (longlong)iVar4 * 8) = plVar5;
    }
    (**(code **)(*plVar5 + 0xd8))(plVar5,param_4);
    (**(code **)(*plVar5 + 0xe8))(plVar5,param_5);
    if ((*param_1 == '\0') && (*(int *)(param_1 + 0x30) != 0)) {
      uVar12 = 0;
      lVar7 = 1;
    }
    else {
      uVar12 = 1;
      lVar7 = 0;
    }
    lVar1 = *(longlong *)(param_1 + 0x38);
    puVar11 = (undefined4 *)(lVar1 + 4);
    iVar4 = (**(code **)(*plVar5 + 0x30))(plVar5);
    lVar2 = *(longlong *)(param_1 + 0x38);
    uVar10 = (ulonglong)(iVar4 == 5);
    if (*param_2 == 5) {
      *pbVar3 = *(byte *)(lVar7 + 0x34 + lVar2) | *(byte *)(uVar10 + 0x36 + lVar2);
    }
    else {
      *pbVar3 = *pbVar3 & (*(byte *)((uVar12 ^ 1) + 0x34 + lVar2) | *(byte *)(uVar10 + 0x36 + lVar2)
                          );
    }
    if (param_8 == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x28);
    }
    else {
      uVar6 = FUN_1426c86a0();
    }
    (**(code **)(*plVar5 + 0xa8))(plVar5,puVar11 + (uVar10 + 1) * 4);
    local_res8[0] = *pbVar3;
    (**(code **)(*plVar5 + 0x100))(plVar5,local_res8);
    (**(code **)(*plVar5 + 0x98))(plVar5,puVar11);
    FUN_14268eeb0(plVar5,uVar6,param_1 + 0x18,*param_1);
    lVar7 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x40) + 0x138);
    if (((lVar7 != 0) && ((*(byte *)(lVar7 + 0x2ef) & 1) != 0)) && (1 < *param_2 - 5U)) {
      local_58 = *puVar11;
      uStack_54 = *(uint *)(lVar1 + 8);
      uStack_50 = *(undefined4 *)(lVar1 + 0xc);
      uStack_4c = *(uint *)(lVar1 + 0x10);
      *pbVar3 = *pbVar3 & 0xec;
      bVar9 = *(byte *)(*(longlong *)(param_1 + 0x40) + 0x10) & 1;
      if (bVar9 != 0) {
        uStack_4c = uStack_4c | 0x100;
      }
      local_res8[0] = 4;
      if (bVar9 != 0) {
        local_res8[0] = 1;
      }
      *pbVar3 = local_res8[0];
      plVar8 = (longlong *)
               (**(code **)(*DAT_146b08400 + 0xd8))
                         (DAT_146b08400,param_2,&local_60,1,*param_1 == '\0',local_res8);
      uStack_54 = uStack_54 |
                  *(uint *)(lVar1 + 0x1c) | *(uint *)(lVar1 + 0x18) | *(uint *)(lVar1 + 8);
      uStack_4c = uStack_4c | 0x40;
      (**(code **)(*plVar8 + 0x98))(plVar8,&local_58);
      plVar8[2] = param_6;
      (**(code **)(*plVar8 + 0x88))(plVar8,param_3);
      (**(code **)(*plVar8 + 0xd8))(plVar8,param_4);
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0xb8))(*(longlong **)(param_1 + 0x10),plVar8);
      (**(code **)*plVar8)(plVar8);
    }
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0xb8))(*(longlong **)(param_1 + 0x10),plVar5);
    (**(code **)*plVar5)(plVar5);
  }
  return plVar5;
}



// FUNCTION 1426b77d0 operator() body=151 status=ok
// SIG undefined operator()(void)

void <lambda_9e2ad6f740e4a7d3b0ed18350ceba6ea>::operator()(undefined8 *param_1,longlong *param_2)

{
  float local_48;
  float local_44;
  float local_40;
  float local_30;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  (**(code **)(*param_2 + 0x168))(param_2,local_28,local_18);
  local_30 = *(float *)(param_1 + 1);
  local_44 = *(float *)((longlong)param_1 + 4) * 2.0 * 3.1415927;
  local_48 = (float)*param_1 * 2.0 * 3.1415927;
  local_40 = local_30 * 2.0 * 3.1415927;
  (**(code **)(*param_2 + 0x160))(param_2,local_28,&local_48);
  return;
}



// FUNCTION 1426b7870 FUN_1426b7870 body=130 status=ok
// SIG undefined FUN_1426b7870(void)

void FUN_1426b7870(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  plVar2 = (longlong *)(**(code **)(*param_2 + 200))(param_2);
  (**(code **)(*plVar2 + 0x60))(plVar2,&local_38,&local_28);
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = local_38;
  *(undefined4 *)(puVar1 + 1) = local_30;
  puVar1 = (undefined8 *)param_1[1];
  *puVar1 = local_28;
  *(undefined4 *)(puVar1 + 1) = local_20;
  return;
}



// FUNCTION 1426b7900 FUN_1426b7900 body=135 status=ok
// SIG undefined FUN_1426b7900(void)

void FUN_1426b7900(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  undefined1 local_res8 [32];
  
  cVar1 = *(char *)(param_2 + 0x30);
  local_res8[0] = 8;
  if (cVar1 == '\x01') {
    local_res8[0] = 10;
  }
  else if (cVar1 == '\x02') {
    local_res8[0] = 9;
  }
  else if (cVar1 == '\x03') {
    local_res8[0] = 0xb;
  }
  *(longlong *)(param_2 + 0x28) = param_2;
  *(undefined4 *)(param_2 + 0x20) = 6;
  FUN_1426b7480(param_1,param_3,param_4,param_5,param_6,(undefined4 *)(param_2 + 0x20),local_res8,
                *(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 1426b79a0 FUN_1426b79a0 body=97 status=ok
// SIG undefined FUN_1426b79a0(void)

undefined8 * FUN_1426b79a0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145164550;
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



// FUNCTION 1426b7a10 FUN_1426b7a10 body=97 status=ok
// SIG undefined FUN_1426b7a10(void)

undefined8 * FUN_1426b7a10(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145164540;
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



// FUNCTION 1426b7a80 FUN_1426b7a80 body=181 status=ok
// SIG undefined FUN_1426b7a80(void)

longlong FUN_1426b7a80(longlong param_1,ulonglong param_2)

{
  FUN_14061f570(param_1 + 0x140);
  FBodySetupUVInfo::~FBodySetupUVInfo(param_1 + 0x110);
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  FFormatContainer::FlushData(param_1 + 0xd8);
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  FUN_140c643a0(param_1 + 0x68);
  FUN_1409701b0(param_1 + 0x58);
  FUN_140c64320(param_1 + 0x48);
  FUN_140c64220(param_1 + 0x38);
  FUN_140c642a0(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x308);
  }
  return param_1;
}



// FUNCTION 1426b7b40 FUN_1426b7b40 body=90 status=ok
// SIG undefined FUN_1426b7b40(void)

longlong FUN_1426b7b40(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1b8);
  }
  return param_1;
}



// FUNCTION 1426b7ba0 `scalar_deleting_destructor' body=211 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UPhysicsAsset::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x100) = 0;
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x68);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_145013eb0;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 1426b7c80 FUN_1426b7c80 body=2824 status=ok
// SIG undefined FUN_1426b7c80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1426b7c80(longlong param_1,longlong *param_2,longlong *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined1 auVar3 [13];
  undefined1 auVar4 [13];
  undefined1 auVar5 [13];
  uint5 uVar6;
  unkbyte9 Var7;
  undefined1 auVar8 [13];
  undefined1 auVar9 [13];
  undefined1 auVar10 [13];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  char cVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  longlong *plVar27;
  int iVar28;
  ulonglong uVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 auStack_248 [32];
  char local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  float local_218;
  float local_214;
  undefined4 uStack_210;
  float local_20c;
  undefined4 local_208;
  uint local_204;
  int local_200;
  uint local_1fc;
  byte *local_1f8;
  undefined4 local_1f0;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  int local_1dc;
  int local_1d8;
  uint local_1d4;
  longlong *local_1d0;
  longlong local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  longlong local_1b0;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  undefined4 local_19c;
  float local_198;
  float local_194;
  float local_190;
  undefined4 local_18c;
  float local_188;
  float local_184;
  float local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  float local_168;
  float local_164;
  float local_160;
  ushort local_158;
  ushort local_156;
  undefined8 local_148;
  float fStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined1 uStack_fc;
  undefined1 uStack_fb;
  undefined1 uStack_fa;
  undefined1 uStack_f9;
  undefined4 local_f8;
  undefined4 uStack_f4;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  plVar27 = *(longlong **)(param_1 + 0xc0);
  cVar20 = '\0';
  local_228 = '\0';
  if (plVar27 == (longlong *)0x0) {
    plVar27 = *(longlong **)(param_1 + 200);
    if (plVar27 == (longlong *)0x0) {
      return;
    }
    cVar20 = '\x01';
    local_228 = '\x01';
  }
  iVar25 = (int)param_2[1];
  local_208 = param_4;
  local_200 = iVar25;
  local_1d0 = param_2;
  local_1c0 = plVar27;
  local_1b8 = param_3;
  lVar15 = (**(code **)(*plVar27 + 0x30))(plVar27);
  local_1c8 = lVar15;
  lVar16 = (**(code **)(*plVar27 + 0x38))(plVar27);
  local_1b0 = lVar16;
  local_1d4 = (**(code **)(*plVar27 + 0x40))(plVar27);
  uStack_210 = 0x3f800000;
  local_20c = 1.0;
  local_214 = -1.0;
  if (cVar20 == '\0') {
    local_214 = 1.0;
  }
  local_1f8 = (byte *)CONCAT44(0x3f800000,local_214);
  local_1f0 = 0x3f800000;
  local_1fc = 0;
  if (local_1d4 != 0) {
    local_1e0 = 1.0;
    local_1e4 = 1.0;
    local_1e8 = local_214;
    do {
      uVar23 = local_1fc;
      (**(code **)(*plVar27 + 0x48))(plVar27,local_1fc,&local_168);
      auVar11 = _DAT_144101760;
      local_1f8 = (byte *)((ulonglong)local_156 + lVar16);
      uVar29 = (ulonglong)*local_1f8;
      uVar17 = (ulonglong)local_1f8[1];
      fVar30 = *(float *)(lVar15 + uVar17 * 0xc) - *(float *)(lVar15 + uVar29 * 0xc);
      uVar42 = SUB41(fVar30,0);
      uVar43 = (undefined1)((uint)fVar30 >> 8);
      uVar44 = (undefined1)((uint)fVar30 >> 0x10);
      uVar45 = (undefined1)((uint)fVar30 >> 0x18);
      fVar46 = *(float *)(lVar15 + 4 + uVar17 * 0xc) - *(float *)(lVar15 + 4 + uVar29 * 0xc);
      fVar47 = *(float *)(lVar15 + 8 + uVar17 * 0xc) - *(float *)(lVar15 + 8 + uVar29 * 0xc);
      fVar37 = fVar46 * fVar46 + fVar30 * fVar30 + fVar47 * fVar47;
      if (fVar37 != 1.0) {
        if (1e-08 <= fVar37) {
          auVar41 = rsqrtss(ZEXT416((uint)fVar37),ZEXT416((uint)fVar37));
          local_218 = auVar41._0_4_;
          local_218 = local_218 + local_218 * (0.5 - fVar37 * 0.5 * local_218 * local_218);
          local_218 = local_218 + local_218 * (0.5 - fVar37 * 0.5 * local_218 * local_218);
          fVar30 = fVar30 * local_218;
          uVar42 = SUB41(fVar30,0);
          uVar43 = (undefined1)((uint)fVar30 >> 8);
          uVar44 = (undefined1)((uint)fVar30 >> 0x10);
          uVar45 = (undefined1)((uint)fVar30 >> 0x18);
          fVar46 = fVar46 * local_218;
          fVar47 = fVar47 * local_218;
        }
        else {
          uVar42 = SUB41(DAT_1468b5d90,0);
          uVar43 = (undefined1)((uint)DAT_1468b5d90 >> 8);
          uVar44 = (undefined1)((uint)DAT_1468b5d90 >> 0x10);
          uVar45 = (undefined1)((uint)DAT_1468b5d90 >> 0x18);
          fVar46 = DAT_1468b5d94;
          fVar47 = DAT_1468b5d98;
        }
      }
      fVar38 = local_164 * local_164 + local_168 * local_168 + local_160 * local_160;
      fVar30 = local_168;
      fVar37 = local_164;
      fVar53 = local_160;
      if ((fVar38 != 1.0) &&
         (fVar30 = DAT_1468b5d90, fVar37 = DAT_1468b5d94, fVar53 = DAT_1468b5d98, 1e-08 <= fVar38))
      {
        auVar41 = rsqrtss(ZEXT416((uint)fVar38),ZEXT416((uint)fVar38));
        local_218 = auVar41._0_4_;
        local_218 = local_218 + local_218 * (0.5 - fVar38 * 0.5 * local_218 * local_218);
        local_218 = local_218 + local_218 * (0.5 - fVar38 * 0.5 * local_218 * local_218);
        fVar30 = local_168 * local_218;
        fVar37 = local_164 * local_218;
        fVar53 = local_160 * local_218;
      }
      fVar48 = fVar46 * fVar53 - fVar47 * fVar37;
      fVar49 = fVar47 * fVar30 -
               (float)CONCAT13(uVar45,CONCAT12(uVar44,CONCAT11(uVar43,uVar42))) * fVar53;
      fVar51 = (float)CONCAT13(uVar45,CONCAT12(uVar44,CONCAT11(uVar43,uVar42))) * fVar37 -
               fVar46 * fVar30;
      fVar39 = fVar49 * fVar49 + fVar48 * fVar48 + fVar51 * fVar51;
      fVar38 = fVar48;
      fVar50 = fVar49;
      fVar52 = fVar51;
      if ((fVar39 != 1.0) &&
         (fVar38 = DAT_1468b5d90, fVar50 = DAT_1468b5d94, fVar52 = DAT_1468b5d98, 1e-08 <= fVar39))
      {
        auVar40._8_8_ = 0;
        auVar40._0_8_ = CONCAT44(0,fVar39);
        auVar41._8_8_ = 0;
        auVar41._0_8_ = CONCAT44(0,fVar39);
        auVar41 = rsqrtss(auVar40,auVar41);
        local_218 = auVar41._0_4_;
        local_218 = local_218 + local_218 * (0.5 - fVar39 * 0.5 * local_218 * local_218);
        local_218 = local_218 + local_218 * (0.5 - fVar39 * 0.5 * local_218 * local_218);
        fVar38 = fVar48 * local_218;
        fVar50 = fVar49 * local_218;
        fVar52 = fVar51 * local_218;
      }
      local_204 = 0;
      uVar29 = 0;
      if (local_158 != 0) {
        local_224 = 0x7f000000;
        local_220 = 0x7f000000;
        local_21c = 0x7f000000;
        local_1dc = (int)ROUND(fVar38 * 254.0 + 0.5) >> 1;
        local_1d8 = (int)ROUND(fVar50 * 254.0 + 0.5) >> 1;
        iVar19 = (int)ROUND((float)CONCAT13(uVar45,CONCAT12(uVar44,CONCAT11(uVar43,uVar42))) * 254.0
                            + 0.5) >> 1;
        iVar21 = (int)ROUND(fVar46 * 254.0 + 0.5) >> 1;
        iVar24 = (int)ROUND(fVar30 * 254.0 + 0.5) >> 1;
        iVar28 = (int)ROUND(fVar37 * 254.0 + 0.5) >> 1;
        iVar22 = (int)ROUND(fVar53 * 254.0 + 0.5) >> 1;
        local_218 = (float)((int)ROUND(fVar52 * 254.0 + 0.5) >> 1);
        iVar26 = (int)ROUND(fVar47 * 254.0 + 0.5) >> 1;
        do {
          uVar12 = local_f8;
          uVar29 = (ulonglong)local_1f8[uVar29];
          local_20c = local_1e0 * *(float *)(lVar15 + 8 + uVar29 * 0xc);
          local_148 = CONCAT44(local_1e4 * *(float *)(lVar15 + 4 + uVar29 * 0xc),
                               local_1e8 * *(float *)(lVar15 + uVar29 * 0xc));
          uStack_f4 = local_208;
          if (iVar19 < -0x80) {
            iVar25 = -0x80;
          }
          else {
            iVar25 = 0x7f;
            if (iVar19 < 0x7f) {
              iVar25 = iVar19;
            }
          }
          uStack_fc = (undefined1)iVar25;
          if (iVar21 < -0x80) {
            iVar25 = -0x80;
          }
          else {
            iVar25 = 0x7f;
            if (iVar21 < 0x7f) {
              iVar25 = iVar21;
            }
          }
          uStack_fb = (undefined1)iVar25;
          if (iVar26 < -0x80) {
            iVar25 = -0x80;
          }
          else {
            iVar25 = 0x7f;
            if (iVar26 < 0x7f) {
              iVar25 = iVar26;
            }
          }
          uStack_fa = (undefined1)iVar25;
          uStack_f9 = 0x7f;
          if (iVar24 < -0x80) {
            iVar25 = -0x80;
          }
          else {
            iVar25 = 0x7f;
            if (iVar24 < 0x7f) {
              iVar25 = iVar24;
            }
          }
          if (iVar28 < -0x80) {
            iVar13 = -0x80;
          }
          else {
            iVar13 = 0x7f;
            if (iVar28 < 0x7f) {
              iVar13 = iVar28;
            }
          }
          if (iVar22 < -0x80) {
            iVar14 = -0x80;
          }
          else {
            iVar14 = 0x7f;
            if (iVar22 < 0x7f) {
              iVar14 = iVar22;
            }
          }
          local_f8._3_1_ = SUB41(uVar12,3);
          local_f8._0_3_ = CONCAT12((char)iVar14,CONCAT11((char)iVar13,(char)iVar25));
          if (iVar24 < -0x80) {
            local_224 = CONCAT31(local_224._1_3_,0x80);
          }
          else {
            uVar42 = 0x7f;
            if (iVar24 < 0x7f) {
              uVar42 = (char)iVar24;
            }
            local_224 = CONCAT31(local_224._1_3_,uVar42);
          }
          uVar12 = local_224;
          if (iVar28 < -0x80) {
            local_224._0_2_ = CONCAT11(0x80,(undefined1)local_224);
          }
          else {
            uVar42 = 0x7f;
            if (iVar28 < 0x7f) {
              uVar42 = (char)iVar28;
            }
            local_224._0_2_ = CONCAT11(uVar42,(undefined1)local_224);
          }
          local_224._3_1_ = SUB41(uVar12,3);
          if (iVar22 < -0x80) {
            local_224._0_3_ = CONCAT12(0x80,(undefined2)local_224);
          }
          else {
            uVar42 = 0x7f;
            if (iVar22 < 0x7f) {
              uVar42 = (char)iVar22;
            }
            local_224._0_3_ = CONCAT12(uVar42,(undefined2)local_224);
          }
          if (local_1dc < -0x80) {
            local_220 = CONCAT31(local_220._1_3_,0x80);
          }
          else {
            uVar42 = 0x7f;
            if (local_1dc < 0x7f) {
              uVar42 = (char)local_1dc;
            }
            local_220 = CONCAT31(local_220._1_3_,uVar42);
          }
          uVar12 = local_220;
          if (local_1d8 < -0x80) {
            local_220._0_2_ = CONCAT11(0x80,(undefined1)local_220);
          }
          else {
            uVar42 = 0x7f;
            if (local_1d8 < 0x7f) {
              uVar42 = (char)local_1d8;
            }
            local_220._0_2_ = CONCAT11(uVar42,(undefined1)local_220);
          }
          local_220._3_1_ = SUB41(uVar12,3);
          if ((int)local_218 < -0x80) {
            local_220._0_3_ = CONCAT12(0x80,(undefined2)local_220);
          }
          else {
            uVar42 = 0x7f;
            if ((int)local_218 < 0x7f) {
              uVar42 = SUB41(local_218,0);
            }
            local_220._0_3_ = CONCAT12(uVar42,(undefined2)local_220);
          }
          if (iVar19 < -0x80) {
            local_21c = CONCAT31(local_21c._1_3_,0x80);
          }
          else {
            uVar42 = 0x7f;
            if (iVar19 < 0x7f) {
              uVar42 = (char)iVar19;
            }
            local_21c = CONCAT31(local_21c._1_3_,uVar42);
          }
          uVar12 = local_21c;
          if (iVar21 < -0x80) {
            local_21c._0_2_ = CONCAT11(0x80,(undefined1)local_21c);
          }
          else {
            uVar42 = 0x7f;
            if (iVar21 < 0x7f) {
              uVar42 = (char)iVar21;
            }
            local_21c._0_2_ = CONCAT11(uVar42,(undefined1)local_21c);
          }
          local_21c._3_1_ = SUB41(uVar12,3);
          if (iVar26 < -0x80) {
            local_21c._0_3_ = CONCAT12(0x80,(undefined2)local_21c);
          }
          else {
            uVar42 = 0x7f;
            if (iVar26 < 0x7f) {
              uVar42 = (char)iVar26;
            }
            local_21c._0_3_ = CONCAT12(uVar42,(undefined2)local_21c);
          }
          auVar3[0xc] = local_224._3_1_;
          auVar3._0_12_ = ZEXT712(0);
          uVar6 = CONCAT32(auVar3._10_3_,(ushort)(byte)((uint3)(undefined3)local_224 >> 0x10));
          auVar8._5_8_ = 0;
          auVar8._0_5_ = uVar6;
          Var7 = CONCAT72(SUB137(auVar8 << 0x40,6),(ushort)(byte)((uint3)(undefined3)local_224 >> 8)
                         );
          auVar32._0_4_ = CONCAT31(0,(byte)(undefined3)local_224);
          auVar32._4_9_ = Var7;
          auVar32._13_3_ = 0;
          local_19c = 0;
          auVar31._0_4_ = -(uint)(0x7f < auVar32._0_4_);
          auVar31._4_4_ = -(uint)(0x7f < (uint)Var7);
          auVar31._8_4_ = -(uint)(0x7f < (int)uVar6);
          auVar31._12_4_ = -(uint)(0x7f < (uint3)(auVar3._10_3_ >> 0x10));
          local_18c = 0;
          local_17c = 0;
          auVar32 = auVar31 & auVar11 | auVar32;
          auVar4[0xc] = local_220._3_1_;
          auVar4._0_12_ = ZEXT712(0);
          uVar6 = CONCAT32(auVar4._10_3_,(ushort)(byte)((uint3)(undefined3)local_220 >> 0x10));
          auVar9._5_8_ = 0;
          auVar9._0_5_ = uVar6;
          Var7 = CONCAT72(SUB137(auVar9 << 0x40,6),(ushort)(byte)((uint3)(undefined3)local_220 >> 8)
                         );
          auVar34._0_4_ = CONCAT31(0,(byte)(undefined3)local_220);
          auVar34._4_9_ = Var7;
          auVar34._13_3_ = 0;
          local_188 = (float)auVar32._0_4_ * 0.007874016;
          local_184 = (float)auVar32._4_4_ * 0.007874016;
          local_180 = (float)auVar32._8_4_ * 0.007874016;
          auVar33._0_4_ = -(uint)(0x7f < auVar34._0_4_);
          auVar33._4_4_ = -(uint)(0x7f < (uint)Var7);
          auVar33._8_4_ = -(uint)(0x7f < (int)uVar6);
          auVar33._12_4_ = -(uint)(0x7f < (uint3)(auVar4._10_3_ >> 0x10));
          auVar34 = auVar33 & auVar11 | auVar34;
          local_198 = (float)auVar34._0_4_ * 0.007874016;
          local_194 = (float)auVar34._4_4_ * 0.007874016;
          local_190 = (float)auVar34._8_4_ * 0.007874016;
          auVar5[0xc] = local_21c._3_1_;
          auVar5._0_12_ = ZEXT712(0);
          uVar6 = CONCAT32(auVar5._10_3_,(ushort)(byte)((uint3)(undefined3)local_21c >> 0x10));
          auVar10._5_8_ = 0;
          auVar10._0_5_ = uVar6;
          Var7 = CONCAT72(SUB137(auVar10 << 0x40,6),
                          (ushort)(byte)((uint3)(undefined3)local_21c >> 8));
          auVar36._0_4_ = CONCAT31(0,(byte)(undefined3)local_21c);
          auVar36._4_9_ = Var7;
          auVar36._13_3_ = 0;
          auVar35._0_4_ = -(uint)(0x7f < auVar36._0_4_);
          auVar35._4_4_ = -(uint)(0x7f < (uint)Var7);
          auVar35._8_4_ = -(uint)(0x7f < (int)uVar6);
          auVar35._12_4_ = -(uint)(0x7f < (uint3)(auVar5._10_3_ >> 0x10));
          auVar36 = auVar35 & auVar11 | auVar36;
          local_1a8 = (float)auVar36._0_4_ * 0.007874016;
          local_1a4 = (float)auVar36._4_4_ * 0.007874016;
          local_1a0 = (float)auVar36._8_4_ * 0.007874016;
          local_178 = 0;
          uStack_170 = 0x3f80000000000000;
          fStack_140 = local_20c;
          fVar30 = (float)FMatrix::Determinant(&local_1a8);
          if (0.0 <= fVar30) {
            fVar30 = 1.0;
          }
          else {
            fVar30 = -1.0;
          }
          uVar42 = 0x7f;
          if (fVar30 < 0.0) {
            uVar42 = 0x81;
          }
          local_f8 = CONCAT13(uVar42,(undefined3)local_f8);
          iVar25 = (int)local_1d0[1];
          *(int *)(local_1d0 + 1) = iVar25 + 1;
          if (*(int *)((longlong)local_1d0 + 0xc) < iVar25 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<92,4>_>,TSizedDefaultAllocator<32>_>
            ::ResizeGrow(local_1d0,iVar25);
          }
          lVar15 = *local_1d0;
          lVar16 = (longlong)iVar25 * 0x5c;
          *(undefined8 *)(lVar16 + lVar15) = local_148;
          ((undefined8 *)(lVar16 + lVar15))[1] = CONCAT44(uStack_13c,fStack_140);
          puVar1 = (undefined8 *)(lVar16 + 0x10 + lVar15);
          *puVar1 = local_138;
          puVar1[1] = uStack_130;
          puVar1 = (undefined8 *)(lVar16 + 0x20 + lVar15);
          *puVar1 = local_128;
          puVar1[1] = uStack_120;
          puVar1 = (undefined8 *)(lVar16 + 0x30 + lVar15);
          *puVar1 = local_118;
          puVar1[1] = uStack_110;
          puVar1 = (undefined8 *)(lVar16 + 0x40 + lVar15);
          *puVar1 = local_108;
          puVar1[1] = CONCAT17(uStack_f9,
                               CONCAT16(uStack_fa,CONCAT15(uStack_fb,CONCAT14(uStack_fc,uStack_100))
                                       ));
          puVar2 = (undefined4 *)(lVar16 + 0x50 + lVar15);
          *puVar2 = local_f8;
          puVar2[1] = uStack_f4;
          *(undefined4 *)(lVar16 + 0x58 + lVar15) = local_208;
          local_204 = local_204 + 1;
          uVar29 = (ulonglong)local_204;
          param_3 = local_1b8;
          lVar15 = local_1c8;
          cVar20 = local_228;
          iVar25 = local_200;
          uVar23 = local_1fc;
        } while (local_204 < local_158);
      }
      uVar18 = (uint)local_158;
      if (uVar18 - 2 != 0) {
        uVar29 = (ulonglong)(uVar18 - 2);
        iVar19 = iVar25;
        do {
          iVar22 = iVar19 + 1;
          iVar21 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar21 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar21 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3,iVar21);
          }
          *(int *)(*param_3 + (longlong)iVar21 * 4) = iVar25;
          iVar21 = (int)param_3[1];
          iVar24 = iVar21 + 1;
          *(int *)(param_3 + 1) = iVar24;
          if (cVar20 == '\0') {
            if (*(int *)((longlong)param_3 + 0xc) < iVar24) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3,iVar21);
            }
            *(int *)(*param_3 + (longlong)iVar21 * 4) = iVar19 + 2;
            iVar19 = (int)param_3[1];
            *(int *)(param_3 + 1) = iVar19 + 1;
            if (*(int *)((longlong)param_3 + 0xc) < iVar19 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3,iVar19);
            }
            *(int *)(*param_3 + (longlong)iVar19 * 4) = iVar22;
          }
          else {
            if (*(int *)((longlong)param_3 + 0xc) < iVar24) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3,iVar21);
            }
            *(int *)(*param_3 + (longlong)iVar21 * 4) = iVar22;
            iVar21 = (int)param_3[1];
            *(int *)(param_3 + 1) = iVar21 + 1;
            if (*(int *)((longlong)param_3 + 0xc) < iVar21 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3,iVar21);
            }
            *(int *)(*param_3 + (longlong)iVar21 * 4) = iVar19 + 2;
          }
          uVar29 = uVar29 - 1;
          cVar20 = local_228;
          iVar19 = iVar22;
        } while (uVar29 != 0);
        uVar18 = (uint)local_158;
      }
      local_1fc = uVar23 + 1;
      iVar25 = iVar25 + uVar18;
      lVar15 = local_1c8;
      plVar27 = local_1c0;
      lVar16 = local_1b0;
      cVar20 = local_228;
      local_200 = iVar25;
    } while (local_1fc < local_1d4);
  }
                    /* WARNING: Read-only address (ram,0x000144101760) is written */
  return;
}



// FUNCTION 1426b8790 FUN_1426b8790 body=1088 status=ok
// SIG undefined FUN_1426b8790(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1426b8790(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  float *param_5,undefined8 param_6,undefined8 *param_7,longlong param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  void *_Src;
  char cVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_238 [32];
  float *local_218;
  undefined4 *local_210;
  undefined1 local_208 [16];
  undefined1 *local_1f8;
  undefined1 *puStack_1f0;
  undefined4 local_1d8 [2];
  float local_1d0 [2];
  undefined1 local_1c8 [8];
  undefined8 local_1c0;
  undefined8 local_1b8;
  void *local_1b0;
  int local_1a8;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined4 local_198;
  longlong local_190;
  longlong local_188;
  undefined1 local_178 [64];
  float local_138;
  undefined1 local_128 [24];
  longlong local_110;
  undefined1 local_d8 [24];
  longlong local_c0;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  (**(code **)(*param_1 + 0x278))();
  if (((ABS(*param_5) <= 0.0001) && (ABS(param_5[1]) <= 0.0001)) && (ABS(param_5[2]) <= 0.0001)) {
    puStack_1f0 = (undefined1 *)CONCAT44(puStack_1f0._4_4_,0x3dcccccd);
    param_5[0] = 0.1;
    param_5[1] = 0.1;
    param_5[2] = 0.1;
  }
  iVar3 = 0;
  local_1a8 = *(int *)(param_7 + 1);
  lVar4 = (longlong)local_1a8;
  _Src = (void *)*param_7;
  local_1c8[0] = param_11;
  local_1c0 = param_10;
  local_1b0 = (void *)0x0;
  local_1b8 = param_3;
  if (local_1a8 == 0) {
    local_1a4 = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_1b0,local_1a8,0);
    _guard_xfg_dispatch_icall_nop(local_1b0,_Src,lVar4 << 3);
  }
  local_1a0 = param_6;
  local_190 = param_8;
  local_198 = param_4;
  local_188 = param_2;
  FUN_1426b4c80(local_128,local_1c8);
  FUN_1426b4c80(local_d8,local_1c8);
  local_218 = (float *)FWeakObjectPtr::Get(param_2 + 0x138);
  FUN_1426b4f40(local_178,param_1,param_5,param_9);
  plVar2 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar4 = plVar2[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
    lVar4 = plVar2[0x1f];
  }
  cVar1 = *(char *)(lVar4 + 0xa9);
  if (*(char *)((longlong)param_1 + 0x9c) != '\0') {
    cVar1 = *(char *)((longlong)param_1 + 0x9c);
  }
  if (cVar1 != '\x03') {
    puStack_1f0 = local_128;
    local_1f8 = &LAB_1426bad70;
    FUN_1426b34f0(local_178,param_1 + 5,&local_1f8);
    puStack_1f0 = local_128;
    local_1f8 = &LAB_1426bad70;
    FUN_1426b3830(local_178,param_1 + 9,&local_1f8);
    puStack_1f0 = local_128;
    local_1f8 = &LAB_1426bad70;
    FUN_1426b2f30(local_178,param_1 + 7,&local_1f8);
    puStack_1f0 = local_128;
    local_1f8 = &LAB_1426bad70;
    FUN_1426b31c0(local_178,param_1 + 0xb,&local_1f8);
  }
  plVar2 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar4 = plVar2[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
    lVar4 = plVar2[0x1f];
  }
  cVar1 = *(char *)(lVar4 + 0xa9);
  if (*(char *)((longlong)param_1 + 0x9c) != '\0') {
    cVar1 = *(char *)((longlong)param_1 + 0x9c);
  }
  if ((cVar1 != '\x02') && (0 < (int)param_1[0x21])) {
    do {
      local_88 = 5;
      local_84 = 0x3f800000;
      uStack_80 = 0x3f800000;
      uStack_7c = 0x3f800000;
      uStack_78 = 0;
      local_74 = 0;
      lVar4 = param_1[0x20] + (longlong)iVar3 * 8;
      local_6c = 0x3f800000;
      local_60 = 0;
      cVar1 = FUN_1426b44e0(local_178,lVar4,&local_88,&local_1f8);
      if (cVar1 != '\0') {
        local_210 = local_1d8;
        local_1d0[0] = local_138;
        if (local_138 <= 1.0) {
          local_1d0[0] = 1.0;
        }
        local_218 = local_1d0;
        local_1d8[0] = 0;
        FUN_1426bad20(local_d8,lVar4,&local_88,&local_1f8);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[0x21]);
  }
  if ((param_2 != 0) && (plVar2 = (longlong *)FUN_1426979f0(param_2), plVar2 != (longlong *)0x0)) {
    local_208[0] = *(undefined1 *)(param_8 + 0x38);
    (**(code **)(*plVar2 + 0x170))(plVar2,local_208);
  }
  if (local_c0 != 0) {
    FMemory::Free();
  }
  if (local_110 != 0) {
    FMemory::Free();
  }
  if (local_1b0 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1426b8bd0 Alloc body=50 status=ok
// SIG undefined Alloc(void)

void FConstraintInstance::Alloc(void)

{
  void *_Dst;
  
  _Dst = (void *)FMemory::Malloc(0x1b8);
  ::_guard_xfg_dispatch_icall_nop(_Dst,0,0x1b8);
  FUN_1426b5240(_Dst);
  return;
}



// FUNCTION 1426b8c10 FUN_1426b8c10 body=235 status=ok
// SIG undefined FUN_1426b8c10(void)

void FUN_1426b8c10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  char local_res8 [8];
  undefined1 *local_48;
  undefined1 *puStack_40;
  undefined1 local_38 [8];
  undefined8 local_30;
  longlong local_28;
  longlong local_20;
  char *local_18;
  
  if (*(longlong *)(param_1 + 0x180) != 0) {
    local_28 = FUN_1423af5a0();
    if ((local_28 != 0) && (*(longlong *)(param_1 + 0x180) != 0)) {
      local_20 = param_1 + 0x198;
      local_38[0] = param_5;
      local_18 = local_res8;
      local_res8[0] = '\0';
      puStack_40 = local_38;
      local_48 = &LAB_1426bab40;
      local_30 = param_3;
      FUN_1427da670(*(longlong *)(param_1 + 0x180),param_2,param_4,0,&local_48);
      if (local_res8[0] != '\0') {
        FUN_1426cfd50(param_1);
      }
    }
  }
  return;
}



// FUNCTION 1426b8d00 FUN_1426b8d00 body=95 status=ok
// SIG undefined FUN_1426b8d00(void)

void FUN_1426b8d00(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x180) != 0) {
    lVar2 = FUN_1423af5a0();
    if (lVar2 != 0) {
      cVar1 = UpdatePhysicalAnimationSettings(param_2,param_3,param_1 + 0x198,lVar2);
      if (cVar1 != '\0') {
        FUN_1426cfd50(param_1);
      }
    }
  }
  return;
}



// FUNCTION 1426b8d60 FUN_1426b8d60 body=249 status=ok
// SIG undefined FUN_1426b8d60(void)

void FUN_1426b8d60(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined1 param_4)

{
  char local_res8 [8];
  code *local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  char *local_10;
  
  if (*(longlong *)(param_1 + 0x180) != 0) {
    local_48 = FUN_1423af5a0();
    if ((local_48 != 0) && (*(longlong *)(param_1 + 0x180) != 0)) {
      local_38 = *param_3;
      uStack_30 = param_3[1];
      local_40 = param_1 + 0x198;
      local_28 = *(undefined4 *)(param_3 + 2);
      uStack_24 = *(undefined4 *)((longlong)param_3 + 0x14);
      uStack_20 = *(undefined4 *)(param_3 + 3);
      uStack_1c = *(undefined4 *)((longlong)param_3 + 0x1c);
      local_10 = local_res8;
      local_18 = param_3[4];
      plStack_50 = &local_48;
      local_58 = FUN_1426bab00;
      local_res8[0] = '\0';
      FUN_1427da670(*(longlong *)(param_1 + 0x180),param_2,param_4,0,&local_58);
      if (local_res8[0] != '\0') {
        FUN_1426cfd50(param_1);
      }
    }
  }
  return;
}



// FUNCTION 1426b8e60 FUN_1426b8e60 body=28 status=ok
// SIG undefined FUN_1426b8e60(void)

void FUN_1426b8e60(longlong param_1)

{
  FUN_1417502d0();
  FUN_1426c0c50(param_1 + 0x28);
  return;
}



// FUNCTION 1426b8e80 FUN_1426b8e80 body=60 status=ok
// SIG undefined FUN_1426b8e80(void)

void FUN_1426b8e80(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x180) != 0) && (*(longlong *)(param_1 + 0x1a8) != 0)) {
    USkeletalMeshComponent::UnregisterOnPhysicsCreatedDelegate();
  }
  FUN_1426ccad0(param_1);
  FUN_142330890(param_1);
  return;
}



// FUNCTION 1426b8ec0 FUN_1426b8ec0 body=1167 status=ok
// SIG undefined FUN_1426b8ec0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1426b8ec0(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  void *_Src;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_e8 [40];
  undefined4 local_c0;
  undefined4 local_bc;
  longlong local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined1 local_90 [24];
  undefined1 local_78 [24];
  longlong local_60 [4];
  longlong *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if (param_1[0xe3] == 0) {
    return;
  }
  if (((int)param_1[0x17f] <= (int)(uint)(*(char *)((longlong)param_1 + 0x2ed) == '\0')) ||
     (iVar6 = (**(code **)(*param_1 + 0x4e8))(), 1 < iVar6 - 2U)) goto LAB_1426b9315;
  FUN_1423aa1a0(param_1);
  FUN_1423b2d70(param_1,1);
  if ((*DAT_146b07bb0 == 0) || (cVar5 = FUN_141636a40(), cVar5 == '\0')) {
    FUN_1426cb420(param_1,param_1 + 0x17a,param_1 + 0x151);
    FUN_1426c0650(param_1,1);
    goto LAB_1426b9315;
  }
  if (*(int *)(param_1[0xe3] + 0x160) != (int)param_1[0x1c8]) {
    plVar7 = param_1 + 0x1c5;
    plVar8 = param_1 + (longlong)(int)param_1[0xee] * 2 + 0xe5;
    if (plVar7 != plVar8) {
      iVar6 = (int)plVar8[1];
      _Src = (void *)*plVar8;
      *(int *)(param_1 + 0x1c6) = iVar6;
      if ((iVar6 == 0) && (*(int *)((longlong)param_1 + 0xe34) == 0)) {
        *(undefined4 *)((longlong)param_1 + 0xe34) = 0;
      }
      else {
        TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(plVar7,iVar6);
        _guard_xfg_dispatch_icall_nop((void *)*plVar7,_Src,(longlong)iVar6 * 0x30);
      }
    }
  }
  plVar7 = param_1 + 0x1c7;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  if (*(int *)((longlong)param_1 + 0xe44) < (int)param_1[0x152]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(plVar7);
  }
  iVar6 = (int)param_1[0x152];
  if (iVar6 != 0) {
    iVar9 = (int)param_1[0x1c8];
    if (*(int *)((longlong)param_1 + 0xe44) < iVar9 + iVar6) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(plVar7);
      iVar9 = (int)param_1[0x1c8];
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar9 * 0x30 + *plVar7),(void *)param_1[0x151],
               (longlong)iVar6 * 0x30);
    *(int *)(param_1 + 0x1c8) = (int)param_1[0x1c8] + iVar6;
  }
  plVar7 = (longlong *)FUN_1426bd440(local_90,0,0xff);
  lVar2 = *plVar7;
  FWeakObjectPtr::operator=(&local_c0,param_1);
  *(undefined4 *)(lVar2 + 0x10) = local_c0;
  *(undefined4 *)(lVar2 + 0x14) = local_bc;
  lVar2 = *plVar7;
  lVar4 = plVar7[2];
  lVar3 = plVar7[1];
  lVar10 = *(longlong *)(lVar2 + 0x20);
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 0x48) = *(int *)(lVar10 + 0x48) + 1;
    UNLOCK();
  }
  local_b8 = lVar10;
  FUN_1426cdf90(lVar2,lVar3,(int)lVar4,1);
  plVar7 = param_1 + 0x1c1;
  if (plVar7 == &local_b8) {
    if (lVar10 != 0) {
      LOCK();
      piVar1 = (int *)(lVar10 + 0x48);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      lVar2 = local_b8;
      goto joined_r0x0001426b90dd;
    }
  }
  else {
    lVar2 = *plVar7;
    *plVar7 = lVar10;
    if (lVar2 != 0) {
      LOCK();
      piVar1 = (int *)(lVar2 + 0x48);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
joined_r0x0001426b90dd:
      if (iVar6 == 1) {
        FGraphEvent::Recycle(lVar2);
      }
    }
  }
  local_40 = (longlong *)0x0;
  local_38 = 1;
  TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(local_60,0);
  plVar8 = local_60;
  if (local_40 != (longlong *)0x0) {
    plVar8 = local_40;
  }
  lVar2 = *plVar7;
  *plVar8 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0x48) = *(int *)(lVar2 + 0x48) + 1;
    UNLOCK();
  }
  plVar7 = (longlong *)FUN_1426bd2c0(local_78,local_60,0xff);
  lVar2 = *plVar7;
  FWeakObjectPtr::operator=(&local_b0,param_1);
  *(undefined4 *)(lVar2 + 0x10) = local_b0;
  *(undefined4 *)(lVar2 + 0x14) = local_ac;
  lVar2 = *plVar7;
  lVar4 = plVar7[2];
  lVar3 = plVar7[1];
  lVar10 = *(longlong *)(lVar2 + 0x20);
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 0x48) = *(int *)(lVar10 + 0x48) + 1;
    UNLOCK();
  }
  local_a8 = lVar10;
  FUN_14048b000(lVar2,lVar3,(int)lVar4,1);
  plVar7 = param_1 + 0x1c2;
  if (plVar7 == &local_a8) {
    if (lVar10 != 0) {
      LOCK();
      piVar1 = (int *)(lVar10 + 0x48);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      lVar2 = local_a8;
      goto joined_r0x0001426b91b3;
    }
  }
  else {
    lVar2 = *plVar7;
    *plVar7 = lVar10;
    if (lVar2 != 0) {
      LOCK();
      piVar1 = (int *)(lVar2 + 0x48);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
joined_r0x0001426b91b3:
      if (iVar6 == 1) {
        FGraphEvent::Recycle(lVar2);
      }
    }
  }
  plVar8 = (longlong *)FTickFunction::GetCompletionHandle(param_2,&local_a0);
  *(undefined4 *)(*plVar8 + 0x4c) = 2;
  if (local_a0 != 0) {
    LOCK();
    piVar1 = (int *)(local_a0 + 0x48);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      FGraphEvent::Recycle();
    }
  }
  lVar2 = *plVar7;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0x48) = *(int *)(lVar2 + 0x48) + 1;
    UNLOCK();
  }
  plVar7 = (longlong *)FTickFunction::GetCompletionHandle(param_2,&local_98);
  lVar3 = *plVar7;
  iVar6 = *(int *)(lVar3 + 0x40);
  *(int *)(lVar3 + 0x40) = iVar6 + 1;
  if (*(int *)(lVar3 + 0x44) < iVar6 + 1) {
    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
              (lVar3 + 0x18,iVar6);
  }
  lVar10 = *(longlong *)(lVar3 + 0x38);
  if (*(longlong *)(lVar3 + 0x38) == 0) {
    lVar10 = lVar3 + 0x18;
  }
  plVar7 = (longlong *)(lVar10 + (longlong)iVar6 * 8);
  if (plVar7 == (longlong *)0x0) {
LAB_1426b925b:
    if (lVar2 != 0) {
      LOCK();
      piVar1 = (int *)(lVar2 + 0x48);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        FGraphEvent::Recycle(lVar2);
      }
    }
  }
  else {
    *plVar7 = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 0x48) = *(int *)(lVar2 + 0x48) + 1;
      UNLOCK();
      goto LAB_1426b925b;
    }
  }
  if (local_98 != 0) {
    LOCK();
    piVar1 = (int *)(local_98 + 0x48);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      FGraphEvent::Recycle();
    }
  }
  plVar7 = local_60;
  iVar6 = (int)local_38;
  if (local_40 != (longlong *)0x0) {
    plVar7 = local_40;
  }
  for (; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      LOCK();
      piVar1 = (int *)(*plVar7 + 0x48);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        FGraphEvent::Recycle();
      }
    }
    plVar7 = plVar7 + 1;
  }
  if (local_40 != (longlong *)0x0) {
    FMemory::Free();
  }
LAB_1426b9315:
  cVar5 = (**(code **)(*param_1 + 0x828))(param_1);
  if (cVar5 == '\0') {
    FUN_1423b8450(param_1,0);
  }
  return;
}



// FUNCTION 1426b9350 FUN_1426b9350 body=167 status=ok
// SIG undefined FUN_1426b9350(void)

void FUN_1426b9350(longlong param_1,int param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_3,0);
  }
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)param_2 * 8) + 0x90)
  ;
  uVar6 = uVar5;
  if (0 < *(int *)(param_1 + 0x58)) {
    do {
      lVar3 = *(longlong *)(uVar6 + *(longlong *)(param_1 + 0x50));
      if ((*(longlong *)(lVar3 + 0x48) == lVar2) || (*(longlong *)(lVar3 + 0x50) == lVar2)) {
        iVar1 = (int)param_3[1];
        *(int *)(param_3 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
        }
        *(int *)(*param_3 + (longlong)iVar1 * 4) = (int)uVar5;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      uVar6 = uVar6 + 8;
    } while ((int)uVar4 < *(int *)(param_1 + 0x58));
  }
  return;
}



// FUNCTION 1426b9400 FUN_1426b9400 body=2803 status=ok
// SIG undefined FUN_1426b9400(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
FUN_1426b9400(longlong param_1,undefined1 (*param_2) [16],float *param_3,longlong *param_4,
             longlong param_5,undefined8 param_6,char param_7)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [12];
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  int *piVar12;
  float *pfVar13;
  ulonglong uVar14;
  int iVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar22 [16];
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
  undefined1 auStack_208 [32];
  int local_1e8;
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  undefined4 local_1c8;
  int **local_1c0;
  undefined4 local_1b0;
  undefined8 local_1a8;
  int *local_198;
  ulonglong local_190;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
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
  undefined8 local_148;
  longlong *local_140;
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
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  *(undefined8 *)(*param_2 + 0xc) = _DAT_1468b5d90;
  uVar7 = DAT_1468b5d98;
  local_1a8 = param_6;
  *(undefined4 *)(param_2[1] + 4) = DAT_1468b5d98;
  *(undefined8 *)*param_2 = *(undefined8 *)(*param_2 + 0xc);
  *(undefined4 *)(*param_2 + 8) = uVar7;
  param_2[1][8] = 0;
  local_138 = param_3[8];
  fStack_134 = param_3[9];
  fStack_130 = param_3[10];
  local_140 = param_4;
  fStack_12c = param_3[0xb];
  if (((ABS(local_138 - fStack_134) <= 0.0001) && (ABS(local_138 - fStack_130) <= 0.0001)) &&
     (ABS(fStack_134 - fStack_130) <= 0.0001)) {
    uVar14 = 0;
    local_190 = 0;
    local_198 = (int *)0x0;
    if (param_7 == '\0') {
      local_1c0 = (int **)(param_1 + 0x30);
    }
    else {
      uVar8 = *(uint *)(param_1 + 0x48);
      local_190 = (ulonglong)uVar8;
      if (0 < (int)uVar8) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_198);
        uVar8 = *(uint *)(param_1 + 0x48);
      }
      uVar10 = uVar14;
      piVar12 = local_198;
      if (0 < (int)uVar8) {
        do {
          *piVar12 = (int)uVar10;
          uVar8 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar8;
          piVar12 = piVar12 + 1;
        } while ((int)uVar8 < *(int *)(param_1 + 0x48));
      }
      local_1c0 = &local_198;
    }
    local_1e8 = *(int *)(local_1c0 + 1);
    iVar9 = local_1e8;
    if (0 < local_1e8) {
      do {
        fVar36 = fRam0000000146b07ab8;
        fVar35 = fRam0000000146b07ab4;
        fVar31 = _DAT_146b07ab0;
        fVar57 = fRam0000000146b07a18;
        fVar56 = fRam0000000146b07a14;
        fVar55 = _DAT_146b07a10;
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)(*local_1c0)[uVar14] * 8);
        if (((*(byte *)(lVar1 + 0x99) & 2) != 0) || (param_7 != '\0')) {
          lVar2 = *(longlong *)(lVar1 + 0x90);
          local_148 = 0;
          iVar15 = -1;
          if (lVar2 != 0) {
            if (*(int *)(param_5 + 0x98) != *(int *)(param_5 + 0xc4)) {
              lVar11 = *(longlong *)(param_5 + 0xd0);
              if (*(longlong *)(param_5 + 0xd0) == 0) {
                lVar11 = param_5 + 200;
              }
              iVar9 = *(int *)(lVar11 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                                        (longlong)*(int *)(param_5 + 0xd8) - 1U) * 4);
              if (iVar9 != -1) {
                do {
                  lVar11 = *(longlong *)(param_5 + 0x90) + (longlong)iVar9 * 0x18;
                  if (*(longlong *)(*(longlong *)(param_5 + 0x90) + (longlong)iVar9 * 0x18) == lVar2
                     ) {
                    if (iVar9 != -1) goto LAB_1426b9694;
                    break;
                  }
                  iVar9 = *(int *)(lVar11 + 0x10);
                } while (iVar9 != -1);
              }
            }
            lVar11 = 0;
LAB_1426b9694:
            piVar12 = (int *)(lVar11 + 8);
            if (lVar11 == 0) {
              piVar12 = (int *)0x0;
            }
            iVar9 = local_1e8;
            if (piVar12 != (int *)0x0) {
              iVar15 = *piVar12;
            }
          }
          if (iVar15 != -1) {
            fVar38 = _DAT_1468b5b70;
            fVar39 = fRam00000001468b5b74;
            fVar37 = fRam00000001468b5b78;
            fVar25 = fRam00000001468b5b7c;
            fVar28 = _DAT_1468b5b80;
            fVar30 = fRam00000001468b5b84;
            fVar21 = fRam00000001468b5b88;
            fVar29 = fRam00000001468b5b8c;
            fVar51 = _DAT_1468b5b90;
            fVar52 = fRam00000001468b5b94;
            fVar53 = fRam00000001468b5b98;
            fVar54 = fRam00000001468b5b9c;
            if ((-1 < iVar15) && (iVar15 < (int)local_140[1])) {
              auVar16 = *(undefined1 (*) [16])(param_3 + 8);
              fVar38 = auVar16._0_4_;
              fVar37 = auVar16._4_4_;
              fVar21 = auVar16._8_4_;
              fVar29 = auVar16._12_4_;
              pfVar13 = (float *)((longlong)iVar15 * 0x30 + *local_140);
              auVar22 = *(undefined1 (*) [16])(pfVar13 + 8);
              fVar39 = auVar22._0_4_;
              fVar25 = auVar22._4_4_;
              fVar28 = auVar22._8_4_;
              auVar16 = minps(auVar22,auVar16);
              fVar51 = fVar39 * fVar38;
              fVar52 = fVar25 * fVar37;
              fVar53 = fVar28 * fVar21;
              fVar54 = auVar22._12_4_ * fVar29;
              auVar17._4_4_ = -(uint)(auVar16._4_4_ < fRam0000000146b07ab4);
              auVar17._0_4_ = -(uint)(auVar16._0_4_ < _DAT_146b07ab0);
              auVar17._8_4_ = -(uint)(auVar16._8_4_ < fRam0000000146b07ab8);
              auVar17._12_4_ = -(uint)(auVar16._12_4_ < fRam0000000146b07abc);
              iVar9 = movmskps(iVar15,auVar17);
              if (iVar9 == 0) {
                fVar55 = *param_3;
                fVar56 = param_3[1];
                fVar57 = param_3[2];
                fVar31 = param_3[3];
                fVar35 = *pfVar13;
                fVar36 = pfVar13[1];
                fVar25 = pfVar13[2];
                fVar27 = pfVar13[3];
                fVar38 = pfVar13[4] * fVar38;
                fVar37 = pfVar13[5] * fVar37;
                fVar21 = pfVar13[6] * fVar21;
                fVar29 = pfVar13[7] * fVar29;
                fVar39 = fVar21 * fVar56 - fVar37 * fVar57;
                fVar24 = fVar38 * fVar57 - fVar21 * fVar55;
                fVar20 = fVar37 * fVar55 - fVar38 * fVar56;
                fVar33 = fVar29 * fVar31 - fVar29 * fVar31;
                fVar39 = fVar39 + fVar39;
                fVar24 = fVar24 + fVar24;
                fVar20 = fVar20 + fVar20;
                fVar33 = fVar33 + fVar33;
                fVar28 = (fVar20 * fVar56 - fVar24 * fVar57) + fVar39 * fVar31 + fVar38 + param_3[4]
                ;
                fVar30 = (fVar39 * fVar57 - fVar20 * fVar55) + fVar24 * fVar31 + fVar37 + param_3[5]
                ;
                fVar21 = (fVar24 * fVar55 - fVar39 * fVar56) + fVar20 * fVar31 + fVar21 + param_3[6]
                ;
                fVar38 = fVar27 * fVar55 * _DAT_146b07a70 + fVar31 * fVar35 +
                         fVar56 * fVar25 * _DAT_146b07a60 + fVar57 * fVar36 * _DAT_146b07a50;
                fVar39 = fVar25 * fVar55 * fRam0000000146b07a74 + fVar31 * fVar36 +
                         fVar56 * fVar27 * fRam0000000146b07a64 +
                         fVar57 * fVar35 * fRam0000000146b07a54;
                fVar37 = fVar36 * fVar55 * fRam0000000146b07a78 + fVar31 * fVar25 +
                         fVar56 * fVar35 * fRam0000000146b07a68 +
                         fVar57 * fVar27 * fRam0000000146b07a58;
                fVar25 = fVar35 * fVar55 * fRam0000000146b07a7c + fVar31 * fVar27 +
                         fVar56 * fVar36 * fRam0000000146b07a6c +
                         fVar57 * fVar25 * fRam0000000146b07a5c;
                fVar29 = (fVar33 * fVar31 - fVar33 * fVar31) + fVar33 * fVar31 + fVar29 + param_3[7]
                ;
              }
              else {
                fVar30 = *param_3;
                fVar27 = param_3[1];
                fVar24 = param_3[2];
                fVar20 = param_3[3];
                fVar33 = param_3[4];
                fVar4 = param_3[5];
                fVar5 = param_3[6];
                fVar23 = fVar27 + fVar27;
                fVar26 = fVar24 + fVar24;
                fVar34 = fVar30 * (fVar30 + fVar30);
                fVar32 = fVar20 * (fVar30 + fVar30);
                fVar48 = (fVar20 * fVar26 + fVar30 * fVar23) * fVar38;
                fVar49 = (fVar32 + fVar27 * fVar26) * fVar37;
                fVar50 = (fVar20 * fVar23 + fVar30 * fVar26) * fVar21;
                fVar40 = fVar37 * (fVar30 * fVar23 - fVar20 * fVar26);
                fVar42 = fVar21 * (fVar27 * fVar26 - fVar32);
                fVar43 = fVar38 * (fVar30 * fVar26 - fVar20 * fVar23);
                fVar20 = (float)((uint)((_DAT_146b07a10 - (fVar24 * fVar26 + fVar27 * fVar23)) *
                                       fVar38) & _DAT_146b07a20);
                fVar24 = (float)((uint)((fRam0000000146b07a14 - (fVar24 * fVar26 + fVar34)) * fVar37
                                       ) & uRam0000000146b07a24);
                fVar27 = (float)((uint)((fRam0000000146b07a18 - (fVar27 * fVar23 + fVar34)) * fVar21
                                       ) & uRam0000000146b07a28);
                fVar29 = (float)((uint)((fRam0000000146b07a1c - (fVar34 + fVar34)) * fVar29) &
                                uRam0000000146b07a2c);
                fVar38 = *pfVar13;
                fVar37 = pfVar13[1];
                fVar30 = pfVar13[2];
                fVar21 = pfVar13[3];
                fVar23 = fVar37 + fVar37;
                fVar32 = fVar30 + fVar30;
                fVar34 = fVar38 * (fVar38 + fVar38);
                fVar26 = (fVar38 + fVar38) * fVar21;
                fVar45 = (fVar32 * fVar21 + fVar38 * fVar23) * fVar39;
                fVar46 = (fVar26 + fVar37 * fVar32) * fVar25;
                fVar47 = (fVar23 * fVar21 + fVar38 * fVar32) * fVar28;
                fVar41 = fVar25 * (fVar38 * fVar23 - fVar32 * fVar21);
                fVar26 = fVar28 * (fVar37 * fVar32 - fVar26);
                fVar44 = fVar39 * (fVar38 * fVar32 - fVar23 * fVar21);
                fVar21 = (float)((uint)((_DAT_146b07a10 - (fVar30 * fVar32 + fVar37 * fVar23)) *
                                       fVar39) & _DAT_146b07a20);
                fVar25 = (float)((uint)((fRam0000000146b07a14 - (fVar30 * fVar32 + fVar34)) * fVar25
                                       ) & uRam0000000146b07a24);
                fVar28 = (float)((uint)((fRam0000000146b07a18 - (fVar37 * fVar23 + fVar34)) * fVar28
                                       ) & uRam0000000146b07a28);
                fVar30 = (float)((uint)((fRam0000000146b07a1c - (fVar34 + fVar34)) * auVar22._12_4_)
                                & uRam0000000146b07a2c);
                fVar38 = pfVar13[4];
                fVar39 = pfVar13[5];
                fVar37 = pfVar13[6];
                local_188 = fVar45 * fVar40 + fVar21 * fVar20 + fVar44 * fVar50 + fVar30 * fVar33;
                fStack_184 = fVar45 * fVar24 + fVar21 * fVar48 + fVar44 * fVar42 + fVar30 * fVar4;
                fStack_180 = fVar45 * fVar49 + fVar21 * fVar43 + fVar44 * fVar27 + fVar30 * fVar5;
                fStack_17c = fVar45 * fVar29 + fVar21 * fVar29 + fVar44 * fVar29 +
                             fVar30 * fRam0000000146b07a1c;
                local_178 = fVar25 * fVar40 + fVar41 * fVar20 + fVar46 * fVar50 + fVar30 * fVar33;
                fStack_174 = fVar25 * fVar24 + fVar41 * fVar48 + fVar46 * fVar42 + fVar30 * fVar4;
                fStack_170 = fVar25 * fVar49 + fVar41 * fVar43 + fVar46 * fVar27 + fVar30 * fVar5;
                fStack_16c = fVar25 * fVar29 + fVar41 * fVar29 + fVar46 * fVar29 +
                             fVar30 * fRam0000000146b07a1c;
                local_168 = fVar26 * fVar40 + fVar47 * fVar20 + fVar28 * fVar50 + fVar30 * fVar33;
                fStack_164 = fVar26 * fVar24 + fVar47 * fVar48 + fVar28 * fVar42 + fVar30 * fVar4;
                fStack_160 = fVar26 * fVar49 + fVar47 * fVar43 + fVar28 * fVar27 + fVar30 * fVar5;
                fStack_15c = fVar26 * fVar29 + fVar47 * fVar29 + fVar28 * fVar29 +
                             fVar30 * fRam0000000146b07a1c;
                local_158 = fVar39 * fVar40 + fVar38 * fVar20 + fVar37 * fVar50 +
                            fRam0000000146b07a1c * fVar33;
                fStack_154 = fVar39 * fVar24 + fVar38 * fVar48 + fVar37 * fVar42 +
                             fRam0000000146b07a1c * fVar4;
                fStack_150 = fVar39 * fVar49 + fVar38 * fVar43 + fVar37 * fVar27 +
                             fRam0000000146b07a1c * fVar5;
                fStack_14c = fVar39 * fVar29 + fVar38 * fVar29 + fVar37 * fVar29 +
                             fRam0000000146b07a1c * fRam0000000146b07a1c;
                FMatrix::RemoveScaling(&local_188);
                fVar55 = (float)(-(uint)(fVar31 <= fVar51) & (_DAT_146b07aa0 ^ (uint)fVar55) ^
                                _DAT_146b07aa0);
                fVar56 = (float)(-(uint)(fVar35 <= fVar52) & (uRam0000000146b07aa4 ^ (uint)fVar56) ^
                                uRam0000000146b07aa4);
                fVar57 = (float)(-(uint)(fVar36 <= fVar53) & (uRam0000000146b07aa8 ^ (uint)fVar57) ^
                                uRam0000000146b07aa8);
                local_188 = local_188 * fVar55;
                fStack_184 = fStack_184 * fVar55;
                fStack_180 = fStack_180 * fVar55;
                fStack_170 = fStack_170 * fVar56;
                fStack_174 = fStack_174 * fVar56;
                local_178 = local_178 * fVar56;
                fStack_160 = fStack_160 * fVar57;
                local_168 = local_168 * fVar57;
                fStack_164 = fStack_164 * fVar57;
                FQuat::FQuat(&local_138,&local_188);
                local_1b0 = 0x322bcc77;
                auVar22._0_4_ = local_138 * local_138 + fStack_130 * fStack_130;
                auVar22._4_4_ = fStack_134 * fStack_134 + fStack_12c * fStack_12c;
                auVar22._8_4_ = fStack_130 * fStack_130 + local_138 * local_138;
                auVar22._12_4_ = fStack_12c * fStack_12c + fStack_134 * fStack_134;
                fVar35 = auVar22._4_4_ + auVar22._0_4_;
                fVar36 = auVar22._8_4_ + auVar22._4_4_;
                fVar38 = auVar22._12_4_ + auVar22._8_4_;
                fVar39 = auVar22._0_4_ + auVar22._12_4_;
                auVar16._4_4_ = fVar36;
                auVar16._0_4_ = fVar35;
                auVar16._8_4_ = fVar38;
                auVar16._12_4_ = fVar39;
                auVar16 = rsqrtps(auVar22,auVar16);
                fVar55 = auVar16._0_4_;
                fVar56 = auVar16._4_4_;
                fVar57 = auVar16._8_4_;
                fVar31 = auVar16._12_4_;
                fVar55 = (_DAT_146b07a90 - fVar55 * fVar55 * fVar35 * _DAT_146b07a90) * fVar55 +
                         fVar55;
                fVar56 = (fRam0000000146b07a94 - fVar56 * fVar56 * fVar36 * fRam0000000146b07a94) *
                         fVar56 + fVar56;
                fVar57 = (fRam0000000146b07a98 - fVar57 * fVar57 * fVar38 * fRam0000000146b07a98) *
                         fVar57 + fVar57;
                fVar31 = (fRam0000000146b07a9c - fVar31 * fVar31 * fVar39 * fRam0000000146b07a9c) *
                         fVar31 + fVar31;
                local_138 = (float)(((uint)(((_DAT_146b07a90 -
                                             fVar55 * fVar55 * fVar35 * _DAT_146b07a90) * fVar55 +
                                            fVar55) * local_138) ^ _DAT_146b07a80) &
                                    -(uint)(1e-08 <= fVar35) ^ _DAT_146b07a80);
                fStack_134 = (float)(((uint)(((fRam0000000146b07a94 -
                                              fVar56 * fVar56 * fVar36 * fRam0000000146b07a94) *
                                              fVar56 + fVar56) * fStack_134) ^ uRam0000000146b07a84)
                                     & -(uint)(1e-08 <= fVar36) ^ uRam0000000146b07a84);
                fStack_130 = (float)(((uint)(((fRam0000000146b07a98 -
                                              fVar57 * fVar57 * fVar38 * fRam0000000146b07a98) *
                                              fVar57 + fVar57) * fStack_130) ^ uRam0000000146b07a88)
                                     & -(uint)(1e-08 <= fVar38) ^ uRam0000000146b07a88);
                fStack_12c = (float)(((uint)(((fRam0000000146b07a9c -
                                              fVar31 * fVar31 * fVar39 * fRam0000000146b07a9c) *
                                              fVar31 + fVar31) * fStack_12c) ^ uRam0000000146b07a8c)
                                     & -(uint)(1e-08 <= fVar39) ^ uRam0000000146b07a8c);
                fVar38 = local_138;
                fVar39 = fStack_134;
                fVar37 = fStack_130;
                fVar25 = fStack_12c;
                fVar28 = local_158;
                fVar30 = fStack_154;
                fVar21 = fStack_150;
                fVar29 = 0.0;
              }
            }
            local_128 = fVar38;
            fStack_124 = fVar39;
            fStack_120 = fVar37;
            fStack_11c = fVar25;
            local_118 = fVar28;
            fStack_114 = fVar30;
            fStack_110 = fVar21;
            fStack_10c = fVar29;
            local_108 = fVar51;
            fStack_104 = fVar52;
            fStack_100 = fVar53;
            fStack_fc = fVar54;
            FUN_142302f10(lVar1 + 0x28,&local_1e0,&local_128,local_1a8);
            fVar57 = fStack_1d8;
            fVar56 = fStack_1dc;
            fVar55 = local_1e0;
            if (fStack_1d4 < local_1e0) {
              local_1e0 = fStack_1d4;
              fStack_1d4 = fVar55;
            }
            if (fStack_1d0 < fStack_1dc) {
              fStack_1dc = fStack_1d0;
              fStack_1d0 = fVar56;
            }
            if (fStack_1cc < fStack_1d8) {
              fStack_1d8 = fStack_1cc;
              fStack_1cc = fVar57;
            }
            iVar9 = local_1e8;
            if (param_2[1][8] == '\0') {
              if ((char)local_1c8 != '\0') {
                auVar6._4_4_ = fStack_1dc;
                auVar6._0_4_ = local_1e0;
                auVar6._8_4_ = fStack_1d8;
                auVar6._12_4_ = fStack_1d4;
                *param_2 = auVar6;
                *(ulonglong *)param_2[1] = CONCAT44(fStack_1cc,fStack_1d0);
                *(undefined4 *)(param_2[1] + 8) = local_1c8;
              }
            }
            else if ((char)local_1c8 != '\0') {
              fVar55 = fStack_1dc;
              if (*(float *)(*param_2 + 4) <= fStack_1dc) {
                fVar55 = *(float *)(*param_2 + 4);
              }
              fVar56 = fStack_1d4;
              if (fStack_1d4 <= *(float *)(*param_2 + 0xc)) {
                fVar56 = *(float *)(*param_2 + 0xc);
              }
              fVar57 = *(float *)*param_2;
              if (local_1e0 <= *(float *)*param_2) {
                fVar57 = local_1e0;
              }
              *(float *)(*param_2 + 4) = fVar55;
              fVar55 = *(float *)(param_2[1] + 4);
              *(float *)*param_2 = fVar57;
              if (fVar55 <= fStack_1cc) {
                fVar55 = fStack_1cc;
              }
              fVar57 = *(float *)(*param_2 + 8);
              if (fStack_1d8 <= *(float *)(*param_2 + 8)) {
                fVar57 = fStack_1d8;
              }
              *(float *)(*param_2 + 0xc) = fVar56;
              *(float *)(param_2[1] + 4) = fVar55;
              *(float *)(*param_2 + 8) = fVar57;
              fVar55 = *(float *)param_2[1];
              if (*(float *)param_2[1] <= fStack_1d0) {
                fVar55 = fStack_1d0;
              }
              *(float *)param_2[1] = fVar55;
            }
          }
        }
        uVar14 = uVar14 + 1;
      } while ((longlong)uVar14 < (longlong)iVar9);
    }
    if (local_198 != (int *)0x0) {
      FMemory::Free();
    }
  }
  if (param_2[1][8] == '\0') {
    auVar16 = *(undefined1 (*) [16])(param_3 + 4);
    auVar18._0_8_ = auVar16._0_8_;
    local_1c8 = CONCAT31(local_1c8._1_3_,1);
    auVar18._8_4_ = auVar16._4_4_;
    auVar18._12_4_ = auVar16._4_4_;
    fStack_1d4 = auVar16._0_4_;
    auVar3._4_8_ = auVar18._8_8_;
    auVar3._0_4_ = fStack_1dc;
    auVar19._0_8_ = auVar3._0_8_ << 0x20;
    auVar19._8_4_ = auVar16._8_4_;
    auVar19._12_4_ = fStack_1d4;
    *(undefined8 *)*param_2 = auVar18._0_8_;
    *(longlong *)(*param_2 + 8) = auVar19._8_8_;
    *(longlong *)param_2[1] = auVar16._4_8_;
    *(undefined4 *)(param_2[1] + 8) = local_1c8;
  }
  fVar55 = *(float *)param_2[1];
  fVar56 = *(float *)(*param_2 + 0xc);
  fVar38 = fVar55 - *(float *)(*param_2 + 4);
  fVar57 = *(float *)(param_2[1] + 4);
  fVar36 = fVar56 - *(float *)*param_2;
  fVar31 = *(float *)(*param_2 + 8);
  fVar39 = fVar57 - fVar31;
  fVar35 = fVar38;
  if (fVar36 <= fVar38) {
    fVar35 = fVar36;
  }
  if (fVar39 <= fVar35) {
    fVar35 = fVar39;
  }
  if (fVar35 < 1.0) {
    fVar36 = 1.0 - fVar36;
    local_1c8 = CONCAT31(local_1c8._1_3_,1);
    fVar39 = 1.0 - fVar39;
    fVar38 = 1.0 - fVar38;
    if (fVar36 <= 0.0) {
      fVar36 = 0.0;
    }
    if (fVar39 <= 0.0) {
      fVar39 = 0.0;
    }
    if (fVar38 <= 0.0) {
      fVar38 = 0.0;
    }
    *(ulonglong *)*param_2 =
         CONCAT44(*(float *)(*param_2 + 4) - fVar38 * 0.5,*(float *)*param_2 - fVar36 * 0.5);
    *(ulonglong *)(*param_2 + 8) = CONCAT44(fVar56 + fVar36 * 0.5,fVar31 - fVar39 * 0.5);
    *(ulonglong *)param_2[1] = CONCAT44(fVar57 + fVar39 * 0.5,fVar55 + fVar38 * 0.5);
    *(undefined4 *)(param_2[1] + 8) = local_1c8;
  }
  return param_2;
}



// FUNCTION 1426b9f00 FUN_1426b9f00 body=1475 status=ok
// SIG undefined FUN_1426b9f00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1426b9f00(longlong param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  int *piVar5;
  ulonglong uVar6;
  int iVar7;
  char cVar8;
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
  undefined1 auStack_1a8 [32];
  int local_188;
  float local_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  undefined8 local_170;
  uint local_168;
  float local_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  uint local_148;
  int *local_138;
  ulonglong uStack_130;
  longlong local_128;
  undefined8 *local_118;
  int **local_108;
  undefined1 local_f8 [48];
  ulonglong local_c8;
  
  fVar13 = DAT_1468b5d98;
  fVar14 = DAT_1468b5d94;
  fVar15 = DAT_1468b5d90;
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  cVar8 = '\0';
  fStack_174 = DAT_1468b5d90;
  local_170 = CONCAT44(DAT_1468b5d98,DAT_1468b5d94);
  local_180 = DAT_1468b5d90;
  fStack_17c = DAT_1468b5d94;
  fStack_178 = DAT_1468b5d98;
  local_128 = param_4;
  local_118 = param_2;
  local_168 = local_168 & 0xffffff00;
  if (param_3 == 0) goto LAB_1426ba463;
  if (*(longlong *)(param_3 + 0xa08) == DAT_1468c21b0) {
    FBox::TransformBy(param_3 + 0xa10,param_2,param_4);
    return param_2;
  }
  if (((0.0001 < ABS(*(float *)(param_4 + 0x20) - *(float *)(param_4 + 0x24))) ||
      (0.0001 < ABS(*(float *)(param_4 + 0x20) - *(float *)(param_4 + 0x28)))) ||
     (0.0001 < ABS(*(float *)(param_4 + 0x24) - *(float *)(param_4 + 0x28)))) {
LAB_1426ba2dc:
    fVar15 = *(float *)(param_4 + 0x10);
    fVar14 = *(float *)(param_4 + 0x14);
    fVar13 = *(float *)(param_4 + 0x18);
    local_170 = *(undefined8 *)(param_4 + 0x14);
    local_148 = CONCAT31(local_148._1_3_,1);
    fVar16 = fVar13;
    fVar17 = fVar14;
    fVar18 = fVar15;
    uVar2 = local_148;
    local_180 = fVar15;
    fStack_17c = fVar14;
    fStack_178 = fVar13;
    fStack_174 = fVar15;
  }
  else {
    uVar6 = 0;
    local_138 = (int *)0x0;
    uStack_130 = 0;
    if (*(char *)(param_3 + 0x879) < '\0') {
      uVar2 = *(uint *)(param_1 + 0x48);
      uStack_130 = (ulonglong)uVar2;
      if (0 < (int)uVar2) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_138);
        uVar2 = *(uint *)(param_1 + 0x48);
      }
      uVar4 = uVar6;
      piVar5 = local_138;
      if (0 < (int)uVar2) {
        do {
          *piVar5 = (int)uVar4;
          uVar2 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar2;
          piVar5 = piVar5 + 1;
        } while ((int)uVar2 < *(int *)(param_1 + 0x48));
      }
      local_108 = &local_138;
    }
    else {
      local_108 = (int **)(param_1 + 0x30);
    }
    local_188 = *(int *)(local_108 + 1);
    fVar16 = fVar13;
    fVar17 = fVar14;
    fVar18 = fVar15;
    uVar2 = local_168;
    iVar7 = local_188;
    if (0 < local_188) {
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)(*local_108)[uVar6] * 8);
        if ((((*(byte *)(lVar1 + 0x99) & 2) != 0) || (*(char *)(param_3 + 0x879) < '\0')) &&
           (iVar3 = FUN_1423ac950(param_3,*(undefined8 *)(lVar1 + 0x90)), iVar7 = local_188,
           iVar3 != -1)) {
          FUN_1423ad020(param_3,local_f8,iVar3,local_128);
          FUN_1423036c0(lVar1 + 0x28,&local_160,local_f8,param_3);
          fVar11 = fStack_158;
          fVar10 = fStack_15c;
          fVar9 = local_160;
          if (fStack_154 < local_160) {
            local_160 = fStack_154;
            fStack_154 = fVar9;
          }
          if (fStack_150 < fStack_15c) {
            fStack_15c = fStack_150;
            fStack_150 = fVar10;
          }
          if (fStack_14c < fStack_158) {
            fStack_158 = fStack_14c;
            fStack_14c = fVar11;
          }
          iVar7 = local_188;
          if (cVar8 == '\0') {
            if ((char)local_148 != '\0') {
              local_170 = CONCAT44(fStack_14c,fStack_150);
              local_180 = local_160;
              fStack_17c = fStack_15c;
              fStack_178 = fStack_158;
              fStack_174 = fStack_154;
              local_168 = local_148;
              fVar13 = fStack_14c;
              fVar14 = fStack_150;
              fVar15 = fStack_154;
              fVar16 = fStack_158;
              fVar17 = fStack_15c;
              fVar18 = local_160;
              cVar8 = (char)local_148;
              uVar2 = local_148;
            }
          }
          else if ((char)local_148 != '\0') {
            if (local_160 < fVar18) {
              fVar18 = local_160;
              local_180 = local_160;
            }
            if (fStack_15c < fVar17) {
              fVar17 = fStack_15c;
              fStack_17c = fStack_15c;
            }
            if (fStack_158 < fVar16) {
              fVar16 = fStack_158;
              fStack_178 = fStack_158;
            }
            if (fVar15 < fStack_154) {
              fVar15 = fStack_154;
              fStack_174 = fStack_154;
            }
            if (fVar14 < fStack_150) {
              local_170 = CONCAT44(local_170._4_4_,fStack_150);
              fVar14 = fStack_150;
            }
            if (fVar13 < fStack_14c) {
              local_170 = CONCAT44(fStack_14c,(undefined4)local_170);
              fVar13 = fStack_14c;
            }
          }
        }
        uVar6 = uVar6 + 1;
        param_2 = local_118;
        param_4 = local_128;
      } while ((longlong)uVar6 < (longlong)iVar7);
    }
    if (local_138 != (int *)0x0) {
      FMemory::Free();
    }
    if (cVar8 == '\0') goto LAB_1426ba2dc;
  }
  fVar11 = fVar14 - fVar17;
  fVar10 = fVar15 - fVar18;
  fVar12 = fVar13 - fVar16;
  fVar9 = fVar11;
  if (fVar10 <= fVar11) {
    fVar9 = fVar10;
  }
  if (fVar12 <= fVar9) {
    fVar9 = fVar12;
  }
  local_168 = uVar2;
  if (fVar9 < 1.0) {
    fVar10 = 1.0 - fVar10;
    local_148 = CONCAT31(local_148._1_3_,1);
    fVar12 = 1.0 - fVar12;
    fVar11 = 1.0 - fVar11;
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    fStack_174 = fVar15 + fVar10 * 0.5;
    fStack_178 = fVar16 - fVar12 * 0.5;
    local_180 = fVar18 - fVar10 * 0.5;
    fStack_17c = fVar17 - fVar11 * 0.5;
    local_170 = CONCAT44(fVar13 + fVar12 * 0.5,fVar14 + fVar11 * 0.5);
    local_168 = local_148;
  }
LAB_1426ba463:
  *param_2 = CONCAT44(fStack_17c,local_180);
  param_2[1] = CONCAT44(fStack_174,fStack_178);
  param_2[2] = local_170;
  *(uint *)(param_2 + 3) = local_168;
  return param_2;
}



// FUNCTION 1426ba4d0 FUN_1426ba4d0 body=114 status=ok
// SIG undefined FUN_1426ba4d0(void)

bool FUN_1426ba4d0(float *param_1,undefined8 *param_2)

{
  float fVar1;
  
  *(undefined8 *)((longlong)param_2 + 0xc) = 0x3f800000;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  fVar1 = param_1[2];
  if (param_1[1] <= 0.0) {
    *(undefined4 *)((longlong)param_2 + 4) = 0;
    *(undefined4 *)((longlong)param_2 + 0xc) = 0xb33bbd2e;
    if (fVar1 <= 0.0) {
      *(undefined4 *)param_2 = 0x3f800000;
      *(undefined4 *)(param_2 + 1) = 0;
    }
    else {
      *(undefined4 *)param_2 = 0;
      *(undefined4 *)(param_2 + 1) = 0x3f800000;
    }
  }
  else if (fVar1 <= 0.0) {
    *(undefined4 *)param_2 = 0;
    *(undefined8 *)((longlong)param_2 + 4) = 0x3f800000;
    *(undefined4 *)((longlong)param_2 + 0xc) = 0xb33bbd2e;
  }
  return *param_1 * param_1[1] * param_1[2] < 0.0;
}



// FUNCTION 1426ba550 FUN_1426ba550 body=455 status=ok
// SIG undefined FUN_1426ba550(void)

undefined8
FUN_1426ba550(longlong param_1,undefined8 param_2,int param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  
  if ((-1 < param_4) && (param_4 < *(int *)(param_1 + 0x138))) {
    iVar1 = param_3 * 3 + 2;
    if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x118))) {
      lVar8 = *(longlong *)(param_1 + 0x110);
      lVar9 = (longlong)(param_3 * 3);
      lVar11 = (longlong)*(int *)(lVar8 + 8 + lVar9 * 4);
      lVar10 = (longlong)*(int *)(lVar8 + 4 + lVar9 * 4);
      lVar9 = (longlong)*(int *)(lVar8 + lVar9 * 4);
      lVar8 = *(longlong *)(param_1 + 0x120);
      local_78 = *(undefined8 *)(lVar8 + lVar9 * 0xc);
      local_70 = *(undefined4 *)(lVar8 + 8 + lVar9 * 0xc);
      local_88 = *(undefined8 *)(lVar8 + lVar10 * 0xc);
      local_80 = *(undefined4 *)(lVar8 + 8 + lVar10 * 0xc);
      local_98 = *(undefined8 *)(lVar8 + lVar11 * 0xc);
      local_90 = *(undefined4 *)(lVar8 + 8 + lVar11 * 0xc);
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (longlong)param_4 * 0x10);
      fVar2 = *(float *)(lVar8 + lVar11 * 8);
      fVar3 = *(float *)(lVar8 + 4 + lVar11 * 8);
      fVar4 = *(float *)(lVar8 + lVar9 * 8);
      fVar5 = *(float *)(lVar8 + 4 + lVar9 * 8);
      fVar6 = *(float *)(lVar8 + lVar10 * 8);
      fVar7 = *(float *)(lVar8 + 4 + lVar10 * 8);
      FMath::ComputeBaryCentric2D(&local_a8,param_2,&local_78,&local_88,&local_98);
      *param_5 = CONCAT44(fVar7 * local_a4 + fVar5 * local_a8 + fVar3 * local_a0,
                          fVar6 * local_a4 + fVar4 * local_a8 + fVar2 * local_a0);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1426ba720 FUN_1426ba720 body=490 status=ok
// SIG undefined FUN_1426ba720(void)

float FUN_1426ba720(longlong *param_1,longlong *param_2)

{
  float fVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  float fVar7;
  float _Y;
  float fVar8;
  float fVar9;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  
  local_48 = 0x3f800000;
  local_44 = 0x3f800000;
  plVar5 = param_1 + 0x28;
  local_40 = 0x3f800000;
  plVar6 = param_2;
  if (param_2 == (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
    if (plVar6 == (longlong *)0x0) goto LAB_1426ba82d;
    lVar3 = FUN_1429f11d0();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1426ba82d;
  }
  if (plVar6 != (longlong *)0x0) {
    local_48 = (undefined4)plVar6[0x46];
    local_44 = *(undefined4 *)((longlong)plVar6 + 0x234);
    local_40 = (undefined4)plVar6[0x47];
    lVar3 = FUN_142a0cc80();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    plVar5 = plVar6 + 0x76;
    if ((bVar2) &&
       (plVar4 = (longlong *)
                 (**(code **)(*plVar6 + 0x6d0))
                           (plVar6,param_1[0x12],CONCAT71((int7)((ulonglong)(lVar3 + 0x88) >> 8),1))
       , plVar4 != (longlong *)0x0)) {
      plVar5 = plVar4;
    }
  }
LAB_1426ba82d:
  if ((*(byte *)(plVar5 + 2) & 0x10) == 0) {
    lVar3 = FUN_142698570(plVar5);
    fVar1 = *(float *)(plVar5 + 0x11);
    fVar8 = 1.0;
    fVar9 = 0.75;
    if (lVar3 != 0) {
      fVar8 = *(float *)(lVar3 + 0x38) * 0.001;
      fVar9 = *(float *)(lVar3 + 0x3c);
      if (fVar8 <= 9e-05) {
        fVar8 = 9e-05;
      }
    }
    fVar7 = (float)(**(code **)(*param_1 + 0x280))(param_1,&local_48,param_2);
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    _Y = 0.0001;
    if ((0.0001 <= fVar9) && (_Y = fVar9, 1.0 <= fVar9)) {
      _Y = 1.0;
    }
    fVar9 = _guard_xfg_dispatch_icall_nop(fVar7 * fVar8,_Y);
    return fVar9 * fVar1;
  }
  return *(float *)((longlong)plVar5 + 0x5c);
}



// FUNCTION 1426ba930 FUN_1426ba930 body=34 status=ok
// SIG undefined FUN_1426ba930(void)

void FUN_1426ba930(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(longlong *)*param_2 + 0x108))();
  *(undefined4 *)*param_1 = uVar1;
  return;
}



// FUNCTION 1426ba9a0 FUN_1426ba9a0 body=34 status=ok
// SIG undefined FUN_1426ba9a0(void)

void FUN_1426ba9a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(longlong *)*param_2 + 0x100))();
  *(undefined4 *)*param_1 = uVar1;
  return;
}



// FUNCTION 1426ba9f0 FUN_1426ba9f0 body=78 status=ok
// SIG undefined FUN_1426ba9f0(void)

void FUN_1426ba9f0(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1426cef30(*param_1 + 0xb8,uVar1,*(undefined4 *)(*param_1 + 0x88));
  FUN_1426cf980(*param_1 + 0xd8,uVar1,*(undefined4 *)(*param_1 + 0x88));
  return;
}



// FUNCTION 1426baa50 FUN_1426baa50 body=103 status=ok
// SIG undefined FUN_1426baa50(void)

void FUN_1426baa50(undefined4 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  plVar1 = (longlong *)*param_2;
  (**(code **)(*plVar1 + 0x168))(plVar1,local_18,local_28);
  local_38 = *param_1;
  local_34 = param_1[1];
  local_30 = param_1[2];
  (**(code **)(*plVar1 + 0x160))(plVar1,&local_38,local_28);
  return;
}



// FUNCTION 1426baac0 FUN_1426baac0 body=61 status=ok
// SIG undefined FUN_1426baac0(void)

void FUN_1426baac0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined1 local_28 [32];
  
  plVar1 = (longlong *)*param_2;
  U2PTransform(local_28,*param_1);
  (**(code **)(*plVar1 + 0x38))(plVar1,*(undefined4 *)param_1[1],local_28);
  return;
}



// FUNCTION 1426bab00 FUN_1426bab00 body=58 status=ok
// SIG undefined FUN_1426bab00(void)

void FUN_1426bab00(longlong *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  byte bVar2;
  
  pbVar1 = (byte *)param_1[7];
  bVar2 = UpdatePhysicalAnimationSettings
                    (*(undefined8 *)
                      (*(longlong *)
                        (*(longlong *)(*param_1 + 0x40) + (longlong)*(int *)*param_2 * 8) + 0x90),
                     param_1 + 2,param_1[1]);
  *pbVar1 = *pbVar1 | bVar2;
  return;
}



// FUNCTION 1426bab50 Call body=104 status=ok
// SIG undefined Call(void)

void UE4Function_Private::
     TFunctionRefCaller<<lambda_cf99150ca8050fb082d6d12cd03deb8f>_const_,void___cdecl(physx::PxD6Joint_*)>
     ::Call(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  ushort uVar2;
  ushort local_res8 [4];
  ushort local_res10 [4];
  
  plVar1 = (longlong *)*param_2;
  (**(code **)(*plVar1 + 0x80))(plVar1,local_res8);
  uVar2 = local_res8[0] & 0xfff7;
  local_res8[0] = local_res8[0] | 8;
  if (*(char *)*param_1 != '\0') {
    local_res8[0] = uVar2;
  }
  local_res10[0] = local_res8[0];
  (**(code **)(*plVar1 + 0x70))(plVar1,local_res10);
  return;
}



// FUNCTION 1426bac10 FUN_1426bac10 body=110 status=ok
// SIG undefined FUN_1426bac10(void)

void FUN_1426bac10(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  plVar1 = (longlong *)*param_2;
  (**(code **)(**(longlong **)(*param_1 + 8) + 0x40))
            (*(longlong **)(*param_1 + 8),local_28,*(undefined4 *)param_1[1]);
  puVar2 = (undefined4 *)param_1[2];
  local_18 = *puVar2;
  local_14 = puVar2[1];
  local_10 = puVar2[2];
  (**(code **)(*plVar1 + 0x38))(plVar1,*(undefined4 *)param_1[1],local_28);
  return;
}



// FUNCTION 1426bacf0 FUN_1426bacf0 body=34 status=ok
// SIG undefined FUN_1426bacf0(void)

void FUN_1426bacf0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(longlong *)*param_2 + 0xf8))();
  *(undefined4 *)*param_1 = uVar1;
  return;
}



// FUNCTION 1426bad20 FUN_1426bad20 body=79 status=ok
// SIG undefined FUN_1426bad20(void)

void FUN_1426bad20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined4 *param_6)

{
  undefined1 local_res10;
  undefined7 uStackX_11;
  
  _local_res10 = CONCAT71((int7)((ulonglong)param_2 >> 8),10);
  FUN_1426b7480(*param_6,param_3,param_4,*param_5,*param_6,0,&local_res10,0);
  return;
}



// FUNCTION 1426bada0 FUN_1426bada0 body=466 status=ok
// SIG undefined FUN_1426bada0(void)

void FUN_1426bada0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar5 = 0;
  uVar4 = uVar5;
  uVar8 = uVar5;
  if (0 < *(int *)(param_1 + 0x60)) {
    do {
      iVar2 = DAT_146b08998;
      lVar7 = *(longlong *)(param_1 + 0x58) + uVar8;
      lVar1 = *(longlong *)(lVar7 + 0xc0);
      if (lVar1 != 0) {
        lVar6 = (longlong)DAT_146b08998;
        DAT_146b08998 = DAT_146b08998 + 1;
        if (DAT_146b0899c < DAT_146b08998) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146b08990,iVar2);
        }
        *(longlong *)(DAT_146b08990 + lVar6 * 8) = lVar1;
        FPhysxSharedData::Remove(DAT_146b08468,*(undefined8 *)(lVar7 + 0xc0));
        *(undefined8 *)(lVar7 + 0xc0) = 0;
      }
      iVar2 = DAT_146b08998;
      lVar1 = *(longlong *)(lVar7 + 200);
      if (lVar1 != 0) {
        lVar6 = (longlong)DAT_146b08998;
        DAT_146b08998 = DAT_146b08998 + 1;
        if (DAT_146b0899c < DAT_146b08998) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146b08990,iVar2);
        }
        *(longlong *)(DAT_146b08990 + lVar6 * 8) = lVar1;
        FPhysxSharedData::Remove(DAT_146b08468,*(undefined8 *)(lVar7 + 200));
        *(undefined8 *)(lVar7 + 200) = 0;
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar8 = uVar8 + 0xd0;
    } while ((int)uVar3 < *(int *)(param_1 + 0x60));
  }
  uVar4 = uVar5;
  if (0 < *(int *)(param_1 + 0x108)) {
    do {
      iVar2 = DAT_146b089a8;
      lVar7 = (longlong)DAT_146b089a8;
      lVar1 = *(longlong *)(param_1 + 0x100);
      DAT_146b089a8 = DAT_146b089a8 + 1;
      if (DAT_146b089ac < DAT_146b089a8) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146b089a0,iVar2);
      }
      *(undefined8 *)(DAT_146b089a0 + lVar7 * 8) = *(undefined8 *)(uVar4 + lVar1);
      FPhysxSharedData::Remove
                (DAT_146b08468,*(undefined8 *)(uVar4 + *(longlong *)(param_1 + 0x100)));
      uVar3 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar3;
      *(undefined8 *)(uVar4 + *(longlong *)(param_1 + 0x100)) = 0;
      uVar4 = uVar4 + 8;
    } while ((int)uVar3 < *(int *)(param_1 + 0x108));
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(int *)(param_1 + 0x10c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x100,0);
  }
  *(byte *)(param_1 + 0x99) = *(byte *)(param_1 + 0x99) & 0x7f;
  FUN_1426c0c50(param_1 + 0x28);
  return;
}



// FUNCTION 1426baf80 FUN_1426baf80 body=316 status=ok
// SIG undefined FUN_1426baf80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1426baf80(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  lVar12 = 0xad0;
  if (*(char *)(param_1 + 0xe54) == '\0') {
    lVar12 = 0xa88;
  }
  puVar3 = (undefined8 *)(lVar12 + param_1);
  puVar2 = (undefined8 *)(param_1 + 0xe38);
  if (puVar2 != puVar3) {
    local_30 = *puVar2;
    uStack_28 = *(undefined8 *)(param_1 + 0xe40);
    uVar6 = *(undefined4 *)((longlong)puVar3 + 4);
    uVar7 = *(undefined4 *)(puVar3 + 1);
    uVar8 = *(undefined4 *)((longlong)puVar3 + 0xc);
    *(undefined4 *)puVar2 = *(undefined4 *)puVar3;
    *(undefined4 *)(param_1 + 0xe3c) = uVar6;
    *(undefined4 *)(param_1 + 0xe40) = uVar7;
    *(undefined4 *)(param_1 + 0xe44) = uVar8;
    *puVar3 = local_30;
    puVar3[1] = uStack_28;
  }
  bVar9 = false;
  *(int *)(param_1 + 0xf14) = *(int *)(param_1 + 0xf14) + 1;
  iVar13 = *(int *)(param_1 + 0xf14);
  iVar11 = *(int *)(param_1 + 0xf08) + -1;
  lVar12 = (longlong)iVar11;
  if (-1 < iVar11) {
    lVar14 = lVar12 << 4;
    bVar9 = false;
    do {
      lVar4 = *(longlong *)(param_1 + 0xf00);
      if ((*(int *)(lVar14 + 8 + lVar4) == 0) ||
         (plVar5 = *(longlong **)(lVar14 + lVar4), plVar5 == (longlong *)0x0)) {
LAB_1426bb01d:
        bVar9 = true;
      }
      else {
        cVar10 = (**(code **)(*plVar5 + 0x40))();
        if (cVar10 == '\0') goto LAB_1426bb01d;
      }
      lVar14 = lVar14 + -0x10;
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
    iVar13 = *(int *)(param_1 + 0xf14);
  }
  *(int *)(param_1 + 0xf14) = iVar13 + -1;
  if (bVar9) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0xf00),0);
  }
  FUN_1426c0650(param_1,*(undefined1 *)(param_1 + 0x2ec));
  lVar12 = *(longlong *)(param_1 + 0xe08);
  *(undefined8 *)(param_1 + 0xe08) = 0;
  if (lVar12 != 0) {
    LOCK();
    piVar1 = (int *)(lVar12 + 0x48);
    iVar13 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar13 == 1) {
      FGraphEvent::Recycle();
    }
  }
  lVar12 = *(longlong *)(param_1 + 0xe10);
  *(undefined8 *)(param_1 + 0xe10) = 0;
  if (lVar12 != 0) {
    LOCK();
    piVar1 = (int *)(lVar12 + 0x48);
    iVar13 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar13 == 1) {
      FGraphEvent::Recycle();
    }
  }
  return;
}



// FUNCTION 1426bb0c0 FUN_1426bb0c0 body=2964 status=ok
// SIG undefined FUN_1426bb0c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1426bb0c0(float *param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  int *piVar14;
  longlong lVar15;
  float fVar21;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar22;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar23;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar33;
  float fVar34;
  undefined1 auVar24 [16];
  float fVar31;
  float fVar32;
  undefined1 auVar25 [16];
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
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
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
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  lVar1 = *(longlong *)(param_2 + 0x718);
  pfVar10 = (float *)((longlong)param_4 * 0x30 + *(longlong *)(param_2 + 0xa88));
  fVar23 = *pfVar10;
  fVar30 = pfVar10[1];
  fVar27 = pfVar10[2];
  fVar34 = pfVar10[3];
  fVar40 = pfVar10[4];
  fVar42 = pfVar10[5];
  fVar45 = pfVar10[6];
  fVar54 = pfVar10[7];
  fVar56 = pfVar10[8];
  fVar57 = pfVar10[9];
  fVar58 = pfVar10[10];
  fVar59 = pfVar10[0xb];
  lVar11 = *(longlong *)(lVar1 + 0x158);
  iVar9 = *(int *)(lVar11 + 8 + (longlong)param_4 * 0x10);
  if (iVar9 != -1) {
    fVar46 = _DAT_146b07ab0;
    fVar50 = fRam0000000146b07ab4;
    fVar36 = fRam0000000146b07ab8;
    fVar37 = fRam0000000146b07abc;
    do {
      fVar31 = fRam0000000146b07a18;
      fVar22 = fRam0000000146b07a14;
      fVar21 = _DAT_146b07a10;
      lVar15 = (longlong)iVar9;
      lVar11 = *(longlong *)(lVar11 + lVar15 * 0x10);
      if (*(int *)(param_3 + 0x70) != *(int *)(param_3 + 0x9c)) {
        lVar12 = *(longlong *)(param_3 + 0xa8);
        if (*(longlong *)(param_3 + 0xa8) == 0) {
          lVar12 = param_3 + 0xa0;
        }
        iVar8 = *(int *)(lVar12 + ((longlong)((int)((ulonglong)lVar11 >> 0x20) + (int)lVar11) &
                                  (longlong)*(int *)(param_3 + 0xb0) - 1U) * 4);
        if (iVar8 != -1) {
          do {
            piVar14 = (int *)(*(longlong *)(param_3 + 0x68) + (longlong)iVar8 * 0x18);
            if (*(longlong *)(*(longlong *)(param_3 + 0x68) + (longlong)iVar8 * 0x18) == lVar11) {
              if (iVar8 != -1) goto LAB_1426bb213;
              break;
            }
            iVar8 = piVar14[4];
          } while (iVar8 != -1);
        }
      }
      piVar14 = (int *)0x0;
LAB_1426bb213:
      piVar13 = piVar14 + 2;
      if (piVar14 == (int *)0x0) {
        piVar13 = (int *)0x0;
      }
      if (piVar13 == (int *)0x0) {
        iVar8 = -1;
      }
      else {
        iVar8 = *piVar13;
      }
      if (iVar9 == param_4) break;
      if ((-1 < iVar8) && (iVar8 < *(int *)(param_2 + 0xbf8))) {
        pfVar10 = (float *)FUN_1426992a0(*(undefined8 *)
                                          (*(longlong *)(param_2 + 0xbf0) + (longlong)iVar8 * 8),
                                         &local_138,1,0);
        fVar4 = fRam0000000146b07a18;
        fVar3 = fRam0000000146b07a14;
        fVar2 = _DAT_146b07a10;
        auVar19._4_4_ = fVar57;
        auVar19._0_4_ = fVar56;
        auVar19._8_4_ = fVar58;
        auVar19._12_4_ = fVar59;
        fVar21 = *pfVar10;
        fVar22 = pfVar10[1];
        fVar31 = pfVar10[2];
        fVar32 = pfVar10[3];
        auVar17 = *(undefined1 (*) [16])(pfVar10 + 8);
        fVar46 = auVar17._0_4_;
        fVar50 = auVar17._4_4_;
        fVar36 = auVar17._8_4_;
        fVar37 = auVar17._12_4_;
        auVar17 = minps(auVar19,auVar17);
        auVar20._4_4_ = -(uint)(auVar17._4_4_ < fRam0000000146b07ab4);
        auVar20._0_4_ = -(uint)(auVar17._0_4_ < _DAT_146b07ab0);
        auVar20._8_4_ = -(uint)(auVar17._8_4_ < fRam0000000146b07ab8);
        auVar20._12_4_ = -(uint)(auVar17._12_4_ < fRam0000000146b07abc);
        iVar9 = movmskps((int)pfVar10,auVar20);
        if (iVar9 != 0) {
          fVar29 = fVar22 + fVar22;
          fVar35 = fVar31 + fVar31;
          fVar54 = pfVar10[4];
          fVar26 = pfVar10[5];
          fVar28 = pfVar10[6];
          fVar38 = fVar21 * (fVar21 + fVar21);
          fVar33 = (fVar21 + fVar21) * fVar32;
          fVar51 = (fVar35 * fVar32 + fVar29 * fVar21) * fVar46;
          fVar52 = (fVar33 + fVar35 * fVar22) * fVar50;
          fVar53 = (fVar29 * fVar32 + fVar35 * fVar21) * fVar36;
          fVar39 = fVar50 * (fVar29 * fVar21 - fVar35 * fVar32);
          fVar41 = fVar36 * (fVar35 * fVar22 - fVar33);
          fVar43 = fVar46 * (fVar35 * fVar21 - fVar29 * fVar32);
          fVar21 = (float)((uint)((_DAT_146b07a10 - (fVar31 * fVar35 + fVar22 * fVar29)) * fVar46) &
                          _DAT_146b07a20);
          fVar31 = (float)((uint)((fRam0000000146b07a14 - (fVar31 * fVar35 + fVar38)) * fVar50) &
                          uRam0000000146b07a24);
          fVar32 = (float)((uint)((fRam0000000146b07a18 - (fVar22 * fVar29 + fVar38)) * fVar36) &
                          uRam0000000146b07a28);
          fVar33 = (float)((uint)((fRam0000000146b07a1c - (fVar38 + fVar38)) * fVar37) &
                          uRam0000000146b07a2c);
          fVar22 = fVar30 + fVar30;
          fVar29 = fVar27 + fVar27;
          fVar35 = fVar23 * (fVar23 + fVar23);
          fVar55 = fVar34 * (fVar23 + fVar23);
          fVar47 = (fVar34 * fVar29 + fVar23 * fVar22) * fVar56;
          fVar48 = (fVar55 + fVar30 * fVar29) * fVar57;
          fVar49 = (fVar34 * fVar22 + fVar23 * fVar29) * fVar58;
          fVar38 = fVar57 * (fVar23 * fVar22 - fVar34 * fVar29);
          fVar55 = fVar58 * (fVar30 * fVar29 - fVar55);
          fVar44 = fVar56 * (fVar23 * fVar29 - fVar34 * fVar22);
          fVar23 = (float)((uint)((_DAT_146b07a10 - (fVar27 * fVar29 + fVar30 * fVar22)) * fVar56) &
                          _DAT_146b07a20);
          fVar27 = (float)((uint)((fRam0000000146b07a14 - (fVar27 * fVar29 + fVar35)) * fVar57) &
                          uRam0000000146b07a24);
          fVar30 = (float)((uint)((fRam0000000146b07a18 - (fVar30 * fVar22 + fVar35)) * fVar58) &
                          uRam0000000146b07a28);
          fVar34 = (float)((uint)((fRam0000000146b07a1c - (fVar35 + fVar35)) * fVar59) &
                          uRam0000000146b07a2c);
          local_188 = fVar47 * fVar39 + fVar23 * fVar21 + fVar44 * fVar53 + fVar34 * fVar54;
          fStack_184 = fVar47 * fVar31 + fVar23 * fVar51 + fVar44 * fVar41 + fVar34 * fVar26;
          fStack_180 = fVar47 * fVar52 + fVar23 * fVar43 + fVar44 * fVar32 + fVar34 * fVar28;
          fStack_17c = fVar47 * fVar33 + fVar23 * fVar33 + fVar44 * fVar33 +
                       fVar34 * fRam0000000146b07a1c;
          local_178 = fVar27 * fVar39 + fVar38 * fVar21 + fVar48 * fVar53 + fVar34 * fVar54;
          fStack_174 = fVar27 * fVar31 + fVar38 * fVar51 + fVar48 * fVar41 + fVar34 * fVar26;
          fStack_170 = fVar27 * fVar52 + fVar38 * fVar43 + fVar48 * fVar32 + fVar34 * fVar28;
          fStack_16c = fVar27 * fVar33 + fVar38 * fVar33 + fVar48 * fVar33 +
                       fVar34 * fRam0000000146b07a1c;
          local_168 = fVar55 * fVar39 + fVar49 * fVar21 + fVar30 * fVar53 + fVar34 * fVar54;
          fStack_164 = fVar55 * fVar31 + fVar49 * fVar51 + fVar30 * fVar41 + fVar34 * fVar26;
          fStack_160 = fVar55 * fVar52 + fVar49 * fVar43 + fVar30 * fVar32 + fVar34 * fVar28;
          fStack_15c = fVar55 * fVar33 + fVar49 * fVar33 + fVar30 * fVar33 +
                       fVar34 * fRam0000000146b07a1c;
          local_158 = fVar42 * fVar39 + fVar40 * fVar21 + fVar45 * fVar53 +
                      fRam0000000146b07a1c * fVar54;
          fStack_154 = fVar42 * fVar31 + fVar40 * fVar51 + fVar45 * fVar41 +
                       fRam0000000146b07a1c * fVar26;
          fStack_150 = fVar42 * fVar52 + fVar40 * fVar43 + fVar45 * fVar32 +
                       fRam0000000146b07a1c * fVar28;
          fStack_14c = fVar42 * fVar33 + fVar40 * fVar33 + fVar45 * fVar33 +
                       fRam0000000146b07a1c * fRam0000000146b07a1c;
          FMatrix::RemoveScaling(&local_188);
          fVar23 = (float)(-(uint)(_DAT_146b07ab0 <= fVar56 * fVar46) &
                           (_DAT_146b07aa0 ^ (uint)fVar2) ^ _DAT_146b07aa0);
          fVar30 = (float)(-(uint)(fRam0000000146b07ab4 <= fVar57 * fVar50) &
                           (uRam0000000146b07aa4 ^ (uint)fVar3) ^ uRam0000000146b07aa4);
          fVar27 = (float)(-(uint)(fRam0000000146b07ab8 <= fVar58 * fVar36) &
                           (uRam0000000146b07aa8 ^ (uint)fVar4) ^ uRam0000000146b07aa8);
          local_188 = local_188 * fVar23;
          fStack_184 = fStack_184 * fVar23;
          fStack_180 = fStack_180 * fVar23;
          fStack_174 = fStack_174 * fVar30;
          fStack_170 = fStack_170 * fVar30;
          local_178 = local_178 * fVar30;
          fStack_164 = fStack_164 * fVar27;
          fStack_160 = fStack_160 * fVar27;
          local_168 = local_168 * fVar27;
          FQuat::FQuat(&local_148,&local_188);
          auVar25._0_4_ = local_148 * local_148 + fStack_140 * fStack_140;
          auVar25._4_4_ = fStack_144 * fStack_144 + fStack_13c * fStack_13c;
          auVar25._8_4_ = fStack_140 * fStack_140 + local_148 * local_148;
          auVar25._12_4_ = fStack_13c * fStack_13c + fStack_144 * fStack_144;
          fVar40 = auVar25._4_4_ + auVar25._0_4_;
          fVar42 = auVar25._8_4_ + auVar25._4_4_;
          fVar45 = auVar25._12_4_ + auVar25._8_4_;
          fVar54 = auVar25._0_4_ + auVar25._12_4_;
          auVar17._4_4_ = fVar42;
          auVar17._0_4_ = fVar40;
          auVar17._8_4_ = fVar45;
          auVar17._12_4_ = fVar54;
          auVar17 = rsqrtps(auVar25,auVar17);
          fVar23 = auVar17._0_4_;
          fVar30 = auVar17._4_4_;
          fVar27 = auVar17._8_4_;
          fVar34 = auVar17._12_4_;
          fVar23 = (_DAT_146b07a90 - fVar23 * fVar23 * fVar40 * _DAT_146b07a90) * fVar23 + fVar23;
          fVar30 = (fRam0000000146b07a94 - fVar30 * fVar30 * fVar42 * fRam0000000146b07a94) * fVar30
                   + fVar30;
          fVar27 = (fRam0000000146b07a98 - fVar27 * fVar27 * fVar45 * fRam0000000146b07a98) * fVar27
                   + fVar27;
          fVar34 = (fRam0000000146b07a9c - fVar34 * fVar34 * fVar54 * fRam0000000146b07a9c) * fVar34
                   + fVar34;
          auVar6._4_4_ = fStack_154;
          auVar6._0_4_ = local_158;
          auVar6._8_4_ = fStack_150;
          fVar23 = (float)(((uint)(((_DAT_146b07a90 - fVar23 * fVar23 * fVar40 * _DAT_146b07a90) *
                                    fVar23 + fVar23) * local_148) ^ _DAT_146b07a80) &
                           -(uint)(1e-08 <= fVar40) ^ _DAT_146b07a80);
          fVar30 = (float)(((uint)(((fRam0000000146b07a94 -
                                    fVar30 * fVar30 * fVar42 * fRam0000000146b07a94) * fVar30 +
                                   fVar30) * fStack_144) ^ uRam0000000146b07a84) &
                           -(uint)(1e-08 <= fVar42) ^ uRam0000000146b07a84);
          fVar27 = (float)(((uint)(((fRam0000000146b07a98 -
                                    fVar27 * fVar27 * fVar45 * fRam0000000146b07a98) * fVar27 +
                                   fVar27) * fStack_140) ^ uRam0000000146b07a88) &
                           -(uint)(1e-08 <= fVar45) ^ uRam0000000146b07a88);
          fVar34 = (float)(((uint)(((fRam0000000146b07a9c -
                                    fVar34 * fVar34 * fVar54 * fRam0000000146b07a9c) * fVar34 +
                                   fVar34) * fStack_13c) ^ uRam0000000146b07a8c) &
                           -(uint)(1e-08 <= fVar54) ^ uRam0000000146b07a8c);
          auVar6._12_4_ = 0;
          *(undefined1 (*) [16])(param_1 + 4) = auVar6;
          *param_1 = fVar23;
          param_1[1] = fVar30;
          param_1[2] = fVar27;
          param_1[3] = fVar34;
          param_1[8] = fVar56 * fVar46;
          param_1[9] = fVar57 * fVar50;
          param_1[10] = fVar58 * fVar36;
          param_1[0xb] = fVar59 * fVar37;
          return param_1;
        }
        fVar40 = fVar40 * fVar46;
        fVar42 = fVar42 * fVar50;
        fVar45 = fVar45 * fVar36;
        fVar54 = fVar54 * fVar37;
        fVar55 = fVar27 * fVar21 * fRam0000000146b07a74;
        fVar43 = fVar30 * fVar21 * fRam0000000146b07a78;
        fVar44 = fVar23 * fVar21 * fRam0000000146b07a7c;
        fVar29 = fVar34 * fVar22 * fRam0000000146b07a64;
        fVar35 = fVar23 * fVar22 * fRam0000000146b07a68;
        fVar39 = fVar30 * fVar22 * fRam0000000146b07a6c;
        fVar47 = fVar23 * fVar31 * fRam0000000146b07a54;
        fVar48 = fVar34 * fVar31 * fRam0000000146b07a58;
        fVar49 = fVar27 * fVar31 * fRam0000000146b07a5c;
        fVar28 = fVar45 * fVar22 - fVar42 * fVar31;
        fVar33 = fVar40 * fVar31 - fVar45 * fVar21;
        fVar38 = fVar42 * fVar21 - fVar40 * fVar22;
        fVar41 = fVar54 * fVar32 - fVar54 * fVar32;
        fVar28 = fVar28 + fVar28;
        fVar33 = fVar33 + fVar33;
        fVar38 = fVar38 + fVar38;
        fVar41 = fVar41 + fVar41;
        fVar2 = pfVar10[4];
        fVar3 = pfVar10[5];
        fVar4 = pfVar10[6];
        fVar26 = pfVar10[7];
        *param_1 = fVar34 * fVar21 * _DAT_146b07a70 + fVar32 * fVar23 +
                   fVar27 * fVar22 * _DAT_146b07a60 + fVar30 * fVar31 * _DAT_146b07a50;
        param_1[1] = fVar55 + fVar32 * fVar30 + fVar29 + fVar47;
        param_1[2] = fVar43 + fVar32 * fVar27 + fVar35 + fVar48;
        param_1[3] = fVar44 + fVar32 * fVar34 + fVar39 + fVar49;
        param_1[8] = fVar56 * fVar46;
        param_1[9] = fVar57 * fVar50;
        param_1[10] = fVar58 * fVar36;
        param_1[0xb] = fVar59 * fVar37;
        param_1[4] = (fVar38 * fVar22 - fVar33 * fVar31) + fVar32 * fVar28 + fVar40 + fVar2;
        param_1[5] = (fVar28 * fVar31 - fVar38 * fVar21) + fVar32 * fVar33 + fVar42 + fVar3;
        param_1[6] = (fVar33 * fVar21 - fVar28 * fVar22) + fVar32 * fVar38 + fVar45 + fVar4;
        param_1[7] = (fVar41 * fVar32 - fVar41 * fVar32) + fVar32 * fVar41 + fVar54 + fVar26;
        return param_1;
      }
      auVar16._4_4_ = fVar57;
      auVar16._0_4_ = fVar56;
      auVar16._8_4_ = fVar58;
      auVar16._12_4_ = fVar59;
      pfVar10 = (float *)(lVar15 * 0x30 + *(longlong *)(param_2 + 0xa88));
      auVar17 = *(undefined1 (*) [16])(pfVar10 + 8);
      fVar32 = auVar17._0_4_;
      fVar2 = auVar17._4_4_;
      fVar3 = auVar17._8_4_;
      fVar4 = auVar17._12_4_;
      fVar26 = *pfVar10;
      fVar28 = pfVar10[1];
      fVar29 = pfVar10[2];
      fVar33 = pfVar10[3];
      auVar17 = minps(auVar16,auVar17);
      auVar18._4_4_ = -(uint)(auVar17._4_4_ < fVar50);
      auVar18._0_4_ = -(uint)(auVar17._0_4_ < fVar46);
      auVar18._8_4_ = -(uint)(auVar17._8_4_ < fVar36);
      auVar18._12_4_ = -(uint)(auVar17._12_4_ < fVar37);
      iVar9 = movmskps((int)piVar13,auVar18);
      if (iVar9 == 0) {
        fVar38 = fVar26 * fVar30;
        fVar39 = fVar26 * fVar23;
        fVar40 = fVar40 * fVar32;
        fVar42 = fVar42 * fVar2;
        fVar45 = fVar45 * fVar3;
        fVar54 = fVar54 * fVar4;
        fVar31 = fVar28 * fVar23;
        fVar35 = fVar28 * fVar30;
        fVar21 = fVar29 * fVar23;
        fVar22 = fVar29 * fVar27;
        fVar23 = fVar26 * fVar34 * _DAT_146b07a70 + fVar23 * fVar33 +
                 fVar28 * fVar27 * _DAT_146b07a60 + fVar29 * fVar30 * _DAT_146b07a50;
        fVar30 = fVar26 * fVar27 * fRam0000000146b07a74 + fVar30 * fVar33 +
                 fVar28 * fVar34 * fRam0000000146b07a64 + fVar21 * fRam0000000146b07a54;
        fVar27 = fVar38 * fRam0000000146b07a78 + fVar27 * fVar33 + fVar31 * fRam0000000146b07a68 +
                 fVar29 * fVar34 * fRam0000000146b07a58;
        fVar34 = fVar39 * fRam0000000146b07a7c + fVar34 * fVar33 + fVar35 * fRam0000000146b07a6c +
                 fVar22 * fRam0000000146b07a5c;
        fVar21 = fVar45 * fVar28 - fVar42 * fVar29;
        fVar22 = fVar40 * fVar29 - fVar45 * fVar26;
        fVar31 = fVar42 * fVar26 - fVar40 * fVar28;
        fVar35 = fVar54 * fVar33 - fVar54 * fVar33;
        fVar21 = fVar21 + fVar21;
        fVar22 = fVar22 + fVar22;
        fVar31 = fVar31 + fVar31;
        fVar35 = fVar35 + fVar35;
        fVar40 = (fVar31 * fVar28 - fVar22 * fVar29) + fVar33 * fVar21 + fVar40 + pfVar10[4];
        fVar42 = (fVar21 * fVar29 - fVar31 * fVar26) + fVar33 * fVar22 + fVar42 + pfVar10[5];
        fVar45 = (fVar22 * fVar26 - fVar21 * fVar28) + fVar33 * fVar31 + fVar45 + pfVar10[6];
        fVar54 = (fVar35 * fVar33 - fVar35 * fVar33) + fVar33 * fVar35 + fVar54 + pfVar10[7];
      }
      else {
        fVar35 = fVar28 + fVar28;
        fVar37 = fVar29 + fVar29;
        fVar54 = pfVar10[4];
        fVar46 = pfVar10[5];
        fVar50 = pfVar10[6];
        fVar38 = (fVar26 + fVar26) * fVar26;
        fVar36 = (fVar26 + fVar26) * fVar33;
        fVar39 = fVar2 * (fVar35 * fVar26 - fVar37 * fVar33);
        fVar41 = fVar3 * (fVar37 * fVar28 - fVar36);
        fVar43 = fVar32 * (fVar37 * fVar26 - fVar35 * fVar33);
        fVar51 = (fVar35 * fVar26 + fVar37 * fVar33) * fVar32;
        fVar52 = (fVar37 * fVar28 + fVar36) * fVar2;
        fVar53 = (fVar37 * fVar26 + fVar35 * fVar33) * fVar3;
        fVar36 = (float)((uint)((_DAT_146b07a10 - (fVar37 * fVar29 + fVar35 * fVar28)) * fVar32) &
                        _DAT_146b07a20);
        fVar37 = (float)((uint)((fRam0000000146b07a14 - (fVar37 * fVar29 + fVar38)) * fVar2) &
                        uRam0000000146b07a24);
        fVar28 = (float)((uint)((fRam0000000146b07a18 - (fVar35 * fVar28 + fVar38)) * fVar3) &
                        uRam0000000146b07a28);
        fVar33 = (float)((uint)((fRam0000000146b07a1c - (fVar38 + fVar38)) * fVar4) &
                        uRam0000000146b07a2c);
        fVar26 = fVar30 + fVar30;
        fVar29 = fVar27 + fVar27;
        fVar35 = fVar23 * (fVar23 + fVar23);
        fVar55 = fVar34 * (fVar23 + fVar23);
        fVar47 = (fVar34 * fVar29 + fVar23 * fVar26) * fVar56;
        fVar48 = (fVar55 + fVar30 * fVar29) * fVar57;
        fVar49 = (fVar34 * fVar26 + fVar23 * fVar29) * fVar58;
        fVar38 = fVar57 * (fVar23 * fVar26 - fVar34 * fVar29);
        fVar55 = fVar58 * (fVar30 * fVar29 - fVar55);
        fVar44 = fVar56 * (fVar23 * fVar29 - fVar34 * fVar26);
        fVar23 = (float)((uint)((_DAT_146b07a10 - (fVar27 * fVar29 + fVar30 * fVar26)) * fVar56) &
                        _DAT_146b07a20);
        fVar27 = (float)((uint)((fRam0000000146b07a14 - (fVar27 * fVar29 + fVar35)) * fVar57) &
                        uRam0000000146b07a24);
        fVar30 = (float)((uint)((fRam0000000146b07a18 - (fVar30 * fVar26 + fVar35)) * fVar58) &
                        uRam0000000146b07a28);
        fVar34 = (float)((uint)((fRam0000000146b07a1c - (fVar35 + fVar35)) * fVar59) &
                        uRam0000000146b07a2c);
        local_138 = fVar47 * fVar39 + fVar23 * fVar36 + fVar44 * fVar53 + fVar34 * fVar54;
        fStack_134 = fVar47 * fVar37 + fVar23 * fVar51 + fVar44 * fVar41 + fVar34 * fVar46;
        fStack_130 = fVar47 * fVar52 + fVar23 * fVar43 + fVar44 * fVar28 + fVar34 * fVar50;
        fStack_12c = fVar47 * fVar33 + fVar23 * fVar33 + fVar44 * fVar33 +
                     fVar34 * fRam0000000146b07a1c;
        local_128 = fVar27 * fVar39 + fVar38 * fVar36 + fVar48 * fVar53 + fVar34 * fVar54;
        fStack_124 = fVar27 * fVar37 + fVar38 * fVar51 + fVar48 * fVar41 + fVar34 * fVar46;
        fStack_120 = fVar27 * fVar52 + fVar38 * fVar43 + fVar48 * fVar28 + fVar34 * fVar50;
        fStack_11c = fVar27 * fVar33 + fVar38 * fVar33 + fVar48 * fVar33 +
                     fVar34 * fRam0000000146b07a1c;
        local_118 = fVar55 * fVar39 + fVar49 * fVar36 + fVar30 * fVar53 + fVar34 * fVar54;
        fStack_114 = fVar55 * fVar37 + fVar49 * fVar51 + fVar30 * fVar41 + fVar34 * fVar46;
        fStack_110 = fVar55 * fVar52 + fVar49 * fVar43 + fVar30 * fVar28 + fVar34 * fVar50;
        fStack_10c = fVar55 * fVar33 + fVar49 * fVar33 + fVar30 * fVar33 +
                     fVar34 * fRam0000000146b07a1c;
        local_108 = fVar42 * fVar39 + fVar40 * fVar36 + fVar45 * fVar53 +
                    fRam0000000146b07a1c * fVar54;
        fStack_104 = fVar42 * fVar37 + fVar40 * fVar51 + fVar45 * fVar41 +
                     fRam0000000146b07a1c * fVar46;
        fStack_100 = fVar42 * fVar52 + fVar40 * fVar43 + fVar45 * fVar28 +
                     fRam0000000146b07a1c * fVar50;
        fStack_fc = fVar42 * fVar33 + fVar40 * fVar33 + fVar45 * fVar33 +
                    fRam0000000146b07a1c * fRam0000000146b07a1c;
        FMatrix::RemoveScaling(&local_138);
        fVar23 = (float)(-(uint)(_DAT_146b07ab0 <= fVar56 * fVar32) &
                         (_DAT_146b07aa0 ^ (uint)fVar21) ^ _DAT_146b07aa0);
        fVar30 = (float)(-(uint)(fRam0000000146b07ab4 <= fVar57 * fVar2) &
                         (uRam0000000146b07aa4 ^ (uint)fVar22) ^ uRam0000000146b07aa4);
        fVar27 = (float)(-(uint)(fRam0000000146b07ab8 <= fVar58 * fVar3) &
                         (uRam0000000146b07aa8 ^ (uint)fVar31) ^ uRam0000000146b07aa8);
        local_138 = local_138 * fVar23;
        fStack_134 = fStack_134 * fVar23;
        fStack_130 = fStack_130 * fVar23;
        fStack_124 = fStack_124 * fVar30;
        fStack_120 = fStack_120 * fVar30;
        local_128 = local_128 * fVar30;
        fStack_114 = fStack_114 * fVar27;
        fStack_110 = fStack_110 * fVar27;
        local_118 = local_118 * fVar27;
        FQuat::FQuat(&local_148,&local_138);
        local_198 = 0x322bcc77;
        auVar24._0_4_ = local_148 * local_148 + fStack_140 * fStack_140;
        auVar24._4_4_ = fStack_144 * fStack_144 + fStack_13c * fStack_13c;
        auVar24._8_4_ = fStack_140 * fStack_140 + local_148 * local_148;
        auVar24._12_4_ = fStack_13c * fStack_13c + fStack_144 * fStack_144;
        fVar40 = auVar24._4_4_ + auVar24._0_4_;
        fVar42 = auVar24._8_4_ + auVar24._4_4_;
        fVar45 = auVar24._12_4_ + auVar24._8_4_;
        fVar46 = auVar24._0_4_ + auVar24._12_4_;
        auVar5._4_4_ = fVar42;
        auVar5._0_4_ = fVar40;
        auVar5._8_4_ = fVar45;
        auVar5._12_4_ = fVar46;
        auVar17 = rsqrtps(auVar24,auVar5);
        fVar23 = auVar17._0_4_;
        fVar30 = auVar17._4_4_;
        fVar27 = auVar17._8_4_;
        fVar34 = auVar17._12_4_;
        fVar23 = (_DAT_146b07a90 - fVar23 * fVar23 * fVar40 * _DAT_146b07a90) * fVar23 + fVar23;
        fVar30 = (fRam0000000146b07a94 - fVar30 * fVar30 * fVar42 * fRam0000000146b07a94) * fVar30 +
                 fVar30;
        fVar27 = (fRam0000000146b07a98 - fVar27 * fVar27 * fVar45 * fRam0000000146b07a98) * fVar27 +
                 fVar27;
        fVar34 = (fRam0000000146b07a9c - fVar34 * fVar34 * fVar46 * fRam0000000146b07a9c) * fVar34 +
                 fVar34;
        fVar54 = 0.0;
        fVar23 = (float)(((uint)(((_DAT_146b07a90 - fVar23 * fVar23 * fVar40 * _DAT_146b07a90) *
                                  fVar23 + fVar23) * local_148) ^ _DAT_146b07a80) &
                         -(uint)(1e-08 <= fVar40) ^ _DAT_146b07a80);
        fVar30 = (float)(((uint)(((fRam0000000146b07a94 -
                                  fVar30 * fVar30 * fVar42 * fRam0000000146b07a94) * fVar30 + fVar30
                                 ) * fStack_144) ^ uRam0000000146b07a84) & -(uint)(1e-08 <= fVar42)
                        ^ uRam0000000146b07a84);
        fVar27 = (float)(((uint)(((fRam0000000146b07a98 -
                                  fVar27 * fVar27 * fVar45 * fRam0000000146b07a98) * fVar27 + fVar27
                                 ) * fStack_140) ^ uRam0000000146b07a88) & -(uint)(1e-08 <= fVar45)
                        ^ uRam0000000146b07a88);
        fVar34 = (float)(((uint)(((fRam0000000146b07a9c -
                                  fVar34 * fVar34 * fVar46 * fRam0000000146b07a9c) * fVar34 + fVar34
                                 ) * fStack_13c) ^ uRam0000000146b07a8c) & -(uint)(1e-08 <= fVar46)
                        ^ uRam0000000146b07a8c);
        fVar46 = _DAT_146b07ab0;
        fVar50 = fRam0000000146b07ab4;
        fVar36 = fRam0000000146b07ab8;
        fVar37 = fRam0000000146b07abc;
        fVar40 = local_108;
        fVar42 = fStack_104;
        fVar45 = fStack_100;
        local_148 = fVar23;
        fStack_144 = fVar30;
        fStack_140 = fVar27;
        fStack_13c = fVar34;
      }
      fVar59 = fVar59 * fVar4;
      fVar58 = fVar58 * fVar3;
      fVar57 = fVar57 * fVar2;
      fVar56 = fVar56 * fVar32;
      lVar11 = *(longlong *)(lVar1 + 0x158);
      iVar9 = *(int *)(lVar11 + 8 + lVar15 * 0x10);
    } while (iVar9 != -1);
  }
  uVar7 = uRam00000001468b5b78;
  *(undefined8 *)param_1 = _DAT_1468b5b70;
  *(undefined8 *)(param_1 + 2) = uVar7;
  uVar7 = uRam00000001468b5b88;
  *(undefined8 *)(param_1 + 4) = _DAT_1468b5b80;
  *(undefined8 *)(param_1 + 6) = uVar7;
  uVar7 = uRam00000001468b5b98;
  *(undefined8 *)(param_1 + 8) = _DAT_1468b5b90;
  *(undefined8 *)(param_1 + 10) = uVar7;
  return param_1;
}



// FUNCTION 1426bbc60 ComputeTargetTM body=136 status=ok
// SIG undefined ComputeTargetTM(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
ComputeTargetTM(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78 [48];
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    puVar2 = (undefined8 *)FUN_1426bbcf0(local_48,param_3,param_5,param_6);
  }
  else {
    puVar2 = (undefined8 *)FUN_1426bb0c0(local_78,param_3,param_4);
  }
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  uVar1 = puVar2[3];
  param_1[2] = puVar2[2];
  param_1[3] = uVar1;
  uVar1 = puVar2[5];
  param_1[4] = puVar2[4];
  param_1[5] = uVar1;
  return param_1;
}



// FUNCTION 1426bbcf0 FUN_1426bbcf0 body=1389 status=ok
// SIG undefined FUN_1426bbcf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1426bbcf0(float *param_1,longlong param_2,longlong *param_3,int param_4)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float *pfVar8;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar14;
  float fVar15;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar16 [16];
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
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  
  fVar2 = fRam0000000146b07abc;
  fVar6 = fRam0000000146b07ab8;
  fVar5 = fRam0000000146b07ab4;
  fVar4 = _DAT_146b07ab0;
  fVar3 = fRam0000000146b07a1c;
  fVar48 = fRam0000000146b07a18;
  fVar47 = fRam0000000146b07a14;
  fVar46 = _DAT_146b07a10;
  auVar9 = *(undefined1 (*) [16])(param_2 + 0x230);
  fVar20 = auVar9._0_4_;
  fVar22 = auVar9._4_4_;
  fVar30 = auVar9._8_4_;
  fVar32 = auVar9._12_4_;
  pfVar8 = (float *)((longlong)param_4 * 0x30 + *param_3);
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = fVar3;
  fVar11 = (float)((uint)fVar47 & uRam0000000146b07a24);
  fVar12 = (float)((uint)fVar48 & uRam0000000146b07a28);
  fVar13 = (float)((uint)fVar3 & uRam0000000146b07a2c);
  auVar10 = *(undefined1 (*) [16])(pfVar8 + 8);
  fVar21 = auVar10._0_4_;
  fVar23 = auVar10._4_4_;
  fVar31 = auVar10._8_4_;
  fVar33 = auVar10._12_4_;
  param_1[8] = (float)((uint)fVar46 & _DAT_146b07a20);
  param_1[9] = fVar11;
  param_1[10] = fVar12;
  param_1[0xb] = fVar13;
  auVar9 = minps(auVar10,auVar9);
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  auVar10._4_4_ = -(uint)(auVar9._4_4_ < fVar5);
  auVar10._0_4_ = -(uint)(auVar9._0_4_ < fVar4);
  auVar10._8_4_ = -(uint)(auVar9._8_4_ < fVar6);
  auVar10._12_4_ = -(uint)(auVar9._12_4_ < fVar2);
  iVar7 = movmskps(param_4,auVar10);
  if (iVar7 == 0) {
    fVar46 = *(float *)(param_2 + 0x210);
    fVar47 = *(float *)(param_2 + 0x214);
    fVar48 = *(float *)(param_2 + 0x218);
    fVar3 = *(float *)(param_2 + 0x21c);
    fVar4 = *pfVar8;
    fVar5 = pfVar8[1];
    fVar6 = pfVar8[2];
    fVar2 = pfVar8[3];
    fVar27 = pfVar8[4] * fVar20;
    fVar29 = pfVar8[5] * fVar22;
    fVar34 = pfVar8[6] * fVar30;
    fVar35 = pfVar8[7] * fVar32;
    fVar24 = fVar2 * fVar46 * _DAT_146b07a70;
    fVar18 = fVar6 * fVar46 * fRam0000000146b07a74;
    fVar28 = fVar5 * fVar46 * fRam0000000146b07a78;
    fVar19 = fVar4 * fVar46 * fRam0000000146b07a7c;
    fVar15 = fVar47 * fVar6 * _DAT_146b07a60;
    fVar17 = fVar47 * fVar2 * fRam0000000146b07a64;
    fVar25 = fVar47 * fVar4 * fRam0000000146b07a68;
    fVar26 = fVar47 * fVar5 * fRam0000000146b07a6c;
    fVar11 = fVar48 * fVar5 * _DAT_146b07a50;
    fVar12 = fVar48 * fVar4 * fRam0000000146b07a54;
    fVar13 = fVar48 * fVar2 * fRam0000000146b07a58;
    fVar14 = fVar48 * fVar6 * fRam0000000146b07a5c;
    param_1[8] = fVar21 * fVar20;
    param_1[9] = fVar23 * fVar22;
    param_1[10] = fVar31 * fVar30;
    param_1[0xb] = fVar33 * fVar32;
    *param_1 = fVar24 + fVar3 * fVar4 + fVar15 + fVar11;
    param_1[1] = fVar18 + fVar3 * fVar5 + fVar17 + fVar12;
    param_1[2] = fVar28 + fVar3 * fVar6 + fVar25 + fVar13;
    param_1[3] = fVar19 + fVar3 * fVar2 + fVar26 + fVar14;
    fVar23 = fVar34 * fVar47 - fVar29 * fVar48;
    fVar30 = fVar27 * fVar48 - fVar34 * fVar46;
    fVar31 = fVar29 * fVar46 - fVar27 * fVar47;
    fVar32 = fVar35 * fVar3 - fVar35 * fVar3;
    fVar23 = fVar23 + fVar23;
    fVar30 = fVar30 + fVar30;
    fVar31 = fVar31 + fVar31;
    fVar32 = fVar32 + fVar32;
    fVar20 = *(float *)(param_2 + 0x224);
    fVar21 = *(float *)(param_2 + 0x228);
    fVar22 = *(float *)(param_2 + 0x22c);
    param_1[4] = (fVar31 * fVar47 - fVar30 * fVar48) + fVar3 * fVar23 + fVar27 +
                 *(float *)(param_2 + 0x220);
    param_1[5] = (fVar23 * fVar48 - fVar31 * fVar46) + fVar3 * fVar30 + fVar29 + fVar20;
    param_1[6] = (fVar30 * fVar46 - fVar23 * fVar47) + fVar3 * fVar31 + fVar34 + fVar21;
    param_1[7] = (fVar32 * fVar3 - fVar32 * fVar3) + fVar3 * fVar32 + fVar35 + fVar22;
  }
  else {
    fVar2 = *(float *)(param_2 + 0x210);
    fVar11 = *(float *)(param_2 + 0x214);
    fVar12 = *(float *)(param_2 + 0x218);
    fVar13 = *(float *)(param_2 + 0x21c);
    fVar24 = fVar11 + fVar11;
    fVar26 = fVar12 + fVar12;
    fVar14 = *(float *)(param_2 + 0x220);
    fVar15 = *(float *)(param_2 + 0x224);
    fVar17 = *(float *)(param_2 + 0x228);
    fVar28 = fVar2 * (fVar2 + fVar2);
    fVar25 = (fVar2 + fVar2) * fVar13;
    fVar43 = (fVar26 * fVar13 + fVar24 * fVar2) * fVar20;
    fVar44 = (fVar25 + fVar26 * fVar11) * fVar22;
    fVar45 = (fVar24 * fVar13 + fVar26 * fVar2) * fVar30;
    fVar34 = fVar22 * (fVar24 * fVar2 - fVar26 * fVar13);
    fVar36 = fVar30 * (fVar26 * fVar11 - fVar25);
    fVar38 = fVar20 * (fVar26 * fVar2 - fVar24 * fVar13);
    fVar25 = (float)((uint)((fVar46 - (fVar12 * fVar26 + fVar11 * fVar24)) * fVar20) &
                    _DAT_146b07a20);
    fVar26 = (float)((uint)((fVar47 - (fVar12 * fVar26 + fVar28)) * fVar22) & uRam0000000146b07a24);
    fVar18 = (float)((uint)((fVar48 - (fVar11 * fVar24 + fVar28)) * fVar30) & uRam0000000146b07a28);
    fVar19 = (float)((uint)((fVar3 - (fVar28 + fVar28)) * fVar32) & uRam0000000146b07a2c);
    fVar2 = *pfVar8;
    fVar11 = pfVar8[1];
    fVar12 = pfVar8[2];
    fVar13 = pfVar8[3];
    fVar28 = fVar11 + fVar11;
    fVar27 = fVar12 + fVar12;
    fVar29 = fVar2 * (fVar2 + fVar2);
    fVar24 = (fVar2 + fVar2) * fVar13;
    fVar40 = (fVar27 * fVar13 + fVar28 * fVar2) * fVar21;
    fVar41 = (fVar24 + fVar27 * fVar11) * fVar23;
    fVar42 = (fVar28 * fVar13 + fVar27 * fVar2) * fVar31;
    fVar35 = fVar23 * (fVar28 * fVar2 - fVar27 * fVar13);
    fVar37 = fVar31 * (fVar27 * fVar11 - fVar24);
    fVar39 = fVar21 * (fVar27 * fVar2 - fVar28 * fVar13);
    fVar13 = (float)((uint)((fVar46 - (fVar12 * fVar27 + fVar11 * fVar28)) * fVar21) &
                    _DAT_146b07a20);
    fVar24 = (float)((uint)((fVar47 - (fVar12 * fVar27 + fVar29)) * fVar23) & uRam0000000146b07a24);
    fVar28 = (float)((uint)((fVar48 - (fVar11 * fVar28 + fVar29)) * fVar31) & uRam0000000146b07a28);
    fVar27 = (float)((uint)((fVar3 - (fVar29 + fVar29)) * fVar33) & uRam0000000146b07a2c);
    fVar2 = pfVar8[4];
    fVar11 = pfVar8[5];
    fVar12 = pfVar8[6];
    local_d8 = fVar40 * fVar34 + fVar13 * fVar25 + fVar39 * fVar45 + fVar27 * fVar14;
    fStack_d4 = fVar40 * fVar26 + fVar13 * fVar43 + fVar39 * fVar36 + fVar27 * fVar15;
    fStack_d0 = fVar40 * fVar44 + fVar13 * fVar38 + fVar39 * fVar18 + fVar27 * fVar17;
    fStack_cc = fVar40 * fVar19 + fVar13 * fVar19 + fVar39 * fVar19 + fVar27 * fVar3;
    local_c8 = fVar24 * fVar34 + fVar35 * fVar25 + fVar41 * fVar45 + fVar27 * fVar14;
    fStack_c4 = fVar24 * fVar26 + fVar35 * fVar43 + fVar41 * fVar36 + fVar27 * fVar15;
    fStack_c0 = fVar24 * fVar44 + fVar35 * fVar38 + fVar41 * fVar18 + fVar27 * fVar17;
    fStack_bc = fVar24 * fVar19 + fVar35 * fVar19 + fVar41 * fVar19 + fVar27 * fVar3;
    local_b8 = fVar37 * fVar34 + fVar42 * fVar25 + fVar28 * fVar45 + fVar27 * fVar14;
    fStack_b4 = fVar37 * fVar26 + fVar42 * fVar43 + fVar28 * fVar36 + fVar27 * fVar15;
    fStack_b0 = fVar37 * fVar44 + fVar42 * fVar38 + fVar28 * fVar18 + fVar27 * fVar17;
    fStack_ac = fVar37 * fVar19 + fVar42 * fVar19 + fVar28 * fVar19 + fVar27 * fVar3;
    local_a8 = fVar11 * fVar34 + fVar2 * fVar25 + fVar12 * fVar45 + fVar3 * fVar14;
    fStack_a4 = fVar11 * fVar26 + fVar2 * fVar43 + fVar12 * fVar36 + fVar3 * fVar15;
    fStack_a0 = fVar11 * fVar44 + fVar2 * fVar38 + fVar12 * fVar18 + fVar3 * fVar17;
    fStack_9c = fVar11 * fVar19 + fVar2 * fVar19 + fVar12 * fVar19 + fVar3 * fVar3;
    FMatrix::RemoveScaling(&local_d8);
    fVar46 = (float)(-(uint)(fVar4 <= fVar21 * fVar20) & (_DAT_146b07aa0 ^ (uint)fVar46) ^
                    _DAT_146b07aa0);
    fVar47 = (float)(-(uint)(fVar5 <= fVar23 * fVar22) & (uRam0000000146b07aa4 ^ (uint)fVar47) ^
                    uRam0000000146b07aa4);
    fVar48 = (float)(-(uint)(fVar6 <= fVar31 * fVar30) & (uRam0000000146b07aa8 ^ (uint)fVar48) ^
                    uRam0000000146b07aa8);
    local_d8 = local_d8 * fVar46;
    fStack_d4 = fStack_d4 * fVar46;
    fStack_d0 = fStack_d0 * fVar46;
    fStack_c4 = fStack_c4 * fVar47;
    fStack_c0 = fStack_c0 * fVar47;
    local_c8 = local_c8 * fVar47;
    fStack_b4 = fStack_b4 * fVar48;
    fStack_b0 = fStack_b0 * fVar48;
    local_b8 = local_b8 * fVar48;
    FQuat::FQuat(&local_e8,&local_d8);
    fVar3 = fRam0000000146b07a9c;
    fVar48 = fRam0000000146b07a98;
    fVar47 = fRam0000000146b07a94;
    fVar46 = _DAT_146b07a90;
    param_1[8] = fVar21 * fVar20;
    param_1[9] = fVar23 * fVar22;
    param_1[10] = fVar31 * fVar30;
    param_1[0xb] = fVar33 * fVar32;
    auVar16._0_4_ = local_e8 * local_e8 + fStack_e0 * fStack_e0;
    auVar16._4_4_ = fStack_e4 * fStack_e4 + fStack_dc * fStack_dc;
    auVar16._8_4_ = fStack_e0 * fStack_e0 + local_e8 * local_e8;
    auVar16._12_4_ = fStack_dc * fStack_dc + fStack_e4 * fStack_e4;
    fVar30 = auVar16._4_4_ + auVar16._0_4_;
    fVar31 = auVar16._8_4_ + auVar16._4_4_;
    fVar32 = auVar16._12_4_ + auVar16._8_4_;
    fVar33 = auVar16._0_4_ + auVar16._12_4_;
    auVar1._4_4_ = fVar31;
    auVar1._0_4_ = fVar30;
    auVar1._8_4_ = fVar32;
    auVar1._12_4_ = fVar33;
    auVar9 = rsqrtps(auVar16,auVar1);
    fVar20 = auVar9._0_4_;
    fVar21 = auVar9._4_4_;
    fVar22 = auVar9._8_4_;
    fVar23 = auVar9._12_4_;
    fVar20 = (fVar46 - fVar20 * fVar20 * fVar30 * fVar46) * fVar20 + fVar20;
    fVar21 = (fVar47 - fVar21 * fVar21 * fVar31 * fVar47) * fVar21 + fVar21;
    fVar22 = (fVar48 - fVar22 * fVar22 * fVar32 * fVar48) * fVar22 + fVar22;
    fVar23 = (fVar3 - fVar23 * fVar23 * fVar33 * fVar3) * fVar23 + fVar23;
    auVar9._4_4_ = fStack_a4;
    auVar9._0_4_ = local_a8;
    auVar9._8_4_ = fStack_a0;
    fVar20 = (float)(((uint)(((fVar46 - fVar20 * fVar20 * fVar30 * fVar46) * fVar20 + fVar20) *
                            local_e8) ^ _DAT_146b07a80) & -(uint)(1e-08 <= fVar30) ^ _DAT_146b07a80)
    ;
    fVar21 = (float)(((uint)(((fVar47 - fVar21 * fVar21 * fVar31 * fVar47) * fVar21 + fVar21) *
                            fStack_e4) ^ uRam0000000146b07a84) & -(uint)(1e-08 <= fVar31) ^
                    uRam0000000146b07a84);
    fVar22 = (float)(((uint)(((fVar48 - fVar22 * fVar22 * fVar32 * fVar48) * fVar22 + fVar22) *
                            fStack_e0) ^ uRam0000000146b07a88) & -(uint)(1e-08 <= fVar32) ^
                    uRam0000000146b07a88);
    fVar23 = (float)(((uint)(((fVar3 - fVar23 * fVar23 * fVar33 * fVar3) * fVar23 + fVar23) *
                            fStack_dc) ^ uRam0000000146b07a8c) & -(uint)(1e-08 <= fVar33) ^
                    uRam0000000146b07a8c);
    auVar9._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 4) = auVar9;
    *param_1 = fVar20;
    param_1[1] = fVar21;
    param_1[2] = fVar22;
    param_1[3] = fVar23;
  }
  return param_1;
}



// FUNCTION 1426bc260 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FRigidBodyIndexPair,bool>,TDefaultMapHashableKeyFuncs<FRigidBodyIndexPair,bool,0>,FDefaultSetAllocator>
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



// FUNCTION 1426bc310 Contains body=178 status=ok
// SIG undefined Contains(void)

bool FFormatContainer::Contains(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 local_res8;
  
  lVar3 = 0;
  lVar2 = *param_1;
  iVar1 = 0;
  uVar4 = (longlong)(int)param_1[1];
  lVar7 = lVar3;
  local_res8 = param_2;
  if ((int)param_1[1] != 0) {
    do {
      uVar5 = uVar4 >> 1;
      iVar1 = FName::Compare((uVar5 + lVar7) * 0x10 + lVar2,&local_res8);
      if (iVar1 < 0) {
        lVar7 = (ulonglong)((uint)uVar4 & 1) + uVar5 + lVar7;
      }
      uVar4 = uVar5;
    } while (uVar5 != 0);
    iVar1 = (int)param_1[1];
  }
  iVar6 = (int)lVar7;
  if ((ulonglong)(longlong)iVar6 < (ulonglong)(longlong)iVar1) {
    lVar2 = (longlong)iVar6 * 0x10;
    iVar1 = FName::Compare(&local_res8,*param_1 + lVar2);
    if ((-1 < iVar1) && (iVar6 != -1)) {
      lVar3 = *param_1 + 8 + lVar2;
    }
  }
  return lVar3 != 0;
}



// FUNCTION 1426bc3d0 FUN_1426bc3d0 body=777 status=ok
// SIG undefined FUN_1426bc3d0(void)

ulonglong FUN_1426bc3d0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  lVar7 = param_1[2];
  lVar5 = (longlong)(int)param_1[3] * 0xe0 + lVar7;
  for (; lVar7 != lVar5; lVar7 = lVar7 + 0xe0) {
    plVar2 = *(longlong **)(lVar7 + 0x50);
    plVar1 = plVar2 + *(int *)(lVar7 + 0x58);
    plVar4 = plVar2;
    if (plVar2 != plVar1) {
LAB_1426bc420:
      if (*plVar4 == 0) goto code_r0x0001426bc425;
      plVar6 = (longlong *)*param_2;
      plVar4 = plVar6 + (int)param_2[1];
      for (; plVar6 != plVar4; plVar6 = plVar6 + 1) {
        if (plVar2 != plVar1) {
          plVar3 = plVar2;
          do {
            if (*plVar3 == *plVar6) goto LAB_1426bc6c6;
            plVar3 = plVar3 + 1;
          } while (plVar3 != plVar1);
        }
      }
    }
LAB_1426bc46b:
  }
  lVar7 = param_1[6];
  lVar5 = (longlong)(int)param_1[7] * 0xd0 + lVar7;
  for (; lVar7 != lVar5; lVar7 = lVar7 + 0xd0) {
    plVar2 = *(longlong **)(lVar7 + 0x50);
    plVar1 = plVar2 + *(int *)(lVar7 + 0x58);
    plVar4 = plVar2;
    if (plVar2 != plVar1) {
LAB_1426bc4b0:
      if (*plVar4 == 0) goto code_r0x0001426bc4b5;
      plVar6 = (longlong *)*param_2;
      plVar4 = plVar6 + (int)param_2[1];
      for (; plVar6 != plVar4; plVar6 = plVar6 + 1) {
        if (plVar2 != plVar1) {
          plVar3 = plVar2;
          do {
            if (*plVar3 == *plVar6) goto LAB_1426bc6c6;
            plVar3 = plVar3 + 1;
          } while (plVar3 != plVar1);
        }
      }
    }
LAB_1426bc4fb:
  }
  lVar7 = param_1[4];
  lVar5 = (longlong)(int)param_1[5] * 0xd0 + lVar7;
  for (; lVar7 != lVar5; lVar7 = lVar7 + 0xd0) {
    plVar2 = *(longlong **)(lVar7 + 0x50);
    plVar1 = plVar2 + *(int *)(lVar7 + 0x58);
    plVar4 = plVar2;
    if (plVar2 != plVar1) {
LAB_1426bc540:
      if (*plVar4 == 0) goto code_r0x0001426bc545;
      plVar6 = (longlong *)*param_2;
      plVar4 = plVar6 + (int)param_2[1];
      for (; plVar6 != plVar4; plVar6 = plVar6 + 1) {
        if (plVar2 != plVar1) {
          plVar3 = plVar2;
          do {
            if (*plVar3 == *plVar6) goto LAB_1426bc6c6;
            plVar3 = plVar3 + 1;
          } while (plVar3 != plVar1);
        }
      }
    }
LAB_1426bc58b:
  }
  lVar7 = *param_1;
  lVar5 = (longlong)(int)param_1[1] * 0xb0 + lVar7;
  for (; lVar7 != lVar5; lVar7 = lVar7 + 0xb0) {
    plVar2 = *(longlong **)(lVar7 + 0x50);
    plVar1 = plVar2 + *(int *)(lVar7 + 0x58);
    plVar4 = plVar2;
    if (plVar2 != plVar1) {
LAB_1426bc5d0:
      if (*plVar4 == 0) goto code_r0x0001426bc5d5;
      plVar6 = (longlong *)*param_2;
      plVar4 = plVar6 + (int)param_2[1];
      for (; plVar6 != plVar4; plVar6 = plVar6 + 1) {
        if (plVar2 != plVar1) {
          plVar3 = plVar2;
          do {
            if (*plVar3 == *plVar6) goto LAB_1426bc6c6;
            plVar3 = plVar3 + 1;
          } while (plVar3 != plVar1);
        }
      }
    }
LAB_1426bc61b:
  }
  lVar7 = param_1[8];
  plVar3 = (longlong *)(longlong)(int)param_1[9];
  lVar5 = (longlong)plVar3 * 0x88 + lVar7;
  while( true ) {
    if (lVar7 == lVar5) {
      return (ulonglong)plVar3 & 0xffffffffffffff00;
    }
    plVar2 = *(longlong **)(lVar7 + 0x50);
    plVar1 = plVar2 + *(int *)(lVar7 + 0x58);
    plVar3 = (longlong *)(longlong)*(int *)(lVar7 + 0x58);
    plVar4 = plVar2;
    if (plVar2 != plVar1) break;
LAB_1426bc6a7:
    lVar7 = lVar7 + 0x88;
  }
LAB_1426bc660:
  if (*plVar4 == 0) goto code_r0x0001426bc665;
  plVar6 = (longlong *)*param_2;
  plVar3 = (longlong *)(longlong)(int)param_2[1];
  plVar4 = plVar6 + (longlong)plVar3;
  for (; plVar6 != plVar4; plVar6 = plVar6 + 1) {
    plVar3 = plVar2;
    if (plVar2 != plVar1) {
      do {
        if (*plVar3 == *plVar6) {
LAB_1426bc6c6:
          return CONCAT71((int7)((ulonglong)plVar3 >> 8),1);
        }
        plVar3 = plVar3 + 1;
      } while (plVar3 != plVar1);
    }
  }
  goto LAB_1426bc6a7;
code_r0x0001426bc425:
  plVar4 = plVar4 + 1;
  if (plVar4 == plVar1) goto LAB_1426bc46b;
  goto LAB_1426bc420;
code_r0x0001426bc4b5:
  plVar4 = plVar4 + 1;
  if (plVar4 == plVar1) goto LAB_1426bc4fb;
  goto LAB_1426bc4b0;
code_r0x0001426bc545:
  plVar4 = plVar4 + 1;
  if (plVar4 == plVar1) goto LAB_1426bc58b;
  goto LAB_1426bc540;
code_r0x0001426bc5d5:
  plVar4 = plVar4 + 1;
  if (plVar4 == plVar1) goto LAB_1426bc61b;
  goto LAB_1426bc5d0;
code_r0x0001426bc665:
  plVar4 = plVar4 + 1;
  plVar3 = (longlong *)0x0;
  if (plVar4 == plVar1) goto LAB_1426bc6a7;
  goto LAB_1426bc660;
}



// FUNCTION 1426bc6e0 FUN_1426bc6e0 body=9 status=ok
// SIG undefined FUN_1426bc6e0(void)

void FUN_1426bc6e0(longlong param_1)

{
  FUN_1426bc3d0(param_1 + 0x28);
  return;
}



// FUNCTION 1426bc6f0 FUN_1426bc6f0 body=104 status=ok
// SIG undefined FUN_1426bc6f0(void)

undefined8 FUN_1426bc6f0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x40);
  plVar1 = plVar3 + *(int *)(param_1 + 0x48);
  while( true ) {
    if (plVar3 == plVar1) {
      return 0;
    }
    if ((*plVar3 != 0) && (cVar2 = FUN_1426bc3d0(*plVar3 + 0x28,param_2), cVar2 != '\0')) break;
    plVar3 = plVar3 + 1;
  }
  return 1;
}



// FUNCTION 1426bc760 FUN_1426bc760 body=190 status=ok
// SIG undefined FUN_1426bc760(void)

void FUN_1426bc760(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  FUN_1426c0c50(param_1 + 0x28);
  FUN_140c6d780(param_1 + 0x28);
  uVar2 = 0;
  uVar4 = uVar2;
  if (0 < *(int *)(param_1 + 0x60)) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x58);
      uVar3 = (int)uVar4 + 1;
      *(undefined8 *)(uVar2 + 0xc0 + lVar1) = 0;
      *(undefined8 *)(uVar2 + 200 + lVar1) = 0;
      uVar2 = uVar2 + 0xd0;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < *(int *)(param_1 + 0x60));
  }
  thunk_FUN_142686190(param_1 + 0x140,param_2 + 0x140);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_2 + 0x98);
  *(byte *)(param_1 + 0x99) =
       *(byte *)(param_1 + 0x99) ^ (*(byte *)(param_2 + 0x99) ^ *(byte *)(param_1 + 0x99)) & 8;
  *(undefined1 *)(param_1 + 0x9c) = *(undefined1 *)(param_2 + 0x9c);
  return;
}



// FUNCTION 1426bc820 CopyConstraintParamsFrom body=283 status=ok
// SIG undefined CopyConstraintParamsFrom(void)

void FConstraintInstance::CopyConstraintParamsFrom(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  param_1[4] = param_2[4];
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  param_1[0xe] = param_2[0xe];
  *(undefined8 *)(param_1 + 0xf) = *(undefined8 *)(param_2 + 0xf);
  param_1[0x11] = param_2[0x11];
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  param_1[0x14] = param_2[0x14];
  *(undefined8 *)(param_1 + 0x15) = *(undefined8 *)(param_2 + 0x15);
  param_1[0x17] = param_2[0x17];
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  param_1[0x1a] = param_2[0x1a];
  *(undefined8 *)(param_1 + 0x1b) = *(undefined8 *)(param_2 + 0x1b);
  param_1[0x1d] = param_2[0x1d];
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = param_1[0x21] ^ (param_2[0x21] ^ param_1[0x21]) & 1;
  param_1[0x22] = param_2[0x22];
  FConstraintProfileProperties::operator=(param_1 + 0x23,param_2 + 0x23);
  uVar1 = param_2[0x65];
  uVar2 = param_2[0x66];
  uVar3 = param_2[0x67];
  param_1[100] = param_2[100];
  param_1[0x65] = uVar1;
  param_1[0x66] = uVar2;
  param_1[0x67] = uVar3;
  param_1[0x68] = param_2[0x68];
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x6a,param_2 + 0x6a);
  return;
}



// FUNCTION 1426bc940 CopyProfilePropertiesFrom body=78 status=ok
// SIG undefined CopyProfilePropertiesFrom(void)

void FConstraintInstance::CopyProfilePropertiesFrom(longlong param_1)

{
  longlong local_res8 [4];
  undefined1 *local_18;
  longlong *plStack_10;
  
  FConstraintProfileProperties::operator=(param_1 + 0x8c);
  plStack_10 = local_res8;
  local_18 = &LAB_1426babd0;
  local_res8[0] = param_1;
  ExecuteOnUnbrokenJointReadWrite(param_1,&local_18);
  return;
}



// FUNCTION 1426bc990 FUN_1426bc990 body=126 status=ok
// SIG undefined FUN_1426bc990(void)

void FUN_1426bc990(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_145164870;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    if ((((longlong *)(param_1 + 0x18) != puVar2 + 3) && (*(int *)(param_1 + 0x20) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 0x18), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))();
    }
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_GetPoolName_1451648b8;
  }
  return;
}



// FUNCTION 1426bca10 FUN_1426bca10 body=138 status=ok
// SIG undefined FUN_1426bca10(void)

void FUN_1426bca10(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1451647e0;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = 0;
    *(undefined4 *)(puVar2 + 5) = 0;
    if ((((longlong *)(param_1 + 0x20) != puVar2 + 4) && (*(int *)(param_1 + 0x28) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 0x20), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))();
    }
    puVar2[6] = *(undefined8 *)(param_1 + 0x30);
    *puVar2 = &PTR_FUN_145164828;
  }
  return;
}



// FUNCTION 1426bcaa0 FUN_1426bcaa0 body=732 status=ok
// SIG undefined FUN_1426bcaa0(void)

void FUN_1426bcaa0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 local_res8 [8];
  longlong local_138;
  int local_130;
  longlong local_128;
  int local_120;
  longlong local_118 [2];
  undefined1 local_108 [128];
  char local_88;
  char local_87;
  char local_85;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [80];
  
  if (*(char *)((longlong)param_1 + 0x99) < '\0') {
    return;
  }
  if ((*(byte *)((longlong)param_1 + 0x9a) & 4) != 0) {
    return;
  }
  bVar1 = true;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b07d40) && (_Init_thread_header(&DAT_146b07d40), DAT_146b07d40 == -1))
  {
    FName::FName(&DAT_146b07d38,"PhysXPC",1);
    _Init_thread_footer(&DAT_146b07d40);
  }
  lVar4 = FUN_1426c6570(param_1,DAT_146b07d38,0);
  if (lVar4 == 0) {
    cVar2 = FUN_1426cb300(param_1);
    if (cVar2 != '\0') {
      puVar6 = (undefined8 *)FName::FName(local_res8,"PhysXCooking",1);
      uVar8 = *puVar6;
      uVar7 = FUN_14168dc80();
      uVar8 = FUN_141690010(uVar7,uVar8);
      FUN_1426d45e0(local_108,uVar8);
      uVar3 = FUN_1426c8bd0(param_1);
      FUN_1426c5fa0(param_1,local_108,uVar3);
      if ((((local_85 != '\0') || (local_88 != '\0')) || (local_87 != '\0')) &&
         (cVar2 = IsRuntimeCookingEnabled(), cVar2 != '\0')) {
        cVar2 = FUN_1426db690(local_108);
        if (cVar2 == '\0') {
          *(byte *)((longlong)param_1 + 0x9a) = *(byte *)((longlong)param_1 + 0x9a) | 1;
        }
        else {
          FUN_1426c08c0(param_1,local_78,local_68,local_58);
          bVar1 = false;
          *(byte *)((longlong)param_1 + 0x9a) = *(byte *)((longlong)param_1 + 0x9a) & 0xfe;
        }
      }
      FUN_1426b6960(local_108);
      if (!bVar1) goto LAB_1426bcd19;
    }
    FUN_1426bada0(param_1);
  }
  else {
    if (*(int *)(lVar4 + 0x40) != 0) {
      return;
    }
    FUN_1426d4660(&local_138,lVar4,param_1 + 0x22);
    plVar5 = (longlong *)UAudioSettings::GetPrivateStaticClass();
    lVar4 = plVar5[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x368))(plVar5);
      lVar4 = plVar5[0x1f];
    }
    cVar2 = *(char *)(lVar4 + 0xa9);
    if (*(char *)((longlong)param_1 + 0x9c) != '\0') {
      cVar2 = *(char *)((longlong)param_1 + 0x9c);
    }
    if ((cVar2 != '\x03') &&
       ((((*(byte *)((longlong)param_1 + 0x99) & 0x10) != 0 && (local_130 != (int)param_1[0xc])) ||
        (((*(byte *)((longlong)param_1 + 0x99) & 0x40) != 0 && (local_120 != (int)param_1[0xc]))))))
    {
      (**(code **)(*param_1 + 0x290))(param_1);
      (**(code **)(*param_1 + 0x278))(param_1);
      if (local_118[0] != 0) {
        FMemory::Free();
      }
      if (local_128 != 0) {
        FMemory::Free();
      }
      if (local_138 == 0) {
        return;
      }
      FMemory::Free();
      return;
    }
    FUN_1426c08c0(param_1,&local_138,&local_128,local_118);
    if (local_118[0] != 0) {
      FMemory::Free();
    }
    if (local_128 != 0) {
      FMemory::Free();
    }
    if (local_138 != 0) {
      FMemory::Free();
    }
  }
LAB_1426bcd19:
  *(byte *)((longlong)param_1 + 0x99) = *(byte *)((longlong)param_1 + 0x99) | 0x80;
  return;
}



// FUNCTION 1426bcd80 FUN_1426bcd80 body=1334 status=ok
// SIG undefined FUN_1426bcd80(void)

void FUN_1426bcd80(longlong param_1,longlong **param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong **pplVar15;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  longlong *local_e8;
  int local_e0;
  longlong *local_d8;
  int local_d0;
  longlong *local_c8;
  int local_c0;
  longlong *local_b8;
  int local_b0;
  longlong *local_a8;
  int local_a0;
  longlong *local_98;
  int local_90;
  longlong *local_88;
  int local_80;
  longlong *local_78 [2];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined4 local_50;
  undefined1 local_48 [32];
  
  lVar11 = *(longlong *)(param_1 + 0x20);
  if (lVar11 != 0) {
    lVar8 = FUN_1428e7a40();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar5) &&
       (((lVar8 = *(longlong *)(lVar11 + 0x120), lVar8 != 0 ||
         (lVar8 = FUN_1423407b0(lVar11), lVar8 != 0)) &&
        (cVar7 = UWorld::IsGameWorld(lVar8), cVar7 != '\0')))) {
      puVar9 = (undefined8 *)FName::FName(local_res8,"RuntimePhysXCooking",1);
      uVar3 = *puVar9;
      uVar10 = FUN_14168dc80();
      lVar11 = FUN_141690010(uVar10,uVar3);
      if (lVar11 == 0) {
        local_e8 = (longlong *)0x0;
        local_e0 = 0;
        if (((param_2 != &local_e8) && (*(int *)(param_2 + 1) != 0)) &&
           (plVar13 = *param_2, plVar13 != (longlong *)0x0)) {
          (**(code **)(*plVar13 + 0x30))(plVar13,&local_e8);
        }
        FUN_1426bada0(param_1);
        *(byte *)(param_1 + 0x99) = *(byte *)(param_1 + 0x99) | 0x80;
        if (((local_e0 == 0) || (local_e8 == (longlong *)0x0)) ||
           (cVar7 = (**(code **)(*local_e8 + 0x18))(), cVar7 == '\0')) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          plVar13 = (longlong *)0x0;
          if (local_e0 != 0) {
            plVar13 = local_e8;
          }
          (**(code **)(*plVar13 + 0x40))(plVar13);
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_e8);
        goto LAB_1426bd2a1;
      }
    }
  }
  uVar10 = 0;
  puVar9 = (undefined8 *)FName::FName(local_res20,"PhysXCooking",1);
  uVar3 = *puVar9;
  uVar12 = FUN_14168dc80();
  lVar11 = FUN_141690010(uVar12,uVar3);
  if (lVar11 == 0) {
    local_c8 = (longlong *)0x0;
    local_c0 = 0;
    if (((param_2 != &local_c8) && (*(int *)(param_2 + 1) != 0)) &&
       (plVar13 = *param_2, plVar13 != (longlong *)0x0)) {
      (**(code **)(*plVar13 + 0x30))(plVar13,&local_c8);
    }
    FUN_1426bada0(param_1);
    *(byte *)(param_1 + 0x99) = *(byte *)(param_1 + 0x99) | 0x80;
    if (((local_c0 == 0) || (local_c8 == (longlong *)0x0)) ||
       (cVar7 = (**(code **)(*local_c8 + 0x18))(), cVar7 == '\0')) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      plVar13 = (longlong *)0x0;
      if (local_c0 != 0) {
        plVar13 = local_c8;
      }
      (**(code **)(*plVar13 + 0x40))(plVar13);
    }
    pplVar15 = &local_c8;
  }
  else {
    lVar8 = operator_new(0xf8);
    plVar13 = (longlong *)0x0;
    if (lVar8 != 0) {
      plVar13 = (longlong *)FUN_1426d45e0(lVar8,lVar11);
    }
    plVar14 = (longlong *)UAudioSettings::GetPrivateStaticClass();
    lVar11 = plVar14[0x1f];
    if (lVar11 == 0) {
      (**(code **)(*plVar14 + 0x368))(plVar14);
      lVar11 = plVar14[0x1f];
    }
    FUN_1426c5fa0(param_1,plVar13,
                  CONCAT71((int7)((ulonglong)uVar10 >> 8),-(*(char *)(lVar11 + 0xab) != '\0')) &
                  0xffffffffffffff04);
    if (((*(char *)((longlong)plVar13 + 0x83) == '\0') && ((char)plVar13[0x10] == '\0')) &&
       (*(char *)((longlong)plVar13 + 0x81) == '\0')) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      local_b8 = (longlong *)0x0;
      local_b0 = 0;
      if (((param_2 != &local_b8) && (*(int *)(param_2 + 1) != 0)) &&
         (plVar14 = *param_2, plVar14 != (longlong *)0x0)) {
        (**(code **)(*plVar14 + 0x30))(plVar14,&local_b8);
      }
      local_88 = (longlong *)0x0;
      local_80 = 0;
      local_a8 = (longlong *)0x0;
      local_a0 = 0;
      if ((local_b0 != 0) && (local_b8 != (longlong *)0x0)) {
        (**(code **)(*local_b8 + 0x30))(local_b8,&local_a8);
      }
      lVar11 = operator_new(0x38,&local_88);
      if (lVar11 != 0) {
        local_68 = 0;
        local_60 = 0;
        if ((local_a0 != 0) && (local_a8 != (longlong *)0x0)) {
          (**(code **)(*local_a8 + 0x30))(local_a8,&local_68);
        }
        FUN_1426b4e10(lVar11,param_1,FUN_1426c0810,plVar13,&local_68);
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
      local_98 = (longlong *)0x0;
      local_90 = 0;
      if ((local_80 != 0) && (local_88 != (longlong *)0x0)) {
        (**(code **)(*local_88 + 0x30))(local_88,&local_98);
      }
      plVar14 = (longlong *)FMemory::Realloc(0,0x30);
      local_78[0] = plVar14;
      if (plVar14 != (longlong *)0x0) {
        local_58 = 0;
        local_50 = 0;
        if ((local_90 != 0) && (local_98 != (longlong *)0x0)) {
          (**(code **)(*local_98 + 0x30))(local_98,&local_58);
        }
        FUN_1426b4d30(plVar14,plVar13,FUN_1426db4a0,&local_58);
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
      plVar13 = (longlong *)FUN_141d29000(local_48,0,0xff);
      lVar11 = *plVar13;
      pplVar15 = (longlong **)(lVar11 + 0x10);
      *pplVar15 = (longlong *)0x0;
      *(undefined4 *)(lVar11 + 0x18) = 0;
      if ((local_78 != pplVar15) && (plVar14 != (longlong *)0x0)) {
        (**(code **)(*plVar14 + 0x30))(plVar14,pplVar15);
      }
      *(undefined4 *)(lVar11 + 0x20) = 0xff;
      lVar11 = *plVar13;
      lVar6 = plVar13[2];
      lVar8 = plVar13[1];
      lVar4 = *(longlong *)(lVar11 + 0x30);
      piVar1 = (int *)(lVar4 + 0x48);
      if (lVar4 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        plVar14 = local_78[0];
      }
      FUN_1409691d0(lVar11,lVar8,(int)lVar6,1);
      if (lVar4 != 0) {
        LOCK();
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar14 = local_78[0];
        if (iVar2 == 1) {
          FGraphEvent::Recycle(lVar4);
          plVar14 = local_78[0];
        }
      }
      if (plVar14 != (longlong *)0x0) {
        (**(code **)(*plVar14 + 0x28))(plVar14,0);
        lVar11 = FMemory::Realloc(plVar14,0,0);
        if (lVar11 != 0) {
          FMemory::Free(lVar11);
        }
      }
      goto LAB_1426bd2a1;
    }
    FUN_1426b6960(plVar13);
    FMemory::operator_delete(plVar13,0xf8);
    local_d8 = (longlong *)0x0;
    local_d0 = 0;
    if (((param_2 != &local_d8) && (*(int *)(param_2 + 1) != 0)) &&
       (plVar13 = *param_2, plVar13 != (longlong *)0x0)) {
      (**(code **)(*plVar13 + 0x30))(plVar13,&local_d8);
    }
    FUN_1426bada0(param_1);
    *(byte *)(param_1 + 0x99) = *(byte *)(param_1 + 0x99) | 0x80;
    if (((local_d0 == 0) || (local_d8 == (longlong *)0x0)) ||
       (cVar7 = (**(code **)(*local_d8 + 0x18))(), cVar7 == '\0')) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      plVar13 = (longlong *)0x0;
      if (local_d0 != 0) {
        plVar13 = local_d8;
      }
      (**(code **)(*plVar13 + 0x40))(plVar13);
    }
    pplVar15 = &local_d8;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(pplVar15);
LAB_1426bd2a1:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2);
  return;
}



// FUNCTION 1426bd2c0 FUN_1426bd2c0 body=372 status=ok
// SIG undefined FUN_1426bd2c0(void)

undefined8 * FUN_1426bd2c0(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar8 = (longlong)&PTR_FUN_145164550;
  *(undefined1 *)(plVar8 + 3) = 0;
  plVar8[4] = local_res10;
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



// FUNCTION 1426bd440 FUN_1426bd440 body=372 status=ok
// SIG undefined FUN_1426bd440(void)

undefined8 * FUN_1426bd440(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar8 = (longlong)&PTR_FUN_145164540;
  *(undefined1 *)(plVar8 + 3) = 0;
  plVar8[4] = local_res10;
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



// FUNCTION 1426bd5c0 FUN_1426bd5c0 body=125 status=ok
// SIG undefined FUN_1426bd5c0(void)

void FUN_1426bd5c0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uStack_c;
  
  plVar2 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  plVar3 = plVar2;
  do {
    if (plVar3 == plVar2 + (longlong)iVar1 * 2) {
LAB_1426bd60f:
      *(int *)(param_1 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
      }
      plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x10);
      *plVar2 = param_2;
      plVar2[1] = CONCAT44(uStack_c,6);
      return;
    }
    if (*plVar3 == param_2) {
      if ((int)((longlong)plVar3 - (longlong)plVar2 >> 4) != -1) {
        return;
      }
      goto LAB_1426bd60f;
    }
    plVar3 = plVar3 + 2;
  } while( true );
}



// FUNCTION 1426bd640 FUN_1426bd640 body=130 status=ok
// SIG undefined FUN_1426bd640(void)

void FUN_1426bd640(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uStack_c;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar1 = (int)param_1[1];
    for (plVar3 = plVar2; plVar3 != plVar2 + (longlong)iVar1 * 2; plVar3 = plVar3 + 2) {
      if (*plVar3 == param_2) {
        if ((int)((longlong)plVar3 - (longlong)plVar2 >> 4) != -1) {
          return;
        }
        break;
      }
    }
    *(int *)(param_1 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
    }
    plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x10);
    *plVar2 = param_2;
    plVar2[1] = CONCAT44(uStack_c,7);
  }
  return;
}



// FUNCTION 1426bd6d0 FUN_1426bd6d0 body=125 status=ok
// SIG undefined FUN_1426bd6d0(void)

void FUN_1426bd6d0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uStack_c;
  
  plVar2 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  plVar3 = plVar2;
  do {
    if (plVar3 == plVar2 + (longlong)iVar1 * 2) {
LAB_1426bd71f:
      *(int *)(param_1 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
      }
      plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x10);
      *plVar2 = param_2;
      plVar2[1] = CONCAT44(uStack_c,2);
      return;
    }
    if (*plVar3 == param_2) {
      if ((int)((longlong)plVar3 - (longlong)plVar2 >> 4) != -1) {
        return;
      }
      goto LAB_1426bd71f;
    }
    plVar3 = plVar3 + 2;
  } while( true );
}



// FUNCTION 1426bd750 FUN_1426bd750 body=130 status=ok
// SIG undefined FUN_1426bd750(void)

void FUN_1426bd750(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uStack_c;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar1 = (int)param_1[1];
    for (plVar3 = plVar2; plVar3 != plVar2 + (longlong)iVar1 * 2; plVar3 = plVar3 + 2) {
      if (*plVar3 == param_2) {
        if ((int)((longlong)plVar3 - (longlong)plVar2 >> 4) != -1) {
          return;
        }
        break;
      }
    }
    *(int *)(param_1 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
    }
    plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x10);
    *plVar2 = param_2;
    plVar2[1] = CONCAT44(uStack_c,4);
  }
  return;
}



// FUNCTION 1426bd7e0 FUN_1426bd7e0 body=130 status=ok
// SIG undefined FUN_1426bd7e0(void)

void FUN_1426bd7e0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uStack_c;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar1 = (int)param_1[1];
    for (plVar3 = plVar2; plVar3 != plVar2 + (longlong)iVar1 * 2; plVar3 = plVar3 + 2) {
      if (*plVar3 == param_2) {
        if ((int)((longlong)plVar3 - (longlong)plVar2 >> 4) != -1) {
          return;
        }
        break;
      }
    }
    *(int *)(param_1 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
    }
    plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x10);
    *plVar2 = param_2;
    plVar2[1] = CONCAT44(uStack_c,5);
  }
  return;
}



// FUNCTION 1426bd870 FUN_1426bd870 body=125 status=ok
// SIG undefined FUN_1426bd870(void)

void FUN_1426bd870(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uStack_c;
  
  plVar2 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  plVar3 = plVar2;
  do {
    if (plVar3 == plVar2 + (longlong)iVar1 * 2) {
LAB_1426bd8bf:
      *(int *)(param_1 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
      }
      plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x10);
      *plVar2 = param_2;
      plVar2[1] = CONCAT44(uStack_c,3);
      return;
    }
    if (*plVar3 == param_2) {
      if ((int)((longlong)plVar3 - (longlong)plVar2 >> 4) != -1) {
        return;
      }
      goto LAB_1426bd8bf;
    }
    plVar3 = plVar3 + 2;
  } while( true );
}



// FUNCTION 1426bd8f0 FUN_1426bd8f0 body=125 status=ok
// SIG undefined FUN_1426bd8f0(void)

void FUN_1426bd8f0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uStack_c;
  
  plVar2 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  plVar3 = plVar2;
  do {
    if (plVar3 == plVar2 + (longlong)iVar1 * 2) {
LAB_1426bd93f:
      *(int *)(param_1 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
      }
      plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x10);
      *plVar2 = param_2;
      plVar2[1] = (ulonglong)uStack_c << 0x20;
      return;
    }
    if (*plVar3 == param_2) {
      if ((int)((longlong)plVar3 - (longlong)plVar2 >> 4) != -1) {
        return;
      }
      goto LAB_1426bd93f;
    }
    plVar3 = plVar3 + 2;
  } while( true );
}



// FUNCTION 1426bd970 FUN_1426bd970 body=125 status=ok
// SIG undefined FUN_1426bd970(void)

void FUN_1426bd970(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uStack_c;
  
  plVar2 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  plVar3 = plVar2;
  do {
    if (plVar3 == plVar2 + (longlong)iVar1 * 2) {
LAB_1426bd9bf:
      *(int *)(param_1 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
      }
      plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x10);
      *plVar2 = param_2;
      plVar2[1] = CONCAT44(uStack_c,1);
      return;
    }
    if (*plVar3 == param_2) {
      if ((int)((longlong)plVar3 - (longlong)plVar2 >> 4) != -1) {
        return;
      }
      goto LAB_1426bd9bf;
    }
    plVar3 = plVar3 + 2;
  } while( true );
}



// FUNCTION 1426bd9f0 FUN_1426bd9f0 body=24 status=ok
// SIG undefined FUN_1426bd9f0(void)

undefined1 FUN_1426bd9f0(longlong param_1)

{
  if (param_1 == 0) {
    param_1 = *(longlong *)(DAT_146b17150 + 0x6c8);
  }
  return *(undefined1 *)(param_1 + 0x50);
}



// FUNCTION 1426bda10 FUN_1426bda10 body=59 status=ok
// SIG undefined FUN_1426bda10(void)

ulonglong FUN_1426bda10(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  
  puVar3 = *(ulonglong **)(param_1 + 0xbf0);
  uVar2 = (ulonglong)*(int *)(param_1 + 0xbf8);
  puVar1 = puVar3 + uVar2;
  while( true ) {
    if (puVar3 == puVar1) {
      return uVar2 & 0xffffffffffffff00;
    }
    uVar2 = *puVar3;
    if (0.0 < *(float *)(uVar2 + 0xf4)) break;
    puVar3 = puVar3 + 1;
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}



// FUNCTION 1426bda50 FUN_1426bda50 body=1468 status=ok
// SIG undefined FUN_1426bda50(void)

void FUN_1426bda50(longlong param_1,longlong *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  longlong lVar7;
  longlong lVar8;
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
  float local_158;
  float local_154;
  float local_150;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  undefined8 local_108;
  float local_100;
  undefined8 local_fc;
  float local_f4;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [184];
  
  pfVar5 = &local_100;
  lVar7 = 2;
  fVar19 = *param_4 * 0.5 * *(float *)(param_1 + 200);
  fVar20 = param_4[1] * 0.5 * *(float *)(param_1 + 0xcc);
  fVar21 = param_4[2] * 0.5 * *(float *)(param_1 + 0xd0);
  local_108 = CONCAT44(fVar20,fVar19);
  fVar16 = *param_4 * -0.5 * *(float *)(param_1 + 200);
  local_100 = fVar21;
  fVar17 = param_4[1] * -0.5 * *(float *)(param_1 + 0xcc);
  fVar18 = param_4[2] * -0.5 * *(float *)(param_1 + 0xd0);
  local_fc = CONCAT44(fVar17,fVar16);
  local_f4 = fVar18;
  local_150 = fVar18;
  do {
    pfVar6 = &local_100;
    lVar8 = 2;
    do {
      fVar14 = pfVar6[-1];
      FLinearColor::FLinearColor(local_f0,&stack0x00000028);
      fVar1 = *param_3;
      fVar2 = param_3[1];
      fVar3 = param_3[2];
      fVar4 = param_3[3];
      fVar12 = pfVar5[-2] * param_3[8];
      fVar13 = fVar14 * param_3[9];
      fVar15 = fVar18 * param_3[10];
      fVar9 = fVar15 * fVar2 - fVar13 * fVar3;
      fVar10 = fVar12 * fVar3 - fVar15 * fVar1;
      fVar11 = fVar13 * fVar1 - fVar12 * fVar2;
      fVar9 = fVar9 + fVar9;
      fVar10 = fVar10 + fVar10;
      fVar11 = fVar11 + fVar11;
      local_148 = (fVar11 * fVar2 - fVar10 * fVar3) + fVar4 * fVar9 + fVar12 + param_3[4];
      local_144 = (fVar9 * fVar3 - fVar11 * fVar1) + fVar4 * fVar10 + fVar13 + param_3[5];
      local_140 = (fVar10 * fVar1 - fVar9 * fVar2) + fVar4 * fVar11 + fVar15 + param_3[6];
      fVar12 = pfVar5[-2] * param_3[8];
      fVar14 = fVar14 * param_3[9];
      fVar13 = fVar21 * param_3[10];
      fVar9 = fVar13 * fVar2 - fVar14 * fVar3;
      fVar10 = fVar12 * fVar3 - fVar13 * fVar1;
      fVar11 = fVar14 * fVar1 - fVar12 * fVar2;
      fVar9 = fVar9 + fVar9;
      fVar10 = fVar10 + fVar10;
      fVar11 = fVar11 + fVar11;
      local_13c = (fVar11 * fVar2 - fVar10 * fVar3) + fVar4 * fVar9 + fVar12 + param_3[4];
      local_138 = (fVar9 * fVar3 - fVar11 * fVar1) + fVar4 * fVar10 + fVar14 + param_3[5];
      local_134 = (fVar10 * fVar1 - fVar9 * fVar2) + fVar4 * fVar11 + fVar13 + param_3[6];
      (**(code **)(*param_2 + 0x38))(param_2,&local_13c,&local_148,local_f0,0,0,0,0);
      fVar14 = *pfVar6;
      FLinearColor::FLinearColor(local_e0,&stack0x00000028);
      fVar1 = *param_3;
      fVar2 = param_3[1];
      fVar3 = param_3[2];
      fVar4 = param_3[3];
      fVar12 = fVar16 * param_3[8];
      fVar13 = pfVar5[-1] * param_3[9];
      fVar15 = fVar14 * param_3[10];
      fVar9 = fVar15 * fVar2 - fVar13 * fVar3;
      fVar10 = fVar12 * fVar3 - fVar15 * fVar1;
      fVar11 = fVar13 * fVar1 - fVar12 * fVar2;
      fVar9 = fVar9 + fVar9;
      fVar10 = fVar10 + fVar10;
      fVar11 = fVar11 + fVar11;
      local_130 = (fVar11 * fVar2 - fVar10 * fVar3) + fVar4 * fVar9 + fVar12 + param_3[4];
      local_12c = (fVar9 * fVar3 - fVar11 * fVar1) + fVar4 * fVar10 + fVar13 + param_3[5];
      local_128 = (fVar10 * fVar1 - fVar9 * fVar2) + fVar4 * fVar11 + fVar15 + param_3[6];
      fVar12 = fVar19 * param_3[8];
      fVar13 = pfVar5[-1] * param_3[9];
      fVar14 = fVar14 * param_3[10];
      fVar9 = fVar14 * fVar2 - fVar13 * fVar3;
      fVar10 = fVar12 * fVar3 - fVar14 * fVar1;
      fVar11 = fVar13 * fVar1 - fVar12 * fVar2;
      fVar9 = fVar9 + fVar9;
      fVar10 = fVar10 + fVar10;
      fVar11 = fVar11 + fVar11;
      local_124 = (fVar11 * fVar2 - fVar10 * fVar3) + fVar4 * fVar9 + fVar12 + param_3[4];
      local_120 = (fVar9 * fVar3 - fVar11 * fVar1) + fVar4 * fVar10 + fVar13 + param_3[5];
      local_11c = (fVar10 * fVar1 - fVar9 * fVar2) + fVar4 * fVar11 + fVar14 + param_3[6];
      (**(code **)(*param_2 + 0x38))(param_2,&local_124,&local_130,local_e0,0,0,0,0);
      fVar14 = pfVar6[-2];
      FLinearColor::FLinearColor(local_d0,&stack0x00000028);
      fVar1 = *param_3;
      fVar2 = param_3[1];
      fVar3 = param_3[2];
      fVar4 = param_3[3];
      fVar12 = fVar14 * param_3[8];
      fVar13 = fVar17 * param_3[9];
      fVar15 = *pfVar5 * param_3[10];
      fVar9 = fVar15 * fVar2 - fVar13 * fVar3;
      fVar10 = fVar12 * fVar3 - fVar15 * fVar1;
      fVar11 = fVar13 * fVar1 - fVar12 * fVar2;
      fVar9 = fVar9 + fVar9;
      fVar10 = fVar10 + fVar10;
      fVar11 = fVar11 + fVar11;
      local_118 = (fVar11 * fVar2 - fVar10 * fVar3) + fVar4 * fVar9 + fVar12 + param_3[4];
      local_114 = (fVar9 * fVar3 - fVar11 * fVar1) + fVar4 * fVar10 + fVar13 + param_3[5];
      local_110 = (fVar10 * fVar1 - fVar9 * fVar2) + fVar4 * fVar11 + fVar15 + param_3[6];
      fVar14 = fVar14 * param_3[8];
      fVar12 = fVar20 * param_3[9];
      fVar13 = *pfVar5 * param_3[10];
      fVar9 = fVar13 * fVar2 - fVar12 * fVar3;
      fVar10 = fVar14 * fVar3 - fVar13 * fVar1;
      fVar11 = fVar12 * fVar1 - fVar14 * fVar2;
      fVar9 = fVar9 + fVar9;
      fVar10 = fVar10 + fVar10;
      fVar11 = fVar11 + fVar11;
      local_158 = (fVar11 * fVar2 - fVar10 * fVar3) + fVar4 * fVar9 + fVar14 + param_3[4];
      local_154 = (fVar9 * fVar3 - fVar11 * fVar1) + fVar4 * fVar10 + fVar12 + param_3[5];
      local_150 = (fVar10 * fVar1 - fVar9 * fVar2) + fVar4 * fVar11 + fVar13 + param_3[6];
      (**(code **)(*param_2 + 0x38))(param_2,&local_158,&local_118,local_d0,0,0,0,0);
      pfVar6 = pfVar6 + 3;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    pfVar5 = pfVar5 + 3;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return;
}



// FUNCTION 1426be010 FUN_1426be010 body=794 status=ok
// SIG undefined FUN_1426be010(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1426be010(longlong param_1,longlong *param_2,undefined8 param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  byte *pbVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  byte bVar8;
  longlong *plVar9;
  longlong lVar10;
  float fVar11;
  longlong lVar12;
  float *pfVar13;
  ushort uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined1 local_110;
  longlong local_108;
  float local_100;
  undefined4 local_fc;
  float local_f8;
  undefined1 local_f4 [20];
  undefined1 local_e0 [16];
  ushort local_d0;
  ushort local_ce;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  plVar9 = *(longlong **)(param_1 + 0xc0);
  if (plVar9 != (longlong *)0x0) {
    fVar11 = (float)(**(code **)(*plVar9 + 0x28))(plVar9);
    lVar12 = (**(code **)(*plVar9 + 0x30))(plVar9);
    FUN_14162bfb0(param_1 + 0x90,&local_c8,param_3);
    fVar16 = 0.0;
    local_108 = 0;
    local_fc = 0;
    local_100 = fVar11;
    if (0 < (int)fVar11) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_108,0);
    }
    lVar10 = local_108;
    if (fVar11 != 0.0) {
      pfVar13 = (float *)(lVar12 + 8);
      fVar4 = *param_4;
      fVar5 = param_4[1];
      fVar6 = param_4[2];
      fVar15 = fVar16;
      do {
        pfVar1 = pfVar13 + -2;
        lVar12 = (longlong)(int)fVar15;
        fVar15 = (float)((int)fVar15 + 1);
        fVar17 = *pfVar13;
        pfVar2 = pfVar13 + -1;
        pfVar13 = pfVar13 + 3;
        fVar20 = fVar4 * *pfVar1 * local_a8;
        fVar21 = fVar5 * *pfVar2 * fStack_a4;
        fVar22 = fVar6 * fVar17 * fStack_a0;
        fVar17 = fVar22 * fStack_c4 - fVar21 * fStack_c0;
        fVar18 = fVar20 * fStack_c0 - fVar22 * local_c8;
        fVar19 = fVar21 * local_c8 - fVar20 * fStack_c4;
        fVar17 = fVar17 + fVar17;
        fVar18 = fVar18 + fVar18;
        fVar19 = fVar19 + fVar19;
        local_100 = (fVar18 * local_c8 - fVar17 * fStack_c4) + fStack_bc * fVar19 + fVar22 +
                    fStack_b0;
        *(ulonglong *)(local_108 + lVar12 * 0xc) =
             CONCAT44((fVar17 * fStack_c0 - fVar19 * local_c8) + fStack_bc * fVar18 + fVar21 +
                      fStack_b4,
                      (fVar19 * fStack_c4 - fVar18 * fStack_c0) + fStack_bc * fVar17 + fVar20 +
                      local_b8);
        *(float *)(local_108 + 8 + lVar12 * 0xc) = local_100;
      } while ((uint)fVar15 < (uint)fVar11);
    }
    lVar12 = (**(code **)(*plVar9 + 0x38))(plVar9);
    local_108 = lVar12;
    local_f8 = (float)(**(code **)(*plVar9 + 0x40))(plVar9);
    if (local_f8 != 0.0) {
      do {
        (**(code **)(*plVar9 + 0x48))(plVar9,fVar16,local_e0);
        pbVar3 = (byte *)((ulonglong)local_ce + lVar12);
        uVar14 = 0;
        if (local_d0 != 0) {
          do {
            bVar7 = pbVar3[uVar14];
            if ((uint)uVar14 == local_d0 - 1) {
              bVar8 = *pbVar3;
            }
            else {
              bVar8 = pbVar3[(ulonglong)uVar14 + 1];
            }
            FLinearColor::FLinearColor(local_f4,&stack0x00000028);
            local_110 = 0;
            local_118 = 0;
            local_120 = 0;
            local_128 = 0;
            (**(code **)(*param_2 + 0x38))
                      (param_2,lVar10 + (ulonglong)bVar7 * 0xc,lVar10 + (ulonglong)bVar8 * 0xc,
                       local_f4);
            uVar14 = uVar14 + 1;
          } while (uVar14 < local_d0);
        }
        fVar16 = (float)((int)fVar16 + 1);
        lVar12 = local_108;
      } while ((uint)fVar16 < (uint)local_f8);
    }
    if (lVar10 != 0) {
      FMemory::Free(lVar10);
    }
  }
  return;
}



// FUNCTION 1426be330 FUN_1426be330 body=723 status=ok
// SIG undefined FUN_1426be330(void)

void FUN_1426be330(longlong param_1,undefined8 param_2,float *param_3,float *param_4)

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
  float local_78;
  float local_74;
  float local_70;
  float local_68;
  float local_64;
  float local_60;
  float local_58;
  float local_54;
  float local_50;
  float local_48;
  float local_44;
  float local_40;
  undefined1 local_38 [48];
  
  local_78 = param_3[4];
  local_74 = param_3[5];
  local_70 = param_3[6];
  fVar10 = param_3[8];
  fVar13 = param_3[9];
  fVar16 = param_3[10];
  fVar8 = fVar10 * 1.0;
  fVar11 = fVar13 * 0.0;
  fVar14 = fVar16 * 0.0;
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_3[3];
  fVar5 = fVar14 * fVar2 - fVar11 * fVar3;
  fVar6 = fVar8 * fVar3 - fVar14 * fVar1;
  fVar7 = fVar11 * fVar1 - fVar8 * fVar2;
  fVar5 = fVar5 + fVar5;
  fVar6 = fVar6 + fVar6;
  fVar7 = fVar7 + fVar7;
  fVar9 = fVar10 * 0.0;
  fVar12 = fVar13 * 1.0;
  fVar15 = fVar16 * 0.0;
  local_68 = (fVar7 * fVar2 - fVar6 * fVar3) + fVar4 * fVar5 + fVar8;
  local_64 = (fVar5 * fVar3 - fVar7 * fVar1) + fVar4 * fVar6 + fVar11;
  local_60 = (fVar6 * fVar1 - fVar5 * fVar2) + fVar4 * fVar7 + fVar14;
  fVar5 = fVar15 * fVar2 - fVar12 * fVar3;
  fVar6 = fVar9 * fVar3 - fVar15 * fVar1;
  fVar7 = fVar12 * fVar1 - fVar9 * fVar2;
  fVar5 = fVar5 + fVar5;
  fVar6 = fVar6 + fVar6;
  fVar7 = fVar7 + fVar7;
  fVar10 = fVar10 * 0.0;
  fVar13 = fVar13 * 0.0;
  fVar16 = fVar16 * 1.0;
  local_48 = (fVar7 * fVar2 - fVar6 * fVar3) + fVar4 * fVar5 + fVar9;
  local_44 = (fVar5 * fVar3 - fVar7 * fVar1) + fVar4 * fVar6 + fVar12;
  local_40 = (fVar6 * fVar1 - fVar5 * fVar2) + fVar4 * fVar7 + fVar15;
  fVar5 = fVar16 * fVar2 - fVar13 * fVar3;
  fVar6 = fVar10 * fVar3 - fVar16 * fVar1;
  fVar7 = fVar13 * fVar1 - fVar10 * fVar2;
  fVar5 = fVar5 + fVar5;
  fVar6 = fVar6 + fVar6;
  fVar7 = fVar7 + fVar7;
  local_58 = (fVar7 * fVar2 - fVar6 * fVar3) + fVar4 * fVar5 + fVar10;
  local_54 = (fVar5 * fVar3 - fVar7 * fVar1) + fVar4 * fVar6 + fVar13;
  local_50 = (fVar6 * fVar1 - fVar5 * fVar2) + fVar4 * fVar7 + fVar16;
  fVar10 = ABS(param_4[1]);
  if (ABS(*param_4) <= ABS(param_4[1])) {
    fVar10 = ABS(*param_4);
  }
  if (ABS(param_4[2]) <= fVar10) {
    fVar10 = ABS(param_4[2]);
  }
  FLinearColor::FLinearColor(local_38,&stack0x00000028);
  DrawCircle(param_2,&local_78,&local_68,&local_48,local_38,fVar10 * *(float *)(param_1 + 0xac),0x10
             ,0,0,0,0);
  FLinearColor::FLinearColor(local_38,&stack0x00000028);
  DrawCircle(param_2,&local_78,&local_68,&local_58,local_38,fVar10 * *(float *)(param_1 + 0xac),0x10
             ,0,0,0,0);
  FLinearColor::FLinearColor(local_38,&stack0x00000028);
  DrawCircle(param_2,&local_78,&local_48,&local_58,local_38,fVar10 * *(float *)(param_1 + 0xac),0x10
             ,0,0,0,0);
  return;
}



// FUNCTION 1426be610 FUN_1426be610 body=1725 status=ok
// SIG undefined FUN_1426be610(void)

void FUN_1426be610(longlong param_1,longlong *param_2,float *param_3,float *param_4,
                  undefined4 param_5)

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
  undefined8 *puVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_98;
  float local_94;
  float local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [112];
  
  fVar3 = param_3[8];
  fVar4 = param_3[9];
  fVar5 = param_3[10];
  local_88 = *(undefined8 *)(param_3 + 4);
  uStack_80 = *(undefined8 *)(param_3 + 6);
  fVar13 = fVar3 * 1.0;
  fVar14 = fVar4 * 0.0;
  fVar15 = fVar5 * 0.0;
  fVar16 = *param_3;
  fVar8 = param_3[1];
  fVar1 = param_3[2];
  fVar2 = param_3[3];
  fVar6 = fVar15 * fVar8 - fVar14 * fVar1;
  fVar9 = fVar13 * fVar1 - fVar15 * fVar16;
  fVar11 = fVar14 * fVar16 - fVar13 * fVar8;
  fVar6 = fVar6 + fVar6;
  fVar9 = fVar9 + fVar9;
  fVar11 = fVar11 + fVar11;
  fVar7 = fVar3 * 0.0;
  fVar10 = fVar4 * 1.0;
  fVar12 = fVar5 * 0.0;
  local_b8 = (fVar11 * fVar8 - fVar9 * fVar1) + fVar2 * fVar6 + fVar13;
  local_b4 = (fVar6 * fVar1 - fVar11 * fVar16) + fVar2 * fVar9 + fVar14;
  local_b0 = (fVar9 * fVar16 - fVar6 * fVar8) + fVar2 * fVar11 + fVar15;
  fVar6 = fVar12 * fVar8 - fVar10 * fVar1;
  fVar9 = fVar7 * fVar1 - fVar12 * fVar16;
  fVar11 = fVar10 * fVar16 - fVar7 * fVar8;
  fVar6 = fVar6 + fVar6;
  fVar9 = fVar9 + fVar9;
  fVar11 = fVar11 + fVar11;
  local_a8 = (fVar11 * fVar8 - fVar9 * fVar1) + fVar6 * fVar2 + fVar7;
  local_a4 = (fVar6 * fVar1 - fVar11 * fVar16) + fVar9 * fVar2 + fVar10;
  local_a0 = (fVar9 * fVar16 - fVar6 * fVar8) + fVar11 * fVar2 + fVar12;
  fVar3 = fVar3 * 0.0;
  fVar4 = fVar4 * 0.0;
  fVar5 = fVar5 * 1.0;
  fVar6 = fVar5 * fVar8 - fVar4 * fVar1;
  fVar9 = fVar3 * fVar1 - fVar5 * fVar16;
  fVar11 = fVar4 * fVar16 - fVar3 * fVar8;
  fVar6 = fVar6 + fVar6;
  fVar9 = fVar9 + fVar9;
  fVar11 = fVar11 + fVar11;
  fVar7 = (fVar11 * fVar8 - fVar9 * fVar1) + fVar6 * fVar2 + fVar3;
  fVar10 = (fVar6 * fVar1 - fVar11 * fVar16) + fVar9 * fVar2 + fVar4;
  fVar16 = (fVar9 * fVar16 - fVar6 * fVar8) + fVar11 * fVar2 + fVar5;
  local_98 = fVar7;
  local_94 = fVar10;
  local_90 = fVar16;
  fVar5 = (float)FUN_1426c8c10(fVar9 * fVar1,param_4);
  fVar3 = *(float *)(param_1 + 200);
  fVar4 = ABS(*param_4);
  if (ABS(*param_4) <= ABS(param_4[1])) {
    fVar4 = ABS(param_4[1]);
  }
  fVar5 = fVar5 * 0.5;
  fVar4 = fVar4 * fVar3;
  fVar8 = 0.1;
  if (0.1 <= fVar4) {
    fVar8 = (fVar3 + fVar3 + *(float *)(param_1 + 0xcc)) * ABS(param_4[2]) * 0.5;
    if (fVar8 <= 0.1) {
      fVar8 = 0.1;
    }
    if (fVar4 <= fVar8) {
      fVar8 = fVar4;
    }
  }
  local_c8 = fVar7 * fVar5 + (float)local_88;
  local_c4 = fVar10 * fVar5 + local_88._4_4_;
  local_d8 = (float)local_88 - fVar7 * fVar5;
  local_d4 = local_88._4_4_ - fVar10 * fVar5;
  local_c0 = fVar16 * fVar5 + (float)uStack_80;
  local_d0 = (float)uStack_80 - fVar16 * fVar5;
  FLinearColor::FLinearColor(&local_88,&param_5);
  DrawCircle(param_2,&local_c8,&local_b8,&local_a8,&local_88,fVar8,0x10,0,0,0,0);
  FLinearColor::FLinearColor(&local_88,&param_5);
  puVar17 = &local_88;
  DrawCircle(param_2,&local_d8,&local_b8,&local_a8,puVar17,fVar8,0x10,0,0,0,0);
  uVar18 = CONCAT44((int)((ulonglong)puVar17 >> 0x20),param_5);
  FUN_1426bf4f0(param_2,&local_c8,&local_a8,&local_98,uVar18,fVar8);
  uVar18 = CONCAT44((int)((ulonglong)uVar18 >> 0x20),param_5);
  FUN_1426bf4f0(param_2,&local_c8,&local_b8,&local_98,uVar18,fVar8);
  local_98 = -fVar7;
  local_94 = -fVar10;
  local_90 = -fVar16;
  uVar18 = CONCAT44((int)((ulonglong)uVar18 >> 0x20),param_5);
  FUN_1426bf4f0(param_2,&local_d8,&local_a8,&local_98,uVar18,fVar8);
  uVar19 = CONCAT44((int)((ulonglong)uVar18 >> 0x20),param_5);
  FUN_1426bf4f0(param_2,&local_d8,&local_b8,&local_98,uVar19,fVar8);
  FLinearColor::FLinearColor(local_78,&param_5);
  local_98 = local_d8 + local_b8 * fVar8;
  local_94 = local_d4 + local_b4 * fVar8;
  uVar19 = uVar19 & 0xffffffffffffff00;
  local_90 = local_d0 + local_b0 * fVar8;
  local_88 = CONCAT44(local_c4 + local_b4 * fVar8,local_c8 + local_b8 * fVar8);
  uStack_80._0_4_ = local_c0 + local_b0 * fVar8;
  (**(code **)(*param_2 + 0x38))(param_2,&local_88,&local_98,local_78,uVar19,0,0,0);
  FLinearColor::FLinearColor(local_78,&param_5);
  uStack_80._0_4_ = local_d0 - local_b0 * fVar8;
  local_88 = CONCAT44(local_d4 - local_b4 * fVar8,local_d8 - local_b8 * fVar8);
  local_94 = local_c4 - local_b4 * fVar8;
  local_98 = local_c8 - local_b8 * fVar8;
  local_90 = local_c0 - local_b0 * fVar8;
  uVar19 = uVar19 & 0xffffffffffffff00;
  (**(code **)(*param_2 + 0x38))(param_2,&local_98,&local_88,local_78,uVar19,0,0,0);
  FLinearColor::FLinearColor(local_78,&param_5);
  uVar19 = uVar19 & 0xffffffffffffff00;
  uStack_80._0_4_ = local_d0 + fVar8 * local_a0;
  local_88 = CONCAT44(local_d4 + fVar8 * local_a4,local_d8 + fVar8 * local_a8);
  local_94 = local_c4 + fVar8 * local_a4;
  local_98 = local_c8 + fVar8 * local_a8;
  local_90 = local_c0 + fVar8 * local_a0;
  (**(code **)(*param_2 + 0x38))(param_2,&local_98,&local_88,local_78,uVar19,0,0,0);
  FLinearColor::FLinearColor(local_78,&param_5);
  local_88 = CONCAT44(local_d4 - fVar8 * local_a4,local_d8 - fVar8 * local_a8);
  local_94 = local_c4 - fVar8 * local_a4;
  uStack_80 = CONCAT44(uStack_80._4_4_,local_d0 - fVar8 * local_a0);
  local_98 = local_c8 - fVar8 * local_a8;
  local_90 = local_c0 - fVar8 * local_a0;
  (**(code **)(*param_2 + 0x38))
            (param_2,&local_98,&local_88,local_78,uVar19 & 0xffffffffffffff00,0,0,0);
  return;
}



// FUNCTION 1426becd0 FUN_1426becd0 body=2077 status=ok
// SIG undefined FUN_1426becd0(void)

void FUN_1426becd0(longlong param_1,undefined8 param_2,float *param_3,float *param_4)

{
  float fVar1;
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
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 in_stack_fffffffffffffed8;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined8 uVar20;
  uint in_stack_fffffffffffffee0;
  undefined8 in_stack_fffffffffffffee8;
  uint uVar24;
  ulonglong uVar23;
  uint uVar25;
  ulonglong local_f8;
  float local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  float local_c8;
  float fStack_c4;
  float local_c0;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float local_98;
  float fStack_94;
  float local_90;
  float local_88;
  float fStack_84;
  float local_80;
  ulonglong local_78;
  float local_70;
  
  uVar21 = (undefined4)((ulonglong)in_stack_fffffffffffffed8 >> 0x20);
  uVar24 = (uint)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
  fVar5 = param_3[8];
  fVar7 = param_3[9];
  fVar9 = param_3[10];
  local_e8 = *(ulonglong *)(param_3 + 4);
  uStack_e0 = *(undefined8 *)(param_3 + 6);
  fVar10 = fVar5 * 1.0;
  fVar12 = fVar7 * 0.0;
  fVar14 = fVar9 * 0.0;
  fVar17 = *param_3;
  fVar3 = param_3[1];
  fVar16 = param_3[2];
  fVar1 = param_3[3];
  fVar4 = fVar14 * fVar3 - fVar12 * fVar16;
  fVar6 = fVar10 * fVar16 - fVar14 * fVar17;
  fVar8 = fVar12 * fVar17 - fVar10 * fVar3;
  fVar4 = fVar4 + fVar4;
  fVar6 = fVar6 + fVar6;
  fVar8 = fVar8 + fVar8;
  fVar11 = fVar5 * 0.0;
  fVar13 = fVar7 * 1.0;
  fVar15 = fVar9 * 0.0;
  local_b8 = (fVar8 * fVar3 - fVar6 * fVar16) + fVar1 * fVar4 + fVar10;
  fStack_b4 = (fVar4 * fVar16 - fVar8 * fVar17) + fVar1 * fVar6 + fVar12;
  local_b0 = (fVar6 * fVar17 - fVar4 * fVar3) + fVar1 * fVar8 + fVar14;
  fVar4 = fVar15 * fVar3 - fVar13 * fVar16;
  fVar6 = fVar11 * fVar16 - fVar15 * fVar17;
  fVar8 = fVar13 * fVar17 - fVar11 * fVar3;
  fVar4 = fVar4 + fVar4;
  fVar6 = fVar6 + fVar6;
  fVar8 = fVar8 + fVar8;
  local_a8 = (fVar8 * fVar3 - fVar6 * fVar16) + fVar4 * fVar1 + fVar11;
  fStack_a4 = (fVar4 * fVar16 - fVar8 * fVar17) + fVar6 * fVar1 + fVar13;
  local_a0 = (fVar6 * fVar17 - fVar4 * fVar3) + fVar8 * fVar1 + fVar15;
  fVar5 = fVar5 * 0.0;
  fVar7 = fVar7 * 0.0;
  fVar9 = fVar9 * 1.0;
  fVar4 = fVar9 * fVar3 - fVar7 * fVar16;
  fVar6 = fVar5 * fVar16 - fVar9 * fVar17;
  fVar8 = fVar7 * fVar17 - fVar5 * fVar3;
  fVar4 = fVar4 + fVar4;
  fVar6 = fVar6 + fVar6;
  fVar8 = fVar8 + fVar8;
  fVar11 = (fVar8 * fVar3 - fVar6 * fVar16) + fVar4 * fVar1 + fVar5;
  fVar10 = (fVar4 * fVar16 - fVar8 * fVar17) + fVar6 * fVar1 + fVar7;
  fVar9 = (fVar6 * fVar17 - fVar4 * fVar3) + fVar8 * fVar1 + fVar9;
  local_c8 = fVar11;
  fStack_c4 = fVar10;
  local_c0 = fVar9;
  fVar7 = (float)FUN_1426c8ca0(fVar6 * fVar16,param_4);
  fVar7 = fVar7 * 0.5;
  fVar5 = ABS(*param_4);
  if (ABS(*param_4) <= ABS(param_4[1])) {
    fVar5 = ABS(param_4[1]);
  }
  fVar17 = fVar5 * *(float *)(param_1 + 0x78);
  fVar3 = ABS(param_4[2]) *
          (*(float *)(param_1 + 0x78) + *(float *)(param_1 + 0x80) + *(float *)(param_1 + 0x7c)) *
          0.5;
  if (fVar3 <= 0.1) {
    fVar3 = 0.1;
  }
  if (0.1 <= fVar17) {
    if (fVar3 <= fVar17) {
      fVar17 = fVar3;
    }
  }
  else {
    fVar17 = 0.1;
  }
  fVar5 = fVar5 * *(float *)(param_1 + 0x7c);
  fVar16 = 0.1;
  if ((0.1 <= fVar5) && (fVar16 = fVar5, fVar3 <= fVar5)) {
    fVar16 = fVar3;
  }
  fVar9 = fVar9 * fVar7;
  fVar11 = fVar11 * fVar7;
  local_80 = (float)uStack_e0 - fVar9;
  fVar10 = fVar10 * fVar7;
  local_90 = (float)uStack_e0 + fVar9;
  local_88 = (float)local_e8 - fVar11;
  local_98 = (float)local_e8 + fVar11;
  fStack_84 = local_e8._4_4_ - fVar10;
  fStack_94 = local_e8._4_4_ + fVar10;
  fVar7 = local_90 - local_80;
  fVar5 = local_98 - local_88;
  fVar9 = fStack_94 - fStack_84;
  fVar3 = SQRT(fVar9 * fVar9 + fVar5 * fVar5 + fVar7 * fVar7);
  if ((((ABS(fVar5) <= 0.0001) && (ABS(fVar9) <= 0.0001)) && (ABS(fVar7) <= 0.0001)) ||
     (fVar3 <= ABS(fVar17 - fVar16))) {
    FLinearColor::FLinearColor(local_d8,&stack0x00000028);
    uVar23 = (ulonglong)uVar24 << 0x20;
    in_stack_fffffffffffffee0 = in_stack_fffffffffffffee0 & 0xffffff00;
    uVar19 = CONCAT44(uVar21,0x10);
    if (fVar17 <= fVar16) {
      DrawCircle(param_2,&local_88,&local_b8,&local_a8,local_d8,fVar16,uVar19,
                 in_stack_fffffffffffffee0,uVar23,0,0);
      uVar21 = (undefined4)((ulonglong)uVar19 >> 0x20);
      FLinearColor::FLinearColor(local_d8,&stack0x00000028);
      uVar23 = uVar23 & 0xffffffff00000000;
      in_stack_fffffffffffffee0 = in_stack_fffffffffffffee0 & 0xffffff00;
      uVar19 = CONCAT44(uVar21,0x10);
      DrawCircle(param_2,&local_88,&local_b8,&local_c8,local_d8,fVar16,uVar19,
                 in_stack_fffffffffffffee0,uVar23,0,0);
      uVar21 = (undefined4)((ulonglong)uVar19 >> 0x20);
      FLinearColor::FLinearColor(local_d8,&stack0x00000028);
      pfVar2 = &local_88;
    }
    else {
      DrawCircle(param_2,&local_98,&local_b8,&local_a8,local_d8,fVar17,uVar19,
                 in_stack_fffffffffffffee0,uVar23,0,0);
      uVar21 = (undefined4)((ulonglong)uVar19 >> 0x20);
      FLinearColor::FLinearColor(local_d8,&stack0x00000028);
      uVar23 = uVar23 & 0xffffffff00000000;
      in_stack_fffffffffffffee0 = in_stack_fffffffffffffee0 & 0xffffff00;
      uVar19 = CONCAT44(uVar21,0x10);
      DrawCircle(param_2,&local_98,&local_b8,&local_c8,local_d8,fVar17,uVar19,
                 in_stack_fffffffffffffee0,uVar23,0,0);
      uVar21 = (undefined4)((ulonglong)uVar19 >> 0x20);
      FLinearColor::FLinearColor(local_d8,&stack0x00000028);
      pfVar2 = &local_98;
      fVar16 = fVar17;
    }
    DrawCircle(param_2,pfVar2,&local_a8,&local_c8,local_d8,fVar16,CONCAT44(uVar21,0x10),
               in_stack_fffffffffffffee0 & 0xffffff00,uVar23 & 0xffffffff00000000,0,0);
  }
  else {
    FLinearColor::FLinearColor(&local_e8,&stack0x00000028);
    puVar18 = &local_e8;
    uVar25 = 0;
    uVar19 = CONCAT44(uVar21,0x10);
    if (fVar17 <= fVar16) {
      pfVar2 = &local_88;
      fVar5 = fVar16;
    }
    else {
      pfVar2 = &local_98;
      fVar5 = fVar17;
    }
    DrawCircle(param_2,pfVar2,&local_b8,&local_a8,puVar18,fVar5,uVar19,
               in_stack_fffffffffffffee0 & 0xffffff00,(ulonglong)uVar24 << 0x20,0,0);
    uVar21 = (undefined4)((ulonglong)puVar18 >> 0x20);
    uVar22 = (undefined4)((ulonglong)uVar19 >> 0x20);
    local_f0 = -local_c0;
    local_f8 = CONCAT44(fStack_c4,local_c8) ^ 0x8000000080000000;
    fVar7 = ((fVar17 - fVar16) * fVar17) / (fVar3 * fVar17);
    fVar5 = -1.0;
    if ((-1.0 <= fVar7) && (fVar5 = fVar7, 1.0 <= fVar7)) {
      fVar5 = 1.0;
    }
    fVar5 = _guard_xfg_dispatch_icall_nop(fVar5);
    fVar7 = 90.0 - fVar5 * 57.295776;
    FLinearColor::FLinearColor(local_d8,&stack0x00000028);
    fVar5 = local_f0;
    uVar23 = local_f8;
    local_78 = CONCAT44(fStack_a4,local_a8);
    uVar25 = uVar25 & 0xffffff00;
    local_70 = local_a0;
    local_f0 = local_90;
    uVar20 = CONCAT44(uVar22,fVar17);
    uVar19 = CONCAT44(uVar21,fVar7);
    local_e8 = local_f8;
    uStack_e0._0_4_ = fVar5;
    local_f8 = CONCAT44(fStack_94,local_98);
    DrawArc(param_2,&local_f8,&local_e8,&local_78,uVar19,360.0 - fVar7,uVar20,0x10,local_d8,uVar25);
    uVar21 = (undefined4)((ulonglong)uVar19 >> 0x20);
    uVar22 = (undefined4)((ulonglong)uVar20 >> 0x20);
    FLinearColor::FLinearColor(local_d8,&stack0x00000028);
    local_e8 = CONCAT44(fStack_b4,local_b8);
    uVar25 = uVar25 & 0xffffff00;
    uStack_e0._0_4_ = local_b0;
    local_f0 = local_90;
    local_f8 = CONCAT44(fStack_94,local_98);
    uVar20 = CONCAT44(uVar22,fVar17);
    uVar19 = CONCAT44(uVar21,fVar7);
    local_78 = uVar23;
    local_70 = fVar5;
    DrawArc(param_2,&local_f8,&local_78,&local_e8,uVar19,360.0 - fVar7,uVar20,0x10,local_d8,uVar25);
    uVar21 = (undefined4)((ulonglong)uVar19 >> 0x20);
    uVar22 = (undefined4)((ulonglong)uVar20 >> 0x20);
    fVar7 = 180.0 - fVar7;
    FLinearColor::FLinearColor(local_d8,&stack0x00000028);
    local_e8 = CONCAT44(fStack_a4,local_a8);
    uStack_e0._0_4_ = local_a0;
    local_70 = local_c0;
    local_78 = CONCAT44(fStack_c4,local_c8);
    uVar25 = uVar25 & 0xffffff00;
    local_f0 = local_80;
    local_f8 = CONCAT44(fStack_84,local_88);
    uVar20 = CONCAT44(uVar22,fVar16);
    uVar19 = CONCAT44(uVar21,fVar7);
    DrawArc(param_2,&local_f8,&local_78,&local_e8,uVar19,360.0 - fVar7,uVar20,0x10,local_d8,uVar25);
    uVar21 = (undefined4)((ulonglong)uVar19 >> 0x20);
    uVar22 = (undefined4)((ulonglong)uVar20 >> 0x20);
    FLinearColor::FLinearColor(local_d8,&stack0x00000028);
    local_e8 = CONCAT44(fStack_b4,local_b8);
    uStack_e0 = CONCAT44(uStack_e0._4_4_,local_b0);
    local_70 = local_c0;
    local_78 = CONCAT44(fStack_c4,local_c8);
    local_f0 = local_80;
    local_f8 = CONCAT44(fStack_84,local_88);
    DrawArc(param_2,&local_f8,&local_78,&local_e8,CONCAT44(uVar21,fVar7),360.0 - fVar7,
            CONCAT44(uVar22,fVar16),0x10,local_d8,uVar25 & 0xffffff00);
    FUN_1426bf6a0(param_2,param_3,&local_98,&local_88,fVar17,fVar16,&stack0x00000028);
  }
  return;
}



// FUNCTION 1426bf4f0 FUN_1426bf4f0 body=424 status=ok
// SIG undefined FUN_1426bf4f0(void)

void FUN_1426bf4f0(longlong *param_1,float *param_2,float *param_3,float *param_4,undefined8 param_5
                  ,float param_6)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar5;
  float local_68;
  float local_64;
  float local_60;
  float local_58;
  float local_54;
  float local_50;
  undefined1 local_48 [64];
  undefined8 uVar4;
  
  fVar1 = param_6;
  iVar2 = 0;
  local_58 = param_6 * *param_3 + *param_2;
  local_54 = param_6 * param_3[1] + param_2[1];
  local_50 = param_6 * param_3[2] + param_2[2];
  do {
    iVar2 = iVar2 + 1;
    uVar4 = __libm_sse2_sincosf_((float)iVar2 * 0.3926991);
    fVar5 = (float)((ulonglong)uVar4 >> 0x20);
    fVar3 = (float)uVar4;
    local_68 = (fVar5 * *param_3 + fVar3 * *param_4) * fVar1 + *param_2;
    local_64 = (fVar5 * param_3[1] + fVar3 * param_4[1]) * fVar1 + param_2[1];
    local_60 = (fVar5 * param_3[2] + fVar3 * param_4[2]) * fVar1 + param_2[2];
    FLinearColor::FLinearColor(local_48,&param_5);
    (**(code **)(*param_1 + 0x38))(param_1,&local_58,&local_68,local_48,0,0,0,0);
    local_58 = local_68;
    local_50 = local_60;
    local_54 = local_64;
  } while (iVar2 < 8);
  return;
}



// FUNCTION 1426bf6a0 FUN_1426bf6a0 body=1761 status=ok
// SIG undefined FUN_1426bf6a0(void)

void FUN_1426bf6a0(longlong *param_1,float *param_2,float *param_3,float *param_4,float param_5,
                  float param_6,undefined8 param_7)

{
  float fVar1;
  undefined8 uVar2;
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
  float local_res18;
  float local_res20;
  float local_118;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  undefined1 local_d8 [16];
  undefined1 local_c8 [176];
  
  fVar6 = *param_4 - *param_3;
  fVar9 = param_4[1] - param_3[1];
  fVar8 = param_4[2] - param_3[2];
  fVar3 = SQRT(fVar9 * fVar9 + fVar6 * fVar6 + fVar8 * fVar8);
  if ((((0.0001 < ABS(fVar6)) || (0.0001 < ABS(fVar9))) || (0.0001 < ABS(fVar8))) &&
     (ABS(param_5 - param_6) < fVar3)) {
    fVar6 = *param_2;
    fVar8 = param_2[1];
    fVar9 = param_2[2];
    fVar1 = param_2[3];
    fVar3 = (param_6 - param_5) / fVar3;
    fVar12 = fVar6 * fVar3;
    fVar4 = (fVar3 + fVar3) * fVar8;
    fVar11 = SQRT(1.0 - fVar3 * fVar3);
    fVar15 = fVar9 * fVar11 - fVar12;
    fVar7 = -(fVar8 * fVar11) + -(fVar8 * fVar11);
    fVar15 = fVar15 + fVar15;
    local_118 = 22.5;
    fVar5 = (fVar15 * fVar6 - fVar4 * fVar8) + fVar7 * fVar1 + fVar3;
    local_res18 = (fVar7 * fVar8 - fVar15 * fVar9) + fVar4 * fVar1 + fVar11;
    local_res20 = (fVar4 * fVar9 - fVar7 * fVar6) + fVar15 * fVar1;
    do {
      uVar2 = __libm_sse2_sincosf_(local_118 * 0.017453292);
      fVar4 = (float)((ulonglong)uVar2 >> 0x20) * fVar11;
      fVar10 = (float)uVar2 * fVar11;
      fVar14 = fVar4 * fVar9 - fVar12;
      fVar7 = fVar10 * fVar6 - fVar4 * fVar8;
      fVar14 = fVar14 + fVar14;
      fVar15 = fVar8 * fVar3 - fVar10 * fVar9;
      fVar7 = fVar7 + fVar7;
      fVar15 = fVar15 + fVar15;
      fVar13 = (fVar7 * fVar8 - fVar14 * fVar9) + fVar15 * fVar1 + fVar4;
      fVar4 = (fVar15 * fVar9 - fVar7 * fVar6) + fVar14 * fVar1 + fVar10;
      fVar7 = (fVar14 * fVar6 - fVar15 * fVar8) + fVar7 * fVar1 + fVar3;
      FLinearColor::FLinearColor(local_c8,param_7);
      local_f0 = fVar13 * param_5 + *param_3;
      local_ec = fVar4 * param_5 + param_3[1];
      local_e8 = fVar7 * param_5 + param_3[2];
      local_e4 = local_res18 * param_5 + *param_3;
      local_e0 = local_res20 * param_5 + param_3[1];
      local_dc = fVar5 * param_5 + param_3[2];
      (**(code **)(*param_1 + 0x38))(param_1,&local_e4,&local_f0,local_c8,0,0,0,0);
      FLinearColor::FLinearColor(local_d8,param_7);
      local_108 = fVar13 * param_6 + *param_4;
      local_f4 = fVar5 * param_6 + param_4[2];
      local_104 = fVar4 * param_6 + param_4[1];
      local_100 = fVar7 * param_6 + param_4[2];
      local_fc = local_res18 * param_6 + *param_4;
      local_f8 = local_res20 * param_6 + param_4[1];
      (**(code **)(*param_1 + 0x38))(param_1,&local_fc,&local_108,local_d8,0,0,0,0);
      local_118 = local_118 + 22.5;
      fVar5 = fVar7;
      local_res18 = fVar13;
      local_res20 = fVar4;
    } while (local_118 <= 360.0);
    local_res18 = 90.0;
    do {
      uVar2 = __libm_sse2_sincosf_(local_res18 * 0.017453292);
      fVar10 = (float)uVar2 * fVar11;
      fVar5 = (float)((ulonglong)uVar2 >> 0x20) * fVar11;
      fVar15 = fVar8 * fVar3 - fVar9 * fVar10;
      fVar7 = fVar6 * fVar10 - fVar8 * fVar5;
      fVar15 = fVar15 + fVar15;
      fVar4 = fVar9 * fVar5 - fVar12;
      fVar7 = fVar7 + fVar7;
      fVar4 = fVar4 + fVar4;
      fVar13 = (fVar8 * fVar7 - fVar9 * fVar4) + fVar1 * fVar15 + fVar5;
      fVar10 = (fVar9 * fVar15 - fVar6 * fVar7) + fVar1 * fVar4 + fVar10;
      fVar5 = (fVar6 * fVar4 - fVar8 * fVar15) + fVar1 * fVar7 + fVar3;
      FLinearColor::FLinearColor(local_d8,param_7);
      local_fc = fVar13 * param_6 + *param_4;
      local_f8 = fVar10 * param_6 + param_4[1];
      local_108 = fVar13 * param_5 + *param_3;
      local_104 = fVar10 * param_5 + param_3[1];
      local_f4 = fVar5 * param_6 + param_4[2];
      local_100 = fVar5 * param_5 + param_3[2];
      (**(code **)(*param_1 + 0x38))(param_1,&local_108,&local_fc,local_d8,0,0,0,0);
      local_res18 = local_res18 + 90.0;
    } while (local_res18 <= 360.0);
  }
  return;
}



// FUNCTION 1426bfd90 Execute body=89 status=ok
// SIG undefined Execute(void)

void TBaseRawMethodDelegateInstance<0,FPhysXCookHelper,TTypeWrapper<void>___cdecl(void),TBaseDelegate<void>_>
     ::Execute(longlong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong local_18;
  undefined4 local_10;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  pcVar2 = *(code **)(param_1 + 0x10);
  local_18 = 0;
  local_10 = 0;
  if ((((longlong *)(param_1 + 0x18) != &local_18) && (*(int *)(param_1 + 0x20) != 0)) &&
     (plVar3 = *(longlong **)(param_1 + 0x18), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_18);
  }
  (*pcVar2)(uVar1,&local_18);
  return;
}



// FUNCTION 1426bfdf0 Execute body=114 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,UBodySetup,TTypeWrapper<void>___cdecl(void),FPhysXCookHelper_*,TBaseDelegate<void>_>
     ::Execute(longlong param_1)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong local_18;
  undefined4 local_10;
  
  uVar3 = FWeakObjectPtr::Get(param_1 + 8);
  pcVar1 = *(code **)(param_1 + 0x10);
  local_18 = 0;
  local_10 = 0;
  if ((((longlong *)(param_1 + 0x20) != &local_18) && (*(int *)(param_1 + 0x28) != 0)) &&
     (plVar2 = *(longlong **)(param_1 + 0x20), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_18);
  }
  (*pcVar1)(uVar3,*(undefined8 *)(param_1 + 0x18),&local_18);
  return;
}



// FUNCTION 1426bfe70 FUN_1426bfe70 body=341 status=ok
// SIG undefined FUN_1426bfe70(void)

void FUN_1426bfe70(longlong *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  if (0 < (int)param_1[1]) {
    lVar4 = 0;
    do {
      plVar2 = (longlong *)(*param_1 + lVar4);
      switch((int)plVar2[1]) {
      case 0:
        (**(code **)(*(longlong *)*plVar2 + 0x20))();
        break;
      case 1:
        (**(code **)(*(longlong *)*plVar2 + 8))();
        break;
      case 2:
        plVar2 = (longlong *)*plVar2;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2,1);
        }
        break;
      case 3:
        plVar2 = (longlong *)*plVar2;
        if (DAT_146b08788 == (longlong *)0x0) {
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x30))(plVar2,1);
          }
        }
        else {
          (**(code **)(*DAT_146b08788 + 8))(DAT_146b08788,plVar2);
        }
        break;
      case 4:
        plVar2 = (longlong *)*plVar2;
        if (DAT_146b08798 == (longlong *)0x0) {
LAB_1426bff8e:
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
        else {
          (**(code **)(*DAT_146b08798 + 8))(DAT_146b08798,plVar2);
        }
        break;
      case 5:
        puVar1 = (undefined8 *)*plVar2;
LAB_1426bff63:
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1,1);
        }
        break;
      case 6:
        puVar1 = (undefined8 *)*plVar2;
        if (DAT_146b087a8 == (longlong *)0x0) goto LAB_1426bff63;
        (**(code **)(*DAT_146b087a8 + 8))(DAT_146b087a8,puVar1);
        break;
      case 7:
        plVar2 = (longlong *)*plVar2;
        if (DAT_146b08798 == (longlong *)0x0) goto LAB_1426bff8e;
        (**(code **)(*DAT_146b08798 + 0x18))(DAT_146b08798,plVar2);
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 0x10;
    } while (iVar3 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 1426bfff0 ExecuteIfSafe body=91 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined8
TBaseRawMethodDelegateInstance<0,FPhysXCookHelper,void___cdecl(void),TBaseDelegate<void>_>::
ExecuteIfSafe(longlong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong local_18;
  undefined4 local_10;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  pcVar2 = *(code **)(param_1 + 0x10);
  local_18 = 0;
  local_10 = 0;
  if ((((longlong *)(param_1 + 0x18) != &local_18) && (*(int *)(param_1 + 0x20) != 0)) &&
     (plVar3 = *(longlong **)(param_1 + 0x18), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_18);
  }
  (*pcVar2)(uVar1,&local_18);
  return 1;
}



// FUNCTION 1426c0050 ExecuteIfSafe body=141 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined8
TBaseUObjectMethodDelegateInstance<0,UBodySetup,void___cdecl(void),FPhysXCookHelper_*,TBaseDelegate<void>_>
::ExecuteIfSafe(longlong param_1)

{
  code *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_18;
  undefined4 local_10;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar3 != 0) {
    uVar4 = FWeakObjectPtr::Get(param_1 + 8);
    pcVar1 = *(code **)(param_1 + 0x10);
    local_18 = 0;
    local_10 = 0;
    if ((((longlong *)(param_1 + 0x20) != &local_18) && (*(int *)(param_1 + 0x28) != 0)) &&
       (plVar2 = *(longlong **)(param_1 + 0x20), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_18);
    }
    (*pcVar1)(uVar4,*(undefined8 *)(param_1 + 0x18),&local_18);
    return 1;
  }
  return 0;
}



// FUNCTION 1426c00e0 ExecuteOnUnbrokenJointReadOnly body=189 status=ok
// SIG undefined ExecuteOnUnbrokenJointReadOnly(void)

undefined8 FConstraintInstance::ExecuteOnUnbrokenJointReadOnly(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  undefined8 local_res8;
  
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0xe0))();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x348))
                (plVar1,
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ConstraintInstance.cpp"
                 ,0x88);
    }
    pbVar2 = (byte *)(**(code **)(**(longlong **)(param_1 + 8) + 0x80))
                               (*(longlong **)(param_1 + 8),&local_res8);
    if ((*pbVar2 & 1) == 0) {
      local_res8 = *(undefined8 *)(param_1 + 8);
      (*(code *)*param_2)(param_2[1],&local_res8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x350))(plVar1);
      }
      return 1;
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x350))(plVar1);
    }
  }
  return 0;
}



// FUNCTION 1426c01a0 ExecuteOnUnbrokenJointReadWrite body=189 status=ok
// SIG undefined ExecuteOnUnbrokenJointReadWrite(void)

undefined8
FConstraintInstance::ExecuteOnUnbrokenJointReadWrite(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  undefined8 local_res8;
  
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0xe0))();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x358))
                (plVar1,
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ConstraintInstance.cpp"
                 ,0x98);
    }
    pbVar2 = (byte *)(**(code **)(**(longlong **)(param_1 + 8) + 0x80))
                               (*(longlong **)(param_1 + 8),&local_res8);
    if ((*pbVar2 & 1) == 0) {
      local_res8 = *(undefined8 *)(param_1 + 8);
      (*(code *)*param_2)(param_2[1],&local_res8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))(plVar1);
      }
      return 1;
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x360))(plVar1);
    }
  }
  return 0;
}



// FUNCTION 1426c0260 ExecuteTask body=267 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<FParallelClothCompletionTask>::ExecuteTask
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 2);
  if (lVar3 != 0) {
    FUN_1426baf80(lVar3);
  }
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_141591a60(param_1[4],param_2,param_3);
  *param_1 = &PTR_FUN_145164550;
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
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 1426c0370 FUN_1426c0370 body=281 status=ok
// SIG undefined FUN_1426c0370(void)

void FUN_1426c0370(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 2);
  if (lVar3 != 0) {
    FUN_1426cb420(lVar3,lVar3 + 0xbd0,lVar3 + 0xe38);
  }
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_141591a60(param_1[4],param_2,param_3);
  *param_1 = &PTR_FUN_145164540;
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
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 1426c0490 FillFromTriMesh body=440 status=ok
// SIG undefined FillFromTriMesh(void)

void FBodySetupUVInfo::FillFromTriMesh(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  void *_Src;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  lVar3 = param_2[1];
  uVar8 = 0;
  lVar4 = param_2[3];
  *(undefined4 *)(param_1 + 1) = 0;
  uVar6 = uVar8;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo();
    uVar6 = (ulonglong)*(uint *)(param_1 + 1);
  }
  iVar5 = (int)uVar6 + (int)lVar4 * 3;
  *(int *)(param_1 + 1) = iVar5;
  if (*(int *)((longlong)param_1 + 0xc) < iVar5) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1);
  }
  uVar6 = uVar8;
  uVar10 = uVar8;
  if (0 < (int)param_2[3]) {
    do {
      uVar9 = (int)uVar10 + 1;
      *(undefined4 *)(uVar6 + *param_1) = *(undefined4 *)(uVar6 + param_2[2]);
      *(undefined4 *)(uVar6 + 4 + *param_1) = *(undefined4 *)(uVar6 + 4 + param_2[2]);
      *(undefined4 *)(uVar6 + 8 + *param_1) = *(undefined4 *)(uVar6 + 8 + param_2[2]);
      uVar6 = uVar6 + 0xc;
      uVar10 = (ulonglong)uVar9;
    } while ((int)uVar9 < (int)param_2[3]);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  uVar6 = uVar8;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 2);
    uVar6 = (ulonglong)*(uint *)(param_1 + 3);
  }
  iVar5 = (int)uVar6 + (int)lVar3;
  *(int *)(param_1 + 3) = iVar5;
  if (*(int *)((longlong)param_1 + 0x1c) < iVar5) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1 + 2);
  }
  uVar6 = uVar8;
  uVar10 = uVar8;
  if (0 < (int)param_2[1]) {
    do {
      lVar4 = *param_2;
      uVar1 = uVar6 + 0xc;
      lVar2 = param_1[2];
      uVar9 = (int)uVar10 + 1;
      *(undefined8 *)(lVar2 + -0xc + uVar1) = *(undefined8 *)(uVar6 + lVar4);
      *(undefined4 *)(lVar2 + -4 + uVar1) = *(undefined4 *)(uVar6 + 8 + lVar4);
      uVar6 = uVar1;
      uVar10 = (ulonglong)uVar9;
    } while ((int)uVar9 < (int)param_2[1]);
  }
  uVar6 = uVar8;
  if (0 < (int)param_2[7]) {
    do {
      lVar4 = param_2[6];
      if (*(int *)(lVar4 + 8 + uVar6) != (int)lVar3) {
        return;
      }
      iVar5 = (int)param_1[5];
      *(int *)(param_1 + 5) = iVar5 + 1;
      if (*(int *)((longlong)param_1 + 0x2c) < iVar5 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 4,iVar5);
      }
      puVar7 = (undefined8 *)((longlong)iVar5 * 0x10 + param_1[4]);
      *puVar7 = 0;
      iVar5 = *(int *)(lVar4 + 8 + uVar6);
      _Src = *(void **)(lVar4 + uVar6);
      *(int *)(puVar7 + 1) = iVar5;
      if (iVar5 == 0) {
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar7,iVar5,0);
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar7,_Src,(longlong)iVar5 << 3);
      }
      uVar9 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar9;
      uVar6 = uVar6 + 0x10;
    } while ((int)uVar9 < (int)param_2[7]);
  }
  return;
}



// FUNCTION 1426c0650 FUN_1426c0650 body=180 status=ok
// SIG undefined FUN_1426c0650(void)

void FUN_1426c0650(longlong *param_1,uint param_2)

{
  char cVar1;
  
  (**(code **)(*param_1 + 0x990))();
  FUN_14239b420(param_1,(param_2 & 0xff ^ 1) << 2,0,1);
  (**(code **)(*param_1 + 0x488))(param_1,0,1,0);
  FUN_1423b4660(param_1);
  (**(code **)(*param_1 + 0x4b8))(param_1);
  UActorComponent::MarkRenderDynamicDataDirty(param_1);
  FUN_1423424c0(param_1);
  FUN_1423b8300(param_1);
  if ((*(char *)((longlong)param_1 + 0xf1c) != '\0') &&
     (*(undefined1 *)((longlong)param_1 + 0xf1c) = 0, *(char *)((longlong)param_1 + 0xf1d) == '\0'))
  {
    cVar1 = (**(code **)(*param_1 + 0x828))(param_1);
    if (cVar1 == '\0') {
      FUN_1423b8450(param_1,0);
      *(undefined1 *)((longlong)param_1 + 0xf1d) = 0;
    }
  }
  return;
}



// FUNCTION 1426c0710 FindBodyIndex body=140 status=ok
// SIG undefined FindBodyIndex(void)

undefined4 UPhysicsAsset::FindBodyIndex(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c)) {
    lVar2 = *(longlong *)(param_1 + 0xa8);
    if (*(longlong *)(param_1 + 0xa8) == 0) {
      lVar2 = param_1 + 0xa0;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0xb0) - 1U) * 4);
    if (iVar1 != -1) {
      do {
        puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar1 * 0x18);
        if (*(longlong *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar1 * 0x18) == param_2) {
          if (iVar1 != -1) goto LAB_1426c0783;
          break;
        }
        iVar1 = puVar4[4];
      } while (iVar1 != -1);
    }
  }
  puVar4 = (undefined4 *)0x0;
LAB_1426c0783:
  puVar3 = puVar4 + 2;
  if (puVar4 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  if (puVar3 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  return *puVar3;
}



// FUNCTION 1426c07a0 FindConstraintBoneName body=45 status=ok
// SIG undefined FindConstraintBoneName(void)

undefined8 * UPhysicsAsset::FindConstraintBoneName(longlong param_1,undefined8 *param_2,int param_3)

{
  if ((-1 < param_3) && (param_3 < *(int *)(param_1 + 0x58))) {
    *param_2 = *(undefined8 *)
                (*(longlong *)(*(longlong *)(param_1 + 0x50) + (longlong)param_3 * 8) + 0x40);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1426c07d0 FindConstraintIndex body=55 status=ok
// SIG undefined FindConstraintIndex(void)

ulonglong UPhysicsAsset::FindConstraintIndex(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  uVar1 = 0;
  if (0 < *(int *)(param_1 + 0x58)) {
    plVar2 = *(longlong **)(param_1 + 0x50);
    uVar3 = uVar1;
    do {
      if (*(longlong *)(*plVar2 + 0x40) == param_2) {
        return uVar3;
      }
      uVar3 = (ulonglong)((int)uVar3 + 1);
      uVar1 = uVar1 + 1;
      plVar2 = plVar2 + 1;
    } while ((longlong)uVar1 < (longlong)*(int *)(param_1 + 0x58));
  }
  return 0xffffffff;
}



// FUNCTION 1426c0810 FUN_1426c0810 body=175 status=ok
// SIG undefined FUN_1426c0810(void)

void FUN_1426c0810(longlong param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  if (param_2 == 0) {
    FUN_1426bada0();
    *(byte *)(param_1 + 0x99) = *(byte *)(param_1 + 0x99) | 0x80;
  }
  else {
    FUN_1426c08c0(param_1,param_2 + 0x90,param_2 + 0xa0,param_2 + 0xb0);
    FBodySetupUVInfo::operator=(param_1 + 0x110,param_2 + 0xc0);
    FUN_1426b6960(param_2);
    FMemory::operator_delete(param_2,0xf8);
  }
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)*param_3 + 0x18))();
    if (cVar1 != '\0') {
      if ((int)param_3[1] == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = (longlong *)*param_3;
      }
      (**(code **)(*plVar2 + 0x40))();
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
  return;
}



// FUNCTION 1426c08c0 FUN_1426c08c0 body=552 status=ok
// SIG undefined FUN_1426c08c0(void)

void FUN_1426c08c0(longlong param_1,longlong *param_2,longlong *param_3,ulonglong *param_4)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong local_38 [2];
  
  FUN_1426bada0();
  UObjectBaseUtility::GetFullName(param_1,local_38,0);
  plVar5 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar6 = plVar5[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 0x368))(plVar5);
    lVar6 = plVar5[0x1f];
  }
  cVar3 = *(char *)(lVar6 + 0xa9);
  if (*(char *)(param_1 + 0x9c) != '\0') {
    cVar3 = *(char *)(param_1 + 0x9c);
  }
  uVar10 = 0;
  if (cVar3 != '\x03') {
    if ((((*(byte *)(param_1 + 0x99) & 0x10) != 0) && ((int)param_2[1] == 0)) ||
       (((*(byte *)(param_1 + 0x99) & 0x40) != 0 && ((int)param_3[1] == 0)))) {
      FUN_140973e50(param_1 + 0x58,0);
    }
    uVar7 = uVar10;
    uVar9 = uVar10;
    uVar11 = uVar10;
    if (0 < *(int *)(param_1 + 0x60)) {
      do {
        lVar6 = uVar11 + *(longlong *)(param_1 + 0x58);
        bVar4 = *(byte *)(param_1 + 0x99);
        if ((bVar4 & 0x10) != 0) {
          uVar2 = *(undefined8 *)(uVar7 + *param_2);
          *(undefined8 *)(lVar6 + 0xc0) = uVar2;
          FPhysxSharedData::Add(DAT_146b08468,uVar2,local_38);
          bVar4 = *(byte *)(param_1 + 0x99);
        }
        if ((bVar4 & 0x40) != 0) {
          uVar2 = *(undefined8 *)(uVar7 + *param_3);
          *(undefined8 *)(lVar6 + 200) = uVar2;
          FPhysxSharedData::Add(DAT_146b08468,uVar2,local_38);
        }
        uVar8 = (int)uVar9 + 1;
        uVar7 = uVar7 + 8;
        uVar9 = (ulonglong)uVar8;
        uVar11 = uVar11 + 0xd0;
      } while ((int)uVar8 < *(int *)(param_1 + 0x60));
    }
  }
  plVar5 = (longlong *)*param_4;
  uVar7 = (longlong)(int)param_4[1] & 0x1fffffffffffffff;
  if (plVar5 + (int)param_4[1] < plVar5) {
    uVar7 = uVar10;
  }
  if (uVar7 != 0) {
    do {
      lVar6 = *plVar5;
      if (lVar6 != 0) {
        iVar1 = *(int *)(param_1 + 0x108);
        *(int *)(param_1 + 0x108) = iVar1 + 1;
        if (*(int *)(param_1 + 0x10c) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x100,iVar1);
        }
        *(longlong *)(*(longlong *)(param_1 + 0x100) + (longlong)iVar1 * 8) = lVar6;
        FPhysxSharedData::Add(DAT_146b08468,lVar6,local_38);
      }
      plVar5 = plVar5 + 1;
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar7);
  }
  bVar4 = *(byte *)(param_1 + 0x99);
  if ((bVar4 & 0x20) == 0) {
    FFormatContainer::FlushData(param_1 + 0xd8);
    bVar4 = *(byte *)(param_1 + 0x99);
  }
  *(byte *)(param_1 + 0x99) = bVar4 | 0x80;
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1426c0af0 FUN_1426c0af0 body=27 status=ok
// SIG undefined FUN_1426c0af0(void)

void FUN_1426c0af0(undefined8 param_1)

{
  FUN_1426bada0();
  FUN_141755460(param_1);
  return;
}



// FUNCTION 1426c0b10 FinishDestroy body=106 status=ok
// SIG undefined FinishDestroy(void)

void UPhysicalMaterial::FinishDestroy(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = DAT_146b089c8;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    lVar2 = (longlong)DAT_146b089c8;
    DAT_146b089c8 = DAT_146b089c8 + 1;
    if (DAT_146b089cc < DAT_146b089c8) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146b089c0,iVar1);
    }
    *(undefined8 *)(DAT_146b089c0 + lVar2 * 8) = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  FUN_141755460(param_1);
  return;
}



// FUNCTION 1426c0b80 Flush body=48 status=ok
// SIG undefined Flush(void)

void FPhysCommandHandler::Flush(longlong param_1)

{
  FUN_1426bfe70();
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1426c0bb0 FlushData body=104 status=ok
// SIG undefined FlushData(void)

void FFormatContainer::FlushData(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  lVar3 = (longlong)(int)param_1[1] * 0x10 + lVar2;
  for (; lVar2 != lVar3; lVar2 = lVar2 + 0x10) {
    puVar1 = *(undefined8 **)(lVar2 + 8);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1,0);
  }
  return;
}



// FUNCTION 1426c0c20 Free body=34 status=ok
// SIG undefined Free(void)

void FConstraintInstance::Free(longlong param_1)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1a8);
  FMemory::Free(param_1);
  return;
}



// FUNCTION 1426c0c50 FUN_1426c0c50 body=439 status=ok
// SIG undefined FUN_1426c0c50(void)

void FUN_1426c0c50(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  bool bVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong local_res10;
  
  plVar10 = (longlong *)(param_1 + 0x50);
  plVar1 = (longlong *)(param_1 + 0x68);
  bVar5 = false;
  plVar6 = plVar10;
  if (plVar10 != plVar1) {
    do {
      if ((longlong *)*plVar6 != (longlong *)0x0) {
        lVar7 = *(longlong *)*plVar6;
        lVar8 = *(longlong *)(lVar7 + 0x1f0);
        if (*(longlong *)(lVar7 + 0x1f0) == 0) {
          lVar8 = lVar7 + 0x140;
        }
        lVar9 = (longlong)*(int *)(lVar7 + 0x1f8) * 0x58 + lVar8;
        if (lVar8 != lVar9) {
          do {
            FUN_141edf360(lVar8);
            lVar8 = lVar8 + 0x58;
          } while (lVar8 != lVar9);
          lVar7 = *(longlong *)*plVar6;
        }
        FUN_141edf360(lVar7);
        FUN_141edf360(*(longlong *)*plVar6 + 0xe8);
        FUN_141edf360(*(undefined8 *)(*plVar6 + 8));
        if (*(longlong *)(*plVar6 + 0x10) != 0) {
          FUN_141edf360();
        }
        bVar5 = true;
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
    if (bVar5) {
      local_res10 = 0;
      FUN_141edede0(&local_res10,0);
      FRenderCommandFence::Wait(&local_res10,0);
      if (local_res10 != 0) {
        LOCK();
        piVar2 = (int *)(local_res10 + 0x48);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          FGraphEvent::Recycle();
        }
      }
    }
  }
  for (; plVar10 != plVar1; plVar10 = plVar10 + 1) {
    plVar6 = (longlong *)*plVar10;
    if (plVar6 != (longlong *)0x0) {
      lVar7 = *plVar6;
      if (lVar7 != 0) {
        FUN_140944f50(lVar7 + 0x140);
        FPositionVertexBuffer::~FPositionVertexBuffer(lVar7 + 0xe8);
        FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer(lVar7);
        FMemory::operator_delete(lVar7,0x208);
        plVar6 = (longlong *)*plVar10;
      }
      puVar4 = (undefined8 *)plVar6[1];
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
        plVar6 = (longlong *)*plVar10;
      }
      puVar4 = (undefined8 *)plVar6[2];
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
        plVar6 = (longlong *)*plVar10;
      }
      FMemory::operator_delete(plVar6,0x18);
      *plVar10 = 0;
    }
  }
  return;
}



// FUNCTION 1426c0e10 FUN_1426c0e10 body=11969 status=ok
// SIG undefined FUN_1426c0e10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1426c0e10(longlong *param_1,float *param_2,undefined4 param_3,ulonglong param_4,
                  char param_5,char param_6,undefined1 param_7,uint param_8,longlong *param_9)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  char cVar15;
  int iVar16;
  undefined4 uVar17;
  uint uVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  float *pfVar23;
  undefined4 *puVar24;
  longlong *plVar25;
  longlong *plVar26;
  longlong *plVar27;
  ulonglong uVar28;
  longlong lVar29;
  longlong lVar30;
  uint uVar31;
  bool bVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
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
  float fVar76;
  undefined4 local_res18 [4];
  undefined1 auStack_c08 [32];
  undefined1 *local_be8;
  longlong *local_be0;
  undefined1 local_bd8;
  uint local_bd0;
  longlong *local_bc8;
  undefined1 local_bc0;
  undefined1 local_bb8;
  undefined1 local_bb0;
  undefined4 local_ba8;
  undefined4 local_ba0;
  undefined8 *local_b98;
  float local_b88;
  float fStack_b84;
  float local_b80;
  undefined1 local_b78;
  undefined4 local_b70;
  ulonglong local_b68;
  float local_b58;
  float fStack_b54;
  float fStack_b50;
  float fStack_b4c;
  float local_b48;
  float fStack_b44;
  float fStack_b40;
  float fStack_b3c;
  float local_b38;
  float fStack_b34;
  float fStack_b30;
  float fStack_b2c;
  undefined1 local_b28 [8];
  float fStack_b20;
  float fStack_b1c;
  longlong local_b18;
  undefined4 local_b10;
  undefined4 local_b08;
  undefined4 local_b00;
  undefined4 local_af8;
  undefined4 local_af0;
  undefined4 local_ae8;
  int iStack_ae4;
  longlong *local_ae0;
  longlong local_ad8;
  int local_ad0;
  undefined4 local_acc;
  float local_ac8;
  float fStack_ac4;
  float fStack_ac0;
  float fStack_abc;
  float local_ab8;
  float fStack_ab4;
  float fStack_ab0;
  float fStack_aac;
  float local_aa8;
  float fStack_aa4;
  float fStack_aa0;
  float fStack_a9c;
  float local_a98;
  float fStack_a94;
  float fStack_a90;
  float fStack_a8c;
  float local_a88;
  float fStack_a84;
  float fStack_a80;
  float fStack_a7c;
  float local_a78;
  float fStack_a74;
  float fStack_a70;
  float fStack_a6c;
  float local_a68;
  float fStack_a64;
  float fStack_a60;
  float fStack_a5c;
  float local_a58;
  float fStack_a54;
  float fStack_a50;
  float fStack_a4c;
  float local_a48;
  float fStack_a44;
  float fStack_a40;
  float fStack_a3c;
  float local_a38;
  float fStack_a34;
  float fStack_a30;
  float fStack_a2c;
  float local_a28;
  float fStack_a24;
  float fStack_a20;
  float fStack_a1c;
  float local_a18;
  float fStack_a14;
  float fStack_a10;
  float fStack_a0c;
  float local_a08;
  float fStack_a04;
  float fStack_a00;
  float fStack_9fc;
  float local_9f8;
  float fStack_9f4;
  float fStack_9f0;
  float fStack_9ec;
  float local_9e8;
  float fStack_9e4;
  float fStack_9e0;
  float fStack_9dc;
  float local_9d8;
  float fStack_9d4;
  float fStack_9d0;
  float fStack_9cc;
  float local_9c8;
  float fStack_9c4;
  float fStack_9c0;
  float fStack_9bc;
  float local_9b8;
  float fStack_9b4;
  float fStack_9b0;
  float fStack_9ac;
  float local_9a8;
  float fStack_9a4;
  float fStack_9a0;
  float fStack_99c;
  float local_998;
  float fStack_994;
  float fStack_990;
  float fStack_98c;
  float local_988;
  float fStack_984;
  float fStack_980;
  float fStack_97c;
  float local_978;
  float fStack_974;
  float fStack_970;
  float fStack_96c;
  float local_968;
  float fStack_964;
  float fStack_960;
  float fStack_95c;
  float local_958;
  float fStack_954;
  float fStack_950;
  float fStack_94c;
  float local_948;
  float fStack_944;
  float fStack_940;
  float fStack_93c;
  longlong local_938 [2];
  undefined1 local_928 [16];
  undefined8 local_918;
  float fStack_910;
  float fStack_90c;
  float local_908;
  float local_904;
  float local_900;
  float local_8fc;
  float local_8f8;
  float local_8f4;
  undefined8 local_8e8;
  undefined4 local_8e0;
  float local_8d8;
  float fStack_8d4;
  float fStack_8d0;
  float fStack_8cc;
  undefined1 local_8c8 [16];
  undefined1 local_8b8 [8];
  float fStack_8b0;
  float fStack_8ac;
  float local_8a8;
  float fStack_8a4;
  float fStack_8a0;
  float fStack_89c;
  undefined1 local_898 [16];
  undefined1 local_888 [8];
  float fStack_880;
  float fStack_87c;
  float local_878;
  float fStack_874;
  float fStack_870;
  float fStack_86c;
  undefined1 local_868 [8];
  float fStack_860;
  float fStack_85c;
  undefined1 local_858 [8];
  float fStack_850;
  float fStack_84c;
  float local_848;
  float fStack_844;
  float fStack_840;
  float fStack_83c;
  undefined1 local_838 [8];
  float fStack_830;
  float fStack_82c;
  float local_828;
  float fStack_824;
  float fStack_820;
  float fStack_81c;
  float local_818;
  float fStack_814;
  float fStack_810;
  float fStack_80c;
  float local_808;
  float fStack_804;
  float fStack_800;
  float fStack_7fc;
  float local_7f8;
  float fStack_7f4;
  float fStack_7f0;
  float fStack_7ec;
  float local_7e8;
  float fStack_7e4;
  float fStack_7e0;
  float fStack_7dc;
  undefined8 local_7d8;
  undefined4 local_7d0;
  float local_7b8;
  float fStack_7b4;
  float fStack_7b0;
  float fStack_7ac;
  float local_7a8;
  float fStack_7a4;
  float fStack_7a0;
  float fStack_79c;
  float local_798;
  float fStack_794;
  float fStack_790;
  float fStack_78c;
  undefined8 local_788;
  undefined8 uStack_780;
  undefined8 local_778;
  undefined8 uStack_770;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined8 local_738;
  undefined8 local_730;
  undefined8 local_728;
  undefined8 uStack_720;
  undefined1 local_718 [16];
  uint local_708;
  float fStack_704;
  float fStack_700;
  uint uStack_6fc;
  float local_6f8;
  uint uStack_6f4;
  float fStack_6f0;
  uint uStack_6ec;
  float local_6e8;
  float fStack_6e4;
  uint uStack_6e0;
  uint uStack_6dc;
  undefined4 local_6d8;
  undefined4 uStack_6d4;
  undefined4 uStack_6d0;
  float fStack_6cc;
  undefined1 local_6c8 [32];
  float local_6a8;
  float fStack_6a4;
  float fStack_6a0;
  uint uStack_69c;
  float local_698;
  float fStack_694;
  float fStack_690;
  uint uStack_68c;
  float local_688;
  float fStack_684;
  float fStack_680;
  uint uStack_67c;
  float local_678;
  float fStack_674;
  float fStack_670;
  float fStack_66c;
  undefined1 local_668 [16];
  undefined1 local_658 [16];
  float local_648;
  float fStack_644;
  float fStack_640;
  float fStack_63c;
  undefined1 local_638 [16];
  undefined1 local_628 [16];
  float local_618;
  float fStack_614;
  float fStack_610;
  float fStack_60c;
  float local_608;
  float fStack_604;
  float fStack_600;
  uint uStack_5fc;
  float local_5f8;
  float fStack_5f4;
  float fStack_5f0;
  float fStack_5ec;
  float local_5e8;
  float fStack_5e4;
  float fStack_5e0;
  float fStack_5dc;
  float local_5d8;
  float fStack_5d4;
  float fStack_5d0;
  float fStack_5cc;
  float local_5c8;
  float fStack_5c4;
  float fStack_5c0;
  float fStack_5bc;
  float local_5b8;
  float fStack_5b4;
  float fStack_5b0;
  float fStack_5ac;
  float local_5a8;
  float fStack_5a4;
  float fStack_5a0;
  float fStack_59c;
  float local_598;
  float fStack_594;
  float fStack_590;
  float fStack_58c;
  float local_588;
  float fStack_584;
  float fStack_580;
  float fStack_57c;
  float local_578;
  float fStack_574;
  float fStack_570;
  float fStack_56c;
  float local_568;
  float fStack_564;
  float fStack_560;
  float fStack_55c;
  float local_558;
  float fStack_554;
  float fStack_550;
  float fStack_54c;
  float local_548;
  float fStack_544;
  float fStack_540;
  float fStack_53c;
  float local_538;
  float fStack_534;
  float fStack_530;
  float fStack_52c;
  float local_528;
  float fStack_524;
  float fStack_520;
  float fStack_51c;
  float local_518;
  float fStack_514;
  float fStack_510;
  float fStack_50c;
  float local_508;
  float fStack_504;
  float fStack_500;
  float fStack_4fc;
  float local_4f8;
  float fStack_4f4;
  float fStack_4f0;
  float fStack_4ec;
  float local_4e8;
  float fStack_4e4;
  float fStack_4e0;
  float fStack_4dc;
  float local_4d8;
  float fStack_4d4;
  float fStack_4d0;
  float fStack_4cc;
  float local_4c8;
  float fStack_4c4;
  float fStack_4c0;
  float fStack_4bc;
  float local_4b8;
  float fStack_4b4;
  float fStack_4b0;
  float fStack_4ac;
  float local_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float fStack_49c;
  float local_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  float local_488;
  float fStack_484;
  float fStack_480;
  float fStack_47c;
  float local_478;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  float local_468;
  float fStack_464;
  float fStack_460;
  float fStack_45c;
  float local_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  float local_448;
  float fStack_444;
  float fStack_440;
  float fStack_43c;
  float local_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  float local_428;
  float fStack_424;
  float fStack_420;
  float fStack_41c;
  float local_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float local_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  float local_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float local_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float fStack_3dc;
  float local_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float local_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  float local_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float local_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float local_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  undefined1 local_388 [16];
  float local_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  float local_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  float local_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float local_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  float local_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  float local_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  float local_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float local_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  undefined1 local_2e8 [416];
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined1 local_138 [8];
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [8];
  float fStack_100;
  float fStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  ulonglong uVar32;
  
  local_res18[0] = param_3;
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_c08;
  local_b88 = param_2[8];
  fStack_b84 = param_2[9];
  local_b80 = param_2[10];
  fStack_60c = param_2[0xb];
  local_b38 = (float)((uint)_DAT_146b07a10 & _DAT_146b07a20);
  fStack_b34 = (float)((uint)fRam0000000146b07a14 & uRam0000000146b07a24);
  fStack_b30 = (float)((uint)fRam0000000146b07a18 & uRam0000000146b07a28);
  fStack_b2c = (float)((uint)fRam0000000146b07a1c & uRam0000000146b07a2c);
  lVar30 = (longlong)(int)param_8;
  fVar55 = *param_2;
  fVar59 = param_2[1];
  fVar62 = param_2[2];
  fVar64 = param_2[3];
  local_b48 = param_2[4];
  fStack_b44 = param_2[5];
  fStack_b40 = param_2[6];
  fStack_b3c = param_2[7];
  uVar28 = 0;
  local_b78 = param_7;
  local_ae0 = param_9;
  auVar46._0_4_ = fVar55 * fVar55 + fVar62 * fVar62;
  auVar46._4_4_ = fVar59 * fVar59 + fVar64 * fVar64;
  auVar46._8_4_ = fVar62 * fVar62 + fVar55 * fVar55;
  auVar46._12_4_ = fVar64 * fVar64 + fVar59 * fVar59;
  fVar66 = auVar46._4_4_ + auVar46._0_4_;
  fVar67 = auVar46._8_4_ + auVar46._4_4_;
  fVar68 = auVar46._12_4_ + auVar46._8_4_;
  fVar69 = auVar46._0_4_ + auVar46._12_4_;
  auVar47._4_4_ = fVar67;
  auVar47._0_4_ = fVar66;
  auVar47._8_4_ = fVar68;
  auVar47._12_4_ = fVar69;
  auVar47 = rsqrtps(auVar46,auVar47);
  fVar54 = auVar47._0_4_;
  fVar56 = auVar47._4_4_;
  fVar60 = auVar47._8_4_;
  fVar63 = auVar47._12_4_;
  fVar54 = (_DAT_146b07a90 - fVar54 * fVar54 * fVar66 * _DAT_146b07a90) * fVar54 + fVar54;
  fVar56 = (fRam0000000146b07a94 - fVar56 * fVar56 * fVar67 * fRam0000000146b07a94) * fVar56 +
           fVar56;
  fVar60 = (fRam0000000146b07a98 - fVar60 * fVar60 * fVar68 * fRam0000000146b07a98) * fVar60 +
           fVar60;
  fVar63 = (fRam0000000146b07a9c - fVar63 * fVar63 * fVar69 * fRam0000000146b07a9c) * fVar63 +
           fVar63;
  local_b58 = (float)(((uint)(((_DAT_146b07a90 - fVar54 * fVar54 * fVar66 * _DAT_146b07a90) * fVar54
                              + fVar54) * fVar55) ^ _DAT_146b07a80) &
                      -(uint)(_DAT_146b07b30 <= fVar66) ^ _DAT_146b07a80);
  fStack_b54 = (float)(((uint)(((fRam0000000146b07a94 -
                                fVar56 * fVar56 * fVar67 * fRam0000000146b07a94) * fVar56 + fVar56)
                              * fVar59) ^ uRam0000000146b07a84) &
                       -(uint)(fRam0000000146b07b34 <= fVar67) ^ uRam0000000146b07a84);
  fStack_b50 = (float)(((uint)(((fRam0000000146b07a98 -
                                fVar60 * fVar60 * fVar68 * fRam0000000146b07a98) * fVar60 + fVar60)
                              * fVar62) ^ uRam0000000146b07a88) &
                       -(uint)(fRam0000000146b07b38 <= fVar68) ^ uRam0000000146b07a88);
  fStack_b4c = (float)(((uint)(((fRam0000000146b07a9c -
                                fVar63 * fVar63 * fVar69 * fRam0000000146b07a9c) * fVar63 + fVar63)
                              * fVar64) ^ uRam0000000146b07a8c) &
                       -(uint)(fRam0000000146b07b3c <= fVar69) ^ uRam0000000146b07a8c);
  uVar32 = uVar28;
  local_b68 = param_4;
  local_618 = local_b88;
  fStack_614 = fStack_b84;
  fStack_610 = local_b80;
  if (0 < (int)param_1[1]) {
    do {
      fVar63 = fStack_b2c;
      fVar60 = fStack_b30;
      fVar56 = fStack_b34;
      fVar54 = local_b38;
      fVar64 = fRam0000000146b07a1c;
      fVar62 = fRam0000000146b07a18;
      fVar59 = fRam0000000146b07a14;
      fVar55 = _DAT_146b07a10;
      lVar29 = *param_1;
      fVar69 = (float)((uint)_DAT_146b07a10 & _DAT_146b07a20);
      fVar74 = (float)((uint)fRam0000000146b07a14 & uRam0000000146b07a24);
      fVar75 = (float)((uint)fRam0000000146b07a18 & uRam0000000146b07a28);
      fVar76 = (float)((uint)fRam0000000146b07a1c & uRam0000000146b07a2c);
      local_848 = 0.0;
      fStack_844 = 0.0;
      fStack_840 = 0.0;
      fStack_83c = fRam0000000146b07a1c;
      auVar34._4_4_ = fVar74;
      auVar34._0_4_ = fVar69;
      auVar34._8_4_ = fVar75;
      auVar34._12_4_ = fVar76;
      auVar9._4_4_ = fStack_b34;
      auVar9._0_4_ = local_b38;
      auVar9._8_4_ = fStack_b30;
      auVar9._12_4_ = fStack_b2c;
      auVar47 = minps(auVar34,auVar9);
      auVar35._4_4_ = -(uint)(auVar47._4_4_ < fRam0000000146b07ab4);
      auVar35._0_4_ = -(uint)(auVar47._0_4_ < _DAT_146b07ab0);
      auVar35._8_4_ = -(uint)(auVar47._8_4_ < fRam0000000146b07ab8);
      auVar35._12_4_ = -(uint)(auVar47._12_4_ < fRam0000000146b07abc);
      iVar16 = movmskps((int)lVar29,auVar35);
      fVar66 = local_b88 * *(float *)(lVar29 + 0xa0 + uVar28);
      fVar67 = fStack_b84 * *(float *)(lVar29 + 0xa4 + uVar28);
      fVar68 = local_b80 * *(float *)(lVar29 + 0xa8 + uVar28);
      local_b28._4_4_ = fRam0000000146b07ab4;
      local_b28._0_4_ = _DAT_146b07ab0;
      fStack_b20 = fRam0000000146b07ab8;
      fStack_b1c = fRam0000000146b07abc;
      local_838._4_4_ = fVar67;
      local_838._0_4_ = fVar66;
      fStack_830 = fVar68;
      fStack_82c = 0.0;
      if (iVar16 == 0) {
        fVar66 = fVar66 * local_b38;
        fVar67 = fVar67 * fStack_b34;
        fVar68 = fVar68 * fStack_b30;
        fVar57 = fStack_b2c * 0.0;
        local_848 = fRam0000000146b07a1c * local_b58 * _DAT_146b07a70 + fStack_b4c * 0.0 +
                    fStack_b54 * 0.0 * _DAT_146b07a60 + fStack_b50 * 0.0 * _DAT_146b07a50;
        fStack_844 = local_b58 * 0.0 * fRam0000000146b07a74 + fStack_b4c * 0.0 +
                     fRam0000000146b07a1c * fStack_b54 * fRam0000000146b07a64 +
                     fStack_b50 * 0.0 * fRam0000000146b07a54;
        fStack_840 = local_b58 * 0.0 * fRam0000000146b07a78 + fStack_b4c * 0.0 +
                     fStack_b54 * 0.0 * fRam0000000146b07a68 +
                     fRam0000000146b07a1c * fStack_b50 * fRam0000000146b07a58;
        fStack_83c = local_b58 * 0.0 * fRam0000000146b07a7c + fRam0000000146b07a1c * fStack_b4c +
                     fStack_b54 * 0.0 * fRam0000000146b07a6c +
                     fStack_b50 * 0.0 * fRam0000000146b07a5c;
        fVar55 = fVar68 * fStack_b54 - fVar67 * fStack_b50;
        fVar59 = fVar66 * fStack_b50 - fVar68 * local_b58;
        fVar62 = fVar67 * local_b58 - fVar66 * fStack_b54;
        fVar64 = fVar57 * fStack_b4c - fVar57 * fStack_b4c;
        fVar55 = fVar55 + fVar55;
        fVar59 = fVar59 + fVar59;
        fVar62 = fVar62 + fVar62;
        fVar64 = fVar64 + fVar64;
        local_838._0_4_ =
             (fVar62 * fStack_b54 - fVar59 * fStack_b50) + fStack_b4c * fVar55 + fVar66 + local_b48;
        local_838._4_4_ =
             (fVar55 * fStack_b50 - fVar62 * local_b58) + fStack_b4c * fVar59 + fVar67 + fStack_b44;
        fStack_830 = (fVar59 * local_b58 - fVar55 * fStack_b54) + fStack_b4c * fVar62 + fVar68 +
                     fStack_b40;
        fStack_82c = (fVar64 * fStack_b4c - fVar64 * fStack_b4c) + fStack_b4c * fVar64 + fVar57 +
                     fStack_b3c;
      }
      else {
        fVar57 = fStack_b54 + fStack_b54;
        fVar61 = fStack_b50 + fStack_b50;
        fVar70 = fVar69 * local_b38;
        fVar71 = fVar74 * fStack_b34;
        fVar72 = fVar75 * fStack_b30;
        fVar73 = fVar76 * fStack_b2c;
        fVar65 = (local_b58 + local_b58) * local_b58;
        fVar58 = (local_b58 + local_b58) * fStack_b4c;
        fStack_5f4 = (fVar61 * fStack_b4c + fVar57 * local_b58) * local_b38;
        fStack_5e0 = (fVar58 + fVar61 * fStack_b54) * fStack_b34;
        local_5d8 = (fVar57 * fStack_b4c + fVar61 * local_b58) * fStack_b30;
        local_5e8 = fStack_b34 * (fVar57 * local_b58 - fVar61 * fStack_b4c);
        fStack_5d4 = fStack_b30 * (fVar61 * fStack_b54 - fVar58);
        fStack_5f0 = local_b38 * (fVar61 * local_b58 - fVar57 * fStack_b4c);
        local_5f8 = (float)((uint)((_DAT_146b07a10 - (fVar61 * fStack_b50 + fVar57 * fStack_b54)) *
                                  local_b38) & _DAT_146b07a20);
        fStack_5e4 = (float)((uint)((fRam0000000146b07a14 - (fVar61 * fStack_b50 + fVar65)) *
                                   fStack_b34) & uRam0000000146b07a24);
        fStack_5d0 = (float)((uint)((fRam0000000146b07a18 - (fVar57 * fStack_b54 + fVar65)) *
                                   fStack_b30) & uRam0000000146b07a28);
        fStack_5ec = (float)((uint)((fRam0000000146b07a1c - (fVar65 + fVar65)) * fStack_b2c) &
                            uRam0000000146b07a2c);
        fStack_5bc = fRam0000000146b07a1c;
        fStack_5b4 = (fRam0000000146b07a1c * 0.0 + 0.0) * fVar69;
        fStack_5a0 = (fRam0000000146b07a1c * 0.0 + 0.0) * fVar74;
        local_598 = (fRam0000000146b07a1c * 0.0 + 0.0) * fVar75;
        local_5a8 = fVar74 * (0.0 - fRam0000000146b07a1c * 0.0);
        fStack_594 = fVar75 * (0.0 - fRam0000000146b07a1c * 0.0);
        fStack_5b0 = fVar69 * (0.0 - fRam0000000146b07a1c * 0.0);
        local_5b8 = (float)((uint)((_DAT_146b07a10 - 0.0) * fVar69) & _DAT_146b07a20);
        fStack_5a4 = (float)((uint)((fRam0000000146b07a14 - 0.0) * fVar74) & uRam0000000146b07a24);
        fStack_590 = (float)((uint)((fRam0000000146b07a18 - 0.0) * fVar75) & uRam0000000146b07a28);
        fStack_5ac = (float)((uint)((fRam0000000146b07a1c - 0.0) * fVar76) & uRam0000000146b07a2c);
        local_9f8 = local_5b8 * local_5f8 + fStack_5b4 * local_5e8 + fStack_5b0 * local_5d8 +
                    fStack_5ac * local_b48;
        fStack_9f4 = local_5b8 * fStack_5f4 + fStack_5b4 * fStack_5e4 + fStack_5b0 * fStack_5d4 +
                     fStack_5ac * fStack_b44;
        fStack_9f0 = local_5b8 * fStack_5f0 + fStack_5b4 * fStack_5e0 + fStack_5b0 * fStack_5d0 +
                     fStack_5ac * fStack_b40;
        fStack_9ec = local_5b8 * fStack_5ec + fStack_5b4 * fStack_5ec + fStack_5b0 * fStack_5ec +
                     fStack_5ac * fRam0000000146b07a1c;
        fStack_57c = fRam0000000146b07a1c;
        local_9e8 = local_5a8 * local_5f8 + fStack_5a4 * local_5e8 + fStack_5a0 * local_5d8 +
                    fStack_5ac * local_b48;
        fStack_9e4 = local_5a8 * fStack_5f4 + fStack_5a4 * fStack_5e4 + fStack_5a0 * fStack_5d4 +
                     fStack_5ac * fStack_b44;
        fStack_9e0 = local_5a8 * fStack_5f0 + fStack_5a4 * fStack_5e0 + fStack_5a0 * fStack_5d0 +
                     fStack_5ac * fStack_b40;
        fStack_9dc = local_5a8 * fStack_5ec + fStack_5a4 * fStack_5ec + fStack_5a0 * fStack_5ec +
                     fStack_5ac * fRam0000000146b07a1c;
        local_9d8 = local_598 * local_5f8 + fStack_594 * local_5e8 + fStack_590 * local_5d8 +
                    fStack_5ac * local_b48;
        fStack_9d4 = local_598 * fStack_5f4 + fStack_594 * fStack_5e4 + fStack_590 * fStack_5d4 +
                     fStack_5ac * fStack_b44;
        fStack_9d0 = local_598 * fStack_5f0 + fStack_594 * fStack_5e0 + fStack_590 * fStack_5d0 +
                     fStack_5ac * fStack_b40;
        fStack_9cc = local_598 * fStack_5ec + fStack_594 * fStack_5ec + fStack_590 * fStack_5ec +
                     fStack_5ac * fRam0000000146b07a1c;
        local_9c8 = fVar66 * local_5f8 + fVar67 * local_5e8 + fVar68 * local_5d8 +
                    fRam0000000146b07a1c * local_b48;
        fStack_9c4 = fVar66 * fStack_5f4 + fVar67 * fStack_5e4 + fVar68 * fStack_5d4 +
                     fRam0000000146b07a1c * fStack_b44;
        fStack_9c0 = fVar66 * fStack_5f0 + fVar67 * fStack_5e0 + fVar68 * fStack_5d0 +
                     fRam0000000146b07a1c * fStack_b40;
        fStack_9bc = fVar66 * fStack_5ec + fVar67 * fStack_5ec + fVar68 * fStack_5ec +
                     fRam0000000146b07a1c * fRam0000000146b07a1c;
        local_828 = fVar69;
        fStack_824 = fVar74;
        fStack_820 = fVar75;
        fStack_81c = fVar76;
        fStack_5dc = fStack_5ec;
        fStack_5cc = fStack_5ec;
        local_5c8 = local_b48;
        fStack_5c4 = fStack_b44;
        fStack_5c0 = fStack_b40;
        fStack_59c = fStack_5ac;
        fStack_58c = fStack_5ac;
        local_588 = fVar66;
        fStack_584 = fVar67;
        fStack_580 = fVar68;
        FMatrix::RemoveScaling(&local_9f8);
        local_608 = (float)(-(uint)((float)local_b28._0_4_ <= fVar70) &
                            (_DAT_146b07aa0 ^ (uint)fVar55) ^ _DAT_146b07aa0);
        fStack_604 = (float)(-(uint)((float)local_b28._4_4_ <= fVar71) &
                             (uRam0000000146b07aa4 ^ (uint)fVar59) ^ uRam0000000146b07aa4);
        fStack_600 = (float)(-(uint)(fStack_b20 <= fVar72) & (uRam0000000146b07aa8 ^ (uint)fVar62) ^
                            uRam0000000146b07aa8);
        uStack_5fc = -(uint)(fStack_b1c <= fVar73) & (uRam0000000146b07aac ^ (uint)fVar64) ^
                     uRam0000000146b07aac;
        local_9f8 = local_9f8 * local_608;
        fStack_9f4 = fStack_9f4 * local_608;
        fStack_9f0 = fStack_9f0 * local_608;
        fStack_9e4 = fStack_9e4 * fStack_604;
        fStack_9e0 = fStack_9e0 * fStack_604;
        local_9e8 = local_9e8 * fStack_604;
        fStack_9d4 = fStack_9d4 * fStack_600;
        fStack_9d0 = fStack_9d0 * fStack_600;
        local_9d8 = local_9d8 * fStack_600;
        FQuat::FQuat(&local_818);
        local_b10 = 0x322bcc77;
        auVar48._0_4_ = local_818 * local_818 + fStack_810 * fStack_810;
        auVar48._4_4_ = fStack_814 * fStack_814 + fStack_80c * fStack_80c;
        auVar48._8_4_ = fStack_810 * fStack_810 + local_818 * local_818;
        auVar48._12_4_ = fStack_80c * fStack_80c + fStack_814 * fStack_814;
        fVar66 = auVar48._4_4_ + auVar48._0_4_;
        fVar67 = auVar48._8_4_ + auVar48._4_4_;
        fVar68 = auVar48._12_4_ + auVar48._8_4_;
        fVar57 = auVar48._0_4_ + auVar48._12_4_;
        auVar3._4_4_ = fVar67;
        auVar3._0_4_ = fVar66;
        auVar3._8_4_ = fVar68;
        auVar3._12_4_ = fVar57;
        auVar47 = rsqrtps(auVar48,auVar3);
        fVar55 = auVar47._0_4_;
        fVar59 = auVar47._4_4_;
        fVar62 = auVar47._8_4_;
        fVar64 = auVar47._12_4_;
        fVar55 = (_DAT_146b07a90 - fVar55 * fVar55 * fVar66 * _DAT_146b07a90) * fVar55 + fVar55;
        fVar59 = (fRam0000000146b07a94 - fVar59 * fVar59 * fVar67 * fRam0000000146b07a94) * fVar59 +
                 fVar59;
        fVar62 = (fRam0000000146b07a98 - fVar62 * fVar62 * fVar68 * fRam0000000146b07a98) * fVar62 +
                 fVar62;
        fVar64 = (fRam0000000146b07a9c - fVar64 * fVar64 * fVar57 * fRam0000000146b07a9c) * fVar64 +
                 fVar64;
        local_848 = (float)(((uint)(((_DAT_146b07a90 - fVar55 * fVar55 * fVar66 * _DAT_146b07a90) *
                                     fVar55 + fVar55) * local_818) ^ _DAT_146b07a80) &
                            -(uint)(1e-08 <= fVar66) ^ _DAT_146b07a80);
        fStack_844 = (float)(((uint)(((fRam0000000146b07a94 -
                                      fVar59 * fVar59 * fVar67 * fRam0000000146b07a94) * fVar59 +
                                     fVar59) * fStack_814) ^ uRam0000000146b07a84) &
                             -(uint)(1e-08 <= fVar67) ^ uRam0000000146b07a84);
        fStack_840 = (float)(((uint)(((fRam0000000146b07a98 -
                                      fVar62 * fVar62 * fVar68 * fRam0000000146b07a98) * fVar62 +
                                     fVar62) * fStack_810) ^ uRam0000000146b07a88) &
                             -(uint)(1e-08 <= fVar68) ^ uRam0000000146b07a88);
        fStack_83c = (float)(((uint)(((fRam0000000146b07a9c -
                                      fVar64 * fVar64 * fVar57 * fRam0000000146b07a9c) * fVar64 +
                                     fVar64) * fStack_80c) ^ uRam0000000146b07a8c) &
                             -(uint)(1e-08 <= fVar57) ^ uRam0000000146b07a8c);
        fStack_82c = 0.0;
        local_838._0_4_ = local_9c8;
        local_838._4_4_ = fStack_9c4;
        fStack_830 = fStack_9c0;
        local_818 = local_848;
        fStack_814 = fStack_844;
        fStack_810 = fStack_840;
        fStack_80c = fStack_83c;
      }
      fStack_81c = fVar76 * fVar63;
      fStack_820 = fVar75 * fVar60;
      fStack_824 = fVar74 * fVar56;
      local_828 = fVar69 * fVar54;
      if (param_6 == '\0') {
        plVar26 = (longlong *)param_9[0x11];
        if ((longlong *)param_9[0x11] == (longlong *)0x0) {
          plVar26 = param_9 + 0xf;
        }
        local_be8 = (undefined1 *)CONCAT44(local_be8._4_4_,local_res18[0]);
        FUN_1426be330((longlong)(int)uVar32 * 0xb0 + *param_1,plVar26[lVar30],&local_848,&local_b88)
        ;
      }
      else {
        local_908 = ABS(local_b88);
        if (ABS(fStack_b84) <= ABS(local_b88)) {
          local_908 = ABS(fStack_b84);
        }
        local_bc8 = param_9;
        local_bd0 = param_8;
        local_bd8 = 0;
        if (ABS(local_b80) <= local_908) {
          local_908 = ABS(local_b80);
        }
        local_be0 = (longlong *)((ulonglong)local_be0 & 0xffffffffffffff00);
        local_908 = local_908 * *(float *)(*param_1 + 0xac + uVar28);
        local_be8 = (undefined1 *)local_b68;
        local_904 = local_908;
        local_900 = local_908;
        local_8fc = (float)local_838._0_4_;
        local_8f8 = (float)local_838._4_4_;
        local_8f4 = fStack_830;
        local_2f8 = (float)local_838._0_4_;
        fStack_2f4 = (float)local_838._4_4_;
        fStack_2f0 = fStack_830;
        fStack_2ec = fStack_82c;
        GetSphereMesh(&local_8fc,&local_908,0x10,8);
      }
      uVar31 = (int)uVar32 + 1;
      uVar32 = (ulonglong)uVar31;
      uVar28 = uVar28 + 0xb0;
    } while ((int)uVar31 < (int)param_1[1]);
  }
  uVar28 = 0;
  uVar32 = uVar28;
  if (0 < (int)param_1[3]) {
    do {
      lVar29 = param_1[2];
      uVar17 = FRotator::Quaternion(lVar29 + 0xbc + uVar28);
      fVar64 = fRam0000000146b07a1c;
      fVar62 = fRam0000000146b07a18;
      fVar59 = fRam0000000146b07a14;
      fVar55 = _DAT_146b07a10;
      auVar12._4_4_ = fStack_b34;
      auVar12._0_4_ = local_b38;
      auVar12._8_4_ = fStack_b30;
      auVar12._12_4_ = fStack_b2c;
      local_8d8 = local_798;
      fStack_8d4 = fStack_794;
      fStack_8d0 = fStack_790;
      fStack_8cc = fStack_78c;
      auVar36._4_4_ = DAT_1464aa788._4_4_;
      auVar36._0_4_ = (float)DAT_1464aa788;
      auVar36._8_4_ = DAT_1464aa790;
      auVar36._12_4_ = 0;
      auVar47 = minps(auVar36,auVar12);
      auVar37._4_4_ = -(uint)(auVar47._4_4_ < fRam0000000146b07ab4);
      auVar37._0_4_ = -(uint)(auVar47._0_4_ < _DAT_146b07ab0);
      auVar37._8_4_ = -(uint)(auVar47._8_4_ < fRam0000000146b07ab8);
      auVar37._12_4_ = -(uint)(auVar47._12_4_ < fRam0000000146b07abc);
      fVar54 = local_b88 * *(float *)(uVar28 + 0xb0 + lVar29);
      fVar56 = fStack_b84 * *(float *)(uVar28 + 0xb4 + lVar29);
      fVar60 = local_b80 * *(float *)(uVar28 + 0xb8 + lVar29);
      iVar16 = movmskps(uVar17,auVar37);
      local_b28._4_4_ = DAT_1464aa788._4_4_;
      local_b28._0_4_ = (float)DAT_1464aa788;
      fStack_b20 = DAT_1464aa790;
      fStack_b1c = 0.0;
      local_8b8._4_4_ = DAT_1464aa788._4_4_;
      local_8b8._0_4_ = (float)DAT_1464aa788;
      fStack_8b0 = DAT_1464aa790;
      fStack_8ac = 0.0;
      local_8c8._4_4_ = fVar56;
      local_8c8._0_4_ = fVar54;
      local_8c8._8_4_ = fVar60;
      local_8c8._12_4_ = 0.0;
      local_ac8 = _DAT_146b07ab0;
      fStack_ac4 = fRam0000000146b07ab4;
      fStack_ac0 = fRam0000000146b07ab8;
      fStack_abc = fRam0000000146b07abc;
      if (iVar16 == 0) {
        fVar54 = fVar54 * local_b38;
        fVar56 = fVar56 * fStack_b34;
        fVar60 = fVar60 * fStack_b30;
        fVar63 = fStack_b2c * 0.0;
        local_8b8._4_4_ = DAT_1464aa788._4_4_ * fStack_b34;
        local_8b8._0_4_ = (float)DAT_1464aa788 * local_b38;
        fStack_8b0 = DAT_1464aa790 * fStack_b30;
        fStack_8ac = fStack_b2c * 0.0;
        local_8d8 = fStack_78c * local_b58 * _DAT_146b07a70 + local_798 * fStack_b4c +
                    fStack_790 * fStack_b54 * _DAT_146b07a60 +
                    fStack_794 * fStack_b50 * _DAT_146b07a50;
        fStack_8d4 = fStack_790 * local_b58 * fRam0000000146b07a74 + fStack_794 * fStack_b4c +
                     fStack_78c * fStack_b54 * fRam0000000146b07a64 +
                     local_798 * fStack_b50 * fRam0000000146b07a54;
        fStack_8d0 = fStack_794 * local_b58 * fRam0000000146b07a78 + fStack_790 * fStack_b4c +
                     local_798 * fStack_b54 * fRam0000000146b07a68 +
                     fStack_78c * fStack_b50 * fRam0000000146b07a58;
        fStack_8cc = local_798 * local_b58 * fRam0000000146b07a7c + fStack_78c * fStack_b4c +
                     fStack_794 * fStack_b54 * fRam0000000146b07a6c +
                     fStack_790 * fStack_b50 * fRam0000000146b07a5c;
        fVar55 = fVar60 * fStack_b54 - fVar56 * fStack_b50;
        fVar59 = fVar54 * fStack_b50 - fVar60 * local_b58;
        fVar62 = fVar56 * local_b58 - fVar54 * fStack_b54;
        fVar64 = fVar63 * fStack_b4c - fVar63 * fStack_b4c;
        fVar55 = fVar55 + fVar55;
        fVar59 = fVar59 + fVar59;
        fVar62 = fVar62 + fVar62;
        fVar64 = fVar64 + fVar64;
        local_8c8._0_4_ =
             (fVar62 * fStack_b54 - fVar59 * fStack_b50) + fVar55 * fStack_b4c + fVar54 + local_b48;
        local_8c8._4_4_ =
             (fVar55 * fStack_b50 - fVar62 * local_b58) + fVar59 * fStack_b4c + fVar56 + fStack_b44;
        local_8c8._8_4_ =
             (fVar59 * local_b58 - fVar55 * fStack_b54) + fVar62 * fStack_b4c + fVar60 + fStack_b40;
        local_8c8._12_4_ =
             (fVar64 * fStack_b4c - fVar64 * fStack_b4c) + fVar64 * fStack_b4c + fVar63 + fStack_b3c
        ;
      }
      else {
        fVar63 = fStack_b54 + fStack_b54;
        fVar67 = fStack_b50 + fStack_b50;
        fVar68 = local_b58 * (local_b58 + local_b58);
        fVar66 = (local_b58 + local_b58) * fStack_b4c;
        fVar69 = (float)DAT_1464aa788 * local_b38;
        fVar74 = DAT_1464aa788._4_4_ * fStack_b34;
        fVar75 = DAT_1464aa790 * fStack_b30;
        fVar76 = fStack_b2c * 0.0;
        fStack_574 = (fVar67 * fStack_b4c + fVar63 * local_b58) * local_b38;
        fStack_560 = (fVar66 + fVar67 * fStack_b54) * fStack_b34;
        local_558 = (fVar63 * fStack_b4c + fVar67 * local_b58) * fStack_b30;
        local_568 = fStack_b34 * (fVar63 * local_b58 - fVar67 * fStack_b4c);
        fStack_554 = fStack_b30 * (fVar67 * fStack_b54 - fVar66);
        fStack_570 = local_b38 * (fVar67 * local_b58 - fVar63 * fStack_b4c);
        local_578 = (float)((uint)((_DAT_146b07a10 - (fStack_b50 * fVar67 + fStack_b54 * fVar63)) *
                                  local_b38) & _DAT_146b07a20);
        fStack_564 = (float)((uint)((fRam0000000146b07a14 - (fStack_b50 * fVar67 + fVar68)) *
                                   fStack_b34) & uRam0000000146b07a24);
        fStack_550 = (float)((uint)((fRam0000000146b07a18 - (fStack_b54 * fVar63 + fVar68)) *
                                   fStack_b30) & uRam0000000146b07a28);
        fStack_56c = (float)((uint)((fRam0000000146b07a1c - (fVar68 + fVar68)) * fStack_b2c) &
                            uRam0000000146b07a2c);
        fVar63 = fStack_794 + fStack_794;
        fVar66 = fStack_790 + fStack_790;
        fVar67 = (local_798 + local_798) * local_798;
        fVar68 = fStack_78c * (local_798 + local_798);
        local_548 = local_b48;
        fStack_544 = fStack_b44;
        fStack_540 = fStack_b40;
        fStack_53c = fRam0000000146b07a1c;
        fStack_534 = (fStack_78c * fVar66 + fVar63 * local_798) * (float)DAT_1464aa788;
        fStack_520 = (fVar68 + fVar66 * fStack_794) * DAT_1464aa788._4_4_;
        local_518 = (fStack_78c * fVar63 + fVar66 * local_798) * DAT_1464aa790;
        local_528 = DAT_1464aa788._4_4_ * (fVar63 * local_798 - fStack_78c * fVar66);
        fStack_514 = DAT_1464aa790 * (fVar66 * fStack_794 - fVar68);
        fStack_530 = (float)DAT_1464aa788 * (fVar66 * local_798 - fStack_78c * fVar63);
        local_538 = (float)((uint)((_DAT_146b07a10 - (fVar66 * fStack_790 + fVar63 * fStack_794)) *
                                  (float)DAT_1464aa788) & _DAT_146b07a20);
        fStack_524 = (float)((uint)((fRam0000000146b07a14 - (fVar66 * fStack_790 + fVar67)) *
                                   DAT_1464aa788._4_4_) & uRam0000000146b07a24);
        fStack_510 = (float)((uint)((fRam0000000146b07a18 - (fVar63 * fStack_794 + fVar67)) *
                                   DAT_1464aa790) & uRam0000000146b07a28);
        fStack_52c = (float)((uint)((fRam0000000146b07a1c - (fVar67 + fVar67)) * 0.0) &
                            uRam0000000146b07a2c);
        local_a38 = fStack_534 * local_568 + local_538 * local_578 + fStack_530 * local_558 +
                    fStack_52c * local_b48;
        fStack_a34 = fStack_534 * fStack_564 + local_538 * fStack_574 + fStack_530 * fStack_554 +
                     fStack_52c * fStack_b44;
        fStack_a30 = fStack_534 * fStack_560 + local_538 * fStack_570 + fStack_530 * fStack_550 +
                     fStack_52c * fStack_b40;
        fStack_a2c = fStack_534 * fStack_56c + local_538 * fStack_56c + fStack_530 * fStack_56c +
                     fStack_52c * fRam0000000146b07a1c;
        fStack_4fc = fRam0000000146b07a1c;
        local_a28 = fStack_524 * local_568 + local_528 * local_578 + fStack_520 * local_558 +
                    fStack_52c * local_b48;
        fStack_a24 = fStack_524 * fStack_564 + local_528 * fStack_574 + fStack_520 * fStack_554 +
                     fStack_52c * fStack_b44;
        fStack_a20 = fStack_524 * fStack_560 + local_528 * fStack_570 + fStack_520 * fStack_550 +
                     fStack_52c * fStack_b40;
        fStack_a1c = fStack_524 * fStack_56c + local_528 * fStack_56c + fStack_520 * fStack_56c +
                     fStack_52c * fRam0000000146b07a1c;
        local_a18 = fStack_514 * local_568 + local_518 * local_578 + fStack_510 * local_558 +
                    fStack_52c * local_b48;
        fStack_a14 = fStack_514 * fStack_564 + local_518 * fStack_574 + fStack_510 * fStack_554 +
                     fStack_52c * fStack_b44;
        fStack_a10 = fStack_514 * fStack_560 + local_518 * fStack_570 + fStack_510 * fStack_550 +
                     fStack_52c * fStack_b40;
        fStack_a0c = fStack_514 * fStack_56c + local_518 * fStack_56c + fStack_510 * fStack_56c +
                     fStack_52c * fRam0000000146b07a1c;
        local_a08 = fVar56 * local_568 + fVar54 * local_578 + fVar60 * local_558 +
                    fRam0000000146b07a1c * local_b48;
        fStack_a04 = fVar56 * fStack_564 + fVar54 * fStack_574 + fVar60 * fStack_554 +
                     fRam0000000146b07a1c * fStack_b44;
        fStack_a00 = fVar56 * fStack_560 + fVar54 * fStack_570 + fVar60 * fStack_550 +
                     fRam0000000146b07a1c * fStack_b40;
        fStack_9fc = fVar56 * fStack_56c + fVar54 * fStack_56c + fVar60 * fStack_56c +
                     fRam0000000146b07a1c * fRam0000000146b07a1c;
        fStack_55c = fStack_56c;
        fStack_54c = fStack_56c;
        fStack_51c = fStack_52c;
        fStack_50c = fStack_52c;
        local_508 = fVar54;
        fStack_504 = fVar56;
        fStack_500 = fVar60;
        FMatrix::RemoveScaling(&local_a38);
        local_6a8 = (float)(-(uint)(local_ac8 <= fVar69) & (_DAT_146b07aa0 ^ (uint)fVar55) ^
                           _DAT_146b07aa0);
        fStack_6a4 = (float)(-(uint)(fStack_ac4 <= fVar74) & (uRam0000000146b07aa4 ^ (uint)fVar59) ^
                            uRam0000000146b07aa4);
        fStack_6a0 = (float)(-(uint)(fStack_ac0 <= fVar75) & (uRam0000000146b07aa8 ^ (uint)fVar62) ^
                            uRam0000000146b07aa8);
        uStack_69c = -(uint)(fStack_abc <= fVar76) & (uRam0000000146b07aac ^ (uint)fVar64) ^
                     uRam0000000146b07aac;
        local_a38 = local_a38 * local_6a8;
        fStack_a34 = fStack_a34 * local_6a8;
        fStack_a30 = fStack_a30 * local_6a8;
        fStack_a24 = fStack_a24 * fStack_6a4;
        fStack_a20 = fStack_a20 * fStack_6a4;
        local_a28 = local_a28 * fStack_6a4;
        fStack_a14 = fStack_a14 * fStack_6a0;
        fStack_a10 = fStack_a10 * fStack_6a0;
        local_a18 = local_a18 * fStack_6a0;
        FQuat::FQuat(&local_808);
        local_b08 = 0x322bcc77;
        local_8b8._4_4_ = fVar74;
        local_8b8._0_4_ = fVar69;
        fStack_8b0 = fVar75;
        fStack_8ac = fVar76;
        auVar49._0_4_ = local_808 * local_808 + fStack_800 * fStack_800;
        auVar49._4_4_ = fStack_804 * fStack_804 + fStack_7fc * fStack_7fc;
        auVar49._8_4_ = fStack_800 * fStack_800 + local_808 * local_808;
        auVar49._12_4_ = fStack_7fc * fStack_7fc + fStack_804 * fStack_804;
        fVar54 = auVar49._4_4_ + auVar49._0_4_;
        fVar56 = auVar49._8_4_ + auVar49._4_4_;
        fVar60 = auVar49._12_4_ + auVar49._8_4_;
        fVar63 = auVar49._0_4_ + auVar49._12_4_;
        auVar4._4_4_ = fVar56;
        auVar4._0_4_ = fVar54;
        auVar4._8_4_ = fVar60;
        auVar4._12_4_ = fVar63;
        auVar47 = rsqrtps(auVar49,auVar4);
        fVar55 = auVar47._0_4_;
        fVar59 = auVar47._4_4_;
        fVar62 = auVar47._8_4_;
        fVar64 = auVar47._12_4_;
        fVar55 = (_DAT_146b07a90 - fVar55 * fVar55 * fVar54 * _DAT_146b07a90) * fVar55 + fVar55;
        fVar59 = (fRam0000000146b07a94 - fVar59 * fVar59 * fVar56 * fRam0000000146b07a94) * fVar59 +
                 fVar59;
        fVar62 = (fRam0000000146b07a98 - fVar62 * fVar62 * fVar60 * fRam0000000146b07a98) * fVar62 +
                 fVar62;
        fVar64 = (fRam0000000146b07a9c - fVar64 * fVar64 * fVar63 * fRam0000000146b07a9c) * fVar64 +
                 fVar64;
        local_8c8._4_4_ = fStack_a04;
        local_8c8._0_4_ = local_a08;
        local_8c8._8_4_ = fStack_a00;
        local_8d8 = (float)(((uint)(((_DAT_146b07a90 - fVar55 * fVar55 * fVar54 * _DAT_146b07a90) *
                                     fVar55 + fVar55) * local_808) ^ _DAT_146b07a80) &
                            -(uint)(1e-08 <= fVar54) ^ _DAT_146b07a80);
        fStack_8d4 = (float)(((uint)(((fRam0000000146b07a94 -
                                      fVar59 * fVar59 * fVar56 * fRam0000000146b07a94) * fVar59 +
                                     fVar59) * fStack_804) ^ uRam0000000146b07a84) &
                             -(uint)(1e-08 <= fVar56) ^ uRam0000000146b07a84);
        fStack_8d0 = (float)(((uint)(((fRam0000000146b07a98 -
                                      fVar62 * fVar62 * fVar60 * fRam0000000146b07a98) * fVar62 +
                                     fVar62) * fStack_800) ^ uRam0000000146b07a88) &
                             -(uint)(1e-08 <= fVar60) ^ uRam0000000146b07a88);
        fStack_8cc = (float)(((uint)(((fRam0000000146b07a9c -
                                      fVar64 * fVar64 * fVar63 * fRam0000000146b07a9c) * fVar64 +
                                     fVar64) * fStack_7fc) ^ uRam0000000146b07a8c) &
                             -(uint)(1e-08 <= fVar63) ^ uRam0000000146b07a8c);
        local_8c8._12_4_ = 0.0;
        local_808 = local_8d8;
        fStack_804 = fStack_8d4;
        fStack_800 = fStack_8d0;
        fStack_7fc = fStack_8cc;
      }
      lVar29 = (longlong)(int)uVar32 * 0xe0;
      if (param_6 == '\0') {
        plVar26 = (longlong *)param_9[0x11];
        if ((longlong *)param_9[0x11] == (longlong *)0x0) {
          plVar26 = param_9 + 0xf;
        }
        local_be8 = (undefined1 *)CONCAT44(local_be8._4_4_,local_res18[0]);
        FUN_1426bda50(param_1[2] + lVar29,plVar26[lVar30],&local_8d8,&local_b88);
      }
      else {
        local_be0 = param_9;
        local_be8 = (undefined1 *)CONCAT44(local_be8._4_4_,param_8);
        FUN_1426c6750(param_1[2] + lVar29,&local_8d8,&local_b88,local_b68);
      }
      uVar31 = (int)uVar32 + 1;
      uVar32 = (ulonglong)uVar31;
      uVar28 = uVar28 + 0xe0;
    } while ((int)uVar31 < (int)param_1[3]);
  }
  uVar28 = 0;
  uVar32 = uVar28;
  if (0 < (int)param_1[5]) {
    do {
      lVar29 = param_1[4];
      uVar17 = FRotator::Quaternion(lVar29 + 0xbc + uVar28);
      fVar64 = fRam0000000146b07a1c;
      fVar62 = fRam0000000146b07a18;
      fVar59 = fRam0000000146b07a14;
      fVar55 = _DAT_146b07a10;
      auVar13._4_4_ = fStack_b34;
      auVar13._0_4_ = local_b38;
      auVar13._8_4_ = fStack_b30;
      auVar13._12_4_ = fStack_b2c;
      local_8a8 = local_7a8;
      fStack_8a4 = fStack_7a4;
      fStack_8a0 = fStack_7a0;
      fStack_89c = fStack_79c;
      auVar38._4_4_ = DAT_1464aa788._4_4_;
      auVar38._0_4_ = (float)DAT_1464aa788;
      auVar38._8_4_ = DAT_1464aa790;
      auVar38._12_4_ = 0;
      auVar47 = minps(auVar38,auVar13);
      auVar39._4_4_ = -(uint)(auVar47._4_4_ < fRam0000000146b07ab4);
      auVar39._0_4_ = -(uint)(auVar47._0_4_ < _DAT_146b07ab0);
      auVar39._8_4_ = -(uint)(auVar47._8_4_ < fRam0000000146b07ab8);
      auVar39._12_4_ = -(uint)(auVar47._12_4_ < fRam0000000146b07abc);
      fVar54 = local_b88 * *(float *)(uVar28 + 0xb0 + lVar29);
      fVar56 = fStack_b84 * *(float *)(uVar28 + 0xb4 + lVar29);
      fVar60 = local_b80 * *(float *)(uVar28 + 0xb8 + lVar29);
      iVar16 = movmskps(uVar17,auVar39);
      local_888._4_4_ = DAT_1464aa788._4_4_;
      local_888._0_4_ = (float)DAT_1464aa788;
      fStack_880 = DAT_1464aa790;
      fStack_87c = 0.0;
      local_b28._4_4_ = fRam0000000146b07ab4;
      local_b28._0_4_ = _DAT_146b07ab0;
      fStack_b20 = fRam0000000146b07ab8;
      fStack_b1c = fRam0000000146b07abc;
      local_898._4_4_ = fVar56;
      local_898._0_4_ = fVar54;
      local_898._8_4_ = fVar60;
      local_898._12_4_ = 0.0;
      if (iVar16 == 0) {
        fVar54 = fVar54 * local_b38;
        fVar56 = fVar56 * fStack_b34;
        fVar60 = fVar60 * fStack_b30;
        fVar63 = fStack_b2c * 0.0;
        local_888._4_4_ = DAT_1464aa788._4_4_ * fStack_b34;
        local_888._0_4_ = (float)DAT_1464aa788 * local_b38;
        fStack_880 = DAT_1464aa790 * fStack_b30;
        fStack_87c = fStack_b2c * 0.0;
        local_8a8 = fStack_79c * local_b58 * _DAT_146b07a70 + local_7a8 * fStack_b4c +
                    fStack_7a0 * fStack_b54 * _DAT_146b07a60 +
                    fStack_7a4 * fStack_b50 * _DAT_146b07a50;
        fStack_8a4 = fStack_7a0 * local_b58 * fRam0000000146b07a74 + fStack_7a4 * fStack_b4c +
                     fStack_79c * fStack_b54 * fRam0000000146b07a64 +
                     local_7a8 * fStack_b50 * fRam0000000146b07a54;
        fStack_8a0 = fStack_7a4 * local_b58 * fRam0000000146b07a78 + fStack_7a0 * fStack_b4c +
                     local_7a8 * fStack_b54 * fRam0000000146b07a68 +
                     fStack_79c * fStack_b50 * fRam0000000146b07a58;
        fStack_89c = local_7a8 * local_b58 * fRam0000000146b07a7c + fStack_79c * fStack_b4c +
                     fStack_7a4 * fStack_b54 * fRam0000000146b07a6c +
                     fStack_7a0 * fStack_b50 * fRam0000000146b07a5c;
        fVar55 = fVar60 * fStack_b54 - fVar56 * fStack_b50;
        fVar59 = fVar54 * fStack_b50 - fVar60 * local_b58;
        fVar62 = fVar56 * local_b58 - fVar54 * fStack_b54;
        fVar64 = fVar63 * fStack_b4c - fVar63 * fStack_b4c;
        fVar55 = fVar55 + fVar55;
        fVar59 = fVar59 + fVar59;
        fVar62 = fVar62 + fVar62;
        fVar64 = fVar64 + fVar64;
        local_898._0_4_ =
             (fVar62 * fStack_b54 - fVar59 * fStack_b50) + fVar55 * fStack_b4c + fVar54 + local_b48;
        local_898._4_4_ =
             (fVar55 * fStack_b50 - fVar62 * local_b58) + fVar59 * fStack_b4c + fVar56 + fStack_b44;
        local_898._8_4_ =
             (fVar59 * local_b58 - fVar55 * fStack_b54) + fVar62 * fStack_b4c + fVar60 + fStack_b40;
        local_898._12_4_ =
             (fVar64 * fStack_b4c - fVar64 * fStack_b4c) + fVar64 * fStack_b4c + fVar63 + fStack_b3c
        ;
      }
      else {
        fVar66 = fStack_b54 + fStack_b54;
        fVar68 = fStack_b50 + fStack_b50;
        fVar69 = local_b58 * (local_b58 + local_b58);
        fVar63 = (local_b58 + local_b58) * fStack_b4c;
        fVar74 = (float)DAT_1464aa788 * local_b38;
        fVar75 = DAT_1464aa788._4_4_ * fStack_b34;
        fVar76 = DAT_1464aa790 * fStack_b30;
        fVar57 = fStack_b2c * 0.0;
        fStack_4f4 = (fVar68 * fStack_b4c + fVar66 * local_b58) * local_b38;
        fStack_4e0 = (fVar63 + fVar68 * fStack_b54) * fStack_b34;
        local_4d8 = (fVar66 * fStack_b4c + fVar68 * local_b58) * fStack_b30;
        local_4e8 = fStack_b34 * (fVar66 * local_b58 - fVar68 * fStack_b4c);
        fStack_4d4 = fStack_b30 * (fVar68 * fStack_b54 - fVar63);
        fStack_4f0 = local_b38 * (fVar68 * local_b58 - fVar66 * fStack_b4c);
        fVar63 = fStack_7a4 + fStack_7a4;
        fVar67 = fStack_7a0 + fStack_7a0;
        local_4f8 = (float)((uint)((_DAT_146b07a10 - (fStack_b50 * fVar68 + fStack_b54 * fVar66)) *
                                  local_b38) & _DAT_146b07a20);
        fStack_4e4 = (float)((uint)((fRam0000000146b07a14 - (fStack_b50 * fVar68 + fVar69)) *
                                   fStack_b34) & uRam0000000146b07a24);
        fStack_4d0 = (float)((uint)((fRam0000000146b07a18 - (fStack_b54 * fVar66 + fVar69)) *
                                   fStack_b30) & uRam0000000146b07a28);
        fStack_4ec = (float)((uint)((fRam0000000146b07a1c - (fVar69 + fVar69)) * fStack_b2c) &
                            uRam0000000146b07a2c);
        fVar68 = local_7a8 * (local_7a8 + local_7a8);
        fVar66 = (local_7a8 + local_7a8) * fStack_79c;
        local_4c8 = local_b48;
        fStack_4c4 = fStack_b44;
        fStack_4c0 = fStack_b40;
        fStack_4bc = fRam0000000146b07a1c;
        fStack_4b4 = (fVar67 * fStack_79c + fVar63 * local_7a8) * (float)DAT_1464aa788;
        fStack_4a0 = (fVar66 + fVar67 * fStack_7a4) * DAT_1464aa788._4_4_;
        local_498 = (fVar63 * fStack_79c + fVar67 * local_7a8) * DAT_1464aa790;
        local_4a8 = DAT_1464aa788._4_4_ * (fVar63 * local_7a8 - fVar67 * fStack_79c);
        fStack_494 = DAT_1464aa790 * (fVar67 * fStack_7a4 - fVar66);
        fStack_4b0 = (float)DAT_1464aa788 * (fVar67 * local_7a8 - fVar63 * fStack_79c);
        local_4b8 = (float)((uint)((_DAT_146b07a10 - (fStack_7a0 * fVar67 + fStack_7a4 * fVar63)) *
                                  (float)DAT_1464aa788) & _DAT_146b07a20);
        fStack_4a4 = (float)((uint)((fRam0000000146b07a14 - (fStack_7a0 * fVar67 + fVar68)) *
                                   DAT_1464aa788._4_4_) & uRam0000000146b07a24);
        fStack_490 = (float)((uint)((fRam0000000146b07a18 - (fStack_7a4 * fVar63 + fVar68)) *
                                   DAT_1464aa790) & uRam0000000146b07a28);
        fStack_4ac = (float)((uint)((fRam0000000146b07a1c - (fVar68 + fVar68)) * 0.0) &
                            uRam0000000146b07a2c);
        local_a78 = fStack_4b4 * local_4e8 + local_4b8 * local_4f8 + fStack_4b0 * local_4d8 +
                    fStack_4ac * local_b48;
        fStack_a74 = fStack_4b4 * fStack_4e4 + local_4b8 * fStack_4f4 + fStack_4b0 * fStack_4d4 +
                     fStack_4ac * fStack_b44;
        fStack_a70 = fStack_4b4 * fStack_4e0 + local_4b8 * fStack_4f0 + fStack_4b0 * fStack_4d0 +
                     fStack_4ac * fStack_b40;
        fStack_a6c = fStack_4b4 * fStack_4ec + local_4b8 * fStack_4ec + fStack_4b0 * fStack_4ec +
                     fStack_4ac * fRam0000000146b07a1c;
        fStack_47c = fRam0000000146b07a1c;
        local_a68 = fStack_4a4 * local_4e8 + local_4a8 * local_4f8 + fStack_4a0 * local_4d8 +
                    fStack_4ac * local_b48;
        fStack_a64 = fStack_4a4 * fStack_4e4 + local_4a8 * fStack_4f4 + fStack_4a0 * fStack_4d4 +
                     fStack_4ac * fStack_b44;
        fStack_a60 = fStack_4a4 * fStack_4e0 + local_4a8 * fStack_4f0 + fStack_4a0 * fStack_4d0 +
                     fStack_4ac * fStack_b40;
        fStack_a5c = fStack_4a4 * fStack_4ec + local_4a8 * fStack_4ec + fStack_4a0 * fStack_4ec +
                     fStack_4ac * fRam0000000146b07a1c;
        local_a58 = fStack_494 * local_4e8 + local_498 * local_4f8 + fStack_490 * local_4d8 +
                    fStack_4ac * local_b48;
        fStack_a54 = fStack_494 * fStack_4e4 + local_498 * fStack_4f4 + fStack_490 * fStack_4d4 +
                     fStack_4ac * fStack_b44;
        fStack_a50 = fStack_494 * fStack_4e0 + local_498 * fStack_4f0 + fStack_490 * fStack_4d0 +
                     fStack_4ac * fStack_b40;
        fStack_a4c = fStack_494 * fStack_4ec + local_498 * fStack_4ec + fStack_490 * fStack_4ec +
                     fStack_4ac * fRam0000000146b07a1c;
        local_a48 = fVar56 * local_4e8 + fVar54 * local_4f8 + fVar60 * local_4d8 +
                    fRam0000000146b07a1c * local_b48;
        fStack_a44 = fVar56 * fStack_4e4 + fVar54 * fStack_4f4 + fVar60 * fStack_4d4 +
                     fRam0000000146b07a1c * fStack_b44;
        fStack_a40 = fVar56 * fStack_4e0 + fVar54 * fStack_4f0 + fVar60 * fStack_4d0 +
                     fRam0000000146b07a1c * fStack_b40;
        fStack_a3c = fVar56 * fStack_4ec + fVar54 * fStack_4ec + fVar60 * fStack_4ec +
                     fRam0000000146b07a1c * fRam0000000146b07a1c;
        fStack_4dc = fStack_4ec;
        fStack_4cc = fStack_4ec;
        fStack_49c = fStack_4ac;
        fStack_48c = fStack_4ac;
        local_488 = fVar54;
        fStack_484 = fVar56;
        fStack_480 = fVar60;
        FMatrix::RemoveScaling(&local_a78);
        local_688 = (float)((_DAT_146b07aa0 ^ (uint)fVar55) &
                            -(uint)((float)local_b28._0_4_ <= fVar74) ^ _DAT_146b07aa0);
        fStack_684 = (float)((uRam0000000146b07aa4 ^ (uint)fVar59) &
                             -(uint)((float)local_b28._4_4_ <= fVar75) ^ uRam0000000146b07aa4);
        fStack_680 = (float)((uRam0000000146b07aa8 ^ (uint)fVar62) & -(uint)(fStack_b20 <= fVar76) ^
                            uRam0000000146b07aa8);
        uStack_67c = (uRam0000000146b07aac ^ (uint)fVar64) & -(uint)(fStack_b1c <= fVar57) ^
                     uRam0000000146b07aac;
        local_a78 = local_a78 * local_688;
        fStack_a74 = fStack_a74 * local_688;
        fStack_a70 = fStack_a70 * local_688;
        fStack_a64 = fStack_a64 * fStack_684;
        fStack_a60 = fStack_a60 * fStack_684;
        local_a68 = local_a68 * fStack_684;
        fStack_a54 = fStack_a54 * fStack_680;
        fStack_a50 = fStack_a50 * fStack_680;
        local_a58 = local_a58 * fStack_680;
        FQuat::FQuat(&local_7f8);
        local_b00 = 0x322bcc77;
        local_888._4_4_ = fVar75;
        local_888._0_4_ = fVar74;
        fStack_880 = fVar76;
        fStack_87c = fVar57;
        auVar50._0_4_ = local_7f8 * local_7f8 + fStack_7f0 * fStack_7f0;
        auVar50._4_4_ = fStack_7f4 * fStack_7f4 + fStack_7ec * fStack_7ec;
        auVar50._8_4_ = fStack_7f0 * fStack_7f0 + local_7f8 * local_7f8;
        auVar50._12_4_ = fStack_7ec * fStack_7ec + fStack_7f4 * fStack_7f4;
        fVar54 = auVar50._4_4_ + auVar50._0_4_;
        fVar56 = auVar50._8_4_ + auVar50._4_4_;
        fVar60 = auVar50._12_4_ + auVar50._8_4_;
        fVar63 = auVar50._0_4_ + auVar50._12_4_;
        auVar5._4_4_ = fVar56;
        auVar5._0_4_ = fVar54;
        auVar5._8_4_ = fVar60;
        auVar5._12_4_ = fVar63;
        auVar47 = rsqrtps(auVar50,auVar5);
        fVar55 = auVar47._0_4_;
        fVar59 = auVar47._4_4_;
        fVar62 = auVar47._8_4_;
        fVar64 = auVar47._12_4_;
        fVar55 = (_DAT_146b07a90 - fVar55 * fVar55 * fVar54 * _DAT_146b07a90) * fVar55 + fVar55;
        fVar59 = (fRam0000000146b07a94 - fVar59 * fVar59 * fVar56 * fRam0000000146b07a94) * fVar59 +
                 fVar59;
        fVar62 = (fRam0000000146b07a98 - fVar62 * fVar62 * fVar60 * fRam0000000146b07a98) * fVar62 +
                 fVar62;
        fVar64 = (fRam0000000146b07a9c - fVar64 * fVar64 * fVar63 * fRam0000000146b07a9c) * fVar64 +
                 fVar64;
        local_898._4_4_ = fStack_a44;
        local_898._0_4_ = local_a48;
        local_898._8_4_ = fStack_a40;
        local_8a8 = (float)(((uint)(((_DAT_146b07a90 - fVar55 * fVar55 * fVar54 * _DAT_146b07a90) *
                                     fVar55 + fVar55) * local_7f8) ^ _DAT_146b07a80) &
                            -(uint)(1e-08 <= fVar54) ^ _DAT_146b07a80);
        fStack_8a4 = (float)(((uint)(((fRam0000000146b07a94 -
                                      fVar59 * fVar59 * fVar56 * fRam0000000146b07a94) * fVar59 +
                                     fVar59) * fStack_7f4) ^ uRam0000000146b07a84) &
                             -(uint)(1e-08 <= fVar56) ^ uRam0000000146b07a84);
        fStack_8a0 = (float)(((uint)(((fRam0000000146b07a98 -
                                      fVar62 * fVar62 * fVar60 * fRam0000000146b07a98) * fVar62 +
                                     fVar62) * fStack_7f0) ^ uRam0000000146b07a88) &
                             -(uint)(1e-08 <= fVar60) ^ uRam0000000146b07a88);
        fStack_89c = (float)(((uint)(((fRam0000000146b07a9c -
                                      fVar64 * fVar64 * fVar63 * fRam0000000146b07a9c) * fVar64 +
                                     fVar64) * fStack_7ec) ^ uRam0000000146b07a8c) &
                             -(uint)(1e-08 <= fVar63) ^ uRam0000000146b07a8c);
        local_898._12_4_ = 0.0;
        local_7f8 = local_8a8;
        fStack_7f4 = fStack_8a4;
        fStack_7f0 = fStack_8a0;
        fStack_7ec = fStack_89c;
      }
      lVar29 = (longlong)(int)uVar32 * 0xd0;
      if (param_6 == '\0') {
        plVar26 = (longlong *)param_9[0x11];
        if ((longlong *)param_9[0x11] == (longlong *)0x0) {
          plVar26 = param_9 + 0xf;
        }
        local_be8 = (undefined1 *)CONCAT44(local_be8._4_4_,local_res18[0]);
        FUN_1426be610(param_1[4] + lVar29,plVar26[lVar30],&local_8a8,&local_b88);
      }
      else {
        local_be0 = param_9;
        local_be8 = (undefined1 *)CONCAT44(local_be8._4_4_,param_8);
        FUN_1426c68b0(param_1[4] + lVar29,&local_8a8,&local_b88,local_b68);
      }
      uVar31 = (int)uVar32 + 1;
      uVar32 = (ulonglong)uVar31;
      uVar28 = uVar28 + 0xd0;
    } while ((int)uVar31 < (int)param_1[5]);
  }
  puVar21 = (undefined8 *)0x0;
  plVar26 = param_9;
  if (0 < (int)param_1[7]) {
    if (param_6 == '\0') {
      if (0 < (int)param_1[7]) {
        lVar29 = 0;
        do {
          fVar62 = fRam0000000146b07a18;
          fVar59 = fRam0000000146b07a14;
          fVar55 = _DAT_146b07a10;
          uVar31 = (uint)puVar21;
          if (param_5 == '\0') {
            puVar24 = local_res18;
          }
          else {
            uVar18 = uVar31 & 0x8000001f;
            if ((int)uVar18 < 0) {
              uVar18 = (uVar18 - 1 | 0xffffffe0) + 1;
            }
            puVar24 = (undefined4 *)(&DAT_146534900 + (longlong)(int)uVar18 * 4);
          }
          lVar2 = param_1[6];
          uVar17 = *puVar24;
          puVar21 = (undefined8 *)(lVar2 + 0x90 + lVar29);
          local_118 = *puVar21;
          uStack_110 = puVar21[1];
          _local_108 = *(undefined1 (*) [16])(lVar2 + 0xa0 + lVar29);
          fVar64 = local_108._0_4_;
          fVar54 = local_108._4_4_;
          fVar56 = local_108._8_4_;
          puVar21 = (undefined8 *)(lVar2 + 0xb0 + lVar29);
          local_f8 = *puVar21;
          uStack_f0 = puVar21[1];
          auVar42._4_4_ = DAT_1464aa788._4_4_;
          auVar42._0_4_ = (float)DAT_1464aa788;
          auVar42._8_4_ = DAT_1464aa790;
          auVar42._12_4_ = 0;
          local_648 = DAT_1464aa810;
          fStack_644 = DAT_1464aa814;
          fStack_640 = DAT_1464aa818;
          fStack_63c = DAT_1464aa81c;
          auVar11._4_4_ = fStack_b34;
          auVar11._0_4_ = local_b38;
          auVar11._8_4_ = fStack_b30;
          auVar11._12_4_ = fStack_b2c;
          auVar47 = minps(auVar42,auVar11);
          local_638._12_4_ = 0;
          local_638._0_12_ = local_108._0_12_;
          auVar43._4_4_ = -(uint)(auVar47._4_4_ < fRam0000000146b07ab4);
          auVar43._0_4_ = -(uint)(auVar47._0_4_ < _DAT_146b07ab0);
          auVar43._8_4_ = -(uint)(auVar47._8_4_ < fRam0000000146b07ab8);
          auVar43._12_4_ = -(uint)(auVar47._12_4_ < fRam0000000146b07abc);
          iVar16 = movmskps((int)lVar2,auVar43);
          local_628._4_4_ = DAT_1464aa788._4_4_;
          local_628._0_4_ = (float)DAT_1464aa788;
          local_628._8_4_ = DAT_1464aa790;
          local_628._12_4_ = 0;
          local_b28._4_4_ = fRam0000000146b07ab4;
          local_b28._0_4_ = _DAT_146b07ab0;
          fStack_b20 = fRam0000000146b07ab8;
          fStack_b1c = fRam0000000146b07abc;
          if (iVar16 == 0) {
            fVar64 = fVar64 * local_b38;
            fVar54 = fVar54 * fStack_b34;
            fVar56 = fVar56 * fStack_b30;
            fVar57 = fStack_b2c * 0.0;
            fVar69 = DAT_1464aa81c * local_b58 * _DAT_146b07a70 + fStack_b4c * DAT_1464aa810 +
                     DAT_1464aa818 * fStack_b54 * _DAT_146b07a60 +
                     DAT_1464aa814 * fStack_b50 * _DAT_146b07a50;
            fVar74 = DAT_1464aa818 * local_b58 * fRam0000000146b07a74 + fStack_b4c * DAT_1464aa814 +
                     DAT_1464aa81c * fStack_b54 * fRam0000000146b07a64 +
                     DAT_1464aa810 * fStack_b50 * fRam0000000146b07a54;
            fVar75 = DAT_1464aa814 * local_b58 * fRam0000000146b07a78 + fStack_b4c * DAT_1464aa818 +
                     DAT_1464aa810 * fStack_b54 * fRam0000000146b07a68 +
                     DAT_1464aa81c * fStack_b50 * fRam0000000146b07a58;
            fVar76 = DAT_1464aa810 * local_b58 * fRam0000000146b07a7c + fStack_b4c * DAT_1464aa81c +
                     DAT_1464aa814 * fStack_b54 * fRam0000000146b07a6c +
                     DAT_1464aa818 * fStack_b50 * fRam0000000146b07a5c;
            fVar63 = fVar56 * fStack_b54 - fVar54 * fStack_b50;
            fVar66 = fVar64 * fStack_b50 - fVar56 * local_b58;
            fVar67 = fVar54 * local_b58 - fVar64 * fStack_b54;
            fVar68 = fVar57 * fStack_b4c - fVar57 * fStack_b4c;
            fVar63 = fVar63 + fVar63;
            fVar66 = fVar66 + fVar66;
            fVar67 = fVar67 + fVar67;
            fVar68 = fVar68 + fVar68;
            fVar55 = (float)DAT_1464aa788 * local_b38;
            fVar59 = DAT_1464aa788._4_4_ * fStack_b34;
            fVar62 = DAT_1464aa790 * fStack_b30;
            fVar60 = fStack_b2c * 0.0;
            local_108._0_4_ =
                 (fVar67 * fStack_b54 - fVar66 * fStack_b50) + fVar63 * fStack_b4c + fVar64 +
                 local_b48;
            local_108._4_4_ =
                 (fVar63 * fStack_b50 - fVar67 * local_b58) + fVar66 * fStack_b4c + fVar54 +
                 fStack_b44;
            fStack_100 = (fVar66 * local_b58 - fVar63 * fStack_b54) + fVar67 * fStack_b4c + fVar56 +
                         fStack_b40;
            fStack_fc = (fVar68 * fStack_b4c - fVar68 * fStack_b4c) + fVar68 * fStack_b4c + fVar57 +
                        fStack_b3c;
          }
          else {
            fVar60 = fStack_b54 + fStack_b54;
            fVar66 = fStack_b50 + fStack_b50;
            fStack_910 = DAT_1464aa790 * fStack_b30;
            fStack_90c = fStack_b2c * 0.0;
            local_918 = CONCAT44(DAT_1464aa788._4_4_ * fStack_b34,(float)DAT_1464aa788 * local_b38);
            fVar67 = (local_b58 + local_b58) * local_b58;
            fVar63 = (local_b58 + local_b58) * fStack_b4c;
            fStack_3f4 = (fVar66 * fStack_b4c + fVar60 * local_b58) * local_b38;
            fStack_3e0 = (fVar63 + fVar66 * fStack_b54) * fStack_b34;
            local_3d8 = (fVar60 * fStack_b4c + fVar66 * local_b58) * fStack_b30;
            local_3e8 = fStack_b34 * (fVar60 * local_b58 - fVar66 * fStack_b4c);
            fStack_3d4 = fStack_b30 * (fVar66 * fStack_b54 - fVar63);
            fStack_3f0 = local_b38 * (fVar66 * local_b58 - fVar60 * fStack_b4c);
            local_3f8 = (float)((uint)((_DAT_146b07a10 - (fVar66 * fStack_b50 + fVar60 * fStack_b54)
                                       ) * local_b38) & _DAT_146b07a20);
            fStack_3e4 = (float)((uint)((fRam0000000146b07a14 - (fVar66 * fStack_b50 + fVar67)) *
                                       fStack_b34) & uRam0000000146b07a24);
            fStack_3d0 = (float)((uint)((fRam0000000146b07a18 - (fVar60 * fStack_b54 + fVar67)) *
                                       fStack_b30) & uRam0000000146b07a28);
            fStack_3ec = (float)((uint)((fRam0000000146b07a1c - (fVar67 + fVar67)) * fStack_b2c) &
                                uRam0000000146b07a2c);
            fVar60 = DAT_1464aa814 + DAT_1464aa814;
            fVar63 = DAT_1464aa818 + DAT_1464aa818;
            fVar66 = DAT_1464aa810 * (DAT_1464aa810 + DAT_1464aa810);
            fVar67 = DAT_1464aa81c * (DAT_1464aa810 + DAT_1464aa810);
            fStack_3b4 = (DAT_1464aa81c * fVar63 + DAT_1464aa810 * fVar60) * (float)DAT_1464aa788;
            fStack_3a0 = (fVar67 + DAT_1464aa814 * fVar63) * DAT_1464aa788._4_4_;
            local_398 = (DAT_1464aa81c * fVar60 + DAT_1464aa810 * fVar63) * DAT_1464aa790;
            local_3a8 = DAT_1464aa788._4_4_ * (DAT_1464aa810 * fVar60 - DAT_1464aa81c * fVar63);
            fStack_394 = DAT_1464aa790 * (DAT_1464aa814 * fVar63 - fVar67);
            fStack_3b0 = (float)DAT_1464aa788 * (DAT_1464aa810 * fVar63 - DAT_1464aa81c * fVar60);
            local_3b8 = (float)((uint)((_DAT_146b07a10 -
                                       (DAT_1464aa818 * fVar63 + DAT_1464aa814 * fVar60)) *
                                      (float)DAT_1464aa788) & _DAT_146b07a20);
            fStack_3a4 = (float)((uint)((fRam0000000146b07a14 - (DAT_1464aa818 * fVar63 + fVar66)) *
                                       DAT_1464aa788._4_4_) & uRam0000000146b07a24);
            fStack_390 = (float)((uint)((fRam0000000146b07a18 - (DAT_1464aa814 * fVar60 + fVar66)) *
                                       DAT_1464aa790) & uRam0000000146b07a28);
            fStack_3ac = (float)((uint)((fRam0000000146b07a1c - (fVar66 + fVar66)) * 0.0) &
                                uRam0000000146b07a2c);
            local_9b8 = fStack_3b4 * local_3e8 + local_3b8 * local_3f8 + fStack_3b0 * local_3d8 +
                        fStack_3ac * local_b48;
            fStack_9b4 = fStack_3b4 * fStack_3e4 + local_3b8 * fStack_3f4 + fStack_3b0 * fStack_3d4
                         + fStack_3ac * fStack_b44;
            fStack_9b0 = fStack_3b4 * fStack_3e0 + local_3b8 * fStack_3f0 + fStack_3b0 * fStack_3d0
                         + fStack_3ac * fStack_b40;
            fStack_9ac = fStack_3b4 * fStack_3ec + local_3b8 * fStack_3ec + fStack_3b0 * fStack_3ec
                         + fStack_3ac * fRam0000000146b07a1c;
            local_388._12_4_ = fRam0000000146b07a1c;
            local_388._0_12_ = local_108._0_12_;
            local_9a8 = fStack_3a4 * local_3e8 + local_3a8 * local_3f8 + fStack_3a0 * local_3d8 +
                        fStack_3ac * local_b48;
            fStack_9a4 = fStack_3a4 * fStack_3e4 + local_3a8 * fStack_3f4 + fStack_3a0 * fStack_3d4
                         + fStack_3ac * fStack_b44;
            fStack_9a0 = fStack_3a4 * fStack_3e0 + local_3a8 * fStack_3f0 + fStack_3a0 * fStack_3d0
                         + fStack_3ac * fStack_b40;
            fStack_99c = fStack_3a4 * fStack_3ec + local_3a8 * fStack_3ec + fStack_3a0 * fStack_3ec
                         + fStack_3ac * fRam0000000146b07a1c;
            local_998 = fStack_394 * local_3e8 + local_398 * local_3f8 + fStack_390 * local_3d8 +
                        fStack_3ac * local_b48;
            fStack_994 = fStack_394 * fStack_3e4 + local_398 * fStack_3f4 + fStack_390 * fStack_3d4
                         + fStack_3ac * fStack_b44;
            fStack_990 = fStack_394 * fStack_3e0 + local_398 * fStack_3f0 + fStack_390 * fStack_3d0
                         + fStack_3ac * fStack_b40;
            fStack_98c = fStack_394 * fStack_3ec + local_398 * fStack_3ec + fStack_390 * fStack_3ec
                         + fStack_3ac * fRam0000000146b07a1c;
            local_988 = fVar54 * local_3e8 + fVar64 * local_3f8 + fVar56 * local_3d8 +
                        fRam0000000146b07a1c * local_b48;
            fStack_984 = fVar54 * fStack_3e4 + fVar64 * fStack_3f4 + fVar56 * fStack_3d4 +
                         fRam0000000146b07a1c * fStack_b44;
            fStack_980 = fVar54 * fStack_3e0 + fVar64 * fStack_3f0 + fVar56 * fStack_3d0 +
                         fRam0000000146b07a1c * fStack_b40;
            fStack_97c = fVar54 * fStack_3ec + fVar64 * fStack_3ec + fVar56 * fStack_3ec +
                         fRam0000000146b07a1c * fRam0000000146b07a1c;
            fStack_3dc = fStack_3ec;
            fStack_3cc = fStack_3ec;
            local_3c8 = local_b48;
            fStack_3c4 = fStack_b44;
            fStack_3c0 = fStack_b40;
            fStack_3bc = fRam0000000146b07a1c;
            fStack_39c = fStack_3ac;
            fStack_38c = fStack_3ac;
            FMatrix::RemoveScaling(&local_9b8);
            fVar55 = (float)(-(uint)((float)local_b28._0_4_ <= (float)local_918) &
                             (_DAT_146b07aa0 ^ (uint)fVar55) ^ _DAT_146b07aa0);
            fVar59 = (float)(-(uint)((float)local_b28._4_4_ <= local_918._4_4_) &
                             (uRam0000000146b07aa4 ^ (uint)fVar59) ^ uRam0000000146b07aa4);
            fVar62 = (float)(-(uint)(fStack_b20 <= fStack_910) &
                             (uRam0000000146b07aa8 ^ (uint)fVar62) ^ uRam0000000146b07aa8);
            local_9b8 = local_9b8 * fVar55;
            fStack_9b4 = fStack_9b4 * fVar55;
            fStack_9b0 = fStack_9b0 * fVar55;
            fStack_9a4 = fStack_9a4 * fVar59;
            fStack_9a0 = fStack_9a0 * fVar59;
            local_9a8 = local_9a8 * fVar59;
            fStack_994 = fStack_994 * fVar62;
            fStack_990 = fStack_990 * fVar62;
            local_998 = local_998 * fVar62;
            FQuat::FQuat(&local_ac8,&local_9b8);
            local_af8 = 0x322bcc77;
            auVar52._0_4_ = local_ac8 * local_ac8 + fStack_ac0 * fStack_ac0;
            auVar52._4_4_ = fStack_ac4 * fStack_ac4 + fStack_abc * fStack_abc;
            auVar52._8_4_ = fStack_ac0 * fStack_ac0 + local_ac8 * local_ac8;
            auVar52._12_4_ = fStack_abc * fStack_abc + fStack_ac4 * fStack_ac4;
            fVar54 = auVar52._4_4_ + auVar52._0_4_;
            fVar56 = auVar52._8_4_ + auVar52._4_4_;
            fVar60 = auVar52._12_4_ + auVar52._8_4_;
            fVar63 = auVar52._0_4_ + auVar52._12_4_;
            auVar8._4_4_ = fVar56;
            auVar8._0_4_ = fVar54;
            auVar8._8_4_ = fVar60;
            auVar8._12_4_ = fVar63;
            auVar47 = rsqrtps(auVar52,auVar8);
            fVar55 = auVar47._0_4_;
            fVar59 = auVar47._4_4_;
            fVar62 = auVar47._8_4_;
            fVar64 = auVar47._12_4_;
            fVar55 = (_DAT_146b07a90 - fVar55 * fVar55 * fVar54 * _DAT_146b07a90) * fVar55 + fVar55;
            fVar59 = (fRam0000000146b07a94 - fVar59 * fVar59 * fVar56 * fRam0000000146b07a94) *
                     fVar59 + fVar59;
            fVar62 = (fRam0000000146b07a98 - fVar62 * fVar62 * fVar60 * fRam0000000146b07a98) *
                     fVar62 + fVar62;
            fVar64 = (fRam0000000146b07a9c - fVar64 * fVar64 * fVar63 * fRam0000000146b07a9c) *
                     fVar64 + fVar64;
            fVar69 = (float)(((uint)(((_DAT_146b07a90 - fVar55 * fVar55 * fVar54 * _DAT_146b07a90) *
                                      fVar55 + fVar55) * local_ac8) ^ _DAT_146b07a80) &
                             -(uint)(1e-08 <= fVar54) ^ _DAT_146b07a80);
            fVar74 = (float)(((uint)(((fRam0000000146b07a94 -
                                      fVar59 * fVar59 * fVar56 * fRam0000000146b07a94) * fVar59 +
                                     fVar59) * fStack_ac4) ^ uRam0000000146b07a84) &
                             -(uint)(1e-08 <= fVar56) ^ uRam0000000146b07a84);
            fVar75 = (float)(((uint)(((fRam0000000146b07a98 -
                                      fVar62 * fVar62 * fVar60 * fRam0000000146b07a98) * fVar62 +
                                     fVar62) * fStack_ac0) ^ uRam0000000146b07a88) &
                             -(uint)(1e-08 <= fVar60) ^ uRam0000000146b07a88);
            fVar76 = (float)(((uint)(((fRam0000000146b07a9c -
                                      fVar64 * fVar64 * fVar63 * fRam0000000146b07a9c) * fVar64 +
                                     fVar64) * fStack_abc) ^ uRam0000000146b07a8c) &
                             -(uint)(1e-08 <= fVar63) ^ uRam0000000146b07a8c);
            fStack_fc = 0.0;
            local_108._0_4_ = local_988;
            local_108._4_4_ = fStack_984;
            fStack_100 = fStack_980;
            fVar55 = (float)local_918;
            fVar59 = local_918._4_4_;
            fVar62 = fStack_910;
            fVar60 = fStack_90c;
            local_ac8 = fVar69;
            fStack_ac4 = fVar74;
            fStack_ac0 = fVar75;
            fStack_abc = fVar76;
          }
          auVar47 = local_928;
          local_f8 = CONCAT44(fVar59,fVar55);
          uStack_f0 = CONCAT44(fVar60,fVar62);
          local_928._4_4_ = fStack_b84;
          local_928._0_4_ = local_b88;
          uVar22 = local_928._0_8_;
          local_118 = CONCAT44(fVar74,fVar69);
          uStack_110 = CONCAT44(fVar76,fVar75);
          local_928._12_4_ = auVar47._12_4_;
          local_928._0_8_ = auVar47._0_8_;
          local_928._8_4_ = local_b80;
          local_928 = CONCAT88(local_928._8_8_,uVar22);
          local_be8 = (undefined1 *)CONCAT44(local_be8._4_4_,uVar17);
          plVar26 = (longlong *)param_9[0x11];
          if ((longlong *)param_9[0x11] == (longlong *)0x0) {
            plVar26 = param_9 + 0xf;
          }
          FUN_1426be010((longlong)(int)uVar31 * 0xd0 + param_1[6],plVar26[lVar30],&local_118,
                        local_928);
          puVar21 = (undefined8 *)(ulonglong)(uVar31 + 1);
          lVar29 = lVar29 + 0xd0;
          plVar26 = local_ae0;
        } while ((int)(uVar31 + 1) < (int)param_1[7]);
      }
    }
    else {
      if (param_1[10] == 0) {
        puVar20 = (undefined8 *)operator_new(0x18);
        if (puVar20 != (undefined8 *)0x0) {
          *puVar20 = 0;
          puVar20[1] = 0;
          puVar20[2] = 0;
          puVar21 = puVar20;
        }
        param_1[10] = (longlong)puVar21;
        lVar29 = operator_new(0x208);
        if (lVar29 == 0) {
          lVar29 = 0;
        }
        else {
          FStaticMeshVertexBuffer::FStaticMeshVertexBuffer(lVar29);
          FUN_1426f5920(lVar29 + 0xe8);
          *(undefined8 *)(lVar29 + 0x1f0) = 0;
          *(undefined8 *)(lVar29 + 0x1f8) = 0;
          *(undefined2 *)(lVar29 + 0x200) = 0;
        }
        *(longlong *)param_1[10] = lVar29;
        puVar21 = (undefined8 *)operator_new(0x50);
        if (puVar21 == (undefined8 *)0x0) {
          puVar21 = (undefined8 *)0x0;
        }
        else {
          puVar21[1] = 4;
          puVar21[4] = 0;
          *(undefined4 *)((longlong)puVar21 + 0x29) = 0;
          *(undefined2 *)((longlong)puVar21 + 0x2d) = 0;
          *(undefined1 *)((longlong)puVar21 + 0x2f) = 0;
          puVar21[9] = 0;
          puVar21[2] = 0;
          puVar21[3] = 0;
          *(undefined1 *)(puVar21 + 5) = 0;
          puVar21[6] = 0;
          puVar21[7] = 0;
          *puVar21 = &PTR_FUN_1441669d0;
          puVar21[8] = 0;
          puVar21[9] = 0;
        }
        iVar16 = 0;
        *(undefined8 **)(param_1[10] + 8) = puVar21;
        local_ad8 = 0;
        local_ad0 = 0;
        local_acc = 0;
        if (0 < (int)param_1[7]) {
          do {
            FUN_1426b7c80((longlong)iVar16 * 0xd0 + param_1[6],&local_ad8,
                          *(longlong *)(param_1[10] + 8) + 0x40,DAT_1464aa730);
            iVar16 = iVar16 + 1;
          } while (iVar16 < (int)param_1[7]);
        }
        if ((((*(longlong *)param_1[10] != 0) &&
             (plVar27 = (longlong *)((longlong *)param_1[10])[1], plVar27 != (longlong *)0x0)) &&
            (0 < local_ad0)) && (0 < (int)plVar27[9])) {
          (**(code **)(*plVar27 + 0x28))(plVar27);
          puVar21 = (undefined8 *)operator_new(0x770);
          if (puVar21 != (undefined8 *)0x0) {
            *(int *)(puVar21 + 1) = (int)param_9[0x1c];
            puVar21[2] = 0;
            puVar21[3] = 0;
            *(undefined1 *)(puVar21 + 5) = 0;
            puVar21[0x66] = 0;
            *(undefined1 *)(puVar21 + 0x67) = 1;
            *(undefined1 *)((longlong)puVar21 + 0x33a) = 0;
            puVar21[200] = 0;
            puVar21[0xc9] = 0;
            puVar21[0xca] = 0;
            *puVar21 = &PTR_FUN_144165fb0;
            FUN_1426b5510(puVar21 + 0xcb);
            puVar21[0xeb] = 0;
            puVar21[0xea] = puVar21 + 0xcb;
            puVar20 = puVar21 + 0xec;
            *(undefined1 *)((longlong)puVar21 + 0x339) = 1;
            lVar29 = 2;
            if (puVar20 <= puVar21 + 0xed) {
              for (; lVar29 != 0; lVar29 = lVar29 + -1) {
                *(undefined4 *)puVar20 = 0xffffffff;
                puVar20 = (undefined8 *)((longlong)puVar20 + 4);
              }
            }
          }
          *(undefined8 **)(param_1[10] + 0x10) = puVar21;
          local_be8 = (undefined1 *)((ulonglong)local_be8 & 0xffffffff00000000);
          FUN_1428208f0(*(undefined8 *)param_1[10],((undefined8 *)param_1[10])[2],&local_ad8,1);
        }
        if (local_ad8 != 0) {
          FMemory::Free();
        }
      }
      fVar68 = fStack_b2c;
      fVar67 = fStack_b30;
      fVar66 = fStack_b34;
      fVar63 = local_b38;
      fVar60 = local_b80;
      fVar56 = fStack_b84;
      fVar54 = local_b88;
      fVar64 = fRam0000000146b07a1c;
      fVar62 = fRam0000000146b07a18;
      fVar59 = fRam0000000146b07a14;
      fVar55 = _DAT_146b07a10;
      lVar29 = *(longlong *)param_1[10];
      if (((lVar29 != 0) && (*(int *)(lVar29 + 0x13c) != 0)) &&
         ((lVar29 = ((longlong *)param_1[10])[1], lVar29 != 0 && (0 < *(int *)(lVar29 + 0x48))))) {
        local_658._4_4_ = fStack_b84;
        local_658._0_4_ = local_b88;
        local_658._8_4_ = local_b80;
        local_928._4_4_ = fStack_b84;
        local_928._0_4_ = local_b88;
        local_928._8_4_ = local_b80;
        auVar40._4_4_ = fStack_b84;
        auVar40._0_4_ = local_b88;
        auVar40._8_4_ = local_b80;
        auVar40._12_4_ = 0;
        local_678 = DAT_1464aa810;
        fStack_674 = DAT_1464aa814;
        fStack_670 = DAT_1464aa818;
        fStack_66c = DAT_1464aa81c;
        auVar10._4_4_ = fStack_b34;
        auVar10._0_4_ = local_b38;
        auVar10._8_4_ = fStack_b30;
        auVar10._12_4_ = fStack_b2c;
        auVar47 = minps(auVar40,auVar10);
        local_668._4_4_ = DAT_1468b5d94;
        local_668._0_4_ = DAT_1468b5d90;
        local_668._8_4_ = DAT_1468b5d98;
        local_668._12_4_ = 0;
        auVar41._4_4_ = -(uint)(auVar47._4_4_ < fRam0000000146b07ab4);
        auVar41._0_4_ = -(uint)(auVar47._0_4_ < _DAT_146b07ab0);
        auVar41._8_4_ = -(uint)(auVar47._8_4_ < fRam0000000146b07ab8);
        auVar41._12_4_ = -(uint)(auVar47._12_4_ < fRam0000000146b07abc);
        iVar16 = movmskps((int)lVar29,auVar41);
        local_928._12_4_ = 0;
        local_658._12_4_ = 0;
        if (iVar16 == 0) {
          fVar69 = DAT_1468b5d90 * local_b38;
          fVar74 = DAT_1468b5d94 * fStack_b34;
          fVar75 = DAT_1468b5d98 * fStack_b30;
          fVar76 = fStack_b2c * 0.0;
          local_148 = DAT_1464aa81c * local_b58 * _DAT_146b07a70 + fStack_b4c * DAT_1464aa810 +
                      DAT_1464aa818 * fStack_b54 * _DAT_146b07a60 +
                      DAT_1464aa814 * fStack_b50 * _DAT_146b07a50;
          fStack_144 = DAT_1464aa818 * local_b58 * fRam0000000146b07a74 + fStack_b4c * DAT_1464aa814
                       + DAT_1464aa81c * fStack_b54 * fRam0000000146b07a64 +
                       DAT_1464aa810 * fStack_b50 * fRam0000000146b07a54;
          fStack_140 = DAT_1464aa814 * local_b58 * fRam0000000146b07a78 + fStack_b4c * DAT_1464aa818
                       + DAT_1464aa810 * fStack_b54 * fRam0000000146b07a68 +
                       DAT_1464aa81c * fStack_b50 * fRam0000000146b07a58;
          fStack_13c = DAT_1464aa810 * local_b58 * fRam0000000146b07a7c + fStack_b4c * DAT_1464aa81c
                       + DAT_1464aa814 * fStack_b54 * fRam0000000146b07a6c +
                       DAT_1464aa818 * fStack_b50 * fRam0000000146b07a5c;
          fVar55 = fVar75 * fStack_b54 - fVar74 * fStack_b50;
          fVar59 = fVar69 * fStack_b50 - fVar75 * local_b58;
          fVar62 = fVar74 * local_b58 - fVar69 * fStack_b54;
          fVar64 = fVar76 * fStack_b4c - fVar76 * fStack_b4c;
          fVar55 = fVar55 + fVar55;
          fVar59 = fVar59 + fVar59;
          fVar62 = fVar62 + fVar62;
          fVar64 = fVar64 + fVar64;
          local_138._4_4_ =
               (fVar55 * fStack_b50 - fVar62 * local_b58) + fVar59 * fStack_b4c + fVar74 +
               fStack_b44;
          local_138._0_4_ =
               (fVar62 * fStack_b54 - fVar59 * fStack_b50) + fVar55 * fStack_b4c + fVar69 +
               local_b48;
          fStack_130 = (fVar59 * local_b58 - fVar55 * fStack_b54) + fVar62 * fStack_b4c + fVar75 +
                       fStack_b40;
          fStack_12c = (fVar64 * fStack_b4c - fVar64 * fStack_b4c) + fVar64 * fStack_b4c + fVar76 +
                       fStack_b3c;
        }
        else {
          fVar69 = fStack_b54 + fStack_b54;
          fVar75 = fStack_b50 + fStack_b50;
          fVar57 = local_b88 * local_b38;
          fVar58 = fStack_b84 * fStack_b34;
          fVar61 = local_b80 * fStack_b30;
          fVar65 = fStack_b2c * 0.0;
          fVar76 = (local_b58 + local_b58) * local_b58;
          fVar74 = (local_b58 + local_b58) * fStack_b4c;
          fStack_474 = (fVar75 * fStack_b4c + fVar69 * local_b58) * local_b38;
          fStack_460 = (fVar74 + fVar75 * fStack_b54) * fStack_b34;
          local_458 = (fVar69 * fStack_b4c + fVar75 * local_b58) * fStack_b30;
          local_468 = fStack_b34 * (fVar69 * local_b58 - fVar75 * fStack_b4c);
          fStack_454 = fStack_b30 * (fVar75 * fStack_b54 - fVar74);
          fStack_470 = local_b38 * (fVar75 * local_b58 - fVar69 * fStack_b4c);
          local_478 = (float)((uint)((_DAT_146b07a10 - (fVar75 * fStack_b50 + fVar69 * fStack_b54))
                                    * local_b38) & _DAT_146b07a20);
          fStack_464 = (float)((uint)((fRam0000000146b07a14 - (fVar75 * fStack_b50 + fVar76)) *
                                     fStack_b34) & uRam0000000146b07a24);
          fStack_450 = (float)((uint)((fRam0000000146b07a18 - (fVar69 * fStack_b54 + fVar76)) *
                                     fStack_b30) & uRam0000000146b07a28);
          fStack_46c = (float)((uint)((fRam0000000146b07a1c - (fVar76 + fVar76)) * fStack_b2c) &
                              uRam0000000146b07a2c);
          fVar69 = DAT_1464aa814 + DAT_1464aa814;
          fVar74 = DAT_1464aa818 + DAT_1464aa818;
          fVar75 = DAT_1464aa810 * (DAT_1464aa810 + DAT_1464aa810);
          fVar76 = DAT_1464aa81c * (DAT_1464aa810 + DAT_1464aa810);
          fStack_434 = (DAT_1464aa81c * fVar74 + fVar69 * DAT_1464aa810) * local_b88;
          fStack_420 = (fVar76 + fVar74 * DAT_1464aa814) * fStack_b84;
          local_418 = (DAT_1464aa81c * fVar69 + fVar74 * DAT_1464aa810) * local_b80;
          local_428 = fStack_b84 * (fVar69 * DAT_1464aa810 - DAT_1464aa81c * fVar74);
          fStack_414 = local_b80 * (fVar74 * DAT_1464aa814 - fVar76);
          fStack_430 = local_b88 * (fVar74 * DAT_1464aa810 - DAT_1464aa81c * fVar69);
          local_438 = (float)((uint)((_DAT_146b07a10 -
                                     (DAT_1464aa818 * fVar74 + DAT_1464aa814 * fVar69)) * local_b88)
                             & _DAT_146b07a20);
          fStack_424 = (float)((uint)((fRam0000000146b07a14 - (DAT_1464aa818 * fVar74 + fVar75)) *
                                     fStack_b84) & uRam0000000146b07a24);
          fStack_410 = (float)((uint)((fRam0000000146b07a18 - (DAT_1464aa814 * fVar69 + fVar75)) *
                                     local_b80) & uRam0000000146b07a28);
          fStack_42c = (float)((uint)((fRam0000000146b07a1c - (fVar75 + fVar75)) * 0.0) &
                              uRam0000000146b07a2c);
          local_ab8 = fStack_434 * local_468 + local_438 * local_478 + fStack_430 * local_458 +
                      fStack_42c * local_b48;
          fStack_ab4 = fStack_434 * fStack_464 + local_438 * fStack_474 + fStack_430 * fStack_454 +
                       fStack_42c * fStack_b44;
          fStack_ab0 = fStack_434 * fStack_460 + local_438 * fStack_470 + fStack_430 * fStack_450 +
                       fStack_42c * fStack_b40;
          fStack_aac = fStack_434 * fStack_46c + local_438 * fStack_46c + fStack_430 * fStack_46c +
                       fStack_42c * fRam0000000146b07a1c;
          local_408 = DAT_1468b5d90;
          fStack_404 = DAT_1468b5d94;
          fStack_400 = DAT_1468b5d98;
          local_aa8 = fStack_424 * local_468 + local_428 * local_478 + fStack_420 * local_458 +
                      fStack_42c * local_b48;
          fStack_aa4 = fStack_424 * fStack_464 + local_428 * fStack_474 + fStack_420 * fStack_454 +
                       fStack_42c * fStack_b44;
          fStack_aa0 = fStack_424 * fStack_460 + local_428 * fStack_470 + fStack_420 * fStack_450 +
                       fStack_42c * fStack_b40;
          fStack_a9c = fStack_424 * fStack_46c + local_428 * fStack_46c + fStack_420 * fStack_46c +
                       fStack_42c * fRam0000000146b07a1c;
          local_a98 = fStack_414 * local_468 + local_418 * local_478 + fStack_410 * local_458 +
                      fStack_42c * local_b48;
          fStack_a94 = fStack_414 * fStack_464 + local_418 * fStack_474 + fStack_410 * fStack_454 +
                       fStack_42c * fStack_b44;
          fStack_a90 = fStack_414 * fStack_460 + local_418 * fStack_470 + fStack_410 * fStack_450 +
                       fStack_42c * fStack_b40;
          fStack_a8c = fStack_414 * fStack_46c + local_418 * fStack_46c + fStack_410 * fStack_46c +
                       fStack_42c * fRam0000000146b07a1c;
          local_a88 = DAT_1468b5d94 * local_468 + DAT_1468b5d90 * local_478 +
                      DAT_1468b5d98 * local_458 + fRam0000000146b07a1c * local_b48;
          fStack_a84 = DAT_1468b5d94 * fStack_464 + DAT_1468b5d90 * fStack_474 +
                       DAT_1468b5d98 * fStack_454 + fRam0000000146b07a1c * fStack_b44;
          fStack_a80 = DAT_1468b5d94 * fStack_460 + DAT_1468b5d90 * fStack_470 +
                       DAT_1468b5d98 * fStack_450 + fRam0000000146b07a1c * fStack_b40;
          fStack_a7c = DAT_1468b5d94 * fStack_46c + DAT_1468b5d90 * fStack_46c +
                       DAT_1468b5d98 * fStack_46c + fRam0000000146b07a1c * fRam0000000146b07a1c;
          fStack_45c = fStack_46c;
          fStack_44c = fStack_46c;
          local_448 = local_b48;
          fStack_444 = fStack_b44;
          fStack_440 = fStack_b40;
          fStack_43c = fRam0000000146b07a1c;
          fStack_41c = fStack_42c;
          fStack_40c = fStack_42c;
          fStack_3fc = fRam0000000146b07a1c;
          FMatrix::RemoveScaling(&local_ab8);
          local_698 = (float)(-(uint)(_DAT_146b07ab0 <= fVar57) & (_DAT_146b07aa0 ^ (uint)fVar55) ^
                             _DAT_146b07aa0);
          fStack_694 = (float)(-(uint)(fRam0000000146b07ab4 <= fVar58) &
                               (uRam0000000146b07aa4 ^ (uint)fVar59) ^ uRam0000000146b07aa4);
          fStack_690 = (float)(-(uint)(fRam0000000146b07ab8 <= fVar61) &
                               (uRam0000000146b07aa8 ^ (uint)fVar62) ^ uRam0000000146b07aa8);
          uStack_68c = -(uint)(fRam0000000146b07abc <= fVar65) &
                       (uRam0000000146b07aac ^ (uint)fVar64) ^ uRam0000000146b07aac;
          local_ab8 = local_ab8 * local_698;
          fStack_ab4 = fStack_ab4 * local_698;
          fStack_ab0 = fStack_ab0 * local_698;
          fStack_aa4 = fStack_aa4 * fStack_694;
          fStack_aa0 = fStack_aa0 * fStack_694;
          local_aa8 = local_aa8 * fStack_694;
          fStack_a94 = fStack_a94 * fStack_690;
          fStack_a90 = fStack_a90 * fStack_690;
          local_a98 = local_a98 * fStack_690;
          FQuat::FQuat(&local_7e8,&local_ab8);
          local_b70 = 0x322bcc77;
          auVar51._0_4_ = local_7e8 * local_7e8 + fStack_7e0 * fStack_7e0;
          auVar51._4_4_ = fStack_7e4 * fStack_7e4 + fStack_7dc * fStack_7dc;
          auVar51._8_4_ = fStack_7e0 * fStack_7e0 + local_7e8 * local_7e8;
          auVar51._12_4_ = fStack_7dc * fStack_7dc + fStack_7e4 * fStack_7e4;
          fVar69 = auVar51._4_4_ + auVar51._0_4_;
          fVar74 = auVar51._8_4_ + auVar51._4_4_;
          fVar75 = auVar51._12_4_ + auVar51._8_4_;
          fVar76 = auVar51._0_4_ + auVar51._12_4_;
          auVar6._4_4_ = fVar74;
          auVar6._0_4_ = fVar69;
          auVar6._8_4_ = fVar75;
          auVar6._12_4_ = fVar76;
          auVar47 = rsqrtps(auVar51,auVar6);
          fVar55 = auVar47._0_4_;
          fVar59 = auVar47._4_4_;
          fVar62 = auVar47._8_4_;
          fVar64 = auVar47._12_4_;
          fVar55 = (_DAT_146b07a90 - fVar55 * fVar55 * fVar69 * _DAT_146b07a90) * fVar55 + fVar55;
          fVar59 = (fRam0000000146b07a94 - fVar59 * fVar59 * fVar74 * fRam0000000146b07a94) * fVar59
                   + fVar59;
          fVar62 = (fRam0000000146b07a98 - fVar62 * fVar62 * fVar75 * fRam0000000146b07a98) * fVar62
                   + fVar62;
          fVar64 = (fRam0000000146b07a9c - fVar64 * fVar64 * fVar76 * fRam0000000146b07a9c) * fVar64
                   + fVar64;
          local_138._4_4_ = fStack_a84;
          local_138._0_4_ = local_a88;
          fStack_130 = fStack_a80;
          local_7e8 = (float)(((uint)(((_DAT_146b07a90 - fVar55 * fVar55 * fVar69 * _DAT_146b07a90)
                                       * fVar55 + fVar55) * local_7e8) ^ _DAT_146b07a80) &
                              -(uint)(1e-08 <= fVar69) ^ _DAT_146b07a80);
          fStack_7e4 = (float)(((uint)(((fRam0000000146b07a94 -
                                        fVar59 * fVar59 * fVar74 * fRam0000000146b07a94) * fVar59 +
                                       fVar59) * fStack_7e4) ^ uRam0000000146b07a84) &
                               -(uint)(1e-08 <= fVar74) ^ uRam0000000146b07a84);
          fStack_7e0 = (float)(((uint)(((fRam0000000146b07a98 -
                                        fVar62 * fVar62 * fVar75 * fRam0000000146b07a98) * fVar62 +
                                       fVar62) * fStack_7e0) ^ uRam0000000146b07a88) &
                               -(uint)(1e-08 <= fVar75) ^ uRam0000000146b07a88);
          fStack_7dc = (float)(((uint)(((fRam0000000146b07a9c -
                                        fVar64 * fVar64 * fVar76 * fRam0000000146b07a9c) * fVar64 +
                                       fVar64) * fStack_7dc) ^ uRam0000000146b07a8c) &
                               -(uint)(1e-08 <= fVar76) ^ uRam0000000146b07a8c);
          fStack_12c = 0.0;
          local_148 = local_7e8;
          fStack_144 = fStack_7e4;
          fStack_140 = fStack_7e0;
          fStack_13c = fStack_7dc;
        }
        fStack_11c = fVar68 * 0.0;
        fStack_120 = fVar60 * fVar67;
        fStack_124 = fVar56 * fVar66;
        local_128 = fVar54 * fVar63;
        iVar16 = FUN_1408bed80(param_9,1);
        local_ae0 = (longlong *)
                    (*(longlong *)(*param_9 + (longlong)(iVar16 / 0x59) * 8) +
                    (ulonglong)(uint)(iVar16 % 0x59) * 0xb8);
        plVar27 = (longlong *)local_ae0[0xf];
        if ((longlong *)local_ae0[0xf] == (longlong *)0x0) {
          plVar27 = local_ae0;
        }
        plVar27[2] = *(longlong *)(param_1[10] + 8);
        local_ae0[0x14] = *(longlong *)(param_1[10] + 0x10);
        local_ae0[0x15] = local_b68;
        FUN_1423063d0(param_1,&local_7d8,&local_148);
        FUN_1423063d0(param_1,local_6c8,&DAT_1468b5b70);
        local_788 = _DAT_1464aa7d0;
        uStack_780 = _DAT_1464aa7d8;
        local_768 = _DAT_1464aa7f0;
        uStack_760 = _DAT_1464aa7f8;
        local_748 = 0x3f80000000000000;
        uStack_740 = 0x3f8000003f800000;
        local_778 = _DAT_1464aa7e0;
        uStack_770 = _DAT_1464aa7e8;
        local_728 = 0;
        uStack_720 = 0;
        local_758 = _DAT_1464aa800;
        uStack_750 = uRam00000001464aa808;
        fVar55 = fStack_144 + fStack_144;
        fVar59 = fStack_140 + fStack_140;
        local_738 = 0;
        local_730 = 0x3f800000;
        fVar64 = (local_148 + local_148) * local_148;
        fVar62 = fStack_13c * (local_148 + local_148);
        fStack_704 = (fStack_13c * fVar59 + local_148 * fVar55) * local_128;
        fStack_6f0 = (fVar62 + fStack_144 * fVar59) * fStack_124;
        local_6e8 = (fStack_13c * fVar55 + local_148 * fVar59) * fStack_120;
        local_6f8 = fStack_124 * (local_148 * fVar55 - fStack_13c * fVar59);
        fStack_6e4 = fStack_120 * (fStack_144 * fVar59 - fVar62);
        fStack_700 = local_128 * (local_148 * fVar59 - fStack_13c * fVar55);
        local_8e0 = local_7d0;
        local_b98 = &local_788;
        local_ba0 = 0x3f800000;
        local_ba8 = 1;
        local_bb0 = local_b78;
        local_be8 = local_6c8;
        local_bb8 = 0;
        local_bc0 = 0;
        local_bc8 = (longlong *)((ulonglong)local_bc8 & 0xffffffffffffff00);
        local_bd0 = local_bd0 & 0xffffff00;
        local_bd8 = 0;
        local_708 = (uint)((_DAT_146b07a10 - (fVar59 * fStack_140 + fVar55 * fStack_144)) *
                          local_128) & _DAT_146b07a20;
        uStack_6f4 = (uint)((fRam0000000146b07a14 - (fVar59 * fStack_140 + fVar64)) * fStack_124) &
                     uRam0000000146b07a24;
        uStack_6e0 = (uint)((fRam0000000146b07a18 - (fVar55 * fStack_144 + fVar64)) * fStack_120) &
                     uRam0000000146b07a28;
        uStack_6fc = (uint)((fRam0000000146b07a1c - (fVar64 + fVar64)) * fStack_11c) &
                     uRam0000000146b07a2c;
        local_6d8 = local_138._0_4_;
        uStack_6d4 = local_138._4_4_;
        uStack_6d0 = fStack_130;
        fStack_6cc = fRam0000000146b07a1c;
        local_be0 = (longlong *)CONCAT71(local_be0._1_7_,1);
        local_8e8 = local_7d8;
        uStack_6ec = uStack_6fc;
        uStack_6dc = uStack_6fc;
        uVar22 = FUN_1408c7250(local_2e8,&local_708,&local_8e8,&local_7d8);
        local_be8 = (undefined1 *)CONCAT44(local_be8._4_4_,2);
        (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,local_938,uVar22,&DAT_146b09668);
        local_b18 = local_938[0];
        if (local_938[0] != 0) {
          LOCK();
          *(int *)(local_938[0] + 8) = *(int *)(local_938[0] + 8) + 1;
          UNLOCK();
        }
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_938);
        plVar25 = plVar27 + 1;
        if (plVar25 != &local_b18) {
          puVar21 = (undefined8 *)*plVar25;
          *plVar25 = local_b18;
          local_b18 = 0;
          if (puVar21 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar21 + 1);
            iVar16 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar16 == 1) {
              if ((*(char *)(puVar21 + 2) == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar15 = FOutputDevice::CanBeUsedOnAnyThread(), cVar15 == '\0')))) {
                LOCK();
                bVar33 = *(int *)((longlong)puVar21 + 0xc) == 0;
                if (bVar33) {
                  *(int *)((longlong)puVar21 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar33) {
                  TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar21);
                }
              }
              else {
                (**(code **)*puVar21)(puVar21,1);
              }
            }
          }
        }
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_b18);
        iVar16 = (int)plVar27[7];
        local_ae8 = 0;
        iVar19 = *(int *)(*(longlong *)(param_1[10] + 8) + 0x48);
        iStack_ae4 = iVar19 / 3 + (iVar19 >> 0x1f) +
                     (int)(((longlong)iVar19 / 3 + ((longlong)iVar19 >> 0x3f) & 0xffffffffU) >> 0x1f
                          );
        *(int *)(plVar27 + 7) = iVar16 + 1;
        if (*(int *)((longlong)plVar27 + 0x3c) < iVar16 + 1) {
          TArray<TWeakObjectPtr<UPersistenceComponent,FWeakObjectPtr>,TInlineAllocator<1,FDefaultAllocator>_>
          ::ResizeGrow(plVar27 + 5,iVar16);
        }
        local_918 = 0;
        fStack_910 = 0.0;
        plVar25 = (longlong *)plVar27[6];
        if ((longlong *)plVar27[6] == (longlong *)0x0) {
          plVar25 = plVar27 + 5;
        }
        plVar25[iVar16] = CONCAT44(iStack_ae4,local_ae8);
        uVar31 = 0;
        *(undefined4 *)(plVar27 + 9) = 0;
        *(int *)((longlong)plVar27 + 0x4c) = *(int *)(*(longlong *)param_1[10] + 0x13c) + -1;
        if (fStack_124 * local_128 * fStack_120 < 0.0) {
          uVar31 = 8;
        }
        *(uint *)((longlong)local_ae0 + 0x8c) =
             uVar31 | *(uint *)((longlong)local_ae0 + 0x8c) & 0xffc00ff7;
        FUN_142747330(param_9,param_8);
      }
    }
  }
  iVar16 = 0;
  if (0 < (int)param_1[9]) {
    lVar29 = 0;
    do {
      lVar2 = param_1[8];
      uVar17 = FRotator::Quaternion(lVar2 + 0x6c + lVar29);
      fVar62 = fRam0000000146b07a18;
      fVar59 = fRam0000000146b07a14;
      fVar55 = _DAT_146b07a10;
      auVar14._4_4_ = fStack_b34;
      auVar14._0_4_ = local_b38;
      auVar14._8_4_ = fStack_b30;
      auVar14._12_4_ = fStack_b2c;
      local_878 = local_7b8;
      fStack_874 = fStack_7b4;
      fStack_870 = fStack_7b0;
      fStack_86c = fStack_7ac;
      auVar44._4_4_ = DAT_1464aa788._4_4_;
      auVar44._0_4_ = (float)DAT_1464aa788;
      auVar44._8_4_ = DAT_1464aa790;
      auVar44._12_4_ = 0;
      auVar47 = minps(auVar44,auVar14);
      auVar45._4_4_ = -(uint)(auVar47._4_4_ < fRam0000000146b07ab4);
      auVar45._0_4_ = -(uint)(auVar47._0_4_ < _DAT_146b07ab0);
      auVar45._8_4_ = -(uint)(auVar47._8_4_ < fRam0000000146b07ab8);
      auVar45._12_4_ = -(uint)(auVar47._12_4_ < fRam0000000146b07abc);
      fVar64 = local_b88 * *(float *)(lVar29 + 0x60 + lVar2);
      fVar54 = fStack_b84 * *(float *)(lVar29 + 100 + lVar2);
      fVar56 = local_b80 * *(float *)(lVar29 + 0x68 + lVar2);
      iVar19 = movmskps(uVar17,auVar45);
      local_858._4_4_ = DAT_1464aa788._4_4_;
      local_858._0_4_ = (float)DAT_1464aa788;
      fStack_850 = DAT_1464aa790;
      fStack_84c = 0.0;
      local_ac8 = _DAT_146b07ab0;
      fStack_ac4 = fRam0000000146b07ab4;
      fStack_ac0 = fRam0000000146b07ab8;
      fStack_abc = fRam0000000146b07abc;
      local_868._4_4_ = fVar54;
      local_868._0_4_ = fVar64;
      fStack_860 = fVar56;
      fStack_85c = 0.0;
      if (iVar19 == 0) {
        fVar64 = fVar64 * local_b38;
        fVar54 = fVar54 * fStack_b34;
        fVar56 = fVar56 * fStack_b30;
        fVar63 = fStack_b2c * 0.0;
        local_858._4_4_ = DAT_1464aa788._4_4_ * fStack_b34;
        local_858._0_4_ = (float)DAT_1464aa788 * local_b38;
        fStack_850 = DAT_1464aa790 * fStack_b30;
        fStack_84c = fStack_b2c * 0.0;
        local_878 = fStack_7ac * local_b58 * _DAT_146b07a70 + local_7b8 * fStack_b4c +
                    fStack_7b0 * fStack_b54 * _DAT_146b07a60 +
                    fStack_7b4 * fStack_b50 * _DAT_146b07a50;
        fStack_874 = fStack_7b0 * local_b58 * fRam0000000146b07a74 + fStack_7b4 * fStack_b4c +
                     fStack_7ac * fStack_b54 * fRam0000000146b07a64 +
                     local_7b8 * fStack_b50 * fRam0000000146b07a54;
        fStack_870 = fStack_7b4 * local_b58 * fRam0000000146b07a78 + fStack_7b0 * fStack_b4c +
                     local_7b8 * fStack_b54 * fRam0000000146b07a68 +
                     fStack_7ac * fStack_b50 * fRam0000000146b07a58;
        fStack_86c = local_7b8 * local_b58 * fRam0000000146b07a7c + fStack_7ac * fStack_b4c +
                     fStack_7b4 * fStack_b54 * fRam0000000146b07a6c +
                     fStack_7b0 * fStack_b50 * fRam0000000146b07a5c;
        fVar55 = fVar56 * fStack_b54 - fVar54 * fStack_b50;
        fVar59 = fVar64 * fStack_b50 - fVar56 * local_b58;
        fVar62 = fVar54 * local_b58 - fVar64 * fStack_b54;
        fVar60 = fVar63 * fStack_b4c - fVar63 * fStack_b4c;
        fVar55 = fVar55 + fVar55;
        fVar59 = fVar59 + fVar59;
        fVar62 = fVar62 + fVar62;
        fVar60 = fVar60 + fVar60;
        local_868._4_4_ =
             (fVar55 * fStack_b50 - fVar62 * local_b58) + fStack_b4c * fVar59 + fVar54 + fStack_b44;
        local_868._0_4_ =
             (fVar62 * fStack_b54 - fVar59 * fStack_b50) + fStack_b4c * fVar55 + fVar64 + local_b48;
        fStack_860 = (fVar59 * local_b58 - fVar55 * fStack_b54) + fStack_b4c * fVar62 + fVar56 +
                     fStack_b40;
        fStack_85c = (fVar60 * fStack_b4c - fVar60 * fStack_b4c) + fStack_b4c * fVar60 + fVar63 +
                     fStack_b3c;
      }
      else {
        fVar63 = fStack_b54 + fStack_b54;
        fVar67 = fStack_b50 + fStack_b50;
        fVar69 = (float)DAT_1464aa788 * local_b38;
        fVar74 = DAT_1464aa788._4_4_ * fStack_b34;
        fVar75 = DAT_1464aa790 * fStack_b30;
        fVar76 = fStack_b2c * 0.0;
        fVar68 = (local_b58 + local_b58) * local_b58;
        fVar60 = (local_b58 + local_b58) * fStack_b4c;
        fStack_374 = (fVar67 * fStack_b4c + fVar63 * local_b58) * local_b38;
        fStack_360 = (fVar60 + fVar67 * fStack_b54) * fStack_b34;
        local_358 = (fVar63 * fStack_b4c + fVar67 * local_b58) * fStack_b30;
        local_368 = fStack_b34 * (fVar63 * local_b58 - fVar67 * fStack_b4c);
        fStack_354 = fStack_b30 * (fVar67 * fStack_b54 - fVar60);
        fStack_370 = local_b38 * (fVar67 * local_b58 - fVar63 * fStack_b4c);
        fVar60 = fStack_7b4 + fStack_7b4;
        fVar66 = fStack_7b0 + fStack_7b0;
        local_378 = (float)((uint)((_DAT_146b07a10 - (fVar67 * fStack_b50 + fVar63 * fStack_b54)) *
                                  local_b38) & _DAT_146b07a20);
        fStack_364 = (float)((uint)((fRam0000000146b07a14 - (fVar67 * fStack_b50 + fVar68)) *
                                   fStack_b34) & uRam0000000146b07a24);
        fStack_350 = (float)((uint)((fRam0000000146b07a18 - (fVar63 * fStack_b54 + fVar68)) *
                                   fStack_b30) & uRam0000000146b07a28);
        fStack_36c = (float)((uint)((fRam0000000146b07a1c - (fVar68 + fVar68)) * fStack_b2c) &
                            uRam0000000146b07a2c);
        fVar67 = (local_7b8 + local_7b8) * local_7b8;
        fVar63 = (local_7b8 + local_7b8) * fStack_7ac;
        local_348 = local_b48;
        fStack_344 = fStack_b44;
        fStack_340 = fStack_b40;
        fStack_33c = fRam0000000146b07a1c;
        fStack_334 = (fVar66 * fStack_7ac + fVar60 * local_7b8) * (float)DAT_1464aa788;
        fStack_320 = (fVar63 + fVar66 * fStack_7b4) * DAT_1464aa788._4_4_;
        local_318 = (fVar60 * fStack_7ac + fVar66 * local_7b8) * DAT_1464aa790;
        local_328 = DAT_1464aa788._4_4_ * (fVar60 * local_7b8 - fVar66 * fStack_7ac);
        fStack_314 = DAT_1464aa790 * (fVar66 * fStack_7b4 - fVar63);
        fStack_330 = (float)DAT_1464aa788 * (fVar66 * local_7b8 - fVar60 * fStack_7ac);
        local_338 = (float)((uint)((_DAT_146b07a10 - (fVar66 * fStack_7b0 + fVar60 * fStack_7b4)) *
                                  (float)DAT_1464aa788) & _DAT_146b07a20);
        fStack_324 = (float)((uint)((fRam0000000146b07a14 - (fVar66 * fStack_7b0 + fVar67)) *
                                   DAT_1464aa788._4_4_) & uRam0000000146b07a24);
        fStack_310 = (float)((uint)((fRam0000000146b07a18 - (fVar60 * fStack_7b4 + fVar67)) *
                                   DAT_1464aa790) & uRam0000000146b07a28);
        fStack_32c = (float)((uint)((fRam0000000146b07a1c - (fVar67 + fVar67)) * 0.0) &
                            uRam0000000146b07a2c);
        local_978 = fStack_334 * local_368 + local_338 * local_378 + fStack_330 * local_358 +
                    fStack_32c * local_b48;
        fStack_974 = fStack_334 * fStack_364 + local_338 * fStack_374 + fStack_330 * fStack_354 +
                     fStack_32c * fStack_b44;
        fStack_970 = fStack_334 * fStack_360 + local_338 * fStack_370 + fStack_330 * fStack_350 +
                     fStack_32c * fStack_b40;
        fStack_96c = fStack_334 * fStack_36c + local_338 * fStack_36c + fStack_330 * fStack_36c +
                     fStack_32c * fRam0000000146b07a1c;
        fStack_2fc = fRam0000000146b07a1c;
        local_968 = fStack_324 * local_368 + local_328 * local_378 + fStack_320 * local_358 +
                    fStack_32c * local_b48;
        fStack_964 = fStack_324 * fStack_364 + local_328 * fStack_374 + fStack_320 * fStack_354 +
                     fStack_32c * fStack_b44;
        fStack_960 = fStack_324 * fStack_360 + local_328 * fStack_370 + fStack_320 * fStack_350 +
                     fStack_32c * fStack_b40;
        fStack_95c = fStack_324 * fStack_36c + local_328 * fStack_36c + fStack_320 * fStack_36c +
                     fStack_32c * fRam0000000146b07a1c;
        local_958 = fStack_314 * local_368 + local_318 * local_378 + fStack_310 * local_358 +
                    fStack_32c * local_b48;
        fStack_954 = fStack_314 * fStack_364 + local_318 * fStack_374 + fStack_310 * fStack_354 +
                     fStack_32c * fStack_b44;
        fStack_950 = fStack_314 * fStack_360 + local_318 * fStack_370 + fStack_310 * fStack_350 +
                     fStack_32c * fStack_b40;
        fStack_94c = fStack_314 * fStack_36c + local_318 * fStack_36c + fStack_310 * fStack_36c +
                     fStack_32c * fRam0000000146b07a1c;
        local_948 = fVar54 * local_368 + fVar64 * local_378 + fVar56 * local_358 +
                    fRam0000000146b07a1c * local_b48;
        fStack_944 = fVar54 * fStack_364 + fVar64 * fStack_374 + fVar56 * fStack_354 +
                     fRam0000000146b07a1c * fStack_b44;
        fStack_940 = fVar54 * fStack_360 + fVar64 * fStack_370 + fVar56 * fStack_350 +
                     fRam0000000146b07a1c * fStack_b40;
        fStack_93c = fVar54 * fStack_36c + fVar64 * fStack_36c + fVar56 * fStack_36c +
                     fRam0000000146b07a1c * fRam0000000146b07a1c;
        fStack_35c = fStack_36c;
        fStack_34c = fStack_36c;
        fStack_31c = fStack_32c;
        fStack_30c = fStack_32c;
        local_308 = fVar64;
        fStack_304 = fVar54;
        fStack_300 = fVar56;
        FMatrix::RemoveScaling(&local_978);
        fVar55 = (float)(-(uint)(local_ac8 <= fVar69) & (_DAT_146b07aa0 ^ (uint)fVar55) ^
                        _DAT_146b07aa0);
        fVar59 = (float)(-(uint)(fStack_ac4 <= fVar74) & (uRam0000000146b07aa4 ^ (uint)fVar59) ^
                        uRam0000000146b07aa4);
        fVar62 = (float)(-(uint)(fStack_ac0 <= fVar75) & (uRam0000000146b07aa8 ^ (uint)fVar62) ^
                        uRam0000000146b07aa8);
        pfVar23 = (float *)FMatrix::GetScaledAxis(&local_978,local_718,1);
        local_978 = fVar55 * *pfVar23;
        fStack_974 = fVar55 * pfVar23[1];
        fStack_970 = fVar55 * pfVar23[2];
        fStack_964 = fStack_964 * fVar59;
        fStack_960 = fStack_960 * fVar59;
        local_968 = local_968 * fVar59;
        fStack_954 = fStack_954 * fVar62;
        fStack_950 = fStack_950 * fVar62;
        local_958 = local_958 * fVar62;
        FQuat::FQuat(local_b28);
        local_af0 = 0x322bcc77;
        local_858._4_4_ = fVar74;
        local_858._0_4_ = fVar69;
        fStack_850 = fVar75;
        fStack_84c = fVar76;
        auVar53._0_4_ = (float)local_b28._0_4_ * (float)local_b28._0_4_ + fStack_b20 * fStack_b20;
        auVar53._4_4_ = (float)local_b28._4_4_ * (float)local_b28._4_4_ + fStack_b1c * fStack_b1c;
        auVar53._8_4_ = fStack_b20 * fStack_b20 + (float)local_b28._0_4_ * (float)local_b28._0_4_;
        auVar53._12_4_ = fStack_b1c * fStack_b1c + (float)local_b28._4_4_ * (float)local_b28._4_4_;
        fVar54 = auVar53._4_4_ + auVar53._0_4_;
        fVar56 = auVar53._8_4_ + auVar53._4_4_;
        fVar60 = auVar53._12_4_ + auVar53._8_4_;
        fVar63 = auVar53._0_4_ + auVar53._12_4_;
        auVar7._4_4_ = fVar56;
        auVar7._0_4_ = fVar54;
        auVar7._8_4_ = fVar60;
        auVar7._12_4_ = fVar63;
        auVar47 = rsqrtps(auVar53,auVar7);
        fVar55 = auVar47._0_4_;
        fVar59 = auVar47._4_4_;
        fVar62 = auVar47._8_4_;
        fVar64 = auVar47._12_4_;
        fVar55 = (_DAT_146b07a90 - fVar55 * fVar55 * fVar54 * _DAT_146b07a90) * fVar55 + fVar55;
        fVar59 = (fRam0000000146b07a94 - fVar59 * fVar59 * fVar56 * fRam0000000146b07a94) * fVar59 +
                 fVar59;
        fVar62 = (fRam0000000146b07a98 - fVar62 * fVar62 * fVar60 * fRam0000000146b07a98) * fVar62 +
                 fVar62;
        fVar64 = (fRam0000000146b07a9c - fVar64 * fVar64 * fVar63 * fRam0000000146b07a9c) * fVar64 +
                 fVar64;
        local_878 = (float)(((uint)(((_DAT_146b07a90 - fVar55 * fVar55 * fVar54 * _DAT_146b07a90) *
                                     fVar55 + fVar55) * (float)local_b28._0_4_) ^ _DAT_146b07a80) &
                            -(uint)(1e-08 <= fVar54) ^ _DAT_146b07a80);
        fStack_874 = (float)(((uint)(((fRam0000000146b07a94 -
                                      fVar59 * fVar59 * fVar56 * fRam0000000146b07a94) * fVar59 +
                                     fVar59) * (float)local_b28._4_4_) ^ uRam0000000146b07a84) &
                             -(uint)(1e-08 <= fVar56) ^ uRam0000000146b07a84);
        fStack_870 = (float)(((uint)(((fRam0000000146b07a98 -
                                      fVar62 * fVar62 * fVar60 * fRam0000000146b07a98) * fVar62 +
                                     fVar62) * fStack_b20) ^ uRam0000000146b07a88) &
                             -(uint)(1e-08 <= fVar60) ^ uRam0000000146b07a88);
        fStack_86c = (float)(((uint)(((fRam0000000146b07a9c -
                                      fVar64 * fVar64 * fVar63 * fRam0000000146b07a9c) * fVar64 +
                                     fVar64) * fStack_b1c) ^ uRam0000000146b07a8c) &
                             -(uint)(1e-08 <= fVar63) ^ uRam0000000146b07a8c);
        local_b28._4_4_ = fStack_874;
        local_b28._0_4_ = local_878;
        fStack_b20 = fStack_870;
        fStack_b1c = fStack_86c;
        local_868._4_4_ = fStack_944;
        local_868._0_4_ = local_948;
        fStack_860 = fStack_940;
        fStack_85c = 0.0;
      }
      if (param_6 == '\0') {
        plVar27 = (longlong *)plVar26[0x11];
        if ((longlong *)plVar26[0x11] == (longlong *)0x0) {
          plVar27 = plVar26 + 0xf;
        }
        local_be8 = (undefined1 *)CONCAT44(local_be8._4_4_,local_res18[0]);
        FUN_1426becd0(param_1[8] + (longlong)iVar16 * 0x88,plVar27[lVar30],&local_878,&local_b88);
      }
      else {
        local_be8 = (undefined1 *)CONCAT44(local_be8._4_4_,param_8);
        local_be0 = plVar26;
        FUN_1426c76b0(param_1[8] + (longlong)iVar16 * 0x88,&local_878,&local_b88,local_b68);
      }
      iVar16 = iVar16 + 1;
      lVar29 = lVar29 + 0x88;
    } while (iVar16 < (int)param_1[9]);
  }
  return;
}



// FUNCTION 1426c3ce0 GetAssetRegistryTags body=472 status=ok
// SIG undefined GetAssetRegistryTags(void)

void UPhysicsAsset::GetAssetRegistryTags(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  longlong lVar6;
  void *pvVar7;
  void *pvVar8;
  undefined1 local_res8 [8];
  void *local_58;
  ulonglong local_50;
  undefined8 local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  
  pvVar7 = (void *)0x0;
  local_58 = (void *)0x0;
  local_50 = 0;
  FString::AppendInt(&local_58,*(undefined4 *)(param_1 + 0x48));
  puVar4 = (undefined8 *)FName::FName(local_res8,"Bodies",1);
  pvVar8 = local_58;
  lVar6 = (longlong)(int)local_50;
  local_40 = (void *)0x0;
  local_48 = *puVar4;
  local_38 = (int)local_50;
  if ((int)local_50 == 0) {
    uVar5 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_40,local_50 & 0xffffffff,0);
    pvVar7 = local_40;
    ::_guard_xfg_dispatch_icall_nop(local_40,pvVar8,lVar6 * 2);
    uVar5 = local_34;
  }
  iVar3 = local_38;
  uVar2 = local_48;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_2,iVar1);
  }
  puVar4 = (undefined8 *)((longlong)iVar1 * 0x20 + *param_2);
  *puVar4 = uVar2;
  puVar4[1] = pvVar7;
  pvVar8 = (void *)0x0;
  *(int *)(puVar4 + 2) = iVar3;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar5;
  puVar4[3] = 2;
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  FString::AppendInt(&local_58,*(undefined4 *)(param_1 + 0x58));
  puVar4 = (undefined8 *)FName::FName(local_res8,"Constraints",1);
  pvVar7 = local_58;
  lVar6 = (longlong)(int)local_50;
  local_40 = (void *)0x0;
  local_48 = *puVar4;
  local_38 = (int)local_50;
  if ((int)local_50 == 0) {
    local_34 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_40,local_50 & 0xffffffff,0);
    pvVar8 = local_40;
    ::_guard_xfg_dispatch_icall_nop(local_40,pvVar7,lVar6 * 2);
  }
  iVar3 = local_38;
  uVar2 = local_48;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_2,iVar1);
  }
  puVar4 = (undefined8 *)((longlong)iVar1 * 0x20 + *param_2);
  *puVar4 = uVar2;
  puVar4[1] = pvVar8;
  *(int *)(puVar4 + 2) = iVar3;
  *(undefined4 *)((longlong)puVar4 + 0x14) = local_34;
  puVar4[3] = 2;
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  FUN_1417557f0(param_1,param_2);
  return;
}



// FUNCTION 1426c3ec0 FUN_1426c3ec0 body=405 status=ok
// SIG undefined FUN_1426c3ec0(void)

void FUN_1426c3ec0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  char param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  iVar2 = FReferenceSkeleton::FindBoneIndex(param_4 + 0x138,local_res18);
  uVar8 = 0;
  uVar10 = uVar8;
  if (0 < *(int *)(param_1 + 0x48)) {
    do {
      iVar7 = -1;
      lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + uVar8) + 0x90);
      if (lVar1 != 0) {
        if (*(int *)(param_4 + 0x1d0) != *(int *)(param_4 + 0x1fc)) {
          lVar4 = *(longlong *)(param_4 + 0x208);
          if (*(longlong *)(param_4 + 0x208) == 0) {
            lVar4 = param_4 + 0x200;
          }
          iVar3 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                                   (longlong)*(int *)(param_4 + 0x210) - 1U) * 4);
          if (iVar3 != -1) {
            do {
              piVar6 = (int *)(*(longlong *)(param_4 + 0x1c8) + (longlong)iVar3 * 0x18);
              if (*(longlong *)(*(longlong *)(param_4 + 0x1c8) + (longlong)iVar3 * 0x18) == lVar1) {
                if (iVar3 != -1) goto LAB_1426c3fb3;
                break;
              }
              iVar3 = piVar6[4];
            } while (iVar3 != -1);
          }
        }
        piVar6 = (int *)0x0;
LAB_1426c3fb3:
        piVar5 = piVar6 + 2;
        if (piVar6 == (int *)0x0) {
          piVar5 = (int *)0x0;
        }
        if (piVar5 != (int *)0x0) {
          iVar7 = *piVar5;
        }
      }
      if ((param_5 == '\0') || (iVar7 != iVar2)) {
        if (iVar2 < iVar7) {
          iVar7 = *(int *)(*(longlong *)(param_4 + 0x158) + 8 + (longlong)iVar7 * 0x10);
          do {
            if (iVar7 == iVar2) goto LAB_1426c4003;
            iVar7 = *(int *)(*(longlong *)(param_4 + 0x158) + 8 + (longlong)iVar7 * 0x10);
          } while (iVar7 != -1);
        }
      }
      else {
LAB_1426c4003:
        iVar7 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar7 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
        }
        *(int *)(*param_2 + (longlong)iVar7 * 4) = (int)uVar10;
      }
      uVar9 = (int)uVar10 + 1;
      uVar8 = uVar8 + 8;
      uVar10 = (ulonglong)uVar9;
    } while ((int)uVar9 < *(int *)(param_1 + 0x48));
  }
  return;
}



// FUNCTION 1426c4060 FUN_1426c4060 body=1734 status=ok
// SIG undefined FUN_1426c4060(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1426c4060(longlong param_1,float *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  char cVar11;
  int iVar12;
  undefined8 uVar13;
  float *pfVar14;
  longlong *plVar15;
  int iVar16;
  float fVar17;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar23;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar24 [16];
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
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined1 local_108 [32];
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
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  lVar1 = *(longlong *)(param_1 + 0x180);
  if (lVar1 != 0) {
    iVar16 = 0;
    if (0 < *(int *)(param_1 + 0x1a0)) {
      plVar15 = *(longlong **)(param_1 + 0x198);
      do {
        if (param_3 == *plVar15) {
          plVar15 = *(longlong **)(*(longlong *)(param_1 + 0x188) + 8 + (longlong)iVar16 * 0x10);
          if (plVar15 != (longlong *)0x0) {
            cVar11 = (**(code **)(*plVar15 + 0x1b8))(plVar15,&local_128);
            if (cVar11 != '\0') {
              P2UTransform(param_2,&local_128);
              return param_2;
            }
            uVar13 = (**(code **)(*plVar15 + 0xa0))(plVar15,local_108);
            P2UTransform(param_2,uVar13);
            return param_2;
          }
          break;
        }
        iVar16 = iVar16 + 1;
        plVar15 = plVar15 + 5;
      } while (iVar16 < *(int *)(param_1 + 0x1a0));
    }
    iVar16 = *(int *)(lVar1 + 0x770);
    iVar12 = FUN_1423ac950(lVar1,param_3);
    fVar20 = fRam0000000146b07a1c;
    if ((-1 < iVar12) && (iVar12 < *(int *)(lVar1 + 0x730 + (longlong)iVar16 * 0x10))) {
      lVar2 = *(longlong *)(param_1 + 0x180);
      pfVar14 = (float *)((longlong)iVar12 * 0x30 +
                         *(longlong *)(lVar1 + 0x728 + (longlong)iVar16 * 0x10));
      *param_2 = 0.0;
      param_2[1] = 0.0;
      param_2[2] = 0.0;
      param_2[3] = fVar20;
      param_2[4] = 0.0;
      param_2[5] = 0.0;
      param_2[6] = 0.0;
      param_2[7] = 0.0;
      fVar20 = (float)((uint)fRam0000000146b07a14 & uRam0000000146b07a24);
      fVar21 = (float)((uint)fRam0000000146b07a18 & uRam0000000146b07a28);
      fVar22 = (float)((uint)fRam0000000146b07a1c & uRam0000000146b07a2c);
      param_2[8] = (float)((uint)_DAT_146b07a10 & _DAT_146b07a20);
      param_2[9] = fVar20;
      param_2[10] = fVar21;
      param_2[0xb] = fVar22;
      fVar36 = fRam0000000146b07ab8;
      fVar35 = fRam0000000146b07ab4;
      fVar29 = _DAT_146b07ab0;
      fVar53 = fRam0000000146b07a18;
      fVar52 = fRam0000000146b07a14;
      fVar51 = _DAT_146b07a10;
      auVar18 = *(undefined1 (*) [16])(pfVar14 + 8);
      fVar20 = auVar18._0_4_;
      fVar22 = auVar18._4_4_;
      fVar3 = auVar18._8_4_;
      fVar5 = auVar18._12_4_;
      auVar19 = *(undefined1 (*) [16])(lVar2 + 0x230);
      fVar21 = auVar19._0_4_;
      fVar32 = auVar19._4_4_;
      fVar4 = auVar19._8_4_;
      fVar6 = auVar19._12_4_;
      auVar18 = minps(auVar18,auVar19);
      auVar19._4_4_ = -(uint)(auVar18._4_4_ < fRam0000000146b07ab4);
      auVar19._0_4_ = -(uint)(auVar18._0_4_ < _DAT_146b07ab0);
      auVar19._8_4_ = -(uint)(auVar18._8_4_ < fRam0000000146b07ab8);
      auVar19._12_4_ = -(uint)(auVar18._12_4_ < fRam0000000146b07abc);
      iVar16 = movmskps(iVar12,auVar19);
      if (iVar16 != 0) {
        fVar37 = *(float *)(lVar2 + 0x210);
        fVar38 = *(float *)(lVar2 + 0x214);
        fVar8 = *(float *)(lVar2 + 0x218);
        fVar23 = *(float *)(lVar2 + 0x21c);
        fVar9 = *(float *)(lVar2 + 0x220);
        fVar10 = *(float *)(lVar2 + 0x224);
        fVar17 = *(float *)(lVar2 + 0x228);
        fVar25 = fVar38 + fVar38;
        fVar26 = fVar8 + fVar8;
        fVar33 = fVar37 * (fVar37 + fVar37);
        fVar30 = fVar23 * (fVar37 + fVar37);
        fVar48 = (fVar23 * fVar26 + fVar37 * fVar25) * fVar21;
        fVar49 = (fVar30 + fVar38 * fVar26) * fVar32;
        fVar50 = (fVar23 * fVar25 + fVar37 * fVar26) * fVar4;
        fVar39 = fVar32 * (fVar37 * fVar25 - fVar23 * fVar26);
        fVar41 = fVar4 * (fVar38 * fVar26 - fVar30);
        fVar43 = fVar21 * (fVar37 * fVar26 - fVar23 * fVar25);
        fVar30 = (float)((uint)((_DAT_146b07a10 - (fVar8 * fVar26 + fVar38 * fVar25)) * fVar21) &
                        _DAT_146b07a20);
        fVar26 = (float)((uint)((fRam0000000146b07a14 - (fVar8 * fVar26 + fVar33)) * fVar32) &
                        uRam0000000146b07a24);
        fVar27 = (float)((uint)((fRam0000000146b07a18 - (fVar38 * fVar25 + fVar33)) * fVar4) &
                        uRam0000000146b07a28);
        fVar28 = (float)((uint)((fRam0000000146b07a1c - (fVar33 + fVar33)) * fVar6) &
                        uRam0000000146b07a2c);
        fVar37 = *pfVar14;
        fVar38 = pfVar14[1];
        fVar8 = pfVar14[2];
        fVar23 = pfVar14[3];
        fVar33 = fVar38 + fVar38;
        fVar31 = fVar8 + fVar8;
        fVar34 = fVar37 * (fVar37 + fVar37);
        fVar25 = (fVar37 + fVar37) * fVar23;
        fVar45 = (fVar31 * fVar23 + fVar33 * fVar37) * fVar20;
        fVar46 = (fVar25 + fVar31 * fVar38) * fVar22;
        fVar47 = (fVar33 * fVar23 + fVar31 * fVar37) * fVar3;
        fVar40 = fVar22 * (fVar33 * fVar37 - fVar31 * fVar23);
        fVar42 = fVar3 * (fVar31 * fVar38 - fVar25);
        fVar44 = fVar20 * (fVar31 * fVar37 - fVar33 * fVar23);
        fVar23 = (float)((uint)((_DAT_146b07a10 - (fVar8 * fVar31 + fVar38 * fVar33)) * fVar20) &
                        _DAT_146b07a20);
        fVar25 = (float)((uint)((fRam0000000146b07a14 - (fVar8 * fVar31 + fVar34)) * fVar22) &
                        uRam0000000146b07a24);
        fVar33 = (float)((uint)((fRam0000000146b07a18 - (fVar38 * fVar33 + fVar34)) * fVar3) &
                        uRam0000000146b07a28);
        fVar31 = (float)((uint)((fRam0000000146b07a1c - (fVar34 + fVar34)) * fVar5) &
                        uRam0000000146b07a2c);
        fVar37 = pfVar14[4];
        fVar38 = pfVar14[5];
        fVar8 = pfVar14[6];
        local_e8 = fVar45 * fVar39 + fVar23 * fVar30 + fVar44 * fVar50 + fVar31 * fVar9;
        fStack_e4 = fVar45 * fVar26 + fVar23 * fVar48 + fVar44 * fVar41 + fVar31 * fVar10;
        fStack_e0 = fVar45 * fVar49 + fVar23 * fVar43 + fVar44 * fVar27 + fVar31 * fVar17;
        fStack_dc = fVar45 * fVar28 + fVar23 * fVar28 + fVar44 * fVar28 +
                    fVar31 * fRam0000000146b07a1c;
        local_d8 = fVar25 * fVar39 + fVar40 * fVar30 + fVar46 * fVar50 + fVar31 * fVar9;
        fStack_d4 = fVar25 * fVar26 + fVar40 * fVar48 + fVar46 * fVar41 + fVar31 * fVar10;
        fStack_d0 = fVar25 * fVar49 + fVar40 * fVar43 + fVar46 * fVar27 + fVar31 * fVar17;
        fStack_cc = fVar25 * fVar28 + fVar40 * fVar28 + fVar46 * fVar28 +
                    fVar31 * fRam0000000146b07a1c;
        local_c8 = fVar42 * fVar39 + fVar47 * fVar30 + fVar33 * fVar50 + fVar31 * fVar9;
        fStack_c4 = fVar42 * fVar26 + fVar47 * fVar48 + fVar33 * fVar41 + fVar31 * fVar10;
        fStack_c0 = fVar42 * fVar49 + fVar47 * fVar43 + fVar33 * fVar27 + fVar31 * fVar17;
        fStack_bc = fVar42 * fVar28 + fVar47 * fVar28 + fVar33 * fVar28 +
                    fVar31 * fRam0000000146b07a1c;
        local_b8 = fVar38 * fVar39 + fVar37 * fVar30 + fVar8 * fVar50 + fRam0000000146b07a1c * fVar9
        ;
        fStack_b4 = fVar38 * fVar26 + fVar37 * fVar48 + fVar8 * fVar41 +
                    fRam0000000146b07a1c * fVar10;
        fStack_b0 = fVar38 * fVar49 + fVar37 * fVar43 + fVar8 * fVar27 +
                    fRam0000000146b07a1c * fVar17;
        fStack_ac = fVar38 * fVar28 + fVar37 * fVar28 + fVar8 * fVar28 +
                    fRam0000000146b07a1c * fRam0000000146b07a1c;
        FMatrix::RemoveScaling(&local_e8);
        fVar51 = (float)(-(uint)(fVar29 <= fVar20 * fVar21) & (_DAT_146b07aa0 ^ (uint)fVar51) ^
                        _DAT_146b07aa0);
        fVar52 = (float)(-(uint)(fVar35 <= fVar22 * fVar32) & (uRam0000000146b07aa4 ^ (uint)fVar52)
                        ^ uRam0000000146b07aa4);
        fVar53 = (float)(-(uint)(fVar36 <= fVar3 * fVar4) & (uRam0000000146b07aa8 ^ (uint)fVar53) ^
                        uRam0000000146b07aa8);
        local_e8 = local_e8 * fVar51;
        fStack_e4 = fStack_e4 * fVar51;
        fStack_e0 = fStack_e0 * fVar51;
        fStack_d4 = fStack_d4 * fVar52;
        fStack_d0 = fStack_d0 * fVar52;
        local_d8 = local_d8 * fVar52;
        fStack_c4 = fStack_c4 * fVar53;
        fStack_c0 = fStack_c0 * fVar53;
        local_c8 = local_c8 * fVar53;
        FQuat::FQuat(&local_128,&local_e8);
        auVar24._0_4_ = local_128 * local_128 + fStack_120 * fStack_120;
        auVar24._4_4_ = fStack_124 * fStack_124 + fStack_11c * fStack_11c;
        auVar24._8_4_ = fStack_120 * fStack_120 + local_128 * local_128;
        auVar24._12_4_ = fStack_11c * fStack_11c + fStack_124 * fStack_124;
        fVar35 = auVar24._4_4_ + auVar24._0_4_;
        fVar36 = auVar24._8_4_ + auVar24._4_4_;
        fVar37 = auVar24._12_4_ + auVar24._8_4_;
        fVar38 = auVar24._0_4_ + auVar24._12_4_;
        auVar7._4_4_ = fVar36;
        auVar7._0_4_ = fVar35;
        auVar7._8_4_ = fVar37;
        auVar7._12_4_ = fVar38;
        auVar18 = rsqrtps(auVar24,auVar7);
        fVar51 = auVar18._0_4_;
        fVar52 = auVar18._4_4_;
        fVar53 = auVar18._8_4_;
        fVar29 = auVar18._12_4_;
        fVar51 = (_DAT_146b07a90 - fVar51 * fVar51 * fVar35 * _DAT_146b07a90) * fVar51 + fVar51;
        fVar52 = (fRam0000000146b07a94 - fVar52 * fVar52 * fVar36 * fRam0000000146b07a94) * fVar52 +
                 fVar52;
        fVar53 = (fRam0000000146b07a98 - fVar53 * fVar53 * fVar37 * fRam0000000146b07a98) * fVar53 +
                 fVar53;
        fVar29 = (fRam0000000146b07a9c - fVar29 * fVar29 * fVar38 * fRam0000000146b07a9c) * fVar29 +
                 fVar29;
        auVar18._4_4_ = fStack_b4;
        auVar18._0_4_ = local_b8;
        auVar18._8_4_ = fStack_b0;
        fVar51 = (float)(((uint)(((_DAT_146b07a90 - fVar51 * fVar51 * fVar35 * _DAT_146b07a90) *
                                  fVar51 + fVar51) * local_128) ^ _DAT_146b07a80) &
                         -(uint)(1e-08 <= fVar35) ^ _DAT_146b07a80);
        fVar52 = (float)(((uint)(((fRam0000000146b07a94 -
                                  fVar52 * fVar52 * fVar36 * fRam0000000146b07a94) * fVar52 + fVar52
                                 ) * fStack_124) ^ uRam0000000146b07a84) & -(uint)(1e-08 <= fVar36)
                        ^ uRam0000000146b07a84);
        fVar53 = (float)(((uint)(((fRam0000000146b07a98 -
                                  fVar53 * fVar53 * fVar37 * fRam0000000146b07a98) * fVar53 + fVar53
                                 ) * fStack_120) ^ uRam0000000146b07a88) & -(uint)(1e-08 <= fVar37)
                        ^ uRam0000000146b07a88);
        fVar29 = (float)(((uint)(((fRam0000000146b07a9c -
                                  fVar29 * fVar29 * fVar38 * fRam0000000146b07a9c) * fVar29 + fVar29
                                 ) * fStack_11c) ^ uRam0000000146b07a8c) & -(uint)(1e-08 <= fVar38)
                        ^ uRam0000000146b07a8c);
        param_2[8] = fVar20 * fVar21;
        param_2[9] = fVar22 * fVar32;
        param_2[10] = fVar3 * fVar4;
        param_2[0xb] = fVar5 * fVar6;
        auVar18._12_4_ = 0;
        *(undefined1 (*) [16])(param_2 + 4) = auVar18;
        *param_2 = fVar51;
        param_2[1] = fVar52;
        param_2[2] = fVar53;
        param_2[3] = fVar29;
        return param_2;
      }
      fVar51 = *(float *)(lVar2 + 0x210);
      fVar52 = *(float *)(lVar2 + 0x214);
      fVar53 = *(float *)(lVar2 + 0x218);
      fVar29 = *(float *)(lVar2 + 0x21c);
      fVar35 = *pfVar14;
      fVar36 = pfVar14[1];
      fVar37 = pfVar14[2];
      fVar38 = pfVar14[3];
      fVar8 = *(float *)(lVar2 + 0x220);
      fVar23 = *(float *)(lVar2 + 0x224);
      fVar9 = *(float *)(lVar2 + 0x228);
      fVar10 = *(float *)(lVar2 + 0x22c);
      fVar42 = fVar21 * pfVar14[4];
      fVar43 = fVar32 * pfVar14[5];
      fVar44 = fVar4 * pfVar14[6];
      fVar45 = fVar6 * pfVar14[7];
      fVar34 = fVar51 * fVar38 * _DAT_146b07a70;
      fVar39 = fVar51 * fVar37 * fRam0000000146b07a74;
      fVar40 = fVar51 * fVar36 * fRam0000000146b07a78;
      fVar41 = fVar51 * fVar35 * fRam0000000146b07a7c;
      fVar27 = fVar52 * fVar37 * _DAT_146b07a60;
      fVar33 = fVar52 * fVar38 * fRam0000000146b07a64;
      fVar28 = fVar52 * fVar35 * fRam0000000146b07a68;
      fVar31 = fVar52 * fVar36 * fRam0000000146b07a6c;
      fVar17 = fVar53 * fVar36 * _DAT_146b07a50;
      fVar30 = fVar53 * fVar35 * fRam0000000146b07a54;
      fVar25 = fVar53 * fVar38 * fRam0000000146b07a58;
      fVar26 = fVar53 * fVar37 * fRam0000000146b07a5c;
      param_2[8] = fVar20 * fVar21;
      param_2[9] = fVar22 * fVar32;
      param_2[10] = fVar3 * fVar4;
      param_2[0xb] = fVar5 * fVar6;
      *param_2 = fVar34 + fVar29 * fVar35 + fVar27 + fVar17;
      param_2[1] = fVar39 + fVar29 * fVar36 + fVar33 + fVar30;
      param_2[2] = fVar40 + fVar29 * fVar37 + fVar28 + fVar25;
      param_2[3] = fVar41 + fVar29 * fVar38 + fVar31 + fVar26;
      fVar20 = fVar44 * fVar52 - fVar43 * fVar53;
      fVar21 = fVar42 * fVar53 - fVar44 * fVar51;
      fVar22 = fVar43 * fVar51 - fVar42 * fVar52;
      fVar32 = fVar45 * fVar29 - fVar45 * fVar29;
      fVar20 = fVar20 + fVar20;
      fVar21 = fVar21 + fVar21;
      fVar22 = fVar22 + fVar22;
      fVar32 = fVar32 + fVar32;
      param_2[4] = (fVar22 * fVar52 - fVar21 * fVar53) + fVar20 * fVar29 + fVar42 + fVar8;
      param_2[5] = (fVar20 * fVar53 - fVar22 * fVar51) + fVar21 * fVar29 + fVar43 + fVar23;
      param_2[6] = (fVar21 * fVar51 - fVar20 * fVar52) + fVar22 * fVar29 + fVar44 + fVar9;
      param_2[7] = (fVar32 * fVar29 - fVar32 * fVar29) + fVar32 * fVar29 + fVar45 + fVar10;
      return param_2;
    }
  }
  uVar13 = uRam00000001468b5b78;
  *(undefined8 *)param_2 = _DAT_1468b5b70;
  *(undefined8 *)(param_2 + 2) = uVar13;
  uVar13 = uRam00000001468b5b88;
  *(undefined8 *)(param_2 + 4) = _DAT_1468b5b80;
  *(undefined8 *)(param_2 + 6) = uVar13;
  uVar13 = uRam00000001468b5b98;
  *(undefined8 *)(param_2 + 8) = _DAT_1468b5b90;
  *(undefined8 *)(param_2 + 10) = uVar13;
  return param_2;
}



// FUNCTION 1426c4730 FUN_1426c4730 body=2382 status=ok
// SIG undefined FUN_1426c4730(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1426c4730(longlong param_1,float *param_2,float *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
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
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 local_1f8;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  undefined **local_198 [10];
  longlong local_148;
  float local_d0;
  float local_cc;
  float local_c8;
  
  local_1f8._0_4_ = param_3[8];
  local_1f8._4_4_ = param_3[9];
  fStack_1f0 = param_3[10];
  FUN_1426c7820(param_1,local_198,&local_1f8,&DAT_1468b5b70);
  uVar5 = FRotator::Quaternion(param_1 + 0xbc,&local_1e8);
  uVar4 = uRam0000000146b07a2c;
  uVar3 = uRam0000000146b07a28;
  uVar2 = uRam0000000146b07a24;
  uVar1 = _DAT_146b07a20;
  fVar30 = fRam0000000146b07a18;
  fVar41 = fRam0000000146b07a14;
  fVar40 = _DAT_146b07a10;
  fVar38 = DAT_1464aa790;
  fVar36 = DAT_1464aa788._4_4_;
  fVar29 = (float)DAT_1464aa788;
  fVar21 = *(float *)(param_1 + 0xb8);
  fVar25 = *(float *)(param_1 + 0xb4);
  fVar28 = *(float *)(param_1 + 0xb0);
  auVar11 = *(undefined1 (*) [16])(param_3 + 8);
  fVar16 = auVar11._0_4_;
  fVar17 = auVar11._4_4_;
  fVar22 = auVar11._8_4_;
  fVar9 = *param_3;
  fVar45 = param_3[1];
  fVar13 = param_3[2];
  fVar14 = param_3[3];
  auVar7._4_4_ = DAT_1464aa788._4_4_;
  auVar7._0_4_ = (float)DAT_1464aa788;
  auVar7._8_4_ = DAT_1464aa790;
  auVar7._12_4_ = 0;
  auVar7 = minps(auVar7,auVar11);
  auVar8._4_4_ = -(uint)(auVar7._4_4_ < fRam0000000146b07ab4);
  auVar8._0_4_ = -(uint)(auVar7._0_4_ < _DAT_146b07ab0);
  auVar8._8_4_ = -(uint)(auVar7._8_4_ < fRam0000000146b07ab8);
  auVar8._12_4_ = -(uint)(auVar7._12_4_ < fRam0000000146b07abc);
  iVar6 = movmskps(uVar5,auVar8);
  if (iVar6 == 0) {
    fVar28 = fVar28 * fVar16;
    fVar25 = fVar25 * fVar17;
    fVar21 = fVar21 * fVar22;
    fVar30 = auVar11._12_4_ * 0.0;
    fVar36 = fStack_1dc * fVar9 * _DAT_146b07a70 + fVar14 * local_1e8 +
             fStack_1e0 * fVar45 * _DAT_146b07a60 + fStack_1e4 * fVar13 * _DAT_146b07a50;
    fVar38 = fStack_1e0 * fVar9 * fRam0000000146b07a74 + fVar14 * fStack_1e4 +
             fStack_1dc * fVar45 * fRam0000000146b07a64 + local_1e8 * fVar13 * fRam0000000146b07a54;
    fVar40 = fStack_1e4 * fVar9 * fRam0000000146b07a78 + fVar14 * fStack_1e0 +
             local_1e8 * fVar45 * fRam0000000146b07a68 + fStack_1dc * fVar13 * fRam0000000146b07a58;
    fVar41 = local_1e8 * fVar9 * fRam0000000146b07a7c + fVar14 * fStack_1dc +
             fStack_1e4 * fVar45 * fRam0000000146b07a6c + fStack_1e0 * fVar13 * fRam0000000146b07a5c
    ;
    fVar16 = fVar21 * fVar45 - fVar25 * fVar13;
    fVar17 = fVar28 * fVar13 - fVar21 * fVar9;
    fVar22 = fVar25 * fVar9 - fVar28 * fVar45;
    fVar29 = fVar30 * fVar14 - fVar30 * fVar14;
    fVar16 = fVar16 + fVar16;
    fVar17 = fVar17 + fVar17;
    fVar22 = fVar22 + fVar22;
    fVar29 = fVar29 + fVar29;
    fVar28 = (fVar22 * fVar45 - fVar17 * fVar13) + fVar16 * fVar14 + fVar28 + param_3[4];
    fVar25 = (fVar16 * fVar13 - fVar22 * fVar9) + fVar17 * fVar14 + fVar25 + param_3[5];
    fVar21 = (fVar17 * fVar9 - fVar16 * fVar45) + fVar22 * fVar14 + fVar21 + param_3[6];
    fVar16 = (fVar29 * fVar14 - fVar29 * fVar14) + fVar29 * fVar14 + fVar30 + param_3[7];
  }
  else {
    fVar32 = param_3[4];
    fVar33 = param_3[5];
    fVar34 = param_3[6];
    fVar12 = fVar45 + fVar45;
    fVar15 = fVar13 + fVar13;
    fVar18 = fVar9 * (fVar9 + fVar9);
    fVar31 = fVar14 * (fVar9 + fVar9);
    fVar42 = (fVar14 * fVar15 + fVar9 * fVar12) * fVar16;
    fVar43 = (fVar31 + fVar45 * fVar15) * fVar17;
    fVar44 = (fVar14 * fVar12 + fVar9 * fVar15) * fVar22;
    fVar19 = fVar17 * (fVar9 * fVar12 - fVar14 * fVar15);
    fVar23 = fVar22 * (fVar45 * fVar15 - fVar31);
    fVar26 = fVar16 * (fVar9 * fVar15 - fVar14 * fVar12);
    fVar9 = (float)((uint)((_DAT_146b07a10 - (fVar13 * fVar15 + fVar45 * fVar12)) * fVar16) &
                   _DAT_146b07a20);
    fVar13 = (float)((uint)((fRam0000000146b07a14 - (fVar13 * fVar15 + fVar18)) * fVar17) &
                    uRam0000000146b07a24);
    fVar15 = (float)((uint)((fRam0000000146b07a18 - (fVar45 * fVar12 + fVar18)) * fVar22) &
                    uRam0000000146b07a28);
    fVar18 = (float)((uint)((fRam0000000146b07a1c - (fVar18 + fVar18)) * auVar11._12_4_) &
                    uRam0000000146b07a2c);
    fVar14 = fStack_1e4 + fStack_1e4;
    fVar12 = fStack_1e0 + fStack_1e0;
    fVar31 = local_1e8 * (local_1e8 + local_1e8);
    fVar45 = fStack_1dc * (local_1e8 + local_1e8);
    fVar35 = (fStack_1dc * fVar12 + local_1e8 * fVar14) * (float)DAT_1464aa788;
    fVar37 = (fVar45 + fStack_1e4 * fVar12) * DAT_1464aa788._4_4_;
    fVar39 = (fStack_1dc * fVar14 + local_1e8 * fVar12) * DAT_1464aa790;
    fVar20 = DAT_1464aa788._4_4_ * (local_1e8 * fVar14 - fStack_1dc * fVar12);
    fVar24 = DAT_1464aa790 * (fStack_1e4 * fVar12 - fVar45);
    fVar27 = (float)DAT_1464aa788 * (local_1e8 * fVar12 - fStack_1dc * fVar14);
    fVar45 = (float)((uint)((_DAT_146b07a10 - (fStack_1e0 * fVar12 + fStack_1e4 * fVar14)) *
                           (float)DAT_1464aa788) & _DAT_146b07a20);
    fVar12 = (float)((uint)((fRam0000000146b07a14 - (fStack_1e0 * fVar12 + fVar31)) *
                           DAT_1464aa788._4_4_) & uRam0000000146b07a24);
    fVar14 = (float)((uint)((fRam0000000146b07a18 - (fStack_1e4 * fVar14 + fVar31)) * DAT_1464aa790)
                    & uRam0000000146b07a28);
    fVar31 = (float)((uint)((fRam0000000146b07a1c - (fVar31 + fVar31)) * 0.0) & uRam0000000146b07a2c
                    );
    local_1d8 = fVar35 * fVar19 + fVar45 * fVar9 + fVar27 * fVar44 + fVar31 * fVar32;
    fStack_1d4 = fVar35 * fVar13 + fVar45 * fVar42 + fVar27 * fVar23 + fVar31 * fVar33;
    fStack_1d0 = fVar35 * fVar43 + fVar45 * fVar26 + fVar27 * fVar15 + fVar31 * fVar34;
    fStack_1cc = fVar35 * fVar18 + fVar45 * fVar18 + fVar27 * fVar18 + fVar31 * fRam0000000146b07a1c
    ;
    local_1c8 = fVar12 * fVar19 + fVar20 * fVar9 + fVar37 * fVar44 + fVar31 * fVar32;
    fStack_1c4 = fVar12 * fVar13 + fVar20 * fVar42 + fVar37 * fVar23 + fVar31 * fVar33;
    fStack_1c0 = fVar12 * fVar43 + fVar20 * fVar26 + fVar37 * fVar15 + fVar31 * fVar34;
    fStack_1bc = fVar12 * fVar18 + fVar20 * fVar18 + fVar37 * fVar18 + fVar31 * fRam0000000146b07a1c
    ;
    local_1b8 = fVar24 * fVar19 + fVar39 * fVar9 + fVar14 * fVar44 + fVar31 * fVar32;
    fStack_1b4 = fVar24 * fVar13 + fVar39 * fVar42 + fVar14 * fVar23 + fVar31 * fVar33;
    fStack_1b0 = fVar24 * fVar43 + fVar39 * fVar26 + fVar14 * fVar15 + fVar31 * fVar34;
    fStack_1ac = fVar24 * fVar18 + fVar39 * fVar18 + fVar14 * fVar18 + fVar31 * fRam0000000146b07a1c
    ;
    local_1a8 = fVar25 * fVar19 + fVar28 * fVar9 + fVar21 * fVar44 + fRam0000000146b07a1c * fVar32;
    fStack_1a4 = fVar25 * fVar13 + fVar28 * fVar42 + fVar21 * fVar23 + fRam0000000146b07a1c * fVar33
    ;
    fStack_1a0 = fVar25 * fVar43 + fVar28 * fVar26 + fVar21 * fVar15 + fRam0000000146b07a1c * fVar34
    ;
    fStack_19c = fVar25 * fVar18 + fVar28 * fVar18 + fVar21 * fVar18 +
                 fRam0000000146b07a1c * fRam0000000146b07a1c;
    FMatrix::RemoveScaling(&local_1d8);
    fVar21 = (float)(-(uint)(_DAT_146b07ab0 <= fVar16 * fVar29) & (_DAT_146b07aa0 ^ (uint)fVar40) ^
                    _DAT_146b07aa0);
    fVar25 = (float)(-(uint)(fRam0000000146b07ab4 <= fVar17 * fVar36) &
                     (uRam0000000146b07aa4 ^ (uint)fVar41) ^ uRam0000000146b07aa4);
    fVar28 = (float)(-(uint)(fRam0000000146b07ab8 <= fVar22 * fVar38) &
                     (uRam0000000146b07aa8 ^ (uint)fVar30) ^ uRam0000000146b07aa8);
    local_1d8 = local_1d8 * fVar21;
    fStack_1d4 = fStack_1d4 * fVar21;
    fStack_1d0 = fStack_1d0 * fVar21;
    fStack_1c4 = fStack_1c4 * fVar25;
    fStack_1c0 = fStack_1c0 * fVar25;
    local_1c8 = local_1c8 * fVar25;
    fStack_1b4 = fStack_1b4 * fVar28;
    fStack_1b0 = fStack_1b0 * fVar28;
    local_1b8 = local_1b8 * fVar28;
    FQuat::FQuat(&local_1f8,&local_1d8);
    auVar10._0_4_ = (float)local_1f8 * (float)local_1f8 + fStack_1f0 * fStack_1f0;
    auVar10._4_4_ = local_1f8._4_4_ * local_1f8._4_4_ + fStack_1ec * fStack_1ec;
    auVar10._8_4_ = fStack_1f0 * fStack_1f0 + (float)local_1f8 * (float)local_1f8;
    auVar10._12_4_ = fStack_1ec * fStack_1ec + local_1f8._4_4_ * local_1f8._4_4_;
    fVar22 = auVar10._4_4_ + auVar10._0_4_;
    fVar9 = auVar10._8_4_ + auVar10._4_4_;
    fVar45 = auVar10._12_4_ + auVar10._8_4_;
    fVar13 = auVar10._0_4_ + auVar10._12_4_;
    auVar11._4_4_ = fVar9;
    auVar11._0_4_ = fVar22;
    auVar11._8_4_ = fVar45;
    auVar11._12_4_ = fVar13;
    auVar11 = rsqrtps(auVar10,auVar11);
    fVar21 = auVar11._0_4_;
    fVar25 = auVar11._4_4_;
    fVar28 = auVar11._8_4_;
    fVar17 = auVar11._12_4_;
    fVar21 = (_DAT_146b07a90 - fVar21 * fVar21 * fVar22 * _DAT_146b07a90) * fVar21 + fVar21;
    fVar25 = (fRam0000000146b07a94 - fVar25 * fVar25 * fVar9 * fRam0000000146b07a94) * fVar25 +
             fVar25;
    fVar28 = (fRam0000000146b07a98 - fVar28 * fVar28 * fVar45 * fRam0000000146b07a98) * fVar28 +
             fVar28;
    fVar17 = (fRam0000000146b07a9c - fVar17 * fVar17 * fVar13 * fRam0000000146b07a9c) * fVar17 +
             fVar17;
    fVar16 = 0.0;
    fVar36 = (float)(((uint)(((_DAT_146b07a90 - fVar21 * fVar21 * fVar22 * _DAT_146b07a90) * fVar21
                             + fVar21) * (float)local_1f8) ^ _DAT_146b07a80) &
                     -(uint)(1e-08 <= fVar22) ^ _DAT_146b07a80);
    fVar38 = (float)(((uint)(((fRam0000000146b07a94 - fVar25 * fVar25 * fVar9 * fRam0000000146b07a94
                              ) * fVar25 + fVar25) * local_1f8._4_4_) ^ uRam0000000146b07a84) &
                     -(uint)(1e-08 <= fVar9) ^ uRam0000000146b07a84);
    fVar40 = (float)(((uint)(((fRam0000000146b07a98 -
                              fVar28 * fVar28 * fVar45 * fRam0000000146b07a98) * fVar28 + fVar28) *
                            fStack_1f0) ^ uRam0000000146b07a88) & -(uint)(1e-08 <= fVar45) ^
                    uRam0000000146b07a88);
    fVar41 = (float)(((uint)(((fRam0000000146b07a9c -
                              fVar17 * fVar17 * fVar13 * fRam0000000146b07a9c) * fVar17 + fVar17) *
                            fStack_1ec) ^ uRam0000000146b07a8c) & -(uint)(1e-08 <= fVar13) ^
                    uRam0000000146b07a8c);
    fVar28 = local_1a8;
    fVar25 = fStack_1a4;
    fVar21 = fStack_1a0;
  }
  fVar45 = fVar36 * _DAT_146b07ac0;
  fVar13 = fVar38 * fRam0000000146b07ac4;
  fVar14 = fVar40 * fRam0000000146b07ac8;
  fVar29 = fVar41 * fRam0000000146b07acc;
  fVar30 = (float)((uint)(*param_2 - fVar28) & uVar1);
  fVar32 = (float)((uint)((float)((ulonglong)*(undefined8 *)param_2 >> 0x20) - fVar25) & uVar2);
  fVar33 = (float)((uint)(param_2[2] - fVar21) & uVar3);
  fVar34 = (float)((uint)(0.0 - fVar16) & uVar4);
  fVar16 = fVar33 * fVar13 - fVar32 * fVar14;
  fVar17 = fVar30 * fVar14 - fVar33 * fVar45;
  fVar22 = fVar32 * fVar45 - fVar30 * fVar13;
  fVar9 = fVar34 * fVar29 - fVar34 * fVar29;
  fVar16 = fVar16 + fVar16;
  fVar17 = fVar17 + fVar17;
  fVar22 = fVar22 + fVar22;
  fVar9 = fVar9 + fVar9;
  local_c8 = local_c8 * 0.5;
  local_d0 = local_d0 * 0.5;
  local_cc = local_cc * 0.5;
  local_1e8 = (fVar22 * fVar13 - fVar17 * fVar14) + fVar29 * fVar16 + fVar30;
  fStack_1e4 = (fVar16 * fVar14 - fVar22 * fVar45) + fVar29 * fVar17 + fVar32;
  fStack_1f0 = (fVar17 * fVar45 - fVar16 * fVar13) + fVar29 * fVar22 + fVar33;
  fStack_1dc = (fVar9 * fVar29 - fVar9 * fVar29) + fVar29 * fVar9 + fVar34;
  fVar16 = -local_c8;
  if ((-local_c8 <= fStack_1f0) && (fVar16 = fStack_1f0, local_c8 <= fStack_1f0)) {
    fVar16 = local_c8;
  }
  fVar17 = -local_cc;
  if ((-local_cc <= fStack_1e4) && (fVar17 = fStack_1e4, local_cc <= fStack_1e4)) {
    fVar17 = local_cc;
  }
  fVar22 = -local_d0;
  if ((-local_d0 <= local_1e8) && (fVar22 = local_1e8, local_d0 <= local_1e8)) {
    fVar22 = local_d0;
  }
  fStack_1f0 = fStack_1f0 - fVar16;
  fVar14 = local_1e8 - fVar22;
  fVar29 = fStack_1e4 - fVar17;
  fVar9 = fVar16 * fVar38 - fVar17 * fVar40;
  fVar45 = fVar22 * fVar40 - fVar16 * fVar36;
  fVar13 = fVar17 * fVar36 - fVar22 * fVar38;
  fVar9 = fVar9 + fVar9;
  fVar45 = fVar45 + fVar45;
  fVar13 = fVar13 + fVar13;
  fVar22 = (fVar13 * fVar38 - fVar45 * fVar40) + fVar9 * fVar41 + fVar22;
  fVar17 = (fVar9 * fVar40 - fVar13 * fVar36) + fVar45 * fVar41 + fVar17;
  fVar9 = (fVar45 * fVar36 - fVar9 * fVar38) + fVar13 * fVar41 + fVar16;
  *param_4 = CONCAT44(fVar17 + fVar25,fVar22 + fVar28);
  *(float *)(param_4 + 1) = fVar9 + fVar21;
  fVar16 = fVar29 * fVar29 + fVar14 * fVar14 + fStack_1f0 * fStack_1f0;
  if (SQRT(fVar16) <= 1e-08) {
    local_1f8 = _DAT_1468b5d90;
    fStack_1f0 = DAT_1468b5d98;
  }
  else {
    auVar11 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
    fVar45 = auVar11._0_4_;
    fVar45 = fVar45 + fVar45 * (0.5 - fVar16 * 0.5 * fVar45 * fVar45);
    fVar45 = fVar45 + fVar45 * (0.5 - fVar16 * 0.5 * fVar45 * fVar45);
    fStack_1f0 = fStack_1f0 * fVar45;
    local_1f8 = CONCAT44(fVar29 * fVar45,fVar14 * fVar45);
  }
  fVar16 = (float)((ulonglong)local_1f8 >> 0x20);
  *param_4 = CONCAT44(fVar17 + fVar25,fVar22 + fVar28);
  fVar17 = (float)local_1f8;
  *(float *)(param_4 + 1) = fVar9 + fVar21;
  fVar21 = fStack_1f0 * fVar38 - fVar16 * fVar40;
  fVar25 = fVar17 * fVar40 - fStack_1f0 * fVar36;
  fVar28 = fVar16 * fVar36 - fVar17 * fVar38;
  fVar21 = fVar21 + fVar21;
  fVar25 = fVar25 + fVar25;
  fVar28 = fVar28 + fVar28;
  fStack_1e0 = (fVar25 * fVar36 - fVar21 * fVar38) + fVar41 * fVar28 + fStack_1f0;
  *param_5 = CONCAT44((fVar21 * fVar40 - fVar28 * fVar36) + fVar41 * fVar25 + fVar16,
                      (fVar28 * fVar38 - fVar25 * fVar40) + fVar41 * fVar21 + fVar17);
  *(float *)(param_5 + 1) = fStack_1e0;
  local_198[0] = &PTR__scalar_deleting_destructor__1440fbd58;
  if (local_148 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1426c5080 FUN_1426c5080 body=679 status=ok
// SIG undefined FUN_1426c5080(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_1426c5080(undefined8 param_1,float *param_2,float *param_3,undefined8 *param_4,
                   float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float local_118;
  float local_114;
  float local_110;
  undefined **local_108 [10];
  longlong local_b8;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  
  local_118 = param_3[8];
  local_114 = param_3[9];
  local_110 = param_3[10];
  FUN_1426c7f60(CONCAT44(local_114,local_114),local_108,&local_118,&DAT_1468b5b70);
  fVar2 = *param_3;
  fVar7 = param_3[1];
  fVar8 = param_3[2];
  fVar5 = param_3[3];
  fVar1 = local_60 * fVar7 - local_64 * fVar8;
  fVar3 = local_68 * fVar8 - local_60 * fVar2;
  fVar4 = local_64 * fVar2 - local_68 * fVar7;
  fVar1 = fVar1 + fVar1;
  fVar3 = fVar3 + fVar3;
  fVar4 = fVar4 + fVar4;
  fVar9 = ((fVar4 * fVar7 - fVar3 * fVar8) + fVar5 * fVar1 + local_68 + param_3[4]) - *param_2;
  fVar8 = ((fVar1 * fVar8 - fVar4 * fVar2) + fVar5 * fVar3 + local_64 + param_3[5]) - param_2[1];
  fVar7 = ((fVar3 * fVar2 - fVar1 * fVar7) + fVar5 * fVar4 + local_60 + param_3[6]) - param_2[2];
  fVar2 = fVar8 * fVar8 + fVar9 * fVar9 + fVar7 * fVar7;
  local_5c = SQRT(fVar2) - local_5c;
  if (local_5c <= 0.0) {
    local_5c = 0.0;
  }
  if (SQRT(fVar2) <= 1e-08) {
    *(undefined8 *)param_5 = _DAT_1468b5d90;
    fVar2 = DAT_1468b5d98;
  }
  else {
    auVar6 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
    fVar5 = auVar6._0_4_;
    fVar5 = fVar5 + fVar5 * (0.5 - fVar2 * 0.5 * fVar5 * fVar5);
    fVar5 = fVar5 + fVar5 * (0.5 - fVar2 * 0.5 * fVar5 * fVar5);
    *(ulonglong *)param_5 = CONCAT44(fVar8 * fVar5,fVar9 * fVar5) ^ 0x8000000080000000;
    fVar2 = -(fVar7 * fVar5);
  }
  param_5[2] = fVar2;
  local_110 = param_2[2] - local_5c * param_5[2];
  *param_4 = CONCAT44(param_2[1] - local_5c * param_5[1],*param_2 - local_5c * *param_5);
  *(float *)(param_4 + 1) = local_110;
  local_108[0] = &PTR__scalar_deleting_destructor__1440fbd58;
  if (local_b8 != 0) {
    FMemory::Free();
  }
  return local_5c;
}



// FUNCTION 1426c5330 FUN_1426c5330 body=2160 status=ok
// SIG undefined FUN_1426c5330(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1426c5330(longlong param_1,float *param_2,float *param_3,undefined8 *param_4,float *param_5
                  )

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar13;
  float fVar14;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
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
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined **local_188 [10];
  longlong local_138;
  float local_c0;
  float local_bc;
  
  local_1e8 = param_3[8];
  fStack_1e4 = param_3[9];
  fStack_1e0 = param_3[10];
  FUN_1426c8100(param_1,local_188,&local_1e8,&DAT_1468b5b70);
  uVar6 = FRotator::Quaternion(param_1 + 0xbc,&local_1e8);
  fVar5 = fRam0000000146b07a18;
  fVar4 = fRam0000000146b07a14;
  fVar38 = _DAT_146b07a10;
  fVar37 = DAT_1464aa790;
  fVar36 = DAT_1464aa788._4_4_;
  fVar35 = (float)DAT_1464aa788;
  fVar22 = *(float *)(param_1 + 0xb8);
  fVar26 = *(float *)(param_1 + 0xb4);
  fVar30 = *(float *)(param_1 + 0xb0);
  auVar12 = *(undefined1 (*) [16])(param_3 + 8);
  fVar18 = auVar12._0_4_;
  fVar23 = auVar12._4_4_;
  fVar27 = auVar12._8_4_;
  fVar10 = *param_3;
  fVar31 = param_3[1];
  fVar13 = param_3[2];
  fVar14 = param_3[3];
  auVar8._4_4_ = DAT_1464aa788._4_4_;
  auVar8._0_4_ = (float)DAT_1464aa788;
  auVar8._8_4_ = DAT_1464aa790;
  auVar8._12_4_ = 0;
  auVar8 = minps(auVar8,auVar12);
  auVar9._4_4_ = -(uint)(auVar8._4_4_ < fRam0000000146b07ab4);
  auVar9._0_4_ = -(uint)(auVar8._0_4_ < _DAT_146b07ab0);
  auVar9._8_4_ = -(uint)(auVar8._8_4_ < fRam0000000146b07ab8);
  auVar9._12_4_ = -(uint)(auVar8._12_4_ < fRam0000000146b07abc);
  iVar7 = movmskps(uVar6,auVar9);
  if (iVar7 == 0) {
    fVar30 = fVar30 * fVar18;
    fVar26 = fVar26 * fVar23;
    fVar22 = fVar22 * fVar27;
    fVar35 = fStack_1dc * fVar10 * _DAT_146b07a70 + fVar14 * local_1e8 +
             fStack_1e0 * fVar31 * _DAT_146b07a60 + fStack_1e4 * fVar13 * _DAT_146b07a50;
    fVar36 = fStack_1e0 * fVar10 * fRam0000000146b07a74 + fVar14 * fStack_1e4 +
             fStack_1dc * fVar31 * fRam0000000146b07a64 + local_1e8 * fVar13 * fRam0000000146b07a54;
    fVar37 = fStack_1e4 * fVar10 * fRam0000000146b07a78 + fVar14 * fStack_1e0 +
             local_1e8 * fVar31 * fRam0000000146b07a68 + fStack_1dc * fVar13 * fRam0000000146b07a58;
    fVar38 = local_1e8 * fVar10 * fRam0000000146b07a7c + fVar14 * fStack_1dc +
             fStack_1e4 * fVar31 * fRam0000000146b07a6c + fStack_1e0 * fVar13 * fRam0000000146b07a5c
    ;
    fVar18 = fVar22 * fVar31 - fVar26 * fVar13;
    fVar23 = fVar30 * fVar13 - fVar22 * fVar10;
    fVar27 = fVar26 * fVar10 - fVar30 * fVar31;
    fVar18 = fVar18 + fVar18;
    fVar23 = fVar23 + fVar23;
    fVar27 = fVar27 + fVar27;
    fVar30 = (fVar27 * fVar31 - fVar23 * fVar13) + fVar18 * fVar14 + fVar30 + param_3[4];
    fVar26 = (fVar18 * fVar13 - fVar27 * fVar10) + fVar23 * fVar14 + fVar26 + param_3[5];
    fVar22 = (fVar23 * fVar10 - fVar18 * fVar31) + fVar27 * fVar14 + fVar22 + param_3[6];
  }
  else {
    fVar1 = param_3[4];
    fVar2 = param_3[5];
    fVar3 = param_3[6];
    fVar15 = fVar31 + fVar31;
    fVar17 = fVar13 + fVar13;
    fVar19 = fVar10 * (fVar10 + fVar10);
    fVar16 = (fVar10 + fVar10) * fVar14;
    fVar39 = (fVar17 * fVar14 + fVar10 * fVar15) * fVar18;
    fVar40 = (fVar16 + fVar31 * fVar17) * fVar23;
    fVar41 = (fVar15 * fVar14 + fVar10 * fVar17) * fVar27;
    fVar20 = fVar23 * (fVar10 * fVar15 - fVar17 * fVar14);
    fVar24 = fVar27 * (fVar31 * fVar17 - fVar16);
    fVar28 = fVar18 * (fVar10 * fVar17 - fVar15 * fVar14);
    fVar10 = (float)((uint)((_DAT_146b07a10 - (fVar13 * fVar17 + fVar31 * fVar15)) * fVar18) &
                    _DAT_146b07a20);
    fVar13 = (float)((uint)((fRam0000000146b07a14 - (fVar13 * fVar17 + fVar19)) * fVar23) &
                    uRam0000000146b07a24);
    fVar16 = (float)((uint)((fRam0000000146b07a18 - (fVar31 * fVar15 + fVar19)) * fVar27) &
                    uRam0000000146b07a28);
    fVar17 = (float)((uint)((fRam0000000146b07a1c - (fVar19 + fVar19)) * auVar12._12_4_) &
                    uRam0000000146b07a2c);
    fVar14 = fStack_1e4 + fStack_1e4;
    fVar15 = fStack_1e0 + fStack_1e0;
    fVar19 = local_1e8 * (local_1e8 + local_1e8);
    fVar31 = fStack_1dc * (local_1e8 + local_1e8);
    fVar32 = (fStack_1dc * fVar15 + local_1e8 * fVar14) * (float)DAT_1464aa788;
    fVar33 = (fVar31 + fStack_1e4 * fVar15) * DAT_1464aa788._4_4_;
    fVar34 = (fStack_1dc * fVar14 + local_1e8 * fVar15) * DAT_1464aa790;
    fVar21 = DAT_1464aa788._4_4_ * (local_1e8 * fVar14 - fStack_1dc * fVar15);
    fVar25 = DAT_1464aa790 * (fStack_1e4 * fVar15 - fVar31);
    fVar29 = (float)DAT_1464aa788 * (local_1e8 * fVar15 - fStack_1dc * fVar14);
    fVar31 = (float)((uint)((_DAT_146b07a10 - (fStack_1e0 * fVar15 + fStack_1e4 * fVar14)) *
                           (float)DAT_1464aa788) & _DAT_146b07a20);
    fVar15 = (float)((uint)((fRam0000000146b07a14 - (fStack_1e0 * fVar15 + fVar19)) *
                           DAT_1464aa788._4_4_) & uRam0000000146b07a24);
    fVar14 = (float)((uint)((fRam0000000146b07a18 - (fStack_1e4 * fVar14 + fVar19)) * DAT_1464aa790)
                    & uRam0000000146b07a28);
    fVar19 = (float)((uint)((fRam0000000146b07a1c - (fVar19 + fVar19)) * 0.0) & uRam0000000146b07a2c
                    );
    local_1d8 = fVar32 * fVar20 + fVar31 * fVar10 + fVar29 * fVar41 + fVar19 * fVar1;
    fStack_1d4 = fVar32 * fVar13 + fVar31 * fVar39 + fVar29 * fVar24 + fVar19 * fVar2;
    fStack_1d0 = fVar32 * fVar40 + fVar31 * fVar28 + fVar29 * fVar16 + fVar19 * fVar3;
    fStack_1cc = fVar32 * fVar17 + fVar31 * fVar17 + fVar29 * fVar17 + fVar19 * fRam0000000146b07a1c
    ;
    local_1c8 = fVar15 * fVar20 + fVar21 * fVar10 + fVar33 * fVar41 + fVar19 * fVar1;
    fStack_1c4 = fVar15 * fVar13 + fVar21 * fVar39 + fVar33 * fVar24 + fVar19 * fVar2;
    fStack_1c0 = fVar15 * fVar40 + fVar21 * fVar28 + fVar33 * fVar16 + fVar19 * fVar3;
    fStack_1bc = fVar15 * fVar17 + fVar21 * fVar17 + fVar33 * fVar17 + fVar19 * fRam0000000146b07a1c
    ;
    local_1b8 = fVar25 * fVar20 + fVar34 * fVar10 + fVar14 * fVar41 + fVar19 * fVar1;
    fStack_1b4 = fVar25 * fVar13 + fVar34 * fVar39 + fVar14 * fVar24 + fVar19 * fVar2;
    fStack_1b0 = fVar25 * fVar40 + fVar34 * fVar28 + fVar14 * fVar16 + fVar19 * fVar3;
    fStack_1ac = fVar25 * fVar17 + fVar34 * fVar17 + fVar14 * fVar17 + fVar19 * fRam0000000146b07a1c
    ;
    local_1a8 = fVar26 * fVar20 + fVar30 * fVar10 + fVar22 * fVar41 + fRam0000000146b07a1c * fVar1;
    fStack_1a4 = fVar26 * fVar13 + fVar30 * fVar39 + fVar22 * fVar24 + fRam0000000146b07a1c * fVar2;
    fStack_1a0 = fVar26 * fVar40 + fVar30 * fVar28 + fVar22 * fVar16 + fRam0000000146b07a1c * fVar3;
    fStack_19c = fVar26 * fVar17 + fVar30 * fVar17 + fVar22 * fVar17 +
                 fRam0000000146b07a1c * fRam0000000146b07a1c;
    FMatrix::RemoveScaling(&local_1d8);
    fVar22 = (float)(-(uint)(_DAT_146b07ab0 <= fVar18 * fVar35) & (_DAT_146b07aa0 ^ (uint)fVar38) ^
                    _DAT_146b07aa0);
    fVar26 = (float)(-(uint)(fRam0000000146b07ab4 <= fVar23 * fVar36) &
                     (uRam0000000146b07aa4 ^ (uint)fVar4) ^ uRam0000000146b07aa4);
    fVar30 = (float)(-(uint)(fRam0000000146b07ab8 <= fVar27 * fVar37) &
                     (uRam0000000146b07aa8 ^ (uint)fVar5) ^ uRam0000000146b07aa8);
    local_1d8 = local_1d8 * fVar22;
    fStack_1d4 = fStack_1d4 * fVar22;
    fStack_1d0 = fStack_1d0 * fVar22;
    fStack_1c4 = fStack_1c4 * fVar26;
    fStack_1c0 = fStack_1c0 * fVar26;
    local_1c8 = local_1c8 * fVar26;
    fStack_1b4 = fStack_1b4 * fVar30;
    fStack_1b0 = fStack_1b0 * fVar30;
    local_1b8 = local_1b8 * fVar30;
    FQuat::FQuat(&local_198,&local_1d8);
    auVar11._0_4_ = local_198 * local_198 + fStack_190 * fStack_190;
    auVar11._4_4_ = fStack_194 * fStack_194 + fStack_18c * fStack_18c;
    auVar11._8_4_ = fStack_190 * fStack_190 + local_198 * local_198;
    auVar11._12_4_ = fStack_18c * fStack_18c + fStack_194 * fStack_194;
    fVar23 = auVar11._4_4_ + auVar11._0_4_;
    fVar27 = auVar11._8_4_ + auVar11._4_4_;
    fVar10 = auVar11._12_4_ + auVar11._8_4_;
    fVar31 = auVar11._0_4_ + auVar11._12_4_;
    auVar12._4_4_ = fVar27;
    auVar12._0_4_ = fVar23;
    auVar12._8_4_ = fVar10;
    auVar12._12_4_ = fVar31;
    auVar12 = rsqrtps(auVar11,auVar12);
    fVar22 = auVar12._0_4_;
    fVar26 = auVar12._4_4_;
    fVar30 = auVar12._8_4_;
    fVar18 = auVar12._12_4_;
    fVar22 = (_DAT_146b07a90 - fVar22 * fVar22 * fVar23 * _DAT_146b07a90) * fVar22 + fVar22;
    fVar26 = (fRam0000000146b07a94 - fVar26 * fVar26 * fVar27 * fRam0000000146b07a94) * fVar26 +
             fVar26;
    fVar30 = (fRam0000000146b07a98 - fVar30 * fVar30 * fVar10 * fRam0000000146b07a98) * fVar30 +
             fVar30;
    fVar18 = (fRam0000000146b07a9c - fVar18 * fVar18 * fVar31 * fRam0000000146b07a9c) * fVar18 +
             fVar18;
    fVar35 = (float)(((uint)(((_DAT_146b07a90 - fVar22 * fVar22 * fVar23 * _DAT_146b07a90) * fVar22
                             + fVar22) * local_198) ^ _DAT_146b07a80) & -(uint)(1e-08 <= fVar23) ^
                    _DAT_146b07a80);
    fVar36 = (float)(((uint)(((fRam0000000146b07a94 -
                              fVar26 * fVar26 * fVar27 * fRam0000000146b07a94) * fVar26 + fVar26) *
                            fStack_194) ^ uRam0000000146b07a84) & -(uint)(1e-08 <= fVar27) ^
                    uRam0000000146b07a84);
    fVar37 = (float)(((uint)(((fRam0000000146b07a98 -
                              fVar30 * fVar30 * fVar10 * fRam0000000146b07a98) * fVar30 + fVar30) *
                            fStack_190) ^ uRam0000000146b07a88) & -(uint)(1e-08 <= fVar10) ^
                    uRam0000000146b07a88);
    fVar38 = (float)(((uint)(((fRam0000000146b07a9c -
                              fVar18 * fVar18 * fVar31 * fRam0000000146b07a9c) * fVar18 + fVar18) *
                            fStack_18c) ^ uRam0000000146b07a8c) & -(uint)(1e-08 <= fVar31) ^
                    uRam0000000146b07a8c);
    fVar30 = local_1a8;
    fVar26 = fStack_1a4;
    fVar22 = fStack_1a0;
  }
  fVar10 = fVar35 * _DAT_146b07ac0;
  fVar31 = fVar36 * fRam0000000146b07ac4;
  fVar27 = (float)((uint)(*param_2 - fVar30) & _DAT_146b07a20);
  fVar13 = (float)((uint)((float)((ulonglong)*(undefined8 *)param_2 >> 0x20) - fVar26) &
                  uRam0000000146b07a24);
  fVar14 = (float)((uint)(param_2[2] - fVar22) & uRam0000000146b07a28);
  fVar18 = fVar14 * fVar31 - fVar13 * fVar37 * fRam0000000146b07ac8;
  fVar23 = fVar27 * fVar37 * fRam0000000146b07ac8 - fVar14 * fVar10;
  fVar27 = fVar13 * fVar10 - fVar27 * fVar31;
  local_bc = local_bc * 0.5;
  fVar23 = ((fVar23 + fVar23) * fVar10 - (fVar18 + fVar18) * fVar31) +
           fVar38 * fRam0000000146b07acc * (fVar27 + fVar27) + fVar14;
  fVar18 = -local_bc;
  if ((-local_bc <= fVar23) && (fVar18 = fVar23, local_bc <= fVar23)) {
    fVar18 = local_bc;
  }
  fVar23 = fVar18 * fVar36 - fVar37 * 0.0;
  fVar27 = fVar37 * 0.0 - fVar18 * fVar35;
  fVar10 = fVar35 * 0.0 - fVar36 * 0.0;
  fVar23 = fVar23 + fVar23;
  fVar27 = fVar27 + fVar27;
  fVar10 = fVar10 + fVar10;
  fVar31 = ((fVar10 * fVar36 - fVar27 * fVar37) + fVar38 * fVar23 + 0.0 + fVar30) - *param_2;
  fVar30 = ((fVar23 * fVar37 - fVar10 * fVar35) + fVar38 * fVar27 + 0.0 + fVar26) - param_2[1];
  fVar26 = ((fVar27 * fVar35 - fVar23 * fVar36) + fVar38 * fVar10 + fVar18 + fVar22) - param_2[2];
  fVar22 = fVar30 * fVar30 + fVar31 * fVar31 + fVar26 * fVar26;
  local_c0 = SQRT(fVar22) - local_c0;
  if (local_c0 <= 0.0) {
    local_c0 = 0.0;
  }
  if (SQRT(fVar22) <= 1e-08) {
    *(undefined8 *)param_5 = _DAT_1468b5d90;
    fVar22 = DAT_1468b5d98;
  }
  else {
    auVar12 = rsqrtss(ZEXT416((uint)fVar22),ZEXT416((uint)fVar22));
    fVar18 = auVar12._0_4_;
    fVar18 = fVar18 + fVar18 * (0.5 - fVar22 * 0.5 * fVar18 * fVar18);
    fVar18 = fVar18 + fVar18 * (0.5 - fVar22 * 0.5 * fVar18 * fVar18);
    *(ulonglong *)param_5 = CONCAT44(fVar30 * fVar18,-(fVar31 * fVar18)) ^ 0x8000000000000000;
    fVar22 = -(fVar26 * fVar18);
  }
  param_5[2] = fVar22;
  fStack_1e0 = param_2[2] - local_c0 * param_5[2];
  *param_4 = CONCAT44(param_2[1] - local_c0 * param_5[1],*param_2 - local_c0 * *param_5);
  *(float *)(param_4 + 1) = fStack_1e0;
  local_188[0] = &PTR__scalar_deleting_destructor__1440fbd58;
  if (local_138 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1426c5ba0 thunk_FUN_1426b3da0 body=5 status=ok
// SIG undefined thunk_FUN_1426b3da0(void)

undefined8
thunk_FUN_1426b3da0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                   undefined8 *param_5,longlong param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  undefined8 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  longlong *plStack_58;
  int iStack_50;
  undefined4 uStack_4c;
  
  plVar9 = (longlong *)0x0;
  plStack_58 = (longlong *)0x0;
  uStack_4c = 0;
  iVar10 = 0;
  if (param_6 != 0) {
    lVar4 = FUN_142a0cc80();
    if ((*(int *)(*(longlong *)(param_6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    iVar10 = 0;
    if ((bVar3) && (&plStack_58 != (longlong **)(param_6 + 0x920))) {
      iStack_50 = *(int *)(param_6 + 0x928);
      lVar4 = (longlong)iStack_50;
      plVar7 = *(longlong **)(param_6 + 0x920);
      iVar10 = iStack_50;
      if (iStack_50 != 0) {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                  (&plStack_58,iStack_50,0);
        plVar9 = plStack_58;
        _guard_xfg_dispatch_icall_nop(plStack_58,plVar7,lVar4 << 3);
        iVar10 = iStack_50;
      }
    }
  }
  plVar7 = *(longlong **)(param_1 + 0x28);
  fVar12 = 3.4028235e+38;
  uVar13 = 0;
  plVar8 = plVar7 + (longlong)*(int *)(param_1 + 0x30) * 0x16;
  for (; plVar7 != plVar8; plVar7 = plVar7 + 0x16) {
    plVar2 = (longlong *)plVar7[10];
    plVar1 = plVar2 + (int)plVar7[0xb];
    plVar6 = plVar2;
joined_r0x0001426b3eb2:
    if (plVar6 == plVar1) {
LAB_1426b3ed2:
      uVar11 = (**(code **)(*plVar7 + 8))(plVar7,param_2,param_3,&uStack_78,&uStack_68);
      if ((float)uVar11 < fVar12) {
        *param_4 = uStack_78;
        *(undefined4 *)(param_4 + 1) = uStack_70;
        *param_5 = uStack_68;
        *(undefined4 *)(param_5 + 1) = uStack_60;
        fVar12 = (float)uVar11;
        uVar13 = (int)((ulonglong)uVar11 >> 0x20);
      }
    }
    else {
      if (*plVar6 == 0) goto code_r0x0001426b3ec9;
      for (plVar6 = plVar9; plVar6 != plVar9 + iVar10; plVar6 = plVar6 + 1) {
        if (plVar2 != plVar1) {
          plVar5 = plVar2;
          do {
            if (*plVar5 == *plVar6) goto LAB_1426b3ed2;
            plVar5 = plVar5 + 1;
          } while (plVar5 != plVar1);
        }
      }
    }
  }
  plVar7 = *(longlong **)(param_1 + 0x48);
  plVar8 = plVar7 + (longlong)*(int *)(param_1 + 0x50) * 0x1a;
  for (; plVar7 != plVar8; plVar7 = plVar7 + 0x1a) {
    plVar2 = (longlong *)plVar7[10];
    plVar1 = plVar2 + (int)plVar7[0xb];
    plVar6 = plVar2;
joined_r0x0001426b3f72:
    if (plVar6 == plVar1) {
LAB_1426b3f92:
      uVar11 = (**(code **)(*plVar7 + 8))(plVar7,param_2,param_3,&uStack_78,&uStack_68);
      if ((float)uVar11 < fVar12) {
        *param_4 = uStack_78;
        *(undefined4 *)(param_4 + 1) = uStack_70;
        *param_5 = uStack_68;
        *(undefined4 *)(param_5 + 1) = uStack_60;
        fVar12 = (float)uVar11;
        uVar13 = (int)((ulonglong)uVar11 >> 0x20);
      }
    }
    else {
      if (*plVar6 == 0) goto code_r0x0001426b3f89;
      for (plVar6 = plVar9; plVar6 != plVar9 + iVar10; plVar6 = plVar6 + 1) {
        if (plVar2 != plVar1) {
          plVar5 = plVar2;
          do {
            if (*plVar5 == *plVar6) goto LAB_1426b3f92;
            plVar5 = plVar5 + 1;
          } while (plVar5 != plVar1);
        }
      }
    }
  }
  plVar7 = *(longlong **)(param_1 + 0x38);
  plVar8 = plVar7 + (longlong)*(int *)(param_1 + 0x40) * 0x1c;
  do {
    if (plVar7 == plVar8) {
      if (plVar9 != (longlong *)0x0) {
        FMemory::Free(plVar9);
      }
      return CONCAT44(uVar13,fVar12);
    }
    plVar2 = (longlong *)plVar7[10];
    plVar1 = plVar2 + (int)plVar7[0xb];
    plVar6 = plVar2;
joined_r0x0001426b4022:
    if (plVar6 == plVar1) {
LAB_1426b4042:
      uVar11 = (**(code **)(*plVar7 + 8))(plVar7,param_2,param_3,&uStack_78,&uStack_68);
      if ((float)uVar11 < fVar12) {
        *param_4 = uStack_78;
        *(undefined4 *)(param_4 + 1) = uStack_70;
        *param_5 = uStack_68;
        *(undefined4 *)(param_5 + 1) = uStack_60;
        fVar12 = (float)uVar11;
        uVar13 = (int)((ulonglong)uVar11 >> 0x20);
      }
    }
    else {
      if (*plVar6 == 0) goto code_r0x0001426b4039;
      for (plVar6 = plVar9; plVar6 != plVar9 + iVar10; plVar6 = plVar6 + 1) {
        if (plVar2 != plVar1) {
          plVar5 = plVar2;
          do {
            if (*plVar5 == *plVar6) goto LAB_1426b4042;
            plVar5 = plVar5 + 1;
          } while (plVar5 != plVar1);
        }
      }
    }
    plVar7 = plVar7 + 0x1c;
  } while( true );
code_r0x0001426b3ec9:
  plVar6 = plVar6 + 1;
  goto joined_r0x0001426b3eb2;
code_r0x0001426b3f89:
  plVar6 = plVar6 + 1;
  goto joined_r0x0001426b3f72;
code_r0x0001426b4039:
  plVar6 = plVar6 + 1;
  goto joined_r0x0001426b4022;
}



// FUNCTION 1426c5bb0 FUN_1426c5bb0 body=402 status=ok
// SIG undefined FUN_1426c5bb0(void)

void FUN_1426c5bb0(longlong param_1,undefined4 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined1 local_58 [48];
  
  uVar7 = 0;
  uVar9 = uVar7;
  if (0 < *(int *)(param_1 + 0x48)) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x40);
      uVar10 = 0xffffffff;
      lVar2 = *(longlong *)(*(longlong *)(uVar7 + lVar1) + 0x90);
      if (lVar2 != 0) {
        if (*(int *)(param_4 + 0x1d0) != *(int *)(param_4 + 0x1fc)) {
          lVar4 = *(longlong *)(param_4 + 0x208);
          if (*(longlong *)(param_4 + 0x208) == 0) {
            lVar4 = param_4 + 0x200;
          }
          iVar3 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                                   (longlong)*(int *)(param_4 + 0x210) - 1U) * 4);
          if (iVar3 != -1) {
            do {
              puVar6 = (undefined4 *)(*(longlong *)(param_4 + 0x1c8) + (longlong)iVar3 * 0x18);
              if (*(longlong *)(*(longlong *)(param_4 + 0x1c8) + (longlong)iVar3 * 0x18) == lVar2) {
                if (iVar3 != -1) goto LAB_1426c5c93;
                break;
              }
              iVar3 = puVar6[4];
            } while (iVar3 != -1);
          }
        }
        puVar6 = (undefined4 *)0x0;
LAB_1426c5c93:
        puVar5 = puVar6 + 2;
        if (puVar6 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        if (puVar5 != (undefined4 *)0x0) {
          uVar10 = *puVar5;
        }
      }
      FUN_1426c9d10(local_58,uVar10,param_5,param_6);
      lVar2 = *(longlong *)(uVar7 + *(longlong *)(param_1 + 0x40));
      if (*(char *)(lVar2 + 0x99) < '\0') {
        FUN_1426c0e10(lVar2 + 0x28,local_58,*(undefined4 *)(lVar1 + (longlong)(int)uVar9 * 8),0,0,0,
                      0,param_2,param_3);
      }
      uVar8 = (int)uVar9 + 1;
      uVar7 = uVar7 + 8;
      uVar9 = (ulonglong)uVar8;
    } while ((int)uVar8 < *(int *)(param_1 + 0x48));
  }
  return;
}



// FUNCTION 1426c5d50 FUN_1426c5d50 body=101 status=ok
// SIG undefined FUN_1426c5d50(void)

char * FUN_1426c5d50(longlong param_1,char *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar3 = plVar2[0x1f];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
    lVar3 = plVar2[0x1f];
  }
  cVar1 = *(char *)(lVar3 + 0xa9);
  if (*(char *)(param_1 + 0x9c) != '\0') {
    cVar1 = *(char *)(param_1 + 0x9c);
  }
  *param_2 = cVar1;
  return param_2;
}



// FUNCTION 1426c5dc0 GetConstraintForce body=106 status=ok
// SIG undefined GetConstraintForce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FConstraintInstance::GetConstraintForce
               (undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *local_28;
  undefined8 *local_20;
  undefined1 *local_18;
  undefined8 **ppuStack_10;
  
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = DAT_1468b5d98;
  *param_3 = _DAT_1468b5d90;
  *(undefined4 *)(param_3 + 1) = DAT_1468b5d98;
  ppuStack_10 = &local_28;
  local_18 = &LAB_1426bace0;
  local_28 = param_2;
  local_20 = param_3;
  ExecuteOnUnbrokenJointReadOnly(0x426bace0,&local_18);
  return;
}



// FUNCTION 1426c5e30 FUN_1426c5e30 body=366 status=ok
// SIG undefined FUN_1426c5e30(void)

void FUN_1426c5e30(float *param_1,undefined4 *param_2,float *param_3)

{
  char cVar1;
  DWORD DVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  
  lVar5 = DAT_146b079f0;
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  lVar6 = 4;
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    if (DVar2 == DAT_1468c21c0) goto LAB_1426c5e93;
    lVar3 = 4;
  }
  else {
LAB_1426c5e93:
    lVar3 = 0;
  }
  *param_1 = *(float *)(lVar3 + lVar5);
  lVar5 = DAT_146b07a08;
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    if (DVar2 != DAT_1468c21c0) goto LAB_1426c5ece;
  }
  lVar6 = 0;
LAB_1426c5ece:
  *param_3 = *(float *)(lVar6 + lVar5);
  fVar7 = *param_1;
  if (fVar7 < 0.0) {
    plVar4 = (longlong *)UAudioSettings::GetPrivateStaticClass();
    lVar5 = plVar4[0x1f];
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x368))(plVar4);
      lVar5 = plVar4[0x1f];
    }
    fVar7 = *(float *)(lVar5 + 0x9c);
  }
  *param_1 = fVar7;
  fVar7 = *param_3;
  if (fVar7 < 0.0) {
    plVar4 = (longlong *)UAudioSettings::GetPrivateStaticClass();
    lVar5 = plVar4[0x1f];
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x368))(plVar4);
      lVar5 = plVar4[0x1f];
    }
    fVar7 = *(float *)(lVar5 + 0xa4);
  }
  *param_3 = fVar7;
  plVar4 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar5 = plVar4[0x1f];
  if (lVar5 == 0) {
    (**(code **)(*plVar4 + 0x368))(plVar4);
    lVar5 = plVar4[0x1f];
  }
  *param_2 = *(undefined4 *)(lVar5 + 0xa0);
  return;
}



// FUNCTION 1426c5fa0 FUN_1426c5fa0 body=1480 status=ok
// SIG undefined FUN_1426c5fa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1426c5fa0(longlong param_1,longlong param_2,byte param_3)

{
  float *pfVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  byte bVar14;
  longlong *plVar15;
  byte bVar16;
  longlong *plVar17;
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
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  int local_res10;
  longlong local_b8;
  float local_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  plVar8 = (longlong *)UObjectBaseUtility::GetPathName(*(undefined8 *)(param_1 + 0x20),&local_b8,0);
  plVar9 = (longlong *)(param_2 + 0x70);
  plVar12 = (longlong *)0x0;
  if (plVar9 != plVar8) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    *plVar9 = *plVar8;
    *plVar8 = 0;
    *(int *)(param_2 + 0x78) = (int)plVar8[1];
    *(undefined4 *)(param_2 + 0x7c) = *(undefined4 *)((longlong)plVar8 + 0xc);
    plVar8[1] = 0;
  }
  if (local_b8 != 0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_2 + 0x82) = 0;
  plVar9 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar13 = plVar9[0x1f];
  if (lVar13 == 0) {
    (**(code **)(*plVar9 + 0x368))(plVar9);
    lVar13 = plVar9[0x1f];
  }
  cVar5 = *(char *)(lVar13 + 0xa9);
  if (*(char *)(param_1 + 0x9c) != '\0') {
    cVar5 = *(char *)(param_1 + 0x9c);
  }
  if ((cVar5 == '\x03') || (*(int *)(param_1 + 0x60) < 1)) {
    *(undefined2 *)(param_2 + 0x80) = 0;
  }
  else {
    local_res10 = 0;
    *(byte *)(param_2 + 0x80) = *(byte *)(param_1 + 0x99) >> 4 & 1;
    *(byte *)(param_2 + 0x81) = *(byte *)(param_1 + 0x99) >> 6 & 1;
    plVar9 = plVar12;
    if (0 < *(int *)(param_1 + 0x60)) {
      do {
        lVar13 = *(longlong *)(param_1 + 0x58);
        iVar2 = *(int *)((longlong)plVar9 + lVar13 + 0x68);
        plVar8 = plVar12;
        if ((*(byte *)(param_1 + 0x99) & 0x10) != 0) {
          iVar6 = *(int *)(param_2 + 0x58);
          *(int *)(param_2 + 0x58) = iVar6 + 1;
          if (*(int *)(param_2 + 0x5c) < iVar6 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2 + 0x50,iVar6);
          }
          puVar10 = (undefined8 *)((longlong)iVar6 * 0x10 + *(longlong *)(param_2 + 0x50));
          *puVar10 = 0;
          puVar10[1] = 0;
          plVar8 = (longlong *)
                   ((longlong)(*(int *)(param_2 + 0x58) + -1) * 0x10 + *(longlong *)(param_2 + 0x50)
                   );
          iVar6 = (int)plVar8[1] + iVar2;
          *(int *)(plVar8 + 1) = iVar6;
          if (*(int *)((longlong)plVar8 + 0xc) < iVar6) {
            TArray<FRotator,FDefaultAllocator>::ResizeGrow();
          }
        }
        plVar17 = plVar12;
        if ((*(byte *)(param_1 + 0x99) & 0x40) != 0) {
          iVar6 = *(int *)(param_2 + 0x68);
          *(int *)(param_2 + 0x68) = iVar6 + 1;
          if (*(int *)(param_2 + 0x6c) < iVar6 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2 + 0x60,iVar6);
          }
          puVar10 = (undefined8 *)((longlong)iVar6 * 0x10 + *(longlong *)(param_2 + 0x60));
          *puVar10 = 0;
          puVar10[1] = 0;
          plVar17 = (longlong *)
                    ((longlong)(*(int *)(param_2 + 0x68) + -1) * 0x10 +
                    *(longlong *)(param_2 + 0x60));
          iVar6 = (int)plVar17[1] + iVar2;
          *(int *)(plVar17 + 1) = iVar6;
          if (*(int *)((longlong)plVar17 + 0xc) < iVar6) {
            TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar17);
          }
        }
        pfVar1 = (float *)((longlong)plVar9 + lVar13 + 0x90);
        fVar25 = *pfVar1;
        fVar26 = pfVar1[1];
        fVar27 = pfVar1[2];
        fVar28 = pfVar1[3];
        pfVar1 = (float *)((longlong)plVar9 + lVar13 + 0xa0);
        fVar29 = *pfVar1;
        fVar30 = pfVar1[1];
        fVar31 = pfVar1[2];
        fStack_8c = pfVar1[3];
        pfVar1 = (float *)((longlong)plVar9 + lVar13 + 0xb0);
        fVar32 = *pfVar1;
        fVar33 = pfVar1[1];
        fVar34 = pfVar1[2];
        fStack_7c = pfVar1[3];
        local_a8 = fVar25;
        fStack_a4 = fVar26;
        fStack_a0 = fVar27;
        fStack_9c = fVar28;
        local_98 = fVar29;
        fStack_94 = fVar30;
        fStack_90 = fVar31;
        local_88 = fVar32;
        fStack_84 = fVar33;
        fStack_80 = fVar34;
        cVar5 = FUN_140618120(&local_a8);
        if ((((cVar5 != '\0') || (cVar5 = FUN_140618120(&local_98), cVar5 != '\0')) ||
            (uVar7 = FUN_140618120(&local_88), (char)uVar7 != '\0')) ||
           (fVar19 = fVar25 * fVar25 + fVar27 * fVar27, fVar20 = fVar26 * fVar26 + fVar28 * fVar28,
           fVar21 = fVar27 * fVar27 + fVar25 * fVar25, fVar22 = fVar28 * fVar28 + fVar26 * fVar26,
           auVar4._4_4_ = -(uint)(fRam0000000146b07a34 <
                                 (float)((uint)(fRam0000000146b07a14 - (fVar21 + fVar20)) &
                                        uRam0000000146b07a44)),
           auVar4._0_4_ = -(uint)(_DAT_146b07a30 <
                                 (float)((uint)(_DAT_146b07a10 - (fVar20 + fVar19)) & _DAT_146b07a40
                                        )),
           auVar4._8_4_ = -(uint)(fRam0000000146b07a38 <
                                 (float)((uint)(fRam0000000146b07a18 - (fVar22 + fVar21)) &
                                        uRam0000000146b07a48)),
           auVar4._12_4_ =
                -(uint)(fRam0000000146b07a3c <
                       (float)((uint)(fRam0000000146b07a1c - (fVar19 + fVar22)) &
                              uRam0000000146b07a4c)), iVar6 = movmskps(uVar7,auVar4), iVar6 != 0)) {
          fVar25 = _DAT_1468b5b70;
          fVar26 = fRam00000001468b5b74;
          fVar27 = fRam00000001468b5b78;
          fVar28 = fRam00000001468b5b7c;
          fVar29 = _DAT_1468b5b80;
          fVar30 = fRam00000001468b5b84;
          fVar31 = fRam00000001468b5b88;
          fVar32 = _DAT_1468b5b90;
          fVar33 = fRam00000001468b5b94;
          fVar34 = fRam00000001468b5b98;
        }
        lVar18 = (longlong)iVar2;
        plVar15 = plVar12;
        if (0 < iVar2) {
          do {
            lVar3 = *(longlong *)((longlong)plVar9 + lVar13 + 0x60);
            fVar19 = fVar32 * *(float *)((longlong)plVar15 + lVar3);
            fVar20 = fVar33 * *(float *)((longlong)plVar15 + lVar3 + 4);
            fVar21 = fVar34 * *(float *)((longlong)plVar15 + lVar3 + 8);
            fVar22 = fVar21 * fVar26 - fVar20 * fVar27;
            fVar23 = fVar19 * fVar27 - fVar21 * fVar25;
            fVar24 = fVar20 * fVar25 - fVar19 * fVar26;
            fVar22 = fVar22 + fVar22;
            fVar23 = fVar23 + fVar23;
            fVar24 = fVar24 + fVar24;
            fVar19 = fVar29 + (fVar24 * fVar26 - fVar23 * fVar27) + fVar22 * fVar28 + fVar19;
            fVar20 = fVar30 + (fVar22 * fVar27 - fVar24 * fVar25) + fVar23 * fVar28 + fVar20;
            fVar21 = fVar31 + (fVar23 * fVar25 - fVar22 * fVar26) + fVar24 * fVar28 + fVar21;
            if (plVar8 != (longlong *)0x0) {
              lVar3 = *plVar8;
              *(ulonglong *)((longlong)plVar15 + lVar3) = CONCAT44(fVar20,fVar19);
              *(float *)((longlong)plVar15 + lVar3 + 8) = fVar21;
            }
            if (plVar17 != (longlong *)0x0) {
              lVar3 = *plVar17;
              *(ulonglong *)((longlong)plVar15 + lVar3) = CONCAT44(fVar20,fVar19 * -1.0);
              *(float *)((longlong)plVar15 + lVar3 + 8) = fVar21;
              local_b0 = fVar21;
            }
            lVar18 = lVar18 + -1;
            plVar15 = (longlong *)((longlong)plVar15 + 0xc);
          } while (lVar18 != 0);
        }
        *(byte *)(param_2 + 0x49) = param_3;
        lVar18 = AUGDungeon::GetPrivateStaticClass();
        lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
        if ((*(int *)(lVar13 + 0x90) < *(int *)(lVar18 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar13 + 0x88) + (longlong)*(int *)(lVar18 + 0x90) * 8) !=
            lVar18 + 0x88)) {
          cVar5 = '\0';
        }
        else {
          cVar5 = '\x01';
        }
        *(char *)(param_2 + 0x82) = cVar5;
        if (cVar5 != '\0') {
          *(byte *)(param_2 + 0x49) = *(byte *)(param_2 + 0x49) | 1;
        }
        local_res10 = local_res10 + 1;
        plVar9 = plVar9 + 0x1a;
      } while (local_res10 < *(int *)(param_1 + 0x60));
    }
  }
  bVar16 = *(byte *)(param_1 + 0x99);
  *(undefined1 *)(param_2 + 0x83) = 0;
  bVar16 = bVar16 >> 2 & 1;
  *(undefined1 *)(param_2 + 0x85) = 0;
  lVar13 = *(longlong *)(param_1 + 0x20);
  if (lVar13 != 0) {
    uVar11 = UInterface_CollisionDataProvider::GetPrivateStaticClass();
    plVar12 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar13,uVar11);
  }
  plVar9 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar13 = plVar9[0x1f];
  if (lVar13 == 0) {
    (**(code **)(*plVar9 + 0x368))(plVar9);
    lVar13 = plVar9[0x1f];
  }
  cVar5 = *(char *)(lVar13 + 0xa9);
  if (*(char *)(param_1 + 0x9c) != '\0') {
    cVar5 = *(char *)(param_1 + 0x9c);
  }
  if (((cVar5 != '\x02') && (plVar12 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*plVar12 + 0x18))(plVar12,bVar16), cVar5 != '\0')) {
    cVar5 = (**(code **)(*plVar12 + 0x10))(plVar12,param_2,bVar16);
    *(char *)(param_2 + 0x83) = cVar5;
    if (cVar5 != '\0') {
      if (((*(int *)(param_2 + 0x18) == 0) || (*(int *)(param_2 + 8) == 0)) ||
         (*(int *)(param_2 + 0x18) < *(int *)(param_2 + 0x28))) {
        *(undefined1 *)(param_2 + 0x85) = 1;
      }
      bVar16 = param_3 | 1;
      if ((*(uint *)(param_2 + 0x40) & 2) == 0) {
        bVar16 = param_3;
      }
      bVar14 = bVar16 | 2;
      if ((*(uint *)(param_2 + 0x40) & 4) == 0) {
        bVar14 = bVar16;
      }
      *(byte *)(param_2 + 0x48) = bVar14;
    }
  }
  plVar9 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar13 = plVar9[0x1f];
  if (lVar13 == 0) {
    (**(code **)(*plVar9 + 0x368))(plVar9);
    lVar13 = plVar9[0x1f];
  }
  *(undefined1 *)(param_2 + 0x84) = *(undefined1 *)(lVar13 + 0xac);
  *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(param_1 + 0x304);
  return;
}



// FUNCTION 1426c6570 FUN_1426c6570 body=185 status=ok
// SIG undefined FUN_1426c6570(void)

undefined8 FUN_1426c6570(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar1 == '\0') {
    lVar5 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    if (lVar5 != 0) {
      uVar3 = UInterface_CollisionDataProvider::GetPrivateStaticClass();
      lVar4 = UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar3);
    }
    if (((*(int *)(param_1 + 0x60) != 0) || (lVar4 != 0)) && ((*(byte *)(param_1 + 0x9a) & 2) != 0))
    {
      lVar5 = *(longlong *)(param_1 + 0x2f0);
      if (lVar5 == 0) {
        lVar5 = param_1 + 0xd8;
      }
      FFormatContainer::Contains(lVar5,param_2);
      uVar3 = FFormatContainer::GetFormat(lVar5,param_2);
      FUN_1426cb300(param_1);
      iVar2 = FUntypedBulkData::GetBulkDataSize(uVar3);
      if (iVar2 < 1) {
        return 0;
      }
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1426c6630 FUN_1426c6630 body=77 status=ok
// SIG undefined FUN_1426c6630(void)

undefined4 FUN_1426c6630(void)

{
  undefined4 local_res10 [2];
  undefined4 *local_res18 [2];
  code *local_18;
  undefined4 **ppuStack_10;
  
  local_res18[0] = local_res10;
  ppuStack_10 = local_res18;
  local_res10[0] = 0;
  local_18 = FUN_1426ba930;
  FConstraintInstance::ExecuteOnUnbrokenJointReadOnly(0x426ba930,&local_18);
  return local_res10[0];
}



// FUNCTION 1426c6680 FUN_1426c6680 body=77 status=ok
// SIG undefined FUN_1426c6680(void)

undefined4 FUN_1426c6680(void)

{
  undefined4 local_res10 [2];
  undefined4 *local_res18 [2];
  code *local_18;
  undefined4 **ppuStack_10;
  
  local_res18[0] = local_res10;
  ppuStack_10 = local_res18;
  local_res10[0] = 0;
  local_18 = FUN_1426ba9a0;
  FConstraintInstance::ExecuteOnUnbrokenJointReadOnly(0x426ba9a0,&local_18);
  return local_res10[0];
}



// FUNCTION 1426c66d0 FUN_1426c66d0 body=77 status=ok
// SIG undefined FUN_1426c66d0(void)

undefined4 FUN_1426c66d0(void)

{
  undefined4 local_res10 [2];
  undefined4 *local_res18 [2];
  code *local_18;
  undefined4 **ppuStack_10;
  
  local_res18[0] = local_res10;
  ppuStack_10 = local_res18;
  local_res10[0] = 0;
  local_18 = FUN_1426bacf0;
  FConstraintInstance::ExecuteOnUnbrokenJointReadOnly(0x426bacf0,&local_18);
  return local_res10[0];
}



// FUNCTION 1426c6720 GetDesc body=41 status=ok
// SIG undefined GetDesc(void)

undefined8 UPhysicsAsset::GetDesc(longlong param_1,undefined8 param_2)

{
  FString::PrintfImpl(param_2,L"%d Bodies, %d Constraints",*(undefined4 *)(param_1 + 0x48),
                      *(undefined4 *)(param_1 + 0x58));
  return param_2;
}



// FUNCTION 1426c6750 FUN_1426c6750 body=343 status=ok
// SIG undefined FUN_1426c6750(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1426c6750(longlong param_1,float *param_2,float *param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

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
  float local_78;
  float local_74;
  float local_70;
  uint local_68;
  float fStack_64;
  float fStack_60;
  uint uStack_5c;
  float local_58;
  uint uStack_54;
  float fStack_50;
  uint uStack_4c;
  float local_48;
  float fStack_44;
  uint uStack_40;
  uint uStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  local_78 = *param_3 * 0.5 * *(float *)(param_1 + 200);
  local_70 = param_3[2] * 0.5 * *(float *)(param_1 + 0xd0);
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  local_74 = param_3[1] * 0.5 * *(float *)(param_1 + 0xcc);
  fVar8 = fVar2 + fVar2;
  fVar10 = fVar3 + fVar3;
  fVar5 = param_2[8];
  fVar6 = param_2[9];
  fVar7 = param_2[10];
  fVar11 = fVar1 * (fVar1 + fVar1);
  fVar9 = (fVar1 + fVar1) * fVar4;
  fStack_64 = (fVar10 * fVar4 + fVar8 * fVar1) * fVar5;
  fStack_50 = (fVar9 + fVar10 * fVar2) * fVar6;
  local_48 = (fVar8 * fVar4 + fVar10 * fVar1) * fVar7;
  local_58 = fVar6 * (fVar8 * fVar1 - fVar10 * fVar4);
  fStack_44 = fVar7 * (fVar10 * fVar2 - fVar9);
  fStack_60 = fVar5 * (fVar10 * fVar1 - fVar8 * fVar4);
  local_68 = (uint)((_DAT_146b07a10 - (fVar3 * fVar10 + fVar2 * fVar8)) * fVar5) & _DAT_146b07a20;
  uStack_54 = (uint)((fRam0000000146b07a14 - (fVar3 * fVar10 + fVar11)) * fVar6) &
              uRam0000000146b07a24;
  uStack_40 = (uint)((fRam0000000146b07a18 - (fVar2 * fVar8 + fVar11)) * fVar7) &
              uRam0000000146b07a28;
  uStack_5c = (uint)((fRam0000000146b07a1c - (fVar11 + fVar11)) * param_2[0xb]) &
              uRam0000000146b07a2c;
  local_38 = param_2[4];
  fStack_34 = param_2[5];
  fStack_30 = param_2[6];
  fStack_2c = fRam0000000146b07a1c;
  uStack_4c = uStack_5c;
  uStack_3c = uStack_5c;
  FUN_142708e30(&local_68,&local_78,param_4,0,param_5,param_6);
  return;
}



// FUNCTION 1426c68b0 FUN_1426c68b0 body=3583 status=ok
// SIG undefined FUN_1426c68b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1426c68b0(longlong param_1,float *param_2,float *param_3,undefined8 param_4,
                  undefined4 param_5,longlong param_6)

{
  undefined1 auVar1 [13];
  undefined1 auVar2 [13];
  undefined1 auVar3 [13];
  undefined1 auVar4 [13];
  undefined1 auVar5 [13];
  uint5 uVar6;
  unkbyte9 Var7;
  undefined1 auVar8 [13];
  undefined1 auVar9 [13];
  undefined1 auVar10 [13];
  undefined1 auVar11 [13];
  undefined1 auVar12 [13];
  undefined1 auVar13 [16];
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 uVar20;
  int iVar21;
  longlong lVar22;
  longlong *plVar23;
  int iVar24;
  int iVar25;
  undefined1 *puVar26;
  longlong lVar27;
  int iVar28;
  longlong *plVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  longlong lVar33;
  int iVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  undefined8 uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  byte bVar49;
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
  undefined4 local_res18;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined8 local_2b8;
  float fStack_2b0;
  float fStack_2ac;
  undefined8 local_2a8;
  float fStack_2a0;
  float fStack_29c;
  undefined8 local_298;
  float fStack_290;
  float fStack_28c;
  float local_288;
  undefined8 local_284;
  float local_27c;
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
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  uint uStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  uint uStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  uint uStack_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [32];
  float local_198;
  float fStack_194;
  float fStack_190;
  undefined4 uStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  undefined4 uStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  undefined4 uStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  undefined4 uStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  undefined4 uStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  undefined4 uStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
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
  undefined4 uStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  undefined4 uStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  
  fVar54 = param_3[2];
  fVar56 = ABS(param_3[1]);
  if (ABS(param_3[1]) <= ABS(*param_3)) {
    fVar56 = ABS(*param_3);
  }
  lVar22 = FMemory::Malloc(0x3d18,0);
  plVar23 = (longlong *)FMemory::Malloc(0x398,0);
  iVar34 = 0;
  local_298 = (ulonglong)local_298._4_4_ << 0x20;
  local_2a8 = (ulonglong)local_2a8._4_4_ << 0x20;
  local_2b8 = (ulonglong)local_2b8._4_4_ << 0x20;
  local_27c = 0.0;
  local_284 = 0x3f800000;
  plVar29 = plVar23;
  iVar28 = 0;
  do {
    if (iVar28 < 5) {
      fVar58 = 0.5;
    }
    else {
      fVar58 = -0.5;
    }
    uVar38 = __libm_sse2_sincosf_();
    fStack_2b0 = fVar56 * *(float *)(param_1 + 200);
    fStack_290 = (float)((ulonglong)uVar38 >> 0x20) * fStack_2b0;
    fStack_2b0 = (float)uVar38 * fStack_2b0;
    fStack_2a0 = fVar58 * ABS(fVar54) * *(float *)(param_1 + 0xcc) + fStack_290;
    local_298 = CONCAT44(fStack_2b0,(undefined4)local_298);
    local_2a8 = CONCAT44(fStack_2b0,(int)local_2a8);
    *plVar29 = local_2a8;
    *(float *)(plVar29 + 1) = fStack_2a0;
    local_2b8 = CONCAT44(-fStack_290,(undefined4)local_2b8);
    FDynamicMeshVertex::SetTangents(plVar29,&local_284,&local_2b8,&local_298);
    iVar25 = iVar28 + 1;
    *(undefined4 *)((longlong)plVar29 + 0xc) = 0;
    *(float *)(plVar29 + 2) = (float)iVar28 * 0.11111111;
    auVar13 = _DAT_144101760;
    plVar29 = (longlong *)((longlong)plVar29 + 0x5c);
    iVar28 = iVar25;
  } while (iVar25 < 10);
  puVar26 = (undefined1 *)(lVar22 + 0x4e);
  lVar33 = (longlong)plVar23 + (-0x46 - lVar22);
  local_198 = -0.00019840874;
  fStack_194 = -0.00019840874;
  fStack_190 = -0.00019840874;
  uStack_18c = 0xb9500bf1;
  local_188 = 0.008333331;
  fStack_184 = 0.008333331;
  fStack_180 = 0.008333331;
  uStack_17c = 0x3c088886;
  local_178 = -0.16666667;
  fStack_174 = -0.16666667;
  fStack_170 = -0.16666667;
  uStack_16c = 0xbe2aaaab;
  local_158 = 2.4760495e-05;
  fStack_154 = 2.4760495e-05;
  fStack_150 = 2.4760495e-05;
  uStack_14c = 0x37cfb4c2;
  local_148 = -0.0013888378;
  fStack_144 = -0.0013888378;
  fStack_140 = -0.0013888378;
  uStack_13c = 0xbab609aa;
  local_138 = 0.041666638;
  fStack_134 = 0.041666638;
  fStack_130 = 0.041666638;
  uStack_12c = 0x3d2aaaa3;
  local_108 = 1.0;
  fStack_104 = 1.0;
  fStack_100 = 1.0;
  uStack_fc = 0x3f800000;
  local_e8 = -2.3889859e-08;
  fStack_e4 = -2.3889859e-08;
  fStack_e0 = -2.3889859e-08;
  uStack_dc = 0xb2cd365b;
  local_f8 = 2.7525562e-06;
  fStack_f4 = 2.7525562e-06;
  fStack_f0 = 2.7525562e-06;
  uStack_ec = 0x3638b88e;
  local_118 = 1.0;
  fStack_114 = 1.0;
  fStack_110 = 1.0;
  uStack_10c = 0x3f800000;
  local_168 = -2.6051615e-07;
  fStack_164 = -2.6051615e-07;
  fStack_160 = -2.6051615e-07;
  uStack_15c = 0xb48bdd11;
  local_128 = -0.5;
  fStack_124 = -0.5;
  fStack_120 = -0.5;
  uStack_11c = 0xbf000000;
  fStack_22c = 1.0;
  fStack_21c = 0.0;
  fStack_20c = 0.0;
  fStack_1fc = 0.0;
  local_res18 = 0x7f000000;
  local_2c8 = 0x7f000000;
  local_2c4 = 0x7f000000;
  do {
    fStack_26c = 0.0;
    local_288 = (float)iVar34 * 0.0625;
    fVar54 = local_288 * 360.0 * fRam0000000146b07c24;
    fStack_270 = _DAT_146b07c20 * 0.0 -
                 (float)(int)(_DAT_146b07c20 * 0.0 * _DAT_146b07c10) * _DAT_146b07c00;
    fVar54 = fVar54 - (float)(int)(fVar54 * fRam0000000146b07c14) * fRam0000000146b07c04;
    fVar56 = fRam0000000146b07c28 * 0.0 -
             (float)(int)(fRam0000000146b07c28 * 0.0 * fRam0000000146b07c18) * fRam0000000146b07c08;
    uVar35 = -(uint)(_DAT_146b07bd0 < (float)((uint)fStack_270 & _DAT_146b07a40));
    uVar36 = -(uint)(fRam0000000146b07bd4 < (float)((uint)fVar54 & uRam0000000146b07a44));
    uVar37 = -(uint)(fRam0000000146b07bd8 < (float)((uint)fVar56 & uRam0000000146b07a48));
    fStack_270 = (float)(((uint)((float)((uint)fStack_270 & _DAT_146b07bf0 | _DAT_146b07be0) -
                                fStack_270) ^ (uint)fStack_270) & uVar35 ^ (uint)fStack_270);
    fVar54 = (float)(((uint)((float)((uint)fVar54 & uRam0000000146b07bf4 | uRam0000000146b07be4) -
                            fVar54) ^ (uint)fVar54) & uVar36 ^ (uint)fVar54);
    fVar56 = (float)(((uint)((float)((uint)fVar56 & uRam0000000146b07bf8 | uRam0000000146b07be8) -
                            fVar56) ^ (uint)fVar56) & uVar37 ^ (uint)fVar56);
    fVar58 = fStack_270 * fStack_270;
    fVar50 = fVar54 * fVar54;
    fVar52 = fVar56 * fVar56;
    fStack_250 = (((((local_168 * fVar58 + local_158) * fVar58 + local_148) * fVar58 + local_138) *
                   fVar58 + local_128) * fVar58 + local_108) *
                 (float)((_DAT_146b07aa0 ^ (uint)_DAT_146b07a10) & uVar35 ^ (uint)_DAT_146b07a10);
    fVar59 = (((((fStack_164 * fVar50 + fStack_154) * fVar50 + fStack_144) * fVar50 + fStack_134) *
               fVar50 + fStack_124) * fVar50 + fStack_104) *
             (float)((uRam0000000146b07aa4 ^ (uint)fRam0000000146b07a14) & uVar36 ^
                    (uint)fRam0000000146b07a14);
    fVar60 = (((((fStack_160 * fVar52 + fStack_150) * fVar52 + fStack_140) * fVar52 + fStack_130) *
               fVar52 + fStack_120) * fVar52 + fStack_100) *
             (float)((uRam0000000146b07aa8 ^ (uint)fRam0000000146b07a18) & uVar37 ^
                    (uint)fRam0000000146b07a18);
    fStack_270 = (((((local_e8 * fVar58 + local_f8) * fVar58 + local_198) * fVar58 + local_188) *
                   fVar58 + local_178) * fVar58 + local_118) * fStack_270;
    fVar54 = (((((fStack_e4 * fVar50 + fStack_f4) * fVar50 + fStack_194) * fVar50 + fStack_184) *
               fVar50 + fStack_174) * fVar50 + fStack_114) * fVar54;
    fVar56 = (((((fStack_e0 * fVar52 + fStack_f0) * fVar52 + fStack_190) * fVar52 + fStack_180) *
               fVar52 + fStack_170) * fVar52 + fStack_110) * fVar56;
    local_278 = fVar59 * fStack_250;
    fStack_274 = fStack_250 * fVar54;
    local_268 = fVar56 * fStack_270 * fVar59 - fVar60 * fVar54;
    fStack_25c = 0.0;
    lVar27 = 10;
    fStack_24c = 0.0;
    fStack_23c = 1.0;
    fStack_260 = -(fStack_250 * fVar56);
    fStack_264 = fVar60 * fVar59 + fVar56 * fStack_270 * fVar54;
    fStack_250 = fVar60 * fStack_250;
    fStack_254 = fVar59 * fVar56 - fVar60 * fStack_270 * fVar54;
    local_248 = DAT_1468b5d90;
    local_258 = -(fVar56 * fVar54 + fVar60 * fStack_270 * fVar59);
    fStack_244 = DAT_1468b5d94;
    fStack_240 = DAT_1468b5d98;
    fVar54 = DAT_1468b5d90;
    fVar56 = DAT_1468b5d94;
    fVar58 = DAT_1468b5d98;
    fVar50 = 1.0;
    fVar52 = local_278;
    fVar59 = fStack_274;
    fVar60 = fStack_270;
    fVar51 = 0.0;
    do {
      fVar19 = fStack_23c;
      fVar18 = fStack_240;
      fVar17 = fStack_244;
      fVar16 = local_248;
      fVar15 = fStack_26c;
      fVar57 = fStack_270;
      fVar55 = fStack_274;
      fVar53 = local_278;
      local_238 = *(float *)(puVar26 + lVar33 + -8);
      fStack_234 = *(float *)(puVar26 + lVar33 + -4);
      fStack_230 = *(float *)(puVar26 + lVar33);
      local_27c = fStack_234 * fStack_260 + local_238 * fVar60 +
                  fStack_22c * fVar58 + fStack_230 * fStack_250;
      *(ulonglong *)(puVar26 + -0x4e) =
           CONCAT44(fStack_234 * fStack_264 + local_238 * fVar59 +
                    fStack_22c * fVar56 + fStack_230 * fStack_254,
                    fStack_234 * local_268 + local_238 * fVar52 +
                    fStack_22c * fVar54 + fStack_230 * local_258);
      *(float *)(puVar26 + -0x46) = local_27c;
      uVar35 = *(uint *)(puVar26 + lVar33 + 0x48);
      bVar49 = (byte)(uVar35 >> 0x18);
      auVar1[0xc] = bVar49;
      auVar1._0_12_ = ZEXT712(0);
      uVar6 = CONCAT32(auVar1._10_3_,(ushort)(byte)(uVar35 >> 0x10));
      auVar8._5_8_ = 0;
      auVar8._0_5_ = uVar6;
      Var7 = CONCAT72(SUB137(auVar8 << 0x40,6),(ushort)(byte)(uVar35 >> 8));
      auVar40._0_4_ = uVar35 & 0xff;
      auVar40._4_9_ = Var7;
      auVar40._13_3_ = 0;
      auVar39._0_4_ = -(uint)(0x7f < auVar40._0_4_);
      auVar39._4_4_ = -(uint)(0x7f < (uint)Var7);
      auVar39._8_4_ = -(uint)(0x7f < (int)uVar6);
      auVar39._12_4_ = -(uint)(0x7f < bVar49);
      auVar40 = auVar39 & auVar13 | auVar40;
      local_228 = (float)auVar40._0_4_ * 0.007874016;
      fStack_224 = (float)auVar40._4_4_ * 0.007874016;
      fStack_220 = (float)auVar40._8_4_ * 0.007874016;
      fVar52 = fStack_21c * fVar54 + fStack_220 * local_258 +
               fStack_224 * local_268 + local_228 * fVar52;
      fVar59 = fStack_21c * fVar56 + fStack_220 * fStack_254 +
               fStack_224 * fStack_264 + local_228 * fVar59;
      fStack_2b0 = fStack_21c * fVar58 + fStack_220 * fStack_250 +
                   fStack_224 * fStack_260 + local_228 * fVar60;
      fStack_2ac = fStack_21c * fVar50 + fStack_220 * fStack_24c +
                   fStack_224 * fStack_25c + local_228 * fVar51;
      uVar35 = *(uint *)(puVar26 + lVar33 + 0x44);
      bVar49 = (byte)(uVar35 >> 0x18);
      auVar2[0xc] = bVar49;
      auVar2._0_12_ = ZEXT712(0);
      uVar6 = CONCAT32(auVar2._10_3_,(ushort)(byte)(uVar35 >> 0x10));
      auVar9._5_8_ = 0;
      auVar9._0_5_ = uVar6;
      Var7 = CONCAT72(SUB137(auVar9 << 0x40,6),(ushort)(byte)(uVar35 >> 8));
      auVar42._0_4_ = uVar35 & 0xff;
      auVar42._4_9_ = Var7;
      auVar42._13_3_ = 0;
      auVar41._0_4_ = -(uint)(0x7f < auVar42._0_4_);
      auVar41._4_4_ = -(uint)(0x7f < (uint)Var7);
      auVar41._8_4_ = -(uint)(0x7f < (int)uVar6);
      auVar41._12_4_ = -(uint)(0x7f < bVar49);
      local_2b8 = CONCAT44(fVar59,fVar52);
      auVar42 = auVar41 & auVar13 | auVar42;
      fVar54 = (float)auVar42._0_4_ * 0.007874016;
      fVar56 = (float)auVar42._4_4_ * 0.007874016;
      fVar58 = (float)auVar42._8_4_ * 0.007874016;
      fStack_210 = (float)(int)(char)puVar26[lVar33 + 0x4b] * 0.007843138 - 1.0;
      local_218 = (fStack_224 * fVar58 - fStack_220 * fVar56) * fStack_210;
      fStack_214 = (fStack_220 * fVar54 - local_228 * fVar58) * fStack_210;
      fStack_210 = (local_228 * fVar56 - fStack_224 * fVar54) * fStack_210;
      fVar56 = fStack_20c * local_248 + fStack_210 * local_258 +
               fStack_214 * local_268 + local_218 * local_278;
      fVar58 = fStack_20c * fStack_244 + fStack_210 * fStack_254 +
               fStack_214 * fStack_264 + local_218 * fStack_274;
      fStack_290 = fStack_20c * fStack_240 + fStack_210 * fStack_250 +
                   fStack_214 * fStack_260 + local_218 * fStack_270;
      fStack_28c = fStack_20c * fStack_23c + fStack_210 * fStack_24c +
                   fStack_214 * fStack_25c + local_218 * fStack_26c;
      local_208 = (float)auVar42._0_4_ * 0.007874016;
      fStack_204 = (float)auVar42._4_4_ * 0.007874016;
      fStack_200 = (float)auVar42._8_4_ * 0.007874016;
      local_298 = CONCAT44(fVar58,fVar56);
      fVar50 = fStack_1fc * local_248 + fStack_200 * local_258 +
               fStack_204 * local_268 + local_208 * local_278;
      fVar54 = fStack_1fc * fStack_244 + fStack_200 * fStack_254 +
               fStack_204 * fStack_264 + local_208 * fStack_274;
      fStack_2a0 = fStack_1fc * fStack_240 + fStack_200 * fStack_250 +
                   fStack_204 * fStack_260 + local_208 * fStack_270;
      fStack_29c = fStack_1fc * fStack_23c + fStack_200 * fStack_24c +
                   fStack_204 * fStack_25c + local_208 * fStack_26c;
      local_2a8 = CONCAT44(fVar54,fVar50);
      fVar50 = fVar50 * 127.0;
      iVar28 = (int)ROUND(fVar50 + fVar50 + 0.5) >> 1;
      if (iVar28 < -0x80) {
        iVar25 = -0x80;
      }
      else {
        iVar25 = 0x7f;
        if (iVar28 < 0x7f) {
          iVar25 = iVar28;
        }
      }
      fVar54 = fVar54 * 127.0;
      puVar26[-2] = (char)iVar25;
      iVar25 = (int)ROUND(fVar54 + fVar54 + 0.5) >> 1;
      if (iVar25 < -0x80) {
        iVar32 = -0x80;
      }
      else {
        iVar32 = 0x7f;
        if (iVar25 < 0x7f) {
          iVar32 = iVar25;
        }
      }
      puVar26[-1] = (char)iVar32;
      iVar32 = (int)ROUND(fStack_2a0 * 127.0 + fStack_2a0 * 127.0 + 0.5) >> 1;
      if (iVar32 < -0x80) {
        iVar24 = -0x80;
      }
      else {
        iVar24 = 0x7f;
        if (iVar32 < 0x7f) {
          iVar24 = iVar32;
        }
      }
      *puVar26 = (char)iVar24;
      puVar26[1] = 0x7f;
      iVar24 = (int)ROUND(fVar52 * 254.0 + 0.5) >> 1;
      if (iVar24 < -0x80) {
        iVar30 = -0x80;
      }
      else {
        iVar30 = 0x7f;
        if (iVar24 < 0x7f) {
          iVar30 = iVar24;
        }
      }
      puVar26[2] = (char)iVar30;
      iVar30 = (int)ROUND(fVar59 * 254.0 + 0.5) >> 1;
      if (iVar30 < -0x80) {
        iVar31 = -0x80;
      }
      else {
        iVar31 = 0x7f;
        if (iVar30 < 0x7f) {
          iVar31 = iVar30;
        }
      }
      puVar26[3] = (char)iVar31;
      iVar31 = (int)ROUND(fStack_2b0 * 254.0 + 0.5) >> 1;
      if (iVar31 < -0x80) {
        iVar21 = -0x80;
      }
      else {
        iVar21 = 0x7f;
        if (iVar31 < 0x7f) {
          iVar21 = iVar31;
        }
      }
      puVar26[4] = (char)iVar21;
      if (iVar24 < -0x80) {
        local_res18 = CONCAT31(local_res18._1_3_,0x80);
      }
      else {
        uVar20 = 0x7f;
        if (iVar24 < 0x7f) {
          uVar20 = (char)iVar24;
        }
        local_res18 = CONCAT31(local_res18._1_3_,uVar20);
      }
      uVar14 = local_res18;
      if (iVar30 < -0x80) {
        local_res18._0_2_ = CONCAT11(0x80,(undefined1)local_res18);
      }
      else {
        uVar20 = 0x7f;
        if (iVar30 < 0x7f) {
          uVar20 = (char)iVar30;
        }
        local_res18._0_2_ = CONCAT11(uVar20,(undefined1)local_res18);
      }
      local_res18._3_1_ = SUB41(uVar14,3);
      if (iVar31 < -0x80) {
        local_res18._0_3_ = CONCAT12(0x80,(undefined2)local_res18);
      }
      else {
        uVar20 = 0x7f;
        if (iVar31 < 0x7f) {
          uVar20 = (char)iVar31;
        }
        local_res18._0_3_ = CONCAT12(uVar20,(undefined2)local_res18);
      }
      fVar56 = fVar56 * 127.0;
      iVar24 = (int)ROUND(fVar56 + fVar56 + 0.5) >> 1;
      if (iVar24 < -0x80) {
        local_2c8 = CONCAT31(local_2c8._1_3_,0x80);
      }
      else {
        uVar20 = 0x7f;
        if (iVar24 < 0x7f) {
          uVar20 = (char)iVar24;
        }
        local_2c8 = CONCAT31(local_2c8._1_3_,uVar20);
      }
      uVar14 = local_2c8;
      fVar58 = fVar58 * 127.0;
      iVar24 = (int)ROUND(fVar58 + fVar58 + 0.5) >> 1;
      if (iVar24 < -0x80) {
        local_2c8._0_2_ = CONCAT11(0x80,(undefined1)local_2c8);
      }
      else {
        uVar20 = 0x7f;
        if (iVar24 < 0x7f) {
          uVar20 = (char)iVar24;
        }
        local_2c8._0_2_ = CONCAT11(uVar20,(undefined1)local_2c8);
      }
      iVar24 = (int)ROUND(fStack_290 * 127.0 + fStack_290 * 127.0 + 0.5) >> 1;
      local_2c8._3_1_ = SUB41(uVar14,3);
      if (iVar24 < -0x80) {
        local_2c8._0_3_ = CONCAT12(0x80,(undefined2)local_2c8);
      }
      else {
        uVar20 = 0x7f;
        if (iVar24 < 0x7f) {
          uVar20 = (char)iVar24;
        }
        local_2c8._0_3_ = CONCAT12(uVar20,(undefined2)local_2c8);
      }
      if (iVar28 < -0x80) {
        local_2c4 = CONCAT31(local_2c4._1_3_,0x80);
      }
      else {
        uVar20 = 0x7f;
        if (iVar28 < 0x7f) {
          uVar20 = (char)iVar28;
        }
        local_2c4 = CONCAT31(local_2c4._1_3_,uVar20);
      }
      uVar14 = local_2c4;
      if (iVar25 < -0x80) {
        local_2c4._0_2_ = CONCAT11(0x80,(undefined1)local_2c4);
      }
      else {
        uVar20 = 0x7f;
        if (iVar25 < 0x7f) {
          uVar20 = (char)iVar25;
        }
        local_2c4._0_2_ = CONCAT11(uVar20,(undefined1)local_2c4);
      }
      local_2c4._3_1_ = SUB41(uVar14,3);
      if (iVar32 < -0x80) {
        local_2c4._0_3_ = CONCAT12(0x80,(undefined2)local_2c4);
      }
      else {
        uVar20 = 0x7f;
        if (iVar32 < 0x7f) {
          uVar20 = (char)iVar32;
        }
        local_2c4._0_3_ = CONCAT12(uVar20,(undefined2)local_2c4);
      }
      auVar3[0xc] = local_res18._3_1_;
      auVar3._0_12_ = ZEXT712(0);
      uVar6 = CONCAT32(auVar3._10_3_,(ushort)(byte)((uint3)(undefined3)local_res18 >> 0x10));
      auVar10._5_8_ = 0;
      auVar10._0_5_ = uVar6;
      Var7 = CONCAT72(SUB137(auVar10 << 0x40,6),(ushort)(byte)((uint3)(undefined3)local_res18 >> 8))
      ;
      auVar44._0_4_ = CONCAT31(0,(byte)(undefined3)local_res18);
      auVar44._4_9_ = Var7;
      auVar44._13_3_ = 0;
      uStack_1ec = 0;
      auVar43._0_4_ = -(uint)(0x7f < auVar44._0_4_);
      auVar43._4_4_ = -(uint)(0x7f < (uint)Var7);
      auVar43._8_4_ = -(uint)(0x7f < (int)uVar6);
      auVar43._12_4_ = -(uint)(0x7f < local_res18._3_1_);
      uStack_1dc = 0;
      uStack_1cc = 0;
      auVar44 = auVar43 & auVar13 | auVar44;
      auVar4[0xc] = local_2c8._3_1_;
      auVar4._0_12_ = ZEXT712(0);
      uVar6 = CONCAT32(auVar4._10_3_,(ushort)(byte)((uint3)(undefined3)local_2c8 >> 0x10));
      auVar11._5_8_ = 0;
      auVar11._0_5_ = uVar6;
      Var7 = CONCAT72(SUB137(auVar11 << 0x40,6),(ushort)(byte)((uint3)(undefined3)local_2c8 >> 8));
      auVar46._0_4_ = CONCAT31(0,(byte)(undefined3)local_2c8);
      auVar46._4_9_ = Var7;
      auVar46._13_3_ = 0;
      local_1d8 = (float)auVar44._0_4_ * 0.007874016;
      fStack_1d4 = (float)auVar44._4_4_ * 0.007874016;
      fStack_1d0 = (float)auVar44._8_4_ * 0.007874016;
      auVar45._0_4_ = -(uint)(0x7f < auVar46._0_4_);
      auVar45._4_4_ = -(uint)(0x7f < (uint)Var7);
      auVar45._8_4_ = -(uint)(0x7f < (int)uVar6);
      auVar45._12_4_ = -(uint)(0x7f < local_2c8._3_1_);
      auVar46 = auVar45 & auVar13 | auVar46;
      local_1e8 = (float)auVar46._0_4_ * 0.007874016;
      fStack_1e4 = (float)auVar46._4_4_ * 0.007874016;
      fStack_1e0 = (float)auVar46._8_4_ * 0.007874016;
      auVar5[0xc] = local_2c4._3_1_;
      auVar5._0_12_ = ZEXT712(0);
      uVar6 = CONCAT32(auVar5._10_3_,(ushort)(byte)((uint3)(undefined3)local_2c4 >> 0x10));
      auVar12._5_8_ = 0;
      auVar12._0_5_ = uVar6;
      Var7 = CONCAT72(SUB137(auVar12 << 0x40,6),(ushort)(byte)((uint3)(undefined3)local_2c4 >> 8));
      auVar48._0_4_ = CONCAT31(0,(byte)(undefined3)local_2c4);
      auVar48._4_9_ = Var7;
      auVar48._13_3_ = 0;
      auVar47._0_4_ = -(uint)(0x7f < auVar48._0_4_);
      auVar47._4_4_ = -(uint)(0x7f < (uint)Var7);
      auVar47._8_4_ = -(uint)(0x7f < (int)uVar6);
      auVar47._12_4_ = -(uint)(0x7f < local_2c4._3_1_);
      auVar48 = auVar47 & auVar13 | auVar48;
      local_1f8 = (float)auVar48._0_4_ * 0.007874016;
      fStack_1f4 = (float)auVar48._4_4_ * 0.007874016;
      fStack_1f0 = (float)auVar48._8_4_ * 0.007874016;
      local_1c8 = 0;
      uStack_1c0 = 0x3f80000000000000;
      fVar54 = (float)FMatrix::Determinant(&local_1f8);
      if (0.0 <= fVar54) {
        fVar54 = 1.0;
      }
      else {
        fVar54 = -1.0;
      }
      uVar20 = 0x7f;
      if (fVar54 < 0.0) {
        uVar20 = 0x81;
      }
      puVar26[5] = uVar20;
      *(float *)(puVar26 + -0x42) = local_288;
      *(undefined4 *)(puVar26 + -0x3e) = *(undefined4 *)(puVar26 + lVar33 + 8);
      puVar26 = puVar26 + 0x5c;
      lVar27 = lVar27 + -1;
      fVar54 = fVar16;
      fVar56 = fVar17;
      fVar58 = fVar18;
      fVar50 = fVar19;
      fVar52 = fVar53;
      fVar59 = fVar55;
      fVar60 = fVar57;
      fVar51 = fVar15;
    } while (lVar27 != 0);
    iVar34 = iVar34 + 1;
    lVar33 = lVar33 + -0x398;
  } while (iVar34 < 0x11);
  iVar28 = 1;
  FUN_1424290d0(local_1b8,*(undefined4 *)(param_6 + 0xe0),1,0,0);
  lVar27 = 0xaa;
  lVar33 = lVar22;
  do {
    FUN_14242c030(local_1b8,lVar33);
    lVar33 = lVar33 + 0x5c;
    lVar27 = lVar27 + -1;
  } while (lVar27 != 0);
  do {
    lVar33 = 9;
    iVar34 = iVar28;
    do {
      FUN_14242bf10(local_1b8,iVar34 + -1,iVar34 + 9,iVar34);
      FUN_14242bf10(local_1b8,iVar34 + 9,iVar34 + 10,iVar34);
      iVar34 = iVar34 + 1;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
    iVar28 = iVar28 + 10;
  } while (iVar28 < 0xa1);
  fVar54 = *param_2;
  fVar56 = param_2[1];
  fVar58 = param_2[2];
  fVar50 = param_2[3];
  fVar51 = fVar56 + fVar56;
  fVar53 = fVar58 + fVar58;
  fVar57 = fVar54 * (fVar54 + fVar54);
  fVar55 = fVar50 * (fVar54 + fVar54);
  fVar52 = param_2[8];
  fVar59 = param_2[9];
  fVar60 = param_2[10];
  fStack_1f4 = (fVar50 * fVar53 + fVar54 * fVar51) * fVar52;
  fStack_1e0 = (fVar55 + fVar56 * fVar53) * fVar59;
  local_1d8 = (fVar50 * fVar51 + fVar54 * fVar53) * fVar60;
  local_1e8 = fVar59 * (fVar54 * fVar51 - fVar50 * fVar53);
  fStack_1d4 = fVar60 * (fVar56 * fVar53 - fVar55);
  fStack_1f0 = fVar52 * (fVar54 * fVar53 - fVar50 * fVar51);
  local_1f8 = (float)((uint)((_DAT_146b07a10 - (fVar58 * fVar53 + fVar56 * fVar51)) * fVar52) &
                     _DAT_146b07a20);
  fStack_1e4 = (float)((uint)((fRam0000000146b07a14 - (fVar58 * fVar53 + fVar57)) * fVar59) &
                      uRam0000000146b07a24);
  fStack_1d0 = (float)((uint)((fRam0000000146b07a18 - (fVar56 * fVar51 + fVar57)) * fVar60) &
                      uRam0000000146b07a28);
  uStack_1ec = (uint)((fRam0000000146b07a1c - (fVar57 + fVar57)) * param_2[0xb]) &
               uRam0000000146b07a2c;
  local_1c8 = *(undefined8 *)(param_2 + 4);
  uStack_1c0 = CONCAT44(fRam0000000146b07a1c,param_2[6]);
  uStack_1dc = uStack_1ec;
  uStack_1cc = uStack_1ec;
  FDynamicMeshBuilder::GetMesh(local_1b8,&local_1f8,param_4,0,0,0,param_5,param_6);
  FMemory::Free(lVar22);
  FMemory::Free(plVar23);
  FDynamicMeshBuilder::~FDynamicMeshBuilder(local_1b8);
  return;
}



// FUNCTION 1426c76b0 FUN_1426c76b0 body=353 status=ok
// SIG undefined FUN_1426c76b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1426c76b0(undefined8 param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,longlong param_6)

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
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  float fStack_54;
  float fStack_50;
  uint uStack_4c;
  float local_48;
  uint uStack_44;
  float fStack_40;
  uint uStack_3c;
  float local_38;
  float fStack_34;
  uint uStack_30;
  uint uStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  FUN_1426b56a0(local_88,param_1,param_3,*(undefined4 *)(param_6 + 0xe0));
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar8 = fVar2 + fVar2;
  fVar10 = fVar3 + fVar3;
  fVar11 = fVar1 * (fVar1 + fVar1);
  fVar9 = (fVar1 + fVar1) * fVar4;
  fVar5 = param_2[8];
  fVar6 = param_2[9];
  fVar7 = param_2[10];
  fStack_54 = (fVar10 * fVar4 + fVar8 * fVar1) * fVar5;
  fStack_40 = (fVar9 + fVar10 * fVar2) * fVar6;
  local_38 = (fVar8 * fVar4 + fVar10 * fVar1) * fVar7;
  local_48 = fVar6 * (fVar8 * fVar1 - fVar10 * fVar4);
  fStack_34 = fVar7 * (fVar10 * fVar2 - fVar9);
  fStack_50 = fVar5 * (fVar10 * fVar1 - fVar8 * fVar4);
  local_58 = (uint)((_DAT_146b07a10 - (fVar3 * fVar10 + fVar2 * fVar8)) * fVar5) & _DAT_146b07a20;
  uStack_44 = (uint)((fRam0000000146b07a14 - (fVar3 * fVar10 + fVar11)) * fVar6) &
              uRam0000000146b07a24;
  uStack_30 = (uint)((fRam0000000146b07a18 - (fVar2 * fVar8 + fVar11)) * fVar7) &
              uRam0000000146b07a28;
  uStack_4c = (uint)((fRam0000000146b07a1c - (fVar11 + fVar11)) * param_2[0xb]) &
              uRam0000000146b07a2c;
  local_28 = param_2[4];
  fStack_24 = param_2[5];
  fStack_20 = param_2[6];
  fStack_1c = fRam0000000146b07a1c;
  uStack_3c = uStack_4c;
  uStack_2c = uStack_4c;
  FDynamicMeshBuilder::GetMesh(local_88,&local_58,param_4,0,0,0,param_5,param_6);
  FMemory::Free(local_68);
  FMemory::Free(local_60);
  FDynamicMeshBuilder::~FDynamicMeshBuilder(local_88);
  return;
}



// FUNCTION 1426c7820 FUN_1426c7820 body=1853 status=ok
// SIG undefined FUN_1426c7820(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1426c7820(longlong param_1,longlong param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar13;
  float fVar14;
  undefined1 auVar12 [16];
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
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
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
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  
  fVar36 = param_4[8] * *param_3;
  fVar41 = param_4[9] * param_3[1];
  fVar32 = param_4[10] * param_3[2];
  if (((0.0001 < ABS(fVar36)) || (0.0001 < ABS(fVar41))) || (0.0001 < ABS(fVar32))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    fVar36 = 0.1;
    fVar41 = 0.1;
    fVar32 = 0.1;
  }
  FUN_14086fd30(param_2,param_1);
  *(float *)(param_2 + 200) = ABS(fVar36) * *(float *)(param_2 + 200);
  *(float *)(param_2 + 0xcc) = ABS(fVar41) * *(float *)(param_2 + 0xcc);
  *(float *)(param_2 + 0xd0) = ABS(fVar32) * *(float *)(param_2 + 0xd0);
  uVar6 = FRotator::Quaternion(param_1 + 0xbc,&local_148);
  fVar38 = fRam0000000146b07ab8;
  fVar37 = fRam0000000146b07ab4;
  fVar23 = _DAT_146b07ab0;
  fVar22 = fRam0000000146b07a18;
  fVar19 = fRam0000000146b07a14;
  fVar31 = _DAT_146b07a10;
  fStack_c0 = DAT_1464aa790;
  fStack_c4 = DAT_1464aa788._4_4_;
  local_c8 = (float)DAT_1464aa788;
  fVar32 = *(float *)(param_1 + 0xb8);
  fVar36 = *(float *)(param_1 + 0xb4);
  fVar41 = *(float *)(param_1 + 0xb0);
  auVar9 = *(undefined1 (*) [16])(param_4 + 8);
  fVar1 = auVar9._0_4_;
  fVar2 = auVar9._4_4_;
  fVar3 = auVar9._8_4_;
  fStack_bc = auVar9._12_4_;
  fVar11 = *param_4;
  fVar18 = param_4[1];
  fVar13 = param_4[2];
  fVar14 = param_4[3];
  auVar8._4_4_ = DAT_1464aa788._4_4_;
  auVar8._0_4_ = (float)DAT_1464aa788;
  auVar8._8_4_ = DAT_1464aa790;
  auVar8._12_4_ = 0;
  auVar9 = minps(auVar8,auVar9);
  auVar10._4_4_ = -(uint)(auVar9._4_4_ < fRam0000000146b07ab4);
  auVar10._0_4_ = -(uint)(auVar9._0_4_ < _DAT_146b07ab0);
  auVar10._8_4_ = -(uint)(auVar9._8_4_ < fRam0000000146b07ab8);
  auVar10._12_4_ = -(uint)(auVar9._12_4_ < fRam0000000146b07abc);
  iVar7 = movmskps(uVar6,auVar10);
  if (iVar7 == 0) {
    fVar41 = fVar41 * fVar1;
    fVar36 = fVar36 * fVar2;
    fVar32 = fVar32 * fVar3;
    fVar48 = fStack_bc * 0.0;
    fVar37 = fVar11 * fStack_13c * _DAT_146b07a70 + fVar14 * local_148 +
             fVar18 * fStack_140 * _DAT_146b07a60 + fVar13 * fStack_144 * _DAT_146b07a50;
    fVar38 = fVar11 * fStack_140 * fRam0000000146b07a74 + fVar14 * fStack_144 +
             fVar18 * fStack_13c * fRam0000000146b07a64 + fVar13 * local_148 * fRam0000000146b07a54;
    fVar39 = fVar11 * fStack_144 * fRam0000000146b07a78 + fVar14 * fStack_140 +
             fVar18 * local_148 * fRam0000000146b07a68 + fVar13 * fStack_13c * fRam0000000146b07a58;
    fVar40 = fVar11 * local_148 * fRam0000000146b07a7c + fVar14 * fStack_13c +
             fVar18 * fStack_144 * fRam0000000146b07a6c + fVar13 * fStack_140 * fRam0000000146b07a5c
    ;
    fVar31 = fVar32 * fVar18 - fVar36 * fVar13;
    fVar19 = fVar41 * fVar13 - fVar32 * fVar11;
    fVar22 = fVar36 * fVar11 - fVar41 * fVar18;
    fVar23 = fVar48 * fVar14 - fVar48 * fVar14;
    fVar31 = fVar31 + fVar31;
    fVar19 = fVar19 + fVar19;
    fVar22 = fVar22 + fVar22;
    fVar23 = fVar23 + fVar23;
    fVar41 = (fVar22 * fVar18 - fVar19 * fVar13) + fVar31 * fVar14 + fVar41 + param_4[4];
    fVar36 = (fVar31 * fVar13 - fVar22 * fVar11) + fVar19 * fVar14 + fVar36 + param_4[5];
    fVar32 = (fVar19 * fVar11 - fVar31 * fVar18) + fVar22 * fVar14 + fVar32 + param_4[6];
    fStack_cc = (fVar23 * fVar14 - fVar23 * fVar14) + fVar23 * fVar14 + fVar48 + param_4[7];
  }
  else {
    fVar39 = param_4[4];
    fVar40 = param_4[5];
    fVar48 = param_4[6];
    fVar15 = fVar18 + fVar18;
    fVar20 = fVar13 + fVar13;
    fVar45 = (float)DAT_1464aa788 * fVar1;
    fVar46 = DAT_1464aa788._4_4_ * fVar2;
    fVar47 = DAT_1464aa790 * fVar3;
    fVar24 = (fVar11 + fVar11) * fVar11;
    fVar16 = (fVar11 + fVar11) * fVar14;
    fVar17 = fStack_144 + fStack_144;
    fVar21 = fStack_140 + fStack_140;
    fVar42 = (fVar20 * fVar14 + fVar15 * fVar11) * fVar1;
    fVar43 = (fVar16 + fVar20 * fVar18) * fVar2;
    fVar44 = (fVar15 * fVar14 + fVar20 * fVar11) * fVar3;
    fVar26 = fVar2 * (fVar15 * fVar11 - fVar20 * fVar14);
    fVar27 = fVar3 * (fVar20 * fVar18 - fVar16);
    fVar29 = fVar1 * (fVar20 * fVar11 - fVar15 * fVar14);
    fVar25 = local_148 * (local_148 + local_148);
    fVar11 = (float)((uint)((_DAT_146b07a10 - (fVar20 * fVar13 + fVar15 * fVar18)) * fVar1) &
                    _DAT_146b07a20);
    fVar13 = (float)((uint)((fRam0000000146b07a14 - (fVar20 * fVar13 + fVar24)) * fVar2) &
                    uRam0000000146b07a24);
    fVar15 = (float)((uint)((fRam0000000146b07a18 - (fVar15 * fVar18 + fVar24)) * fVar3) &
                    uRam0000000146b07a28);
    fVar20 = (float)((uint)((fRam0000000146b07a1c - (fVar24 + fVar24)) * fStack_bc) &
                    uRam0000000146b07a2c);
    fVar18 = (local_148 + local_148) * fStack_13c;
    fVar33 = (fVar21 * fStack_13c + fVar17 * local_148) * (float)DAT_1464aa788;
    fVar34 = (fVar18 + fVar21 * fStack_144) * DAT_1464aa788._4_4_;
    fVar35 = (fVar17 * fStack_13c + fVar21 * local_148) * DAT_1464aa790;
    fVar24 = DAT_1464aa788._4_4_ * (fVar17 * local_148 - fVar21 * fStack_13c);
    fVar28 = DAT_1464aa790 * (fVar21 * fStack_144 - fVar18);
    fVar30 = (float)DAT_1464aa788 * (fVar21 * local_148 - fVar17 * fStack_13c);
    fVar18 = (float)((uint)((_DAT_146b07a10 - (fStack_140 * fVar21 + fStack_144 * fVar17)) *
                           (float)DAT_1464aa788) & _DAT_146b07a20);
    fVar14 = (float)((uint)((fRam0000000146b07a14 - (fStack_140 * fVar21 + fVar25)) *
                           DAT_1464aa788._4_4_) & uRam0000000146b07a24);
    fVar16 = (float)((uint)((fRam0000000146b07a18 - (fStack_144 * fVar17 + fVar25)) * DAT_1464aa790)
                    & uRam0000000146b07a28);
    fVar17 = (float)((uint)((fRam0000000146b07a1c - (fVar25 + fVar25)) * 0.0) & uRam0000000146b07a2c
                    );
    local_138 = fVar33 * fVar26 + fVar18 * fVar11 + fVar30 * fVar44 + fVar17 * fVar39;
    fStack_134 = fVar33 * fVar13 + fVar18 * fVar42 + fVar30 * fVar27 + fVar17 * fVar40;
    fStack_130 = fVar33 * fVar43 + fVar18 * fVar29 + fVar30 * fVar15 + fVar17 * fVar48;
    fStack_12c = fVar33 * fVar20 + fVar18 * fVar20 + fVar30 * fVar20 + fVar17 * fRam0000000146b07a1c
    ;
    local_128 = fVar14 * fVar26 + fVar24 * fVar11 + fVar34 * fVar44 + fVar17 * fVar39;
    fStack_124 = fVar14 * fVar13 + fVar24 * fVar42 + fVar34 * fVar27 + fVar17 * fVar40;
    fStack_120 = fVar14 * fVar43 + fVar24 * fVar29 + fVar34 * fVar15 + fVar17 * fVar48;
    fStack_11c = fVar14 * fVar20 + fVar24 * fVar20 + fVar34 * fVar20 + fVar17 * fRam0000000146b07a1c
    ;
    local_118 = fVar28 * fVar26 + fVar35 * fVar11 + fVar16 * fVar44 + fVar17 * fVar39;
    fStack_114 = fVar28 * fVar13 + fVar35 * fVar42 + fVar16 * fVar27 + fVar17 * fVar40;
    fStack_110 = fVar28 * fVar43 + fVar35 * fVar29 + fVar16 * fVar15 + fVar17 * fVar48;
    fStack_10c = fVar28 * fVar20 + fVar35 * fVar20 + fVar16 * fVar20 + fVar17 * fRam0000000146b07a1c
    ;
    local_108 = fVar41 * fVar11 + fVar36 * fVar26 + fVar32 * fVar44 + fRam0000000146b07a1c * fVar39;
    fStack_104 = fVar41 * fVar42 + fVar36 * fVar13 + fVar32 * fVar27 + fRam0000000146b07a1c * fVar40
    ;
    fStack_100 = fVar41 * fVar29 + fVar36 * fVar43 + fVar32 * fVar15 + fRam0000000146b07a1c * fVar48
    ;
    fStack_fc = fVar41 * fVar20 + fVar36 * fVar20 + fVar32 * fVar20 +
                fRam0000000146b07a1c * fRam0000000146b07a1c;
    FMatrix::RemoveScaling(&local_138);
    fVar32 = (float)(-(uint)(fVar23 <= fVar45) & (_DAT_146b07aa0 ^ (uint)fVar31) ^ _DAT_146b07aa0);
    fVar36 = (float)(-(uint)(fVar37 <= fVar46) & (uRam0000000146b07aa4 ^ (uint)fVar19) ^
                    uRam0000000146b07aa4);
    fVar41 = (float)(-(uint)(fVar38 <= fVar47) & (uRam0000000146b07aa8 ^ (uint)fVar22) ^
                    uRam0000000146b07aa8);
    local_138 = local_138 * fVar32;
    fStack_130 = fStack_130 * fVar32;
    fStack_134 = fStack_134 * fVar32;
    fStack_120 = fStack_120 * fVar36;
    fStack_124 = fStack_124 * fVar36;
    local_128 = local_128 * fVar36;
    fStack_110 = fStack_110 * fVar41;
    local_118 = local_118 * fVar41;
    fStack_114 = fStack_114 * fVar41;
    FQuat::FQuat(&local_f8,&local_138);
    auVar12._0_4_ = local_f8 * local_f8 + fStack_f0 * fStack_f0;
    auVar12._4_4_ = fStack_f4 * fStack_f4 + fStack_ec * fStack_ec;
    auVar12._8_4_ = fStack_f0 * fStack_f0 + local_f8 * local_f8;
    auVar12._12_4_ = fStack_ec * fStack_ec + fStack_f4 * fStack_f4;
    fVar18 = auVar12._4_4_ + auVar12._0_4_;
    fVar13 = auVar12._8_4_ + auVar12._4_4_;
    fVar14 = auVar12._12_4_ + auVar12._8_4_;
    fVar31 = auVar12._0_4_ + auVar12._12_4_;
    auVar9._4_4_ = fVar13;
    auVar9._0_4_ = fVar18;
    auVar9._8_4_ = fVar14;
    auVar9._12_4_ = fVar31;
    auVar9 = rsqrtps(auVar12,auVar9);
    fVar32 = auVar9._0_4_;
    fVar36 = auVar9._4_4_;
    fVar41 = auVar9._8_4_;
    fVar11 = auVar9._12_4_;
    fVar32 = (_DAT_146b07a90 - fVar32 * fVar32 * fVar18 * _DAT_146b07a90) * fVar32 + fVar32;
    fVar36 = (fRam0000000146b07a94 - fVar36 * fVar36 * fVar13 * fRam0000000146b07a94) * fVar36 +
             fVar36;
    fVar41 = (fRam0000000146b07a98 - fVar41 * fVar41 * fVar14 * fRam0000000146b07a98) * fVar41 +
             fVar41;
    fVar11 = (fRam0000000146b07a9c - fVar11 * fVar11 * fVar31 * fRam0000000146b07a9c) * fVar11 +
             fVar11;
    fStack_cc = 0.0;
    fVar37 = (float)(((uint)(((_DAT_146b07a90 - fVar32 * fVar32 * fVar18 * _DAT_146b07a90) * fVar32
                             + fVar32) * local_f8) ^ _DAT_146b07a80) & -(uint)(1e-08 <= fVar18) ^
                    _DAT_146b07a80);
    fVar38 = (float)(((uint)(((fRam0000000146b07a94 -
                              fVar36 * fVar36 * fVar13 * fRam0000000146b07a94) * fVar36 + fVar36) *
                            fStack_f4) ^ uRam0000000146b07a84) & -(uint)(1e-08 <= fVar13) ^
                    uRam0000000146b07a84);
    fVar39 = (float)(((uint)(((fRam0000000146b07a98 -
                              fVar41 * fVar41 * fVar14 * fRam0000000146b07a98) * fVar41 + fVar41) *
                            fStack_f0) ^ uRam0000000146b07a88) & -(uint)(1e-08 <= fVar14) ^
                    uRam0000000146b07a88);
    fVar40 = (float)(((uint)(((fRam0000000146b07a9c -
                              fVar11 * fVar11 * fVar31 * fRam0000000146b07a9c) * fVar11 + fVar11) *
                            fStack_ec) ^ uRam0000000146b07a8c) & -(uint)(1e-08 <= fVar31) ^
                    uRam0000000146b07a8c);
    fVar41 = local_108;
    fVar36 = fStack_104;
    fVar32 = fStack_100;
  }
  fStack_bc = fStack_bc * 0.0;
  fStack_c0 = fStack_c0 * fVar3;
  fStack_c4 = fStack_c4 * fVar2;
  local_c8 = local_c8 * fVar1;
  fVar1 = param_3[2];
  fVar2 = param_3[1];
  fVar3 = *param_3;
  fStack_cc = fStack_cc * 0.0;
  local_e8 = fVar37;
  fStack_e4 = fVar38;
  fStack_e0 = fVar39;
  fStack_dc = fVar40;
  local_d8 = fVar41 * fVar3;
  fStack_d4 = fVar36 * fVar2;
  fStack_d0 = fVar32 * fVar1;
  cVar5 = FUN_140618120(&local_e8);
  if (cVar5 == '\0') {
    cVar5 = FUN_140618120(&local_d8);
    if (cVar5 == '\0') {
      FUN_140618120(&local_c8);
    }
  }
  local_f8 = fVar37;
  fStack_f4 = fVar38;
  fStack_f0 = fVar39;
  fStack_ec = fVar40;
  FQuat::Rotator(&local_f8,&local_148);
  *(ulonglong *)(param_2 + 0xbc) = CONCAT44(fStack_144,local_148);
  *(float *)(param_2 + 0xc4) = fStack_140;
  *(ulonglong *)(param_2 + 0xb0) = CONCAT44(fVar36 * fVar2,fVar41 * fVar3);
  *(float *)(param_2 + 0xb8) = fVar32 * fVar1;
  return param_2;
}



// FUNCTION 1426c7f60 FUN_1426c7f60 body=412 status=ok
// SIG undefined FUN_1426c7f60(void)

longlong FUN_1426c7f60(longlong param_1,longlong param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  bool bVar3;
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
  
  fVar5 = param_4[9] * param_3[1];
  fVar9 = param_4[8] * *param_3;
  fVar4 = param_4[10] * param_3[2];
  if (((0.0001 < ABS(fVar9)) || (0.0001 < ABS(fVar5))) || (0.0001 < ABS(fVar4))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    fVar9 = 0.1;
    fVar5 = 0.1;
    fVar4 = 0.1;
  }
  fVar10 = ABS(fVar9);
  if (ABS(fVar5) <= ABS(fVar9)) {
    fVar10 = ABS(fVar5);
  }
  if (ABS(fVar4) <= fVar10) {
    fVar10 = ABS(fVar4);
  }
  if (fVar10 <= 1e-08) {
    fVar10 = 0.1;
  }
  FUN_1426b5590(param_2,param_1);
  *(float *)(param_2 + 0xac) = fVar10 * *(float *)(param_2 + 0xac);
  fVar5 = *param_4;
  fVar9 = param_4[1];
  fVar10 = param_4[2];
  fVar1 = param_4[3];
  fVar11 = *(float *)(param_1 + 0xa0) * param_4[8];
  fVar12 = *(float *)(param_1 + 0xa4) * param_4[9];
  fVar13 = *(float *)(param_1 + 0xa8) * param_4[10];
  fVar6 = fVar13 * fVar9 - fVar12 * fVar10;
  fVar7 = fVar11 * fVar10 - fVar13 * fVar5;
  fVar8 = fVar12 * fVar5 - fVar11 * fVar9;
  fVar6 = fVar6 + fVar6;
  fVar7 = fVar7 + fVar7;
  fVar8 = fVar8 + fVar8;
  fVar2 = param_4[6];
  fVar4 = param_3[2];
  *(ulonglong *)(param_2 + 0xa0) =
       CONCAT44(((fVar6 * fVar10 - fVar8 * fVar5) + fVar1 * fVar7 + fVar12 + param_4[5]) *
                param_3[1],
                ((fVar8 * fVar9 - fVar7 * fVar10) + fVar1 * fVar6 + fVar11 + param_4[4]) * *param_3)
  ;
  *(float *)(param_2 + 0xa8) =
       ((fVar7 * fVar5 - fVar6 * fVar9) + fVar1 * fVar8 + fVar13 + fVar2) * fVar4;
  return param_2;
}



// FUNCTION 1426c8100 FUN_1426c8100 body=672 status=ok
// SIG undefined FUN_1426c8100(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1426c8100(longlong param_1,longlong param_2,float *param_3,float *param_4)

{
  float fVar1;
  bool bVar2;
  float *pfVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 local_48 [8];
  float local_40;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined1 local_28 [32];
  
  FUN_14239fa80(param_2,param_1);
  fVar5 = param_4[8] * *param_3;
  fVar8 = param_4[9] * param_3[1];
  fVar7 = param_4[10] * param_3[2];
  if (((0.0001 < ABS(fVar5)) || (0.0001 < ABS(fVar8))) || (0.0001 < ABS(fVar7))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    fVar5 = 0.1;
    fVar8 = 0.1;
    fVar7 = 0.1;
  }
  fVar1 = *(float *)(param_1 + 200);
  fVar6 = ABS(fVar5);
  if (ABS(fVar5) <= ABS(fVar8)) {
    fVar6 = ABS(fVar8);
  }
  fVar5 = fVar6 * fVar1;
  if (0.1 <= fVar5) {
    fVar8 = (fVar1 + fVar1 + *(float *)(param_1 + 0xcc)) * ABS(fVar7) * 0.5;
    if (fVar8 <= 0.1) {
      fVar8 = 0.1;
    }
    if (fVar5 <= fVar8) {
      fVar8 = fVar5;
    }
  }
  else {
    fVar8 = 0.1;
  }
  *(float *)(param_2 + 200) = fVar8;
  fVar5 = *(float *)(param_1 + 200);
  fVar6 = fVar6 * fVar5;
  fVar5 = (fVar5 + fVar5 + *(float *)(param_1 + 0xcc)) * ABS(fVar7) * 0.5;
  if (fVar5 <= 0.1) {
    fVar5 = 0.1;
  }
  if (0.1 <= fVar6) {
    if (fVar5 <= fVar6) {
      fVar6 = fVar5;
    }
  }
  else {
    fVar6 = 0.1;
  }
  fVar5 = (fVar5 - fVar6) + (fVar5 - fVar6);
  if (fVar5 <= 0.1) {
    fVar5 = 0.1;
  }
  *(float *)(param_2 + 0xcc) = fVar5;
  fVar5 = *param_4;
  fVar7 = param_4[1];
  fVar8 = param_4[2];
  fVar1 = param_4[3];
  fVar11 = *(float *)(param_1 + 0xb0) * param_4[8];
  fVar12 = *(float *)(param_1 + 0xb4) * param_4[9];
  fVar13 = *(float *)(param_1 + 0xb8) * param_4[10];
  fVar6 = fVar13 * fVar7 - fVar12 * fVar8;
  fVar9 = fVar11 * fVar8 - fVar13 * fVar5;
  fVar10 = fVar12 * fVar5 - fVar11 * fVar7;
  fVar6 = fVar6 + fVar6;
  fVar9 = fVar9 + fVar9;
  fVar10 = fVar10 + fVar10;
  local_40 = ((fVar9 * fVar5 - fVar6 * fVar7) + fVar1 * fVar10 + fVar13 + param_4[6]) * param_3[2];
  *(ulonglong *)(param_2 + 0xb0) =
       CONCAT44(((fVar6 * fVar8 - fVar10 * fVar5) + fVar1 * fVar9 + fVar12 + param_4[5]) *
                param_3[1],
                ((fVar10 * fVar7 - fVar9 * fVar8) + fVar1 * fVar6 + fVar11 + param_4[4]) * *param_3)
  ;
  *(float *)(param_2 + 0xb8) = local_40;
  pfVar3 = (float *)FRotator::Quaternion(param_2 + 0xbc,local_28);
  fVar5 = *param_4;
  fVar7 = param_4[1];
  fVar8 = param_4[2];
  fVar1 = param_4[3];
  fVar6 = *pfVar3;
  fVar9 = pfVar3[1];
  fVar10 = pfVar3[2];
  fVar11 = pfVar3[3];
  local_38 = fVar11 * fVar5 * _DAT_146b07a70 + fVar1 * fVar6 + fVar10 * fVar7 * _DAT_146b07a60 +
             fVar9 * fVar8 * _DAT_146b07a50;
  fStack_34 = fVar10 * fVar5 * fRam0000000146b07a74 + fVar1 * fVar9 +
              fVar11 * fVar7 * fRam0000000146b07a64 + fVar6 * fVar8 * fRam0000000146b07a54;
  fStack_30 = fVar9 * fVar5 * fRam0000000146b07a78 + fVar1 * fVar10 +
              fVar6 * fVar7 * fRam0000000146b07a68 + fVar11 * fVar8 * fRam0000000146b07a58;
  fStack_2c = fVar6 * fVar5 * fRam0000000146b07a7c + fVar1 * fVar11 +
              fVar9 * fVar7 * fRam0000000146b07a6c + fVar10 * fVar8 * fRam0000000146b07a5c;
  puVar4 = (undefined8 *)FRotator::FRotator(local_48,&local_38);
  *(undefined8 *)(param_2 + 0xbc) = *puVar4;
  *(undefined4 *)(param_2 + 0xc4) = *(undefined4 *)(puVar4 + 1);
  return param_2;
}



// FUNCTION 1426c83a0 GetFormat body=248 status=ok
// SIG undefined GetFormat(void)

undefined8 * FFormatContainer::GetFormat(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *local_res8;
  undefined8 *local_res10;
  
  lVar6 = 0;
  lVar1 = *param_1;
  iVar2 = 0;
  uVar4 = (longlong)(int)param_1[1];
  local_res8 = param_2;
  local_res10 = param_2;
  if ((int)param_1[1] != 0) {
    do {
      uVar5 = uVar4 >> 1;
      iVar2 = FName::Compare((uVar5 + lVar6) * 0x10 + lVar1,&local_res8);
      if (iVar2 < 0) {
        lVar6 = (ulonglong)((uint)uVar4 & 1) + uVar5 + lVar6;
      }
      uVar4 = uVar5;
    } while (uVar5 != 0);
    iVar2 = (int)param_1[1];
  }
  uVar4 = (ulonglong)(int)lVar6;
  if (uVar4 < (ulonglong)(longlong)iVar2) {
    iVar2 = FName::Compare(&local_res8,uVar4 * 0x10 + *param_1);
    if (((-1 < iVar2) && ((int)lVar6 != -1)) &&
       (puVar3 = (undefined8 *)(*param_1 + 8 + uVar4 * 0x10), puVar3 != (undefined8 *)0x0)) {
      puVar3 = (undefined8 *)*puVar3;
      goto LAB_1426c843e;
    }
  }
  puVar3 = (undefined8 *)0x0;
LAB_1426c843e:
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)operator_new(0x70);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      FUntypedBulkData::FUntypedBulkData(puVar3);
      *puVar3 = &PTR__scalar_deleting_destructor__143f48b90;
    }
    local_res8 = puVar3;
    TSortedMap<FName,void_(__cdecl*)(UAnimSequence_&),FDefaultAllocator,TLess<FName>_>::
    Emplace<FName_const_&,void_(__cdecl*const_&)(UAnimSequence_&)>(param_1,&local_res10,&local_res8)
    ;
    puVar3 = local_res8;
  }
  return puVar3;
}



// FUNCTION 1426c84a0 FUN_1426c84a0 body=411 status=ok
// SIG undefined FUN_1426c84a0(void)

undefined8 FUN_1426c84a0(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  byte *pbVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  
  plVar8 = (longlong *)0x0;
  if (param_1 == 0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    plVar7 = *(longlong **)(param_1 + 0x110);
    if (plVar7 == (longlong *)0x0) {
      plVar7 = *(longlong **)(param_1 + 0x118);
    }
  }
  if (param_2 == 0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    plVar6 = *(longlong **)(param_2 + 0x110);
    if (plVar6 == (longlong *)0x0) {
      plVar6 = *(longlong **)(param_2 + 0x118);
    }
  }
  if (plVar7 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar7 + 0x20))(plVar7,"PxRigidBody");
    plVar5 = plVar8;
    if (cVar1 != '\0') {
      plVar5 = plVar7;
    }
    if (plVar5 != (longlong *)0x0) goto LAB_1426c854d;
  }
  if (plVar6 == (longlong *)0x0) {
    return 0;
  }
  cVar1 = (**(code **)(*plVar6 + 0x20))(plVar6,"PxRigidBody");
  plVar5 = plVar8;
  if (cVar1 != '\0') {
    plVar5 = plVar6;
  }
  if (plVar5 == (longlong *)0x0) {
    return 0;
  }
LAB_1426c854d:
  if (((plVar7 == plVar6) ||
      ((plVar7 != (longlong *)0x0 &&
       (pbVar2 = (byte *)(**(code **)(*plVar7 + 0x60))(plVar7,local_res8), (*pbVar2 & 8) != 0)))) ||
     ((plVar6 != (longlong *)0x0 &&
      (pbVar2 = (byte *)(**(code **)(*plVar6 + 0x60))(plVar6,local_res8), (*pbVar2 & 8) != 0)))) {
    return 0;
  }
  if ((plVar7 != (longlong *)0x0) && (plVar6 != (longlong *)0x0)) {
    plVar5 = plVar8;
    if ((short)plVar7[1] == 7) {
      plVar5 = plVar7;
    }
    if ((plVar5 != (longlong *)0x0) &&
       (lVar3 = physx::PxBase::is<physx::PxRigidBody>(plVar6), lVar3 != 0)) {
      plVar7 = (longlong *)0x2;
      if (*(longlong *)(param_2 + 0x110) != 0) {
        plVar7 = plVar8;
      }
      uVar4 = FBodyInstance::GetPxRigidActor(param_1,plVar7);
      *param_3 = uVar4;
      *param_4 = plVar6;
      return 1;
    }
    plVar5 = plVar8;
    if ((short)plVar6[1] == 7) {
      plVar5 = plVar6;
    }
    if ((plVar5 != (longlong *)0x0) &&
       (lVar3 = physx::PxBase::is<physx::PxRigidBody>(plVar7), lVar3 != 0)) {
      plVar6 = (longlong *)0x2;
      if (*(longlong *)(param_1 + 0x110) != 0) {
        plVar6 = plVar8;
      }
      plVar6 = (longlong *)FBodyInstance::GetPxRigidActor(param_2,plVar6);
    }
  }
  *param_3 = plVar7;
  *param_4 = plVar6;
  return 1;
}



// FUNCTION 1426c8640 GetPhysXCookingModule body=90 status=ok
// SIG undefined GetPhysXCookingModule(void)

void GetPhysXCookingModule(char param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 local_res10 [24];
  
  if (param_1 != '\0') {
    puVar2 = (undefined8 *)FName::FName(local_res10,"PhysXCooking",1);
    uVar1 = *puVar2;
    uVar3 = FUN_14168dc80();
    FUN_141690010(uVar3,uVar1);
    return;
  }
  puVar2 = (undefined8 *)FName::FName(local_res10,"PhysXCooking",1);
  FModuleManager::GetModulePtr_Internal(*puVar2);
  return;
}



// FUNCTION 1426c86a0 FUN_1426c86a0 body=260 status=ok
// SIG undefined FUN_1426c86a0(void)

longlong FUN_1426c86a0(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x68);
  if (lVar3 == 0) {
    if (DAT_146b08400 != (longlong *)0x0) {
      uVar1 = (**(code **)(*DAT_146b08400 + 0x100))
                        (DAT_146b08400,*(undefined4 *)(param_1 + 0x28),
                         *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
      *(undefined8 *)(param_1 + 0x68) = uVar1;
      if (*(char *)(param_1 + 0x2d) == '\0') {
        plVar2 = (longlong *)UAudioSettings::GetPrivateStaticClass();
        lVar3 = plVar2[0x1f];
        if (lVar3 == 0) {
          (**(code **)(*plVar2 + 0x368))(plVar2);
          lVar3 = plVar2[0x1f];
        }
        uVar4 = *(undefined1 *)(lVar3 + 0x90);
      }
      else {
        uVar4 = *(undefined1 *)(param_1 + 0x2c);
      }
      (**(code **)(**(longlong **)(param_1 + 0x68) + 0x80))(*(longlong **)(param_1 + 0x68),uVar4);
      if (*(char *)(param_1 + 0x35) == '\0') {
        plVar2 = (longlong *)UAudioSettings::GetPrivateStaticClass();
        lVar3 = plVar2[0x1f];
        if (lVar3 == 0) {
          (**(code **)(*plVar2 + 0x368))(plVar2);
          lVar3 = plVar2[0x1f];
        }
        uVar4 = *(undefined1 *)(lVar3 + 0x91);
      }
      else {
        uVar4 = *(undefined1 *)(param_1 + 0x34);
      }
      (**(code **)(**(longlong **)(param_1 + 0x68) + 0x90))(*(longlong **)(param_1 + 0x68),uVar4);
      *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x10) = param_1 + 0x70;
      FUN_1426cf770(param_1);
      return *(longlong *)(param_1 + 0x68);
    }
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 1426c87b0 GetRefFrame body=478 status=ok
// SIG undefined GetRefFrame(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FConstraintInstance::GetRefFrame(longlong param_1,undefined8 *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  float local_88;
  float local_84;
  float local_80;
  undefined4 local_7c;
  float local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  float local_68;
  float local_64;
  float local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  
  uVar1 = uRam0000000146b07a1c;
  uVar2 = _DAT_146b07a10 & _DAT_146b07a20;
  uVar3 = uRam0000000146b07a14 & uRam0000000146b07a24;
  uVar4 = uRam0000000146b07a18 & uRam0000000146b07a28;
  uVar5 = uRam0000000146b07a1c & uRam0000000146b07a2c;
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((longlong)param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(uint *)((longlong)param_2 + 0xc) = uVar1;
  param_2[2] = 0;
  param_2[3] = 0;
  *(uint *)(param_2 + 4) = uVar2;
  *(uint *)((longlong)param_2 + 0x24) = uVar3;
  *(uint *)(param_2 + 5) = uVar4;
  *(uint *)((longlong)param_2 + 0x2c) = uVar5;
  local_7c = 0;
  local_6c = 0;
  if (param_3 == 0) {
    local_88 = *(float *)(param_1 + 0x3c);
    local_84 = *(float *)(param_1 + 0x40);
    local_80 = *(float *)(param_1 + 0x44);
    local_70 = *(float *)(param_1 + 0x50);
    local_74 = *(float *)(param_1 + 0x4c);
    local_78 = *(float *)(param_1 + 0x48);
    local_68 = local_84 * local_70 - local_80 * local_74;
    local_54 = *(undefined4 *)(param_1 + 0x34);
    local_64 = local_78 * local_80 - local_88 * local_70;
    local_60 = local_88 * local_74 - local_78 * local_84;
    local_58 = *(undefined4 *)(param_1 + 0x30);
    local_50 = *(undefined4 *)(param_1 + 0x38);
  }
  else {
    local_88 = *(float *)(param_1 + 0x60);
    local_84 = *(float *)(param_1 + 100);
    local_80 = *(float *)(param_1 + 0x68);
    local_70 = *(float *)(param_1 + 0x74);
    local_74 = *(float *)(param_1 + 0x70);
    local_78 = *(float *)(param_1 + 0x6c);
    local_68 = local_84 * local_70 - local_80 * local_74;
    local_54 = *(undefined4 *)(param_1 + 0x58);
    local_64 = local_78 * local_80 - local_88 * local_70;
    local_60 = local_88 * local_74 - local_78 * local_84;
    local_58 = *(undefined4 *)(param_1 + 0x54);
    local_50 = *(undefined4 *)(param_1 + 0x5c);
  }
  local_4c = 0x3f800000;
  local_5c = 0;
  FUN_140487e30(&local_b8,&local_88);
  *param_2 = local_b8;
  param_2[1] = uStack_b0;
  param_2[4] = local_98;
  param_2[5] = uStack_90;
  param_2[2] = local_a8;
  param_2[3] = uStack_a0;
  return param_2;
}



// FUNCTION 1426c8990 FUN_1426c8990 body=446 status=ok
// SIG undefined FUN_1426c8990(void)

void FUN_1426c8990(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 local_res8 [8];
  
  FUN_141758340();
  uVar8 = 0;
  puVar6 = *(undefined8 **)(param_1 + 0x100);
  uVar11 = (longlong)*(int *)(param_1 + 0x108) & 0x1fffffffffffffff;
  if (puVar6 + *(int *)(param_1 + 0x108) < puVar6) {
    uVar11 = uVar8;
  }
  uVar12 = uVar8;
  if (uVar11 != 0) {
    do {
      lVar4 = GetPhysxObjectSize(*puVar6,0);
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + lVar4;
      puVar6 = puVar6 + 1;
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar11);
  }
  uVar11 = uVar8;
  uVar12 = uVar8;
  if (0 < *(int *)(param_1 + 0x60)) {
    do {
      lVar4 = *(longlong *)(param_1 + 0x58);
      lVar5 = *(longlong *)(lVar4 + 0xc0 + uVar12);
      if (lVar5 != 0) {
        lVar5 = GetPhysxObjectSize(lVar5,0);
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + lVar5;
      }
      lVar4 = *(longlong *)(lVar4 + 200 + uVar12);
      if (lVar4 != 0) {
        lVar4 = GetPhysxObjectSize(lVar4,0);
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + lVar4;
      }
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
      uVar12 = uVar12 + 0xd0;
    } while ((int)uVar10 < *(int *)(param_1 + 0x60));
  }
  plVar9 = (longlong *)(param_2 + 8);
  puVar6 = (undefined8 *)FName::FName(local_res8,"PhysXPC",1);
  cVar1 = FFormatContainer::Contains(param_1 + 0xd8,*puVar6);
  if (cVar1 == '\0') {
    lVar4 = *plVar9;
  }
  else {
    puVar6 = (undefined8 *)FName::FName(local_res8,"PhysXPC",1);
    plVar7 = (longlong *)FFormatContainer::GetFormat(param_1 + 0xd8,*puVar6);
    iVar2 = (**(code **)(*plVar7 + 8))(plVar7);
    iVar3 = IStreamingManager::GetNumWantingResourcesID(plVar7);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (longlong)(iVar3 * iVar2);
    lVar4 = *(longlong *)(param_2 + 8);
  }
  lVar4 = (ulonglong)(uint)(*(int *)(param_1 + 0x11c) << 2) + lVar4;
  *plVar9 = lVar4;
  lVar4 = (ulonglong)(uint)(*(int *)(param_1 + 300) * 0xc) + lVar4;
  *plVar9 = lVar4;
  uVar11 = uVar8;
  if (0 < *(int *)(param_1 + 0x138)) {
    do {
      uVar10 = (int)uVar11 + 1;
      lVar4 = lVar4 + (ulonglong)(uint)(*(int *)(uVar8 + 0xc + *(longlong *)(param_1 + 0x130)) << 3)
      ;
      *plVar9 = lVar4;
      uVar8 = uVar8 + 0x10;
      uVar11 = (ulonglong)uVar10;
    } while ((int)uVar10 < *(int *)(param_1 + 0x138));
  }
  *plVar9 = (ulonglong)(uint)(*(int *)(param_1 + 0x13c) << 4) + lVar4;
  return;
}



// FUNCTION 1426c8b50 GetResourceSizeEx body=114 status=ok
// SIG undefined GetResourceSizeEx(void)

void UPhysicsAsset::GetResourceSizeEx(longlong param_1,longlong param_2)

{
  int iVar1;
  
  FUN_141758340();
  iVar1 = *(int *)(param_1 + 0x94) + 0x1f;
  *(longlong *)(param_2 + 8) =
       *(longlong *)(param_2 + 8) +
       (ulonglong)
       (uint)((((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) + *(int *)(param_1 + 0x74) * 6 +
              *(int *)(param_1 + 0xb0)) * 4);
  iVar1 = *(int *)(param_1 + 0xe4) + 0x1f;
  *(longlong *)(param_2 + 8) =
       *(longlong *)(param_2 + 8) +
       (ulonglong)
       (uint)((((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) + *(int *)(param_1 + 0xc4) * 5 +
              *(int *)(param_1 + 0x100)) * 4);
  return;
}



// FUNCTION 1426c8bd0 FUN_1426c8bd0 body=64 status=ok
// SIG undefined FUN_1426c8bd0(void)

byte FUN_1426c8bd0(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  return -(*(char *)(lVar2 + 0xab) != '\0') & 4;
}



// FUNCTION 1426c8c10 FUN_1426c8c10 body=133 status=ok
// SIG undefined FUN_1426c8c10(void)

float FUN_1426c8c10(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)(param_1 + 200);
  fVar1 = ABS(param_2[2]) * (fVar2 + fVar2 + *(float *)(param_1 + 0xcc)) * 0.5;
  fVar3 = ABS(param_2[1]);
  if (ABS(param_2[1]) <= ABS(*param_2)) {
    fVar3 = ABS(*param_2);
  }
  if (fVar1 <= 0.1) {
    fVar1 = 0.1;
  }
  fVar3 = fVar3 * fVar2;
  if (fVar3 < 0.1) {
    fVar2 = (fVar1 - 0.1) + (fVar1 - 0.1);
    if (fVar2 <= 0.1) {
      fVar2 = 0.1;
    }
    return fVar2;
  }
  fVar2 = fVar1;
  if (fVar3 <= fVar1) {
    fVar2 = fVar3;
  }
  fVar2 = (fVar1 - fVar2) + (fVar1 - fVar2);
  if (fVar2 <= 0.1) {
    fVar2 = 0.1;
  }
  return fVar2;
}



// FUNCTION 1426c8ca0 FUN_1426c8ca0 body=162 status=ok
// SIG undefined FUN_1426c8ca0(void)

float FUN_1426c8ca0(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = ABS(param_2[1]);
  if (ABS(param_2[1]) <= ABS(*param_2)) {
    fVar3 = ABS(*param_2);
  }
  fVar4 = *(float *)(param_1 + 0x78) * fVar3;
  fVar2 = ABS(param_2[2]) *
          (*(float *)(param_1 + 0x78) + *(float *)(param_1 + 0x80) + *(float *)(param_1 + 0x7c)) *
          0.5;
  if (fVar2 <= 0.1) {
    fVar2 = 0.1;
  }
  if (0.1 <= fVar4) {
    fVar1 = fVar2;
    if (fVar4 <= fVar2) {
      fVar1 = fVar4;
    }
  }
  else {
    fVar1 = 0.1;
  }
  fVar3 = *(float *)(param_1 + 0x7c) * fVar3;
  if (0.1 <= fVar3) {
    fVar4 = fVar2;
    if (fVar3 <= fVar2) {
      fVar4 = fVar3;
    }
  }
  else {
    fVar4 = 0.1;
  }
  fVar3 = (fVar2 + fVar2) - (fVar1 + fVar4);
  if (fVar3 <= 0.1) {
    fVar3 = 0.1;
  }
  return fVar3;
}



// FUNCTION 1426c8d50 FUN_1426c8d50 body=1825 status=ok
// SIG undefined FUN_1426c8d50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1426c8d50(longlong param_1,undefined8 param_2,float *param_3)

{
  undefined1 auVar1 [16];
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
  undefined4 uVar14;
  int iVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar20;
  float fVar21;
  undefined1 auVar19 [16];
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
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined **local_188 [10];
  longlong local_138;
  
  local_1a8 = param_3[8];
  fStack_1a4 = param_3[9];
  fStack_1a0 = param_3[10];
  FUN_1426c7820(param_1,local_188,&local_1a8,&DAT_1468b5b70);
  uVar14 = FRotator::Quaternion(param_1 + 0xbc,&local_1a8);
  fVar13 = fRam0000000146b07a18;
  fVar12 = fRam0000000146b07a14;
  fVar11 = _DAT_146b07a10;
  fVar10 = DAT_1464aa790;
  fVar9 = DAT_1464aa788._4_4_;
  fVar8 = (float)DAT_1464aa788;
  fVar31 = *(float *)(param_1 + 0xb8);
  fVar34 = *(float *)(param_1 + 0xb4);
  fVar37 = *(float *)(param_1 + 0xb0);
  auVar1 = *(undefined1 (*) [16])(param_3 + 8);
  fVar2 = auVar1._0_4_;
  fVar3 = auVar1._4_4_;
  fVar4 = auVar1._8_4_;
  fVar18 = *param_3;
  fVar25 = param_3[1];
  fVar20 = param_3[2];
  fVar21 = param_3[3];
  auVar16._4_4_ = DAT_1464aa788._4_4_;
  auVar16._0_4_ = (float)DAT_1464aa788;
  auVar16._8_4_ = DAT_1464aa790;
  auVar16._12_4_ = 0;
  auVar16 = minps(auVar16,auVar1);
  auVar17._4_4_ = -(uint)(auVar16._4_4_ < fRam0000000146b07ab4);
  auVar17._0_4_ = -(uint)(auVar16._0_4_ < _DAT_146b07ab0);
  auVar17._8_4_ = -(uint)(auVar16._8_4_ < fRam0000000146b07ab8);
  auVar17._12_4_ = -(uint)(auVar16._12_4_ < fRam0000000146b07abc);
  iVar15 = movmskps(uVar14,auVar17);
  if (iVar15 != 0) {
    fVar5 = param_3[4];
    fVar6 = param_3[5];
    fVar7 = param_3[6];
    fVar22 = fVar25 + fVar25;
    fVar26 = fVar20 + fVar20;
    fVar28 = fVar18 * (fVar18 + fVar18);
    fVar23 = (fVar18 + fVar18) * fVar21;
    fVar24 = fStack_1a4 + fStack_1a4;
    fVar27 = fStack_1a0 + fStack_1a0;
    fVar41 = (fVar26 * fVar21 + fVar22 * fVar18) * fVar2;
    fVar42 = (fVar23 + fVar26 * fVar25) * fVar3;
    fVar43 = (fVar22 * fVar21 + fVar26 * fVar18) * fVar4;
    fVar30 = fVar3 * (fVar22 * fVar18 - fVar26 * fVar21);
    fVar32 = fVar4 * (fVar26 * fVar25 - fVar23);
    fVar35 = fVar2 * (fVar26 * fVar18 - fVar22 * fVar21);
    fVar29 = local_1a8 * (local_1a8 + local_1a8);
    fVar18 = (float)((uint)((_DAT_146b07a10 - (fVar20 * fVar26 + fVar25 * fVar22)) * fVar2) &
                    _DAT_146b07a20);
    fVar20 = (float)((uint)((fRam0000000146b07a14 - (fVar20 * fVar26 + fVar28)) * fVar3) &
                    uRam0000000146b07a24);
    fVar22 = (float)((uint)((fRam0000000146b07a18 - (fVar25 * fVar22 + fVar28)) * fVar4) &
                    uRam0000000146b07a28);
    fVar26 = (float)((uint)((fRam0000000146b07a1c - (fVar28 + fVar28)) * auVar1._12_4_) &
                    uRam0000000146b07a2c);
    fVar25 = (local_1a8 + local_1a8) * fStack_19c;
    fVar38 = (fVar27 * fStack_19c + fVar24 * local_1a8) * (float)DAT_1464aa788;
    fVar39 = (fVar25 + fVar27 * fStack_1a4) * DAT_1464aa788._4_4_;
    fVar40 = (fVar24 * fStack_19c + fVar27 * local_1a8) * DAT_1464aa790;
    fVar28 = DAT_1464aa788._4_4_ * (fVar24 * local_1a8 - fVar27 * fStack_19c);
    fVar33 = DAT_1464aa790 * (fVar27 * fStack_1a4 - fVar25);
    fVar36 = (float)DAT_1464aa788 * (fVar27 * local_1a8 - fVar24 * fStack_19c);
    fVar25 = (float)((uint)((_DAT_146b07a10 - (fStack_1a0 * fVar27 + fStack_1a4 * fVar24)) *
                           (float)DAT_1464aa788) & _DAT_146b07a20);
    fVar21 = (float)((uint)((fRam0000000146b07a14 - (fStack_1a0 * fVar27 + fVar29)) *
                           DAT_1464aa788._4_4_) & uRam0000000146b07a24);
    fVar23 = (float)((uint)((fRam0000000146b07a18 - (fStack_1a4 * fVar24 + fVar29)) * DAT_1464aa790)
                    & uRam0000000146b07a28);
    fVar24 = (float)((uint)((fRam0000000146b07a1c - (fVar29 + fVar29)) * 0.0) & uRam0000000146b07a2c
                    );
    local_1e8 = fVar38 * fVar30 + fVar25 * fVar18 + fVar36 * fVar43 + fVar24 * fVar5;
    fStack_1e4 = fVar38 * fVar20 + fVar25 * fVar41 + fVar36 * fVar32 + fVar24 * fVar6;
    fStack_1e0 = fVar38 * fVar42 + fVar25 * fVar35 + fVar36 * fVar22 + fVar24 * fVar7;
    fStack_1dc = fVar38 * fVar26 + fVar25 * fVar26 + fVar36 * fVar26 + fVar24 * fRam0000000146b07a1c
    ;
    local_1d8 = fVar21 * fVar30 + fVar28 * fVar18 + fVar39 * fVar43 + fVar24 * fVar5;
    fStack_1d4 = fVar21 * fVar20 + fVar28 * fVar41 + fVar39 * fVar32 + fVar24 * fVar6;
    fStack_1d0 = fVar21 * fVar42 + fVar28 * fVar35 + fVar39 * fVar22 + fVar24 * fVar7;
    fStack_1cc = fVar21 * fVar26 + fVar28 * fVar26 + fVar39 * fVar26 + fVar24 * fRam0000000146b07a1c
    ;
    local_1c8 = fVar33 * fVar30 + fVar40 * fVar18 + fVar23 * fVar43 + fVar24 * fVar5;
    fStack_1c4 = fVar33 * fVar20 + fVar40 * fVar41 + fVar23 * fVar32 + fVar24 * fVar6;
    fStack_1c0 = fVar33 * fVar42 + fVar40 * fVar35 + fVar23 * fVar22 + fVar24 * fVar7;
    fStack_1bc = fVar33 * fVar26 + fVar40 * fVar26 + fVar23 * fVar26 + fVar24 * fRam0000000146b07a1c
    ;
    local_1b8 = fVar34 * fVar30 + fVar37 * fVar18 + fVar31 * fVar43 + fRam0000000146b07a1c * fVar5;
    fStack_1b4 = fVar34 * fVar20 + fVar37 * fVar41 + fVar31 * fVar32 + fRam0000000146b07a1c * fVar6;
    fStack_1b0 = fVar34 * fVar42 + fVar37 * fVar35 + fVar31 * fVar22 + fRam0000000146b07a1c * fVar7;
    fStack_1ac = fVar34 * fVar26 + fVar37 * fVar26 + fVar31 * fVar26 +
                 fRam0000000146b07a1c * fRam0000000146b07a1c;
    FMatrix::RemoveScaling(&local_1e8);
    fVar31 = (float)(-(uint)(_DAT_146b07ab0 <= fVar8 * fVar2) & (_DAT_146b07aa0 ^ (uint)fVar11) ^
                    _DAT_146b07aa0);
    fVar34 = (float)(-(uint)(fRam0000000146b07ab4 <= fVar9 * fVar3) &
                     (uRam0000000146b07aa4 ^ (uint)fVar12) ^ uRam0000000146b07aa4);
    fVar37 = (float)(-(uint)(fRam0000000146b07ab8 <= fVar10 * fVar4) &
                     (uRam0000000146b07aa8 ^ (uint)fVar13) ^ uRam0000000146b07aa8);
    local_1e8 = local_1e8 * fVar31;
    fStack_1e4 = fStack_1e4 * fVar31;
    fStack_1e0 = fStack_1e0 * fVar31;
    fStack_1d4 = fStack_1d4 * fVar34;
    fStack_1d0 = fStack_1d0 * fVar34;
    local_1d8 = local_1d8 * fVar34;
    fStack_1c4 = fStack_1c4 * fVar37;
    fStack_1c0 = fStack_1c0 * fVar37;
    local_1c8 = local_1c8 * fVar37;
    FQuat::FQuat(&local_198,&local_1e8);
    auVar19._0_4_ = local_198 * local_198 + fStack_190 * fStack_190;
    auVar19._4_4_ = fStack_194 * fStack_194 + fStack_18c * fStack_18c;
    auVar19._8_4_ = fStack_190 * fStack_190 + local_198 * local_198;
    auVar19._12_4_ = fStack_18c * fStack_18c + fStack_194 * fStack_194;
    auVar1._4_4_ = auVar19._8_4_ + auVar19._4_4_;
    auVar1._0_4_ = auVar19._4_4_ + auVar19._0_4_;
    auVar1._8_4_ = auVar19._12_4_ + auVar19._8_4_;
    auVar1._12_4_ = auVar19._0_4_ + auVar19._12_4_;
    rsqrtps(auVar19,auVar1);
  }
  local_188[0] = &PTR__scalar_deleting_destructor__1440fbd58;
  if (local_138 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1426c9480 FUN_1426c9480 body=339 status=ok
// SIG undefined FUN_1426c9480(void)

float FUN_1426c9480(undefined8 param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined **local_c8 [10];
  longlong local_78;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  local_d8 = param_3[8];
  local_d4 = param_3[9];
  local_d0 = param_3[10];
  FUN_1426c7f60(local_d4,local_c8,&local_d8,&DAT_1468b5b70);
  fVar8 = *param_3;
  fVar1 = param_3[1];
  fVar4 = param_3[2];
  fVar2 = param_3[3];
  fVar5 = local_20 * fVar1 - local_24 * fVar4;
  fVar6 = local_28 * fVar4 - local_20 * fVar8;
  fVar7 = local_24 * fVar8 - local_28 * fVar1;
  fVar5 = fVar5 + fVar5;
  fVar6 = fVar6 + fVar6;
  fVar7 = fVar7 + fVar7;
  fVar3 = ((fVar7 * fVar1 - fVar6 * fVar4) + fVar2 * fVar5 + local_28 + param_3[4]) - *param_2;
  fVar4 = ((fVar5 * fVar4 - fVar7 * fVar8) + fVar2 * fVar6 + local_24 + param_3[5]) - param_2[1];
  fVar8 = ((fVar6 * fVar8 - fVar5 * fVar1) + fVar2 * fVar7 + local_20 + param_3[6]) - param_2[2];
  local_1c = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar8 * fVar8) - local_1c;
  if (local_1c <= 1e-08) {
    local_1c = 0.0;
  }
  local_c8[0] = &PTR__scalar_deleting_destructor__1440fbd58;
  if (local_78 != 0) {
    FMemory::Free();
  }
  return local_1c;
}



// FUNCTION 1426c95e0 FUN_1426c95e0 body=1798 status=ok
// SIG undefined FUN_1426c95e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1426c95e0(longlong param_1,undefined8 param_2,float *param_3)

{
  undefined1 auVar1 [16];
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
  undefined4 uVar14;
  int iVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar20;
  float fVar21;
  undefined1 auVar19 [16];
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
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
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
  undefined **local_178 [10];
  longlong local_128;
  
  local_198 = param_3[8];
  fStack_194 = param_3[9];
  fStack_190 = param_3[10];
  FUN_1426c8100(param_1,local_178,&local_198,&DAT_1468b5b70);
  uVar14 = FRotator::Quaternion(param_1 + 0xbc,&local_198);
  fVar13 = fRam0000000146b07a18;
  fVar12 = fRam0000000146b07a14;
  fVar11 = _DAT_146b07a10;
  fVar10 = DAT_1464aa790;
  fVar9 = DAT_1464aa788._4_4_;
  fVar8 = (float)DAT_1464aa788;
  fVar31 = *(float *)(param_1 + 0xb8);
  fVar34 = *(float *)(param_1 + 0xb4);
  fVar37 = *(float *)(param_1 + 0xb0);
  auVar1 = *(undefined1 (*) [16])(param_3 + 8);
  fVar2 = auVar1._0_4_;
  fVar3 = auVar1._4_4_;
  fVar4 = auVar1._8_4_;
  fVar18 = *param_3;
  fVar25 = param_3[1];
  fVar20 = param_3[2];
  fVar21 = param_3[3];
  auVar16._4_4_ = DAT_1464aa788._4_4_;
  auVar16._0_4_ = (float)DAT_1464aa788;
  auVar16._8_4_ = DAT_1464aa790;
  auVar16._12_4_ = 0;
  auVar16 = minps(auVar16,auVar1);
  auVar17._4_4_ = -(uint)(auVar16._4_4_ < fRam0000000146b07ab4);
  auVar17._0_4_ = -(uint)(auVar16._0_4_ < _DAT_146b07ab0);
  auVar17._8_4_ = -(uint)(auVar16._8_4_ < fRam0000000146b07ab8);
  auVar17._12_4_ = -(uint)(auVar16._12_4_ < fRam0000000146b07abc);
  iVar15 = movmskps(uVar14,auVar17);
  if (iVar15 != 0) {
    fVar5 = param_3[4];
    fVar6 = param_3[5];
    fVar7 = param_3[6];
    fVar22 = fVar25 + fVar25;
    fVar26 = fVar20 + fVar20;
    fVar28 = (fVar18 + fVar18) * fVar18;
    fVar23 = (fVar18 + fVar18) * fVar21;
    fVar24 = fStack_194 + fStack_194;
    fVar27 = fStack_190 + fStack_190;
    fVar41 = (fVar26 * fVar21 + fVar22 * fVar18) * fVar2;
    fVar42 = (fVar23 + fVar26 * fVar25) * fVar3;
    fVar43 = (fVar22 * fVar21 + fVar26 * fVar18) * fVar4;
    fVar30 = fVar3 * (fVar22 * fVar18 - fVar26 * fVar21);
    fVar32 = fVar4 * (fVar26 * fVar25 - fVar23);
    fVar35 = fVar2 * (fVar26 * fVar18 - fVar22 * fVar21);
    fVar29 = local_198 * (local_198 + local_198);
    fVar18 = (float)((uint)((_DAT_146b07a10 - (fVar26 * fVar20 + fVar22 * fVar25)) * fVar2) &
                    _DAT_146b07a20);
    fVar20 = (float)((uint)((fRam0000000146b07a14 - (fVar26 * fVar20 + fVar28)) * fVar3) &
                    uRam0000000146b07a24);
    fVar22 = (float)((uint)((fRam0000000146b07a18 - (fVar22 * fVar25 + fVar28)) * fVar4) &
                    uRam0000000146b07a28);
    fVar26 = (float)((uint)((fRam0000000146b07a1c - (fVar28 + fVar28)) * auVar1._12_4_) &
                    uRam0000000146b07a2c);
    fVar25 = (local_198 + local_198) * fStack_18c;
    fVar38 = (fVar27 * fStack_18c + fVar24 * local_198) * (float)DAT_1464aa788;
    fVar39 = (fVar25 + fVar27 * fStack_194) * DAT_1464aa788._4_4_;
    fVar40 = (fVar24 * fStack_18c + fVar27 * local_198) * DAT_1464aa790;
    fVar28 = DAT_1464aa788._4_4_ * (fVar24 * local_198 - fVar27 * fStack_18c);
    fVar33 = DAT_1464aa790 * (fVar27 * fStack_194 - fVar25);
    fVar36 = (float)DAT_1464aa788 * (fVar27 * local_198 - fVar24 * fStack_18c);
    fVar25 = (float)((uint)((_DAT_146b07a10 - (fStack_190 * fVar27 + fStack_194 * fVar24)) *
                           (float)DAT_1464aa788) & _DAT_146b07a20);
    fVar21 = (float)((uint)((fRam0000000146b07a14 - (fStack_190 * fVar27 + fVar29)) *
                           DAT_1464aa788._4_4_) & uRam0000000146b07a24);
    fVar23 = (float)((uint)((fRam0000000146b07a18 - (fStack_194 * fVar24 + fVar29)) * DAT_1464aa790)
                    & uRam0000000146b07a28);
    fVar24 = (float)((uint)((fRam0000000146b07a1c - (fVar29 + fVar29)) * 0.0) & uRam0000000146b07a2c
                    );
    local_1d8 = fVar38 * fVar30 + fVar25 * fVar18 + fVar36 * fVar43 + fVar24 * fVar5;
    fStack_1d4 = fVar38 * fVar20 + fVar25 * fVar41 + fVar36 * fVar32 + fVar24 * fVar6;
    fStack_1d0 = fVar38 * fVar42 + fVar25 * fVar35 + fVar36 * fVar22 + fVar24 * fVar7;
    fStack_1cc = fVar38 * fVar26 + fVar25 * fVar26 + fVar36 * fVar26 + fVar24 * fRam0000000146b07a1c
    ;
    local_1c8 = fVar21 * fVar30 + fVar28 * fVar18 + fVar39 * fVar43 + fVar24 * fVar5;
    fStack_1c4 = fVar21 * fVar20 + fVar28 * fVar41 + fVar39 * fVar32 + fVar24 * fVar6;
    fStack_1c0 = fVar21 * fVar42 + fVar28 * fVar35 + fVar39 * fVar22 + fVar24 * fVar7;
    fStack_1bc = fVar21 * fVar26 + fVar28 * fVar26 + fVar39 * fVar26 + fVar24 * fRam0000000146b07a1c
    ;
    local_1b8 = fVar33 * fVar30 + fVar40 * fVar18 + fVar23 * fVar43 + fVar24 * fVar5;
    fStack_1b4 = fVar33 * fVar20 + fVar40 * fVar41 + fVar23 * fVar32 + fVar24 * fVar6;
    fStack_1b0 = fVar33 * fVar42 + fVar40 * fVar35 + fVar23 * fVar22 + fVar24 * fVar7;
    fStack_1ac = fVar33 * fVar26 + fVar40 * fVar26 + fVar23 * fVar26 + fVar24 * fRam0000000146b07a1c
    ;
    local_1a8 = fVar34 * fVar30 + fVar37 * fVar18 + fVar31 * fVar43 + fRam0000000146b07a1c * fVar5;
    fStack_1a4 = fVar34 * fVar20 + fVar37 * fVar41 + fVar31 * fVar32 + fRam0000000146b07a1c * fVar6;
    fStack_1a0 = fVar34 * fVar42 + fVar37 * fVar35 + fVar31 * fVar22 + fRam0000000146b07a1c * fVar7;
    fStack_19c = fVar34 * fVar26 + fVar37 * fVar26 + fVar31 * fVar26 +
                 fRam0000000146b07a1c * fRam0000000146b07a1c;
    FMatrix::RemoveScaling(&local_1d8);
    fVar31 = (float)(-(uint)(_DAT_146b07ab0 <= fVar8 * fVar2) & (_DAT_146b07aa0 ^ (uint)fVar11) ^
                    _DAT_146b07aa0);
    fVar34 = (float)(-(uint)(fRam0000000146b07ab4 <= fVar9 * fVar3) &
                     (uRam0000000146b07aa4 ^ (uint)fVar12) ^ uRam0000000146b07aa4);
    fVar37 = (float)(-(uint)(fRam0000000146b07ab8 <= fVar10 * fVar4) &
                     (uRam0000000146b07aa8 ^ (uint)fVar13) ^ uRam0000000146b07aa8);
    local_1d8 = local_1d8 * fVar31;
    fStack_1d4 = fStack_1d4 * fVar31;
    fStack_1d0 = fStack_1d0 * fVar31;
    fStack_1c4 = fStack_1c4 * fVar34;
    fStack_1c0 = fStack_1c0 * fVar34;
    local_1c8 = local_1c8 * fVar34;
    fStack_1b4 = fStack_1b4 * fVar37;
    fStack_1b0 = fStack_1b0 * fVar37;
    local_1b8 = local_1b8 * fVar37;
    FQuat::FQuat(&local_188,&local_1d8);
    auVar19._0_4_ = local_188 * local_188 + fStack_180 * fStack_180;
    auVar19._4_4_ = fStack_184 * fStack_184 + fStack_17c * fStack_17c;
    auVar19._8_4_ = fStack_180 * fStack_180 + local_188 * local_188;
    auVar19._12_4_ = fStack_17c * fStack_17c + fStack_184 * fStack_184;
    auVar1._4_4_ = auVar19._8_4_ + auVar19._4_4_;
    auVar1._0_4_ = auVar19._4_4_ + auVar19._0_4_;
    auVar1._8_4_ = auVar19._12_4_ + auVar19._8_4_;
    auVar1._12_4_ = auVar19._0_4_ + auVar19._12_4_;
    rsqrtps(auVar19,auVar1);
  }
  local_178[0] = &PTR__scalar_deleting_destructor__1440fbd58;
  if (local_128 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1426c9cf0 FUN_1426c9cf0 body=31 status=ok
// SIG undefined FUN_1426c9cf0(void)

void FUN_1426c9cf0(void)

{
  FUN_1426b4190();
  return;
}



// FUNCTION 1426c9d10 FUN_1426c9d10 body=1439 status=ok
// SIG undefined FUN_1426c9d10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1426c9d10(float *param_1,int param_2,longlong *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  float *pfVar10;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar16;
  float fVar17;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar18 [16];
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
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  
  fVar25 = fRam0000000146b07abc;
  fVar24 = fRam0000000146b07ab8;
  fVar23 = fRam0000000146b07ab4;
  fVar22 = _DAT_146b07ab0;
  fVar42 = fRam0000000146b07a1c;
  fVar51 = fRam0000000146b07a18;
  fVar50 = fRam0000000146b07a14;
  fVar49 = _DAT_146b07a10;
  uVar8 = uRam00000001468b5b88;
  uVar7 = _DAT_1468b5b80;
  uVar6 = uRam00000001468b5b78;
  if ((param_2 == -1) || ((int)param_3[1] <= param_2)) {
    *(undefined8 *)param_1 = _DAT_1468b5b70;
    *(undefined8 *)(param_1 + 2) = uVar6;
    uVar6 = uRam00000001468b5b98;
    *(undefined8 *)(param_1 + 8) = _DAT_1468b5b90;
    *(undefined8 *)(param_1 + 10) = uVar6;
    *(undefined8 *)(param_1 + 4) = uVar7;
    *(undefined8 *)(param_1 + 6) = uVar8;
  }
  else {
    auVar11 = *(undefined1 (*) [16])(param_4 + 8);
    fVar32 = auVar11._0_4_;
    fVar34 = auVar11._4_4_;
    fVar1 = auVar11._8_4_;
    fVar3 = auVar11._12_4_;
    pfVar10 = (float *)((longlong)param_2 * 0x30 + *param_3);
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = fVar42;
    fVar13 = (float)((uint)fVar50 & uRam0000000146b07a24);
    fVar14 = (float)((uint)fVar51 & uRam0000000146b07a28);
    fVar15 = (float)((uint)fVar42 & uRam0000000146b07a2c);
    auVar12 = *(undefined1 (*) [16])(pfVar10 + 8);
    fVar33 = auVar12._0_4_;
    fVar35 = auVar12._4_4_;
    fVar2 = auVar12._8_4_;
    fVar4 = auVar12._12_4_;
    param_1[8] = (float)((uint)fVar49 & _DAT_146b07a20);
    param_1[9] = fVar13;
    param_1[10] = fVar14;
    param_1[0xb] = fVar15;
    auVar11 = minps(auVar12,auVar11);
    param_1[4] = 0.0;
    param_1[5] = 0.0;
    param_1[6] = 0.0;
    param_1[7] = 0.0;
    auVar12._4_4_ = -(uint)(auVar11._4_4_ < fVar23);
    auVar12._0_4_ = -(uint)(auVar11._0_4_ < fVar22);
    auVar12._8_4_ = -(uint)(auVar11._8_4_ < fVar24);
    auVar12._12_4_ = -(uint)(auVar11._12_4_ < fVar25);
    iVar9 = movmskps(param_2,auVar12);
    if (iVar9 == 0) {
      fVar49 = *param_4;
      fVar50 = param_4[1];
      fVar51 = param_4[2];
      fVar42 = param_4[3];
      fVar22 = *pfVar10;
      fVar23 = pfVar10[1];
      fVar24 = pfVar10[2];
      fVar25 = pfVar10[3];
      fVar29 = pfVar10[4] * fVar32;
      fVar31 = pfVar10[5] * fVar34;
      fVar36 = pfVar10[6] * fVar1;
      fVar37 = pfVar10[7] * fVar3;
      fVar26 = fVar25 * fVar49 * _DAT_146b07a70;
      fVar20 = fVar24 * fVar49 * fRam0000000146b07a74;
      fVar30 = fVar23 * fVar49 * fRam0000000146b07a78;
      fVar21 = fVar22 * fVar49 * fRam0000000146b07a7c;
      fVar17 = fVar50 * fVar24 * _DAT_146b07a60;
      fVar19 = fVar50 * fVar25 * fRam0000000146b07a64;
      fVar27 = fVar50 * fVar22 * fRam0000000146b07a68;
      fVar28 = fVar50 * fVar23 * fRam0000000146b07a6c;
      fVar13 = fVar51 * fVar23 * _DAT_146b07a50;
      fVar14 = fVar51 * fVar22 * fRam0000000146b07a54;
      fVar15 = fVar51 * fVar25 * fRam0000000146b07a58;
      fVar16 = fVar51 * fVar24 * fRam0000000146b07a5c;
      param_1[8] = fVar33 * fVar32;
      param_1[9] = fVar35 * fVar34;
      param_1[10] = fVar2 * fVar1;
      param_1[0xb] = fVar4 * fVar3;
      *param_1 = fVar26 + fVar42 * fVar22 + fVar17 + fVar13;
      param_1[1] = fVar20 + fVar42 * fVar23 + fVar19 + fVar14;
      param_1[2] = fVar30 + fVar42 * fVar24 + fVar27 + fVar15;
      param_1[3] = fVar21 + fVar42 * fVar25 + fVar28 + fVar16;
      fVar25 = fVar36 * fVar50 - fVar31 * fVar51;
      fVar32 = fVar29 * fVar51 - fVar36 * fVar49;
      fVar33 = fVar31 * fVar49 - fVar29 * fVar50;
      fVar34 = fVar37 * fVar42 - fVar37 * fVar42;
      fVar25 = fVar25 + fVar25;
      fVar32 = fVar32 + fVar32;
      fVar33 = fVar33 + fVar33;
      fVar34 = fVar34 + fVar34;
      fVar22 = param_4[5];
      fVar23 = param_4[6];
      fVar24 = param_4[7];
      param_1[4] = (fVar33 * fVar50 - fVar32 * fVar51) + fVar42 * fVar25 + fVar29 + param_4[4];
      param_1[5] = (fVar25 * fVar51 - fVar33 * fVar49) + fVar42 * fVar32 + fVar31 + fVar22;
      param_1[6] = (fVar32 * fVar49 - fVar25 * fVar50) + fVar42 * fVar33 + fVar36 + fVar23;
      param_1[7] = (fVar34 * fVar42 - fVar34 * fVar42) + fVar42 * fVar34 + fVar37 + fVar24;
    }
    else {
      fVar25 = *param_4;
      fVar13 = param_4[1];
      fVar14 = param_4[2];
      fVar15 = param_4[3];
      fVar26 = fVar13 + fVar13;
      fVar28 = fVar14 + fVar14;
      fVar16 = param_4[4];
      fVar17 = param_4[5];
      fVar19 = param_4[6];
      fVar30 = fVar25 * (fVar25 + fVar25);
      fVar27 = (fVar25 + fVar25) * fVar15;
      fVar46 = (fVar28 * fVar15 + fVar26 * fVar25) * fVar32;
      fVar47 = (fVar27 + fVar28 * fVar13) * fVar34;
      fVar48 = (fVar26 * fVar15 + fVar28 * fVar25) * fVar1;
      fVar36 = fVar34 * (fVar26 * fVar25 - fVar28 * fVar15);
      fVar38 = fVar1 * (fVar28 * fVar13 - fVar27);
      fVar40 = fVar32 * (fVar28 * fVar25 - fVar26 * fVar15);
      fVar27 = (float)((uint)((fVar49 - (fVar14 * fVar28 + fVar13 * fVar26)) * fVar32) &
                      _DAT_146b07a20);
      fVar28 = (float)((uint)((fVar50 - (fVar14 * fVar28 + fVar30)) * fVar34) & uRam0000000146b07a24
                      );
      fVar20 = (float)((uint)((fVar51 - (fVar13 * fVar26 + fVar30)) * fVar1) & uRam0000000146b07a28)
      ;
      fVar21 = (float)((uint)((fVar42 - (fVar30 + fVar30)) * fVar3) & uRam0000000146b07a2c);
      fVar25 = *pfVar10;
      fVar13 = pfVar10[1];
      fVar14 = pfVar10[2];
      fVar15 = pfVar10[3];
      fVar30 = fVar13 + fVar13;
      fVar29 = fVar14 + fVar14;
      fVar31 = fVar25 * (fVar25 + fVar25);
      fVar26 = (fVar25 + fVar25) * fVar15;
      fVar43 = (fVar29 * fVar15 + fVar30 * fVar25) * fVar33;
      fVar44 = (fVar26 + fVar29 * fVar13) * fVar35;
      fVar45 = (fVar30 * fVar15 + fVar29 * fVar25) * fVar2;
      fVar37 = fVar35 * (fVar30 * fVar25 - fVar29 * fVar15);
      fVar39 = fVar2 * (fVar29 * fVar13 - fVar26);
      fVar41 = fVar33 * (fVar29 * fVar25 - fVar30 * fVar15);
      fVar15 = (float)((uint)((fVar49 - (fVar14 * fVar29 + fVar13 * fVar30)) * fVar33) &
                      _DAT_146b07a20);
      fVar26 = (float)((uint)((fVar50 - (fVar14 * fVar29 + fVar31)) * fVar35) & uRam0000000146b07a24
                      );
      fVar30 = (float)((uint)((fVar51 - (fVar13 * fVar30 + fVar31)) * fVar2) & uRam0000000146b07a28)
      ;
      fVar29 = (float)((uint)((fVar42 - (fVar31 + fVar31)) * fVar4) & uRam0000000146b07a2c);
      fVar25 = pfVar10[4];
      fVar13 = pfVar10[5];
      fVar14 = pfVar10[6];
      local_d8 = fVar43 * fVar36 + fVar15 * fVar27 + fVar41 * fVar48 + fVar29 * fVar16;
      fStack_d4 = fVar43 * fVar28 + fVar15 * fVar46 + fVar41 * fVar38 + fVar29 * fVar17;
      fStack_d0 = fVar43 * fVar47 + fVar15 * fVar40 + fVar41 * fVar20 + fVar29 * fVar19;
      fStack_cc = fVar43 * fVar21 + fVar15 * fVar21 + fVar41 * fVar21 + fVar29 * fVar42;
      local_c8 = fVar26 * fVar36 + fVar37 * fVar27 + fVar44 * fVar48 + fVar29 * fVar16;
      fStack_c4 = fVar26 * fVar28 + fVar37 * fVar46 + fVar44 * fVar38 + fVar29 * fVar17;
      fStack_c0 = fVar26 * fVar47 + fVar37 * fVar40 + fVar44 * fVar20 + fVar29 * fVar19;
      fStack_bc = fVar26 * fVar21 + fVar37 * fVar21 + fVar44 * fVar21 + fVar29 * fVar42;
      local_b8 = fVar39 * fVar36 + fVar45 * fVar27 + fVar30 * fVar48 + fVar29 * fVar16;
      fStack_b4 = fVar39 * fVar28 + fVar45 * fVar46 + fVar30 * fVar38 + fVar29 * fVar17;
      fStack_b0 = fVar39 * fVar47 + fVar45 * fVar40 + fVar30 * fVar20 + fVar29 * fVar19;
      fStack_ac = fVar39 * fVar21 + fVar45 * fVar21 + fVar30 * fVar21 + fVar29 * fVar42;
      local_a8 = fVar13 * fVar36 + fVar25 * fVar27 + fVar14 * fVar48 + fVar42 * fVar16;
      fStack_a4 = fVar13 * fVar28 + fVar25 * fVar46 + fVar14 * fVar38 + fVar42 * fVar17;
      fStack_a0 = fVar13 * fVar47 + fVar25 * fVar40 + fVar14 * fVar20 + fVar42 * fVar19;
      fStack_9c = fVar13 * fVar21 + fVar25 * fVar21 + fVar14 * fVar21 + fVar42 * fVar42;
      FMatrix::RemoveScaling(&local_d8);
      fVar49 = (float)(-(uint)(fVar22 <= fVar32 * fVar33) & (_DAT_146b07aa0 ^ (uint)fVar49) ^
                      _DAT_146b07aa0);
      fVar50 = (float)(-(uint)(fVar23 <= fVar34 * fVar35) & (uRam0000000146b07aa4 ^ (uint)fVar50) ^
                      uRam0000000146b07aa4);
      fVar51 = (float)(-(uint)(fVar24 <= fVar1 * fVar2) & (uRam0000000146b07aa8 ^ (uint)fVar51) ^
                      uRam0000000146b07aa8);
      local_d8 = local_d8 * fVar49;
      fStack_d4 = fStack_d4 * fVar49;
      fStack_d0 = fStack_d0 * fVar49;
      fStack_c4 = fStack_c4 * fVar50;
      fStack_c0 = fStack_c0 * fVar50;
      local_c8 = local_c8 * fVar50;
      fStack_b4 = fStack_b4 * fVar51;
      fStack_b0 = fStack_b0 * fVar51;
      local_b8 = local_b8 * fVar51;
      FQuat::FQuat(&local_e8,&local_d8);
      fVar42 = fRam0000000146b07a9c;
      fVar51 = fRam0000000146b07a98;
      fVar50 = fRam0000000146b07a94;
      fVar49 = _DAT_146b07a90;
      param_1[8] = fVar32 * fVar33;
      param_1[9] = fVar34 * fVar35;
      param_1[10] = fVar1 * fVar2;
      param_1[0xb] = fVar3 * fVar4;
      auVar18._0_4_ = local_e8 * local_e8 + fStack_e0 * fStack_e0;
      auVar18._4_4_ = fStack_e4 * fStack_e4 + fStack_dc * fStack_dc;
      auVar18._8_4_ = fStack_e0 * fStack_e0 + local_e8 * local_e8;
      auVar18._12_4_ = fStack_dc * fStack_dc + fStack_e4 * fStack_e4;
      fVar32 = auVar18._4_4_ + auVar18._0_4_;
      fVar33 = auVar18._8_4_ + auVar18._4_4_;
      fVar34 = auVar18._12_4_ + auVar18._8_4_;
      fVar35 = auVar18._0_4_ + auVar18._12_4_;
      auVar5._4_4_ = fVar33;
      auVar5._0_4_ = fVar32;
      auVar5._8_4_ = fVar34;
      auVar5._12_4_ = fVar35;
      auVar11 = rsqrtps(auVar18,auVar5);
      fVar22 = auVar11._0_4_;
      fVar23 = auVar11._4_4_;
      fVar24 = auVar11._8_4_;
      fVar25 = auVar11._12_4_;
      fVar22 = (fVar49 - fVar22 * fVar22 * fVar32 * fVar49) * fVar22 + fVar22;
      fVar23 = (fVar50 - fVar23 * fVar23 * fVar33 * fVar50) * fVar23 + fVar23;
      fVar24 = (fVar51 - fVar24 * fVar24 * fVar34 * fVar51) * fVar24 + fVar24;
      fVar25 = (fVar42 - fVar25 * fVar25 * fVar35 * fVar42) * fVar25 + fVar25;
      auVar11._4_4_ = fStack_a4;
      auVar11._0_4_ = local_a8;
      auVar11._8_4_ = fStack_a0;
      fVar49 = (float)(((uint)(((fVar49 - fVar22 * fVar22 * fVar32 * fVar49) * fVar22 + fVar22) *
                              local_e8) ^ _DAT_146b07a80) & -(uint)(1e-08 <= fVar32) ^
                      _DAT_146b07a80);
      fVar50 = (float)(((uint)(((fVar50 - fVar23 * fVar23 * fVar33 * fVar50) * fVar23 + fVar23) *
                              fStack_e4) ^ uRam0000000146b07a84) & -(uint)(1e-08 <= fVar33) ^
                      uRam0000000146b07a84);
      fVar51 = (float)(((uint)(((fVar51 - fVar24 * fVar24 * fVar34 * fVar51) * fVar24 + fVar24) *
                              fStack_e0) ^ uRam0000000146b07a88) & -(uint)(1e-08 <= fVar34) ^
                      uRam0000000146b07a88);
      fVar42 = (float)(((uint)(((fVar42 - fVar25 * fVar25 * fVar35 * fVar42) * fVar25 + fVar25) *
                              fStack_dc) ^ uRam0000000146b07a8c) & -(uint)(1e-08 <= fVar35) ^
                      uRam0000000146b07a8c);
      auVar11._12_4_ = 0;
      *(undefined1 (*) [16])(param_1 + 4) = auVar11;
      *param_1 = fVar49;
      param_1[1] = fVar50;
      param_1[2] = fVar51;
      param_1[3] = fVar42;
    }
  }
  return param_1;
}



// FUNCTION 1426ca2b0 FUN_1426ca2b0 body=1142 status=ok
// SIG undefined FUN_1426ca2b0(void)

float FUN_1426ca2b0(longlong *param_1,float *param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  longlong *local_48;
  int local_40;
  undefined4 local_3c;
  
  fVar14 = 0.0;
  plVar7 = (longlong *)0x0;
  plVar10 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_3c = 0;
  plVar8 = plVar7;
  iVar9 = 0;
  plVar11 = plVar7;
  if (param_3 != 0) {
    lVar2 = FUN_142a0cc80();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    iVar9 = 0;
    plVar11 = plVar10;
    if ((bVar1) && (&local_48 != (longlong **)(param_3 + 0x920))) {
      local_40 = *(int *)(param_3 + 0x928);
      lVar2 = (longlong)local_40;
      plVar10 = *(longlong **)(param_3 + 0x920);
      iVar9 = local_40;
      if (local_40 != 0) {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_48,local_40,0);
        plVar11 = local_48;
        _guard_xfg_dispatch_icall_nop(local_48,plVar10,lVar2 << 3);
        iVar9 = local_40;
      }
    }
  }
LAB_1426ca390:
  while( true ) {
    iVar5 = (int)plVar8;
    if ((iVar5 < 0) || ((int)param_1[1] <= iVar5)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    plVar8 = plVar7;
    if (!bVar1) break;
    lVar2 = *param_1;
    lVar6 = (longlong)iVar5 * 0xb0;
    plVar10 = *(longlong **)(lVar6 + 0x50 + lVar2);
    plVar8 = plVar10 + *(int *)(lVar6 + 0x58 + lVar2);
    plVar4 = plVar10;
    while( true ) {
      if (plVar4 == plVar8) goto LAB_1426ca3e2;
      if (*plVar4 != 0) break;
      plVar4 = plVar4 + 1;
    }
    plVar4 = plVar11;
    if (plVar11 == plVar11 + iVar9) goto LAB_1426ca418;
    do {
      if (plVar10 != plVar8) {
        plVar3 = plVar10;
        do {
          if (*plVar3 == *plVar4) goto LAB_1426ca3e2;
          plVar3 = plVar3 + 1;
        } while (plVar3 != plVar8);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar11 + iVar9);
    plVar8 = (longlong *)(ulonglong)(iVar5 + 1);
  }
LAB_1426ca462:
  while( true ) {
    iVar5 = (int)plVar8;
    if ((iVar5 < 0) || ((int)param_1[3] <= iVar5)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    plVar8 = plVar7;
    if (!bVar1) break;
    lVar2 = param_1[2];
    lVar6 = (longlong)iVar5 * 0xe0;
    plVar10 = *(longlong **)(lVar6 + 0x50 + lVar2);
    plVar8 = plVar10 + *(int *)(lVar6 + 0x58 + lVar2);
    plVar4 = plVar10;
    while( true ) {
      if (plVar4 == plVar8) goto LAB_1426ca4b5;
      if (*plVar4 != 0) break;
      plVar4 = plVar4 + 1;
    }
    plVar4 = plVar11;
    if (plVar11 == plVar11 + iVar9) goto LAB_1426ca4fc;
    do {
      if (plVar10 != plVar8) {
        plVar3 = plVar10;
        do {
          if (*plVar3 == *plVar4) goto LAB_1426ca4b5;
          plVar3 = plVar3 + 1;
        } while (plVar3 != plVar8);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar11 + iVar9);
    plVar8 = (longlong *)(ulonglong)(iVar5 + 1);
  }
LAB_1426ca552:
  while( true ) {
    iVar5 = (int)plVar8;
    if ((iVar5 < 0) || ((int)param_1[5] <= iVar5)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    lVar2 = param_1[4];
    lVar6 = (longlong)iVar5 * 0xd0;
    plVar10 = *(longlong **)(lVar6 + 0x50 + lVar2);
    plVar8 = plVar10 + *(int *)(lVar6 + 0x58 + lVar2);
    plVar4 = plVar10;
    while( true ) {
      if (plVar4 == plVar8) goto LAB_1426ca5a5;
      if (*plVar4 != 0) break;
      plVar4 = plVar4 + 1;
    }
    plVar4 = plVar11;
    if (plVar11 == plVar11 + iVar9) goto LAB_1426ca5ef;
    do {
      if (plVar10 != plVar8) {
        plVar3 = plVar10;
        do {
          if (*plVar3 == *plVar4) goto LAB_1426ca5a5;
          plVar3 = plVar3 + 1;
        } while (plVar3 != plVar8);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar11 + iVar9);
    plVar8 = (longlong *)(ulonglong)(iVar5 + 1);
  }
LAB_1426ca638:
  do {
    iVar5 = (int)plVar7;
    if ((iVar5 < 0) || ((int)param_1[7] <= iVar5)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      if (plVar11 != (longlong *)0x0) {
        FMemory::Free(plVar11);
      }
      return fVar14;
    }
    lVar2 = (longlong)iVar5 * 0xd0 + param_1[6];
    plVar7 = *(longlong **)(lVar2 + 0x50);
    plVar8 = plVar7 + *(int *)(lVar2 + 0x58);
    for (plVar10 = plVar7; plVar10 != plVar8; plVar10 = plVar10 + 1) {
      if (*plVar10 != 0) {
        plVar10 = plVar11;
        if (plVar11 != plVar11 + iVar9) goto LAB_1426ca6c0;
        goto LAB_1426ca6a8;
      }
    }
LAB_1426ca68e:
    if ((byte)(*(char *)(lVar2 + 0x30) - 2U) < 2) {
      fVar12 = (float)FUN_1426ca730(lVar2,param_2);
      fVar14 = fVar14 + fVar12;
    }
LAB_1426ca6a8:
    plVar7 = (longlong *)(ulonglong)(iVar5 + 1);
  } while( true );
LAB_1426ca6c0:
  do {
    if (plVar7 != plVar8) {
      plVar4 = plVar7;
      do {
        if (*plVar4 == *plVar10) goto LAB_1426ca68e;
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar8);
    }
    plVar10 = plVar10 + 1;
  } while (plVar10 != plVar11 + iVar9);
  plVar7 = (longlong *)(ulonglong)(iVar5 + 1);
  goto LAB_1426ca638;
LAB_1426ca5a5:
  if ((byte)(*(char *)(lVar6 + 0x30 + lVar2) - 2U) < 2) {
    fVar12 = *param_2;
    if (param_2[1] <= *param_2) {
      fVar12 = param_2[1];
    }
    if (param_2[2] <= fVar12) {
      fVar12 = param_2[2];
    }
    fVar13 = fVar12 * *(float *)(lVar6 + 200 + lVar2);
    fVar14 = fVar14 + (fVar12 * *(float *)(lVar6 + 0xcc + lVar2) + fVar13 * 1.3333) *
                      fVar13 * fVar13 * 3.1415927;
  }
LAB_1426ca5ef:
  plVar8 = (longlong *)(ulonglong)(iVar5 + 1);
  goto LAB_1426ca552;
LAB_1426ca4b5:
  if ((byte)(*(char *)(lVar6 + 0x30 + lVar2) - 2U) < 2) {
    fVar12 = *param_2;
    if (param_2[1] <= *param_2) {
      fVar12 = param_2[1];
    }
    if (param_2[2] <= fVar12) {
      fVar12 = param_2[2];
    }
    fVar14 = fVar14 + fVar12 * *(float *)(lVar6 + 0xcc + lVar2) *
                      fVar12 * *(float *)(lVar6 + 200 + lVar2) *
                      fVar12 * *(float *)(lVar6 + 0xd0 + lVar2);
  }
LAB_1426ca4fc:
  plVar8 = (longlong *)(ulonglong)(iVar5 + 1);
  goto LAB_1426ca462;
LAB_1426ca3e2:
  if ((byte)(*(char *)(lVar6 + 0x30 + lVar2) - 2U) < 2) {
    fVar12 = *param_2;
    if (param_2[1] <= *param_2) {
      fVar12 = param_2[1];
    }
    if (param_2[2] <= fVar12) {
      fVar12 = param_2[2];
    }
    fVar12 = fVar12 * *(float *)(lVar6 + 0xac + lVar2);
    fVar14 = fVar14 + fVar12 * fVar12 * fVar12 * 4.1886854;
  }
LAB_1426ca418:
  plVar8 = (longlong *)(ulonglong)(iVar5 + 1);
  goto LAB_1426ca390;
}



// FUNCTION 1426ca730 FUN_1426ca730 body=1069 status=ok
// SIG undefined FUN_1426ca730(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float FUN_1426ca730(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  byte *pbVar10;
  int iVar11;
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
  undefined1 auStack_128 [32];
  float local_108;
  undefined1 local_f8 [8];
  float fStack_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined1 local_d8 [16];
  ushort local_c8;
  ushort local_c6;
  ulonglong local_c0;
  
  fVar34 = DAT_1464aa81c;
  fVar33 = DAT_1464aa818;
  fVar32 = DAT_1464aa814;
  fVar31 = DAT_1464aa810;
  local_c0 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  fVar21 = 0.0;
  local_108 = 0.0;
  if (*(longlong **)(param_1 + 0xc0) == (longlong *)0x0) {
    fVar21 = 0.0;
  }
  else {
    fVar1 = param_2[2];
    fVar2 = param_2[1];
    fVar3 = *param_2;
    local_e8 = DAT_1464aa810;
    fStack_e4 = DAT_1464aa814;
    fStack_e0 = DAT_1464aa818;
    fStack_dc = DAT_1464aa81c;
    local_f8._4_4_ = DAT_1468b5d94;
    local_f8._0_4_ = DAT_1468b5d90;
    fStack_f0 = (float)DAT_1468b5d98;
    unique0x10000030 = 0;
    iVar5 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x40))();
    lVar6 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x30))();
    lVar7 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x38))();
    iVar11 = 0;
    if (iVar5 < 1) {
      fVar21 = 0.0;
    }
    else {
      do {
        cVar4 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x48))
                          (*(longlong **)(param_1 + 0xc0),iVar11,local_d8);
        fVar13 = fVar31;
        fVar14 = fVar32;
        fVar15 = fVar33;
        fVar17 = fVar34;
        if ((cVar4 != '\0') && (2 < local_c8)) {
          uVar8 = (ulonglong)*(byte *)((ulonglong)local_c6 + lVar7);
          pbVar10 = (byte *)((ulonglong)local_c6 + 2 + lVar7);
          uVar12 = (ulonglong)(local_c8 - 2);
          fVar25 = *(float *)(lVar6 + uVar8 * 0xc) * fVar3;
          fVar26 = *(float *)(lVar6 + 4 + uVar8 * 0xc) * fVar2;
          fVar27 = *(float *)(lVar6 + 8 + uVar8 * 0xc) * fVar1;
          fVar28 = fVar27 * fVar32 - fVar26 * fVar33;
          fVar29 = fVar25 * fVar33 - fVar27 * fVar31;
          fVar30 = fVar26 * fVar31 - fVar25 * fVar32;
          do {
            uVar8 = (ulonglong)*pbVar10;
            uVar9 = (ulonglong)pbVar10[-1];
            fVar15 = *(float *)(lVar6 + uVar8 * 0xc) * fVar3;
            fVar17 = *(float *)(lVar6 + 4 + uVar8 * 0xc) * fVar2;
            fVar19 = *(float *)(lVar6 + 8 + uVar8 * 0xc) * fVar1;
            fVar21 = fVar19 * fVar32 - fVar17 * fVar33;
            fVar13 = fVar15 * fVar33 - fVar19 * fVar31;
            fVar14 = fVar17 * fVar31 - fVar15 * fVar32;
            fVar21 = fVar21 + fVar21;
            fVar13 = fVar13 + fVar13;
            fVar14 = fVar14 + fVar14;
            fVar16 = *(float *)(lVar6 + uVar9 * 0xc) * fVar3;
            fVar18 = *(float *)(lVar6 + 4 + uVar9 * 0xc) * fVar2;
            fVar20 = *(float *)(lVar6 + 8 + uVar9 * 0xc) * fVar1;
            fVar22 = (fVar14 * fVar32 - fVar13 * fVar33) + fVar34 * fVar21 + fVar15 +
                     (float)local_f8._0_4_;
            fVar23 = (fVar21 * fVar33 - fVar14 * fVar31) + fVar34 * fVar13 + fVar17 +
                     (float)local_f8._4_4_;
            fVar24 = (fVar13 * fVar31 - fVar21 * fVar32) + fVar34 * fVar14 + fVar19 + fStack_f0;
            fVar21 = fVar20 * fVar32 - fVar18 * fVar33;
            fVar14 = fVar16 * fVar33 - fVar20 * fVar31;
            fVar17 = fVar18 * fVar31 - fVar16 * fVar32;
            fVar21 = fVar21 + fVar21;
            fVar14 = fVar14 + fVar14;
            fVar17 = fVar17 + fVar17;
            fVar13 = fVar28 + fVar28;
            fVar15 = fVar29 + fVar29;
            fVar19 = fVar30 + fVar30;
            fVar16 = (fVar17 * fVar32 - fVar14 * fVar33) + fVar34 * fVar21 + fVar16 +
                     (float)local_f8._0_4_;
            fVar18 = (fVar21 * fVar33 - fVar17 * fVar31) + fVar34 * fVar14 + fVar18 +
                     (float)local_f8._4_4_;
            fVar21 = (fVar14 * fVar31 - fVar21 * fVar32) + fVar34 * fVar17 + fVar20 + fStack_f0;
            pbVar10 = pbVar10 + 1;
            fVar21 = local_108 +
                     (fVar21 * fVar22 - fVar16 * fVar24) *
                     ((fVar13 * fVar33 - fVar19 * fVar31) + fVar15 * fVar34 + fVar26 +
                     (float)local_f8._4_4_) * 0.16666667 +
                     (fVar18 * fVar24 - fVar21 * fVar23) *
                     ((fVar19 * fVar32 - fVar15 * fVar33) + fVar13 * fVar34 + fVar25 +
                     (float)local_f8._0_4_) * 0.16666667 +
                     (fVar16 * fVar23 - fVar18 * fVar22) *
                     ((fVar15 * fVar31 - fVar13 * fVar32) + fVar19 * fVar34 + fVar27 + fStack_f0) *
                     0.16666667;
            uVar12 = uVar12 - 1;
            fVar13 = local_e8;
            fVar14 = fStack_e4;
            fVar15 = fStack_e0;
            fVar17 = fStack_dc;
            local_108 = fVar21;
          } while (uVar12 != 0);
        }
        iVar11 = iVar11 + 1;
        fVar31 = fVar13;
        fVar32 = fVar14;
        fVar33 = fVar15;
        fVar34 = fVar17;
      } while (iVar11 < iVar5);
    }
  }
  return fVar21;
}



// FUNCTION 1426cab70 FUN_1426cab70 body=299 status=ok
// SIG undefined FUN_1426cab70(void)

void FUN_1426cab70(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(longlong *)(param_1 + 0x180) == 0) {
    return;
  }
  uStack_10 = 0;
  local_18 = &LAB_1426cb410;
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar1 + 1,param_1);
    *(undefined4 *)(plVar1 + 2) = (undefined4)local_18;
    *(undefined4 *)((longlong)plVar1 + 0x14) = local_18._4_4_;
    *(undefined4 *)(plVar1 + 3) = uStack_10;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uStack_c;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[5] = lVar2;
    *plVar1 = (longlong)&PTR_FUN_143f77bd0;
  }
  puVar3 = (undefined8 *)
           USkeletalMeshComponent::RegisterOnPhysicsCreatedDelegate
                     (*(undefined8 *)(param_1 + 0x180),local_res8,&local_28);
  *(undefined8 *)(param_1 + 0x1a8) = *puVar3;
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) goto LAB_1426cac74;
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
LAB_1426cac74:
  FTickFunction::AddPrerequisite
            (param_1 + 0x30,*(longlong *)(param_1 + 0x180),*(longlong *)(param_1 + 0x180) + 0x30);
  FUN_1426cfd50(param_1);
  return;
}



// FUNCTION 1426caca0 FUN_1426caca0 body=338 status=ok
// SIG undefined FUN_1426caca0(void)

void FUN_1426caca0(undefined8 param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined4 uVar5;
  undefined8 local_48;
  undefined4 local_40;
  
  plVar3 = (longlong *)0x0;
  local_res18 = 0;
  local_res10 = 0;
  iVar4 = -1;
  iVar2 = iVar4;
  if (param_2 != 0) {
    iVar2 = FUN_1426982f0(param_2,0xffffffff);
  }
  if (param_3 != 0) {
    iVar4 = FUN_1426982f0(param_3,0xffffffff);
  }
  if (iVar2 < 0) {
    if (-1 < iVar4) goto LAB_1426cad15;
  }
  else {
    if ((-1 < iVar4) && (iVar2 != iVar4)) goto LAB_1426cadc7;
LAB_1426cad15:
    if (-1 < iVar2) {
      iVar4 = iVar2;
    }
    plVar3 = (longlong *)FUN_1426e2550(iVar4);
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x358))
              (plVar3,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ConstraintInstance.cpp"
               ,0x263);
  }
  cVar1 = FUN_1426c84a0(param_2,param_3,&local_res18,&local_res10,param_5);
  uVar5 = (undefined4)((ulonglong)param_5 >> 0x20);
  if (cVar1 != '\0') {
    local_48 = 0;
    local_40 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_48,param_6);
    FUN_1426cae00(param_1,local_res18,local_res10,plVar3,CONCAT44(uVar5,param_4),&local_48);
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x360))(plVar3);
  }
LAB_1426cadc7:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_6);
  return;
}



// FUNCTION 1426cae00 FUN_1426cae00 body=1002 status=ok
// SIG undefined FUN_1426cae00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1426cae00(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  undefined4 param_5,undefined8 param_6)

{
  short sVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  longlong *plVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  longlong lStack_108;
  undefined1 local_f0 [40];
  undefined1 local_c8 [16];
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined1 local_98 [16];
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_118 = param_6;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x1a8,param_6);
  *(undefined4 *)(param_1 + 0x1a0) = param_5;
  local_110 = 4;
  *(undefined8 *)(param_1 + 400) = CONCAT44(uStack_10c,4);
  *(longlong *)(param_1 + 0x198) = param_1;
  lStack_108 = param_1;
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1426ce340(param_1);
  }
  plVar12 = (longlong *)0x0;
  *(undefined8 *)(param_1 + 8) = 0;
  FConstraintInstance::GetRefFrame(param_1,local_c8,0);
  fVar15 = 0.0;
  if (param_2 != (longlong *)0x0) {
    fVar13 = *(float *)(param_1 + 0x1a0);
    local_b8 = local_b8 * fVar13;
    fStack_b4 = fStack_b4 * fVar13;
    fStack_b0 = fStack_b0 * fVar13;
    fStack_ac = fStack_ac * 0.0;
  }
  FConstraintInstance::GetRefFrame(param_1,local_98,1);
  if (param_3 != (longlong *)0x0) {
    fVar13 = *(float *)(param_1 + 0x1a0);
    local_88 = local_88 * fVar13;
    fStack_84 = fStack_84 * fVar13;
    fStack_80 = fStack_80 * fVar13;
    fStack_7c = fStack_7c * 0.0;
  }
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 0x358))
              (param_4,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ConstraintInstance.cpp"
               ,0x1ea);
  }
  uVar6 = U2PTransform(&local_110,local_c8);
  uVar7 = U2PTransform(local_f0,local_98);
  local_128 = uVar6;
  lVar8 = physx::PxD6JointCreate(DAT_146b08400,param_3,uVar7,param_2);
  if (lVar8 == 0) {
    if (param_4 == (longlong *)0x0) goto LAB_1426cb1b4;
LAB_1426caf9a:
    (**(code **)(*param_4 + 0x360))(param_4);
  }
  else {
    *(undefined8 **)(lVar8 + 0x10) = (undefined8 *)(param_1 + 400);
    if (param_4 != (longlong *)0x0) {
      piVar2 = (int *)param_4[1];
      plVar10 = plVar12;
      if ((piVar2 != (int *)0x0) && (*piVar2 == 3)) {
        plVar10 = *(longlong **)(piVar2 + 2);
      }
      plVar9 = (longlong *)FUN_1426e2530(plVar10,0);
      if (plVar9 == param_4) {
        sVar1 = (short)plVar10[0xc];
      }
      else {
        plVar9 = (longlong *)FUN_1426e2530(plVar10,2);
        if (plVar9 != param_4) goto LAB_1426caf9a;
        sVar1 = *(short *)((longlong)plVar10 + 100);
      }
      *(int *)(param_1 + 0x10) = (int)sVar1;
    }
    *(longlong *)(param_1 + 8) = lVar8;
    if (param_4 != (longlong *)0x0) {
      (**(code **)(*param_4 + 0x360))(param_4);
    }
    iVar11 = 0;
    if (param_2 != (longlong *)0x0) {
      cVar5 = (**(code **)(*param_2 + 0x20))(param_2,"PxRigidBody");
      plVar10 = plVar12;
      if (cVar5 != '\0') {
        plVar10 = param_2;
      }
      iVar11 = 0;
      if (plVar10 != (longlong *)0x0) {
        cVar5 = (**(code **)(*param_2 + 0x20))(param_2,"PxRigidBody");
        plVar10 = plVar12;
        if (cVar5 != '\0') {
          plVar10 = param_2;
        }
        fVar15 = (float)(**(code **)(*plVar10 + 0x100))();
        iVar11 = 1;
      }
    }
    if (param_3 != (longlong *)0x0) {
      cVar5 = (**(code **)(*param_3 + 0x20))(param_3,"PxRigidBody");
      plVar10 = plVar12;
      if (cVar5 != '\0') {
        plVar10 = param_3;
      }
      if (plVar10 != (longlong *)0x0) {
        cVar5 = (**(code **)(*param_3 + 0x20))(param_3,"PxRigidBody");
        plVar10 = plVar12;
        if (cVar5 != '\0') {
          plVar10 = param_3;
        }
        fVar13 = (float)(**(code **)(*plVar10 + 0x100))();
        fVar15 = fVar15 + fVar13;
        iVar11 = iVar11 + 1;
      }
    }
    *(float *)(param_1 + 0x88) = fVar15 / (float)iVar11;
    if ((*(byte *)(param_1 + 0x84) & 1) == 0) {
      uVar14 = 0x3f800000;
    }
    else {
      uVar14 = *(undefined4 *)(param_1 + 0x1a0);
    }
    FConstraintProfileProperties::UpdatePhysX_AssumesLocked
              (param_1 + 0x8c,*(undefined8 *)(param_1 + 8),fVar15 / (float)iVar11,uVar14);
    if (param_4 != (longlong *)0x0) {
      plVar10 = plVar12;
      if ((param_2 != (longlong *)0x0) && ((short)param_2[1] == 6)) {
        plVar10 = param_2;
      }
      if ((param_3 != (longlong *)0x0) && ((short)param_3[1] == 6)) {
        plVar12 = param_3;
      }
      if ((plVar10 == (longlong *)0x0) ||
         ((lVar8 = (**(code **)(*plVar10 + 0x30))(plVar10), lVar8 != 0 &&
          (cVar5 = (**(code **)(*plVar10 + 0x1f0))(plVar10), cVar5 != '\0')))) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if ((plVar12 == (longlong *)0x0) ||
         ((lVar8 = (**(code **)(*plVar12 + 0x30))(plVar12), lVar8 != 0 &&
          (cVar5 = (**(code **)(*plVar12 + 0x1f0))(plVar12), cVar5 != '\0')))) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if ((bVar3) && (bVar4)) {
        if ((param_2 != (longlong *)0x0) &&
           ((cVar5 = IsRigidBodyKinematic_AssumesLocked(plVar10), cVar5 == '\0' &&
            (plVar10 != (longlong *)0x0)))) {
          (**(code **)(*plVar10 + 0x248))(plVar10);
        }
        if (((param_3 != (longlong *)0x0) &&
            (cVar5 = IsRigidBodyKinematic_AssumesLocked(plVar12), cVar5 == '\0')) &&
           (plVar12 != (longlong *)0x0)) {
          (**(code **)(*plVar12 + 0x248))(plVar12);
        }
      }
    }
  }
LAB_1426cb1b4:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_118);
  return;
}



// FUNCTION 1426cb1f0 FUN_1426cb1f0 body=27 status=ok
// SIG undefined FUN_1426cb1f0(void)

void FUN_1426cb1f0(undefined8 param_1)

{
  FUN_142340f20();
  FUN_1426cab70(param_1);
  return;
}



// FUNCTION 1426cb210 FUN_1426cb210 body=66 status=ok
// SIG undefined FUN_1426cb210(void)

void FUN_1426cb210(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 local_18 [16];
  
  FUN_1426bada0();
  puVar4 = (undefined4 *)FGuid::NewGuid(local_18);
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *(undefined4 *)(param_1 + 0xf0) = *puVar4;
  *(undefined4 *)(param_1 + 0xf4) = uVar1;
  *(undefined4 *)(param_1 + 0xf8) = uVar2;
  *(undefined4 *)(param_1 + 0xfc) = uVar3;
  if ((*(byte *)(param_1 + 0x99) & 0x20) == 0) {
    FFormatContainer::FlushData(param_1 + 0xd8);
    return;
  }
  return;
}



// FUNCTION 1426cb260 FUN_1426cb260 body=147 status=ok
// SIG undefined FUN_1426cb260(void)

undefined8 FUN_1426cb260(longlong param_1)

{
  longlong *plVar1;
  byte *pbVar2;
  undefined1 local_res8 [8];
  
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0xe0))();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x348))
                (plVar1,
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ConstraintInstance.cpp"
                 ,0x3a1);
    }
    pbVar2 = (byte *)(**(code **)(**(longlong **)(param_1 + 8) + 0x80))
                               (*(longlong **)(param_1 + 8),local_res8);
    if ((*pbVar2 & 1) != 0) {
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x350))(plVar1);
      }
      return 1;
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x350))(plVar1);
    }
  }
  return 0;
}



// FUNCTION 1426cb300 FUN_1426cb300 body=122 status=ok
// SIG undefined FUN_1426cb300(void)

undefined8 FUN_1426cb300(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar4 = FUN_1428e7a40();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar4 = *(longlong *)(lVar1 + 0x120);
      if ((lVar4 == 0) && (lVar4 = FUN_1423407b0(lVar1), lVar4 == 0)) {
        return 0;
      }
      cVar3 = UWorld::IsGameWorld(lVar4);
      if (cVar3 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1426cb380 IsRuntimeCookingEnabled body=60 status=ok
// SIG undefined IsRuntimeCookingEnabled(void)

bool IsRuntimeCookingEnabled(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_res8 [32];
  
  puVar2 = (undefined8 *)FName::FName(local_res8,"RuntimePhysXCooking",1);
  uVar1 = *puVar2;
  uVar3 = FUN_14168dc80();
  lVar4 = FUN_141690010(uVar3,uVar1);
  return lVar4 != 0;
}



// FUNCTION 1426cb3c0 IsTerminated body=9 status=ok
// SIG undefined IsTerminated(void)

bool FConstraintInstance::IsTerminated(longlong param_1)

{
  return *(longlong *)(param_1 + 8) == 0;
}



// FUNCTION 1426cb3d0 ToString body=59 status=ok
// SIG undefined ToString(void)

wchar_t * EDemoPlayFailure::ToString(int param_1)

{
  if (param_1 == 0) {
    return L"CTF_UseDefault";
  }
  if (param_1 == 1) {
    return L"CTF_UseSimpleAndComplex";
  }
  if (param_1 == 2) {
    return L"CTF_UseSimpleAsComplex";
  }
  if (param_1 != 3) {
    return L"<Unknown ECollisionTraceFlag>";
  }
  return L"CTF_UseComplexAsSimple";
}



// FUNCTION 1426cb420 FUN_1426cb420 body=3445 status=ok
// SIG undefined FUN_1426cb420(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1426cb420(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  uint *puVar2;
  float *pfVar3;
  undefined8 *puVar4;
  float *pfVar5;
  ushort uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  char cVar10;
  undefined4 uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  float *pfVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar20;
  ulonglong uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar29;
  float fVar30;
  undefined1 auVar25 [16];
  float fVar31;
  float fVar32;
  undefined1 auVar26 [16];
  float fVar33;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  uint uVar41;
  float fVar42;
  uint uVar43;
  uint uVar44;
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
  undefined1 auStack_278 [32];
  longlong *local_258;
  undefined **local_250;
  char local_248 [8];
  float local_240;
  void *local_238;
  int local_230;
  undefined4 local_22c;
  undefined8 local_228;
  float fStack_220;
  float fStack_21c;
  undefined *local_218;
  char *pcStack_210;
  undefined8 *local_208;
  undefined8 local_200;
  longlong local_1f8;
  char local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  longlong *local_1c8;
  longlong *local_1c0;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
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
  longlong local_178;
  longlong lStack_170;
  longlong local_168;
  longlong lStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  longlong local_148;
  longlong lStack_140;
  longlong local_138;
  longlong lStack_130;
  undefined8 local_128;
  longlong lStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [8];
  ulonglong uStack_f0;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  local_1c8 = param_2;
  local_1e0 = FUN_1423af5a0();
  if (((int)param_1[((longlong)(int)param_1[0xee] + 0x73) * 2] != 0) &&
     ((param_1[0x24] != 0 || (lVar13 = FUN_1423407b0(param_1), lVar13 != 0)))) {
    lVar13 = param_1[0x24];
    if (lVar13 == 0) {
      lVar13 = FUN_1423407b0(param_1);
    }
    lVar13 = *(longlong *)(lVar13 + 0x218);
    if (lVar13 != 0) {
      pcStack_210 = local_248;
      local_218 = &DAT_14060d670;
      local_1d8 = &DAT_14060d670;
      local_248[0] = '\0';
      uStack_1d0 = pcStack_210;
      lVar14 = FUN_1415d8310(&local_1d8);
      local_208 = (undefined8 *)(lVar14 + 0x18);
      uVar18 = 0;
      local_228 = 0;
      local_200 = *local_208;
      local_1f8 = *(longlong *)(lVar14 + 0x28);
      local_1f0 = '\0';
      local_1e8 = *(undefined8 *)(lVar14 + 0x30);
      *(undefined8 ***)(lVar14 + 0x30) = &local_208;
      *(int *)(lVar14 + 0x38) = *(int *)(lVar14 + 0x38) + 1;
      local_238 = (void *)0x0;
      local_22c = 0;
      local_230 = (int)param_1[((longlong)(int)param_1[0xee] + 0x73) * 2];
      lVar14 = (longlong)local_230;
      if (0 < local_230) {
        FUN_141dab8d0(&local_238);
      }
      _guard_xfg_dispatch_icall_nop(local_238,0,lVar14 << 6);
      local_148 = param_1[0x42];
      lStack_140 = param_1[0x43];
      local_138 = param_1[0x44];
      lStack_130 = param_1[0x45];
      lVar14 = (longlong)*(int *)((longlong)param_1 + 0x76c);
      local_128 = param_1[0x46];
      lStack_120 = param_1[0x47];
      uVar11 = USkeletalMeshComponent::GetPhysicsSceneType
                         (local_1e0,lVar13,*(undefined1 *)((longlong)param_1 + 0xb14));
      plVar15 = (longlong *)FUN_1426e2530(lVar13,uVar11);
      local_1c0 = plVar15;
      if (plVar15 != (longlong *)0x0) {
        (**(code **)(*plVar15 + 0x348))
                  (plVar15,
                   "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysAnim.cpp"
                   ,200);
      }
      iVar20 = (int)param_1[0x172];
      local_248[0] = '\0';
      if ((-1 < iVar20) && (iVar20 < (int)param_1[0x17f])) {
        uVar7 = *(undefined8 *)(param_1[0x17e] + (longlong)iVar20 * 8);
        cVar10 = FUN_1426aaac0(uVar7);
        if ((cVar10 != '\0') && (cVar10 = FBodyInstance::IsValidBodyInstance(uVar7), cVar10 != '\0')
           ) {
          (**(code **)(*param_1 + 0x730))
                    (param_1,&local_1b8,
                     *(undefined8 *)(param_1[0x17e] + (longlong)(int)param_1[0x172] * 8));
        }
      }
      uVar19 = uVar18;
      fVar65 = _DAT_146b07a90;
      fVar66 = fRam0000000146b07a94;
      fVar67 = fRam0000000146b07a98;
      fVar68 = fRam0000000146b07a9c;
      if (0 < (int)param_2[1]) {
        do {
          iVar20 = (int)uVar19;
          uVar6 = *(ushort *)(uVar18 + *param_2);
          uVar19 = (ulonglong)uVar6;
          uVar21 = (ulonglong)uVar6;
          iVar12 = UPhysicsAsset::FindBodyIndex
                             (local_1e0,
                              *(undefined8 *)(*(longlong *)(param_1[0xe3] + 0x158) + uVar21 * 0x10))
          ;
          if ((-1 < iVar12) && (iVar12 < (int)param_1[0x17f])) {
            lVar13 = *(longlong *)(param_1[0x17e] + (longlong)iVar12 * 8);
            if ((lVar13 != 0) &&
               (((cVar10 = FUN_1426aaac0(lVar13), cVar10 != '\0' &&
                 (cVar10 = FBodyInstance::IsValidBodyInstance(lVar13), cVar10 != '\0')) ||
                ((fVar65 = _DAT_146b07a90, fVar66 = fRam0000000146b07a94,
                 fVar67 = fRam0000000146b07a98, fVar68 = fRam0000000146b07a9c,
                 0.0 < *(float *)(lVar13 + 0xf4) &&
                 (cVar10 = FBodyInstance::IsValidBodyInstance(lVar13), fVar65 = _DAT_146b07a90,
                 fVar66 = fRam0000000146b07a94, fVar67 = fRam0000000146b07a98,
                 fVar68 = fRam0000000146b07a9c, cVar10 != '\0')))))) {
              FUN_1426992a0(lVar13,&local_118,1,0);
              if ((*(byte *)((longlong)param_1 + 0xb1a) & 8) == 0) {
                fVar58 = *(float *)(lVar13 + 0xf4);
              }
              else {
                fVar58 = 1.0;
              }
              local_168 = 0;
              lStack_160 = 0;
              local_158 = CONCAT44((uint)fRam0000000146b07a14 & uRam0000000146b07a24,
                                   (uint)_DAT_146b07a10 & _DAT_146b07a20);
              uStack_150 = CONCAT44((uint)fRam0000000146b07a1c & uRam0000000146b07a2c,
                                    (uint)fRam0000000146b07a18 & uRam0000000146b07a28);
              local_178 = 0;
              lStack_170 = (ulonglong)(uint)fRam0000000146b07a1c << 0x20;
              iVar20 = *(int *)(*(longlong *)(param_1[0xe3] + 0x158) + 8 + uVar21 * 0x10);
              if (uVar6 == 0) {
                local_178 = local_148;
                lStack_170 = lStack_140;
                local_168 = local_138;
                lStack_160 = lStack_130;
                local_158 = local_128;
                uStack_150 = lStack_120;
              }
              else {
                local_250 = &local_218;
                local_258 = &local_148;
                local_218 = (undefined *)0x3f8000003f800000;
                pcStack_210 = (char *)CONCAT44(pcStack_210._4_4_,0x3f800000);
                FUN_1426d10a0(&local_238,0);
                lVar13 = (longlong)iVar20 * 0x40;
                local_178 = *(longlong *)(lVar13 + (longlong)local_238);
                lStack_170 = ((longlong *)(lVar13 + (longlong)local_238))[1];
                plVar15 = (longlong *)(lVar13 + 0x10 + (longlong)local_238);
                local_168 = *plVar15;
                lStack_160 = plVar15[1];
                plVar15 = (longlong *)(lVar13 + 0x20 + (longlong)local_238);
                local_158 = *plVar15;
                uStack_150 = plVar15[1];
              }
              if (iVar20 == -1) {
              }
              else {
                pfVar16 = (float *)(*param_3 + 0x20 + uVar19 * 0x30);
                pfVar3 = (float *)(param_1[lVar14 * 2 + 0xe5] + 0x20 + (longlong)iVar20 * 0x30);
                local_f8._0_4_ = *pfVar3 * *pfVar16;
                uStack_f0._0_4_ = pfVar3[2] * pfVar16[2];
                local_f8._4_4_ = pfVar3[1] * pfVar16[1];
              }
              lVar13 = uVar19 * 0x40;
              uVar7 = CONCAT44((float)local_f8._4_4_ * local_128._4_4_,
                               (float)local_f8._0_4_ * (float)local_128);
              auVar28._8_4_ = (float)uStack_f0 * (float)lStack_120;
              auVar28._0_8_ = uVar7;
              auVar28._12_4_ = 0;
              *(undefined8 *)((longlong)local_238 + lVar13) = local_118;
              ((undefined8 *)((longlong)local_238 + lVar13))[1] = uStack_110;
              puVar4 = (undefined8 *)((longlong)local_238 + lVar13 + 0x10);
              *puVar4 = local_108;
              puVar4[1] = uStack_100;
              uStack_f0 = (ulonglong)(uint)((float)uStack_f0 * (float)lStack_120);
              puVar4 = (undefined8 *)((longlong)local_238 + lVar13 + 0x20);
              *puVar4 = uVar7;
              puVar4[1] = uStack_f0;
              *(undefined1 *)((longlong)local_238 + lVar13 + 0x30) = 1;
              fVar65 = _DAT_146b07a90;
              fVar66 = fRam0000000146b07a94;
              fVar67 = fRam0000000146b07a98;
              fVar68 = fRam0000000146b07a9c;
              _local_f8 = auVar28;
              if (0.0 < fVar58) {
                FUN_14162bcf0(&local_118,&local_1b8,&local_178);
                fVar68 = fRam0000000146b07a9c;
                fVar67 = fRam0000000146b07a98;
                fVar66 = fRam0000000146b07a94;
                fVar65 = _DAT_146b07a90;
                lVar13 = *param_3;
                if (1e-05 < ABS(fVar58)) {
                  if (1e-05 < ABS(fVar58 - 1.0)) {
                    pfVar16 = (float *)(lVar13 + 0x10 + uVar19 * 0x30);
                    fVar48 = pfVar16[1];
                    fVar50 = pfVar16[2];
                    fVar36 = pfVar16[3];
                    pfVar3 = (float *)(lVar13 + 0x10 + uVar19 * 0x30);
                    fVar34 = pfVar3[1];
                    fVar35 = pfVar3[2];
                    fVar37 = pfVar3[3];
                    pfVar5 = (float *)(lVar13 + 0x10 + uVar19 * 0x30);
                    *pfVar5 = (local_1a8 - *pfVar16) * fVar58 + *pfVar3;
                    pfVar5[1] = (fStack_1a4 - fVar48) * fVar58 + fVar34;
                    pfVar5[2] = (fStack_1a0 - fVar50) * fVar58 + fVar35;
                    pfVar5[3] = (fStack_19c - fVar36) * fVar58 + fVar37;
                    pfVar16 = (float *)(lVar13 + 0x20 + uVar19 * 0x30);
                    fVar48 = pfVar16[1];
                    fVar50 = pfVar16[2];
                    fVar36 = pfVar16[3];
                    pfVar3 = (float *)(lVar13 + 0x20 + uVar19 * 0x30);
                    fVar34 = pfVar3[1];
                    fVar35 = pfVar3[2];
                    fVar37 = pfVar3[3];
                    pfVar5 = (float *)(lVar13 + 0x20 + uVar19 * 0x30);
                    *pfVar5 = (local_198 - *pfVar16) * fVar58 + *pfVar3;
                    pfVar5[1] = (fStack_194 - fVar48) * fVar58 + fVar34;
                    pfVar5[2] = (fStack_190 - fVar50) * fVar58 + fVar35;
                    pfVar5[3] = (fStack_18c - fVar36) * fVar58 + fVar37;
                    pfVar16 = (float *)(lVar13 + uVar19 * 0x30);
                    fVar48 = *pfVar16;
                    fVar50 = pfVar16[1];
                    fVar36 = pfVar16[2];
                    fVar34 = pfVar16[3];
                    fVar35 = local_1b8 * fVar48 + fStack_1b0 * fVar36;
                    fVar37 = fStack_1b4 * fVar50 + fStack_1ac * fVar34;
                    fVar38 = fStack_1b0 * fVar36 + local_1b8 * fVar48;
                    fVar47 = fStack_1ac * fVar34 + fStack_1b4 * fVar50;
                    fVar49 = (float)(-(uint)(0.0 <= fVar37 + fVar35) &
                                     ((uint)(0.0 - fVar48) ^ (uint)fVar48) ^ (uint)(0.0 - fVar48)) *
                             (_DAT_146b07a10 - fVar58) + local_1b8 * fVar58;
                    fVar24 = (float)(-(uint)(0.0 <= fVar38 + fVar37) &
                                     ((uint)(0.0 - fVar50) ^ (uint)fVar50) ^ (uint)(0.0 - fVar50)) *
                             (fRam0000000146b07a14 - fVar58) + fStack_1b4 * fVar58;
                    fVar51 = (float)(-(uint)(0.0 <= fVar47 + fVar38) &
                                     ((uint)(0.0 - fVar36) ^ (uint)fVar36) ^ (uint)(0.0 - fVar36)) *
                             (fRam0000000146b07a18 - fVar58) + fStack_1b0 * fVar58;
                    fVar33 = (float)(-(uint)(0.0 <= fVar35 + fVar47) &
                                     ((uint)(0.0 - fVar34) ^ (uint)fVar34) ^ (uint)(0.0 - fVar34)) *
                             (fRam0000000146b07a1c - fVar58) + fStack_1ac * fVar58;
                    auVar25._0_4_ = fVar49 * fVar49 + fVar51 * fVar51;
                    auVar25._4_4_ = fVar24 * fVar24 + fVar33 * fVar33;
                    auVar25._8_4_ = fVar51 * fVar51 + fVar49 * fVar49;
                    auVar25._12_4_ = fVar33 * fVar33 + fVar24 * fVar24;
                    fVar35 = auVar25._4_4_ + auVar25._0_4_;
                    fVar37 = auVar25._8_4_ + auVar25._4_4_;
                    fVar38 = auVar25._12_4_ + auVar25._8_4_;
                    fVar47 = auVar25._0_4_ + auVar25._12_4_;
                    auVar22._4_4_ = fVar37;
                    auVar22._0_4_ = fVar35;
                    auVar22._8_4_ = fVar38;
                    auVar22._12_4_ = fVar47;
                    auVar28 = rsqrtps(auVar25,auVar22);
                    fVar48 = auVar28._0_4_;
                    fVar50 = auVar28._4_4_;
                    fVar36 = auVar28._8_4_;
                    fVar34 = auVar28._12_4_;
                    fVar48 = (fVar65 - fVar48 * fVar48 * fVar35 * fVar65) * fVar48 + fVar48;
                    fVar50 = (fVar66 - fVar50 * fVar50 * fVar37 * fVar66) * fVar50 + fVar50;
                    fVar36 = (fVar67 - fVar36 * fVar36 * fVar38 * fVar67) * fVar36 + fVar36;
                    fVar34 = (fVar68 - fVar34 * fVar34 * fVar47 * fVar68) * fVar34 + fVar34;
                    uVar41 = ((uint)(((fVar66 - fVar50 * fVar50 * fVar37 * fVar66) * fVar50 + fVar50
                                     ) * fVar24) ^ uRam0000000146b07a84) &
                             -(uint)(fRam0000000146b07b34 <= fVar37) ^ uRam0000000146b07a84;
                    uVar43 = ((uint)(((fVar67 - fVar36 * fVar36 * fVar38 * fVar67) * fVar36 + fVar36
                                     ) * fVar51) ^ uRam0000000146b07a88) &
                             -(uint)(fRam0000000146b07b38 <= fVar38) ^ uRam0000000146b07a88;
                    uVar44 = ((uint)(((fVar68 - fVar34 * fVar34 * fVar47 * fVar68) * fVar34 + fVar34
                                     ) * fVar33) ^ uRam0000000146b07a8c) &
                             -(uint)(fRam0000000146b07b3c <= fVar47) ^ uRam0000000146b07a8c;
                    puVar2 = (uint *)(lVar13 + uVar19 * 0x30);
                    *puVar2 = ((uint)(((fVar65 - fVar48 * fVar48 * fVar35 * fVar65) * fVar48 +
                                      fVar48) * fVar49) ^ _DAT_146b07a80) &
                              -(uint)(_DAT_146b07b30 <= fVar35) ^ _DAT_146b07a80;
                    puVar2[1] = uVar41;
                    puVar2[2] = uVar43;
                    puVar2[3] = uVar44;
                  }
                  else {
                    puVar4 = (undefined8 *)(lVar13 + uVar19 * 0x30);
                    *puVar4 = CONCAT44(fStack_1b4,local_1b8);
                    puVar4[1] = CONCAT44(fStack_1ac,fStack_1b0);
                    puVar4 = (undefined8 *)(lVar13 + 0x10 + uVar19 * 0x30);
                    *puVar4 = CONCAT44(fStack_1a4,local_1a8);
                    puVar4[1] = CONCAT44(fStack_19c,fStack_1a0);
                    puVar4 = (undefined8 *)(lVar13 + 0x20 + uVar19 * 0x30);
                    *puVar4 = CONCAT44(fStack_194,local_198);
                    puVar4[1] = CONCAT44(fStack_18c,fStack_190);
                  }
                }
                else {
                  puVar4 = (undefined8 *)(lVar13 + uVar19 * 0x30);
                  uVar7 = puVar4[1];
                  puVar1 = (undefined8 *)(lVar13 + uVar19 * 0x30);
                  *puVar1 = *puVar4;
                  puVar1[1] = uVar7;
                  puVar4 = (undefined8 *)(lVar13 + 0x10 + uVar19 * 0x30);
                  uVar7 = puVar4[1];
                  puVar1 = (undefined8 *)(lVar13 + 0x10 + uVar19 * 0x30);
                  *puVar1 = *puVar4;
                  puVar1[1] = uVar7;
                  puVar4 = (undefined8 *)(lVar13 + 0x20 + uVar19 * 0x30);
                  uVar7 = puVar4[1];
                  puVar1 = (undefined8 *)(lVar13 + 0x20 + uVar19 * 0x30);
                  *puVar1 = *puVar4;
                  puVar1[1] = uVar7;
                }
                local_240 = fVar58;
                if (local_248[0] == '\0') {
                  local_248[0] = '\x01';
                }
              }
            }
            iVar20 = (int)local_228;
          }
          fVar50 = fRam0000000146b07a18;
          fVar48 = fRam0000000146b07a14;
          fVar58 = _DAT_146b07a10;
          if (uVar6 == 0) {
            puVar4 = (undefined8 *)*param_3;
            puVar1 = (undefined8 *)param_1[lVar14 * 2 + 0xe5];
            uVar7 = puVar4[1];
            *puVar1 = *puVar4;
            puVar1[1] = uVar7;
            uVar7 = puVar4[3];
            puVar1[2] = puVar4[2];
            puVar1[3] = uVar7;
            uVar7 = puVar4[5];
            puVar1[4] = puVar4[4];
            puVar1[5] = uVar7;
          }
          else {
            lVar17 = param_1[lVar14 * 2 + 0xe5];
            lVar13 = *param_3;
            local_228._0_4_ = _DAT_146b07ab0;
            local_228._4_4_ = fRam0000000146b07ab4;
            fStack_220 = fRam0000000146b07ab8;
            fStack_21c = fRam0000000146b07abc;
            auVar28 = *(undefined1 (*) [16])(lVar13 + (uVar19 * 6 + 4) * 8);
            iVar12 = *(int *)(*(longlong *)(param_1[0xe3] + 0x158) + 8 + uVar21 * 0x10);
            pfVar16 = (float *)((longlong)iVar12 * 0x30 + lVar17);
            auVar22 = *(undefined1 (*) [16])(pfVar16 + 8);
            fVar36 = auVar22._0_4_;
            fVar34 = auVar22._4_4_;
            fVar35 = auVar22._8_4_;
            fVar37 = auVar22._12_4_;
            auVar22 = minps(auVar28,auVar22);
            auVar23._4_4_ = -(uint)(auVar22._4_4_ < fRam0000000146b07ab4);
            auVar23._0_4_ = -(uint)(auVar22._0_4_ < _DAT_146b07ab0);
            auVar23._8_4_ = -(uint)(auVar22._8_4_ < fRam0000000146b07ab8);
            auVar23._12_4_ = -(uint)(auVar22._12_4_ < fRam0000000146b07abc);
            iVar12 = movmskps(iVar12,auVar23);
            if (iVar12 == 0) {
              fVar58 = *pfVar16;
              fVar48 = pfVar16[1];
              fVar50 = pfVar16[2];
              fVar38 = pfVar16[3];
              pfVar3 = (float *)(lVar13 + uVar19 * 0x30);
              fVar47 = *pfVar3;
              fVar49 = pfVar3[1];
              fVar24 = pfVar3[2];
              fVar51 = pfVar3[3];
              pfVar3 = (float *)(lVar13 + (uVar19 * 6 + 2) * 8);
              fVar39 = *pfVar3 * fVar36;
              fVar40 = pfVar3[1] * fVar34;
              fVar29 = pfVar3[2] * fVar35;
              fVar30 = pfVar3[3] * fVar37;
              fVar31 = fVar51 * fVar58 * _DAT_146b07a70 + fVar47 * fVar38 +
                       fVar48 * fVar24 * _DAT_146b07a60 + fVar50 * fVar49 * _DAT_146b07a50;
              fVar45 = fVar24 * fVar58 * fRam0000000146b07a74 + fVar49 * fVar38 +
                       fVar48 * fVar51 * fRam0000000146b07a64 +
                       fVar50 * fVar47 * fRam0000000146b07a54;
              fVar32 = fVar49 * fVar58 * fRam0000000146b07a78 + fVar24 * fVar38 +
                       fVar48 * fVar47 * fRam0000000146b07a68 +
                       fVar50 * fVar51 * fRam0000000146b07a58;
              fVar42 = fVar47 * fVar58 * fRam0000000146b07a7c + fVar51 * fVar38 +
                       fVar48 * fVar49 * fRam0000000146b07a6c +
                       fVar50 * fVar24 * fRam0000000146b07a5c;
              fVar49 = fVar29 * fVar48 - fVar40 * fVar50;
              fVar24 = fVar39 * fVar50 - fVar29 * fVar58;
              fVar51 = fVar40 * fVar58 - fVar39 * fVar48;
              fVar33 = fVar30 * fVar38 - fVar30 * fVar38;
              fVar49 = fVar49 + fVar49;
              fVar24 = fVar24 + fVar24;
              fVar51 = fVar51 + fVar51;
              fVar33 = fVar33 + fVar33;
              fVar47 = (fVar51 * fVar48 - fVar24 * fVar50) + fVar38 * fVar49 + fVar39 + pfVar16[4];
              fVar50 = (fVar49 * fVar50 - fVar51 * fVar58) + fVar38 * fVar24 + fVar40 + pfVar16[5];
              fVar58 = (fVar24 * fVar58 - fVar49 * fVar48) + fVar38 * fVar51 + fVar29 + pfVar16[6];
              fVar48 = (fVar33 * fVar38 - fVar33 * fVar38) + fVar38 * fVar33 + fVar30 + pfVar16[7];
            }
            else {
              fVar38 = *pfVar16;
              fVar47 = pfVar16[1];
              fVar49 = pfVar16[2];
              fVar24 = pfVar16[3];
              fVar51 = pfVar16[4];
              fVar33 = pfVar16[5];
              fVar39 = pfVar16[6];
              fVar29 = fVar47 + fVar47;
              fVar30 = fVar49 + fVar49;
              fVar45 = (fVar38 + fVar38) * fVar38;
              fVar40 = fVar24 * (fVar38 + fVar38);
              fVar62 = (fVar24 * fVar30 + fVar38 * fVar29) * fVar36;
              fVar63 = (fVar40 + fVar47 * fVar30) * fVar34;
              fVar64 = (fVar24 * fVar29 + fVar38 * fVar30) * fVar35;
              fVar52 = fVar34 * (fVar38 * fVar29 - fVar24 * fVar30);
              fVar54 = fVar35 * (fVar47 * fVar30 - fVar40);
              fVar56 = fVar36 * (fVar38 * fVar30 - fVar24 * fVar29);
              fVar40 = (float)((uint)((_DAT_146b07a10 - (fVar30 * fVar49 + fVar29 * fVar47)) *
                                     fVar36) & _DAT_146b07a20);
              fVar30 = (float)((uint)((fRam0000000146b07a14 - (fVar30 * fVar49 + fVar45)) * fVar34)
                              & uRam0000000146b07a24);
              fVar31 = (float)((uint)((fRam0000000146b07a18 - (fVar29 * fVar47 + fVar45)) * fVar35)
                              & uRam0000000146b07a28);
              fVar32 = (float)((uint)((fRam0000000146b07a1c - (fVar45 + fVar45)) * fVar37) &
                              uRam0000000146b07a2c);
              pfVar16 = (float *)(lVar13 + uVar19 * 0x30);
              fVar38 = *pfVar16;
              fVar47 = pfVar16[1];
              fVar49 = pfVar16[2];
              fVar24 = pfVar16[3];
              fVar45 = fVar47 + fVar47;
              fVar42 = fVar49 + fVar49;
              fVar46 = (fVar38 + fVar38) * fVar38;
              pfVar16 = (float *)(lVar13 + (uVar19 * 6 + 4) * 8);
              fVar29 = (fVar38 + fVar38) * fVar24;
              fVar59 = (fVar42 * fVar24 + fVar45 * fVar38) * *pfVar16;
              fVar60 = (fVar29 + fVar42 * fVar47) * pfVar16[1];
              fVar61 = (fVar45 * fVar24 + fVar42 * fVar38) * pfVar16[2];
              fVar53 = pfVar16[1] * (fVar45 * fVar38 - fVar42 * fVar24);
              fVar55 = pfVar16[2] * (fVar42 * fVar47 - fVar29);
              fVar57 = *pfVar16 * (fVar42 * fVar38 - fVar45 * fVar24);
              pfVar16 = (float *)(lVar13 + (uVar19 * 6 + 4) * 8);
              fVar24 = (float)((uint)((_DAT_146b07a10 - (fVar42 * fVar49 + fVar45 * fVar47)) *
                                     *pfVar16) & _DAT_146b07a20);
              fVar29 = (float)((uint)((fRam0000000146b07a14 - (fVar42 * fVar49 + fVar46)) *
                                     pfVar16[1]) & uRam0000000146b07a24);
              fVar45 = (float)((uint)((fRam0000000146b07a18 - (fVar45 * fVar47 + fVar46)) *
                                     pfVar16[2]) & uRam0000000146b07a28);
              fVar42 = (float)((uint)((fRam0000000146b07a1c - (fVar46 + fVar46)) * pfVar16[3]) &
                              uRam0000000146b07a2c);
              pfVar16 = (float *)(lVar13 + (uVar19 * 6 + 2) * 8);
              fVar38 = *pfVar16;
              fVar47 = pfVar16[1];
              fVar49 = pfVar16[2];
              local_1b8 = fVar59 * fVar52 + fVar24 * fVar40 + fVar57 * fVar64 + fVar42 * fVar51;
              fStack_1b4 = fVar59 * fVar30 + fVar24 * fVar62 + fVar57 * fVar54 + fVar42 * fVar33;
              fStack_1b0 = fVar59 * fVar63 + fVar24 * fVar56 + fVar57 * fVar31 + fVar42 * fVar39;
              fStack_1ac = fVar59 * fVar32 + fVar24 * fVar32 + fVar57 * fVar32 +
                           fVar42 * fRam0000000146b07a1c;
              local_1a8 = fVar29 * fVar52 + fVar53 * fVar40 + fVar60 * fVar64 + fVar42 * fVar51;
              fStack_1a4 = fVar29 * fVar30 + fVar53 * fVar62 + fVar60 * fVar54 + fVar42 * fVar33;
              fStack_1a0 = fVar29 * fVar63 + fVar53 * fVar56 + fVar60 * fVar31 + fVar42 * fVar39;
              fStack_19c = fVar29 * fVar32 + fVar53 * fVar32 + fVar60 * fVar32 +
                           fVar42 * fRam0000000146b07a1c;
              local_198 = fVar55 * fVar52 + fVar61 * fVar40 + fVar45 * fVar64 + fVar42 * fVar51;
              fStack_194 = fVar55 * fVar30 + fVar61 * fVar62 + fVar45 * fVar54 + fVar42 * fVar33;
              fStack_190 = fVar55 * fVar63 + fVar61 * fVar56 + fVar45 * fVar31 + fVar42 * fVar39;
              fStack_18c = fVar55 * fVar32 + fVar61 * fVar32 + fVar45 * fVar32 +
                           fVar42 * fRam0000000146b07a1c;
              local_188 = fVar47 * fVar52 + fVar38 * fVar40 + fVar49 * fVar64 +
                          fRam0000000146b07a1c * fVar51;
              fStack_184 = fVar47 * fVar30 + fVar38 * fVar62 + fVar49 * fVar54 +
                           fRam0000000146b07a1c * fVar33;
              fStack_180 = fVar47 * fVar63 + fVar38 * fVar56 + fVar49 * fVar31 +
                           fRam0000000146b07a1c * fVar39;
              fStack_17c = fVar47 * fVar32 + fVar38 * fVar32 + fVar49 * fVar32 +
                           fRam0000000146b07a1c * fRam0000000146b07a1c;
              FMatrix::RemoveScaling(&local_1b8);
              fVar58 = (float)(-(uint)((float)local_228 <= auVar28._0_4_ * fVar36) &
                               (_DAT_146b07aa0 ^ (uint)fVar58) ^ _DAT_146b07aa0);
              fVar48 = (float)(-(uint)(local_228._4_4_ <= auVar28._4_4_ * fVar34) &
                               (uRam0000000146b07aa4 ^ (uint)fVar48) ^ uRam0000000146b07aa4);
              fVar50 = (float)(-(uint)(fStack_220 <= auVar28._8_4_ * fVar35) &
                               (uRam0000000146b07aa8 ^ (uint)fVar50) ^ uRam0000000146b07aa8);
              local_1b8 = local_1b8 * fVar58;
              fStack_1b4 = fStack_1b4 * fVar58;
              fStack_1b0 = fStack_1b0 * fVar58;
              fStack_1a4 = fStack_1a4 * fVar48;
              fStack_1a0 = fStack_1a0 * fVar48;
              local_1a8 = local_1a8 * fVar48;
              fStack_194 = fStack_194 * fVar50;
              fStack_190 = fStack_190 * fVar50;
              local_198 = local_198 * fVar50;
              FQuat::FQuat(&local_1d8,&local_1b8);
              lVar17 = param_1[lVar14 * 2 + 0xe5];
              local_240 = 1e-08;
              auVar26._0_4_ =
                   (float)local_1d8 * (float)local_1d8 + (float)uStack_1d0 * (float)uStack_1d0;
              auVar26._4_4_ =
                   local_1d8._4_4_ * local_1d8._4_4_ + uStack_1d0._4_4_ * uStack_1d0._4_4_;
              auVar26._8_4_ =
                   (float)uStack_1d0 * (float)uStack_1d0 + (float)local_1d8 * (float)local_1d8;
              auVar26._12_4_ =
                   uStack_1d0._4_4_ * uStack_1d0._4_4_ + local_1d8._4_4_ * local_1d8._4_4_;
              fVar47 = auVar26._4_4_ + auVar26._0_4_;
              fVar49 = auVar26._8_4_ + auVar26._4_4_;
              fVar24 = auVar26._12_4_ + auVar26._8_4_;
              fVar51 = auVar26._0_4_ + auVar26._12_4_;
              auVar8._4_4_ = fVar49;
              auVar8._0_4_ = fVar47;
              auVar8._8_4_ = fVar24;
              auVar8._12_4_ = fVar51;
              auVar22 = rsqrtps(auVar26,auVar8);
              fVar58 = auVar22._0_4_;
              fVar48 = auVar22._4_4_;
              fVar50 = auVar22._8_4_;
              fVar38 = auVar22._12_4_;
              fVar58 = (fVar65 - fVar58 * fVar58 * fVar47 * fVar65) * fVar58 + fVar58;
              fVar48 = (fVar66 - fVar48 * fVar48 * fVar49 * fVar66) * fVar48 + fVar48;
              fVar50 = (fVar67 - fVar50 * fVar50 * fVar24 * fVar67) * fVar50 + fVar50;
              fVar38 = (fVar68 - fVar38 * fVar38 * fVar51 * fVar68) * fVar38 + fVar38;
              fVar31 = (float)(((uint)(((fVar65 - fVar58 * fVar58 * fVar47 * fVar65) * fVar58 +
                                       fVar58) * (float)local_1d8) ^ _DAT_146b07a80) &
                               -(uint)(1e-08 <= fVar47) ^ _DAT_146b07a80);
              fVar45 = (float)(((uint)(((fVar66 - fVar48 * fVar48 * fVar49 * fVar66) * fVar48 +
                                       fVar48) * local_1d8._4_4_) ^ uRam0000000146b07a84) &
                               -(uint)(1e-08 <= fVar49) ^ uRam0000000146b07a84);
              fVar32 = (float)(((uint)(((fVar67 - fVar50 * fVar50 * fVar24 * fVar67) * fVar50 +
                                       fVar50) * (float)uStack_1d0) ^ uRam0000000146b07a88) &
                               -(uint)(1e-08 <= fVar24) ^ uRam0000000146b07a88);
              fVar42 = (float)(((uint)(((fVar68 - fVar38 * fVar38 * fVar51 * fVar68) * fVar38 +
                                       fVar38) * uStack_1d0._4_4_) ^ uRam0000000146b07a8c) &
                               -(uint)(1e-08 <= fVar51) ^ uRam0000000146b07a8c);
              fVar48 = 0.0;
              local_1d8 = (undefined *)CONCAT44(fVar45,fVar31);
              uStack_1d0 = (char *)CONCAT44(fVar42,fVar32);
              fVar47 = local_188;
              fVar50 = fStack_184;
              fVar58 = fStack_180;
            }
            pfVar16 = (float *)(lVar17 + uVar19 * 0x30);
            *pfVar16 = fVar31;
            pfVar16[1] = fVar45;
            pfVar16[2] = fVar32;
            pfVar16[3] = fVar42;
            pfVar16 = (float *)(lVar17 + 0x10 + uVar19 * 0x30);
            *pfVar16 = fVar47;
            pfVar16[1] = fVar50;
            pfVar16[2] = fVar58;
            pfVar16[3] = fVar48;
            pfVar16 = (float *)(lVar17 + 0x20 + uVar19 * 0x30);
            *pfVar16 = auVar28._0_4_ * fVar36;
            pfVar16[1] = auVar28._4_4_ * fVar34;
            pfVar16[2] = auVar28._8_4_ * fVar35;
            pfVar16[3] = auVar28._12_4_ * fVar37;
            pfVar16 = (float *)(param_1[lVar14 * 2 + 0xe5] + uVar19 * 0x30);
            fVar58 = *pfVar16;
            fVar48 = pfVar16[1];
            fVar50 = pfVar16[2];
            fVar36 = pfVar16[3];
            auVar27._0_4_ = fVar58 * fVar58 + fVar50 * fVar50;
            auVar27._4_4_ = fVar48 * fVar48 + fVar36 * fVar36;
            auVar27._8_4_ = fVar50 * fVar50 + fVar58 * fVar58;
            auVar27._12_4_ = fVar36 * fVar36 + fVar48 * fVar48;
            fVar47 = auVar27._4_4_ + auVar27._0_4_;
            fVar49 = auVar27._8_4_ + auVar27._4_4_;
            fVar24 = auVar27._12_4_ + auVar27._8_4_;
            fVar51 = auVar27._0_4_ + auVar27._12_4_;
            auVar9._4_4_ = fVar49;
            auVar9._0_4_ = fVar47;
            auVar9._8_4_ = fVar24;
            auVar9._12_4_ = fVar51;
            auVar28 = rsqrtps(auVar27,auVar9);
            fVar34 = auVar28._0_4_;
            fVar35 = auVar28._4_4_;
            fVar37 = auVar28._8_4_;
            fVar38 = auVar28._12_4_;
            fVar34 = (fVar65 - fVar34 * fVar34 * fVar47 * fVar65) * fVar34 + fVar34;
            fVar35 = (fVar66 - fVar35 * fVar35 * fVar49 * fVar66) * fVar35 + fVar35;
            fVar37 = (fVar67 - fVar37 * fVar37 * fVar24 * fVar67) * fVar37 + fVar37;
            fVar38 = (fVar68 - fVar38 * fVar38 * fVar51 * fVar68) * fVar38 + fVar38;
            uVar41 = ((uint)(((fVar66 - fVar35 * fVar35 * fVar49 * fVar66) * fVar35 + fVar35) *
                            fVar48) ^ uRam0000000146b07a84) &
                     -(uint)(fRam0000000146b07b34 <= fVar49) ^ uRam0000000146b07a84;
            uVar43 = ((uint)(((fVar67 - fVar37 * fVar37 * fVar24 * fVar67) * fVar37 + fVar37) *
                            fVar50) ^ uRam0000000146b07a88) &
                     -(uint)(fRam0000000146b07b38 <= fVar24) ^ uRam0000000146b07a88;
            uVar44 = ((uint)(((fVar68 - fVar38 * fVar38 * fVar51 * fVar68) * fVar38 + fVar38) *
                            fVar36) ^ uRam0000000146b07a8c) &
                     -(uint)(fRam0000000146b07b3c <= fVar51) ^ uRam0000000146b07a8c;
            puVar2 = (uint *)(param_1[lVar14 * 2 + 0xe5] + uVar19 * 0x30);
            *puVar2 = ((uint)(((fVar65 - fVar34 * fVar34 * fVar47 * fVar65) * fVar34 + fVar34) *
                             fVar58) ^ _DAT_146b07a80) & -(uint)(_DAT_146b07b30 <= fVar47) ^
                      _DAT_146b07a80;
            puVar2[1] = uVar41;
            puVar2[2] = uVar43;
            puVar2[3] = uVar44;
          }
          local_228 = (ulonglong)(iVar20 + 1U);
          uVar18 = uVar18 + 2;
          plVar15 = local_1c0;
          param_2 = local_1c8;
          uVar19 = local_228;
        } while ((int)(iVar20 + 1U) < (int)local_1c8[1]);
      }
      if (plVar15 != (longlong *)0x0) {
        (**(code **)(*plVar15 + 0x350))(plVar15);
      }
      *(byte *)((longlong)param_1 + 0x881) = *(byte *)((longlong)param_1 + 0x881) | 2;
      FUN_1423a5900(param_1,param_3);
      if (local_1f0 == '\0') {
        local_1f0 = 1;
        *(int *)(local_208 + 4) = *(int *)(local_208 + 4) + -1;
        if (local_1f8 != local_208[2]) {
          FMemStackBase::FreeChunks();
        }
        *local_208 = local_200;
        local_208[3] = local_1e8;
      }
    }
  }
  return;
}



// FUNCTION 1426cc1a0 FUN_1426cc1a0 body=57 status=ok
// SIG undefined FUN_1426cc1a0(void)

void FUN_1426cc1a0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 local_18 [16];
  
  FUN_1417931d0();
  cVar3 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar3 == '\0') {
    puVar1 = (undefined8 *)FGuid::NewGuid(local_18);
    uVar2 = puVar1[1];
    *(undefined8 *)(param_1 + 0xf0) = *puVar1;
    *(undefined8 *)(param_1 + 0xf8) = uVar2;
  }
  return;
}



// FUNCTION 1426cc1e0 FUN_1426cc1e0 body=586 status=ok
// SIG undefined FUN_1426cc1e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1426cc1e0(longlong *param_1)

{
  float *pfVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 local_res8 [8];
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  UObject::PostLoad();
  if (param_1[4] != 0) {
    FUN_1417510e0();
  }
  FBodyInstance::FixupData(param_1 + 0x28,param_1);
  iVar9 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  if (iVar9 < 0x10b) {
    if ((*(byte *)((longlong)param_1 + 0x99) & 1) == 0) {
      *(byte *)(param_1 + 0x13) = ~(*(byte *)(param_1 + 0x2a) >> 3) & 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x13) = 2;
    }
  }
  iVar9 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  if ((iVar9 < 0x11c) && (iVar9 = FUN_142696340(param_1 + 0x28), iVar9 == 0)) {
    *(undefined1 *)((longlong)param_1 + 0x9b) = 1;
  }
  plVar11 = (longlong *)GetTargetPlatformManager();
  uVar16 = 0;
  if ((plVar11 != (longlong *)0x0) &&
     (plVar11 = (longlong *)(**(code **)(*plVar11 + 0x78))(plVar11), uVar14 = uVar16,
     uVar15 = uVar16, 0 < (int)plVar11[1])) {
    do {
      puVar12 = (undefined8 *)
                (**(code **)(**(longlong **)(uVar15 + *plVar11) + 200))
                          (*(longlong **)(uVar15 + *plVar11),local_res8,param_1);
      FUN_1426c6570(param_1,*puVar12,0);
      uVar13 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar13;
      uVar15 = uVar15 + 8;
    } while ((int)uVar13 < (int)plVar11[1]);
  }
  (**(code **)(*param_1 + 0x278))(param_1);
  iVar9 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  if ((iVar9 < 0x134) && (uVar14 = uVar16, 0 < (int)param_1[0xc])) {
    do {
      lVar3 = param_1[0xb];
      pfVar1 = (float *)(uVar16 + 0x90 + lVar3);
      fVar19 = *pfVar1;
      fVar20 = pfVar1[1];
      fVar5 = pfVar1[2];
      fVar6 = pfVar1[3];
      puVar2 = (undefined4 *)(uVar16 + 0xa0 + lVar3);
      local_48 = *puVar2;
      uStack_44 = puVar2[1];
      uStack_40 = puVar2[2];
      uStack_3c = puVar2[3];
      puVar2 = (undefined4 *)(uVar16 + 0xb0 + lVar3);
      local_38 = *puVar2;
      uStack_34 = puVar2[1];
      uStack_30 = puVar2[2];
      uStack_2c = puVar2[3];
      local_58 = fVar19;
      fStack_54 = fVar20;
      fStack_50 = fVar5;
      fStack_4c = fVar6;
      cVar8 = FUN_140618120(&local_58);
      if ((cVar8 != '\0') ||
         (((cVar8 = FUN_140618120(&local_48), cVar8 != '\0' ||
           (uVar10 = FUN_140618120(&local_38), (char)uVar10 != '\0')) ||
          (fVar17 = fVar19 * fVar19 + fVar5 * fVar5, fVar18 = fVar20 * fVar20 + fVar6 * fVar6,
          fVar19 = fVar5 * fVar5 + fVar19 * fVar19, fVar20 = fVar6 * fVar6 + fVar20 * fVar20,
          auVar4._4_4_ = -(uint)(fRam0000000146b07a34 <
                                (float)((uint)(fRam0000000146b07a14 - (fVar19 + fVar18)) &
                                       uRam0000000146b07a44)),
          auVar4._0_4_ = -(uint)(_DAT_146b07a30 <
                                (float)((uint)(_DAT_146b07a10 - (fVar18 + fVar17)) & _DAT_146b07a40)
                                ),
          auVar4._8_4_ = -(uint)(fRam0000000146b07a38 <
                                (float)((uint)(fRam0000000146b07a18 - (fVar20 + fVar19)) &
                                       uRam0000000146b07a48)),
          auVar4._12_4_ =
               -(uint)(fRam0000000146b07a3c <
                      (float)((uint)(fRam0000000146b07a1c - (fVar17 + fVar20)) &
                             uRam0000000146b07a4c)), iVar9 = movmskps(uVar10,auVar4), iVar9 != 0))))
      {
        lVar3 = param_1[0xb];
        cVar8 = FUN_140618120(&DAT_1468b5b70);
        if ((cVar8 == '\0') && (cVar8 = FUN_140618120(&DAT_1468b5b80), cVar8 == '\0')) {
          FUN_140618120(&DAT_1468b5b90);
        }
        uVar7 = uRam00000001468b5b78;
        puVar12 = (undefined8 *)(uVar16 + 0x90 + lVar3);
        *puVar12 = _DAT_1468b5b70;
        puVar12[1] = uVar7;
        uVar7 = uRam00000001468b5b88;
        puVar12 = (undefined8 *)(uVar16 + 0xa0 + lVar3);
        *puVar12 = _DAT_1468b5b80;
        puVar12[1] = uVar7;
        uVar7 = uRam00000001468b5b98;
        puVar12 = (undefined8 *)(uVar16 + 0xb0 + lVar3);
        *puVar12 = _DAT_1468b5b90;
        puVar12[1] = uVar7;
      }
      uVar13 = (int)uVar14 + 1;
      uVar16 = uVar16 + 0xd0;
      uVar14 = (ulonglong)uVar13;
    } while ((int)uVar13 < (int)param_1[0xc]);
  }
  return;
}



// FUNCTION 1426cc430 FUN_1426cc430 body=56 status=ok
// SIG undefined FUN_1426cc430(void)

void FUN_1426cc430(longlong param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  UObject::PostLoad();
  iVar2 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  if ((iVar2 < 0x103) && (*(longlong **)(param_1 + 0x48) != (longlong *)0x0)) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x278))();
    *(undefined1 *)(param_1 + 0x50) = uVar1;
  }
  return;
}



// FUNCTION 1426cc470 FUN_1426cc470 body=1068 status=ok
// SIG undefined FUN_1426cc470(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1426cc470(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  byte bVar9;
  ulonglong uVar10;
  uint uVar11;
  bool bVar12;
  ulonglong local_res8 [4];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined **local_198 [5];
  byte local_16f;
  byte local_16e;
  undefined8 local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined **local_e8 [5];
  byte local_bf;
  byte local_be;
  undefined8 local_58;
  undefined8 *local_50;
  
  UObject::PostLoad();
  local_1a8 = CONCAT44(uRam00000001464b008c,_DAT_1464b0088);
  uStack_1a0 = (ulonglong *)CONCAT44(uRam00000001464b0094,uRam00000001464b0090);
  iVar4 = UObjectBaseUtility::GetLinkerCustomVersion(param_1,&local_1a8);
  uVar10 = 0;
  if (iVar4 < 0xb) {
    iVar4 = *(int *)(param_1 + 0x118) + *(int *)(param_1 + 0x48);
    *(int *)(param_1 + 0x48) = iVar4;
    if (*(int *)(param_1 + 0x4c) < iVar4) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x40);
    }
    if (0 < *(int *)(param_1 + 0x118)) {
      local_res8[1] = 0;
      local_res8[2] = 0;
      local_res8[3] = 0;
      local_res8[0] = 0;
      uVar6 = uVar10;
      do {
        uVar7 = local_res8[0];
        FUN_1417846f0(param_1,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        uVar5 = UGCombatTextWidget::GetPrivateStaticClass();
        uVar5 = FUN_1417985e0(uVar5,param_1,0,0,0,0,0,0,0);
        *(undefined8 *)(uVar7 + *(longlong *)(param_1 + 0x40)) = uVar5;
        local_1a8 = 0;
        uStack_1a0 = (ulonglong *)0x0;
        plVar8 = *(longlong **)(uVar7 + *(longlong *)(param_1 + 0x110));
        FArchive::FArchive(local_198);
        local_108 = 0;
        local_198[0] = &PTR_FUN_143f4a100;
        local_100 = &local_1a8;
        local_f8 = 0;
        FArchive::SetIsSaving(local_198,1);
        FArchive::SetIsPersistent(local_198,0);
        local_16e = local_16e & 0xfd;
        local_16f = local_16f & 0x9f;
        local_198[0] = &PTR_FUN_144f51198;
        (**(code **)(*plVar8 + 0xa8))(plVar8,local_198);
        plVar8 = *(longlong **)(local_res8[0] + *(longlong *)(param_1 + 0x40));
        FArchive::FArchive(local_e8);
        local_58 = 0;
        local_e8[0] = &PTR_FUN_144f50fa8;
        local_50 = &local_1a8;
        FArchive::SetIsLoading(local_e8,1);
        FArchive::SetIsPersistent(local_e8,0);
        local_be = local_be & 0xfd;
        local_bf = local_bf & 0xdf;
        (**(code **)(*plVar8 + 0xa8))(plVar8,local_e8);
        FArchive::~FArchive(local_e8);
        FArchive::~FArchive(local_198);
        if (local_1a8 != 0) {
          FMemory::Free();
        }
        uVar11 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar11;
        local_res8[0] = local_res8[0] + 8;
      } while ((int)uVar11 < *(int *)(param_1 + 0x118));
    }
    *(undefined4 *)(param_1 + 0x118) = 0;
    if (*(int *)(param_1 + 0x11c) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x110,0);
    }
  }
  iVar4 = *(int *)(param_1 + 0x48);
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    if (*(int *)(param_1 + 0x3c) != 0) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x30,0);
    }
    iVar4 = *(int *)(param_1 + 0x48);
    uVar6 = uVar10;
    uVar7 = uVar10;
    if (0 < iVar4) {
      do {
        if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + uVar7) + 0x99) & 2) != 0) {
          iVar4 = *(int *)(param_1 + 0x38);
          *(int *)(param_1 + 0x38) = iVar4 + 1;
          if (*(int *)(param_1 + 0x3c) < iVar4 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x30,iVar4);
          }
          *(int *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar4 * 4) = (int)uVar6;
        }
        iVar4 = *(int *)(param_1 + 0x48);
        uVar11 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar11;
        uVar7 = uVar7 + 8;
      } while ((int)uVar11 < iVar4);
    }
  }
  if ((0 < iVar4) && (*(int *)(param_1 + 0x70) == *(int *)(param_1 + 0x9c))) {
    TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
    ::Empty(param_1 + 0x68,0);
    local_res8[0] = local_res8[0] & 0xffffffff00000000;
    if (0 < *(int *)(param_1 + 0x48)) {
      uStack_1a0 = local_res8;
      uVar6 = uVar10;
      do {
        local_1a8 = *(longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)(int)uVar6 * 8) + 0x90;
        FUN_1415ec610(param_1 + 0x68,local_res8 + 1,&local_1a8,0);
        uVar11 = (int)local_res8[0] + 1;
        uVar6 = (ulonglong)uVar11;
        local_res8[0] = CONCAT44(local_res8[0]._4_4_,uVar11);
      } while ((int)uVar11 < *(int *)(param_1 + 0x48));
    }
  }
  local_1a8 = CONCAT44(uRam00000001464af954,_DAT_1464af950);
  uStack_1a0 = (ulonglong *)CONCAT44(uRam00000001464af95c,uRam00000001464af958);
  iVar4 = UObjectBaseUtility::GetLinkerCustomVersion(param_1,&local_1a8);
  if (iVar4 < 2) {
    bVar2 = false;
    bVar3 = 0;
    if (0 < *(int *)(param_1 + 0x48)) {
      uVar6 = uVar10;
      uVar7 = uVar10;
      bVar9 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + uVar6 * 8);
        bVar3 = bVar9;
        if (((lVar1 != 0) && (bVar3 = *(byte *)(lVar1 + 0x152) >> 3 & 1, uVar6 != 0)) &&
           (bVar12 = bVar3 != bVar9, bVar3 = bVar9, bVar12)) {
          bVar2 = true;
          break;
        }
        uVar11 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar11;
        uVar6 = uVar6 + 1;
        bVar9 = bVar3;
      } while ((int)uVar11 < *(int *)(param_1 + 0x48));
    }
    *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) & 0xfe;
    if (bVar2) {
      bVar3 = 0;
    }
    *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | bVar3;
    plVar8 = *(longlong **)(param_1 + 0x40);
    uVar6 = (longlong)*(int *)(param_1 + 0x48) & 0x1fffffffffffffff;
    if (plVar8 + *(int *)(param_1 + 0x48) < plVar8) {
      uVar6 = uVar10;
    }
    if (uVar6 != 0) {
      do {
        lVar1 = *plVar8;
        if (lVar1 != 0) {
          *(byte *)(lVar1 + 0x152) =
               *(byte *)(lVar1 + 0x152) ^
               (*(char *)(param_1 + 0x60) << 3 ^ *(byte *)(lVar1 + 0x152)) & 8;
        }
        plVar8 = plVar8 + 1;
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar6);
    }
  }
  return;
}



// FUNCTION 1426cc8a0 Rehash body=545 status=ok
// SIG undefined Rehash(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TSet<TTuple<FRigidBodyIndexPair,bool>,TDefaultMapHashableKeyFuncs<FRigidBodyIndexPair,bool,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  undefined1 auStack_88 [32];
  int local_68;
  uint uStack_64;
  uint *puStack_60;
  undefined4 local_58;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  longlong *local_48;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar9 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar9 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar9) {
      uVar11 = 0;
      uVar12 = (ulonglong)uVar9;
      do {
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar11;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar11 = uVar11 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar10 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_60 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puStack_60;
      }
      uVar9 = *puVar13;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar9 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar5 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar5) goto LAB_1426cc9df;
        uVar9 = puVar13[lVar6 + 1];
      }
      uStack_64 = -uVar9 & uVar9;
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
LAB_1426cc9df:
        iStack_54 = iVar3;
      }
    }
    local_58 = 0xffffffff;
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    uStack_24 = uStack_4c;
    local_48 = param_1;
    puStack_38 = puStack_60;
    if (iStack_54 < iVar3) {
      do {
        lVar6 = *local_48 + (longlong)iStack_2c * 0x14;
        uVar4 = *(undefined8 *)(*local_48 + (longlong)iStack_2c * 0x14);
        uVar9 = (int)((ulonglong)uVar4 >> 0x20) * 0x17 + (int)uVar4 & (int)*plVar2 - 1U;
        *(uint *)(lVar6 + 0x10) = uVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0xc) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4) =
             iStack_2c;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 1426ccad0 FUN_1426ccad0 body=375 status=ok
// SIG undefined FUN_1426ccad0(void)

void FUN_1426ccad0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar2 = (longlong *)FUN_1426e2550(*(undefined4 *)(param_1 + 0x1b0));
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x358))
              (plVar2,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysicalAnimationComponent.cpp"
               ,0x1b3);
  }
  plVar6 = *(longlong **)(param_1 + 0x188);
  plVar5 = plVar6 + (longlong)*(int *)(param_1 + 400) * 2;
  for (; plVar6 != plVar5; plVar6 = plVar6 + 2) {
    lVar1 = *plVar6;
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 8) != 0) {
        plVar3 = (longlong *)FUN_1426e2550(*(undefined4 *)(lVar1 + 0x10));
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x358))
                    (plVar3,
                     "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ConstraintInstance.cpp"
                     ,0x2bd);
        }
        (**(code **)**(undefined8 **)(lVar1 + 8))();
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x360))(plVar3);
        }
        *(undefined8 *)(lVar1 + 8) = 0;
      }
      lVar1 = *plVar6;
      if (lVar1 != 0) {
        TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar1 + 0x1a8);
        FMemory::operator_delete(lVar1,0x1b8);
      }
      *plVar6 = 0;
    }
    puVar4 = (undefined8 *)plVar6[1];
    if (puVar4 != (undefined8 *)0x0) {
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x68))(plVar2,puVar4,1);
        puVar4 = (undefined8 *)plVar6[1];
      }
      (**(code **)*puVar4)();
      plVar6[1] = 0;
    }
  }
  *(undefined4 *)(param_1 + 400) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x194)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo((undefined8 *)(param_1 + 0x188),0);
  }
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001426ccc39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x360))(plVar2);
    return;
  }
  return;
}



// FUNCTION 1426ccc50 FUN_1426ccc50 body=358 status=ok
// SIG undefined FUN_1426ccc50(void)

void FUN_1426ccc50(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)param_1[7];
  for (iVar2 = (int)param_1[8]; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = &PTR__scalar_deleting_destructor__1440fbd58;
    if (puVar1[10] != 0) {
      FMemory::Free();
    }
    puVar1 = puVar1 + 0x1c;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)((longlong)param_1 + 0x44) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<224,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 7,0);
  }
  FUN_140973e50(param_1 + 0xb,0);
  puVar1 = (undefined8 *)param_1[9];
  for (iVar2 = (int)param_1[10]; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = &PTR__scalar_deleting_destructor__1440fbd58;
    if (puVar1[10] != 0) {
      FMemory::Free();
    }
    puVar1 = puVar1 + 0x1a;
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if (*(int *)((longlong)param_1 + 0x54) != 0) {
    TArray<FSpriteDrawCallRecord,FDefaultAllocator>::ResizeTo(param_1 + 9,0);
  }
  puVar1 = (undefined8 *)param_1[5];
  for (iVar2 = (int)param_1[6]; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = &PTR__scalar_deleting_destructor__1440fbd58;
    if (puVar1[10] != 0) {
      FMemory::Free();
    }
    puVar1 = puVar1 + 0x16;
  }
  *(undefined4 *)(param_1 + 6) = 0;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    TArray<FTTLRaderInfo,FDefaultAllocator>::ResizeTo(param_1 + 5,0);
  }
  puVar1 = (undefined8 *)param_1[0xd];
  for (iVar2 = (int)param_1[0xe]; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = &PTR__scalar_deleting_destructor__1440fbd58;
    if (puVar1[10] != 0) {
      FMemory::Free();
    }
    puVar1 = puVar1 + 0x11;
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (*(int *)((longlong)param_1 + 0x74) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0xd,0);
  }
  FUN_1426c0c50(param_1 + 5);
                    /* WARNING: Could not recover jumptable at 0x0001426ccdaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x290))(param_1);
  return;
}



// FUNCTION 1426ccdc0 Serialize body=47 status=ok
// SIG undefined Serialize(void)

undefined1 FConstraintInstance::Serialize(undefined8 param_1,undefined8 param_2)

{
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0088);
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0138);
  return 0;
}



// FUNCTION 1426ccdf0 FUN_1426ccdf0 body=272 status=ok
// SIG undefined FUN_1426ccdf0(void)

void FUN_1426ccdf0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char local_res8 [8];
  byte local_res10 [8];
  undefined1 local_28 [16];
  undefined1 *local_18;
  undefined1 **local_10;
  
  FUN_141763960();
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_28,param_2);
  local_18 = local_28;
  piVar1 = (int *)(param_1 + 0xf0);
  local_10 = &local_18;
  FUN_141661f40(&local_18,piVar1);
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_28);
  if (((*(byte *)(param_2 + 5) & 1) != 0) &&
     (((*(int *)(param_1 + 0xfc) == 0 && *(int *)(param_1 + 0xf8) == 0) &&
      *(int *)(param_1 + 0xf4) == 0) && *piVar1 == 0)) {
    UObjectBaseUtility::MarkPackageDirty(param_1);
    piVar5 = (int *)FGuid::NewGuid(local_28);
    iVar2 = piVar5[1];
    iVar3 = piVar5[2];
    iVar4 = piVar5[3];
    *piVar1 = *piVar5;
    *(int *)(param_1 + 0xf4) = iVar2;
    *(int *)(param_1 + 0xf8) = iVar3;
    *(int *)(param_1 + 0xfc) = iVar4;
  }
  local_res8[0] = param_2[0xe] != 0;
  (**(code **)(*param_2 + 8))(param_2,local_res8);
  if (local_res8[0] != '\0') {
    if (0x11e < (int)param_2[8]) {
      local_res10[0] = *(byte *)(param_1 + 0x9a) >> 1 & 1;
      (**(code **)(*param_2 + 8))(param_2,local_res10);
      *(byte *)(param_1 + 0x9a) =
           *(byte *)(param_1 + 0x9a) ^ (local_res10[0] * '\x02' ^ *(byte *)(param_1 + 0x9a)) & 2;
    }
    FUN_141722260(param_1 + 0xd8,param_2,param_1,0,1,0);
  }
  return;
}



// FUNCTION 1426ccf00 Serialize body=132 status=ok
// SIG undefined Serialize(void)

void UPhysicsAsset::Serialize(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_141763960();
  FUN_1426b6dc0(param_2,param_1 + 0xb8);
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    if (*(longlong *)(param_1 + 0xf8) != 0) {
      uVar1 = FMemory::Realloc(*(longlong *)(param_1 + 0xf8),0,0);
      *(undefined8 *)(param_1 + 0xf8) = uVar1;
    }
    *(undefined4 *)(param_1 + 0x100) = 0;
    TSet<TTuple<FRigidBodyIndexPair,bool>,TDefaultMapHashableKeyFuncs<FRigidBodyIndexPair,bool,0>,FDefaultSetAllocator>
    ::ConditionalRehash(param_1 + 0xb8,*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xec),0);
  }
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0088);
  FArchive::UsingCustomVersion(param_2,&DAT_1464af950);
  return;
}



// FUNCTION 1426ccf90 FUN_1426ccf90 body=63 status=ok
// SIG undefined FUN_1426ccf90(void)

void FUN_1426ccf90(longlong param_1,undefined1 param_2)

{
  longlong local_res8 [4];
  undefined1 *local_18;
  longlong *plStack_10;
  
  plStack_10 = local_res8;
  *(undefined1 *)(param_1 + 0x188) = param_2;
  local_18 = &LAB_1426ba910;
  local_res8[0] = param_1;
  FConstraintInstance::ExecuteOnUnbrokenJointReadWrite(0x426ba910,&local_18);
  return;
}



// FUNCTION 1426ccfd0 SetAngularDriveParams body=129 status=ok
// SIG undefined SetAngularDriveParams(void)

void FConstraintInstance::SetAngularDriveParams
               (longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong local_res8 [4];
  undefined1 *local_18;
  longlong *plStack_10;
  
  *(undefined4 *)(param_1 + 0x150) = param_2;
  plStack_10 = local_res8;
  *(undefined4 *)(param_1 + 0x154) = param_3;
  *(undefined4 *)(param_1 + 0x158) = param_4;
  *(undefined4 *)(param_1 + 0x140) = param_2;
  *(undefined4 *)(param_1 + 0x144) = param_3;
  *(undefined4 *)(param_1 + 0x148) = param_4;
  local_18 = &LAB_1426ba910;
  *(undefined4 *)(param_1 + 0x160) = param_2;
  *(undefined4 *)(param_1 + 0x164) = param_3;
  *(undefined4 *)(param_1 + 0x168) = param_4;
  local_res8[0] = param_1;
  ExecuteOnUnbrokenJointReadWrite(0x426ba910,&local_18);
  return;
}



// FUNCTION 1426cd060 SetAngularOrientationTarget body=160 status=ok
// SIG undefined SetAngularOrientationTarget(void)

void FConstraintInstance::SetAngularOrientationTarget(longlong param_1,undefined8 *param_2)

{
  float local_38;
  float fStack_34;
  float local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 *local_18;
  undefined8 *puStack_10;
  
  FRotator::FRotator(&local_38);
  if (((local_38 != *(float *)(param_1 + 0x170)) || (fStack_34 != *(float *)(param_1 + 0x174))) ||
     (local_30 != *(float *)(param_1 + 0x178))) {
    *(ulonglong *)(param_1 + 0x170) = CONCAT44(fStack_34,local_38);
    *(float *)(param_1 + 0x178) = local_30;
    puStack_10 = &local_28;
    local_28 = *param_2;
    uStack_20 = param_2[1];
    local_18 = &LAB_1426baa40;
    ExecuteOnUnbrokenJointReadWrite(param_1,&local_18);
  }
  return;
}



// FUNCTION 1426cd100 FUN_1426cd100 body=72 status=ok
// SIG undefined FUN_1426cd100(void)

void FUN_1426cd100(longlong param_1,char param_2)

{
  longlong local_res8 [4];
  undefined1 *local_18;
  longlong *plStack_10;
  
  *(byte *)(param_1 + 0x16c) = *(byte *)(param_1 + 0x16c) & 0xfd;
  plStack_10 = local_res8;
  *(byte *)(param_1 + 0x16c) = *(byte *)(param_1 + 0x16c) | param_2 * '\x02';
  local_18 = &LAB_1426ba910;
  local_res8[0] = param_1;
  FConstraintInstance::ExecuteOnUnbrokenJointReadWrite(0x426ba910,&local_18);
  return;
}



// FUNCTION 1426cd150 SetAngularVelocityDriveTwistAndSwing body=89 status=ok
// SIG undefined SetAngularVelocityDriveTwistAndSwing(void)

void FConstraintInstance::SetAngularVelocityDriveTwistAndSwing
               (longlong param_1,char param_2,char param_3)

{
  longlong local_res8 [4];
  undefined1 *local_18;
  longlong *plStack_10;
  
  *(byte *)(param_1 + 0x14c) = *(byte *)(param_1 + 0x14c) & 0xfd;
  plStack_10 = local_res8;
  *(byte *)(param_1 + 0x15c) = *(byte *)(param_1 + 0x15c) & 0xfd;
  *(byte *)(param_1 + 0x14c) = *(byte *)(param_1 + 0x14c) | param_2 * '\x02';
  *(byte *)(param_1 + 0x15c) = *(byte *)(param_1 + 0x15c) | param_3 * '\x02';
  local_18 = &LAB_1426ba910;
  local_res8[0] = param_1;
  ExecuteOnUnbrokenJointReadWrite(0x426ba910,&local_18);
  return;
}



// FUNCTION 1426cd1b0 SetAngularVelocityTarget body=131 status=ok
// SIG undefined SetAngularVelocityTarget(void)

void FConstraintInstance::SetAngularVelocityTarget(longlong param_1,float *param_2)

{
  undefined8 local_28;
  float local_20;
  undefined1 *local_18;
  undefined8 *puStack_10;
  
  if (((*param_2 != *(float *)(param_1 + 0x17c)) || (param_2[1] != *(float *)(param_1 + 0x180))) ||
     (param_2[2] != *(float *)(param_1 + 0x184))) {
    *(undefined8 *)(param_1 + 0x17c) = *(undefined8 *)param_2;
    *(float *)(param_1 + 0x184) = param_2[2];
    local_20 = param_2[2];
    local_28 = *(undefined8 *)param_2;
    puStack_10 = &local_28;
    local_18 = &LAB_1426bacd0;
    ExecuteOnUnbrokenJointReadWrite(0x426bacd0,&local_18);
  }
  return;
}



// FUNCTION 1426cd240 SetDisableCollision body=82 status=ok
// SIG undefined SetDisableCollision(void)

void FConstraintInstance::SetDisableCollision(longlong param_1,byte param_2)

{
  byte *local_res8;
  byte local_res10 [24];
  code *local_18;
  undefined1 **ppuStack_10;
  
  *(byte *)(param_1 + 0x18c) = *(byte *)(param_1 + 0x18c) & 0xfe;
  local_res8 = local_res10;
  *(byte *)(param_1 + 0x18c) = *(byte *)(param_1 + 0x18c) | param_2 & 1;
  ppuStack_10 = &local_res8;
  local_18 = UE4Function_Private::
             TFunctionRefCaller<<lambda_cf99150ca8050fb082d6d12cd03deb8f>_const_,void___cdecl(physx::PxD6Joint_*)>
             ::Call;
  local_res10[0] = param_2;
  ExecuteOnUnbrokenJointReadWrite(0x426bab50,&local_18);
  return;
}



// FUNCTION 1426cd2a0 SetLinearDriveParams body=129 status=ok
// SIG undefined SetLinearDriveParams(void)

void FConstraintInstance::SetLinearDriveParams
               (longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong local_res8 [4];
  undefined1 *local_18;
  longlong *plStack_10;
  
  *(undefined4 *)(param_1 + 0x10c) = param_2;
  plStack_10 = local_res8;
  *(undefined4 *)(param_1 + 0x110) = param_3;
  *(undefined4 *)(param_1 + 0x114) = param_4;
  *(undefined4 *)(param_1 + 0x11c) = param_2;
  *(undefined4 *)(param_1 + 0x120) = param_3;
  *(undefined4 *)(param_1 + 0x124) = param_4;
  local_18 = &LAB_1426ba9d0;
  *(undefined4 *)(param_1 + 300) = param_2;
  *(undefined4 *)(param_1 + 0x130) = param_3;
  *(undefined4 *)(param_1 + 0x134) = param_4;
  local_res8[0] = param_1;
  ExecuteOnUnbrokenJointReadWrite(0x426ba9d0,&local_18);
  return;
}



// FUNCTION 1426cd330 SetLinearPositionDrive body=98 status=ok
// SIG undefined SetLinearPositionDrive(void)

void FConstraintInstance::SetLinearPositionDrive
               (longlong param_1,byte param_2,byte param_3,byte param_4)

{
  longlong local_res8 [4];
  undefined1 *local_18;
  longlong *plStack_10;
  
  *(byte *)(param_1 + 0x118) = *(byte *)(param_1 + 0x118) & 0xfe;
  plStack_10 = local_res8;
  *(byte *)(param_1 + 0x118) = *(byte *)(param_1 + 0x118) | param_2;
  *(byte *)(param_1 + 0x128) = *(byte *)(param_1 + 0x128) & 0xfe;
  *(byte *)(param_1 + 0x138) = *(byte *)(param_1 + 0x138) & 0xfe;
  *(byte *)(param_1 + 0x128) = *(byte *)(param_1 + 0x128) | param_3;
  *(byte *)(param_1 + 0x138) = *(byte *)(param_1 + 0x138) | param_4;
  local_18 = &LAB_1426ba9d0;
  local_res8[0] = param_1;
  ExecuteOnUnbrokenJointReadWrite(0x426ba9d0,&local_18);
  return;
}



// FUNCTION 1426cd3a0 SetLinearPositionTarget body=131 status=ok
// SIG undefined SetLinearPositionTarget(void)

void FConstraintInstance::SetLinearPositionTarget(longlong param_1,float *param_2)

{
  undefined8 local_28;
  float local_20;
  undefined1 *local_18;
  undefined8 *puStack_10;
  
  if (((*param_2 != *(float *)(param_1 + 0xf4)) || (param_2[1] != *(float *)(param_1 + 0xf8))) ||
     (param_2[2] != *(float *)(param_1 + 0xfc))) {
    *(undefined8 *)(param_1 + 0xf4) = *(undefined8 *)param_2;
    *(float *)(param_1 + 0xfc) = param_2[2];
    local_20 = param_2[2];
    local_28 = *(undefined8 *)param_2;
    puStack_10 = &local_28;
    local_18 = &LAB_1426bac80;
    ExecuteOnUnbrokenJointReadWrite(0x426bac80,&local_18);
  }
  return;
}



// FUNCTION 1426cd430 SetLinearVelocityDrive body=106 status=ok
// SIG undefined SetLinearVelocityDrive(void)

void FConstraintInstance::SetLinearVelocityDrive
               (longlong param_1,char param_2,char param_3,char param_4)

{
  longlong local_res8 [4];
  undefined1 *local_18;
  longlong *plStack_10;
  
  *(byte *)(param_1 + 0x118) = *(byte *)(param_1 + 0x118) & 0xfd;
  plStack_10 = local_res8;
  *(byte *)(param_1 + 0x128) = *(byte *)(param_1 + 0x128) & 0xfd;
  *(byte *)(param_1 + 0x118) = *(byte *)(param_1 + 0x118) | param_2 * '\x02';
  *(byte *)(param_1 + 0x138) = *(byte *)(param_1 + 0x138) & 0xfd;
  *(byte *)(param_1 + 0x128) = *(byte *)(param_1 + 0x128) | param_3 * '\x02';
  *(byte *)(param_1 + 0x138) = *(byte *)(param_1 + 0x138) | param_4 * '\x02';
  local_18 = &LAB_1426ba9d0;
  local_res8[0] = param_1;
  ExecuteOnUnbrokenJointReadWrite(0x426ba9d0,&local_18);
  return;
}



// FUNCTION 1426cd4a0 SetLinearVelocityTarget body=131 status=ok
// SIG undefined SetLinearVelocityTarget(void)

void FConstraintInstance::SetLinearVelocityTarget(longlong param_1,float *param_2)

{
  undefined8 local_28;
  float local_20;
  code *local_18;
  undefined8 *puStack_10;
  
  if (((*param_2 != *(float *)(param_1 + 0x100)) || (param_2[1] != *(float *)(param_1 + 0x104))) ||
     (param_2[2] != *(float *)(param_1 + 0x108))) {
    *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)param_2;
    *(float *)(param_1 + 0x108) = param_2[2];
    local_20 = param_2[2];
    local_28 = *(undefined8 *)param_2;
    puStack_10 = &local_28;
    local_18 = FUN_1426baa50;
    ExecuteOnUnbrokenJointReadWrite(0x426baa50,&local_18);
  }
  return;
}



// FUNCTION 1426cd530 FUN_1426cd530 body=229 status=ok
// SIG undefined FUN_1426cd530(void)

void FUN_1426cd530(longlong param_1,longlong param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong local_res8;
  undefined1 *local_28;
  longlong *plStack_20;
  
  plStack_20 = &local_res8;
  fVar3 = param_3 * *(float *)(param_2 + 0x20);
  fVar1 = param_3 * *(float *)(param_2 + 0xc);
  fVar2 = param_3 * *(float *)(param_2 + 0x10);
  *(float *)(param_1 + 0x150) = fVar1;
  *(float *)(param_1 + 0x158) = fVar3;
  *(float *)(param_1 + 0x154) = fVar2;
  *(float *)(param_1 + 0x140) = fVar1;
  *(float *)(param_1 + 0x144) = fVar2;
  *(float *)(param_1 + 0x148) = fVar3;
  *(float *)(param_1 + 0x160) = fVar1;
  local_28 = &LAB_1426ba910;
  *(float *)(param_1 + 0x164) = fVar2;
  *(float *)(param_1 + 0x168) = fVar3;
  local_res8 = param_1;
  FConstraintInstance::ExecuteOnUnbrokenJointReadWrite(0x426ba910,&local_28);
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    fVar1 = param_3 * *(float *)(param_2 + 0x14);
    fVar2 = param_3 * *(float *)(param_2 + 0x18);
    param_3 = param_3 * *(float *)(param_2 + 0x1c);
  }
  else {
    fVar1 = 0.0;
    fVar2 = 0.0;
    param_3 = 0.0;
  }
  FConstraintInstance::SetLinearDriveParams(param_1,fVar1,fVar2,param_3);
  return;
}



// FUNCTION 1426cd620 FUN_1426cd620 body=70 status=ok
// SIG undefined FUN_1426cd620(void)

void FUN_1426cd620(longlong param_1,byte param_2)

{
  longlong local_res8 [4];
  undefined1 *local_18;
  longlong *plStack_10;
  
  *(byte *)(param_1 + 0x16c) = *(byte *)(param_1 + 0x16c) & 0xfe;
  plStack_10 = local_res8;
  *(byte *)(param_1 + 0x16c) = *(byte *)(param_1 + 0x16c) | param_2;
  local_18 = &LAB_1426ba910;
  local_res8[0] = param_1;
  FConstraintInstance::ExecuteOnUnbrokenJointReadWrite(0x426ba910,&local_18);
  return;
}



// FUNCTION 1426cd670 SetOrientationDriveTwistAndSwing body=84 status=ok
// SIG undefined SetOrientationDriveTwistAndSwing(void)

void FConstraintInstance::SetOrientationDriveTwistAndSwing
               (longlong param_1,byte param_2,byte param_3)

{
  longlong local_res8 [4];
  undefined1 *local_18;
  longlong *plStack_10;
  
  *(byte *)(param_1 + 0x14c) = *(byte *)(param_1 + 0x14c) & 0xfe;
  plStack_10 = local_res8;
  *(byte *)(param_1 + 0x15c) = *(byte *)(param_1 + 0x15c) & 0xfe;
  *(byte *)(param_1 + 0x14c) = *(byte *)(param_1 + 0x14c) | param_2;
  *(byte *)(param_1 + 0x15c) = *(byte *)(param_1 + 0x15c) | param_3;
  local_18 = &LAB_1426ba910;
  local_res8[0] = param_1;
  ExecuteOnUnbrokenJointReadWrite(0x426ba910,&local_18);
  return;
}



// FUNCTION 1426cd6d0 FUN_1426cd6d0 body=638 status=ok
// SIG undefined FUN_1426cd6d0(void)

void FUN_1426cd6d0(longlong param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint local_res10 [6];
  float *local_38;
  uint *local_30;
  code *local_28;
  float **ppfStack_20;
  
  fVar1 = param_3[5];
  fVar2 = param_3[6];
  local_res10[0] = (uint)(param_2 == 0);
  if (param_2 == 0) {
    *(float *)(param_1 + 0x30) = param_3[4];
    *(float *)(param_1 + 0x34) = fVar1;
    *(float *)(param_1 + 0x38) = fVar2;
    fVar1 = *param_3;
    fVar2 = param_3[1];
    fVar3 = param_3[2];
    fVar4 = param_3[3];
    fVar5 = fVar2 * 0.0 - fVar3 * 0.0;
    fVar6 = fVar3 * 1.0 - fVar1 * 0.0;
    fVar7 = fVar1 * 0.0 - fVar2 * 1.0;
    fVar5 = fVar5 + fVar5;
    fVar6 = fVar6 + fVar6;
    fVar7 = fVar7 + fVar7;
    *(ulonglong *)(param_1 + 0x3c) =
         CONCAT44((fVar5 * fVar3 - fVar7 * fVar1) + fVar4 * fVar6 + 0.0,
                  (fVar7 * fVar2 - fVar6 * fVar3) + fVar4 * fVar5 + 1.0);
    *(float *)(param_1 + 0x44) = (fVar6 * fVar1 - fVar5 * fVar2) + fVar4 * fVar7 + 0.0;
    fVar1 = *param_3;
    fVar2 = param_3[1];
    fVar3 = param_3[2];
    fVar4 = param_3[3];
    fVar5 = fVar2 * 0.0 - fVar3 * 1.0;
    fVar6 = fVar3 * 0.0 - fVar1 * 0.0;
    fVar7 = fVar1 * 1.0 - fVar2 * 0.0;
    fVar5 = fVar5 + fVar5;
    fVar6 = fVar6 + fVar6;
    fVar7 = fVar7 + fVar7;
    *(ulonglong *)(param_1 + 0x48) =
         CONCAT44((fVar5 * fVar3 - fVar7 * fVar1) + fVar4 * fVar6 + 1.0,
                  (fVar7 * fVar2 - fVar6 * fVar3) + fVar4 * fVar5 + 0.0);
    *(float *)(param_1 + 0x50) = (fVar6 * fVar1 - fVar5 * fVar2) + fVar4 * fVar7 + 0.0;
  }
  else {
    *(float *)(param_1 + 0x54) = param_3[4];
    *(float *)(param_1 + 0x58) = fVar1;
    *(float *)(param_1 + 0x5c) = fVar2;
    fVar1 = *param_3;
    fVar2 = param_3[1];
    fVar3 = param_3[2];
    fVar4 = param_3[3];
    fVar5 = fVar2 * 0.0 - fVar3 * 0.0;
    fVar6 = fVar3 * 1.0 - fVar1 * 0.0;
    fVar7 = fVar1 * 0.0 - fVar2 * 1.0;
    fVar5 = fVar5 + fVar5;
    fVar6 = fVar6 + fVar6;
    fVar7 = fVar7 + fVar7;
    *(ulonglong *)(param_1 + 0x60) =
         CONCAT44((fVar5 * fVar3 - fVar7 * fVar1) + fVar4 * fVar6 + 0.0,
                  (fVar7 * fVar2 - fVar6 * fVar3) + fVar4 * fVar5 + 1.0);
    *(float *)(param_1 + 0x68) = (fVar6 * fVar1 - fVar5 * fVar2) + fVar4 * fVar7 + 0.0;
    fVar1 = *param_3;
    fVar2 = param_3[1];
    fVar3 = param_3[2];
    fVar4 = param_3[3];
    fVar5 = fVar2 * 0.0 - fVar3 * 1.0;
    fVar6 = fVar3 * 0.0 - fVar1 * 0.0;
    fVar7 = fVar1 * 1.0 - fVar2 * 0.0;
    fVar5 = fVar5 + fVar5;
    fVar6 = fVar6 + fVar6;
    fVar7 = fVar7 + fVar7;
    *(ulonglong *)(param_1 + 0x6c) =
         CONCAT44((fVar5 * fVar3 - fVar7 * fVar1) + fVar4 * fVar6 + 1.0,
                  (fVar7 * fVar2 - fVar6 * fVar3) + fVar4 * fVar5 + 0.0);
    *(float *)(param_1 + 0x74) = (fVar6 * fVar1 - fVar5 * fVar2) + fVar4 * fVar7 + 0.0;
  }
  local_30 = local_res10;
  ppfStack_20 = &local_38;
  local_28 = FUN_1426baac0;
  local_38 = param_3;
  FConstraintInstance::ExecuteOnUnbrokenJointReadWrite(0x426baac0,&local_28);
  return;
}



// FUNCTION 1426cd950 SetRefOrientation body=203 status=ok
// SIG undefined SetRefOrientation(void)

void FConstraintInstance::SetRefOrientation
               (longlong param_1,int param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint local_res10 [6];
  undefined8 local_48;
  undefined4 local_40;
  undefined1 *local_38;
  undefined8 **ppuStack_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  uint *local_10;
  
  local_res10[0] = (uint)(param_2 == 0);
  if (param_2 == 0) {
    local_48 = *(undefined8 *)(param_1 + 0x30);
    local_40 = *(undefined4 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x3c) = *param_3;
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_3 + 1);
    *(undefined8 *)(param_1 + 0x48) = *param_4;
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_4 + 1);
  }
  else {
    local_48 = *(undefined8 *)(param_1 + 0x54);
    local_40 = *(undefined4 *)(param_1 + 0x5c);
    *(undefined8 *)(param_1 + 0x60) = *param_3;
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_3 + 1);
    *(undefined8 *)(param_1 + 0x6c) = *param_4;
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_4 + 1);
  }
  local_18 = &local_48;
  local_10 = local_res10;
  ppuStack_30 = &local_28;
  local_38 = &LAB_1426babc0;
  local_28 = param_3;
  local_20 = param_4;
  ExecuteOnUnbrokenJointReadWrite(0x426babc0,&local_38);
  return;
}



// FUNCTION 1426cda20 FUN_1426cda20 body=123 status=ok
// SIG undefined FUN_1426cda20(void)

void FUN_1426cda20(longlong param_1,int param_2,undefined8 *param_3,char param_4)

{
  uint local_res20 [2];
  code *local_38;
  longlong *plStack_30;
  longlong local_28;
  uint *local_20;
  undefined8 *local_18;
  
  local_res20[0] = (uint)(param_2 == 0);
  if (param_4 == '\0') {
    if (param_2 == 0) {
      *(undefined8 *)(param_1 + 0x30) = *param_3;
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_3 + 1);
    }
    else {
      *(undefined8 *)(param_1 + 0x54) = *param_3;
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_3 + 1);
    }
  }
  local_20 = local_res20;
  plStack_30 = &local_28;
  local_38 = FUN_1426bac10;
  local_28 = param_1;
  local_18 = param_3;
  FConstraintInstance::ExecuteOnUnbrokenJointReadWrite(0x426bac10,&local_38);
  return;
}



// FUNCTION 1426cdaa0 FUN_1426cdaa0 body=106 status=ok
// SIG undefined FUN_1426cdaa0(void)

void FUN_1426cdaa0(longlong param_1,undefined8 param_2)

{
  if ((*(longlong *)(param_1 + 0x180) != 0) && (*(longlong *)(param_1 + 0x1a8) != 0)) {
    USkeletalMeshComponent::UnregisterOnPhysicsCreatedDelegate();
  }
  *(undefined8 *)(param_1 + 0x180) = param_2;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  if (*(int *)(param_1 + 0x1a4) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x198,0);
  }
  FUN_1426ccad0(param_1);
  FUN_1426cab70(param_1);
  return;
}



// FUNCTION 1426cdb10 FUN_1426cdb10 body=206 status=ok
// SIG undefined FUN_1426cdb10(void)

void FUN_1426cdb10(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  if (0.0 <= param_2) {
    *(float *)(param_1 + 0x178) = param_2;
    plVar2 = (longlong *)FUN_1426e2550(*(undefined4 *)(param_1 + 0x1b0));
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x358))
                (plVar2,
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysicalAnimationComponent.cpp"
                 ,0x19e);
      iVar3 = 0;
      if (0 < *(int *)(param_1 + 0x1a0)) {
        lVar4 = 0;
        do {
          lVar1 = *(longlong *)(lVar4 + *(longlong *)(param_1 + 0x188));
          if (lVar1 != 0) {
            FUN_1426cd530(lVar1,*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 0x28,
                          *(undefined4 *)(param_1 + 0x178));
          }
          iVar3 = iVar3 + 1;
          lVar4 = lVar4 + 0x10;
        } while (iVar3 < *(int *)(param_1 + 0x1a0));
      }
      (**(code **)(*plVar2 + 0x360))(plVar2);
    }
  }
  return;
}



// FUNCTION 1426cdbe0 SetTangents body=702 status=ok
// SIG undefined SetTangents(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FDynamicMeshVertex::SetTangents
               (longlong param_1,float *param_2,undefined8 param_3,float *param_4)

{
  undefined1 auVar1 [13];
  undefined1 auVar2 [13];
  undefined1 auVar3 [13];
  undefined1 auVar4 [13];
  undefined1 auVar5 [13];
  undefined1 auVar6 [13];
  undefined1 auVar7 [13];
  ulonglong uVar8;
  uint5 uVar9;
  unkbyte9 Var10;
  undefined1 auVar11 [13];
  undefined1 auVar12 [13];
  undefined1 auVar13 [13];
  int iVar14;
  int iVar15;
  int iVar16;
  undefined1 uVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  uint uVar25;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  float local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  float local_68;
  float local_64;
  float local_60;
  undefined4 local_5c;
  float local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  
  iVar14 = (int)ROUND(*param_2 * 127.0 + *param_2 * 127.0 + 0.5) >> 1;
  iVar16 = -0x80;
  if ((-0x81 < iVar14) && (iVar16 = 0x7f, iVar14 < 0x7f)) {
    iVar16 = iVar14;
  }
  *(char *)(param_1 + 0x4c) = (char)iVar16;
  iVar15 = (int)ROUND(param_2[1] * 127.0 + param_2[1] * 127.0 + 0.5) >> 1;
  iVar14 = -0x80;
  iVar16 = iVar14;
  if ((-0x81 < iVar15) && (iVar16 = 0x7f, iVar15 < 0x7f)) {
    iVar16 = iVar15;
  }
  *(char *)(param_1 + 0x4d) = (char)iVar16;
  iVar16 = (int)ROUND(param_2[2] * 127.0 + param_2[2] * 127.0 + 0.5) >> 1;
  if ((-0x81 < iVar16) && (iVar14 = 0x7f, iVar16 < 0x7f)) {
    iVar14 = iVar16;
  }
  *(char *)(param_1 + 0x4e) = (char)iVar14;
  *(undefined1 *)(param_1 + 0x4f) = 0x7f;
  iVar15 = (int)ROUND(*param_4 * 127.0 + *param_4 * 127.0 + 0.5) >> 1;
  iVar14 = -0x80;
  iVar16 = iVar14;
  if ((-0x81 < iVar15) && (iVar16 = 0x7f, iVar15 < 0x7f)) {
    iVar16 = iVar15;
  }
  *(char *)(param_1 + 0x50) = (char)iVar16;
  iVar16 = (int)ROUND(param_4[1] * 127.0 + param_4[1] * 127.0 + 0.5) >> 1;
  if ((-0x81 < iVar16) && (iVar14 = 0x7f, iVar16 < 0x7f)) {
    iVar14 = iVar16;
  }
  *(char *)(param_1 + 0x51) = (char)iVar14;
  iVar14 = (int)ROUND(param_4[2] * 127.0 + param_4[2] * 127.0 + 0.5) >> 1;
  iVar16 = -0x80;
  if ((-0x81 < iVar14) && (iVar16 = 0x7f, iVar14 < 0x7f)) {
    iVar16 = iVar14;
  }
  *(char *)(param_1 + 0x52) = (char)iVar16;
  *(undefined1 *)(param_1 + 0x53) = 0x7f;
  FPackedNormal::FPackedNormal(local_res8,param_4);
  FPackedNormal::FPackedNormal(local_res10,param_3);
  FPackedNormal::FPackedNormal(local_res20,param_2);
  auVar1[0xc] = (char)(local_res8[0] >> 0x18);
  auVar1._0_12_ = ZEXT712(0);
  uVar9 = CONCAT32(auVar1._10_3_,(ushort)(byte)(local_res8[0] >> 0x10));
  auVar13._5_8_ = 0;
  auVar13._0_5_ = uVar9;
  Var10 = CONCAT72(SUB137(auVar13 << 0x40,6),(ushort)(byte)(local_res8[0] >> 8));
  auVar20._0_4_ = local_res8[0] & 0xff;
  auVar20._4_9_ = Var10;
  auVar20._13_3_ = 0;
  local_6c = 0;
  auVar19._0_4_ = -(uint)(0x7f < auVar20._0_4_);
  auVar19._4_4_ = -(uint)(0x7f < (uint)Var10);
  auVar19._8_4_ = -(uint)(0x7f < (int)uVar9);
  auVar19._12_4_ = -(uint)(0x7f < (uint3)(auVar1._10_3_ >> 0x10));
  local_5c = 0;
  local_4c = 0;
  auVar20 = auVar19 & _DAT_144101760 | auVar20;
  uVar8 = (ulonglong)CONCAT12(SUB41(local_res10._0_4_,1),(short)local_res10._0_4_) &
          0xffffffffffff00ff;
  auVar2._8_4_ = 0;
  auVar2._0_8_ = uVar8;
  auVar2[0xc] = SUB41(local_res10._0_4_,3);
  auVar3[8] = SUB41(local_res10._0_4_,2);
  auVar3._0_8_ = uVar8;
  auVar3[9] = 0;
  auVar3._10_3_ = auVar2._10_3_;
  auVar11._5_8_ = 0;
  auVar11._0_5_ = auVar3._8_5_;
  auVar4[4] = SUB41(local_res10._0_4_,1);
  auVar4._0_4_ = (uint)uVar8;
  auVar4[5] = 0;
  auVar4._6_7_ = SUB137(auVar11 << 0x40,6);
  auVar22._0_4_ = (uint)uVar8 & 0xffff;
  auVar22._4_9_ = auVar4._4_9_;
  auVar22._13_3_ = 0;
  local_58 = (float)auVar20._0_4_ * 0.007874016;
  local_54 = (float)auVar20._4_4_ * 0.007874016;
  local_50 = (float)auVar20._8_4_ * 0.007874016;
  auVar21._0_4_ = -(uint)(0x7f < auVar22._0_4_);
  auVar21._4_4_ = -(uint)(0x7f < auVar4._4_4_);
  auVar21._8_4_ = -(uint)(0x7f < auVar3._8_4_);
  auVar21._12_4_ = -(uint)(0x7f < (uint3)(auVar2._10_3_ >> 0x10));
  auVar22 = auVar21 & _DAT_144101760 | auVar22;
  local_68 = (float)auVar22._0_4_ * 0.007874016;
  local_64 = (float)auVar22._4_4_ * 0.007874016;
  local_60 = (float)auVar22._8_4_ * 0.007874016;
  auVar5[0xc] = SUB41(local_res20._0_4_,3);
  auVar5._0_12_ = ZEXT812(0);
  auVar6._10_3_ = auVar5._10_3_;
  auVar6._0_10_ = (unkuint10)SUB41(local_res20._0_4_,2) << 0x40;
  auVar12._5_8_ = 0;
  auVar12._0_5_ = auVar6._8_5_;
  uVar25 = CONCAT13(0,CONCAT12(SUB41(local_res20._0_4_,1),(ushort)(byte)local_res20._0_4_));
  auVar7[4] = SUB41(local_res20._0_4_,1);
  auVar7._0_4_ = uVar25;
  auVar7[5] = 0;
  auVar7._6_7_ = SUB137(auVar12 << 0x40,6);
  auVar24._0_4_ = uVar25 & 0xffff;
  auVar24._4_9_ = auVar7._4_9_;
  auVar24._13_3_ = 0;
  auVar23._0_4_ = -(uint)(0x7f < auVar24._0_4_);
  auVar23._4_4_ = -(uint)(0x7f < auVar7._4_4_);
  auVar23._8_4_ = -(uint)(0x7f < auVar6._8_4_);
  auVar23._12_4_ = -(uint)(0x7f < (uint3)(auVar5._10_3_ >> 0x10));
  auVar24 = auVar23 & _DAT_144101760 | auVar24;
  local_78 = (float)auVar24._0_4_ * 0.007874016;
  local_74 = (float)auVar24._4_4_ * 0.007874016;
  local_70 = (float)auVar24._8_4_ * 0.007874016;
  local_48 = 0;
  uStack_40 = 0x3f80000000000000;
  fVar18 = (float)FMatrix::Determinant(&local_78);
  if (0.0 <= fVar18) {
    fVar18 = 1.0;
  }
  else {
    fVar18 = -1.0;
  }
  uVar17 = 0x7f;
  if (fVar18 < 0.0) {
    uVar17 = 0x81;
  }
  *(undefined1 *)(param_1 + 0x53) = uVar17;
  return;
}



// FUNCTION 1426cdea0 SetupNonUniformHelper body=237 status=ok
// SIG undefined SetupNonUniformHelper(void)

void SetupNonUniformHelper(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *param_1;
  if (((ABS(fVar3) <= 0.0001) && (ABS(param_1[1]) <= 0.0001)) && (ABS(param_1[2]) <= 0.0001)) {
    param_1[0] = 0.1;
    param_1[1] = 0.1;
    param_1[2] = 0.1;
    fVar3 = *param_1;
  }
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar4 = fVar1;
  if (fVar1 <= fVar3) {
    fVar4 = fVar3;
  }
  *(ulonglong *)param_4 = CONCAT44(fVar1,fVar3) & 0x7fffffff7fffffff;
  param_4[2] = ABS(fVar2);
  if (fVar4 <= fVar2) {
    fVar4 = fVar2;
  }
  fVar3 = param_4[1];
  if (*param_4 <= param_4[1]) {
    fVar3 = *param_4;
  }
  if (param_4[2] <= fVar3) {
    fVar3 = param_4[2];
  }
  *param_3 = fVar3;
  if (fVar4 < 0.0) {
    fVar3 = -fVar3;
  }
  *param_2 = fVar3;
  if (ABS(fVar3) <= 1e-08) {
    *param_2 = 0.1;
    *param_3 = 0.1;
  }
  return;
}



// FUNCTION 1426cdf90 FUN_1426cdf90 body=691 status=ok
// SIG undefined FUN_1426cdf90(void)

void FUN_1426cdf90(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

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
  
  *(undefined1 *)(param_1 + 0x18) = 1;
  iVar4 = DAT_1464a820c;
  if (((DAT_146b07b78 != 0x800) && (iVar4 = DAT_1464a8208, DAT_146b07b78 != 0x1000)) ||
     (uVar3 = DAT_146b07b80, iVar4 != 0)) {
    uVar3 = DAT_146b07b7c | DAT_146b07b78;
  }
  iVar11 = 0;
  *(uint *)(param_1 + 8) = uVar3 | 0xff;
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
          goto LAB_1426ce197;
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
LAB_1426ce197:
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



// FUNCTION 1426ce250 FUN_1426ce250 body=227 status=ok
// SIG undefined FUN_1426ce250(void)

undefined8 FUN_1426ce250(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  
  if (*(char *)((longlong)param_1 + 0xf1c) != '\0') {
    return 1;
  }
  cVar2 = *(char *)((longlong)param_1 + 0x2ed);
  lVar4 = param_1[0x17f];
  iVar6 = (**(code **)(*param_1 + 0x4e8))();
  plVar7 = (longlong *)param_1[0x17e];
  plVar1 = plVar7 + (int)param_1[0x17f];
  for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
    if (0.0 < *(float *)(*plVar7 + 0xf4)) goto LAB_1426ce2e3;
  }
  if ((*(byte *)((longlong)param_1 + 0xb1a) & 8) == 0) {
    bVar3 = false;
  }
  else {
LAB_1426ce2e3:
    bVar3 = true;
  }
  cVar5 = (**(code **)(*param_1 + 0x828))(param_1);
  if (((((int)(uint)(cVar2 == '\0') < (int)lVar4) && (iVar6 - 2U < 2)) && (bVar3)) &&
     (cVar5 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 1426ce340 FUN_1426ce340 body=107 status=ok
// SIG undefined FUN_1426ce340(void)

void FUN_1426ce340(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    plVar1 = (longlong *)FUN_1426e2550(*(undefined4 *)(param_1 + 0x10));
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x358))
                (plVar1,
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ConstraintInstance.cpp"
                 ,0x2bd);
    }
    (**(code **)**(undefined8 **)(param_1 + 8))();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x360))(plVar1);
    }
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 1426ce3c0 FUN_1426ce3c0 body=57 status=ok
// SIG undefined FUN_1426ce3c0(void)

void FUN_1426ce3c0(undefined8 param_1)

{
  undefined8 local_res8 [4];
  code *local_18;
  undefined8 *puStack_10;
  
  puStack_10 = local_res8;
  local_18 = FUN_1426ba9f0;
  local_res8[0] = param_1;
  FConstraintInstance::ExecuteOnUnbrokenJointReadWrite(0x426ba9f0,&local_18);
  return;
}



// FUNCTION 1426ce400 FUN_1426ce400 body=57 status=ok
// SIG undefined FUN_1426ce400(void)

void FUN_1426ce400(undefined8 param_1)

{
  undefined8 local_res8 [4];
  undefined1 *local_18;
  undefined8 *puStack_10;
  
  puStack_10 = local_res8;
  local_18 = &LAB_1426ba960;
  local_res8[0] = param_1;
  FConstraintInstance::ExecuteOnUnbrokenJointReadWrite(0x426ba960,&local_18);
  return;
}



// FUNCTION 1426ce440 FUN_1426ce440 body=2605 status=ok
// SIG undefined FUN_1426ce440(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1426ce440(longlong *param_1,longlong *param_2,char param_3,char param_4,int param_5)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  short sVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  char cVar12;
  int iVar13;
  undefined4 uVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong *plVar17;
  undefined8 uVar18;
  float *pfVar19;
  longlong lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar25 [16];
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
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  undefined8 local_1e8;
  undefined8 local_1e0;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  int local_1c8;
  int local_1c4;
  longlong *local_1c0;
  undefined8 local_1b8;
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
  undefined8 local_168;
  float fStack_160;
  float fStack_15c;
  longlong *local_148;
  longlong local_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined1 local_118 [8];
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  if ((((*(byte *)(param_1 + 0x17) & 4) != 0) &&
      ((local_148 = param_2, *(char *)((longlong)param_1 + 0xb15) != '\x01' ||
       ((param_3 == '\x01' && (cVar12 = (**(code **)(*param_1 + 0x408))(), cVar12 != '\0')))))) &&
     ((param_1[0x24] != 0 || (lVar15 = FUN_1423407b0(param_1), lVar15 != 0)))) {
    lVar15 = param_1[0x24];
    if (lVar15 == 0) {
      lVar15 = FUN_1423407b0(param_1);
    }
    lVar15 = *(longlong *)(lVar15 + 0x218);
    if (lVar15 != 0) {
      pfVar1 = (float *)(param_1 + 0x42);
      local_168 = lVar15;
      uVar16 = FUN_1424a1490();
      cVar12 = FUN_14249ac90(uVar16,param_1,param_3,param_4);
      if (cVar12 == '\0') {
        if ((param_5 == 0) &&
           (((*(byte *)((longlong)param_1 + 0xb1c) & 2) != 0 ||
            (iVar13 = FUN_142696340(param_1 + 0x76), iVar13 == 2)))) {
          FUN_1426e6ee0(lVar15,param_1,param_3,param_4);
        }
        else {
          local_1d8 = *(float *)(param_1 + 0x46);
          local_1d4 = *(float *)((longlong)param_1 + 0x234);
          local_1d0 = *(float *)(param_1 + 0x47);
          if ((*(byte *)((longlong)param_1 + 0xb1c) & 0x20) == 0) {
            local_140 = FUN_1423af5a0(param_1);
            if (((local_140 != 0) && (param_1[0xe3] != 0)) &&
               (iVar13 = (int)param_1[0x17f], 0 < iVar13)) {
              local_1c8 = (int)param_1[((longlong)(int)param_1[0xee] + 0x73) * 2];
              local_1c4 = iVar13;
              uVar14 = USkeletalMeshComponent::GetPhysicsSceneType
                                 (local_140,lVar15,*(undefined1 *)((longlong)param_1 + 0xb14));
              plVar17 = (longlong *)FUN_1426e2530(lVar15,uVar14);
              local_1c0 = plVar17;
              if (plVar17 != (longlong *)0x0) {
                (**(code **)(*plVar17 + 0x358))
                          (plVar17,
                           "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysAnim.cpp"
                           ,0x273);
              }
              lVar15 = local_168;
              if (0 < iVar13) {
                lVar20 = 0;
                do {
                  lVar4 = *(longlong *)(param_1[0x17e] + lVar20 * 8);
                  plVar17 = *(longlong **)(lVar4 + 0x110);
                  if (((plVar17 == (longlong *)0x0) &&
                      (plVar17 = *(longlong **)(lVar4 + 0x118), plVar17 == (longlong *)0x0)) ||
                     ((param_3 != '\x01' &&
                      ((cVar12 = FUN_1426aaac0(lVar4), cVar12 != '\0' &&
                       (cVar12 = FBodyInstance::IsValidBodyInstance(lVar4), cVar12 != '\0')))))) {
                    if (((*(byte *)((longlong)param_1 + 0xb1a) & 8) == 0) &&
                       (*(float *)(lVar4 + 0xf4) <= 0.0)) {
                      FWeakObjectPtr::IsValid(lVar4 + 0x140);
                    }
                  }
                  else {
                    fVar39 = fRam0000000146b07a18;
                    fVar38 = fRam0000000146b07a14;
                    fVar37 = _DAT_146b07a10;
                    sVar3 = *(short *)(lVar4 + 4);
                    if ((sVar3 != -1) && (sVar3 < local_1c8)) {
                      auVar21 = *(undefined1 (*) [16])(param_1 + 0x46);
                      fVar5 = auVar21._0_4_;
                      fVar7 = auVar21._4_4_;
                      fVar9 = auVar21._8_4_;
                      fVar11 = auVar21._12_4_;
                      local_128 = 0.0;
                      fStack_124 = 0.0;
                      fStack_120 = 0.0;
                      fStack_11c = fRam0000000146b07a1c;
                      local_108 = (float)((uint)_DAT_146b07a10 & _DAT_146b07a20);
                      fStack_104 = (float)((uint)fRam0000000146b07a14 & uRam0000000146b07a24);
                      fStack_100 = (float)((uint)fRam0000000146b07a18 & uRam0000000146b07a28);
                      fStack_fc = (float)((uint)fRam0000000146b07a1c & uRam0000000146b07a2c);
                      pfVar19 = (float *)((longlong)sVar3 * 0x30 + *local_148);
                      _local_118 = ZEXT816(0);
                      auVar2 = *(undefined1 (*) [16])(pfVar19 + 8);
                      fVar6 = auVar2._0_4_;
                      fVar8 = auVar2._4_4_;
                      fVar10 = auVar2._8_4_;
                      local_168 = CONCAT44(fRam0000000146b07ab4,_DAT_146b07ab0);
                      fStack_160 = fRam0000000146b07ab8;
                      fStack_15c = fRam0000000146b07abc;
                      auVar21 = minps(auVar2,auVar21);
                      auVar22._4_4_ = -(uint)(auVar21._4_4_ < fRam0000000146b07ab4);
                      auVar22._0_4_ = -(uint)(auVar21._0_4_ < _DAT_146b07ab0);
                      auVar22._8_4_ = -(uint)(auVar21._8_4_ < fRam0000000146b07ab8);
                      auVar22._12_4_ = -(uint)(auVar21._12_4_ < fRam0000000146b07abc);
                      iVar13 = movmskps((int)local_148,auVar22);
                      if (iVar13 == 0) {
                        fVar37 = *pfVar1;
                        fVar38 = *(float *)((longlong)param_1 + 0x214);
                        fVar39 = *(float *)(param_1 + 0x43);
                        fVar32 = *(float *)((longlong)param_1 + 0x21c);
                        fVar27 = *pfVar19;
                        fVar30 = pfVar19[1];
                        fVar40 = pfVar19[2];
                        fVar41 = pfVar19[3];
                        fVar31 = fVar5 * pfVar19[4];
                        fVar28 = fVar7 * pfVar19[5];
                        fVar24 = fVar9 * pfVar19[6];
                        fVar33 = fVar11 * pfVar19[7];
                        local_128 = fVar41 * fVar37 * _DAT_146b07a70 + fVar32 * fVar27 +
                                    fVar38 * fVar40 * _DAT_146b07a60 +
                                    fVar39 * fVar30 * _DAT_146b07a50;
                        fStack_124 = fVar40 * fVar37 * fRam0000000146b07a74 + fVar32 * fVar30 +
                                     fVar38 * fVar41 * fRam0000000146b07a64 +
                                     fVar39 * fVar27 * fRam0000000146b07a54;
                        fStack_120 = fVar30 * fVar37 * fRam0000000146b07a78 + fVar32 * fVar40 +
                                     fVar38 * fVar27 * fRam0000000146b07a68 +
                                     fVar39 * fVar41 * fRam0000000146b07a58;
                        fStack_11c = fVar27 * fVar37 * fRam0000000146b07a7c + fVar32 * fVar41 +
                                     fVar38 * fVar30 * fRam0000000146b07a6c +
                                     fVar39 * fVar40 * fRam0000000146b07a5c;
                        fVar27 = fVar24 * fVar38 - fVar28 * fVar39;
                        fVar30 = fVar31 * fVar39 - fVar24 * fVar37;
                        fVar40 = fVar28 * fVar37 - fVar31 * fVar38;
                        fVar41 = fVar33 * fVar32 - fVar33 * fVar32;
                        fVar27 = fVar27 + fVar27;
                        fVar30 = fVar30 + fVar30;
                        fVar40 = fVar40 + fVar40;
                        fVar41 = fVar41 + fVar41;
                        local_118._4_4_ =
                             (fVar27 * fVar39 - fVar40 * fVar37) + fVar32 * fVar30 + fVar28 +
                             *(float *)((longlong)param_1 + 0x224);
                        local_118._0_4_ =
                             (fVar40 * fVar38 - fVar30 * fVar39) + fVar32 * fVar27 + fVar31 +
                             *(float *)(param_1 + 0x44);
                        fStack_110 = (fVar30 * fVar37 - fVar27 * fVar38) + fVar32 * fVar40 + fVar24
                                     + *(float *)(param_1 + 0x45);
                        fStack_10c = (fVar41 * fVar32 - fVar41 * fVar32) + fVar32 * fVar41 + fVar33
                                     + *(float *)((longlong)param_1 + 0x22c);
                      }
                      else {
                        fVar32 = *pfVar1;
                        fVar27 = *(float *)((longlong)param_1 + 0x214);
                        fVar30 = *(float *)(param_1 + 0x43);
                        fVar40 = *(float *)((longlong)param_1 + 0x21c);
                        fVar26 = fVar27 + fVar27;
                        fVar29 = fVar30 + fVar30;
                        fVar35 = fVar32 * (fVar32 + fVar32);
                        fVar33 = fVar40 * (fVar32 + fVar32);
                        fVar41 = *pfVar19;
                        fVar31 = pfVar19[1];
                        fVar28 = pfVar19[2];
                        fVar24 = pfVar19[3];
                        fVar51 = (fVar40 * fVar29 + fVar32 * fVar26) * fVar5;
                        fVar52 = (fVar33 + fVar27 * fVar29) * fVar7;
                        fVar53 = (fVar40 * fVar26 + fVar32 * fVar29) * fVar9;
                        fVar42 = fVar7 * (fVar32 * fVar26 - fVar40 * fVar29);
                        fVar44 = fVar9 * (fVar27 * fVar29 - fVar33);
                        fVar46 = fVar5 * (fVar32 * fVar29 - fVar40 * fVar26);
                        fVar32 = *(float *)(param_1 + 0x44);
                        fVar40 = *(float *)((longlong)param_1 + 0x224);
                        fVar33 = *(float *)(param_1 + 0x45);
                        fVar23 = (float)((uint)((_DAT_146b07a10 -
                                                (fVar30 * fVar29 + fVar27 * fVar26)) * fVar5) &
                                        _DAT_146b07a20);
                        fVar29 = (float)((uint)((fRam0000000146b07a14 - (fVar30 * fVar29 + fVar35))
                                               * fVar7) & uRam0000000146b07a24);
                        fVar26 = (float)((uint)((fRam0000000146b07a18 - (fVar27 * fVar26 + fVar35))
                                               * fVar9) & uRam0000000146b07a28);
                        fVar35 = (float)((uint)((fRam0000000146b07a1c - (fVar35 + fVar35)) * fVar11)
                                        & uRam0000000146b07a2c);
                        fVar27 = fVar31 + fVar31;
                        fVar30 = fVar28 + fVar28;
                        fVar36 = (fVar41 + fVar41) * fVar41;
                        fVar34 = fVar24 * (fVar41 + fVar41);
                        fVar48 = (fVar24 * fVar30 + fVar41 * fVar27) * fVar6;
                        fVar49 = (fVar34 + fVar31 * fVar30) * fVar8;
                        fVar50 = (fVar24 * fVar27 + fVar41 * fVar30) * fVar10;
                        fVar43 = fVar8 * (fVar41 * fVar27 - fVar24 * fVar30);
                        fVar45 = fVar10 * (fVar31 * fVar30 - fVar34);
                        fVar47 = fVar6 * (fVar41 * fVar30 - fVar24 * fVar27);
                        fVar24 = (float)((uint)((_DAT_146b07a10 -
                                                (fVar30 * fVar28 + fVar27 * fVar31)) * fVar6) &
                                        _DAT_146b07a20);
                        fVar28 = (float)((uint)((fRam0000000146b07a14 - (fVar30 * fVar28 + fVar36))
                                               * fVar8) & uRam0000000146b07a24);
                        fVar31 = (float)((uint)((fRam0000000146b07a18 - (fVar27 * fVar31 + fVar36))
                                               * fVar10) & uRam0000000146b07a28);
                        fVar34 = (float)((uint)((fRam0000000146b07a1c - (fVar36 + fVar36)) *
                                               auVar2._12_4_) & uRam0000000146b07a2c);
                        fVar27 = pfVar19[4];
                        fVar30 = pfVar19[5];
                        fVar41 = pfVar19[6];
                        local_1a8 = fVar48 * fVar42 + fVar24 * fVar23 + fVar47 * fVar53 +
                                    fVar34 * fVar32;
                        fStack_1a4 = fVar48 * fVar29 + fVar24 * fVar51 + fVar47 * fVar44 +
                                     fVar34 * fVar40;
                        fStack_1a0 = fVar48 * fVar52 + fVar24 * fVar46 + fVar47 * fVar26 +
                                     fVar34 * fVar33;
                        fStack_19c = fVar48 * fVar35 + fVar24 * fVar35 + fVar47 * fVar35 +
                                     fVar34 * fRam0000000146b07a1c;
                        local_198 = fVar28 * fVar42 + fVar43 * fVar23 + fVar49 * fVar53 +
                                    fVar34 * fVar32;
                        fStack_194 = fVar28 * fVar29 + fVar43 * fVar51 + fVar49 * fVar44 +
                                     fVar34 * fVar40;
                        fStack_190 = fVar28 * fVar52 + fVar43 * fVar46 + fVar49 * fVar26 +
                                     fVar34 * fVar33;
                        fStack_18c = fVar28 * fVar35 + fVar43 * fVar35 + fVar49 * fVar35 +
                                     fVar34 * fRam0000000146b07a1c;
                        local_188 = fVar45 * fVar42 + fVar50 * fVar23 + fVar31 * fVar53 +
                                    fVar34 * fVar32;
                        fStack_184 = fVar45 * fVar29 + fVar50 * fVar51 + fVar31 * fVar44 +
                                     fVar34 * fVar40;
                        fStack_180 = fVar45 * fVar52 + fVar50 * fVar46 + fVar31 * fVar26 +
                                     fVar34 * fVar33;
                        fStack_17c = fVar45 * fVar35 + fVar50 * fVar35 + fVar31 * fVar35 +
                                     fVar34 * fRam0000000146b07a1c;
                        local_178 = fVar30 * fVar42 + fVar27 * fVar23 + fVar41 * fVar53 +
                                    fRam0000000146b07a1c * fVar32;
                        fStack_174 = fVar30 * fVar29 + fVar27 * fVar51 + fVar41 * fVar44 +
                                     fRam0000000146b07a1c * fVar40;
                        fStack_170 = fVar30 * fVar52 + fVar27 * fVar46 + fVar41 * fVar26 +
                                     fRam0000000146b07a1c * fVar33;
                        fStack_16c = fVar30 * fVar35 + fVar27 * fVar35 + fVar41 * fVar35 +
                                     fRam0000000146b07a1c * fRam0000000146b07a1c;
                        FMatrix::RemoveScaling(&local_1a8);
                        fVar37 = (float)(-(uint)((float)local_168 <= fVar6 * fVar5) &
                                         (_DAT_146b07aa0 ^ (uint)fVar37) ^ _DAT_146b07aa0);
                        fVar38 = (float)(-(uint)(local_168._4_4_ <= fVar8 * fVar7) &
                                         (uRam0000000146b07aa4 ^ (uint)fVar38) ^
                                        uRam0000000146b07aa4);
                        fVar39 = (float)(-(uint)(fStack_160 <= fVar10 * fVar9) &
                                         (uRam0000000146b07aa8 ^ (uint)fVar39) ^
                                        uRam0000000146b07aa8);
                        local_1a8 = local_1a8 * fVar37;
                        fStack_1a0 = fStack_1a0 * fVar37;
                        fStack_1a4 = fStack_1a4 * fVar37;
                        fStack_190 = fStack_190 * fVar38;
                        fStack_194 = fStack_194 * fVar38;
                        local_198 = local_198 * fVar38;
                        fStack_180 = fStack_180 * fVar39;
                        local_188 = local_188 * fVar39;
                        fStack_184 = fStack_184 * fVar39;
                        FQuat::FQuat(&local_138,&local_1a8);
                        local_168 = CONCAT44(local_168._4_4_,0x322bcc77);
                        auVar25._0_4_ = local_138 * local_138 + fStack_130 * fStack_130;
                        auVar25._4_4_ = fStack_134 * fStack_134 + fStack_12c * fStack_12c;
                        auVar25._8_4_ = fStack_130 * fStack_130 + local_138 * local_138;
                        auVar25._12_4_ = fStack_12c * fStack_12c + fStack_134 * fStack_134;
                        fVar27 = auVar25._4_4_ + auVar25._0_4_;
                        fVar30 = auVar25._8_4_ + auVar25._4_4_;
                        fVar40 = auVar25._12_4_ + auVar25._8_4_;
                        fVar41 = auVar25._0_4_ + auVar25._12_4_;
                        auVar21._4_4_ = fVar30;
                        auVar21._0_4_ = fVar27;
                        auVar21._8_4_ = fVar40;
                        auVar21._12_4_ = fVar41;
                        auVar21 = rsqrtps(auVar25,auVar21);
                        fVar37 = auVar21._0_4_;
                        fVar38 = auVar21._4_4_;
                        fVar39 = auVar21._8_4_;
                        fVar32 = auVar21._12_4_;
                        fVar37 = (_DAT_146b07a90 - fVar37 * fVar37 * fVar27 * _DAT_146b07a90) *
                                 fVar37 + fVar37;
                        fVar38 = (fRam0000000146b07a94 -
                                 fVar38 * fVar38 * fVar30 * fRam0000000146b07a94) * fVar38 + fVar38;
                        fVar39 = (fRam0000000146b07a98 -
                                 fVar39 * fVar39 * fVar40 * fRam0000000146b07a98) * fVar39 + fVar39;
                        fVar32 = (fRam0000000146b07a9c -
                                 fVar32 * fVar32 * fVar41 * fRam0000000146b07a9c) * fVar32 + fVar32;
                        local_118._4_4_ = fStack_174;
                        local_118._0_4_ = local_178;
                        fStack_110 = fStack_170;
                        local_138 = (float)(((uint)(((_DAT_146b07a90 -
                                                     fVar37 * fVar37 * fVar27 * _DAT_146b07a90) *
                                                     fVar37 + fVar37) * local_138) ^ _DAT_146b07a80)
                                            & -(uint)(1e-08 <= fVar27) ^ _DAT_146b07a80);
                        fStack_134 = (float)(((uint)(((fRam0000000146b07a94 -
                                                      fVar38 * fVar38 *
                                                      fVar30 * fRam0000000146b07a94) * fVar38 +
                                                     fVar38) * fStack_134) ^ uRam0000000146b07a84) &
                                             -(uint)(1e-08 <= fVar30) ^ uRam0000000146b07a84);
                        fStack_130 = (float)(((uint)(((fRam0000000146b07a98 -
                                                      fVar39 * fVar39 *
                                                      fVar40 * fRam0000000146b07a98) * fVar39 +
                                                     fVar39) * fStack_130) ^ uRam0000000146b07a88) &
                                             -(uint)(1e-08 <= fVar40) ^ uRam0000000146b07a88);
                        fStack_12c = (float)(((uint)(((fRam0000000146b07a9c -
                                                      fVar32 * fVar32 *
                                                      fVar41 * fRam0000000146b07a9c) * fVar32 +
                                                     fVar32) * fStack_12c) ^ uRam0000000146b07a8c) &
                                             -(uint)(1e-08 <= fVar41) ^ uRam0000000146b07a8c);
                        fStack_10c = 0.0;
                        local_128 = local_138;
                        fStack_124 = fStack_134;
                        fStack_120 = fStack_130;
                        fStack_11c = fStack_12c;
                      }
                      fStack_fc = auVar2._12_4_ * fVar11;
                      fStack_100 = fVar10 * fVar9;
                      fStack_104 = fVar8 * fVar7;
                      local_108 = fVar6 * fVar5;
                      cVar12 = FTransform::IsValid(&local_128);
                      if (cVar12 == '\0') {
                        *(byte *)((longlong)param_1 + 0xb1a) =
                             *(byte *)((longlong)param_1 + 0xb1a) | 0x40;
                      }
                      else {
                        if (param_3 == '\x01') {
                          U2PTransform(&local_168,&local_128);
                          FUN_14062e090(&local_168);
                          (**(code **)(*plVar17 + 0xa8))(plVar17,&local_168,1);
                        }
                        else {
                          FUN_1426ead30(lVar15,lVar4,&local_128,1);
                        }
                        if (*(char *)(*(longlong *)(*(longlong *)(local_140 + 0x40) + lVar20 * 8) +
                                     0x308) == '\0') {
                          if (((0.0001 < ABS(local_1d8 - local_1d4)) ||
                              (0.0001 < ABS(local_1d8 - local_1d0))) ||
                             (0.0001 < ABS(local_1d4 - local_1d0))) {
                            FUN_1426aef60(lVar4,&local_1d8,0);
                          }
                          else {
                            local_1e0 = CONCAT44(local_1e0._4_4_,fStack_100);
                            local_1e8 = CONCAT44(fStack_104,local_108);
                            FUN_1426aef60(lVar4,&local_1e8,0);
                          }
                        }
                      }
                    }
                  }
                  lVar20 = lVar20 + 1;
                  plVar17 = local_1c0;
                } while (lVar20 < local_1c4);
              }
              if (plVar17 != (longlong *)0x0) {
                (**(code **)(*plVar17 + 0x360))(plVar17);
              }
            }
          }
          else if (param_1[0x111] != 0) {
            if (param_4 != '\0') {
              uVar16 = *(undefined8 *)**(undefined8 **)(param_1[0x111] + 0x40);
              uVar18 = FUN_1423b0910(param_1,0);
              local_1c0 = (longlong *)0x0;
              local_1b8 = 0;
              local_1e8 = 0;
              local_1e0 = 0;
              FUN_1423a55b0(param_1,&local_1c0);
              local_1f8 = uVar18;
              FUN_1427d5e70(param_1,&local_1e8,&local_1c0,uVar16);
              FBodyInstance::UpdateTriMeshVertices(param_1 + 0x76,&local_1e8);
              if (local_1e8 != 0) {
                FMemory::Free();
              }
              if (local_1c0 != (longlong *)0x0) {
                FMemory::Free();
              }
            }
            FUN_1426a89c0(param_1 + 0x76,pfVar1,param_3);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1426cee70 FUN_1426cee70 body=57 status=ok
// SIG undefined FUN_1426cee70(void)

void FUN_1426cee70(undefined8 param_1)

{
  undefined8 local_res8 [4];
  undefined1 *local_18;
  undefined8 *puStack_10;
  
  puStack_10 = local_res8;
  local_18 = &LAB_1426bac90;
  local_res8[0] = param_1;
  FConstraintInstance::ExecuteOnUnbrokenJointReadWrite(0x426bac90,&local_18);
  return;
}



// FUNCTION 1426ceeb0 UpdatePhysXAngularDrive_AssumesLocked body=117 status=ok
// SIG undefined UpdatePhysXAngularDrive_AssumesLocked(void)

void FAngularDriveConstraint::UpdatePhysXAngularDrive_AssumesLocked
               (longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x48);
  FConstraintDrive::UpdatePhysXDrive_AssumesLocked(param_1 + 0x20,param_2,5,cVar1 == '\0');
  FConstraintDrive::UpdatePhysXDrive_AssumesLocked(param_1 + 0x10,param_2,3,cVar1 != '\0');
  FConstraintDrive::UpdatePhysXDrive_AssumesLocked(param_1,param_2,4,cVar1 != '\0');
  WakeupJointedActors_AssumesLocked(param_2);
  return;
}



// FUNCTION 1426cef30 FUN_1426cef30 body=564 status=ok
// SIG undefined FUN_1426cef30(void)

void FUN_1426cef30(float *param_1,longlong *param_2,float param_3)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float local_58 [5];
  float local_44;
  float local_40;
  
  if ((*(char *)(param_1 + 7) == '\x01') || (*(char *)((longlong)param_1 + 0x1d) == '\x01')) {
    fVar6 = (float)FMath::ClampAngle(param_1[5],0x38d1b717,0x4333fff9);
    fVar6 = fVar6 * 0.017453292;
    local_44 = (float)FMath::ClampAngle(param_1[6],0x38d1b717,0x4333fff9);
    fVar1 = param_1[3];
    local_44 = local_44 * 0.017453292;
    local_58[4] = 1.0;
    if (1.0 <= fVar1) {
      fVar7 = param_1[6];
      if (param_1[5] <= param_1[6]) {
        fVar7 = param_1[5];
      }
      local_58[4] = fVar7 * 0.49;
      if (fVar1 <= fVar7 * 0.49) {
        local_58[4] = fVar1;
      }
    }
    local_58[4] = local_58[4] * 0.017453292;
    local_58[2] = 0.0;
    local_58[3] = 0.0;
    if (local_58[4] == -1.0) {
      local_58[4] = local_44;
      if (fVar6 <= local_44) {
        local_58[4] = fVar6;
      }
      local_58[4] = local_58[4] * 0.49;
      if (0.1 <= local_58[4]) {
        local_58[4] = 0.1;
      }
    }
    local_58[0] = param_1[2];
    local_58[1] = 0.5;
    if (((uint)param_1[4] & 1) != 0) {
      local_58[3] = param_3 * param_1[1] * *DAT_146b07b10;
      local_58[2] = param_3 * *param_1 * *DAT_146b07b28;
    }
    local_40 = fVar6;
    (**(code **)(*param_2 + 0x130))(param_2,local_58);
  }
  uVar4 = 2;
  if (((((uint)param_1[4] & 1) == 0) || (param_3 * *param_1 != 0.0)) ||
     (param_3 * param_1[1] != 0.0)) {
    cVar3 = *(char *)(param_1 + 7);
    bVar2 = false;
LAB_1426cf11b:
    if (cVar3 != '\0') {
      if (cVar3 == '\x01') {
        uVar5 = 1;
        goto LAB_1426cf0ce;
      }
      if (cVar3 == '\x02') {
        uVar5 = 0;
        goto LAB_1426cf0ce;
      }
    }
  }
  else {
    cVar3 = *(char *)(param_1 + 7);
    bVar2 = true;
    if (cVar3 != '\x01') goto LAB_1426cf11b;
  }
  uVar5 = 2;
LAB_1426cf0ce:
  (**(code **)(*param_2 + 0xe8))(param_2,5,uVar5);
  if (((!bVar2) || (*(char *)((longlong)param_1 + 0x1d) != '\x01')) &&
     (cVar3 = *(char *)((longlong)param_1 + 0x1d), cVar3 != '\0')) {
    if (cVar3 == '\x01') {
      uVar4 = 1;
    }
    else if (cVar3 == '\x02') {
      uVar4 = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001426cf15d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0xe8))(param_2,4,uVar4);
  return;
}



// FUNCTION 1426cf170 UpdatePhysXDriveTarget_AssumesLocked body=292 status=ok
// SIG undefined UpdatePhysXDriveTarget_AssumesLocked(void)

void FConstraintProfileProperties::UpdatePhysXDriveTarget_AssumesLocked
               (longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  float local_38;
  float local_34;
  float local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  puVar1 = (undefined8 *)FRotator::Quaternion(param_1 + 0xe4,&local_28);
  local_28 = *puVar1;
  local_20 = *(undefined4 *)(puVar1 + 1);
  local_1c = *(undefined4 *)((longlong)puVar1 + 0xc);
  local_18 = *(undefined4 *)(param_1 + 0x68);
  local_10 = *(undefined4 *)(param_1 + 0x70);
  local_14 = *(undefined4 *)(param_1 + 0x6c);
  (**(code **)(*param_2 + 0x150))(param_2,&local_28);
  local_34 = (float)((ulonglong)*(undefined8 *)(param_1 + 0xf0) >> 0x20) * 2.0 * 3.1415927;
  local_38 = (float)*(undefined8 *)(param_1 + 0xf0) * 2.0 * 3.1415927;
  local_30 = *(float *)(param_1 + 0xf8) * 2.0 * 3.1415927;
  local_28 = *(undefined8 *)(param_1 + 0x74);
  local_20 = *(undefined4 *)(param_1 + 0x7c);
  (**(code **)(*param_2 + 0x160))(param_2,&local_28,&local_38);
  return;
}



// FUNCTION 1426cf2a0 UpdatePhysXDrive_AssumesLocked body=145 status=ok
// SIG undefined UpdatePhysXDrive_AssumesLocked(void)

void FConstraintDrive::UpdatePhysXDrive_AssumesLocked
               (undefined4 *param_1,longlong *param_2,undefined4 param_3,char param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 local_18;
  float local_10;
  undefined4 local_c;
  
  if (param_4 == '\0') {
    local_10 = 3.4028235e+38;
    local_18 = 0;
    local_c = 0;
  }
  else {
    if ((*(byte *)(param_1 + 3) & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *param_1;
    }
    if ((*(byte *)(param_1 + 3) & 2) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = param_1[1];
    }
    local_10 = (float)param_1[2];
    if (local_10 <= 0.0) {
      local_10 = 3.4028235e+38;
    }
    local_18 = CONCAT44(uVar1,uVar2);
    local_c = 1;
  }
  (**(code **)(*param_2 + 0x140))(param_2,param_3,&local_18);
  return;
}



// FUNCTION 1426cf340 UpdatePhysXLinearDrive_AssumesLocked body=338 status=ok
// SIG undefined UpdatePhysXLinearDrive_AssumesLocked(void)

void FLinearDriveConstraint::UpdatePhysXLinearDrive_AssumesLocked
               (longlong param_1,longlong *param_2)

{
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  undefined4 local_1c;
  
  if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
    local_28 = 0;
  }
  else {
    local_28 = *(undefined4 *)(param_1 + 0x18);
  }
  if ((*(byte *)(param_1 + 0x24) & 2) == 0) {
    local_24 = 0;
  }
  else {
    local_24 = *(undefined4 *)(param_1 + 0x1c);
  }
  local_20 = *(float *)(param_1 + 0x20);
  if (local_20 <= 0.0) {
    local_20 = 3.4028235e+38;
  }
  local_1c = 1;
  (**(code **)(*param_2 + 0x140))(param_2,0,&local_28);
  if ((*(byte *)(param_1 + 0x34) & 1) == 0) {
    local_28 = 0;
  }
  else {
    local_28 = *(undefined4 *)(param_1 + 0x28);
  }
  if ((*(byte *)(param_1 + 0x34) & 2) == 0) {
    local_24 = 0;
  }
  else {
    local_24 = *(undefined4 *)(param_1 + 0x2c);
  }
  local_20 = *(float *)(param_1 + 0x30);
  if (local_20 <= 0.0) {
    local_20 = 3.4028235e+38;
  }
  local_1c = 1;
  (**(code **)(*param_2 + 0x140))(param_2,1,&local_28);
  if ((*(byte *)(param_1 + 0x44) & 1) == 0) {
    local_28 = 0;
  }
  else {
    local_28 = *(undefined4 *)(param_1 + 0x38);
  }
  if ((*(byte *)(param_1 + 0x44) & 2) == 0) {
    local_24 = 0;
  }
  else {
    local_24 = *(undefined4 *)(param_1 + 0x3c);
  }
  local_20 = *(float *)(param_1 + 0x40);
  if (local_20 <= 0.0) {
    local_20 = 3.4028235e+38;
  }
  local_1c = 1;
  (**(code **)(*param_2 + 0x140))(param_2,2,&local_28);
  WakeupJointedActors_AssumesLocked(param_2);
  return;
}



// FUNCTION 1426cf4a0 UpdatePhysXLinearLimit_AssumesLocked body=705 status=ok
// SIG undefined UpdatePhysXLinearLimit_AssumesLocked(void)

void FLinearConstraint::UpdatePhysXLinearLimit_AssumesLocked
               (float *param_1,longlong *param_2,float param_3,float param_4)

{
  float fVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  float *pfVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float local_68;
  longlong local_64;
  float local_5c;
  float local_58;
  float local_54;
  
  param_4 = param_4 * param_1[5];
  if (param_4 <= 0.0001) {
    param_4 = 0.0001;
  }
  bVar3 = param_4 < 0.1;
  if (((((uint)param_1[4] & 1) == 0) || (param_3 * *param_1 != 0.0)) ||
     (param_3 * param_1[1] != 0.0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  cVar2 = *(char *)(param_1 + 6);
  uVar8 = 0;
  uVar6 = 0;
  if ((cVar2 == '\x02') || ((cVar2 == '\x01' && (bVar3)))) {
    uVar7 = 0;
  }
  else if (cVar2 == '\0') {
LAB_1426cf54e:
    uVar7 = 2;
  }
  else if (cVar2 == '\x01') {
    uVar7 = 1;
  }
  else {
    uVar7 = uVar8;
    if (cVar2 != '\x02') goto LAB_1426cf54e;
  }
  (**(code **)(*param_2 + 0xe8))(param_2,0,uVar7);
  if ((bVar4) && (cVar2 == '\x01')) {
    (**(code **)(*param_2 + 0xe8))(param_2,0,2);
  }
  cVar2 = *(char *)((longlong)param_1 + 0x19);
  if ((cVar2 == '\x02') || ((cVar2 == '\x01' && (bVar3)))) {
    uVar8 = 0;
  }
  else if (cVar2 == '\0') {
LAB_1426cf5b3:
    uVar8 = 2;
  }
  else if (cVar2 == '\x01') {
    uVar8 = 1;
  }
  else if (cVar2 != '\x02') goto LAB_1426cf5b3;
  (**(code **)(*param_2 + 0xe8))(param_2,1,uVar8);
  if ((bVar4) && (cVar2 == '\x01')) {
    (**(code **)(*param_2 + 0xe8))(param_2,1,2);
  }
  cVar2 = *(char *)((longlong)param_1 + 0x1a);
  if ((cVar2 == '\x02') || ((cVar2 == '\x01' && (bVar3)))) {
    uVar6 = 0;
    goto LAB_1426cf625;
  }
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      uVar6 = 1;
      goto LAB_1426cf625;
    }
    if (cVar2 == '\x02') goto LAB_1426cf625;
  }
  uVar6 = 2;
LAB_1426cf625:
  (**(code **)(*param_2 + 0xe8))(param_2,2,uVar6);
  if ((bVar4) && (cVar2 == '\x01')) {
    (**(code **)(*param_2 + 0xe8))(param_2,2,2);
  }
  if (((*(char *)(param_1 + 6) != '\0') || (*(char *)((longlong)param_1 + 0x19) != '\0')) ||
     (*(char *)((longlong)param_1 + 0x1a) != '\0')) {
    fVar1 = param_1[3];
    fVar9 = 5.0;
    if ((5.0 <= fVar1) && (fVar9 = param_4 * 0.49, fVar1 <= param_4 * 0.49)) {
      fVar9 = fVar1;
    }
    pfVar5 = (float *)(**(code **)(*DAT_146b08400 + 0x20))();
    local_64 = 0;
    local_5c = 0.0;
    local_58 = fVar9;
    if (fVar9 == -1.0) {
      local_58 = *pfVar5 * 0.01;
    }
    local_68 = param_1[2];
    if (((uint)param_1[4] & 1) != 0) {
      local_5c = param_3 * param_1[1] * *DAT_146b07ae0;
      local_64 = (ulonglong)(uint)(param_3 * *param_1 * *DAT_146b07af8) << 0x20;
    }
    local_54 = param_4;
    (**(code **)(*param_2 + 0x110))(param_2,&local_68);
  }
  return;
}



// FUNCTION 1426cf770 FUN_1426cf770 body=520 status=ok
// SIG undefined FUN_1426cf770(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1426cf770(longlong param_1)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  undefined1 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  plVar4 = *(longlong **)(param_1 + 0x68);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x48))(plVar4,*(undefined4 *)(param_1 + 0x28));
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x38))
              (*(longlong **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x28));
    if (*(char *)(param_1 + 0x2d) == '\0') {
      plVar4 = (longlong *)UAudioSettings::GetPrivateStaticClass();
      lVar8 = plVar4[0x1f];
      if (lVar8 == 0) {
        (**(code **)(*plVar4 + 0x368))(plVar4);
        lVar8 = plVar4[0x1f];
      }
      uVar5 = *(undefined1 *)(lVar8 + 0x90);
    }
    else {
      uVar5 = *(undefined1 *)(param_1 + 0x2c);
    }
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x80))(*(longlong **)(param_1 + 0x68),uVar5);
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x58))
              (*(longlong **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x30));
    if (*(char *)(param_1 + 0x35) == '\0') {
      plVar4 = (longlong *)UAudioSettings::GetPrivateStaticClass();
      lVar8 = plVar4[0x1f];
      if (lVar8 == 0) {
        (**(code **)(*plVar4 + 0x368))(plVar4);
        lVar8 = plVar4[0x1f];
      }
      uVar5 = *(undefined1 *)(lVar8 + 0x91);
    }
    else {
      uVar5 = *(undefined1 *)(param_1 + 0x34);
    }
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x90))(*(longlong **)(param_1 + 0x68),uVar5);
    bVar1 = false;
    DAT_1465349f4 = DAT_1465349f4 + 1;
    lVar8 = (longlong)(DAT_1465349e8 + -1);
    if (-1 < DAT_1465349e8 + -1) {
      lVar7 = lVar8 << 4;
      bVar1 = false;
      do {
        if (((*(int *)(lVar7 + 8 + DAT_1465349e0) == 0) ||
            (plVar4 = *(longlong **)(lVar7 + DAT_1465349e0), plVar4 == (longlong *)0x0)) ||
           (cVar3 = (**(code **)(*plVar4 + 0x40))(plVar4,param_1), cVar3 == '\0')) {
          bVar1 = true;
        }
        lVar7 = lVar7 + -0x10;
        lVar8 = lVar8 + -1;
      } while (-1 < lVar8);
    }
    iVar2 = DAT_1465349e8;
    DAT_1465349f4 = DAT_1465349f4 + -1;
    if ((bVar1) && (DAT_1465349f4 < 1)) {
      iVar6 = 0;
      if (0 < DAT_1465349e8) {
        lVar8 = 0;
        do {
          if (((*(int *)(lVar8 + 8 + DAT_1465349e0) == 0) ||
              (*(longlong **)(lVar8 + DAT_1465349e0) == (longlong *)0x0)) ||
             (cVar3 = (**(code **)(**(longlong **)(lVar8 + DAT_1465349e0) + 0x10))(), cVar3 != '\0')
             ) {
            TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1465349e0,iVar6,1,1);
          }
          else {
            iVar6 = iVar6 + 1;
            lVar8 = lVar8 + 0x10;
          }
        } while (iVar6 < DAT_1465349e8);
      }
      _DAT_1465349f0 = DAT_1465349e8 * 2;
      if (_DAT_1465349f0 < 3) {
        _DAT_1465349f0 = 2;
      }
      if ((_DAT_1465349f0 < iVar2) && (DAT_1465349ec != DAT_1465349e8)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1465349e0);
      }
    }
  }
  return;
}



// FUNCTION 1426cf980 FUN_1426cf980 body=388 status=ok
// SIG undefined FUN_1426cf980(void)

void FUN_1426cf980(float *param_1,longlong *param_2,float param_3)

{
  float fVar1;
  char cVar2;
  undefined8 uVar3;
  float local_48 [5];
  float local_34;
  float local_30;
  
  if (*(char *)(param_1 + 6) == '\x01') {
    fVar1 = param_1[3];
    local_34 = param_1[5] * 0.017453292;
    local_48[4] = 1.0;
    if ((1.0 <= fVar1) && (local_48[4] = param_1[5] * 0.95, fVar1 <= local_48[4])) {
      local_48[4] = fVar1;
    }
    local_48[4] = local_48[4] * 0.017453292;
    local_48[2] = 0.0;
    local_48[3] = 0.0;
    local_30 = -local_34;
    if ((local_48[4] == -1.0) && (local_48[4] = (local_34 - local_30) * 0.49, 0.1 <= local_48[4])) {
      local_48[4] = 0.1;
    }
    local_48[0] = param_1[2];
    local_48[1] = 0.5;
    if (((uint)param_1[4] & 1) != 0) {
      local_48[3] = param_3 * param_1[1] * *DAT_146b07b10;
      local_48[2] = param_3 * *param_1 * *DAT_146b07b28;
    }
    (**(code **)(*param_2 + 0x120))(param_2,local_48);
  }
  if (((((uint)param_1[4] & 1) == 0) || (param_3 * *param_1 != 0.0)) ||
     (param_3 * param_1[1] != 0.0)) {
    cVar2 = *(char *)(param_1 + 6);
LAB_1426cfae6:
    if (cVar2 != '\0') {
      if (cVar2 == '\x01') {
        uVar3 = 1;
        goto LAB_1426cfabc;
      }
      if (cVar2 == '\x02') {
        uVar3 = 0;
        goto LAB_1426cfabc;
      }
    }
  }
  else {
    cVar2 = *(char *)(param_1 + 6);
    if (cVar2 != '\x01') goto LAB_1426cfae6;
  }
  uVar3 = 2;
LAB_1426cfabc:
                    /* WARNING: Could not recover jumptable at 0x0001426cfadb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0xe8))(param_2,3,uVar3);
  return;
}



// FUNCTION 1426cfb10 UpdatePhysX_AssumesLocked body=371 status=ok
// SIG undefined UpdatePhysX_AssumesLocked(void)

void FConstraintProfileProperties::UpdatePhysX_AssumesLocked
               (undefined4 *param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ushort local_res8 [4];
  
  bVar1 = *(byte *)(param_1 + 0x40);
  uVar2 = (ushort)(~bVar1 & 1) << 3;
  if ((bVar1 & 4) != 0) {
    uVar2 = uVar2 | 6;
    (**(code **)(*param_2 + 0x170))(param_2,*param_1);
    (**(code **)(*param_2 + 0x180))(param_2,(float)param_1[1] * 0.017453292);
    bVar1 = *(byte *)(param_1 + 0x40);
  }
  if ((bVar1 & 2) != 0) {
    (**(code **)(*param_2 + 0x88))(param_2,0);
    (**(code **)(*param_2 + 0xa8))(param_2,0x3f800000);
    (**(code **)(*param_2 + 0x98))(param_2,0);
    (**(code **)(*param_2 + 0xb8))(param_2,0x3f800000);
  }
  local_res8[0] = uVar2;
  (**(code **)(*param_2 + 0x70))(param_2,local_res8);
  FLinearConstraint::UpdatePhysXLinearLimit_AssumesLocked(param_1 + 4,param_2,param_3,param_4);
  FUN_1426cef30(param_1 + 0xb,param_2,param_3);
  FUN_1426cf980(param_1 + 0x13,param_2,param_3);
  uVar4 = 0x7f7fffff;
  if ((*(byte *)(param_1 + 0x40) & 0x10) == 0) {
    uVar3 = 0x7f7fffff;
  }
  else {
    uVar3 = param_1[2];
  }
  if ((*(byte *)(param_1 + 0x40) & 8) != 0) {
    uVar4 = param_1[3];
  }
  (**(code **)(*param_2 + 0x60))(param_2,uVar3,uVar4);
  FLinearDriveConstraint::UpdatePhysXLinearDrive_AssumesLocked(param_1 + 0x1a,param_2);
  FAngularDriveConstraint::UpdatePhysXAngularDrive_AssumesLocked(param_1 + 0x2d,param_2);
  UpdatePhysXDriveTarget_AssumesLocked(param_1,param_2);
  return;
}



// FUNCTION 1426cfc90 UpdatePhysicalAnimationSettings body=191 status=ok
// SIG undefined UpdatePhysicalAnimationSettings(void)

ulonglong UpdatePhysicalAnimationSettings
                    (longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  uVar4 = UPhysicsAsset::FindBodyIndex(param_4,param_1);
  if ((int)uVar4 == -1) {
    return uVar4 & 0xffffffffffffff00;
  }
  plVar5 = (longlong *)*param_3;
  iVar2 = (int)param_3[1];
  plVar1 = plVar5 + (longlong)iVar2 * 5;
  for (; plVar5 != plVar1; plVar5 = plVar5 + 5) {
    if (*plVar5 == param_1) goto LAB_1426cfd0b;
  }
  *(int *)(param_3 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
  }
  plVar5 = (longlong *)(*param_3 + (longlong)iVar2 * 0x28);
LAB_1426cfd0b:
  lVar3 = param_2[1];
  *plVar5 = *param_2;
  plVar5[1] = lVar3;
  lVar3 = param_2[3];
  plVar5[2] = param_2[2];
  plVar5[3] = lVar3;
  plVar5[4] = param_2[4];
  *plVar5 = param_1;
  return CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
}



// FUNCTION 1426cfd50 FUN_1426cfd50 body=1015 status=ok
// SIG undefined FUN_1426cfd50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1426cfd50(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  undefined1 auStack_108 [32];
  longlong local_e8;
  undefined8 *local_e0;
  longlong *local_d8;
  longlong local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_a0 [40];
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  if (((*(longlong *)(param_1 + 0x180) != 0) && (lVar7 = FUN_1423af5a0(), lVar7 != 0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x180) + 0x718) != 0)) {
    iVar13 = *(int *)(param_1 + 0x1a0) - *(int *)(param_1 + 400);
    plVar1 = (longlong *)(param_1 + 0x188);
    iVar15 = *(int *)(param_1 + 400);
    iVar5 = iVar15 + iVar13;
    *(int *)(param_1 + 400) = iVar5;
    local_d0 = lVar7;
    if (*(int *)(param_1 + 0x194) < iVar5) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar15 * 0x10 + *plVar1),0,(longlong)iVar13 << 4);
    lVar14 = *(longlong *)(param_1 + 0x180);
    puVar2 = *(undefined8 **)(lVar14 + 0xbf0);
    if (puVar2 == puVar2 + *(int *)(lVar14 + 0xbf8)) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = FUN_1426982f0(*puVar2,0xffffffff);
      lVar14 = *(longlong *)(param_1 + 0x180);
    }
    *(undefined4 *)(param_1 + 0x1b0) = uVar6;
    local_b8 = (longlong)*(int *)(lVar14 + 0x76c) * 0x10 + lVar14 + 0x728;
    plVar8 = (longlong *)FUN_1426e2550();
    if (plVar8 != (longlong *)0x0) {
      local_d8 = plVar8;
      (**(code **)(*plVar8 + 0x358))
                (plVar8,
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysicalAnimationComponent.cpp"
                 ,0x15e);
      iVar15 = 0;
      if (0 < *(int *)(param_1 + 0x1a0)) {
        lVar14 = 0;
        do {
          lVar3 = *plVar1;
          bVar4 = false;
          puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x198) + (longlong)iVar15 * 0x28);
          lVar10 = *(longlong *)(lVar14 + lVar3);
          if (lVar10 == 0) {
            bVar4 = true;
            lVar9 = operator_new(0x1b8);
            lVar10 = 0;
            if (lVar9 != 0) {
              lVar10 = FUN_1426b5240(lVar9);
            }
            *(longlong *)(lVar14 + lVar3) = lVar10;
            FConstraintProfileProperties::operator=(lVar10 + 0x8c,&DAT_146b07c30);
            lVar10 = *(longlong *)(lVar14 + lVar3);
          }
          FUN_1426cd530(lVar10,puVar2,*(undefined4 *)(param_1 + 0x178));
          plVar8 = local_d8;
          if (((bVar4) &&
              (iVar5 = UPhysicsAsset::FindBodyIndex(lVar7,*puVar2), plVar8 = local_d8, iVar5 != -1))
             && ((lVar10 = *(longlong *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x180) + 0xbf0) +
                            (longlong)iVar5 * 8), lVar10 != 0 &&
                 ((lVar9 = *(longlong *)(lVar10 + 0x110), lVar9 != 0 ||
                  (lVar9 = *(longlong *)(lVar10 + 0x118), lVar7 = local_d0, lVar9 != 0)))))) {
            FUN_1426cd6d0(*(undefined8 *)(lVar14 + lVar3),0,&DAT_1468b5b70);
            FUN_1426cd6d0(*(undefined8 *)(lVar14 + lVar3),1,&DAT_1468b5b70);
            local_e0 = (undefined8 *)CONCAT44(local_e0._4_4_,(int)*(short *)(lVar10 + 4));
            local_e8 = local_b8;
            ComputeTargetTM(local_78,puVar2,*(undefined8 *)(param_1 + 0x180),local_d0);
            plVar8 = (longlong *)(**(code **)(*local_d8 + 0x30))();
            lVar7 = *plVar8;
            uVar11 = U2PTransform(local_a0,local_78);
            plVar12 = (longlong *)(**(code **)(lVar7 + 0xb0))(plVar8,uVar11);
            (**(code **)(*plVar12 + 0x168))(plVar12,1,1);
            (**(code **)(*plVar12 + 0xf8))(plVar12,0x3f800000);
            local_c8 = 0x3f800000;
            local_c4 = 0x3f800000;
            local_c0 = 0x3f800000;
            (**(code **)(*plVar12 + 0x110))(plVar12,&local_c8);
            plVar8 = local_d8;
            plVar12[2] = 0;
            (**(code **)(*local_d8 + 0x50))(local_d8,plVar12);
            *(longlong **)(lVar14 + 8 + lVar3) = plVar12;
            local_b0 = 0;
            local_a8 = 0;
            local_e0 = &local_b0;
            local_e8 = CONCAT44(local_e8._4_4_,0x3f800000);
            FUN_1426cae00(*(undefined8 *)(lVar14 + lVar3),lVar9,plVar12,plVar8);
            lVar7 = local_d0;
          }
          iVar15 = iVar15 + 1;
          lVar14 = lVar14 + 0x10;
        } while (iVar15 < *(int *)(param_1 + 0x1a0));
      }
      (**(code **)(*plVar8 + 0x360))(plVar8);
    }
  }
  return;
}



// FUNCTION 1426d0150 FUN_1426d0150 body=2849 status=ok
// SIG undefined FUN_1426d0150(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1426d0150(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
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
  undefined8 local_res8;
  float local_258;
  float fStack_254;
  float local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
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
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  undefined8 uStack_1d0;
  undefined1 *local_1c8;
  undefined8 *puStack_1c0;
  uint local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  uint uStack_1ac;
  float local_1a8;
  uint uStack_1a4;
  float fStack_1a0;
  uint uStack_19c;
  float local_198;
  float fStack_194;
  uint uStack_190;
  uint uStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
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
  undefined1 local_f8 [208];
  
  if ((*(byte *)(param_1 + 0xb1a) & 0x20) != 0) {
    lVar8 = FUN_1423af5a0();
    if ((((lVar8 != 0) && (0 < *(int *)(param_1 + 0xc08))) && (*(longlong *)(param_1 + 0x718) != 0))
       && (uVar13 = 0, uVar15 = uVar13, fVar30 = _DAT_146b07a10, fVar31 = fRam0000000146b07a14,
          fVar32 = fRam0000000146b07a18, fVar33 = fRam0000000146b07a1c, fVar52 = DAT_1468b5d98,
          fVar53 = DAT_1468b5d94, fVar54 = DAT_1468b5d90, 0 < *(int *)(param_1 + 0xc08))) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x718);
        lVar2 = *(longlong *)(uVar13 + *(longlong *)(lVar8 + 0x50));
        lVar3 = *(longlong *)(uVar13 + *(longlong *)(param_1 + 0xc00));
        local_res8 = *(undefined8 *)(lVar2 + 0x40);
        iVar7 = FReferenceSkeleton::FindBoneIndex(lVar1 + 0x138,&local_res8);
        if ((1 < iVar7 + 1U) &&
           (lVar10 = (longlong)iVar7, *(char *)(lVar10 + *(longlong *)(param_1 + 0x868)) == '\x01'))
        {
          if (*(char *)(lVar3 + 0x188) == '\x01') {
            if (((*(byte *)(lVar3 + 0x14c) & 1) == 0) && ((*(byte *)(lVar3 + 0x15c) & 1) == 0)) {
              bVar6 = 0;
            }
            else {
              bVar6 = 1;
            }
          }
          else {
            bVar6 = *(byte *)(lVar3 + 0x16c) & 1;
          }
          if (bVar6 != 0) {
            lVar4 = *(longlong *)(param_1 + 0xa88);
            lVar1 = *(longlong *)(lVar1 + 0x158);
            pfVar9 = (float *)(lVar4 + lVar10 * 0x30);
            fVar44 = *pfVar9;
            fVar45 = pfVar9[1];
            fVar46 = pfVar9[3];
            lVar11 = (longlong)*(int *)(lVar1 + 8 + lVar10 * 0x10);
            fStack_21c = 0.0;
            fVar43 = fVar44 * fVar44 * 2.0;
            fVar16 = pfVar9[2] * 2.0;
            plVar12 = (longlong *)(lVar11 * 0x10 + lVar1);
            fStack_20c = 0.0;
            fVar20 = fVar45 * 2.0;
            fStack_1fc = 0.0;
            fStack_210 = fVar46 * fVar44 * 2.0;
            lVar10 = *plVar12;
            fStack_1ec = 1.0;
            fVar36 = pfVar9[2] * fVar16;
            local_228 = 1.0 - (fVar36 + fVar45 * fVar20);
            local_218 = fVar44 * fVar20 - fVar46 * fVar16;
            fStack_224 = fVar46 * fVar16 + fVar44 * fVar20;
            local_208 = fVar46 * fVar20 + fVar44 * fVar16;
            fStack_204 = fVar45 * fVar16 - fStack_210;
            fStack_210 = fStack_210 + fVar45 * fVar16;
            fStack_220 = fVar44 * fVar16 - fVar46 * fVar20;
            fStack_214 = 1.0 - (fVar36 + fVar43);
            fStack_200 = 1.0 - (fVar45 * fVar20 + fVar43);
            local_1e8 = _DAT_1464aa800;
            fStack_1e4 = fRam00000001464aa804;
            fStack_1e0 = fRam00000001464aa808;
            fStack_1dc = _DAT_1464aa80c;
            fVar44 = DAT_1464aa7d0;
            fVar45 = DAT_1464aa7d4;
            fVar46 = DAT_1464aa7d8;
            fVar16 = fRam00000001464aa7dc;
            fVar20 = DAT_1464aa7e0;
            fVar36 = DAT_1464aa7e4;
            fVar43 = DAT_1464aa7e8;
            fVar47 = fRam00000001464aa7ec;
            fVar48 = DAT_1464aa7f0;
            fVar49 = DAT_1464aa7f4;
            fVar50 = DAT_1464aa7f8;
            fVar51 = fRam00000001464aa7fc;
            while ((bVar5 = lVar10 == *(longlong *)(lVar2 + 0x50), !bVar5 &&
                   (pfVar9 = (float *)(lVar4 + 0x20 + lVar11 * 0x30),
                   0.0001 <= pfVar9[1] + *pfVar9 + pfVar9[2]))) {
              pfVar9 = (float *)(lVar4 + lVar11 * 0x30);
              fVar17 = *pfVar9;
              fVar18 = pfVar9[1];
              fVar19 = pfVar9[2];
              fVar35 = pfVar9[3];
              fVar24 = fVar18 + fVar18;
              fVar26 = fVar19 + fVar19;
              fVar29 = fVar17 * (fVar17 + fVar17);
              fVar25 = (fVar17 + fVar17) * fVar35;
              fVar37 = fVar26 * fVar35 + fVar24 * fVar17;
              fVar38 = fVar25 + fVar26 * fVar18;
              fVar40 = fVar24 * fVar35 + fVar26 * fVar17;
              fVar34 = fVar24 * fVar17 - fVar26 * fVar35;
              fVar25 = fVar26 * fVar18 - fVar25;
              fVar35 = fVar26 * fVar17 - fVar24 * fVar35;
              fVar21 = (float)((uint)(fVar30 - (fVar19 * fVar26 + fVar18 * fVar24)) & _DAT_146b07a20
                              );
              fVar26 = (float)((uint)(fVar31 - (fVar19 * fVar26 + fVar29)) & uRam0000000146b07a24);
              fVar22 = (float)((uint)(fVar32 - (fVar18 * fVar24 + fVar29)) & uRam0000000146b07a28);
              fVar24 = (float)((uint)(fVar33 - (fVar29 + fVar29)) & uRam0000000146b07a2c);
              fVar27 = fVar45 * fVar38;
              fVar28 = fVar45 * fVar24;
              fVar17 = fVar44 * fVar37;
              fVar18 = fVar44 * fVar35;
              fVar19 = fVar44 * fVar24;
              fVar29 = fVar46 * fVar24;
              fVar23 = fVar43 * fVar24;
              fVar44 = fVar45 * fVar34 + fVar44 * fVar21 + fVar46 * fVar40 + fVar16 * fVar54;
              fVar45 = fVar45 * fVar26 + fVar17 + fVar46 * fVar25 + fVar16 * fVar53;
              fVar46 = fVar27 + fVar18 + fVar46 * fVar22 + fVar16 * fVar52;
              fVar16 = fVar28 + fVar19 + fVar29 + fVar16 * fVar33;
              fVar29 = fVar36 * fVar38;
              fVar27 = fVar36 * fVar24;
              fVar17 = fVar20 * fVar37;
              fVar18 = fVar20 * fVar35;
              fVar19 = fVar20 * fVar24;
              fVar20 = fVar36 * fVar34 + fVar20 * fVar21 + fVar43 * fVar40 + fVar47 * fVar54;
              fVar36 = fVar36 * fVar26 + fVar17 + fVar43 * fVar25 + fVar47 * fVar53;
              fVar43 = fVar29 + fVar18 + fVar43 * fVar22 + fVar47 * fVar52;
              fVar47 = fVar27 + fVar19 + fVar23 + fVar47 * fVar33;
              fVar27 = fVar49 * fVar38;
              fVar28 = fVar49 * fVar24;
              lVar11 = (longlong)(int)plVar12[1];
              fVar17 = fVar48 * fVar37;
              fVar18 = fVar48 * fVar35;
              fVar19 = fVar48 * fVar24;
              fVar29 = fVar50 * fVar24;
              fVar23 = fStack_1e0 * fVar24;
              fVar48 = fVar49 * fVar34 + fVar48 * fVar21 + fVar50 * fVar40 + fVar51 * fVar54;
              fVar49 = fVar49 * fVar26 + fVar17 + fVar50 * fVar25 + fVar51 * fVar53;
              fVar50 = fVar27 + fVar18 + fVar50 * fVar22 + fVar51 * fVar52;
              fVar51 = fVar28 + fVar19 + fVar29 + fVar51 * fVar33;
              fVar38 = fStack_1e4 * fVar38;
              fVar17 = fStack_1e4 * fVar24;
              fVar37 = local_1e8 * fVar37;
              fVar35 = local_1e8 * fVar35;
              fVar24 = local_1e8 * fVar24;
              local_1e8 = fStack_1e4 * fVar34 + local_1e8 * fVar21 + fStack_1e0 * fVar40 +
                          fStack_1dc * fVar54;
              fStack_1e4 = fStack_1e4 * fVar26 + fVar37 + fStack_1e0 * fVar25 + fStack_1dc * fVar53;
              fStack_1e0 = fVar38 + fVar35 + fStack_1e0 * fVar22 + fStack_1dc * fVar52;
              fStack_1dc = fVar17 + fVar24 + fVar23 + fStack_1dc * fVar33;
              local_148 = fVar54;
              fStack_144 = fVar53;
              fStack_140 = fVar52;
              fStack_13c = fVar33;
              if ((int)plVar12[1] == 0) break;
              plVar12 = (longlong *)(lVar11 * 0x10 + lVar1);
              lVar10 = *plVar12;
            }
            local_1f8 = fVar54;
            fStack_1f4 = fVar53;
            fStack_1f0 = fVar52;
            if (bVar5) {
              pfVar9 = (float *)FConstraintInstance::GetRefFrame(lVar2 + 0x28,local_f8,0);
              fVar17 = fRam0000000146b07a1c;
              fVar54 = DAT_1468b5d98;
              fVar53 = DAT_1468b5d94;
              fVar52 = DAT_1468b5d90;
              fVar30 = *pfVar9;
              fVar31 = pfVar9[1];
              fVar32 = pfVar9[2];
              fVar33 = pfVar9[3];
              fVar35 = fVar31 + fVar31;
              fVar19 = fVar32 + fVar32;
              fVar37 = fVar30 * (fVar30 + fVar30);
              fStack_1d4 = (fVar30 + fVar30) * fVar33;
              fVar23 = fVar19 * fVar33 + fVar35 * fVar30;
              fVar27 = fStack_1d4 + fVar19 * fVar31;
              local_1d8 = fVar35 * fVar33 + fVar19 * fVar30;
              fVar26 = fVar35 * fVar30 - fVar19 * fVar33;
              fStack_1d4 = fVar19 * fVar31 - fStack_1d4;
              fVar22 = fVar19 * fVar30 - fVar35 * fVar33;
              fVar18 = (float)((uint)(_DAT_146b07a10 - (fVar32 * fVar19 + fVar31 * fVar35)) &
                              _DAT_146b07a20);
              fVar19 = (float)((uint)(fRam0000000146b07a14 - (fVar32 * fVar19 + fVar37)) &
                              uRam0000000146b07a24);
              uStack_1d0._0_4_ =
                   (float)((uint)(fRam0000000146b07a18 - (fVar31 * fVar35 + fVar37)) &
                          uRam0000000146b07a28);
              fVar24 = (float)((uint)(fRam0000000146b07a1c - (fVar37 + fVar37)) &
                              uRam0000000146b07a2c);
              uStack_1d0._4_4_ = fVar24;
              pfVar9 = (float *)FConstraintInstance::GetRefFrame(lVar2 + 0x28,local_f8,1);
              fVar30 = *pfVar9;
              fVar31 = pfVar9[1];
              fVar32 = pfVar9[2];
              fVar33 = pfVar9[3];
              fVar35 = fVar31 + fVar31;
              fVar37 = fVar32 + fVar32;
              fVar21 = fVar30 * (fVar30 + fVar30);
              fStack_194 = fVar33 * (fVar30 + fVar30);
              fStack_1b4 = fVar33 * fVar37 + fVar30 * fVar35;
              fStack_1a0 = fStack_194 + fVar31 * fVar37;
              local_198 = fVar33 * fVar35 + fVar30 * fVar37;
              local_1a8 = fVar30 * fVar35 - fVar33 * fVar37;
              fStack_194 = fVar31 * fVar37 - fStack_194;
              fStack_1b0 = fVar30 * fVar37 - fVar33 * fVar35;
              local_1b8 = (uint)(_DAT_146b07a10 - (fVar32 * fVar37 + fVar31 * fVar35)) &
                          _DAT_146b07a20;
              uStack_1a4 = (uint)(fRam0000000146b07a14 - (fVar32 * fVar37 + fVar21)) &
                           uRam0000000146b07a24;
              uStack_190 = (uint)(fRam0000000146b07a18 - (fVar31 * fVar35 + fVar21)) &
                           uRam0000000146b07a28;
              uStack_1ac = (uint)(fRam0000000146b07a1c - (fVar21 + fVar21)) & uRam0000000146b07a2c;
              fStack_17c = fRam0000000146b07a1c;
              local_188 = DAT_1468b5d90;
              fStack_180 = DAT_1468b5d98;
              fStack_184 = DAT_1468b5d94;
              uStack_19c = uStack_1ac;
              uStack_18c = uStack_1ac;
              FMatrix::InverseFast(&local_1b8,&local_138);
              fVar40 = fStack_224 * fVar20 + local_228 * fVar44 + fStack_220 * fVar48 +
                       fStack_21c * local_1e8;
              fVar39 = fStack_224 * fVar36 + local_228 * fVar45 + fStack_220 * fVar49 +
                       fStack_21c * fStack_1e4;
              fVar41 = fStack_224 * fVar43 + local_228 * fVar46 + fStack_220 * fVar50 +
                       fStack_21c * fStack_1e0;
              fVar42 = fStack_224 * fVar47 + local_228 * fVar16 + fStack_220 * fVar51 +
                       fStack_21c * fStack_1dc;
              fVar25 = fStack_214 * fVar20 + local_218 * fVar44 + fStack_210 * fVar48 +
                       fStack_20c * local_1e8;
              fVar38 = fStack_214 * fVar36 + local_218 * fVar45 + fStack_210 * fVar49 +
                       fStack_20c * fStack_1e4;
              fVar28 = fStack_214 * fVar43 + local_218 * fVar46 + fStack_210 * fVar50 +
                       fStack_20c * fStack_1e0;
              fVar34 = fStack_214 * fVar47 + local_218 * fVar16 + fStack_210 * fVar51 +
                       fStack_20c * fStack_1dc;
              fVar35 = fStack_204 * fVar20 + local_208 * fVar44 + fStack_200 * fVar48 +
                       fStack_1fc * local_1e8;
              fVar37 = fStack_204 * fVar36 + local_208 * fVar45 + fStack_200 * fVar49 +
                       fStack_1fc * fStack_1e4;
              fVar21 = fStack_204 * fVar43 + local_208 * fVar46 + fStack_200 * fVar50 +
                       fStack_1fc * fStack_1e0;
              fVar29 = fStack_204 * fVar47 + local_208 * fVar16 + fStack_200 * fVar51 +
                       fStack_1fc * fStack_1dc;
              fVar30 = fStack_1f4 * fVar20 + local_1f8 * fVar44 + fStack_1f0 * fVar48 +
                       fStack_1ec * local_1e8;
              fVar31 = fStack_1f4 * fVar36 + local_1f8 * fVar45 + fStack_1f0 * fVar49 +
                       fStack_1ec * fStack_1e4;
              fVar32 = fStack_1f4 * fVar43 + local_1f8 * fVar46 + fStack_1f0 * fVar50 +
                       fStack_1ec * fStack_1e0;
              fVar33 = fStack_1f4 * fVar47 + local_1f8 * fVar16 + fStack_1f0 * fVar51 +
                       fStack_1ec * fStack_1dc;
              fVar20 = fVar19 * fVar25 + fVar26 * fVar40 + fVar27 * fVar35 + fVar24 * fVar30;
              fVar36 = fVar19 * fVar38 + fVar26 * fVar39 + fVar27 * fVar37 + fVar24 * fVar31;
              fVar43 = fVar19 * fVar28 + fVar26 * fVar41 + fVar27 * fVar21 + fVar24 * fVar32;
              fVar47 = fVar19 * fVar34 + fVar26 * fVar42 + fVar27 * fVar29 + fVar24 * fVar33;
              fVar48 = fStack_1d4 * fVar25 + local_1d8 * fVar40 + (float)uStack_1d0 * fVar35 +
                       uStack_1d0._4_4_ * fVar30;
              fVar49 = fStack_1d4 * fVar38 + local_1d8 * fVar39 + (float)uStack_1d0 * fVar37 +
                       uStack_1d0._4_4_ * fVar31;
              fVar50 = fStack_1d4 * fVar28 + local_1d8 * fVar41 + (float)uStack_1d0 * fVar21 +
                       uStack_1d0._4_4_ * fVar32;
              fVar51 = fStack_1d4 * fVar34 + local_1d8 * fVar42 + (float)uStack_1d0 * fVar29 +
                       uStack_1d0._4_4_ * fVar33;
              local_188 = fVar52;
              fStack_184 = fVar53;
              fStack_180 = fVar54;
              fStack_17c = fVar17;
              fVar44 = fVar23 * fVar25 + fVar18 * fVar40 + fVar22 * fVar35 + fVar24 * fVar30;
              fVar45 = fVar23 * fVar38 + fVar18 * fVar39 + fVar22 * fVar37 + fVar24 * fVar31;
              fVar46 = fVar23 * fVar28 + fVar18 * fVar41 + fVar22 * fVar21 + fVar24 * fVar32;
              fVar16 = fVar23 * fVar34 + fVar18 * fVar42 + fVar22 * fVar29 + fVar24 * fVar33;
              fVar30 = fVar53 * fVar25 + fVar52 * fVar40 + fVar54 * fVar35 + fVar17 * fVar30;
              fVar31 = fVar53 * fVar38 + fVar52 * fVar39 + fVar54 * fVar37 + fVar17 * fVar31;
              fVar32 = fVar53 * fVar28 + fVar52 * fVar41 + fVar54 * fVar21 + fVar17 * fVar32;
              fVar33 = fVar53 * fVar34 + fVar52 * fVar42 + fVar54 * fVar29 + fVar17 * fVar33;
              local_178 = fVar45 * local_128 + fVar44 * local_138 + fVar46 * local_118 +
                          fVar16 * local_108;
              fStack_174 = fVar45 * fStack_124 + fVar44 * fStack_134 + fVar46 * fStack_114 +
                           fVar16 * fStack_104;
              fStack_170 = fVar45 * fStack_120 + fVar44 * fStack_130 + fVar46 * fStack_110 +
                           fVar16 * fStack_100;
              fStack_16c = fVar45 * fStack_11c + fVar44 * fStack_12c + fVar46 * fStack_10c +
                           fVar16 * fStack_fc;
              local_168 = fVar36 * local_128 + fVar20 * local_138 + fVar43 * local_118 +
                          fVar47 * local_108;
              fStack_164 = fVar36 * fStack_124 + fVar20 * fStack_134 + fVar43 * fStack_114 +
                           fVar47 * fStack_104;
              fStack_160 = fVar36 * fStack_120 + fVar20 * fStack_130 + fVar43 * fStack_110 +
                           fVar47 * fStack_100;
              fStack_15c = fVar36 * fStack_11c + fVar20 * fStack_12c + fVar43 * fStack_10c +
                           fVar47 * fStack_fc;
              local_158 = fVar49 * local_128 + fVar48 * local_138 + fVar50 * local_118 +
                          fVar51 * local_108;
              fStack_154 = fVar49 * fStack_124 + fVar48 * fStack_134 + fVar50 * fStack_114 +
                           fVar51 * fStack_104;
              fStack_150 = fVar49 * fStack_120 + fVar48 * fStack_130 + fVar50 * fStack_110 +
                           fVar51 * fStack_100;
              fStack_14c = fVar49 * fStack_11c + fVar48 * fStack_12c + fVar50 * fStack_10c +
                           fVar51 * fStack_fc;
              local_148 = fVar31 * local_128 + fVar30 * local_138 + fVar32 * local_118 +
                          fVar33 * local_108;
              fStack_144 = fVar31 * fStack_124 + fVar30 * fStack_134 + fVar32 * fStack_114 +
                           fVar33 * fStack_104;
              fStack_140 = fVar31 * fStack_120 + fVar30 * fStack_130 + fVar32 * fStack_110 +
                           fVar33 * fStack_100;
              fStack_13c = fVar31 * fStack_11c + fVar30 * fStack_12c + fVar32 * fStack_10c +
                           fVar33 * fStack_fc;
              FQuat::FQuat(&local_248,&local_178);
              FRotator::FRotator(&local_258,&local_248);
              if (((local_258 != *(float *)(lVar3 + 0x170)) ||
                  (fStack_254 != *(float *)(lVar3 + 0x174))) ||
                 (fVar30 = _DAT_146b07a10, fVar31 = fRam0000000146b07a14,
                 fVar32 = fRam0000000146b07a18, fVar33 = fRam0000000146b07a1c,
                 fVar52 = DAT_1468b5d98, fVar53 = DAT_1468b5d94, fVar54 = DAT_1468b5d90,
                 local_250 != *(float *)(lVar3 + 0x178))) {
                *(ulonglong *)(lVar3 + 0x170) = CONCAT44(fStack_254,local_258);
                *(float *)(lVar3 + 0x178) = local_250;
                puStack_1c0 = &local_238;
                local_1c8 = &LAB_1426baa40;
                local_238 = local_248;
                uStack_230 = uStack_240;
                local_1d8 = 58.91626;
                fStack_1d4 = 1.4013e-45;
                uStack_1d0 = puStack_1c0;
                FConstraintInstance::ExecuteOnUnbrokenJointReadWrite(lVar3,&local_1d8);
                fVar30 = _DAT_146b07a10;
                fVar31 = fRam0000000146b07a14;
                fVar32 = fRam0000000146b07a18;
                fVar33 = fRam0000000146b07a1c;
                fVar52 = DAT_1468b5d98;
                fVar53 = DAT_1468b5d94;
                fVar54 = DAT_1468b5d90;
              }
            }
          }
        }
        uVar14 = (int)uVar15 + 1;
        uVar13 = uVar13 + 8;
        uVar15 = (ulonglong)uVar14;
      } while ((int)uVar14 < *(int *)(param_1 + 0xc08));
    }
  }
  return;
}



// FUNCTION 1426d0c80 FUN_1426d0c80 body=589 status=ok
// SIG undefined FUN_1426d0c80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1426d0c80(longlong param_1,char param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_108 [32];
  char local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [48];
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  if ((*(longlong *)(param_1 + 0x180) != 0) &&
     (local_e8 = param_2, lVar3 = FUN_1423af5a0(), lVar3 != 0)) {
    lVar1 = *(longlong *)(param_1 + 0x180);
    if (*(longlong *)(lVar1 + 0x718) != 0) {
      local_e0 = *(longlong *)(lVar1 + 0x718) + 0x138;
      local_d8 = lVar1 + 0x728 + (longlong)*(int *)(lVar1 + 0x76c) * 0x10;
      plVar4 = (longlong *)FUN_1426e2550(*(undefined4 *)(param_1 + 0x1b0));
      if (plVar4 != (longlong *)0x0) {
        local_d0 = plVar4;
        (**(code **)(*plVar4 + 0x358))
                  (plVar4,
                   "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysicalAnimationComponent.cpp"
                   ,0x10f);
        lVar1 = local_e0;
        iVar9 = 0;
        if (0 < *(int *)(param_1 + 0x1a0)) {
          lVar8 = 0;
          lVar10 = 0;
          do {
            plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x188) + 8 + lVar8);
            if (plVar4 != (longlong *)0x0) {
              lVar7 = *(longlong *)(param_1 + 0x198) + lVar10;
              iVar2 = FReferenceSkeleton::FindBoneIndex(lVar1,lVar7);
              if (iVar2 != -1) {
                if ((*(byte *)(lVar7 + 8) & 1) == 0) {
                  puVar5 = (undefined8 *)
                           FUN_1426bbcf0(local_68,*(undefined8 *)(param_1 + 0x180),local_d8,iVar2);
                }
                else {
                  puVar5 = (undefined8 *)
                           FUN_1426bb0c0(local_98,*(undefined8 *)(param_1 + 0x180),lVar3);
                }
                local_c8 = *puVar5;
                uStack_c0 = puVar5[1];
                lVar7 = *plVar4;
                local_b8 = *(undefined4 *)(puVar5 + 2);
                uStack_b4 = *(undefined4 *)((longlong)puVar5 + 0x14);
                uStack_b0 = *(undefined4 *)(puVar5 + 3);
                uStack_ac = *(undefined4 *)((longlong)puVar5 + 0x1c);
                local_a8 = *(undefined4 *)(puVar5 + 4);
                uStack_a4 = *(undefined4 *)((longlong)puVar5 + 0x24);
                uStack_a0 = *(undefined4 *)(puVar5 + 5);
                uStack_9c = *(undefined4 *)((longlong)puVar5 + 0x2c);
                uVar6 = U2PTransform(local_98,&local_c8);
                (**(code **)(lVar7 + 0x1b0))(plVar4,uVar6);
                if (local_e8 == '\x01') {
                  lVar7 = *plVar4;
                  uVar6 = U2PTransform(local_98,&local_c8);
                  (**(code **)(lVar7 + 0xa8))(plVar4,uVar6,1);
                }
              }
            }
            iVar9 = iVar9 + 1;
            lVar8 = lVar8 + 0x10;
            lVar10 = lVar10 + 0x28;
            plVar4 = local_d0;
          } while (iVar9 < *(int *)(param_1 + 0x1a0));
        }
        (**(code **)(*plVar4 + 0x360))(plVar4);
      }
    }
  }
  return;
}



// FUNCTION 1426d0ed0 FUN_1426d0ed0 body=455 status=ok
// SIG undefined FUN_1426d0ed0(void)

void FUN_1426d0ed0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 local_28 [32];
  
  if (*(int *)(param_1 + 0x108) != 0) {
    iVar5 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x100) + 0x28))();
    lVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x100) + 0x38))();
    iVar8 = (int)param_2[1];
    if (iVar5 <= (int)param_2[1]) {
      iVar8 = iVar5;
    }
    lVar12 = 0;
    lVar10 = (longlong)iVar8;
    if (3 < lVar10) {
      lVar4 = -lVar6;
      lVar11 = (lVar10 - 4U >> 2) + 1;
      lVar12 = lVar11 * 4;
      puVar9 = (undefined4 *)(lVar6 + 0x14);
      do {
        lVar3 = *param_2;
        uVar1 = *(undefined4 *)((longlong)puVar9 + lVar3 + lVar4 + -0x10);
        uVar2 = *(undefined4 *)((longlong)puVar9 + lVar3 + lVar4 + -0xc);
        puVar9[-5] = *(undefined4 *)((longlong)puVar9 + lVar3 + lVar4 + -0x14);
        puVar9[-4] = uVar1;
        puVar9[-3] = uVar2;
        lVar3 = *param_2;
        uVar1 = *(undefined4 *)((longlong)puVar9 + lVar3 + lVar4 + -4);
        uVar2 = *(undefined4 *)((longlong)puVar9 + lVar3 + lVar4);
        puVar9[-2] = *(undefined4 *)((longlong)puVar9 + lVar3 + lVar4 + -8);
        puVar9[-1] = uVar1;
        *puVar9 = uVar2;
        puVar7 = (undefined4 *)((longlong)puVar9 + *param_2 + (4 - lVar6));
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        puVar9[1] = *puVar7;
        puVar9[2] = uVar1;
        puVar9[3] = uVar2;
        puVar7 = (undefined4 *)((longlong)puVar9 + *param_2 + (0x10 - lVar6));
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        puVar9[4] = *puVar7;
        puVar9[5] = uVar1;
        puVar9[6] = uVar2;
        lVar11 = lVar11 + -1;
        puVar9 = puVar9 + 0xc;
      } while (lVar11 != 0);
    }
    if (lVar12 < lVar10) {
      lVar10 = lVar10 - lVar12;
      puVar9 = (undefined4 *)(lVar6 + lVar12 * 0xc + 8);
      do {
        puVar7 = (undefined4 *)((longlong)puVar9 + *param_2 + (-8 - lVar6));
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        puVar9[-2] = *puVar7;
        puVar9[-1] = uVar1;
        *puVar9 = uVar2;
        lVar10 = lVar10 + -1;
        puVar9 = puVar9 + 3;
      } while (lVar10 != 0);
    }
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x100) + 0x40))
              ((longlong *)**(undefined8 **)(param_1 + 0x100),local_28);
  }
  return;
}



// FUNCTION 1426d10a0 FUN_1426d10a0 body=1599 status=ok
// SIG undefined FUN_1426d10a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1426d10a0(longlong *param_1,longlong *param_2,int param_3,longlong param_4,float *param_5,
                  float *param_6)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  int iVar6;
  longlong lVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar15 [16];
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
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  
  lVar10 = *param_1;
  lVar11 = (longlong)param_3;
  lVar9 = lVar11 * 0x40;
  if (*(char *)(lVar10 + 0x30 + lVar9) == '\0') {
    if (param_3 == 0) {
      fVar14 = *param_5;
      fVar23 = param_5[1];
      fVar16 = param_5[2];
      fVar17 = param_5[3];
      local_d8 = param_5[4];
      fStack_d4 = param_5[5];
      fStack_d0 = param_5[6];
      fVar20 = param_5[7];
      fVar39 = param_5[8];
      fVar40 = param_5[9];
      fVar41 = param_5[10];
      fVar42 = param_5[0xb];
    }
    else {
      iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_4 + 0x718) + 0x158) + 8 + lVar11 * 0x10);
      FUN_1426d10a0(param_1,param_2,iVar6,param_4,param_5,param_6);
      lVar10 = *param_1;
      lVar7 = (longlong)iVar6 * 0x40;
      pfVar8 = (float *)(lVar7 + lVar10);
      fVar14 = *pfVar8;
      fVar23 = pfVar8[1];
      fVar16 = pfVar8[2];
      fVar17 = pfVar8[3];
      pfVar8 = (float *)(lVar7 + 0x10 + lVar10);
      local_d8 = *pfVar8;
      fStack_d4 = pfVar8[1];
      fStack_d0 = pfVar8[2];
      fVar20 = pfVar8[3];
      pfVar8 = (float *)(lVar7 + 0x20 + lVar10);
      fVar39 = *pfVar8;
      fVar40 = pfVar8[1];
      fVar41 = pfVar8[2];
      fVar42 = pfVar8[3];
    }
    fVar38 = fRam0000000146b07a18;
    fVar36 = fRam0000000146b07a14;
    fVar34 = _DAT_146b07a10;
    pfVar8 = (float *)(lVar11 * 0x30 + *param_2);
    auVar1 = *(undefined1 (*) [16])(pfVar8 + 8);
    fVar2 = auVar1._0_4_;
    fVar3 = auVar1._4_4_;
    fVar4 = auVar1._8_4_;
    fVar18 = *pfVar8;
    fVar19 = pfVar8[1];
    fVar32 = pfVar8[2];
    fVar31 = pfVar8[3];
    fVar46 = *param_6 * pfVar8[4];
    fVar47 = param_6[1] * pfVar8[5];
    fVar48 = param_6[2] * pfVar8[6];
    auVar12._4_4_ = fVar40;
    auVar12._0_4_ = fVar39;
    auVar12._8_4_ = fVar41;
    auVar12._12_4_ = fVar42;
    auVar12 = minps(auVar1,auVar12);
    auVar13._4_4_ = -(uint)(auVar12._4_4_ < fRam0000000146b07ab4);
    auVar13._0_4_ = -(uint)(auVar12._0_4_ < _DAT_146b07ab0);
    auVar13._8_4_ = -(uint)(auVar12._8_4_ < fRam0000000146b07ab8);
    auVar13._12_4_ = -(uint)(auVar12._12_4_ < fRam0000000146b07abc);
    iVar6 = movmskps((int)pfVar8,auVar13);
    if (iVar6 == 0) {
      fVar46 = fVar46 * fVar39;
      fVar47 = fVar47 * fVar40;
      fVar48 = fVar48 * fVar41;
      fVar22 = pfVar8[7] * 0.0 * fVar42;
      fVar34 = fVar31 * fVar14 * _DAT_146b07a70 + fVar17 * fVar18 + fVar32 * fVar23 * _DAT_146b07a60
               + fVar19 * fVar16 * _DAT_146b07a50;
      fVar36 = fVar32 * fVar14 * fRam0000000146b07a74 + fVar17 * fVar19 +
               fVar31 * fVar23 * fRam0000000146b07a64 + fVar18 * fVar16 * fRam0000000146b07a54;
      fVar38 = fVar19 * fVar14 * fRam0000000146b07a78 + fVar17 * fVar32 +
               fVar18 * fVar23 * fRam0000000146b07a68 + fVar31 * fVar16 * fRam0000000146b07a58;
      fVar21 = fVar18 * fVar14 * fRam0000000146b07a7c + fVar17 * fVar31 +
               fVar19 * fVar23 * fRam0000000146b07a6c + fVar32 * fVar16 * fRam0000000146b07a5c;
      fVar18 = fVar48 * fVar23 - fVar47 * fVar16;
      fVar19 = fVar46 * fVar16 - fVar48 * fVar14;
      fVar32 = fVar47 * fVar14 - fVar46 * fVar23;
      fVar31 = fVar22 * fVar17 - fVar22 * fVar17;
      fVar18 = fVar18 + fVar18;
      fVar19 = fVar19 + fVar19;
      fVar32 = fVar32 + fVar32;
      fVar31 = fVar31 + fVar31;
      local_d8 = (fVar32 * fVar23 - fVar19 * fVar16) + fVar17 * fVar18 + fVar46 + local_d8;
      fStack_d4 = (fVar18 * fVar16 - fVar32 * fVar14) + fVar17 * fVar19 + fVar47 + fStack_d4;
      fStack_d0 = (fVar19 * fVar14 - fVar18 * fVar23) + fVar17 * fVar32 + fVar48 + fStack_d0;
      fVar20 = (fVar31 * fVar17 - fVar31 * fVar17) + fVar17 * fVar31 + fVar22 + fVar20;
    }
    else {
      fVar20 = fVar23 + fVar23;
      fVar24 = fVar16 + fVar16;
      fVar26 = (fVar14 + fVar14) * fVar14;
      fVar21 = (fVar14 + fVar14) * fVar17;
      fVar22 = fVar19 + fVar19;
      fVar25 = fVar32 + fVar32;
      fVar43 = (fVar24 * fVar17 + fVar20 * fVar14) * fVar39;
      fVar44 = (fVar21 + fVar24 * fVar23) * fVar40;
      fVar45 = (fVar20 * fVar17 + fVar24 * fVar14) * fVar41;
      fVar28 = fVar40 * (fVar20 * fVar14 - fVar24 * fVar17);
      fVar29 = fVar41 * (fVar24 * fVar23 - fVar21);
      fVar30 = fVar39 * (fVar24 * fVar14 - fVar20 * fVar17);
      fVar27 = (fVar18 + fVar18) * fVar18;
      fVar14 = (float)((uint)((_DAT_146b07a10 - (fVar24 * fVar16 + fVar20 * fVar23)) * fVar39) &
                      _DAT_146b07a20);
      fVar16 = (float)((uint)((fRam0000000146b07a14 - (fVar24 * fVar16 + fVar26)) * fVar40) &
                      uRam0000000146b07a24);
      fVar20 = (float)((uint)((fRam0000000146b07a18 - (fVar20 * fVar23 + fVar26)) * fVar41) &
                      uRam0000000146b07a28);
      fVar21 = (float)((uint)((fRam0000000146b07a1c - (fVar26 + fVar26)) * fVar42) &
                      uRam0000000146b07a2c);
      fVar23 = (fVar18 + fVar18) * fVar31;
      fVar33 = (fVar25 * fVar31 + fVar22 * fVar18) * fVar2;
      fVar35 = (fVar23 + fVar25 * fVar19) * fVar3;
      fVar37 = (fVar22 * fVar31 + fVar25 * fVar18) * fVar4;
      fVar24 = fVar3 * (fVar22 * fVar18 - fVar25 * fVar31);
      fVar26 = fVar4 * (fVar25 * fVar19 - fVar23);
      fVar31 = fVar2 * (fVar25 * fVar18 - fVar22 * fVar31);
      fVar23 = (float)((uint)((_DAT_146b07a10 - (fVar25 * fVar32 + fVar22 * fVar19)) * fVar2) &
                      _DAT_146b07a20);
      fVar17 = (float)((uint)((fRam0000000146b07a14 - (fVar25 * fVar32 + fVar27)) * fVar3) &
                      uRam0000000146b07a24);
      fVar18 = (float)((uint)((fRam0000000146b07a18 - (fVar22 * fVar19 + fVar27)) * fVar4) &
                      uRam0000000146b07a28);
      fVar19 = (float)((uint)((fRam0000000146b07a1c - (fVar27 + fVar27)) * auVar1._12_4_) &
                      uRam0000000146b07a2c);
      local_108 = fVar33 * fVar28 + fVar23 * fVar14 + fVar31 * fVar45 + fVar19 * local_d8;
      fStack_104 = fVar33 * fVar16 + fVar23 * fVar43 + fVar31 * fVar29 + fVar19 * fStack_d4;
      fStack_100 = fVar33 * fVar44 + fVar23 * fVar30 + fVar31 * fVar20 + fVar19 * fStack_d0;
      fStack_fc = fVar33 * fVar21 + fVar23 * fVar21 + fVar31 * fVar21 +
                  fVar19 * fRam0000000146b07a1c;
      local_f8 = fVar17 * fVar28 + fVar24 * fVar14 + fVar35 * fVar45 + fVar19 * local_d8;
      fStack_f4 = fVar17 * fVar16 + fVar24 * fVar43 + fVar35 * fVar29 + fVar19 * fStack_d4;
      fStack_f0 = fVar17 * fVar44 + fVar24 * fVar30 + fVar35 * fVar20 + fVar19 * fStack_d0;
      fStack_ec = fVar17 * fVar21 + fVar24 * fVar21 + fVar35 * fVar21 +
                  fVar19 * fRam0000000146b07a1c;
      local_e8 = fVar26 * fVar28 + fVar37 * fVar14 + fVar18 * fVar45 + fVar19 * local_d8;
      fStack_e4 = fVar26 * fVar16 + fVar37 * fVar43 + fVar18 * fVar29 + fVar19 * fStack_d4;
      fStack_e0 = fVar26 * fVar44 + fVar37 * fVar30 + fVar18 * fVar20 + fVar19 * fStack_d0;
      fStack_dc = fVar26 * fVar21 + fVar37 * fVar21 + fVar18 * fVar21 +
                  fVar19 * fRam0000000146b07a1c;
      local_d8 = fVar47 * fVar28 + fVar46 * fVar14 + fVar48 * fVar45 +
                 fRam0000000146b07a1c * local_d8;
      fStack_d4 = fVar47 * fVar16 + fVar46 * fVar43 + fVar48 * fVar29 +
                  fRam0000000146b07a1c * fStack_d4;
      fStack_d0 = fVar47 * fVar44 + fVar46 * fVar30 + fVar48 * fVar20 +
                  fRam0000000146b07a1c * fStack_d0;
      fStack_cc = fVar47 * fVar21 + fVar46 * fVar21 + fVar48 * fVar21 +
                  fRam0000000146b07a1c * fRam0000000146b07a1c;
      FMatrix::RemoveScaling(&local_108);
      fVar14 = (float)(-(uint)(_DAT_146b07ab0 <= fVar2 * fVar39) & (_DAT_146b07aa0 ^ (uint)fVar34) ^
                      _DAT_146b07aa0);
      fVar23 = (float)(-(uint)(fRam0000000146b07ab4 <= fVar3 * fVar40) &
                       (uRam0000000146b07aa4 ^ (uint)fVar36) ^ uRam0000000146b07aa4);
      fVar16 = (float)(-(uint)(fRam0000000146b07ab8 <= fVar4 * fVar41) &
                       (uRam0000000146b07aa8 ^ (uint)fVar38) ^ uRam0000000146b07aa8);
      local_108 = local_108 * fVar14;
      fStack_104 = fStack_104 * fVar14;
      fStack_100 = fStack_100 * fVar14;
      fStack_f0 = fStack_f0 * fVar23;
      fStack_f4 = fStack_f4 * fVar23;
      local_f8 = local_f8 * fVar23;
      fStack_e0 = fStack_e0 * fVar16;
      local_e8 = local_e8 * fVar16;
      fStack_e4 = fStack_e4 * fVar16;
      FQuat::FQuat(&local_118,&local_108);
      lVar10 = *param_1;
      auVar15._0_4_ = local_118 * local_118 + fStack_110 * fStack_110;
      auVar15._4_4_ = fStack_114 * fStack_114 + fStack_10c * fStack_10c;
      auVar15._8_4_ = fStack_110 * fStack_110 + local_118 * local_118;
      auVar15._12_4_ = fStack_10c * fStack_10c + fStack_114 * fStack_114;
      fVar18 = auVar15._4_4_ + auVar15._0_4_;
      fVar19 = auVar15._8_4_ + auVar15._4_4_;
      fVar32 = auVar15._12_4_ + auVar15._8_4_;
      fVar31 = auVar15._0_4_ + auVar15._12_4_;
      auVar5._4_4_ = fVar19;
      auVar5._0_4_ = fVar18;
      auVar5._8_4_ = fVar32;
      auVar5._12_4_ = fVar31;
      auVar12 = rsqrtps(auVar15,auVar5);
      fVar14 = auVar12._0_4_;
      fVar23 = auVar12._4_4_;
      fVar16 = auVar12._8_4_;
      fVar17 = auVar12._12_4_;
      fVar14 = (_DAT_146b07a90 - fVar14 * fVar14 * fVar18 * _DAT_146b07a90) * fVar14 + fVar14;
      fVar23 = (fRam0000000146b07a94 - fVar23 * fVar23 * fVar19 * fRam0000000146b07a94) * fVar23 +
               fVar23;
      fVar16 = (fRam0000000146b07a98 - fVar16 * fVar16 * fVar32 * fRam0000000146b07a98) * fVar16 +
               fVar16;
      fVar17 = (fRam0000000146b07a9c - fVar17 * fVar17 * fVar31 * fRam0000000146b07a9c) * fVar17 +
               fVar17;
      fVar20 = 0.0;
      fVar34 = (float)(((uint)(((_DAT_146b07a90 - fVar14 * fVar14 * fVar18 * _DAT_146b07a90) *
                                fVar14 + fVar14) * local_118) ^ _DAT_146b07a80) &
                       -(uint)(1e-08 <= fVar18) ^ _DAT_146b07a80);
      fVar36 = (float)(((uint)(((fRam0000000146b07a94 -
                                fVar23 * fVar23 * fVar19 * fRam0000000146b07a94) * fVar23 + fVar23)
                              * fStack_114) ^ uRam0000000146b07a84) & -(uint)(1e-08 <= fVar19) ^
                      uRam0000000146b07a84);
      fVar38 = (float)(((uint)(((fRam0000000146b07a98 -
                                fVar16 * fVar16 * fVar32 * fRam0000000146b07a98) * fVar16 + fVar16)
                              * fStack_110) ^ uRam0000000146b07a88) & -(uint)(1e-08 <= fVar32) ^
                      uRam0000000146b07a88);
      fVar21 = (float)(((uint)(((fRam0000000146b07a9c -
                                fVar17 * fVar17 * fVar31 * fRam0000000146b07a9c) * fVar17 + fVar17)
                              * fStack_10c) ^ uRam0000000146b07a8c) & -(uint)(1e-08 <= fVar31) ^
                      uRam0000000146b07a8c);
    }
    pfVar8 = (float *)(lVar9 + lVar10);
    *pfVar8 = fVar34;
    pfVar8[1] = fVar36;
    pfVar8[2] = fVar38;
    pfVar8[3] = fVar21;
    pfVar8 = (float *)(lVar9 + 0x20 + lVar10);
    *pfVar8 = fVar2 * fVar39;
    pfVar8[1] = fVar3 * fVar40;
    pfVar8[2] = fVar4 * fVar41;
    pfVar8[3] = auVar1._12_4_ * fVar42;
    pfVar8 = (float *)(lVar9 + 0x10 + lVar10);
    *pfVar8 = local_d8;
    pfVar8[1] = fStack_d4;
    pfVar8[2] = fStack_d0;
    pfVar8[3] = fVar20;
    *(undefined1 *)(*param_1 + 0x30 + lVar9) = 1;
  }
  return;
}



// FUNCTION 1426d16e0 WakeupJointedActors_AssumesLocked body=196 status=ok
// SIG undefined WakeupJointedActors_AssumesLocked(void)

void WakeupJointedActors_AssumesLocked(longlong *param_1)

{
  longlong lVar1;
  byte *pbVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  longlong *local_res10;
  longlong *local_res18;
  
  local_res10 = (longlong *)0x0;
  local_res18 = (longlong *)0x0;
  (**(code **)(*param_1 + 0x30))(param_1,&local_res10,&local_res18);
  if (local_res10 != (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
    if ((short)local_res10[1] == 6) {
      plVar3 = local_res10;
    }
    if (((plVar3 != (longlong *)0x0) && (lVar1 = (**(code **)(*plVar3 + 0x30))(plVar3), lVar1 != 0))
       && (pbVar2 = (byte *)(**(code **)(*plVar3 + 0x178))(plVar3,local_res8), (*pbVar2 & 1) == 0))
    {
      (**(code **)(*plVar3 + 0x240))(plVar3);
    }
  }
  if (local_res18 != (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
    if ((short)local_res18[1] == 6) {
      plVar3 = local_res18;
    }
    if (((plVar3 != (longlong *)0x0) && (lVar1 = (**(code **)(*plVar3 + 0x30))(plVar3), lVar1 != 0))
       && (pbVar2 = (byte *)(**(code **)(*plVar3 + 0x178))(plVar3,local_res8), (*pbVar2 & 1) == 0))
    {
      (**(code **)(*plVar3 + 0x240))(plVar3);
    }
  }
  return;
}



// FUNCTION 1426d17b0 FUN_1426d17b0 body=325 status=ok
// SIG undefined FUN_1426d17b0(void)

longlong FUN_1426d17b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                      undefined8 *param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 local_58 [32];
  undefined8 local_38 [4];
  
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  FUN_14217e610(local_58,*param_4);
  FUN_14217e740(local_38);
  FUN_142194380(local_38,0x28,0,0,0);
  lVar3 = 2;
  local_38[0] = *param_5;
  if (*(int *)(param_1 + 0x8c) < 2) {
    FUN_140a70170(param_1,2);
  }
  puVar4 = local_58;
  do {
    iVar1 = *(int *)(param_1 + 0x88);
    *(int *)(param_1 + 0x88) = iVar1 + 1;
    if (*(int *)(param_1 + 0x8c) < iVar1 + 1) {
      TArray<FBlendedCurve,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x80) == 0) {
      lVar2 = param_1;
    }
    FUN_14217e5b0(lVar2 + (longlong)iVar1 * 0x20,puVar4);
    puVar4 = puVar4 + 0x20;
  } while (puVar4 != &stack0xffffffffffffffe8);
  puVar4 = &stack0xffffffffffffffe8;
  do {
    puVar4 = puVar4 + -0x20;
    FUN_14217f430(puVar4);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(undefined8 *)(param_1 + 0x90) = param_2;
  FString::FString(param_1 + 0x98,param_3);
  return param_1;
}



// FUNCTION 1426d1900 operator<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>_TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget> body=181 status=ok
// SIG undefined operator<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>_TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>(void)

undefined4 *
TKeyInitializer<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>_const_&>::
operator<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>_TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>
          (undefined8 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_1c;
  undefined4 local_14;
  
  puVar1 = (undefined4 *)*param_1;
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  *(undefined8 *)(param_2 + 4) = 0;
  param_2[6] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  param_2[10] = 0;
  param_2[0xb] = 0x3f800000;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined1 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_2 + 0xf) = 0;
  param_2[0x11] = 0;
  param_2[0xe] = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0x18) = local_28;
  param_2[0x1a] = local_20;
  *(undefined8 *)(param_2 + 0x1b) = local_1c;
  param_2[0x1d] = local_14;
  *(undefined8 *)(param_2 + 0x16) = 0;
  return param_2;
}


