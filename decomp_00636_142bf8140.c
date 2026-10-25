// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142bf8140 FNavLocalGridData body=425 status=ok
// SIG undefined FNavLocalGridData(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FNavLocalGridData::FNavLocalGridData(undefined8 *param_1,float *param_2,float param_3)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 local_60;
  float local_58;
  undefined8 local_54;
  float local_4c;
  undefined1 local_48;
  
  *param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = _DAT_1468b5d90;
  uVar1 = DAT_1468b5d98;
  *(undefined4 *)((longlong)param_1 + 0x1c) = DAT_1468b5d98;
  param_1[1] = *(undefined8 *)((longlong)param_1 + 0x14);
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 5) = 0x7f7fffff;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x7f7fffff;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  fVar4 = 1.0 / DAT_1466910cc;
  local_48 = 1;
  fVar3 = (float)((int)ROUND(fVar4 * *param_2 + fVar4 * *param_2 + 0.5) >> 1) * DAT_1466910cc;
  fVar2 = (float)((int)ROUND(fVar4 * param_2[1] + fVar4 * param_2[1] + 0.5) >> 1) * DAT_1466910cc;
  local_60 = CONCAT44(fVar2 - param_3,fVar3 - param_3);
  local_58 = (float)((int)ROUND(fVar4 * param_2[2] + fVar4 * param_2[2] + 0.5) >> 1) * DAT_1466910cc
  ;
  local_54 = CONCAT44(fVar2 + param_3,fVar3 + param_3);
  local_4c = local_58;
  TSimpleCellGrid<unsigned_char,255>::Init(param_1,param_2,&local_60);
  *(int *)(param_1 + 0xe) = (int)(fVar4 * *(float *)((longlong)param_1 + 0x24));
  *(int *)(param_1 + 0xf) = (int)(fVar4 * *(float *)((longlong)param_1 + 0x2c));
  *(int *)((longlong)param_1 + 0x74) = (int)(fVar4 * *(float *)(param_1 + 5));
  return param_1;
}



// FUNCTION 142bf82f0 FNavLocalGridData body=828 status=ok
// SIG undefined FNavLocalGridData(void)

undefined8 * FNavLocalGridData::FNavLocalGridData(undefined8 *param_1,longlong *param_2)

{
  float fVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  float *pfVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined8 local_48;
  float local_40;
  
  uVar12 = 0;
  *param_1 = 0;
  *(ulonglong *)((longlong)param_1 + 0x14) = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  fVar19 = DAT_1468b5d98;
  *(float *)((longlong)param_1 + 0x1c) = DAT_1468b5d98;
  param_1[1] = *(undefined8 *)((longlong)param_1 + 0x14);
  *(float *)(param_1 + 2) = fVar19;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 5) = 0x7f7fffff;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x7f7fffff;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  fVar19 = DAT_1466910cc;
  iVar5 = (int)param_2[1];
  lVar4 = (longlong)iVar5;
  if (iVar5 == 0) {
    return param_1;
  }
  cVar3 = '\0';
  fStack_4c = DAT_1468b5d90;
  local_48 = CONCAT44(DAT_1468b5d98,DAT_1468b5d94);
  local_58 = DAT_1468b5d90;
  fStack_54 = DAT_1468b5d94;
  fStack_50 = DAT_1468b5d98;
  local_40 = (float)((uint)local_40 & 0xffffff00);
  if (0 < iVar5) {
    pfVar6 = (float *)(*param_2 + 0x10);
    fVar18 = DAT_1468b5d90;
    fVar20 = DAT_1468b5d94;
    fVar17 = DAT_1468b5d98;
    fVar21 = DAT_1468b5d94;
    fVar22 = DAT_1468b5d98;
    fVar16 = DAT_1468b5d90;
    do {
      if (cVar3 == '\0') {
        if (*(char *)(pfVar6 + 4) != '\0') {
          local_48 = *(undefined8 *)(pfVar6 + 2);
          fVar18 = pfVar6[-2];
          fVar21 = pfVar6[-1];
          fVar22 = *pfVar6;
          fVar16 = pfVar6[1];
          local_40 = pfVar6[4];
          cVar3 = SUB41(local_40,0);
          fVar17 = (float)((ulonglong)local_48 >> 0x20);
          fVar20 = (float)local_48;
          local_58 = fVar18;
          fStack_54 = fVar21;
          fStack_50 = fVar22;
          fStack_4c = fVar16;
        }
      }
      else if (*(char *)(pfVar6 + 4) != '\0') {
        fVar1 = pfVar6[-2];
        if (fVar1 < fVar18) {
          fVar18 = fVar1;
          local_58 = fVar1;
        }
        fVar1 = pfVar6[-1];
        if (fVar1 < fVar21) {
          fVar21 = fVar1;
          fStack_54 = fVar1;
        }
        fVar1 = *pfVar6;
        if (fVar1 < fVar22) {
          fVar22 = fVar1;
          fStack_50 = fVar1;
        }
        fVar1 = pfVar6[1];
        if (fVar16 < fVar1) {
          fVar16 = fVar1;
          fStack_4c = fVar1;
        }
        fVar1 = pfVar6[2];
        if (fVar20 < fVar1) {
          local_48 = CONCAT44(local_48._4_4_,fVar1);
          fVar20 = fVar1;
        }
        fVar1 = pfVar6[3];
        if (fVar17 < fVar1) {
          local_48 = CONCAT44(fVar1,(float)local_48);
          fVar17 = fVar1;
        }
      }
      pfVar6 = pfVar6 + 0x20;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  TSimpleCellGrid<unsigned_char,255>::Init(param_1,DAT_1466910cc,&local_58);
  fVar19 = 1.0 / fVar19;
  *(int *)(param_1 + 0xe) = (int)(fVar19 * *(float *)((longlong)param_1 + 0x24));
  *(int *)(param_1 + 0xf) = (int)(fVar19 * *(float *)((longlong)param_1 + 0x2c));
  *(int *)((longlong)param_1 + 0x74) = (int)(fVar19 * *(float *)(param_1 + 5));
  uVar9 = uVar12;
  uVar13 = uVar12;
  if (*(int *)(param_1 + 10) < 1) {
    return param_1;
  }
  do {
    bVar14 = false;
    uVar7 = uVar12;
    uVar11 = uVar12;
    if (0 < (longlong)(int)param_2[1]) {
      do {
        bVar15 = !bVar14;
        if (!bVar15) goto LAB_142bf85c2;
        lVar4 = *param_2;
        iVar10 = (*(int *)(param_1 + 0xe) + (int)(uVar9 / *(uint *)(param_1 + 8))) -
                 *(int *)(uVar7 + 0x70 + lVar4);
        iVar5 = (*(int *)((longlong)param_1 + 0x74) +
                (int)(uVar9 % (ulonglong)*(uint *)(param_1 + 8))) - *(int *)(uVar7 + 0x74 + lVar4);
        if ((((-1 < iVar10) && (iVar10 < *(int *)(uVar7 + 0x3c + lVar4))) && (-1 < iVar5)) &&
           ((iVar2 = *(int *)(uVar7 + 0x40 + lVar4), iVar5 < iVar2 &&
            (iVar5 = iVar2 * iVar10 + iVar5, iVar5 != -1)))) {
          bVar14 = *(char *)((longlong)iVar5 + *(longlong *)(uVar7 + 0x48 + lVar4)) != '\0';
        }
        uVar11 = uVar11 + 1;
        uVar7 = uVar7 + 0x80;
      } while ((longlong)uVar11 < (longlong)(int)param_2[1]);
    }
    bVar15 = !bVar14;
LAB_142bf85c2:
    uVar8 = (int)uVar9 + 1;
    *(bool *)(uVar13 + param_1[9]) = !bVar15;
    uVar9 = (ulonglong)uVar8;
    uVar13 = uVar13 + 1;
    if (*(int *)(param_1 + 10) <= (int)uVar8) {
      return param_1;
    }
  } while( true );
}



// FUNCTION 142bf8630 FPathFollowingResult body=28 status=ok
// SIG undefined FPathFollowingResult(void)

ushort * FPathFollowingResult::FPathFollowingResult(ushort *param_1,int param_2,ushort param_3)

{
  *(char *)(param_1 + 1) = (char)param_2;
  *param_1 = (&DAT_1466911c0)[param_2] | param_3;
  return param_1;
}



// FUNCTION 142bf8650 FUN_142bf8650 body=155 status=ok
// SIG undefined FUN_142bf8650(void)

undefined8 * FUN_142bf8650(undefined8 *param_1)

{
  FUN_142bf9700();
  *param_1 = &PTR_FUN_145809338;
  param_1[5] = &PTR_LAB_1458098c8;
  param_1[0x2f] = &PTR_LAB_1458098f8;
  param_1[0x30] = &PTR_LAB_145809928;
  param_1[0x6a] = &PTR_LAB_145809958;
  *(undefined2 *)(param_1 + 0x73) = 0;
  *(uint *)((longlong)param_1 + 0x37c) = *(uint *)((longlong)param_1 + 0x37c) & 0xfffff68e;
  *(uint *)((longlong)param_1 + 0x37c) = *(uint *)((longlong)param_1 + 0x37c) | 0x2d682;
  *(undefined4 *)(param_1 + 0x70) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 900) = 0x43c80000;
  *(undefined4 *)(param_1 + 0x71) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 0x38c) = 0x3f800000;
  return param_1;
}



// FUNCTION 142bf86f0 FUN_142bf86f0 body=591 status=ok
// SIG undefined FUN_142bf86f0(void)

undefined8 * FUN_142bf86f0(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_141781840();
  *param_1 = &PTR_FUN_1458099a0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 10) = 0x32;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x42c80000;
  *(uint *)(param_1 + 0xe) = *(uint *)(param_1 + 0xe) & 0xffffffea | 10;
  *(undefined4 *)(param_1 + 0xb) = 6;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 8;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 100) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xd) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  iVar1 = *(int *)(param_1 + 7);
  *(int *)(param_1 + 7) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x3c) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 6,iVar1);
  }
  lVar2 = param_1[6];
  lVar3 = (longlong)iVar1 * 0x1c;
  *(undefined8 *)(lVar3 + lVar2) = 0x400000003f000000;
  ((undefined8 *)(lVar3 + lVar2))[1] = 0x3f4000003f400000;
  *(undefined8 *)(lVar3 + 0x10 + lVar2) = 0x4020000040200000;
  *(undefined4 *)(lVar3 + 0x18 + lVar2) = 0x10205ff;
  iVar1 = *(int *)(param_1 + 7);
  *(int *)(param_1 + 7) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x3c) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 6,iVar1);
  }
  lVar2 = param_1[6];
  lVar3 = (longlong)iVar1 * 0x1c;
  *(undefined8 *)(lVar3 + lVar2) = 0x400000003f000000;
  ((undefined8 *)(lVar3 + lVar2))[1] = 0x3f4000003f400000;
  *(undefined8 *)(lVar3 + 0x10 + lVar2) = 0x4020000040200000;
  *(undefined4 *)(lVar3 + 0x18 + lVar2) = 0x20205ff;
  iVar1 = *(int *)(param_1 + 7);
  *(int *)(param_1 + 7) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x3c) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 6,iVar1);
  }
  lVar2 = param_1[6];
  lVar3 = (longlong)iVar1 * 0x1c;
  *(undefined8 *)(lVar3 + lVar2) = 0x400000003f000000;
  ((undefined8 *)(lVar3 + lVar2))[1] = 0x3f4000003f400000;
  *(undefined8 *)(lVar3 + 0x10 + lVar2) = 0x4020000040200000;
  *(undefined4 *)(lVar3 + 0x18 + lVar2) = 0x30207ff;
  iVar1 = *(int *)(param_1 + 7);
  *(int *)(param_1 + 7) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x3c) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 6,iVar1);
  }
  lVar2 = param_1[6];
  lVar3 = (longlong)iVar1 * 0x1c;
  *(undefined8 *)(lVar3 + lVar2) = 0x400000003f000000;
  ((undefined8 *)(lVar3 + lVar2))[1] = 0x3f4000003f400000;
  *(undefined8 *)(lVar3 + 0x10 + lVar2) = 0x4020000040200000;
  *(undefined4 *)(lVar3 + 0x18 + lVar2) = 0x30307ff;
  return param_1;
}



// FUNCTION 142bf8940 FUN_142bf8940 body=60 status=ok
// SIG undefined FUN_142bf8940(void)

undefined8 * FUN_142bf8940(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142bd6050();
  *param_1 = &PTR_FUN_145804c10;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  uVar1 = UEnvQueryItemType_Point::GetPrivateStaticClass();
  param_1[10] = uVar1;
  *(uint *)(param_1 + 0xe) = *(uint *)(param_1 + 0xe) | 2;
  return param_1;
}



// FUNCTION 142bf8980 FUN_142bf8980 body=151 status=ok
// SIG undefined FUN_142bf8980(void)

undefined8 * FUN_142bf8980(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142bf8dc0();
  *param_1 = &PTR_FUN_145805418;
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x13);
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x19);
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x1f);
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x25);
  param_1[0x2b] = 0;
  uVar1 = UEnvQueryContext_Querier::GetPrivateStaticClass();
  param_1[0x2b] = uVar1;
  *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) & 0xfe;
  *(undefined4 *)(param_1 + 0x18) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x1e) = 0x42b40000;
  *(undefined4 *)(param_1 + 0x24) = 0x41200000;
  *(undefined4 *)(param_1 + 0x2a) = 0x447a0000;
  return param_1;
}



// FUNCTION 142bf8a20 FUN_142bf8a20 body=59 status=ok
// SIG undefined FUN_142bf8a20(void)

undefined8 * FUN_142bf8a20(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142bd6050();
  *param_1 = &PTR__scalar_deleting_destructor__1458056c8;
  param_1[0xc] = 0;
  uVar1 = UEnvQueryContext_Querier::GetPrivateStaticClass();
  param_1[0xc] = uVar1;
  uVar1 = UEnvQueryItemType_Point::GetPrivateStaticClass();
  param_1[10] = uVar1;
  return param_1;
}



// FUNCTION 142bf8a60 FUN_142bf8a60 body=297 status=ok
// SIG undefined FUN_142bf8a60(void)

undefined8 * FUN_142bf8a60(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142bf8dc0();
  *param_1 = &PTR_FUN_145805968;
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x13);
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x19);
  FAIDataProviderIntValue::FAIDataProviderIntValue(param_1 + 0x1f);
  FAIDataProviderIntValue::FAIDataProviderIntValue(param_1 + 0x25);
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x2f);
  param_1[0x36] = 0;
  FAIDataProviderIntValue::FAIDataProviderIntValue(param_1 + 0x38);
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x3e);
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x44);
  uVar1 = UEnvQueryContext_Querier::GetPrivateStaticClass();
  param_1[0x36] = uVar1;
  *(undefined4 *)(param_1 + 0x18) = 0x43960000;
  *(undefined4 *)(param_1 + 0x1e) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x24) = 3;
  *(undefined4 *)(param_1 + 0x2a) = 8;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  uVar1 = UEnvQueryContext_Querier::GetPrivateStaticClass();
  param_1[0x2b] = uVar1;
  uVar1 = UEnvQueryContext_Querier::GetPrivateStaticClass();
  param_1[0x2d] = uVar1;
  *(undefined4 *)(param_1 + 0x34) = 0x43b40000;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined1 *)((longlong)param_1 + 0x8b) = 0;
  *(undefined4 *)(param_1 + 0x3d) = 1;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  return param_1;
}



// FUNCTION 142bf8b90 FUN_142bf8b90 body=360 status=ok
// SIG undefined FUN_142bf8b90(void)

undefined8 * FUN_142bf8b90(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142bf8dc0();
  *param_1 = &PTR_FUN_145805c18;
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x13);
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x19);
  FAIDataProviderIntValue::FAIDataProviderIntValue(param_1 + 0x1f);
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x2a);
  param_1[0x31] = 0;
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x33);
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0x44800000;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0x44800000;
  *(undefined4 *)(param_1 + 0x3c) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0x41200000;
  param_1[0x3d] = 0x41200000;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  *(uint *)((longlong)param_1 + 500) = *(uint *)((longlong)param_1 + 500) & 0xffffffde;
  *(uint *)((longlong)param_1 + 500) = *(uint *)((longlong)param_1 + 500) | 0x5e;
  uVar1 = UEnvQueryContext_Querier::GetPrivateStaticClass();
  param_1[0x31] = uVar1;
  uVar1 = UEnvQueryItemType_Point::GetPrivateStaticClass();
  param_1[10] = uVar1;
  *(undefined4 *)(param_1 + 0x18) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x1e) = 0x42480000;
  *(undefined4 *)(param_1 + 0x24) = 8;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  uVar1 = UEnvQueryContext_Querier::GetPrivateStaticClass();
  param_1[0x26] = uVar1;
  uVar1 = UEnvQueryContext_Querier::GetPrivateStaticClass();
  param_1[0x28] = uVar1;
  *(uint *)((longlong)param_1 + 500) = *(uint *)((longlong)param_1 + 500) & 0xffffffdf;
  *(uint *)((longlong)param_1 + 500) = *(uint *)((longlong)param_1 + 500) | 0x10;
  *(undefined4 *)(param_1 + 0x2f) = 0x43b40000;
  *(undefined4 *)(param_1 + 0x30) = 0x40c90fdb;
  *(undefined1 *)(param_1 + 0x32) = 0;
  *(undefined1 *)((longlong)param_1 + 499) = 1;
  *(undefined1 *)((longlong)param_1 + 0x8b) = 0;
  return param_1;
}



// FUNCTION 142bf8d00 FUN_142bf8d00 body=191 status=ok
// SIG undefined FUN_142bf8d00(void)

undefined8 * FUN_142bf8d00(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142bf8dc0();
  *param_1 = &PTR_FUN_145806180;
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x13);
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x19);
  param_1[0x1f] = 0;
  uVar1 = UEnvQueryContext_Querier::GetPrivateStaticClass();
  param_1[0x1f] = uVar1;
  *(undefined4 *)(param_1 + 0x18) = 0x43fa0000;
  *param_1 = &PTR_FUN_145806430;
  *(undefined4 *)(param_1 + 0x1e) = 0x42c80000;
  FAIDataProviderBoolValue::FAIDataProviderBoolValue(param_1 + 0x20);
  param_1[0x26] = 0;
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x27);
  FUN_142bf1db0(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x1e) = 0x42c80000;
  *(undefined1 *)(param_1 + 0x25) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 0x3fc00000;
  return param_1;
}



// FUNCTION 142bf8dc0 FUN_142bf8dc0 body=134 status=ok
// SIG undefined FUN_142bf8dc0(void)

undefined8 * FUN_142bf8dc0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142bd6050();
  *param_1 = &PTR_FUN_145805168;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x44800000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x44800000;
  *(undefined4 *)(param_1 + 0xf) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x41200000;
  param_1[0x10] = 0x41200000;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(uint *)((longlong)param_1 + 0x8c) = *(uint *)((longlong)param_1 + 0x8c) & 0xffffffde;
  *(uint *)((longlong)param_1 + 0x8c) = *(uint *)((longlong)param_1 + 0x8c) | 0x5e;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((longlong)param_1 + 0x8b) = 1;
  *(uint *)((longlong)param_1 + 0x8c) = *(uint *)((longlong)param_1 + 0x8c) | 0x30;
  param_1[0xf] = 0;
  uVar1 = UEnvQueryItemType_Point::GetPrivateStaticClass();
  param_1[10] = uVar1;
  return param_1;
}



// FUNCTION 142bf8e50 FUN_142bf8e50 body=100 status=ok
// SIG undefined FUN_142bf8e50(void)

undefined8 * FUN_142bf8e50(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142bf8dc0();
  *param_1 = &PTR_FUN_145806180;
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x13);
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x19);
  param_1[0x1f] = 0;
  uVar1 = UEnvQueryContext_Querier::GetPrivateStaticClass();
  param_1[0x1f] = uVar1;
  *(undefined4 *)(param_1 + 0x18) = 0x43fa0000;
  *(undefined4 *)(param_1 + 0x1e) = 0x42c80000;
  return param_1;
}



// FUNCTION 142bf8ec0 UEnvQueryItemType body=148 status=ok
// SIG undefined UEnvQueryItemType(void)

undefined8 * UEnvQueryItemType::UEnvQueryItemType(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  FUN_141781840();
  *param_1 = &PTR_FUN_145804978;
  iVar2 = DAT_146b2c658;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    return param_1;
  }
  lVar1 = param_1[2];
  if ((*(byte *)(lVar1 + 0xb4) & 1) == 0) {
    lVar3 = (longlong)DAT_146b2c658;
    DAT_146b2c658 = DAT_146b2c658 + 1;
    if (DAT_146b2c65c < DAT_146b2c658) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146b2c650,iVar2);
    }
    *(longlong *)(DAT_146b2c650 + lVar3 * 8) = lVar1;
    return param_1;
  }
  return param_1;
}



// FUNCTION 142bf8f60 UEnvQueryItemType_Actor body=42 status=ok
// SIG undefined UEnvQueryItemType_Actor(void)

undefined8 * UEnvQueryItemType_Actor::UEnvQueryItemType_Actor(undefined8 *param_1)

{
  UEnvQueryItemType_VectorBase::UEnvQueryItemType_VectorBase();
  *param_1 = &PTR_FUN_1458066e0;
  *(undefined2 *)(param_1 + 5) = 8;
  return param_1;
}



// FUNCTION 142bf8f90 UEnvQueryItemType_Actor body=42 status=ok
// SIG undefined UEnvQueryItemType_Actor(void)

undefined8 * UEnvQueryItemType_Actor::UEnvQueryItemType_Actor(undefined8 *param_1)

{
  UEnvQueryItemType_VectorBase::UEnvQueryItemType_VectorBase();
  *param_1 = &PTR_FUN_145806990;
  *(undefined2 *)(param_1 + 5) = 8;
  return param_1;
}



// FUNCTION 142bf8fc0 UEnvQueryItemType_Direction body=42 status=ok
// SIG undefined UEnvQueryItemType_Direction(void)

undefined8 * UEnvQueryItemType_Direction::UEnvQueryItemType_Direction(undefined8 *param_1)

{
  UEnvQueryItemType_VectorBase::UEnvQueryItemType_VectorBase();
  *param_1 = &PTR_FUN_145806c40;
  *(undefined2 *)(param_1 + 5) = 0xc;
  return param_1;
}



// FUNCTION 142bf8ff0 UEnvQueryItemType_Point body=42 status=ok
// SIG undefined UEnvQueryItemType_Point(void)

undefined8 * UEnvQueryItemType_Point::UEnvQueryItemType_Point(undefined8 *param_1)

{
  UEnvQueryItemType_VectorBase::UEnvQueryItemType_VectorBase();
  *param_1 = &PTR_FUN_145804eb0;
  *(undefined2 *)(param_1 + 5) = 0x18;
  return param_1;
}



// FUNCTION 142bf9020 UEnvQueryItemType_VectorBase body=135 status=ok
// SIG undefined UEnvQueryItemType_VectorBase(void)

undefined8 * UEnvQueryItemType_VectorBase::UEnvQueryItemType_VectorBase(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  FUN_141781840();
  *param_1 = &PTR_FUN_145804978;
  iVar2 = DAT_146b2c658;
  if (((*(uint *)(param_1 + 1) >> 4 & 1) != 0) &&
     (lVar1 = param_1[2], (*(byte *)(lVar1 + 0xb4) & 1) == 0)) {
    lVar3 = (longlong)DAT_146b2c658;
    DAT_146b2c658 = DAT_146b2c658 + 1;
    if (DAT_146b2c65c < DAT_146b2c658) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146b2c650,iVar2);
    }
    *(longlong *)(DAT_146b2c650 + lVar3 * 8) = lVar1;
  }
  *param_1 = &PTR_FUN_144080458;
  return param_1;
}



// FUNCTION 142bf90b0 FUN_142bf90b0 body=85 status=ok
// SIG undefined FUN_142bf90b0(void)

undefined8 * FUN_142bf90b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142bd6400();
  *param_1 = &PTR__scalar_deleting_destructor__145806ee8;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0x40a00000;
  uVar1 = UEnvQueryContext_Querier::GetPrivateStaticClass();
  param_1[0x3c] = uVar1;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  uVar1 = UEnvQueryItemType_VectorBase::GetPrivateStaticClass();
  param_1[0x38] = uVar1;
  return param_1;
}



// FUNCTION 142bf9110 FUN_142bf9110 body=154 status=ok
// SIG undefined FUN_142bf9110(void)

undefined8 * FUN_142bf9110(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142bd6400();
  *param_1 = &PTR__scalar_deleting_destructor__145807180;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  uVar1 = UEnvQueryItemType_VectorBase::GetPrivateStaticClass();
  param_1[0x38] = uVar1;
  *(undefined1 *)(param_1 + 0x3e) = 1;
  uVar1 = UEnvQueryContext_Querier::GetPrivateStaticClass();
  param_1[0x3d] = uVar1;
  *(undefined1 *)(param_1 + 0x42) = 0;
  uVar1 = UEnvQueryContext_Querier::GetPrivateStaticClass();
  param_1[0x3f] = uVar1;
  uVar1 = UEnvQueryContext_Item::GetPrivateStaticClass();
  param_1[0x40] = uVar1;
  *(undefined2 *)(param_1 + 0x43) = 0;
  return param_1;
}



// FUNCTION 142bf91b0 FUN_142bf91b0 body=112 status=ok
// SIG undefined FUN_142bf91b0(void)

undefined8 * FUN_142bf91b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142bd6400();
  *param_1 = &PTR_FUN_145807418;
  FGameplayTagQuery::FGameplayTagQuery(param_1 + 0x3b);
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  FUN_142bf1f60(param_1,0);
  *(undefined2 *)(param_1 + 0x44) = 1;
  uVar1 = UEnvQueryItemType_ActorBase::GetPrivateStaticClass();
  param_1[0x38] = uVar1;
  return param_1;
}



// FUNCTION 142bf9220 FUN_142bf9220 body=147 status=ok
// SIG undefined FUN_142bf9220(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142bf9220(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142bd6400();
  *param_1 = &PTR__scalar_deleting_destructor__1458076b0;
  *(undefined4 *)(param_1 + 0x3b) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0x41200000;
  *(undefined4 *)(param_1 + 0x3c) = 0x41200000;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = DAT_1468b5d98;
  *(undefined2 *)(param_1 + 0x3e) = 0;
  *(uint *)((longlong)param_1 + 500) = *(uint *)((longlong)param_1 + 500) & 0xfffffffd | 1;
  *(undefined1 *)(param_1 + 0x1e) = 2;
  uVar1 = UEnvQueryItemType_VectorBase::GetPrivateStaticClass();
  param_1[0x38] = uVar1;
  FUN_142bf1f60(param_1,0);
  return param_1;
}



// FUNCTION 142bf92c0 FUN_142bf92c0 body=169 status=ok
// SIG undefined FUN_142bf92c0(void)

undefined8 * FUN_142bf92c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142bd6400();
  *param_1 = &PTR_FUN_145807958;
  param_1[0x3c] = 0;
  FAIDataProviderBoolValue::FAIDataProviderBoolValue(param_1 + 0x3d);
  FAIDataProviderBoolValue::FAIDataProviderBoolValue(param_1 + 0x43);
  param_1[0x49] = 0;
  uVar1 = UEnvQueryContext_Querier::GetPrivateStaticClass();
  param_1[0x3c] = uVar1;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  uVar1 = UEnvQueryItemType_VectorBase::GetPrivateStaticClass();
  param_1[0x38] = uVar1;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  *(undefined1 *)(param_1 + 0x42) = 1;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined4 *)(param_1 + 0x17) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x1d) = 0x447a0000;
  FUN_142bf1f60(param_1,*(char *)(param_1 + 0x3b) != '\0');
  return param_1;
}



// FUNCTION 142bf9370 FUN_142bf9370 body=201 status=ok
// SIG undefined FUN_142bf9370(void)

undefined8 * FUN_142bf9370(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142bd6400();
  *param_1 = &PTR_FUN_145807958;
  param_1[0x3c] = 0;
  FAIDataProviderBoolValue::FAIDataProviderBoolValue(param_1 + 0x3d);
  FAIDataProviderBoolValue::FAIDataProviderBoolValue(param_1 + 0x43);
  param_1[0x49] = 0;
  uVar1 = UEnvQueryContext_Querier::GetPrivateStaticClass();
  param_1[0x3c] = uVar1;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  uVar1 = UEnvQueryItemType_VectorBase::GetPrivateStaticClass();
  param_1[0x38] = uVar1;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  *(undefined1 *)(param_1 + 0x42) = 1;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined4 *)(param_1 + 0x17) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x1d) = 0x447a0000;
  FUN_142bf1f60(param_1,*(char *)(param_1 + 0x3b) != '\0');
  *param_1 = &PTR_FUN_145807bf0;
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x4a);
  *(undefined4 *)(param_1 + 0x4f) = 0x3fc00000;
  return param_1;
}



// FUNCTION 142bf9440 FUN_142bf9440 body=189 status=ok
// SIG undefined FUN_142bf9440(void)

undefined8 * FUN_142bf9440(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142bd6400();
  *param_1 = &PTR__scalar_deleting_destructor__145807e88;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0x44800000;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0x44800000;
  *(undefined4 *)(param_1 + 0x3e) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 500) = 0x41200000;
  param_1[0x3f] = 0x41200000;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(uint *)((longlong)param_1 + 0x204) = *(uint *)((longlong)param_1 + 0x204) & 0xffffffde;
  *(uint *)((longlong)param_1 + 0x204) = *(uint *)((longlong)param_1 + 0x204) | 0x5e;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  uVar1 = UEnvQueryItemType_VectorBase::GetPrivateStaticClass();
  param_1[0x38] = uVar1;
  FUN_142bf1f60(param_1,0);
  *(undefined1 *)((longlong)param_1 + 0x203) = 1;
  param_1[0x3e] = 0;
  *(uint *)((longlong)param_1 + 0x204) = *(uint *)((longlong)param_1 + 0x204) & 0xffffffef | 0x20;
  return param_1;
}



// FUNCTION 142bf9500 FUN_142bf9500 body=52 status=ok
// SIG undefined FUN_142bf9500(void)

undefined8 * FUN_142bf9500(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142bd6400();
  *param_1 = &PTR_FUN_145808120;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  uVar1 = UEnvQueryItemType::GetPrivateStaticClass();
  param_1[0x38] = uVar1;
  return param_1;
}



// FUNCTION 142bf9540 FUN_142bf9540 body=206 status=ok
// SIG undefined FUN_142bf9540(void)

undefined8 * FUN_142bf9540(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142bd6400();
  *param_1 = &PTR_FUN_1458083b8;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0x44800000;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0x44800000;
  *(undefined4 *)(param_1 + 0x3e) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 500) = 0x41200000;
  param_1[0x3f] = 0x41200000;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(uint *)((longlong)param_1 + 0x204) = *(uint *)((longlong)param_1 + 0x204) & 0xffffffde;
  *(uint *)((longlong)param_1 + 0x204) = *(uint *)((longlong)param_1 + 0x204) | 0x5e;
  FAIDataProviderBoolValue::FAIDataProviderBoolValue(param_1 + 0x41);
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x47);
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x4d);
  param_1[0x53] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 2;
  uVar1 = UEnvQueryItemType_VectorBase::GetPrivateStaticClass();
  param_1[0x38] = uVar1;
  FUN_142bf1f60(param_1,0);
  uVar1 = UEnvQueryContext_Querier::GetPrivateStaticClass();
  param_1[0x53] = uVar1;
  FUN_142bf1d40(param_1 + 0x3b);
  return param_1;
}



// FUNCTION 142bf9610 FUN_142bf9610 body=120 status=ok
// SIG undefined FUN_142bf9610(void)

undefined8 * FUN_142bf9610(undefined8 *param_1)

{
  FUN_142bf9700();
  *param_1 = &PTR__scalar_deleting_destructor__145808d18;
  param_1[5] = &PTR_LAB_145809260;
  param_1[0x2f] = &PTR_LAB_145809290;
  param_1[0x30] = &PTR_LAB_1458092c0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffffffc;
  param_1[0x6f] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0xffffffffffffffff;
  return param_1;
}



// FUNCTION 142bf9690 UNavFilter_AIControllerDefault body=37 status=ok
// SIG undefined UNavFilter_AIControllerDefault(void)

undefined8 * UNavFilter_AIControllerDefault::UNavFilter_AIControllerDefault(undefined8 *param_1)

{
  UNavigationQueryFilter::UNavigationQueryFilter();
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
  *param_1 = &PTR_FUN_145809ec0;
  return param_1;
}



// FUNCTION 142bf96c0 UNavLocalGridManager body=61 status=ok
// SIG undefined UNavLocalGridManager(void)

undefined8 * UNavLocalGridManager::UNavLocalGridManager(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__145809c40;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 1;
  return param_1;
}



// FUNCTION 142bf9700 FUN_142bf9700 body=486 status=ok
// SIG undefined FUN_142bf9700(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142bf9700(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR_FUN_145808740;
  param_1[5] = &PTR_LAB_145808c88;
  param_1[0x2f] = &PTR_LAB_145808cb8;
  param_1[0x30] = &PTR_LAB_145808ce8;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 2;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 2;
  *(undefined4 *)(param_1 + 0x3a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  FBasedPosition::FBasedPosition(param_1 + 0x46);
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  FAIResourceLock::FAIResourceLock(param_1 + 0x60);
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0xffffffff;
  param_1[0x66] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x67) = DAT_1468b5d98;
  param_1[0x68] = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 2;
  *(uint *)(param_1 + 0x69) = *(uint *)(param_1 + 0x69) | 1;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0x3f8ccccd;
  *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xffffff5f | 0x4f;
  *(undefined4 *)(param_1 + 0x41) = 0x3f866666;
  *(undefined4 *)(param_1 + 0x55) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = 0x3f000000;
  param_1[0x56] = 10;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x57) = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 1;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x4d] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x4e) = DAT_1468b5d98;
  return param_1;
}



// FUNCTION 142bf98f0 FUN_142bf98f0 body=122 status=ok
// SIG undefined FUN_142bf98f0(void)

undefined8 * FUN_142bf98f0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_143f3f648;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146b2c8a0) {
    _Init_thread_header(&DAT_146b2c8a0);
    if (DAT_146b2c8a0 == -1) {
      FUN_142bf7cd0(&DAT_146b2c89c);
      _Init_thread_footer(&DAT_146b2c8a0);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 142bf9970 ~TArray<FCombinedNavGridData,FDefaultAllocator> body=126 status=ok
// SIG undefined ~TArray<FCombinedNavGridData,FDefaultAllocator>(void)

void TArray<FCombinedNavGridData,FDefaultAllocator>::~TArray<FCombinedNavGridData,FDefaultAllocator>
               (longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x58);
    do {
      if (plVar2[5] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      if (plVar2[-2] != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x12;
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



// FUNCTION 142bf99f0 ~TArray<FNavLocalGridData,FDefaultAllocator> body=109 status=ok
// SIG undefined ~TArray<FNavLocalGridData,FDefaultAllocator>(void)

void TArray<FNavLocalGridData,FDefaultAllocator>::~TArray<FNavLocalGridData,FDefaultAllocator>
               (longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x48);
    do {
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x10;
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



// FUNCTION 142bf9a60 FUN_142bf9a60 body=253 status=ok
// SIG undefined FUN_142bf9a60(void)

void FUN_142bf9a60(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x308) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2c0) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x218);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x1f0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x1b0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x198);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x188);
  *(undefined ***)(param_1 + 0x180) = &PTR_FUN_145808650;
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_144063ad8;
  FUN_140458c20(param_1);
  return;
}



// FUNCTION 142bf9c10 FUN_142bf9c10 body=135 status=ok
// SIG undefined FUN_142bf9c10(void)

longlong FUN_142bf9c10(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x498) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x478) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x468) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x460) = &PTR_FUN_1440197d0;
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_1457d2ec8;
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4a8);
  }
  return param_1;
}



// FUNCTION 142bf9ca0 FUN_142bf9ca0 body=43 status=ok
// SIG undefined FUN_142bf9ca0(void)

undefined8 * FUN_142bf9ca0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1458092f0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 142bf9cd0 FUN_142bf9cd0 body=43 status=ok
// SIG undefined FUN_142bf9cd0(void)

undefined8 * FUN_142bf9cd0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145808650;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 142bf9d00 FUN_142bf9d00 body=66 status=ok
// SIG undefined FUN_142bf9d00(void)

longlong FUN_142bf9d00(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x350) = &PTR_FUN_1458092f0;
  FUN_142bf9a60();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3a0);
  }
  return param_1;
}



// FUNCTION 142bf9d50 FUN_142bf9d50 body=142 status=ok
// SIG undefined FUN_142bf9d50(void)

longlong FUN_142bf9d50(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x78);
  TArray<FSaveGameUserSetting,FDefaultAllocator>::~TArray<FSaveGameUserSetting,FDefaultAllocator>
            (param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 142bf9de0 FUN_142bf9de0 body=98 status=ok
// SIG undefined FUN_142bf9de0(void)

longlong FUN_142bf9de0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 142bf9e50 FUN_142bf9e50 body=119 status=ok
// SIG undefined FUN_142bf9e50(void)

longlong FUN_142bf9e50(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x128) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0xf8) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 200) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x98) = &PTR_ValueToString_14407aff8;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x168);
  }
  return param_1;
}



// FUNCTION 142bf9ed0 FUN_142bf9ed0 body=147 status=ok
// SIG undefined FUN_142bf9ed0(void)

longlong FUN_142bf9ed0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x220) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x1f0) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x1c0) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x178) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x128) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0xf8) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 200) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x98) = &PTR_ValueToString_14407aff8;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x250);
  }
  return param_1;
}



// FUNCTION 142bf9f70 FUN_142bf9f70 body=126 status=ok
// SIG undefined FUN_142bf9f70(void)

longlong FUN_142bf9f70(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x198) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x150) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0xf8) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 200) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x98) = &PTR_ValueToString_14407aff8;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x200);
  }
  return param_1;
}



// FUNCTION 142bf9ff0 FUN_142bf9ff0 body=119 status=ok
// SIG undefined FUN_142bf9ff0(void)

longlong FUN_142bf9ff0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x138) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x100) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 200) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x98) = &PTR_ValueToString_14407aff8;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x168);
  }
  return param_1;
}



// FUNCTION 142bfa070 FUN_142bfa070 body=84 status=ok
// SIG undefined FUN_142bfa070(void)

longlong FUN_142bfa070(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 142bfa0d0 FUN_142bfa0d0 body=105 status=ok
// SIG undefined FUN_142bfa0d0(void)

longlong FUN_142bfa0d0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 200) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x98) = &PTR_ValueToString_14407aff8;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 142bfa140 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessMotionBlurCS<1,1>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140729c00();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1f0);
  }
  return param_1;
}



// FUNCTION 142bfa180 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessDiaphragmDOFBuildBokehLUTCS::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FUN_140729c00();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x220);
  }
  return param_1;
}



// FUNCTION 142bfa1c0 FUN_142bfa1c0 body=158 status=ok
// SIG undefined FUN_142bfa1c0(void)

longlong FUN_142bfa1c0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x210) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FMemory::Free();
  }
  FUN_140729c00(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x248);
  }
  return param_1;
}



// FUNCTION 142bfa260 FUN_142bfa260 body=73 status=ok
// SIG undefined FUN_142bfa260(void)

longlong FUN_142bfa260(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x218) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x1e8) = &PTR_ValueToString_14407aff8;
  FUN_140729c00();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x250);
  }
  return param_1;
}



// FUNCTION 142bfa2b0 FUN_142bfa2b0 body=80 status=ok
// SIG undefined FUN_142bfa2b0(void)

longlong FUN_142bfa2b0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x250) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x218) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x1e8) = &PTR_ValueToString_14407aff8;
  FUN_140729c00();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x280);
  }
  return param_1;
}



// FUNCTION 142bfa300 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessDiaphragmDOFDownsampleCS::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FUN_140729c00();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x208);
  }
  return param_1;
}



// FUNCTION 142bfa340 FUN_142bfa340 body=80 status=ok
// SIG undefined FUN_142bfa340(void)

longlong FUN_142bfa340(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x268) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x238) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x208) = &PTR_ValueToString_14407aff8;
  FUN_140729c00();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2a0);
  }
  return param_1;
}



// FUNCTION 142bfa390 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UFoliageType_InstancedStaticMesh::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x368) != 0) {
    FMemory::Free();
  }
  FUN_142bf9a60(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x380);
  }
  return param_1;
}



// FUNCTION 142bfa3e0 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UNavLocalGridManager::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TArray<FNavLocalGridData,FDefaultAllocator>::~TArray<FNavLocalGridData,FDefaultAllocator>
            (param_1 + 0x38);
  TArray<FCombinedNavGridData,FDefaultAllocator>::~TArray<FCombinedNavGridData,FDefaultAllocator>
            (param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 142bfa430 FUN_142bfa430 body=52 status=ok
// SIG undefined FUN_142bfa430(void)

undefined8 FUN_142bfa430(undefined8 param_1,ulonglong param_2)

{
  FUN_142bf9a60();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x350);
  }
  return param_1;
}



// FUNCTION 142bfa470 FUN_142bfa470 body=218 status=ok
// SIG undefined FUN_142bfa470(void)

void FUN_142bfa470(longlong *param_1,undefined8 param_2,ushort param_3,int param_4,char param_5)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ushort local_res20;
  undefined1 local_res22;
  
  if ((((*(char *)((longlong)param_1 + 0x399) == '\0') && ((int)param_1[0x3c] != 0)) &&
      (iVar1 = (int)param_1[0x65], iVar1 != -1)) &&
     ((param_4 != -1 && (((param_4 == iVar1 || (param_4 == 0)) || (iVar1 == 0)))))) {
    lVar3 = param_1[0x24];
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0();
    }
    UCrowdManager::GetCurrent(lVar3);
  }
  if ((((int)param_1[0x3c] != 0) && (iVar1 = (int)param_1[0x65], iVar1 != -1)) &&
     ((param_4 != -1 && (((param_4 == iVar1 || (param_4 == 0)) || (iVar1 == 0)))))) {
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xffffffbf;
    uVar2 = 0;
    local_res22 = 3;
    if (param_5 == '\0') {
      uVar2 = 0x40;
    }
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | uVar2;
    local_res20 = param_3 & 0xfff8 | DAT_1466911c6;
    (**(code **)(*param_1 + 0x450))(param_1,&local_res20);
  }
  return;
}



// FUNCTION 142bfa590 FUN_142bfa590 body=118 status=ok
// SIG undefined FUN_142bfa590(void)

void FUN_142bfa590(longlong *param_1,undefined8 param_2,ushort param_3,int param_4,char param_5)

{
  int iVar1;
  uint uVar2;
  ushort local_res8;
  undefined1 local_resa;
  
  if (((((int)param_1[0x3c] != 0) && (iVar1 = (int)param_1[0x65], iVar1 != -1)) && (param_4 != -1))
     && (((param_4 == iVar1 || (param_4 == 0)) || (iVar1 == 0)))) {
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xffffffbf;
    uVar2 = 0;
    local_resa = 3;
    if (param_5 == '\0') {
      uVar2 = 0x40;
    }
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | uVar2;
    local_res8 = param_3 & 0xfff8 | DAT_1466911c6;
    (**(code **)(*param_1 + 0x450))(param_1,&local_res8);
  }
  return;
}



// FUNCTION 142bfa610 AddBlackboardFilters body=85 status=ok
// SIG undefined AddBlackboardFilters(void)

void UEnvQueryItemType_ActorBase::AddBlackboardFilters
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FBlackboardKeySelector::AddVectorFilter
            (param_2,param_3,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18));
  uVar1 = FUN_1428dfc70();
  FBlackboardKeySelector::AddObjectFilter
            (param_2,param_3,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18),uVar1);
  return;
}



// FUNCTION 142bfa670 FUN_142bfa670 body=66 status=ok
// SIG undefined FUN_142bfa670(void)

void FUN_142bfa670(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1429ff160();
  FBlackboardKeySelector::AddObjectFilter
            (param_2,param_3,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18),uVar1);
  return;
}



// FUNCTION 142bfa6e0 AddGridData body=205 status=ok
// SIG undefined AddGridData(void)

undefined4 UNavLocalGridManager::AddGridData(longlong *param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  if ((int)param_1[10] < 1) {
    uVar3 = 0;
  }
  else {
    lVar2 = (**(code **)(*param_1 + 0x148))();
    uVar3 = *(undefined4 *)(lVar2 + 0x790);
  }
  iVar1 = (int)param_1[8];
  *(int *)(param_1 + 8) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x44) < iVar1 + 1) {
    TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow
              (param_1 + 7,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x80;
  FNavLocalGridData::FNavLocalGridData(param_1[7] + lVar2,param_2);
  *(undefined4 *)(lVar2 + 0x6c + param_1[7]) = *(undefined4 *)((longlong)param_1 + 0x4c);
  *(undefined4 *)(lVar2 + 0x68 + param_1[7]) = uVar3;
  uVar3 = *(undefined4 *)(lVar2 + 0x6c + param_1[7]);
  *(int *)((longlong)param_1 + 0x4c) = *(int *)((longlong)param_1 + 0x4c) + 1;
  UpdateSourceGrids(param_1);
  *(uint *)((longlong)param_1 + 0x54) = *(uint *)((longlong)param_1 + 0x54) | 1;
  if (param_3 != '\0') {
    FUN_142c0dbd0(param_1);
  }
  return uVar3;
}



// FUNCTION 142bfa7d0 AddLocalNavigationGridForBox body=284 status=ok
// SIG undefined AddLocalNavigationGridForBox(void)

undefined4
UNavLocalGridManager::AddLocalNavigationGridForBox
          (undefined8 param_1,undefined8 param_2,float *param_3,undefined8 param_4,int param_5,
          float param_6,undefined1 param_7)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  float local_98;
  float local_94;
  undefined1 local_88 [16];
  float local_78;
  float local_6c;
  longlong local_40;
  longlong local_30;
  
  lVar2 = FUN_142c00de0();
  uVar1 = 0;
  if (lVar2 != 0) {
    local_98 = (float)param_5 * DAT_1466910cc + *param_3;
    local_94 = (float)param_5 * DAT_1466910cc + param_3[1];
    FNavLocalGridData::FNavLocalGridData(local_88,param_2,&local_98);
    local_78 = (local_78 + local_6c) * 0.5;
    local_6c = local_78 + param_6 + param_3[2];
    local_78 = local_78 - (param_6 + param_3[2]);
    uVar3 = FRotator::Quaternion(param_4,&local_98);
    FNavLocalGridData::MarkBoxObstacle(local_88,param_2,param_3,uVar3);
    uVar1 = AddGridData(lVar2,local_88,param_7);
    if (local_30 != 0) {
      FMemory::Free();
    }
    if (local_40 != 0) {
      FMemory::Free();
    }
  }
  return uVar1;
}



// FUNCTION 142bfa8f0 AddLocalNavigationGridForCapsule body=520 status=ok
// SIG undefined AddLocalNavigationGridForCapsule(void)

undefined4
UNavLocalGridManager::AddLocalNavigationGridForCapsule
          (undefined8 param_1,float *param_2,float param_3,float param_4,int param_5,float param_6,
          undefined1 param_7)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float local_e8;
  float local_e4;
  undefined1 local_d8 [4];
  float local_d4;
  float local_c8;
  float local_bc;
  float local_b4;
  float local_b0;
  float local_ac;
  int local_9c;
  int local_98;
  longlong local_90;
  longlong local_80;
  
  lVar2 = FUN_142c00de0();
  uVar1 = 0;
  if (lVar2 != 0) {
    local_e8 = (float)param_5 * DAT_1466910cc + param_3;
    local_e4 = local_e8;
    FNavLocalGridData::FNavLocalGridData(local_d8,param_2,&local_e8);
    iVar5 = 0;
    local_c8 = (local_c8 + local_bc) * 0.5;
    local_bc = local_c8 + param_4 + param_6;
    local_c8 = local_c8 - (param_4 + param_6);
    if (0 < local_9c) {
      iVar4 = 0;
      do {
        iVar3 = 0;
        if (0 < local_98) {
          do {
            fVar7 = (((float)iVar5 + 0.5) * local_d4 + local_b4) - *param_2;
            fVar6 = (((float)iVar3 + 0.5) * local_d4 + local_b0) - param_2[1];
            if ((fVar6 * fVar6 + fVar7 * fVar7 < param_3 * param_3) &&
               (ABS(local_ac - param_2[2]) < param_4)) {
              *(undefined1 *)((iVar4 + iVar3) + local_90) = 1;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < local_98);
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + local_98;
      } while (iVar5 < local_9c);
    }
    uVar1 = AddGridData(lVar2,local_d8,param_7);
    if (local_80 != 0) {
      FMemory::Free();
    }
    if (local_90 != 0) {
      FMemory::Free();
    }
  }
  return uVar1;
}



// FUNCTION 142bfab00 AddLocalNavigationGridForPoint body=300 status=ok
// SIG undefined AddLocalNavigationGridForPoint(void)

undefined4
UNavLocalGridManager::AddLocalNavigationGridForPoint
          (undefined8 param_1,float *param_2,int param_3,float param_4,undefined1 param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined1 local_98 [4];
  float local_94;
  float local_88;
  float local_7c;
  float local_74;
  float local_70;
  int local_5c;
  int local_58;
  longlong local_50;
  longlong local_40;
  
  lVar2 = FUN_142c00de0();
  uVar1 = 0;
  if (lVar2 != 0) {
    FNavLocalGridData::FNavLocalGridData(local_98,param_2,(float)param_3 * DAT_1466910cc);
    local_88 = (local_88 + local_7c) * 0.5;
    local_7c = local_88 + param_4;
    local_88 = local_88 - param_4;
    iVar4 = (int)((*param_2 - local_74) * (1.0 / local_94));
    iVar3 = (int)((param_2[1] - local_70) * (1.0 / local_94));
    if ((((-1 < iVar4) && (iVar4 < local_5c)) && (-1 < iVar3)) &&
       ((iVar3 < local_58 && (iVar3 = local_58 * iVar4 + iVar3, iVar3 != -1)))) {
      *(undefined1 *)(iVar3 + local_50) = 1;
    }
    uVar1 = AddGridData(lVar2,local_98,param_5);
    if (local_40 != 0) {
      FMemory::Free();
    }
    if (local_50 != 0) {
      FMemory::Free();
    }
  }
  return uVar1;
}



// FUNCTION 142bfac30 AddLocalNavigationGridForPoints body=477 status=ok
// SIG undefined AddLocalNavigationGridForPoints(void)

int UNavLocalGridManager::AddLocalNavigationGridForPoints
              (undefined8 param_1,longlong *param_2,int param_3,float param_4,undefined1 param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined1 local_a8 [4];
  float local_a4;
  float local_98;
  float local_8c;
  float local_84;
  float local_80;
  int local_6c;
  int local_68;
  longlong local_60;
  longlong local_50;
  
  iVar4 = 0;
  lVar1 = FUN_142c00de0();
  if (lVar1 != 0) {
    FBox::FBox(&local_c8,param_2);
    local_d8 = (local_c8 + local_bc) * 0.5;
    local_d4 = (local_c4 + local_b8) * 0.5;
    fVar6 = local_bc - local_c8;
    if (local_bc - local_c8 <= local_b8 - local_c4) {
      fVar6 = local_b8 - local_c4;
    }
    local_d0 = (local_c0 + local_b4) * 0.5;
    FNavLocalGridData::FNavLocalGridData(local_a8,&local_d8,fVar6 + (float)param_3 * DAT_1466910cc);
    local_98 = (local_98 + local_8c) * 0.5;
    local_8c = local_98 + param_4;
    local_98 = local_98 - param_4;
    if (0 < (int)param_2[1]) {
      lVar3 = 0;
      do {
        iVar5 = (int)((*(float *)(lVar3 + *param_2) - local_84) * (1.0 / local_a4));
        iVar2 = (int)((*(float *)(lVar3 + 4 + *param_2) - local_80) * (1.0 / local_a4));
        if ((((-1 < iVar5) && (iVar5 < local_6c)) && (-1 < iVar2)) &&
           ((iVar2 < local_68 && (iVar2 = local_68 * iVar5 + iVar2, iVar2 != -1)))) {
          *(undefined1 *)(iVar2 + local_60) = 1;
        }
        iVar4 = iVar4 + 1;
        lVar3 = lVar3 + 0xc;
      } while (iVar4 < (int)param_2[1]);
    }
    iVar4 = AddGridData(lVar1,local_a8,param_5);
    if (local_50 != 0) {
      FMemory::Free();
    }
    if (local_60 != 0) {
      FMemory::Free();
    }
  }
  return iVar4;
}



// FUNCTION 142bfae10 FUN_142bfae10 body=473 status=ok
// SIG undefined FUN_142bfae10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142bfae10(longlong *param_1,float *param_2,undefined8 param_3,char param_4,char param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_38;
  float local_30;
  undefined8 local_28;
  float local_20;
  
  if ((param_4 == '\0') && (param_5 != '\0')) {
    uVar7 = 0x4000;
  }
  else {
    uVar7 = 0;
  }
  uVar4 = *(uint *)((longlong)param_1 + 0x37c);
  *(uint *)((longlong)param_1 + 0x37c) = uVar4 & 0xffffbfff | uVar7;
  if (((*(char *)((longlong)param_1 + 0x399) == '\0') && ((int)param_1[0x3c] == 3)) &&
     (param_1[0x39] != 0)) {
    if ((param_1[0x6d] == 0) || (*(char *)(param_1[0x6d] + 0x248) != '\x03')) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if (((uVar4 & 1) != 0) || (bVar6)) {
      FUN_142c163e0(param_1,param_2,param_3,param_4);
      plVar5 = (longlong *)param_1[0x39];
      if ((*(uint *)((longlong)plVar5 + 500) >> 1 & 1) == 0) {
        (**(code **)(*plVar5 + 0x528))(plVar5,param_2,0);
      }
      else {
        fVar8 = (float)(**(code **)(param_1[0x6a] + 0x28))();
        fVar1 = param_2[1];
        fVar2 = *param_2;
        fVar3 = param_2[2];
        fVar10 = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3);
        fVar8 = fVar10 / fVar8;
        fVar9 = 0.0;
        if ((0.0 <= fVar8) && (fVar9 = fVar8, 1.0 <= fVar8)) {
          fVar9 = 1.0;
        }
        if (1e-08 < fVar10) {
          fVar10 = 1.0 / fVar10;
          local_30 = fVar3 * fVar10 * fVar9;
          local_38 = CONCAT44(fVar1 * fVar10 * fVar9,fVar2 * fVar10 * fVar9);
        }
        else {
          local_38 = _DAT_1468b5d90;
          local_30 = DAT_1468b5d98;
        }
        local_28 = local_38;
        local_20 = local_30;
        (**(code **)(*(longlong *)param_1[0x39] + 0x530))((longlong *)param_1[0x39],&local_28);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142bfafe2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x548))(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 142bfaff0 EndPlay body=32 status=ok
// SIG undefined EndPlay(void)

void UTTLBossWeakControlComponent::EndPlay(longlong *param_1)

{
  FUN_142330890();
                    /* WARNING: Could not recover jumptable at 0x000142bfb009. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x400))(param_1);
  return;
}



// FUNCTION 142bfb010 FUN_142bfb010 body=824 status=ok
// SIG undefined FUN_142bfb010(void)

undefined8 * FUN_142bfb010(longlong param_1,undefined8 *param_2,longlong param_3)

{
  byte bVar1;
  undefined4 uVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  undefined8 local_78;
  float local_70;
  float *local_68;
  undefined8 local_60;
  float *local_58;
  undefined8 local_50;
  
  lVar5 = FWeakObjectPtr::Get(param_3 + 0x34);
  fVar12 = DAT_1464aa7b0;
  bVar1 = *(byte *)(param_1 + 0x1f8);
  *param_2 = DAT_1464aa7a8;
  *(float *)(param_2 + 1) = fVar12;
  if ((bVar1 & 1) != 0) {
    if (lVar5 != 0) {
      lVar6 = FUN_1428dfc70();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        if (*(longlong *)(lVar5 + 0x168) == 0) {
          local_70 = DAT_1464aa7b0;
          puVar7 = &local_78;
          local_78 = DAT_1464aa7a8;
        }
        else {
          puVar7 = (undefined8 *)FUN_142369f10(*(longlong *)(lVar5 + 0x168),&local_78);
        }
        uVar2 = *(undefined4 *)(puVar7 + 1);
        *param_2 = *puVar7;
        *(undefined4 *)(param_2 + 1) = uVar2;
      }
    }
    lVar5 = 0;
    local_68 = (float *)0x0;
    local_60 = 0;
    if (*(char *)(param_1 + 0x148) == '\0') {
      local_58 = (float *)0x0;
      local_50 = 0;
      lVar6 = lVar5;
      if (*(longlong *)(param_1 + 0x130) != 0) {
        lVar8 = UEnvQueryContext::GetPrivateStaticClass();
        for (lVar3 = *(longlong *)(param_1 + 0x130);
            (lVar6 = lVar5, lVar3 != 0 && (lVar6 = *(longlong *)(param_1 + 0x130), lVar3 != lVar8));
            lVar3 = *(longlong *)(lVar3 + 0x30)) {
        }
      }
      FUN_142bedad0(param_3,lVar6,&local_68);
      lVar6 = lVar5;
      if (*(longlong *)(param_1 + 0x138) != 0) {
        lVar8 = UEnvQueryContext::GetPrivateStaticClass();
        for (lVar3 = *(longlong *)(param_1 + 0x138);
            (lVar6 = lVar5, lVar3 != 0 && (lVar6 = *(longlong *)(param_1 + 0x138), lVar3 != lVar8));
            lVar3 = *(longlong *)(lVar3 + 0x30)) {
        }
      }
      FUN_142bedad0(param_3,lVar6,&local_58);
      if ((0 < (int)local_60) && (0 < (int)local_50)) {
        fVar12 = *local_58 - *local_68;
        fVar13 = local_58[1] - local_68[1];
        local_70 = local_58[2] - local_68[2];
        fVar9 = fVar12 * fVar12 + fVar13 * fVar13 + local_70 * local_70;
        if (fVar9 == 1.0) {
          local_78 = CONCAT44(fVar13,fVar12);
        }
        else {
          if (1e-08 <= fVar9) {
            auVar11 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
            fVar10 = auVar11._0_4_;
            fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
            fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
            fVar12 = fVar10 * fVar12;
            local_70 = fVar10 * local_70;
            fVar10 = fVar10 * fVar13;
          }
          else {
            local_70 = DAT_1468b5d98;
            fVar10 = DAT_1468b5d94;
            fVar12 = DAT_1468b5d90;
          }
          local_78 = CONCAT44(fVar10,fVar12);
        }
        *param_2 = local_78;
        *(float *)(param_2 + 1) = local_70;
      }
      if (local_58 != (float *)0x0) {
        FMemory::Free(local_58);
      }
    }
    else {
      lVar6 = lVar5;
      if (*(longlong *)(param_1 + 0x140) != 0) {
        lVar8 = UEnvQueryContext::GetPrivateStaticClass();
        for (lVar3 = *(longlong *)(param_1 + 0x140);
            (lVar6 = lVar5, lVar3 != 0 && (lVar6 = *(longlong *)(param_1 + 0x140), lVar3 != lVar8));
            lVar3 = *(longlong *)(lVar3 + 0x30)) {
        }
      }
      FUN_142bed8a0(param_3,lVar6,&local_68);
      if (0 < (int)local_60) {
        puVar7 = (undefined8 *)FRotator::Vector(local_68,&local_78);
        uVar2 = *(undefined4 *)(puVar7 + 1);
        *param_2 = *puVar7;
        *(undefined4 *)(param_2 + 1) = uVar2;
      }
    }
    if (local_68 != (float *)0x0) {
      FMemory::Free();
    }
  }
  return param_2;
}



// FUNCTION 142bfb350 FUN_142bfb350 body=109 status=ok
// SIG undefined FUN_142bfb350(void)

void FUN_142bfb350(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x37c) & 0x10) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
    }
    lVar1 = UCrowdManager::GetCurrent(lVar1);
    if (lVar1 != 0) {
      uVar2 = UCrowdAgentInterface::GetPrivateStaticClass();
      uVar2 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar2);
      TSet<TTuple<UObjectBase_const_*,FLightComponentLegacyMapBuildData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLightComponentLegacyMapBuildData,0>,FDefaultSetAllocator>
      ::Remove(lVar1 + 0x78,uVar2);
      *(uint *)(param_1 + 0x37c) = *(uint *)(param_1 + 0x37c) & 0xffffffef;
      *(undefined1 *)(param_1 + 0x399) = 2;
    }
  }
  return;
}



// FUNCTION 142bfb3c0 FUN_142bfb3c0 body=90 status=ok
// SIG undefined FUN_142bfb3c0(void)

void FUN_142bfb3c0(longlong param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0x188);
  FAIResourceLock::ClearLock(param_1 + 0x188);
  if ((sVar1 != 0) && (*(short *)(param_1 + 0x188) == 0)) {
    (**(code **)(*(longlong *)(param_1 + -0x178) + 0x440))
              ((longlong *)(param_1 + -0x178),DAT_146b2c570);
  }
  return;
}



// FUNCTION 142bfb420 FUN_142bfb420 body=68 status=ok
// SIG undefined FUN_142bfb420(void)

void FUN_142bfb420(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14580a8a8;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  }
  return;
}



// FUNCTION 142bfb470 FUN_142bfb470 body=1888 status=ok
// SIG undefined FUN_142bfb470(void)

void FUN_142bfb470(longlong param_1,float *param_2,float *param_3,float *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_res8 [2];
  undefined8 local_168;
  float local_160;
  undefined8 local_158;
  float local_150;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  undefined8 local_130;
  float local_128;
  undefined1 local_118 [12];
  undefined4 uStack_10c;
  undefined1 local_108 [12];
  undefined4 uStack_fc;
  undefined4 uStack_ec;
  undefined4 uStack_dc;
  undefined4 uStack_cc;
  
  if (*(longlong *)(param_1 + 0x1e8) == 0) {
    return;
  }
  lVar7 = *(longlong *)(param_1 + 0x1c8);
  if (lVar7 == 0) {
    return;
  }
  if (*(longlong *)(lVar7 + 0x178) == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x2d4);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x1e8) + 0x30);
  fVar19 = 0.0;
  local_144 = 0.0;
  local_13c = 0.0;
  lVar7 = *(longlong *)(lVar7 + 0x178);
  local_148 = 0.05;
  if (lVar7 == 0) {
    local_160 = DAT_1466910d8;
    puVar6 = &local_168;
    local_168 = DAT_1466910d0;
  }
  else {
    puVar6 = &local_158;
    local_158 = *(undefined8 *)(lVar7 + 0x220);
    local_150 = *(float *)(lVar7 + 0x228) - *(float *)(lVar7 + 0x1e4);
  }
  local_130 = *puVar6;
  local_128 = *(float *)(puVar6 + 1);
  FUN_1422e15c0(param_1 + 0x230,&local_158);
  fVar14 = *(float *)(param_1 + 0x200);
  local_134 = fVar14;
  if (iVar2 + -1 <= iVar1) {
    uVar5 = FNavigationPath::GetPathPointLocation
                      (*(longlong *)(param_1 + 0x1e8),local_108,
                       *(int *)(*(longlong *)(param_1 + 0x1e8) + 0x30) + -1);
    puVar6 = (undefined8 *)FUN_1422e15c0(uVar5,&local_168);
    local_158 = *puVar6;
    local_148 = *(float *)(param_1 + 0x204);
    local_150 = *(float *)(puVar6 + 1);
    cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x220);
    if ((cVar4 != '\0') && ((*(uint *)(*(longlong *)(param_1 + 0x1e8) + 0x98) >> 2 & 1) == 0)) {
      plVar3 = *(longlong **)(param_1 + 0x228);
      if (plVar3 == (longlong *)0x0) {
        lVar7 = FWeakObjectPtr::Get(param_1 + 0x220);
        lVar7 = *(longlong *)(lVar7 + 0x168);
        if (lVar7 == 0) {
          local_168 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
          local_160 = DAT_1468b5d98;
        }
        else {
          local_168 = *(undefined8 *)(lVar7 + 0x220);
          local_160 = *(float *)(lVar7 + 0x228);
        }
        local_158 = local_168;
        local_150 = local_160;
        fVar19 = (float)((ulonglong)local_168 >> 0x20);
        fVar16 = (float)local_168;
      }
      else {
        (**(code **)(*plVar3 + 0x38))
                  (plVar3,*(undefined8 *)(param_1 + 0x118),param_1 + 0x274,&local_168,&local_144,
                   &local_13c);
        lVar7 = FWeakObjectPtr::Get(param_1 + 0x220);
        lVar7 = *(longlong *)(lVar7 + 0x168);
        if (lVar7 == 0) {
          fVar14 = 0.0;
          fVar17 = 0.0;
          fVar20 = 1.0;
        }
        else {
          fVar14 = *(float *)(lVar7 + 0x210);
          fVar17 = *(float *)(lVar7 + 0x214);
          fVar19 = *(float *)(lVar7 + 0x218);
          fVar20 = *(float *)(lVar7 + 0x21c);
        }
        pfVar8 = (float *)(**(code **)(**(longlong **)(param_1 + 0x228) + 0x18))
                                    (*(longlong **)(param_1 + 0x228),local_118);
        fVar18 = local_160;
        uStack_cc = 0x3f800000;
        fVar10 = fVar19 + fVar19;
        uStack_dc = 0;
        uStack_fc = 0;
        fVar15 = fVar17 + fVar17;
        uStack_ec = 0;
        fVar13 = (fVar14 + fVar14) * fVar14;
        fVar21 = (fVar14 + fVar14) * fVar20;
        local_138 = fVar10 * fVar20 + fVar15 * fVar14;
        fVar11 = (float)local_168;
        fVar9 = local_168._4_4_;
        uStack_10c = 0x3f800000;
        local_168 = 0;
        local_160 = 0.0;
        fVar16 = *pfVar8 * 1.0 + fVar18 * (fVar15 * fVar20 + fVar10 * fVar14) +
                 fVar9 * (fVar15 * fVar14 - fVar10 * fVar20) +
                 fVar11 * (1.0 - (fVar10 * fVar19 + fVar15 * fVar17));
        fVar19 = pfVar8[1] * 1.0 + fVar18 * (fVar10 * fVar17 - fVar21) +
                 fVar9 * (1.0 - (fVar10 * fVar19 + fVar13)) + fVar11 * local_138;
        local_150 = pfVar8[2] * 1.0 + fVar18 * (1.0 - (fVar15 * fVar17 + fVar13)) +
                    fVar9 * (fVar21 + fVar10 * fVar17) +
                    fVar11 * (fVar10 * fVar14 - fVar15 * fVar20);
        local_158 = CONCAT44(fVar19,fVar16);
        fVar14 = local_134;
      }
      goto LAB_142bfb9c3;
    }
  }
  fVar19 = local_158._4_4_;
  fVar16 = (float)local_158;
LAB_142bfb9c3:
  fVar16 = fVar16 - (float)local_130;
  fVar19 = fVar19 - local_130._4_4_;
  fVar10 = local_150 - local_128;
  FUN_142c00e60(param_1,&local_168);
  fVar18 = fVar16 * fVar16 + fVar19 * fVar19;
  fVar9 = fVar10 * fVar10 + fVar18;
  fVar17 = fVar10;
  fVar20 = fVar19;
  fVar11 = fVar16;
  if ((fVar9 != 1.0) &&
     (fVar17 = DAT_1468b5d98, fVar20 = DAT_1468b5d94, fVar11 = DAT_1468b5d90, 1e-08 <= fVar9)) {
    auVar12 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
    fVar11 = auVar12._0_4_;
    fVar11 = fVar11 + fVar11 * (0.5 - fVar9 * 0.5 * fVar11 * fVar11);
    fVar11 = fVar11 + fVar11 * (0.5 - fVar9 * 0.5 * fVar11 * fVar11);
    fVar17 = fVar10 * fVar11;
    fVar20 = fVar19 * fVar11;
    fVar11 = fVar16 * fVar11;
  }
  local_res8[0] = 0.0;
  local_140 = 0.0;
  fVar19 = (float)local_168 * fVar11 + local_168._4_4_ * fVar20 + local_160 * fVar17;
  *param_2 = fVar19;
  *(bool *)param_5 = fVar19 < 0.0;
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x1c8) + 0x118);
  (**(code **)(*plVar3 + 0x578))(plVar3,local_res8,&local_140);
  local_144 = local_res8[0] * local_148 + local_144;
  fVar18 = SQRT(fVar18);
  if (local_144 <= fVar14) {
    local_144 = fVar14;
  }
  *param_3 = fVar18;
  *(bool *)param_6 = local_144 < fVar18;
  *param_4 = ABS(fVar10);
  *(bool *)param_7 = local_140 * *(float *)(param_1 + 0x208) + local_13c < ABS(fVar10);
  return;
}



// FUNCTION 142bfbc10 FUN_142bfbc10 body=560 status=ok
// SIG undefined FUN_142bfbc10(void)

uint FUN_142bfbc10(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined8 local_88;
  float local_80;
  float local_78;
  float local_74;
  float local_70;
  undefined8 local_68;
  float local_60;
  undefined1 local_58 [80];
  
  uVar7 = 0xffffffff;
  uVar8 = uVar7;
  if ((((param_2 != 0) && ((*(uint *)(param_2 + 0x98) & 2) != 0)) && (1 < *(int *)(param_2 + 0x30)))
     && ((*(uint *)(param_2 + 0x98) & 1) != 0)) {
    if (((*(longlong *)(param_1 + 0x2d8) != 0) && (*(longlong *)(param_1 + 0x2e0) != 0)) &&
       (lVar2 = FWeakObjectPtr::Get(param_2 + 0x9c), lVar2 != 0)) {
      uVar9 = 0;
      iVar5 = *(int *)(param_2 + 0x30) + -1;
      if (0 < iVar5) {
        lVar2 = 0;
        plVar6 = (longlong *)(*(longlong *)(param_2 + 0x28) + 0x10);
        do {
          if ((*plVar6 == *(longlong *)(param_1 + 0x2d8)) &&
             (uVar8 = uVar9, plVar6[4] == *(longlong *)(param_1 + 0x2e0))) break;
          uVar9 = uVar9 + 1;
          lVar2 = lVar2 + 1;
          plVar6 = plVar6 + 4;
          uVar8 = uVar7;
        } while (lVar2 < iVar5);
      }
    }
    if ((*(longlong *)(param_1 + 0x1c8) != 0) && (uVar8 == 0xffffffff)) {
      if (*(int *)(param_2 + 0x30) < 3) {
        uVar8 = 0;
      }
      else {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x178);
        if (lVar2 == 0) {
          local_60 = DAT_1466910d8;
          puVar3 = &local_68;
          local_68 = DAT_1466910d0;
        }
        else {
          local_88 = *(undefined8 *)(lVar2 + 0x220);
          puVar3 = &local_88;
          local_80 = *(float *)(lVar2 + 0x228) - *(float *)(lVar2 + 0x1e4);
        }
        uVar1 = *puVar3;
        fVar11 = (float)uVar1;
        local_80 = *(float *)(puVar3 + 1);
        uVar4 = FNavigationPath::GetPathPointLocation(param_2,local_58,0);
        FUN_1422e15c0(uVar4,&local_78);
        uVar4 = FNavigationPath::GetPathPointLocation(param_2,local_58,1);
        FUN_1422e15c0(uVar4,&local_68);
        local_78 = fVar11 - local_78;
        local_88._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
        fVar11 = fVar11 - (float)local_68;
        fVar10 = (local_88._4_4_ - local_74) * (local_88._4_4_ - local_74) + local_78 * local_78;
        fVar11 = (local_88._4_4_ - local_68._4_4_) * (local_88._4_4_ - local_68._4_4_) +
                 fVar11 * fVar11;
        if (1e-08 < ABS(fVar10 - fVar11)) {
          uVar8 = (uint)(fVar11 <= fVar10);
        }
        else {
          uVar8 = (uint)(ABS(local_80 - local_60) <= ABS(local_80 - local_70));
        }
      }
    }
  }
  return uVar8;
}



// FUNCTION 142bfbe40 FUN_142bfbe40 body=695 status=ok
// SIG undefined FUN_142bfbe40(void)

void FUN_142bfbe40(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined8 local_res8;
  float local_58;
  float local_54;
  float local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined2 *local_38;
  int local_30;
  longlong local_28 [2];
  
  plVar1 = (longlong *)(param_2 + 0x98);
  local_48 = (undefined2 *)
             CONCAT44((float)DAT_1464aa740._1_1_ * 0.003921569,
                      (float)DAT_1464aa740._2_1_ * 0.003921569);
  local_40 = CONCAT44((float)DAT_1464aa740._3_1_ * 0.003921569,
                      (float)(byte)DAT_1464aa740 * 0.003921569);
  (**(code **)(*plVar1 + 0x20))(plVar1,&local_48);
  local_res8 = (ulonglong)local_res8._4_4_ << 0x20;
  puVar3 = (undefined8 *)FUN_142c08ee0(param_1,&local_48);
  puVar6 = &DAT_143f3eda8;
  if (*(int *)(puVar3 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*puVar3;
  }
  FString::PrintfImpl(&local_38,L"  Move status: %s",puVar4);
  FUN_1428a6fb0(plVar1,&local_38,&local_res8);
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (*(int *)(param_1 + 0x1e0) == 3) {
    lVar2 = *(longlong *)(param_1 + 0x1e8);
    if ((((lVar2 == 0) || ((*(uint *)(lVar2 + 0x98) & 2) == 0)) ||
        (iVar7 = *(int *)(lVar2 + 0x30), iVar7 < 2)) || ((*(uint *)(lVar2 + 0x98) & 1) == 0)) {
      iVar7 = -1;
    }
    puVar4 = (undefined2 *)FWeakObjectPtr::Get(param_1 + 0x220);
    if (puVar4 == (undefined2 *)0x0) {
      local_40 = 5;
      local_48 = puVar4;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      FGenericPlatformString::Memcpy(local_48,&DAT_143f3edc8,10);
    }
    else {
      local_res8 = *(ulonglong *)(puVar4 + 0xc);
      FName::ToString(&local_res8,&local_48);
    }
    puVar4 = &DAT_143f3eda8;
    if ((int)local_40 != 0) {
      puVar4 = local_48;
    }
    FUN_1422e15c0(param_1 + 0x230,&local_58);
    FString::PrintfImpl(&local_38,L"X=%3.3f Y=%3.3f Z=%3.3f",(double)local_58,(double)local_54,
                        (double)local_50);
    puVar5 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar5 = local_38;
    }
    FString::PrintfImpl(local_28,L"  Move target [%d/%d]: %s (%s)",*(undefined4 *)(param_1 + 0x2d4),
                        iVar7,puVar5,puVar4);
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_res8 = local_res8 & 0xffffffff00000000;
    puVar3 = (undefined8 *)FUN_142c08ee0(param_1,&local_48);
    if (*(int *)(puVar3 + 1) != 0) {
      puVar6 = (undefined2 *)*puVar3;
    }
    FString::PrintfImpl(&local_38,L"  Move status: %s",puVar6);
    FUN_1428a6fb0(plVar1,&local_38,&local_res8);
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142bfc100 Execute body=241 status=ok
// SIG undefined Execute(void)

undefined8
TBaseUObjectMethodDelegateInstance<1,UEnvQueryTest_Pathfinding_const_,float___cdecl(FVector_const_&,FVector_const_&,enum_EPathFindingMode::Type,ANavigationData_const_&,UNavigationSystemV1_&,TSharedPtr<FNavigationQueryFilter_const_,1>,UObject_const_*)>
::Execute(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
         undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 local_28;
  longlong local_20;
  
  uVar7 = FWeakObjectPtr::Get(param_1 + 8);
  pcVar4 = *(code **)(param_1 + 0x10);
  local_28 = *param_7;
  local_20 = param_7[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  uVar7 = (*pcVar4)(uVar7,param_2,param_3,param_4,param_5,param_6,&local_28,param_8);
  plVar5 = (longlong *)param_7[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return uVar7;
}



// FUNCTION 142bfc200 FindLocalNavigationGridPath body=82 status=ok
// SIG undefined FindLocalNavigationGridPath(void)

void UNavLocalGridManager::FindLocalNavigationGridPath
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_142c00de0();
  if (lVar1 != 0) {
    FindPath(lVar1,param_2,param_3,param_4);
    return;
  }
  return;
}



// FUNCTION 142bfc260 FindPath body=471 status=ok
// SIG undefined FindPath(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FNavLocalGridData::FindPath(longlong param_1,int *param_2,int *param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_138 [32];
  longlong *local_118;
  longlong local_108;
  undefined8 local_100;
  longlong local_f8 [2];
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  int iStack_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_90;
  undefined4 local_88;
  longlong *local_80;
  longlong local_78 [2];
  longlong *local_68;
  undefined8 **local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  iVar4 = param_2[1];
  iVar1 = *param_2;
  if ((((iVar1 < 0) || (*(int *)(param_1 + 0x3c) <= iVar1)) || (iVar4 < 0)) ||
     (*(int *)(param_1 + 0x40) <= iVar4)) {
    iVar4 = -1;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x40) * iVar1 + iVar4;
  }
  iVar1 = *param_3;
  iVar2 = param_3[1];
  if (((iVar1 < 0) || (*(int *)(param_1 + 0x3c) <= iVar1)) ||
     ((iVar2 < 0 || (*(int *)(param_1 + 0x40) <= iVar2)))) {
    iVar2 = -1;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x40) * iVar1 + iVar2;
  }
  local_108 = 0;
  local_100 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0xffffffff;
  local_9c = 0;
  local_90 = 0;
  local_88 = 0;
  local_e8 = param_1;
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeTo
            (&local_e0,0x40);
  local_80 = &local_e0;
  local_78[0] = 0;
  local_68 = &local_e0;
  local_78[1] = 0;
  local_60 = &local_80;
  TArray<float,FDefaultAllocator>::ResizeTo(local_78,0x40);
  if (iStack_d4 < 0x40) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeTo
              (&local_e0,0x40);
  }
  local_118 = &local_108;
  local_f8[0] = param_1;
  FGraphAStar<FNavLocalGridData,FGraphAStarDefaultPolicy,FGraphAStarDefaultNode<FNavLocalGridData>_>
  ::FindPath<FGridHelpers::FGridPathFilter>(&local_e8,iVar4,iVar2,local_f8);
  if ((int)local_100 == 0) {
    uVar3 = 0;
  }
  else {
    *(undefined4 *)(param_4 + 1) = 0;
    if (0x7fffffff < *(uint *)((longlong)param_4 + 0xc)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                (param_4,0);
    }
    local_118 = param_4;
    PostProcessPath(param_1,param_2,param_3,&local_108);
    uVar3 = 1;
  }
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  local_88 = 0;
  if (local_90 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_d0);
  if (local_e0 != 0) {
    FMemory::Free();
  }
  if (local_108 != 0) {
    FMemory::Free();
  }
  return uVar3;
}



// FUNCTION 142bfc440 FindPath body=592 status=ok
// SIG undefined FindPath(void)

undefined8
UNavLocalGridManager::FindPath(longlong param_1,float *param_2,float *param_3,longlong *param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  ulonglong uVar9;
  float fVar10;
  int local_38;
  int local_34;
  undefined4 local_30;
  int local_28;
  int local_24;
  undefined4 local_20;
  int *local_18;
  ulonglong local_10;
  
  iVar3 = GetGridIndex();
  iVar4 = GetGridIndex(param_1,param_3);
  if ((iVar3 == iVar4) && (iVar3 != -1)) {
    lVar5 = *(longlong *)(param_1 + 0x28) + (longlong)iVar3 * 0x90;
    fVar10 = 1.0 / *(float *)(lVar5 + 4);
    iVar3 = *(int *)(lVar5 + 0x40) + -1;
    iVar7 = (int)((*param_2 - *(float *)(lVar5 + 0x24)) * fVar10);
    iVar4 = (int)((param_2[1] - *(float *)(lVar5 + 0x28)) * fVar10);
    local_24 = 0;
    if ((-1 < iVar4) && (local_24 = iVar3, iVar4 < iVar3)) {
      local_24 = iVar4;
    }
    iVar4 = *(int *)(lVar5 + 0x3c) + -1;
    local_38 = 0;
    local_28 = local_38;
    if ((-1 < iVar7) && (local_28 = iVar4, iVar7 < iVar4)) {
      local_28 = iVar7;
    }
    local_20 = 0;
    iVar7 = (int)((*param_3 - *(float *)(lVar5 + 0x24)) * fVar10);
    iVar6 = (int)((param_3[1] - *(float *)(lVar5 + 0x28)) * fVar10);
    local_34 = local_38;
    if ((-1 < iVar6) && (local_34 = iVar3, iVar6 < iVar3)) {
      local_34 = iVar6;
    }
    if ((-1 < iVar7) && (local_38 = iVar4, iVar7 < iVar4)) {
      local_38 = iVar7;
    }
    local_30 = 0;
    local_18 = (int *)0x0;
    local_10 = 0;
    cVar2 = FNavLocalGridData::FindPath(lVar5,&local_28,&local_38,&local_18);
    if (cVar2 != '\0') {
      iVar4 = (int)local_10;
      uVar9 = local_10 & 0xffffffff;
      iVar3 = (int)param_4[1];
      if (iVar3 < (int)local_10) {
        *(int *)(param_4 + 1) = (int)local_10;
        if (*(int *)((longlong)param_4 + 0xc) < (int)local_10) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_4,iVar3);
        }
      }
      else if (((int)local_10 < iVar3) && (iVar3 - (int)local_10 != 0)) {
        *(int *)(param_4 + 1) = iVar3 - (iVar3 - (int)local_10);
        TArray<FVector,FDefaultAllocator>::ResizeShrink(param_4);
      }
      piVar8 = local_18;
      if (0 < iVar4) {
        do {
          lVar1 = *param_4;
          local_20 = *(undefined4 *)
                      (*(longlong *)(lVar5 + 0x58) +
                      (longlong)(*(int *)(lVar5 + 0x40) * *piVar8 + piVar8[1]) * 4);
          *(ulonglong *)((longlong)piVar8 + (lVar1 - (longlong)local_18)) =
               CONCAT44(((float)piVar8[1] + 0.5) * *(float *)(lVar5 + 4) + *(float *)(lVar5 + 0x28),
                        ((float)*piVar8 + 0.5) * *(float *)(lVar5 + 4) + *(float *)(lVar5 + 0x24));
          *(undefined4 *)((longlong)piVar8 + lVar1 + (8 - (longlong)local_18)) = local_20;
          uVar9 = uVar9 - 1;
          piVar8 = piVar8 + 3;
        } while (uVar9 != 0);
      }
      if (local_18 != (int *)0x0) {
        FMemory::Free(local_18);
      }
      return 1;
    }
    if (local_18 != (int *)0x0) {
      FMemory::Free();
    }
  }
  return 0;
}



// FUNCTION 142bfc690 FindPathCostFrom body=499 status=ok
// SIG undefined FindPathCostFrom(void)

undefined8
UEnvQueryTest_Pathfinding::FindPathCostFrom
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 local_158;
  longlong local_150;
  longlong *local_148;
  longlong *local_140;
  int local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_118 [40];
  longlong *local_f0;
  uint local_e4;
  longlong *local_d0;
  longlong local_a8;
  undefined1 local_98 [144];
  
  local_130 = 0;
  uStack_128 = 0;
  local_158 = *param_7;
  local_150 = param_7[1];
  if (local_150 != 0) {
    LOCK();
    *(int *)(local_150 + 8) = *(int *)(local_150 + 8) + 1;
    UNLOCK();
  }
  FUN_142b80bd0(local_118,param_8,param_5,param_2,param_3,&local_158,&local_130);
  local_e4 = local_e4 & 0xfffffffe;
  uVar6 = FUN_142b80820(local_98,local_118);
  FUN_142b8cc30(param_6,&local_148,uVar6,param_4);
  if (local_138 == 3) {
    uVar6 = (**(code **)(*local_148 + 0x30))(local_148,0);
  }
  else {
    uVar6 = 0x7f7fc99e;
  }
  if (local_140 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_140 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_140)(local_140);
      LOCK();
      piVar1 = (int *)((longlong)local_140 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_140 + 8))(local_140,1);
      }
    }
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_d0 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)local_d0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_d0 + 8))(local_d0,1);
      }
    }
  }
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_f0 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar1 = (int *)((longlong)local_f0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_f0 + 8))(local_f0,1);
      }
    }
  }
  plVar4 = (longlong *)param_7[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return uVar6;
}



// FUNCTION 142bfc890 FindPathCostTo body=499 status=ok
// SIG undefined FindPathCostTo(void)

undefined8
UEnvQueryTest_Pathfinding::FindPathCostTo
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 local_158;
  longlong local_150;
  longlong *local_148;
  longlong *local_140;
  int local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_118 [40];
  longlong *local_f0;
  uint local_e4;
  longlong *local_d0;
  longlong local_a8;
  undefined1 local_98 [144];
  
  local_130 = 0;
  uStack_128 = 0;
  local_158 = *param_7;
  local_150 = param_7[1];
  if (local_150 != 0) {
    LOCK();
    *(int *)(local_150 + 8) = *(int *)(local_150 + 8) + 1;
    UNLOCK();
  }
  FUN_142b80bd0(local_118,param_8,param_5,param_3,param_2,&local_158,&local_130);
  local_e4 = local_e4 & 0xfffffffe;
  uVar6 = FUN_142b80820(local_98,local_118);
  FUN_142b8cc30(param_6,&local_148,uVar6,param_4);
  if (local_138 == 3) {
    uVar6 = (**(code **)(*local_148 + 0x30))(local_148,0);
  }
  else {
    uVar6 = 0x7f7fc99e;
  }
  if (local_140 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_140 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_140)(local_140);
      LOCK();
      piVar1 = (int *)((longlong)local_140 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_140 + 8))(local_140,1);
      }
    }
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_d0 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)local_d0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_d0 + 8))(local_d0,1);
      }
    }
  }
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_f0 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar1 = (int *)((longlong)local_f0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_f0 + 8))(local_f0,1);
      }
    }
  }
  plVar4 = (longlong *)param_7[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return uVar6;
}



// FUNCTION 142bfca90 FindPathForMovingAgent body=1899 status=ok
// SIG undefined FindPathForMovingAgent(void)

void FNavLocalGridData::FindPathForMovingAgent
               (longlong param_1,longlong param_2,float *param_3,int param_4,longlong *param_5,
               int *param_6)

{
  longlong lVar1;
  bool bVar2;
  int *piVar3;
  char cVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  int *piVar11;
  int iVar12;
  float fVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 local_res20 [8];
  float local_f8;
  float fStack_f4;
  undefined4 local_f0;
  float local_e8;
  float fStack_e4;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  int *local_c8;
  ulonglong local_c0;
  
  iVar15 = *(int *)(param_1 + 0x40);
  fVar24 = *(float *)(param_1 + 4);
  fStack_e4 = (float)(iVar15 + -1);
  fVar25 = *(float *)(param_1 + 0x24);
  fVar19 = 1.0 / fVar24;
  fVar5 = (float)(int)((*param_3 - fVar25) * fVar19);
  fVar8 = (float)(int)((param_3[1] - *(float *)(param_1 + 0x28)) * fVar19);
  if ((int)fVar8 < 0) {
    fVar22 = 0.0;
  }
  else {
    fVar22 = fStack_e4;
    if ((int)fVar8 < (int)fStack_e4) {
      fVar22 = fVar8;
    }
  }
  local_e8 = (float)(*(int *)(param_1 + 0x3c) + -1);
  if ((int)fVar5 < 0) {
    fVar8 = 0.0;
  }
  else {
    fVar8 = local_e8;
    if ((int)fVar5 < (int)local_e8) {
      fVar8 = fVar5;
    }
  }
  iVar12 = *(int *)(param_2 + 0x30);
  puVar17 = &DAT_1466910d0;
  local_f0 = 0;
  if (iVar12 < 1) {
    puVar14 = &DAT_1466910d0;
  }
  else {
    puVar14 = (undefined8 *)
              ((longlong)(*(int *)(param_2 + 0x30) + -1) * 0x20 + *(longlong *)(param_2 + 0x28));
  }
  local_c8 = (int *)*puVar14;
  fVar5 = (float)(int)((SUB84(local_c8,0) - fVar25) * fVar19);
  fVar19 = (float)(int)(((float)((ulonglong)local_c8 >> 0x20) - *(float *)(param_1 + 0x28)) * fVar19
                       );
  if ((int)fVar19 < 0) {
    fStack_e4 = 0.0;
  }
  else if ((int)fVar19 < (int)fStack_e4) {
    fStack_e4 = fVar19;
  }
  if ((int)fVar5 < 0) {
    local_e8 = 0.0;
  }
  else if ((int)fVar5 < (int)local_e8) {
    local_e8 = fVar5;
  }
  param_4 = param_4 + 1;
  local_e0 = 0;
  local_f8 = fVar8;
  fStack_f4 = fVar22;
  local_c0._0_4_ = *(float *)(puVar14 + 1);
  if (param_4 < iVar12) {
    lVar1 = *(longlong *)(param_2 + 0x28);
    lVar10 = (longlong)param_4;
    pfVar7 = (float *)(lVar10 * 0x20 + lVar1);
    do {
      if (((((*pfVar7 <= *(float *)(param_1 + 8)) || (*(float *)(param_1 + 0x14) <= *pfVar7)) ||
           (fVar5 = pfVar7[1],
           fVar5 < *(float *)(param_1 + 0xc) || fVar5 == *(float *)(param_1 + 0xc))) ||
          ((*(float *)(param_1 + 0x18) <= fVar5 ||
           (fVar5 = pfVar7[2],
           fVar5 < *(float *)(param_1 + 0x10) || fVar5 == *(float *)(param_1 + 0x10))))) ||
         (*(float *)(param_1 + 0x1c) <= fVar5)) {
        FMath::LineExtentBoxIntersection
                  ((float *)(param_1 + 8),(longlong)param_4 * 0x20 + lVar1,
                   (longlong)(param_4 + -1) * 0x20 + lVar1,&DAT_1468b5d90,&local_d8,&local_c8,
                   local_res20);
        fVar24 = *(float *)(param_1 + 4);
        fVar25 = *(float *)(param_1 + 0x24);
        iVar15 = *(int *)(param_1 + 0x40);
        fVar19 = (float)(int)(((float)local_d8 - fVar25) * (1.0 / fVar24));
        fVar5 = (float)(int)((local_d8._4_4_ - *(float *)(param_1 + 0x28)) * (1.0 / fVar24));
        if ((int)fVar5 < 0) {
          fStack_e4 = 0.0;
        }
        else {
          fStack_e4 = (float)(iVar15 + -1);
          if ((int)fVar5 < iVar15 + -1) {
            fStack_e4 = fVar5;
          }
        }
        iVar12 = *(int *)(param_1 + 0x3c);
        if ((int)fVar19 < 0) {
          local_e8 = 0.0;
        }
        else {
          local_e8 = (float)(iVar12 + -1);
          if ((int)fVar19 < iVar12 + -1) {
            local_e8 = fVar19;
          }
        }
        goto LAB_142bfcc58;
      }
      param_4 = param_4 + 1;
      lVar10 = lVar10 + 1;
      pfVar7 = pfVar7 + 8;
    } while (lVar10 < iVar12);
  }
  iVar12 = *(int *)(param_1 + 0x3c);
LAB_142bfcc58:
  local_e0 = 0;
  local_d8 = (int *)CONCAT44(fStack_f4,local_f8);
  local_d0 = 0;
  if ((((int)fVar8 < 0) || (iVar12 <= (int)fVar8)) || (((int)fVar22 < 0 || (iVar15 <= (int)fVar22)))
     ) {
    iVar15 = -1;
  }
  else {
    iVar15 = iVar15 * (int)fVar8 + (int)fVar22;
  }
  bVar2 = false;
  if ((iVar15 == -1) || (*(char *)((longlong)iVar15 + *(longlong *)(param_1 + 0x48)) != '\0')) {
    if (0 < *(int *)(param_2 + 0x30)) {
      puVar17 = (undefined8 *)
                ((longlong)(*(int *)(param_2 + 0x30) + -1) * 0x20 + *(longlong *)(param_2 + 0x28));
    }
    local_c0._0_4_ = *(float *)(puVar17 + 1);
    fVar22 = *param_3 - (float)*puVar17;
    fVar23 = param_3[1] - (float)((ulonglong)*puVar17 >> 0x20);
    fVar19 = fVar23 * fVar23 + fVar22 * fVar22 +
             (param_3[2] - (float)local_c0) * (param_3[2] - (float)local_c0);
    fVar5 = fVar22;
    fVar8 = fVar23;
    if ((fVar19 != 1.0) && (fVar5 = DAT_1468b5d90, fVar8 = DAT_1468b5d94, 1e-08 <= fVar19)) {
      auVar20._8_8_ = 0;
      auVar20._0_8_ = CONCAT44(0,fVar19);
      auVar21._8_8_ = 0;
      auVar21._0_8_ = CONCAT44(0,fVar19);
      auVar21 = rsqrtss(auVar20,auVar21);
      fVar8 = auVar21._0_4_;
      fVar8 = fVar8 + fVar8 * (0.5 - fVar19 * 0.5 * fVar8 * fVar8);
      fVar8 = fVar8 + fVar8 * (0.5 - fVar19 * 0.5 * fVar8 * fVar8);
      fVar5 = fVar22 * fVar8;
      fVar8 = fVar23 * fVar8;
    }
    iVar15 = *(int *)(param_1 + 0x40);
    iVar16 = 1;
    fVar19 = fStack_f4;
    fVar22 = local_f8;
    do {
      fVar23 = (float)(int)(((fVar5 * 10.0 * (float)iVar16 + *param_3) - fVar25) * (1.0 / fVar24));
      fVar9 = (float)(int)(((fVar8 * 10.0 * (float)iVar16 + param_3[1]) - *(float *)(param_1 + 0x28)
                           ) * (1.0 / fVar24));
      if ((int)fVar9 < 0) {
        fVar13 = 0.0;
      }
      else {
        fVar13 = (float)(iVar15 + -1);
        if ((int)fVar9 < iVar15 + -1) {
          fVar13 = fVar9;
        }
      }
      if ((int)fVar23 < 0) {
        fVar9 = 0.0;
      }
      else {
        fVar9 = (float)(iVar12 + -1);
        if ((int)fVar23 < iVar12 + -1) {
          fVar9 = fVar23;
        }
      }
      local_c8 = local_d8;
      if ((((fVar9 != fVar22) || (fVar13 != fVar19)) &&
          (fVar19 = fVar13, fVar22 = fVar9, -1 < (int)fVar9)) &&
         ((((int)fVar9 < *(int *)(param_1 + 0x3c) && (-1 < (int)fVar13)) &&
          (((int)fVar13 < iVar15 &&
           ((iVar6 = iVar15 * (int)fVar9 + (int)fVar13, iVar6 != -1 &&
            (*(char *)((longlong)iVar6 + *(longlong *)(param_1 + 0x48)) == '\0')))))))) {
        bVar2 = true;
        local_f0 = 0;
        local_f8 = fVar9;
        fStack_f4 = fVar13;
        goto LAB_142bfcfcb;
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < 0xf);
    bVar2 = false;
  }
LAB_142bfcfcb:
  *param_6 = param_4 + -1;
  *(undefined4 *)(param_5 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_5 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_5,0);
  }
  local_c8 = (int *)0x0;
  local_c0 = 0;
  cVar4 = FindPath(param_1,&local_f8,&local_e8,&local_c8);
  piVar3 = local_c8;
  if (cVar4 != '\0') {
    if (bVar2) {
      iVar15 = (int)param_5[1];
      fStack_e4 = ((float)(int)local_d8._4_4_ + 0.5) * *(float *)(param_1 + 4) +
                  *(float *)(param_1 + 0x28);
      local_e0 = *(undefined4 *)
                  (*(longlong *)(param_1 + 0x58) +
                  (longlong)(*(int *)(param_1 + 0x40) * (int)(float)local_d8 + (int)local_d8._4_4_)
                  * 4);
      local_e8 = ((float)(int)(float)local_d8 + 0.5) * *(float *)(param_1 + 4) +
                 *(float *)(param_1 + 0x24);
      *(int *)(param_5 + 1) = iVar15 + 1;
      if (*(int *)((longlong)param_5 + 0xc) < iVar15 + 1) {
        TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_5,iVar15);
      }
      lVar1 = *param_5;
      *(ulonglong *)(lVar1 + (longlong)iVar15 * 0xc) = CONCAT44(fStack_e4,local_e8);
      *(undefined4 *)(lVar1 + 8 + (longlong)iVar15 * 0xc) = local_e0;
    }
    if (0 < (int)(float)local_c0) {
      uVar18 = local_c0 & 0xffffffff;
      piVar11 = piVar3;
      do {
        iVar15 = (int)param_5[1];
        local_e8 = ((float)*piVar11 + 0.5) * *(float *)(param_1 + 4) + *(float *)(param_1 + 0x24);
        fStack_e4 = ((float)piVar11[1] + 0.5) * *(float *)(param_1 + 4) + *(float *)(param_1 + 0x28)
        ;
        local_e0 = *(undefined4 *)
                    (*(longlong *)(param_1 + 0x58) +
                    (longlong)(*(int *)(param_1 + 0x40) * *piVar11 + piVar11[1]) * 4);
        *(int *)(param_5 + 1) = iVar15 + 1;
        if (*(int *)((longlong)param_5 + 0xc) < iVar15 + 1) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_5,iVar15);
        }
        lVar1 = *param_5;
        piVar11 = piVar11 + 3;
        *(ulonglong *)(lVar1 + (longlong)iVar15 * 0xc) = CONCAT44(fStack_e4,local_e8);
        *(undefined4 *)(lVar1 + 8 + (longlong)iVar15 * 0xc) = local_e0;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
  }
  if (piVar3 != (int *)0x0) {
    FMemory::Free(piVar3);
  }
  return;
}



// FUNCTION 142bfd200 FindPathLengthFrom body=540 status=ok
// SIG undefined FindPathLengthFrom(void)

undefined8
UEnvQueryTest_Pathfinding::FindPathLengthFrom
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  longlong local_150;
  longlong *local_148;
  longlong *local_140;
  int local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_118 [40];
  longlong *local_f0;
  uint local_e4;
  longlong *local_d0;
  longlong local_a8;
  undefined1 local_98 [144];
  
  local_130 = 0;
  uStack_128 = 0;
  local_158 = *param_7;
  local_150 = param_7[1];
  if (local_150 != 0) {
    LOCK();
    *(int *)(local_150 + 8) = *(int *)(local_150 + 8) + 1;
    UNLOCK();
  }
  FUN_142b80bd0(local_118,param_8,param_5,param_2,param_3,&local_158,&local_130);
  local_e4 = local_e4 & 0xfffffffe;
  uVar6 = FUN_142b80820(local_98,local_118);
  FUN_142b8cc30(param_6,&local_148,uVar6,param_4);
  if (local_138 == 3) {
    if ((int)local_148[6] == 0) {
      uVar6 = 0;
    }
    else {
      local_168 = *(undefined8 *)local_148[5];
      local_160 = *(undefined4 *)((undefined8 *)local_148[5] + 1);
      uVar6 = (**(code **)(*local_148 + 0x40))(local_148,&local_168,1);
    }
  }
  else {
    uVar6 = 0x7f7fc99e;
  }
  if (local_140 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_140 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_140)(local_140);
      LOCK();
      piVar1 = (int *)((longlong)local_140 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_140 + 8))(local_140,1);
      }
    }
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_d0 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)local_d0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_d0 + 8))(local_d0,1);
      }
    }
  }
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_f0 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar1 = (int *)((longlong)local_f0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_f0 + 8))(local_f0,1);
      }
    }
  }
  plVar4 = (longlong *)param_7[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return uVar6;
}



// FUNCTION 142bfd420 FindPathLengthTo body=540 status=ok
// SIG undefined FindPathLengthTo(void)

undefined8
UEnvQueryTest_Pathfinding::FindPathLengthTo
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  longlong local_150;
  longlong *local_148;
  longlong *local_140;
  int local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_118 [40];
  longlong *local_f0;
  uint local_e4;
  longlong *local_d0;
  longlong local_a8;
  undefined1 local_98 [144];
  
  local_130 = 0;
  uStack_128 = 0;
  local_158 = *param_7;
  local_150 = param_7[1];
  if (local_150 != 0) {
    LOCK();
    *(int *)(local_150 + 8) = *(int *)(local_150 + 8) + 1;
    UNLOCK();
  }
  FUN_142b80bd0(local_118,param_8,param_5,param_3,param_2,&local_158,&local_130);
  local_e4 = local_e4 & 0xfffffffe;
  uVar6 = FUN_142b80820(local_98,local_118);
  FUN_142b8cc30(param_6,&local_148,uVar6,param_4);
  if (local_138 == 3) {
    if ((int)local_148[6] == 0) {
      uVar6 = 0;
    }
    else {
      local_168 = *(undefined8 *)local_148[5];
      local_160 = *(undefined4 *)((undefined8 *)local_148[5] + 1);
      uVar6 = (**(code **)(*local_148 + 0x40))(local_148,&local_168,1);
    }
  }
  else {
    uVar6 = 0x7f7fc99e;
  }
  if (local_140 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_140 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_140)(local_140);
      LOCK();
      piVar1 = (int *)((longlong)local_140 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_140 + 8))(local_140,1);
      }
    }
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_d0 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)local_d0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_d0 + 8))(local_d0,1);
      }
    }
  }
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_f0 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar1 = (int *)((longlong)local_f0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_f0 + 8))(local_f0,1);
      }
    }
  }
  plVar4 = (longlong *)param_7[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return uVar6;
}



// FUNCTION 142bfd640 FUN_142bfd640 body=399 status=ok
// SIG undefined FUN_142bfd640(void)

int FUN_142bfd640(longlong param_1,longlong param_2,undefined8 *param_3)

{
  float *pfVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_48;
  float fStack_44;
  
  if ((*(uint *)(param_2 + 0x98) >> 2 & 1) == 0) {
    fVar11 = *(float *)(param_1 + 0x1fc);
  }
  else {
    if (*(int *)(param_2 + 0x30) < 1) {
      puVar7 = &DAT_1466910d0;
    }
    else {
      puVar7 = (undefined8 *)
               ((longlong)(*(int *)(param_2 + 0x30) + -1) * 0x20 + *(longlong *)(param_2 + 0x28));
    }
    local_48 = (float)*param_3;
    fStack_44 = (float)((ulonglong)*param_3 >> 0x20);
    local_48 = local_48 - (float)*puVar7;
    fStack_44 = fStack_44 - (float)((ulonglong)*puVar7 >> 0x20);
    fVar11 = *(float *)(param_1 + 0x1fc) -
             SQRT(fStack_44 * fStack_44 + local_48 * local_48 +
                  (*(float *)(param_3 + 1) - *(float *)(puVar7 + 1)) *
                  (*(float *)(param_3 + 1) - *(float *)(puVar7 + 1)));
    if (fVar11 <= *(float *)(param_1 + 0x1f8)) {
      fVar11 = *(float *)(param_1 + 0x1f8);
    }
  }
  iVar6 = *(int *)(param_2 + 0x30);
  if (1 < iVar6) {
    lVar3 = *(longlong *)(param_2 + 0x28);
    fVar10 = 0.0;
    lVar5 = (longlong)(iVar6 + -1) * 0x20;
    iVar6 = iVar6 + -2;
    uVar2 = *(undefined8 *)(lVar5 + lVar3);
    if (-1 < iVar6) {
      fStack_44 = (float)((ulonglong)uVar2 >> 0x20);
      puVar7 = (undefined8 *)((longlong)iVar6 * 0x20 + lVar3);
      local_48 = (float)uVar2;
      fVar9 = *(float *)(lVar5 + 8 + lVar3);
      fVar12 = fStack_44;
      do {
        pfVar1 = (float *)(puVar7 + 1);
        fVar8 = (float)*puVar7;
        local_48 = local_48 - fVar8;
        fStack_44 = (float)((ulonglong)*puVar7 >> 0x20);
        iVar4 = iVar6;
        fVar9 = fVar9 - *pfVar1;
        fVar10 = fVar10 + SQRT((fVar12 - fStack_44) * (fVar12 - fStack_44) + local_48 * local_48 +
                               fVar9 * fVar9);
        if (fVar11 < fVar10) {
          return iVar4;
        }
        puVar7 = puVar7 + -4;
        iVar6 = iVar6 + -1;
        fVar9 = *pfVar1;
        fVar12 = fStack_44;
        local_48 = fVar8;
      } while (-1 < iVar6);
      return iVar4;
    }
  }
  return 0x7fffffff;
}



// FUNCTION 142bfd7d0 FinishDestroy body=308 status=ok
// SIG undefined FinishDestroy(void)

void UEnvQueryItemType::FinishDestroy(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  
  plVar3 = DAT_146b2c650;
  if ((*(uint *)(param_1 + 8) >> 4 & 1) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    plVar1 = DAT_146b2c650 + DAT_146b2c658;
    for (plVar10 = DAT_146b2c650; plVar10 != plVar1; plVar10 = plVar10 + 1) {
      if (*plVar10 != 0) {
        lVar5 = GetPrivateStaticClass();
        lVar8 = *plVar10;
        for (lVar7 = lVar8; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
          if (lVar7 == lVar5) goto LAB_142bfd848;
        }
      }
      lVar8 = 0;
LAB_142bfd848:
      if (lVar2 != 0) {
        lVar5 = GetPrivateStaticClass();
        lVar7 = lVar2;
        do {
          lVar6 = lVar2;
          if (lVar7 == lVar5) goto LAB_142bfd865;
          lVar7 = *(longlong *)(lVar7 + 0x30);
        } while (lVar7 != 0);
      }
      lVar6 = 0;
LAB_142bfd865:
      if (lVar8 == lVar6) {
        iVar9 = (int)((longlong)plVar10 - (longlong)plVar3 >> 3);
        if (iVar9 != -1) {
          iVar4 = (DAT_146b2c658 - iVar9) + -1;
          if (0 < iVar4) {
            iVar4 = 1;
          }
          if (iVar4 != 0) {
            ::_guard_xfg_dispatch_icall_nop
                      (DAT_146b2c650 + iVar9,DAT_146b2c650 + (DAT_146b2c658 - iVar4),
                       (longlong)iVar4 << 3);
          }
          DAT_146b2c658 = DAT_146b2c658 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(&DAT_146b2c650);
        }
        break;
      }
    }
  }
  FUN_141755460(param_1);
  return;
}



// FUNCTION 142bfd910 FUN_142bfd910 body=314 status=ok
// SIG undefined FUN_142bfd910(void)

void FUN_142bfd910(longlong param_1,longlong *param_2)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int local_res8;
  int local_resc;
  
  piVar1 = (int *)(param_1 + 0x1d0);
  cVar3 = FWeakObjectPtr::IsValid(piVar1);
  if (param_2 == (longlong *)0x0) goto LAB_142bfd9e5;
  lVar5 = (**(code **)(*param_2 + 8))(param_2);
  lVar6 = UObject::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  lVar6 = 0;
  if (bVar2) {
    lVar6 = lVar5;
  }
  FWeakObjectPtr::operator=(&local_res8,lVar6);
  if ((*piVar1 == local_res8) && (*(int *)(param_1 + 0x1d4) == local_resc)) {
LAB_142bfd9c2:
    bVar2 = true;
  }
  else {
    cVar4 = FWeakObjectPtr::IsValid(piVar1);
    if (cVar4 == '\0') {
      cVar4 = FWeakObjectPtr::IsValid(&local_res8);
      if (cVar4 == '\0') goto LAB_142bfd9c2;
    }
    bVar2 = false;
  }
  if (bVar2) {
    (**(code **)(*param_2 + 0x48))(param_2,param_1);
    *piVar1 = -1;
    *(undefined4 *)(param_1 + 0x1d4) = 0;
  }
LAB_142bfd9e5:
  if (*(char *)(param_1 + 0x399) == '\0') {
    cVar4 = FWeakObjectPtr::IsValid(piVar1);
    lVar5 = *(longlong *)(param_1 + 0x120);
    if (lVar5 == 0) {
      lVar5 = FUN_1423407b0(param_1);
    }
    lVar5 = UCrowdManager::GetCurrent(lVar5);
    if (((cVar3 != '\0') && (cVar4 == '\0')) && (lVar5 != 0)) {
      uVar7 = UCrowdAgentInterface::GetPrivateStaticClass();
      UObjectBaseUtility::GetInterfaceAddress(param_1,uVar7);
      return;
    }
  }
  return;
}



// FUNCTION 142bfda50 FUN_142bfda50 body=218 status=ok
// SIG undefined FUN_142bfda50(void)

void FUN_142bfda50(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  int local_res10;
  int local_res14;
  
  if (param_2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*param_2 + 8))(param_2);
    lVar4 = UObject::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    lVar4 = 0;
    if (bVar1) {
      lVar4 = lVar3;
    }
    FWeakObjectPtr::operator=(&local_res10,lVar4);
    if (((*(int *)(param_1 + 0x1d0) == local_res10) && (*(int *)(param_1 + 0x1d4) == local_res14))
       || ((cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x1d0), cVar2 == '\0' &&
           (cVar2 = FWeakObjectPtr::IsValid(&local_res10), cVar2 == '\0')))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      (**(code **)(*param_2 + 0x48))(param_2,param_1);
      *(undefined4 *)(param_1 + 0x1d0) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x1d4) = 0;
    }
  }
  return;
}



// FUNCTION 142bfdb30 FUN_142bfdb30 body=715 status=ok
// SIG undefined FUN_142bfdb30(void)

void FUN_142bfdb30(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  float local_70;
  float local_68;
  float local_64;
  float local_60;
  undefined8 local_58;
  float local_50;
  undefined8 local_4c [8];
  
  if (*(char *)(param_1 + 0x399) == '\0') {
    if ((*(byte *)(param_1 + 0x37c) & 4) != 0) {
      cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x220);
      if (cVar1 == '\0') {
        FUN_1422e15c0(param_1 + 0x230,local_4c);
        puVar3 = local_4c;
      }
      else {
        lVar2 = FWeakObjectPtr::Get(param_1 + 0x220);
        lVar2 = *(longlong *)(lVar2 + 0x168);
        if (lVar2 == 0) {
          local_88 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
          local_80 = DAT_1468b5d98;
        }
        else {
          local_88 = *(undefined8 *)(lVar2 + 0x220);
          local_80 = *(float *)(lVar2 + 0x228);
        }
        local_50 = local_80;
        puVar3 = &local_58;
        local_58 = local_88;
      }
      local_78 = *puVar3;
      local_70 = *(float *)(puVar3 + 1);
      (**(code **)(*(longlong *)(param_1 + 0x350) + 0x10))((longlong *)(param_1 + 0x350),&local_68);
      local_68 = (float)local_78 - local_68;
      local_64 = local_78._4_4_ - local_64;
      local_60 = local_70 - local_60;
      fVar5 = local_64 * local_64 + local_68 * local_68 + local_60 * local_60;
      fVar8 = local_60;
      fVar9 = local_64;
      fVar6 = local_68;
      if ((fVar5 != 1.0) &&
         (fVar8 = DAT_1468b5d98, fVar9 = DAT_1468b5d94, fVar6 = DAT_1468b5d90, 1e-08 <= fVar5)) {
        auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
        fVar6 = auVar7._0_4_;
        fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
        fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
        fVar8 = local_60 * fVar6;
        fVar9 = local_64 * fVar6;
        fVar6 = local_68 * fVar6;
      }
      local_88 = CONCAT44(fVar9,fVar6);
      if (((0.0001 < ABS(fVar6 - *(float *)(param_1 + 0x358))) ||
          (0.0001 < ABS(fVar9 - *(float *)(param_1 + 0x35c)))) ||
         (0.0001 < ABS(fVar8 - *(float *)(param_1 + 0x360)))) {
        uVar4 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x1e8) + 0x38);
        FUN_1422f9470(param_1 + 0x230,uVar4,&local_78);
        *(undefined8 *)(param_1 + 0x358) = local_88;
        *(undefined8 *)(param_1 + 0x2e8) = local_88;
        *(float *)(param_1 + 0x360) = fVar8;
        *(float *)(param_1 + 0x2f0) = fVar8;
        lVar2 = *(longlong *)(param_1 + 0x120);
        if (lVar2 == 0) {
          lVar2 = FUN_1423407b0(param_1);
        }
        UCrowdManager::GetCurrent(lVar2);
      }
    }
    FUN_142c16a70(param_1);
    return;
  }
  FUN_142bfde00();
  return;
}



// FUNCTION 142bfde00 FUN_142bfde00 body=930 status=ok
// SIG undefined FUN_142bfde00(void)

void FUN_142bfde00(longlong param_1,float param_2)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float local_68;
  float fStack_64;
  float local_60;
  undefined8 local_58;
  float local_50;
  undefined8 local_48;
  float local_40;
  
  if ((*(longlong *)(param_1 + 0x1e8) != 0) && (*(longlong *)(param_1 + 0x1c8) != 0)) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x178);
    if (lVar4 == 0) {
      local_48 = DAT_1466910d0;
      local_40 = DAT_1466910d8;
    }
    else {
      local_48 = *(undefined8 *)(lVar4 + 0x220);
      local_40 = *(float *)(lVar4 + 0x228) - *(float *)(lVar4 + 0x1e4);
    }
    local_58 = local_48;
    local_50 = local_40;
    FUN_1422e15c0(param_1 + 0x230,&local_48);
    uVar6 = *(uint *)(param_1 + 0x2a0) & 0xfffffdff;
    *(uint *)(param_1 + 0x2a0) = uVar6;
    if ((*(uint *)(*(longlong *)(param_1 + 0x1c8) + 500) >> 1 & 1) == 0) {
      param_2 = 1.0 / param_2;
      local_68 = ((float)local_48 - (float)local_58) * param_2;
      fStack_64 = (local_48._4_4_ - local_58._4_4_) * param_2;
      local_60 = (local_40 - local_50) * param_2;
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x1e8) + 0x30);
      iVar3 = *(int *)(param_1 + 0x2d0);
      FUN_1404cb7e0(param_1 + 0x188,param_1,&local_68);
      (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x528))
                (*(longlong **)(param_1 + 0x1c8),&local_68,iVar3 < iVar2 + -2);
    }
    else {
      local_68 = (float)local_48 - (float)local_58;
      fStack_64 = local_48._4_4_ - local_58._4_4_;
      local_60 = local_40 - local_50;
      fVar8 = fStack_64 * fStack_64 + local_68 * local_68 + local_60 * local_60;
      if (fVar8 != 1.0) {
        if (1e-08 <= fVar8) {
          auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
          fVar7 = auVar10._0_4_;
          fVar7 = fVar7 + fVar7 * (0.5 - fVar8 * 0.5 * fVar7 * fVar7);
          fVar7 = fVar7 + fVar7 * (0.5 - fVar8 * 0.5 * fVar7 * fVar7);
          local_68 = local_68 * fVar7;
          fStack_64 = fStack_64 * fVar7;
          local_60 = local_60 * fVar7;
        }
        else {
          local_68 = DAT_1468b5d90;
          local_60 = DAT_1468b5d98;
          fStack_64 = DAT_1468b5d94;
        }
      }
      pfVar1 = (float *)(param_1 + 0x268);
      *(ulonglong *)pfVar1 = CONCAT44(fStack_64,local_68);
      *(float *)(param_1 + 0x270) = local_60;
      if (*(int *)(param_1 + 0x2fc) <= *(int *)(param_1 + 0x2d0)) {
        lVar4 = *(longlong *)(param_1 + 0x1e8);
        if (*(int *)(lVar4 + 0x30) < 1) {
          puVar5 = &DAT_1466910d0;
        }
        else {
          puVar5 = (undefined8 *)
                   ((longlong)(*(int *)(lVar4 + 0x30) + -1) * 0x20 + *(longlong *)(lVar4 + 0x28));
        }
        fVar8 = *(float *)(param_1 + 0x2f4);
        fVar7 = (float)*puVar5 - (float)local_58;
        local_60 = *(float *)(puVar5 + 1);
        fVar9 = (float)((ulonglong)*puVar5 >> 0x20) - local_58._4_4_;
        fVar7 = fVar9 * fVar9 + fVar7 * fVar7 + (local_60 - local_50) * (local_60 - local_50);
        if (fVar7 < fVar8 * fVar8) {
          *(uint *)(param_1 + 0x2a0) = uVar6 | 0x200;
          fVar7 = SQRT(fVar7) * (1.0 / fVar8);
          fVar8 = 0.0;
          if ((0.0 <= fVar7) && (fVar8 = fVar7, 1.0 <= fVar7)) {
            fVar8 = 1.0;
          }
          *pfVar1 = fVar8 * *pfVar1;
          *(float *)(param_1 + 0x26c) = fVar8 * *(float *)(param_1 + 0x26c);
          *(float *)(param_1 + 0x270) = fVar8 * *(float *)(param_1 + 0x270);
        }
      }
      FUN_1404cb7e0(param_1 + 0x188,param_1,pfVar1);
      (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x530))
                (*(longlong **)(param_1 + 0x1c8),pfVar1);
    }
  }
  return;
}



// FUNCTION 142bfe1b0 FUN_142bfe1b0 body=66 status=ok
// SIG undefined FUN_142bfe1b0(void)

void FUN_142bfe1b0(longlong param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0x188);
  FAIResourceLock::ForceClearAllLocks();
  if (sVar1 != 0) {
    (**(code **)(*(longlong *)(param_1 + -0x178) + 0x440))
              ((longlong *)(param_1 + -0x178),DAT_146b2c570);
  }
  return;
}



// FUNCTION 142bfe200 FUN_142bfe200 body=936 status=ok
// SIG undefined FUN_142bfe200(void)

void FUN_142bfe200(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                  longlong param_5,longlong param_6)

{
  int iVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float local_d0;
  float fStack_cc;
  float local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  
  lVar9 = 0;
  local_b0 = 0;
  local_a8 = 0;
  cVar3 = UEnvQueryTest::IsContextPerItem(param_1,param_5);
  uVar2 = local_a8;
  if (cVar3 == '\0') {
    lVar8 = lVar9;
    if (param_5 != 0) {
      lVar6 = UEnvQueryContext::GetPrivateStaticClass();
      lVar7 = param_5;
      do {
        lVar8 = param_5;
        if (lVar7 == lVar6) break;
        lVar7 = *(longlong *)(lVar7 + 0x30);
        lVar8 = lVar9;
      } while (lVar7 != 0);
    }
    FUN_142bedad0(param_3,lVar8,&local_b0);
  }
  else {
    lVar8 = (longlong)(int)local_a8;
    iVar4 = (int)local_a8 + 1;
    local_a8 = CONCAT44(local_a8._4_4_,iVar4);
    if (local_a8._4_4_ < iVar4) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_b0,uVar2 & 0xffffffff);
    }
    *(undefined8 *)(local_b0 + lVar8 * 0xc) = *param_4;
    *(undefined4 *)(local_b0 + 8 + lVar8 * 0xc) = *(undefined4 *)(param_4 + 1);
  }
  iVar4 = 0;
  if (0 < (int)local_a8) {
    do {
      local_c0 = 0;
      local_b8 = 0;
      cVar3 = UEnvQueryTest::IsContextPerItem(param_1,param_6);
      uVar2 = local_b8;
      if (cVar3 == '\0') {
        if (param_6 != 0) {
          lVar7 = UEnvQueryContext::GetPrivateStaticClass();
          lVar8 = param_6;
          do {
            lVar6 = param_6;
            if (lVar8 == lVar7) goto LAB_142bfe394;
            lVar8 = *(longlong *)(lVar8 + 0x30);
          } while (lVar8 != 0);
        }
        lVar6 = 0;
LAB_142bfe394:
        FUN_142bedad0(param_3,lVar6,&local_c0);
      }
      else {
        lVar8 = (longlong)(int)local_b8;
        iVar5 = (int)local_b8 + 1;
        local_b8 = CONCAT44(local_b8._4_4_,iVar5);
        if (local_b8._4_4_ < iVar5) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_c0,uVar2 & 0xffffffff);
        }
        *(undefined8 *)(local_c0 + lVar8 * 0xc) = *param_4;
        *(undefined4 *)(local_c0 + 8 + lVar8 * 0xc) = *(undefined4 *)(param_4 + 1);
      }
      iVar5 = 0;
      if (0 < (int)local_b8) {
        lVar8 = 0;
        do {
          local_d0 = *(float *)(lVar8 + local_c0) - *(float *)(lVar9 + local_b0);
          fStack_cc = *(float *)(lVar8 + 4 + local_c0) - *(float *)(lVar9 + 4 + local_b0);
          local_c8 = *(float *)(lVar8 + 8 + local_c0) - *(float *)(lVar9 + 8 + local_b0);
          fVar10 = fStack_cc * fStack_cc + local_d0 * local_d0 + local_c8 * local_c8;
          if (fVar10 != 1.0) {
            if (1e-08 <= fVar10) {
              auVar12 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
              fVar11 = auVar12._0_4_;
              fVar11 = fVar11 + fVar11 * (0.5 - fVar10 * 0.5 * fVar11 * fVar11);
              fVar11 = fVar11 + fVar11 * (0.5 - fVar10 * 0.5 * fVar11 * fVar11);
              local_d0 = local_d0 * fVar11;
              fStack_cc = fStack_cc * fVar11;
              local_c8 = local_c8 * fVar11;
            }
            else {
              local_d0 = DAT_1468b5d90;
              local_c8 = DAT_1468b5d98;
              fStack_cc = DAT_1468b5d94;
            }
          }
          iVar1 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
            TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
          }
          lVar7 = *param_2;
          iVar5 = iVar5 + 1;
          lVar8 = lVar8 + 0xc;
          *(ulonglong *)(lVar7 + (longlong)iVar1 * 0xc) = CONCAT44(fStack_cc,local_d0);
          *(float *)(lVar7 + 8 + (longlong)iVar1 * 0xc) = local_c8;
        } while (iVar5 < (int)local_b8);
      }
      if (local_c0 != 0) {
        FMemory::Free();
      }
      iVar4 = iVar4 + 1;
      lVar9 = lVar9 + 0xc;
    } while (iVar4 < (int)local_a8);
  }
  if (local_b0 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142bfe5b0 FUN_142bfe5b0 body=358 status=ok
// SIG undefined FUN_142bfe5b0(void)

void FUN_142bfe5b0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6,char param_7,undefined8 param_8,
                  undefined8 *param_9)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 local_28;
  undefined4 local_20;
  longlong local_18;
  undefined8 local_10;
  
  if (param_7 == '\0') {
    FUN_142bfe200(param_1,param_2,param_3,param_8,param_4,param_5);
  }
  else {
    uVar9 = 0;
    local_18 = 0;
    local_10 = 0;
    cVar2 = UEnvQueryTest::IsContextPerItem(param_1,param_6);
    uVar7 = local_10;
    if (cVar2 == '\0') {
      uVar7 = uVar9;
      if (param_6 != 0) {
        uVar4 = UEnvQueryContext::GetPrivateStaticClass();
        uVar5 = param_6;
        do {
          uVar7 = param_6;
          if (uVar5 == uVar4) break;
          uVar5 = *(ulonglong *)(uVar5 + 0x30);
          uVar7 = uVar9;
        } while (uVar5 != 0);
      }
      FUN_142bed8a0(param_3,uVar7,&local_18);
    }
    else {
      lVar6 = (longlong)(int)local_10;
      iVar3 = (int)local_10 + 1;
      local_10 = CONCAT44(local_10._4_4_,iVar3);
      if (local_10._4_4_ < iVar3) {
        TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_18,uVar7 & 0xffffffff);
      }
      puVar1 = (undefined8 *)(local_18 + lVar6 * 0xc);
      *puVar1 = *param_9;
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_9 + 1);
    }
    if (0 < (int)local_10) {
      do {
        FRotator::Vector(local_18 + (longlong)(int)uVar9 * 0xc,&local_28);
        iVar3 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
        }
        lVar6 = *param_2;
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
        *(undefined8 *)(lVar6 + (longlong)iVar3 * 0xc) = local_28;
        *(undefined4 *)(lVar6 + (longlong)iVar3 * 0xc + 8) = local_20;
      } while ((int)uVar8 < (int)local_10);
    }
    if (local_18 != 0) {
      FMemory::Free();
      return;
    }
  }
  return;
}



// FUNCTION 142bfe720 FUN_142bfe720 body=105 status=ok
// SIG undefined FUN_142bfe720(void)

void FUN_142bfe720(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  if (((*(byte *)(param_1 + 0x70) & 2) != 0) && (iVar2 = 0, 0 < *(int *)(param_1 + 0x68))) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0x60));
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x290))(plVar1,param_2);
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x68));
  }
  return;
}



// FUNCTION 142bfe790 FUN_142bfe790 body=2015 status=ok
// SIG undefined FUN_142bfe790(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142bfe790(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
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
  longlong local_188;
  undefined8 local_180;
  undefined8 local_178;
  float local_170;
  longlong local_168;
  undefined8 local_160;
  undefined8 local_158;
  float local_150;
  undefined8 local_148;
  float fStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined8 local_124;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  float local_100;
  undefined1 local_f8 [184];
  
  fVar13 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x19);
  fVar13 = ABS(fVar13);
  if (359.0 <= fVar13) {
    fVar13 = 359.0;
  }
  if (fVar13 != 0.0) {
    local_168 = 0;
    local_160 = 0;
    lVar12 = 0;
    if (param_1[0x2b] != 0) {
      lVar5 = UEnvQueryContext::GetPrivateStaticClass();
      for (lVar10 = param_1[0x2b];
          (lVar12 = 0, lVar10 != 0 && (lVar12 = param_1[0x2b], lVar10 != lVar5));
          lVar10 = *(longlong *)(lVar10 + 0x30)) {
      }
    }
    FUN_142bed6b0(param_2,lVar12,&local_168);
    if (0 < (int)local_160) {
      uVar6 = FWeakObjectPtr::Get(param_2 + 0x34);
      FAIDataProviderValue::BindData(param_1 + 0x13,uVar6,*(undefined4 *)(param_2 + 0x30));
      FAIDataProviderValue::BindData(param_1 + 0x19,uVar6,*(undefined4 *)(param_2 + 0x30));
      FAIDataProviderValue::BindData(param_1 + 0x1f,uVar6,*(undefined4 *)(param_2 + 0x30));
      FAIDataProviderValue::BindData(param_1 + 0x25,uVar6,*(undefined4 *)(param_2 + 0x30));
      fVar14 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x13);
      fVar15 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x1f);
      if (1.0 <= fVar15) {
        if (359.0 <= fVar15) {
          fVar15 = 359.0;
        }
      }
      else {
        fVar15 = 1.0;
      }
      fVar16 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x25);
      if (0.0 <= fVar16) {
        if (3.4028235e+38 <= fVar16) {
          fVar16 = 3.4028235e+38;
        }
      }
      else {
        fVar16 = 0.0;
      }
      local_188 = 0;
      local_180 = 0;
      iVar9 = (int)ROUND((fVar16 / fVar14 + fVar16 / fVar14) - 0.5) >> 1;
      if (0 < 1 - ((int)ROUND(-0.5 - (fVar13 / fVar15 + fVar13 / fVar15)) >> 1) * (int)local_160 *
                  iVar9) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                  (&local_188);
      }
      iVar11 = 0;
      if (0 < (int)local_160) {
        lVar12 = 0;
        do {
          lVar10 = *(longlong *)(*(longlong *)(local_168 + lVar12) + 0x168);
          if (lVar10 == 0) {
            local_11c = DAT_1464aa7b0;
            puVar7 = &local_124;
            local_124 = DAT_1464aa7a8;
          }
          else {
            puVar7 = (undefined8 *)FUN_142369f10(lVar10,local_f8);
          }
          local_178 = *puVar7;
          local_170 = *(float *)(puVar7 + 1);
          lVar10 = *(longlong *)(*(longlong *)(local_168 + lVar12) + 0x168);
          if (lVar10 == 0) {
            puVar7 = &local_118;
            local_118 = _DAT_1468b5d90;
            local_110 = DAT_1468b5d98;
          }
          else {
            puVar7 = (undefined8 *)&local_130;
            local_130 = *(undefined4 *)(lVar10 + 0x220);
            local_128 = *(undefined4 *)(lVar10 + 0x228);
            uStack_12c = *(undefined4 *)(lVar10 + 0x224);
          }
          fVar16 = *(float *)(puVar7 + 1);
          local_158 = *puVar7;
          local_150 = fVar16;
          if (fVar13 * -0.5 < fVar13 * 0.5) {
            local_158._4_4_ = (float)((ulonglong)local_158 >> 0x20);
            fVar3 = local_158._4_4_;
            fVar27 = fVar13 * -0.5;
            do {
              fVar23 = -1.0;
              fVar19 = fVar27 * 0.017453292;
              if (fVar19 < 0.0) {
                fVar17 = fVar19 * 0.15915494 - 0.5;
              }
              else {
                fVar17 = fVar19 * 0.15915494 + 0.5;
              }
              fVar19 = fVar19 - (float)(int)fVar17 * 6.2831855;
              if (fVar19 <= 1.5707964) {
                if (-1.5707964 <= fVar19) {
                  fVar23 = 1.0;
                }
                else {
                  fVar19 = -3.1415927 - fVar19;
                }
              }
              else {
                fVar19 = 3.1415927 - fVar19;
              }
              fVar17 = fVar19 * fVar19;
              fVar19 = (((((2.7525562e-06 - fVar17 * 2.3889859e-08) * fVar17 - 0.00019840874) *
                          fVar17 + 0.008333331) * fVar17 - 0.16666667) * fVar17 + 1.0) * fVar19;
              fVar23 = (((((2.4760495e-05 - fVar17 * 2.6051615e-07) * fVar17 - 0.0013888378) *
                          fVar17 + 0.041666638) * fVar17 - 0.5) * fVar17 + 1.0) * fVar23;
              fVar22 = 1.0 - fVar23;
              fVar17 = DAT_1464aa798._4_4_ * (float)DAT_1464aa798 * fVar22;
              fVar21 = DAT_1464aa7a0 * (float)DAT_1464aa798 * fVar22;
              fVar26 = ((float)DAT_1464aa798 * (float)DAT_1464aa798 * fVar22 + fVar23) *
                       (float)local_178;
              fVar20 = (fVar17 + fVar19 * DAT_1464aa7a0) * (float)local_178;
              fVar17 = (fVar17 - fVar19 * DAT_1464aa7a0) * local_178._4_4_;
              fVar18 = (fVar21 + fVar19 * DAT_1464aa798._4_4_) * local_170;
              fVar21 = (fVar21 - fVar19 * DAT_1464aa798._4_4_) * (float)local_178;
              fVar24 = DAT_1464aa7a0 * DAT_1464aa798._4_4_ * fVar22;
              fVar25 = (fVar24 + fVar19 * (float)DAT_1464aa798) * local_178._4_4_;
              fVar19 = (fVar24 - fVar19 * (float)DAT_1464aa798) * local_170;
              fVar24 = (DAT_1464aa798._4_4_ * DAT_1464aa798._4_4_ * fVar22 + fVar23) *
                       local_178._4_4_;
              fVar23 = (DAT_1464aa7a0 * DAT_1464aa7a0 * fVar22 + fVar23) * local_170;
              iVar8 = 1;
              if (0 < iVar9) {
                do {
                  uVar2 = local_180;
                  lVar10 = (longlong)(int)local_180;
                  fVar22 = (float)iVar8;
                  local_138 = 0;
                  fStack_140 = (fVar25 + fVar21 + fVar23) * fVar22 * fVar14 + fVar16;
                  local_100 = fStack_140;
                  iVar4 = (int)local_180 + 1;
                  local_180 = CONCAT44(local_180._4_4_,iVar4);
                  local_148 = CONCAT44((fVar24 + fVar20 + fVar19) * fVar22 * fVar14 + fVar3,
                                       (fVar26 + fVar17 + fVar18) * fVar22 * fVar14 +
                                       (float)local_158);
                  if (local_180._4_4_ < iVar4) {
                    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>
                    ::ResizeGrow(&local_188,uVar2 & 0xffffffff);
                  }
                  iVar8 = iVar8 + 1;
                  puVar1 = (undefined8 *)(local_188 + lVar10 * 0x18);
                  *puVar1 = local_148;
                  puVar1[1] = CONCAT44(uStack_13c,fStack_140);
                  *(undefined8 *)(local_188 + 0x10 + lVar10 * 0x18) = local_138;
                } while (iVar8 <= iVar9);
              }
              fVar27 = fVar27 + fVar15;
            } while (fVar27 < fVar13 * 0.5);
          }
          uVar2 = local_180;
          if ((*(byte *)(param_1 + 0x2c) & 1) != 0) {
            lVar10 = (longlong)(int)local_180;
            fStack_140 = *(float *)(puVar7 + 1);
            local_148 = *puVar7;
            iVar8 = (int)local_180 + 1;
            local_138 = 0;
            local_180 = CONCAT44(local_180._4_4_,iVar8);
            if (local_180._4_4_ < iVar8) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
              ResizeGrow(&local_188,uVar2 & 0xffffffff);
            }
            puVar7 = (undefined8 *)(local_188 + lVar10 * 0x18);
            *puVar7 = local_148;
            puVar7[1] = CONCAT44(uStack_13c,fStack_140);
            *(undefined8 *)(local_188 + 0x10 + lVar10 * 0x18) = local_138;
          }
          iVar11 = iVar11 + 1;
          lVar12 = lVar12 + 8;
        } while (iVar11 < (int)local_160);
      }
      (**(code **)(*param_1 + 0x2a0))(param_1,&local_188,param_2);
      (**(code **)(*param_1 + 0x2a8))(param_1,&local_188,param_2);
      if (local_188 != 0) {
        FMemory::Free();
      }
    }
    if (local_168 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142bfef70 FUN_142bfef70 body=404 status=ok
// SIG undefined FUN_142bfef70(void)

void FUN_142bfef70(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  uint local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  lVar9 = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    lVar7 = UEnvQueryContext::GetPrivateStaticClass();
    for (lVar5 = *(longlong *)(param_1 + 0x60);
        (lVar9 = 0, lVar5 != 0 && (lVar9 = *(longlong *)(param_1 + 0x60), lVar5 != lVar7));
        lVar5 = *(longlong *)(lVar5 + 0x30)) {
    }
  }
  FUN_142bedad0(param_2,lVar9,&local_58);
  puVar1 = (undefined8 *)((longlong)local_58 + (longlong)(int)local_50 * 0xc);
  for (puVar8 = local_58; puVar8 != puVar1; puVar8 = (undefined8 *)((longlong)puVar8 + 0xc)) {
    uStack_40 = *(undefined4 *)(puVar8 + 1);
    uVar4 = *(uint *)(param_2 + 4);
    lVar9 = (longlong)(int)uVar4;
    local_48 = *puVar8;
    local_38 = 0;
    uVar3 = *(ushort *)((longlong)param_2 + 0x154);
    iVar6 = uVar4 + uVar3;
    *(int *)(param_2 + 4) = iVar6;
    if (*(int *)((longlong)param_2 + 0x24) < iVar6) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_2 + 3);
    }
    _guard_xfg_dispatch_icall_nop((void *)(param_2[3] + lVar9),0,(ulonglong)uVar3);
    lVar5 = param_2[3];
    local_60 = local_60 & 0xfffffffe;
    puVar2 = (undefined4 *)(lVar9 + lVar5);
    *puVar2 = (undefined4)local_48;
    puVar2[1] = local_48._4_4_;
    puVar2[2] = uStack_40;
    puVar2[3] = uStack_3c;
    *(undefined8 *)(lVar9 + 0x10 + lVar5) = local_38;
    iVar6 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2);
    }
    lVar9 = *param_2;
    *(ulonglong *)(lVar9 + (longlong)iVar6 * 0xc) = ((ulonglong)uVar4 & 0x7fffffff) << 0x20;
    *(uint *)(lVar9 + 8 + (longlong)iVar6 * 0xc) = local_60;
  }
  if (local_58 != (undefined8 *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}



// FUNCTION 142bff110 FUN_142bff110 body=2095 status=ok
// SIG undefined FUN_142bff110(void)

void FUN_142bff110(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
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
  longlong local_158;
  undefined8 local_150;
  int local_148;
  uint local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  int local_130;
  int local_12c;
  longlong local_128;
  undefined8 local_120;
  float local_118;
  float local_114;
  undefined8 local_110;
  float fStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  float local_f0;
  
  local_128 = 0;
  local_120 = 0;
  lVar10 = 0;
  if (param_1[0x36] != 0) {
    lVar8 = UEnvQueryContext::GetPrivateStaticClass();
    for (lVar12 = param_1[0x36];
        (lVar10 = 0, lVar12 != 0 && (lVar10 = param_1[0x36], lVar12 != lVar8));
        lVar12 = *(longlong *)(lVar12 + 0x30)) {
    }
  }
  FUN_142bedad0(param_2,lVar10,&local_128);
  if (0 < (int)local_120) {
    uVar9 = FWeakObjectPtr::Get(param_2 + 0x34);
    FAIDataProviderValue::BindData(param_1 + 0x13,uVar9,*(undefined4 *)(param_2 + 0x30));
    FAIDataProviderValue::BindData(param_1 + 0x19,uVar9,*(undefined4 *)(param_2 + 0x30));
    FAIDataProviderValue::BindData(param_1 + 0x1f,uVar9,*(undefined4 *)(param_2 + 0x30));
    FAIDataProviderValue::BindData(param_1 + 0x25,uVar9,*(undefined4 *)(param_2 + 0x30));
    FAIDataProviderValue::BindData(param_1 + 0x2f,uVar9,*(undefined4 *)(param_2 + 0x30));
    FAIDataProviderFloatValue::GetValue(param_1 + 0x2f);
    fVar16 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x13);
    local_140 = fVar16;
    fVar17 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x19);
    local_13c = fVar17;
    iVar4 = FUN_142be7f40(param_1 + 0x1f);
    local_148 = iVar4;
    uVar5 = FUN_142be7f40(param_1 + 0x25);
    fVar25 = 0.0;
    uVar15 = (ulonglong)uVar5;
    local_144 = uVar5;
    if ((((0.0 <= fVar16) && (0.0 < fVar17)) && (fVar16 <= fVar17)) &&
       ((0 < iVar4 && (0 < (int)uVar5)))) {
      FAIDataProviderValue::BindData(param_1 + 0x38,uVar9,*(undefined4 *)(param_2 + 0x30));
      FAIDataProviderValue::BindData(param_1 + 0x3e,uVar9,*(undefined4 *)(param_2 + 0x30));
      FAIDataProviderValue::BindData(param_1 + 0x44,uVar9,*(undefined4 *)(param_2 + 0x30));
      iVar6 = FUN_142be7f40(param_1 + 0x38);
      fVar18 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x3e);
      fVar19 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x44);
      iVar13 = 1;
      if (0 < iVar6) {
        iVar13 = iVar6;
      }
      if (fVar18 < fVar19) {
        fVar18 = fVar19;
      }
      iVar6 = iVar13 + -1;
      if (iVar13 + -1 < 2) {
        iVar6 = 1;
      }
      fVar27 = (fVar18 - fVar19) / (float)iVar6;
      local_138 = fVar27;
      local_134 = fVar19;
      local_130 = iVar13;
      fVar20 = (float)FUN_142c00450(param_1,param_2);
      fVar20 = fVar20 * 0.017453292;
      local_158 = 0;
      local_150 = 0;
      fVar18 = 6.2831855 / (float)(int)uVar5;
      if (0 < (int)(iVar13 * uVar5 * iVar4)) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                  (&local_158);
      }
      iVar6 = 0;
      if ((char)param_1[0x35] == '\0') {
        if (0 < iVar13) {
          do {
            if (0 < (int)uVar15) {
              do {
                cVar3 = UEnvQueryGenerator_Donut::IsAngleAllowed(param_1);
                if (cVar3 != '\0') {
                  uVar9 = __libm_sse2_sincosf_(fVar20);
                  iVar13 = 0;
                  if (0 < iVar4) {
                    fVar26 = local_13c - fVar16;
                    fVar25 = (float)iVar4;
                    iVar7 = (int)local_120;
                    fVar17 = fVar16;
                    do {
                      iVar11 = 0;
                      if (0 < iVar7) {
                        lVar10 = 0;
                        do {
                          uVar14 = local_150;
                          lVar12 = (longlong)(int)local_150;
                          local_100 = 0;
                          fStack_108 = (float)iVar6 * fVar27 + fVar19 +
                                       *(float *)(local_128 + 8 + lVar10);
                          iVar4 = (int)local_150 + 1;
                          local_110 = CONCAT44(fVar17 * (float)uVar9 +
                                               *(float *)(local_128 + 4 + lVar10),
                                               fVar17 * (float)((ulonglong)uVar9 >> 0x20) +
                                               *(float *)(local_128 + lVar10));
                          local_150 = CONCAT44(local_150._4_4_,iVar4);
                          local_f0 = fStack_108;
                          if (local_150._4_4_ < iVar4) {
                            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>
                            ::ResizeGrow(&local_158,uVar14 & 0xffffffff);
                          }
                          iVar11 = iVar11 + 1;
                          lVar10 = lVar10 + 0xc;
                          puVar1 = (undefined8 *)(local_158 + lVar12 * 0x18);
                          *puVar1 = local_110;
                          puVar1[1] = CONCAT44(uStack_104,fStack_108);
                          *(undefined8 *)(local_158 + 0x10 + lVar12 * 0x18) = local_100;
                          iVar7 = (int)local_120;
                          iVar4 = local_148;
                        } while (iVar11 < (int)local_120);
                      }
                      iVar13 = iVar13 + 1;
                      fVar17 = (float)iVar13 * (1.0 / (fVar25 - 1.0)) * fVar26 + fVar16;
                    } while (iVar13 < iVar4);
                  }
                }
                fVar20 = fVar20 + fVar18;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
              uVar15 = (ulonglong)local_144;
              fVar27 = local_138;
              fVar19 = local_134;
              iVar13 = local_130;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar13);
        }
      }
      else {
        local_12c = 0;
        fVar21 = (float)iVar4;
        fVar26 = fVar18 / fVar21;
        local_118 = fVar26;
        local_114 = fVar21;
        if (0 < iVar13) {
          do {
            uVar5 = local_144;
            iVar6 = 0;
            fVar24 = (float)local_12c * fVar27 + fVar19;
            if (0 < iVar4) {
              uVar15 = (ulonglong)local_144;
              fVar22 = fVar21 - 1.0;
              fVar28 = fVar17 - local_140;
              fVar23 = local_140;
              do {
                uVar14 = uVar15;
                if (0 < (int)uVar5) {
                  do {
                    cVar3 = UEnvQueryGenerator_Donut::IsAngleAllowed(param_1);
                    if (cVar3 != '\0') {
                      uVar9 = __libm_sse2_sincosf_(fVar25 + fVar20);
                      iVar4 = 0;
                      if (0 < (int)local_120) {
                        lVar10 = 0;
                        do {
                          uVar2 = local_150;
                          lVar12 = (longlong)(int)local_150;
                          local_100 = 0;
                          fStack_108 = fVar24 + *(float *)(local_128 + 8 + lVar10);
                          iVar13 = (int)local_150 + 1;
                          local_110 = CONCAT44((float)uVar9 * fVar16 +
                                               *(float *)(local_128 + 4 + lVar10),
                                               (float)((ulonglong)uVar9 >> 0x20) * fVar16 +
                                               *(float *)(local_128 + lVar10));
                          local_150 = CONCAT44(local_150._4_4_,iVar13);
                          local_f0 = fStack_108;
                          if (local_150._4_4_ < iVar13) {
                            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>
                            ::ResizeGrow(&local_158,uVar2 & 0xffffffff);
                          }
                          iVar4 = iVar4 + 1;
                          lVar10 = lVar10 + 0xc;
                          puVar1 = (undefined8 *)(local_158 + lVar12 * 0x18);
                          *puVar1 = local_110;
                          puVar1[1] = CONCAT44(uStack_104,fStack_108);
                          *(undefined8 *)(local_158 + 0x10 + lVar12 * 0x18) = local_100;
                        } while (iVar4 < (int)local_120);
                      }
                    }
                    fVar20 = fVar20 + fVar18;
                    uVar14 = uVar14 - 1;
                    fVar26 = local_118;
                    fVar23 = local_140;
                    iVar4 = local_148;
                  } while (uVar14 != 0);
                }
                iVar6 = iVar6 + 1;
                fVar25 = fVar25 + fVar26;
                fVar16 = (float)iVar6 * (1.0 / fVar22) * fVar28 + fVar23;
                fVar27 = local_138;
                fVar19 = local_134;
                fVar21 = local_114;
                iVar13 = local_130;
                fVar17 = local_13c;
              } while (iVar6 < iVar4);
            }
            local_12c = local_12c + 1;
          } while (local_12c < iVar13);
        }
      }
      (**(code **)(*param_1 + 0x2a0))(param_1,&local_158,param_2);
      (**(code **)(*param_1 + 0x2a8))(param_1,&local_158,param_2);
      if (local_158 != 0) {
        FMemory::Free();
      }
    }
  }
  if (local_128 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142bff940 FUN_142bff940 body=1414 status=ok
// SIG undefined FUN_142bff940(void)

void FUN_142bff940(longlong param_1,longlong param_2)

{
  ushort uVar1;
  bool bVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  float *pfVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined4 *puVar12;
  int iVar13;
  longlong *plVar14;
  longlong lVar15;
  uint uVar16;
  float fVar18;
  float fVar19;
  float fVar20;
  int local_res20;
  undefined4 local_e8;
  undefined4 local_e4;
  float local_e0;
  undefined8 local_d8;
  float local_d0;
  undefined1 local_c8 [16];
  longlong local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  int local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong *plVar17;
  
  lVar6 = FWeakObjectPtr::Get(param_2 + 0x34);
  if (lVar6 != 0) {
    FAIDataProviderValue::BindData(param_1 + 0x98,lVar6,*(undefined4 *)(param_2 + 0x30));
    FAIDataProviderValue::BindData(param_1 + 200,lVar6,*(undefined4 *)(param_2 + 0x30));
    FAIDataProviderValue::BindData(param_1 + 0x150,lVar6,*(undefined4 *)(param_2 + 0x30));
    FAIDataProviderValue::BindData(param_1 + 0x198,lVar6,*(undefined4 *)(param_2 + 0x30));
    FAIDataProviderValue::BindData(param_1 + 0xf8,lVar6,*(undefined4 *)(param_2 + 0x30));
    fVar18 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x150);
    fVar19 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x98);
    fVar20 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 200);
    iVar5 = FUN_142be7f40(param_1 + 0xf8);
    if (((((0.0 < fVar18) && (fVar18 <= 360.0)) && (0.0 < fVar19)) &&
        ((cVar4 = *(char *)(param_1 + 0x128), cVar4 != '\0' || (0.0 < fVar20)))) &&
       ((cVar4 != '\x01' || (0 < iVar5)))) {
      *(float *)(param_1 + 0x180) = fVar18 * 0.017453292;
      if (cVar4 == '\0') {
        fVar20 = (fVar19 * fVar18 * 0.017453292) / fVar20;
        iVar5 = -((int)ROUND(-0.5 - (fVar20 + fVar20)) >> 1);
        local_res20 = iVar5 + 1;
      }
      else {
        local_res20 = iVar5;
        if (cVar4 != '\x01') {
          return;
        }
      }
      FUN_142bfb010(param_1,&local_d8,param_2);
      pfVar7 = (float *)FVector::RotateAngleAxis(&local_d8,&local_e8,fVar18 * -0.5,&DAT_1464aa798);
      plVar17 = (longlong *)0x0;
      local_e0 = fVar19 * pfVar7[2];
      local_a8 = (longlong *)0x0;
      local_d8 = CONCAT44(fVar19 * pfVar7[1],fVar19 * *pfVar7);
      local_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      plVar14 = plVar17;
      local_d0 = local_e0;
      if (*(longlong *)(param_1 + 0x188) != 0) {
        plVar8 = (longlong *)UEnvQueryContext::GetPrivateStaticClass();
        for (plVar9 = *(longlong **)(param_1 + 0x188);
            (plVar14 = plVar17, plVar9 != (longlong *)0x0 &&
            (plVar14 = *(longlong **)(param_1 + 0x188), plVar9 != plVar8));
            plVar9 = (longlong *)plVar9[6]) {
        }
      }
      cVar4 = FUN_142bed5a0(param_2,plVar14,&local_a8);
      if ((cVar4 != '\0') && (local_a8 != (longlong *)0x0)) {
        plVar9 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass();
        for (plVar14 = local_a8; plVar14 != (longlong *)0x0; plVar14 = (longlong *)plVar14[6]) {
          if (plVar14 == plVar9) {
            plVar9 = (longlong *)UEnvQueryItemType_VectorBase::GetPrivateStaticClass();
            plVar14 = plVar17;
            if (local_a8 != (longlong *)0x0) {
              plVar10 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass();
              for (plVar8 = local_a8;
                  (plVar14 = plVar17, plVar8 != (longlong *)0x0 &&
                  (plVar14 = local_a8, plVar8 != plVar10)); plVar8 = (longlong *)plVar8[6]) {
              }
            }
            goto joined_r0x000142bffc29;
          }
        }
      }
LAB_142bffe67:
      if (local_98 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
joined_r0x000142bffc29:
  if (plVar14 != (longlong *)0x0) {
    if (plVar14 != plVar9) goto code_r0x000142bffc35;
    plVar14 = plVar17;
    if (local_a8 != (longlong *)0x0) {
      plVar8 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass();
      for (plVar9 = local_a8;
          (plVar14 = plVar17, plVar9 != (longlong *)0x0 && (plVar14 = local_a8, plVar9 != plVar8));
          plVar9 = (longlong *)plVar9[6]) {
      }
    }
    plVar9 = (longlong *)plVar14[0x1f];
    if (plVar9 == (longlong *)0x0) {
      (**(code **)(*plVar14 + 0x368))(plVar14);
      plVar9 = (longlong *)plVar14[0x1f];
    }
    uVar1 = *(ushort *)(plVar9 + 5);
    local_b8 = 0;
    local_b0 = 0;
    if (*(char *)(param_1 + 400) != '\0') {
      plVar14 = plVar17;
      if (local_a8 != (longlong *)0x0) {
        plVar10 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass();
        for (plVar8 = local_a8;
            (plVar14 = plVar17, plVar8 != (longlong *)0x0 && (plVar14 = local_a8, plVar8 != plVar10)
            ); plVar8 = (longlong *)plVar8[6]) {
        }
      }
      plVar8 = (longlong *)plVar14[0x1f];
      if (plVar8 == (longlong *)0x0) {
        (**(code **)(*plVar14 + 0x368))(plVar14);
        plVar8 = (longlong *)plVar14[0x1f];
        if (plVar8 == (longlong *)0x0) goto LAB_142bffdae;
      }
      lVar6 = UEnvQueryItemType_ActorBase::GetPrivateStaticClass();
      if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (0 < local_a0)) {
        lVar6 = local_98;
        do {
          lVar11 = (**(code **)(*plVar8 + 0x2a8))(plVar8,lVar6);
          uVar3 = local_b0;
          if (lVar11 != 0) {
            lVar15 = (longlong)(int)local_b0;
            iVar13 = (int)local_b0 + 1;
            local_b0 = CONCAT44(local_b0._4_4_,iVar13);
            if (local_b0._4_4_ < iVar13) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (&local_b8,uVar3 & 0xffffffff);
            }
            *(longlong *)(local_b8 + lVar15 * 8) = lVar11;
          }
          lVar6 = lVar6 + (ulonglong)uVar1;
          uVar16 = (int)plVar17 + 1;
          plVar17 = (longlong *)(ulonglong)uVar16;
        } while ((int)uVar16 < local_a0);
      }
    }
LAB_142bffdae:
    lVar6 = local_98;
    iVar13 = 0;
    fVar19 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x198);
    if (0 < local_a0) {
      do {
        puVar12 = (undefined4 *)(**(code **)(*plVar9 + 0x298))(plVar9,local_c8,lVar6);
        local_e0 = fVar19 + (float)puVar12[2];
        local_e4 = puVar12[1];
        local_e8 = *puVar12;
        FUN_142c00160(param_1,lVar6,plVar9,&local_e8,&local_d8,&local_b8,local_res20,
                      fVar18 / (float)iVar5,param_2);
        lVar6 = lVar6 + (ulonglong)uVar1;
        iVar13 = iVar13 + 1;
      } while (iVar13 < local_a0);
    }
    if (local_b8 != 0) {
      FMemory::Free();
    }
  }
  goto LAB_142bffe67;
code_r0x000142bffc35:
  plVar14 = (longlong *)plVar14[6];
  goto joined_r0x000142bffc29;
}



// FUNCTION 142bffed0 FUN_142bffed0 body=648 status=ok
// SIG undefined FUN_142bffed0(void)

void FUN_142bffed0(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  
  uVar4 = FWeakObjectPtr::Get(param_2 + 0x34);
  FAIDataProviderValue::BindData(param_1 + 0x13,uVar4,*(undefined4 *)(param_2 + 0x30));
  FAIDataProviderValue::BindData(param_1 + 0x19,uVar4,*(undefined4 *)(param_2 + 0x30));
  fVar12 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x13);
  fVar13 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x19);
  local_88 = 0;
  local_80 = 0;
  iVar10 = (int)((fVar12 * 2.0) / fVar13 + 1.0);
  if (param_1[0x1f] != 0) {
    lVar5 = UEnvQueryContext::GetPrivateStaticClass();
    lVar7 = param_1[0x1f];
    for (lVar8 = lVar7; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
      if (lVar8 == lVar5) goto LAB_142bfffb0;
    }
  }
  lVar7 = 0;
LAB_142bfffb0:
  FUN_142bedad0(param_2,lVar7,&local_88);
  local_98 = 0;
  local_90 = 0;
  if (0 < (int)local_80 * iVar10 * iVar10) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (&local_98);
  }
  iVar9 = 0;
  if (0 < (int)local_80) {
    lVar7 = 0;
    iVar6 = (int)local_80;
    do {
      iVar11 = 0;
      if (0 < iVar10) {
        do {
          iVar6 = 0;
          do {
            uVar2 = local_90;
            lVar8 = (longlong)(int)local_90;
            local_68 = 0;
            uStack_70 = *(undefined4 *)(lVar7 + 8 + local_88);
            iVar3 = (int)local_90 + 1;
            local_90 = CONCAT44(local_90._4_4_,iVar3);
            local_78 = CONCAT44(*(float *)(lVar7 + 4 + local_88) -
                                (float)(-(iVar10 / 2) + iVar6) * fVar13,
                                *(float *)(lVar7 + local_88) -
                                (float)(-(iVar10 / 2) + iVar11) * fVar13);
            if (local_90._4_4_ < iVar3) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
              ResizeGrow(&local_98,uVar2 & 0xffffffff);
            }
            iVar6 = iVar6 + 1;
            puVar1 = (undefined8 *)(local_98 + lVar8 * 0x18);
            *puVar1 = local_78;
            puVar1[1] = CONCAT44(uStack_6c,uStack_70);
            *(undefined8 *)(local_98 + 0x10 + lVar8 * 0x18) = local_68;
          } while (iVar6 < iVar10);
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar10);
        iVar6 = (int)local_80;
      }
      iVar9 = iVar9 + 1;
      lVar7 = lVar7 + 0xc;
    } while (iVar9 < iVar6);
  }
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_98,param_2);
  (**(code **)(*param_1 + 0x2a8))(param_1,&local_98,param_2);
  if (local_98 != 0) {
    FMemory::Free();
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142c00160 FUN_142c00160 body=675 status=ok
// SIG undefined FUN_142c00160(void)

void FUN_142c00160(longlong *param_1,undefined8 param_2,undefined8 param_3,float *param_4,
                  undefined8 param_5,undefined8 param_6,int param_7,float param_8,longlong param_9)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  float *pfVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  ulonglong in_stack_ffffffffffffff70;
  undefined1 local_6c [12];
  void *local_60;
  int local_58;
  undefined4 local_54;
  float fStack_48;
  float fStack_44;
  undefined8 local_40;
  
  local_60 = (void *)0x0;
  local_54 = 0;
  local_58 = param_7;
  if (0 < param_7) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (&local_60);
  }
  _guard_xfg_dispatch_icall_nop(local_60,0,(longlong)param_7 * 0x18);
  iVar8 = 0;
  if (0 < param_7) {
    lVar7 = 0;
    do {
      pfVar5 = (float *)FVector::RotateAngleAxis
                                  (param_5,local_6c,(float)iVar8 * param_8,&DAT_1464aa798);
      iVar8 = iVar8 + 1;
      local_40 = 0;
      fStack_48 = pfVar5[2] + param_4[2];
      fVar2 = pfVar5[1];
      fVar3 = param_4[1];
      pfVar1 = (float *)((longlong)local_60 + lVar7);
      *pfVar1 = *param_4 + *pfVar5;
      pfVar1[1] = fVar2 + fVar3;
      pfVar1[2] = fStack_48;
      pfVar1[3] = fStack_44;
      *(undefined8 *)((longlong)local_60 + lVar7 + 0x10) = 0;
      lVar7 = lVar7 + 0x18;
    } while (iVar8 < param_7);
  }
  cVar4 = *(char *)((longlong)param_1 + 499);
  if (cVar4 == '\x01') {
    lVar7 = FUN_142be3010(param_9);
    lVar6 = FWeakObjectPtr::Get(param_9 + 0x34);
    if ((lVar7 != 0) && (lVar6 != 0)) {
      FUN_142beffe0(lVar7,lVar6,param_1 + 0x39,param_4,&local_60,
                    in_stack_ffffffffffffff70 & 0xffffffffffffff00);
    }
  }
  else if (cVar4 == '\x02') {
    FUN_142bf0790(*(undefined8 *)(param_9 + 0x58),param_1 + 0x39,param_4,&local_60,param_6,
                  in_stack_ffffffffffffff70 & 0xffffffffffffff00);
  }
  else if (cVar4 == '\x04') {
    lVar7 = FUN_142be3010(param_9);
    lVar6 = FWeakObjectPtr::Get(param_9 + 0x34);
    if ((lVar7 != 0) && (lVar6 != 0)) {
      FUN_142bf1050(lVar7,lVar6,param_1 + 0x39,param_4,&local_60,param_6,0);
    }
  }
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_60,param_9);
  (**(code **)(*param_1 + 0x2b0))(param_1,param_2,param_3,&local_60,param_9);
  if (local_60 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142c00410 FUN_142c00410 body=49 status=ok
// SIG undefined FUN_142c00410(void)

undefined8 FUN_142c00410(undefined8 param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *param_2;
  local_res14 = param_2[1];
  lVar1 = FWeakObjectPtr::Get(&local_res10);
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0x118);
  }
  return 0;
}



// FUNCTION 142c00450 FUN_142c00450 body=655 status=ok
// SIG undefined FUN_142c00450(void)

float FUN_142c00450(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float local_78;
  float local_74;
  float local_70;
  undefined1 local_68 [4];
  float local_64;
  float *local_58;
  undefined8 local_50;
  float *local_48;
  undefined8 local_40;
  
  fVar7 = 0.0;
  if ((*(byte *)(param_1 + 0x1b8) & 1) == 0) {
    fVar7 = 0.0;
  }
  else {
    lVar4 = 0;
    local_48 = (float *)0x0;
    local_40 = 0;
    if (*(char *)(param_1 + 0x170) == '\0') {
      local_58 = (float *)0x0;
      local_50 = 0;
      lVar3 = lVar4;
      if (*(longlong *)(param_1 + 0x158) != 0) {
        lVar2 = UEnvQueryContext::GetPrivateStaticClass();
        for (lVar1 = *(longlong *)(param_1 + 0x158);
            (lVar3 = lVar4, lVar1 != 0 && (lVar3 = *(longlong *)(param_1 + 0x158), lVar1 != lVar2));
            lVar1 = *(longlong *)(lVar1 + 0x30)) {
        }
      }
      FUN_142bedad0(param_2,lVar3,&local_48);
      lVar3 = lVar4;
      if (*(longlong *)(param_1 + 0x160) != 0) {
        lVar2 = UEnvQueryContext::GetPrivateStaticClass();
        for (lVar1 = *(longlong *)(param_1 + 0x160);
            (lVar3 = lVar4, lVar1 != 0 && (lVar3 = *(longlong *)(param_1 + 0x160), lVar1 != lVar2));
            lVar1 = *(longlong *)(lVar1 + 0x30)) {
        }
      }
      FUN_142bedad0(param_2,lVar3,&local_58);
      if ((0 < (int)local_40) && (0 < (int)local_50)) {
        local_78 = *local_58 - *local_48;
        local_74 = local_58[1] - local_48[1];
        local_70 = local_58[2] - local_48[2];
        fVar7 = local_78 * local_78 + local_74 * local_74 + local_70 * local_70;
        if (fVar7 != 1.0) {
          if (1e-08 <= fVar7) {
            auVar6 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
            fVar5 = auVar6._0_4_;
            fVar5 = fVar5 + fVar5 * (0.5 - fVar7 * 0.5 * fVar5 * fVar5);
            fVar5 = fVar5 + fVar5 * (0.5 - fVar7 * 0.5 * fVar5 * fVar5);
            local_78 = local_78 * fVar5;
            local_74 = local_74 * fVar5;
            local_70 = local_70 * fVar5;
          }
          else {
            local_78 = DAT_1468b5d90;
            local_70 = DAT_1468b5d98;
            local_74 = DAT_1468b5d94;
          }
        }
        FVector::Rotation(&local_78,local_68);
        fVar7 = local_64;
      }
      if (local_58 != (float *)0x0) {
        FMemory::Free();
      }
    }
    else {
      lVar3 = lVar4;
      if (*(longlong *)(param_1 + 0x168) != 0) {
        lVar2 = UEnvQueryContext::GetPrivateStaticClass();
        for (lVar1 = *(longlong *)(param_1 + 0x168);
            (lVar3 = lVar4, lVar1 != 0 && (lVar3 = *(longlong *)(param_1 + 0x168), lVar1 != lVar2));
            lVar1 = *(longlong *)(lVar1 + 0x30)) {
        }
      }
      FUN_142bed8a0(param_2,lVar3,&local_48);
      if (0 < (int)local_40) {
        fVar7 = local_48[1];
      }
    }
    if (local_48 != (float *)0x0) {
      FMemory::Free();
    }
  }
  return fVar7;
}



// FUNCTION 142c006e0 GetModelClass body=26 status=ok
// SIG undefined GetModelClass(void)

undefined8 * USimpleCityBuilder::GetModelClass(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = UBlackboardKeyType_Object::GetPrivateStaticClass();
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 142c00700 GetModelClass body=26 status=ok
// SIG undefined GetModelClass(void)

undefined8 * USimpleCityBuilder::GetModelClass(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = UBlackboardKeyType_Object::GetPrivateStaticClass();
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 142c00720 FUN_142c00720 body=1053 status=ok
// SIG undefined FUN_142c00720(void)

float * FUN_142c00720(longlong param_1,float *param_2)

{
  longlong lVar1;
  char cVar2;
  float *pfVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 local_4c [8];
  undefined4 local_44;
  undefined1 local_40 [56];
  ulonglong uVar6;
  
  local_44 = 0x41200000;
  uVar7 = 0;
  *(undefined1 *)(param_2 + 6) = 1;
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = -10.0;
  param_2[3] = 0.0;
  param_2[4] = 0.0;
  param_2[5] = 10.0;
  if (0 < *(int *)(param_1 + 0x470)) {
    fVar9 = param_2[1];
    fVar10 = param_2[2];
    fVar14 = param_2[3];
    fVar11 = param_2[4];
    fVar12 = param_2[5];
    uVar4 = uVar7;
    uVar6 = uVar7;
    do {
      lVar1 = *(longlong *)(param_1 + 0x468);
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      fVar13 = *(float *)(uVar4 + 0x38 + lVar1);
      if (*param_2 <= fVar13) {
        fVar13 = *param_2;
      }
      *param_2 = fVar13;
      fVar8 = *(float *)(uVar4 + 0x3c + lVar1);
      if (fVar8 <= fVar9) {
        fVar9 = fVar8;
      }
      param_2[1] = fVar9;
      fVar8 = *(float *)(uVar4 + 0x40 + lVar1);
      if (fVar8 <= fVar10) {
        fVar10 = fVar8;
      }
      param_2[2] = fVar10;
      fVar8 = *(float *)(uVar4 + 0x38 + lVar1);
      if (fVar8 <= fVar14) {
        fVar8 = fVar14;
      }
      param_2[3] = fVar8;
      fVar14 = *(float *)(uVar4 + 0x3c + lVar1);
      if (fVar11 <= fVar14) {
        fVar11 = fVar14;
      }
      param_2[4] = fVar11;
      fVar14 = *(float *)(uVar4 + 0x40 + lVar1);
      if (fVar12 <= fVar14) {
        fVar12 = fVar14;
      }
      param_2[5] = fVar12;
      fVar14 = *(float *)(uVar4 + 0x44 + lVar1);
      if (fVar14 <= fVar13) {
        fVar13 = fVar14;
      }
      *param_2 = fVar13;
      fVar14 = *(float *)(uVar4 + 0x48 + lVar1);
      if (fVar14 <= fVar9) {
        fVar9 = fVar14;
      }
      param_2[1] = fVar9;
      fVar14 = *(float *)(uVar4 + 0x4c + lVar1);
      if (fVar14 <= fVar10) {
        fVar10 = fVar14;
      }
      param_2[2] = fVar10;
      fVar14 = *(float *)(uVar4 + 0x44 + lVar1);
      if (fVar14 <= fVar8) {
        fVar14 = fVar8;
      }
      param_2[3] = fVar14;
      fVar13 = *(float *)(uVar4 + 0x48 + lVar1);
      if (fVar11 <= fVar13) {
        fVar11 = fVar13;
      }
      param_2[4] = fVar11;
      fVar13 = *(float *)(uVar4 + 0x4c + lVar1);
      if (fVar12 <= fVar13) {
        fVar12 = fVar13;
      }
      param_2[5] = fVar12;
      uVar4 = uVar4 + 0x50;
    } while ((int)uVar5 < *(int *)(param_1 + 0x470));
  }
  if (0 < *(int *)(param_1 + 0x480)) {
    fVar9 = param_2[1];
    fVar10 = param_2[2];
    fVar14 = param_2[3];
    fVar11 = param_2[4];
    fVar12 = param_2[5];
    uVar4 = uVar7;
    do {
      lVar1 = *(longlong *)(param_1 + 0x478);
      uVar5 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar5;
      fVar13 = *(float *)(uVar4 + 0x38 + lVar1);
      fVar8 = *param_2;
      if (fVar13 <= *param_2) {
        fVar8 = fVar13;
      }
      *param_2 = fVar8;
      fVar13 = *(float *)(uVar4 + 0x3c + lVar1);
      if (fVar13 <= fVar9) {
        fVar9 = fVar13;
      }
      param_2[1] = fVar9;
      fVar13 = *(float *)(uVar4 + 0x40 + lVar1);
      if (fVar13 <= fVar10) {
        fVar10 = fVar13;
      }
      param_2[2] = fVar10;
      fVar13 = *(float *)(uVar4 + 0x38 + lVar1);
      if (fVar14 <= fVar13) {
        fVar14 = fVar13;
      }
      param_2[3] = fVar14;
      fVar13 = *(float *)(uVar4 + 0x3c + lVar1);
      if (fVar11 <= fVar13) {
        fVar11 = fVar13;
      }
      param_2[4] = fVar11;
      fVar13 = *(float *)(uVar4 + 0x40 + lVar1);
      if (fVar12 <= fVar13) {
        fVar12 = fVar13;
      }
      param_2[5] = fVar12;
      fVar13 = *(float *)(uVar4 + 0x44 + lVar1);
      if (fVar13 <= fVar8) {
        fVar8 = fVar13;
      }
      *param_2 = fVar8;
      fVar13 = *(float *)(uVar4 + 0x48 + lVar1);
      if (fVar13 <= fVar9) {
        fVar9 = fVar13;
      }
      param_2[1] = fVar9;
      fVar13 = *(float *)(uVar4 + 0x4c + lVar1);
      if (fVar13 <= fVar10) {
        fVar10 = fVar13;
      }
      param_2[2] = fVar10;
      fVar13 = *(float *)(uVar4 + 0x44 + lVar1);
      if (fVar14 <= fVar13) {
        fVar14 = fVar13;
      }
      param_2[3] = fVar14;
      fVar13 = *(float *)(uVar4 + 0x48 + lVar1);
      if (fVar11 <= fVar13) {
        fVar11 = fVar13;
      }
      param_2[4] = fVar11;
      fVar13 = *(float *)(uVar4 + 0x4c + lVar1);
      if (fVar12 <= fVar13) {
        fVar12 = fVar13;
      }
      param_2[5] = fVar12;
      fVar13 = *(float *)(uVar4 + 0x50 + lVar1);
      if (fVar13 <= fVar8) {
        fVar8 = fVar13;
      }
      *param_2 = fVar8;
      fVar13 = *(float *)(uVar4 + 0x54 + lVar1);
      if (fVar13 <= fVar9) {
        fVar9 = fVar13;
      }
      param_2[1] = fVar9;
      fVar13 = *(float *)(uVar4 + 0x58 + lVar1);
      if (fVar13 <= fVar10) {
        fVar10 = fVar13;
      }
      param_2[2] = fVar10;
      fVar13 = *(float *)(uVar4 + 0x50 + lVar1);
      if (fVar13 <= fVar14) {
        fVar13 = fVar14;
      }
      param_2[3] = fVar13;
      fVar14 = *(float *)(uVar4 + 0x54 + lVar1);
      if (fVar11 <= fVar14) {
        fVar11 = fVar14;
      }
      param_2[4] = fVar11;
      fVar14 = *(float *)(uVar4 + 0x58 + lVar1);
      if (fVar12 <= fVar14) {
        fVar12 = fVar14;
      }
      param_2[5] = fVar12;
      fVar14 = *(float *)(uVar4 + 0x5c + lVar1);
      if (fVar14 <= fVar8) {
        fVar8 = fVar14;
      }
      *param_2 = fVar8;
      fVar14 = *(float *)(uVar4 + 0x60 + lVar1);
      if (fVar14 <= fVar9) {
        fVar9 = fVar14;
      }
      param_2[1] = fVar9;
      fVar14 = *(float *)(uVar4 + 100 + lVar1);
      if (fVar14 <= fVar10) {
        fVar10 = fVar14;
      }
      param_2[2] = fVar10;
      fVar8 = *(float *)(uVar4 + 0x5c + lVar1);
      fVar14 = fVar13;
      if (fVar13 <= fVar8) {
        fVar14 = fVar8;
      }
      param_2[3] = fVar14;
      fVar13 = *(float *)(uVar4 + 0x60 + lVar1);
      if (fVar11 <= fVar13) {
        fVar11 = fVar13;
      }
      param_2[4] = fVar11;
      fVar13 = *(float *)(uVar4 + 100 + lVar1);
      if (fVar12 <= fVar13) {
        fVar12 = fVar13;
      }
      param_2[5] = fVar12;
      uVar4 = uVar4 + 0x68;
    } while ((int)uVar5 < *(int *)(param_1 + 0x480));
  }
  pfVar3 = (float *)FBox::TransformBy(param_2,local_40,*(longlong *)(param_1 + 0x168) + 0x210);
  fVar9 = pfVar3[1];
  fVar10 = pfVar3[2];
  fVar14 = pfVar3[3];
  *param_2 = *pfVar3;
  param_2[1] = fVar9;
  param_2[2] = fVar10;
  param_2[3] = fVar14;
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(pfVar3 + 4);
  param_2[6] = pfVar3[6];
  if (*(longlong **)(param_1 + 0x488) != (longlong *)0x0) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x488) + 0x3f0))();
    if (cVar2 != '\0') {
      pfVar3 = (float *)FUN_142ba0d50(*(undefined8 *)(param_1 + 0x488),local_4c);
      if (*(char *)(param_2 + 6) == '\0') {
        *(undefined8 *)(param_2 + 3) = *(undefined8 *)pfVar3;
        fVar9 = pfVar3[2];
        param_2[5] = fVar9;
        *(undefined8 *)param_2 = *(undefined8 *)(param_2 + 3);
        param_2[2] = fVar9;
        *(undefined1 *)(param_2 + 6) = 1;
      }
      else {
        fVar9 = *param_2;
        if (*pfVar3 <= *param_2) {
          fVar9 = *pfVar3;
        }
        *param_2 = fVar9;
        fVar9 = pfVar3[1];
        if (param_2[1] <= pfVar3[1]) {
          fVar9 = param_2[1];
        }
        param_2[1] = fVar9;
        fVar9 = pfVar3[2];
        if (param_2[2] <= pfVar3[2]) {
          fVar9 = param_2[2];
        }
        param_2[2] = fVar9;
        fVar9 = param_2[3];
        if (param_2[3] <= *pfVar3) {
          fVar9 = *pfVar3;
        }
        param_2[3] = fVar9;
        fVar9 = param_2[4];
        if (param_2[4] <= pfVar3[1]) {
          fVar9 = pfVar3[1];
        }
        param_2[4] = fVar9;
        fVar9 = pfVar3[2];
        if (pfVar3[2] <= param_2[5]) {
          fVar9 = param_2[5];
        }
        param_2[5] = fVar9;
      }
      pfVar3 = (float *)FUN_142b9f860(*(undefined8 *)(param_1 + 0x488),local_4c);
      if (*(char *)(param_2 + 6) != '\0') {
        fVar9 = *pfVar3;
        if (*param_2 <= *pfVar3) {
          fVar9 = *param_2;
        }
        *param_2 = fVar9;
        fVar9 = pfVar3[1];
        if (param_2[1] <= pfVar3[1]) {
          fVar9 = param_2[1];
        }
        param_2[1] = fVar9;
        fVar9 = pfVar3[2];
        if (param_2[2] <= pfVar3[2]) {
          fVar9 = param_2[2];
        }
        param_2[2] = fVar9;
        fVar9 = *pfVar3;
        if (*pfVar3 <= param_2[3]) {
          fVar9 = param_2[3];
        }
        param_2[3] = fVar9;
        fVar9 = param_2[4];
        if (param_2[4] <= pfVar3[1]) {
          fVar9 = pfVar3[1];
        }
        param_2[4] = fVar9;
        fVar9 = pfVar3[2];
        if (pfVar3[2] <= param_2[5]) {
          fVar9 = param_2[5];
        }
        param_2[5] = fVar9;
        return param_2;
      }
      *(undefined8 *)(param_2 + 3) = *(undefined8 *)pfVar3;
      fVar9 = pfVar3[2];
      param_2[5] = fVar9;
      *(undefined8 *)param_2 = *(undefined8 *)(param_2 + 3);
      param_2[2] = fVar9;
      *(undefined1 *)(param_2 + 6) = 1;
    }
  }
  return param_2;
}



// FUNCTION 142c00bf0 FUN_142c00bf0 body=171 status=ok
// SIG undefined FUN_142c00bf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142c00bf0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  float fVar2;
  undefined8 uVar3;
  
  uVar3 = _DAT_1468b5d90;
  fVar2 = DAT_1468b5d98;
  if ((*(longlong *)(param_1 + -0x188) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + -0x188) + 0x178), uVar3 = DAT_1466910d0,
     fVar2 = DAT_1466910d8, lVar1 != 0)) {
    uVar3 = *(undefined8 *)(lVar1 + 0x220);
    fVar2 = *(float *)(lVar1 + 0x228) - *(float *)(lVar1 + 0x1e4);
  }
  *param_2 = uVar3;
  *(float *)(param_2 + 1) = fVar2;
  return param_2;
}



// FUNCTION 142c00d30 GetCurrent body=172 status=ok
// SIG undefined GetCurrent(void)

longlong UCrowdManager::GetCurrent(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_1 != 0) && (lVar3 = *(longlong *)(param_1 + 0x138), lVar3 != 0)) {
    lVar2 = FUN_142ba9430();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar3 = FWeakObjectPtr::Get(lVar3 + 0x120);
      if (lVar3 != 0) {
        lVar2 = FUN_142c3fed0();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          return lVar3;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142c00de0 FUN_142c00de0 body=119 status=ok
// SIG undefined FUN_142c00de0(void)

undefined8 FUN_142c00de0(undefined8 param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x150), lVar2 != 0)) {
    lVar3 = FUN_142c32730();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return *(undefined8 *)(lVar2 + 200);
    }
  }
  return 0;
}



// FUNCTION 142c00e60 FUN_142c00e60 body=430 status=ok
// SIG undefined FUN_142c00e60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_142c00e60(longlong param_1,float *param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float local_98;
  float local_94;
  float local_90;
  float local_88;
  float local_84;
  float local_80;
  undefined1 local_78 [112];
  
  if (*(longlong *)(param_1 + 0x230) == 0) {
    fVar3 = *(float *)(param_1 + 0x2f0);
    *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 0x2e8);
    param_2[2] = fVar3;
  }
  else {
    uVar1 = FNavigationPath::GetPathPointLocation
                      (*(undefined8 *)(param_1 + 0x1e8),local_78,*(undefined4 *)(param_1 + 0x2d0));
    FUN_1422e15c0(uVar1,&local_88);
    FUN_1422e15c0((longlong *)(param_1 + 0x230),&local_98);
    fVar3 = DAT_1468b5d98;
    local_98 = local_98 - local_88;
    local_94 = local_94 - local_84;
    local_90 = local_90 - local_80;
    fVar2 = local_94 * local_94 + local_98 * local_98 + local_90 * local_90;
    if (fVar2 == 1.0) {
      *(ulonglong *)param_2 = CONCAT44(local_94,local_98);
      param_2[2] = local_90;
    }
    else if (1e-08 <= fVar2) {
      auVar4 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
      fVar3 = auVar4._0_4_;
      fVar3 = fVar3 + fVar3 * (0.5 - fVar2 * 0.5 * fVar3 * fVar3);
      fVar3 = fVar3 + fVar3 * (0.5 - fVar2 * 0.5 * fVar3 * fVar3);
      *param_2 = local_98 * fVar3;
      param_2[1] = local_94 * fVar3;
      param_2[2] = local_90 * fVar3;
    }
    else {
      *(undefined8 *)param_2 = _DAT_1468b5d90;
      param_2[2] = fVar3;
    }
  }
  return param_2;
}



// FUNCTION 142c01010 FUN_142c01010 body=558 status=ok
// SIG undefined FUN_142c01010(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142c01010(longlong param_1,undefined8 *param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined4 local_res8 [2];
  undefined4 local_res18 [2];
  undefined8 local_48;
  float local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  
  if ((*(longlong *)(param_1 + 0x1c8) == 0) ||
     (((lVar5 = *(longlong *)(param_1 + 0x120), lVar5 == 0 && (lVar5 = FUN_1423407b0(), lVar5 == 0))
      || (lVar5 = *(longlong *)(lVar5 + 0x138), lVar5 == 0)))) {
LAB_142c0120d:
    uVar4 = DAT_1468b5d98;
    *param_2 = _DAT_1468b5d90;
    *(undefined4 *)(param_2 + 1) = uVar4;
    param_2[2] = 0;
    return param_2;
  }
  lVar6 = FUN_142ba9430();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) goto LAB_142c0120d;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x118);
  if (lVar6 != 0) {
    uVar7 = UNavAgentInterface::GetPrivateStaticClass();
    plVar8 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar7);
    if (plVar8 != (longlong *)0x0) {
      puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x18))(plVar8,&local_28);
      goto LAB_142c010f2;
    }
  }
  uStack_30 = CONCAT44(uStack_30._4_4_,DAT_1466910d8);
  puVar9 = &local_38;
  local_38 = DAT_1466910d0;
LAB_142c010f2:
  uVar7 = *puVar9;
  pfVar1 = (float *)(param_1 + 0x330);
  local_48._0_4_ = (float)uVar7;
  local_40 = *(float *)(puVar9 + 1);
  if (((1.0 < ABS((float)local_48 - *pfVar1)) ||
      (local_48._4_4_ = (float)((ulonglong)uVar7 >> 0x20),
      1.0 < ABS(local_48._4_4_ - *(float *)(param_1 + 0x334)))) ||
     (1.0 < ABS(local_40 - *(float *)(param_1 + 0x338)))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x1c8) + 0x118);
    local_48 = uVar7;
    if (plVar8 == (longlong *)0x0) {
      local_38 = _DAT_1468b5d90;
      local_20 = DAT_1468b5d98;
    }
    else {
      (**(code **)(*plVar8 + 0x578))(plVar8,local_res8,local_res18);
      local_38 = CONCAT44(local_res8[0],local_res8[0]);
      local_20 = local_res18[0];
    }
    local_28 = local_38;
    local_38 = 0;
    uStack_30 = 0;
    FUN_142b94770(lVar5,&local_48,pfVar1,&local_28,*(undefined8 *)(param_1 + 0x1d8),&local_38);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x338);
  uVar7 = *(undefined8 *)(param_1 + 0x340);
  *param_2 = *(undefined8 *)pfVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar7;
  return param_2;
}



// FUNCTION 142c01250 FUN_142c01250 body=507 status=ok
// SIG undefined FUN_142c01250(void)

longlong * FUN_142c01250(longlong *param_1,longlong *param_2)

{
  void *_Dst;
  int iVar1;
  void *pvVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined2 *_Src;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong *local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  
  uVar7 = 0;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  (**(code **)(*param_1 + 0x480))(param_1,&local_48,&local_38);
  *param_2 = 0;
  param_2[1] = 0;
  uVar8 = uVar7;
  uVar10 = uVar7;
  if (0 < (int)local_40) {
    do {
      iVar1 = *(int *)((longlong)local_48 + uVar7 + 8);
      iVar6 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar6 = 0;
      }
      pvVar2 = *(void **)((longlong)local_48 + uVar7);
      if (iVar6 != 0) {
        iVar1 = (int)param_2[1];
        iVar3 = (uint)(iVar1 == 0) + iVar6 + iVar1;
        *(int *)(param_2 + 1) = iVar3;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
        }
        _Dst = (void *)(*param_2 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(_Dst,pvVar2,(longlong)iVar6 * 2);
        *(undefined2 *)((longlong)iVar6 * 2 + (longlong)_Dst) = 0;
      }
      if ((((longlong)uVar8 < 0) || ((int)local_30 <= (int)uVar10)) ||
         (_Src = &DAT_145802b54, *(int *)(local_38 + uVar8 * 4) != 1)) {
        _Src = &DAT_145802c34;
      }
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (_Src[lVar4] != 0);
      iVar6 = (int)lVar4;
      if (iVar6 != 0) {
        iVar1 = (int)param_2[1];
        iVar3 = (uint)(iVar1 == 0) + iVar1 + iVar6;
        *(int *)(param_2 + 1) = iVar3;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
        }
        pvVar2 = (void *)(*param_2 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar2,_Src,(longlong)iVar6 * 2);
        *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar2) = 0;
      }
      uVar9 = (int)uVar10 + 1;
      uVar7 = uVar7 + 0x10;
      uVar8 = uVar8 + 1;
      uVar10 = (ulonglong)uVar9;
    } while ((int)uVar9 < (int)local_40);
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  plVar5 = local_48;
  for (iVar6 = (int)local_40; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142c01450 FUN_142c01450 body=2350 status=ok
// SIG undefined FUN_142c01450(void)

/* WARNING: Removing unreachable block (ram,0x000142c01b29) */
/* WARNING: Removing unreachable block (ram,0x000142c01a0a) */
/* WARNING: Removing unreachable block (ram,0x000142c01d1b) */
/* WARNING: Type propagation algorithm not settling */

void FUN_142c01450(longlong param_1,longlong *param_2,longlong *param_3)

{
  void *pvVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int iVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  void *local_res8;
  char local_res20 [8];
  float local_88;
  float local_84;
  float local_80 [3];
  undefined8 local_74;
  float local_6c;
  void *local_68;
  undefined8 local_60;
  
  if (*(char *)(param_1 + 0x399) != '\0') {
    FUN_142c01d80();
    return;
  }
  puVar7 = (undefined8 *)FUN_142c08ee0(param_1,&local_68);
  iVar2 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
  }
  lVar10 = 0;
  puVar11 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
  *puVar11 = 0;
  *puVar11 = *puVar7;
  *puVar7 = 0;
  *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar7 + 1);
  *(undefined4 *)((longlong)puVar11 + 0xc) = *(undefined4 *)((longlong)puVar7 + 0xc);
  puVar7[1] = 0;
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  iVar2 = (int)param_3[1];
  *(int *)(param_3 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
  }
  iVar12 = 0;
  *(undefined4 *)(*param_3 + (longlong)iVar2 * 4) = 0;
  lVar8 = *(longlong *)(param_1 + 0x120);
  if (lVar8 == 0) {
    lVar8 = FUN_1423407b0(param_1);
  }
  lVar8 = UCrowdManager::GetCurrent(lVar8);
  if (lVar8 != 0) {
    TSet<TTuple<UObject_*,FTraceRouteRecord>,TDefaultMapHashableKeyFuncs<UObject_*,FTraceRouteRecord,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(lVar8 + 0x78),&local_res8,param_1 + 0x350);
    lVar9 = lVar10;
    if ((int)local_res8 != -1) {
      lVar9 = *(longlong *)(lVar8 + 0x78) + (longlong)(int)local_res8 * 0x28;
    }
    lVar8 = lVar9 + 8;
    if (lVar9 == 0) {
      lVar8 = lVar10;
    }
    if ((lVar8 == 0) || (*(int *)(lVar8 + 8) < 0)) {
      local_68 = (void *)0x0;
      local_60 = 0xb;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
      pvVar1 = local_68;
      FGenericPlatformString::Memcpy(local_68,L"simulation",0x16);
      iVar2 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
      }
      puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
      *puVar7 = pvVar1;
      *(float *)(puVar7 + 1) = (float)local_60;
      *(undefined4 *)((longlong)puVar7 + 0xc) = local_60._4_4_;
      iVar2 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
      }
      local_68 = (void *)0x0;
      local_60 = 0xb;
      *(undefined4 *)(*param_3 + (longlong)iVar2 * 4) = 1;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
      pvVar1 = local_68;
      FGenericPlatformString::Memcpy(local_68,L"NOT ACTIVE",0x16);
      iVar2 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
      }
      puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
      *puVar7 = pvVar1;
      *(float *)(puVar7 + 1) = (float)local_60;
      *(undefined4 *)((longlong)puVar7 + 0xc) = local_60._4_4_;
      iVar2 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
      }
      *(undefined4 *)(*param_3 + (longlong)iVar2 * 4) = 2;
    }
  }
  if (*(int *)(param_1 + 0x1e0) == 3) {
    plVar3 = (longlong *)*param_2;
    lVar8 = *(longlong *)(param_1 + 0x1e8);
    if (lVar8 != 0) {
      iVar2 = *(int *)(lVar8 + 0x70);
      if ((iVar2 == DAT_146b2bc20) ||
         ((*(longlong *)(lVar8 + 0x78) != 0 &&
          (cVar5 = FNavPathType::IsA(*(longlong *)(lVar8 + 0x78),&DAT_146b2bc20), cVar5 != '\0'))))
      {
        bVar13 = true;
      }
      else {
        bVar13 = false;
      }
      lVar9 = lVar10;
      if (bVar13) {
        lVar9 = lVar8;
      }
      if (lVar9 == 0) {
        if ((iVar2 == DAT_146b2ba50) ||
           ((*(longlong *)(lVar8 + 0x78) != 0 &&
            (cVar5 = FNavPathType::IsA(*(longlong *)(lVar8 + 0x78),&DAT_146b2ba50), cVar5 != '\0')))
           ) {
          bVar13 = true;
        }
        else {
          bVar13 = false;
        }
        iVar2 = (int)plVar3[1];
        if (bVar13) {
          lVar10 = lVar8;
        }
        if (lVar10 == 0) {
          iVar12 = (0x10 - (uint)(iVar2 != 0)) + iVar2;
          *(int *)(plVar3 + 1) = iVar12;
          if (*(int *)((longlong)plVar3 + 0xc) < iVar12) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar3,iVar2);
          }
          lVar10 = *plVar3;
          lVar8 = (longlong)iVar2 - (ulonglong)(iVar2 != 0);
          builtin_wcsncpy((wchar_t *)(lVar10 + lVar8 * 2),L" (unknow",8);
          builtin_wcsncpy((wchar_t *)(lVar10 + 0x10 + lVar8 * 2),L"n pa",4);
          *(undefined4 *)(lVar10 + 0x18 + lVar8 * 2) = 0x680074;
          *(undefined2 *)(lVar10 + 0x1c + lVar8 * 2) = 0x29;
          *(undefined2 *)(lVar10 + 0x1e + lVar8 * 2) = 0;
        }
        else {
          iVar12 = (10 - (uint)(iVar2 != 0)) + iVar2;
          *(int *)(plVar3 + 1) = iVar12;
          if (*(int *)((longlong)plVar3 + 0xc) < iVar12) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar3,iVar2);
          }
          lVar10 = *plVar3;
          lVar8 = (longlong)iVar2 - (ulonglong)(iVar2 != 0);
          builtin_wcsncpy((wchar_t *)(lVar10 + lVar8 * 2),L" (direct",8);
          *(undefined2 *)(lVar10 + 0x10 + lVar8 * 2) = 0x29;
          *(undefined2 *)(lVar10 + 0x12 + lVar8 * 2) = 0;
        }
      }
      else {
        FString::PrintfImpl(&local_68,L" (path:%d, visited:%d)",*(undefined4 *)(param_1 + 0x390),
                            *(undefined4 *)(param_1 + 0x394));
        if ((float)local_60 != 0.0) {
          iVar12 = (int)(float)local_60 + -1;
        }
        local_res8 = local_68;
        if (iVar12 != 0) {
          iVar2 = (int)plVar3[1];
          iVar6 = (uint)(iVar2 == 0) + iVar12 + iVar2;
          *(int *)(plVar3 + 1) = iVar6;
          if (*(int *)((longlong)plVar3 + 0xc) < iVar6) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar3,iVar2);
          }
          pvVar1 = (void *)(*plVar3 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar1,local_res8,(longlong)iVar12 * 2);
          *(undefined2 *)((longlong)pvVar1 + (longlong)iVar12 * 2) = 0;
        }
        if (local_68 != (void *)0x0) {
          FMemory::Free(local_68);
        }
      }
    }
    local_80[0] = 0.0;
    local_80[1] = 0.0;
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x1c8) + 0x118);
    (**(code **)(*plVar3 + 0x578))(plVar3,local_80,local_80 + 1);
    if ((*(uint *)(param_1 + 0x37c) & 0x2000) == 0) {
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x178);
      if (lVar10 == 0) {
        local_74 = DAT_1466910d0;
        local_6c = DAT_1466910d8;
      }
      else {
        local_74 = *(undefined8 *)(lVar10 + 0x220);
        local_6c = *(float *)(lVar10 + 0x228) - *(float *)(lVar10 + 0x1e4);
      }
      fVar15 = (float)local_74;
      uVar4 = (ulonglong)local_74 >> 0x20;
      local_60 = CONCAT44(local_60._4_4_,local_6c);
      FUN_1422e15c0(param_1 + 0x230,&local_74);
      fVar15 = (float)local_74 - fVar15;
      fVar14 = local_6c - (float)local_60;
      fVar16 = local_80[0] * 5.0;
      local_68 = (void *)0x0;
      fVar17 = local_74._4_4_ - (float)uVar4;
      local_60 = 9;
      fVar14 = fVar17 * fVar17 + fVar15 * fVar15 + fVar14 * fVar14;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
      pvVar1 = local_68;
      FGenericPlatformString::Memcpy(local_68,L"distance",0x12);
      iVar2 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
      }
      puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
      *puVar7 = pvVar1;
      *(float *)(puVar7 + 1) = (float)local_60;
      *(undefined4 *)((longlong)puVar7 + 0xc) = local_60._4_4_;
      iVar2 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
      }
      *(undefined4 *)(*param_3 + (longlong)iVar2 * 4) = 1;
      FString::PrintfImpl(&local_68,L"%.0f",(double)SQRT(fVar14));
      iVar2 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
      }
      puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
      *puVar7 = 0;
      *puVar7 = local_68;
      *(float *)(puVar7 + 1) = (float)local_60;
      *(undefined4 *)((longlong)puVar7 + 0xc) = local_60._4_4_;
      local_60 = 0;
      local_68 = (void *)0x0;
      iVar2 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
      }
      *(uint *)(*param_3 + (longlong)iVar2 * 4) = (fVar14 < fVar16 * fVar16) + 2;
    }
    else {
      local_80[2] = 0.0;
      local_88 = 0.0;
      local_84 = 0.0;
      local_res20[0] = '\0';
      local_res8 = (void *)((ulonglong)local_res8 & 0xffffffffffffff00);
      FUN_142bfb470(param_1,local_80 + 2,&local_88,&local_84,&local_res8,local_res20,&local_res8);
      local_68 = (void *)0x0;
      local_60 = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
      pvVar1 = local_68;
      FGenericPlatformString::Memcpy(local_68,L"dist2D",0xe);
      iVar2 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
      }
      puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
      *puVar7 = pvVar1;
      *(float *)(puVar7 + 1) = (float)local_60;
      *(undefined4 *)((longlong)puVar7 + 0xc) = local_60._4_4_;
      iVar2 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
      }
      *(undefined4 *)(*param_3 + (longlong)iVar2 * 4) = 1;
      FString::PrintfImpl(&local_68,L"%.0f",(double)local_88);
      iVar2 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
      }
      puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
      *puVar7 = 0;
      *puVar7 = local_68;
      *(float *)(puVar7 + 1) = (float)local_60;
      *(undefined4 *)((longlong)puVar7 + 0xc) = local_60._4_4_;
      local_60 = 0;
      local_68 = (void *)0x0;
      iVar2 = (int)param_3[1];
      bVar13 = local_res20[0] != '\0';
      *(int *)(param_3 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
      }
      local_68 = (void *)0x0;
      local_60 = 6;
      *(uint *)(*param_3 + (longlong)iVar2 * 4) = 3 - (uint)bVar13;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
      pvVar1 = local_68;
      FGenericPlatformString::Memcpy(local_68,L"distZ",0xc);
      iVar2 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
      }
      puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
      *puVar7 = pvVar1;
      *(float *)(puVar7 + 1) = (float)local_60;
      *(undefined4 *)((longlong)puVar7 + 0xc) = local_60._4_4_;
      iVar2 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
      }
      *(undefined4 *)(*param_3 + (longlong)iVar2 * 4) = 1;
      FString::PrintfImpl(&local_68,L"%.0f",(double)local_84);
      iVar2 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
      }
      puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
      *puVar7 = 0;
      *puVar7 = local_68;
      *(float *)(puVar7 + 1) = (float)local_60;
      *(undefined4 *)((longlong)puVar7 + 0xc) = local_60._4_4_;
      local_60 = 0;
      local_68 = (void *)0x0;
      iVar2 = (int)param_3[1];
      bVar13 = (char)local_res8 != '\0';
      *(int *)(param_3 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
      }
      *(uint *)(*param_3 + (longlong)iVar2 * 4) = 3 - (uint)bVar13;
    }
  }
  return;
}



// FUNCTION 142c01d80 FUN_142c01d80 body=1646 status=ok
// SIG undefined FUN_142c01d80(void)

/* WARNING: Removing unreachable block (ram,0x000142c0228d) */
/* WARNING: Removing unreachable block (ram,0x000142c02171) */
/* WARNING: Removing unreachable block (ram,0x000142c023b0) */

void FUN_142c01d80(longlong param_1,longlong *param_2,longlong *param_3)

{
  void *_Dst;
  longlong lVar1;
  longlong *plVar2;
  void *pvVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  int iVar11;
  bool bVar12;
  char local_res8 [8];
  char local_res10 [8];
  float local_res18 [2];
  float local_res20 [2];
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar13;
  float local_68 [2];
  void *local_60;
  undefined8 local_58;
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  puVar7 = (undefined8 *)FUN_142c08ee0(param_1,&local_60);
  iVar11 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar11 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar11 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar11);
  }
  bVar12 = false;
  puVar8 = (undefined8 *)((longlong)iVar11 * 0x10 + *param_2);
  *puVar8 = 0;
  *puVar8 = *puVar7;
  *puVar7 = 0;
  *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar7 + 1);
  *(undefined4 *)((longlong)puVar8 + 0xc) = *(undefined4 *)((longlong)puVar7 + 0xc);
  puVar7[1] = 0;
  if (local_60 != (void *)0x0) {
    FMemory::Free();
  }
  iVar11 = (int)param_3[1];
  *(int *)(param_3 + 1) = iVar11 + 1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar11 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3,iVar11);
  }
  *(undefined4 *)(*param_3 + (longlong)iVar11 * 4) = 0;
  if (*(int *)(param_1 + 0x1e0) == 3) {
    lVar1 = *(longlong *)(param_1 + 0x1e8);
    plVar2 = (longlong *)*param_2;
    if (lVar1 == 0) {
      iVar11 = (int)plVar2[1];
      iVar6 = (0x10 - (uint)(iVar11 != 0)) + iVar11;
      *(int *)(plVar2 + 1) = iVar6;
      if (*(int *)((longlong)plVar2 + 0xc) < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar2,iVar11);
      }
      lVar1 = *plVar2;
      lVar10 = (longlong)iVar11 - (ulonglong)(iVar11 != 0);
      builtin_wcsncpy((wchar_t *)(lVar1 + lVar10 * 2),L" (invali",8);
      builtin_wcsncpy((wchar_t *)(lVar1 + 0x10 + lVar10 * 2),L"d pa",4);
      *(undefined4 *)(lVar1 + 0x18 + lVar10 * 2) = 0x680074;
      *(undefined2 *)(lVar1 + 0x1c + lVar10 * 2) = 0x29;
      *(undefined2 *)(lVar1 + 0x1e + lVar10 * 2) = 0;
    }
    else {
      if ((((*(uint *)(lVar1 + 0x98) & 2) == 0) || (iVar11 = *(int *)(lVar1 + 0x30), iVar11 < 2)) ||
         ((*(uint *)(lVar1 + 0x98) & 1) == 0)) {
        iVar11 = -1;
      }
      if ((*(int *)(lVar1 + 0x70) == DAT_146b2ba50) ||
         ((*(longlong *)(lVar1 + 0x78) != 0 &&
          (cVar4 = FNavPathType::IsA(*(longlong *)(lVar1 + 0x78),&DAT_146b2ba50), cVar4 != '\0'))))
      {
        bVar12 = true;
      }
      cVar4 = FWeakObjectPtr::IsValid();
      lVar10 = 0;
      if (bVar12) {
        lVar10 = lVar1;
      }
      if (lVar10 == 0) {
        pwVar9 = L"";
        if (cVar4 != '\0') {
          pwVar9 = L" (custom NavLink)";
        }
        FString::PrintfImpl(&local_60,L" (%d..%d/%d)%s",*(int *)(param_1 + 0x2d0) + 1,
                            *(int *)(param_1 + 0x2d4) + 1,CONCAT44(uVar13,iVar11),pwVar9);
        pvVar3 = local_60;
        if ((int)local_58 == 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = (int)local_58 + -1;
        }
        if (iVar11 != 0) {
          iVar6 = (int)plVar2[1];
          iVar5 = (uint)(iVar6 == 0) + iVar6 + iVar11;
          *(int *)(plVar2 + 1) = iVar5;
          if (*(int *)((longlong)plVar2 + 0xc) < iVar5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar2,iVar6);
          }
          _Dst = (void *)(*plVar2 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(_Dst,pvVar3,(longlong)iVar11 * 2);
          *(undefined2 *)((longlong)iVar11 * 2 + (longlong)_Dst) = 0;
        }
        if (local_60 != (void *)0x0) {
          FMemory::Free(local_60);
        }
      }
      else {
        iVar11 = (int)plVar2[1];
        iVar6 = (10 - (uint)(iVar11 != 0)) + iVar11;
        *(int *)(plVar2 + 1) = iVar6;
        if (*(int *)((longlong)plVar2 + 0xc) < iVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar2,iVar11);
        }
        lVar1 = *plVar2;
        lVar10 = (longlong)iVar11 - (ulonglong)(iVar11 != 0);
        builtin_wcsncpy((wchar_t *)(lVar1 + lVar10 * 2),L" (direct",8);
        *(undefined2 *)(lVar1 + 0x10 + lVar10 * 2) = 0x29;
        *(undefined2 *)(lVar1 + 0x12 + lVar10 * 2) = 0;
      }
    }
    local_res18[0] = 0.0;
    local_res20[0] = 0.0;
    local_68[0] = 0.0;
    local_res10[0] = '\0';
    local_res8[0] = '\0';
    FUN_142bfb470(param_1,local_res18,local_res20,local_68,local_res8,local_res10,local_res8);
    local_60 = (void *)0x0;
    local_58 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
    pvVar3 = local_60;
    FGenericPlatformString::Memcpy(local_60,&DAT_1458042b0,8);
    iVar11 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar11 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar11);
    }
    puVar7 = (undefined8 *)((longlong)iVar11 * 0x10 + *param_2);
    *puVar7 = pvVar3;
    *(int *)(puVar7 + 1) = (int)local_58;
    *(undefined4 *)((longlong)puVar7 + 0xc) = local_58._4_4_;
    iVar11 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar11 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3,iVar11);
    }
    *(undefined4 *)(*param_3 + (longlong)iVar11 * 4) = 1;
    FString::PrintfImpl(&local_60,L"%.2f",(double)local_res18[0]);
    iVar11 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar11 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar11);
    }
    puVar7 = (undefined8 *)((longlong)iVar11 * 0x10 + *param_2);
    *puVar7 = 0;
    *puVar7 = local_60;
    *(int *)(puVar7 + 1) = (int)local_58;
    *(undefined4 *)((longlong)puVar7 + 0xc) = local_58._4_4_;
    local_58 = 0;
    local_60 = (void *)0x0;
    iVar11 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar11 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3,iVar11);
    }
    local_60 = (void *)0x0;
    local_58 = 7;
    *(undefined4 *)(*param_3 + (longlong)iVar11 * 4) = 3;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
    pvVar3 = local_60;
    FGenericPlatformString::Memcpy(local_60,L"dist2D",0xe);
    iVar11 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar11 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar11);
    }
    puVar7 = (undefined8 *)((longlong)iVar11 * 0x10 + *param_2);
    *puVar7 = pvVar3;
    *(int *)(puVar7 + 1) = (int)local_58;
    *(undefined4 *)((longlong)puVar7 + 0xc) = local_58._4_4_;
    iVar11 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar11 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3,iVar11);
    }
    *(undefined4 *)(*param_3 + (longlong)iVar11 * 4) = 1;
    FString::PrintfImpl(&local_60,L"%.0f",(double)local_res20[0]);
    iVar11 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar11 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar11);
    }
    puVar7 = (undefined8 *)((longlong)iVar11 * 0x10 + *param_2);
    *puVar7 = 0;
    *puVar7 = local_60;
    *(int *)(puVar7 + 1) = (int)local_58;
    *(undefined4 *)((longlong)puVar7 + 0xc) = local_58._4_4_;
    local_58 = 0;
    local_60 = (void *)0x0;
    iVar11 = (int)param_3[1];
    bVar12 = local_res10[0] != '\0';
    *(int *)(param_3 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar11 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3,iVar11);
    }
    local_60 = (void *)0x0;
    local_58 = 6;
    *(uint *)(*param_3 + (longlong)iVar11 * 4) = 3 - (uint)bVar12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
    pvVar3 = local_60;
    FGenericPlatformString::Memcpy(local_60,L"distZ",0xc);
    iVar11 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar11 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar11);
    }
    puVar7 = (undefined8 *)((longlong)iVar11 * 0x10 + *param_2);
    *puVar7 = pvVar3;
    *(int *)(puVar7 + 1) = (int)local_58;
    *(undefined4 *)((longlong)puVar7 + 0xc) = local_58._4_4_;
    iVar11 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar11 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3,iVar11);
    }
    *(undefined4 *)(*param_3 + (longlong)iVar11 * 4) = 1;
    FString::PrintfImpl(&local_60,L"%.0f",(double)local_68[0]);
    iVar11 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar11 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar11);
    }
    puVar7 = (undefined8 *)((longlong)iVar11 * 0x10 + *param_2);
    *puVar7 = 0;
    *puVar7 = local_60;
    *(int *)(puVar7 + 1) = (int)local_58;
    *(undefined4 *)((longlong)puVar7 + 0xc) = local_58._4_4_;
    local_58 = 0;
    local_60 = (void *)0x0;
    iVar11 = (int)param_3[1];
    bVar12 = local_res8[0] != '\0';
    *(int *)(param_3 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar11 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3,iVar11);
    }
    *(uint *)(*param_3 + (longlong)iVar11 * 4) = 3 - (uint)bVar12;
  }
  return;
}



// FUNCTION 142c023f0 GetDescription body=62 status=ok
// SIG undefined GetDescription(void)

undefined8 * UEnvQueryItemType::GetDescription(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"item",10);
  return param_2;
}



// FUNCTION 142c02430 FUN_142c02430 body=108 status=ok
// SIG undefined FUN_142c02430(void)

undefined8 * FUN_142c02430(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 local_res8 [4];
  
  lVar1 = (**(code **)(*param_1 + 0x2a8))(param_1,param_3);
  if (lVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    FGenericPlatformString::Memcpy(*param_2,&DAT_143f3edc8,10);
    return param_2;
  }
  local_res8[0] = *(undefined8 *)(lVar1 + 0x18);
  FName::ToString(local_res8,param_2);
  return param_2;
}



// FUNCTION 142c024a0 FUN_142c024a0 body=121 status=ok
// SIG undefined FUN_142c024a0(void)

undefined8 * FUN_142c024a0(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 local_res18 [2];
  
  local_res10 = *param_3;
  local_res14 = param_3[1];
  lVar1 = FWeakObjectPtr::Get(&local_res10);
  if (lVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    FGenericPlatformString::Memcpy(*param_2,&DAT_143f3edc8,10);
    return param_2;
  }
  local_res18[0] = *(undefined8 *)(lVar1 + 0x18);
  FName::ToString(local_res18,param_2);
  return param_2;
}



// FUNCTION 142c02520 GetDescription body=90 status=ok
// SIG undefined GetDescription(void)

undefined8 UEnvQueryItemType_Direction::GetDescription(longlong *param_1,undefined8 param_2)

{
  float local_18;
  float local_14;
  float local_10;
  
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_18);
  FString::PrintfImpl(param_2,L"(P=%.0f,Y=%.0f,R=%.0f)",(double)local_18,(double)local_14,
                      (double)local_10);
  return param_2;
}



// FUNCTION 142c02580 GetDescription body=90 status=ok
// SIG undefined GetDescription(void)

undefined8 UEnvQueryItemType_Direction::GetDescription(longlong *param_1,undefined8 param_2)

{
  float local_18;
  float local_14;
  float local_10;
  
  (**(code **)(*param_1 + 0x298))(param_1,&local_18);
  FString::PrintfImpl(param_2,L"(X=%.0f,Y=%.0f,Z=%.0f)",(double)local_18,(double)local_14,
                      (double)local_10);
  return param_2;
}



// FUNCTION 142c025e0 FUN_142c025e0 body=1585 status=ok
// SIG undefined FUN_142c025e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142c025e0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  char *pcVar12;
  undefined1 auStack_2e8 [32];
  undefined4 *local_2c8;
  ulonglong *puStack_2c0;
  longlong local_2b8 [2];
  undefined1 local_2a8 [4];
  undefined1 local_2a4 [4];
  longlong local_2a0;
  longlong local_298;
  undefined8 local_290;
  longlong local_288;
  longlong *local_280;
  undefined4 *local_278;
  undefined4 **local_270;
  undefined4 *local_268;
  undefined1 local_260 [8];
  longlong *local_258;
  undefined4 *local_248;
  ulonglong *puStack_240;
  undefined1 local_238 [16];
  longlong local_228 [2];
  longlong local_218 [2];
  undefined1 local_208 [8];
  longlong *local_200;
  undefined1 local_1f0 [8];
  longlong *local_1e8;
  undefined1 local_1d8 [8];
  longlong *local_1d0;
  undefined1 local_1c0 [8];
  longlong *local_1b8;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [24];
  undefined1 local_170 [24];
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  longlong local_118;
  undefined4 local_110;
  undefined4 local_108 [4];
  undefined1 local_f8 [8];
  longlong *local_f0;
  char local_e0;
  undefined4 local_d8 [4];
  undefined1 local_c8 [8];
  longlong *local_c0;
  char local_b0;
  undefined4 local_a8 [4];
  undefined1 local_98 [24];
  undefined1 local_80;
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  local_298 = param_1;
  uVar8 = FAIDataProviderValue::ToString(param_1 + 0xf8,local_218);
  lVar9 = FText::FromString(local_188,uVar8);
  local_2a0 = lVar9;
  uVar8 = FAIDataProviderValue::ToString(param_1 + 200,local_228);
  lVar10 = FText::FromString(local_170,uVar8);
  uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_1f0,L"degrees: {0}, angle step: {1}",L"EnvQueryGenerator",
                     L"ConeDescription");
  puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_1a8,uVar8);
  local_a8[0] = 4;
  FText::FText(local_98,lVar10);
  local_80 = 1;
  local_78 = 4;
  FText::FText(local_68,lVar9);
  local_2c8 = local_a8;
  local_50 = 1;
  puStack_2c0 = local_48;
  local_290 = *puVar11;
  local_288 = puVar11[1];
  if (local_288 != 0) {
    LOCK();
    *(int *)(local_288 + 8) = *(int *)(local_288 + 8) + 1;
    UNLOCK();
  }
  local_248 = local_2c8;
  puStack_240 = puStack_2c0;
  uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_238,&local_248);
  uVar8 = FText::Format(local_208,&local_290,uVar8);
  FText::FText(param_2,uVar8);
  if (local_200 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_200 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_200)(local_200);
      LOCK();
      piVar1 = (int *)((longlong)local_200 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_200 + 8))(local_200,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_238);
  lVar9 = 2;
  pcVar12 = &stack0xffffffffffffffe0;
  do {
    lVar9 = lVar9 + -1;
    pcVar2 = pcVar12 + -0x30;
    if (*pcVar2 != '\0') {
      *pcVar2 = '\0';
      plVar5 = *(longlong **)(pcVar12 + -0x40);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar5 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
    }
    pcVar12 = pcVar2;
  } while (lVar9 != 0);
  plVar5 = (longlong *)puVar11[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar9 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = *(longlong **)(lVar10 + 8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar9 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = *(longlong **)(local_2a0 + 8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar9 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (local_1e8 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1e8 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_1e8)(local_1e8);
      LOCK();
      piVar1 = (int *)((longlong)local_1e8 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_1e8 + 8))(local_1e8,1);
      }
    }
  }
  if (local_228[0] != 0) {
    FMemory::Free();
  }
  if (local_218[0] != 0) {
    FMemory::Free();
  }
  FUN_142bf4db0(local_298 + 0x60,local_260,0);
  cVar7 = FText::IsEmpty(local_260);
  if (cVar7 == '\0') {
    local_128 = 0xffffffff;
    local_158 = 0;
    local_150 = 0;
    local_138 = 0;
    local_130 = 0;
    local_124 = 0;
    local_118 = 0;
    local_110 = 0;
    local_108[0] = 4;
    FText::FText(local_f8,param_2);
    local_e0 = '\x01';
    local_2b8[0] = 0;
    local_2b8[1] = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_2b8,0);
    FGenericPlatformString::Memcpy(local_2b8[0],L"Description",0x18);
    local_280 = local_2b8;
    local_278 = local_108;
    FUN_1407484b0(&local_158,local_2a8,&local_280,0);
    if (local_2b8[0] != 0) {
      FMemory::Free();
    }
    if (local_e0 != '\0') {
      local_e0 = '\0';
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_f0 + 1;
        lVar9 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar1 = (int *)((longlong)local_f0 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_f0 + 8))(local_f0,1);
          }
        }
      }
    }
    local_d8[0] = 4;
    FText::FText(local_c8,local_260);
    local_b0 = '\x01';
    local_2c8 = (undefined4 *)0x0;
    puStack_2c0 = (ulonglong *)&DAT_00000016;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2c8,0);
    FGenericPlatformString::Memcpy(local_2c8,L"ProjectionDescription",0x2c);
    local_270 = &local_2c8;
    local_268 = local_d8;
    FUN_1407484b0(&local_158,local_2a4,&local_270,0);
    if (local_2c8 != (undefined4 *)0x0) {
      FMemory::Free();
    }
    if (local_b0 != '\0') {
      local_b0 = '\0';
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_c0 + 1;
        lVar9 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_c0)(local_c0);
          LOCK();
          piVar1 = (int *)((longlong)local_c0 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_c0 + 8))(local_c0,1);
          }
        }
      }
    }
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_1c0,L"{Description}, {ProjectionDescription}",L"EnvQueryGenerator",
                       L"ConeDescriptionWithProjection");
    uVar8 = FTextFormat::FTextFormat(local_198,uVar8);
    uVar8 = FText::Format(local_1d8,uVar8,&local_158);
    FText::operator=(param_2,uVar8);
    if (local_1d0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_1d0 + 1;
      lVar9 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_1d0)(local_1d0);
        LOCK();
        piVar1 = (int *)((longlong)local_1d0 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1d0 + 8))(local_1d0,1);
        }
      }
    }
    if (local_1b8 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_1b8 + 1;
      lVar9 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_1b8)(local_1b8);
        LOCK();
        piVar1 = (int *)((longlong)local_1b8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1b8 + 8))(local_1b8,1);
        }
      }
    }
    local_110 = 0;
    if (local_118 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_158);
  }
  if (local_258 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_258 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_258)(local_258);
      LOCK();
      piVar1 = (int *)((longlong)local_258 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_258 + 8))(local_258,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142c02c20 FUN_142c02c20 body=130 status=ok
// SIG undefined FUN_142c02c20(void)

undefined8 FUN_142c02c20(undefined8 param_1,undefined8 param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146852c50) {
    _Init_thread_header(&DAT_146852c50);
    if (DAT_146852c50 == -1) {
      FText::FText(&DAT_146852c38,0);
      atexit(FUN_143e3e8f0);
      _Init_thread_footer(&DAT_146852c50);
    }
  }
  FText::FText(param_2,&DAT_146852c38);
  return param_2;
}



// FUNCTION 142c02cb0 FUN_142c02cb0 body=3337 status=ok
// SIG undefined FUN_142c02cb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142c02cb0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined1 auStack_5b8 [32];
  longlong local_598 [18];
  undefined1 local_508 [4];
  undefined1 local_504 [4];
  undefined1 local_500 [4];
  undefined1 local_4fc [4];
  undefined1 local_4f8 [4];
  undefined1 local_4f4 [4];
  undefined1 local_4f0 [4];
  undefined1 local_4ec [4];
  undefined1 local_4e8 [8];
  longlong *local_4e0;
  undefined4 *local_4d8;
  longlong *local_4d0;
  undefined4 *local_4c8;
  longlong *local_4c0;
  undefined4 *local_4b8;
  longlong *local_4b0;
  undefined4 *local_4a8;
  longlong *local_4a0;
  undefined4 *local_498;
  longlong *local_490;
  undefined4 *local_488;
  longlong *local_480;
  undefined4 *local_478;
  longlong *local_470;
  undefined4 *local_468;
  longlong *local_460;
  undefined4 *local_458;
  undefined1 local_450 [8];
  longlong *local_448;
  longlong local_438 [2];
  longlong local_428 [2];
  longlong local_418 [2];
  longlong local_408 [2];
  undefined1 local_3f8 [8];
  longlong *local_3f0;
  undefined1 local_3e0 [8];
  longlong *local_3d8;
  undefined1 local_3c8 [8];
  longlong *local_3c0;
  undefined1 local_3b0 [8];
  longlong *local_3a8;
  undefined1 local_398 [8];
  longlong *local_390;
  undefined1 local_380 [8];
  longlong *local_378;
  undefined1 local_368 [8];
  longlong *local_360;
  undefined1 local_350 [8];
  longlong *local_348;
  undefined1 local_338 [8];
  longlong *local_330;
  undefined1 local_320 [8];
  longlong *local_318;
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a4;
  longlong local_298;
  undefined4 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_268;
  undefined8 local_260;
  undefined4 local_258;
  undefined4 local_254;
  longlong local_248;
  undefined4 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_218;
  undefined8 local_210;
  undefined4 local_208;
  undefined4 local_204;
  longlong local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8 [4];
  undefined1 local_1d8 [8];
  longlong *local_1d0;
  char local_1c0;
  undefined4 local_1b8 [4];
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  char local_190;
  undefined4 local_188 [4];
  undefined1 local_178 [8];
  longlong *local_170;
  char local_160;
  undefined4 local_158 [4];
  undefined1 local_148 [8];
  longlong *local_140;
  char local_130;
  undefined4 local_128 [2];
  undefined4 local_120;
  longlong *local_110;
  char local_100;
  undefined4 local_f8 [4];
  undefined1 local_e8 [8];
  longlong *local_e0;
  char local_d0;
  undefined4 local_c8 [4];
  undefined1 local_b8 [8];
  longlong *local_b0;
  char local_a0;
  undefined4 local_98 [4];
  undefined1 local_88 [8];
  longlong *local_80;
  char local_70;
  undefined4 local_68 [4];
  undefined1 local_58 [24];
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_5b8;
  local_2d8 = 0;
  local_2d0 = 0;
  local_2b8 = 0;
  local_2b0 = 0;
  local_2a8 = 0xffffffff;
  local_2a4 = 0;
  local_298 = 0;
  local_290 = 0;
  uVar6 = FAIDataProviderValue::ToString(param_1 + 0x98,local_408);
  uVar6 = FText::FromString(local_3f8,uVar6);
  local_1e8[0] = 4;
  FText::FText(local_1d8,uVar6);
  local_1c0 = '\x01';
  local_598[2] = 0;
  local_598[3] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_598 + 2,0);
  FGenericPlatformString::Memcpy(local_598[2],L"InnerRadius",0x18);
  local_4e0 = local_598 + 2;
  local_4d8 = local_1e8;
  FUN_1407484b0(&local_2d8,local_4f0,&local_4e0,0);
  if (local_598[2] != 0) {
    FMemory::Free();
  }
  if (local_1c0 != '\0') {
    local_1c0 = '\0';
    if (local_1d0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1d0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_1d0)(local_1d0);
        LOCK();
        piVar2 = (int *)((longlong)local_1d0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1d0 + 8))(local_1d0,1);
        }
      }
    }
  }
  if (local_3f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_3f0 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_3f0)(local_3f0);
      LOCK();
      piVar2 = (int *)((longlong)local_3f0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_3f0 + 8))(local_3f0,1);
      }
    }
  }
  if (local_408[0] != 0) {
    FMemory::Free();
  }
  uVar6 = FAIDataProviderValue::ToString(param_1 + 200,local_438);
  uVar6 = FText::FromString(local_3e0,uVar6);
  local_1b8[0] = 4;
  FText::FText(local_1a8,uVar6);
  local_190 = '\x01';
  local_598[4] = 0;
  local_598[5] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_598 + 4,0);
  FGenericPlatformString::Memcpy(local_598[4],L"OuterRadius",0x18);
  local_4d0 = local_598 + 4;
  local_4c8 = local_1b8;
  FUN_1407484b0(&local_2d8,local_508,&local_4d0,0);
  if (local_598[4] != 0) {
    FMemory::Free();
  }
  if (local_190 != '\0') {
    local_190 = '\0';
    if (local_1a0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1a0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_1a0)(local_1a0);
        LOCK();
        piVar2 = (int *)((longlong)local_1a0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1a0 + 8))(local_1a0,1);
        }
      }
    }
  }
  if (local_3d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_3d8 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_3d8)(local_3d8);
      LOCK();
      piVar2 = (int *)((longlong)local_3d8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_3d8 + 8))(local_3d8,1);
      }
    }
  }
  if (local_438[0] != 0) {
    FMemory::Free();
  }
  uVar6 = FAIDataProviderValue::ToString(param_1 + 0xf8,local_428);
  uVar6 = FText::FromString(local_3c8,uVar6);
  local_188[0] = 4;
  FText::FText(local_178,uVar6);
  local_160 = '\x01';
  local_598[6] = 0;
  local_598[7] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_598 + 6,0);
  FGenericPlatformString::Memcpy(local_598[6],L"NumRings",0x12);
  local_4c0 = local_598 + 6;
  local_4b8 = local_188;
  FUN_1407484b0(&local_2d8,local_504,&local_4c0,0);
  if (local_598[6] != 0) {
    FMemory::Free();
  }
  if (local_160 != '\0') {
    local_160 = '\0';
    if (local_170 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_170 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_170)(local_170);
        LOCK();
        piVar2 = (int *)((longlong)local_170 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_170 + 8))(local_170,1);
        }
      }
    }
  }
  if (local_3c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_3c0 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_3c0)(local_3c0);
      LOCK();
      piVar2 = (int *)((longlong)local_3c0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_3c0 + 8))(local_3c0,1);
      }
    }
  }
  if (local_428[0] != 0) {
    FMemory::Free();
  }
  uVar6 = FAIDataProviderValue::ToString(param_1 + 0x128,local_418);
  uVar6 = FText::FromString(local_3b0,uVar6);
  local_158[0] = 4;
  FText::FText(local_148,uVar6);
  local_130 = '\x01';
  local_598[8] = 0;
  local_598[9] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_598 + 8,0);
  FGenericPlatformString::Memcpy(local_598[8],L"NumPerRing",0x16);
  local_4b0 = local_598 + 8;
  local_4a8 = local_158;
  FUN_1407484b0(&local_2d8,local_500,&local_4b0,0);
  if (local_598[8] != 0) {
    FMemory::Free();
  }
  if (local_130 != '\0') {
    local_130 = '\0';
    if (local_140 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_140 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_140)(local_140);
        LOCK();
        piVar2 = (int *)((longlong)local_140 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_140 + 8))(local_140,1);
        }
      }
    }
  }
  if (local_3a8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_3a8 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_3a8)(local_3a8);
      LOCK();
      piVar2 = (int *)((longlong)local_3a8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_3a8 + 8))(local_3a8,1);
      }
    }
  }
  if (local_418[0] != 0) {
    FMemory::Free();
  }
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_398,
                     L"radius: {InnerRadius} to {OuterRadius}\nrings: {NumRings}, points per ring: {NumPerRing}"
                     ,L"EnvQueryGenerator",L"DonutDescription");
  uVar6 = FTextFormat::FTextFormat(local_2e8,uVar6);
  FText::Format(param_2,uVar6,&local_2d8);
  if (local_390 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_390 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_390)(local_390);
      LOCK();
      piVar2 = (int *)((longlong)local_390 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_390 + 8))(local_390,1);
      }
    }
  }
  if ((*(byte *)(param_1 + 0x1b8) & 1) != 0) {
    local_288 = 0;
    local_280 = 0;
    local_268 = 0;
    local_260 = 0;
    local_258 = 0xffffffff;
    local_254 = 0;
    local_248 = 0;
    local_240 = 0;
    local_98[0] = 4;
    FText::FText(local_88,param_2);
    local_70 = '\x01';
    local_598[10] = 0;
    local_598[0xb] = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_598 + 10,0);
    FGenericPlatformString::Memcpy(local_598[10],L"Description",0x18);
    local_4a0 = local_598 + 10;
    local_498 = local_98;
    FUN_1407484b0(&local_288,local_4fc,&local_4a0,0);
    if (local_598[10] != 0) {
      FMemory::Free();
    }
    if (local_70 != '\0') {
      local_70 = '\0';
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_80 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar2 = (int *)((longlong)local_80 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_80 + 8))(local_80,1);
          }
        }
      }
    }
    local_120 = *(undefined4 *)(param_1 + 0x1a0);
    local_128[0] = 2;
    local_100 = '\0';
    local_598[0] = 0;
    local_598[1] = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_598,0);
    FGenericPlatformString::Memcpy(local_598[0],L"AngleValue",0x16);
    local_490 = local_598;
    local_488 = local_128;
    FUN_1407484b0(&local_288,local_4f8,&local_490,0);
    if (local_598[0] != 0) {
      FMemory::Free();
    }
    if (local_100 != '\0') {
      local_100 = '\0';
      if (local_110 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_110 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_110)(local_110);
          LOCK();
          piVar2 = (int *)((longlong)local_110 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_110 + 8))(local_110,1);
          }
        }
      }
    }
    uVar6 = FEnvDirection::ToText(param_1 + 0x158,local_380);
    local_f8[0] = 4;
    FText::FText(local_e8,uVar6);
    local_d0 = '\x01';
    local_598[0xc] = 0;
    local_598[0xd] = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_598 + 0xc,0);
    FGenericPlatformString::Memcpy(local_598[0xc],L"ArcDirection",0x1a);
    local_480 = local_598 + 0xc;
    local_478 = local_f8;
    FUN_1407484b0(&local_288,local_4f4,&local_480,0);
    if (local_598[0xc] != 0) {
      FMemory::Free();
    }
    if (local_d0 != '\0') {
      local_d0 = '\0';
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_e0 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_e0)(local_e0);
          LOCK();
          piVar2 = (int *)((longlong)local_e0 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_e0 + 8))(local_e0,1);
          }
        }
      }
    }
    if (local_378 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_378 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_378)(local_378);
        LOCK();
        piVar2 = (int *)((longlong)local_378 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_378 + 8))(local_378,1);
        }
      }
    }
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_350,
                       L"{Description}\nLimit to {AngleValue} angle both sides on {ArcDirection}",
                       L"EnvQueryGenerator",L"DescriptionWithArc");
    uVar6 = FTextFormat::FTextFormat(local_308,uVar6);
    uVar6 = FText::Format(local_368,uVar6,&local_288);
    FText::operator=(param_2,uVar6);
    if (local_360 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_360 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_360)(local_360);
        LOCK();
        piVar2 = (int *)((longlong)local_360 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_360 + 8))(local_360,1);
        }
      }
    }
    if (local_348 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_348 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_348)(local_348);
        LOCK();
        piVar2 = (int *)((longlong)local_348 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_348 + 8))(local_348,1);
        }
      }
    }
    local_240 = 0;
    if (local_248 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_288);
  }
  FUN_142bf4db0(param_1 + 0x60,local_450,0);
  cVar5 = FText::IsEmpty(local_450);
  if (cVar5 == '\0') {
    local_238 = 0;
    local_230 = 0;
    local_218 = 0;
    local_210 = 0;
    local_208 = 0xffffffff;
    local_204 = 0;
    local_1f8 = 0;
    local_1f0 = 0;
    local_c8[0] = 4;
    FText::FText(local_b8,param_2);
    local_a0 = '\x01';
    local_598[0xe] = 0;
    local_598[0xf] = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_598 + 0xe,0);
    FGenericPlatformString::Memcpy(local_598[0xe],L"Description",0x18);
    local_470 = local_598 + 0xe;
    local_468 = local_c8;
    FUN_1407484b0(&local_238,local_4e8,&local_470,0);
    if (local_598[0xe] != 0) {
      FMemory::Free();
    }
    if (local_a0 != '\0') {
      local_a0 = '\0';
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_b0 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar2 = (int *)((longlong)local_b0 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_b0 + 8))(local_b0,1);
          }
        }
      }
    }
    local_68[0] = 4;
    FText::FText(local_58,local_450);
    local_40 = 1;
    local_598[0x10] = 0;
    local_598[0x11] = 0x16;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_598 + 0x10,0);
    FGenericPlatformString::Memcpy(local_598[0x10],L"ProjectionDescription",0x2c);
    local_460 = local_598 + 0x10;
    local_458 = local_68;
    FUN_1407484b0(&local_238,local_4ec,&local_460,0);
    if (local_598[0x10] != 0) {
      FMemory::Free();
    }
    TOptional<FExpressionError>::Reset(local_58);
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_320,L"{Description}, {ProjectionDescription}",L"EnvQueryGenerator",
                       L"OnCircle_DescriptionWithProjection");
    uVar6 = FTextFormat::FTextFormat(local_2f8,uVar6);
    uVar6 = FText::Format(local_338,uVar6,&local_238);
    FText::operator=(param_2,uVar6);
    if (local_330 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_330 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_330)(local_330);
        LOCK();
        piVar2 = (int *)((longlong)local_330 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_330 + 8))(local_330,1);
        }
      }
    }
    if (local_318 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_318 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_318)(local_318);
        LOCK();
        piVar2 = (int *)((longlong)local_318 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_318 + 8))(local_318,1);
        }
      }
    }
    local_1f0 = 0;
    if (local_1f8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_238);
  }
  if (local_448 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_448 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_448)(local_448);
      LOCK();
      piVar2 = (int *)((longlong)local_448 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_448 + 8))(local_448,1);
      }
    }
  }
  local_290 = 0;
  if (local_298 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_2d8);
  return param_2;
}



// FUNCTION 142c039c0 FUN_142c039c0 body=3662 status=ok
// SIG undefined FUN_142c039c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142c039c0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  wchar_t *pwVar8;
  undefined1 *puVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  undefined1 *puVar12;
  bool bVar13;
  undefined1 auStack_638 [32];
  undefined4 local_618 [2];
  longlong local_610 [18];
  undefined1 local_580 [4];
  undefined1 local_57c [4];
  undefined1 local_578 [4];
  undefined1 local_574 [4];
  undefined1 local_570 [4];
  undefined1 local_56c [4];
  undefined1 local_568 [4];
  undefined1 local_564 [4];
  longlong *local_560;
  undefined4 *local_558;
  longlong *local_550;
  undefined4 *local_548;
  longlong *local_540;
  undefined4 *local_538;
  longlong *local_530;
  undefined4 *local_528;
  longlong *local_520;
  undefined4 *local_518;
  longlong *local_510;
  undefined4 *local_508;
  longlong *local_500;
  undefined4 *local_4f8;
  longlong *local_4f0;
  undefined4 *local_4e8;
  longlong *local_4e0;
  undefined4 *local_4d8;
  undefined1 local_4d0 [8];
  longlong *local_4c8;
  longlong local_4b8 [2];
  longlong local_4a8 [2];
  longlong local_498 [2];
  longlong local_488 [2];
  undefined1 local_478 [8];
  longlong *local_470;
  undefined1 local_460 [8];
  longlong *local_458;
  undefined1 local_448 [8];
  longlong *local_440;
  undefined1 local_430 [8];
  longlong *local_428;
  undefined1 local_418 [8];
  longlong *local_410;
  undefined1 local_400 [8];
  longlong *local_3f8;
  undefined1 local_3e8 [8];
  longlong *local_3e0;
  undefined1 local_3d0 [8];
  longlong *local_3c8;
  undefined1 local_3b8 [8];
  longlong *local_3b0;
  undefined1 local_3a0 [8];
  longlong *local_398;
  undefined1 local_388 [8];
  longlong *local_380;
  undefined1 local_370 [8];
  longlong *local_368;
  undefined1 local_358 [8];
  longlong *local_350;
  undefined1 local_340 [8];
  longlong *local_338;
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined4 local_2b4;
  longlong local_2a8;
  undefined4 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_278;
  undefined8 local_270;
  undefined4 local_268;
  undefined4 local_264;
  longlong local_258;
  undefined4 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined4 local_214;
  longlong local_208;
  undefined4 local_200;
  undefined4 local_1f8 [4];
  undefined1 local_1e8 [8];
  longlong *local_1e0;
  char local_1d0;
  undefined4 local_1c8 [4];
  undefined1 local_1b8 [8];
  longlong *local_1b0;
  char local_1a0;
  undefined4 local_198 [4];
  undefined1 local_188 [8];
  longlong *local_180;
  char local_170;
  undefined4 local_168 [4];
  undefined1 local_158 [8];
  longlong *local_150;
  char local_140;
  undefined4 local_138 [4];
  undefined1 local_128 [8];
  longlong *local_120;
  char local_110;
  undefined4 local_108 [4];
  undefined1 local_f8 [8];
  longlong *local_f0;
  char local_e0;
  undefined4 local_d8 [4];
  undefined1 local_c8 [8];
  longlong *local_c0;
  char local_b0;
  undefined4 local_a8 [4];
  undefined1 local_98 [24];
  undefined1 local_80;
  undefined4 local_78 [4];
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_638;
  local_618[0] = 0;
  local_2e8 = 0;
  local_2e0 = 0;
  local_2c8 = 0;
  local_2c0 = 0;
  local_2b8 = 0xffffffff;
  local_2b4 = 0;
  local_2a8 = 0;
  local_2a0 = 0;
  uVar6 = FAIDataProviderValue::ToString(param_1 + 0x98,local_4b8);
  uVar6 = FText::FromString(local_460,uVar6);
  local_1f8[0] = 4;
  FText::FText(local_1e8,uVar6);
  local_1d0 = '\x01';
  local_610[2] = 0;
  local_610[3] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_610 + 2,0);
  FGenericPlatformString::Memcpy(local_610[2],L"Radius",0xe);
  local_560 = local_610 + 2;
  local_558 = local_1f8;
  FUN_1407484b0(&local_2e8,local_618,&local_560,0);
  if (local_610[2] != 0) {
    FMemory::Free();
  }
  if (local_1d0 != '\0') {
    local_1d0 = '\0';
    if (local_1e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1e0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_1e0)(local_1e0);
        LOCK();
        piVar2 = (int *)((longlong)local_1e0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1e0 + 8))(local_1e0,1);
        }
      }
    }
  }
  if (local_458 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_458 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_458)(local_458);
      LOCK();
      piVar2 = (int *)((longlong)local_458 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_458 + 8))(local_458,1);
      }
    }
  }
  if (local_4b8[0] != 0) {
    FMemory::Free();
  }
  uVar6 = FAIDataProviderValue::ToString(param_1 + 200,local_4a8);
  uVar6 = FText::FromString(local_448,uVar6);
  local_1c8[0] = 4;
  FText::FText(local_1b8,uVar6);
  local_1a0 = '\x01';
  local_610[4] = 0;
  local_610[5] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_610 + 4,0);
  FGenericPlatformString::Memcpy(local_610[4],L"ItemSpacing",0x18);
  local_550 = local_610 + 4;
  local_548 = local_1c8;
  FUN_1407484b0(&local_2e8,local_580,&local_550,0);
  if (local_610[4] != 0) {
    FMemory::Free();
  }
  if (local_1a0 != '\0') {
    local_1a0 = '\0';
    if (local_1b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1b0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_1b0)(local_1b0);
        LOCK();
        piVar2 = (int *)((longlong)local_1b0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1b0 + 8))(local_1b0,1);
        }
      }
    }
  }
  if (local_440 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_440 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_440)(local_440);
      LOCK();
      piVar2 = (int *)((longlong)local_440 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_440 + 8))(local_440,1);
      }
    }
  }
  if (local_4a8[0] != 0) {
    FMemory::Free();
  }
  uVar6 = FAIDataProviderValue::ToString(param_1 + 0xf8,local_498);
  uVar6 = FText::FromString(local_478,uVar6);
  local_198[0] = 4;
  FText::FText(local_188,uVar6);
  local_170 = '\x01';
  local_610[6] = 0;
  local_610[7] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_610 + 6,0);
  FGenericPlatformString::Memcpy(local_610[6],L"NumberOfPoints",0x1e);
  local_540 = local_610 + 6;
  local_538 = local_198;
  FUN_1407484b0(&local_2e8,local_57c,&local_540,0);
  if (local_610[6] != 0) {
    FMemory::Free();
  }
  if (local_170 != '\0') {
    local_170 = '\0';
    if (local_180 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_180 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_180)(local_180);
        LOCK();
        piVar2 = (int *)((longlong)local_180 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_180 + 8))(local_180,1);
        }
      }
    }
  }
  if (local_470 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_470 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_470)(local_470);
      LOCK();
      piVar2 = (int *)((longlong)local_470 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_470 + 8))(local_470,1);
      }
    }
  }
  if (local_498[0] != 0) {
    FMemory::Free();
  }
  uVar6 = FUN_142bf4db0(param_1 + 0x1c8,local_430,1);
  local_168[0] = 4;
  FText::FText(local_158,uVar6);
  local_140 = '\x01';
  local_610[8] = 0;
  local_610[9] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_610 + 8,0);
  FGenericPlatformString::Memcpy(local_610[8],L"TraceData",0x14);
  local_530 = local_610 + 8;
  local_528 = local_168;
  FUN_1407484b0(&local_2e8,local_578,&local_530,0);
  if (local_610[8] != 0) {
    FMemory::Free();
  }
  if (local_140 != '\0') {
    local_140 = '\0';
    if (local_150 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_150 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_150)(local_150);
        LOCK();
        piVar2 = (int *)((longlong)local_150 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_150 + 8))(local_150,1);
        }
      }
    }
  }
  if (local_428 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_428 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_428)(local_428);
      LOCK();
      piVar2 = (int *)((longlong)local_428 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_428 + 8))(local_428,1);
      }
    }
  }
  bVar13 = *(char *)(param_1 + 0x128) != '\0';
  if (bVar13) {
    puVar9 = local_418;
    puVar12 = local_318;
    puVar7 = local_400;
    pwVar8 = L"radius: {Radius}, number of items to generate: {NumberOfPoints}\n{TraceData}";
    pwVar10 = L"EnvQueryGenerator";
    pwVar11 = L"OnCircleDescriptionNumItems";
  }
  else {
    puVar9 = local_3e8;
    puVar12 = local_328;
    puVar7 = local_3d0;
    pwVar8 = L"radius: {Radius}, item span: {ItemSpacing}\n{TraceData}";
    pwVar10 = L"EnvQueryGenerator";
    pwVar11 = L"OnCircleDescriptionSpan";
  }
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (puVar7,pwVar8,pwVar10,pwVar11);
  uVar6 = FTextFormat::FTextFormat(puVar12,uVar6);
  uVar6 = FText::Format(puVar9,uVar6,&local_2e8);
  FText::FText(param_2,uVar6);
  if (bVar13) {
    if (local_410 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_410 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_410)(local_410);
        LOCK();
        piVar2 = (int *)((longlong)local_410 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_410 + 8))(local_410,1);
        }
      }
    }
  }
  if (bVar13) {
    if (local_3f8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_3f8 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_3f8)(local_3f8);
        LOCK();
        piVar2 = (int *)((longlong)local_3f8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_3f8 + 8))(local_3f8,1);
        }
      }
    }
  }
  if (!bVar13) {
    if (local_3e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_3e0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_3e0)(local_3e0);
        LOCK();
        piVar2 = (int *)((longlong)local_3e0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_3e0 + 8))(local_3e0,1);
        }
      }
    }
  }
  if ((!bVar13) && (local_3c8 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_3c8 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_3c8)(local_3c8);
      LOCK();
      piVar2 = (int *)((longlong)local_3c8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_3c8 + 8))(local_3c8,1);
      }
    }
  }
  if ((*(byte *)(param_1 + 0x1f8) & 1) != 0) {
    local_298 = 0;
    local_290 = 0;
    local_278 = 0;
    local_270 = 0;
    local_268 = 0xffffffff;
    local_264 = 0;
    local_258 = 0;
    local_250 = 0;
    local_d8[0] = 4;
    FText::FText(local_c8,param_2);
    local_b0 = '\x01';
    local_610[10] = 0;
    local_610[0xb] = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_610 + 10,0);
    FGenericPlatformString::Memcpy(local_610[10],L"Description",0x18);
    local_520 = local_610 + 10;
    local_518 = local_d8;
    FUN_1407484b0(&local_298,local_574,&local_520,0);
    if (local_610[10] != 0) {
      FMemory::Free();
    }
    if (local_b0 != '\0') {
      local_b0 = '\0';
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_c0 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_c0)(local_c0);
          LOCK();
          piVar2 = (int *)((longlong)local_c0 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_c0 + 8))(local_c0,1);
          }
        }
      }
    }
    uVar6 = FAIDataProviderValue::ToString(param_1 + 0x150,local_488);
    uVar6 = FText::FromString(local_3b8,uVar6);
    local_138[0] = 4;
    FText::FText(local_128,uVar6);
    local_110 = '\x01';
    local_610[0] = 0;
    local_610[1] = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_610,0);
    FGenericPlatformString::Memcpy(local_610[0],L"AngleValue",0x16);
    local_510 = local_610;
    local_508 = local_138;
    FUN_1407484b0(&local_298,local_570,&local_510,0);
    if (local_610[0] != 0) {
      FMemory::Free();
    }
    if (local_110 != '\0') {
      local_110 = '\0';
      if (local_120 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_120 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_120)(local_120);
          LOCK();
          piVar2 = (int *)((longlong)local_120 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_120 + 8))(local_120,1);
          }
        }
      }
    }
    if (local_3b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_3b0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_3b0)(local_3b0);
        LOCK();
        piVar2 = (int *)((longlong)local_3b0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_3b0 + 8))(local_3b0,1);
        }
      }
    }
    if (local_488[0] != 0) {
      FMemory::Free();
    }
    uVar6 = FEnvDirection::ToText(param_1 + 0x130,local_3a0);
    local_108[0] = 4;
    FText::FText(local_f8,uVar6);
    local_e0 = '\x01';
    local_610[0xc] = 0;
    local_610[0xd] = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_610 + 0xc,0);
    FGenericPlatformString::Memcpy(local_610[0xc],L"ArcDirection",0x1a);
    local_500 = local_610 + 0xc;
    local_4f8 = local_108;
    FUN_1407484b0(&local_298,local_56c,&local_500,0);
    if (local_610[0xc] != 0) {
      FMemory::Free();
    }
    if (local_e0 != '\0') {
      local_e0 = '\0';
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_f0 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar2 = (int *)((longlong)local_f0 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_f0 + 8))(local_f0,1);
          }
        }
      }
    }
    if (local_398 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_398 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_398)(local_398);
        LOCK();
        piVar2 = (int *)((longlong)local_398 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_398 + 8))(local_398,1);
        }
      }
    }
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_370,
                       L"{Description}\nLimit to {AngleValue} angle both sides on {ArcDirection}",
                       L"EnvQueryGenerator",L"DescriptionWithArc");
    uVar6 = FTextFormat::FTextFormat(local_308,uVar6);
    uVar6 = FText::Format(local_388,uVar6,&local_298);
    FText::operator=(param_2,uVar6);
    if (local_380 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_380 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_380)(local_380);
        LOCK();
        piVar2 = (int *)((longlong)local_380 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_380 + 8))(local_380,1);
        }
      }
    }
    if (local_368 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_368 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_368)(local_368);
        LOCK();
        piVar2 = (int *)((longlong)local_368 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_368 + 8))(local_368,1);
        }
      }
    }
    local_250 = 0;
    if (local_258 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_298);
  }
  FUN_142bf4db0(param_1 + 0x60,local_4d0,0);
  cVar5 = FText::IsEmpty(local_4d0);
  if (cVar5 == '\0') {
    local_248 = 0;
    local_240 = 0;
    local_228 = 0;
    local_220 = 0;
    local_218 = 0xffffffff;
    local_214 = 0;
    local_208 = 0;
    local_200 = 0;
    local_a8[0] = 4;
    FText::FText(local_98,param_2);
    local_80 = 1;
    local_610[0xe] = 0;
    local_610[0xf] = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_610 + 0xe,0);
    FGenericPlatformString::Memcpy(local_610[0xe],L"Description",0x18);
    local_4f0 = local_610 + 0xe;
    local_4e8 = local_a8;
    FUN_1407484b0(&local_248,local_564,&local_4f0,0);
    if (local_610[0xe] != 0) {
      FMemory::Free();
    }
    TOptional<FExpressionError>::Reset(local_98);
    local_78[0] = 4;
    FText::FText(local_68,local_4d0);
    local_50 = 1;
    local_610[0x10] = 0;
    local_610[0x11] = 0x16;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_610 + 0x10,0);
    FGenericPlatformString::Memcpy(local_610[0x10],L"ProjectionDescription",0x2c);
    local_4e0 = local_610 + 0x10;
    local_4d8 = local_78;
    FUN_1407484b0(&local_248,local_568,&local_4e0,0);
    if (local_610[0x10] != 0) {
      FMemory::Free();
    }
    TOptional<FExpressionError>::Reset(local_68);
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_340,L"{Description}, {ProjectionDescription}",L"EnvQueryGenerator",
                       L"OnCircle_DescriptionWithProjection");
    uVar6 = FTextFormat::FTextFormat(local_2f8,uVar6);
    uVar6 = FText::Format(local_358,uVar6,&local_248);
    FText::operator=(param_2,uVar6);
    if (local_350 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_350 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_350)(local_350);
        LOCK();
        piVar2 = (int *)((longlong)local_350 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_350 + 8))(local_350,1);
        }
      }
    }
    if (local_338 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_338 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_338)(local_338);
        LOCK();
        piVar2 = (int *)((longlong)local_338 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_338 + 8))(local_338,1);
        }
      }
    }
    local_200 = 0;
    if (local_208 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_248);
  }
  if (local_4c8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_4c8 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_4c8)(local_4c8);
      LOCK();
      piVar2 = (int *)((longlong)local_4c8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_4c8 + 8))(local_4c8,1);
      }
    }
  }
  local_2a0 = 0;
  if (local_2a8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_2e8);
  return param_2;
}



// FUNCTION 142c04810 FUN_142c04810 body=1585 status=ok
// SIG undefined FUN_142c04810(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142c04810(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  char *pcVar12;
  undefined1 auStack_2e8 [32];
  undefined4 *local_2c8;
  ulonglong *puStack_2c0;
  longlong local_2b8 [2];
  undefined1 local_2a8 [4];
  undefined1 local_2a4 [4];
  longlong local_2a0;
  longlong local_298;
  undefined8 local_290;
  longlong local_288;
  longlong *local_280;
  undefined4 *local_278;
  undefined4 **local_270;
  undefined4 *local_268;
  undefined1 local_260 [8];
  longlong *local_258;
  undefined4 *local_248;
  ulonglong *puStack_240;
  undefined1 local_238 [16];
  longlong local_228 [2];
  longlong local_218 [2];
  undefined1 local_208 [8];
  longlong *local_200;
  undefined1 local_1f0 [8];
  longlong *local_1e8;
  undefined1 local_1d8 [8];
  longlong *local_1d0;
  undefined1 local_1c0 [8];
  longlong *local_1b8;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [24];
  undefined1 local_170 [24];
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  longlong local_118;
  undefined4 local_110;
  undefined4 local_108 [4];
  undefined1 local_f8 [8];
  longlong *local_f0;
  char local_e0;
  undefined4 local_d8 [4];
  undefined1 local_c8 [8];
  longlong *local_c0;
  char local_b0;
  undefined4 local_a8 [4];
  undefined1 local_98 [24];
  undefined1 local_80;
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  local_298 = param_1;
  uVar8 = FAIDataProviderValue::ToString(param_1 + 200,local_218);
  lVar9 = FText::FromString(local_188,uVar8);
  local_2a0 = lVar9;
  uVar8 = FAIDataProviderValue::ToString(param_1 + 0x98,local_228);
  lVar10 = FText::FromString(local_170,uVar8);
  uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_1f0,L"radius: {0}, space between: {1}",L"EnvQueryGenerator",
                     L"SimpleGridDescription");
  puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_1a8,uVar8);
  local_a8[0] = 4;
  FText::FText(local_98,lVar10);
  local_80 = 1;
  local_78 = 4;
  FText::FText(local_68,lVar9);
  local_2c8 = local_a8;
  local_50 = 1;
  puStack_2c0 = local_48;
  local_290 = *puVar11;
  local_288 = puVar11[1];
  if (local_288 != 0) {
    LOCK();
    *(int *)(local_288 + 8) = *(int *)(local_288 + 8) + 1;
    UNLOCK();
  }
  local_248 = local_2c8;
  puStack_240 = puStack_2c0;
  uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_238,&local_248);
  uVar8 = FText::Format(local_208,&local_290,uVar8);
  FText::FText(param_2,uVar8);
  if (local_200 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_200 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_200)(local_200);
      LOCK();
      piVar1 = (int *)((longlong)local_200 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_200 + 8))(local_200,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_238);
  lVar9 = 2;
  pcVar12 = &stack0xffffffffffffffe0;
  do {
    lVar9 = lVar9 + -1;
    pcVar2 = pcVar12 + -0x30;
    if (*pcVar2 != '\0') {
      *pcVar2 = '\0';
      plVar5 = *(longlong **)(pcVar12 + -0x40);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar5 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
    }
    pcVar12 = pcVar2;
  } while (lVar9 != 0);
  plVar5 = (longlong *)puVar11[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar9 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = *(longlong **)(lVar10 + 8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar9 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = *(longlong **)(local_2a0 + 8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar9 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (local_1e8 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1e8 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_1e8)(local_1e8);
      LOCK();
      piVar1 = (int *)((longlong)local_1e8 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_1e8 + 8))(local_1e8,1);
      }
    }
  }
  if (local_228[0] != 0) {
    FMemory::Free();
  }
  if (local_218[0] != 0) {
    FMemory::Free();
  }
  FUN_142bf4db0(local_298 + 0x60,local_260,0);
  cVar7 = FText::IsEmpty(local_260);
  if (cVar7 == '\0') {
    local_128 = 0xffffffff;
    local_158 = 0;
    local_150 = 0;
    local_138 = 0;
    local_130 = 0;
    local_124 = 0;
    local_118 = 0;
    local_110 = 0;
    local_108[0] = 4;
    FText::FText(local_f8,param_2);
    local_e0 = '\x01';
    local_2b8[0] = 0;
    local_2b8[1] = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_2b8,0);
    FGenericPlatformString::Memcpy(local_2b8[0],L"Description",0x18);
    local_280 = local_2b8;
    local_278 = local_108;
    FUN_1407484b0(&local_158,local_2a8,&local_280,0);
    if (local_2b8[0] != 0) {
      FMemory::Free();
    }
    if (local_e0 != '\0') {
      local_e0 = '\0';
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_f0 + 1;
        lVar9 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar1 = (int *)((longlong)local_f0 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_f0 + 8))(local_f0,1);
          }
        }
      }
    }
    local_d8[0] = 4;
    FText::FText(local_c8,local_260);
    local_b0 = '\x01';
    local_2c8 = (undefined4 *)0x0;
    puStack_2c0 = (ulonglong *)&DAT_00000016;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2c8,0);
    FGenericPlatformString::Memcpy(local_2c8,L"ProjectionDescription",0x2c);
    local_270 = &local_2c8;
    local_268 = local_d8;
    FUN_1407484b0(&local_158,local_2a4,&local_270,0);
    if (local_2c8 != (undefined4 *)0x0) {
      FMemory::Free();
    }
    if (local_b0 != '\0') {
      local_b0 = '\0';
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_c0 + 1;
        lVar9 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_c0)(local_c0);
          LOCK();
          piVar1 = (int *)((longlong)local_c0 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_c0 + 8))(local_c0,1);
          }
        }
      }
    }
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_1c0,L"{Description}, {ProjectionDescription}",L"EnvQueryGenerator",
                       L"SimpleGridDescriptionWithProjection");
    uVar8 = FTextFormat::FTextFormat(local_198,uVar8);
    uVar8 = FText::Format(local_1d8,uVar8,&local_158);
    FText::operator=(param_2,uVar8);
    if (local_1d0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_1d0 + 1;
      lVar9 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_1d0)(local_1d0);
        LOCK();
        piVar1 = (int *)((longlong)local_1d0 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1d0 + 8))(local_1d0,1);
        }
      }
    }
    if (local_1b8 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_1b8 + 1;
      lVar9 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_1b8)(local_1b8);
        LOCK();
        piVar1 = (int *)((longlong)local_1b8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1b8 + 8))(local_1b8,1);
        }
      }
    }
    local_110 = 0;
    if (local_118 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_158);
  }
  if (local_258 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_258 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_258)(local_258);
      LOCK();
      piVar1 = (int *)((longlong)local_258 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_258 + 8))(local_258,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142c04e50 FUN_142c04e50 body=23 status=ok
// SIG undefined FUN_142c04e50(void)

undefined8 FUN_142c04e50(undefined8 param_1,undefined8 param_2)

{
  FUN_142bdcff0();
  return param_2;
}



// FUNCTION 142c04e70 FUN_142c04e70 body=152 status=ok
// SIG undefined FUN_142c04e70(void)

undefined8 FUN_142c04e70(longlong param_1,undefined8 param_2)

{
  void *_Src;
  longlong lVar1;
  undefined8 *puVar2;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  puVar2 = (undefined8 *)(param_1 + 0x210);
  if (1 < *(int *)(param_1 + 0x208)) {
    puVar2 = (undefined8 *)(param_1 + 0x200);
  }
  local_18 = (void *)0x0;
  local_10 = *(int *)(puVar2 + 1);
  lVar1 = (longlong)local_10;
  _Src = (void *)*puVar2;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
    _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar1 * 2);
  }
  FText::FromString(param_2,&local_18);
  if (local_18 != (void *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142c04f10 FUN_142c04f10 body=814 status=ok
// SIG undefined FUN_142c04f10(void)

undefined8 FUN_142c04f10(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined2 *local_b8;
  int local_b0;
  undefined2 *local_a8;
  int local_a0;
  undefined2 *local_98;
  undefined8 local_90;
  undefined2 *local_88;
  int local_80;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  longlong local_58 [2];
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  uVar6 = UEnum::GetPrivateStaticClass();
  uVar6 = FUN_141799410(uVar6,0xffffffffffffffff,L"EEnvOverlapShape",1);
  uVar6 = FUN_1417373a0(uVar6,local_48,*(undefined1 *)(param_1 + 0x1f1));
  puVar7 = (undefined8 *)FText::ToString(uVar6);
  local_a8 = (undefined2 *)0x0;
  local_a0 = *(int *)(puVar7 + 1);
  lVar9 = (longlong)local_a0;
  pvVar5 = (void *)*puVar7;
  if (local_a0 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,local_a0,0);
    _guard_xfg_dispatch_icall_nop(local_a8,pvVar5,lVar9 * 2);
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  uVar6 = UEnum::GetPrivateStaticClass();
  uVar6 = FUN_141799410(uVar6,0xffffffffffffffff,L"ECollisionChannel",1);
  uVar6 = FUN_1417373a0(uVar6,local_30,*(undefined1 *)(param_1 + 0x1f0));
  puVar7 = (undefined8 *)FText::ToString(uVar6);
  puVar11 = (undefined2 *)0x0;
  local_b8 = (undefined2 *)0x0;
  local_b0 = *(int *)(puVar7 + 1);
  lVar9 = (longlong)local_b0;
  pvVar5 = (void *)*puVar7;
  if (local_b0 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b8,local_b0,0);
    puVar11 = local_b8;
    _guard_xfg_dispatch_icall_nop(local_b8,pvVar5,lVar9 * 2);
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    puVar11 = local_b8;
    if ((int)lVar9 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      puVar11 = local_b8;
      if (iVar3 == 1) {
        (**(code **)(*local_28 + 8))(local_28,1);
        puVar11 = local_b8;
      }
    }
  }
  cVar4 = *(char *)(param_1 + 0x1f1);
  if (cVar4 == '\0') {
    FString::PrintfImpl(&local_68,L"X = %f, Y = %f, Z = %f",(double)*(float *)(param_1 + 0x1d8),
                        (double)*(float *)(param_1 + 0x1dc),(double)*(float *)(param_1 + 0x1e0));
    puVar10 = local_68;
  }
  else if (cVar4 == '\x01') {
    FString::PrintfImpl(&local_78,L"Radius = %f",(double)*(float *)(param_1 + 0x1d8));
    puVar10 = local_78;
    local_60 = local_70;
  }
  else if (cVar4 == '\x02') {
    FString::PrintfImpl(&local_88,L"Width = %f, Height = %f",(double)*(float *)(param_1 + 0x1d8),
                        (double)*(float *)(param_1 + 0x1e0));
    puVar10 = local_88;
    local_60 = local_80;
  }
  else {
    local_98 = (undefined2 *)0x0;
    local_90 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
    puVar10 = local_98;
    FGenericPlatformString::Convert<char,wchar_t>(local_98,9,"Invalid.",9,0x3f);
    local_60 = (int)local_90;
  }
  puVar8 = &DAT_143f3eda8;
  if (local_b0 != 0) {
    puVar8 = puVar11;
  }
  puVar13 = &DAT_143f3eda8;
  if (local_60 != 0) {
    puVar13 = puVar10;
  }
  puVar12 = &DAT_143f3eda8;
  if (local_a0 != 0) {
    puVar12 = local_a8;
  }
  FString::PrintfImpl(local_58,L"Using a %s where %s in channel: %s",puVar12,puVar13,puVar8);
  FText::FromString(param_2,local_58);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if (puVar10 != (undefined2 *)0x0) {
    FMemory::Free(puVar10);
  }
  if (puVar11 != (undefined2 *)0x0) {
    FMemory::Free(puVar11);
  }
  if (local_a8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142c05240 FUN_142c05240 body=2361 status=ok
// SIG undefined FUN_142c05240(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142c05240(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  char *pcVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_378 [32];
  undefined2 local_358;
  undefined4 *local_348;
  undefined4 *puStack_340;
  longlong local_338;
  longlong local_330 [4];
  undefined8 *local_310;
  undefined4 *local_308;
  ulonglong *puStack_300;
  undefined1 local_2f8 [8];
  longlong *local_2f0;
  undefined1 local_2e0 [8];
  longlong *local_2d8;
  undefined1 local_2c8 [8];
  longlong *local_2c0;
  undefined8 local_2b0;
  longlong local_2a8;
  undefined8 local_2a0;
  longlong local_298;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined1 local_278 [16];
  longlong local_268 [2];
  undefined4 *local_258;
  ulonglong *puStack_250;
  undefined1 local_248 [16];
  undefined1 local_238 [8];
  longlong *local_230;
  undefined1 local_220 [8];
  longlong *local_218;
  undefined1 local_208 [8];
  longlong *local_200;
  undefined1 local_1f0 [8];
  longlong *local_1e8;
  undefined1 local_1d8 [8];
  longlong *local_1d0;
  undefined1 local_1c0 [8];
  longlong *local_1b8;
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  undefined1 local_170 [24];
  undefined1 local_158 [24];
  undefined1 local_140 [24];
  undefined1 local_128 [32];
  undefined4 local_108 [4];
  undefined1 local_f8 [24];
  undefined1 local_e0;
  undefined4 local_d8;
  undefined1 local_c8 [24];
  undefined1 local_b0;
  undefined4 local_a8 [4];
  undefined1 local_98 [24];
  char local_80 [8];
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_378;
  local_310 = (undefined8 *)((ulonglong)local_310 & 0xffffffff00000000);
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_2c8,L"discard unreachable",L"EnvQueryGenerator",L"DiscardUnreachable");
  FText::FText(local_2f8);
  lVar12 = 2;
  if (*(longlong *)(param_1 + 0x228) == 0) {
    if (*(char *)(param_1 + 0x240) != '\0') {
      FText::operator=(local_2f8,local_2c8);
    }
  }
  else {
    local_330[0] = 0;
    local_330[1] = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_330,0);
    local_358 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_330[0],9,"{0}: {1}");
    uVar7 = FAIDataProviderValue::ToString(param_1 + 0x218,local_268);
    lVar8 = FText::FromString(local_170,uVar7);
    local_338 = lVar8;
    lVar9 = FText::FText(local_158,local_2c8);
    local_308 = (undefined4 *)lVar9;
    uVar7 = FText::FromString(local_208,local_330);
    puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_190,uVar7);
    local_108[0] = 4;
    local_310 = puVar10;
    FText::FText(local_f8,lVar9);
    local_e0 = 1;
    local_d8 = 4;
    FText::FText(local_c8,lVar8);
    local_348 = local_108;
    local_b0 = 1;
    puStack_340 = local_a8;
    local_2b0 = *puVar10;
    local_2a8 = puVar10[1];
    if (local_2a8 != 0) {
      LOCK();
      *(int *)(local_2a8 + 8) = *(int *)(local_2a8 + 8) + 1;
      UNLOCK();
    }
    local_288 = local_348;
    uStack_280 = puStack_340;
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_278,&local_288);
    uVar7 = FText::Format(local_220,&local_2b0,uVar7);
    FText::FText(local_238,uVar7);
    if (local_218 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_218 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_218)(local_218);
        LOCK();
        piVar1 = (int *)((longlong)local_218 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_218 + 8))(local_218,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_278);
    pcVar11 = local_80;
    lVar8 = lVar12;
    do {
      lVar8 = lVar8 + -1;
      pcVar2 = pcVar11 + -0x30;
      if (*pcVar2 != '\0') {
        *pcVar2 = '\0';
        plVar5 = *(longlong **)(pcVar11 + -0x40);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar5 + 1;
          lVar9 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
      }
      pcVar11 = pcVar2;
    } while (lVar8 != 0);
    plVar5 = (longlong *)local_310[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar5 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    plVar5 = *(longlong **)((longlong)local_308 + 8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar5 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    plVar5 = *(longlong **)(local_338 + 8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar5 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    FText::operator=(local_2f8,local_238);
    if (local_230 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_230 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_230)(local_230);
        LOCK();
        piVar1 = (int *)((longlong)local_230 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_230 + 8))(local_230,1);
        }
      }
    }
    if (local_200 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_200 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_200)(local_200);
        LOCK();
        piVar1 = (int *)((longlong)local_200 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_200 + 8))(local_200,1);
        }
      }
    }
    if (local_268[0] != 0) {
      FMemory::Free();
    }
    if (local_330[0] != 0) {
      FMemory::Free();
    }
  }
  bVar13 = (*(byte *)(param_1 + 0x1c8) & 1) == 0;
  if (bVar13) {
    local_330[2] = 0;
    local_330[3] = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_330 + 2,0);
    local_358 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_330[2],0xe,"existing path");
    uVar7 = FUN_142bdb4f0(param_1,local_1f0,local_330 + 2);
  }
  else {
    uVar7 = FUN_142bdcff0(param_1,local_1d8);
  }
  FText::FText(local_2e0,uVar7);
  if ((bVar13) && (local_1e8 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_1e8 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_1e8)(local_1e8);
      LOCK();
      piVar1 = (int *)((longlong)local_1e8 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_1e8 + 8))(local_1e8,1);
      }
    }
  }
  if ((bVar13) && (local_330[2] != 0)) {
    FMemory::Free();
  }
  if ((!bVar13) && (local_1d0 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_1d0 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_1d0)(local_1d0);
      LOCK();
      piVar1 = (int *)((longlong)local_1d0 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_1d0 + 8))(local_1d0,1);
      }
    }
  }
  cVar6 = FText::IsEmpty(local_2f8);
  if (cVar6 == '\0') {
    local_348 = (undefined4 *)0x0;
    puStack_340 = (undefined4 *)0x8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_348,0);
    local_358 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_348,8,"{0}\n{1}");
    lVar8 = FText::FText(local_140,local_2e0);
    local_338 = lVar8;
    lVar9 = FText::FText(local_128,local_2f8);
    uVar7 = FText::FromString(local_1a8,&local_348);
    puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_180,uVar7);
    local_a8[0] = 4;
    FText::FText(local_98,lVar9);
    local_80[0] = '\x01';
    local_78 = 4;
    FText::FText(local_68,lVar8);
    local_308 = local_a8;
    local_50 = 1;
    puStack_300 = local_48;
    local_2a0 = *puVar10;
    local_298 = puVar10[1];
    if (local_298 != 0) {
      LOCK();
      *(int *)(local_298 + 8) = *(int *)(local_298 + 8) + 1;
      UNLOCK();
    }
    local_258 = local_308;
    puStack_250 = puStack_300;
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_248,&local_258);
    uVar7 = FText::Format(local_1c0,&local_2a0,uVar7);
    FText::FText(param_2,uVar7);
    if (local_1b8 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_1b8 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_1b8)(local_1b8);
        LOCK();
        piVar1 = (int *)((longlong)local_1b8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1b8 + 8))(local_1b8,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_248);
    pcVar11 = &stack0xffffffffffffffe0;
    do {
      lVar12 = lVar12 + -1;
      pcVar2 = pcVar11 + -0x30;
      if (*pcVar2 != '\0') {
        *pcVar2 = '\0';
        plVar5 = *(longlong **)(pcVar11 + -0x40);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar5 + 1;
          lVar8 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
      }
      pcVar11 = pcVar2;
    } while (lVar12 != 0);
    plVar5 = (longlong *)puVar10[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar5 + 1;
      lVar12 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    plVar5 = *(longlong **)(lVar9 + 8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar5 + 1;
      lVar12 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    plVar5 = *(longlong **)(local_338 + 8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar5 + 1;
      lVar12 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    if (local_1a0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_1a0 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_1a0)(local_1a0);
        LOCK();
        piVar1 = (int *)((longlong)local_1a0 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1a0 + 8))(local_1a0,1);
        }
      }
    }
    if (local_348 != (undefined4 *)0x0) {
      FMemory::Free();
    }
    if (local_2d8 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_2d8 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_2d8)(local_2d8);
        LOCK();
        piVar1 = (int *)((longlong)local_2d8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_2d8 + 8))(local_2d8,1);
        }
      }
    }
    if (local_2f0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_2f0 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_2f0)(local_2f0);
        LOCK();
        piVar1 = (int *)((longlong)local_2f0 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_2f0 + 8))(local_2f0,1);
        }
      }
    }
    if (local_2c0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_2c0 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_2c0)(local_2c0);
        LOCK();
        piVar1 = (int *)((longlong)local_2c0 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_2c0 + 8))(local_2c0,1);
        }
      }
    }
  }
  else {
    FText::FText(param_2,local_2e0);
    if (local_2d8 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_2d8 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_2d8)(local_2d8);
        LOCK();
        piVar1 = (int *)((longlong)local_2d8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_2d8 + 8))(local_2d8,1);
        }
      }
    }
    if (local_2f0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_2f0 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_2f0)(local_2f0);
        LOCK();
        piVar1 = (int *)((longlong)local_2f0 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_2f0 + 8))(local_2f0,1);
        }
      }
    }
    if (local_2c0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_2c0 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_2c0)(local_2c0);
        LOCK();
        piVar1 = (int *)((longlong)local_2c0 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_2c0 + 8))(local_2c0,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 142c05b80 GetDescriptionDetails body=112 status=ok
// SIG undefined GetDescriptionDetails(void)

undefined8 UEnvQueryTest_Project::GetDescriptionDetails(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 10;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"projected",0x14);
  FUN_142bdb4f0(param_1,param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142c05bf0 FUN_142c05bf0 body=847 status=ok
// SIG undefined FUN_142c05bf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142c05bf0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  char *pcVar11;
  undefined1 auStack_1a8 [32];
  undefined2 local_188;
  longlong local_178 [4];
  undefined4 *local_158;
  ulonglong *puStack_150;
  longlong local_148;
  undefined8 local_140;
  longlong local_138;
  undefined1 local_130 [16];
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [16];
  undefined1 local_e0 [24];
  undefined1 local_c8 [32];
  undefined4 local_a8 [4];
  undefined1 local_98 [24];
  undefined1 local_80;
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  local_178[3] = 4;
  local_178[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_178 + 2,0);
  local_188 = 0x3f;
  FGenericPlatformString::Convert<char,wchar_t>(local_178[2],4,&DAT_1458023c4);
  local_178[0] = 0;
  local_178[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_178,0);
  local_188 = 0x3f;
  FGenericPlatformString::Convert<char,wchar_t>(local_178[0],8,"{0}\n{1}");
  lVar7 = FUN_142bdb4f0(param_1,local_e0,local_178 + 2);
  local_148 = lVar7;
  lVar8 = FUN_142bf4db0(param_1 + 0x1d8,local_c8,1);
  uVar9 = FText::FromString(local_108,local_178);
  puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_f0,uVar9);
  local_a8[0] = 4;
  FText::FText(local_98,lVar8);
  local_80 = 1;
  local_78 = 4;
  FText::FText(local_68,lVar7);
  local_50 = 1;
  puStack_150 = local_48;
  local_140 = *puVar10;
  local_138 = puVar10[1];
  if (local_138 != 0) {
    LOCK();
    *(int *)(local_138 + 8) = *(int *)(local_138 + 8) + 1;
    UNLOCK();
  }
  local_158 = local_a8;
  uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_130,&local_158);
  uVar9 = FText::Format(local_120,&local_140,uVar9);
  FText::FText(param_2,uVar9);
  if (local_118 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_118 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_118)(local_118);
      LOCK();
      piVar1 = (int *)((longlong)local_118 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_118 + 8))(local_118,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_130);
  lVar7 = 2;
  pcVar11 = &stack0xffffffffffffffe0;
  do {
    lVar7 = lVar7 + -1;
    pcVar2 = pcVar11 + -0x30;
    if (*pcVar2 != '\0') {
      *pcVar2 = '\0';
      plVar5 = *(longlong **)(pcVar11 + -0x40);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar5 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
    }
    pcVar11 = pcVar2;
  } while (lVar7 != 0);
  plVar5 = (longlong *)puVar10[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = *(longlong **)(lVar8 + 8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = *(longlong **)(local_148 + 8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_100 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar1 = (int *)((longlong)local_100 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_100 + 8))(local_100,1);
      }
    }
  }
  if (local_178[0] != 0) {
    FMemory::Free();
  }
  if (local_178[2] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142c05f40 FUN_142c05f40 body=923 status=ok
// SIG undefined FUN_142c05f40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142c05f40(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  char *pcVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  longlong local_190;
  longlong local_188;
  undefined4 *local_178;
  ulonglong *puStack_170;
  undefined8 local_168;
  longlong local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148 [16];
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [16];
  undefined1 local_e0 [24];
  undefined1 local_c8 [32];
  undefined4 local_a8 [4];
  undefined1 local_98 [24];
  undefined1 local_80;
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  local_198 = param_2;
  FUN_142be4f60();
  iVar11 = 0;
  if (0 < *(int *)(param_1 + 0x68)) {
    lVar12 = 0;
    do {
      plVar5 = *(longlong **)(lVar12 + *(longlong *)(param_1 + 0x60));
      if (plVar5 != (longlong *)0x0) {
        lVar6 = (**(code **)(*plVar5 + 0x280))(plVar5,local_e0);
        local_188 = lVar6;
        lVar7 = FText::FText(local_c8,param_2);
        local_190 = lVar7;
        uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_108,L"{0}\n  {1}",L"EnvQueryGenerator",L"DescTitleExtention");
        puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_f0,uVar8);
        local_a8[0] = 4;
        FText::FText(local_98,lVar7);
        local_80 = 1;
        local_78 = 4;
        FText::FText(local_68,lVar6);
        local_178 = local_a8;
        local_50 = 1;
        puStack_170 = local_48;
        local_168 = *puVar9;
        local_160 = puVar9[1];
        if (local_160 != 0) {
          LOCK();
          *(int *)(local_160 + 8) = *(int *)(local_160 + 8) + 1;
          UNLOCK();
        }
        local_158 = local_178;
        uStack_150 = puStack_170;
        uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                TArray<FFormatArgumentValue,FDefaultAllocator>(local_148,&local_158);
        uVar8 = FText::Format(local_120,&local_168,uVar8);
        FText::FText(local_138,uVar8);
        plVar5 = local_118;
        if (local_118 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_118 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_118)(local_118);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_148);
        lVar6 = 2;
        pcVar10 = &stack0xffffffffffffffe0;
        do {
          lVar6 = lVar6 + -1;
          pcVar3 = pcVar10 + -0x30;
          if (*pcVar3 != '\0') {
            *pcVar3 = '\0';
            plVar5 = *(longlong **)(pcVar10 + -0x40);
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar5 + 1;
              lVar7 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar2 = (int *)((longlong)plVar5 + 0xc);
                iVar4 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5,1);
                }
              }
            }
          }
          pcVar10 = pcVar3;
        } while (lVar6 != 0);
        plVar5 = (longlong *)puVar9[1];
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar5 = *(longlong **)(local_190 + 8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar5 = *(longlong **)(local_188 + 8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        FText::operator=(local_198,local_138);
        plVar5 = local_130;
        if (local_130 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_130 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_130)(local_130);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar5 = local_100;
        param_2 = local_198;
        if (local_100 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_100 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_100)(local_100);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            param_2 = local_198;
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
              param_2 = local_198;
            }
          }
        }
      }
      iVar11 = iVar11 + 1;
      lVar12 = lVar12 + 8;
    } while (iVar11 < *(int *)(param_1 + 0x68));
  }
  return param_2;
}



// FUNCTION 142c062e0 FUN_142c062e0 body=708 status=ok
// SIG undefined FUN_142c062e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142c062e0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  char *pcVar11;
  undefined1 auStack_178 [32];
  undefined4 *local_158;
  ulonglong *puStack_150;
  longlong local_148;
  undefined8 local_140;
  longlong local_138;
  undefined1 local_130 [16];
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [16];
  undefined1 local_e0 [24];
  undefined1 local_c8 [32];
  undefined4 local_a8 [4];
  undefined1 local_98 [24];
  undefined1 local_80;
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_178;
  lVar7 = UEnvQueryTypes::DescribeContext(local_e0,*(undefined8 *)(param_1 + 0x158));
  local_148 = lVar7;
  lVar8 = FUN_142be4f60(param_1,local_c8);
  uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_108,L"{0}: generate in front of {1}",L"EnvQueryGenerator",
                     L"ConeDescriptionGenerateAroundContext");
  puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_f0,uVar9);
  local_a8[0] = 4;
  FText::FText(local_98,lVar8);
  local_80 = 1;
  local_78 = 4;
  FText::FText(local_68,lVar7);
  local_158 = local_a8;
  local_50 = 1;
  puStack_150 = local_48;
  local_140 = *puVar10;
  local_138 = puVar10[1];
  if (local_138 != 0) {
    LOCK();
    *(int *)(local_138 + 8) = *(int *)(local_138 + 8) + 1;
    UNLOCK();
  }
  uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_130,&local_158);
  uVar9 = FText::Format(local_120,&local_140,uVar9);
  FText::FText(param_2,uVar9);
  if (local_118 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_118 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_118)(local_118);
      LOCK();
      piVar1 = (int *)((longlong)local_118 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_118 + 8))(local_118,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_130);
  lVar7 = 2;
  pcVar11 = &stack0xffffffffffffffe0;
  do {
    lVar7 = lVar7 + -1;
    pcVar2 = pcVar11 + -0x30;
    if (*pcVar2 != '\0') {
      *pcVar2 = '\0';
      plVar5 = *(longlong **)(pcVar11 + -0x40);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar5 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
    }
    pcVar11 = pcVar2;
  } while (lVar7 != 0);
  plVar5 = (longlong *)puVar10[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = *(longlong **)(lVar8 + 8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = *(longlong **)(local_148 + 8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_100 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar1 = (int *)((longlong)local_100 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_100 + 8))(local_100,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142c065b0 FUN_142c065b0 body=551 status=ok
// SIG undefined FUN_142c065b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142c065b0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  ulonglong *puStack_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [16];
  undefined1 local_78 [24];
  undefined4 local_60 [4];
  undefined1 local_50 [8];
  longlong *local_48;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lVar6 = UEnvQueryTypes::DescribeContext(local_78,*(undefined8 *)(param_1 + 0x60));
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_a0,L"Current Location of {0}",L"EnvQueryGenerator",L"CurrentLocationOn");
  puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_88,uVar7);
  local_60[0] = 4;
  FText::FText(local_50,lVar6);
  local_e8 = local_60;
  local_38 = '\x01';
  puStack_e0 = &local_30;
  local_d8 = *puVar8;
  local_d0 = puVar8[1];
  if (local_d0 != 0) {
    LOCK();
    *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
    UNLOCK();
  }
  uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_c8,&local_e8);
  uVar7 = FText::Format(local_b8,&local_d8,uVar7);
  FText::FText(param_2,uVar7);
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_b0 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar1 = (int *)((longlong)local_b0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_c8);
  if (local_38 != '\0') {
    local_38 = '\0';
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_48 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
  }
  plVar4 = (longlong *)puVar8[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  plVar4 = *(longlong **)(lVar6 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_98 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar1 = (int *)((longlong)local_98 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_98 + 8))(local_98,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142c067e0 FUN_142c067e0 body=777 status=ok
// SIG undefined FUN_142c067e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142c067e0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_1a8 [32];
  longlong local_188 [4];
  undefined1 local_168 [4];
  undefined1 local_164 [4];
  longlong *local_160;
  undefined4 *local_158;
  longlong *local_150;
  undefined4 *local_148;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 local_98 [4];
  undefined1 local_88 [8];
  longlong *local_80;
  char local_70;
  undefined4 local_68 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  local_e8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  uVar5 = FUN_142be4f60(param_1,local_140);
  local_98[0] = 4;
  FText::FText(local_88,uVar5);
  local_70 = '\x01';
  local_188[0] = 0;
  local_188[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_188,0);
  FGenericPlatformString::Memcpy(local_188[0],L"DescriptionTitle",0x22);
  local_160 = local_188;
  local_158 = local_98;
  FUN_1407484b0(&local_e8,local_168,&local_160,0);
  if (local_188[0] != 0) {
    FMemory::Free();
  }
  if (local_70 != '\0') {
    local_70 = '\0';
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)local_80 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
  }
  if (local_138 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_138 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_138)(local_138);
      LOCK();
      piVar2 = (int *)((longlong)local_138 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_138 + 8))(local_138,1);
      }
    }
  }
  uVar5 = UEnvQueryTypes::DescribeContext(local_128,*(undefined8 *)(param_1 + 0x1b0));
  local_68[0] = 4;
  FText::FText(local_58,uVar5);
  local_40 = '\x01';
  local_188[2] = 0;
  local_188[3] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_188 + 2,0);
  FGenericPlatformString::Memcpy(local_188[2],L"DescribeContext",0x20);
  local_150 = local_188 + 2;
  local_148 = local_68;
  FUN_1407484b0(&local_e8,local_164,&local_150,0);
  if (local_188[2] != 0) {
    FMemory::Free();
  }
  if (local_40 != '\0') {
    local_40 = '\0';
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
  }
  if (local_120 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_120 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_120)(local_120);
      LOCK();
      piVar2 = (int *)((longlong)local_120 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_120 + 8))(local_120,1);
      }
    }
  }
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_110,L"{DescriptionTitle}: generate items around {DescribeContext}",
                     L"EnvQueryGenerator",L"DescriptionGenerateDonutAroundContext");
  uVar5 = FTextFormat::FTextFormat(local_f8,uVar5);
  FText::Format(param_2,uVar5,&local_e8);
  if (local_108 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_108 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_108)(local_108);
      LOCK();
      piVar2 = (int *)((longlong)local_108 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_108 + 8))(local_108,1);
      }
    }
  }
  local_a0 = 0;
  if (local_a8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_e8);
  return param_2;
}



// FUNCTION 142c06af0 FUN_142c06af0 body=777 status=ok
// SIG undefined FUN_142c06af0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142c06af0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_1a8 [32];
  longlong local_188 [4];
  undefined1 local_168 [4];
  undefined1 local_164 [4];
  longlong *local_160;
  undefined4 *local_158;
  longlong *local_150;
  undefined4 *local_148;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 local_98 [4];
  undefined1 local_88 [8];
  longlong *local_80;
  char local_70;
  undefined4 local_68 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  local_e8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  uVar5 = FUN_142be4f60(param_1,local_140);
  local_98[0] = 4;
  FText::FText(local_88,uVar5);
  local_70 = '\x01';
  local_188[0] = 0;
  local_188[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_188,0);
  FGenericPlatformString::Memcpy(local_188[0],L"DescriptionTitle",0x22);
  local_160 = local_188;
  local_158 = local_98;
  FUN_1407484b0(&local_e8,local_168,&local_160,0);
  if (local_188[0] != 0) {
    FMemory::Free();
  }
  if (local_70 != '\0') {
    local_70 = '\0';
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)local_80 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
  }
  if (local_138 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_138 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_138)(local_138);
      LOCK();
      piVar2 = (int *)((longlong)local_138 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_138 + 8))(local_138,1);
      }
    }
  }
  uVar5 = UEnvQueryTypes::DescribeContext(local_128,*(undefined8 *)(param_1 + 0x188));
  local_68[0] = 4;
  FText::FText(local_58,uVar5);
  local_40 = '\x01';
  local_188[2] = 0;
  local_188[3] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_188 + 2,0);
  FGenericPlatformString::Memcpy(local_188[2],L"DescribeContext",0x20);
  local_150 = local_188 + 2;
  local_148 = local_68;
  FUN_1407484b0(&local_e8,local_164,&local_150,0);
  if (local_188[2] != 0) {
    FMemory::Free();
  }
  if (local_40 != '\0') {
    local_40 = '\0';
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
  }
  if (local_120 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_120 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_120)(local_120);
      LOCK();
      piVar2 = (int *)((longlong)local_120 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_120 + 8))(local_120,1);
      }
    }
  }
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_110,
                     L"{DescriptionTitle}: generate items on circle around {DescribeContext}",
                     L"EnvQueryGenerator",L"DescriptionGenerateCircleAroundContext");
  uVar5 = FTextFormat::FTextFormat(local_f8,uVar5);
  FText::Format(param_2,uVar5,&local_e8);
  if (local_108 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_108 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_108)(local_108);
      LOCK();
      piVar2 = (int *)((longlong)local_108 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_108 + 8))(local_108,1);
      }
    }
  }
  local_a0 = 0;
  if (local_a8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_e8);
  return param_2;
}



// FUNCTION 142c06e00 FUN_142c06e00 body=708 status=ok
// SIG undefined FUN_142c06e00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142c06e00(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  char *pcVar11;
  undefined1 auStack_178 [32];
  undefined4 *local_158;
  ulonglong *puStack_150;
  longlong local_148;
  undefined8 local_140;
  longlong local_138;
  undefined1 local_130 [16];
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [16];
  undefined1 local_e0 [24];
  undefined1 local_c8 [32];
  undefined4 local_a8 [4];
  undefined1 local_98 [24];
  undefined1 local_80;
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_178;
  lVar7 = UEnvQueryTypes::DescribeContext(local_e0,*(undefined8 *)(param_1 + 0xf8));
  local_148 = lVar7;
  lVar8 = FUN_142be4f60(param_1,local_c8);
  uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_108,L"{0}: generate around {1}",L"EnvQueryGenerator",
                     L"SimpleGridDescriptionGenerateAroundContext");
  puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_f0,uVar9);
  local_a8[0] = 4;
  FText::FText(local_98,lVar8);
  local_80 = 1;
  local_78 = 4;
  FText::FText(local_68,lVar7);
  local_158 = local_a8;
  local_50 = 1;
  puStack_150 = local_48;
  local_140 = *puVar10;
  local_138 = puVar10[1];
  if (local_138 != 0) {
    LOCK();
    *(int *)(local_138 + 8) = *(int *)(local_138 + 8) + 1;
    UNLOCK();
  }
  uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_130,&local_158);
  uVar9 = FText::Format(local_120,&local_140,uVar9);
  FText::FText(param_2,uVar9);
  if (local_118 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_118 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_118)(local_118);
      LOCK();
      piVar1 = (int *)((longlong)local_118 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_118 + 8))(local_118,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_130);
  lVar7 = 2;
  pcVar11 = &stack0xffffffffffffffe0;
  do {
    lVar7 = lVar7 + -1;
    pcVar2 = pcVar11 + -0x30;
    if (*pcVar2 != '\0') {
      *pcVar2 = '\0';
      plVar5 = *(longlong **)(pcVar11 + -0x40);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar5 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
    }
    pcVar11 = pcVar2;
  } while (lVar7 != 0);
  plVar5 = (longlong *)puVar10[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = *(longlong **)(lVar8 + 8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = *(longlong **)(local_148 + 8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_100 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar1 = (int *)((longlong)local_100 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_100 + 8))(local_100,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142c070d0 FUN_142c070d0 body=477 status=ok
// SIG undefined FUN_142c070d0(void)

undefined8 FUN_142c070d0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined8 *local_68;
  undefined8 local_60;
  longlong local_58 [2];
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  cVar3 = *(char *)(param_1 + 0x1d8);
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  if (cVar3 != '\0') {
    if (cVar3 == '\x01') {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68,4);
      iVar5 = (int)local_60 + 4;
      local_60 = CONCAT44(local_60._4_4_,iVar5);
      if (local_60._4_4_ < iVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68);
      }
      *local_68 = 0x4400320020;
    }
    else if (cVar3 == '\x02') {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68,3);
      iVar5 = (int)local_60 + 3;
      local_60 = CONCAT44(local_60._4_4_,iVar5);
      if (local_60._4_4_ < iVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68);
      }
      *(undefined4 *)local_68 = 0x5a0020;
      *(undefined2 *)((longlong)local_68 + 4) = 0;
    }
  }
  uVar6 = UEnvQueryTypes::DescribeContext(local_30,*(undefined8 *)(param_1 + 0x1e0));
  puVar7 = (undefined8 *)FText::ToString(uVar6);
  puVar9 = &DAT_143f3eda8;
  if (*(int *)(puVar7 + 1) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)*puVar7;
  }
  puVar7 = (undefined8 *)&DAT_143f3eda8;
  if ((int)local_60 != 0) {
    puVar7 = local_68;
  }
  uVar6 = FUN_142be4f60(param_1,local_48);
  puVar8 = (undefined8 *)FText::ToString(uVar6);
  if (*(int *)(puVar8 + 1) != 0) {
    puVar9 = (undefined2 *)*puVar8;
  }
  FString::PrintfImpl(local_58,L"%s%s: to %s",puVar9,puVar7,puVar10);
  FText::FromString(param_2,local_58);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_28 + 8))(local_28,1);
      }
    }
  }
  if (local_68 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142c072b0 FUN_142c072b0 body=574 status=ok
// SIG undefined FUN_142c072b0(void)

undefined8 FUN_142c072b0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  wchar_t *pwVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined8 *local_88;
  undefined8 local_80;
  longlong local_78 [2];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  
  iVar4 = 0;
  local_88 = (undefined8 *)0x0;
  local_80 = 0;
  if ((*(char *)(param_1 + 0x218) != '\0') && (*(char *)(param_1 + 0x218) == '\x01')) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_88,4);
    iVar4 = (int)local_80 + 4;
    local_80 = CONCAT44(local_80._4_4_,iVar4);
    if (local_80._4_4_ < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88);
      iVar4 = (int)local_80;
    }
    *local_88 = 0x4400320020;
  }
  uVar5 = FEnvDirection::ToText(param_1 + 0x1f8,local_38);
  puVar6 = (undefined8 *)FText::ToString(uVar5);
  puVar8 = &DAT_143f3eda8;
  if (*(int *)(puVar6 + 1) == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)*puVar6;
  }
  uVar5 = FEnvDirection::ToText(param_1 + 0x1d8,local_50);
  puVar6 = (undefined8 *)FText::ToString(uVar5);
  if (*(int *)(puVar6 + 1) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)*puVar6;
  }
  puVar6 = (undefined8 *)&DAT_143f3eda8;
  if (iVar4 != 0) {
    puVar6 = local_88;
  }
  uVar5 = FUN_142be4f60(param_1,local_68);
  puVar7 = (undefined8 *)FText::ToString(uVar5);
  if (*(int *)(puVar7 + 1) != 0) {
    puVar8 = (undefined2 *)*puVar7;
  }
  pwVar9 = L"";
  if (*(char *)(param_1 + 0x219) != '\0') {
    pwVar9 = L"Absolute ";
  }
  FString::PrintfImpl(local_78,L"%s%s%s: %s and %s",pwVar9,puVar8,puVar6,puVar10,puVar11);
  FText::FromString(param_2,local_78);
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
      }
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (local_88 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142c074f0 FUN_142c074f0 body=405 status=ok
// SIG undefined FUN_142c074f0(void)

undefined8 FUN_142c074f0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 *local_68;
  int local_60;
  longlong local_58 [2];
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  uVar4 = UEnum::GetPrivateStaticClass();
  uVar4 = FUN_141799410(uVar4,0xffffffffffffffff,L"EEnvOverlapShape",1);
  uVar4 = FUN_1417373a0(uVar4,local_48,*(undefined1 *)(param_1 + 0x1f1));
  puVar5 = (undefined8 *)FText::ToString(uVar4);
  puVar8 = (undefined2 *)0x0;
  local_68 = (undefined2 *)0x0;
  local_60 = *(int *)(puVar5 + 1);
  lVar6 = (longlong)local_60;
  _Src = (void *)*puVar5;
  if (local_60 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,local_60,0);
    puVar8 = local_68;
    _guard_xfg_dispatch_icall_nop(local_68,_Src,lVar6 * 2);
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  puVar7 = &DAT_143f3eda8;
  puVar9 = &DAT_143f3eda8;
  if (local_60 != 0) {
    puVar9 = puVar8;
  }
  uVar4 = FUN_142be4f60(param_1,local_30);
  puVar5 = (undefined8 *)FText::ToString(uVar4);
  if (*(int *)(puVar5 + 1) != 0) {
    puVar7 = (undefined2 *)*puVar5;
  }
  FString::PrintfImpl(local_58,L"%s: %s",puVar7,puVar9);
  FText::FromString(param_2,local_58);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_28 + 8))(local_28,1);
      }
    }
  }
  if (local_68 != (undefined2 *)0x0) {
    FMemory::Free(local_68);
  }
  return param_2;
}



// FUNCTION 142c07690 FUN_142c07690 body=788 status=ok
// SIG undefined FUN_142c07690(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142c07690(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  wchar_t *pwVar12;
  longlong lVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  longlong *plVar16;
  wchar_t *pwVar17;
  undefined2 *puVar18;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined8 local_f0;
  longlong local_e8 [2];
  longlong local_d8 [2];
  longlong local_c8 [2];
  longlong local_b8 [2];
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined8 local_78;
  int local_70 [2];
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58 [4];
  
  local_58[2] = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_70[0] = 10;
  local_70[1] = 0;
  local_f8 = 0;
  local_78 = 0;
  local_f0 = param_2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  FGenericPlatformString::Memcpy(local_78,L"PathExist",0x14);
  local_68 = 0;
  local_60 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  FGenericPlatformString::Memcpy(local_68,L"PathCost",0x12);
  local_58[0] = 0;
  local_58[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Memcpy(local_58[0],L"PathLength",0x16);
  if (*(longlong *)(param_1 + 0x1f8) == 0) {
    uVar11 = UEnvQueryTypes::DescribeContext(local_a8,*(undefined8 *)(param_1 + 0x1e0));
    puVar10 = (undefined8 *)FText::ToString(uVar11);
    if (*(int *)(puVar10 + 1) == 0) {
      puVar15 = &DAT_143f3eda8;
    }
    else {
      puVar15 = (undefined2 *)*puVar10;
    }
    pwVar17 = L"to";
    bVar8 = false;
    bVar7 = false;
    bVar6 = false;
    bVar5 = true;
    bVar4 = true;
    if (*(char *)(param_1 + 0x210) != '\0') {
      pwVar17 = L"from";
    }
    plVar16 = local_d8;
    pwVar12 = L"%s %s";
  }
  else {
    puVar10 = (undefined8 *)FAIDataProviderValue::ToString(param_1 + 0x1e8,local_b8);
    if (*(int *)(puVar10 + 1) == 0) {
      puVar15 = &DAT_143f3eda8;
    }
    else {
      puVar15 = (undefined2 *)*puVar10;
    }
    uVar11 = UEnvQueryTypes::DescribeContext(local_90,*(undefined8 *)(param_1 + 0x1e0));
    puVar10 = (undefined8 *)FText::ToString(uVar11);
    if (*(int *)(puVar10 + 1) == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = (wchar_t *)*puVar10;
    }
    plVar16 = local_c8;
    bVar8 = true;
    bVar7 = true;
    bVar6 = true;
    bVar5 = false;
    bVar4 = false;
    pwVar12 = L"%s, direction: %s";
  }
  puVar14 = &DAT_143f3eda8;
  FString::PrintfImpl(plVar16,pwVar12,pwVar17,puVar15);
  puVar15 = (undefined2 *)*plVar16;
  *plVar16 = 0;
  lVar13 = plVar16[1];
  plVar16[1] = 0;
  if (bVar4) {
    if (local_d8[0] != 0) {
      FMemory::Free();
    }
  }
  if (bVar5) {
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar16 = local_a0 + 1;
      lVar9 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)local_a0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
  }
  if (bVar6) {
    if (local_c8[0] != 0) {
      FMemory::Free();
    }
  }
  if (bVar7) {
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar16 = local_88 + 1;
      lVar9 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar1 = (int *)((longlong)local_88 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_88 + 8))(local_88,1);
        }
      }
    }
  }
  if ((bVar8) && (local_b8[0] != 0)) {
    FMemory::Free();
  }
  puVar18 = &DAT_143f3eda8;
  if ((int)lVar13 != 0) {
    puVar18 = puVar15;
  }
  if (local_70[(ulonglong)*(byte *)(param_1 + 0x1d8) * 4] != 0) {
    puVar14 = (undefined2 *)(&local_78)[(ulonglong)*(byte *)(param_1 + 0x1d8) * 2];
  }
  FString::PrintfImpl(local_e8,L"%s: %s",puVar14,puVar18);
  uVar11 = local_f0;
  FText::FromString(local_f0,local_e8);
  if (local_e8[0] != 0) {
    FMemory::Free();
  }
  if (puVar15 != (undefined2 *)0x0) {
    FMemory::Free(puVar15);
  }
  lVar13 = 3;
  plVar16 = local_58 + 2;
  do {
    plVar2 = plVar16 + -2;
    plVar16 = plVar16 + -2;
    lVar13 = lVar13 + -1;
    if (*plVar2 != 0) {
      FMemory::Free();
    }
  } while (lVar13 != 0);
  return uVar11;
}



// FUNCTION 142c079b0 GetDescriptionTitle body=547 status=ok
// SIG undefined GetDescriptionTitle(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
UEnvQueryTest_PathfindingBatch::GetDescriptionTitle(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  ulonglong *puStack_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [16];
  undefined1 local_78 [24];
  undefined4 local_60 [4];
  undefined1 local_50 [8];
  longlong *local_48;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lVar6 = FUN_142c07690(param_1,local_78);
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_a0,L"{0} [batch]",L"EnvQueryGenerator",L"PathfindingBatch");
  puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_88,uVar7);
  local_60[0] = 4;
  FText::FText(local_50,lVar6);
  local_e8 = local_60;
  local_38 = '\x01';
  puStack_e0 = &local_30;
  local_d8 = *puVar8;
  local_d0 = puVar8[1];
  if (local_d0 != 0) {
    LOCK();
    *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
    UNLOCK();
  }
  uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_c8,&local_e8);
  uVar7 = FText::Format(local_b8,&local_d8,uVar7);
  FText::FText(param_2,uVar7);
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_b0 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar1 = (int *)((longlong)local_b0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_c8);
  if (local_38 != '\0') {
    local_38 = '\0';
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_48 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
  }
  plVar4 = (longlong *)puVar8[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  plVar4 = *(longlong **)(lVar6 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_98 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar1 = (int *)((longlong)local_98 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_98 + 8))(local_98,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142c07be0 FUN_142c07be0 body=839 status=ok
// SIG undefined FUN_142c07be0(void)

undefined8 FUN_142c07be0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  wchar_t *pwVar16;
  undefined2 *puVar17;
  longlong *plVar18;
  undefined2 *local_e8;
  int local_e0;
  longlong local_d8 [2];
  longlong local_c8 [2];
  longlong local_b8 [2];
  longlong local_a8 [2];
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  
  uVar9 = UEnum::GetPrivateStaticClass();
  uVar9 = FUN_141799410(uVar9,0xffffffffffffffff,L"ETraceTypeQuery",1);
  uVar9 = FUN_1417373a0(uVar9,local_98,*(undefined1 *)(param_1 + 0x200));
  puVar10 = (undefined8 *)FText::ToString(uVar9);
  local_e8 = (undefined2 *)0x0;
  local_e0 = *(int *)(puVar10 + 1);
  lVar12 = (longlong)local_e0;
  _Src = (void *)*puVar10;
  if (local_e0 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e8,local_e0,0);
    _guard_xfg_dispatch_icall_nop(local_e8,_Src,lVar12 * 2);
  }
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_90 + 1;
    lVar12 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)local_90 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x218) == 0) {
    uVar9 = UEnvQueryTypes::DescribeContext(local_80,*(undefined8 *)(param_1 + 0x298));
    puVar10 = (undefined8 *)FText::ToString(uVar9);
    if (*(int *)(puVar10 + 1) == 0) {
      puVar14 = &DAT_143f3eda8;
    }
    else {
      puVar14 = (undefined2 *)*puVar10;
    }
    pwVar16 = L"to";
    bVar7 = false;
    bVar6 = false;
    bVar5 = false;
    bVar4 = true;
    bVar3 = true;
    if (*(char *)(param_1 + 0x230) != '\0') {
      pwVar16 = L"from";
    }
    plVar18 = local_c8;
    pwVar11 = L"%s %s";
  }
  else {
    puVar10 = (undefined8 *)FAIDataProviderValue::ToString(param_1 + 0x208,local_a8);
    if (*(int *)(puVar10 + 1) == 0) {
      puVar14 = &DAT_143f3eda8;
    }
    else {
      puVar14 = (undefined2 *)*puVar10;
    }
    uVar9 = UEnvQueryTypes::DescribeContext(local_68,*(undefined8 *)(param_1 + 0x298));
    puVar10 = (undefined8 *)FText::ToString(uVar9);
    if (*(int *)(puVar10 + 1) == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = (wchar_t *)*puVar10;
    }
    plVar18 = local_b8;
    bVar7 = true;
    bVar6 = true;
    bVar5 = true;
    bVar4 = false;
    bVar3 = false;
    pwVar11 = L"%s, direction: %s";
  }
  puVar17 = &DAT_143f3eda8;
  FString::PrintfImpl(plVar18,pwVar11,pwVar16,puVar14);
  puVar14 = (undefined2 *)*plVar18;
  *plVar18 = 0;
  lVar12 = plVar18[1];
  plVar18[1] = 0;
  if (bVar3) {
    if (local_c8[0] != 0) {
      FMemory::Free();
    }
  }
  if (bVar4) {
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar18 = local_78 + 1;
      lVar8 = *plVar18;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)local_78 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
  }
  if (bVar5) {
    if (local_b8[0] != 0) {
      FMemory::Free();
    }
  }
  if (bVar6) {
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar18 = local_60 + 1;
      lVar8 = *plVar18;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
  }
  if ((bVar7) && (local_a8[0] != 0)) {
    FMemory::Free();
  }
  puVar13 = &DAT_143f3eda8;
  if (local_e0 != 0) {
    puVar13 = local_e8;
  }
  puVar15 = &DAT_143f3eda8;
  if ((int)lVar12 != 0) {
    puVar15 = puVar14;
  }
  uVar9 = FUN_142be4f60(param_1,local_50);
  puVar10 = (undefined8 *)FText::ToString(uVar9);
  if (*(int *)(puVar10 + 1) != 0) {
    puVar17 = (undefined2 *)*puVar10;
  }
  FString::PrintfImpl(local_d8,L"%s: %s on %s",puVar17,puVar15,puVar13);
  FText::FromString(param_2,local_d8);
  if (local_d8[0] != 0) {
    FMemory::Free();
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_48 + 1;
    lVar12 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
      }
    }
  }
  if (puVar14 != (undefined2 *)0x0) {
    FMemory::Free(puVar14);
  }
  if (local_e8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142c07f30 FUN_142c07f30 body=189 status=ok
// SIG undefined FUN_142c07f30(void)

float FUN_142c07f30(longlong param_1,longlong param_2,float *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  float fVar2;
  undefined8 uVar3;
  float local_18;
  float fStack_14;
  
  if ((*(uint *)(param_2 + 0x98) >> 2 & 1) != 0) {
    if (param_4 == (undefined8 *)0x0) {
      if (*(int *)(param_2 + 0x30) < 1) {
        puVar1 = &DAT_1466910d0;
      }
      else {
        puVar1 = (undefined8 *)
                 ((longlong)(*(int *)(param_2 + 0x30) + -1) * 0x20 + *(longlong *)(param_2 + 0x28));
      }
      uVar3 = *puVar1;
      fVar2 = *(float *)(puVar1 + 1);
    }
    else {
      uVar3 = *param_4;
      fVar2 = *(float *)(param_4 + 1);
    }
    local_18 = (float)uVar3;
    fStack_14 = (float)((ulonglong)uVar3 >> 0x20);
    fVar2 = *(float *)(param_1 + 0x1fc) -
            SQRT((param_3[1] - fStack_14) * (param_3[1] - fStack_14) +
                 (*param_3 - local_18) * (*param_3 - local_18) +
                 (param_3[2] - fVar2) * (param_3[2] - fVar2));
    if (fVar2 <= *(float *)(param_1 + 0x1f8)) {
      fVar2 = *(float *)(param_1 + 0x1f8);
    }
    return fVar2;
  }
  return *(float *)(param_1 + 0x1fc);
}



// FUNCTION 142c07ff0 GetGoalActorAsNavAgent body=40 status=ok
// SIG undefined GetGoalActorAsNavAgent(void)

undefined8 FNavigationPath::GetGoalActorAsNavAgent(longlong param_1)

{
  char cVar1;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x40);
  if (cVar1 != '\0') {
    return *(undefined8 *)(param_1 + 0x48);
  }
  return 0;
}



// FUNCTION 142c08020 GetGridIndex body=104 status=ok
// SIG undefined GetGridIndex(void)

ulonglong UNavLocalGridManager::GetGridIndex(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    fVar1 = *param_2;
    pfVar3 = (float *)(*(longlong *)(param_1 + 0x28) + 0xc);
    uVar5 = uVar4;
    do {
      if ((((pfVar3[-1] <= fVar1 && fVar1 != pfVar3[-1]) && (fVar1 < pfVar3[2])) &&
          (fVar2 = param_2[1], *pfVar3 <= fVar2 && fVar2 != *pfVar3)) &&
         (((fVar2 < pfVar3[3] && (fVar2 = param_2[2], pfVar3[1] <= fVar2 && fVar2 != pfVar3[1])) &&
          (fVar2 < pfVar3[4])))) {
        return uVar5;
      }
      uVar5 = (ulonglong)((int)uVar5 + 1);
      uVar4 = uVar4 + 1;
      pfVar3 = pfVar3 + 0x24;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x30));
  }
  return 0xffffffff;
}



// FUNCTION 142c08090 FUN_142c08090 body=191 status=ok
// SIG undefined FUN_142c08090(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142c08090(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *param_3;
  local_res14 = param_3[1];
  lVar2 = FWeakObjectPtr::Get(&local_res10);
  uVar3 = DAT_146691100;
  uVar1 = DAT_146691108;
  if ((lVar2 != 0) &&
     (lVar2 = *(longlong *)(lVar2 + 0x168), uVar3 = _DAT_1468b5d90, uVar1 = DAT_1468b5d98,
     lVar2 != 0)) {
    uVar3 = *(undefined8 *)(lVar2 + 0x220);
    uVar1 = *(undefined4 *)(lVar2 + 0x228);
  }
  *param_2 = uVar3;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 142c08150 FUN_142c08150 body=129 status=ok
// SIG undefined FUN_142c08150(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142c08150(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 local_18;
  undefined4 local_10;
  
  local_res10 = *param_3;
  local_res14 = param_3[1];
  lVar1 = FWeakObjectPtr::Get(&local_res10);
  if (lVar1 == 0) {
    local_18 = _DAT_1468b5d90;
    local_10 = DAT_1468b5d98;
  }
  else {
    local_18 = *(undefined8 *)(lVar1 + 0x220);
    local_10 = *(undefined4 *)(lVar1 + 0x228);
  }
  *param_2 = local_18;
  *(undefined4 *)(param_2 + 1) = local_10;
  return param_2;
}



// FUNCTION 142c081e0 GetItemLocation body=30 status=ok
// SIG undefined GetItemLocation(void)

undefined4 *
UEnvQueryItemType_Point::GetItemLocation(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  *param_2 = *param_3;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  return param_2;
}



// FUNCTION 142c08220 FUN_142c08220 body=244 status=ok
// SIG undefined FUN_142c08220(void)

undefined8 * FUN_142c08220(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 local_28;
  float fStack_20;
  float fStack_1c;
  undefined1 local_18 [16];
  
  local_res10 = *param_3;
  local_res14 = param_3[1];
  lVar6 = FWeakObjectPtr::Get(&local_res10);
  if (lVar6 == 0) {
    uVar8 = (undefined4)DAT_1466910e0;
    uVar9 = (undefined4)((ulonglong)DAT_1466910e0 >> 0x20);
    uVar5 = DAT_1466910e8;
  }
  else {
    lVar1 = *(longlong *)(lVar6 + 0x168);
    if (lVar1 == 0) {
      uVar8 = (undefined4)DAT_1468b5da0;
      uVar9 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      uVar5 = DAT_1468b5da8;
    }
    else {
      fVar3 = *(float *)(lVar1 + 0x210);
      local_28 = *(undefined8 *)(lVar1 + 0x210);
      fStack_20 = *(float *)(lVar1 + 0x218);
      fStack_1c = *(float *)(lVar1 + 0x21c);
      auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != *(float *)(lVar1 + 0x214));
      auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != fVar3);
      auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_20);
      auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_1c);
      iVar4 = movmskps((int)lVar6,auVar2);
      if (iVar4 != 0) {
        *(float *)(lVar1 + 0x250) = fVar3;
        *(float *)(lVar1 + 0x254) = *(float *)(lVar1 + 0x214);
        *(float *)(lVar1 + 600) = fStack_20;
        *(float *)(lVar1 + 0x25c) = fStack_1c;
        puVar7 = (undefined8 *)FQuat::Rotator(&local_28,local_18);
        *(undefined8 *)(lVar1 + 0x260) = *puVar7;
        *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar7 + 1);
      }
      uVar8 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
      uVar9 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
      uVar5 = *(undefined4 *)(lVar1 + 0x268);
    }
  }
  *param_2 = CONCAT44(uVar9,uVar8);
  *(undefined4 *)(param_2 + 1) = uVar5;
  return param_2;
}



// FUNCTION 142c08320 FUN_142c08320 body=192 status=ok
// SIG undefined FUN_142c08320(void)

undefined8 * FUN_142c08320(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined1 local_28 [16];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  local_res10 = *param_3;
  uVar2 = SUB84(&local_res10,0);
  local_res14 = param_3[1];
  lVar3 = FWeakObjectPtr::Get();
  if (lVar3 == 0) {
    uVar6 = (undefined4)DAT_1468b5da0;
    uVar7 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
    uVar2 = DAT_1468b5da8;
  }
  else {
    local_18 = *(float *)(lVar3 + 0x210);
    fStack_14 = *(float *)(lVar3 + 0x214);
    fStack_10 = *(float *)(lVar3 + 0x218);
    fStack_c = *(float *)(lVar3 + 0x21c);
    auVar1._4_4_ = -(uint)(*(float *)(lVar3 + 0x254) != fStack_14);
    auVar1._0_4_ = -(uint)(*(float *)(lVar3 + 0x250) != local_18);
    auVar1._8_4_ = -(uint)(*(float *)(lVar3 + 600) != fStack_10);
    auVar1._12_4_ = -(uint)(*(float *)(lVar3 + 0x25c) != fStack_c);
    iVar5 = movmskps(uVar2,auVar1);
    if (iVar5 != 0) {
      *(float *)(lVar3 + 0x250) = local_18;
      *(float *)(lVar3 + 0x254) = fStack_14;
      *(float *)(lVar3 + 600) = fStack_10;
      *(float *)(lVar3 + 0x25c) = fStack_c;
      puVar4 = (undefined8 *)FQuat::Rotator(&local_18,local_28);
      *(undefined8 *)(lVar3 + 0x260) = *puVar4;
      *(undefined4 *)(lVar3 + 0x268) = *(undefined4 *)(puVar4 + 1);
    }
    uVar6 = (undefined4)*(undefined8 *)(lVar3 + 0x260);
    uVar7 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x260) >> 0x20);
    uVar2 = *(undefined4 *)(lVar3 + 0x268);
  }
  *param_2 = CONCAT44(uVar7,uVar6);
  *(undefined4 *)(param_2 + 1) = uVar2;
  return param_2;
}



// FUNCTION 142c083e0 GetItemRotation body=47 status=ok
// SIG undefined GetItemRotation(void)

undefined8
UEnvQueryItemType_Direction::GetItemRotation
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = *param_3;
  local_10 = *(undefined4 *)(param_3 + 1);
  FVector::Rotation(&local_18);
  return param_2;
}



// FUNCTION 142c08410 FUN_142c08410 body=973 status=ok
// SIG undefined FUN_142c08410(void)

float * FUN_142c08410(longlong param_1,float *param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  float *pfVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  undefined8 local_58;
  float local_50;
  undefined8 local_48;
  float local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  fVar11 = DAT_1468b5d98;
  if (((param_3 != '\0') || (lVar5 = *(longlong *)(param_1 + 0x1c8), lVar5 == 0)) ||
     (*(char *)(param_1 + 0x399) != '\0')) {
    *(ulonglong *)param_2 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    param_2[2] = fVar11;
    if ((param_3 == '\0') || (cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x220), cVar2 == '\0')) {
      FUN_142c00e60(param_1,&local_48);
      fVar11 = DAT_146690eec;
      pfVar6 = (float *)FUN_1422e15c0(param_1 + 0x230,&local_38);
      fVar12 = local_40 * fVar11 + pfVar6[2];
      uVar7 = CONCAT44(local_48._4_4_ * fVar11 + pfVar6[1],(float)local_48 * fVar11 + *pfVar6);
    }
    else {
      lVar5 = FWeakObjectPtr::Get(param_1 + 0x220);
      lVar5 = *(longlong *)(lVar5 + 0x168);
      if (lVar5 == 0) {
        uVar7 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        fVar12 = DAT_1468b5d98;
      }
      else {
        uVar7 = *(undefined8 *)(lVar5 + 0x220);
        fVar12 = *(float *)(lVar5 + 0x228);
      }
    }
    *(undefined8 *)param_2 = uVar7;
    param_2[2] = fVar12;
    return param_2;
  }
  lVar1 = *(longlong *)(lVar5 + 0x178);
  if (lVar1 == 0) {
    local_58 = 0x7f7fffff7f7fffff;
    local_50 = 3.4028235e+38;
  }
  else {
    local_58 = *(undefined8 *)(lVar1 + 0x220);
    local_50 = *(float *)(lVar1 + 0x228);
  }
  local_48 = local_58;
  local_40 = local_50;
  if ((*(longlong *)(lVar5 + 0x118) != 0) &&
     (((*(int *)(param_1 + 0x1e0) != 3 ||
       ((*(longlong *)(param_1 + 0x368) != 0 &&
        (*(char *)(*(longlong *)(param_1 + 0x368) + 0x248) == '\x03')))) ||
      ((ABS(*(float *)(param_1 + 0x358)) <= 0.0001 &&
       ((ABS(*(float *)(param_1 + 0x35c)) <= 0.0001 && (ABS(*(float *)(param_1 + 0x360)) <= 0.0001))
       )))))) {
    lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x118) + 0x168);
    if (lVar5 == 0) {
      local_50 = (float)DAT_1464aa7b0;
      puVar3 = &local_58;
      local_58 = DAT_1464aa7a8;
    }
    else {
      puVar3 = (undefined8 *)FUN_142369f10(lVar5,&local_58);
    }
    local_30 = *(undefined4 *)(puVar3 + 1);
    puVar4 = &local_38;
    local_38 = *puVar3;
    goto LAB_142c0866f;
  }
  fVar11 = *(float *)(param_1 + 0x358);
  fVar12 = *(float *)(param_1 + 0x35c);
  fVar8 = fVar11 * fVar11 + fVar12 * fVar12;
  if (fVar8 == 1.0) {
    if (*(float *)(param_1 + 0x360) == 0.0) {
      local_58 = *(undefined8 *)(param_1 + 0x358);
      local_50 = (float)*(undefined4 *)(param_1 + 0x360);
    }
    else {
      local_50 = 0.0;
LAB_142c0865c:
      local_58 = CONCAT44(fVar12,fVar11);
    }
  }
  else {
    if (1e-08 <= fVar8) {
      auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
      fVar9 = auVar10._0_4_;
      fVar9 = fVar9 + fVar9 * (0.5 - fVar8 * 0.5 * fVar9 * fVar9);
      fVar9 = fVar9 + fVar9 * (0.5 - fVar8 * 0.5 * fVar9 * fVar9);
      local_50 = 0.0;
      fVar11 = fVar11 * fVar9;
      fVar12 = fVar12 * fVar9;
      goto LAB_142c0865c;
    }
    local_50 = DAT_1468b5d98;
    local_58 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  }
  puVar4 = &local_58;
LAB_142c0866f:
  fVar12 = DAT_146690eec;
  fVar11 = *(float *)(puVar4 + 1);
  fVar8 = (float)((ulonglong)*puVar4 >> 0x20) * DAT_146690eec;
  *param_2 = (float)*puVar4 * DAT_146690eec + (float)local_48;
  param_2[1] = fVar8 + local_48._4_4_;
  param_2[2] = fVar11 * fVar12 + local_40;
  return param_2;
}



// FUNCTION 142c087e0 FUN_142c087e0 body=316 status=ok
// SIG undefined FUN_142c087e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142c087e0(longlong param_1,undefined8 *param_2,char param_3)

{
  char cVar1;
  float fVar2;
  longlong lVar3;
  float *pfVar4;
  undefined8 uVar5;
  float local_38;
  float fStack_34;
  float local_30;
  undefined1 local_28 [32];
  
  fVar2 = DAT_1468b5d98;
  *param_2 = _DAT_1468b5d90;
  *(float *)(param_2 + 1) = fVar2;
  if ((param_3 == '\0') || (cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x220), cVar1 == '\0')) {
    FUN_142c00e60(param_1,&local_38);
    fVar2 = DAT_146690eec;
    pfVar4 = (float *)FUN_1422e15c0(param_1 + 0x230,local_28);
    uVar5 = CONCAT44(fStack_34 * fVar2 + pfVar4[1],local_38 * fVar2 + *pfVar4);
    fVar2 = local_30 * fVar2 + pfVar4[2];
  }
  else {
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x220);
    lVar3 = *(longlong *)(lVar3 + 0x168);
    uVar5 = _DAT_1468b5d90;
    fVar2 = DAT_1468b5d98;
    if (lVar3 != 0) {
      uVar5 = *(undefined8 *)(lVar3 + 0x220);
      fVar2 = *(float *)(lVar3 + 0x228);
    }
  }
  *param_2 = uVar5;
  *(float *)(param_2 + 1) = fVar2;
  return param_2;
}



// FUNCTION 142c08920 FUN_142c08920 body=37 status=ok
// SIG undefined FUN_142c08920(void)

undefined8 FUN_142c08920(longlong param_1,undefined8 param_2)

{
  (**(code **)(*(longlong *)(param_1 + -0x460) + 0x560))((longlong *)(param_1 + -0x460),param_2,0);
  return param_2;
}



// FUNCTION 142c08950 FUN_142c08950 body=75 status=ok
// SIG undefined FUN_142c08950(void)

void FUN_142c08950(longlong param_1,longlong param_2)

{
  FUN_142b94470(param_2 + 0x70,param_1 + -0x460,param_1 + 8);
  FUN_142b94520(param_2 + 0x70,param_1 + -0x460,param_1 + 0x18);
  return;
}



// FUNCTION 142c089a0 GetNavigationLinksArray body=431 status=ok
// SIG undefined GetNavigationLinksArray(void)

undefined8
ANavLinkProxy::GetNavigationLinksArray(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    iVar6 = (int)param_2[1];
    if (*(int *)((longlong)param_2 + 0xc) < iVar6 + iVar1) {
      TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(param_2);
      iVar6 = (int)param_2[1];
    }
    lVar3 = *(longlong *)(param_1 + 0x10);
    lVar4 = (longlong)iVar6 * 0x50 + *param_2;
    puVar2 = (undefined8 *)(lVar4 + 0x44);
    puVar5 = (undefined8 *)(lVar3 + 0x44);
    iVar6 = iVar1;
    do {
      FNavigationLinkBase::FNavigationLinkBase(lVar4,lVar3);
      lVar4 = lVar4 + 0x50;
      *(undefined8 *)((longlong)puVar2 + -0xc) = *(undefined8 *)((longlong)puVar5 + -0xc);
      *(undefined4 *)((longlong)puVar2 + -4) = *(undefined4 *)((longlong)puVar5 + -4);
      lVar3 = lVar3 + 0x50;
      *puVar2 = *puVar5;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
      iVar6 = iVar6 + -1;
      puVar2 = puVar2 + 10;
      puVar5 = puVar5 + 10;
    } while (iVar6 != 0);
    *(int *)(param_2 + 1) = iVar1 + (int)param_2[1];
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 != 0) {
    iVar6 = (int)param_3[1];
    if (*(int *)((longlong)param_3 + 0xc) < iVar6 + iVar1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(param_3);
      iVar6 = (int)param_3[1];
    }
    lVar3 = *(longlong *)(param_1 + 0x20);
    lVar4 = (longlong)iVar6 * 0x68 + *param_3;
    puVar2 = (undefined8 *)(lVar4 + 0x44);
    puVar5 = (undefined8 *)(lVar3 + 0x44);
    iVar6 = iVar1;
    do {
      FNavigationLinkBase::FNavigationLinkBase(lVar4,lVar3);
      lVar4 = lVar4 + 0x68;
      *(undefined8 *)((longlong)puVar2 + -0xc) = *(undefined8 *)((longlong)puVar5 + -0xc);
      *(undefined4 *)((longlong)puVar2 + -4) = *(undefined4 *)((longlong)puVar5 + -4);
      lVar3 = lVar3 + 0x68;
      *puVar2 = *puVar5;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
      *(undefined8 *)((longlong)puVar2 + 0xc) = *(undefined8 *)((longlong)puVar5 + 0xc);
      *(undefined4 *)((longlong)puVar2 + 0x14) = *(undefined4 *)((longlong)puVar5 + 0x14);
      puVar2[3] = puVar5[3];
      *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar5 + 4);
      iVar6 = iVar6 + -1;
      puVar2 = puVar2 + 0xd;
      puVar5 = puVar5 + 0xd;
    } while (iVar6 != 0);
    *(int *)(param_3 + 1) = (int)param_3[1] + iVar1;
  }
  if ((*(int *)(param_1 + 0x18) < 1) && (*(int *)(param_1 + 0x28) < 1)) {
    return 0;
  }
  return 1;
}



// FUNCTION 142c08b50 FUN_142c08b50 body=389 status=ok
// SIG undefined FUN_142c08b50(void)

/* WARNING: Removing unreachable block (ram,0x000142c08ba0) */
/* WARNING: Removing unreachable block (ram,0x000142c08ba6) */
/* WARNING: Removing unreachable block (ram,0x000142c08bae) */
/* WARNING: Removing unreachable block (ram,0x000142c08bbe) */
/* WARNING: Removing unreachable block (ram,0x000142c08bcb) */
/* WARNING: Removing unreachable block (ram,0x000142c08bcf) */
/* WARNING: Removing unreachable block (ram,0x000142c08c9a) */

longlong * FUN_142c08b50(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 2;
  if ((longlong *)(param_1 + 0x4a8) != param_2) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_2,0);
    plVar4 = *(longlong **)(param_1 + 0x4a8);
    plVar5 = plVar4 + (longlong)*(int *)(param_1 + 0x4b0) * 2;
    for (; plVar4 != plVar5; plVar4 = plVar4 + 2) {
      if (((int)plVar4[1] != 0) && (plVar2 = (longlong *)*plVar4, plVar2 != (longlong *)0x0)) {
        local_28 = (longlong *)0x0;
        local_20 = 0;
        (**(code **)(*plVar2 + 0x30))(plVar2,&local_28);
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_2,1);
        if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
          (**(code **)(*local_28 + 0x20))(local_28,local_res8);
        }
        iVar1 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
        }
        puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_2);
        *puVar3 = 0;
        *puVar3 = local_28;
        *(int *)(puVar3 + 1) = local_20;
      }
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 142c08ce0 FUN_142c08ce0 body=168 status=ok
// SIG undefined FUN_142c08ce0(void)

char FUN_142c08ce0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x1e0) == 0) {
    return '\x01';
  }
  if (2 < *(int *)(param_1 + 0x1e0) - 1U) {
    return '\0';
  }
  lVar1 = *(longlong *)(param_1 + 0x1e8);
  if (lVar1 == 0) {
    return '\0';
  }
  if (*(int *)(lVar1 + 0x70) == DAT_146b2ba50) {
LAB_142c08d3e:
    bVar2 = true;
  }
  else {
    if (*(longlong *)(lVar1 + 0x78) != 0) {
      cVar3 = FNavPathType::IsA(*(longlong *)(lVar1 + 0x78),&DAT_146b2ba50);
      if (cVar3 != '\0') goto LAB_142c08d3e;
    }
    bVar2 = false;
  }
  lVar4 = 0;
  if (bVar2) {
    lVar4 = lVar1;
  }
  if (lVar4 != 0) {
    return '\x02';
  }
  return (~(byte)(*(uint *)(lVar1 + 0x98) >> 2) & 1) + 3;
}



// FUNCTION 142c08d90 FUN_142c08d90 body=129 status=ok
// SIG undefined FUN_142c08d90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142c08d90(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x1e8);
  uVar4 = _DAT_1468b5d90;
  uVar2 = DAT_1468b5d98;
  if ((((lVar1 != 0) && ((*(uint *)(lVar1 + 0x98) & 2) != 0)) && (1 < *(int *)(lVar1 + 0x30))) &&
     ((*(uint *)(lVar1 + 0x98) & 1) != 0)) {
    puVar3 = (undefined8 *)
             ((longlong)(*(int *)(lVar1 + 0x30) + -1) * 0x20 + *(longlong *)(lVar1 + 0x28));
    uVar4 = *puVar3;
    uVar2 = *(undefined4 *)(puVar3 + 1);
  }
  *param_2 = uVar4;
  *(undefined4 *)(param_2 + 1) = uVar2;
  return param_2;
}



// FUNCTION 142c08e20 FUN_142c08e20 body=186 status=ok
// SIG undefined FUN_142c08e20(void)

undefined8 * FUN_142c08e20(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = FUN_1429d7ab0();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      param_3 = *(longlong *)(param_3 + 0x490);
    }
  }
  if (param_3 != 0) {
    lVar2 = FUN_142c2de20();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *param_2 = *(undefined8 *)(param_3 + 0x578);
      return param_2;
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 142c08ee0 FUN_142c08ee0 body=224 status=ok
// SIG undefined FUN_142c08ee0(void)

undefined8 * FUN_142c08ee0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b2c888) {
    _Init_thread_header(&DAT_146b2c888);
    if (DAT_146b2c888 == -1) {
      uVar1 = UEnum::GetPrivateStaticClass();
      DAT_146b2c880 = FUN_141799410(uVar1,0xffffffffffffffff,L"EPathFollowingStatus");
      _Init_thread_footer(&DAT_146b2c888);
    }
  }
  if (DAT_146b2c880 != 0) {
    UEnum::GetNameStringByValue(DAT_146b2c880,param_2,(longlong)*(int *)(param_1 + 0x1e0));
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Unknown",0x10);
  return param_2;
}



// FUNCTION 142c08fc0 GetValue body=32 status=ok
// SIG undefined GetValue(void)

void UEnvQueryItemType_Actor::GetValue(undefined4 *param_1)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  local_res8 = *param_1;
  local_resc = param_1[1];
  FWeakObjectPtr::Get(&local_res8);
  return;
}



// FUNCTION 142c08fe0 FUN_142c08fe0 body=95 status=ok
// SIG undefined FUN_142c08fe0(void)

undefined8 FUN_142c08fe0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = FUN_142ba9430();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
                    /* WARNING: Could not recover jumptable at 0x000142c09030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar1 + 0x148))(plVar1);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 142c09040 FUN_142c09040 body=1488 status=ok
// SIG undefined FUN_142c09040(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142c09040(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  float *pfVar7;
  undefined8 *puVar8;
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
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  float local_168;
  float local_164;
  float local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  float fStack_12c;
  undefined4 uStack_11c;
  undefined4 uStack_10c;
  undefined4 uStack_fc;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined1 local_d0 [184];
  
  FWeakObjectPtr::Get(param_1 + 0x44);
  plVar6 = (longlong *)param_1[0x3e];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar6 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  if (((int)param_1[0x3c] != 0) && (lVar5 = param_1[0x3d], lVar5 != 0)) {
    if (((*(uint *)(lVar5 + 0x98) & 2) != 0) &&
       ((1 < *(int *)(lVar5 + 0x30) && ((*(uint *)(lVar5 + 0x98) & 1) != 0)))) {
      lVar5 = FWeakObjectPtr::Get(lVar5 + 0x40);
      if (lVar5 != 0) {
        plVar6 = (longlong *)FNavigationPath::GetGoalActorAsNavAgent(param_1[0x3d]);
        if (plVar6 == (longlong *)0x0) {
          lVar5 = *(longlong *)(lVar5 + 0x168);
          if (lVar5 == 0) {
            local_d4 = DAT_1468b5d98;
            puVar8 = &local_dc;
            local_dc = _DAT_1468b5d90;
          }
          else {
            puVar8 = (undefined8 *)&local_158;
            local_158 = *(undefined4 *)(lVar5 + 0x220);
            local_150 = *(undefined4 *)(lVar5 + 0x228);
            uStack_154 = *(undefined4 *)(lVar5 + 0x224);
          }
          uVar9 = *puVar8;
          fVar13 = *(float *)(puVar8 + 1);
        }
        else {
          local_e0 = *(undefined4 *)((longlong)param_1 + 0x27c);
          local_e8 = *(undefined8 *)((longlong)param_1 + 0x274);
          (**(code **)(*plVar6 + 0x38))
                    (plVar6,param_1[0x23],&local_e8,&local_168,local_res18,local_res10);
          lVar5 = *(longlong *)(lVar5 + 0x168);
          if (lVar5 == 0) {
            fVar14 = 0.0;
            fVar16 = 0.0;
            fVar15 = 0.0;
            fVar18 = 1.0;
          }
          else {
            fVar14 = *(float *)(lVar5 + 0x210);
            fVar16 = *(float *)(lVar5 + 0x214);
            fVar15 = *(float *)(lVar5 + 0x218);
            fVar18 = *(float *)(lVar5 + 0x21c);
          }
          pfVar7 = (float *)(**(code **)(*plVar6 + 0x18))(plVar6,local_d0);
          uStack_13c = 0x3f800000;
          fVar11 = fVar15 + fVar15;
          uStack_ec = 0x3f800000;
          uStack_fc = 0;
          fVar10 = fVar16 + fVar16;
          uStack_11c = 0;
          uStack_10c = 0;
          fVar17 = fVar18 * (fVar14 + fVar14);
          fVar12 = (fVar14 + fVar14) * fVar14;
          local_138 = 0;
          uStack_130 = 0;
          fVar13 = pfVar7[2] * 1.0 + local_160 * (1.0 - (fVar16 * fVar10 + fVar12)) +
                   local_164 * (fVar17 + fVar16 * fVar11) +
                   local_168 * (fVar11 * fVar14 - fVar18 * fVar10);
          uVar9 = CONCAT44(pfVar7[1] * 1.0 + local_160 * (fVar16 * fVar11 - fVar17) +
                           local_164 * (1.0 - (fVar15 * fVar11 + fVar12)) +
                           local_168 * (fVar18 * fVar11 + fVar10 * fVar14),
                           *pfVar7 * 1.0 + local_160 * (fVar18 * fVar10 + fVar11 * fVar14) +
                           local_164 * (fVar10 * fVar14 - fVar18 * fVar11) +
                           local_168 * (1.0 - (fVar15 * fVar11 + fVar16 * fVar10)));
          fStack_12c = fVar16;
        }
        *(undefined8 *)((longlong)param_1 + 0x28c) = uVar9;
        *(float *)((longlong)param_1 + 0x294) = fVar13;
      }
      if ((((-(float)DAT_146691100 < *(float *)((longlong)param_1 + 0x28c)) &&
           (*(float *)((longlong)param_1 + 0x28c) < (float)DAT_146691100)) &&
          (-DAT_146691100._4_4_ < *(float *)(param_1 + 0x52))) &&
         (((*(float *)(param_1 + 0x52) < DAT_146691100._4_4_ &&
           (-DAT_146691108 < *(float *)((longlong)param_1 + 0x294))) &&
          (*(float *)((longlong)param_1 + 0x294) < DAT_146691108)))) {
        uVar4 = FUN_142bfd640(param_1,param_1[0x3d]);
        *(undefined4 *)((longlong)param_1 + 0x29c) = uVar4;
      }
      (**(code **)(*param_1 + 0x460))(param_1);
      lVar5 = param_1[0x24];
      if (lVar5 == 0) {
        lVar5 = FUN_1423407b0(param_1);
      }
      if (*(longlong *)(lVar5 + 400) == 0) {
        uVar9 = *(undefined8 *)(lVar5 + 0x3f8);
      }
      else {
        uVar9 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0x90);
      }
      FUN_142880530(uVar9,param_1 + 100);
      param_1[100] = 0;
      (**(code **)(*param_1 + 0x500))(param_1);
      if (((int)param_1[0x3c] - 1U & 0xfffffffd) == 0) {
        *(undefined4 *)(param_1 + 0x3c) = 3;
        uVar4 = (**(code **)(*param_1 + 0x518))(param_1,param_1[0x3d]);
        (**(code **)(*param_1 + 0x4d8))(param_1,uVar4);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142c09610 FUN_142c09610 body=305 status=ok
// SIG undefined FUN_142c09610(void)

bool FUN_142c09610(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float local_res8 [2];
  float local_res10 [2];
  undefined8 local_18;
  float local_10;
  
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    local_res8[0] = 0.0;
    local_res10[0] = 0.0;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x1c8) + 0x118);
    (**(code **)(*plVar1 + 0x578))(plVar1,local_res8,local_res10);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x178);
    if (lVar2 == 0) {
      local_18 = DAT_1466910d0;
      local_10 = DAT_1466910d8;
    }
    else {
      local_18 = *(undefined8 *)(lVar2 + 0x220);
      local_10 = *(float *)(lVar2 + 0x228) - *(float *)(lVar2 + 0x1e4);
    }
    fVar4 = (float)((ulonglong)local_18 >> 0x20) - *(float *)(param_1 + 0x284);
    fVar3 = (float)local_18 - *(float *)(param_1 + 0x280);
    if (fVar4 * fVar4 + fVar3 * fVar3 < local_res8[0] * local_res8[0]) {
      return local_res10[0] * 0.5 <= ABS(local_10 - *(float *)(param_1 + 0x288));
    }
  }
  return true;
}



// FUNCTION 142c09750 FUN_142c09750 body=12 status=ok
// SIG undefined FUN_142c09750(void)

void FUN_142c09750(longlong param_1)

{
  FUN_142ba0f50(*(undefined8 *)(param_1 + 0x488));
  return;
}



// FUNCTION 142c09760 HasReached body=146 status=ok
// SIG undefined HasReached(void)

void UPathFollowingComponent::HasReached(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  longlong local_18;
  undefined4 local_10;
  
  uVar1 = *(uint *)(param_2 + 4);
  bVar2 = ((byte)(uVar1 >> 6) & 1) * '\x02';
  bVar3 = bVar2 | 1;
  if ((uVar1 >> 5 & 1) == 0) {
    bVar3 = bVar2;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    if (*param_2 != 0) {
      FUN_142c09900(param_1,*param_2,bVar3,*(undefined4 *)((longlong)param_2 + 0x24),1);
      return;
    }
    return;
  }
  local_18 = param_2[1];
  local_10 = (undefined4)param_2[2];
  FUN_142c09800(param_1,&local_18,bVar3,*(undefined4 *)((longlong)param_2 + 0x24));
  return;
}



// FUNCTION 142c09800 FUN_142c09800 body=244 status=ok
// SIG undefined FUN_142c09800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c09800(longlong param_1,float param_2,byte param_3,float param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 local_28;
  float local_20;
  undefined8 local_18;
  float local_10;
  
  local_28 = _DAT_1468b5d90;
  local_20 = DAT_1468b5d98;
  if ((*(longlong *)(param_1 + 0x1c8) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x178), local_28 = DAT_1466910d0,
     local_20 = DAT_1466910d8, lVar1 != 0)) {
    param_2 = *(float *)(lVar1 + 0x228) - *(float *)(lVar1 + 0x1e4);
    local_28 = *(undefined8 *)(lVar1 + 0x220);
    local_20 = param_2;
  }
  if (param_4 == -1.0) {
    param_4 = *(float *)(param_1 + 0x1f8);
  }
  if ((param_3 & 0xfd) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x204);
  }
  local_18 = local_28;
  local_10 = local_20;
  FUN_142c0a600(uVar2,param_2,0,0,&local_28,param_4,uVar2);
  return;
}



// FUNCTION 142c09900 FUN_142c09900 body=1578 status=ok
// SIG undefined FUN_142c09900(void)

bool FUN_142c09900(longlong param_1,longlong param_2,byte param_3,float param_4,char param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
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
  float local_res8 [2];
  float local_res10 [2];
  float local_res18 [2];
  float local_res20;
  undefined8 local_168;
  float local_160;
  undefined8 local_158;
  float fStack_150;
  float fStack_14c;
  undefined8 local_148;
  float fStack_140;
  undefined4 uStack_13c;
  float local_138 [2];
  float local_130;
  float local_12c;
  float local_128;
  undefined4 uStack_10c;
  undefined4 uStack_fc;
  undefined4 uStack_ec;
  undefined4 uStack_dc;
  
  fVar10 = 0.0;
  lVar1 = *(longlong *)(param_2 + 0x168);
  local_130 = DAT_1468b5d90;
  local_12c = DAT_1468b5d94;
  local_128 = DAT_1468b5d98;
  local_res18[0] = 0.0;
  local_res8[0] = 0.0;
  if (lVar1 == 0) {
    local_168 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    local_160 = DAT_1468b5d98;
  }
  else {
    local_168 = *(undefined8 *)(lVar1 + 0x220);
    local_160 = *(float *)(lVar1 + 0x228);
  }
  local_158 = local_168;
  fStack_150 = local_160;
  local_res20 = param_4;
  if (param_4 == -1.0) {
    local_res20 = *(float *)(param_1 + 0x1f8);
  }
  uVar3 = UNavAgentInterface::GetPrivateStaticClass();
  plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_2,uVar3);
  if (plVar4 == (longlong *)0x0) {
    fVar10 = local_158._4_4_;
    fVar13 = fStack_150;
    fVar14 = (float)local_158;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x118);
    (**(code **)(*plVar4 + 0x28))(plVar4,&local_148,uVar3);
    (**(code **)(*plVar4 + 0x38))(plVar4,uVar3,&local_148,&local_130,local_res18,local_res8);
    if (param_5 == '\0') {
    }
    else {
      lVar1 = *(longlong *)(param_2 + 0x168);
      if (lVar1 == 0) {
        fVar13 = 0.0;
        fVar14 = 0.0;
        fVar6 = 1.0;
        fVar11 = 0.0;
      }
      else {
        fVar13 = *(float *)(lVar1 + 0x210);
        fVar14 = *(float *)(lVar1 + 0x214);
        fVar10 = *(float *)(lVar1 + 0x218);
        fVar6 = *(float *)(lVar1 + 0x21c);
        fVar11 = fVar6;
      }
      pfVar5 = (float *)(**(code **)(*plVar4 + 0x18))(plVar4,&local_168);
      uStack_dc = 0x3f800000;
      uStack_ec = 0;
      fVar7 = fVar14 + fVar14;
      uStack_10c = 0;
      fVar8 = fVar10 + fVar10;
      uStack_fc = 0;
      fVar9 = fVar13 * (fVar13 + fVar13);
      fVar12 = fVar6 * (fVar13 + fVar13);
      local_168 = 0;
      local_160 = 0.0;
      uStack_13c = 0x3f800000;
      local_158._0_4_ =
           *pfVar5 * 1.0 + local_128 * (fVar6 * fVar7 + fVar13 * fVar8) +
           local_12c * (fVar13 * fVar7 - fVar6 * fVar8) +
           local_130 * (1.0 - (fVar10 * fVar8 + fVar14 * fVar7));
      local_158._4_4_ =
           pfVar5[1] * 1.0 + local_128 * (fVar14 * fVar8 - fVar12) +
           local_12c * (1.0 - (fVar10 * fVar8 + fVar9)) +
           local_130 * (fVar6 * fVar8 + fVar13 * fVar7);
      fStack_150 = pfVar5[2] * 1.0 + local_128 * (1.0 - (fVar14 * fVar7 + fVar9)) +
                   local_12c * (fVar12 + fVar14 * fVar8) +
                   local_130 * (fVar13 * fVar8 - fVar6 * fVar7);
      fVar10 = local_158._4_4_;
      fVar13 = fStack_150;
      fVar14 = (float)local_158;
      fStack_14c = fVar11;
      if (1 < param_3) goto LAB_142c09d79;
      local_res18[0] = 0.0;
    }
    fVar10 = local_158._4_4_;
    fVar13 = fStack_150;
    fVar14 = (float)local_158;
    if (param_3 < 2) {
      local_res18[0] = 0.0;
    }
  }
LAB_142c09d79:
  fVar7 = local_res18[0];
  fVar11 = local_res8[0];
  fVar6 = 0.0;
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  if (lVar1 == 0) {
    local_158 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    fStack_150 = DAT_1468b5d98;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x178);
    if (lVar2 == 0) {
      local_160 = DAT_1466910d8;
      local_168 = DAT_1466910d0;
      local_158 = DAT_1466910d0;
      fStack_150 = DAT_1466910d8;
    }
    else {
      local_168 = *(undefined8 *)(lVar2 + 0x220);
      local_160 = *(float *)(lVar2 + 0x228) - *(float *)(lVar2 + 0x1e4);
      local_158 = local_168;
      fStack_150 = local_160;
    }
  }
  if ((param_3 & 0xfd) != 0) {
    fVar6 = *(float *)(param_1 + 0x204);
  }
  if (lVar1 != 0) {
    local_res10[0] = 0.0;
    local_138[0] = 0.0;
    local_148 = local_158;
    fStack_140 = fStack_150;
    (**(code **)(**(longlong **)(lVar1 + 0x118) + 0x578))
              (*(longlong **)(lVar1 + 0x118),local_res10,local_138);
    fVar6 = local_res10[0] * fVar6 + fVar7 + local_res20;
    if ((fVar10 - local_158._4_4_) * (fVar10 - local_158._4_4_) +
        (fVar14 - (float)local_158) * (fVar14 - (float)local_158) <= fVar6 * fVar6) {
      return ABS(fVar13 - fStack_150) <= local_138[0] * *(float *)(param_1 + 0x208) + fVar11;
    }
  }
  return false;
}



// FUNCTION 142c09f30 FUN_142c09f30 body=329 status=ok
// SIG undefined FUN_142c09f30(void)

ulonglong FUN_142c09f30(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  float local_38;
  float local_34;
  float local_30;
  undefined8 local_28;
  float local_20;
  float local_18;
  float local_14;
  float local_10;
  
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  FUN_1422e15c0(param_1 + 0x230,&local_38);
  FUN_142c00e60(param_1,&local_18);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x178);
  if (lVar1 == 0) {
    local_28 = DAT_1466910d0;
    local_20 = DAT_1466910d8;
  }
  else {
    local_28 = *(undefined8 *)(lVar1 + 0x220);
    local_20 = *(float *)(lVar1 + 0x228) - *(float *)(lVar1 + 0x1e4);
  }
  if ((local_38 - (float)local_28) * local_18 +
      (local_34 - (float)((ulonglong)local_28 >> 0x20)) * local_14 +
      (local_30 - local_20) * local_10 < 0.0) {
    return CONCAT71((uint7)(uint3)((uint)local_20 >> 8),1);
  }
  uVar2 = FUN_142c0a600(param_1,&local_38,0,0,param_2,*(undefined4 *)(param_1 + 0x200),0x3d4ccccd);
  return uVar2;
}



// FUNCTION 142c0a080 FUN_142c0a080 body=1407 status=ok
// SIG undefined FUN_142c0a080(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c0a080(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  float *pfVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 local_res8 [2];
  undefined4 local_res18 [2];
  float local_res20;
  undefined8 in_stack_fffffffffffffea0;
  undefined4 *puVar18;
  undefined4 uVar19;
  undefined8 local_148;
  float local_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  float local_120;
  undefined1 local_118 [12];
  undefined4 uStack_10c;
  undefined4 uStack_fc;
  undefined4 uStack_ec;
  undefined4 uStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  
  uVar19 = (undefined4)((ulonglong)in_stack_fffffffffffffea0 >> 0x20);
  uVar3 = FNavigationPath::GetPathPointLocation
                    (*(longlong *)(param_1 + 0x1e8),local_118,
                     *(int *)(*(longlong *)(param_1 + 0x1e8) + 0x30) + -1);
  FUN_1422e15c0(uVar3,&local_128);
  local_res8[0] = 0;
  local_res18[0] = 0;
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x220);
  if (((cVar2 != '\0') && ((*(uint *)(*(longlong *)(param_1 + 0x1e8) + 0x98) >> 2 & 1) == 0)) &&
     ((*(byte *)(param_1 + 0x2a0) & 4) != 0)) {
    plVar1 = *(longlong **)(param_1 + 0x228);
    if (plVar1 == (longlong *)0x0) {
      lVar4 = FWeakObjectPtr::Get(param_1 + 0x220);
      lVar4 = *(longlong *)(lVar4 + 0x168);
      if (lVar4 == 0) {
        local_148 = _DAT_1468b5d90;
        local_140 = DAT_1468b5d98;
        local_128 = local_148;
        local_120 = local_140;
      }
      else {
        local_128 = *(undefined8 *)(lVar4 + 0x220);
        local_120 = *(float *)(lVar4 + 0x228);
      }
    }
    else {
      puVar18 = local_res18;
      (**(code **)(*plVar1 + 0x38))
                (plVar1,*(undefined8 *)(param_1 + 0x118),param_1 + 0x274,&local_148,local_res8,
                 puVar18);
      uVar19 = (undefined4)((ulonglong)puVar18 >> 0x20);
      lVar4 = FWeakObjectPtr::Get(param_1 + 0x220);
      lVar4 = *(longlong *)(lVar4 + 0x168);
      if (lVar4 == 0) {
        fVar9 = 0.0;
        fVar12 = 0.0;
        fVar13 = 0.0;
        fVar14 = 1.0;
        fVar15 = 0.0;
      }
      else {
        fVar9 = *(float *)(lVar4 + 0x210);
        fVar12 = *(float *)(lVar4 + 0x214);
        fVar13 = *(float *)(lVar4 + 0x218);
        fVar14 = *(float *)(lVar4 + 0x21c);
        fVar15 = fVar14;
      }
      pfVar5 = (float *)(**(code **)(**(longlong **)(param_1 + 0x228) + 0x18))
                                  (*(longlong **)(param_1 + 0x228),&local_138);
      uStack_dc = 0x3f800000;
      uStack_ec = 0;
      fVar10 = fVar13 + fVar13;
      uStack_10c = 0;
      uStack_fc = 0;
      fVar8 = fVar12 + fVar12;
      fVar11 = fVar9 * (fVar9 + fVar9);
      fVar16 = fVar14 * (fVar9 + fVar9);
      local_d8 = fVar12 * fVar10;
      local_c8 = fVar14 * fVar10 + fVar9 * fVar8;
      local_res20 = 1.0 - (fVar12 * fVar8 + fVar11);
      local_138 = (float)local_148;
      fStack_134 = local_148._4_4_;
      uStack_12c = 0x3f800000;
      fStack_130 = pfVar5[2] * 1.0 + local_140 * local_res20 +
                   local_148._4_4_ * (fVar16 + local_d8) +
                   (float)local_148 * (fVar9 * fVar10 - fVar14 * fVar8);
      local_128 = CONCAT44(pfVar5[1] * 1.0 + local_140 * (local_d8 - fVar16) +
                           local_148._4_4_ * (1.0 - (fVar13 * fVar10 + fVar11)) +
                           (float)local_148 * local_c8,
                           *pfVar5 * 1.0 + local_140 * (fVar14 * fVar8 + fVar9 * fVar10) +
                           local_148._4_4_ * (fVar9 * fVar8 - fVar14 * fVar10) +
                           (float)local_148 * (1.0 - (fVar13 * fVar10 + fVar12 * fVar8)));
      local_120 = fStack_130;
      fStack_d4 = fVar12;
      fStack_d0 = fVar12;
      fStack_cc = fVar12;
      fStack_c4 = fVar15;
      fStack_c0 = fVar15;
      fStack_bc = fVar15;
    }
  }
  local_140 = *(float *)(param_1 + 0x294);
  lVar4 = *(longlong *)(param_1 + 0x1e8);
  uVar3 = *(undefined8 *)(param_1 + 0x28c);
  if ((*(uint *)(lVar4 + 0x98) >> 2 & 1) == 0) {
    fVar9 = *(float *)(param_1 + 0x1fc);
  }
  else {
    if (*(int *)(lVar4 + 0x30) < 1) {
      puVar6 = &DAT_1466910d0;
    }
    else {
      puVar6 = (undefined8 *)
               ((longlong)(*(int *)(lVar4 + 0x30) + -1) * 0x20 + *(longlong *)(lVar4 + 0x28));
    }
    local_148._0_4_ = (float)uVar3;
    local_148._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
    local_148._0_4_ = (float)local_148 - (float)*puVar6;
    fStack_130 = *(float *)(puVar6 + 1);
    local_148._4_4_ = local_148._4_4_ - (float)((ulonglong)*puVar6 >> 0x20);
    fVar9 = *(float *)(param_1 + 0x1fc) -
            SQRT(local_148._4_4_ * local_148._4_4_ + (float)local_148 * (float)local_148 +
                 (local_140 - fStack_130) * (local_140 - fStack_130));
    if (fVar9 <= *(float *)(param_1 + 0x1f8)) {
      fVar9 = *(float *)(param_1 + 0x1f8);
    }
  }
  if ((*(uint *)(param_1 + 0x2a0) & 1) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined4 *)(param_1 + 0x204);
  }
  uVar17 = 0;
  if ((*(uint *)(param_1 + 0x2a0) & 2) != 0) {
    uVar17 = local_res8[0];
  }
  local_148 = uVar3;
  FUN_142c0a600(param_1,&local_128,uVar17,local_res18[0],param_2,CONCAT44(uVar19,fVar9),uVar7);
  return;
}



// FUNCTION 142c0a600 FUN_142c0a600 body=232 status=ok
// SIG undefined FUN_142c0a600(void)

undefined8
FUN_142c0a600(longlong param_1,float *param_2,float param_3,float param_4,float *param_5,
             float param_6,float param_7)

{
  longlong *plVar1;
  float fVar2;
  float local_res8 [2];
  float local_38 [12];
  
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    local_res8[0] = 0.0;
    local_38[0] = 0.0;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x1c8) + 0x118);
    (**(code **)(*plVar1 + 0x578))(plVar1,local_res8,local_38);
    fVar2 = local_res8[0] * param_7 + param_3 + param_6;
    if (((param_2[1] - param_5[1]) * (param_2[1] - param_5[1]) +
         (*param_2 - *param_5) * (*param_2 - *param_5) <= fVar2 * fVar2) &&
       (ABS(param_2[2] - param_5[2]) <= local_38[0] * *(float *)(param_1 + 0x208) + param_4)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142c0a6f0 Init body=497 status=ok
// SIG undefined Init(void)

undefined8 TSimpleCellGrid<unsigned_char,255>::Init(int *param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  int local_28;
  
  if ((0.0 < param_2) && (*(char *)(param_3 + 6) != '\0')) {
    param_1[1] = (int)param_2;
    local_28 = CONCAT31(local_28._1_3_,1);
    *param_1 = (int)param_2;
    fVar1 = param_3[5];
    fVar2 = param_3[2];
    fVar7 = (param_3[3] - *param_3) * (1.0 / param_2);
    uVar4 = -((int)ROUND(-0.5 - (fVar7 + fVar7)) >> 1);
    fVar7 = (param_3[4] - param_3[1]) * (1.0 / param_2);
    *(ulonglong *)(param_1 + 0xf) = CONCAT44(-((int)ROUND(-0.5 - (fVar7 + fVar7)) >> 1),uVar4);
    *(ulonglong *)(param_1 + 0xc) =
         CONCAT44((float)(uint)param_1[0x10] * param_2,(float)uVar4 * param_2);
    param_1[0xe] = (int)(fVar1 - fVar2);
    fVar1 = param_3[5];
    fVar2 = param_3[2];
    *(undefined8 *)(param_1 + 9) = *(undefined8 *)param_3;
    param_1[0xb] = (int)((fVar1 + fVar2) * 0.5);
    param_1[2] = param_1[9];
    param_1[3] = param_1[10];
    param_1[4] = (int)((float)param_1[0xb] - (float)param_1[0xe] * 0.5);
    param_1[5] = (int)((float)param_1[9] + (float)param_1[0xc]);
    *(ulonglong *)(param_1 + 6) =
         CONCAT44((float)param_1[0xb] + (float)param_1[0xe] * 0.5,
                  (float)param_1[10] + (float)param_1[0xd]);
    param_1[8] = local_28;
    iVar3 = param_1[0x14];
    iVar6 = param_1[0x10] * uVar4;
    iVar5 = iVar3 + iVar6;
    param_1[0x14] = iVar5;
    if (param_1[0x15] < iVar5) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0x12);
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar3 + *(longlong *)(param_1 + 0x12)),0,(longlong)iVar6);
    return 1;
  }
  return 0;
}



// FUNCTION 142c0a8f0 FUN_142c0a8f0 body=403 status=ok
// SIG undefined FUN_142c0a8f0(void)

void FUN_142c0a8f0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  undefined4 uStack_c;
  
  (**(code **)(*param_1 + 0x408))();
  if (*(int *)((longlong)param_1 + 0x2cc) < (int)param_1[0x56]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo();
  }
  if ((*(char *)((longlong)param_1 + 0x399) != '\x02') &&
     (FUN_142c0e540(param_1), (*(byte *)((longlong)param_1 + 0x37c) & 0x10) == 0)) {
    lVar4 = param_1[0x24];
    if (lVar4 == 0) {
      lVar4 = FUN_1423407b0(param_1);
    }
    if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x138), lVar4 != 0)) {
      lVar5 = FUN_142ba9430();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && ((*(byte *)(lVar4 + 0x39a) & 8) == 0)) {
        plVar1 = (longlong *)(lVar4 + 0x108);
        plVar6 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar6 == (longlong *)0x0) {
          return;
        }
        *plVar6 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar6 + 1,param_1);
        *(undefined4 *)(plVar6 + 2) = 0x40fefd70;
        *(undefined4 *)((longlong)plVar6 + 0x14) = 1;
        *(undefined4 *)(plVar6 + 3) = 0;
        *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_c;
        lVar5 = FDelegateHandle::GenerateNewID();
        plVar6[5] = lVar5;
        *plVar6 = (longlong)&PTR_FUN_143f77bd0;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
        (**(code **)(*plVar6 + 0x20))(plVar6,local_res8);
        iVar2 = *(int *)(lVar4 + 0x110);
        *(int *)(lVar4 + 0x110) = iVar2 + 1;
        if (*(int *)(lVar4 + 0x114) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
        }
        puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
        *puVar7 = plVar6;
        *(undefined4 *)(puVar7 + 1) = 3;
        return;
      }
    }
    *(undefined1 *)((longlong)param_1 + 0x399) = 2;
    return;
  }
  return;
}



// FUNCTION 142c0aa90 FUN_142c0aa90 body=62 status=ok
// SIG undefined FUN_142c0aa90(void)

void FUN_142c0aa90(longlong *param_1)

{
  longlong lVar1;
  
  (**(code **)(*param_1 + 0x408))();
  if (*(int *)((longlong)param_1 + 0x2cc) < (int)param_1[0x56]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo();
  }
  lVar1 = FUN_142c00de0(param_1);
  param_1[0x6a] = lVar1;
  return;
}



// FUNCTION 142c0aad0 FUN_142c0aad0 body=52 status=ok
// SIG undefined FUN_142c0aad0(void)

void FUN_142c0aad0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x408))();
  if (*(int *)((longlong)param_1 + 0x2cc) < (int)param_1[0x56]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo();
    return;
  }
  return;
}



// FUNCTION 142c0ab10 IsA body=42 status=ok
// SIG undefined IsA(void)

undefined8 FNavPathType::IsA(int *param_1,int *param_2)

{
  char cVar1;
  
  if (*param_1 == *param_2) {
    return 1;
  }
  if ((*(longlong *)(param_1 + 2) != 0) && (cVar1 = IsA(), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 142c0ab40 IsAngleAllowed body=165 status=ok
// SIG undefined IsAngleAllowed(void)

bool UEnvQueryGenerator_Donut::IsAngleAllowed
               (undefined8 param_1,float param_2,float param_3,float param_4,char param_5)

{
  float fVar1;
  
  if (param_5 != '\0') {
    param_3 = param_2 * 57.295776 - param_3;
    fVar1 = (float)(int)(param_3 * 0.0027777778) * 360.0;
    if (ABS(param_3) < ABS(fVar1)) {
      fVar1 = param_3;
    }
    param_3 = param_3 - fVar1;
    if (param_3 < 0.0) {
      param_3 = param_3 + 360.0;
    }
    if (180.0 < param_3) {
      param_3 = param_3 - 360.0;
    }
    return ABS(param_3) - 0.01 < param_4;
  }
  return true;
}



// FUNCTION 142c0abf0 FUN_142c0abf0 body=343 status=ok
// SIG undefined FUN_142c0abf0(void)

undefined8 FUN_142c0abf0(longlong param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 local_58 [80];
  
  iVar2 = *(int *)(param_1 + 0x2c8);
  if ((iVar2 == *(int *)(param_1 + 0x2b0)) && (0 < *(int *)(param_1 + 0x2b0))) {
    iVar4 = 0;
    iVar5 = 0;
    fVar1 = *(float *)(param_1 + 0x2a8);
    fVar10 = DAT_1468b5d90;
    fVar11 = DAT_1468b5d94;
    fVar12 = DAT_1468b5d98;
    if (0 < iVar2) {
      do {
        pfVar3 = (float *)FUN_1422e15c0((longlong)iVar5 * 0x38 + *(longlong *)(param_1 + 0x2c0),
                                        local_58);
        iVar5 = iVar5 + 1;
        fVar10 = fVar10 + *pfVar3;
        fVar11 = fVar11 + pfVar3[1];
        fVar12 = fVar12 + pfVar3[2];
        iVar2 = *(int *)(param_1 + 0x2c8);
      } while (iVar5 < iVar2);
    }
    fVar7 = 1.0 / (float)iVar2;
    if (0 < iVar2) {
      do {
        pfVar3 = (float *)FUN_1422e15c0((longlong)iVar4 * 0x38 + *(longlong *)(param_1 + 0x2c0),
                                        local_58);
        fVar9 = fVar11 * fVar7 - pfVar3[1];
        fVar8 = fVar10 * fVar7 - *pfVar3;
        fVar6 = fVar12 * fVar7 - pfVar3[2];
        if (fVar1 * fVar1 < fVar9 * fVar9 + fVar8 * fVar8 + fVar6 * fVar6) {
          return 0;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x2c8));
    }
    return 1;
  }
  return 0;
}



// FUNCTION 142c0ad50 FUN_142c0ad50 body=60 status=ok
// SIG undefined FUN_142c0ad50(void)

undefined1 FUN_142c0ad50(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_142c46ed0();
  lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x1e0) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 142c0adb0 FUN_142c0adb0 body=220 status=ok
// SIG undefined FUN_142c0adb0(void)

undefined8 FUN_142c0adb0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_28 [16];
  undefined8 local_18;
  
  if (*(char *)(param_1 + 0x399) == '\0') {
    return 1;
  }
  lVar3 = *(longlong *)(param_1 + 0x1e8);
  if (lVar3 == 0) {
    return 0;
  }
  if ((*(uint *)(lVar3 + 0x98) & 2) == 0) {
    return 0;
  }
  if (1 < *(int *)(lVar3 + 0x30)) {
    if ((*(uint *)(lVar3 + 0x98) & 1) == 0) {
      return 0;
    }
    lVar3 = FWeakObjectPtr::Get(lVar3 + 0x9c);
    if (lVar3 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x1e8);
      if ((*(int *)(lVar3 + 0x70) == DAT_146b2bc20) ||
         ((*(longlong *)(lVar3 + 0x78) != 0 &&
          (cVar2 = FNavPathType::IsA(*(longlong *)(lVar3 + 0x78),&DAT_146b2bc20), cVar2 != '\0'))))
      {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      lVar4 = 0;
      if (bVar1) {
        lVar4 = lVar3;
      }
      if (lVar4 == 0) {
        return 1;
      }
      FUN_142c01010(param_1,local_28);
      uVar5 = (**(code **)(**(longlong **)(param_1 + 0x1e8) + 0x28))
                        (*(longlong **)(param_1 + 0x1e8),local_18);
      return uVar5;
    }
    return 0;
  }
  return 0;
}



// FUNCTION 142c0ae90 FUN_142c0ae90 body=199 status=ok
// SIG undefined FUN_142c0ae90(void)

ulonglong FUN_142c0ae90(longlong param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  ulonglong in_RAX;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 local_28 [16];
  undefined8 local_18;
  
  lVar4 = *(longlong *)(param_1 + 0x1e8);
  if (lVar4 == 0) {
LAB_142c0af4f:
    return in_RAX & 0xffffffffffffff00;
  }
  uVar1 = *(uint *)(lVar4 + 0x98);
  in_RAX = (ulonglong)uVar1;
  if ((((uVar1 & 2) == 0) || (*(int *)(lVar4 + 0x30) < 2)) || ((uVar1 & 1) == 0))
  goto LAB_142c0af4f;
  lVar4 = FWeakObjectPtr::Get(lVar4 + 0x9c);
  in_RAX = 0;
  if (lVar4 == 0) goto LAB_142c0af4f;
  lVar4 = *(longlong *)(param_1 + 0x1e8);
  if (*(int *)(lVar4 + 0x70) == DAT_146b2bc20) {
LAB_142c0af0e:
    bVar2 = true;
  }
  else {
    if (*(longlong *)(lVar4 + 0x78) != 0) {
      cVar3 = FNavPathType::IsA(*(longlong *)(lVar4 + 0x78),&DAT_146b2bc20);
      if (cVar3 != '\0') goto LAB_142c0af0e;
    }
    bVar2 = false;
  }
  lVar5 = 0;
  if (bVar2) {
    lVar5 = lVar4;
  }
  if (lVar5 != 0) {
    FUN_142c01010(param_1,local_28);
                    /* WARNING: Could not recover jumptable at 0x000142c0af43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0x1e8) + 0x28))
                      (*(longlong **)(param_1 + 0x1e8),local_18);
    return uVar6;
  }
  return 1;
}



// FUNCTION 142c0af60 FUN_142c0af60 body=43 status=ok
// SIG undefined FUN_142c0af60(void)

undefined8 FUN_142c0af60(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0x1c8) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x548))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142c0afa0 FUN_142c0afa0 body=17 status=ok
// SIG undefined FUN_142c0afa0(void)

byte FUN_142c0afa0(longlong param_1)

{
  return *(byte *)(*(longlong *)(param_1 + 0x488) + 0x1e4) & 1;
}



// FUNCTION 142c0afc0 FUN_142c0afc0 body=192 status=ok
// SIG undefined FUN_142c0afc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c0afc0(longlong param_1,undefined4 param_2)

{
  short sVar1;
  undefined8 uVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b2c898) {
    _Init_thread_header(&DAT_146b2c898);
    if (DAT_146b2c898 == -1) {
      uVar2 = UEnum::GetPrivateStaticClass();
      _DAT_146b2c890 = FUN_141799410(uVar2,0xffffffffffffffff,L"EAILockSource");
      _Init_thread_footer(&DAT_146b2c898);
    }
  }
  sVar1 = *(short *)(param_1 + 0x188);
  FAIResourceLock::SetLock((short *)(param_1 + 0x188),param_2);
  if (sVar1 == 0) {
    (**(code **)(*(longlong *)(param_1 + -0x178) + 0x438))
              ((longlong *)(param_1 + -0x178),*(undefined4 *)(param_1 + 0x1b0),0);
  }
  return;
}



// FUNCTION 142c0b080 MarkBoxObstacle body=1988 status=ok
// SIG undefined MarkBoxObstacle(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FNavLocalGridData::MarkBoxObstacle
               (longlong param_1,float *param_2,float *param_3,float *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float *pfVar3;
  undefined4 in_EAX;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
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
  int local_e8;
  float *local_e0;
  undefined8 local_d8;
  
  auVar1._4_4_ = -(uint)(1e-08 < (float)((uint)(param_4[1] - DAT_1464aa814) & uRam0000000146b2c834))
  ;
  auVar1._0_4_ = -(uint)(1e-08 < (float)((uint)(*param_4 - DAT_1464aa810) & _DAT_146b2c830));
  auVar1._8_4_ = -(uint)(1e-08 < (float)((uint)(param_4[2] - DAT_1464aa818) & uRam0000000146b2c838))
  ;
  auVar1._12_4_ =
       -(uint)(1e-08 < (float)((uint)(param_4[3] - DAT_1464aa81c) & uRam0000000146b2c83c));
  iVar4 = movmskps(in_EAX,auVar1);
  if ((iVar4 == 0) ||
     (auVar2._4_4_ = -(uint)(1e-08 < (float)((uint)(DAT_1464aa814 + param_4[1]) &
                                            uRam0000000146b2c834)),
     auVar2._0_4_ = -(uint)(1e-08 < (float)((uint)(DAT_1464aa810 + *param_4) & _DAT_146b2c830)),
     auVar2._8_4_ = -(uint)(1e-08 < (float)((uint)(DAT_1464aa818 + param_4[2]) &
                                           uRam0000000146b2c838)),
     auVar2._12_4_ =
          -(uint)(1e-08 < (float)((uint)(DAT_1464aa81c + param_4[3]) & uRam0000000146b2c83c)),
     iVar4 = movmskps(iVar4,auVar2), iVar4 == 0)) {
    iVar11 = 0;
    fVar21 = 1.0 / *(float *)(param_1 + 4);
    iVar9 = *(int *)(param_1 + 0x40) + -1;
    iVar10 = (int)(((*param_2 - *param_3) - *(float *)(param_1 + 0x24)) * fVar21);
    iVar7 = (int)(((param_2[1] - param_3[1]) - *(float *)(param_1 + 0x28)) * fVar21);
    iVar4 = iVar11;
    if ((-1 < iVar7) && (iVar4 = iVar9, iVar7 < iVar9)) {
      iVar4 = iVar7;
    }
    iVar5 = *(int *)(param_1 + 0x3c) + -1;
    iVar7 = iVar11;
    if ((-1 < iVar10) && (iVar7 = iVar5, iVar10 < iVar5)) {
      iVar7 = iVar10;
    }
    iVar8 = (int)(((param_3[1] + param_2[1]) - *(float *)(param_1 + 0x28)) * fVar21);
    iVar6 = (int)(((*param_3 + *param_2) - *(float *)(param_1 + 0x24)) * fVar21);
    iVar10 = iVar11;
    if ((-1 < iVar8) && (iVar10 = iVar9, iVar8 < iVar9)) {
      iVar10 = iVar8;
    }
    if ((-1 < iVar6) && (iVar11 = iVar5, iVar6 < iVar5)) {
      iVar11 = iVar6;
    }
    for (; iVar9 = iVar4, iVar7 <= iVar11; iVar7 = iVar7 + 1) {
      for (; iVar9 <= iVar10; iVar9 = iVar9 + 1) {
        *(undefined1 *)
         ((longlong)(*(int *)(param_1 + 0x40) * iVar7 + iVar9) + *(longlong *)(param_1 + 0x48)) = 1;
      }
    }
  }
  else {
    fVar21 = param_3[1];
    fVar22 = *param_4;
    fVar23 = *param_3;
    fVar13 = param_4[3];
    fVar14 = param_4[2];
    local_d8 = 1;
    fVar17 = param_4[1];
    fVar20 = fVar17 * param_3[2] - fVar21 * fVar14;
    local_e0 = (float *)0x0;
    fVar20 = fVar20 + fVar20;
    fVar18 = fVar14 * fVar23 - fVar22 * param_3[2];
    fVar15 = fVar21 * fVar22 - fVar17 * fVar23;
    fVar18 = fVar18 + fVar18;
    fVar15 = fVar15 + fVar15;
    fVar19 = *param_2;
    fVar16 = param_2[1];
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_e0);
    *local_e0 = (fVar17 * fVar15 - fVar14 * fVar18) + fVar13 * fVar20 + fVar23 + fVar19;
    local_e0[1] = (fVar14 * fVar20 - fVar22 * fVar15) + fVar13 * fVar18 + fVar21 + fVar16;
    fVar21 = param_3[1];
    fVar20 = -*param_3;
    fVar22 = param_4[1];
    fVar23 = param_4[2];
    fVar13 = *param_4;
    fVar14 = param_4[3];
    fVar18 = fVar22 * param_3[2] - fVar21 * fVar23;
    fVar18 = fVar18 + fVar18;
    fVar15 = fVar20 * fVar23 - fVar13 * param_3[2];
    fVar16 = fVar21 * fVar13 - fVar20 * fVar22;
    fVar15 = fVar15 + fVar15;
    fVar16 = fVar16 + fVar16;
    lVar12 = (longlong)(int)local_d8;
    local_d8._0_4_ = (int)local_d8 + 1;
    fVar17 = *param_2;
    fVar19 = param_2[1];
    iVar4 = (int)local_d8;
    if (local_d8._4_4_ < (int)local_d8) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_e0);
      iVar4 = (int)local_d8;
    }
    local_e0[lVar12 * 2] = (fVar22 * fVar16 - fVar23 * fVar15) + fVar14 * fVar18 + fVar20 + fVar17;
    local_e0[lVar12 * 2 + 1] =
         (fVar23 * fVar18 - fVar13 * fVar16) + fVar14 * fVar15 + fVar21 + fVar19;
    local_d8._0_4_ = iVar4 + 1;
    fVar21 = param_4[2];
    fVar22 = param_4[1];
    fVar15 = -*param_3;
    fVar23 = *param_4;
    fVar13 = param_4[3];
    fVar18 = -param_3[1];
    fVar20 = fVar22 * param_3[2] - fVar21 * fVar18;
    fVar20 = fVar20 + fVar20;
    fVar16 = fVar15 * fVar21 - fVar23 * param_3[2];
    fVar19 = fVar23 * fVar18 - fVar15 * fVar22;
    fVar16 = fVar16 + fVar16;
    fVar19 = fVar19 + fVar19;
    fVar14 = param_2[1];
    fVar17 = *param_2;
    iVar11 = (int)local_d8;
    if (local_d8._4_4_ < (int)local_d8) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_e0);
      iVar11 = (int)local_d8;
    }
    iVar10 = iVar11 + 1;
    local_d8 = CONCAT44(local_d8._4_4_,iVar10);
    local_e0[(longlong)iVar4 * 2 + 1] =
         (fVar20 * fVar21 - fVar19 * fVar23) + fVar13 * fVar16 + fVar18 + fVar14;
    local_e0[(longlong)iVar4 * 2] =
         (fVar19 * fVar22 - fVar21 * fVar16) + fVar20 * fVar13 + fVar15 + fVar17;
    fVar21 = param_4[2];
    fVar22 = param_4[1];
    fVar23 = *param_4;
    fVar13 = *param_3;
    fVar14 = param_4[3];
    fVar18 = -param_3[1];
    fVar20 = fVar22 * param_3[2] - fVar21 * fVar18;
    fVar20 = fVar20 + fVar20;
    fVar15 = fVar21 * fVar13 - fVar23 * param_3[2];
    fVar16 = fVar23 * fVar18 - fVar22 * fVar13;
    fVar15 = fVar15 + fVar15;
    fVar16 = fVar16 + fVar16;
    fVar17 = *param_2;
    fVar19 = param_2[1];
    if (local_d8._4_4_ < iVar10) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_e0);
      iVar10 = (int)local_d8;
    }
    pfVar3 = local_e0;
    local_e8 = 0;
    local_e0[(longlong)iVar11 * 2] =
         (fVar22 * fVar16 - fVar21 * fVar15) + fVar20 * fVar14 + fVar13 + fVar17;
    local_e0[(longlong)iVar11 * 2 + 1] =
         (fVar20 * fVar21 - fVar23 * fVar16) + fVar14 * fVar15 + fVar18 + fVar19;
    if (0 < *(int *)(param_1 + 0x3c)) {
      iVar4 = *(int *)(param_1 + 0x40);
      do {
        iVar11 = 0;
        if (0 < iVar4) {
          iVar7 = iVar4;
          do {
            lVar12 = 0;
            fVar22 = 0.0;
            fVar23 = *(float *)(param_1 + 4) * ((float)local_e8 + 0.5) + *(float *)(param_1 + 0x24);
            fVar21 = ((float)iVar11 + 0.5) * *(float *)(param_1 + 4) + *(float *)(param_1 + 0x28);
            if (0 < iVar10) {
              iVar9 = 0;
              do {
                iVar9 = iVar9 + 1;
                fVar16 = pfVar3[lVar12 * 2] - fVar23;
                fVar17 = pfVar3[lVar12 * 2 + 1] - fVar21;
                fVar19 = pfVar3[(longlong)(iVar9 % iVar10) * 2] - fVar23;
                fVar14 = pfVar3[(longlong)(iVar9 % iVar10) * 2 + 1] - fVar21;
                fVar13 = fVar16 * fVar14 - fVar17 * fVar19;
                if (fVar13 <= 0.0) {
                  if (0.0 <= fVar13) {
                    fVar13 = 0.0;
                  }
                  else {
                    fVar13 = -1.0;
                  }
                }
                else {
                  fVar13 = 1.0;
                }
                fVar14 = (fVar17 * fVar14 + fVar16 * fVar19) /
                         SQRT((fVar14 * fVar14 + fVar19 * fVar19) *
                              (fVar17 * fVar17 + fVar16 * fVar16));
                if (-1.0 <= fVar14) {
                  if (1.0 <= fVar14) {
                    fVar14 = 1.0;
                  }
                  fVar17 = -1.0;
                  if (-1.0 <= fVar14) goto LAB_142c0b641;
                }
                else {
                  fVar14 = -1.0;
LAB_142c0b641:
                  fVar17 = fVar14;
                  if (1.0 <= fVar14) {
                    fVar17 = 1.0;
                  }
                }
                fVar14 = ::_guard_xfg_dispatch_icall_nop(fVar17);
                lVar12 = lVar12 + 1;
                fVar22 = fVar22 + fVar14 * fVar13;
                iVar7 = iVar4;
              } while (lVar12 < iVar10);
            }
            if (0.001 < ABS(fVar22)) {
              *(undefined1 *)((longlong)(local_e8 * iVar7 + iVar11) + *(longlong *)(param_1 + 0x48))
                   = 1;
              iVar4 = *(int *)(param_1 + 0x40);
              iVar7 = iVar4;
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < iVar7);
        }
        local_e8 = local_e8 + 1;
      } while (local_e8 < *(int *)(param_1 + 0x3c));
    }
    if (pfVar3 != (float *)0x0) {
      FMemory::Free(pfVar3);
    }
  }
  return;
}



// FUNCTION 142c0b850 FUN_142c0b850 body=230 status=ok
// SIG undefined FUN_142c0b850(void)

void FUN_142c0b850(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  if (param_3 != 0) {
    lVar2 = FUN_142c46ed0();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar2 = *(longlong *)(param_3 + 0x118);
      if (lVar2 != 0) {
        lVar3 = FUN_14291fb80();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          lVar2 = *(longlong *)(lVar2 + 0x488);
        }
      }
      FUN_142c44190(param_1,lVar2,param_4);
      local_20 = *param_4;
      local_18 = *(undefined4 *)(param_4 + 1);
      local_28 = lVar2;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x498,&local_28);
    }
  }
  return;
}



// FUNCTION 142c0b940 FUN_142c0b940 body=87 status=ok
// SIG undefined FUN_142c0b940(void)

void FUN_142c0b940(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  
  if (((*(longlong *)(param_1 + 0x1e8) != 0) &&
      (cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x220), cVar2 != '\0')) &&
     (lVar1 = FWeakObjectPtr::Get(param_1 + 0x220), lVar1 == param_3)) {
    *(uint *)(param_1 + 0x2a0) = *(uint *)(param_1 + 0x2a0) | 0x10;
  }
  return;
}



// FUNCTION 142c0b9a0 FUN_142c0b9a0 body=104 status=ok
// SIG undefined FUN_142c0b9a0(void)

void FUN_142c0b9a0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *(uint *)(param_1 + 0x1fc) = *(uint *)(param_1 + 0x1fc) & 0xffffbfff;
  lVar1 = param_1 + -0x180;
  lVar2 = *(longlong *)(param_1 + -0x60);
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0(lVar1);
  }
  lVar2 = UCrowdManager::GetCurrent(lVar2);
  if (((*(char *)(param_1 + 0x219) == '\0') && (lVar2 != 0)) && (lVar1 != 0)) {
    uVar3 = UCrowdAgentInterface::GetPrivateStaticClass();
    UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar3);
  }
  return;
}



// FUNCTION 142c0ba10 FUN_142c0ba10 body=429 status=ok
// SIG undefined FUN_142c0ba10(void)

void FUN_142c0ba10(longlong param_1,longlong *param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    return;
  }
  cVar3 = (**(code **)(*param_2 + 0x738))(param_2,*(longlong *)(param_1 + 0x1c8) + 0x1c0);
  if (cVar3 == '\0') {
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x120);
  *(longlong **)(param_1 + 0x1d8) = param_2;
  if (lVar4 == 0) {
    lVar4 = FUN_1423407b0(param_1);
  }
  if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x138), lVar4 != 0)) {
    lVar5 = FUN_142ba9430();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_142c0bac2;
  }
  lVar4 = 0;
LAB_142c0bac2:
  plVar10 = (longlong *)(lVar4 + 0xe8);
  iVar8 = *(int *)(lVar4 + 0xf0) + -1;
  if (-1 < iVar8) {
    lVar11 = (longlong)iVar8 << 4;
    lVar5 = lVar11;
    do {
      lVar9 = *plVar10 + lVar11;
      lVar6 = FWeakObjectPtr::Get(lVar9);
      if (param_1 == lVar6) {
LAB_142c0bb43:
        iVar1 = *(int *)(lVar4 + 0xf0);
        iVar7 = (iVar1 - iVar8) + -1;
        if (0 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar5 + *plVar10),
                     (void *)((longlong)(iVar1 - iVar7) * 0x10 + *plVar10),(longlong)iVar7 << 4);
          iVar1 = *(int *)(lVar4 + 0xf0);
        }
        *(int *)(lVar4 + 0xf0) = iVar1 + -1;
        TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar10);
      }
      else {
        if ((*(longlong *)(lVar9 + 8) == 0) || (lVar6 = FWeakObjectPtr::Get(lVar9,1), lVar6 == 0)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) goto LAB_142c0bb43;
      }
      lVar5 = lVar5 + -0x10;
      lVar11 = lVar11 + -0x10;
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
  }
  return;
}



// FUNCTION 142c0bbc0 FUN_142c0bbc0 body=256 status=ok
// SIG undefined FUN_142c0bbc0(void)

void FUN_142c0bbc0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if ((*(char *)((longlong)param_1 + 0x399) == '\0') && ((int)param_1[0x3c] != 0)) {
    lVar1 = param_1[0x3d];
    if (lVar1 != 0) {
      if ((*(int *)(lVar1 + 0x70) == DAT_146b2bc20) ||
         ((*(longlong *)(lVar1 + 0x78) != 0 &&
          (cVar3 = FNavPathType::IsA(*(longlong *)(lVar1 + 0x78),&DAT_146b2bc20), cVar3 != '\0'))))
      {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      lVar5 = 0;
      if (bVar2) {
        lVar5 = lVar1;
      }
      if (lVar5 != 0) {
        uVar7 = (ulonglong)*(int *)((longlong)param_1 + 0x394);
        if (*(int *)((longlong)param_1 + 0x394) < *(int *)(lVar5 + 0x100)) {
          plVar6 = (longlong *)(*(longlong *)(lVar5 + 0xf8) + uVar7 * 8);
          uVar8 = uVar7;
          do {
            if (*plVar6 == param_2) {
              *(int *)((longlong)param_1 + 0x394) = (int)uVar8;
              break;
            }
            uVar8 = (ulonglong)((int)uVar8 + 1);
            uVar7 = uVar7 + 1;
            plVar6 = plVar6 + 1;
          } while ((longlong)uVar7 < (longlong)*(int *)(lVar5 + 0x100));
        }
      }
    }
    if ((param_4 < 3) && ((*(uint *)((longlong)param_1 + 0x37c) & 0x2000) == 0)) {
      uVar4 = (**(code **)(*param_1 + 0x518))(param_1,0);
      (**(code **)(*param_1 + 0x4d8))(param_1,uVar4);
    }
  }
  return;
}



// FUNCTION 142c0bcc0 FUN_142c0bcc0 body=212 status=ok
// SIG undefined FUN_142c0bcc0(void)

void FUN_142c0bcc0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1[0x24];
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0();
  }
  if ((param_1[0x39] == 0) || (lVar2 == 0)) goto LAB_142c0bd63;
  lVar2 = *(longlong *)(lVar2 + 0x138);
  if (lVar2 == 0) {
LAB_142c0bd30:
    lVar2 = 0;
  }
  else {
    lVar3 = FUN_142ba9430();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_142c0bd30;
  }
  lVar3 = thunk_FUN_142b8f070(lVar2,param_1[0x39] + 0x1c0);
  param_1[0x3b] = lVar3;
  FUN_140483870(lVar2 + 0x108,param_1);
LAB_142c0bd63:
  FUN_142c0e540(param_1);
  if ((*(byte *)((longlong)param_1 + 0x37c) & 0x10) == 0) {
    *(undefined1 *)((longlong)param_1 + 0x399) = 2;
  }
                    /* WARNING: Could not recover jumptable at 0x000142c0bd8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x468))(param_1,param_1[0x39]);
  return;
}



// FUNCTION 142c0bda0 FUN_142c0bda0 body=169 status=ok
// SIG undefined FUN_142c0bda0(void)

void FUN_142c0bda0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x120);
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0();
  }
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    return;
  }
  if (lVar2 == 0) {
    return;
  }
  lVar2 = *(longlong *)(lVar2 + 0x138);
  if (lVar2 != 0) {
    lVar3 = FUN_142ba9430();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142c0be12;
  }
  lVar2 = 0;
LAB_142c0be12:
  uVar4 = thunk_FUN_142b8f070(lVar2,*(longlong *)(param_1 + 0x1c8) + 0x1c0);
  *(undefined8 *)(param_1 + 0x1d8) = uVar4;
  FUN_140483870(lVar2 + 0x108,param_1);
  return;
}



// FUNCTION 142c0be50 FUN_142c0be50 body=1310 status=ok
// SIG undefined FUN_142c0be50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c0be50(longlong *param_1,longlong param_2,int param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  float *pfVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 local_res10;
  float local_138;
  float fStack_134;
  float local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined1 local_118 [80];
  undefined1 local_c8 [4];
  undefined1 local_c4 [172];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b2c868) {
    _Init_thread_header(&DAT_146b2c868);
    if (DAT_146b2c868 == -1) {
      uVar5 = UEnum::GetPrivateStaticClass();
      _DAT_146b2c860 = FUN_141799410(uVar5,0xffffffffffffffff,L"ENavPathEvent");
      _Init_thread_footer(&DAT_146b2c868);
    }
  }
  if ((((param_2 != 0) && (param_1[0x3d] == param_2)) && ((param_3 - 2U & 0xfffffffa) == 0)) &&
     (param_3 != 7)) {
    cVar1 = (**(code **)(*param_1 + 0x530))(param_1);
    if (cVar1 == '\0') {
      local_res10 = CONCAT13(local_res10._3_1_,0x30000);
      local_res10 = CONCAT22(local_res10._2_2_,DAT_1466911c6) | 0x20;
      (**(code **)(*param_1 + 0x450))(param_1,&local_res10);
    }
    else if ((*(uint *)(param_2 + 0x98) >> 2 & 1) != 0) {
      lVar2 = FWeakObjectPtr::Get(param_2 + 0x40);
      if (lVar2 != 0) {
        lVar2 = FWeakObjectPtr::Get(param_2 + 0x40);
        plVar3 = (longlong *)FNavigationPath::GetGoalActorAsNavAgent(param_2);
        if (plVar3 == (longlong *)0x0) {
          lVar2 = *(longlong *)(lVar2 + 0x168);
          if (lVar2 == 0) {
            local_120 = DAT_1468b5d98;
            pfVar4 = (float *)&local_128;
            local_128 = _DAT_1468b5d90;
          }
          else {
            pfVar4 = &local_138;
            local_138 = *(float *)(lVar2 + 0x220);
            local_130 = (float)*(undefined4 *)(lVar2 + 0x228);
            fStack_134 = (float)*(undefined4 *)(lVar2 + 0x224);
          }
          uVar5 = *(undefined8 *)pfVar4;
          fVar8 = pfVar4[2];
        }
        else {
          local_120 = *(undefined4 *)((longlong)param_1 + 0x27c);
          local_128 = *(undefined8 *)((longlong)param_1 + 0x274);
          (**(code **)(*plVar3 + 0x38))
                    (plVar3,param_1[0x23],&local_128,&local_138,local_c4,local_c8);
          lVar2 = *(longlong *)(lVar2 + 0x168);
          if (lVar2 == 0) {
            fVar9 = 0.0;
            fVar11 = 0.0;
            fVar12 = 0.0;
            fVar13 = 1.0;
          }
          else {
            fVar9 = *(float *)(lVar2 + 0x210);
            fVar11 = *(float *)(lVar2 + 0x214);
            fVar12 = *(float *)(lVar2 + 0x218);
            fVar13 = *(float *)(lVar2 + 0x21c);
          }
          pfVar4 = (float *)(**(code **)(*plVar3 + 0x18))(plVar3,local_118);
          fVar6 = fVar12 + fVar12;
          fVar10 = fVar11 + fVar11;
          fVar7 = (fVar9 + fVar9) * fVar9;
          fVar14 = (fVar9 + fVar9) * fVar13;
          fVar8 = pfVar4[2] * 1.0 + local_130 * (1.0 - (fVar10 * fVar11 + fVar7)) +
                  fStack_134 * (fVar14 + fVar6 * fVar11) +
                  local_138 * (fVar6 * fVar9 - fVar10 * fVar13);
          uVar5 = CONCAT44(pfVar4[1] * 1.0 + local_130 * (fVar6 * fVar11 - fVar14) +
                           fStack_134 * (1.0 - (fVar6 * fVar12 + fVar7)) +
                           local_138 * (fVar6 * fVar13 + fVar10 * fVar9),
                           *pfVar4 * 1.0 + local_130 * (fVar10 * fVar13 + fVar6 * fVar9) +
                           fStack_134 * (fVar10 * fVar9 - fVar6 * fVar13) +
                           local_138 * (1.0 - (fVar6 * fVar12 + fVar10 * fVar11)));
        }
        *(undefined8 *)((longlong)param_1 + 0x28c) = uVar5;
        *(float *)((longlong)param_1 + 0x294) = fVar8;
      }
    }
  }
  return;
}



// FUNCTION 142c0c370 FUN_142c0c370 body=62 status=ok
// SIG undefined FUN_142c0c370(void)

void FUN_142c0c370(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0();
  }
  UCrowdManager::GetCurrent(lVar1);
  FUN_142c0c3b0(param_1,param_2);
  return;
}



// FUNCTION 142c0c3b0 FUN_142c0c3b0 body=785 status=ok
// SIG undefined FUN_142c0c3b0(void)

void FUN_142c0c3b0(longlong *param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 local_3c;
  float local_34;
  undefined8 local_30;
  undefined1 local_28 [8];
  undefined4 local_20;
  byte local_1c;
  byte local_1b;
  
  lVar8 = FWeakObjectPtr::Get();
  if (lVar8 != 0) {
    uVar9 = UNavLinkCustomInterface::GetPrivateStaticClass();
    plVar10 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar8,uVar9);
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x48))(plVar10,param_1);
      *(undefined4 *)(param_1 + 0x3a) = 0xffffffff;
      *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
    }
  }
  if ((((*(byte *)(param_1 + 0x54) & 0x80) != 0) && ((*param_2 & 1) != 0)) &&
     (lVar8 = param_1[0x39], lVar8 != 0)) {
    plVar10 = (longlong *)param_1[0x3d];
    if (((int)plVar10[0xe] == DAT_146691110) ||
       ((plVar10[0xf] != 0 &&
        (cVar5 = FNavPathType::IsA(plVar10[0xf],&DAT_146691110), cVar5 != '\0')))) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    plVar12 = (longlong *)0x0;
    if (bVar4) {
      plVar12 = plVar10;
    }
    if (plVar12 != (longlong *)0x0) {
      lVar8 = *(longlong *)(lVar8 + 0x178);
      local_3c = DAT_1466910d0;
      local_34 = DAT_1466910d8;
      if (lVar8 != 0) {
        local_3c = *(undefined8 *)(lVar8 + 0x220);
        local_34 = *(float *)(lVar8 + 0x228) - *(float *)(lVar8 + 0x1e4);
      }
      cVar5 = (**(code **)(*plVar12 + 0x70))(local_3c,&local_3c,0,param_4,local_3c,local_34);
      if (cVar5 != '\0') {
        return;
      }
    }
  }
  if ((*param_2 & 1) == 0) {
LAB_142c0c53b:
    uVar6 = 0;
  }
  else {
    if ((param_1[0x3d] == 0) || ((*(uint *)(param_1[0x3d] + 0x98) >> 2 & 1) == 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_142c0c53b;
    uVar6 = 0x20;
  }
  *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xffffffdf;
  *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | uVar6;
  uVar2 = (undefined4)param_1[0x65];
  (**(code **)(*param_1 + 0x4c0))(param_1);
  FUN_142c16a70(param_1);
  if (((((*(byte *)(param_1 + 0x54) & 0x40) != 0) && ((longlong *)param_1[0x39] != (longlong *)0x0))
      && (cVar5 = (**(code **)(*(longlong *)param_1[0x39] + 0x538))(), cVar5 != '\0')) &&
     ((*(uint *)(param_1[0x39] + 500) >> 1 & 1) == 0)) {
    FUN_142c159d0();
  }
  bVar4 = false;
  *(int *)((longlong)param_1 + 0x1ac) = *(int *)((longlong)param_1 + 0x1ac) + 1;
  iVar11 = *(int *)((longlong)param_1 + 0x1ac);
  iVar7 = (int)param_1[0x34] + -1;
  lVar8 = (longlong)iVar7;
  if (-1 < iVar7) {
    lVar13 = lVar8 << 4;
    bVar4 = false;
    do {
      lVar3 = param_1[0x33];
      if (((*(int *)(lVar13 + 8 + lVar3) == 0) ||
          (plVar10 = *(longlong **)(lVar13 + lVar3), plVar10 == (longlong *)0x0)) ||
         (cVar5 = (**(code **)(*plVar10 + 0x40))(plVar10,uVar2,param_2), cVar5 == '\0')) {
        bVar4 = true;
      }
      lVar13 = lVar13 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar11 = *(int *)((longlong)param_1 + 0x1ac);
  }
  *(int *)((longlong)param_1 + 0x1ac) = iVar11 + -1;
  if (bVar4) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1 + 0x33,0);
  }
  bVar1 = *param_2;
  local_30 = DAT_146b2c608;
  FWeakObjectPtr::operator=(local_28,param_1);
  local_1b = *param_2;
  local_1c = bVar1 & 1;
  lVar8 = param_1[0x23];
  local_20 = uVar2;
  if (lVar8 != 0) {
    lVar13 = FUN_14291fb80();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8)
        != lVar13 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_142c0c6a3;
  }
  lVar8 = 0;
LAB_142c0c6a3:
  FUN_142bf1b30(lVar8,&local_30);
  return;
}



// FUNCTION 142c0c6d0 OnPathFinished body=46 status=ok
// SIG undefined OnPathFinished(void)

void UPathFollowingComponent::OnPathFinished(longlong *param_1,int param_2)

{
  undefined2 local_res10;
  undefined1 local_res12;
  
  local_res12 = (undefined1)param_2;
  local_res10 = (&DAT_1466911c0)[param_2];
  (**(code **)(*param_1 + 0x450))(param_1,&local_res10);
  return;
}



// FUNCTION 142c0c730 FUN_142c0c730 body=300 status=ok
// SIG undefined FUN_142c0c730(void)

void FUN_142c0c730(longlong param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  undefined4 uStack_2c;
  undefined1 local_28 [32];
  
  FUN_142343b00();
  lVar6 = *(longlong *)(param_1 + 0x118);
  if (lVar6 != 0) {
    lVar3 = FUN_14291fb80();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      plVar4 = (longlong *)FUN_142c08b50(lVar6,local_28);
      plVar5 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_FUN_143fcfec0;
        FWeakObjectPtr::operator=(plVar5 + 1,param_1);
        *(undefined4 *)(plVar5 + 2) = 0x42bf9b60;
        *(undefined4 *)((longlong)plVar5 + 0x14) = 1;
        *(undefined4 *)(plVar5 + 3) = 0;
        *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_2c;
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar5[5] = lVar6;
        *plVar5 = (longlong)&PTR_FUN_143fcff08;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar4,1);
        (**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
        iVar1 = (int)plVar4[1];
        *(int *)(plVar4 + 1) = iVar1 + 1;
        if (*(int *)((longlong)plVar4 + 0xc) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar1);
        }
        puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar4);
        *puVar7 = plVar5;
        *(undefined4 *)(puVar7 + 1) = 3;
      }
      TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(local_28);
    }
  }
  return;
}



// FUNCTION 142c0c870 OnUnableToMove body=83 status=ok
// SIG undefined OnUnableToMove(void)

void IPathFollowingAgentInterface::OnUnableToMove(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\AI/Navigation/PathFollowingAgentInterface.h"
             ,0x17,L"Pure virtual not implemented (%s)",
             L"IPathFollowingAgentInterface::OnUnableToMove");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\AI/Navigation/PathFollowingAgentInterface.h"
             ,0x17,L"Pure virtual not implemented (%s)",
             L"IPathFollowingAgentInterface::OnUnableToMove");
  return;
}



// FUNCTION 142c0c8d0 FUN_142c0c8d0 body=43 status=ok
// SIG undefined FUN_142c0c8d0(void)

void FUN_142c0c8d0(longlong param_1,undefined8 param_2)

{
  (**(code **)(*(longlong *)(param_1 + -0x180) + 0x428))
            ((longlong *)(param_1 + -0x180),param_2,0x40,DAT_146b2c570,0);
  return;
}



// FUNCTION 142c0c900 FUN_142c0c900 body=49 status=ok
// SIG undefined FUN_142c0c900(void)

void FUN_142c0c900(longlong *param_1)

{
  undefined2 local_res8;
  undefined1 local_resa;
  
  if ((int)param_1[0x3c] == 1) {
    local_res8 = DAT_1466911ca;
    local_resa = 5;
    (**(code **)(*param_1 + 0x450))(param_1,&local_res8);
  }
  return;
}



// FUNCTION 142c0c940 FUN_142c0c940 body=427 status=ok
// SIG undefined FUN_142c0c940(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c0c940(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  char cVar2;
  float fVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  if (((((*(char *)(param_1 + 0x399) == '\0') && (*(int *)(param_1 + 0x1e0) != 2)) &&
       (iVar1 = *(int *)(param_1 + 0x328), iVar1 != -1)) && (param_2 != -1)) &&
     (((param_2 == iVar1 || (param_2 == 0)) || (iVar1 == 0)))) {
    lVar4 = *(longlong *)(param_1 + 0x120);
    if (lVar4 == 0) {
      lVar4 = FUN_1423407b0();
    }
    UCrowdManager::GetCurrent(lVar4);
  }
  if (((*(int *)(param_1 + 0x1e0) != 2) && (iVar1 = *(int *)(param_1 + 0x328), iVar1 != -1)) &&
     ((param_2 != -1 && (((param_2 == iVar1 || (param_2 == 0)) || (iVar1 == 0)))))) {
    if (((param_3 == '\0') && (*(longlong **)(param_1 + 0x1c8) != (longlong *)0x0)) &&
       (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x538))(), cVar2 != '\0')) {
      FUN_142c159d0(*(undefined8 *)(param_1 + 0x1c8));
    }
    uVar6 = _DAT_1468b5d90;
    fVar3 = DAT_1468b5d98;
    if ((*(longlong *)(param_1 + 0x1c8) != 0) &&
       (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x178), uVar6 = DAT_1466910d0,
       fVar3 = DAT_1466910d8, lVar4 != 0)) {
      uVar6 = *(undefined8 *)(lVar4 + 0x220);
      fVar3 = *(float *)(lVar4 + 0x228) - *(float *)(lVar4 + 0x1e4);
    }
    *(undefined8 *)(param_1 + 0x280) = uVar6;
    *(float *)(param_1 + 0x288) = fVar3;
    if (*(longlong *)(param_1 + 0x1e8) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(*(longlong *)(param_1 + 0x1e8) + 0xe0);
    }
    *(undefined4 *)(param_1 + 0x298) = uVar5;
    *(undefined4 *)(param_1 + 0x1e0) = 2;
    FUN_142c16a70(param_1);
  }
  return;
}



// FUNCTION 142c0caf0 FUN_142c0caf0 body=336 status=ok
// SIG undefined FUN_142c0caf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c0caf0(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  float fVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  if ((((*(int *)(param_1 + 0x1e0) != 2) && (iVar1 = *(int *)(param_1 + 0x328), iVar1 != -1)) &&
      (param_2 != -1)) && (((param_2 == iVar1 || (param_2 == 0)) || (iVar1 == 0)))) {
    if (((param_3 == '\0') && (*(longlong **)(param_1 + 0x1c8) != (longlong *)0x0)) &&
       (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x538))(), cVar3 != '\0')) {
      FUN_142c159d0(*(undefined8 *)(param_1 + 0x1c8));
    }
    uVar6 = _DAT_1468b5d90;
    fVar4 = DAT_1468b5d98;
    if ((*(longlong *)(param_1 + 0x1c8) != 0) &&
       (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x178), uVar6 = DAT_1466910d0,
       fVar4 = DAT_1466910d8, lVar2 != 0)) {
      uVar6 = *(undefined8 *)(lVar2 + 0x220);
      fVar4 = *(float *)(lVar2 + 0x228) - *(float *)(lVar2 + 0x1e4);
    }
    *(undefined8 *)(param_1 + 0x280) = uVar6;
    *(float *)(param_1 + 0x288) = fVar4;
    if (*(longlong *)(param_1 + 0x1e8) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(*(longlong *)(param_1 + 0x1e8) + 0xe0);
    }
    *(undefined4 *)(param_1 + 0x298) = uVar5;
    *(undefined4 *)(param_1 + 0x1e0) = 2;
    FUN_142c16a70(param_1);
    return;
  }
  return;
}



// FUNCTION 142c0cc50 FUN_142c0cc50 body=112 status=ok
// SIG undefined FUN_142c0cc50(void)

void FUN_142c0cc50(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1422384a0();
  lVar1 = *(longlong *)(param_1 + 0x468);
  lVar2 = (longlong)*(int *)(param_1 + 0x470) * 0x50 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x50) {
    FNavigationLinkBase::InitializeAreaClass(lVar1,0);
  }
  if (*(longlong *)(param_1 + 0x488) != 0) {
    FUN_142ba6560(*(longlong *)(param_1 + 0x488),*(undefined1 *)(param_1 + 0x490));
  }
  return;
}



// FUNCTION 142c0ccc0 FUN_142c0ccc0 body=87 status=ok
// SIG undefined FUN_142c0ccc0(void)

void FUN_142c0ccc0(longlong param_1)

{
  FUN_142bed4f0();
  FEnvTraceData::OnPostLoad(param_1 + 0x60);
  if (*(float *)(param_1 + 0x178) <= 0.0) {
    *(undefined4 *)(param_1 + 0x178) = 0x43b40000;
  }
  FEnvTraceData::OnPostLoad(param_1 + 0x1c8);
  *(float *)(param_1 + 0x180) = *(float *)(param_1 + 0x178) * 0.017453292;
  return;
}



// FUNCTION 142c0cd20 Validate body=28 status=ok
// SIG undefined Validate(void)

void UFileMediaSource::Validate(longlong param_1)

{
  FUN_142bed4f0();
  FEnvTraceData::OnPostLoad(param_1 + 0x60);
  return;
}



// FUNCTION 142c0cd40 FUN_142c0cd40 body=390 status=ok
// SIG undefined FUN_142c0cd40(void)

void FUN_142c0cd40(longlong param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [8];
  longlong local_58;
  longlong local_48;
  longlong local_38;
  longlong local_28;
  
  if (*(char *)(param_1 + 0x221) == '\0') {
    *(undefined1 *)(param_1 + 0x221) = 1;
    cVar2 = FGameplayTagQuery::IsEmpty(param_1 + 0x1d8);
    if (cVar2 != '\0') {
      local_90 = 0;
      local_80 = 0;
      local_78._0_4_ = 0;
      local_88 = 0;
      local_78 = 0;
      if (*(char *)(param_1 + 0x222) == '\0') {
        local_98[0] = 1;
      }
      else if (*(char *)(param_1 + 0x222) == '\x01') {
        local_98[0] = 2;
      }
      iVar1 = *(int *)(param_1 + 0x230);
      if (iVar1 != 0) {
        if (0 < iVar1) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(&local_80,iVar1);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)(local_80 + (longlong)(int)local_78 * 8),*(void **)(param_1 + 0x228),
                   (longlong)iVar1 << 3);
        local_78 = CONCAT44(local_78._4_4_,(int)local_78 + iVar1);
      }
      local_70 = 0;
      local_68 = 0;
      uVar3 = FGameplayTagQuery::BuildQuery(local_60,local_98,&local_70);
      FGameplayTagQuery::operator=(param_1 + 0x1d8,uVar3);
      if (local_28 != 0) {
        FMemory::Free();
      }
      if (local_38 != 0) {
        FMemory::Free();
      }
      if (local_48 != 0) {
        FMemory::Free();
      }
      if (local_58 != 0) {
        FMemory::Free();
      }
      FGameplayTagContainer::Reset(param_1 + 0x228,0);
      if (local_80 != 0) {
        FMemory::Free();
      }
      FUN_1421d2610(&local_90);
    }
  }
  FUN_142bed4f0(param_1);
  return;
}



// FUNCTION 142c0ced0 FUN_142c0ced0 body=52 status=ok
// SIG undefined FUN_142c0ced0(void)

void FUN_142c0ced0(longlong param_1)

{
  FUN_142bed4f0();
  if (*(char *)(param_1 + 0x1d8) != '\0') {
    *(undefined1 *)(param_1 + 0x1d8) = 0;
  }
  FUN_142bf1f60(param_1,0);
  return;
}



// FUNCTION 142c0cf10 PostLoad body=31 status=ok
// SIG undefined PostLoad(void)

void UEnvQueryTest_Trace::PostLoad(longlong param_1)

{
  FUN_142bed4f0();
  FEnvTraceData::OnPostLoad(param_1 + 0x1d8);
  return;
}



// FUNCTION 142c0cf30 PostProcessPath body=794 status=ok
// SIG undefined PostProcessPath(void)

void FNavLocalGridData::PostProcessPath
               (longlong param_1,ulonglong *param_2,undefined8 *param_3,longlong *param_4,
               longlong *param_5)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int local_res10;
  longlong local_68;
  undefined8 local_58;
  
  plVar4 = param_5;
  iVar13 = *(int *)((longlong)param_5 + 0xc);
  if (iVar13 < (int)param_4[1]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_5);
    iVar13 = *(int *)((longlong)param_5 + 0xc);
  }
  iVar9 = (int)param_5[1];
  *(int *)(param_5 + 1) = iVar9 + 1;
  if (iVar13 < iVar9 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_5,iVar9);
  }
  lVar2 = *param_5;
  *(ulonglong *)(lVar2 + (longlong)iVar9 * 0xc) = *param_2;
  *(int *)(lVar2 + (longlong)iVar9 * 0xc + 8) = (int)param_2[1];
  if (2 < (int)param_4[1]) {
    local_58._4_4_ = (uint)(*param_2 >> 0x20);
    local_res10 = 2;
    local_68 = 8;
    param_5._0_4_ = local_58._4_4_;
    uVar5 = local_58._4_4_;
    local_58 = *param_2;
    do {
      uVar1 = *(uint *)(param_1 + 0x40);
      uVar12 = local_58 & 0xffffffff;
      lVar2 = *(longlong *)(param_1 + 0x48);
      uVar7 = *(uint *)(local_68 + *param_4);
      uVar10 = uVar7 / uVar1;
      iVar13 = uVar1 * (uint)local_58;
      uVar7 = uVar7 % uVar1;
      if (*(char *)((int)(iVar13 + uVar5) + lVar2) == '\0') {
        iVar9 = -1;
        if ((int)(uint)local_58 < (int)uVar10) {
          iVar9 = 1;
        }
        iVar15 = -1;
        if ((int)uVar5 < (int)uVar7) {
          iVar15 = 1;
        }
        uVar8 = (int)(uVar10 - (uint)local_58) >> 0x1f;
        iVar14 = (uVar10 - (uint)local_58 ^ uVar8) - uVar8;
        uVar8 = (int)(uVar7 - uVar5) >> 0x1f;
        iVar6 = iVar14 * 2;
        iVar11 = (uVar7 - uVar5 ^ uVar8) - uVar8;
        iVar3 = iVar11 * 2;
        uVar8 = uVar5;
        if (iVar6 <= iVar3) {
          iVar13 = -(iVar3 >> 1);
          do {
            if (uVar5 == uVar7) goto LAB_142c0d18f;
            iVar3 = iVar6 + iVar13;
            uVar10 = (uint)uVar12 + iVar9;
            if (iVar3 < 0) {
              uVar10 = (uint)uVar12;
            }
            uVar5 = uVar5 + iVar15;
            uVar12 = (ulonglong)uVar10;
            iVar13 = iVar3 + iVar11 * -2;
            if (iVar3 < 0) {
              iVar13 = iVar3;
            }
          } while (*(char *)((int)(uVar10 * uVar1 + uVar5) + lVar2) == '\0');
          goto LAB_142c0d137;
        }
        iVar6 = -(iVar6 >> 1);
        if ((uint)local_58 != uVar10) {
          do {
            iVar11 = iVar3 + iVar6;
            uVar7 = uVar5 + iVar15;
            if (iVar11 < 0) {
              uVar7 = uVar5;
            }
            uVar5 = uVar7;
            iVar13 = iVar13 + uVar1 * iVar9;
            uVar7 = (int)uVar12 + iVar9;
            uVar12 = (ulonglong)uVar7;
            iVar6 = iVar11 + iVar14 * -2;
            if (iVar11 < 0) {
              iVar6 = iVar11;
            }
            if (*(char *)((int)(iVar13 + uVar5) + lVar2) != '\0') goto LAB_142c0d137;
            uVar8 = (uint)param_5;
          } while (uVar7 != uVar10);
        }
      }
      else {
LAB_142c0d137:
        iVar13 = (int)plVar4[1];
        uVar5 = *(uint *)(*param_4 + -4 + local_68);
        param_5._0_4_ = uVar5 % uVar1;
        local_58 = CONCAT44((uint)param_5,uVar5 / uVar1);
        *(int *)(plVar4 + 1) = iVar13 + 1;
        if (*(int *)((longlong)plVar4 + 0xc) < iVar13 + 1) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar4);
        }
        lVar2 = *plVar4;
        *(ulonglong *)(lVar2 + (longlong)iVar13 * 0xc) = local_58;
        *(undefined4 *)(lVar2 + 8 + (longlong)iVar13 * 0xc) = 0;
        uVar8 = (uint)param_5;
      }
LAB_142c0d18f:
      uVar5 = uVar8;
      local_res10 = local_res10 + 1;
      local_68 = local_68 + 4;
    } while (local_res10 < (int)param_4[1]);
  }
  iVar13 = (int)plVar4[1];
  *(int *)(plVar4 + 1) = iVar13 + 1;
  if (*(int *)((longlong)plVar4 + 0xc) < iVar13 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar4,iVar13);
  }
  lVar2 = *plVar4;
  *(undefined8 *)(lVar2 + (longlong)iVar13 * 0xc) = *param_3;
  *(undefined4 *)(lVar2 + (longlong)iVar13 * 0xc + 8) = *(undefined4 *)(param_3 + 1);
  if (*(int *)((longlong)plVar4 + 0xc) != (int)plVar4[1]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (plVar4);
  }
  return;
}



// FUNCTION 142c0d250 FUN_142c0d250 body=49 status=ok
// SIG undefined FUN_142c0d250(void)

void FUN_142c0d250(longlong param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (*(longlong *)(param_1 + 0x488) != 0) {
    FUN_142ba6560(*(longlong *)(param_1 + 0x488),*(undefined1 *)(param_1 + 0x490));
    return;
  }
  return;
}



// FUNCTION 142c0d2a0 FUN_142c0d2a0 body=538 status=ok
// SIG undefined FUN_142c0d2a0(void)

void FUN_142c0d2a0(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  ulonglong *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *local_res18;
  longlong *local_48;
  ulonglong local_40;
  void *local_38;
  undefined8 local_30;
  
  plVar4 = (longlong *)0x0;
  plVar2 = plVar4;
  if (param_4 != (longlong *)0x0) {
    plVar1 = (longlong *)UEnvQueryContext::GetPrivateStaticClass();
    plVar3 = param_4;
    do {
      plVar2 = param_4;
      if (plVar3 == plVar1) break;
      plVar3 = (longlong *)plVar3[6];
      plVar2 = plVar4;
    } while (plVar3 != (longlong *)0x0);
  }
  FUN_142bed6b0(param_2,plVar2,param_5);
  if (param_3 != (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(*param_3 + 0x688))(param_3);
    local_res18 = param_3;
    if (plVar2 != (longlong *)0x0) {
      local_res18 = plVar2;
    }
    if (local_res18 != (longlong *)0x0) {
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_5,&local_res18);
    }
  }
  puVar10 = (undefined8 *)*param_5;
  iVar6 = 0;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  plVar2 = (longlong *)((longlong)(int)param_5[1] & 0x1fffffffffffffff);
  if (puVar10 + (int)param_5[1] < puVar10) {
    plVar2 = plVar4;
  }
  plVar1 = plVar4;
  plVar8 = plVar4;
  plVar3 = plVar4;
  plVar9 = plVar4;
  if (plVar2 != (longlong *)0x0) {
    do {
      local_38 = (void *)0x0;
      local_30 = 0;
      FUN_14222e300(*puVar10,&local_38);
      iVar6 = (int)local_30;
      lVar5 = (longlong)(int)local_30;
      if (0 < (int)local_30) {
        iVar7 = (int)plVar8;
        if ((int)plVar3 < (int)plVar8 + (int)local_30) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(&local_48);
          plVar3 = (longlong *)(local_40 >> 0x20);
          plVar9 = local_48;
          iVar7 = (int)local_40;
        }
        _guard_xfg_dispatch_icall_nop(plVar9 + iVar7,local_38,lVar5 << 3);
        plVar8 = (longlong *)(ulonglong)(uint)(iVar7 + iVar6);
        local_40 = CONCAT44(local_40._4_4_,iVar7 + iVar6);
      }
      iVar6 = (int)plVar8;
      if (local_38 != (void *)0x0) {
        FMemory::Free();
      }
      puVar10 = puVar10 + 1;
      plVar1 = (longlong *)((longlong)plVar1 + 1);
    } while (plVar1 != plVar2);
  }
  plVar2 = (longlong *)((ulonglong)((longlong)(local_48 + iVar6) + (7 - (longlong)local_48)) >> 3);
  if (local_48 + iVar6 < local_48) {
    plVar2 = plVar4;
  }
  plVar3 = local_48;
  if (plVar2 != (longlong *)0x0) {
    do {
      plVar1 = (longlong *)*param_5;
      iVar6 = (int)param_5[1];
      lVar5 = *plVar3;
      for (plVar8 = plVar1; plVar8 != plVar1 + iVar6; plVar8 = plVar8 + 1) {
        if (*plVar8 == lVar5) {
          if ((int)((longlong)plVar8 - (longlong)plVar1 >> 3) != -1) goto LAB_142c0d47c;
          break;
        }
      }
      *(int *)(param_5 + 1) = iVar6 + 1;
      if (*(int *)((longlong)param_5 + 0xc) < iVar6 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
      }
      *(longlong *)((longlong)iVar6 * 8 + *param_5) = lVar5;
LAB_142c0d47c:
      plVar4 = (longlong *)((longlong)plVar4 + 1);
      plVar3 = plVar3 + 1;
    } while (plVar4 != plVar2);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}



// FUNCTION 142c0d4d0 FUN_142c0d4d0 body=525 status=ok
// SIG undefined FUN_142c0d4d0(void)

void FUN_142c0d4d0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  float *pfVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  float local_38;
  float fStack_34;
  
  lVar3 = 0;
  if (*(char *)(param_1 + 0x8b) != '\0') {
    lVar3 = FUN_142be3010(param_3);
  }
  lVar4 = FWeakObjectPtr::Get(param_3 + 0x34);
  if (((lVar3 != 0) && (lVar4 != 0)) && (*(char *)(param_1 + 0x8b) == '\x01')) {
    FUN_142befbf0(lVar3,lVar4,param_1 + 0x60,param_2,1);
  }
  if (*(char *)(param_1 + 0x8b) == '\x02') {
    FUN_142bf0520(*(undefined8 *)(param_3 + 0x58),param_1 + 0x60,param_2,1);
  }
  if (((lVar3 != 0) && (lVar4 != 0)) && (*(char *)(param_1 + 0x8b) == '\x03')) {
    FUN_142bef720(lVar3,lVar4,param_1 + 0x60,param_2,1);
  }
  if (0 < *(int *)(param_3 + 0x128)) {
    iVar9 = (int)param_2[1] + -1;
    if (-1 < iVar9) {
      lVar4 = (longlong)iVar9 * 0x18;
      lVar10 = (longlong)(int)param_2[1] * 0x18;
      lVar3 = lVar4;
      do {
        lVar1 = *param_2;
        pcVar7 = *(char **)(param_3 + 0x120);
        pcVar8 = pcVar7 + (longlong)*(int *)(param_3 + 0x128) * 0x30;
        if (pcVar7 != pcVar8) {
          pfVar5 = (float *)(pcVar7 + 0xc);
          fStack_34 = (float)((ulonglong)*(undefined8 *)(lVar4 + lVar1) >> 0x20);
          local_38 = (float)*(undefined8 *)(lVar4 + lVar1);
          do {
            if ((*pcVar7 == '\x01') &&
               (fVar11 = *(float *)(lVar4 + 8 + lVar1) - *pfVar5,
               SQRT((fStack_34 - pfVar5[-1]) * (fStack_34 - pfVar5[-1]) +
                    (local_38 - pfVar5[-2]) * (local_38 - pfVar5[-2]) + fVar11 * fVar11) <=
               pfVar5[1] + 30.0)) {
              iVar6 = (int)param_2[1];
              iVar2 = (iVar6 - iVar9) + -1;
              if (iVar2 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(lVar3 + lVar1),(void *)(lVar10 + lVar1),(longlong)iVar2 * 0x18);
                iVar6 = (int)param_2[1];
              }
              *(int *)(param_2 + 1) = iVar6 + -1;
              TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(param_2);
              break;
            }
            pcVar7 = pcVar7 + 0x30;
            pfVar5 = pfVar5 + 0xc;
          } while (pcVar7 != pcVar8);
        }
        lVar10 = lVar10 + -0x18;
        lVar3 = lVar3 + -0x18;
        lVar4 = lVar4 + -0x18;
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
    }
  }
  return;
}



// FUNCTION 142c0d6e0 FUN_142c0d6e0 body=847 status=ok
// SIG undefined FUN_142c0d6e0(void)

void FUN_142c0d6e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  float *pfVar2;
  int iVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  longlong local_e8;
  uint local_e0;
  uint uStack_dc;
  undefined8 local_d8;
  float local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  uint local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  uint local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  uint local_58;
  undefined4 uStack_54;
  
  fVar12 = *(float *)(param_1 + 0x1c);
  if (ABS((fVar12 - *(float *)(param_1 + 0x10)) * 0.5) <= 1e-08) {
    local_d8 = *(undefined8 *)((longlong)param_2 + 0x4a4);
    local_d0 = *(float *)((longlong)param_2 + 0x4ac);
    fVar14 = (*(float *)(param_1 + 0x10) + fVar12) * 0.5;
    fVar12 = local_d0 + fVar14;
    *(float *)(param_1 + 0x10) = fVar14 - local_d0;
    *(float *)(param_1 + 0x1c) = fVar12;
  }
  uVar6 = 0;
  local_e8 = 0;
  local_e0 = 0;
  uStack_dc = 0;
  uVar11 = uVar6;
  uVar8 = uVar6;
  uVar9 = uVar6;
  uVar10 = uVar6;
  if (0 < *(int *)(param_1 + 0x50)) {
    do {
      if (*(char *)(uVar9 + *(longlong *)(param_1 + 0x48)) == '\0') {
        uStack_90 = *(undefined4 *)(param_1 + 0x2c);
        uStack_a0 = CONCAT44(uStack_a0._4_4_,uStack_90);
        uStack_b8 = DAT_1468b5d94;
        local_b0 = local_b0 & 0xffffff00;
        local_74 = local_b0;
        uStack_b4 = DAT_1468b5d98;
        local_58 = local_58 & 0xfffffffd | 5;
        local_68 = DAT_1468b5d98;
        local_e0 = (int)uVar10 + 1;
        uStack_60 = 0;
        uStack_70 = DAT_1468b5d90;
        uStack_6c = DAT_1468b5d94;
        local_c8 = DAT_1468b5d90;
        uStack_c4 = DAT_1468b5d94;
        uStack_c0 = DAT_1468b5d98;
        uStack_bc = DAT_1468b5d90;
        uStack_8c = DAT_1468b5d90;
        uStack_88 = DAT_1468b5d94;
        uStack_84 = DAT_1468b5d98;
        uStack_80 = DAT_1468b5d90;
        uStack_7c = DAT_1468b5d94;
        uStack_78 = DAT_1468b5d98;
        local_98 = CONCAT44(((float)(int)(uVar11 % (ulonglong)*(uint *)(param_1 + 0x40)) + 0.5) *
                            *(float *)(param_1 + 4) + *(float *)(param_1 + 0x28),
                            ((float)(int)(uVar11 / *(uint *)(param_1 + 0x40)) + 0.5) *
                            *(float *)(param_1 + 4) + *(float *)(param_1 + 0x24));
        if ((int)uVar8 < (int)local_e0) {
          TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(&local_e8);
        }
        lVar5 = (longlong)(int)uVar10;
        puVar1 = (undefined8 *)(local_e8 + lVar5 * 0x48);
        *puVar1 = local_98;
        puVar1[1] = CONCAT44(uStack_8c,uStack_90);
        puVar1 = (undefined8 *)(local_e8 + 0x10 + lVar5 * 0x48);
        *puVar1 = CONCAT44(uStack_84,uStack_88);
        puVar1[1] = CONCAT44(uStack_7c,uStack_80);
        auVar4._4_4_ = uStack_64;
        auVar4._0_4_ = local_68;
        auVar4._8_8_ = uStack_60;
        puVar1 = (undefined8 *)(local_e8 + 0x20 + lVar5 * 0x48);
        *puVar1 = CONCAT44(local_74,uStack_78);
        puVar1[1] = CONCAT44(uStack_6c,uStack_70);
        *(undefined1 (*) [16])(local_e8 + 0x30 + lVar5 * 0x48) = auVar4;
        *(ulonglong *)(local_e8 + 0x40 + lVar5 * 0x48) = CONCAT44(uStack_54,local_58);
        uVar8 = (ulonglong)uStack_dc;
        uVar10 = (ulonglong)local_e0;
      }
      uVar7 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar7;
      uVar9 = uVar9 + 1;
    } while ((int)uVar7 < *(int *)(param_1 + 0x50));
    fVar12 = *(float *)(param_1 + 0x1c);
  }
  fVar14 = *(float *)(param_1 + 4);
  local_d0 = (fVar12 - *(float *)(param_1 + 0x10)) * 0.5;
  local_d8 = CONCAT44(fVar14 * 0.25,fVar14 * 0.25);
  local_a8 = 0;
  uStack_a0 = 0;
  (**(code **)(*param_2 + 0x7e0))(param_2,&local_e8,&local_d8,&local_a8,0);
  fVar12 = *(float *)(param_1 + 0x1c);
  fVar13 = *(float *)(param_1 + 0x10);
  uVar7 = *(uint *)(param_1 + 0x50);
  uVar11 = (ulonglong)uVar7;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(uint *)(param_1 + 100) != uVar7) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x58,uVar7);
  }
  if (0 < (int)uVar7) {
    do {
      iVar3 = *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x60) = iVar3 + 1;
      if (*(int *)(param_1 + 100) < iVar3 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x58,iVar3);
      }
      pfVar2 = (float *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar3 * 4);
      if (pfVar2 != (float *)0x0) {
        *pfVar2 = (fVar12 + fVar13) * 0.5;
      }
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  uVar11 = uVar6;
  uVar8 = uVar6;
  if (0 < *(int *)(param_1 + 0x50)) {
    do {
      if (*(char *)(*(longlong *)(param_1 + 0x48) + uVar8) == '\0') {
        if (((*(byte *)(local_e8 + 0x40 + uVar6) & 2) == 0) ||
           (fVar12 = *(float *)(local_e8 + 4 + uVar6) - *(float *)(local_e8 + 0x2c + uVar6),
           fVar13 = *(float *)(local_e8 + uVar6) - *(float *)(local_e8 + 0x28 + uVar6),
           fVar14 * fVar14 * 0.0625 < fVar12 * fVar12 + fVar13 * fVar13)) {
          *(undefined1 *)(*(longlong *)(param_1 + 0x48) + uVar8) = 1;
        }
        else {
          *(undefined4 *)(*(longlong *)(param_1 + 0x58) + uVar8 * 4) =
               *(undefined4 *)(local_e8 + 0x30 + uVar6);
        }
        uVar6 = uVar6 + 0x48;
      }
      uVar7 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar7;
      uVar8 = uVar8 + 1;
    } while ((int)uVar7 < *(int *)(param_1 + 0x50));
  }
  if (local_e8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142c0da30 FUN_142c0da30 body=210 status=ok
// SIG undefined FUN_142c0da30(void)

void FUN_142c0da30(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  uVar5 = 0;
  uVar6 = uVar5;
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x138), lVar2 != 0)) {
    lVar3 = FUN_142ba9430();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar6 = *(ulonglong *)(lVar2 + 0x28);
    }
  }
  if ((uVar6 != 0) && (uVar7 = uVar5, 0 < (int)param_2[1])) {
    do {
      FUN_142c0d6e0((longlong)*(int *)(uVar7 + *param_2) * 0x90 + param_1[5],uVar6);
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      uVar7 = uVar7 + 4;
    } while ((int)uVar4 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 142c0db10 Push body=182 status=ok
// SIG undefined Push(void)

void FGraphAStar<FNavLocalGridData,FGraphAStarDefaultPolicy,FGraphAStarDefaultNode<FNavLocalGridData>_>
     ::FOpenList::Push(longlong *param_1,longlong param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  iVar7 = (int)param_1[1];
  puVar5 = (undefined8 *)param_1[3];
  *(int *)(param_1 + 1) = iVar7 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar7);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar7 * 4) = *(undefined4 *)(param_2 + 0x10);
  lVar6 = *param_1;
  iVar7 = (int)param_1[1] + -1;
  if (iVar7 < 1) {
    *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 1;
  }
  else {
    do {
      lVar8 = (longlong)iVar7;
      iVar7 = (iVar7 + -1) / 2;
      iVar3 = *(int *)(lVar6 + lVar8 * 4);
      iVar4 = *(int *)(lVar6 + (longlong)iVar7 * 4);
      fVar2 = *(float *)((longlong)iVar4 * 0x1c + 0xc + *(longlong *)*puVar5);
      pfVar1 = (float *)((longlong)iVar3 * 0x1c + 0xc + *(longlong *)*puVar5);
      if (fVar2 < *pfVar1 || fVar2 == *pfVar1) break;
      *(int *)(lVar6 + lVar8 * 4) = iVar4;
      *(int *)(lVar6 + (longlong)iVar7 * 4) = iVar3;
    } while (0 < iVar7);
    *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 1;
  }
  return;
}



// FUNCTION 142c0dbd0 FUN_142c0dbd0 body=2293 status=ok
// SIG undefined FUN_142c0dbd0(void)

void FUN_142c0dbd0(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  ulonglong uVar7;
  float *pfVar8;
  undefined8 *puVar9;
  float *pfVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  void *pvVar20;
  int iVar21;
  void *pvVar22;
  float fVar23;
  int local_res18;
  void *local_148;
  undefined8 local_140;
  longlong local_138;
  int local_130;
  int local_12c;
  void *local_128;
  ulonglong local_120;
  longlong local_118;
  undefined8 local_110;
  undefined8 *local_108;
  undefined8 local_100;
  longlong local_f8;
  int local_f0;
  longlong *local_e8;
  undefined1 local_d8 [72];
  longlong local_90;
  longlong local_80;
  int local_6c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  
  if ((*(byte *)((longlong)param_1 + 0x54) & 1) == 0) {
    return;
  }
  lVar13 = param_1[5];
  plVar11 = param_1 + 5;
  iVar21 = (int)param_1[6];
  local_f8 = 0;
  iVar14 = 0;
  local_f0 = iVar21;
  local_e8 = plVar11;
  if (iVar21 != 0) {
    TArray<FLiveLinkFrame,FDefaultAllocator>::ResizeForCopy(&local_f8,iVar21);
    lVar13 = lVar13 - local_f8;
    puVar12 = (undefined8 *)(local_f8 + 0x80);
    do {
      FNavLocalGridData::FNavLocalGridData();
      *puVar12 = 0;
      iVar14 = *(int *)(lVar13 + 8 + (longlong)puVar12);
      pvVar20 = *(void **)(lVar13 + (longlong)puVar12);
      *(int *)(puVar12 + 1) = iVar14;
      if (iVar14 == 0) {
        *(undefined4 *)((longlong)puVar12 + 0xc) = 0;
      }
      else {
        TArray<int,FDefaultAllocator>::ResizeForCopy(puVar12,iVar14,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar12,pvVar20,(longlong)iVar14 << 2);
      }
      puVar12 = puVar12 + 0x12;
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
    iVar14 = (int)param_1[6];
  }
  iVar15 = local_f0;
  pvVar20 = (void *)0x0;
  iVar21 = *(int *)((longlong)param_1 + 0x34);
  if (iVar21 < 0) {
    if (iVar14 != 0) {
      plVar11 = (longlong *)(*plVar11 + 0x58);
      do {
        if (plVar11[5] != 0) {
          FMemory::Free();
        }
        if (*plVar11 != 0) {
          FMemory::Free();
        }
        if (plVar11[-2] != 0) {
          FMemory::Free();
        }
        plVar11 = plVar11 + 0x12;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
      iVar21 = *(int *)((longlong)param_1 + 0x34);
    }
    *(undefined4 *)(param_1 + 6) = 0;
    if (iVar21 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<144,8>_>,FDefaultAllocator>::ResizeTo()
      ;
    }
  }
  else {
    if (iVar14 != 0) {
      plVar11 = (longlong *)(*plVar11 + 0x58);
      do {
        if (plVar11[5] != 0) {
          FMemory::Free();
        }
        if (*plVar11 != 0) {
          FMemory::Free();
        }
        if (plVar11[-2] != 0) {
          FMemory::Free();
        }
        plVar11 = plVar11 + 0x12;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    *(undefined4 *)(param_1 + 6) = 0;
  }
  uVar2 = *(uint *)(param_1 + 8);
  lVar13 = (longlong)(int)uVar2;
  *(uint *)((longlong)param_1 + 0x54) = *(uint *)((longlong)param_1 + 0x54) & 0xfffffffe;
  if (uVar2 == 0) {
    *(int *)(param_1 + 9) = (int)param_1[9] + 1;
    goto LAB_142c0e430;
  }
  local_128 = (void *)0x0;
  local_120 = 0;
  local_108 = (undefined8 *)0x0;
  local_100 = 0;
  if ((int)uVar2 < 1) {
    pvVar22 = (void *)0x0;
    if (-1 < (int)uVar2) goto LAB_142c0ddf1;
    if (uVar2 != 0) {
      local_120 = (ulonglong)uVar2;
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink();
      pvVar22 = local_128;
      goto LAB_142c0ddf1;
    }
LAB_142c0de07:
    puVar12 = (undefined8 *)0x0;
    if (((int)uVar2 < 0) && (uVar2 != 0)) {
      local_100 = CONCAT44(local_100._4_4_,uVar2);
      TArray<FLazyObjectPtr,FDefaultAllocator>::ResizeShrink();
      puVar12 = local_108;
    }
  }
  else {
    local_120 = (ulonglong)uVar2;
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_128);
    pvVar22 = local_128;
    _guard_xfg_dispatch_icall_nop(local_128,0,lVar13 << 2);
LAB_142c0ddf1:
    pvVar20 = pvVar22;
    if ((int)uVar2 < 1) goto LAB_142c0de07;
    local_100 = CONCAT44(local_100._4_4_,uVar2);
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeGrow
              (&local_108,0);
    puVar12 = local_108;
  }
  iVar21 = 0;
  if (0 < (int)uVar2) {
    lVar16 = 0;
    lVar18 = 0;
    puVar9 = puVar12;
    do {
      *(int *)((longlong)pvVar20 + lVar16 * 4) = iVar21;
      lVar4 = param_1[7];
      iVar21 = iVar21 + 1;
      lVar16 = lVar16 + 1;
      puVar1 = (undefined8 *)(lVar18 + 8 + lVar4);
      uVar5 = puVar1[1];
      *puVar9 = *puVar1;
      puVar9[1] = uVar5;
      puVar9[2] = *(undefined8 *)(lVar18 + 0x18 + lVar4);
      *(undefined4 *)(puVar9 + 3) = *(undefined4 *)(lVar18 + 0x20 + lVar4);
      lVar18 = lVar18 + 0x80;
      puVar9 = (undefined8 *)((longlong)puVar9 + 0x1c);
    } while (lVar16 < lVar13);
  }
  iVar21 = 0;
  if (0 < (int)(uVar2 * uVar2)) {
    while( true ) {
      iVar19 = 0;
      iVar14 = 0;
      lVar18 = 0;
      if (lVar13 < 1) break;
      pfVar10 = (float *)((longlong)puVar12 + 4);
      do {
        if (*(int *)((longlong)pvVar20 + lVar18 * 4) == iVar14) {
          iVar17 = 0;
          pfVar8 = (float *)(puVar12 + 1);
          lVar16 = 0;
          do {
            if (((((*(int *)((longlong)pvVar20 + lVar16 * 4) == iVar17) && (lVar16 != lVar18)) &&
                 (pfVar10[-1] <= pfVar8[1])) &&
                ((pfVar8[-2] <= pfVar10[2] && (*pfVar10 <= pfVar8[2])))) &&
               ((pfVar8[-1] <= pfVar10[3] && ((pfVar10[1] <= pfVar8[3] && (*pfVar8 <= pfVar10[4]))))
               )) {
              *(int *)((longlong)pvVar20 + lVar16 * 4) = iVar14;
              if (*(char *)(pfVar10 + 5) == '\0') {
                if (*(char *)(pfVar8 + 4) != '\0') {
                  uVar5 = *(undefined8 *)pfVar8;
                  *(undefined8 *)(pfVar10 + -1) = *(undefined8 *)(pfVar8 + -2);
                  *(undefined8 *)(pfVar10 + 1) = uVar5;
                  *(undefined8 *)(pfVar10 + 3) = *(undefined8 *)(pfVar8 + 2);
                  pfVar10[5] = pfVar8[4];
                }
              }
              else if (*(char *)(pfVar8 + 4) != '\0') {
                fVar23 = pfVar8[-2];
                if (pfVar10[-1] <= pfVar8[-2]) {
                  fVar23 = pfVar10[-1];
                }
                pfVar10[-1] = fVar23;
                fVar23 = pfVar8[-1];
                if (*pfVar10 <= pfVar8[-1]) {
                  fVar23 = *pfVar10;
                }
                *pfVar10 = fVar23;
                fVar23 = pfVar10[1];
                if (*pfVar8 <= pfVar10[1]) {
                  fVar23 = *pfVar8;
                }
                pfVar10[1] = fVar23;
                fVar23 = pfVar8[1];
                if (pfVar8[1] <= pfVar10[2]) {
                  fVar23 = pfVar10[2];
                }
                pfVar10[2] = fVar23;
                fVar23 = pfVar8[2];
                if (pfVar8[2] <= pfVar10[3]) {
                  fVar23 = pfVar10[3];
                }
                pfVar10[3] = fVar23;
                fVar23 = pfVar8[3];
                if (pfVar8[3] <= pfVar10[4]) {
                  fVar23 = pfVar10[4];
                }
                pfVar10[4] = fVar23;
              }
              iVar19 = iVar19 + 1;
            }
            iVar17 = iVar17 + 1;
            lVar16 = lVar16 + 1;
            pfVar8 = pfVar8 + 7;
          } while (lVar16 < lVar13);
        }
        iVar14 = iVar14 + 1;
        lVar18 = lVar18 + 1;
        pfVar10 = pfVar10 + 7;
      } while (lVar18 < lVar13);
      if ((iVar19 == 0) || (iVar21 = iVar21 + 1, (int)(uVar2 * uVar2) <= iVar21)) break;
    }
  }
  local_140._4_4_ = 0;
  local_12c = 0;
  local_138 = 0;
  iVar21 = 0;
  local_148 = (void *)0x0;
  local_140 = 0;
  local_118 = 0;
  local_110 = 0;
  local_res18 = 0;
  if (0 < (int)uVar2) {
    do {
      iVar14 = local_12c;
      iVar19 = local_140._4_4_;
      if (local_12c < 0) {
        if (iVar21 != 0) {
          plVar11 = (longlong *)(local_138 + 0x48);
          do {
            if (plVar11[2] != 0) {
              FMemory::Free();
            }
            if (*plVar11 != 0) {
              FMemory::Free();
            }
            plVar11 = plVar11 + 0x10;
            iVar21 = iVar21 + -1;
          } while (iVar21 != 0);
          iVar19 = local_140._4_4_;
        }
        local_130 = 0;
        if (iVar14 != 0) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<128,8>_>,FDefaultAllocator>::
          ResizeTo(&local_138,0);
        }
      }
      else {
        if (iVar21 != 0) {
          plVar11 = (longlong *)(local_138 + 0x48);
          do {
            if (plVar11[2] != 0) {
              FMemory::Free();
            }
            if (*plVar11 != 0) {
              FMemory::Free();
            }
            plVar11 = plVar11 + 0x10;
            iVar21 = iVar21 + -1;
          } while (iVar21 != 0);
          iVar19 = local_140._4_4_;
        }
        local_130 = 0;
      }
      iVar21 = local_130;
      iVar14 = 0;
      if ((iVar19 < 0) && (local_140 = local_140 & 0xffffffff00000000, iVar14 = 0, iVar19 != 0)) {
        TArray<float,FDefaultAllocator>::ResizeTo(&local_148);
        iVar14 = (int)local_140;
      }
      lVar13 = 0;
      if (0 < (int)uVar2) {
        lVar18 = 0;
        do {
          iVar19 = *(int *)((longlong)pvVar20 + lVar13 * 4);
          iVar17 = *(int *)((longlong)pvVar20 + (longlong)iVar19 * 4);
          if (iVar19 != iVar17) {
            do {
              iVar19 = iVar17;
              iVar17 = *(int *)((longlong)pvVar20 + (longlong)iVar19 * 4);
            } while (iVar19 != iVar17);
          }
          if (iVar19 == local_res18) {
            lVar16 = (longlong)iVar21;
            local_130 = iVar21 + 1;
            if (local_12c < local_130) {
              TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow
                        (&local_138,iVar21);
            }
            iVar21 = local_130;
            FNavLocalGridData::FNavLocalGridData(lVar16 * 0x80 + local_138);
            lVar16 = (longlong)iVar14;
            iVar14 = iVar14 + 1;
            local_140 = CONCAT44(local_140._4_4_,iVar14);
            uVar3 = *(undefined4 *)(lVar18 + 0x6c + param_1[7]);
            if (local_140._4_4_ < iVar14) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_148);
              iVar14 = (int)local_140;
            }
            *(undefined4 *)((longlong)local_148 + lVar16 * 4) = uVar3;
            pvVar20 = local_128;
          }
          lVar13 = lVar13 + 1;
          lVar18 = lVar18 + 0x80;
        } while (lVar13 < (int)uVar2);
      }
      if (iVar21 != 0) {
        bVar6 = false;
        iVar19 = 0;
        if (0 < iVar15) {
          puVar12 = (undefined8 *)(local_f8 + 0x80);
          do {
            if ((*(int *)(puVar12 + 1) == iVar14) &&
               (iVar17 = _guard_xfg_dispatch_icall_nop
                                   ((void *)*puVar12,local_148,(longlong)*(int *)(puVar12 + 1) << 2)
               , plVar11 = local_e8, iVar17 == 0)) {
              iVar19 = (int)local_e8[1];
              *(int *)(local_e8 + 1) = iVar19 + 1;
              if (*(int *)((longlong)local_e8 + 0xc) < iVar19 + 1) {
                TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow
                          (local_e8,iVar19);
              }
              FCombinedNavGridData::FCombinedNavGridData((longlong)iVar19 * 0x90 + *plVar11);
              bVar6 = true;
              break;
            }
            iVar19 = iVar19 + 1;
            puVar12 = puVar12 + 0x12;
          } while (iVar19 < iVar15);
        }
        if (!bVar6) {
          FNavLocalGridData::FNavLocalGridData(local_d8,&local_138);
          local_58 = (void *)0x0;
          local_4c = 0;
          iVar19 = *(int *)((longlong)param_1 + 0x4c);
          local_6c = iVar19;
          local_50 = iVar14;
          if (iVar14 != 0) {
            TArray<int,FDefaultAllocator>::ResizeForCopy(&local_58,iVar14,0);
            _guard_xfg_dispatch_icall_nop(local_58,local_148,(longlong)iVar14 << 2);
            iVar19 = *(int *)((longlong)param_1 + 0x4c);
          }
          uVar7 = local_110;
          lVar18 = (longlong)(int)local_110;
          lVar13 = param_1[6];
          *(int *)((longlong)param_1 + 0x4c) = iVar19 + 1;
          iVar14 = (int)local_110 + 1;
          local_110 = CONCAT44(local_110._4_4_,iVar14);
          if (local_110._4_4_ < iVar14) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_118,uVar7 & 0xffffffff);
          }
          *(int *)(local_118 + lVar18 * 4) = (int)lVar13;
          iVar14 = (int)param_1[6];
          *(int *)(param_1 + 6) = iVar14 + 1;
          if (*(int *)((longlong)param_1 + 0x34) < iVar14 + 1) {
            TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow
                      (param_1 + 5,iVar14);
          }
          lVar13 = (longlong)iVar14 * 0x90 + param_1[5];
          FNavLocalGridData::FNavLocalGridData(lVar13);
          pvVar20 = local_58;
          lVar18 = (longlong)local_50;
          *(undefined8 *)(lVar13 + 0x80) = 0;
          *(int *)(lVar13 + 0x88) = local_50;
          if (local_50 == 0) {
            *(undefined4 *)(lVar13 + 0x8c) = 0;
          }
          else {
            TArray<int,FDefaultAllocator>::ResizeForCopy(lVar13 + 0x80,local_50,0);
            _guard_xfg_dispatch_icall_nop(*(void **)(lVar13 + 0x80),pvVar20,lVar18 << 2);
          }
          if (pvVar20 != (void *)0x0) {
            FMemory::Free(pvVar20);
          }
          if (local_80 != 0) {
            FMemory::Free();
          }
          if (local_90 != 0) {
            FMemory::Free();
          }
        }
      }
      local_res18 = local_res18 + 1;
      pvVar20 = local_128;
    } while (local_res18 < (int)uVar2);
    if ((int)local_110 != 0) {
      (**(code **)(*param_1 + 0x278))(param_1,&local_118);
      *(int *)(param_1 + 9) = (int)param_1[9] + 1;
    }
    if (local_118 != 0) {
      FMemory::Free();
    }
    if (local_148 != (void *)0x0) {
      FMemory::Free(local_148);
    }
  }
  lVar13 = local_138;
  if (iVar21 != 0) {
    plVar11 = (longlong *)(local_138 + 0x48);
    do {
      if (plVar11[2] != 0) {
        FMemory::Free();
      }
      if (*plVar11 != 0) {
        FMemory::Free();
      }
      plVar11 = plVar11 + 0x10;
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
  }
  if (lVar13 != 0) {
    FMemory::Free(lVar13);
  }
  if (local_108 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  if (local_128 != (void *)0x0) {
    FMemory::Free();
  }
LAB_142c0e430:
  if (iVar15 != 0) {
    plVar11 = (longlong *)(local_f8 + 0x58);
    do {
      if (plVar11[5] != 0) {
        FMemory::Free();
      }
      if (*plVar11 != 0) {
        FMemory::Free();
      }
      if (plVar11[-2] != 0) {
        FMemory::Free();
      }
      plVar11 = plVar11 + 0x12;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  if (local_f8 != 0) {
    FMemory::Free(local_f8);
  }
  return;
}



// FUNCTION 142c0e4d0 FUN_142c0e4d0 body=101 status=ok
// SIG undefined FUN_142c0e4d0(void)

void FUN_142c0e4d0(longlong *param_1,undefined8 param_2)

{
  undefined1 local_res8 [8];
  undefined8 local_res10 [3];
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  
  local_res10[0] = param_2;
  (**(code **)(*param_1 + 0x280))();
  local_18 = local_18 & 0xfffffffc;
  local_38 = local_res10;
  local_30 = &local_28;
  local_28 = 0;
  local_1c = 0;
  local_20 = 0xffffffff;
  FUN_141e1f6e0(param_1 + 0xf,local_res8,&local_38,0);
  return;
}



// FUNCTION 142c0e540 FUN_142c0e540 body=109 status=ok
// SIG undefined FUN_142c0e540(void)

void FUN_142c0e540(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0();
  }
  lVar1 = UCrowdManager::GetCurrent(lVar1);
  if (lVar1 != 0) {
    uVar2 = UCrowdAgentInterface::GetPrivateStaticClass();
    uVar2 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar2);
    FUN_142c0e4d0(lVar1,uVar2);
    *(uint *)(param_1 + 0x37c) = *(uint *)(param_1 + 0x37c) | 0x10;
    return;
  }
  *(uint *)(param_1 + 0x37c) = *(uint *)(param_1 + 0x37c) & 0xffffffef;
  return;
}



// FUNCTION 142c0e5b0 RemoveLocalNavigationGrid body=220 status=ok
// SIG undefined RemoveLocalNavigationGrid(void)

void UNavLocalGridManager::RemoveLocalNavigationGrid(undefined8 param_1,int param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  
  lVar3 = FUN_142c00de0();
  if (lVar3 != 0) {
    iVar6 = 0;
    if (0 < *(int *)(lVar3 + 0x40)) {
      lVar1 = *(longlong *)(lVar3 + 0x38);
      piVar5 = (int *)(lVar1 + 0x6c);
      do {
        if (*piVar5 == param_2) {
          lVar7 = (longlong)iVar6 * 0x80;
          if (*(longlong *)(lVar7 + 0x58 + lVar1) != 0) {
            FMemory::Free();
          }
          if (*(longlong *)(lVar7 + 0x48 + lVar1) != 0) {
            FMemory::Free();
          }
          iVar4 = *(int *)(lVar3 + 0x40);
          iVar2 = (iVar4 - iVar6) + -1;
          if (iVar2 != 0) {
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(lVar3 + 0x38) + lVar7),
                       (void *)((longlong)(iVar6 + 1) * 0x80 + *(longlong *)(lVar3 + 0x38)),
                       (longlong)iVar2 << 7);
            iVar4 = *(int *)(lVar3 + 0x40);
          }
          *(int *)(lVar3 + 0x40) = iVar4 + -1;
          *(uint *)(lVar3 + 0x54) = *(uint *)(lVar3 + 0x54) | 1;
          if (param_3 == '\0') {
            return;
          }
          FUN_142c0dbd0(lVar3);
          return;
        }
        iVar6 = iVar6 + 1;
        piVar5 = piVar5 + 0x20;
      } while (iVar6 < *(int *)(lVar3 + 0x40));
    }
  }
  return;
}



// FUNCTION 142c0e690 FUN_142c0e690 body=2377 status=ok
// SIG undefined FUN_142c0e690(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_142c0e690(longlong *param_1,int *param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  ushort uVar5;
  char cVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  float fVar16;
  undefined1 auStack_248 [32];
  undefined1 local_228;
  undefined4 local_220;
  ushort local_218;
  undefined1 local_216;
  longlong local_210;
  longlong *plStack_208;
  longlong local_200;
  longlong *plStack_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 uStack_1c8;
  float local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b8;
  longlong local_1b0;
  undefined4 local_1a8;
  longlong local_1a4;
  undefined4 local_19c;
  longlong local_198;
  undefined4 local_190;
  undefined8 local_18c;
  undefined4 local_184;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_174;
  float local_16c;
  undefined8 local_168;
  undefined4 local_160;
  longlong local_158;
  undefined4 local_150;
  undefined1 local_148 [8];
  undefined1 local_140 [24];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_f8 [8];
  undefined8 local_f0;
  code *local_e8;
  longlong local_d8 [4];
  longlong *local_b8;
  int local_a8;
  longlong local_98;
  longlong *plStack_90;
  longlong local_88;
  longlong *plStack_80;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  plVar12 = (longlong *)param_4[1];
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    plVar10 = plVar12 + 1;
    lVar13 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  if ((short)param_1[0x60] == 0) {
    fVar16 = *(float *)((longlong)param_3 + 0x24);
    if (fVar16 == -1.0) {
      fVar16 = *(float *)(param_1 + 0x3f);
    }
    if ((*param_4 != 0) && (0.0 <= fVar16)) {
      cVar6 = (**(code **)(*param_1 + 0x528))(param_1,0);
      if (cVar6 == '\0') {
        *param_2 = DAT_146690efc;
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_4);
        return param_2;
      }
      lVar13 = param_1[0x65];
      if ((((int)param_1[0x3c] == 2) && (param_1[0x3d] != 0)) && (*param_4 == param_1[0x3d])) {
        if ((*(byte *)(param_3 + 4) & 2) == 0) {
          lVar15 = 0;
        }
        else {
          lVar15 = *param_3;
        }
        cVar6 = FUN_14058c1e0(param_1 + 0x44,lVar15);
        if (cVar6 != '\0') {
          (**(code **)(*param_1 + 0x440))(param_1,DAT_146b2c570);
          *param_2 = (int)lVar13;
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_4);
          return param_2;
        }
      }
      uVar5 = DAT_1466911c6;
      if ((int)param_1[0x3c] != 0) {
        *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xffffffbf;
        local_218 = uVar5 | 0x80;
        local_216 = 3;
        (**(code **)(*param_1 + 0x450))(param_1,&local_218);
      }
      *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 0x40;
      (**(code **)(*param_1 + 0x4c0))(param_1);
      iVar2 = DAT_1466910c8;
      plVar12 = param_1 + 0x3d;
      iVar3 = DAT_1466910c8 + 1;
      *(int *)(param_1 + 0x65) = DAT_1466910c8;
      DAT_1466910c8 = iVar3;
      plVar10 = (longlong *)param_4[1];
      lVar13 = *param_4;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
      }
      local_210 = lVar13;
      plStack_208 = plVar10;
      if (&local_210 != plVar12) {
        local_210 = *plVar12;
        plStack_208 = (longlong *)param_1[0x3e];
        *plVar12 = lVar13;
        param_1[0x3e] = (longlong)plVar10;
        local_98 = lVar13;
        plStack_90 = plVar10;
      }
      plVar12 = plStack_208;
      if (plStack_208 != (longlong *)0x0) {
        LOCK();
        plVar10 = plStack_208 + 1;
        lVar13 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plStack_208)(plStack_208);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_208 + 8))(plStack_208,1);
          }
        }
      }
      uStack_1e0 = 0;
      local_1e8 = FUN_142c0be50;
      local_1c0 = 0;
      local_1b8 = 0;
      puVar8 = (undefined8 *)operator_new(0x30,&local_1c0);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &PTR_FUN_14428ae88;
        FWeakObjectPtr::operator=(puVar8 + 1,param_1);
        *(undefined4 *)(puVar8 + 2) = (undefined4)local_1e8;
        *(undefined4 *)((longlong)puVar8 + 0x14) = local_1e8._4_4_;
        *(undefined4 *)(puVar8 + 3) = uStack_1e0;
        *(undefined4 *)((longlong)puVar8 + 0x1c) = uStack_1dc;
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar8[5] = uVar9;
        *puVar8 = &PTR_FUN_14428aed0;
      }
      TBaseMulticastDelegate<void>::Add(param_1[0x3d] + 0x80,local_148,&local_1c0);
      TBaseDelegate<FText>::~TBaseDelegate<FText>();
      if ((param_1[0x39] != 0) && (*(longlong *)(param_1[0x39] + 0x118) != 0)) {
        FNavigationPath::SetSourceActor();
      }
      if (((*(byte *)(param_3 + 4) & 2) == 0) || (*param_3 == 0)) {
        local_190 = (int)param_3[2];
        plVar12 = &local_198;
        local_198 = param_3[1];
      }
      else {
        lVar13 = *(longlong *)(*param_3 + 0x168);
        if (lVar13 == 0) {
          local_1a8 = DAT_1468b5d98;
          plVar10 = &local_1b0;
          local_1b0 = _DAT_1468b5d90;
        }
        else {
          plVar10 = (longlong *)&local_1d8;
          local_1d8 = *(undefined4 *)(lVar13 + 0x220);
          local_128 = *(undefined4 *)(lVar13 + 0x220);
          uStack_124 = *(undefined4 *)(lVar13 + 0x224);
          uStack_120 = *(undefined4 *)(lVar13 + 0x228);
          uStack_11c = *(undefined4 *)(lVar13 + 0x22c);
          local_1d0 = *(undefined4 *)(lVar13 + 0x228);
          uStack_1d4 = *(undefined4 *)(lVar13 + 0x224);
        }
        local_19c = (int)plVar10[1];
        plVar12 = &local_1a4;
        local_1a4 = *plVar10;
      }
      lVar13 = plVar12[1];
      plVar10 = (longlong *)param_1[0x3d];
      *(longlong *)((longlong)param_1 + 0x28c) = *plVar12;
      *(int *)((longlong)param_1 + 0x294) = (int)lVar13;
      if (((int)plVar10[0xe] == DAT_146691110) ||
         ((plVar10[0xf] != 0 &&
          (cVar6 = FNavPathType::IsA(plVar10[0xf],&DAT_146691110), cVar6 != '\0')))) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      plVar12 = (longlong *)0x0;
      if (bVar4) {
        plVar12 = plVar10;
      }
      if (plVar12 != (longlong *)0x0) {
        *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 0x80;
        if (param_1[0x39] == 0) {
          local_16c = DAT_146691108;
          puVar8 = &local_174;
          local_174 = CONCAT44(DAT_146691100._4_4_,(float)DAT_146691100);
        }
        else {
          lVar13 = *(longlong *)(param_1[0x39] + 0x178);
          if (lVar13 == 0) {
            local_184 = DAT_1466910d8;
            puVar11 = &local_18c;
            local_18c = DAT_1466910d0;
          }
          else {
            local_1cc = *(undefined4 *)(lVar13 + 0x220);
            local_118 = *(undefined4 *)(lVar13 + 0x220);
            uStack_114 = *(undefined4 *)(lVar13 + 0x224);
            fStack_110 = *(float *)(lVar13 + 0x228);
            uStack_10c = *(undefined4 *)(lVar13 + 0x22c);
            uStack_1c8 = *(undefined4 *)(lVar13 + 0x224);
            puVar11 = (undefined8 *)&local_1cc;
            local_1c4 = *(float *)(lVar13 + 0x228) - *(float *)(lVar13 + 0x1e4);
          }
          local_178 = *(undefined4 *)(puVar11 + 1);
          puVar8 = &local_180;
          local_180 = *puVar11;
        }
        local_168 = *puVar8;
        local_160 = *(undefined4 *)(puVar8 + 1);
        (**(code **)(*plVar12 + 0x68))((int)local_168,&local_168);
      }
      *(undefined4 *)(param_1 + 0x53) = 0;
      (**(code **)(*param_1 + 0x460))(param_1);
      if ((int)param_1[0x65] == iVar2) {
        *(float *)((longlong)param_1 + 0x1fc) = fVar16;
        uVar14 = *(uint *)(param_3 + 4);
        *(uint *)(param_1 + 0x69) = *(uint *)(param_1 + 0x69) & 0xfffffffe;
        uVar14 = (uVar14 >> 5 ^ *(uint *)(param_1 + 0x54)) & 1 ^ *(uint *)(param_1 + 0x54);
        *(uint *)(param_1 + 0x54) = uVar14;
        *(uint *)(param_1 + 0x69) = *(uint *)(param_1 + 0x69) | uVar14 & 1;
        plVar12 = param_1 + 0x42;
        *(uint *)(param_1 + 0x54) = ((*(uint *)(param_3 + 4) >> 6 & 0xff) * 2 ^ uVar14) & 2 ^ uVar14
        ;
        plVar10 = (longlong *)param_3[6];
        lVar13 = param_3[5];
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
        local_200 = lVar13;
        plStack_1f8 = plVar10;
        if (&local_200 != plVar12) {
          local_200 = *plVar12;
          plStack_1f8 = (longlong *)param_1[0x43];
          *plVar12 = lVar13;
          param_1[0x43] = (longlong)plVar10;
          local_88 = lVar13;
          plStack_80 = plVar10;
        }
        plVar12 = plStack_1f8;
        if (plStack_1f8 != (longlong *)0x0) {
          LOCK();
          plVar10 = plStack_1f8 + 1;
          lVar13 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plStack_1f8)(plStack_1f8);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plStack_1f8 + 8))(plStack_1f8,1);
            }
          }
        }
        if ((*(byte *)(param_3 + 4) & 2) == 0) {
          lVar13 = 0;
        }
        else {
          lVar13 = *param_3;
        }
        plVar12 = (longlong *)0x0;
        FWeakObjectPtr::operator=(&local_1f0,lVar13);
        *(undefined4 *)(param_1 + 0x44) = local_1f0;
        *(undefined4 *)((longlong)param_1 + 0x224) = local_1ec;
        if (lVar13 != 0) {
          uVar9 = UNavAgentInterface::GetPrivateStaticClass();
          plVar12 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar13,uVar9);
        }
        param_1[0x45] = (longlong)plVar12;
        if (plVar12 == (longlong *)0x0) {
          local_150 = DAT_1468b5d98;
          plVar12 = &local_158;
          local_158 = _DAT_1468b5d90;
        }
        else {
          plVar12 = (longlong *)(**(code **)(*plVar12 + 0x28))(plVar12,local_140,param_1[0x23]);
        }
        lVar13 = param_1[0x3d];
        *(longlong *)((longlong)param_1 + 0x274) = *plVar12;
        lVar15 = plVar12[1];
        *(float *)((longlong)param_1 + 0x1fc) = fVar16;
        *(int *)((longlong)param_1 + 0x27c) = (int)lVar15;
        if ((((((lVar13 != 0) && ((*(uint *)(lVar13 + 0x98) & 2) != 0)) &&
              (1 < *(int *)(lVar13 + 0x30))) &&
             (((*(uint *)(lVar13 + 0x98) & 1) != 0 &&
              (-(float)DAT_146691100 < *(float *)((longlong)param_1 + 0x28c))))) &&
            (((*(float *)((longlong)param_1 + 0x28c) < (float)DAT_146691100 &&
              ((-DAT_146691100._4_4_ < *(float *)(param_1 + 0x52) &&
               (*(float *)(param_1 + 0x52) < DAT_146691100._4_4_)))) &&
             (-DAT_146691108 < *(float *)((longlong)param_1 + 0x294))))) &&
           (*(float *)((longlong)param_1 + 0x294) < DAT_146691108)) {
          uVar7 = FUN_142bfd640(param_1,lVar13,(longlong)param_1 + 0x28c);
          *(undefined4 *)((longlong)param_1 + 0x29c) = uVar7;
        }
        (**(code **)(*param_1 + 0x500))(param_1);
        if (((((*(byte *)(param_1 + 0x54) & 0x80) == 0) && (lVar13 = param_1[0x3d], lVar13 != 0)) &&
            ((*(uint *)(lVar13 + 0x98) & 2) != 0)) &&
           ((1 < *(int *)(lVar13 + 0x30) && ((*(uint *)(lVar13 + 0x98) & 1) != 0)))) {
          *(undefined4 *)(param_1 + 0x3c) = 3;
          uVar7 = (**(code **)(*param_1 + 0x518))(param_1,*param_4);
          (**(code **)(*param_1 + 0x4d8))(param_1,uVar7);
        }
        else {
          *(undefined4 *)(param_1 + 0x3c) = 1;
          local_1e8 = (code *)&LAB_142bf9b6c;
          lVar13 = param_1[0x24];
          uStack_1e0 = 0;
          if (lVar13 == 0) {
            lVar13 = FUN_1423407b0(param_1);
          }
          if (*(longlong *)(lVar13 + 400) == 0) {
            uVar9 = *(undefined8 *)(lVar13 + 0x3f8);
          }
          else {
            uVar9 = *(undefined8 *)(*(longlong *)(lVar13 + 400) + 0x90);
          }
          uVar7 = *(undefined4 *)((longlong)param_1 + 0x2a4);
          plVar12 = (longlong *)FMemory::Realloc(0,0x30);
          if (plVar12 != (longlong *)0x0) {
            *plVar12 = (longlong)&PTR_FUN_143f77b88;
            FWeakObjectPtr::operator=(plVar12 + 1,param_1);
            *(undefined4 *)(plVar12 + 2) = (undefined4)local_1e8;
            *(undefined4 *)((longlong)plVar12 + 0x14) = local_1e8._4_4_;
            *(undefined4 *)(plVar12 + 3) = uStack_1e0;
            *(undefined4 *)((longlong)plVar12 + 0x1c) = uStack_1dc;
            lVar13 = FDelegateHandle::GenerateNewID();
            plVar12[5] = lVar13;
            *plVar12 = (longlong)&PTR_FUN_143f77bd0;
          }
          local_108 = 0;
          local_100 = 0;
          if (plVar12 != (longlong *)0x0) {
            (**(code **)(*plVar12 + 0x30))(plVar12,&local_108);
          }
          FWeakObjectPtr::operator=(local_f8,0);
          local_220 = 0xbf800000;
          local_e8 = AK::MemoryMgr::StartProfileThreadUsage;
          local_f0 = 0;
          local_b8 = (longlong *)0x0;
          local_a8 = 0;
          local_228 = 0;
          FUN_142880850(uVar9,param_1 + 100,&local_108,uVar7);
          if (local_a8 != 0) {
            plVar10 = local_d8;
            if (local_b8 != (longlong *)0x0) {
              plVar10 = local_b8;
            }
            if (plVar10 != (longlong *)0x0) {
              (**(code **)(*plVar10 + 0x10))(plVar10,0);
            }
          }
          if (local_b8 != (longlong *)0x0) {
            FMemory::Free();
          }
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_108);
          if (plVar12 != (longlong *)0x0) {
            (**(code **)(*plVar12 + 0x28))(plVar12,0);
            lVar13 = FMemory::Realloc(plVar12,0,0);
            if (lVar13 != 0) {
              FMemory::Free(lVar13);
            }
          }
        }
      }
      *param_2 = iVar2;
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_4);
      return param_2;
    }
  }
  *param_2 = DAT_146690efc;
  plVar12 = (longlong *)param_4[1];
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar12 + 1;
    lVar13 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142c0efe0 FUN_142c0efe0 body=503 status=ok
// SIG undefined FUN_142c0efe0(void)

undefined8
FUN_142c0efe0(longlong *param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
             longlong param_5,undefined4 param_6,byte param_7,longlong param_8)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong local_68;
  longlong local_60;
  undefined1 local_58 [32];
  uint local_38;
  undefined4 local_34;
  longlong *local_28;
  
  FAIMoveRequest::FAIMoveRequest(local_58);
  if (param_5 == 0) {
    lVar4 = *param_3;
    if ((lVar4 == 0) || (*(int *)(lVar4 + 0x30) == 0)) {
      puVar6 = &DAT_146691100;
    }
    else {
      puVar6 = (undefined8 *)
               ((longlong)(*(int *)(lVar4 + 0x30) + -1) * 0x20 + *(longlong *)(lVar4 + 0x28));
    }
    FAIMoveRequest::SetGoalLocation(local_58,puVar6);
  }
  else {
    FAIMoveRequest::SetGoalActor(local_58);
  }
  local_38 = (uint)param_7 << 5 | local_38 & 0xffffffdf;
  local_34 = param_6;
  FAIMoveRequest::SetUserData(local_58,param_8);
  local_68 = *param_3;
  local_60 = param_3[1];
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*param_1 + 0x418))(param_1,param_2,local_58,&local_68);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_28 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_28 + 8))(local_28,1);
      }
    }
  }
  plVar5 = (longlong *)param_3[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = (longlong *)0x0;
  if ((int)param_4[1] != 0) {
    plVar5 = (longlong *)*param_4;
  }
  if ((plVar5 != (longlong *)0x0) ||
     (((int)param_4[1] != 0 && (plVar5 = (longlong *)*param_4, plVar5 != (longlong *)0x0)))) {
    (**(code **)(*plVar5 + 0x28))(plVar5,0);
    if (*param_4 != 0) {
      lVar4 = FMemory::Realloc(*param_4,0,0);
      *param_4 = lVar4;
    }
    *(undefined4 *)(param_4 + 1) = 0;
  }
  if (*param_4 != 0) {
    FMemory::Free();
  }
  plVar5 = *(longlong **)(param_8 + 8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142c0f1e0 FUN_142c0f1e0 body=155 status=ok
// SIG undefined FUN_142c0f1e0(void)

int * FUN_142c0f1e0(longlong *param_1,int *param_2,int param_3)

{
  int iVar1;
  ushort local_res18;
  undefined1 local_res1a;
  
  if ((int)param_1[0x3c] != 0) {
    local_res1a = 3;
    local_res18 = DAT_1466911c6 | 0x80;
    (**(code **)(*param_1 + 0x450))(param_1,&local_res18);
  }
  *param_2 = DAT_1466910c8;
  local_res1a = (undefined1)param_3;
  iVar1 = DAT_1466910c8 + 1;
  *(int *)(param_1 + 0x65) = DAT_1466910c8;
  DAT_1466910c8 = iVar1;
  local_res18 = (&DAT_1466911c0)[param_3];
  (**(code **)(*param_1 + 0x450))(param_1,&local_res18);
  return param_2;
}



// FUNCTION 142c0f280 FUN_142c0f280 body=50 status=ok
// SIG undefined FUN_142c0f280(void)

void FUN_142c0f280(longlong param_1)

{
  FUN_142c0f2f0();
  *(undefined8 *)(param_1 + 0x390) = 0;
  *(uint *)(param_1 + 0x37c) = *(uint *)(param_1 + 0x37c) & 0xfffedffb | 0x4000;
  return;
}



// FUNCTION 142c0f2c0 FUN_142c0f2c0 body=47 status=ok
// SIG undefined FUN_142c0f2c0(void)

void FUN_142c0f2c0(longlong param_1)

{
  FUN_142c0f2f0();
  *(undefined8 *)(param_1 + 0x358) = 0xffffffffffffffff;
  *(uint *)(param_1 + 0x360) = *(uint *)(param_1 + 0x360) & 0xfffffffc;
  *(undefined8 *)(param_1 + 0x378) = 0;
  return;
}



// FUNCTION 142c0f2f0 FUN_142c0f2f0 body=521 status=ok
// SIG undefined FUN_142c0f2f0(void)

void FUN_142c0f2f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  *(undefined4 *)(param_1 + 0x2fc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x2cc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x2c0,0);
  }
  *(undefined8 *)(param_1 + 0x2b4) = 0;
  local_20 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x1e8) != &local_28) {
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1f0,&local_20);
    plVar4 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x210) != &local_18) {
    *(undefined8 *)(param_1 + 0x210) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x218,&local_10);
    plVar4 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x220) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x224) = 0;
  FBasedPosition::Clear(param_1 + 0x230);
  *(uint *)(param_1 + 0x348) = *(uint *)(param_1 + 0x348) | 1;
  *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(param_1 + 0x1f8);
  *(undefined4 *)(param_1 + 0x29c) = 0xffffffff;
  *(uint *)(param_1 + 0x2a0) = *(uint *)(param_1 + 0x2a0) & 0xfffffe6f | 3;
  *(undefined8 *)(param_1 + 0x28c) = DAT_146691100;
  *(undefined4 *)(param_1 + 0x294) = DAT_146691108;
  *(undefined4 *)(param_1 + 0x328) = DAT_146690efc;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  if (*(longlong *)(param_1 + 800) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x120);
    if (lVar5 == 0) {
      lVar5 = FUN_1423407b0(param_1);
    }
    if (*(longlong *)(lVar5 + 400) == 0) {
      uVar6 = *(undefined8 *)(lVar5 + 0x3f8);
    }
    else {
      uVar6 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0x90);
    }
    FUN_142880530(uVar6,param_1 + 800);
    *(undefined8 *)(param_1 + 800) = 0;
  }
  return;
}



// FUNCTION 142c0f500 FUN_142c0f500 body=159 status=ok
// SIG undefined FUN_142c0f500(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c0f500(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (((((*(char *)(param_1 + 0x399) == '\0') && (*(int *)(param_1 + 0x1e0) == 2)) &&
       (iVar1 = *(int *)(param_1 + 0x328), iVar1 != -1)) && (param_2 != -1)) &&
     (((param_2 == iVar1 || (param_2 == 0)) || (iVar1 == 0)))) {
    lVar2 = *(longlong *)(param_1 + 0x120);
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0();
    }
    lVar2 = UCrowdManager::GetCurrent(lVar2);
    if ((lVar2 != 0) && ((*(uint *)(param_1 + 0x37c) & 0x20000) != 0)) {
      FUN_142c09610(param_1);
    }
    *(undefined8 *)(param_1 + 0x358) = _DAT_1468b5d90;
    *(undefined4 *)(param_1 + 0x360) = DAT_1468b5d98;
  }
  FUN_142c0f6c0(param_1,param_2);
  return;
}



// FUNCTION 142c0f5a0 FUN_142c0f5a0 body=278 status=ok
// SIG undefined FUN_142c0f5a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c0f5a0(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_28;
  float local_20;
  undefined8 local_18;
  float local_10;
  
  iVar1 = *(int *)(param_1 + 0x328);
  if (((iVar1 == -1) || (param_2 == -1)) || ((param_2 != iVar1 && ((param_2 != 0 && (iVar1 != 0)))))
     ) {
    return;
  }
  local_28 = _DAT_1468b5d90;
  local_20 = DAT_1468b5d98;
  if ((*(longlong *)(param_1 + 0x1c8) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x178), local_28 = DAT_1466910d0,
     local_20 = DAT_1466910d8, lVar2 != 0)) {
    local_28 = *(undefined8 *)(lVar2 + 0x220);
    local_20 = *(float *)(lVar2 + 0x228) - *(float *)(lVar2 + 0x1e4);
  }
  local_18 = local_28;
  local_10 = local_20;
  FUN_142c15ef0(param_1,&local_28);
  if (*(int *)(param_1 + 0x358) == -1) {
    FUN_142c0f6c0(param_1,DAT_146b2c570);
    return;
  }
  *(undefined4 *)(param_1 + 0x1e0) = 3;
  return;
}



// FUNCTION 142c0f6c0 FUN_142c0f6c0 body=290 status=ok
// SIG undefined FUN_142c0f6c0(void)

void FUN_142c0f6c0(longlong *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined2 local_res8;
  undefined1 local_resa;
  
  iVar1 = (int)param_1[0x65];
  if (((iVar1 != -1) && (param_2 != -1)) && ((param_2 == iVar1 || ((param_2 == 0 || (iVar1 == 0)))))
     ) {
    cVar3 = (**(code **)(*param_1 + 0x4d0))();
    cVar4 = (**(code **)(*param_1 + 0x510))(param_1);
    lVar6 = param_1[0x3d];
    if (cVar4 != '\0') {
      *(undefined4 *)(param_1 + 0x3c) = 3;
      if (lVar6 == 0) {
        bVar2 = false;
      }
      else {
        bVar2 = *(float *)(param_1 + 0x53) < *(float *)(lVar6 + 0xe0);
      }
      if ((cVar3 != '\0') || (bVar2)) {
        uVar5 = (**(code **)(*param_1 + 0x518))(param_1,lVar6);
                    /* WARNING: Could not recover jumptable at 0x000142c0f768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x4d8))(param_1,uVar5);
        return;
      }
LAB_142c0f7a3:
      FUN_142c16a70(param_1);
      return;
    }
    if ((((lVar6 != 0) && ((*(uint *)(lVar6 + 0x98) & 2) != 0)) && (1 < *(int *)(lVar6 + 0x30))) &&
       ((*(uint *)(lVar6 + 0x98) & 1) != 0)) {
      lVar6 = FWeakObjectPtr::Get(lVar6 + 0x9c);
      if (lVar6 == 0) {
        *(undefined4 *)(param_1 + 0x3c) = 3;
        goto LAB_142c0f7a3;
      }
    }
    local_res8 = DAT_1466911c4;
    local_resa = 2;
    (**(code **)(*param_1 + 0x450))(param_1,&local_res8);
  }
  return;
}



// FUNCTION 142c0f7f0 FUN_142c0f7f0 body=194 status=ok
// SIG undefined FUN_142c0f7f0(void)

void FUN_142c0f7f0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  uVar2 = FUN_142c46ed0();
  plVar3 = (longlong *)(**(code **)(*param_2 + 0x628))(param_2,uVar2);
  if (plVar3 == (longlong *)0x0) {
    lVar4 = FUN_1429d7ab0();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return;
    }
    plVar3 = (longlong *)param_2[0x92];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
    uVar2 = FUN_142c46ed0();
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x628))(plVar3,uVar2);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x488) + 0x1a8;
  if (*(longlong *)(param_1 + 0x488) == 0) {
    lVar4 = 0;
  }
  (**(code **)(*plVar3 + 0x4a8))(plVar3,lVar4);
  return;
}



// FUNCTION 142c0f8c0 FUN_142c0f8c0 body=509 status=ok
// SIG undefined FUN_142c0f8c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_142c0f8c0(undefined8 param_1,float *param_2,float *param_3,undefined8 param_4,undefined8 param_5
             ,undefined4 param_6,undefined8 param_7,undefined4 *param_8)

{
  bool bVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_158 [32];
  undefined4 *local_138;
  undefined4 *local_130;
  undefined4 *local_128;
  undefined *local_120;
  float local_118;
  float local_114;
  float local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined4 local_c8 [18];
  longlong local_80;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  FUN_140e3fc20(local_c8,param_7);
  FCollisionQueryParams::AddIgnoredActor(local_c8,param_4);
  if (ABS(*param_2 - *param_3) < 0.0001) {
    if (ABS(param_2[1] - param_3[1]) < 0.0001) {
      if (ABS(param_2[2] - param_3[2]) < 0.0001) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = false;
  }
  local_114 = param_3[1] - param_2[1];
  local_110 = param_3[2] - param_2[2];
  local_118 = *param_3 - *param_2;
  local_108 = *param_8;
  local_104 = param_8[1];
  local_100 = param_8[2];
  local_10c = 1;
  if (bVar1) {
    uVar3 = FVector::Rotation(&local_118,local_e8);
    puVar4 = (undefined4 *)FRotator::Quaternion(uVar3,local_d8);
    local_f8 = *puVar4;
    uStack_f4 = puVar4[1];
    uStack_f0 = puVar4[2];
    uStack_ec = puVar4[3];
    local_128 = (undefined4 *)&DAT_146aefe68;
    local_130 = local_c8;
    local_138 = &local_10c;
    uVar2 = UWorld::OverlapAnyTestByChannel(param_5,param_2,&local_f8,param_6);
  }
  else {
    uVar3 = FVector::Rotation(&local_118,local_e8);
    puVar4 = (undefined4 *)FRotator::Quaternion(uVar3,local_d8);
    local_f8 = *puVar4;
    uStack_f4 = puVar4[1];
    uStack_f0 = puVar4[2];
    uStack_ec = puVar4[3];
    local_120 = &DAT_146aefe68;
    local_128 = local_c8;
    local_130 = &local_10c;
    local_138 = (undefined4 *)CONCAT44(local_138._4_4_,param_6);
    uVar2 = UWorld::SweepTestByChannel(param_5,param_2,param_3,&local_f8);
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_80 != 0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 142c0fac0 FUN_142c0fac0 body=504 status=ok
// SIG undefined FUN_142c0fac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_142c0fac0(undefined8 param_1,float *param_2,float *param_3,undefined8 param_4,undefined8 param_5
             ,undefined4 param_6,undefined8 param_7,undefined4 *param_8)

{
  bool bVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_158 [32];
  undefined4 *local_138;
  undefined4 *local_130;
  undefined4 *local_128;
  undefined *local_120;
  float local_118;
  float local_114;
  float local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined4 local_c8 [18];
  longlong local_80;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  FUN_140e3fc20(local_c8,param_7);
  FCollisionQueryParams::AddIgnoredActor(local_c8,param_4);
  local_118 = *param_2 - *param_3;
  if (ABS(local_118) < 0.0001) {
    if (ABS(param_2[1] - param_3[1]) < 0.0001) {
      if (ABS(param_2[2] - param_3[2]) < 0.0001) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = false;
  }
  local_114 = param_2[1] - param_3[1];
  local_110 = param_2[2] - param_3[2];
  local_108 = *param_8;
  local_104 = param_8[1];
  local_100 = param_8[2];
  local_10c = 1;
  if (bVar1) {
    uVar3 = FVector::Rotation(&local_118,local_e8);
    puVar4 = (undefined4 *)FRotator::Quaternion(uVar3,local_d8);
    local_f8 = *puVar4;
    uStack_f4 = puVar4[1];
    uStack_f0 = puVar4[2];
    uStack_ec = puVar4[3];
    local_128 = (undefined4 *)&DAT_146aefe68;
    local_130 = local_c8;
    local_138 = &local_10c;
    uVar2 = UWorld::OverlapAnyTestByChannel(param_5,param_2,&local_f8,param_6);
  }
  else {
    uVar3 = FVector::Rotation(&local_118,local_e8);
    puVar4 = (undefined4 *)FRotator::Quaternion(uVar3,local_d8);
    local_f8 = *puVar4;
    uStack_f4 = puVar4[1];
    uStack_f0 = puVar4[2];
    uStack_ec = puVar4[3];
    local_120 = &DAT_146aefe68;
    local_128 = local_c8;
    local_130 = &local_10c;
    local_138 = (undefined4 *)CONCAT44(local_138._4_4_,param_6);
    uVar2 = UWorld::SweepTestByChannel(param_5,param_3,param_2,&local_f8);
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_80 != 0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 142c0fcc0 FUN_142c0fcc0 body=387 status=ok
// SIG undefined FUN_142c0fcc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_142c0fcc0(undefined8 param_1,float *param_2,float *param_3,undefined8 param_4,undefined8 param_5
             ,undefined4 param_6,undefined8 param_7,undefined4 *param_8)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 auStack_f8 [32];
  undefined4 *local_d8;
  undefined4 *local_d0;
  undefined4 *local_c8;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_a8 [18];
  longlong local_60;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  FUN_140e3fc20(local_a8,param_7);
  FCollisionQueryParams::AddIgnoredActor(local_a8,param_4);
  if (ABS(*param_2 - *param_3) < 0.0001) {
    if (ABS(param_2[1] - param_3[1]) < 0.0001) {
      bVar1 = ABS(param_2[2] - param_3[2]) < 0.0001;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = false;
  }
  local_b8 = 3;
  local_b4 = *param_8;
  local_b0 = param_8[2];
  if (bVar1) {
    local_c8 = (undefined4 *)&DAT_146aefe68;
    local_d0 = local_a8;
    local_d8 = &local_b8;
    uVar2 = UWorld::OverlapAnyTestByChannel(param_5,param_2,&DAT_1464aa810,param_6);
  }
  else {
    local_c0 = &DAT_146aefe68;
    local_c8 = local_a8;
    local_d0 = &local_b8;
    local_d8 = (undefined4 *)CONCAT44(local_d8._4_4_,param_6);
    uVar2 = UWorld::SweepTestByChannel(param_5,param_2,param_3,&DAT_1464aa810);
  }
  if (local_40 != 0) {
    FMemory::Free();
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 142c0fe50 FUN_142c0fe50 body=390 status=ok
// SIG undefined FUN_142c0fe50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_142c0fe50(undefined8 param_1,float *param_2,float *param_3,undefined8 param_4,undefined8 param_5
             ,undefined4 param_6,undefined8 param_7,undefined4 *param_8)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 auStack_f8 [32];
  undefined4 *local_d8;
  undefined4 *local_d0;
  undefined4 *local_c8;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_a8 [18];
  longlong local_60;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  FUN_140e3fc20(local_a8,param_7);
  FCollisionQueryParams::AddIgnoredActor(local_a8,param_4);
  if (ABS(*param_2 - *param_3) < 0.0001) {
    if (ABS(param_2[1] - param_3[1]) < 0.0001) {
      bVar1 = ABS(param_2[2] - param_3[2]) < 0.0001;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = false;
  }
  local_b8 = 3;
  local_b4 = *param_8;
  local_b0 = param_8[2];
  if (bVar1) {
    local_c8 = (undefined4 *)&DAT_146aefe68;
    local_d0 = local_a8;
    local_d8 = &local_b8;
    uVar2 = UWorld::OverlapAnyTestByChannel(param_5,param_2,&DAT_1464aa810,param_6);
  }
  else {
    local_c0 = &DAT_146aefe68;
    local_c8 = local_a8;
    local_d0 = &local_b8;
    local_d8 = (undefined4 *)CONCAT44(local_d8._4_4_,param_6);
    uVar2 = UWorld::SweepTestByChannel(param_5,param_3,param_2,&DAT_1464aa810);
  }
  if (local_40 != 0) {
    FMemory::Free();
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 142c0ffe0 RunLineTraceFrom body=199 status=ok
// SIG undefined RunLineTraceFrom(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
UEnvQueryTest_Trace::RunLineTraceFrom
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined *local_b0;
  undefined1 local_a8 [72];
  longlong local_60;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  FUN_140e3fc20(local_a8,param_7);
  FCollisionQueryParams::AddIgnoredActor(local_a8,param_4);
  local_b0 = &DAT_146aefe68;
  local_b8 = local_a8;
  uVar1 = UWorld::LineTraceTestByChannel(param_5,param_2,param_3,param_6);
  if (local_40 != 0) {
    FMemory::Free();
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 142c100b0 RunLineTraceTo body=199 status=ok
// SIG undefined RunLineTraceTo(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
UEnvQueryTest_Trace::RunLineTraceTo
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined *local_b0;
  undefined1 local_a8 [72];
  longlong local_60;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  FUN_140e3fc20(local_a8,param_7);
  FCollisionQueryParams::AddIgnoredActor(local_a8,param_4);
  local_b0 = &DAT_146aefe68;
  local_b8 = local_a8;
  uVar1 = UWorld::LineTraceTestByChannel(param_5,param_3,param_2,param_6);
  if (local_40 != 0) {
    FMemory::Free();
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 142c10180 RunOverlap body=211 status=ok
// SIG undefined RunOverlap(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
UEnvQueryTest_Overlap::RunOverlap
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined *local_b8;
  undefined1 local_a8 [72];
  longlong local_60;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  FUN_140e3fc20(local_a8,param_7);
  FCollisionQueryParams::AddIgnoredActor(local_a8,param_4);
  local_b8 = &DAT_146aefe68;
  local_c0 = local_a8;
  local_c8 = param_3;
  uVar1 = UWorld::OverlapAnyTestByChannel(param_5,param_2,&DAT_1464aa810,param_6);
  if (local_40 != 0) {
    FMemory::Free();
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 142c10260 RunOverlap body=211 status=ok
// SIG undefined RunOverlap(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
UEnvQueryTest_Overlap::RunOverlap
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined *local_b8;
  undefined1 local_a8 [72];
  longlong local_60;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  FUN_140e3fc20(local_a8,param_7);
  FCollisionQueryParams::AddIgnoredActor(local_a8,param_4);
  local_b8 = &DAT_146aefe68;
  local_c0 = local_a8;
  local_c8 = param_3;
  uVar1 = UWorld::OverlapAnyTestByChannel(param_5,param_2,&DAT_1464aa810,param_6);
  if (local_40 != 0) {
    FMemory::Free();
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 142c10340 FUN_142c10340 body=376 status=ok
// SIG undefined FUN_142c10340(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_142c10340(undefined8 param_1,float *param_2,float *param_3,undefined8 param_4,undefined8 param_5
             ,undefined4 param_6,undefined8 param_7,undefined4 *param_8)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 auStack_f8 [32];
  undefined4 *local_d8;
  undefined4 *local_d0;
  undefined4 *local_c8;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_a8 [18];
  longlong local_60;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  FUN_140e3fc20(local_a8,param_7);
  FCollisionQueryParams::AddIgnoredActor(local_a8,param_4);
  if (ABS(*param_2 - *param_3) < 0.0001) {
    if (ABS(param_2[1] - param_3[1]) < 0.0001) {
      bVar1 = ABS(param_2[2] - param_3[2]) < 0.0001;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = false;
  }
  local_b8 = 2;
  local_b4 = *param_8;
  if (bVar1) {
    local_c8 = (undefined4 *)&DAT_146aefe68;
    local_d0 = local_a8;
    local_d8 = &local_b8;
    uVar2 = UWorld::OverlapAnyTestByChannel(param_5,param_2,&DAT_1464aa810,param_6);
  }
  else {
    local_c0 = &DAT_146aefe68;
    local_c8 = local_a8;
    local_d0 = &local_b8;
    local_d8 = (undefined4 *)CONCAT44(local_d8._4_4_,param_6);
    uVar2 = UWorld::SweepTestByChannel(param_5,param_2,param_3,&DAT_1464aa810);
  }
  if (local_40 != 0) {
    FMemory::Free();
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 142c104c0 FUN_142c104c0 body=379 status=ok
// SIG undefined FUN_142c104c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_142c104c0(undefined8 param_1,float *param_2,float *param_3,undefined8 param_4,undefined8 param_5
             ,undefined4 param_6,undefined8 param_7,undefined4 *param_8)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 auStack_f8 [32];
  undefined4 *local_d8;
  undefined4 *local_d0;
  undefined4 *local_c8;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_a8 [18];
  longlong local_60;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  FUN_140e3fc20(local_a8,param_7);
  FCollisionQueryParams::AddIgnoredActor(local_a8,param_4);
  if (ABS(*param_2 - *param_3) < 0.0001) {
    if (ABS(param_2[1] - param_3[1]) < 0.0001) {
      bVar1 = ABS(param_2[2] - param_3[2]) < 0.0001;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = false;
  }
  local_b8 = 2;
  local_b4 = *param_8;
  if (bVar1) {
    local_c8 = (undefined4 *)&DAT_146aefe68;
    local_d0 = local_a8;
    local_d8 = &local_b8;
    uVar2 = UWorld::OverlapAnyTestByChannel(param_5,param_2,&DAT_1464aa810,param_6);
  }
  else {
    local_c0 = &DAT_146aefe68;
    local_c8 = local_a8;
    local_d0 = &local_b8;
    local_d8 = (undefined4 *)CONCAT44(local_d8._4_4_,param_6);
    uVar2 = UWorld::SweepTestByChannel(param_5,param_3,param_2,&DAT_1464aa810);
  }
  if (local_40 != 0) {
    FMemory::Free();
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 142c10640 FUN_142c10640 body=3013 status=ok
// SIG undefined FUN_142c10640(void)

void FUN_142c10640(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  short sVar6;
  short sVar7;
  float *pfVar8;
  ulonglong uVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  LARGE_INTEGER local_res10;
  float local_c8;
  float local_c4;
  float local_c0;
  float *local_b8;
  ulonglong local_b0;
  longlong *local_a8;
  int local_a0;
  double local_98;
  undefined8 local_90;
  char local_87;
  byte local_86;
  
  lVar4 = FWeakObjectPtr::Get(param_2 + 0x34);
  if (lVar4 == 0) {
    return;
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)param_2);
  FAIDataProviderValue::BindData(param_1 + 0x90,lVar4,*(undefined4 *)(param_2 + 0x30));
  fVar11 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x90);
  fVar11 = fVar11 - *(float *)(param_1 + 0x1e8);
  FAIDataProviderValue::BindData(param_1 + 0xc0,lVar4,*(undefined4 *)(param_2 + 0x30));
  fVar12 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0xc0);
  fVar12 = fVar12 + *(float *)(param_1 + 0x1e8);
  local_b8 = (float *)0x0;
  local_b0 = 0;
  lVar4 = 0;
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    lVar5 = UEnvQueryContext::GetPrivateStaticClass();
    for (lVar2 = *(longlong *)(param_1 + 0x1e0);
        (lVar4 = 0, lVar2 != 0 && (lVar4 = *(longlong *)(param_1 + 0x1e0), lVar2 != lVar5));
        lVar2 = *(longlong *)(lVar2 + 0x30)) {
    }
  }
  cVar3 = FUN_142bedad0(param_2,lVar4,&local_b8);
  if (cVar3 != '\0') {
    cVar3 = *(char *)(param_1 + 0x1d8);
    if (cVar3 == '\0') {
      FUN_142bd2270(&local_a8,param_1,param_2,0xffffffff);
      do {
        if ((((int)local_a8[1] <= local_a0) || ((*(byte *)((longlong)local_a8 + 0x156) & 1) != 0))
           || ((0.0 <= local_98 &&
               (QueryPerformanceCounter(&local_res10),
               local_98 <= (double)local_res10.QuadPart * DAT_1468b02f8 + 16777216.0))))
        goto LAB_142c111a3;
        FUN_142be5200(param_1,&local_c8,param_2,local_a0);
        if (((((local_c8 <= -(float)DAT_146691100) || ((float)DAT_146691100 <= local_c8)) ||
             (local_c4 <= -DAT_146691100._4_4_)) ||
            ((DAT_146691100._4_4_ <= local_c4 || (local_c0 <= -DAT_146691108)))) ||
           (DAT_146691108 <= local_c0)) {
          local_86 = local_86 & 0xfe | 2;
          local_90 = CONCAT44(local_90._4_4_,0xff7fffff);
        }
        else if (0 < (int)local_b0) {
          uVar9 = local_b0 & 0xffffffff;
          pfVar8 = local_b8 + 2;
          fVar14 = (float)local_90;
          sVar7 = local_90._6_2_;
          sVar6 = local_90._4_2_;
          do {
            fVar13 = SQRT((pfVar8[-1] - local_c4) * (pfVar8[-1] - local_c4) +
                          (pfVar8[-2] - local_c8) * (pfVar8[-2] - local_c8) +
                          (*pfVar8 - local_c0) * (*pfVar8 - local_c0));
            if ((local_86 >> 1 & 1) == 0) {
              if (*(char *)(param_1 + 0x44) == '\x01') {
LAB_142c110b8:
                if (local_87 == '\0') {
                  fVar14 = fVar14 + fVar13;
                  local_90 = (ulonglong)(uint)fVar14;
                }
                else if (local_87 == '\x01') {
                  if ((sVar6 == 0) || (fVar13 < fVar14)) {
LAB_142c110e7:
                    local_90 = (ulonglong)(uint)fVar13;
                    fVar14 = fVar13;
                  }
                }
                else if (local_87 == '\x02') {
                  if (sVar6 == 0) goto LAB_142c110e7;
                  if (fVar14 < fVar13) {
                    local_90 = (ulonglong)(uint)fVar13;
                    fVar14 = fVar13;
                  }
                }
                sVar6 = sVar6 + 1;
                local_90._0_6_ = CONCAT24(sVar6,(float)local_90);
                local_90 = (ulonglong)(uint6)local_90;
              }
              else {
                cVar3 = *(char *)(param_1 + 0x5a);
                if (cVar3 == '\0') {
                  bVar10 = fVar13 < fVar11;
LAB_142c110b1:
                  if (!bVar10) goto LAB_142c110b8;
                }
                else {
                  if (cVar3 == '\x01') {
                    bVar10 = fVar12 < fVar13;
                    goto LAB_142c110b1;
                  }
                  if (((cVar3 == '\x02') && (fVar11 <= fVar13)) && (fVar13 <= fVar12))
                  goto LAB_142c110b8;
                }
              }
              sVar7 = sVar7 + 1;
              local_90 = CONCAT26(sVar7,(uint6)local_90);
            }
            pfVar8 = pfVar8 + 3;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        FUN_142bf3280(&local_a8);
        if ((*(byte *)((longlong)local_a8 + 0x156) & 1) == 0) {
          local_a0 = local_a0 + 1;
          local_90 = 0;
          local_86 = local_86 & 0xfd | 1;
          if ((int)local_a8[1] <= local_a0) goto LAB_142c111a3;
          do {
            uVar1 = *(uint *)(*local_a8 + 4 + (longlong)local_a0 * 0xc);
            if (((uVar1 >> 0x1e & 1) == 0) && (-1 < (int)uVar1)) break;
            local_a0 = local_a0 + 1;
          } while (local_a0 < (int)local_a8[1]);
        }
      } while( true );
    }
    if (cVar3 == '\x01') {
      FUN_142bd2270(&local_a8,param_1,param_2,0xffffffff);
      do {
        if ((((int)local_a8[1] <= local_a0) || ((*(byte *)((longlong)local_a8 + 0x156) & 1) != 0))
           || ((0.0 <= local_98 &&
               (QueryPerformanceCounter(&local_res10),
               local_98 <= (double)local_res10.QuadPart * DAT_1468b02f8 + 16777216.0))))
        goto LAB_142c111a3;
        FUN_142be5200(param_1,&local_c8,param_2,local_a0);
        if (((((local_c8 <= -(float)DAT_146691100) || ((float)DAT_146691100 <= local_c8)) ||
             (local_c4 <= -DAT_146691100._4_4_)) ||
            ((DAT_146691100._4_4_ <= local_c4 || (local_c0 <= -DAT_146691108)))) ||
           (DAT_146691108 <= local_c0)) {
          local_86 = local_86 & 0xfe | 2;
          local_90 = CONCAT44(local_90._4_4_,0xff7fffff);
        }
        else if (0 < (int)local_b0) {
          uVar9 = local_b0 & 0xffffffff;
          pfVar8 = local_b8;
          fVar14 = (float)local_90;
          sVar7 = local_90._6_2_;
          sVar6 = local_90._4_2_;
          do {
            fVar13 = SQRT((pfVar8[1] - local_c4) * (pfVar8[1] - local_c4) +
                          (*pfVar8 - local_c8) * (*pfVar8 - local_c8));
            if ((local_86 >> 1 & 1) == 0) {
              if (*(char *)(param_1 + 0x44) == '\x01') {
LAB_142c10e18:
                if (local_87 == '\0') {
                  fVar14 = fVar14 + fVar13;
                  local_90 = (ulonglong)(uint)fVar14;
                }
                else if (local_87 == '\x01') {
                  if ((sVar6 == 0) || (fVar13 < fVar14)) {
LAB_142c10e47:
                    local_90 = (ulonglong)(uint)fVar13;
                    fVar14 = fVar13;
                  }
                }
                else if (local_87 == '\x02') {
                  if (sVar6 == 0) goto LAB_142c10e47;
                  if (fVar14 < fVar13) {
                    local_90 = (ulonglong)(uint)fVar13;
                    fVar14 = fVar13;
                  }
                }
                sVar6 = sVar6 + 1;
                local_90._0_6_ = CONCAT24(sVar6,(float)local_90);
                local_90 = (ulonglong)(uint6)local_90;
              }
              else {
                cVar3 = *(char *)(param_1 + 0x5a);
                if (cVar3 == '\0') {
                  bVar10 = fVar13 < fVar11;
LAB_142c10e11:
                  if (!bVar10) goto LAB_142c10e18;
                }
                else {
                  if (cVar3 == '\x01') {
                    bVar10 = fVar12 < fVar13;
                    goto LAB_142c10e11;
                  }
                  if (((cVar3 == '\x02') && (fVar11 <= fVar13)) && (fVar13 <= fVar12))
                  goto LAB_142c10e18;
                }
              }
              sVar7 = sVar7 + 1;
              local_90 = CONCAT26(sVar7,(uint6)local_90);
            }
            pfVar8 = pfVar8 + 3;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        FUN_142bf3280(&local_a8);
        if ((*(byte *)((longlong)local_a8 + 0x156) & 1) == 0) {
          local_a0 = local_a0 + 1;
          local_90 = 0;
          local_86 = local_86 & 0xfd | 1;
          if ((int)local_a8[1] <= local_a0) goto LAB_142c111a3;
          do {
            uVar1 = *(uint *)(*local_a8 + 4 + (longlong)local_a0 * 0xc);
            if (((uVar1 >> 0x1e & 1) == 0) && (-1 < (int)uVar1)) break;
            local_a0 = local_a0 + 1;
          } while (local_a0 < (int)local_a8[1]);
        }
      } while( true );
    }
    if (cVar3 == '\x02') {
      FUN_142bd2270(&local_a8,param_1,param_2,0xffffffff);
      do {
        if ((((int)local_a8[1] <= local_a0) || ((*(byte *)((longlong)local_a8 + 0x156) & 1) != 0))
           || ((0.0 <= local_98 &&
               (QueryPerformanceCounter(&local_res10),
               local_98 <= (double)local_res10.QuadPart * DAT_1468b02f8 + 16777216.0))))
        goto LAB_142c111a3;
        FUN_142be5200(param_1,&local_c8,param_2,local_a0);
        if ((((local_c8 <= -(float)DAT_146691100) || ((float)DAT_146691100 <= local_c8)) ||
            (local_c4 <= -DAT_146691100._4_4_)) ||
           (((DAT_146691100._4_4_ <= local_c4 || (local_c0 <= -DAT_146691108)) ||
            (DAT_146691108 <= local_c0)))) {
          local_86 = local_86 & 0xfe | 2;
          local_90 = CONCAT44(local_90._4_4_,0xff7fffff);
        }
        else if (0 < (int)local_b0) {
          uVar9 = local_b0 & 0xffffffff;
          pfVar8 = local_b8 + 2;
          fVar14 = (float)local_90;
          sVar7 = local_90._6_2_;
          sVar6 = local_90._4_2_;
          do {
            fVar13 = *pfVar8 - local_c0;
            if ((local_86 >> 1 & 1) == 0) {
              if (*(char *)(param_1 + 0x44) == '\x01') {
LAB_142c10b99:
                if (local_87 == '\0') {
                  fVar14 = fVar14 + fVar13;
                  local_90 = (ulonglong)(uint)fVar14;
                }
                else if (local_87 == '\x01') {
                  if ((sVar6 == 0) || (fVar13 < fVar14)) {
LAB_142c10bc8:
                    local_90 = (ulonglong)(uint)fVar13;
                    fVar14 = fVar13;
                  }
                }
                else if (local_87 == '\x02') {
                  if (sVar6 == 0) goto LAB_142c10bc8;
                  if (fVar14 < fVar13) {
                    local_90 = (ulonglong)(uint)fVar13;
                    fVar14 = fVar13;
                  }
                }
                sVar6 = sVar6 + 1;
                local_90._0_6_ = CONCAT24(sVar6,(float)local_90);
                local_90 = (ulonglong)(uint6)local_90;
              }
              else {
                cVar3 = *(char *)(param_1 + 0x5a);
                if (cVar3 == '\0') {
                  bVar10 = fVar13 < fVar11;
LAB_142c10b92:
                  if (!bVar10) goto LAB_142c10b99;
                }
                else {
                  if (cVar3 == '\x01') {
                    bVar10 = fVar12 < fVar13;
                    goto LAB_142c10b92;
                  }
                  if (((cVar3 == '\x02') && (fVar11 <= fVar13)) && (fVar13 <= fVar12))
                  goto LAB_142c10b99;
                }
              }
              sVar7 = sVar7 + 1;
              local_90 = CONCAT26(sVar7,(uint6)local_90);
            }
            pfVar8 = pfVar8 + 3;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        FUN_142bf3280(&local_a8);
        if ((*(byte *)((longlong)local_a8 + 0x156) & 1) == 0) {
          local_a0 = local_a0 + 1;
          local_90 = 0;
          local_86 = local_86 & 0xfd | 1;
          if ((int)local_a8[1] <= local_a0) goto LAB_142c111a3;
          do {
            uVar1 = *(uint *)(*local_a8 + 4 + (longlong)local_a0 * 0xc);
            if (((uVar1 >> 0x1e & 1) == 0) && (-1 < (int)uVar1)) break;
            local_a0 = local_a0 + 1;
          } while (local_a0 < (int)local_a8[1]);
        }
      } while( true );
    }
    if (cVar3 == '\x03') {
      FUN_142bd2270(&local_a8,param_1,param_2,0xffffffff);
      do {
        if ((((int)local_a8[1] <= local_a0) || ((*(byte *)((longlong)local_a8 + 0x156) & 1) != 0))
           || ((0.0 <= local_98 &&
               (QueryPerformanceCounter(&local_res10),
               local_98 <= (double)local_res10.QuadPart * DAT_1468b02f8 + 16777216.0))))
        goto LAB_142c111a3;
        FUN_142be5200(param_1,&local_c8,param_2,local_a0);
        if (((((local_c8 <= -(float)DAT_146691100) || ((float)DAT_146691100 <= local_c8)) ||
             (local_c4 <= -DAT_146691100._4_4_)) ||
            ((DAT_146691100._4_4_ <= local_c4 || (local_c0 <= -DAT_146691108)))) ||
           (DAT_146691108 <= local_c0)) {
          local_86 = local_86 & 0xfe | 2;
          local_90 = CONCAT44(local_90._4_4_,0xff7fffff);
        }
        else if (0 < (int)local_b0) {
          uVar9 = local_b0 & 0xffffffff;
          pfVar8 = local_b8 + 2;
          fVar14 = (float)local_90;
          sVar7 = local_90._6_2_;
          sVar6 = local_90._4_2_;
          do {
            fVar13 = ABS(*pfVar8 - local_c0);
            if ((local_86 >> 1 & 1) == 0) {
              if (*(char *)(param_1 + 0x44) == '\x01') {
LAB_142c1091c:
                if (local_87 == '\0') {
                  fVar14 = fVar14 + fVar13;
                  local_90 = (ulonglong)(uint)fVar14;
                }
                else if (local_87 == '\x01') {
                  if ((sVar6 == 0) || (fVar13 < fVar14)) {
LAB_142c1094b:
                    local_90 = (ulonglong)(uint)fVar13;
                    fVar14 = fVar13;
                  }
                }
                else if (local_87 == '\x02') {
                  if (sVar6 == 0) goto LAB_142c1094b;
                  if (fVar14 < fVar13) {
                    local_90 = (ulonglong)(uint)fVar13;
                    fVar14 = fVar13;
                  }
                }
                sVar6 = sVar6 + 1;
                local_90._0_6_ = CONCAT24(sVar6,(float)local_90);
                local_90 = (ulonglong)(uint6)local_90;
              }
              else {
                cVar3 = *(char *)(param_1 + 0x5a);
                if (cVar3 == '\0') {
                  bVar10 = fVar13 < fVar11;
LAB_142c10915:
                  if (!bVar10) goto LAB_142c1091c;
                }
                else {
                  if (cVar3 == '\x01') {
                    bVar10 = fVar12 < fVar13;
                    goto LAB_142c10915;
                  }
                  if (((cVar3 == '\x02') && (fVar11 <= fVar13)) && (fVar13 <= fVar12))
                  goto LAB_142c1091c;
                }
              }
              sVar7 = sVar7 + 1;
              local_90 = CONCAT26(sVar7,(uint6)local_90);
            }
            pfVar8 = pfVar8 + 3;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        FUN_142bf3280(&local_a8);
        if ((*(byte *)((longlong)local_a8 + 0x156) & 1) == 0) {
          local_a0 = local_a0 + 1;
          local_90 = 0;
          local_86 = local_86 & 0xfd | 1;
          if ((int)local_a8[1] <= local_a0) goto LAB_142c111a3;
          do {
            uVar1 = *(uint *)(*local_a8 + 4 + (longlong)local_a0 * 0xc);
            if (((uVar1 >> 0x1e & 1) == 0) && (-1 < (int)uVar1)) break;
            local_a0 = local_a0 + 1;
          } while (local_a0 < (int)local_a8[1]);
        }
      } while( true );
    }
  }
LAB_142c111cc:
  if (local_b8 != (float *)0x0) {
    FMemory::Free();
  }
  return;
LAB_142c111a3:
  *(int *)(local_a8 + 0x27) = local_a0;
  goto LAB_142c111cc;
}



// FUNCTION 142c11210 FUN_142c11210 body=2216 status=ok
// SIG undefined FUN_142c11210(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c11210(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  short sVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  float *pfVar9;
  float *pfVar10;
  ulonglong uVar11;
  float *pfVar12;
  ulonglong uVar13;
  float *pfVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  char local_res18;
  char local_res20;
  float *local_1a8;
  undefined8 local_1a0;
  float *local_198;
  uint local_190;
  int local_18c;
  longlong *local_188;
  int local_180;
  double local_178;
  undefined8 local_170;
  char local_167;
  byte local_166;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  LARGE_INTEGER local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined1 local_f8 [12];
  undefined1 local_ec [180];
  
  lVar7 = FWeakObjectPtr::Get(param_2 + 0x34);
  if (lVar7 == 0) {
    return;
  }
  FAIDataProviderValue::BindData(param_1 + 0x90,lVar7,*(undefined4 *)(param_2 + 0x30));
  fVar16 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x90);
  FAIDataProviderValue::BindData(param_1 + 0xc0,lVar7,*(undefined4 *)(param_2 + 0x30));
  fVar17 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0xc0);
  uVar3 = *(undefined8 *)(param_1 + 0x1e0);
  pfVar12 = (float *)0x0;
  pfVar14 = (float *)0x0;
  local_190 = 0;
  local_198 = (float *)0x0;
  local_18c = 0;
  if (*(char *)(param_1 + 0x1f0) == '\x01') {
    local_res18 = UEnvQueryTest::IsContextPerItem(param_1,*(undefined8 *)(param_1 + 0x1e8));
    pfVar14 = pfVar12;
    if (local_res18 == '\0') {
LAB_142c11334:
      FUN_142bfe5b0(param_1,&local_198,param_2,*(undefined8 *)(param_1 + 0x1d8),
                    *(undefined8 *)(param_1 + 0x1e0),*(undefined8 *)(param_1 + 0x1e8),
                    *(char *)(param_1 + 0x1f0) == '\x01',&DAT_1468b5d90,&DAT_1468b5da0);
      pfVar14 = (float *)(ulonglong)local_190;
      if (local_190 == 0) goto LAB_142c11a67;
    }
  }
  else {
    cVar5 = UEnvQueryTest::IsContextPerItem(param_1,*(undefined8 *)(param_1 + 0x1d8));
    if ((cVar5 == '\0') && (cVar5 = UEnvQueryTest::IsContextPerItem(param_1,uVar3), cVar5 == '\0'))
    {
      local_res18 = '\0';
      goto LAB_142c11334;
    }
    local_res18 = '\x01';
  }
  uVar3 = *(undefined8 *)(param_1 + 0x200);
  uVar11 = 0;
  iVar6 = 0;
  local_1a8 = (float *)0x0;
  local_1a0 = 0;
  if (*(char *)(param_1 + 0x210) == '\x01') {
    local_res20 = UEnvQueryTest::IsContextPerItem(param_1,*(undefined8 *)(param_1 + 0x208));
    iVar6 = 0;
    if (local_res20 != '\0') goto LAB_142c11473;
  }
  else {
    cVar5 = UEnvQueryTest::IsContextPerItem(param_1,*(undefined8 *)(param_1 + 0x1f8));
    if ((cVar5 != '\0') || (cVar5 = UEnvQueryTest::IsContextPerItem(param_1,uVar3), cVar5 != '\0'))
    {
      local_res20 = '\x01';
      goto LAB_142c11473;
    }
    local_res20 = '\0';
  }
  FUN_142bfe5b0(param_1,&local_1a8,param_2,*(undefined8 *)(param_1 + 0x1f8),
                *(undefined8 *)(param_1 + 0x200),*(undefined8 *)(param_1 + 0x208),
                *(char *)(param_1 + 0x210) == '\x01',&DAT_1468b5d90,&DAT_1468b5da0);
  uVar11 = local_1a0 & 0xffffffff;
  pfVar12 = local_1a8;
  if ((int)local_1a0 != 0) {
    iVar6 = local_1a0._4_4_;
LAB_142c11473:
    FUN_142bd2270(&local_188,param_1,param_2,0xffffffff);
    do {
      if ((((int)local_188[1] <= local_180) || ((*(byte *)((longlong)local_188 + 0x156) & 1) != 0))
         || ((0.0 <= local_178 &&
             (QueryPerformanceCounter(&local_128),
             local_178 <= (double)local_128.QuadPart * DAT_1468b02f8 + 16777216.0))))
      goto LAB_142c11a0d;
      if ((local_res18 != '\0') || (local_res20 != '\0')) {
        if ((*(char *)(param_1 + 0x1f0) == '\x01') && (*(char *)(param_1 + 0x210) == '\x01')) {
          local_118 = DAT_1468b5d98;
          local_120 = _DAT_1468b5d90;
          local_158 = _DAT_1468b5d90;
          local_150 = DAT_1468b5d98;
LAB_142c115f7:
          puVar8 = (undefined8 *)FUN_142be5290(param_1,local_ec,param_2,local_180);
        }
        else {
          puVar8 = (undefined8 *)FUN_142be5200(param_1,local_f8,param_2,local_180);
          local_158 = *puVar8;
          local_150 = *(undefined4 *)(puVar8 + 1);
          if ((*(char *)(param_1 + 0x1f0) == '\x01') || (*(char *)(param_1 + 0x210) == '\x01'))
          goto LAB_142c115f7;
          local_10c = DAT_1468b5da8;
          puVar8 = &local_114;
          local_114 = DAT_1468b5da0;
        }
        local_148 = *puVar8;
        local_140 = *(undefined4 *)(puVar8 + 1);
        if (local_res18 != '\0') {
          local_190 = 0;
          if ((local_18c < 0) && (local_18c != 0)) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::
            ResizeTo(&local_198,0);
          }
          FUN_142bfe5b0(param_1,&local_198,param_2,*(undefined8 *)(param_1 + 0x1d8),
                        *(undefined8 *)(param_1 + 0x1e0),*(undefined8 *)(param_1 + 0x1e8),
                        *(char *)(param_1 + 0x1f0) == '\x01',&local_158,&local_148);
        }
        if (local_res20 != '\0') {
          local_1a0 = local_1a0 & 0xffffffff00000000;
          if ((iVar6 < 0) && (iVar6 != 0)) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::
            ResizeTo(&local_1a8,0);
          }
          FUN_142bfe5b0(param_1,&local_1a8,param_2,*(undefined8 *)(param_1 + 0x1f8),
                        *(undefined8 *)(param_1 + 0x200),*(undefined8 *)(param_1 + 0x208),
                        *(char *)(param_1 + 0x210) == '\x01',&local_158,&local_148);
          uVar11 = local_1a0 & 0xffffffff;
          pfVar12 = local_1a8;
        }
        pfVar14 = (float *)(ulonglong)local_190;
      }
      pfVar10 = local_198;
      if (0 < (int)pfVar14) {
        do {
          pfVar9 = pfVar12;
          uVar13 = uVar11;
          if (0 < (int)uVar11) {
            do {
              fVar21 = 0.0;
              if (*(char *)(param_1 + 0x218) == '\0') {
                fVar21 = pfVar10[1] * pfVar9[1] + *pfVar9 * *pfVar10 + pfVar9[2] * pfVar10[2];
              }
              else if (*(char *)(param_1 + 0x218) == '\x01') {
                uVar3 = *(undefined8 *)pfVar9;
                uVar1 = *(undefined8 *)pfVar10;
                fVar21 = (float)((ulonglong)uVar1 >> 0x20);
                local_108._0_4_ = (float)uVar1;
                fVar18 = fVar21 * fVar21 + (float)local_108 * (float)local_108;
                if (1e-08 < fVar18) {
                  auVar20 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
                  fVar19 = auVar20._0_4_;
                  fVar19 = fVar19 + fVar19 * (0.5 - fVar18 * 0.5 * fVar19 * fVar19);
                  fVar19 = fVar19 + fVar19 * (0.5 - fVar18 * 0.5 * fVar19 * fVar19);
                  local_108._0_4_ = (float)local_108 * fVar19;
                  fVar21 = fVar21 * fVar19;
                }
                local_138._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
                local_138._0_4_ = (float)uVar3;
                fVar18 = local_138._4_4_ * local_138._4_4_ + (float)local_138 * (float)local_138;
                if (1e-08 < fVar18) {
                  auVar20 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
                  fVar19 = auVar20._0_4_;
                  fVar19 = fVar19 + fVar19 * (0.5 - fVar18 * 0.5 * fVar19 * fVar19);
                  fVar19 = fVar19 + fVar19 * (0.5 - fVar18 * 0.5 * fVar19 * fVar19);
                  local_138._0_4_ = (float)local_138 * fVar19;
                  local_138._4_4_ = local_138._4_4_ * fVar19;
                }
                fVar21 = local_138._4_4_ * fVar21 + (float)local_138 * (float)local_108;
                local_138 = uVar3;
                local_108 = uVar1;
              }
              if (*(char *)(param_1 + 0x219) != '\0') {
                fVar21 = ABS(fVar21);
              }
              iVar6 = _isnan((double)fVar21);
              if ((iVar6 == 0) && ((local_166 & 2) == 0)) {
                if (*(char *)(param_1 + 0x44) == '\x01') {
LAB_142c118ff:
                  sVar4 = local_170._4_2_;
                  if (local_167 == '\0') {
                    local_170 = CONCAT44(local_170._4_4_,(float)local_170 + fVar21);
                  }
                  else if (local_167 == '\x01') {
                    if ((sVar4 == 0) || (fVar21 < (float)local_170)) {
LAB_142c1193a:
                      local_170 = CONCAT44(local_170._4_4_,fVar21);
                    }
                  }
                  else if (local_167 == '\x02') {
                    if (sVar4 == 0) goto LAB_142c1193a;
                    if ((float)local_170 < fVar21) {
                      local_170 = CONCAT44(local_170._4_4_,fVar21);
                    }
                  }
                  local_170._0_6_ = CONCAT24(sVar4 + 1,(float)local_170);
                }
                else {
                  cVar5 = *(char *)(param_1 + 0x5a);
                  if (cVar5 == '\0') {
                    bVar15 = fVar21 < fVar16;
LAB_142c118f8:
                    if (!bVar15) goto LAB_142c118ff;
                  }
                  else {
                    if (cVar5 == '\x01') {
                      bVar15 = fVar17 < fVar21;
                      goto LAB_142c118f8;
                    }
                    if (((cVar5 == '\x02') && (fVar16 <= fVar21)) && (fVar21 <= fVar17))
                    goto LAB_142c118ff;
                  }
                }
                local_170 = CONCAT26(local_170._6_2_ + 1,(undefined6)local_170);
              }
              uVar13 = uVar13 - 1;
              pfVar9 = pfVar9 + 3;
            } while (uVar13 != 0);
          }
          pfVar14 = (float *)((longlong)pfVar14 + -1);
          pfVar10 = pfVar10 + 3;
        } while (pfVar14 != (float *)0x0);
        pfVar14 = (float *)(ulonglong)local_190;
      }
      FUN_142bf3280(&local_188);
      iVar6 = local_1a0._4_4_;
      if ((*(byte *)((longlong)local_188 + 0x156) & 1) == 0) {
        local_180 = local_180 + 1;
        local_170 = 0;
        local_166 = local_166 & 0xfd | 1;
        if ((int)local_188[1] <= local_180) goto LAB_142c11a0d;
        do {
          uVar2 = *(uint *)(*local_188 + 4 + (longlong)local_180 * 0xc);
          if (((uVar2 >> 0x1e & 1) == 0) && (-1 < (int)uVar2)) break;
          local_180 = local_180 + 1;
        } while (local_180 < (int)local_188[1]);
      }
    } while( true );
  }
LAB_142c11a5a:
  if (pfVar12 != (float *)0x0) {
    FMemory::Free(pfVar12);
  }
LAB_142c11a67:
  if (local_198 != (float *)0x0) {
    FMemory::Free(local_198);
  }
  return;
LAB_142c11a0d:
  *(int *)(local_188 + 0x27) = local_180;
  goto LAB_142c11a5a;
}



// FUNCTION 142c11ac0 FUN_142c11ac0 body=733 status=ok
// SIG undefined FUN_142c11ac0(void)

void FUN_142c11ac0(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  short sVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  float fVar9;
  LARGE_INTEGER local_res10;
  longlong *local_78;
  int local_70;
  double local_68;
  undefined8 local_60;
  char local_57;
  byte local_56;
  
  lVar6 = FWeakObjectPtr::Get(param_2 + 0x34);
  if (lVar6 == 0) {
    return;
  }
  FAIDataProviderValue::BindData(param_1 + 0x60,lVar6,*(undefined4 *)(param_2 + 0x30));
  cVar4 = FAIDataProviderBoolValue::GetValue(param_1 + 0x60);
  FUN_142bd2270(&local_78,param_1,param_2,0xffffffff);
  do {
    if ((((int)local_78[1] <= local_70) || ((*(byte *)((longlong)local_78 + 0x156) & 1) != 0)) ||
       ((0.0 <= local_68 &&
        (QueryPerformanceCounter(&local_res10),
        local_68 <= (double)local_res10.QuadPart * DAT_1468b02f8 + 16777216.0)))) {
LAB_142c11d63:
      *(int *)(local_78 + 0x27) = local_70;
      return;
    }
    lVar6 = FUN_142be4fb0(param_1,param_2);
    if (lVar6 == 0) {
LAB_142c11cc8:
      local_60 = CONCAT44(local_60._4_4_,0xff7fffff);
      local_56 = (*(char *)(param_1 + 0x220) != '\0') + 2U | local_56 & 0xfe;
    }
    else {
      uVar7 = UGameplayTagAssetInterface::GetPrivateStaticClass();
      plVar8 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar7);
      if ((plVar8 == (longlong *)0x0) &&
         (plVar8 = (longlong *)FNavigationSystem::FindPathFollowingAgentForActor(lVar6),
         plVar8 == (longlong *)0x0)) goto LAB_142c11cc8;
      lVar6 = (**(code **)(*plVar8 + 0x30))();
      if (lVar6 == 0) {
        cVar5 = '\0';
      }
      else {
        cVar5 = UBlueprintGameplayTagLibrary::DoesContainerMatchTagQuery(lVar6,param_1 + 0x1d8);
      }
      if ((local_56 & 2) == 0) {
        cVar1 = *(char *)(param_1 + 0x5a);
        if ((((cVar1 == '\0') || (cVar1 == '\x01')) || (cVar1 == '\x02')) ||
           ((cVar1 != '\x03' || (cVar5 != cVar4)))) {
          if ((local_56 & 4) == 0) {
            fVar9 = 0.0;
            goto LAB_142c11c55;
          }
        }
        else {
          fVar9 = 1.0;
LAB_142c11c55:
          sVar3 = local_60._4_2_;
          if (local_57 == '\0') {
            local_60 = CONCAT44(local_60._4_4_,(float)local_60 + fVar9);
          }
          else if (local_57 == '\x01') {
            if ((sVar3 == 0) || (fVar9 < (float)local_60)) {
LAB_142c11c9b:
              local_60._0_6_ = CONCAT24(sVar3 + 1,fVar9);
              local_60 = CONCAT26(local_60._6_2_ + 1,(undefined6)local_60);
              goto LAB_142c11ced;
            }
          }
          else if (local_57 == '\x02') {
            if (sVar3 == 0) goto LAB_142c11c9b;
            if ((float)local_60 < fVar9) {
              local_60._0_6_ = CONCAT24(sVar3 + 1,fVar9);
              local_60 = CONCAT26(local_60._6_2_ + 1,(undefined6)local_60);
              goto LAB_142c11ced;
            }
          }
          local_60._0_6_ = CONCAT24(sVar3 + 1,(float)local_60);
        }
        local_60 = CONCAT26(local_60._6_2_ + 1,(undefined6)local_60);
      }
    }
LAB_142c11ced:
    FUN_142bf3280(&local_78);
    if ((*(byte *)((longlong)local_78 + 0x156) & 1) == 0) {
      local_70 = local_70 + 1;
      local_60 = 0;
      local_56 = local_56 & 0xfd | 1;
      if ((int)local_78[1] <= local_70) goto LAB_142c11d63;
      do {
        uVar2 = *(uint *)(*local_78 + 4 + (longlong)local_70 * 0xc);
        if (((uVar2 >> 0x1e & 1) == 0) && (-1 < (int)uVar2)) break;
        local_70 = local_70 + 1;
      } while (local_70 < (int)local_78[1]);
    }
  } while( true );
}



// FUNCTION 142c11da0 FUN_142c11da0 body=1231 status=ok
// SIG undefined FUN_142c11da0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142c11da0(longlong param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  short sVar4;
  char cVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  code *pcVar9;
  float fVar10;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  uint local_180;
  undefined1 *local_178;
  undefined1 local_168 [8];
  undefined4 local_160;
  undefined4 local_15c;
  int local_158;
  int local_154;
  longlong *local_150;
  int local_148;
  int local_144;
  longlong *local_140;
  int local_138;
  double local_130;
  undefined8 local_128;
  char local_11f;
  byte local_11e;
  float local_118;
  float local_114;
  float local_110;
  float local_108;
  float local_104;
  float local_100;
  LARGE_INTEGER local_f8 [2];
  undefined1 local_e8 [16];
  undefined1 local_d8;
  longlong local_a0;
  longlong local_80;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  uVar7 = FWeakObjectPtr::Get(param_2 + 0x34);
  FAIDataProviderValue::BindData(param_1 + 0x60,uVar7,*(undefined4 *)(param_2 + 0x30));
  cVar5 = FAIDataProviderBoolValue::GetValue(param_1 + 0x60);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b2c848) && (_Init_thread_header(&DAT_146b2c848), DAT_146b2c848 == -1))
  {
    FName::FName(&DAT_146b2c840,"EnvQueryOverlap",1);
    _Init_thread_footer(&DAT_146b2c848);
  }
  local_188 = 0;
  FUN_1422ffb20(local_e8,DAT_146b2c840,local_168,
                CONCAT31((uint3)(*(uint *)(param_1 + 500) >> 9),
                         (char)(*(uint *)(param_1 + 500) >> 1)) & 0xffffff01);
  cVar6 = *(char *)(param_1 + 0x1f1);
  bVar1 = *(byte *)(param_1 + 0x1f0);
  local_d8 = 1;
  local_160 = 0;
  if (cVar6 == '\0') {
    local_160 = 1;
    local_158 = *(int *)(param_1 + 0x1dc);
    local_154 = *(int *)(param_1 + 0x1e0);
  }
  else if (cVar6 == '\x01') {
    local_158 = local_148;
    local_160 = 2;
    local_154 = local_144;
  }
  else {
    if (cVar6 != '\x02') goto LAB_142c121d3;
    local_154 = local_144;
    local_160 = 3;
    local_158 = *(int *)(param_1 + 0x1e0);
  }
  pcVar9 = UEnvQueryTest_Overlap::RunOverlap;
  if ((*(byte *)(param_1 + 500) & 1) == 0) {
    pcVar9 = UEnvQueryTest_Overlap::RunOverlap;
  }
  local_150 = (longlong *)0x0;
  local_148 = 0;
  local_15c = *(undefined4 *)(param_1 + 0x1d8);
  FUN_140747140(&local_150,param_1,pcVar9);
  FUN_142bd2270(&local_140,param_1,param_2,0xffffffff);
  do {
    if ((((int)local_140[1] <= local_138) || ((*(byte *)((longlong)local_140 + 0x156) & 1) != 0)) ||
       ((0.0 <= local_130 &&
        (QueryPerformanceCounter(local_f8),
        local_130 <= (double)local_f8[0].QuadPart * DAT_1468b02f8 + 16777216.0)))) break;
    FUN_142be5200(param_1,&local_118,param_2,local_138);
    uVar7 = FUN_142be4fb0(param_1,param_2,local_138);
    local_178 = local_e8;
    local_108 = local_118 + *(float *)(param_1 + 0x1e4);
    local_188 = *(undefined8 *)(param_2 + 0x58);
    local_104 = local_114 + *(float *)(param_1 + 0x1e8);
    plVar8 = (longlong *)0x0;
    if (local_148 != 0) {
      plVar8 = local_150;
    }
    local_100 = local_110 + *(float *)(param_1 + 0x1ec);
    local_180 = (uint)bVar1;
    cVar6 = (**(code **)(*plVar8 + 0x38))(local_100,&local_108,&local_160,uVar7);
    if ((local_11e & 2) == 0) {
      cVar2 = *(char *)(param_1 + 0x5a);
      if ((((cVar2 == '\0') || (cVar2 == '\x01')) || (cVar2 == '\x02')) ||
         ((cVar2 != '\x03' || (cVar6 != cVar5)))) {
        if ((local_11e & 4) == 0) {
          fVar10 = 0.0;
          goto LAB_142c12090;
        }
      }
      else {
        fVar10 = 1.0;
LAB_142c12090:
        sVar4 = local_128._4_2_;
        if (local_11f == '\0') {
          local_128 = CONCAT44(local_128._4_4_,(float)local_128 + fVar10);
        }
        else if (local_11f == '\x01') {
          if ((sVar4 == 0) || (fVar10 < (float)local_128)) {
LAB_142c120cb:
            local_128 = CONCAT44(local_128._4_4_,fVar10);
          }
        }
        else if (local_11f == '\x02') {
          if (sVar4 == 0) goto LAB_142c120cb;
          if ((float)local_128 < fVar10) {
            local_128 = CONCAT44(local_128._4_4_,fVar10);
          }
        }
        local_128._0_6_ = CONCAT24(sVar4 + 1,(float)local_128);
      }
      local_128 = CONCAT26(local_128._6_2_ + 1,(undefined6)local_128);
    }
    FUN_142bf3280(&local_140);
    if ((*(byte *)((longlong)local_140 + 0x156) & 1) == 0) {
      local_138 = local_138 + 1;
      local_128 = 0;
      local_11e = local_11e & 0xfd | 1;
      if ((int)local_140[1] <= local_138) break;
      do {
        uVar3 = *(uint *)(*local_140 + 4 + (longlong)local_138 * 0xc);
        if (((uVar3 >> 0x1e & 1) == 0) && (-1 < (int)uVar3)) break;
        local_138 = local_138 + 1;
      } while (local_138 < (int)local_140[1]);
    }
  } while( true );
  *(int *)(local_140 + 0x27) = local_138;
  if (local_148 != 0) {
    if (local_150 == (longlong *)0x0) goto LAB_142c121d3;
    (**(code **)(*local_150 + 0x28))(local_150,0);
    if (local_150 != (longlong *)0x0) {
      local_150 = (longlong *)FMemory::Realloc(local_150,0,0);
    }
    local_148 = 0;
  }
  if (local_150 != (longlong *)0x0) {
    FMemory::Free(local_150);
  }
LAB_142c121d3:
  if (local_80 != 0) {
    FMemory::Free();
  }
  if (local_a0 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142c12270 FUN_142c12270 body=3816 status=ok
// SIG undefined FUN_142c12270(void)

void FUN_142c12270(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  short sVar4;
  longlong *plVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  code *pcVar16;
  longlong *plVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  code *pcVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  float local_res8 [2];
  longlong local_res10;
  undefined4 local_res18 [2];
  longlong *local_res20;
  longlong local_438;
  undefined8 local_430;
  longlong *local_428;
  int local_420;
  longlong *local_418;
  int local_410;
  double local_408;
  undefined8 local_400;
  char local_3f7;
  byte local_3f6;
  longlong *local_3f0;
  int local_3e8;
  double local_3e0;
  undefined8 local_3d8;
  char local_3cf;
  byte local_3ce;
  longlong *local_3c8;
  int local_3c0;
  double local_3b8;
  undefined8 local_3b0;
  char local_3a7;
  byte local_3a6;
  longlong local_3a0;
  longlong local_398;
  undefined8 local_390;
  longlong local_388;
  undefined8 local_380;
  longlong *local_378;
  undefined1 local_370 [8];
  float local_368;
  undefined8 local_360;
  float local_358;
  LARGE_INTEGER local_350;
  LARGE_INTEGER local_348;
  LARGE_INTEGER local_340;
  undefined8 local_338;
  longlong *local_330;
  undefined8 local_328;
  longlong *local_320;
  undefined8 local_318;
  longlong *local_310;
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  longlong *local_2d8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined1 local_2a8 [40];
  longlong *local_280;
  uint local_274;
  longlong *local_260;
  longlong local_238;
  undefined1 local_228 [40];
  longlong *local_200;
  uint local_1f4;
  longlong *local_1e0;
  longlong local_1b8;
  undefined1 local_1a8 [128];
  undefined1 local_128 [232];
  
  local_res10 = param_2;
  lVar11 = FWeakObjectPtr::Get(param_2 + 0x34);
  local_3a0 = lVar11;
  FAIDataProviderValue::BindData(param_1 + 0x60,lVar11,*(undefined4 *)(param_2 + 0x30));
  FAIDataProviderValue::BindData(param_1 + 0x1e8,lVar11,*(undefined4 *)(param_2 + 0x30));
  FAIDataProviderValue::BindData(param_1 + 0x218,lVar11,*(undefined4 *)(param_2 + 0x30));
  FAIDataProviderValue::BindData(param_1 + 0x90,lVar11,*(undefined4 *)(param_2 + 0x30));
  FAIDataProviderValue::BindData(param_1 + 0xc0,lVar11,*(undefined4 *)(local_res10 + 0x30));
  cVar6 = FAIDataProviderBoolValue::GetValue(param_1 + 0x60);
  cVar7 = FAIDataProviderBoolValue::GetValue(param_1 + 0x1e8);
  cVar8 = FAIDataProviderBoolValue::GetValue(param_1 + 0x218);
  fVar24 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x90);
  fVar25 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0xc0);
  if (*(longlong *)(local_res10 + 0x58) == 0) {
    return;
  }
  lVar11 = *(longlong *)(*(longlong *)(local_res10 + 0x58) + 0x138);
  if (lVar11 == 0) {
    return;
  }
  local_388 = lVar11;
  lVar12 = FUN_142ba9430();
  lVar21 = local_3a0;
  if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8)
      != lVar12 + 0x88)) {
    bVar23 = false;
  }
  else {
    bVar23 = true;
  }
  if (!bVar23) {
    return;
  }
  if (local_3a0 == 0) {
    return;
  }
  uVar13 = UNavAgentInterface::GetPrivateStaticClass();
  plVar14 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar21,uVar13);
  if (plVar14 == (longlong *)0x0) {
    plVar14 = (longlong *)FUN_142b8e790(lVar11,0);
  }
  else {
    uVar13 = (**(code **)(*plVar14 + 0x10))(plVar14);
    plVar14 = (longlong *)thunk_FUN_142b8f070(lVar11,uVar13);
  }
  if (plVar14 == (longlong *)0x0) {
    return;
  }
  uVar20 = 0;
  local_438 = 0;
  local_430 = 0;
  local_398 = 0;
  local_390 = 0;
  uVar18 = uVar20;
  local_res20 = plVar14;
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    uVar15 = UEnvQueryContext::GetPrivateStaticClass();
    for (uVar3 = *(ulonglong *)(param_1 + 0x1e0);
        (uVar18 = uVar20, uVar3 != 0 && (uVar18 = *(ulonglong *)(param_1 + 0x1e0), uVar3 != uVar15))
        ; uVar3 = *(ulonglong *)(uVar3 + 0x30)) {
    }
  }
  lVar11 = local_res10;
  cVar9 = FUN_142bed6b0(local_res10,uVar18,&local_398);
  if (cVar9 == '\0') {
    uVar18 = uVar20;
    if (*(longlong *)(param_1 + 0x1e0) != 0) {
      uVar15 = UEnvQueryContext::GetPrivateStaticClass();
      for (uVar3 = *(ulonglong *)(param_1 + 0x1e0);
          (uVar18 = uVar20, uVar3 != 0 &&
          (uVar18 = *(ulonglong *)(param_1 + 0x1e0), uVar3 != uVar15));
          uVar3 = *(ulonglong *)(uVar3 + 0x30)) {
      }
    }
    cVar9 = FUN_142bedad0(lVar11,uVar18,&local_438);
    if (cVar9 == '\0') goto LAB_142c13116;
  }
  else {
    lVar11 = (longlong)(int)local_430;
    lVar21 = (longlong)(int)local_390;
    iVar10 = (int)local_430 + (int)local_390;
    local_430 = CONCAT44(local_430._4_4_,iVar10);
    if (local_430._4_4_ < iVar10) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_438);
    }
    _guard_xfg_dispatch_icall_nop((void *)(local_438 + lVar11 * 0xc),0,lVar21 * 0xc);
    lVar11 = local_res10;
    plVar14 = local_res20;
    if (0 < (int)local_390) {
      lVar21 = 0;
      lVar12 = 0;
      do {
        plVar14 = *(longlong **)(lVar12 + local_398);
        if (plVar14 == (longlong *)0x0) {
          uVar26 = (undefined4)DAT_146691100;
          uVar28 = (undefined4)((ulonglong)DAT_146691100 >> 0x20);
          local_358 = DAT_146691108;
        }
        else {
          local_res18[0] = 0;
          local_res8[0] = 0.0;
          (**(code **)(*plVar14 + 0x6c0))(plVar14,local_370,local_res18,local_res8);
          local_358 = local_368 - local_res8[0];
          uVar26 = local_370._0_4_;
          uVar28 = local_370._4_4_;
          local_368 = local_358;
        }
        uVar19 = (int)uVar20 + 1;
        uVar20 = (ulonglong)uVar19;
        lVar12 = lVar12 + 8;
        local_360 = CONCAT44(uVar28,uVar26);
        *(ulonglong *)(lVar21 + local_438) = CONCAT44(uVar28,uVar26);
        *(float *)(lVar21 + 8 + local_438) = local_358;
        lVar21 = lVar21 + 0xc;
        lVar11 = local_res10;
        plVar14 = local_res20;
      } while ((int)uVar19 < (int)local_390);
    }
  }
  FUN_142b90120(&local_380,plVar14,local_3a0,*(undefined8 *)(param_1 + 0x248));
  if ((*(byte *)(param_1 + 0x1c8) & 1) == 0) {
    (**(code **)(*plVar14 + 0x790))(plVar14);
    if (cVar7 == '\0') {
      FUN_142bd2270(&local_3c8,param_1,lVar11,0xffffffff);
LAB_142c12dc0:
      if ((int)local_3c8[1] <= local_3c0) goto LAB_142c12e0d;
      if ((*(byte *)((longlong)local_3c8 + 0x156) & 1) != 0) goto LAB_142c12e0d;
      if ((0.0 <= local_3b8) &&
         (QueryPerformanceCounter(&local_340),
         local_3b8 <= (double)local_340.QuadPart * DAT_1468b02f8 + 16777216.0)) goto LAB_142c12e0d;
      bVar23 = true;
      do {
        local_3f0 = local_3c8;
        iVar10 = local_3c0;
        if (!bVar23) goto LAB_142c130c9;
        FUN_142be5200(param_1,local_2e8,lVar11,local_3c0);
        iVar10 = 0;
        if (0 < (int)local_430) {
          do {
            plVar5 = local_378;
            if (local_378 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_378 + 1) = (int)local_378[1] + 1;
              UNLOCK();
            }
            local_318 = local_380;
            local_310 = local_378;
            local_2b8 = 0;
            uStack_2b0 = 0;
            if (local_378 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_378 + 1) = (int)local_378[1] + 1;
              UNLOCK();
            }
            FUN_142b80bd0(local_228,local_3a0,plVar14,local_2e8,local_438 + (longlong)iVar10 * 0xc,
                          &local_318,&local_2b8);
            local_1f4 = local_1f4 & 0xfffffffe;
            uVar13 = FUN_142b80820(local_128,local_228);
            cVar7 = FUN_142b98910(local_388,uVar13,0,0);
            if (local_1b8 != 0) {
              FMemory::Free();
            }
            plVar14 = local_1e0;
            if (local_1e0 != (longlong *)0x0) {
              LOCK();
              plVar17 = local_1e0 + 1;
              lVar11 = *plVar17;
              *(int *)plVar17 = (int)*plVar17 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*local_1e0)(local_1e0);
                LOCK();
                piVar1 = (int *)((longlong)plVar14 + 0xc);
                iVar2 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  (**(code **)(*plVar14 + 8))(plVar14,1);
                }
              }
            }
            plVar14 = local_200;
            if (local_200 != (longlong *)0x0) {
              LOCK();
              plVar17 = local_200 + 1;
              lVar11 = *plVar17;
              *(int *)plVar17 = (int)*plVar17 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*local_200)(local_200);
                LOCK();
                piVar1 = (int *)((longlong)plVar14 + 0xc);
                iVar2 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  (**(code **)(*plVar14 + 8))(plVar14,1);
                }
              }
            }
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar14 = plVar5 + 1;
              lVar11 = *plVar14;
              *(int *)plVar14 = (int)*plVar14 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar1 = (int *)((longlong)plVar5 + 0xc);
                iVar2 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5,1);
                }
              }
            }
            if ((local_3a6 & 2) == 0) {
              cVar8 = *(char *)(param_1 + 0x5a);
              if ((((cVar8 == '\0') || (cVar8 == '\x01')) || (cVar8 == '\x02')) ||
                 ((cVar8 != '\x03' || (cVar7 != cVar6)))) {
                if ((local_3a6 & 4) == 0) {
                  fVar24 = 0.0;
                  goto LAB_142c12fd5;
                }
              }
              else {
                fVar24 = 1.0;
LAB_142c12fd5:
                sVar4 = local_3b0._4_2_;
                if (local_3a7 == '\0') {
                  local_3b0 = CONCAT44(local_3b0._4_4_,(float)local_3b0 + fVar24);
                }
                else if (local_3a7 == '\x01') {
                  if ((sVar4 == 0) || (fVar24 < (float)local_3b0)) {
LAB_142c13010:
                    local_3b0 = CONCAT44(local_3b0._4_4_,fVar24);
                  }
                }
                else if (local_3a7 == '\x02') {
                  if (sVar4 == 0) goto LAB_142c13010;
                  if ((float)local_3b0 < fVar24) {
                    local_3b0 = CONCAT44(local_3b0._4_4_,fVar24);
                  }
                }
                local_3b0._0_6_ = CONCAT24(sVar4 + 1,(float)local_3b0);
              }
              local_3b0 = CONCAT26(local_3b0._6_2_ + 1,(undefined6)local_3b0);
            }
            iVar10 = iVar10 + 1;
            lVar11 = local_res10;
            plVar14 = local_res20;
          } while (iVar10 < (int)local_430);
        }
        FUN_142bf3280(&local_3c8);
        if ((*(byte *)((longlong)local_3c8 + 0x156) & 1) != 0) goto LAB_142c12dc0;
        local_3c0 = local_3c0 + 1;
        local_3b0 = 0;
        local_3a6 = local_3a6 & 0xfd | 1;
        if (local_3c0 < (int)local_3c8[1]) goto LAB_142c13090;
LAB_142c12e0d:
        bVar23 = false;
      } while( true );
    }
    FUN_142bd2270(&local_3f0,param_1,lVar11,0xffffffff);
LAB_142c12a90:
    if ((int)local_3f0[1] <= local_3e8) goto LAB_142c12add;
    if ((*(byte *)((longlong)local_3f0 + 0x156) & 1) != 0) goto LAB_142c12add;
    if ((0.0 <= local_3e0) &&
       (QueryPerformanceCounter(&local_348),
       local_3e0 <= (double)local_348.QuadPart * DAT_1468b02f8 + 16777216.0)) goto LAB_142c12add;
    bVar23 = true;
    do {
      iVar10 = local_3e8;
      if (!bVar23) goto LAB_142c130c9;
      FUN_142be5200(param_1,local_2f8,lVar11,local_3e8);
      iVar10 = 0;
      if (0 < (int)local_430) {
        do {
          plVar5 = local_378;
          if (local_378 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_378 + 1) = (int)local_378[1] + 1;
            UNLOCK();
          }
          local_328 = local_380;
          local_320 = local_378;
          local_2c8 = 0;
          uStack_2c0 = 0;
          if (local_378 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_378 + 1) = (int)local_378[1] + 1;
            UNLOCK();
          }
          FUN_142b80bd0(local_2a8,local_3a0,plVar14,local_438 + (longlong)iVar10 * 0xc,local_2f8,
                        &local_328,&local_2c8);
          local_274 = local_274 & 0xfffffffe;
          uVar13 = FUN_142b80820(local_1a8,local_2a8);
          cVar7 = FUN_142b98910(local_388,uVar13,0,0);
          if (local_238 != 0) {
            FMemory::Free();
          }
          plVar14 = local_260;
          if (local_260 != (longlong *)0x0) {
            LOCK();
            plVar17 = local_260 + 1;
            lVar11 = *plVar17;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*local_260)(local_260);
              LOCK();
              piVar1 = (int *)((longlong)plVar14 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plVar14 + 8))(plVar14,1);
              }
            }
          }
          plVar14 = local_280;
          if (local_280 != (longlong *)0x0) {
            LOCK();
            plVar17 = local_280 + 1;
            lVar11 = *plVar17;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*local_280)(local_280);
              LOCK();
              piVar1 = (int *)((longlong)plVar14 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plVar14 + 8))(plVar14,1);
              }
            }
          }
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar14 = plVar5 + 1;
            lVar11 = *plVar14;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          if ((local_3ce & 2) == 0) {
            cVar8 = *(char *)(param_1 + 0x5a);
            if ((((cVar8 == '\0') || (cVar8 == '\x01')) || (cVar8 == '\x02')) ||
               ((cVar8 != '\x03' || (cVar7 != cVar6)))) {
              if ((local_3ce & 4) == 0) {
                fVar24 = 0.0;
                goto LAB_142c12ca5;
              }
            }
            else {
              fVar24 = 1.0;
LAB_142c12ca5:
              sVar4 = local_3d8._4_2_;
              if (local_3cf == '\0') {
                local_3d8 = CONCAT44(local_3d8._4_4_,(float)local_3d8 + fVar24);
              }
              else if (local_3cf == '\x01') {
                if ((sVar4 == 0) || (fVar24 < (float)local_3d8)) {
LAB_142c12ce0:
                  local_3d8 = CONCAT44(local_3d8._4_4_,fVar24);
                }
              }
              else if (local_3cf == '\x02') {
                if (sVar4 == 0) goto LAB_142c12ce0;
                if ((float)local_3d8 < fVar24) {
                  local_3d8 = CONCAT44(local_3d8._4_4_,fVar24);
                }
              }
              local_3d8._0_6_ = CONCAT24(sVar4 + 1,(float)local_3d8);
            }
            local_3d8 = CONCAT26(local_3d8._6_2_ + 1,(undefined6)local_3d8);
          }
          iVar10 = iVar10 + 1;
          lVar11 = local_res10;
          plVar14 = local_res20;
        } while (iVar10 < (int)local_430);
      }
      FUN_142bf3280(&local_3f0);
      if ((*(byte *)((longlong)local_3f0 + 0x156) & 1) != 0) goto LAB_142c12a90;
      local_3e8 = local_3e8 + 1;
      local_3d8 = 0;
      local_3ce = local_3ce & 0xfd | 1;
      if (local_3e8 < (int)local_3f0[1]) goto LAB_142c12d60;
LAB_142c12add:
      bVar23 = false;
    } while( true );
  }
  local_428 = (longlong *)0x0;
  local_420 = 0;
  if (*(char *)(param_1 + 0x1d8) == '\x02') {
    pcVar22 = UEnvQueryTest_Pathfinding::FindPathLengthFrom;
    pcVar16 = UEnvQueryTest_Pathfinding::FindPathLengthTo;
  }
  else {
    pcVar22 = UEnvQueryTest_Pathfinding::FindPathCostFrom;
    pcVar16 = UEnvQueryTest_Pathfinding::FindPathCostTo;
  }
  if (cVar7 != '\0') {
    pcVar22 = pcVar16;
  }
  plVar14 = (longlong *)FMemory::Realloc(0,0x30);
  local_2d8 = plVar14;
  if (plVar14 == (longlong *)0x0) {
    if (((local_420 != 0) && (local_428 != (longlong *)0x0)) &&
       ((**(code **)(*local_428 + 0x28))(local_428,0), local_428 != (longlong *)0x0)) {
      local_428 = (longlong *)FMemory::Realloc(local_428,0,0);
    }
  }
  else {
    *plVar14 = (longlong)&PTR_FUN_14580a8a8;
    FWeakObjectPtr::operator=(plVar14 + 1,param_1);
    plVar14[2] = (longlong)pcVar22;
    lVar11 = FDelegateHandle::GenerateNewID();
    plVar14[4] = lVar11;
    (**(code **)(*plVar14 + 0x30))(plVar14,&local_428);
    (**(code **)(*plVar14 + 0x28))(plVar14,0);
    local_2d8 = (longlong *)FMemory::Realloc(plVar14,0,0);
    if (local_2d8 != (longlong *)0x0) {
      FMemory::Free(local_2d8);
    }
  }
  plVar14 = local_res20;
  (**(code **)(*local_res20 + 0x790))(local_res20);
  lVar11 = local_res10;
  FUN_142bd2270(&local_418,param_1,local_res10,0xffffffff);
LAB_142c12730:
  if ((int)local_418[1] <= local_410) goto LAB_142c12782;
  if ((*(byte *)((longlong)local_418 + 0x156) & 1) != 0) goto LAB_142c12782;
  if ((0.0 <= local_408) &&
     (QueryPerformanceCounter(&local_350),
     local_408 <= (double)local_350.QuadPart * DAT_1468b02f8 + 16777216.0)) goto LAB_142c12782;
  bVar23 = true;
  do {
    if (!bVar23) {
      *(int *)(local_418 + 0x27) = local_410;
      (**(code **)(*plVar14 + 0x798))(plVar14);
      if (local_420 != 0) {
        if (local_428 == (longlong *)0x0) goto LAB_142c130dc;
        (**(code **)(*local_428 + 0x28))(local_428,0);
        if (local_428 != (longlong *)0x0) {
          local_428 = (longlong *)FMemory::Realloc(local_428,0,0);
        }
        local_420 = 0;
      }
      if (local_428 != (longlong *)0x0) {
        FMemory::Free(local_428);
      }
      goto LAB_142c130dc;
    }
    FUN_142be5200(param_1,local_308,lVar11,local_410);
    iVar10 = 0;
    if (0 < (int)local_430) {
      do {
        plVar5 = local_378;
        if (local_378 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_378 + 1) = (int)local_378[1] + 1;
          UNLOCK();
        }
        plVar17 = (longlong *)0x0;
        if (local_420 != 0) {
          plVar17 = local_428;
        }
        local_338 = local_380;
        local_330 = local_378;
        if (local_378 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_378 + 1) = (int)local_378[1] + 1;
          UNLOCK();
        }
        fVar27 = (float)(**(code **)(*plVar17 + 0x38))
                                  (plVar17,local_308,local_438 + (longlong)iVar10 * 0xc,0,plVar14,
                                   local_388,&local_338,local_3a0);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar17 = plVar5 + 1;
          lVar11 = *plVar17;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        if ((local_3f6 & 2) == 0) {
          if (*(char *)(param_1 + 0x44) == '\x01') {
LAB_142c12898:
            sVar4 = local_400._4_2_;
            if (local_3f7 == '\0') {
              local_400 = CONCAT44(local_400._4_4_,(float)local_400 + fVar27);
            }
            else if (local_3f7 == '\x01') {
              if ((sVar4 == 0) || (fVar27 < (float)local_400)) {
LAB_142c128d7:
                local_400 = CONCAT44(local_400._4_4_,fVar27);
              }
            }
            else if (local_3f7 == '\x02') {
              if (sVar4 == 0) goto LAB_142c128d7;
              if ((float)local_400 < fVar27) {
                local_400 = CONCAT44(local_400._4_4_,fVar27);
              }
            }
            local_400._0_6_ = CONCAT24(sVar4 + 1,(float)local_400);
          }
          else {
            cVar6 = *(char *)(param_1 + 0x5a);
            if (cVar6 == '\0') {
              bVar23 = fVar27 < fVar24;
LAB_142c12891:
              if (!bVar23) goto LAB_142c12898;
            }
            else {
              if (cVar6 == '\x01') {
                bVar23 = fVar25 < fVar27;
                goto LAB_142c12891;
              }
              if (((cVar6 == '\x02') && (fVar24 <= fVar27)) && (fVar27 <= fVar25))
              goto LAB_142c12898;
            }
          }
          local_400 = CONCAT26(local_400._6_2_ + 1,(undefined6)local_400);
        }
        if ((cVar8 != '\0') && (3.4e+38 <= fVar27)) {
          local_3f6 = local_3f6 & 0xfe | 2;
          local_400 = CONCAT44(local_400._4_4_,0xff7fffff);
        }
        iVar10 = iVar10 + 1;
        lVar11 = local_res10;
      } while (iVar10 < (int)local_430);
    }
    FUN_142bf3280(&local_418);
    if ((*(byte *)((longlong)local_418 + 0x156) & 1) != 0) goto LAB_142c12730;
    local_410 = local_410 + 1;
    local_400 = 0;
    local_3f6 = local_3f6 & 0xfd | 1;
    if (local_410 < (int)local_418[1]) goto LAB_142c12980;
LAB_142c12782:
    bVar23 = false;
  } while( true );
LAB_142c13090:
  do {
    uVar19 = *(uint *)(*local_3c8 + 4 + (longlong)local_3c0 * 0xc);
    if (((uVar19 >> 0x1e & 1) == 0) && (-1 < (int)uVar19)) {
      bVar23 = true;
    }
    else {
      bVar23 = false;
    }
  } while ((!bVar23) && (local_3c0 = local_3c0 + 1, local_3c0 < (int)local_3c8[1]));
  goto LAB_142c12dc0;
LAB_142c12d60:
  do {
    uVar19 = *(uint *)(*local_3f0 + 4 + (longlong)local_3e8 * 0xc);
    if (((uVar19 >> 0x1e & 1) == 0) && (-1 < (int)uVar19)) {
      bVar23 = true;
    }
    else {
      bVar23 = false;
    }
  } while ((!bVar23) && (local_3e8 = local_3e8 + 1, local_3e8 < (int)local_3f0[1]));
  goto LAB_142c12a90;
LAB_142c12980:
  do {
    uVar19 = *(uint *)(*local_418 + 4 + (longlong)local_410 * 0xc);
    if (((uVar19 >> 0x1e & 1) == 0) && (-1 < (int)uVar19)) {
      bVar23 = true;
    }
    else {
      bVar23 = false;
    }
  } while ((!bVar23) && (local_410 = local_410 + 1, local_410 < (int)local_418[1]));
  goto LAB_142c12730;
LAB_142c130c9:
  *(int *)(local_3f0 + 0x27) = iVar10;
  (**(code **)(*plVar14 + 0x798))(plVar14);
LAB_142c130dc:
  if (local_378 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_378 + 1;
    lVar11 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_378)(local_378);
      LOCK();
      piVar1 = (int *)((longlong)local_378 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_378 + 8))(local_378,1);
      }
    }
  }
LAB_142c13116:
  if (local_398 != 0) {
    FMemory::Free();
  }
  if (local_438 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142c13160 FUN_142c13160 body=2474 status=ok
// SIG undefined FUN_142c13160(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c13160(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  float fVar4;
  longlong *plVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  byte bVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  LARGE_INTEGER LVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  byte bVar17;
  uint uVar18;
  longlong *plVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  longlong *local_1c8;
  int local_1c0;
  double local_1b8;
  undefined8 local_1b0;
  char local_1a7;
  byte local_1a6;
  longlong *local_1a0;
  int local_198;
  double local_190;
  undefined8 local_188;
  char local_17f;
  byte local_17e;
  undefined8 local_178;
  float local_170;
  longlong local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 local_150;
  undefined8 local_148;
  float fStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  float fStack_134;
  uint local_130;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118;
  float local_110;
  undefined8 local_108;
  float local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  float local_f0;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_d8;
  float fStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  float fStack_b8;
  uint local_b4;
  undefined8 uStack_b0;
  float local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  uint local_98;
  undefined4 uStack_94;
  undefined8 local_88;
  longlong *plStack_80;
  longlong *plVar19;
  
  lVar10 = FWeakObjectPtr::Get((longlong)param_2 + 0x34);
  if (lVar10 != 0) {
    FAIDataProviderValue::BindData(param_1 + 0x60,lVar10,(int)param_2[6]);
    bVar8 = FAIDataProviderBoolValue::GetValue(param_1 + 0x60);
    plVar19 = (longlong *)0x0;
    plVar20 = plVar19;
    if (param_2[2] != 0) {
      lVar11 = UEnvQueryItemType::GetPrivateStaticClass();
      lVar21 = param_2[2];
joined_r0x000142c131eb:
      if (lVar21 != 0) {
        if (lVar21 != lVar11) goto code_r0x000142c131f9;
        if (param_2[2] != 0) {
          plVar13 = (longlong *)UEnvQueryItemType_Point::GetPrivateStaticClass();
          plVar16 = plVar19;
          if (param_2[2] != 0) {
            plVar14 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass();
            for (plVar5 = (longlong *)param_2[2];
                (plVar16 = plVar19, plVar5 != (longlong *)0x0 &&
                (plVar16 = (longlong *)param_2[2], plVar5 != plVar14));
                plVar5 = (longlong *)plVar5[6]) {
            }
          }
          if (plVar16 != (longlong *)0x0) {
            while (plVar16 != plVar13) {
              plVar16 = (longlong *)plVar16[6];
              if (plVar16 == (longlong *)0x0) goto LAB_142c13205;
            }
            plVar16 = plVar19;
            if (param_2[2] != 0) {
              plVar13 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass();
              for (plVar20 = (longlong *)param_2[2];
                  (plVar16 = plVar19, plVar20 != (longlong *)0x0 &&
                  (plVar16 = (longlong *)param_2[2], plVar20 != plVar13));
                  plVar20 = (longlong *)plVar20[6]) {
              }
            }
            plVar20 = (longlong *)plVar16[0x1f];
            if ((longlong *)plVar16[0x1f] == (longlong *)0x0) {
              (**(code **)(*plVar16 + 0x368))(plVar16);
              plVar20 = (longlong *)plVar16[0x1f];
            }
          }
        }
      }
    }
LAB_142c13205:
    if (*(char *)(param_1 + 0x203) == '\x01') {
      LVar12.QuadPart = FUN_142be3010(param_2);
      if ((longlong *)LVar12.QuadPart != (longlong *)0x0) {
        local_res18.QuadPart = LVar12.QuadPart;
        FUN_142b90120(&local_88,LVar12.QuadPart,lVar10,*(undefined8 *)(param_1 + 0x1e0));
        iVar9 = (int)param_2[1];
        local_168 = 0;
        local_160 = 0;
        if (0 < iVar9) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::
          ResizeTo(&local_168,iVar9);
          iVar9 = (int)param_2[1];
        }
        fVar22 = *(float *)(param_1 + 0x1e8);
        fVar23 = *(float *)(param_1 + 0x1ec);
        if (fVar22 == fVar23) {
          local_e0 = DAT_1468b5d98;
          puVar15 = &local_e8;
          local_e8 = _DAT_1468b5d90;
        }
        else {
          local_108 = 0;
          puVar15 = &local_108;
          local_100 = (fVar23 - fVar22) * 0.5;
        }
        uVar2 = *puVar15;
        fVar4 = *(float *)(puVar15 + 1);
        local_178 = uVar2;
        local_170 = fVar4;
        if (0 < iVar9) {
          lVar10 = 0;
          local_178._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
          fVar23 = local_178._4_4_;
          local_178._0_4_ = (float)uVar2;
          fVar22 = (float)local_178;
          do {
            uVar18 = *(uint *)(lVar10 + 4 + *param_2);
            if (((uVar18 >> 0x1e & 1) == 0) && (-1 < (int)uVar18)) {
              FUN_142be5200(param_1,&local_178,param_2,plVar19);
              uVar7 = local_160;
              local_110 = local_170 + fVar4;
              lVar21 = (longlong)(int)local_160;
              uStack_13c = (undefined4)_DAT_1468b5d90;
              uStack_138 = (undefined4)((ulonglong)_DAT_1468b5d90 >> 0x20);
              local_130 = local_130 & 0xffffff00;
              local_b4 = local_130;
              fStack_134 = DAT_1468b5d98;
              local_98 = local_98 & 0xfffffffc | 4;
              iVar9 = (int)local_160 + 1;
              local_148 = _DAT_1468b5d90;
              fStack_140 = DAT_1468b5d98;
              local_a8 = DAT_1468b5d98;
              fStack_c4 = DAT_1468b5d98;
              uStack_c0 = uStack_13c;
              uStack_a0 = 0;
              local_d8 = CONCAT44(local_178._4_4_ + fVar23,(float)local_178 + fVar22);
              uStack_bc = uStack_138;
              fStack_b8 = DAT_1468b5d98;
              uStack_b0 = _DAT_1468b5d90;
              local_160 = CONCAT44(local_160._4_4_,iVar9);
              fStack_d0 = local_110;
              uStack_cc = uStack_13c;
              uStack_c8 = uStack_138;
              if (local_160._4_4_ < iVar9) {
                TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow
                          (&local_168,uVar7 & 0xffffffff);
              }
              puVar15 = (undefined8 *)(local_168 + lVar21 * 0x48);
              *puVar15 = local_d8;
              puVar15[1] = CONCAT44(uStack_cc,fStack_d0);
              puVar15 = (undefined8 *)(local_168 + 0x10 + lVar21 * 0x48);
              *puVar15 = CONCAT44(fStack_c4,uStack_c8);
              puVar15[1] = CONCAT44(uStack_bc,uStack_c0);
              puVar15 = (undefined8 *)(local_168 + 0x20 + lVar21 * 0x48);
              *puVar15 = CONCAT44(local_b4,fStack_b8);
              puVar15[1] = uStack_b0;
              puVar15 = (undefined8 *)(local_168 + 0x30 + lVar21 * 0x48);
              *puVar15 = CONCAT44(uStack_a4,local_a8);
              puVar15[1] = uStack_a0;
              *(ulonglong *)(local_168 + 0x40 + lVar21 * 0x48) = CONCAT44(uStack_94,local_98);
            }
            uVar18 = (int)plVar19 + 1;
            plVar19 = (longlong *)(ulonglong)uVar18;
            lVar10 = lVar10 + 0xc;
          } while ((int)uVar18 < (int)param_2[1]);
          fVar23 = *(float *)(param_1 + 0x1ec);
          fVar22 = *(float *)(param_1 + 0x1e8);
          LVar12 = local_res18;
        }
        iVar9 = 0;
        local_f8 = *(undefined4 *)(param_1 + 0x1f0);
        local_f4 = *(undefined4 *)(param_1 + 500);
        local_148 = local_88;
        fStack_140 = SUB84(plStack_80,0);
        uStack_13c = (undefined4)((ulonglong)plStack_80 >> 0x20);
        local_f0 = (fVar22 + fVar23) * 0.5;
        if (plStack_80 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
          UNLOCK();
        }
        (**(code **)(*(longlong *)LVar12 + 0x7e0))
                  (LVar12.QuadPart,&local_168,&local_f8,&local_148,0);
        FUN_142bd2270(&local_1c8,param_1,param_2,0xffffffff);
        lVar10 = 0;
        while (((local_1c0 < (int)local_1c8[1] &&
                ((*(byte *)((longlong)local_1c8 + 0x156) & 1) == 0)) &&
               ((local_1b8 < 0.0 ||
                (QueryPerformanceCounter(&local_res18),
                (double)local_res18.QuadPart * DAT_1468b02f8 + 16777216.0 < local_1b8))))) {
          uVar18 = *(uint *)(local_168 + 0x40 + lVar10) >> 1;
          if (((uVar18 & 1) != 0) && (plVar20 != (longlong *)0x0)) {
            (**(code **)(*plVar20 + 0x2b0))
                      (plVar20,((longlong)(*(int *)(*local_1c8 + 4 + (longlong)local_1c0 * 0xc) * 2)
                               >> 1) + local_1c8[3],local_168 + (longlong)iVar9 * 0x48 + 0x28);
          }
          if ((local_1a6 & 2) == 0) {
            cVar3 = *(char *)(param_1 + 0x5a);
            if ((((cVar3 == '\0') || (cVar3 == '\x01')) || (cVar3 == '\x02')) ||
               ((cVar3 != '\x03' || (((byte)uVar18 & 1) != bVar8)))) {
              if ((local_1a6 & 4) == 0) {
                fVar22 = 0.0;
                goto LAB_142c13687;
              }
            }
            else {
              fVar22 = 1.0;
LAB_142c13687:
              uVar6 = local_1b0._4_4_;
              if (local_1a7 == '\0') {
                local_1b0 = CONCAT44(local_1b0._4_4_,(float)local_1b0 + fVar22);
              }
              else if (local_1a7 == '\x01') {
                if ((local_1b0._4_2_ == 0) || (fVar22 < (float)local_1b0)) {
LAB_142c136c8:
                  local_1b0 = CONCAT44(uVar6,fVar22);
                }
              }
              else if (local_1a7 == '\x02') {
                if (local_1b0._4_2_ == 0) goto LAB_142c136c8;
                if ((float)local_1b0 < fVar22) {
                  local_1b0 = CONCAT44(uVar6,fVar22);
                }
              }
              local_1b0._0_6_ = CONCAT24(local_1b0._4_2_ + 1,(float)local_1b0);
            }
            local_1b0 = CONCAT26(local_1b0._6_2_ + 1,(undefined6)local_1b0);
          }
          FUN_142bf3280(&local_1c8);
          if ((*(byte *)((longlong)local_1c8 + 0x156) & 1) == 0) {
            local_1c0 = local_1c0 + 1;
            local_1b0 = 0;
            local_1a6 = local_1a6 & 0xfd | 1;
            if (local_1c0 < (int)local_1c8[1]) {
              do {
                uVar18 = *(uint *)(*local_1c8 + 4 + (longlong)local_1c0 * 0xc);
                if (((uVar18 >> 0x1e & 1) == 0) && (-1 < (int)uVar18)) break;
                local_1c0 = local_1c0 + 1;
              } while (local_1c0 < (int)local_1c8[1]);
            }
          }
          iVar9 = iVar9 + 1;
          lVar10 = lVar10 + 0x48;
        }
        *(int *)(local_1c8 + 0x27) = local_1c0;
        if (local_168 != 0) {
          FMemory::Free();
        }
        if (plStack_80 != (longlong *)0x0) {
          LOCK();
          plVar20 = plStack_80 + 1;
          lVar10 = *plVar20;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plStack_80)(plStack_80);
            LOCK();
            piVar1 = (int *)((longlong)plStack_80 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plStack_80 + 8))(plStack_80,1);
            }
          }
        }
      }
    }
    else if (*(char *)(param_1 + 0x203) == '\x02') {
      iVar9 = (int)param_2[1];
      local_158 = 0;
      local_150 = 0;
      local_128 = 0;
      local_120 = 0;
      if (0 < iVar9) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                  (&local_158,iVar9);
        iVar9 = (int)param_2[1];
      }
      plVar16 = plVar19;
      if (0 < iVar9) {
        do {
          uVar18 = *(uint *)((longlong)plVar16 + *param_2 + 4);
          if (((uVar18 >> 0x1e & 1) == 0) && (-1 < (int)uVar18)) {
            FUN_142be5200(param_1,&local_118,param_2,plVar19);
            uVar7 = local_150;
            lVar10 = (longlong)(int)local_150;
            fStack_140 = local_110;
            iVar9 = (int)local_150 + 1;
            local_148 = local_118;
            uStack_138 = 0;
            fStack_134 = 0.0;
            local_150 = CONCAT44(local_150._4_4_,iVar9);
            if (local_150._4_4_ < iVar9) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
              ResizeGrow(&local_158,uVar7 & 0xffffffff);
            }
            puVar15 = (undefined8 *)(local_158 + lVar10 * 0x18);
            *puVar15 = local_148;
            puVar15[1] = CONCAT44(uStack_13c,fStack_140);
            *(ulonglong *)(local_158 + 0x10 + lVar10 * 0x18) = CONCAT44(fStack_134,uStack_138);
          }
          uVar18 = (int)plVar19 + 1;
          plVar19 = (longlong *)(ulonglong)uVar18;
          plVar16 = (longlong *)((longlong)plVar16 + 0xc);
        } while ((int)uVar18 < (int)param_2[1]);
      }
      iVar9 = 0;
      FUN_142bf0260(param_2[0xb],param_1 + 0x1d8,&local_158,&local_128);
      FUN_142bd2270(&local_1a0,param_1,param_2,0xffffffff);
      lVar10 = 0;
      while (((local_198 < (int)local_1a0[1] && ((*(byte *)((longlong)local_1a0 + 0x156) & 1) == 0))
             && ((local_190 < 0.0 ||
                 (QueryPerformanceCounter(&local_res20),
                 (double)local_res20.QuadPart * DAT_1468b02f8 + 16777216.0 < local_190))))) {
        if (((iVar9 < 0) || ((int)local_120 <= iVar9)) || (*(char *)(local_128 + lVar10) == '\0')) {
          bVar17 = 0;
        }
        else {
          bVar17 = 1;
          if (plVar20 != (longlong *)0x0) {
            (**(code **)(*plVar20 + 0x2b0))
                      (plVar20,((longlong)(*(int *)(*local_1a0 + 4 + (longlong)local_198 * 0xc) * 2)
                               >> 1) + local_1a0[3],local_158 + (longlong)iVar9 * 0x18);
          }
        }
        if ((local_17e & 2) == 0) {
          cVar3 = *(char *)(param_1 + 0x5a);
          if (((cVar3 == '\0') || (cVar3 == '\x01')) ||
             ((cVar3 == '\x02' || ((cVar3 != '\x03' || (bVar17 != bVar8)))))) {
            if ((local_17e & 4) == 0) {
              fVar22 = 0.0;
              goto LAB_142c139d0;
            }
          }
          else {
            fVar22 = 1.0;
LAB_142c139d0:
            uVar6 = local_188._4_4_;
            if (local_17f == '\0') {
              local_188 = CONCAT44(local_188._4_4_,(float)local_188 + fVar22);
            }
            else if (local_17f == '\x01') {
              if ((local_188._4_2_ == 0) || (fVar22 < (float)local_188)) {
LAB_142c13a11:
                local_188 = CONCAT44(uVar6,fVar22);
              }
            }
            else if (local_17f == '\x02') {
              if (local_188._4_2_ == 0) goto LAB_142c13a11;
              if ((float)local_188 < fVar22) {
                local_188 = CONCAT44(uVar6,fVar22);
              }
            }
            local_188._0_6_ = CONCAT24(local_188._4_2_ + 1,(float)local_188);
          }
          local_188 = CONCAT26(local_188._6_2_ + 1,(undefined6)local_188);
        }
        FUN_142bf3280(&local_1a0);
        if ((*(byte *)((longlong)local_1a0 + 0x156) & 1) == 0) {
          local_198 = local_198 + 1;
          local_188 = 0;
          local_17e = local_17e & 0xfd | 1;
          if (local_198 < (int)local_1a0[1]) {
            do {
              uVar18 = *(uint *)(*local_1a0 + 4 + (longlong)local_198 * 0xc);
              if (((uVar18 >> 0x1e & 1) == 0) && (-1 < (int)uVar18)) break;
              local_198 = local_198 + 1;
            } while (local_198 < (int)local_1a0[1]);
          }
        }
        iVar9 = iVar9 + 1;
        lVar10 = lVar10 + 1;
      }
      *(int *)(local_1a0 + 0x27) = local_198;
      if (local_128 != 0) {
        FMemory::Free();
      }
      if (local_158 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
code_r0x000142c131f9:
  lVar21 = *(longlong *)(lVar21 + 0x30);
  goto joined_r0x000142c131eb;
}



// FUNCTION 142c13b10 FUN_142c13b10 body=674 status=ok
// SIG undefined FUN_142c13b10(void)

void FUN_142c13b10(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  float fVar3;
  longlong lVar4;
  short sVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  LARGE_INTEGER local_res18;
  longlong *local_88;
  int local_80;
  double local_78;
  float local_70;
  undefined4 local_6c;
  char local_67;
  byte local_66;
  
  lVar4 = FWeakObjectPtr::Get(param_2 + 0x34);
  if (lVar4 == 0) {
    return;
  }
  FAIDataProviderValue::BindData(param_1 + 0x90,lVar4,*(undefined4 *)(param_2 + 0x30));
  fVar7 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x90);
  FAIDataProviderValue::BindData(param_1 + 0xc0,lVar4,*(undefined4 *)(param_2 + 0x30));
  fVar8 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0xc0);
  FUN_142bd2270(&local_88,param_1,param_2,0xffffffff);
  do {
LAB_142c13be0:
    if (((int)local_88[1] <= local_80) || ((*(byte *)((longlong)local_88 + 0x156) & 1) != 0))
    goto LAB_142c13d76;
    sVar5 = (short)local_6c;
    if (0.0 <= local_78) {
      QueryPerformanceCounter(&local_res18);
      if (local_78 <= (double)local_res18.QuadPart * DAT_1468b02f8 + 16777216.0) goto LAB_142c13d76;
      sVar5 = (short)local_6c;
    }
    DAT_146b2c4fc = DAT_146b2c4fc * 0xbb38435 + 0x3619636b;
    fVar3 = (float)(DAT_146b2c4fc & 0x7fffff | 0x3f800000);
    fVar3 = fVar3 - (float)(int)fVar3;
    if ((local_66 & 2) == 0) {
      if (*(char *)(param_1 + 0x44) == '\x01') {
LAB_142c13cae:
        if (local_67 == '\0') {
          local_70 = local_70 + fVar3;
        }
        else if (local_67 == '\x01') {
          if ((sVar5 == 0) || (fVar3 < local_70)) {
LAB_142c13cdd:
            local_70 = fVar3;
          }
        }
        else if (local_67 == '\x02') {
          if (sVar5 == 0) goto LAB_142c13cdd;
          if (local_70 < fVar3) {
            local_70 = fVar3;
          }
        }
        local_6c = CONCAT22(local_6c._2_2_,sVar5 + 1);
      }
      else {
        cVar1 = *(char *)(param_1 + 0x5a);
        if (cVar1 == '\0') {
          bVar6 = fVar3 < fVar7;
LAB_142c13ca7:
          if (!bVar6) goto LAB_142c13cae;
        }
        else {
          if (cVar1 == '\x01') {
            bVar6 = fVar8 < fVar3;
            goto LAB_142c13ca7;
          }
          if (((cVar1 == '\x02') && (fVar7 <= fVar3)) && (fVar3 <= fVar8)) goto LAB_142c13cae;
        }
      }
      local_6c = CONCAT22(local_6c._2_2_ + 1,(short)local_6c);
    }
    FUN_142bf3280(&local_88);
  } while ((*(byte *)((longlong)local_88 + 0x156) & 1) != 0);
  local_80 = local_80 + 1;
  local_6c = 0;
  local_66 = local_66 & 0xfd | 1;
  local_70 = 0.0;
  local_6c._0_2_ = 0;
  if ((int)local_88[1] <= local_80) {
LAB_142c13d76:
    *(int *)(local_88 + 0x27) = local_80;
    return;
  }
  do {
    uVar2 = *(uint *)(*local_88 + 4 + (longlong)local_80 * 0xc);
    if (((uVar2 >> 0x1e & 1) == 0) && (-1 < (int)uVar2)) break;
    local_80 = local_80 + 1;
  } while (local_80 < (int)local_88[1]);
  goto LAB_142c13be0;
}



// FUNCTION 142c13dc0 FUN_142c13dc0 body=1840 status=ok
// SIG undefined FUN_142c13dc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142c13dc0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  short sVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  undefined4 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  code *pcVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  int iVar15;
  longlong *plVar16;
  uint uVar17;
  longlong lVar18;
  code *pcVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  undefined4 local_1d0;
  undefined1 *local_1c8;
  undefined4 *local_1c0;
  char local_1b8;
  undefined8 *local_1b0;
  undefined8 local_1a8;
  undefined1 local_1a0 [8];
  longlong *local_198;
  int local_190;
  double local_188;
  undefined8 local_180;
  char local_177;
  byte local_176;
  longlong *local_170;
  int local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  float local_158;
  longlong local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  LARGE_INTEGER local_130;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108;
  longlong local_d0;
  longlong local_b0;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  plVar9 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x34);
  FAIDataProviderValue::BindData(param_1 + 0x60,plVar9,*(undefined4 *)(param_2 + 0x30));
  FAIDataProviderValue::BindData(param_1 + 0x208,plVar9,*(undefined4 *)(param_2 + 0x30));
  FAIDataProviderValue::BindData(param_1 + 0x238,plVar9,*(undefined4 *)(param_2 + 0x30));
  FAIDataProviderValue::BindData(param_1 + 0x268,plVar9,*(undefined4 *)(param_2 + 0x30));
  cVar4 = FAIDataProviderBoolValue::GetValue(param_1 + 0x60);
  cVar5 = FAIDataProviderBoolValue::GetValue(param_1 + 0x208);
  fVar20 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x238);
  fVar21 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x268);
  plVar16 = (longlong *)0x0;
  local_1b0 = (undefined8 *)0x0;
  local_1a8 = 0;
  cVar6 = UEnvQueryTest::IsContextPerItem(param_1);
  local_1b8 = cVar6;
  if (cVar6 == '\0') {
    plVar11 = plVar16;
    if (*(longlong *)(param_1 + 0x298) != 0) {
      plVar10 = (longlong *)UEnvQueryContext::GetPrivateStaticClass();
      for (plVar1 = *(longlong **)(param_1 + 0x298);
          (plVar11 = plVar16, plVar1 != (longlong *)0x0 &&
          (plVar11 = *(longlong **)(param_1 + 0x298), plVar1 != plVar10));
          plVar1 = (longlong *)plVar1[6]) {
      }
    }
    cVar7 = FUN_142bedad0(param_2,plVar11,&local_1b0);
    if (cVar7 == '\0') goto LAB_142c14440;
  }
  else {
    lVar18 = (longlong)(int)local_1a8;
    iVar15 = (int)local_1a8 + 1;
    local_1a8 = CONCAT44(local_1a8._4_4_,iVar15);
    if (local_1a8._4_4_ < iVar15) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_1b0);
    }
    *(undefined8 *)((longlong)local_1b0 + lVar18 * 0xc) = 0;
    *(undefined4 *)((longlong)local_1b0 + lVar18 * 0xc + 8) = 0;
    cVar6 = local_1b8;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b2c858) && (_Init_thread_header(&DAT_146b2c858), DAT_146b2c858 == -1))
  {
    FName::FName(&DAT_146b2c850,"EnvQueryTrace",1);
    _Init_thread_footer(&DAT_146b2c858);
  }
  local_1d8 = (longlong *)0x0;
  FUN_1422ffb20(local_118,DAT_146b2c850,local_1a0,*(byte *)(param_1 + 0x204) & 1);
  local_108 = 1;
  local_150 = 0;
  local_148 = 0;
  if (plVar9 != (longlong *)0x0) {
    lVar18 = FUN_1428dfc70();
    if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar18 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar18 + 0x90) * 8) !=
        lVar18 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) &&
       (plVar11 = (longlong *)(**(code **)(*plVar9 + 0x688))(plVar9), plVar16 = plVar9,
       plVar11 != (longlong *)0x0)) {
      plVar16 = plVar11;
    }
  }
  local_1d8 = &local_150;
  FUN_142c0d2a0(param_1,param_2,plVar16,*(undefined8 *)(param_1 + 0x298));
  if (0 < (int)local_148) {
    FCollisionQueryParams::AddIgnoredActors(local_118,&local_150);
  }
  uVar8 = UEngineTypes::ConvertToCollisionChannel(*(undefined1 *)(param_1 + 0x200));
  local_140 = *(undefined4 *)(param_1 + 0x1f0);
  cVar7 = *(char *)(param_1 + 0x202);
  local_13c = *(undefined4 *)(param_1 + 500);
  local_138 = *(undefined4 *)(param_1 + 0x1f8);
  local_170 = (longlong *)0x0;
  local_168 = 0;
  if (cVar7 == '\0') {
    pcVar19 = UEnvQueryTest_Trace::RunLineTraceFrom;
    pcVar12 = UEnvQueryTest_Trace::RunLineTraceTo;
  }
  else if (cVar7 == '\x01') {
    pcVar19 = FUN_142c0f8c0;
    pcVar12 = FUN_142c0fac0;
  }
  else if (cVar7 == '\x02') {
    pcVar19 = FUN_142c10340;
    pcVar12 = FUN_142c104c0;
  }
  else {
    if (cVar7 != '\x03') {
LAB_142c14416:
      if (local_150 != 0) {
        FMemory::Free();
      }
      if (local_b0 != 0) {
        FMemory::Free();
      }
      if (local_d0 != 0) {
        FMemory::Free();
      }
LAB_142c14440:
      if (local_1b0 != (undefined8 *)0x0) {
        FMemory::Free();
      }
      return;
    }
    pcVar19 = FUN_142c0fcc0;
    pcVar12 = FUN_142c0fe50;
  }
  if (cVar5 != '\0') {
    pcVar19 = pcVar12;
  }
  FUN_140747140(&local_170,param_1,pcVar19);
  plVar11 = (longlong *)0x0;
  plVar16 = plVar11;
  plVar9 = plVar11;
  if (0 < (int)local_1a8) {
    do {
      uVar17 = (int)plVar9 + 1;
      *(float *)((longlong)(plVar16 + 1) + (longlong)local_1b0) =
           fVar21 + *(float *)((longlong)(plVar16 + 1) + (longlong)local_1b0);
      plVar16 = (longlong *)((longlong)plVar16 + 0xc);
      plVar9 = (longlong *)(ulonglong)uVar17;
    } while ((int)uVar17 < (int)local_1a8);
  }
  FUN_142bd2270(&local_198,param_1,param_2,0xffffffff);
LAB_142c14154:
  if ((int)local_198[1] <= local_190) goto LAB_142c141a6;
  if ((*(byte *)((longlong)local_198 + 0x156) & 1) != 0) goto LAB_142c141a6;
  if ((0.0 <= local_188) &&
     (QueryPerformanceCounter(&local_130),
     local_188 <= (double)local_130.QuadPart * DAT_1468b02f8 + 16777216.0)) goto LAB_142c141a6;
  bVar2 = true;
  do {
    if (!bVar2) {
      *(int *)(local_198 + 0x27) = local_190;
      if (local_168 != 0) {
        if (local_170 == (longlong *)0x0) goto LAB_142c14416;
        (**(code **)(*local_170 + 0x28))(local_170,0);
        if (local_170 != (longlong *)0x0) {
          local_170 = (longlong *)FMemory::Realloc(local_170,0,0);
        }
        local_168 = 0;
      }
      if (local_170 != (longlong *)0x0) {
        FMemory::Free(local_170);
      }
      goto LAB_142c14416;
    }
    puVar13 = (undefined4 *)FUN_142be5200(param_1,local_128,param_2,local_190);
    local_158 = fVar20 + (float)puVar13[2];
    uStack_15c = puVar13[1];
    local_160 = *puVar13;
    uVar14 = FUN_142be4fb0(param_1,param_2,local_190);
    if (cVar6 != '\0') {
      *local_1b0 = CONCAT44(uStack_15c,local_160);
      *(float *)(local_1b0 + 1) = local_158;
      *(float *)(local_1b0 + 1) = fVar21 + *(float *)(local_1b0 + 1);
    }
    plVar16 = plVar11;
    if (0 < (int)local_1a8) {
      do {
        local_1d8 = *(longlong **)(param_2 + 0x58);
        plVar9 = plVar11;
        if (local_168 != 0) {
          plVar9 = local_170;
        }
        local_1c0 = &local_140;
        local_1c8 = local_118;
        local_1d0 = uVar8;
        cVar6 = (**(code **)(*plVar9 + 0x38))
                          (plVar9,&local_160,(longlong)local_1b0 + (longlong)(int)plVar16 * 0xc,
                           uVar14);
        if ((local_176 & 2) == 0) {
          cVar5 = *(char *)(param_1 + 0x5a);
          if ((((cVar5 == '\0') || (cVar5 == '\x01')) || (cVar5 == '\x02')) ||
             ((cVar5 != '\x03' || (cVar6 != cVar4)))) {
            if ((local_176 & 4) == 0) {
              fVar22 = 0.0;
              goto LAB_142c142b9;
            }
          }
          else {
            fVar22 = 1.0;
LAB_142c142b9:
            sVar3 = local_180._4_2_;
            if (local_177 == '\0') {
              local_180 = CONCAT44(local_180._4_4_,(float)local_180 + fVar22);
            }
            else if (local_177 == '\x01') {
              if ((sVar3 == 0) || (fVar22 < (float)local_180)) {
LAB_142c142f8:
                local_180 = CONCAT44(local_180._4_4_,fVar22);
              }
            }
            else if (local_177 == '\x02') {
              if (sVar3 == 0) goto LAB_142c142f8;
              if ((float)local_180 < fVar22) {
                local_180 = CONCAT44(local_180._4_4_,fVar22);
              }
            }
            local_180._0_6_ = CONCAT24(sVar3 + 1,(float)local_180);
          }
          local_180 = CONCAT26(local_180._6_2_ + 1,(undefined6)local_180);
        }
        uVar17 = (int)plVar16 + 1;
        plVar16 = (longlong *)(ulonglong)uVar17;
      } while ((int)uVar17 < (int)local_1a8);
    }
    FUN_142bf3280(&local_198);
    cVar6 = local_1b8;
    if ((*(byte *)((longlong)local_198 + 0x156) & 1) != 0) goto LAB_142c14154;
    local_190 = local_190 + 1;
    local_180 = 0;
    local_176 = local_176 & 0xfd | 1;
    if (local_190 < (int)local_198[1]) break;
LAB_142c141a6:
    bVar2 = false;
  } while( true );
  do {
    uVar17 = *(uint *)(*local_198 + 4 + (longlong)local_190 * 0xc);
    if (((uVar17 >> 0x1e & 1) == 0) && (-1 < (int)uVar17)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
  } while ((!bVar2) && (local_190 = local_190 + 1, local_190 < (int)local_198[1]));
  goto LAB_142c14154;
}



// FUNCTION 142c14530 SetContextHelper body=180 status=ok
// SIG undefined SetContextHelper(void)

void UEnvQueryItemType_Actor::SetContextHelper(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  int iVar5;
  undefined4 local_res8;
  undefined4 local_resc;
  
  uVar2 = GetPrivateStaticClass();
  *param_1 = uVar2;
  *(int *)(param_1 + 1) = (int)param_2[1];
  iVar5 = *(int *)(param_1 + 3);
  iVar1 = (int)param_2[1] * 8;
  if (iVar5 < iVar1) {
    *(int *)(param_1 + 3) = iVar1;
    if (*(int *)((longlong)param_1 + 0x1c) < iVar1) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar5);
    }
  }
  else if ((iVar1 < iVar5) && (iVar1 != iVar5)) {
    *(int *)(param_1 + 3) = iVar1;
    TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(param_1 + 2);
  }
  iVar5 = 0;
  if (0 < (int)param_2[1]) {
    lVar4 = 0;
    puVar3 = (undefined4 *)param_1[2];
    do {
      FWeakObjectPtr::operator=(&local_res8,*(undefined8 *)(lVar4 + *param_2));
      iVar5 = iVar5 + 1;
      *puVar3 = local_res8;
      lVar4 = lVar4 + 8;
      puVar3[1] = local_resc;
      puVar3 = puVar3 + 2;
    } while (iVar5 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 142c145f0 SetContextHelper body=129 status=ok
// SIG undefined SetContextHelper(void)

void UEnvQueryItemType_Actor::SetContextHelper(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  
  uVar3 = GetPrivateStaticClass();
  *param_1 = uVar3;
  *(undefined4 *)(param_1 + 1) = 1;
  iVar1 = *(int *)(param_1 + 3);
  if (iVar1 < 8) {
    *(undefined4 *)(param_1 + 3) = 8;
    if (*(int *)((longlong)param_1 + 0x1c) < 8) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar1);
    }
  }
  else if ((8 < iVar1) && (iVar1 + -8 != 0)) {
    *(int *)(param_1 + 3) = iVar1 - (iVar1 + -8);
    TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(param_1 + 2);
  }
  FWeakObjectPtr::operator=(&local_res8,param_2);
  puVar2 = (undefined4 *)param_1[2];
  *puVar2 = local_res8;
  puVar2[1] = local_resc;
  return;
}


