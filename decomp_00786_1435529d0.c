// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1435529d0 FUN_1435529d0 body=175 status=ok
// SIG undefined FUN_1435529d0(void)

void FUN_1435529d0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b78160)((longlong)DAT_146b78168 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 143552a80 FUN_143552a80 body=171 status=ok
// SIG undefined FUN_143552a80(void)

void FUN_143552a80(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_18[0] = 0;
  local_10 = *(undefined8 *)(param_6 + 0x10);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78710)((longlong)DAT_146b78718 + *(longlong *)(param_3 + 0x10),local_18);
  }
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143552b30 FUN_143552b30 body=422 status=ok
// SIG undefined FUN_143552b30(void)

void FUN_143552b30(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar1 = param_2[2];
  dVar2 = param_2[3];
  dVar3 = param_2[1];
  dVar4 = *param_2;
  dVar7 = 0.0;
  dVar8 = dVar4 * dVar4 + dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (1e-12 < dVar8) {
    dVar7 = 2.0 / dVar8;
  }
  dVar2 = dVar2 * dVar7;
  dVar6 = dVar4 * dVar7;
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  dVar8 = dVar1 * dVar7 * dVar1;
  dVar5 = dVar3 * dVar7 * dVar1;
  dVar7 = dVar3 * dVar7 * dVar3;
  dVar9 = 1.0 - dVar6 * dVar4;
  param_1[8] = dVar6 * dVar1 - dVar2 * dVar3;
  param_1[2] = dVar2 * dVar3 + dVar6 * dVar1;
  *param_1 = (1.0 - dVar7) - dVar8;
  param_1[9] = dVar2 * dVar4 + dVar5;
  param_1[6] = dVar5 - dVar2 * dVar4;
  param_1[4] = dVar2 * dVar1 + dVar6 * dVar3;
  param_1[1] = dVar6 * dVar3 - dVar2 * dVar1;
  param_1[5] = dVar9 - dVar8;
  param_1[10] = dVar9 - dVar7;
  return;
}



// FUNCTION 143552ce0 FUN_143552ce0 body=448 status=ok
// SIG undefined FUN_143552ce0(void)

void FUN_143552ce0(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar1 = param_2[2];
  dVar2 = param_2[3];
  dVar3 = param_2[1];
  dVar4 = *param_2;
  dVar7 = 0.0;
  dVar8 = dVar4 * dVar4 + dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (1e-12 < dVar8) {
    dVar7 = 2.0 / dVar8;
  }
  dVar2 = dVar2 * dVar7;
  dVar6 = dVar4 * dVar7;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[3] = 0.0;
  dVar8 = dVar1 * dVar7 * dVar1;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  dVar5 = dVar3 * dVar7 * dVar1;
  param_1[0xf] = 1.0;
  dVar7 = dVar3 * dVar7 * dVar3;
  dVar9 = 1.0 - dVar6 * dVar4;
  param_1[8] = dVar6 * dVar1 - dVar2 * dVar3;
  param_1[2] = dVar2 * dVar3 + dVar6 * dVar1;
  *param_1 = (1.0 - dVar7) - dVar8;
  param_1[9] = dVar2 * dVar4 + dVar5;
  param_1[6] = dVar5 - dVar2 * dVar4;
  param_1[4] = dVar2 * dVar1 + dVar6 * dVar3;
  param_1[1] = dVar6 * dVar3 - dVar2 * dVar1;
  param_1[5] = dVar9 - dVar8;
  param_1[10] = dVar9 - dVar7;
  return;
}



// FUNCTION 143552ea0 FUN_143552ea0 body=165 status=ok
// SIG undefined FUN_143552ea0(void)

void FUN_143552ea0(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x60);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x60) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x58);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x58) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x50);
  if (uVar1 != 0) {
    if ((uVar1 & 1) != 0) {
      *(ulonglong *)(param_1 + 0x50) = uVar1 - 1;
      FUN_1435b38e0(param_1);
      return;
    }
    if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880();
    }
  }
  FUN_1435b38e0(param_1);
  return;
}



// FUNCTION 143552f50 FUN_143552f50 body=307 status=ok
// SIG undefined FUN_143552f50(void)

double * FUN_143552f50(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar1 = param_1[3];
  dVar2 = param_1[2];
  dVar3 = param_3[3];
  dVar4 = param_1[1];
  dVar5 = *param_3;
  dVar6 = *param_1;
  dVar7 = param_3[2];
  dVar8 = param_3[1];
  param_2[3] = ((dVar1 * dVar3 - dVar6 * dVar5) - dVar4 * dVar8) - dVar2 * dVar7;
  *param_2 = (dVar5 * dVar1 + dVar6 * dVar3 + dVar2 * dVar8) - dVar7 * dVar4;
  param_2[1] = (dVar8 * dVar1 + dVar4 * dVar3 + dVar7 * dVar6) - dVar2 * dVar5;
  param_2[2] = (dVar7 * dVar1 + dVar2 * dVar3 + dVar4 * dVar5) - dVar8 * dVar6;
  return param_2;
}



// FUNCTION 143553090 FUN_143553090 body=89 status=ok
// SIG undefined FUN_143553090(void)

undefined8 FUN_143553090(undefined8 param_1,ulonglong param_2)

{
  FUN_1435b9dc0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1435530f0 FUN_1435530f0 body=89 status=ok
// SIG undefined FUN_1435530f0(void)

undefined8 FUN_1435530f0(undefined8 param_1,ulonglong param_2)

{
  FUN_1435b9dc0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,200);
  }
  return param_1;
}



// FUNCTION 143553150 FUN_143553150 body=89 status=ok
// SIG undefined FUN_143553150(void)

undefined8 FUN_143553150(undefined8 param_1,ulonglong param_2)

{
  FUN_1435b9dc0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1435531b0 FUN_1435531b0 body=89 status=ok
// SIG undefined FUN_1435531b0(void)

undefined8 FUN_1435531b0(undefined8 param_1,ulonglong param_2)

{
  FUN_1435b9dc0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 143553210 FUN_143553210 body=89 status=ok
// SIG undefined FUN_143553210(void)

undefined8 FUN_143553210(undefined8 param_1,ulonglong param_2)

{
  FUN_143552ea0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 143553270 Append body=5 status=ok
// SIG Matrix2x4<double> * Append(Matrix2x4<double> * this, Matrix2x4<double> * param_1)

/* public: class Scaleform::Render::Matrix2x4<double> & __ptr64 __cdecl
   Scaleform::Render::Matrix2x4<double>::Append(class Scaleform::Render::Matrix2x4<double> const &
   __ptr64) __ptr64 */

Matrix2x4<double> * __thiscall
Scaleform::Render::Matrix2x4<double>::Append(Matrix2x4<double> *this,Matrix2x4<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
                    /* 0x3553270  67  ?Append@?$Matrix2x4@N@Render@Scaleform@@QEAAAEAV123@AEBV123@@Z
                        */
  dVar1 = *(double *)this;
  dVar2 = *(double *)(this + 8);
  dVar3 = *(double *)(this + 0x18);
  *(double *)this = dVar1 * *(double *)param_1 + *(double *)(this + 0x20) * *(double *)(param_1 + 8)
  ;
  *(double *)(this + 0x20) =
       dVar1 * *(double *)(param_1 + 0x20) + *(double *)(this + 0x20) * *(double *)(param_1 + 0x28);
  *(double *)(this + 8) =
       dVar2 * *(double *)param_1 + *(double *)(this + 0x28) * *(double *)(param_1 + 8);
  *(double *)(this + 0x28) =
       dVar2 * *(double *)(param_1 + 0x20) + *(double *)(this + 0x28) * *(double *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(double *)(this + 0x18) =
       dVar3 * *(double *)param_1 + *(double *)(this + 0x38) * *(double *)(param_1 + 8) +
       *(double *)(param_1 + 0x18);
  *(double *)(this + 0x38) =
       dVar3 * *(double *)(param_1 + 0x20) + *(double *)(this + 0x38) * *(double *)(param_1 + 0x28)
       + *(double *)(param_1 + 0x38);
  return this;
}



// FUNCTION 143553280 FUN_143553280 body=291 status=ok
// SIG undefined FUN_143553280(void)

double * FUN_143553280(double *param_1,double param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = _guard_xfg_dispatch_icall_nop(param_2);
  dVar5 = _guard_xfg_dispatch_icall_nop(param_2);
  dVar1 = param_1[7];
  dVar2 = *param_1;
  dVar3 = param_1[1];
  *param_1 = -dVar5 * param_1[4] + dVar2 * dVar4;
  param_1[4] = dVar2 * dVar5 + param_1[4] * dVar4;
  param_1[1] = -dVar5 * param_1[5] + dVar3 * dVar4;
  param_1[5] = dVar3 * dVar5 + param_1[5] * dVar4;
  param_1[2] = 0.0;
  param_1[6] = 0.0;
  param_1[7] = param_1[3] * dVar5 + dVar1 * dVar4 + 0.0;
  param_1[3] = -dVar5 * dVar1 + param_1[3] * dVar4 + 0.0;
  return param_1;
}



// FUNCTION 1435533b0 Append_NonOpt body=207 status=ok
// SIG Matrix2x4<double> * Append_NonOpt(Matrix2x4<double> * this, Matrix2x4<double> * param_1)

/* public: class Scaleform::Render::Matrix2x4<double> & __ptr64 __cdecl
   Scaleform::Render::Matrix2x4<double>::Append_NonOpt(class Scaleform::Render::Matrix2x4<double>
   const & __ptr64) __ptr64 */

Matrix2x4<double> * __thiscall
Scaleform::Render::Matrix2x4<double>::Append_NonOpt
          (Matrix2x4<double> *this,Matrix2x4<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
                    /* 0x35533b0  68
                       ?Append_NonOpt@?$Matrix2x4@N@Render@Scaleform@@QEAAAEAV123@AEBV123@@Z */
  dVar1 = *(double *)this;
  dVar2 = *(double *)(this + 8);
  dVar3 = *(double *)(this + 0x18);
  *(double *)this = dVar1 * *(double *)param_1 + *(double *)(this + 0x20) * *(double *)(param_1 + 8)
  ;
  *(double *)(this + 0x20) =
       dVar1 * *(double *)(param_1 + 0x20) + *(double *)(this + 0x20) * *(double *)(param_1 + 0x28);
  *(double *)(this + 8) =
       dVar2 * *(double *)param_1 + *(double *)(this + 0x28) * *(double *)(param_1 + 8);
  *(double *)(this + 0x28) =
       dVar2 * *(double *)(param_1 + 0x20) + *(double *)(this + 0x28) * *(double *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(double *)(this + 0x18) =
       dVar3 * *(double *)param_1 + *(double *)(this + 0x38) * *(double *)(param_1 + 8) +
       *(double *)(param_1 + 0x18);
  *(double *)(this + 0x38) =
       dVar3 * *(double *)(param_1 + 0x20) + *(double *)(this + 0x38) * *(double *)(param_1 + 0x28)
       + *(double *)(param_1 + 0x38);
  return this;
}



// FUNCTION 143553480 FUN_143553480 body=2555 status=ok
// SIG undefined FUN_143553480(void)

bool FUN_143553480(Matrix3x4<double> *param_1,undefined8 *param_2,double *param_3,double *param_4,
                  double *param_5,int param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  double dVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double local_c8;
  
  bVar9 = Scaleform::Render::Matrix3x4<double>::IsValid(param_1);
  if (!bVar9) {
    return bVar9;
  }
  dVar7 = ((*(double *)(param_1 + 0x50) * *(double *)(param_1 + 0x28) -
           *(double *)(param_1 + 0x48) * *(double *)(param_1 + 0x30)) * *(double *)param_1 -
          (*(double *)(param_1 + 0x50) * *(double *)(param_1 + 0x20) -
          *(double *)(param_1 + 0x40) * *(double *)(param_1 + 0x30)) * *(double *)(param_1 + 8)) +
          (*(double *)(param_1 + 0x48) * *(double *)(param_1 + 0x20) -
          *(double *)(param_1 + 0x40) * *(double *)(param_1 + 0x28)) * *(double *)(param_1 + 0x10);
  if (ABS(dVar7) <= 1e-12 && ABS(dVar7) != 1e-12) {
    return false;
  }
  *param_2 = *(undefined8 *)(param_1 + 0x18);
  param_2[1] = *(undefined8 *)(param_1 + 0x38);
  param_2[2] = *(undefined8 *)(param_1 + 0x58);
  *param_3 = 1.0;
  *param_4 = 0.0;
  *param_5 = 0.0;
  param_3[1] = 1.0;
  param_4[1] = 0.0;
  param_5[1] = 0.0;
  param_3[2] = 1.0;
  param_4[2] = 0.0;
  param_5[2] = 0.0;
  param_5[3] = 1.0;
  if (2 < param_6 - 1U) {
    return false;
  }
  local_120 = *(double *)param_1;
  uVar11 = SUB84(local_120,0);
  uVar12 = (uint)((ulonglong)local_120 >> 0x20);
  local_100 = *(double *)(param_1 + 0x20);
  uVar14 = SUB84(local_100,0);
  uVar15 = (uint)((ulonglong)local_100 >> 0x20);
  local_128 = *(double *)(param_1 + 0x40);
  uVar16 = SUB84(local_128,0);
  uVar17 = (undefined4)((ulonglong)local_128 >> 0x20);
  dVar7 = *(double *)(param_1 + 0x50);
  dVar1 = *(double *)(param_1 + 0x28);
  dVar2 = *(double *)(param_1 + 8);
  dVar3 = *(double *)(param_1 + 0x48);
  dVar4 = *(double *)(param_1 + 0x10);
  dVar5 = *(double *)(param_1 + 0x30);
  local_118 = dVar4;
  local_110 = dVar5;
  local_108 = dVar7;
  local_f8 = dVar2;
  local_f0 = dVar1;
  local_e8 = dVar3;
  local_e0 = local_120;
  dStack_d8 = local_100;
  local_d0 = local_128;
  dVar10 = _guard_xfg_dispatch_icall_nop
                     (local_128 * local_128 + local_120 * local_120 + local_100 * local_100);
  *param_3 = dVar10;
  if (1.1920928955078125e-07 <= dVar10) {
    if (1.1920928955078125e-07 <= ABS(1.0 - dVar10) && ABS(1.0 - dVar10) != 1.1920928955078125e-07)
    {
      FUN_143555e50(&local_e0);
      uVar16 = SUB84(local_d0,0);
      uVar17 = (undefined4)((ulonglong)local_d0 >> 0x20);
      uVar14 = SUB84(dStack_d8,0);
      uVar15 = (uint)((ulonglong)dStack_d8 >> 0x20);
      uVar11 = SUB84(local_e0,0);
      uVar12 = (uint)((ulonglong)local_e0 >> 0x20);
      local_128 = local_d0;
      local_100 = dStack_d8;
      local_120 = local_e0;
    }
    dVar10 = dVar2 * (double)CONCAT44(uVar12,uVar11) + (double)CONCAT44(uVar15,uVar14) * dVar1 +
             (double)CONCAT44(uVar17,uVar16) * dVar3;
    *param_4 = dVar10;
    if (1.1920928955078125e-07 <= ABS(dVar10) && ABS(dVar10) != 1.1920928955078125e-07) {
      dVar3 = dVar3 + -(dVar10 * local_128);
      dVar2 = dVar2 + -(dVar10 * (double)CONCAT44(uVar12,uVar11));
      dVar1 = dVar1 + -(dVar10 * (double)CONCAT44(uVar15,uVar14));
      local_f8 = dVar2;
      local_f0 = dVar1;
      local_e8 = dVar3;
    }
    dVar10 = _guard_xfg_dispatch_icall_nop(dVar3 * dVar3 + dVar2 * dVar2 + dVar1 * dVar1);
    param_3[1] = dVar10;
    if (1.1920928955078125e-07 <= dVar10) {
      if (1.1920928955078125e-07 <= ABS(1.0 - dVar10) && ABS(1.0 - dVar10) != 1.1920928955078125e-07
         ) {
        FUN_143555e50(&local_f8);
        *param_4 = *param_4 / param_3[1];
        dVar1 = local_f0;
        dVar2 = local_f8;
        dVar3 = local_e8;
      }
      dVar10 = dVar5 * (double)CONCAT44(uVar15,uVar14) + dVar4 * (double)CONCAT44(uVar12,uVar11) +
               local_128 * dVar7;
      param_4[1] = dVar10;
      if (1.1920928955078125e-07 <= ABS(dVar10) && ABS(dVar10) != 1.1920928955078125e-07) {
        dVar4 = dVar4 + -(dVar10 * (double)CONCAT44(uVar12,uVar11));
        dVar5 = dVar5 + -(dVar10 * (double)CONCAT44(uVar15,uVar14));
        dVar7 = dVar7 + -(dVar10 * local_128);
        local_118 = dVar4;
        local_110 = dVar5;
        local_108 = dVar7;
      }
      dVar10 = dVar5 * dVar1 + dVar2 * dVar4 + dVar3 * dVar7;
      param_4[2] = dVar10;
      if (1.1920928955078125e-07 <= ABS(dVar10) && ABS(dVar10) != 1.1920928955078125e-07) {
        dVar4 = dVar4 + -(dVar10 * dVar2);
        dVar5 = dVar5 + -(dVar10 * dVar1);
        dVar7 = dVar7 + -(dVar10 * dVar3);
        local_118 = dVar4;
        local_110 = dVar5;
        local_108 = dVar7;
      }
      dVar10 = _guard_xfg_dispatch_icall_nop(dVar7 * dVar7 + dVar5 * dVar5 + dVar4 * dVar4);
      param_3[2] = dVar10;
      if (1.1920928955078125e-07 <= dVar10) {
        if (1.1920928955078125e-07 <= ABS(1.0 - dVar10) &&
            ABS(1.0 - dVar10) != 1.1920928955078125e-07) {
          FUN_143555e50(&local_118);
          param_4[1] = param_4[1] / param_3[2];
          param_4[2] = param_4[2] / param_3[2];
          dVar7 = local_108;
          dVar4 = local_118;
          dVar5 = local_110;
        }
        if (param_6 == 1) {
          if ((dVar1 * dVar7 - dVar5 * dVar3) * (double)CONCAT44(uVar12,uVar11) +
              (dVar3 * dVar4 - dVar2 * dVar7) * (double)CONCAT44(uVar15,uVar14) +
              (dVar5 * dVar2 - dVar4 * dVar1) * local_128 < 0.0) {
            local_128 = -local_128;
            uVar12 = uVar12 ^ 0x80000000;
            *(undefined4 *)param_3 = *(undefined4 *)param_3;
            *(uint *)((longlong)param_3 + 4) = *(uint *)((longlong)param_3 + 4) ^ 0x80000000;
            *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_3 + 1);
            *(uint *)((longlong)param_3 + 0xc) = *(uint *)((longlong)param_3 + 0xc) ^ 0x80000000;
            uVar15 = uVar15 ^ 0x80000000;
            dVar2 = -dVar2;
            param_3[2] = -param_3[2];
            dVar1 = -dVar1;
            dVar3 = -dVar3;
            dVar4 = -dVar4;
            dVar7 = -dVar7;
          }
          if (dVar7 + 1.1920928955078125e-06 < 1.0) {
            if (dVar1 + 1.1920928955078125e-06 < 1.0) {
              if ((double)CONCAT44(uVar12,uVar11) + 1.1920928955078125e-06 < 1.0) {
                dVar4 = _guard_xfg_dispatch_icall_nop(-local_128);
                param_5[1] = dVar4;
                if ((1.1920928955078125e-06 < ABS((double)CONCAT44(uVar12,uVar11))) ||
                   (1.1920928955078125e-06 <= ABS((double)CONCAT44(uVar15,uVar14)) &&
                    ABS((double)CONCAT44(uVar15,uVar14)) != 1.1920928955078125e-06)) {
                  dVar4 = _guard_xfg_dispatch_icall_nop
                                    ((double)CONCAT44(uVar15,uVar14),(double)CONCAT44(uVar12,uVar11)
                                    );
                  param_5[2] = dVar4;
                }
                else {
                  param_5[2] = 0.0;
                }
                if ((ABS(dVar3) < 1.1920928955078125e-06 || ABS(dVar3) == 1.1920928955078125e-06) &&
                   (ABS(dVar7) < 1.1920928955078125e-06 || ABS(dVar7) == 1.1920928955078125e-06)) {
                  if (0.0 < local_128) {
                    dVar2 = -dVar2;
                  }
                  dVar7 = _guard_xfg_dispatch_icall_nop(dVar2,dVar1);
                  *param_5 = dVar7;
                  return true;
                }
              }
              dVar7 = _guard_xfg_dispatch_icall_nop(dVar3,dVar7);
              *param_5 = dVar7;
            }
            else {
              dVar7 = _guard_xfg_dispatch_icall_nop(dVar4,(double)CONCAT44(uVar12,uVar11));
              param_5[1] = dVar7;
            }
          }
          else if (dVar1 + 1.1920928955078125e-06 < 1.0) {
            dVar7 = _guard_xfg_dispatch_icall_nop((double)CONCAT44(uVar15,uVar14),dVar1);
            param_5[2] = dVar7;
          }
        }
        else {
          uVar13 = uVar12;
          if ((dVar1 * dVar7 - dVar5 * dVar3) * (double)CONCAT44(uVar12,uVar11) +
              (dVar3 * dVar4 - dVar2 * dVar7) * (double)CONCAT44(uVar15,uVar14) +
              (dVar5 * dVar2 - dVar4 * dVar1) * local_128 < 0.0) {
            uVar13 = uVar12 ^ 0x80000000;
            local_120 = -(double)CONCAT44(uVar12,uVar11);
            *(undefined4 *)param_3 = *(undefined4 *)param_3;
            *(uint *)((longlong)param_3 + 4) = *(uint *)((longlong)param_3 + 4) ^ 0x80000000;
            *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_3 + 1);
            *(uint *)((longlong)param_3 + 0xc) = *(uint *)((longlong)param_3 + 0xc) ^ 0x80000000;
            local_128 = -local_128;
            local_100 = -(double)CONCAT44(uVar15,uVar14);
            param_3[2] = -param_3[2];
            dVar2 = -dVar2;
            dVar1 = -dVar1;
            dVar3 = -dVar3;
            dVar4 = -dVar4;
            dVar5 = -dVar5;
            dVar7 = -dVar7;
          }
          dVar8 = (double)CONCAT44(uVar13,uVar11) + 1.0;
          dVar10 = (dVar8 - dVar1) - dVar7;
          if (dVar10 <= 0.0) {
            dVar10 = 0.0;
          }
          local_c8 = _guard_xfg_dispatch_icall_nop(dVar10);
          local_c8 = local_c8 * 0.5;
          *param_5 = local_c8;
          dVar10 = ((1.0 - local_120) + dVar1) - dVar7;
          if (dVar10 <= 0.0) {
            dVar10 = 0.0;
          }
          dVar10 = _guard_xfg_dispatch_icall_nop(dVar10);
          dVar6 = ((1.0 - local_120) - dVar1) + dVar7;
          param_5[1] = dVar10 * 0.5;
          if (dVar6 <= 0.0) {
            dVar6 = 0.0;
          }
          dVar6 = _guard_xfg_dispatch_icall_nop(dVar6);
          dVar7 = dVar8 + dVar1 + dVar7;
          dVar1 = 0.0;
          param_5[2] = dVar6 * 0.5;
          if (dVar7 <= 0.0) {
            dVar7 = 0.0;
          }
          dVar7 = _guard_xfg_dispatch_icall_nop(dVar7);
          dVar7 = dVar7 * 0.5;
          param_5[3] = dVar7;
          if (dVar3 < dVar5) {
            *param_5 = -local_c8;
          }
          if (dVar4 < local_128) {
            param_5[1] = -(dVar10 * 0.5);
          }
          if (local_100 < dVar2) {
            param_5[2] = -(dVar6 * 0.5);
          }
          if (param_6 == 2) {
            dVar4 = *param_5;
            dVar3 = param_5[1];
            dVar2 = param_5[2];
            dVar5 = _guard_xfg_dispatch_icall_nop(dVar3 * dVar3 + dVar4 * dVar4 + dVar2 * dVar2);
            if (((ABS(dVar5) < 1e-12) || (dVar7 < -1.0)) || (1.0 < dVar7)) {
              dVar2 = 0.0;
              dVar3 = 1.0;
              dVar4 = 0.0;
            }
            else {
              dVar5 = 1.0 / dVar5;
              dVar1 = _guard_xfg_dispatch_icall_nop(dVar7);
              dVar4 = dVar4 * dVar5;
              dVar1 = dVar1 * 2.0;
              dVar3 = dVar3 * dVar5;
              dVar2 = dVar2 * dVar5;
            }
            *param_5 = dVar4;
            param_5[1] = dVar3;
            param_5[2] = dVar2;
            param_5[3] = dVar1;
          }
        }
        return true;
      }
    }
    return false;
  }
  return false;
}



// FUNCTION 143553e80 FUN_143553e80 body=610 status=ok
// SIG undefined FUN_143553e80(void)

undefined1
FUN_143553e80(Matrix4x4<double> *param_1,double *param_2,undefined8 param_3,undefined8 param_4,
             double *param_5,undefined8 param_6,undefined4 param_7)

{
  bool bVar1;
  undefined1 uVar2;
  double dVar3;
  undefined1 local_b8 [16];
  double local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  double local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  double local_68;
  undefined8 uStack_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  
  bVar1 = Scaleform::Render::Matrix4x4<double>::IsValid(param_1);
  uVar2 = 0;
  if (bVar1) {
    if ((ABS(*(double *)(param_1 + 0x78)) <= 1.1920928955078125e-07 &&
         ABS(*(double *)(param_1 + 0x78)) != 1.1920928955078125e-07) ||
       (dVar3 = (double)FUN_1435540f0(), ABS(dVar3) <= 1e-12 && ABS(dVar3) != 1e-12)) {
      uVar2 = 0;
    }
    else {
      local_b8 = *(undefined1 (*) [16])param_1;
      local_a8 = *(double *)(param_1 + 0x10);
      local_98 = *(undefined1 (*) [16])(param_1 + 0x20);
      local_88 = *(double *)(param_1 + 0x30);
      local_78 = *(undefined1 (*) [16])(param_1 + 0x40);
      local_68 = *(double *)(param_1 + 0x50);
      if (1.1920928955078125e-07 <= ABS(1.0 - *(double *)(param_1 + 0x78)) &&
          ABS(1.0 - *(double *)(param_1 + 0x78)) != 1.1920928955078125e-07) {
        dVar3 = 1.0 / *(double *)(param_1 + 0x78);
        local_b8._8_4_ = SUB84(*(double *)(param_1 + 8) * dVar3,0);
        local_b8._0_8_ = *(double *)param_1 * dVar3;
        local_b8._12_4_ = (int)((ulonglong)(*(double *)(param_1 + 8) * dVar3) >> 0x20);
        local_a8 = local_a8 * dVar3;
        local_98._8_4_ = SUB84(*(double *)(param_1 + 0x28) * dVar3,0);
        local_98._0_8_ = *(double *)(param_1 + 0x20) * dVar3;
        local_98._12_4_ = (int)((ulonglong)(*(double *)(param_1 + 0x28) * dVar3) >> 0x20);
        local_88 = local_88 * dVar3;
        local_78._8_4_ = SUB84(*(double *)(param_1 + 0x48) * dVar3,0);
        local_78._0_8_ = *(double *)(param_1 + 0x40) * dVar3;
        local_78._12_4_ = (int)((ulonglong)(*(double *)(param_1 + 0x48) * dVar3) >> 0x20);
        local_68 = local_68 * dVar3;
      }
      *param_2 = *(double *)(param_1 + 0x18);
      param_2[1] = *(double *)(param_1 + 0x38);
      param_2[2] = *(double *)(param_1 + 0x58);
      local_40 = *(double *)(param_1 + 0x60);
      local_30 = *(double *)(param_1 + 0x70);
      uStack_a0 = 0;
      uStack_80 = 0;
      uStack_60 = 0;
      local_38 = *(double *)(param_1 + 0x68);
      if (1e-12 <= local_40 * local_40 + local_38 * local_38 + local_30 * local_30) {
        FUN_1435569b0(local_b8,&local_58,&local_40);
        *param_5 = local_58;
        param_5[1] = local_50;
        param_5[2] = local_48;
        param_5[3] = 1.0 - (param_2[1] * local_50 + *param_2 * local_58 + param_2[2] * local_48);
      }
      else {
        *param_5 = 0.0;
        param_5[1] = 0.0;
        param_5[2] = 0.0;
        param_5[3] = 1.0;
      }
      uVar2 = FUN_143553480(local_b8,&local_58,param_3,param_4,param_6,param_7);
    }
  }
  return uVar2;
}



// FUNCTION 1435540f0 FUN_1435540f0 body=460 status=ok
// SIG undefined FUN_1435540f0(void)

double FUN_1435540f0(double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  dVar1 = param_1[0xb];
  dVar2 = param_1[0xf];
  dVar3 = param_1[9];
  dVar4 = param_1[0xd];
  dVar5 = param_1[0xc];
  dVar6 = param_1[0xe];
  dVar7 = param_1[10];
  dVar8 = param_1[7];
  dVar12 = dVar7 * dVar2 - dVar1 * dVar6;
  dVar9 = param_1[8];
  dVar10 = param_1[4];
  dVar13 = dVar3 * dVar2 - dVar4 * dVar1;
  dVar11 = param_1[6];
  dVar14 = dVar3 * dVar6 - dVar4 * dVar7;
  dVar2 = dVar9 * dVar2 - dVar5 * dVar1;
  dVar1 = param_1[5];
  dVar4 = dVar9 * dVar4 - dVar5 * dVar3;
  dVar3 = dVar9 * dVar6 - dVar5 * dVar7;
  return ((((dVar1 * dVar12 - dVar11 * dVar13) + dVar8 * dVar14) * *param_1 -
          ((dVar10 * dVar12 - dVar2 * dVar11) + dVar3 * dVar8) * param_1[1]) +
         ((dVar10 * dVar13 - dVar2 * dVar1) + dVar4 * dVar8) * param_1[2]) -
         ((dVar10 * dVar14 - dVar3 * dVar1) + dVar4 * dVar11) * param_1[3];
}



// FUNCTION 1435542c0 FUN_1435542c0 body=1316 status=ok
// SIG undefined FUN_1435542c0(void)

double * FUN_1435542c0(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
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
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 local_108 [8];
  double dStack_100;
  double local_f8;
  double local_e8;
  double local_d8;
  double local_c8;
  double dStack_c0;
  
  dVar1 = param_1[7];
  dVar32 = param_1[8] * 0.0;
  dVar35 = param_1[9] * 0.0;
  dVar33 = dVar32 - param_1[10] * 0.0;
  dVar32 = dVar32 - dVar35;
  dVar2 = param_1[0xb];
  dVar35 = dVar35 - param_1[10] * 0.0;
  dVar3 = param_1[3];
  dVar20 = dVar2 * 0.0;
  dVar28 = param_1[8] - dVar20;
  dVar26 = param_1[9] - dVar20;
  dVar20 = param_1[10] - dVar20;
  dVar22 = (dVar20 * param_1[5] - dVar26 * param_1[6]) + dVar35 * dVar1;
  dVar25 = (dVar20 * param_1[4] - dVar28 * param_1[6]) + dVar33 * dVar1;
  dVar23 = (dVar26 * param_1[4] - dVar28 * param_1[5]) + dVar32 * dVar1;
  dVar4 = *param_1;
  dVar29 = -((dVar35 * param_1[4] - dVar33 * param_1[5]) + dVar32 * param_1[6]) * dVar3 +
           -dVar25 * param_1[1] + dVar22 * dVar4 + dVar23 * param_1[2];
  if (dVar29 == 0.0) {
    _guard_xfg_dispatch_icall_nop(local_108,0,0x60);
    *param_2 = 1.0;
    param_2[1] = dStack_100;
    param_2[2] = local_f8;
    param_2[3] = -dVar3;
    param_2[4] = local_e8;
    param_2[5] = 1.0;
    param_2[6] = local_d8;
    param_2[7] = -dVar1;
    param_2[8] = local_c8;
    param_2[9] = dStack_c0;
    *(undefined4 *)(param_2 + 10) = 0;
    *(undefined4 *)((longlong)param_2 + 0x54) = 0x3ff00000;
    *(int *)(param_2 + 0xb) = SUB84(dVar2,0);
    *(uint *)((longlong)param_2 + 0x5c) = (uint)((ulonglong)dVar2 >> 0x20) ^ 0x80000000;
  }
  else {
    dVar5 = param_1[1];
    dVar6 = param_1[2];
    dVar29 = 1.0 / dVar29;
    dVar7 = param_1[2];
    dVar8 = param_1[1];
    dVar9 = param_1[5];
    dVar21 = dVar1 * 0.0;
    dVar10 = param_1[5];
    dVar36 = param_1[4] - dVar21;
    dVar24 = param_1[6] - dVar21;
    dVar27 = param_1[6] * 0.0;
    dVar11 = param_1[2];
    dVar12 = param_1[1];
    dVar13 = *param_1;
    dVar30 = param_1[4] * 0.0;
    dVar14 = param_1[1];
    dVar15 = param_1[4];
    dVar31 = param_1[5];
    dVar34 = dVar2 * dVar15 - param_1[8] * dVar1;
    dVar16 = param_1[6];
    dVar17 = param_1[10];
    dVar18 = param_1[9];
    param_2[6] = -(((dVar24 * *param_1 - dVar36 * param_1[2]) + (dVar30 - dVar27) * dVar3) * dVar29)
    ;
    dVar19 = param_1[8];
    param_2[1] = -(((dVar20 * dVar5 - dVar26 * dVar6) + dVar35 * dVar3) * dVar29);
    dVar31 = dVar2 * dVar31 - dVar18 * dVar1;
    param_2[2] = ((dVar24 * dVar12 - (dVar10 - dVar21) * dVar11) + (dVar9 * 0.0 - dVar27) * dVar3) *
                 dVar29;
    dVar35 = param_1[5];
    dVar5 = param_1[9];
    param_2[5] = ((dVar20 * dVar4 - dVar28 * dVar7) + dVar33 * dVar3) * dVar29;
    param_2[10] = (((dVar10 - dVar21) * dVar13 - dVar36 * dVar14) + (dVar30 - dVar9 * 0.0) * dVar3)
                  * dVar29;
    dVar11 = dVar2 * dVar16 - dVar17 * dVar1;
    dVar1 = *param_1;
    dVar2 = param_1[1];
    *param_2 = dVar29 * dVar22;
    dVar20 = param_1[6];
    dVar22 = param_1[2];
    dVar33 = *param_1;
    dVar6 = param_1[10];
    param_2[4] = dVar29 * -dVar25;
    dVar25 = param_1[6];
    dVar7 = param_1[5];
    dVar9 = param_1[2];
    dVar10 = param_1[1];
    param_2[3] = -(((dVar17 * dVar35 - dVar5 * dVar20) * dVar3 + (dVar11 * dVar2 - dVar31 * dVar22))
                  * dVar29);
    param_2[9] = -(((dVar26 * dVar4 - dVar28 * dVar8) + dVar32 * dVar3) * dVar29);
    param_2[8] = dVar29 * dVar23;
    param_2[7] = ((dVar6 * dVar15 - dVar19 * dVar25) * dVar3 + (dVar11 * dVar1 - dVar34 * dVar9)) *
                 dVar29;
    param_2[0xb] = -(((dVar5 * dVar15 - dVar19 * dVar7) * dVar3 +
                     (dVar31 * dVar33 - dVar34 * dVar10)) * dVar29);
  }
  return param_2;
}



// FUNCTION 1435547f0 FUN_1435547f0 body=1737 status=ok
// SIG undefined FUN_1435547f0(void)

double * FUN_1435547f0(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
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
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined1 local_128 [8];
  double dStack_120;
  double local_118;
  double local_108;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  
  dVar1 = param_1[0xc];
  dVar2 = param_1[8];
  dVar34 = param_1[0xf];
  dVar3 = *param_1;
  dVar4 = param_1[7];
  dVar5 = param_1[9];
  dVar6 = param_1[0xd];
  dVar7 = param_1[3];
  dVar33 = dVar6 * dVar2 - dVar1 * dVar5;
  dVar36 = param_1[10];
  dVar8 = param_1[0xb];
  dVar31 = param_1[0xe] * dVar2 - dVar1 * dVar36;
  dVar32 = dVar34 * dVar2 - dVar1 * dVar8;
  dVar2 = param_1[0xe] * dVar5 - dVar6 * dVar36;
  dVar42 = dVar34 * dVar5 - dVar6 * dVar8;
  dVar1 = dVar34 * dVar36 - param_1[0xe] * dVar8;
  dVar36 = (dVar1 * param_1[5] - dVar42 * param_1[6]) + dVar2 * dVar4;
  dVar5 = (dVar1 * param_1[4] - dVar32 * param_1[6]) + dVar31 * dVar4;
  dVar39 = (dVar42 * param_1[4] - dVar32 * param_1[5]) + dVar33 * dVar4;
  dVar6 = (dVar2 * param_1[4] - dVar31 * param_1[5]) + dVar33 * param_1[6];
  dVar34 = -dVar5 * param_1[1] + dVar36 * *param_1 + dVar39 * param_1[2] + -dVar6 * dVar7;
  if (dVar34 == 0.0) {
    _guard_xfg_dispatch_icall_nop(local_128,0,0x80);
    *param_2 = 1.0;
    param_2[1] = dStack_120;
    param_2[2] = local_118;
    param_2[3] = -dVar7;
    param_2[4] = local_108;
    param_2[5] = 1.0;
    param_2[6] = local_f8;
    param_2[7] = -dVar4;
    param_2[8] = local_e8;
    param_2[9] = dStack_e0;
    *(undefined4 *)(param_2 + 10) = 0;
    *(undefined4 *)((longlong)param_2 + 0x54) = 0x3ff00000;
    *(int *)(param_2 + 0xb) = SUB84(dVar8,0);
    *(uint *)((longlong)param_2 + 0x5c) = (uint)((ulonglong)dVar8 >> 0x20) ^ 0x80000000;
    param_2[0xc] = local_c8;
    param_2[0xd] = dStack_c0;
    param_2[0xe] = local_b8;
    param_2[0xf] = 1.0;
  }
  else {
    dVar9 = *param_1;
    dVar34 = 1.0 / dVar34;
    dVar10 = param_1[2];
    dVar11 = param_1[1];
    dVar12 = param_1[1];
    dVar13 = param_1[2];
    dVar14 = param_1[4];
    dVar15 = param_1[0xc];
    dVar16 = param_1[0xf];
    dVar17 = param_1[5];
    dVar40 = param_1[0xd] * dVar14 - dVar15 * dVar17;
    dVar37 = param_1[0xe] * dVar14 - dVar15 * param_1[6];
    dVar35 = dVar16 * dVar14 - dVar15 * dVar4;
    dVar30 = param_1[0xe] * dVar17 - param_1[0xd] * param_1[6];
    dVar14 = param_1[3];
    dVar29 = dVar16 * dVar17 - param_1[0xd] * dVar4;
    dVar27 = dVar16 * param_1[6] - param_1[0xe] * dVar4;
    dVar4 = param_1[2];
    dVar15 = param_1[1];
    dVar16 = *param_1;
    dVar17 = param_1[2];
    dVar18 = param_1[1];
    dVar19 = param_1[1];
    dVar20 = *param_1;
    dVar21 = param_1[2];
    dVar38 = param_1[8];
    dVar43 = param_1[4];
    dVar22 = param_1[5];
    param_2[1] = -(((dVar1 * param_1[1] - dVar42 * param_1[2]) + dVar2 * dVar7) * dVar34);
    dVar23 = param_1[3];
    dVar24 = param_1[6];
    dVar25 = param_1[10];
    dVar26 = param_1[7];
    dVar28 = param_1[9] * dVar43 - dVar38 * dVar22;
    param_2[2] = ((dVar27 * dVar15 - dVar29 * dVar4) + dVar30 * dVar14) * dVar34;
    dVar41 = dVar8 * dVar43 - dVar38 * dVar26;
    dVar15 = dVar25 * dVar43 - dVar38 * param_1[6];
    dVar43 = param_1[10] * dVar22 - param_1[9] * param_1[6];
    dVar38 = dVar8 * dVar22 - param_1[9] * dVar26;
    dVar8 = dVar8 * dVar24 - param_1[10] * dVar26;
    dVar4 = param_1[1];
    *param_2 = dVar34 * dVar36;
    dVar36 = param_1[2];
    param_2[5] = ((dVar1 * dVar9 - dVar32 * dVar10) + dVar31 * dVar7) * dVar34;
    param_2[4] = dVar34 * -dVar5;
    param_2[3] = -(((dVar8 * dVar4 - dVar38 * dVar36) + dVar43 * dVar23) * dVar34);
    dVar1 = *param_1;
    dVar4 = param_1[2];
    dVar5 = param_1[1];
    param_2[6] = -(((dVar27 * dVar3 - dVar35 * dVar17) + dVar37 * dVar14) * dVar34);
    dVar3 = param_1[1];
    param_2[10] = ((dVar29 * dVar20 - dVar35 * dVar18) + dVar40 * dVar14) * dVar34;
    param_2[0xe] = -(((dVar30 * dVar16 - dVar37 * dVar19) + dVar40 * dVar21) * dVar34);
    param_2[9] = -(((dVar42 * dVar9 - dVar32 * dVar11) + dVar33 * dVar7) * dVar34);
    param_2[8] = dVar34 * dVar39;
    dVar7 = param_1[2];
    param_2[0xd] = ((dVar2 * dVar9 - dVar31 * dVar12) + dVar33 * dVar13) * dVar34;
    param_2[7] = ((dVar8 * dVar1 - dVar41 * dVar4) + dVar15 * dVar23) * dVar34;
    param_2[0xc] = dVar34 * -dVar6;
    param_2[0xf] = ((dVar43 * dVar1 - dVar15 * dVar3) + dVar28 * dVar7) * dVar34;
    param_2[0xb] = -(((dVar38 * dVar1 - dVar41 * dVar5) + dVar28 * dVar23) * dVar34);
  }
  return param_2;
}



// FUNCTION 143554ec0 FUN_143554ec0 body=1765 status=ok
// SIG undefined FUN_143554ec0(void)

void FUN_143554ec0(Matrix4x4<double> *param_1,Matrix4x4<double> *param_2,Matrix4x4<double> *param_3,
                  double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
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
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  bool bVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  double local_388;
  double local_380;
  double local_378;
  undefined8 local_370;
  double local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 local_348;
  undefined4 uStack_344;
  double dStack_340;
  undefined8 local_338;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  double local_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  double local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 local_288;
  undefined4 uStack_284;
  double dStack_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  double local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  undefined1 local_228 [32];
  undefined1 local_208 [32];
  double local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  double dStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  
  bVar21 = Scaleform::Render::Matrix4x4<double>::IsValid(param_2);
  if (bVar21) {
    bVar21 = Scaleform::Render::Matrix4x4<double>::IsValid(param_3);
    if (bVar21) {
      uVar22 = 0;
      uVar23 = 0;
      if (0.0 <= param_4) {
        uVar22 = SUB84(param_4,0);
        uVar23 = (int)((ulonglong)param_4 >> 0x20);
      }
      uVar24 = 0;
      uVar25 = 0x3ff00000;
      if ((double)CONCAT44(uVar23,uVar22) <= 1.0) {
        uVar24 = uVar22;
        uVar25 = uVar23;
      }
      FUN_143553e80(param_2,&local_120,&local_150,&local_388,&local_d0,local_228,3);
      FUN_143553e80(param_3,&local_138,&local_168,&local_108,&local_f0,local_208,3);
      local_248 = 0.0;
      dStack_240 = 0.0;
      local_238 = 0.0;
      uStack_230 = 0x3ff0000000000000;
      FUN_143556d20(&local_248,local_228,local_208,uVar24);
      FUN_143555ee0(&local_248);
      local_2b8 = local_b8 + (local_d8 - local_b8) * (double)CONCAT44(uVar25,uVar24);
      dVar3 = local_150 + (local_168 - local_150) * (double)CONCAT44(uVar25,uVar24);
      local_2e8 = local_120 + (local_138 - local_120) * (double)CONCAT44(uVar25,uVar24);
      dVar6 = local_388 + (local_108 - local_388) * (double)CONCAT44(uVar25,uVar24);
      local_2d0 = local_d0 + (local_f0 - local_d0) * (double)CONCAT44(uVar25,uVar24);
      dVar2 = local_148 + (local_160 - local_148) * (double)CONCAT44(uVar25,uVar24);
      local_2e0 = local_118 + (local_130 - local_118) * (double)CONCAT44(uVar25,uVar24);
      dVar4 = local_380 + (local_100 - local_380) * (double)CONCAT44(uVar25,uVar24);
      local_2c8 = local_c8 + (local_e8 - local_c8) * (double)CONCAT44(uVar25,uVar24);
      dVar1 = local_140 + (local_158 - local_140) * (double)CONCAT44(uVar25,uVar24);
      local_2d8 = local_110 + (local_128 - local_110) * (double)CONCAT44(uVar25,uVar24);
      dVar5 = local_378 + (local_f8 - local_378) * (double)CONCAT44(uVar25,uVar24);
      local_2c0 = local_c0 + (local_e0 - local_c0) * (double)CONCAT44(uVar25,uVar24);
      _guard_xfg_dispatch_icall_nop(&local_368,0,0x60);
      uStack_2a0 = (undefined4)uStack_360;
      uStack_29c = uStack_360._4_4_;
      local_298 = (undefined4)local_358;
      uStack_294 = local_358._4_4_;
      uStack_290 = uStack_350;
      uStack_28c = uStack_34c;
      local_288 = local_348;
      uStack_284 = uStack_344;
      local_278 = (undefined4)local_338;
      uStack_274 = local_338._4_4_;
      uStack_270 = uStack_330;
      uStack_26c = uStack_32c;
      local_268 = local_328;
      uStack_264 = uStack_324;
      uStack_260 = uStack_320;
      uStack_25c = uStack_31c;
      uStack_250 = uStack_310;
      uStack_24c = uStack_30c;
      if (((1.1920928955078125e-07 <= ABS(dVar6) && ABS(dVar6) != 1.1920928955078125e-07) ||
          (1.1920928955078125e-07 <= ABS(dVar4) && ABS(dVar4) != 1.1920928955078125e-07)) ||
         (local_368 = dVar3, dStack_340 = dVar2, local_318 = dVar1,
         1.1920928955078125e-07 <= ABS(dVar5) && ABS(dVar5) != 1.1920928955078125e-07)) {
        local_368 = dVar3;
        dStack_340 = dVar2;
        local_318 = dVar1;
        dStack_280 = dVar2;
        local_2a8 = dVar3;
        local_258 = dVar1;
        _guard_xfg_dispatch_icall_nop(&local_368,0,0x60);
        local_368 = 1.0;
        dStack_340 = 1.0;
        local_318 = 1.0;
        uStack_1e0 = uStack_360;
        local_1d8 = local_358;
        uStack_1d0 = CONCAT44(uStack_34c,uStack_350);
        local_1c8 = CONCAT44(uStack_344,local_348);
        local_1b8 = local_338;
        uStack_1b0 = CONCAT44(uStack_32c,uStack_330);
        local_1a8 = CONCAT44(uStack_324,local_328);
        uStack_1a0 = CONCAT44(uStack_31c,uStack_320);
        uStack_190 = CONCAT44(uStack_30c,uStack_310);
        uStack_360 = dVar6;
        local_358 = dVar4;
        local_338 = dVar5;
        local_1e8 = dVar3;
        dStack_1c0 = dVar2;
        local_198 = dVar1;
        Scaleform::Render::Matrix3x4<double>::MultiplyMatrix_NonOpt
                  ((Matrix3x4<double> *)&local_2a8,(Matrix3x4<double> *)&local_368,
                   (Matrix3x4<double> *)&local_1e8);
        dVar2 = dStack_280;
        dVar3 = local_2a8;
        dVar1 = local_258;
      }
      uVar20 = uStack_24c;
      uVar19 = uStack_250;
      uVar18 = uStack_25c;
      uVar17 = uStack_260;
      uVar16 = uStack_264;
      uVar15 = local_268;
      uVar14 = uStack_26c;
      uVar13 = uStack_270;
      uVar12 = uStack_274;
      uVar11 = local_278;
      uVar10 = uStack_284;
      uVar9 = local_288;
      uVar8 = uStack_28c;
      uVar7 = uStack_290;
      uVar25 = uStack_294;
      uVar24 = local_298;
      uVar23 = uStack_29c;
      uVar22 = uStack_2a0;
      local_2a8 = dVar3;
      dStack_280 = dVar2;
      local_258 = dVar1;
      _guard_xfg_dispatch_icall_nop(&local_368,0,0x60);
      local_380 = dStack_240;
      local_388 = local_248;
      local_378 = local_238;
      local_370 = uStack_230;
      local_368 = 1.0;
      dStack_340 = 1.0;
      local_318 = 1.0;
      if (1.4210854715202004e-14 <
          dStack_240 * dStack_240 + local_248 * local_248 + local_238 * local_238) {
        FUN_143555ee0(&local_388);
        FUN_143552b30(&local_368,&local_388);
        uStack_1e0 = (double)CONCAT44(uVar23,uVar22);
        local_1d8 = (double)CONCAT44(uVar25,uVar24);
        uStack_1d0 = CONCAT44(uVar8,uVar7);
        local_1c8 = CONCAT44(uVar10,uVar9);
        local_1b8 = (double)CONCAT44(uVar12,uVar11);
        uStack_1b0 = CONCAT44(uVar14,uVar13);
        local_1a8 = CONCAT44(uVar16,uVar15);
        uStack_1a0 = CONCAT44(uVar18,uVar17);
        uStack_190 = CONCAT44(uVar20,uVar19);
        local_1e8 = dVar3;
        dStack_1c0 = dVar2;
        local_198 = dVar1;
        Scaleform::Render::Matrix3x4<double>::MultiplyMatrix_NonOpt
                  ((Matrix3x4<double> *)&local_2a8,(Matrix3x4<double> *)&local_368,
                   (Matrix3x4<double> *)&local_1e8);
      }
      *(double *)param_1 = local_2a8;
      *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_29c,uStack_2a0);
      *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_294,local_298);
      *(double *)(param_1 + 0x18) = local_2e8;
      *(double *)(param_1 + 0x38) = local_2e0;
      *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_284,local_288);
      *(double *)(param_1 + 0x28) = dStack_280;
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(ulonglong *)(param_1 + 0x40) = CONCAT44(uStack_264,local_268);
      *(ulonglong *)(param_1 + 0x48) = CONCAT44(uStack_25c,uStack_260);
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(ulonglong *)(param_1 + 0x30) = CONCAT44(uStack_274,local_278);
      *(double *)(param_1 + 0x50) = local_258;
      *(double *)(param_1 + 0x58) = local_2d8;
      *(undefined8 *)(param_1 + 0x70) = 0;
      *(undefined8 *)(param_1 + 0x78) = 0x3ff0000000000000;
      _guard_xfg_dispatch_icall_nop(&local_368,0,0x80);
      local_308 = local_2d0;
      local_2f0 = local_2b8;
      local_1e8 = *(double *)param_1;
      uStack_1e0 = *(double *)(param_1 + 8);
      local_300 = local_2c8;
      local_1d8 = *(double *)(param_1 + 0x10);
      uStack_1d0 = *(undefined8 *)(param_1 + 0x18);
      local_1c8 = *(undefined8 *)(param_1 + 0x20);
      dStack_1c0 = *(double *)(param_1 + 0x28);
      local_1b8 = *(double *)(param_1 + 0x30);
      uStack_1b0 = *(undefined8 *)(param_1 + 0x38);
      local_1a8 = *(undefined8 *)(param_1 + 0x40);
      uStack_1a0 = *(undefined8 *)(param_1 + 0x48);
      local_198 = *(double *)(param_1 + 0x50);
      uStack_190 = *(undefined8 *)(param_1 + 0x58);
      local_188 = *(undefined8 *)(param_1 + 0x60);
      uStack_180 = *(undefined8 *)(param_1 + 0x68);
      local_178 = *(undefined8 *)(param_1 + 0x70);
      uStack_170 = *(undefined8 *)(param_1 + 0x78);
      local_368 = 1.0;
      dStack_340 = 1.0;
      local_318 = 1.0;
      local_2f8 = local_2c0;
      Scaleform::Render::Matrix4x4<double>::MultiplyMatrix_NonOpt
                (param_1,(Matrix4x4<double> *)&local_368,(Matrix4x4<double> *)&local_1e8);
      *(undefined8 *)(param_1 + 0x78) = 0x3ff0000000000000;
    }
  }
  return;
}



// FUNCTION 1435555b0 IsValid body=261 status=ok
// SIG bool IsValid(Matrix3x4<double> * this)

/* public: bool __cdecl Scaleform::Render::Matrix3x4<double>::IsValid(void)const __ptr64 */

bool __thiscall Scaleform::Render::Matrix3x4<double>::IsValid(Matrix3x4<double> *this)

{
                    /* 0x35555b0  247  ?IsValid@?$Matrix3x4@N@Render@Scaleform@@QEBA_NXZ */
  if ((((((-1.79769313486232e+308 <= *(double *)this) && (*(double *)this <= 1.79769313486232e+308))
        && (-1.79769313486232e+308 <= *(double *)(this + 8))) &&
       (((*(double *)(this + 8) <= 1.79769313486232e+308 &&
         (-1.79769313486232e+308 <= *(double *)(this + 0x10))) &&
        ((*(double *)(this + 0x10) <= 1.79769313486232e+308 &&
         ((-1.79769313486232e+308 <= *(double *)(this + 0x18) &&
          (*(double *)(this + 0x18) <= 1.79769313486232e+308)))))))) &&
      (((-1.79769313486232e+308 <= *(double *)(this + 0x20) &&
        ((((((*(double *)(this + 0x20) <= 1.79769313486232e+308 &&
             (-1.79769313486232e+308 <= *(double *)(this + 0x28))) &&
            (*(double *)(this + 0x28) <= 1.79769313486232e+308)) &&
           ((-1.79769313486232e+308 <= *(double *)(this + 0x30) &&
            (*(double *)(this + 0x30) <= 1.79769313486232e+308)))) &&
          ((-1.79769313486232e+308 <= *(double *)(this + 0x38) &&
           ((*(double *)(this + 0x38) <= 1.79769313486232e+308 &&
            (-1.79769313486232e+308 <= *(double *)(this + 0x40))))))) &&
         (*(double *)(this + 0x40) <= 1.79769313486232e+308)))) &&
       (((-1.79769313486232e+308 <= *(double *)(this + 0x48) &&
         (*(double *)(this + 0x48) <= 1.79769313486232e+308)) &&
        (-1.79769313486232e+308 <= *(double *)(this + 0x50))))))) &&
     (((*(double *)(this + 0x50) <= 1.79769313486232e+308 &&
       (-1.79769313486232e+308 <= *(double *)(this + 0x58))) &&
      (*(double *)(this + 0x58) <= 1.79769313486232e+308)))) {
    return true;
  }
  return false;
}



// FUNCTION 1435556c0 IsValid body=361 status=ok
// SIG bool IsValid(Matrix4x4<double> * this)

/* public: bool __cdecl Scaleform::Render::Matrix4x4<double>::IsValid(void)const __ptr64 */

bool __thiscall Scaleform::Render::Matrix4x4<double>::IsValid(Matrix4x4<double> *this)

{
                    /* 0x35556c0  248  ?IsValid@?$Matrix4x4@N@Render@Scaleform@@QEBA_NXZ */
  if ((((((((-1.79769313486232e+308 <= *(double *)this) &&
           (*(double *)this <= 1.79769313486232e+308)) &&
          (-1.79769313486232e+308 <= *(double *)(this + 8))) &&
         (((*(double *)(this + 8) <= 1.79769313486232e+308 &&
           (-1.79769313486232e+308 <= *(double *)(this + 0x10))) &&
          ((*(double *)(this + 0x10) <= 1.79769313486232e+308 &&
           ((-1.79769313486232e+308 <= *(double *)(this + 0x18) &&
            (*(double *)(this + 0x18) <= 1.79769313486232e+308)))))))) &&
        (-1.79769313486232e+308 <= *(double *)(this + 0x20))) &&
       ((((((*(double *)(this + 0x20) <= 1.79769313486232e+308 &&
            (-1.79769313486232e+308 <= *(double *)(this + 0x28))) &&
           (*(double *)(this + 0x28) <= 1.79769313486232e+308)) &&
          ((-1.79769313486232e+308 <= *(double *)(this + 0x30) &&
           (*(double *)(this + 0x30) <= 1.79769313486232e+308)))) &&
         (-1.79769313486232e+308 <= *(double *)(this + 0x38))) &&
        (((*(double *)(this + 0x38) <= 1.79769313486232e+308 &&
          (-1.79769313486232e+308 <= *(double *)(this + 0x40))) &&
         (((*(double *)(this + 0x40) <= 1.79769313486232e+308 &&
           (((-1.79769313486232e+308 <= *(double *)(this + 0x48) &&
             (*(double *)(this + 0x48) <= 1.79769313486232e+308)) &&
            (-1.79769313486232e+308 <= *(double *)(this + 0x50))))) &&
          (((*(double *)(this + 0x50) <= 1.79769313486232e+308 &&
            (-1.79769313486232e+308 <= *(double *)(this + 0x58))) &&
           (*(double *)(this + 0x58) <= 1.79769313486232e+308)))))))))) &&
      (((-1.79769313486232e+308 <= *(double *)(this + 0x60) &&
        (*(double *)(this + 0x60) <= 1.79769313486232e+308)) &&
       ((-1.79769313486232e+308 <= *(double *)(this + 0x68) &&
        (((*(double *)(this + 0x68) <= 1.79769313486232e+308 &&
          (-1.79769313486232e+308 <= *(double *)(this + 0x70))) &&
         (*(double *)(this + 0x70) <= 1.79769313486232e+308)))))))) &&
     ((-1.79769313486232e+308 <= *(double *)(this + 0x78) &&
      (*(double *)(this + 0x78) <= 1.79769313486232e+308)))) {
    return true;
  }
  return false;
}



// FUNCTION 143555830 MultiplyMatrix body=5 status=ok
// SIG void MultiplyMatrix(Matrix3x4<double> * this, Matrix3x4<double> * param_1, Matrix3x4<double> * param_2)

/* public: void __cdecl Scaleform::Render::Matrix3x4<double>::MultiplyMatrix(class
   Scaleform::Render::Matrix3x4<double> const & __ptr64,class Scaleform::Render::Matrix3x4<double>
   const & __ptr64) __ptr64 */

void __thiscall
Scaleform::Render::Matrix3x4<double>::MultiplyMatrix
          (Matrix3x4<double> *this,Matrix3x4<double> *param_1,Matrix3x4<double> *param_2)

{
                    /* 0x3555830  276
                       ?MultiplyMatrix@?$Matrix3x4@N@Render@Scaleform@@QEAAXAEBV123@0@Z */
  *(double *)this =
       *(double *)param_1 * *(double *)param_2 +
       *(double *)(param_1 + 8) * *(double *)(param_2 + 0x20) +
       *(double *)(param_1 + 0x10) * *(double *)(param_2 + 0x40);
  *(double *)(this + 8) =
       *(double *)(param_2 + 8) * *(double *)param_1 +
       *(double *)(param_2 + 0x28) * *(double *)(param_1 + 8) +
       *(double *)(param_2 + 0x48) * *(double *)(param_1 + 0x10);
  *(double *)(this + 0x10) =
       *(double *)(param_2 + 0x10) * *(double *)param_1 +
       *(double *)(param_2 + 0x30) * *(double *)(param_1 + 8) +
       *(double *)(param_2 + 0x50) * *(double *)(param_1 + 0x10);
  *(double *)(this + 0x18) =
       *(double *)(param_2 + 0x18) * *(double *)param_1 +
       *(double *)(param_2 + 0x38) * *(double *)(param_1 + 8) +
       *(double *)(param_2 + 0x58) * *(double *)(param_1 + 0x10) + *(double *)(param_1 + 0x18);
  *(double *)(this + 0x20) =
       *(double *)(param_1 + 0x28) * *(double *)(param_2 + 0x20) +
       *(double *)(param_1 + 0x20) * *(double *)param_2 +
       *(double *)(param_1 + 0x30) * *(double *)(param_2 + 0x40);
  *(double *)(this + 0x28) =
       *(double *)(param_1 + 0x28) * *(double *)(param_2 + 0x28) +
       *(double *)(param_1 + 0x20) * *(double *)(param_2 + 8) +
       *(double *)(param_2 + 0x48) * *(double *)(param_1 + 0x30);
  *(double *)(this + 0x30) =
       *(double *)(param_1 + 0x28) * *(double *)(param_2 + 0x30) +
       *(double *)(param_1 + 0x20) * *(double *)(param_2 + 0x10) +
       *(double *)(param_2 + 0x50) * *(double *)(param_1 + 0x30);
  *(double *)(this + 0x38) =
       *(double *)(param_1 + 0x28) * *(double *)(param_2 + 0x38) +
       *(double *)(param_1 + 0x20) * *(double *)(param_2 + 0x18) +
       *(double *)(param_2 + 0x58) * *(double *)(param_1 + 0x30) + *(double *)(param_1 + 0x38);
  *(double *)(this + 0x40) =
       *(double *)(param_1 + 0x48) * *(double *)(param_2 + 0x20) +
       *(double *)(param_1 + 0x40) * *(double *)param_2 +
       *(double *)(param_2 + 0x40) * *(double *)(param_1 + 0x50);
  *(double *)(this + 0x48) =
       *(double *)(param_1 + 0x48) * *(double *)(param_2 + 0x28) +
       *(double *)(param_1 + 0x40) * *(double *)(param_2 + 8) +
       *(double *)(param_2 + 0x48) * *(double *)(param_1 + 0x50);
  *(double *)(this + 0x50) =
       *(double *)(param_1 + 0x48) * *(double *)(param_2 + 0x30) +
       *(double *)(param_1 + 0x40) * *(double *)(param_2 + 0x10) +
       *(double *)(param_2 + 0x50) * *(double *)(param_1 + 0x50);
  *(double *)(this + 0x58) =
       *(double *)(param_1 + 0x48) * *(double *)(param_2 + 0x38) +
       *(double *)(param_1 + 0x40) * *(double *)(param_2 + 0x18) +
       *(double *)(param_2 + 0x58) * *(double *)(param_1 + 0x50) + *(double *)(param_1 + 0x58);
  return;
}



// FUNCTION 143555840 MultiplyMatrix body=5 status=ok
// SIG void MultiplyMatrix(Matrix4x4<double> * this, Matrix4x4<double> * param_1, Matrix4x4<double> * param_2)

/* public: void __cdecl Scaleform::Render::Matrix4x4<double>::MultiplyMatrix(class
   Scaleform::Render::Matrix4x4<double> const & __ptr64,class Scaleform::Render::Matrix4x4<double>
   const & __ptr64) __ptr64 */

void __thiscall
Scaleform::Render::Matrix4x4<double>::MultiplyMatrix
          (Matrix4x4<double> *this,Matrix4x4<double> *param_1,Matrix4x4<double> *param_2)

{
                    /* 0x3555840  282
                       ?MultiplyMatrix@?$Matrix4x4@N@Render@Scaleform@@QEAAXAEBV123@0@Z */
  *(double *)this =
       *(double *)param_1 * *(double *)param_2 +
       *(double *)(param_1 + 8) * *(double *)(param_2 + 0x20) +
       *(double *)(param_1 + 0x10) * *(double *)(param_2 + 0x40) +
       *(double *)(param_1 + 0x18) * *(double *)(param_2 + 0x60);
  *(double *)(this + 8) =
       *(double *)(param_2 + 8) * *(double *)param_1 +
       *(double *)(param_2 + 0x28) * *(double *)(param_1 + 8) +
       *(double *)(param_2 + 0x48) * *(double *)(param_1 + 0x10) +
       *(double *)(param_1 + 0x18) * *(double *)(param_2 + 0x68);
  *(double *)(this + 0x10) =
       *(double *)(param_2 + 0x10) * *(double *)param_1 +
       *(double *)(param_2 + 0x30) * *(double *)(param_1 + 8) +
       *(double *)(param_1 + 0x10) * *(double *)(param_2 + 0x50) +
       *(double *)(param_1 + 0x18) * *(double *)(param_2 + 0x70);
  *(double *)(this + 0x18) =
       *(double *)param_1 * *(double *)(param_2 + 0x18) +
       *(double *)(param_1 + 8) * *(double *)(param_2 + 0x38) +
       *(double *)(param_1 + 0x10) * *(double *)(param_2 + 0x58) +
       *(double *)(param_2 + 0x78) * *(double *)(param_1 + 0x18);
  *(double *)(this + 0x20) =
       *(double *)(param_1 + 0x20) * *(double *)param_2 +
       *(double *)(param_1 + 0x28) * *(double *)(param_2 + 0x20) +
       *(double *)(param_1 + 0x30) * *(double *)(param_2 + 0x40) +
       *(double *)(param_1 + 0x38) * *(double *)(param_2 + 0x60);
  *(double *)(this + 0x28) =
       *(double *)(param_2 + 0x28) * *(double *)(param_1 + 0x28) +
       *(double *)(param_2 + 8) * *(double *)(param_1 + 0x20) +
       *(double *)(param_2 + 0x48) * *(double *)(param_1 + 0x30) +
       *(double *)(param_1 + 0x38) * *(double *)(param_2 + 0x68);
  *(double *)(this + 0x30) =
       *(double *)(param_2 + 0x30) * *(double *)(param_1 + 0x28) +
       *(double *)(param_2 + 0x10) * *(double *)(param_1 + 0x20) +
       *(double *)(param_1 + 0x30) * *(double *)(param_2 + 0x50) +
       *(double *)(param_1 + 0x38) * *(double *)(param_2 + 0x70);
  *(double *)(this + 0x38) =
       *(double *)(param_1 + 0x28) * *(double *)(param_2 + 0x38) +
       *(double *)(param_1 + 0x20) * *(double *)(param_2 + 0x18) +
       *(double *)(param_1 + 0x30) * *(double *)(param_2 + 0x58) +
       *(double *)(param_1 + 0x38) * *(double *)(param_2 + 0x78);
  *(double *)(this + 0x40) =
       *(double *)(param_1 + 0x40) * *(double *)param_2 +
       *(double *)(param_1 + 0x48) * *(double *)(param_2 + 0x20) +
       *(double *)(param_1 + 0x50) * *(double *)(param_2 + 0x40) +
       *(double *)(param_1 + 0x58) * *(double *)(param_2 + 0x60);
  *(double *)(this + 0x48) =
       *(double *)(param_2 + 0x28) * *(double *)(param_1 + 0x48) +
       *(double *)(param_2 + 8) * *(double *)(param_1 + 0x40) +
       *(double *)(param_2 + 0x48) * *(double *)(param_1 + 0x50) +
       *(double *)(param_1 + 0x58) * *(double *)(param_2 + 0x68);
  *(double *)(this + 0x50) =
       *(double *)(param_2 + 0x30) * *(double *)(param_1 + 0x48) +
       *(double *)(param_2 + 0x10) * *(double *)(param_1 + 0x40) +
       *(double *)(param_1 + 0x50) * *(double *)(param_2 + 0x50) +
       *(double *)(param_1 + 0x58) * *(double *)(param_2 + 0x70);
  *(double *)(this + 0x58) =
       *(double *)(param_1 + 0x48) * *(double *)(param_2 + 0x38) +
       *(double *)(param_1 + 0x40) * *(double *)(param_2 + 0x18) +
       *(double *)(param_1 + 0x50) * *(double *)(param_2 + 0x58) +
       *(double *)(param_1 + 0x58) * *(double *)(param_2 + 0x78);
  *(double *)(this + 0x60) =
       *(double *)(param_1 + 0x60) * *(double *)param_2 +
       *(double *)(param_1 + 0x68) * *(double *)(param_2 + 0x20) +
       *(double *)(param_1 + 0x70) * *(double *)(param_2 + 0x40) +
       *(double *)(param_1 + 0x78) * *(double *)(param_2 + 0x60);
  *(double *)(this + 0x68) =
       *(double *)(param_2 + 0x28) * *(double *)(param_1 + 0x68) +
       *(double *)(param_2 + 8) * *(double *)(param_1 + 0x60) +
       *(double *)(param_2 + 0x48) * *(double *)(param_1 + 0x70) +
       *(double *)(param_1 + 0x78) * *(double *)(param_2 + 0x68);
  *(double *)(this + 0x70) =
       *(double *)(param_2 + 0x30) * *(double *)(param_1 + 0x68) +
       *(double *)(param_2 + 0x10) * *(double *)(param_1 + 0x60) +
       *(double *)(param_1 + 0x70) * *(double *)(param_2 + 0x50) +
       *(double *)(param_1 + 0x78) * *(double *)(param_2 + 0x70);
  *(double *)(this + 0x78) =
       *(double *)(param_1 + 0x68) * *(double *)(param_2 + 0x38) +
       *(double *)(param_1 + 0x60) * *(double *)(param_2 + 0x18) +
       *(double *)(param_1 + 0x70) * *(double *)(param_2 + 0x58) +
       *(double *)(param_2 + 0x78) * *(double *)(param_1 + 0x78);
  return;
}



// FUNCTION 143555850 MultiplyMatrix_NonOpt body=560 status=ok
// SIG void MultiplyMatrix_NonOpt(Matrix3x4<double> * this, Matrix3x4<double> * param_1, Matrix3x4<double> * param_2)

/* public: void __cdecl Scaleform::Render::Matrix3x4<double>::MultiplyMatrix_NonOpt(class
   Scaleform::Render::Matrix3x4<double> const & __ptr64,class Scaleform::Render::Matrix3x4<double>
   const & __ptr64) __ptr64 */

void __thiscall
Scaleform::Render::Matrix3x4<double>::MultiplyMatrix_NonOpt
          (Matrix3x4<double> *this,Matrix3x4<double> *param_1,Matrix3x4<double> *param_2)

{
                    /* 0x3555850  283
                       ?MultiplyMatrix_NonOpt@?$Matrix3x4@N@Render@Scaleform@@QEAAXAEBV123@0@Z */
  *(double *)this =
       *(double *)param_1 * *(double *)param_2 +
       *(double *)(param_1 + 8) * *(double *)(param_2 + 0x20) +
       *(double *)(param_1 + 0x10) * *(double *)(param_2 + 0x40);
  *(double *)(this + 8) =
       *(double *)(param_2 + 8) * *(double *)param_1 +
       *(double *)(param_2 + 0x28) * *(double *)(param_1 + 8) +
       *(double *)(param_2 + 0x48) * *(double *)(param_1 + 0x10);
  *(double *)(this + 0x10) =
       *(double *)(param_2 + 0x10) * *(double *)param_1 +
       *(double *)(param_2 + 0x30) * *(double *)(param_1 + 8) +
       *(double *)(param_2 + 0x50) * *(double *)(param_1 + 0x10);
  *(double *)(this + 0x18) =
       *(double *)(param_2 + 0x18) * *(double *)param_1 +
       *(double *)(param_2 + 0x38) * *(double *)(param_1 + 8) +
       *(double *)(param_2 + 0x58) * *(double *)(param_1 + 0x10) + *(double *)(param_1 + 0x18);
  *(double *)(this + 0x20) =
       *(double *)(param_1 + 0x28) * *(double *)(param_2 + 0x20) +
       *(double *)(param_1 + 0x20) * *(double *)param_2 +
       *(double *)(param_1 + 0x30) * *(double *)(param_2 + 0x40);
  *(double *)(this + 0x28) =
       *(double *)(param_1 + 0x28) * *(double *)(param_2 + 0x28) +
       *(double *)(param_1 + 0x20) * *(double *)(param_2 + 8) +
       *(double *)(param_2 + 0x48) * *(double *)(param_1 + 0x30);
  *(double *)(this + 0x30) =
       *(double *)(param_1 + 0x28) * *(double *)(param_2 + 0x30) +
       *(double *)(param_1 + 0x20) * *(double *)(param_2 + 0x10) +
       *(double *)(param_2 + 0x50) * *(double *)(param_1 + 0x30);
  *(double *)(this + 0x38) =
       *(double *)(param_1 + 0x28) * *(double *)(param_2 + 0x38) +
       *(double *)(param_1 + 0x20) * *(double *)(param_2 + 0x18) +
       *(double *)(param_2 + 0x58) * *(double *)(param_1 + 0x30) + *(double *)(param_1 + 0x38);
  *(double *)(this + 0x40) =
       *(double *)(param_1 + 0x48) * *(double *)(param_2 + 0x20) +
       *(double *)(param_1 + 0x40) * *(double *)param_2 +
       *(double *)(param_2 + 0x40) * *(double *)(param_1 + 0x50);
  *(double *)(this + 0x48) =
       *(double *)(param_1 + 0x48) * *(double *)(param_2 + 0x28) +
       *(double *)(param_1 + 0x40) * *(double *)(param_2 + 8) +
       *(double *)(param_2 + 0x48) * *(double *)(param_1 + 0x50);
  *(double *)(this + 0x50) =
       *(double *)(param_1 + 0x48) * *(double *)(param_2 + 0x30) +
       *(double *)(param_1 + 0x40) * *(double *)(param_2 + 0x10) +
       *(double *)(param_2 + 0x50) * *(double *)(param_1 + 0x50);
  *(double *)(this + 0x58) =
       *(double *)(param_1 + 0x48) * *(double *)(param_2 + 0x38) +
       *(double *)(param_1 + 0x40) * *(double *)(param_2 + 0x18) +
       *(double *)(param_2 + 0x58) * *(double *)(param_1 + 0x50) + *(double *)(param_1 + 0x58);
  return;
}



// FUNCTION 143555a80 MultiplyMatrix_NonOpt body=968 status=ok
// SIG void MultiplyMatrix_NonOpt(Matrix4x4<double> * this, Matrix4x4<double> * param_1, Matrix4x4<double> * param_2)

/* public: void __cdecl Scaleform::Render::Matrix4x4<double>::MultiplyMatrix_NonOpt(class
   Scaleform::Render::Matrix4x4<double> const & __ptr64,class Scaleform::Render::Matrix4x4<double>
   const & __ptr64) __ptr64 */

void __thiscall
Scaleform::Render::Matrix4x4<double>::MultiplyMatrix_NonOpt
          (Matrix4x4<double> *this,Matrix4x4<double> *param_1,Matrix4x4<double> *param_2)

{
                    /* 0x3555a80  284
                       ?MultiplyMatrix_NonOpt@?$Matrix4x4@N@Render@Scaleform@@QEAAXAEBV123@0@Z */
  *(double *)this =
       *(double *)param_1 * *(double *)param_2 +
       *(double *)(param_1 + 8) * *(double *)(param_2 + 0x20) +
       *(double *)(param_1 + 0x10) * *(double *)(param_2 + 0x40) +
       *(double *)(param_1 + 0x18) * *(double *)(param_2 + 0x60);
  *(double *)(this + 8) =
       *(double *)(param_2 + 8) * *(double *)param_1 +
       *(double *)(param_2 + 0x28) * *(double *)(param_1 + 8) +
       *(double *)(param_2 + 0x48) * *(double *)(param_1 + 0x10) +
       *(double *)(param_1 + 0x18) * *(double *)(param_2 + 0x68);
  *(double *)(this + 0x10) =
       *(double *)(param_2 + 0x10) * *(double *)param_1 +
       *(double *)(param_2 + 0x30) * *(double *)(param_1 + 8) +
       *(double *)(param_1 + 0x10) * *(double *)(param_2 + 0x50) +
       *(double *)(param_1 + 0x18) * *(double *)(param_2 + 0x70);
  *(double *)(this + 0x18) =
       *(double *)param_1 * *(double *)(param_2 + 0x18) +
       *(double *)(param_1 + 8) * *(double *)(param_2 + 0x38) +
       *(double *)(param_1 + 0x10) * *(double *)(param_2 + 0x58) +
       *(double *)(param_2 + 0x78) * *(double *)(param_1 + 0x18);
  *(double *)(this + 0x20) =
       *(double *)(param_1 + 0x20) * *(double *)param_2 +
       *(double *)(param_1 + 0x28) * *(double *)(param_2 + 0x20) +
       *(double *)(param_1 + 0x30) * *(double *)(param_2 + 0x40) +
       *(double *)(param_1 + 0x38) * *(double *)(param_2 + 0x60);
  *(double *)(this + 0x28) =
       *(double *)(param_2 + 0x28) * *(double *)(param_1 + 0x28) +
       *(double *)(param_2 + 8) * *(double *)(param_1 + 0x20) +
       *(double *)(param_2 + 0x48) * *(double *)(param_1 + 0x30) +
       *(double *)(param_1 + 0x38) * *(double *)(param_2 + 0x68);
  *(double *)(this + 0x30) =
       *(double *)(param_2 + 0x30) * *(double *)(param_1 + 0x28) +
       *(double *)(param_2 + 0x10) * *(double *)(param_1 + 0x20) +
       *(double *)(param_1 + 0x30) * *(double *)(param_2 + 0x50) +
       *(double *)(param_1 + 0x38) * *(double *)(param_2 + 0x70);
  *(double *)(this + 0x38) =
       *(double *)(param_1 + 0x28) * *(double *)(param_2 + 0x38) +
       *(double *)(param_1 + 0x20) * *(double *)(param_2 + 0x18) +
       *(double *)(param_1 + 0x30) * *(double *)(param_2 + 0x58) +
       *(double *)(param_1 + 0x38) * *(double *)(param_2 + 0x78);
  *(double *)(this + 0x40) =
       *(double *)(param_1 + 0x40) * *(double *)param_2 +
       *(double *)(param_1 + 0x48) * *(double *)(param_2 + 0x20) +
       *(double *)(param_1 + 0x50) * *(double *)(param_2 + 0x40) +
       *(double *)(param_1 + 0x58) * *(double *)(param_2 + 0x60);
  *(double *)(this + 0x48) =
       *(double *)(param_2 + 0x28) * *(double *)(param_1 + 0x48) +
       *(double *)(param_2 + 8) * *(double *)(param_1 + 0x40) +
       *(double *)(param_2 + 0x48) * *(double *)(param_1 + 0x50) +
       *(double *)(param_1 + 0x58) * *(double *)(param_2 + 0x68);
  *(double *)(this + 0x50) =
       *(double *)(param_2 + 0x30) * *(double *)(param_1 + 0x48) +
       *(double *)(param_2 + 0x10) * *(double *)(param_1 + 0x40) +
       *(double *)(param_1 + 0x50) * *(double *)(param_2 + 0x50) +
       *(double *)(param_1 + 0x58) * *(double *)(param_2 + 0x70);
  *(double *)(this + 0x58) =
       *(double *)(param_1 + 0x48) * *(double *)(param_2 + 0x38) +
       *(double *)(param_1 + 0x40) * *(double *)(param_2 + 0x18) +
       *(double *)(param_1 + 0x50) * *(double *)(param_2 + 0x58) +
       *(double *)(param_1 + 0x58) * *(double *)(param_2 + 0x78);
  *(double *)(this + 0x60) =
       *(double *)(param_1 + 0x60) * *(double *)param_2 +
       *(double *)(param_1 + 0x68) * *(double *)(param_2 + 0x20) +
       *(double *)(param_1 + 0x70) * *(double *)(param_2 + 0x40) +
       *(double *)(param_1 + 0x78) * *(double *)(param_2 + 0x60);
  *(double *)(this + 0x68) =
       *(double *)(param_2 + 0x28) * *(double *)(param_1 + 0x68) +
       *(double *)(param_2 + 8) * *(double *)(param_1 + 0x60) +
       *(double *)(param_2 + 0x48) * *(double *)(param_1 + 0x70) +
       *(double *)(param_1 + 0x78) * *(double *)(param_2 + 0x68);
  *(double *)(this + 0x70) =
       *(double *)(param_2 + 0x30) * *(double *)(param_1 + 0x68) +
       *(double *)(param_2 + 0x10) * *(double *)(param_1 + 0x60) +
       *(double *)(param_1 + 0x70) * *(double *)(param_2 + 0x50) +
       *(double *)(param_1 + 0x78) * *(double *)(param_2 + 0x70);
  *(double *)(this + 0x78) =
       *(double *)(param_1 + 0x68) * *(double *)(param_2 + 0x38) +
       *(double *)(param_1 + 0x60) * *(double *)(param_2 + 0x18) +
       *(double *)(param_1 + 0x70) * *(double *)(param_2 + 0x58) +
       *(double *)(param_2 + 0x78) * *(double *)(param_1 + 0x78);
  return;
}



// FUNCTION 143555e50 FUN_143555e50 body=140 status=ok
// SIG undefined FUN_143555e50(void)

void FUN_143555e50(double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = *param_1;
  dVar2 = param_1[1];
  dVar3 = param_1[2];
  dVar4 = dVar1 * dVar1 + dVar2 * dVar2 + dVar3 * dVar3;
  if (1e-24 <= dVar4) {
    dVar4 = _guard_xfg_dispatch_icall_nop(dVar4);
    *param_1 = dVar1 / dVar4;
    param_1[1] = dVar2 / dVar4;
    param_1[2] = dVar3 / dVar4;
  }
  return;
}



// FUNCTION 143555ee0 FUN_143555ee0 body=164 status=ok
// SIG undefined FUN_143555ee0(void)

void FUN_143555ee0(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  
  dVar4 = *(double *)*param_1 * *(double *)*param_1 +
          *(double *)(*param_1 + 8) * *(double *)(*param_1 + 8) +
          *(double *)param_1[1] * *(double *)param_1[1] +
          *(double *)(param_1[1] + 8) * *(double *)(param_1[1] + 8);
  if ((1e-12 < dVar4) && ((dVar4 + 1e-12 < 1.0 || (1.0 < dVar4 - 1e-12)))) {
    dVar3 = _guard_xfg_dispatch_icall_nop(dVar4);
    dVar3 = 1.0 / dVar3;
    dVar4 = dVar3 * *(double *)(*param_1 + 8);
    auVar1._8_4_ = SUB84(dVar4,0);
    auVar1._0_8_ = dVar3 * *(double *)*param_1;
    auVar1._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    *param_1 = auVar1;
    dVar4 = dVar3 * *(double *)(param_1[1] + 8);
    auVar2._8_4_ = SUB84(dVar4,0);
    auVar2._0_8_ = dVar3 * *(double *)param_1[1];
    auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    param_1[1] = auVar2;
  }
  return;
}



// FUNCTION 143555f90 FUN_143555f90 body=214 status=ok
// SIG undefined FUN_143555f90(void)

undefined1 * FUN_143555f90(longlong param_1,undefined1 *param_2,ulonglong param_3)

{
  char *pcVar1;
  ulonglong uVar2;
  undefined1 local_res10 [8];
  
  pcVar1 = (char *)FUN_14361f950(param_1,local_res10);
  if (*pcVar1 != '\0') {
    uVar2 = *(ulonglong *)(param_1 + 0x20);
    FUN_1433ab800(param_1 + 0x18);
    if (uVar2 < param_3) {
      if (3 < param_3 - uVar2) {
        do {
          *(undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar2 * 8) = 0;
          *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8 + uVar2 * 8) = 0;
          *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10 + uVar2 * 8) = 0;
          *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x18 + uVar2 * 8) = 0;
          uVar2 = uVar2 + 4;
        } while (uVar2 < param_3 - 3);
      }
      for (; uVar2 < param_3; uVar2 = uVar2 + 1) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar2 * 8) = 0;
      }
    }
    *param_2 = 1;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 143556070 FUN_143556070 body=346 status=ok
// SIG undefined FUN_143556070(void)

Matrix4x4<double> *
FUN_143556070(Matrix4x4<double> *param_1,undefined4 param_2,undefined8 param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  Matrix4x4<double> *pMVar4;
  undefined8 local_1d8 [3];
  ulonglong local_1c0;
  undefined8 local_1b0;
  ulonglong local_1a0;
  undefined8 local_188;
  ulonglong local_180;
  undefined8 local_160;
  Matrix4x4<double> local_158 [128];
  undefined1 local_d8 [208];
  
  _guard_xfg_dispatch_icall_nop(local_1d8,0,0x80);
  uVar1 = *param_4;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  local_1d8[0] = 0x3ff0000000000000;
  local_1b0 = 0x3ff0000000000000;
  local_188 = 0x3ff0000000000000;
  local_160 = 0x3ff0000000000000;
  local_1c0 = uVar1;
  local_1a0 = uVar2;
  local_180 = uVar3;
  pMVar4 = (Matrix4x4<double> *)FUN_1435561d0(local_d8,param_2,param_3);
  Scaleform::Render::Matrix4x4<double>::MultiplyMatrix_NonOpt
            (local_158,pMVar4,(Matrix4x4<double> *)local_1d8);
  _guard_xfg_dispatch_icall_nop(local_1d8,0,0x80);
  local_1d8[0] = 0x3ff0000000000000;
  local_1c0 = uVar1 ^ 0x8000000000000000;
  local_1a0 = uVar2 ^ 0x8000000000000000;
  local_180 = uVar3 ^ 0x8000000000000000;
  local_1b0 = 0x3ff0000000000000;
  local_188 = 0x3ff0000000000000;
  local_160 = 0x3ff0000000000000;
  Scaleform::Render::Matrix4x4<double>::MultiplyMatrix_NonOpt
            (param_1,(Matrix4x4<double> *)local_1d8,local_158);
  return param_1;
}



// FUNCTION 1435561d0 FUN_1435561d0 body=381 status=ok
// SIG undefined FUN_1435561d0(void)

double * FUN_1435561d0(double *param_1,double param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  
  _guard_xfg_dispatch_icall_nop(param_1,0,0x80);
  param_1[0xf] = 1.0;
  fVar8 = _guard_xfg_dispatch_icall_nop((float)param_2);
  dVar7 = (double)fVar8;
  fVar8 = _guard_xfg_dispatch_icall_nop((float)param_2);
  dVar1 = param_3[2];
  dVar2 = param_3[1];
  dVar6 = 1.0 - dVar7;
  dVar9 = (double)fVar8;
  dVar3 = *param_3;
  dVar4 = dVar1 * dVar2 * dVar6;
  dVar5 = dVar1 * dVar3 * dVar6;
  dVar10 = dVar3 * dVar2 * dVar6;
  *param_1 = dVar3 * dVar3 * dVar6 + dVar7;
  param_1[1] = dVar10 - dVar1 * dVar9;
  param_1[4] = dVar1 * dVar9 + dVar10;
  param_1[2] = dVar2 * dVar9 + dVar5;
  param_1[5] = dVar2 * dVar2 * dVar6 + dVar7;
  param_1[8] = dVar5 - dVar2 * dVar9;
  param_1[10] = dVar1 * dVar1 * dVar6 + dVar7;
  param_1[9] = dVar3 * dVar9 + dVar4;
  param_1[6] = dVar4 - dVar3 * dVar9;
  return param_1;
}



// FUNCTION 143556350 FUN_143556350 body=642 status=ok
// SIG undefined FUN_143556350(void)

void FUN_143556350(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double local_98;
  double local_90;
  double local_88;
  
  dVar1 = param_3[1];
  dVar2 = param_3[2];
  dVar3 = *param_3;
  dVar4 = param_2[1];
  dVar5 = *param_2;
  dVar6 = param_2[2];
  dVar7 = dVar4 * dVar4 + dVar5 * dVar5 + dVar6 * dVar6;
  if (1e-24 <= dVar7) {
    dVar7 = _guard_xfg_dispatch_icall_nop(dVar7);
    dVar5 = dVar5 / dVar7;
    dVar4 = dVar4 / dVar7;
    dVar6 = dVar6 / dVar7;
  }
  dVar7 = dVar1 * dVar1 + dVar3 * dVar3 + dVar2 * dVar2;
  if (1e-24 <= dVar7) {
    dVar7 = _guard_xfg_dispatch_icall_nop(dVar7);
    dVar3 = dVar3 / dVar7;
    dVar1 = dVar1 / dVar7;
    dVar2 = dVar2 / dVar7;
  }
  dVar7 = dVar1 * dVar4 + dVar3 * dVar5 + dVar6 * dVar2;
  if (dVar7 + 1e-12 < 1.0) {
    if (-0.999999999999 < dVar7) {
      dVar7 = _guard_xfg_dispatch_icall_nop(dVar7 + 1.0 + dVar7 + 1.0);
      param_1[1] = (dVar3 * dVar6 - dVar2 * dVar5) / dVar7;
      *param_1 = (dVar4 * dVar2 - dVar1 * dVar6) / dVar7;
      param_1[2] = (dVar1 * dVar5 - dVar4 * dVar3) / dVar7;
      param_1[3] = dVar7 * 0.5;
    }
    else {
      dVar1 = *param_1;
      dVar2 = param_1[2];
      dVar3 = param_1[1];
      local_98 = dVar2 - dVar3 * 0.0;
      local_88 = dVar3 * 0.0 - dVar1;
      local_90 = dVar1 * 0.0 - dVar2 * 0.0;
      if (local_90 * local_90 + local_98 * local_98 + local_88 * local_88 == 0.0) {
        local_90 = dVar1 - dVar2 * 0.0;
        local_98 = dVar2 * 0.0 - dVar3;
        local_88 = dVar3 * 0.0 - dVar1 * 0.0;
      }
      FUN_1435566f0(param_1,0x400921fb54442d18,&local_98);
    }
  }
  else {
    param_1[3] = 1.0;
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
  }
  return;
}



// FUNCTION 1435565e0 FUN_1435565e0 body=264 status=ok
// SIG undefined FUN_1435565e0(void)

undefined1 *
FUN_1435565e0(longlong param_1,undefined1 *param_2,uint param_3,undefined8 param_4,
             undefined8 param_5)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 local_res8 [8];
  undefined1 local_38 [8];
  longlong local_30;
  uint local_28 [2];
  undefined8 local_20;
  undefined8 local_18;
  
  if (((*(char *)(param_1 + 8) == '\0') || (param_3 < *(uint *)(param_1 + 0x20))) &&
     (param_3 <= *(uint *)(param_1 + 0x20))) {
    if (param_3 == *(uint *)(param_1 + 0x20)) {
      pcVar5 = (char *)FUN_143555f90(param_1,local_res8,param_3 + 1);
      if (*pcVar5 == '\0') goto LAB_14355663c;
    }
    local_28[0] = 0;
    local_20 = 0;
    pcVar5 = (char *)FUN_14361fbd0(param_1,local_res8,param_5,param_4,local_28);
    if (*pcVar5 == '\0') {
      *param_2 = 0;
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x18);
      *param_2 = 1;
      *(undefined8 *)(lVar3 + (ulonglong)param_3 * 8) = local_18;
    }
    if (9 < ((byte)local_28[0] & 0x1f)) {
      if ((local_28[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_28);
      }
      else {
        FUN_143592150();
      }
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar4 = FUN_1435c8e40(local_38,0x465,uVar2);
    FUN_1435cbdf0(uVar2,uVar4);
    piVar1 = (int *)(local_30 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
LAB_14355663c:
    *param_2 = 0;
  }
  return param_2;
}



// FUNCTION 1435566f0 FUN_1435566f0 body=330 status=ok
// SIG undefined FUN_1435566f0(void)

void FUN_1435566f0(double *param_1,double param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  param_2 = param_2 * 0.5;
  if (param_2 < 0.0) {
    param_2 = param_2 + 3.141592653589793;
  }
  dVar3 = _guard_xfg_dispatch_icall_nop(param_2);
  param_1[3] = dVar3;
  dVar4 = _guard_xfg_dispatch_icall_nop(param_2);
  dVar3 = param_3[1];
  dVar1 = *param_3;
  dVar2 = param_3[2];
  if (1e-12 < ABS((dVar1 * dVar1 + dVar3 * dVar3 + dVar2 * dVar2) - 1.0)) {
    dVar5 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
    if (1e-24 <= dVar5) {
      dVar5 = _guard_xfg_dispatch_icall_nop(dVar5);
      dVar1 = dVar1 / dVar5;
      dVar3 = dVar3 / dVar5;
      dVar2 = dVar2 / dVar5;
    }
    *param_1 = dVar1 * dVar4;
    param_1[1] = dVar3 * dVar4;
    param_1[2] = dVar2 * dVar4;
  }
  else {
    *param_1 = dVar1 * dVar4;
    param_1[1] = dVar4 * param_3[1];
    param_1[2] = dVar4 * param_3[2];
  }
  return;
}



// FUNCTION 143556840 SetIdentity body=47 status=ok
// SIG void SetIdentity(Matrix3x4<double> * this)

/* public: void __cdecl Scaleform::Render::Matrix3x4<double>::SetIdentity(void) __ptr64 */

void __thiscall Scaleform::Render::Matrix3x4<double>::SetIdentity(Matrix3x4<double> *this)

{
                    /* 0x3556840  413  ?SetIdentity@?$Matrix3x4@N@Render@Scaleform@@QEAAXXZ */
  ::_guard_xfg_dispatch_icall_nop(this,0,0x60);
  *(undefined8 *)this = 0x3ff0000000000000;
  *(undefined8 *)(this + 0x28) = 0x3ff0000000000000;
  *(undefined8 *)(this + 0x50) = 0x3ff0000000000000;
  return;
}



// FUNCTION 143556870 SetIdentity body=53 status=ok
// SIG void SetIdentity(Matrix4x4<double> * this)

/* public: void __cdecl Scaleform::Render::Matrix4x4<double>::SetIdentity(void) __ptr64 */

void __thiscall Scaleform::Render::Matrix4x4<double>::SetIdentity(Matrix4x4<double> *this)

{
                    /* 0x3556870  415  ?SetIdentity@?$Matrix4x4@N@Render@Scaleform@@QEAAXXZ */
  ::_guard_xfg_dispatch_icall_nop(this,0,0x80);
  *(undefined8 *)this = 0x3ff0000000000000;
  *(undefined8 *)(this + 0x28) = 0x3ff0000000000000;
  *(undefined8 *)(this + 0x50) = 0x3ff0000000000000;
  *(undefined8 *)(this + 0x78) = 0x3ff0000000000000;
  return;
}



// FUNCTION 1435568b0 SetInverse body=245 status=ok
// SIG void SetInverse(Matrix2x4<double> * this, Matrix2x4<double> * param_1)

/* public: void __cdecl Scaleform::Render::Matrix2x4<double>::SetInverse(class
   Scaleform::Render::Matrix2x4<double> const & __ptr64) __ptr64 */

void __thiscall
Scaleform::Render::Matrix2x4<double>::SetInverse(Matrix2x4<double> *this,Matrix2x4<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
                    /* 0x35568b0  417  ?SetInverse@?$Matrix2x4@N@Render@Scaleform@@QEAAXAEBV123@@Z
                        */
  dVar4 = *(double *)(param_1 + 0x28) * *(double *)param_1 -
          *(double *)(param_1 + 0x20) * *(double *)(param_1 + 8);
  if (dVar4 != 0.0) {
    dVar4 = 1.0 / dVar4;
    dVar5 = *(double *)(param_1 + 0x28) * dVar4;
    *(double *)this = dVar5;
    dVar1 = *(double *)param_1;
    *(double *)(this + 0x28) = dVar4 * dVar1;
    dVar2 = *(double *)(param_1 + 8);
    *(double *)(this + 8) = -(dVar4 * dVar2);
    dVar3 = *(double *)(param_1 + 0x20);
    *(double *)(this + 0x20) = -(dVar4 * dVar3);
    *(double *)(this + 0x18) =
         -(*(double *)(param_1 + 0x38) * -(dVar4 * dVar2) + *(double *)(param_1 + 0x18) * dVar5);
    *(double *)(this + 0x38) =
         -(*(double *)(param_1 + 0x18) * -(dVar4 * dVar3) +
          *(double *)(param_1 + 0x38) * dVar4 * dVar1);
    return;
  }
  *(undefined8 *)this = 0x3ff0000000000000;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0x3ff0000000000000;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(ulonglong *)(this + 0x18) = *(ulonglong *)(param_1 + 0x18) ^ 0x8000000000000000;
  *(ulonglong *)(this + 0x38) = *(ulonglong *)(param_1 + 0x38) ^ 0x8000000000000000;
  return;
}



// FUNCTION 1435569b0 FUN_1435569b0 body=359 status=ok
// SIG undefined FUN_1435569b0(void)

double * FUN_1435569b0(undefined8 param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_a8;
  double local_a0;
  double local_98;
  double local_88;
  double local_80;
  double local_78;
  
  FUN_1435542c0(param_1,&local_c8);
  dVar1 = *param_3;
  dVar2 = param_3[2];
  dVar3 = param_3[1];
  *param_2 = dVar1 * local_c8 + dVar3 * local_a8 + dVar2 * local_88 + 0.0;
  param_2[2] = dVar1 * local_b8 + dVar3 * local_98 + dVar2 * local_78 + 0.0;
  param_2[1] = dVar1 * local_c0 + dVar3 * local_a0 + dVar2 * local_80 + 0.0;
  return param_2;
}



// FUNCTION 143556b20 Transpose body=157 status=ok
// SIG void Transpose(Matrix3x4<double> * this)

/* public: void __cdecl Scaleform::Render::Matrix3x4<double>::Transpose(void) __ptr64 */

void __thiscall Scaleform::Render::Matrix3x4<double>::Transpose(Matrix3x4<double> *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
                    /* 0x3556b20  485  ?Transpose@?$Matrix3x4@N@Render@Scaleform@@QEAAXXZ */
  uVar3 = *(undefined4 *)(this + 8);
  uVar1 = *(undefined8 *)(this + 0x28);
  uVar2 = *(undefined8 *)(this + 0x30);
  uVar4 = *(undefined4 *)(this + 0x10);
  *(undefined8 *)this = *(undefined8 *)this;
  *(undefined8 *)(this + 8) = *(undefined8 *)(this + 0x20);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(this + 0x40);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = uVar3;
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(this + 0xc);
  *(int *)(this + 0x28) = (int)uVar1;
  *(int *)(this + 0x2c) = (int)((ulonglong)uVar1 >> 0x20);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(this + 0x48);
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x40) = uVar4;
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(this + 0x14);
  *(int *)(this + 0x48) = (int)uVar2;
  *(int *)(this + 0x4c) = (int)((ulonglong)uVar2 >> 0x20);
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(this + 0x50);
  *(undefined8 *)(this + 0x58) = 0;
  return;
}



// FUNCTION 143556bc0 Transpose body=287 status=ok
// SIG void Transpose(Matrix4x4<double> * this)

/* public: void __cdecl Scaleform::Render::Matrix4x4<double>::Transpose(void) __ptr64 */

void __thiscall Scaleform::Render::Matrix4x4<double>::Transpose(Matrix4x4<double> *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
                    /* 0x3556bc0  487  ?Transpose@?$Matrix4x4@N@Render@Scaleform@@QEAAXXZ */
  uVar1 = *(undefined8 *)(this + 0x28);
  uVar7 = *(undefined4 *)(this + 8);
  uVar2 = *(undefined8 *)(this + 0x30);
  uVar8 = *(undefined4 *)(this + 0x10);
  uVar9 = *(undefined4 *)(this + 0x14);
  uVar3 = *(undefined8 *)(this + 0x78);
  uVar4 = *(undefined8 *)(this + 0x38);
  uVar5 = *(undefined4 *)(this + 0x58);
  uVar6 = *(undefined4 *)(this + 0x5c);
  uVar10 = *(undefined4 *)(this + 0x18);
  uVar11 = *(undefined4 *)(this + 0x1c);
  *(undefined8 *)this = *(undefined8 *)this;
  *(undefined8 *)(this + 8) = *(undefined8 *)(this + 0x20);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(this + 0x40);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(this + 0x44);
  *(int *)(this + 0x18) = (int)*(undefined8 *)(this + 0x60);
  *(int *)(this + 0x1c) = (int)((ulonglong)*(undefined8 *)(this + 0x60) >> 0x20);
  *(undefined4 *)(this + 0x20) = uVar7;
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(this + 0xc);
  *(int *)(this + 0x28) = (int)uVar1;
  *(int *)(this + 0x2c) = (int)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(this + 0x48);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(this + 0x4c);
  *(int *)(this + 0x38) = (int)*(undefined8 *)(this + 0x68);
  *(int *)(this + 0x3c) = (int)((ulonglong)*(undefined8 *)(this + 0x68) >> 0x20);
  *(undefined4 *)(this + 0x40) = uVar8;
  *(undefined4 *)(this + 0x44) = uVar9;
  *(int *)(this + 0x48) = (int)uVar2;
  *(int *)(this + 0x4c) = (int)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(this + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(this + 0x54);
  *(int *)(this + 0x58) = (int)*(undefined8 *)(this + 0x70);
  *(int *)(this + 0x5c) = (int)((ulonglong)*(undefined8 *)(this + 0x70) >> 0x20);
  *(undefined4 *)(this + 0x60) = uVar10;
  *(undefined4 *)(this + 100) = uVar11;
  *(int *)(this + 0x68) = (int)uVar4;
  *(int *)(this + 0x6c) = (int)((ulonglong)uVar4 >> 0x20);
  *(undefined4 *)(this + 0x70) = uVar5;
  *(undefined4 *)(this + 0x74) = uVar6;
  *(int *)(this + 0x78) = (int)uVar3;
  *(int *)(this + 0x7c) = (int)((ulonglong)uVar3 >> 0x20);
  return;
}



// FUNCTION 143556ce0 FUN_143556ce0 body=59 status=ok
// SIG undefined FUN_143556ce0(void)

void FUN_143556ce0(longlong param_1,double param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  
  FUN_143590540();
  dVar2 = *(double *)(param_1 + 0x48) * param_2;
  auVar1._8_4_ = SUB84(dVar2,0);
  auVar1._0_8_ = *(double *)(param_1 + 0x40) * param_2;
  auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x40) = auVar1;
  *(double *)(param_1 + 0x50) = param_2 * *(double *)(param_1 + 0x50);
  return;
}



// FUNCTION 143556d20 FUN_143556d20 body=1007 status=ok
// SIG undefined FUN_143556d20(void)

double * FUN_143556d20(double *param_1,undefined1 (*param_2) [16],double *param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double local_c8 [24];
  
  dVar12 = *param_3;
  dVar10 = *(double *)*param_2;
  dVar11 = *(double *)(*param_2 + 8);
  dVar1 = *(double *)param_2[1];
  dVar2 = *(double *)(param_2[1] + 8);
  dVar3 = param_3[1];
  dVar4 = param_3[2];
  dVar5 = param_3[3];
  dVar8 = dVar10 * dVar10 + dVar11 * dVar11 + dVar1 * dVar1 + dVar2 * dVar2;
  dVar9 = dVar12 * dVar12 + dVar3 * dVar3 + dVar4 * dVar4 + dVar5 * dVar5;
  if (1e-24 < dVar8) {
    if (1e-24 < dVar9) {
      dVar8 = _guard_xfg_dispatch_icall_nop(dVar8);
      dVar9 = _guard_xfg_dispatch_icall_nop(dVar9);
      dVar12 = dVar12 * dVar10 + dVar3 * dVar11 + dVar4 * dVar1 + dVar5 * dVar2;
      if ((dVar8 + 1e-12 < 1.0) || (1.0 < dVar8 - 1e-12)) {
        dVar12 = dVar12 / dVar8;
      }
      if ((dVar9 + 1e-12 < 1.0) || (1.0 < dVar9 - 1e-12)) {
        dVar12 = dVar12 / dVar9;
      }
      if (dVar12 < 0.0) {
        dVar12 = dVar12 * -1.0;
        dVar10 = *(double *)(*param_2 + 8) * -1.0;
        auVar6._8_4_ = SUB84(dVar10,0);
        auVar6._0_8_ = *(double *)*param_2 * -1.0;
        auVar6._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        *param_2 = auVar6;
        dVar10 = *(double *)(param_2[1] + 8) * -1.0;
        auVar7._8_4_ = SUB84(dVar10,0);
        auVar7._0_8_ = *(double *)param_2[1] * -1.0;
        auVar7._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        param_2[1] = auVar7;
      }
      if (dVar12 + 1.0 <= 0.05) {
        dVar12 = *(double *)(param_2[1] + 8);
        dVar10 = *(double *)param_2[1];
        dVar11 = *(double *)*param_2;
        *param_3 = -*(double *)(*param_2 + 8);
        param_3[1] = dVar11;
        param_3[2] = -dVar12;
        param_3[3] = dVar10;
        dVar12 = _guard_xfg_dispatch_icall_nop((0.5 - param_4) * 3.141592653589793);
        param_4 = _guard_xfg_dispatch_icall_nop(param_4 * 3.141592653589793);
      }
      else if (1.0 - dVar12 < 0.05) {
        dVar12 = 1.0 - param_4;
      }
      else {
        dVar10 = _guard_xfg_dispatch_icall_nop(dVar12);
        dVar11 = _guard_xfg_dispatch_icall_nop(dVar10);
        dVar12 = _guard_xfg_dispatch_icall_nop((1.0 - param_4) * dVar10);
        dVar12 = dVar12 * (1.0 / dVar11);
        param_4 = _guard_xfg_dispatch_icall_nop(dVar10 * param_4);
        param_4 = param_4 * (1.0 / dVar11);
      }
      dVar10 = *(double *)(*param_2 + 8);
      dVar11 = *(double *)param_2[1];
      dVar1 = param_3[1];
      dVar2 = param_3[2];
      dVar3 = param_3[3];
      dVar4 = *(double *)(param_2[1] + 8);
      if (local_c8 == param_1) {
        return param_1;
      }
      *param_1 = dVar12 * *(double *)*param_2 + param_4 * *param_3;
      param_1[1] = dVar12 * dVar10 + param_4 * dVar1;
      param_1[2] = dVar12 * dVar11 + param_4 * dVar2;
      param_1[3] = dVar12 * dVar4 + param_4 * dVar3;
      return param_1;
    }
    param_4 = 1.0 - param_4;
  }
  else {
    if (1e-24 < dVar9) {
      if (local_c8 == param_1) {
        return param_1;
      }
      *param_1 = dVar12 * param_4;
      param_1[1] = dVar3 * param_4;
      param_1[2] = dVar4 * param_4;
      param_1[3] = dVar5 * param_4;
      return param_1;
    }
    param_4 = 0.0;
  }
  if (local_c8 != param_1) {
    *param_1 = dVar10 * param_4;
    param_1[1] = dVar11 * param_4;
    param_1[2] = dVar1 * param_4;
    param_1[3] = dVar2 * param_4;
  }
  return param_1;
}



// FUNCTION 143557110 FUN_143557110 body=145 status=ok
// SIG undefined FUN_143557110(void)

void FUN_143557110(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b78d30)((longlong)DAT_146b78d38 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 1435571b0 FUN_1435571b0 body=33 status=ok
// SIG undefined FUN_1435571b0(void)

undefined8 * FUN_1435571b0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1435571e0 FUN_1435571e0 body=215 status=ok
// SIG undefined FUN_1435571e0(void)

undefined8 * FUN_1435571e0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b35620);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b35620);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 1435572c0 FUN_1435572c0 body=76 status=ok
// SIG undefined FUN_1435572c0(void)

undefined8 * FUN_1435572c0(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  FUN_143519560();
  *(undefined1 *)(param_1 + 0x10) = 0;
  *param_1 = &PTR_FUN_145b37988;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[0x11] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  return param_1;
}



// FUNCTION 143557320 FUN_143557320 body=86 status=ok
// SIG undefined FUN_143557320(void)

undefined1 FUN_143557320(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*(char *)(param_1 + 0x80) != '\0') {
    return 0;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar3 = FUN_1435c8e40(local_18,0xbbb,uVar2);
  FUN_1435cbdb0(uVar2,uVar3);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return 1;
}



// FUNCTION 143557380 FUN_143557380 body=107 status=ok
// SIG undefined FUN_143557380(void)

longlong * FUN_143557380(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  lVar1 = **(longlong **)(param_1 + 0x88);
  param_2[1] = (ulonglong)*(uint *)(*(longlong **)(param_1 + 0x88) + 4);
  *param_2 = lVar1;
  uVar3 = FUN_1432c6260(param_2,0x2e,0xffffffffffffffff);
  if (0 < (longlong)uVar3) {
    uVar2 = param_2[1];
    if (uVar2 < uVar3) {
      uVar3 = uVar2;
    }
    *param_2 = *param_2 + uVar3;
    param_2[1] = uVar2 - uVar3;
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 143557410 FUN_143557410 body=85 status=ok
// SIG undefined FUN_143557410(void)

void FUN_143557410(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218);
  *(int *)(lVar2 + 0x98) = *(int *)(lVar2 + 0x98) + 2;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar2 + 0x80;
  piVar1 = (int *)(lVar2 + 0x98);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar2 + 0x80);
  }
  return;
}



// FUNCTION 1435574a0 FUN_1435574a0 body=173 status=ok
// SIG undefined FUN_1435574a0(void)

void FUN_1435574a0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = (ulonglong)*(uint *)(*(longlong **)(param_1 + 0x88) + 4);
  local_18 = **(longlong **)(param_1 + 0x88);
  lVar2 = FUN_1432c6260(&local_18,0x2e,0xffffffffffffffff);
  if (0 < lVar2) {
    uVar3 = lVar2 + 1U;
    if (local_10 < lVar2 + 1U) {
      uVar3 = local_10;
    }
    local_18 = local_18 + uVar3;
    local_10 = local_10 - uVar3;
    lVar2 = FUN_143360a90(*(undefined8 *)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218));
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 2;
    piVar1 = (int *)(*param_2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_2 = lVar2;
    piVar1 = (int *)(lVar2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar2);
    }
  }
  return;
}



// FUNCTION 143557560 FUN_143557560 body=270 status=ok
// SIG undefined FUN_143557560(void)

void FUN_143557560(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 local_res8 [8];
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*(char *)(param_1 + 0x80) == '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    uVar4 = FUN_1435c8e40(local_18,0xbbb,uVar2);
    FUN_1435cbdb0(uVar2,uVar4);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x28);
    if (*(longlong *)(lVar6 + 0x100) == 0) {
      lVar5 = FUN_1435c8090(*(undefined8 *)(lVar6 + 0x98),&DAT_145b15ff0);
      *(undefined8 *)(lVar6 + 0x100) = *(undefined8 *)(lVar5 + 0xd8);
    }
    uVar2 = *(undefined8 *)(lVar6 + 0x100);
    lVar6 = FUN_1435b5bc0(uVar2);
    if (lVar6 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_1434c4f80(lVar6,uVar2);
    }
    uVar3 = *param_2;
    if (uVar7 != uVar3) {
      if (uVar3 != 0) {
        if ((uVar3 & 1) == 0) {
          if ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0) {
            *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *param_2 = uVar3 - 1;
        }
      }
      *param_2 = uVar7;
    }
    FUN_1434c6770(*param_2,local_res8,(double)*(longlong *)(param_1 + 0x90));
  }
  return;
}



// FUNCTION 143557680 FUN_143557680 body=65 status=ok
// SIG undefined FUN_143557680(void)

void FUN_143557680(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x88);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    *param_2 = lVar2;
    return;
  }
  *param_2 = lVar2;
  return;
}



// FUNCTION 1435576d0 FUN_1435576d0 body=98 status=ok
// SIG undefined FUN_1435576d0(void)

void FUN_1435576d0(longlong param_1,double *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*(char *)(param_1 + 0x80) == '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    uVar3 = FUN_1435c8e40(local_18,0xbbb,uVar2);
    FUN_1435cbdb0(uVar2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    *param_2 = (double)*(longlong *)(param_1 + 0xa0);
  }
  return;
}



// FUNCTION 143557740 FUN_143557740 body=227 status=ok
// SIG undefined FUN_143557740(void)

void FUN_143557740(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong local_18;
  ulonglong uStack_10;
  
  uStack_10 = (ulonglong)*(uint *)(*(longlong **)(param_1 + 0x88) + 4);
  local_18 = **(longlong **)(param_1 + 0x88);
  uVar3 = FUN_1432c6260(&local_18,0x2e,0xffffffffffffffff);
  if ((longlong)uVar3 < 1) {
    local_18 = 0;
    uStack_10 = 0;
  }
  else {
    if (uStack_10 < uVar3) {
      uVar3 = uStack_10;
    }
    local_18 = local_18 + uVar3;
    uStack_10 = uStack_10 - uVar3;
  }
  lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10);
  if (uStack_10 == 0) {
    lVar2 = *(longlong *)(lVar4 + 0x218);
    lVar4 = lVar2 + 0x80;
    piVar1 = (int *)(lVar2 + 0x98);
    *piVar1 = *piVar1 + 2;
  }
  else {
    lVar4 = FUN_143360a90(*(undefined8 *)(lVar4 + 0x218),local_18);
    *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 2;
  }
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar4;
  piVar1 = (int *)(lVar4 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar4);
  }
  return;
}



// FUNCTION 143557980 FUN_143557980 body=51 status=ok
// SIG undefined FUN_143557980(void)

undefined8 * FUN_143557980(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  *param_2 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x38);
  (**(code **)(*plVar1 + 8))
            (plVar1,2,"The method instance::FileReference::dataGet() is not implemented\n");
  return param_2;
}



// FUNCTION 1435579c0 FUN_1435579c0 body=44 status=ok
// SIG undefined FUN_1435579c0(void)

undefined8 * FUN_1435579c0(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  param_1[0x20] = 0;
  *param_1 = &PTR_FUN_145b37a58;
  return param_1;
}



// FUNCTION 143557a00 FUN_143557a00 body=216 status=ok
// SIG undefined FUN_143557a00(void)

void FUN_143557a00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar3 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_143519560(puVar3,param_3);
    *(undefined1 *)(puVar3 + 0x10) = 0;
    *puVar3 = &PTR_FUN_145b37988;
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(puVar3[5] + 0x98) + 0x10) + 0x218);
    puVar3[0x11] = lVar2 + 0x48;
    piVar1 = (int *)(lVar2 + 0x60);
    *piVar1 = *piVar1 + 1;
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar3);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 143557ae0 FUN_143557ae0 body=74 status=ok
// SIG undefined FUN_143557ae0(void)

undefined8 FUN_143557ae0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar2 = FUN_1435c8090(*(undefined8 *)(param_1 + 0x98),&DAT_145b15ff0);
    uVar1 = *(undefined8 *)(lVar2 + 0xd8);
    *(undefined8 *)(param_1 + 0x100) = uVar1;
    return uVar1;
  }
  return *(undefined8 *)(param_1 + 0x100);
}



// FUNCTION 143557b30 UMaterialExpressionRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionRerouteBase(void)

undefined8 * UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143557b60 FUN_143557b60 body=225 status=ok
// SIG undefined FUN_143557b60(void)

undefined8 * FUN_143557b60(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b371a0);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x108,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar2,param_2,&PTR_DAT_145b371a0);
    puVar2[0x20] = 0;
    *puVar2 = &PTR_FUN_145b37a58;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143557c50 FUN_143557c50 body=177 status=ok
// SIG undefined FUN_143557c50(void)

undefined8 * FUN_143557c50(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [32];
  
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_ForEachChild_GC_145b37ad0;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[8] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  lVar2 = FUN_143360a60(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218),
                        &DAT_145b250c4);
  param_1[0xd] = lVar2;
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[0xe] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  puVar3 = (undefined8 *)FUN_1435ca860(*(undefined8 *)(param_1[5] + 0x98),local_res8);
  param_1[0xf] = *puVar3;
  return param_1;
}



// FUNCTION 143557d10 ForEachChild_GC body=61 status=ok
// SIG undefined ForEachChild_GC(void)

void Scaleform::GFx::AS3::Instances::fl_net::URLRequest::ForEachChild_GC
               (longlong param_1,undefined8 param_2,code *param_3)

{
  FUN_1435b16a0();
  if (*(longlong *)(param_1 + 0x78) != 0) {
    (*param_3)(param_2,param_1 + 0x78);
  }
  return;
}



// FUNCTION 143557d60 FUN_143557d60 body=5 status=ok
// SIG undefined FUN_143557d60(void)

longlong FUN_143557d60(longlong param_1)

{
  return param_1 + 0x40;
}



// FUNCTION 143557d70 FUN_143557d70 body=34 status=ok
// SIG undefined FUN_143557d70(void)

void FUN_143557d70(longlong param_1,int param_2,undefined8 param_3)

{
  undefined1 local_res10 [24];
  
  if (param_2 != 0) {
    FUN_1435911f0(param_3,local_res10,param_1 + 0x40);
  }
  return;
}



// FUNCTION 143557e60 FUN_143557e60 body=62 status=ok
// SIG undefined FUN_143557e60(void)

void FUN_143557e60(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x70);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    *param_2 = lVar2;
    return;
  }
  *param_2 = lVar2;
  return;
}



// FUNCTION 143557eb0 FUN_143557eb0 body=49 status=ok
// SIG undefined FUN_143557eb0(void)

void FUN_143557eb0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *param_3;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x70) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *(longlong *)(param_1 + 0x70) = lVar2;
  return;
}



// FUNCTION 143557ef0 FUN_143557ef0 body=15 status=ok
// SIG undefined FUN_143557ef0(void)

void FUN_143557ef0(longlong param_1,undefined8 param_2)

{
  FUN_143590140(param_2,param_1 + 0x48);
  return;
}



// FUNCTION 143558050 FUN_143558050 body=62 status=ok
// SIG undefined FUN_143558050(void)

void FUN_143558050(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x68);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    *param_2 = lVar2;
    return;
  }
  *param_2 = lVar2;
  return;
}



// FUNCTION 1435580a0 FUN_1435580a0 body=49 status=ok
// SIG undefined FUN_1435580a0(void)

void FUN_1435580a0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *param_3;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x68) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *(longlong *)(param_1 + 0x68) = lVar2;
  return;
}



// FUNCTION 1435580e0 FUN_1435580e0 body=117 status=ok
// SIG undefined FUN_1435580e0(void)

void FUN_1435580e0(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  puVar1 = (ulonglong *)(param_1 + 0x78);
  if (puVar1 != param_2) {
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      *(uint *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1U & 0x8fffffff;
    }
    uVar2 = *param_2;
    if (uVar2 != 0) {
      if ((uVar2 & 1) != 0) {
        *param_2 = uVar2 - 1;
        *param_2 = *puVar1;
        return;
      }
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    *param_2 = *puVar1;
  }
  return;
}



// FUNCTION 143558160 FUN_143558160 body=219 status=ok
// SIG undefined FUN_143558160(void)

void FUN_143558160(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  if ((param_3 != 0) && (uVar4 = 0, *(longlong *)(param_3 + 0x40) != 0)) {
    do {
      uVar1 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x1c8);
      uVar3 = FUN_1434b4f50(param_3 + 0x40,uVar4);
      cVar2 = FUN_1435c8b00(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),uVar3,
                            "flash.net.URLRequestHeader",uVar1);
      if (cVar2 == '\0') {
        return;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ulonglong *)(param_3 + 0x40));
  }
  if (param_3 != *(longlong *)(param_1 + 0x78)) {
    if (param_3 != 0) {
      *(uint *)(param_3 + 8) = *(int *)(param_3 + 8) + 1U & 0x8fffffff;
    }
    uVar4 = *(ulonglong *)(param_1 + 0x78);
    if (uVar4 != 0) {
      if ((uVar4 & 1) == 0) {
        if ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *(ulonglong *)(param_1 + 0x78) = uVar4 - 1;
      }
    }
    *(longlong *)(param_1 + 0x78) = param_3;
  }
  return;
}



// FUNCTION 143558250 FUN_143558250 body=62 status=ok
// SIG undefined FUN_143558250(void)

void FUN_143558250(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x40);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    *param_2 = lVar2;
    return;
  }
  *param_2 = lVar2;
  return;
}



// FUNCTION 1435582a0 FUN_1435582a0 body=49 status=ok
// SIG undefined FUN_1435582a0(void)

void FUN_1435582a0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *param_3;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x40) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *(longlong *)(param_1 + 0x40) = lVar2;
  return;
}



// FUNCTION 1435583a0 FUN_1435583a0 body=30 status=ok
// SIG undefined FUN_1435583a0(void)

undefined8 * FUN_1435583a0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1435580e0();
  return param_2;
}



// FUNCTION 1435583d0 FUN_1435583d0 body=33 status=ok
// SIG undefined FUN_1435583d0(void)

undefined8 * FUN_1435583d0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b37b90;
  return param_1;
}



// FUNCTION 143558400 FUN_143558400 body=141 status=ok
// SIG undefined FUN_143558400(void)

void FUN_143558400(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  lVar1 = FUN_1435b5bc0(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_143557c50(lVar1,param_3);
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,uVar2);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 1435584a0 FUN_1435584a0 body=33 status=ok
// SIG undefined FUN_1435584a0(void)

undefined8 * FUN_1435584a0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1435584d0 FUN_1435584d0 body=214 status=ok
// SIG undefined FUN_1435584d0(void)

undefined8 * FUN_1435584d0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b37248);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b37248);
    *puVar2 = &PTR_FUN_145b37b90;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 1435585b0 FUN_1435585b0 body=33 status=ok
// SIG undefined FUN_1435585b0(void)

undefined8 * FUN_1435585b0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1435585e0 FUN_1435585e0 body=215 status=ok
// SIG undefined FUN_1435585e0(void)

undefined8 * FUN_1435585e0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b36df0);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
                       (lVar3,param_2,&PTR_DAT_145b36df0);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 1435586c0 FUN_1435586c0 body=33 status=ok
// SIG undefined FUN_1435586c0(void)

undefined8 * FUN_1435586c0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1435586f0 FUN_1435586f0 body=215 status=ok
// SIG undefined FUN_1435586f0(void)

undefined8 * FUN_1435586f0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b36f28);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)FUN_1434af920(lVar3,param_2,&PTR_DAT_145b36f28);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 1435587d0 FUN_1435587d0 body=33 status=ok
// SIG undefined FUN_1435587d0(void)

undefined8 * FUN_1435587d0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143558800 FUN_143558800 body=215 status=ok
// SIG undefined FUN_143558800(void)

undefined8 * FUN_143558800(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b372a8);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)FUN_1434af920(lVar3,param_2,&PTR_DAT_145b372a8);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 1435588e0 FUN_1435588e0 body=33 status=ok
// SIG undefined FUN_1435588e0(void)

undefined8 * FUN_1435588e0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143558910 FUN_143558910 body=215 status=ok
// SIG undefined FUN_143558910(void)

undefined8 * FUN_143558910(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b34b10);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
                       (lVar3,param_2,&PTR_DAT_145b34b10);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 1435589f0 FUN_1435589f0 body=33 status=ok
// SIG undefined FUN_1435589f0(void)

undefined8 * FUN_1435589f0(undefined8 *param_1)

{
  FUN_143519560();
  *param_1 = &PTR_FUN_145b37e70;
  return param_1;
}



// FUNCTION 143558cf0 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b37f40;
  return param_1;
}



// FUNCTION 143558d20 FUN_143558d20 body=173 status=ok
// SIG undefined FUN_143558d20(void)

void FUN_143558d20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_143519560(puVar1,param_3);
    *puVar1 = &PTR_FUN_145b37e70;
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar1);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 143558de0 FUN_143558de0 body=33 status=ok
// SIG undefined FUN_143558de0(void)

undefined8 * FUN_143558de0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143558e10 FUN_143558e10 body=214 status=ok
// SIG undefined FUN_143558e10(void)

undefined8 * FUN_143558e10(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b350b0);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar2,param_2,&PTR_DAT_145b350b0);
    *puVar2 = &PTR_FUN_145b37f40;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143558ef0 FUN_143558ef0 body=33 status=ok
// SIG undefined FUN_143558ef0(void)

undefined8 * FUN_143558ef0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143558f20 FUN_143558f20 body=231 status=ok
// SIG undefined FUN_143558f20(void)

undefined8 * FUN_143558f20(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b34b70);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  uVar4 = 0;
  if (lVar3 != 0) {
    uVar4 = UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b34b70);
  }
  FUN_1435b8600(*param_1,uVar4);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x60);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar2,*param_1);
    *(undefined4 *)(puVar2 + 10) = 0;
    *puVar2 = &PTR_ForEachChild_GC_145b23ad8;
    *(undefined4 *)((longlong)puVar2 + 0x54) = 3;
    *(undefined4 *)(puVar2 + 0xb) = 3;
  }
  return param_1;
}



// FUNCTION 143559010 FUN_143559010 body=54 status=ok
// SIG undefined FUN_143559010(void)

undefined8 * FUN_143559010(undefined8 *param_1)

{
  FUN_1435b37d0();
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = &PTR_ForEachChild_GC_145b23ad8;
  *(undefined4 *)((longlong)param_1 + 0x54) = 3;
  *(undefined4 *)(param_1 + 0xb) = 3;
  return param_1;
}



// FUNCTION 143559050 FUN_143559050 body=33 status=ok
// SIG undefined FUN_143559050(void)

undefined8 * FUN_143559050(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143559080 FUN_143559080 body=215 status=ok
// SIG undefined FUN_143559080(void)

undefined8 * FUN_143559080(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b35110);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b35110);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143559160 FUN_143559160 body=120 status=ok
// SIG undefined FUN_143559160(void)

undefined8 * FUN_143559160(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  
  FUN_143519560();
  *param_1 = &PTR_FUN_145b38458;
  param_1[0x10] = 0;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x98) + 0x10) + 0x218);
  param_1[0x11] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x98) + 0x10) + 0x218);
  param_1[0x12] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  return param_1;
}



// FUNCTION 143559200 FUN_143559200 body=257 status=ok
// SIG undefined FUN_143559200(void)

undefined8 FUN_143559200(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  ushort uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 local_res20 [8];
  
  uVar6 = Scaleform::GFx::ASConstString::GetFirstCharAt(param_2,0,local_res20);
  iVar5 = (int)uVar6;
  do {
    if (iVar5 == 0) {
      lVar3 = *param_2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(longlong *)(param_1 + 0x88) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *(longlong *)(param_1 + 0x88) = lVar3;
      lVar3 = *param_3;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(longlong *)(param_1 + 0x90) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *(longlong *)(param_1 + 0x90) = lVar3;
      return 1;
    }
    uVar4 = (uint)uVar6;
    switch(uVar4) {
    case 0x22:
    case 0x23:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x2c:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3e:
    case 0x3f:
    case 0x5c:
    case 0x7e:
      return 0;
    }
    uVar2 = *(ushort *)(&DAT_145afe6e0 + ((uVar6 & 0xffff) >> 8) * 2);
    if (uVar2 != 0) {
      if (uVar2 == 1) {
        return 0;
      }
      if ((*(ushort *)
            (&DAT_145afe6e0 + (ulonglong)(((uVar4 & 0xffff) >> 4 & 0xf) + (uint)uVar2) * 2) >>
           (uVar4 & 0xf) & 1) != 0) {
        return 0;
      }
    }
    uVar6 = FUN_14335fbd0(param_2,local_res20);
    iVar5 = (int)uVar6;
  } while( true );
}



// FUNCTION 143559370 FUN_143559370 body=532 status=ok
// SIG undefined FUN_143559370(void)

ulonglong FUN_143559370(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  ulonglong in_RAX;
  ulonglong *puVar6;
  undefined8 uVar7;
  RefCountImpl *this;
  undefined8 uVar8;
  ulonglong local_res10;
  ulonglong local_res18;
  undefined1 local_res20 [8];
  uint local_88 [8];
  undefined1 local_68 [48];
  
  if (param_2 == (longlong *)0x0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x80);
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x300) + 0x10);
  puVar6 = (ulonglong *)FUN_1435ca890(*(longlong *)(param_1 + 0x40),local_res20);
  uVar3 = *puVar6;
  FUN_143590110(local_88,uVar7);
  uVar7 = FUN_143590540();
  FUN_14357ac90(uVar3,uVar7,local_88);
  FUN_1432c5960(local_68,DAT_146b62f28);
  Scaleform::StringBuffer::AppendString
            (local_68,*(undefined8 *)(uVar3 + 0x50),*(undefined4 *)(uVar3 + 0x48));
  this = (RefCountImpl *)(**(code **)(*(longlong *)(lVar2 + 0x10) + 0x18))(lVar2 + 0x10,0xc);
  lVar2 = *param_2;
  uVar1 = *(undefined4 *)(*(undefined8 **)(param_1 + 0x88) + 4);
  uVar7 = **(undefined8 **)(param_1 + 0x88);
  uVar8 = FUN_1432c3140(&local_res18,**(undefined8 **)(param_1 + 0x90),
                        *(undefined4 *)(*(undefined8 **)(param_1 + 0x90) + 4));
  uVar7 = FUN_1432c3140(&local_res10,uVar7,uVar1);
  bVar4 = (**(code **)(lVar2 + 0x10))(param_2,uVar7,uVar8,this,local_68);
  iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res10 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar5 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res10 & 0xfffffffffffffffc);
  }
  iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res18 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar5 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res18 & 0xfffffffffffffffc);
  }
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  Scaleform::StringBuffer::~StringBuffer(local_68);
  if (9 < ((byte)local_88[0] & 0x1f)) {
    if ((local_88[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_88);
    }
    else {
      FUN_143592150();
    }
  }
  if (((uVar3 & 1) == 0) && ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
    FUN_1434ef880(uVar3);
  }
  return (ulonglong)bVar4;
}



// FUNCTION 1435595f0 FUN_1435595f0 body=120 status=ok
// SIG undefined FUN_1435595f0(void)

void FUN_1435595f0(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  puVar1 = (ulonglong *)(param_1 + 0x80);
  if (puVar1 != param_2) {
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      *(uint *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1U & 0x8fffffff;
    }
    uVar2 = *param_2;
    if (uVar2 != 0) {
      if ((uVar2 & 1) != 0) {
        *param_2 = uVar2 - 1;
        *param_2 = *puVar1;
        return;
      }
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    *param_2 = *puVar1;
  }
  return;
}



// FUNCTION 1435597f0 FUN_1435597f0 body=283 status=ok
// SIG undefined FUN_1435597f0(void)

void FUN_1435597f0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  RefCountImpl *this;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 local_18 [8];
  longlong local_10;
  
  lVar5 = *(longlong *)(param_1 + 0x40);
  lVar2 = *(longlong *)(*(longlong *)(lVar5 + 0x300) + 0x10);
  this = (RefCountImpl *)(**(code **)(*(longlong *)(lVar2 + 0x10) + 0x18))(lVar2 + 0x10,0x25);
  if (this == (RefCountImpl *)0x0) {
    uVar4 = FUN_1435c8e40(local_18,0x5dd,lVar5);
    FUN_1435cbdb0(lVar5,uVar4);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    cVar3 = FUN_143559370(param_1,this);
    if (cVar3 == '\0') {
      uVar4 = FUN_1435c8e40(local_18,0x5dd,lVar5);
      FUN_1435cbdb0(lVar5,uVar4);
      piVar1 = (int *)(local_10 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
        Scaleform::RefCountImpl::Release(this);
        return;
      }
    }
    else {
      lVar5 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar5 + 0x10) + 0x218),"flushed",7);
      *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 2;
      piVar1 = (int *)(*param_2 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *param_2 = lVar5;
      piVar1 = (int *)(lVar5 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(lVar5);
      }
    }
    Scaleform::RefCountImpl::Release(this);
  }
  return;
}



// FUNCTION 1435599b0 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b38528;
  return param_1;
}



// FUNCTION 1435599e0 FUN_1435599e0 body=141 status=ok
// SIG undefined FUN_1435599e0(void)

void FUN_1435599e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  lVar1 = FUN_1435b5bc0(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_143559160(lVar1,param_3);
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,uVar2);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 143559a80 FUN_143559a80 body=33 status=ok
// SIG undefined FUN_143559a80(void)

undefined8 * FUN_143559a80(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143559ab0 FUN_143559ab0 body=235 status=ok
// SIG undefined FUN_143559ab0(void)

undefined8 * FUN_143559ab0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b36a30);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar3,param_2,&PTR_DAT_145b36a30);
    *puVar3 = &PTR_FUN_145b38528;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x58);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b385a0;
    puVar3[10] = 0;
  }
  return param_1;
}



// FUNCTION 143559bb0 UAISenseConfig_Sight_VR body=41 status=ok
// SIG undefined UAISenseConfig_Sight_VR(void)

undefined8 * UAISenseConfig_Sight_VR::UAISenseConfig_Sight_VR(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b385a0;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 143559be0 ForEachChild_GC body=233 status=ok
// SIG undefined ForEachChild_GC(void)

void Scaleform::GFx::AS3::Classes::fl_net::SharedObject::ForEachChild_GC
               (longlong param_1,undefined8 param_2,code *param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  Class::ForEachChild_GC();
  lVar2 = *(longlong *)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x50);
  if (lVar2 == 0) {
    plVar5 = (longlong *)0x0;
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    plVar4 = (longlong *)(lVar2 + 0x10);
    do {
      if (*plVar4 != -2) break;
      uVar7 = uVar7 + 1;
      plVar4 = plVar4 + 3;
    } while (uVar7 <= *(ulonglong *)(lVar2 + 8));
  }
  do {
    do {
      uVar6 = uVar7;
      if (((plVar5 == (longlong *)0x0) || (lVar2 = *plVar5, lVar2 == 0)) ||
         (*(longlong *)(lVar2 + 8) < (longlong)uVar6)) {
        return;
      }
      lVar1 = uVar6 * 3 + 4;
      if (*(longlong *)(lVar2 + lVar1 * 8) != 0) {
        (*param_3)(param_2,lVar2 + lVar1 * 8);
      }
      uVar3 = *(ulonglong *)(*plVar5 + 8);
      uVar7 = uVar6;
    } while (((longlong)uVar3 < (longlong)uVar6) || (uVar7 = uVar6 + 1, uVar3 < uVar7));
    plVar4 = (longlong *)(*plVar5 + (uVar7 + (uVar6 + 2) * 2) * 8);
    do {
      if (*plVar4 != -2) break;
      uVar7 = uVar7 + 1;
      plVar4 = plVar4 + 3;
    } while (uVar7 <= uVar3);
  } while( true );
}



// FUNCTION 143559cd0 FUN_143559cd0 body=1307 status=ok
// SIG undefined FUN_143559cd0(void)

void FUN_143559cd0(longlong param_1,ulonglong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  RefCountImpl *this;
  RefCountImpl *this_00;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong local_res8;
  ulonglong local_res20;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong *local_98;
  ulonglong *local_90;
  uint local_88 [2];
  undefined8 local_80;
  longlong local_78;
  undefined1 *local_68;
  undefined8 local_60;
  
  local_res20 = FUN_143360a60(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) +
                               0x218),*(undefined8 *)*param_4);
  *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
  FUN_143360130(&local_res20,&DAT_145b138d8,1);
  FUN_143360170(&local_res20,param_3);
  lVar6 = *(longlong *)(param_1 + 0x50);
  uVar7 = 0;
  uVar9 = uVar7;
  if (lVar6 != 0) {
    uVar10 = *(ulonglong *)(lVar6 + 8);
    uVar13 = *(uint *)(local_res20 + 0x1c) & uVar10;
    lVar2 = uVar13 * 3 + 2;
    puVar8 = (ulonglong *)(lVar6 + lVar2 * 8);
    if ((*(longlong *)(lVar6 + lVar2 * 8) != -2) &&
       (uVar12 = uVar13, (*(uint *)(puVar8[1] + 0x1c) & uVar10) == uVar13)) {
      while (((*(uint *)(puVar8[1] + 0x1c) & uVar10) != uVar13 || (puVar8[1] != local_res20))) {
        uVar12 = *puVar8;
        if (uVar12 == 0xffffffffffffffff) goto LAB_143559dd1;
        puVar8 = (ulonglong *)(lVar6 + uVar12 * 0x18 + 0x10);
      }
      if (-1 < (longlong)uVar12) {
        uVar9 = lVar6 + (uVar12 + 1) * 0x18;
      }
    }
  }
LAB_143559dd1:
  uVar10 = uVar9 + 8;
  if (uVar9 == 0) {
    uVar10 = uVar7;
  }
  if (uVar10 != 0) {
    FUN_1434e6830(param_2);
    goto LAB_14355a1a3;
  }
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0xd8);
  lVar6 = FUN_1435b5bc0(uVar3);
  if (lVar6 != 0) {
    uVar7 = FUN_143559160(lVar6,uVar3);
  }
  local_res8 = uVar7;
  cVar4 = FUN_143559200(uVar7,param_3,param_4);
  if (cVar4 == '\0') {
    uVar9 = *param_2;
    if (uVar9 != 0) {
      if ((uVar9 & 1) == 0) {
        if ((*(uint *)(uVar9 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) - 1;
          FUN_1434ef880();
        }
        *param_2 = 0;
      }
      else {
        *param_2 = uVar9 - 1;
        *param_2 = 0;
      }
    }
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
    lVar2 = *(longlong *)(*(longlong *)(lVar6 + 0x300) + 0x10);
    this = (RefCountImpl *)(**(code **)(*(longlong *)(lVar2 + 0x10) + 0x18))(lVar2 + 0x10,0x25);
    this_00 = (RefCountImpl *)(**(code **)(*(longlong *)(lVar2 + 0x10) + 0x18))(lVar2 + 0x10,0xc);
    if (this_00 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(this_00);
    }
    FUN_1432c2fb0(&local_a0,*(undefined8 *)*param_3);
    FUN_1432c2fb0(&local_a8,*(undefined8 *)*param_4);
    FUN_1432c5960(&local_68,DAT_146b62f28);
    if ((this == (RefCountImpl *)0x0) ||
       (cVar4 = (**(code **)(*(longlong *)this + 8))(this,&local_a0,&local_a8,this_00,&local_68),
       cVar4 == '\0')) {
      puVar8 = (ulonglong *)FUN_1435ca830(lVar6,&local_98);
      uVar9 = *puVar8;
      FUN_1434f0700(local_res8 + 0x80,uVar9);
      if ((uVar9 != 0) && (((uVar9 & 1) == 0 && ((*(uint *)(uVar9 + 8) & 0x3fffff) != 0)))) {
        *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) - 1;
        FUN_1434ef880(uVar9);
      }
LAB_14355a08e:
      if (&local_res8 != param_2) {
        if (local_res8 != 0) {
          *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
          *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) & 0x8fffffff;
        }
        uVar9 = *param_2;
        if (uVar9 != 0) {
          if ((uVar9 & 1) == 0) {
            if ((*(uint *)(uVar9 + 8) & 0x3fffff) != 0) {
              *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            *param_2 = uVar9 - 1;
          }
        }
        *param_2 = local_res8;
      }
      local_98 = &local_res20;
      local_90 = &local_res8;
      FUN_143561d70(param_1 + 0x50,param_1 + 0x50,&local_98,*(undefined4 *)(local_res20 + 0x1c));
    }
    else {
      local_88[0] = 0;
      local_80 = 0;
      puVar8 = (ulonglong *)
               FUN_1435ca890(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),&local_98);
      uVar9 = *puVar8;
      puVar11 = &DAT_145af3922;
      if (local_68 != (undefined1 *)0x0) {
        puVar11 = local_68;
      }
      FUN_143579840(uVar9,puVar11,local_60);
      FUN_14357a3e0(uVar9,local_88);
      if ((~(*(byte *)(*(longlong *)(local_78 + 0x28) + 0x88) >> 5) & 1) != 0) {
        FUN_1434f0700(local_res8 + 0x80);
        if (((uVar9 != 0) && ((uVar9 & 1) == 0)) && ((*(uint *)(uVar9 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) - 1;
          FUN_1434ef880(uVar9);
        }
        if (9 < ((byte)local_88[0] & 0x1f)) {
          if ((local_88[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_88);
          }
          else {
            FUN_143592150();
          }
        }
        goto LAB_14355a08e;
      }
      uVar7 = *param_2;
      if (uVar7 != 0) {
        if ((uVar7 & 1) == 0) {
          if ((*(uint *)(uVar7 + 8) & 0x3fffff) != 0) {
            *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *param_2 = uVar7 - 1;
        }
        *param_2 = 0;
      }
      if (((uVar9 != 0) && ((uVar9 & 1) == 0)) && ((*(uint *)(uVar9 + 8) & 0x3fffff) != 0)) {
        *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) - 1;
        FUN_1434ef880(uVar9);
      }
      if (9 < ((byte)local_88[0] & 0x1f)) {
        if ((local_88[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_88);
        }
        else {
          FUN_143592150();
        }
      }
    }
    Scaleform::StringBuffer::~StringBuffer(&local_68);
    iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_a8 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar5 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_a8 & 0xfffffffffffffffc);
    }
    iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_a0 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar5 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_a0 & 0xfffffffffffffffc);
    }
    if (this != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(this);
    }
  }
  if (local_res8 != 0) {
    if ((local_res8 & 1) == 0) {
      if ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0) {
        *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      local_res8 = local_res8 - 1;
    }
  }
LAB_14355a1a3:
  piVar1 = (int *)(local_res20 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14355a230 FUN_14355a230 body=33 status=ok
// SIG undefined FUN_14355a230(void)

undefined8 * FUN_14355a230(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14355a260 FUN_14355a260 body=250 status=ok
// SIG undefined FUN_14355a260(void)

undefined8 * FUN_14355a260(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b36d60);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b36d60);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x60);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b23ad8;
    puVar5[10] = "flushed";
    puVar5[0xb] = "pending";
  }
  return param_1;
}



// FUNCTION 14355a360 FUN_14355a360 body=55 status=ok
// SIG undefined FUN_14355a360(void)

undefined8 * FUN_14355a360(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b23ad8;
  param_1[10] = "flushed";
  param_1[0xb] = "pending";
  return param_1;
}



// FUNCTION 14355a3a0 FUN_14355a3a0 body=56 status=ok
// SIG undefined FUN_14355a3a0(void)

undefined1 * FUN_14355a3a0(longlong param_1,undefined1 *param_2,undefined8 param_3,int param_4)

{
  if (param_4 == 0) {
    *param_2 = 1;
    return param_2;
  }
  FUN_1435fe550(*(undefined8 *)(param_1 + 8),param_3,param_4);
  *param_2 = 1;
  return param_2;
}



// FUNCTION 14355a400 FUN_14355a400 body=368 status=ok
// SIG undefined FUN_14355a400(void)

undefined1 * FUN_14355a400(longlong param_1,undefined1 *param_2,longlong *param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  char *local_448;
  ulonglong local_440;
  undefined1 local_418 [1024];
  
  if (param_4 == 0) {
    *param_2 = 1;
    return param_2;
  }
  lVar3 = USupraFunctionLibrary::GetActorParentClass(*(undefined8 *)(param_1 + 8));
  FUN_1432c5960(&local_448,*(undefined8 *)(lVar3 + 0x48));
  Scaleform::StringBuffer::Reserve(&local_448,(ulonglong)param_4);
  uVar7 = param_4;
  do {
    uVar5 = 0x400;
    if ((int)uVar7 < 0x400) {
      uVar5 = uVar7;
    }
    uVar2 = FUN_1435fe290(*(undefined8 *)(param_1 + 8),local_418,uVar5);
    if (uVar2 != uVar5) {
      *param_2 = 0;
      goto LAB_14355a53b;
    }
    Scaleform::StringBuffer::AppendString(&local_448,local_418,(longlong)(int)uVar5);
    uVar7 = uVar7 - uVar5;
  } while (uVar7 != 0);
  lVar3 = 0;
  if ((param_4 < 3) || (local_440 < 3)) {
LAB_14355a4d9:
    pcVar6 = local_448;
    if (local_448 != (char *)0x0) goto LAB_14355a4e5;
  }
  else if (local_448 != (char *)0x0) {
    if (((*local_448 == -0x11) && (local_448[1] == -0x45)) && (lVar3 = 0, local_448[2] == -0x41)) {
      lVar3 = 3;
    }
    goto LAB_14355a4d9;
  }
  pcVar6 = "";
LAB_14355a4e5:
  lVar4 = USupraFunctionLibrary::GetActorParentClass(*(undefined8 *)(param_1 + 8));
  lVar3 = FUN_143360a90(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),pcVar6 + lVar3,
                        (ulonglong)param_4 - lVar3);
  *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 2;
  piVar1 = (int *)(*param_3 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_3 = lVar3;
  piVar1 = (int *)(lVar3 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar3);
  }
  *param_2 = 1;
LAB_14355a53b:
  Scaleform::StringBuffer::~StringBuffer(&local_448);
  return param_2;
}



// FUNCTION 14355a580 FUN_14355a580 body=190 status=ok
// SIG undefined FUN_14355a580(void)

undefined8 * FUN_14355a580(undefined8 *param_1)

{
  RefCountImpl *this;
  
  FUN_143519560();
  *param_1 = &PTR_FUN_145b38ac8;
  this = (RefCountImpl *)FUN_1435eadd0(*(undefined8 *)(param_1[8] + 0x300),1,param_1);
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(this);
  }
  param_1[0x10] = this;
  param_1[0x12] = this;
  param_1[0x11] = &PTR_FUN_145b38ab0;
  param_1[0x13] = &PTR_LAB_145b38ab8;
  param_1[0x14] = param_1[0x10];
  FUN_1435ddca0(param_1 + 0x15,param_1);
  FUN_1435daf10(param_1 + 0x2e,param_1,param_1 + 0x13);
  *(uint *)(param_1 + 0x42) = *(uint *)(param_1 + 0x42) & 0xffffffe3 | 3;
  return param_1;
}



// FUNCTION 14355a650 FUN_14355a650 body=187 status=ok
// SIG undefined FUN_14355a650(void)

void FUN_14355a650(longlong param_1)

{
  int *piVar1;
  char cVar2;
  ulonglong local_res8;
  longlong local_res10 [3];
  
  local_res10[0] =
       FUN_143360950(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10) + 0x218),
                     "close",5);
  *(int *)(local_res10[0] + 0x18) = *(int *)(local_res10[0] + 0x18) + 1;
  cVar2 = FUN_14351a530(param_1,local_res10,0);
  if (cVar2 != '\0') {
    Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::CreateEventObject
              (param_1,&local_res8,local_res10,0,0);
    FUN_1434f0700(local_res8 + 0x50,param_1);
    FUN_14351af40(param_1,local_res8,0);
    if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
       ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
      FUN_1434ef880();
    }
  }
  piVar1 = (int *)(local_res10[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14355a720 FUN_14355a720 body=187 status=ok
// SIG undefined FUN_14355a720(void)

void FUN_14355a720(longlong param_1)

{
  int *piVar1;
  char cVar2;
  ulonglong local_res8;
  longlong local_res10 [3];
  
  local_res10[0] =
       FUN_143360950(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10) + 0x218),
                     "connect",7);
  *(int *)(local_res10[0] + 0x18) = *(int *)(local_res10[0] + 0x18) + 1;
  cVar2 = FUN_14351a530(param_1,local_res10,0);
  if (cVar2 != '\0') {
    Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::CreateEventObject
              (param_1,&local_res8,local_res10,0,0);
    FUN_1434f0700(local_res8 + 0x50,param_1);
    FUN_14351af40(param_1,local_res8,0);
    if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
       ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
      FUN_1434ef880();
    }
  }
  piVar1 = (int *)(local_res10[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14355a7f0 FUN_14355a7f0 body=202 status=ok
// SIG undefined FUN_14355a7f0(void)

void FUN_14355a7f0(longlong param_1,uint param_2,ulonglong param_3)

{
  int *piVar1;
  char cVar2;
  ulonglong local_res8;
  longlong local_res20;
  
  local_res20 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x300) + 0x2f0);
  *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
  cVar2 = FUN_14351a530(param_1,&local_res20,0);
  if (cVar2 != '\0') {
    FUN_143519770(param_1,&local_res8,&local_res20);
    FUN_1434f0700(local_res8 + 0x50,param_1);
    *(ulonglong *)(local_res8 + 0x60) = (ulonglong)param_2;
    *(ulonglong *)(local_res8 + 0x68) = param_3 & 0xffffffff;
    FUN_14351af40(param_1,local_res8,0);
    if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
       ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
      FUN_1434ef880();
    }
  }
  piVar1 = (int *)(local_res20 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14355a8c0 FUN_14355a8c0 body=305 status=ok
// SIG undefined FUN_14355a8c0(void)

void FUN_14355a8c0(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined4 local_res8 [2];
  uint local_28 [2];
  undefined8 local_20;
  longlong local_18;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  local_28[0] = 0;
  local_20 = 0;
  local_res8[0] = 0;
  FUN_1435ccb40(lVar1,"flash.errors.EOFError",*(undefined8 *)(lVar1 + 0x1c8),local_28,local_res8,0);
  if ((*(char *)(lVar1 + 0xb8) != '\0') || (uVar2 = local_28[0] & 0x1f, uVar2 == 0))
  goto LAB_14355a9ad;
  if (uVar2 == 0xc) {
    bVar4 = local_18 == 0;
LAB_14355a945:
    if (bVar4) goto LAB_14355a9ad;
  }
  else if (uVar2 == 10) {
    bVar4 = local_18 == *(longlong *)(local_18 + 8) + 0x80;
    goto LAB_14355a945;
  }
  lVar1 = *(longlong *)(param_1 + 0x40);
  *(undefined1 *)(lVar1 + 0xb8) = 1;
  FUN_143590140(lVar1 + 0xc0,local_28);
  if (*(longlong *)(lVar1 + 0x108) == 0) {
    *(undefined8 *)(lVar1 + 0xe0) = 0;
  }
  else {
    uVar3 = *(longlong *)(lVar1 + 0x108) - 1;
    *(undefined8 *)(lVar1 + 0xe0) =
         *(undefined8 *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x120) + (uVar3 >> 6) * 8) + 0x28 +
          (ulonglong)((uint)uVar3 & 0x3f) * 0xa0);
  }
LAB_14355a9ad:
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 14355aa00 FUN_14355aa00 body=305 status=ok
// SIG undefined FUN_14355aa00(void)

void FUN_14355aa00(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined4 local_res8 [2];
  uint local_28 [2];
  undefined8 local_20;
  longlong local_18;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  local_28[0] = 0;
  local_20 = 0;
  local_res8[0] = 0;
  FUN_1435ccb40(lVar1,"flash.errors.IOError",*(undefined8 *)(lVar1 + 0x1c8),local_28,local_res8,0);
  if ((*(char *)(lVar1 + 0xb8) != '\0') || (uVar2 = local_28[0] & 0x1f, uVar2 == 0))
  goto LAB_14355aaed;
  if (uVar2 == 0xc) {
    bVar4 = local_18 == 0;
LAB_14355aa85:
    if (bVar4) goto LAB_14355aaed;
  }
  else if (uVar2 == 10) {
    bVar4 = local_18 == *(longlong *)(local_18 + 8) + 0x80;
    goto LAB_14355aa85;
  }
  lVar1 = *(longlong *)(param_1 + 0x40);
  *(undefined1 *)(lVar1 + 0xb8) = 1;
  FUN_143590140(lVar1 + 0xc0,local_28);
  if (*(longlong *)(lVar1 + 0x108) == 0) {
    *(undefined8 *)(lVar1 + 0xe0) = 0;
  }
  else {
    uVar3 = *(longlong *)(lVar1 + 0x108) - 1;
    *(undefined8 *)(lVar1 + 0xe0) =
         *(undefined8 *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x120) + (uVar3 >> 6) * 8) + 0x28 +
          (ulonglong)((uint)uVar3 & 0x3f) * 0xa0);
  }
LAB_14355aaed:
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 14355ab40 FUN_14355ab40 body=89 status=ok
// SIG undefined FUN_14355ab40(void)

undefined1 * FUN_14355ab40(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  
  cVar1 = Scaleform::GFx::AS3::SocketThreadMgr::IsRunning(*(undefined8 *)(param_1 + 0x80));
  if (cVar1 != '\0') {
    *param_2 = 1;
    return param_2;
  }
  FUN_14351a780(param_1,"AS3 Net Socket: Attempting to write to closed socket");
  FUN_14355aa00(param_1);
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14355aba0 FUN_14355aba0 body=138 status=ok
// SIG undefined FUN_14355aba0(void)

void FUN_14355aba0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong local_res8;
  longlong local_res18 [2];
  
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10) + 0x218),
                             "AS3 Net Socket: Failed to read ",0x1f);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  uVar2 = FUN_143360200(&local_res8,local_res18,param_2);
  FUN_14351a7d0(param_1,uVar2);
  piVar1 = (int *)(local_res18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_14355a8c0(param_1);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14355ac30 FUN_14355ac30 body=98 status=ok
// SIG undefined FUN_14355ac30(void)

void FUN_14355ac30(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1435195d0();
  FUN_143562890(param_1 + 0x100,param_2,param_3);
  FUN_143562890(param_1 + 0x138,param_2,param_3);
  FUN_1435629a0(param_1 + 0x170,param_2,param_3);
  return;
}



// FUNCTION 14355aca0 FUN_14355aca0 body=352 status=ok
// SIG undefined FUN_14355aca0(void)

void FUN_14355aca0(longlong param_1,uint param_2,uint *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined1 local_res10 [8];
  uint local_38 [2];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  
  lVar2 = *(longlong *)(param_1 + 0x40);
  uVar5 = 0;
  local_38[0] = 0;
  local_30 = 0;
  if ((param_2 == 0) || (uVar4 = *param_3 & 0x1f, uVar4 == 0)) {
LAB_14355ad21:
    local_38[0] = 0xc;
    local_28 = 0;
    uStack_24 = 0;
  }
  else {
    if (uVar4 == 0xc) {
      bVar6 = *(longlong *)(param_3 + 4) == 0;
LAB_14355acf4:
      if (bVar6) goto LAB_14355ad21;
    }
    else if (uVar4 == 10) {
      bVar6 = *(longlong *)(param_3 + 4) == *(longlong *)(*(longlong *)(param_3 + 4) + 8) + 0x80;
      goto LAB_14355acf4;
    }
    FUN_143590140(local_38,param_3);
    FUN_143591c60(local_38,local_res10,*(undefined8 *)(lVar2 + 0x10));
  }
  if ((1 < param_2) && (uVar4 = param_3[8] & 0x1f, uVar4 != 0)) {
    if (uVar4 == 0xc) {
      bVar6 = *(longlong *)(param_3 + 0xc) == 0;
LAB_14355ad65:
      if (bVar6) goto LAB_14355ad6f;
    }
    else if (uVar4 == 10) {
      bVar6 = *(longlong *)(param_3 + 0xc) == *(longlong *)(*(longlong *)(param_3 + 0xc) + 8) + 0x80
      ;
      goto LAB_14355ad65;
    }
    uVar5 = param_3[0xc];
  }
LAB_14355ad6f:
  if ((local_38[0] & 0x1f) == 0) goto LAB_14355adc8;
  puVar3 = (undefined8 *)CONCAT44(uStack_24,local_28);
  if ((local_38[0] & 0x1f) == 0xc) {
    bVar6 = puVar3 == (undefined8 *)0x0;
LAB_14355ad95:
    if (bVar6) goto LAB_14355adc8;
  }
  else if ((local_38[0] & 0x1f) == 10) {
    bVar6 = puVar3 == (undefined8 *)(puVar3[1] + 0x80);
    goto LAB_14355ad95;
  }
  *(int *)(puVar3 + 3) = *(int *)(puVar3 + 3) + 1;
  FUN_143590540();
  FUN_1435fdc50(*(undefined8 *)(param_1 + 0x80),*puVar3,uVar5);
  piVar1 = (int *)(puVar3 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(puVar3);
  }
LAB_14355adc8:
  if (9 < ((byte)local_38[0] & 0x1f)) {
    if ((local_38[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_38);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 14355ae10 bytesAvailableGet body=29 status=ok
// SIG undefined bytesAvailableGet(void)

void Scaleform::GFx::AS3::Instances::fl_net::Socket::bytesAvailableGet
               (longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = SocketThreadMgr::GetBytesAvailable(*(undefined8 *)(param_1 + 0x80));
  *param_2 = uVar1;
  return;
}



// FUNCTION 14355ae40 bytesPendingGet body=29 status=ok
// SIG undefined bytesPendingGet(void)

void Scaleform::GFx::AS3::Instances::fl_net::Socket::bytesPendingGet
               (longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = SocketThreadMgr::GetBytesPending(*(undefined8 *)(param_1 + 0x80));
  *param_2 = uVar1;
  return;
}



// FUNCTION 14355ae70 connectedGet body=29 status=ok
// SIG undefined connectedGet(void)

void Scaleform::GFx::AS3::Instances::fl_net::Socket::connectedGet
               (longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = SocketThreadMgr::IsRunning(*(undefined8 *)(param_1 + 0x80));
  *param_2 = uVar1;
  return;
}



// FUNCTION 14355aea0 FUN_14355aea0 body=124 status=ok
// SIG undefined FUN_14355aea0(void)

void FUN_14355aea0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  char *pcVar2;
  longlong lVar3;
  
  pcVar2 = "littleEndian";
  if ((*(byte *)(param_1 + 0x210) & 0x18) == 0) {
    pcVar2 = "bigEndian";
  }
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (pcVar2[lVar3] != '\0');
  lVar3 = FUN_143360950(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10) + 0x218)
                        ,pcVar2,lVar3,0);
  *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 2;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar3;
  piVar1 = (int *)(lVar3 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar3);
  }
  return;
}



// FUNCTION 14355af30 FUN_14355af30 body=160 status=ok
// SIG undefined FUN_14355af30(void)

void FUN_14355af30(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  char *_Str1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  _Str1 = *(char **)*param_3;
  iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"bigEndian");
  if (iVar3 == 0) {
    *(uint *)(param_1 + 0x210) = *(uint *)(param_1 + 0x210) & 0xffffffe7;
    return;
  }
  iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"littleEndian");
  if (iVar3 == 0) {
    *(uint *)(param_1 + 0x210) = *(uint *)(param_1 + 0x210) & 0xffffffef;
    *(uint *)(param_1 + 0x210) = *(uint *)(param_1 + 0x210) | 8;
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = FUN_1435c8e40(local_18,0x5e4,uVar2);
  FUN_1435cbef0(uVar2,uVar4);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14355b010 localPortGet body=29 status=ok
// SIG undefined localPortGet(void)

void Scaleform::GFx::AS3::Instances::fl_net::Socket::localPortGet
               (longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = UInterpTrackSound::GetNumKeyframes(*(undefined8 *)(param_1 + 0x80));
  *param_2 = uVar1;
  return;
}



// FUNCTION 14355b080 remoteAddressGet body=45 status=ok
// SIG undefined remoteAddressGet(void)

void Scaleform::GFx::AS3::Instances::fl_net::Socket::remoteAddressGet
               (longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FSettingsSection::OnImport(*(undefined8 *)(param_1 + 0x80));
  FUN_1433601c0(param_2,(*puVar1 & 0xfffffffffffffffc) + 0xc);
  return;
}



// FUNCTION 14355b0f0 FUN_14355b0f0 body=29 status=ok
// SIG undefined FUN_14355b0f0(void)

void FUN_14355b0f0(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1435fe050(*(undefined8 *)(param_1 + 0x80));
  *param_2 = uVar1;
  return;
}



// FUNCTION 14355b140 close body=55 status=ok
// SIG int close(int _FileHandle)

int __cdecl Scaleform::GFx::AS3::Instances::fl_net::Socket::close(int _FileHandle)

{
  char cVar1;
  int iVar2;
  undefined4 in_register_0000000c;
  longlong lVar3;
  
  lVar3 = CONCAT44(in_register_0000000c,_FileHandle);
  cVar1 = SocketThreadMgr::IsRunning(*(undefined8 *)(lVar3 + 0x80));
  if (cVar1 == '\0') {
    iVar2 = FUN_14355aa00(lVar3);
    return iVar2;
  }
  iVar2 = FUN_1435fdee0(*(undefined8 *)(lVar3 + 0x80));
  return iVar2;
}



// FUNCTION 14355b1b0 FUN_14355b1b0 body=117 status=ok
// SIG undefined FUN_14355b1b0(void)

void FUN_14355b1b0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = Scaleform::GFx::AS3::SocketThreadMgr::IsRunning(*(undefined8 *)(param_1 + 0x80));
  if (cVar1 == '\0') {
    FUN_14351a780(param_1,"AS3 Net Socket: Attempting to write to closed socket");
    FUN_14355aa00(param_1);
    return;
  }
  iVar2 = FUN_1435fe290(*(undefined8 *)(param_1 + 0x80),param_2,1);
  if (iVar2 != 1) {
    FUN_14355aba0(param_1,"Boolean");
  }
  return;
}



// FUNCTION 14355b230 FUN_14355b230 body=137 status=ok
// SIG undefined FUN_14355b230(void)

void FUN_14355b230(longlong param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  char local_res8 [8];
  
  cVar1 = Scaleform::GFx::AS3::SocketThreadMgr::IsRunning(*(undefined8 *)(param_1 + 0x80));
  if (cVar1 == '\0') {
    FUN_14351a780(param_1,"AS3 Net Socket: Attempting to write to closed socket");
    FUN_14355aa00(param_1);
    return;
  }
  iVar2 = FUN_1435fe290(*(undefined8 *)(param_1 + 0x80),local_res8,1);
  if (iVar2 != 1) {
    FUN_14355aba0(param_1,&DAT_145b38cc4);
    return;
  }
  *param_2 = (int)local_res8[0];
  return;
}



// FUNCTION 14355b2c0 FUN_14355b2c0 body=299 status=ok
// SIG undefined FUN_14355b2c0(void)

void FUN_14355b2c0(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                  uint param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined1 local_418 [1024];
  
  cVar1 = Scaleform::GFx::AS3::SocketThreadMgr::IsRunning(*(undefined8 *)(param_1 + 0x80));
  if (cVar1 == '\0') {
    FUN_14351a780(param_1,"AS3 Net Socket: Attempting to write to closed socket");
    FUN_14355aa00(param_1);
  }
  else if (param_3 != 0) {
    uVar4 = FUN_143590540();
    FUN_143579d90(param_3,uVar4,param_4);
    if (param_5 == 0) {
      do {
        iVar3 = (*(code *)**(undefined8 **)(param_1 + 0x98))(param_1 + 0x98,local_418,0x400);
        if (iVar3 != 0) {
          (*(code *)**(undefined8 **)(param_3 + 0x68))(param_3 + 0x68,local_res8,local_418,iVar3);
        }
      } while (iVar3 == 0x400);
    }
    else {
      do {
        uVar5 = 0x400;
        if (param_5 < 0x400) {
          uVar5 = param_5;
        }
        uVar2 = (*(code *)**(undefined8 **)(param_1 + 0x98))(param_1 + 0x98,local_418,uVar5);
        if (uVar2 != uVar5) {
          FUN_14355aba0(param_1,"Bytes");
          return;
        }
        (*(code *)**(undefined8 **)(param_3 + 0x68))(param_3 + 0x68,local_res8,local_418,uVar5);
        param_5 = param_5 - uVar5;
      } while (param_5 != 0);
    }
  }
  return;
}



// FUNCTION 14355b400 FUN_14355b400 body=152 status=ok
// SIG undefined FUN_14355b400(void)

void FUN_14355b400(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  cVar1 = Scaleform::GFx::AS3::SocketThreadMgr::IsRunning(*(undefined8 *)(param_1 + 0x80));
  if (cVar1 == '\0') {
    FUN_14351a780(param_1,"AS3 Net Socket: Attempting to write to closed socket");
    FUN_14355aa00(param_1);
    return;
  }
  iVar2 = FUN_1435fe290(*(undefined8 *)(param_1 + 0x80),param_2,8);
  if (iVar2 != 8) {
    FUN_14355aba0(param_1,"Double");
    return;
  }
  if (((byte)*(undefined4 *)(param_1 + 0x210) & 0x18) != 8) {
    uVar3 = FUN_143562a40(*param_2);
    *param_2 = uVar3;
  }
  return;
}



// FUNCTION 14355b4a0 FUN_14355b4a0 body=211 status=ok
// SIG undefined FUN_14355b4a0(void)

void FUN_14355b4a0(longlong param_1,double *param_2)

{
  char cVar1;
  int iVar2;
  float local_res8 [2];
  
  cVar1 = Scaleform::GFx::AS3::SocketThreadMgr::IsRunning(*(undefined8 *)(param_1 + 0x80));
  if (cVar1 == '\0') {
    FUN_14351a780(param_1,"AS3 Net Socket: Attempting to write to closed socket");
    FUN_14355aa00(param_1);
    return;
  }
  iVar2 = FUN_1435fe290(*(undefined8 *)(param_1 + 0x80),local_res8,4);
  if (iVar2 != 4) {
    FUN_14355aba0(param_1,"Float");
    return;
  }
  if (((byte)*(undefined4 *)(param_1 + 0x210) & 0x18) != 8) {
    local_res8[0] =
         (float)(((uint)local_res8[0] & 0xff0000 | (uint)local_res8[0] >> 0x10) >> 8 |
                ((uint)local_res8[0] & 0xff00 | (int)local_res8[0] << 0x10) << 8);
  }
  *param_2 = (double)local_res8[0];
  return;
}



// FUNCTION 14355b580 FUN_14355b580 body=145 status=ok
// SIG undefined FUN_14355b580(void)

void FUN_14355b580(longlong param_1,uint *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = Scaleform::GFx::AS3::SocketThreadMgr::IsRunning(*(undefined8 *)(param_1 + 0x80));
  if (cVar2 == '\0') {
    FUN_14351a780(param_1,"AS3 Net Socket: Attempting to write to closed socket");
    FUN_14355aa00(param_1);
    return;
  }
  iVar3 = FUN_1435fe290(*(undefined8 *)(param_1 + 0x80),param_2,4);
  if (iVar3 != 4) {
    FUN_14355aba0(param_1,&DAT_145b38ce4);
    return;
  }
  if (((byte)*(undefined4 *)(param_1 + 0x210) & 0x18) != 8) {
    uVar1 = *param_2;
    *param_2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  }
  return;
}



// FUNCTION 14355b620 FUN_14355b620 body=817 status=ok
// SIG undefined FUN_14355b620(void)

void FUN_14355b620(longlong param_1,longlong *param_2,uint param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  char *pcVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  char *pcVar13;
  undefined *puVar14;
  ulonglong uVar15;
  char *local_458;
  ulonglong local_450;
  undefined1 local_428 [8];
  longlong local_420;
  undefined1 local_418 [1024];
  
  cVar5 = Scaleform::GFx::AS3::SocketThreadMgr::IsRunning(*(undefined8 *)(param_1 + 0x80));
  if (cVar5 == '\0') {
    FUN_14351a780(param_1,"AS3 Net Socket: Attempting to write to closed socket");
    FUN_14355aa00(param_1);
  }
  else {
    FUN_1432c5960(&local_458,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x48));
    Scaleform::StringBuffer::Reserve(&local_458,param_3);
    pcVar13 = local_458;
    for (uVar12 = param_3; uVar12 != 0; uVar12 = uVar12 - uVar10) {
      uVar10 = 0x400;
      if (uVar12 < 0x400) {
        uVar10 = uVar12;
      }
      local_458 = pcVar13;
      uVar6 = (*(code *)**(undefined8 **)(param_1 + 0x98))(param_1 + 0x98,local_418,uVar10);
      if (uVar6 != uVar10) {
        FUN_14355aba0(param_1,"Bytes");
        goto LAB_14355b827;
      }
      Scaleform::StringBuffer::AppendString(&local_458,local_418,uVar10);
      pcVar13 = local_458;
    }
    lVar4 = *(longlong *)(param_1 + 0x40);
    uVar11 = 0;
    if (PTR_s_us_ascii_1467d71f0 != (undefined *)0x0) {
      puVar14 = PTR_s_us_ascii_1467d71f0;
      uVar15 = uVar11;
      do {
        pcVar7 = *(char **)*param_4;
        do {
          cVar5 = *pcVar7;
          cVar3 = pcVar7[(longlong)puVar14 - (longlong)*(char **)*param_4];
          if (cVar5 != cVar3) break;
          pcVar7 = pcVar7 + 1;
        } while (cVar3 != '\0');
        if (cVar5 == cVar3) {
          pcVar7 = "";
          if (pcVar13 != (char *)0x0) {
            pcVar7 = pcVar13;
          }
          local_420 = FUN_143360a90(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),pcVar7,
                                    local_450);
          goto LAB_14355b925;
        }
        uVar15 = (ulonglong)((int)uVar15 + 1);
        puVar14 = (&PTR_s_us_ascii_1467d71f0)[uVar15];
      } while (puVar14 != (undefined *)0x0);
    }
    if (PTR_s_utf_8_1467d7098 != (undefined *)0x0) {
      puVar14 = PTR_s_utf_8_1467d7098;
      uVar15 = uVar11;
      do {
        pcVar7 = *(char **)*param_4;
        do {
          cVar5 = *pcVar7;
          cVar3 = pcVar7[(longlong)puVar14 - (longlong)*(char **)*param_4];
          if (cVar5 != cVar3) break;
          pcVar7 = pcVar7 + 1;
        } while (cVar3 != '\0');
        if (cVar5 == cVar3) {
          if ((param_3 < 3) || (local_450 < 3)) {
LAB_14355b8cb:
            if (pcVar13 == (char *)0x0) goto LAB_14355b8d0;
          }
          else {
            if (pcVar13 != (char *)0x0) {
              if (((*pcVar13 == -0x11) && (uVar11 = 0, pcVar13[1] == -0x45)) &&
                 (pcVar13[2] == -0x41)) {
                uVar11 = 3;
              }
              goto LAB_14355b8cb;
            }
LAB_14355b8d0:
            pcVar13 = "";
          }
          lVar4 = *(longlong *)(lVar4 + 0x10);
          lVar9 = Scaleform::StringBuffer::GetLength(&local_458);
          local_420 = FUN_143360a90(*(undefined8 *)(lVar4 + 0x218),pcVar13 + uVar11,lVar9 - uVar11);
          goto LAB_14355b925;
        }
        uVar15 = (ulonglong)((int)uVar15 + 1);
        puVar14 = (&PTR_s_utf_8_1467d7098)[uVar15];
      } while (puVar14 != (undefined *)0x0);
    }
    if (PTR_s_unicode_1467d7248 != (undefined *)0x0) {
      puVar14 = PTR_s_unicode_1467d7248;
LAB_14355b7c0:
      pcVar7 = *(char **)*param_4;
      do {
        cVar5 = *pcVar7;
        cVar3 = pcVar7[(longlong)puVar14 - (longlong)*(char **)*param_4];
        if (cVar5 != cVar3) break;
        pcVar7 = pcVar7 + 1;
      } while (cVar3 != '\0');
      if (cVar5 != cVar3) goto code_r0x00014355b7eb;
      pcVar7 = "";
      if (pcVar13 != (char *)0x0) {
        pcVar7 = pcVar13;
      }
      local_420 = FUN_143360fd0(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),pcVar7,
                                local_450);
LAB_14355b925:
      *(int *)(local_420 + 0x18) = *(int *)(local_420 + 0x18) + 2;
      piVar1 = (int *)(*param_2 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *param_2 = local_420;
      piVar1 = (int *)(local_420 + 0x18);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      goto joined_r0x00014355b943;
    }
LAB_14355b7fa:
    uVar8 = FUN_1435c8e40(local_428,0x5e4,lVar4);
    FUN_1435cbe70(lVar4,uVar8);
    piVar1 = (int *)(local_420 + 0x18);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
joined_r0x00014355b943:
    if (iVar2 == 0) {
      FUN_14335f920(local_420);
    }
LAB_14355b827:
    Scaleform::StringBuffer::~StringBuffer(&local_458);
  }
  return;
code_r0x00014355b7eb:
  uVar11 = (ulonglong)((int)uVar11 + 1);
  puVar14 = (&PTR_s_unicode_1467d7248)[uVar11];
  if (puVar14 == (undefined *)0x0) goto LAB_14355b7fa;
  goto LAB_14355b7c0;
}



// FUNCTION 14355b960 FUN_14355b960 body=29 status=ok
// SIG undefined FUN_14355b960(void)

void FUN_14355b960(longlong param_1,undefined8 param_2)

{
  undefined1 local_res8 [32];
  
  FUN_1435dd7a0(param_1 + 0x170,local_res8,param_2);
  return;
}



// FUNCTION 14355b990 FUN_14355b990 body=187 status=ok
// SIG undefined FUN_14355b990(void)

void FUN_14355b990(longlong param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  ushort local_res8 [4];
  
  cVar1 = Scaleform::GFx::AS3::SocketThreadMgr::IsRunning(*(undefined8 *)(param_1 + 0x80));
  if (cVar1 == '\0') {
    FUN_14351a780(param_1,"AS3 Net Socket: Attempting to write to closed socket");
    FUN_14355aa00(param_1);
    return;
  }
  iVar2 = FUN_1435fe290(*(undefined8 *)(param_1 + 0x80),local_res8,2);
  if (iVar2 != 2) {
    FUN_14355aba0(param_1,"Short");
    return;
  }
  if (((byte)*(undefined4 *)(param_1 + 0x210) & 0x18) != 8) {
    *param_2 = (int)(short)(local_res8[0] >> 8 | local_res8[0] << 8);
    return;
  }
  *param_2 = (int)(short)local_res8[0];
  return;
}



// FUNCTION 14355ba60 FUN_14355ba60 body=137 status=ok
// SIG undefined FUN_14355ba60(void)

void FUN_14355ba60(longlong param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  byte local_res8 [8];
  
  cVar1 = Scaleform::GFx::AS3::SocketThreadMgr::IsRunning(*(undefined8 *)(param_1 + 0x80));
  if (cVar1 == '\0') {
    FUN_14351a780(param_1,"AS3 Net Socket: Attempting to write to closed socket");
    FUN_14355aa00(param_1);
    return;
  }
  iVar2 = FUN_1435fe290(*(undefined8 *)(param_1 + 0x80),local_res8,1);
  if (iVar2 != 1) {
    FUN_14355aba0(param_1,"Unsigned Byte");
    return;
  }
  *param_2 = (uint)local_res8[0];
  return;
}



// FUNCTION 14355baf0 FUN_14355baf0 body=145 status=ok
// SIG undefined FUN_14355baf0(void)

void FUN_14355baf0(longlong param_1,uint *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = Scaleform::GFx::AS3::SocketThreadMgr::IsRunning(*(undefined8 *)(param_1 + 0x80));
  if (cVar2 == '\0') {
    FUN_14351a780(param_1,"AS3 Net Socket: Attempting to write to closed socket");
    FUN_14355aa00(param_1);
    return;
  }
  iVar3 = FUN_1435fe290(*(undefined8 *)(param_1 + 0x80),param_2,4);
  if (iVar3 != 4) {
    FUN_14355aba0(param_1,&DAT_145b38ce4);
    return;
  }
  if (((byte)*(undefined4 *)(param_1 + 0x210) & 0x18) != 8) {
    uVar1 = *param_2;
    *param_2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  }
  return;
}



// FUNCTION 14355bb90 FUN_14355bb90 body=187 status=ok
// SIG undefined FUN_14355bb90(void)

void FUN_14355bb90(longlong param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  ushort local_res8 [4];
  
  cVar1 = Scaleform::GFx::AS3::SocketThreadMgr::IsRunning(*(undefined8 *)(param_1 + 0x80));
  if (cVar1 == '\0') {
    FUN_14351a780(param_1,"AS3 Net Socket: Attempting to write to closed socket");
    FUN_14355aa00(param_1);
    return;
  }
  iVar2 = FUN_1435fe290(*(undefined8 *)(param_1 + 0x80),local_res8,2);
  if (iVar2 != 2) {
    FUN_14355aba0(param_1,"Unsigned Short");
    return;
  }
  if (((byte)*(undefined4 *)(param_1 + 0x210) & 0x18) != 8) {
    *param_2 = (int)(short)(local_res8[0] >> 8 | local_res8[0] << 8);
    return;
  }
  *param_2 = (int)(short)local_res8[0];
  return;
}



// FUNCTION 14355bc60 FUN_14355bc60 body=175 status=ok
// SIG undefined FUN_14355bc60(void)

void FUN_14355bc60(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined1 local_res8 [8];
  ushort local_res18 [8];
  
  cVar1 = Scaleform::GFx::AS3::SocketThreadMgr::IsRunning(*(undefined8 *)(param_1 + 0x80));
  if (cVar1 == '\0') {
    FUN_14351a780(param_1,"AS3 Net Socket: Attempting to write to closed socket");
    FUN_14355aa00(param_1);
    return;
  }
  iVar2 = FUN_1435fe290(*(undefined8 *)(param_1 + 0x80),local_res18,2);
  if (iVar2 == 2) {
    if (((byte)*(undefined4 *)(param_1 + 0x210) & 0x18) != 8) {
      local_res18[0] = local_res18[0] << 8 | local_res18[0] >> 8;
    }
    pcVar3 = (char *)(**(code **)(*(longlong *)(param_1 + 0x98) + 8))
                               ((longlong *)(param_1 + 0x98),local_res8,param_2,local_res18[0]);
    if (*pcVar3 != '\0') {
      return;
    }
  }
  FUN_14355aba0(param_1,&DAT_145b38d10);
  return;
}



// FUNCTION 14355bd20 FUN_14355bd20 body=138 status=ok
// SIG undefined FUN_14355bd20(void)

void FUN_14355bd20(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  
  cVar1 = Scaleform::GFx::AS3::SocketThreadMgr::IsRunning(*(undefined8 *)(param_1 + 0x80));
  if (cVar1 == '\0') {
    FUN_14351a780(param_1,"AS3 Net Socket: Attempting to write to closed socket");
    FUN_14355aa00(param_1);
    return;
  }
  pcVar2 = (char *)(**(code **)(*(longlong *)(param_1 + 0x98) + 8))
                             ((longlong *)(param_1 + 0x98),local_res8,param_2,param_3);
  if (*pcVar2 == '\0') {
    FUN_14355aba0(param_1,"UTF Bytes");
  }
  return;
}



// FUNCTION 14355bdb0 FUN_14355bdb0 body=110 status=ok
// SIG undefined FUN_14355bdb0(void)

void FUN_14355bdb0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  char cVar1;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  
  cVar1 = Scaleform::GFx::AS3::SocketThreadMgr::IsRunning(*(undefined8 *)(param_1 + 0x80));
  if (cVar1 == '\0') {
    FUN_14351a780(param_1,"AS3 Net Socket: Attempting to write to closed socket");
    FUN_14355aa00(param_1);
    return;
  }
  local_res8[0] = param_3;
  (*(code *)**(undefined8 **)(param_1 + 0x88))
            ((undefined8 *)(param_1 + 0x88),local_res20,local_res8,1);
  return;
}



// FUNCTION 14355be30 FUN_14355be30 body=109 status=ok
// SIG undefined FUN_14355be30(void)

void FUN_14355be30(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  char cVar1;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  
  cVar1 = Scaleform::GFx::AS3::SocketThreadMgr::IsRunning(*(undefined8 *)(param_1 + 0x80));
  if (cVar1 == '\0') {
    FUN_14351a780(param_1,"AS3 Net Socket: Attempting to write to closed socket");
    FUN_14355aa00(param_1);
    return;
  }
  local_res8[0] = param_3;
  (*(code *)**(undefined8 **)(param_1 + 0x88))
            ((undefined8 *)(param_1 + 0x88),local_res20,local_res8,1);
  return;
}



// FUNCTION 14355beb0 FUN_14355beb0 body=224 status=ok
// SIG undefined FUN_14355beb0(void)

void FUN_14355beb0(longlong param_1,undefined8 param_2,longlong param_3,uint param_4,uint param_5)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 local_res8 [8];
  undefined1 local_18 [8];
  longlong local_10;
  
  cVar4 = Scaleform::GFx::AS3::SocketThreadMgr::IsRunning(*(undefined8 *)(param_1 + 0x80));
  if (cVar4 == '\0') {
    FUN_14351a780(param_1,"AS3 Net Socket: Attempting to write to closed socket");
    FUN_14355aa00(param_1);
    return;
  }
  if (param_3 != 0) {
    uVar2 = *(uint *)(param_3 + 0x48);
    if (uVar2 < param_4) {
      param_4 = uVar2;
    }
    if (param_5 == 0) {
      param_5 = uVar2 - param_4;
    }
    if (uVar2 - param_4 < param_5) {
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      uVar5 = FUN_1435c8e40(local_18,0x7d6,uVar3);
      FUN_1435cbdf0(uVar3,uVar5);
      piVar1 = (int *)(local_10 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
        return;
      }
    }
    else if (param_5 != 0) {
      (*(code *)**(undefined8 **)(param_1 + 0x88))
                ((undefined8 *)(param_1 + 0x88),local_res8,
                 (ulonglong)param_4 + *(longlong *)(param_3 + 0x50));
    }
  }
  return;
}



// FUNCTION 14355bfa0 FUN_14355bfa0 body=122 status=ok
// SIG undefined FUN_14355bfa0(void)

void FUN_14355bfa0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 local_res8 [16];
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  cVar1 = Scaleform::GFx::AS3::SocketThreadMgr::IsRunning(*(undefined8 *)(param_1 + 0x80));
  if (cVar1 == '\0') {
    FUN_14351a780(param_1,"AS3 Net Socket: Attempting to write to closed socket");
    FUN_14355aa00(param_1);
    return;
  }
  if (((byte)*(undefined4 *)(param_1 + 0x210) & 0x18) != 8) {
    local_res18[0] = FUN_143562a40(local_res18[0]);
  }
  (*(code *)**(undefined8 **)(param_1 + 0x88))
            ((undefined8 *)(param_1 + 0x88),local_res8,local_res18,8);
  return;
}



// FUNCTION 14355c020 FUN_14355c020 body=180 status=ok
// SIG undefined FUN_14355c020(void)

void FUN_14355c020(longlong param_1,undefined8 param_2,double param_3)

{
  char cVar1;
  float fVar2;
  float local_res8 [6];
  float local_res20 [2];
  
  cVar1 = Scaleform::GFx::AS3::SocketThreadMgr::IsRunning(*(undefined8 *)(param_1 + 0x80));
  if (cVar1 == '\0') {
    FUN_14351a780(param_1,"AS3 Net Socket: Attempting to write to closed socket");
    FUN_14355aa00(param_1);
    return;
  }
  fVar2 = (float)param_3;
  local_res20[0] = fVar2;
  if (((byte)*(undefined4 *)(param_1 + 0x210) & 0x18) != 8) {
    local_res20[0] =
         (float)(((uint)fVar2 & 0xff0000 | (uint)fVar2 >> 0x10) >> 8 |
                ((uint)fVar2 & 0xff00 | (int)fVar2 << 0x10) << 8);
    local_res8[0] = fVar2;
  }
  (*(code *)**(undefined8 **)(param_1 + 0x88))
            ((undefined8 *)(param_1 + 0x88),local_res8,local_res20,4);
  return;
}



// FUNCTION 14355c0e0 FUN_14355c0e0 body=147 status=ok
// SIG undefined FUN_14355c0e0(void)

void FUN_14355c0e0(longlong param_1,undefined8 param_2,uint param_3)

{
  char cVar1;
  undefined1 local_res8 [16];
  uint local_res18 [4];
  
  local_res18[0] = param_3;
  cVar1 = Scaleform::GFx::AS3::SocketThreadMgr::IsRunning(*(undefined8 *)(param_1 + 0x80));
  if (cVar1 == '\0') {
    FUN_14351a780(param_1,"AS3 Net Socket: Attempting to write to closed socket");
    FUN_14355aa00(param_1);
    return;
  }
  if (((byte)*(undefined4 *)(param_1 + 0x210) & 0x18) != 8) {
    local_res18[0] =
         (local_res18[0] & 0xff0000 | local_res18[0] >> 0x10) >> 8 |
         (local_res18[0] & 0xff00 | local_res18[0] << 0x10) << 8;
  }
  (*(code *)**(undefined8 **)(param_1 + 0x88))
            ((undefined8 *)(param_1 + 0x88),local_res8,local_res18,4);
  return;
}



// FUNCTION 14355c180 FUN_14355c180 body=469 status=ok
// SIG undefined FUN_14355c180(void)

void FUN_14355c180(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  char cVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined *puVar8;
  ulonglong uVar9;
  undefined1 local_res8 [8];
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  cVar4 = Scaleform::GFx::AS3::SocketThreadMgr::IsRunning(*(undefined8 *)(param_1 + 0x80));
  if (cVar4 == '\0') {
    FUN_14351a780(param_1,"AS3 Net Socket: Attempting to write to closed socket");
    FUN_14355aa00(param_1);
    return;
  }
  uVar7 = 0;
  if (PTR_s_utf_8_1467d7098 != (undefined *)0x0) {
    puVar8 = PTR_s_utf_8_1467d7098;
    uVar9 = uVar7;
    do {
      pcVar5 = *(char **)*param_4;
      do {
        cVar4 = *pcVar5;
        cVar2 = pcVar5[(longlong)puVar8 - (longlong)*(char **)*param_4];
        if (cVar4 != cVar2) break;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      if (cVar4 == cVar2) {
        (*(code *)**(undefined8 **)(param_1 + 0x88))
                  ((undefined8 *)(param_1 + 0x88),local_res8,*(undefined8 *)*param_3,
                   *(undefined4 *)((undefined8 *)*param_3 + 4));
        return;
      }
      uVar9 = (ulonglong)((int)uVar9 + 1);
      puVar8 = (&PTR_s_utf_8_1467d7098)[uVar9];
    } while (puVar8 != (undefined *)0x0);
  }
  if (PTR_s_unicode_1467d7248 != (undefined *)0x0) {
    puVar8 = PTR_s_unicode_1467d7248;
    do {
      pcVar5 = *(char **)*param_4;
      do {
        cVar4 = *pcVar5;
        cVar2 = pcVar5[(longlong)puVar8 - (longlong)*(char **)*param_4];
        if (cVar4 != cVar2) break;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      if (cVar4 == cVar2) {
        local_28 = 0;
        local_20 = 0;
        local_18 = 0;
        local_10 = 0;
        FUN_143392800(&local_28,*(undefined8 *)*param_3,*(undefined4 *)((undefined8 *)*param_3 + 4))
        ;
        if ((ulonglong)(local_20 * 2) < 0x100000000) {
          (*(code *)**(undefined8 **)(param_1 + 0x88))
                    ((undefined8 *)(param_1 + 0x88),local_res8,local_28,(int)local_20 * 2);
        }
        Scaleform::WStringBuffer::~WStringBuffer(&local_28);
        return;
      }
      uVar7 = (ulonglong)((int)uVar7 + 1);
      puVar8 = (&PTR_s_unicode_1467d7248)[uVar7];
    } while (puVar8 != (undefined *)0x0);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar6 = FUN_1435c8e40(&local_28,0x5e4,uVar3);
  FUN_1435cbe70(uVar3,uVar6);
  piVar1 = (int *)(local_20 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14355c360 FUN_14355c360 body=26 status=ok
// SIG undefined FUN_14355c360(void)

void FUN_14355c360(longlong param_1)

{
  undefined1 local_res8 [32];
  
  FUN_1435dfb90(param_1 + 0xa8,local_res8);
  return;
}



// FUNCTION 14355c380 FUN_14355c380 body=140 status=ok
// SIG undefined FUN_14355c380(void)

void FUN_14355c380(longlong param_1,undefined8 param_2,ushort param_3)

{
  char cVar1;
  undefined1 local_res8 [8];
  ushort local_res20 [4];
  
  cVar1 = Scaleform::GFx::AS3::SocketThreadMgr::IsRunning(*(undefined8 *)(param_1 + 0x80));
  if (cVar1 == '\0') {
    FUN_14351a780(param_1,"AS3 Net Socket: Attempting to write to closed socket");
    FUN_14355aa00(param_1);
    return;
  }
  local_res20[0] = param_3;
  if (((byte)*(undefined4 *)(param_1 + 0x210) & 0x18) != 8) {
    local_res20[0] = param_3 >> 8 | param_3 << 8;
  }
  (*(code *)**(undefined8 **)(param_1 + 0x88))
            ((undefined8 *)(param_1 + 0x88),local_res8,local_res20,2);
  return;
}



// FUNCTION 14355c420 FUN_14355c420 body=147 status=ok
// SIG undefined FUN_14355c420(void)

void FUN_14355c420(longlong param_1,undefined8 param_2,uint param_3)

{
  char cVar1;
  undefined1 local_res8 [16];
  uint local_res18 [4];
  
  local_res18[0] = param_3;
  cVar1 = Scaleform::GFx::AS3::SocketThreadMgr::IsRunning(*(undefined8 *)(param_1 + 0x80));
  if (cVar1 == '\0') {
    FUN_14351a780(param_1,"AS3 Net Socket: Attempting to write to closed socket");
    FUN_14355aa00(param_1);
    return;
  }
  if (((byte)*(undefined4 *)(param_1 + 0x210) & 0x18) != 8) {
    local_res18[0] =
         (local_res18[0] & 0xff0000 | local_res18[0] >> 0x10) >> 8 |
         (local_res18[0] & 0xff00 | local_res18[0] << 0x10) << 8;
  }
  (*(code *)**(undefined8 **)(param_1 + 0x88))
            ((undefined8 *)(param_1 + 0x88),local_res8,local_res18,4);
  return;
}



// FUNCTION 14355c4c0 FUN_14355c4c0 body=222 status=ok
// SIG undefined FUN_14355c4c0(void)

void FUN_14355c4c0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  undefined2 local_res20 [4];
  undefined1 local_18 [8];
  longlong local_10;
  
  cVar3 = Scaleform::GFx::AS3::SocketThreadMgr::IsRunning(*(undefined8 *)(param_1 + 0x80));
  if (cVar3 == '\0') {
    FUN_14351a780(param_1,"AS3 Net Socket: Attempting to write to closed socket");
    FUN_14355aa00(param_1);
    return;
  }
  if (*(uint *)(*param_3 + 0x20) < 0x10000) {
    local_res20[0] = *(undefined2 *)(*param_3 + 0x20);
    (*(code *)**(undefined8 **)(param_1 + 0x88))(param_1 + 0x88,local_res8,local_res20,2);
    (*(code *)**(undefined8 **)(param_1 + 0x88))
              (param_1 + 0x88,local_res8,*(undefined8 *)*param_3,local_res20[0]);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    uVar4 = FUN_1435c8e40(local_18,0x3e9,uVar2);
    FUN_1435cbdf0(uVar2,uVar4);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  return;
}



// FUNCTION 14355c5b0 FUN_14355c5b0 body=103 status=ok
// SIG undefined FUN_14355c5b0(void)

void FUN_14355c5b0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  undefined1 local_res8 [8];
  
  cVar1 = Scaleform::GFx::AS3::SocketThreadMgr::IsRunning(*(undefined8 *)(param_1 + 0x80));
  if (cVar1 == '\0') {
    FUN_14351a780(param_1,"AS3 Net Socket: Attempting to write to closed socket");
    FUN_14355aa00(param_1);
    return;
  }
  (*(code *)**(undefined8 **)(param_1 + 0x88))
            ((undefined8 *)(param_1 + 0x88),local_res8,*(undefined8 *)*param_3,
             *(undefined4 *)((undefined8 *)*param_3 + 4));
  return;
}



// FUNCTION 14355c620 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b38b98;
  return param_1;
}



// FUNCTION 14355c650 FUN_14355c650 body=141 status=ok
// SIG undefined FUN_14355c650(void)

void FUN_14355c650(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  lVar1 = FUN_1435b5bc0(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_14355a580(lVar1,param_3);
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,uVar2);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 14355c6f0 FUN_14355c6f0 body=33 status=ok
// SIG undefined FUN_14355c6f0(void)

undefined8 * FUN_14355c6f0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14355c720 FUN_14355c720 body=214 status=ok
// SIG undefined FUN_14355c720(void)

undefined8 * FUN_14355c720(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b36f88);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar2,param_2,&PTR_DAT_145b36f88);
    *puVar2 = &PTR_FUN_145b38b98;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14355c800 FUN_14355c800 body=106 status=ok
// SIG undefined FUN_14355c800(void)

undefined8 * FUN_14355c800(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  FUN_143519560();
  *param_1 = &PTR_FUN_145b38db0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[0x15] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  FUN_1433601c0(param_1 + 0x15,&DAT_145b0907c);
  return param_1;
}



// FUNCTION 14355c870 FUN_14355c870 body=168 status=ok
// SIG undefined FUN_14355c870(void)

void FUN_14355c870(longlong param_1)

{
  int *piVar1;
  char cVar2;
  ulonglong local_res8;
  longlong local_res10 [3];
  
  local_res10[0] = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x300) + 0x2f8);
  *(int *)(local_res10[0] + 0x18) = *(int *)(local_res10[0] + 0x18) + 1;
  cVar2 = FUN_14351a530(param_1,local_res10,0);
  if (cVar2 != '\0') {
    Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::CreateEventObject
              (param_1,&local_res8,local_res10,0,0);
    FUN_1434f0700(local_res8 + 0x50,param_1);
    FUN_14351af40(param_1,local_res8,0);
    if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
       ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
      FUN_1434ef880();
    }
  }
  piVar1 = (int *)(local_res10[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14355c920 FUN_14355c920 body=214 status=ok
// SIG undefined FUN_14355c920(void)

void FUN_14355c920(longlong param_1,uint param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  ulonglong local_res8;
  longlong local_res20;
  
  local_res20 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x300) + 0x2e0);
  *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
  cVar2 = FUN_14351a530(param_1,&local_res20,0);
  if (cVar2 != '\0') {
    *(uint *)(param_1 + 0x80) = param_2;
    *(uint *)(param_1 + 0x84) = param_3;
    FUN_143519770(param_1,&local_res8,&local_res20);
    FUN_1434f0700(local_res8 + 0x50,param_1);
    *(ulonglong *)(local_res8 + 0x60) = (ulonglong)param_2;
    *(ulonglong *)(local_res8 + 0x68) = (ulonglong)param_3;
    FUN_14351af40(param_1,local_res8,0);
    if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
       ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
      FUN_1434ef880();
    }
  }
  piVar1 = (int *)(local_res20 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14355ca00 FUN_14355ca00 body=168 status=ok
// SIG undefined FUN_14355ca00(void)

void FUN_14355ca00(longlong param_1)

{
  int *piVar1;
  char cVar2;
  ulonglong local_res8;
  longlong local_res10 [3];
  
  local_res10[0] = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x300) + 0x2d8);
  *(int *)(local_res10[0] + 0x18) = *(int *)(local_res10[0] + 0x18) + 1;
  cVar2 = FUN_14351a530(param_1,local_res10,0);
  if (cVar2 != '\0') {
    Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::CreateEventObject
              (param_1,&local_res8,local_res10,0,0);
    FUN_1434f0700(local_res8 + 0x50,param_1);
    FUN_14351af40(param_1,local_res8,0);
    if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
       ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
      FUN_1434ef880();
    }
  }
  piVar1 = (int *)(local_res10[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14355cab0 IsLoadingVariables body=36 status=ok
// SIG undefined IsLoadingVariables(void)

bool Scaleform::GFx::AS3::Instances::fl_net::URLLoader::IsLoadingVariables(longlong param_1)

{
  int iVar1;
  
  iVar1 = ::_guard_xfg_dispatch_icall_nop((char *)**(undefined8 **)(param_1 + 0xa8),"variables");
  return iVar1 == 0;
}



// FUNCTION 14355cae0 FUN_14355cae0 body=60 status=ok
// SIG undefined FUN_14355cae0(void)

undefined8 FUN_14355cae0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar2 = 0;
  do {
    lVar3 = lVar2;
    cVar1 = *(char *)(**(longlong **)(param_1 + 0xa8) + lVar3);
    bVar4 = cVar1 == (&DAT_145b0907c)[lVar3];
    if (!bVar4) goto LAB_14355cb18;
    lVar2 = lVar3 + 1;
  } while (lVar3 + 1 != 5);
  bVar4 = cVar1 == (&DAT_145b0907c)[lVar3];
LAB_14355cb18:
  return CONCAT71(0x145b090,bVar4);
}



// FUNCTION 14355cb30 FUN_14355cb30 body=60 status=ok
// SIG undefined FUN_14355cb30(void)

undefined8 FUN_14355cb30(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar2 = 0;
  do {
    lVar3 = lVar2;
    cVar1 = *(char *)(**(longlong **)(param_1 + 0xa8) + lVar3);
    bVar4 = cVar1 == "binary"[lVar3];
    if (!bVar4) goto LAB_14355cb68;
    lVar2 = lVar3 + 1;
  } while (lVar3 + 1 != 7);
  bVar4 = cVar1 == "binary"[lVar3];
LAB_14355cb68:
  return CONCAT71(0x145b390,bVar4);
}



// FUNCTION 14355cb80 FUN_14355cb80 body=364 status=ok
// SIG undefined FUN_14355cb80(void)

void FUN_14355cb80(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong local_res8;
  longlong local_res18 [2];
  char *local_48;
  undefined8 local_40;
  uint local_38 [8];
  
  lVar2 = *(longlong *)(param_1 + 0x40);
  local_48 = "flash.net.URLVariables";
  local_40 = 0x16;
  uVar4 = FUN_1435cc580(lVar2,&local_48,*(undefined8 *)(lVar2 + 0x1c8));
  if (uVar4 != 0) {
    *(uint *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1U & 0x8fffffff;
  }
  local_res18[0] =
       FUN_143360a60(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10) + 0x218),
                     param_2);
  *(int *)(local_res18[0] + 0x18) = *(int *)(local_res18[0] + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_38,local_res18);
  local_res8 = 0;
  cVar3 = FUN_1435e8720(lVar2,&local_res8,uVar4,1,local_38);
  if (cVar3 != '\0') {
    FUN_1435903c0(param_1 + 0x88,local_res8);
  }
  if (local_res8 != 0) {
    if ((local_res8 & 1) == 0) {
      if ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0) {
        *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      local_res8 = local_res8 - 1;
    }
  }
  if (9 < ((byte)local_38[0] & 0x1f)) {
    if ((local_38[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_38);
    }
    else {
      FUN_143592150();
    }
  }
  piVar1 = (int *)(local_res18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (((uVar4 != 0) && ((uVar4 & 1) == 0)) && ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
    FUN_1434ef880(uVar4);
  }
  return;
}



// FUNCTION 14355cd00 FUN_14355cd00 body=127 status=ok
// SIG undefined FUN_14355cd00(void)

void FUN_14355cd00(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong local_res8 [4];
  uint local_28 [8];
  
  local_res8[0] =
       FUN_143360a60(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10) + 0x218));
  *(int *)(local_res8[0] + 0x18) = *(int *)(local_res8[0] + 0x18) + 1;
  uVar2 = Scaleform::GFx::AS3::Value::Value(local_28,local_res8);
  FUN_143590140(param_1 + 0x88,uVar2);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_28);
    }
    else {
      FUN_143592150();
    }
  }
  piVar1 = (int *)(local_res8[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14355cd90 FUN_14355cd90 body=117 status=ok
// SIG undefined FUN_14355cd90(void)

void FUN_14355cd90(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  undefined1 local_res8 [8];
  
  puVar2 = (ulonglong *)FUN_1435ca890(*(undefined8 *)(param_1 + 0x40),local_res8);
  uVar1 = *puVar2;
  FUN_143579840(uVar1,*param_2,param_2[1]);
  FUN_1435903c0(param_1 + 0x88,uVar1);
  if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
    FUN_1434ef880(uVar1);
  }
  return;
}



// FUNCTION 14355ce10 FUN_14355ce10 body=434 status=ok
// SIG undefined FUN_14355ce10(void)

void FUN_14355ce10(longlong *param_1,int param_2,uint *param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  bool bVar4;
  undefined1 local_res10 [16];
  longlong local_res20;
  uint local_88 [2];
  undefined8 local_80;
  uint local_68 [8];
  undefined1 local_48 [8];
  ulonglong local_40;
  uint local_38 [8];
  
  if (param_2 == 0) {
    return;
  }
  uVar3 = *param_3 & 0x1f;
  if (uVar3 == 0) {
    return;
  }
  if (uVar3 == 0xc) {
    bVar4 = *(longlong *)(param_3 + 4) == 0;
  }
  else {
    if (uVar3 != 10) goto LAB_14355ce62;
    bVar4 = *(longlong *)(param_3 + 4) == *(longlong *)(*(longlong *)(param_3 + 4) + 8) + 0x80;
  }
  if (bVar4) {
    return;
  }
LAB_14355ce62:
  lVar2 = param_1[8];
  local_88[0] = 0;
  local_80 = 0;
  local_res20 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 0x218),&DAT_145b08e04,4)
  ;
  *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_68,&local_res20);
  FUN_1435ae6b0(local_48,*(undefined8 *)(lVar2 + 0x1d8),local_68);
  if (9 < ((byte)local_68[0] & 0x1f)) {
    if ((local_68[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_68);
    }
    else {
      FUN_143592150();
    }
  }
  piVar1 = (int *)(local_res20 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  (**(code **)(*param_1 + 0x58))(param_1,local_res10,local_48,local_88,param_2,param_3);
  if (9 < ((byte)local_38[0] & 0x1f)) {
    if ((local_38[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_38);
    }
    else {
      FUN_143592150();
    }
  }
  if (local_40 != 0) {
    if ((local_40 & 1) == 0) {
      if ((*(uint *)(local_40 + 8) & 0x3fffff) != 0) {
        *(uint *)(local_40 + 8) = *(uint *)(local_40 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      local_40 = local_40 - 1;
    }
  }
  if (9 < ((byte)local_88[0] & 0x1f)) {
    if ((local_88[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_88);
  }
  return;
}



// FUNCTION 14355d020 FUN_14355d020 body=384 status=ok
// SIG undefined FUN_14355d020(void)

void FUN_14355d020(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  longlong local_res8;
  
  lVar10 = 0;
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x300);
  lVar4 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_3 + 0x28) + 0x98) + 0x10) + 0x218);
  local_res8 = lVar4 + 0x48;
  *(int *)(lVar4 + 0x60) = *(int *)(lVar4 + 0x60) + 1;
  lVar7 = *(longlong *)(param_3 + 0x68);
  piVar1 = (int *)(lVar7 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(lVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = lVar7;
  plVar5 = (longlong *)FUN_14335fe70(&local_res8);
  *(int *)(plVar5 + 3) = (int)plVar5[3] + 1;
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  lVar4 = *plVar5;
  lVar7 = lVar10;
  do {
    lVar6 = lVar7 + 1;
    lVar8 = lVar10;
    if (*(char *)(lVar4 + lVar7) != (&DAT_145b250c4)[lVar7]) goto LAB_14355d0f0;
    lVar7 = lVar6;
  } while (lVar6 != 4);
  iVar9 = 1;
  goto LAB_14355d16e;
  while (lVar8 = lVar6 + 1, lVar6 + 1 != 5) {
LAB_14355d0f0:
    lVar6 = lVar8;
    lVar7 = lVar10;
    if (*(char *)(lVar4 + lVar6) != (&DAT_145b250c8)[lVar6]) goto LAB_14355d120;
  }
  iVar9 = (int)lVar6 + -2;
  goto LAB_14355d16e;
  while (lVar7 = lVar8, lVar8 != 4) {
LAB_14355d120:
    lVar8 = lVar7 + 1;
    if (*(char *)(lVar4 + lVar7) != (&DAT_145b250d0)[lVar7]) goto LAB_14355d150;
  }
  iVar9 = 3;
  goto LAB_14355d16e;
  while (lVar10 = lVar7 + 1, lVar7 + 1 != 7) {
LAB_14355d150:
    lVar7 = lVar10;
    bVar11 = *(char *)(lVar4 + lVar7) == "DELETE"[lVar7];
    if (!bVar11) goto LAB_14355d16a;
  }
  bVar11 = *(char *)(lVar4 + lVar7) == "DELETE"[lVar7];
LAB_14355d16a:
  iVar9 = 0;
  if (bVar11) {
    iVar9 = 4;
  }
LAB_14355d16e:
  FUN_1435ea6d0(uVar3,param_3,param_1,iVar9);
  plVar2 = plVar5 + 3;
  *(int *)plVar2 = (int)*plVar2 + -1;
  if ((int)*plVar2 == 0) {
    FUN_14335f920(plVar5);
  }
  return;
}



// FUNCTION 14355d1b0 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b38e80;
  return param_1;
}



// FUNCTION 14355d1e0 FUN_14355d1e0 body=141 status=ok
// SIG undefined FUN_14355d1e0(void)

void FUN_14355d1e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  lVar1 = FUN_1435b5bc0(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_14355c800(lVar1,param_3);
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,uVar2);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 14355d280 FUN_14355d280 body=33 status=ok
// SIG undefined FUN_14355d280(void)

undefined8 * FUN_14355d280(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14355d2b0 FUN_14355d2b0 body=214 status=ok
// SIG undefined FUN_14355d2b0(void)

undefined8 * FUN_14355d2b0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b35200);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar2,param_2,&PTR_DAT_145b35200);
    *puVar2 = &PTR_FUN_145b38e80;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14355d390 FUN_14355d390 body=33 status=ok
// SIG undefined FUN_14355d390(void)

undefined8 * FUN_14355d390(undefined8 *param_1)

{
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b38ef8;
  return param_1;
}



// FUNCTION 14355d3c0 FUN_14355d3c0 body=166 status=ok
// SIG undefined FUN_14355d3c0(void)

void FUN_14355d3c0(longlong param_1,int param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  char *pcVar3;
  undefined1 local_res10 [16];
  longlong local_res20;
  uint local_28 [2];
  undefined8 local_20;
  
  if (param_2 != 0) {
    lVar2 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218);
    local_res20 = lVar2 + 0x48;
    piVar1 = (int *)(lVar2 + 0x60);
    *piVar1 = *piVar1 + 1;
    pcVar3 = (char *)FUN_1435911f0(param_3,local_res10,&local_res20);
    if (*pcVar3 != '\0') {
      local_28[0] = 0;
      local_20 = 0;
      FUN_14355d470(param_1,local_28,&local_res20);
      if (9 < ((byte)local_28[0] & 0x1f)) {
        if ((local_28[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_28);
        }
        else {
          FUN_143592150();
        }
      }
    }
    piVar1 = (int *)(local_res20 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  return;
}



// FUNCTION 14355d470 FUN_14355d470 body=1287 status=ok
// SIG undefined FUN_14355d470(void)

void FUN_14355d470(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  char cVar2;
  ushort uVar3;
  bool bVar4;
  uint uVar5;
  char *pcVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 **ppuVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong local_118;
  longlong local_110;
  uint local_108 [8];
  uint local_e8 [8];
  undefined1 local_c8 [8];
  ulonglong local_c0;
  uint local_b8 [8];
  undefined1 *local_98 [6];
  undefined1 *local_68 [6];
  
  bVar4 = true;
  FUN_1432c5960(local_98,DAT_146b62f28);
  FUN_1432c5960(local_68,DAT_146b62f28);
  if (*(int *)(*param_3 + 0x20) != 0) {
    uVar5 = Scaleform::GFx::ASConstString::GetFirstCharAt(param_3,0,local_res20);
    uVar12 = (ulonglong)uVar5;
    while (uVar5 != 0) {
      iVar13 = (int)uVar12;
      if (iVar13 == 0x25) {
        uVar5 = FUN_14335fbd0(param_3,local_res20);
        uVar14 = 0;
        uVar12 = (ulonglong)uVar5;
        if (uVar5 == 0) goto LAB_14355d797;
        iVar13 = 0;
        do {
          uVar5 = (uint)uVar12;
          if (7 < iVar13) break;
          uVar3 = *(ushort *)(&DAT_145afe980 + ((uVar12 & 0xffff) >> 8) * 2);
          if ((uVar3 == 0) ||
             ((uVar3 != 1 &&
              ((*(ushort *)
                 (&DAT_145afe980 + (ulonglong)(((uVar5 & 0xffff) >> 4 & 0xf) + (uint)uVar3) * 2) >>
                (uVar5 & 0xf) & 1) == 0)))) goto LAB_14355d797;
          if (uVar5 - 0x41 < 0x1a) {
            uVar5 = uVar5 + 0x20;
          }
          if (uVar5 < 0x3a) {
            uVar5 = uVar5 - 0x30;
          }
          else {
            uVar5 = uVar5 - 0x57;
          }
          uVar14 = uVar14 << ((byte)iVar13 & 0x1f) | uVar5;
          uVar5 = FUN_14335fbd0(param_3,local_res20);
          iVar13 = iVar13 + 4;
          uVar12 = (ulonglong)uVar5;
        } while (uVar5 != 0);
        if (uVar14 == 0) goto LAB_14355d797;
        ppuVar10 = local_98;
        if (!bVar4) {
          ppuVar10 = local_68;
        }
        puVar11 = ppuVar10[1];
        Scaleform::StringBuffer::Resize(ppuVar10,puVar11 + 1);
        puVar11[(longlong)*ppuVar10] = (char)uVar14;
      }
      else {
        if (iVar13 == 0xd) {
          uVar12 = 10;
        }
        else if (iVar13 == 0x26) {
          lVar7 = *(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10);
          puVar11 = &DAT_145af3922;
          if (local_98[0] != (undefined1 *)0x0) {
            puVar11 = local_98[0];
          }
          local_110 = FUN_143360a60(*(undefined8 *)(lVar7 + 0x218),puVar11);
          *(int *)(local_110 + 0x18) = *(int *)(local_110 + 0x18) + 1;
          Scaleform::GFx::AS3::Value::Value(local_108,&local_110);
          puVar11 = &DAT_145af3922;
          if (local_68[0] != (undefined1 *)0x0) {
            puVar11 = local_68[0];
          }
          local_118 = FUN_143360a60(*(undefined8 *)(lVar7 + 0x218),puVar11);
          *(int *)(local_118 + 0x18) = *(int *)(local_118 + 0x18) + 1;
          lVar7 = *param_1;
          uVar9 = *(undefined8 *)(*(longlong *)(param_1[5] + 0x98) + 0x1d8);
          uVar8 = Scaleform::GFx::AS3::Value::Value(local_e8,&local_118);
          uVar9 = FUN_1435ae6b0(local_c8,uVar9,local_108);
          pcVar6 = (char *)(**(code **)(lVar7 + 0x20))(param_1,local_res18,uVar9,uVar8);
          cVar2 = *pcVar6;
          if (9 < ((byte)local_b8[0] & 0x1f)) {
            if ((local_b8[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_b8);
            }
            else {
              FUN_143592150();
            }
          }
          if (local_c0 != 0) {
            if ((local_c0 & 1) == 0) {
              if ((*(uint *)(local_c0 + 8) & 0x3fffff) != 0) {
                *(uint *)(local_c0 + 8) = *(uint *)(local_c0 + 8) - 1;
                FUN_1434ef880();
              }
            }
            else {
              local_c0 = local_c0 - 1;
            }
          }
          if (9 < ((byte)local_e8[0] & 0x1f)) {
            if ((local_e8[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_e8);
            }
            else {
              FUN_143592150();
            }
          }
          piVar1 = (int *)(local_118 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
          if (9 < ((byte)local_108[0] & 0x1f)) {
            if ((local_108[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_108);
            }
            else {
              FUN_143592150();
            }
          }
          piVar1 = (int *)(local_110 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
          if (cVar2 != '\0') {
            FUN_1432c5cb0(local_98);
            FUN_1432c5cb0(local_68);
            bVar4 = true;
            goto LAB_14355d797;
          }
          goto LAB_14355d956;
        }
        if (bVar4) {
          if ((int)uVar12 == 0x3d) {
            bVar4 = false;
            goto LAB_14355d797;
          }
          ppuVar10 = local_98;
        }
        else {
          ppuVar10 = local_68;
        }
        FUN_1432c5df0(ppuVar10,uVar12);
LAB_14355d797:
        uVar5 = FUN_14335fbd0(param_3,local_res20);
        uVar12 = (ulonglong)uVar5;
      }
      uVar5 = (uint)uVar12;
    }
    lVar7 = Scaleform::StringBuffer::GetLength(local_98);
    if (lVar7 != 0) {
      lVar7 = *(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10);
      puVar11 = &DAT_145af3922;
      if (local_98[0] != (undefined1 *)0x0) {
        puVar11 = local_98[0];
      }
      local_118 = FUN_143360a60(*(undefined8 *)(lVar7 + 0x218),puVar11);
      *(int *)(local_118 + 0x18) = *(int *)(local_118 + 0x18) + 1;
      Scaleform::GFx::AS3::Value::Value(local_108,&local_118);
      puVar11 = &DAT_145af3922;
      if (local_68[0] != (undefined1 *)0x0) {
        puVar11 = local_68[0];
      }
      local_110 = FUN_143360a60(*(undefined8 *)(lVar7 + 0x218),puVar11);
      *(int *)(local_110 + 0x18) = *(int *)(local_110 + 0x18) + 1;
      lVar7 = *param_1;
      uVar9 = *(undefined8 *)(*(longlong *)(param_1[5] + 0x98) + 0x1d8);
      uVar8 = Scaleform::GFx::AS3::Value::Value(local_e8,&local_110);
      uVar9 = FUN_1435ae6b0(local_c8,uVar9,local_108);
      (**(code **)(lVar7 + 0x20))(param_1,local_res18,uVar9,uVar8);
      if (9 < ((byte)local_b8[0] & 0x1f)) {
        if ((local_b8[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_b8);
        }
        else {
          FUN_143592150();
        }
      }
      if (local_c0 != 0) {
        if ((local_c0 & 1) == 0) {
          if ((*(uint *)(local_c0 + 8) & 0x3fffff) != 0) {
            *(uint *)(local_c0 + 8) = *(uint *)(local_c0 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          local_c0 = local_c0 - 1;
        }
      }
      if (9 < ((byte)local_e8[0] & 0x1f)) {
        if ((local_e8[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_e8);
        }
        else {
          FUN_143592150();
        }
      }
      piVar1 = (int *)(local_110 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      if (9 < ((byte)local_108[0] & 0x1f)) {
        if ((local_108[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_108);
        }
        else {
          FUN_143592150();
        }
      }
      piVar1 = (int *)(local_118 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
  }
LAB_14355d956:
  Scaleform::StringBuffer::~StringBuffer(local_68);
  Scaleform::StringBuffer::~StringBuffer(local_98);
  return;
}



// FUNCTION 14355d980 FUN_14355d980 body=593 status=ok
// SIG undefined FUN_14355d980(void)

void FUN_14355d980(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  char *pcVar7;
  longlong lVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 local_res8 [8];
  longlong *local_res10;
  undefined8 *local_res18;
  undefined1 *local_68 [6];
  
  local_res10 = param_2;
  FUN_1432c5960(local_68,DAT_146b62f28);
  lVar8 = *(longlong *)(param_1 + 0x30);
  uVar10 = 0;
  uVar12 = (*(longlong *)(lVar8 + 0x10) - lVar8) + -0x40 >> 3;
  uVar13 = *(ulonglong *)(lVar8 + 0x40);
  while (uVar13 == 0) {
    uVar10 = uVar10 + 1;
    if (uVar12 <= uVar10) goto LAB_14355db50;
    uVar13 = *(ulonglong *)(lVar8 + 0x40 + uVar10 * 8);
  }
  uVar5 = FUN_143561b20(uVar13);
  if (uVar10 < uVar12) {
    while( true ) {
      lVar11 = uVar10 * 0x40 + uVar5;
      lVar2 = *(longlong *)(lVar8 + 0x28);
      lVar3 = *(longlong *)(lVar8 + 0x20);
      lVar6 = Scaleform::StringBuffer::GetLength(local_68);
      if (lVar6 != 0) {
        FUN_1432c5df0(local_68,0x26);
      }
      puVar4 = *(undefined8 **)(lVar11 * 0x10 + lVar3 + 8);
      FUN_143364a00(*puVar4,*(undefined4 *)(puVar4 + 4),local_68,1);
      FUN_1432c5df0(local_68,0x3d);
      lVar3 = *(longlong *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218);
      local_res18 = (undefined8 *)(lVar3 + 0x48);
      piVar1 = (int *)(lVar3 + 0x60);
      *piVar1 = *piVar1 + 1;
      pcVar7 = (char *)FUN_1435911f0(lVar11 * 0x20 + lVar2,local_res8,&local_res18);
      if (*pcVar7 != '\0') {
        FUN_1433649d0(*local_res18,*(undefined4 *)(local_res18 + 4),local_68,1);
      }
      piVar1 = (int *)(local_res18 + 3);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      param_2 = local_res10;
      if (uVar12 <= uVar10) break;
      if (uVar5 < 0x3f) {
        uVar13 = uVar13 & ~(1L << (uVar5 & 0x3f));
      }
      else {
        uVar10 = uVar10 + 1;
        if (uVar12 <= uVar10) break;
        uVar13 = *(ulonglong *)(lVar8 + 0x40 + uVar10 * 8);
      }
      while (uVar13 == 0) {
        uVar10 = uVar10 + 1;
        if (uVar12 <= uVar10) goto LAB_14355db50;
        uVar13 = *(ulonglong *)(lVar8 + 0x40 + uVar10 * 8);
      }
      uVar5 = FUN_143561b20(uVar13);
      param_2 = local_res10;
      if (uVar12 <= uVar10) break;
    }
  }
LAB_14355db50:
  puVar9 = &DAT_145af3922;
  if (local_68[0] != (undefined1 *)0x0) {
    puVar9 = local_68[0];
  }
  lVar8 = FUN_143360a60(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10)
                         + 0x218),puVar9);
  *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 2;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar8;
  piVar1 = (int *)(lVar8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar8);
  }
  Scaleform::StringBuffer::~StringBuffer(local_68);
  return;
}



// FUNCTION 14355dbe0 FUN_14355dbe0 body=33 status=ok
// SIG undefined FUN_14355dbe0(void)

undefined8 * FUN_14355dbe0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b38fb8;
  return param_1;
}



// FUNCTION 14355dc10 FUN_14355dc10 body=173 status=ok
// SIG undefined FUN_14355dc10(void)

void FUN_14355dc10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    UInterpTrackInst::UInterpTrackInst(puVar1,param_3);
    *puVar1 = &PTR_FUN_145b38ef8;
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar1);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 14355dcd0 FUN_14355dcd0 body=33 status=ok
// SIG undefined FUN_14355dcd0(void)

undefined8 * FUN_14355dcd0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14355dd00 FUN_14355dd00 body=214 status=ok
// SIG undefined FUN_14355dd00(void)

undefined8 * FUN_14355dd00(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b35680);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b35680);
    *puVar2 = &PTR_FUN_145b38fb8;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14355dde0 FUN_14355dde0 body=33 status=ok
// SIG undefined FUN_14355dde0(void)

undefined8 * FUN_14355dde0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14355de10 FUN_14355de10 body=261 status=ok
// SIG undefined FUN_14355de10(void)

undefined8 * FUN_14355de10(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b37078);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b37078);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x68);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b23bb0;
    puVar5[10] = "binary";
    puVar5[0xb] = &DAT_145b0907c;
    puVar5[0xc] = "variables";
  }
  return param_1;
}



// FUNCTION 14355df20 FUN_14355df20 body=66 status=ok
// SIG undefined FUN_14355df20(void)

undefined8 * FUN_14355df20(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b23bb0;
  param_1[10] = "binary";
  param_1[0xb] = &DAT_145b0907c;
  param_1[0xc] = "variables";
  return param_1;
}



// FUNCTION 14355df70 FUN_14355df70 body=99 status=ok
// SIG undefined FUN_14355df70(void)

undefined8 * FUN_14355df70(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b39430;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[8] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[9] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  return param_1;
}



// FUNCTION 14355dfe0 FUN_14355dfe0 body=84 status=ok
// SIG undefined FUN_14355dfe0(void)

void FUN_14355dfe0(longlong param_1,uint param_2,longlong param_3)

{
  undefined1 local_res10 [8];
  
  if ((param_2 != 0) && (FUN_1435911f0(param_3,local_res10,param_1 + 0x40), 1 < param_2)) {
    FUN_1435911f0(param_3 + 0x20,local_res10,param_1 + 0x48);
  }
  return;
}



// FUNCTION 14355e040 FUN_14355e040 body=33 status=ok
// SIG undefined FUN_14355e040(void)

undefined8 * FUN_14355e040(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b394f0;
  return param_1;
}



// FUNCTION 14355e070 FUN_14355e070 body=239 status=ok
// SIG undefined FUN_14355e070(void)

void FUN_14355e070(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar3 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UInterpTrackInst::UInterpTrackInst(puVar3,param_3);
    *puVar3 = &PTR_FUN_145b39430;
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(puVar3[5] + 0x98) + 0x10) + 0x218);
    puVar3[8] = lVar2 + 0x48;
    piVar1 = (int *)(lVar2 + 0x60);
    *piVar1 = *piVar1 + 1;
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(puVar3[5] + 0x98) + 0x10) + 0x218);
    puVar3[9] = lVar2 + 0x48;
    piVar1 = (int *)(lVar2 + 0x60);
    *piVar1 = *piVar1 + 1;
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar3);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 14355e170 FUN_14355e170 body=33 status=ok
// SIG undefined FUN_14355e170(void)

undefined8 * FUN_14355e170(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14355e1a0 FUN_14355e1a0 body=214 status=ok
// SIG undefined FUN_14355e1a0(void)

undefined8 * FUN_14355e1a0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b35170);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b35170);
    *puVar2 = &PTR_FUN_145b394f0;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14355e280 FUN_14355e280 body=33 status=ok
// SIG undefined FUN_14355e280(void)

undefined8 * FUN_14355e280(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14355e2b0 FUN_14355e2b0 body=295 status=ok
// SIG undefined FUN_14355e2b0(void)

undefined8 * FUN_14355e2b0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b356e0);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b356e0);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x80,0);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b39568;
    puVar5[10] = "DELETE";
    puVar5[0xb] = &DAT_145b250c4;
    puVar5[0xc] = &DAT_145b377dc;
    puVar5[0xd] = "OPTIONS";
    puVar5[0xe] = &DAT_145b250c8;
    puVar5[0xf] = &DAT_145b250d0;
  }
  return param_1;
}



// FUNCTION 14355e3e0 FUN_14355e3e0 body=99 status=ok
// SIG undefined FUN_14355e3e0(void)

undefined8 * FUN_14355e3e0(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b39568;
  param_1[10] = "DELETE";
  param_1[0xb] = &DAT_145b250c4;
  param_1[0xc] = &DAT_145b377dc;
  param_1[0xd] = "OPTIONS";
  param_1[0xe] = &DAT_145b250c8;
  param_1[0xf] = &DAT_145b250d0;
  return param_1;
}



// FUNCTION 14355e450 FUN_14355e450 body=33 status=ok
// SIG undefined FUN_14355e450(void)

undefined8 * FUN_14355e450(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14355e480 FUN_14355e480 body=215 status=ok
// SIG undefined FUN_14355e480(void)

undefined8 * FUN_14355e480(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b365b0);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
                       (lVar3,param_2,&PTR_DAT_145b365b0);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14355e560 FUN_14355e560 body=33 status=ok
// SIG undefined FUN_14355e560(void)

undefined8 * FUN_14355e560(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14355e590 FUN_14355e590 body=215 status=ok
// SIG undefined FUN_14355e590(void)

undefined8 * FUN_14355e590(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b36fe8);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
                       (lVar3,param_2,&PTR_DAT_145b36fe8);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14355e670 FUN_14355e670 body=375 status=ok
// SIG undefined FUN_14355e670(void)

void FUN_14355e670(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong local_38;
  longlong local_30;
  longlong local_28;
  undefined4 *local_20;
  undefined1 local_18;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  local_38 = 0;
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_30 = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_30 = *(longlong *)(param_6 + 4);
    *(int *)(local_30 + 0x18) = *(int *)(local_30 + 0x18) + 1;
  }
  if ((((byte)param_6[8] & 0x1f) == 0xc) && (*(longlong *)(param_6 + 0xc) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_28 = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_28 = *(longlong *)(param_6 + 0xc);
    *(int *)(local_28 + 0x18) = *(int *)(local_28 + 0x18) + 1;
  }
  local_20 = param_6 + 0x10;
  local_18 = *(undefined1 *)(param_6 + 0x1c);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78ba0)(DAT_146b78ba8 + lVar2,&local_38,&local_30,&local_28,local_20,local_18);
  }
  piVar1 = (int *)(local_28 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_30 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  uVar4 = local_38;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_38 != 0) {
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      *(uint *)(local_38 + 8) = *(uint *)(local_38 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_38);
    if (((uVar4 != 0) && ((uVar4 & 1) == 0)) && ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
      FUN_1434ef880(uVar4);
    }
  }
  if (((local_38 != 0) && ((local_38 & 1) == 0)) && ((*(uint *)(local_38 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_38 + 8) = *(uint *)(local_38 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14355e7f0 FUN_14355e7f0 body=145 status=ok
// SIG undefined FUN_14355e7f0(void)

void FUN_14355e7f0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b78d40)((longlong)DAT_146b78d48 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe3;
    *param_4 = *param_4 | 3;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 14355e890 FUN_14355e890 body=145 status=ok
// SIG undefined FUN_14355e890(void)

void FUN_14355e890(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b78d50)((longlong)DAT_146b78d58 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe3;
    *param_4 = *param_4 | 3;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 14355e930 FUN_14355e930 body=145 status=ok
// SIG undefined FUN_14355e930(void)

void FUN_14355e930(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b78d60)((longlong)DAT_146b78d68 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe3;
    *param_4 = *param_4 | 3;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 14355e9d0 FUN_14355e9d0 body=112 status=ok
// SIG undefined FUN_14355e9d0(void)

void FUN_14355e9d0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b78d70)(DAT_146b78d78 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14355ea40 FUN_14355ea40 body=144 status=ok
// SIG undefined FUN_14355ea40(void)

void FUN_14355ea40(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b78e80)((longlong)DAT_146b78e88 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 14355ead0 FUN_14355ead0 body=175 status=ok
// SIG undefined FUN_14355ead0(void)

void FUN_14355ead0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b78aa0)((longlong)DAT_146b78aa8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14355eb80 FUN_14355eb80 body=175 status=ok
// SIG undefined FUN_14355eb80(void)

void FUN_14355eb80(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b788c0)((longlong)DAT_146b788c8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14355ec30 FUN_14355ec30 body=135 status=ok
// SIG undefined FUN_14355ec30(void)

void FUN_14355ec30(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18;
  undefined4 local_10;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18 = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  local_10 = *(undefined4 *)(param_6 + 0x10);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78d80)(DAT_146b78d88 + lVar2,&local_18);
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,&local_18);
  }
  piVar1 = (int *)(local_18 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14355ed50 FUN_14355ed50 body=144 status=ok
// SIG undefined FUN_14355ed50(void)

void FUN_14355ed50(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b78ea0)((longlong)DAT_146b78ea8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 14355ede0 FUN_14355ede0 body=112 status=ok
// SIG undefined FUN_14355ede0(void)

void FUN_14355ede0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b788d0)(DAT_146b788d8 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14355ee50 FUN_14355ee50 body=175 status=ok
// SIG undefined FUN_14355ee50(void)

void FUN_14355ee50(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b78ac0)((longlong)DAT_146b78ac8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14355ef30 FUN_14355ef30 body=175 status=ok
// SIG undefined FUN_14355ef30(void)

void FUN_14355ef30(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b788e0)((longlong)DAT_146b788e8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14355f080 FUN_14355f080 body=112 status=ok
// SIG undefined FUN_14355f080(void)

void FUN_14355f080(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b788f0)(DAT_146b788f8 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14355f0f0 FUN_14355f0f0 body=112 status=ok
// SIG undefined FUN_14355f0f0(void)

void FUN_14355f0f0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b78ec0)(DAT_146b78ec8 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14355f1c0 FUN_14355f1c0 body=175 status=ok
// SIG undefined FUN_14355f1c0(void)

void FUN_14355f1c0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b78900)((longlong)DAT_146b78908 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14355f270 FUN_14355f270 body=132 status=ok
// SIG undefined FUN_14355f270(void)

void FUN_14355f270(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78ed0)(DAT_146b78ed8 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14355f300 FUN_14355f300 body=145 status=ok
// SIG undefined FUN_14355f300(void)

void FUN_14355f300(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b78af0)((longlong)DAT_146b78af8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe3;
    *param_4 = *param_4 | 3;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 14355f3a0 FUN_14355f3a0 body=145 status=ok
// SIG undefined FUN_14355f3a0(void)

void FUN_14355f3a0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b78bb0)((longlong)DAT_146b78bb8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe3;
    *param_4 = *param_4 | 3;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 14355f470 FUN_14355f470 body=112 status=ok
// SIG undefined FUN_14355f470(void)

void FUN_14355f470(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b78910)(DAT_146b78918 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14355f530 FUN_14355f530 body=145 status=ok
// SIG undefined FUN_14355f530(void)

void FUN_14355f530(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b78bc0)((longlong)DAT_146b78bc8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe3;
    *param_4 = *param_4 | 3;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 14355f600 FUN_14355f600 body=148 status=ok
// SIG undefined FUN_14355f600(void)

void FUN_14355f600(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b78920)(DAT_146b78928 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 14355f6d0 FUN_14355f6d0 body=145 status=ok
// SIG undefined FUN_14355f6d0(void)

void FUN_14355f6d0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b78b10)((longlong)DAT_146b78b18 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe3;
    *param_4 = *param_4 | 3;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 14355f770 FUN_14355f770 body=144 status=ok
// SIG undefined FUN_14355f770(void)

void FUN_14355f770(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b78bd0)((longlong)DAT_146b78bd8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 14355f800 FUN_14355f800 body=112 status=ok
// SIG undefined FUN_14355f800(void)

void FUN_14355f800(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b78930)(DAT_146b78938 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14355f870 FUN_14355f870 body=209 status=ok
// SIG undefined FUN_14355f870(void)

void FUN_14355f870(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18;
  longlong local_10 [2];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18 = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18 = *(longlong *)(param_6 + 4);
    *(int *)(local_18 + 0x18) = *(int *)(local_18 + 0x18) + 1;
  }
  if ((((byte)param_6[8] & 0x1f) == 0xc) && (*(longlong *)(param_6 + 0xc) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_10[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_10[0] = *(longlong *)(param_6 + 0xc);
    *(int *)(local_10[0] + 0x18) = *(int *)(local_10[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78df0)(DAT_146b78df8 + lVar2,param_4,&local_18,local_10,param_2);
  }
  piVar1 = (int *)(local_10[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_18 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14355f950 FUN_14355f950 body=112 status=ok
// SIG undefined FUN_14355f950(void)

void FUN_14355f950(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b78f00)(DAT_146b78f08 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14355f9e0 FUN_14355f9e0 body=112 status=ok
// SIG undefined FUN_14355f9e0(void)

void FUN_14355f9e0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b78be0)(DAT_146b78be8 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14355fa50 FUN_14355fa50 body=171 status=ok
// SIG undefined FUN_14355fa50(void)

void FUN_14355fa50(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_18[0] = 0;
  local_10 = *(undefined8 *)(param_6 + 0x10);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78940)((longlong)DAT_146b78948 + *(longlong *)(param_3 + 0x10),local_18);
  }
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 14355fb30 FUN_14355fb30 body=132 status=ok
// SIG undefined FUN_14355fb30(void)

void FUN_14355fb30(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78f10)(DAT_146b78f18 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14355fbe0 FUN_14355fbe0 body=132 status=ok
// SIG undefined FUN_14355fbe0(void)

void FUN_14355fbe0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78bf0)(DAT_146b78bf8 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14355fcc0 FUN_14355fcc0 body=144 status=ok
// SIG undefined FUN_14355fcc0(void)

void FUN_14355fcc0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b78f20)((longlong)DAT_146b78f28 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 14355fd50 FUN_14355fd50 body=147 status=ok
// SIG undefined FUN_14355fd50(void)

void FUN_14355fd50(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong local_10 [2];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_6 + 0x10);
  if ((((byte)*(undefined4 *)(param_6 + 0x20) & 0x1f) == 0xc) &&
     (*(longlong *)(param_6 + 0x30) == 0)) {
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_10[0] = lVar4 + 0x80;
    piVar1 = (int *)(lVar4 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_10[0] = *(longlong *)(param_6 + 0x30);
    *(int *)(local_10[0] + 0x18) = *(int *)(local_10[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78b40)(DAT_146b78b48 + lVar2,param_4,uVar3,local_10,param_2);
  }
  piVar1 = (int *)(local_10[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14355fdf0 FUN_14355fdf0 body=112 status=ok
// SIG undefined FUN_14355fdf0(void)

void FUN_14355fdf0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b78c00)(DAT_146b78c08 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14355fe90 FUN_14355fe90 body=147 status=ok
// SIG undefined FUN_14355fe90(void)

void FUN_14355fe90(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong local_10 [2];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_6 + 0x10);
  if ((((byte)*(undefined4 *)(param_6 + 0x20) & 0x1f) == 0xc) &&
     (*(longlong *)(param_6 + 0x30) == 0)) {
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_10[0] = lVar4 + 0x80;
    piVar1 = (int *)(lVar4 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_10[0] = *(longlong *)(param_6 + 0x30);
    *(int *)(local_10[0] + 0x18) = *(int *)(local_10[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78960)(DAT_146b78968 + lVar2,param_4,uVar3,local_10,param_2);
  }
  piVar1 = (int *)(local_10[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14355ff60 FUN_14355ff60 body=135 status=ok
// SIG undefined FUN_14355ff60(void)

void FUN_14355ff60(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18;
  undefined4 local_10;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18 = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  local_10 = *(undefined4 *)(param_6 + 0x10);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78b50)(DAT_146b78b58 + lVar2,&local_18);
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,&local_18);
  }
  piVar1 = (int *)(local_18 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14355fff0 FUN_14355fff0 body=145 status=ok
// SIG undefined FUN_14355fff0(void)

void FUN_14355fff0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b78c10)((longlong)DAT_146b78c18 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143560090 FUN_143560090 body=175 status=ok
// SIG undefined FUN_143560090(void)

void FUN_143560090(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b789b0)((longlong)DAT_146b789b8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 143560160 FUN_143560160 body=132 status=ok
// SIG undefined FUN_143560160(void)

void FUN_143560160(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78e30)(DAT_146b78e38 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435601f0 FUN_1435601f0 body=144 status=ok
// SIG undefined FUN_1435601f0(void)

void FUN_1435601f0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b78f40)((longlong)DAT_146b78f48 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143560280 FUN_143560280 body=145 status=ok
// SIG undefined FUN_143560280(void)

void FUN_143560280(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b78c20)((longlong)DAT_146b78c28 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe3;
    *param_4 = *param_4 | 3;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143560370 FUN_143560370 body=132 status=ok
// SIG undefined FUN_143560370(void)

void FUN_143560370(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78e40)(DAT_146b78e48 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143560430 FUN_143560430 body=143 status=ok
// SIG undefined FUN_143560430(void)

void FUN_143560430(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_10 [2];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*(undefined4 *)(param_6 + 0x20) & 0x1f) == 0xc) &&
     (*(longlong *)(param_6 + 0x30) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_10[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_10[0] = *(longlong *)(param_6 + 0x30);
    *(int *)(local_10[0] + 0x18) = *(int *)(local_10[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78980)(DAT_146b78988 + lVar2,param_4,param_6,local_10,param_2);
  }
  piVar1 = (int *)(local_10[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435604f0 FUN_1435604f0 body=132 status=ok
// SIG undefined FUN_1435604f0(void)

void FUN_1435604f0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78b70)(DAT_146b78b78 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143560580 FUN_143560580 body=144 status=ok
// SIG undefined FUN_143560580(void)

void FUN_143560580(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b789d0)((longlong)DAT_146b789d8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143560610 FUN_143560610 body=112 status=ok
// SIG undefined FUN_143560610(void)

void FUN_143560610(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b78f60)(DAT_146b78f68 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143560680 FUN_143560680 body=164 status=ok
// SIG undefined FUN_143560680(void)

void FUN_143560680(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong local_20;
  undefined1 local_18;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_6 + 0x10);
  if ((((byte)*(undefined4 *)(param_6 + 0x20) & 0x1f) == 0xc) &&
     (*(longlong *)(param_6 + 0x30) == 0)) {
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_20 = lVar4 + 0x80;
    piVar1 = (int *)(lVar4 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_20 = *(longlong *)(param_6 + 0x30);
    *(int *)(local_20 + 0x18) = *(int *)(local_20 + 0x18) + 1;
  }
  local_18 = *(undefined1 *)(param_6 + 0x50);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78990)(DAT_146b78998 + lVar2,param_4,uVar3,&local_20,local_18);
  }
  piVar1 = (int *)(local_20 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143560730 FUN_143560730 body=112 status=ok
// SIG undefined FUN_143560730(void)

void FUN_143560730(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b78c40)(DAT_146b78c48 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}


