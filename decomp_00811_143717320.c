// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143717320 FUN_143717320 body=170 status=ok
// SIG undefined FUN_143717320(void)

undefined8 * FUN_143717320(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  LPVOID pvVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkIstream::vftable;
  param_1[3] = 0;
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x38);
  if (lVar2 != 0) {
    lVar3 = FUN_14376fcd0(lVar2,param_2,param_3,2,0);
  }
  if (lVar3 != param_1[3]) {
    if (param_1[3] != 0) {
      FUN_14370c150();
    }
    param_1[3] = lVar3;
  }
  return param_1;
}



// FUNCTION 1437173d0 FUN_1437173d0 body=46 status=ok
// SIG undefined FUN_1437173d0(void)

void FUN_1437173d0(undefined8 *param_1)

{
  *param_1 = hkIstream::vftable;
  if (param_1[3] != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 143717400 FUN_143717400 body=136 status=ok
// SIG undefined FUN_143717400(void)

longlong FUN_143717400(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437173d0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x20;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 143717490 FUN_143717490 body=157 status=ok
// SIG undefined FUN_143717490(void)

undefined8 FUN_143717490(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  lVar4 = 0;
  do {
    if ((param_3 == 0) || ((int)param_1[1] <= iVar3)) break;
    iVar3 = iVar3 + 1;
    lVar2 = *param_1 + lVar4;
    lVar4 = lVar4 + 0x18;
  } while (*(longlong *)(lVar2 + 0x10) != param_3);
  if (iVar3 < (int)param_1[1]) {
    lVar4 = (longlong)iVar3 * 0x18;
    do {
      if (((*(ulonglong *)(lVar4 + *param_1) & 0xfffffffffffffffe) != 0) &&
         (iVar1 = hkString::strCmp(param_2), iVar1 == 0)) {
        return *(undefined8 *)(*param_1 + 0x10 + (longlong)iVar3 * 0x18);
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 0x18;
    } while (iVar3 < (int)param_1[1]);
  }
  return 0;
}



// FUNCTION 143717530 FUN_143717530 body=212 status=ok
// SIG undefined FUN_143717530(void)

undefined8 FUN_143717530(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = 0;
  lVar6 = 0;
  do {
    if ((param_3 == 0) || ((int)param_1[1] <= iVar5)) break;
    iVar5 = iVar5 + 1;
    lVar4 = *param_1 + lVar6;
    lVar6 = lVar6 + 0x18;
  } while (*(longlong *)(lVar4 + 0x10) != param_3);
  if (iVar5 < (int)param_1[1]) {
    lVar6 = (longlong)iVar5 * 0x18;
    do {
      lVar4 = *param_1;
      lVar2 = FUN_143716500(lVar4 + 0x10 + lVar6);
      if (lVar2 == 0) {
        uVar3 = *(ulonglong *)(lVar4 + 8 + lVar6) & 0xfffffffffffffffe;
      }
      else {
        uVar3 = FUN_1437151f0(lVar2);
      }
      if ((uVar3 != 0) && (iVar1 = hkString::strCmp(param_2,uVar3), iVar1 == 0)) {
        return *(undefined8 *)(*param_1 + 0x10 + (longlong)iVar5 * 0x18);
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 0x18;
    } while (iVar5 < (int)param_1[1]);
  }
  return 0;
}



// FUNCTION 143717610 FUN_143717610 body=49 status=ok
// SIG undefined FUN_143717610(void)

void FUN_143717610(undefined8 param_1,undefined4 param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x00014371763d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x50) + 8))
            (*(longlong **)((longlong)pvVar1 + 0x50),param_2);
  return;
}



// FUNCTION 143717650 FUN_143717650 body=66 status=ok
// SIG undefined FUN_143717650(void)

void FUN_143717650(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x00014371768e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x50) + 0x10))
            (*(longlong **)((longlong)pvVar1 + 0x50),param_2,param_3);
  return;
}



// FUNCTION 1437176a0 FUN_1437176a0 body=51 status=ok
// SIG undefined FUN_1437176a0(void)

void FUN_1437176a0(undefined8 param_1,undefined8 param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x0001437176cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x50) + 0x18))
            (*(longlong **)((longlong)pvVar1 + 0x50),param_2);
  return;
}



// FUNCTION 1437176e0 FUN_1437176e0 body=66 status=ok
// SIG undefined FUN_1437176e0(void)

void FUN_1437176e0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x00014371771e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x50) + 0x20))
            (*(longlong **)((longlong)pvVar1 + 0x50),param_2,param_3);
  return;
}



// FUNCTION 143717730 FUN_143717730 body=82 status=ok
// SIG undefined FUN_143717730(void)

void FUN_143717730(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x00014371777e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x50) + 0x28))
            (*(longlong **)((longlong)pvVar1 + 0x50),param_2,param_3,param_4);
  return;
}



// FUNCTION 143717790 FUN_143717790 body=51 status=ok
// SIG undefined FUN_143717790(void)

void FUN_143717790(undefined8 param_1,undefined8 param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x0001437177bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x50) + 0x40))
            (*(longlong **)((longlong)pvVar1 + 0x50),param_2);
  return;
}



// FUNCTION 1437177d0 FUN_1437177d0 body=66 status=ok
// SIG undefined FUN_1437177d0(void)

void FUN_1437177d0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x00014371780e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x50) + 0x48))
            (*(longlong **)((longlong)pvVar1 + 0x50),param_2,param_3);
  return;
}



// FUNCTION 143717820 FUN_143717820 body=120 status=ok
// SIG undefined FUN_143717820(void)

longlong FUN_143717820(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_143702b50();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,8);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,8);
    }
  }
  return param_1;
}



// FUNCTION 1437178a0 FUN_1437178a0 body=49 status=ok
// SIG undefined FUN_1437178a0(void)

void FUN_1437178a0(undefined8 param_1,undefined4 param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x0001437178cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x60) + 8))
            (*(longlong **)((longlong)pvVar1 + 0x60),param_2);
  return;
}



// FUNCTION 1437178e0 FUN_1437178e0 body=66 status=ok
// SIG undefined FUN_1437178e0(void)

void FUN_1437178e0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x00014371791e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x60) + 0x10))
            (*(longlong **)((longlong)pvVar1 + 0x60),param_2,param_3);
  return;
}



// FUNCTION 143717930 FUN_143717930 body=51 status=ok
// SIG undefined FUN_143717930(void)

void FUN_143717930(undefined8 param_1,undefined8 param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x00014371795f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x60) + 0x18))
            (*(longlong **)((longlong)pvVar1 + 0x60),param_2);
  return;
}



// FUNCTION 143717970 FUN_143717970 body=66 status=ok
// SIG undefined FUN_143717970(void)

void FUN_143717970(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x0001437179ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x60) + 0x20))
            (*(longlong **)((longlong)pvVar1 + 0x60),param_2,param_3);
  return;
}



// FUNCTION 1437179c0 FUN_1437179c0 body=82 status=ok
// SIG undefined FUN_1437179c0(void)

void FUN_1437179c0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x000143717a0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x60) + 0x28))
            (*(longlong **)((longlong)pvVar1 + 0x60),param_2,param_3,param_4);
  return;
}



// FUNCTION 143717a20 FUN_143717a20 body=51 status=ok
// SIG undefined FUN_143717a20(void)

void FUN_143717a20(undefined8 param_1,undefined8 param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x000143717a4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x60) + 0x40))
            (*(longlong **)((longlong)pvVar1 + 0x60),param_2);
  return;
}



// FUNCTION 143717a60 FUN_143717a60 body=66 status=ok
// SIG undefined FUN_143717a60(void)

void FUN_143717a60(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x000143717a9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x60) + 0x48))
            (*(longlong **)((longlong)pvVar1 + 0x60),param_2,param_3);
  return;
}



// FUNCTION 143717ab0 FUN_143717ab0 body=303 status=ok
// SIG undefined FUN_143717ab0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143717ab0(longlong param_1,float *param_2,float *param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined4 in_EAX;
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
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  auVar1._4_4_ = -(uint)(param_2[5] < fVar4);
  auVar1._0_4_ = -(uint)(param_2[4] < *param_2);
  auVar1._8_4_ = -(uint)(param_2[6] < fVar5);
  auVar1._12_4_ = -(uint)(param_2[7] < fVar6);
  uVar3 = movmskps(in_EAX,auVar1);
  if ((uVar3 & 7) == 0) {
    FUN_143716430(&local_68,param_1);
    fVar11 = (*param_2 + param_2[4]) * _DAT_1467f07e0;
    fVar12 = (param_2[1] + param_2[5]) * fRam00000001467f07e4;
    fVar13 = (param_2[2] + param_2[6]) * fRam00000001467f07e8;
    fVar4 = ABS((param_2[4] - *param_2) * _DAT_1467f07e0);
    fVar5 = ABS((param_2[5] - param_2[1]) * fRam00000001467f07e4);
    fVar6 = ABS((param_2[6] - param_2[2]) * fRam00000001467f07e8);
    fVar7 = ABS(fVar5 * local_58) + ABS(fVar4 * local_68) + ABS(fVar6 * local_48);
    fVar8 = ABS(fVar5 * fStack_54) + ABS(fVar4 * fStack_64) + ABS(fVar6 * fStack_44);
    fVar9 = ABS(fVar5 * fStack_50) + ABS(fVar4 * fStack_60) + ABS(fVar6 * fStack_40);
    fVar10 = ABS(fVar5 * fStack_4c) + ABS(fVar4 * fStack_5c) + ABS(fVar6 * fStack_3c);
    fVar4 = fVar12 * local_58 + fVar11 * local_68 + fVar13 * local_48 + *(float *)(param_1 + 0x10);
    fVar5 = fVar12 * fStack_54 + fVar11 * fStack_64 + fVar13 * fStack_44 +
            *(float *)(param_1 + 0x14);
    fVar6 = fVar12 * fStack_50 + fVar11 * fStack_60 + fVar13 * fStack_40 +
            *(float *)(param_1 + 0x18);
    fVar11 = fVar12 * fStack_4c + fVar11 * fStack_5c + fVar13 * fStack_3c +
             *(float *)(param_1 + 0x1c);
    param_3[4] = fVar4 + fVar7;
    param_3[5] = fVar5 + fVar8;
    param_3[6] = fVar6 + fVar9;
    param_3[7] = fVar11 + fVar10;
    *param_3 = -fVar7 + fVar4;
    param_3[1] = -fVar8 + fVar5;
    param_3[2] = -fVar9 + fVar6;
    param_3[3] = -fVar10 + fVar11;
  }
  else {
    *param_3 = *param_2;
    param_3[1] = fVar4;
    param_3[2] = fVar5;
    param_3[3] = fVar6;
    uVar2 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_3 + 6) = uVar2;
  }
  return;
}



// FUNCTION 143717be0 FUN_143717be0 body=253 status=ok
// SIG undefined FUN_143717be0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143717be0(float *param_1,float *param_2,float *param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined4 in_EAX;
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
  
  fVar11 = *param_2;
  fVar12 = param_2[1];
  fVar13 = param_2[2];
  fVar8 = param_2[3];
  fVar4 = param_2[4];
  fVar5 = param_2[5];
  fVar6 = param_2[6];
  auVar1._4_4_ = -(uint)(fVar5 < fVar12);
  auVar1._0_4_ = -(uint)(fVar4 < fVar11);
  auVar1._8_4_ = -(uint)(fVar6 < fVar13);
  auVar1._12_4_ = -(uint)(param_2[7] < fVar8);
  uVar3 = movmskps(in_EAX,auVar1);
  if ((uVar3 & 7) != 0) {
    *param_3 = fVar11;
    param_3[1] = fVar12;
    param_3[2] = fVar13;
    param_3[3] = fVar8;
    uVar2 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_3 + 6) = uVar2;
    return;
  }
  fVar8 = (fVar11 + fVar4) * _DAT_1467f07e0;
  fVar9 = (fVar12 + fVar5) * fRam00000001467f07e4;
  fVar10 = (fVar13 + fVar6) * fRam00000001467f07e8;
  fVar11 = (fVar4 - fVar11) * _DAT_1467f07e0;
  fVar12 = (fVar5 - fVar12) * fRam00000001467f07e4;
  fVar13 = (fVar6 - fVar13) * fRam00000001467f07e8;
  fVar4 = ABS(fVar11 * *param_1) + ABS(fVar12 * param_1[4]) + ABS(fVar13 * param_1[8]);
  fVar5 = ABS(fVar11 * param_1[1]) + ABS(fVar12 * param_1[5]) + ABS(fVar13 * param_1[9]);
  fVar6 = ABS(fVar11 * param_1[2]) + ABS(fVar12 * param_1[6]) + ABS(fVar13 * param_1[10]);
  fVar7 = ABS(fVar11 * param_1[3]) + ABS(fVar12 * param_1[7]) + ABS(fVar13 * param_1[0xb]);
  fVar11 = fVar8 * *param_1 + fVar9 * param_1[4] + fVar10 * param_1[8] + param_1[0xc];
  fVar12 = fVar8 * param_1[1] + fVar9 * param_1[5] + fVar10 * param_1[9] + param_1[0xd];
  fVar13 = fVar8 * param_1[2] + fVar9 * param_1[6] + fVar10 * param_1[10] + param_1[0xe];
  fVar8 = fVar8 * param_1[3] + fVar9 * param_1[7] + fVar10 * param_1[0xb] + param_1[0xf];
  param_3[4] = fVar11 + fVar4;
  param_3[5] = fVar12 + fVar5;
  param_3[6] = fVar13 + fVar6;
  param_3[7] = fVar8 + fVar7;
  *param_3 = -fVar4 + fVar11;
  param_3[1] = -fVar5 + fVar12;
  param_3[2] = -fVar6 + fVar13;
  param_3[3] = -fVar7 + fVar8;
  return;
}



// FUNCTION 143717ce0 FUN_143717ce0 body=257 status=ok
// SIG undefined FUN_143717ce0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143717ce0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined4 in_EAX;
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
  
  fVar11 = *param_2;
  fVar12 = param_2[1];
  fVar13 = param_2[2];
  fVar8 = param_2[3];
  fVar4 = param_2[4];
  fVar5 = param_2[5];
  fVar6 = param_2[6];
  auVar1._4_4_ = -(uint)(fVar5 < fVar12);
  auVar1._0_4_ = -(uint)(fVar4 < fVar11);
  auVar1._8_4_ = -(uint)(fVar6 < fVar13);
  auVar1._12_4_ = -(uint)(param_2[7] < fVar8);
  uVar3 = movmskps(in_EAX,auVar1);
  if ((uVar3 & 7) != 0) {
    *param_4 = fVar11;
    param_4[1] = fVar12;
    param_4[2] = fVar13;
    param_4[3] = fVar8;
    uVar2 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_4 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_4 + 6) = uVar2;
    return;
  }
  fVar8 = (fVar11 + fVar4) * _DAT_1467f07e0;
  fVar9 = (fVar12 + fVar5) * fRam00000001467f07e4;
  fVar10 = (fVar13 + fVar6) * fRam00000001467f07e8;
  fVar11 = (fVar4 - fVar11) * _DAT_1467f07e0;
  fVar12 = (fVar5 - fVar12) * fRam00000001467f07e4;
  fVar13 = (fVar6 - fVar13) * fRam00000001467f07e8;
  fVar4 = ABS(fVar11 * *param_1) + ABS(fVar12 * param_1[4]) + ABS(fVar13 * param_1[8]) + *param_3;
  fVar5 = ABS(fVar11 * param_1[1]) + ABS(fVar12 * param_1[5]) +
          ABS(fVar13 * param_1[9]) + param_3[1];
  fVar6 = ABS(fVar11 * param_1[2]) + ABS(fVar12 * param_1[6]) +
          ABS(fVar13 * param_1[10]) + param_3[2];
  fVar7 = ABS(fVar11 * param_1[3]) + ABS(fVar12 * param_1[7]) +
          ABS(fVar13 * param_1[0xb]) + param_3[3];
  fVar11 = fVar8 * *param_1 + fVar9 * param_1[4] + fVar10 * param_1[8] + param_1[0xc];
  fVar12 = fVar8 * param_1[1] + fVar9 * param_1[5] + fVar10 * param_1[9] + param_1[0xd];
  fVar13 = fVar8 * param_1[2] + fVar9 * param_1[6] + fVar10 * param_1[10] + param_1[0xe];
  fVar8 = fVar8 * param_1[3] + fVar9 * param_1[7] + fVar10 * param_1[0xb] + param_1[0xf];
  param_4[4] = fVar11 + fVar4;
  param_4[5] = fVar12 + fVar5;
  param_4[6] = fVar13 + fVar6;
  param_4[7] = fVar8 + fVar7;
  *param_4 = -fVar4 + fVar11;
  param_4[1] = -fVar5 + fVar12;
  param_4[2] = -fVar6 + fVar13;
  param_4[3] = -fVar7 + fVar8;
  return;
}



// FUNCTION 143717df0 FUN_143717df0 body=107 status=ok
// SIG undefined FUN_143717df0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143717df0(undefined1 (*param_1) [16],int param_2,undefined1 (*param_3) [16])

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar3 = uRam00000001467f08d8;
  *(undefined8 *)*param_3 = _DAT_1467f08d0;
  *(undefined8 *)(*param_3 + 8) = uVar3;
  auVar5 = *param_3;
  auVar6._0_8_ = auVar5._0_8_ ^ 0x8000000080000000;
  auVar6._8_4_ = auVar5._8_4_ ^ 0x80000000;
  auVar6._12_4_ = auVar5._12_4_ ^ 0x80000000;
  param_3[1] = auVar6;
  if (0 < param_2) {
    lVar4 = (longlong)param_2;
    do {
      auVar5 = minps(*param_3,*param_1);
      *param_3 = auVar5;
      auVar6 = maxps(auVar6,*param_1);
      param_3[1] = auVar6;
      lVar4 = lVar4 + -1;
      param_1 = param_1 + 1;
    } while (lVar4 != 0);
    *(int *)*param_3 = auVar5._0_4_;
    *(int *)(*param_3 + 4) = auVar5._4_4_;
    *(int *)(*param_3 + 8) = auVar5._8_4_;
    *(undefined4 *)(*param_3 + 0xc) = 0;
    uVar1 = *(undefined4 *)(param_3[1] + 4);
    uVar2 = *(undefined4 *)(param_3[1] + 8);
    *(undefined4 *)param_3[1] = *(undefined4 *)param_3[1];
    *(undefined4 *)(param_3[1] + 4) = uVar1;
    *(undefined4 *)(param_3[1] + 8) = uVar2;
    *(undefined4 *)(param_3[1] + 0xc) = 0;
  }
  return;
}



// FUNCTION 143717e60 FUN_143717e60 body=160 status=ok
// SIG undefined FUN_143717e60(void)

undefined4 *
FUN_143717e60(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if (param_6 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1437151a0(param_6);
  }
  if ((uVar1 & 1) != 0) {
    FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
  }
  lVar2 = FUN_143718200(param_5,param_6);
  if (lVar2 == 0) {
    *param_2 = 0x80040200;
  }
  else {
    FUN_1437182e0(param_3,lVar2);
    *param_2 = 0;
  }
  if ((uVar1 & 1) != 0) {
    FUN_143733a60(uVar1 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 143717f00 FUN_143717f00 body=174 status=ok
// SIG undefined FUN_143717f00(void)

undefined4 *
FUN_143717f00(undefined8 param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  lVar1 = *param_3;
  uVar2 = FUN_1437152f0(&DAT_1467e0070);
  uVar3 = FUN_1437151a0(&DAT_1467e0070);
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  *param_5 = lVar1;
  param_5[1] = (longlong)&DAT_1467e0070;
  *(uint *)(param_5 + 2) = (uint)(lVar1 != 0);
  *(undefined4 *)((longlong)param_5 + 0x14) = uVar2;
  if ((*(byte *)(param_5 + 3) & 1) != 0) {
    FUN_143733a60(param_5[3] & 0xfffffffffffffffe);
  }
  param_5[3] = uVar3;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 143717fb0 FUN_143717fb0 body=99 status=ok
// SIG undefined FUN_143717fb0(void)

undefined4 *
FUN_143717fb0(undefined8 param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4,
             uint param_5)

{
  if (1 < param_5) {
    *param_2 = 0x80040200;
    return param_2;
  }
  if ((*param_3 == 0) != (param_5 == 0)) {
    if (param_5 == 0) {
      FUN_143718350();
      *param_2 = 0;
      return param_2;
    }
    FUN_1437183c0(param_3);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 143718020 FUN_143718020 body=278 status=ok
// SIG undefined FUN_143718020(void)

undefined4 *
FUN_143718020(undefined8 param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4,
             undefined8 param_5,int param_6,undefined8 *param_7)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  if (1 < param_6) {
    *param_2 = 0x80040200;
    return param_2;
  }
  if ((*param_3 != 0) && ((param_6 + 1U & 0xfffffffd) == 0)) {
    FUN_143718350();
  }
  if (*(int *)(param_7 + 2) == 0) {
    *param_2 = 0;
    return param_2;
  }
  if (*param_3 != 0) {
    *param_2 = 0x80040200;
    return param_2;
  }
  local_38 = *param_7;
  local_28 = (ulonglong)(((uint)*(byte *)(param_7 + 3) ^ *(uint *)(param_7 + 3)) & 1) ^ param_7[3];
  local_30 = param_7[1];
  if ((local_28 & 1) != 0) {
    FUN_1437329e0(local_28 & 0xfffffffffffffffe);
  }
  puVar2 = (undefined8 *)FUN_143742250(&local_38,local_20);
  lVar3 = FUN_143718210(*puVar2,puVar2[1]);
  *param_3 = lVar3;
  if ((local_10 & 1) != 0) {
    FUN_143733a60(local_10 & 0xfffffffffffffffe);
  }
  if ((local_28 & 1) != 0) {
    FUN_143733a60();
  }
  uVar1 = 0x80040200;
  if (*param_3 != 0) {
    uVar1 = 0;
  }
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 143718140 FUN_143718140 body=128 status=ok
// SIG undefined FUN_143718140(void)

undefined8
FUN_143718140(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,int param_5
             )

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  if (*param_2 != 0) {
    return 2;
  }
  cVar1 = FUN_143714910(param_4,&DAT_1467e0070);
  if ((cVar1 != '\0') && (param_5 < 2)) {
    if (param_5 == 1) {
      puVar2 = (undefined8 *)FUN_1437155c0(param_4,local_28);
      lVar3 = FUN_143718210(*puVar2,puVar2[1]);
      *param_2 = lVar3;
      if ((local_18 & 1) != 0) {
        FUN_143733a60(local_18 & 0xfffffffffffffffe);
      }
    }
    return 0;
  }
  return 1;
}



// FUNCTION 1437181c0 FUN_1437181c0 body=61 status=ok
// SIG undefined FUN_1437181c0(void)

void FUN_1437181c0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 local_18 [16];
  
  if (*param_2 != 0) {
    lVar1 = FUN_14371d5c0(local_18,*param_2,&DAT_1467e0070);
    FUN_14373daf0(*param_2,*(undefined8 *)(lVar1 + 8));
  }
  return;
}



// FUNCTION 143718200 FUN_143718200 body=12 status=ok
// SIG undefined FUN_143718200(void)

void FUN_143718200(undefined8 param_1,undefined8 param_2)

{
  FUN_142b7ebc0(param_1,param_2,&DAT_1467e3aa0);
  return;
}



// FUNCTION 143718210 FUN_143718210 body=12 status=ok
// SIG undefined FUN_143718210(void)

void FUN_143718210(undefined8 param_1,undefined8 param_2)

{
  FUN_142b7ebc0(param_1,param_2,&DAT_1467e0070);
  return;
}



// FUNCTION 143718220 FUN_143718220 body=78 status=ok
// SIG undefined FUN_143718220(void)

undefined8 * FUN_143718220(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_143734b10(param_1 + 2);
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  FUN_143734b10(param_1 + 6);
  *(undefined1 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 143718270 FUN_143718270 body=91 status=ok
// SIG undefined FUN_143718270(void)

undefined8 * FUN_143718270(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = 0;
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar2 = FUN_1437183c0();
    FUN_14370a810(lVar2,lVar1);
    FUN_14370a810(lVar2 + 0x20,lVar1 + 0x20);
    *(undefined1 *)(lVar2 + 0x40) = *(undefined1 *)(lVar1 + 0x40);
  }
  return param_1;
}



// FUNCTION 1437182d0 thunk_FUN_143718350 body=5 status=ok
// SIG undefined thunk_FUN_143718350(void)

void thunk_FUN_143718350(longlong *param_1)

{
  longlong lVar1;
  LPVOID pvVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_14370a210(lVar1 + 0x20);
    FUN_14370a210(lVar1);
    pvVar2 = TlsGetValue(DAT_146b7bf70);
    if (pvVar2 == (LPVOID)0x0) {
      pvVar2 = DAT_146b7bf68;
    }
    (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
              (*(longlong **)((longlong)pvVar2 + 0x58),lVar1,0x48);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 1437182e0 FUN_1437182e0 body=109 status=ok
// SIG undefined FUN_1437182e0(void)

longlong * FUN_1437182e0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 != param_2) {
    lVar1 = *param_2;
    if (lVar1 != 0) {
      lVar2 = FUN_1437183c0();
      FUN_14370a810(lVar2,lVar1);
      FUN_14370a810(lVar2 + 0x20,lVar1 + 0x20);
      *(undefined1 *)(lVar2 + 0x40) = *(undefined1 *)(lVar1 + 0x40);
      return param_1;
    }
    FUN_143718350();
  }
  return param_1;
}



// FUNCTION 143718350 FUN_143718350 body=98 status=ok
// SIG undefined FUN_143718350(void)

void FUN_143718350(longlong *param_1)

{
  longlong lVar1;
  LPVOID pvVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_14370a210(lVar1 + 0x20);
    FUN_14370a210(lVar1);
    pvVar2 = TlsGetValue(DAT_146b7bf70);
    if (pvVar2 == (LPVOID)0x0) {
      pvVar2 = DAT_146b7bf68;
    }
    (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
              (*(longlong **)((longlong)pvVar2 + 0x58),lVar1,0x48);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 1437183c0 FUN_1437183c0 body=93 status=ok
// SIG undefined FUN_1437183c0(void)

longlong FUN_1437183c0(longlong *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  
  if (*param_1 != 0) {
    return *param_1;
  }
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x48);
  if (lVar2 != 0) {
    lVar2 = FUN_143718220(lVar2);
    *param_1 = lVar2;
    return lVar2;
  }
  *param_1 = 0;
  return 0;
}



// FUNCTION 143718420 FUN_143718420 body=56 status=ok
// SIG undefined FUN_143718420(void)

void FUN_143718420(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)0x0;
  if (*param_1 != 0) {
    plVar1 = (longlong *)FUN_143718200(*param_1,param_1[1]);
  }
  if (*plVar1 != 0) {
    FUN_14376f8a0(param_2);
    return;
  }
  return;
}



// FUNCTION 143718460 FUN_143718460 body=99 status=ok
// SIG undefined FUN_143718460(void)

undefined8 * FUN_143718460(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkTask::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x30);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1437184d0 addDependencies body=74 status=ok
// SIG undefined addDependencies(void)

void hkTaskQueue::addDependencies(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  
  if (0 < param_3) {
    lVar1 = (longlong)param_3;
    do {
      (**(code **)(*param_1 + 0x28))(param_1,*param_2,param_2[1]);
      param_2 = param_2 + 2;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 143718520 FUN_143718520 body=377 status=ok
// SIG undefined FUN_143718520(void)

void FUN_143718520(longlong *param_1,longlong *param_2,undefined1 (*param_3) [16])

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_100 [2];
  undefined **local_f0;
  longlong *local_e8;
  undefined4 *local_e0;
  undefined1 local_d8 [16];
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 local_a0 [38];
  
  if (0 < *(int *)*param_3) {
    local_d8 = *param_3;
    iVar2 = local_d8._4_4_;
    local_a0[0] = 0;
    local_f0 = hkTaskQueue_BatchingTask::vftable;
    uVar1 = local_d8._0_4_;
    local_e0 = local_a0;
    if (iVar2 < 1) {
      iVar2 = local_d8._0_4_;
      if ((1 < *(int *)(DAT_146b83e88 + 0x18)) &&
         (iVar2 = (int)local_d8._0_4_ / (*(int *)(DAT_146b83e88 + 0x18) * 2), iVar2 < 1)) {
        iVar2 = 1;
      }
      local_d8._4_4_ = iVar2;
    }
    iVar2 = (uint)((int)uVar1 % iVar2 != 0) + (int)uVar1 / iVar2;
    local_e8 = param_2;
    (**(code **)(*param_2 + 8))(param_2,local_d8,iVar2);
    if (iVar2 < 2) {
      local_a8 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_c0 = param_1;
      FUN_1437186c0(&local_f0,&local_c0);
    }
    else {
      (**(code **)(*param_1 + 8))(param_1,local_100,1,8);
      (**(code **)(*param_1 + 0x18))(param_1,local_100[0],&local_f0,0x40);
      (**(code **)(*param_1 + 0x20))(param_1,local_100[0],iVar2,1);
      (**(code **)(*param_1 + 0x38))(param_1,local_100,1,0,8);
      (**(code **)(*param_1 + 0x50))(param_1,local_100[0]);
      (**(code **)(*param_1 + 0x10))(param_1,local_100,1,8);
    }
  }
  return;
}



// FUNCTION 1437186a0 isFinished body=17 status=ok
// SIG undefined isFinished(void)

undefined8 hkTaskQueue::isFinished(longlong *param_1)

{
  (**(code **)(*param_1 + 0x50))();
  return 1;
}



// FUNCTION 1437186c0 FUN_1437186c0 body=156 status=ok
// SIG undefined FUN_1437186c0(void)

void FUN_1437186c0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  (**(code **)(**(longlong **)(param_1 + 8) + 0x10))
            (*(longlong **)(param_1 + 8),param_2,param_1 + 0x18);
  piVar1 = *(int **)(param_1 + 0x10);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + *(int *)(param_1 + 0x1c);
  UNLOCK();
  iVar4 = *(int *)(param_1 + 0x18);
  if (iVar2 < iVar4) {
    do {
      iVar3 = *(int *)(param_1 + 0x1c) + iVar2;
      if (iVar4 < iVar3) {
        iVar3 = iVar4;
      }
      (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                (*(longlong **)(param_1 + 8),param_2,param_1 + 0x18,iVar2,iVar3 - iVar2);
      piVar1 = *(int **)(param_1 + 0x10);
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + *(int *)(param_1 + 0x1c);
      UNLOCK();
      iVar4 = *(int *)(param_1 + 0x18);
    } while (iVar2 < iVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x000143718758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
            (*(longlong **)(param_1 + 8),param_2,param_1 + 0x18);
  return;
}



// FUNCTION 143718760 FUN_143718760 body=403 status=ok
// SIG undefined FUN_143718760(void)

void FUN_143718760(longlong *param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  LPVOID pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 local_res20;
  
  if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000143718783. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x50))(param_1,*param_2);
    return;
  }
  if (1 < param_3) {
    (**(code **)(*param_1 + 8))(param_1,&local_res20);
    (**(code **)(*param_1 + 0x18))(param_1,local_res20,0,0x40);
    pvVar2 = TlsGetValue(DAT_146b7bf70);
    if (pvVar2 == (LPVOID)0x0) {
      pvVar2 = DAT_146b7bf68;
    }
    uVar6 = param_3 * 0x10 + 0x7fU & 0xffffff80;
    puVar3 = *(undefined8 **)((longlong)pvVar2 + 0x18);
    if ((*(int *)((longlong)pvVar2 + 0x10) < (int)uVar6) ||
       (*(ulonglong *)((longlong)pvVar2 + 0x20) <
        (ulonglong)((longlong)(int)uVar6 + (longlong)puVar3))) {
      puVar3 = (undefined8 *)FUN_1437138c0(pvVar2,uVar6);
    }
    else {
      *(longlong *)((longlong)pvVar2 + 0x18) = (longlong)(int)uVar6 + (longlong)puVar3;
    }
    lVar5 = 0;
    puVar4 = puVar3;
    if (0 < param_3) {
      do {
        puVar1 = param_2 + lVar5;
        lVar5 = lVar5 + 1;
        *puVar4 = *puVar1;
        puVar4[1] = local_res20;
        puVar4 = puVar4 + 2;
      } while (lVar5 < param_3);
    }
    (**(code **)(*param_1 + 0x30))(param_1,puVar3,param_3);
    (**(code **)(*param_1 + 0x38))(param_1,&local_res20,1,0,8);
    (**(code **)(*param_1 + 0x50))(param_1,local_res20);
    (**(code **)(*param_1 + 0x10))(param_1,&local_res20,1);
    pvVar2 = TlsGetValue(DAT_146b7bf70);
    if (pvVar2 == (LPVOID)0x0) {
      pvVar2 = DAT_146b7bf68;
    }
    if ((((int)uVar6 <= *(int *)((longlong)pvVar2 + 0x10)) &&
        ((longlong)(int)uVar6 + (longlong)puVar3 == *(longlong *)((longlong)pvVar2 + 0x18))) &&
       (*(undefined8 **)((longlong)pvVar2 + 0x28) != puVar3)) {
      *(undefined8 **)((longlong)pvVar2 + 0x18) = puVar3;
      return;
    }
    FUN_143713ff0(pvVar2,puVar3);
  }
  return;
}



// FUNCTION 143718900 FUN_143718900 body=14 status=ok
// SIG undefined FUN_143718900(void)

void FUN_143718900(undefined8 param_1,undefined8 param_2)

{
  FUN_143770b00(param_2,param_1);
  return;
}



// FUNCTION 143718910 FUN_143718910 body=51 status=ok
// SIG undefined FUN_143718910(void)

undefined4 * FUN_143718910(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_14370d870(param_1 + 2,0);
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  return param_1;
}



// FUNCTION 143718950 FUN_143718950 body=9 status=ok
// SIG undefined FUN_143718950(void)

void FUN_143718950(longlong param_1)

{
  FWindowsCriticalSection::~FWindowsCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 143718960 FUN_143718960 body=21 status=ok
// SIG undefined FUN_143718960(void)

void FUN_143718960(int *param_1,undefined8 param_2)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + -1;
  UNLOCK();
  if (iVar1 + -1 < 0) {
    FUN_1437192b0(param_2);
    return;
  }
  return;
}



// FUNCTION 143718980 FUN_143718980 body=379 status=ok
// SIG undefined FUN_143718980(void)

void FUN_143718980(int *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  LPVOID pvVar4;
  int iVar5;
  bool bVar6;
  undefined8 local_28;
  int local_20;
  longlong local_18;
  
  iVar5 = *param_1;
  while( true ) {
    while (iVar5 == 0) {
      LOCK();
      iVar5 = *param_1;
      bVar6 = iVar5 == 0;
      if (bVar6) {
        *param_1 = 1;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar6) {
        return;
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
    LOCK();
    iVar1 = *param_1;
    bVar6 = iVar5 == iVar1;
    if (bVar6) {
      *param_1 = iVar5 + 1;
      iVar1 = iVar5;
    }
    iVar5 = iVar1;
    UNLOCK();
    if (bVar6) break;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  }
  local_28 = 0;
  lVar2 = LowLevelTasks::FTask::GetActiveTask();
  if (lVar2 == 0) {
    local_20 = -1;
    pvVar4 = TlsGetValue(DAT_146b7bf70);
    if (pvVar4 == (LPVOID)0x0) {
      pvVar4 = DAT_146b7bf68;
    }
    lVar3 = (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar4 + 0x58),8);
    if (lVar3 == 0) {
      local_18 = 0;
    }
    else {
      local_18 = Semaphore::Semaphore(lVar3,0,1000,0);
    }
  }
  else {
    local_18 = lVar2;
    local_20 = FUN_1437195f0();
  }
  if (*(longlong **)(param_1 + 0xe) == (longlong *)0x0) {
    *(undefined8 **)(param_1 + 0xe) = &local_28;
    *(undefined8 **)(param_1 + 0xc) = &local_28;
  }
  else {
    **(longlong **)(param_1 + 0xe) = (longlong)&local_28;
    *(undefined8 **)(param_1 + 0xe) = &local_28;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  if (-1 < local_20) {
    FUN_1437192b0(lVar2);
    return;
  }
  FWindowsPlatformProcess::WaitForProc(local_18);
  lVar2 = local_18;
  if (local_18 == 0) {
    return;
  }
  hkSemaphore::~hkSemaphore(local_18);
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 0x10))
            (*(longlong **)((longlong)pvVar4 + 0x58),lVar2,8);
  return;
}



// FUNCTION 143718b00 FUN_143718b00 body=169 status=ok
// SIG undefined FUN_143718b00(void)

void FUN_143718b00(int *param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = *param_1;
  do {
    while (iVar4 != 1) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
      LOCK();
      iVar1 = *param_1;
      bVar5 = iVar4 == iVar1;
      if (bVar5) {
        *param_1 = iVar4 + -1;
        iVar1 = iVar4;
      }
      iVar4 = iVar1;
      UNLOCK();
      if (bVar5) {
        plVar2 = *(longlong **)(param_1 + 0xc);
        if (*plVar2 == 0) {
          param_1[0xe] = 0;
          param_1[0xf] = 0;
          param_1[0xc] = 0;
          param_1[0xd] = 0;
        }
        else {
          *(longlong *)(param_1 + 0xc) = *plVar2;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
        if (-1 < (int)plVar2[1]) {
          FUN_1437198c0();
          return;
        }
        hkSemaphore::release(plVar2[2],1);
        return;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
    }
    LOCK();
    iVar1 = *param_1;
    iVar3 = iVar1;
    if (iVar1 == 1) {
      *param_1 = 0;
      iVar3 = iVar4;
    }
    iVar4 = iVar3;
    UNLOCK();
  } while (iVar1 != 1);
  return;
}



// FUNCTION 143718bb0 FUN_143718bb0 body=28 status=ok
// SIG undefined FUN_143718bb0(void)

void FUN_143718bb0(int *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + 1;
  UNLOCK();
  if (iVar1 < 0) {
    FUN_1437198c0(param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 143718bd0 thunk_FUN_143719c70 body=5 status=ok
// SIG undefined thunk_FUN_143719c70(void)

void thunk_FUN_143719c70(undefined4 param_1)

{
  longlong lVar1;
  
  lVar1 = LowLevelTasks::FTask::GetActiveTask();
  if (lVar1 != 0) {
    FUN_143719ca0(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 143718be0 FUN_143718be0 body=53 status=ok
// SIG undefined FUN_143718be0(void)

void FUN_143718be0(undefined8 param_1,undefined4 param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  FUN_143703880(*(undefined8 *)((longlong)pvVar1 + 0x58),param_2,0x40);
  return;
}



// FUNCTION 143718c20 FUN_143718c20 body=49 status=ok
// SIG undefined FUN_143718c20(void)

void FUN_143718c20(undefined8 param_1,undefined8 param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  FUN_1437038e0(*(undefined8 *)((longlong)pvVar1 + 0x58),param_2);
  return;
}



// FUNCTION 143718c60 FUN_143718c60 body=54 status=ok
// SIG undefined FUN_143718c60(void)

void FUN_143718c60(undefined8 param_1,undefined4 *param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  FUN_143703880(*(undefined8 *)((longlong)pvVar1 + 0x58),*param_2,0x40);
  return;
}



// FUNCTION 143718ca0 FUN_143718ca0 body=89 status=ok
// SIG undefined FUN_143718ca0(void)

void FUN_143718ca0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  FUN_143703910(*(undefined8 *)((longlong)pvVar1 + 0x58),param_2,param_3,*param_4,0x40);
  return;
}



// FUNCTION 143718d00 FUN_143718d00 body=51 status=ok
// SIG undefined FUN_143718d00(void)

void FUN_143718d00(undefined8 param_1,undefined8 param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x000143718d2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x40))
            (*(longlong **)((longlong)pvVar1 + 0x58),param_2);
  return;
}



// FUNCTION 143718d40 FUN_143718d40 body=64 status=ok
// SIG undefined FUN_143718d40(void)

void FUN_143718d40(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  FUN_1437039f0(*(undefined8 *)((longlong)pvVar1 + 0x58),param_2,param_3);
  return;
}



// FUNCTION 143718d80 FUN_143718d80 body=105 status=ok
// SIG undefined FUN_143718d80(void)

undefined1 * FUN_143718d80(undefined1 *param_1)

{
  undefined4 uVar1;
  wchar_t *pwVar2;
  undefined1 *puVar3;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  *(undefined4 *)(param_1 + 0x18) = 0;
  puVar3 = param_1 + 0x20;
  FUN_143716620(puVar3,"HavokWorkerThread");
  pwVar2 = AK::MemoryMgr::GetPoolName((long)puVar3);
  *(int *)(param_1 + 0x28) = (int)pwVar2;
  uVar1 = FGenericPlatformCompression::CompressMemoryBound();
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return param_1;
}



// FUNCTION 143718df0 FUN_143718df0 body=188 status=ok
// SIG undefined FUN_143718df0(void)

undefined8 * FUN_143718df0(undefined8 *param_1,longlong param_2)

{
  LPVOID pvVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 *local_18;
  
  FUN_143718eb0();
  local_28 = 2;
  *param_1 = hkAsyncTaskQueueThreadPool::vftable;
  lVar3 = 0;
  param_1[0xe] = 0;
  local_20 = *(undefined4 *)(param_2 + 4);
  local_18 = param_1;
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x3a0);
  if (lVar2 != 0) {
    lVar3 = FUN_143710be0(lVar2,&local_28);
  }
  if (lVar3 != param_1[0xe]) {
    if (param_1[0xe] != 0) {
      FUN_14370c150();
    }
    param_1[0xe] = lVar3;
  }
  *(undefined4 *)(param_1[0xe] + 0x380) = *(undefined4 *)(param_2 + 4);
  FUN_1437199f0(param_1,param_2);
  return param_1;
}



// FUNCTION 143718eb0 FUN_143718eb0 body=361 status=ok
// SIG undefined FUN_143718eb0(void)

undefined8 * FUN_143718eb0(undefined8 *param_1,undefined1 *param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint local_res8 [2];
  
  uVar9 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkAsyncThreadPool::vftable;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined1 *)(param_1 + 4) = 0;
  uVar1 = *(uint *)(param_2 + 4);
  uVar7 = (ulonglong)uVar1;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  uVar3 = uVar9;
  local_res8[0] = uVar1;
  if (uVar1 != 0) {
    uVar3 = FUN_143702d60(&PTR_vftable_1467f1240,0x80,local_res8);
  }
  param_1[5] = uVar3;
  *(uint *)(param_1 + 6) = uVar1;
  uVar5 = 0x80000000;
  if (local_res8[0] != 0) {
    uVar5 = local_res8[0];
  }
  *(uint *)((longlong)param_1 + 0x34) = uVar5;
  if (0 < (int)uVar1) {
    lVar6 = uVar3 + 0x30;
    do {
      if (lVar6 != 0x30) {
        FHeapAllocator::ForAnyElementType::ForAnyElementType(lVar6 + -0x20);
        FUN_14370d870(lVar6,0);
        Semaphore::Semaphore(lVar6 + 0x30,0,1000,0);
      }
      lVar6 = lVar6 + 0x80;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  param_1[10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x40);
  uVar4 = FUN_143763080();
  param_1[8] = uVar4;
  iVar2 = *(int *)(DAT_146b83e88 + 0x18);
  uVar3 = uVar9;
  uVar7 = uVar9;
  if (0 < *(int *)(param_2 + 4)) {
    do {
      puVar10 = (undefined8 *)(param_1[5] + uVar7);
      *puVar10 = param_1;
      iVar8 = (int)uVar9;
      *(int *)(puVar10 + 1) = iVar8;
      if (*(int *)(param_2 + 0x10) < 1) {
        *(undefined1 *)((longlong)puVar10 + 0x24) = 1;
        *(int *)(puVar10 + 4) = iVar8 % iVar2;
      }
      else {
        *(undefined1 *)((longlong)puVar10 + 0x24) = *param_2;
        *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(*(longlong *)(param_2 + 8) + uVar3 * 4);
      }
      uVar9 = (ulonglong)(iVar8 + 1U);
      *(undefined1 *)((longlong)puVar10 + 0x25) =
           *(undefined1 *)(uVar3 + *(longlong *)(param_2 + 0x30));
      uVar3 = uVar3 + 1;
      uVar7 = uVar7 + 0x80;
    } while ((int)(iVar8 + 1U) < *(int *)(param_2 + 4));
  }
  return param_1;
}



// FUNCTION 143719020 FUN_143719020 body=51 status=ok
// SIG undefined FUN_143719020(void)

void FUN_143719020(undefined8 *param_1)

{
  *param_1 = hkAsyncTaskQueueThreadPool::vftable;
  FUN_143719b50();
  if (param_1[0xe] != 0) {
    FUN_14370c150();
  }
  FUN_143719060(param_1);
  return;
}



// FUNCTION 143719060 FUN_143719060 body=291 status=ok
// SIG undefined FUN_143719060(void)

void FUN_143719060(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar4;
  
  lVar1 = param_1[10];
  *param_1 = hkAsyncThreadPool::vftable;
  if (lVar1 != 0) {
    uVar2 = FUN_143703a50();
    *(undefined4 *)(lVar1 + 0x18) = 0;
    if (-1 < (int)*(uint *)(lVar1 + 0x1c)) {
      FUN_143702e10(uVar2,*(undefined8 *)(lVar1 + 0x10),4,*(uint *)(lVar1 + 0x1c) & 0x3fffffff);
    }
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(undefined4 *)(lVar1 + 0x1c) = 0x80000000;
    hkSemaphore::~hkSemaphore(lVar1);
    pvVar3 = TlsGetValue(DAT_146b7bf70);
    if (pvVar3 == (LPVOID)0x0) {
      pvVar3 = DAT_146b7bf68;
    }
    (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 0x10))
              (*(longlong **)((longlong)pvVar3 + 0x58),lVar1,0x28);
  }
  iVar4 = *(int *)(param_1 + 6) + -1;
  if (-1 < iVar4) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1[5] + 0x30 + (longlong)iVar4 * 0x80);
    do {
      hkSemaphore::~hkSemaphore(&lpCriticalSection[1].LockCount);
      FWindowsCriticalSection::~FWindowsCriticalSection(lpCriticalSection);
      thunk_FUN_143765cf0(&lpCriticalSection[-1].LockCount);
      lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[-4].SpinCount;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  *(undefined4 *)(param_1 + 6) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x34)) {
    FUN_143702e10(&PTR_vftable_1467f1240,param_1[5],0x80,
                  *(uint *)((longlong)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 143719190 FUN_143719190 body=139 status=ok
// SIG undefined FUN_143719190(void)

longlong FUN_143719190(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143719020();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x78;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x78);
    }
  }
  return param_1;
}



// FUNCTION 143719220 FUN_143719220 body=139 status=ok
// SIG undefined FUN_143719220(void)

longlong FUN_143719220(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143719060();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x70;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
    }
  }
  return param_1;
}



// FUNCTION 1437192b0 FUN_1437192b0 body=177 status=ok
// SIG undefined FUN_1437192b0(void)

void FUN_1437192b0(longlong param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar2;
  longlong lVar3;
  
  iVar2 = FUN_1437195f0();
  lVar3 = (longlong)iVar2 * 0x80 + *(longlong *)(param_1 + 0x28);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x30));
  piVar1 = (int *)(lVar3 + 0x2c);
  *piVar1 = *piVar1 + -1;
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar3 + 0x30);
  if (*piVar1 == 0) {
    if (*(int *)(lVar3 + 0x28) == 0) {
      *(undefined4 *)(lVar3 + 0x28) = 3;
      LeaveCriticalSection(lpCriticalSection);
    }
    else {
      *(undefined4 *)(lVar3 + 0x28) = 4;
      LeaveCriticalSection(lpCriticalSection);
      LOCK();
      piVar1 = (int *)(param_1 + 0x58);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FUN_143770cd0(*(undefined8 *)(param_1 + 0x50));
      }
    }
    *(undefined1 *)(lVar3 + 0x58) = 1;
    FWindowsPlatformProcess::WaitForProc(lVar3 + 0x60);
    *(undefined1 *)(lVar3 + 0x58) = 0;
    FUN_143719ca0(param_1,0x71ad08b9);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014371935a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 143719370 FUN_143719370 body=9 status=ok
// SIG undefined FUN_143719370(void)

void FUN_143719370(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



// FUNCTION 143719380 FUN_143719380 body=321 status=ok
// SIG undefined FUN_143719380(void)

void FUN_143719380(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int local_res8 [2];
  
  iVar4 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    do {
      FUN_143770c20(*(undefined8 *)(param_1 + 0x50),local_res8);
      if (local_res8[0] == -1) {
        lVar3 = *(longlong *)(param_1 + 0x28);
        lVar5 = (longlong)*(int *)(param_1 + 0x30) * 0x80 + lVar3;
        for (; lVar3 != lVar5; lVar3 = lVar3 + 0x80) {
          if (*(int *)(lVar3 + 0x28) == 4) {
            EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x30));
            if (*(int *)(lVar3 + 0x28) == 4) {
              if (*(char *)(lVar3 + 0x25) == '\x01') {
                FUN_143765d30(lVar3 + 0x10,*(undefined4 *)(param_1 + 0x1c));
              }
              *(undefined4 *)(lVar3 + 0x28) = 3;
              iVar4 = iVar4 + 1;
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x30));
          }
        }
      }
      else {
        lVar3 = (longlong)local_res8[0] * 0x80 + *(longlong *)(param_1 + 0x28);
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x30));
        if (*(int *)(lVar3 + 0x28) == 2) {
          *(undefined4 *)(lVar3 + 0x28) = 0;
          if (*(char *)(lVar3 + 0x25) == '\0') {
LAB_14371946b:
            hkSemaphore::release(lVar3 + 0x60,1);
          }
          else if (*(char *)(lVar3 + 0x25) == '\x01') {
            FUN_143765d30(lVar3 + 0x10,*(undefined4 *)(param_1 + 0x1c));
            goto LAB_14371946b;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x30));
          LOCK();
          piVar1 = (int *)(param_1 + 0x58);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          iVar4 = iVar4 + 1;
          if (iVar2 == 1) {
            if (iVar4 == *(int *)(param_1 + 0x30)) {
              return;
            }
            FUN_143770cd0(*(undefined8 *)(param_1 + 0x50));
          }
        }
        else {
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x30));
          iVar4 = iVar4 + 1;
        }
      }
    } while (iVar4 != *(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 1437194d0 FUN_1437194d0 body=288 status=ok
// SIG undefined FUN_1437194d0(void)

void FUN_1437194d0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  LOCK();
  UNLOCK();
  iVar6 = *(int *)(param_1 + 0x38);
  if (iVar6 != *(int *)(param_1 + 0x30)) {
    do {
      iVar1 = iVar6 + 1;
      LOCK();
      iVar3 = *(int *)(param_1 + 0x38);
      bVar8 = iVar6 == iVar3;
      if (bVar8) {
        *(int *)(param_1 + 0x38) = iVar1;
        iVar3 = iVar6;
      }
      UNLOCK();
      if (bVar8) {
        lVar7 = (longlong)iVar6 * 0x80 + *(longlong *)(param_1 + 0x28);
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x30));
        if (*(int *)(lVar7 + 0x28) == 0) {
          *(undefined4 *)(lVar7 + 0x28) = 1;
          LOCK();
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
          UNLOCK();
          if (*(char *)(lVar7 + 0x25) == '\x01') {
            FUN_143765d30(lVar7 + 0x10,*(undefined4 *)(param_1 + 0x18));
          }
          else if (*(char *)(lVar7 + 0x25) == '\x02') {
            hkSemaphore::release(lVar7 + 0x60,1);
          }
        }
        else if (*(int *)(lVar7 + 0x28) == 3) {
          *(undefined4 *)(lVar7 + 0x28) = 4;
          if (*(char *)(lVar7 + 0x25) == '\x01') {
            FUN_143765d30(lVar7 + 0x10,*(undefined4 *)(param_1 + 0x18));
          }
        }
        else {
          FUN_143770cf0(*(undefined8 *)(param_1 + 0x50),iVar6);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x30));
        iVar3 = iVar1;
        if (*(longlong *)(param_1 + 0x60) != 0) {
          uVar4 = hkSystemClock::getTickCounter();
          uVar2 = *(ulonglong *)(param_1 + 0x68);
          do {
            if (uVar4 <= uVar2) break;
            LOCK();
            uVar5 = *(ulonglong *)(param_1 + 0x68);
            bVar8 = uVar2 == uVar5;
            if (bVar8) {
              *(ulonglong *)(param_1 + 0x68) = uVar4;
              uVar5 = uVar2;
            }
            UNLOCK();
            uVar2 = uVar5;
          } while (!bVar8);
        }
      }
      iVar6 = iVar3;
    } while (iVar6 != *(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 1437195f0 FUN_1437195f0 body=28 status=ok
// SIG undefined FUN_1437195f0(void)

undefined4 FUN_1437195f0(void)

{
  return *(undefined4 *)
          (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x18);
}



// FUNCTION 143719610 GetActiveTask body=29 status=ok
// SIG undefined GetActiveTask(void)

undefined8 LowLevelTasks::FTask::GetActiveTask(void)

{
  return *(undefined8 *)
          (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x20);
}



// FUNCTION 143719630 FUN_143719630 body=18 status=ok
// SIG undefined FUN_143719630(void)

longlong FUN_143719630(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x70) + 0x18;
  if (*(longlong *)(param_1 + 0x70) == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 143719650 FUN_143719650 body=129 status=ok
// SIG undefined FUN_143719650(void)

void FUN_143719650(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  
  lVar1 = hkSystemClock::getTickCounter();
  dVar3 = (double)*(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) < 0) {
    dVar3 = dVar3 + 1.8446744073709552e+19;
  }
  lVar2 = 0;
  dVar3 = dVar3 * (double)param_2;
  if ((9.223372036854776e+18 <= dVar3) &&
     (dVar3 = dVar3 - 9.223372036854776e+18, dVar3 < 9.223372036854776e+18)) {
    lVar2 = -0x8000000000000000;
  }
  FUN_1437196e0(param_1,lVar1 + (longlong)dVar3 + lVar2);
  return;
}



// FUNCTION 1437196e0 FUN_1437196e0 body=397 status=ok
// SIG undefined FUN_1437196e0(void)

void FUN_1437196e0(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  LPVOID pvVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_68 [8];
  longlong local_60;
  undefined4 local_58;
  undefined1 local_50 [8];
  longlong local_48;
  undefined4 local_40;
  undefined1 local_38 [8];
  longlong local_30;
  undefined4 local_28;
  undefined1 local_20 [8];
  longlong local_18;
  undefined4 local_10;
  
  uVar1 = hkSystemClock::getTickCounter();
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  *(ulonglong *)(param_1 + 0x48) = param_2;
  LOCK();
  UNLOCK();
  lVar5 = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  FUN_143770d10(*(undefined8 *)(param_1 + 0x50));
  FUN_1437194d0(param_1);
  FUN_143719380(param_1);
  uVar2 = hkSystemClock::getTickCounter();
  lVar3 = *(longlong *)(param_1 + 0x68);
  lVar6 = lVar3 - *(longlong *)(param_1 + 0x60);
  if (uVar2 < param_2) {
    lVar3 = uVar2 - lVar3;
  }
  else {
    lVar3 = param_2 - lVar3;
    lVar5 = uVar2 - param_2;
  }
  pvVar4 = TlsGetValue(DAT_146b8198c);
  if (pvVar4 != (LPVOID)0x0) {
    FUN_14370d320(pvVar4,"YtprocessForegroundImpl");
    FUN_14370d320(pvVar4,"YtdriveToForeground");
  }
  local_58 = 1;
  local_60 = lVar6;
  if (pvVar4 != (LPVOID)0x0) {
    FUN_14370d380(pvVar4,&DAT_145b8ec24,local_68);
    FUN_14370d320(pvVar4,"Ytwaiting");
  }
  local_40 = 1;
  local_48 = lVar3;
  if (pvVar4 != (LPVOID)0x0) {
    FUN_14370d380(pvVar4,&DAT_145b8ec24,local_50);
    FUN_14370d320(pvVar4,"YtdriveToBackground");
  }
  local_28 = 1;
  local_30 = lVar5;
  if (pvVar4 != (LPVOID)0x0) {
    FUN_14370d380(pvVar4,&DAT_145b8ec24,local_38);
  }
  local_10 = 1;
  if (pvVar4 != (LPVOID)0x0) {
    local_18 = lVar5 + lVar3 + lVar6;
    FUN_14370d380(pvVar4,&DAT_145b8ec24,local_20);
  }
  return;
}



// FUNCTION 143719870 FUN_143719870 body=9 status=ok
// SIG undefined FUN_143719870(void)

void FUN_143719870(undefined8 param_1)

{
  FUN_1437196e0(param_1,0xffffffffffffffff);
  return;
}



// FUNCTION 143719880 FUN_143719880 body=56 status=ok
// SIG undefined FUN_143719880(void)

void FUN_143719880(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  FUN_143719870();
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x70) + 0x18);
  (**(code **)(*plVar1 + 0x50))(plVar1,param_2);
  FUN_143719370(param_1);
  return;
}



// FUNCTION 1437198c0 FUN_1437198c0 body=173 status=ok
// SIG undefined FUN_1437198c0(void)

void FUN_1437198c0(longlong param_1,int param_2)

{
  LPCRITICAL_SECTION p_Var1;
  longlong lVar2;
  int iVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  lVar4 = (longlong)param_2 * 0x80 + lVar2;
  iVar3 = FUN_1437195f0();
  if (iVar3 == -1) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x30));
    FUN_143719970(param_1,lVar4);
    lpCriticalSection_00 = (LPCRITICAL_SECTION)(lVar4 + 0x30);
  }
  else {
    p_Var1 = (LPCRITICAL_SECTION)(lVar4 + 0x30);
    lpCriticalSection_00 = (LPCRITICAL_SECTION)(lVar2 + 0x30 + (longlong)iVar3 * 0x80);
    lpCriticalSection = p_Var1;
    if (lpCriticalSection_00 < p_Var1) {
      lpCriticalSection = lpCriticalSection_00;
      lpCriticalSection_00 = p_Var1;
    }
    EnterCriticalSection(lpCriticalSection);
    EnterCriticalSection(lpCriticalSection_00);
    FUN_143719970(param_1,lVar4);
    LeaveCriticalSection(lpCriticalSection);
  }
                    /* WARNING: Could not recover jumptable at 0x000143719966. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection_00);
  return;
}



// FUNCTION 143719970 FUN_143719970 body=84 status=ok
// SIG undefined FUN_143719970(void)

void FUN_143719970(longlong param_1,longlong param_2)

{
  if (*(int *)(param_2 + 0x2c) == 0) {
    *(undefined4 *)(param_2 + 0x2c) = 1;
    if (*(int *)(param_2 + 0x28) != 3) {
      *(undefined4 *)(param_2 + 0x28) = 1;
      LOCK();
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
      UNLOCK();
      hkSemaphore::release(param_2 + 0x60,1);
      return;
    }
    *(undefined4 *)(param_2 + 0x28) = 0;
    if (*(char *)(param_2 + 0x25) != '\x02') {
      hkSemaphore::release(param_2 + 0x60,1);
      return;
    }
  }
  else {
    *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
  }
  return;
}



// FUNCTION 1437199d0 FUN_1437199d0 body=28 status=ok
// SIG undefined FUN_1437199d0(void)

void FUN_1437199d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x390) = param_2;
    *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x398) = param_3;
  }
  return;
}



// FUNCTION 1437199f0 FUN_1437199f0 body=347 status=ok
// SIG undefined FUN_1437199f0(void)

void FUN_1437199f0(longlong param_1,longlong param_2)

{
  LPVOID pvVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 4);
  uVar3 = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x30);
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x28);
  if (lVar2 != 0) {
    uVar3 = FUN_143770b50(lVar2,*(undefined4 *)(param_2 + 4));
  }
  lVar2 = *(longlong *)(param_1 + 0x50);
  if (lVar2 != 0) {
    uVar4 = FUN_143703a50();
    *(undefined4 *)(lVar2 + 0x18) = 0;
    if (-1 < (int)*(uint *)(lVar2 + 0x1c)) {
      FUN_143702e10(uVar4,*(undefined8 *)(lVar2 + 0x10),4,*(uint *)(lVar2 + 0x1c) & 0x3fffffff);
    }
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined4 *)(lVar2 + 0x1c) = 0x80000000;
    hkSemaphore::~hkSemaphore(lVar2);
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
              (*(longlong **)((longlong)pvVar1 + 0x58),lVar2,0x28);
  }
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  lVar2 = *(longlong *)(param_1 + 0x28);
  lVar5 = (longlong)*(int *)(param_1 + 0x30) * 0x80 + lVar2;
  for (; lVar2 != lVar5; lVar2 = lVar2 + 0x80) {
    *(undefined4 *)(lVar2 + 0x28) = 1;
    *(undefined4 *)(lVar2 + 0x2c) = 1;
    *(undefined1 *)(lVar2 + 0x58) = 0;
    *(undefined8 *)(lVar2 + 0x68) = 0;
    FUN_143765d50(lVar2 + 0x10,local_res8,FUN_143719e90,lVar2,
                  *(ulonglong *)(param_2 + 0x20) & 0xfffffffffffffffe,
                  *(undefined4 *)(param_2 + 0x18));
  }
  FUN_143719380(param_1);
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



// FUNCTION 143719b50 FUN_143719b50 body=31 status=ok
// SIG undefined FUN_143719b50(void)

void FUN_143719b50(longlong param_1)

{
  FUN_143712420(*(undefined8 *)(param_1 + 0x70));
  FUN_143719b70(param_1);
  return;
}



// FUNCTION 143719b70 FUN_143719b70 body=255 status=ok
// SIG undefined FUN_143719b70(void)

void FUN_143719b70(longlong param_1)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x20) != '\0') {
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0xffffffffffffffff;
    LOCK();
    UNLOCK();
    *(undefined4 *)(param_1 + 0x38) = 0;
    FUN_143770d10(*(undefined8 *)(param_1 + 0x50));
    FUN_1437194d0(param_1);
    lVar3 = *(longlong *)(param_1 + 0x28);
    lVar4 = (longlong)*(int *)(param_1 + 0x30) * 0x80 + lVar3;
    for (; lVar3 != lVar4; lVar3 = lVar3 + 0x80) {
      FUN_143765cf0(lVar3 + 0x10);
    }
    lVar3 = *(longlong *)(param_1 + 0x50);
    if (lVar3 != 0) {
      uVar1 = FUN_143703a50();
      *(undefined4 *)(lVar3 + 0x18) = 0;
      if (-1 < (int)*(uint *)(lVar3 + 0x1c)) {
        FUN_143702e10(uVar1,*(undefined8 *)(lVar3 + 0x10),4,*(uint *)(lVar3 + 0x1c) & 0x3fffffff);
      }
      *(undefined8 *)(lVar3 + 0x10) = 0;
      *(undefined4 *)(lVar3 + 0x1c) = 0x80000000;
      hkSemaphore::~hkSemaphore(lVar3);
      pvVar2 = TlsGetValue(DAT_146b7bf70);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar2 + 0x58),lVar3,0x28);
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 143719c70 FUN_143719c70 body=39 status=ok
// SIG undefined FUN_143719c70(void)

void FUN_143719c70(undefined4 param_1)

{
  longlong lVar1;
  
  lVar1 = LowLevelTasks::FTask::GetActiveTask();
  if (lVar1 != 0) {
    FUN_143719ca0(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 143719ca0 FUN_143719ca0 body=171 status=ok
// SIG undefined FUN_143719ca0(void)

void FUN_143719ca0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  iVar1 = FUN_1437195f0();
  lVar3 = (longlong)iVar1 * 0x80 + *(longlong *)(param_1 + 0x28);
  FUN_1437194d0(param_1);
  if ((*(int *)(lVar3 + 0x28) == 1) &&
     (uVar2 = hkSystemClock::getTickCounter(), *(ulonglong *)(param_1 + 0x48) < uVar2)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x30));
    if (*(int *)(lVar3 + 0x28) == 1) {
      *(undefined4 *)(lVar3 + 0x28) = 2;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x30));
      FUN_143770cf0(*(undefined8 *)(param_1 + 0x50),iVar1);
      *(undefined1 *)(lVar3 + 0x58) = 1;
      FWindowsPlatformProcess::WaitForProc(lVar3 + 0x60);
      *(undefined1 *)(lVar3 + 0x58) = 0;
      if (*(char *)(lVar3 + 0x25) == '\x02') {
        FUN_1437194d0(param_1);
      }
    }
    else {
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x30));
    }
  }
  return;
}



// FUNCTION 143719d50 FUN_143719d50 body=309 status=ok
// SIG undefined FUN_143719d50(void)

void FUN_143719d50(longlong *param_1,int param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  LPVOID pvVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 local_88 [128];
  
  FUN_143765ee0(local_88,param_2 + 1000);
  lVar8 = (longlong)param_2 * 0x80 + param_1[5];
  pvVar6 = TlsGetValue(DAT_146b8198c);
  if ((pvVar6 != (LPVOID)0x0) && (0 < *(int *)((longlong)param_1 + 0x5c))) {
    FUN_14370d4e0(pvVar6);
  }
  pvVar5 = ThreadLocalStoragePointer;
  cVar2 = *(char *)(lVar8 + 0x24);
  uVar7 = (ulonglong)_tls_index;
  *(LPVOID *)(lVar8 + 0x68) = pvVar6;
  lVar4 = *(longlong *)((longlong)pvVar5 + uVar7 * 8);
  *(int *)(lVar4 + 0x18) = param_2;
  *(longlong **)(lVar4 + 0x20) = param_1;
  if (cVar2 == '\x02') {
    FUN_143765d40();
  }
  else {
    FUN_143765d20(lVar8 + 0x10,*(undefined4 *)(lVar8 + 0x20));
  }
  if (*(char *)(lVar8 + 0x25) != '\x01') {
    FUN_143765d30(lVar8 + 0x10,(int)param_1[3]);
  }
  FUN_143719ca0(param_1,0xb90a045c);
  (**(code **)(*param_1 + 0x20))(param_1,param_2);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x30));
  iVar3 = *(int *)(lVar8 + 0x28);
  *(undefined4 *)(lVar8 + 0x28) = 5;
  if (iVar3 == 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x30));
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x30));
    LOCK();
    plVar1 = param_1 + 0xb;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      FUN_143770cd0(param_1[10]);
    }
    FUN_143770cf0(param_1[10],param_2);
  }
  FUN_143765f50(local_88);
  return;
}



// FUNCTION 143719e90 FUN_143719e90 body=22 status=ok
// SIG undefined FUN_143719e90(void)

undefined8 FUN_143719e90(undefined8 *param_1)

{
  FUN_143719d50(*param_1,*(undefined4 *)(param_1 + 1));
  return 0;
}



// FUNCTION 143719eb0 FUN_143719eb0 body=9 status=ok
// SIG undefined FUN_143719eb0(void)

void FUN_143719eb0(longlong param_1)

{
  FUN_143712df0(*(undefined8 *)(param_1 + 0x70));
  return;
}



// FUNCTION 143719ec0 FUN_143719ec0 body=53 status=ok
// SIG undefined FUN_143719ec0(void)

int FUN_143719ec0(longlong *param_1,int param_2)

{
  param_2 = param_2 * 2;
  if ((int)param_1[1] <= param_2 + 2) {
    return param_2 + 1;
  }
  return (2 - (uint)(*(byte *)(*(longlong *)(*param_1 + (longlong)(param_2 + 1) * 8) + 8) <
                    *(byte *)(*(longlong *)(*param_1 + (longlong)(param_2 + 2) * 8) + 8))) + param_2
  ;
}



// FUNCTION 143719f00 FUN_143719f00 body=81 status=ok
// SIG undefined FUN_143719f00(void)

void FUN_143719f00(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  if (*(uint *)(param_2 + 0x20) == (*(uint *)(param_2 + 0x24) & 0x3fffffff)) {
    FUN_14370c460(uVar1,(longlong *)(param_2 + 0x18),8);
  }
  *(longlong *)(*(longlong *)(param_2 + 0x18) + (longlong)*(int *)(param_2 + 0x20) * 8) = param_3;
  *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
  *(int *)(param_3 + 0xc) = *(int *)(param_3 + 0xc) + 1;
  return;
}



// FUNCTION 143719f60 FUN_143719f60 body=108 status=ok
// SIG undefined FUN_143719f60(void)

void FUN_143719f60(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1[1];
  uVar2 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar2,param_1,8);
  }
  *(undefined8 *)(*param_1 + (longlong)(int)param_1[1] * 8) = *param_2;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  FUN_14371a530(param_1,(int)lVar1);
  return;
}



// FUNCTION 143719fd0 FUN_143719fd0 body=168 status=ok
// SIG undefined FUN_143719fd0(void)

void FUN_143719fd0(undefined8 param_1,undefined8 *param_2,uint param_3,int param_4)

{
  LPVOID pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  if (0 < (int)param_3) {
    uVar4 = (ulonglong)param_3;
    do {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      puVar2 = (undefined8 *)
               (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                         (*(longlong **)((longlong)pvVar1 + 0x58),0x38);
      puVar3 = (undefined8 *)0x0;
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = 0;
        *(undefined1 *)(puVar2 + 1) = 0x40;
        *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
        *(undefined4 *)(puVar2 + 2) = 1;
        *(undefined1 *)((longlong)puVar2 + 0x14) = 0;
        puVar2[3] = puVar2 + 5;
        *(undefined4 *)(puVar2 + 4) = 0;
        *(undefined4 *)((longlong)puVar2 + 0x24) = 0x80000002;
        puVar3 = puVar2;
      }
      *param_2 = puVar3;
      param_2 = (undefined8 *)((longlong)param_2 + (longlong)param_4);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}



// FUNCTION 14371a080 FUN_14371a080 body=133 status=ok
// SIG undefined FUN_14371a080(void)

int FUN_14371a080(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  
  lVar6 = param_1[1];
  iVar7 = FUN_143719ec0();
  while( true ) {
    iVar5 = iVar7;
    if ((int)lVar6 <= iVar5) {
      return param_2;
    }
    lVar3 = *param_1;
    puVar1 = (undefined8 *)(lVar3 + (longlong)iVar5 * 8);
    puVar2 = (undefined8 *)(lVar3 + (longlong)param_2 * 8);
    if (*(byte *)(*(longlong *)(lVar3 + (longlong)param_2 * 8) + 8) <=
        *(byte *)(*(longlong *)(lVar3 + (longlong)iVar5 * 8) + 8)) break;
    uVar4 = *puVar2;
    *puVar2 = *puVar1;
    *puVar1 = uVar4;
    iVar7 = FUN_143719ec0(param_1,iVar5);
    param_2 = iVar5;
  }
  return param_2;
}



// FUNCTION 14371a110 FUN_14371a110 body=190 status=ok
// SIG undefined FUN_14371a110(void)

void FUN_14371a110(undefined8 param_1,longlong *param_2,uint param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  ulonglong uVar4;
  
  if (0 < (int)param_3) {
    uVar4 = (ulonglong)param_3;
    do {
      lVar1 = *param_2;
      if (lVar1 != 0) {
        uVar2 = FUN_143703a50();
        *(undefined4 *)(lVar1 + 0x20) = 0;
        if (-1 < (int)*(uint *)(lVar1 + 0x24)) {
          FUN_143702e10(uVar2,*(undefined8 *)(lVar1 + 0x18),8,*(uint *)(lVar1 + 0x24) & 0x3fffffff);
        }
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined4 *)(lVar1 + 0x24) = 0x80000000;
        pvVar3 = TlsGetValue(DAT_146b7bf70);
        if (pvVar3 == (LPVOID)0x0) {
          pvVar3 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar3 + 0x58),lVar1,0x38);
      }
      *param_2 = 0;
      param_2 = (longlong *)((longlong)param_2 + (longlong)param_4);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}



// FUNCTION 14371a1d0 FUN_14371a1d0 body=8 status=ok
// SIG undefined FUN_14371a1d0(void)

void FUN_14371a1d0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  *param_2 = param_3;
  *(undefined1 *)(param_2 + 1) = param_4;
  return;
}



// FUNCTION 14371a1e0 FUN_14371a1e0 body=466 status=ok
// SIG undefined FUN_14371a1e0(void)

void FUN_14371a1e0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *local_58;
  int local_50;
  uint local_4c;
  longlong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  int local_28;
  
  FUN_143710920(&local_58);
  uVar4 = 0;
  uVar7 = uVar4;
  uVar6 = uVar4;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      if (*(int *)(*(longlong *)(uVar6 + *(longlong *)(param_1 + 8)) + 0xc) == 0) {
        FUN_143719f60(&local_58,*(longlong *)(param_1 + 8) + (longlong)(int)uVar7 * 8);
      }
      uVar5 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar5;
      uVar6 = uVar6 + 8;
    } while ((int)uVar5 < *(int *)(param_1 + 0x10));
  }
  do {
    if (local_50 == 0) break;
    plVar2 = (longlong *)*local_58;
    FUN_14371a3c0(&local_58,0);
    if (*plVar2 != 0) {
      local_28 = 0;
      local_38 = 0;
      uStack_30 = 0;
      uVar7 = uVar4;
      local_40 = param_1;
      if (0 < (int)plVar2[2]) {
        do {
          local_28 = (int)uVar7;
          (**(code **)(*(longlong *)*plVar2 + 0x10))();
          uVar5 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar5;
        } while ((int)uVar5 < (int)plVar2[2]);
      }
    }
    *(undefined1 *)((longlong)plVar2 + 0x14) = 1;
    uVar7 = uVar4;
    uVar6 = uVar4;
    if (0 < (int)plVar2[4]) {
      do {
        piVar1 = (int *)(*(longlong *)(uVar7 + plVar2[3]) + 0xc);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_143719f60(&local_58);
        }
        uVar5 = (int)uVar6 + 1;
        uVar7 = uVar7 + 8;
        uVar6 = (ulonglong)uVar5;
      } while ((int)uVar5 < (int)plVar2[4]);
    }
  } while (plVar2 != param_2);
  uVar7 = uVar4;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      if (*(char *)(*(longlong *)(uVar7 + *(longlong *)(param_1 + 8)) + 0x14) == '\0') {
        uVar4 = (ulonglong)((int)uVar4 + 1);
        uVar7 = uVar7 + 8;
      }
      else {
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
        if (*(int *)(param_1 + 0x10) != (int)uVar4) {
          *(undefined8 *)(uVar7 + *(longlong *)(param_1 + 8)) =
               *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
        }
      }
    } while ((int)uVar4 < *(int *)(param_1 + 0x10));
  }
  uVar3 = FUN_143703a50();
  local_50 = 0;
  if (-1 < (int)local_4c) {
    FUN_143702e10(uVar3,local_58,8,local_4c & 0x3fffffff);
  }
  return;
}



// FUNCTION 14371a3c0 FUN_14371a3c0 body=72 status=ok
// SIG undefined FUN_14371a3c0(void)

ulonglong FUN_14371a3c0(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar7 = (int)param_1[1] - 1;
  if (param_2 == uVar7) {
    *(uint *)(param_1 + 1) = uVar7;
    return (ulonglong)uVar7;
  }
  plVar1 = (longlong *)(*param_1 + (longlong)(int)param_2 * 8);
  lVar5 = *(longlong *)(*param_1 + (longlong)(int)uVar7 * 8);
  bVar3 = *(byte *)(lVar5 + 8);
  bVar4 = *(byte *)(*plVar1 + 8);
  *plVar1 = lVar5;
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  if (bVar3 < bVar4) {
    while( true ) {
      uVar7 = (int)(param_2 - 1) >> 1;
      if ((int)uVar7 < 0) {
        return (ulonglong)param_2;
      }
      plVar1 = (longlong *)(*param_1 + (longlong)(int)uVar7 * 8);
      plVar2 = (longlong *)(*param_1 + (longlong)(int)param_2 * 8);
      lVar5 = *plVar1;
      lVar6 = *plVar2;
      if (*(byte *)(lVar5 + 8) < *(byte *)(lVar6 + 8)) break;
      *plVar2 = lVar5;
      *plVar1 = lVar6;
      param_2 = uVar7;
    }
    return (ulonglong)param_2;
  }
  uVar8 = FUN_14371a080();
  return uVar8;
}



// FUNCTION 14371a410 FUN_14371a410 body=10 status=ok
// SIG undefined FUN_14371a410(void)

void FUN_14371a410(undefined8 param_1,longlong param_2,undefined4 param_3,int param_4)

{
  if (param_4 == 0) {
    *(undefined4 *)(param_2 + 0x10) = param_3;
  }
  return;
}



// FUNCTION 14371a420 FUN_14371a420 body=111 status=ok
// SIG undefined FUN_14371a420(void)

void FUN_14371a420(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **local_28;
  undefined8 local_20;
  undefined4 local_18;
  uint local_14;
  
  local_20 = 0;
  local_18 = 0;
  local_28 = hkTrivialTaskQueue::vftable;
  local_14 = 0x80000000;
  FUN_143770b00(param_2,&local_28);
  uVar1 = FUN_143703a50();
  local_18 = 0;
  if (-1 < (int)local_14) {
    FUN_143702e10(uVar1,local_20,8,local_14 & 0x3fffffff);
  }
  return;
}



// FUNCTION 14371a490 FUN_14371a490 body=152 status=ok
// SIG undefined FUN_14371a490(void)

void FUN_14371a490(longlong param_1,undefined8 *param_2,int param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  
  uVar4 = FUN_143703a50();
  iVar1 = *(int *)(param_1 + 0x10);
  uVar6 = *(uint *)(param_1 + 0x14) & 0x3fffffff;
  iVar7 = iVar1 + param_3;
  if ((int)uVar6 < iVar7) {
    iVar3 = uVar6 * 2;
    if (iVar7 < iVar3) {
      iVar7 = iVar3;
    }
    FUN_14370c310(uVar4,(longlong *)(param_1 + 8),iVar7,8);
  }
  lVar2 = *(longlong *)(param_1 + 8);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3;
  lVar5 = 0;
  if (0 < param_3) {
    do {
      uVar4 = *param_2;
      param_2 = (undefined8 *)((longlong)param_2 + (longlong)param_5);
      *(undefined8 *)(lVar2 + (longlong)iVar1 * 8 + lVar5 * 8) = uVar4;
      lVar5 = lVar5 + 1;
    } while (lVar5 < param_3);
  }
  return;
}



// FUNCTION 14371a530 FUN_14371a530 body=74 status=ok
// SIG undefined FUN_14371a530(void)

int FUN_14371a530(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  while( true ) {
    iVar5 = param_2 + -1 >> 1;
    if (iVar5 < 0) {
      return param_2;
    }
    plVar1 = (longlong *)(*param_1 + (longlong)iVar5 * 8);
    plVar2 = (longlong *)(*param_1 + (longlong)param_2 * 8);
    lVar3 = *plVar1;
    lVar4 = *plVar2;
    if (*(byte *)(lVar3 + 8) < *(byte *)(lVar4 + 8)) break;
    *plVar2 = lVar3;
    *plVar1 = lVar4;
    param_2 = iVar5;
  }
  return param_2;
}



// FUNCTION 14371a580 FUN_14371a580 body=240 status=ok
// SIG undefined FUN_14371a580(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14371a580(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar13 = param_2[3];
  fVar12 = param_3[4];
  fVar4 = param_3[5];
  fVar5 = param_3[6];
  fVar6 = param_3[7];
  fVar7 = fVar1 * fVar12;
  fVar8 = fVar2 * fVar4;
  fVar9 = fVar3 * fVar5;
  fVar10 = (fVar8 + fVar7 + fVar9) * fVar1 + (fVar13 * fVar13 - _DAT_1467f07e0) * fVar12 +
           (fVar5 * fVar2 - fVar3 * fVar4) * fVar13;
  fVar11 = (fVar8 + fVar7 + fVar9) * fVar2 + (fVar13 * fVar13 - fRam00000001467f07e4) * fVar4 +
           (fVar12 * fVar3 - fVar1 * fVar5) * fVar13;
  fVar12 = (fVar8 + fVar7 + fVar9) * fVar3 + (fVar13 * fVar13 - fRam00000001467f07e8) * fVar5 +
           (fVar4 * fVar1 - fVar2 * fVar12) * fVar13;
  fVar13 = (fVar8 + fVar7 + fVar9) * fVar13 + (fVar13 * fVar13 - fRam00000001467f07ec) * fVar6 +
           (fVar6 * fVar13 - fVar13 * fVar6) * fVar13;
  fVar1 = param_2[5];
  fVar2 = param_2[6];
  fVar3 = param_2[7];
  param_1[4] = fVar10 + fVar10 + param_2[4];
  param_1[5] = fVar11 + fVar11 + fVar1;
  param_1[6] = fVar12 + fVar12 + fVar2;
  param_1[7] = fVar13 + fVar13 + fVar3;
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar13 = param_2[3];
  fVar12 = *param_3;
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  *param_1 = (fVar5 * fVar2 - fVar3 * fVar4) + fVar12 * fVar13 + fVar1 * fVar6;
  param_1[1] = (fVar12 * fVar3 - fVar1 * fVar5) + fVar4 * fVar13 + fVar2 * fVar6;
  param_1[2] = (fVar4 * fVar1 - fVar2 * fVar12) + fVar5 * fVar13 + fVar3 * fVar6;
  param_1[3] = fVar6 * fVar13 - (fVar2 * fVar4 + fVar1 * fVar12 + fVar3 * fVar5);
  return;
}



// FUNCTION 14371a670 FUN_14371a670 body=260 status=ok
// SIG undefined FUN_14371a670(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14371a670(float *param_1,float *param_2,float *param_3)

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
  
  fVar2 = *param_3;
  fVar3 = param_3[1];
  fVar4 = param_3[2];
  fVar5 = param_3[3];
  fVar1 = param_2[3];
  fVar11 = -*param_2;
  fVar12 = -param_2[1];
  fVar13 = -param_2[2];
  *param_1 = (fVar4 * fVar12 - fVar13 * fVar3) + fVar1 * fVar2 + fVar11 * fVar5;
  param_1[1] = (fVar2 * fVar13 - fVar11 * fVar4) + fVar1 * fVar3 + fVar12 * fVar5;
  param_1[2] = (fVar3 * fVar11 - fVar12 * fVar2) + fVar1 * fVar4 + fVar13 * fVar5;
  param_1[3] = fVar5 * fVar1 - (fVar12 * fVar3 + fVar11 * fVar2 + fVar13 * fVar4);
  fVar7 = param_3[4] - param_2[4];
  fVar8 = param_3[5] - param_2[5];
  fVar9 = param_3[6] - param_2[6];
  fVar10 = param_3[7] - param_2[7];
  fVar2 = fVar11 * fVar7;
  fVar3 = fVar12 * fVar8;
  fVar4 = fVar13 * fVar9;
  fVar5 = (fVar3 + fVar2 + fVar4) * fVar11 + (fVar1 * fVar1 - _DAT_1467f07e0) * fVar7 +
          (fVar9 * fVar12 - fVar13 * fVar8) * fVar1;
  fVar6 = (fVar3 + fVar2 + fVar4) * fVar12 + (fVar1 * fVar1 - fRam00000001467f07e4) * fVar8 +
          (fVar7 * fVar13 - fVar11 * fVar9) * fVar1;
  fVar7 = (fVar3 + fVar2 + fVar4) * fVar13 + (fVar1 * fVar1 - fRam00000001467f07e8) * fVar9 +
          (fVar8 * fVar11 - fVar12 * fVar7) * fVar1;
  fVar2 = (fVar3 + fVar2 + fVar4) * fVar1 + (fVar1 * fVar1 - fRam00000001467f07ec) * fVar10 +
          (fVar10 * fVar1 - fVar1 * fVar10) * fVar1;
  param_1[4] = fVar5 + fVar5;
  param_1[5] = fVar6 + fVar6;
  param_1[6] = fVar7 + fVar7;
  param_1[7] = fVar2 + fVar2;
  return;
}



// FUNCTION 14371a780 FUN_14371a780 body=144 status=ok
// SIG undefined FUN_14371a780(void)

void FUN_14371a780(longlong param_1,longlong param_2,int param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar1 = (ulonglong *)(param_2 + 0x10);
    lVar3 = (longlong)param_3;
    lVar2 = param_1 - param_2;
    do {
      *(ulonglong *)(lVar2 + -0x10 + (longlong)puVar1) = puVar1[-2];
      *(undefined8 *)((longlong)puVar1 + lVar2 + -8) =
           *(undefined8 *)((longlong)puVar1 + (param_2 - param_1) + lVar2 + -8);
      if ((*puVar1 & 1) != 0) {
        FUN_1437329e0(*puVar1 & 0xfffffffffffffffe);
      }
      if ((*(byte *)(lVar2 + (longlong)puVar1) & 1) != 0) {
        FUN_143733a60(*(ulonglong *)(lVar2 + (longlong)puVar1) & 0xfffffffffffffffe);
      }
      *(ulonglong *)(lVar2 + (longlong)puVar1) = *puVar1;
      puVar1 = puVar1 + 3;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 14371a810 FUN_14371a810 body=637 status=ok
// SIG undefined FUN_14371a810(void)

uint * FUN_14371a810(longlong *param_1,uint *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  uint uVar9;
  uint *puVar10;
  longlong lVar11;
  ulonglong *puVar12;
  uint uVar13;
  longlong lVar14;
  
  plVar1 = param_1 + 2;
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(plVar1);
  }
  lVar14 = *param_3;
  uVar13 = (int)lVar14 * -0x61c8864f;
  iVar4 = (int)((ulonglong)lVar14 >> 0x20);
  uVar9 = iVar4 * -0x61c8864f;
  uVar13 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
           (int)lVar14 * -0x4f000000;
  uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | iVar4 * -0x4f000000;
  uVar9 = uVar13 + uVar9 * 0x40 + (uVar13 >> 2) + 0x9e3779b9 ^ uVar9;
  uVar7 = (ulonglong)(*(uint *)(param_1 + 3) & uVar9);
  puVar10 = (uint *)(*plVar1 + uVar7 * 8);
  if (-1 < *(int *)(*plVar1 + 4 + uVar7 * 8)) {
    do {
      if (*(longlong *)(*param_1 + (longlong)(int)puVar10[1] * 0x18) == lVar14) {
        uVar13 = puVar10[1];
        goto LAB_14371aa6b;
      }
      lVar11 = *plVar1;
      uVar7 = ((longlong)puVar10 - lVar11 >> 3) + 1U & (longlong)(int)param_1[3];
      puVar10 = (uint *)(lVar11 + uVar7 * 8);
    } while (-1 < *(int *)(lVar11 + 4 + uVar7 * 8));
  }
  uVar13 = *(uint *)(param_1 + 1);
  *puVar10 = uVar9;
  puVar10[1] = uVar13;
  uVar6 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar6,param_1,0x18);
  }
  lVar14 = *param_1 + (longlong)(int)param_1[1] * 0x18;
  if (lVar14 != 0) {
    *(undefined4 *)(lVar14 + 0x14) = 0x80000000;
    *(undefined8 *)(lVar14 + 8) = 0;
    *(undefined4 *)(lVar14 + 0x10) = 0;
  }
  plVar3 = (longlong *)(*param_1 + (longlong)(int)param_1[1] * 0x18);
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  plVar2 = plVar3 + 1;
  *plVar3 = *param_3;
  iVar4 = (int)param_4[1];
  lVar14 = *param_4;
  uVar6 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)plVar3 + 0x14) & 0x3fffffff) < iVar4) {
    FUN_14370c310(uVar6,plVar2,iVar4,0x18);
  }
  iVar5 = ((int)plVar3[2] - iVar4) + -1;
  lVar11 = (longlong)iVar5;
  if (-1 < iVar5) {
    puVar12 = (ulonglong *)(*plVar2 + (longlong)iVar4 * 0x18 + lVar11 * 0x18 + 0x10);
    do {
      if ((*puVar12 & 1) != 0) {
        FUN_143733a60(*puVar12 & 0xfffffffffffffffe);
      }
      puVar12 = puVar12 + -3;
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
  }
  iVar5 = iVar4;
  if ((int)plVar3[2] < iVar4) {
    iVar5 = (int)plVar3[2];
  }
  FUN_14371a780(*plVar2,lVar14,iVar5);
  lVar11 = (longlong)(iVar4 - iVar5);
  if (0 < iVar4 - iVar5) {
    puVar12 = (ulonglong *)(lVar14 + 0x10 + (longlong)iVar5 * 0x18);
    lVar14 = *plVar2 - lVar14;
    do {
      puVar8 = (ulonglong *)(lVar14 + -0x10 + (longlong)puVar12);
      if (puVar8 != (ulonglong *)0x0) {
        *puVar8 = puVar12[-2];
        *(ulonglong *)(lVar14 + -8 + (longlong)puVar12) = puVar12[-1];
        uVar7 = *puVar12;
        *(ulonglong *)(lVar14 + (longlong)puVar12) = uVar7;
        if ((uVar7 & 1) != 0) {
          FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
        }
      }
      puVar12 = puVar12 + 3;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  *(int *)(plVar3 + 2) = iVar4;
LAB_14371aa6b:
  lVar14 = *plVar1;
  *param_2 = uVar13;
  param_2[1] = (uint)((longlong)puVar10 - lVar14 >> 3);
  return param_2;
}



// FUNCTION 14371aa90 FUN_14371aa90 body=12 status=ok
// SIG undefined FUN_14371aa90(void)

void FUN_14371aa90(undefined8 param_1,undefined8 param_2)

{
  FUN_142b7ebc0(param_1,param_2,&DAT_1467e87b0);
  return;
}



// FUNCTION 14371aaa0 FUN_14371aaa0 body=12 status=ok
// SIG undefined FUN_14371aaa0(void)

void FUN_14371aaa0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b7ebc0(param_1,param_2,&DAT_1467e7cd0);
  return;
}



// FUNCTION 14371aab0 FUN_14371aab0 body=12 status=ok
// SIG undefined FUN_14371aab0(void)

void FUN_14371aab0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b7ebc0(param_1,param_2,&DAT_1467e53b0);
  return;
}



// FUNCTION 14371aac0 FUN_14371aac0 body=1005 status=ok
// SIG undefined FUN_14371aac0(void)

undefined8 *
FUN_14371aac0(undefined8 *param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong local_98;
  int local_90;
  uint local_8c;
  longlong local_88;
  longlong lStack_80;
  undefined8 local_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined8 local_60;
  longlong lStack_58;
  ulonglong local_50;
  undefined **local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  *param_1 = _anon_7764903D::CloneToNativeCallback::vftable;
  FUN_1437319c0(param_1 + 1,param_4);
  puVar1 = param_1 + 1;
  if (param_3 != (undefined8 *)0x0) {
    puVar1 = param_3;
  }
  param_1[5] = puVar1;
  uVar8 = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  FUN_143734b10(param_1 + 8);
  param_1[10] = param_5;
  puVar1 = (undefined8 *)CONCAT44(param_6._4_4_,(int)param_6);
  param_1[0xb] = param_2;
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = param_1 + 0xd;
  }
  param_1[0xc] = puVar1;
  param_1[0xd] = _anon_7764903D::SimpleImportHandler::vftable;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x80000000;
  if (param_1[0xc] != 0) {
    local_48 = _anon_7764903D::CloneNoteToNativeCallback::vftable;
    local_40 = 0;
    local_38 = 0;
    local_34 = 0x80000000;
    local_98 = 0;
    local_90 = 0;
    local_8c = 0x80000000;
    (**(code **)(*param_2 + 0x10))(param_2,&local_98);
    uVar10 = uVar8;
    if (0 < local_90) {
      do {
        uVar3 = 0;
        if (*(char *)(uVar10 + 0x10 + local_98) == '\x02') {
          lStack_58 = *(longlong *)(uVar10 + 8 + local_98);
          local_60 = *(undefined8 *)(uVar10 + local_98);
          uVar2 = uVar3;
          if (lStack_58 != 0) {
            uVar2 = FUN_1437151a0();
          }
          local_50 = uVar2;
          if ((uVar2 & 1) != 0) {
            FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
          }
          FUN_143776a40(param_1[10],&local_78,&local_60,&local_48);
          if ((local_50 & 1) != 0) {
            FUN_143733a60(local_50 & 0xfffffffffffffffe);
          }
          if (*(char *)(uVar10 + 0x10 + local_98) == '\x02') {
            iVar7 = *(int *)(uVar10 + 0x14 + local_98);
            if (-1 < iVar7) goto LAB_14371ac77;
          }
          else {
            iVar7 = 0;
LAB_14371ac77:
            if ((iVar7 < local_90) &&
               (puVar1 = (undefined8 *)(local_98 + (longlong)iVar7 * 0x18),
               *(char *)(local_98 + 0x10 + (longlong)iVar7 * 0x18) == '\0')) {
              uVar5 = *puVar1;
              if (puVar1[1] != 0) {
                uVar3 = FUN_1437151a0();
              }
              if ((uVar3 & 1) != 0) {
                FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
              }
              local_88 = 0;
              lStack_80 = 0x8000000000000000;
              param_5 = uVar5;
              FUN_14371a810(param_1 + 6,&param_6,&param_5,&local_88);
              lVar4 = param_1[6] + (longlong)(int)param_6 * 0x18;
              FUN_143703a50();
              lStack_80 = 0x8000000000000000;
              local_88 = 0;
              uVar5 = FUN_143703a50();
              if (*(uint *)(lVar4 + 0x10) == (*(uint *)(lVar4 + 0x14) & 0x3fffffff)) {
                FUN_14370c460(uVar5,lVar4 + 8,0x18);
              }
              puVar1 = (undefined8 *)
                       (*(longlong *)(lVar4 + 8) + (longlong)*(int *)(lVar4 + 0x10) * 0x18);
              if (puVar1 != (undefined8 *)0x0) {
                *puVar1 = local_78;
                puVar1[1] = local_70;
                puVar1[2] = local_68;
                if ((local_68 & 1) != 0) {
                  FUN_1437329e0(local_68 & 0xfffffffffffffffe);
                }
              }
              *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + 1;
              if ((uVar3 & 1) != 0) {
                FUN_143733a60(uVar3 & 0xfffffffffffffffe);
              }
            }
          }
          if ((local_68 & 1) != 0) {
            FUN_143733a60(local_68 & 0xfffffffffffffffe);
          }
        }
        uVar9 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar9;
        uVar10 = uVar10 + 0x18;
      } while ((int)uVar9 < local_90);
    }
    local_88 = 0;
    lStack_80 = -0x8000000000000000;
    param_5 = 0;
    lVar4 = FUN_14371b650(param_1 + 6,&param_5);
    if (lVar4 == 0) {
      plVar6 = &local_88;
    }
    else {
      plVar6 = (longlong *)(param_1[6] + ((longlong)*(int *)(lVar4 + 4) * 3 + 1) * 8);
    }
    if ((int)plVar6[1] != 0) {
      local_88 = *plVar6;
      local_50 = 0;
      local_60 = 0;
      lStack_58 = 0;
      lStack_80 = local_88 + (longlong)(int)plVar6[1] * 0x18;
      (*(code *)**(undefined8 **)param_1[0xc])
                ((undefined8 *)param_1[0xc],&local_88,&local_60,&local_60);
      if ((local_50 & 1) != 0) {
        FUN_143733a60(local_50 & 0xfffffffffffffffe);
      }
    }
    FUN_143703a50();
    uVar5 = FUN_143703a50();
    local_90 = 0;
    if (-1 < (int)local_8c) {
      FUN_143702e10(uVar5,local_98,0x18,local_8c & 0x3fffffff);
    }
    local_98 = 0;
    local_8c = 0x80000000;
    FUN_14371b030(&local_40);
  }
  return param_1;
}



// FUNCTION 14371aeb0 FUN_14371aeb0 body=58 status=ok
// SIG undefined FUN_14371aeb0(void)

longlong FUN_14371aeb0(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_1437746f0(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_14371c430(param_1);
  return param_1;
}



// FUNCTION 14371aef0 FUN_14371aef0 body=148 status=ok
// SIG undefined FUN_14371aef0(void)

void FUN_14371aef0(longlong *param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  thunk_FUN_143734820(param_1 + 2);
  uVar1 = FUN_143703a50();
  iVar2 = (int)param_1[1] + -1;
  if (-1 < iVar2) {
    lVar3 = *param_1 + (longlong)iVar2 * 0x18;
    do {
      FUN_14371af90(lVar3);
      lVar3 = lVar3 + -0x18;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    FUN_143702e10(uVar1,*param_1,0x18,*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 14371af90 FUN_14371af90 body=160 status=ok
// SIG undefined FUN_14371af90(void)

void FUN_14371af90(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  
  uVar1 = FUN_143703a50();
  iVar2 = *(int *)(param_1 + 0x10) + -1;
  lVar4 = (longlong)iVar2;
  if (-1 < iVar2) {
    puVar3 = (ulonglong *)(*(longlong *)(param_1 + 8) + lVar4 * 0x18 + 0x10);
    do {
      if ((*puVar3 & 1) != 0) {
        FUN_143733a60(*puVar3 & 0xfffffffffffffffe);
      }
      puVar3 = puVar3 + -3;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x14)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 8),0x18,*(uint *)(param_1 + 0x14) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  return;
}



// FUNCTION 14371b030 FUN_14371b030 body=158 status=ok
// SIG undefined FUN_14371b030(void)

void FUN_14371b030(longlong *param_1)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  
  uVar1 = FUN_143703a50();
  iVar2 = (int)param_1[1] + -1;
  lVar4 = (longlong)iVar2;
  if (-1 < iVar2) {
    puVar3 = (ulonglong *)(*param_1 + lVar4 * 0x18 + 0x10);
    do {
      if ((*puVar3 & 1) != 0) {
        FUN_143733a60(*puVar3 & 0xfffffffffffffffe);
      }
      puVar3 = puVar3 + -3;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    FUN_143702e10(uVar1,*param_1,0x18,*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 14371b0d0 FUN_14371b0d0 body=57 status=ok
// SIG undefined FUN_14371b0d0(void)

void FUN_14371b0d0(longlong param_1)

{
  FUN_143774990(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_14370c150();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_14370c150();
    return;
  }
  return;
}



// FUNCTION 14371b110 FUN_14371b110 body=327 status=ok
// SIG undefined FUN_14371b110(void)

void FUN_14371b110(undefined8 *param_1)

{
  undefined8 uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  
  *param_1 = _anon_7764903D::ObjectResource::vftable;
  uVar1 = FUN_143703a50();
  lVar3 = (longlong)(*(int *)(param_1 + 9) + -1);
  if (-1 < *(int *)(param_1 + 9) + -1) {
    puVar2 = (ulonglong *)(param_1[8] + (lVar3 * 5 + 2) * 8);
    do {
      FUN_143716650(puVar2 + 1);
      if ((*puVar2 & 1) != 0) {
        FUN_143733a60(*puVar2 & 0xfffffffffffffffe);
      }
      puVar2 = puVar2 + -5;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x4c)) {
    FUN_143702e10(uVar1,param_1[8],0x28,*(uint *)((longlong)param_1 + 0x4c) & 0x3fffffff);
  }
  param_1[8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  uVar1 = FUN_143703a50();
  lVar3 = (longlong)(*(int *)(param_1 + 7) + -1);
  if (-1 < *(int *)(param_1 + 7) + -1) {
    puVar2 = (ulonglong *)(param_1[6] + 0x10 + lVar3 * 0x20);
    do {
      FUN_143716650(puVar2 + 1);
      if ((*puVar2 & 1) != 0) {
        FUN_143733a60(*puVar2 & 0xfffffffffffffffe);
      }
      puVar2 = puVar2 + -4;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x3c)) {
    FUN_143702e10(uVar1,param_1[6],0x20,*(uint *)((longlong)param_1 + 0x3c) & 0x3fffffff);
  }
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  FUN_14377a5e0(param_1);
  return;
}



// FUNCTION 14371b260 FUN_14371b260 body=13 status=ok
// SIG undefined FUN_14371b260(void)

void FUN_14371b260(undefined8 *param_1)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  if ((short)plVar2[2] != 0) {
    uVar1 = *(uint *)(plVar2 + 2) - 0x10000;
    LOCK();
    bVar6 = *(uint *)(plVar2 + 2) == *(uint *)(plVar2 + 2);
    if (bVar6) {
      *(uint *)(plVar2 + 2) = uVar1;
    }
    UNLOCK();
    uVar4 = 0;
    while (!bVar6) {
      for (iVar5 = 1 << ((byte)uVar4 & 0x1f); 0 < iVar5; iVar5 = iVar5 + -1) {
      }
      uVar3 = uVar4 + 1;
      if (7 < uVar4) {
        uVar3 = uVar4;
      }
      uVar1 = *(uint *)(plVar2 + 2) - 0x10000;
      LOCK();
      bVar6 = *(uint *)(plVar2 + 2) == *(uint *)(plVar2 + 2);
      if (bVar6) {
        *(uint *)(plVar2 + 2) = uVar1;
      }
      UNLOCK();
      uVar4 = uVar3;
    }
    if ((uVar1 & 0xffff0000) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014370c1b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14371b270 FUN_14371b270 body=480 status=ok
// SIG undefined FUN_14371b270(void)

void FUN_14371b270(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong *puVar4;
  
  iVar3 = 0;
  *param_1 = _anon_7764903D::SimpleImportHandler::vftable;
  if (0 < *(int *)(param_1 + 6)) {
    do {
      FUN_1437428e0(param_1[5] + (longlong)iVar3 * 0x18,3,1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 6));
  }
  uVar1 = FUN_143703a50();
  lVar2 = (longlong)(*(int *)(param_1 + 6) + -1);
  if (-1 < *(int *)(param_1 + 6) + -1) {
    puVar4 = (ulonglong *)(param_1[5] + lVar2 * 0x18 + 0x10);
    do {
      if ((*puVar4 & 1) != 0) {
        FUN_143733a60(*puVar4 & 0xfffffffffffffffe);
      }
      puVar4 = puVar4 + -3;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  *(undefined4 *)(param_1 + 6) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x34)) {
    FUN_143702e10(uVar1,param_1[5],0x18,*(uint *)((longlong)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  uVar1 = FUN_143703a50();
  lVar2 = (longlong)(*(int *)(param_1 + 4) + -1);
  if (-1 < *(int *)(param_1 + 4) + -1) {
    puVar4 = (ulonglong *)(param_1[3] + (lVar2 * 5 + 2) * 8);
    do {
      FUN_143716650(puVar4 + 1);
      if ((*puVar4 & 1) != 0) {
        FUN_143733a60(*puVar4 & 0xfffffffffffffffe);
      }
      puVar4 = puVar4 + -5;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    FUN_143702e10(uVar1,param_1[3],0x28,*(uint *)((longlong)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  uVar1 = FUN_143703a50();
  lVar2 = (longlong)(*(int *)(param_1 + 2) + -1);
  if (-1 < *(int *)(param_1 + 2) + -1) {
    puVar4 = (ulonglong *)(param_1[1] + 0x10 + lVar2 * 0x20);
    do {
      FUN_143716650(puVar4 + 1);
      if ((*puVar4 & 1) != 0) {
        FUN_143733a60(*puVar4 & 0xfffffffffffffffe);
      }
      puVar4 = puVar4 + -4;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x14)) {
    FUN_143702e10(uVar1,param_1[1],0x20,*(uint *)((longlong)param_1 + 0x14) & 0x3fffffff);
  }
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x80000000;
  param_1[1] = 0;
  return;
}



// FUNCTION 14371b450 FUN_14371b450 body=43 status=ok
// SIG undefined FUN_14371b450(void)

undefined8 * FUN_14371b450(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Cloner::Callback::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14371b480 `scalar_deleting_destructor' body=66 status=ok
// SIG void * `scalar_deleting_destructor'(_AsyncTaskCollection * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl Concurrency::details::_AsyncTaskCollection::`scalar
   deleting destructor'(unsigned int) __ptr64
   
   Library: Visual Studio 2015 Release */

void * __thiscall
Concurrency::details::_AsyncTaskCollection::_scalar_deleting_destructor_
          (_AsyncTaskCollection *this,uint param_1)

{
  FUN_14371b030(this + 8);
  *(undefined ***)this = hkReflect::Cloner::Callback::vftable;
  if ((param_1 & 1) != 0) {
    FMemory::operator_delete(this,0x18);
  }
  return this;
}



// FUNCTION 14371b4d0 FUN_14371b4d0 body=88 status=ok
// SIG undefined FUN_14371b4d0(void)

undefined8 * FUN_14371b4d0(undefined8 *param_1,ulonglong param_2)

{
  FUN_14371b270(param_1 + 0xd);
  FUN_14371aef0(param_1 + 6);
  FUN_14371b030(param_1 + 2);
  param_1[1] = hkReflect::Cloner::Callback::vftable;
  *param_1 = hkReflect::Cloner::Callback::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 14371b530 FUN_14371b530 body=139 status=ok
// SIG undefined FUN_14371b530(void)

longlong FUN_14371b530(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14371b110();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x50;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
    }
  }
  return param_1;
}



// FUNCTION 14371b5c0 FUN_14371b5c0 body=144 status=ok
// SIG undefined FUN_14371b5c0(void)

undefined8 * FUN_14371b5c0(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  *param_1 = hkResource::vftable;
  FUN_14370c000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      sVar2 = 0x18;
      if (*(short *)(param_1 + 2) != -1) {
        sVar2 = *(short *)(param_1 + 2);
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14371b650 FUN_14371b650 body=144 status=ok
// SIG undefined FUN_14371b650(void)

longlong FUN_14371b650(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar1 = *param_2;
  lVar2 = param_1[2];
  iVar3 = (int)((ulonglong)lVar1 >> 0x20);
  uVar5 = iVar3 * -0x61c8864f;
  uVar6 = (int)lVar1 * -0x61c8864f;
  uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | iVar3 * -0x4f000000;
  uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | (int)lVar1 * -0x4f000000
  ;
  uVar4 = (ulonglong)
          ((uVar5 * 0x40 + uVar6 + (uVar6 >> 2) + 0x9e3779b9 ^ uVar5) & *(uint *)(param_1 + 3));
  iVar3 = *(int *)(lVar2 + 4 + uVar4 * 8);
  if (-1 < iVar3) {
    do {
      if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x18) == lVar1) {
        return lVar2 + uVar4 * 8;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1U & *(uint *)(param_1 + 3));
      iVar3 = *(int *)(lVar2 + 4 + uVar4 * 8);
    } while (-1 < iVar3);
  }
  return 0;
}



// FUNCTION 14371b6e0 FUN_14371b6e0 body=182 status=ok
// SIG undefined FUN_14371b6e0(void)

/* WARNING: Removing unreachable block (ram,0x00014371b74f) */

void FUN_14371b6e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  plVar1 = (longlong *)(param_1 + 0x40);
  uVar4 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x48) == (*(uint *)(param_1 + 0x4c) & 0x3fffffff)) {
    FUN_14370c460(uVar4,plVar1,0x28);
  }
  puVar2 = (undefined8 *)(*plVar1 + (longlong)*(int *)(param_1 + 0x48) * 0x28);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
  }
  iVar3 = *(int *)(param_1 + 0x48);
  *(int *)(param_1 + 0x48) = iVar3 + 1;
  FUN_14371cb90(*plVar1 + (longlong)iVar3 * 0x28,param_2,param_3,0);
  return;
}



// FUNCTION 14371b7a0 FUN_14371b7a0 body=170 status=ok
// SIG undefined FUN_14371b7a0(void)

/* WARNING: Removing unreachable block (ram,0x00014371b808) */

void FUN_14371b7a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  plVar1 = (longlong *)(param_1 + 0x30);
  uVar3 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x38) == (*(uint *)(param_1 + 0x3c) & 0x3fffffff)) {
    FUN_14370c460(uVar3,plVar1,0x20);
  }
  puVar4 = (undefined8 *)((longlong)*(int *)(param_1 + 0x38) * 0x20 + *plVar1);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
  }
  iVar2 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x38) = iVar2 + 1;
  FUN_14371cc10((longlong)iVar2 * 0x20 + *plVar1,param_2,param_3);
  return;
}



// FUNCTION 14371b850 FUN_14371b850 body=586 status=ok
// SIG undefined FUN_14371b850(void)

/* WARNING: Removing unreachable block (ram,0x00014371b91a) */

void FUN_14371b850(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar9 = *param_2;
  iVar7 = 0;
  iVar8 = (int)(param_2[1] - lVar9 >> 0x3f);
  iVar6 = (int)((param_2[1] - lVar9) / 0x18) + iVar8;
  if (iVar6 != iVar8 && -1 < iVar6 - iVar8) {
    lVar11 = 0;
    do {
      puVar3 = (ulonglong *)
               FUN_14371aa90(*(undefined8 *)(lVar11 + lVar9),*(undefined8 *)(lVar11 + 8 + lVar9));
      if (puVar3 != (ulonglong *)0x0) {
        uVar2 = *puVar3;
        uVar4 = FUN_143703a50();
        if (*(uint *)(param_1 + 0x20) == (*(uint *)(param_1 + 0x24) & 0x3fffffff)) {
          FUN_14370c460(uVar4,param_1 + 0x18,0x28);
        }
        puVar1 = (undefined8 *)
                 (*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0x20) * 0x28);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
          puVar1[3] = 0;
        }
        puVar1 = (undefined8 *)
                 (*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0x20) * 0x28);
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        *puVar1 = *param_3;
        puVar1[1] = param_3[1];
        if ((*(byte *)(param_3 + 2) & 1) != 0) {
          FUN_1437329e0(param_3[2] & 0xfffffffffffffffe);
        }
        if ((*(byte *)(puVar1 + 2) & 1) != 0) {
          FUN_143733a60(puVar1[2] & 0xfffffffffffffffe);
        }
        puVar1[2] = param_3[2];
        FUN_1437166c0(puVar1 + 3,uVar2 & 0xfffffffffffffffe);
        *(undefined4 *)(puVar1 + 4) = 0;
      }
      lVar9 = *param_2;
      iVar7 = iVar7 + 1;
      lVar11 = lVar11 + 0x18;
    } while (iVar7 < (int)((param_2[1] - lVar9) / 0x18));
  }
  lVar9 = *param_2;
  lVar11 = param_2[1] - lVar9;
  lVar11 = lVar11 / 6 + (lVar11 >> 0x3f);
  iVar6 = (int)(lVar11 >> 2) - (int)(lVar11 >> 0x3f);
  uVar4 = FUN_143703a50();
  uVar5 = *(uint *)(param_1 + 0x34) & 0x3fffffff;
  iVar8 = *(int *)(param_1 + 0x30) + iVar6;
  if (((int)uVar5 < iVar8) && ((int)uVar5 < iVar8)) {
    iVar7 = iVar8;
    if (iVar8 < (int)(uVar5 * 2)) {
      iVar7 = uVar5 * 2;
    }
    FUN_14370c310(uVar4,(longlong *)(param_1 + 0x28),iVar7,0x18);
  }
  lVar10 = (longlong)iVar6;
  lVar11 = *(longlong *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x30) * 0x18;
  if (0 < iVar6) {
    puVar3 = (ulonglong *)(lVar11 + 0x10);
    lVar9 = lVar9 - lVar11;
    do {
      if (puVar3 + -2 != (ulonglong *)0x0) {
        puVar3[-2] = *(ulonglong *)(lVar9 + -0x10 + (longlong)puVar3);
        puVar3[-1] = *(ulonglong *)((longlong)puVar3 + lVar9 + -8);
        uVar2 = *(ulonglong *)(lVar9 + (longlong)puVar3);
        *puVar3 = uVar2;
        if ((uVar2 & 1) != 0) {
          FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
        }
      }
      puVar3 = puVar3 + 3;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  *(int *)(param_1 + 0x30) = iVar8;
  return;
}



// FUNCTION 14371baa0 FUN_14371baa0 body=381 status=ok
// SIG undefined FUN_14371baa0(void)

undefined4 *
FUN_14371baa0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 *param_4,
             uint *param_5)

{
  uint *puVar1;
  char cVar2;
  int *piVar3;
  longlong local_68 [5];
  ulonglong local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  puVar1 = param_5;
  *param_5 = 0;
  piVar3 = (int *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))
                            (*(longlong **)(param_1 + 0x28),&param_5,param_3,param_4,param_5);
  if (*piVar3 < 0) {
    *param_2 = 0x80040200;
    return param_2;
  }
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  (**(code **)(*(longlong *)(param_4[2] & 0xfffffffffffffffe) + 0x50))
            ((longlong *)(param_4[2] & 0xfffffffffffffffe),&param_5,*param_4,param_4[1],local_68);
  if ((int)param_5 < 0) {
    *param_2 = 0x80040200;
  }
  else {
    if ((local_68[0] == 0) && (*(longlong *)(param_1 + 0x60) != 0)) {
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x18))
                (*(longlong **)(param_1 + 0x58),local_68 + 3,param_4);
      if (local_68[3] != 0) {
        FUN_1437771f0(*(undefined8 *)(param_1 + 0x50),local_38,local_68 + 3);
        cVar2 = (**(code **)(**(longlong **)(param_1 + 0x60) + 8))
                          (*(longlong **)(param_1 + 0x60),local_38,param_3,param_4);
        *param_2 = 0;
        *puVar1 = (uint)(cVar2 != '\0');
        if ((local_28 & 1) != 0) {
          FUN_143733a60(local_28 & 0xfffffffffffffffe);
        }
        if ((local_40 & 1) != 0) {
          FUN_143733a60(local_40 & 0xfffffffffffffffe);
        }
        goto LAB_14371bbea;
      }
      if ((local_40 & 1) != 0) {
        FUN_143733a60(local_40 & 0xfffffffffffffffe);
      }
    }
    *puVar1 = 1;
    *param_2 = 0;
  }
LAB_14371bbea:
  if ((local_68[2] & 1U) != 0) {
    FUN_143733a60(local_68[2] & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 14371bc20 FUN_14371bc20 body=203 status=ok
// SIG undefined FUN_14371bc20(void)

/* WARNING: Removing unreachable block (ram,0x00014371bca5) */

undefined8 FUN_14371bc20(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar3 = (ulonglong *)FUN_14371aaa0(*param_2,param_2[1]);
  if (puVar3 != (ulonglong *)0x0) {
    uVar2 = *puVar3;
    uVar4 = FUN_143703a50();
    if (*(uint *)(param_1 + 0x10) == (*(uint *)(param_1 + 0x14) & 0x3fffffff)) {
      FUN_14370c460(uVar4,param_1 + 8,0x20);
    }
    puVar5 = (undefined8 *)((longlong)*(int *)(param_1 + 0x10) * 0x20 + *(longlong *)(param_1 + 8));
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
    }
    iVar1 = *(int *)(param_1 + 0x10);
    *(int *)(param_1 + 0x10) = iVar1 + 1;
    FUN_14371cc10((longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 8),param_3,
                  uVar2 & 0xfffffffffffffffe);
  }
  return 1;
}



// FUNCTION 14371bcf0 GetBindlessHandle body=28 status=ok
// SIG undefined GetBindlessHandle(void)

undefined8
UE::RHICore::FGenericResourceCollection::GetBindlessHandle(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x28) + 8))();
  return param_2;
}



// FUNCTION 14371bd10 FUN_14371bd10 body=269 status=ok
// SIG undefined FUN_14371bd10(void)

undefined4 *
FUN_14371bd10(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 local_res8;
  longlong local_28;
  longlong lStack_20;
  
  lVar3 = *param_3;
  piVar2 = (int *)(**(code **)**(undefined8 **)(param_1 + 0x28))
                            (*(undefined8 **)(param_1 + 0x28),&local_res8);
  if (*piVar2 < 0) {
    *param_2 = 0x80040200;
  }
  else {
    puVar1 = *(undefined8 **)(param_1 + 0x60);
    if (((puVar1 != (undefined8 *)0x0) && (lVar3 == 0)) && (*param_3 != 0)) {
      local_res8 = *param_4;
      lStack_20 = -0x8000000000000000;
      local_28 = lVar3;
      lVar3 = FUN_14371b650(param_1 + 0x30,&local_res8);
      if (lVar3 == 0) {
        plVar4 = &local_28;
      }
      else {
        plVar4 = (longlong *)
                 (*(longlong *)(param_1 + 0x30) + ((longlong)*(int *)(lVar3 + 4) * 3 + 1) * 8);
      }
      if ((int)plVar4[1] != 0) {
        local_28 = *plVar4;
        lStack_20 = local_28 + (longlong)(int)plVar4[1] * 0x18;
        (**(code **)*puVar1)(puVar1,&local_28,param_3,param_4);
      }
      FUN_143703a50();
    }
    *param_2 = 0;
  }
  return param_2;
}



// FUNCTION 14371be20 FUN_14371be20 body=19 status=ok
// SIG undefined FUN_14371be20(void)

void FUN_14371be20(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))();
  return;
}



// FUNCTION 14371be40 FUN_14371be40 body=645 status=ok
// SIG undefined FUN_14371be40(void)

undefined8 * FUN_14371be40(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  LPVOID pvVar1;
  undefined8 uVar2;
  longlong lVar3;
  LPVOID pvVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong local_128;
  undefined8 local_120;
  ulonglong local_118;
  undefined **local_108;
  undefined **local_100;
  undefined1 local_f8 [32];
  undefined1 local_d8 [56];
  undefined1 local_a0 [8];
  longlong local_98;
  int local_90;
  longlong local_88;
  int local_80;
  undefined1 local_68 [16];
  ulonglong local_58;
  undefined1 local_50 [56];
  
  pvVar1 = TlsGetValue(DAT_146b8198c);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar1,"TtClone to native (hkObjectResource)");
  }
  puVar5 = param_1 + 3;
  FSlateTextBlockLayout::SetDebugSourceInfo(puVar5);
  FUN_14371aac0(&local_108,param_3,param_1[4],*param_1,puVar5,param_1[6]);
  uVar2 = (**(code **)(*param_3 + 8))(param_3,local_68);
  FUN_143776a40(puVar5,&local_128,uVar2,&local_108);
  if ((local_58 & 1) != 0) {
    FUN_143733a60(local_58 & 0xfffffffffffffffe);
  }
  if (local_128 == 0) {
    if (1 < DAT_146b822a8) {
      FUN_14373a730(local_50,&DAT_146b822a0,2);
      lVar3 = FUN_14373bbd0(local_50,"Unable to create native objects",&DAT_145b909f0,0);
      *(char **)(lVar3 + 0x20) = "Serialize\\hkSerialize.cpp";
      *(undefined8 *)(lVar3 + 0x28) = 0x268;
      FUN_14373a950(local_50);
    }
    *param_2 = 0;
  }
  else {
    lVar3 = FUN_14371aab0(local_128,local_120);
    if (lVar3 != 0) {
      FUN_14370c030(lVar3);
    }
    pvVar4 = TlsGetValue(DAT_146b7bf70);
    if (pvVar4 == (LPVOID)0x0) {
      pvVar4 = DAT_146b7bf68;
    }
    puVar5 = (undefined8 *)
             (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar4 + 0x58),0x50);
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      FUN_14377a590(puVar5,&local_128);
      *puVar5 = _anon_7764903D::ObjectResource::vftable;
      puVar5[6] = 0;
      *(undefined4 *)(puVar5 + 7) = 0;
      *(undefined4 *)((longlong)puVar5 + 0x3c) = 0x80000000;
      puVar5[8] = 0;
      *(undefined4 *)(puVar5 + 9) = 0;
      *(undefined4 *)((longlong)puVar5 + 0x4c) = 0x80000000;
    }
    uVar6 = 0;
    uVar8 = uVar6;
    uVar9 = uVar6;
    if (0 < local_80) {
      do {
        FUN_14371b6e0(puVar5,local_88 + uVar9,
                      *(ulonglong *)(local_88 + uVar9 + 0x18) & 0xfffffffffffffffe);
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        uVar9 = uVar9 + 0x28;
      } while ((int)uVar7 < local_80);
    }
    uVar8 = uVar6;
    if (0 < local_90) {
      do {
        FUN_14371b7a0(puVar5,local_98 + uVar8,
                      *(ulonglong *)(local_98 + uVar8 + 0x18) & 0xfffffffffffffffe);
        uVar7 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar7;
        uVar8 = uVar8 + 0x20;
      } while ((int)uVar7 < local_90);
    }
    *param_2 = puVar5;
  }
  if ((local_118 & 1) != 0) {
    FUN_143733a60(local_118 & 0xfffffffffffffffe);
  }
  FUN_14371b270(local_a0);
  FUN_14371aef0(local_d8);
  FUN_14371b030(local_f8);
  local_108 = hkReflect::Cloner::Callback::vftable;
  local_100 = hkReflect::Cloner::Callback::vftable;
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d750(pvVar1,&DAT_145b8eda0);
  }
  return param_2;
}



// FUNCTION 14371c0d0 FUN_14371c0d0 body=855 status=ok
// SIG undefined FUN_14371c0d0(void)

/* WARNING: Removing unreachable block (ram,0x00014371c3b5) */

longlong * FUN_14371c0d0(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  undefined8 *puVar1;
  char cVar2;
  LPVOID pvVar3;
  longlong lVar4;
  LPVOID pvVar5;
  undefined8 local_res8;
  longlong local_res18;
  longlong local_res20;
  longlong local_138;
  undefined8 local_130;
  ulonglong local_128;
  longlong local_120;
  longlong local_118;
  ulonglong local_110;
  undefined1 local_108 [64];
  undefined **local_c8;
  undefined **local_c0;
  undefined1 local_b8 [24];
  longlong *local_a0;
  undefined1 local_98 [56];
  undefined1 local_60 [56];
  
  local_res20 = param_4;
  pvVar3 = TlsGetValue(DAT_146b8198c);
  if (pvVar3 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar3,"TtClone to native (hkReflect::Var)");
  }
  puVar1 = param_1 + 3;
  FSlateTextBlockLayout::SetDebugSourceInfo(puVar1);
  FUN_14371aac0(&local_c8,param_3,param_1[4],*param_1,puVar1,param_1[6]);
  (**(code **)(*param_3 + 8))(param_3,&local_138);
  if (local_res20 == 0) {
LAB_14371c282:
    if (local_138 != 0) {
      pvVar5 = TlsGetValue(DAT_146b8198c);
      if (pvVar5 != (LPVOID)0x0) {
        FUN_14370d5c0(pvVar5,"TtClone");
      }
      FUN_143776a40(puVar1,&local_120,&local_138,&local_c8);
      if (local_120 != 0) {
        lVar4 = FUN_14371aab0(local_120,local_118);
        if (lVar4 != 0) {
          FUN_14370c030(lVar4);
        }
        *param_2 = local_120;
        param_2[1] = local_118;
        param_2[2] = local_110;
        local_110 = 0;
        if (pvVar5 != (LPVOID)0x0) {
          FUN_14370d750(pvVar5,&DAT_145b8eda0);
        }
        goto LAB_14371c3bc;
      }
      if (1 < DAT_146b822a8) {
        FUN_14373a730(local_108,&DAT_146b822a0,2);
        lVar4 = FUN_14373bbd0(local_108,"Unable to clone contents",&DAT_145b909f0,0);
        *(char **)(lVar4 + 0x20) = "Serialize\\hkSerialize.cpp";
        *(undefined8 *)(lVar4 + 0x28) = 0x31c;
        FUN_14373a950(local_108);
      }
      if ((local_110 & 1) != 0) {
        FUN_143733a60(local_110 & 0xfffffffffffffffe);
      }
      if (pvVar5 != (LPVOID)0x0) {
        FUN_14370d750(pvVar5,&DAT_145b8eda0);
      }
    }
  }
  else {
    local_res18 = (**(code **)(*local_a0 + 0x18))(local_a0,local_130);
    if (local_res18 == 0) {
      if (1 < DAT_146b822a8) {
        local_res8 = local_130;
        FUN_14373a730(local_108,&DAT_146b822a0,2);
        lVar4 = FUN_14373bbd0(local_108,
                              "Loaded type mismatch, loaded type {} does not correspond to any native type and cannot be compared to requested type {}"
                              ,&DAT_145b8f0e0,&local_res8,&local_res20,0);
        *(char **)(lVar4 + 0x20) = "Serialize\\hkSerialize.cpp";
        *(undefined8 *)(lVar4 + 0x28) = 0x308;
        FUN_14373a950(local_108);
      }
    }
    else {
      cVar2 = FUN_143714910(local_res18,local_res20);
      if (cVar2 != '\0') goto LAB_14371c282;
      if (1 < DAT_146b822a8) {
        FUN_14373a730(local_108,&DAT_146b822a0,2);
        lVar4 = FUN_14373bbd0(local_108,
                              "Loaded type mismatch, requested type {} from a stream containing {}",
                              &DAT_145b8f0e0,&local_res20,&local_res18,0);
        *(char **)(lVar4 + 0x20) = "Serialize\\hkSerialize.cpp";
        *(undefined8 *)(lVar4 + 0x28) = 0x30a;
        FUN_14373a950(local_108);
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
LAB_14371c3bc:
  if ((local_128 & 1) != 0) {
    FUN_143733a60(local_128 & 0xfffffffffffffffe);
  }
  FUN_14371b270(local_60);
  FUN_14371aef0(local_98);
  FUN_14371b030(local_b8);
  local_c8 = hkReflect::Cloner::Callback::vftable;
  local_c0 = hkReflect::Cloner::Callback::vftable;
  if (pvVar3 != (LPVOID)0x0) {
    FUN_14370d750(pvVar3,&DAT_145b8eda0);
  }
  return param_2;
}



// FUNCTION 14371c430 FUN_14371c430 body=24 status=ok
// SIG undefined FUN_14371c430(void)

void FUN_14371c430(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  FUN_143777ea0(param_1 + 3,0);
  return;
}



// FUNCTION 14371c450 FUN_14371c450 body=420 status=ok
// SIG undefined FUN_14371c450(void)

undefined4 * FUN_14371c450(longlong param_1,undefined4 *param_2,longlong *param_3,longlong param_4)

{
  LPVOID pvVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_f8 [64];
  undefined1 local_b8 [176];
  
  pvVar1 = TlsGetValue(DAT_146b8198c);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar1,"TthkSerialize::Save");
  }
  if (*param_3 == 0) {
    if (1 < DAT_146b822a8) {
      FUN_14373a730(local_f8,&DAT_146b822a0,2);
      lVar2 = FUN_14373bbd0(local_f8,"Cannot save, contents is null",&DAT_145b909f0,0);
      *(char **)(lVar2 + 0x20) = "Serialize\\hkSerialize.cpp";
      *(undefined8 *)(lVar2 + 0x28) = 0x3ae;
      FUN_14373a950(local_f8);
    }
  }
  else {
    if (*(longlong *)(param_4 + 0x30) != 0) {
      uVar3 = FUN_14371cae0(param_1);
      FUN_143734d40(local_b8,uVar3,param_4);
      FUN_143735800(local_b8,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 8),
                    *(undefined8 *)(param_1 + 0x10));
      FUN_1437353b0(local_b8,param_3);
      FUN_143735790(local_b8,param_2);
      FUN_143734fb0(local_b8);
      goto LAB_14371c5bf;
    }
    if (1 < DAT_146b822a8) {
      FUN_14373a730(local_f8,&DAT_146b822a0,2);
      lVar2 = FUN_14373bbd0(local_f8,"Cannot save, writeBuffer is closed",&DAT_145b909f0,0);
      *(char **)(lVar2 + 0x20) = "Serialize\\hkSerialize.cpp";
      *(undefined8 *)(lVar2 + 0x28) = 0x3af;
      FUN_14373a950(local_f8);
      *param_2 = 0x80040200;
      goto LAB_14371c5bf;
    }
  }
  *param_2 = 0x80040200;
LAB_14371c5bf:
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d750(pvVar1,&DAT_145b8eda0);
  }
  return param_2;
}



// FUNCTION 14371c600 FUN_14371c600 body=120 status=ok
// SIG undefined FUN_14371c600(void)

undefined8
FUN_14371c600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 local_48 [48];
  undefined8 local_18;
  undefined8 uStack_10;
  
  Audio::FDelayStereo::FDelayStereo(local_48);
  local_18 = 0;
  uStack_10 = 0;
  FUN_143747cb0(local_48,param_4);
  FUN_14371c450(param_1,param_2,param_3,local_48);
  UParticleModuleSubUV::PostLoad(local_48);
  return param_2;
}



// FUNCTION 14371c680 FUN_14371c680 body=158 status=ok
// SIG undefined FUN_14371c680(void)

ulonglong * FUN_14371c680(ulonglong *param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  bool bVar3;
  ulonglong local_res8 [2];
  ulonglong local_res18;
  longlong local_res20;
  
  local_res8[0] = local_res8[0] & 0xffffffff00000000;
  bVar3 = DAT_146b82298 == (code *)0x0;
  if (bVar3) {
    local_res8[0] = 0;
    puVar2 = local_res8;
  }
  else {
    puVar1 = (ulonglong *)(*DAT_146b82298)(&local_res20);
    puVar2 = &local_res18;
    local_res18 = *puVar1;
    *puVar1 = 0;
  }
  *param_1 = *puVar2;
  *puVar2 = 0;
  if (bVar3) {
    if (local_res8[0] != 0) {
      FUN_14370c150();
    }
  }
  if (!bVar3) {
    if (local_res18 != 0) {
      FUN_14370c150();
    }
  }
  if ((!bVar3) && (local_res20 != 0)) {
    FUN_14370c150();
  }
  return param_1;
}



// FUNCTION 14371c720 FUN_14371c720 body=456 status=ok
// SIG undefined FUN_14371c720(void)

undefined4 * FUN_14371c720(longlong param_1,undefined4 *param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 local_res8;
  undefined1 local_58 [64];
  
  uVar4 = 0;
  if (*(longlong *)(param_1 + 8) == 0) {
    if (param_4 == 0) {
      if (3 < DAT_146b822a8) {
        FUN_14373a730(local_58,&DAT_146b822a0,4);
        lVar1 = FUN_14373bbd0(local_58,"Failed to read input",&DAT_145b909f0,0);
        *(char **)(lVar1 + 0x20) = "Serialize\\hkSerialize.cpp";
        *(undefined8 *)(lVar1 + 0x28) = 0x193;
        *(undefined4 *)(lVar1 + 0xc) = 0xc8920000;
        FUN_14373a950(local_58);
      }
    }
    else {
      puVar2 = (undefined8 *)FUN_143731ce0(param_3,param_4);
      if (puVar2 == (undefined8 *)0x0) {
        if (1 < DAT_146b822a8) {
          FUN_14373a730(local_58,&DAT_146b822a0,2);
          lVar1 = FUN_14373bbd0(local_58,"The format was not recognized",&DAT_145b909f0,0);
          *(undefined8 *)(lVar1 + 0x28) = 0x1a3;
LAB_14371c865:
          *(char **)(lVar1 + 0x20) = "Serialize\\hkSerialize.cpp";
          *(undefined4 *)(lVar1 + 0xc) = 0xc8920001;
          FUN_14373a950(local_58);
          *param_2 = 0x80040200;
          return param_2;
        }
      }
      else {
        if ((code *)puVar2[2] != (code *)0x0) {
          puVar3 = (undefined8 *)(*(code *)puVar2[2])(&local_res8);
          uVar4 = *puVar3;
          *puVar3 = 0;
        }
        if (*(longlong *)(param_1 + 8) != 0) {
          FUN_14370c150();
        }
        *(undefined8 *)(param_1 + 8) = uVar4;
        if (*(longlong *)(param_1 + 8) != 0) goto LAB_14371c8d2;
        if (1 < DAT_146b822a8) {
          local_res8 = *puVar2;
          FUN_14373a730(local_58,&DAT_146b822a0,2);
          lVar1 = FUN_14373bbd0(local_58,
                                "No registered loader was found for the format \"{}\". Have you included hkCompat as a product feature or used the asset conversion tool to convert your assets?"
                                ,&DAT_145b74470,&local_res8,0);
          *(undefined8 *)(lVar1 + 0x28) = 0x19c;
          goto LAB_14371c865;
        }
      }
    }
    *param_2 = 0x80040200;
  }
  else {
LAB_14371c8d2:
    *param_2 = 0;
  }
  return param_2;
}



// FUNCTION 14371c8f0 FUN_14371c8f0 body=55 status=ok
// SIG undefined FUN_14371c8f0(void)

undefined8 * FUN_14371c8f0(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 0x18);
  param_2[1] = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(ulonglong *)(param_1 + 0x28);
  param_2[2] = uVar1;
  if ((uVar1 & 1) != 0) {
    FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 14371c930 FUN_14371c930 body=419 status=ok
// SIG undefined FUN_14371c930(void)

void FUN_14371c930(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong *puVar8;
  longlong lVar9;
  int iVar10;
  
  iVar1 = *(int *)(param_1 + 0x38);
  lVar7 = (longlong)iVar1;
  lVar9 = *(longlong *)(param_1 + 0x30);
  uVar5 = FUN_143703a50();
  iVar10 = (int)param_2[1] + iVar1;
  uVar4 = *(uint *)((longlong)param_2 + 0xc) & 0x3fffffff;
  if (((int)uVar4 < iVar10) && ((int)uVar4 < iVar10)) {
    iVar3 = iVar10;
    if (iVar10 < (int)(uVar4 * 2)) {
      iVar3 = uVar4 * 2;
    }
    FUN_14370c310(uVar5,param_2,iVar3,0x20);
  }
  lVar6 = (longlong)(int)param_2[1] * 0x20 + *param_2;
  if (0 < iVar1) {
    puVar8 = (ulonglong *)(lVar6 + 0x10);
    lVar9 = lVar9 - lVar6;
    do {
      if (puVar8 + -2 != (ulonglong *)0x0) {
        puVar8[-2] = *(ulonglong *)(lVar9 + -0x10 + (longlong)puVar8);
        puVar8[-1] = *(ulonglong *)((longlong)puVar8 + lVar9 + -8);
        uVar2 = *(ulonglong *)(lVar9 + (longlong)puVar8);
        *puVar8 = uVar2;
        if ((uVar2 & 1) != 0) {
          FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
        }
        FUN_1437165f0(puVar8 + 1,lVar9 + 8 + (longlong)puVar8);
      }
      puVar8 = puVar8 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  *(int *)(param_2 + 1) = iVar10;
  iVar1 = *(int *)(param_1 + 0x48);
  lVar7 = (longlong)iVar1;
  lVar9 = *(longlong *)(param_1 + 0x40);
  uVar5 = FUN_143703a50();
  uVar4 = *(uint *)((longlong)param_3 + 0xc) & 0x3fffffff;
  iVar10 = (int)param_3[1] + iVar1;
  if (((int)uVar4 < iVar10) && ((int)uVar4 < iVar10)) {
    iVar3 = iVar10;
    if (iVar10 < (int)(uVar4 * 2)) {
      iVar3 = uVar4 * 2;
    }
    FUN_14370c310(uVar5,param_3,iVar3,0x28);
  }
  lVar6 = *param_3 + (longlong)(int)param_3[1] * 0x28;
  if (0 < iVar1) {
    puVar8 = (ulonglong *)(lVar6 + 0x10);
    lVar9 = lVar9 - lVar6;
    do {
      if (puVar8 + -2 != (ulonglong *)0x0) {
        puVar8[-2] = *(ulonglong *)(lVar9 + -0x10 + (longlong)puVar8);
        puVar8[-1] = *(ulonglong *)((longlong)puVar8 + lVar9 + -8);
        uVar2 = *(ulonglong *)(lVar9 + (longlong)puVar8);
        *puVar8 = uVar2;
        if ((uVar2 & 1) != 0) {
          FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
        }
        FUN_1437165f0(puVar8 + 1,lVar9 + 8 + (longlong)puVar8);
        *(undefined4 *)(puVar8 + 2) = *(undefined4 *)(lVar9 + 0x10 + (longlong)puVar8);
      }
      puVar8 = puVar8 + 5;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  *(int *)(param_3 + 1) = iVar10;
  return;
}



// FUNCTION 14371cae0 FUN_14371cae0 body=82 status=ok
// SIG undefined FUN_14371cae0(void)

longlong FUN_14371cae0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 local_res8 [8];
  
  if (*param_1 == 0) {
    plVar2 = (longlong *)FUN_1436f8e50(local_res8);
    if (*param_1 != 0) {
      FUN_14370c150();
    }
    lVar1 = *plVar2;
    *plVar2 = 0;
    *param_1 = lVar1;
    return lVar1;
  }
  return *param_1;
}



// FUNCTION 14371cb40 FUN_14371cb40 body=65 status=ok
// SIG undefined FUN_14371cb40(void)

void FUN_14371cb40(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  undefined1 local_res8 [8];
  
  pbVar1 = (byte *)FUN_143715390(*(undefined8 *)(param_1 + 8),local_res8);
  if ((~*pbVar1 & 1) == 0) {
    FUN_1437353d0(param_2,param_1);
  }
  return;
}



// FUNCTION 14371cb90 FUN_14371cb90 body=128 status=ok
// SIG undefined FUN_14371cb90(void)

void FUN_14371cb90(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  if ((*(byte *)(param_2 + 2) & 1) != 0) {
    FUN_1437329e0(param_2[2] & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    FUN_143733a60(param_1[2] & 0xfffffffffffffffe);
  }
  param_1[2] = param_2[2];
  FUN_1437166c0(param_1 + 3,param_3);
  *(undefined4 *)(param_1 + 4) = param_4;
  return;
}



// FUNCTION 14371cc10 FUN_14371cc10 body=111 status=ok
// SIG undefined FUN_14371cc10(void)

void FUN_14371cc10(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  if ((*(byte *)(param_2 + 2) & 1) != 0) {
    FUN_1437329e0(param_2[2] & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    FUN_143733a60(param_1[2] & 0xfffffffffffffffe);
  }
  param_1[2] = param_2[2];
  FUN_1437166c0(param_1 + 3,param_3);
  return;
}



// FUNCTION 14371cc80 FUN_14371cc80 body=753 status=ok
// SIG undefined FUN_14371cc80(void)

longlong * FUN_14371cc80(longlong param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  LPVOID pvVar2;
  longlong lVar3;
  int *piVar4;
  LPVOID pvVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  bool bVar8;
  ulonglong local_res8;
  ulonglong local_res20;
  longlong local_68;
  undefined1 local_60 [56];
  
  local_res8 = local_res8 & 0xffffffff00000000;
  pvVar2 = TlsGetValue(DAT_146b8198c);
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d620(pvVar2,"LtToBundle (ReadBuffer)","StGet read format");
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar3 = param_3[1] - *param_3;
    if ((lVar3 < 0x80) && (param_3[7] != 0)) {
      lVar3 = hkIo::ReadBuffer::implPrefetch(param_3,0x80);
    }
    piVar4 = (int *)FUN_14371c720(param_1,&local_res8,*param_3,lVar3);
    if (*piVar4 < 0) {
      *param_2 = 0;
      goto LAB_14371cf4d;
    }
  }
  pvVar5 = TlsGetValue(DAT_146b8198c);
  if (pvVar5 != (LPVOID)0x0) {
    FUN_14370d800(pvVar5,"StRead bundle data");
  }
  plVar6 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                     (*(longlong **)(param_1 + 8),&local_res8,param_3);
  lVar3 = *plVar6;
  if (lVar3 == 0) {
    if (1 < DAT_146b822a8) {
      FUN_14373a730(local_60,&DAT_146b822a0,2);
      lVar3 = FUN_14373bbd0(local_60,"Unable to load from buffer",&DAT_145b909f0,0);
      *(char **)(lVar3 + 0x20) = "Serialize\\hkSerialize.cpp";
      *(undefined8 *)(lVar3 + 0x28) = 0x1ba;
      FUN_14373a950(local_60);
    }
LAB_14371cda9:
    *param_2 = 0;
  }
  else {
    if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
      pvVar5 = TlsGetValue(DAT_146b8198c);
      if (pvVar5 != (LPVOID)0x0) {
        FUN_14370d800(pvVar5,"StVersioning");
      }
      if (*(longlong *)(param_1 + 0x10) == 0) {
        bVar8 = DAT_146b82298 == (code *)0x0;
        if (bVar8) {
          local_res8 = 0;
          puVar7 = &local_res8;
        }
        else {
          puVar7 = (ulonglong *)(*DAT_146b82298)(&local_68,0);
          local_res20 = *puVar7;
          *puVar7 = 0;
          puVar7 = &local_res20;
        }
        uVar1 = *puVar7;
        *puVar7 = 0;
        if (bVar8) {
          if (local_res8 != 0) {
            FUN_14370c150();
          }
        }
        if (!bVar8) {
          if (local_res20 != 0) {
            FUN_14370c150();
          }
        }
        if ((!bVar8) && (local_68 != 0)) {
          FUN_14370c150();
        }
        if (*(longlong *)(param_1 + 0x10) != 0) {
          FUN_14370c150();
        }
        *(ulonglong *)(param_1 + 0x10) = uVar1;
      }
      plVar6 = *(longlong **)(param_1 + 0x10);
      if (plVar6 != (longlong *)0x0) {
        plVar6 = (longlong *)
                 (**(code **)(*plVar6 + 0x18))
                           (plVar6,&local_res8,lVar3,0,0,(byte)(*(uint *)(param_1 + 0x28) >> 1) & 1)
        ;
        lVar3 = *plVar6;
        if (lVar3 == 0) {
          if (1 < DAT_146b822a8) {
            FUN_14373a730(local_60,&DAT_146b822a0,2);
            lVar3 = FUN_14373bbd0(local_60,"Versioning failed",&DAT_145b909f0,0);
            *(char **)(lVar3 + 0x20) = "Serialize\\hkSerialize.cpp";
            *(undefined8 *)(lVar3 + 0x28) = 0x1de;
            FUN_14373a950(local_60);
            *param_2 = 0;
            goto LAB_14371cf4d;
          }
          goto LAB_14371cda9;
        }
      }
    }
    *param_2 = lVar3;
  }
LAB_14371cf4d:
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d7a0(pvVar2,&DAT_145b8dd34);
  }
  return param_2;
}



// FUNCTION 14371cf80 FUN_14371cf80 body=105 status=ok
// SIG undefined FUN_14371cf80(void)

undefined8 FUN_14371cf80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  FUN_143734400(&local_48,param_3);
  FUN_14371cc80(param_1,param_2,&local_48);
  FUN_143733ce0(&local_48);
  return param_2;
}



// FUNCTION 14371cff0 FUN_14371cff0 body=645 status=ok
// SIG undefined FUN_14371cff0(void)

longlong *
FUN_14371cff0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  int *piVar3;
  LPVOID pvVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58 [64];
  
  pvVar2 = TlsGetValue(DAT_146b8198c);
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d620(pvVar2,"LtToBundle (memory view)","StGet read format");
  }
  puVar6 = &local_60;
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
    puVar6 = param_5;
  }
  piVar3 = (int *)FUN_14371c720(param_1,&param_5,param_3,param_4);
  if (*piVar3 < 0) {
    *param_2 = 0;
    goto LAB_14371d23c;
  }
  pvVar4 = TlsGetValue(DAT_146b8198c);
  if (pvVar4 != (LPVOID)0x0) {
    FUN_14370d800(pvVar4,"StRead bundle data");
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
            (*(longlong **)(param_1 + 8),&local_68,param_3,param_4,puVar6);
  if (local_68 == 0) {
    if (1 < DAT_146b822a8) {
      FUN_14373a730(local_58,&DAT_146b822a0,2);
      lVar5 = FUN_14373bbd0(local_58,"Unable to load from buffer",&DAT_145b909f0,0);
      *(char **)(lVar5 + 0x20) = "Serialize\\hkSerialize.cpp";
      *(undefined8 *)(lVar5 + 0x28) = 0x1fa;
      FUN_14373a950(local_58);
    }
LAB_14371d123:
    *param_2 = 0;
  }
  else {
    if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
      pvVar4 = TlsGetValue(DAT_146b8198c);
      if (pvVar4 != (LPVOID)0x0) {
        FUN_14370d800(pvVar4,"StVersioning");
      }
      if (*(longlong *)(param_1 + 0x10) == 0) {
        puVar6 = (undefined8 *)FUN_14371c680(&param_5,0);
        uVar1 = *puVar6;
        *puVar6 = 0;
        if (*(longlong *)(param_1 + 0x10) != 0) {
          FUN_14370c150();
        }
        *(undefined8 *)(param_1 + 0x10) = uVar1;
        if (param_5 != (undefined8 *)0x0) {
          FUN_14370c150();
        }
      }
      plVar7 = *(longlong **)(param_1 + 0x10);
      if (plVar7 != (longlong *)0x0) {
        plVar7 = (longlong *)
                 (**(code **)(*plVar7 + 0x18))
                           (plVar7,&param_5,local_68,0,0,(byte)(*(uint *)(param_1 + 0x28) >> 1) & 1)
        ;
        local_68 = *plVar7;
        if (local_68 == 0) {
          if (1 < DAT_146b822a8) {
            FUN_14373a730(local_58,&DAT_146b822a0,2);
            lVar5 = FUN_14373bbd0(local_58,"Versioning failed",&DAT_145b909f0,0);
            *(char **)(lVar5 + 0x20) = "Serialize\\hkSerialize.cpp";
            *(undefined8 *)(lVar5 + 0x28) = 0x21e;
            FUN_14373a950(local_58);
            *param_2 = 0;
            goto LAB_14371d23c;
          }
          goto LAB_14371d123;
        }
      }
    }
    *param_2 = local_68;
  }
LAB_14371d23c:
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d7a0(pvVar2,&DAT_145b8dd34);
  }
  return param_2;
}



// FUNCTION 14371d280 FUN_14371d280 body=154 status=ok
// SIG undefined FUN_14371d280(void)

undefined8 * FUN_14371d280(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  LPVOID pvVar1;
  longlong local_res20;
  
  pvVar1 = TlsGetValue(DAT_146b8198c);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar1,"TthkSerialize::Load");
  }
  FUN_14371cf80(param_1,&local_res20,param_3);
  if (local_res20 == 0) {
    *param_2 = 0;
  }
  else {
    FUN_14371be40(param_1,param_2);
  }
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d750(pvVar1,&DAT_145b8eda0);
  }
  return param_2;
}



// FUNCTION 14371d320 FUN_14371d320 body=181 status=ok
// SIG undefined FUN_14371d320(void)

/* WARNING: Removing unreachable block (ram,0x00014371d3a2) */

undefined8 *
FUN_14371d320(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  LPVOID pvVar1;
  longlong local_18 [2];
  
  pvVar1 = TlsGetValue(DAT_146b8198c);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar1,"TthkSerialize::Load::toVar");
  }
  FUN_14371cf80(param_1,local_18,param_3);
  if (local_18[0] == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    FUN_14371c0d0(param_1,param_2,local_18[0],param_4);
  }
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d750(pvVar1,&DAT_145b8eda0);
  }
  return param_2;
}



// FUNCTION 14371d3e0 FUN_14371d3e0 body=197 status=ok
// SIG undefined FUN_14371d3e0(void)

/* WARNING: Removing unreachable block (ram,0x00014371d474) */

undefined8 *
FUN_14371d3e0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  LPVOID pvVar1;
  longlong local_res8;
  
  pvVar1 = TlsGetValue(DAT_146b8198c);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar1,"TthkSerialize::Load::toVar");
  }
  FSlateTextBlockLayout::SetDebugSourceInfo(param_1 + 0x18);
  FUN_14371cff0(param_1,&local_res8,param_3,param_4,param_6);
  if (local_res8 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    FUN_14371c0d0(param_1,param_2,local_res8,param_5);
  }
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d750(pvVar1,&DAT_145b8eda0);
  }
  return param_2;
}



// FUNCTION 14371d4b0 FUN_14371d4b0 body=59 status=ok
// SIG undefined FUN_14371d4b0(void)

longlong * FUN_14371d4b0(longlong *param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_14370c030(param_2);
  }
  if (*param_1 != 0) {
    FUN_14370c150();
  }
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 14371d4f0 FUN_14371d4f0 body=27 status=ok
// SIG undefined FUN_14371d4f0(void)

longlong FUN_14371d4f0(longlong param_1)

{
  FUN_143777e90(param_1 + 0x18);
  return param_1;
}



// FUNCTION 14371d510 FUN_14371d510 body=15 status=ok
// SIG undefined FUN_14371d510(void)

longlong FUN_14371d510(longlong param_1)

{
  *(code **)(param_1 + 8) = FUN_14371cb40;
  return param_1;
}



// FUNCTION 14371d520 withMultiBundle body=38 status=ok
// SIG undefined withMultiBundle(void)

undefined8 hkSerialize::Save::withMultiBundle(undefined8 param_1)

{
  longlong *plVar1;
  undefined1 local_res8 [32];
  
  plVar1 = (longlong *)FUN_14371cae0();
  (**(code **)(*plVar1 + 0x48))(plVar1,local_res8);
  return param_1;
}



// FUNCTION 14371d550 FUN_14371d550 body=109 status=ok
// SIG undefined FUN_14371d550(void)

longlong FUN_14371d550(longlong param_1,undefined4 param_2,longlong param_3)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  if ((~(byte)param_2 & 1) == 0) {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_14370c150();
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else if (param_3 != 0) {
    FUN_14370c030(param_3);
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_14370c150();
    }
    *(longlong *)(param_1 + 0x10) = param_3;
    return param_1;
  }
  return param_1;
}



// FUNCTION 14371d5c0 FUN_14371d5c0 body=117 status=ok
// SIG undefined FUN_14371d5c0(void)

longlong * FUN_14371d5c0(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 local_18 [16];
  
  if (param_2 != 0) {
    puVar2 = (undefined8 *)FUN_143714490(param_3,0x1000);
    if ((puVar2 != (undefined8 *)0x0) && ((code *)*puVar2 != (code *)0x0)) {
      plVar3 = (longlong *)(*(code *)*puVar2)(local_18,param_2);
      lVar1 = plVar3[1];
      *param_1 = *plVar3;
      param_1[1] = lVar1;
      return param_1;
    }
  }
  param_1[1] = param_3;
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 14371d640 FUN_14371d640 body=8 status=ok
// SIG undefined FUN_14371d640(void)

undefined8 FUN_14371d640(void)

{
  return DAT_146b834f8;
}



// FUNCTION 14371d650 FUN_14371d650 body=17 status=ok
// SIG undefined FUN_14371d650(void)

void FUN_14371d650(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014371d65d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b834f8 + 0x18))(DAT_146b834f8,param_1);
  return;
}



// FUNCTION 14371d670 FUN_14371d670 body=17 status=ok
// SIG undefined FUN_14371d670(void)

void FUN_14371d670(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014371d67d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b834f8 + 0x20))(DAT_146b834f8,param_1);
  return;
}



// FUNCTION 14371d6a0 FUN_14371d6a0 body=120 status=ok
// SIG undefined FUN_14371d6a0(void)

undefined8 FUN_14371d6a0(longlong *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  
  if (*param_1 == 0) {
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar1 + 0x58),0xf8);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_14371d7d0(lVar2);
    }
    if (lVar2 != *param_1) {
      if (*param_1 != 0) {
        FUN_14370c150();
      }
      *param_1 = lVar2;
    }
    return 0;
  }
  return 0;
}



// FUNCTION 14371d720 FUN_14371d720 body=33 status=ok
// SIG undefined FUN_14371d720(void)

undefined8 * FUN_14371d720(undefined8 *param_1)

{
  FUN_14371d750();
  *param_1 = hkReflect::Version::PatchAdder::vftable;
  return param_1;
}



// FUNCTION 14371d750 FUN_14371d750 body=45 status=ok
// SIG undefined FUN_14371d750(void)

undefined8 * FUN_14371d750(undefined8 *param_1,longlong param_2)

{
  param_1[1] = param_2;
  *param_1 = hkReflect::Version::PatchHandler::vftable;
  param_1[2] = param_2 + 0x18;
  FUN_14377a7d0();
  return param_1;
}



// FUNCTION 14371d780 FUN_14371d780 body=69 status=ok
// SIG undefined FUN_14371d780(void)

undefined8 * FUN_14371d780(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkReflect::Version::PatchInfoCache::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  return param_1;
}



// FUNCTION 14371d7d0 FUN_14371d7d0 body=345 status=ok
// SIG undefined FUN_14371d7d0(void)

undefined8 * FUN_14371d7d0(undefined8 *param_1)

{
  LPVOID pvVar1;
  void *_Dst;
  undefined1 local_res8;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkReflect::Version::PatchRegistry::vftable;
  FUN_14377a720(param_1 + 3);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x80000000;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0xffffffff;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0xffffffff;
  FUN_14373bf20(param_1 + 0x17,local_res8);
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0xffffffff;
  FUN_14373bf20(param_1 + 0x1c,local_res8);
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  _Dst = (void *)(**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))();
  if (_Dst != (void *)0x0) {
    _guard_xfg_dispatch_icall_nop(_Dst,0,0x68);
    FUN_14373bf20(_Dst,local_res8);
    *(undefined8 *)((longlong)_Dst + 0x18) = 0;
    *(undefined4 *)((longlong)_Dst + 0x20) = 0;
    *(undefined4 *)((longlong)_Dst + 0x24) = 0x80000000;
    FUN_14373bf20((longlong)_Dst + 0x28,local_res8);
    FUN_14370d870((longlong)_Dst + 0x40,0);
    param_1[0x10] = _Dst;
    return param_1;
  }
  param_1[0x10] = 0;
  return param_1;
}



// FUNCTION 14371d930 FUN_14371d930 body=33 status=ok
// SIG undefined FUN_14371d930(void)

undefined8 * FUN_14371d930(undefined8 *param_1)

{
  FUN_14371d750();
  *param_1 = hkReflect::Version::PatchRemover::vftable;
  return param_1;
}



// FUNCTION 14371d960 FUN_14371d960 body=309 status=ok
// SIG undefined FUN_14371d960(void)

undefined8 *
FUN_14371d960(undefined8 *param_1,longlong param_2,undefined8 param_3,longlong param_4,
             undefined4 param_5)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkReflect::Version::PatchSet::vftable;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_14373bf20(param_1 + 6,(undefined1)param_5);
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  param_1[0xb] = param_4;
  if (param_4 != 0) {
    FUN_14370c030(param_4);
  }
  param_1[0xc] = param_2;
  param_1[0xd] = param_3;
  param_1[0xe] = param_2 + 0x18;
  FUN_14377a7a0();
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x8c) = param_5;
  *(undefined2 *)(param_1 + 0x11) = 0;
  if (param_1[0xd] == 0) {
    uVar1 = FUN_14371d640();
    param_1[0xd] = uVar1;
  }
  if (param_1[0xb] == 0) {
    pvVar2 = TlsGetValue(DAT_146b7bf70);
    if (pvVar2 == (LPVOID)0x0) {
      pvVar2 = DAT_146b7bf68;
    }
    lVar3 = (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar2 + 0x58),0x48);
    if (lVar3 != 0) {
      lVar4 = FUN_14371d780(lVar3);
    }
    if (lVar4 != param_1[0xb]) {
      if (param_1[0xb] != 0) {
        FUN_14370c150();
      }
      param_1[0xb] = lVar4;
    }
  }
  return param_1;
}



// FUNCTION 14371daa0 FUN_14371daa0 body=60 status=ok
// SIG undefined FUN_14371daa0(void)

void FUN_14371daa0(undefined8 *param_1)

{
  int iVar1;
  undefined1 local_res8 [32];
  
  *param_1 = hkReflect::Version::PatchHandler::vftable;
  iVar1 = FUN_14371f5e0(param_1[1]);
  if (iVar1 != 0) {
    FUN_14371f840(param_1[1],local_res8);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)param_1[2]);
  return;
}



// FUNCTION 14371dae0 FUN_14371dae0 body=292 status=ok
// SIG undefined FUN_14371dae0(void)

void FUN_14371dae0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x44)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x38),4,*(uint *)(param_1 + 0x44) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  uVar1 = FUN_143703a50();
  FUN_143700a90(param_1 + 0x28,uVar1);
  AK::MemoryMgr::StartProfileThreadUsage((int)param_1 + 0x28);
  uVar1 = FUN_143703a50();
  iVar3 = *(int *)(param_1 + 0x20) + -1;
  lVar5 = (longlong)iVar3;
  if (-1 < iVar3) {
    puVar4 = (uint *)(*(longlong *)(param_1 + 0x18) + 0xc + lVar5 * 0x10);
    do {
      uVar2 = FUN_143703a50();
      puVar4[-1] = 0;
      if (-1 < (int)*puVar4) {
        FUN_143702e10(uVar2,*(undefined8 *)(puVar4 + -3),4,*puVar4 & 0x3fffffff);
      }
      puVar4[-3] = 0;
      puVar4[-2] = 0;
      *puVar4 = 0x80000000;
      puVar4 = puVar4 + -4;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),0x10,*(uint *)(param_1 + 0x24) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 14371dc10 FUN_14371dc10 body=300 status=ok
// SIG undefined FUN_14371dc10(void)

void FUN_14371dc10(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  LPVOID pvVar3;
  undefined8 uVar4;
  
  lVar1 = param_1[0x10];
  *param_1 = hkReflect::Version::PatchRegistry::vftable;
  if (lVar1 != 0) {
    FUN_14371de70(lVar1);
    pvVar3 = TlsGetValue(DAT_146b7bf70);
    if (pvVar3 == (LPVOID)0x0) {
      pvVar3 = DAT_146b7bf68;
    }
    (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 0x10))
              (*(longlong **)((longlong)pvVar3 + 0x58),lVar1,0x68);
  }
  FUN_14373bf70(param_1 + 0x1c);
  uVar4 = FUN_143703a50();
  FUN_143700a90(param_1 + 0x1a,uVar4);
  iVar2 = (int)param_1;
  AK::MemoryMgr::StartProfileThreadUsage(iVar2 + 0xd0);
  FUN_14373bf70(param_1 + 0x17);
  uVar4 = FUN_143703a50();
  FUN_143700a90(param_1 + 0x15,uVar4);
  AK::MemoryMgr::StartProfileThreadUsage(iVar2 + 0xa8);
  uVar4 = FUN_143703a50();
  FUN_143700a90(param_1 + 0x13,uVar4);
  AK::MemoryMgr::StartProfileThreadUsage(iVar2 + 0x98);
  uVar4 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x94)) {
    FUN_143702e10(uVar4,param_1[0x11],8,*(uint *)((longlong)param_1 + 0x94) & 0x3fffffff);
  }
  param_1[0x11] = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x80000000;
  hkReadersWriterLock::~hkReadersWriterLock(param_1 + 3);
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 14371dd40 FUN_14371dd40 body=304 status=ok
// SIG undefined FUN_14371dd40(void)

void FUN_14371dd40(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  
  *param_1 = hkReflect::Version::PatchSet::vftable;
  uVar1 = FUN_143703a50();
  iVar3 = *(int *)(param_1 + 0x10) + -1;
  if (-1 < iVar3) {
    lVar2 = param_1[0xf] + (longlong)iVar3 * 8;
    do {
      FUN_143716650(lVar2);
      lVar2 = lVar2 + -8;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x84)) {
    FUN_143702e10(uVar1,param_1[0xf],8,*(uint *)((longlong)param_1 + 0x84) & 0x3fffffff);
  }
  param_1[0xf] = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x80000000;
  FUN_14377a830(param_1[0xe]);
  if (param_1[0xb] != 0) {
    FUN_14370c150();
  }
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 10) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x54)) {
    FUN_143702e10(uVar1,param_1[9],8,*(uint *)((longlong)param_1 + 0x54) & 0x3fffffff);
  }
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  FUN_14373bf70(param_1 + 6);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 4) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    FUN_143702e10(uVar1,param_1[3],4,*(uint *)((longlong)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 14371de70 FUN_14371de70 body=231 status=ok
// SIG undefined FUN_14371de70(void)

void FUN_14371de70(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  LPVOID pvVar4;
  
  uVar2 = hkCachedHashMap<hkStringMapOperations,hkBuiltinContainerAllocator<0,0>_>::getIterator
                    (param_1 + 0x28);
  iVar1 = hkCachedHashMap<hkStringMapOperations,hkBuiltinContainerAllocator<0,0>_>::isValid
                    (param_1 + 0x28,uVar2);
  while (iVar1 != 0) {
    uVar3 = hkCachedHashMap<hkStringMapOperations,hkBuiltinContainerAllocator<0,0>_>::getValue
                      (param_1 + 0x28,uVar2);
    pvVar4 = TlsGetValue(DAT_146b7bf70);
    if (pvVar4 == (LPVOID)0x0) {
      pvVar4 = DAT_146b7bf68;
    }
    FUN_1437039c0(*(undefined8 *)((longlong)pvVar4 + 0x58),uVar3);
    uVar2 = FUN_14373c200(param_1 + 0x28,uVar2);
    iVar1 = hkCachedHashMap<hkStringMapOperations,hkBuiltinContainerAllocator<0,0>_>::isValid
                      (param_1 + 0x28,uVar2);
  }
  FWindowsCriticalSection::~FWindowsCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  FUN_14373bf70(param_1 + 0x28);
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar2,*(undefined8 *)(param_1 + 0x18),8,*(uint *)(param_1 + 0x24) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  FUN_14373bf70(param_1);
  return;
}



// FUNCTION 14371df60 FUN_14371df60 body=62 status=ok
// SIG undefined FUN_14371df60(void)

undefined8 * FUN_14371df60(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Version::PatchAdder::vftable;
  FUN_14371daa0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14371dfa0 FUN_14371dfa0 body=52 status=ok
// SIG undefined FUN_14371dfa0(void)

undefined8 FUN_14371dfa0(undefined8 param_1,ulonglong param_2)

{
  FUN_14371daa0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14371dfe0 FUN_14371dfe0 body=139 status=ok
// SIG undefined FUN_14371dfe0(void)

longlong FUN_14371dfe0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14371dae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x48;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x48);
    }
  }
  return param_1;
}



// FUNCTION 14371e070 FUN_14371e070 body=139 status=ok
// SIG undefined FUN_14371e070(void)

longlong FUN_14371e070(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14371dc10();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0xf8;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xf8);
    }
  }
  return param_1;
}



// FUNCTION 14371e100 FUN_14371e100 body=62 status=ok
// SIG undefined FUN_14371e100(void)

undefined8 * FUN_14371e100(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Version::PatchRemover::vftable;
  FUN_14371daa0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14371e140 FUN_14371e140 body=139 status=ok
// SIG undefined FUN_14371e140(void)

longlong FUN_14371e140(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14371dd40();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x90;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x90);
    }
  }
  return param_1;
}



// FUNCTION 14371e1d0 FUN_14371e1d0 body=325 status=ok
// SIG undefined FUN_14371e1d0(void)

undefined8 FUN_14371e1d0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  undefined1 uVar9;
  int iVar10;
  undefined1 local_res10 [8];
  
  if (param_2 != 0) {
    uVar5 = FUN_14371f4b0(*(undefined8 *)(param_1 + 0x60));
    iVar4 = FUN_14371f2d0(*(undefined8 *)(param_1 + 0x60),uVar5);
    if (-1 < iVar4) {
      FUN_14371e320(*(undefined8 *)(param_1 + 0x58),iVar4);
      if (*(int *)(param_1 + 0x20) + -1 < *(int *)(param_1 + 0x28) * 2) {
        FUN_1436ffb50(param_1 + 0x18,local_res10,*(int *)(param_1 + 0x20) * 2);
      }
      uVar9 = 1;
      lVar2 = *(longlong *)(param_1 + 0x18);
      uVar8 = *(int *)(param_1 + 0x20) - 1;
      uVar7 = iVar4 * -0x61c8864f;
      uVar7 = (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | iVar4 * -0x4f000000
              ) & uVar8;
      lVar6 = (longlong)(int)uVar7;
      iVar1 = *(int *)(lVar2 + lVar6 * 4);
      do {
        iVar10 = 1;
        if (iVar1 == -1) {
LAB_14371e28c:
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + iVar10;
          *(int *)(lVar2 + (longlong)(int)uVar7 * 4) = iVar4;
          if (iVar10 != 0) {
            lVar2 = *(longlong *)
                     (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x88) + (longlong)iVar4 * 8);
            if ((*(char *)(param_1 + 0x88) == '\0') && (*(char *)(lVar2 + 0x24) != '\0')) {
              uVar3 = 0;
            }
            else {
              uVar3 = 1;
            }
            *(undefined1 *)(param_1 + 0x88) = uVar3;
            if ((*(char *)(param_1 + 0x89) == '\0') && (*(char *)(lVar2 + 0x24) == '\0')) {
              uVar9 = 0;
            }
            *(undefined1 *)(param_1 + 0x89) = uVar9;
            *(undefined4 *)(param_1 + 0x50) = 0;
          }
          return *(undefined8 *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x88) + (longlong)iVar4 * 8);
        }
        if (*(int *)(lVar2 + lVar6 * 4) == iVar4) {
          iVar10 = 0;
          goto LAB_14371e28c;
        }
        uVar7 = uVar7 + 1 & uVar8;
        lVar6 = (longlong)(int)uVar7;
        iVar1 = *(int *)(lVar2 + lVar6 * 4);
      } while( true );
    }
  }
  return 0;
}



// FUNCTION 14371e320 FUN_14371e320 body=152 status=ok
// SIG undefined FUN_14371e320(void)

void FUN_14371e320(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar3 = 0;
    do {
      plVar2 = (longlong *)
               ((longlong)*(int *)(*(longlong *)(param_1 + 0x38) + lVar3) * 0x10 +
               *(longlong *)(param_1 + 0x18));
      uVar1 = FUN_143703a50();
      if (*(uint *)(plVar2 + 1) == (*(uint *)((longlong)plVar2 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(uVar1,plVar2,4);
      }
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 4;
      *(undefined4 *)(*plVar2 + (longlong)(int)plVar2[1] * 4) = param_2;
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    } while (iVar4 < *(int *)(param_1 + 0x40));
  }
  return;
}



// FUNCTION 14371e3c0 FUN_14371e3c0 body=133 status=ok
// SIG undefined FUN_14371e3c0(void)

void FUN_14371e3c0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_14371f760(param_2);
  if (iVar1 != 0) {
    uVar2 = FUN_143703a50();
    if (*(uint *)(param_1 + 0x90) == (*(uint *)(param_1 + 0x94) & 0x3fffffff)) {
      FUN_14370c460(uVar2,(longlong *)(param_1 + 0x88),8);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x88) + (longlong)*(int *)(param_1 + 0x90) * 8) =
         param_2;
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
    hkMapBase<unsigned___int64,unsigned___int64,hkMapOperations<unsigned___int64>_>::clear
              (param_1 + 0x98);
    hkCachedHashMap<hkStringMapOperations,hkBuiltinContainerAllocator<0,0>_>::clear(param_1 + 0xb8);
  }
  return;
}



// FUNCTION 14371e450 FUN_14371e450 body=346 status=ok
// SIG undefined FUN_14371e450(void)

undefined8 FUN_14371e450(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 uVar4;
  int *piVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  undefined1 uVar9;
  int iVar10;
  undefined1 local_res10 [8];
  undefined8 local_res20;
  undefined8 local_18 [2];
  
  if (param_2 != 0) {
    local_18[0] = FUN_14371f4b0(*(undefined8 *)(param_1 + 0x60));
    local_res20 = 0xffffffffffffffff;
    piVar5 = (int *)FUN_14372d420(*(longlong *)(param_1 + 0x60) + 0x98,local_18,&local_res20);
    iVar1 = *piVar5;
    if (-1 < iVar1) {
      FUN_14371e320(*(undefined8 *)(param_1 + 0x58),iVar1);
      if (*(int *)(param_1 + 0x20) + -1 < *(int *)(param_1 + 0x28) * 2) {
        FUN_1436ffb50(param_1 + 0x18,local_res10,*(int *)(param_1 + 0x20) * 2);
      }
      uVar9 = 1;
      lVar3 = *(longlong *)(param_1 + 0x18);
      uVar8 = *(int *)(param_1 + 0x20) - 1;
      uVar7 = iVar1 * -0x61c8864f;
      uVar7 = (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | iVar1 * -0x4f000000
              ) & uVar8;
      lVar6 = (longlong)(int)uVar7;
      iVar2 = *(int *)(lVar3 + lVar6 * 4);
      do {
        iVar10 = 1;
        if (iVar2 == -1) {
LAB_14371e521:
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + iVar10;
          *(int *)(lVar3 + (longlong)(int)uVar7 * 4) = iVar1;
          if (iVar10 != 0) {
            lVar3 = *(longlong *)
                     (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x88) + (longlong)iVar1 * 8);
            if ((*(char *)(param_1 + 0x88) == '\0') && (*(char *)(lVar3 + 0x24) != '\0')) {
              uVar4 = 0;
            }
            else {
              uVar4 = 1;
            }
            *(undefined1 *)(param_1 + 0x88) = uVar4;
            if ((*(char *)(param_1 + 0x89) == '\0') && (*(char *)(lVar3 + 0x24) == '\0')) {
              uVar9 = 0;
            }
            *(undefined1 *)(param_1 + 0x89) = uVar9;
            *(undefined4 *)(param_1 + 0x50) = 0;
          }
          return *(undefined8 *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x88) + (longlong)iVar1 * 8);
        }
        if (*(int *)(lVar3 + lVar6 * 4) == iVar1) {
          iVar10 = 0;
          goto LAB_14371e521;
        }
        uVar7 = uVar7 + 1 & uVar8;
        lVar6 = (longlong)(int)uVar7;
        iVar2 = *(int *)(lVar3 + lVar6 * 4);
      } while( true );
    }
  }
  return 0;
}



// FUNCTION 14371e5b0 FUN_14371e5b0 body=1158 status=ok
// SIG undefined FUN_14371e5b0(void)

undefined4 * FUN_14371e5b0(longlong param_1,undefined4 *param_2,byte *param_3,longlong *param_4)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 uVar13;
  int *piVar14;
  byte *pbVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int local_res8 [2];
  undefined4 *local_res10;
  undefined8 local_res18;
  longlong *local_res20;
  byte *local_e8;
  longlong local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined1 *local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined1 local_a8 [136];
  
  if (param_3 != (byte *)0x0) {
    bVar1 = *param_3;
    while ((~bVar1 & 1) != 0) {
      param_3 = *(byte **)(param_3 + 8);
      bVar1 = *param_3;
    }
  }
  local_res10 = param_2;
  local_res20 = param_4;
  local_e8 = (byte *)FUN_14371edf0(*(undefined8 *)(param_1 + 0x58),param_3);
  if (local_e8 != (byte *)0x0) {
    local_res8[0] = 0;
    if (0 < *(int *)(local_e8 + 8)) {
      local_e0 = 0;
      do {
        iVar9 = *(int *)(local_e0 + *(longlong *)local_e8);
        if (*(int *)(param_1 + 0x20) + -1 < *(int *)(param_1 + 0x28) * 2) {
          FUN_1436ffb50(param_1 + 0x18,&local_res18,*(int *)(param_1 + 0x20) * 2);
        }
        iVar19 = 1;
        lVar3 = *(longlong *)(param_1 + 0x18);
        uVar17 = *(int *)(param_1 + 0x20) - 1;
        uVar8 = iVar9 * -0x61c8864f;
        uVar8 = (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                iVar9 * -0x4f000000) & uVar17;
        lVar16 = (longlong)(int)uVar8;
        iVar2 = *(int *)(lVar3 + lVar16 * 4);
        while (iVar2 != -1) {
          if (*(int *)(lVar3 + lVar16 * 4) == iVar9) {
            iVar19 = 0;
            break;
          }
          uVar8 = uVar8 + 1 & uVar17;
          lVar16 = (longlong)(int)uVar8;
          iVar2 = *(int *)(lVar3 + lVar16 * 4);
        }
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + iVar19;
        *(int *)(lVar3 + (longlong)(int)uVar8 * 4) = iVar9;
        if (iVar19 != 0) {
          lVar3 = *(longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x88) + (longlong)iVar9 * 8);
          if ((*(char *)(param_1 + 0x88) == '\0') && (*(char *)(lVar3 + 0x24) != '\0')) {
            uVar6 = 0;
          }
          else {
            uVar6 = 1;
          }
          *(undefined1 *)(param_1 + 0x88) = uVar6;
          if ((*(char *)(param_1 + 0x89) == '\0') && (*(char *)(lVar3 + 0x24) == '\0')) {
            uVar6 = 0;
          }
          else {
            uVar6 = 1;
          }
          *(undefined1 *)(param_1 + 0x89) = uVar6;
          *(undefined4 *)(param_1 + 0x50) = 0;
        }
        local_res8[0] = local_res8[0] + 1;
        local_e0 = local_e0 + 4;
        param_2 = local_res10;
      } while (local_res8[0] < *(int *)(local_e8 + 8));
    }
    *param_2 = 0;
    return param_2;
  }
  puVar11 = (undefined8 *)FUN_143714490(param_3,1);
  iVar9 = 0;
  if (puVar11 != (undefined8 *)0x0) {
    iVar9 = (int)*puVar11;
  }
  local_e8 = (byte *)0x0;
  if (((byte)iVar9 & 0xf) == 7) {
    local_e8 = param_3;
  }
  if (local_e8 != (byte *)0x0) {
    if ((int)local_res20[1] + -1 < (int)local_res20[2] * 2) {
      FUN_143720a20(local_res20,local_res8,(int)local_res20[1] * 2);
    }
    uVar18 = (int)local_res20[1] - 1;
    iVar9 = (int)((ulonglong)param_3 >> 0x20);
    uVar8 = iVar9 * -0x61c8864f;
    uVar17 = (int)param_3 * -0x61c8864f;
    uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | iVar9 * -0x4f000000;
    uVar17 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
             (int)param_3 * -0x4f000000;
    lVar3 = *local_res20;
    uVar8 = (uVar17 + uVar8 * 0x40 + (uVar17 >> 2) + 0x9e3779b9 ^ uVar8) & uVar18;
    lVar12 = (longlong)(int)uVar8;
    lVar16 = *(longlong *)(lVar3 + lVar12 * 8);
    while ((iVar9 = 1, lVar16 != -1 && (iVar9 = 0, *(byte **)(lVar3 + lVar12 * 8) != param_3))) {
      uVar8 = uVar8 + 1 & uVar18;
      lVar12 = (longlong)(int)uVar8;
      lVar16 = *(longlong *)(lVar3 + lVar12 * 8);
    }
    *(int *)(local_res20 + 2) = (int)local_res20[2] + iVar9;
    *(byte **)(lVar3 + (longlong)(int)uVar8 * 8) = param_3;
    if (iVar9 != 0) {
      local_b8 = local_a8;
      local_ac = 0x80000080;
      local_b0 = 1;
      local_a8[0] = 0;
      local_res18 = FUN_143714fc0(param_3,&local_b8,0,0);
      FUN_143716620(local_res8,local_res18);
      uVar13 = FUN_143703a50();
      if (*(uint *)(param_1 + 0x80) == (*(uint *)(param_1 + 0x84) & 0x3fffffff)) {
        FUN_14370c460(uVar13,param_1 + 0x78,8);
      }
      lVar3 = *(longlong *)(param_1 + 0x78) + (longlong)*(int *)(param_1 + 0x80) * 8;
      if (lVar3 != 0) {
        FUN_1437165f0(lVar3,local_res8);
      }
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
      FUN_143716650(local_res8);
      if (*(int *)(param_1 + 0x8c) == 0) {
        uVar4 = *(ulonglong *)
                 (*(longlong *)(param_1 + 0x78) + (longlong)(*(int *)(param_1 + 0x80) + -1) * 8);
        iVar9 = FUN_143715430(param_3);
        uVar10 = FUN_14373c240(param_1 + 0x30,uVar4 & 0xfffffffffffffffe,(longlong)iVar9);
      }
      else {
        uVar10 = FUN_143715430(param_3);
      }
      piVar14 = (int *)FUN_14371eb30(param_1,local_res8,local_res18,uVar10);
      if (-1 < *piVar14) {
        hkReflect::DeclIterAll::DeclIterAll(&local_d8,local_e8,0);
        do {
          do {
            puVar11 = local_d8 + 1;
            if ((local_d0 <= local_d8 + 1) &&
               (cVar7 = FUN_1437144f0(&local_d8), puVar11 = local_d8, cVar7 == '\0')) {
              if ((*(longlong *)(param_3 + 8) == 0) ||
                 (piVar14 = (int *)FUN_14371e5b0(param_1,local_res8,*(longlong *)(param_3 + 8),
                                                 local_res20), -1 < *piVar14)) {
                local_b0 = 0;
                if (-1 < (int)local_ac) {
                  FUN_143702e10(&PTR_vftable_1467f0638,local_b8,1,local_ac & 0x3fffffff);
                }
                goto LAB_14371ea18;
              }
              goto LAB_14371e982;
            }
            local_d8 = puVar11;
            pbVar15 = (byte *)FUN_143714f30(local_d8,local_res8);
          } while ((*pbVar15 & 0x20) == 0);
          FUN_143714060(&local_e8,*local_d8);
          piVar14 = (int *)FUN_14371e5b0(param_1,&local_res18,local_e8,local_res20);
        } while (-1 < *piVar14);
      }
LAB_14371e982:
      FUN_14371f7a0(*(undefined8 *)(param_1 + 0x58));
      puVar5 = local_res10;
      local_b0 = 0;
      *local_res10 = 0x80040200;
      if ((int)local_ac < 0) {
        return local_res10;
      }
      FUN_143702e10(&PTR_vftable_1467f0638,local_b8,1,local_ac & 0x3fffffff);
      return puVar5;
    }
  }
LAB_14371ea18:
  FUN_14371f7a0(*(undefined8 *)(param_1 + 0x58));
  *local_res10 = 0;
  return local_res10;
}



// FUNCTION 14371ea40 FUN_14371ea40 body=228 status=ok
// SIG undefined FUN_14371ea40(void)

undefined4 * FUN_14371ea40(undefined8 param_1,undefined4 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 local_res10 [8];
  undefined8 local_38;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  
  lVar6 = *param_3;
  uVar3 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_2c = 0x80000000;
  lVar1 = param_3[1];
  *param_2 = 0;
  uVar5 = uVar3;
  if (0 < (int)(lVar1 - lVar6 >> 3)) {
    do {
      if (*(longlong *)(uVar3 + lVar6) != 0) {
        FUN_14371e5b0(param_1,local_res10,*(longlong *)(uVar3 + lVar6),&local_38);
      }
      lVar6 = *param_3;
      uVar4 = (int)uVar5 + 1;
      uVar3 = uVar3 + 8;
      uVar5 = (ulonglong)uVar4;
    } while ((int)uVar4 < (int)(param_3[1] - lVar6 >> 3));
  }
  uVar2 = FUN_143703a50();
  local_30 = 0;
  if (-1 < (int)local_2c) {
    FUN_143702e10(uVar2,local_38,8,local_2c & 0x3fffffff);
  }
  return param_2;
}



// FUNCTION 14371eb30 FUN_14371eb30 body=551 status=ok
// SIG undefined FUN_14371eb30(void)

undefined4 * FUN_14371eb30(longlong param_1,undefined4 *param_2,char *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  char *local_res18;
  undefined1 local_res20 [8];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined4 local_b0;
  uint local_ac;
  
  *param_2 = 0;
  lVar3 = FUN_14371e450(param_1,param_3,param_4);
  local_res18 = param_3;
  if (lVar3 != 0) {
    do {
      if (*(int *)(lVar3 + 0x10) != -1) {
        iVar2 = *(int *)(lVar3 + 0x20) + -1;
        lVar6 = (longlong)iVar2;
        if (-1 < iVar2) {
          lVar7 = lVar6 << 4;
          do {
            if ((*(int *)(lVar7 + *(longlong *)(lVar3 + 0x18)) == 7) &&
               (puVar1 = *(undefined8 **)(lVar7 + 8 + *(longlong *)(lVar3 + 0x18)),
               puVar1 != (undefined8 *)0x0)) {
              FUN_14371eb30(param_1,local_res20,*puVar1,*(undefined4 *)(puVar1 + 1));
            }
            lVar7 = lVar7 + -0x10;
            lVar6 = lVar6 + -1;
            param_3 = local_res18;
          } while (-1 < lVar6);
        }
        if (((*(longlong *)(lVar3 + 8) != 0) && (param_3 != (char *)0x0)) &&
           (iVar2 = hkString::strCmp(*(longlong *)(lVar3 + 8),param_3), iVar2 != 0)) {
          pcVar4 = strstr(param_3,"<");
          if (pcVar4 == (char *)0x0) {
            param_3 = *(char **)(lVar3 + 8);
            local_res18 = param_3;
          }
          else {
            FUN_143745310(&local_b8,*(undefined8 *)(lVar3 + 8));
            FUN_143745710(&local_b8,pcVar4,0xffffffff);
            FUN_143716620(local_c8,local_b8);
            uVar5 = FUN_143703a50();
            if (*(uint *)(param_1 + 0x80) == (*(uint *)(param_1 + 0x84) & 0x3fffffff)) {
              FUN_14370c460(uVar5,param_1 + 0x78,8);
            }
            lVar6 = *(longlong *)(param_1 + 0x78) + (longlong)*(int *)(param_1 + 0x80) * 8;
            if (lVar6 != 0) {
              FUN_1437165f0(lVar6,local_c8);
            }
            *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
            FUN_143716650(local_c8);
            param_3 = (char *)(*(ulonglong *)
                                (*(longlong *)(param_1 + 0x78) +
                                (longlong)(*(int *)(param_1 + 0x80) + -1) * 8) & 0xfffffffffffffffe)
            ;
            local_b0 = 0;
            if (-1 < (int)local_ac) {
              FUN_143702e10(&PTR_vftable_1467f0638,local_b8,1,local_ac & 0x3fffffff);
            }
            local_b8 = 0;
            local_ac = 0x80000000;
            local_res18 = param_3;
          }
        }
      }
    } while ((*(longlong *)(lVar3 + 8) != 0) && (lVar3 = FUN_14371e450(param_1), lVar3 != 0));
    return param_2;
  }
  return param_2;
}



// FUNCTION 14371ed60 FUN_14371ed60 body=132 status=ok
// SIG undefined FUN_14371ed60(void)

longlong FUN_14371ed60(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_14373c2c0(param_1 + 0x28,param_2,0);
    if (lVar1 == 0) {
      lVar1 = FUN_14370c870(param_2);
      FUN_14373c2f0(param_1 + 0x28,lVar1,lVar1);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  return lVar1;
}



// FUNCTION 14371edf0 FUN_14371edf0 body=247 status=ok
// SIG undefined FUN_14371edf0(void)

longlong FUN_14371edf0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong local_res8;
  undefined8 local_res10;
  
  iVar1 = *(int *)(param_1 + 0x20);
  local_res8 = (longlong)iVar1;
  local_res10 = param_2;
  uVar3 = FUN_143703a50();
  iVar2 = FUN_14372ab60(param_1 + 0x28,uVar3,&local_res10,&local_res8);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x28) + 8 + (longlong)iVar2 * 0x10);
  if (iVar2 == iVar1) {
    uVar3 = FUN_143703a50();
    if (*(uint *)(param_1 + 0x20) == (*(uint *)(param_1 + 0x24) & 0x3fffffff)) {
      FUN_14370c460(uVar3,param_1 + 0x18,0x10);
    }
    puVar4 = (undefined8 *)
             ((longlong)*(int *)(param_1 + 0x20) * 0x10 + *(longlong *)(param_1 + 0x18));
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0x80000000;
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
    }
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    uVar3 = FUN_143703a50();
    if (*(uint *)(param_1 + 0x40) == (*(uint *)(param_1 + 0x44) & 0x3fffffff)) {
      FUN_14370c460(uVar3,param_1 + 0x38,4);
    }
    *(int *)(*(longlong *)(param_1 + 0x38) + (longlong)*(int *)(param_1 + 0x40) * 4) = iVar1;
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    return 0;
  }
  return (longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x18);
}



// FUNCTION 14371eef0 FUN_14371eef0 body=199 status=ok
// SIG undefined FUN_14371eef0(void)

int FUN_14371eef0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  undefined8 local_res8;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_38 [2];
  
  local_res8 = 0xffffffffffffffff;
  local_res10[0] = param_2;
  piVar4 = (int *)FUN_14372d420(param_1 + 0x98,local_res10,&local_res8);
  iVar1 = *piVar4;
  while( true ) {
    if (iVar1 == -1) {
      return -1;
    }
    puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x88) + (longlong)iVar1 * 8);
    if ((*(int *)((longlong)puVar2 + 0x14) == -1) ||
       (((param_3 == 0 && (puVar2[1] != 0)) && (iVar3 = hkString::strCmp(*puVar2), iVar3 != 0))))
    break;
    local_res20 = 0xffffffffffffffff;
    local_38[0] = FUN_14371f080(*(undefined8 *)(param_1 + 0x80),puVar2[1],
                                *(undefined4 *)((longlong)puVar2 + 0x14));
    piVar4 = (int *)FUN_14372d420(param_1 + 0x98,local_38,&local_res20);
    iVar1 = *piVar4;
  }
  return iVar1;
}



// FUNCTION 14371efc0 FUN_14371efc0 body=192 status=ok
// SIG undefined FUN_14371efc0(void)

undefined8 FUN_14371efc0(int param_1,int param_2,longlong *param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong local_res20;
  longlong local_18 [2];
  
  local_res20 = (longlong)param_2;
  iVar1 = FUN_14372a960(param_4,&local_res20);
  if (*(int *)(param_4 + 0xc) < iVar1) {
    local_res20 = 0;
    local_18[0] = (longlong)param_2;
    uVar3 = FUN_143703a50();
    FUN_14372d6e0(param_4,uVar3,local_18,&local_res20);
    for (iVar1 = FUN_14371f160(param_3,param_2); iVar1 != -1;
        iVar1 = *(int *)(*param_3 + 4 + (longlong)iVar1 * 8)) {
      iVar2 = *(int *)((longlong)iVar1 * 8 + *param_3);
      if ((param_1 == iVar2) || (iVar2 = FUN_14371efc0(param_1,iVar2,param_3,param_4), iVar2 != 0))
      {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14371f080 FUN_14371f080 body=179 status=ok
// SIG undefined FUN_14371f080(void)

undefined8 FUN_14371f080(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  uVar2 = FUN_14371ed60(param_1,param_2);
  iVar1 = FUN_14373c240(param_1,uVar2,(longlong)*(int *)(param_1 + 0x20));
  if (iVar1 == *(int *)(param_1 + 0x20)) {
    uVar3 = FUN_143703a50();
    if (*(uint *)(param_1 + 0x20) == (*(uint *)(param_1 + 0x24) & 0x3fffffff)) {
      FUN_14370c460(uVar3,param_1 + 0x18,8);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0x20) * 8) = uVar2;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  return CONCAT44(param_3,iVar1);
}



// FUNCTION 14371f140 FUN_14371f140 body=12 status=ok
// SIG undefined FUN_14371f140(void)

void FUN_14371f140(longlong param_1)

{
  FUN_14371f220(*(undefined8 *)(param_1 + 0x80));
  return;
}



// FUNCTION 14371f150 FUN_14371f150 body=12 status=ok
// SIG undefined FUN_14371f150(void)

void FUN_14371f150(longlong param_1)

{
  FUN_14371f4d0(*(undefined8 *)(param_1 + 0x80));
  return;
}



// FUNCTION 14371f160 FUN_14371f160 body=47 status=ok
// SIG undefined FUN_14371f160(void)

undefined4 FUN_14371f160(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  undefined8 local_res8 [2];
  longlong local_res18 [2];
  
  local_res18[0] = (longlong)param_2;
  local_res8[0] = 0xffffffffffffffff;
  puVar1 = (undefined4 *)FUN_14372d420(param_1 + 0x10,local_res18,local_res8);
  return *puVar1;
}



// FUNCTION 14371f190 FUN_14371f190 body=44 status=ok
// SIG undefined FUN_14371f190(void)

undefined4 FUN_14371f190(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined8 local_res8;
  undefined8 local_res10 [3];
  
  local_res8 = 0xffffffffffffffff;
  local_res10[0] = param_2;
  puVar1 = (undefined4 *)FUN_14372d420(param_1 + 0x10,local_res10,&local_res8);
  return *puVar1;
}



// FUNCTION 14371f1c0 FUN_14371f1c0 body=96 status=ok
// SIG undefined FUN_14371f1c0(void)

ulonglong FUN_14371f1c0(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  iVar1 = (int)param_1[4];
  if (iVar1 != -1) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(*param_1 + 4 + (longlong)iVar1 * 8);
    return (longlong)iVar1;
  }
  uVar2 = *(uint *)(param_1 + 1);
  uVar3 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar3,param_1,8);
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return (ulonglong)uVar2;
}



// FUNCTION 14371f220 FUN_14371f220 body=71 status=ok
// SIG undefined FUN_14371f220(void)

undefined8 FUN_14371f220(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)param_2 * 8);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  return uVar1;
}



// FUNCTION 14371f270 FUN_14371f270 body=88 status=ok
// SIG undefined FUN_14371f270(void)

undefined8 FUN_14371f270(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 local_res8;
  undefined8 local_res10 [3];
  
  local_res8 = 0xffffffffffffffff;
  local_res10[0] = param_2;
  piVar1 = (int *)FUN_14372d420(*(longlong *)(param_1 + 0x60) + 0x98,local_res10,&local_res8);
  if (-1 < *piVar1) {
    return *(undefined8 *)
            (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x88) + (longlong)*piVar1 * 8);
  }
  return 0;
}



// FUNCTION 14371f2d0 FUN_14371f2d0 body=47 status=ok
// SIG undefined FUN_14371f2d0(void)

undefined4 FUN_14371f2d0(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined8 local_res8;
  undefined8 local_res10 [3];
  
  local_res8 = 0xffffffffffffffff;
  local_res10[0] = param_2;
  puVar1 = (undefined4 *)FUN_14372d420(param_1 + 0xd0,local_res10,&local_res8);
  return *puVar1;
}



// FUNCTION 14371f300 FUN_14371f300 body=423 status=ok
// SIG undefined FUN_14371f300(void)

longlong * FUN_14371f300(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  longlong local_38;
  longlong lStack_30;
  
  if (*(int *)(param_1 + 0x50) == 0) {
    iVar9 = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    lVar11 = 0;
    iVar8 = (int)((longlong)*(int *)(*(longlong *)(param_1 + 0x60) + 0x90) * 8 >> 3);
    if (0 < iVar8) {
      uVar12 = 0;
      do {
        uVar1 = *(uint *)(param_1 + 0x20);
        uVar10 = uVar1 - 1;
        uVar6 = uVar1;
        if (0 < (int)uVar10) {
          lVar3 = *(longlong *)(param_1 + 0x18);
          uVar4 = (uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                  uVar12 << 0x18) & uVar10;
          lVar7 = (longlong)(int)uVar4;
          iVar2 = *(int *)(lVar3 + lVar7 * 4);
          while ((uVar6 = uVar1, iVar2 != -1 &&
                 (uVar6 = uVar4, *(int *)(lVar3 + lVar7 * 4) != iVar9))) {
            uVar4 = uVar4 + 1 & uVar10;
            lVar7 = (longlong)(int)uVar4;
            iVar2 = *(int *)(lVar3 + lVar7 * 4);
          }
        }
        if (((int)uVar6 <= (int)uVar10) &&
           (lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x88) + lVar11 * 8),
           *(char *)(lVar3 + 0x24) == '\0')) {
          uVar5 = FUN_143703a50();
          if (*(uint *)(param_1 + 0x50) == (*(uint *)(param_1 + 0x54) & 0x3fffffff)) {
            FUN_14370c460(uVar5,param_1 + 0x48,8);
          }
          *(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(param_1 + 0x50) * 8) =
               lVar3;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
        }
        iVar9 = iVar9 + 1;
        uVar12 = uVar12 + 0x9e3779b1;
        lVar11 = lVar11 + 1;
      } while (lVar11 < iVar8);
    }
    if (*(int *)(param_1 + 0x50) == 0) {
      local_38 = 0;
      lStack_30 = 0;
    }
    else {
      local_38 = *(longlong *)(param_1 + 0x48);
      lStack_30 = local_38 + (longlong)*(int *)(param_1 + 0x50) * 8;
    }
    *param_2 = local_38;
    param_2[1] = lStack_30;
    return param_2;
  }
  lVar11 = *(longlong *)(param_1 + 0x48);
  iVar8 = *(int *)(param_1 + 0x50);
  *param_2 = lVar11;
  param_2[1] = lVar11 + (longlong)iVar8 * 8;
  return param_2;
}



// FUNCTION 14371f4b0 FUN_14371f4b0 body=12 status=ok
// SIG undefined FUN_14371f4b0(void)

void FUN_14371f4b0(longlong param_1)

{
  FUN_14371f080(*(undefined8 *)(param_1 + 0x80));
  return;
}



// FUNCTION 14371f4c0 RetrieveBindingOverrides body=9 status=ok
// SIG undefined RetrieveBindingOverrides(void)

void ALevelSequenceActor::RetrieveBindingOverrides(longlong param_1)

{
  FUN_14371f4b0(*(undefined8 *)(param_1 + 0x60));
  return;
}



// FUNCTION 14371f4d0 FUN_14371f4d0 body=7 status=ok
// SIG undefined FUN_14371f4d0(void)

ulonglong FUN_14371f4d0(undefined8 param_1,ulonglong param_2)

{
  return param_2 >> 0x20;
}



// FUNCTION 14371f4e0 FUN_14371f4e0 body=240 status=ok
// SIG undefined FUN_14371f4e0(void)

void FUN_14371f4e0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_48 [64];
  
  if (((*param_2 != 0) && (param_2[1] != 0)) && (lVar2 = FUN_14371d650(), lVar2 != 0)) {
    iVar1 = FUN_143715430(lVar2);
    if (iVar1 == (int)param_2[2]) {
      if (DAT_146b82328 == '\0') {
        return;
      }
      FUN_14373a730(local_48,&DAT_146b82320,1);
      lVar2 = FUN_14373bbd0(local_48,
                            "Ignoring patch from {}/{} to {}/{} as it attempts to version from a registered type"
                            ,&DAT_145b8f358,param_2,param_2 + 2,param_2 + 1,(longlong)param_2 + 0x14
                            ,0);
      *(char **)(lVar2 + 0x20) = "Reflect\\Version\\hkReflectPatchRegistry.cpp";
      *(undefined8 *)(lVar2 + 0x28) = 0x2c5;
      FUN_14373a950(local_48);
      return;
    }
  }
  FUN_14371e3c0(*(undefined8 *)(param_1 + 8),param_2);
  return;
}



// FUNCTION 14371f5d0 FUN_14371f5d0 body=9 status=ok
// SIG undefined FUN_14371f5d0(void)

void FUN_14371f5d0(longlong param_1)

{
  FUN_143720960(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 14371f5e0 FUN_14371f5e0 body=30 status=ok
// SIG undefined FUN_14371f5e0(void)

undefined8 FUN_14371f5e0(longlong param_1)

{
  if (((*(uint *)(param_1 + 0xa0) & 0x7fffffff) == 0) && (*(int *)(param_1 + 0x90) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 14371f600 FUN_14371f600 body=56 status=ok
// SIG undefined FUN_14371f600(void)

uint FUN_14371f600(undefined8 *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = (int)*param_1;
  uVar4 = iVar1 * -0x61c8864f;
  iVar2 = (int)((ulonglong)*param_1 >> 0x20);
  uVar3 = iVar2 * -0x61c8864f;
  uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | iVar2 * -0x4f000000;
  return (uVar3 * 0x40 + uVar4 + (uVar4 >> 2) + 0x9e3779b9 ^ uVar3) & param_2;
}



// FUNCTION 14371f640 FUN_14371f640 body=144 status=ok
// SIG undefined FUN_14371f640(void)

void FUN_14371f640(longlong *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  longlong local_res8;
  longlong local_res18;
  
  local_res8 = -1;
  local_res18 = (longlong)param_2;
  puVar3 = (undefined4 *)FUN_14372d420(param_1 + 2,&local_res18,&local_res8);
  uVar1 = *puVar3;
  iVar2 = FUN_14371f1c0(param_1);
  local_res8 = (longlong)iVar2;
  puVar3 = (undefined4 *)(*param_1 + local_res8 * 8);
  *puVar3 = *param_3;
  puVar3[1] = uVar1;
  local_res18 = (longlong)param_2;
  uVar4 = FUN_143703a50();
  FUN_14372d6e0(param_1 + 2,uVar4,&local_res18,&local_res8);
  return;
}



// FUNCTION 14371f6d0 FUN_14371f6d0 body=143 status=ok
// SIG undefined FUN_14371f6d0(void)

void FUN_14371f6d0(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  longlong local_res8;
  undefined8 local_res10;
  
  local_res8 = -1;
  local_res10 = param_2;
  puVar3 = (undefined4 *)FUN_14372d420(param_1 + 2,&local_res10,&local_res8);
  uVar1 = *puVar3;
  iVar2 = FUN_14371f1c0(param_1);
  local_res8 = (longlong)iVar2;
  puVar3 = (undefined4 *)(*param_1 + local_res8 * 8);
  *puVar3 = *param_3;
  puVar3[1] = uVar1;
  local_res10 = param_2;
  uVar4 = FUN_143703a50();
  FUN_14372d6e0(param_1 + 2,uVar4,&local_res10,&local_res8);
  return;
}



// FUNCTION 14371f760 FUN_14371f760 body=62 status=ok
// SIG undefined FUN_14371f760(void)

undefined8 FUN_14371f760(longlong *param_1)

{
  longlong lVar1;
  
  if ((int)param_1[2] == -1) {
    if (*param_1 != 0) {
      return 0;
    }
    if (*(int *)((longlong)param_1 + 0x14) == -1) {
      return 0;
    }
    lVar1 = param_1[1];
  }
  else {
    if (*(int *)((longlong)param_1 + 0x14) == -1) {
      if (*param_1 == 0) {
        return 0;
      }
      if (param_1[1] == 0) {
        return 1;
      }
      return 0;
    }
    lVar1 = *param_1;
  }
  if (lVar1 == 0) {
    return 0;
  }
  return 1;
}



// FUNCTION 14371f7a0 FUN_14371f7a0 body=4 status=ok
// SIG undefined FUN_14371f7a0(void)

void FUN_14371f7a0(longlong param_1)

{
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
  return;
}



// FUNCTION 14371f7b0 FUN_14371f7b0 body=136 status=ok
// SIG undefined FUN_14371f7b0(void)

undefined8 FUN_14371f7b0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  
  if (((int)param_1[2] == (int)param_2[2]) &&
     (*(int *)((longlong)param_1 + 0x14) == *(int *)((longlong)param_2 + 0x14))) {
    lVar1 = *param_1;
    lVar2 = *param_2;
    if ((lVar1 == 0) || (lVar2 == 0)) {
      bVar4 = lVar1 == lVar2;
    }
    else {
      iVar3 = hkString::strCmp(lVar1,lVar2);
      bVar4 = iVar3 == 0;
    }
    if (bVar4) {
      lVar1 = param_1[1];
      lVar2 = param_2[1];
      if ((lVar1 == 0) || (lVar2 == 0)) {
        bVar4 = lVar1 == lVar2;
      }
      else {
        iVar3 = hkString::strCmp(lVar1,lVar2);
        bVar4 = iVar3 == 0;
      }
      if (bVar4) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14371f840 FUN_14371f840 body=4373 status=ok
// SIG undefined FUN_14371f840(void)

undefined4 * FUN_14371f840(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined4 uVar21;
  longlong lVar22;
  longlong local_res8;
  undefined4 *local_res10;
  undefined8 local_res18;
  longlong local_res20;
  longlong local_188;
  undefined4 local_180;
  uint local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_16c;
  longlong local_160;
  int local_158;
  uint local_154;
  undefined8 local_150;
  longlong local_148;
  int local_140;
  uint local_13c;
  longlong local_138;
  undefined4 local_130;
  uint local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  longlong local_110;
  uint local_108;
  uint local_104;
  longlong local_100;
  undefined4 local_f8;
  uint local_f4;
  longlong *local_f0;
  undefined4 local_e8;
  int local_e4;
  undefined4 local_e0;
  longlong local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  uint local_9c;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_80;
  undefined8 local_78;
  undefined1 local_70 [24];
  undefined8 local_58 [3];
  
  uVar8 = *(undefined8 *)(param_1 + 0x80);
  local_98 = param_1 + 0x98;
  iVar15 = 0;
  local_12c = 0x80000000;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_11c = 0xffffffffffffffff;
  local_188 = 0;
  local_180 = 0;
  local_17c = 0x80000000;
  local_178 = 0;
  local_170 = 0;
  local_16c = 0xffffffffffffffff;
  local_res8 = param_1;
  local_res10 = param_2;
  local_78 = uVar8;
  hkMapBase<unsigned___int64,unsigned___int64,hkMapOperations<unsigned___int64>_>::clear(local_98);
  hkMapBase<unsigned___int64,unsigned___int64,hkMapOperations<unsigned___int64>_>::clear
            (param_1 + 0xa8);
  local_res18 = (ulonglong)local_res18._4_4_ << 0x20;
  if (0 < *(int *)(param_1 + 0x90)) {
    do {
      lVar17 = (longlong)iVar15;
      puVar18 = *(undefined8 **)(*(longlong *)(param_1 + 0x88) + lVar17 * 8);
      if (puVar18 != (undefined8 *)0x0) {
        iVar3 = FUN_14371f760(puVar18);
        puVar9 = local_res10;
        if (iVar3 == 0) {
          *local_res10 = 0x80040200;
          uVar8 = FUN_143703a50();
          FUN_143700a90(&local_178,uVar8);
          AK::MemoryMgr::StartProfileThreadUsage((long)&local_178);
          uVar8 = FUN_143703a50();
          local_180 = 0;
          if (-1 < (int)local_17c) {
            FUN_143702e10(uVar8,local_188,8,local_17c & 0x3fffffff);
          }
          local_188 = 0;
          local_17c = 0x80000000;
          uVar8 = FUN_143703a50();
          FUN_143700a90(&local_128,uVar8);
          AK::MemoryMgr::StartProfileThreadUsage((long)&local_128);
          uVar8 = FUN_143703a50();
          goto LAB_14371fd23;
        }
        if (*(int *)(puVar18 + 2) == -1) {
          lVar6 = FUN_14371f080(*(undefined8 *)(param_1 + 0x80),puVar18[1],
                                *(undefined4 *)((longlong)puVar18 + 0x14));
          local_res20 = lVar6;
          iVar3 = FUN_14372a960(param_1 + 0xa8,&local_res20);
          puVar9 = local_res10;
          if (iVar3 <= *(int *)(param_1 + 0xb4)) {
            *local_res10 = 0x80040200;
            uVar8 = FUN_143703a50();
            FUN_143700a90(&local_178,uVar8);
            AK::MemoryMgr::StartProfileThreadUsage((long)&local_178);
            uVar8 = FUN_143703a50();
            local_180 = 0;
            if (-1 < (int)local_17c) {
              FUN_143702e10(uVar8,local_188,8,local_17c & 0x3fffffff);
            }
            local_188 = 0;
            local_17c = 0x80000000;
            uVar8 = FUN_143703a50();
            FUN_143700a90(&local_128,uVar8);
            AK::MemoryMgr::StartProfileThreadUsage((long)&local_128);
            uVar8 = FUN_143703a50();
            goto LAB_14372091c;
          }
          local_res20 = lVar17;
          local_b0 = lVar6;
          uVar7 = FUN_143703a50();
          FUN_14372d6e0(param_1 + 0xa8,uVar7,&local_b0,&local_res20);
        }
        else {
          lVar6 = FUN_14371f080(*(undefined8 *)(param_1 + 0x80),*puVar18);
          local_res20 = lVar6;
          iVar3 = FUN_14372a960(param_1 + 0x98,&local_res20);
          puVar9 = local_res10;
          if (iVar3 <= *(int *)(param_1 + 0xa4)) {
            *local_res10 = 0x80040200;
            uVar8 = FUN_143703a50();
            FUN_143700a90(&local_178,uVar8);
            AK::MemoryMgr::StartProfileThreadUsage((long)&local_178);
            uVar8 = FUN_143703a50();
            local_180 = 0;
            if (-1 < (int)local_17c) {
              FUN_143702e10(uVar8,local_188,8,local_17c & 0x3fffffff);
            }
            local_188 = 0;
            local_17c = 0x80000000;
            uVar8 = FUN_143703a50();
            FUN_143700a90(&local_128,uVar8);
            AK::MemoryMgr::StartProfileThreadUsage((long)&local_128);
            uVar8 = FUN_143703a50();
            goto LAB_14372091c;
          }
          local_res20 = lVar17;
          local_b0 = lVar6;
          uVar7 = FUN_143703a50();
          FUN_14372d6e0(param_1 + 0x98,uVar7,&local_b0,&local_res20);
          if ((*(int *)((longlong)puVar18 + 0x14) == -1) ||
             ((puVar18[1] != 0 && (iVar3 = hkString::strCmp(*puVar18), iVar3 != 0)))) {
            FUN_14371f6d0(&local_188,*puVar18,&local_res18);
          }
        }
        if (*(int *)((longlong)puVar18 + 0x14) != -1) {
          if (puVar18[1] != 0) {
            puVar18 = puVar18 + 1;
          }
          uVar7 = FUN_14371f080(uVar8,*puVar18);
          FUN_14371f6d0(&local_138,uVar7,&local_res18);
        }
      }
      iVar15 = iVar15 + 1;
      local_res18 = CONCAT44(local_res18._4_4_,iVar15);
    } while (iVar15 < *(int *)(param_1 + 0x90));
  }
  FUN_14373bf20(local_70);
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 0x80000000;
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_100 = 0;
  local_f8 = 0;
  local_f4 = 0x80000000;
  local_f0 = (longlong *)0x0;
  local_e8 = 0;
  local_e4 = -1;
  local_e0 = 0xffffffff;
  local_res18 = local_res18 & 0xffffffff00000000;
  if (0 < *(int *)(param_1 + 0x90)) {
    local_b0 = 0;
    do {
      puVar9 = local_res10;
      plVar11 = *(longlong **)(local_b0 + *(longlong *)(param_1 + 0x88));
      lVar17 = *plVar11;
      if ((int)plVar11[2] == -1) {
        lVar17 = plVar11[1];
        if ((lVar17 == 0) || (*(int *)((longlong)plVar11 + 0x14) == -1)) {
          *local_res10 = 0x80040200;
          local_80 = lVar17;
          uVar8 = FUN_143703a50();
          FUN_143700a90(&local_f0,uVar8);
          AK::MemoryMgr::StartProfileThreadUsage((long)&local_f0);
          uVar8 = FUN_143703a50();
          local_f8 = 0;
          if (-1 < (int)local_f4) {
            FUN_143702e10(uVar8,local_100,8,local_f4 & 0x3fffffff);
          }
          local_100 = 0;
          local_f4 = 0x80000000;
          uVar8 = FUN_143703a50();
          FUN_143700a90(&local_c8,uVar8);
          AK::MemoryMgr::StartProfileThreadUsage((long)&local_c8);
          uVar8 = FUN_143703a50();
          local_d0 = 0;
          if (-1 < (int)local_cc) {
            FUN_143702e10(uVar8,local_d8,8,local_cc & 0x3fffffff);
          }
          local_d8 = 0;
          local_cc = 0x80000000;
          FUN_14373bf70(local_70);
          uVar8 = FUN_143703a50();
          FUN_143700a90(&local_178,uVar8);
          AK::MemoryMgr::StartProfileThreadUsage((long)&local_178);
          uVar8 = FUN_143703a50();
          local_180 = 0;
          if (-1 < (int)local_17c) {
            FUN_143702e10(uVar8,local_188,8,local_17c & 0x3fffffff);
          }
          local_188 = 0;
          local_17c = 0x80000000;
          uVar8 = FUN_143703a50();
          FUN_143700a90(&local_128,uVar8);
          AK::MemoryMgr::StartProfileThreadUsage((long)&local_128);
          uVar8 = FUN_143703a50();
LAB_14371fd23:
          local_130 = 0;
          if ((int)local_12c < 0) {
            return puVar9;
          }
          FUN_143702e10(uVar8,local_138,8,local_12c & 0x3fffffff);
          return puVar9;
        }
      }
      local_80 = lVar17;
      uVar8 = FUN_14371f080(uVar8,lVar17);
      local_res20 = -1;
      local_150 = uVar8;
      local_90 = uVar8;
      if ((int)plVar11[2] == -1) {
        puVar9 = (undefined4 *)FUN_14372d420(param_1 + 0xa8,&local_150,&local_res20);
        uVar21 = *puVar9;
        local_res20 = CONCAT44(local_res20._4_4_,uVar21);
      }
      else {
        puVar9 = (undefined4 *)FUN_14372d420(param_1 + 0x98,&local_150,&local_res20);
        uVar21 = *puVar9;
        local_res20 = CONCAT44(local_res20._4_4_,uVar21);
        for (iVar15 = FUN_14371f190(&local_138,uVar8); iVar15 != -1;
            iVar15 = *(int *)((longlong)iVar15 * 8 + 4 + local_138)) {
          local_150._4_4_ = (undefined4)((ulonglong)local_150 >> 0x20);
          local_150 = CONCAT44(local_150._4_4_,*(undefined4 *)((longlong)iVar15 * 8 + local_138));
          FUN_14371f640(&local_d8,uVar21,&local_150);
        }
      }
      uVar7 = local_78;
      iVar15 = 0;
      if (0 < (int)plVar11[4]) {
        lVar6 = 0;
        do {
          if ((*(int *)(lVar6 + plVar11[3]) == 7) &&
             (puVar18 = *(undefined8 **)(lVar6 + 8 + plVar11[3]), puVar18 != (undefined8 *)0x0)) {
            uVar8 = FUN_14371f080(uVar7,*puVar18,*(undefined4 *)(puVar18 + 1));
            local_150 = 0xffffffffffffffff;
            local_58[0] = uVar8;
            piVar10 = (int *)FUN_14372d420(param_1 + 0x98,local_58,&local_150);
            if (*piVar10 != -1) {
              FUN_14371f640(&local_d8,*piVar10,&local_res20);
            }
            if ((int)plVar11[2] != -1) {
              iVar3 = FUN_14371f190(&local_138,uVar8);
              lVar17 = local_138;
              for (; iVar3 != -1; iVar3 = *(int *)(lVar17 + 4 + (longlong)iVar3 * 8)) {
                iVar4 = *(int *)(lVar17 + (longlong)iVar3 * 8);
                local_150._4_4_ = (undefined4)((ulonglong)local_150 >> 0x20);
                local_150 = CONCAT44(local_150._4_4_,iVar4);
                if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar4 * 8) +
                             0x25) == '\0') {
                  FUN_14371f640(&local_d8,uVar21,&local_150);
                  lVar17 = local_138;
                }
              }
            }
          }
          iVar15 = iVar15 + 1;
          lVar6 = lVar6 + 0x10;
          uVar8 = local_90;
          lVar17 = local_80;
        } while (iVar15 < (int)plVar11[4]);
      }
      if ((((int)plVar11[2] == -1) && (iVar15 = FUN_14371f190(&local_188,lVar17), iVar15 != -1)) &&
         (iVar15 = FUN_14371f190(&local_188,lVar17), iVar15 != -1)) {
        iVar3 = FUN_14371eef0(param_1,uVar8,0);
        if (iVar3 == -1) {
          iVar4 = FUN_14373c2c0(local_70,lVar17,0xffffffffffffffff);
          puVar9 = local_res10;
          if (iVar4 != -1) {
            *local_res10 = 0x80040200;
            uVar8 = FUN_143703a50();
            FUN_143700a90(&local_f0,uVar8);
            AK::MemoryMgr::StartProfileThreadUsage((long)&local_f0);
            uVar8 = FUN_143703a50();
            local_f8 = 0;
            if (-1 < (int)local_f4) {
              FUN_143702e10(uVar8,local_100,8,local_f4 & 0x3fffffff);
            }
            local_100 = 0;
            local_f4 = 0x80000000;
            uVar8 = FUN_143703a50();
            FUN_143700a90(&local_c8,uVar8);
            AK::MemoryMgr::StartProfileThreadUsage((long)&local_c8);
            uVar8 = FUN_143703a50();
            local_d0 = 0;
            if (-1 < (int)local_cc) {
              FUN_143702e10(uVar8,local_d8,8,local_cc & 0x3fffffff);
            }
            local_d8 = 0;
            local_cc = 0x80000000;
            FUN_14373bf70(local_70);
            uVar8 = FUN_143703a50();
            FUN_143700a90(&local_178,uVar8);
            AK::MemoryMgr::StartProfileThreadUsage((long)&local_178);
            uVar8 = FUN_143703a50();
            local_180 = 0;
            if (-1 < (int)local_17c) {
              FUN_143702e10(uVar8,local_188,8,local_17c & 0x3fffffff);
            }
            local_188 = 0;
            local_17c = 0x80000000;
            uVar8 = FUN_143703a50();
            FUN_143700a90(&local_128,uVar8);
            AK::MemoryMgr::StartProfileThreadUsage((long)&local_128);
            uVar8 = FUN_143703a50();
            goto LAB_14372091c;
          }
          FUN_14373c2f0(local_70,lVar17,(longlong)(int)local_res18);
        }
        lVar17 = local_188;
        plVar11 = &local_d8;
        if (iVar3 != -1) {
          plVar11 = &local_100;
        }
        do {
          iVar4 = *(int *)(lVar17 + (longlong)iVar15 * 8);
          local_res20 = CONCAT44(local_res20._4_4_,iVar4);
          if (iVar3 != iVar4) {
            FUN_14371f640(plVar11,uVar21,&local_res20);
            lVar17 = local_188;
          }
          iVar15 = *(int *)(lVar17 + 4 + (longlong)iVar15 * 8);
        } while (iVar15 != -1);
      }
      iVar15 = (int)local_res18 + 1;
      local_b0 = local_b0 + 8;
      local_res18 = CONCAT44(local_res18._4_4_,iVar15);
      uVar8 = local_78;
    } while (iVar15 < *(int *)(param_1 + 0x90));
  }
  uVar16 = 0;
  uVar5 = 0;
  uVar12 = uVar16;
  plVar11 = local_f0;
  if (-1 < local_e4) {
    do {
      uVar5 = (uint)uVar12;
      if (*plVar11 != -1) break;
      uVar5 = uVar5 + 1;
      uVar12 = (ulonglong)uVar5;
      plVar11 = plVar11 + 2;
    } while ((int)uVar5 <= local_e4);
  }
  if ((int)uVar5 <= local_e4) {
    do {
      uVar21 = (undefined4)local_f0[(longlong)(int)uVar5 * 2];
      for (iVar15 = FUN_14371f160(&local_100,uVar21); iVar15 != -1;
          iVar15 = *(int *)(local_100 + 4 + (longlong)iVar15 * 8)) {
        local_90 = 0;
        local_88 = 0;
        local_84 = 0xffffffff;
        uVar1 = *(undefined4 *)(local_100 + (longlong)iVar15 * 8);
        local_res18._4_4_ = (uint)(local_res18 >> 0x20);
        local_res18 = CONCAT44(local_res18._4_4_,uVar1);
        iVar3 = FUN_14371efc0(uVar21,uVar1,&local_d8,&local_90);
        if (iVar3 == 0) {
          FUN_14371f640(&local_d8,uVar21,&local_res18);
        }
        uVar8 = FUN_143703a50();
        FUN_143700a90(&local_90,uVar8);
        AK::MemoryMgr::StartProfileThreadUsage((long)&local_90);
      }
      uVar5 = uVar5 + 1;
      if ((int)uVar5 <= local_e4) {
        lVar17 = (longlong)(int)uVar5;
        plVar11 = local_f0 + lVar17 * 2;
        do {
          if (*plVar11 != -1) break;
          uVar5 = uVar5 + 1;
          lVar17 = lVar17 + 1;
          plVar11 = plVar11 + 2;
        } while (lVar17 <= local_e4);
      }
    } while ((int)uVar5 <= local_e4);
  }
  plVar11 = (longlong *)(param_1 + 0x88);
  local_148 = 0;
  local_160 = *plVar11;
  iVar15 = *(int *)(param_1 + 0x90);
  local_154 = *(uint *)(param_1 + 0x94);
  *(undefined4 *)(param_1 + 0x94) = 0x80000000;
  *plVar11 = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  local_140 = 0;
  local_13c = 0x80000000;
  local_158 = iVar15;
  uVar8 = FUN_143703a50();
  if ((int)(local_13c & 0x3fffffff) < iVar15) {
    iVar4 = (local_13c & 0x3fffffff) * 2;
    iVar3 = iVar15;
    if (iVar15 < iVar4) {
      iVar3 = iVar4;
    }
    FUN_14370c310(uVar8,&local_148,iVar3,4);
  }
  if (0 < iVar15 - local_140) {
    puVar9 = (undefined4 *)(local_148 + (longlong)local_140 * 4);
    for (lVar17 = (longlong)(iVar15 - local_140); lVar17 != 0; lVar17 = lVar17 + -1) {
      *puVar9 = 0xffffffff;
      puVar9 = puVar9 + 1;
    }
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 0x80000000;
  uVar12 = uVar16;
  uVar13 = uVar16;
  local_140 = iVar15;
  if (0 < local_158) {
    do {
      uVar12 = FUN_143720bc0(uVar13,&local_148,&local_d8,uVar12 & 0xffffffff,&local_a8,&local_160);
      uVar5 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar5;
    } while ((int)uVar5 < local_158);
  }
  iVar15 = local_158;
  uVar8 = FUN_143703a50();
  uVar5 = *(uint *)(param_1 + 0x94) & 0x3fffffff;
  if ((int)uVar5 < iVar15) {
    iVar4 = uVar5 * 2;
    iVar3 = iVar15;
    if (iVar15 < iVar4) {
      iVar3 = iVar4;
    }
    FUN_14370c310(uVar8,plVar11,iVar3,8);
  }
  *(int *)(param_1 + 0x90) = iVar15;
  uVar12 = uVar16;
  uVar13 = uVar16;
  uVar19 = uVar16;
  if (0 < local_158) {
    do {
      if (*(int *)(local_148 + uVar12) < 0) {
        lVar17 = *plVar11;
        *plVar11 = local_160;
        iVar15 = *(int *)(param_1 + 0x90);
        uVar5 = *(uint *)(param_1 + 0x94);
        *(uint *)(param_1 + 0x94) = local_154;
        *local_res10 = 0x80040200;
        *(int *)(param_1 + 0x90) = local_158;
        puVar9 = local_res10;
        local_160 = lVar17;
        local_158 = iVar15;
        local_154 = uVar5;
        goto LAB_14372074d;
      }
      uVar5 = (int)uVar19 + 1;
      *(undefined8 *)(*plVar11 + (longlong)*(int *)(local_148 + uVar12) * 8) =
           *(undefined8 *)(local_160 + uVar13);
      uVar12 = uVar12 + 4;
      uVar13 = uVar13 + 8;
      uVar19 = (ulonglong)uVar5;
    } while ((int)uVar5 < local_158);
  }
  lVar17 = param_1 + 0x98;
  local_110 = 0;
  local_108 = 0;
  local_104 = 0x80000000;
  hkMapBase<unsigned___int64,unsigned___int64,hkMapOperations<unsigned___int64>_>::clear(lVar17);
  lVar6 = param_1;
  if (0 < *(int *)(param_1 + 0x90)) {
    lVar22 = 0;
    do {
      plVar2 = *(longlong **)(lVar22 + *plVar11);
      iVar15 = (int)uVar16;
      if (*plVar2 == 0) {
        uVar8 = FUN_143703a50();
        if (local_108 == (local_104 & 0x3fffffff)) {
          FUN_14370c460(uVar8,&local_110,4);
        }
        *(int *)(local_110 + (longlong)(int)local_108 * 4) = iVar15;
        local_108 = local_108 + 1;
      }
      else {
        local_res18 = (ulonglong)iVar15;
        local_res20 = FUN_14371f080(*(undefined8 *)(lVar6 + 0x80),*plVar2,(int)plVar2[2]);
        uVar8 = FUN_143703a50();
        FUN_14372d6e0(lVar17,uVar8,&local_res20,&local_res18);
      }
      if ((*plVar2 != 0) || (plVar2[1] != 0)) {
        plVar14 = plVar2;
        if (plVar2[1] != 0) {
          plVar14 = plVar2 + 1;
        }
        lVar20 = lVar6 + 0xb8;
        local_res18 = FUN_14373c080(lVar20,*plVar14,(longlong)iVar15);
        lVar6 = local_res8;
        lVar17 = local_98;
        if (((plVar2[1] != *plVar2) && ((int)plVar2[2] != -1)) &&
           (*(int *)((longlong)plVar2 + 0x14) != -1)) {
          iVar3 = FUN_14373c2c0(lVar20,*plVar2,(longlong)iVar15);
          FUN_14373c4e0(lVar20,local_res18,(longlong)iVar3);
          lVar6 = local_res8;
          lVar17 = local_98;
        }
      }
      uVar16 = (ulonglong)(iVar15 + 1U);
      lVar22 = lVar22 + 8;
    } while ((int)(iVar15 + 1U) < *(int *)(lVar6 + 0x90));
  }
  uVar16 = 0;
  uVar12 = uVar16;
  if (0 < (int)local_108) {
    do {
      iVar15 = *(int *)(local_110 + uVar12);
      lVar22 = *(longlong *)(*plVar11 + (longlong)iVar15 * 8);
      if (lVar22 != 0) {
        while ((*(longlong *)(lVar22 + 8) != 0 && (*(int *)(lVar22 + 0x14) != -1))) {
          uVar13 = FUN_14371f080(*(undefined8 *)(lVar6 + 0x80));
          local_res8 = (longlong)iVar15;
          local_res18 = uVar13;
          uVar8 = FUN_143703a50();
          FUN_14372d6e0(lVar6 + 0xd0,uVar8,&local_res18,&local_res8);
          local_res8 = -1;
          local_res18 = uVar13;
          piVar10 = (int *)FUN_14372d420(lVar17,&local_res18,&local_res8);
          if ((*piVar10 < 0) ||
             (lVar22 = *(longlong *)(*plVar11 + (longlong)*piVar10 * 8), lVar22 == 0)) break;
        }
      }
      uVar5 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar5;
      uVar12 = uVar12 + 4;
    } while ((int)uVar5 < (int)local_108);
  }
  puVar9 = local_res10;
  if ((*(int *)(lVar6 + 0x90) != 0) &&
     (*(longlong *)(*plVar11 + (longlong)(*(int *)(param_1 + 0x90) + -1) * 8) == 0)) {
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + -1;
  }
  *local_res10 = 0;
  uVar8 = FUN_143703a50();
  local_108 = 0;
  if (-1 < (int)local_104) {
    FUN_143702e10(uVar8,local_110,4,local_104 & 0x3fffffff);
  }
  local_110 = 0;
  local_104 = 0x80000000;
LAB_14372074d:
  uVar8 = FUN_143703a50();
  local_a0 = 0;
  if (-1 < (int)local_9c) {
    FUN_143702e10(uVar8,local_a8,4,local_9c & 0x3fffffff);
  }
  local_a8 = 0;
  local_9c = 0x80000000;
  uVar8 = FUN_143703a50();
  local_140 = 0;
  if (-1 < (int)local_13c) {
    FUN_143702e10(uVar8,local_148,4,local_13c & 0x3fffffff);
  }
  local_148 = 0;
  local_13c = 0x80000000;
  uVar8 = FUN_143703a50();
  local_158 = 0;
  if (-1 < (int)local_154) {
    FUN_143702e10(uVar8,local_160,8,local_154 & 0x3fffffff);
  }
  local_160 = 0;
  local_154 = 0x80000000;
  uVar8 = FUN_143703a50();
  FUN_143700a90(&local_f0,uVar8);
  AK::MemoryMgr::StartProfileThreadUsage((long)&local_f0);
  uVar8 = FUN_143703a50();
  local_f8 = 0;
  if (-1 < (int)local_f4) {
    FUN_143702e10(uVar8,local_100,8,local_f4 & 0x3fffffff);
  }
  local_100 = 0;
  local_f4 = 0x80000000;
  uVar8 = FUN_143703a50();
  FUN_143700a90(&local_c8,uVar8);
  AK::MemoryMgr::StartProfileThreadUsage((long)&local_c8);
  uVar8 = FUN_143703a50();
  local_d0 = 0;
  if (-1 < (int)local_cc) {
    FUN_143702e10(uVar8,local_d8,8,local_cc & 0x3fffffff);
  }
  local_d8 = 0;
  local_cc = 0x80000000;
  FUN_14373bf70(local_70);
  uVar8 = FUN_143703a50();
  FUN_143700a90(&local_178,uVar8);
  AK::MemoryMgr::StartProfileThreadUsage((long)&local_178);
  uVar8 = FUN_143703a50();
  local_180 = 0;
  if (-1 < (int)local_17c) {
    FUN_143702e10(uVar8,local_188,8,local_17c & 0x3fffffff);
  }
  local_188 = 0;
  local_17c = 0x80000000;
  uVar8 = FUN_143703a50();
  FUN_143700a90(&local_128,uVar8);
  AK::MemoryMgr::StartProfileThreadUsage((long)&local_128);
  uVar8 = FUN_143703a50();
LAB_14372091c:
  local_130 = 0;
  if (-1 < (int)local_12c) {
    FUN_143702e10(uVar8,local_138,8,local_12c & 0x3fffffff);
  }
  return puVar9;
}



// FUNCTION 143720960 FUN_143720960 body=184 status=ok
// SIG undefined FUN_143720960(void)

void FUN_143720960(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = FUN_14371f760(param_2);
  if (iVar2 != 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x90)) {
      lVar3 = 0;
      do {
        cVar1 = FUN_14371f7b0(*(undefined8 *)(lVar3 + *(longlong *)(param_1 + 0x88)),param_2);
        if (cVar1 != '\0') {
          *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + -1;
          if (*(int *)(param_1 + 0x90) != iVar2) {
            *(undefined8 *)(lVar3 + *(longlong *)(param_1 + 0x88)) =
                 *(undefined8 *)
                  (*(longlong *)(param_1 + 0x88) + (longlong)*(int *)(param_1 + 0x90) * 8);
          }
          iVar2 = iVar2 + -1;
          lVar3 = lVar3 + -8;
        }
        iVar2 = iVar2 + 1;
        lVar3 = lVar3 + 8;
      } while (iVar2 < *(int *)(param_1 + 0x90));
    }
    hkMapBase<unsigned___int64,unsigned___int64,hkMapOperations<unsigned___int64>_>::clear
              (param_1 + 0x98);
    hkCachedHashMap<hkStringMapOperations,hkBuiltinContainerAllocator<0,0>_>::clear(param_1 + 0xb8);
  }
  return;
}



// FUNCTION 143720a20 FUN_143720a20 body=408 status=ok
// SIG undefined FUN_143720a20(void)

undefined4 * FUN_143720a20(longlong *param_1,undefined4 *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  uint local_res18;
  longlong local_res20;
  longlong local_38;
  longlong local_30;
  
  local_res20 = *param_1;
  iVar9 = (int)param_1[1];
  uVar5 = *(uint *)((longlong)param_1 + 0xc);
  iVar10 = 8;
  if (8 < param_3) {
    iVar10 = param_3;
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  local_res10 = param_2;
  local_res18 = uVar5;
  uVar6 = FUN_143703a50();
  if (((int)(*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff) < iVar10) &&
     (iVar4 = FUN_14370c310(uVar6,param_1,iVar10,8), iVar4 < 0)) {
    *local_res10 = 0x80040200;
  }
  else {
    lVar7 = 0;
    *(int *)(param_1 + 1) = iVar10;
    if (0 < iVar10) {
      do {
        *(undefined8 *)(*param_1 + lVar7 * 8) = 0xffffffffffffffff;
        lVar7 = lVar7 + 1;
      } while (lVar7 < iVar10);
    }
    *(undefined4 *)(param_1 + 2) = 0;
    local_30 = (longlong)iVar9;
    if (0 < iVar9) {
      lVar7 = 0;
      do {
        lVar1 = *(longlong *)(local_res20 + lVar7 * 8);
        if (lVar1 != -1) {
          local_38 = lVar1;
          if ((int)param_1[1] + -1 < (int)param_1[2] * 2) {
            FUN_143720a20(param_1,local_res8,(int)param_1[1] * 2);
          }
          uVar11 = (int)param_1[1] - 1;
          iVar9 = 1;
          uVar5 = FUN_14371f600(&local_38,uVar11);
          lVar1 = *param_1;
          lVar8 = (longlong)(int)uVar5;
          lVar2 = *(longlong *)(lVar1 + lVar8 * 8);
          while (lVar2 != -1) {
            if (*(longlong *)(lVar1 + lVar8 * 8) == local_38) {
              iVar9 = 0;
              break;
            }
            uVar5 = uVar5 + 1 & uVar11;
            lVar8 = (longlong)(int)uVar5;
            lVar2 = *(longlong *)(lVar1 + lVar8 * 8);
          }
          *(int *)(param_1 + 2) = (int)param_1[2] + iVar9;
          *(longlong *)(lVar1 + (longlong)(int)uVar5 * 8) = local_38;
        }
        lVar7 = lVar7 + 1;
        uVar5 = local_res18;
      } while (lVar7 < local_30);
    }
    *local_res10 = 0;
  }
  puVar3 = local_res10;
  uVar6 = FUN_143703a50();
  if (-1 < (int)uVar5) {
    FUN_143702e10(uVar6,local_res20,8,uVar5 & 0x3fffffff);
  }
  return puVar3;
}



// FUNCTION 143720bc0 FUN_143720bc0 body=356 status=ok
// SIG undefined FUN_143720bc0(void)

int FUN_143720bc0(int param_1,longlong *param_2,longlong *param_3,int param_4,longlong *param_5,
                 undefined8 param_6)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  lVar1 = (longlong)param_1 * 4;
  if (*(int *)(*param_2 + lVar1) != -1) {
    return param_4;
  }
  *(undefined4 *)(*param_2 + lVar1) = 0xfffffffe;
  uVar5 = FUN_143703a50();
  if (*(uint *)(param_5 + 1) == (*(uint *)((longlong)param_5 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar5,param_5,4);
  }
  *(int *)(*param_5 + (longlong)(int)param_5[1] * 4) = param_1;
  *(int *)(param_5 + 1) = (int)param_5[1] + 1;
  for (iVar4 = FUN_14371f160(param_3,param_1); iVar4 != -1;
      iVar4 = *(int *)(*param_3 + 4 + (longlong)iVar4 * 8)) {
    iVar2 = *(int *)((longlong)iVar4 * 8 + *param_3);
    iVar3 = *(int *)(*param_2 + (longlong)iVar2 * 4);
    if (iVar3 == -2) {
      uVar5 = FUN_143703a50();
      if (*(uint *)(param_5 + 1) == (*(uint *)((longlong)param_5 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(uVar5,param_5,4);
      }
      *(int *)(*param_5 + (longlong)(int)param_5[1] * 4) = iVar2;
    }
    else if (iVar3 == -1) {
      param_4 = FUN_143720bc0(iVar2,param_2,param_3,param_4,param_5,param_6);
    }
  }
  *(int *)(param_5 + 1) = (int)param_5[1] + -1;
  *(int *)(lVar1 + *param_2) = param_4;
  return param_4 + 1;
}



// FUNCTION 143720d30 FUN_143720d30 body=95 status=ok
// SIG undefined FUN_143720d30(void)

void FUN_143720d30(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 8))(param_1,0x38);
  if (lVar1 != 0) {
    FUN_143736d50(lVar1,param_2,param_3,param_4);
    return;
  }
  return;
}



// FUNCTION 143720d90 FUN_143720d90 body=101 status=ok
// SIG undefined FUN_143720d90(void)

undefined8 * FUN_143720d90(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x20);
  if (puVar1 != (undefined8 *)0x0) {
    hkReflect::Detail::Impl::Impl(puVar1);
    puVar1[2] = param_2;
    *puVar1 = hkSerialize::ForwardingArrayImpl::vftable;
    puVar1[3] = param_3;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143720e00 FUN_143720e00 body=101 status=ok
// SIG undefined FUN_143720e00(void)

undefined8 * FUN_143720e00(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x20);
  if (puVar1 != (undefined8 *)0x0) {
    hkReflect::Detail::Impl::Impl(puVar1);
    puVar1[2] = param_2;
    *puVar1 = hkSerialize::ForwardingPointerImpl::vftable;
    puVar1[3] = param_3;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143720e70 FUN_143720e70 body=6665 status=ok
// SIG undefined FUN_143720e70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x000143722385) */

undefined8
FUN_143720e70(undefined8 *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,undefined8 param_6,uint param_7,uint param_8,int param_9)

{
  short sVar1;
  undefined2 uVar2;
  ushort uVar3;
  WriteBytesMem WVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  uchar *puVar13;
  double dVar14;
  undefined8 uVar15;
  uint uVar16;
  ulonglong uVar17;
  WriteBytesMem *pWVar18;
  longlong lVar19;
  undefined8 uVar20;
  WriteBytesMem *pWVar21;
  longlong *plVar22;
  WriteBytesMem *pWVar23;
  longlong *plVar24;
  ulonglong *puVar25;
  uint uVar26;
  WriteBytesMem *pWVar27;
  WriteBytesMem *pWVar28;
  ulonglong uVar29;
  int iVar30;
  longlong lVar31;
  uint uVar32;
  ulonglong uVar33;
  bool bVar34;
  float fVar35;
  byte local_2d64;
  byte local_2d63;
  WriteBytesMem *local_2d60;
  WriteBytesMem *local_2d58;
  longlong local_2d50;
  WriteBytesMem *local_2d48;
  longlong local_2d40;
  WriteBytesMem *local_2d38;
  WriteBytesMem *local_2d30;
  WriteBytesMem *local_2d28;
  int local_2d20;
  WriteBytesMem *local_2d18;
  longlong lStack_2d10;
  WriteBytesMem *local_2d08;
  int local_2d00 [2];
  WriteBytesMem *local_2cf8;
  WriteBytesMem *local_2ce8;
  uint uStack_2ce0;
  undefined4 uStack_2cdc;
  WriteBytesMem *local_2cd8;
  int local_2cc8;
  WriteBytesMem *local_2cc0;
  undefined8 uStack_2cb8;
  WriteBytesMem *local_2cb0;
  ulonglong local_2ca8;
  int local_2ca0;
  int local_2c9c;
  undefined1 local_2c98 [4];
  undefined1 local_2c94 [4];
  undefined1 local_2c90 [4];
  undefined1 local_2c8c [4];
  undefined1 local_2c88 [16];
  WriteBytesMem *local_2c78;
  uint uStack_2c70;
  undefined4 uStack_2c6c;
  WriteBytesMem *local_2c68;
  undefined8 local_2c60;
  WriteBytesMem *local_2c58;
  undefined1 local_2c50 [8];
  undefined1 *local_2c48;
  uint local_2c40;
  uint local_2c3c;
  undefined1 local_2c38 [3072];
  WriteBytesMem local_2038 [8224];
  
  local_2c48 = local_2c38;
  local_2c40 = 0;
  local_2c3c = 0x80000040;
  local_2d20 = 0;
  if (0 < param_9) {
    uVar29 = (ulonglong)param_7;
    do {
      local_2d40 = local_2d20 * (int)uVar29 + param_3;
      local_2d50 = (int)(local_2d20 * param_8) + param_5;
      uVar5 = param_9 - local_2d20;
      if (0x400 < param_9 - local_2d20) {
        uVar5 = 0x400;
      }
      local_2cc8 = 0;
      lVar19 = local_2d50;
      lVar31 = local_2d40;
LAB_143720f3f:
      for (; local_2cc8 != (int)param_2[1]; local_2cc8 = local_2cc8 + 1) {
        pWVar23 = (WriteBytesMem *)((longlong)local_2cc8 * 0x30 + *param_2);
        uVar32 = 0;
        if (lVar31 != 0) {
          uVar32 = (uint)*(ushort *)(pWVar23 + 4);
        }
        pWVar18 = (WriteBytesMem *)((int)uVar32 + lVar31);
        uVar32 = 0;
        if (lVar19 != 0) {
          uVar32 = (uint)*(ushort *)(pWVar23 + 2);
        }
        pWVar21 = (WriteBytesMem *)((int)uVar32 + local_2d50);
        local_2d60 = pWVar23;
        local_2d30 = pWVar18;
        switch(*pWVar23) {
        case (WriteBytesMem)0x1:
          FUN_1436f7090(pWVar23,&local_2cc0,pWVar18);
          FUN_1436f70e0(pWVar23,&local_2d18,pWVar21);
          pWVar23 = local_2cb0;
          lVar19 = lStack_2d10;
          local_2d30 = local_2d08;
          pWVar18 = local_2d08;
          if (0 < (int)uVar5) {
            local_2d63 = (byte)local_2cb0 & 1;
            local_2d64 = (byte)local_2d08 & 1;
            local_2d60 = local_2cc0;
            plVar22 = (longlong *)((ulonglong)local_2d08 & 0xfffffffffffffffe);
            local_2d48 = local_2d18;
            local_2d58 = (WriteBytesMem *)(ulonglong)uVar5;
            do {
              if (local_2d64 != 0) {
                FUN_1437329e0(plVar22);
              }
              if (local_2d63 != 0) {
                FUN_1437329e0((ulonglong)pWVar23 & 0xfffffffffffffffe);
              }
              local_2cb0 = (WriteBytesMem *)0x0;
              local_2cc0 = (WriteBytesMem *)0x0;
              uStack_2cb8 = 0;
              local_2ca8 = 0;
              (**(code **)(*plVar22 + 0x68))(plVar22,local_2c94,local_2d48,lVar19,&local_2cc0);
              local_2d38 = local_2cc0;
              if ((local_2ca8 & 1) != 0) {
                FUN_143733a60(local_2ca8 & 0xfffffffffffffffe);
              }
              fVar35 = (float)FUN_14372b220(*param_1,local_2d38);
              *(float *)local_2d60 = fVar35;
              if (local_2d63 != 0) {
                FUN_143733a60((ulonglong)pWVar23 & 0xfffffffffffffffe);
              }
              if (local_2d64 != 0) {
                FUN_143733a60(plVar22);
              }
              local_2d60 = local_2d60 + (int)param_7;
              local_2d48 = local_2d48 + (int)param_8;
              local_2d58 = (WriteBytesMem *)((longlong)local_2d58 - 1);
            } while (local_2d58 != (WriteBytesMem *)0x0);
            local_2d58 = (WriteBytesMem *)0x0;
            pWVar18 = local_2d30;
          }
          break;
        case (WriteBytesMem)0x2:
          FUN_1436f7090(pWVar23,&local_2d18,pWVar18);
          FUN_1436f70e0(pWVar23,&local_2ce8,pWVar21);
          lVar19 = lStack_2d10;
          iVar8 = 0;
          local_2d38 = local_2cd8;
          local_2d30 = local_2d08;
          pWVar23 = local_2d08;
          pWVar18 = local_2cd8;
          if (0 < (int)uVar5) {
            uVar20 = CONCAT44(uStack_2cdc,uStack_2ce0);
            local_2d58 = (WriteBytesMem *)((ulonglong)local_2cd8 & 0xfffffffffffffffe);
            local_2d28 = (WriteBytesMem *)((ulonglong)local_2d08 & 0xfffffffffffffffe);
            local_2d60 = local_2d18;
            local_2d48 = local_2ce8;
            do {
              local_2d64 = 0;
              (**(code **)((longlong)*(double *)local_2d58 + 0x38))
                        (local_2d58,local_2c90,local_2d48,uVar20,&local_2d64);
              (**(code **)((longlong)*(double *)local_2d28 + 0x30))
                        (local_2d28,&local_2ca0,local_2d60,lVar19,local_2d64);
              if (local_2ca0 < 0) goto LAB_14372268e;
              iVar8 = iVar8 + 1;
              local_2d60 = local_2d60 + (int)param_7;
              local_2d48 = local_2d48 + (int)param_8;
              pWVar23 = local_2d30;
              pWVar18 = local_2d38;
            } while (iVar8 < (int)uVar5);
          }
          break;
        case (WriteBytesMem)0x3:
          FUN_1436f7090(pWVar23,&local_2d18,pWVar18);
          FUN_1436f70e0(pWVar23,&local_2ce8,pWVar21);
          lVar19 = lStack_2d10;
          iVar8 = 0;
          local_2d38 = local_2cd8;
          local_2d30 = local_2d08;
          pWVar23 = local_2d08;
          pWVar18 = local_2cd8;
          if (0 < (int)uVar5) {
            uVar20 = CONCAT44(uStack_2cdc,uStack_2ce0);
            local_2d58 = (WriteBytesMem *)((ulonglong)local_2cd8 & 0xfffffffffffffffe);
            local_2d28 = (WriteBytesMem *)((ulonglong)local_2d08 & 0xfffffffffffffffe);
            local_2d60 = local_2d18;
            local_2d48 = local_2ce8;
            do {
              local_2c78 = (WriteBytesMem *)0x0;
              uStack_2c70 = uStack_2c70 & 0xffffff00;
              (**(code **)((longlong)*(double *)local_2d58 + 0x38))
                        (local_2d58,local_2c8c,local_2d48,uVar20,&local_2c78);
              local_2ce8 = local_2c78;
              uStack_2ce0 = uStack_2c70;
              uStack_2cdc = uStack_2c6c;
              (**(code **)((longlong)*(double *)local_2d28 + 0x30))
                        (local_2d28,&local_2c9c,local_2d60,lVar19,&local_2ce8);
              if (local_2c9c < 0) goto LAB_14372268e;
              iVar8 = iVar8 + 1;
              local_2d60 = local_2d60 + (int)param_7;
              local_2d48 = local_2d48 + (int)param_8;
              pWVar23 = local_2d30;
              pWVar18 = local_2d38;
            } while (iVar8 < (int)uVar5);
          }
          break;
        case (WriteBytesMem)0x4:
          FUN_1436f7090(pWVar23,&local_2d18,pWVar18);
          FUN_1436f70e0(pWVar23,&local_2ce8,pWVar21);
          lVar19 = lStack_2d10;
          iVar8 = 0;
          local_2d38 = local_2cd8;
          local_2d30 = local_2d08;
          pWVar23 = local_2d08;
          pWVar18 = local_2cd8;
          if (0 < (int)uVar5) {
            uVar20 = CONCAT44(uStack_2cdc,uStack_2ce0);
            local_2cf8 = (WriteBytesMem *)((ulonglong)local_2cd8 & 0xfffffffffffffffe);
            local_2d28 = (WriteBytesMem *)((ulonglong)local_2d08 & 0xfffffffffffffffe);
            local_2d60 = local_2d18;
            local_2d58 = local_2ce8;
            do {
              local_2d48 = (WriteBytesMem *)0x0;
              (**(code **)((longlong)*(double *)local_2cf8 + 0x38))
                        (local_2cf8,local_2c88,local_2d58,uVar20,&local_2d48);
              (**(code **)((longlong)*(double *)local_2d28 + 0x30))
                        (local_2d28,local_2d00,local_2d60,lVar19,local_2d48);
              if (local_2d00[0] < 0) goto LAB_14372268e;
              iVar8 = iVar8 + 1;
              local_2d60 = local_2d60 + (int)param_7;
              local_2d58 = local_2d58 + (int)param_8;
              pWVar23 = local_2d30;
              pWVar18 = local_2d38;
            } while (iVar8 < (int)uVar5);
          }
          break;
        case (WriteBytesMem)0x5:
          FUN_1436f7090(pWVar23,&local_2d18,pWVar18);
          FUN_1436f70e0(pWVar23,&local_2cc0,pWVar21);
          pWVar23 = local_2cb0;
          local_2d60 = local_2cc0;
          local_2d64 = (byte)local_2cb0 & 1;
          local_2d28 = local_2cb0;
          local_2d48 = local_2cb0;
          if (((ulonglong)local_2cb0 & 1) != 0) {
            FUN_1437329e0((ulonglong)local_2cb0 & 0xfffffffffffffffe);
          }
          pWVar18 = local_2d08;
          local_2ce8 = local_2d18;
          local_2d63 = (byte)local_2d08 & 1;
          local_2cf8 = local_2d08;
          local_2d58 = local_2d08;
          if (((ulonglong)local_2d08 & 1) != 0) {
            FUN_1437329e0((ulonglong)local_2d08 & 0xfffffffffffffffe);
          }
          uVar20 = uStack_2cb8;
          pWVar21 = local_2ce8;
          pWVar27 = local_2d48;
          pWVar28 = (WriteBytesMem *)(ulonglong)uVar5;
          if (0 < (int)uVar5) {
            do {
              local_2d30 = pWVar28;
              local_2d08 = (WriteBytesMem *)0x0;
              local_2d18 = (WriteBytesMem *)0x0;
              lStack_2d10 = 0;
              local_2d48 = (WriteBytesMem *)((ulonglong)pWVar27 & 0xfffffffffffffffe);
              (**(code **)((longlong)*(double *)local_2d48 + 0x50))
                        (local_2d48,local_2c98,local_2d60,uVar20,&local_2d18);
              if (((lStack_2d10 == 0) || (lVar19 = FUN_143715410(), lVar19 != 0)) ||
                 (lVar19 = FUN_1436f73d0(local_2d18,lStack_2d10), lVar19 == 0)) {
                local_2ce8 = local_2d18;
                local_2c68 = local_2d60;
                local_2c60 = uVar20;
                local_2c58 = pWVar27;
                if (((ulonglong)pWVar27 & 1) != 0) {
                  FUN_1437329e0(local_2d48);
                }
                fVar35 = (float)FUN_14372b3d0(*param_1,&local_2c68);
                if (fVar35 == 0.0) {
                  if (local_2ce8 == (WriteBytesMem *)0x0) {
                    *(float *)pWVar21 = 0.0;
                  }
                  else {
                    fVar35 = (float)FUN_14372d070(*param_1,local_2ce8);
                    *(float *)pWVar21 = fVar35;
                  }
                }
                else {
                  *(float *)pWVar21 = fVar35;
                }
              }
              else {
                dVar14 = (double)FUN_14372b800(*param_1,lVar19);
                *(double *)pWVar21 = dVar14;
              }
              if (((ulonglong)local_2d08 & 1) != 0) {
                FUN_143733a60((ulonglong)local_2d08 & 0xfffffffffffffffe);
              }
              local_2d60 = local_2d60 + (int)param_8;
              if (((ulonglong)local_2d48 & 1) != 0) {
                FUN_1437329e0();
              }
              if (((ulonglong)pWVar27 & 1) != 0) {
                FUN_143733a60();
              }
              pWVar23 = local_2d48;
              local_2d38 = (WriteBytesMem *)((ulonglong)local_2d58 & 0xfffffffffffffffe);
              if (((ulonglong)local_2d58 & 1) != 0) {
                FUN_143733a60();
              }
              local_2d58 = local_2d38;
              pWVar21 = pWVar21 + (int)param_7;
              pWVar27 = pWVar23;
              pWVar28 = (WriteBytesMem *)((longlong)local_2d30 - 1U);
            } while ((longlong)local_2d30 - 1U != 0);
            local_2d30 = (WriteBytesMem *)0x0;
            pWVar18 = local_2d38;
            local_2d48 = pWVar23;
          }
          if (((ulonglong)pWVar18 & 1) != 0) {
            FUN_143733a60();
          }
          if (((ulonglong)pWVar23 & 1) != 0) {
            FUN_143733a60();
          }
          if (local_2d64 != 0) {
            FUN_143733a60();
          }
          if (local_2d63 == 0) goto LAB_143721113;
          goto LAB_143721109;
        case (WriteBytesMem)0x6:
          uVar20 = *(undefined8 *)(pWVar23 + 0x10);
          FUN_1437152f0(uVar20);
          uVar15 = FUN_1436f9ee0(pWVar23);
          FUN_1437152f0(uVar15);
          uVar15 = *(undefined8 *)(pWVar23 + 0x20);
          uVar10 = FUN_1437152f0(uVar20);
          FUN_1436f9ee0(local_2d60);
          uVar11 = FUN_1437152f0();
          lVar19 = local_2d50;
          iVar8 = FUN_143720e70(local_2c50,uVar15,local_2d40,uVar11,local_2d50,uVar10,0,0,1);
          if (-1 < iVar8) goto code_r0x000143722646;
          goto LAB_1437226b2;
        case (WriteBytesMem)0x7:
          iVar8 = local_2c40 + uVar5;
          uVar20 = FUN_143703a50();
          if ((int)(local_2c3c & 0x3fffffff) < iVar8) {
            iVar9 = (local_2c3c & 0x3fffffff) * 2;
            if (iVar8 < iVar9) {
              iVar8 = iVar9;
            }
            FUN_14370c310(uVar20,&local_2c48,iVar8,0x30);
          }
          if ((int)uVar5 < 1) goto LAB_143721113;
          iVar9 = 0;
          iVar8 = 0;
          local_2d58 = (WriteBytesMem *)((ulonglong)local_2d58 & 0xffffffff00000000);
          local_2d48 = (WriteBytesMem *)((ulonglong)local_2d48 & 0xffffffff00000000);
          local_2d38 = (WriteBytesMem *)(ulonglong)uVar5;
          do {
            iVar30 = 0;
            if (pWVar18 != (WriteBytesMem *)0x0) {
              iVar30 = iVar8;
            }
            FUN_1436f7090(local_2d60,&local_2d18,pWVar18 + iVar30);
            iVar8 = 0;
            if (pWVar21 != (WriteBytesMem *)0x0) {
              iVar8 = iVar9;
            }
            FUN_1436f70e0(local_2d60,&local_2cc0,pWVar21 + iVar8);
            pWVar23 = local_2cb0;
            local_2d63 = (byte)local_2cb0 & 1;
            if (((ulonglong)local_2cb0 & 1) != 0) {
              FUN_1437329e0((ulonglong)local_2cb0 & 0xfffffffffffffffe);
            }
            pWVar18 = local_2d08;
            local_2d64 = (byte)local_2d08 & 1;
            if (((ulonglong)local_2d08 & 1) != 0) {
              FUN_1437329e0((ulonglong)local_2d08 & 0xfffffffffffffffe);
            }
            if (local_2d64 != 0) {
              FUN_143733a60((ulonglong)pWVar18 & 0xfffffffffffffffe);
            }
            if (local_2d63 != 0) {
              FUN_143733a60((ulonglong)pWVar23 & 0xfffffffffffffffe);
            }
            uVar20 = FUN_143703a50();
            if (local_2c40 == (local_2c3c & 0x3fffffff)) {
              FUN_14370c460(uVar20,&local_2c48,0x30);
            }
            if (local_2c48 + (longlong)(int)local_2c40 * 0x30 != (undefined1 *)0x0) {
              FUN_143723b10();
            }
            lVar19 = (longlong)(int)local_2c40;
            local_2c40 = local_2c40 + 1;
            FUN_1436fa270(local_2c48 + lVar19 * 0x30,&local_2d18,&local_2cc0);
            if (((ulonglong)local_2cb0 & 1) != 0) {
              FUN_143733a60((ulonglong)local_2cb0 & 0xfffffffffffffffe);
            }
            if (((ulonglong)local_2d08 & 1) != 0) {
              FUN_143733a60((ulonglong)local_2d08 & 0xfffffffffffffffe);
            }
            uVar29 = (ulonglong)param_7;
            iVar8 = (int)local_2d48 + param_7;
            iVar9 = (int)local_2d58 + param_8;
            local_2d38 = local_2d38 + -1;
            local_2d48 = (WriteBytesMem *)CONCAT44(local_2d48._4_4_,iVar8);
            local_2d58 = (WriteBytesMem *)CONCAT44(local_2d58._4_4_,iVar9);
            pWVar18 = local_2d30;
          } while (local_2d38 != (WriteBytesMem *)0x0);
          local_2d38 = (WriteBytesMem *)0x0;
          lVar31 = local_2d40;
          goto switchD_143720fa8_default;
        case (WriteBytesMem)0x8:
          uVar32 = *(uint *)(pWVar23 + 0x10);
          if ((uVar32 == (uint)uVar29) && (uVar32 == param_8)) {
            FUN_14370c700(pWVar18,pWVar21,uVar32 * uVar5);
          }
          else {
            lVar31 = local_2d40;
            if ((int)uVar5 < 1) goto switchD_143720fa8_default;
            uVar33 = (ulonglong)uVar5;
            do {
              if (0 < (longlong)(int)uVar32) {
                pWVar23 = pWVar18;
                lVar19 = (longlong)(int)uVar32;
                do {
                  *pWVar23 = pWVar23[(longlong)pWVar21 - (longlong)pWVar18];
                  pWVar23 = pWVar23 + 1;
                  lVar19 = lVar19 + -1;
                } while (lVar19 != 0);
              }
              pWVar18 = pWVar18 + (int)(uint)uVar29;
              pWVar21 = pWVar21 + (int)param_8;
              uVar33 = uVar33 - 1;
            } while (uVar33 != 0);
          }
          goto LAB_143721113;
        case (WriteBytesMem)0x9:
          uVar20 = FUniqueNetIdString::GetBytes(pWVar23);
          puVar25 = (ulonglong *)FUN_143714420(uVar20,1);
          if (puVar25 == (ulonglong *)0x0) {
            uVar29 = 0;
          }
          else {
            uVar29 = *puVar25;
          }
          puVar13 = AK::WriteBytesMem::Bytes(local_2d60);
          puVar25 = (ulonglong *)FUN_143714420(puVar13,1);
          if (puVar25 == (ulonglong *)0x0) {
            uVar33 = 0;
          }
          else {
            uVar33 = *puVar25;
          }
          uVar26 = ((uint)(uVar33 >> 10) & 0x3fffff) + 7 >> 3;
          uVar17 = (ulonglong)uVar26;
          uVar32 = ((uint)(uVar29 >> 10) & 0x3fffff) + 7 >> 3;
          local_2d64 = ((byte)(uVar33 >> 8) & 1) != ((byte)(uVar29 >> 8) & 1);
          local_2d58 = (WriteBytesMem *)CONCAT44(local_2d58._4_4_,uVar26);
          iVar8 = uVar32 - uVar26;
          local_2d48 = (WriteBytesMem *)CONCAT44(local_2d48._4_4_,iVar8);
          if (iVar8 < 1) {
            if ((uVar33 & 0x100) != 0) {
              pWVar21 = pWVar21 + -iVar8;
            }
            if ((bool)local_2d64) {
              uVar29 = (ulonglong)uVar5;
              if (0 < (int)uVar5) {
                do {
                  if (uVar32 == 1) {
                    *pWVar18 = *pWVar21;
                  }
                  else if (uVar32 == 2) {
                    *(ushort *)pWVar18 = *(ushort *)pWVar21 >> 8 | *(ushort *)pWVar21 << 8;
                  }
                  else if (uVar32 == 4) {
                    fVar35 = *(float *)pWVar21;
                    *(uint *)pWVar18 =
                         (uint)fVar35 >> 0x18 | ((uint)fVar35 & 0xff0000) >> 8 |
                         ((uint)fVar35 & 0xff00) << 8 | (int)fVar35 << 0x18;
                  }
                  else if (uVar32 == 8) {
                    dVar14 = *(double *)pWVar21;
                    *(ulonglong *)pWVar18 =
                         (ulonglong)dVar14 >> 0x38 | ((ulonglong)dVar14 & 0xff000000000000) >> 0x28
                         | ((ulonglong)dVar14 & 0xff0000000000) >> 0x18 |
                         ((ulonglong)dVar14 & 0xff00000000) >> 8 |
                         ((ulonglong)dVar14 & 0xff000000) << 8 |
                         ((ulonglong)dVar14 & 0xff0000) << 0x18 |
                         ((ulonglong)dVar14 & 0xff00) << 0x28 | (longlong)dVar14 << 0x38;
                  }
                  pWVar21 = pWVar21 + (int)param_8;
                  pWVar18 = pWVar18 + (int)param_7;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
            }
            else {
              uVar29 = (ulonglong)(int)param_7;
              if ((uVar32 == param_7) && (uVar32 == param_8)) {
                FUN_14370c700(pWVar18,pWVar21,uVar32 * uVar5);
              }
              else {
                lVar31 = local_2d40;
                if ((int)uVar5 < 1) goto switchD_143720fa8_default;
                uVar33 = (ulonglong)uVar5;
                do {
                  if ((ulonglong)uVar32 != 0) {
                    pWVar23 = pWVar18;
                    uVar17 = (ulonglong)uVar32;
                    do {
                      *pWVar23 = pWVar23[(longlong)pWVar21 - (longlong)pWVar18];
                      pWVar23 = pWVar23 + 1;
                      uVar17 = uVar17 - 1;
                    } while (uVar17 != 0);
                  }
                  pWVar18 = pWVar18 + uVar29;
                  pWVar21 = pWVar21 + (int)param_8;
                  uVar33 = uVar33 - 1;
                } while (uVar33 != 0);
              }
            }
          }
          else {
            local_2d28 = (WriteBytesMem *)0x1;
            local_2d30 = (WriteBytesMem *)0x0;
            local_2d38 = (WriteBytesMem *)(longlong)(int)(uVar26 - 1);
            if ((uVar29 & 0x100) != 0) {
              local_2d30 = (WriteBytesMem *)(longlong)iVar8;
              local_2d38 = (WriteBytesMem *)(ulonglong)uVar26;
              local_2d28 = (WriteBytesMem *)(longlong)-iVar8;
            }
            if (0 < (int)uVar5) {
              local_2ce8 = (WriteBytesMem *)(uVar33 >> 9 & 0x7fffff);
              local_2d60 = (WriteBytesMem *)(ulonglong)uVar5;
              do {
                pWVar23 = local_2d30 + (longlong)pWVar18;
                pWVar27 = local_2d38 + (longlong)pWVar18;
                local_2cf8 = local_2d28 + (longlong)pWVar27;
                iVar9 = (int)uVar17;
                if (local_2d64 == 0) {
                  if (iVar9 == 0) {
                    FUN_14370c700(pWVar23,pWVar21);
                    iVar8 = (int)local_2d48;
                  }
                  else if (0 < (longlong)uVar17) {
                    lVar19 = (longlong)pWVar21 - (longlong)pWVar23;
                    do {
                      *pWVar23 = pWVar23[lVar19];
                      pWVar23 = pWVar23 + 1;
                      uVar17 = uVar17 - 1;
                    } while (uVar17 != 0);
                  }
                }
                else if (iVar9 == 1) {
                  *pWVar23 = *pWVar21;
                }
                else if (iVar9 == 2) {
                  *(ushort *)pWVar23 = *(ushort *)pWVar21 >> 8 | *(ushort *)pWVar21 << 8;
                }
                else if (iVar9 == 4) {
                  fVar35 = *(float *)pWVar21;
                  *(uint *)pWVar23 =
                       (uint)fVar35 >> 0x18 | ((uint)fVar35 & 0xff0000) >> 8 |
                       ((uint)fVar35 & 0xff00) << 8 | (int)fVar35 << 0x18;
                }
                else if (iVar9 == 8) {
                  dVar14 = *(double *)pWVar21;
                  *(ulonglong *)pWVar23 =
                       (ulonglong)dVar14 >> 0x38 | ((ulonglong)dVar14 & 0xff000000000000) >> 0x28 |
                       ((ulonglong)dVar14 & 0xff0000000000) >> 0x18 |
                       ((ulonglong)dVar14 & 0xff00000000) >> 8 |
                       ((ulonglong)dVar14 & 0xff000000) << 8 |
                       ((ulonglong)dVar14 & 0xff0000) << 0x18 | ((ulonglong)dVar14 & 0xff00) << 0x28
                       | (longlong)dVar14 << 0x38;
                }
                if (((ulonglong)local_2ce8 & 1) != 0) {
                  FUN_14370c720(local_2cf8,-(((byte)*pWVar27 & 0x80) != 0),iVar8);
                }
                uVar17 = (ulonglong)(int)local_2d58;
                pWVar18 = pWVar18 + (int)param_7;
                pWVar21 = pWVar21 + (int)param_8;
                local_2d60 = (WriteBytesMem *)((longlong)local_2d60 - 1);
                iVar8 = (int)local_2d48;
              } while (local_2d60 != (WriteBytesMem *)0x0);
              local_2d60 = (WriteBytesMem *)0x0;
            }
          }
          goto LAB_143721113;
        case (WriteBytesMem)0xa:
          uVar20 = FUniqueNetIdString::GetBytes(pWVar23);
          puVar12 = (undefined8 *)FUN_143714420(uVar20,1);
          if (puVar12 == (undefined8 *)0x0) {
            local_2d60 = (WriteBytesMem *)0x0;
          }
          else {
            local_2d60 = (WriteBytesMem *)*puVar12;
          }
          puVar13 = AK::WriteBytesMem::Bytes(pWVar23);
          puVar25 = (ulonglong *)FUN_143714420(puVar13,1);
          if (puVar25 == (ulonglong *)0x0) {
            uVar29 = 0;
          }
          else {
            uVar29 = *puVar25;
          }
          lVar19 = (longlong)(int)param_8;
          uVar32 = (uint)uVar29;
          pWVar23 = local_2038;
          if ((uVar29 & 0x100) == 0) {
            pWVar23 = pWVar21;
          }
          bVar34 = (uVar29 & 0x100) != 0;
          uVar26 = param_8;
          if (bVar34) {
            uVar26 = 8;
          }
          local_2d48 = (WriteBytesMem *)CONCAT44(local_2d48._4_4_,uVar26);
          if (bVar34) {
            pWVar27 = local_2038;
            uVar16 = ((uint)(uVar29 >> 0xb) & 0x1f) + 7 +
                     ((uint)(uVar29 >> 10) & 1) + ((uint)(uVar29 >> 0x10) & 0xff) >> 3;
            if (uVar16 == 1) {
              if (0 < (int)uVar5) {
                uVar29 = (ulonglong)uVar5;
                do {
                  WVar4 = *pWVar21;
                  pWVar21 = pWVar21 + lVar19;
                  *pWVar27 = WVar4;
                  pWVar27 = pWVar27 + 8;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
            }
            else if (uVar16 == 2) {
              if (0 < (int)uVar5) {
                uVar29 = (ulonglong)uVar5;
                do {
                  uVar3 = *(ushort *)pWVar21;
                  pWVar21 = pWVar21 + lVar19;
                  *(ushort *)pWVar27 = uVar3 >> 8 | uVar3 << 8;
                  uVar29 = uVar29 - 1;
                  pWVar27 = pWVar27 + 8;
                } while (uVar29 != 0);
              }
            }
            else if (uVar16 == 4) {
              if (0 < (int)uVar5) {
                uVar29 = (ulonglong)uVar5;
                do {
                  fVar35 = *(float *)pWVar21;
                  pWVar21 = pWVar21 + lVar19;
                  *(uint *)pWVar27 =
                       (uint)fVar35 >> 0x18 | ((uint)fVar35 & 0xff0000) >> 8 |
                       ((uint)fVar35 & 0xff00) << 8 | (int)fVar35 << 0x18;
                  uVar29 = uVar29 - 1;
                  pWVar27 = pWVar27 + 8;
                } while (uVar29 != 0);
              }
            }
            else if ((uVar16 == 8) && (0 < (int)uVar5)) {
              uVar29 = (ulonglong)uVar5;
              do {
                dVar14 = *(double *)pWVar21;
                pWVar21 = pWVar21 + lVar19;
                *(ulonglong *)pWVar27 =
                     (ulonglong)dVar14 >> 0x38 | ((ulonglong)dVar14 & 0xff000000000000) >> 0x28 |
                     ((ulonglong)dVar14 & 0xff0000000000) >> 0x18 |
                     ((ulonglong)dVar14 & 0xff00000000) >> 8 | ((ulonglong)dVar14 & 0xff000000) << 8
                     | ((ulonglong)dVar14 & 0xff0000) << 0x18 | ((ulonglong)dVar14 & 0xff00) << 0x28
                     | (longlong)dVar14 << 0x38;
                uVar29 = uVar29 - 1;
                pWVar27 = pWVar27 + 8;
              } while (uVar29 != 0);
            }
            uVar32 = uVar32 & 0xfffffeff;
          }
          pWVar21 = local_2038;
          if (((ulonglong)local_2d60 & 0x100) == 0) {
            pWVar21 = pWVar18;
          }
          uVar16 = param_7;
          if (((ulonglong)local_2d60 & 0x100) != 0) {
            uVar16 = 8;
          }
          uVar7 = (uint)local_2d60 & 0xfffffeff;
          if (uVar32 == 0x74605) {
            if (uVar7 == 0x74605) {
              if (0 < (int)uVar5) {
                uVar29 = (ulonglong)uVar5;
                do {
                  uVar2 = *(undefined2 *)pWVar23;
                  pWVar23 = pWVar23 + (int)uVar26;
                  *(undefined2 *)pWVar21 = uVar2;
                  pWVar21 = pWVar21 + (int)uVar16;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
            }
            else if (uVar7 == 0x174605) {
              if (0 < (int)uVar5) {
                uVar29 = (ulonglong)uVar5;
                do {
                  sVar1 = *(short *)pWVar23;
                  pWVar23 = pWVar23 + (int)uVar26;
                  *(int *)pWVar21 = (int)sVar1 << 0x10;
                  pWVar21 = pWVar21 + (int)uVar16;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
            }
            else if (uVar7 == 0x345e05) {
              iVar8 = 0;
              if (3 < (int)uVar5) {
                uVar32 = (uVar5 - 4 >> 2) + 1;
                uVar29 = (ulonglong)uVar32;
                iVar8 = uVar32 * 4;
                do {
                  pWVar27 = pWVar23 + (int)uVar26;
                  *(double *)pWVar21 = (double)(float)((int)*(short *)pWVar23 << 0x10);
                  pWVar21 = pWVar21 + (int)uVar16;
                  pWVar28 = pWVar27 + (int)uVar26;
                  *(double *)pWVar21 = (double)(float)((int)*(short *)pWVar27 << 0x10);
                  pWVar21 = pWVar21 + (int)uVar16;
                  *(double *)pWVar21 = (double)(float)((int)*(short *)pWVar28 << 0x10);
                  pWVar23 = pWVar28 + (int)uVar26 + (int)uVar26;
                  fVar35 = (float)((int)*(short *)(pWVar28 + (int)uVar26) << 0x10);
                  local_2d58 = (WriteBytesMem *)CONCAT44(local_2d58._4_4_,fVar35);
                  *(double *)(pWVar21 + (int)uVar16) = (double)fVar35;
                  pWVar21 = pWVar21 + (int)uVar16 + (int)uVar16;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
              if (iVar8 < (int)uVar5) {
                uVar29 = (ulonglong)(uVar5 - iVar8);
                do {
                  sVar1 = *(short *)pWVar23;
                  pWVar23 = pWVar23 + (int)uVar26;
                  local_2d58 = (WriteBytesMem *)CONCAT44(local_2d58._4_4_,(int)sVar1 << 0x10);
                  *(double *)pWVar21 = (double)(float)((int)sVar1 << 0x10);
                  pWVar21 = pWVar21 + (int)uVar16;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
            }
          }
          else if (uVar32 == 0x174605) {
            if (uVar7 == 0x74605) {
              iVar8 = 0;
              if (3 < (int)uVar5) {
                uVar32 = (uVar5 - 4 >> 2) + 1;
                uVar29 = (ulonglong)uVar32;
                iVar8 = uVar32 * 4;
                do {
                  pWVar27 = pWVar23 + (int)uVar26;
                  *(short *)pWVar21 = (short)((uint)(*(float *)pWVar23 * 1.0039062) >> 0x10);
                  pWVar21 = pWVar21 + (int)uVar16;
                  pWVar28 = pWVar27 + (int)uVar26;
                  *(short *)pWVar21 = (short)((uint)(*(float *)pWVar27 * 1.0039062) >> 0x10);
                  pWVar21 = pWVar21 + (int)uVar16;
                  *(short *)pWVar21 = (short)((uint)(*(float *)pWVar28 * 1.0039062) >> 0x10);
                  pWVar23 = pWVar28 + (int)uVar26 + (int)uVar26;
                  fVar35 = *(float *)(pWVar28 + (int)uVar26) * 1.0039062;
                  local_2d58 = (WriteBytesMem *)CONCAT44(local_2d58._4_4_,fVar35);
                  *(short *)(pWVar21 + (int)uVar16) = (short)((uint)fVar35 >> 0x10);
                  pWVar21 = pWVar21 + (int)uVar16 + (int)uVar16;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
              if (iVar8 < (int)uVar5) {
                uVar29 = (ulonglong)(uVar5 - iVar8);
                do {
                  fVar35 = *(float *)pWVar23;
                  pWVar23 = pWVar23 + (int)uVar26;
                  local_2d58 = (WriteBytesMem *)CONCAT44(local_2d58._4_4_,fVar35 * 1.0039062);
                  *(short *)pWVar21 = (short)((uint)(fVar35 * 1.0039062) >> 0x10);
                  pWVar21 = pWVar21 + (int)uVar16;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
            }
            else if (uVar7 == 0x174605) {
              iVar8 = 0;
              if (3 < (int)uVar5) {
                uVar32 = (uVar5 - 4 >> 2) + 1;
                uVar29 = (ulonglong)uVar32;
                iVar8 = uVar32 * 4;
                do {
                  pWVar27 = pWVar23 + (int)uVar26;
                  *(float *)pWVar21 = *(float *)pWVar23;
                  pWVar21 = pWVar21 + (int)uVar16;
                  pWVar28 = pWVar27 + (int)uVar26;
                  *(undefined4 *)pWVar21 = *(undefined4 *)pWVar27;
                  pWVar21 = pWVar21 + (int)uVar16;
                  *(undefined4 *)pWVar21 = *(undefined4 *)pWVar28;
                  pWVar23 = pWVar28 + (int)uVar26 + (int)uVar26;
                  *(undefined4 *)(pWVar21 + (int)uVar16) = *(undefined4 *)(pWVar28 + (int)uVar26);
                  pWVar21 = pWVar21 + (int)uVar16 + (int)uVar16;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
              if (iVar8 < (int)uVar5) {
                uVar29 = (ulonglong)(uVar5 - iVar8);
                do {
                  fVar35 = *(float *)pWVar23;
                  pWVar23 = pWVar23 + (int)uVar26;
                  *(float *)pWVar21 = fVar35;
                  pWVar21 = pWVar21 + (int)uVar16;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
            }
            else if (uVar7 == 0x345e05) {
              iVar8 = 0;
              if (3 < (int)uVar5) {
                uVar32 = (uVar5 - 4 >> 2) + 1;
                uVar29 = (ulonglong)uVar32;
                iVar8 = uVar32 * 4;
                do {
                  pWVar27 = pWVar23 + (int)uVar26;
                  *(double *)pWVar21 = (double)*(float *)pWVar23;
                  pWVar21 = pWVar21 + (int)uVar16;
                  pWVar28 = pWVar27 + (int)uVar26;
                  *(double *)pWVar21 = (double)*(float *)pWVar27;
                  pWVar21 = pWVar21 + (int)uVar16;
                  *(double *)pWVar21 = (double)*(float *)pWVar28;
                  pWVar23 = pWVar28 + (int)uVar26 + (int)uVar26;
                  *(double *)(pWVar21 + (int)uVar16) = (double)*(float *)(pWVar28 + (int)uVar26);
                  pWVar21 = pWVar21 + (int)uVar16 + (int)uVar16;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
              if (iVar8 < (int)uVar5) {
                uVar29 = (ulonglong)(uVar5 - iVar8);
                do {
                  fVar35 = *(float *)pWVar23;
                  pWVar23 = pWVar23 + (int)uVar26;
                  *(double *)pWVar21 = (double)fVar35;
                  pWVar21 = pWVar21 + (int)uVar16;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
            }
          }
          else if (uVar32 == 0x345e05) {
            if (uVar7 == 0x74605) {
              iVar8 = 0;
              if (3 < (int)uVar5) {
                uVar32 = (uVar5 - 4 >> 2) + 1;
                uVar29 = (ulonglong)uVar32;
                iVar8 = uVar32 * 4;
                do {
                  pWVar27 = pWVar23 + (int)uVar26;
                  *(short *)pWVar21 = (short)((uint)((float)*(double *)pWVar23 * 1.0039062) >> 0x10)
                  ;
                  pWVar21 = pWVar21 + (int)uVar16;
                  pWVar28 = pWVar27 + (int)uVar26;
                  *(short *)pWVar21 = (short)((uint)((float)*(double *)pWVar27 * 1.0039062) >> 0x10)
                  ;
                  pWVar21 = pWVar21 + (int)uVar16;
                  *(short *)pWVar21 = (short)((uint)((float)*(double *)pWVar28 * 1.0039062) >> 0x10)
                  ;
                  pWVar23 = pWVar28 + (int)uVar26 + (int)uVar26;
                  fVar35 = (float)*(double *)(pWVar28 + (int)uVar26) * 1.0039062;
                  local_2d58 = (WriteBytesMem *)CONCAT44(local_2d58._4_4_,fVar35);
                  *(short *)(pWVar21 + (int)uVar16) = (short)((uint)fVar35 >> 0x10);
                  pWVar21 = pWVar21 + (int)uVar16 + (int)uVar16;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
              if (iVar8 < (int)uVar5) {
                uVar29 = (ulonglong)(uVar5 - iVar8);
                do {
                  dVar14 = *(double *)pWVar23;
                  pWVar23 = pWVar23 + (int)uVar26;
                  local_2d58 = (WriteBytesMem *)CONCAT44(local_2d58._4_4_,(float)dVar14 * 1.0039062)
                  ;
                  *(short *)pWVar21 = (short)((uint)((float)dVar14 * 1.0039062) >> 0x10);
                  pWVar21 = pWVar21 + (int)uVar16;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
            }
            else if (uVar7 == 0x174605) {
              iVar8 = 0;
              if (3 < (int)uVar5) {
                uVar32 = (uVar5 - 4 >> 2) + 1;
                uVar29 = (ulonglong)uVar32;
                iVar8 = uVar32 * 4;
                do {
                  pWVar27 = pWVar23 + (int)uVar26;
                  *(float *)pWVar21 = (float)*(double *)pWVar23;
                  pWVar21 = pWVar21 + (int)uVar16;
                  pWVar28 = pWVar27 + (int)uVar26;
                  *(float *)pWVar21 = (float)*(double *)pWVar27;
                  pWVar21 = pWVar21 + (int)uVar16;
                  *(float *)pWVar21 = (float)*(double *)pWVar28;
                  pWVar23 = pWVar28 + (int)uVar26 + (int)uVar26;
                  *(float *)(pWVar21 + (int)uVar16) = (float)*(double *)(pWVar28 + (int)uVar26);
                  pWVar21 = pWVar21 + (int)uVar16 + (int)uVar16;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
              if (iVar8 < (int)uVar5) {
                uVar29 = (ulonglong)(uVar5 - iVar8);
                do {
                  dVar14 = *(double *)pWVar23;
                  pWVar23 = pWVar23 + (int)uVar26;
                  *(float *)pWVar21 = (float)dVar14;
                  pWVar21 = pWVar21 + (int)uVar16;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
            }
            else if (uVar7 == 0x345e05) {
              iVar8 = 0;
              if (3 < (int)uVar5) {
                uVar32 = (uVar5 - 4 >> 2) + 1;
                uVar29 = (ulonglong)uVar32;
                iVar8 = uVar32 * 4;
                do {
                  pWVar27 = pWVar23 + (int)uVar26;
                  *(double *)pWVar21 = *(double *)pWVar23;
                  pWVar21 = pWVar21 + (int)uVar16;
                  pWVar28 = pWVar27 + (int)uVar26;
                  *(undefined8 *)pWVar21 = *(undefined8 *)pWVar27;
                  pWVar21 = pWVar21 + (int)uVar16;
                  *(undefined8 *)pWVar21 = *(undefined8 *)pWVar28;
                  pWVar23 = pWVar28 + (int)uVar26 + (int)uVar26;
                  *(undefined8 *)(pWVar21 + (int)uVar16) = *(undefined8 *)(pWVar28 + (int)uVar26);
                  pWVar21 = pWVar21 + (int)uVar16 + (int)uVar16;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
              if (iVar8 < (int)uVar5) {
                uVar29 = (ulonglong)(uVar5 - iVar8);
                do {
                  dVar14 = *(double *)pWVar23;
                  pWVar23 = pWVar23 + (int)uVar26;
                  *(double *)pWVar21 = dVar14;
                  pWVar21 = pWVar21 + (int)uVar16;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
            }
          }
          if (((ulonglong)local_2d60 & 0x100) != 0) {
            pWVar23 = local_2038;
            uVar32 = ((uint)local_2d60 >> 0xb & 0x1f) + 7 +
                     ((uint)((ulonglong)local_2d60 >> 10) & 1) +
                     ((uint)((ulonglong)local_2d60 >> 0x10) & 0xff) >> 3;
            if (uVar32 == 1) {
              uVar29 = (ulonglong)uVar5;
              if (0 < (int)uVar5) {
                do {
                  WVar4 = *pWVar23;
                  pWVar23 = pWVar23 + 8;
                  *pWVar18 = WVar4;
                  pWVar18 = pWVar18 + (int)param_7;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
            }
            else if (uVar32 == 2) {
              uVar29 = (ulonglong)uVar5;
              if (0 < (int)uVar5) {
                do {
                  uVar3 = *(ushort *)pWVar23;
                  pWVar23 = pWVar23 + 8;
                  *(ushort *)pWVar18 = uVar3 >> 8 | uVar3 << 8;
                  pWVar18 = pWVar18 + (int)param_7;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
            }
            else if (uVar32 == 4) {
              uVar29 = (ulonglong)uVar5;
              if (0 < (int)uVar5) {
                do {
                  uVar32 = *(uint *)pWVar23;
                  pWVar23 = pWVar23 + 8;
                  *(uint *)pWVar18 =
                       uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 |
                       uVar32 << 0x18;
                  pWVar18 = pWVar18 + (int)param_7;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
            }
            else if ((uVar32 == 8) && (uVar29 = (ulonglong)uVar5, 0 < (int)uVar5)) {
              do {
                uVar33 = *(ulonglong *)pWVar23;
                pWVar23 = pWVar23 + 8;
                *(ulonglong *)pWVar18 =
                     uVar33 >> 0x38 | (uVar33 & 0xff000000000000) >> 0x28 |
                     (uVar33 & 0xff0000000000) >> 0x18 | (uVar33 & 0xff00000000) >> 8 |
                     (uVar33 & 0xff000000) << 8 | (uVar33 & 0xff0000) << 0x18 |
                     (uVar33 & 0xff00) << 0x28 | uVar33 << 0x38;
                pWVar18 = pWVar18 + (int)param_7;
                uVar29 = uVar29 - 1;
              } while (uVar29 != 0);
            }
          }
          goto LAB_143721113;
        case (WriteBytesMem)0xb:
          uVar20 = *(undefined8 *)(pWVar23 + 0x10);
          FUN_1437152f0(uVar20);
          FUN_1437152f0(*(double *)(local_2d60 + 0x18));
          iVar8 = FUN_1437152f0(uVar20);
          iVar9 = FUN_1437152f0();
          iVar30 = 0;
          pWVar23 = local_2d30;
          if ((int)uVar5 < 1) goto LAB_143721113;
          do {
            if (iVar8 == 1) {
              bVar34 = *pWVar21 == (WriteBytesMem)0x0;
            }
            else if (iVar8 == 2) {
              bVar34 = *(short *)pWVar21 == 0;
            }
            else if (iVar8 == 4) {
              bVar34 = *(float *)pWVar21 == 0.0;
            }
            else {
              bVar34 = *(double *)pWVar21 == 0.0;
            }
            WVar4 = (WriteBytesMem)!bVar34;
            if (iVar9 == 1) {
              *pWVar23 = WVar4;
            }
            else if (iVar9 == 2) {
              *(ushort *)pWVar23 = (ushort)(byte)WVar4;
            }
            else if (iVar9 == 4) {
              *(uint *)pWVar23 = (uint)(byte)WVar4;
            }
            else {
              *(ulonglong *)pWVar23 = (ulonglong)(byte)WVar4;
            }
            uVar29 = (ulonglong)(int)param_7;
            iVar30 = iVar30 + 1;
            pWVar21 = pWVar21 + (int)param_8;
            pWVar23 = pWVar23 + uVar29;
            lVar31 = local_2d40;
          } while (iVar30 < (int)uVar5);
        default:
          goto switchD_143720fa8_default;
        }
        if (((ulonglong)pWVar18 & 1) != 0) {
          FUN_143733a60();
        }
        if (((ulonglong)pWVar23 & 1) != 0) {
LAB_143721109:
          FUN_143733a60();
        }
LAB_143721113:
        uVar29 = (ulonglong)param_7;
        lVar31 = local_2d40;
switchD_143720fa8_default:
        lVar19 = local_2d50;
      }
      local_2d20 = local_2d20 + uVar5;
    } while (local_2d20 < param_9);
  }
  local_2d20 = 0;
  if (0 < (int)local_2c40) {
    lVar19 = 0;
    do {
      puVar6 = local_2c48;
      local_2cf8 = *(WriteBytesMem **)(local_2c48 + lVar19 + 0x18);
      uVar29 = *(ulonglong *)(local_2c48 + lVar19 + 0x28);
      local_2ce8 = *(WriteBytesMem **)(local_2c48 + lVar19 + 0x20);
      local_2d64 = (byte)uVar29 & 1;
      if ((uVar29 & 1) != 0) {
        FUN_1437329e0(uVar29 & 0xfffffffffffffffe);
      }
      local_2d28 = *(WriteBytesMem **)(puVar6 + lVar19);
      local_2d30 = *(WriteBytesMem **)(puVar6 + lVar19 + 8);
      uVar33 = *(ulonglong *)(puVar6 + lVar19 + 0x10);
      if ((uVar33 & 1) != 0) {
        FUN_1437329e0(uVar33 & 0xfffffffffffffffe);
      }
      plVar22 = (longlong *)(uVar29 & 0xfffffffffffffffe);
      local_2d38 = (WriteBytesMem *)0x0;
      (**(code **)(*plVar22 + 0x38))(plVar22,local_2c98,local_2cf8,local_2ce8,&local_2d38);
      plVar24 = (longlong *)(uVar33 & 0xfffffffffffffffe);
      (**(code **)(*plVar24 + 0x30))(plVar24,local_2d00,local_2d28,local_2d30,local_2d38);
      if ((uVar33 & 1) != 0) {
        FUN_143733a60(plVar24);
      }
      if (local_2d64 != 0) {
        FUN_143733a60(plVar22);
      }
      if (local_2d00[0] < 0) {
        uVar20 = 0x80040200;
        goto LAB_1437227c1;
      }
      lVar19 = lVar19 + 0x30;
      local_2d20 = local_2d20 + 1;
    } while (local_2d20 < (int)local_2c40);
  }
  uVar20 = 0;
LAB_1437227c1:
  local_2ce8 = (WriteBytesMem *)FUN_143703a50();
  lVar19 = (longlong)(int)(local_2c40 - 1);
  if (-1 < (int)(local_2c40 - 1)) {
    puVar25 = (ulonglong *)(local_2c48 + lVar19 * 0x30 + 0x10);
    do {
      if ((puVar25[3] & 1) != 0) {
        FUN_143733a60(puVar25[3] & 0xfffffffffffffffe);
      }
      if ((*puVar25 & 1) != 0) {
        FUN_143733a60(*puVar25 & 0xfffffffffffffffe);
      }
      puVar25 = puVar25 + -6;
      lVar19 = lVar19 + -1;
    } while (-1 < lVar19);
  }
  local_2c40 = 0;
  if (-1 < (int)local_2c3c) {
    FUN_143702e10(local_2ce8,local_2c48,0x30,local_2c3c & 0x3fffffff);
  }
  return uVar20;
code_r0x000143722646:
  local_2cc8 = local_2cc8 + 1;
  uVar29 = (ulonglong)param_7;
  lVar31 = local_2d40;
  goto LAB_143720f3f;
LAB_14372268e:
  if (((ulonglong)local_2d38 & 1) != 0) {
    FUN_143733a60((ulonglong)local_2d38 & 0xfffffffffffffffe);
  }
  if (((ulonglong)local_2d30 & 1) != 0) {
    FUN_143733a60((ulonglong)local_2d30 & 0xfffffffffffffffe);
  }
LAB_1437226b2:
  uVar20 = 0x80040200;
  goto LAB_1437227c1;
}



// FUNCTION 1437228b0 FUN_1437228b0 body=354 status=ok
// SIG undefined FUN_1437228b0(void)

uint * FUN_1437228b0(longlong *param_1,uint *param_2,longlong *param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint *puVar9;
  undefined4 *puVar10;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  uVar5 = FUN_143722d00(param_3);
  puVar9 = (uint *)(param_1[2] + (ulonglong)(*(uint *)(param_1 + 3) & uVar5) * 8);
  if (-1 < *(int *)(param_1[2] + 4 + (ulonglong)(*(uint *)(param_1 + 3) & uVar5) * 8)) {
    do {
      plVar7 = (longlong *)((longlong)(int)puVar9[1] * 0x20 + *param_1);
      if ((((*plVar7 == *param_3) && (plVar7[1] == param_3[1])) &&
          ((int)plVar7[2] == (int)param_3[2])) &&
         (*(int *)((longlong)plVar7 + 0x14) == *(int *)((longlong)param_3 + 0x14))) {
        *param_2 = puVar9[1];
        goto LAB_1437229e6;
      }
      lVar2 = param_1[2];
      uVar8 = ((longlong)puVar9 - lVar2 >> 3) + 1U & (longlong)(int)param_1[3];
      puVar9 = (uint *)(lVar2 + uVar8 * 8);
    } while (-1 < *(int *)(lVar2 + 4 + uVar8 * 8));
  }
  uVar1 = *(uint *)(param_1 + 1);
  *puVar9 = uVar5;
  puVar9[1] = uVar1;
  uVar6 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar6,param_1,0x20);
  }
  puVar10 = (undefined4 *)((longlong)(int)param_1[1] * 0x20 + *param_1);
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  uVar3 = *(undefined4 *)((longlong)param_3 + 4);
  lVar2 = param_3[1];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
  *puVar10 = (int)*param_3;
  puVar10[1] = uVar3;
  puVar10[2] = (int)lVar2;
  puVar10[3] = uVar4;
  *(longlong *)(puVar10 + 4) = param_3[2];
  uVar6 = FUN_1437245e0(param_4);
  *(undefined8 *)(puVar10 + 6) = uVar6;
  *param_2 = uVar1;
LAB_1437229e6:
  param_2[1] = (uint)((longlong)puVar9 - param_1[2] >> 3);
  return param_2;
}



// FUNCTION 143722a20 FUN_143722a20 body=354 status=ok
// SIG undefined FUN_143722a20(void)

uint * FUN_143722a20(longlong *param_1,uint *param_2,longlong *param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint *puVar9;
  undefined4 *puVar10;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  uVar5 = FUN_143722d00(param_3);
  puVar9 = (uint *)(param_1[2] + (ulonglong)(*(uint *)(param_1 + 3) & uVar5) * 8);
  if (-1 < *(int *)(param_1[2] + 4 + (ulonglong)(*(uint *)(param_1 + 3) & uVar5) * 8)) {
    do {
      plVar7 = (longlong *)((longlong)(int)puVar9[1] * 0x20 + *param_1);
      if ((((*plVar7 == *param_3) && (plVar7[1] == param_3[1])) &&
          ((int)plVar7[2] == (int)param_3[2])) &&
         (*(int *)((longlong)plVar7 + 0x14) == *(int *)((longlong)param_3 + 0x14))) {
        *param_2 = puVar9[1];
        goto LAB_143722b56;
      }
      lVar2 = param_1[2];
      uVar8 = ((longlong)puVar9 - lVar2 >> 3) + 1U & (longlong)(int)param_1[3];
      puVar9 = (uint *)(lVar2 + uVar8 * 8);
    } while (-1 < *(int *)(lVar2 + 4 + uVar8 * 8));
  }
  uVar1 = *(uint *)(param_1 + 1);
  *puVar9 = uVar5;
  puVar9[1] = uVar1;
  uVar6 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar6,param_1,0x20);
  }
  puVar10 = (undefined4 *)((longlong)(int)param_1[1] * 0x20 + *param_1);
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  uVar3 = *(undefined4 *)((longlong)param_3 + 4);
  lVar2 = param_3[1];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
  *puVar10 = (int)*param_3;
  puVar10[1] = uVar3;
  puVar10[2] = (int)lVar2;
  puVar10[3] = uVar4;
  *(longlong *)(puVar10 + 4) = param_3[2];
  uVar6 = FUN_1437246a0(param_4);
  *(undefined8 *)(puVar10 + 6) = uVar6;
  *param_2 = uVar1;
LAB_143722b56:
  param_2[1] = (uint)((longlong)puVar9 - param_1[2] >> 3);
  return param_2;
}



// FUNCTION 143722b90 FUN_143722b90 body=354 status=ok
// SIG undefined FUN_143722b90(void)

uint * FUN_143722b90(longlong *param_1,uint *param_2,longlong *param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint *puVar9;
  undefined4 *puVar10;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  uVar5 = FUN_143722d00(param_3);
  puVar9 = (uint *)(param_1[2] + (ulonglong)(*(uint *)(param_1 + 3) & uVar5) * 8);
  if (-1 < *(int *)(param_1[2] + 4 + (ulonglong)(*(uint *)(param_1 + 3) & uVar5) * 8)) {
    do {
      plVar7 = (longlong *)((longlong)(int)puVar9[1] * 0x20 + *param_1);
      if ((((*plVar7 == *param_3) && (plVar7[1] == param_3[1])) &&
          ((int)plVar7[2] == (int)param_3[2])) &&
         (*(int *)((longlong)plVar7 + 0x14) == *(int *)((longlong)param_3 + 0x14))) {
        *param_2 = puVar9[1];
        goto LAB_143722cc6;
      }
      lVar2 = param_1[2];
      uVar8 = ((longlong)puVar9 - lVar2 >> 3) + 1U & (longlong)(int)param_1[3];
      puVar9 = (uint *)(lVar2 + uVar8 * 8);
    } while (-1 < *(int *)(lVar2 + 4 + uVar8 * 8));
  }
  uVar1 = *(uint *)(param_1 + 1);
  *puVar9 = uVar5;
  puVar9[1] = uVar1;
  uVar6 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar6,param_1,0x20);
  }
  puVar10 = (undefined4 *)((longlong)(int)param_1[1] * 0x20 + *param_1);
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  uVar3 = *(undefined4 *)((longlong)param_3 + 4);
  lVar2 = param_3[1];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
  *puVar10 = (int)*param_3;
  puVar10[1] = uVar3;
  puVar10[2] = (int)lVar2;
  puVar10[3] = uVar4;
  *(longlong *)(puVar10 + 4) = param_3[2];
  uVar6 = FUN_1437249f0(param_4);
  *(undefined8 *)(puVar10 + 6) = uVar6;
  *param_2 = uVar1;
LAB_143722cc6:
  param_2[1] = (uint)((longlong)puVar9 - param_1[2] >> 3);
  return param_2;
}



// FUNCTION 143722d00 FUN_143722d00 body=199 status=ok
// SIG undefined FUN_143722d00(void)

uint FUN_143722d00(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = (int)*param_1;
  uVar5 = iVar1 * -0x61c8864f;
  iVar2 = (int)((ulonglong)*param_1 >> 0x20);
  uVar3 = iVar2 * -0x61c8864f;
  uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar4 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | iVar2 * -0x4f000000;
  iVar1 = (int)param_1[1];
  uVar3 = iVar1 * -0x61c8864f;
  uVar4 = uVar5 + uVar4 * 0x40 + (uVar5 >> 2) + 0x9e3779b9 ^ uVar4;
  iVar2 = (int)((ulonglong)param_1[1] >> 0x20);
  uVar5 = iVar2 * -0x61c8864f;
  uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | iVar2 * -0x4f000000;
  uVar5 = uVar3 + uVar5 * 0x40 + (uVar3 >> 2) + 0x9e3779b9 ^ uVar5;
  uVar3 = *(int *)(param_1 + 2) * -0x61c8864f;
  uVar4 = uVar4 ^ uVar4 * 0x40 + (uVar5 >> 2) + uVar5 + 0x9e3779b9;
  uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
          *(int *)(param_1 + 2) * -0x4f000000;
  uVar5 = *(int *)((longlong)param_1 + 0x14) * -0x61c8864f;
  uVar4 = uVar4 ^ (uVar3 >> 2) + 0x9e3779b9 + uVar4 * 0x40 + uVar3;
  uVar3 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
          *(int *)((longlong)param_1 + 0x14) * -0x4f000000;
  return (uVar3 >> 2) + 0x9e3779b9 + uVar3 + uVar4 * 0x40 ^ uVar4;
}



// FUNCTION 143722dd0 FUN_143722dd0 body=195 status=ok
// SIG undefined FUN_143722dd0(void)

void FUN_143722dd0(longlong param_1,int param_2,int param_3,ulonglong param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  
  uVar5 = (ulonglong)param_2;
  uVar6 = uVar5;
  uVar10 = param_4;
  do {
    uVar4 = (ulonglong)param_3;
    uVar8 = uVar6 & 0xffffffff;
    iVar1 = *(int *)(param_1 + ((longlong)(param_3 + (int)uVar6) >> 1) * 4);
    iVar9 = param_3;
    do {
      uVar7 = (uint)uVar8;
      iVar2 = *(int *)(param_1 + uVar5 * 4);
      while (iVar2 < iVar1) {
        uVar5 = uVar5 + 1;
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        iVar2 = *(int *)(param_1 + uVar5 * 4);
      }
      iVar2 = *(int *)(param_1 + uVar4 * 4);
      while (iVar1 < iVar2) {
        uVar4 = uVar4 - 1;
        iVar9 = iVar9 + -1;
        iVar2 = *(int *)(param_1 + uVar4 * 4);
      }
      if ((longlong)uVar4 < (longlong)uVar5) break;
      if (uVar4 != uVar5) {
        uVar3 = *(undefined4 *)(param_1 + uVar4 * 4);
        *(undefined4 *)(param_1 + uVar4 * 4) = *(undefined4 *)(param_1 + uVar5 * 4);
        *(undefined4 *)(param_1 + uVar5 * 4) = uVar3;
      }
      iVar9 = iVar9 + -1;
      uVar4 = uVar4 - 1;
      uVar7 = uVar7 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 <= (longlong)uVar4);
    if ((int)uVar6 < iVar9) {
      FUN_143722dd0(param_1,uVar6 & 0xffffffff,iVar9,uVar10);
      uVar10 = param_4 & 0xff;
    }
    if (param_3 <= (int)uVar7) {
      return;
    }
    uVar6 = (ulonglong)uVar7;
  } while( true );
}



// FUNCTION 143722ea0 FUN_143722ea0 body=68 status=ok
// SIG undefined FUN_143722ea0(void)

longlong * FUN_143722ea0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_143703a50();
  lVar2 = (**(code **)(*plVar1 + 8))(plVar1,0x100);
  *param_1 = lVar2;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xf;
  if (lVar2 != 0) {
    FUN_143729aa0(param_1);
  }
  return param_1;
}



// FUNCTION 143722ef0 FUN_143722ef0 body=2338 status=ok
// SIG undefined FUN_143722ef0(void)

undefined8 * FUN_143722ef0(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  LPVOID pvVar7;
  undefined8 uVar8;
  uint *puVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  longlong lVar12;
  longlong *plVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  longlong *plVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  int iVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong *plVar28;
  int local_res8 [2];
  undefined8 local_res10;
  longlong local_res18;
  undefined8 local_res20;
  longlong local_128;
  uint local_120;
  uint local_11c;
  ulonglong local_118;
  uint local_110;
  uint local_10c;
  int local_108;
  longlong *local_100;
  int local_f8;
  uint local_f4;
  undefined8 local_f0;
  longlong *local_e8;
  undefined1 *local_d8;
  undefined4 local_d0;
  int local_cc;
  undefined1 local_c8 [136];
  
  uVar26 = 0;
  param_1[1] = 0;
  *param_1 = hkSerialize::VersionBundle::Impl::CompatTypeReg::vftable;
  param_1[4] = param_2;
  param_1[3] = hkSerialize::VersionBundle::Impl::CompatTypeReg::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  FUN_14373bf20(param_1 + 7,(undefined1)local_res8[0]);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0xffffffff;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  FUN_14373bf20(param_1 + 0xe,(undefined1)local_res8[0]);
  FUN_143723820(param_1 + 0x11,param_1 + 3);
  uVar2 = 0;
  local_128 = 0;
  local_120 = 0;
  local_11c = 0x80000000;
  plVar28 = *(longlong **)(*(longlong *)(param_1[4] + 8) + 0x88);
  iVar18 = (int)((longlong)*(int *)(*(longlong *)(param_1[4] + 8) + 0x90) * 8 >> 3);
  uVar19 = uVar26;
  plVar20 = plVar28;
  uVar22 = uVar26;
  local_e8 = plVar28;
  if (0 < iVar18) {
    do {
      if ((*(char *)(*plVar20 + 0x24) != '\0') && (*(int *)(*plVar20 + 0x10) != -1)) {
        uVar16 = (uint)uVar22;
        if ((uint)uVar22 == (uVar2 & 0x3fffffff)) {
          FUN_14370c460(&PTR_vftable_1467f0638,&local_128,4);
          uVar16 = local_120;
        }
        *(int *)(local_128 + (longlong)(int)uVar16 * 4) = (int)uVar19;
        local_120 = local_120 + 1;
        uVar22 = (ulonglong)local_120;
        uVar2 = local_11c;
      }
      uVar16 = (int)uVar19 + 1;
      uVar19 = (ulonglong)uVar16;
      plVar20 = plVar20 + 1;
    } while ((int)uVar16 < iVar18);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 0x80000000;
  local_108 = 0;
  uVar19 = uVar26;
  uVar21 = uVar26;
  uVar23 = uVar26;
  uVar27 = uVar26;
  if (0 < (int)uVar22) {
    do {
      uVar2 = (uint)uVar21;
      uVar24 = uVar2 - 1;
      iVar18 = *(int *)(local_128 + uVar27);
      lVar12 = plVar28[iVar18];
      uVar16 = uVar2;
      if (0 < (int)uVar24) {
        uVar16 = iVar18 * -0x61c8864f;
        uVar15 = (uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                 iVar18 * -0x4f000000) & uVar24;
        iVar4 = *(int *)(uVar23 + (longlong)(int)uVar15 * 4);
        while ((uVar16 = uVar2, iVar4 != -1 && (uVar16 = uVar15, iVar4 != iVar18))) {
          uVar15 = uVar15 + 1 & uVar24;
          iVar4 = *(int *)(uVar23 + (longlong)(int)uVar15 * 4);
        }
      }
      if (((int)uVar24 < (int)uVar16) && (iVar18 = *(int *)(lVar12 + 0x14), iVar18 != -1)) {
        local_res10 = 0xffffffffffffffff;
        do {
          local_res18 = FUN_14371f4b0(*(undefined8 *)(param_1[4] + 8),*(undefined8 *)(lVar12 + 8),
                                      iVar18);
          piVar5 = (int *)FUN_14372d420(*(longlong *)(param_1[4] + 8) + 0x98,&local_res18,
                                        &local_res10);
          iVar18 = *piVar5;
          if (iVar18 < 0) break;
          if ((int)(local_110 - 1) < local_108 * 2) {
            FUN_1436ffb50(&local_118,local_res8,local_110 * 2);
          }
          uVar2 = iVar18 * -0x61c8864f;
          uVar2 = (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                  iVar18 * -0x4f000000) & local_110 - 1;
          iVar4 = *(int *)(local_118 + (longlong)(int)uVar2 * 4);
          while ((iVar25 = 1, iVar4 != -1 && (iVar25 = 0, iVar4 != iVar18))) {
            uVar2 = uVar2 + 1 & local_110 - 1;
            iVar4 = *(int *)(local_118 + (longlong)(int)uVar2 * 4);
          }
          local_108 = local_108 + iVar25;
          *(int *)(local_118 + (longlong)(int)uVar2 * 4) = iVar18;
          if (iVar25 == 0) break;
          lVar12 = *(longlong *)
                    (*(longlong *)(*(longlong *)(param_1[4] + 8) + 0x88) + (longlong)iVar18 * 8);
          iVar18 = *(int *)(lVar12 + 0x14);
        } while (iVar18 != -1);
        uVar22 = (ulonglong)local_120;
        uVar21 = (ulonglong)local_110;
        uVar23 = local_118;
      }
      uVar2 = (int)uVar19 + 1;
      uVar19 = (ulonglong)uVar2;
      uVar27 = uVar27 + 4;
    } while ((int)uVar2 < (int)uVar22);
  }
  local_res10 = (ulonglong)local_res10._4_4_ << 0x20;
  if (0 < (int)uVar22) {
    local_res18 = 0;
    do {
      iVar4 = (int)uVar26;
      uVar2 = (uint)uVar21;
      uVar24 = uVar2 - 1;
      iVar18 = *(int *)(local_128 + local_res18);
      uVar19 = (ulonglong)iVar18;
      uVar16 = uVar2;
      if (0 < (int)uVar24) {
        uVar16 = iVar18 * -0x61c8864f;
        uVar15 = (uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                 iVar18 * -0x4f000000) & uVar24;
        iVar25 = *(int *)(uVar23 + (longlong)(int)uVar15 * 4);
        while ((uVar16 = uVar2, iVar25 != -1 && (uVar16 = uVar15, iVar25 != iVar18))) {
          uVar15 = uVar15 + 1 & uVar24;
          iVar25 = *(int *)(uVar23 + (longlong)(int)uVar15 * 4);
        }
      }
      if ((int)uVar24 < (int)uVar16) {
        plVar28 = (longlong *)plVar28[uVar19];
        uVar6 = FUN_143703a50();
        if (*(uint *)(param_1 + 6) == (*(uint *)((longlong)param_1 + 0x34) & 0x3fffffff)) {
          FUN_14370c460(uVar6,param_1 + 5,4);
        }
        *(int *)(param_1[5] + (longlong)*(int *)(param_1 + 6) * 4) = iVar18;
        *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
        lVar12 = *plVar28;
        if (lVar12 == 0) {
          lVar12 = plVar28[1];
          uVar3 = *(undefined4 *)((longlong)plVar28 + 0x14);
        }
        else {
          uVar3 = (undefined4)plVar28[2];
        }
        local_res20 = FUN_14371f4b0(*(undefined8 *)(param_1[4] + 8),lVar12,uVar3);
        local_res8[0] = *(int *)(param_1 + 0xd);
        lVar17 = (longlong)local_res8[0];
        uVar6 = FUN_143703a50();
        FUN_14372d690(param_1 + 10,uVar6,&local_res20,local_res8);
        FUN_14373c2f0(param_1 + 7,lVar12,lVar17);
        pvVar7 = TlsGetValue(DAT_146b7bf70);
        if (pvVar7 == (LPVOID)0x0) {
          pvVar7 = DAT_146b7bf68;
        }
        lVar17 = (**(code **)(**(longlong **)((longlong)pvVar7 + 0x58) + 8))
                           (*(longlong **)((longlong)pvVar7 + 0x58),0xa8);
        if (lVar17 == 0) {
          lVar17 = 0;
        }
        else {
          lVar17 = FUN_143723c00(lVar17,param_1 + 3);
        }
        uVar6 = FUN_143703a50();
        if (*(uint *)(param_1 + 0xd) == (*(uint *)((longlong)param_1 + 0x6c) & 0x3fffffff)) {
          FUN_14370c460(uVar6,param_1 + 0xc,8);
        }
        *(longlong *)(param_1[0xc] + (longlong)*(int *)(param_1 + 0xd) * 8) = lVar17;
        *(int *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) + 1;
        uVar6 = FUN_1437166c0(lVar17 + 0x18,lVar12);
        FUN_143716660(lVar17 + 8,uVar6);
        *(undefined4 *)(lVar17 + 0x20) = uVar3;
        *(undefined4 *)(lVar17 + 0x10) = uVar3;
        *(undefined1 *)(lVar17 + 0x58) = 1;
        if (-1 < iVar18) {
          do {
            uVar6 = FUN_143703a50();
            if (*(uint *)(lVar17 + 0x70) == (*(uint *)(lVar17 + 0x74) & 0x3fffffff)) {
              FUN_14370c460(uVar6,lVar17 + 0x68,4);
            }
            *(int *)(*(longlong *)(lVar17 + 0x68) + (longlong)*(int *)(lVar17 + 0x70) * 4) =
                 (int)uVar19;
            *(int *)(lVar17 + 0x70) = *(int *)(lVar17 + 0x70) + 1;
            lVar12 = *(longlong *)
                      (*(longlong *)(*(longlong *)(param_1[4] + 8) + 0x88) +
                      (longlong)(int)uVar19 * 8);
            lVar1 = *(longlong *)(lVar12 + 8);
            if (lVar1 == 0) break;
            uVar6 = FUN_14371f4b0(*(longlong *)(param_1[4] + 8),lVar1,*(undefined4 *)(lVar12 + 0x14)
                                 );
            local_res20 = uVar6;
            uVar8 = FUN_143703a50();
            FUN_14372d690(param_1 + 10,uVar8,&local_res20,local_res8);
            local_f0 = 0xffffffffffffffff;
            local_res20 = uVar6;
            puVar9 = (uint *)FUN_14372d420(*(longlong *)(param_1[4] + 8) + 0x98,&local_res20,
                                           &local_f0);
            uVar19 = (ulonglong)*puVar9;
          } while (-1 < (int)*puVar9);
          iVar4 = (int)local_res10;
        }
        uVar22 = (ulonglong)local_120;
        uVar21 = (ulonglong)local_110;
        uVar23 = local_118;
        plVar28 = local_e8;
      }
      local_res18 = local_res18 + 4;
      uVar2 = iVar4 + 1;
      uVar26 = (ulonglong)uVar2;
      local_res10 = CONCAT44(local_res10._4_4_,uVar2);
    } while ((int)uVar2 < (int)uVar22);
  }
  local_f4 = 0x80000000;
  local_100 = (longlong *)0x0;
  local_f8 = 0;
  (**(code **)(**(longlong **)(param_1[4] + 0x10) + 0x48))
            (*(longlong **)(param_1[4] + 0x10),&local_100);
  plVar28 = local_100 + local_f8;
  for (plVar20 = local_100; plVar20 != plVar28; plVar20 = plVar20 + 1) {
    lVar12 = *plVar20;
    puVar10 = (undefined8 *)FUN_143714490(lVar12,1);
    if (puVar10 == (undefined8 *)0x0) {
      bVar14 = 0;
    }
    else {
      bVar14 = (byte)*puVar10;
    }
    lVar17 = 0;
    if ((bVar14 & 0xf) == 7) {
      lVar17 = lVar12;
    }
    if ((lVar17 != 0) &&
       (pbVar11 = (byte *)FUN_143715390(*plVar20,&local_res10), (~*pbVar11 & 1) != 0)) {
      local_d8 = local_c8;
      local_cc = -0x7fffff80;
      local_d0 = 1;
      local_c8[0] = 0;
      uVar6 = FUN_1437151f0(*plVar20);
      lVar12 = FUN_143715320(*plVar20);
      if (lVar12 != 0) {
        uVar6 = FUN_143714fc0(*plVar20,&local_d8,0,0);
        uVar6 = hkReflectUtil::internCopy(uVar6,0xffffffff);
      }
      uVar3 = FUN_143715430(*plVar20);
      local_res18 = FUN_14371f4b0(*(undefined8 *)(param_1[4] + 8),uVar6,uVar3);
      iVar18 = *(int *)(param_1 + 0xd);
      local_res8[0] = iVar18;
      uVar8 = FUN_143703a50();
      iVar4 = FUN_14372aa90(param_1 + 10,uVar8,&local_res18,local_res8);
      if (*(int *)(param_1[10] + 8 + (longlong)iVar4 * 0x10) == iVar18) {
        FUN_14373c2f0(param_1 + 7,uVar6);
        pvVar7 = TlsGetValue(DAT_146b7bf70);
        if (pvVar7 == (LPVOID)0x0) {
          pvVar7 = DAT_146b7bf68;
        }
        plVar13 = (longlong *)
                  (**(code **)(**(longlong **)((longlong)pvVar7 + 0x58) + 8))
                            (*(longlong **)((longlong)pvVar7 + 0x58),0xa8);
        if (plVar13 == (longlong *)0x0) {
          plVar13 = (longlong *)0x0;
        }
        else {
          *plVar13 = (longlong)(param_1 + 3);
          plVar13[1] = 0;
          *(undefined4 *)(plVar13 + 2) = 0xffffffff;
          plVar13[3] = 0;
          *(undefined4 *)(plVar13 + 4) = 0xffffffff;
          plVar13[5] = 0;
          *(undefined4 *)(plVar13 + 6) = 0;
          *(undefined4 *)((longlong)plVar13 + 0x34) = 0x80000000;
          plVar13[7] = 0;
          *(undefined4 *)(plVar13 + 8) = 0;
          *(undefined4 *)((longlong)plVar13 + 0x44) = 0x80000000;
          *(undefined1 *)(plVar13 + 9) = 0;
          *(undefined4 *)((longlong)plVar13 + 0x4c) = 0xffffffff;
          plVar13[10] = 0;
          *(undefined2 *)(plVar13 + 0xb) = 0;
          *(undefined1 *)((longlong)plVar13 + 0x5a) = 0;
          plVar13[0xc] = 0;
          plVar13[0xd] = 0;
          *(undefined4 *)(plVar13 + 0xe) = 0;
          *(undefined4 *)((longlong)plVar13 + 0x74) = 0x80000000;
          plVar13[0xf] = 0;
          *(undefined4 *)(plVar13 + 0x10) = 0;
          *(undefined4 *)((longlong)plVar13 + 0x84) = 0x80000000;
          plVar13[0x11] = 0;
          *(undefined1 *)(plVar13 + 0x12) = 0;
          FUN_143722ea0(plVar13 + 0x13);
        }
        uVar8 = FUN_143703a50();
        if (*(uint *)(param_1 + 0xd) == (*(uint *)((longlong)param_1 + 0x6c) & 0x3fffffff)) {
          FUN_14370c460(uVar8,param_1 + 0xc);
        }
        *(longlong **)(param_1[0xc] + (longlong)*(int *)(param_1 + 0xd) * 8) = plVar13;
        *(int *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) + 1;
        uVar6 = FUN_1437166c0(plVar13 + 3,uVar6);
        FUN_143716660(plVar13 + 1,uVar6);
        *(undefined4 *)(plVar13 + 4) = uVar3;
        *(undefined4 *)(plVar13 + 2) = uVar3;
        *(undefined1 *)(plVar13 + 0xb) = 1;
      }
      local_d0 = 0;
      if (-1 < local_cc) {
        FUN_143702e10(&PTR_vftable_1467f0638,local_d8);
      }
    }
  }
  uVar6 = FUN_143703a50();
  local_f8 = 0;
  if (-1 < (int)local_f4) {
    FUN_143702e10(uVar6,local_100,8,local_f4 & 0x3fffffff);
  }
  local_100 = (longlong *)0x0;
  local_f4 = 0x80000000;
  uVar6 = FUN_143703a50();
  local_110 = 0;
  if (-1 < (int)local_10c) {
    FUN_143702e10(uVar6,local_118,4,local_10c & 0x3fffffff);
  }
  local_118 = 0;
  local_10c = 0x80000000;
  local_120 = 0;
  if (-1 < (int)local_11c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_128,4,local_11c & 0x3fffffff);
  }
  return param_1;
}



// FUNCTION 143723820 FUN_143723820 body=114 status=ok
// SIG undefined FUN_143723820(void)

undefined8 * FUN_143723820(undefined8 *param_1,undefined8 param_2)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_143734b10(param_1 + 2);
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  FUN_143734b10(param_1 + 6);
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  FUN_143734b10(param_1 + 10);
  param_1[0xc] = param_2;
  return param_1;
}



// FUNCTION 1437238a0 FUN_1437238a0 body=623 status=ok
// SIG undefined FUN_1437238a0(void)

undefined8 * FUN_1437238a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 local_res8;
  
  param_1[1] = param_2;
  *param_1 = hkSerialize::VersionBundle::Impl::vftable;
  puVar4 = (undefined8 *)0x0;
  param_1[2] = param_3;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xffffffff;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80000000;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0xffffffff;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x80000000;
  uVar1 = FUN_143703a50();
  FUN_1437365b0(param_1 + 0x1a,uVar1,0x4000);
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0xffffffff;
  hkReflect::Detail::Impl::Impl(param_1 + 0x25);
  param_1[0x27] = param_1;
  param_1[0x25] = hkSerialize::VersionBundle::Impl::PointerImpl::vftable;
  hkReflect::Detail::Impl::Impl(param_1 + 0x28);
  param_1[0x2a] = param_1;
  param_1[0x28] = hkSerialize::VersionBundle::Impl::ArrayImpl::vftable;
  param_1[0x2c] = param_1;
  param_1[0x2b] = hkSerialize::VersionBundle::Impl::FunctionHelper::vftable;
  FUN_14373f890(param_1 + 0x2e,param_1 + 0x1a);
  FUN_14374e530(param_1 + 0x31);
  param_1[0x38] = 0;
  FUN_143723ca0(param_1 + 0x39,param_1);
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0xffffffff;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0xffffffff;
  param_1[0x5d] = 0;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  FUN_14373bf20(param_1 + 0x5f,local_res8);
  FUN_143723820(param_1 + 0x62,param_1);
  FUN_143750180(param_1 + 0x31);
  pvVar2 = TlsGetValue(DAT_146b7bf70);
  if (pvVar2 == (LPVOID)0x0) {
    pvVar2 = DAT_146b7bf68;
  }
  puVar3 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar2 + 0x58),8);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = hkTypeVm::IntAndFloatConversionPass::vftable;
    puVar4 = puVar3;
  }
  FUN_14374e870(param_1 + 0x31,puVar4);
  *(undefined2 *)((longlong)param_1 + 0x189) = 0x100;
  return param_1;
}



// FUNCTION 143723b10 FUN_143723b10 body=78 status=ok
// SIG undefined FUN_143723b10(void)

/* WARNING: Removing unreachable block (ram,0x000143723b30) */
/* WARNING: Removing unreachable block (ram,0x000143723b49) */

undefined8 * FUN_143723b10(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 143723b60 FUN_143723b60 body=156 status=ok
// SIG undefined FUN_143723b60(void)

undefined8 * FUN_143723b60(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  LPVOID pvVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  param_1[1] = 0;
  *param_1 = hkSerialize::VersionBundle::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x378);
  if (lVar2 != 0) {
    uVar3 = FUN_1437238a0(lVar2,param_2,param_3);
    param_1[3] = uVar3;
    return param_1;
  }
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 143723c00 FUN_143723c00 body=157 status=ok
// SIG undefined FUN_143723c00(void)

undefined8 * FUN_143723c00(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xffffffff;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5a) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80000000;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x80000000;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  FUN_143722ea0(param_1 + 0x13);
  return param_1;
}



// FUNCTION 143723ca0 FUN_143723ca0 body=205 status=ok
// SIG undefined FUN_143723ca0(void)

undefined8 * FUN_143723ca0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  
  FUN_143739070();
  *param_1 = hkSerialize::Detail::BundleWithRelocs<hkSerialize::Detail::IndexedBundle>::vftable;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  FUN_143734b10(param_1 + 0x10);
  *param_1 = hkSerialize::WorkBundle::vftable;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x80000000;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0xffffffff;
  param_1[0x16] = param_2;
  uVar1 = FUN_143703a50();
  FUN_1437365b0(param_1 + 0x17,uVar1,0x4000);
  local_res8[0] = 0;
  local_res10 = 0;
  uVar1 = FUN_143703a50();
  FUN_14372d690(param_1 + 0x14,uVar1,&local_res10,local_res8);
  return param_1;
}



// FUNCTION 143723d70 FUN_143723d70 body=55 status=ok
// SIG undefined FUN_143723d70(void)

void FUN_143723d70(undefined8 *param_1)

{
  longlong *plVar1;
  
  if (-1 < *(int *)(param_1 + 1)) {
    plVar1 = (longlong *)FUN_143703a50();
                    /* WARNING: Could not recover jumptable at 0x000143723d9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,*param_1,(*(int *)((longlong)param_1 + 0xc) + 1) * 0x10);
    return;
  }
  return;
}



// FUNCTION 143723db0 FUN_143723db0 body=356 status=ok
// SIG undefined FUN_143723db0(void)

void FUN_143723db0(undefined8 *param_1)

{
  longlong lVar1;
  LPVOID pvVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  *param_1 = hkSerialize::VersionBundle::Impl::CompatTypeReg::vftable;
  param_1[3] = hkSerialize::VersionBundle::Impl::CompatTypeReg::vftable;
  plVar4 = (longlong *)param_1[0xc];
  uVar6 = (ulonglong)((longlong)(plVar4 + *(int *)(param_1 + 0xd)) + (7 - (longlong)plVar4)) >> 3;
  if (plVar4 + *(int *)(param_1 + 0xd) < plVar4) {
    uVar6 = uVar5;
  }
  if (uVar6 != 0) {
    do {
      lVar1 = *plVar4;
      if (lVar1 != 0) {
        FUN_143724350(lVar1);
        pvVar2 = TlsGetValue(DAT_146b7bf70);
        if (pvVar2 == (LPVOID)0x0) {
          pvVar2 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar2 + 0x58),lVar1,0xa8);
      }
      plVar4 = plVar4 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar6);
  }
  FUN_143723f20(param_1 + 0x11);
  FUN_14373bf70(param_1 + 0xe);
  uVar3 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x6c)) {
    FUN_143702e10(uVar3,param_1[0xc],8,*(uint *)((longlong)param_1 + 0x6c) & 0x3fffffff);
  }
  param_1[0xc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  uVar3 = FUN_143703a50();
  FUN_143700a90(param_1 + 10,uVar3);
  FUN_14373bf70(param_1 + 7);
  uVar3 = FUN_143703a50();
  *(undefined4 *)(param_1 + 6) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x34)) {
    FUN_143702e10(uVar3,param_1[5],4,*(uint *)((longlong)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  FUN_14376fbe0(param_1);
  return;
}



// FUNCTION 143723f20 FUN_143723f20 body=208 status=ok
// SIG undefined FUN_143723f20(void)

void FUN_143723f20(undefined8 *param_1)

{
  undefined8 uVar1;
  
  thunk_FUN_143734820(param_1 + 10);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 9) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x4c)) {
    FUN_143702e10(uVar1,param_1[8],0x20,*(uint *)((longlong)param_1 + 0x4c) & 0x3fffffff);
  }
  param_1[8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  thunk_FUN_143734820(param_1 + 6);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 5) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) {
    FUN_143702e10(uVar1,param_1[4],0x20,*(uint *)((longlong)param_1 + 0x2c) & 0x3fffffff);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  thunk_FUN_143734820(param_1 + 2);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    FUN_143702e10(uVar1,*param_1,0x20,*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff);
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  return;
}



// FUNCTION 143723ff0 FUN_143723ff0 body=799 status=ok
// SIG undefined FUN_143723ff0(void)

void FUN_143723ff0(undefined8 *param_1)

{
  longlong lVar1;
  LPVOID pvVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  *param_1 = hkSerialize::VersionBundle::Impl::vftable;
  plVar5 = (longlong *)param_1[0x18];
  uVar6 = (ulonglong)((longlong)(plVar5 + *(int *)(param_1 + 0x19)) + (7 - (longlong)plVar5)) >> 3;
  if (plVar5 + *(int *)(param_1 + 0x19) < plVar5) {
    uVar6 = uVar4;
  }
  if (uVar6 != 0) {
    do {
      lVar1 = *plVar5;
      if (lVar1 != 0) {
        FUN_143724350(lVar1);
        pvVar2 = TlsGetValue(DAT_146b7bf70);
        if (pvVar2 == (LPVOID)0x0) {
          pvVar2 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar2 + 0x58),lVar1,0xa8);
      }
      plVar5 = plVar5 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar6);
  }
  FUN_143723f20(param_1 + 0x62);
  FUN_14373bf70(param_1 + 0x5f);
  if (param_1[0x5d] != 0) {
    FUN_14370c150();
  }
  uVar3 = FUN_143703a50();
  FUN_143700a90(param_1 + 0x5b,uVar3);
  uVar3 = FUN_143703a50();
  FUN_143700a90(param_1 + 0x59,uVar3);
  FUN_143724550(param_1 + 0x39);
  FUN_14374e570(param_1 + 0x31);
  FUN_143732980(param_1 + 0x2e);
  param_1[0x28] = hkSerialize::VersionBundle::Impl::ArrayImpl::vftable;
  FUN_143732980();
  FUN_143732980(param_1 + 0x25);
  uVar3 = FUN_143703a50();
  FUN_143700a90(param_1 + 0x23,uVar3);
  FUN_143736600(param_1 + 0x1a);
  uVar3 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xcc)) {
    FUN_143702e10(uVar3,param_1[0x18],8,*(uint *)((longlong)param_1 + 0xcc) & 0x3fffffff);
  }
  param_1[0x18] = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x80000000;
  uVar3 = FUN_143703a50();
  FUN_143700a90(param_1 + 0x16,uVar3);
  uVar3 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xa4)) {
    FUN_143702e10(uVar3,param_1[0x13],8,*(uint *)((longlong)param_1 + 0xa4) & 0x3fffffff);
  }
  param_1[0x13] = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x80000000;
  uVar3 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x8c)) {
    FUN_143702e10(uVar3,param_1[0x10],8,*(uint *)((longlong)param_1 + 0x8c) & 0x3fffffff);
  }
  param_1[0x10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  uVar3 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x74)) {
    FUN_143702e10(uVar3,param_1[0xd],8,*(uint *)((longlong)param_1 + 0x74) & 0x3fffffff);
  }
  param_1[0xd] = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80000000;
  uVar3 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x5c)) {
    FUN_143702e10(uVar3,param_1[10],8,*(uint *)((longlong)param_1 + 0x5c) & 0x3fffffff);
  }
  param_1[10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  uVar3 = FUN_143703a50();
  *(undefined4 *)(param_1 + 8) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x44)) {
    FUN_143702e10(uVar3,param_1[7],8,*(uint *)((longlong)param_1 + 0x44) & 0x3fffffff);
  }
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  uVar3 = FUN_143703a50();
  FUN_143700a90(param_1 + 5,uVar3);
  uVar3 = FUN_143703a50();
  FUN_143700a90(param_1 + 3,uVar3);
  return;
}



// FUNCTION 143724310 FUN_143724310 body=52 status=ok
// SIG undefined FUN_143724310(void)

void FUN_143724310(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = hkSerialize::VersionBundle::vftable;
  plVar1 = (longlong *)param_1[3];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,1);
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 143724350 FUN_143724350 body=508 status=ok
// SIG undefined FUN_143724350(void)

void FUN_143724350(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  FUN_143723d70(param_1 + 0x98);
  uVar2 = FUN_143703a50();
  iVar4 = *(int *)(param_1 + 0x80) + -1;
  lVar5 = (longlong)iVar4;
  if (-1 < iVar4) {
    plVar6 = (longlong *)(*(longlong *)(param_1 + 0x78) + lVar5 * 0x18);
    do {
      FUN_143716650(plVar6 + 2);
      lVar7 = *plVar6;
      if (lVar7 != 0) {
        FUN_1437802f0(lVar7);
        pvVar3 = TlsGetValue(DAT_146b7bf70);
        if (pvVar3 == (LPVOID)0x0) {
          pvVar3 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar3 + 0x58),lVar7,0x28);
      }
      plVar6 = plVar6 + -3;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x84)) {
    FUN_143702e10(uVar2,*(undefined8 *)(param_1 + 0x78),0x18,*(uint *)(param_1 + 0x84) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0x80000000;
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x74)) {
    FUN_143702e10(uVar2,*(undefined8 *)(param_1 + 0x68),4,*(uint *)(param_1 + 0x74) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0x80000000;
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x44)) {
    FUN_143702e10(uVar2,*(undefined8 *)(param_1 + 0x38),8,*(uint *)(param_1 + 0x44) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  uVar2 = FUN_143703a50();
  lVar5 = *(longlong *)(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + 0x30) + -1;
  lVar7 = (longlong)iVar4;
  if (-1 < iVar4) {
    do {
      lVar1 = *(longlong *)(lVar5 + lVar7 * 8);
      if (lVar1 != 0) {
        FUN_1437802f0(lVar1);
        pvVar3 = TlsGetValue(DAT_146b7bf70);
        if (pvVar3 == (LPVOID)0x0) {
          pvVar3 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar3 + 0x58),lVar1,0x28);
      }
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x34)) {
    FUN_143702e10(uVar2,*(undefined8 *)(param_1 + 0x28),8,*(uint *)(param_1 + 0x34) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  FUN_143716650(param_1 + 0x18);
  FUN_143716650(param_1 + 8);
  return;
}



// FUNCTION 143724550 FUN_143724550 body=139 status=ok
// SIG undefined FUN_143724550(void)

void FUN_143724550(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_143736600(param_1 + 0xb8);
  uVar1 = FUN_143703a50();
  FUN_143700a90(param_1 + 0xa0,uVar1);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x9c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x90),1,*(uint *)(param_1 + 0x9c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0x80000000;
  FUN_1436fbfd0(param_1 + 0x70);
  FUN_1436fc1a0(param_1);
  return;
}



// FUNCTION 1437245e0 FUN_1437245e0 body=179 status=ok
// SIG undefined FUN_1437245e0(void)

longlong FUN_1437245e0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar4 = param_1[2];
  lVar1 = param_1[1];
  if ((char)param_1[3] == '\0') {
    plVar2 = (longlong *)(**(code **)**(undefined8 **)(*param_1 + 0x60))();
    lVar3 = (**(code **)(*plVar2 + 8))(plVar2,0x70);
    if (lVar3 != 0) {
      lVar4 = FUN_143736ca0(lVar3,lVar1,lVar4,0,0x1000);
      goto LAB_14372466f;
    }
  }
  else {
    plVar2 = (longlong *)(**(code **)**(undefined8 **)(*param_1 + 0x60))();
    lVar3 = (**(code **)(*plVar2 + 8))(plVar2,0x70);
    if (lVar3 != 0) {
      lVar4 = FUN_143736ce0(lVar3,lVar1,lVar4,0x1000);
      goto LAB_14372466f;
    }
  }
  lVar4 = 0;
LAB_14372466f:
  uVar5 = (**(code **)(**(longlong **)(*param_1 + 0x60) + 0x30))();
  *(undefined8 *)(lVar4 + 0x20) = uVar5;
  return lVar4;
}



// FUNCTION 1437246a0 FUN_1437246a0 body=837 status=ok
// SIG undefined FUN_1437246a0(void)

undefined8 FUN_1437246a0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  uint uVar12;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar13;
  undefined8 in_stack_ffffffffffffffa8;
  undefined8 in_stack_ffffffffffffffb0;
  undefined4 uVar14;
  longlong local_38;
  longlong lStack_30;
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  if (*(int *)((longlong)param_1 + 0x1c) == 0) {
    lVar1 = param_1[2];
    if ((char)param_1[3] == '\0') {
      if ((int)(param_1[5] - param_1[4] >> 4) < 1) {
        uVar10 = (**(code **)(**(longlong **)(*param_1 + 0x60) + 0x20))();
        lVar2 = param_1[1];
        plVar8 = (longlong *)(**(code **)**(undefined8 **)(*param_1 + 0x60))();
        lVar9 = (**(code **)(*plVar8 + 8))(plVar8,0x40);
        if (lVar9 != 0) {
          uVar10 = FUN_1437369d0(lVar9,lVar2,0x18,8,uVar10,lVar1,CONCAT44(uVar7,0x1000));
          return uVar10;
        }
      }
      else {
        lVar9 = param_1[4];
        lVar3 = param_1[5];
        uVar10 = (**(code **)(**(longlong **)(*param_1 + 0x60) + 0x20))();
        lVar2 = param_1[1];
        plVar8 = (longlong *)(**(code **)**(undefined8 **)(*param_1 + 0x60))();
        lVar11 = (**(code **)(*plVar8 + 8))(plVar8,0x98);
        if (lVar11 != 0) {
          local_38 = lVar9;
          lStack_30 = lVar3;
          uVar10 = FUN_143736a50(lVar11,lVar2,0x18,8,uVar10,lVar1,CONCAT44(uVar7,0x1000),&local_38);
          return uVar10;
        }
      }
    }
    else {
      uVar10 = (**(code **)(**(longlong **)(*param_1 + 0x60) + 0x20))();
      lVar2 = param_1[1];
      plVar8 = (longlong *)(**(code **)**(undefined8 **)(*param_1 + 0x60))();
      lVar9 = (**(code **)(*plVar8 + 8))(plVar8,0x78);
      if (lVar9 != 0) {
        uVar10 = FUN_143736b30(lVar9,lVar2,0x18,8,uVar10,lVar1,CONCAT44(uVar7,0x1000));
        return uVar10;
      }
    }
    return 0;
  }
  iVar4 = FUN_1437152f0(param_1[1]);
  iVar5 = FUN_143714d40(param_1[1]);
  iVar6 = FUN_143714d40(param_1[1]);
  lVar1 = param_1[2];
  lVar2 = param_1[1];
  uVar12 = ~(iVar6 - 1U) & iVar4 + -1 + iVar5;
  if ((char)param_1[3] == '\0') {
    if ((int)(param_1[5] - param_1[4] >> 4) < 1) {
      uVar7 = FUN_143714d40(lVar2);
      iVar4 = *(int *)((longlong)param_1 + 0x1c);
      lVar2 = param_1[1];
      plVar8 = (longlong *)(**(code **)**(undefined8 **)(*param_1 + 0x60))();
      lVar9 = (**(code **)(*plVar8 + 8))(plVar8,0x40);
      if (lVar9 != 0) {
        uVar10 = FUN_143736fb0(lVar9,lVar2,iVar4,iVar4 * uVar12,CONCAT44(uVar13,uVar7),
                               &DAT_146b829b0,lVar1,CONCAT44(uVar14,0x1000));
        return uVar10;
      }
    }
    else {
      lVar9 = param_1[4];
      lVar3 = param_1[5];
      uVar7 = FUN_143714d40(lVar2);
      iVar4 = *(int *)((longlong)param_1 + 0x1c);
      lVar2 = param_1[1];
      plVar8 = (longlong *)(**(code **)**(undefined8 **)(*param_1 + 0x60))();
      lVar11 = (**(code **)(*plVar8 + 8))(plVar8,0x98);
      if (lVar11 != 0) {
        local_38 = lVar9;
        lStack_30 = lVar3;
        uVar10 = FUN_143736ea0(lVar11,lVar2,iVar4,iVar4 * uVar12,CONCAT44(uVar13,uVar7),
                               &DAT_146b829b0,lVar1,CONCAT44(uVar14,0x1000),&local_38);
        return uVar10;
      }
    }
  }
  else {
    uVar7 = FUN_143714d40(lVar2);
    iVar4 = *(int *)((longlong)param_1 + 0x1c);
    lVar2 = param_1[1];
    plVar8 = (longlong *)(**(code **)**(undefined8 **)(*param_1 + 0x60))();
    lVar9 = (**(code **)(*plVar8 + 8))(plVar8,0x68);
    if (lVar9 != 0) {
      uVar10 = FUN_143736dd0(lVar9,lVar2,iVar4,iVar4 * uVar12,CONCAT44(uVar13,uVar7),&DAT_146b829b0,
                             lVar1,CONCAT44(uVar14,0x1000));
      return uVar10;
    }
  }
  return 0;
}



// FUNCTION 1437249f0 FUN_1437249f0 body=213 status=ok
// SIG undefined FUN_1437249f0(void)

void FUN_1437249f0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_28;
  longlong lStack_20;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  if ((int)(param_1[4] - param_1[3] >> 4) == 0) {
    plVar4 = (longlong *)(**(code **)**(undefined8 **)(*param_1 + 0x60))();
    lVar6 = (**(code **)(*plVar4 + 8))(plVar4,0x20);
    if (lVar6 != 0) {
      FUN_143736c00(lVar6,lVar2,lVar1,0x1000);
      return;
    }
    return;
  }
  lVar6 = param_1[3];
  lVar3 = param_1[4];
  plVar4 = (longlong *)(**(code **)**(undefined8 **)(*param_1 + 0x60))();
  lVar5 = (**(code **)(*plVar4 + 8))(plVar4,0x78);
  if (lVar5 != 0) {
    local_28 = lVar6;
    lStack_20 = lVar3;
    FUN_143736c20(lVar5,lVar2,lVar1,0x1000,&local_28);
    return;
  }
  return;
}



// FUNCTION 143724ad0 FUN_143724ad0 body=125 status=ok
// SIG undefined FUN_143724ad0(void)

undefined8 * FUN_143724ad0(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkSerialize::VersionBundle::Impl::ArrayImpl::vftable;
  FUN_143732980();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x18);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 143724b50 FUN_143724b50 body=139 status=ok
// SIG undefined FUN_143724b50(void)

longlong FUN_143724b50(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143723db0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0xf0;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xf0);
    }
  }
  return param_1;
}



// FUNCTION 143724be0 FUN_143724be0 body=120 status=ok
// SIG undefined FUN_143724be0(void)

longlong FUN_143724be0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_143723ff0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x378);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x378);
    }
  }
  return param_1;
}



// FUNCTION 143724c60 FUN_143724c60 body=139 status=ok
// SIG undefined FUN_143724c60(void)

longlong FUN_143724c60(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143724310();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x20;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
    }
  }
  return param_1;
}



// FUNCTION 143724cf0 FUN_143724cf0 body=120 status=ok
// SIG undefined FUN_143724cf0(void)

longlong FUN_143724cf0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_143724550();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x100);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x100);
    }
  }
  return param_1;
}



// FUNCTION 143724d70 FUN_143724d70 body=200 status=ok
// SIG undefined FUN_143724d70(void)

void FUN_143724d70(longlong *param_1,undefined8 param_2,longlong *param_3,int *param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  
  if (*(int *)((longlong)param_1 + 0xc) < (int)param_1[1] * 2) {
    FUN_14372fed0(param_1,local_res8,param_2,*(int *)((longlong)param_1 + 0xc) * 2 + 2);
  }
  *param_4 = 1;
  lVar1 = *param_3;
  iVar3 = (int)((ulonglong)lVar1 >> 0x20);
  uVar4 = iVar3 * -0x61c8864f;
  uVar6 = (int)lVar1 * -0x61c8864f;
  uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | iVar3 * -0x4f000000;
  uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | (int)lVar1 * -0x4f000000
  ;
  uVar4 = (uVar4 * 0x40 + uVar6 + (uVar6 >> 2) + 0x9e3779b9 ^ uVar4) &
          *(uint *)((longlong)param_1 + 0xc);
  plVar5 = (longlong *)((ulonglong)uVar4 * 0x10 + *param_1);
  lVar2 = *plVar5;
  do {
    if (lVar2 == -1) {
LAB_143724e23:
      *(int *)(param_1 + 1) = (int)param_1[1] + *param_4;
      return;
    }
    if (*plVar5 == lVar1) {
      *param_4 = 0;
      goto LAB_143724e23;
    }
    uVar4 = uVar4 + 1 & *(uint *)((longlong)param_1 + 0xc);
    plVar5 = (longlong *)((ulonglong)uVar4 * 0x10 + *param_1);
    lVar2 = *plVar5;
  } while( true );
}



// FUNCTION 143724e40 FUN_143724e40 body=222 status=ok
// SIG undefined FUN_143724e40(void)

void FUN_143724e40(longlong param_1,longlong param_2)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  ulonglong uVar5;
  
  uVar2 = 0;
  uVar4 = 0;
  if (-1 < *(int *)(param_2 + 0xa4)) {
    piVar1 = *(int **)(param_2 + 0x98);
    uVar5 = uVar2;
    do {
      uVar4 = (uint)uVar5;
      if (*piVar1 != -1) break;
      uVar4 = uVar4 + 1;
      uVar5 = (ulonglong)uVar4;
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 4;
    } while ((longlong)uVar2 <= (longlong)*(int *)(param_2 + 0xa4));
  }
  if ((int)uVar4 <= *(int *)(param_2 + 0xa4)) {
    do {
      lVar3 = (longlong)(int)uVar4 * 0x10 + *(longlong *)(param_2 + 0x98);
      local_14 = *(undefined4 *)(lVar3 + 8);
      local_18 = *(undefined4 *)(lVar3 + 4);
      local_10 = *(undefined4 *)(lVar3 + 0xc);
      FUN_14372d740(param_1 + 0x98,local_18,&local_18);
      uVar4 = uVar4 + 1;
      if ((int)uVar4 <= *(int *)(param_2 + 0xa4)) {
        lVar3 = (longlong)(int)uVar4;
        piVar1 = (int *)(lVar3 * 0x10 + *(longlong *)(param_2 + 0x98));
        do {
          if (*piVar1 != -1) break;
          uVar4 = uVar4 + 1;
          lVar3 = lVar3 + 1;
          piVar1 = piVar1 + 4;
        } while (lVar3 <= *(int *)(param_2 + 0xa4));
      }
    } while ((int)uVar4 <= *(int *)(param_2 + 0xa4));
  }
  return;
}



// FUNCTION 143724f20 FUN_143724f20 body=99 status=ok
// SIG undefined FUN_143724f20(void)

void FUN_143724f20(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x50);
  lVar1 = param_1;
  while (lVar3 != 0) {
    if (lVar1 == param_2) {
      return;
    }
    lVar1 = *(longlong *)(lVar1 + 0x50);
    lVar3 = *(longlong *)(lVar1 + 0x50);
  }
  if (lVar1 != param_2) {
    lVar3 = param_2;
    if (*(longlong *)(param_2 + 0x50) != 0) {
      while (lVar2 = *(longlong *)(lVar3 + 0x50), lVar2 != param_1) {
        lVar3 = lVar2;
        if (*(longlong *)(lVar2 + 0x50) == 0) {
          *(longlong *)(lVar1 + 0x50) = param_2;
          return;
        }
      }
      *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)(*(longlong *)(lVar3 + 0x50) + 0x50);
    }
    *(longlong *)(lVar1 + 0x50) = param_2;
  }
  return;
}



// FUNCTION 143724f90 FUN_143724f90 body=631 status=ok
// SIG undefined FUN_143724f90(void)

void FUN_143724f90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 uVar11;
  LPVOID pvVar12;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined **local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined1 local_68 [64];
  
  local_78 = (longlong *)*param_1;
  local_88 = hkSerialize::VersionedTypeBuilder::DescriptionCB::vftable;
  local_res18 = param_3;
  local_res20 = param_4;
  local_80 = param_2;
  local_70 = (**(code **)(*local_78 + 0x40))();
  lVar10 = FUN_143780a30(&local_88,local_res18,local_res20);
  if (lVar10 == 0) {
    if (1 < DAT_146b823d8) {
      FUN_14373a730(local_68,&DAT_146b823d0,2);
      lVar10 = FUN_14373bbd0(local_68,"Versioning was unable to create field {} in type {} ({})",
                             &DAT_145b8f868,&local_res18,param_1 + 1,&local_res20,0);
      *(char **)(lVar10 + 0x20) = "Serialize\\Version\\hkVersionBundle.cpp";
      *(undefined8 *)(lVar10 + 0x28) = 0x319;
      FUN_14373a950(local_68);
    }
    return;
  }
  if (-1 < param_5) {
    uVar11 = FUN_143703a50();
    iVar5 = *(int *)(param_1 + 6);
    uVar9 = *(uint *)((longlong)param_1 + 0x34) & 0x3fffffff;
    iVar1 = iVar5 + 1;
    if (((int)uVar9 < iVar1) && ((int)uVar9 < iVar1)) {
      iVar8 = iVar1;
      if (iVar1 < (int)(uVar9 * 2)) {
        iVar8 = uVar9 * 2;
      }
      FUN_14370c310(uVar11,param_1 + 5,iVar8,8);
    }
    lVar4 = (longlong)param_5 * 8;
    FUN_143732890(param_1[5] + lVar4 + 8,param_1[5] + lVar4,(longlong)(iVar5 - param_5) << 3);
    if ((undefined8 *)(param_1[5] + lVar4) != (undefined8 *)0x0) {
      *(undefined8 *)(param_1[5] + lVar4) = 0;
    }
    *(int *)(param_1 + 6) = iVar1;
    lVar6 = param_1[5];
    lVar7 = *(longlong *)(lVar6 + lVar4);
    if (lVar7 != 0) {
      FUN_1437802f0(lVar7);
      pvVar12 = TlsGetValue(DAT_146b7bf70);
      if (pvVar12 == (LPVOID)0x0) {
        pvVar12 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar12 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar12 + 0x58),lVar7,0x28);
    }
    *(longlong *)(lVar6 + lVar4) = lVar10;
    return;
  }
  uVar11 = FUN_143703a50();
  if (*(uint *)(param_1 + 6) == (*(uint *)((longlong)param_1 + 0x34) & 0x3fffffff)) {
    FUN_14370c460(uVar11,param_1 + 5,8);
  }
  puVar2 = (undefined8 *)(param_1[5] + (longlong)*(int *)(param_1 + 6) * 8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
  }
  plVar3 = (longlong *)(param_1[5] + (longlong)*(int *)(param_1 + 6) * 8);
  *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    FUN_1437802f0(lVar4);
    pvVar12 = TlsGetValue(DAT_146b7bf70);
    if (pvVar12 == (LPVOID)0x0) {
      pvVar12 = DAT_146b7bf68;
    }
    (**(code **)(**(longlong **)((longlong)pvVar12 + 0x58) + 0x10))
              (*(longlong **)((longlong)pvVar12 + 0x58),lVar4,0x28);
  }
  *plVar3 = lVar10;
  return;
}


