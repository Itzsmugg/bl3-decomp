// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141eb6360 HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,TSparseArray<TSetElement<TTuple<FString,FGPUProfilerEventNodeStats>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FGPUProfilerEventNodeStats>,TDefaultMapHashableKeyFuncs<FString,FGPUProfilerEventNodeStats,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FGPUProfilerEventNodeStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGPUProfilerEventNodeStats,0>_>::FValueComparisonClass<FNodeStatsCompare>_>_>_>_> body=615 status=ok
// SIG undefined HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,TSparseArray<TSetElement<TTuple<FString,FGPUProfilerEventNodeStats>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FGPUProfilerEventNodeStats>,TDefaultMapHashableKeyFuncs<FString,FGPUProfilerEventNodeStats,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FGPUProfilerEventNodeStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGPUProfilerEventNodeStats,0>_>::FValueComparisonClass<FNodeStatsCompare>_>_>_>_>(void)

void AlgoImpl::
     HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,TSparseArray<TSetElement<TTuple<FString,FGPUProfilerEventNodeStats>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FGPUProfilerEventNodeStats>,TDefaultMapHashableKeyFuncs<FString,FGPUProfilerEventNodeStats,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FGPUProfilerEventNodeStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGPUProfilerEventNodeStats,0>_>::FValueComparisonClass<FNodeStatsCompare>_>_>_>_>
               (undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  
  iVar13 = (param_2 + -2) / 2;
  if (-1 < iVar13) {
    iVar14 = iVar13 * 2 + 1;
    iVar19 = iVar14;
    iVar18 = iVar13;
joined_r0x000141eb6395:
    do {
      if (iVar14 < param_2) {
        iVar16 = iVar13 * 2 + 1;
        iVar14 = iVar13 * 2 + 2;
        iVar17 = iVar16;
        if ((iVar14 < param_2) &&
           (iVar17 = iVar14,
           *(float *)(param_1 + (longlong)iVar16 * 9 + 7) <=
           *(float *)(param_1 + (longlong)iVar14 * 9 + 7) &&
           *(float *)(param_1 + (longlong)iVar14 * 9 + 7) !=
           *(float *)(param_1 + (longlong)iVar16 * 9 + 7))) {
          iVar17 = iVar16;
        }
        puVar15 = param_1 + (longlong)iVar17 * 9;
        puVar1 = param_1 + (longlong)iVar13 * 9;
        if (*(float *)(puVar15 + 7) <= *(float *)(param_1 + (longlong)iVar13 * 9 + 7) &&
            *(float *)(param_1 + (longlong)iVar13 * 9 + 7) != *(float *)(puVar15 + 7)) {
          if (puVar1 != puVar15) {
            uVar4 = puVar15[1];
            uVar5 = *puVar1;
            uVar6 = puVar1[1];
            uVar7 = puVar1[2];
            uVar8 = puVar1[3];
            uVar9 = puVar1[4];
            uVar10 = puVar1[5];
            uVar11 = puVar1[6];
            uVar12 = puVar1[7];
            uVar3 = puVar1[8];
            *puVar1 = *puVar15;
            puVar1[1] = uVar4;
            uVar4 = puVar15[3];
            puVar1[2] = puVar15[2];
            puVar1[3] = uVar4;
            uVar4 = puVar15[5];
            puVar1[4] = puVar15[4];
            puVar1[5] = uVar4;
            uVar4 = puVar15[7];
            puVar1[6] = puVar15[6];
            puVar1[7] = uVar4;
            puVar1[8] = puVar15[8];
            *puVar15 = uVar5;
            puVar15[1] = uVar6;
            puVar15[2] = uVar7;
            puVar15[3] = uVar8;
            puVar15[4] = uVar9;
            puVar15[5] = uVar10;
            puVar15[6] = uVar11;
            puVar15[7] = uVar12;
            puVar15[8] = uVar3;
          }
          iVar14 = iVar17 * 2 + 1;
          iVar13 = iVar17;
          goto joined_r0x000141eb6395;
        }
      }
      iVar14 = iVar19 + -2;
      iVar13 = iVar18 + -1;
      iVar19 = iVar14;
      iVar18 = iVar13;
    } while (-1 < iVar13);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar15 = param_1 + (longlong)param_2 * 9;
    do {
      if (param_1 != puVar15) {
        uVar4 = puVar15[1];
        uVar5 = *param_1;
        uVar6 = param_1[1];
        uVar7 = param_1[2];
        uVar8 = param_1[3];
        uVar9 = param_1[4];
        uVar10 = param_1[5];
        uVar11 = param_1[6];
        uVar12 = param_1[7];
        uVar3 = param_1[8];
        *param_1 = *puVar15;
        param_1[1] = uVar4;
        uVar4 = puVar15[3];
        param_1[2] = puVar15[2];
        param_1[3] = uVar4;
        uVar4 = puVar15[5];
        param_1[4] = puVar15[4];
        param_1[5] = uVar4;
        uVar4 = puVar15[7];
        param_1[6] = puVar15[6];
        param_1[7] = uVar4;
        param_1[8] = puVar15[8];
        *puVar15 = uVar5;
        puVar15[1] = uVar6;
        puVar15[2] = uVar7;
        puVar15[3] = uVar8;
        puVar15[4] = uVar9;
        puVar15[5] = uVar10;
        puVar15[6] = uVar11;
        puVar15[7] = uVar12;
        puVar15[8] = uVar3;
      }
      iVar13 = 0;
      if (1 < param_2) {
        do {
          iVar18 = iVar13 * 2 + 1;
          iVar14 = iVar13 * 2 + 2;
          iVar19 = iVar18;
          if ((iVar14 < param_2) &&
             (iVar19 = iVar14,
             *(float *)(param_1 + (longlong)iVar18 * 9 + 7) <=
             *(float *)(param_1 + (longlong)iVar14 * 9 + 7) &&
             *(float *)(param_1 + (longlong)iVar14 * 9 + 7) !=
             *(float *)(param_1 + (longlong)iVar18 * 9 + 7))) {
            iVar19 = iVar18;
          }
          puVar1 = param_1 + (longlong)iVar19 * 9;
          puVar2 = param_1 + (longlong)iVar13 * 9;
          if (*(float *)(param_1 + (longlong)iVar13 * 9 + 7) < *(float *)(puVar1 + 7) ||
              *(float *)(param_1 + (longlong)iVar13 * 9 + 7) == *(float *)(puVar1 + 7)) break;
          if (puVar2 != puVar1) {
            uVar4 = puVar1[1];
            uVar5 = *puVar2;
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            uVar9 = puVar2[4];
            uVar10 = puVar2[5];
            uVar11 = puVar2[6];
            uVar12 = puVar2[7];
            uVar3 = puVar2[8];
            *puVar2 = *puVar1;
            puVar2[1] = uVar4;
            uVar4 = puVar1[3];
            puVar2[2] = puVar1[2];
            puVar2[3] = uVar4;
            uVar4 = puVar1[5];
            puVar2[4] = puVar1[4];
            puVar2[5] = uVar4;
            uVar4 = puVar1[7];
            puVar2[6] = puVar1[6];
            puVar2[7] = uVar4;
            puVar2[8] = puVar1[8];
            *puVar1 = uVar5;
            puVar1[1] = uVar6;
            puVar1[2] = uVar7;
            puVar1[3] = uVar8;
            puVar1[4] = uVar9;
            puVar1[5] = uVar10;
            puVar1[6] = uVar11;
            puVar1[7] = uVar12;
            puVar1[8] = uVar3;
          }
          iVar13 = iVar19;
        } while (iVar19 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar15 = puVar15 + -9;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 141eb65d0 HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<168,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<168,8>_>,TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<<lambda_429c1ffd4371d29d74408ee7bb2c8a98>_>_>_>_>_> body=1511 status=ok
// SIG undefined HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<168,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<168,8>_>,TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<<lambda_429c1ffd4371d29d74408ee7bb2c8a98>_>_>_>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<168,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<168,8>_>,TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<<lambda_429c1ffd4371d29d74408ee7bb2c8a98>_>_>_>_>_>
               (undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
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
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  
  iVar24 = (param_2 + -2) / 2;
  if (-1 < iVar24) {
    iVar26 = iVar24 * 2 + 1;
    iVar2 = iVar26;
    iVar27 = iVar24;
joined_r0x000141eb6616:
    do {
      if (iVar26 < param_2) {
        iVar26 = iVar24 * 2;
        iVar25 = iVar26 + 1;
        if (iVar26 + 2 < param_2) {
          if ((longlong)param_1[(longlong)iVar25 * 0x15 + 8] <
              (longlong)param_1[(longlong)iVar26 * 0x15 + 0x32]) {
            iVar25 = iVar26;
          }
          iVar25 = iVar25 + 1;
        }
        puVar28 = param_1 + (longlong)iVar25 * 0x15;
        puVar29 = param_1 + (longlong)iVar24 * 0x15;
        if ((longlong)puVar28[8] < (longlong)puVar29[8]) {
          if (puVar29 != puVar28) {
            uVar3 = *puVar29;
            uVar4 = puVar29[1];
            uVar1 = puVar29[0x14];
            uVar5 = puVar29[2];
            uVar6 = puVar29[3];
            uVar7 = puVar29[4];
            uVar8 = puVar29[5];
            uVar9 = puVar29[6];
            uVar10 = puVar29[7];
            uVar11 = puVar29[8];
            uVar12 = puVar29[9];
            uVar13 = puVar29[10];
            uVar14 = puVar29[0xb];
            uVar15 = puVar29[0xc];
            uVar16 = puVar29[0xd];
            uVar17 = puVar29[0xe];
            uVar18 = puVar29[0xf];
            uVar19 = puVar29[0x10];
            uVar20 = puVar29[0x11];
            uVar21 = puVar29[0x12];
            uVar22 = puVar29[0x13];
            uVar23 = puVar28[1];
            *puVar29 = *puVar28;
            puVar29[1] = uVar23;
            uVar23 = puVar28[3];
            puVar29[2] = puVar28[2];
            puVar29[3] = uVar23;
            uVar23 = puVar28[5];
            puVar29[4] = puVar28[4];
            puVar29[5] = uVar23;
            uVar23 = puVar28[7];
            puVar29[6] = puVar28[6];
            puVar29[7] = uVar23;
            uVar23 = puVar28[9];
            puVar29[8] = puVar28[8];
            puVar29[9] = uVar23;
            uVar23 = puVar28[0xb];
            puVar29[10] = puVar28[10];
            puVar29[0xb] = uVar23;
            uVar23 = puVar28[0xd];
            puVar29[0xc] = puVar28[0xc];
            puVar29[0xd] = uVar23;
            uVar23 = puVar28[0xf];
            puVar29[0xe] = puVar28[0xe];
            puVar29[0xf] = uVar23;
            uVar23 = puVar28[0x11];
            puVar29[0x10] = puVar28[0x10];
            puVar29[0x11] = uVar23;
            uVar23 = puVar28[0x13];
            puVar29[0x12] = puVar28[0x12];
            puVar29[0x13] = uVar23;
            puVar29[0x14] = puVar28[0x14];
            *puVar28 = uVar3;
            puVar28[1] = uVar4;
            puVar28[2] = uVar5;
            puVar28[3] = uVar6;
            puVar28[4] = uVar7;
            puVar28[5] = uVar8;
            puVar28[6] = uVar9;
            puVar28[7] = uVar10;
            puVar28[8] = uVar11;
            puVar28[9] = uVar12;
            puVar28[10] = uVar13;
            puVar28[0xb] = uVar14;
            puVar28[0xc] = uVar15;
            puVar28[0xd] = uVar16;
            puVar28[0xe] = uVar17;
            puVar28[0xf] = uVar18;
            puVar28[0x10] = uVar19;
            puVar28[0x11] = uVar20;
            puVar28[0x12] = uVar21;
            puVar28[0x13] = uVar22;
            puVar28[0x14] = uVar1;
          }
          iVar26 = iVar25 * 2 + 1;
          iVar24 = iVar25;
          goto joined_r0x000141eb6616;
        }
      }
      iVar26 = iVar2 + -2;
      iVar24 = iVar27 + -1;
      iVar2 = iVar26;
      iVar27 = iVar24;
    } while (-1 < iVar24);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar28 = param_1 + (longlong)param_2 * 0x15;
    do {
      if (param_1 != puVar28) {
        uVar3 = *param_1;
        uVar4 = param_1[1];
        uVar1 = param_1[0x14];
        uVar5 = param_1[2];
        uVar6 = param_1[3];
        uVar7 = param_1[4];
        uVar8 = param_1[5];
        uVar9 = param_1[6];
        uVar10 = param_1[7];
        uVar11 = param_1[8];
        uVar12 = param_1[9];
        uVar13 = param_1[10];
        uVar14 = param_1[0xb];
        uVar15 = param_1[0xc];
        uVar16 = param_1[0xd];
        uVar17 = param_1[0xe];
        uVar18 = param_1[0xf];
        uVar19 = param_1[0x10];
        uVar20 = param_1[0x11];
        uVar21 = param_1[0x12];
        uVar22 = param_1[0x13];
        uVar23 = puVar28[1];
        *param_1 = *puVar28;
        param_1[1] = uVar23;
        uVar23 = puVar28[3];
        param_1[2] = puVar28[2];
        param_1[3] = uVar23;
        uVar23 = puVar28[5];
        param_1[4] = puVar28[4];
        param_1[5] = uVar23;
        uVar23 = puVar28[7];
        param_1[6] = puVar28[6];
        param_1[7] = uVar23;
        uVar23 = puVar28[9];
        param_1[8] = puVar28[8];
        param_1[9] = uVar23;
        uVar23 = puVar28[0xb];
        param_1[10] = puVar28[10];
        param_1[0xb] = uVar23;
        uVar23 = puVar28[0xd];
        param_1[0xc] = puVar28[0xc];
        param_1[0xd] = uVar23;
        uVar23 = puVar28[0xf];
        param_1[0xe] = puVar28[0xe];
        param_1[0xf] = uVar23;
        uVar23 = puVar28[0x11];
        param_1[0x10] = puVar28[0x10];
        param_1[0x11] = uVar23;
        uVar23 = puVar28[0x13];
        param_1[0x12] = puVar28[0x12];
        param_1[0x13] = uVar23;
        param_1[0x14] = puVar28[0x14];
        *puVar28 = uVar3;
        puVar28[1] = uVar4;
        puVar28[2] = uVar5;
        puVar28[3] = uVar6;
        puVar28[4] = uVar7;
        puVar28[5] = uVar8;
        puVar28[6] = uVar9;
        puVar28[7] = uVar10;
        puVar28[8] = uVar11;
        puVar28[9] = uVar12;
        puVar28[10] = uVar13;
        puVar28[0xb] = uVar14;
        puVar28[0xc] = uVar15;
        puVar28[0xd] = uVar16;
        puVar28[0xe] = uVar17;
        puVar28[0xf] = uVar18;
        puVar28[0x10] = uVar19;
        puVar28[0x11] = uVar20;
        puVar28[0x12] = uVar21;
        puVar28[0x13] = uVar22;
        puVar28[0x14] = uVar1;
      }
      iVar24 = 0;
      if (1 < param_2) {
        do {
          iVar2 = iVar24 * 2;
          iVar26 = iVar2 + 1;
          if (iVar2 + 2 < param_2) {
            if ((longlong)param_1[(longlong)iVar26 * 0x15 + 8] <
                (longlong)param_1[(longlong)iVar2 * 0x15 + 0x32]) {
              iVar26 = iVar2;
            }
            iVar26 = iVar26 + 1;
          }
          puVar29 = param_1 + (longlong)iVar26 * 0x15;
          puVar30 = param_1 + (longlong)iVar24 * 0x15;
          if ((longlong)puVar30[8] <= (longlong)puVar29[8]) break;
          if (puVar30 != puVar29) {
            uVar3 = *puVar30;
            uVar4 = puVar30[1];
            uVar1 = puVar30[0x14];
            uVar5 = puVar30[2];
            uVar6 = puVar30[3];
            uVar7 = puVar30[4];
            uVar8 = puVar30[5];
            uVar9 = puVar30[6];
            uVar10 = puVar30[7];
            uVar11 = puVar30[8];
            uVar12 = puVar30[9];
            uVar13 = puVar30[10];
            uVar14 = puVar30[0xb];
            uVar15 = puVar30[0xc];
            uVar16 = puVar30[0xd];
            uVar17 = puVar30[0xe];
            uVar18 = puVar30[0xf];
            uVar19 = puVar30[0x10];
            uVar20 = puVar30[0x11];
            uVar21 = puVar30[0x12];
            uVar22 = puVar30[0x13];
            uVar23 = puVar29[1];
            *puVar30 = *puVar29;
            puVar30[1] = uVar23;
            uVar23 = puVar29[3];
            puVar30[2] = puVar29[2];
            puVar30[3] = uVar23;
            uVar23 = puVar29[5];
            puVar30[4] = puVar29[4];
            puVar30[5] = uVar23;
            uVar23 = puVar29[7];
            puVar30[6] = puVar29[6];
            puVar30[7] = uVar23;
            uVar23 = puVar29[9];
            puVar30[8] = puVar29[8];
            puVar30[9] = uVar23;
            uVar23 = puVar29[0xb];
            puVar30[10] = puVar29[10];
            puVar30[0xb] = uVar23;
            uVar23 = puVar29[0xd];
            puVar30[0xc] = puVar29[0xc];
            puVar30[0xd] = uVar23;
            uVar23 = puVar29[0xf];
            puVar30[0xe] = puVar29[0xe];
            puVar30[0xf] = uVar23;
            uVar23 = puVar29[0x11];
            puVar30[0x10] = puVar29[0x10];
            puVar30[0x11] = uVar23;
            uVar23 = puVar29[0x13];
            puVar30[0x12] = puVar29[0x12];
            puVar30[0x13] = uVar23;
            puVar30[0x14] = puVar29[0x14];
            *puVar29 = uVar3;
            puVar29[1] = uVar4;
            puVar29[2] = uVar5;
            puVar29[3] = uVar6;
            puVar29[4] = uVar7;
            puVar29[5] = uVar8;
            puVar29[6] = uVar9;
            puVar29[7] = uVar10;
            puVar29[8] = uVar11;
            puVar29[9] = uVar12;
            puVar29[10] = uVar13;
            puVar29[0xb] = uVar14;
            puVar29[0xc] = uVar15;
            puVar29[0xd] = uVar16;
            puVar29[0xe] = uVar17;
            puVar29[0xf] = uVar18;
            puVar29[0x10] = uVar19;
            puVar29[0x11] = uVar20;
            puVar29[0x12] = uVar21;
            puVar29[0x13] = uVar22;
            puVar29[0x14] = uVar1;
          }
          iVar24 = iVar26;
        } while (iVar26 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar28 = puVar28 + -0x15;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 141eb6bc0 HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<168,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<168,8>_>,TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<<lambda_f4a8f81c3f62a3aff784eb1ce16613ad>_>_>_>_>_> body=1511 status=ok
// SIG undefined HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<168,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<168,8>_>,TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<<lambda_f4a8f81c3f62a3aff784eb1ce16613ad>_>_>_>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<168,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<168,8>_>,TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<<lambda_f4a8f81c3f62a3aff784eb1ce16613ad>_>_>_>_>_>
               (undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
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
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  
  iVar24 = (param_2 + -2) / 2;
  if (-1 < iVar24) {
    iVar26 = iVar24 * 2 + 1;
    iVar2 = iVar26;
    iVar27 = iVar24;
joined_r0x000141eb6c06:
    do {
      if (iVar26 < param_2) {
        iVar26 = iVar24 * 2;
        iVar25 = iVar26 + 1;
        if (iVar26 + 2 < param_2) {
          if ((longlong)param_1[(longlong)iVar25 * 0x15 + 5] <
              (longlong)param_1[(longlong)iVar26 * 0x15 + 0x2f]) {
            iVar25 = iVar26;
          }
          iVar25 = iVar25 + 1;
        }
        puVar28 = param_1 + (longlong)iVar25 * 0x15;
        puVar29 = param_1 + (longlong)iVar24 * 0x15;
        if ((longlong)puVar28[5] < (longlong)puVar29[5]) {
          if (puVar29 != puVar28) {
            uVar3 = *puVar29;
            uVar4 = puVar29[1];
            uVar1 = puVar29[0x14];
            uVar5 = puVar29[2];
            uVar6 = puVar29[3];
            uVar7 = puVar29[4];
            uVar8 = puVar29[5];
            uVar9 = puVar29[6];
            uVar10 = puVar29[7];
            uVar11 = puVar29[8];
            uVar12 = puVar29[9];
            uVar13 = puVar29[10];
            uVar14 = puVar29[0xb];
            uVar15 = puVar29[0xc];
            uVar16 = puVar29[0xd];
            uVar17 = puVar29[0xe];
            uVar18 = puVar29[0xf];
            uVar19 = puVar29[0x10];
            uVar20 = puVar29[0x11];
            uVar21 = puVar29[0x12];
            uVar22 = puVar29[0x13];
            uVar23 = puVar28[1];
            *puVar29 = *puVar28;
            puVar29[1] = uVar23;
            uVar23 = puVar28[3];
            puVar29[2] = puVar28[2];
            puVar29[3] = uVar23;
            uVar23 = puVar28[5];
            puVar29[4] = puVar28[4];
            puVar29[5] = uVar23;
            uVar23 = puVar28[7];
            puVar29[6] = puVar28[6];
            puVar29[7] = uVar23;
            uVar23 = puVar28[9];
            puVar29[8] = puVar28[8];
            puVar29[9] = uVar23;
            uVar23 = puVar28[0xb];
            puVar29[10] = puVar28[10];
            puVar29[0xb] = uVar23;
            uVar23 = puVar28[0xd];
            puVar29[0xc] = puVar28[0xc];
            puVar29[0xd] = uVar23;
            uVar23 = puVar28[0xf];
            puVar29[0xe] = puVar28[0xe];
            puVar29[0xf] = uVar23;
            uVar23 = puVar28[0x11];
            puVar29[0x10] = puVar28[0x10];
            puVar29[0x11] = uVar23;
            uVar23 = puVar28[0x13];
            puVar29[0x12] = puVar28[0x12];
            puVar29[0x13] = uVar23;
            puVar29[0x14] = puVar28[0x14];
            *puVar28 = uVar3;
            puVar28[1] = uVar4;
            puVar28[2] = uVar5;
            puVar28[3] = uVar6;
            puVar28[4] = uVar7;
            puVar28[5] = uVar8;
            puVar28[6] = uVar9;
            puVar28[7] = uVar10;
            puVar28[8] = uVar11;
            puVar28[9] = uVar12;
            puVar28[10] = uVar13;
            puVar28[0xb] = uVar14;
            puVar28[0xc] = uVar15;
            puVar28[0xd] = uVar16;
            puVar28[0xe] = uVar17;
            puVar28[0xf] = uVar18;
            puVar28[0x10] = uVar19;
            puVar28[0x11] = uVar20;
            puVar28[0x12] = uVar21;
            puVar28[0x13] = uVar22;
            puVar28[0x14] = uVar1;
          }
          iVar26 = iVar25 * 2 + 1;
          iVar24 = iVar25;
          goto joined_r0x000141eb6c06;
        }
      }
      iVar26 = iVar2 + -2;
      iVar24 = iVar27 + -1;
      iVar2 = iVar26;
      iVar27 = iVar24;
    } while (-1 < iVar24);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar28 = param_1 + (longlong)param_2 * 0x15;
    do {
      if (param_1 != puVar28) {
        uVar3 = *param_1;
        uVar4 = param_1[1];
        uVar1 = param_1[0x14];
        uVar5 = param_1[2];
        uVar6 = param_1[3];
        uVar7 = param_1[4];
        uVar8 = param_1[5];
        uVar9 = param_1[6];
        uVar10 = param_1[7];
        uVar11 = param_1[8];
        uVar12 = param_1[9];
        uVar13 = param_1[10];
        uVar14 = param_1[0xb];
        uVar15 = param_1[0xc];
        uVar16 = param_1[0xd];
        uVar17 = param_1[0xe];
        uVar18 = param_1[0xf];
        uVar19 = param_1[0x10];
        uVar20 = param_1[0x11];
        uVar21 = param_1[0x12];
        uVar22 = param_1[0x13];
        uVar23 = puVar28[1];
        *param_1 = *puVar28;
        param_1[1] = uVar23;
        uVar23 = puVar28[3];
        param_1[2] = puVar28[2];
        param_1[3] = uVar23;
        uVar23 = puVar28[5];
        param_1[4] = puVar28[4];
        param_1[5] = uVar23;
        uVar23 = puVar28[7];
        param_1[6] = puVar28[6];
        param_1[7] = uVar23;
        uVar23 = puVar28[9];
        param_1[8] = puVar28[8];
        param_1[9] = uVar23;
        uVar23 = puVar28[0xb];
        param_1[10] = puVar28[10];
        param_1[0xb] = uVar23;
        uVar23 = puVar28[0xd];
        param_1[0xc] = puVar28[0xc];
        param_1[0xd] = uVar23;
        uVar23 = puVar28[0xf];
        param_1[0xe] = puVar28[0xe];
        param_1[0xf] = uVar23;
        uVar23 = puVar28[0x11];
        param_1[0x10] = puVar28[0x10];
        param_1[0x11] = uVar23;
        uVar23 = puVar28[0x13];
        param_1[0x12] = puVar28[0x12];
        param_1[0x13] = uVar23;
        param_1[0x14] = puVar28[0x14];
        *puVar28 = uVar3;
        puVar28[1] = uVar4;
        puVar28[2] = uVar5;
        puVar28[3] = uVar6;
        puVar28[4] = uVar7;
        puVar28[5] = uVar8;
        puVar28[6] = uVar9;
        puVar28[7] = uVar10;
        puVar28[8] = uVar11;
        puVar28[9] = uVar12;
        puVar28[10] = uVar13;
        puVar28[0xb] = uVar14;
        puVar28[0xc] = uVar15;
        puVar28[0xd] = uVar16;
        puVar28[0xe] = uVar17;
        puVar28[0xf] = uVar18;
        puVar28[0x10] = uVar19;
        puVar28[0x11] = uVar20;
        puVar28[0x12] = uVar21;
        puVar28[0x13] = uVar22;
        puVar28[0x14] = uVar1;
      }
      iVar24 = 0;
      if (1 < param_2) {
        do {
          iVar2 = iVar24 * 2;
          iVar26 = iVar2 + 1;
          if (iVar2 + 2 < param_2) {
            if ((longlong)param_1[(longlong)iVar26 * 0x15 + 5] <
                (longlong)param_1[(longlong)iVar2 * 0x15 + 0x2f]) {
              iVar26 = iVar2;
            }
            iVar26 = iVar26 + 1;
          }
          puVar29 = param_1 + (longlong)iVar26 * 0x15;
          puVar30 = param_1 + (longlong)iVar24 * 0x15;
          if ((longlong)puVar30[5] <= (longlong)puVar29[5]) break;
          if (puVar30 != puVar29) {
            uVar3 = *puVar30;
            uVar4 = puVar30[1];
            uVar1 = puVar30[0x14];
            uVar5 = puVar30[2];
            uVar6 = puVar30[3];
            uVar7 = puVar30[4];
            uVar8 = puVar30[5];
            uVar9 = puVar30[6];
            uVar10 = puVar30[7];
            uVar11 = puVar30[8];
            uVar12 = puVar30[9];
            uVar13 = puVar30[10];
            uVar14 = puVar30[0xb];
            uVar15 = puVar30[0xc];
            uVar16 = puVar30[0xd];
            uVar17 = puVar30[0xe];
            uVar18 = puVar30[0xf];
            uVar19 = puVar30[0x10];
            uVar20 = puVar30[0x11];
            uVar21 = puVar30[0x12];
            uVar22 = puVar30[0x13];
            uVar23 = puVar29[1];
            *puVar30 = *puVar29;
            puVar30[1] = uVar23;
            uVar23 = puVar29[3];
            puVar30[2] = puVar29[2];
            puVar30[3] = uVar23;
            uVar23 = puVar29[5];
            puVar30[4] = puVar29[4];
            puVar30[5] = uVar23;
            uVar23 = puVar29[7];
            puVar30[6] = puVar29[6];
            puVar30[7] = uVar23;
            uVar23 = puVar29[9];
            puVar30[8] = puVar29[8];
            puVar30[9] = uVar23;
            uVar23 = puVar29[0xb];
            puVar30[10] = puVar29[10];
            puVar30[0xb] = uVar23;
            uVar23 = puVar29[0xd];
            puVar30[0xc] = puVar29[0xc];
            puVar30[0xd] = uVar23;
            uVar23 = puVar29[0xf];
            puVar30[0xe] = puVar29[0xe];
            puVar30[0xf] = uVar23;
            uVar23 = puVar29[0x11];
            puVar30[0x10] = puVar29[0x10];
            puVar30[0x11] = uVar23;
            uVar23 = puVar29[0x13];
            puVar30[0x12] = puVar29[0x12];
            puVar30[0x13] = uVar23;
            puVar30[0x14] = puVar29[0x14];
            *puVar29 = uVar3;
            puVar29[1] = uVar4;
            puVar29[2] = uVar5;
            puVar29[3] = uVar6;
            puVar29[4] = uVar7;
            puVar29[5] = uVar8;
            puVar29[6] = uVar9;
            puVar29[7] = uVar10;
            puVar29[8] = uVar11;
            puVar29[9] = uVar12;
            puVar29[10] = uVar13;
            puVar29[0xb] = uVar14;
            puVar29[0xc] = uVar15;
            puVar29[0xd] = uVar16;
            puVar29[0xe] = uVar17;
            puVar29[0xf] = uVar18;
            puVar29[0x10] = uVar19;
            puVar29[0x11] = uVar20;
            puVar29[0x12] = uVar21;
            puVar29[0x13] = uVar22;
            puVar29[0x14] = uVar1;
          }
          iVar24 = iVar26;
        } while (iVar26 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar28 = puVar28 + -0x15;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 141eb71b0 HeapSortInternal<FVertexElement,FIdentityFunctor,TDereferenceWrapper<FVertexElement,<lambda_0f5dc6ea2be2fbf8df3145a0396f366f>_>_> body=545 status=ok
// SIG undefined HeapSortInternal<FVertexElement,FIdentityFunctor,TDereferenceWrapper<FVertexElement,<lambda_0f5dc6ea2be2fbf8df3145a0396f366f>_>_>(void)

void AlgoImpl::
     HeapSortInternal<FVertexElement,FIdentityFunctor,TDereferenceWrapper<FVertexElement,<lambda_0f5dc6ea2be2fbf8df3145a0396f366f>_>_>
               (undefined8 *param_1,int param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  
  iVar8 = (param_2 + -2) / 2;
  if (-1 < iVar8) {
    iVar9 = iVar8 * 2 + 1;
    iVar6 = iVar9;
    iVar12 = iVar8;
joined_r0x000141eb71e5:
    do {
      if (iVar9 < param_2) {
        iVar9 = iVar8 * 2;
        iVar11 = iVar9 + 1;
        if (iVar9 + 2 < param_2) {
          lVar10 = (longlong)iVar11;
          if (*(byte *)(param_1 + (longlong)iVar9 + 2) < *(byte *)(param_1 + lVar10)) {
            bVar7 = true;
          }
          else if (*(byte *)(param_1 + lVar10) < *(byte *)(param_1 + (longlong)iVar9 + 2)) {
LAB_141eb7243:
            bVar7 = false;
          }
          else {
            bVar4 = *(byte *)((longlong)param_1 + (longlong)iVar9 * 8 + 0x11);
            bVar5 = *(byte *)((longlong)param_1 + lVar10 * 8 + 1);
            if (bVar4 < bVar5) {
              bVar7 = true;
            }
            else {
              if ((bVar5 < bVar4) ||
                 (*(byte *)((longlong)param_1 + lVar10 * 8 + 3) <=
                  *(byte *)((longlong)param_1 + (longlong)iVar9 * 8 + 0x13))) goto LAB_141eb7243;
              bVar7 = true;
            }
          }
          if (bVar7) {
            iVar11 = iVar9;
          }
          iVar11 = iVar11 + 1;
        }
        pbVar1 = (byte *)(param_1 + iVar8);
        pbVar2 = (byte *)(param_1 + iVar11);
        if ((*pbVar1 < *(byte *)(param_1 + iVar11)) ||
           ((*pbVar1 == *(byte *)(param_1 + iVar11) &&
            ((pbVar1[1] < pbVar2[1] || ((pbVar1[1] == pbVar2[1] && (pbVar1[3] < pbVar2[3])))))))) {
          if (pbVar1 != pbVar2) {
            uVar3 = *(undefined8 *)pbVar1;
            *(undefined8 *)pbVar1 = *(undefined8 *)pbVar2;
            *(undefined8 *)pbVar2 = uVar3;
          }
          iVar9 = iVar11 * 2 + 1;
          iVar8 = iVar11;
          goto joined_r0x000141eb71e5;
        }
      }
      iVar9 = iVar6 + -2;
      iVar8 = iVar12 + -1;
      iVar6 = iVar9;
      iVar12 = iVar8;
    } while (-1 < iVar8);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar13 = param_1 + param_2;
    do {
      if (param_1 != puVar13) {
        uVar3 = *param_1;
        *param_1 = *puVar13;
        *puVar13 = uVar3;
      }
      iVar8 = 0;
      if (1 < param_2) {
        do {
          iVar6 = iVar8 * 2;
          iVar9 = iVar6 + 1;
          if (iVar6 + 2 < param_2) {
            lVar10 = (longlong)iVar9;
            if (*(byte *)(param_1 + (longlong)iVar6 + 2) < *(byte *)(param_1 + lVar10)) {
              bVar7 = true;
            }
            else if (*(byte *)(param_1 + lVar10) < *(byte *)(param_1 + (longlong)iVar6 + 2)) {
LAB_141eb7353:
              bVar7 = false;
            }
            else {
              bVar4 = *(byte *)((longlong)param_1 + (longlong)iVar6 * 8 + 0x11);
              bVar5 = *(byte *)((longlong)param_1 + lVar10 * 8 + 1);
              if (bVar4 < bVar5) {
                bVar7 = true;
              }
              else {
                if ((bVar5 < bVar4) ||
                   (*(byte *)((longlong)param_1 + lVar10 * 8 + 3) <=
                    *(byte *)((longlong)param_1 + (longlong)iVar6 * 8 + 0x13))) goto LAB_141eb7353;
                bVar7 = true;
              }
            }
            if (bVar7) {
              iVar9 = iVar6;
            }
            iVar9 = iVar9 + 1;
          }
          pbVar1 = (byte *)(param_1 + iVar8);
          pbVar2 = (byte *)(param_1 + iVar9);
          if ((*(byte *)(param_1 + iVar9) <= *pbVar1) &&
             ((*pbVar1 != *(byte *)(param_1 + iVar9) ||
              ((pbVar2[1] <= pbVar1[1] && ((pbVar1[1] != pbVar2[1] || (pbVar2[3] <= pbVar1[3])))))))
             ) break;
          if (pbVar1 != pbVar2) {
            uVar3 = *(undefined8 *)pbVar1;
            *(undefined8 *)pbVar1 = *(undefined8 *)pbVar2;
            *(undefined8 *)pbVar2 = uVar3;
          }
          iVar8 = iVar9;
        } while (iVar9 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar13 = puVar13 + -1;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 141eb73e0 FUN_141eb73e0 body=755 status=ok
// SIG undefined FUN_141eb73e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141eb73e0(longlong param_1,ulonglong param_2,undefined1 param_3,int *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  float fVar12;
  undefined1 auStack_378 [48];
  longlong local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_378;
    lStack_330 = param_1 + (param_2 - 1) * 8;
    fVar12 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar12 = fVar12 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar12 = _guard_xfg_dispatch_icall_nop(fVar12);
    local_328 = (undefined4)(longlong)(fVar12 + fVar12);
    _guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar10 = &local_338;
    do {
      plVar2 = (longlong *)*plVar10;
      plVar5 = (longlong *)plVar10[1];
      lVar1 = plVar10[2];
      local_348._0_4_ = (int)lVar1;
      lVar3 = (longlong)plVar5 - (longlong)plVar2;
      plVar8 = plVar2;
      plVar9 = plVar5;
      if ((int)local_348 != 0) {
LAB_141eb74b0:
        lVar4 = (lVar3 >> 3) + 1;
        if (8 < lVar4) {
          if (lVar4 < 0) {
            lVar4 = (lVar3 >> 3) + 2;
          }
          plVar7 = plVar9 + 1;
          lVar3 = plVar8[lVar4 >> 1];
          plVar8[lVar4 >> 1] = *plVar8;
          *plVar8 = lVar3;
          plVar2 = plVar8;
LAB_141eb74e0:
          plVar2 = plVar2 + 1;
          if (plVar2 <= plVar9) goto code_r0x000141eb74e9;
          goto LAB_141eb7520;
        }
        if (plVar8 < plVar9) {
          do {
            plVar2 = plVar8;
            if (plVar8 + 1 <= plVar9) {
              plVar5 = plVar8 + 1;
              plVar7 = plVar8;
              do {
                lVar1 = *plVar5;
                lVar3 = *plVar7;
                if (*param_4 == 2) {
                  bVar11 = *(uint *)(lVar1 + 0x20) < *(uint *)(lVar3 + 0x20);
                }
                else if (*param_4 == 3) {
                  bVar11 = *(uint *)(lVar1 + 0x24) < *(uint *)(lVar3 + 0x24);
                }
                else {
                  bVar11 = *(float *)(lVar1 + 0x28) < *(float *)(lVar3 + 0x28);
                }
                plVar2 = plVar5;
                if (!bVar11) {
                  plVar2 = plVar7;
                }
                plVar5 = plVar5 + 1;
                plVar7 = plVar2;
              } while (plVar5 <= plVar9);
            }
            lVar1 = *plVar2;
            *plVar2 = *plVar9;
            *plVar9 = lVar1;
            plVar9 = plVar9 + -1;
          } while (plVar8 < plVar9);
        }
        goto LAB_141eb7605;
      }
LAB_141eb75f6:
      local_348 = lVar1;
      FUN_141eb5f50(plVar2,plVar5,param_3,param_4);
LAB_141eb7605:
      plVar10 = plVar10 + -3;
    } while (&local_338 <= plVar10);
  }
  return;
code_r0x000141eb74e9:
  lVar3 = *plVar2;
  lVar4 = *plVar8;
  if (*param_4 == 2) {
    bVar11 = *(uint *)(lVar3 + 0x20) < *(uint *)(lVar4 + 0x20);
  }
  else if (*param_4 == 3) {
    bVar11 = *(uint *)(lVar3 + 0x24) < *(uint *)(lVar4 + 0x24);
  }
  else {
    bVar11 = *(float *)(lVar3 + 0x28) < *(float *)(lVar4 + 0x28);
  }
  if (!bVar11) goto LAB_141eb74e0;
LAB_141eb7520:
  do {
    plVar6 = plVar7;
    lVar3 = plVar6[-1];
    plVar7 = plVar6 + -1;
    if (plVar7 <= plVar8) break;
    lVar4 = *plVar8;
    if (*param_4 == 2) {
      bVar11 = *(uint *)(lVar4 + 0x20) < *(uint *)(lVar3 + 0x20);
    }
    else if (*param_4 == 3) {
      bVar11 = *(uint *)(lVar4 + 0x24) < *(uint *)(lVar3 + 0x24);
    }
    else {
      bVar11 = *(float *)(lVar4 + 0x28) < *(float *)(lVar3 + 0x28);
    }
  } while (!bVar11);
  if (plVar2 <= plVar7) {
    lVar4 = *plVar2;
    *plVar2 = lVar3;
    *plVar7 = lVar4;
    goto LAB_141eb74e0;
  }
  lVar4 = *plVar8;
  *plVar8 = lVar3;
  *plVar7 = lVar4;
  local_348._0_4_ = (int)local_348 + -1;
  if ((longlong)((longlong)plVar7 + (-8 - (longlong)plVar8) & 0xfffffffffffffff8U) <
      (longlong)((longlong)plVar9 - (longlong)plVar2 & 0xfffffffffffffff8U)) {
    if (plVar2 < plVar9) {
      *plVar10 = (longlong)plVar2;
      plVar10[1] = (longlong)plVar9;
      *(int *)(plVar10 + 2) = (int)local_348;
      plVar10 = plVar10 + 3;
    }
    if (plVar7 <= plVar8 + 1) goto LAB_141eb7605;
    plVar9 = plVar6 + -2;
    plVar2 = plVar8;
  }
  else {
    if (plVar8 + 1 < plVar7) {
      *plVar10 = (longlong)plVar8;
      plVar10[1] = (longlong)(plVar6 + -2);
      *(int *)(plVar10 + 2) = (int)local_348;
      plVar10 = plVar10 + 3;
    }
    if (plVar9 <= plVar2) goto LAB_141eb7605;
  }
  lVar3 = (longlong)plVar9 - (longlong)plVar2;
  plVar8 = plVar2;
  if ((int)local_348 == 0) goto LAB_141eb75f6;
  goto LAB_141eb74b0;
}



// FUNCTION 141eb76e0 IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,TSparseArray<TSetElement<TTuple<FString,FGPUProfileInfoPair>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FGPUProfileInfoPair>,TDefaultMapHashableKeyFuncs<FString,FGPUProfileInfoPair,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FGPUProfileInfoPair,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGPUProfileInfoPair,0>_>::FValueComparisonClass<<lambda_38db9149a4980a8cf7713aeccd1c6f0a>_>_>_>_>_> body=900 status=ok
// SIG undefined IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,TSparseArray<TSetElement<TTuple<FString,FGPUProfileInfoPair>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FGPUProfileInfoPair>,TDefaultMapHashableKeyFuncs<FString,FGPUProfileInfoPair,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FGPUProfileInfoPair,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGPUProfileInfoPair,0>_>::FValueComparisonClass<<lambda_38db9149a4980a8cf7713aeccd1c6f0a>_>_>_>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,TSparseArray<TSetElement<TTuple<FString,FGPUProfileInfoPair>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FGPUProfileInfoPair>,TDefaultMapHashableKeyFuncs<FString,FGPUProfileInfoPair,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FGPUProfileInfoPair,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGPUProfileInfoPair,0>_>::FValueComparisonClass<<lambda_38db9149a4980a8cf7713aeccd1c6f0a>_>_>_>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  float fVar16;
  undefined1 auStack_378 [48];
  longlong local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_378;
    lStack_330 = param_1 + param_2 * 0x28 + -0x28;
    fVar16 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar16 = fVar16 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar16 = ::_guard_xfg_dispatch_icall_nop(fVar16);
    local_328 = (undefined4)(longlong)(fVar16 + fVar16);
    ::_guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar15 = &local_338;
    do {
      puVar14 = (undefined8 *)*plVar15;
      puVar9 = (undefined8 *)plVar15[1];
      lVar1 = plVar15[2];
      local_348._0_4_ = (int)lVar1;
      lVar8 = ((longlong)puVar9 - (longlong)puVar14) / 0x28 + 1;
      puVar13 = puVar14;
      if ((int)local_348 != 0) {
LAB_141eb77d0:
        if (8 < lVar8) {
          if (lVar8 < 0) {
            lVar8 = lVar8 + 1;
          }
          puVar14 = puVar13 + (lVar8 >> 1) * 5;
          if (puVar14 != puVar13) {
            uVar3 = puVar13[1];
            uVar4 = *puVar14;
            uVar5 = puVar14[1];
            uVar6 = puVar14[2];
            uVar7 = puVar14[3];
            uVar2 = puVar14[4];
            *puVar14 = *puVar13;
            puVar14[1] = uVar3;
            uVar3 = puVar13[3];
            puVar14[2] = puVar13[2];
            puVar14[3] = uVar3;
            puVar14[4] = puVar13[4];
            *puVar13 = uVar4;
            puVar13[1] = uVar5;
            puVar13[2] = uVar6;
            puVar13[3] = uVar7;
            puVar13[4] = uVar2;
          }
          puVar11 = puVar9 + 5;
          puVar14 = puVar13;
LAB_141eb7830:
          puVar10 = puVar14;
          puVar14 = puVar10 + 5;
          if (puVar14 <= puVar9) goto code_r0x000141eb7839;
          goto LAB_141eb7843;
        }
        for (; puVar11 = puVar13, puVar14 = puVar13, puVar13 < puVar9; puVar9 = puVar9 + -5) {
          while (puVar10 = puVar11, puVar14 = puVar14 + 5, puVar14 <= puVar9) {
            puVar11 = puVar14;
            if ((longlong)puVar10[2] <= (longlong)puVar14[2]) {
              puVar11 = puVar10;
            }
          }
          if (puVar10 != puVar9) {
            uVar3 = puVar9[1];
            uVar4 = *puVar10;
            uVar5 = puVar10[1];
            uVar6 = puVar10[2];
            uVar7 = puVar10[3];
            uVar2 = puVar10[4];
            *puVar10 = *puVar9;
            puVar10[1] = uVar3;
            uVar3 = puVar9[3];
            puVar10[2] = puVar9[2];
            puVar10[3] = uVar3;
            puVar10[4] = puVar9[4];
            *puVar9 = uVar4;
            puVar9[1] = uVar5;
            puVar9[2] = uVar6;
            puVar9[3] = uVar7;
            puVar9[4] = uVar2;
          }
        }
        goto LAB_141eb7999;
      }
LAB_141eb798a:
      local_348 = lVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,TSparseArray<TSetElement<TTuple<FString,FGPUProfileInfoPair>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FGPUProfileInfoPair>,TDefaultMapHashableKeyFuncs<FString,FGPUProfileInfoPair,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FGPUProfileInfoPair,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGPUProfileInfoPair,0>_>::FValueComparisonClass<<lambda_38db9149a4980a8cf7713aeccd1c6f0a>_>_>_>_>_>
                (puVar14,lVar8,param_3,param_4);
LAB_141eb7999:
      plVar15 = plVar15 + -3;
    } while (&local_338 <= plVar15);
  }
  return;
code_r0x000141eb7839:
  if ((longlong)puVar13[2] <= (longlong)puVar10[7]) goto LAB_141eb7830;
LAB_141eb7843:
  do {
    puVar12 = puVar11;
    puVar11 = puVar12 + -5;
    if (puVar11 <= puVar13) break;
  } while ((longlong)puVar12[-3] <= (longlong)puVar13[2]);
  if (puVar14 <= puVar11) {
    if (puVar14 != puVar11) {
      uVar3 = puVar12[-4];
      uVar4 = *puVar14;
      uVar5 = puVar10[6];
      uVar6 = puVar10[7];
      uVar7 = puVar10[8];
      uVar2 = puVar10[9];
      *puVar14 = *puVar11;
      puVar10[6] = uVar3;
      uVar3 = puVar12[-2];
      puVar10[7] = puVar12[-3];
      puVar10[8] = uVar3;
      puVar10[9] = puVar12[-1];
      *puVar11 = uVar4;
      puVar12[-4] = uVar5;
      puVar12[-3] = uVar6;
      puVar12[-2] = uVar7;
      puVar12[-1] = uVar2;
    }
    goto LAB_141eb7830;
  }
  if (puVar13 != puVar11) {
    uVar3 = puVar12[-4];
    uVar4 = *puVar13;
    uVar5 = puVar13[1];
    uVar6 = puVar13[2];
    uVar7 = puVar13[3];
    uVar2 = puVar13[4];
    *puVar13 = *puVar11;
    puVar13[1] = uVar3;
    uVar3 = puVar12[-2];
    puVar13[2] = puVar12[-3];
    puVar13[3] = uVar3;
    puVar13[4] = puVar12[-1];
    *puVar11 = uVar4;
    puVar12[-4] = uVar5;
    puVar12[-3] = uVar6;
    puVar12[-2] = uVar7;
    puVar12[-1] = uVar2;
  }
  local_348._0_4_ = (int)local_348 + -1;
  if (((longlong)puVar11 + (-0x28 - (longlong)puVar13)) / 0x28 <
      ((longlong)puVar9 - (longlong)puVar14) / 0x28) {
    if (puVar14 < puVar9) {
      *plVar15 = (longlong)puVar14;
      plVar15[1] = (longlong)puVar9;
      *(int *)(plVar15 + 2) = (int)local_348;
      plVar15 = plVar15 + 3;
    }
    if (puVar11 <= puVar13 + 5) goto LAB_141eb7999;
    puVar9 = puVar12 + -10;
    puVar14 = puVar13;
  }
  else {
    if (puVar13 + 5 < puVar11) {
      *plVar15 = (longlong)puVar13;
      plVar15[1] = (longlong)(puVar12 + -10);
      *(int *)(plVar15 + 2) = (int)local_348;
      plVar15 = plVar15 + 3;
    }
    if (puVar9 <= puVar14) goto LAB_141eb7999;
  }
  lVar8 = ((longlong)puVar9 - (longlong)puVar14) / 0x28 + 1;
  puVar13 = puVar14;
  if ((int)local_348 == 0) goto LAB_141eb798a;
  goto LAB_141eb77d0;
}



// FUNCTION 141eb7a70 IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,TSparseArray<TSetElement<TTuple<FString,FGPUProfilerEventNodeStats>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FGPUProfilerEventNodeStats>,TDefaultMapHashableKeyFuncs<FString,FGPUProfilerEventNodeStats,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FGPUProfilerEventNodeStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGPUProfilerEventNodeStats,0>_>::FValueComparisonClass<FNodeStatsCompare>_>_>_>_> body=1069 status=ok
// SIG undefined IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,TSparseArray<TSetElement<TTuple<FString,FGPUProfilerEventNodeStats>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FGPUProfilerEventNodeStats>,TDefaultMapHashableKeyFuncs<FString,FGPUProfilerEventNodeStats,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FGPUProfilerEventNodeStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGPUProfilerEventNodeStats,0>_>::FValueComparisonClass<FNodeStatsCompare>_>_>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,TSparseArray<TSetElement<TTuple<FString,FGPUProfilerEventNodeStats>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FGPUProfilerEventNodeStats>,TDefaultMapHashableKeyFuncs<FString,FGPUProfilerEventNodeStats,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FGPUProfilerEventNodeStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGPUProfilerEventNodeStats,0>_>::FValueComparisonClass<FNodeStatsCompare>_>_>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  float fVar20;
  undefined1 auStack_388 [48];
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
    lStack_340 = param_1 + param_2 * 0x48 + -0x48;
    fVar20 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar20 = fVar20 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar20 = ::_guard_xfg_dispatch_icall_nop(fVar20);
    local_338 = (undefined4)(longlong)(fVar20 + fVar20);
    ::_guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar19 = &local_348;
    do {
      puVar18 = (undefined8 *)*plVar19;
      puVar13 = (undefined8 *)plVar19[1];
      lVar1 = plVar19[2];
      local_358._0_4_ = (int)lVar1;
      lVar12 = ((longlong)puVar13 - (longlong)puVar18) / 0x48 + 1;
      puVar17 = puVar18;
      if ((int)local_358 != 0) {
LAB_141eb7b60:
        if (8 < lVar12) {
          if (lVar12 < 0) {
            lVar12 = lVar12 + 1;
          }
          puVar18 = puVar17 + (lVar12 >> 1) * 9;
          if (puVar18 != puVar17) {
            uVar3 = puVar17[1];
            uVar4 = *puVar18;
            uVar5 = puVar18[1];
            uVar6 = puVar18[2];
            uVar7 = puVar18[3];
            uVar8 = puVar18[4];
            uVar9 = puVar18[5];
            uVar10 = puVar18[6];
            uVar11 = puVar18[7];
            uVar2 = puVar18[8];
            *puVar18 = *puVar17;
            puVar18[1] = uVar3;
            uVar3 = puVar17[3];
            puVar18[2] = puVar17[2];
            puVar18[3] = uVar3;
            uVar3 = puVar17[5];
            puVar18[4] = puVar17[4];
            puVar18[5] = uVar3;
            uVar3 = puVar17[7];
            puVar18[6] = puVar17[6];
            puVar18[7] = uVar3;
            puVar18[8] = puVar17[8];
            *puVar17 = uVar4;
            puVar17[1] = uVar5;
            puVar17[2] = uVar6;
            puVar17[3] = uVar7;
            puVar17[4] = uVar8;
            puVar17[5] = uVar9;
            puVar17[6] = uVar10;
            puVar17[7] = uVar11;
            puVar17[8] = uVar2;
          }
          puVar15 = puVar13 + 9;
          puVar18 = puVar17;
LAB_141eb7be3:
          puVar14 = puVar18;
          puVar18 = puVar14 + 9;
          if (puVar18 <= puVar13) goto code_r0x000141eb7bec;
          goto LAB_141eb7c00;
        }
        for (; puVar15 = puVar17, puVar18 = puVar17, puVar17 < puVar13; puVar13 = puVar13 + -9) {
          while (puVar18 = puVar18 + 9, puVar18 <= puVar13) {
            if (*(float *)(puVar18 + 7) < *(float *)(puVar15 + 7)) {
              puVar15 = puVar18;
            }
          }
          if (puVar15 != puVar13) {
            uVar3 = puVar13[1];
            uVar4 = *puVar15;
            uVar5 = puVar15[1];
            uVar6 = puVar15[2];
            uVar7 = puVar15[3];
            uVar8 = puVar15[4];
            uVar9 = puVar15[5];
            uVar10 = puVar15[6];
            uVar11 = puVar15[7];
            uVar2 = puVar15[8];
            *puVar15 = *puVar13;
            puVar15[1] = uVar3;
            uVar3 = puVar13[3];
            puVar15[2] = puVar13[2];
            puVar15[3] = uVar3;
            uVar3 = puVar13[5];
            puVar15[4] = puVar13[4];
            puVar15[5] = uVar3;
            uVar3 = puVar13[7];
            puVar15[6] = puVar13[6];
            puVar15[7] = uVar3;
            puVar15[8] = puVar13[8];
            *puVar13 = uVar4;
            puVar13[1] = uVar5;
            puVar13[2] = uVar6;
            puVar13[3] = uVar7;
            puVar13[4] = uVar8;
            puVar13[5] = uVar9;
            puVar13[6] = uVar10;
            puVar13[7] = uVar11;
            puVar13[8] = uVar2;
          }
        }
        goto LAB_141eb7dac;
      }
LAB_141eb7d9d:
      local_358 = lVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,TSparseArray<TSetElement<TTuple<FString,FGPUProfilerEventNodeStats>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FGPUProfilerEventNodeStats>,TDefaultMapHashableKeyFuncs<FString,FGPUProfilerEventNodeStats,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FGPUProfilerEventNodeStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGPUProfilerEventNodeStats,0>_>::FValueComparisonClass<FNodeStatsCompare>_>_>_>_>
                (puVar18,lVar12,param_3,param_4);
LAB_141eb7dac:
      plVar19 = plVar19 + -3;
    } while (&local_348 <= plVar19);
  }
  return;
code_r0x000141eb7bec:
  if (*(float *)(puVar17 + 7) < *(float *)(puVar14 + 0x10) ||
      *(float *)(puVar17 + 7) == *(float *)(puVar14 + 0x10)) goto LAB_141eb7be3;
LAB_141eb7c00:
  do {
    puVar16 = puVar15;
    puVar15 = puVar16 + -9;
    if (puVar15 <= puVar17) break;
  } while (*(float *)(puVar16 + -2) < *(float *)(puVar17 + 7) ||
           *(float *)(puVar16 + -2) == *(float *)(puVar17 + 7));
  if (puVar18 <= puVar15) {
    if (puVar18 != puVar15) {
      uVar3 = puVar16[-8];
      uVar4 = *puVar18;
      uVar5 = puVar14[10];
      uVar6 = puVar14[0xb];
      uVar7 = puVar14[0xc];
      uVar8 = puVar14[0xd];
      uVar9 = puVar14[0xe];
      uVar10 = puVar14[0xf];
      uVar11 = puVar14[0x10];
      uVar2 = puVar14[0x11];
      *puVar18 = *puVar15;
      puVar14[10] = uVar3;
      uVar3 = puVar16[-6];
      puVar14[0xb] = puVar16[-7];
      puVar14[0xc] = uVar3;
      uVar3 = puVar16[-4];
      puVar14[0xd] = puVar16[-5];
      puVar14[0xe] = uVar3;
      uVar3 = puVar16[-2];
      puVar14[0xf] = puVar16[-3];
      puVar14[0x10] = uVar3;
      puVar14[0x11] = puVar16[-1];
      *puVar15 = uVar4;
      puVar16[-8] = uVar5;
      puVar16[-7] = uVar6;
      puVar16[-6] = uVar7;
      puVar16[-5] = uVar8;
      puVar16[-4] = uVar9;
      puVar16[-3] = uVar10;
      puVar16[-2] = uVar11;
      puVar16[-1] = uVar2;
    }
    goto LAB_141eb7be3;
  }
  if (puVar17 != puVar15) {
    uVar3 = puVar16[-8];
    uVar4 = *puVar17;
    uVar5 = puVar17[1];
    uVar6 = puVar17[2];
    uVar7 = puVar17[3];
    uVar8 = puVar17[4];
    uVar9 = puVar17[5];
    uVar10 = puVar17[6];
    uVar11 = puVar17[7];
    uVar2 = puVar17[8];
    *puVar17 = *puVar15;
    puVar17[1] = uVar3;
    uVar3 = puVar16[-6];
    puVar17[2] = puVar16[-7];
    puVar17[3] = uVar3;
    uVar3 = puVar16[-4];
    puVar17[4] = puVar16[-5];
    puVar17[5] = uVar3;
    uVar3 = puVar16[-2];
    puVar17[6] = puVar16[-3];
    puVar17[7] = uVar3;
    puVar17[8] = puVar16[-1];
    *puVar15 = uVar4;
    puVar16[-8] = uVar5;
    puVar16[-7] = uVar6;
    puVar16[-6] = uVar7;
    puVar16[-5] = uVar8;
    puVar16[-4] = uVar9;
    puVar16[-3] = uVar10;
    puVar16[-2] = uVar11;
    puVar16[-1] = uVar2;
  }
  local_358._0_4_ = (int)local_358 + -1;
  lVar12 = (longlong)puVar15 + (-0x48 - (longlong)puVar17);
  lVar12 = lVar12 / 0x12 + (lVar12 >> 0x3f);
  if ((lVar12 >> 2) - (lVar12 >> 0x3f) < ((longlong)puVar13 - (longlong)puVar18) / 0x48) {
    if (puVar18 < puVar13) {
      *plVar19 = (longlong)puVar18;
      plVar19[1] = (longlong)puVar13;
      *(int *)(plVar19 + 2) = (int)local_358;
      plVar19 = plVar19 + 3;
    }
    if (puVar15 <= puVar17 + 9) goto LAB_141eb7dac;
    puVar13 = puVar16 + -0x12;
    puVar18 = puVar17;
  }
  else {
    if (puVar17 + 9 < puVar15) {
      *plVar19 = (longlong)puVar17;
      plVar19[1] = (longlong)(puVar16 + -0x12);
      *(int *)(plVar19 + 2) = (int)local_358;
      plVar19 = plVar19 + 3;
    }
    if (puVar13 <= puVar18) goto LAB_141eb7dac;
  }
  lVar12 = ((longlong)puVar13 - (longlong)puVar18) / 0x48 + 1;
  puVar17 = puVar18;
  if ((int)local_358 == 0) goto LAB_141eb7d9d;
  goto LAB_141eb7b60;
}



// FUNCTION 141eb7ea0 IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<168,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<168,8>_>,TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<<lambda_429c1ffd4371d29d74408ee7bb2c8a98>_>_>_>_>_> body=2200 status=ok
// SIG undefined IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<168,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<168,8>_>,TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<<lambda_429c1ffd4371d29d74408ee7bb2c8a98>_>_>_>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<168,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<168,8>_>,TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<<lambda_429c1ffd4371d29d74408ee7bb2c8a98>_>_>_>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  float fVar14;
  undefined1 auStack_618 [48];
  longlong local_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_618;
    fVar14 = (float)(longlong)param_2;
    lStack_330 = param_1 + -0xa8 + param_2 * 0xa8;
    if ((longlong)param_2 < 0) {
      fVar14 = fVar14 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar14 = ::_guard_xfg_dispatch_icall_nop(fVar14);
    local_328 = (undefined4)(longlong)(fVar14 + fVar14);
    ::_guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar13 = &local_338;
    do {
      puVar12 = (undefined8 *)*plVar13;
      puVar7 = (undefined8 *)plVar13[1];
      lVar1 = plVar13[2];
      local_5e8._0_4_ = (int)lVar1;
      lVar5 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816((longlong)puVar7 - (longlong)puVar12),8)
              + ((longlong)puVar7 - (longlong)puVar12);
      lVar5 = ((lVar5 >> 7) + 1) - (lVar5 >> 0x3f);
      puVar11 = puVar12;
      if ((int)local_5e8 != 0) {
LAB_141eb7fa0:
        if (8 < lVar5) {
          puVar12 = puVar11 + (lVar5 / 2) * 0x15;
          if (puVar12 != puVar11) {
            local_5e0 = *puVar12;
            uStack_5d8 = puVar12[1];
            local_540 = puVar12[0x14];
            local_5d0 = puVar12[2];
            uStack_5c8 = puVar12[3];
            local_5c0 = puVar12[4];
            uStack_5b8 = puVar12[5];
            local_5b0 = puVar12[6];
            uStack_5a8 = puVar12[7];
            local_5a0 = puVar12[8];
            uStack_598 = puVar12[9];
            local_590 = puVar12[10];
            uStack_588 = puVar12[0xb];
            local_580 = puVar12[0xc];
            uStack_578 = puVar12[0xd];
            local_570 = puVar12[0xe];
            uStack_568 = puVar12[0xf];
            uVar2 = puVar12[0x10];
            uVar3 = puVar12[0x11];
            local_550 = puVar12[0x12];
            uStack_548 = puVar12[0x13];
            uVar4 = puVar11[1];
            *puVar12 = *puVar11;
            puVar12[1] = uVar4;
            uVar4 = puVar11[3];
            puVar12[2] = puVar11[2];
            puVar12[3] = uVar4;
            uVar4 = puVar11[5];
            puVar12[4] = puVar11[4];
            puVar12[5] = uVar4;
            uVar4 = puVar11[7];
            puVar12[6] = puVar11[6];
            puVar12[7] = uVar4;
            uVar4 = puVar11[9];
            puVar12[8] = puVar11[8];
            puVar12[9] = uVar4;
            uVar4 = puVar11[0xb];
            puVar12[10] = puVar11[10];
            puVar12[0xb] = uVar4;
            uVar4 = puVar11[0xd];
            puVar12[0xc] = puVar11[0xc];
            puVar12[0xd] = uVar4;
            uVar4 = puVar11[0xf];
            puVar12[0xe] = puVar11[0xe];
            puVar12[0xf] = uVar4;
            uVar4 = puVar11[0x11];
            puVar12[0x10] = puVar11[0x10];
            puVar12[0x11] = uVar4;
            uVar4 = puVar11[0x13];
            puVar12[0x12] = puVar11[0x12];
            puVar12[0x13] = uVar4;
            puVar12[0x14] = puVar11[0x14];
            *puVar11 = local_5e0;
            puVar11[1] = uStack_5d8;
            puVar11[2] = local_5d0;
            puVar11[3] = uStack_5c8;
            puVar11[4] = local_5c0;
            puVar11[5] = uStack_5b8;
            puVar11[6] = local_5b0;
            puVar11[7] = uStack_5a8;
            puVar11[8] = local_5a0;
            puVar11[9] = uStack_598;
            puVar11[10] = local_590;
            puVar11[0xb] = uStack_588;
            puVar11[0xc] = local_580;
            puVar11[0xd] = uStack_578;
            local_560._0_4_ = (undefined4)uVar2;
            local_560._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
            uStack_558._0_4_ = (undefined4)uVar3;
            uStack_558._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
            puVar11[0xe] = local_570;
            puVar11[0xf] = uStack_568;
            *(undefined4 *)(puVar11 + 0x10) = (undefined4)local_560;
            *(undefined4 *)((longlong)puVar11 + 0x84) = local_560._4_4_;
            *(undefined4 *)(puVar11 + 0x11) = (undefined4)uStack_558;
            *(undefined4 *)((longlong)puVar11 + 0x8c) = uStack_558._4_4_;
            puVar11[0x12] = local_550;
            puVar11[0x13] = uStack_548;
            puVar11[0x14] = local_540;
            local_560 = uVar2;
            uStack_558 = uVar3;
          }
          puVar9 = puVar7 + 0x15;
          puVar12 = puVar11;
LAB_141eb8130:
          puVar8 = puVar12;
          puVar12 = puVar8 + 0x15;
          if (puVar12 <= puVar7) goto code_r0x000141eb813c;
          goto LAB_141eb8150;
        }
        for (; puVar9 = puVar11, puVar12 = puVar11, puVar11 < puVar7; puVar7 = puVar7 + -0x15) {
          while (puVar8 = puVar9, puVar12 = puVar12 + 0x15, puVar12 <= puVar7) {
            puVar9 = puVar12;
            if ((longlong)puVar8[8] <= (longlong)puVar12[8]) {
              puVar9 = puVar8;
            }
          }
          if (puVar8 != puVar7) {
            local_3e8 = *puVar8;
            uStack_3e0 = puVar8[1];
            local_348 = puVar8[0x14];
            local_3d8 = puVar8[2];
            uStack_3d0 = puVar8[3];
            local_3c8 = puVar8[4];
            uStack_3c0 = puVar8[5];
            local_3b8 = puVar8[6];
            uStack_3b0 = puVar8[7];
            local_3a8 = puVar8[8];
            uStack_3a0 = puVar8[9];
            local_398 = puVar8[10];
            uStack_390 = puVar8[0xb];
            local_388 = puVar8[0xc];
            uStack_380 = puVar8[0xd];
            local_378 = puVar8[0xe];
            uStack_370 = puVar8[0xf];
            local_368 = puVar8[0x10];
            uStack_360 = puVar8[0x11];
            local_358 = puVar8[0x12];
            uStack_350 = puVar8[0x13];
            uVar2 = puVar7[1];
            *puVar8 = *puVar7;
            puVar8[1] = uVar2;
            uVar2 = puVar7[3];
            puVar8[2] = puVar7[2];
            puVar8[3] = uVar2;
            uVar2 = puVar7[5];
            puVar8[4] = puVar7[4];
            puVar8[5] = uVar2;
            uVar2 = puVar7[7];
            puVar8[6] = puVar7[6];
            puVar8[7] = uVar2;
            uVar2 = puVar7[9];
            puVar8[8] = puVar7[8];
            puVar8[9] = uVar2;
            uVar2 = puVar7[0xb];
            puVar8[10] = puVar7[10];
            puVar8[0xb] = uVar2;
            uVar2 = puVar7[0xd];
            puVar8[0xc] = puVar7[0xc];
            puVar8[0xd] = uVar2;
            uVar2 = puVar7[0xf];
            puVar8[0xe] = puVar7[0xe];
            puVar8[0xf] = uVar2;
            uVar2 = puVar7[0x11];
            puVar8[0x10] = puVar7[0x10];
            puVar8[0x11] = uVar2;
            uVar2 = puVar7[0x13];
            puVar8[0x12] = puVar7[0x12];
            puVar8[0x13] = uVar2;
            puVar8[0x14] = puVar7[0x14];
            *puVar7 = local_3e8;
            puVar7[1] = uStack_3e0;
            puVar7[2] = local_3d8;
            puVar7[3] = uStack_3d0;
            puVar7[4] = local_3c8;
            puVar7[5] = uStack_3c0;
            puVar7[6] = local_3b8;
            puVar7[7] = uStack_3b0;
            puVar7[8] = local_3a8;
            puVar7[9] = uStack_3a0;
            puVar7[10] = local_398;
            puVar7[0xb] = uStack_390;
            puVar7[0xc] = local_388;
            puVar7[0xd] = uStack_380;
            puVar7[0xe] = local_378;
            puVar7[0xf] = uStack_370;
            puVar7[0x10] = local_368;
            puVar7[0x11] = uStack_360;
            puVar7[0x12] = local_358;
            puVar7[0x13] = uStack_350;
            puVar7[0x14] = local_348;
          }
        }
        goto LAB_141eb8532;
      }
LAB_141eb8523:
      local_5e8 = lVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<168,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<168,8>_>,TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<<lambda_429c1ffd4371d29d74408ee7bb2c8a98>_>_>_>_>_>
                (puVar12,lVar5,param_3,param_4);
LAB_141eb8532:
      plVar13 = plVar13 + -3;
    } while (&local_338 <= plVar13);
  }
  return;
code_r0x000141eb813c:
  if ((longlong)puVar11[8] <= (longlong)puVar8[0x1d]) goto LAB_141eb8130;
LAB_141eb8150:
  do {
    puVar10 = puVar9;
    puVar9 = puVar10 + -0x15;
    if (puVar9 <= puVar11) break;
  } while ((longlong)puVar10[-0xd] <= (longlong)puVar11[8]);
  if (puVar12 <= puVar9) {
    if (puVar12 != puVar9) {
      local_538 = *puVar12;
      uStack_530 = puVar8[0x16];
      local_498 = puVar8[0x29];
      local_528 = puVar8[0x17];
      uStack_520 = puVar8[0x18];
      local_518 = puVar8[0x19];
      uStack_510 = puVar8[0x1a];
      local_508 = puVar8[0x1b];
      uStack_500 = puVar8[0x1c];
      local_4f8 = puVar8[0x1d];
      uStack_4f0 = puVar8[0x1e];
      local_4e8 = puVar8[0x1f];
      uStack_4e0 = puVar8[0x20];
      local_4d8 = puVar8[0x21];
      uStack_4d0 = puVar8[0x22];
      local_4c8 = puVar8[0x23];
      uStack_4c0 = puVar8[0x24];
      uVar2 = puVar8[0x25];
      uVar3 = puVar8[0x26];
      local_4a8 = puVar8[0x27];
      uStack_4a0 = puVar8[0x28];
      uVar4 = puVar10[-0x14];
      *puVar12 = *puVar9;
      puVar8[0x16] = uVar4;
      uVar4 = puVar10[-0x12];
      puVar8[0x17] = puVar10[-0x13];
      puVar8[0x18] = uVar4;
      uVar4 = puVar10[-0x10];
      puVar8[0x19] = puVar10[-0x11];
      puVar8[0x1a] = uVar4;
      uVar4 = puVar10[-0xe];
      puVar8[0x1b] = puVar10[-0xf];
      puVar8[0x1c] = uVar4;
      uVar4 = puVar10[-0xc];
      puVar8[0x1d] = puVar10[-0xd];
      puVar8[0x1e] = uVar4;
      uVar4 = puVar10[-10];
      puVar8[0x1f] = puVar10[-0xb];
      puVar8[0x20] = uVar4;
      uVar4 = puVar10[-8];
      puVar8[0x21] = puVar10[-9];
      puVar8[0x22] = uVar4;
      uVar4 = puVar10[-6];
      puVar8[0x23] = puVar10[-7];
      puVar8[0x24] = uVar4;
      uVar4 = puVar10[-4];
      puVar8[0x25] = puVar10[-5];
      puVar8[0x26] = uVar4;
      uVar4 = puVar10[-2];
      puVar8[0x27] = puVar10[-3];
      puVar8[0x28] = uVar4;
      puVar8[0x29] = puVar10[-1];
      *puVar9 = local_538;
      puVar10[-0x14] = uStack_530;
      puVar10[-0x13] = local_528;
      puVar10[-0x12] = uStack_520;
      puVar10[-0x11] = local_518;
      puVar10[-0x10] = uStack_510;
      puVar10[-0xf] = local_508;
      puVar10[-0xe] = uStack_500;
      puVar10[-0xd] = local_4f8;
      puVar10[-0xc] = uStack_4f0;
      puVar10[-0xb] = local_4e8;
      puVar10[-10] = uStack_4e0;
      puVar10[-9] = local_4d8;
      puVar10[-8] = uStack_4d0;
      local_4b8._0_4_ = (undefined4)uVar2;
      local_4b8._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_4b0._0_4_ = (undefined4)uVar3;
      uStack_4b0._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      puVar10[-7] = local_4c8;
      puVar10[-6] = uStack_4c0;
      *(undefined4 *)(puVar10 + -5) = (undefined4)local_4b8;
      *(undefined4 *)((longlong)puVar10 + -0x24) = local_4b8._4_4_;
      *(undefined4 *)(puVar10 + -4) = (undefined4)uStack_4b0;
      *(undefined4 *)((longlong)puVar10 + -0x1c) = uStack_4b0._4_4_;
      puVar10[-3] = local_4a8;
      puVar10[-2] = uStack_4a0;
      puVar10[-1] = local_498;
      local_4b8 = uVar2;
      uStack_4b0 = uVar3;
    }
    goto LAB_141eb8130;
  }
  if (puVar11 != puVar9) {
    local_490 = *puVar11;
    uStack_488 = puVar11[1];
    local_3f0 = puVar11[0x14];
    local_480 = puVar11[2];
    uStack_478 = puVar11[3];
    local_470 = puVar11[4];
    uStack_468 = puVar11[5];
    local_460 = puVar11[6];
    uStack_458 = puVar11[7];
    local_450 = puVar11[8];
    uStack_448 = puVar11[9];
    local_440 = puVar11[10];
    uStack_438 = puVar11[0xb];
    local_430 = puVar11[0xc];
    uStack_428 = puVar11[0xd];
    local_420 = puVar11[0xe];
    uStack_418 = puVar11[0xf];
    uVar2 = puVar11[0x10];
    uVar3 = puVar11[0x11];
    local_400 = puVar11[0x12];
    uStack_3f8 = puVar11[0x13];
    uVar4 = puVar10[-0x14];
    *puVar11 = *puVar9;
    puVar11[1] = uVar4;
    uVar4 = puVar10[-0x12];
    puVar11[2] = puVar10[-0x13];
    puVar11[3] = uVar4;
    uVar4 = puVar10[-0x10];
    puVar11[4] = puVar10[-0x11];
    puVar11[5] = uVar4;
    uVar4 = puVar10[-0xe];
    puVar11[6] = puVar10[-0xf];
    puVar11[7] = uVar4;
    uVar4 = puVar10[-0xc];
    puVar11[8] = puVar10[-0xd];
    puVar11[9] = uVar4;
    uVar4 = puVar10[-10];
    puVar11[10] = puVar10[-0xb];
    puVar11[0xb] = uVar4;
    uVar4 = puVar10[-8];
    puVar11[0xc] = puVar10[-9];
    puVar11[0xd] = uVar4;
    uVar4 = puVar10[-6];
    puVar11[0xe] = puVar10[-7];
    puVar11[0xf] = uVar4;
    uVar4 = puVar10[-4];
    puVar11[0x10] = puVar10[-5];
    puVar11[0x11] = uVar4;
    uVar4 = puVar10[-2];
    puVar11[0x12] = puVar10[-3];
    puVar11[0x13] = uVar4;
    puVar11[0x14] = puVar10[-1];
    *puVar9 = local_490;
    puVar10[-0x14] = uStack_488;
    puVar10[-0x13] = local_480;
    puVar10[-0x12] = uStack_478;
    puVar10[-0x11] = local_470;
    puVar10[-0x10] = uStack_468;
    puVar10[-0xf] = local_460;
    puVar10[-0xe] = uStack_458;
    puVar10[-0xd] = local_450;
    puVar10[-0xc] = uStack_448;
    puVar10[-0xb] = local_440;
    puVar10[-10] = uStack_438;
    puVar10[-9] = local_430;
    puVar10[-8] = uStack_428;
    local_410._0_4_ = (undefined4)uVar2;
    local_410._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
    uStack_408._0_4_ = (undefined4)uVar3;
    uStack_408._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
    puVar10[-7] = local_420;
    puVar10[-6] = uStack_418;
    *(undefined4 *)(puVar10 + -5) = (undefined4)local_410;
    *(undefined4 *)((longlong)puVar10 + -0x24) = local_410._4_4_;
    *(undefined4 *)(puVar10 + -4) = (undefined4)uStack_408;
    *(undefined4 *)((longlong)puVar10 + -0x1c) = uStack_408._4_4_;
    puVar10[-3] = local_400;
    puVar10[-2] = uStack_3f8;
    puVar10[-1] = local_3f0;
    local_410 = uVar2;
    uStack_408 = uVar3;
  }
  local_5e8._0_4_ = (int)local_5e8 + -1;
  lVar5 = (longlong)puVar9 + (-0xa8 - (longlong)puVar11);
  lVar5 = lVar5 + SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816(lVar5),8);
  lVar6 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816((longlong)puVar7 - (longlong)puVar12),8) +
          ((longlong)puVar7 - (longlong)puVar12);
  if ((lVar5 >> 7) - (lVar5 >> 0x3f) < (lVar6 >> 7) - (lVar6 >> 0x3f)) {
    if (puVar12 < puVar7) {
      *plVar13 = (longlong)puVar12;
      plVar13[1] = (longlong)puVar7;
      *(int *)(plVar13 + 2) = (int)local_5e8;
      plVar13 = plVar13 + 3;
    }
    if (puVar9 <= puVar11 + 0x15) goto LAB_141eb8532;
    puVar7 = puVar10 + -0x2a;
    puVar12 = puVar11;
  }
  else {
    if (puVar11 + 0x15 < puVar9) {
      *plVar13 = (longlong)puVar11;
      plVar13[1] = (longlong)(puVar10 + -0x2a);
      *(int *)(plVar13 + 2) = (int)local_5e8;
      plVar13 = plVar13 + 3;
    }
    if (puVar7 <= puVar12) goto LAB_141eb8532;
  }
  lVar5 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816((longlong)puVar7 - (longlong)puVar12),8) +
          ((longlong)puVar7 - (longlong)puVar12);
  lVar5 = ((lVar5 >> 7) + 1) - (lVar5 >> 0x3f);
  puVar11 = puVar12;
  if ((int)local_5e8 == 0) goto LAB_141eb8523;
  goto LAB_141eb7fa0;
}



// FUNCTION 141eb8740 IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<168,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<168,8>_>,TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<<lambda_f4a8f81c3f62a3aff784eb1ce16613ad>_>_>_>_>_> body=2200 status=ok
// SIG undefined IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<168,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<168,8>_>,TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<<lambda_f4a8f81c3f62a3aff784eb1ce16613ad>_>_>_>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<168,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<168,8>_>,TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<<lambda_f4a8f81c3f62a3aff784eb1ce16613ad>_>_>_>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  float fVar14;
  undefined1 auStack_618 [48];
  longlong local_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_618;
    fVar14 = (float)(longlong)param_2;
    lStack_330 = param_1 + -0xa8 + param_2 * 0xa8;
    if ((longlong)param_2 < 0) {
      fVar14 = fVar14 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar14 = ::_guard_xfg_dispatch_icall_nop(fVar14);
    local_328 = (undefined4)(longlong)(fVar14 + fVar14);
    ::_guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar13 = &local_338;
    do {
      puVar12 = (undefined8 *)*plVar13;
      puVar7 = (undefined8 *)plVar13[1];
      lVar1 = plVar13[2];
      local_5e8._0_4_ = (int)lVar1;
      lVar5 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816((longlong)puVar7 - (longlong)puVar12),8)
              + ((longlong)puVar7 - (longlong)puVar12);
      lVar5 = ((lVar5 >> 7) + 1) - (lVar5 >> 0x3f);
      puVar11 = puVar12;
      if ((int)local_5e8 != 0) {
LAB_141eb8840:
        if (8 < lVar5) {
          puVar12 = puVar11 + (lVar5 / 2) * 0x15;
          if (puVar12 != puVar11) {
            local_5e0 = *puVar12;
            uStack_5d8 = puVar12[1];
            local_540 = puVar12[0x14];
            local_5d0 = puVar12[2];
            uStack_5c8 = puVar12[3];
            local_5c0 = puVar12[4];
            uStack_5b8 = puVar12[5];
            local_5b0 = puVar12[6];
            uStack_5a8 = puVar12[7];
            local_5a0 = puVar12[8];
            uStack_598 = puVar12[9];
            local_590 = puVar12[10];
            uStack_588 = puVar12[0xb];
            local_580 = puVar12[0xc];
            uStack_578 = puVar12[0xd];
            local_570 = puVar12[0xe];
            uStack_568 = puVar12[0xf];
            uVar2 = puVar12[0x10];
            uVar3 = puVar12[0x11];
            local_550 = puVar12[0x12];
            uStack_548 = puVar12[0x13];
            uVar4 = puVar11[1];
            *puVar12 = *puVar11;
            puVar12[1] = uVar4;
            uVar4 = puVar11[3];
            puVar12[2] = puVar11[2];
            puVar12[3] = uVar4;
            uVar4 = puVar11[5];
            puVar12[4] = puVar11[4];
            puVar12[5] = uVar4;
            uVar4 = puVar11[7];
            puVar12[6] = puVar11[6];
            puVar12[7] = uVar4;
            uVar4 = puVar11[9];
            puVar12[8] = puVar11[8];
            puVar12[9] = uVar4;
            uVar4 = puVar11[0xb];
            puVar12[10] = puVar11[10];
            puVar12[0xb] = uVar4;
            uVar4 = puVar11[0xd];
            puVar12[0xc] = puVar11[0xc];
            puVar12[0xd] = uVar4;
            uVar4 = puVar11[0xf];
            puVar12[0xe] = puVar11[0xe];
            puVar12[0xf] = uVar4;
            uVar4 = puVar11[0x11];
            puVar12[0x10] = puVar11[0x10];
            puVar12[0x11] = uVar4;
            uVar4 = puVar11[0x13];
            puVar12[0x12] = puVar11[0x12];
            puVar12[0x13] = uVar4;
            puVar12[0x14] = puVar11[0x14];
            *puVar11 = local_5e0;
            puVar11[1] = uStack_5d8;
            puVar11[2] = local_5d0;
            puVar11[3] = uStack_5c8;
            puVar11[4] = local_5c0;
            puVar11[5] = uStack_5b8;
            puVar11[6] = local_5b0;
            puVar11[7] = uStack_5a8;
            puVar11[8] = local_5a0;
            puVar11[9] = uStack_598;
            puVar11[10] = local_590;
            puVar11[0xb] = uStack_588;
            puVar11[0xc] = local_580;
            puVar11[0xd] = uStack_578;
            local_560._0_4_ = (undefined4)uVar2;
            local_560._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
            uStack_558._0_4_ = (undefined4)uVar3;
            uStack_558._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
            puVar11[0xe] = local_570;
            puVar11[0xf] = uStack_568;
            *(undefined4 *)(puVar11 + 0x10) = (undefined4)local_560;
            *(undefined4 *)((longlong)puVar11 + 0x84) = local_560._4_4_;
            *(undefined4 *)(puVar11 + 0x11) = (undefined4)uStack_558;
            *(undefined4 *)((longlong)puVar11 + 0x8c) = uStack_558._4_4_;
            puVar11[0x12] = local_550;
            puVar11[0x13] = uStack_548;
            puVar11[0x14] = local_540;
            local_560 = uVar2;
            uStack_558 = uVar3;
          }
          puVar9 = puVar7 + 0x15;
          puVar12 = puVar11;
LAB_141eb89d0:
          puVar8 = puVar12;
          puVar12 = puVar8 + 0x15;
          if (puVar12 <= puVar7) goto code_r0x000141eb89dc;
          goto LAB_141eb89f0;
        }
        for (; puVar9 = puVar11, puVar12 = puVar11, puVar11 < puVar7; puVar7 = puVar7 + -0x15) {
          while (puVar8 = puVar9, puVar12 = puVar12 + 0x15, puVar12 <= puVar7) {
            puVar9 = puVar12;
            if ((longlong)puVar8[5] <= (longlong)puVar12[5]) {
              puVar9 = puVar8;
            }
          }
          if (puVar8 != puVar7) {
            local_3e8 = *puVar8;
            uStack_3e0 = puVar8[1];
            local_348 = puVar8[0x14];
            local_3d8 = puVar8[2];
            uStack_3d0 = puVar8[3];
            local_3c8 = puVar8[4];
            uStack_3c0 = puVar8[5];
            local_3b8 = puVar8[6];
            uStack_3b0 = puVar8[7];
            local_3a8 = puVar8[8];
            uStack_3a0 = puVar8[9];
            local_398 = puVar8[10];
            uStack_390 = puVar8[0xb];
            local_388 = puVar8[0xc];
            uStack_380 = puVar8[0xd];
            local_378 = puVar8[0xe];
            uStack_370 = puVar8[0xf];
            local_368 = puVar8[0x10];
            uStack_360 = puVar8[0x11];
            local_358 = puVar8[0x12];
            uStack_350 = puVar8[0x13];
            uVar2 = puVar7[1];
            *puVar8 = *puVar7;
            puVar8[1] = uVar2;
            uVar2 = puVar7[3];
            puVar8[2] = puVar7[2];
            puVar8[3] = uVar2;
            uVar2 = puVar7[5];
            puVar8[4] = puVar7[4];
            puVar8[5] = uVar2;
            uVar2 = puVar7[7];
            puVar8[6] = puVar7[6];
            puVar8[7] = uVar2;
            uVar2 = puVar7[9];
            puVar8[8] = puVar7[8];
            puVar8[9] = uVar2;
            uVar2 = puVar7[0xb];
            puVar8[10] = puVar7[10];
            puVar8[0xb] = uVar2;
            uVar2 = puVar7[0xd];
            puVar8[0xc] = puVar7[0xc];
            puVar8[0xd] = uVar2;
            uVar2 = puVar7[0xf];
            puVar8[0xe] = puVar7[0xe];
            puVar8[0xf] = uVar2;
            uVar2 = puVar7[0x11];
            puVar8[0x10] = puVar7[0x10];
            puVar8[0x11] = uVar2;
            uVar2 = puVar7[0x13];
            puVar8[0x12] = puVar7[0x12];
            puVar8[0x13] = uVar2;
            puVar8[0x14] = puVar7[0x14];
            *puVar7 = local_3e8;
            puVar7[1] = uStack_3e0;
            puVar7[2] = local_3d8;
            puVar7[3] = uStack_3d0;
            puVar7[4] = local_3c8;
            puVar7[5] = uStack_3c0;
            puVar7[6] = local_3b8;
            puVar7[7] = uStack_3b0;
            puVar7[8] = local_3a8;
            puVar7[9] = uStack_3a0;
            puVar7[10] = local_398;
            puVar7[0xb] = uStack_390;
            puVar7[0xc] = local_388;
            puVar7[0xd] = uStack_380;
            puVar7[0xe] = local_378;
            puVar7[0xf] = uStack_370;
            puVar7[0x10] = local_368;
            puVar7[0x11] = uStack_360;
            puVar7[0x12] = local_358;
            puVar7[0x13] = uStack_350;
            puVar7[0x14] = local_348;
          }
        }
        goto LAB_141eb8dd2;
      }
LAB_141eb8dc3:
      local_5e8 = lVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<168,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<168,8>_>,TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<<lambda_f4a8f81c3f62a3aff784eb1ce16613ad>_>_>_>_>_>
                (puVar12,lVar5,param_3,param_4);
LAB_141eb8dd2:
      plVar13 = plVar13 + -3;
    } while (&local_338 <= plVar13);
  }
  return;
code_r0x000141eb89dc:
  if ((longlong)puVar11[5] <= (longlong)puVar8[0x1a]) goto LAB_141eb89d0;
LAB_141eb89f0:
  do {
    puVar10 = puVar9;
    puVar9 = puVar10 + -0x15;
    if (puVar9 <= puVar11) break;
  } while ((longlong)puVar10[-0x10] <= (longlong)puVar11[5]);
  if (puVar12 <= puVar9) {
    if (puVar12 != puVar9) {
      local_538 = *puVar12;
      uStack_530 = puVar8[0x16];
      local_498 = puVar8[0x29];
      local_528 = puVar8[0x17];
      uStack_520 = puVar8[0x18];
      local_518 = puVar8[0x19];
      uStack_510 = puVar8[0x1a];
      local_508 = puVar8[0x1b];
      uStack_500 = puVar8[0x1c];
      local_4f8 = puVar8[0x1d];
      uStack_4f0 = puVar8[0x1e];
      local_4e8 = puVar8[0x1f];
      uStack_4e0 = puVar8[0x20];
      local_4d8 = puVar8[0x21];
      uStack_4d0 = puVar8[0x22];
      local_4c8 = puVar8[0x23];
      uStack_4c0 = puVar8[0x24];
      uVar2 = puVar8[0x25];
      uVar3 = puVar8[0x26];
      local_4a8 = puVar8[0x27];
      uStack_4a0 = puVar8[0x28];
      uVar4 = puVar10[-0x14];
      *puVar12 = *puVar9;
      puVar8[0x16] = uVar4;
      uVar4 = puVar10[-0x12];
      puVar8[0x17] = puVar10[-0x13];
      puVar8[0x18] = uVar4;
      uVar4 = puVar10[-0x10];
      puVar8[0x19] = puVar10[-0x11];
      puVar8[0x1a] = uVar4;
      uVar4 = puVar10[-0xe];
      puVar8[0x1b] = puVar10[-0xf];
      puVar8[0x1c] = uVar4;
      uVar4 = puVar10[-0xc];
      puVar8[0x1d] = puVar10[-0xd];
      puVar8[0x1e] = uVar4;
      uVar4 = puVar10[-10];
      puVar8[0x1f] = puVar10[-0xb];
      puVar8[0x20] = uVar4;
      uVar4 = puVar10[-8];
      puVar8[0x21] = puVar10[-9];
      puVar8[0x22] = uVar4;
      uVar4 = puVar10[-6];
      puVar8[0x23] = puVar10[-7];
      puVar8[0x24] = uVar4;
      uVar4 = puVar10[-4];
      puVar8[0x25] = puVar10[-5];
      puVar8[0x26] = uVar4;
      uVar4 = puVar10[-2];
      puVar8[0x27] = puVar10[-3];
      puVar8[0x28] = uVar4;
      puVar8[0x29] = puVar10[-1];
      *puVar9 = local_538;
      puVar10[-0x14] = uStack_530;
      puVar10[-0x13] = local_528;
      puVar10[-0x12] = uStack_520;
      puVar10[-0x11] = local_518;
      puVar10[-0x10] = uStack_510;
      puVar10[-0xf] = local_508;
      puVar10[-0xe] = uStack_500;
      puVar10[-0xd] = local_4f8;
      puVar10[-0xc] = uStack_4f0;
      puVar10[-0xb] = local_4e8;
      puVar10[-10] = uStack_4e0;
      puVar10[-9] = local_4d8;
      puVar10[-8] = uStack_4d0;
      local_4b8._0_4_ = (undefined4)uVar2;
      local_4b8._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_4b0._0_4_ = (undefined4)uVar3;
      uStack_4b0._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      puVar10[-7] = local_4c8;
      puVar10[-6] = uStack_4c0;
      *(undefined4 *)(puVar10 + -5) = (undefined4)local_4b8;
      *(undefined4 *)((longlong)puVar10 + -0x24) = local_4b8._4_4_;
      *(undefined4 *)(puVar10 + -4) = (undefined4)uStack_4b0;
      *(undefined4 *)((longlong)puVar10 + -0x1c) = uStack_4b0._4_4_;
      puVar10[-3] = local_4a8;
      puVar10[-2] = uStack_4a0;
      puVar10[-1] = local_498;
      local_4b8 = uVar2;
      uStack_4b0 = uVar3;
    }
    goto LAB_141eb89d0;
  }
  if (puVar11 != puVar9) {
    local_490 = *puVar11;
    uStack_488 = puVar11[1];
    local_3f0 = puVar11[0x14];
    local_480 = puVar11[2];
    uStack_478 = puVar11[3];
    local_470 = puVar11[4];
    uStack_468 = puVar11[5];
    local_460 = puVar11[6];
    uStack_458 = puVar11[7];
    local_450 = puVar11[8];
    uStack_448 = puVar11[9];
    local_440 = puVar11[10];
    uStack_438 = puVar11[0xb];
    local_430 = puVar11[0xc];
    uStack_428 = puVar11[0xd];
    local_420 = puVar11[0xe];
    uStack_418 = puVar11[0xf];
    uVar2 = puVar11[0x10];
    uVar3 = puVar11[0x11];
    local_400 = puVar11[0x12];
    uStack_3f8 = puVar11[0x13];
    uVar4 = puVar10[-0x14];
    *puVar11 = *puVar9;
    puVar11[1] = uVar4;
    uVar4 = puVar10[-0x12];
    puVar11[2] = puVar10[-0x13];
    puVar11[3] = uVar4;
    uVar4 = puVar10[-0x10];
    puVar11[4] = puVar10[-0x11];
    puVar11[5] = uVar4;
    uVar4 = puVar10[-0xe];
    puVar11[6] = puVar10[-0xf];
    puVar11[7] = uVar4;
    uVar4 = puVar10[-0xc];
    puVar11[8] = puVar10[-0xd];
    puVar11[9] = uVar4;
    uVar4 = puVar10[-10];
    puVar11[10] = puVar10[-0xb];
    puVar11[0xb] = uVar4;
    uVar4 = puVar10[-8];
    puVar11[0xc] = puVar10[-9];
    puVar11[0xd] = uVar4;
    uVar4 = puVar10[-6];
    puVar11[0xe] = puVar10[-7];
    puVar11[0xf] = uVar4;
    uVar4 = puVar10[-4];
    puVar11[0x10] = puVar10[-5];
    puVar11[0x11] = uVar4;
    uVar4 = puVar10[-2];
    puVar11[0x12] = puVar10[-3];
    puVar11[0x13] = uVar4;
    puVar11[0x14] = puVar10[-1];
    *puVar9 = local_490;
    puVar10[-0x14] = uStack_488;
    puVar10[-0x13] = local_480;
    puVar10[-0x12] = uStack_478;
    puVar10[-0x11] = local_470;
    puVar10[-0x10] = uStack_468;
    puVar10[-0xf] = local_460;
    puVar10[-0xe] = uStack_458;
    puVar10[-0xd] = local_450;
    puVar10[-0xc] = uStack_448;
    puVar10[-0xb] = local_440;
    puVar10[-10] = uStack_438;
    puVar10[-9] = local_430;
    puVar10[-8] = uStack_428;
    local_410._0_4_ = (undefined4)uVar2;
    local_410._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
    uStack_408._0_4_ = (undefined4)uVar3;
    uStack_408._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
    puVar10[-7] = local_420;
    puVar10[-6] = uStack_418;
    *(undefined4 *)(puVar10 + -5) = (undefined4)local_410;
    *(undefined4 *)((longlong)puVar10 + -0x24) = local_410._4_4_;
    *(undefined4 *)(puVar10 + -4) = (undefined4)uStack_408;
    *(undefined4 *)((longlong)puVar10 + -0x1c) = uStack_408._4_4_;
    puVar10[-3] = local_400;
    puVar10[-2] = uStack_3f8;
    puVar10[-1] = local_3f0;
    local_410 = uVar2;
    uStack_408 = uVar3;
  }
  local_5e8._0_4_ = (int)local_5e8 + -1;
  lVar5 = (longlong)puVar9 + (-0xa8 - (longlong)puVar11);
  lVar5 = lVar5 + SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816(lVar5),8);
  lVar6 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816((longlong)puVar7 - (longlong)puVar12),8) +
          ((longlong)puVar7 - (longlong)puVar12);
  if ((lVar5 >> 7) - (lVar5 >> 0x3f) < (lVar6 >> 7) - (lVar6 >> 0x3f)) {
    if (puVar12 < puVar7) {
      *plVar13 = (longlong)puVar12;
      plVar13[1] = (longlong)puVar7;
      *(int *)(plVar13 + 2) = (int)local_5e8;
      plVar13 = plVar13 + 3;
    }
    if (puVar9 <= puVar11 + 0x15) goto LAB_141eb8dd2;
    puVar7 = puVar10 + -0x2a;
    puVar12 = puVar11;
  }
  else {
    if (puVar11 + 0x15 < puVar9) {
      *plVar13 = (longlong)puVar11;
      plVar13[1] = (longlong)(puVar10 + -0x2a);
      *(int *)(plVar13 + 2) = (int)local_5e8;
      plVar13 = plVar13 + 3;
    }
    if (puVar7 <= puVar12) goto LAB_141eb8dd2;
  }
  lVar5 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816((longlong)puVar7 - (longlong)puVar12),8) +
          ((longlong)puVar7 - (longlong)puVar12);
  lVar5 = ((lVar5 >> 7) + 1) - (lVar5 >> 0x3f);
  puVar11 = puVar12;
  if ((int)local_5e8 == 0) goto LAB_141eb8dc3;
  goto LAB_141eb8840;
}



// FUNCTION 141eb8fe0 IntroSortInternal<FVertexElement,FIdentityFunctor,TDereferenceWrapper<FVertexElement,<lambda_0f5dc6ea2be2fbf8df3145a0396f366f>_>_> body=736 status=ok
// SIG undefined IntroSortInternal<FVertexElement,FIdentityFunctor,TDereferenceWrapper<FVertexElement,<lambda_0f5dc6ea2be2fbf8df3145a0396f366f>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void AlgoImpl::
     IntroSortInternal<FVertexElement,FIdentityFunctor,TDereferenceWrapper<FVertexElement,<lambda_0f5dc6ea2be2fbf8df3145a0396f366f>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  bool bVar2;
  byte *pbVar3;
  longlong lVar4;
  longlong lVar5;
  byte *pbVar6;
  longlong *plVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  float fVar12;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  byte *pbVar7;
  
  if (param_2 < 2) {
    return;
  }
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
  lStack_320 = param_1 + (param_2 - 1) * 8;
  fVar12 = (float)(longlong)param_2;
  if ((longlong)param_2 < 0) {
    fVar12 = fVar12 + 1.8446744e+19;
  }
  local_328 = param_1;
  fVar12 = ::_guard_xfg_dispatch_icall_nop(fVar12);
  local_318 = (undefined4)(longlong)(fVar12 + fVar12);
  ::_guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
  plVar8 = &local_328;
  do {
    pbVar10 = (byte *)plVar8[1];
    local_338 = plVar8[2];
    lVar4 = (longlong)pbVar10 - *plVar8;
    pbVar3 = (byte *)*plVar8;
    iVar11 = (int)local_338;
joined_r0x000141eb909a:
    lVar5 = (lVar4 >> 3) + 1;
    if (iVar11 == 0) {
      HeapSortInternal<FVertexElement,FIdentityFunctor,TDereferenceWrapper<FVertexElement,<lambda_0f5dc6ea2be2fbf8df3145a0396f366f>_>_>
                (pbVar3,lVar5,param_3,param_4);
    }
    else {
      if (8 < lVar5) {
        if (lVar5 < 0) {
          lVar5 = (lVar4 >> 3) + 2;
        }
        pbVar6 = pbVar3 + (lVar5 >> 1) * 8;
        if (pbVar6 != pbVar3) {
          uVar1 = *(undefined8 *)pbVar6;
          *(undefined8 *)pbVar6 = *(undefined8 *)pbVar3;
          *(undefined8 *)pbVar3 = uVar1;
        }
        pbVar6 = pbVar10 + 8;
        pbVar9 = pbVar3;
LAB_141eb90d7:
        pbVar7 = pbVar9;
        pbVar9 = pbVar7 + 8;
        if ((pbVar9 <= pbVar10) && (*pbVar9 <= *pbVar3)) break;
        goto LAB_141eb9110;
      }
      for (; pbVar9 = pbVar3, pbVar6 = pbVar3, pbVar3 < pbVar10; pbVar10 = pbVar10 + -8) {
        while (pbVar7 = pbVar9, pbVar6 = pbVar6 + 8, pbVar6 <= pbVar10) {
          if (*pbVar7 < *pbVar6) {
            bVar2 = true;
          }
          else if (*pbVar6 < *pbVar7) {
LAB_141eb9282:
            bVar2 = false;
          }
          else if (pbVar7[1] < pbVar6[1]) {
            bVar2 = true;
          }
          else {
            if ((pbVar6[1] < pbVar7[1]) || (pbVar6[3] <= pbVar7[3])) goto LAB_141eb9282;
            bVar2 = true;
          }
          pbVar9 = pbVar6;
          if (!bVar2) {
            pbVar9 = pbVar7;
          }
        }
        if (pbVar7 != pbVar10) {
          uVar1 = *(undefined8 *)pbVar7;
          *(undefined8 *)pbVar7 = *(undefined8 *)pbVar10;
          *(undefined8 *)pbVar10 = uVar1;
        }
      }
    }
LAB_141eb9200:
    plVar8 = plVar8 + -3;
    if (plVar8 < &local_328) {
      return;
    }
  } while( true );
  if ((*pbVar3 != *pbVar9) ||
     ((pbVar7[9] <= pbVar3[1] && ((pbVar3[1] != pbVar7[9] || (pbVar7[0xb] <= pbVar3[3]))))))
  goto LAB_141eb90d7;
LAB_141eb9110:
  do {
    pbVar7 = pbVar6;
    pbVar6 = pbVar7 + -8;
    if ((pbVar6 <= pbVar3) || (*pbVar6 < *pbVar3)) break;
  } while ((*pbVar6 != *pbVar3) ||
          ((pbVar3[1] <= pbVar7[-7] && ((pbVar7[-7] != pbVar3[1] || (pbVar3[3] <= pbVar7[-5]))))));
  if (pbVar9 <= pbVar6) {
    if (pbVar9 != pbVar6) {
      uVar1 = *(undefined8 *)pbVar9;
      *(undefined8 *)pbVar9 = *(undefined8 *)pbVar6;
      *(undefined8 *)pbVar6 = uVar1;
    }
    goto LAB_141eb90d7;
  }
  if (pbVar3 != pbVar6) {
    uVar1 = *(undefined8 *)pbVar3;
    *(undefined8 *)pbVar3 = *(undefined8 *)pbVar6;
    *(undefined8 *)pbVar6 = uVar1;
  }
  iVar11 = iVar11 + -1;
  if ((longlong)((ulonglong)(pbVar6 + (-8 - (longlong)pbVar3)) & 0xfffffffffffffff8) <
      (longlong)((longlong)pbVar10 - (longlong)pbVar9 & 0xfffffffffffffff8U)) {
    if (pbVar9 < pbVar10) {
      *plVar8 = (longlong)pbVar9;
      plVar8[1] = (longlong)pbVar10;
      *(int *)(plVar8 + 2) = iVar11;
      plVar8 = plVar8 + 3;
    }
    if (pbVar6 <= pbVar3 + 8) goto LAB_141eb9200;
    pbVar10 = pbVar7 + -0x10;
    pbVar9 = pbVar3;
  }
  else {
    if (pbVar3 + 8 < pbVar6) {
      *plVar8 = (longlong)pbVar3;
      plVar8[1] = (longlong)(pbVar7 + -0x10);
      *(int *)(plVar8 + 2) = iVar11;
      plVar8 = plVar8 + 3;
    }
    if (pbVar10 <= pbVar9) goto LAB_141eb9200;
  }
  lVar4 = (longlong)pbVar10 - (longlong)pbVar9;
  pbVar3 = pbVar9;
  goto joined_r0x000141eb909a;
}



// FUNCTION 141eb92c0 FUN_141eb92c0 body=392 status=ok
// SIG undefined FUN_141eb92c0(void)

undefined8 *
FUN_141eb92c0(undefined8 *param_1,short *param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *local_28;
  int local_20;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    plVar1[1] = (longlong)param_1;
    *plVar1 = (longlong)&DAT_143f3ed00;
    plVar1[2] = (longlong)FUN_141591020;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  uVar3 = (**(code **)(*DAT_1468b1f88 + 0x80))(DAT_1468b1f88,param_2,param_3,&local_28,0);
  param_1[1] = uVar3;
  *param_1 = &PTR_FUN_143f3ecf0;
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) goto LAB_141eb93c8;
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
LAB_141eb93c8:
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (param_2[lVar2] != 0);
    iVar4 = (int)lVar2 + 1;
    *(int *)(param_1 + 3) = iVar4;
    if (0 < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 2,0);
    }
    FGenericPlatformString::Memcpy(param_1[2],param_2,(longlong)iVar4 * 2);
  }
  *(undefined4 *)((longlong)param_1 + 0x24) = param_5;
  *(undefined4 *)(param_1 + 5) = param_6;
  *(undefined4 *)(param_1 + 4) = param_4;
  return param_1;
}



// FUNCTION 141eb9450 FCachedBoundShaderStateLink body=255 status=ok
// SIG undefined FCachedBoundShaderStateLink(void)

undefined8 *
FCachedBoundShaderStateLink::FCachedBoundShaderStateLink
          (undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
          longlong param_6,longlong param_7,undefined8 param_8,char param_9)

{
  undefined8 *local_res8 [4];
  undefined8 *local_48;
  undefined8 **local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  *param_1 = param_8;
  param_1[1] = param_2;
  if (param_2 != 0) {
    LOCK();
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = param_3;
  if (param_3 != 0) {
    LOCK();
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
    UNLOCK();
  }
  param_1[3] = param_4;
  if (param_4 != 0) {
    LOCK();
    *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + 1;
    UNLOCK();
  }
  param_1[4] = param_5;
  if (param_5 != 0) {
    LOCK();
    *(int *)(param_5 + 8) = *(int *)(param_5 + 8) + 1;
    UNLOCK();
  }
  param_1[5] = param_6;
  if (param_6 != 0) {
    LOCK();
    *(int *)(param_6 + 8) = *(int *)(param_6 + 8) + 1;
    UNLOCK();
  }
  param_1[6] = param_7;
  if (param_7 != 0) {
    LOCK();
    *(int *)(param_7 + 8) = *(int *)(param_7 + 8) + 1;
    UNLOCK();
  }
  *(char *)(param_1 + 7) = param_9;
  if (param_9 != '\0') {
    local_38 = param_1[1];
    local_30 = param_1[2];
    local_28 = param_1[3];
    local_20 = param_1[4];
    local_18 = param_1[5];
    local_10 = param_1[6];
    local_48 = &local_38;
    local_40 = local_res8;
    local_res8[0] = param_1;
    FUN_141eb54c0(&DAT_1464c9dd0,&param_8,&local_48,0);
  }
  return param_1;
}



// FUNCTION 141eb9550 FCompilePipelineStateTask body=254 status=ok
// SIG undefined FCompilePipelineStateTask(void)

undefined8 *
FCompilePipelineStateTask::FCompilePipelineStateTask
          (undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar2 = param_3[1];
  param_1[1] = *param_3;
  param_1[2] = uVar2;
  uVar2 = param_3[3];
  param_1[3] = param_3[2];
  param_1[4] = uVar2;
  uVar2 = param_3[5];
  param_1[5] = param_3[4];
  param_1[6] = uVar2;
  uVar2 = param_3[7];
  param_1[7] = param_3[6];
  param_1[8] = uVar2;
  uVar2 = param_3[9];
  param_1[9] = param_3[8];
  param_1[10] = uVar2;
  uVar2 = param_3[0xb];
  param_1[0xb] = param_3[10];
  param_1[0xc] = uVar2;
  uVar2 = param_3[0xd];
  param_1[0xd] = param_3[0xc];
  param_1[0xe] = uVar2;
  uVar2 = param_3[0xf];
  param_1[0xf] = param_3[0xe];
  param_1[0x10] = uVar2;
  uVar2 = param_3[0x11];
  param_1[0x11] = param_3[0x10];
  param_1[0x12] = uVar2;
  uVar2 = param_3[0x13];
  param_1[0x13] = param_3[0x12];
  param_1[0x14] = uVar2;
  uVar2 = param_3[0x15];
  param_1[0x15] = param_3[0x14];
  param_1[0x16] = uVar2;
  param_1[0x17] = param_3[0x16];
  if (param_1[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (param_1[2] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[2] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (param_1[7] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[7] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (param_1[8] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[8] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (param_1[9] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[9] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 141eb9650 FUN_141eb9650 body=490 status=ok
// SIG undefined FUN_141eb9650(void)

undefined8 * FUN_141eb9650(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0x26;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar2 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  uVar2 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  uVar2 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar2;
  uVar2 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar2;
  uVar2 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar2;
  uVar2 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar2;
  uVar2 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar2;
  uVar2 = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar2;
  param_1[0x16] = param_2[0x16];
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    param_1[0x17] = *(undefined8 *)(lVar1 + 0x18);
    param_1[0x18] = uVar2;
    *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(lVar1 + 0x28);
  }
  lVar1 = param_2[4];
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)((longlong)param_1 + 0xcc) = *(undefined8 *)(lVar1 + 0x18);
    *(undefined8 *)((longlong)param_1 + 0xd4) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0xdc) = *(undefined4 *)(lVar1 + 0x28);
  }
  lVar1 = param_2[5];
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    param_1[0x1c] = *(undefined8 *)(lVar1 + 0x18);
    param_1[0x1d] = uVar2;
    *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(lVar1 + 0x28);
  }
  lVar1 = param_2[2];
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)((longlong)param_1 + 0xf4) = *(undefined8 *)(lVar1 + 0x18);
    *(undefined8 *)((longlong)param_1 + 0xfc) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x104) = *(undefined4 *)(lVar1 + 0x28);
  }
  lVar1 = param_2[3];
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    param_1[0x21] = *(undefined8 *)(lVar1 + 0x18);
    param_1[0x22] = uVar2;
    *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(lVar1 + 0x28);
  }
  return param_1;
}



// FUNCTION 141eb9840 FUN_141eb9840 body=259 status=ok
// SIG undefined FUN_141eb9840(void)

int * FUN_141eb9840(int *param_1,int *param_2)

{
  undefined8 uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  longlong lVar5;
  int *piVar6;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_141eb9bb0(param_1 + 6);
  param_1[0x91] = param_2[0x91];
  if (*param_1 == 0) {
    uVar1 = *(undefined8 *)(param_2 + 3);
    *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
    *(undefined8 *)(param_1 + 3) = uVar1;
    param_1[5] = param_2[5];
  }
  else if (*param_1 == 1) {
    lVar5 = 4;
    piVar2 = param_2 + 6;
    piVar3 = param_1 + 6;
    do {
      piVar6 = piVar3;
      piVar4 = piVar2;
      uVar1 = *(undefined8 *)(piVar4 + 2);
      *(undefined8 *)piVar6 = *(undefined8 *)piVar4;
      *(undefined8 *)(piVar6 + 2) = uVar1;
      uVar1 = *(undefined8 *)(piVar4 + 6);
      *(undefined8 *)(piVar6 + 4) = *(undefined8 *)(piVar4 + 4);
      *(undefined8 *)(piVar6 + 6) = uVar1;
      uVar1 = *(undefined8 *)(piVar4 + 10);
      *(undefined8 *)(piVar6 + 8) = *(undefined8 *)(piVar4 + 8);
      *(undefined8 *)(piVar6 + 10) = uVar1;
      uVar1 = *(undefined8 *)(piVar4 + 0xe);
      *(undefined8 *)(piVar6 + 0xc) = *(undefined8 *)(piVar4 + 0xc);
      *(undefined8 *)(piVar6 + 0xe) = uVar1;
      uVar1 = *(undefined8 *)(piVar4 + 0x12);
      *(undefined8 *)(piVar6 + 0x10) = *(undefined8 *)(piVar4 + 0x10);
      *(undefined8 *)(piVar6 + 0x12) = uVar1;
      uVar1 = *(undefined8 *)(piVar4 + 0x16);
      *(undefined8 *)(piVar6 + 0x14) = *(undefined8 *)(piVar4 + 0x14);
      *(undefined8 *)(piVar6 + 0x16) = uVar1;
      uVar1 = *(undefined8 *)(piVar4 + 0x1a);
      *(undefined8 *)(piVar6 + 0x18) = *(undefined8 *)(piVar4 + 0x18);
      *(undefined8 *)(piVar6 + 0x1a) = uVar1;
      uVar1 = *(undefined8 *)(piVar4 + 0x1e);
      *(undefined8 *)(piVar6 + 0x1c) = *(undefined8 *)(piVar4 + 0x1c);
      *(undefined8 *)(piVar6 + 0x1e) = uVar1;
      lVar5 = lVar5 + -1;
      piVar2 = piVar4 + 0x20;
      piVar3 = piVar6 + 0x20;
    } while (lVar5 != 0);
    uVar1 = *(undefined8 *)(piVar4 + 0x22);
    *(undefined8 *)(piVar6 + 0x20) = *(undefined8 *)(piVar4 + 0x20);
    *(undefined8 *)(piVar6 + 0x22) = uVar1;
    uVar1 = *(undefined8 *)(piVar4 + 0x26);
    *(undefined8 *)(piVar6 + 0x24) = *(undefined8 *)(piVar4 + 0x24);
    *(undefined8 *)(piVar6 + 0x26) = uVar1;
    *(undefined8 *)(piVar6 + 0x28) = *(undefined8 *)(piVar4 + 0x28);
    piVar6[0x2a] = piVar4[0x2a];
    return param_1;
  }
  return param_1;
}



// FUNCTION 141eb9950 FUN_141eb9950 body=50 status=ok
// SIG undefined FUN_141eb9950(void)

longlong FUN_141eb9950(longlong param_1)

{
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_141eb9bb0(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x244) = 0;
  return param_1;
}



// FUNCTION 141eb9990 FPipelineCacheFileFormatPSOMetaData body=113 status=ok
// SIG undefined FPipelineCacheFileFormatPSOMetaData(void)

undefined8 *
FPipelineCacheFileFormatPSOMetaData::FPipelineCacheFileFormatPSOMetaData
          (undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  uVar4 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar4;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 7);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 7) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar3;
  param_1[8] = param_2[8];
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::operator=
            (param_1 + 9,param_2 + 9);
  return param_1;
}



// FUNCTION 141eb9a10 FRHICommandListBase body=405 status=ok
// SIG undefined FRHICommandListBase(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FRHICommandListBase::FRHICommandListBase(undefined8 *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = param_2;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0x26;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 2;
  *(undefined2 *)((longlong)param_1 + 0x1ac) = 0;
  LOCK();
  _DAT_146ab6e70 = _DAT_146ab6e70 + 1;
  UNLOCK();
  FUN_141ed2fb0();
  return param_1;
}



// FUNCTION 141eb9bb0 FUN_141eb9bb0 body=221 status=ok
// SIG undefined FUN_141eb9bb0(void)

void * FUN_141eb9bb0(void *param_1)

{
  _guard_xfg_dispatch_icall_nop(param_1,0,100);
  *(undefined8 *)((longlong)param_1 + 0x164) = 0;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x170) = 0xf0001;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0x1000001;
  *(undefined4 *)((longlong)param_1 + 0x178) = 0x1000f00;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x10000;
  *(undefined4 *)((longlong)param_1 + 0x180) = 0x1000f;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0xf000100;
  *(undefined4 *)((longlong)param_1 + 0x188) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0xf0001;
  *(undefined4 *)((longlong)param_1 + 400) = 0x1000001;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0x1000f00;
  *(undefined4 *)((longlong)param_1 + 0x198) = 0x10000;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0x1000f;
  *(undefined4 *)((longlong)param_1 + 0x1a0) = 0xf000100;
  *(undefined8 *)((longlong)param_1 + 0x1a8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0x7000101;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 7;
  *(undefined2 *)((longlong)param_1 + 0x1c0) = 0xffff;
  return param_1;
}



// FUNCTION 141eb9c90 ~TArray<FRHIFrameFlipTrackingRunnable::FFramePair,FDefaultAllocator> body=110 status=ok
// SIG undefined ~TArray<FRHIFrameFlipTrackingRunnable::FFramePair,FDefaultAllocator>(void)

void TArray<FRHIFrameFlipTrackingRunnable::FFramePair,FDefaultAllocator>::
     ~TArray<FRHIFrameFlipTrackingRunnable::FFramePair,FDefaultAllocator>(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  lVar3 = *param_1;
  iVar5 = (int)param_1[1];
  if (iVar5 != 0) {
    plVar4 = (longlong *)(lVar3 + 8);
    do {
      if (*plVar4 != 0) {
        LOCK();
        piVar1 = (int *)(*plVar4 + 0x48);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle();
        }
      }
      plVar4 = plVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    lVar3 = *param_1;
  }
  if (lVar3 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141eb9d00 ~TArray<FRHILockTracker::FUnlockFenceParams,TInlineAllocator<16,FDefaultAllocator>_> body=121 status=ok
// SIG undefined ~TArray<FRHILockTracker::FUnlockFenceParams,TInlineAllocator<16,FDefaultAllocator>_>(void)

void TArray<FRHILockTracker::FUnlockFenceParams,TInlineAllocator<16,FDefaultAllocator>_>::
     ~TArray<FRHILockTracker::FUnlockFenceParams,TInlineAllocator<16,FDefaultAllocator>_>
               (longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x100);
  iVar6 = *(int *)(param_1 + 0x108);
  lVar4 = lVar3;
  if (lVar3 == 0) {
    lVar4 = param_1;
  }
  if (iVar6 != 0) {
    plVar5 = (longlong *)(lVar4 + 8);
    do {
      if (*plVar5 != 0) {
        LOCK();
        piVar1 = (int *)(*plVar5 + 0x48);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle();
        }
      }
      plVar5 = plVar5 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar3 = *(longlong *)(param_1 + 0x100);
  }
  if (lVar3 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141eb9d80 ~TMap<unsigned_int,FPipelineCacheFileFormatPSO,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSO,0>_> body=78 status=ok
// SIG undefined ~TMap<unsigned_int,FPipelineCacheFileFormatPSO,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSO,0>_>(void)

void TMap<unsigned_int,FPipelineCacheFileFormatPSO,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSO,0>_>
     ::
     ~TMap<unsigned_int,FPipelineCacheFileFormatPSO,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSO,0>_>
               (longlong *param_1)

{
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSO>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1,0);
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141eb9dd0 ~TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_> body=78 status=ok
// SIG undefined ~TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>(void)

void TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
     ::
     ~TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
               (longlong *param_1)

{
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1,0);
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141eb9e20 FUN_141eb9e20 body=145 status=ok
// SIG undefined FUN_141eb9e20(void)

void FUN_141eb9e20(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if (*(char *)(puVar3 + 2) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000141eb9e53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar3)(puVar3,1);
        return;
      }
      LOCK();
      bVar6 = *(int *)((longlong)puVar3 + 0xc) == 0;
      if (bVar6) {
        *(int *)((longlong)puVar3 + 0xc) = 1;
      }
      UNLOCK();
      if (bVar6) {
        uVar4 = FLockFreeLinkPolicy::AllocLockFreeLink();
        if (uVar4 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = (&DAT_1468a81f8)[uVar4 >> 0xe] + (ulonglong)(uVar4 & 0x3fff) * 0x18;
        }
        *(undefined8 **)(lVar5 + 8) = puVar3;
        FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141eb9ec0 ~TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSO>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=54 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSO>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSO>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSO>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  Empty(param_1,0);
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141eb9f00 ~TSparseArray<TSetElement<TTuple<FGraphicsPipelineStateKey,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=100 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FGraphicsPipelineStateKey,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FGraphicsPipelineStateKey,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FGraphicsPipelineStateKey,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<304,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141eb9f70 ~TSparseArray<TSetElement<TTuple<FString,FGPUProfilerEventNodeStats>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=439 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FString,FGPUProfilerEventNodeStats>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FString,FGPUProfilerEventNodeStats>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FString,FGPUProfilerEventNodeStats>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_58 = 0;
  uStack_54 = 1;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar3 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar4) goto LAB_141eba031;
      uVar3 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
    iVar6 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_44 = (iStack_40 - iVar6) + 0x1f;
    if (iVar2 < iStack_44) {
LAB_141eba031:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      lVar5 = *param_1;
      *(undefined ***)(lVar5 + 0x10 + (longlong)iStack_1c * 0x48) = &PTR_FUN_1440104c8;
      if (*(longlong *)(lVar5 + (longlong)iStack_1c * 0x48) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141eba130 ~FCachedBoundShaderStateLink body=153 status=ok
// SIG undefined ~FCachedBoundShaderStateLink(void)

void FCachedBoundShaderStateLink::~FCachedBoundShaderStateLink(longlong param_1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (*(char *)(param_1 + 0x38) != '\0') {
    local_38 = *(undefined8 *)(param_1 + 8);
    local_30 = *(undefined8 *)(param_1 + 0x10);
    local_28 = *(undefined8 *)(param_1 + 0x18);
    local_20 = *(undefined8 *)(param_1 + 0x20);
    local_18 = *(undefined8 *)(param_1 + 0x28);
    local_10 = *(undefined8 *)(param_1 + 0x30);
    TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*,0>,FDefaultSetAllocator>
    ::Remove(&DAT_1464c9dd0,&local_38);
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x30);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x28);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x20);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x18);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x10);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 8);
  return;
}



// FUNCTION 141eba1d0 ~FPipelineCacheFileFormatTOC body=79 status=ok
// SIG undefined ~FPipelineCacheFileFormatTOC(void)

void FPipelineCacheFileFormatTOC::~FPipelineCacheFileFormatTOC(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty((longlong *)(param_1 + 8),0);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141eba220 ~FRHICommandListBase body=108 status=ok
// SIG undefined ~FRHICommandListBase(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FRHICommandListBase::~FRHICommandListBase(longlong param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    cVar1 = IsInRenderingThread();
    if (((cVar1 != '\0') && (DAT_146ab6e88 == '\0')) && (DAT_146ab6e8c != 0)) {
      FUN_141ec3e80(&DAT_146ab6e68,&DAT_146ab6e78);
    }
    FUN_141ec3e80(&DAT_146ab6e68,param_1);
  }
  LOCK();
  _DAT_146ab6e70 = _DAT_146ab6e70 + -1;
  UNLOCK();
  FUN_14158cb50(param_1 + 0x58);
  FMemStackBase::FreeChunks(param_1 + 0x30,0);
  return;
}



// FUNCTION 141eba290 ~FScopedCommandListWaitForTasks body=116 status=ok
// SIG undefined ~FScopedCommandListWaitForTasks(void)

void FScopedCommandListWaitForTasks::~FScopedCommandListWaitForTasks(longlong *param_1)

{
  longlong lVar1;
  
  if ((char)param_1[1] == '\0') {
    return;
  }
  lVar1 = *param_1;
  if (DAT_146ab6383 != '\0') {
    FRHICommandListBase::WaitForTasks(lVar1,0);
    return;
  }
  if (*(int *)(lVar1 + 0x14) != 0) {
    FUN_141ec3e80(&DAT_146ab6e68,lVar1);
  }
  FUN_141ed93a0(lVar1);
  if (DAT_146ab6383 != '\0') {
    FRHICommandListBase::WaitForRHIThreadTasks(lVar1);
  }
  FRHICommandListBase::WaitForTasks(lVar1,1);
  return;
}



// FUNCTION 141eba310 FUN_141eba310 body=14 status=ok
// SIG undefined FUN_141eba310(void)

void FUN_141eba310(undefined4 param_1)

{
  FUN_141a83b50(&DAT_146ab67d0,param_1);
  return;
}



// FUNCTION 141eba320 FUN_141eba320 body=15 status=ok
// SIG undefined FUN_141eba320(void)

void FUN_141eba320(undefined8 param_1)

{
  FUN_1415b1b00(&DAT_146ab67d0,param_1);
  return;
}



// FUNCTION 141eba330 operator= body=191 status=ok
// SIG undefined operator=(void)

longlong * TRefCountPtr<FRHIComputePipelineState>::operator=(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  
  if (param_1 != param_2) {
    lVar5 = 0;
    puVar3 = (undefined8 *)*param_1;
    *param_1 = *param_2;
    *param_2 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        if (*(char *)(puVar3 + 2) != '\0') {
          (**(code **)*puVar3)(puVar3,1);
          return param_1;
        }
        LOCK();
        bVar6 = *(int *)((longlong)puVar3 + 0xc) == 0;
        if (bVar6) {
          *(int *)((longlong)puVar3 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar6) {
          uVar4 = FLockFreeLinkPolicy::AllocLockFreeLink();
          if (uVar4 != 0) {
            lVar5 = (&DAT_1468a81f8)[uVar4 >> 0xe] + (ulonglong)(uVar4 & 0x3fff) * 0x18;
          }
          *(undefined8 **)(lVar5 + 8) = puVar3;
          FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 141eba3f0 operator= body=372 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
::operator=(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  undefined1 local_res8 [8];
  int local_58;
  uint uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  int local_38;
  undefined4 uStack_34;
  longlong *local_30;
  int iStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  if (param_1 != param_2) {
    Empty(param_1,(int)param_2[1] - *(int *)((longlong)param_2 + 0x34));
    iVar1 = (int)param_2[5];
    puStack_20 = (uint *)(param_2 + 2);
    local_58 = 0;
    uStack_54 = 1;
    uStack_40 = 0;
    local_48._4_4_ = 0;
    if (iVar1 != 0) {
      puVar6 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar6 = puStack_20;
      }
      uVar2 = *puVar6;
      local_58 = 0;
      uStack_40 = 0;
      while (uVar2 == 0) {
        lVar4 = (longlong)local_58;
        uStack_40 = uStack_40 + 0x20;
        iVar5 = local_58 + 1;
        bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar5;
        if (bVar3) goto LAB_141eba4cd;
        uVar2 = puVar6[lVar4 + 1];
      }
      uStack_54 = -uVar2 & uVar2;
      iVar5 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      local_48._4_4_ = (uStack_40 - iVar5) + 0x1f;
      if (iVar1 < local_48._4_4_) {
LAB_141eba4cd:
        local_48._4_4_ = iVar1;
      }
    }
    uStack_18 = 0xffffffff;
    iStack_14 = local_48._4_4_;
    iStack_10 = uStack_40;
    uStack_c = iStack_3c;
    iStack_28 = local_58;
    uStack_24 = uStack_54;
    iVar5 = local_48._4_4_;
    iStack_50 = local_58;
    uStack_4c = uStack_54;
    local_38 = uStack_40;
    uStack_34 = iStack_3c;
    bVar3 = local_48._4_4_ < iVar1;
    local_48 = puStack_20;
    local_30 = param_2;
    uStack_40 = 0xffffffff;
    iStack_3c = iVar5;
    if (bVar3) {
      do {
        Emplace<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_const_&>
                  (param_1,local_res8,(longlong)iStack_3c * 0xa8 + *param_2,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 141eba570 FUN_141eba570 body=199 status=ok
// SIG undefined FUN_141eba570(void)

int * FUN_141eba570(int *param_1,int *param_2)

{
  undefined8 uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  longlong lVar5;
  int *piVar6;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    param_1[0x91] = param_2[0x91];
    if (*param_1 == 0) {
      uVar1 = *(undefined8 *)(param_2 + 3);
      *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
      *(undefined8 *)(param_1 + 3) = uVar1;
      param_1[5] = param_2[5];
    }
    else if (*param_1 == 1) {
      lVar5 = 4;
      piVar2 = param_1 + 6;
      piVar3 = param_2 + 6;
      do {
        piVar6 = piVar3;
        piVar4 = piVar2;
        uVar1 = *(undefined8 *)(piVar6 + 2);
        *(undefined8 *)piVar4 = *(undefined8 *)piVar6;
        *(undefined8 *)(piVar4 + 2) = uVar1;
        uVar1 = *(undefined8 *)(piVar6 + 6);
        *(undefined8 *)(piVar4 + 4) = *(undefined8 *)(piVar6 + 4);
        *(undefined8 *)(piVar4 + 6) = uVar1;
        uVar1 = *(undefined8 *)(piVar6 + 10);
        *(undefined8 *)(piVar4 + 8) = *(undefined8 *)(piVar6 + 8);
        *(undefined8 *)(piVar4 + 10) = uVar1;
        uVar1 = *(undefined8 *)(piVar6 + 0xe);
        *(undefined8 *)(piVar4 + 0xc) = *(undefined8 *)(piVar6 + 0xc);
        *(undefined8 *)(piVar4 + 0xe) = uVar1;
        uVar1 = *(undefined8 *)(piVar6 + 0x12);
        *(undefined8 *)(piVar4 + 0x10) = *(undefined8 *)(piVar6 + 0x10);
        *(undefined8 *)(piVar4 + 0x12) = uVar1;
        uVar1 = *(undefined8 *)(piVar6 + 0x16);
        *(undefined8 *)(piVar4 + 0x14) = *(undefined8 *)(piVar6 + 0x14);
        *(undefined8 *)(piVar4 + 0x16) = uVar1;
        uVar1 = *(undefined8 *)(piVar6 + 0x1a);
        *(undefined8 *)(piVar4 + 0x18) = *(undefined8 *)(piVar6 + 0x18);
        *(undefined8 *)(piVar4 + 0x1a) = uVar1;
        uVar1 = *(undefined8 *)(piVar6 + 0x1e);
        *(undefined8 *)(piVar4 + 0x1c) = *(undefined8 *)(piVar6 + 0x1c);
        *(undefined8 *)(piVar4 + 0x1e) = uVar1;
        lVar5 = lVar5 + -1;
        piVar2 = piVar4 + 0x20;
        piVar3 = piVar6 + 0x20;
      } while (lVar5 != 0);
      uVar1 = *(undefined8 *)(piVar6 + 0x22);
      *(undefined8 *)(piVar4 + 0x20) = *(undefined8 *)(piVar6 + 0x20);
      *(undefined8 *)(piVar4 + 0x22) = uVar1;
      uVar1 = *(undefined8 *)(piVar6 + 0x26);
      *(undefined8 *)(piVar4 + 0x24) = *(undefined8 *)(piVar6 + 0x24);
      *(undefined8 *)(piVar4 + 0x26) = uVar1;
      *(undefined8 *)(piVar4 + 0x28) = *(undefined8 *)(piVar6 + 0x28);
      piVar4[0x2a] = piVar6[0x2a];
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 141eba640 FUN_141eba640 body=463 status=ok
// SIG undefined FUN_141eba640(void)

longlong * FUN_141eba640(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined1 local_28 [16];
  undefined1 *local_18;
  undefined1 **local_10;
  
  puVar1 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,8);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2,8);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 1,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 1,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 1) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,(longlong)param_2 + 0xc,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,(longlong)param_2 + 0xc,4);
    }
  }
  else {
    *(undefined4 *)((longlong)param_2 + 0xc) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar3 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 2,1);
  }
  else {
    *(undefined1 *)(param_2 + 2) = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_28,param_1);
  local_18 = local_28;
  local_10 = &local_18;
  FUN_141661f40(&local_18,(longlong)param_2 + 0x14);
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_28);
  puVar1 = *(undefined8 **)param_1[1];
  if (puVar1 + 1 <= (undefined8 *)((longlong *)param_1[1])[1]) {
    param_2[5] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2 + 5,8);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2 + 5,8);
  }
  return param_1;
}



// FUNCTION 141eba810 FUN_141eba810 body=1990 status=ok
// SIG undefined FUN_141eba810(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_141eba810(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  longlong lVar9;
  int *piVar10;
  undefined1 auStack_178 [32];
  undefined1 local_158 [4];
  int local_154;
  int local_150;
  int local_14c;
  undefined1 local_148 [4];
  undefined2 auStack_144 [126];
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  piVar10 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar10 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2,4);
    }
  }
  else {
    *param_2 = *piVar10;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if (*param_2 == 0) {
    FUN_141661e90(param_1,param_2 + 1);
    if ((int)param_1[0xb] == 9) {
      plVar2 = (longlong *)param_1[1];
      local_150 = 0;
      if ((ulonglong)plVar2[1] < *plVar2 + 4U) {
        (**(code **)(*param_1 + 0x50))(param_1,&local_150,4);
        if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_1,&local_150,4);
        }
      }
      else {
        *plVar2 = *plVar2 + 4;
      }
    }
  }
  else if (*param_2 == 1) {
    FUN_141661e90(param_1,param_2 + 6);
    FUN_141661e90(param_1,param_2 + 0xb);
    FUN_141661e90(param_1,param_2 + 0x10);
    FUN_141661e90(param_1,param_2 + 0x15);
    FUN_141661e90(param_1,param_2 + 0x1a);
    uVar5 = *(uint *)(param_1 + 0xb);
    uVar7 = 0;
    if (uVar5 == 9) {
      lVar9 = 5;
      do {
        plVar2 = (longlong *)param_1[1];
        local_154 = 0;
        if ((int *)plVar2[1] < (int *)*plVar2 + 1) {
          (**(code **)(*param_1 + 0x50))(param_1,&local_154,4);
          if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_1,&local_154,4);
          }
        }
        else {
          local_154 = *(int *)*plVar2;
          *plVar2 = *plVar2 + 4;
        }
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      uVar5 = *(uint *)(param_1 + 0xb);
    }
    piVar10 = param_2 + 0x1f;
    if (uVar5 < 0xb) {
      local_48 = 0;
      FUN_1419de870(param_1,local_148);
      local_158[0] = 0;
      AlgoImpl::
      IntroSortInternal<FVertexElement,FIdentityFunctor,TDereferenceWrapper<FVertexElement,<lambda_0f5dc6ea2be2fbf8df3145a0396f366f>_>_>
                (local_148,(longlong)(int)(uint)local_48,0,local_158);
      iVar1 = param_2[0x5f];
      uVar5 = (uint)local_48;
      lVar9 = (longlong)(int)(uint)local_48;
      iVar6 = (uint)local_48 + iVar1;
      param_2[0x5f] = iVar6;
      if (param_2[0x60] < iVar6) {
        TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(piVar10);
      }
      _guard_xfg_dispatch_icall_nop(piVar10 + (longlong)iVar1 * 2,0,lVar9 << 3);
      if (uVar5 != 0) {
        do {
          lVar9 = (longlong)(int)uVar7;
          uVar7 = uVar7 + 1;
          *(undefined1 *)(param_2 + lVar9 * 2 + 0x1f) = local_148[lVar9 * 8];
          *(undefined1 *)((longlong)param_2 + lVar9 * 8 + 0x7d) = local_148[lVar9 * 8 + 1];
          *(undefined1 *)((longlong)param_2 + lVar9 * 8 + 0x7e) = local_148[lVar9 * 8 + 2];
          *(undefined1 *)((longlong)param_2 + lVar9 * 8 + 0x7f) = local_148[lVar9 * 8 + 3];
          *(undefined2 *)(param_2 + lVar9 * 2 + 0x20) = auStack_144[lVar9 * 4];
          *(undefined2 *)((longlong)param_2 + lVar9 * 8 + 0x82) = auStack_144[lVar9 * 4 + 1];
        } while (uVar7 < uVar5);
      }
    }
    else {
      FUN_1419de870(param_1,piVar10);
    }
    FUN_1419e04e0(param_1,param_2 + 0x61);
    (**(code **)(*param_1 + 8))(param_1,param_2 + 0x6f);
    piVar10 = param_2 + 0x70;
    piVar8 = *(int **)param_1[1];
    if ((int *)((undefined8 *)param_1[1])[1] < piVar8 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,piVar10,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,piVar10,4);
      }
    }
    else {
      *piVar10 = *piVar8;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    piVar10 = *(int **)param_1[1];
    if ((int *)((undefined8 *)param_1[1])[1] < piVar10 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x71,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,param_2 + 0x71,4);
      }
    }
    else {
      param_2[0x71] = *piVar10;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    puVar3 = *(undefined1 **)param_1[1];
    if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x72,1);
    }
    else {
      *(undefined1 *)(param_2 + 0x72) = *puVar3;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    }
    puVar3 = *(undefined1 **)param_1[1];
    if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,(longlong)param_2 + 0x1c9,1);
    }
    else {
      *(undefined1 *)((longlong)param_2 + 0x1c9) = *puVar3;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    }
    (**(code **)(*param_1 + 8))(param_1,(longlong)param_2 + 0x1ca);
    (**(code **)(*param_1 + 8))(param_1,(longlong)param_2 + 0x1cb);
    FUN_1419dbaa0(param_1,param_2 + 0x73);
    piVar10 = param_2 + 0x89;
    lVar9 = 8;
    piVar8 = param_2 + 0x7f;
    do {
      plVar2 = (longlong *)param_1[1];
      local_154 = piVar8[-8];
      if ((int *)plVar2[1] < (int *)*plVar2 + 1) {
        (**(code **)(*param_1 + 0x50))(param_1,&local_154,4);
        if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_1,&local_154,4);
        }
      }
      else {
        local_154 = *(int *)*plVar2;
        *plVar2 = *plVar2 + 4;
      }
      piVar8[-8] = local_154;
      piVar4 = *(int **)param_1[1];
      if ((int *)((undefined8 *)param_1[1])[1] < piVar4 + 1) {
        (**(code **)(*param_1 + 0x50))(param_1,piVar8,4);
        if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_1,piVar8,4);
        }
      }
      else {
        *piVar8 = *piVar4;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
      puVar3 = *(undefined1 **)param_1[1];
      if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
        (**(code **)(*param_1 + 0x50))(param_1,piVar10 + -2,1);
      }
      else {
        *(undefined1 *)(piVar10 + -2) = *puVar3;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
      }
      puVar3 = *(undefined1 **)param_1[1];
      if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
        (**(code **)(*param_1 + 0x50))(param_1,piVar10,1);
      }
      else {
        *(undefined1 *)piVar10 = *puVar3;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
      }
      piVar8 = piVar8 + 1;
      piVar10 = (int *)((longlong)piVar10 + 1);
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    piVar10 = *(int **)param_1[1];
    if ((int *)((undefined8 *)param_1[1])[1] < piVar10 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x8b,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,param_2 + 0x8b,4);
      }
    }
    else {
      param_2[0x8b] = *piVar10;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    piVar10 = *(int **)param_1[1];
    if ((int *)((undefined8 *)param_1[1])[1] < piVar10 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x8c,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,param_2 + 0x8c,4);
      }
    }
    else {
      param_2[0x8c] = *piVar10;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    plVar2 = (longlong *)param_1[1];
    local_14c = param_2[0x90];
    if ((int *)plVar2[1] < (int *)*plVar2 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,&local_14c,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,&local_14c,4);
      }
    }
    else {
      local_14c = *(int *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    param_2[0x90] = local_14c;
    plVar2 = (longlong *)param_1[1];
    local_150 = param_2[0x8d];
    if ((int *)plVar2[1] < (int *)*plVar2 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,&local_150,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,&local_150,4);
      }
    }
    else {
      local_150 = *(int *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    param_2[0x8d] = local_150;
    piVar10 = *(int **)param_1[1];
    if ((int *)((undefined8 *)param_1[1])[1] < piVar10 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x8e,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,param_2 + 0x8e,4);
      }
    }
    else {
      param_2[0x8e] = *piVar10;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    puVar3 = *(undefined1 **)param_1[1];
    if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x8f,1);
    }
    else {
      *(undefined1 *)(param_2 + 0x8f) = *puVar3;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    }
    puVar3 = *(undefined1 **)param_1[1];
    if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,(longlong)param_2 + 0x23d,1);
    }
    else {
      *(undefined1 *)((longlong)param_2 + 0x23d) = *puVar3;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    }
    puVar3 = *(undefined1 **)param_1[1];
    if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,(longlong)param_2 + 0x23e,1);
    }
    else {
      *(undefined1 *)((longlong)param_2 + 0x23e) = *puVar3;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    }
    puVar3 = *(undefined1 **)param_1[1];
    if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,(undefined1 *)((longlong)param_2 + 0x23f),1);
    }
    else {
      *(undefined1 *)((longlong)param_2 + 0x23f) = *puVar3;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    }
  }
  return param_1;
}



// FUNCTION 141ebafe0 FUN_141ebafe0 body=801 status=ok
// SIG undefined FUN_141ebafe0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_141ebafe0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [16];
  undefined1 *local_88;
  undefined1 **local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  int local_44;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  puVar1 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,8);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2,8);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  puVar1 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 1,8);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 1,8);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_98,param_1);
  local_88 = local_98;
  local_80 = &local_88;
  FUN_141661f40(&local_88,param_2 + 2);
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_98);
  FUN_1404c11e0(param_1,param_2 + 4);
  FUN_1404c11e0(param_1,param_2 + 5);
  puVar1 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 6,8);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 6,8);
    }
  }
  else {
    param_2[6] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  FUN_1404c11e0(param_1,param_2 + 7);
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 8,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 8) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if (*(uint *)(param_1 + 0xb) == 9) {
    local_48 = 0xffffffff;
    local_78 = 0;
    local_70 = 0;
    local_58 = 0;
    local_50 = 0;
    local_44 = 0;
    local_38 = 0;
    local_30 = 0;
    FUN_1419de9e0(param_1,&local_78);
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      if (local_38 != 0) {
        local_38 = FMemory::Realloc(local_38,0,0);
      }
      uVar7 = (int)local_70 - local_44;
      if (uVar7 < 4) {
        local_30 = 1;
      }
      else {
        uVar4 = (uVar7 >> 1) + 8;
        iVar3 = 0x1f;
        if (uVar4 != 0) {
          for (; uVar4 >> iVar3 == 0; iVar3 = iVar3 + -1) {
          }
        }
        iVar6 = 0x20;
        if (uVar4 != 0) {
          iVar6 = 0x1f - iVar3;
        }
        uVar4 = (uVar7 >> 1) + 7;
        iVar3 = 0x1f;
        if (uVar4 != 0) {
          for (; uVar4 >> iVar3 == 0; iVar3 = iVar3 + -1) {
          }
        }
        if (uVar4 == 0) {
          local_30 = 1;
        }
        else {
          local_30 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar3) & 0x1f)
          ;
        }
      }
      if (0 < (int)uVar7) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(&local_78);
      }
    }
    local_30 = 0;
    if (local_38 != 0) {
      FMemory::Free(local_38);
    }
    TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_78);
  }
  else if ((9 < *(uint *)(param_1 + 0xb)) &&
          (FUN_141ebb780(param_1,param_2 + 9), (*(byte *)(param_1 + 5) & 1) != 0)) {
    if (param_2[0x11] != 0) {
      uVar5 = FMemory::Realloc(param_2[0x11],0,0);
      param_2[0x11] = uVar5;
    }
    *(undefined4 *)(param_2 + 0x12) = 0;
    TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::ConditionalRehash
              (param_2 + 9,*(int *)(param_2 + 10) - *(int *)((longlong)param_2 + 0x7c),0);
  }
  return param_1;
}



// FUNCTION 141ebb310 FUN_141ebb310 body=165 status=ok
// SIG undefined FUN_141ebb310(void)

longlong * FUN_141ebb310(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2,4);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_141ebb3c0(param_1,param_2 + 2);
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    if (*(longlong *)(param_2 + 0x12) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_2 + 0x12),0,0);
      *(undefined8 *)(param_2 + 0x12) = uVar2;
    }
    param_2[0x14] = 0;
    TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
    ::ConditionalRehash(param_2 + 2,param_2[4] - param_2[0xf],0);
  }
  return param_1;
}



// FUNCTION 141ebb3c0 FUN_141ebb3c0 body=952 status=ok
// SIG undefined FUN_141ebb3c0(void)

longlong * FUN_141ebb3c0(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  int local_res8 [2];
  longlong *local_58;
  undefined1 local_50 [4];
  uint local_4c;
  longlong local_48;
  uint local_40;
  int local_3c;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0xa8,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xa8);
  iVar3 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar4 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) << 2);
  plVar7 = (longlong *)param_1[1];
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    if ((int *)plVar7[1] < (int *)*plVar7 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(int *)*plVar7;
      *plVar7 = *plVar7 + 4;
    }
    TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
              (&local_58,param_2);
    if (local_3c < *(int *)(local_48 + 0x18)) {
      do {
        puVar2 = *(undefined4 **)param_1[1];
        puVar8 = (undefined4 *)((longlong)local_3c * 0xa8 + *local_58);
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
          (**(code **)(*param_1 + 0x50))(param_1,puVar8,4);
          if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_1,puVar8,4);
          }
        }
        else {
          *puVar8 = *puVar2;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        FUN_141ebafe0(param_1,puVar8 + 2);
        local_40 = local_40 & ~local_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_50);
      } while (local_3c < *(int *)(local_48 + 0x18));
    }
    return param_1;
  }
  iVar3 = 0;
  local_res8[0] = 0;
  if ((int *)plVar7[1] < (int *)*plVar7 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar7;
    *plVar7 = *plVar7 + 4;
  }
  TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_2,local_res8[0]);
  if (0 < local_res8[0]) {
    do {
      if (*(int *)((longlong)param_2 + 0x34) == 0) {
        iVar4 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar4 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
          TArray<FGeometryCacheMeshData,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(param_2 + 2,0,1);
      }
      else {
        iVar4 = (int)param_2[6];
        iVar5 = *(int *)((longlong)param_2 + 0x34) + -1;
        iVar6 = *(int *)((longlong)iVar4 * 0xa8 + 4 + *param_2);
        *(int *)(param_2 + 6) = iVar6;
        *(int *)((longlong)param_2 + 0x34) = iVar5;
        if (iVar5 != 0) {
          *(undefined4 *)((longlong)iVar6 * 0xa8 + *param_2) = 0xffffffff;
        }
      }
      plVar7 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar7 = param_2 + 2;
      }
      iVar6 = iVar4;
      if (iVar4 < 0) {
        iVar6 = iVar4 + 0x1f;
      }
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar4 & 0x1f);
      puVar8 = (undefined4 *)((longlong)iVar4 * 0xa8 + *param_2);
      *puVar8 = 0;
      *(undefined8 *)(puVar8 + 2) = 0;
      *(undefined8 *)(puVar8 + 6) = 0;
      *(undefined8 *)(puVar8 + 8) = 0;
      *(undefined8 *)(puVar8 + 10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0xc) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0xe) = 0;
      *(undefined8 *)(puVar8 + 0x10) = 0;
      puVar8[0x12] = 0;
      *(undefined8 *)(puVar8 + 0x14) = 0;
      *(undefined8 *)(puVar8 + 0x16) = 0;
      *(undefined8 *)(puVar8 + 0x1c) = 0;
      *(undefined8 *)(puVar8 + 0x1e) = 0;
      puVar8[0x20] = 0xffffffff;
      puVar8[0x21] = 0;
      *(undefined8 *)(puVar8 + 0x24) = 0;
      puVar8[0x26] = 0;
      puVar8[0x28] = 0xffffffff;
      puVar2 = *(undefined4 **)param_1[1];
      if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
        (**(code **)(*param_1 + 0x50))(param_1,puVar8,4);
        if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_1,puVar8,4);
        }
      }
      else {
        *puVar8 = *puVar2;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
      FUN_141ebafe0(param_1,puVar8 + 2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 141ebb780 FUN_141ebb780 body=708 status=ok
// SIG undefined FUN_141ebb780(void)

longlong * FUN_141ebb780(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  int local_res8 [2];
  longlong *local_48;
  undefined1 local_40 [4];
  uint local_3c;
  longlong local_38;
  uint local_30;
  int local_2c;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x1c,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x1c);
  plVar1 = param_2 + 2;
  iVar3 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar4 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) << 2);
  plVar8 = (longlong *)param_1[1];
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    iVar3 = 0;
    local_res8[0] = 0;
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
    iVar4 = local_res8[0];
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeTo
                (param_2,local_res8[0]);
    }
    *(undefined4 *)(param_2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 5) = 0;
    uVar5 = iVar4 + 0x1f + (iVar4 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
    if (*(uint *)((longlong)param_2 + 0x2c) != uVar5) {
      *(uint *)((longlong)param_2 + 0x2c) = uVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(plVar1,0);
    }
    if (0 < local_res8[0]) {
      do {
        if (*(int *)((longlong)param_2 + 0x34) == 0) {
          iVar4 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar4 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::
            ResizeGrow(param_2,iVar4);
          }
          TBitArray<FDefaultBitArrayAllocator>::Add(plVar1,0,1);
        }
        else {
          iVar4 = (int)param_2[6];
          iVar6 = *(int *)((longlong)param_2 + 0x34) + -1;
          iVar7 = *(int *)((longlong)iVar4 * 0x1c + 4 + *param_2);
          *(int *)(param_2 + 6) = iVar7;
          *(int *)((longlong)param_2 + 0x34) = iVar6;
          if (iVar6 != 0) {
            *(undefined4 *)((longlong)iVar7 * 0x1c + *param_2) = 0xffffffff;
          }
        }
        plVar8 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        iVar7 = iVar4;
        if (iVar4 < 0) {
          iVar7 = iVar4 + 0x1f;
        }
        puVar2 = (uint *)((longlong)plVar8 + (longlong)(iVar7 >> 5) * 4);
        *puVar2 = *puVar2 | 1 << ((byte)iVar4 & 0x1f);
        puVar9 = (undefined8 *)((longlong)iVar4 * 0x1c + *param_2);
        *puVar9 = 0;
        puVar9[1] = 0;
        *(undefined4 *)(puVar9 + 2) = 0;
        *(undefined4 *)((longlong)puVar9 + 0x14) = 0xffffffff;
        FUN_141661e90(param_1);
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_res8[0]);
    }
    return param_1;
  }
  local_res8[0] = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
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
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_48,param_2);
  if (local_2c < *(int *)(local_38 + 0x18)) {
    do {
      FUN_141661e90(param_1,(longlong)local_2c * 0x1c + *local_48);
      local_30 = local_30 & ~local_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_40);
    } while (local_2c < *(int *)(local_38 + 0x18));
  }
  return param_1;
}



// FUNCTION 141ebba50 operator== body=86 status=ok
// SIG undefined operator==(void)

ulonglong FMultiInt<6>::operator==(uint *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  param_2 = param_2 - (longlong)param_1;
  puVar3 = param_1;
  do {
    uVar2 = *puVar3;
    uVar1 = *(uint *)(param_2 + (longlong)puVar3);
    if (uVar2 >= uVar1 && uVar2 != uVar1) goto LAB_141ebba9e;
    uVar4 = 0;
    if (uVar2 < uVar1) break;
    uVar5 = uVar5 + 1;
    puVar3 = puVar3 + 1;
    uVar4 = 0;
  } while (uVar5 < 6);
  do {
    uVar5 = *(uint *)((longlong)param_1 + param_2);
    puVar3 = (uint *)(ulonglong)uVar5;
    if (*param_1 < uVar5) {
LAB_141ebba9e:
      return (ulonglong)puVar3 & 0xffffffffffffff00;
    }
    if (uVar5 < *param_1) break;
    uVar4 = uVar4 + 1;
    param_1 = param_1 + 1;
  } while (uVar4 < 6);
  return CONCAT71((uint7)(uint3)(uVar5 >> 8),1);
}



// FUNCTION 141ebbab0 FUN_141ebbab0 body=725 status=ok
// SIG undefined FUN_141ebbab0(void)

ulonglong FUN_141ebbab0(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  uint *puVar2;
  char *pcVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar1 = *param_2;
  if (((((*param_1 == uVar1) && (uVar1 = param_2[1], param_1[1] == uVar1)) &&
       (uVar1 = param_2[4], param_1[4] == uVar1)) &&
      (((uVar1 = param_2[5], param_1[5] == uVar1 && (uVar1 = param_2[3], param_1[3] == uVar1)) &&
       ((uVar1 = param_2[2], param_1[2] == uVar1 &&
        ((uVar1 = param_2[6], param_1[6] == uVar1 && (uVar1 = param_2[7], param_1[7] == uVar1)))))))
      ) && ((uVar1 = param_2[8], param_1[8] == uVar1 &&
            (((uVar1 = 0, (char)param_1[9] == (char)param_2[9] &&
              (uVar1 = (ulonglong)*(uint *)((longlong)param_2 + 0x4c),
              *(uint *)((longlong)param_1 + 0x4c) == *(uint *)((longlong)param_2 + 0x4c))) &&
             (uVar1 = (ulonglong)(uint)param_2[10], (uint)param_1[10] == (uint)param_2[10])))))) {
    uVar4 = 0;
    puVar2 = (uint *)((longlong)param_1 + 0x54);
    uVar6 = 0;
    lVar5 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = (ulonglong)*(uint *)(lVar5 + (longlong)puVar2);
      if (*puVar2 != *(uint *)(lVar5 + (longlong)puVar2)) goto LAB_141ebbd82;
      uVar6 = uVar6 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar6 < 8);
    uVar6 = 0;
    puVar2 = (uint *)((longlong)param_1 + 0x74);
    do {
      uVar1 = (ulonglong)*(uint *)(lVar5 + (longlong)puVar2);
      if (*puVar2 != *(uint *)(lVar5 + (longlong)puVar2)) goto LAB_141ebbd82;
      uVar6 = uVar6 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar6 < 8);
    uVar6 = 0;
    pcVar3 = (char *)((longlong)param_1 + 0x94);
    do {
      uVar1 = 0;
      if (*pcVar3 != pcVar3[lVar5]) goto LAB_141ebbd82;
      uVar6 = uVar6 + 1;
      pcVar3 = pcVar3 + 1;
    } while (uVar6 < 8);
    pcVar3 = (char *)((longlong)param_1 + 0x9c);
    do {
      uVar1 = 0;
      if (*pcVar3 != pcVar3[lVar5]) goto LAB_141ebbd82;
      uVar4 = uVar4 + 1;
      pcVar3 = pcVar3 + 1;
    } while (uVar4 < 8);
    uVar1 = (ulonglong)*(uint *)((longlong)param_2 + 0xa4);
    if ((((*(uint *)((longlong)param_1 + 0xa4) == *(uint *)((longlong)param_2 + 0xa4)) &&
         (uVar1 = (ulonglong)(uint)param_2[0x15], (uint)param_1[0x15] == (uint)param_2[0x15])) &&
        ((((uVar1 = 0, *(char *)((longlong)param_1 + 0xac) == *(char *)((longlong)param_2 + 0xac) &&
           ((uVar1 = 0, *(char *)((longlong)param_1 + 0xad) == *(char *)((longlong)param_2 + 0xad)
            && (uVar1 = 0,
               *(char *)((longlong)param_1 + 0xae) == *(char *)((longlong)param_2 + 0xae))))) &&
          (uVar1 = 0, *(char *)((longlong)param_1 + 0xaf) == *(char *)((longlong)param_2 + 0xaf)))
         && ((((uVar1 = (ulonglong)(uint)param_2[0x16], (uint)param_1[0x16] == (uint)param_2[0x16]
               && (uVar1 = (ulonglong)*(ushort *)((longlong)param_2 + 0xb4),
                  *(ushort *)((longlong)param_1 + 0xb4) == *(ushort *)((longlong)param_2 + 0xb4)))
              && (uVar1 = param_1[0x17], uVar1 == param_2[0x17])) &&
             ((uVar1 = param_1[0x18], uVar1 == param_2[0x18] &&
              (uVar1 = (ulonglong)(uint)param_1[0x19], (uint)param_1[0x19] == (uint)param_2[0x19])))
             ))))) &&
       (((uVar1 = *(ulonglong *)((longlong)param_1 + 0xcc),
         uVar1 == *(ulonglong *)((longlong)param_2 + 0xcc) &&
         ((uVar1 = *(ulonglong *)((longlong)param_1 + 0xd4),
          uVar1 == *(ulonglong *)((longlong)param_2 + 0xd4) &&
          (uVar1 = (ulonglong)*(uint *)((longlong)param_1 + 0xdc),
          *(uint *)((longlong)param_1 + 0xdc) == *(uint *)((longlong)param_2 + 0xdc))))) &&
        ((uVar1 = param_1[0x1c], uVar1 == param_2[0x1c] &&
         ((((uVar1 = param_1[0x1d], uVar1 == param_2[0x1d] &&
            (uVar1 = (ulonglong)(uint)param_1[0x1e], (uint)param_1[0x1e] == (uint)param_2[0x1e])) &&
           (uVar1 = *(ulonglong *)((longlong)param_1 + 0xf4),
           uVar1 == *(ulonglong *)((longlong)param_2 + 0xf4))) &&
          (((uVar1 = *(ulonglong *)((longlong)param_1 + 0xfc),
            uVar1 == *(ulonglong *)((longlong)param_2 + 0xfc) &&
            (uVar1 = (ulonglong)*(uint *)((longlong)param_1 + 0x104),
            *(uint *)((longlong)param_1 + 0x104) == *(uint *)((longlong)param_2 + 0x104))) &&
           ((uVar1 = param_1[0x21], uVar1 == param_2[0x21] &&
            (uVar1 = param_1[0x22], uVar1 == param_2[0x22])))))))))))) {
      uVar4 = (uint)param_1[0x23];
      uVar1 = (ulonglong)uVar4;
      if (uVar4 == (uint)param_2[0x23]) {
        return CONCAT71((uint7)(uint3)(uVar4 >> 8),1);
      }
    }
  }
LAB_141ebbd82:
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 141ebbd90 FUN_141ebbd90 body=814 status=ok
// SIG undefined FUN_141ebbd90(void)

bool FUN_141ebbd90(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  if (param_1 == param_2) {
    return true;
  }
  if (*param_1 == 0) {
    lVar3 = *(longlong *)(param_1 + 1) - *(longlong *)(param_2 + 1);
    if ((lVar3 == 0) &&
       (lVar3 = *(longlong *)(param_1 + 3) - *(longlong *)(param_2 + 3), lVar3 == 0)) {
      lVar3 = (ulonglong)(uint)param_1[5] - (ulonglong)(uint)param_2[5];
    }
    return lVar3 == 0;
  }
  if (*param_1 != 1) {
    return false;
  }
  uVar5 = param_2[0x5f];
  uVar1 = param_1[0x5f];
  bVar6 = uVar1 == uVar5;
  uVar4 = 0;
  if ((int)uVar1 <= (int)uVar5) {
    uVar5 = uVar1;
  }
  if (uVar5 != 0) {
    do {
      lVar3 = (longlong)(int)uVar4;
      uVar4 = uVar4 + 1;
      bVar6 = (bool)(bVar6 & *(longlong *)(param_1 + lVar3 * 2 + 0x1f) ==
                             *(longlong *)(param_2 + lVar3 * 2 + 0x1f));
    } while (uVar4 < uVar5);
  }
  if (((((((((param_1[0x90] == param_2[0x90]) &&
            (*(longlong *)(param_1 + 6) == *(longlong *)(param_2 + 6))) &&
           (*(longlong *)(param_1 + 8) == *(longlong *)(param_2 + 8))) &&
          ((param_1[10] == param_2[10] &&
           (*(longlong *)(param_1 + 0xb) == *(longlong *)(param_2 + 0xb))))) &&
         ((*(longlong *)(param_1 + 0xd) == *(longlong *)(param_2 + 0xd) &&
          ((param_1[0xf] == param_2[0xf] &&
           (*(longlong *)(param_1 + 0x10) == *(longlong *)(param_2 + 0x10))))))) &&
        (*(longlong *)(param_1 + 0x12) == *(longlong *)(param_2 + 0x12))) &&
       ((((param_1[0x14] == param_2[0x14] &&
          (*(longlong *)(param_1 + 0x15) == *(longlong *)(param_2 + 0x15))) &&
         (*(longlong *)(param_1 + 0x17) == *(longlong *)(param_2 + 0x17))) &&
        (((param_1[0x19] == param_2[0x19] &&
          (*(longlong *)(param_1 + 0x1a) == *(longlong *)(param_2 + 0x1a))) &&
         ((*(longlong *)(param_1 + 0x1c) == *(longlong *)(param_2 + 0x1c) &&
          ((param_1[0x1e] == param_2[0x1e] && (param_1[0x8b] == param_2[0x8b])))))))))) &&
      ((param_1[0x8c] == param_2[0x8c] &&
       (((param_1[0x8d] == param_2[0x8d] && (param_1[0x8e] == param_2[0x8e])) &&
        ((char)param_1[0x8f] == (char)param_2[0x8f])))))) &&
     ((((*(char *)((longlong)param_1 + 0x23e) == *(char *)((longlong)param_2 + 0x23e) &&
        (*(char *)((longlong)param_1 + 0x23d) == *(char *)((longlong)param_2 + 0x23d))) &&
       (((*(char *)((longlong)param_1 + 0x23f) == *(char *)((longlong)param_2 + 0x23f) &&
         ((iVar2 = _guard_xfg_dispatch_icall_nop(param_1 + 0x61,param_2 + 0x61,0x39), iVar2 == 0 &&
          (*(longlong *)(param_1 + 0x70) == *(longlong *)(param_2 + 0x70))))) &&
        (param_1[0x72] == param_2[0x72])))) &&
      (((((*(longlong *)(param_1 + 0x73) == *(longlong *)(param_2 + 0x73) &&
          (param_1[0x75] == param_2[0x75])) && ((short)param_1[0x76] == (short)param_2[0x76])) &&
        ((iVar2 = _guard_xfg_dispatch_icall_nop(param_1 + 0x77,param_2 + 0x77,0x20), iVar2 == 0 &&
         (iVar2 = _guard_xfg_dispatch_icall_nop(param_1 + 0x7f,param_2 + 0x7f,0x20), iVar2 == 0))))
       && ((*(longlong *)(param_1 + 0x87) == *(longlong *)(param_2 + 0x87) &&
           (*(longlong *)(param_1 + 0x89) == *(longlong *)(param_2 + 0x89))))))))) {
    return bVar6;
  }
  return false;
}



// FUNCTION 141ebc0c0 FUN_141ebc0c0 body=122 status=ok
// SIG undefined FUN_141ebc0c0(void)

void FUN_141ebc0c0(undefined4 *param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *local_18;
  int local_10;
  
  plVar2 = DAT_146ac39f0;
  uVar1 = *param_1;
  uVar3 = (**(code **)(*DAT_146ac39f0 + 0x18))(DAT_146ac39f0);
  FString::PrintfImpl(&local_18,&DAT_143f3edc0,uVar1);
  puVar4 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar4 = local_18;
  }
  (**(code **)(*plVar2 + 0x60))(plVar2,puVar4,uVar3 & 0xff000000);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141ebc140 FUN_141ebc140 body=220 status=ok
// SIG undefined FUN_141ebc140(void)

undefined8 FUN_141ebc140(longlong param_1,double param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar3 = *(longlong *)(param_1 + 8);
  plVar4 = *(longlong **)(lVar3 + 0x28);
  plVar5 = *(longlong **)(lVar3 + 0x20);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (param_2 < 0.0) {
    if (*(char *)((longlong)plVar5 + 0x71) == '\0') goto LAB_141ebc178;
    if (param_2 < 0.0) goto LAB_141ebc1ce;
  }
  if ((*(char *)((longlong)plVar5 + 0x71) != '\0') ||
     ((**(code **)(*plVar5 + 8))(plVar5,(float)param_2), *(char *)((longlong)plVar5 + 0x71) != '\0')
     ) {
LAB_141ebc1ce:
    *(undefined1 *)(lVar3 + 0x1c) = 1;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    return 1;
  }
LAB_141ebc178:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return 0;
}



// FUNCTION 141ebc220 FUN_141ebc220 body=68 status=ok
// SIG undefined FUN_141ebc220(void)

undefined8 * FUN_141ebc220(undefined8 *param_1,ulonglong param_2)

{
  param_1[1] = &PTR_FUN_144edb360;
  LOCK();
  DAT_146ab67c8 = DAT_146ab67c8 + -1;
  UNLOCK();
  LOCK();
  DAT_146ab67cc = DAT_146ab67cc + 1;
  UNLOCK();
  *param_1 = &PTR__purecall_143f9a338;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 141ebc270 FUN_141ebc270 body=43 status=ok
// SIG undefined FUN_141ebc270(void)

undefined8 * FUN_141ebc270(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 141ebc2a0 `scalar_deleting_destructor' body=100 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGraphTask<FCompilePipelineStateTask>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__144edb368;
  if (param_1[0x1b] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x1b] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 141ebc310 FUN_141ebc310 body=97 status=ok
// SIG undefined FUN_141ebc310(void)

undefined8 * FUN_141ebc310(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144edb3b0;
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



// FUNCTION 141ebc380 FUN_141ebc380 body=97 status=ok
// SIG undefined FUN_141ebc380(void)

undefined8 * FUN_141ebc380(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144edb3a0;
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



// FUNCTION 141ebc3f0 FUN_141ebc3f0 body=97 status=ok
// SIG undefined FUN_141ebc3f0(void)

undefined8 * FUN_141ebc3f0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144edb400;
  if (param_1[7] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[7] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 141ebc460 FUN_141ebc460 body=97 status=ok
// SIG undefined FUN_141ebc460(void)

undefined8 * FUN_141ebc460(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144edb410;
  if (param_1[7] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[7] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 141ebc4d0 FUN_141ebc4d0 body=57 status=ok
// SIG undefined FUN_141ebc4d0(void)

undefined8 * FUN_141ebc4d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144edb360;
  LOCK();
  DAT_146ab67c8 = DAT_146ab67c8 + -1;
  UNLOCK();
  LOCK();
  DAT_146ab67cc = DAT_146ab67cc + 1;
  UNLOCK();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 141ebc510 `scalar_deleting_destructor' body=241 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FComputePipelineState::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  
  puVar3 = (undefined8 *)param_1[3];
  *param_1 = &PTR__scalar_deleting_destructor__144edb340;
  LOCK();
  piVar1 = (int *)(puVar3 + 1);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if (*(char *)(puVar3 + 2) == '\0') {
      LOCK();
      bVar6 = *(int *)((longlong)puVar3 + 0xc) == 0;
      if (bVar6) {
        *(int *)((longlong)puVar3 + 0xc) = 1;
      }
      UNLOCK();
      if (bVar6) {
        uVar4 = FLockFreeLinkPolicy::AllocLockFreeLink();
        if (uVar4 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = (&DAT_1468a81f8)[uVar4 >> 0xe] + (ulonglong)(uVar4 & 0x3fff) * 0x18;
        }
        *(undefined8 **)(lVar5 + 8) = puVar3;
        FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
      }
    }
    else {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  FUN_141eb9e20(param_1 + 4);
  *param_1 = &PTR__scalar_deleting_destructor__144edb330;
  if (param_1[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[1] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141ebc610 `scalar_deleting_destructor' body=96 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FGraphicsPipelineState::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 3);
  *param_1 = &PTR__scalar_deleting_destructor__144edb330;
  if (param_1[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[1] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141ebc670 `scalar_deleting_destructor' body=341 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong * FPipelineCacheFile::_scalar_deleting_destructor_(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_1[0x23] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)param_1[0x22];
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
  plVar4 = (longlong *)param_1[0x20];
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
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x11,0);
  if (param_1[0x15] != 0) {
    FMemory::Free();
  }
  if (param_1[0x11] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 6,0);
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x128);
  }
  return param_1;
}



// FUNCTION 141ebc7d0 `scalar_deleting_destructor' body=87 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FPipelineState::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__144edb330;
  if (param_1[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[1] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 141ebc830 FUN_141ebc830 body=43 status=ok
// SIG undefined FUN_141ebc830(void)

undefined8 * FUN_141ebc830(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144edb4b0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141ebc860 `scalar_deleting_destructor' body=76 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FRHIFrameFlipTrackingRunnable::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TArray<FRHIFrameFlipTrackingRunnable::FFramePair,FDefaultAllocator>::
  ~TArray<FRHIFrameFlipTrackingRunnable::FFramePair,FDefaultAllocator>(param_1 + 6);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  *param_1 = &PTR_IsPromotedBuild_143f60558;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141ebc8b0 FUN_141ebc8b0 body=59 status=ok
// SIG undefined FUN_141ebc8b0(void)

void FUN_141ebc8b0(longlong *param_1)

{
  undefined1 local_res10 [24];
  
  FCompilePipelineStateTask::DoTask(param_1 + 2,0xff,local_res10);
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141ebc8e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 141ebc8f0 AddToCache body=162 status=ok
// SIG undefined AddToCache(void)

void FCachedBoundShaderStateLink_Threadsafe::AddToCache(longlong param_1)

{
  BOOL BVar1;
  undefined1 local_res8 [8];
  longlong local_res10 [3];
  undefined8 *local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab63b0);
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab63b0);
  }
  local_38 = *(undefined8 *)(param_1 + 8);
  local_30 = *(undefined8 *)(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x18);
  local_20 = *(undefined8 *)(param_1 + 0x20);
  local_18 = *(undefined8 *)(param_1 + 0x28);
  local_10 = *(undefined8 *)(param_1 + 0x30);
  local_48 = &local_38;
  local_40 = local_res10;
  local_res10[0] = param_1;
  FUN_141eb54c0(&DAT_1464c9e20,local_res8,&local_48,0);
                    /* WARNING: Could not recover jumptable at 0x000141ebc98b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab63b0);
  return;
}



// FUNCTION 141ebc9a0 FUN_141ebc9a0 body=219 status=ok
// SIG undefined FUN_141ebc9a0(void)

int * FUN_141ebc9a0(longlong *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar4 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar4 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
      FUN_141ed30e0(param_1,iVar4);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar4 = (int)param_1[6];
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar3 = *(int *)((longlong)iVar4 * 0x254 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x254 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar4 & 0x1f);
  *(longlong *)(param_2 + 2) = (longlong)iVar4 * 0x254 + *param_1;
  return param_2;
}



// FUNCTION 141ebca80 AddUninitialized body=219 status=ok
// SIG undefined AddUninitialized(void)

int * TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::AddUninitialized(longlong *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar4 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar4 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
      TArray<FGeometryCacheMeshData,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar4 = (int)param_1[6];
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar3 = *(int *)((longlong)iVar4 * 0xa8 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0xa8 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar4 & 0x1f);
  *(longlong *)(param_2 + 2) = (longlong)iVar4 * 0xa8 + *param_1;
  return param_2;
}



// FUNCTION 141ebcb60 ApplyLock body=168 status=ok
// SIG undefined ApplyLock(void)

uint TDiscardableKeyValueCache<FRHIComputeShader_*,FComputePipelineState_*>::ApplyLock
               (PSRWLOCK param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = param_3 >> 1;
  if (((param_2 >> 1 & 1) == 0) || (((uVar1 & 1) == 0 && ((param_3 & 1) == 0)))) {
    if (((param_2 & 1) == 0) || (((param_3 & 1) == 0 || ((uVar1 & 1) != 0)))) {
      if ((param_2 >> 1 & 1) == 0) {
        if ((param_2 & 1) != 0) {
          ReleaseSRWLockShared(param_1);
        }
      }
      else {
        ReleaseSRWLockExclusive(param_1);
      }
      if ((uVar1 & 1) == 0) {
        if ((param_3 & 1) != 0) {
          AcquireSRWLockShared(param_1);
        }
      }
      else {
        AcquireSRWLockExclusive(param_1);
      }
    }
    else {
      param_3 = 1;
    }
  }
  else {
    param_3 = 2;
  }
  return param_3;
}



// FUNCTION 141ebcc10 FUN_141ebcc10 body=171 status=ok
// SIG undefined FUN_141ebcc10(void)

undefined8
FUN_141ebcc10(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined8 param_9)

{
  if (*(int *)(param_3 + 0x14) != 0) {
    FUN_141ec3e80(&DAT_146ab6e68,param_3);
  }
  FUN_141ed93a0(param_3);
  if (DAT_146ab6383 != '\0') {
    FRHICommandListBase::WaitForRHIThreadTasks(param_3);
  }
  FRHICommandListBase::WaitForTasks(param_3,1);
  (**(code **)(*DAT_146ab6358 + 0x280))
            (DAT_146ab6358,param_2,param_4,param_5,param_6,param_7,param_8,param_9);
  return param_2;
}



// FUNCTION 141ebccc0 AsyncReallocateTexture2D_RenderThread body=160 status=ok
// SIG undefined AsyncReallocateTexture2D_RenderThread(void)

undefined8
FDynamicRHI::AsyncReallocateTexture2D_RenderThread
          (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  if (*(int *)(param_3 + 0x14) != 0) {
    FUN_141ec3e80(&DAT_146ab6e68,param_3);
  }
  FUN_141ed93a0(param_3);
  if (DAT_146ab6383 != '\0') {
    FRHICommandListBase::WaitForRHIThreadTasks(param_3);
  }
  FRHICommandListBase::WaitForTasks(param_3,1);
  (**(code **)(*DAT_146ab6358 + 0x268))
            (DAT_146ab6358,param_2,param_4,param_5,param_6,param_7,param_8);
  return param_2;
}



// FUNCTION 141ebcd60 FUN_141ebcd60 body=47 status=ok
// SIG undefined FUN_141ebcd60(void)

void FUN_141ebcd60(undefined8 *param_1)

{
  undefined1 uVar1;
  
  if (0 < *(int *)(param_1 + 1)) {
    uVar1 = FString::ToBool(*param_1);
                    /* WARNING: Could not recover jumptable at 0x000141ebcd83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_146ab6358 + 0x6e0))(DAT_146ab6358,uVar1);
    return;
  }
  return;
}



// FUNCTION 141ebcd90 BeginDrawingViewport body=233 status=ok
// SIG undefined BeginDrawingViewport(void)

void FRHICommandList::BeginDrawingViewport(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar1 = puVar2 + 4;
  if (*(undefined8 **)(param_1 + 0x38) < puVar1) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x28);
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar1 = puVar2 + 4;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar1;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar2;
  *(undefined8 **)(param_1 + 8) = puVar2 + 1;
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_144edb030;
  puVar2[2] = param_2;
  puVar2[3] = param_3;
  if (DAT_146ab6383 == '\0') {
    if (DAT_146ab6e8c != 0) {
      FUN_141ec3e80(&DAT_146ab6e68,&DAT_146ab6e78);
    }
    FUN_141ed93a0(&DAT_146ab6e78);
    if (DAT_146ab6383 != '\0') {
      FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
    }
    FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
  }
  return;
}



// FUNCTION 141ebce80 BeginFrame body=199 status=ok
// SIG undefined BeginFrame(void)

void FRHICommandList::BeginFrame(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar1 = puVar2 + 2;
  if (*(undefined8 **)(param_1 + 0x38) < puVar1) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x18);
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar1 = puVar2 + 2;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar1;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar2;
  *(undefined8 **)(param_1 + 8) = puVar2 + 1;
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_144edb010;
  if (DAT_146ab6383 == '\0') {
    if (DAT_146ab6e8c != 0) {
      FUN_141ec3e80(&DAT_146ab6e68,&DAT_146ab6e78);
    }
    FUN_141ed93a0(&DAT_146ab6e78);
    if (DAT_146ab6383 != '\0') {
      FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
    }
    FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
  }
  return;
}



// FUNCTION 141ebcf50 BeginFrame body=199 status=ok
// SIG undefined BeginFrame(void)

void FRHICommandList::BeginFrame(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar1 = puVar2 + 2;
  if (*(undefined8 **)(param_1 + 0x38) < puVar1) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x18);
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar1 = puVar2 + 2;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar1;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar2;
  *(undefined8 **)(param_1 + 8) = puVar2 + 1;
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_144edaff0;
  if (DAT_146ab6383 == '\0') {
    if (DAT_146ab6e8c != 0) {
      FUN_141ec3e80(&DAT_146ab6e68,&DAT_146ab6e78);
    }
    FUN_141ed93a0(&DAT_146ab6e78);
    if (DAT_146ab6383 != '\0') {
      FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
    }
    FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
  }
  return;
}



// FUNCTION 141ebd020 FUN_141ebd020 body=194 status=ok
// SIG undefined FUN_141ebd020(void)

longlong *
FUN_141ebd020(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
             undefined4 param_5,undefined8 *param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(param_4 + 0x3c) * 4);
  iVar2 = *(int *)(param_6 + 3);
  iVar11 = *(int *)((longlong)param_6 + 0x1c) * iVar2 * iVar1;
  iVar9 = *(int *)(param_6 + 4) * iVar11;
  lVar10 = FMemory::Malloc(iVar9,0);
  uVar4 = *param_6;
  uVar5 = param_6[1];
  uVar6 = param_6[2];
  uVar7 = param_6[3];
  param_2[7] = lVar10;
  uVar8 = DAT_1464aaa90;
  *(undefined8 *)((longlong)param_2 + 0xc) = uVar4;
  *(undefined8 *)((longlong)param_2 + 0x14) = uVar5;
  *(undefined4 *)(param_2 + 1) = param_5;
  uVar3 = *(undefined4 *)(param_6 + 4);
  *(undefined8 *)((longlong)param_2 + 0x1c) = uVar6;
  *(undefined8 *)((longlong)param_2 + 0x24) = uVar7;
  *param_2 = param_4;
  *(int *)((longlong)param_2 + 0x34) = iVar11;
  *(int *)(param_2 + 8) = iVar9;
  *(undefined4 *)((longlong)param_2 + 0x44) = uVar8;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar3;
  *(int *)(param_2 + 6) = iVar2 * iVar1;
  return param_2;
}



// FUNCTION 141ebd0f0 FUN_141ebd0f0 body=700 status=ok
// SIG undefined FUN_141ebd0f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141ebd0f0(int param_1,longlong param_2)

{
  char cVar1;
  undefined *puVar2;
  longlong *plVar3;
  undefined1 auStack_2b8 [32];
  int local_298 [2];
  int local_290;
  int local_28c;
  undefined4 local_288;
  undefined1 local_284 [4];
  undefined1 local_280 [8];
  int *local_278;
  undefined4 *local_270;
  longlong local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 uStack_258;
  undefined1 local_250 [556];
  undefined4 local_24;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  local_298[0] = param_1;
  cVar1 = FUN_141ec9f60();
  if ((cVar1 != '\0') &&
     ((cVar1 = FUN_141ecac10(), cVar1 != '\0' || (cVar1 = FUN_141ed2e90(), cVar1 != '\0')))) {
    AcquireSRWLockShared((PSRWLOCK)&DAT_146ab66c8);
    if (DAT_146ab6360 != 0) {
      if (DAT_1464c9e78 != DAT_1464c9ea4) {
        puVar2 = DAT_1464c9eb0;
        if (DAT_1464c9eb0 == (undefined *)0x0) {
          puVar2 = &DAT_1464c9ea8;
        }
        for (local_290 = *(int *)(puVar2 + ((longlong)DAT_1464c9eb8 - 1U & (longlong)local_298[0]) *
                                           4); local_290 != -1;
            local_290 = *(int *)(DAT_1464c9e70 + 8 + (longlong)local_290 * 0x10)) {
          if (*(int *)(DAT_1464c9e70 + (longlong)local_290 * 0x10) == local_298[0])
          goto LAB_141ebd1ca;
        }
      }
      local_290 = -1;
LAB_141ebd1ca:
      if (local_290 == -1) {
        ReleaseSRWLockShared((PSRWLOCK)&DAT_146ab66c8);
        AcquireSRWLockExclusive((PSRWLOCK)&DAT_146ab66c8);
        if (DAT_1464c9e78 != DAT_1464c9ea4) {
          puVar2 = DAT_1464c9eb0;
          if (DAT_1464c9eb0 == (undefined *)0x0) {
            puVar2 = &DAT_1464c9ea8;
          }
          for (local_28c = *(int *)(puVar2 + ((longlong)DAT_1464c9eb8 - 1U & (longlong)local_298[0])
                                             * 4); local_28c != -1;
              local_28c = *(int *)(DAT_1464c9e70 + 8 + (longlong)local_28c * 0x10)) {
            if (*(int *)(DAT_1464c9e70 + (longlong)local_28c * 0x10) == local_298[0])
            goto LAB_141ebd24d;
          }
        }
        local_28c = -1;
LAB_141ebd24d:
        if (local_28c == -1) {
          FUN_141eb9bb0(local_250);
          uStack_260 = *(undefined4 *)(param_2 + 0x1c);
          uStack_25c = *(undefined4 *)(param_2 + 0x20);
          uStack_258 = *(undefined8 *)(param_2 + 0x24);
          local_268 = (ulonglong)*(uint *)(param_2 + 0x18) << 0x20;
          local_24 = 0;
          local_288 = FUN_141ec8950(&local_268);
          local_278 = local_298;
          local_270 = &local_288;
          FUN_141e56730(&DAT_1464c9e70,local_284,&local_278,0);
          cVar1 = FPipelineCacheFile::IsPSOEntryCached(DAT_146ab6360,&local_268);
          if (cVar1 == '\0') {
            cVar1 = FUN_141ecac10();
            if (cVar1 != '\0') {
              FUN_141eb4fa0(&DAT_1464c9f10,local_280,&local_268,0);
            }
            DAT_146ab6368 = DAT_146ab6368 + 1;
            cVar1 = FUN_141ed2e90();
            if ((cVar1 != '\0') &&
               (plVar3 = DAT_1464c9f60, DAT_1464c9f60 != DAT_1464c9f60 + (longlong)DAT_1464c9f68 * 2
               )) {
              while (((int)plVar3[1] == 0 || (*plVar3 == 0))) {
                plVar3 = plVar3 + 2;
                if (plVar3 == DAT_1464c9f60 + (longlong)DAT_1464c9f68 * 2) {
                  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_146ab66c8);
                  return;
                }
              }
              TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast
                        (&DAT_1464c9f60,&local_268);
            }
          }
        }
        ReleaseSRWLockExclusive((PSRWLOCK)&DAT_146ab66c8);
        return;
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)&DAT_146ab66c8);
  }
  return;
}



// FUNCTION 141ebd3b0 FUN_141ebd3b0 body=697 status=ok
// SIG undefined FUN_141ebd3b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141ebd3b0(int param_1,undefined8 param_2)

{
  char cVar1;
  undefined *puVar2;
  longlong *plVar3;
  undefined1 auStack_2b8 [32];
  int local_298 [2];
  int local_290;
  int local_28c;
  undefined4 local_288;
  undefined1 local_284 [4];
  undefined1 local_280 [8];
  int *local_278;
  undefined4 *local_270;
  undefined1 local_268 [4];
  undefined8 local_264;
  undefined8 local_25c;
  undefined4 local_254;
  undefined1 local_250 [556];
  undefined4 local_24;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  local_298[0] = param_1;
  cVar1 = FUN_141ec9f60();
  if ((cVar1 != '\0') &&
     ((cVar1 = FUN_141ecac10(), cVar1 != '\0' || (cVar1 = FUN_141ed2e90(), cVar1 != '\0')))) {
    AcquireSRWLockShared((PSRWLOCK)&DAT_146ab66c8);
    if (DAT_146ab6360 != 0) {
      if (DAT_1464c9e78 != DAT_1464c9ea4) {
        puVar2 = DAT_1464c9eb0;
        if (DAT_1464c9eb0 == (undefined *)0x0) {
          puVar2 = &DAT_1464c9ea8;
        }
        for (local_290 = *(int *)(puVar2 + ((longlong)DAT_1464c9eb8 - 1U & (longlong)local_298[0]) *
                                           4); local_290 != -1;
            local_290 = *(int *)(DAT_1464c9e70 + 8 + (longlong)local_290 * 0x10)) {
          if (*(int *)(DAT_1464c9e70 + (longlong)local_290 * 0x10) == local_298[0])
          goto LAB_141ebd48a;
        }
      }
      local_290 = -1;
LAB_141ebd48a:
      if (local_290 == -1) {
        ReleaseSRWLockShared((PSRWLOCK)&DAT_146ab66c8);
        AcquireSRWLockExclusive((PSRWLOCK)&DAT_146ab66c8);
        if (DAT_1464c9e78 != DAT_1464c9ea4) {
          puVar2 = DAT_1464c9eb0;
          if (DAT_1464c9eb0 == (undefined *)0x0) {
            puVar2 = &DAT_1464c9ea8;
          }
          for (local_28c = *(int *)(puVar2 + ((longlong)DAT_1464c9eb8 - 1U & (longlong)local_298[0])
                                             * 4); local_28c != -1;
              local_28c = *(int *)(DAT_1464c9e70 + 8 + (longlong)local_28c * 0x10)) {
            if (*(int *)(DAT_1464c9e70 + (longlong)local_28c * 0x10) == local_298[0])
            goto LAB_141ebd50d;
          }
        }
        local_28c = -1;
LAB_141ebd50d:
        if (local_28c == -1) {
          local_264 = 0;
          local_25c = 0;
          local_254 = 0;
          FUN_141eb9bb0(local_250);
          local_24 = 0;
          FUN_141ec95e0(local_268,param_2);
          local_288 = FUN_141ec8950(local_268);
          local_278 = local_298;
          local_270 = &local_288;
          FUN_141e56730(&DAT_1464c9e70,local_284,&local_278,0);
          cVar1 = FPipelineCacheFile::IsPSOEntryCached(DAT_146ab6360,local_268);
          if (cVar1 == '\0') {
            cVar1 = FUN_141ecac10();
            if (cVar1 != '\0') {
              FUN_141eb4fa0(&DAT_1464c9f10,local_280,local_268,0);
            }
            DAT_146ab6368 = DAT_146ab6368 + 1;
            cVar1 = FUN_141ed2e90();
            if ((cVar1 != '\0') &&
               (plVar3 = DAT_1464c9f60, DAT_1464c9f60 != DAT_1464c9f60 + (longlong)DAT_1464c9f68 * 2
               )) {
              while (((int)plVar3[1] == 0 || (*plVar3 == 0))) {
                plVar3 = plVar3 + 2;
                if (plVar3 == DAT_1464c9f60 + (longlong)DAT_1464c9f68 * 2) {
                  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_146ab66c8);
                  return;
                }
              }
              TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(&DAT_1464c9f60,local_268)
              ;
            }
          }
        }
        ReleaseSRWLockExclusive((PSRWLOCK)&DAT_146ab66c8);
        return;
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)&DAT_146ab66c8);
  }
  return;
}



// FUNCTION 141ebd680 FUN_141ebd680 body=9 status=ok
// SIG undefined FUN_141ebd680(void)

void FUN_141ebd680(undefined8 param_1,undefined8 *param_2)

{
  FUN_141ebc140(param_1,*param_2);
  return;
}



// FUNCTION 141ebd690 FUN_141ebd690 body=127 status=ok
// SIG undefined FUN_141ebd690(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_141ebd690(undefined8 param_1,longlong param_2,undefined8 param_3,undefined1 param_4)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar3 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_2);
    if (cVar1 != '\0') {
      lVar3 = param_2;
    }
  }
  uVar2 = (**(code **)(*DAT_146ab6358 + 0x290))(DAT_146ab6358,param_3,param_4);
  if (lVar3 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 141ebd710 CancelAsyncReallocateTexture2D_RenderThread body=127 status=ok
// SIG undefined CancelAsyncReallocateTexture2D_RenderThread(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FDynamicRHI::CancelAsyncReallocateTexture2D_RenderThread
                    (undefined8 param_1,longlong param_2,undefined8 param_3,undefined1 param_4)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar3 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_2);
    if (cVar1 != '\0') {
      lVar3 = param_2;
    }
  }
  uVar2 = (**(code **)(*DAT_146ab6358 + 0x278))(DAT_146ab6358,param_3,param_4);
  if (lVar3 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 141ebd790 ClosePipelineFileCache body=644 status=ok
// SIG undefined ClosePipelineFileCache(void)

void FPipelineFileCache::ClosePipelineFileCache(void)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined *puVar7;
  ulonglong uVar8;
  uint *puVar9;
  ulonglong uVar10;
  int iVar11;
  int local_78;
  uint uStack_74;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  int iStack_28;
  uint uStack_24;
  undefined *local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  cVar3 = FUN_141ec9f60();
  if (cVar3 != '\0') {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_146ab66c8);
    if (DAT_146ab6360 != 0) {
      FPipelineCacheFile::_scalar_deleting_destructor_(DAT_146ab6360,1);
      DAT_146ab6360 = 0;
      local_78 = 0;
      uStack_74 = 1;
      iStack_64 = 0;
      iStack_60 = 0;
      iVar11 = (int)DAT_1464c9ee8;
      if (iVar11 != 0) {
        puVar9 = DAT_1464c9ee0;
        if (DAT_1464c9ee0 == (uint *)0x0) {
          puVar9 = (uint *)&DAT_1464c9ed0;
        }
        uVar1 = *puVar9;
        local_78 = 0;
        while (uVar1 == 0) {
          lVar6 = (longlong)local_78;
          iStack_60 = iStack_60 + 0x20;
          iVar4 = local_78 + 1;
          bVar2 = (int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
          local_78 = iVar4;
          if (bVar2) goto LAB_141ebd8b2;
          uVar1 = puVar9[lVar6 + 1];
        }
        uStack_74 = -uVar1 & uVar1;
        iVar4 = 0x1f;
        if (uStack_74 != 0) {
          for (; uStack_74 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        if (uStack_74 == 0) {
          iVar4 = 0x20;
        }
        else {
          iVar4 = 0x1f - iVar4;
        }
        iStack_64 = (iStack_60 - iVar4) + 0x1f;
        if (iVar11 < iStack_64) {
LAB_141ebd8b2:
          iStack_64 = iVar11;
        }
      }
      uStack_18 = CONCAT44(iStack_64,0xffffffff);
      local_10 = CONCAT44(uStack_5c,iStack_60);
      iStack_28 = local_78;
      uStack_24 = uStack_74;
      local_20 = &DAT_1464c9ed0;
      while( true ) {
        if ((uStack_18._4_4_ == iVar11) && (local_20 == &DAT_1464c9ed0)) break;
        lVar6 = DAT_1464c9ec0 + (longlong)uStack_18._4_4_ * 0x18;
        LOCK();
        *(undefined8 *)(*(longlong *)(lVar6 + 8) + 0x18) = 0xffffffffffffffff;
        UNLOCK();
        LOCK();
        **(undefined8 **)(lVar6 + 8) = 0xffffffffffffffff;
        UNLOCK();
        LOCK();
        *(undefined8 *)(*(longlong *)(lVar6 + 8) + 8) = 0xffffffffffffffff;
        UNLOCK();
        uStack_18 = CONCAT44(uStack_18._4_4_,(uint)uStack_18 & ~uStack_24);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_28);
      }
      TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Empty
                (&DAT_1464c9e70);
      TSparseArray<TSetElement<FPipelineCacheFileFormatPSO>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(&DAT_1464c9f10);
      if (0 < (int)DAT_1464c9f58) {
        uVar8 = 0;
        uVar10 = (ulonglong)DAT_1464c9f58;
        do {
          puVar7 = DAT_1464c9f50;
          if (DAT_1464c9f50 == (undefined *)0x0) {
            puVar7 = &DAT_1464c9f48;
          }
          uVar5 = (longlong)(int)(DAT_1464c9f58 - 1) & uVar8;
          uVar8 = uVar8 + 1;
          *(undefined4 *)(puVar7 + uVar5 * 4) = 0xffffffff;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      DAT_146ab6368 = 0;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_146ab66c8);
  }
  return;
}



// FUNCTION 141ebda30 Compact body=424 status=ok
// SIG undefined Compact(void)

ulonglong TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::Compact(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  ulonglong in_RAX;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  
  iVar2 = *(int *)((longlong)param_1 + 0x34);
  if (iVar2 != 0) {
    iVar3 = (int)param_1[1];
    uVar13 = 0;
    iVar8 = (int)param_1[6];
    lVar5 = *param_1;
    iVar14 = iVar3 - iVar2;
    iVar12 = iVar3;
    if (iVar8 != -1) {
      do {
        iVar4 = *(int *)((longlong)iVar8 * 0xa8 + 4 + *param_1);
        iVar11 = iVar12;
        if (iVar8 < iVar14) {
          bVar6 = (byte)iVar12 & 0x1f;
          uVar10 = 1 << bVar6 | 1U >> 0x20 - bVar6;
          plVar9 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar9 = param_1 + 2;
          }
          do {
            iVar11 = iVar12 + -1;
            uVar10 = uVar10 >> 1 | (uint)((uVar10 & 1) != 0) << 0x1f;
            iVar7 = iVar11;
            if (iVar11 < 0) {
              iVar7 = iVar12 + 0x1e;
            }
            iVar12 = iVar11;
          } while ((*(uint *)((longlong)plVar9 + (longlong)(iVar7 >> 5) * 4) & uVar10) == 0);
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar8 * 0xa8 + lVar5),
                     (void *)((longlong)iVar11 * 0xa8 + lVar5),0xa8);
          plVar9 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar9 = param_1 + 2;
          }
          iVar12 = iVar8;
          if (iVar8 < 0) {
            iVar12 = iVar8 + 0x1f;
          }
          uVar13 = 1;
          puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
        }
        iVar12 = iVar11;
        iVar8 = iVar4;
      } while (iVar4 != -1);
      iVar12 = (int)param_1[1];
    }
    iVar8 = (iVar12 - iVar14) - iVar2;
    if (iVar8 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar14 * 0xa8 + *param_1),
                 (void *)((longlong)iVar3 * 0xa8 + *param_1),(longlong)iVar8 * 0xa8);
      iVar12 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar12 - iVar2;
    FUN_1416c54a0(param_1);
    TBitArray<FDefaultBitArrayAllocator>::RemoveAt(param_1 + 2,iVar14,iVar2);
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    return uVar13;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141ebdbe0 Compact body=429 status=ok
// SIG undefined Compact(void)

ulonglong TSparseArray<TSetElement<TTuple<FString,FGPUProfilerEventNodeStats>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::Compact(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  ulonglong in_RAX;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  
  iVar2 = *(int *)((longlong)param_1 + 0x34);
  if (iVar2 != 0) {
    iVar3 = (int)param_1[1];
    uVar13 = 0;
    iVar8 = (int)param_1[6];
    lVar5 = *param_1;
    iVar14 = iVar3 - iVar2;
    iVar12 = iVar3;
    if (iVar8 != -1) {
      do {
        iVar4 = *(int *)((longlong)iVar8 * 0x48 + 4 + *param_1);
        iVar11 = iVar12;
        if (iVar8 < iVar14) {
          bVar6 = (byte)iVar12 & 0x1f;
          uVar10 = 1 << bVar6 | 1U >> 0x20 - bVar6;
          plVar9 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar9 = param_1 + 2;
          }
          do {
            iVar11 = iVar12 + -1;
            uVar10 = uVar10 >> 1 | (uint)((uVar10 & 1) != 0) << 0x1f;
            iVar7 = iVar11;
            if (iVar11 < 0) {
              iVar7 = iVar12 + 0x1e;
            }
            iVar12 = iVar11;
          } while ((*(uint *)((longlong)plVar9 + (longlong)(iVar7 >> 5) * 4) & uVar10) == 0);
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar8 * 0x48 + lVar5),
                     (void *)((longlong)iVar11 * 0x48 + lVar5),0x48);
          plVar9 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar9 = param_1 + 2;
          }
          iVar12 = iVar8;
          if (iVar8 < 0) {
            iVar12 = iVar8 + 0x1f;
          }
          uVar13 = 1;
          puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
        }
        iVar12 = iVar11;
        iVar8 = iVar4;
      } while (iVar4 != -1);
      iVar12 = (int)param_1[1];
    }
    iVar8 = (iVar12 - iVar14) - iVar2;
    if (iVar8 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)iVar14 * 0x48),
                 (void *)(*param_1 + (longlong)iVar3 * 0x48),(longlong)iVar8 * 0x48);
      iVar12 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar12 - iVar2;
    TArray<FMiniMapEntry,FDefaultAllocator>::ResizeShrink(param_1);
    TBitArray<FDefaultBitArrayAllocator>::RemoveAt(param_1 + 2,iVar14,iVar2);
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    return uVar13;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141ebdd90 FUN_141ebdd90 body=161 status=ok
// SIG undefined FUN_141ebdd90(void)

undefined8 FUN_141ebdd90(longlong param_1,uint param_2,char param_3)

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
      FUN_141ed1960(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141ebde40 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
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



// FUNCTION 141ebdef0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*,0>,FDefaultSetAllocator>
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



// FUNCTION 141ebdfa0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FGraphicsPipelineStateKey,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateKey,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
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



// FUNCTION 141ebe050 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FString,FGPUProfilerEventNodeStats>,TDefaultMapHashableKeyFuncs<FString,FGPUProfilerEventNodeStats,0>,FDefaultSetAllocator>
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



// FUNCTION 141ebe100 FUN_141ebe100 body=161 status=ok
// SIG undefined FUN_141ebe100(void)

undefined8 FUN_141ebe100(longlong param_1,uint param_2,char param_3)

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
      FUN_141ed23d0(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141ebe1b0 ConsolidateThreadedCaches body=798 status=ok
// SIG undefined ConsolidateThreadedCaches(void)

void TSharedPipelineStateCache<FGraphicsPipelineStateKey,FGraphicsPipelineState_*>::
     ConsolidateThreadedCaches(longlong param_1)

{
  ulonglong *puVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  ulonglong uVar9;
  longlong *plVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 *puVar14;
  uint *puVar15;
  ulonglong uVar16;
  longlong *plVar17;
  int local_res8 [2];
  int local_res10;
  undefined1 local_res20 [8];
  int local_118;
  uint uStack_114;
  int iStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f0;
  uint *local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  longlong *local_c8;
  char local_c0;
  char cStack_bf;
  ulonglong local_b8;
  undefined8 *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined8 uStack_98;
  uint *puStack_90;
  undefined1 auStack_88 [16];
  undefined1 local_58 [16];
  
  uVar16 = 0;
  plVar17 = *(longlong **)(param_1 + 0xf0);
  uVar9 = (longlong)*(int *)(param_1 + 0xf8) & 0x1fffffffffffffff;
  if (plVar17 + *(int *)(param_1 + 0xf8) < plVar17) {
    uVar9 = uVar16;
  }
  local_b8 = uVar9;
  if (uVar9 != 0) {
    do {
      plVar6 = (longlong *)*plVar17;
      iVar4 = (int)plVar6[5];
      local_e8 = (uint *)(plVar6 + 2);
      local_118 = 0;
      uStack_114 = 1;
      iStack_104 = 0;
      iStack_100 = 0;
      if (iVar4 != 0) {
        puVar15 = (uint *)plVar6[4];
        if ((uint *)plVar6[4] == (uint *)0x0) {
          puVar15 = local_e8;
        }
        uVar5 = *puVar15;
        iStack_100 = 0;
        local_118 = 0;
        while (uVar5 == 0) {
          lVar13 = (longlong)local_118;
          iStack_100 = iStack_100 + 0x20;
          iVar11 = local_118 + 1;
          bVar8 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_118;
          local_118 = iVar11;
          if (bVar8) goto LAB_141ebe2c7;
          uVar5 = puVar15[lVar13 + 1];
        }
        uStack_114 = -uVar5 & uVar5;
        local_res10 = 0x1f;
        if (uStack_114 != 0) {
          for (; uStack_114 >> local_res10 == 0; local_res10 = local_res10 + -1) {
          }
        }
        if (uStack_114 == 0) {
          iVar11 = 0x20;
        }
        else {
          iVar11 = 0x1f - local_res10;
        }
        iStack_104 = (iStack_100 - iVar11) + 0x1f;
        if (iVar4 < iStack_104) {
LAB_141ebe2c7:
          iStack_104 = iVar4;
        }
      }
      uStack_e0 = CONCAT44(iStack_104,0xffffffff);
      auStack_88._8_4_ = iStack_100;
      auStack_88._0_8_ = uStack_e0;
      auStack_88._12_4_ = uStack_fc;
      uStack_f0 = CONCAT44(uStack_114,local_118);
      local_c0 = '\0';
      cStack_bf = '\0';
      local_58._8_4_ = SUB84(plVar6,0);
      local_58._12_4_ = (undefined4)((ulonglong)plVar6 >> 0x20);
      local_d8._8_4_ = local_58._8_4_;
      local_d8._0_8_ = auStack_88._8_8_;
      local_d8._12_4_ = local_58._12_4_;
      local_58._0_8_ = auStack_88._8_8_;
      if (iStack_104 < iVar4) {
        local_c8 = plVar6;
        local_a0 = plVar6;
        uStack_98 = uStack_f0;
        puStack_90 = local_e8;
        do {
          puVar14 = (undefined8 *)((longlong)uStack_e0._4_4_ * 0x130 + *plVar6);
          plVar3 = puVar14 + 0x24;
          if (*(longlong *)(*plVar3 + 8) == 0) {
LAB_141ebe36c:
            lVar13 = *(longlong *)(*plVar3 + 8);
            *(undefined8 *)(*plVar3 + 8) = 0;
            if (lVar13 != 0) {
              LOCK();
              piVar2 = (int *)(lVar13 + 0x48);
              iVar4 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                FGraphEvent::Recycle();
              }
            }
            TSet<TTuple<FGraphicsPipelineStateKey,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateKey,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
            ::Remove(*(undefined8 *)(param_1 + 0x10),puVar14);
            plVar7 = *(longlong **)(param_1 + 8);
            TSet<TTuple<FGraphicsPipelineStateKey,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateKey,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
            ::FindId(plVar7,local_res8,puVar14);
            plVar10 = (longlong *)0x0;
            if (local_res8[0] != -1) {
              plVar10 = (longlong *)((longlong)local_res8[0] * 0x130 + *plVar7);
            }
            plVar12 = plVar10 + 0x24;
            if (plVar10 == (longlong *)0x0) {
              plVar12 = (longlong *)0x0;
            }
            if (plVar12 == (longlong *)0x0) {
              local_b0 = puVar14;
              local_a8 = plVar3;
              FUN_141eb5a30(plVar7,local_res20,&local_b0,0);
            }
            else if (*plVar12 != *plVar3) {
              *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
              iVar4 = *(int *)(param_1 + 0xc0);
              *(int *)(param_1 + 0xc0) = iVar4 + 1;
              if (*(int *)(param_1 + 0xc4) < iVar4 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                          (param_1 + 0xb8,iVar4);
              }
              *(longlong *)(*(longlong *)(param_1 + 0xb8) + (longlong)iVar4 * 8) = *plVar3;
            }
            TSet<TTuple<FGraphicsPipelineStateKey,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateKey,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
            ::Remove(local_d8._8_8_,uStack_e0._4_4_);
            local_c0 = '\x01';
          }
          else {
            puVar1 = (ulonglong *)(*(longlong *)(*plVar3 + 8) + 8);
            LOCK();
            uVar9 = *puVar1;
            if (uVar9 == 0) {
              *puVar1 = 0;
              uVar9 = 0;
            }
            UNLOCK();
            if ((uVar9 >> 0x1a & 1) != 0) goto LAB_141ebe36c;
          }
          uStack_e0 = CONCAT44(uStack_e0._4_4_,(uint)uStack_e0 & ~uStack_f0._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_f0);
          uVar9 = local_b8;
        } while (uStack_e0._4_4_ < (int)local_e8[6]);
        if ((local_c0 != '\0') && (cStack_bf != '\0')) {
          TSet<TTuple<FGraphicsPipelineStateKey,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateKey,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(local_c8,(int)local_c8[1] - *(int *)((longlong)local_c8 + 0x34),1);
        }
      }
      plVar17 = plVar17 + 1;
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar9);
  }
  return;
}



// FUNCTION 141ebe4d0 FUN_141ebe4d0 body=356 status=ok
// SIG undefined FUN_141ebe4d0(void)

void FUN_141ebe4d0(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  int iVar5;
  undefined8 *puVar6;
  byte bVar7;
  longlong lVar8;
  int iVar9;
  undefined4 local_18;
  undefined4 uStack_14;
  uint uStack_10;
  
  iVar5 = 0;
  pbVar4 = (byte *)(param_1 + 0x15);
  iVar9 = 0;
  lVar8 = param_2 - param_1;
  do {
    if (*(longlong *)(pbVar4 + -0x15) == 0) break;
    *(longlong *)(pbVar4 + lVar8 + -0x15) = *(longlong *)(pbVar4 + -0x15);
    bVar1 = *pbVar4;
    pbVar4[lVar8 + -5] = bVar1 >> 2;
    pbVar4[lVar8 + -4] = *pbVar4 & 3;
    *(undefined4 *)(pbVar4 + lVar8 + -9) = *(undefined4 *)(pbVar4 + -5);
    *(uint *)(pbVar4 + lVar8 + -0xd) = (uint)pbVar4[-1];
    *(int *)(param_2 + 0xc0) = *(int *)(param_2 + 0xc0) + 1;
    iVar9 = iVar9 + 1;
    *(byte *)(param_2 + 0xc4) = *(byte *)(param_2 + 0xc4) | bVar1 >> 2 == 2;
    pbVar4 = pbVar4 + 0x18;
  } while (iVar9 < 8);
  bVar1 = *(byte *)(param_1 + 0xd0);
  uVar3 = *(undefined8 *)(param_1 + 0xc0);
  uVar2 = *(undefined4 *)(param_1 + 0xd4);
  bVar7 = (bVar1 & 0xf) >> 2;
  *(bool *)(param_2 + 0x1a0) = bVar1 >> 6 == 2;
  uStack_10 = CONCAT13(bVar1,CONCAT12(bVar7,CONCAT11(bVar1 >> 4,bVar1 >> 6))) & 0x3ff03ff;
  local_18 = (undefined4)uVar3;
  uStack_14 = (undefined4)((ulonglong)uVar3 >> 0x20);
  *(bool *)(param_2 + 0x1a1) = bVar7 == 2;
  *(undefined4 *)(param_2 + 400) = local_18;
  *(undefined4 *)(param_2 + 0x194) = uStack_14;
  *(uint *)(param_2 + 0x198) = uStack_10;
  *(undefined4 *)(param_2 + 0x19c) = uVar2;
  if (0 < *(int *)(param_1 + 0x114)) {
    *(undefined4 *)(param_2 + 0xc0) = *(undefined4 *)(param_1 + 0x110);
    iVar9 = *(int *)(param_1 + 0x114);
    if (0 < iVar9) {
      puVar6 = (undefined8 *)(param_1 + 0x118);
      do {
        TRefCountPtr<FRHITexture>::operator=(param_2 + ((longlong)iVar5 + 0x35) * 8,*puVar6);
        iVar9 = *(int *)(param_1 + 0x114);
        puVar6 = puVar6 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar9);
    }
    *(int *)(param_2 + 0x1e8) = iVar9;
  }
  return;
}



// FUNCTION 141ebe640 FUN_141ebe640 body=54 status=ok
// SIG undefined FUN_141ebe640(void)

void FUN_141ebe640(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144edb4f8;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    return;
  }
  return;
}



// FUNCTION 141ebe680 FUN_141ebe680 body=138 status=ok
// SIG undefined FUN_141ebe680(void)

undefined8 *
FUN_141ebe680(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  
  (**(code **)(*param_1 + 0x4f0))();
  uVar1 = (**(code **)(*param_1 + 0x4f8))(param_1,param_3,*param_2,0,param_5,1,param_7);
  *param_8 = uVar1;
  return param_2;
}



// FUNCTION 141ebe710 FUN_141ebe710 body=127 status=ok
// SIG undefined FUN_141ebe710(void)

undefined8 *
FUN_141ebe710(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  
  (**(code **)(*param_1 + 0x490))();
  uVar1 = (**(code **)(*param_1 + 0x4b0))
                    (param_1,param_3,*param_2,0,param_4,CONCAT44(param_6._4_4_,1));
  *param_7 = uVar1;
  return param_2;
}



// FUNCTION 141ebe790 CreateComputeShader_RenderThread body=124 status=ok
// SIG undefined CreateComputeShader_RenderThread(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FDynamicRHI::CreateComputeShader_RenderThread
          (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_3);
    if (cVar1 != '\0') {
      lVar2 = param_3;
    }
  }
  (**(code **)(*DAT_146ab6358 + 0xc0))(DAT_146ab6358,param_2,param_4);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ebe810 CreateComputeShader_RenderThread body=149 status=ok
// SIG undefined CreateComputeShader_RenderThread(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FDynamicRHI::CreateComputeShader_RenderThread
          (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
          undefined4 *param_5)

{
  char cVar1;
  longlong lVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_3);
    if (cVar1 != '\0') {
      lVar2 = param_3;
    }
  }
  local_28 = *param_5;
  uStack_24 = param_5[1];
  uStack_20 = param_5[2];
  uStack_1c = param_5[3];
  local_18 = param_5[4];
  (**(code **)(*DAT_146ab6358 + 0xb8))(DAT_146ab6358,param_2,param_4,&local_28);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ebe8b0 CreateDomainShader_RenderThread body=124 status=ok
// SIG undefined CreateDomainShader_RenderThread(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FDynamicRHI::CreateDomainShader_RenderThread
          (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_3);
    if (cVar1 != '\0') {
      lVar2 = param_3;
    }
  }
  (**(code **)(*DAT_146ab6358 + 0x88))(DAT_146ab6358,param_2,param_4);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ebe930 CreateDomainShader_RenderThread body=149 status=ok
// SIG undefined CreateDomainShader_RenderThread(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FDynamicRHI::CreateDomainShader_RenderThread
          (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
          undefined4 *param_5)

{
  char cVar1;
  longlong lVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_3);
    if (cVar1 != '\0') {
      lVar2 = param_3;
    }
  }
  local_28 = *param_5;
  uStack_24 = param_5[1];
  uStack_20 = param_5[2];
  uStack_1c = param_5[3];
  local_18 = param_5[4];
  (**(code **)(*DAT_146ab6358 + 0x80))(DAT_146ab6358,param_2,param_4,&local_28);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ebe9d0 CreateGeometryShaderWithStreamOutput_RenderThread body=162 status=ok
// SIG undefined CreateGeometryShaderWithStreamOutput_RenderThread(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FDynamicRHI::CreateGeometryShaderWithStreamOutput_RenderThread
          (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
          undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_3);
    if (cVar1 != '\0') {
      lVar2 = param_3;
    }
  }
  (**(code **)(*DAT_146ab6358 + 0xa8))
            (DAT_146ab6358,param_2,param_4,param_5,param_6,param_7,param_8);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ebea80 CreateGeometryShaderWithStreamOutput_RenderThread body=206 status=ok
// SIG undefined CreateGeometryShaderWithStreamOutput_RenderThread(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FDynamicRHI::CreateGeometryShaderWithStreamOutput_RenderThread
          (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
          undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
          undefined4 *param_9)

{
  char cVar1;
  longlong lVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_3);
    if (cVar1 != '\0') {
      lVar2 = param_3;
    }
  }
  local_28 = *param_9;
  uStack_24 = param_9[1];
  uStack_20 = param_9[2];
  uStack_1c = param_9[3];
  local_18 = param_9[4];
  (**(code **)(*DAT_146ab6358 + 0xa0))
            (DAT_146ab6358,param_2,param_4,param_5,param_6,param_7,param_8,&local_28);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ebeb50 CreateGeometryShader_RenderThread body=124 status=ok
// SIG undefined CreateGeometryShader_RenderThread(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FDynamicRHI::CreateGeometryShader_RenderThread
          (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_3);
    if (cVar1 != '\0') {
      lVar2 = param_3;
    }
  }
  (**(code **)(*DAT_146ab6358 + 0x98))(DAT_146ab6358,param_2,param_4);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ebebd0 CreateGeometryShader_RenderThread body=149 status=ok
// SIG undefined CreateGeometryShader_RenderThread(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FDynamicRHI::CreateGeometryShader_RenderThread
          (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
          undefined4 *param_5)

{
  char cVar1;
  longlong lVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_3);
    if (cVar1 != '\0') {
      lVar2 = param_3;
    }
  }
  local_28 = *param_5;
  uStack_24 = param_5[1];
  uStack_20 = param_5[2];
  uStack_1c = param_5[3];
  local_18 = param_5[4];
  (**(code **)(*DAT_146ab6358 + 0x90))(DAT_146ab6358,param_2,param_4,&local_28);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ebec70 CreateHullShader_RenderThread body=121 status=ok
// SIG undefined CreateHullShader_RenderThread(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FDynamicRHI::CreateHullShader_RenderThread
          (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_3);
    if (cVar1 != '\0') {
      lVar2 = param_3;
    }
  }
  (**(code **)(*DAT_146ab6358 + 0x78))(DAT_146ab6358,param_2,param_4);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ebecf0 CreateHullShader_RenderThread body=146 status=ok
// SIG undefined CreateHullShader_RenderThread(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FDynamicRHI::CreateHullShader_RenderThread
          (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
          undefined4 *param_5)

{
  char cVar1;
  longlong lVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_3);
    if (cVar1 != '\0') {
      lVar2 = param_3;
    }
  }
  local_28 = *param_5;
  uStack_24 = param_5[1];
  uStack_20 = param_5[2];
  uStack_1c = param_5[3];
  local_18 = param_5[4];
  (**(code **)(*DAT_146ab6358 + 0x70))(DAT_146ab6358,param_2,param_4,&local_28);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ebed90 CreateIndexBuffer_RenderThread body=148 status=ok
// SIG undefined CreateIndexBuffer_RenderThread(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FDynamicRHI::CreateIndexBuffer_RenderThread
          (undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_3);
    if (cVar1 != '\0') {
      lVar2 = param_3;
    }
  }
  (**(code **)(*DAT_146ab6358 + 0x118))(DAT_146ab6358,param_2,param_4,param_5,param_6,param_7);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ebee30 CreatePixelShader_RenderThread body=121 status=ok
// SIG undefined CreatePixelShader_RenderThread(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FDynamicRHI::CreatePixelShader_RenderThread
          (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_3);
    if (cVar1 != '\0') {
      lVar2 = param_3;
    }
  }
  (**(code **)(*DAT_146ab6358 + 0x58))(DAT_146ab6358,param_2,param_4);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ebeeb0 CreatePixelShader_RenderThread body=146 status=ok
// SIG undefined CreatePixelShader_RenderThread(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FDynamicRHI::CreatePixelShader_RenderThread
          (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
          undefined4 *param_5)

{
  char cVar1;
  longlong lVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_3);
    if (cVar1 != '\0') {
      lVar2 = param_3;
    }
  }
  local_28 = *param_5;
  uStack_24 = param_5[1];
  uStack_20 = param_5[2];
  uStack_1c = param_5[3];
  local_18 = param_5[4];
  (**(code **)(*DAT_146ab6358 + 0x50))(DAT_146ab6358,param_2,param_4,&local_28);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ebef50 CreateShaderResourceView_RenderThread body=124 status=ok
// SIG undefined CreateShaderResourceView_RenderThread(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FDynamicRHI::CreateShaderResourceView_RenderThread
          (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_3);
    if (cVar1 != '\0') {
      lVar2 = param_3;
    }
  }
  (**(code **)(*DAT_146ab6358 + 0x1b0))(DAT_146ab6358,param_2,param_4);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ebefd0 CreateShaderResourceView_RenderThread body=139 status=ok
// SIG undefined CreateShaderResourceView_RenderThread(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FDynamicRHI::CreateShaderResourceView_RenderThread
          (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
          undefined4 param_5,undefined1 param_6)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_3);
    if (cVar1 != '\0') {
      lVar2 = param_3;
    }
  }
  (**(code **)(*DAT_146ab6358 + 0x1b8))(DAT_146ab6358,param_2,param_4,param_5,param_6);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ebf060 CreateStructuredBuffer_RenderThread body=148 status=ok
// SIG undefined CreateStructuredBuffer_RenderThread(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FDynamicRHI::CreateStructuredBuffer_RenderThread
          (undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_3);
    if (cVar1 != '\0') {
      lVar2 = param_3;
    }
  }
  (**(code **)(*DAT_146ab6358 + 0x150))(DAT_146ab6358,param_2,param_4,param_5,param_6,param_7);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ebf100 CreateTask body=378 status=ok
// SIG undefined CreateTask(void)

undefined8 *
TGraphTask<FCompilePipelineStateTask>::CreateTask
          (undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar8 = (longlong)&PTR__scalar_deleting_destructor__144edb368;
  *(undefined1 *)(plVar8 + 0x1a) = 0;
  plVar8[0x1b] = local_res10;
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



// FUNCTION 141ebf280 FUN_141ebf280 body=372 status=ok
// SIG undefined FUN_141ebf280(void)

undefined8 * FUN_141ebf280(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar8 = (longlong)&PTR_FUN_144edb3b0;
  *(undefined1 *)(plVar8 + 4) = 0;
  plVar8[5] = local_res10;
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



// FUNCTION 141ebf400 CreateTask body=372 status=ok
// SIG undefined CreateTask(void)

undefined8 *
TGraphTask<FExecuteRHIThreadTask>::CreateTask
          (undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar8 = (longlong)&PTR_FUN_144edb3a0;
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



// FUNCTION 141ebf580 CreateTask body=372 status=ok
// SIG undefined CreateTask(void)

undefined8 *
TGraphTask<FParallelTranslateSetupCommandList>::CreateTask
          (undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar8 = (longlong)&PTR_FUN_144edb410;
  *(undefined1 *)(plVar8 + 6) = 0;
  plVar8[7] = local_res10;
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



// FUNCTION 141ebf700 CreateVertexBuffer_RenderThread body=140 status=ok
// SIG undefined CreateVertexBuffer_RenderThread(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FDynamicRHI::CreateVertexBuffer_RenderThread
          (undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
          undefined4 param_5,undefined8 param_6)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_3);
    if (cVar1 != '\0') {
      lVar2 = param_3;
    }
  }
  (**(code **)(*DAT_146ab6358 + 0x130))(DAT_146ab6358,param_2,param_4,param_5,param_6);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ebf790 CreateVertexDeclaration_RenderThread body=121 status=ok
// SIG undefined CreateVertexDeclaration_RenderThread(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FDynamicRHI::CreateVertexDeclaration_RenderThread
          (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_3);
    if (cVar1 != '\0') {
      lVar2 = param_3;
    }
  }
  (**(code **)(*DAT_146ab6358 + 0x48))(DAT_146ab6358,param_2,param_4);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ebf810 CreateVertexShader_RenderThread body=121 status=ok
// SIG undefined CreateVertexShader_RenderThread(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FDynamicRHI::CreateVertexShader_RenderThread
          (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_3);
    if (cVar1 != '\0') {
      lVar2 = param_3;
    }
  }
  (**(code **)(*DAT_146ab6358 + 0x68))(DAT_146ab6358,param_2,param_4);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ebf890 CreateVertexShader_RenderThread body=146 status=ok
// SIG undefined CreateVertexShader_RenderThread(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FDynamicRHI::CreateVertexShader_RenderThread
          (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
          undefined4 *param_5)

{
  char cVar1;
  longlong lVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_3);
    if (cVar1 != '\0') {
      lVar2 = param_3;
    }
  }
  local_28 = *param_5;
  uStack_24 = param_5[1];
  uStack_20 = param_5[2];
  uStack_1c = param_5[3];
  local_18 = param_5[4];
  (**(code **)(*DAT_146ab6358 + 0x60))(DAT_146ab6358,param_2,param_4,&local_28);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ebf930 FUN_141ebf930 body=193 status=ok
// SIG undefined FUN_141ebf930(void)

void FUN_141ebf930(longlong param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  
  lVar1 = DAT_146ab65e0;
  if (*(char *)(param_1 + 0x18) == '\0') {
    return;
  }
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 0x19) != '\0') {
      return;
    }
  }
  else {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
      lVar4 = 4;
    }
    else {
      lVar4 = 0;
    }
    if (*(int *)(lVar4 + lVar1) == 0) {
      return;
    }
    if (*(char *)(param_1 + 0x19) == '\0') {
      return;
    }
  }
  FUN_14164b510();
  SetEmitDrawEvents(*(undefined1 *)(param_1 + 0xd));
  DAT_1468c21d4 = *(undefined4 *)(param_1 + 0x14);
  *(undefined2 *)(param_1 + 0x18) = 0;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  FUN_141ed8300(0);
  return;
}



// FUNCTION 141ebfa00 FUN_141ebfa00 body=162 status=ok
// SIG undefined FUN_141ebfa00(void)

void FUN_141ebfa00(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  uVar3 = 0;
  uVar4 = uVar3;
  uVar1 = uVar3;
  if (0 < *(int *)(param_1 + 0x90)) {
    do {
      iVar5 = (int)uVar1;
      if (DAT_1464c9c3c <= (int)uVar1) {
        uVar4 = uVar3;
        iVar5 = 0;
      }
      lVar2 = *(longlong *)(param_1 + 0x88);
      lVar6 = uVar4 * 0x10;
      lVar7 = (longlong)*(int *)(lVar6 + 8 + lVar2);
      uVar1 = uVar3;
      if (0 < lVar7) {
        do {
          *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x88) + lVar6) + uVar1 * 8) = 0;
          uVar1 = uVar1 + 1;
        } while ((longlong)uVar1 < lVar7);
        lVar2 = *(longlong *)(param_1 + 0x88);
      }
      lVar2 = lVar2 + lVar6;
      *(undefined4 *)(lVar2 + 8) = 0;
      if (*(int *)(lVar2 + 0xc) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(lVar2,0);
      }
      uVar4 = uVar4 + 1;
      uVar1 = (ulonglong)(iVar5 + 1U);
    } while ((int)(iVar5 + 1U) < *(int *)(param_1 + 0x90));
  }
  return;
}



// FUNCTION 141ebfab0 DiscardAndSwap body=619 status=ok
// SIG undefined DiscardAndSwap(void)

int TSharedPipelineStateCache<FGraphicsPipelineStateKey,FGraphicsPipelineState_*>::DiscardAndSwap
              (longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  int local_88;
  uint uStack_84;
  uint uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_60;
  uint uStack_5c;
  uint *local_58;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 uStack_38;
  uint *puStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined8 uStack_20;
  
  plVar5 = *(longlong **)(param_1 + 0x10);
  uVar2 = *(uint *)(plVar5 + 5);
  puVar1 = (uint *)(plVar5 + 2);
  local_88 = 0;
  uStack_84 = 1;
  lVar8 = plVar5[1];
  iVar3 = *(int *)((longlong)plVar5 + 0x34);
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar2 != 0) {
    puVar14 = (uint *)plVar5[4];
    if ((uint *)plVar5[4] == (uint *)0x0) {
      puVar14 = puVar1;
    }
    uVar4 = *puVar14;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar4 == 0) {
      lVar9 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar13 = local_88 + 1;
      bVar7 = (int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 <= local_88;
      local_88 = iVar13;
      if (bVar7) goto LAB_141ebfb9b;
      uVar4 = puVar14[lVar9 + 1];
    }
    uStack_84 = -uVar4 & uVar4;
    iVar13 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - iVar13;
    }
    uStack_74 = (iStack_70 - iVar13) + 0x1f;
    if ((int)uVar2 < (int)uStack_74) {
LAB_141ebfb9b:
      uStack_74 = uVar2;
    }
  }
  uVar2 = *(uint *)(plVar5 + 5);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uVar4 = *(uint *)(plVar5 + 5);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar10 = uVar2 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  local_40 = plVar5;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar2;
  if (uVar2 != uVar4) {
    puVar14 = (uint *)plVar5[4];
    if ((uint *)plVar5[4] == (uint *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = puVar14[(int)uVar2 >> 5] & -1 << ((byte)uVar2 & 0x1f);
    iVar13 = (int)uVar2 >> 5;
    while (uVar12 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 <= iVar13)
      goto LAB_141ebfc60;
      uVar12 = puVar14[(longlong)iVar13 + 1];
      iVar13 = iVar13 + 1;
    }
    uVar12 = -uVar12 & uVar12;
    iVar13 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar12 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - iVar13;
    }
    uStack_74 = (uVar10 - iVar13) + 0x1f;
    if ((int)uVar4 < (int)uStack_74) {
LAB_141ebfc60:
      uStack_74 = uVar4;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
    puVar6 = *(undefined8 **)((longlong)(int)uStack_4c * 0x130 + 0x120 + *plVar5);
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6,1);
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  TSet<TTuple<FGraphicsPipelineStateKey,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateKey,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
  ::Empty(*(undefined8 *)(param_1 + 0x10),0);
  lVar9 = *(longlong *)(param_1 + 8);
  lVar11 = 0x68;
  if (lVar9 != param_1 + 0x18) {
    lVar11 = 0x18;
  }
  *(longlong *)(param_1 + 8) = lVar11 + param_1;
  uVar2 = 0x18;
  if (lVar9 != param_1 + 0x18) {
    uVar2 = 0x68;
  }
  *(ulonglong *)(param_1 + 0x10) = (ulonglong)uVar2 + param_1;
  return (int)lVar8 - iVar3;
}



// FUNCTION 141ebfd20 DoTask body=1382 status=ok
// SIG undefined DoTask(void)

ulonglong FCompilePipelineStateTask::DoTask(longlong *param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *local_res20;
  undefined8 *local_38 [2];
  
  cVar5 = (**(code **)(*(longlong *)*param_1 + 8))();
  lVar9 = *param_1;
  if (cVar5 == '\0') {
    (**(code **)(*DAT_146ab6358 + 0xf8))(DAT_146ab6358,local_38,param_1 + 1);
    uVar7 = TRefCountPtr<FRHIComputePipelineState>::operator=(lVar9 + 0x18,local_38);
    lVar9 = 0;
    if (local_38[0] != (undefined8 *)0x0) {
      LOCK();
      puVar2 = (uint *)(local_38[0] + 1);
      uVar6 = *puVar2;
      uVar7 = (ulonglong)uVar6;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if (uVar6 == 1) {
        if (*(char *)(local_38[0] + 2) == '\0') {
          uVar7 = 0;
          LOCK();
          uVar6 = *(uint *)((longlong)local_38[0] + 0xc);
          if (uVar6 == 0) {
            *(uint *)((longlong)local_38[0] + 0xc) = 1;
          }
          else {
            uVar7 = (ulonglong)uVar6;
          }
          UNLOCK();
          if (uVar6 == 0) {
            uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
            lVar8 = lVar9;
            if (uVar6 != 0) {
              lVar8 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar8 + 8) = local_38[0];
            uVar7 = FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          uVar7 = (**(code **)*local_38[0])(local_38[0],1);
        }
      }
    }
    puVar4 = (undefined8 *)param_1[1];
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      puVar2 = (uint *)(puVar4 + 1);
      uVar6 = *puVar2;
      uVar7 = (ulonglong)uVar6;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if (uVar6 == 1) {
        if (*(char *)(puVar4 + 2) == '\0') {
          uVar7 = 0;
          LOCK();
          uVar6 = *(uint *)((longlong)puVar4 + 0xc);
          if (uVar6 == 0) {
            *(uint *)((longlong)puVar4 + 0xc) = 1;
          }
          else {
            uVar7 = (ulonglong)uVar6;
          }
          UNLOCK();
          if (uVar6 == 0) {
            uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
            lVar8 = lVar9;
            if (uVar6 != 0) {
              lVar8 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar8 + 8) = puVar4;
            uVar7 = FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          uVar7 = (**(code **)*puVar4)(puVar4,1);
        }
      }
    }
    puVar4 = (undefined8 *)param_1[2];
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      puVar2 = (uint *)(puVar4 + 1);
      uVar6 = *puVar2;
      uVar7 = (ulonglong)uVar6;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if (uVar6 == 1) {
        if (*(char *)(puVar4 + 2) == '\0') {
          uVar7 = 0;
          LOCK();
          uVar6 = *(uint *)((longlong)puVar4 + 0xc);
          if (uVar6 == 0) {
            *(uint *)((longlong)puVar4 + 0xc) = 1;
          }
          else {
            uVar7 = (ulonglong)uVar6;
          }
          UNLOCK();
          if (uVar6 == 0) {
            uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
            lVar8 = lVar9;
            if (uVar6 != 0) {
              lVar8 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar8 + 8) = puVar4;
            uVar7 = FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          uVar7 = (**(code **)*puVar4)(puVar4,1);
        }
      }
    }
    puVar4 = (undefined8 *)param_1[5];
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      puVar2 = (uint *)(puVar4 + 1);
      uVar6 = *puVar2;
      uVar7 = (ulonglong)uVar6;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if (uVar6 == 1) {
        if (*(char *)(puVar4 + 2) == '\0') {
          uVar7 = 0;
          LOCK();
          uVar6 = *(uint *)((longlong)puVar4 + 0xc);
          if (uVar6 == 0) {
            *(uint *)((longlong)puVar4 + 0xc) = 1;
          }
          else {
            uVar7 = (ulonglong)uVar6;
          }
          UNLOCK();
          if (uVar6 == 0) {
            uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
            lVar8 = lVar9;
            if (uVar6 != 0) {
              lVar8 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar8 + 8) = puVar4;
            uVar7 = FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          uVar7 = (**(code **)*puVar4)(puVar4,1);
        }
      }
    }
    puVar4 = (undefined8 *)param_1[6];
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      puVar2 = (uint *)(puVar4 + 1);
      uVar6 = *puVar2;
      uVar7 = (ulonglong)uVar6;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if (uVar6 == 1) {
        if (*(char *)(puVar4 + 2) == '\0') {
          uVar7 = 0;
          LOCK();
          uVar6 = *(uint *)((longlong)puVar4 + 0xc);
          if (uVar6 == 0) {
            *(uint *)((longlong)puVar4 + 0xc) = 1;
          }
          else {
            uVar7 = (ulonglong)uVar6;
          }
          UNLOCK();
          if (uVar6 == 0) {
            uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
            lVar8 = lVar9;
            if (uVar6 != 0) {
              lVar8 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar8 + 8) = puVar4;
            uVar7 = FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          uVar7 = (**(code **)*puVar4)(puVar4,1);
        }
      }
    }
    puVar4 = (undefined8 *)param_1[4];
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      puVar2 = (uint *)(puVar4 + 1);
      uVar6 = *puVar2;
      uVar7 = (ulonglong)uVar6;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if (uVar6 == 1) {
        if (*(char *)(puVar4 + 2) == '\0') {
          uVar7 = 0;
          LOCK();
          uVar6 = *(uint *)((longlong)puVar4 + 0xc);
          if (uVar6 == 0) {
            *(uint *)((longlong)puVar4 + 0xc) = 1;
          }
          else {
            uVar7 = (ulonglong)uVar6;
          }
          UNLOCK();
          if (uVar6 == 0) {
            uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
            lVar8 = lVar9;
            if (uVar6 != 0) {
              lVar8 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar8 + 8) = puVar4;
            uVar7 = FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          uVar7 = (**(code **)*puVar4)(puVar4,1);
        }
      }
    }
    puVar4 = (undefined8 *)param_1[3];
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      puVar2 = (uint *)(puVar4 + 1);
      uVar6 = *puVar2;
      uVar7 = (ulonglong)uVar6;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if (uVar6 == 1) {
        if (*(char *)(puVar4 + 2) == '\0') {
          uVar7 = 0;
          LOCK();
          uVar6 = *(uint *)((longlong)puVar4 + 0xc);
          if (uVar6 == 0) {
            *(uint *)((longlong)puVar4 + 0xc) = 1;
          }
          else {
            uVar7 = (ulonglong)uVar6;
          }
          UNLOCK();
          if (uVar6 == 0) {
            uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
            lVar8 = lVar9;
            if (uVar6 != 0) {
              lVar8 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar8 + 8) = puVar4;
            uVar7 = FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          uVar7 = (**(code **)*puVar4)(puVar4,1);
        }
      }
    }
    puVar4 = (undefined8 *)param_1[7];
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      puVar2 = (uint *)(puVar4 + 1);
      uVar6 = *puVar2;
      uVar7 = (ulonglong)uVar6;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if (uVar6 == 1) {
        if (*(char *)(puVar4 + 2) == '\0') {
          uVar7 = 0;
          LOCK();
          uVar6 = *(uint *)((longlong)puVar4 + 0xc);
          if (uVar6 == 0) {
            *(uint *)((longlong)puVar4 + 0xc) = 1;
          }
          else {
            uVar7 = (ulonglong)uVar6;
          }
          UNLOCK();
          if (uVar6 == 0) {
            uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
            lVar8 = lVar9;
            if (uVar6 != 0) {
              lVar8 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar8 + 8) = puVar4;
            uVar7 = FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          uVar7 = (**(code **)*puVar4)(puVar4,1);
        }
      }
    }
    puVar4 = (undefined8 *)param_1[8];
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      puVar2 = (uint *)(puVar4 + 1);
      uVar6 = *puVar2;
      uVar7 = (ulonglong)uVar6;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if (uVar6 == 1) {
        if (*(char *)(puVar4 + 2) == '\0') {
          uVar7 = 0;
          LOCK();
          uVar6 = *(uint *)((longlong)puVar4 + 0xc);
          if (uVar6 == 0) {
            *(uint *)((longlong)puVar4 + 0xc) = 1;
          }
          else {
            uVar7 = (ulonglong)uVar6;
          }
          UNLOCK();
          if (uVar6 == 0) {
            uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
            lVar8 = lVar9;
            if (uVar6 != 0) {
              lVar8 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar8 + 8) = puVar4;
            uVar7 = FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          uVar7 = (**(code **)*puVar4)(puVar4,1);
        }
      }
    }
    local_res20 = (undefined8 *)param_1[9];
    if (local_res20 == (undefined8 *)0x0) {
      return uVar7;
    }
    LOCK();
    piVar1 = (int *)(local_res20 + 1);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return uVar7;
    }
    if (*(char *)(local_res20 + 2) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000141ec022e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (**(code **)*local_res20)(local_res20,1);
      return uVar7;
    }
    uVar7 = 0;
    LOCK();
    uVar6 = *(uint *)((longlong)local_res20 + 0xc);
    if (uVar6 == 0) {
      *(uint *)((longlong)local_res20 + 0xc) = 1;
    }
    else {
      uVar7 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (uVar6 != 0) {
      return uVar7;
    }
    uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
    if (uVar6 == 0) goto LAB_141ec0265;
  }
  else {
    (**(code **)(*DAT_146ab6358 + 0x108))(DAT_146ab6358,&local_res20,*(undefined8 *)(lVar9 + 0x18));
    uVar7 = TRefCountPtr<FRHIComputePipelineState>::operator=(lVar9 + 0x20,&local_res20);
    if (local_res20 == (undefined8 *)0x0) {
      return uVar7;
    }
    LOCK();
    piVar1 = (int *)(local_res20 + 1);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return uVar7;
    }
    if (*(char *)(local_res20 + 2) != '\0') {
      uVar7 = (**(code **)*local_res20)(local_res20,1);
      return uVar7;
    }
    uVar7 = 0;
    LOCK();
    uVar6 = *(uint *)((longlong)local_res20 + 0xc);
    if (uVar6 == 0) {
      *(uint *)((longlong)local_res20 + 0xc) = 1;
    }
    else {
      uVar7 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (uVar6 != 0) {
      return uVar7;
    }
    uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
    if (uVar6 == 0) {
      lVar9 = 0;
      goto LAB_141ec0265;
    }
  }
  lVar9 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
LAB_141ec0265:
  *(undefined8 **)(lVar9 + 8) = local_res20;
  uVar7 = FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
  return uVar7;
}



// FUNCTION 141ec0290 FUN_141ec0290 body=1715 status=ok
// SIG undefined FUN_141ec0290(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141ec0290(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  uint uVar6;
  DWORD *pDVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined1 *puVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  ulonglong uVar24;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  uint local_1b4;
  longlong local_1a8;
  int local_1a0;
  uint local_19c;
  undefined4 local_198;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  longlong *local_178;
  longlong local_168;
  longlong local_160;
  undefined1 local_158 [256];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  iVar10 = (int)param_1[2];
  local_1b8 = 0;
  local_198 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  local_178 = param_3;
  if (0 < iVar10) {
    TArray<int,TInlineAllocator<64,TSizedDefaultAllocator<32>_>_>::ResizeTo(local_158);
    iVar10 = (int)param_1[2];
  }
  uVar19 = 0;
  uVar17 = uVar19;
  if (0 < iVar10) {
    do {
      uVar5 = FMemStackBase::GetByteCount(*(longlong *)(uVar19 + param_1[1]) + 0x30);
      uVar24 = local_50;
      lVar16 = (longlong)(int)local_50;
      iVar10 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar10);
      if (local_50._4_4_ < iVar10) {
        TArray<float,TInlineAllocator<64,FDefaultAllocator>_>::ResizeGrow
                  (local_158,uVar24 & 0xffffffff);
      }
      puVar13 = local_158;
      if (local_58 != (undefined1 *)0x0) {
        puVar13 = local_58;
      }
      uVar23 = (int)uVar17 + 1;
      uVar19 = uVar19 + 8;
      *(undefined4 *)(puVar13 + lVar16 * 4) = uVar5;
      iVar10 = (int)param_1[2];
      uVar17 = (ulonglong)uVar23;
    } while ((int)uVar23 < iVar10);
  }
  lVar16 = 0;
  local_1a0 = 0;
  iVar22 = 0;
  iVar21 = 0;
  if (0 < iVar10) {
    puVar13 = local_158;
    if (local_58 != (undefined1 *)0x0) {
      puVar13 = local_58;
    }
    do {
      iVar20 = *(int *)(puVar13 + lVar16 * 4);
      if (iVar21 < iVar10 + -1) {
        do {
          if ((int)param_1[3] < *(int *)(puVar13 + lVar16 * 4 + 4) + iVar20) break;
          lVar16 = lVar16 + 1;
          iVar21 = iVar21 + 1;
          iVar20 = iVar20 + *(int *)(puVar13 + lVar16 * 4);
        } while (lVar16 < iVar10 + -1);
      }
      iVar21 = iVar21 + 1;
      local_1a0 = iVar22 + 1;
      lVar16 = lVar16 + 1;
      iVar22 = local_1a0;
    } while (iVar21 < iVar10);
  }
  uVar17 = 0;
  iVar10 = (int)param_1[2];
  if (local_1a0 < *(int *)((longlong)param_1 + 0x1c)) {
    uVar19 = uVar17;
    if (0 < iVar10) {
      do {
        lVar16 = *param_1;
        uVar3 = *(undefined8 *)(uVar17 + param_1[1]);
        puVar11 = (undefined8 *)(*(longlong *)(lVar16 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar9 = puVar11 + 4;
        if (*(undefined8 **)(lVar16 + 0x38) < puVar9) {
          FMemStackBase::AllocateNewChunk(lVar16 + 0x30);
          puVar11 = (undefined8 *)(*(longlong *)(lVar16 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar9 = puVar11 + 4;
        }
        *(undefined8 **)(lVar16 + 0x30) = puVar9;
        uVar23 = (int)uVar19 + 1;
        uVar17 = uVar17 + 8;
        *(int *)(lVar16 + 0x14) = *(int *)(lVar16 + 0x14) + 1;
        **(undefined8 **)(lVar16 + 8) = puVar11;
        *(undefined8 **)(lVar16 + 8) = puVar11 + 1;
        puVar11[1] = 0;
        *puVar11 = &PTR_ExecuteAndDestruct_144edb3f0;
        puVar11[2] = 0;
        puVar11[3] = uVar3;
        uVar19 = (ulonglong)uVar23;
      } while ((int)uVar23 < (int)param_1[2]);
    }
  }
  else {
    local_1b4 = 0;
    uVar19 = uVar17;
    uVar24 = uVar17;
    iVar22 = local_1a0;
    if (0 < iVar10) {
      do {
        uVar23 = (uint)uVar19;
        puVar13 = local_158;
        if (local_58 != (undefined1 *)0x0) {
          puVar13 = local_58;
        }
        iVar21 = *(int *)(puVar13 + uVar24 * 4);
        uVar15 = uVar23;
        if ((int)uVar23 < iVar10 + -1) {
          do {
            uVar15 = (uint)uVar19;
            if ((int)param_1[3] < *(int *)(puVar13 + uVar24 * 4 + 4) + iVar21) break;
            uVar24 = uVar24 + 1;
            uVar15 = uVar15 + 1;
            uVar19 = (ulonglong)uVar15;
            iVar21 = iVar21 + *(int *)(puVar13 + uVar24 * 4);
          } while ((longlong)uVar24 < (longlong)(iVar10 + -1));
        }
        local_19c = uVar15;
        local_190 = (**(code **)(*DAT_146ab6358 + 0x478))(DAT_146ab6358,uVar17,iVar22);
        lVar16 = param_1[1];
        local_198 = DAT_1464a8210;
        pDVar7 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
        plVar8 = TlsGetValue(*pDVar7);
        if (plVar8 == (longlong *)0x0) {
          plVar8 = (longlong *)operator_new(0x18);
          if (plVar8 != (longlong *)0x0) {
            *plVar8 = 0;
            plVar8[1] = 0;
            *(undefined4 *)(plVar8 + 2) = 0;
          }
          TlsSetValue(*pDVar7,plVar8);
        }
        plVar18 = (longlong *)plVar8[1];
        if (plVar18 == (longlong *)0x0) {
          plVar18 = (longlong *)*plVar8;
          if (plVar18 == (longlong *)0x0) {
            uVar6 = FUN_141594c40(pDVar7 + 2);
            plVar18 = (longlong *)0x0;
            if (uVar6 != 0) {
              plVar18 = *(longlong **)
                         ((&DAT_1468a81f8)[uVar6 >> 0xe] + 8 + (ulonglong)(uVar6 & 0x3fff) * 0x18);
              FLockFreeLinkPolicy::FreeLockFreeLink(uVar6);
            }
            plVar8[1] = (longlong)plVar18;
            if (plVar18 == (longlong *)0x0) {
              puVar9 = (undefined8 *)FMemory::Malloc(0x2000,0);
              plVar8[1] = (longlong)puVar9;
              lVar14 = 0x1f;
              do {
                puVar11 = puVar9 + 0x20;
                *puVar9 = puVar11;
                lVar14 = lVar14 + -1;
                puVar9 = puVar11;
              } while (lVar14 != 0);
              *puVar11 = 0;
              plVar18 = (longlong *)plVar8[1];
            }
            *(undefined4 *)(plVar8 + 2) = 0x20;
            iVar10 = 0x20;
          }
          else {
            plVar8[1] = (longlong)plVar18;
            *plVar8 = 0;
            *(undefined4 *)(plVar8 + 2) = 0x20;
            iVar10 = 0x20;
          }
        }
        else {
          iVar10 = (int)plVar8[2];
        }
        uVar6 = local_1b8;
        plVar8[1] = *plVar18;
        *(int *)(plVar8 + 2) = iVar10 + -1;
        plVar8 = (longlong *)FUN_1415914c0(&local_188);
        local_1b8 = uVar6 & 0xfffffffd;
        local_168 = *plVar8;
        *plVar8 = 0;
        *plVar18 = (longlong)&PTR_FUN_143f3edd8;
        *(undefined4 *)(plVar18 + 1) = 0xff;
        *(undefined4 *)((longlong)plVar18 + 0xc) = 1;
        *plVar18 = (longlong)&PTR_FUN_144edb400;
        *(undefined1 *)(plVar18 + 6) = 0;
        plVar18[7] = local_168;
        if (local_188 != 0) {
          LOCK();
          piVar1 = (int *)(local_188 + 0x48);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            FGraphEvent::Recycle();
          }
        }
        if (((uVar6 & 1) != 0) && (local_1b8 = uVar6 & 0xfffffffc, local_180 != 0)) {
          LOCK();
          piVar1 = (int *)(local_180 + 0x48);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            FGraphEvent::Recycle(local_180);
          }
        }
        uVar2 = *(undefined1 *)((longlong)param_1 + 0x14);
        plVar18[4] = local_190;
        *(undefined1 *)(plVar18 + 5) = uVar2;
        plVar18[2] = lVar16 + (longlong)(int)uVar23 * 8;
        *(uint *)(plVar18 + 3) = (uVar15 - uVar23) + 1;
        lVar16 = plVar18[7];
        piVar1 = (int *)(lVar16 + 0x48);
        if (lVar16 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        local_1a8 = lVar16;
        FUN_141ed7380(plVar18,0,local_198,1);
        iVar10 = DAT_1464a820c;
        if (((DAT_146ac3328 != 0x800) && (iVar10 = DAT_1464a8208, DAT_146ac3328 != 0x1000)) ||
           (uVar23 = DAT_146ac3330, iVar10 != 0)) {
          uVar23 = DAT_146ac332c | DAT_146ac3328;
        }
        *(uint *)(*local_178 + 0x4c) = uVar23 | 0x2ff;
        lVar14 = lVar16;
        if (lVar16 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
          lVar14 = local_1a8;
        }
        lVar4 = *local_178;
        iVar10 = *(int *)(lVar4 + 0x40);
        *(int *)(lVar4 + 0x40) = iVar10 + 1;
        local_160 = lVar16;
        if (*(int *)(lVar4 + 0x44) < iVar10 + 1) {
          TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                    (lVar4 + 0x18,iVar10);
        }
        lVar12 = *(longlong *)(lVar4 + 0x38);
        if (*(longlong *)(lVar4 + 0x38) == 0) {
          lVar12 = lVar4 + 0x18;
        }
        plVar8 = (longlong *)(lVar12 + (longlong)iVar10 * 8);
        if ((plVar8 != (longlong *)0x0) && (*plVar8 = lVar14, lVar14 != 0)) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
          lVar14 = local_1a8;
        }
        if (lVar16 != 0) {
          LOCK();
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          lVar14 = local_1a8;
          if (iVar10 == 1) {
            FGraphEvent::Recycle(lVar16);
            lVar14 = local_1a8;
          }
        }
        lVar4 = *param_1;
        puVar11 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar9 = puVar11 + 5;
        if (*(undefined8 **)(lVar4 + 0x38) < puVar9) {
          FMemStackBase::AllocateNewChunk(lVar4 + 0x30);
          puVar11 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar9 = puVar11 + 5;
        }
        iVar22 = local_1a0;
        *(undefined8 **)(lVar4 + 0x30) = puVar9;
        *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
        **(undefined8 **)(lVar4 + 8) = puVar11;
        *(undefined8 **)(lVar4 + 8) = puVar11 + 1;
        puVar11[1] = 0;
        *puVar11 = &PTR_ExecuteAndDestruct_144edb3e0;
        puVar11[2] = lVar14;
        if (lVar16 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
          lVar14 = local_1a8;
        }
        *(uint *)((longlong)puVar11 + 0x24) = local_1b4;
        local_1b4 = local_1b4 + 1;
        uVar17 = (ulonglong)local_1b4;
        uVar23 = local_19c + 1;
        uVar19 = (ulonglong)uVar23;
        puVar11[3] = local_190;
        uVar24 = uVar24 + 1;
        *(int *)(puVar11 + 4) = local_1a0;
        if (lVar14 != 0) {
          LOCK();
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            FGraphEvent::Recycle(local_1a8);
            uVar17 = (ulonglong)local_1b4;
          }
        }
        iVar10 = (int)param_1[2];
      } while ((int)uVar23 < iVar10);
    }
  }
  if (local_58 != (undefined1 *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}



// FUNCTION 141ec0950 FUN_141ec0950 body=59 status=ok
// SIG undefined FUN_141ec0950(void)

void FUN_141ec0950(longlong *param_1)

{
  undefined1 local_res8 [32];
  
  FCompilePipelineStateTask::DoTask(param_1 + 2,0xff,local_res8);
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141ec0981. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 141ec0990 FUN_141ec0990 body=2329 status=ok
// SIG undefined FUN_141ec0990(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_141ec0990(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  wint_t wVar6;
  wint_t wVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  wint_t *pwVar15;
  uint uVar16;
  uint *puVar17;
  undefined8 uVar18;
  undefined1 auStack_308 [32];
  undefined1 local_2e8;
  undefined8 *local_2e0;
  undefined1 local_2d8 [8];
  undefined2 *local_2d0;
  uint local_2c8;
  int local_2c4;
  void *local_2c0;
  undefined4 local_2b4;
  uint local_2b0;
  uint uStack_2ac;
  uint *puStack_2a8;
  undefined4 local_2a0;
  int iStack_29c;
  uint uStack_298;
  undefined4 uStack_294;
  undefined2 *local_290;
  undefined8 local_288;
  undefined2 *local_280;
  int local_278;
  undefined2 *local_270;
  int local_268;
  longlong *local_258;
  undefined8 uStack_250;
  uint *local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  longlong *local_228;
  undefined2 local_220;
  int local_214;
  undefined1 *local_210;
  undefined1 **local_208;
  undefined1 ***local_200;
  longlong *local_1f8;
  undefined8 uStack_1f0;
  uint *puStack_1e8;
  undefined1 auStack_1e0 [16];
  undefined8 local_1d0;
  undefined1 local_1c8 [8];
  longlong *local_1c0;
  undefined1 local_1b0 [8];
  longlong *local_1a8;
  longlong local_198;
  undefined8 local_190;
  uint local_188 [4];
  uint *local_178;
  undefined8 local_170;
  undefined4 local_168;
  int local_164;
  longlong local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  longlong local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined1 local_4f;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_308;
  if ((int)param_1[2] < 1) {
    return;
  }
  uVar18 = (**(code **)(*param_1 + 0x18))();
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar3 + 0x38) < DAT_146852c50) &&
     (_Init_thread_header(&DAT_146852c50), DAT_146852c50 == -1)) {
    FText::FText(&DAT_146852c38,0);
    atexit(FUN_143e3e8f0);
    _Init_thread_footer(&DAT_146852c50);
  }
  FText::FText(local_1c8,&DAT_146852c38);
  if ((*(int *)(lVar3 + 0x38) < DAT_146ac3a18) &&
     (_Init_thread_header(&DAT_146ac3a18), DAT_146ac3a18 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146ac3a10 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.VSync");
    _Init_thread_footer(&DAT_146ac3a18);
  }
  iVar8 = (**(code **)(*DAT_146ac3a10 + 0x68))();
  if ((iVar8 != 0) && (cVar5 = (**(code **)(*param_1 + 0x28))(param_1), cVar5 == '\0')) {
    uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_1b0,
                        L"WARNING: This GPU profile was captured with v-sync enabled.  V-sync wait time may show up in any bucket, and as a result the data in this profile may be skewed. Please profile with v-sync disabled to obtain the most accurate data."
                        ,L"GpuProfiler",L"GpuProfileVsyncEnabledWarning");
    FText::operator=(local_1c8,uVar10);
    if (local_1a8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1a8 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_1a8)(local_1a8);
        LOCK();
        piVar2 = (int *)((longlong)local_1a8 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_1a8 + 8))(local_1a8,1);
        }
      }
    }
  }
  (**(code **)(*param_1 + 0x20))(param_1);
  puVar14 = (undefined2 *)0x0;
  local_168 = 0xffffffff;
  local_198 = 0;
  local_190 = 0;
  local_178 = (uint *)0x0;
  local_170 = 0;
  local_164 = 0;
  local_158 = 0;
  local_150 = 0;
  puVar12 = puVar14;
  puVar13 = puVar14;
  if (0 < (int)param_1[2]) {
    do {
      FUN_141ec6870(*(undefined8 *)((longlong)puVar13 + param_1[1]),0,&local_198);
      uVar16 = (int)puVar12 + 1;
      puVar12 = (undefined2 *)(ulonglong)uVar16;
      puVar13 = puVar13 + 4;
    } while ((int)uVar16 < (int)param_1[2]);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146ac3a28) &&
     (_Init_thread_header(&DAT_146ac3a28), DAT_146ac3a28 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146ac3a20 =
         (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.ProfileGPU.Root");
    _Init_thread_footer(&DAT_146ac3a28);
  }
  (**(code **)(*DAT_146ac3a20 + 0x78))(DAT_146ac3a20,&local_280);
  iVar8 = local_278;
  puVar12 = local_280;
  local_2c0 = (void *)0x0;
  if (local_278 == 0) {
    local_2b4 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_2c0,local_278,0);
    _guard_xfg_dispatch_icall_nop(local_2c0,puVar12,(longlong)iVar8 * 2);
  }
  local_148 = 0;
  local_140 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0xffffffff;
  local_114 = 0;
  local_108 = 0;
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
  local_4f = *(int *)(DAT_146ab6528 + 4) != 0;
  local_50 = *(int *)(DAT_146ab6558 + 4) != 0;
  puVar12 = puVar14;
  puVar13 = puVar14;
  if (0 < (int)param_1[2]) {
    do {
      local_2e0 = &local_148;
      local_2e8 = 0;
      DumpStatsEventNode(*(undefined8 *)(param_1[1] + (longlong)puVar13),uVar18,0,&local_2c0);
      uVar16 = (int)puVar12 + 1;
      puVar12 = (undefined2 *)(ulonglong)uVar16;
      puVar13 = puVar13 + 4;
    } while ((int)uVar16 < (int)param_1[2]);
  }
  FGPUProfileStatSummary::PrintSummary(&local_148);
  pwVar15 = &DAT_144ed2e44;
  puVar12 = &DAT_143f3eda8;
  if (local_278 != 0) {
    puVar12 = local_280;
  }
  iVar8 = *(int *)(DAT_146ab6510 + 4);
  do {
    wVar6 = *(wint_t *)((longlong)pwVar15 + (longlong)(puVar12 + -0xa2769722));
    if ((wVar6 == 0) && (*pwVar15 == 0)) goto LAB_141ec0d0f;
    if (wVar6 != *pwVar15) {
      wVar6 = towlower(wVar6);
      wVar7 = towlower(*pwVar15);
      if (wVar6 != wVar7) break;
    }
    pwVar15 = pwVar15 + 1;
  } while( true );
  if (wVar6 != wVar7) goto LAB_141ec1028;
LAB_141ec0d0f:
  if (iVar8 == 0) goto LAB_141ec1028;
  local_210 = local_2d8;
  local_208 = &local_210;
  if (0 < (int)local_190 - local_164) {
    TSparseArray<TSetElement<TTuple<FString,FGPUProfilerEventNodeStats>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Compact(&local_198);
    local_200 = &local_208;
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,TSparseArray<TSetElement<TTuple<FString,FGPUProfilerEventNodeStats>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FGPUProfilerEventNodeStats>,TDefaultMapHashableKeyFuncs<FString,FGPUProfilerEventNodeStats,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FGPUProfilerEventNodeStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGPUProfilerEventNodeStats,0>_>::FValueComparisonClass<FNodeStatsCompare>_>_>_>_>
              (local_198,(longlong)((int)local_190 - local_164),local_2d8[0],&local_200);
  }
  TSet<TTuple<FString,FGPUProfilerEventNodeStats>,TDefaultMapHashableKeyFuncs<FString,FGPUProfilerEventNodeStats,0>,FDefaultSetAllocator>
  ::Rehash(&local_198);
  if ((*(int *)(lVar3 + 0x38) < DAT_146ac3a38) &&
     (_Init_thread_header(&DAT_146ac3a38), DAT_146ac3a38 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146ac3a30 =
         (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.ProfileGPU.Pattern");
    _Init_thread_footer(&DAT_146ac3a38);
  }
  (**(code **)(*DAT_146ac3a30 + 0x78))(DAT_146ac3a30,&local_2d0);
  local_290 = (undefined2 *)0x0;
  local_288 = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_290,0);
  puVar12 = local_290;
  FGenericPlatformString::Memcpy(local_290,&DAT_144ed3094,4);
  puVar13 = &DAT_143f3eda8;
  if ((int)local_288 != 0) {
    puVar13 = puVar12;
  }
  puVar11 = &DAT_143f3eda8;
  if (local_2c8 != 0) {
    puVar11 = local_2d0;
  }
  iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar13);
  if (puVar12 != (undefined2 *)0x0) {
    FMemory::Free(puVar12);
  }
  if (iVar8 == 0) {
    local_2c8 = 0;
    puVar12 = puVar14;
    if (local_2c4 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2d0,0);
      goto LAB_141ec0e21;
    }
  }
  else {
LAB_141ec0e21:
    puVar12 = (undefined2 *)(ulonglong)local_2c8;
  }
  puVar13 = local_2d0;
  local_270 = (undefined2 *)0x0;
  iVar8 = (int)puVar12;
  puVar11 = puVar14;
  local_268 = iVar8;
  if (iVar8 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_270,puVar12,0);
    puVar11 = local_270;
    _guard_xfg_dispatch_icall_nop(local_270,puVar13,(longlong)iVar8 * 2);
  }
  iVar8 = local_268;
  puStack_2a8 = local_188;
  local_2b0 = 0;
  uStack_2ac = 1;
  iStack_29c = 0;
  uStack_298 = 0;
  if ((int)local_170 != 0) {
    puVar17 = local_188;
    if (local_178 != (uint *)0x0) {
      puVar17 = local_178;
    }
    uVar16 = *puVar17;
    puVar12 = puVar14;
    while (uVar16 == 0) {
      iVar9 = (int)puVar14;
      uStack_298 = (int)puVar12 + 0x20;
      puVar12 = (undefined2 *)(ulonglong)uStack_298;
      local_2b0 = iVar9 + 1;
      puVar14 = (undefined2 *)(ulonglong)local_2b0;
      if ((int)((int)local_170 + -1 + ((int)local_170 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar9) {
        iStack_29c = (int)local_170;
        goto LAB_141ec0f30;
      }
      uVar16 = puVar17[(longlong)iVar9 + 1];
    }
    uStack_2ac = -uVar16 & uVar16;
    local_214 = 0x1f;
    if (uStack_2ac != 0) {
      for (; uStack_2ac >> local_214 == 0; local_214 = local_214 + -1) {
      }
    }
    if (uStack_2ac == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - local_214;
    }
    iStack_29c = (uStack_298 - iVar9) + 0x1f;
    if ((int)local_170 < iStack_29c) {
      iStack_29c = (int)local_170;
    }
  }
LAB_141ec0f30:
  local_2a0 = 0xffffffff;
  uStack_240 = CONCAT44(iStack_29c,0xffffffff);
  auStack_1e0._8_4_ = uStack_298;
  auStack_1e0._0_8_ = uStack_240;
  auStack_1e0._12_4_ = uStack_294;
  local_258 = &local_198;
  local_220 = 0;
  uStack_250 = CONCAT44(uStack_2ac,local_2b0);
  local_228 = &local_198;
  local_1d0._0_4_ = SUB84(&local_198,0);
  local_1d0._4_4_ = (undefined4)((ulonglong)&local_198 >> 0x20);
  local_238._8_4_ = (undefined4)local_1d0;
  local_238._0_8_ = auStack_1e0._8_8_;
  local_238._12_4_ = local_1d0._4_4_;
  iVar9 = iStack_29c;
  local_248 = puStack_2a8;
  local_1f8 = local_258;
  uStack_1f0 = uStack_250;
  puStack_1e8 = puStack_2a8;
  local_1d0 = &local_198;
  if (iStack_29c < (int)local_170) {
    do {
      if (1 < iVar8) {
        if (*(int *)(*local_258 + 8 + (longlong)iVar9 * 0x48) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = *(undefined2 **)(*local_258 + (longlong)iVar9 * 0x48);
        }
        puVar12 = &DAT_143f3eda8;
        if (iVar8 != 0) {
          puVar12 = puVar11;
        }
        FWildcardString::IsMatch(puVar12,puVar14);
      }
      uStack_240 = CONCAT44(uStack_240._4_4_,(uint)uStack_240 & ~uStack_250._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_250);
      iVar9 = uStack_240._4_4_;
    } while (uStack_240._4_4_ < (int)local_248[6]);
    if (((char)local_220 != '\0') && (local_220._1_1_ != '\0')) {
      TSet<TTuple<FString,FGPUProfilerEventNodeStats>,TDefaultMapHashableKeyFuncs<FString,FGPUProfilerEventNodeStats,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_228,(int)local_228[1] - *(int *)((longlong)local_228 + 0x34),1);
    }
  }
  if (puVar11 != (undefined2 *)0x0) {
    FMemory::Free(puVar11);
  }
  if (local_2d0 != (undefined2 *)0x0) {
    FMemory::Free();
  }
LAB_141ec1028:
  local_60 = 0;
  if (local_68 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,TSharedSteamVRResource<vr::RenderModel_t>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,TSharedSteamVRResource<vr::RenderModel_t>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_a8);
  local_b0 = 0;
  if (local_b8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,TSharedSteamVRResource<vr::RenderModel_t>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,TSharedSteamVRResource<vr::RenderModel_t>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_f8);
  local_100 = 0;
  if (local_108 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,TSharedSteamVRResource<vr::RenderModel_t>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,TSharedSteamVRResource<vr::RenderModel_t>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_148);
  if (local_2c0 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_280 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_150 = 0;
  if (local_158 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FGPUProfilerEventNodeStats>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FGPUProfilerEventNodeStats>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_198);
  if (local_1c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1c0 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_1c0)(local_1c0);
      LOCK();
      piVar2 = (int *)((longlong)local_1c0 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_1c0 + 8))(local_1c0,1);
      }
    }
  }
  return;
}



// FUNCTION 141ec12b0 DumpStatsEventNode body=454 status=ok
// SIG undefined DumpStatsEventNode(void)

void DumpStatsEventNode(longlong param_1,undefined4 param_2,int param_3,undefined8 *param_4,
                       char param_5,longlong param_6)

{
  int iVar1;
  longlong lVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 uVar11;
  float fVar12;
  ulonglong local_38 [4];
  
  lVar2 = param_6;
  *(int *)(param_6 + 0xf0) = *(int *)(param_6 + 0xf0) + 1;
  if (((*(int *)(param_1 + 0x10) == 0) && (*(int *)(param_1 + 0x50) < 1)) &&
     (*(char *)(param_6 + 0xf9) == '\0')) {
    return;
  }
  *(int *)(param_6 + 0xf4) = *(int *)(param_6 + 0xf4) + *(int *)(param_1 + 0x10);
  uVar9 = 0;
  if (param_5 == '\0') {
    puVar6 = &DAT_143f3eda8;
    if (*(int *)(param_1 + 0x38) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = *(undefined2 **)(param_1 + 0x30);
    }
    if (*(int *)(param_4 + 1) != 0) {
      puVar6 = (undefined2 *)*param_4;
    }
    cVar4 = FWildcardString::IsMatch(puVar6,puVar7);
    if (cVar4 == '\0') {
      uVar11 = 0;
      goto LAB_141ec13cf;
    }
  }
  uVar11 = 1;
  uVar8 = uVar9;
  if ((0.1 <= *(float *)(param_1 + 0x28)) &&
     (100 < *(uint *)(param_1 + 0x18) * *(int *)(param_1 + 0x10))) {
    fVar12 = 1.0 / *(float *)(param_1 + 0x28);
    FString::PrintfImpl(local_38,L" %.0f prims/ms %.0f verts/ms",
                        (double)((float)*(uint *)(param_1 + 0x14) * fVar12),
                        (double)((float)*(uint *)(param_1 + 0x18) * fVar12));
    uVar8 = local_38[0];
  }
  FGPUProfileStatSummary::ProcessMatch(lVar2,param_1);
  if (uVar8 != 0) {
    FMemory::Free(uVar8);
  }
LAB_141ec13cf:
  iVar1 = *(int *)(DAT_146ab65b8 + 4);
  if (-1 < iVar1) {
    iVar5 = 3;
    if (iVar1 < 3) {
      iVar5 = iVar1;
    }
    if (iVar5 != 0) {
      param_6._0_1_ = (undefined1)iVar5;
      uVar3 = (undefined1)param_6;
      param_6._0_4_ = iVar5;
      FUN_141eb73e0(*(undefined8 *)(param_1 + 0x48),(longlong)*(int *)(param_1 + 0x50),uVar3,
                    &param_6);
    }
  }
  uVar8 = uVar9;
  if (0 < *(int *)(param_1 + 0x50)) {
    do {
      DumpStatsEventNode(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + uVar9),param_2,param_3 + 1,
                         param_4,uVar11,lVar2);
      uVar10 = (int)uVar8 + 1;
      uVar9 = uVar9 + 8;
      uVar8 = (ulonglong)uVar10;
    } while ((int)uVar10 < *(int *)(param_1 + 0x50));
  }
  return;
}



// FUNCTION 141ec1480 DumpTransitionForResourceHandler body=153 status=ok
// SIG undefined DumpTransitionForResourceHandler(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FDumpTransitionsHelper::DumpTransitionForResourceHandler(void)

{
  void *_Src;
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  undefined2 *local_18;
  int local_10;
  
  puVar3 = (undefined2 *)0x0;
  local_18 = (undefined2 *)0x0;
  local_10 = *(int *)(DAT_146ac35c0 + 1);
  lVar4 = (longlong)local_10;
  _Src = (void *)*DAT_146ac35c0;
  if (local_10 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
    puVar3 = local_18;
    ::_guard_xfg_dispatch_icall_nop(local_18,_Src,lVar4 * 2);
  }
  puVar2 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar2 = puVar3;
  }
  puVar1 = (undefined8 *)FName::FName(local_res8,puVar2,1);
  _DAT_146ac3908 = *puVar1;
  if (puVar3 != (undefined2 *)0x0) {
    FMemory::Free(puVar3);
  }
  return;
}



// FUNCTION 141ec1520 Empty body=128 status=ok
// SIG undefined Empty(void)

void TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::Empty
               (longlong *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  
  iVar4 = (int)param_1[5];
  plVar3 = (longlong *)param_1[4];
  if ((longlong *)param_1[4] == (longlong *)0x0) {
    plVar3 = param_1;
  }
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar3 != 0) {
      LOCK();
      piVar1 = (int *)(*plVar3 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle();
      }
    }
    plVar3 = plVar3 + 1;
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != param_2) {
    ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 141ec15a0 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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



// FUNCTION 141ec1620 Empty body=181 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  cVar1 = ConditionalRehash(param_1,param_2,1);
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



// FUNCTION 141ec16e0 Empty body=181 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FGraphicsPipelineStateKey,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateKey,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<304,8>_>,FDefaultAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  cVar1 = ConditionalRehash(param_1,param_2,1);
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



// FUNCTION 141ec17a0 Empty body=373 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSO>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
  
  iVar2 = *(int *)(param_1 + 0x28);
  puVar1 = (uint *)(param_1 + 0x10);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = *(uint **)(param_1 + 0x20);
    if (*(uint **)(param_1 + 0x20) == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar3) goto LAB_141ec1866;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_44 = (iStack_40 - iVar6) + 0x1f;
    if (iVar2 < iStack_44) {
LAB_141ec1866:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_141ed31e0(param_1,param_2);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar4) {
    *(uint *)(param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 141ec1920 Empty body=241 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      lVar2 = (longlong)local_1c * 0xa8 + *local_38;
      *(undefined4 *)(lVar2 + 0x98) = 0;
      if (*(longlong *)(lVar2 + 0x90) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar2 + 0x50);
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<FDragonData_SpineFeetPair,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar1 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) == uVar1) {
    return;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  return;
}



// FUNCTION 141ec1a20 Empty body=373 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<FPipelineCacheFileFormatPSO>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
  
  iVar2 = *(int *)(param_1 + 0x28);
  puVar1 = (uint *)(param_1 + 0x10);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = *(uint **)(param_1 + 0x20);
    if (*(uint **)(param_1 + 0x20) == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar3) goto LAB_141ec1ae6;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_44 = (iStack_40 - iVar6) + 0x1f;
    if (iVar2 < iStack_44) {
LAB_141ec1ae6:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_141a0a4d0(param_1,param_2);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar4) {
    *(uint *)(param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 141ec1ba0 EmptyCachedBoundShaderStates body=36 status=ok
// SIG undefined EmptyCachedBoundShaderStates(void)

void EmptyCachedBoundShaderStates(void)

{
  TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*,0>,FDefaultSetAllocator>
  ::Empty(&DAT_1464c9dd0,0);
  TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*,0>,FDefaultSetAllocator>
  ::Empty(&DAT_1464c9e20,0);
  return;
}



// FUNCTION 141ec1bd0 FUN_141ec1bd0 body=509 status=ok
// SIG undefined FUN_141ec1bd0(void)

void FUN_141ec1bd0(longlong param_1,char param_2,char param_3,undefined8 param_4,char param_5)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  DWORD DVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar1 = DAT_146ab65e0;
  if (*(char *)(param_1 + 0x18) == '\0') {
    lVar8 = 4;
    if (param_2 != '\0') {
      cVar2 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
         (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
        lVar7 = 4;
      }
      else {
        lVar7 = 0;
      }
      if (*(int *)(lVar7 + lVar1) == 0) {
        return;
      }
    }
    uVar3 = FUN_14164b510();
    *(undefined1 *)(param_1 + 0xd) = uVar3;
    lVar1 = DAT_146ab6610;
    if (param_3 != '\0') {
      cVar2 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
         (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
        lVar7 = 4;
      }
      else {
        lVar7 = 0;
      }
      if (*(int *)(lVar7 + lVar1) == 1) {
        SetEmitDrawEvents(1);
      }
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146ac3a08) &&
       (_Init_thread_header(&DAT_146ac3a08), DAT_146ac3a08 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_146ac3a00 =
           (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.StatNamedEventsMaxStack");
      _Init_thread_footer(&DAT_146ac3a08);
    }
    if ((DAT_146ac3a00 == (longlong *)0x0) ||
       (iVar5 = (**(code **)(*DAT_146ac3a00 + 0x68))(), iVar5 < 1)) {
      uVar6 = 0x7fffffff;
    }
    else {
      uVar6 = (**(code **)(*DAT_146ac3a00 + 0x68))();
    }
    *(undefined4 *)(param_1 + 0x14) = DAT_1468c21d4;
    lVar1 = DAT_146ab6628;
    if (param_5 != '\0') {
      cVar2 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar2 != '\0') || (DAT_1468c21ae == '\0')) ||
         (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)) {
        lVar8 = 0;
      }
      if (*(int *)(lVar8 + lVar1) == 1) {
        DAT_1468c21d4 = uVar6;
      }
    }
    FUN_141ed8300(1);
    *(undefined1 *)(param_1 + 0x18) = 1;
    *(char *)(param_1 + 0x19) = param_2;
  }
  return;
}



// FUNCTION 141ec1dd0 FUN_141ec1dd0 body=914 status=ok
// SIG undefined FUN_141ec1dd0(void)

/* WARNING: Removing unreachable block (ram,0x000141ec1f69) */

void FUN_141ec1dd0(undefined8 param_1,byte param_2)

{
  byte bVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  byte bVar7;
  int *piVar8;
  longlong lVar9;
  bool bVar10;
  bool bVar11;
  longlong *local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar8 < DAT_146ac39b0) && (_Init_thread_header(&DAT_146ac39b0), DAT_146ac39b0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146ac39a8 =
         (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.rhicmdbypass");
    _Init_thread_footer(&DAT_146ac39b0);
  }
  if ((*piVar8 < DAT_146ac39c0) && (_Init_thread_header(&DAT_146ac39c0), DAT_146ac39c0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146ac39b8 =
         (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.ShowMaterialDrawEvents")
    ;
    _Init_thread_footer(&DAT_146ac39c0);
  }
  if ((*piVar8 < DAT_146ac39d0) && (_Init_thread_header(&DAT_146ac39d0), DAT_146ac39d0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146ac39c8 =
         (longlong *)(**(code **)(*DAT_1468b1f88 + 0xa0))(DAT_1468b1f88,L"r.RHIThread.Enable");
    _Init_thread_footer(&DAT_146ac39d0);
  }
  plVar6 = (longlong *)0x0;
  if ((*piVar8 < DAT_146ac39e0) && (_Init_thread_header(&DAT_146ac39e0), DAT_146ac39e0 == -1)) {
    if (DAT_146ac39c8 != (longlong *)0x0) {
      plVar6 = (longlong *)(**(code **)(*DAT_146ac39c8 + 0x50))();
    }
    DAT_146ac39d8 = plVar6;
    _Init_thread_footer(&DAT_146ac39e0);
  }
  bVar7 = param_2 ^ 1;
  cVar3 = FUN_14164b510();
  if (DAT_146ac39b8 == (longlong *)0x0) {
    bVar10 = false;
  }
  else {
    iVar4 = (**(code **)(*DAT_146ac39b8 + 0x68))(DAT_146ac39b8);
    bVar10 = iVar4 != 0;
  }
  bVar1 = DAT_146ab6383;
  if (DAT_146ac39a8 == (longlong *)0x0) {
    bVar11 = false;
  }
  else {
    iVar4 = (**(code **)(*DAT_146ac39a8 + 0x68))();
    bVar11 = iVar4 != 0;
  }
  if ((bool)param_2 != (cVar3 != '\0')) {
    SetEmitDrawEvents(param_2);
  }
  if (((bool)param_2 != bVar10) && (DAT_146ac39b8 != (longlong *)0x0)) {
    IConsoleVariable::Set(DAT_146ac39b8,bVar7 - 1,0x8000000);
  }
  if ((bVar1 != bVar7) && (DAT_146ac39d8 != (longlong *)0x0)) {
    local_38 = (longlong *)0x0;
    local_30 = 0;
    FString::PrintfImpl(&local_28,&DAT_144ed7634,bVar7);
    uVar2 = local_30;
    lVar9 = (longlong)(int)local_30;
    iVar4 = (int)local_30 + 1;
    local_30 = CONCAT44(local_30._4_4_,iVar4);
    if (local_30._4_4_ < iVar4) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_38,uVar2 & 0xffffffff);
    }
    plVar6 = local_38 + lVar9 * 2;
    *plVar6 = 0;
    *plVar6 = local_28;
    *(undefined4 *)(plVar6 + 1) = (undefined4)local_20;
    *(undefined4 *)((longlong)plVar6 + 0xc) = local_20._4_4_;
    local_20 = 0;
    local_28 = 0;
    lVar9 = *DAT_146ac39d8;
    uVar5 = FUN_141672640();
    (**(code **)(lVar9 + 0x68))(DAT_146ac39d8,&local_38,0,uVar5);
    plVar6 = local_38;
    for (iVar4 = (int)local_30; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  if ((bVar11 != (bool)param_2) && (DAT_146ac39a8 != (longlong *)0x0)) {
    IConsoleVariable::Set(DAT_146ac39a8,param_2,0x9000000);
  }
  return;
}



// FUNCTION 141ec2170 FUN_141ec2170 body=663 status=ok
// SIG undefined FUN_141ec2170(void)

void FUN_141ec2170(longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  char cVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined8 *puVar13;
  longlong local_20;
  
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar13 + 4;
  if (*(undefined8 **)(param_1 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x28);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar13 + 4;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar8;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *(undefined1 *)(puVar13 + 3) = param_3;
  *puVar13 = &PTR_FUN_144edb040;
  puVar13[2] = param_2;
  *(undefined1 *)((longlong)puVar13 + 0x19) = param_4;
  if (DAT_146ab6383 != '\0') {
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar13 + 3;
    if (*(undefined8 **)(param_1 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
      puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar13 + 3;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar8;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar13;
    *(undefined8 **)(param_1 + 8) = puVar13 + 1;
    puVar13[1] = 0;
    *puVar13 = &PTR_FUN_144edb3c0;
    FUN_1415914c0(puVar13 + 2);
    local_20 = puVar13[2];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 0x48) = *(int *)(local_20 + 0x48) + 1;
      UNLOCK();
    }
    plVar3 = &DAT_146ab7268 + DAT_146ab693c;
    if (plVar3 == &local_20) {
      if (local_20 == 0) goto LAB_141ec22da;
      LOCK();
      piVar1 = (int *)(local_20 + 0x48);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      lVar5 = local_20;
    }
    else {
      lVar5 = *plVar3;
      *plVar3 = local_20;
      if (lVar5 == 0) goto LAB_141ec22da;
      LOCK();
      piVar1 = (int *)(lVar5 + 0x48);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    if (iVar4 == 1) {
      FGraphEvent::Recycle(lVar5);
    }
  }
LAB_141ec22da:
  if (DAT_146ab6e8c != 0) {
    FUN_141ec3e80(&DAT_146ab6e68,&DAT_146ab6e78);
  }
  uVar12 = DAT_146ab693c;
  if (DAT_146ab6383 != '\0') {
    uVar12 = 1 - DAT_146ab693c;
    plVar3 = &DAT_146ab7268 + uVar12;
    if ((&DAT_146ab7268)[uVar12] != 0) {
      puVar2 = (ulonglong *)((&DAT_146ab7268)[uVar12] + 8);
      LOCK();
      uVar9 = *puVar2;
      if (uVar9 == 0) {
        *puVar2 = 0;
        uVar9 = 0;
      }
      UNLOCK();
      if ((uVar9 >> 0x1a & 1) == 0) {
        if (DAT_146ab6e8c != 0) {
          FUN_141ec3e80(&DAT_146ab6e68,&DAT_146ab6e78);
        }
        uVar6 = DAT_1464a8214;
        plVar10 = (longlong *)FTaskGraphInterface::Get();
        cVar7 = (**(code **)(*plVar10 + 0x20))(plVar10,uVar6);
        if (cVar7 != '\0') {
          LowLevelFatalErrorHandler("Unknown",0x356,L"Deadlock in WaitOnRHIThreadFence.");
          FDebug::AssertFailed(&DAT_144ed1076,"Unknown",0x356,L"Deadlock in WaitOnRHIThreadFence.");
        }
        uVar11 = FTaskGraphInterface::Get();
        FTaskGraphInterface::WaitUntilTaskCompletes(uVar11,plVar3,uVar6);
      }
    }
    lVar5 = *plVar3;
    *plVar3 = 0;
    if (lVar5 != 0) {
      LOCK();
      piVar1 = (int *)(lVar5 + 0x48);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        FGraphEvent::Recycle();
      }
    }
  }
  DAT_146ab693c = uVar12;
                    /* WARNING: Could not recover jumptable at 0x000141ec2400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146ab6358 + 0x368))(DAT_146ab6358,param_2);
  return;
}



// FUNCTION 141ec2410 EndFrame body=237 status=ok
// SIG undefined EndFrame(void)

void FRHICommandList::EndFrame(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar1 = puVar2 + 2;
  if (*(undefined8 **)(param_1 + 0x38) < puVar1) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x18);
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar1 = puVar2 + 2;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar1;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar2;
  *(undefined8 **)(param_1 + 8) = puVar2 + 1;
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_144edb020;
  if (DAT_146ab6383 == '\0') {
    if (DAT_146ab6e8c != 0) {
      FUN_141ec3e80(&DAT_146ab6e68,&DAT_146ab6e78);
    }
    FUN_141ed93a0(&DAT_146ab6e78);
    if (DAT_146ab6383 != '\0') {
      FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
    }
    FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
    return;
  }
  if (DAT_146ab6e8c != 0) {
    FUN_141ec3e80(&DAT_146ab6e68,&DAT_146ab6e78);
  }
  return;
}



// FUNCTION 141ec2500 FUN_141ec2500 body=41 status=ok
// SIG undefined FUN_141ec2500(void)

void FUN_141ec2500(longlong param_1)

{
  int iVar1;
  
  *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
  iVar1 = *(int *)(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0xc4) = 0;
  if (DAT_1464c9c3c <= iVar1) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0xc0) = iVar1;
  return;
}



// FUNCTION 141ec2530 BeginFrame body=199 status=ok
// SIG undefined BeginFrame(void)

void FRHICommandList::BeginFrame(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar1 = puVar2 + 2;
  if (*(undefined8 **)(param_1 + 0x38) < puVar1) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x18);
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar1 = puVar2 + 2;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar1;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar2;
  *(undefined8 **)(param_1 + 8) = puVar2 + 1;
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_144edb000;
  if (DAT_146ab6383 == '\0') {
    if (DAT_146ab6e8c != 0) {
      FUN_141ec3e80(&DAT_146ab6e68,&DAT_146ab6e78);
    }
    FUN_141ed93a0(&DAT_146ab6e78);
    if (DAT_146ab6383 != '\0') {
      FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
    }
    FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
  }
  return;
}



// FUNCTION 141ec2600 FUN_141ec2600 body=154 status=ok
// SIG undefined FUN_141ec2600(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141ec2600(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_2);
    if (cVar1 != '\0') {
      lVar2 = param_2;
    }
  }
  (**(code **)(*DAT_146ab6358 + 0x2d0))
            (DAT_146ab6358,*param_3,*(undefined4 *)(param_3 + 1),(longlong)param_3 + 0xc,
             *(undefined4 *)(param_3 + 6),*(undefined4 *)((longlong)param_3 + 0x34),param_3[7]);
  FMemory::Free(param_3[7]);
  param_3[7] = 0;
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return;
}



// FUNCTION 141ec2790 FUN_141ec2790 body=77 status=ok
// SIG undefined FUN_141ec2790(void)

void FUN_141ec2790(longlong param_1,longlong param_2)

{
  int *piVar1;
  
  (**(code **)(**(longlong **)(param_2 + 0x20) + 0x60))
            (*(longlong **)(param_2 + 0x20),*(undefined8 *)(param_1 + 0x10),
             *(undefined4 *)(param_1 + 0x18),**(undefined8 **)(*(longlong *)(param_1 + 0x20) + 0x10)
            );
  piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 8);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>
              (*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10));
    return;
  }
  return;
}



// FUNCTION 141ec27e0 Execute body=80 status=ok
// SIG undefined Execute(void)

void FRHICommandSetLocalUniformBuffer<FRHIVertexShader_*>::Execute
               (longlong param_1,longlong param_2)

{
  int *piVar1;
  
  (**(code **)(**(longlong **)(param_2 + 0x20) + 0x200))
            (*(longlong **)(param_2 + 0x20),*(undefined8 *)(param_1 + 0x10),
             *(undefined4 *)(param_1 + 0x18),**(undefined8 **)(*(longlong *)(param_1 + 0x20) + 0x10)
            );
  piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 8);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>
              (*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10));
    return;
  }
  return;
}



// FUNCTION 141ec2830 FUN_141ec2830 body=80 status=ok
// SIG undefined FUN_141ec2830(void)

void FUN_141ec2830(longlong param_1,longlong param_2)

{
  int *piVar1;
  
  (**(code **)(**(longlong **)(param_2 + 0x20) + 0x1f8))
            (*(longlong **)(param_2 + 0x20),*(undefined8 *)(param_1 + 0x10),
             *(undefined4 *)(param_1 + 0x18),**(undefined8 **)(*(longlong *)(param_1 + 0x20) + 0x10)
            );
  piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 8);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>
              (*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10));
    return;
  }
  return;
}



// FUNCTION 141ec2880 Execute body=80 status=ok
// SIG undefined Execute(void)

void FRHICommandSetLocalUniformBuffer<FRHIPixelShader>::Execute(longlong param_1,longlong param_2)

{
  int *piVar1;
  
  (**(code **)(**(longlong **)(param_2 + 0x20) + 0x208))
            (*(longlong **)(param_2 + 0x20),*(undefined8 *)(param_1 + 0x10),
             *(undefined4 *)(param_1 + 0x18),**(undefined8 **)(*(longlong *)(param_1 + 0x20) + 0x10)
            );
  piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 8);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>
              (*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10));
    return;
  }
  return;
}



// FUNCTION 141ec28d0 FUN_141ec28d0 body=80 status=ok
// SIG undefined FUN_141ec28d0(void)

void FUN_141ec28d0(longlong param_1,longlong param_2)

{
  int *piVar1;
  
  (**(code **)(**(longlong **)(param_2 + 0x20) + 0x1f0))
            (*(longlong **)(param_2 + 0x20),*(undefined8 *)(param_1 + 0x10),
             *(undefined4 *)(param_1 + 0x18),**(undefined8 **)(*(longlong *)(param_1 + 0x20) + 0x10)
            );
  piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 8);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>
              (*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10));
    return;
  }
  return;
}



// FUNCTION 141ec2920 Execute body=80 status=ok
// SIG undefined Execute(void)

void FRHICommandSetLocalUniformBuffer<FRHIPixelShader>::Execute(longlong param_1,longlong param_2)

{
  int *piVar1;
  
  (**(code **)(**(longlong **)(param_2 + 0x20) + 0x210))
            (*(longlong **)(param_2 + 0x20),*(undefined8 *)(param_1 + 0x10),
             *(undefined4 *)(param_1 + 0x18),**(undefined8 **)(*(longlong *)(param_1 + 0x20) + 0x10)
            );
  piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 8);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>
              (*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10));
    return;
  }
  return;
}



// FUNCTION 141ec2970 FUN_141ec2970 body=52 status=ok
// SIG undefined FUN_141ec2970(void)

void FUN_141ec2970(longlong param_1,longlong param_2)

{
  (**(code **)(**(longlong **)(param_2 + 0x28) + 0x68))
            (*(longlong **)(param_2 + 0x28),*(undefined8 *)(param_1 + 0x10),
             *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
             *(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 141ec29b0 FUN_141ec29b0 body=52 status=ok
// SIG undefined FUN_141ec29b0(void)

void FUN_141ec29b0(longlong param_1,longlong param_2)

{
  (**(code **)(**(longlong **)(param_2 + 0x20) + 0x68))
            (*(longlong **)(param_2 + 0x20),*(undefined8 *)(param_1 + 0x10),
             *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
             *(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 141ec29f0 FUN_141ec29f0 body=55 status=ok
// SIG undefined FUN_141ec29f0(void)

void FUN_141ec29f0(longlong param_1,longlong param_2)

{
  (**(code **)(**(longlong **)(param_2 + 0x20) + 0x220))
            (*(longlong **)(param_2 + 0x20),*(undefined8 *)(param_1 + 0x10),
             *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
             *(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 141ec2a30 FUN_141ec2a30 body=55 status=ok
// SIG undefined FUN_141ec2a30(void)

void FUN_141ec2a30(longlong param_1,longlong param_2)

{
  (**(code **)(**(longlong **)(param_2 + 0x20) + 0x218))
            (*(longlong **)(param_2 + 0x20),*(undefined8 *)(param_1 + 0x10),
             *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
             *(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 141ec2a70 Execute body=55 status=ok
// SIG undefined Execute(void)

void FRHICommandSetShaderParameter<FRHIVertexShader_*,0>::Execute(longlong param_1,longlong param_2)

{
  (**(code **)(**(longlong **)(param_2 + 0x20) + 0x228))
            (*(longlong **)(param_2 + 0x20),*(undefined8 *)(param_1 + 0x10),
             *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
             *(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 141ec2ab0 Execute body=55 status=ok
// SIG undefined Execute(void)

void FRHICommandSetShaderParameter<FRHIVertexShader,0>::Execute(longlong param_1,longlong param_2)

{
  (**(code **)(**(longlong **)(param_2 + 0x20) + 0x230))
            (*(longlong **)(param_2 + 0x20),*(undefined8 *)(param_1 + 0x10),
             *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
             *(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 141ec2af0 Execute body=55 status=ok
// SIG undefined Execute(void)

void FRHICommandSetShaderParameter<FRHIGraphicsShader>::Execute(longlong param_1,longlong param_2)

{
  (**(code **)(**(longlong **)(param_2 + 0x20) + 0x238))
            (*(longlong **)(param_2 + 0x20),*(undefined8 *)(param_1 + 0x10),
             *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
             *(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 141ec2bf0 FUN_141ec2bf0 body=46 status=ok
// SIG undefined FUN_141ec2bf0(void)

void FUN_141ec2bf0(longlong param_1,longlong param_2)

{
  (**(code **)(**(longlong **)(param_2 + 0x20) + 0x1e0))
            (*(longlong **)(param_2 + 0x20),*(undefined8 *)(param_1 + 0x10),
             *(undefined4 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
             *(undefined4 *)(param_1 + 0x28));
  return;
}



// FUNCTION 141ec2f00 FUN_141ec2f00 body=43 status=ok
// SIG undefined FUN_141ec2f00(void)

void FUN_141ec2f00(longlong param_1,longlong param_2)

{
  (**(code **)(**(longlong **)(param_2 + 0x20) + 0x48))
            (*(longlong **)(param_2 + 0x20),*(undefined8 *)(param_1 + 0x10),
             *(undefined4 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
             *(undefined4 *)(param_1 + 0x28));
  return;
}



// FUNCTION 141ec2f40 FUN_141ec2f40 body=52 status=ok
// SIG undefined FUN_141ec2f40(void)

void FUN_141ec2f40(longlong param_1,longlong param_2)

{
  (**(code **)(**(longlong **)(param_2 + 0x28) + 0x30))
            (*(longlong **)(param_2 + 0x28),*(undefined4 *)(param_1 + 0x20),
             *(undefined4 *)(param_1 + 0x24),*(undefined8 *)(param_1 + 0x18),
             *(undefined4 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 141ec2f80 Execute body=52 status=ok
// SIG undefined Execute(void)

void FRHICommandTransitionUAVs<0>::Execute(longlong param_1,longlong param_2)

{
  (**(code **)(**(longlong **)(param_2 + 0x20) + 0x30))
            (*(longlong **)(param_2 + 0x20),*(undefined4 *)(param_1 + 0x20),
             *(undefined4 *)(param_1 + 0x24),*(undefined8 *)(param_1 + 0x18),
             *(undefined4 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 141ec3020 FUN_141ec3020 body=28 status=ok
// SIG undefined FUN_141ec3020(void)

void FUN_141ec3020(longlong param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000141ec3035. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_2 + 0x20) + 0x2d8))
            (*(longlong **)(param_2 + 0x20),param_1 + 0x10,*(undefined8 *)(param_1 + 0x170));
  return;
}



// FUNCTION 141ec30a0 Execute body=384 status=ok
// SIG undefined Execute(void)

longlong * FRHICommandBuildLocalUniformBuffer::Execute(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *local_res18;
  
  plVar7 = *(longlong **)(param_1 + 0x20);
  if ((int)plVar7[1] != 0) {
    plVar7 = (longlong *)
             (**(code **)(*DAT_146ab6358 + 0x110))
                       (DAT_146ab6358,&local_res18,*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_1 + 0x18),1);
    plVar4 = *(longlong **)(param_1 + 0x20);
    if (plVar4 != plVar7) {
      puVar5 = (undefined8 *)*plVar4;
      *plVar4 = *plVar7;
      *plVar7 = 0;
      if (puVar5 != (undefined8 *)0x0) {
        LOCK();
        puVar1 = (uint *)(puVar5 + 1);
        uVar6 = *puVar1;
        plVar7 = (longlong *)(ulonglong)uVar6;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if (uVar6 == 1) {
          if (*(char *)(puVar5 + 2) == '\0') {
            plVar7 = (longlong *)0x0;
            LOCK();
            uVar6 = *(uint *)((longlong)puVar5 + 0xc);
            if (uVar6 == 0) {
              *(uint *)((longlong)puVar5 + 0xc) = 1;
            }
            else {
              plVar7 = (longlong *)(ulonglong)uVar6;
            }
            UNLOCK();
            if (uVar6 == 0) {
              uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
              if (uVar6 == 0) {
                lVar8 = 0;
              }
              else {
                lVar8 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
              }
              *(undefined8 **)(lVar8 + 8) = puVar5;
              plVar7 = (longlong *)FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            plVar7 = (longlong *)(**(code **)*puVar5)(puVar5,1);
          }
        }
      }
    }
    if (local_res18 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(local_res18 + 1);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        if (*(char *)(local_res18 + 2) == '\0') {
          plVar7 = (longlong *)0x0;
          LOCK();
          uVar6 = *(uint *)((longlong)local_res18 + 0xc);
          if (uVar6 == 0) {
            *(uint *)((longlong)local_res18 + 0xc) = 1;
          }
          else {
            plVar7 = (longlong *)(ulonglong)uVar6;
          }
          UNLOCK();
          if (uVar6 == 0) {
            uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar6 == 0) {
              lVar8 = 0;
            }
            else {
              lVar8 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar8 + 8) = local_res18;
            plVar7 = (longlong *)FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940,uVar6);
          }
        }
        else {
          plVar7 = (longlong *)(**(code **)*local_res18)(local_res18,1);
        }
      }
    }
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return plVar7;
}



// FUNCTION 141ec32c0 FUN_141ec32c0 body=78 status=ok
// SIG undefined FUN_141ec32c0(void)

void FUN_141ec32c0(longlong param_1,longlong param_2)

{
  (**(code **)(**(longlong **)(param_2 + 0x20) + 0x280))
            (*(longlong **)(param_2 + 0x20),*(undefined8 *)(param_1 + 0x10),
             *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
             *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
             *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
             *(undefined4 *)(param_1 + 0x30));
  return;
}



// FUNCTION 141ec3310 FUN_141ec3310 body=46 status=ok
// SIG undefined FUN_141ec3310(void)

void FUN_141ec3310(longlong param_1,longlong param_2)

{
  (**(code **)(**(longlong **)(param_2 + 0x20) + 0x288))
            (*(longlong **)(param_2 + 0x20),*(undefined4 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
             *(undefined4 *)(param_1 + 0x24));
  return;
}



// FUNCTION 141ec3340 FUN_141ec3340 body=46 status=ok
// SIG undefined FUN_141ec3340(void)

void FUN_141ec3340(longlong param_1,longlong param_2)

{
  (**(code **)(**(longlong **)(param_2 + 0x20) + 0x268))
            (*(longlong **)(param_2 + 0x20),*(undefined4 *)(param_1 + 0x10),
             *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
             *(undefined4 *)(param_1 + 0x1c));
  return;
}



// FUNCTION 141ec3390 FUN_141ec3390 body=167 status=ok
// SIG undefined FUN_141ec3390(void)

void FUN_141ec3390(longlong param_1,longlong param_2)

{
  void *local_res8;
  void *local_res10;
  
  local_res8 = (void *)0x0;
  local_res10 = (void *)0x0;
  (**(code **)(**(longlong **)(param_2 + 0x20) + 0x2a0))
            (*(longlong **)(param_2 + 0x20),*(undefined4 *)(param_1 + 0x10),
             *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
             *(undefined4 *)(param_1 + 0x1c),&local_res8,*(undefined4 *)(param_1 + 0x28),
             *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),&local_res10);
  _guard_xfg_dispatch_icall_nop
            (local_res8,*(void **)(param_1 + 0x20),
             (ulonglong)(uint)(*(int *)(param_1 + 0x1c) * *(int *)(param_1 + 0x18)));
  _guard_xfg_dispatch_icall_nop
            (local_res10,*(void **)(param_1 + 0x38),
             (ulonglong)(uint)(*(int *)(param_1 + 0x30) * *(int *)(param_1 + 0x2c)));
  (**(code **)(**(longlong **)(param_2 + 0x20) + 0x2a8))();
  return;
}



// FUNCTION 141ec3440 FUN_141ec3440 body=114 status=ok
// SIG undefined FUN_141ec3440(void)

void FUN_141ec3440(longlong param_1,longlong param_2)

{
  void *local_res8;
  
  local_res8 = (void *)0x0;
  (**(code **)(**(longlong **)(param_2 + 0x20) + 0x290))
            (*(longlong **)(param_2 + 0x20),*(undefined4 *)(param_1 + 0x10),
             *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
             *(undefined4 *)(param_1 + 0x1c),&local_res8);
  _guard_xfg_dispatch_icall_nop
            (local_res8,*(void **)(param_1 + 0x20),
             (ulonglong)(uint)(*(int *)(param_1 + 0x1c) * *(int *)(param_1 + 0x18)));
  (**(code **)(**(longlong **)(param_2 + 0x20) + 0x298))();
  return;
}



// FUNCTION 141ec3560 FUN_141ec3560 body=64 status=ok
// SIG undefined FUN_141ec3560(void)

void FUN_141ec3560(longlong param_1,longlong param_2)

{
  (**(code **)(**(longlong **)(param_2 + 0x20) + 0x250))
            (*(longlong **)(param_2 + 0x20),*(undefined4 *)(param_1 + 0x10),param_1 + 0x18,
             param_1 + 0xd8,*(undefined4 *)(param_1 + 0xe8),param_1 + 0xf0);
  return;
}



// FUNCTION 141ec35a0 FUN_141ec35a0 body=21 status=ok
// SIG undefined FUN_141ec35a0(void)

void FUN_141ec35a0(longlong param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000141ec35ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_2 + 0x20) + 600))
            (*(longlong **)(param_2 + 0x20),param_1 + 0x10);
  return;
}



// FUNCTION 141ec35c0 Execute body=55 status=ok
// SIG undefined Execute(void)

void FRHICommandSetScissorRect::Execute(longlong param_1,longlong param_2)

{
  (**(code **)(**(longlong **)(param_2 + 0x20) + 0x160))
            (*(longlong **)(param_2 + 0x20),*(undefined1 *)(param_1 + 0x10),
             *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
             *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
  return;
}



// FUNCTION 141ec3620 Execute body=102 status=ok
// SIG undefined Execute(void)

void FRHICommandSetStereoViewport::Execute(longlong param_1,longlong param_2)

{
  (**(code **)(**(longlong **)(param_2 + 0x20) + 0x158))
            (*(longlong **)(param_2 + 0x20),*(undefined4 *)(param_1 + 0x10),
             *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
             *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
             *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
             *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),
             *(undefined4 *)(param_1 + 0x34));
  return;
}



// FUNCTION 141ec36b0 Execute body=68 status=ok
// SIG undefined Execute(void)

void FRHICommandSetViewport::Execute(longlong param_1,longlong param_2)

{
  (**(code **)(**(longlong **)(param_2 + 0x20) + 0x150))
            (*(longlong **)(param_2 + 0x20),*(undefined4 *)(param_1 + 0x10),
             *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
             *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
             *(undefined4 *)(param_1 + 0x24));
  return;
}



// FUNCTION 141ec3720 FUN_141ec3720 body=47 status=ok
// SIG undefined FUN_141ec3720(void)

void FUN_141ec3720(longlong param_1,longlong param_2)

{
  (**(code **)(**(longlong **)(param_2 + 0x20) + 200))
            (*(longlong **)(param_2 + 0x20),*(undefined4 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x10),
             *(undefined1 *)(param_1 + 0x24));
  return;
}



// FUNCTION 141ec3750 FUN_141ec3750 body=45 status=ok
// SIG undefined FUN_141ec3750(void)

void FUN_141ec3750(longlong param_1,longlong param_2)

{
  (**(code **)(**(longlong **)(param_2 + 0x20) + 200))
            (*(longlong **)(param_2 + 0x20),*(undefined4 *)(param_1 + 0x18),
             **(undefined8 **)(param_1 + 0x10),*(undefined4 *)(*(undefined8 **)(param_1 + 0x10) + 1)
             ,0);
  return;
}



// FUNCTION 141ec37a0 FUN_141ec37a0 body=46 status=ok
// SIG undefined FUN_141ec37a0(void)

void FUN_141ec37a0(longlong param_1,longlong param_2)

{
  (**(code **)(**(longlong **)(param_2 + 0x20) + 0xd0))
            (*(longlong **)(param_2 + 0x20),*(undefined4 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x10),
             *(undefined4 *)(param_1 + 0x24));
  return;
}



// FUNCTION 141ec3800 FUN_141ec3800 body=42 status=ok
// SIG undefined FUN_141ec3800(void)

void FUN_141ec3800(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FRHICommandListBase::~FRHICommandListBase(lVar1);
    FMemory::Free(lVar1);
    return;
  }
  return;
}



// FUNCTION 141ec3870 FUN_141ec3870 body=61 status=ok
// SIG undefined FUN_141ec3870(void)

void FUN_141ec3870(longlong param_1,longlong param_2)

{
  (**(code **)(**(longlong **)(param_2 + 0x20) + 0x100))
            (*(longlong **)(param_2 + 0x20),*(undefined8 *)(param_1 + 0x10),
             *(undefined1 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x19));
  DAT_146ab632c = DAT_146ab6330;
  DAT_146ab6330 = 0;
  return;
}



// FUNCTION 141ec38d0 FUN_141ec38d0 body=217 status=ok
// SIG undefined FUN_141ec38d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141ec38d0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146ac3aa8) {
    _Init_thread_header(&DAT_146ac3aa8);
    if (DAT_146ac3aa8 == -1) {
      DAT_146ac3a98 = 0;
      _DAT_146ac3aa0 = 0;
      atexit((_func_5014 *)&LAB_143ea0c30);
      _Init_thread_footer(&DAT_146ac3aa8);
    }
  }
  uVar4 = 0xff;
  if (DAT_146ab6388 != '\0') {
    uVar4 = 0;
  }
  FUN_141591a60(*(undefined8 *)(param_1 + 0x10),&DAT_146ac3a98,uVar4);
  lVar3 = *(longlong *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  return;
}



// FUNCTION 141ec3a00 FUN_141ec3a00 body=62 status=ok
// SIG undefined FUN_141ec3a00(void)

void FUN_141ec3a00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FRHICommandListBase::~FRHICommandListBase(lVar1);
    FMemory::Free(lVar1);
    return;
  }
  return;
}



// FUNCTION 141ec3a40 ExecuteAndDestruct body=96 status=ok
// SIG undefined ExecuteAndDestruct(void)

void FRHICommand<FRHICommandUpdateIndexBuffer>::ExecuteAndDestruct(longlong param_1)

{
  void *_Dst;
  
  _Dst = (void *)(**(code **)(*DAT_146ab6358 + 0x120))
                           (DAT_146ab6358,*(undefined8 *)(param_1 + 0x10),
                            *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x20),1);
  ::_guard_xfg_dispatch_icall_nop
            (_Dst,*(void **)(param_1 + 0x18),(ulonglong)*(uint *)(param_1 + 0x20));
  FMemory::Free(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000141ec3a99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146ab6358 + 0x128))(DAT_146ab6358,*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 141ec3aa0 FUN_141ec3aa0 body=107 status=ok
// SIG undefined FUN_141ec3aa0(void)

void FUN_141ec3aa0(longlong *param_1)

{
  void *_Dst;
  
  _Dst = (void *)(**(code **)(*DAT_146ab6358 + 0x158))
                           (DAT_146ab6358,param_1[2],*(undefined4 *)((longlong)param_1 + 0x24),
                            (int)param_1[4],1);
  _guard_xfg_dispatch_icall_nop(_Dst,(void *)param_1[3],(ulonglong)*(uint *)(param_1 + 4));
  FMemory::Free(param_1[3]);
  (**(code **)(*DAT_146ab6358 + 0x160))(DAT_146ab6358,param_1[2]);
                    /* WARNING: Could not recover jumptable at 0x000141ec3b07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,0);
  return;
}



// FUNCTION 141ec3b30 ExecuteAndDestruct body=96 status=ok
// SIG undefined ExecuteAndDestruct(void)

void FRHICommand<FRHICommandUpdateVertexBuffer>::ExecuteAndDestruct(longlong param_1)

{
  void *_Dst;
  
  _Dst = (void *)(**(code **)(*DAT_146ab6358 + 0x138))
                           (DAT_146ab6358,*(undefined8 *)(param_1 + 0x10),
                            *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x20),1);
  ::_guard_xfg_dispatch_icall_nop
            (_Dst,*(void **)(param_1 + 0x18),(ulonglong)*(uint *)(param_1 + 0x20));
  FMemory::Free(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000141ec3b89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146ab6358 + 0x140))(DAT_146ab6358,*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 141ec3b90 FUN_141ec3b90 body=305 status=ok
// SIG undefined FUN_141ec3b90(void)

void FUN_141ec3b90(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  char cVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  if (*plVar1 != 0) {
    puVar2 = (ulonglong *)(*plVar1 + 8);
    LOCK();
    uVar8 = *puVar2;
    if (uVar8 == 0) {
      *puVar2 = 0;
      uVar8 = 0;
    }
    UNLOCK();
    if ((uVar8 >> 0x1a & 1) == 0) {
      cVar7 = IsInRenderingThread();
      uVar6 = DAT_1464a8214;
      if (cVar7 == '\0') {
        uVar10 = FTaskGraphInterface::Get();
        FTaskGraphInterface::WaitUntilTaskCompletes(uVar10,plVar1,0xff);
      }
      else {
        plVar9 = (longlong *)FTaskGraphInterface::Get();
        cVar7 = (**(code **)(*plVar9 + 0x20))(plVar9,uVar6);
        if (cVar7 != '\0') {
          LowLevelFatalErrorHandler("Unknown",0x604,L"Deadlock in command list processing.");
          FDebug::AssertFailed
                    (&DAT_143f3f584,"Unknown",0x604,L"Deadlock in command list processing.");
        }
        uVar10 = FTaskGraphInterface::Get();
        FTaskGraphInterface::WaitUntilTaskCompletes(uVar10,plVar1,uVar6);
      }
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x18);
  *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  lVar5 = *(longlong *)(param_1 + 0x18);
  if (lVar5 != 0) {
    FRHICommandListBase::~FRHICommandListBase(lVar5);
    FMemory::Free(lVar5);
  }
  if (*plVar1 != 0) {
    LOCK();
    piVar3 = (int *)(*plVar1 + 0x48);
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      FGraphEvent::Recycle();
      return;
    }
  }
  return;
}



// FUNCTION 141ec3cd0 ExecuteAndDestruct body=236 status=ok
// SIG undefined ExecuteAndDestruct(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FRHICommand<FRHICommandWaitForAndSubmitSubList>::ExecuteAndDestruct
               (longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  char cVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x10) + 8);
    LOCK();
    uVar7 = *puVar1;
    if (uVar7 == 0) {
      *puVar1 = 0;
      uVar7 = 0;
    }
    UNLOCK();
    if ((((uVar7 >> 0x1a & 1) == 0) && (DAT_146ab6383 != '\0')) &&
       (cVar6 = FUN_1415e13e0(), cVar6 != '\0')) {
      _DAT_146ab62c0 = *(undefined8 *)(param_1 + 0x10);
    }
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x10) + 8);
    LOCK();
    uVar7 = *puVar1;
    if (uVar7 == 0) {
      *puVar1 = 0;
      uVar7 = 0;
    }
    UNLOCK();
    if (((uVar7 >> 0x1a & 1) == 0) &&
       (cVar6 = IsInRenderingThread(), uVar5 = DAT_1464a8214, cVar6 != '\0')) {
      uVar8 = FTaskGraphInterface::Get();
      FTaskGraphInterface::WaitUntilTaskCompletes(uVar8,param_1 + 0x10,uVar5);
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x18);
  *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 != 0) {
    FRHICommandListBase::~FRHICommandListBase(lVar4);
    FMemory::Free(lVar4);
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    LOCK();
    piVar2 = (int *)(*(longlong *)(param_1 + 0x10) + 0x48);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      FGraphEvent::Recycle();
    }
  }
  return;
}



// FUNCTION 141ec3dc0 ExecuteAndDestruct body=190 status=ok
// SIG undefined ExecuteAndDestruct(void)

void FRHICommand<FRHICommandWaitForAndSubmitSubListParallel>::ExecuteAndDestruct(longlong param_1)

{
  ulonglong *puVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x10) + 8);
    LOCK();
    uVar5 = *puVar1;
    if (uVar5 == 0) {
      *puVar1 = 0;
      uVar5 = 0;
    }
    UNLOCK();
    if ((uVar5 >> 0x1a & 1) == 0) {
      cVar4 = IsInRenderingThread();
      uVar7 = DAT_1464a8214;
      if (cVar4 == '\0') {
        cVar4 = FUN_1415e13e0();
        if (cVar4 == '\0') goto LAB_141ec3e3d;
        uVar7 = 0xff;
        if (DAT_146ab6388 != '\0') {
          uVar7 = 0;
        }
      }
      uVar6 = FTaskGraphInterface::Get();
      FTaskGraphInterface::WaitUntilTaskCompletes(uVar6,param_1 + 0x10,uVar7);
    }
  }
LAB_141ec3e3d:
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))
            (*(longlong **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x24),
             *(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    LOCK();
    piVar2 = (int *)(*(longlong *)(param_1 + 0x10) + 0x48);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      FGraphEvent::Recycle();
      return;
    }
  }
  return;
}



// FUNCTION 141ec3e80 FUN_141ec3e80 body=2480 status=ok
// SIG undefined FUN_141ec3e80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141ec3e80(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  longlong lVar10;
  undefined4 uVar11;
  char cVar12;
  char cVar13;
  DWORD DVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  longlong *plVar19;
  int iVar20;
  undefined8 *puVar21;
  longlong lVar22;
  int iVar23;
  bool bVar24;
  undefined1 auStack_118 [40];
  undefined1 local_f0 [24];
  undefined1 local_d8 [24];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  longlong local_90 [4];
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  cVar12 = IsInRenderingThread();
  cVar13 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar13 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar14 = GetCurrentThreadId(), DVar14 != DAT_1468c21c0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  uVar11 = DAT_1464a8214;
  if (DAT_146ab6383 == '\0') goto LAB_141ec47ef;
  bVar24 = false;
  lVar22 = 0;
  if (cVar12 != '\0') {
    if (!bVar9) {
      plVar15 = (longlong *)FTaskGraphInterface::Get();
      cVar13 = (**(code **)(*plVar15 + 0x20))(plVar15,uVar11);
      if (cVar13 == '\0') {
        plVar15 = (longlong *)FTaskGraphInterface::Get();
        (**(code **)(*plVar15 + 0x30))(plVar15,uVar11);
      }
    }
    iVar20 = *(int *)(DAT_146ab6d88 + 4);
    bVar24 = 0 < iVar20;
    if (DAT_146ab7258 == 0) {
LAB_141ec4014:
      if (0 < iVar20) goto LAB_141ec4082;
    }
    else {
      LOCK();
      uVar18 = *(ulonglong *)(DAT_146ab7258 + 8);
      if (uVar18 == 0) {
        *(ulonglong *)(DAT_146ab7258 + 8) = 0;
        uVar18 = 0;
      }
      lVar16 = DAT_146ab7258;
      UNLOCK();
      if ((uVar18 >> 0x1a & 1) == 0) goto LAB_141ec4014;
      DAT_146ab7258 = 0;
      if (lVar16 != 0) {
        LOCK();
        piVar1 = (int *)(lVar16 + 0x48);
        iVar23 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar23 == 1) {
          FGraphEvent::Recycle();
        }
      }
      if (0 < iVar20) {
        if (DAT_146ab7248 != 0) {
          LOCK();
          uVar18 = *(ulonglong *)(DAT_146ab7248 + 8);
          if (uVar18 == 0) {
            *(ulonglong *)(DAT_146ab7248 + 8) = 0;
            uVar18 = 0;
          }
          lVar16 = DAT_146ab7248;
          UNLOCK();
          if ((uVar18 >> 0x1a & 1) != 0) {
            DAT_146ab7248 = 0;
            if (lVar16 != 0) {
              LOCK();
              piVar1 = (int *)(lVar16 + 0x48);
              iVar23 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar23 == 1) {
                FGraphEvent::Recycle();
              }
            }
            lVar16 = DAT_146ab7250;
            DAT_146ab7250 = 0;
            if (lVar16 != 0) {
              LOCK();
              piVar1 = (int *)(lVar16 + 0x48);
              iVar23 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar23 == 1) {
                FGraphEvent::Recycle();
              }
            }
          }
        }
        goto LAB_141ec4014;
      }
    }
    if (DAT_146ab7248 != 0) {
      LOCK();
      uVar18 = *(ulonglong *)(DAT_146ab7248 + 8);
      if (uVar18 == 0) {
        *(ulonglong *)(DAT_146ab7248 + 8) = 0;
        uVar18 = 0;
      }
      lVar16 = DAT_146ab7248;
      UNLOCK();
      if ((uVar18 >> 0x1a & 1) != 0) {
        DAT_146ab7248 = 0;
        if (lVar16 != 0) {
          LOCK();
          piVar1 = (int *)(lVar16 + 0x48);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            FGraphEvent::Recycle();
          }
        }
        lVar16 = DAT_146ab7250;
        DAT_146ab7250 = 0;
        if (lVar16 != 0) {
          LOCK();
          piVar1 = (int *)(lVar16 + 0x48);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            FGraphEvent::Recycle();
          }
        }
      }
    }
  }
LAB_141ec4082:
  if (0 < *(int *)(DAT_146ab6db8 + 4)) {
    if (cVar12 == '\0') goto LAB_141ec47ef;
    if (!bVar9) {
      puVar21 = (undefined8 *)(param_2 + 0x58);
      local_a0 = (undefined8 *)0x0;
      uStack_98 = 0;
      if (&local_c0 != puVar21) {
        uVar17 = *puVar21;
        uVar6 = *(undefined8 *)(param_2 + 0x60);
        uVar7 = *(undefined8 *)(param_2 + 0x68);
        uVar8 = *(undefined8 *)(param_2 + 0x70);
        local_a0 = *(undefined8 **)(param_2 + 0x78);
        uStack_98 = *(ulonglong *)(param_2 + 0x80);
        *puVar21 = local_c0;
        *(undefined8 *)(param_2 + 0x60) = uStack_b8;
        *(undefined8 *)(param_2 + 0x68) = local_b0;
        *(undefined8 *)(param_2 + 0x70) = uStack_a8;
        local_60 = local_c0;
        uStack_58 = uStack_b8;
        local_50 = local_b0;
        uStack_48 = uStack_a8;
        local_40 = 0;
        uStack_38 = 0;
        *(undefined8 *)(param_2 + 0x78) = 0;
        *(undefined8 *)(param_2 + 0x80) = 0;
        local_c0 = uVar17;
        uStack_b8 = uVar6;
        local_b0 = uVar7;
        uStack_a8 = uVar8;
      }
      lVar16 = FMemory::Malloc(0x1b8,0);
      if (lVar16 != 0) {
        FRHICommandListBase::FRHICommandListBase(lVar16,*(undefined4 *)(param_2 + 0x88));
        lVar22 = lVar16;
      }
      FGenericPlatformMemory::MemswapGreaterThan8(lVar22,param_2,0x1b8);
      uVar18 = uStack_98;
      if (*(longlong *)(lVar22 + 8) == param_2) {
        *(longlong *)(lVar22 + 8) = lVar22;
      }
      if (*(longlong *)(param_2 + 8) == lVar22) {
        *(longlong *)(param_2 + 8) = param_2;
      }
      uVar17 = *(undefined8 *)(lVar22 + 0xa0);
      *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(lVar22 + 0x98);
      *(undefined8 *)(param_2 + 0xa0) = uVar17;
      uVar17 = *(undefined8 *)(lVar22 + 0xb0);
      *(undefined8 *)(param_2 + 0xa8) = *(undefined8 *)(lVar22 + 0xa8);
      *(undefined8 *)(param_2 + 0xb0) = uVar17;
      uVar17 = *(undefined8 *)(lVar22 + 0xc0);
      *(undefined8 *)(param_2 + 0xb8) = *(undefined8 *)(lVar22 + 0xb8);
      *(undefined8 *)(param_2 + 0xc0) = uVar17;
      uVar17 = *(undefined8 *)(lVar22 + 0xd0);
      *(undefined8 *)(param_2 + 200) = *(undefined8 *)(lVar22 + 200);
      *(undefined8 *)(param_2 + 0xd0) = uVar17;
      uVar17 = *(undefined8 *)(lVar22 + 0xe0);
      *(undefined8 *)(param_2 + 0xd8) = *(undefined8 *)(lVar22 + 0xd8);
      *(undefined8 *)(param_2 + 0xe0) = uVar17;
      uVar17 = *(undefined8 *)(lVar22 + 0xf0);
      *(undefined8 *)(param_2 + 0xe8) = *(undefined8 *)(lVar22 + 0xe8);
      *(undefined8 *)(param_2 + 0xf0) = uVar17;
      uVar17 = *(undefined8 *)(lVar22 + 0x100);
      *(undefined8 *)(param_2 + 0xf8) = *(undefined8 *)(lVar22 + 0xf8);
      *(undefined8 *)(param_2 + 0x100) = uVar17;
      uVar17 = *(undefined8 *)(lVar22 + 0x110);
      *(undefined8 *)(param_2 + 0x108) = *(undefined8 *)(lVar22 + 0x108);
      *(undefined8 *)(param_2 + 0x110) = uVar17;
      uVar17 = *(undefined8 *)(lVar22 + 0x120);
      *(undefined8 *)(param_2 + 0x118) = *(undefined8 *)(lVar22 + 0x118);
      *(undefined8 *)(param_2 + 0x120) = uVar17;
      uVar17 = *(undefined8 *)(lVar22 + 0x130);
      *(undefined8 *)(param_2 + 0x128) = *(undefined8 *)(lVar22 + 0x128);
      *(undefined8 *)(param_2 + 0x130) = uVar17;
      uVar17 = *(undefined8 *)(lVar22 + 0x140);
      *(undefined8 *)(param_2 + 0x138) = *(undefined8 *)(lVar22 + 0x138);
      *(undefined8 *)(param_2 + 0x140) = uVar17;
      uVar3 = *(undefined4 *)(lVar22 + 0x14c);
      uVar4 = *(undefined4 *)(lVar22 + 0x150);
      uVar5 = *(undefined4 *)(lVar22 + 0x154);
      *(undefined4 *)(param_2 + 0x148) = *(undefined4 *)(lVar22 + 0x148);
      *(undefined4 *)(param_2 + 0x14c) = uVar3;
      *(undefined4 *)(param_2 + 0x150) = uVar4;
      *(undefined4 *)(param_2 + 0x154) = uVar5;
      uVar3 = *(undefined4 *)(lVar22 + 0x15c);
      uVar4 = *(undefined4 *)(lVar22 + 0x160);
      uVar5 = *(undefined4 *)(lVar22 + 0x164);
      *(undefined4 *)(param_2 + 0x158) = *(undefined4 *)(lVar22 + 0x158);
      *(undefined4 *)(param_2 + 0x15c) = uVar3;
      *(undefined4 *)(param_2 + 0x160) = uVar4;
      *(undefined4 *)(param_2 + 0x164) = uVar5;
      *(undefined8 *)(param_2 + 0x168) = *(undefined8 *)(lVar22 + 0x168);
      *(undefined1 *)(param_2 + 0x1ac) = *(undefined1 *)(lVar22 + 0x1ac);
      *(undefined1 *)(param_2 + 0x1ad) = *(undefined1 *)(lVar22 + 0x1ad);
      iVar20 = DAT_146ab7210;
      if ((DAT_146ab7210 == 0) && (DAT_146ab7258 == 0)) {
        if (DAT_146ab7248 != 0) {
          lVar16 = (longlong)(int)uStack_98;
          uStack_98._0_4_ = (int)uStack_98 + 1;
          if (uStack_98._4_4_ < (int)uStack_98) {
            TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                      (&local_c0,uVar18 & 0xffffffff);
          }
          puVar21 = &local_c0;
          if (local_a0 != (undefined8 *)0x0) {
            puVar21 = local_a0;
          }
          puVar21[lVar16] = DAT_146ab7248;
          if (DAT_146ab7248 != 0) {
            LOCK();
            *(int *)(DAT_146ab7248 + 0x48) = *(int *)(DAT_146ab7248 + 0x48) + 1;
            UNLOCK();
          }
        }
        lVar16 = DAT_146ab7250;
        DAT_146ab7250 = DAT_146ab7248;
        if (DAT_146ab7248 != 0) {
          LOCK();
          *(int *)(DAT_146ab7248 + 0x48) = *(int *)(DAT_146ab7248 + 0x48) + 1;
          UNLOCK();
        }
        if (lVar16 != 0) {
          LOCK();
          piVar1 = (int *)(lVar16 + 0x48);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            FGraphEvent::Recycle();
          }
        }
        plVar15 = (longlong *)
                  TGraphTask<FExecuteRHIThreadTask>::CreateTask(local_f0,&local_c0,DAT_1464a8210);
        *(longlong *)(*plVar15 + 0x10) = lVar22;
        lVar22 = *plVar15;
        lVar10 = plVar15[2];
        lVar16 = plVar15[1];
        lVar2 = *(longlong *)(lVar22 + 0x20);
        if (lVar2 != 0) {
          LOCK();
          *(int *)(lVar2 + 0x48) = *(int *)(lVar2 + 0x48) + 1;
          UNLOCK();
        }
        FUN_141ed70b0(lVar22,lVar16,(int)lVar10,1);
        lVar22 = DAT_146ab7248;
        DAT_146ab7248 = lVar2;
      }
      else {
        if (DAT_146ab7210 != 0) {
          if (uStack_98._4_4_ < (int)uStack_98 + DAT_146ab7210) {
            TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo
                      (&local_c0);
          }
          plVar15 = DAT_146ab7208;
          if (DAT_146ab7208 == (longlong *)0x0) {
            plVar15 = (longlong *)&DAT_146ab71e8;
          }
          puVar21 = &local_c0;
          if (local_a0 != (undefined8 *)0x0) {
            puVar21 = local_a0;
          }
          plVar19 = puVar21 + (int)uStack_98;
          iVar23 = iVar20;
          do {
            lVar16 = *plVar15;
            *plVar19 = lVar16;
            if (lVar16 != 0) {
              LOCK();
              *(int *)(lVar16 + 0x48) = *(int *)(lVar16 + 0x48) + 1;
              UNLOCK();
            }
            plVar19 = plVar19 + 1;
            plVar15 = plVar15 + 1;
            iVar23 = iVar23 + -1;
          } while (iVar23 != 0);
          uStack_98 = CONCAT44(uStack_98._4_4_,(int)uStack_98 + iVar20);
        }
        TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::Reset
                  (&DAT_146ab71e8,0);
        uVar18 = uStack_98;
        if (DAT_146ab7258 != 0) {
          lVar16 = (longlong)(int)uStack_98;
          iVar20 = (int)uStack_98 + 1;
          uStack_98 = CONCAT44(uStack_98._4_4_,iVar20);
          if (uStack_98._4_4_ < iVar20) {
            TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                      (&local_c0,uVar18 & 0xffffffff);
          }
          puVar21 = &local_c0;
          if (local_a0 != (undefined8 *)0x0) {
            puVar21 = local_a0;
          }
          puVar21[lVar16] = DAT_146ab7258;
          if (DAT_146ab7258 != 0) {
            LOCK();
            *(int *)(DAT_146ab7258 + 0x48) = *(int *)(DAT_146ab7258 + 0x48) + 1;
            UNLOCK();
          }
        }
        plVar15 = (longlong *)FUN_141ebf280(local_d8,&local_c0,DAT_1464a8210);
        lVar16 = *plVar15;
        *(longlong *)(lVar16 + 0x10) = lVar22;
        *(bool *)(lVar16 + 0x18) = bVar24;
        lVar22 = *plVar15;
        lVar10 = plVar15[2];
        lVar16 = plVar15[1];
        lVar2 = *(longlong *)(lVar22 + 0x28);
        if (lVar2 != 0) {
          LOCK();
          *(int *)(lVar2 + 0x48) = *(int *)(lVar2 + 0x48) + 1;
          UNLOCK();
        }
        FUN_141ed6dd0(lVar22,lVar16,(int)lVar10,1);
        lVar22 = DAT_146ab7258;
        DAT_146ab7258 = lVar2;
      }
      if (lVar22 != 0) {
        LOCK();
        piVar1 = (int *)(lVar22 + 0x48);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          FGraphEvent::Recycle();
        }
      }
      if (0 < *(int *)(DAT_146ab6dd0 + 4)) {
        plVar15 = (longlong *)FTaskGraphInterface::Get();
        cVar12 = (**(code **)(*plVar15 + 0x20))(plVar15,uVar11);
        if (cVar12 != '\0') {
          LowLevelFatalErrorHandler
                    ("Unknown",0x234,L"Deadlock in FRHICommandListExecutor::ExecuteInner 2.");
          FDebug::AssertFailed
                    (&DAT_144ed0f9e,"Unknown",0x234,
                     L"Deadlock in FRHICommandListExecutor::ExecuteInner 2.");
        }
        lVar22 = 0;
        if (DAT_146ab7258 != 0) {
          uVar17 = FTaskGraphInterface::Get();
          FTaskGraphInterface::WaitUntilTaskCompletes(uVar17,&DAT_146ab7258,uVar11);
          lVar16 = DAT_146ab7258;
          DAT_146ab7258 = 0;
          lVar22 = DAT_146ab7258;
          if (lVar16 != 0) {
            LOCK();
            piVar1 = (int *)(lVar16 + 0x48);
            iVar20 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            lVar22 = DAT_146ab7258;
            if (iVar20 == 1) {
              FGraphEvent::Recycle();
              lVar22 = DAT_146ab7258;
            }
          }
        }
        while (DAT_146ab7258 = lVar22, DAT_146ab7248 != 0) {
          uVar17 = FTaskGraphInterface::Get();
          FTaskGraphInterface::WaitUntilTaskCompletes(uVar17,&DAT_146ab7248,uVar11);
          if (DAT_146ab7248 == 0) break;
          LOCK();
          uVar18 = *(ulonglong *)(DAT_146ab7248 + 8);
          if (uVar18 == 0) {
            *(ulonglong *)(DAT_146ab7248 + 8) = 0;
            uVar18 = 0;
          }
          lVar16 = DAT_146ab7248;
          UNLOCK();
          lVar22 = DAT_146ab7258;
          if ((uVar18 >> 0x1a & 1) != 0) {
            DAT_146ab7248 = 0;
            if (lVar16 != 0) {
              LOCK();
              piVar1 = (int *)(lVar16 + 0x48);
              iVar20 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar20 == 1) {
                FGraphEvent::Recycle();
              }
            }
            lVar16 = DAT_146ab7250;
            DAT_146ab7250 = 0;
            lVar22 = DAT_146ab7258;
            if (lVar16 != 0) {
              LOCK();
              piVar1 = (int *)(lVar16 + 0x48);
              iVar20 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              lVar22 = DAT_146ab7258;
              if (iVar20 == 1) {
                FGraphEvent::Recycle();
                lVar22 = DAT_146ab7258;
              }
            }
          }
        }
      }
      FUN_14158cb50(&local_c0);
      return;
    }
  }
  if (cVar12 != '\0') {
    if (*(int *)(param_2 + 0x80) != 0) {
      plVar15 = (longlong *)FTaskGraphInterface::Get();
      cVar12 = (**(code **)(*plVar15 + 0x20))(plVar15,uVar11);
      if (cVar12 != '\0') {
        LowLevelFatalErrorHandler
                  ("Unknown",0x24e,L"Deadlock in FRHICommandListExecutor::ExecuteInner (RTTasks).");
        FDebug::AssertFailed
                  (&DAT_144ed0f9f,"Unknown",0x24e,
                   L"Deadlock in FRHICommandListExecutor::ExecuteInner (RTTasks).");
      }
      plVar15 = (longlong *)FTaskGraphInterface::Get();
      (**(code **)(*plVar15 + 0x48))(plVar15,param_2 + 0x58,uVar11);
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::Reset
                (param_2 + 0x58,0);
    }
    lVar22 = 0;
    if (DAT_146ab7258 != 0) {
      plVar15 = (longlong *)FTaskGraphInterface::Get();
      cVar12 = (**(code **)(*plVar15 + 0x20))(plVar15,uVar11);
      if (cVar12 != '\0') {
        LowLevelFatalErrorHandler
                  ("Unknown",0x259,
                   L"Deadlock in FRHICommandListExecutor::ExecuteInner (RenderThreadSublistDispatchTask)."
                  );
        FDebug::AssertFailed
                  (&DAT_144ed0fbe,"Unknown",0x259,
                   L"Deadlock in FRHICommandListExecutor::ExecuteInner (RenderThreadSublistDispatchTask)."
                  );
      }
      uVar17 = FTaskGraphInterface::Get();
      FTaskGraphInterface::WaitUntilTaskCompletes(uVar17,&DAT_146ab7258,uVar11);
      lVar16 = DAT_146ab7258;
      DAT_146ab7258 = 0;
      lVar22 = DAT_146ab7258;
      if (lVar16 != 0) {
        LOCK();
        piVar1 = (int *)(lVar16 + 0x48);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        lVar22 = DAT_146ab7258;
        if (iVar20 == 1) {
          FGraphEvent::Recycle();
          lVar22 = DAT_146ab7258;
        }
      }
    }
    while (DAT_146ab7258 = lVar22, DAT_146ab7248 != 0) {
      plVar15 = (longlong *)FTaskGraphInterface::Get();
      cVar12 = (**(code **)(*plVar15 + 0x20))(plVar15,uVar11);
      if (cVar12 != '\0') {
        LowLevelFatalErrorHandler
                  ("Unknown",0x263,
                   L"Deadlock in FRHICommandListExecutor::ExecuteInner (RHIThreadTask).");
        FDebug::AssertFailed
                  (&DAT_144ed0fbf,"Unknown",0x263,
                   L"Deadlock in FRHICommandListExecutor::ExecuteInner (RHIThreadTask).");
      }
      plVar19 = (longlong *)FTaskGraphInterface::Get();
      local_70 = (longlong *)0x0;
      local_68 = 1;
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (local_90,0);
      plVar15 = local_90;
      if (local_70 != (longlong *)0x0) {
        plVar15 = local_70;
      }
      *plVar15 = DAT_146ab7248;
      if (DAT_146ab7248 != 0) {
        LOCK();
        *(int *)(DAT_146ab7248 + 0x48) = *(int *)(DAT_146ab7248 + 0x48) + 1;
        UNLOCK();
      }
      (**(code **)(*plVar19 + 0x48))(plVar19,local_90,uVar11);
      plVar15 = local_90;
      iVar20 = (int)local_68;
      if (local_70 != (longlong *)0x0) {
        plVar15 = local_70;
      }
      for (; iVar20 != 0; iVar20 = iVar20 + -1) {
        if (*plVar15 != 0) {
          LOCK();
          piVar1 = (int *)(*plVar15 + 0x48);
          iVar23 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar23 == 1) {
            FGraphEvent::Recycle();
          }
        }
        plVar15 = plVar15 + 1;
      }
      if (local_70 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (DAT_146ab7248 == 0) break;
      LOCK();
      uVar18 = *(ulonglong *)(DAT_146ab7248 + 8);
      if (uVar18 == 0) {
        *(ulonglong *)(DAT_146ab7248 + 8) = 0;
        uVar18 = 0;
      }
      lVar16 = DAT_146ab7248;
      UNLOCK();
      lVar22 = DAT_146ab7258;
      if ((uVar18 >> 0x1a & 1) != 0) {
        DAT_146ab7248 = 0;
        if (lVar16 != 0) {
          LOCK();
          piVar1 = (int *)(lVar16 + 0x48);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            FGraphEvent::Recycle();
          }
        }
        lVar16 = DAT_146ab7250;
        DAT_146ab7250 = 0;
        lVar22 = DAT_146ab7258;
        if (lVar16 != 0) {
          LOCK();
          piVar1 = (int *)(lVar16 + 0x48);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          lVar22 = DAT_146ab7258;
          if (iVar20 == 1) {
            FGraphEvent::Recycle();
            lVar22 = DAT_146ab7258;
          }
        }
      }
    }
  }
LAB_141ec47ef:
  FUN_141ec4830(param_2);
  return;
}



// FUNCTION 141ec4830 FUN_141ec4830 body=242 status=ok
// SIG undefined FUN_141ec4830(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141ec4830(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined1 local_res8 [8];
  
  *(undefined1 *)(param_1 + 2) = 1;
  FUN_141ed80b0();
  puVar1 = (undefined8 *)*param_1;
  puVar3 = _DAT_146ab62b0;
  while (_DAT_146ab62b0 = puVar1, _DAT_146ab62b0 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)_DAT_146ab62b0[1];
    (**(code **)*_DAT_146ab62b0)(_DAT_146ab62b0,param_1,local_res8);
    IsInRenderingThread();
    FUN_1415e13e0();
    puVar3 = _DAT_146ab62b0;
    if (((longlong *)param_1[0x36] != (longlong *)0x0) &&
       (cVar4 = (**(code **)(*(longlong *)param_1[0x36] + 0x18))(), puVar3 = _DAT_146ab62b0,
       cVar4 != '\0')) {
      IsInRenderingThread();
      FUN_1415e13e0();
      plVar2 = (longlong *)param_1[0x36];
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,param_1[4],0);
        param_1[0x36] = 0;
        DAT_146ab62b8 = 0;
      }
      FUN_141ed80b0(param_1);
      puVar3 = _DAT_146ab62b0;
    }
  }
  _DAT_146ab62b0 = puVar3;
  IsInRenderingThread();
  FUN_1415e13e0();
  plVar2 = (longlong *)param_1[0x36];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,param_1[4],0);
    param_1[0x36] = 0;
    DAT_146ab62b8 = 0;
  }
  FUN_141ed2fb0(param_1);
  return;
}



// FUNCTION 141ec4930 ExecuteList body=83 status=ok
// SIG undefined ExecuteList(void)

void FRHICommandListExecutor::ExecuteList(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = IsInRenderingThread();
  if (((cVar1 != '\0') && (DAT_146ab6e88 == '\0')) && (DAT_146ab6e8c != 0)) {
    FUN_141ec3e80(&DAT_146ab6e68,&DAT_146ab6e78);
  }
  FUN_141ec3e80(param_1,param_2);
  return;
}



// FUNCTION 141ec4990 ExecuteList body=5 status=ok
// SIG undefined ExecuteList(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FRHICommandListExecutor::ExecuteList(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  longlong lVar10;
  undefined4 uVar11;
  char cVar12;
  char cVar13;
  DWORD DVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  longlong *plVar19;
  int iVar20;
  undefined8 *puVar21;
  longlong lVar22;
  int iVar23;
  bool bVar24;
  undefined1 auStack_118 [40];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  longlong alStack_90 [4];
  longlong *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulonglong uStack_30;
  
  uStack_30 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  cVar12 = IsInRenderingThread();
  cVar13 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar13 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar14 = GetCurrentThreadId(), DVar14 != DAT_1468c21c0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  uVar11 = DAT_1464a8214;
  if (DAT_146ab6383 == '\0') goto LAB_141ec47ef;
  bVar24 = false;
  lVar22 = 0;
  if (cVar12 != '\0') {
    if (!bVar9) {
      plVar15 = (longlong *)FTaskGraphInterface::Get();
      cVar13 = (**(code **)(*plVar15 + 0x20))(plVar15,uVar11);
      if (cVar13 == '\0') {
        plVar15 = (longlong *)FTaskGraphInterface::Get();
        (**(code **)(*plVar15 + 0x30))(plVar15,uVar11);
      }
    }
    iVar20 = *(int *)(DAT_146ab6d88 + 4);
    bVar24 = 0 < iVar20;
    if (DAT_146ab7258 == 0) {
LAB_141ec4014:
      if (0 < iVar20) goto LAB_141ec4082;
    }
    else {
      LOCK();
      uVar18 = *(ulonglong *)(DAT_146ab7258 + 8);
      if (uVar18 == 0) {
        *(ulonglong *)(DAT_146ab7258 + 8) = 0;
        uVar18 = 0;
      }
      lVar16 = DAT_146ab7258;
      UNLOCK();
      if ((uVar18 >> 0x1a & 1) == 0) goto LAB_141ec4014;
      DAT_146ab7258 = 0;
      if (lVar16 != 0) {
        LOCK();
        piVar1 = (int *)(lVar16 + 0x48);
        iVar23 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar23 == 1) {
          FGraphEvent::Recycle();
        }
      }
      if (0 < iVar20) {
        if (DAT_146ab7248 != 0) {
          LOCK();
          uVar18 = *(ulonglong *)(DAT_146ab7248 + 8);
          if (uVar18 == 0) {
            *(ulonglong *)(DAT_146ab7248 + 8) = 0;
            uVar18 = 0;
          }
          lVar16 = DAT_146ab7248;
          UNLOCK();
          if ((uVar18 >> 0x1a & 1) != 0) {
            DAT_146ab7248 = 0;
            if (lVar16 != 0) {
              LOCK();
              piVar1 = (int *)(lVar16 + 0x48);
              iVar23 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar23 == 1) {
                FGraphEvent::Recycle();
              }
            }
            lVar16 = DAT_146ab7250;
            DAT_146ab7250 = 0;
            if (lVar16 != 0) {
              LOCK();
              piVar1 = (int *)(lVar16 + 0x48);
              iVar23 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar23 == 1) {
                FGraphEvent::Recycle();
              }
            }
          }
        }
        goto LAB_141ec4014;
      }
    }
    if (DAT_146ab7248 != 0) {
      LOCK();
      uVar18 = *(ulonglong *)(DAT_146ab7248 + 8);
      if (uVar18 == 0) {
        *(ulonglong *)(DAT_146ab7248 + 8) = 0;
        uVar18 = 0;
      }
      lVar16 = DAT_146ab7248;
      UNLOCK();
      if ((uVar18 >> 0x1a & 1) != 0) {
        DAT_146ab7248 = 0;
        if (lVar16 != 0) {
          LOCK();
          piVar1 = (int *)(lVar16 + 0x48);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            FGraphEvent::Recycle();
          }
        }
        lVar16 = DAT_146ab7250;
        DAT_146ab7250 = 0;
        if (lVar16 != 0) {
          LOCK();
          piVar1 = (int *)(lVar16 + 0x48);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            FGraphEvent::Recycle();
          }
        }
      }
    }
  }
LAB_141ec4082:
  if (0 < *(int *)(DAT_146ab6db8 + 4)) {
    if (cVar12 == '\0') goto LAB_141ec47ef;
    if (!bVar9) {
      puVar21 = (undefined8 *)(param_2 + 0x58);
      puStack_a0 = (undefined8 *)0x0;
      uStack_98 = 0;
      if (&uStack_c0 != puVar21) {
        uVar17 = *puVar21;
        uVar6 = *(undefined8 *)(param_2 + 0x60);
        uVar7 = *(undefined8 *)(param_2 + 0x68);
        uVar8 = *(undefined8 *)(param_2 + 0x70);
        puStack_a0 = *(undefined8 **)(param_2 + 0x78);
        uStack_98 = *(ulonglong *)(param_2 + 0x80);
        *puVar21 = uStack_c0;
        *(undefined8 *)(param_2 + 0x60) = uStack_b8;
        *(undefined8 *)(param_2 + 0x68) = uStack_b0;
        *(undefined8 *)(param_2 + 0x70) = uStack_a8;
        uStack_60 = uStack_c0;
        uStack_58 = uStack_b8;
        uStack_50 = uStack_b0;
        uStack_48 = uStack_a8;
        uStack_40 = 0;
        uStack_38 = 0;
        *(undefined8 *)(param_2 + 0x78) = 0;
        *(undefined8 *)(param_2 + 0x80) = 0;
        uStack_c0 = uVar17;
        uStack_b8 = uVar6;
        uStack_b0 = uVar7;
        uStack_a8 = uVar8;
      }
      lVar16 = FMemory::Malloc(0x1b8,0);
      if (lVar16 != 0) {
        FRHICommandListBase::FRHICommandListBase(lVar16,*(undefined4 *)(param_2 + 0x88));
        lVar22 = lVar16;
      }
      FGenericPlatformMemory::MemswapGreaterThan8(lVar22,param_2,0x1b8);
      uVar18 = uStack_98;
      if (*(longlong *)(lVar22 + 8) == param_2) {
        *(longlong *)(lVar22 + 8) = lVar22;
      }
      if (*(longlong *)(param_2 + 8) == lVar22) {
        *(longlong *)(param_2 + 8) = param_2;
      }
      uVar17 = *(undefined8 *)(lVar22 + 0xa0);
      *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(lVar22 + 0x98);
      *(undefined8 *)(param_2 + 0xa0) = uVar17;
      uVar17 = *(undefined8 *)(lVar22 + 0xb0);
      *(undefined8 *)(param_2 + 0xa8) = *(undefined8 *)(lVar22 + 0xa8);
      *(undefined8 *)(param_2 + 0xb0) = uVar17;
      uVar17 = *(undefined8 *)(lVar22 + 0xc0);
      *(undefined8 *)(param_2 + 0xb8) = *(undefined8 *)(lVar22 + 0xb8);
      *(undefined8 *)(param_2 + 0xc0) = uVar17;
      uVar17 = *(undefined8 *)(lVar22 + 0xd0);
      *(undefined8 *)(param_2 + 200) = *(undefined8 *)(lVar22 + 200);
      *(undefined8 *)(param_2 + 0xd0) = uVar17;
      uVar17 = *(undefined8 *)(lVar22 + 0xe0);
      *(undefined8 *)(param_2 + 0xd8) = *(undefined8 *)(lVar22 + 0xd8);
      *(undefined8 *)(param_2 + 0xe0) = uVar17;
      uVar17 = *(undefined8 *)(lVar22 + 0xf0);
      *(undefined8 *)(param_2 + 0xe8) = *(undefined8 *)(lVar22 + 0xe8);
      *(undefined8 *)(param_2 + 0xf0) = uVar17;
      uVar17 = *(undefined8 *)(lVar22 + 0x100);
      *(undefined8 *)(param_2 + 0xf8) = *(undefined8 *)(lVar22 + 0xf8);
      *(undefined8 *)(param_2 + 0x100) = uVar17;
      uVar17 = *(undefined8 *)(lVar22 + 0x110);
      *(undefined8 *)(param_2 + 0x108) = *(undefined8 *)(lVar22 + 0x108);
      *(undefined8 *)(param_2 + 0x110) = uVar17;
      uVar17 = *(undefined8 *)(lVar22 + 0x120);
      *(undefined8 *)(param_2 + 0x118) = *(undefined8 *)(lVar22 + 0x118);
      *(undefined8 *)(param_2 + 0x120) = uVar17;
      uVar17 = *(undefined8 *)(lVar22 + 0x130);
      *(undefined8 *)(param_2 + 0x128) = *(undefined8 *)(lVar22 + 0x128);
      *(undefined8 *)(param_2 + 0x130) = uVar17;
      uVar17 = *(undefined8 *)(lVar22 + 0x140);
      *(undefined8 *)(param_2 + 0x138) = *(undefined8 *)(lVar22 + 0x138);
      *(undefined8 *)(param_2 + 0x140) = uVar17;
      uVar3 = *(undefined4 *)(lVar22 + 0x14c);
      uVar4 = *(undefined4 *)(lVar22 + 0x150);
      uVar5 = *(undefined4 *)(lVar22 + 0x154);
      *(undefined4 *)(param_2 + 0x148) = *(undefined4 *)(lVar22 + 0x148);
      *(undefined4 *)(param_2 + 0x14c) = uVar3;
      *(undefined4 *)(param_2 + 0x150) = uVar4;
      *(undefined4 *)(param_2 + 0x154) = uVar5;
      uVar3 = *(undefined4 *)(lVar22 + 0x15c);
      uVar4 = *(undefined4 *)(lVar22 + 0x160);
      uVar5 = *(undefined4 *)(lVar22 + 0x164);
      *(undefined4 *)(param_2 + 0x158) = *(undefined4 *)(lVar22 + 0x158);
      *(undefined4 *)(param_2 + 0x15c) = uVar3;
      *(undefined4 *)(param_2 + 0x160) = uVar4;
      *(undefined4 *)(param_2 + 0x164) = uVar5;
      *(undefined8 *)(param_2 + 0x168) = *(undefined8 *)(lVar22 + 0x168);
      *(undefined1 *)(param_2 + 0x1ac) = *(undefined1 *)(lVar22 + 0x1ac);
      *(undefined1 *)(param_2 + 0x1ad) = *(undefined1 *)(lVar22 + 0x1ad);
      iVar20 = DAT_146ab7210;
      if ((DAT_146ab7210 == 0) && (DAT_146ab7258 == 0)) {
        if (DAT_146ab7248 != 0) {
          lVar16 = (longlong)(int)uStack_98;
          uStack_98._0_4_ = (int)uStack_98 + 1;
          if (uStack_98._4_4_ < (int)uStack_98) {
            TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                      (&uStack_c0,uVar18 & 0xffffffff);
          }
          puVar21 = &uStack_c0;
          if (puStack_a0 != (undefined8 *)0x0) {
            puVar21 = puStack_a0;
          }
          puVar21[lVar16] = DAT_146ab7248;
          if (DAT_146ab7248 != 0) {
            LOCK();
            *(int *)(DAT_146ab7248 + 0x48) = *(int *)(DAT_146ab7248 + 0x48) + 1;
            UNLOCK();
          }
        }
        lVar16 = DAT_146ab7250;
        DAT_146ab7250 = DAT_146ab7248;
        if (DAT_146ab7248 != 0) {
          LOCK();
          *(int *)(DAT_146ab7248 + 0x48) = *(int *)(DAT_146ab7248 + 0x48) + 1;
          UNLOCK();
        }
        if (lVar16 != 0) {
          LOCK();
          piVar1 = (int *)(lVar16 + 0x48);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            FGraphEvent::Recycle();
          }
        }
        plVar15 = (longlong *)
                  TGraphTask<FExecuteRHIThreadTask>::CreateTask(auStack_f0,&uStack_c0,DAT_1464a8210)
        ;
        *(longlong *)(*plVar15 + 0x10) = lVar22;
        lVar22 = *plVar15;
        lVar10 = plVar15[2];
        lVar16 = plVar15[1];
        lVar2 = *(longlong *)(lVar22 + 0x20);
        if (lVar2 != 0) {
          LOCK();
          *(int *)(lVar2 + 0x48) = *(int *)(lVar2 + 0x48) + 1;
          UNLOCK();
        }
        FUN_141ed70b0(lVar22,lVar16,(int)lVar10,1);
        lVar22 = DAT_146ab7248;
        DAT_146ab7248 = lVar2;
      }
      else {
        if (DAT_146ab7210 != 0) {
          if (uStack_98._4_4_ < (int)uStack_98 + DAT_146ab7210) {
            TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo
                      (&uStack_c0);
          }
          plVar15 = DAT_146ab7208;
          if (DAT_146ab7208 == (longlong *)0x0) {
            plVar15 = (longlong *)&DAT_146ab71e8;
          }
          puVar21 = &uStack_c0;
          if (puStack_a0 != (undefined8 *)0x0) {
            puVar21 = puStack_a0;
          }
          plVar19 = puVar21 + (int)uStack_98;
          iVar23 = iVar20;
          do {
            lVar16 = *plVar15;
            *plVar19 = lVar16;
            if (lVar16 != 0) {
              LOCK();
              *(int *)(lVar16 + 0x48) = *(int *)(lVar16 + 0x48) + 1;
              UNLOCK();
            }
            plVar19 = plVar19 + 1;
            plVar15 = plVar15 + 1;
            iVar23 = iVar23 + -1;
          } while (iVar23 != 0);
          uStack_98 = CONCAT44(uStack_98._4_4_,(int)uStack_98 + iVar20);
        }
        TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::Reset
                  (&DAT_146ab71e8,0);
        uVar18 = uStack_98;
        if (DAT_146ab7258 != 0) {
          lVar16 = (longlong)(int)uStack_98;
          iVar20 = (int)uStack_98 + 1;
          uStack_98 = CONCAT44(uStack_98._4_4_,iVar20);
          if (uStack_98._4_4_ < iVar20) {
            TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                      (&uStack_c0,uVar18 & 0xffffffff);
          }
          puVar21 = &uStack_c0;
          if (puStack_a0 != (undefined8 *)0x0) {
            puVar21 = puStack_a0;
          }
          puVar21[lVar16] = DAT_146ab7258;
          if (DAT_146ab7258 != 0) {
            LOCK();
            *(int *)(DAT_146ab7258 + 0x48) = *(int *)(DAT_146ab7258 + 0x48) + 1;
            UNLOCK();
          }
        }
        plVar15 = (longlong *)FUN_141ebf280(auStack_d8,&uStack_c0,DAT_1464a8210);
        lVar16 = *plVar15;
        *(longlong *)(lVar16 + 0x10) = lVar22;
        *(bool *)(lVar16 + 0x18) = bVar24;
        lVar22 = *plVar15;
        lVar10 = plVar15[2];
        lVar16 = plVar15[1];
        lVar2 = *(longlong *)(lVar22 + 0x28);
        if (lVar2 != 0) {
          LOCK();
          *(int *)(lVar2 + 0x48) = *(int *)(lVar2 + 0x48) + 1;
          UNLOCK();
        }
        FUN_141ed6dd0(lVar22,lVar16,(int)lVar10,1);
        lVar22 = DAT_146ab7258;
        DAT_146ab7258 = lVar2;
      }
      if (lVar22 != 0) {
        LOCK();
        piVar1 = (int *)(lVar22 + 0x48);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          FGraphEvent::Recycle();
        }
      }
      if (0 < *(int *)(DAT_146ab6dd0 + 4)) {
        plVar15 = (longlong *)FTaskGraphInterface::Get();
        cVar12 = (**(code **)(*plVar15 + 0x20))(plVar15,uVar11);
        if (cVar12 != '\0') {
          LowLevelFatalErrorHandler
                    ("Unknown",0x234,L"Deadlock in FRHICommandListExecutor::ExecuteInner 2.");
          FDebug::AssertFailed
                    (&DAT_144ed0f9e,"Unknown",0x234,
                     L"Deadlock in FRHICommandListExecutor::ExecuteInner 2.");
        }
        lVar22 = 0;
        if (DAT_146ab7258 != 0) {
          uVar17 = FTaskGraphInterface::Get();
          FTaskGraphInterface::WaitUntilTaskCompletes(uVar17,&DAT_146ab7258,uVar11);
          lVar16 = DAT_146ab7258;
          DAT_146ab7258 = 0;
          lVar22 = DAT_146ab7258;
          if (lVar16 != 0) {
            LOCK();
            piVar1 = (int *)(lVar16 + 0x48);
            iVar20 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            lVar22 = DAT_146ab7258;
            if (iVar20 == 1) {
              FGraphEvent::Recycle();
              lVar22 = DAT_146ab7258;
            }
          }
        }
        while (DAT_146ab7258 = lVar22, DAT_146ab7248 != 0) {
          uVar17 = FTaskGraphInterface::Get();
          FTaskGraphInterface::WaitUntilTaskCompletes(uVar17,&DAT_146ab7248,uVar11);
          if (DAT_146ab7248 == 0) break;
          LOCK();
          uVar18 = *(ulonglong *)(DAT_146ab7248 + 8);
          if (uVar18 == 0) {
            *(ulonglong *)(DAT_146ab7248 + 8) = 0;
            uVar18 = 0;
          }
          lVar16 = DAT_146ab7248;
          UNLOCK();
          lVar22 = DAT_146ab7258;
          if ((uVar18 >> 0x1a & 1) != 0) {
            DAT_146ab7248 = 0;
            if (lVar16 != 0) {
              LOCK();
              piVar1 = (int *)(lVar16 + 0x48);
              iVar20 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar20 == 1) {
                FGraphEvent::Recycle();
              }
            }
            lVar16 = DAT_146ab7250;
            DAT_146ab7250 = 0;
            lVar22 = DAT_146ab7258;
            if (lVar16 != 0) {
              LOCK();
              piVar1 = (int *)(lVar16 + 0x48);
              iVar20 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              lVar22 = DAT_146ab7258;
              if (iVar20 == 1) {
                FGraphEvent::Recycle();
                lVar22 = DAT_146ab7258;
              }
            }
          }
        }
      }
      FUN_14158cb50(&uStack_c0);
      return;
    }
  }
  if (cVar12 != '\0') {
    if (*(int *)(param_2 + 0x80) != 0) {
      plVar15 = (longlong *)FTaskGraphInterface::Get();
      cVar12 = (**(code **)(*plVar15 + 0x20))(plVar15,uVar11);
      if (cVar12 != '\0') {
        LowLevelFatalErrorHandler
                  ("Unknown",0x24e,L"Deadlock in FRHICommandListExecutor::ExecuteInner (RTTasks).");
        FDebug::AssertFailed
                  (&DAT_144ed0f9f,"Unknown",0x24e,
                   L"Deadlock in FRHICommandListExecutor::ExecuteInner (RTTasks).");
      }
      plVar15 = (longlong *)FTaskGraphInterface::Get();
      (**(code **)(*plVar15 + 0x48))(plVar15,param_2 + 0x58,uVar11);
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::Reset
                (param_2 + 0x58,0);
    }
    lVar22 = 0;
    if (DAT_146ab7258 != 0) {
      plVar15 = (longlong *)FTaskGraphInterface::Get();
      cVar12 = (**(code **)(*plVar15 + 0x20))(plVar15,uVar11);
      if (cVar12 != '\0') {
        LowLevelFatalErrorHandler
                  ("Unknown",0x259,
                   L"Deadlock in FRHICommandListExecutor::ExecuteInner (RenderThreadSublistDispatchTask)."
                  );
        FDebug::AssertFailed
                  (&DAT_144ed0fbe,"Unknown",0x259,
                   L"Deadlock in FRHICommandListExecutor::ExecuteInner (RenderThreadSublistDispatchTask)."
                  );
      }
      uVar17 = FTaskGraphInterface::Get();
      FTaskGraphInterface::WaitUntilTaskCompletes(uVar17,&DAT_146ab7258,uVar11);
      lVar16 = DAT_146ab7258;
      DAT_146ab7258 = 0;
      lVar22 = DAT_146ab7258;
      if (lVar16 != 0) {
        LOCK();
        piVar1 = (int *)(lVar16 + 0x48);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        lVar22 = DAT_146ab7258;
        if (iVar20 == 1) {
          FGraphEvent::Recycle();
          lVar22 = DAT_146ab7258;
        }
      }
    }
    while (DAT_146ab7258 = lVar22, DAT_146ab7248 != 0) {
      plVar15 = (longlong *)FTaskGraphInterface::Get();
      cVar12 = (**(code **)(*plVar15 + 0x20))(plVar15,uVar11);
      if (cVar12 != '\0') {
        LowLevelFatalErrorHandler
                  ("Unknown",0x263,
                   L"Deadlock in FRHICommandListExecutor::ExecuteInner (RHIThreadTask).");
        FDebug::AssertFailed
                  (&DAT_144ed0fbf,"Unknown",0x263,
                   L"Deadlock in FRHICommandListExecutor::ExecuteInner (RHIThreadTask).");
      }
      plVar19 = (longlong *)FTaskGraphInterface::Get();
      plStack_70 = (longlong *)0x0;
      uStack_68 = 1;
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (alStack_90,0);
      plVar15 = alStack_90;
      if (plStack_70 != (longlong *)0x0) {
        plVar15 = plStack_70;
      }
      *plVar15 = DAT_146ab7248;
      if (DAT_146ab7248 != 0) {
        LOCK();
        *(int *)(DAT_146ab7248 + 0x48) = *(int *)(DAT_146ab7248 + 0x48) + 1;
        UNLOCK();
      }
      (**(code **)(*plVar19 + 0x48))(plVar19,alStack_90,uVar11);
      plVar15 = alStack_90;
      iVar20 = (int)uStack_68;
      if (plStack_70 != (longlong *)0x0) {
        plVar15 = plStack_70;
      }
      for (; iVar20 != 0; iVar20 = iVar20 + -1) {
        if (*plVar15 != 0) {
          LOCK();
          piVar1 = (int *)(*plVar15 + 0x48);
          iVar23 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar23 == 1) {
            FGraphEvent::Recycle();
          }
        }
        plVar15 = plVar15 + 1;
      }
      if (plStack_70 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (DAT_146ab7248 == 0) break;
      LOCK();
      uVar18 = *(ulonglong *)(DAT_146ab7248 + 8);
      if (uVar18 == 0) {
        *(ulonglong *)(DAT_146ab7248 + 8) = 0;
        uVar18 = 0;
      }
      lVar16 = DAT_146ab7248;
      UNLOCK();
      lVar22 = DAT_146ab7258;
      if ((uVar18 >> 0x1a & 1) != 0) {
        DAT_146ab7248 = 0;
        if (lVar16 != 0) {
          LOCK();
          piVar1 = (int *)(lVar16 + 0x48);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            FGraphEvent::Recycle();
          }
        }
        lVar16 = DAT_146ab7250;
        DAT_146ab7250 = 0;
        lVar22 = DAT_146ab7258;
        if (lVar16 != 0) {
          LOCK();
          piVar1 = (int *)(lVar16 + 0x48);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          lVar22 = DAT_146ab7258;
          if (iVar20 == 1) {
            FGraphEvent::Recycle();
            lVar22 = DAT_146ab7258;
          }
        }
      }
    }
  }
LAB_141ec47ef:
  FUN_141ec4830(param_2);
  return;
}



// FUNCTION 141ec49a0 ExecuteTask body=272 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<FCompilePipelineStateTask>::ExecuteTask
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FCompilePipelineStateTask::DoTask(param_1 + 2,param_3,param_1 + 0x1b);
  *(undefined1 *)(param_1 + 0x1a) = 0;
  FUN_141591a60(param_1[0x1b],param_2,param_3);
  *param_1 = &PTR__scalar_deleting_destructor__144edb368;
  if (param_1[0x1b] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x1b] + 0x48);
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



// FUNCTION 141ec4ab0 ExecuteTask body=585 status=ok
// SIG undefined ExecuteTask(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TGraphTask<FDispatchRHIThreadTask>::ExecuteTask
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  DWORD *pDVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [24];
  longlong local_78 [4];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  plVar11 = (longlong *)0x0;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  if (DAT_146ab7248 != 0) {
    local_50 = 1;
    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(local_78,0)
    ;
    plVar8 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar8 = local_58;
    }
    *plVar8 = DAT_146ab7248;
    if (DAT_146ab7248 != 0) {
      LOCK();
      *(int *)(DAT_146ab7248 + 0x48) = *(int *)(DAT_146ab7248 + 0x48) + 1;
      UNLOCK();
    }
  }
  lVar4 = DAT_146ab7250;
  DAT_146ab7250 = DAT_146ab7248;
  if (DAT_146ab7248 != 0) {
    LOCK();
    *(int *)(DAT_146ab7248 + 0x48) = *(int *)(DAT_146ab7248 + 0x48) + 1;
    UNLOCK();
  }
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  plVar8 = (longlong *)TGraphTask<FExecuteRHIThreadTask>::CreateTask(local_90,local_78,param_3);
  *(undefined8 *)(*plVar8 + 0x10) = param_1[2];
  lVar4 = *plVar8;
  lVar7 = plVar8[2];
  lVar5 = plVar8[1];
  lVar6 = *(longlong *)(lVar4 + 0x20);
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 0x48) = *(int *)(lVar6 + 0x48) + 1;
    UNLOCK();
  }
  FUN_141ed70b0(lVar4,lVar5,(int)lVar7,1);
  if (DAT_146ab7248 != 0) {
    LOCK();
    piVar1 = (int *)(DAT_146ab7248 + 0x48);
    iVar2 = *piVar1;
    DAT_146ab7248 = lVar6;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    lVar6 = DAT_146ab7248;
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
      lVar6 = DAT_146ab7248;
    }
  }
  DAT_146ab7248 = lVar6;
  plVar8 = local_78;
  iVar2 = (int)local_50;
  if (local_58 != (longlong *)0x0) {
    plVar8 = local_58;
  }
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar8 != 0) {
      LOCK();
      piVar1 = (int *)(*plVar8 + 0x48);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FGraphEvent::Recycle();
      }
    }
    plVar8 = plVar8 + 1;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_141591a60(param_1[5],param_2,param_3);
  *param_1 = &PTR_FUN_144edb3b0;
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
  pDVar9 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar8 = TlsGetValue(*pDVar9);
  if (plVar8 == (longlong *)0x0) {
    plVar10 = (longlong *)operator_new(0x18);
    plVar8 = plVar11;
    if (plVar10 != (longlong *)0x0) {
      *plVar10 = 0;
      plVar10[1] = 0;
      *(undefined4 *)(plVar10 + 2) = 0;
      plVar8 = plVar10;
    }
    TlsSetValue(*pDVar9,plVar8);
  }
  if ((int)plVar8[2] < 0x20) {
    plVar11 = (longlong *)plVar8[1];
  }
  else {
    if (*plVar8 != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar9 + 2);
    }
    *plVar8 = plVar8[1];
    plVar8[1] = 0;
    *(undefined4 *)(plVar8 + 2) = 0;
  }
  *param_1 = plVar11;
  *(int *)(plVar8 + 2) = (int)plVar8[2] + 1;
  plVar8[1] = (longlong)param_1;
  return;
}



// FUNCTION 141ec4d00 FUN_141ec4d00 body=431 status=ok
// SIG undefined FUN_141ec4d00(void)

void FUN_141ec4d00(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  BOOL BVar4;
  DWORD *pDVar5;
  longlong *lpTlsValue;
  longlong *plVar6;
  longlong *plVar7;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_28;
  LARGE_INTEGER local_20;
  
  QueryPerformanceCounter(&local_20);
  if (DAT_146ab6389 != '\0') {
    DAT_1468b4fe4 = GetCurrentThreadId();
  }
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
  }
  QueryPerformanceCounter(&local_res20);
  FUN_141ec4830(param_1[2]);
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    FRHICommandListBase::~FRHICommandListBase(lVar3);
    FMemory::Free(lVar3);
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ab638c = DAT_146ab638c + (local_res8.s.LowPart - local_res20._0_4_);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
  plVar7 = (longlong *)0x0;
  if (DAT_146ab6389 != '\0') {
    DAT_1468b4fe4 = 0;
  }
  QueryPerformanceCounter(&local_28);
  DAT_146ab6330 = DAT_146ab6330 + (local_28.s.LowPart - local_20._0_4_);
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_141591a60(param_1[4],param_2,param_3);
  *param_1 = &PTR_FUN_144edb3a0;
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
  pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar5);
  if (lpTlsValue == (longlong *)0x0) {
    plVar6 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar7;
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = 0;
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
      lpTlsValue = plVar6;
    }
    TlsSetValue(*pDVar5,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar7 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar5 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar7;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 141ec4eb0 ExecuteTask body=450 status=ok
// SIG undefined ExecuteTask(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TGraphTask<FParallelTranslateCommandList>::ExecuteTask
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  DWORD *pDVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  longlong *plVar10;
  
  uVar5 = (**(code **)(*(longlong *)param_1[4] + 8))();
  plVar10 = (longlong *)0x0;
  plVar7 = plVar10;
  plVar8 = plVar10;
  if (0 < *(int *)(param_1 + 3)) {
    do {
      *(undefined8 *)(*(longlong *)((longlong)plVar8 + param_1[2]) + 0x20) = uVar5;
      lVar3 = *(longlong *)((longlong)plVar8 + param_1[2]);
      if (lVar3 != 0) {
        if (*(int *)(lVar3 + 0x14) != 0) {
          cVar4 = IsInRenderingThread();
          if (((cVar4 != '\0') && (DAT_146ab6e88 == '\0')) && (DAT_146ab6e8c != 0)) {
            FUN_141ec3e80(&DAT_146ab6e68,&DAT_146ab6e78);
          }
          FUN_141ec3e80(&DAT_146ab6e68,lVar3);
        }
        LOCK();
        _DAT_146ab6e70 = _DAT_146ab6e70 + -1;
        UNLOCK();
        FUN_14158cb50(lVar3 + 0x58);
        FMemStackBase::FreeChunks(lVar3 + 0x30,0);
        FMemory::Free(lVar3);
      }
      uVar9 = (int)plVar7 + 1;
      plVar7 = (longlong *)(ulonglong)uVar9;
      plVar8 = plVar8 + 1;
    } while ((int)uVar9 < *(int *)(param_1 + 3));
  }
  (**(code **)(*(longlong *)param_1[4] + 0x18))();
  *(undefined1 *)(param_1 + 6) = 0;
  FUN_141591a60(param_1[7],param_2,param_3);
  *param_1 = &PTR_FUN_144edb400;
  if (param_1[7] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[7] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar6 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar7 = TlsGetValue(*pDVar6);
  if (plVar7 == (longlong *)0x0) {
    plVar8 = (longlong *)operator_new(0x18);
    plVar7 = plVar10;
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = 0;
      plVar8[1] = 0;
      *(undefined4 *)(plVar8 + 2) = 0;
      plVar7 = plVar8;
    }
    TlsSetValue(*pDVar6,plVar7);
  }
  if ((int)plVar7[2] < 0x20) {
    plVar10 = (longlong *)plVar7[1];
  }
  else {
    if (*plVar7 != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar6 + 2);
    }
    *plVar7 = plVar7[1];
    plVar7[1] = 0;
    *(undefined4 *)(plVar7 + 2) = 0;
  }
  *param_1 = plVar10;
  *(int *)(plVar7 + 2) = (int)plVar7[2] + 1;
  plVar7[1] = (longlong)param_1;
  return;
}



// FUNCTION 141ec5080 ExecuteTask body=260 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<FParallelTranslateSetupCommandList>::ExecuteTask
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141ec0290(param_1 + 2,param_3,param_1 + 7);
  *(undefined1 *)(param_1 + 6) = 0;
  FUN_141591a60(param_1[7],param_2,param_3);
  *param_1 = &PTR_FUN_144edb410;
  if (param_1[7] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[7] + 0x48);
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



// FUNCTION 141ec5190 FUN_141ec5190 body=1568 status=ok
// SIG undefined FUN_141ec5190(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141ec5190(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  int *piVar11;
  longlong *plVar12;
  ulonglong uVar13;
  int *piVar14;
  undefined1 auStack_168 [32];
  longlong *local_148;
  longlong local_140;
  longlong local_138;
  longlong *plStack_130;
  longlong local_128;
  longlong *plStack_120;
  longlong local_110;
  longlong *local_108;
  longlong local_100;
  longlong *local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  code *local_c8 [2];
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  longlong local_78;
  longlong *plStack_70;
  longlong local_68;
  longlong *plStack_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  uVar13 = 0;
  plVar12 = (longlong *)*param_2;
  local_e8 = (longlong)(int)param_2[1] & 0x1fffffffffffffff;
  if (plVar12 + (int)param_2[1] < plVar12) {
    local_e8 = uVar13;
  }
  if (local_e8 != 0) {
    do {
      plVar10 = (longlong *)*plVar12;
      iVar1 = (int)plVar10[3];
      if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
        lVar5 = *(longlong *)(param_1 + 200);
        if (*(longlong *)(param_1 + 200) == 0) {
          lVar5 = param_1 + 0xc0;
        }
        iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0xd0) - 1U & (longlong)iVar1) * 4);
        if (iVar4 != -1) {
          do {
            piVar11 = (int *)((longlong)iVar4 * 0xa8 + *(longlong *)(param_1 + 0x88));
            if (*piVar11 == iVar1) {
              if (iVar4 != -1) goto LAB_141ec5277;
              break;
            }
            iVar4 = piVar11[0x28];
          } while (iVar4 != -1);
        }
      }
      piVar11 = (int *)0x0;
LAB_141ec5277:
      if (((*(int *)(param_1 + 0xf4) == piVar11[9] && piVar11[7] == *(int *)(param_1 + 0xec)) &&
          piVar11[8] == *(int *)(param_1 + 0xf0)) && piVar11[6] == *(int *)(param_1 + 0xe8)) {
        if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
          lVar5 = *(longlong *)(param_1 + 0x70);
          if (*(longlong *)(param_1 + 0x70) == 0) {
            lVar5 = param_1 + 0x68;
          }
          iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x78) - 1U & (longlong)iVar1) * 4);
          if (iVar4 != -1) {
            do {
              piVar11 = (int *)((longlong)iVar4 * 0xa8 + *(longlong *)(param_1 + 0x30));
              if (*piVar11 == iVar1) {
                if (iVar4 != -1) goto LAB_141ec5317;
                break;
              }
              iVar4 = piVar11[0x28];
            } while (iVar4 != -1);
          }
        }
        piVar11 = (int *)0x0;
LAB_141ec5317:
        piVar14 = piVar11 + 2;
        if (piVar11 == (int *)0x0) {
          piVar14 = (int *)0x0;
        }
        if (piVar14 == (int *)0x0) goto LAB_141ec575e;
        iVar1 = (int)plVar10[1];
        iVar4 = piVar14[2];
        if (iVar1 < iVar4) {
          *(int *)(plVar10 + 1) = iVar4;
          if (*(int *)((longlong)plVar10 + 0xc) < iVar4) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar10);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar1 + *plVar10),0,(longlong)(iVar4 - iVar1));
        }
        else if ((iVar4 < iVar1) && (iVar4 != iVar1)) {
          *(int *)(plVar10 + 1) = iVar4;
          TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(plVar10);
        }
        plVar2 = *(longlong **)(param_1 + 0x110);
        plVar7 = plVar10 + 6;
        lVar5 = *(longlong *)(param_1 + 0x108);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
        }
        local_138 = lVar5;
        plStack_130 = plVar2;
        if (&local_138 != plVar7) {
          local_138 = *plVar7;
          plStack_130 = (longlong *)plVar10[7];
          *plVar7 = lVar5;
          plVar10[7] = (longlong)plVar2;
          local_78 = lVar5;
          plStack_70 = plVar2;
        }
        plVar7 = plStack_130;
        if (plStack_130 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_130 + 1;
          lVar5 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plStack_130)(plStack_130);
            LOCK();
            piVar11 = (int *)((longlong)plVar7 + 0xc);
            iVar1 = *piVar11;
            *piVar11 = *piVar11 + -1;
            UNLOCK();
            if (iVar1 == 1) {
              (**(code **)(*plStack_130 + 8))(plStack_130,1);
            }
          }
        }
        local_140 = *plVar10;
        local_148 = (longlong *)0x0;
        lVar5 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x10))
                          (*(longlong **)(param_1 + 0x108),*(undefined8 *)piVar14,
                           *(undefined8 *)(piVar14 + 2),3);
        plVar6 = (longlong *)operator_new(0x18);
        if (plVar6 == (longlong *)0x0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          *(undefined4 *)(plVar6 + 1) = 1;
          *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
          *plVar6 = (longlong)&PTR_FUN_143f3f2e0;
          plVar6[2] = lVar5;
        }
        local_110 = lVar5;
        local_108 = plVar6;
        SharedPointerInternals::EnableSharedFromThis(&local_110,lVar5,lVar5);
        if (plVar10 + 4 != &local_110) {
          plVar10[4] = lVar5;
          local_110 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(plVar10 + 5,&local_108);
          plVar6 = local_108;
        }
LAB_141ec565a:
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar6 + 1;
          lVar5 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar11 = (int *)((longlong)plVar6 + 0xc);
            iVar1 = *piVar11;
            *piVar11 = *piVar11 + -1;
            UNLOCK();
            if (iVar1 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
        }
        uVar9 = 0;
        *(undefined1 *)((longlong)plVar10 + 0x1d) = 1;
        local_98 = (longlong *)0x0;
        local_88 = 0;
        local_e0 = param_1;
        uStack_d8 = plVar10;
        puVar8 = (undefined8 *)FUN_140438ef0(0x18,local_b8);
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = &PTR_FUN_144edb4f8;
          *(undefined4 *)(puVar8 + 1) = (undefined4)local_e0;
          *(undefined4 *)((longlong)puVar8 + 0xc) = local_e0._4_4_;
          *(undefined4 *)(puVar8 + 2) = (undefined4)uStack_d8;
          *(undefined4 *)((longlong)puVar8 + 0x14) = uStack_d8._4_4_;
        }
        plVar10 = (longlong *)plVar10[2];
        local_c8[0] = FUN_141ebd680;
        if ((plVar10 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar10 + 0x160))(plVar10,local_c8), cVar3 == '\0')) {
          local_f0 = 0;
          if (local_88 != 0) {
            plVar10 = local_b8;
            if (local_98 != (longlong *)0x0) {
              plVar10 = local_98;
            }
            if (plVar10 != (longlong *)0x0) {
              uVar9 = (**(code **)(*plVar10 + 8))();
            }
          }
          (*local_c8[0])(uVar9,&local_f0);
        }
        if (local_88 != 0) {
          plVar10 = local_b8;
          if (local_98 != (longlong *)0x0) {
            plVar10 = local_98;
          }
          if (plVar10 != (longlong *)0x0) {
            (**(code **)(*plVar10 + 0x10))(plVar10,0);
          }
        }
        if (local_98 != (longlong *)0x0) {
          FMemory::Free();
        }
      }
      else {
        if (((*(int *)(param_1 + 0xdc) == piVar11[7] && *(int *)(param_1 + 0xe0) == piVar11[8]) &&
            *(int *)(param_1 + 0xe4) == piVar11[9]) && piVar11[6] == *(int *)(param_1 + 0xd8)) {
          iVar1 = (int)plVar10[1];
          iVar4 = piVar11[4];
          if (iVar1 < iVar4) {
            *(int *)(plVar10 + 1) = iVar4;
            if (*(int *)((longlong)plVar10 + 0xc) < iVar4) {
              TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar10);
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar1 + *plVar10),0,(longlong)(iVar4 - iVar1));
          }
          else if ((iVar4 < iVar1) && (iVar4 != iVar1)) {
            *(int *)(plVar10 + 1) = iVar4;
            TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(plVar10);
          }
          plVar6 = (longlong *)0x0;
          plVar2 = *(longlong **)(param_1 + 0x100);
          plVar7 = plVar10 + 6;
          lVar5 = *(longlong *)(param_1 + 0xf8);
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
            UNLOCK();
          }
          local_128 = lVar5;
          plStack_120 = plVar2;
          if (&local_128 != plVar7) {
            local_128 = *plVar7;
            plStack_120 = (longlong *)plVar10[7];
            *plVar7 = lVar5;
            plVar10[7] = (longlong)plVar2;
            local_68 = lVar5;
            plStack_60 = plVar2;
          }
          plVar7 = plStack_120;
          if (plStack_120 != (longlong *)0x0) {
            LOCK();
            plVar2 = plStack_120 + 1;
            lVar5 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plStack_120)(plStack_120);
              LOCK();
              piVar14 = (int *)((longlong)plVar7 + 0xc);
              iVar1 = *piVar14;
              *piVar14 = *piVar14 + -1;
              UNLOCK();
              if (iVar1 == 1) {
                (**(code **)(*plStack_120 + 8))(plStack_120,1);
              }
            }
          }
          local_140 = *plVar10;
          local_148 = plVar6;
          lVar5 = (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x10))
                            (*(longlong **)(param_1 + 0xf8),*(undefined8 *)(piVar11 + 2),
                             *(undefined8 *)(piVar11 + 4),3);
          plVar7 = (longlong *)operator_new(0x18);
          if (plVar7 != (longlong *)0x0) {
            *(undefined4 *)(plVar7 + 1) = 1;
            *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
            *plVar7 = (longlong)&PTR_FUN_143f3f2e0;
            plVar7[2] = lVar5;
            plVar6 = plVar7;
          }
          local_100 = lVar5;
          local_f8 = plVar6;
          SharedPointerInternals::EnableSharedFromThis(&local_100,lVar5,lVar5);
          if (plVar10 + 4 != &local_100) {
            plVar10[4] = lVar5;
            local_100 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(plVar10 + 5,&local_f8);
            plVar6 = local_f8;
          }
          goto LAB_141ec565a;
        }
LAB_141ec575e:
        *(undefined1 *)((longlong)plVar10 + 0x1d) = 0;
      }
      plVar12 = plVar12 + 1;
      uVar13 = uVar13 + 1;
    } while (uVar13 != local_e8);
  }
  return;
}



// FUNCTION 141ec57b0 FetchPSODescriptors body=76 status=ok
// SIG undefined FetchPSODescriptors(void)

void FPipelineFileCache::FetchPSODescriptors(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_141ec9f60();
  if (cVar1 != '\0') {
    AcquireSRWLockShared((PSRWLOCK)&DAT_146ab66c8);
    if (DAT_146ab6360 != 0) {
      FUN_141ec5190(DAT_146ab6360,param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x000141ec57ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockShared((PSRWLOCK)&DAT_146ab66c8);
    return;
  }
  return;
}



// FUNCTION 141ec5800 CancelAsyncReallocateTexture2D_RenderThread body=127 status=ok
// SIG undefined CancelAsyncReallocateTexture2D_RenderThread(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FDynamicRHI::CancelAsyncReallocateTexture2D_RenderThread
                    (undefined8 param_1,longlong param_2,undefined8 param_3,undefined1 param_4)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar3 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_2);
    if (cVar1 != '\0') {
      lVar3 = param_2;
    }
  }
  uVar2 = (**(code **)(*DAT_146ab6358 + 0x288))(DAT_146ab6358,param_3,param_4);
  if (lVar3 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 141ec5880 FinalizeAsyncReallocateTexture2D_RenderThread body=127 status=ok
// SIG undefined FinalizeAsyncReallocateTexture2D_RenderThread(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FDynamicRHI::FinalizeAsyncReallocateTexture2D_RenderThread
                    (undefined8 param_1,longlong param_2,undefined8 param_3,undefined1 param_4)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar3 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_2);
    if (cVar1 != '\0') {
      lVar3 = param_2;
    }
  }
  uVar2 = (**(code **)(*DAT_146ab6358 + 0x270))(DAT_146ab6358,param_3,param_4);
  if (lVar3 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 141ec5900 FindDriverBlacklistEntry body=853 status=ok
// SIG undefined FindDriverBlacklistEntry(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FGPUHardware::FindDriverBlacklistEntry(int *param_1,undefined8 *param_2)

{
  short sVar1;
  char cVar2;
  undefined8 *puVar3;
  short *psVar4;
  wchar_t *pwVar5;
  undefined2 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  wchar_t *pwVar10;
  uint uVar11;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  short *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  short *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined2 *local_90;
  longlong local_88 [2];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  iVar9 = *param_1;
  pwVar10 = (wchar_t *)0x0;
  if (((iVar9 == 0x10de) || (iVar9 == 0x1002)) || (iVar9 == 0x8086)) {
    local_c0 = (longlong *)0x0;
    local_b8 = 0;
    if (iVar9 == 0x10de) {
      pwVar5 = L"GPU_NVIDIA";
    }
    else if (iVar9 == 0x1002) {
      pwVar5 = L"GPU_AMD";
    }
    else {
      pwVar5 = L"GPU_0x8086";
      if (iVar9 != 0x8086) {
        pwVar5 = pwVar10;
      }
    }
    local_d8 = &DAT_1468e23f0;
    FConfigCacheIni::GetArray(DAT_1468b6148,pwVar5,L"Blacklist",&local_c0);
    pwVar5 = pwVar10;
    iVar9 = (int)local_b8;
    plVar8 = local_c0;
    if (0 < (int)local_b8) {
      do {
        local_b0 = (short *)0x0;
        local_a8 = 0;
        local_a0 = 0;
        local_98 = 0;
        if (*(int *)((longlong)local_c0 + (longlong)(pwVar10 + 4)) == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = *(undefined2 **)((longlong)local_c0 + (longlong)pwVar10);
        }
        FParse::Value(puVar6 + 1,L"DriverVersion=",&local_b0,1);
        FParse::Value(puVar6 + 1,L"Reason=",&local_a0,1);
        puVar3 = (undefined8 *)FGPUDriverInfo::GetUnifiedDriverVersion(param_1,local_88);
        if (*(int *)(puVar3 + 1) == 0) {
          local_90 = &DAT_143f3eda8;
        }
        else {
          local_90 = (undefined2 *)*puVar3;
        }
        psVar4 = &DAT_143f3eda8;
        if ((int)local_a8 != 0) {
          psVar4 = local_b0;
        }
        sVar1 = *psVar4;
        if ((sVar1 == 0x3d) && (psVar4[1] == 0x3d)) {
          psVar4 = psVar4 + 2;
LAB_141ec5a67:
          local_c8 = psVar4;
          uVar7 = 1;
        }
        else {
          local_c8 = psVar4 + 1;
          if ((sVar1 == 0x21) && (*local_c8 == 0x3d)) {
            local_c8 = psVar4 + 2;
            uVar7 = 2;
          }
          else if (sVar1 == 0x3e) {
            if (*local_c8 == 0x3d) {
              local_c8 = psVar4 + 2;
              uVar7 = 4;
            }
            else {
              uVar7 = 3;
            }
          }
          else {
            if (sVar1 != 0x3c) goto LAB_141ec5a67;
            if (*local_c8 == 0x3d) {
              local_c8 = psVar4 + 2;
              uVar7 = 6;
            }
            else {
              uVar7 = 5;
            }
          }
        }
        local_60 = 0;
        local_78 = 0;
        local_58 = 0;
        local_70 = 0;
        local_50 = 0;
        local_68 = 0;
        FMultiInt<6>::Parse(&local_60,&local_90);
        FMultiInt<6>::Parse(&local_78,&local_c8);
        cVar2 = FUN_141eb4990(&local_60,uVar7,&local_78);
        if (local_88[0] != 0) {
          FMemory::Free();
        }
        if (cVar2 != '\0') {
          *param_2 = local_b0;
          *(int *)(param_2 + 1) = (int)local_a8;
          *(undefined4 *)((longlong)param_2 + 0xc) = local_a8._4_4_;
          param_2[2] = local_a0;
          *(undefined4 *)(param_2 + 3) = (undefined4)local_98;
          *(undefined4 *)((longlong)param_2 + 0x1c) = local_98._4_4_;
          local_98 = 0;
          local_b0 = (short *)0x0;
          local_a8 = 0;
          local_a0 = 0;
          plVar8 = local_c0;
          for (iVar9 = (int)local_b8; iVar9 != 0; iVar9 = iVar9 + -1) {
            if (*plVar8 != 0) {
              FMemory::Free();
            }
            plVar8 = plVar8 + 2;
          }
          if (local_c0 == (longlong *)0x0) {
            return param_2;
          }
          FMemory::Free(local_c0);
          return param_2;
        }
        if (local_a0 != 0) {
          FMemory::Free();
        }
        if (local_b0 != (short *)0x0) {
          FMemory::Free();
        }
        uVar11 = (int)pwVar5 + 1;
        pwVar10 = pwVar10 + 8;
        pwVar5 = (wchar_t *)(ulonglong)uVar11;
        iVar9 = (int)local_b8;
        plVar8 = local_c0;
      } while ((int)uVar11 < (int)local_b8);
    }
    for (; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_c0 != (longlong *)0x0) {
      FMemory::Free(local_c0);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  return param_2;
}



// FUNCTION 141ec5c60 FUN_141ec5c60 body=113 status=ok
// SIG undefined FUN_141ec5c60(void)

int * FUN_141ec5c60(longlong *param_1,int *param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)param_3) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x18) == param_3) {
          *param_2 = iVar1;
          return param_2;
        }
        iVar1 = *(int *)(*param_1 + 0x10 + (longlong)iVar1 * 0x18);
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141ec5ce0 FUN_141ec5ce0 body=119 status=ok
// SIG undefined FUN_141ec5ce0(void)

int * FUN_141ec5ce0(longlong *param_1,int *param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)param_3) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)((longlong)iVar1 * 0x254 + *param_1) == param_3) {
          *param_2 = iVar1;
          return param_2;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x254 + 0x24c + *param_1);
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141ec5d60 FindId body=119 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)param_3) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)((longlong)iVar1 * 0xa8 + *param_1) == param_3) {
          *param_2 = iVar1;
          return param_2;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0xa8 + 0xa0 + *param_1);
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141ec5de0 FindId body=240 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = ::GetTypeHash(param_3);
    plVar3 = (longlong *)0x0;
    if (param_1[8] == 0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)(((ulonglong)plVar3 | param_1[8]) +
                    ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x40;
        if ((((*(longlong *)(lVar4 + lVar1) == *param_3) &&
             (*(longlong *)(lVar4 + 8 + lVar1) == param_3[1])) &&
            (*(longlong *)(lVar4 + 0x10 + lVar1) == param_3[2])) &&
           (((*(longlong *)(lVar4 + 0x18 + lVar1) == param_3[3] &&
             (*(longlong *)(lVar4 + 0x20 + lVar1) == param_3[4])) &&
            (*(longlong *)(lVar4 + 0x28 + lVar1) == param_3[5])))) {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = *(int *)(lVar4 + 0x38 + lVar1);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141ec5ed0 FindId body=175 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FGraphicsPipelineStateKey,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateKey,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = (longlong *)param_1[8];
    iVar3 = ::GetTypeHash(param_3);
    if (plVar4 == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar3 = *(int *)((longlong)plVar4 + ((longlong)iVar3 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar3 != -1) {
      lVar1 = *param_1;
      do {
        lVar5 = (longlong)iVar3 * 0x130 + lVar1;
        cVar2 = FUN_141ebbab0(lVar5,param_3);
        if (cVar2 != '\0') {
          *param_2 = iVar3;
          return param_2;
        }
        iVar3 = *(int *)(lVar5 + 0x128);
      } while (iVar3 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141ec5f80 FindId body=234 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FString,FGPUProfilerEventNodeStats>,TDefaultMapHashableKeyFuncs<FString,FGPUProfilerEventNodeStats,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    if (*(int *)(param_3 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*param_3;
    }
    iVar2 = FUN_140438070(puVar5);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar2) * 4);
    if (iVar2 != -1) {
      lVar7 = *param_1;
      do {
        lVar1 = (longlong)iVar2 * 0x48;
        if (*(int *)(param_3 + 1) == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = (undefined2 *)*param_3;
        }
        if (*(int *)(lVar1 + 8 + lVar7) == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = *(undefined2 **)(lVar1 + lVar7);
        }
        iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar5);
        if (iVar3 == 0) {
          *param_2 = iVar2;
          return param_2;
        }
        lVar7 = *param_1;
        iVar2 = *(int *)(lVar1 + 0x40 + lVar7);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141ec6070 FUN_141ec6070 body=1333 status=ok
// SIG undefined FUN_141ec6070(void)

void FUN_141ec6070(char param_1)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  char cVar4;
  DWORD DVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  bool bVar17;
  
  if (DAT_146ab6e8c != 0) {
    FUN_141ec3e80(&DAT_146ab6e68,&DAT_146ab6e78);
  }
  FUN_141ed93a0(&DAT_146ab6e78);
  if (DAT_146ab6383 != '\0') {
    FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
  }
  FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
  if (DAT_146ab6358 != (longlong *)0x0) {
    (**(code **)(*DAT_146ab6358 + 0x450))();
  }
  uVar15 = 0;
  lVar10 = DAT_146ab6920;
  iVar13 = DAT_146ab6a50;
joined_r0x000141ec6101:
  DAT_146ab6920 = lVar10;
  DAT_146ab6a50 = iVar13;
  if ((DAT_146ab69c0 & 0x3ffffff) != 0) {
    if ((DAT_146ab62f5 == '\0') || (DAT_146ab62c8 == '\0')) {
      while (uVar16 = FUN_141594c40(&DAT_146ab6940), lVar10 = DAT_146ab6920, iVar13 = DAT_146ab6a50,
            uVar16 != 0) {
        puVar3 = *(undefined8 **)
                  ((&DAT_1468a81f8)[uVar16 >> 0xe] + 8 + (ulonglong)(uVar16 & 0x3fff) * 0x18);
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar16);
        lVar10 = DAT_146ab6920;
        iVar13 = DAT_146ab6a50;
        if (puVar3 == (undefined8 *)0x0) break;
        LOCK();
        bVar17 = *(int *)(puVar3 + 1) == 0;
        if (bVar17) {
          *(int *)(puVar3 + 1) = 0;
        }
        UNLOCK();
        if (bVar17) {
          (**(code **)*puVar3)(puVar3,1);
        }
        else {
          *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
        }
      }
    }
    else {
      lVar10 = (longlong)iVar13;
      DAT_146ab6a50 = iVar13 + 1;
      if (DAT_146ab6a54 < DAT_146ab6a50) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(&DAT_146ab6a48,iVar13);
      }
      plVar11 = DAT_146ab6a48;
      DAT_146ab6a48[lVar10 * 3] = 0;
      plVar11[lVar10 * 3 + 1] = 0;
      *(undefined4 *)(plVar11 + lVar10 * 3 + 2) = 0;
      plVar11 = DAT_146ab6a48 + lVar10 * 3;
      *(uint *)(plVar11 + 2) = DAT_146ab6398;
      if (*(int *)((longlong)plVar11 + 0xc) < 0x1000) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(plVar11,0x1000);
      }
      LOCK();
      if (DAT_146ab69c0 == 0) {
        DAT_146ab69c0 = 0;
      }
      UNLOCK();
      uVar16 = (uint)DAT_146ab69c0;
      uVar6 = DAT_146ab69c0;
      while (uVar16 = uVar16 & 0x3ffffff, DAT_146ab69c0 = uVar6, (uVar6 & 0x3ffffff) != 0) {
        uVar14 = (uVar6 & 0xfffffffffc000000) + 0x4000000;
        if (uVar14 < (uVar6 & 0xfffffffffc000000)) {
          LockFreeTagCounterHasOverflowed();
        }
        LOCK();
        bVar17 = uVar6 == DAT_146ab69c0;
        if (!bVar17) {
          uVar14 = DAT_146ab69c0;
        }
        DAT_146ab69c0 = uVar14;
        UNLOCK();
        if (bVar17) break;
        LOCK();
        if (DAT_146ab69c0 == 0) {
          DAT_146ab69c0 = 0;
        }
        UNLOCK();
        uVar16 = (uint)DAT_146ab69c0;
        uVar6 = DAT_146ab69c0;
      }
      while (lVar10 = DAT_146ab6920, iVar13 = DAT_146ab6a50, uVar16 != 0) {
        iVar13 = (int)plVar11[1];
        lVar10 = (&DAT_1468a81f8)[uVar16 >> 0xe];
        uVar2 = *(undefined8 *)(lVar10 + 8 + (ulonglong)(uVar16 & 0x3fff) * 0x18);
        *(int *)(plVar11 + 1) = iVar13 + 1;
        if (*(int *)((longlong)plVar11 + 0xc) < iVar13 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar11,iVar13);
        }
        *(undefined8 *)(*plVar11 + (longlong)iVar13 * 8) = uVar2;
        uVar9 = *(uint *)(lVar10 + (ulonglong)(uVar16 & 0x3fff) * 0x18 + 0x10);
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar16);
        uVar16 = uVar9;
      }
    }
    goto joined_r0x000141ec6101;
  }
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    uVar6 = 4;
    if (DVar5 != DAT_1468c21c0) goto LAB_141ec62a6;
  }
  uVar6 = uVar15;
LAB_141ec62a6:
  fVar1 = *(float *)(lVar10 + uVar6);
  if (DAT_146ab6a50 != 0) {
    if (param_1 == '\0') {
      uVar6 = uVar15;
      plVar11 = DAT_146ab6a48;
      uVar14 = uVar15;
      iVar13 = DAT_146ab6a50;
      if (0 < DAT_146ab6a50) {
        do {
          uVar16 = (uint)uVar6;
          if ((DAT_146ab6398 <=
               (uint)(*(int *)(uVar14 + 0x10 + (longlong)plVar11) + (int)(longlong)fVar1)) &&
             (DAT_146ab62c8 != '\0')) break;
          uVar8 = (ulonglong)*(int *)(uVar14 + 8 + (longlong)plVar11);
          plVar12 = *(longlong **)(uVar14 + (longlong)plVar11);
          uVar6 = uVar8 & 0x1fffffffffffffff;
          if (plVar12 + uVar8 < plVar12) {
            uVar6 = uVar15;
          }
          uVar8 = uVar15;
          if (uVar6 != 0) {
            do {
              puVar3 = (undefined8 *)*plVar12;
              LOCK();
              bVar17 = *(int *)(puVar3 + 1) == 0;
              if (bVar17) {
                *(int *)(puVar3 + 1) = 0;
              }
              UNLOCK();
              if (bVar17) {
                if (puVar3 != (undefined8 *)0x0) {
                  (**(code **)*puVar3)(puVar3,1);
                }
              }
              else {
                *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
              }
              plVar12 = plVar12 + 1;
              uVar8 = uVar8 + 1;
              plVar11 = DAT_146ab6a48;
              iVar13 = DAT_146ab6a50;
            } while (uVar8 != uVar6);
          }
          uVar16 = uVar16 + 1;
          uVar6 = (ulonglong)uVar16;
          uVar14 = uVar14 + 0x18;
        } while ((int)uVar16 < iVar13);
        uVar9 = uVar16;
        if (uVar16 != 0) {
          do {
            if (*plVar11 != 0) {
              FMemory::Free();
            }
            plVar11 = plVar11 + 3;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
          if (DAT_146ab6a50 - uVar16 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (DAT_146ab6a48,DAT_146ab6a48 + (longlong)(int)uVar16 * 3,
                       (longlong)(int)(DAT_146ab6a50 - uVar16) * 0x18);
          }
          DAT_146ab6a50 = DAT_146ab6a50 - uVar16;
          TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(&DAT_146ab6a48);
        }
      }
    }
    else {
      if (DAT_146ab6e8c != 0) {
        FUN_141ec3e80(&DAT_146ab6e68,&DAT_146ab6e78);
      }
      FUN_141ed93a0(&DAT_146ab6e78);
      if (DAT_146ab6383 != '\0') {
        FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
      }
      FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
      (**(code **)(*DAT_146ab6358 + 0x3d0))();
      uVar6 = uVar15;
      uVar14 = uVar15;
      iVar13 = DAT_146ab6a50;
      plVar11 = DAT_146ab6a48;
      if (0 < DAT_146ab6a50) {
        do {
          plVar11 = *(longlong **)(uVar6 + (longlong)DAT_146ab6a48);
          uVar7 = (ulonglong)*(int *)(uVar6 + 8 + (longlong)DAT_146ab6a48);
          uVar8 = uVar7 & 0x1fffffffffffffff;
          if (plVar11 + uVar7 < plVar11) {
            uVar8 = uVar15;
          }
          uVar7 = uVar15;
          if (uVar8 != 0) {
            do {
              puVar3 = (undefined8 *)*plVar11;
              LOCK();
              bVar17 = *(int *)(puVar3 + 1) == 0;
              if (bVar17) {
                *(int *)(puVar3 + 1) = 0;
              }
              UNLOCK();
              if (bVar17) {
                if (puVar3 != (undefined8 *)0x0) {
                  (**(code **)*puVar3)(puVar3,1);
                }
              }
              else {
                *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
              }
              plVar11 = plVar11 + 1;
              uVar7 = uVar7 + 1;
              iVar13 = DAT_146ab6a50;
            } while (uVar7 != uVar8);
          }
          uVar16 = (int)uVar14 + 1;
          uVar6 = uVar6 + 0x18;
          uVar14 = (ulonglong)uVar16;
          plVar11 = DAT_146ab6a48;
        } while ((int)uVar16 < iVar13);
      }
      for (; iVar13 != 0; iVar13 = iVar13 + -1) {
        if (*plVar11 != 0) {
          FMemory::Free();
        }
        plVar11 = plVar11 + 3;
      }
      DAT_146ab6a50 = 0;
      if (DAT_146ab6a54 != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                  (&DAT_146ab6a48,0);
      }
    }
    DAT_146ab6398 = DAT_146ab6398 + 1;
  }
  return;
}



// FUNCTION 141ec65b0 FUN_141ec65b0 body=701 status=ok
// SIG undefined FUN_141ec65b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_141ec65b0(void)

{
  int iVar1;
  undefined8 *puVar2;
  double dVar3;
  char cVar4;
  DWORD DVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  uint local_res8 [2];
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18;
  undefined1 local_res20 [8];
  
  TSharedPipelineStateCache<FGraphicsPipelineStateKey,FGraphicsPipelineState_*>::
  ConsolidateThreadedCaches(&DAT_1464c9f80);
  uVar10 = 0;
  uVar9 = (longlong)DAT_1464ca040 & 0x1fffffffffffffff;
  if (DAT_1464ca038 + DAT_1464ca040 < DAT_1464ca038) {
    uVar9 = uVar10;
  }
  plVar6 = DAT_1464ca038;
  uVar11 = uVar10;
  if (uVar9 != 0) {
    do {
      puVar2 = (undefined8 *)*plVar6;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      plVar6 = plVar6 + 1;
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar9);
  }
  DAT_1464ca040 = 0;
  if (DAT_1464ca044 != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_1464ca038,0);
  }
  if (DAT_146ac3a5a == '\0') {
    DAT_146ac3a5a = 1;
    plVar6 = (longlong *)FUN_14164bd40();
    plVar7 = (longlong *)FMemory::Realloc(0,0x20);
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)&PTR_GetPoolName_144510c40;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar7[2] = lVar8;
      *plVar7 = (longlong)&PTR_GetPoolName_144510c88;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar6,1);
      (**(code **)(*plVar7 + 0x20))(plVar7,local_res20);
      iVar1 = (int)plVar6[1];
      *(int *)(plVar6 + 1) = iVar1 + 1;
      if (*(int *)((longlong)plVar6 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar1);
      }
      lVar8 = *plVar6;
      *(longlong **)(lVar8 + (longlong)iVar1 * 0x10) = plVar7;
      *(undefined4 *)(lVar8 + 8 + (longlong)iVar1 * 0x10) = 2;
    }
    DAT_146ac3a5a = '\x01';
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ac3a68) && (_Init_thread_header(&DAT_146ac3a68), DAT_146ac3a68 == -1))
  {
    QueryPerformanceCounter(&local_res10);
    _DAT_146ac3a60 = (double)local_res10.QuadPart * DAT_1468b02f8 + 16777216.0;
    _Init_thread_footer(&DAT_146ac3a68);
  }
  QueryPerformanceCounter(&local_res18);
  lVar8 = DAT_146ab66f8;
  dVar3 = (double)local_res18.QuadPart * DAT_1468b02f8 + 16777216.0;
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    uVar9 = 4;
    if (DVar5 != DAT_1468c21c0) goto LAB_141ec676a;
  }
  uVar9 = uVar10;
LAB_141ec676a:
  if ((*(int *)(uVar9 + lVar8) != 0) && ((double)*(int *)(uVar9 + lVar8) <= dVar3 - _DAT_146ac3a60))
  {
    uVar9 = 0;
    LOCK();
    bVar12 = DAT_146ab67c8 == 0;
    if (bVar12) {
      DAT_146ab67c8 = 0;
    }
    else {
      uVar9 = (ulonglong)DAT_146ab67c8;
    }
    UNLOCK();
    if (bVar12) {
      _DAT_146ac3a60 = dVar3;
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_146ab6710);
      local_res8[0] = 2;
      TDiscardableKeyValueCache<FRHIComputeShader_*,FComputePipelineState_*>::
      Discard<<lambda_9bcd655b6dec050e72f51feb99300d2c>_>(&DAT_146ab6710,2,local_res8);
      if ((local_res8[0] >> 1 & 1) == 0) {
        if ((local_res8[0] & 1) != 0) {
          ReleaseSRWLockShared((PSRWLOCK)&DAT_146ab6710);
        }
      }
      else {
        ReleaseSRWLockExclusive((PSRWLOCK)&DAT_146ab6710);
      }
      uVar9 = TSharedPipelineStateCache<FGraphicsPipelineStateKey,FGraphicsPipelineState_*>::
              DiscardAndSwap(&DAT_1464c9f80);
    }
  }
  return uVar9;
}



// FUNCTION 141ec6870 FUN_141ec6870 body=421 status=ok
// SIG undefined FUN_141ec6870(void)

void FUN_141ec6870(longlong *param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  float fVar6;
  int local_res8 [2];
  longlong *local_58;
  undefined ***local_50;
  undefined **local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (((int)param_1[2] != 0) || (0 < (int)param_1[10])) {
    fVar6 = (float)(**(code **)(*param_1 + 0x10))();
    lVar1 = param_1[8];
    *(int *)((longlong)param_1 + 0x1c) = (int)param_1[2];
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)((longlong)param_1 + 0x14);
    *(float *)(param_1 + 5) = fVar6 * 1000.0;
    *(int *)((longlong)param_1 + 0x24) = (int)param_1[3];
    for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x40)) {
      *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + (int)param_1[2];
      *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + *(int *)((longlong)param_1 + 0x14);
      *(int *)(lVar1 + 0x24) = *(int *)(lVar1 + 0x24) + (int)param_1[3];
    }
    uVar5 = 0;
    uVar3 = uVar5;
    uVar2 = uVar5;
    if (0 < (int)param_1[10]) {
      do {
        FUN_141ec6870(*(undefined8 *)(param_1[9] + uVar3),param_2 + 1,param_3);
        uVar4 = (int)uVar2 + 1;
        uVar3 = uVar3 + 8;
        uVar2 = (ulonglong)uVar4;
      } while ((int)uVar4 < (int)param_1[10]);
    }
    TSet<TTuple<FString,FGPUProfilerEventNodeStats>,TDefaultMapHashableKeyFuncs<FString,FGPUProfilerEventNodeStats,0>,FDefaultSetAllocator>
    ::FindId(param_3,local_res8,param_1 + 6);
    uVar3 = uVar5;
    if (local_res8[0] != -1) {
      uVar3 = *param_3 + (longlong)local_res8[0] * 0x48;
    }
    uVar2 = uVar3 + 0x10;
    if (uVar3 == 0) {
      uVar2 = uVar5;
    }
    if (uVar2 == 0) {
      local_20 = (undefined4)param_1[5];
      local_48 = &PTR_FUN_144da0c18;
      local_38 = *(undefined4 *)((longlong)param_1 + 0x1c);
      local_34 = (undefined4)param_1[4];
      local_30 = *(undefined4 *)((longlong)param_1 + 0x24);
      local_50 = &local_48;
      local_40 = 0;
      local_2c = 0;
      local_24 = 0;
      local_1c = 1;
      local_58 = param_1 + 6;
      FUN_141eb5cf0(param_3,local_res8,&local_58,0);
    }
    else {
      *(int *)(uVar2 + 0x10) = *(int *)(uVar2 + 0x10) + *(int *)((longlong)param_1 + 0x1c);
      *(int *)(uVar2 + 0x14) = *(int *)(uVar2 + 0x14) + (int)param_1[4];
      *(int *)(uVar2 + 0x18) = *(int *)(uVar2 + 0x18) + *(int *)((longlong)param_1 + 0x24);
      fVar6 = *(float *)(param_1 + 5);
      *(int *)(uVar2 + 0x2c) = *(int *)(uVar2 + 0x2c) + 1;
      *(float *)(uVar2 + 0x28) = fVar6 + *(float *)(uVar2 + 0x28);
    }
  }
  return;
}



// FUNCTION 141ec6a20 FUN_141ec6a20 body=1289 status=ok
// SIG undefined FUN_141ec6a20(void)

undefined8 * FUN_141ec6a20(longlong param_1,ulonglong param_2,char param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  int *piVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  undefined8 *puVar15;
  uint uVar16;
  uint uVar17;
  ulonglong local_res10 [2];
  uint local_res20 [2];
  undefined8 *local_1f8;
  undefined1 local_1f0 [8];
  longlong local_1e8 [2];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_18c;
  undefined8 local_184;
  undefined4 local_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_134;
  undefined8 local_12c;
  undefined4 local_124;
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
  undefined8 local_cc;
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
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  ulonglong *local_50;
  undefined8 **local_48;
  undefined1 local_40 [24];
  
  local_res10[0] = param_2;
  cVar6 = FUN_141ec9c50();
  puVar15 = (undefined8 *)0x0;
  local_1f8 = (undefined8 *)0x0;
  AcquireSRWLockShared((PSRWLOCK)&DAT_146ab6710);
  local_res20[0] = 1;
  cVar7 = TDiscardableKeyValueCache<FRHIComputeShader_*,FComputePipelineState_*>::
          InternalFindWhileLocked(&DAT_146ab6710,local_res10,&local_1f8,5,local_res20);
  if (cVar7 != '\0') {
    if (cVar6 != '\0') {
      lVar2 = local_1f8[1];
      if (lVar2 != 0) {
        puVar1 = (ulonglong *)(lVar2 + 8);
        LOCK();
        uVar12 = *puVar1;
        if (uVar12 == 0) {
          *puVar1 = 0;
          uVar12 = 0;
        }
        UNLOCK();
        if (((uVar12 >> 0x1a & 1) == 0) && (local_1f8[1] != 0)) {
          TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::
          AddUniqueImpl<TRefCountPtr<FGraphEvent>_const_&>(param_1 + 0x58);
        }
      }
    }
    goto LAB_141ec6eb8;
  }
  iVar14 = (int)(local_res10[0] >> 4);
  uVar17 = 0x9e3779b9U - iVar14 ^ iVar14 << 8;
  uVar13 = -(uVar17 + iVar14) ^ uVar17 >> 0xd;
  uVar16 = (iVar14 - uVar17) - uVar13 ^ uVar13 >> 0xc;
  uVar17 = (uVar17 - uVar16) - uVar13 ^ uVar16 << 0x10;
  uVar13 = (uVar13 - uVar17) - uVar16 ^ uVar17 >> 5;
  uVar16 = (uVar16 - uVar17) - uVar13 ^ uVar13 >> 3;
  uVar17 = (uVar17 - uVar16) - uVar13 ^ uVar16 << 10;
  FUN_141ebd0f0((uVar13 - uVar17) - uVar16 ^ uVar17 >> 0xf);
  puVar8 = (undefined8 *)operator_new(0x28);
  local_1f8 = puVar15;
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[1] = 0;
    puVar8[3] = local_res10[0];
    puVar8[2] = 0;
    *puVar8 = &PTR__scalar_deleting_destructor__144edb340;
    puVar8[4] = 0;
    LOCK();
    *(int *)(puVar8[3] + 8) = *(int *)(puVar8[3] + 8) + 1;
    UNLOCK();
    local_1f8 = puVar8;
  }
  iVar14 = (int)(local_res10[0] >> 4);
  uVar17 = 0x9e3779b9U - iVar14 ^ iVar14 << 8;
  uVar13 = -(uVar17 + iVar14) ^ uVar17 >> 0xd;
  uVar16 = (iVar14 - uVar17) - uVar13 ^ uVar13 >> 0xc;
  uVar17 = (uVar17 - uVar16) - uVar13 ^ uVar16 << 0x10;
  uVar13 = (uVar13 - uVar17) - uVar16 ^ uVar17 >> 5;
  uVar16 = (uVar16 - uVar17) - uVar13 ^ uVar13 >> 3;
  uVar17 = (uVar17 - uVar16) - uVar13 ^ uVar16 << 10;
  uVar9 = FPipelineFileCache::RegisterPSOStats((uVar13 - uVar17) - uVar16 ^ uVar17 >> 0xf);
  local_1f8[2] = uVar9;
  if (cVar6 == '\0') {
    (**(code **)(*DAT_146ab6358 + 0x108))(DAT_146ab6358,local_1f0,local_1f8[3]);
    TRefCountPtr<FRHIComputePipelineState>::operator=(local_1f8 + 4,local_1f0);
    FUN_141eb9e20(local_1f0);
  }
  else if (param_3 == '\0') {
    puVar8 = (undefined8 *)operator_new(0xd0);
    if (puVar8 != (undefined8 *)0x0) {
      local_d8 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      *puVar8 = &PTR_FUN_144edb378;
      puVar8[1] = &PTR_FUN_144edb360;
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
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
      FCompilePipelineStateTask::FCompilePipelineStateTask(puVar8 + 2,local_1f8,&local_118);
      LOCK();
      DAT_146ab67c8 = DAT_146ab67c8 + 1;
      UNLOCK();
      puVar15 = puVar8;
    }
    (**(code **)(*DAT_146ab63a8 + 0x10))(DAT_146ab63a8,puVar15);
  }
  else {
    local_198 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_190 = 0;
    local_18c = 0x26;
    local_184 = 0;
    local_17c = 0;
    local_168 = 0;
    local_160 = 0;
    local_158 = 0;
    local_150 = 0;
    local_148 = 0;
    local_140 = 0;
    local_138 = 0;
    local_134 = 0;
    local_12c = 0;
    local_124 = 0;
    plVar10 = (longlong *)TGraphTask<FCompilePipelineStateTask>::CreateTask(local_40,0,0xff);
    FCompilePipelineStateTask::FCompilePipelineStateTask(*plVar10 + 0x10,local_1f8,&local_1d8);
    lVar2 = *plVar10;
    lVar5 = plVar10[2];
    lVar3 = plVar10[1];
    lVar4 = *(longlong *)(lVar2 + 0xd8);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
      UNLOCK();
    }
    local_1e8[0] = lVar4;
    FUN_141ed6b60(lVar2,lVar3,(int)lVar5,1);
    plVar10 = local_1f8 + 1;
    if (plVar10 == local_1e8) {
      if (lVar4 != 0) {
        LOCK();
        piVar11 = (int *)(lVar4 + 0x48);
        iVar14 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        lVar2 = local_1e8[0];
        goto joined_r0x000141ec6ceb;
      }
    }
    else {
      lVar2 = *plVar10;
      *plVar10 = lVar4;
      if (lVar2 != 0) {
        LOCK();
        piVar11 = (int *)(lVar2 + 0x48);
        iVar14 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
joined_r0x000141ec6ceb:
        if (iVar14 == 1) {
          FGraphEvent::Recycle(lVar2);
        }
      }
    }
    if (local_1f8[1] != 0) {
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::
      AddUniqueImpl<TRefCountPtr<FGraphEvent>_const_&>(param_1 + 0x58);
    }
  }
  uVar9 = DAT_146ab6718;
  piVar11 = (int *)TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                   ::FindId(DAT_146ab6718,local_58,local_res10[0]);
  if (*piVar11 == -1) {
    local_50 = local_res10;
    local_48 = &local_1f8;
    FUN_140a9d130(uVar9,local_54,&local_50,0);
  }
LAB_141ec6eb8:
  if ((local_res20[0] >> 1 & 1) != 0) {
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_146ab6710);
    return local_1f8;
  }
  if ((local_res20[0] & 1) != 0) {
    ReleaseSRWLockShared((PSRWLOCK)&DAT_146ab6710);
  }
  return local_1f8;
}



// FUNCTION 141ec6f30 FUN_141ec6f30 body=1659 status=ok
// SIG undefined FUN_141ec6f30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141ec6f30(longlong param_1,undefined8 *param_2,byte param_3,char param_4)

{
  ulonglong *puVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 auStack_2b8 [32];
  char local_298;
  undefined8 *local_290;
  undefined1 local_288 [8];
  longlong local_280;
  undefined1 local_278 [8];
  undefined1 local_270 [8];
  undefined1 *local_268;
  longlong *local_260;
  undefined1 *local_258;
  undefined8 **local_250;
  undefined1 local_248 [32];
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  uint uStack_1d8;
  int aiStack_1d4 [3];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined8 uStack_184;
  undefined1 uStack_17c;
  undefined1 uStack_17b;
  undefined1 uStack_17a;
  undefined1 uStack_179;
  undefined4 uStack_178;
  undefined2 uStack_174;
  undefined2 uStack_172;
  undefined1 local_168 [288];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  plVar10 = (longlong *)0x0;
  local_1e8 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  uStack_1e0 = 0;
  uStack_1dc = 0x26;
  uStack_1d8 = 0;
  aiStack_1d4[0] = 0;
  aiStack_1d4[1] = 0;
  aiStack_1d4[2] = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_184 = 0;
  uStack_17c = 0;
  uStack_17b = 0;
  uStack_17a = 0;
  uStack_179 = 0;
  uStack_178 = 0;
  uStack_174 = 0;
  uStack_172 = 0;
  if ((~param_3 & 1) == 0) {
    local_228 = *param_2;
    uStack_220 = param_2[1];
    uVar13 = param_2[0x16];
    local_218 = param_2[2];
    uStack_210 = param_2[3];
    local_208 = param_2[4];
    uStack_200 = param_2[5];
    local_1f8 = param_2[6];
    uStack_1f0 = param_2[7];
    local_1e8 = param_2[8];
    uStack_1e0 = (undefined4)param_2[9];
    uStack_1dc = (undefined4)((ulonglong)param_2[9] >> 0x20);
    aiStack_1d4[0] = (int)((ulonglong)param_2[10] >> 0x20);
    aiStack_1d4[1] = (int)param_2[0xb];
    aiStack_1d4[2] = (int)((ulonglong)param_2[0xb] >> 0x20);
    local_1c8 = param_2[0xc];
    uStack_1c0 = param_2[0xd];
    local_1b8 = param_2[0xe];
    uStack_1b0 = param_2[0xf];
    local_1a8 = param_2[0x10];
    uStack_1a0 = param_2[0x11];
    uVar9 = *(undefined4 *)((longlong)param_2 + 0xac);
    local_198 = param_2[0x12];
    uStack_190 = param_2[0x13];
    local_188 = *(undefined4 *)(param_2 + 0x14);
    uStack_184._0_4_ = *(undefined4 *)((longlong)param_2 + 0xa4);
    uStack_184._4_4_ = *(uint *)(param_2 + 0x15);
    uStack_17c = (undefined1)uVar9;
    uStack_17b = (undefined1)((uint)uVar9 >> 8);
    uStack_17a = (undefined1)((uint)uVar9 >> 0x10);
    uStack_179 = (undefined1)((uint)uVar9 >> 0x18);
    uStack_178 = (undefined4)uVar13;
    uStack_174 = (undefined2)((ulonglong)uVar13 >> 0x20);
    uStack_172 = (undefined2)((ulonglong)uVar13 >> 0x30);
    uStack_1d8 = *(uint *)(param_1 + 0x98);
    plVar16 = plVar10;
    if (uStack_1d8 != 0) {
      do {
        lVar3 = param_1 + (longlong)plVar16 * 0x18;
        lVar17 = *(longlong *)(lVar3 + 0xa0);
        if (lVar17 == 0) {
          aiStack_1d4[(longlong)plVar16] = 0;
        }
        else {
          aiStack_1d4[(longlong)plVar16] = *(int *)(lVar17 + 0x3c);
          *(undefined4 *)((longlong)&local_1b8 + (longlong)plVar16 * 4 + 4) =
               *(undefined4 *)(lVar17 + 0x40);
        }
        *(undefined1 *)((longlong)&local_198 + 4 + (longlong)plVar16) =
             *(undefined1 *)(lVar3 + 0xb0);
        *(undefined1 *)((longlong)&uStack_190 + 4 + (longlong)plVar16) =
             *(undefined1 *)(lVar3 + 0xb1);
        if (aiStack_1d4[(longlong)plVar16] != 0) {
          uStack_174 = *(undefined2 *)(lVar17 + 0x38);
        }
        uVar18 = (int)plVar16 + 1;
        plVar16 = (longlong *)(ulonglong)uVar18;
      } while (uVar18 < uStack_1d8);
    }
    lVar3 = *(longlong *)(param_1 + 0x160);
    if (lVar3 == 0) {
      uStack_184 = (ulonglong)uStack_184._4_4_ << 0x20;
      plVar16 = plVar10;
    }
    else {
      uStack_184 = *(longlong *)(lVar3 + 0x3c);
      plVar16 = (longlong *)(ulonglong)*(uint *)(lVar3 + 0x3c);
    }
    uStack_17c = *(undefined1 *)(param_1 + 0x168);
    uStack_17b = *(undefined1 *)(param_1 + 0x169);
    uStack_17a = *(undefined1 *)(param_1 + 0x16a);
    uStack_179 = *(undefined1 *)(param_1 + 0x16b);
    uStack_178 = *(undefined4 *)(param_1 + 0x16c);
    if ((int)plVar16 != 0) {
      uStack_174 = *(undefined2 *)(lVar3 + 0x38);
    }
    param_2 = &local_228;
  }
  local_298 = param_4;
  cVar6 = FUN_141ec9c50(param_1);
  local_290 = (undefined8 *)0x0;
  FUN_141eb9650(local_168,param_2);
  plVar16 = DAT_1464c9f88;
  if ((int)DAT_1464c9f88[1] != *(int *)((longlong)DAT_1464c9f88 + 0x34)) {
    plVar11 = (longlong *)DAT_1464c9f88[8];
    plVar15 = DAT_1464c9f88 + 7;
    iVar8 = GetTypeHash(local_168);
    if (plVar11 == (longlong *)0x0) {
      plVar11 = plVar15;
    }
    iVar8 = *(int *)((longlong)plVar11 + ((longlong)iVar8 & (longlong)(int)plVar16[9] - 1U) * 4);
    if (iVar8 != -1) {
      lVar3 = *plVar16;
      do {
        plVar16 = (longlong *)((longlong)iVar8 * 0x130 + lVar3);
        cVar7 = FUN_141ebbab0(plVar16,local_168);
        if (cVar7 != '\0') {
          if (iVar8 != -1) goto LAB_141ec71c2;
          break;
        }
        iVar8 = (int)plVar16[0x25];
      } while (iVar8 != -1);
    }
  }
  plVar16 = plVar10;
LAB_141ec71c2:
  plVar15 = plVar16 + 0x24;
  if (plVar16 == (longlong *)0x0) {
    plVar15 = plVar10;
  }
  if (plVar15 != (longlong *)0x0) {
LAB_141ec7341:
    local_290 = (undefined8 *)*plVar15;
    if (cVar6 != '\0') {
      if (local_290[1] != 0) {
        puVar1 = (ulonglong *)(local_290[1] + 8);
        LOCK();
        uVar12 = *puVar1;
        if (uVar12 == 0) {
          *puVar1 = 0;
          uVar12 = 0;
        }
        UNLOCK();
        if (((uVar12 >> 0x1a & 1) == 0) && (local_290[1] != 0)) {
          TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::
          AddUniqueImpl<TRefCountPtr<FGraphEvent>_const_&>(param_1 + 0x58);
        }
      }
    }
    return local_290;
  }
  plVar10 = (longlong *)FUN_141ec7810(&DAT_1464c9f80);
  if ((int)plVar10[1] != *(int *)((longlong)plVar10 + 0x34)) {
    plVar16 = (longlong *)plVar10[8];
    iVar8 = GetTypeHash(local_168);
    if (plVar16 == (longlong *)0x0) {
      plVar16 = plVar10 + 7;
    }
    iVar8 = *(int *)((longlong)plVar16 + ((longlong)iVar8 & (longlong)(int)plVar10[9] - 1U) * 4);
    if (iVar8 != -1) {
      lVar3 = *plVar10;
      do {
        lVar17 = (longlong)iVar8 * 0x130 + lVar3;
        cVar7 = FUN_141ebbab0(lVar17,local_168);
        if (cVar7 != '\0') {
          if (iVar8 != -1) goto LAB_141ec7260;
          break;
        }
        iVar8 = *(int *)(lVar17 + 0x128);
      } while (iVar8 != -1);
    }
  }
  lVar17 = 0;
LAB_141ec7260:
  plVar16 = DAT_1464c9f90;
  plVar15 = (longlong *)(lVar17 + 0x120);
  if (lVar17 == 0) {
    plVar15 = (longlong *)0x0;
  }
  if (plVar15 != (longlong *)0x0) goto LAB_141ec7341;
  if ((int)DAT_1464c9f90[1] != *(int *)((longlong)DAT_1464c9f90 + 0x34)) {
    plVar11 = (longlong *)DAT_1464c9f90[8];
    plVar15 = DAT_1464c9f90 + 7;
    iVar8 = GetTypeHash(local_168);
    if (plVar11 == (longlong *)0x0) {
      plVar11 = plVar15;
    }
    iVar8 = *(int *)((longlong)plVar11 + ((longlong)iVar8 & (longlong)(int)plVar16[9] - 1U) * 4);
    if (iVar8 != -1) {
      lVar3 = *plVar16;
      do {
        lVar17 = (longlong)iVar8 * 0x130 + lVar3;
        cVar7 = FUN_141ebbab0(lVar17,local_168);
        if (cVar7 != '\0') {
          if (iVar8 != -1) goto LAB_141ec7303;
          break;
        }
        iVar8 = *(int *)(lVar17 + 0x128);
      } while (iVar8 != -1);
    }
  }
  lVar17 = 0;
LAB_141ec7303:
  plVar15 = (longlong *)(lVar17 + 0x120);
  if (lVar17 == 0) {
    plVar15 = (longlong *)0x0;
  }
  if (plVar15 != (longlong *)0x0) {
    local_268 = local_168;
    local_260 = plVar15;
    FUN_141eb5a30(plVar10,local_288,&local_268,0);
    goto LAB_141ec7341;
  }
  uVar9 = GetTypeHash(param_2);
  FUN_141ebd3b0(uVar9,param_2);
  local_290 = (undefined8 *)operator_new(0x20);
  if (local_290 == (undefined8 *)0x0) {
    local_290 = (undefined8 *)0x0;
  }
  else {
    local_290[1] = 0;
    *local_290 = &PTR__scalar_deleting_destructor__144edb350;
    local_290[2] = 0;
    local_290[3] = 0;
  }
  uVar9 = GetTypeHash(param_2);
  uVar13 = FPipelineFileCache::RegisterPSOStats(uVar9);
  local_290[2] = uVar13;
  if (cVar6 == '\0') {
    (**(code **)(*DAT_146ab6358 + 0xf8))(DAT_146ab6358,local_278,param_2);
    TRefCountPtr<FRHIComputePipelineState>::operator=(local_290 + 3,local_278);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_278);
    goto LAB_141ec7548;
  }
  if (local_298 == '\0') {
    puVar14 = (undefined8 *)operator_new(0xd0);
    if (puVar14 == (undefined8 *)0x0) {
      puVar14 = (undefined8 *)0x0;
    }
    else {
      *puVar14 = &PTR_FUN_144edb378;
      puVar14[1] = &PTR_FUN_144edb360;
      FCompilePipelineStateTask::FCompilePipelineStateTask(puVar14 + 2,local_290,param_2);
      LOCK();
      DAT_146ab67c8 = DAT_146ab67c8 + 1;
      UNLOCK();
    }
    (**(code **)(*DAT_146ab63a8 + 0x10))(DAT_146ab63a8,puVar14);
    goto LAB_141ec7548;
  }
  plVar10 = (longlong *)TGraphTask<FCompilePipelineStateTask>::CreateTask(local_248,0,0xff);
  FCompilePipelineStateTask::FCompilePipelineStateTask(*plVar10 + 0x10,local_290,param_2);
  lVar3 = *plVar10;
  lVar5 = plVar10[2];
  lVar17 = plVar10[1];
  lVar4 = *(longlong *)(lVar3 + 0xd8);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
    UNLOCK();
  }
  local_280 = lVar4;
  FUN_141ed6b60(lVar3,lVar17,(int)lVar5,1);
  plVar10 = local_290 + 1;
  if (plVar10 == &local_280) {
    if (lVar4 != 0) {
      LOCK();
      piVar2 = (int *)(lVar4 + 0x48);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      lVar3 = local_280;
      goto joined_r0x000141ec748e;
    }
  }
  else {
    lVar3 = *plVar10;
    *plVar10 = lVar4;
    if (lVar3 != 0) {
      LOCK();
      piVar2 = (int *)(lVar3 + 0x48);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
joined_r0x000141ec748e:
      if (iVar8 == 1) {
        FGraphEvent::Recycle(lVar3);
      }
    }
  }
  if (local_290[1] != 0) {
    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::
    AddUniqueImpl<TRefCountPtr<FGraphEvent>_const_&>(param_1 + 0x58);
  }
LAB_141ec7548:
  uVar13 = FUN_141ec7810(&DAT_1464c9f80);
  local_258 = local_168;
  local_250 = &local_290;
  FUN_141eb5a30(uVar13,local_270,&local_258,0);
  return local_290;
}



// FUNCTION 141ec75b0 GetCachedBoundShaderState body=109 status=ok
// SIG undefined GetCachedBoundShaderState(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
GetCachedBoundShaderState
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_5;
  local_10 = param_6;
  local_38 = param_1;
  local_30 = param_2;
  local_28 = param_3;
  local_20 = param_4;
  TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*,0>,FDefaultSetAllocator>
  ::FindId(&DAT_1464c9dd0,&param_5,&local_38);
  if (((int)param_5 != -1) && (lVar1 = (longlong)(int)param_5 * 0x40 + _DAT_1464c9dd0, lVar1 != 0))
  {
    return *(undefined8 *)(lVar1 + 0x30);
  }
  return 0;
}



// FUNCTION 141ec7620 GetCachedBoundShaderState_Threadsafe body=240 status=ok
// SIG undefined GetCachedBoundShaderState_Threadsafe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
GetCachedBoundShaderState_Threadsafe
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong *plVar1;
  BOOL BVar2;
  longlong lVar3;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab63b0);
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab63b0);
  }
  local_20 = CONCAT44(param_5._4_4_,(int)param_5);
  local_18 = param_6;
  local_10 = param_7;
  local_38 = param_2;
  local_30 = param_3;
  local_28 = param_4;
  TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*,0>,FDefaultSetAllocator>
  ::FindId(&DAT_1464c9e20,&param_5,&local_38);
  if ((((int)param_5 == -1) || (lVar3 = (longlong)(int)param_5 * 0x40 + _DAT_1464c9e20, lVar3 == 0))
     || (plVar1 = *(longlong **)(lVar3 + 0x30), plVar1 == (longlong *)0x0)) {
    *param_1 = 0;
  }
  else {
    lVar3 = *plVar1;
    *param_1 = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab63b0);
  return param_1;
}



// FUNCTION 141ec7710 GetFeatureLevelName body=139 status=ok
// SIG undefined GetFeatureLevelName(void)

void GetFeatureLevelName(uint param_1,longlong *param_2)

{
  int iVar1;
  
  if (param_1 < 4) {
    FName::ToString(&DAT_146ab6b38 + (longlong)(int)param_1 * 8);
    return;
  }
  if ((wchar_t *)*param_2 != L"InvalidFeatureLevel") {
    iVar1 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != 0x14) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x14);
      iVar1 = (int)param_2[1];
    }
    *(int *)(param_2 + 1) = iVar1 + 0x14;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 0x14) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
    }
    builtin_wcsncpy((wchar_t *)*param_2,L"InvalidFeatureLevel",0x14);
  }
  return;
}



// FUNCTION 141ec77a0 FUN_141ec77a0 body=101 status=ok
// SIG undefined FUN_141ec77a0(void)

float FUN_141ec77a0(void)

{
  float *pfVar1;
  char cVar2;
  DWORD DVar3;
  
  pfVar1 = DAT_146ab6ab0;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      return pfVar1[1] * 0.001;
    }
  }
  return *pfVar1 * 0.001;
}



// FUNCTION 141ec7810 FUN_141ec7810 body=223 status=ok
// SIG undefined FUN_141ec7810(void)

undefined8 * FUN_141ec7810(DWORD *param_1)

{
  DWORD DVar1;
  BOOL BVar2;
  undefined8 *lpTlsValue;
  
  lpTlsValue = TlsGetValue(*param_1);
  if (lpTlsValue == (undefined8 *)0x0) {
    lpTlsValue = (undefined8 *)operator_new(0x50);
    if (lpTlsValue != (undefined8 *)0x0) {
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      lpTlsValue[4] = 0;
      lpTlsValue[5] = 0;
      *(undefined4 *)(lpTlsValue + 6) = 0xffffffff;
      *(undefined4 *)((longlong)lpTlsValue + 0x34) = 0;
      lpTlsValue[8] = 0;
      *(undefined4 *)(lpTlsValue + 9) = 0;
    }
    TlsSetValue(*param_1,lpTlsValue);
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x32));
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x32));
    }
    DVar1 = param_1[0x3e];
    param_1[0x3e] = DVar1 + 1;
    if ((int)param_1[0x3f] < (int)(DVar1 + 1)) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x3c,DVar1);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x3c) + (longlong)(int)DVar1 * 8) = lpTlsValue;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x32));
  }
  return lpTlsValue;
}



// FUNCTION 141ec78f0 FUN_141ec78f0 body=1407 status=ok
// SIG undefined FUN_141ec78f0(void)

undefined8 * FUN_141ec78f0(undefined8 *param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  wchar_t *_Str;
  int *piVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  longlong *plVar14;
  longlong *plVar15;
  wchar_t *pwVar16;
  undefined2 *puVar17;
  undefined8 *local_res8;
  int local_res10 [2];
  int *local_res18;
  int local_res20 [2];
  longlong *local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  ulonglong local_c0;
  longlong *local_b8;
  ulonglong local_b0;
  undefined2 *local_a8;
  int local_a0;
  undefined4 local_9c;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  longlong *local_78;
  longlong *local_70;
  wchar_t *local_68;
  int local_60;
  undefined4 local_5c;
  int **local_58;
  undefined1 local_50 [16];
  
  local_res8 = param_1;
  local_res10[0] = param_2;
  if (DAT_146ac3a94 == '\0') {
    DAT_146ac3a94 = '\x01';
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    FConfigCacheIni::GetArray
              (DAT_1468b6148,L"MaterialQualityLevels.CookerSettings",
               L"SP_SupportedMaterialQualityLevels",&local_b8,&DAT_1468e2360);
    uVar10 = (ulonglong)(int)local_b0;
    local_70 = local_b8;
    plVar12 = local_b8 + uVar10 * 2;
    plVar14 = local_b8;
    local_78 = plVar12;
    if (local_b8 != plVar12) {
      do {
        puVar17 = (undefined2 *)0x0;
        local_80 = (int)plVar14[1];
        lVar11 = (longlong)local_80;
        pvVar2 = (void *)*plVar14;
        local_88 = (void *)0x0;
        local_70 = plVar14;
        if (local_80 == 0) {
          local_7c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_88,local_80,0);
          _guard_xfg_dispatch_icall_nop(local_88,pvVar2,lVar11 * 2);
        }
        local_d8 = (longlong *)0x0;
        local_d0 = 0;
        FUN_141594550(&local_88,&local_d8,&DAT_144ed5acc,1);
        if ((int)local_d0 == 2) {
          local_a8 = (undefined2 *)0x0;
          local_a0 = (int)local_d8[1];
          lVar11 = (longlong)local_a0;
          pvVar2 = (void *)*local_d8;
          if (local_a0 == 0) {
            local_9c = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,local_a0,0);
            puVar17 = local_a8;
            _guard_xfg_dispatch_icall_nop(local_a8,pvVar2,lVar11 * 2);
          }
          iVar5 = local_a0;
          local_98 = (void *)0x0;
          local_90 = (int)local_d8[3];
          lVar11 = (longlong)local_90;
          pvVar2 = (void *)local_d8[2];
          if (local_90 == 0) {
            local_8c = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,local_90,0);
            _guard_xfg_dispatch_icall_nop(local_98,pvVar2,lVar11 * 2);
          }
          puVar9 = &DAT_143f3eda8;
          if (iVar5 != 0) {
            puVar9 = puVar17;
          }
          puVar6 = (undefined8 *)FName::FName(local_50,puVar9,1);
          uVar4 = FUN_141ed7950(*puVar6);
          local_res18 = (int *)CONCAT44(local_res18._4_4_,uVar4);
          local_c8 = (longlong *)0x0;
          local_c0 = 0;
          FUN_141594550(&local_98,&local_c8,&DAT_144ed5b74,1);
          uVar10 = (ulonglong)(int)local_c0;
          plVar15 = local_c8 + uVar10 * 2;
          plVar12 = local_c8;
          if (local_c8 != plVar15) {
            do {
              pwVar16 = (wchar_t *)0x0;
              local_60 = (int)plVar12[1];
              lVar11 = (longlong)local_60;
              pvVar2 = (void *)*plVar12;
              local_68 = (wchar_t *)0x0;
              if (local_60 == 0) {
                local_5c = 0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,local_60,0);
                pwVar16 = local_68;
                _guard_xfg_dispatch_icall_nop(local_68,pvVar2,lVar11 * 2);
              }
              iVar5 = local_60;
              if (DAT_1464ca098 != DAT_1464ca0c4) {
                puVar7 = DAT_1464ca0d0;
                if (DAT_1464ca0d0 == (undefined *)0x0) {
                  puVar7 = &DAT_1464ca0c8;
                }
                iVar1 = *(int *)(puVar7 + (longlong)(int)(DAT_1464ca0d8 - 1U & (uint)local_res18) *
                                          4);
                while (iVar1 != -1) {
                  lVar11 = (longlong)iVar1 * 0x20;
                  if (*(uint *)(lVar11 + DAT_1464ca090) == (uint)local_res18) {
                    if ((iVar1 != -1) && (lVar11 = lVar11 + DAT_1464ca090, lVar11 != 0))
                    goto LAB_141ec7be7;
                    break;
                  }
                  iVar1 = *(int *)(lVar11 + DAT_1464ca090 + 0x18);
                }
              }
              local_58 = &local_res18;
              TSet<TTuple<enum_EFlareQuestCallback::Type,TArray<UFlareQuest_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<enum_EFlareQuestCallback::Type,TArray<UFlareQuest_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
              ::Emplace<TKeyInitializer<enum_EFlareQuestCallback::Type_const_&>_>
                        (&DAT_1464ca090,local_res20,&local_58,0);
              lVar11 = (longlong)local_res20[0] * 0x20 + DAT_1464ca090;
LAB_141ec7be7:
              plVar14 = (longlong *)(lVar11 + 8);
              _Str = L"";
              if (iVar5 != 0) {
                _Str = pwVar16;
              }
              iVar5 = _wtoi(_Str);
              if (-1 < iVar5) {
                piVar3 = (int *)*plVar14;
                iVar1 = *(int *)(lVar11 + 0x10);
                for (piVar8 = piVar3; piVar8 != piVar3 + iVar1; piVar8 = piVar8 + 1) {
                  if (*piVar8 == iVar5) {
                    if ((int)((longlong)piVar8 - (longlong)piVar3 >> 2) != -1) goto LAB_141ec7c5c;
                    break;
                  }
                }
                *(int *)(lVar11 + 0x10) = iVar1 + 1;
                if (*(int *)(lVar11 + 0x14) < iVar1 + 1) {
                  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar14,iVar1);
                }
                *(int *)((longlong)iVar1 * 4 + *plVar14) = iVar5;
              }
LAB_141ec7c5c:
              if (pwVar16 != (wchar_t *)0x0) {
                FMemory::Free(pwVar16);
              }
              plVar12 = plVar12 + 2;
            } while (plVar12 != plVar15);
            uVar10 = local_c0 & 0xffffffff;
            plVar14 = local_70;
            puVar17 = local_a8;
          }
          uVar13 = (uint)uVar10;
          plVar12 = local_c8;
          while (uVar13 != 0) {
            if (*plVar12 != 0) {
              FMemory::Free();
            }
            plVar12 = plVar12 + 2;
            uVar13 = (int)uVar10 - 1;
            uVar10 = (ulonglong)uVar13;
          }
          if (local_c8 != (longlong *)0x0) {
            FMemory::Free(local_c8);
          }
          if (local_98 != (void *)0x0) {
            FMemory::Free();
          }
          plVar12 = local_78;
          if (puVar17 != (undefined2 *)0x0) {
            FMemory::Free(puVar17);
            plVar12 = local_78;
          }
        }
        plVar15 = local_d8;
        for (iVar5 = (int)local_d0; iVar5 != 0; iVar5 = iVar5 + -1) {
          if (*plVar15 != 0) {
            FMemory::Free();
          }
          plVar15 = plVar15 + 2;
        }
        if (local_d8 != (longlong *)0x0) {
          FMemory::Free(local_d8);
        }
        if (local_88 != (void *)0x0) {
          FMemory::Free();
        }
        local_70 = plVar14 + 2;
        plVar14 = local_70;
      } while (local_70 != plVar12);
      uVar10 = local_b0 & 0xffffffff;
    }
    uVar13 = (uint)uVar10;
    plVar12 = local_b8;
    while (uVar13 != 0) {
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      plVar12 = plVar12 + 2;
      uVar13 = (int)uVar10 - 1;
      uVar10 = (ulonglong)uVar13;
    }
    if (local_b8 != (longlong *)0x0) {
      FMemory::Free(local_b8);
    }
  }
  puVar6 = local_res8;
  if (DAT_1464ca098 != DAT_1464ca0c4) {
    puVar7 = DAT_1464ca0d0;
    if (DAT_1464ca0d0 == (undefined *)0x0) {
      puVar7 = &DAT_1464ca0c8;
    }
    iVar5 = *(int *)(puVar7 + ((longlong)DAT_1464ca0d8 - 1U & (longlong)local_res10[0]) * 4);
    while (iVar5 != -1) {
      lVar11 = (longlong)iVar5 * 0x20;
      if (*(int *)(lVar11 + DAT_1464ca090) == local_res10[0]) {
        if ((iVar5 != -1) && (lVar11 = lVar11 + DAT_1464ca090, lVar11 != 0)) goto LAB_141ec7e27;
        break;
      }
      iVar5 = *(int *)(lVar11 + DAT_1464ca090 + 0x18);
    }
  }
  local_res18 = local_res10;
  TSet<TTuple<enum_EFlareQuestCallback::Type,TArray<UFlareQuest_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<enum_EFlareQuestCallback::Type,TArray<UFlareQuest_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<enum_EFlareQuestCallback::Type_const_&>_>
            (&DAT_1464ca090,&local_res8,&local_res18,0);
  lVar11 = (longlong)(int)local_res8 * 0x20 + DAT_1464ca090;
LAB_141ec7e27:
  *puVar6 = 0;
  iVar5 = *(int *)(lVar11 + 0x10);
  pvVar2 = *(void **)(lVar11 + 8);
  *(int *)(puVar6 + 1) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(puVar6,iVar5,0);
    _guard_xfg_dispatch_icall_nop((void *)*puVar6,pvVar2,(longlong)iVar5 << 2);
  }
  return puVar6;
}



// FUNCTION 141ec7e70 FUN_141ec7e70 body=7 status=ok
// SIG undefined FUN_141ec7e70(void)

undefined4 FUN_141ec7e70(void)

{
  return DAT_1464ca188;
}



// FUNCTION 141ec7e80 FUN_141ec7e80 body=10 status=ok
// SIG undefined FUN_141ec7e80(void)

undefined4 * FUN_141ec7e80(undefined4 *param_1)

{
  *param_1 = 1;
  return param_1;
}



// FUNCTION 141ec7e90 FUN_141ec7e90 body=13 status=ok
// SIG undefined FUN_141ec7e90(void)

int FUN_141ec7e90(void)

{
  int iVar1;
  
  iVar1 = 0;
  LOCK();
  if (DAT_146ab67cc != 0) {
    iVar1 = DAT_146ab67cc;
  }
  UNLOCK();
  DAT_146ab67cc = iVar1;
  return iVar1;
}



// FUNCTION 141ec7ea0 FUN_141ec7ea0 body=13 status=ok
// SIG undefined FUN_141ec7ea0(void)

int FUN_141ec7ea0(void)

{
  int iVar1;
  
  iVar1 = 0;
  LOCK();
  if (DAT_146ab67c8 != 0) {
    iVar1 = DAT_146ab67c8;
  }
  UNLOCK();
  DAT_146ab67c8 = iVar1;
  return iVar1;
}



// FUNCTION 141ec7eb0 FUN_141ec7eb0 body=535 status=ok
// SIG undefined FUN_141ec7eb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_141ec7eb0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  int iVar2;
  BOOL BVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  int local_58 [2];
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab63b0);
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab63b0);
  }
  local_38 = param_5;
  local_30 = param_6;
  local_28 = param_7;
  local_20 = param_8;
  local_48 = param_3;
  local_40 = param_4;
  TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*,0>,FDefaultSetAllocator>
  ::FindId(&DAT_1464c9e20,local_58,&local_48);
  if (((local_58[0] == -1) || (lVar7 = (longlong)local_58[0] * 0x40 + _DAT_1464c9e20, lVar7 == 0))
     || (plVar6 = *(longlong **)(lVar7 + 0x30), plVar6 == (longlong *)0x0)) {
    lVar7 = 0;
    lVar5 = lVar7;
    if (*(int *)(param_2 + 8) != 0) {
      plVar6 = (longlong *)param_2[6];
      if ((longlong *)param_2[6] == (longlong *)0x0) {
        plVar6 = param_2 + 2;
      }
      if (plVar6 != (longlong *)0x0) {
        lVar5 = (**(code **)(*plVar6 + 8))();
      }
    }
    plVar6 = (longlong *)(*(code *)*param_2)(&local_50,lVar5);
    *param_1 = *plVar6;
    *plVar6 = 0;
    if (local_50 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_50 + 1);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        if (*(char *)(local_50 + 2) == '\0') {
          LOCK();
          bVar8 = *(int *)((longlong)local_50 + 0xc) == 0;
          if (bVar8) {
            *(int *)((longlong)local_50 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar8) {
            uVar4 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar4 != 0) {
              lVar7 = (&DAT_1468a81f8)[uVar4 >> 0xe] + (ulonglong)(uVar4 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar7 + 8) = local_50;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*local_50)(local_50,1);
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab63b0);
    if (*(int *)(param_2 + 8) != 0) {
      plVar6 = (longlong *)param_2[6];
      if ((longlong *)param_2[6] == (longlong *)0x0) {
        plVar6 = param_2 + 2;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
  }
  else {
    lVar7 = *plVar6;
    *param_1 = lVar7;
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab63b0);
    if (*(int *)(param_2 + 8) != 0) {
      plVar6 = (longlong *)param_2[6];
      if ((longlong *)param_2[6] == (longlong *)0x0) {
        plVar6 = param_2 + 2;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
  }
  if (param_2[6] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 141ec80d0 GetOrderedPSOHashes body=1264 status=ok
// SIG undefined GetOrderedPSOHashes(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FPipelineCacheFile::GetOrderedPSOHashes(longlong param_1,longlong *param_2,int param_3)

{
  uint *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint *puVar16;
  ulonglong uVar17;
  undefined1 auStack_168 [32];
  uint local_148;
  uint uStack_144;
  uint *puStack_140;
  uint local_138;
  uint uStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  longlong *local_128;
  undefined8 uStack_120;
  uint *puStack_118;
  uint uStack_110;
  uint uStack_10c;
  undefined8 uStack_108;
  undefined1 local_100 [8];
  longlong *local_f8;
  uint uStack_f0;
  uint uStack_ec;
  uint *local_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 uStack_c8;
  uint *puStack_c0;
  undefined4 uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8 [2];
  undefined1 local_98 [16];
  undefined8 local_88;
  ulonglong local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70 [8];
  undefined1 *local_68;
  uint local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  if (param_3 != *(int *)(param_1 + 0x80)) {
    SortMetaData(param_1 + 0x88,param_3);
    *(int *)(param_1 + 0x80) = param_3;
  }
  uVar17 = 0;
  uStack_144 = 1;
  plVar3 = (longlong *)(param_1 + 0x88);
  uVar7 = *(uint *)(param_1 + 0xb0);
  puVar1 = (uint *)(param_1 + 0x98);
  local_148 = 0;
  uStack_134 = 0;
  uStack_130 = 0;
  if (uVar7 != 0) {
    puVar16 = *(uint **)(param_1 + 0xa8);
    if (*(uint **)(param_1 + 0xa8) == (uint *)0x0) {
      puVar16 = puVar1;
    }
    uVar4 = *puVar16;
    uVar13 = uVar17;
    uVar15 = uVar17;
    while (uVar4 == 0) {
      iVar6 = (int)uVar13;
      uStack_130 = (int)uVar15 + 0x20;
      uVar15 = (ulonglong)uStack_130;
      local_148 = iVar6 + 1;
      uVar13 = (ulonglong)local_148;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_141ec81d5;
      uVar4 = puVar16[(longlong)iVar6 + 1];
    }
    uStack_144 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_144 != 0) {
      for (; uStack_144 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_144 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_134 = (uStack_130 - iVar6) + 0x1f;
    if ((int)uVar7 < (int)uStack_134) {
LAB_141ec81d5:
      uStack_134 = uVar7;
    }
  }
  uVar4 = *(uint *)(param_1 + 0xb0);
  uStack_110 = 0xffffffff;
  uStack_10c = uStack_134;
  uStack_108 = CONCAT44(uStack_12c,uStack_130);
  uStack_120 = CONCAT44(uStack_144,local_148);
  local_138 = -1 << ((byte)uVar4 & 0x1f);
  uVar14 = uVar4 & 0xffffffe0;
  uStack_f0 = local_148;
  uStack_ec = uStack_144;
  puStack_140 = puVar1;
  uStack_134 = uVar4;
  local_128 = plVar3;
  puStack_118 = puVar1;
  local_e8 = puVar1;
  local_d8 = uStack_108;
  uStack_e0 = uStack_110;
  uStack_dc = uStack_10c;
  local_f8 = plVar3;
  if (uVar4 != uVar7) {
    puVar16 = *(uint **)(param_1 + 0xa8);
    if (*(uint **)(param_1 + 0xa8) == (uint *)0x0) {
      puVar16 = puVar1;
    }
    uVar10 = puVar16[(int)uVar4 >> 5] & local_138;
    iVar6 = (int)uVar4 >> 5;
    while (uVar10 == 0) {
      uVar14 = uVar14 + 0x20;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_141ec82b7;
      uVar10 = puVar16[(longlong)iVar6 + 1];
      local_138 = 0xffffffff;
      iVar6 = iVar6 + 1;
    }
    uVar10 = -uVar10 & uVar10;
    iVar6 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar10 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_134 = (uVar14 - iVar6) + 0x1f;
    uVar4 = uStack_134;
    if ((int)uVar7 < (int)uStack_134) {
LAB_141ec82b7:
      uStack_134 = uVar7;
      uVar4 = uVar7;
    }
  }
  do {
    if (((uStack_dc == uVar4) && (local_e8 == puVar1)) && (local_f8 == plVar3)) {
      return;
    }
    local_a8[0] = 0;
    puVar8 = (undefined4 *)((longlong)(int)uStack_dc * 0xa8 + *local_f8);
    local_a8[1] = 0;
    local_88 = 0;
    local_80 = 0;
    local_58 = *puVar8;
    plVar2 = (longlong *)(puVar8 + 0x14);
    local_78 = 0xffffffff;
    local_74 = 0;
    local_68 = (undefined1 *)0x0;
    local_60 = 0;
    if (local_a8 != plVar2) {
      iVar6 = puVar8[0x16] - puVar8[0x21];
      uVar13 = uVar17;
      if (iVar6 != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeTo
                  (local_a8,iVar6);
        uVar13 = local_80 >> 0x20;
      }
      local_78 = 0xffffffff;
      local_74 = 0;
      local_80 = local_80 & 0xffffffff00000000;
      uVar7 = iVar6 + 0x1f + (iVar6 + 0x1f >> 0x1f & 0x1fU);
      if ((uint)uVar13 != (uVar7 & 0xffffffe0)) {
        local_80 = ((ulonglong)uVar7 & 0xffffffe0) << 0x20;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(local_98,0);
      }
      cVar5 = TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::ConditionalRehash
                        (local_a8,iVar6,1);
      if ((cVar5 == '\0') && (0 < (int)local_60)) {
        uVar15 = (ulonglong)local_60;
        uVar13 = uVar17;
        do {
          uVar11 = (longlong)(int)(local_60 - 1) & uVar13;
          puVar9 = local_70;
          if (local_68 != (undefined1 *)0x0) {
            puVar9 = local_68;
          }
          uVar13 = uVar13 + 1;
          *(undefined4 *)(puVar9 + uVar11 * 4) = 0xffffffff;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      uVar7 = puVar8[0x1e];
      puStack_140 = puVar8 + 0x18;
      uStack_144 = 1;
      local_148 = 0;
      uStack_134 = 0;
      uStack_130 = 0;
      if (uVar7 != 0) {
        puVar16 = *(uint **)(puVar8 + 0x1c);
        if (*(uint **)(puVar8 + 0x1c) == (uint *)0x0) {
          puVar16 = puStack_140;
        }
        uVar14 = *puVar16;
        uVar13 = uVar17;
        uVar15 = uVar17;
        while (uVar14 == 0) {
          iVar6 = (int)uVar13;
          uStack_130 = (int)uVar15 + 0x20;
          uVar15 = (ulonglong)uStack_130;
          local_148 = iVar6 + 1;
          uVar13 = (ulonglong)local_148;
          if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
          goto LAB_141ec8484;
          uVar14 = puVar16[(longlong)iVar6 + 1];
        }
        uStack_144 = -uVar14 & uVar14;
        iVar6 = 0x1f;
        if (uStack_144 != 0) {
          for (; uStack_144 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        if (uStack_144 == 0) {
          iVar6 = 0x20;
        }
        else {
          iVar6 = 0x1f - iVar6;
        }
        uStack_134 = (uStack_130 - iVar6) + 0x1f;
        if ((int)uVar7 < (int)uStack_134) {
LAB_141ec8484:
          uStack_134 = uVar7;
        }
      }
      local_138 = 0xffffffff;
      uStack_120 = CONCAT44(uStack_144,local_148);
      uStack_b8 = 0xffffffff;
      uStack_b4 = uStack_134;
      uStack_b0 = uStack_130;
      uStack_ac = uStack_12c;
      uStack_110 = 0xffffffff;
      uStack_10c = uStack_134;
      uStack_108 = CONCAT44(uStack_12c,uStack_130);
      local_128 = plVar2;
      puStack_118 = puStack_140;
      local_d0 = plVar2;
      uStack_c8 = uStack_120;
      puStack_c0 = puStack_140;
      if ((int)uStack_134 < (int)uVar7) {
        do {
          FUN_1419ccaa0(local_a8,local_100,(longlong)(int)uStack_10c * 0x1c + *local_128,0);
          uStack_110 = uStack_110 & ~uStack_120._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_120);
        } while ((int)uStack_10c < (int)puStack_118[6]);
      }
    }
    iVar6 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
      TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
    }
    puVar12 = (undefined8 *)((longlong)iVar6 * 0x58 + *param_2);
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[4] = 0;
    puVar12[5] = 0;
    *(undefined4 *)(puVar12 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar12 + 0x34) = 0;
    puVar12[8] = 0;
    *(undefined4 *)(puVar12 + 9) = 0;
    TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::operator=(puVar12,local_a8);
    *(undefined4 *)(puVar12 + 10) = local_58;
    local_60 = 0;
    if (local_68 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (local_a8);
    uStack_e0 = uStack_e0 & ~uStack_ec;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_f0);
  } while( true );
}



// FUNCTION 141ec85c0 GetOrderedPSOHashes body=90 status=ok
// SIG undefined GetOrderedPSOHashes(void)

void FPipelineFileCache::GetOrderedPSOHashes(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_141ec9f60();
  if (cVar1 != '\0') {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_146ab66c8);
    DAT_146ab636c = param_2;
    if (DAT_146ab6360 != 0) {
      FPipelineCacheFile::GetOrderedPSOHashes(DAT_146ab6360,param_1,param_2);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_146ab66c8);
  }
  return;
}



// FUNCTION 141ec8620 Get body=8 status=ok
// SIG undefined Get(void)

undefined * FTaskGraphInterface::Get(void)

{
  return &DAT_146ab7218;
}



// FUNCTION 141ec8630 GetTypeHash body=787 status=ok
// SIG undefined GetTypeHash(void)

uint GetTypeHash(ulonglong *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  
  iVar1 = (int)(*param_1 >> 4);
  iVar5 = (int)(param_1[1] >> 4);
  uVar10 = 0x9e3779b9U - iVar1 ^ iVar1 << 8;
  uVar7 = -(uVar10 + iVar1) ^ uVar10 >> 0xd;
  uVar13 = (iVar1 - uVar10) - uVar7 ^ uVar7 >> 0xc;
  uVar10 = (uVar10 - uVar13) - uVar7 ^ uVar13 << 0x10;
  uVar8 = (uVar7 - uVar10) - uVar13 ^ uVar10 >> 5;
  uVar14 = (uVar13 - uVar10) - uVar8 ^ uVar8 >> 3;
  uVar11 = (uVar10 - uVar14) - uVar8 ^ uVar14 << 10;
  uVar7 = 0x9e3779b9U - iVar5 ^ iVar5 << 8;
  uVar13 = -(uVar7 + iVar5) ^ uVar7 >> 0xd;
  uVar10 = (iVar5 - uVar7) - uVar13 ^ uVar13 >> 0xc;
  uVar7 = (uVar7 - uVar10) - uVar13 ^ uVar10 << 0x10;
  uVar21 = (uVar13 - uVar7) - uVar10 ^ uVar7 >> 5;
  uVar19 = (uVar10 - uVar7) - uVar21 ^ uVar21 >> 3;
  uVar18 = (uVar7 - uVar19) - uVar21 ^ uVar19 << 10;
  iVar1 = (int)(param_1[4] >> 4);
  uVar13 = 0x9e3779b9U - iVar1 ^ iVar1 << 8;
  iVar5 = (int)(param_1[2] >> 4);
  iVar15 = (int)(param_1[3] >> 4);
  uVar10 = -(uVar13 + iVar1) ^ uVar13 >> 0xd;
  uVar7 = (iVar1 - uVar13) - uVar10 ^ uVar10 >> 0xc;
  uVar13 = (uVar13 - uVar7) - uVar10 ^ uVar7 << 0x10;
  uVar4 = (uVar10 - uVar13) - uVar7 ^ uVar13 >> 5;
  uVar3 = (uVar7 - uVar13) - uVar4 ^ uVar4 >> 3;
  uVar20 = (uVar13 - uVar3) - uVar4 ^ uVar3 << 10;
  uVar7 = 0x9e3779b9U - iVar5 ^ iVar5 << 8;
  uVar13 = -(uVar7 + iVar5) ^ uVar7 >> 0xd;
  uVar10 = (iVar5 - uVar7) - uVar13 ^ uVar13 >> 0xc;
  uVar7 = (uVar7 - uVar10) - uVar13 ^ uVar10 << 0x10;
  uVar17 = (uVar13 - uVar7) - uVar10 ^ uVar7 >> 5;
  uVar6 = (uVar10 - uVar7) - uVar17 ^ uVar17 >> 3;
  uVar2 = (uVar7 - uVar6) - uVar17 ^ uVar6 << 10;
  uVar10 = 0x9e3779b9U - iVar15 ^ iVar15 << 8;
  uVar7 = -(uVar10 + iVar15) ^ uVar10 >> 0xd;
  iVar1 = (int)(param_1[5] >> 4);
  uVar13 = (iVar15 - uVar10) - uVar7 ^ uVar7 >> 0xc;
  uVar10 = (uVar10 - uVar13) - uVar7 ^ uVar13 << 0x10;
  uVar9 = (uVar7 - uVar10) - uVar13 ^ uVar10 >> 5;
  uVar16 = (uVar13 - uVar10) - uVar9 ^ uVar9 >> 3;
  uVar12 = (uVar10 - uVar16) - uVar9 ^ uVar16 << 10;
  uVar7 = 0x9e3779b9U - iVar1 ^ iVar1 << 8;
  uVar10 = -(uVar7 + iVar1) ^ uVar7 >> 0xd;
  uVar13 = (iVar1 - uVar7) - uVar10 ^ uVar10 >> 0xc;
  uVar7 = (uVar7 - uVar13) - uVar10 ^ uVar13 << 0x10;
  uVar10 = (uVar10 - uVar7) - uVar13 ^ uVar7 >> 5;
  uVar13 = (uVar13 - uVar7) - uVar10 ^ uVar10 >> 3;
  uVar7 = (uVar7 - uVar13) - uVar10 ^ uVar13 << 10;
  return (uVar7 ^ uVar12 ^ uVar2 ^ uVar20 ^ uVar18 ^ uVar11) >> 0xf ^ (uVar10 - uVar7) - uVar13 ^
         (uVar9 - uVar12) - uVar16 ^ (uVar17 - uVar2) - uVar6 ^ (uVar4 - uVar20) - uVar3 ^
         (uVar21 - uVar18) - uVar19 ^ (uVar8 - uVar11) - uVar14;
}



// FUNCTION 141ec8950 FUN_141ec8950 body=1025 status=ok
// SIG undefined FUN_141ec8950(void)

int FUN_141ec8950(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  bool bVar7;
  
  LOCK();
  bVar7 = param_1[0x91] == 0;
  if (bVar7) {
    param_1[0x91] = 0;
  }
  UNLOCK();
  if (bVar7) {
    iVar3 = *param_1;
    if (iVar3 == 0) {
      iVar3 = GetTypeHash(param_1 + 1);
    }
    else if (iVar3 == 1) {
      uVar2 = FCrc::MemCrc32(param_1 + 0x8b,4,1);
      uVar2 = FCrc::MemCrc32(param_1 + 0x8c,4,uVar2);
      uVar2 = FCrc::MemCrc32(param_1 + 0x90,4,uVar2);
      uVar2 = FCrc::MemCrc32(param_1 + 6,0x14,uVar2);
      uVar2 = FCrc::MemCrc32(param_1 + 0xb,0x14,uVar2);
      uVar2 = FCrc::MemCrc32(param_1 + 0x10,0x14,uVar2);
      uVar2 = FCrc::MemCrc32(param_1 + 0x15,0x14,uVar2);
      uVar2 = FCrc::MemCrc32(param_1 + 0x1a,0x14,uVar2);
      uVar2 = FCrc::MemCrc32(param_1 + 0x8d,4,uVar2);
      uVar2 = FCrc::MemCrc32(param_1 + 0x8e,4,uVar2);
      uVar2 = FCrc::MemCrc32(param_1 + 0x8f,1,uVar2);
      uVar2 = FCrc::MemCrc32((longlong)param_1 + 0x23d,1,uVar2);
      uVar2 = FCrc::MemCrc32((longlong)param_1 + 0x23e,1,uVar2);
      uVar2 = FCrc::MemCrc32((longlong)param_1 + 0x23f,1,uVar2);
      uVar2 = FCrc::MemCrc32(param_1 + 0x6f,1,uVar2);
      lVar4 = (longlong)param_1 + 0x185;
      lVar6 = 8;
      do {
        uVar2 = FCrc::MemCrc32(lVar4 + -1,1,uVar2);
        uVar2 = FCrc::MemCrc32(lVar4,1,uVar2);
        uVar2 = FCrc::MemCrc32(lVar4 + 1,1,uVar2);
        uVar2 = FCrc::MemCrc32(lVar4 + 5,1,uVar2);
        uVar2 = FCrc::MemCrc32(lVar4 + 2,1,uVar2);
        uVar2 = FCrc::MemCrc32(lVar4 + 3,1,uVar2);
        uVar2 = FCrc::MemCrc32(lVar4 + 4,1,uVar2);
        lVar4 = lVar4 + 7;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      uVar2 = FCrc::MemCrc32(param_1 + 0x77,0x20,uVar2);
      uVar2 = FCrc::MemCrc32(param_1 + 0x7f,0x20,uVar2);
      uVar2 = FCrc::MemCrc32(param_1 + 0x87,8,uVar2);
      uVar2 = FCrc::MemCrc32(param_1 + 0x89,8,uVar2);
      piVar5 = param_1 + 0x1f;
      piVar1 = piVar5 + (longlong)param_1[0x5f] * 2;
      for (; piVar5 != piVar1; piVar5 = piVar5 + 2) {
        uVar2 = FCrc::MemCrc32(piVar5,8,uVar2);
      }
      uVar2 = FCrc::MemCrc32(param_1 + 0x70,4,uVar2);
      uVar2 = FCrc::MemCrc32(param_1 + 0x71,4,uVar2);
      uVar2 = FCrc::MemCrc32(param_1 + 0x72,1,uVar2);
      uVar2 = FCrc::MemCrc32((longlong)param_1 + 0x1c9,1,uVar2);
      uVar2 = FCrc::MemCrc32((longlong)param_1 + 0x1ca,1,uVar2);
      uVar2 = FCrc::MemCrc32((longlong)param_1 + 0x1cb,1,uVar2);
      uVar2 = FCrc::MemCrc32(param_1 + 0x73,1,uVar2);
      uVar2 = FCrc::MemCrc32((longlong)param_1 + 0x1cd,1,uVar2);
      uVar2 = FCrc::MemCrc32((longlong)param_1 + 0x1ce,1,uVar2);
      uVar2 = FCrc::MemCrc32((longlong)param_1 + 0x1cf,1,uVar2);
      uVar2 = FCrc::MemCrc32(param_1 + 0x74,1,uVar2);
      uVar2 = FCrc::MemCrc32((longlong)param_1 + 0x1d1,1,uVar2);
      uVar2 = FCrc::MemCrc32((longlong)param_1 + 0x1d2,1,uVar2);
      uVar2 = FCrc::MemCrc32((longlong)param_1 + 0x1d3,1,uVar2);
      uVar2 = FCrc::MemCrc32(param_1 + 0x75,1,uVar2);
      uVar2 = FCrc::MemCrc32((longlong)param_1 + 0x1d5,1,uVar2);
      uVar2 = FCrc::MemCrc32((longlong)param_1 + 0x1d6,1,uVar2);
      uVar2 = FCrc::MemCrc32((longlong)param_1 + 0x1d7,1,uVar2);
      uVar2 = FCrc::MemCrc32(param_1 + 0x76,1,uVar2);
      iVar3 = FCrc::MemCrc32((longlong)param_1 + 0x1d9,1,uVar2);
    }
    LOCK();
    if (param_1[0x91] == 0) {
      param_1[0x91] = iVar3;
    }
    UNLOCK();
  }
  LOCK();
  iVar3 = param_1[0x91];
  if (iVar3 == 0) {
    param_1[0x91] = 0;
    iVar3 = 0;
  }
  UNLOCK();
  return iVar3;
}



// FUNCTION 141ec8d60 GetTypeHash body=787 status=ok
// SIG undefined GetTypeHash(void)

uint GetTypeHash(ulonglong *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  
  iVar1 = (int)(*param_1 >> 4);
  iVar5 = (int)(param_1[1] >> 4);
  uVar10 = 0x9e3779b9U - iVar1 ^ iVar1 << 8;
  uVar7 = -(uVar10 + iVar1) ^ uVar10 >> 0xd;
  uVar13 = (iVar1 - uVar10) - uVar7 ^ uVar7 >> 0xc;
  uVar10 = (uVar10 - uVar13) - uVar7 ^ uVar13 << 0x10;
  uVar8 = (uVar7 - uVar10) - uVar13 ^ uVar10 >> 5;
  uVar14 = (uVar13 - uVar10) - uVar8 ^ uVar8 >> 3;
  uVar11 = (uVar10 - uVar14) - uVar8 ^ uVar14 << 10;
  uVar7 = 0x9e3779b9U - iVar5 ^ iVar5 << 8;
  uVar13 = -(uVar7 + iVar5) ^ uVar7 >> 0xd;
  uVar10 = (iVar5 - uVar7) - uVar13 ^ uVar13 >> 0xc;
  uVar7 = (uVar7 - uVar10) - uVar13 ^ uVar10 << 0x10;
  uVar21 = (uVar13 - uVar7) - uVar10 ^ uVar7 >> 5;
  uVar19 = (uVar10 - uVar7) - uVar21 ^ uVar21 >> 3;
  uVar18 = (uVar7 - uVar19) - uVar21 ^ uVar19 << 10;
  iVar1 = (int)(param_1[2] >> 4);
  uVar13 = 0x9e3779b9U - iVar1 ^ iVar1 << 8;
  iVar5 = (int)(param_1[3] >> 4);
  iVar15 = (int)(param_1[4] >> 4);
  uVar10 = -(uVar13 + iVar1) ^ uVar13 >> 0xd;
  uVar7 = (iVar1 - uVar13) - uVar10 ^ uVar10 >> 0xc;
  uVar13 = (uVar13 - uVar7) - uVar10 ^ uVar7 << 0x10;
  uVar4 = (uVar10 - uVar13) - uVar7 ^ uVar13 >> 5;
  uVar3 = (uVar7 - uVar13) - uVar4 ^ uVar4 >> 3;
  uVar20 = (uVar13 - uVar3) - uVar4 ^ uVar3 << 10;
  uVar7 = 0x9e3779b9U - iVar5 ^ iVar5 << 8;
  uVar13 = -(uVar7 + iVar5) ^ uVar7 >> 0xd;
  uVar10 = (iVar5 - uVar7) - uVar13 ^ uVar13 >> 0xc;
  uVar7 = (uVar7 - uVar10) - uVar13 ^ uVar10 << 0x10;
  uVar17 = (uVar13 - uVar7) - uVar10 ^ uVar7 >> 5;
  uVar6 = (uVar10 - uVar7) - uVar17 ^ uVar17 >> 3;
  uVar2 = (uVar7 - uVar6) - uVar17 ^ uVar6 << 10;
  uVar10 = 0x9e3779b9U - iVar15 ^ iVar15 << 8;
  uVar7 = -(uVar10 + iVar15) ^ uVar10 >> 0xd;
  iVar1 = (int)(param_1[5] >> 4);
  uVar13 = (iVar15 - uVar10) - uVar7 ^ uVar7 >> 0xc;
  uVar10 = (uVar10 - uVar13) - uVar7 ^ uVar13 << 0x10;
  uVar9 = (uVar7 - uVar10) - uVar13 ^ uVar10 >> 5;
  uVar16 = (uVar13 - uVar10) - uVar9 ^ uVar9 >> 3;
  uVar12 = (uVar10 - uVar16) - uVar9 ^ uVar16 << 10;
  uVar7 = 0x9e3779b9U - iVar1 ^ iVar1 << 8;
  uVar10 = -(uVar7 + iVar1) ^ uVar7 >> 0xd;
  uVar13 = (iVar1 - uVar7) - uVar10 ^ uVar10 >> 0xc;
  uVar7 = (uVar7 - uVar13) - uVar10 ^ uVar13 << 0x10;
  uVar10 = (uVar10 - uVar7) - uVar13 ^ uVar7 >> 5;
  uVar13 = (uVar13 - uVar7) - uVar10 ^ uVar10 >> 3;
  uVar7 = (uVar7 - uVar13) - uVar10 ^ uVar13 << 10;
  return (uVar7 ^ uVar12 ^ uVar2 ^ uVar20 ^ uVar18 ^ uVar11) >> 0xf ^ (uVar10 - uVar7) - uVar13 ^
         (uVar9 - uVar12) - uVar16 ^ (uVar17 - uVar2) - uVar6 ^ (uVar4 - uVar20) - uVar3 ^
         (uVar21 - uVar18) - uVar19 ^ (uVar8 - uVar11) - uVar14;
}



// FUNCTION 141ec9080 GetTypeHash body=447 status=ok
// SIG undefined GetTypeHash(void)

uint GetTypeHash(longlong param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  iVar1 = (int)(*(ulonglong *)(param_1 + 0x30) >> 4);
  uVar7 = 0x9e3779b9U - iVar1 ^ iVar1 << 8;
  iVar3 = (int)(*(ulonglong *)(param_1 + 0x38) >> 4);
  uVar5 = -(iVar1 + uVar7) ^ uVar7 >> 0xd;
  uVar2 = (iVar1 - uVar7) - uVar5 ^ uVar5 >> 0xc;
  uVar7 = (uVar7 - uVar2) - uVar5 ^ uVar2 << 0x10;
  uVar6 = (uVar5 - uVar7) - uVar2 ^ uVar7 >> 5;
  uVar5 = (uVar2 - uVar7) - uVar6 ^ uVar6 >> 3;
  uVar8 = (uVar7 - uVar5) - uVar6 ^ uVar5 << 10;
  uVar9 = 0x9e3779b9U - iVar3 ^ iVar3 << 8;
  uVar7 = -(uVar9 + iVar3) ^ uVar9 >> 0xd;
  uVar2 = (iVar3 - uVar9) - uVar7 ^ uVar7 >> 0xc;
  uVar10 = (uVar9 - uVar2) - uVar7 ^ uVar2 << 0x10;
  uVar4 = (uVar7 - uVar10) - uVar2 ^ uVar10 >> 5;
  uVar9 = (uVar2 - uVar10) - uVar4 ^ uVar4 >> 3;
  uVar11 = (uVar10 - uVar9) - uVar4 ^ uVar9 << 10;
  iVar1 = (int)(*(ulonglong *)(param_1 + 0x40) >> 4);
  uVar7 = 0x9e3779b9U - iVar1 ^ iVar1 << 8;
  uVar2 = -(uVar7 + iVar1) ^ uVar7 >> 0xd;
  uVar10 = (iVar1 - uVar7) - uVar2 ^ uVar2 >> 0xc;
  uVar12 = (uVar7 - uVar10) - uVar2 ^ uVar10 << 0x10;
  uVar7 = (uVar2 - uVar12) - uVar10 ^ uVar12 >> 5;
  uVar10 = (uVar10 - uVar12) - uVar7 ^ uVar7 >> 3;
  uVar12 = (uVar12 - uVar10) - uVar7 ^ uVar10 << 10;
  uVar2 = GetTypeHash(param_1);
  return ((uint)*(ushort *)(param_1 + 0xb4) << 0x1c | uVar2) ^ (uVar7 - uVar12) - uVar10 ^
         (uVar12 ^ uVar11 ^ uVar8) >> 0xf ^ (uVar4 - uVar11) - uVar9 ^ (uVar6 - uVar8) - uVar5 ^
         *(int *)(param_1 + 0x4c) << 0x18 ^ *(uint *)(param_1 + 0x50);
}



// FUNCTION 141ec9240 FUN_141ec9240 body=432 status=ok
// SIG undefined FUN_141ec9240(void)

void FUN_141ec9240(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  uVar9 = 0;
  if (0 < *(int *)(param_1 + 0x80)) {
    uVar11 = uVar9;
    do {
      lVar7 = *(longlong *)(param_1 + 0x78);
      if (*(longlong *)(param_1 + 0x78) == 0) {
        lVar7 = param_1 + 0x58;
      }
      if (*(longlong *)(lVar7 + uVar9) != 0) {
        puVar1 = (ulonglong *)(*(longlong *)(lVar7 + uVar9) + 8);
        LOCK();
        uVar6 = *puVar1;
        if (uVar6 == 0) {
          *puVar1 = 0;
          uVar6 = 0;
        }
        UNLOCK();
        if ((uVar6 >> 0x1a & 1) == 0) {
          iVar4 = DAT_1464a820c;
          if (((DAT_146ac3328 != 0x800) && (iVar4 = DAT_1464a8208, DAT_146ac3328 != 0x1000)) ||
             (uVar10 = DAT_146ac3330, iVar4 != 0)) {
            uVar10 = DAT_146ac332c | DAT_146ac3328;
          }
          *(uint *)(*param_2 + 0x4c) = uVar10 | 0x2ff;
          lVar7 = *(longlong *)(param_1 + 0x78);
          if (*(longlong *)(param_1 + 0x78) == 0) {
            lVar7 = param_1 + 0x58;
          }
          lVar7 = *(longlong *)(lVar7 + uVar9);
          if (lVar7 != 0) {
            LOCK();
            *(int *)(lVar7 + 0x48) = *(int *)(lVar7 + 0x48) + 1;
            UNLOCK();
          }
          lVar5 = *param_2;
          iVar4 = *(int *)(lVar5 + 0x40);
          *(int *)(lVar5 + 0x40) = iVar4 + 1;
          if (*(int *)(lVar5 + 0x44) < iVar4 + 1) {
            TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                      (lVar5 + 0x18,iVar4);
          }
          lVar8 = *(longlong *)(lVar5 + 0x38);
          if (*(longlong *)(lVar5 + 0x38) == 0) {
            lVar8 = lVar5 + 0x18;
          }
          plVar3 = (longlong *)(lVar8 + (longlong)iVar4 * 8);
          if (plVar3 != (longlong *)0x0) {
            *plVar3 = lVar7;
            if (lVar7 == 0) goto LAB_141ec93a4;
            LOCK();
            *(int *)(lVar7 + 0x48) = *(int *)(lVar7 + 0x48) + 1;
            UNLOCK();
          }
          if (lVar7 != 0) {
            LOCK();
            piVar2 = (int *)(lVar7 + 0x48);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              FGraphEvent::Recycle(lVar7);
            }
          }
        }
      }
LAB_141ec93a4:
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
      uVar9 = uVar9 + 8;
    } while ((int)uVar10 < *(int *)(param_1 + 0x80));
  }
  TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::Empty(param_1 + 0x58,0);
  return;
}



// FUNCTION 141ec93f0 FUN_141ec93f0 body=488 status=ok
// SIG undefined FUN_141ec93f0(void)

void FUN_141ec93f0(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  void *_Dst;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar6 + 2;
  if (*(undefined8 **)(param_1 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x18);
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 2;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar5;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar6;
  *(undefined8 **)(param_1 + 8) = puVar6 + 1;
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_144edb060;
  _Dst = (void *)FMemory::Malloc(0x1b8);
  if (_Dst == (void *)0x0) {
    _Dst = (void *)0x0;
  }
  else {
    _guard_xfg_dispatch_icall_nop(_Dst,0,0x1b8);
    FRHICommandListBase::FRHICommandListBase(_Dst,1);
  }
  FGenericPlatformMemory::MemswapGreaterThan8(_Dst,param_1,0x1b8);
  if (*(longlong *)((longlong)_Dst + 8) == param_1) {
    *(void **)((longlong)_Dst + 8) = _Dst;
  }
  if (*(void **)(param_1 + 8) == _Dst) {
    *(longlong *)(param_1 + 8) = param_1;
  }
  uVar4 = *(undefined8 *)((longlong)_Dst + 0xa0);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)((longlong)_Dst + 0x98);
  *(undefined8 *)(param_1 + 0xa0) = uVar4;
  uVar4 = *(undefined8 *)((longlong)_Dst + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)((longlong)_Dst + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = uVar4;
  uVar4 = *(undefined8 *)((longlong)_Dst + 0xc0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)((longlong)_Dst + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = uVar4;
  uVar4 = *(undefined8 *)((longlong)_Dst + 0xd0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)((longlong)_Dst + 200);
  *(undefined8 *)(param_1 + 0xd0) = uVar4;
  uVar4 = *(undefined8 *)((longlong)_Dst + 0xe0);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)((longlong)_Dst + 0xd8);
  *(undefined8 *)(param_1 + 0xe0) = uVar4;
  uVar4 = *(undefined8 *)((longlong)_Dst + 0xf0);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)((longlong)_Dst + 0xe8);
  *(undefined8 *)(param_1 + 0xf0) = uVar4;
  uVar4 = *(undefined8 *)((longlong)_Dst + 0x100);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)((longlong)_Dst + 0xf8);
  *(undefined8 *)(param_1 + 0x100) = uVar4;
  uVar4 = *(undefined8 *)((longlong)_Dst + 0x110);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)((longlong)_Dst + 0x108);
  *(undefined8 *)(param_1 + 0x110) = uVar4;
  uVar4 = *(undefined8 *)((longlong)_Dst + 0x120);
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)((longlong)_Dst + 0x118);
  *(undefined8 *)(param_1 + 0x120) = uVar4;
  uVar4 = *(undefined8 *)((longlong)_Dst + 0x130);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)((longlong)_Dst + 0x128);
  *(undefined8 *)(param_1 + 0x130) = uVar4;
  uVar4 = *(undefined8 *)((longlong)_Dst + 0x140);
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)((longlong)_Dst + 0x138);
  *(undefined8 *)(param_1 + 0x140) = uVar4;
  uVar1 = *(undefined4 *)((longlong)_Dst + 0x14c);
  uVar2 = *(undefined4 *)((longlong)_Dst + 0x150);
  uVar3 = *(undefined4 *)((longlong)_Dst + 0x154);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)((longlong)_Dst + 0x148);
  *(undefined4 *)(param_1 + 0x14c) = uVar1;
  *(undefined4 *)(param_1 + 0x150) = uVar2;
  *(undefined4 *)(param_1 + 0x154) = uVar3;
  uVar1 = *(undefined4 *)((longlong)_Dst + 0x15c);
  uVar2 = *(undefined4 *)((longlong)_Dst + 0x160);
  uVar3 = *(undefined4 *)((longlong)_Dst + 0x164);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)((longlong)_Dst + 0x158);
  *(undefined4 *)(param_1 + 0x15c) = uVar1;
  *(undefined4 *)(param_1 + 0x160) = uVar2;
  *(undefined4 *)(param_1 + 0x164) = uVar3;
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)((longlong)_Dst + 0x168);
  puVar6 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
  puVar5 = puVar6 + 3;
  if (DAT_146ab6eb0 < puVar5) {
    FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x20);
    puVar6 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 3;
  }
  DAT_146ab6e8c = DAT_146ab6e8c + 1;
  DAT_146ab6ea8 = puVar5;
  *DAT_146ab6e80 = puVar6;
  DAT_146ab6e80 = puVar6 + 1;
  *DAT_146ab6e80 = 0;
  *puVar6 = &PTR_FUN_144edb3d0;
  puVar6[2] = _Dst;
  if (DAT_146ab6e8c != 0) {
    FUN_141ec3e80(&DAT_146ab6e68,&DAT_146ab6e78);
  }
  return;
}



// FUNCTION 141ec95e0 FUN_141ec95e0 body=852 status=ok
// SIG undefined FUN_141ec95e0(void)

byte FUN_141ec95e0(undefined4 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined1 local_res8 [8];
  undefined1 local_28;
  undefined1 local_27;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 local_1b;
  
  param_1[0x91] = 0;
  *param_1 = 1;
  _guard_xfg_dispatch_icall_nop(param_1 + 6,0,0x22c);
  bVar5 = (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,param_1 + 0x1f);
  local_res8[0] = 0;
  AlgoImpl::
  IntroSortInternal<FVertexElement,FIdentityFunctor,TDereferenceWrapper<FVertexElement,<lambda_0f5dc6ea2be2fbf8df3145a0396f366f>_>_>
            (param_1 + 0x1f,(longlong)(int)param_1[0x5f],0,local_res8);
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    uVar2 = *(undefined4 *)(lVar1 + 0x1c);
    uVar3 = *(undefined4 *)(lVar1 + 0x20);
    uVar4 = *(undefined4 *)(lVar1 + 0x24);
    param_1[6] = *(undefined4 *)(lVar1 + 0x18);
    param_1[7] = uVar2;
    param_1[8] = uVar3;
    param_1[9] = uVar4;
    param_1[10] = *(undefined4 *)(lVar1 + 0x28);
  }
  lVar1 = param_2[2];
  if (lVar1 != 0) {
    uVar2 = *(undefined4 *)(lVar1 + 0x1c);
    uVar3 = *(undefined4 *)(lVar1 + 0x20);
    uVar4 = *(undefined4 *)(lVar1 + 0x24);
    param_1[0x15] = *(undefined4 *)(lVar1 + 0x18);
    param_1[0x16] = uVar2;
    param_1[0x17] = uVar3;
    param_1[0x18] = uVar4;
    param_1[0x19] = *(undefined4 *)(lVar1 + 0x28);
  }
  lVar1 = param_2[3];
  if (lVar1 != 0) {
    uVar2 = *(undefined4 *)(lVar1 + 0x1c);
    uVar3 = *(undefined4 *)(lVar1 + 0x20);
    uVar4 = *(undefined4 *)(lVar1 + 0x24);
    param_1[0x1a] = *(undefined4 *)(lVar1 + 0x18);
    param_1[0x1b] = uVar2;
    param_1[0x1c] = uVar3;
    param_1[0x1d] = uVar4;
    param_1[0x1e] = *(undefined4 *)(lVar1 + 0x28);
  }
  lVar1 = param_2[4];
  if (lVar1 != 0) {
    uVar2 = *(undefined4 *)(lVar1 + 0x1c);
    uVar3 = *(undefined4 *)(lVar1 + 0x20);
    uVar4 = *(undefined4 *)(lVar1 + 0x24);
    param_1[0xb] = *(undefined4 *)(lVar1 + 0x18);
    param_1[0xc] = uVar2;
    param_1[0xd] = uVar3;
    param_1[0xe] = uVar4;
    param_1[0xf] = *(undefined4 *)(lVar1 + 0x28);
  }
  lVar1 = param_2[5];
  if (lVar1 != 0) {
    uVar2 = *(undefined4 *)(lVar1 + 0x1c);
    uVar3 = *(undefined4 *)(lVar1 + 0x20);
    uVar4 = *(undefined4 *)(lVar1 + 0x24);
    param_1[0x10] = *(undefined4 *)(lVar1 + 0x18);
    param_1[0x11] = uVar2;
    param_1[0x12] = uVar3;
    param_1[0x13] = uVar4;
    param_1[0x14] = *(undefined4 *)(lVar1 + 0x28);
  }
  bVar6 = (**(code **)(*(longlong *)param_2[6] + 8))((longlong *)param_2[6],param_1 + 0x61);
  bVar7 = (**(code **)(*(longlong *)param_2[7] + 8))((longlong *)param_2[7],&local_28);
  param_1[0x70] = local_24;
  param_1[0x71] = local_20;
  *(undefined1 *)(param_1 + 0x72) = local_28;
  *(undefined1 *)((longlong)param_1 + 0x1c9) = local_27;
  *(undefined1 *)((longlong)param_1 + 0x1ca) = local_1c;
  *(undefined1 *)((longlong)param_1 + 0x1cb) = local_1b;
  bVar8 = (**(code **)(*(longlong *)param_2[8] + 8))((longlong *)param_2[8],param_1 + 0x73);
  param_1[0x77] = *(undefined4 *)((longlong)param_2 + 0x54);
  param_1[0x7f] = *(undefined4 *)((longlong)param_2 + 0x74);
  *(undefined1 *)(param_1 + 0x87) = *(undefined1 *)((longlong)param_2 + 0x94);
  *(undefined1 *)(param_1 + 0x89) = *(undefined1 *)((longlong)param_2 + 0x9c);
  param_1[0x78] = *(undefined4 *)(param_2 + 0xb);
  param_1[0x80] = *(undefined4 *)(param_2 + 0xf);
  *(undefined1 *)((longlong)param_1 + 0x21d) = *(undefined1 *)((longlong)param_2 + 0x95);
  *(undefined1 *)((longlong)param_1 + 0x225) = *(undefined1 *)((longlong)param_2 + 0x9d);
  param_1[0x79] = *(undefined4 *)((longlong)param_2 + 0x5c);
  param_1[0x81] = *(undefined4 *)((longlong)param_2 + 0x7c);
  *(undefined1 *)((longlong)param_1 + 0x21e) = *(undefined1 *)((longlong)param_2 + 0x96);
  *(undefined1 *)((longlong)param_1 + 0x226) = *(undefined1 *)((longlong)param_2 + 0x9e);
  param_1[0x7a] = *(undefined4 *)(param_2 + 0xc);
  param_1[0x82] = *(undefined4 *)(param_2 + 0x10);
  *(undefined1 *)((longlong)param_1 + 0x21f) = *(undefined1 *)((longlong)param_2 + 0x97);
  *(undefined1 *)((longlong)param_1 + 0x227) = *(undefined1 *)((longlong)param_2 + 0x9f);
  param_1[0x7b] = *(undefined4 *)((longlong)param_2 + 100);
  param_1[0x83] = *(undefined4 *)((longlong)param_2 + 0x84);
  *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(param_2 + 0x13);
  *(undefined1 *)(param_1 + 0x8a) = *(undefined1 *)(param_2 + 0x14);
  param_1[0x7c] = *(undefined4 *)(param_2 + 0xd);
  param_1[0x84] = *(undefined4 *)(param_2 + 0x11);
  *(undefined1 *)((longlong)param_1 + 0x221) = *(undefined1 *)((longlong)param_2 + 0x99);
  *(undefined1 *)((longlong)param_1 + 0x229) = *(undefined1 *)((longlong)param_2 + 0xa1);
  param_1[0x7d] = *(undefined4 *)((longlong)param_2 + 0x6c);
  param_1[0x85] = *(undefined4 *)((longlong)param_2 + 0x8c);
  *(undefined1 *)((longlong)param_1 + 0x222) = *(undefined1 *)((longlong)param_2 + 0x9a);
  *(undefined1 *)((longlong)param_1 + 0x22a) = *(undefined1 *)((longlong)param_2 + 0xa2);
  param_1[0x7e] = *(undefined4 *)(param_2 + 0xe);
  param_1[0x86] = *(undefined4 *)(param_2 + 0x12);
  *(undefined1 *)((longlong)param_1 + 0x223) = *(undefined1 *)((longlong)param_2 + 0x9b);
  *(undefined1 *)((longlong)param_1 + 0x22b) = *(undefined1 *)((longlong)param_2 + 0xa3);
  param_1[0x8b] = *(undefined4 *)(param_2 + 10);
  param_1[0x8c] = (uint)*(ushort *)((longlong)param_2 + 0xb4);
  param_1[0x8d] = *(undefined4 *)((longlong)param_2 + 0xa4);
  param_1[0x8e] = *(undefined4 *)(param_2 + 0x15);
  *(undefined1 *)(param_1 + 0x8f) = *(undefined1 *)((longlong)param_2 + 0xac);
  *(undefined1 *)((longlong)param_1 + 0x23d) = *(undefined1 *)((longlong)param_2 + 0xae);
  *(undefined1 *)((longlong)param_1 + 0x23e) = *(undefined1 *)((longlong)param_2 + 0xad);
  *(undefined1 *)((longlong)param_1 + 0x23f) = *(undefined1 *)((longlong)param_2 + 0xaf);
  param_1[0x90] = *(undefined4 *)((longlong)param_2 + 0x4c);
  return bVar5 & 1 & bVar6 & bVar7 & bVar8;
}



// FUNCTION 141ec9940 FUN_141ec9940 body=244 status=ok
// SIG undefined FUN_141ec9940(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_141ec9940(longlong param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  if (*(int *)(param_1 + 0x20) < 2) {
    uVar4 = 0;
    if (DAT_146ab638a != '\0') {
      uVar5 = uVar4;
      uVar1 = uVar4;
      if (0 < *(int *)(param_1 + 0x90)) {
        do {
          iVar6 = (int)uVar1;
          if (DAT_1464c9c3c <= (int)uVar1) {
            uVar5 = uVar4;
            iVar6 = 0;
          }
          lVar3 = *(longlong *)(param_1 + 0x88);
          lVar7 = uVar5 * 0x10;
          lVar8 = (longlong)*(int *)(lVar7 + 8 + lVar3);
          uVar1 = uVar4;
          if (0 < lVar8) {
            do {
              *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x88) + lVar7) + uVar1 * 8) = 0;
              uVar1 = uVar1 + 1;
            } while ((longlong)uVar1 < lVar8);
            lVar3 = *(longlong *)(param_1 + 0x88);
          }
          lVar3 = lVar3 + lVar7;
          *(undefined4 *)(lVar3 + 8) = 0;
          if (*(int *)(lVar3 + 0xc) != 0) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(lVar3,0);
          }
          uVar5 = uVar5 + 1;
          uVar1 = (ulonglong)(iVar6 + 1U);
        } while ((int)(iVar6 + 1U) < *(int *)(param_1 + 0x90));
      }
      DAT_146ab638a = '\0';
    }
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
    iVar6 = *(int *)(param_1 + 0xb8);
    *(undefined4 *)(param_1 + 0xbc) = 0;
    iVar2 = iVar6;
    if (DAT_1464c9c3c <= iVar6) {
      iVar2 = 0;
    }
    *(int *)(param_1 + 0xb8) = iVar2;
    _DAT_146ab633c = 0;
    return CONCAT71((uint7)(uint3)((uint)iVar6 >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141ec9a40 Initialize body=45 status=ok
// SIG undefined Initialize(void)

void FPipelineFileCache::Initialize(int param_1)

{
  undefined8 uVar1;
  
  DAT_146ab633b = 1;
  DAT_146ab6384 = param_1;
  if (param_1 == 0) {
    uVar1 = FEngineVersion::Current();
    DAT_146ab6384 = FEngineVersionBase::GetChangelist(uVar1);
  }
  return;
}



// FUNCTION 141ec9a70 InternalFindWhileLocked body=474 status=ok
// SIG undefined InternalFindWhileLocked(void)

bool TDiscardableKeyValueCache<FRHIComputeShader_*,FComputePipelineState_*>::InternalFindWhileLocked
               (longlong param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4,
               uint *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int local_res20 [2];
  undefined8 *local_48;
  undefined8 *local_40;
  
  uVar2 = *param_2;
  plVar7 = *(longlong **)(param_1 + 8);
  uVar4 = (uint)param_4;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(plVar7,local_res20);
  puVar5 = (undefined8 *)0x0;
  if (local_res20[0] != -1) {
    puVar5 = (undefined8 *)(*plVar7 + (longlong)local_res20[0] * 0x18);
  }
  puVar6 = puVar5 + 1;
  if (puVar5 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  if (puVar6 == (undefined8 *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x10);
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(plVar3,local_res20,uVar2);
    puVar9 = (undefined8 *)0x0;
    puVar5 = puVar9;
    if (local_res20[0] != -1) {
      puVar5 = (undefined8 *)(*plVar3 + (longlong)local_res20[0] * 0x18);
    }
    puVar8 = puVar5 + 1;
    if (puVar5 == (undefined8 *)0x0) {
      puVar8 = puVar9;
    }
    if ((puVar8 != (undefined8 *)0x0) || (puVar5 = (undefined8 *)0x0, (param_4 >> 2 & 1) != 0)) {
      uVar4 = ApplyLock(param_1,param_4 & 0xffffffff,uVar4 | 2);
      plVar7 = *(longlong **)(param_1 + 8);
      uVar2 = *param_2;
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(plVar7,local_res20,uVar2);
      puVar5 = puVar9;
      if (local_res20[0] != -1) {
        puVar5 = (undefined8 *)(*plVar7 + (longlong)local_res20[0] * 0x18);
      }
      puVar6 = puVar5 + 1;
      if (puVar5 == (undefined8 *)0x0) {
        puVar6 = puVar9;
      }
      if (puVar6 != (undefined8 *)0x0) goto LAB_141ec9c16;
      plVar3 = *(longlong **)(param_1 + 0x10);
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(plVar3,local_res20,uVar2);
      puVar5 = puVar9;
      if ((local_res20[0] != -1) && (lVar1 = *plVar3 + (longlong)local_res20[0] * 0x18, lVar1 != 0))
      {
        puVar5 = (undefined8 *)(lVar1 + 8);
      }
    }
    if (puVar6 == (undefined8 *)0x0) {
      if (puVar5 == (undefined8 *)0x0) goto LAB_141ec9c24;
      local_48 = param_2;
      local_40 = puVar5;
      FUN_140a9d130(plVar7,local_res20,&local_48,0);
      TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
      ::Remove(*(undefined8 *)(param_1 + 0x10),*param_2);
      puVar6 = puVar5;
      if (puVar5 == (undefined8 *)0x0) goto LAB_141ec9c24;
    }
  }
LAB_141ec9c16:
  *param_3 = *puVar6;
LAB_141ec9c24:
  *param_5 = uVar4;
  return puVar6 != (undefined8 *)0x0;
}



// FUNCTION 141ec9c50 FUN_141ec9c50 body=96 status=ok
// SIG undefined FUN_141ec9c50(void)

undefined8 FUN_141ec9c50(void)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  
  lVar1 = DAT_146ab66e0;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      lVar4 = 4;
      goto LAB_141ec9c91;
    }
  }
  lVar4 = 0;
LAB_141ec9c91:
  if ((*(int *)(lVar4 + lVar1) != 0) && (DAT_146ab6383 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 141ec9cb0 IsLatestBlacklisted body=516 status=ok
// SIG undefined IsLatestBlacklisted(void)

byte FGPUHardware::IsLatestBlacklisted(int *param_1)

{
  int iVar1;
  longlong *plVar2;
  byte bVar3;
  short sVar4;
  wchar_t *pwVar5;
  undefined2 *puVar6;
  wchar_t *pwVar7;
  byte bVar8;
  longlong *local_48;
  undefined8 local_40;
  short *local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  iVar1 = *param_1;
  bVar8 = 0;
  if (((iVar1 == 0x10de) || (iVar1 == 0x1002)) || (iVar1 == 0x8086)) {
    pwVar7 = (wchar_t *)0x0;
    local_48 = (longlong *)0x0;
    local_40 = 0;
    if (iVar1 == 0x10de) {
      pwVar5 = L"GPU_NVIDIA";
    }
    else if (iVar1 == 0x1002) {
      pwVar5 = L"GPU_AMD";
    }
    else {
      pwVar5 = L"GPU_0x8086";
      if (iVar1 != 0x8086) {
        pwVar5 = pwVar7;
      }
    }
    FConfigCacheIni::GetArray(DAT_1468b6148,pwVar5,L"Blacklist",&local_48,&DAT_1468e23f0);
    pwVar5 = pwVar7;
    do {
      iVar1 = (int)local_40;
      plVar2 = local_48;
      if ((int)local_40 <= (int)pwVar7) goto joined_r0x000141ec9e48;
      local_38 = (short *)0x0;
      local_30 = 0;
      local_28 = 0;
      local_20 = 0;
      if (*(int *)((longlong)(pwVar5 + 4) + (longlong)local_48) == 0) {
        puVar6 = &DAT_143f3eda8;
      }
      else {
        puVar6 = *(undefined2 **)((longlong)pwVar5 + (longlong)local_48);
      }
      FParse::Value(puVar6 + 1,L"DriverVersion=",&local_38,1);
      FParse::Value(puVar6 + 1,L"Reason=",&local_28,1);
      bVar3 = 0;
      if (1 < (int)local_30) {
        if ((int)local_30 == 0) {
          sVar4 = 0;
LAB_141ec9e99:
          if (sVar4 != 0x21) {
LAB_141ec9ea3:
            if (sVar4 == 0x3e) {
              bVar3 = 1;
              goto LAB_141ec9df8;
            }
          }
        }
        else {
          sVar4 = *local_38;
          if (sVar4 != 0x3d) goto LAB_141ec9e99;
          if (local_38[1] != 0x3d) goto LAB_141ec9ea3;
        }
        bVar3 = 0;
      }
LAB_141ec9df8:
      bVar8 = bVar8 | bVar3;
      if (local_28 != 0) {
        FMemory::Free(local_28);
      }
      if (local_38 != (short *)0x0) {
        FMemory::Free();
      }
      pwVar7 = (wchar_t *)(ulonglong)((int)pwVar7 + 1);
      pwVar5 = pwVar5 + 8;
    } while (bVar8 == 0);
    iVar1 = (int)local_40;
    plVar2 = local_48;
joined_r0x000141ec9e48:
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  return bVar8;
}



// FUNCTION 141ec9ec0 IsPSOEntryCached body=158 status=ok
// SIG undefined IsPSOEntryCached(void)

undefined8 FPipelineCacheFile::IsPSOEntryCached(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  
  iVar1 = FUN_141ec8950(param_2);
  if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
    lVar3 = *(longlong *)(param_1 + 200);
    if (*(longlong *)(param_1 + 200) == 0) {
      lVar3 = param_1 + 0xc0;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)*(int *)(param_1 + 0xd0) - 1U & (longlong)iVar1) * 4);
    if (iVar2 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar2 * 0xa8 + *(longlong *)(param_1 + 0x88));
        if (*piVar5 == iVar1) {
          if (iVar2 != -1) goto LAB_141ec9f47;
          break;
        }
        iVar2 = piVar5[0x28];
      } while (iVar2 != -1);
    }
  }
  piVar5 = (int *)0x0;
LAB_141ec9f47:
  piVar4 = piVar5 + 2;
  if (piVar5 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  return CONCAT71((int7)((ulonglong)piVar4 >> 8),piVar4 != (int *)0x0);
}



// FUNCTION 141ec9f60 FUN_141ec9f60 body=157 status=ok
// SIG undefined FUN_141ec9f60(void)

undefined8 FUN_141ec9f60(void)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (DAT_146ac3a54 == '\0') {
    DAT_146ac3a54 = '\x01';
    uVar4 = FCommandLine::Get();
    DAT_146ac3a55 = FParse::Param(uVar4,L"psocache");
  }
  lVar1 = DAT_146ab6650;
  if (DAT_146ab633b == '\0') {
    return 0;
  }
  if (DAT_146ac3a55 == '\0') {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
      lVar5 = 4;
    }
    else {
      lVar5 = 0;
    }
    if (*(int *)(lVar5 + lVar1) != 1) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 141eca000 IsRHIDeviceIntel body=14 status=ok
// SIG undefined IsRHIDeviceIntel(void)

bool IsRHIDeviceIntel(void)

{
  return DAT_146ab62d8 == 0x1002;
}



// FUNCTION 141eca010 IsRHIDeviceIntel body=14 status=ok
// SIG undefined IsRHIDeviceIntel(void)

bool IsRHIDeviceIntel(void)

{
  return DAT_146ab62d8 == 0x8086;
}



// FUNCTION 141eca020 IsRHIDeviceIntel body=14 status=ok
// SIG undefined IsRHIDeviceIntel(void)

bool IsRHIDeviceIntel(void)

{
  return DAT_146ab62d8 == 0x10de;
}



// FUNCTION 141eca030 IsRHIThreadActive body=232 status=ok
// SIG undefined IsRHIThreadActive(void)

bool FRHICommandListExecutor::IsRHIThreadActive(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if ((0 < *(int *)(DAT_146ab6d88 + 4)) && (DAT_146ab7258 != 0)) {
    LOCK();
    uVar4 = *(ulonglong *)(DAT_146ab7258 + 8);
    if (uVar4 == 0) {
      *(ulonglong *)(DAT_146ab7258 + 8) = 0;
      uVar4 = 0;
    }
    lVar3 = DAT_146ab7258;
    UNLOCK();
    if ((uVar4 >> 0x1a & 1) != 0) {
      DAT_146ab7258 = 0;
      if (lVar3 == 0) goto LAB_141eca0a1;
      LOCK();
      piVar1 = (int *)(lVar3 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle();
      }
    }
    if (DAT_146ab7258 != 0) {
      return true;
    }
  }
LAB_141eca0a1:
  if (DAT_146ab7248 != 0) {
    LOCK();
    uVar4 = *(ulonglong *)(DAT_146ab7248 + 8);
    if (uVar4 == 0) {
      *(ulonglong *)(DAT_146ab7248 + 8) = 0;
      uVar4 = 0;
    }
    lVar3 = DAT_146ab7248;
    UNLOCK();
    if ((uVar4 >> 0x1a & 1) != 0) {
      DAT_146ab7248 = 0;
      if (lVar3 != 0) {
        LOCK();
        piVar1 = (int *)(lVar3 + 0x48);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle();
        }
      }
      lVar3 = DAT_146ab7250;
      DAT_146ab7250 = 0;
      if (lVar3 != 0) {
        LOCK();
        piVar1 = (int *)(lVar3 + 0x48);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle();
        }
      }
    }
  }
  return DAT_146ab7248 != 0;
}



// FUNCTION 141eca120 LatchBypass body=56 status=ok
// SIG undefined LatchBypass(void)

void FRHICommandListExecutor::LatchBypass(char *param_1)

{
  char cVar1;
  
  if ((*param_1 == '\0') && ((DAT_1464c9c18 != '\0' || (DAT_146ab6383 == '\0')))) {
    cVar1 = FUN_141636a40();
    param_1[1] = cVar1;
    return;
  }
  param_1[1] = '\0';
  return;
}



// FUNCTION 141eca160 FUN_141eca160 body=985 status=ok
// SIG undefined FUN_141eca160(void)

undefined8 * FUN_141eca160(undefined8 *param_1,undefined4 param_2)

{
  char cVar1;
  DWORD DVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  switch(param_2) {
  default:
    *param_1 = DAT_146ab6b60;
    return param_1;
  case 1:
    *param_1 = DAT_146ab6b80;
    return param_1;
  case 2:
    *param_1 = DAT_146ab6b88;
    return param_1;
  case 3:
    break;
  case 4:
    *param_1 = DAT_146ab6ba0;
    return param_1;
  case 5:
    *param_1 = DAT_146ab6b68;
    return param_1;
  case 6:
    *param_1 = DAT_146ab6ba8;
    return param_1;
  case 7:
    *param_1 = DAT_146ab6b78;
    return param_1;
  case 8:
    *param_1 = DAT_146ab6bc8;
    return param_1;
  case 9:
    *param_1 = DAT_146ab6bd0;
    return param_1;
  case 10:
    *param_1 = DAT_146ab6bd8;
    return param_1;
  case 0xb:
    *param_1 = DAT_146ab6be0;
    return param_1;
  case 0xc:
    *param_1 = DAT_146ab6be8;
    return param_1;
  case 0xd:
    *param_1 = DAT_146ab6bf8;
    return param_1;
  case 0xe:
    *param_1 = DAT_146ab6b70;
    return param_1;
  case 0xf:
    *param_1 = DAT_146ab6bc0;
    return param_1;
  case 0x10:
    *param_1 = DAT_146ab6c08;
    return param_1;
  case 0x11:
    iVar3 = (**(code **)(*DAT_146ab6818 + 0x68))();
    uVar4 = DAT_146ab6c30;
    if (iVar3 != 0) {
      uVar4 = DAT_146ab6c28;
    }
    *param_1 = uVar4;
    return param_1;
  case 0x12:
    *param_1 = DAT_146ab6c60;
    return param_1;
  case 0x13:
    iVar3 = (**(code **)(*DAT_146ab6818 + 0x68))();
    uVar4 = DAT_146ab6c38;
    if (iVar3 != 0) {
      uVar4 = DAT_146ab6c40;
    }
    *param_1 = uVar4;
    return param_1;
  case 0x14:
    iVar3 = (**(code **)(*DAT_146ab6818 + 0x68))();
    uVar4 = DAT_146ab6c48;
    if (iVar3 != 0) {
      uVar4 = DAT_146ab6c50;
    }
    *param_1 = uVar4;
    return param_1;
  case 0x15:
    iVar3 = (**(code **)(*DAT_146ab6818 + 0x68))();
    uVar4 = DAT_146ab6c18;
    if (iVar3 != 0) {
      uVar4 = DAT_146ab6c10;
    }
    *param_1 = uVar4;
    return param_1;
  case 0x16:
    *param_1 = DAT_146ab6c68;
    return param_1;
  case 0x17:
    *param_1 = DAT_146ab6c70;
    return param_1;
  case 0x18:
    *param_1 = DAT_146ab6c00;
    return param_1;
  case 0x19:
    *param_1 = DAT_146ab6c78;
    return param_1;
  case 0x1a:
    *param_1 = DAT_146ab6c80;
    return param_1;
  case 0x1b:
    *param_1 = DAT_146ab6bf0;
    return param_1;
  case 0x1c:
    *param_1 = DAT_146ab6c58;
    return param_1;
  case 0x1d:
    *param_1 = DAT_146ab6c20;
    return param_1;
  case 0x1e:
    *param_1 = DAT_146ab6b90;
    return param_1;
  case 0x1f:
    *param_1 = DAT_146ab6b98;
    return param_1;
  }
  lVar7 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ac3a78) && (_Init_thread_header(&DAT_146ac3a78), DAT_146ac3a78 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"OpenGL.UseEmulatedUBs");
    lVar6 = lVar7;
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_146ac3a70 = lVar6;
    _Init_thread_footer(&DAT_146ac3a78);
  }
  lVar6 = DAT_146ac3a70;
  if (DAT_146ac3a70 != 0) {
    cVar1 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar1 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar2 = GetCurrentThreadId(), DVar2 != DAT_1468c21c0)) {
      lVar7 = 4;
    }
    uVar4 = DAT_146ab6bb8;
    if (*(int *)(lVar7 + lVar6) != 0) goto LAB_141eca2b9;
  }
  uVar4 = DAT_146ab6bb0;
LAB_141eca2b9:
  *param_1 = uVar4;
  return param_1;
}



// FUNCTION 141eca5c0 LockIndexBuffer_RenderThread body=324 status=ok
// SIG undefined LockIndexBuffer_RenderThread(void)

undefined8
FDynamicRHI::LockIndexBuffer_RenderThread
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,int param_5,
          int param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  longlong lVar4;
  undefined4 uStack_c;
  
  if (((*(int *)(DAT_146ab6d70 + 4) < 1) || (param_6 != 1)) || (DAT_146ab6383 == '\0')) {
    if (*(int *)(param_2 + 0x14) != 0) {
      FUN_141ec3e80(&DAT_146ab6e68);
    }
    FUN_141ed93a0(param_2);
    if (DAT_146ab6383 != '\0') {
      FRHICommandListBase::WaitForRHIThreadTasks(param_2);
    }
    FRHICommandListBase::WaitForTasks(param_2,1);
    uVar2 = (**(code **)(*DAT_146ab6358 + 0x120))(DAT_146ab6358,param_3,param_4,param_5,param_6);
  }
  else {
    uVar2 = FMemory::Malloc(param_5,0x10);
  }
  iVar1 = DAT_146ac35a0;
  lVar4 = (longlong)DAT_146ac35a0;
  DAT_146ac35a0 = DAT_146ac35a0 + 1;
  if (DAT_146ac35a4 < DAT_146ac35a0) {
    TArray<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams,TInlineAllocator<16,FDefaultAllocator>_>
    ::ResizeGrow(&DAT_146ac3398,iVar1);
  }
  puVar3 = DAT_146ac3598;
  if (DAT_146ac3598 == (undefined *)0x0) {
    puVar3 = &DAT_146ac3398;
  }
  *(undefined8 *)(puVar3 + lVar4 * 0x20) = param_3;
  *(undefined8 *)((longlong)(puVar3 + lVar4 * 0x20) + 8) = uVar2;
  *(ulonglong *)(puVar3 + lVar4 * 0x20 + 0x10) = CONCAT44(param_4,param_5);
  *(ulonglong *)((longlong)(puVar3 + lVar4 * 0x20 + 0x10) + 8) = CONCAT44(uStack_c,param_6);
  DAT_146ac35a8 = DAT_146ac35a8 + param_5;
  return uVar2;
}



// FUNCTION 141eca710 FUN_141eca710 body=325 status=ok
// SIG undefined FUN_141eca710(void)

undefined8
FUN_141eca710(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,int param_5,
             int param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  longlong lVar4;
  undefined4 uStack_c;
  
  if (((*(int *)(DAT_146ab6d70 + 4) < 1) || (param_6 != 1)) || (DAT_1468b5000 == 0)) {
    if (*(int *)(param_2 + 0x14) != 0) {
      FUN_141ec3e80(&DAT_146ab6e68);
    }
    FUN_141ed93a0(param_2);
    if (DAT_146ab6383 != '\0') {
      FRHICommandListBase::WaitForRHIThreadTasks(param_2);
    }
    FRHICommandListBase::WaitForTasks(param_2,1);
    uVar2 = (**(code **)(*DAT_146ab6358 + 0x158))(DAT_146ab6358,param_3,param_4,param_5,param_6);
  }
  else {
    uVar2 = FMemory::Malloc(param_5,0x10);
  }
  iVar1 = DAT_146ac35a0;
  lVar4 = (longlong)DAT_146ac35a0;
  DAT_146ac35a0 = DAT_146ac35a0 + 1;
  if (DAT_146ac35a4 < DAT_146ac35a0) {
    TArray<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams,TInlineAllocator<16,FDefaultAllocator>_>
    ::ResizeGrow(&DAT_146ac3398,iVar1);
  }
  puVar3 = DAT_146ac3598;
  if (DAT_146ac3598 == (undefined *)0x0) {
    puVar3 = &DAT_146ac3398;
  }
  *(undefined8 *)(puVar3 + lVar4 * 0x20) = param_3;
  *(undefined8 *)((longlong)(puVar3 + lVar4 * 0x20) + 8) = uVar2;
  *(ulonglong *)(puVar3 + lVar4 * 0x20 + 0x10) = CONCAT44(param_4,param_5);
  *(ulonglong *)((longlong)(puVar3 + lVar4 * 0x20 + 0x10) + 8) = CONCAT44(uStack_c,param_6);
  DAT_146ac35a8 = DAT_146ac35a8 + param_5;
  return uVar2;
}



// FUNCTION 141eca860 FUN_141eca860 body=310 status=ok
// SIG undefined FUN_141eca860(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_141eca860(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8,
             char param_9)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_9 != '\0') {
    if (*(int *)(param_2 + 0x14) != 0) {
      FUN_141ec3e80(&DAT_146ab6e68);
    }
    FUN_141ed93a0(param_2);
    if (DAT_146ab6383 != '\0') {
      FRHICommandListBase::WaitForRHIThreadTasks(param_2);
    }
    FRHICommandListBase::WaitForTasks(param_2,1);
    uVar2 = (**(code **)(*DAT_146ab6358 + 0x2a8))
                      (DAT_146ab6358,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  lVar3 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_2);
    if (cVar1 != '\0') {
      lVar3 = param_2;
    }
  }
  uVar2 = (**(code **)(*DAT_146ab6358 + 0x2a8))
                    (DAT_146ab6358,param_3,param_4,param_5,param_6,param_7,param_8);
  if (lVar3 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return uVar2;
}



// FUNCTION 141eca9a0 FUN_141eca9a0 body=275 status=ok
// SIG undefined FUN_141eca9a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_141eca9a0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,undefined1 param_7,char param_8)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_8 != '\0') {
    if (*(int *)(param_2 + 0x14) != 0) {
      FUN_141ec3e80(&DAT_146ab6e68);
    }
    FUN_141ed93a0(param_2);
    if (DAT_146ab6383 != '\0') {
      FRHICommandListBase::WaitForRHIThreadTasks(param_2);
    }
    FRHICommandListBase::WaitForTasks(param_2,1);
    uVar2 = (**(code **)(*DAT_146ab6358 + 0x298))
                      (DAT_146ab6358,param_3,param_4,param_5,param_6,param_7);
    return uVar2;
  }
  lVar3 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_2);
    if (cVar1 != '\0') {
      lVar3 = param_2;
    }
  }
  uVar2 = (**(code **)(*DAT_146ab6358 + 0x298))
                    (DAT_146ab6358,param_3,param_4,param_5,param_6,param_7);
  if (lVar3 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return uVar2;
}



// FUNCTION 141ecaac0 LockVertexBuffer_RenderThread body=324 status=ok
// SIG undefined LockVertexBuffer_RenderThread(void)

undefined8
FDynamicRHI::LockVertexBuffer_RenderThread
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,int param_5,
          int param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  longlong lVar4;
  undefined4 uStack_c;
  
  if (((*(int *)(DAT_146ab6d70 + 4) < 1) || (param_6 != 1)) || (DAT_146ab6383 == '\0')) {
    if (*(int *)(param_2 + 0x14) != 0) {
      FUN_141ec3e80(&DAT_146ab6e68);
    }
    FUN_141ed93a0(param_2);
    if (DAT_146ab6383 != '\0') {
      FRHICommandListBase::WaitForRHIThreadTasks(param_2);
    }
    FRHICommandListBase::WaitForTasks(param_2,1);
    uVar2 = (**(code **)(*DAT_146ab6358 + 0x138))(DAT_146ab6358,param_3,param_4,param_5,param_6);
  }
  else {
    uVar2 = FMemory::Malloc(param_5,0x10);
  }
  iVar1 = DAT_146ac35a0;
  lVar4 = (longlong)DAT_146ac35a0;
  DAT_146ac35a0 = DAT_146ac35a0 + 1;
  if (DAT_146ac35a4 < DAT_146ac35a0) {
    TArray<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams,TInlineAllocator<16,FDefaultAllocator>_>
    ::ResizeGrow(&DAT_146ac3398,iVar1);
  }
  puVar3 = DAT_146ac3598;
  if (DAT_146ac3598 == (undefined *)0x0) {
    puVar3 = &DAT_146ac3398;
  }
  *(undefined8 *)(puVar3 + lVar4 * 0x20) = param_3;
  *(undefined8 *)((longlong)(puVar3 + lVar4 * 0x20) + 8) = uVar2;
  *(ulonglong *)(puVar3 + lVar4 * 0x20 + 0x10) = CONCAT44(param_4,param_5);
  *(ulonglong *)((longlong)(puVar3 + lVar4 * 0x20 + 0x10) + 8) = CONCAT44(uStack_c,param_6);
  DAT_146ac35a8 = DAT_146ac35a8 + param_5;
  return uVar2;
}



// FUNCTION 141ecac10 FUN_141ecac10 body=148 status=ok
// SIG undefined FUN_141ecac10(void)

undefined8 FUN_141ecac10(void)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (DAT_146ac3a56 == '\0') {
    DAT_146ac3a56 = '\x01';
    uVar4 = FCommandLine::Get();
    DAT_146ac3a57 = FParse::Param(uVar4,L"logpso");
  }
  lVar1 = DAT_146ab6668;
  if (DAT_146ac3a57 == '\0') {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
      lVar5 = 4;
    }
    else {
      lVar5 = 0;
    }
    if (*(int *)(lVar5 + lVar1) != 1) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 141ecacb0 MaybeDispatchToRHIThreadInner body=59 status=ok
// SIG undefined MaybeDispatchToRHIThreadInner(void)

void FRHICommandListBase::MaybeDispatchToRHIThreadInner(void)

{
  ulonglong uVar1;
  
  if (DAT_146ab7250 != 0) {
    LOCK();
    uVar1 = *(ulonglong *)(DAT_146ab7250 + 8);
    if (uVar1 == 0) {
      *(ulonglong *)(DAT_146ab7250 + 8) = 0;
      uVar1 = 0;
    }
    UNLOCK();
    if ((uVar1 >> 0x1a & 1) == 0) {
      return;
    }
  }
  if (DAT_146ab6e8c == 0) {
    return;
  }
  FUN_141ec3e80(&DAT_146ab6e68,&DAT_146ab6e78);
  return;
}



// FUNCTION 141ecacf0 FUN_141ecacf0 body=645 status=ok
// SIG undefined FUN_141ecacf0(void)

int FUN_141ecacf0(char param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_60;
  uint uStack_5c;
  undefined *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  iVar7 = 0;
  cVar2 = FUN_141ec9f60();
  iVar4 = iVar7;
  if ((cVar2 != '\0') && (cVar2 = FUN_141ecac10(), iVar4 = 0, cVar2 != '\0')) {
    AcquireSRWLockShared((PSRWLOCK)&DAT_146ab66c8);
    iVar4 = DAT_146ab6368;
    if (param_1 != '\0') {
      ReleaseSRWLockShared((PSRWLOCK)&DAT_146ab66c8);
      return iVar4;
    }
    iVar4 = iVar7;
    if (DAT_146ab6368 != 0) {
      local_88 = 0;
      uStack_84 = 1;
      iStack_74 = 0;
      iStack_70 = 0;
      iVar9 = (int)DAT_1464c9f38;
      if (iVar9 != 0) {
        puVar8 = DAT_1464c9f30;
        if (DAT_1464c9f30 == (uint *)0x0) {
          puVar8 = (uint *)&DAT_1464c9f20;
        }
        uVar3 = *puVar8;
        iStack_70 = 0;
        local_88 = 0;
        while (uVar3 == 0) {
          lVar6 = (longlong)local_88;
          iStack_70 = iStack_70 + 0x20;
          iVar4 = local_88 + 1;
          bVar1 = (int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_88;
          local_88 = iVar4;
          if (bVar1) goto LAB_141ecae2c;
          uVar3 = puVar8[lVar6 + 1];
        }
        uStack_84 = -uVar3 & uVar3;
        iVar4 = 0x1f;
        if (uStack_84 != 0) {
          for (; uStack_84 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        if (uStack_84 == 0) {
          iVar4 = 0x20;
        }
        else {
          iVar4 = 0x1f - iVar4;
        }
        iStack_74 = (iStack_70 - iVar4) + 0x1f;
        if (iVar9 < iStack_74) {
LAB_141ecae2c:
          iStack_74 = iVar9;
        }
      }
      uStack_50 = CONCAT44(iStack_74,0xffffffff);
      local_48 = CONCAT44(uStack_6c,iStack_70);
      uStack_38 = CONCAT44(uStack_84,local_88);
      local_40 = &DAT_1464c9f10;
      puStack_30 = &DAT_1464c9f20;
      iStack_60 = local_88;
      uStack_5c = uStack_84;
      local_58 = &DAT_1464c9f20;
      iVar4 = iVar7;
      uStack_28 = uStack_50;
      uStack_20 = local_48;
      while( true ) {
        if ((uStack_50._4_4_ == iVar9) && (local_58 == &DAT_1464c9f20)) break;
        uVar3 = FUN_141ec8950((longlong)uStack_50._4_4_ * 0x250 + DAT_1464c9f10);
        if (DAT_1464c9ec8 != DAT_1464c9ef4) {
          puVar5 = DAT_1464c9f00;
          if (DAT_1464c9f00 == (undefined *)0x0) {
            puVar5 = &DAT_1464c9ef8;
          }
          iVar7 = *(int *)(puVar5 + (longlong)(int)(DAT_1464c9f08 - 1U & uVar3) * 4);
          while (iVar7 != -1) {
            lVar6 = (longlong)iVar7;
            if (*(uint *)(DAT_1464c9ec0 + lVar6 * 0x18) == uVar3) {
              if ((((iVar7 != -1) && (lVar6 = DAT_1464c9ec0 + lVar6 * 0x18, lVar6 != 0)) &&
                  (lVar6 = *(longlong *)(lVar6 + 8), lVar6 != 0)) &&
                 (0 < *(longlong *)(lVar6 + 0x18))) {
                iVar4 = iVar4 + 1;
              }
              break;
            }
            iVar7 = *(int *)(DAT_1464c9ec0 + 0x10 + lVar6 * 0x18);
          }
        }
        uStack_50 = CONCAT44(uStack_50._4_4_,(uint)uStack_50 & ~uStack_5c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)&DAT_146ab66c8);
  }
  return iVar4;
}



// FUNCTION 141ecaf80 FUN_141ecaf80 body=714 status=ok
// SIG undefined FUN_141ecaf80(void)

byte FUN_141ecaf80(longlong param_1,undefined8 *param_2,undefined4 *param_3,longlong *param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  DWORD DVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined2 *puVar9;
  byte bVar10;
  undefined2 *puVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  int local_50;
  int local_4c;
  byte local_48;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 local_30;
  
  bVar10 = 0;
  plVar6 = (longlong *)FUN_1415c3d50();
  puVar11 = &DAT_143f3eda8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)*param_2;
  }
  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x18))(plVar6,puVar9,0);
  if (plVar6 == (longlong *)0x0) {
    bVar10 = 0;
  }
  else {
    local_44 = 0;
    uStack_3c = 0;
    FUN_141eba640(plVar6,&local_58);
    (**(code **)(*plVar6 + 0x1c8))(plVar6,0xb);
    iVar4 = FUN_141592950(param_2,L".stable.",1,0,0xffffffff);
    piVar2 = DAT_146ab66c0;
    if (iVar4 == -1) {
      cVar3 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar3 == '\0') && (DAT_1468c21ae != '\0')) &&
         (DVar5 = GetCurrentThreadId(), DVar5 != DAT_1468c21c0)) {
        lVar8 = 4;
      }
      else {
        lVar8 = 0;
      }
      bVar14 = false;
      bVar13 = *(int *)((longlong)piVar2 + lVar8) < 0;
      bVar12 = *(int *)((longlong)piVar2 + lVar8) == 0;
    }
    else {
      cVar3 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar3 == '\0') && (DAT_1468c21ae != '\0')) &&
         (DVar5 = GetCurrentThreadId(), DVar5 != DAT_1468c21c0)) {
        iVar4 = piVar2[1];
        bVar14 = SBORROW4(iVar4,1);
        bVar13 = iVar4 + -1 < 0;
        bVar12 = iVar4 == 1;
      }
      else {
        iVar4 = *piVar2;
        bVar14 = SBORROW4(iVar4,1);
        bVar13 = iVar4 + -1 < 0;
        bVar12 = iVar4 == 1;
      }
    }
    if (((local_58 == 0x5049504543414348) && (local_50 == 0xb)) &&
       (((uint)local_48 == *(uint *)(param_1 + 0x10) &&
        ((bVar12 || bVar14 != bVar13 || (local_4c == DAT_146ab6384)))))) {
      *(undefined8 *)(param_1 + 0x20) = local_30;
      *param_3 = (undefined4)local_44;
      param_3[1] = local_44._4_4_;
      param_3[2] = (undefined4)uStack_3c;
      param_3[3] = uStack_3c._4_4_;
      (**(code **)(*plVar6 + 0xa8))(plVar6);
      FUN_141ebb310(plVar6,param_5);
      bVar10 = (byte)~*(byte *)(plVar6 + 5) >> 7;
    }
    cVar3 = (**(code **)(*plVar6 + 0xe8))(plVar6);
    if (cVar3 == '\0') {
      bVar10 = 0;
    }
    (**(code **)*plVar6)(plVar6,1);
    if (bVar10 != 0) {
      uVar7 = FPlatformFileManager::Get();
      plVar6 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar7);
      if (*(int *)(param_2 + 1) != 0) {
        puVar11 = (undefined2 *)*param_2;
      }
      lVar8 = (**(code **)(*plVar6 + 0x100))(plVar6,puVar11);
      plVar6 = (longlong *)operator_new(0x18);
      if (plVar6 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        *(undefined4 *)(plVar6 + 1) = 1;
        *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
        *plVar6 = (longlong)&PTR_FUN_143f3f2e0;
        plVar6[2] = lVar8;
      }
      local_68 = lVar8;
      local_60 = plVar6;
      SharedPointerInternals::EnableSharedFromThis(&local_68,lVar8,lVar8);
      if (param_4 != &local_68) {
        *param_4 = lVar8;
        local_68 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_4 + 1,&local_60);
        plVar6 = local_60;
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
    }
  }
  return bVar10;
}


