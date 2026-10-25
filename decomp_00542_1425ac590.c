// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1425ac590 IntroSortInternal<FActorPriority_*,FIdentityFunctor,TDereferenceWrapper<FActorPriority_*,FCompareFActorPriority>_> body=887 status=ok
// SIG undefined IntroSortInternal<FActorPriority_*,FIdentityFunctor,TDereferenceWrapper<FActorPriority_*,FCompareFActorPriority>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FActorPriority_*,FIdentityFunctor,TDereferenceWrapper<FActorPriority_*,FCompareFActorPriority>_>
               (longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  float fVar16;
  undefined1 auStack_368 [48];
  int local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_1 + (param_2 - 1) * 8;
    fVar16 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar16 = fVar16 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar16 = ::_guard_xfg_dispatch_icall_nop(fVar16);
    local_318 = (undefined4)(longlong)(fVar16 + fVar16);
    ::_guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar15 = &local_328;
    do {
      puVar9 = (undefined8 *)*plVar15;
      puVar14 = (undefined8 *)plVar15[1];
      local_338 = (int)plVar15[2];
      lVar10 = ((longlong)puVar14 - (longlong)puVar9 >> 3) + 1;
      puVar8 = puVar9;
      if (local_338 != 0) {
LAB_1425ac660:
        if (8 < lVar10) {
          if (lVar10 < 0) {
            lVar10 = lVar10 + 1;
          }
          puVar12 = puVar14 + 1;
          uVar1 = puVar8[lVar10 >> 1];
          puVar8[lVar10 >> 1] = *puVar8;
          *puVar8 = uVar1;
          puVar9 = puVar8;
LAB_1425ac690:
          puVar9 = puVar9 + 1;
          if (puVar9 <= puVar14) goto code_r0x0001425ac699;
          goto LAB_1425ac6b0;
        }
        for (; puVar12 = puVar8, puVar9 = puVar8, puVar8 < puVar14; puVar14 = puVar14 + -1) {
          while (puVar13 = puVar12, puVar9 = puVar9 + 1, puVar9 <= puVar14) {
            puVar12 = puVar9;
            if (*(int *)*puVar13 <= *(int *)*puVar9) {
              puVar12 = puVar13;
            }
          }
          uVar1 = *puVar13;
          *puVar13 = *puVar14;
          *puVar14 = uVar1;
        }
        goto LAB_1425ac870;
      }
LAB_1425ac762:
      iVar6 = (int)lVar10;
      iVar4 = (iVar6 + -2) / 2;
      if (-1 < iVar4) {
        iVar5 = iVar4 * 2 + 1;
        iVar3 = iVar5;
        iVar7 = iVar4;
joined_r0x0001425ac77b:
        do {
          if (iVar5 < iVar6) {
            iVar5 = iVar4 * 2;
            iVar11 = iVar5 + 1;
            if (iVar5 + 2 < iVar6) {
              if (*(int *)puVar9[iVar11] < *(int *)puVar9[(longlong)iVar5 + 2]) {
                iVar11 = iVar5;
              }
              iVar11 = iVar11 + 1;
            }
            piVar2 = (int *)puVar9[iVar4];
            if (*(int *)puVar9[iVar11] < *piVar2) {
              iVar5 = iVar11 * 2 + 1;
              puVar9[iVar4] = (int *)puVar9[iVar11];
              puVar9[iVar11] = piVar2;
              iVar4 = iVar11;
              goto joined_r0x0001425ac77b;
            }
          }
          iVar5 = iVar3 + -2;
          iVar4 = iVar7 + -1;
          iVar3 = iVar5;
          iVar7 = iVar4;
        } while (-1 < iVar4);
      }
      iVar6 = iVar6 + -1;
      lVar10 = (longlong)iVar6;
      if (0 < iVar6) {
        do {
          iVar4 = 0;
          uVar1 = *puVar9;
          *puVar9 = puVar9[lVar10];
          puVar9[lVar10] = uVar1;
          if (1 < iVar6) {
            do {
              iVar3 = iVar4 * 2;
              iVar5 = iVar3 + 1;
              if (iVar3 + 2 < iVar6) {
                if (*(int *)puVar9[iVar5] < *(int *)puVar9[(longlong)iVar3 + 2]) {
                  iVar5 = iVar3;
                }
                iVar5 = iVar5 + 1;
              }
              piVar2 = (int *)puVar9[iVar4];
              if (*piVar2 <= *(int *)puVar9[iVar5]) break;
              puVar9[iVar4] = (int *)puVar9[iVar5];
              puVar9[iVar5] = piVar2;
              iVar4 = iVar5;
            } while (iVar5 * 2 + 1 < iVar6);
          }
          iVar6 = iVar6 + -1;
          lVar10 = lVar10 + -1;
        } while (0 < lVar10);
      }
LAB_1425ac870:
      plVar15 = plVar15 + -3;
    } while (&local_328 <= plVar15);
  }
  return;
code_r0x0001425ac699:
  if (*(int *)*puVar8 <= *(int *)*puVar9) goto LAB_1425ac690;
LAB_1425ac6b0:
  do {
    puVar13 = puVar12;
    piVar2 = (int *)puVar13[-1];
    puVar12 = puVar13 + -1;
    if (puVar12 <= puVar8) break;
  } while (*piVar2 <= *(int *)*puVar8);
  if (puVar9 <= puVar12) {
    uVar1 = *puVar9;
    *puVar9 = piVar2;
    *puVar12 = uVar1;
    goto LAB_1425ac690;
  }
  uVar1 = *puVar8;
  *puVar8 = piVar2;
  *puVar12 = uVar1;
  local_338 = local_338 + -1;
  if ((longlong)((longlong)puVar12 + (-8 - (longlong)puVar8) & 0xfffffffffffffff8U) <
      (longlong)((longlong)puVar14 - (longlong)puVar9 & 0xfffffffffffffff8U)) {
    if (puVar9 < puVar14) {
      *plVar15 = (longlong)puVar9;
      plVar15[1] = (longlong)puVar14;
      *(int *)(plVar15 + 2) = local_338;
      plVar15 = plVar15 + 3;
    }
    if (puVar12 <= puVar8 + 1) goto LAB_1425ac870;
    puVar14 = puVar13 + -2;
    puVar9 = puVar8;
  }
  else {
    if (puVar8 + 1 < puVar12) {
      *plVar15 = (longlong)puVar8;
      plVar15[1] = (longlong)(puVar13 + -2);
      *(int *)(plVar15 + 2) = local_338;
      plVar15 = plVar15 + 3;
    }
    if (puVar14 <= puVar9) goto LAB_1425ac870;
  }
  lVar10 = ((longlong)puVar14 - (longlong)puVar9 >> 3) + 1;
  puVar8 = puVar9;
  if (local_338 == 0) goto LAB_1425ac762;
  goto LAB_1425ac660;
}



// FUNCTION 1425ac910 FUN_1425ac910 body=793 status=ok
// SIG undefined FUN_1425ac910(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1425ac910(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar14;
  undefined8 *puVar16;
  longlong *plVar17;
  float fVar18;
  undefined1 auStack_378 [48];
  longlong local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  undefined8 *puVar13;
  undefined8 *puVar15;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_378;
    lStack_330 = param_1 + param_2 * 0x14 + -0x14;
    fVar18 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar18 = fVar18 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar18 = _guard_xfg_dispatch_icall_nop(fVar18);
    local_328 = (undefined4)(longlong)(fVar18 + fVar18);
    _guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar17 = &local_338;
    do {
      puVar12 = (undefined8 *)*plVar17;
      puVar11 = (undefined8 *)plVar17[1];
      lVar2 = plVar17[2];
      local_348._0_4_ = (int)lVar2;
      lVar10 = ((longlong)puVar11 - (longlong)puVar12) / 0x14 + 1;
      puVar16 = puVar12;
      if ((int)local_348 != 0) {
LAB_1425aca00:
        if (8 < lVar10) {
          if (lVar10 < 0) {
            lVar10 = lVar10 + 1;
          }
          puVar12 = (undefined8 *)((longlong)puVar16 + (lVar10 >> 1) * 0x14);
          if (puVar12 != puVar16) {
            uVar4 = *(undefined4 *)((longlong)puVar16 + 4);
            uVar5 = *(undefined4 *)(puVar16 + 1);
            uVar6 = *(undefined4 *)((longlong)puVar16 + 0xc);
            uVar3 = *(undefined4 *)(puVar12 + 2);
            uVar7 = *puVar12;
            uVar8 = puVar12[1];
            *(undefined4 *)puVar12 = *(undefined4 *)puVar16;
            *(undefined4 *)((longlong)puVar12 + 4) = uVar4;
            *(undefined4 *)(puVar12 + 1) = uVar5;
            *(undefined4 *)((longlong)puVar12 + 0xc) = uVar6;
            *(undefined4 *)(puVar12 + 2) = *(undefined4 *)(puVar16 + 2);
            *puVar16 = uVar7;
            puVar16[1] = uVar8;
            *(undefined4 *)(puVar16 + 2) = uVar3;
          }
          puVar14 = (undefined8 *)((longlong)puVar11 + 0x14);
          puVar12 = puVar16;
LAB_1425aca45:
          puVar13 = puVar12;
          puVar12 = (undefined8 *)((longlong)puVar13 + 0x14);
          if (puVar12 <= puVar11) goto code_r0x0001425aca4e;
          goto LAB_1425aca60;
        }
        for (; puVar12 = puVar16, puVar14 = puVar16, puVar16 < puVar11;
            puVar11 = (undefined8 *)((longlong)puVar11 + -0x14)) {
          while (puVar13 = puVar12, puVar12 = (undefined8 *)((longlong)puVar14 + 0x14),
                puVar12 <= puVar11) {
            piVar1 = (int *)((longlong)puVar14 + 0x1c);
            puVar14 = puVar12;
            if (*piVar1 <= *(int *)(puVar13 + 1)) {
              puVar12 = puVar13;
            }
          }
          if (puVar13 != puVar11) {
            uVar9 = puVar11[1];
            uVar3 = *(undefined4 *)(puVar13 + 2);
            uVar7 = *puVar13;
            uVar8 = puVar13[1];
            *puVar13 = *puVar11;
            puVar13[1] = uVar9;
            *(undefined4 *)(puVar13 + 2) = *(undefined4 *)(puVar11 + 2);
            *puVar11 = uVar7;
            puVar11[1] = uVar8;
            *(undefined4 *)(puVar11 + 2) = uVar3;
          }
        }
        goto LAB_1425acb7e;
      }
LAB_1425acb6f:
      local_348 = lVar2;
      FUN_1425ac020(puVar12,lVar10,param_3,param_4);
LAB_1425acb7e:
      plVar17 = plVar17 + -3;
    } while (&local_338 <= plVar17);
  }
  return;
code_r0x0001425aca4e:
  if (*(int *)((longlong)puVar13 + 0x1c) <= *(int *)(puVar16 + 1)) goto LAB_1425aca45;
LAB_1425aca60:
  do {
    puVar15 = puVar14;
    puVar14 = (undefined8 *)((longlong)puVar15 + -0x14);
    if (puVar14 <= puVar16) break;
  } while (*(int *)(puVar16 + 1) <= *(int *)((longlong)puVar15 + -0xc));
  if (puVar12 <= puVar14) {
    if (puVar12 != puVar14) {
      uVar4 = *(undefined4 *)(puVar15 + -2);
      uVar5 = *(undefined4 *)((longlong)puVar15 + -0xc);
      uVar6 = *(undefined4 *)(puVar15 + -1);
      uVar3 = *(undefined4 *)((longlong)puVar13 + 0x24);
      uVar7 = *puVar12;
      uVar8 = *(undefined8 *)((longlong)puVar13 + 0x1c);
      *(undefined4 *)puVar12 = *(undefined4 *)puVar14;
      *(undefined4 *)(puVar13 + 3) = uVar4;
      *(undefined4 *)((longlong)puVar13 + 0x1c) = uVar5;
      *(undefined4 *)(puVar13 + 4) = uVar6;
      *(undefined4 *)((longlong)puVar13 + 0x24) = *(undefined4 *)((longlong)puVar15 + -4);
      *puVar14 = uVar7;
      *(undefined8 *)((longlong)puVar15 + -0xc) = uVar8;
      *(undefined4 *)((longlong)puVar15 + -4) = uVar3;
    }
    goto LAB_1425aca45;
  }
  if (puVar16 != puVar14) {
    uVar4 = *(undefined4 *)(puVar15 + -2);
    uVar5 = *(undefined4 *)((longlong)puVar15 + -0xc);
    uVar6 = *(undefined4 *)(puVar15 + -1);
    uVar3 = *(undefined4 *)(puVar16 + 2);
    uVar7 = *puVar16;
    uVar8 = puVar16[1];
    *(undefined4 *)puVar16 = *(undefined4 *)puVar14;
    *(undefined4 *)((longlong)puVar16 + 4) = uVar4;
    *(undefined4 *)(puVar16 + 1) = uVar5;
    *(undefined4 *)((longlong)puVar16 + 0xc) = uVar6;
    *(undefined4 *)(puVar16 + 2) = *(undefined4 *)((longlong)puVar15 + -4);
    *puVar14 = uVar7;
    *(undefined8 *)((longlong)puVar15 + -0xc) = uVar8;
    *(undefined4 *)((longlong)puVar15 + -4) = uVar3;
  }
  local_348._0_4_ = (int)local_348 + -1;
  if (((longlong)puVar14 + (-0x14 - (longlong)puVar16)) / 0x14 <
      ((longlong)puVar11 - (longlong)puVar12) / 0x14) {
    if (puVar12 < puVar11) {
      *plVar17 = (longlong)puVar12;
      plVar17[1] = (longlong)puVar11;
      *(int *)(plVar17 + 2) = (int)local_348;
      plVar17 = plVar17 + 3;
    }
    if (puVar14 <= (undefined8 *)((longlong)puVar16 + 0x14U)) goto LAB_1425acb7e;
    puVar11 = puVar15 + -5;
    puVar12 = puVar16;
  }
  else {
    if ((undefined8 *)((longlong)puVar16 + 0x14U) < puVar14) {
      *plVar17 = (longlong)puVar16;
      plVar17[1] = (longlong)(puVar15 + -5);
      *(int *)(plVar17 + 2) = (int)local_348;
      plVar17 = plVar17 + 3;
    }
    if (puVar11 <= puVar12) goto LAB_1425acb7e;
  }
  lVar10 = ((longlong)puVar11 - (longlong)puVar12) / 0x14 + 1;
  puVar16 = puVar12;
  if ((int)local_348 == 0) goto LAB_1425acb6f;
  goto LAB_1425aca00;
}



// FUNCTION 1425acc30 IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,TSparseArray<TSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UClass_*,int>,TDefaultMapHashableKeyFuncs<UClass_*,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_>_> body=833 status=ok
// SIG undefined IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,TSparseArray<TSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UClass_*,int>,TDefaultMapHashableKeyFuncs<UClass_*,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,TSparseArray<TSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UClass_*,int>,TDefaultMapHashableKeyFuncs<UClass_*,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  float fVar17;
  undefined1 auStack_378 [48];
  longlong local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_378;
    lStack_330 = param_1 + param_2 * 0x18 + -0x18;
    fVar17 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar17 = fVar17 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar17 = ::_guard_xfg_dispatch_icall_nop(fVar17);
    local_328 = (undefined4)(longlong)(fVar17 + fVar17);
    ::_guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar16 = &local_338;
    do {
      puVar15 = (undefined8 *)*plVar16;
      puVar10 = (undefined8 *)plVar16[1];
      lVar1 = plVar16[2];
      local_348._0_4_ = (int)lVar1;
      lVar9 = ((longlong)puVar10 - (longlong)puVar15) / 0x18 + 1;
      puVar14 = puVar15;
      if ((int)local_348 != 0) {
LAB_1425acd20:
        if (8 < lVar9) {
          if (lVar9 < 0) {
            lVar9 = lVar9 + 1;
          }
          puVar15 = puVar14 + (lVar9 >> 1) * 3;
          if (puVar15 != puVar14) {
            uVar3 = *(undefined4 *)((longlong)puVar14 + 4);
            uVar4 = *(undefined4 *)(puVar14 + 1);
            uVar5 = *(undefined4 *)((longlong)puVar14 + 0xc);
            uVar6 = *puVar15;
            uVar7 = puVar15[1];
            uVar2 = puVar15[2];
            *(undefined4 *)puVar15 = *(undefined4 *)puVar14;
            *(undefined4 *)((longlong)puVar15 + 4) = uVar3;
            *(undefined4 *)(puVar15 + 1) = uVar4;
            *(undefined4 *)((longlong)puVar15 + 0xc) = uVar5;
            puVar15[2] = puVar14[2];
            *puVar14 = uVar6;
            puVar14[1] = uVar7;
            puVar14[2] = uVar2;
          }
          puVar12 = puVar10 + 3;
          puVar15 = puVar14;
LAB_1425acd70:
          puVar11 = puVar15;
          puVar15 = puVar11 + 3;
          if (puVar15 <= puVar10) goto code_r0x0001425acd79;
          goto LAB_1425acd83;
        }
        for (; puVar12 = puVar14, puVar15 = puVar14, puVar14 < puVar10; puVar10 = puVar10 + -3) {
          while (puVar11 = puVar12, puVar15 = puVar15 + 3, puVar15 <= puVar10) {
            puVar12 = puVar15;
            if (*(int *)(puVar11 + 1) <= *(int *)(puVar15 + 1)) {
              puVar12 = puVar11;
            }
          }
          if (puVar11 != puVar10) {
            uVar6 = puVar10[1];
            uVar7 = *puVar11;
            uVar8 = puVar11[1];
            uVar2 = puVar11[2];
            *puVar11 = *puVar10;
            puVar11[1] = uVar6;
            puVar11[2] = puVar10[2];
            *puVar10 = uVar7;
            puVar10[1] = uVar8;
            puVar10[2] = uVar2;
          }
        }
        goto LAB_1425aceb1;
      }
LAB_1425acea2:
      local_348 = lVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,TSparseArray<TSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UClass_*,int>,TDefaultMapHashableKeyFuncs<UClass_*,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_>_>
                (puVar15,lVar9,param_3,param_4);
LAB_1425aceb1:
      plVar16 = plVar16 + -3;
    } while (&local_338 <= plVar16);
  }
  return;
code_r0x0001425acd79:
  if (*(int *)(puVar14 + 1) <= *(int *)(puVar11 + 4)) goto LAB_1425acd70;
LAB_1425acd83:
  do {
    puVar13 = puVar12;
    puVar12 = puVar13 + -3;
    if (puVar12 <= puVar14) break;
  } while (*(int *)(puVar13 + -2) <= *(int *)(puVar14 + 1));
  if (puVar15 <= puVar12) {
    if (puVar15 != puVar12) {
      uVar3 = *(undefined4 *)((longlong)puVar13 + -0x14);
      uVar4 = *(undefined4 *)(puVar13 + -2);
      uVar5 = *(undefined4 *)((longlong)puVar13 + -0xc);
      uVar6 = *puVar15;
      uVar7 = puVar11[4];
      uVar2 = puVar11[5];
      *(undefined4 *)puVar15 = *(undefined4 *)puVar12;
      *(undefined4 *)((longlong)puVar11 + 0x1c) = uVar3;
      *(undefined4 *)(puVar11 + 4) = uVar4;
      *(undefined4 *)((longlong)puVar11 + 0x24) = uVar5;
      puVar11[5] = puVar13[-1];
      *puVar12 = uVar6;
      puVar13[-2] = uVar7;
      puVar13[-1] = uVar2;
    }
    goto LAB_1425acd70;
  }
  if (puVar14 != puVar12) {
    uVar3 = *(undefined4 *)((longlong)puVar13 + -0x14);
    uVar4 = *(undefined4 *)(puVar13 + -2);
    uVar5 = *(undefined4 *)((longlong)puVar13 + -0xc);
    uVar6 = *puVar14;
    uVar7 = puVar14[1];
    uVar2 = puVar14[2];
    *(undefined4 *)puVar14 = *(undefined4 *)puVar12;
    *(undefined4 *)((longlong)puVar14 + 4) = uVar3;
    *(undefined4 *)(puVar14 + 1) = uVar4;
    *(undefined4 *)((longlong)puVar14 + 0xc) = uVar5;
    puVar14[2] = puVar13[-1];
    *puVar12 = uVar6;
    puVar13[-2] = uVar7;
    puVar13[-1] = uVar2;
  }
  local_348._0_4_ = (int)local_348 + -1;
  lVar9 = (longlong)puVar12 + (-0x18 - (longlong)puVar14);
  lVar9 = lVar9 / 6 + (lVar9 >> 0x3f);
  if ((lVar9 >> 2) - (lVar9 >> 0x3f) < ((longlong)puVar10 - (longlong)puVar15) / 0x18) {
    if (puVar15 < puVar10) {
      *plVar16 = (longlong)puVar15;
      plVar16[1] = (longlong)puVar10;
      *(int *)(plVar16 + 2) = (int)local_348;
      plVar16 = plVar16 + 3;
    }
    if (puVar12 <= puVar14 + 3) goto LAB_1425aceb1;
    puVar10 = puVar13 + -6;
    puVar15 = puVar14;
  }
  else {
    if (puVar14 + 3 < puVar12) {
      *plVar16 = (longlong)puVar14;
      plVar16[1] = (longlong)(puVar13 + -6);
      *(int *)(plVar16 + 2) = (int)local_348;
      plVar16 = plVar16 + 3;
    }
    if (puVar10 <= puVar15) goto LAB_1425aceb1;
  }
  lVar9 = ((longlong)puVar10 - (longlong)puVar15) / 0x18 + 1;
  puVar14 = puVar15;
  if ((int)local_348 == 0) goto LAB_1425acea2;
  goto LAB_1425acd20;
}



// FUNCTION 1425acf80 FUN_1425acf80 body=67 status=ok
// SIG undefined FUN_1425acf80(void)

undefined8 * FUN_1425acf80(undefined8 *param_1)

{
  FUN_1428c1a80();
  *(uint *)((longlong)param_1 + 0x464) = *(uint *)((longlong)param_1 + 0x464) | 9;
  *param_1 = &PTR_FUN_1440f1c20;
  *(undefined4 *)((longlong)param_1 + 0x45c) = 0xff2de12d;
  return param_1;
}



// FUNCTION 1425acfd0 FUN_1425acfd0 body=397 status=ok
// SIG undefined FUN_1425acfd0(void)

undefined8 * FUN_1425acfd0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_14511ad78;
  param_1[0x8b] = &PTR_LAB_14511b478;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"CollisionCapsule",1);
  uVar4 = *puVar1;
  uVar2 = FUN_142912e90();
  lVar3 = FUN_141752410(param_1,uVar4,uVar2,uVar2,1,0,0);
  param_1[0x8c] = lVar3;
  local_res8[0] = 0xffff8a05;
  *(undefined4 *)(lVar3 + 0x6f0) = 0xffff8a05;
  *(byte *)(param_1[0x8c] + 0x700) = *(byte *)(param_1[0x8c] + 0x700) | 1;
  lVar3 = param_1[0x8c];
  *(undefined4 *)(lVar3 + 0x714) = 0x42480000;
  *(undefined4 *)(lVar3 + 0x710) = 0x42480000;
  (**(code **)(*(longlong *)param_1[0x8c] + 0x640))((longlong *)param_1[0x8c],DAT_146aefc58);
  *(byte *)(param_1[0x8c] + 0x700) = *(byte *)(param_1[0x8c] + 0x700) | 2;
  FUN_142398900(param_1[0x8c],1);
  *(undefined1 *)(param_1[0x8c] + 0x24e) = 0;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) | 0x80;
  param_1[0x2d] = param_1[0x8c];
  *(undefined1 *)((longlong)param_1 + 0x12a) = 3;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"Sprite",1);
  uVar4 = *puVar1;
  uVar2 = FUN_1429028f0();
  uVar4 = FUN_141752550(param_1,uVar4,uVar2,0);
  param_1[0x8d] = uVar4;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"Sprite2",1);
  uVar4 = *puVar1;
  uVar2 = FUN_1429028f0();
  uVar4 = FUN_141752550(param_1,uVar4,uVar2,0);
  param_1[0x8e] = uVar4;
  return param_1;
}



// FUNCTION 1425ad160 FUN_1425ad160 body=1555 status=ok
// SIG undefined FUN_1425ad160(void)

undefined8 * FUN_1425ad160(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  longlong lVar8;
  char cVar9;
  DWORD DVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  byte *pbVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  undefined8 *puVar19;
  int *piVar20;
  longlong *plVar21;
  longlong *plVar22;
  int local_res8;
  undefined1 local_res18 [8];
  undefined8 local_res20;
  int *local_80;
  undefined1 local_78 [8];
  undefined1 local_70 [16];
  undefined1 local_60 [32];
  
  uVar17 = 0;
  FUN_14271d7c0(param_1,param_2,0);
  *param_1 = &PTR_FUN_14511a988;
  puVar19 = param_1 + 0x160;
  *(undefined4 *)(param_1 + 0x75) = *(undefined4 *)(param_1[0x26] + 8);
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(undefined1 *)(param_1 + 0x79) = 0;
  param_1[0xda] = 0;
  *(undefined1 *)(param_1 + 0xdb) = 1;
  *(undefined1 *)((longlong)param_1 + 0x6da) = 0;
  param_1[0x13c] = 0;
  param_1[0x13d] = 0;
  param_1[0x13e] = 0;
  param_1[0x74] = &PTR_FUN_144165fb0;
  param_1[0x13f] = 0;
  param_1[0x140] = 0;
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  param_1[0x143] = 0;
  param_1[0x144] = 0;
  param_1[0x14d] = 0;
  param_1[0x14e] = 0;
  param_1[0x14f] = 0;
  param_1[0x154] = 0;
  param_1[0x155] = 0;
  param_1[0x156] = 0;
  param_1[0x157] = 0;
  param_1[0x158] = 0;
  param_1[0x159] = 0;
  param_1[0x15a] = 0;
  param_1[0x15b] = 0;
  param_1[0x15c] = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x15d) = 0;
  param_1[0x15f] = 0;
  param_1[0x15e] = param_1 + 0x13f;
  *(undefined1 *)((longlong)param_1 + 0x6d9) = 1;
  lVar16 = 2;
  if (puVar19 <= param_1 + 0x161) {
    for (; lVar16 != 0; lVar16 = lVar16 + -1) {
      *(undefined4 *)puVar19 = 0xffffffff;
      puVar19 = (undefined8 *)((longlong)puVar19 + 4);
    }
  }
  param_1[0x162] = param_2;
  plVar1 = param_1 + 0x163;
  *plVar1 = 0;
  param_1[0x164] = 0;
  param_1[0x165] = 0;
  puVar11 = (undefined4 *)(**(code **)(*param_2 + 0x4d0))(param_2);
  uVar4 = puVar11[1];
  uVar5 = puVar11[2];
  uVar6 = puVar11[3];
  *(undefined4 *)(param_1 + 0x166) = *puVar11;
  *(undefined4 *)((longlong)param_1 + 0xb34) = uVar4;
  *(undefined4 *)(param_1 + 0x167) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0xb3c) = uVar6;
  uVar4 = puVar11[5];
  uVar5 = puVar11[6];
  uVar6 = puVar11[7];
  *(undefined4 *)(param_1 + 0x168) = puVar11[4];
  *(undefined4 *)((longlong)param_1 + 0xb44) = uVar4;
  *(undefined4 *)(param_1 + 0x169) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0xb4c) = uVar6;
  lVar16 = param_2[0xdf];
  piVar20 = (int *)(lVar16 + 0xd8);
  if ((DAT_146ac3ac6 != '\0') && (cVar9 = IsInRenderingThread(), cVar9 != '\0')) {
    FBaseGraphTask::GetSmallTaskAllocator();
    if (*(char *)(lVar16 + 0x200) == '\0') {
      (**(code **)(*(longlong *)(lVar16 + 0x1d8) + 0x28))();
    }
    else if (*piVar20 == 0) {
      FRenderResource::UpdateRHI(lVar16 + 0x1d8);
    }
    if (*(char *)(lVar16 + 0x118) == '\0') {
      (**(code **)(*(longlong *)(lVar16 + 0xf0) + 0x28))(lVar16 + 0xf0);
    }
    else if (*piVar20 == 0) {
      FRenderResource::UpdateRHI(lVar16 + 0xf0);
    }
    goto LAB_1425ad3f5;
  }
  if (DAT_146ac3ac5 == '\0') {
    cVar9 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar9 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar10 = GetCurrentThreadId();
      bVar7 = false;
      if (DVar10 == DAT_1468c21c0) goto LAB_1425ad37f;
    }
    else {
LAB_1425ad37f:
      bVar7 = true;
    }
    if (bVar7) {
      local_80 = piVar20;
      uVar12 = FBaseGraphTask::GetSmallTaskAllocator();
      <lambda_8eb0fd50722b02ff4367f6a0ae38e9ad>::operator()(&local_80,uVar12);
      goto LAB_1425ad3f5;
    }
  }
  plVar21 = (longlong *)FUN_1425bacf0(local_60,0,0xff);
  *(int **)(*plVar21 + 0x10) = piVar20;
  lVar16 = *plVar21;
  lVar8 = plVar21[2];
  lVar14 = plVar21[1];
  lVar3 = *(longlong *)(lVar16 + 0x20);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0x48) = *(int *)(lVar3 + 0x48) + 1;
    UNLOCK();
  }
  FUN_14048a3d0(lVar16,lVar14,(int)lVar8,1);
  if (lVar3 != 0) {
    LOCK();
    piVar20 = (int *)(lVar3 + 0x48);
    iVar18 = *piVar20;
    *piVar20 = *piVar20 + -1;
    UNLOCK();
    if (iVar18 == 1) {
      FGraphEvent::Recycle(lVar3);
    }
  }
LAB_1425ad3f5:
  FUN_1428222b0(param_2[0xdf] + 0xf0,param_1 + 0x74);
  lVar16 = param_1[0x162];
  local_res20 = 0xfa;
  param_1[0x2b] = 0xfa;
  iVar18 = *(int *)(param_1 + 0x164);
  iVar2 = *(int *)(lVar16 + 0x728);
  if (iVar18 != 0) {
    plVar21 = (longlong *)(*plVar1 + 0x30);
    do {
      if (*plVar21 != 0) {
        FMemory::Free();
      }
      plVar21[-6] = (longlong)&PTR__scalar_deleting_destructor__144eefa68;
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar21 + -2);
      plVar21 = plVar21 + 0xc;
      iVar18 = iVar18 + -1;
    } while (iVar18 != 0);
  }
  *(undefined4 *)(param_1 + 0x164) = 0;
  if (*(int *)((longlong)param_1 + 0xb24) != iVar2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(plVar1,iVar2);
  }
  local_res8 = 0;
  if (0 < *(int *)(lVar16 + 0x728)) {
    local_80 = (int *)0x0;
    do {
      iVar18 = *(int *)(param_1 + 0x164);
      lVar14 = *(longlong *)(*(longlong *)(lVar16 + 0x720) + (longlong)local_80);
      *(int *)(param_1 + 0x164) = iVar18 + 1;
      if (*(int *)((longlong)param_1 + 0xb24) < iVar18 + 1) {
        TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(plVar1,iVar18);
      }
      plVar22 = (longlong *)((longlong)iVar18 * 0x60 + *plVar1);
      plVar21 = (longlong *)0x0;
      if (plVar22 != (longlong *)0x0) {
        uVar12 = (**(code **)(param_1[0x74] + 0x40))();
        *(undefined1 *)(plVar22 + 1) = 0;
        plVar22[2] = 0;
        plVar22[3] = 0;
        plVar22[4] = 0;
        *plVar22 = (longlong)&PTR__scalar_deleting_destructor__14511a978;
        plVar21 = plVar22 + 6;
        *plVar21 = 0;
        plVar22[7] = 0;
        local_res20 = uVar12;
        FBoxSphereBounds::FBoxSphereBounds(plVar22 + 8,lVar14 + 0x58);
        plVar13 = (longlong *)FUN_14236d050(lVar14);
        if (plVar13 != (longlong *)0x0) {
          plVar22[2] = *plVar13;
          plVar22[3] = plVar13[1];
          if (plVar21 != plVar13 + 2) {
            iVar18 = (int)plVar13[3];
            _Src = (void *)plVar13[2];
            *(int *)(plVar22 + 7) = iVar18;
            if ((iVar18 == 0) && (*(int *)((longlong)plVar22 + 0x3c) == 0)) {
              *(undefined4 *)((longlong)plVar22 + 0x3c) = 0;
              uVar12 = local_res20;
            }
            else {
              TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar21,iVar18);
              _guard_xfg_dispatch_icall_nop((void *)*plVar21,_Src,(longlong)iVar18 << 4);
              uVar12 = local_res20;
            }
          }
        }
        if ((plVar22[2] == 0) && (plVar22[3] == 0)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        plVar22[5] = *(longlong *)(lVar14 + 0x10);
        lVar14 = FUN_14233fea0(*(undefined8 *)(lVar14 + 8));
        cVar9 = FUN_142859470(plVar22[5],uVar12,*(undefined4 *)(lVar14 + 8));
        if (cVar9 == '\0') {
          plVar13 = (longlong *)plVar22[5];
        }
        else {
          plVar22[5] = 0;
          plVar13 = (longlong *)0x0;
        }
        plVar21 = plVar22;
        if ((plVar13 == (longlong *)0x0) ||
           ((bVar7 && (cVar9 = (**(code **)(*plVar13 + 0x2e8))(plVar13,4), cVar9 == '\0')))) {
          lVar14 = UMaterial::GetDefaultMaterial(0);
          plVar22[5] = lVar14;
        }
      }
      pbVar15 = (byte *)FUN_142592090(plVar21[5],local_78,*(undefined4 *)(param_1[0x26] + 8));
      *(byte *)(param_1 + 0x165) = *(byte *)(param_1 + 0x165) | *pbVar15;
      *(byte *)((longlong)param_1 + 0xb29) = *(byte *)((longlong)param_1 + 0xb29) | pbVar15[1];
      *(byte *)((longlong)param_1 + 0xb2a) = *(byte *)((longlong)param_1 + 0xb2a) | pbVar15[2];
      *(byte *)((longlong)param_1 + 0xb2b) = *(byte *)((longlong)param_1 + 0xb2b) | pbVar15[3];
      *(byte *)((longlong)param_1 + 0xb2c) = *(byte *)((longlong)param_1 + 0xb2c) | pbVar15[4];
      *(byte *)((longlong)param_1 + 0xb2d) = *(byte *)((longlong)param_1 + 0xb2d) | pbVar15[5];
      *(byte *)((longlong)param_1 + 0xb2e) = *(byte *)((longlong)param_1 + 0xb2e) | pbVar15[6];
      local_res8 = local_res8 + 1;
      *(byte *)((longlong)param_1 + 0xb2f) = *(byte *)((longlong)param_1 + 0xb2f) | pbVar15[7];
      local_80 = local_80 + 2;
    } while (local_res8 < *(int *)(lVar16 + 0x728));
  }
  cVar9 = FUN_142725920();
  if ((cVar9 != '\0') || ((*(uint *)((longlong)param_1 + 0xb2c) & 0x400) == 0)) {
    uVar17 = 0x20000000;
  }
  *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) & 0xdfffffff;
  *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) | uVar17;
  lVar16 = *(longlong *)(param_2[0xdf] + 0x20);
  if (lVar16 != 0) {
    lVar14 = FUN_1429a0270();
    if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x88) + (longlong)*(int *)(lVar14 + 0x90) * 8
         ) != lVar14 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      FLevelUtils::FindStreamingLevel(lVar16);
    }
  }
  (**(code **)(*DAT_146b17150 + 0x308))(DAT_146b17150,param_2,local_res18);
  FLinearColor::FLinearColor(local_70,local_res18);
  return param_1;
}



// FUNCTION 1425ad780 FUN_1425ad780 body=113 status=ok
// SIG undefined FUN_1425ad780(void)

undefined4 * FUN_1425ad780(undefined4 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  FStaticMeshVertexBuffer::FStaticMeshVertexBuffer(param_1 + 6);
  FUN_1426f5920(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x82) = 0;
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined2 *)(param_1 + 0x86) = 0;
  *(undefined8 *)(param_1 + 0x88) = param_2;
  return param_1;
}



// FUNCTION 1425ad800 FUN_1425ad800 body=260 status=ok
// SIG undefined FUN_1425ad800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1425ad800(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  *param_1 = param_2;
  lVar2 = *(longlong *)(param_2 + 0x30);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_2 + 0x98);
  }
  param_1[1] = lVar2;
  param_1[2] = *(longlong *)(param_2 + 0x90);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  plVar1 = *(longlong **)(param_2 + 0x30);
  lVar2 = *(longlong *)(param_1[2] + 0x168);
  if (lVar2 == 0) {
    local_28 = _DAT_1468b5d90;
    local_20 = DAT_1468b5d98;
  }
  else {
    local_28 = *(longlong *)(lVar2 + 0x220);
    local_20 = *(undefined4 *)(lVar2 + 0x228);
  }
  param_1[3] = local_28;
  *(undefined4 *)(param_1 + 4) = local_20;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x720))(plVar1,&local_28);
    (**(code **)(*plVar1 + 0x7a8))(plVar1,param_1 + 3,&local_28);
    puVar3 = (undefined8 *)FRotator::Vector(&local_28,local_18);
    *(undefined8 *)((longlong)param_1 + 0x24) = *puVar3;
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(puVar3 + 1);
  }
  return param_1;
}



// FUNCTION 1425ad910 FUN_1425ad910 body=360 status=ok
// SIG undefined FUN_1425ad910(void)

undefined8 * FUN_1425ad910(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  
  *(undefined1 *)(param_1 + 1) = 0;
  lVar6 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__143f73ca8;
  if (DAT_1468c217e == '\0') {
    if (DAT_1469e6880 == 0) {
      uVar3 = GetTransientPackage();
      FUN_1417846f0(uVar3,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      uVar4 = UGCObjectReferencer::GetPrivateStaticClass();
      DAT_1469e6880 = FUN_1417985e0(uVar4,uVar3,0,0,0,0,0,0,0);
      iVar1 = *(int *)(DAT_1469e6880 + 0xc);
      lVar5 = lVar6;
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar7 = iVar1 >> 0x1f & 0xffff;
        uVar2 = iVar1 + uVar7;
        lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                (longlong)(int)((uVar2 & 0xffff) - uVar7) * 0x18;
      }
      *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) | 0x40000000;
    }
    UGCObjectReferencer::AddObject(DAT_1469e6880,param_1);
    *(undefined1 *)(param_1 + 1) = 1;
  }
  *param_1 = &PTR_FUN_14511d110;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 0xffffffffffffffff;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  lVar5 = operator_new(0xc0);
  if (lVar5 != 0) {
    lVar6 = FNetBitWriter::FNetBitWriter(lVar5,0);
  }
  param_1[0xd] = lVar6;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  return param_1;
}



// FUNCTION 1425ada80 FUN_1425ada80 body=44 status=ok
// SIG undefined FUN_1425ada80(void)

undefined8 * FUN_1425ada80(undefined8 *param_1)

{
  FUN_1425adbf0();
  *param_1 = &PTR_FUN_14511cd60;
  param_1[5] = &PTR_LAB_14511d0d8;
  return param_1;
}



// FUNCTION 1425adab0 UMaterialParameterCollection body=67 status=ok
// SIG undefined UMaterialParameterCollection(void)

undefined8 * UMaterialParameterCollection::UMaterialParameterCollection(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__145119f30;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 1425adb00 UMaterialParameterCollectionInstance body=144 status=ok
// SIG undefined UMaterialParameterCollectionInstance(void)

undefined8 *
UMaterialParameterCollectionInstance::UMaterialParameterCollectionInstance(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__14511a1a8;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  return param_1;
}



// FUNCTION 1425adb90 FUN_1425adb90 body=39 status=ok
// SIG undefined FUN_1425adb90(void)

undefined8 * FUN_1425adb90(undefined8 *param_1)

{
  UDeveloperSettings::UDeveloperSettings();
  *param_1 = &PTR_FUN_14511a660;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 1425adbc0 FUN_1425adbc0 body=43 status=ok
// SIG undefined FUN_1425adbc0(void)

undefined8 * FUN_1425adbc0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__14511ab00;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 1425adbf0 FUN_1425adbf0 body=1678 status=ok
// SIG undefined FUN_1425adbf0(void)

undefined8 * FUN_1425adbf0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  undefined4 uVar8;
  DWORD DVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  int iVar13;
  
  UPlayer::UPlayer();
  *param_1 = &PTR_FUN_14511c578;
  param_1[5] = &PTR_LAB_14511c8f0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar11 = UPackageMapClient::GetPrivateStaticClass();
  param_1[0xc] = uVar11;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) & 0xfffffffe;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  FURL::FURL(param_1 + 0x15,0);
  param_1[0x25] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2b] = &PTR_FUN_143f740c8;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x42] = 0;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  param_1[0x45] = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  param_1[0x47] = 0;
  *(undefined2 *)(param_1 + 0x48) = 0;
  param_1[0x49] = 0;
  FOutBunch::FOutBunch(param_1 + 0x4a);
  FUN_1416884c0(param_1 + 0x6c,0x40,0);
  *(undefined4 *)(param_1 + 0x84) = 0x3f800000;
  param_1[0x86] = 0x40c3878000000000;
  param_1[0x87] = 0x40c3878000000000;
  *(undefined4 *)((longlong)param_1 + 0x424) = 0x461c3c00;
  *(undefined4 *)(param_1 + 0x85) = 0x461c3c00;
  *(undefined4 *)(param_1 + 0x88) = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  *(undefined4 *)(param_1 + 0x93) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4a4) = 0;
  FUN_1416884c0(param_1 + 0x96,0,0);
  *(undefined4 *)((longlong)param_1 + 0x156c) = 0xffffffff;
  plVar1 = param_1 + 0x2b0;
  *(undefined4 *)(param_1 + 0x2ae) = 0;
  plVar2 = param_1 + 0x2b2;
  *(undefined4 *)((longlong)param_1 + 0x1574) = 0xffffffff;
  plVar3 = param_1 + 0x2b4;
  *(undefined1 *)(param_1 + 0x2af) = 0;
  plVar4 = param_1 + 0x2b6;
  *plVar1 = 0;
  param_1[0x2b1] = 0;
  *plVar2 = 0;
  param_1[0x2b3] = 0;
  *plVar3 = 0;
  param_1[0x2b5] = 0;
  *plVar4 = 0;
  param_1[0x2b7] = 0;
  param_1[0x2b8] = 0;
  param_1[0x2b9] = 0;
  param_1[0x2ba] = 0;
  param_1[699] = 0;
  param_1[700] = 0;
  uVar8 = FUN_1416722f0();
  *(undefined4 *)(param_1 + 0x2bd) = uVar8;
  uVar8 = FUN_141672630();
  *(undefined4 *)((longlong)param_1 + 0x15ec) = uVar8;
  param_1[0x2c0] = 0;
  param_1[0x2c1] = 0;
  param_1[0x2c4] = 0;
  param_1[0x2c5] = 0;
  *(undefined4 *)(param_1 + 0x2c6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1634) = 0;
  param_1[0x2c8] = 0;
  *(undefined4 *)(param_1 + 0x2c9) = 0;
  param_1[0x2cb] = 0;
  param_1[0x2cc] = 0;
  param_1[0x2cf] = 0;
  param_1[0x2d0] = 0;
  *(undefined4 *)(param_1 + 0x2d1) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x168c) = 0;
  param_1[0x2d3] = 0;
  *(undefined4 *)(param_1 + 0x2d4) = 0;
  param_1[0x2d5] = 0;
  param_1[0x2d6] = 0;
  param_1[0x2d9] = 0;
  param_1[0x2da] = 0;
  *(undefined4 *)(param_1 + 0x2db) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x16dc) = 0;
  param_1[0x2dd] = 0;
  *(undefined4 *)(param_1 + 0x2de) = 0;
  param_1[0x2df] = 0;
  param_1[0x2e0] = 0;
  param_1[0x2e3] = 0;
  param_1[0x2e4] = 0;
  *(undefined4 *)(param_1 + 0x2e5) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x172c) = 0;
  param_1[0x2e7] = 0;
  *(undefined4 *)(param_1 + 0x2e8) = 0;
  param_1[0x2e9] = 0;
  param_1[0x2ea] = 0;
  param_1[0x2ed] = 0;
  param_1[0x2ee] = 0;
  *(undefined4 *)(param_1 + 0x2ef) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x177c) = 0;
  param_1[0x2f1] = 0;
  *(undefined4 *)(param_1 + 0x2f2) = 0;
  param_1[0x2f3] = 0;
  param_1[0x2f4] = 0;
  param_1[0x2f7] = 0;
  param_1[0x2f8] = 0;
  *(undefined4 *)(param_1 + 0x2f9) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x17cc) = 0;
  param_1[0x2fb] = 0;
  *(undefined4 *)(param_1 + 0x2fc) = 0;
  *(undefined1 *)(param_1 + 0x2fd) = 0;
  param_1[0x2fe] = 0;
  param_1[0x2ff] = 0;
  param_1[0x300] = 0;
  param_1[0x301] = 0;
  param_1[0x306] = 0;
  param_1[0x307] = 0;
  param_1[0x308] = 0;
  param_1[0x30b] = 0;
  param_1[0x30c] = 0;
  *(undefined4 *)(param_1 + 0x30d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x186c) = 0;
  param_1[0x30f] = 0;
  *(undefined4 *)(param_1 + 0x310) = 0;
  param_1[0x311] = 0;
  param_1[0x312] = 0;
  param_1[0x313] = 0;
  param_1[0x316] = 0;
  param_1[0x317] = 0;
  *(undefined4 *)(param_1 + 0x318) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x18c4) = 0;
  param_1[0x31a] = 0;
  *(undefined4 *)(param_1 + 0x31b) = 0;
  param_1[0x31c] = 0;
  param_1[0x31d] = 0;
  param_1[800] = 0;
  param_1[0x321] = 0;
  *(undefined4 *)(param_1 + 0x322) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1914) = 0;
  param_1[0x324] = 0;
  *(undefined4 *)(param_1 + 0x325) = 0;
  param_1[0x328] = 0;
  param_1[0x329] = 0;
  param_1[0x32a] = 0;
  param_1[0x32b] = 0;
  param_1[0x32c] = 0;
  param_1[0x32d] = 0;
  lVar6 = DAT_146aff4b8;
  cVar7 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar7 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar9 = GetCurrentThreadId();
    lVar12 = 4;
    if (DVar9 != DAT_1468c21c0) goto LAB_1425ae14f;
  }
  lVar12 = 0;
LAB_1425ae14f:
  iVar13 = *(int *)(lVar12 + lVar6);
  *(int *)((longlong)param_1 + 0x157c) = iVar13;
  if (iVar13 < 1) {
    iVar13 = 0x7fff;
    *(undefined4 *)((longlong)param_1 + 0x157c) = 0x7fff;
  }
  if ((*(byte *)(param_1 + 1) & 0x30) == 0) {
    iVar5 = *(int *)(param_1 + 0x2b1);
    iVar10 = iVar13 + iVar5;
    *(int *)(param_1 + 0x2b1) = iVar10;
    if (*(int *)((longlong)param_1 + 0x158c) < iVar10) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
    }
    _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar5 * 8),0,(longlong)iVar13 << 3);
    iVar13 = *(int *)((longlong)param_1 + 0x157c);
    iVar5 = *(int *)(param_1 + 0x2b3);
    iVar10 = iVar13 + iVar5;
    *(int *)(param_1 + 0x2b3) = iVar10;
    if (*(int *)((longlong)param_1 + 0x159c) < iVar10) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar2);
    }
    _guard_xfg_dispatch_icall_nop((void *)(*plVar2 + (longlong)iVar5 * 4),0,(longlong)iVar13 << 2);
    iVar13 = *(int *)((longlong)param_1 + 0x157c);
    iVar5 = *(int *)(param_1 + 0x2b5);
    iVar10 = iVar13 + iVar5;
    *(int *)(param_1 + 0x2b5) = iVar10;
    if (*(int *)((longlong)param_1 + 0x15ac) < iVar10) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar3);
    }
    _guard_xfg_dispatch_icall_nop((void *)(*plVar3 + (longlong)iVar5 * 4),0,(longlong)iVar13 << 2);
    iVar13 = *(int *)((longlong)param_1 + 0x157c);
    iVar5 = *(int *)(param_1 + 0x2b7);
    iVar10 = iVar13 + iVar5;
    *(int *)(param_1 + 0x2b7) = iVar10;
    if (*(int *)((longlong)param_1 + 0x15bc) < iVar10) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar4);
    }
    _guard_xfg_dispatch_icall_nop((void *)(*plVar4 + (longlong)iVar5 * 4),0,(longlong)iVar13 << 2);
  }
  *(undefined1 *)((longlong)param_1 + 0x1931) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1934) = 0;
  *(undefined4 *)((longlong)param_1 + 0x193c) = 0;
  return param_1;
}



// FUNCTION 1425ae280 FUN_1425ae280 body=1240 status=ok
// SIG undefined FUN_1425ae280(void)

undefined8 * FUN_1425ae280(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  FUN_141781840();
  puVar2 = (undefined8 *)0x0;
  *param_1 = &PTR__scalar_deleting_destructor__14511b4f8;
  param_1[5] = &PTR_LAB_14511b900;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xc) = 10000;
  *(undefined4 *)((longlong)param_1 + 100) = 15000;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x24] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x182) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x1ec) = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined1 *)((longlong)param_1 + 0x21c) = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x334) = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x71) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x38c) = 0;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3dc) = 0;
  param_1[0x7d] = 0;
  *(undefined4 *)(param_1 + 0x7e) = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x85) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x42c) = 0;
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x484) = 0;
  param_1[0x92] = 0;
  *(undefined4 *)(param_1 + 0x93) = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4d4) = 0;
  param_1[0x9c] = 0;
  *(undefined4 *)(param_1 + 0x9d) = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  *(undefined4 *)(param_1 + 0xa1) = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  puVar1 = (undefined8 *)operator_new(0x140);
  puVar4 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x84) = 0;
    puVar1[0x12] = 0;
    *(undefined4 *)(puVar1 + 0x13) = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0xd4) = 0;
    puVar1[0x1c] = 0;
    *(undefined4 *)(puVar1 + 0x1d) = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x22] = 0;
    puVar1[0x23] = 0;
    *(undefined4 *)(puVar1 + 0x24) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x124) = 0;
    puVar1[0x26] = 0;
    *(undefined4 *)(puVar1 + 0x27) = 0;
    puVar4 = puVar1;
  }
  param_1[0xa5] = puVar4;
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_LAB_14511d178;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar4;
    puVar2 = puVar1;
  }
  param_1[0xa6] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_1 + 0xa5,puVar4,puVar4);
  *(undefined4 *)(param_1 + 0xa7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x53c) = 0xffffffff;
  uVar3 = UControlChannel::GetPrivateStaticClass();
  param_1[0x26] = uVar3;
  uVar3 = FUN_1428e6c20();
  param_1[0x27] = uVar3;
  uVar3 = UVoiceChannel::GetPrivateStaticClass();
  param_1[0x29] = uVar3;
  return param_1;
}



// FUNCTION 1425ae760 FUN_1425ae760 body=33 status=ok
// SIG undefined FUN_1425ae760(void)

undefined8 * FUN_1425ae760(undefined8 *param_1)

{
  FUN_1417818c0();
  *param_1 = &PTR_FUN_14511ba30;
  return param_1;
}



// FUNCTION 1425ae790 USimulatedClientNetConnection body=51 status=ok
// SIG undefined USimulatedClientNetConnection(void)

undefined8 * USimulatedClientNetConnection::USimulatedClientNetConnection(undefined8 *param_1)

{
  FUN_1425adbf0();
  *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) | 1;
  *param_1 = &PTR_FUN_14511c9e8;
  param_1[5] = &PTR_LAB_14511c8f0;
  return param_1;
}



// FUNCTION 1425ae7d0 ~TArray<FModelSceneProxy::FElementInfo,FDefaultAllocator> body=125 status=ok
// SIG undefined ~TArray<FModelSceneProxy::FElementInfo,FDefaultAllocator>(void)

void TArray<FModelSceneProxy::FElementInfo,FDefaultAllocator>::
     ~TArray<FModelSceneProxy::FElementInfo,FDefaultAllocator>(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      if (puVar1[6] != 0) {
        FMemory::Free();
      }
      *puVar1 = &PTR__scalar_deleting_destructor__144eefa68;
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar1 + 4);
      puVar1 = puVar1 + 0xc;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar1 = (undefined8 *)*param_1;
  }
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  FMemory::Free(puVar1);
  return;
}



// FUNCTION 1425ae850 ~TArray<FHandleToCmdIndex,FDefaultAllocator> body=128 status=ok
// SIG undefined ~TArray<FHandleToCmdIndex,FDefaultAllocator>(void)

void TArray<FHandleToCmdIndex,FDefaultAllocator>::~TArray<FHandleToCmdIndex,FDefaultAllocator>
               (longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 8);
    do {
      lVar1 = *plVar2;
      if (lVar1 != 0) {
        ~TArray<FHandleToCmdIndex,FDefaultAllocator>(lVar1);
        FMemory::operator_delete(lVar1,0x10);
      }
      plVar2 = plVar2 + 2;
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



// FUNCTION 1425ae8d0 ~TIndirectArray<FModelElement,FDefaultAllocator> body=109 status=ok
// SIG undefined ~TIndirectArray<FModelElement,FDefaultAllocator>(void)

void TIndirectArray<FModelElement,FDefaultAllocator>::
     ~TIndirectArray<FModelElement,FDefaultAllocator>(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  for (iVar2 = (int)param_1[1]; iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_14235f4c0(*puVar1);
    FMemory::Free(*puVar1);
    puVar1 = puVar1 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1425ae940 ~TSparseArray<TSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=403 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  uint *puVar8;
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
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar3 = *puVar8;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar6 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar7 = local_58 + 1;
      bVar5 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar7;
      if (bVar5) goto LAB_1425aea01;
      uVar3 = puVar8[lVar6 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
    iVar7 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_44 = (iStack_40 - iVar7) + 0x1f;
    if (iVar2 < iStack_44) {
LAB_1425aea01:
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
      puVar4 = *(undefined8 **)(*param_1 + 8 + (longlong)iStack_1c * 0x18);
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
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
  }
  return;
}



// FUNCTION 1425aeae0 FUN_1425aeae0 body=100 status=ok
// SIG undefined FUN_1425aeae0(void)

void FUN_1425aeae0(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
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



// FUNCTION 1425aeb50 operator= body=502 status=ok
// SIG undefined operator=(void)

longlong *
TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>::operator=
          (longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  uint local_48;
  undefined4 uStack_44;
  longlong *local_40;
  uint uStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  if (param_1 != param_2) {
    uVar7 = 0;
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != iVar9) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1,iVar9);
    }
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    uVar3 = iVar9 + 0x1f + (iVar9 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
    if (*(uint *)((longlong)param_1 + 0x2c) != uVar3) {
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
    }
    cVar2 = TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::ConditionalRehash
                      (param_1,iVar9,1);
    if ((cVar2 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
      uVar10 = (ulonglong)*(uint *)(param_1 + 9);
      uVar8 = uVar7;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = param_1 + 7;
        }
        uVar5 = (longlong)(int)param_1[9] - 1U & uVar8;
        uVar8 = uVar8 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar5 * 4) = 0xffffffff;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    iVar9 = (int)param_2[5];
    puStack_30 = (uint *)(param_2 + 2);
    local_68 = 0;
    uStack_64 = 1;
    local_58._4_4_ = 0;
    uStack_50 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_30;
      }
      uVar3 = *puVar11;
      uVar8 = uVar7;
      while (uVar3 == 0) {
        iVar4 = (int)uVar8;
        uStack_50 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_50;
        local_68 = iVar4 + 1;
        uVar8 = (ulonglong)local_68;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1425aecab;
        uVar3 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_64 = -uVar3 & uVar3;
      iVar4 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_58._4_4_ = (uStack_50 - iVar4) + 0x1f;
      if (iVar9 < local_58._4_4_) {
LAB_1425aecab:
        local_58._4_4_ = iVar9;
      }
    }
    uStack_38 = local_68;
    uStack_34 = uStack_64;
    uStack_28 = 0xffffffff;
    iStack_24 = local_58._4_4_;
    uStack_20 = uStack_50;
    uStack_1c = iStack_4c;
    uStack_60 = local_68;
    uStack_5c = uStack_64;
    local_48 = uStack_50;
    uStack_44 = iStack_4c;
    uStack_50 = 0xffffffff;
    iStack_4c = local_58._4_4_;
    bVar1 = local_58._4_4_ < iVar9;
    local_40 = param_2;
    local_58 = puStack_30;
    if (bVar1) {
      do {
        Emplace<FObjectReplicator_*_const_&>
                  (param_1,local_res8,(longlong)iStack_4c * 0x10 + *param_2,0);
        uStack_50 = uStack_50 & ~uStack_5c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
      } while (iStack_4c < (int)local_58[6]);
    }
  }
  return param_1;
}



// FUNCTION 1425aed50 operator= body=431 status=ok
// SIG undefined operator=(void)

longlong * FURL::operator=(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  plVar1 = param_2 + 2;
  plVar2 = param_1 + 2;
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
  }
  plVar1 = param_2 + 5;
  plVar2 = param_1 + 5;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0;
  }
  plVar1 = param_2 + 7;
  plVar2 = param_1 + 7;
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 8) = (int)param_2[8];
    *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
    param_2[8] = 0;
  }
  plVar1 = param_2 + 9;
  plVar2 = param_1 + 9;
  if (plVar2 != plVar1) {
    plVar4 = (longlong *)*plVar2;
    iVar3 = (int)param_1[10];
    if (iVar3 != 0) {
      do {
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 2;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      plVar4 = (longlong *)*plVar2;
    }
    if (plVar4 != (longlong *)0x0) {
      FMemory::Free(plVar4);
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 10) = (int)param_2[10];
    *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
    param_2[10] = 0;
  }
  plVar1 = param_2 + 0xb;
  plVar2 = param_1 + 0xb;
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 0xc) = (int)param_2[0xc];
    *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
    param_2[0xc] = 0;
  }
  *(int *)(param_1 + 0xd) = (int)param_2[0xd];
  return param_1;
}



// FUNCTION 1425aef00 FUN_1425aef00 body=593 status=ok
// SIG undefined FUN_1425aef00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1425aef00(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined8 *local_res18;
  undefined1 local_res20 [8];
  undefined8 local_38;
  undefined8 **local_30;
  
  if ((*(byte *)(param_1 + 5) & 2) == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      local_res10 = 0;
      (**(code **)(*param_1 + 0x40))(param_1,&local_res10);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146aff650) &&
         (_Init_thread_header(&DAT_146aff650), DAT_146aff650 == -1)) {
        DAT_146534250 = 0;
        _DAT_146534258 = 0;
        _DAT_146534270 = 0;
        _DAT_146534278 = 0;
        _DAT_146534280 = 0xffffffff;
        DAT_146534284 = 0;
        DAT_146534290 = (undefined *)0x0;
        DAT_146534298 = 0;
        atexit(FUN_143eb47a0);
        _Init_thread_footer(&DAT_146aff650);
      }
      if (DAT_146aff648 != (longlong *)0x0) {
        local_30 = &local_res18;
        plVar6 = DAT_146aff648;
        do {
          local_res18 = (undefined8 *)plVar6[2];
          plVar2 = (longlong *)*plVar6;
          local_38 = FName::FName(local_res20,*local_res18,1);
          TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
                    (&DAT_146534250,local_res8,&local_38,0);
          if (*plVar6 != 0) {
            *(longlong *)(*plVar6 + 8) = plVar6[1];
          }
          if ((longlong *)plVar6[1] != (longlong *)0x0) {
            *(longlong *)plVar6[1] = *plVar6;
          }
          *plVar6 = 0;
          plVar6[1] = 0;
          FMemory::operator_delete(plVar6,0x18);
          plVar6 = plVar2;
        } while (plVar2 != (longlong *)0x0);
      }
      lVar7 = 0;
      if (DAT_146534258 != DAT_146534284) {
        puVar4 = DAT_146534290;
        if (DAT_146534290 == (undefined *)0x0) {
          puVar4 = &DAT_146534288;
        }
        iVar1 = *(int *)(puVar4 + ((longlong)
                                   ((int)((ulonglong)local_res10 >> 0x20) + (int)local_res10) &
                                  (longlong)DAT_146534298 - 1U) * 4);
        while (iVar1 != -1) {
          lVar8 = (longlong)iVar1;
          if (*(longlong *)(DAT_146534250 + lVar8 * 0x18) == local_res10) {
            lVar7 = 0;
            if ((iVar1 != -1) && (lVar8 = DAT_146534250 + lVar8 * 0x18, lVar8 != 0)) {
              lVar7 = *(longlong *)(lVar8 + 8);
            }
            break;
          }
          iVar1 = *(int *)(DAT_146534250 + 0x10 + lVar8 * 0x18);
        }
      }
      uVar5 = (**(code **)(lVar7 + 8))();
      *param_2 = uVar5;
    }
  }
  else {
    puVar3 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 8))();
    FName::FName(local_res8,*puVar3,1);
    (**(code **)(*param_1 + 0x40))(param_1,local_res8);
  }
  (**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,param_1);
  return param_1;
}



// FUNCTION 1425af160 FUN_1425af160 body=1175 status=ok
// SIG undefined FUN_1425af160(void)

longlong * FUN_1425af160(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined1 *puVar3;
  
  FUN_1423c5520();
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x10,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x10,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x14,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x14,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x14) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x18,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x18,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x18) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x1c,2);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x1c,2);
    }
  }
  else {
    *(undefined2 *)(param_2 + 0x1c) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar2 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x1e,2);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x1e,2);
    }
  }
  else {
    *(undefined2 *)(param_2 + 0x1e) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x20,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x20,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x20) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x24,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x24,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x24) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x28,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x28,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x28) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x2c,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x2c,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x2c) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x30,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x30,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x30) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar3 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x34,1);
  }
  else {
    *(undefined1 *)(param_2 + 0x34) = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar3 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x35,1);
  }
  else {
    *(undefined1 *)(param_2 + 0x35) = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar3 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x36,1);
  }
  else {
    *(undefined1 *)(param_2 + 0x36) = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar3 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x37,1);
  }
  else {
    *(undefined1 *)(param_2 + 0x37) = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x38,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x38,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x38) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x3c,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x3c,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x3c) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    *(byte *)(param_2 + 0x37) = *(byte *)(param_2 + 0x37) & 0x1f;
  }
  return param_1;
}



// FUNCTION 1425af600 FUN_1425af600 body=688 status=ok
// SIG undefined FUN_1425af600(void)

longlong * FUN_1425af600(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  
  (**(code **)(*param_1 + 0x30))();
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 8,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 8) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0xc,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0xc,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0xc) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x10,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x10,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x14,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x14,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x14) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x18,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x18,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x18) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x1c,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x1c,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x1c) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  (**(code **)(*param_1 + 0x30))(param_1,param_2 + 0x20);
  FUN_1423c5520(param_1,param_2 + 0x30);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x40,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x40,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x40) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
    *(undefined4 *)(param_2 + 0x44) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x44,4);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2 + 0x44,4);
  }
  return param_1;
}



// FUNCTION 1425af8b0 operator<< body=83 status=ok
// SIG undefined operator<<(void)

undefined8 operator<<(undefined8 param_1,longlong param_2)

{
  FUN_1406da970();
  FUN_140871cc0(param_1,param_2 + 0xc);
  FUN_140871cc0(param_1,param_2 + 0x10);
  FUN_140d66f10(param_1,param_2 + 0x14);
  FUN_140d66f10(param_1,param_2 + 0x1c);
  return param_1;
}



// FUNCTION 1425af910 FUN_1425af910 body=560 status=ok
// SIG undefined FUN_1425af910(void)

longlong * FUN_1425af910(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [14];
  unkbyte10 Var7;
  undefined1 auVar8 [12];
  undefined1 auVar9 [14];
  undefined1 auVar10 [12];
  int iVar11;
  undefined2 uVar42;
  undefined1 auVar21 [16];
  undefined2 uVar43;
  undefined1 auVar33 [16];
  undefined1 unaff_XMM6_Ba;
  undefined1 unaff_XMM6_Bb;
  undefined1 uVar36;
  undefined1 unaff_XMM6_Bc;
  undefined1 uVar37;
  undefined1 unaff_XMM6_Bd;
  undefined1 uVar38;
  undefined1 unaff_XMM6_Be;
  undefined1 unaff_XMM6_Bf;
  undefined1 uVar39;
  undefined1 unaff_XMM6_Bg;
  undefined1 uVar40;
  undefined1 unaff_XMM6_Bh;
  undefined1 uVar41;
  uint local_res8 [2];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar12 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar24 [16];
  
  FUN_1406da970();
  iVar11 = FArchive::CustomVer(param_1,&DAT_1464b00e8);
  if (iVar11 < 0x1a) {
    FUN_140871cc0(param_1,local_res8);
    uVar4 = CONCAT13(unaff_XMM6_Bd,CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ^
            CONCAT13(unaff_XMM6_Bd,CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba)));
    uVar36 = (undefined1)(uVar4 >> 8);
    uVar37 = (undefined1)(uVar4 >> 0x10);
    uVar38 = (undefined1)(uVar4 >> 0x18);
    uVar5 = CONCAT13(unaff_XMM6_Bh,CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ^
            CONCAT13(unaff_XMM6_Bh,CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be)));
    uVar39 = (undefined1)(uVar5 >> 8);
    uVar40 = (undefined1)(uVar5 >> 0x10);
    uVar41 = (undefined1)(uVar5 >> 0x18);
    auVar20._0_15_ = ZEXT415(local_res8[0]);
    auVar20[0xf] = uVar41;
    auVar19._14_2_ = auVar20._14_2_;
    auVar19._0_13_ = ZEXT413(local_res8[0]);
    auVar19[0xd] = uVar40;
    auVar18._13_3_ = auVar19._13_3_;
    auVar18._0_13_ = ZEXT413(local_res8[0]);
    auVar17._12_4_ = auVar18._12_4_;
    auVar17._4_7_ = 0;
    auVar17._0_4_ = local_res8[0];
    auVar17[0xb] = uVar39;
    auVar16._11_5_ = auVar17._11_5_;
    auVar16._4_7_ = 0;
    auVar16._0_4_ = local_res8[0];
    auVar15._10_6_ = auVar16._10_6_;
    auVar15._4_5_ = 0;
    auVar15._0_4_ = local_res8[0];
    auVar15[9] = (char)uVar5;
    auVar14._9_7_ = auVar15._9_7_;
    auVar14._4_5_ = 0;
    auVar14._0_4_ = local_res8[0];
    Var7 = CONCAT91(CONCAT81(auVar14._8_8_,uVar38),(char)(local_res8[0] >> 0x18));
    auVar13._6_10_ = Var7;
    auVar13[5] = uVar37;
    auVar13[4] = (char)(local_res8[0] >> 0x10);
    auVar13._0_4_ = local_res8[0];
    auVar6._2_12_ = auVar13._4_12_;
    auVar6[1] = uVar36;
    auVar6[0] = (char)(local_res8[0] >> 8);
    uVar42 = CONCAT11((char)uVar4,(char)local_res8[0]);
    auVar12._2_14_ = auVar6;
    uVar3 = (undefined2)(uVar5 >> 0x10);
    auVar23._0_12_ = auVar12._0_12_;
    auVar23._12_2_ = (short)Var7;
    auVar23._14_2_ = uVar3;
    auVar22._12_4_ = auVar23._12_4_;
    auVar22._0_10_ = auVar12._0_10_;
    auVar22._10_2_ = (short)uVar5;
    auVar21._10_6_ = auVar22._10_6_;
    auVar21._0_8_ = auVar12._0_8_;
    auVar21._8_2_ = auVar13._4_2_;
    uVar2 = (undefined2)(uVar4 >> 0x10);
    auVar8._4_8_ = auVar21._8_8_;
    auVar8._2_2_ = uVar2;
    auVar8._0_2_ = auVar6._0_2_;
    *(ulonglong *)(param_2 + 0xc) =
         CONCAT44((float)auVar8._0_4_ * 0.007843138 + -1.0,
                  (float)CONCAT22((short)uVar4,uVar42) * 0.007843138 + -1.0);
    *(float *)(param_2 + 0x14) = (float)auVar21._8_4_ * 0.007843138 + -1.0;
    FUN_140871cc0(param_1,local_res8);
    auVar32._0_15_ = ZEXT415(local_res8[0]);
    auVar32[0xf] = uVar41;
    auVar31._14_2_ = auVar32._14_2_;
    auVar31._0_13_ = ZEXT413(local_res8[0]);
    auVar31[0xd] = uVar40;
    auVar30._13_3_ = auVar31._13_3_;
    auVar30._0_13_ = ZEXT413(local_res8[0]);
    auVar29._12_4_ = auVar30._12_4_;
    auVar29._4_7_ = 0;
    auVar29._0_4_ = local_res8[0];
    auVar29[0xb] = uVar39;
    auVar28._11_5_ = auVar29._11_5_;
    auVar28._4_7_ = 0;
    auVar28._0_4_ = local_res8[0];
    auVar27._10_6_ = auVar28._10_6_;
    auVar27._4_5_ = 0;
    auVar27._0_4_ = local_res8[0];
    auVar27[9] = (char)uVar5;
    auVar26._9_7_ = auVar27._9_7_;
    auVar26._4_5_ = 0;
    auVar26._0_4_ = local_res8[0];
    Var7 = CONCAT91(CONCAT81(auVar26._8_8_,uVar38),(char)(local_res8[0] >> 0x18));
    auVar25._6_10_ = Var7;
    auVar25[5] = uVar37;
    auVar25[4] = (char)(local_res8[0] >> 0x10);
    auVar25._0_4_ = local_res8[0];
    auVar9._2_12_ = auVar25._4_12_;
    auVar9[1] = uVar36;
    auVar9[0] = (char)(local_res8[0] >> 8);
    uVar43 = CONCAT11((char)uVar4,(char)local_res8[0]);
    auVar24._2_14_ = auVar9;
    auVar35._0_12_ = auVar24._0_12_;
    auVar35._12_2_ = (short)Var7;
    auVar35._14_2_ = uVar3;
    auVar34._12_4_ = auVar35._12_4_;
    auVar34._0_10_ = auVar24._0_10_;
    auVar34._10_2_ = (short)uVar5;
    auVar33._10_6_ = auVar34._10_6_;
    auVar33._0_8_ = auVar24._0_8_;
    auVar33._8_2_ = auVar25._4_2_;
    auVar10._4_8_ = auVar33._8_8_;
    auVar10._2_2_ = uVar2;
    auVar10._0_2_ = auVar9._0_2_;
    *(float *)(param_2 + 0x20) = (float)CONCAT22((short)uVar4,uVar43) * 0.007843138 + -1.0;
    *(float *)(param_2 + 0x24) = (float)auVar10._0_4_ * 0.007843138 + -1.0;
    *(float *)(param_2 + 0x28) = (float)auVar33._8_4_ * 0.007843138 + -1.0;
    *(float *)(param_2 + 0x2c) = (float)auVar34._12_4_ * 0.007843138 + -1.0;
  }
  else {
    FUN_1406da970(param_1,param_2 + 0xc);
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x20,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,param_2 + 0x20,4);
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x20) = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x24,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,param_2 + 0x24,4);
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x24) = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x28,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,param_2 + 0x28,4);
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x28) = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x2c,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,param_2 + 0x2c,4);
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x2c) = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
  }
  FUN_140d66f10(param_1,param_2 + 0x30);
  FUN_140d66f10(param_1,param_2 + 0x38);
  return param_1;
}



// FUNCTION 1425afb40 FUN_1425afb40 body=340 status=ok
// SIG undefined FUN_1425afb40(void)

longlong FUN_1425afb40(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [14];
  unkbyte10 Var5;
  undefined1 auVar6 [12];
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 extraout_XMM0_Ba;
  undefined1 extraout_XMM0_Ba_00;
  undefined1 extraout_XMM0_Ba_01;
  undefined1 uVar9;
  undefined1 extraout_XMM0_Bb;
  undefined1 extraout_XMM0_Bb_00;
  undefined1 extraout_XMM0_Bb_01;
  undefined1 uVar10;
  undefined1 extraout_XMM0_Bc;
  undefined1 extraout_XMM0_Bc_00;
  undefined1 extraout_XMM0_Bc_01;
  undefined1 uVar11;
  undefined1 extraout_XMM0_Bd;
  undefined1 extraout_XMM0_Bd_00;
  undefined1 extraout_XMM0_Bd_01;
  undefined1 uVar12;
  undefined1 extraout_XMM0_Be;
  undefined1 extraout_XMM0_Be_00;
  undefined1 extraout_XMM0_Be_01;
  undefined1 uVar13;
  undefined1 extraout_XMM0_Bf;
  undefined1 extraout_XMM0_Bf_00;
  undefined1 extraout_XMM0_Bf_01;
  undefined1 uVar14;
  undefined1 extraout_XMM0_Bg;
  undefined1 extraout_XMM0_Bg_00;
  undefined1 extraout_XMM0_Bg_01;
  undefined1 uVar15;
  undefined1 extraout_XMM0_Bh;
  undefined1 extraout_XMM0_Bh_00;
  undefined1 extraout_XMM0_Bh_01;
  undefined1 uVar16;
  undefined2 uVar30;
  undefined1 auVar26 [16];
  float fVar29;
  uint local_res8 [2];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar17 [16];
  
  if ((*(int *)(param_1 + 0x40) < 0x15c) && ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
    uVar7 = FUN_1406da970();
    plVar8 = (longlong *)FUN_140871cc0(uVar7,local_res8);
    puVar1 = *(undefined4 **)plVar8[1];
    if ((undefined4 *)((undefined8 *)plVar8[1])[1] < puVar1 + 1) {
      (**(code **)(*plVar8 + 0x50))(plVar8,param_2 + 0x18,4);
      uVar9 = extraout_XMM0_Ba_00;
      uVar10 = extraout_XMM0_Bb_00;
      uVar11 = extraout_XMM0_Bc_00;
      uVar12 = extraout_XMM0_Bd_00;
      uVar13 = extraout_XMM0_Be_00;
      uVar14 = extraout_XMM0_Bf_00;
      uVar15 = extraout_XMM0_Bg_00;
      uVar16 = extraout_XMM0_Bh_00;
      if ((*(byte *)((longlong)plVar8 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(plVar8,param_2 + 0x18,4);
        uVar9 = extraout_XMM0_Ba_01;
        uVar10 = extraout_XMM0_Bb_01;
        uVar11 = extraout_XMM0_Bc_01;
        uVar12 = extraout_XMM0_Bd_01;
        uVar13 = extraout_XMM0_Be_01;
        uVar14 = extraout_XMM0_Bf_01;
        uVar15 = extraout_XMM0_Bg_01;
        uVar16 = extraout_XMM0_Bh_01;
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x18) = *puVar1;
      *(longlong *)plVar8[1] = *(longlong *)plVar8[1] + 4;
      uVar9 = extraout_XMM0_Ba;
      uVar10 = extraout_XMM0_Bb;
      uVar11 = extraout_XMM0_Bc;
      uVar12 = extraout_XMM0_Bd;
      uVar13 = extraout_XMM0_Be;
      uVar14 = extraout_XMM0_Bf;
      uVar15 = extraout_XMM0_Bg;
      uVar16 = extraout_XMM0_Bh;
    }
    uVar2 = CONCAT13(uVar12,CONCAT12(uVar11,CONCAT11(uVar10,uVar9))) ^
            CONCAT13(uVar12,CONCAT12(uVar11,CONCAT11(uVar10,uVar9)));
    uVar3 = CONCAT13(uVar16,CONCAT12(uVar15,CONCAT11(uVar14,uVar13))) ^
            CONCAT13(uVar16,CONCAT12(uVar15,CONCAT11(uVar14,uVar13)));
    auVar25._0_15_ = ZEXT415(local_res8[0]);
    auVar25[0xf] = (char)(uVar3 >> 0x18);
    auVar24._14_2_ = auVar25._14_2_;
    auVar24._0_13_ = ZEXT413(local_res8[0]);
    auVar24[0xd] = (char)(uVar3 >> 0x10);
    auVar23._13_3_ = auVar24._13_3_;
    auVar23._0_13_ = ZEXT413(local_res8[0]);
    auVar22._12_4_ = auVar23._12_4_;
    auVar22._4_7_ = 0;
    auVar22._0_4_ = local_res8[0];
    auVar22[0xb] = (char)(uVar3 >> 8);
    auVar21._11_5_ = auVar22._11_5_;
    auVar21._4_7_ = 0;
    auVar21._0_4_ = local_res8[0];
    auVar20._10_6_ = auVar21._10_6_;
    auVar20._4_5_ = 0;
    auVar20._0_4_ = local_res8[0];
    auVar20[9] = (char)uVar3;
    auVar19._9_7_ = auVar20._9_7_;
    auVar19._4_5_ = 0;
    auVar19._0_4_ = local_res8[0];
    Var5 = CONCAT91(CONCAT81(auVar19._8_8_,(char)(uVar2 >> 0x18)),(char)(local_res8[0] >> 0x18));
    auVar18._6_10_ = Var5;
    auVar18[5] = (char)(uVar2 >> 0x10);
    auVar18[4] = (char)(local_res8[0] >> 0x10);
    auVar18._0_4_ = local_res8[0];
    auVar4._2_12_ = auVar18._4_12_;
    auVar4[1] = (char)(uVar2 >> 8);
    auVar4[0] = (char)(local_res8[0] >> 8);
    uVar30 = CONCAT11((char)uVar2,(char)local_res8[0]);
    auVar17._2_14_ = auVar4;
    auVar28._0_12_ = auVar17._0_12_;
    auVar28._12_2_ = (short)Var5;
    auVar28._14_2_ = (short)(uVar3 >> 0x10);
    auVar27._12_4_ = auVar28._12_4_;
    auVar27._0_10_ = auVar17._0_10_;
    auVar27._10_2_ = (short)uVar3;
    auVar26._10_6_ = auVar27._10_6_;
    auVar26._0_8_ = auVar17._0_8_;
    auVar26._8_2_ = auVar18._4_2_;
    auVar6._4_8_ = auVar26._8_8_;
    auVar6._2_2_ = (short)(uVar2 >> 0x10);
    auVar6._0_2_ = auVar4._0_2_;
    fVar29 = (float)auVar6._0_4_ * 0.007843138 + -1.0;
    *(ulonglong *)(param_2 + 0xc) =
         CONCAT17((char)((uint)fVar29 >> 0x18),
                  CONCAT16((char)((uint)fVar29 >> 0x10),
                           CONCAT15((char)((uint)fVar29 >> 8),
                                    CONCAT14(SUB41(fVar29,0),
                                             (float)CONCAT22((short)uVar2,uVar30) * 0.007843138 +
                                             -1.0))));
    *(float *)(param_2 + 0x14) = (float)auVar26._8_4_ * 0.007843138 + -1.0;
  }
  else {
    uVar7 = FUN_1406da970();
    plVar8 = (longlong *)FUN_1406da970(uVar7,param_2 + 0xc);
    puVar1 = *(undefined4 **)plVar8[1];
    if ((undefined4 *)((undefined8 *)plVar8[1])[1] < puVar1 + 1) {
      (**(code **)(*plVar8 + 0x50))(plVar8,param_2 + 0x18,4);
      if ((*(byte *)((longlong)plVar8 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(plVar8,param_2 + 0x18,4);
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x18) = *puVar1;
      *(longlong *)plVar8[1] = *(longlong *)plVar8[1] + 4;
    }
  }
  return param_1;
}



// FUNCTION 1425afca0 FUN_1425afca0 body=462 status=ok
// SIG undefined FUN_1425afca0(void)

longlong FUN_1425afca0(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong *plVar3;
  
  FArchive::UsingCustomVersion(param_1,&DAT_1464b0068);
  FArchive::UsingCustomVersion(param_1,&DAT_1464b0148);
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    iVar2 = FArchive::CustomVer(param_1,&DAT_1464b0068);
    if (iVar2 < 0x17) {
      plVar3 = (longlong *)FUN_1425b0680(param_1,param_2);
      puVar1 = *(undefined4 **)plVar3[1];
      if (puVar1 + 1 <= (undefined4 *)((undefined8 *)plVar3[1])[1]) {
        *(undefined4 *)(param_2 + 0x10) = *puVar1;
        *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 4;
        *(undefined1 *)(param_2 + 0x28) = 0;
        return param_1;
      }
      (**(code **)(*plVar3 + 0x50))(plVar3,param_2 + 0x10,4);
      if ((*(byte *)((longlong)plVar3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(plVar3,param_2 + 0x10,4);
      }
      *(undefined1 *)(param_2 + 0x28) = 0;
      return param_1;
    }
    if (((*(byte *)(param_1 + 0x28) & 1) != 0) &&
       (iVar2 = FArchive::CustomVer(param_1,&DAT_1464b0148), iVar2 < 6)) {
      plVar3 = (longlong *)FUN_1425b0680(param_1,param_2);
      puVar1 = *(undefined4 **)plVar3[1];
      if ((undefined4 *)((undefined8 *)plVar3[1])[1] < puVar1 + 1) {
        (**(code **)(*plVar3 + 0x50))(plVar3,param_2 + 0x10,4);
        if ((*(byte *)((longlong)plVar3 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(plVar3,param_2 + 0x10,4);
        }
      }
      else {
        *(undefined4 *)(param_2 + 0x10) = *puVar1;
        *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 4;
      }
      FUN_1408bda20(plVar3,param_2 + 0x18);
      *(undefined1 *)(param_2 + 0x28) = 0;
      return param_1;
    }
  }
  plVar3 = (longlong *)FUN_1425b0680(param_1,param_2);
  puVar1 = *(undefined4 **)plVar3[1];
  if ((undefined4 *)((undefined8 *)plVar3[1])[1] < puVar1 + 1) {
    (**(code **)(*plVar3 + 0x50))(plVar3,param_2 + 0x10,4);
    if ((*(byte *)((longlong)plVar3 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(plVar3,param_2 + 0x10,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = *puVar1;
    *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 4;
  }
  plVar3 = (longlong *)FUN_1408bda20(plVar3,param_2 + 0x18);
  (**(code **)(*plVar3 + 8))(plVar3,param_2 + 0x28);
  return param_1;
}



// FUNCTION 1425afe70 FUN_1425afe70 body=375 status=ok
// SIG undefined FUN_1425afe70(void)

longlong * FUN_1425afe70(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 6,(longlong)*(int *)((longlong)param_2 + 0xc) << 6
            );
  iVar4 = 0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar3 = (longlong *)param_1[1];
  if ((int *)plVar3[1] < (int *)*plVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if ((((char)bVar1 < '\0') || (local_res8[0] < 0)) ||
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x40000 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
  }
  else if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_1425af160(param_1,(longlong)iVar4 * 0x40 + *param_2);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_2[1]);
      return param_1;
    }
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
      TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_2,local_res8[0]);
    }
    if (0 < local_res8[0]) {
      do {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
          ResizeGrow(param_2,iVar2);
        }
        FUN_1425af160(param_1,(longlong)iVar2 * 0x40 + *param_2);
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_res8[0]);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 1425afff0 FUN_1425afff0 body=393 status=ok
// SIG undefined FUN_1425afff0(void)

longlong * FUN_1425afff0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x50,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x50);
  iVar4 = 0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar3 = (longlong *)param_1[1];
  if ((int *)plVar3[1] < (int *)*plVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if ((((char)bVar1 < '\0') || (local_res8[0] < 0)) ||
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x33333 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
  }
  else if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_1425af600(param_1,(longlong)iVar4 * 0x50 + *param_2);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_2[1]);
      return param_1;
    }
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
      TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(param_2,local_res8[0]);
    }
    if (0 < local_res8[0]) {
      do {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
        }
        FUN_1425af600(param_1,(longlong)iVar2 * 0x50 + *param_2);
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_res8[0]);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 1425b0180 FUN_1425b0180 body=393 status=ok
// SIG undefined FUN_1425b0180(void)

longlong * FUN_1425b0180(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x24,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x24);
  iVar4 = 0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar3 = (longlong *)param_1[1];
  if ((int *)plVar3[1] < (int *)*plVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if ((((char)bVar1 < '\0') || (local_res8[0] < 0)) ||
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x71c71 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
  }
  else if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        operator<<(param_1,*param_2 + (longlong)iVar4 * 0x24);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_2[1]);
      return param_1;
    }
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
      TArray<FCustomMeshTriangle,FDefaultAllocator>::ResizeTo(param_2,local_res8[0]);
    }
    if (0 < local_res8[0]) {
      do {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<36,4>_>,FDefaultAllocator>::
          ResizeGrow(param_2,iVar2);
        }
        operator<<(param_1,*param_2 + (longlong)iVar2 * 0x24);
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_res8[0]);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 1425b0310 FUN_1425b0310 body=457 status=ok
// SIG undefined FUN_1425b0310(void)

longlong * FUN_1425b0310(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  puVar6 = (uint *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar4 = (longlong *)param_1[1];
  if ((int *)plVar4[1] < (int *)*plVar4 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  bVar2 = *(byte *)(param_1 + 5);
  if ((((char)bVar2 < '\0') || (local_res8[0] < 0)) ||
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0xaaaaa < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar2 | 0x80;
    return param_1;
  }
  if ((bVar2 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_1426f6af0(param_1,*param_2 + (longlong)(int)puVar6 * 0x18);
        uVar7 = (int)puVar6 + 1;
        puVar6 = (uint *)(ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_2,local_res8[0]);
  }
  puVar8 = puVar6;
  if (local_res8[0] < 1) {
    return param_1;
  }
  do {
    iVar3 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar3);
    }
    puVar1 = (uint *)(*param_2 + (longlong)iVar3 * 0x18);
    puVar5 = puVar6;
    if (puVar1 != (uint *)0x0) {
      *puVar1 = *puVar1 & 0xfffffff0;
      puVar1[1] = 0x41000000;
      puVar1[2] = 0;
      puVar1[3] = 0x3f800000;
      puVar1[4] = 0x3f800000;
      puVar1[5] = 0x3f800000;
      puVar5 = puVar1;
    }
    FUN_1426f6af0(param_1,puVar5);
    uVar7 = (int)puVar8 + 1;
    puVar8 = (uint *)(ulonglong)uVar7;
  } while ((int)uVar7 < local_res8[0]);
  return param_1;
}



// FUNCTION 1425b04e0 FUN_1425b04e0 body=405 status=ok
// SIG undefined FUN_1425b04e0(void)

longlong * FUN_1425b04e0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 6,(longlong)*(int *)((longlong)param_2 + 0xc) << 6
            );
  uVar6 = 0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar3 = (longlong *)param_1[1];
  if ((int *)plVar3[1] < (int *)*plVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if ((((char)bVar1 < '\0') || (local_res8[0] < 0)) ||
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x40000 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
    return param_1;
  }
  if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_1425af910(param_1,(longlong)(int)uVar6 * 0x40 + *param_2);
        uVar7 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_2,local_res8[0]);
  }
  uVar8 = uVar6;
  if (local_res8[0] < 1) {
    return param_1;
  }
  do {
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar2);
    }
    uVar4 = (longlong)iVar2 * 0x40 + *param_2;
    uVar5 = uVar6;
    if (uVar4 != 0) {
      *(undefined8 *)(uVar4 + 0x20) = 0;
      *(undefined4 *)(uVar4 + 0x28) = 0;
      *(undefined4 *)(uVar4 + 0x2c) = 0x3f800000;
      uVar5 = uVar4;
    }
    FUN_1425af910(param_1,uVar5);
    uVar7 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar7;
  } while ((int)uVar7 < local_res8[0]);
  return param_1;
}



// FUNCTION 1425b0680 FUN_1425b0680 body=373 status=ok
// SIG undefined FUN_1425b0680(void)

longlong * FUN_1425b0680(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x1c,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x1c);
  iVar4 = 0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar3 = (longlong *)param_1[1];
  if ((int *)plVar3[1] < (int *)*plVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if ((((char)bVar1 < '\0') || (local_res8[0] < 0)) ||
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x92492 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
  }
  else if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_1425afb40(param_1,(longlong)iVar4 * 0x1c + *param_2);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_2[1]);
      return param_1;
    }
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeTo
                (param_2,local_res8[0]);
    }
    if (0 < local_res8[0]) {
      do {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::
          ResizeGrow(param_2,iVar2);
        }
        FUN_1425afb40(param_1,(longlong)iVar2 * 0x1c + *param_2);
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_res8[0]);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 1425b0800 FUN_1425b0800 body=489 status=ok
// SIG undefined FUN_1425b0800(void)

longlong * FUN_1425b0800(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x30,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x30);
  puVar5 = (undefined8 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar8 = (longlong *)param_1[1];
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
  iVar2 = local_res8[0];
  bVar1 = *(byte *)(param_1 + 5);
  if (((-1 < (char)bVar1) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x55556)))) {
    if ((bVar1 & 1) != 0) {
      plVar8 = (longlong *)*param_2;
      for (iVar6 = (int)param_2[1]; iVar6 != 0; iVar6 = iVar6 + -1) {
        if (plVar8[3] != 0) {
          FMemory::Free();
        }
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 6;
      }
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != iVar2) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeTo(param_2,iVar2);
      }
      puVar9 = puVar5;
      if (0 < local_res8[0]) {
        do {
          iVar2 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar2 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
            TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
          }
          puVar3 = (undefined8 *)((longlong)iVar2 * 0x30 + *param_2);
          puVar4 = puVar5;
          if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = 0;
            puVar3[1] = 0;
            *(undefined4 *)(puVar3 + 2) = 0;
            puVar3[3] = 0;
            puVar3[4] = 0;
            *(undefined1 *)(puVar3 + 5) = 0;
            puVar4 = puVar3;
          }
          FUN_1425afca0(param_1,puVar4);
          uVar7 = (int)puVar9 + 1;
          puVar9 = (undefined8 *)(ulonglong)uVar7;
        } while ((int)uVar7 < local_res8[0]);
      }
      return param_1;
    }
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_1425afca0(param_1,(longlong)(int)puVar5 * 0x30 + *param_2);
        uVar7 = (int)puVar5 + 1;
        puVar5 = (undefined8 *)(ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar1 | 0x80;
  return param_1;
}



// FUNCTION 1425b09f0 FUN_1425b09f0 body=471 status=ok
// SIG undefined FUN_1425b09f0(void)

longlong * FUN_1425b09f0(longlong *param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)*(int *)(param_2 + 200) * 0xc,
             (longlong)*(int *)(param_2 + 0xcc) * 0xc);
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = *(int *)(param_2 + 200);
  }
  else {
    local_res8[0] = 0;
  }
  plVar3 = (longlong *)param_1[1];
  if ((int *)plVar3[1] < (int *)*plVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if (((-1 < (char)bVar1) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x155556)))) {
    if ((bVar1 & 1) == 0) {
      iVar5 = 0;
      *(int *)(param_2 + 200) = local_res8[0];
      if (0 < local_res8[0]) {
        do {
          lVar4 = *(longlong *)(param_2 + 0xc0);
          if (*(longlong *)(param_2 + 0xc0) == 0) {
            lVar4 = param_2;
          }
          FUN_1406da970(param_1,lVar4 + (longlong)iVar5 * 0xc);
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(param_2 + 200));
      }
      return param_1;
    }
    *(undefined4 *)(param_2 + 200) = 0;
    if (*(int *)(param_2 + 0xcc) != local_res8[0]) {
      FUN_14231bc50(param_2,local_res8[0]);
    }
    iVar5 = 0;
    if (0 < local_res8[0]) {
      do {
        iVar2 = *(int *)(param_2 + 200);
        *(int *)(param_2 + 200) = iVar2 + 1;
        if (*(int *)(param_2 + 0xcc) < iVar2 + 1) {
          TArray<FVector,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(param_2,iVar2);
        }
        lVar4 = *(longlong *)(param_2 + 0xc0);
        if (*(longlong *)(param_2 + 0xc0) == 0) {
          lVar4 = param_2;
        }
        FUN_1406da970(param_1,lVar4 + (longlong)iVar2 * 0xc);
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_res8[0]);
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar1 | 0x80;
  return param_1;
}



// FUNCTION 1425b0bd0 FUN_1425b0bd0 body=437 status=ok
// SIG undefined FUN_1425b0bd0(void)

longlong * FUN_1425b0bd0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong *plVar9;
  int local_res8 [2];
  undefined8 *puVar10;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  puVar7 = (undefined8 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar9 = (longlong *)param_1[1];
  if ((int *)plVar9[1] < (int *)*plVar9 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar9;
    *plVar9 = *plVar9 + 4;
  }
  iVar4 = local_res8[0];
  bVar3 = *(byte *)(param_1 + 5);
  if (((-1 < (char)bVar3) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x200001)))) {
    if ((bVar3 & 1) != 0) {
      plVar9 = (longlong *)*param_2;
      for (iVar6 = (int)param_2[1]; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar10 = (undefined8 *)*plVar9;
        if (puVar10 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar10 + 1);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*puVar10)(puVar10,1);
          }
        }
        plVar9 = plVar9 + 1;
      }
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != iVar4) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,iVar4);
      }
      puVar10 = puVar7;
      if (0 < local_res8[0]) {
        do {
          iVar4 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar4 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
          }
          puVar2 = (undefined8 *)(*param_2 + (longlong)iVar4 * 8);
          puVar5 = puVar7;
          if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = 0;
            puVar5 = puVar2;
          }
          operator<<(param_1,puVar5);
          uVar8 = (int)puVar10 + 1;
          puVar10 = (undefined8 *)(ulonglong)uVar8;
        } while ((int)uVar8 < local_res8[0]);
      }
      return param_1;
    }
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        operator<<(param_1,*param_2 + (longlong)(int)puVar7 * 8);
        uVar8 = (int)puVar7 + 1;
        puVar7 = (undefined8 *)(ulonglong)uVar8;
      } while ((int)uVar8 < (int)param_2[1]);
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar3 | 0x80;
  return param_1;
}



// FUNCTION 1425b0d90 FUN_1425b0d90 body=393 status=ok
// SIG undefined FUN_1425b0d90(void)

longlong * FUN_1425b0d90(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  iVar4 = 0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar3 = (longlong *)param_1[1];
  if ((int *)plVar3[1] < (int *)*plVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if ((((char)bVar1 < '\0') || (local_res8[0] < 0)) ||
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0xaaaaa < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
  }
  else if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_1425b14e0(param_1,*param_2 + (longlong)iVar4 * 0x18);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_2[1]);
      return param_1;
    }
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (param_2,local_res8[0]);
    }
    if (0 < local_res8[0]) {
      do {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(param_2,iVar2);
        }
        FUN_1425b14e0(param_1,*param_2 + (longlong)iVar2 * 0x18);
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_res8[0]);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 1425b0f20 operator<< body=94 status=ok
// SIG undefined operator<<(void)

longlong operator<<(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong local_res8;
  
  local_res8 = *param_2;
  FUN_1425aef00(param_1,&local_res8);
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    puVar2 = (undefined8 *)*param_2;
    *param_2 = local_res8;
    if (local_res8 != 0) {
      *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
    }
    if (puVar2 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1425b0f80 operator<< body=828 status=ok
// SIG undefined operator<<(void)

longlong operator<<(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  float *pfVar2;
  uint uVar3;
  longlong lVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [14];
  unkbyte10 Var10;
  undefined1 auVar11 [12];
  undefined1 auVar12 [14];
  undefined1 auVar13 [12];
  undefined1 auVar14 [14];
  undefined1 auVar15 [12];
  undefined1 auVar16 [14];
  undefined1 auVar17 [12];
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  undefined2 uVar77;
  undefined2 uVar78;
  undefined1 auVar32 [16];
  undefined1 auVar44 [16];
  undefined2 uVar79;
  undefined2 uVar80;
  undefined1 auVar56 [16];
  undefined1 auVar68 [16];
  undefined1 unaff_XMM7_Ba;
  undefined1 unaff_XMM7_Bb;
  undefined1 uVar71;
  undefined1 unaff_XMM7_Bc;
  undefined1 uVar72;
  undefined1 unaff_XMM7_Bd;
  undefined1 uVar73;
  undefined1 unaff_XMM7_Be;
  undefined1 unaff_XMM7_Bf;
  undefined1 uVar74;
  undefined1 unaff_XMM7_Bg;
  undefined1 uVar75;
  undefined1 unaff_XMM7_Bh;
  undefined1 uVar76;
  longlong local_c8;
  ulonglong local_c0;
  undefined **local_b8;
  longlong local_b0;
  ulonglong local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar33 [16];
  undefined1 auVar45 [16];
  undefined1 auVar34 [16];
  undefined1 auVar46 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar31 [16];
  undefined1 auVar43 [16];
  undefined1 auVar23 [16];
  undefined1 auVar35 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar57 [16];
  undefined1 auVar69 [16];
  undefined1 auVar58 [16];
  undefined1 auVar70 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar55 [16];
  undefined1 auVar67 [16];
  undefined1 auVar47 [16];
  undefined1 auVar59 [16];
  
  FArchive::UsingCustomVersion(param_1,&DAT_1464b00e8);
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
LAB_1425b1278:
    FUN_1425b04e0(param_1,param_2 + 8);
  }
  else {
    iVar18 = FArchive::CustomVer(param_1,&DAT_1464b00e8);
    if (iVar18 < 0x17) {
      local_b0 = 0;
      local_a8 = 0;
      local_b8 = &PTR_GetBoundProgramCounterForTimerManager_14511a940;
      local_a0 = 0;
      FUN_1425b4c00(&local_b0,param_1,0);
      *(undefined4 *)(param_2 + 0x10) = 0;
      lVar20 = (longlong)(int)local_a8;
      if (*(int *)(param_2 + 0x14) < (int)local_a8) {
        TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_2 + 8,local_a8 & 0xffffffff);
      }
      lVar22 = local_b0;
      lVar20 = local_b0 + lVar20 * 0x24;
      if (local_b0 != lVar20) {
        uVar7 = CONCAT13(unaff_XMM7_Bd,CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))
                        ) ^
                CONCAT13(unaff_XMM7_Bd,CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))
                        );
        uVar71 = (undefined1)(uVar7 >> 8);
        uVar72 = (undefined1)(uVar7 >> 0x10);
        uVar73 = (undefined1)(uVar7 >> 0x18);
        uVar8 = CONCAT13(unaff_XMM7_Bh,CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))
                        ) ^
                CONCAT13(unaff_XMM7_Bh,CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))
                        );
        uVar74 = (undefined1)(uVar8 >> 8);
        uVar75 = (undefined1)(uVar8 >> 0x10);
        uVar76 = (undefined1)(uVar8 >> 0x18);
        lVar21 = local_b0 + 0x20;
        do {
          local_98 = *(undefined8 *)(lVar21 + -0x20);
          uStack_90 = *(undefined4 *)(lVar21 + -0x18);
          iVar18 = *(int *)(param_2 + 0x10);
          uVar3 = *(uint *)(lVar21 + -0x14);
          auVar31._0_15_ = ZEXT415(uVar3);
          auVar31[0xf] = uVar76;
          auVar30._14_2_ = auVar31._14_2_;
          auVar30._0_13_ = ZEXT413(uVar3);
          auVar30[0xd] = uVar75;
          auVar29._13_3_ = auVar30._13_3_;
          auVar29._0_13_ = ZEXT413(uVar3);
          auVar28._12_4_ = auVar29._12_4_;
          auVar28._4_7_ = 0;
          auVar28._0_4_ = uVar3;
          auVar28[0xb] = uVar74;
          auVar27._11_5_ = auVar28._11_5_;
          auVar27._4_7_ = 0;
          auVar27._0_4_ = uVar3;
          auVar26._10_6_ = auVar27._10_6_;
          auVar26._4_5_ = 0;
          auVar26._0_4_ = uVar3;
          auVar26[9] = (char)uVar8;
          auVar25._9_7_ = auVar26._9_7_;
          auVar25._4_5_ = 0;
          auVar25._0_4_ = uVar3;
          Var10 = CONCAT91(CONCAT81(auVar25._8_8_,uVar73),(char)(uVar3 >> 0x18));
          auVar24._6_10_ = Var10;
          auVar24[5] = uVar72;
          auVar24[4] = (char)(uVar3 >> 0x10);
          auVar24._0_4_ = uVar3;
          auVar9._2_12_ = auVar24._4_12_;
          auVar9[1] = uVar71;
          auVar9[0] = (char)(uVar3 >> 8);
          uVar77 = CONCAT11((char)uVar7,(char)uVar3);
          auVar23._2_14_ = auVar9;
          uVar6 = (undefined2)(uVar8 >> 0x10);
          auVar34._0_12_ = auVar23._0_12_;
          auVar34._12_2_ = (short)Var10;
          auVar34._14_2_ = uVar6;
          auVar33._12_4_ = auVar34._12_4_;
          auVar33._0_10_ = auVar23._0_10_;
          auVar33._10_2_ = (short)uVar8;
          auVar32._10_6_ = auVar33._10_6_;
          auVar32._0_8_ = auVar23._0_8_;
          auVar32._8_2_ = auVar24._4_2_;
          uVar5 = (undefined2)(uVar7 >> 0x10);
          auVar11._4_8_ = auVar32._8_8_;
          auVar11._2_2_ = uVar5;
          auVar11._0_2_ = auVar9._0_2_;
          fStack_8c = (float)CONCAT22((short)uVar7,uVar77) * 0.007843138 + -1.0;
          fStack_88 = (float)auVar11._0_4_ * 0.007843138 + -1.0;
          fStack_84 = (float)auVar32._8_4_ * 0.007843138 + -1.0;
          local_c0 = CONCAT44(local_c0._4_4_,fStack_84);
          uVar3 = *(uint *)(lVar21 + -0x10);
          auVar55._0_15_ = ZEXT415(uVar3);
          auVar55[0xf] = uVar76;
          auVar54._14_2_ = auVar55._14_2_;
          auVar54._0_13_ = ZEXT413(uVar3);
          auVar54[0xd] = uVar75;
          auVar53._13_3_ = auVar54._13_3_;
          auVar53._0_13_ = ZEXT413(uVar3);
          auVar52._12_4_ = auVar53._12_4_;
          auVar52._4_7_ = 0;
          auVar52._0_4_ = uVar3;
          auVar52[0xb] = uVar74;
          auVar51._11_5_ = auVar52._11_5_;
          auVar51._4_7_ = 0;
          auVar51._0_4_ = uVar3;
          auVar50._10_6_ = auVar51._10_6_;
          auVar50._4_5_ = 0;
          auVar50._0_4_ = uVar3;
          auVar50[9] = (char)uVar8;
          auVar49._9_7_ = auVar50._9_7_;
          auVar49._4_5_ = 0;
          auVar49._0_4_ = uVar3;
          Var10 = CONCAT91(CONCAT81(auVar49._8_8_,uVar73),(char)(uVar3 >> 0x18));
          auVar48._6_10_ = Var10;
          auVar48[5] = uVar72;
          auVar48[4] = (char)(uVar3 >> 0x10);
          auVar48._0_4_ = uVar3;
          auVar12._2_12_ = auVar48._4_12_;
          auVar12[1] = uVar71;
          auVar12[0] = (char)(uVar3 >> 8);
          uVar79 = CONCAT11((char)uVar7,(char)uVar3);
          auVar47._2_14_ = auVar12;
          auVar58._0_12_ = auVar47._0_12_;
          auVar58._12_2_ = (short)Var10;
          auVar58._14_2_ = uVar6;
          auVar57._12_4_ = auVar58._12_4_;
          auVar57._0_10_ = auVar47._0_10_;
          auVar57._10_2_ = (short)uVar8;
          auVar56._10_6_ = auVar57._10_6_;
          auVar56._0_8_ = auVar47._0_8_;
          auVar56._8_2_ = auVar48._4_2_;
          auVar13._4_8_ = auVar56._8_8_;
          auVar13._2_2_ = uVar5;
          auVar13._0_2_ = auVar12._0_2_;
          local_68 = *(undefined8 *)(lVar21 + -0xc);
          uStack_60 = *(undefined8 *)(lVar21 + -4);
          *(int *)(param_2 + 0x10) = iVar18 + 1;
          if (*(int *)(param_2 + 0x14) < iVar18 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
            ResizeGrow(param_2 + 8,iVar18);
          }
          lVar4 = *(longlong *)(param_2 + 8);
          lVar19 = (longlong)iVar18 * 0x40;
          *(undefined8 *)(lVar19 + lVar4) = local_98;
          ((undefined8 *)(lVar19 + lVar4))[1] = CONCAT44(fStack_8c,uStack_90);
          puVar1 = (undefined8 *)(lVar19 + 0x10 + lVar4);
          *puVar1 = CONCAT44(fStack_84,fStack_88);
          puVar1[1] = uStack_80;
          pfVar2 = (float *)(lVar19 + 0x20 + lVar4);
          *pfVar2 = (float)CONCAT22((short)uVar7,uVar79) * 0.007843138 + -1.0;
          pfVar2[1] = (float)auVar13._0_4_ * 0.007843138 + -1.0;
          pfVar2[2] = (float)auVar56._8_4_ * 0.007843138 + -1.0;
          pfVar2[3] = (float)auVar57._12_4_ * 0.007843138 + -1.0;
          puVar1 = (undefined8 *)(lVar19 + 0x30 + lVar4);
          *puVar1 = local_68;
          puVar1[1] = uStack_60;
          lVar4 = lVar21 + 4;
          lVar21 = lVar21 + 0x24;
        } while (lVar4 != lVar20);
      }
    }
    else {
      if (((*(byte *)(param_1 + 0x28) & 1) == 0) ||
         (iVar18 = FArchive::CustomVer(param_1,&DAT_1464b00e8), 0x19 < iVar18)) goto LAB_1425b1278;
      local_c8 = 0;
      local_c0 = 0;
      FUN_1425b4c00(&local_c8,param_1,0);
      lVar20 = (longlong)(int)local_c0;
      *(undefined4 *)(param_2 + 0x10) = 0;
      if (*(int *)(param_2 + 0x14) < (int)local_c0) {
        TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_2 + 8,local_c0 & 0xffffffff);
      }
      lVar22 = local_c8;
      lVar20 = local_c8 + lVar20 * 0x24;
      if (local_c8 != lVar20) {
        uVar7 = CONCAT13(unaff_XMM7_Bd,CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))
                        ) ^
                CONCAT13(unaff_XMM7_Bd,CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))
                        );
        uVar71 = (undefined1)(uVar7 >> 8);
        uVar72 = (undefined1)(uVar7 >> 0x10);
        uVar73 = (undefined1)(uVar7 >> 0x18);
        uVar8 = CONCAT13(unaff_XMM7_Bh,CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))
                        ) ^
                CONCAT13(unaff_XMM7_Bh,CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))
                        );
        uVar74 = (undefined1)(uVar8 >> 8);
        uVar75 = (undefined1)(uVar8 >> 0x10);
        uVar76 = (undefined1)(uVar8 >> 0x18);
        lVar21 = local_c8 + 0x20;
        do {
          local_98 = *(undefined8 *)(lVar21 + -0x20);
          uStack_90 = *(undefined4 *)(lVar21 + -0x18);
          iVar18 = *(int *)(param_2 + 0x10);
          uVar3 = *(uint *)(lVar21 + -0x14);
          auVar43._0_15_ = ZEXT415(uVar3);
          auVar43[0xf] = uVar76;
          auVar42._14_2_ = auVar43._14_2_;
          auVar42._0_13_ = ZEXT413(uVar3);
          auVar42[0xd] = uVar75;
          auVar41._13_3_ = auVar42._13_3_;
          auVar41._0_13_ = ZEXT413(uVar3);
          auVar40._12_4_ = auVar41._12_4_;
          auVar40._4_7_ = 0;
          auVar40._0_4_ = uVar3;
          auVar40[0xb] = uVar74;
          auVar39._11_5_ = auVar40._11_5_;
          auVar39._4_7_ = 0;
          auVar39._0_4_ = uVar3;
          auVar38._10_6_ = auVar39._10_6_;
          auVar38._4_5_ = 0;
          auVar38._0_4_ = uVar3;
          auVar38[9] = (char)uVar8;
          auVar37._9_7_ = auVar38._9_7_;
          auVar37._4_5_ = 0;
          auVar37._0_4_ = uVar3;
          Var10 = CONCAT91(CONCAT81(auVar37._8_8_,uVar73),(char)(uVar3 >> 0x18));
          auVar36._6_10_ = Var10;
          auVar36[5] = uVar72;
          auVar36[4] = (char)(uVar3 >> 0x10);
          auVar36._0_4_ = uVar3;
          auVar14._2_12_ = auVar36._4_12_;
          auVar14[1] = uVar71;
          auVar14[0] = (char)(uVar3 >> 8);
          uVar78 = CONCAT11((char)uVar7,(char)uVar3);
          auVar35._2_14_ = auVar14;
          uVar6 = (undefined2)(uVar8 >> 0x10);
          auVar46._0_12_ = auVar35._0_12_;
          auVar46._12_2_ = (short)Var10;
          auVar46._14_2_ = uVar6;
          auVar45._12_4_ = auVar46._12_4_;
          auVar45._0_10_ = auVar35._0_10_;
          auVar45._10_2_ = (short)uVar8;
          auVar44._10_6_ = auVar45._10_6_;
          auVar44._0_8_ = auVar35._0_8_;
          auVar44._8_2_ = auVar36._4_2_;
          uVar5 = (undefined2)(uVar7 >> 0x10);
          auVar15._4_8_ = auVar44._8_8_;
          auVar15._2_2_ = uVar5;
          auVar15._0_2_ = auVar14._0_2_;
          fStack_8c = (float)CONCAT22((short)uVar7,uVar78) * 0.007843138 + -1.0;
          fStack_88 = (float)auVar15._0_4_ * 0.007843138 + -1.0;
          fStack_84 = (float)auVar44._8_4_ * 0.007843138 + -1.0;
          local_c0 = CONCAT44(local_c0._4_4_,fStack_84);
          uVar3 = *(uint *)(lVar21 + -0x10);
          auVar67._0_15_ = ZEXT415(uVar3);
          auVar67[0xf] = uVar76;
          auVar66._14_2_ = auVar67._14_2_;
          auVar66._0_13_ = ZEXT413(uVar3);
          auVar66[0xd] = uVar75;
          auVar65._13_3_ = auVar66._13_3_;
          auVar65._0_13_ = ZEXT413(uVar3);
          auVar64._12_4_ = auVar65._12_4_;
          auVar64._4_7_ = 0;
          auVar64._0_4_ = uVar3;
          auVar64[0xb] = uVar74;
          auVar63._11_5_ = auVar64._11_5_;
          auVar63._4_7_ = 0;
          auVar63._0_4_ = uVar3;
          auVar62._10_6_ = auVar63._10_6_;
          auVar62._4_5_ = 0;
          auVar62._0_4_ = uVar3;
          auVar62[9] = (char)uVar8;
          auVar61._9_7_ = auVar62._9_7_;
          auVar61._4_5_ = 0;
          auVar61._0_4_ = uVar3;
          Var10 = CONCAT91(CONCAT81(auVar61._8_8_,uVar73),(char)(uVar3 >> 0x18));
          auVar60._6_10_ = Var10;
          auVar60[5] = uVar72;
          auVar60[4] = (char)(uVar3 >> 0x10);
          auVar60._0_4_ = uVar3;
          auVar16._2_12_ = auVar60._4_12_;
          auVar16[1] = uVar71;
          auVar16[0] = (char)(uVar3 >> 8);
          uVar80 = CONCAT11((char)uVar7,(char)uVar3);
          auVar59._2_14_ = auVar16;
          auVar70._0_12_ = auVar59._0_12_;
          auVar70._12_2_ = (short)Var10;
          auVar70._14_2_ = uVar6;
          auVar69._12_4_ = auVar70._12_4_;
          auVar69._0_10_ = auVar59._0_10_;
          auVar69._10_2_ = (short)uVar8;
          auVar68._10_6_ = auVar69._10_6_;
          auVar68._0_8_ = auVar59._0_8_;
          auVar68._8_2_ = auVar60._4_2_;
          auVar17._4_8_ = auVar68._8_8_;
          auVar17._2_2_ = uVar5;
          auVar17._0_2_ = auVar16._0_2_;
          local_68 = *(undefined8 *)(lVar21 + -0xc);
          uStack_60 = *(undefined8 *)(lVar21 + -4);
          *(int *)(param_2 + 0x10) = iVar18 + 1;
          if (*(int *)(param_2 + 0x14) < iVar18 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
            ResizeGrow(param_2 + 8,iVar18);
          }
          lVar4 = *(longlong *)(param_2 + 8);
          lVar19 = (longlong)iVar18 * 0x40;
          *(undefined8 *)(lVar19 + lVar4) = local_98;
          ((undefined8 *)(lVar19 + lVar4))[1] = CONCAT44(fStack_8c,uStack_90);
          puVar1 = (undefined8 *)(lVar19 + 0x10 + lVar4);
          *puVar1 = CONCAT44(fStack_84,fStack_88);
          puVar1[1] = uStack_80;
          pfVar2 = (float *)(lVar19 + 0x20 + lVar4);
          *pfVar2 = (float)CONCAT22((short)uVar7,uVar80) * 0.007843138 + -1.0;
          pfVar2[1] = (float)auVar17._0_4_ * 0.007843138 + -1.0;
          pfVar2[2] = (float)auVar68._8_4_ * 0.007843138 + -1.0;
          pfVar2[3] = (float)auVar69._12_4_ * 0.007843138 + -1.0;
          puVar1 = (undefined8 *)(lVar19 + 0x30 + lVar4);
          *puVar1 = local_68;
          puVar1[1] = uStack_60;
          lVar4 = lVar21 + 4;
          lVar21 = lVar21 + 0x24;
        } while (lVar4 != lVar20);
      }
    }
    if (lVar22 != 0) {
      FMemory::Free(lVar22);
    }
  }
  return param_1;
}



// FUNCTION 1425b12c0 FUN_1425b12c0 body=535 status=ok
// SIG undefined FUN_1425b12c0(void)

longlong * FUN_1425b12c0(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  uVar2 = FUN_1406da970();
  uVar2 = FUN_1406da970(uVar2,param_2 + 0xc);
  uVar2 = FUN_1406da970(uVar2,param_2 + 0x18);
  FUN_1406da970(uVar2,param_2 + 0x24);
  FUN_1425b09f0(param_1,param_2 + 0x30);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x100,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x100,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x100) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x30))(param_1,param_2 + 0x108);
  (**(code **)(*plVar3 + 0x40))(plVar3,param_2 + 0x120);
  (**(code **)(*param_1 + 0x30))(param_1,param_2 + 0x110);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x128,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x128,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x128) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x130,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x130,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x130) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x138,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x138,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x138) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_1426f6af0(param_1,param_2 + 0x13c);
  (**(code **)(*param_1 + 0x40))(param_1,param_2 + 0x118);
  return param_1;
}



// FUNCTION 1425b14e0 FUN_1425b14e0 body=208 status=ok
// SIG undefined FUN_1425b14e0(void)

longlong * FUN_1425b14e0(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
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
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 1,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 1,4);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_140d66f10(param_1,param_2 + 2);
  FUN_140d66f10(param_1,param_2 + 4);
  return param_1;
}



// FUNCTION 1425b15b0 FUN_1425b15b0 body=150 status=ok
// SIG undefined FUN_1425b15b0(void)

void FUN_1425b15b0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_res8 [8];
  
  piVar1 = *(int **)(param_1 + 10);
  TRefCountPtr<FRHIIndexBuffer>::operator=(piVar1 + 6,0);
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  iVar4 = param_1[3];
  *piVar1 = *param_1;
  piVar1[1] = iVar2;
  piVar1[2] = iVar3;
  piVar1[3] = iVar4;
  *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_1 + 8);
  if ((((param_1[3] != 0 || param_1[2] != 0) || param_1[1] != 0) || *param_1 != 0) &&
     (0 < param_1[6])) {
    piVar1[8] = param_1[6] << 4;
    (**(code **)(*DAT_146ab6358 + 0x110))
              (DAT_146ab6358,local_res8,*(undefined8 *)(param_1 + 4),piVar1 + 8,2);
    TRefCountPtr<FRHIIndexBuffer>::operator=(piVar1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  }
  return;
}



// FUNCTION 1425b1650 operator() body=104 status=ok
// SIG undefined operator()(void)

void <lambda_8eb0fd50722b02ff4367f6a0ae38e9ad>::operator()(undefined8 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if ((char)piVar1[0x4a] == '\0') {
    (**(code **)(*(longlong *)(piVar1 + 0x40) + 0x28))();
  }
  else if (*piVar1 == 0) {
    FRenderResource::UpdateRHI(piVar1 + 0x40);
  }
  piVar1 = (int *)*param_1;
  if ((char)piVar1[0x10] == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001425b169b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(piVar1 + 6) + 0x28))(piVar1 + 6);
    return;
  }
  if (*piVar1 == 0) {
    FRenderResource::UpdateRHI(piVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 1425b1700 FUN_1425b1700 body=97 status=ok
// SIG undefined FUN_1425b1700(void)

undefined8 * FUN_1425b1700(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14511d158;
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



// FUNCTION 1425b1770 FUN_1425b1770 body=97 status=ok
// SIG undefined FUN_1425b1770(void)

undefined8 * FUN_1425b1770(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14511d168;
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



// FUNCTION 1425b17e0 FUN_1425b17e0 body=97 status=ok
// SIG undefined FUN_1425b17e0(void)

undefined8 * FUN_1425b17e0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14511d128;
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



// FUNCTION 1425b1850 FUN_1425b1850 body=97 status=ok
// SIG undefined FUN_1425b1850(void)

undefined8 * FUN_1425b1850(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14511d148;
  if (param_1[9] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[9] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1425b18c0 FUN_1425b18c0 body=97 status=ok
// SIG undefined FUN_1425b18c0(void)

undefined8 * FUN_1425b18c0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14511d138;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1425b1930 FUN_1425b1930 body=66 status=ok
// SIG undefined FUN_1425b1930(void)

longlong FUN_1425b1930(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_14407ef78;
  FUN_1404571d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x480);
  }
  return param_1;
}



// FUNCTION 1425b1980 `scalar_deleting_destructor' body=81 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FModelSceneProxy::FElementInfo::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__scalar_deleting_destructor__144eefa68;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 4);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1425b19e0 FUN_1425b19e0 body=165 status=ok
// SIG undefined FUN_1425b19e0(void)

undefined8 * FUN_1425b19e0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  plVar1 = param_1 + 0x74;
  *param_1 = &PTR_FUN_14511a988;
  (**(code **)(*plVar1 + 0x30))(plVar1);
  TArray<FModelSceneProxy::FElementInfo,FDefaultAllocator>::
  ~TArray<FModelSceneProxy::FElementInfo,FDefaultAllocator>(param_1 + 0x163);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x15f);
  if (param_1[0x154] != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x13e);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x13d);
  FUN_141edd2d0(plVar1);
  FUN_14271e9f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb50);
  }
  return param_1;
}



// FUNCTION 1425b1a90 `scalar_deleting_destructor' body=409 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FNetGUIDCache::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x298) = 0;
  if (*(longlong *)(param_1 + 0x290) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x250);
  *(undefined4 *)(param_1 + 0x248) = 0;
  if (*(longlong *)(param_1 + 0x240) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x200);
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FMemory::Free();
  }
  FUN_1404af4a0(param_1 + 0x1b0,0);
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x158);
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0xf8,0);
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FIntVector,FIndirectLightingCacheBlock>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FIntVector,FIndirectLightingCacheBlock>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2a8);
  }
  return param_1;
}



// FUNCTION 1425b1c30 `scalar_deleting_destructor' body=292 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong * FNetworkObjectList::_scalar_deleting_destructor_(longlong *param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x27) = 0;
  if (param_1[0x26] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x1e);
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (param_1[0x1c] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TSharedPtr<IMediaAudioSample,1>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x14,0);
  if (param_1[0x18] != 0) {
    FMemory::Free();
  }
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TSharedPtr<IMediaAudioSample,1>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 10,0);
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TSharedPtr<IMediaAudioSample,1>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1,0);
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x140);
  }
  return param_1;
}



// FUNCTION 1425b1d60 FUN_1425b1d60 body=98 status=ok
// SIG undefined FUN_1425b1d60(void)

undefined8 * FUN_1425b1d60(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__scalar_deleting_destructor__143f48b30;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1425b1dd0 `scalar_deleting_destructor' body=86 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FRepChangedPropertyTracker::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_LAB_14511d0e8;
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1425b1e30 FUN_1425b1e30 body=171 status=ok
// SIG undefined FUN_1425b1e30(void)

undefined8 * FUN_1425b1e30(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  if (param_1[0x11] != 0) {
    FMemory::Free();
  }
  puVar1 = (undefined8 *)param_1[0xd];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  TArray<FHandleToCmdIndex,FDefaultAllocator>::~TArray<FHandleToCmdIndex,FDefaultAllocator>
            (param_1 + 6);
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__scalar_deleting_destructor__143f73ca8;
  if ((DAT_1469e6880 != 0) && (*(char *)(param_1 + 1) != '\0')) {
    UGCObjectReferencer::RemoveObject(DAT_1469e6880,param_1);
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 1425b1ee0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 HModel::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  HHitProxy::~HHitProxy();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1425b1f20 FUN_1425b1f20 body=52 status=ok
// SIG undefined FUN_1425b1f20(void)

undefined8 FUN_1425b1f20(undefined8 param_1,ulonglong param_2)

{
  FUN_1404bfa80();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1978);
  }
  return param_1;
}



// FUNCTION 1425b1f60 `scalar_deleting_destructor' body=103 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMaterialParameterCollection::_scalar_deleting_destructor_(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x60);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1425b1fd0 `scalar_deleting_destructor' body=141 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMaterialParameterCollectionInstance::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x40);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 1425b2060 FUN_1425b2060 body=274 status=ok
// SIG undefined FUN_1425b2060(void)

longlong FUN_1425b2060(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x308) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x308) + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  FUN_140944f50(param_1 + 0x230);
  FPositionVertexBuffer::~FPositionVertexBuffer(param_1 + 0x1d8);
  FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer(param_1 + 0xf0);
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x88);
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x350);
  }
  return param_1;
}



// FUNCTION 1425b2180 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMorphTarget::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TArray<FMorphTargetLODModel,FDefaultAllocator>::~TArray<FMorphTargetLODModel,FDefaultAllocator>
            (param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1425b21c0 FUN_1425b21c0 body=52 status=ok
// SIG undefined FUN_1425b21c0(void)

undefined8 FUN_1425b21c0(undefined8 param_1,ulonglong param_2)

{
  FUN_1404bfa80();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1970);
  }
  return param_1;
}



// FUNCTION 1425b2200 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
Chaos::TPBDRigidParticles<float,3>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FUN_1404bfe50();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x540);
  }
  return param_1;
}



// FUNCTION 1425b2240 FUN_1425b2240 body=543 status=ok
// SIG undefined FUN_1425b2240(void)

void FUN_1425b2240(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint *puVar8;
  undefined1 local_res8 [8];
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  uint uStack_70;
  int iStack_6c;
  undefined1 local_68 [16];
  longlong *local_58;
  undefined2 local_50;
  longlong *local_48;
  uint uStack_40;
  uint uStack_3c;
  uint *puStack_38;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  
  iVar1 = *(int *)(param_1 + 0xa0);
  *(int *)(param_1 + 0xa0) = iVar1 + 1;
  if (*(int *)(param_1 + 0xa4) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x98,iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar1 * 8) = param_2;
  plVar7 = *(longlong **)(param_1 + 0x520);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x290))(plVar7,param_2);
  }
  FUN_1425e7680();
  plVar7 = (longlong *)(param_1 + 0x260);
  local_88 = 0;
  uStack_84 = 1;
  iVar1 = *(int *)(param_1 + 0x288);
  puStack_38 = (uint *)(param_1 + 0x270);
  local_78._4_4_ = 0;
  uStack_70 = 0;
  if (iVar1 != 0) {
    puVar8 = *(uint **)(param_1 + 0x280);
    if (*(uint **)(param_1 + 0x280) == (uint *)0x0) {
      puVar8 = puStack_38;
    }
    uVar5 = *puVar8;
    local_88 = 0;
    uStack_70 = 0;
    while (uVar5 == 0) {
      lVar6 = (longlong)(int)local_88;
      uStack_70 = uStack_70 + 0x20;
      uVar5 = local_88 + 1;
      bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_88;
      local_88 = uVar5;
      if (bVar3) goto LAB_1425b235f;
      uVar5 = puVar8[lVar6 + 1];
    }
    uStack_84 = -uVar5 & uVar5;
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
    local_78._4_4_ = (uStack_70 - iVar4) + 0x1f;
    if (iVar1 < local_78._4_4_) {
LAB_1425b235f:
      local_78._4_4_ = iVar1;
    }
  }
  auStack_30._4_4_ = local_78._4_4_;
  auStack_30._0_4_ = 0xffffffff;
  auStack_30._8_4_ = uStack_70;
  auStack_30._12_4_ = iStack_6c;
  uStack_40 = local_88;
  uStack_3c = uStack_84;
  local_50 = 0;
  local_20._0_4_ = SUB84(plVar7,0);
  local_20._4_4_ = (undefined4)((ulonglong)plVar7 >> 0x20);
  uStack_70 = 0xffffffff;
  iStack_6c = local_78._4_4_;
  uStack_80 = local_88;
  uStack_7c = uStack_84;
  local_68._8_4_ = (undefined4)local_20;
  local_68._0_8_ = auStack_30._8_8_;
  local_68._12_4_ = local_20._4_4_;
  bVar3 = local_78._4_4_ < *(int *)(param_1 + 0x288);
  local_58 = plVar7;
  local_48 = plVar7;
  local_20 = plVar7;
  local_78 = puStack_38;
  if (bVar3) {
    do {
      if ((*(byte *)(*plVar7 + (longlong)iStack_6c * 0x18) & 1) != 0) {
        lVar6 = *(longlong *)(*plVar7 + 8 + (longlong)iStack_6c * 0x18);
        plVar2 = *(longlong **)(param_2 + 0x1650);
        if (plVar2 == (longlong *)0x0) {
          FUN_140ac3dd0(param_2 + 0x1658,local_res8,lVar6 + 0x1c,0);
        }
        else {
          (**(code **)(*plVar2 + 0x290))(plVar2,lVar6);
        }
      }
      uStack_70 = uStack_70 & ~uStack_7c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
    } while (iStack_6c < (int)local_78[6]);
    if (((char)local_50 != '\0') && (local_50._1_1_ != '\0')) {
      TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 1425b2460 AddClientConnection body=83 status=ok
// SIG undefined AddClientConnection(void)

void UReplicationDriver::AddClientConnection(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             0x46,L"Pure virtual not implemented (%s)",L"UReplicationDriver::AddClientConnection");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             0x46,L"Pure virtual not implemented (%s)",L"UReplicationDriver::AddClientConnection");
  return;
}



// FUNCTION 1425b24c0 FUN_1425b24c0 body=73 status=ok
// SIG undefined FUN_1425b24c0(void)

void FUN_1425b24c0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  FUN_1425e3cc0(*(undefined8 *)(param_1 + 0x528),param_2,*(undefined8 *)(param_1 + 0x120),0);
  plVar1 = *(longlong **)(param_1 + 0x520);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2a0))(plVar1,param_2);
  }
  return;
}



// FUNCTION 1425b2510 AddNetworkActor body=83 status=ok
// SIG undefined AddNetworkActor(void)

void UReplicationDriver::AddNetworkActor(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             0x4a,L"Pure virtual not implemented (%s)",L"UReplicationDriver::AddNetworkActor");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             0x4a,L"Pure virtual not implemented (%s)",L"UReplicationDriver::AddNetworkActor");
  return;
}



// FUNCTION 1425b2570 AddReferencedObjects body=138 status=ok
// SIG undefined AddReferencedObjects(void)

void UModel::AddReferencedObjects(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x70)) {
    do {
      lVar2 = (longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 0x68);
      (**(code **)(*param_2 + 0x38))(param_2,lVar2,0,0);
      (**(code **)(*param_2 + 0x38))(param_2,lVar2 + 0x20);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x70));
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 1425b2600 FUN_1425b2600 body=1072 status=ok
// SIG undefined FUN_1425b2600(void)

void FUN_1425b2600(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  undefined8 local_res8;
  uint local_b8;
  uint uStack_b4;
  uint uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_90;
  uint *puStack_88;
  uint uStack_80;
  uint uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined2 local_60;
  longlong *local_58;
  undefined8 uStack_50;
  uint *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar9 = 0;
  puVar11 = *(undefined8 **)(param_1 + 0x1580);
  uVar8 = (longlong)*(int *)(param_1 + 0x1588) & 0x1fffffffffffffff;
  if (puVar11 + *(int *)(param_1 + 0x1588) < puVar11) {
    uVar8 = uVar9;
  }
  uVar12 = uVar9;
  if (uVar8 != 0) {
    do {
      local_res8 = *puVar11;
      (**(code **)(*param_2 + 0x38))(param_2,&local_res8,param_1,0);
      uVar12 = uVar12 + 1;
      puVar11 = puVar11 + 1;
    } while (uVar12 != uVar8);
  }
  plVar1 = (longlong *)(param_1 + 0x16a8);
  uStack_b4 = 1;
  iVar7 = *(int *)(param_1 + 0x16d0);
  puStack_88 = (uint *)(param_1 + 0x16b8);
  local_b8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  if (iVar7 != 0) {
    puVar14 = *(uint **)(param_1 + 0x16c8);
    if (*(uint **)(param_1 + 0x16c8) == (uint *)0x0) {
      puVar14 = puStack_88;
    }
    uVar2 = *puVar14;
    uVar8 = uVar9;
    uVar12 = uVar9;
    while (uVar2 == 0) {
      iVar6 = (int)uVar8;
      uStack_a0 = (int)uVar12 + 0x20;
      uVar12 = (ulonglong)uStack_a0;
      local_b8 = iVar6 + 1;
      uVar8 = (ulonglong)local_b8;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_1425b273d;
      uVar2 = puVar14[(longlong)iVar6 + 1];
    }
    uStack_b4 = -uVar2 & uVar2;
    iVar6 = 0x1f;
    if (uStack_b4 != 0) {
      for (; uStack_b4 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_b4 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_a4 = (uStack_a0 - iVar6) + 0x1f;
    if (iVar7 < (int)uStack_a4) {
LAB_1425b273d:
      uStack_a4 = iVar7;
    }
  }
  auVar5._4_4_ = uStack_a4;
  auVar5._0_4_ = 0xffffffff;
  auVar5._8_4_ = uStack_a0;
  auVar5._12_4_ = uStack_9c;
  uStack_90 = CONCAT44(uStack_b4,local_b8);
  local_60 = 0;
  uStack_30._0_4_ = SUB84(plVar1,0);
  uStack_30._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_80 = 0xffffffff;
  uStack_7c = uStack_a4;
  uStack_78 = auVar5._8_8_;
  auVar4._8_4_ = (undefined4)uStack_30;
  auVar4._0_8_ = uStack_78;
  auVar4._12_4_ = uStack_30._4_4_;
  uStack_70 = auVar4._8_8_;
  local_68 = plVar1;
  uStack_30 = plVar1;
  if ((int)uStack_a4 < *(int *)(param_1 + 0x16d0)) {
    do {
      uVar12 = (ulonglong)*(int *)((longlong)(int)uStack_7c * 0x20 + 0x10 + *plVar1);
      puVar11 = *(undefined8 **)((longlong)(int)uStack_7c * 0x20 + 8 + *plVar1);
      uVar8 = uVar12 & 0x1fffffffffffffff;
      if (puVar11 + uVar12 < puVar11) {
        uVar8 = uVar9;
      }
      uVar12 = uVar9;
      if (uVar8 != 0) {
        do {
          local_res8 = *puVar11;
          (**(code **)(*param_2 + 0x38))(param_2,&local_res8,param_1,0);
          uVar12 = uVar12 + 1;
          puVar11 = puVar11 + 1;
        } while (uVar12 != uVar8);
      }
      uStack_80 = uStack_80 & ~uStack_90._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
    } while ((int)uStack_7c < (int)puStack_88[6]);
    if (((char)local_60 != '\0') && (local_60._1_1_ != '\0')) {
      TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_68,(int)local_68[1] - *(int *)((longlong)local_68 + 0x34),1);
    }
  }
  plVar1 = (longlong *)(param_1 + 0x1838);
  uStack_b4 = 1;
  uVar2 = *(uint *)(param_1 + 0x1860);
  puVar14 = (uint *)(param_1 + 0x1848);
  local_b8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  if (uVar2 != 0) {
    puVar15 = *(uint **)(param_1 + 0x1858);
    if (*(uint **)(param_1 + 0x1858) == (uint *)0x0) {
      puVar15 = puVar14;
    }
    uVar3 = *puVar15;
    uVar8 = uVar9;
    while (uVar3 == 0) {
      iVar7 = (int)uVar9;
      uStack_a0 = (int)uVar8 + 0x20;
      uVar8 = (ulonglong)uStack_a0;
      local_b8 = iVar7 + 1;
      uVar9 = (ulonglong)local_b8;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_1425b28ed;
      uVar3 = puVar15[(longlong)iVar7 + 1];
    }
    uStack_b4 = -uVar3 & uVar3;
    iVar7 = 0x1f;
    if (uStack_b4 != 0) {
      for (; uStack_b4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_b4 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_a4 = (uStack_a0 - iVar7) + 0x1f;
    if ((int)uVar2 < (int)uStack_a4) {
LAB_1425b28ed:
      uStack_a4 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x1860);
  uStack_40 = CONCAT44(uStack_a4,0xffffffff);
  uStack_78 = CONCAT44(uStack_9c,uStack_a0);
  uStack_50 = CONCAT44(uStack_b4,local_b8);
  uVar13 = uVar3 & 0xffffffe0;
  uStack_90._0_4_ = local_b8;
  uStack_90._4_4_ = uStack_b4;
  uStack_80 = 0xffffffff;
  uStack_7c = uStack_a4;
  puStack_88 = puVar14;
  local_58 = plVar1;
  puStack_48 = puVar14;
  uStack_38 = uStack_78;
  uStack_a4 = uVar3;
  if (uVar3 != uVar2) {
    puVar15 = *(uint **)(param_1 + 0x1858);
    if (*(uint **)(param_1 + 0x1858) == (uint *)0x0) {
      puVar15 = puVar14;
    }
    uVar10 = puVar15[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar7 = (int)uVar3 >> 5;
    while (uVar10 == 0) {
      uVar13 = uVar13 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_1425b29b3;
      uVar10 = puVar15[(longlong)iVar7 + 1];
      iVar7 = iVar7 + 1;
    }
    uVar10 = -uVar10 & uVar10;
    iVar7 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar10 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_a4 = (uVar13 - iVar7) + 0x1f;
    if ((int)uVar2 < (int)uStack_a4) {
LAB_1425b29b3:
      uStack_a4 = uVar2;
    }
  }
  while ((uStack_7c != uStack_a4 || (puStack_88 != puVar14))) {
    (**(code **)(*param_2 + 0x38))(param_2,*plVar1 + (longlong)(int)uStack_7c * 0x18,param_1,0);
    uStack_80 = uStack_80 & ~uStack_90._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 1425b2a30 FUN_1425b2a30 body=1674 status=ok
// SIG undefined FUN_1425b2a30(void)

void FUN_1425b2a30(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  uint *puVar19;
  int iVar20;
  uint uVar21;
  uint *puVar22;
  int local_b8;
  uint uStack_b4;
  uint uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_90;
  uint *puStack_88;
  uint uStack_80;
  uint uStack_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  longlong *local_68;
  char local_60;
  char cStack_5f;
  longlong *local_58;
  undefined8 uStack_50;
  uint *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [12];
  undefined4 uStack_2c;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  iVar18 = 0;
  uStack_b4 = 1;
  plVar1 = (longlong *)(param_1 + 0x358);
  local_b8 = 0;
  iVar15 = *(int *)(param_1 + 0x380);
  puStack_88 = (uint *)(param_1 + 0x368);
  uStack_a4 = 0;
  iStack_a0 = 0;
  if (iVar15 != 0) {
    puVar22 = *(uint **)(param_1 + 0x378);
    if (*(uint **)(param_1 + 0x378) == (uint *)0x0) {
      puVar22 = puStack_88;
    }
    uVar2 = *puVar22;
    iStack_a0 = iVar18;
    local_b8 = iVar18;
    while (uVar2 == 0) {
      lVar17 = (longlong)local_b8;
      iStack_a0 = iStack_a0 + 0x20;
      iVar20 = local_b8 + 1;
      bVar5 = (int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_b8;
      local_b8 = iVar20;
      if (bVar5) goto LAB_1425b2b0b;
      uVar2 = puVar22[lVar17 + 1];
    }
    uStack_b4 = -uVar2 & uVar2;
    iVar20 = 0x1f;
    if (uStack_b4 != 0) {
      for (; uStack_b4 >> iVar20 == 0; iVar20 = iVar20 + -1) {
      }
    }
    if (uStack_b4 == 0) {
      iVar20 = 0x20;
    }
    else {
      iVar20 = 0x1f - iVar20;
    }
    uStack_a4 = (iStack_a0 - iVar20) + 0x1f;
    if (iVar15 < (int)uStack_a4) {
LAB_1425b2b0b:
      uStack_a4 = iVar15;
    }
  }
  auVar9._4_4_ = uStack_a4;
  auVar9._0_4_ = 0xffffffff;
  auVar9._8_4_ = iStack_a0;
  auVar9._12_4_ = uStack_9c;
  uStack_90 = CONCAT44(uStack_b4,local_b8);
  local_60 = '\0';
  cStack_5f = '\0';
  auStack_38._8_4_ = SUB84(plVar1,0);
  uStack_2c = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_80 = 0xffffffff;
  uStack_7c = uStack_a4;
  uStack_78 = auVar9._8_8_;
  auStack_38._0_8_ = uStack_78;
  auVar6._8_4_ = auStack_38._8_4_;
  auVar6._0_8_ = uStack_78;
  auVar6._12_4_ = uStack_2c;
  local_70 = auVar6._8_8_;
  local_68 = plVar1;
  if ((int)uStack_a4 < *(int *)(param_1 + 0x380)) {
    do {
      if (*(longlong *)((longlong)(int)uStack_7c * 0x20 + 8 + *plVar1) == 0) {
        TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
        ::Remove(local_70);
        local_60 = '\x01';
      }
      uStack_80 = uStack_80 & ~uStack_90._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
    } while ((int)uStack_7c < (int)puStack_88[6]);
    if ((local_60 != '\0') && (cStack_5f != '\0')) {
      TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_68,(int)local_68[1] - *(int *)((longlong)local_68 + 0x34),1);
    }
  }
  plVar1 = (longlong *)(param_1 + 0x3a8);
  local_b8 = 0;
  iVar15 = *(int *)(param_1 + 0x3d0);
  puStack_88 = (uint *)(param_1 + 0x3b8);
  uStack_b4 = 1;
  uStack_a4 = 0;
  iStack_a0 = 0;
  if (iVar15 != 0) {
    puVar22 = *(uint **)(param_1 + 0x3c8);
    if (*(uint **)(param_1 + 0x3c8) == (uint *)0x0) {
      puVar22 = puStack_88;
    }
    uVar2 = *puVar22;
    iStack_a0 = iVar18;
    local_b8 = iVar18;
    while (uVar2 == 0) {
      lVar17 = (longlong)local_b8;
      iStack_a0 = iStack_a0 + 0x20;
      iVar20 = local_b8 + 1;
      bVar5 = (int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_b8;
      local_b8 = iVar20;
      if (bVar5) goto LAB_1425b2c7d;
      uVar2 = puVar22[lVar17 + 1];
    }
    uStack_b4 = -uVar2 & uVar2;
    iVar20 = 0x1f;
    if (uStack_b4 != 0) {
      for (; uStack_b4 >> iVar20 == 0; iVar20 = iVar20 + -1) {
      }
    }
    if (uStack_b4 == 0) {
      iVar20 = 0x20;
    }
    else {
      iVar20 = 0x1f - iVar20;
    }
    uStack_a4 = (iStack_a0 - iVar20) + 0x1f;
    if (iVar15 < (int)uStack_a4) {
LAB_1425b2c7d:
      uStack_a4 = iVar15;
    }
  }
  auVar10._4_4_ = uStack_a4;
  auVar10._0_4_ = 0xffffffff;
  auVar10._8_4_ = iStack_a0;
  auVar10._12_4_ = uStack_9c;
  uStack_90 = CONCAT44(uStack_b4,local_b8);
  local_60 = '\0';
  cStack_5f = '\0';
  auStack_38._8_4_ = SUB84(plVar1,0);
  uVar12 = auStack_38._8_4_;
  uStack_2c = (undefined4)((ulonglong)plVar1 >> 0x20);
  uVar13 = uStack_2c;
  uStack_80 = 0xffffffff;
  uStack_7c = uStack_a4;
  uStack_78 = auVar10._8_8_;
  auStack_38._0_8_ = uStack_78;
  auVar7._8_4_ = auStack_38._8_4_;
  auVar7._0_8_ = uStack_78;
  auVar7._12_4_ = uStack_2c;
  local_70 = auVar7._8_8_;
  local_68 = plVar1;
  uVar14 = uStack_78;
  if ((int)uStack_a4 < *(int *)(param_1 + 0x3d0)) {
    do {
      if (*(longlong *)((longlong)(int)uStack_7c * 0x20 + 8 + *plVar1) == 0) {
        TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
        ::Remove(local_70);
        local_60 = '\x01';
      }
      uStack_80 = uStack_80 & ~uStack_90._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
    } while ((int)uStack_7c < (int)puStack_88[6]);
    uVar14 = auStack_38._0_8_;
    if ((local_60 != '\0') && (cStack_5f != '\0')) {
      TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_68,(int)local_68[1] - *(int *)((longlong)local_68 + 0x34),1);
      uVar14 = auStack_38._0_8_;
    }
  }
  auStack_38._0_8_ = uVar14;
  iVar15 = *(int *)(param_1 + 0x3d0);
  puStack_88 = (uint *)(param_1 + 0x3b8);
  local_b8 = 0;
  uStack_b4 = 1;
  uStack_a4 = 0;
  iStack_a0 = 0;
  if (iVar15 != 0) {
    puVar22 = *(uint **)(param_1 + 0x3c8);
    if (*(uint **)(param_1 + 0x3c8) == (uint *)0x0) {
      puVar22 = puStack_88;
    }
    uVar2 = *puVar22;
    iStack_a0 = iVar18;
    local_b8 = iVar18;
    while (uVar2 == 0) {
      lVar17 = (longlong)local_b8;
      iStack_a0 = iStack_a0 + 0x20;
      iVar20 = local_b8 + 1;
      bVar5 = (int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_b8;
      local_b8 = iVar20;
      if (bVar5) goto LAB_1425b2ddd;
      uVar2 = puVar22[lVar17 + 1];
    }
    uStack_b4 = -uVar2 & uVar2;
    iVar20 = 0x1f;
    if (uStack_b4 != 0) {
      for (; uStack_b4 >> iVar20 == 0; iVar20 = iVar20 + -1) {
      }
    }
    if (uStack_b4 == 0) {
      iVar20 = 0x20;
    }
    else {
      iVar20 = 0x1f - iVar20;
    }
    uStack_a4 = (iStack_a0 - iVar20) + 0x1f;
    if (iVar15 < (int)uStack_a4) {
LAB_1425b2ddd:
      uStack_a4 = iVar15;
    }
  }
  auVar11._4_4_ = uStack_a4;
  auVar11._0_4_ = 0xffffffff;
  auVar11._8_4_ = iStack_a0;
  auVar11._12_4_ = uStack_9c;
  uStack_90 = CONCAT44(uStack_b4,local_b8);
  local_60 = '\0';
  cStack_5f = '\0';
  uStack_80 = 0xffffffff;
  uStack_7c = uStack_a4;
  uStack_78 = auVar11._8_8_;
  auVar8._8_4_ = uVar12;
  auVar8._0_8_ = uStack_78;
  auVar8._12_4_ = uVar13;
  local_70 = auVar8._8_8_;
  local_68 = plVar1;
  unique0x10000d21 = plVar1;
  if ((int)uStack_a4 < *(int *)(param_1 + 0x3d0)) {
    do {
      lVar17 = *(longlong *)((longlong)(int)uStack_7c * 0x20 + 8 + *plVar1);
      if (lVar17 == 0) {
        TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
        ::Remove(local_70,uStack_7c);
        local_60 = '\x01';
      }
      else {
        plVar4 = *(longlong **)(lVar17 + 0x18);
        if ((plVar4 != (longlong *)0x0) && (plVar4 = (longlong *)*plVar4, plVar4 != (longlong *)0x0)
           ) {
          (**(code **)(*plVar4 + 8))(plVar4,param_2);
        }
      }
      uStack_80 = uStack_80 & ~uStack_90._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
    } while ((int)uStack_7c < (int)puStack_88[6]);
    if ((local_60 != '\0') && (cStack_5f != '\0')) {
      TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_68,(int)local_68[1] - *(int *)((longlong)local_68 + 0x34),
                          CONCAT71((uint7)(uint3)(uStack_7c >> 8),1));
    }
  }
  plVar1 = (longlong *)(param_1 + 0x4a0);
  local_b8 = 0;
  uVar2 = *(uint *)(param_1 + 0x4c8);
  puVar22 = (uint *)(param_1 + 0x4b0);
  uStack_b4 = 1;
  uStack_a4 = 0;
  iStack_a0 = 0;
  if (uVar2 != 0) {
    puVar19 = *(uint **)(param_1 + 0x4c0);
    if (*(uint **)(param_1 + 0x4c0) == (uint *)0x0) {
      puVar19 = puVar22;
    }
    uVar3 = *puVar19;
    iStack_a0 = iVar18;
    local_b8 = iVar18;
    while (uVar3 == 0) {
      lVar17 = (longlong)local_b8;
      iStack_a0 = iStack_a0 + 0x20;
      iVar15 = local_b8 + 1;
      bVar5 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_b8;
      local_b8 = iVar15;
      if (bVar5) goto LAB_1425b2f6d;
      uVar3 = puVar19[lVar17 + 1];
    }
    uStack_b4 = -uVar3 & uVar3;
    iVar15 = 0x1f;
    if (uStack_b4 != 0) {
      for (; uStack_b4 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uStack_b4 == 0) {
      iVar15 = 0x20;
    }
    else {
      iVar15 = 0x1f - iVar15;
    }
    uStack_a4 = (iStack_a0 - iVar15) + 0x1f;
    if ((int)uVar2 < (int)uStack_a4) {
LAB_1425b2f6d:
      uStack_a4 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x4c8);
  uStack_40 = CONCAT44(uStack_a4,0xffffffff);
  uStack_78 = CONCAT44(uStack_9c,iStack_a0);
  uStack_50 = CONCAT44(uStack_b4,local_b8);
  auStack_38._0_8_ = uStack_78;
  uVar21 = uVar3 & 0xffffffe0;
  uStack_90._0_4_ = local_b8;
  uStack_90._4_4_ = uStack_b4;
  uStack_80 = 0xffffffff;
  uStack_7c = uStack_a4;
  puStack_88 = puVar22;
  local_58 = plVar1;
  puStack_48 = puVar22;
  uStack_a4 = uVar3;
  if (uVar3 != uVar2) {
    puVar19 = *(uint **)(param_1 + 0x4c0);
    if (*(uint **)(param_1 + 0x4c0) == (uint *)0x0) {
      puVar19 = puVar22;
    }
    uVar16 = puVar19[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar15 = (int)uVar3 >> 5;
    while (uVar16 == 0) {
      uVar21 = uVar21 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar15)
      goto LAB_1425b3032;
      uVar16 = puVar19[(longlong)iVar15 + 1];
      iVar15 = iVar15 + 1;
    }
    uVar16 = -uVar16 & uVar16;
    iVar15 = 0x1f;
    if (uVar16 != 0) {
      for (; uVar16 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar16 == 0) {
      iVar15 = 0x20;
    }
    else {
      iVar15 = 0x1f - iVar15;
    }
    uStack_a4 = (uVar21 - iVar15) + 0x1f;
    if ((int)uVar2 < (int)uStack_a4) {
LAB_1425b3032:
      uStack_a4 = uVar2;
    }
  }
  while ((uStack_7c != uStack_a4 || (puStack_88 != puVar22))) {
    lVar17 = *(longlong *)(*plVar1 + (longlong)(int)uStack_7c * 0x10);
    (**(code **)(*param_2 + 0x38))(param_2,lVar17 + 0x10,param_1,0);
    (**(code **)(*param_2 + 0x38))(param_2,lVar17,param_1);
    uStack_80 = uStack_80 & ~uStack_90._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
  }
  return;
}



// FUNCTION 1425b30c0 FUN_1425b30c0 body=720 status=ok
// SIG undefined FUN_1425b30c0(void)

void FUN_1425b30c0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  wchar_t *_Str;
  longlong *plVar9;
  ulonglong uVar10;
  longlong local_58;
  int local_50;
  longlong local_48;
  ulonglong local_40;
  int local_38;
  
  iVar3 = 99;
  if (0 < (int)param_1[1]) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_1;
    }
    iVar3 = _wtoi(_Str);
  }
  local_38 = -1;
  local_48 = 0;
  local_40 = 0;
  uVar4 = FUN_1429c3150();
  FUN_1417a5560(uVar4,&local_48,1,0x10,0);
  uVar10 = local_40 & 0xffffffff;
  do {
    local_38 = local_38 + 1;
    lVar6 = local_48;
    if ((int)local_40 <= local_38) break;
  } while (*(longlong *)(local_48 + (longlong)local_38 * 8) == 0);
LAB_1425b3160:
  if ((local_38 < 0) || ((int)uVar10 <= local_38)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  plVar9 = (longlong *)0x0;
  if (!bVar1) goto LAB_1425b31d3;
  plVar9 = *(longlong **)(lVar6 + (longlong)local_38 * 8);
  if (plVar9[0x24] == 0x11a) {
    cVar2 = (**(code **)(*plVar9 + 0x368))(plVar9);
    lVar6 = local_48;
    if (cVar2 != '\0') {
      plVar9 = *(longlong **)(local_48 + (longlong)local_38 * 8);
LAB_1425b31d3:
      if (lVar6 != 0) {
        FMemory::Free(lVar6);
      }
      if (plVar9 == (longlong *)0x0) {
        return;
      }
      UWorld::GetPlayerControllerIterator(plVar9[0x1a],&local_58);
      do {
        if ((local_50 < 0) || (*(int *)(local_58 + 8) <= local_50)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        plVar5 = (longlong *)0x0;
        if (!bVar1) goto joined_r0x0001425b3283;
        plVar5 = (longlong *)FWeakObjectPtr::Get();
        if (plVar5 != (longlong *)0x0) {
          lVar6 = FUN_1429e18b0();
          if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
              != lVar6 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            (**(code **)(*plVar5 + 0x758))(plVar5);
joined_r0x0001425b3283:
            for (; 0 < iVar3; iVar3 = iVar3 + -1) {
              uVar4 = GetTransientPackage();
              FUN_1417846f0(uVar4,
                            L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                           );
              uVar7 = FUN_1429c1070();
              uVar10 = 0;
              plVar8 = (longlong *)FUN_1417985e0(uVar7,uVar4,0,0,0,0,0,0,0);
              (**(code **)(*plVar8 + 800))
                        (plVar8,plVar9,3,plVar9[0x1a] + 0x560,1000000,uVar10 & 0xffffffff00000000);
              (**(code **)(*plVar8 + 0x2b0))(plVar8);
              FUN_1425b2240(plVar9,plVar8);
              (**(code **)(*plVar8 + 0x2e0))(plVar8,plVar5,plVar8);
              plVar8[0x311] = *(longlong *)(plVar9[0x1b] + 0x18);
              FUN_1425d47e0(plVar8);
            }
            return;
          }
        }
        local_50 = local_50 + 1;
      } while( true );
    }
    uVar10 = local_40 & 0xffffffff;
  }
  do {
    local_38 = local_38 + 1;
    if ((int)uVar10 <= local_38) break;
  } while (*(longlong *)(lVar6 + (longlong)local_38 * 8) == 0);
  goto LAB_1425b3160;
}



// FUNCTION 1425b3390 FUN_1425b3390 body=1467 status=ok
// SIG undefined FUN_1425b3390(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1425b3390(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  undefined1 auStack_198 [32];
  undefined1 local_178 [8];
  undefined8 ***local_170;
  undefined8 local_168;
  uint uStack_160;
  uint uStack_15c;
  undefined8 local_158;
  uint uStack_150;
  int iStack_14c;
  undefined1 local_148 [16];
  longlong *local_138;
  undefined2 local_130;
  undefined8 ***local_128;
  undefined8 ***local_120;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  longlong *local_108;
  uint uStack_100;
  uint uStack_fc;
  uint *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  uint local_c8 [4];
  uint *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  int local_a4;
  longlong local_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 local_80;
  uint local_78 [4];
  uint *local_68;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  local_88 = 0;
  local_80 = 0;
  local_68 = (uint *)0x0;
  local_60 = 0;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_b8 = (uint *)0x0;
  local_b0 = 0;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  local_58 = 0xffffffff;
  local_a8 = 0xffffffff;
  uVar10 = 0;
  for (uVar8 = uVar10; (-1 < (int)uVar8 && ((int)uVar8 < (int)param_1[1])); uVar8 = uVar8 + 1) {
    lVar6 = FWeakObjectPtr::Get(*param_1 + (longlong)(int)uVar8 * 8);
    if (lVar6 != 0) {
      FWeakObjectPtr::operator=(&local_128,*(undefined8 *)(lVar6 + 0x10));
      local_170 = local_128;
      TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
      ::FindId(&local_88,&local_118,&local_170);
      if ((local_118 == -1) || (lVar7 = local_88 + (longlong)local_118 * 0x14, lVar7 == 0)) {
        local_170 = &local_128;
        FUN_1425a9d40(&local_88,&local_114,&local_170,0);
        lVar7 = local_88 + (longlong)local_114 * 0x14;
      }
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      if (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) != 0) {
        FWeakObjectPtr::operator=(&local_120);
        local_170 = local_120;
        TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
        ::FindId(&local_d8,&local_110,&local_170);
        if ((local_110 == -1) || (lVar6 = local_d8 + (longlong)local_110 * 0x14, lVar6 == 0)) {
          local_170 = &local_120;
          FUN_1425a9d40(&local_d8,&local_10c,&local_170,0);
          lVar6 = local_d8 + (longlong)local_10c * 0x14;
        }
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      }
    }
  }
  local_170 = (undefined8 ***)local_178;
  local_120 = &local_170;
  if (0 < (int)local_80 - local_54) {
    TSparseArray<TSetElement<TTuple<TWeakObjectPtr<UClass,FWeakObjectPtr>,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Compact(&local_88);
    local_128 = &local_120;
    FUN_1425ac910(local_88,(longlong)((int)local_80 - local_54),local_178[0],&local_128);
  }
  TSet<TTuple<FWeakObjectPtr,int>,TDefaultMapHashableKeyFuncs<FWeakObjectPtr,int,0>,FDefaultSetAllocator>
  ::Rehash(&local_88);
  local_170 = (undefined8 ***)local_178;
  local_120 = &local_170;
  if (0 < (int)local_d0 - local_a4) {
    TSparseArray<TSetElement<TTuple<TWeakObjectPtr<UClass,FWeakObjectPtr>,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Compact(&local_d8);
    local_128 = &local_120;
    FUN_1425ac910(local_d8,(longlong)((int)local_d0 - local_a4),local_178[0],&local_128);
  }
  TSet<TTuple<FWeakObjectPtr,int>,TDefaultMapHashableKeyFuncs<FWeakObjectPtr,int,0>,FDefaultSetAllocator>
  ::Rehash(&local_d8);
  puStack_f8 = local_78;
  local_168._0_4_ = 0;
  local_168._4_4_ = 1;
  local_158._4_4_ = 0;
  uStack_150 = 0;
  if ((int)local_60 != 0) {
    puVar9 = local_78;
    if (local_68 != (uint *)0x0) {
      puVar9 = local_68;
    }
    uVar8 = *puVar9;
    local_168._0_4_ = uVar10;
    uStack_150 = uVar10;
    while (uVar8 == 0) {
      uStack_150 = uStack_150 + 0x20;
      if ((int)((int)local_60 + -1 + ((int)local_60 + -1 >> 0x1f & 0x1fU)) >> 5 <=
          (int)(uint)local_168) {
        local_158._4_4_ = (int)local_60;
        local_168._0_4_ = (uint)local_168 + 1;
        goto LAB_1425b36ba;
      }
      uVar8 = puVar9[(longlong)(int)(uint)local_168 + 1];
      local_168._0_4_ = (uint)local_168 + 1;
    }
    local_168._4_4_ = -uVar8 & uVar8;
    iVar5 = 0x1f;
    if (local_168._4_4_ != 0) {
      for (; local_168._4_4_ >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (local_168._4_4_ == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    local_158._4_4_ = (uStack_150 - iVar5) + 0x1f;
    if ((int)local_60 < local_158._4_4_) {
      local_158._4_4_ = (int)local_60;
    }
  }
LAB_1425b36ba:
  uStack_f0 = CONCAT44(local_158._4_4_,0xffffffff);
  auVar2._8_4_ = uStack_150;
  auVar2._0_8_ = uStack_f0;
  auVar2._12_4_ = iStack_14c;
  local_108 = &local_88;
  local_130 = 0;
  plVar4 = &local_88;
  local_e0._0_4_ = SUB84(plVar4,0);
  local_e0._4_4_ = (undefined4)((ulonglong)plVar4 >> 0x20);
  uStack_100 = (uint)local_168;
  uStack_fc = local_168._4_4_;
  local_138 = &local_88;
  uStack_e8 = auVar2._8_8_;
  uStack_160 = (uint)local_168;
  uStack_15c = local_168._4_4_;
  uStack_150 = 0xffffffff;
  iStack_14c = local_158._4_4_;
  local_148._8_4_ = (undefined4)local_e0;
  local_148._0_8_ = uStack_e8;
  local_148._12_4_ = local_e0._4_4_;
  bVar1 = local_158._4_4_ < (int)local_60;
  local_168 = local_108;
  local_158 = puStack_f8;
  if (bVar1) {
    do {
      uStack_150 = uStack_150 & ~uStack_15c;
      local_e0 = plVar4;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_160);
      plVar4 = local_e0;
    } while (iStack_14c < (int)local_158[6]);
    if (((char)local_130 != '\0') && (local_130._1_1_ != '\0')) {
      TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_138,(int)local_138[1] - *(int *)((longlong)local_138 + 0x34),1);
    }
  }
  puStack_f8 = local_c8;
  local_168._0_4_ = 0;
  local_168._4_4_ = 1;
  local_158._4_4_ = 0;
  uStack_150 = 0;
  if ((int)local_b0 != 0) {
    puVar9 = local_c8;
    if (local_b8 != (uint *)0x0) {
      puVar9 = local_b8;
    }
    uVar8 = *puVar9;
    local_168._0_4_ = uVar10;
    uStack_150 = uVar10;
    while (uVar8 == 0) {
      uStack_150 = uStack_150 + 0x20;
      if ((int)((int)local_b0 + -1 + ((int)local_b0 + -1 >> 0x1f & 0x1fU)) >> 5 <=
          (int)(uint)local_168) {
        local_158._4_4_ = (int)local_b0;
        local_168._0_4_ = (uint)local_168 + 1;
        goto LAB_1425b3828;
      }
      uVar8 = puVar9[(longlong)(int)(uint)local_168 + 1];
      local_168._0_4_ = (uint)local_168 + 1;
    }
    local_168._4_4_ = -uVar8 & uVar8;
    iVar5 = 0x1f;
    if (local_168._4_4_ != 0) {
      for (; local_168._4_4_ >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (local_168._4_4_ == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    local_158._4_4_ = (uStack_150 - iVar5) + 0x1f;
    if ((int)local_b0 < local_158._4_4_) {
      local_158._4_4_ = (int)local_b0;
    }
  }
LAB_1425b3828:
  uStack_f0 = CONCAT44(local_158._4_4_,0xffffffff);
  auVar3._8_4_ = uStack_150;
  auVar3._0_8_ = uStack_f0;
  auVar3._12_4_ = iStack_14c;
  local_108 = &local_d8;
  plVar4 = &local_d8;
  local_e0._0_4_ = SUB84(plVar4,0);
  local_e0._4_4_ = (undefined4)((ulonglong)plVar4 >> 0x20);
  uStack_100 = (uint)local_168;
  uStack_fc = local_168._4_4_;
  local_138 = &local_d8;
  local_130 = 0;
  uStack_e8 = auVar3._8_8_;
  uStack_160 = (uint)local_168;
  uStack_15c = local_168._4_4_;
  uStack_150 = 0xffffffff;
  iStack_14c = local_158._4_4_;
  local_148._8_4_ = (undefined4)local_e0;
  local_148._0_8_ = uStack_e8;
  local_148._12_4_ = local_e0._4_4_;
  bVar1 = local_158._4_4_ < (int)local_b0;
  local_168 = local_108;
  local_e0 = plVar4;
  local_158 = puStack_f8;
  if (bVar1) {
    do {
      uStack_150 = uStack_150 & ~uStack_15c;
      local_e0 = plVar4;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_160);
      plVar4 = local_e0;
    } while (iStack_14c < (int)local_158[6]);
    if (((char)local_130 != '\0') && (local_130._1_1_ != '\0')) {
      TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_138,(int)local_138[1] - *(int *)((longlong)local_138 + 0x34),1);
    }
  }
  local_90 = 0;
  if (local_98 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_d8);
  local_40 = 0;
  if (local_48 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_88);
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1425b3950 FUN_1425b3950 body=89 status=ok
// SIG undefined FUN_1425b3950(void)

bool FUN_1425b3950(void)

{
  int *piVar1;
  char cVar2;
  DWORD DVar3;
  
  piVar1 = DAT_146aff010;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      return piVar1[1] == 1;
    }
  }
  return *piVar1 == 1;
}



// FUNCTION 1425b39d0 FUN_1425b39d0 body=330 status=ok
// SIG undefined FUN_1425b39d0(void)

void FUN_1425b39d0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  DWORD DVar8;
  longlong *plVar9;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [32];
  
  if (*(longlong *)(param_1 + 0x58) != 0) {
    local_48 = *(undefined4 *)(param_1 + 0x28);
    uStack_44 = *(undefined4 *)(param_1 + 0x2c);
    uStack_40 = *(undefined4 *)(param_1 + 0x30);
    uStack_3c = *(undefined4 *)(param_1 + 0x34);
    if ((DAT_146ac3ac6 == '\0') || (cVar7 = IsInRenderingThread(), cVar7 == '\0')) {
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar7 = FUN_1415ad720(&DAT_1468e2448), cVar7 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar8 = GetCurrentThreadId(), DVar8 == DAT_1468c21c0)))) {
        local_38 = local_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        FBaseGraphTask::GetSmallTaskAllocator();
        TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
        ::Remove(&DAT_1465340e0,&local_38);
      }
      else {
        plVar9 = (longlong *)FUN_1425bae40(local_28,0,0xff);
        lVar3 = *plVar9;
        *(undefined4 *)(lVar3 + 0x10) = local_48;
        *(undefined4 *)(lVar3 + 0x14) = uStack_44;
        *(undefined4 *)(lVar3 + 0x18) = uStack_40;
        *(undefined4 *)(lVar3 + 0x1c) = uStack_3c;
        lVar3 = *plVar9;
        lVar6 = plVar9[2];
        lVar4 = plVar9[1];
        lVar5 = *(longlong *)(lVar3 + 0x28);
        piVar1 = (int *)(lVar5 + 0x48);
        if (lVar5 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        FUN_1409421c0(lVar3,lVar4,(int)lVar6,1);
        if (lVar5 != 0) {
          LOCK();
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar5);
          }
        }
      }
    }
    else {
      FBaseGraphTask::GetSmallTaskAllocator();
      TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
      ::Remove(&DAT_1465340e0,&local_48);
    }
    FUN_1425beac0(*(undefined8 *)(param_1 + 0x58));
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 1425b3b20 FUN_1425b3b20 body=445 status=ok
// SIG undefined FUN_1425b3b20(void)

void FUN_1425b3b20(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint *puVar7;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  uint uStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  FUN_1417502d0();
  plVar1 = (longlong *)(param_1 + 0x88);
  local_78 = 0;
  uStack_74 = 1;
  iVar2 = *(int *)(param_1 + 0xb0);
  puStack_28 = (uint *)(param_1 + 0x98);
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar2 != 0) {
    puVar7 = *(uint **)(param_1 + 0xa8);
    if (*(uint **)(param_1 + 0xa8) == (uint *)0x0) {
      puVar7 = puStack_28;
    }
    uVar6 = *puVar7;
    local_78 = 0;
    uStack_60 = 0;
    while (uVar6 == 0) {
      lVar5 = (longlong)(int)local_78;
      uStack_60 = uStack_60 + 0x20;
      uVar6 = local_78 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_78;
      local_78 = uVar6;
      if (bVar3) goto LAB_1425b3bed;
      uVar6 = puVar7[lVar5 + 1];
    }
    uStack_74 = -uVar6 & uVar6;
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
    local_68._4_4_ = (uStack_60 - iVar4) + 0x1f;
    if (iVar2 < local_68._4_4_) {
LAB_1425b3bed:
      local_68._4_4_ = iVar2;
    }
  }
  auStack_20._4_4_ = local_68._4_4_;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_60;
  auStack_20._12_4_ = iStack_5c;
  uStack_30 = local_78;
  uStack_2c = uStack_74;
  local_40 = 0;
  local_10._0_4_ = SUB84(plVar1,0);
  local_10._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  uStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  bVar3 = local_68._4_4_ < *(int *)(param_1 + 0xb0);
  local_48 = plVar1;
  local_38 = plVar1;
  local_10 = plVar1;
  local_68 = puStack_28;
  if (bVar3) {
    do {
      FUN_141edf360(*(undefined8 *)(*plVar1 + 8 + (longlong)iStack_5c * 0x18));
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  FUN_141edf360(param_1 + 0x1d8);
  FUN_141edf360(param_1 + 0xf0);
  FUN_141edede0(param_1 + 0x308,0);
  return;
}



// FUNCTION 1425b3ce0 FUN_1425b3ce0 body=445 status=ok
// SIG undefined FUN_1425b3ce0(void)

void FUN_1425b3ce0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint *puVar7;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  uint uStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  plVar1 = (longlong *)(param_1 + 0x88);
  local_78 = 0;
  uStack_74 = 1;
  iVar2 = *(int *)(param_1 + 0xb0);
  puStack_28 = (uint *)(param_1 + 0x98);
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar2 != 0) {
    puVar7 = *(uint **)(param_1 + 0xa8);
    if (*(uint **)(param_1 + 0xa8) == (uint *)0x0) {
      puVar7 = puStack_28;
    }
    uVar6 = *puVar7;
    local_78 = 0;
    uStack_60 = 0;
    while (uVar6 == 0) {
      lVar5 = (longlong)(int)local_78;
      uStack_60 = uStack_60 + 0x20;
      uVar6 = local_78 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_78;
      local_78 = uVar6;
      if (bVar3) goto LAB_1425b3db1;
      uVar6 = puVar7[lVar5 + 1];
    }
    uStack_74 = -uVar6 & uVar6;
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
    local_68._4_4_ = (uStack_60 - iVar4) + 0x1f;
    if (iVar2 < local_68._4_4_) {
LAB_1425b3db1:
      local_68._4_4_ = iVar2;
    }
  }
  auStack_20._4_4_ = local_68._4_4_;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_60;
  auStack_20._12_4_ = iStack_5c;
  uStack_30 = local_78;
  uStack_2c = uStack_74;
  local_40 = 0;
  local_10._0_4_ = SUB84(plVar1,0);
  local_10._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  uStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  bVar3 = local_68._4_4_ < *(int *)(param_1 + 0xb0);
  local_48 = plVar1;
  local_38 = plVar1;
  local_10 = plVar1;
  local_68 = puStack_28;
  if (bVar3) {
    do {
      FUN_141edf360(*(undefined8 *)(*plVar1 + 8 + (longlong)iStack_5c * 0x18));
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  FUN_141edf360(param_1 + 0x1d8);
  FUN_141edf360(param_1 + 0xf0);
  FUN_141edede0(param_1 + 0x308,0);
  return;
}



// FUNCTION 1425b3ea0 FUN_1425b3ea0 body=353 status=ok
// SIG undefined FUN_1425b3ea0(void)

void FUN_1425b3ea0(longlong param_1,undefined8 param_2)

{
  FShaderParameter::Bind(param_1 + 8,param_2,L"Transform1",0);
  FShaderParameter::Bind(param_1 + 0xe,param_2,L"Transform2",0);
  FShaderParameter::Bind(param_1 + 0x14,param_2,L"Transform3",0);
  FShaderParameter::Bind(param_1 + 0x1a,param_2,L"SubUVParams",0);
  FShaderParameter::Bind(param_1 + 0x20,param_2,L"SubUVLerp",0);
  FShaderParameter::Bind(param_1 + 0x26,param_2,L"ParticleDirection",0);
  FShaderParameter::Bind(param_1 + 0x2c,param_2,L"RelativeTime",0);
  FShaderParameter::Bind(param_1 + 0x32,param_2,L"DynamicParameter",0);
  FShaderParameter::Bind(param_1 + 0x38,param_2,L"ParticleColor",0);
  FShaderParameter::Bind(param_1 + 0x3e,param_2,L"PrevTransform0",0);
  FShaderParameter::Bind(param_1 + 0x44,param_2,L"PrevTransform1",0);
  FShaderParameter::Bind(param_1 + 0x4a,param_2,L"PrevTransform2",0);
  FShaderResourceParameter::Bind(param_1 + 0x50,param_2,L"PrevTransformBuffer",0);
  FShaderResourceParameter::Bind(param_1 + 0x54,param_2,L"MeshParameters",0);
  FShaderParameter::Bind(param_1 + 0x58,param_2,L"MeshParameterIndex",0);
  return;
}



// FUNCTION 1425b4010 FUN_1425b4010 body=196 status=ok
// SIG undefined FUN_1425b4010(void)

void FUN_1425b4010(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0xa14) = *(int *)(param_1 + 0xa14) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0xa14);
  iVar5 = *(int *)(param_1 + 0xa08) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0xa00);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1425b4086:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4);
        if (cVar4 == '\0') goto LAB_1425b4086;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0xa14);
  }
  *(int *)(param_1 + 0xa14) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0xa00),0);
    return;
  }
  return;
}



// FUNCTION 1425b40e0 FUN_1425b40e0 body=1144 status=ok
// SIG undefined FUN_1425b40e0(void)

void FUN_1425b40e0(void)

{
  bool bVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined2 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  uint *puVar15;
  int local_res8 [2];
  undefined1 local_res10 [8];
  undefined8 local_res18;
  longlong local_res20;
  undefined8 *puVar16;
  uint local_108;
  uint uStack_104;
  uint *puStack_100;
  undefined4 local_f8;
  int iStack_f4;
  uint uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8 [4];
  longlong *local_c8;
  undefined8 uStack_c0;
  uint *local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  longlong *local_98;
  undefined2 local_90;
  longlong local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  undefined8 uStack_60;
  uint *puStack_58;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  
  FName::FName(&local_res20,L"MatineeTrackRedirects",1);
  puVar16 = &DAT_1468e2360;
  local_c8 = (longlong *)
             FConfigCacheIni::GetSectionPrivate
                       (DAT_1468b6148,L"/Script/Engine.Engine",0,1,&DAT_1468e2360);
  iVar10 = (int)local_c8[5];
  uStack_104 = 1;
  local_108 = 0;
  puStack_100 = (uint *)(local_c8 + 2);
  iStack_f4 = 0;
  uStack_f0 = 0;
  if (iVar10 != 0) {
    puVar15 = (uint *)local_c8[4];
    if ((uint *)local_c8[4] == (uint *)0x0) {
      puVar15 = puStack_100;
    }
    uVar9 = *puVar15;
    local_108 = 0;
    uStack_f0 = 0;
    while (uVar9 == 0) {
      lVar12 = (longlong)(int)local_108;
      uStack_f0 = uStack_f0 + 0x20;
      uVar9 = local_108 + 1;
      bVar1 = (int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_108;
      local_108 = uVar9;
      if (bVar1) goto LAB_1425b41e4;
      uVar9 = puVar15[lVar12 + 1];
    }
    uStack_104 = -uVar9 & uVar9;
    iVar3 = 0x1f;
    if (uStack_104 != 0) {
      for (; uStack_104 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    if (uStack_104 == 0) {
      iVar3 = 0x20;
    }
    else {
      iVar3 = 0x1f - iVar3;
    }
    iStack_f4 = (uStack_f0 - iVar3) + 0x1f;
    if (iVar10 < iStack_f4) {
LAB_1425b41e4:
      iStack_f4 = iVar10;
    }
  }
  local_f8 = 0xffffffff;
  uStack_b0 = CONCAT44(iStack_f4,0xffffffff);
  auStack_50._8_4_ = uStack_f0;
  auStack_50._0_8_ = uStack_b0;
  auStack_50._12_4_ = uStack_ec;
  uStack_c0 = CONCAT44(uStack_104,local_108);
  local_90 = 0;
  local_40._0_4_ = SUB84(local_c8,0);
  local_40._4_4_ = (undefined4)((ulonglong)local_c8 >> 0x20);
  local_a8._8_4_ = (undefined4)local_40;
  local_a8._0_8_ = auStack_50._8_8_;
  local_a8._12_4_ = local_40._4_4_;
  iVar10 = iStack_f4;
  local_b8 = puStack_100;
  local_98 = local_c8;
  local_68 = local_c8;
  uStack_60 = uStack_c0;
  puStack_58 = puStack_100;
  local_40 = local_c8;
  if (iStack_f4 < (int)local_c8[5]) {
    do {
      plVar2 = local_c8;
      lVar12 = (longlong)iVar10 * 0x30;
      plVar13 = (longlong *)(*local_c8 + lVar12);
      if (*plVar13 == local_res20) {
        local_res18 = 100;
        lVar4 = 0x18;
        iVar10 = (int)plVar13[4] + -1;
        if ((int)plVar13[4] == 0) {
          iVar10 = 0;
        }
        if (iVar10 < 1) {
          lVar4 = 8;
        }
        if (*(int *)(lVar4 + 8 + (longlong)plVar13) == 0) {
          puVar11 = &DAT_143f3eda8;
        }
        else {
          puVar11 = *(undefined2 **)(lVar4 + (longlong)plVar13);
        }
        FParse::Value(puVar11,L"TargetClassName=",&local_res18);
        puVar5 = (undefined8 *)FName::ToString(&local_res18,&local_108);
        if (*(int *)(puVar5 + 1) == 0) {
          puVar11 = &DAT_143f3eda8;
        }
        else {
          puVar11 = (undefined2 *)*puVar5;
        }
        uVar6 = UObject::GetPrivateStaticClass();
        puVar16 = (undefined8 *)((ulonglong)puVar16 & 0xffffffff00000000);
        lVar4 = FUN_141799830(uVar6,0,puVar11,0,puVar16,0);
        if (CONCAT44(uStack_104,local_108) != 0) {
          FMemory::Free();
        }
        if (lVar4 != 0) {
          local_88 = *(longlong *)(lVar4 + 0x18);
          if (DAT_146534138 != DAT_146534164) {
            puVar7 = DAT_146534170;
            if (DAT_146534170 == (undefined *)0x0) {
              puVar7 = &DAT_146534168;
            }
            iVar10 = *(int *)(puVar7 + (longlong)
                                       (int)((int)((ulonglong)local_88 >> 0x20) + (int)local_88 &
                                            DAT_146534178 - 1U) * 4);
            while (iVar10 != -1) {
              lVar4 = (longlong)iVar10 * 0x60;
              if (*(longlong *)(lVar4 + DAT_146534130) == local_88) {
                if ((iVar10 != -1) && (lVar4 = lVar4 + DAT_146534130, lVar4 != 0))
                goto LAB_1425b43ff;
                break;
              }
              iVar10 = *(int *)(lVar4 + DAT_146534130 + 0x58);
            }
          }
          local_80 = &local_88;
          FUN_1425aa390(&DAT_146534130,local_res8,&local_80,0);
          lVar4 = (longlong)local_res8[0] * 0x60 + DAT_146534130;
LAB_1425b43ff:
          local_e8[2] = 0;
          local_e8[3] = 0;
          local_e8[0] = 0;
          local_e8[1] = 0;
          lVar14 = *plVar2 + lVar12;
          lVar8 = 0x18;
          iVar10 = *(int *)(lVar14 + 0x20) + -1;
          if (*(int *)(lVar14 + 0x20) == 0) {
            iVar10 = 0;
          }
          if (iVar10 < 1) {
            lVar8 = 8;
          }
          if (*(int *)(lVar8 + 8 + lVar14) == 0) {
            puVar11 = &DAT_143f3eda8;
          }
          else {
            puVar11 = *(undefined2 **)(lVar8 + lVar14);
          }
          FParse::Value(puVar11,L"OldFieldName=",local_e8 + 2,1);
          lVar12 = *plVar2 + lVar12;
          lVar8 = 0x18;
          iVar10 = *(int *)(lVar12 + 0x20) + -1;
          if (*(int *)(lVar12 + 0x20) == 0) {
            iVar10 = 0;
          }
          if (iVar10 < 1) {
            lVar8 = 8;
          }
          if (*(int *)(lVar8 + 8 + lVar12) == 0) {
            puVar11 = &DAT_143f3eda8;
          }
          else {
            puVar11 = *(undefined2 **)(lVar8 + lVar12);
          }
          FParse::Value(puVar11,L"NewFieldName=",local_e8);
          local_78 = local_e8 + 2;
          local_70 = local_e8;
          TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                    (lVar4 + 8,local_res10,&local_78);
          if (local_e8[0] != 0) {
            FMemory::Free();
          }
          if (local_e8[2] != 0) {
            FMemory::Free();
          }
        }
      }
      uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0 & ~uStack_c0._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_c0);
      iVar10 = uStack_b0._4_4_;
    } while (uStack_b0._4_4_ < (int)local_b8[6]);
    if (((char)local_90 != '\0') && (local_90._1_1_ != '\0')) {
      TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_98,(int)local_98[1] - *(int *)((longlong)local_98 + 0x34),1);
    }
  }
  DAT_146afefc4 = 1;
  return;
}



// FUNCTION 1425b4560 FUN_1425b4560 body=1169 status=ok
// SIG undefined FUN_1425b4560(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1425b4560(longlong param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  uint uVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  int local_res10;
  int local_res18;
  int local_res20 [2];
  int local_88 [2];
  longlong local_80;
  longlong local_78;
  undefined8 *local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 **local_50;
  
  lVar5 = *(longlong *)(param_1 + 0x6f8);
  local_res18 = 0;
  if (0 < *(int *)(param_1 + 0x728)) {
    local_78 = 0;
    do {
      lVar17 = local_78;
      plVar16 = (longlong *)(lVar5 + 0x88);
      lVar6 = *(longlong *)(local_78 + *(longlong *)(param_1 + 0x720));
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(plVar16,local_res20);
      plVar14 = (longlong *)0x0;
      if (local_res20[0] != -1) {
        plVar14 = (longlong *)(*plVar16 + (longlong)local_res20[0] * 0x18);
      }
      plVar10 = plVar14 + 1;
      if (plVar14 == (longlong *)0x0) {
        plVar10 = (longlong *)0x0;
      }
      if (plVar10 == (longlong *)0x0) {
        puVar9 = (undefined8 *)operator_new();
        local_70 = (undefined8 *)0x0;
        if (puVar9 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar9 + 1) = 4;
          puVar9[2] = 0;
          puVar9[3] = 0;
          *(undefined1 *)(puVar9 + 5) = 0;
          puVar9[6] = 0;
          puVar9[7] = 0;
          *puVar9 = &PTR_FUN_145119c28;
          puVar9[8] = 0;
          puVar9[9] = 0;
          *(undefined1 *)(puVar9 + 10) = 1;
          local_70 = puVar9;
        }
        local_50 = &local_70;
        local_58 = lVar6 + 0x10;
        FUN_1425ab630(plVar16,local_88,&local_58,0);
        plVar10 = (longlong *)(*plVar16 + (longlong)local_88[0] * 0x18 + 8);
      }
      lVar15 = *plVar10;
      *(longlong *)(lVar6 + 0x40) = lVar15;
      local_res10 = 0;
      *(undefined4 *)(lVar6 + 0x48) = *(undefined4 *)(lVar15 + 0x48);
      *(undefined4 *)(lVar6 + 0x4c) = 0;
      *(undefined4 *)(lVar6 + 0x50) = 0xffffffff;
      *(undefined4 *)(lVar6 + 0x54) = 0;
      *(undefined8 *)(lVar6 + 100) = _DAT_1468b5d90;
      uVar3 = DAT_1468b5d98;
      *(undefined4 *)(lVar6 + 0x6c) = DAT_1468b5d98;
      *(undefined8 *)(lVar6 + 0x58) = *(undefined8 *)(lVar6 + 100);
      *(undefined4 *)(lVar6 + 0x60) = uVar3;
      *(undefined1 *)(lVar6 + 0x70) = 0;
      local_68 = lVar15;
      if (0 < *(int *)(lVar6 + 0x20)) {
        local_80 = 0;
        do {
          uVar18 = 0;
          uVar2 = *(ushort *)(local_80 + *(longlong *)(lVar6 + 0x18));
          if ((int)(uint)uVar2 < *(int *)(lVar5 + 0x30)) {
            lVar17 = (ulonglong)uVar2 * 0x40 + *(longlong *)(lVar5 + 0x28);
            iVar12 = *(int *)(lVar17 + 0x14);
            if (((-1 < iVar12) && (iVar12 < *(int *)(lVar5 + 0x70))) &&
               (local_60 = (longlong)iVar12 * 0x50 + *(longlong *)(lVar5 + 0x68), lVar13 = lVar15,
               (*(uint *)(local_60 + 8) & 0x4000000) == 0)) {
              do {
                iVar12 = 0;
                bVar1 = 0;
                if (*(char *)(lVar17 + 0x36) != '\0') {
                  do {
                    lVar11 = (longlong)
                             *(int *)(*(longlong *)(lVar5 + 0x38) +
                                     (longlong)(*(int *)(lVar17 + 0x10) + iVar12) * 0x18);
                    lVar15 = *(longlong *)(lVar5 + 0x58);
                    if (*(char *)(lVar6 + 0x70) == '\0') {
                      *(undefined8 *)(lVar6 + 100) = *(undefined8 *)(lVar15 + lVar11 * 0xc);
                      uVar3 = *(undefined4 *)(lVar15 + 8 + lVar11 * 0xc);
                      *(undefined4 *)(lVar6 + 0x6c) = uVar3;
                      *(undefined8 *)(lVar6 + 0x58) = *(undefined8 *)(lVar6 + 100);
                      *(undefined4 *)(lVar6 + 0x60) = uVar3;
                      *(undefined1 *)(lVar6 + 0x70) = 1;
                    }
                    else {
                      fVar21 = *(float *)(lVar15 + lVar11 * 0xc);
                      if (*(float *)(lVar6 + 0x58) <= fVar21) {
                        fVar21 = *(float *)(lVar6 + 0x58);
                      }
                      *(float *)(lVar6 + 0x58) = fVar21;
                      fVar21 = *(float *)(lVar15 + 4 + lVar11 * 0xc);
                      fVar20 = *(float *)(lVar6 + 0x5c);
                      if (fVar21 <= *(float *)(lVar6 + 0x5c)) {
                        fVar20 = fVar21;
                      }
                      *(float *)(lVar6 + 0x5c) = fVar20;
                      fVar21 = *(float *)(lVar15 + 8 + lVar11 * 0xc);
                      fVar20 = *(float *)(lVar6 + 0x60);
                      if (fVar21 <= *(float *)(lVar6 + 0x60)) {
                        fVar20 = fVar21;
                      }
                      *(float *)(lVar6 + 0x60) = fVar20;
                      fVar21 = *(float *)(lVar15 + lVar11 * 0xc);
                      fVar20 = *(float *)(lVar6 + 100);
                      if (*(float *)(lVar6 + 100) <= fVar21) {
                        fVar20 = fVar21;
                      }
                      *(float *)(lVar6 + 100) = fVar20;
                      fVar21 = *(float *)(lVar15 + 4 + lVar11 * 0xc);
                      if (fVar21 <= *(float *)(lVar6 + 0x68)) {
                        fVar21 = *(float *)(lVar6 + 0x68);
                      }
                      *(float *)(lVar6 + 0x68) = fVar21;
                      fVar21 = *(float *)(lVar15 + 8 + lVar11 * 0xc);
                      if (fVar21 <= *(float *)(lVar6 + 0x6c)) {
                        fVar21 = *(float *)(lVar6 + 0x6c);
                      }
                      *(float *)(lVar6 + 0x6c) = fVar21;
                    }
                    bVar1 = *(byte *)(lVar17 + 0x36);
                    iVar12 = iVar12 + 1;
                  } while (iVar12 < (int)(uint)bVar1);
                }
                uVar7 = (uint)bVar1;
                iVar12 = 2;
                lVar15 = lVar13;
                if (2 < bVar1) {
                  plVar14 = (longlong *)(lVar13 + 0x40);
                  do {
                    iVar4 = *(int *)(lVar13 + 0x48);
                    iVar19 = *(int *)(lVar17 + 0x18);
                    *(int *)(lVar13 + 0x48) = iVar4 + 1;
                    if (*(int *)(lVar13 + 0x4c) < iVar4 + 1) {
                      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar14,iVar4);
                    }
                    *(uint *)(*plVar14 + (longlong)iVar4 * 4) = uVar7 * uVar18 + iVar19;
                    bVar1 = *(byte *)(lVar17 + 0x36);
                    iVar4 = *(int *)(lVar13 + 0x48);
                    iVar19 = *(int *)(lVar17 + 0x18);
                    *(int *)(lVar13 + 0x48) = iVar4 + 1;
                    if (*(int *)(lVar13 + 0x4c) < iVar4 + 1) {
                      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar14,iVar4);
                    }
                    *(uint *)(*plVar14 + (longlong)iVar4 * 4) = bVar1 * uVar18 + iVar19 + iVar12;
                    iVar4 = *(int *)(lVar13 + 0x48);
                    iVar19 = *(byte *)(lVar17 + 0x36) * uVar18 + -1 + *(int *)(lVar17 + 0x18) +
                             iVar12;
                    *(int *)(lVar13 + 0x48) = iVar4 + 1;
                    if (*(int *)(lVar13 + 0x4c) < iVar4 + 1) {
                      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar14,iVar4);
                    }
                    iVar12 = iVar12 + 1;
                    *(int *)(*plVar14 + (longlong)iVar4 * 4) = iVar19;
                    *(int *)(lVar6 + 0x4c) = *(int *)(lVar6 + 0x4c) + 1;
                    uVar7 = (uint)*(byte *)(lVar17 + 0x36);
                    lVar15 = local_68;
                  } while (iVar12 < (int)(uint)*(byte *)(lVar17 + 0x36));
                }
                uVar8 = uVar7 * uVar18 + *(int *)(lVar17 + 0x18);
                uVar7 = *(uint *)(lVar6 + 0x50);
                if (uVar8 <= *(uint *)(lVar6 + 0x50)) {
                  uVar7 = uVar8;
                }
                *(uint *)(lVar6 + 0x50) = uVar7;
                uVar18 = uVar18 + 1;
                uVar8 = *(int *)(lVar17 + 0x18) + -1 + *(byte *)(lVar17 + 0x36) * uVar18;
                uVar7 = *(uint *)(lVar6 + 0x54);
                if (*(uint *)(lVar6 + 0x54) <= uVar8) {
                  uVar7 = uVar8;
                }
                *(uint *)(lVar6 + 0x54) = uVar7;
                lVar13 = lVar15;
              } while (uVar18 < ((*(uint *)(local_60 + 8) & 0x100) != 0) + 1);
            }
          }
          local_res10 = local_res10 + 1;
          local_80 = local_80 + 2;
          lVar17 = local_78;
        } while (local_res10 < *(int *)(lVar6 + 0x20));
      }
      if (*(int *)(lVar15 + 0x4c) != *(int *)(lVar15 + 0x48)) {
        TArray<float,FDefaultAllocator>::ResizeTo();
      }
      FUN_142726b20(lVar15);
      local_res18 = local_res18 + 1;
      local_78 = lVar17 + 8;
    } while (local_res18 < *(int *)(param_1 + 0x728));
  }
  return;
}



// FUNCTION 1425b4a00 FUN_1425b4a00 body=511 status=ok
// SIG undefined FUN_1425b4a00(void)

void FUN_1425b4a00(undefined8 *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 0x40;
  plVar1 = (longlong *)param_2[1];
  if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res10,4);
    }
  }
  else {
    local_res10[0] = *(int *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if ((param_3 == '\0') &&
     ((((*(byte *)(param_2 + 5) & 2) == 0 || (param_2[0xe] != 0)) &&
      ((*(byte *)((longlong)param_2 + 0x29) & 0x10) == 0)))) {
    (**(code **)(*param_2 + 0x78))
              (param_2,(longlong)*(int *)(param_1 + 1) << 6,
               (longlong)*(int *)((longlong)param_1 + 0xc) << 6);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      plVar1 = (longlong *)param_2[1];
      iVar3 = 0;
      local_res18[0] = 0;
      if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res18,4);
        }
      }
      else {
        local_res18[0] = *(int *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      iVar2 = *(int *)((longlong)param_1 + 0xc);
      *(undefined4 *)(param_1 + 1) = 0;
      if (iVar2 != local_res18[0]) {
        TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1,local_res18[0]);
        iVar2 = *(int *)((longlong)param_1 + 0xc);
        iVar3 = *(int *)(param_1 + 1);
      }
      *(int *)(param_1 + 1) = iVar3 + local_res18[0];
      if (iVar2 < iVar3 + local_res18[0]) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
        ResizeGrow(param_1,iVar3);
      }
      (**(code **)(*param_2 + 0x50))(param_2,*param_1,(longlong)(local_res18[0] * local_res10[0]));
      return;
    }
    if ((*(byte *)(param_2 + 5) & 2) != 0) {
      plVar1 = (longlong *)param_2[1];
      local_res18[0] = *(int *)(param_1 + 1);
      if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res18,4);
        }
      }
      else {
        local_res18[0] = *(int *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      (**(code **)(*param_2 + 0x50))(param_2,*param_1,(longlong)(local_res18[0] * local_res10[0]));
      return;
    }
  }
  else {
    FUN_1425afe70(param_2,param_1);
  }
  return;
}



// FUNCTION 1425b4c00 FUN_1425b4c00 body=520 status=ok
// SIG undefined FUN_1425b4c00(void)

void FUN_1425b4c00(undefined8 *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 0x24;
  plVar1 = (longlong *)param_2[1];
  if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res10,4);
    }
  }
  else {
    local_res10[0] = *(int *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if ((param_3 == '\0') &&
     ((((*(byte *)(param_2 + 5) & 2) == 0 || (param_2[0xe] != 0)) &&
      ((*(byte *)((longlong)param_2 + 0x29) & 0x10) == 0)))) {
    (**(code **)(*param_2 + 0x78))
              (param_2,(longlong)*(int *)(param_1 + 1) * 0x24,
               (longlong)*(int *)((longlong)param_1 + 0xc) * 0x24);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      plVar1 = (longlong *)param_2[1];
      iVar3 = 0;
      local_res18[0] = 0;
      if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res18,4);
        }
      }
      else {
        local_res18[0] = *(int *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      iVar2 = *(int *)((longlong)param_1 + 0xc);
      *(undefined4 *)(param_1 + 1) = 0;
      if (iVar2 != local_res18[0]) {
        TArray<FCustomMeshTriangle,FDefaultAllocator>::ResizeTo(param_1,local_res18[0]);
        iVar2 = *(int *)((longlong)param_1 + 0xc);
        iVar3 = *(int *)(param_1 + 1);
      }
      *(int *)(param_1 + 1) = iVar3 + local_res18[0];
      if (iVar2 < iVar3 + local_res18[0]) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<36,4>_>,FDefaultAllocator>::
        ResizeGrow(param_1,iVar3);
      }
      (**(code **)(*param_2 + 0x50))(param_2,*param_1,(longlong)(local_res18[0] * local_res10[0]));
      return;
    }
    if ((*(byte *)(param_2 + 5) & 2) != 0) {
      plVar1 = (longlong *)param_2[1];
      local_res18[0] = *(int *)(param_1 + 1);
      if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res18,4);
        }
      }
      else {
        local_res18[0] = *(int *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      (**(code **)(*param_2 + 0x50))(param_2,*param_1,(longlong)(local_res18[0] * local_res10[0]));
      return;
    }
  }
  else {
    FUN_1425b0180(param_2,param_1);
  }
  return;
}



// FUNCTION 1425b4e10 FUN_1425b4e10 body=511 status=ok
// SIG undefined FUN_1425b4e10(void)

void FUN_1425b4e10(undefined8 *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 4;
  plVar1 = (longlong *)param_2[1];
  if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res10,4);
    }
  }
  else {
    local_res10[0] = *(int *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if ((param_3 == '\0') &&
     ((((*(byte *)(param_2 + 5) & 2) == 0 || (param_2[0xe] != 0)) &&
      ((*(byte *)((longlong)param_2 + 0x29) & 0x10) == 0)))) {
    (**(code **)(*param_2 + 0x78))
              (param_2,(longlong)*(int *)(param_1 + 1) << 2,
               (longlong)*(int *)((longlong)param_1 + 0xc) << 2);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      plVar1 = (longlong *)param_2[1];
      iVar3 = 0;
      local_res18[0] = 0;
      if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res18,4);
        }
      }
      else {
        local_res18[0] = *(int *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      iVar2 = *(int *)((longlong)param_1 + 0xc);
      *(undefined4 *)(param_1 + 1) = 0;
      if (iVar2 != local_res18[0]) {
        TArray<float,FDefaultAllocator>::ResizeTo(param_1,local_res18[0]);
        iVar2 = *(int *)((longlong)param_1 + 0xc);
        iVar3 = *(int *)(param_1 + 1);
      }
      *(int *)(param_1 + 1) = iVar3 + local_res18[0];
      if (iVar2 < iVar3 + local_res18[0]) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
      }
      (**(code **)(*param_2 + 0x50))(param_2,*param_1,(longlong)(local_res18[0] * local_res10[0]));
      return;
    }
    if ((*(byte *)(param_2 + 5) & 2) != 0) {
      plVar1 = (longlong *)param_2[1];
      local_res18[0] = *(int *)(param_1 + 1);
      if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res18,4);
        }
      }
      else {
        local_res18[0] = *(int *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      (**(code **)(*param_2 + 0x50))(param_2,*param_1,(longlong)(local_res18[0] * local_res10[0]));
      return;
    }
  }
  else {
    FUN_140871d30(param_2,param_1);
  }
  return;
}



// FUNCTION 1425b5010 FUN_1425b5010 body=520 status=ok
// SIG undefined FUN_1425b5010(void)

void FUN_1425b5010(undefined8 *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 0x18;
  plVar1 = (longlong *)param_2[1];
  if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res10,4);
    }
  }
  else {
    local_res10[0] = *(int *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if ((param_3 == '\0') &&
     ((((*(byte *)(param_2 + 5) & 2) == 0 || (param_2[0xe] != 0)) &&
      ((*(byte *)((longlong)param_2 + 0x29) & 0x10) == 0)))) {
    (**(code **)(*param_2 + 0x78))
              (param_2,(longlong)*(int *)(param_1 + 1) * 0x18,
               (longlong)*(int *)((longlong)param_1 + 0xc) * 0x18);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      plVar1 = (longlong *)param_2[1];
      iVar3 = 0;
      local_res18[0] = 0;
      if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res18,4);
        }
      }
      else {
        local_res18[0] = *(int *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      iVar2 = *(int *)((longlong)param_1 + 0xc);
      *(undefined4 *)(param_1 + 1) = 0;
      if (iVar2 != local_res18[0]) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                  (param_1,local_res18[0]);
        iVar2 = *(int *)((longlong)param_1 + 0xc);
        iVar3 = *(int *)(param_1 + 1);
      }
      *(int *)(param_1 + 1) = iVar3 + local_res18[0];
      if (iVar2 < iVar3 + local_res18[0]) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_1,iVar3);
      }
      (**(code **)(*param_2 + 0x50))(param_2,*param_1,(longlong)(local_res18[0] * local_res10[0]));
      return;
    }
    if ((*(byte *)(param_2 + 5) & 2) != 0) {
      plVar1 = (longlong *)param_2[1];
      local_res18[0] = *(int *)(param_1 + 1);
      if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res18,4);
        }
      }
      else {
        local_res18[0] = *(int *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      (**(code **)(*param_2 + 0x50))(param_2,*param_1,(longlong)(local_res18[0] * local_res10[0]));
      return;
    }
  }
  else {
    FUN_1425b0d90(param_2,param_1);
  }
  return;
}



// FUNCTION 1425b5220 FUN_1425b5220 body=568 status=ok
// SIG undefined FUN_1425b5220(void)

undefined4 * FUN_1425b5220(longlong param_1,undefined4 *param_2,longlong param_3)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_58;
  float local_54;
  float local_50;
  undefined8 local_4c;
  float local_44;
  undefined1 local_40;
  undefined1 local_38 [48];
  
  lVar2 = *(longlong *)(param_1 + 0x6f8);
  if (lVar2 == 0) {
    uVar4 = *(undefined4 *)(param_3 + 0x14);
    uVar5 = *(undefined4 *)(param_3 + 0x18);
    *param_2 = *(undefined4 *)(param_3 + 0x10);
    param_2[1] = uVar4;
    param_2[2] = uVar5;
    *(ulonglong *)(param_2 + 3) = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    param_2[5] = DAT_1468b5d98;
    param_2[6] = 0;
  }
  else {
    bVar6 = false;
    local_4c = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    local_44 = DAT_1468b5d98;
    local_58 = DAT_1468b5d90;
    local_54 = DAT_1468b5d94;
    local_50 = DAT_1468b5d98;
    local_40 = 0;
    if (0 < (longlong)*(int *)(param_1 + 0x718)) {
      lVar11 = 0;
      fVar12 = DAT_1468b5d98;
      fVar13 = DAT_1468b5d94;
      fVar14 = DAT_1468b5d90;
      fVar15 = DAT_1468b5d90;
      fVar16 = DAT_1468b5d94;
      fVar17 = DAT_1468b5d98;
      do {
        if (0 < *(int *)(lVar2 + 0x30)) {
          iVar9 = 0;
          lVar10 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x710) + lVar11 * 2) * 0x40 +
                   *(longlong *)(lVar2 + 0x28);
          if (*(char *)(lVar10 + 0x36) != '\0') {
            do {
              lVar8 = (longlong)
                      *(int *)(*(longlong *)(lVar2 + 0x38) +
                              (longlong)(*(int *)(lVar10 + 0x10) + iVar9) * 0x18);
              lVar3 = *(longlong *)(lVar2 + 0x58);
              if (bVar6) {
                fVar1 = *(float *)(lVar3 + lVar8 * 0xc);
                if (fVar1 < fVar14) {
                  fVar14 = fVar1;
                  local_58 = fVar1;
                }
                fVar1 = *(float *)(lVar3 + 4 + lVar8 * 0xc);
                if (fVar1 < fVar16) {
                  fVar16 = fVar1;
                  local_54 = fVar1;
                }
                fVar1 = *(float *)(lVar3 + 8 + lVar8 * 0xc);
                if (fVar1 < fVar17) {
                  fVar17 = fVar1;
                  local_50 = fVar1;
                }
                fVar1 = *(float *)(lVar3 + lVar8 * 0xc);
                if (fVar15 < fVar1) {
                  local_4c = CONCAT44(local_4c._4_4_,fVar1);
                  fVar15 = fVar1;
                }
                fVar1 = *(float *)(lVar3 + 4 + lVar8 * 0xc);
                if (fVar13 < fVar1) {
                  local_4c = CONCAT44(fVar1,(float)local_4c);
                  fVar13 = fVar1;
                }
                fVar1 = *(float *)(lVar3 + 8 + lVar8 * 0xc);
                if (fVar12 < fVar1) {
                  fVar12 = fVar1;
                  local_44 = fVar1;
                }
              }
              else {
                uVar7 = *(undefined8 *)(lVar3 + lVar8 * 0xc);
                bVar6 = true;
                fVar12 = *(float *)(lVar3 + 8 + lVar8 * 0xc);
                local_4c._0_4_ = (float)uVar7;
                local_4c._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
                local_58 = (float)local_4c;
                local_54 = local_4c._4_4_;
                local_40 = 1;
                fVar13 = local_4c._4_4_;
                fVar14 = (float)local_4c;
                fVar15 = (float)local_4c;
                fVar16 = local_4c._4_4_;
                fVar17 = fVar12;
                local_50 = fVar12;
                local_4c = uVar7;
                local_44 = fVar12;
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 < (int)(uint)*(byte *)(lVar10 + 0x36));
          }
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < *(int *)(param_1 + 0x718));
    }
    uVar7 = FBox::TransformBy(&local_58,local_38,param_3);
    FBoxSphereBounds::FBoxSphereBounds(param_2,uVar7);
  }
  return param_2;
}



// FUNCTION 1425b5470 FUN_1425b5470 body=265 status=ok
// SIG undefined FUN_1425b5470(void)

void FUN_1425b5470(longlong param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar9 = DAT_146aff580;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar5 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar6 = GetCurrentThreadId();
    if (DVar6 != DAT_1468c21c0) {
      lVar8 = 4;
      goto LAB_1425b54c0;
    }
  }
  lVar8 = 0;
LAB_1425b54c0:
  if (0 < *(int *)(lVar8 + lVar9)) {
    plVar3 = *(longlong **)(param_1 + 0x520);
    plVar4 = (longlong *)*param_2;
    if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001425b54ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x310))(plVar3,plVar4);
      return;
    }
    if (plVar4 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar4 + 0x148))(plVar4);
      if (lVar9 != 0) {
        fVar1 = *(float *)(lVar9 + 0x790);
        fVar2 = *(float *)(plVar4 + 0x28);
        iVar7 = rand();
        AActor::SetNetUpdateTime
                  (plVar4,((float)iVar7 * 1.5259255e-05 + 0.5) * (1.0 / fVar2) + fVar1);
        *(float *)(param_2 + 4) = 1.0 / fVar2;
      }
    }
  }
  return;
}



// FUNCTION 1425b5580 FUN_1425b5580 body=83 status=ok
// SIG undefined FUN_1425b5580(void)

void FUN_1425b5580(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             0x66,L"Pure virtual not implemented (%s)",
             L"UReplicationDriver::CancelAdaptiveReplication");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             0x66,L"Pure virtual not implemented (%s)",
             L"UReplicationDriver::CancelAdaptiveReplication");
  return;
}



// FUNCTION 1425b5600 CleanUp body=110 status=ok
// SIG undefined CleanUp(void)

void UChildConnection::CleanUp(longlong param_1)

{
  longlong *plVar1;
  
  if (DAT_1468c2176 == '\0') {
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    return;
  }
  plVar1 = *(longlong **)(param_1 + 0x98);
  if (plVar1 != (longlong *)0x0) {
    if ((*(uint *)(plVar1 + 1) & 0x18000) == 0) {
      (**(code **)(*plVar1 + 0x400))(plVar1,param_1);
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}



// FUNCTION 1425b5670 FUN_1425b5670 body=1198 status=ok
// SIG undefined FUN_1425b5670(void)

void FUN_1425b5670(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  uint *puVar18;
  int iVar19;
  bool bVar20;
  int local_a8;
  uint uStack_a4;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int iStack_80;
  uint uStack_7c;
  uint *local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 uStack_40;
  
  uVar13 = 0;
  uVar12 = uVar13;
  uVar8 = uVar13;
  if (0 < (int)param_1[10]) {
    do {
      (**(code **)(**(longlong **)(uVar8 + param_1[9]) + 0x300))();
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
      uVar8 = uVar8 + 8;
    } while ((int)uVar11 < (int)param_1[10]);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if (*(int *)((longlong)param_1 + 0x54) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 9,0);
  }
  (**(code **)(*param_1 + 0x2f8))(param_1);
  lVar14 = param_1[0xb];
  if (lVar14 != 0) {
    if (*(longlong *)(lVar14 + 0x90) == 0) {
      lVar16 = (longlong)*(int *)(lVar14 + 0xa0);
      if (*(int *)(lVar14 + 0xa0) != 0) {
        bVar20 = (longlong *)**(undefined8 **)(lVar14 + 0x98) != param_1;
        uVar12 = uVar13;
        uVar8 = uVar13;
        do {
          iVar6 = (int)uVar12;
          uVar13 = uVar13 + 1;
          uVar12 = (ulonglong)(iVar6 + 1);
          if ((longlong)uVar13 < lVar16) {
            puVar9 = (undefined8 *)(*(longlong *)(lVar14 + 0x98) + uVar13 * 8);
            do {
              if (bVar20 != ((longlong *)*puVar9 != param_1)) break;
              uVar12 = (ulonglong)((int)uVar12 + 1);
              uVar13 = uVar13 + 1;
              puVar9 = puVar9 + 1;
            } while ((longlong)uVar13 < lVar16);
          }
          iVar7 = (int)uVar12 - iVar6;
          if (bVar20 != false) {
            iVar19 = (int)uVar8;
            if (iVar19 != iVar6) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*(longlong *)(lVar14 + 0x98) + (longlong)iVar19 * 8),
                         (void *)(*(longlong *)(lVar14 + 0x98) + (longlong)iVar6 * 8),
                         (longlong)iVar7 << 3);
            }
            uVar8 = (ulonglong)(uint)(iVar19 + iVar7);
          }
          bVar20 = (bool)(bVar20 ^ 1);
        } while ((longlong)uVar13 < lVar16);
        *(int *)(lVar14 + 0xa0) = (int)uVar8;
      }
      plVar3 = *(longlong **)(lVar14 + 0x520);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x298))(plVar3,param_1);
      }
    }
    else {
      *(undefined8 *)(lVar14 + 0x90) = 0;
    }
  }
  iVar6 = (int)param_1[0xf] + -1;
  lVar14 = (longlong)iVar6;
  if (-1 < iVar6) {
    do {
      lVar16 = *(longlong *)(param_1[0xe] + lVar14 * 8);
      if (lVar16 != 0) {
        FUN_1423e8eb0(lVar16,1);
      }
      lVar14 = lVar14 + -1;
    } while (-1 < lVar14);
  }
  plVar3 = param_1 + 0x2d5;
  uStack_a4 = 1;
  uVar11 = *(uint *)(param_1 + 0x2da);
  puVar1 = (uint *)(param_1 + 0x2d7);
  local_a8 = 0;
  uStack_94 = 0;
  iStack_90 = 0;
  if (uVar11 != 0) {
    puVar18 = (uint *)param_1[0x2d9];
    if ((uint *)param_1[0x2d9] == (uint *)0x0) {
      puVar18 = puVar1;
    }
    uVar2 = *puVar18;
    while (uVar2 == 0) {
      lVar14 = (longlong)local_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar6 = local_a8 + 1;
      bVar20 = (int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar6;
      if (bVar20) goto LAB_1425b58ac;
      uVar2 = puVar18[lVar14 + 1];
    }
    uStack_a4 = -uVar2 & uVar2;
    iVar6 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_94 = (iStack_90 - iVar6) + 0x1f;
    if ((int)uVar11 < (int)uStack_94) {
LAB_1425b58ac:
      uStack_94 = uVar11;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x2da);
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_94;
  local_68 = CONCAT44(uStack_8c,iStack_90);
  uStack_58 = CONCAT44(uStack_a4,local_a8);
  uVar17 = uVar2 & 0xffffffe0;
  iStack_80 = local_a8;
  uStack_7c = uStack_a4;
  uStack_94 = uVar2;
  if (uVar2 != uVar11) {
    puVar18 = (uint *)param_1[0x2d9];
    if ((uint *)param_1[0x2d9] == (uint *)0x0) {
      puVar18 = puVar1;
    }
    uVar10 = puVar18[(int)uVar2 >> 5] & -1 << ((byte)uVar2 & 0x1f);
    iVar6 = (int)uVar2 >> 5;
    while (uVar10 == 0) {
      uVar17 = uVar17 + 0x20;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
      goto LAB_1425b5972;
      uVar10 = puVar18[(longlong)iVar6 + 1];
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
    uStack_94 = (uVar17 - iVar6) + 0x1f;
    if ((int)uVar11 < (int)uStack_94) {
LAB_1425b5972:
      uStack_94 = uVar11;
    }
  }
  local_78 = puVar1;
  local_60 = plVar3;
  puStack_50 = puVar1;
  uStack_40 = local_68;
  uStack_48 = uStack_70;
  uStack_44 = uStack_6c;
  while ((uStack_6c != uStack_94 || (local_78 != puVar1))) {
    puVar9 = *(undefined8 **)((longlong)(int)uStack_6c * 0x20 + 8 + *plVar3);
    uVar8 = (ulonglong)*(int *)((longlong)(int)uStack_6c * 0x20 + 0x10 + *plVar3);
    uVar12 = uVar8 & 0x1fffffffffffffff;
    if (puVar9 + uVar8 < puVar9) {
      uVar12 = 0;
    }
    uVar8 = 0;
    if (uVar12 != 0) {
      do {
        FUN_1423e8eb0(*puVar9);
        uVar8 = uVar8 + 1;
        puVar9 = puVar9 + 1;
      } while (uVar8 != uVar12);
    }
    uStack_70 = uStack_70 & ~uStack_7c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
  }
  TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
  ::Empty(plVar3,0);
  param_1[0xd] = 0;
  if (DAT_1468c2176 != '\0') {
    plVar3 = (longlong *)param_1[0x13];
    if (plVar3 == (longlong *)0x0) {
      if ((int)param_1[0x38] < 3) {
        lVar14 = FUN_14244d3d0();
        *(int *)(lVar14 + 0x5c) = *(int *)(lVar14 + 0x5c) + 1;
        bVar20 = false;
        iVar6 = *(int *)(lVar14 + 0x5c);
        iVar7 = *(int *)(lVar14 + 0x50) + -1;
        lVar16 = (longlong)iVar7;
        if (-1 < iVar7) {
          lVar15 = lVar16 << 4;
          bVar20 = false;
          do {
            lVar4 = *(longlong *)(lVar14 + 0x48);
            if (((*(int *)(lVar15 + 8 + lVar4) == 0) ||
                (plVar3 = *(longlong **)(lVar15 + lVar4), plVar3 == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(*plVar3 + 0x40))(plVar3,param_1 + 0x2b), cVar5 == '\0')) {
              bVar20 = true;
            }
            lVar15 = lVar15 + -0x10;
            lVar16 = lVar16 + -1;
          } while (-1 < lVar16);
          iVar6 = *(int *)(lVar14 + 0x5c);
        }
        *(int *)(lVar14 + 0x5c) = iVar6 + -1;
        if (bVar20) {
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList
                    ((longlong *)(lVar14 + 0x48),0);
        }
      }
    }
    else {
      if ((*(uint *)(plVar3 + 1) & 0x18000) == 0) {
        (**(code **)(*plVar3 + 0x400))(plVar3,param_1);
      }
      param_1[0x13] = 0;
      param_1[6] = 0;
    }
  }
  TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x2df,0);
  puVar9 = (undefined8 *)param_1[0x27];
  param_1[0x27] = 0;
  if (puVar9 != (undefined8 *)0x0) {
    (**(code **)*puVar9)(puVar9,1);
  }
  param_1[0xb] = 0;
  if ((int)param_1[0x38] != 4) {
    *(undefined4 *)(param_1 + 0x38) = 4;
  }
  return;
}



// FUNCTION 1425b5b20 FUN_1425b5b20 body=2104 status=ok
// SIG undefined FUN_1425b5b20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1425b5b20(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  LARGE_INTEGER LVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  ulonglong uVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  int *piVar15;
  longlong *plVar16;
  longlong *plVar17;
  int iVar18;
  uint uVar19;
  uint *puVar20;
  undefined8 *puVar21;
  longlong *plVar22;
  longlong lVar23;
  longlong *plVar24;
  longlong lVar25;
  longlong *plVar26;
  undefined1 auStack_5c8 [32];
  LARGE_INTEGER local_5a8;
  undefined8 local_5a0;
  uint uStack_598;
  uint uStack_594;
  undefined8 local_590;
  uint uStack_588;
  int iStack_584;
  undefined8 local_580;
  longlong local_578;
  undefined8 local_570;
  longlong *local_568;
  undefined8 uStack_560;
  uint *puStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  uint local_540 [2];
  longlong local_538;
  longlong local_530;
  int local_528;
  int local_520;
  char local_51c;
  int local_518;
  longlong local_510;
  longlong local_508;
  int local_500;
  undefined8 local_4f0;
  char local_4e8;
  longlong local_4e0 [64];
  longlong *local_2e0;
  undefined8 local_2d8;
  longlong local_2d0 [16];
  longlong *local_250;
  undefined8 local_248;
  longlong local_240 [64];
  longlong *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_5c8;
  local_578 = param_1;
  QueryPerformanceCounter(&local_5a8);
  LVar3 = (LARGE_INTEGER)((LARGE_INTEGER *)(param_1 + 0xd0))->QuadPart;
  plVar22 = (longlong *)0x0;
  local_2e0 = (longlong *)0x0;
  local_2d8 = 0;
  plVar14 = plVar22;
  if (LVar3.QuadPart != 0) {
    local_250 = (longlong *)0x0;
    local_248 = 0;
    local_570 = FUN_1428dfc70();
    local_540[0] = 0;
    local_4e8 = '\0';
    local_5a8 = LVar3;
    FUN_14044bc80(&local_538,&local_5a8,&local_570);
    FUN_14045a130(local_540);
    plVar14 = local_2e0;
    if (local_51c == '\0') {
LAB_1425b5be0:
      lVar25 = *(longlong *)(local_510 + 0x10);
      if (lVar25 != 0) {
        while (uVar8 = local_2d8, (*(uint *)(lVar25 + 0xb4) >> 0x12 & 1) != 0) {
          lVar23 = (longlong)(int)local_2d8;
          plVar14 = local_4e0;
          if (local_2e0 != (longlong *)0x0) {
            plVar14 = local_2e0;
          }
          plVar17 = plVar14 + lVar23;
          for (; plVar14 != plVar17; plVar14 = plVar14 + 1) {
            if (*plVar14 == lVar25) goto LAB_1425b5c72;
          }
          iVar10 = (int)local_2d8 + 1;
          local_2d8 = CONCAT44(local_2d8._4_4_,iVar10);
          if (local_2d8._4_4_ < iVar10) {
            FUN_1425cbbc0(local_4e0,uVar8 & 0xffffffff);
          }
          plVar14 = local_4e0;
          if (local_2e0 != (longlong *)0x0) {
            plVar14 = local_2e0;
          }
          plVar14[lVar23] = lVar25;
          lVar25 = *(longlong *)(lVar25 + 0x30);
          if (lVar25 == 0) break;
        }
      }
LAB_1425b5c72:
      FUN_1425abbc0(local_510,local_2d0,0);
      plVar17 = local_2d0;
      if (local_250 != (longlong *)0x0) {
        plVar17 = local_250;
      }
      plVar24 = (longlong *)((longlong)(int)local_248 & 0x1fffffffffffffff);
      if (plVar17 + (int)local_248 < plVar17) {
        plVar24 = plVar22;
      }
      plVar14 = local_2e0;
      if (plVar24 != (longlong *)0x0) {
        plVar26 = plVar22;
        iVar10 = (int)local_2d8;
        do {
          if ((*plVar17 != 0) && (lVar25 = *(longlong *)(*plVar17 + 0x10), lVar25 != 0)) {
            while ((*(uint *)(lVar25 + 0xb4) >> 0x12 & 1) != 0) {
              plVar16 = local_4e0;
              if (plVar14 != (longlong *)0x0) {
                plVar16 = plVar14;
              }
              plVar1 = plVar16 + iVar10;
              for (; plVar16 != plVar1; plVar16 = plVar16 + 1) {
                if (*plVar16 == lVar25) goto LAB_1425b5d77;
              }
              local_2d8 = CONCAT44(local_2d8._4_4_,iVar10 + 1);
              if (local_2d8._4_4_ < iVar10 + 1) {
                FUN_1425cbbc0(local_4e0,iVar10);
                plVar14 = local_2e0;
              }
              plVar16 = local_4e0;
              if (plVar14 != (longlong *)0x0) {
                plVar16 = plVar14;
              }
              plVar16[iVar10] = lVar25;
              lVar25 = *(longlong *)(lVar25 + 0x30);
              plVar14 = local_2e0;
              iVar10 = (int)local_2d8;
              if (lVar25 == 0) break;
            }
          }
LAB_1425b5d77:
          plVar17 = plVar17 + 1;
          plVar26 = (longlong *)((longlong)plVar26 + 1);
        } while (plVar26 != plVar24);
      }
      local_5a8.QuadPart = local_538;
      iVar10 = local_520 + 1;
      if (iVar10 < local_500 + local_528) {
        lVar25 = (longlong)iVar10 * 8;
        iVar12 = local_500;
        iVar18 = local_528;
        do {
          if (iVar10 < iVar18) {
            lVar23 = *(longlong *)(local_530 + lVar25);
          }
          else {
            lVar23 = *(longlong *)(local_508 + (longlong)(iVar10 - iVar18) * 8);
          }
          local_518 = local_518 + 1;
          if ((lVar23 != 0) &&
             (lVar13 = AActor::GetLevel(lVar23), iVar12 = local_500, iVar18 = local_528, lVar13 != 0
             )) {
            if ((local_540[0] & 1) != 0) {
              iVar2 = *(int *)(lVar23 + 0xc);
              plVar14 = plVar22;
              if (iVar2 < (int)DAT_1469e91c4) {
                uVar19 = iVar2 >> 0x1f & 0xffff;
                uVar11 = iVar2 + uVar19;
                plVar14 = (longlong *)
                          (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar11 >> 0x10) * 8) +
                          (longlong)(int)((uVar11 & 0xffff) - uVar19) * 0x18);
              }
              if ((*(uint *)(plVar14 + 1) >> 0x1d & 1) != 0) goto LAB_1425b5f2a;
            }
            if (((local_540[0] >> 1 & 1) == 0) ||
               (cVar9 = FOutputDevice::CanBeUsedOnAnyThread(lVar23), iVar12 = local_500,
               iVar18 = local_528, cVar9 != '\0')) {
              if ((local_540[0] >> 2 & 1) != 0) {
                if (((*(byte *)(lVar13 + 0x204) & 0x10) == 0) &&
                   ((*(byte *)(lVar13 + 0x205) & 0x10) == 0)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                piVar4 = *(int **)(lVar13 + 600);
                if (((*(longlong *)(lVar13 + 0xc0) == 0) ||
                    (piVar15 = (int *)UWorld::GetActiveLevelCollection(), piVar15 == (int *)0x0)) ||
                   (piVar4 == piVar15)) {
                  bVar6 = true;
                }
                else {
                  bVar6 = false;
                }
                if ((piVar4 == (int *)0x0) || (*piVar4 == 2)) {
                  bVar7 = true;
                }
                else {
                  bVar7 = false;
                }
                if ((bVar6) || (bVar6 = false, bVar7)) {
                  bVar6 = true;
                }
                iVar12 = local_500;
                iVar18 = local_528;
                if ((!bVar5) || (!bVar6)) goto LAB_1425b5f2a;
              }
              lVar13 = ULevel::GetWorld(lVar13);
              LVar3 = local_5a8;
              iVar12 = local_500;
              iVar18 = local_528;
              if (lVar13 == local_5a8.QuadPart) {
                lVar13 = AActor::GetLevel(lVar23);
                if (lVar13 == *(longlong *)(LVar3.QuadPart + 0x30)) goto LAB_1425b5f4f;
                lVar13 = UVoipListenerSynthComponent::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar23 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar23 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                iVar12 = local_500;
                iVar18 = local_528;
                if (!bVar5) goto LAB_1425b5f4f;
              }
            }
          }
LAB_1425b5f2a:
          iVar10 = iVar10 + 1;
          lVar25 = lVar25 + 8;
          plVar14 = local_2e0;
          if (iVar12 + iVar18 <= iVar10) break;
        } while( true );
      }
      local_510 = 0;
      local_51c = '\x01';
    }
LAB_1425b5f68:
    if (local_4e8 != '\0') {
      local_4e8 = '\0';
      UWorld::RemoveOnActorSpawnedHandler(local_538,local_4f0);
      if (local_508 != 0) {
        FMemory::Free();
      }
      plVar14 = local_2e0;
      if (local_530 != 0) {
        FMemory::Free();
        plVar14 = local_2e0;
      }
    }
    param_1 = local_578;
    if (local_250 != (longlong *)0x0) {
      FMemory::Free();
      plVar14 = local_2e0;
      param_1 = local_578;
    }
  }
  local_568 = (longlong *)(param_1 + 0x358);
  local_40 = (longlong *)0x0;
  puStack_558 = (uint *)(param_1 + 0x368);
  local_38 = 0;
  iVar10 = *(int *)(param_1 + 0x380);
  local_5a0._0_4_ = 0;
  local_5a0._4_4_ = 1;
  local_38._0_4_ = 0;
  local_590._4_4_ = 0;
  uStack_588 = 0;
  if (iVar10 != 0) {
    puVar20 = *(uint **)(param_1 + 0x378);
    if (*(uint **)(param_1 + 0x378) == (uint *)0x0) {
      puVar20 = puStack_558;
    }
    uVar11 = *puVar20;
    plVar17 = plVar22;
    plVar24 = plVar22;
    while (uVar11 == 0) {
      iVar12 = (int)plVar17;
      uStack_588 = (int)plVar24 + 0x20;
      plVar24 = (longlong *)(ulonglong)uStack_588;
      local_5a0._0_4_ = iVar12 + 1;
      plVar17 = (longlong *)(ulonglong)(uint)local_5a0;
      local_590._4_4_ = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar12) goto LAB_1425b60a0;
      uVar11 = puVar20[(longlong)iVar12 + 1];
    }
    local_5a0._4_4_ = uVar11 - 1 & uVar11 ^ uVar11;
    iVar12 = 0x1f;
    if (local_5a0._4_4_ != 0) {
      for (; local_5a0._4_4_ >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (local_5a0._4_4_ == 0) {
      iVar12 = 0x20;
    }
    else {
      iVar12 = 0x1f - iVar12;
    }
    local_590._4_4_ = (uStack_588 - iVar12) + 0x1f;
    if (iVar10 < local_590._4_4_) {
      local_590._4_4_ = iVar10;
    }
  }
LAB_1425b60a0:
  uStack_560 = CONCAT44(local_5a0._4_4_,(uint)local_5a0);
  uStack_550 = CONCAT44(local_590._4_4_,0xffffffff);
  local_580 = CONCAT44(iStack_584,uStack_588);
  _uStack_598 = CONCAT44(local_5a0._4_4_,(uint)local_5a0);
  uStack_588 = 0xffffffff;
  iStack_584 = local_590._4_4_;
  bVar5 = local_590._4_4_ < iVar10;
  uStack_548 = local_580;
  local_5a0 = local_568;
  local_590 = puStack_558;
  plVar17 = local_568;
  if (bVar5) {
    do {
      lVar23 = (longlong)iStack_584;
      local_5a0 = plVar17;
      lVar25 = FWeakObjectPtr::Get(lVar23 * 0x20 + *plVar17);
      if (lVar25 == 0) {
LAB_1425b6146:
        lVar25 = FWeakObjectPtr::Get(*plVar17 + lVar23 * 0x20);
        if (lVar25 != 0) {
          lVar23 = FUN_14171c5d0();
          if ((*(int *)(*(longlong *)(lVar25 + 0x10) + 0x90) < *(int *)(lVar23 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar25 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar23 + 0x90) * 8) != lVar23 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            lVar25 = UField::GetOwnerClass(lVar25);
            if (lVar25 != 0) goto LAB_1425b61a7;
          }
        }
      }
      else {
        lVar13 = FUN_14171bfe0();
        if ((*(int *)(*(longlong *)(lVar25 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar25 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (!bVar5) goto LAB_1425b6146;
LAB_1425b61a7:
        uVar8 = local_38;
        if ((*(uint *)(lVar25 + 0xb4) >> 0x12 & 1) != 0) {
          plVar14 = local_4e0;
          if (local_2e0 != (longlong *)0x0) {
            plVar14 = local_2e0;
          }
          plVar17 = plVar14 + (int)local_2d8;
          for (; plVar14 != plVar17; plVar14 = plVar14 + 1) {
            if (*plVar14 == lVar25) goto LAB_1425b6277;
          }
          lVar23 = (longlong)(int)local_38;
          plVar14 = local_240;
          if (local_40 != (longlong *)0x0) {
            plVar14 = local_40;
          }
          for (plVar17 = plVar14; plVar17 != plVar14 + lVar23; plVar17 = plVar17 + 1) {
            if (*plVar17 == lVar25) {
              if ((int)((longlong)plVar17 - (longlong)plVar14 >> 3) != -1) goto LAB_1425b6277;
              break;
            }
          }
          iVar10 = (int)local_38 + 1;
          local_38 = CONCAT44(local_38._4_4_,iVar10);
          if (local_38._4_4_ < iVar10) {
            FUN_1425cbbc0(local_240,uVar8 & 0xffffffff);
          }
          plVar14 = local_240;
          if (local_40 != (longlong *)0x0) {
            plVar14 = local_40;
          }
          plVar14[lVar23] = lVar25;
        }
      }
LAB_1425b6277:
      uStack_588 = uStack_588 & ~uStack_594;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_598);
      plVar17 = local_5a0;
    } while (iStack_584 < (int)local_590[6]);
    plVar14 = local_2e0;
  }
  plVar17 = local_240;
  if (local_40 != (longlong *)0x0) {
    plVar17 = plVar22;
  }
  puVar21 = (undefined8 *)((ulonglong)plVar17 | (ulonglong)local_40);
  plVar17 = (longlong *)((longlong)(int)local_38 & 0x1fffffffffffffff);
  if (puVar21 + (int)local_38 < puVar21) {
    plVar17 = plVar22;
  }
  if (plVar17 != (longlong *)0x0) {
    do {
      FUN_1425caff0(param_1,*puVar21);
      plVar22 = (longlong *)((longlong)plVar22 + 1);
      puVar21 = puVar21 + 1;
      plVar14 = local_2e0;
    } while (plVar22 != plVar17);
  }
  if (local_40 != (longlong *)0x0) {
    FMemory::Free(local_40);
    plVar14 = local_2e0;
  }
  if (plVar14 != (longlong *)0x0) {
    FMemory::Free(plVar14);
  }
  return;
LAB_1425b5f4f:
  plVar14 = local_2e0;
  local_520 = iVar10;
  local_510 = lVar23;
  if (local_51c != '\0') goto LAB_1425b5f68;
  goto LAB_1425b5be0;
}



// FUNCTION 1425b6360 FUN_1425b6360 body=258 status=ok
// SIG undefined FUN_1425b6360(void)

void FUN_1425b6360(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  undefined8 local_res10;
  longlong *local_18;
  int local_10;
  
  if (param_1[0x1a] != 0) {
    UWorld::GetLevelIterator(param_1[0x1a],&local_18);
    for (; (-1 < local_10 && (local_10 < (int)local_18[1])); local_10 = local_10 + 1) {
      lVar1 = *(longlong *)(*local_18 + (longlong)local_10 * 8);
      if (lVar1 != 0) {
        lVar2 = *(longlong *)(lVar1 + 0xf0);
        if (lVar2 != 0) {
          if (param_1[0x12] != 0) {
            (**(code **)(*param_1 + 0x348))(param_1);
            lVar2 = *(longlong *)(lVar1 + 0xf0);
          }
          FUN_1425caff0(param_1,*(undefined8 *)(lVar2 + 0x10));
          FWeakObjectPtr::operator=(&local_res8,*(undefined8 *)(lVar1 + 0xf0));
          local_res10 = local_res8;
          TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
          ::Remove(param_1 + 0x75,&local_res10);
        }
        lVar2 = FUN_14203ac20(lVar1,1);
        if (lVar2 != 0) {
          lVar2 = *param_1;
          uVar3 = FUN_14203ac20(lVar1,1);
          (**(code **)(lVar2 + 0x348))(param_1,uVar3);
        }
      }
    }
  }
  return;
}



// FUNCTION 1425b6470 FUN_1425b6470 body=406 status=ok
// SIG undefined FUN_1425b6470(void)

void FUN_1425b6470(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  uint uStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  plVar1 = (longlong *)(param_1 + 0x88);
  iVar2 = *(int *)(param_1 + 0xb0);
  puStack_28 = (uint *)(param_1 + 0x98);
  local_78 = 0;
  uStack_74 = 1;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar2 != 0) {
    puVar7 = *(uint **)(param_1 + 0xa8);
    if (*(uint **)(param_1 + 0xa8) == (uint *)0x0) {
      puVar7 = puStack_28;
    }
    uVar5 = *puVar7;
    local_78 = 0;
    uStack_60 = 0;
    while (uVar5 == 0) {
      lVar6 = (longlong)(int)local_78;
      uStack_60 = uStack_60 + 0x20;
      uVar5 = local_78 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_78;
      local_78 = uVar5;
      if (bVar3) goto LAB_1425b652f;
      uVar5 = puVar7[lVar6 + 1];
    }
    uStack_74 = -uVar5 & uVar5;
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
    local_68._4_4_ = (uStack_60 - iVar4) + 0x1f;
    if (iVar2 < local_68._4_4_) {
LAB_1425b652f:
      local_68._4_4_ = iVar2;
    }
  }
  auStack_20._4_4_ = local_68._4_4_;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_60;
  auStack_20._12_4_ = iStack_5c;
  uStack_30 = local_78;
  uStack_2c = uStack_74;
  local_40 = 0;
  local_10._0_4_ = SUB84(plVar1,0);
  local_10._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  uStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  bVar3 = local_68._4_4_ < *(int *)(param_1 + 0xb0);
  local_48 = plVar1;
  local_38 = plVar1;
  local_10 = plVar1;
  local_68 = puStack_28;
  if (bVar3) {
    do {
      lVar6 = *(longlong *)(*plVar1 + 8 + (longlong)iStack_5c * 0x18);
      *(undefined4 *)(lVar6 + 0x48) = 0;
      if (*(int *)(lVar6 + 0x4c) != 0) {
        TArray<float,FDefaultAllocator>::ResizeTo(lVar6 + 0x40,0);
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 1425b6610 FUN_1425b6610 body=184 status=ok
// SIG undefined FUN_1425b6610(void)

ulonglong FUN_1425b6610(longlong param_1,longlong param_2)

{
  bool bVar1;
  byte *pbVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  int local_res8 [2];
  
  lVar5 = *(longlong *)(param_2 + 0x20);
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x1838,local_res8,lVar5);
  if (((local_res8[0] != -1) &&
      (lVar3 = *(longlong *)(param_1 + 0x1838) + (longlong)local_res8[0] * 0x18, lVar3 != 0)) &&
     (pbVar2 = (byte *)(lVar3 + 8), pbVar2 != (byte *)0x0)) {
    return (ulonglong)*pbVar2;
  }
  if (lVar5 != 0) {
    lVar3 = FUN_1429a0270();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1425b66ae;
  }
  lVar5 = 0;
LAB_1425b66ae:
  uVar4 = FUN_1425d4a60(param_1,lVar5);
  return uVar4;
}



// FUNCTION 1425b66d0 FUN_1425b66d0 body=156 status=ok
// SIG undefined FUN_1425b66d0(void)

void FUN_1425b66d0(longlong *param_1)

{
  if ((param_1[0xb] != 0) && (*(int *)((longlong)param_1 + 300) != 1)) {
    if (*(longlong **)param_1[0x2b0] != (longlong *)0x0) {
      (**(code **)(**(longlong **)param_1[0x2b0] + 0x288))();
    }
    *(undefined4 *)((longlong)param_1 + 300) = 1;
    if (((param_1[0x27] == 0) || (*(int *)(param_1[0x27] + 0x1cc) == 2)) &&
       (((*(byte *)((longlong)param_1 + 0xa4) & 1) != 0 ||
        ((*(longlong *)(param_1[0xb] + 0x90) != 0 ||
         (*(int *)param_1[0x2b4] != *(int *)((longlong)param_1 + 0x15e4))))))) {
      (**(code **)(*param_1 + 0x2c8))(param_1,0);
    }
  }
  param_1[0x2be] = 0;
  param_1[0x2bf] = 0;
  return;
}



// FUNCTION 1425b6770 Compact body=429 status=ok
// SIG undefined Compact(void)

ulonglong TSparseArray<TSetElement<TTuple<TWeakObjectPtr<UClass,FWeakObjectPtr>,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
        iVar4 = *(int *)((longlong)iVar8 * 0x14 + 4 + *param_1);
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
                    ((void *)((longlong)iVar8 * 0x14 + lVar5),
                     (void *)((longlong)iVar11 * 0x14 + lVar5),0x14);
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
                ((void *)(*param_1 + (longlong)iVar14 * 0x14),
                 (void *)(*param_1 + (longlong)iVar3 * 0x14),(longlong)iVar8 * 0x14);
      iVar12 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar12 - iVar2;
    TArray<FInterpCurvePoint<float>,FDefaultAllocator>::ResizeShrink(param_1);
    TBitArray<FDefaultBitArrayAllocator>::RemoveAt(param_1 + 2,iVar14,iVar2);
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    return uVar13;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1425b6920 FUN_1425b6920 body=629 status=ok
// SIG undefined FUN_1425b6920(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_1425b6920(longlong *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  uint uVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined1 local_80 [4];
  uint local_7c;
  longlong local_78;
  uint local_70;
  int local_6c;
  longlong local_60;
  undefined8 uStack_58;
  longlong local_50;
  longlong lStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  uVar9 = 0;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    local_60 = 0;
    uStack_58 = 0;
    local_40 = (longlong *)0x0;
    uStack_38 = 0;
    local_30 = 0xffffffff;
    iVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    uVar11 = 0;
    if (iVar13 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                (&local_60,iVar13);
      uVar11 = uStack_38._4_4_;
    }
    local_30 = 0xffffffff;
    uStack_38 = uStack_38 & 0xffffffff00000000;
    uVar7 = iVar13 + 0x1f + (iVar13 + 0x1f >> 0x1f & 0x1fU);
    if (uVar11 != (uVar7 & 0xffffffe0)) {
      uStack_38 = ((ulonglong)uVar7 & 0xffffffe0) << 0x20;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_50,0);
    }
    TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
              (&local_88,param_1);
    if (local_6c < *(int *)(local_78 + 0x18)) {
      do {
        iVar13 = local_6c;
        if (local_30._4_4_ == 0) {
          iVar14 = (int)uStack_58;
          uVar15 = uStack_58 & 0xffffffff;
          iVar8 = (int)uStack_58 + 1;
          uStack_58 = CONCAT44(uStack_58._4_4_,iVar8);
          if (uStack_58._4_4_ < iVar8) {
            TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_60,uVar15);
          }
          TBitArray<FDefaultBitArrayAllocator>::Add(&local_50,0,1);
        }
        else {
          iVar14 = (int)local_30;
          local_30._4_4_ = local_30._4_4_ + -1;
          iVar8 = *(int *)(local_60 + 4 + (longlong)(int)local_30 * 0xc);
          local_30 = CONCAT44(local_30._4_4_,iVar8);
          if (local_30._4_4_ != 0) {
            *(undefined4 *)(local_60 + (longlong)iVar8 * 0xc) = 0xffffffff;
          }
        }
        plVar12 = &local_50;
        if (local_40 != (longlong *)0x0) {
          plVar12 = local_40;
        }
        iVar8 = iVar14;
        if (iVar14 < 0) {
          iVar8 = iVar14 + 0x1f;
        }
        puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar8 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)iVar14 & 0x1f);
        puVar2 = (undefined4 *)(local_60 + (longlong)iVar14 * 0xc);
        lVar10 = (longlong)iVar13;
        lVar3 = *local_88;
        *puVar2 = *(undefined4 *)(lVar3 + lVar10 * 0xc);
        puVar2[1] = *(undefined4 *)(lVar3 + 4 + lVar10 * 0xc);
        puVar2[2] = *(undefined4 *)(lVar3 + 8 + lVar10 * 0xc);
        local_70 = local_70 & ~local_7c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_80);
      } while (local_6c < *(int *)(local_78 + 0x18));
    }
    if (param_1 != &local_60) {
      lVar10 = *param_1;
      uVar15 = param_1[1];
      lVar4 = param_1[2];
      lVar5 = param_1[3];
      plVar12 = (longlong *)param_1[4];
      uVar6 = param_1[5];
      lVar3 = param_1[6];
      *param_1 = local_60;
      param_1[1] = uStack_58;
      param_1[2] = local_50;
      param_1[3] = lStack_48;
      *(undefined4 *)(param_1 + 4) = (undefined4)local_40;
      *(undefined4 *)((longlong)param_1 + 0x24) = local_40._4_4_;
      *(undefined4 *)(param_1 + 5) = (undefined4)uStack_38;
      *(uint *)((longlong)param_1 + 0x2c) = uStack_38._4_4_;
      param_1[6] = local_30;
      local_60 = lVar10;
      uStack_58 = uVar15;
      local_50 = lVar4;
      lStack_48 = lVar5;
      local_40 = plVar12;
      uStack_38 = uVar6;
      local_30 = lVar3;
    }
    uVar15 = uStack_58 >> 0x20;
    uStack_58 = uStack_58 & 0xffffffff00000000;
    if ((int)uVar15 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                (&local_60,0);
    }
    local_30 = 0xffffffff;
    uVar15 = uStack_38 >> 0x20;
    uStack_38 = uStack_38 & 0xffffffff00000000;
    if ((int)uVar15 != 0) {
      uStack_38 = 0;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_50,0);
    }
    if (local_40 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_60 != 0) {
      FMemory::Free();
    }
    uVar9 = 1;
  }
  return uVar9;
}



// FUNCTION 1425b6bb0 FUN_1425b6bb0 body=130 status=ok
// SIG undefined FUN_1425b6bb0(void)

undefined8 * FUN_1425b6bb0(int param_1)

{
  undefined8 *_Dst;
  
  if (param_1 != 0) {
    return (undefined8 *)0x0;
  }
  _Dst = (undefined8 *)operator_new(0x60);
  if (_Dst != (undefined8 *)0x0) {
    _guard_xfg_dispatch_icall_nop(_Dst,0,0x60);
    *_Dst = &PTR_FUN_14511a4e8;
    *(undefined8 *)((longlong)_Dst + 10) = 0;
    *(undefined8 *)((longlong)_Dst + 0x12) = 0;
    *(undefined8 *)((longlong)_Dst + 0x1a) = 0;
    *(undefined8 *)((longlong)_Dst + 0x22) = 0;
    *(undefined8 *)((longlong)_Dst + 0x2a) = 0;
    *(undefined8 *)((longlong)_Dst + 0x32) = 0;
    *(undefined8 *)((longlong)_Dst + 0x3a) = 0;
    *(undefined8 *)((longlong)_Dst + 0x42) = 0;
    *(undefined8 *)((longlong)_Dst + 0x4a) = 0;
    *(undefined8 *)((longlong)_Dst + 0x52) = 0;
    *(undefined4 *)((longlong)_Dst + 0x5a) = 0;
    return _Dst;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1425b6c40 FUN_1425b6c40 body=105 status=ok
// SIG undefined FUN_1425b6c40(void)

void FUN_1425b6c40(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  
  (**(code **)(*param_2 + 0x78))
            (param_2,(longlong)*(int *)(param_1 + 8) << 4,(longlong)*(int *)(param_1 + 0xc) << 4);
  iVar1 = *(int *)(param_1 + 0x2c) + 0x1f;
  iVar2 = *(int *)(param_1 + 0x28) + 0x1f;
                    /* WARNING: Could not recover jumptable at 0x0001425b6ca5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x78))
            (param_2,(longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 2);
  return;
}



// FUNCTION 1425b6cb0 FUN_1425b6cb0 body=86 status=ok
// SIG undefined FUN_1425b6cb0(void)

void FUN_1425b6cb0(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x78))(param_2,0x38,0x38);
  (**(code **)(*param_2 + 0x78))
            (param_2,(longlong)*(int *)(param_1 + 0x10) << 2,(longlong)*(int *)(param_1 + 0x14) << 2
            );
                    /* WARNING: Could not recover jumptable at 0x0001425b6d02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x78))
            (param_2,(longlong)*(int *)(param_1 + 0x28),(longlong)*(int *)(param_1 + 0x2c));
  return;
}



// FUNCTION 1425b6d10 FUN_1425b6d10 body=12805 status=ok
// SIG undefined FUN_1425b6d10(void)

void FUN_1425b6d10(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  
  uVar13 = 0;
  local_d8 = (undefined8 *)0x0;
  local_d0 = 0;
  uVar7 = uVar13;
  if (*(int *)(param_1 + 0x18) != 0) {
    local_d0 = 1;
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_d8,0);
    iVar2 = *(int *)(param_1 + 0x18);
    if (local_d8 != (undefined8 *)0x0) {
      *(undefined4 *)(local_d8 + 2) = 0;
      *local_d8 = L"VectorExpressions";
      local_d8[1] = &DAT_14510c83c;
      *(undefined4 *)((longlong)local_d8 + 0x14) = 4;
      *(undefined4 *)(local_d8 + 3) = 1;
      *(undefined4 *)((longlong)local_d8 + 0x1c) = 1;
      *(undefined4 *)(local_d8 + 4) = 4;
      *(int *)((longlong)local_d8 + 0x24) = iVar2;
      local_d8[5] = 0;
      iVar2 = *(int *)(param_1 + 0x18);
    }
    uVar7 = (ulonglong)(uint)(iVar2 << 4);
  }
  uVar12 = local_d0;
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 != 0) {
    lVar10 = (longlong)(int)local_d0;
    iVar1 = (int)local_d0 + 1;
    local_d0 = CONCAT44(local_d0._4_4_,iVar1);
    if (local_d0._4_4_ < iVar1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_d8,uVar12 & 0xffffffff);
      iVar2 = *(int *)(param_1 + 0x28);
    }
    puVar4 = local_d8 + lVar10 * 6;
    if (puVar4 != (undefined8 *)0x0) {
      *(int *)(puVar4 + 2) = (int)uVar7;
      *puVar4 = L"ScalarExpressions";
      puVar4[1] = &DAT_14510c96c;
      *(undefined4 *)((longlong)puVar4 + 0x14) = 4;
      *(undefined4 *)(puVar4 + 3) = 1;
      *(undefined4 *)((longlong)puVar4 + 0x1c) = 1;
      *(int *)((longlong)puVar4 + 0x24) = (int)(iVar2 + 3 + (iVar2 + 3 >> 0x1f & 3U)) >> 2;
      *(undefined4 *)(puVar4 + 4) = 4;
      puVar4[5] = 0;
      iVar2 = *(int *)(param_1 + 0x28);
    }
    uVar7 = (ulonglong)
            (uint)((int)uVar7 + ((int)(iVar2 + 3 + (iVar2 + 3 >> 0x1f & 3U)) >> 2) * 0x10);
  }
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146affe60) && (_Init_thread_header(&DAT_146affe60), DAT_146affe60 == -1)) {
    lVar8 = 0x80;
    lVar10 = 0x146aff67c;
    do {
      *(undefined8 *)(lVar10 + -0x1c) = 0;
      *(undefined8 *)(lVar10 + -0x14) = 0;
      *(undefined8 *)(lVar10 + -0xc) = 0;
      *(undefined8 *)(lVar10 + -4) = 0;
      *(undefined8 *)(lVar10 + 4) = 0;
      *(undefined8 *)(lVar10 + 0xc) = 0;
      *(undefined8 *)(lVar10 + 0x14) = 0;
      *(undefined8 *)(lVar10 + 0x1c) = 0;
      *(undefined8 *)(lVar10 + 0x24) = 0;
      *(undefined8 *)(lVar10 + 0x2c) = 0;
      *(undefined8 *)(lVar10 + 0x34) = 0;
      *(undefined8 *)(lVar10 + 0x3c) = 0;
      *(undefined8 *)(lVar10 + 0x44) = 0;
      *(undefined8 *)(lVar10 + 0x4c) = 0;
      *(undefined8 *)(lVar10 + 0x54) = 0;
      *(undefined8 *)(lVar10 + 0x5c) = 0;
      *(undefined8 *)(lVar10 + 100) = 0;
      *(undefined8 *)(lVar10 + 0x6c) = 0;
      *(undefined8 *)(lVar10 + 0x74) = 0;
      *(undefined8 *)(lVar10 + 0x7c) = 0;
      *(undefined8 *)(lVar10 + 0x84) = 0;
      *(undefined8 *)(lVar10 + 0x8c) = 0;
      *(undefined8 *)(lVar10 + 0x94) = 0;
      *(undefined8 *)(lVar10 + 0x9c) = 0;
      *(undefined8 *)(lVar10 + 0xa4) = 0;
      *(undefined8 *)(lVar10 + 0xac) = 0;
      *(undefined8 *)(lVar10 + 0xb4) = 0;
      *(undefined8 *)(lVar10 + 0xbc) = 0;
      *(undefined8 *)(lVar10 + 0xc4) = 0;
      *(undefined8 *)(lVar10 + 0xcc) = 0;
      *(undefined8 *)(lVar10 + 0xd4) = 0;
      *(undefined8 *)(lVar10 + 0xdc) = 0;
      *(undefined8 *)(lVar10 + 0xe4) = 0;
      *(undefined8 *)(lVar10 + 0xec) = 0;
      *(undefined8 *)(lVar10 + 0xf4) = 0;
      *(undefined8 *)(lVar10 + 0xfc) = 0;
      *(undefined8 *)(lVar10 + 0x104) = 0;
      *(undefined8 *)(lVar10 + 0x10c) = 0;
      *(undefined8 *)(lVar10 + 0x114) = 0;
      *(undefined8 *)(lVar10 + 0x11c) = 0;
      *(undefined8 *)(lVar10 + 0x124) = 0;
      *(undefined8 *)(lVar10 + 300) = 0;
      *(undefined8 *)(lVar10 + 0x134) = 0;
      *(undefined8 *)(lVar10 + 0x13c) = 0;
      *(undefined8 *)(lVar10 + 0x144) = 0;
      *(undefined8 *)(lVar10 + 0x14c) = 0;
      *(undefined8 *)(lVar10 + 0x154) = 0;
      *(undefined8 *)(lVar10 + 0x15c) = 0;
      *(undefined8 *)(lVar10 + 0x164) = 0;
      *(undefined8 *)(lVar10 + 0x16c) = 0;
      *(undefined8 *)(lVar10 + 0x174) = 0;
      *(undefined8 *)(lVar10 + 0x17c) = 0;
      *(undefined8 *)(lVar10 + 0x184) = 0;
      *(undefined8 *)(lVar10 + 0x18c) = 0;
      *(undefined8 *)(lVar10 + 0x194) = 0;
      *(undefined8 *)(lVar10 + 0x19c) = 0;
      *(undefined8 *)(lVar10 + 0x1a4) = 0;
      *(undefined8 *)(lVar10 + 0x1ac) = 0;
      *(undefined8 *)(lVar10 + 0x1b4) = 0;
      *(undefined8 *)(lVar10 + 0x1bc) = 0;
      *(undefined8 *)(lVar10 + 0x1c4) = 0;
      *(undefined8 *)(lVar10 + 0x1cc) = 0;
      *(undefined8 *)(lVar10 + 0x1d4) = 0;
      *(undefined8 *)(lVar10 + 0x1dc) = 0;
      *(undefined8 *)(lVar10 + 0x1e4) = 0;
      *(undefined8 *)(lVar10 + 0x1ec) = 0;
      *(undefined8 *)(lVar10 + 500) = 0;
      *(undefined8 *)(lVar10 + 0x1fc) = 0;
      *(undefined8 *)(lVar10 + 0x204) = 0;
      *(undefined8 *)(lVar10 + 0x20c) = 0;
      *(undefined8 *)(lVar10 + 0x214) = 0;
      *(undefined8 *)(lVar10 + 0x21c) = 0;
      *(undefined8 *)(lVar10 + 0x224) = 0;
      *(undefined8 *)(lVar10 + 0x22c) = 0;
      *(undefined8 *)(lVar10 + 0x234) = 0;
      *(undefined8 *)(lVar10 + 0x23c) = 0;
      *(undefined8 *)(lVar10 + 0x244) = 0;
      *(undefined8 *)(lVar10 + 0x24c) = 0;
      *(undefined8 *)(lVar10 + 0x254) = 0;
      *(undefined8 *)(lVar10 + 0x25c) = 0;
      *(undefined8 *)(lVar10 + 0x264) = 0;
      *(undefined8 *)(lVar10 + 0x26c) = 0;
      *(undefined8 *)(lVar10 + 0x274) = 0;
      *(undefined8 *)(lVar10 + 0x27c) = 0;
      *(undefined8 *)(lVar10 + 0x284) = 0;
      *(undefined8 *)(lVar10 + 0x28c) = 0;
      *(undefined8 *)(lVar10 + 0x294) = 0;
      *(undefined8 *)(lVar10 + 0x29c) = 0;
      *(undefined8 *)(lVar10 + 0x2a4) = 0;
      *(undefined8 *)(lVar10 + 0x2ac) = 0;
      *(undefined8 *)(lVar10 + 0x2b4) = 0;
      *(undefined8 *)(lVar10 + 700) = 0;
      *(undefined8 *)(lVar10 + 0x2c4) = 0;
      *(undefined8 *)(lVar10 + 0x2cc) = 0;
      *(undefined8 *)(lVar10 + 0x2d4) = 0;
      *(undefined8 *)(lVar10 + 0x2dc) = 0;
      *(undefined8 *)(lVar10 + 0x2e4) = 0;
      *(undefined8 *)(lVar10 + 0x2ec) = 0;
      *(undefined8 *)(lVar10 + 0x2f4) = 0;
      *(undefined8 *)(lVar10 + 0x2fc) = 0;
      *(undefined8 *)(lVar10 + 0x304) = 0;
      *(undefined8 *)(lVar10 + 0x30c) = 0;
      *(undefined8 *)(lVar10 + 0x314) = 0;
      *(undefined8 *)(lVar10 + 0x31c) = 0;
      *(undefined8 *)(lVar10 + 0x324) = 0;
      *(undefined8 *)(lVar10 + 0x32c) = 0;
      *(undefined8 *)(lVar10 + 0x334) = 0;
      *(undefined8 *)(lVar10 + 0x33c) = 0;
      *(undefined8 *)(lVar10 + 0x344) = 0;
      *(undefined8 *)(lVar10 + 0x34c) = 0;
      *(undefined8 *)(lVar10 + 0x354) = 0;
      *(undefined8 *)(lVar10 + 0x35c) = 0;
      *(undefined8 *)(lVar10 + 0x364) = 0;
      *(undefined8 *)(lVar10 + 0x36c) = 0;
      *(undefined8 *)(lVar10 + 0x374) = 0;
      *(undefined8 *)(lVar10 + 0x37c) = 0;
      *(undefined8 *)(lVar10 + 900) = 0;
      *(undefined8 *)(lVar10 + 0x38c) = 0;
      *(undefined8 *)(lVar10 + 0x394) = 0;
      *(undefined8 *)(lVar10 + 0x39c) = 0;
      *(undefined8 *)(lVar10 + 0x3a4) = 0;
      *(undefined8 *)(lVar10 + 0x3ac) = 0;
      *(undefined8 *)(lVar10 + 0x3b4) = 0;
      *(undefined8 *)(lVar10 + 0x3bc) = 0;
      *(undefined8 *)(lVar10 + 0x3c4) = 0;
      *(undefined8 *)(lVar10 + 0x3cc) = 0;
      *(undefined8 *)(lVar10 + 0x3d4) = 0;
      *(undefined8 *)(lVar10 + 0x3dc) = 0;
      lVar10 = lVar10 + 0x400;
      lVar8 = lVar8 + -0x40;
    } while (lVar8 != 0);
    atexit(FUN_143eb4660);
    _Init_thread_footer(&DAT_146affe60);
  }
  if ((*piVar11 < DAT_146b00670) && (_Init_thread_header(&DAT_146b00670), DAT_146b00670 == -1)) {
    lVar8 = 0x80;
    lVar10 = 0x146affe8c;
    do {
      *(undefined8 *)(lVar10 + -0x1c) = 0;
      *(undefined8 *)(lVar10 + -0x14) = 0;
      *(undefined8 *)(lVar10 + -0xc) = 0;
      *(undefined8 *)(lVar10 + -4) = 0;
      *(undefined8 *)(lVar10 + 4) = 0;
      *(undefined8 *)(lVar10 + 0xc) = 0;
      *(undefined8 *)(lVar10 + 0x14) = 0;
      *(undefined8 *)(lVar10 + 0x1c) = 0;
      *(undefined8 *)(lVar10 + 0x24) = 0;
      *(undefined8 *)(lVar10 + 0x2c) = 0;
      *(undefined8 *)(lVar10 + 0x34) = 0;
      *(undefined8 *)(lVar10 + 0x3c) = 0;
      *(undefined8 *)(lVar10 + 0x44) = 0;
      *(undefined8 *)(lVar10 + 0x4c) = 0;
      *(undefined8 *)(lVar10 + 0x54) = 0;
      *(undefined8 *)(lVar10 + 0x5c) = 0;
      *(undefined8 *)(lVar10 + 100) = 0;
      *(undefined8 *)(lVar10 + 0x6c) = 0;
      *(undefined8 *)(lVar10 + 0x74) = 0;
      *(undefined8 *)(lVar10 + 0x7c) = 0;
      *(undefined8 *)(lVar10 + 0x84) = 0;
      *(undefined8 *)(lVar10 + 0x8c) = 0;
      *(undefined8 *)(lVar10 + 0x94) = 0;
      *(undefined8 *)(lVar10 + 0x9c) = 0;
      *(undefined8 *)(lVar10 + 0xa4) = 0;
      *(undefined8 *)(lVar10 + 0xac) = 0;
      *(undefined8 *)(lVar10 + 0xb4) = 0;
      *(undefined8 *)(lVar10 + 0xbc) = 0;
      *(undefined8 *)(lVar10 + 0xc4) = 0;
      *(undefined8 *)(lVar10 + 0xcc) = 0;
      *(undefined8 *)(lVar10 + 0xd4) = 0;
      *(undefined8 *)(lVar10 + 0xdc) = 0;
      *(undefined8 *)(lVar10 + 0xe4) = 0;
      *(undefined8 *)(lVar10 + 0xec) = 0;
      *(undefined8 *)(lVar10 + 0xf4) = 0;
      *(undefined8 *)(lVar10 + 0xfc) = 0;
      *(undefined8 *)(lVar10 + 0x104) = 0;
      *(undefined8 *)(lVar10 + 0x10c) = 0;
      *(undefined8 *)(lVar10 + 0x114) = 0;
      *(undefined8 *)(lVar10 + 0x11c) = 0;
      *(undefined8 *)(lVar10 + 0x124) = 0;
      *(undefined8 *)(lVar10 + 300) = 0;
      *(undefined8 *)(lVar10 + 0x134) = 0;
      *(undefined8 *)(lVar10 + 0x13c) = 0;
      *(undefined8 *)(lVar10 + 0x144) = 0;
      *(undefined8 *)(lVar10 + 0x14c) = 0;
      *(undefined8 *)(lVar10 + 0x154) = 0;
      *(undefined8 *)(lVar10 + 0x15c) = 0;
      *(undefined8 *)(lVar10 + 0x164) = 0;
      *(undefined8 *)(lVar10 + 0x16c) = 0;
      *(undefined8 *)(lVar10 + 0x174) = 0;
      *(undefined8 *)(lVar10 + 0x17c) = 0;
      *(undefined8 *)(lVar10 + 0x184) = 0;
      *(undefined8 *)(lVar10 + 0x18c) = 0;
      *(undefined8 *)(lVar10 + 0x194) = 0;
      *(undefined8 *)(lVar10 + 0x19c) = 0;
      *(undefined8 *)(lVar10 + 0x1a4) = 0;
      *(undefined8 *)(lVar10 + 0x1ac) = 0;
      *(undefined8 *)(lVar10 + 0x1b4) = 0;
      *(undefined8 *)(lVar10 + 0x1bc) = 0;
      *(undefined8 *)(lVar10 + 0x1c4) = 0;
      *(undefined8 *)(lVar10 + 0x1cc) = 0;
      *(undefined8 *)(lVar10 + 0x1d4) = 0;
      *(undefined8 *)(lVar10 + 0x1dc) = 0;
      *(undefined8 *)(lVar10 + 0x1e4) = 0;
      *(undefined8 *)(lVar10 + 0x1ec) = 0;
      *(undefined8 *)(lVar10 + 500) = 0;
      *(undefined8 *)(lVar10 + 0x1fc) = 0;
      *(undefined8 *)(lVar10 + 0x204) = 0;
      *(undefined8 *)(lVar10 + 0x20c) = 0;
      *(undefined8 *)(lVar10 + 0x214) = 0;
      *(undefined8 *)(lVar10 + 0x21c) = 0;
      *(undefined8 *)(lVar10 + 0x224) = 0;
      *(undefined8 *)(lVar10 + 0x22c) = 0;
      *(undefined8 *)(lVar10 + 0x234) = 0;
      *(undefined8 *)(lVar10 + 0x23c) = 0;
      *(undefined8 *)(lVar10 + 0x244) = 0;
      *(undefined8 *)(lVar10 + 0x24c) = 0;
      *(undefined8 *)(lVar10 + 0x254) = 0;
      *(undefined8 *)(lVar10 + 0x25c) = 0;
      *(undefined8 *)(lVar10 + 0x264) = 0;
      *(undefined8 *)(lVar10 + 0x26c) = 0;
      *(undefined8 *)(lVar10 + 0x274) = 0;
      *(undefined8 *)(lVar10 + 0x27c) = 0;
      *(undefined8 *)(lVar10 + 0x284) = 0;
      *(undefined8 *)(lVar10 + 0x28c) = 0;
      *(undefined8 *)(lVar10 + 0x294) = 0;
      *(undefined8 *)(lVar10 + 0x29c) = 0;
      *(undefined8 *)(lVar10 + 0x2a4) = 0;
      *(undefined8 *)(lVar10 + 0x2ac) = 0;
      *(undefined8 *)(lVar10 + 0x2b4) = 0;
      *(undefined8 *)(lVar10 + 700) = 0;
      *(undefined8 *)(lVar10 + 0x2c4) = 0;
      *(undefined8 *)(lVar10 + 0x2cc) = 0;
      *(undefined8 *)(lVar10 + 0x2d4) = 0;
      *(undefined8 *)(lVar10 + 0x2dc) = 0;
      *(undefined8 *)(lVar10 + 0x2e4) = 0;
      *(undefined8 *)(lVar10 + 0x2ec) = 0;
      *(undefined8 *)(lVar10 + 0x2f4) = 0;
      *(undefined8 *)(lVar10 + 0x2fc) = 0;
      *(undefined8 *)(lVar10 + 0x304) = 0;
      *(undefined8 *)(lVar10 + 0x30c) = 0;
      *(undefined8 *)(lVar10 + 0x314) = 0;
      *(undefined8 *)(lVar10 + 0x31c) = 0;
      *(undefined8 *)(lVar10 + 0x324) = 0;
      *(undefined8 *)(lVar10 + 0x32c) = 0;
      *(undefined8 *)(lVar10 + 0x334) = 0;
      *(undefined8 *)(lVar10 + 0x33c) = 0;
      *(undefined8 *)(lVar10 + 0x344) = 0;
      *(undefined8 *)(lVar10 + 0x34c) = 0;
      *(undefined8 *)(lVar10 + 0x354) = 0;
      *(undefined8 *)(lVar10 + 0x35c) = 0;
      *(undefined8 *)(lVar10 + 0x364) = 0;
      *(undefined8 *)(lVar10 + 0x36c) = 0;
      *(undefined8 *)(lVar10 + 0x374) = 0;
      *(undefined8 *)(lVar10 + 0x37c) = 0;
      *(undefined8 *)(lVar10 + 900) = 0;
      *(undefined8 *)(lVar10 + 0x38c) = 0;
      *(undefined8 *)(lVar10 + 0x394) = 0;
      *(undefined8 *)(lVar10 + 0x39c) = 0;
      *(undefined8 *)(lVar10 + 0x3a4) = 0;
      *(undefined8 *)(lVar10 + 0x3ac) = 0;
      *(undefined8 *)(lVar10 + 0x3b4) = 0;
      *(undefined8 *)(lVar10 + 0x3bc) = 0;
      *(undefined8 *)(lVar10 + 0x3c4) = 0;
      *(undefined8 *)(lVar10 + 0x3cc) = 0;
      *(undefined8 *)(lVar10 + 0x3d4) = 0;
      *(undefined8 *)(lVar10 + 0x3dc) = 0;
      lVar10 = lVar10 + 0x400;
      lVar8 = lVar8 + -0x40;
    } while (lVar8 != 0);
    atexit(FUN_143eb46b0);
    _Init_thread_footer(&DAT_146b00670);
  }
  if ((*piVar11 < DAT_146b00e80) && (_Init_thread_header(&DAT_146b00e80), DAT_146b00e80 == -1)) {
    lVar8 = 0x80;
    lVar10 = 0x146b0069c;
    do {
      *(undefined8 *)(lVar10 + -0x1c) = 0;
      *(undefined8 *)(lVar10 + -0x14) = 0;
      *(undefined8 *)(lVar10 + -0xc) = 0;
      *(undefined8 *)(lVar10 + -4) = 0;
      *(undefined8 *)(lVar10 + 4) = 0;
      *(undefined8 *)(lVar10 + 0xc) = 0;
      *(undefined8 *)(lVar10 + 0x14) = 0;
      *(undefined8 *)(lVar10 + 0x1c) = 0;
      *(undefined8 *)(lVar10 + 0x24) = 0;
      *(undefined8 *)(lVar10 + 0x2c) = 0;
      *(undefined8 *)(lVar10 + 0x34) = 0;
      *(undefined8 *)(lVar10 + 0x3c) = 0;
      *(undefined8 *)(lVar10 + 0x44) = 0;
      *(undefined8 *)(lVar10 + 0x4c) = 0;
      *(undefined8 *)(lVar10 + 0x54) = 0;
      *(undefined8 *)(lVar10 + 0x5c) = 0;
      *(undefined8 *)(lVar10 + 100) = 0;
      *(undefined8 *)(lVar10 + 0x6c) = 0;
      *(undefined8 *)(lVar10 + 0x74) = 0;
      *(undefined8 *)(lVar10 + 0x7c) = 0;
      *(undefined8 *)(lVar10 + 0x84) = 0;
      *(undefined8 *)(lVar10 + 0x8c) = 0;
      *(undefined8 *)(lVar10 + 0x94) = 0;
      *(undefined8 *)(lVar10 + 0x9c) = 0;
      *(undefined8 *)(lVar10 + 0xa4) = 0;
      *(undefined8 *)(lVar10 + 0xac) = 0;
      *(undefined8 *)(lVar10 + 0xb4) = 0;
      *(undefined8 *)(lVar10 + 0xbc) = 0;
      *(undefined8 *)(lVar10 + 0xc4) = 0;
      *(undefined8 *)(lVar10 + 0xcc) = 0;
      *(undefined8 *)(lVar10 + 0xd4) = 0;
      *(undefined8 *)(lVar10 + 0xdc) = 0;
      *(undefined8 *)(lVar10 + 0xe4) = 0;
      *(undefined8 *)(lVar10 + 0xec) = 0;
      *(undefined8 *)(lVar10 + 0xf4) = 0;
      *(undefined8 *)(lVar10 + 0xfc) = 0;
      *(undefined8 *)(lVar10 + 0x104) = 0;
      *(undefined8 *)(lVar10 + 0x10c) = 0;
      *(undefined8 *)(lVar10 + 0x114) = 0;
      *(undefined8 *)(lVar10 + 0x11c) = 0;
      *(undefined8 *)(lVar10 + 0x124) = 0;
      *(undefined8 *)(lVar10 + 300) = 0;
      *(undefined8 *)(lVar10 + 0x134) = 0;
      *(undefined8 *)(lVar10 + 0x13c) = 0;
      *(undefined8 *)(lVar10 + 0x144) = 0;
      *(undefined8 *)(lVar10 + 0x14c) = 0;
      *(undefined8 *)(lVar10 + 0x154) = 0;
      *(undefined8 *)(lVar10 + 0x15c) = 0;
      *(undefined8 *)(lVar10 + 0x164) = 0;
      *(undefined8 *)(lVar10 + 0x16c) = 0;
      *(undefined8 *)(lVar10 + 0x174) = 0;
      *(undefined8 *)(lVar10 + 0x17c) = 0;
      *(undefined8 *)(lVar10 + 0x184) = 0;
      *(undefined8 *)(lVar10 + 0x18c) = 0;
      *(undefined8 *)(lVar10 + 0x194) = 0;
      *(undefined8 *)(lVar10 + 0x19c) = 0;
      *(undefined8 *)(lVar10 + 0x1a4) = 0;
      *(undefined8 *)(lVar10 + 0x1ac) = 0;
      *(undefined8 *)(lVar10 + 0x1b4) = 0;
      *(undefined8 *)(lVar10 + 0x1bc) = 0;
      *(undefined8 *)(lVar10 + 0x1c4) = 0;
      *(undefined8 *)(lVar10 + 0x1cc) = 0;
      *(undefined8 *)(lVar10 + 0x1d4) = 0;
      *(undefined8 *)(lVar10 + 0x1dc) = 0;
      *(undefined8 *)(lVar10 + 0x1e4) = 0;
      *(undefined8 *)(lVar10 + 0x1ec) = 0;
      *(undefined8 *)(lVar10 + 500) = 0;
      *(undefined8 *)(lVar10 + 0x1fc) = 0;
      *(undefined8 *)(lVar10 + 0x204) = 0;
      *(undefined8 *)(lVar10 + 0x20c) = 0;
      *(undefined8 *)(lVar10 + 0x214) = 0;
      *(undefined8 *)(lVar10 + 0x21c) = 0;
      *(undefined8 *)(lVar10 + 0x224) = 0;
      *(undefined8 *)(lVar10 + 0x22c) = 0;
      *(undefined8 *)(lVar10 + 0x234) = 0;
      *(undefined8 *)(lVar10 + 0x23c) = 0;
      *(undefined8 *)(lVar10 + 0x244) = 0;
      *(undefined8 *)(lVar10 + 0x24c) = 0;
      *(undefined8 *)(lVar10 + 0x254) = 0;
      *(undefined8 *)(lVar10 + 0x25c) = 0;
      *(undefined8 *)(lVar10 + 0x264) = 0;
      *(undefined8 *)(lVar10 + 0x26c) = 0;
      *(undefined8 *)(lVar10 + 0x274) = 0;
      *(undefined8 *)(lVar10 + 0x27c) = 0;
      *(undefined8 *)(lVar10 + 0x284) = 0;
      *(undefined8 *)(lVar10 + 0x28c) = 0;
      *(undefined8 *)(lVar10 + 0x294) = 0;
      *(undefined8 *)(lVar10 + 0x29c) = 0;
      *(undefined8 *)(lVar10 + 0x2a4) = 0;
      *(undefined8 *)(lVar10 + 0x2ac) = 0;
      *(undefined8 *)(lVar10 + 0x2b4) = 0;
      *(undefined8 *)(lVar10 + 700) = 0;
      *(undefined8 *)(lVar10 + 0x2c4) = 0;
      *(undefined8 *)(lVar10 + 0x2cc) = 0;
      *(undefined8 *)(lVar10 + 0x2d4) = 0;
      *(undefined8 *)(lVar10 + 0x2dc) = 0;
      *(undefined8 *)(lVar10 + 0x2e4) = 0;
      *(undefined8 *)(lVar10 + 0x2ec) = 0;
      *(undefined8 *)(lVar10 + 0x2f4) = 0;
      *(undefined8 *)(lVar10 + 0x2fc) = 0;
      *(undefined8 *)(lVar10 + 0x304) = 0;
      *(undefined8 *)(lVar10 + 0x30c) = 0;
      *(undefined8 *)(lVar10 + 0x314) = 0;
      *(undefined8 *)(lVar10 + 0x31c) = 0;
      *(undefined8 *)(lVar10 + 0x324) = 0;
      *(undefined8 *)(lVar10 + 0x32c) = 0;
      *(undefined8 *)(lVar10 + 0x334) = 0;
      *(undefined8 *)(lVar10 + 0x33c) = 0;
      *(undefined8 *)(lVar10 + 0x344) = 0;
      *(undefined8 *)(lVar10 + 0x34c) = 0;
      *(undefined8 *)(lVar10 + 0x354) = 0;
      *(undefined8 *)(lVar10 + 0x35c) = 0;
      *(undefined8 *)(lVar10 + 0x364) = 0;
      *(undefined8 *)(lVar10 + 0x36c) = 0;
      *(undefined8 *)(lVar10 + 0x374) = 0;
      *(undefined8 *)(lVar10 + 0x37c) = 0;
      *(undefined8 *)(lVar10 + 900) = 0;
      *(undefined8 *)(lVar10 + 0x38c) = 0;
      *(undefined8 *)(lVar10 + 0x394) = 0;
      *(undefined8 *)(lVar10 + 0x39c) = 0;
      *(undefined8 *)(lVar10 + 0x3a4) = 0;
      *(undefined8 *)(lVar10 + 0x3ac) = 0;
      *(undefined8 *)(lVar10 + 0x3b4) = 0;
      *(undefined8 *)(lVar10 + 0x3bc) = 0;
      *(undefined8 *)(lVar10 + 0x3c4) = 0;
      *(undefined8 *)(lVar10 + 0x3cc) = 0;
      *(undefined8 *)(lVar10 + 0x3d4) = 0;
      *(undefined8 *)(lVar10 + 0x3dc) = 0;
      lVar10 = lVar10 + 0x400;
      lVar8 = lVar8 + -0x40;
    } while (lVar8 != 0);
    atexit(FUN_143eb4700);
    _Init_thread_footer(&DAT_146b00e80);
  }
  if ((*piVar11 < DAT_146b01690) && (_Init_thread_header(&DAT_146b01690), DAT_146b01690 == -1)) {
    lVar8 = 0x80;
    lVar10 = 0x146b00eac;
    do {
      *(undefined8 *)(lVar10 + -0x1c) = 0;
      *(undefined8 *)(lVar10 + -0x14) = 0;
      *(undefined8 *)(lVar10 + -0xc) = 0;
      *(undefined8 *)(lVar10 + -4) = 0;
      *(undefined8 *)(lVar10 + 4) = 0;
      *(undefined8 *)(lVar10 + 0xc) = 0;
      *(undefined8 *)(lVar10 + 0x14) = 0;
      *(undefined8 *)(lVar10 + 0x1c) = 0;
      *(undefined8 *)(lVar10 + 0x24) = 0;
      *(undefined8 *)(lVar10 + 0x2c) = 0;
      *(undefined8 *)(lVar10 + 0x34) = 0;
      *(undefined8 *)(lVar10 + 0x3c) = 0;
      *(undefined8 *)(lVar10 + 0x44) = 0;
      *(undefined8 *)(lVar10 + 0x4c) = 0;
      *(undefined8 *)(lVar10 + 0x54) = 0;
      *(undefined8 *)(lVar10 + 0x5c) = 0;
      *(undefined8 *)(lVar10 + 100) = 0;
      *(undefined8 *)(lVar10 + 0x6c) = 0;
      *(undefined8 *)(lVar10 + 0x74) = 0;
      *(undefined8 *)(lVar10 + 0x7c) = 0;
      *(undefined8 *)(lVar10 + 0x84) = 0;
      *(undefined8 *)(lVar10 + 0x8c) = 0;
      *(undefined8 *)(lVar10 + 0x94) = 0;
      *(undefined8 *)(lVar10 + 0x9c) = 0;
      *(undefined8 *)(lVar10 + 0xa4) = 0;
      *(undefined8 *)(lVar10 + 0xac) = 0;
      *(undefined8 *)(lVar10 + 0xb4) = 0;
      *(undefined8 *)(lVar10 + 0xbc) = 0;
      *(undefined8 *)(lVar10 + 0xc4) = 0;
      *(undefined8 *)(lVar10 + 0xcc) = 0;
      *(undefined8 *)(lVar10 + 0xd4) = 0;
      *(undefined8 *)(lVar10 + 0xdc) = 0;
      *(undefined8 *)(lVar10 + 0xe4) = 0;
      *(undefined8 *)(lVar10 + 0xec) = 0;
      *(undefined8 *)(lVar10 + 0xf4) = 0;
      *(undefined8 *)(lVar10 + 0xfc) = 0;
      *(undefined8 *)(lVar10 + 0x104) = 0;
      *(undefined8 *)(lVar10 + 0x10c) = 0;
      *(undefined8 *)(lVar10 + 0x114) = 0;
      *(undefined8 *)(lVar10 + 0x11c) = 0;
      *(undefined8 *)(lVar10 + 0x124) = 0;
      *(undefined8 *)(lVar10 + 300) = 0;
      *(undefined8 *)(lVar10 + 0x134) = 0;
      *(undefined8 *)(lVar10 + 0x13c) = 0;
      *(undefined8 *)(lVar10 + 0x144) = 0;
      *(undefined8 *)(lVar10 + 0x14c) = 0;
      *(undefined8 *)(lVar10 + 0x154) = 0;
      *(undefined8 *)(lVar10 + 0x15c) = 0;
      *(undefined8 *)(lVar10 + 0x164) = 0;
      *(undefined8 *)(lVar10 + 0x16c) = 0;
      *(undefined8 *)(lVar10 + 0x174) = 0;
      *(undefined8 *)(lVar10 + 0x17c) = 0;
      *(undefined8 *)(lVar10 + 0x184) = 0;
      *(undefined8 *)(lVar10 + 0x18c) = 0;
      *(undefined8 *)(lVar10 + 0x194) = 0;
      *(undefined8 *)(lVar10 + 0x19c) = 0;
      *(undefined8 *)(lVar10 + 0x1a4) = 0;
      *(undefined8 *)(lVar10 + 0x1ac) = 0;
      *(undefined8 *)(lVar10 + 0x1b4) = 0;
      *(undefined8 *)(lVar10 + 0x1bc) = 0;
      *(undefined8 *)(lVar10 + 0x1c4) = 0;
      *(undefined8 *)(lVar10 + 0x1cc) = 0;
      *(undefined8 *)(lVar10 + 0x1d4) = 0;
      *(undefined8 *)(lVar10 + 0x1dc) = 0;
      *(undefined8 *)(lVar10 + 0x1e4) = 0;
      *(undefined8 *)(lVar10 + 0x1ec) = 0;
      *(undefined8 *)(lVar10 + 500) = 0;
      *(undefined8 *)(lVar10 + 0x1fc) = 0;
      *(undefined8 *)(lVar10 + 0x204) = 0;
      *(undefined8 *)(lVar10 + 0x20c) = 0;
      *(undefined8 *)(lVar10 + 0x214) = 0;
      *(undefined8 *)(lVar10 + 0x21c) = 0;
      *(undefined8 *)(lVar10 + 0x224) = 0;
      *(undefined8 *)(lVar10 + 0x22c) = 0;
      *(undefined8 *)(lVar10 + 0x234) = 0;
      *(undefined8 *)(lVar10 + 0x23c) = 0;
      *(undefined8 *)(lVar10 + 0x244) = 0;
      *(undefined8 *)(lVar10 + 0x24c) = 0;
      *(undefined8 *)(lVar10 + 0x254) = 0;
      *(undefined8 *)(lVar10 + 0x25c) = 0;
      *(undefined8 *)(lVar10 + 0x264) = 0;
      *(undefined8 *)(lVar10 + 0x26c) = 0;
      *(undefined8 *)(lVar10 + 0x274) = 0;
      *(undefined8 *)(lVar10 + 0x27c) = 0;
      *(undefined8 *)(lVar10 + 0x284) = 0;
      *(undefined8 *)(lVar10 + 0x28c) = 0;
      *(undefined8 *)(lVar10 + 0x294) = 0;
      *(undefined8 *)(lVar10 + 0x29c) = 0;
      *(undefined8 *)(lVar10 + 0x2a4) = 0;
      *(undefined8 *)(lVar10 + 0x2ac) = 0;
      *(undefined8 *)(lVar10 + 0x2b4) = 0;
      *(undefined8 *)(lVar10 + 700) = 0;
      *(undefined8 *)(lVar10 + 0x2c4) = 0;
      *(undefined8 *)(lVar10 + 0x2cc) = 0;
      *(undefined8 *)(lVar10 + 0x2d4) = 0;
      *(undefined8 *)(lVar10 + 0x2dc) = 0;
      *(undefined8 *)(lVar10 + 0x2e4) = 0;
      *(undefined8 *)(lVar10 + 0x2ec) = 0;
      *(undefined8 *)(lVar10 + 0x2f4) = 0;
      *(undefined8 *)(lVar10 + 0x2fc) = 0;
      *(undefined8 *)(lVar10 + 0x304) = 0;
      *(undefined8 *)(lVar10 + 0x30c) = 0;
      *(undefined8 *)(lVar10 + 0x314) = 0;
      *(undefined8 *)(lVar10 + 0x31c) = 0;
      *(undefined8 *)(lVar10 + 0x324) = 0;
      *(undefined8 *)(lVar10 + 0x32c) = 0;
      *(undefined8 *)(lVar10 + 0x334) = 0;
      *(undefined8 *)(lVar10 + 0x33c) = 0;
      *(undefined8 *)(lVar10 + 0x344) = 0;
      *(undefined8 *)(lVar10 + 0x34c) = 0;
      *(undefined8 *)(lVar10 + 0x354) = 0;
      *(undefined8 *)(lVar10 + 0x35c) = 0;
      *(undefined8 *)(lVar10 + 0x364) = 0;
      *(undefined8 *)(lVar10 + 0x36c) = 0;
      *(undefined8 *)(lVar10 + 0x374) = 0;
      *(undefined8 *)(lVar10 + 0x37c) = 0;
      *(undefined8 *)(lVar10 + 900) = 0;
      *(undefined8 *)(lVar10 + 0x38c) = 0;
      *(undefined8 *)(lVar10 + 0x394) = 0;
      *(undefined8 *)(lVar10 + 0x39c) = 0;
      *(undefined8 *)(lVar10 + 0x3a4) = 0;
      *(undefined8 *)(lVar10 + 0x3ac) = 0;
      *(undefined8 *)(lVar10 + 0x3b4) = 0;
      *(undefined8 *)(lVar10 + 0x3bc) = 0;
      *(undefined8 *)(lVar10 + 0x3c4) = 0;
      *(undefined8 *)(lVar10 + 0x3cc) = 0;
      *(undefined8 *)(lVar10 + 0x3d4) = 0;
      *(undefined8 *)(lVar10 + 0x3dc) = 0;
      lVar10 = lVar10 + 0x400;
      lVar8 = lVar8 + -0x40;
    } while (lVar8 != 0);
    atexit(FUN_143eb4750);
    _Init_thread_footer(&DAT_146b01690);
  }
  if ((*piVar11 < DAT_146b01ea0) && (_Init_thread_header(&DAT_146b01ea0), DAT_146b01ea0 == -1)) {
    lVar8 = 0x80;
    lVar10 = 0x146b016bc;
    do {
      *(undefined8 *)(lVar10 + -0x1c) = 0;
      *(undefined8 *)(lVar10 + -0x14) = 0;
      *(undefined8 *)(lVar10 + -0xc) = 0;
      *(undefined8 *)(lVar10 + -4) = 0;
      *(undefined8 *)(lVar10 + 4) = 0;
      *(undefined8 *)(lVar10 + 0xc) = 0;
      *(undefined8 *)(lVar10 + 0x14) = 0;
      *(undefined8 *)(lVar10 + 0x1c) = 0;
      *(undefined8 *)(lVar10 + 0x24) = 0;
      *(undefined8 *)(lVar10 + 0x2c) = 0;
      *(undefined8 *)(lVar10 + 0x34) = 0;
      *(undefined8 *)(lVar10 + 0x3c) = 0;
      *(undefined8 *)(lVar10 + 0x44) = 0;
      *(undefined8 *)(lVar10 + 0x4c) = 0;
      *(undefined8 *)(lVar10 + 0x54) = 0;
      *(undefined8 *)(lVar10 + 0x5c) = 0;
      *(undefined8 *)(lVar10 + 100) = 0;
      *(undefined8 *)(lVar10 + 0x6c) = 0;
      *(undefined8 *)(lVar10 + 0x74) = 0;
      *(undefined8 *)(lVar10 + 0x7c) = 0;
      *(undefined8 *)(lVar10 + 0x84) = 0;
      *(undefined8 *)(lVar10 + 0x8c) = 0;
      *(undefined8 *)(lVar10 + 0x94) = 0;
      *(undefined8 *)(lVar10 + 0x9c) = 0;
      *(undefined8 *)(lVar10 + 0xa4) = 0;
      *(undefined8 *)(lVar10 + 0xac) = 0;
      *(undefined8 *)(lVar10 + 0xb4) = 0;
      *(undefined8 *)(lVar10 + 0xbc) = 0;
      *(undefined8 *)(lVar10 + 0xc4) = 0;
      *(undefined8 *)(lVar10 + 0xcc) = 0;
      *(undefined8 *)(lVar10 + 0xd4) = 0;
      *(undefined8 *)(lVar10 + 0xdc) = 0;
      *(undefined8 *)(lVar10 + 0xe4) = 0;
      *(undefined8 *)(lVar10 + 0xec) = 0;
      *(undefined8 *)(lVar10 + 0xf4) = 0;
      *(undefined8 *)(lVar10 + 0xfc) = 0;
      *(undefined8 *)(lVar10 + 0x104) = 0;
      *(undefined8 *)(lVar10 + 0x10c) = 0;
      *(undefined8 *)(lVar10 + 0x114) = 0;
      *(undefined8 *)(lVar10 + 0x11c) = 0;
      *(undefined8 *)(lVar10 + 0x124) = 0;
      *(undefined8 *)(lVar10 + 300) = 0;
      *(undefined8 *)(lVar10 + 0x134) = 0;
      *(undefined8 *)(lVar10 + 0x13c) = 0;
      *(undefined8 *)(lVar10 + 0x144) = 0;
      *(undefined8 *)(lVar10 + 0x14c) = 0;
      *(undefined8 *)(lVar10 + 0x154) = 0;
      *(undefined8 *)(lVar10 + 0x15c) = 0;
      *(undefined8 *)(lVar10 + 0x164) = 0;
      *(undefined8 *)(lVar10 + 0x16c) = 0;
      *(undefined8 *)(lVar10 + 0x174) = 0;
      *(undefined8 *)(lVar10 + 0x17c) = 0;
      *(undefined8 *)(lVar10 + 0x184) = 0;
      *(undefined8 *)(lVar10 + 0x18c) = 0;
      *(undefined8 *)(lVar10 + 0x194) = 0;
      *(undefined8 *)(lVar10 + 0x19c) = 0;
      *(undefined8 *)(lVar10 + 0x1a4) = 0;
      *(undefined8 *)(lVar10 + 0x1ac) = 0;
      *(undefined8 *)(lVar10 + 0x1b4) = 0;
      *(undefined8 *)(lVar10 + 0x1bc) = 0;
      *(undefined8 *)(lVar10 + 0x1c4) = 0;
      *(undefined8 *)(lVar10 + 0x1cc) = 0;
      *(undefined8 *)(lVar10 + 0x1d4) = 0;
      *(undefined8 *)(lVar10 + 0x1dc) = 0;
      *(undefined8 *)(lVar10 + 0x1e4) = 0;
      *(undefined8 *)(lVar10 + 0x1ec) = 0;
      *(undefined8 *)(lVar10 + 500) = 0;
      *(undefined8 *)(lVar10 + 0x1fc) = 0;
      *(undefined8 *)(lVar10 + 0x204) = 0;
      *(undefined8 *)(lVar10 + 0x20c) = 0;
      *(undefined8 *)(lVar10 + 0x214) = 0;
      *(undefined8 *)(lVar10 + 0x21c) = 0;
      *(undefined8 *)(lVar10 + 0x224) = 0;
      *(undefined8 *)(lVar10 + 0x22c) = 0;
      *(undefined8 *)(lVar10 + 0x234) = 0;
      *(undefined8 *)(lVar10 + 0x23c) = 0;
      *(undefined8 *)(lVar10 + 0x244) = 0;
      *(undefined8 *)(lVar10 + 0x24c) = 0;
      *(undefined8 *)(lVar10 + 0x254) = 0;
      *(undefined8 *)(lVar10 + 0x25c) = 0;
      *(undefined8 *)(lVar10 + 0x264) = 0;
      *(undefined8 *)(lVar10 + 0x26c) = 0;
      *(undefined8 *)(lVar10 + 0x274) = 0;
      *(undefined8 *)(lVar10 + 0x27c) = 0;
      *(undefined8 *)(lVar10 + 0x284) = 0;
      *(undefined8 *)(lVar10 + 0x28c) = 0;
      *(undefined8 *)(lVar10 + 0x294) = 0;
      *(undefined8 *)(lVar10 + 0x29c) = 0;
      *(undefined8 *)(lVar10 + 0x2a4) = 0;
      *(undefined8 *)(lVar10 + 0x2ac) = 0;
      *(undefined8 *)(lVar10 + 0x2b4) = 0;
      *(undefined8 *)(lVar10 + 700) = 0;
      *(undefined8 *)(lVar10 + 0x2c4) = 0;
      *(undefined8 *)(lVar10 + 0x2cc) = 0;
      *(undefined8 *)(lVar10 + 0x2d4) = 0;
      *(undefined8 *)(lVar10 + 0x2dc) = 0;
      *(undefined8 *)(lVar10 + 0x2e4) = 0;
      *(undefined8 *)(lVar10 + 0x2ec) = 0;
      *(undefined8 *)(lVar10 + 0x2f4) = 0;
      *(undefined8 *)(lVar10 + 0x2fc) = 0;
      *(undefined8 *)(lVar10 + 0x304) = 0;
      *(undefined8 *)(lVar10 + 0x30c) = 0;
      *(undefined8 *)(lVar10 + 0x314) = 0;
      *(undefined8 *)(lVar10 + 0x31c) = 0;
      *(undefined8 *)(lVar10 + 0x324) = 0;
      *(undefined8 *)(lVar10 + 0x32c) = 0;
      *(undefined8 *)(lVar10 + 0x334) = 0;
      *(undefined8 *)(lVar10 + 0x33c) = 0;
      *(undefined8 *)(lVar10 + 0x344) = 0;
      *(undefined8 *)(lVar10 + 0x34c) = 0;
      *(undefined8 *)(lVar10 + 0x354) = 0;
      *(undefined8 *)(lVar10 + 0x35c) = 0;
      *(undefined8 *)(lVar10 + 0x364) = 0;
      *(undefined8 *)(lVar10 + 0x36c) = 0;
      *(undefined8 *)(lVar10 + 0x374) = 0;
      *(undefined8 *)(lVar10 + 0x37c) = 0;
      *(undefined8 *)(lVar10 + 900) = 0;
      *(undefined8 *)(lVar10 + 0x38c) = 0;
      *(undefined8 *)(lVar10 + 0x394) = 0;
      *(undefined8 *)(lVar10 + 0x39c) = 0;
      *(undefined8 *)(lVar10 + 0x3a4) = 0;
      *(undefined8 *)(lVar10 + 0x3ac) = 0;
      *(undefined8 *)(lVar10 + 0x3b4) = 0;
      *(undefined8 *)(lVar10 + 0x3bc) = 0;
      *(undefined8 *)(lVar10 + 0x3c4) = 0;
      *(undefined8 *)(lVar10 + 0x3cc) = 0;
      *(undefined8 *)(lVar10 + 0x3d4) = 0;
      *(undefined8 *)(lVar10 + 0x3dc) = 0;
      lVar10 = lVar10 + 0x400;
      lVar8 = lVar8 + -0x40;
    } while (lVar8 != 0);
    atexit(FUN_143eb47d0);
    _Init_thread_footer(&DAT_146b01ea0);
  }
  if ((*piVar11 < DAT_146b026b0) && (_Init_thread_header(&DAT_146b026b0), DAT_146b026b0 == -1)) {
    lVar8 = 0x80;
    lVar10 = 0x146b01ecc;
    do {
      *(undefined8 *)(lVar10 + -0x1c) = 0;
      *(undefined8 *)(lVar10 + -0x14) = 0;
      *(undefined8 *)(lVar10 + -0xc) = 0;
      *(undefined8 *)(lVar10 + -4) = 0;
      *(undefined8 *)(lVar10 + 4) = 0;
      *(undefined8 *)(lVar10 + 0xc) = 0;
      *(undefined8 *)(lVar10 + 0x14) = 0;
      *(undefined8 *)(lVar10 + 0x1c) = 0;
      *(undefined8 *)(lVar10 + 0x24) = 0;
      *(undefined8 *)(lVar10 + 0x2c) = 0;
      *(undefined8 *)(lVar10 + 0x34) = 0;
      *(undefined8 *)(lVar10 + 0x3c) = 0;
      *(undefined8 *)(lVar10 + 0x44) = 0;
      *(undefined8 *)(lVar10 + 0x4c) = 0;
      *(undefined8 *)(lVar10 + 0x54) = 0;
      *(undefined8 *)(lVar10 + 0x5c) = 0;
      *(undefined8 *)(lVar10 + 100) = 0;
      *(undefined8 *)(lVar10 + 0x6c) = 0;
      *(undefined8 *)(lVar10 + 0x74) = 0;
      *(undefined8 *)(lVar10 + 0x7c) = 0;
      *(undefined8 *)(lVar10 + 0x84) = 0;
      *(undefined8 *)(lVar10 + 0x8c) = 0;
      *(undefined8 *)(lVar10 + 0x94) = 0;
      *(undefined8 *)(lVar10 + 0x9c) = 0;
      *(undefined8 *)(lVar10 + 0xa4) = 0;
      *(undefined8 *)(lVar10 + 0xac) = 0;
      *(undefined8 *)(lVar10 + 0xb4) = 0;
      *(undefined8 *)(lVar10 + 0xbc) = 0;
      *(undefined8 *)(lVar10 + 0xc4) = 0;
      *(undefined8 *)(lVar10 + 0xcc) = 0;
      *(undefined8 *)(lVar10 + 0xd4) = 0;
      *(undefined8 *)(lVar10 + 0xdc) = 0;
      *(undefined8 *)(lVar10 + 0xe4) = 0;
      *(undefined8 *)(lVar10 + 0xec) = 0;
      *(undefined8 *)(lVar10 + 0xf4) = 0;
      *(undefined8 *)(lVar10 + 0xfc) = 0;
      *(undefined8 *)(lVar10 + 0x104) = 0;
      *(undefined8 *)(lVar10 + 0x10c) = 0;
      *(undefined8 *)(lVar10 + 0x114) = 0;
      *(undefined8 *)(lVar10 + 0x11c) = 0;
      *(undefined8 *)(lVar10 + 0x124) = 0;
      *(undefined8 *)(lVar10 + 300) = 0;
      *(undefined8 *)(lVar10 + 0x134) = 0;
      *(undefined8 *)(lVar10 + 0x13c) = 0;
      *(undefined8 *)(lVar10 + 0x144) = 0;
      *(undefined8 *)(lVar10 + 0x14c) = 0;
      *(undefined8 *)(lVar10 + 0x154) = 0;
      *(undefined8 *)(lVar10 + 0x15c) = 0;
      *(undefined8 *)(lVar10 + 0x164) = 0;
      *(undefined8 *)(lVar10 + 0x16c) = 0;
      *(undefined8 *)(lVar10 + 0x174) = 0;
      *(undefined8 *)(lVar10 + 0x17c) = 0;
      *(undefined8 *)(lVar10 + 0x184) = 0;
      *(undefined8 *)(lVar10 + 0x18c) = 0;
      *(undefined8 *)(lVar10 + 0x194) = 0;
      *(undefined8 *)(lVar10 + 0x19c) = 0;
      *(undefined8 *)(lVar10 + 0x1a4) = 0;
      *(undefined8 *)(lVar10 + 0x1ac) = 0;
      *(undefined8 *)(lVar10 + 0x1b4) = 0;
      *(undefined8 *)(lVar10 + 0x1bc) = 0;
      *(undefined8 *)(lVar10 + 0x1c4) = 0;
      *(undefined8 *)(lVar10 + 0x1cc) = 0;
      *(undefined8 *)(lVar10 + 0x1d4) = 0;
      *(undefined8 *)(lVar10 + 0x1dc) = 0;
      *(undefined8 *)(lVar10 + 0x1e4) = 0;
      *(undefined8 *)(lVar10 + 0x1ec) = 0;
      *(undefined8 *)(lVar10 + 500) = 0;
      *(undefined8 *)(lVar10 + 0x1fc) = 0;
      *(undefined8 *)(lVar10 + 0x204) = 0;
      *(undefined8 *)(lVar10 + 0x20c) = 0;
      *(undefined8 *)(lVar10 + 0x214) = 0;
      *(undefined8 *)(lVar10 + 0x21c) = 0;
      *(undefined8 *)(lVar10 + 0x224) = 0;
      *(undefined8 *)(lVar10 + 0x22c) = 0;
      *(undefined8 *)(lVar10 + 0x234) = 0;
      *(undefined8 *)(lVar10 + 0x23c) = 0;
      *(undefined8 *)(lVar10 + 0x244) = 0;
      *(undefined8 *)(lVar10 + 0x24c) = 0;
      *(undefined8 *)(lVar10 + 0x254) = 0;
      *(undefined8 *)(lVar10 + 0x25c) = 0;
      *(undefined8 *)(lVar10 + 0x264) = 0;
      *(undefined8 *)(lVar10 + 0x26c) = 0;
      *(undefined8 *)(lVar10 + 0x274) = 0;
      *(undefined8 *)(lVar10 + 0x27c) = 0;
      *(undefined8 *)(lVar10 + 0x284) = 0;
      *(undefined8 *)(lVar10 + 0x28c) = 0;
      *(undefined8 *)(lVar10 + 0x294) = 0;
      *(undefined8 *)(lVar10 + 0x29c) = 0;
      *(undefined8 *)(lVar10 + 0x2a4) = 0;
      *(undefined8 *)(lVar10 + 0x2ac) = 0;
      *(undefined8 *)(lVar10 + 0x2b4) = 0;
      *(undefined8 *)(lVar10 + 700) = 0;
      *(undefined8 *)(lVar10 + 0x2c4) = 0;
      *(undefined8 *)(lVar10 + 0x2cc) = 0;
      *(undefined8 *)(lVar10 + 0x2d4) = 0;
      *(undefined8 *)(lVar10 + 0x2dc) = 0;
      *(undefined8 *)(lVar10 + 0x2e4) = 0;
      *(undefined8 *)(lVar10 + 0x2ec) = 0;
      *(undefined8 *)(lVar10 + 0x2f4) = 0;
      *(undefined8 *)(lVar10 + 0x2fc) = 0;
      *(undefined8 *)(lVar10 + 0x304) = 0;
      *(undefined8 *)(lVar10 + 0x30c) = 0;
      *(undefined8 *)(lVar10 + 0x314) = 0;
      *(undefined8 *)(lVar10 + 0x31c) = 0;
      *(undefined8 *)(lVar10 + 0x324) = 0;
      *(undefined8 *)(lVar10 + 0x32c) = 0;
      *(undefined8 *)(lVar10 + 0x334) = 0;
      *(undefined8 *)(lVar10 + 0x33c) = 0;
      *(undefined8 *)(lVar10 + 0x344) = 0;
      *(undefined8 *)(lVar10 + 0x34c) = 0;
      *(undefined8 *)(lVar10 + 0x354) = 0;
      *(undefined8 *)(lVar10 + 0x35c) = 0;
      *(undefined8 *)(lVar10 + 0x364) = 0;
      *(undefined8 *)(lVar10 + 0x36c) = 0;
      *(undefined8 *)(lVar10 + 0x374) = 0;
      *(undefined8 *)(lVar10 + 0x37c) = 0;
      *(undefined8 *)(lVar10 + 900) = 0;
      *(undefined8 *)(lVar10 + 0x38c) = 0;
      *(undefined8 *)(lVar10 + 0x394) = 0;
      *(undefined8 *)(lVar10 + 0x39c) = 0;
      *(undefined8 *)(lVar10 + 0x3a4) = 0;
      *(undefined8 *)(lVar10 + 0x3ac) = 0;
      *(undefined8 *)(lVar10 + 0x3b4) = 0;
      *(undefined8 *)(lVar10 + 0x3bc) = 0;
      *(undefined8 *)(lVar10 + 0x3c4) = 0;
      *(undefined8 *)(lVar10 + 0x3cc) = 0;
      *(undefined8 *)(lVar10 + 0x3d4) = 0;
      *(undefined8 *)(lVar10 + 0x3dc) = 0;
      lVar10 = lVar10 + 0x400;
      lVar8 = lVar8 + -0x40;
    } while (lVar8 != 0);
    atexit(FUN_143eb4820);
    _Init_thread_footer(&DAT_146b026b0);
  }
  if ((*piVar11 < DAT_146b02ec0) && (_Init_thread_header(&DAT_146b02ec0), DAT_146b02ec0 == -1)) {
    lVar8 = 0x80;
    lVar10 = 0x146b026dc;
    do {
      *(undefined8 *)(lVar10 + -0x1c) = 0;
      *(undefined8 *)(lVar10 + -0x14) = 0;
      *(undefined8 *)(lVar10 + -0xc) = 0;
      *(undefined8 *)(lVar10 + -4) = 0;
      *(undefined8 *)(lVar10 + 4) = 0;
      *(undefined8 *)(lVar10 + 0xc) = 0;
      *(undefined8 *)(lVar10 + 0x14) = 0;
      *(undefined8 *)(lVar10 + 0x1c) = 0;
      *(undefined8 *)(lVar10 + 0x24) = 0;
      *(undefined8 *)(lVar10 + 0x2c) = 0;
      *(undefined8 *)(lVar10 + 0x34) = 0;
      *(undefined8 *)(lVar10 + 0x3c) = 0;
      *(undefined8 *)(lVar10 + 0x44) = 0;
      *(undefined8 *)(lVar10 + 0x4c) = 0;
      *(undefined8 *)(lVar10 + 0x54) = 0;
      *(undefined8 *)(lVar10 + 0x5c) = 0;
      *(undefined8 *)(lVar10 + 100) = 0;
      *(undefined8 *)(lVar10 + 0x6c) = 0;
      *(undefined8 *)(lVar10 + 0x74) = 0;
      *(undefined8 *)(lVar10 + 0x7c) = 0;
      *(undefined8 *)(lVar10 + 0x84) = 0;
      *(undefined8 *)(lVar10 + 0x8c) = 0;
      *(undefined8 *)(lVar10 + 0x94) = 0;
      *(undefined8 *)(lVar10 + 0x9c) = 0;
      *(undefined8 *)(lVar10 + 0xa4) = 0;
      *(undefined8 *)(lVar10 + 0xac) = 0;
      *(undefined8 *)(lVar10 + 0xb4) = 0;
      *(undefined8 *)(lVar10 + 0xbc) = 0;
      *(undefined8 *)(lVar10 + 0xc4) = 0;
      *(undefined8 *)(lVar10 + 0xcc) = 0;
      *(undefined8 *)(lVar10 + 0xd4) = 0;
      *(undefined8 *)(lVar10 + 0xdc) = 0;
      *(undefined8 *)(lVar10 + 0xe4) = 0;
      *(undefined8 *)(lVar10 + 0xec) = 0;
      *(undefined8 *)(lVar10 + 0xf4) = 0;
      *(undefined8 *)(lVar10 + 0xfc) = 0;
      *(undefined8 *)(lVar10 + 0x104) = 0;
      *(undefined8 *)(lVar10 + 0x10c) = 0;
      *(undefined8 *)(lVar10 + 0x114) = 0;
      *(undefined8 *)(lVar10 + 0x11c) = 0;
      *(undefined8 *)(lVar10 + 0x124) = 0;
      *(undefined8 *)(lVar10 + 300) = 0;
      *(undefined8 *)(lVar10 + 0x134) = 0;
      *(undefined8 *)(lVar10 + 0x13c) = 0;
      *(undefined8 *)(lVar10 + 0x144) = 0;
      *(undefined8 *)(lVar10 + 0x14c) = 0;
      *(undefined8 *)(lVar10 + 0x154) = 0;
      *(undefined8 *)(lVar10 + 0x15c) = 0;
      *(undefined8 *)(lVar10 + 0x164) = 0;
      *(undefined8 *)(lVar10 + 0x16c) = 0;
      *(undefined8 *)(lVar10 + 0x174) = 0;
      *(undefined8 *)(lVar10 + 0x17c) = 0;
      *(undefined8 *)(lVar10 + 0x184) = 0;
      *(undefined8 *)(lVar10 + 0x18c) = 0;
      *(undefined8 *)(lVar10 + 0x194) = 0;
      *(undefined8 *)(lVar10 + 0x19c) = 0;
      *(undefined8 *)(lVar10 + 0x1a4) = 0;
      *(undefined8 *)(lVar10 + 0x1ac) = 0;
      *(undefined8 *)(lVar10 + 0x1b4) = 0;
      *(undefined8 *)(lVar10 + 0x1bc) = 0;
      *(undefined8 *)(lVar10 + 0x1c4) = 0;
      *(undefined8 *)(lVar10 + 0x1cc) = 0;
      *(undefined8 *)(lVar10 + 0x1d4) = 0;
      *(undefined8 *)(lVar10 + 0x1dc) = 0;
      *(undefined8 *)(lVar10 + 0x1e4) = 0;
      *(undefined8 *)(lVar10 + 0x1ec) = 0;
      *(undefined8 *)(lVar10 + 500) = 0;
      *(undefined8 *)(lVar10 + 0x1fc) = 0;
      *(undefined8 *)(lVar10 + 0x204) = 0;
      *(undefined8 *)(lVar10 + 0x20c) = 0;
      *(undefined8 *)(lVar10 + 0x214) = 0;
      *(undefined8 *)(lVar10 + 0x21c) = 0;
      *(undefined8 *)(lVar10 + 0x224) = 0;
      *(undefined8 *)(lVar10 + 0x22c) = 0;
      *(undefined8 *)(lVar10 + 0x234) = 0;
      *(undefined8 *)(lVar10 + 0x23c) = 0;
      *(undefined8 *)(lVar10 + 0x244) = 0;
      *(undefined8 *)(lVar10 + 0x24c) = 0;
      *(undefined8 *)(lVar10 + 0x254) = 0;
      *(undefined8 *)(lVar10 + 0x25c) = 0;
      *(undefined8 *)(lVar10 + 0x264) = 0;
      *(undefined8 *)(lVar10 + 0x26c) = 0;
      *(undefined8 *)(lVar10 + 0x274) = 0;
      *(undefined8 *)(lVar10 + 0x27c) = 0;
      *(undefined8 *)(lVar10 + 0x284) = 0;
      *(undefined8 *)(lVar10 + 0x28c) = 0;
      *(undefined8 *)(lVar10 + 0x294) = 0;
      *(undefined8 *)(lVar10 + 0x29c) = 0;
      *(undefined8 *)(lVar10 + 0x2a4) = 0;
      *(undefined8 *)(lVar10 + 0x2ac) = 0;
      *(undefined8 *)(lVar10 + 0x2b4) = 0;
      *(undefined8 *)(lVar10 + 700) = 0;
      *(undefined8 *)(lVar10 + 0x2c4) = 0;
      *(undefined8 *)(lVar10 + 0x2cc) = 0;
      *(undefined8 *)(lVar10 + 0x2d4) = 0;
      *(undefined8 *)(lVar10 + 0x2dc) = 0;
      *(undefined8 *)(lVar10 + 0x2e4) = 0;
      *(undefined8 *)(lVar10 + 0x2ec) = 0;
      *(undefined8 *)(lVar10 + 0x2f4) = 0;
      *(undefined8 *)(lVar10 + 0x2fc) = 0;
      *(undefined8 *)(lVar10 + 0x304) = 0;
      *(undefined8 *)(lVar10 + 0x30c) = 0;
      *(undefined8 *)(lVar10 + 0x314) = 0;
      *(undefined8 *)(lVar10 + 0x31c) = 0;
      *(undefined8 *)(lVar10 + 0x324) = 0;
      *(undefined8 *)(lVar10 + 0x32c) = 0;
      *(undefined8 *)(lVar10 + 0x334) = 0;
      *(undefined8 *)(lVar10 + 0x33c) = 0;
      *(undefined8 *)(lVar10 + 0x344) = 0;
      *(undefined8 *)(lVar10 + 0x34c) = 0;
      *(undefined8 *)(lVar10 + 0x354) = 0;
      *(undefined8 *)(lVar10 + 0x35c) = 0;
      *(undefined8 *)(lVar10 + 0x364) = 0;
      *(undefined8 *)(lVar10 + 0x36c) = 0;
      *(undefined8 *)(lVar10 + 0x374) = 0;
      *(undefined8 *)(lVar10 + 0x37c) = 0;
      *(undefined8 *)(lVar10 + 900) = 0;
      *(undefined8 *)(lVar10 + 0x38c) = 0;
      *(undefined8 *)(lVar10 + 0x394) = 0;
      *(undefined8 *)(lVar10 + 0x39c) = 0;
      *(undefined8 *)(lVar10 + 0x3a4) = 0;
      *(undefined8 *)(lVar10 + 0x3ac) = 0;
      *(undefined8 *)(lVar10 + 0x3b4) = 0;
      *(undefined8 *)(lVar10 + 0x3bc) = 0;
      *(undefined8 *)(lVar10 + 0x3c4) = 0;
      *(undefined8 *)(lVar10 + 0x3cc) = 0;
      *(undefined8 *)(lVar10 + 0x3d4) = 0;
      *(undefined8 *)(lVar10 + 0x3dc) = 0;
      lVar10 = lVar10 + 0x400;
      lVar8 = lVar8 + -0x40;
    } while (lVar8 != 0);
    atexit(FUN_143eb45c0);
    _Init_thread_footer(&DAT_146b02ec0);
  }
  if ((*piVar11 < DAT_146b036d0) && (_Init_thread_header(&DAT_146b036d0), DAT_146b036d0 == -1)) {
    lVar8 = 0x80;
    lVar10 = 0x146b02eec;
    do {
      *(undefined8 *)(lVar10 + -0x1c) = 0;
      *(undefined8 *)(lVar10 + -0x14) = 0;
      *(undefined8 *)(lVar10 + -0xc) = 0;
      *(undefined8 *)(lVar10 + -4) = 0;
      *(undefined8 *)(lVar10 + 4) = 0;
      *(undefined8 *)(lVar10 + 0xc) = 0;
      *(undefined8 *)(lVar10 + 0x14) = 0;
      *(undefined8 *)(lVar10 + 0x1c) = 0;
      *(undefined8 *)(lVar10 + 0x24) = 0;
      *(undefined8 *)(lVar10 + 0x2c) = 0;
      *(undefined8 *)(lVar10 + 0x34) = 0;
      *(undefined8 *)(lVar10 + 0x3c) = 0;
      *(undefined8 *)(lVar10 + 0x44) = 0;
      *(undefined8 *)(lVar10 + 0x4c) = 0;
      *(undefined8 *)(lVar10 + 0x54) = 0;
      *(undefined8 *)(lVar10 + 0x5c) = 0;
      *(undefined8 *)(lVar10 + 100) = 0;
      *(undefined8 *)(lVar10 + 0x6c) = 0;
      *(undefined8 *)(lVar10 + 0x74) = 0;
      *(undefined8 *)(lVar10 + 0x7c) = 0;
      *(undefined8 *)(lVar10 + 0x84) = 0;
      *(undefined8 *)(lVar10 + 0x8c) = 0;
      *(undefined8 *)(lVar10 + 0x94) = 0;
      *(undefined8 *)(lVar10 + 0x9c) = 0;
      *(undefined8 *)(lVar10 + 0xa4) = 0;
      *(undefined8 *)(lVar10 + 0xac) = 0;
      *(undefined8 *)(lVar10 + 0xb4) = 0;
      *(undefined8 *)(lVar10 + 0xbc) = 0;
      *(undefined8 *)(lVar10 + 0xc4) = 0;
      *(undefined8 *)(lVar10 + 0xcc) = 0;
      *(undefined8 *)(lVar10 + 0xd4) = 0;
      *(undefined8 *)(lVar10 + 0xdc) = 0;
      *(undefined8 *)(lVar10 + 0xe4) = 0;
      *(undefined8 *)(lVar10 + 0xec) = 0;
      *(undefined8 *)(lVar10 + 0xf4) = 0;
      *(undefined8 *)(lVar10 + 0xfc) = 0;
      *(undefined8 *)(lVar10 + 0x104) = 0;
      *(undefined8 *)(lVar10 + 0x10c) = 0;
      *(undefined8 *)(lVar10 + 0x114) = 0;
      *(undefined8 *)(lVar10 + 0x11c) = 0;
      *(undefined8 *)(lVar10 + 0x124) = 0;
      *(undefined8 *)(lVar10 + 300) = 0;
      *(undefined8 *)(lVar10 + 0x134) = 0;
      *(undefined8 *)(lVar10 + 0x13c) = 0;
      *(undefined8 *)(lVar10 + 0x144) = 0;
      *(undefined8 *)(lVar10 + 0x14c) = 0;
      *(undefined8 *)(lVar10 + 0x154) = 0;
      *(undefined8 *)(lVar10 + 0x15c) = 0;
      *(undefined8 *)(lVar10 + 0x164) = 0;
      *(undefined8 *)(lVar10 + 0x16c) = 0;
      *(undefined8 *)(lVar10 + 0x174) = 0;
      *(undefined8 *)(lVar10 + 0x17c) = 0;
      *(undefined8 *)(lVar10 + 0x184) = 0;
      *(undefined8 *)(lVar10 + 0x18c) = 0;
      *(undefined8 *)(lVar10 + 0x194) = 0;
      *(undefined8 *)(lVar10 + 0x19c) = 0;
      *(undefined8 *)(lVar10 + 0x1a4) = 0;
      *(undefined8 *)(lVar10 + 0x1ac) = 0;
      *(undefined8 *)(lVar10 + 0x1b4) = 0;
      *(undefined8 *)(lVar10 + 0x1bc) = 0;
      *(undefined8 *)(lVar10 + 0x1c4) = 0;
      *(undefined8 *)(lVar10 + 0x1cc) = 0;
      *(undefined8 *)(lVar10 + 0x1d4) = 0;
      *(undefined8 *)(lVar10 + 0x1dc) = 0;
      *(undefined8 *)(lVar10 + 0x1e4) = 0;
      *(undefined8 *)(lVar10 + 0x1ec) = 0;
      *(undefined8 *)(lVar10 + 500) = 0;
      *(undefined8 *)(lVar10 + 0x1fc) = 0;
      *(undefined8 *)(lVar10 + 0x204) = 0;
      *(undefined8 *)(lVar10 + 0x20c) = 0;
      *(undefined8 *)(lVar10 + 0x214) = 0;
      *(undefined8 *)(lVar10 + 0x21c) = 0;
      *(undefined8 *)(lVar10 + 0x224) = 0;
      *(undefined8 *)(lVar10 + 0x22c) = 0;
      *(undefined8 *)(lVar10 + 0x234) = 0;
      *(undefined8 *)(lVar10 + 0x23c) = 0;
      *(undefined8 *)(lVar10 + 0x244) = 0;
      *(undefined8 *)(lVar10 + 0x24c) = 0;
      *(undefined8 *)(lVar10 + 0x254) = 0;
      *(undefined8 *)(lVar10 + 0x25c) = 0;
      *(undefined8 *)(lVar10 + 0x264) = 0;
      *(undefined8 *)(lVar10 + 0x26c) = 0;
      *(undefined8 *)(lVar10 + 0x274) = 0;
      *(undefined8 *)(lVar10 + 0x27c) = 0;
      *(undefined8 *)(lVar10 + 0x284) = 0;
      *(undefined8 *)(lVar10 + 0x28c) = 0;
      *(undefined8 *)(lVar10 + 0x294) = 0;
      *(undefined8 *)(lVar10 + 0x29c) = 0;
      *(undefined8 *)(lVar10 + 0x2a4) = 0;
      *(undefined8 *)(lVar10 + 0x2ac) = 0;
      *(undefined8 *)(lVar10 + 0x2b4) = 0;
      *(undefined8 *)(lVar10 + 700) = 0;
      *(undefined8 *)(lVar10 + 0x2c4) = 0;
      *(undefined8 *)(lVar10 + 0x2cc) = 0;
      *(undefined8 *)(lVar10 + 0x2d4) = 0;
      *(undefined8 *)(lVar10 + 0x2dc) = 0;
      *(undefined8 *)(lVar10 + 0x2e4) = 0;
      *(undefined8 *)(lVar10 + 0x2ec) = 0;
      *(undefined8 *)(lVar10 + 0x2f4) = 0;
      *(undefined8 *)(lVar10 + 0x2fc) = 0;
      *(undefined8 *)(lVar10 + 0x304) = 0;
      *(undefined8 *)(lVar10 + 0x30c) = 0;
      *(undefined8 *)(lVar10 + 0x314) = 0;
      *(undefined8 *)(lVar10 + 0x31c) = 0;
      *(undefined8 *)(lVar10 + 0x324) = 0;
      *(undefined8 *)(lVar10 + 0x32c) = 0;
      *(undefined8 *)(lVar10 + 0x334) = 0;
      *(undefined8 *)(lVar10 + 0x33c) = 0;
      *(undefined8 *)(lVar10 + 0x344) = 0;
      *(undefined8 *)(lVar10 + 0x34c) = 0;
      *(undefined8 *)(lVar10 + 0x354) = 0;
      *(undefined8 *)(lVar10 + 0x35c) = 0;
      *(undefined8 *)(lVar10 + 0x364) = 0;
      *(undefined8 *)(lVar10 + 0x36c) = 0;
      *(undefined8 *)(lVar10 + 0x374) = 0;
      *(undefined8 *)(lVar10 + 0x37c) = 0;
      *(undefined8 *)(lVar10 + 900) = 0;
      *(undefined8 *)(lVar10 + 0x38c) = 0;
      *(undefined8 *)(lVar10 + 0x394) = 0;
      *(undefined8 *)(lVar10 + 0x39c) = 0;
      *(undefined8 *)(lVar10 + 0x3a4) = 0;
      *(undefined8 *)(lVar10 + 0x3ac) = 0;
      *(undefined8 *)(lVar10 + 0x3b4) = 0;
      *(undefined8 *)(lVar10 + 0x3bc) = 0;
      *(undefined8 *)(lVar10 + 0x3c4) = 0;
      *(undefined8 *)(lVar10 + 0x3cc) = 0;
      *(undefined8 *)(lVar10 + 0x3d4) = 0;
      *(undefined8 *)(lVar10 + 0x3dc) = 0;
      lVar10 = lVar10 + 0x400;
      lVar8 = lVar8 + -0x40;
    } while (lVar8 != 0);
    atexit(FUN_143eb4610);
    _Init_thread_footer(&DAT_146b036d0);
  }
  if ((*piVar11 < DAT_146b03ee0) && (_Init_thread_header(&DAT_146b03ee0), DAT_146b03ee0 == -1)) {
    lVar8 = 0x80;
    lVar10 = 0x146b036fc;
    do {
      *(undefined8 *)(lVar10 + -0x1c) = 0;
      *(undefined8 *)(lVar10 + -0x14) = 0;
      *(undefined8 *)(lVar10 + -0xc) = 0;
      *(undefined8 *)(lVar10 + -4) = 0;
      *(undefined8 *)(lVar10 + 4) = 0;
      *(undefined8 *)(lVar10 + 0xc) = 0;
      *(undefined8 *)(lVar10 + 0x14) = 0;
      *(undefined8 *)(lVar10 + 0x1c) = 0;
      *(undefined8 *)(lVar10 + 0x24) = 0;
      *(undefined8 *)(lVar10 + 0x2c) = 0;
      *(undefined8 *)(lVar10 + 0x34) = 0;
      *(undefined8 *)(lVar10 + 0x3c) = 0;
      *(undefined8 *)(lVar10 + 0x44) = 0;
      *(undefined8 *)(lVar10 + 0x4c) = 0;
      *(undefined8 *)(lVar10 + 0x54) = 0;
      *(undefined8 *)(lVar10 + 0x5c) = 0;
      *(undefined8 *)(lVar10 + 100) = 0;
      *(undefined8 *)(lVar10 + 0x6c) = 0;
      *(undefined8 *)(lVar10 + 0x74) = 0;
      *(undefined8 *)(lVar10 + 0x7c) = 0;
      *(undefined8 *)(lVar10 + 0x84) = 0;
      *(undefined8 *)(lVar10 + 0x8c) = 0;
      *(undefined8 *)(lVar10 + 0x94) = 0;
      *(undefined8 *)(lVar10 + 0x9c) = 0;
      *(undefined8 *)(lVar10 + 0xa4) = 0;
      *(undefined8 *)(lVar10 + 0xac) = 0;
      *(undefined8 *)(lVar10 + 0xb4) = 0;
      *(undefined8 *)(lVar10 + 0xbc) = 0;
      *(undefined8 *)(lVar10 + 0xc4) = 0;
      *(undefined8 *)(lVar10 + 0xcc) = 0;
      *(undefined8 *)(lVar10 + 0xd4) = 0;
      *(undefined8 *)(lVar10 + 0xdc) = 0;
      *(undefined8 *)(lVar10 + 0xe4) = 0;
      *(undefined8 *)(lVar10 + 0xec) = 0;
      *(undefined8 *)(lVar10 + 0xf4) = 0;
      *(undefined8 *)(lVar10 + 0xfc) = 0;
      *(undefined8 *)(lVar10 + 0x104) = 0;
      *(undefined8 *)(lVar10 + 0x10c) = 0;
      *(undefined8 *)(lVar10 + 0x114) = 0;
      *(undefined8 *)(lVar10 + 0x11c) = 0;
      *(undefined8 *)(lVar10 + 0x124) = 0;
      *(undefined8 *)(lVar10 + 300) = 0;
      *(undefined8 *)(lVar10 + 0x134) = 0;
      *(undefined8 *)(lVar10 + 0x13c) = 0;
      *(undefined8 *)(lVar10 + 0x144) = 0;
      *(undefined8 *)(lVar10 + 0x14c) = 0;
      *(undefined8 *)(lVar10 + 0x154) = 0;
      *(undefined8 *)(lVar10 + 0x15c) = 0;
      *(undefined8 *)(lVar10 + 0x164) = 0;
      *(undefined8 *)(lVar10 + 0x16c) = 0;
      *(undefined8 *)(lVar10 + 0x174) = 0;
      *(undefined8 *)(lVar10 + 0x17c) = 0;
      *(undefined8 *)(lVar10 + 0x184) = 0;
      *(undefined8 *)(lVar10 + 0x18c) = 0;
      *(undefined8 *)(lVar10 + 0x194) = 0;
      *(undefined8 *)(lVar10 + 0x19c) = 0;
      *(undefined8 *)(lVar10 + 0x1a4) = 0;
      *(undefined8 *)(lVar10 + 0x1ac) = 0;
      *(undefined8 *)(lVar10 + 0x1b4) = 0;
      *(undefined8 *)(lVar10 + 0x1bc) = 0;
      *(undefined8 *)(lVar10 + 0x1c4) = 0;
      *(undefined8 *)(lVar10 + 0x1cc) = 0;
      *(undefined8 *)(lVar10 + 0x1d4) = 0;
      *(undefined8 *)(lVar10 + 0x1dc) = 0;
      *(undefined8 *)(lVar10 + 0x1e4) = 0;
      *(undefined8 *)(lVar10 + 0x1ec) = 0;
      *(undefined8 *)(lVar10 + 500) = 0;
      *(undefined8 *)(lVar10 + 0x1fc) = 0;
      *(undefined8 *)(lVar10 + 0x204) = 0;
      *(undefined8 *)(lVar10 + 0x20c) = 0;
      *(undefined8 *)(lVar10 + 0x214) = 0;
      *(undefined8 *)(lVar10 + 0x21c) = 0;
      *(undefined8 *)(lVar10 + 0x224) = 0;
      *(undefined8 *)(lVar10 + 0x22c) = 0;
      *(undefined8 *)(lVar10 + 0x234) = 0;
      *(undefined8 *)(lVar10 + 0x23c) = 0;
      *(undefined8 *)(lVar10 + 0x244) = 0;
      *(undefined8 *)(lVar10 + 0x24c) = 0;
      *(undefined8 *)(lVar10 + 0x254) = 0;
      *(undefined8 *)(lVar10 + 0x25c) = 0;
      *(undefined8 *)(lVar10 + 0x264) = 0;
      *(undefined8 *)(lVar10 + 0x26c) = 0;
      *(undefined8 *)(lVar10 + 0x274) = 0;
      *(undefined8 *)(lVar10 + 0x27c) = 0;
      *(undefined8 *)(lVar10 + 0x284) = 0;
      *(undefined8 *)(lVar10 + 0x28c) = 0;
      *(undefined8 *)(lVar10 + 0x294) = 0;
      *(undefined8 *)(lVar10 + 0x29c) = 0;
      *(undefined8 *)(lVar10 + 0x2a4) = 0;
      *(undefined8 *)(lVar10 + 0x2ac) = 0;
      *(undefined8 *)(lVar10 + 0x2b4) = 0;
      *(undefined8 *)(lVar10 + 700) = 0;
      *(undefined8 *)(lVar10 + 0x2c4) = 0;
      *(undefined8 *)(lVar10 + 0x2cc) = 0;
      *(undefined8 *)(lVar10 + 0x2d4) = 0;
      *(undefined8 *)(lVar10 + 0x2dc) = 0;
      *(undefined8 *)(lVar10 + 0x2e4) = 0;
      *(undefined8 *)(lVar10 + 0x2ec) = 0;
      *(undefined8 *)(lVar10 + 0x2f4) = 0;
      *(undefined8 *)(lVar10 + 0x2fc) = 0;
      *(undefined8 *)(lVar10 + 0x304) = 0;
      *(undefined8 *)(lVar10 + 0x30c) = 0;
      *(undefined8 *)(lVar10 + 0x314) = 0;
      *(undefined8 *)(lVar10 + 0x31c) = 0;
      *(undefined8 *)(lVar10 + 0x324) = 0;
      *(undefined8 *)(lVar10 + 0x32c) = 0;
      *(undefined8 *)(lVar10 + 0x334) = 0;
      *(undefined8 *)(lVar10 + 0x33c) = 0;
      *(undefined8 *)(lVar10 + 0x344) = 0;
      *(undefined8 *)(lVar10 + 0x34c) = 0;
      *(undefined8 *)(lVar10 + 0x354) = 0;
      *(undefined8 *)(lVar10 + 0x35c) = 0;
      *(undefined8 *)(lVar10 + 0x364) = 0;
      *(undefined8 *)(lVar10 + 0x36c) = 0;
      *(undefined8 *)(lVar10 + 0x374) = 0;
      *(undefined8 *)(lVar10 + 0x37c) = 0;
      *(undefined8 *)(lVar10 + 900) = 0;
      *(undefined8 *)(lVar10 + 0x38c) = 0;
      *(undefined8 *)(lVar10 + 0x394) = 0;
      *(undefined8 *)(lVar10 + 0x39c) = 0;
      *(undefined8 *)(lVar10 + 0x3a4) = 0;
      *(undefined8 *)(lVar10 + 0x3ac) = 0;
      *(undefined8 *)(lVar10 + 0x3b4) = 0;
      *(undefined8 *)(lVar10 + 0x3bc) = 0;
      *(undefined8 *)(lVar10 + 0x3c4) = 0;
      *(undefined8 *)(lVar10 + 0x3cc) = 0;
      *(undefined8 *)(lVar10 + 0x3d4) = 0;
      *(undefined8 *)(lVar10 + 0x3dc) = 0;
      lVar10 = lVar10 + 0x400;
      lVar8 = lVar8 + -0x40;
    } while (lVar8 != 0);
    atexit(FUN_143eb43e0);
    _Init_thread_footer(&DAT_146b03ee0);
  }
  if ((*piVar11 < DAT_146b046f0) && (_Init_thread_header(&DAT_146b046f0), DAT_146b046f0 == -1)) {
    lVar8 = 0x80;
    lVar10 = 0x146b03f0c;
    do {
      *(undefined8 *)(lVar10 + -0x1c) = 0;
      *(undefined8 *)(lVar10 + -0x14) = 0;
      *(undefined8 *)(lVar10 + -0xc) = 0;
      *(undefined8 *)(lVar10 + -4) = 0;
      *(undefined8 *)(lVar10 + 4) = 0;
      *(undefined8 *)(lVar10 + 0xc) = 0;
      *(undefined8 *)(lVar10 + 0x14) = 0;
      *(undefined8 *)(lVar10 + 0x1c) = 0;
      *(undefined8 *)(lVar10 + 0x24) = 0;
      *(undefined8 *)(lVar10 + 0x2c) = 0;
      *(undefined8 *)(lVar10 + 0x34) = 0;
      *(undefined8 *)(lVar10 + 0x3c) = 0;
      *(undefined8 *)(lVar10 + 0x44) = 0;
      *(undefined8 *)(lVar10 + 0x4c) = 0;
      *(undefined8 *)(lVar10 + 0x54) = 0;
      *(undefined8 *)(lVar10 + 0x5c) = 0;
      *(undefined8 *)(lVar10 + 100) = 0;
      *(undefined8 *)(lVar10 + 0x6c) = 0;
      *(undefined8 *)(lVar10 + 0x74) = 0;
      *(undefined8 *)(lVar10 + 0x7c) = 0;
      *(undefined8 *)(lVar10 + 0x84) = 0;
      *(undefined8 *)(lVar10 + 0x8c) = 0;
      *(undefined8 *)(lVar10 + 0x94) = 0;
      *(undefined8 *)(lVar10 + 0x9c) = 0;
      *(undefined8 *)(lVar10 + 0xa4) = 0;
      *(undefined8 *)(lVar10 + 0xac) = 0;
      *(undefined8 *)(lVar10 + 0xb4) = 0;
      *(undefined8 *)(lVar10 + 0xbc) = 0;
      *(undefined8 *)(lVar10 + 0xc4) = 0;
      *(undefined8 *)(lVar10 + 0xcc) = 0;
      *(undefined8 *)(lVar10 + 0xd4) = 0;
      *(undefined8 *)(lVar10 + 0xdc) = 0;
      *(undefined8 *)(lVar10 + 0xe4) = 0;
      *(undefined8 *)(lVar10 + 0xec) = 0;
      *(undefined8 *)(lVar10 + 0xf4) = 0;
      *(undefined8 *)(lVar10 + 0xfc) = 0;
      *(undefined8 *)(lVar10 + 0x104) = 0;
      *(undefined8 *)(lVar10 + 0x10c) = 0;
      *(undefined8 *)(lVar10 + 0x114) = 0;
      *(undefined8 *)(lVar10 + 0x11c) = 0;
      *(undefined8 *)(lVar10 + 0x124) = 0;
      *(undefined8 *)(lVar10 + 300) = 0;
      *(undefined8 *)(lVar10 + 0x134) = 0;
      *(undefined8 *)(lVar10 + 0x13c) = 0;
      *(undefined8 *)(lVar10 + 0x144) = 0;
      *(undefined8 *)(lVar10 + 0x14c) = 0;
      *(undefined8 *)(lVar10 + 0x154) = 0;
      *(undefined8 *)(lVar10 + 0x15c) = 0;
      *(undefined8 *)(lVar10 + 0x164) = 0;
      *(undefined8 *)(lVar10 + 0x16c) = 0;
      *(undefined8 *)(lVar10 + 0x174) = 0;
      *(undefined8 *)(lVar10 + 0x17c) = 0;
      *(undefined8 *)(lVar10 + 0x184) = 0;
      *(undefined8 *)(lVar10 + 0x18c) = 0;
      *(undefined8 *)(lVar10 + 0x194) = 0;
      *(undefined8 *)(lVar10 + 0x19c) = 0;
      *(undefined8 *)(lVar10 + 0x1a4) = 0;
      *(undefined8 *)(lVar10 + 0x1ac) = 0;
      *(undefined8 *)(lVar10 + 0x1b4) = 0;
      *(undefined8 *)(lVar10 + 0x1bc) = 0;
      *(undefined8 *)(lVar10 + 0x1c4) = 0;
      *(undefined8 *)(lVar10 + 0x1cc) = 0;
      *(undefined8 *)(lVar10 + 0x1d4) = 0;
      *(undefined8 *)(lVar10 + 0x1dc) = 0;
      *(undefined8 *)(lVar10 + 0x1e4) = 0;
      *(undefined8 *)(lVar10 + 0x1ec) = 0;
      *(undefined8 *)(lVar10 + 500) = 0;
      *(undefined8 *)(lVar10 + 0x1fc) = 0;
      *(undefined8 *)(lVar10 + 0x204) = 0;
      *(undefined8 *)(lVar10 + 0x20c) = 0;
      *(undefined8 *)(lVar10 + 0x214) = 0;
      *(undefined8 *)(lVar10 + 0x21c) = 0;
      *(undefined8 *)(lVar10 + 0x224) = 0;
      *(undefined8 *)(lVar10 + 0x22c) = 0;
      *(undefined8 *)(lVar10 + 0x234) = 0;
      *(undefined8 *)(lVar10 + 0x23c) = 0;
      *(undefined8 *)(lVar10 + 0x244) = 0;
      *(undefined8 *)(lVar10 + 0x24c) = 0;
      *(undefined8 *)(lVar10 + 0x254) = 0;
      *(undefined8 *)(lVar10 + 0x25c) = 0;
      *(undefined8 *)(lVar10 + 0x264) = 0;
      *(undefined8 *)(lVar10 + 0x26c) = 0;
      *(undefined8 *)(lVar10 + 0x274) = 0;
      *(undefined8 *)(lVar10 + 0x27c) = 0;
      *(undefined8 *)(lVar10 + 0x284) = 0;
      *(undefined8 *)(lVar10 + 0x28c) = 0;
      *(undefined8 *)(lVar10 + 0x294) = 0;
      *(undefined8 *)(lVar10 + 0x29c) = 0;
      *(undefined8 *)(lVar10 + 0x2a4) = 0;
      *(undefined8 *)(lVar10 + 0x2ac) = 0;
      *(undefined8 *)(lVar10 + 0x2b4) = 0;
      *(undefined8 *)(lVar10 + 700) = 0;
      *(undefined8 *)(lVar10 + 0x2c4) = 0;
      *(undefined8 *)(lVar10 + 0x2cc) = 0;
      *(undefined8 *)(lVar10 + 0x2d4) = 0;
      *(undefined8 *)(lVar10 + 0x2dc) = 0;
      *(undefined8 *)(lVar10 + 0x2e4) = 0;
      *(undefined8 *)(lVar10 + 0x2ec) = 0;
      *(undefined8 *)(lVar10 + 0x2f4) = 0;
      *(undefined8 *)(lVar10 + 0x2fc) = 0;
      *(undefined8 *)(lVar10 + 0x304) = 0;
      *(undefined8 *)(lVar10 + 0x30c) = 0;
      *(undefined8 *)(lVar10 + 0x314) = 0;
      *(undefined8 *)(lVar10 + 0x31c) = 0;
      *(undefined8 *)(lVar10 + 0x324) = 0;
      *(undefined8 *)(lVar10 + 0x32c) = 0;
      *(undefined8 *)(lVar10 + 0x334) = 0;
      *(undefined8 *)(lVar10 + 0x33c) = 0;
      *(undefined8 *)(lVar10 + 0x344) = 0;
      *(undefined8 *)(lVar10 + 0x34c) = 0;
      *(undefined8 *)(lVar10 + 0x354) = 0;
      *(undefined8 *)(lVar10 + 0x35c) = 0;
      *(undefined8 *)(lVar10 + 0x364) = 0;
      *(undefined8 *)(lVar10 + 0x36c) = 0;
      *(undefined8 *)(lVar10 + 0x374) = 0;
      *(undefined8 *)(lVar10 + 0x37c) = 0;
      *(undefined8 *)(lVar10 + 900) = 0;
      *(undefined8 *)(lVar10 + 0x38c) = 0;
      *(undefined8 *)(lVar10 + 0x394) = 0;
      *(undefined8 *)(lVar10 + 0x39c) = 0;
      *(undefined8 *)(lVar10 + 0x3a4) = 0;
      *(undefined8 *)(lVar10 + 0x3ac) = 0;
      *(undefined8 *)(lVar10 + 0x3b4) = 0;
      *(undefined8 *)(lVar10 + 0x3bc) = 0;
      *(undefined8 *)(lVar10 + 0x3c4) = 0;
      *(undefined8 *)(lVar10 + 0x3cc) = 0;
      *(undefined8 *)(lVar10 + 0x3d4) = 0;
      *(undefined8 *)(lVar10 + 0x3dc) = 0;
      lVar10 = lVar10 + 0x400;
      lVar8 = lVar8 + -0x40;
    } while (lVar8 != 0);
    atexit(FUN_143eb4510);
    _Init_thread_footer(&DAT_146b046f0);
  }
  if (DAT_146b046f4 == '\0') {
    DAT_146b046f4 = '\x01';
    uVar12 = uVar13;
    uVar6 = uVar13;
    do {
      FString::PrintfImpl(&local_c8,L"Texture2D_%d",uVar6);
      plVar9 = (longlong *)((longlong)&DAT_146aff660 + uVar12);
      if (plVar9 == &local_c8) {
        if (local_c8 != 0) {
          FMemory::Free();
        }
      }
      else {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        *plVar9 = local_c8;
        *(undefined4 *)((longlong)&DAT_146aff668 + uVar12) = (undefined4)local_c0;
        *(undefined4 *)((longlong)&DAT_146aff668 + uVar12 + 4) = local_c0._4_4_;
        local_c0 = 0;
        local_c8 = 0;
      }
      FString::PrintfImpl(&local_b8,L"Texture2D_%dSampler",uVar6);
      plVar9 = (longlong *)((longlong)&DAT_146affe70 + uVar12);
      if (plVar9 == &local_b8) {
        if (local_b8 != 0) {
          FMemory::Free();
        }
      }
      else {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        *plVar9 = local_b8;
        *(undefined4 *)((longlong)&DAT_146affe78 + uVar12) = (undefined4)local_b0;
        *(undefined4 *)((longlong)&DAT_146affe78 + uVar12 + 4) = local_b0._4_4_;
        local_b0 = 0;
        local_b8 = 0;
      }
      FString::PrintfImpl(&local_a8,L"TextureCube_%d",uVar6);
      plVar9 = (longlong *)((longlong)&DAT_146b00680 + uVar12);
      if (plVar9 == &local_a8) {
        if (local_a8 != 0) {
          FMemory::Free();
        }
      }
      else {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        *plVar9 = local_a8;
        *(undefined4 *)((longlong)&DAT_146b00688 + uVar12) = (undefined4)local_a0;
        *(undefined4 *)((longlong)&DAT_146b00688 + uVar12 + 4) = local_a0._4_4_;
        local_a0 = 0;
        local_a8 = 0;
      }
      FString::PrintfImpl(&local_98,L"TextureCube_%dSampler",uVar6);
      plVar9 = (longlong *)((longlong)&DAT_146b00e90 + uVar12);
      if (plVar9 == &local_98) {
        if (local_98 != 0) {
          FMemory::Free();
        }
      }
      else {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        *plVar9 = local_98;
        *(undefined4 *)((longlong)&DAT_146b00e98 + uVar12) = (undefined4)local_90;
        *(undefined4 *)((longlong)&DAT_146b00e98 + uVar12 + 4) = local_90._4_4_;
        local_90 = 0;
        local_98 = 0;
      }
      FString::PrintfImpl(&local_88,L"VolumeTexture_%d",uVar6);
      plVar9 = (longlong *)((longlong)&DAT_146b016a0 + uVar12);
      if (plVar9 == &local_88) {
        if (local_88 != 0) {
          FMemory::Free();
        }
      }
      else {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        *plVar9 = local_88;
        *(undefined4 *)((longlong)&DAT_146b016a8 + uVar12) = (undefined4)local_80;
        *(undefined4 *)((longlong)&DAT_146b016a8 + uVar12 + 4) = local_80._4_4_;
        local_80 = 0;
        local_88 = 0;
      }
      FString::PrintfImpl(&local_78,L"VolumeTexture_%dSampler",uVar6);
      plVar9 = (longlong *)((longlong)&DAT_146b01eb0 + uVar12);
      if (plVar9 == &local_78) {
        if (local_78 != 0) {
          FMemory::Free();
        }
      }
      else {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        *plVar9 = local_78;
        *(undefined4 *)((longlong)&DAT_146b01eb8 + uVar12) = (undefined4)local_70;
        *(undefined4 *)((longlong)&DAT_146b01eb8 + uVar12 + 4) = local_70._4_4_;
        local_70 = 0;
        local_78 = 0;
      }
      FString::PrintfImpl(&local_68,L"Texture2DArray_%d",uVar6);
      plVar9 = (longlong *)((longlong)&DAT_146b026c0 + uVar12);
      if (plVar9 == &local_68) {
        if (local_68 != 0) {
          FMemory::Free();
        }
      }
      else {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        *plVar9 = local_68;
        *(undefined4 *)((longlong)&DAT_146b026c8 + uVar12) = (undefined4)local_60;
        *(undefined4 *)((longlong)&DAT_146b026c8 + uVar12 + 4) = local_60._4_4_;
        local_60 = 0;
        local_68 = 0;
      }
      FString::PrintfImpl(&local_58,L"Texture2DArray_%dSampler",uVar6);
      plVar9 = (longlong *)((longlong)&DAT_146b02ed0 + uVar12);
      if (plVar9 == &local_58) {
        if (local_58 != 0) {
          FMemory::Free();
        }
      }
      else {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        *plVar9 = local_58;
        *(undefined4 *)((longlong)&DAT_146b02ed8 + uVar12) = (undefined4)local_50;
        *(undefined4 *)((longlong)&DAT_146b02ed8 + uVar12 + 4) = local_50._4_4_;
        local_50 = 0;
        local_58 = 0;
      }
      FString::PrintfImpl(&local_48,L"ExternalTexture_%d",uVar6);
      plVar9 = (longlong *)((longlong)&DAT_146b036e0 + uVar12);
      if (plVar9 == &local_48) {
        if (local_48 != 0) {
          FMemory::Free();
        }
      }
      else {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        *plVar9 = local_48;
        *(undefined4 *)((longlong)&DAT_146b036e8 + uVar12) = (undefined4)local_40;
        *(undefined4 *)((longlong)&DAT_146b036e8 + uVar12 + 4) = local_40._4_4_;
        local_40 = 0;
        local_48 = 0;
      }
      FString::PrintfImpl(&local_38,L"ExternalTexture_%dSampler",uVar6);
      plVar9 = (longlong *)((longlong)&DAT_146b03ef0 + uVar12);
      if (plVar9 == &local_38) {
        if (local_38 != 0) {
          FMemory::Free();
        }
      }
      else {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        *plVar9 = local_38;
        *(undefined4 *)((longlong)&DAT_146b03ef8 + uVar12) = (undefined4)local_30;
        *(undefined4 *)((longlong)&DAT_146b03ef8 + uVar12 + 4) = local_30._4_4_;
        local_30 = 0;
        local_38 = 0;
      }
      uVar14 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar14;
      uVar12 = uVar12 + 0x10;
    } while ((int)uVar14 < 0x80);
  }
  uVar12 = uVar13;
  uVar6 = uVar13;
  if (0 < *(int *)(param_1 + 0x38)) {
    do {
      lVar10 = (longlong)(int)local_d0;
      iVar2 = (int)local_d0 + 1;
      if (local_d0._4_4_ < iVar2) {
        uVar5 = local_d0 & 0xffffffff;
        local_d0._0_4_ = iVar2;
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_d8,uVar5);
        iVar2 = (int)local_d0;
      }
      local_d0._0_4_ = iVar2;
      iVar2 = (int)local_d0;
      puVar4 = local_d8 + lVar10 * 6;
      iVar1 = (int)uVar7;
      if (puVar4 != (undefined8 *)0x0) {
        if (*(int *)((longlong)&DAT_146aff668 + uVar12) == 0) {
          puVar3 = &DAT_143f3eda8;
        }
        else {
          puVar3 = *(undefined2 **)((longlong)&DAT_146aff660 + uVar12);
        }
        *puVar4 = puVar3;
        puVar4[1] = L"Texture2D";
        *(int *)(puVar4 + 2) = iVar1;
        *(undefined8 *)((longlong)puVar4 + 0x14) = 9;
        *(undefined4 *)((longlong)puVar4 + 0x1c) = 1;
        *(undefined4 *)(puVar4 + 4) = 1;
        *(undefined4 *)((longlong)puVar4 + 0x24) = 1;
        puVar4[5] = 0;
      }
      lVar10 = (longlong)(int)local_d0;
      local_d0._0_4_ = (int)local_d0 + 1;
      if (local_d0._4_4_ < (int)local_d0) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_d8,iVar2);
      }
      puVar4 = local_d8 + lVar10 * 6;
      if (puVar4 != (undefined8 *)0x0) {
        if (*(int *)((longlong)&DAT_146affe78 + uVar12) == 0) {
          puVar3 = &DAT_143f3eda8;
        }
        else {
          puVar3 = *(undefined2 **)((longlong)&DAT_146affe70 + uVar12);
        }
        *puVar4 = puVar3;
        puVar4[1] = L"SamplerState";
        *(int *)(puVar4 + 2) = iVar1 + 8;
        *(undefined8 *)((longlong)puVar4 + 0x14) = 8;
        *(undefined4 *)((longlong)puVar4 + 0x1c) = 1;
        *(undefined4 *)(puVar4 + 4) = 1;
        *(undefined4 *)((longlong)puVar4 + 0x24) = 1;
        puVar4[5] = 0;
      }
      uVar7 = (ulonglong)(iVar1 + 0x10);
      uVar14 = (int)uVar6 + 1;
      uVar12 = uVar12 + 0x10;
      uVar6 = (ulonglong)uVar14;
    } while ((int)uVar14 < *(int *)(param_1 + 0x38));
  }
  uVar12 = uVar13;
  uVar6 = uVar13;
  if (0 < *(int *)(param_1 + 0x48)) {
    do {
      lVar10 = (longlong)(int)local_d0;
      iVar2 = (int)local_d0 + 1;
      if (local_d0._4_4_ < iVar2) {
        uVar5 = local_d0 & 0xffffffff;
        local_d0._0_4_ = iVar2;
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_d8,uVar5);
        iVar2 = (int)local_d0;
      }
      local_d0._0_4_ = iVar2;
      iVar2 = (int)local_d0;
      puVar4 = local_d8 + lVar10 * 6;
      iVar1 = (int)uVar7;
      if (puVar4 != (undefined8 *)0x0) {
        if (*(int *)((longlong)&DAT_146b00688 + uVar12) == 0) {
          puVar3 = &DAT_143f3eda8;
        }
        else {
          puVar3 = *(undefined2 **)((longlong)&DAT_146b00680 + uVar12);
        }
        *puVar4 = puVar3;
        puVar4[1] = L"TextureCube";
        *(int *)(puVar4 + 2) = iVar1;
        *(undefined8 *)((longlong)puVar4 + 0x14) = 9;
        *(undefined4 *)((longlong)puVar4 + 0x1c) = 1;
        *(undefined4 *)(puVar4 + 4) = 1;
        *(undefined4 *)((longlong)puVar4 + 0x24) = 1;
        puVar4[5] = 0;
      }
      lVar10 = (longlong)(int)local_d0;
      local_d0._0_4_ = (int)local_d0 + 1;
      if (local_d0._4_4_ < (int)local_d0) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_d8,iVar2);
      }
      puVar4 = local_d8 + lVar10 * 6;
      if (puVar4 != (undefined8 *)0x0) {
        if (*(int *)((longlong)&DAT_146b00e98 + uVar12) == 0) {
          puVar3 = &DAT_143f3eda8;
        }
        else {
          puVar3 = *(undefined2 **)((longlong)&DAT_146b00e90 + uVar12);
        }
        *puVar4 = puVar3;
        puVar4[1] = L"SamplerState";
        *(int *)(puVar4 + 2) = iVar1 + 8;
        *(undefined8 *)((longlong)puVar4 + 0x14) = 8;
        *(undefined4 *)((longlong)puVar4 + 0x1c) = 1;
        *(undefined4 *)(puVar4 + 4) = 1;
        *(undefined4 *)((longlong)puVar4 + 0x24) = 1;
        puVar4[5] = 0;
      }
      uVar7 = (ulonglong)(iVar1 + 0x10);
      uVar14 = (int)uVar6 + 1;
      uVar12 = uVar12 + 0x10;
      uVar6 = (ulonglong)uVar14;
    } while ((int)uVar14 < *(int *)(param_1 + 0x48));
  }
  uVar12 = uVar13;
  uVar6 = uVar13;
  if (0 < *(int *)(param_1 + 0x58)) {
    do {
      lVar10 = (longlong)(int)local_d0;
      iVar2 = (int)local_d0 + 1;
      if (local_d0._4_4_ < iVar2) {
        uVar5 = local_d0 & 0xffffffff;
        local_d0._0_4_ = iVar2;
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_d8,uVar5);
        iVar2 = (int)local_d0;
      }
      local_d0._0_4_ = iVar2;
      iVar2 = (int)local_d0;
      puVar4 = local_d8 + lVar10 * 6;
      iVar1 = (int)uVar7;
      if (puVar4 != (undefined8 *)0x0) {
        if (*(int *)((longlong)&DAT_146b016a8 + uVar12) == 0) {
          puVar3 = &DAT_143f3eda8;
        }
        else {
          puVar3 = *(undefined2 **)((longlong)&DAT_146b016a0 + uVar12);
        }
        *puVar4 = puVar3;
        puVar4[1] = L"Texture3D";
        *(int *)(puVar4 + 2) = iVar1;
        *(undefined8 *)((longlong)puVar4 + 0x14) = 9;
        *(undefined4 *)((longlong)puVar4 + 0x1c) = 1;
        *(undefined4 *)(puVar4 + 4) = 1;
        *(undefined4 *)((longlong)puVar4 + 0x24) = 1;
        puVar4[5] = 0;
      }
      lVar10 = (longlong)(int)local_d0;
      local_d0._0_4_ = (int)local_d0 + 1;
      if (local_d0._4_4_ < (int)local_d0) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_d8,iVar2);
      }
      puVar4 = local_d8 + lVar10 * 6;
      if (puVar4 != (undefined8 *)0x0) {
        if (*(int *)((longlong)&DAT_146b01eb8 + uVar12) == 0) {
          puVar3 = &DAT_143f3eda8;
        }
        else {
          puVar3 = *(undefined2 **)((longlong)&DAT_146b01eb0 + uVar12);
        }
        *puVar4 = puVar3;
        puVar4[1] = L"SamplerState";
        *(int *)(puVar4 + 2) = iVar1 + 8;
        *(undefined8 *)((longlong)puVar4 + 0x14) = 8;
        *(undefined4 *)((longlong)puVar4 + 0x1c) = 1;
        *(undefined4 *)(puVar4 + 4) = 1;
        *(undefined4 *)((longlong)puVar4 + 0x24) = 1;
        puVar4[5] = 0;
      }
      uVar7 = (ulonglong)(iVar1 + 0x10);
      uVar14 = (int)uVar6 + 1;
      uVar12 = uVar12 + 0x10;
      uVar6 = (ulonglong)uVar14;
    } while ((int)uVar14 < *(int *)(param_1 + 0x58));
  }
  uVar12 = uVar13;
  uVar6 = uVar13;
  if (0 < *(int *)(param_1 + 0x68)) {
    do {
      lVar10 = (longlong)(int)local_d0;
      iVar2 = (int)local_d0 + 1;
      if (local_d0._4_4_ < iVar2) {
        uVar5 = local_d0 & 0xffffffff;
        local_d0._0_4_ = iVar2;
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_d8,uVar5);
        iVar2 = (int)local_d0;
      }
      local_d0._0_4_ = iVar2;
      iVar2 = (int)local_d0;
      puVar4 = local_d8 + lVar10 * 6;
      iVar1 = (int)uVar7;
      if (puVar4 != (undefined8 *)0x0) {
        if (*(int *)((longlong)&DAT_146b026c8 + uVar12) == 0) {
          puVar3 = &DAT_143f3eda8;
        }
        else {
          puVar3 = *(undefined2 **)((longlong)&DAT_146b026c0 + uVar12);
        }
        *puVar4 = puVar3;
        puVar4[1] = L"Texture2DArray";
        *(int *)(puVar4 + 2) = iVar1;
        *(undefined8 *)((longlong)puVar4 + 0x14) = 9;
        *(undefined4 *)((longlong)puVar4 + 0x1c) = 1;
        *(undefined4 *)(puVar4 + 4) = 1;
        *(undefined4 *)((longlong)puVar4 + 0x24) = 1;
        puVar4[5] = 0;
      }
      lVar10 = (longlong)(int)local_d0;
      local_d0._0_4_ = (int)local_d0 + 1;
      if (local_d0._4_4_ < (int)local_d0) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_d8,iVar2);
      }
      puVar4 = local_d8 + lVar10 * 6;
      if (puVar4 != (undefined8 *)0x0) {
        if (*(int *)((longlong)&DAT_146b02ed8 + uVar12) == 0) {
          puVar3 = &DAT_143f3eda8;
        }
        else {
          puVar3 = *(undefined2 **)((longlong)&DAT_146b02ed0 + uVar12);
        }
        *puVar4 = puVar3;
        puVar4[1] = L"SamplerState";
        *(int *)(puVar4 + 2) = iVar1 + 8;
        *(undefined8 *)((longlong)puVar4 + 0x14) = 8;
        *(undefined4 *)((longlong)puVar4 + 0x1c) = 1;
        *(undefined4 *)(puVar4 + 4) = 1;
        *(undefined4 *)((longlong)puVar4 + 0x24) = 1;
        puVar4[5] = 0;
      }
      uVar7 = (ulonglong)(iVar1 + 0x10);
      uVar14 = (int)uVar6 + 1;
      uVar12 = uVar12 + 0x10;
      uVar6 = (ulonglong)uVar14;
    } while ((int)uVar14 < *(int *)(param_1 + 0x68));
  }
  uVar14 = (uint)uVar7;
  uVar12 = uVar13;
  if (0 < *(int *)(param_1 + 0x78)) {
    do {
      lVar10 = (longlong)(int)local_d0;
      iVar2 = (int)local_d0 + 1;
      if (local_d0._4_4_ < iVar2) {
        uVar6 = local_d0 & 0xffffffff;
        local_d0._0_4_ = iVar2;
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_d8,uVar6);
        iVar2 = (int)local_d0;
      }
      local_d0._0_4_ = iVar2;
      iVar2 = (int)local_d0;
      puVar4 = local_d8 + lVar10 * 6;
      iVar1 = (int)uVar7;
      if (puVar4 != (undefined8 *)0x0) {
        if (*(int *)((longlong)&DAT_146b036e8 + uVar13) == 0) {
          puVar3 = &DAT_143f3eda8;
        }
        else {
          puVar3 = *(undefined2 **)((longlong)&DAT_146b036e0 + uVar13);
        }
        *puVar4 = puVar3;
        puVar4[1] = L"TextureExternal";
        *(int *)(puVar4 + 2) = iVar1;
        *(undefined8 *)((longlong)puVar4 + 0x14) = 9;
        *(undefined4 *)((longlong)puVar4 + 0x1c) = 1;
        *(undefined4 *)(puVar4 + 4) = 1;
        *(undefined4 *)((longlong)puVar4 + 0x24) = 1;
        puVar4[5] = 0;
      }
      lVar10 = (longlong)(int)local_d0;
      local_d0._0_4_ = (int)local_d0 + 1;
      if (local_d0._4_4_ < (int)local_d0) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_d8,iVar2);
      }
      puVar4 = local_d8 + lVar10 * 6;
      if (puVar4 != (undefined8 *)0x0) {
        if (*(int *)((longlong)&DAT_146b03ef8 + uVar13) == 0) {
          puVar3 = &DAT_143f3eda8;
        }
        else {
          puVar3 = *(undefined2 **)((longlong)&DAT_146b03ef0 + uVar13);
        }
        *puVar4 = puVar3;
        puVar4[1] = L"SamplerState";
        *(int *)(puVar4 + 2) = iVar1 + 8;
        *(undefined8 *)((longlong)puVar4 + 0x14) = 8;
        *(undefined4 *)((longlong)puVar4 + 0x1c) = 1;
        *(undefined4 *)(puVar4 + 4) = 1;
        *(undefined4 *)((longlong)puVar4 + 0x24) = 1;
        puVar4[5] = 0;
      }
      uVar14 = iVar1 + 0x10;
      uVar7 = (ulonglong)uVar14;
      uVar15 = (int)uVar12 + 1;
      uVar13 = uVar13 + 0x10;
      uVar12 = (ulonglong)uVar15;
    } while ((int)uVar15 < *(int *)(param_1 + 0x78));
  }
  lVar10 = (longlong)(int)local_d0;
  iVar2 = (int)local_d0 + 1;
  if (local_d0._4_4_ < iVar2) {
    uVar7 = local_d0 & 0xffffffff;
    local_d0._0_4_ = iVar2;
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_d8,uVar7);
    iVar2 = (int)local_d0;
  }
  local_d0._0_4_ = iVar2;
  iVar2 = (int)local_d0;
  puVar4 = local_d8 + lVar10 * 6;
  if (puVar4 != (undefined8 *)0x0) {
    *(uint *)(puVar4 + 2) = uVar14;
    *puVar4 = L"Wrap_WorldGroupSettings";
    puVar4[1] = L"SamplerState";
    *(undefined8 *)((longlong)puVar4 + 0x14) = 8;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = 1;
    *(undefined4 *)(puVar4 + 4) = 1;
    *(undefined4 *)((longlong)puVar4 + 0x24) = 1;
    puVar4[5] = 0;
  }
  lVar10 = (longlong)(int)local_d0;
  local_d0._0_4_ = (int)local_d0 + 1;
  if (local_d0._4_4_ < (int)local_d0) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_d8,iVar2);
  }
  puVar4 = local_d8 + lVar10 * 6;
  if (puVar4 != (undefined8 *)0x0) {
    *(uint *)(puVar4 + 2) = uVar14 + 8;
    *puVar4 = L"Clamp_WorldGroupSettings";
    puVar4[1] = L"SamplerState";
    *(undefined8 *)((longlong)puVar4 + 0x14) = 8;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = 1;
    *(undefined4 *)(puVar4 + 4) = 1;
    *(undefined4 *)((longlong)puVar4 + 0x24) = 1;
    puVar4[5] = 0;
  }
  if (*(char *)(param_1 + 0x148) != '\0') {
    *(undefined1 *)(param_1 + 0x148) = 0;
    FUniformBufferStruct::~FUniformBufferStruct(param_1 + 0xc0);
  }
  FUniformBufferStruct::FUniformBufferStruct
            (param_1 + 0xc0,&DAT_146aff018,L"MaterialUniforms",L"Material",
             AK::MemoryMgr::GetPoolName,uVar14 + 0x10,&local_d8,0);
  *(undefined1 *)(param_1 + 0x148) = 1;
  if (local_d8 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1425b9f20 FUN_1425b9f20 body=386 status=ok
// SIG undefined FUN_1425b9f20(void)

longlong * FUN_1425b9f20(longlong *param_1,int param_2,undefined1 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *local_res8;
  
  (**(code **)(*param_1 + 0x2b8))();
  if (param_4 == -1) {
    iVar1 = (int)param_1[0x2b1];
    uVar5 = (ulonglong)(param_2 != 1);
    if (param_2 == 4) {
      uVar5 = 1;
    }
    iVar6 = (int)uVar5;
    uVar7 = uVar5;
    if (iVar6 < iVar1) {
      plVar4 = (longlong *)(param_1[0x2b0] + uVar5 * 8);
      do {
        if (*plVar4 == 0) break;
        uVar7 = (ulonglong)((int)uVar7 + 1);
        uVar5 = uVar5 + 1;
        plVar4 = plVar4 + 1;
      } while ((longlong)uVar5 < (longlong)iVar1);
      iVar6 = (int)uVar7;
    }
    param_4 = (int)uVar7;
    if (iVar6 == iVar1) {
      return (longlong *)0x0;
    }
  }
  local_res8 = (longlong *)0x0;
  uVar2 = *(undefined8 *)(param_1[0xb] + 0x128 + (longlong)param_2 * 8);
  uVar3 = GetTransientPackage();
  FUN_1417846f0(uVar3,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  plVar4 = (longlong *)FUN_1417985e0(uVar2,uVar3,0,0,0,0,0,0,0);
  (**(code **)(*plVar4 + 0x278))(plVar4,param_1,param_4,param_3);
  *(longlong **)(param_1[0x2b0] + (longlong)param_4 * 8) = plVar4;
  iVar1 = (int)param_1[0xf];
  *(int *)(param_1 + 0xf) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x7c) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xe,iVar1);
  }
  *(longlong **)(param_1[0xe] + (longlong)iVar1 * 8) = plVar4;
  if ((*(int *)((longlong)plVar4 + 0x44) == 1) || (*(int *)((longlong)plVar4 + 0x44) == 4)) {
    local_res8 = plVar4;
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x2fe,&local_res8);
  }
  return plVar4;
}



// FUNCTION 1425ba0b0 FUN_1425ba0b0 body=399 status=ok
// SIG undefined FUN_1425ba0b0(void)

longlong FUN_1425ba0b0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong local_78 [2];
  longlong local_68;
  longlong local_50;
  longlong local_40;
  longlong *local_30;
  int local_28;
  longlong local_20;
  
  uVar3 = GetTransientPackage();
  FUN_1417846f0(uVar3,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar4 = UIpConnection::GetPrivateStaticClass();
  lVar5 = FUN_1417985e0(uVar4,uVar3,0,0,0,0,0,0,0);
  *(undefined8 *)(lVar5 + 0x58) = param_1;
  uVar3 = FURL::FURL(local_78,0);
  FURL::operator=(lVar5 + 0xa8,uVar3);
  plVar2 = local_30;
  iVar1 = local_28;
  if (local_20 != 0) {
    FMemory::Free();
    plVar2 = local_30;
    iVar1 = local_28;
  }
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_30 != (longlong *)0x0) {
    FMemory::Free(local_30);
  }
  if (local_40 != 0) {
    FMemory::Free();
  }
  if (local_50 != 0) {
    FMemory::Free();
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(lVar5 + 300) = *(undefined4 *)(param_2 + 300);
  FString::operator=(lVar5 + 0xb8,param_2 + 0xb8);
  *(longlong *)(lVar5 + 0x1970) = param_2;
  *(undefined8 *)(lVar5 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined4 *)(lVar5 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  iVar1 = *(int *)(param_2 + 0x50);
  *(int *)(param_2 + 0x50) = iVar1 + 1;
  if (*(int *)(param_2 + 0x54) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2 + 0x48,iVar1);
  }
  *(longlong *)(*(longlong *)(param_2 + 0x48) + (longlong)iVar1 * 8) = lVar5;
  return lVar5;
}



// FUNCTION 1425ba240 FUN_1425ba240 body=914 status=ok
// SIG undefined FUN_1425ba240(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_1425ba240(undefined8 param_1,longlong param_2,longlong param_3,int *param_4)

{
  int **ppiVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  longlong lVar10;
  int *piVar11;
  int local_res20 [2];
  longlong local_58;
  int local_50;
  int local_4c;
  longlong local_48;
  int *local_40;
  int local_38;
  
  if (param_4 != (int *)0x0) {
    return param_4;
  }
  FUN_1425e6a00(*(undefined8 *)(param_2 + 0xe0),local_res20);
  if (local_res20[0] == 1) {
    return (int *)0x0;
  }
  plVar2 = (longlong *)(param_2 + 0x260);
  piVar9 = (int *)0x0;
  if (*(int *)(param_2 + 0x268) != *(int *)(param_2 + 0x294)) {
    lVar8 = *(longlong *)(param_2 + 0x2a0);
    if (*(longlong *)(param_2 + 0x2a0) == 0) {
      lVar8 = param_2 + 0x298;
    }
    iVar4 = *(int *)(lVar8 + ((longlong)*(int *)(param_2 + 0x2a8) - 1U & (longlong)local_res20[0]) *
                             4);
    if (iVar4 != -1) {
      do {
        lVar8 = *plVar2 + (longlong)iVar4 * 0x18;
        if (*(int *)(*plVar2 + (longlong)iVar4 * 0x18) == local_res20[0]) {
          if ((iVar4 != -1) && (lVar8 != 0)) goto LAB_1425ba32f;
          break;
        }
        iVar4 = *(int *)(lVar8 + 0x10);
      } while (iVar4 != -1);
    }
  }
  local_40 = local_res20;
  FUN_1425ab1a0(plVar2,&local_58,&local_40,0);
  lVar8 = *plVar2 + (longlong)(int)local_58 * 0x18;
LAB_1425ba32f:
  ppiVar1 = (int **)(lVar8 + 8);
  if (*ppiVar1 == (int *)0x0) {
    piVar5 = (int *)operator_new(0x38);
    piVar11 = piVar9;
    if (piVar5 != (int *)0x0) {
      piVar5[3] = 0;
      piVar5[4] = 0;
      piVar5[5] = 0;
      piVar5[6] = 0;
      piVar5[0xc] = 0;
      piVar5[0xd] = 0;
      *piVar5 = -1;
      piVar5[1] = 0;
      piVar5[2] = -1;
      piVar5[3] = 0;
      piVar5[7] = 0;
      piVar5[8] = 0;
      piVar5[9] = 0;
      piVar5[10] = 0;
      piVar5[0xb] = 0;
      piVar5[0xd] = 0;
      piVar11 = piVar5;
    }
    if (ppiVar1 == &local_40) {
      if (piVar11 == (int *)0x0) goto LAB_1425ba3d0;
      piVar5 = piVar11;
      if (*(longlong *)(piVar11 + 8) != 0) {
        FMemory::Free();
      }
    }
    else {
      piVar5 = *ppiVar1;
      *ppiVar1 = piVar11;
      if (piVar5 == (int *)0x0) goto LAB_1425ba3d0;
      if (*(longlong *)(piVar5 + 8) != 0) {
        FMemory::Free();
      }
    }
    FMemory::operator_delete(piVar5,0x38);
  }
LAB_1425ba3d0:
  lVar8 = *(longlong *)(param_3 + 0x168);
  piVar11 = *ppiVar1;
  if (lVar8 == 0) {
    local_40 = _DAT_1468b5d90;
    local_38 = DAT_1468b5d98;
  }
  else {
    local_40 = *(int **)(lVar8 + 0x220);
    local_38 = *(int *)(lVar8 + 0x228);
  }
  *(int **)(piVar11 + 4) = local_40;
  piVar11[6] = local_38;
  piVar11[7] = local_res20[0];
  uVar6 = AActor::GetLevel(param_3);
  FWeakObjectPtr::operator=(piVar11,uVar6);
  FWeakObjectPtr::operator=(piVar11 + 2,*(undefined8 *)(param_3 + 0x20));
  local_40 = *(int **)(param_3 + 0x18);
  FName::ToString(&local_40,&local_58);
  plVar2 = (longlong *)(piVar11 + 8);
  if (plVar2 == &local_58) {
    if (local_58 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = local_58;
    piVar11[10] = local_50;
    piVar11[0xb] = local_4c;
  }
  lVar8 = *(longlong *)(param_3 + 0x18);
  if (*(int *)(param_2 + 0x2b8) != *(int *)(param_2 + 0x2e4)) {
    lVar7 = *(longlong *)(param_2 + 0x2f0);
    if (*(longlong *)(param_2 + 0x2f0) == 0) {
      lVar7 = param_2 + 0x2e8;
    }
    iVar4 = *(int *)(lVar7 + ((longlong)((int)((ulonglong)lVar8 >> 0x20) + (int)lVar8) &
                             (longlong)*(int *)(param_2 + 0x2f8) - 1U) * 4);
    if (iVar4 != -1) {
      lVar7 = *(longlong *)(param_2 + 0x2b0);
      do {
        lVar10 = (longlong)iVar4;
        if (*(longlong *)(lVar7 + lVar10 * 0x18) == lVar8) {
          if ((iVar4 != -1) && (lVar7 = lVar7 + lVar10 * 0x18, lVar7 != 0)) {
            local_48 = *(longlong *)(lVar7 + 8);
            goto LAB_1425ba51e;
          }
          break;
        }
        iVar4 = *(int *)(lVar7 + 0x10 + lVar10 * 0x18);
      } while (iVar4 != -1);
    }
  }
  local_48 = 0;
LAB_1425ba51e:
  local_58 = 0;
  if (local_48 != 0) {
    uVar6 = FName::ToString(&local_48,&local_40);
    FString::operator=(plVar2,uVar6);
    if (local_40 != (int *)0x0) {
      FMemory::Free();
    }
  }
  cVar3 = FWeakObjectPtr::IsValid(piVar11);
  if (cVar3 != '\0') {
    uVar6 = FWeakObjectPtr::Get(piVar11);
    cVar3 = ULevel::IsPersistentLevel(uVar6);
    if (cVar3 == '\0') {
      uVar6 = FWeakObjectPtr::Get(piVar11);
      lVar8 = UObjectBaseUtility::GetOutermost(uVar6);
      piVar9 = *(int **)(lVar8 + 0x18);
    }
  }
  *(int **)(piVar11 + 0xc) = piVar9;
  return piVar11;
}



// FUNCTION 1425ba5e0 FUN_1425ba5e0 body=153 status=ok
// SIG undefined FUN_1425ba5e0(void)

undefined8 * FUN_1425ba5e0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)operator_new(0x30);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0xb10);
    uVar3 = *(undefined8 *)(lVar2 + 0x6f8);
    HHitProxy::HHitProxy(puVar4,0);
    puVar4[5] = uVar3;
    *puVar4 = &PTR__scalar_deleting_destructor__14511a918;
    puVar4[4] = lVar2;
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
  }
  iVar1 = (int)param_3[1];
  *(int *)(param_3 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
  }
  *(undefined8 **)(*param_3 + (longlong)iVar1 * 8) = puVar4;
  return puVar4;
}



// FUNCTION 1425ba6a0 FUN_1425ba6a0 body=936 status=ok
// SIG undefined FUN_1425ba6a0(void)

void FUN_1425ba6a0(undefined8 param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong lVar13;
  int local_res10 [4];
  longlong local_res20;
  longlong local_58;
  int *local_50 [3];
  
  uVar4 = FWeakObjectPtr::Get((longlong)param_4 + 0x14);
  uVar8 = *(undefined8 *)(param_2 + 0xe0);
  uVar5 = FName::ToString(param_4,local_50);
  FUN_1425dc840(uVar8,local_res10,uVar5,uVar4,param_4[4]);
  if (local_50[0] != (int *)0x0) {
    FMemory::Free();
  }
  if (local_res10[0] == 1) {
    return;
  }
  plVar1 = (longlong *)(param_2 + 0x260);
  puVar12 = (undefined4 *)0x0;
  if (*(int *)(param_2 + 0x268) != *(int *)(param_2 + 0x294)) {
    lVar6 = *(longlong *)(param_2 + 0x2a0);
    if (*(longlong *)(param_2 + 0x2a0) == 0) {
      lVar6 = param_2 + 0x298;
    }
    iVar3 = *(int *)(lVar6 + ((longlong)*(int *)(param_2 + 0x2a8) - 1U & (longlong)local_res10[0]) *
                             4);
    if (iVar3 != -1) {
      do {
        lVar6 = *plVar1 + (longlong)iVar3 * 0x18;
        if (*(int *)(*plVar1 + (longlong)iVar3 * 0x18) == local_res10[0]) {
          if ((iVar3 != -1) && (lVar6 != 0)) goto LAB_1425ba7bd;
          break;
        }
        iVar3 = *(int *)(lVar6 + 0x10);
      } while (iVar3 != -1);
    }
  }
  local_50[0] = local_res10;
  FUN_1425ab1a0(plVar1,&local_res20,local_50,0);
  lVar6 = *plVar1 + (longlong)(int)local_res20 * 0x18;
LAB_1425ba7bd:
  plVar1 = (longlong *)(lVar6 + 8);
  if (*(longlong *)(lVar6 + 8) == 0) {
    puVar7 = (undefined4 *)operator_new(0x38);
    if (puVar7 != (undefined4 *)0x0) {
      *(undefined8 *)(puVar7 + 3) = 0;
      *(undefined8 *)(puVar7 + 5) = 0;
      *(undefined8 *)(puVar7 + 0xc) = 0;
      *puVar7 = 0xffffffff;
      puVar7[1] = 0;
      puVar7[2] = 0xffffffff;
      puVar7[3] = 0;
      puVar7[7] = 0;
      *(undefined8 *)(puVar7 + 8) = 0;
      *(undefined8 *)(puVar7 + 10) = 0;
      puVar7[0xd] = 0;
      puVar12 = puVar7;
    }
    if (plVar1 == &local_res20) {
      if (puVar12 == (undefined4 *)0x0) goto LAB_1425ba85e;
      puVar7 = puVar12;
      if (*(longlong *)(puVar12 + 8) != 0) {
        FMemory::Free();
      }
    }
    else {
      puVar7 = (undefined4 *)*plVar1;
      *plVar1 = (longlong)puVar12;
      if (puVar7 == (undefined4 *)0x0) goto LAB_1425ba85e;
      if (*(longlong *)(puVar7 + 8) != 0) {
        FMemory::Free();
      }
    }
    FMemory::operator_delete(puVar7,0x38);
  }
LAB_1425ba85e:
  lVar6 = *plVar1;
  *(longlong *)(lVar6 + 0x10) = param_4[1];
  *(int *)(lVar6 + 0x18) = (int)param_4[2];
  *(int *)(lVar6 + 0x1c) = local_res10[0];
  FWeakObjectPtr::operator=(lVar6,param_3);
  uVar8 = FWeakObjectPtr::Get((longlong)param_4 + 0x14);
  FWeakObjectPtr::operator=(lVar6 + 8,uVar8);
  plVar9 = (longlong *)FName::ToString(param_4,local_50);
  plVar1 = (longlong *)(lVar6 + 0x20);
  if (plVar1 != plVar9) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = *plVar9;
    *plVar9 = 0;
    *(int *)(lVar6 + 0x28) = (int)plVar9[1];
    *(undefined4 *)(lVar6 + 0x2c) = *(undefined4 *)((longlong)plVar9 + 0xc);
    plVar9[1] = 0;
  }
  if (local_50[0] != (int *)0x0) {
    FMemory::Free();
  }
  lVar11 = *param_4;
  if (*(int *)(param_2 + 0x2b8) != *(int *)(param_2 + 0x2e4)) {
    lVar10 = *(longlong *)(param_2 + 0x2f0);
    if (*(longlong *)(param_2 + 0x2f0) == 0) {
      lVar10 = param_2 + 0x2e8;
    }
    iVar3 = *(int *)(lVar10 + ((longlong)((int)((ulonglong)lVar11 >> 0x20) + (int)lVar11) &
                              (longlong)*(int *)(param_2 + 0x2f8) - 1U) * 4);
    if (iVar3 != -1) {
      lVar10 = *(longlong *)(param_2 + 0x2b0);
      do {
        lVar13 = (longlong)iVar3;
        if (*(longlong *)(lVar10 + lVar13 * 0x18) == lVar11) {
          if ((iVar3 != -1) && (lVar10 = lVar10 + lVar13 * 0x18, lVar10 != 0)) {
            local_58 = *(longlong *)(lVar10 + 8);
            goto LAB_1425ba963;
          }
          break;
        }
        iVar3 = *(int *)(lVar10 + 0x10 + lVar13 * 0x18);
      } while (iVar3 != -1);
    }
  }
  local_58 = 0;
LAB_1425ba963:
  local_res20 = 0;
  if (local_58 != 0) {
    plVar9 = (longlong *)FName::ToString(&local_58,local_50);
    if (plVar1 != plVar9) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = *plVar9;
      *plVar9 = 0;
      *(int *)(lVar6 + 0x28) = (int)plVar9[1];
      *(undefined4 *)(lVar6 + 0x2c) = *(undefined4 *)((longlong)plVar9 + 0xc);
      plVar9[1] = 0;
    }
    if (local_50[0] != (int *)0x0) {
      FMemory::Free();
    }
  }
  cVar2 = FWeakObjectPtr::IsValid(lVar6);
  if (cVar2 != '\0') {
    uVar8 = FWeakObjectPtr::Get(lVar6);
    cVar2 = ULevel::IsPersistentLevel(uVar8);
    if (cVar2 == '\0') {
      uVar8 = FWeakObjectPtr::Get(lVar6);
      lVar11 = UObjectBaseUtility::GetOutermost(uVar8);
      *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)(lVar11 + 0x18);
      return;
    }
  }
  *(undefined8 *)(lVar6 + 0x30) = 0;
  return;
}



// FUNCTION 1425baa50 FUN_1425baa50 body=108 status=ok
// SIG undefined FUN_1425baa50(void)

undefined8 * FUN_1425baa50(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b047b0) {
    _Init_thread_header(&DAT_146b047b0);
    if (DAT_146b047b0 == -1) {
      atexit(FUN_143eb4320);
      _Init_thread_footer(&DAT_146b047b0);
      return &DAT_146b047a0;
    }
  }
  return &DAT_146b047a0;
}



// FUNCTION 1425baac0 CreateReplicatorForNewActorChannel body=164 status=ok
// SIG undefined CreateReplicatorForNewActorChannel(void)

undefined8 *
UNetConnection::CreateReplicatorForNewActorChannel
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  lVar1 = operator_new(0x368);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FObjectReplicator::FObjectReplicator(lVar1);
  }
  puVar3 = (undefined8 *)operator_new(0x18);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR_DestroyObject_145098af8;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    puVar3[2] = uVar2;
  }
  *param_2 = uVar2;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,uVar2,uVar2);
  FUN_1423f1670(*param_2,param_3,param_1,1);
  return param_2;
}



// FUNCTION 1425bab70 FUN_1425bab70 body=46 status=ok
// SIG undefined FUN_1425bab70(void)

void FUN_1425bab70(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0xb50);
  if (lVar1 != 0) {
    FUN_1425ad160(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 1425baba0 FUN_1425baba0 body=332 status=ok
// SIG undefined FUN_1425baba0(void)

undefined8 * FUN_1425baba0(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_14511d158;
  *(undefined1 *)(plVar6 + 3) = 0;
  plVar6[4] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 1425bacf0 FUN_1425bacf0 body=332 status=ok
// SIG undefined FUN_1425bacf0(void)

undefined8 * FUN_1425bacf0(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_14511d168;
  *(undefined1 *)(plVar6 + 3) = 0;
  plVar6[4] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 1425bae40 FUN_1425bae40 body=332 status=ok
// SIG undefined FUN_1425bae40(void)

undefined8 * FUN_1425bae40(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_14511d128;
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[5] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 1425baf90 FUN_1425baf90 body=332 status=ok
// SIG undefined FUN_1425baf90(void)

undefined8 * FUN_1425baf90(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_14511d148;
  *(undefined1 *)(plVar6 + 8) = 0;
  plVar6[9] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 1425bb0e0 FUN_1425bb0e0 body=332 status=ok
// SIG undefined FUN_1425bb0e0(void)

undefined8 * FUN_1425bb0e0(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_14511d138;
  *(undefined1 *)(plVar6 + 5) = 0;
  plVar6[6] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 1425bb230 FUN_1425bb230 body=676 status=ok
// SIG undefined FUN_1425bb230(void)

undefined8 *
FUN_1425bb230(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
             undefined8 *param_5)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined1 **ppuVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined1 local_res8 [8];
  undefined1 *local_res10;
  undefined8 local_res18;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar11;
  undefined *local_88;
  undefined1 *puStack_80;
  undefined8 *local_78;
  undefined1 *puStack_70;
  undefined8 *local_68;
  undefined8 local_60;
  longlong local_58;
  char local_50;
  undefined8 local_48;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  *param_2 = 0;
  if (*(int *)(param_1 + 0xe0) != 0) {
    puStack_80 = local_res8;
    local_88 = &DAT_14060d670;
    local_78 = (undefined8 *)&DAT_14060d670;
    local_res8[0] = 0;
    local_res18 = param_3;
    puStack_70 = puStack_80;
    lVar4 = FUN_1415d8310(&local_78,&DAT_146216a38);
    local_68 = (undefined8 *)(lVar4 + 0x18);
    local_88 = &DAT_14060d670;
    local_60 = *local_68;
    local_58 = *(longlong *)(lVar4 + 0x28);
    local_50 = '\0';
    local_48 = *(undefined8 *)(lVar4 + 0x30);
    *(undefined8 ***)(lVar4 + 0x30) = &local_68;
    *(int *)(lVar4 + 0x38) = *(int *)(lVar4 + 0x38) + 1;
    puStack_80 = local_res8;
    iVar2 = *(int *)(param_1 + 0xe0);
    local_78 = (undefined8 *)&DAT_14060d670;
    local_res8[0] = 0;
    puStack_70 = puStack_80;
    lVar4 = FUN_1415d8310(&local_78,&DAT_146216a38);
    puVar1 = (ulonglong *)(lVar4 + 0x18);
    uVar3 = 8;
    if (0xf < iVar2) {
      uVar3 = 0x10;
    }
    uVar7 = 0x10;
    if (0xf < iVar2) {
      uVar7 = (ulonglong)uVar3;
    }
    local_res10 = (undefined1 *)~(uVar7 - 1);
    uVar10 = (uVar7 - 1) + *puVar1 & (ulonglong)local_res10;
    uVar5 = uVar10 + (longlong)iVar2;
    if (*(ulonglong *)(lVar4 + 0x20) < uVar5) {
      FMemStackBase::AllocateNewChunk(puVar1,iVar2 + (int)uVar7);
      uVar10 = (uVar7 - 1) + *puVar1 & (ulonglong)local_res10;
      uVar5 = uVar10 + (longlong)iVar2;
    }
    *puVar1 = uVar5;
    FUN_1425bc8f0(param_1,local_res18,uVar10,iVar2);
    local_88 = (undefined1 *)0x0;
    if (param_4 == 0) {
      (**(code **)(*DAT_146ab6358 + 0x110))
                (DAT_146ab6358,&local_res10,uVar10,param_1 + 0xe8,CONCAT44(uVar11,2));
      ppuVar8 = &local_res10;
      local_88 = local_res10;
      local_res10 = (undefined1 *)0x0;
    }
    else {
      uVar11 = *(undefined4 *)(param_1 + 0xe0);
      puStack_70 = (undefined1 *)0x0;
      puVar9 = (undefined8 *)(*(longlong *)(param_4 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar9 + 5;
      if (*(undefined8 **)(param_4 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_4 + 0x30,0x30);
        puVar9 = (undefined8 *)(*(longlong *)(param_4 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar9 + 5;
      }
      *(undefined8 **)(param_4 + 0x30) = puVar6;
      *(int *)(param_4 + 0x14) = *(int *)(param_4 + 0x14) + 1;
      **(undefined8 **)(param_4 + 8) = puVar9;
      *(undefined8 **)(param_4 + 8) = puVar9 + 1;
      puVar9[1] = 0;
      *puVar9 = &PTR_LAB_144d91e30;
      puVar9 = puVar9 + 2;
      FLocalUniformBufferWorkArea::FLocalUniformBufferWorkArea
                (puVar9,param_4,uVar10,uVar11,param_1 + 0xe8);
      *param_5 = puVar9;
      local_78 = puVar9;
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_5 + 1,0);
      ppuVar8 = &puStack_70;
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(ppuVar8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,&local_88);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_88);
    if (local_50 == '\0') {
      local_50 = 1;
      *(int *)(local_68 + 4) = *(int *)(local_68 + 4) + -1;
      if (local_58 != local_68[2]) {
        FMemStackBase::FreeChunks();
      }
      *local_68 = local_60;
      local_68[3] = local_48;
    }
  }
  return param_2;
}



// FUNCTION 1425bb4e0 FUN_1425bb4e0 body=329 status=ok
// SIG undefined FUN_1425bb4e0(void)

undefined8 *
FUN_1425bb4e0(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 local_res10 [8];
  undefined8 local_30;
  
  *param_2 = 0;
  if (param_3 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0xe0);
    puVar3 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
    local_30 = 0;
    puVar2 = puVar3 + 5;
    if (*(undefined8 **)(param_3 + 0x38) < puVar2) {
      FMemStackBase::AllocateNewChunk(param_3 + 0x30,0x30);
      puVar3 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar2 = puVar3 + 5;
    }
    *(undefined8 **)(param_3 + 0x30) = puVar2;
    *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
    **(undefined8 **)(param_3 + 8) = puVar3;
    *(undefined8 **)(param_3 + 8) = puVar3 + 1;
    puVar3[1] = 0;
    *puVar3 = &PTR_LAB_144d91e30;
    FLocalUniformBufferWorkArea::FLocalUniformBufferWorkArea
              (puVar3 + 2,param_3,param_5,uVar1,param_1 + 0xe8);
    *param_4 = puVar3 + 2;
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_4 + 1,0);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_30);
    return param_2;
  }
  (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,local_res10,param_5,param_1 + 0xe8,2);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,local_res10);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res10);
  return param_2;
}



// FUNCTION 1425bb630 FUN_1425bb630 body=186 status=ok
// SIG undefined FUN_1425bb630(void)

void FUN_1425bb630(longlong param_1)

{
  longlong lVar1;
  undefined8 local_res8;
  longlong local_28 [4];
  
  if ((*(char *)(param_1 + 0xe8) != '\0') && (*(longlong *)(param_1 + 0x38) != 0)) {
    local_28[0] = 0;
    local_28[1] = 0;
    UMaterialParameterCollectionInstance::GetParameterData(param_1,local_28);
    lVar1 = *(longlong *)(param_1 + 0x30);
    if (lVar1 == 0) {
      local_28[2] = 0;
      local_28[3] = 0;
    }
    else {
      local_28[2] = *(undefined8 *)(lVar1 + 0x28);
      local_28[3] = *(undefined8 *)(lVar1 + 0x30);
    }
    local_res8 = *(undefined8 *)(param_1 + 0x18);
    FUN_1425bebe0(*(undefined8 *)(param_1 + 0xe0),local_28 + 2,local_28,&local_res8);
    FUN_1428dba00(*(undefined8 *)(param_1 + 0x38),0,0);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    *(undefined1 *)(param_1 + 0xe8) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0xe8) = 0;
  return;
}



// FUNCTION 1425bb6f0 FUN_1425bb6f0 body=963 status=ok
// SIG undefined FUN_1425bb6f0(void)

undefined8 FUN_1425bb6f0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  undefined8 *puVar10;
  wchar_t *pwVar11;
  undefined8 uVar12;
  undefined2 **ppuVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  bool bVar17;
  ulonglong local_res8;
  wchar_t *local_res10;
  wchar_t *local_res18;
  undefined *local_res20;
  undefined2 *local_118;
  undefined8 local_110;
  undefined2 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined2 *local_f0;
  int local_e8;
  undefined2 *local_e0;
  int local_d8;
  wchar_t *local_d0;
  int local_c8;
  wchar_t *local_c0;
  int local_b8;
  wchar_t *local_b0;
  int local_a8;
  undefined2 *local_a0 [2];
  undefined1 local_90 [8];
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [3];
  
  bVar8 = false;
  puVar14 = &DAT_143f3eda8;
  local_res8 = local_res8 & 0xffffffff00000000;
  if (param_1[0x13] == 0) {
    local_res10 = L"NULL";
  }
  else {
    local_108 = *(undefined2 **)(param_1[0x13] + 0x18);
    FName::ToString(&local_108,&local_b0);
    local_res10 = L"";
    bVar8 = true;
    if (local_a8 != 0) {
      local_res10 = local_b0;
    }
  }
  bVar7 = false;
  if (param_1[6] == 0) {
    local_res18 = L"NULL";
  }
  else {
    local_100 = *(undefined8 *)(param_1[6] + 0x18);
    bVar7 = true;
    FName::ToString(&local_100,&local_c0);
    local_res18 = L"";
    if (local_b8 != 0) {
      local_res18 = local_c0;
    }
  }
  bVar6 = false;
  if ((longlong *)param_1[0xb] != (longlong *)0x0) {
    cVar9 = (**(code **)(*(longlong *)param_1[0xb] + 0x368))();
    local_res20 = &DAT_14510fba8;
    if (cVar9 != '\0') goto LAB_1425bb7c5;
  }
  local_res20 = &DAT_14510d0a4;
LAB_1425bb7c5:
  lVar1 = param_1[0xb];
  if (lVar1 == 0) {
    pwVar11 = L"NULL";
  }
  else {
    local_f8 = *(undefined8 *)(lVar1 + 0x18);
    bVar6 = true;
    FName::ToString(&local_f8,&local_f0);
    puVar16 = &DAT_143f3eda8;
    if (local_e8 != 0) {
      puVar16 = local_f0;
    }
    puVar10 = (undefined8 *)FName::ToString(lVar1 + 0x120,local_88);
    if (*(int *)(puVar10 + 1) == 0) {
      puVar15 = &DAT_143f3eda8;
    }
    else {
      puVar15 = (undefined2 *)*puVar10;
    }
    pwVar11 = L"";
    if (*(char *)(lVar1 + 0x180) != '\0') {
      pwVar11 = L"(PEER)";
    }
    FString::PrintfImpl(&local_d0,L"%s %s%s",puVar15,puVar16,pwVar11);
    if (local_88[0] != 0) {
      FMemory::Free();
    }
    if (local_f0 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    pwVar11 = L"";
    if (local_c8 != 0) {
      pwVar11 = local_d0;
    }
  }
  if (((longlong *)param_1[0x2c] == (longlong *)0x0) ||
     (cVar9 = (**(code **)(*(longlong *)param_1[0x2c] + 0x20))(), cVar9 == '\0')) {
    local_118 = (undefined2 *)0x0;
    local_110 = 8;
    bVar5 = false;
    bVar4 = false;
    bVar3 = false;
    bVar17 = true;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
    FGenericPlatformString::Memcpy(local_118,L"INVALID",0x10);
    ppuVar13 = &local_118;
  }
  else {
    plVar2 = (longlong *)param_1[0x2c];
    bVar5 = true;
    bVar4 = true;
    bVar3 = true;
    bVar17 = false;
    puVar10 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,local_68);
    if (*(int *)(puVar10 + 1) == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)*puVar10;
    }
    uVar12 = (**(code **)(*plVar2 + 8))(plVar2,local_90);
    puVar10 = (undefined8 *)FName::ToString(uVar12,local_78);
    if (*(int *)(puVar10 + 1) == 0) {
      puVar15 = &DAT_143f3eda8;
    }
    else {
      puVar15 = (undefined2 *)*puVar10;
    }
    FString::PrintfImpl(local_a0,L"%s:%s",puVar15,puVar16);
    ppuVar13 = local_a0;
  }
  puVar16 = *ppuVar13;
  *ppuVar13 = (undefined2 *)0x0;
  local_res8 = CONCAT44(local_res8._4_4_,*(undefined4 *)(ppuVar13 + 1));
  ppuVar13[1] = (undefined2 *)0x0;
  if ((bVar17) && (local_118 != (undefined2 *)0x0)) {
    FMemory::Free();
  }
  if ((bVar3) && (local_a0[0] != (undefined2 *)0x0)) {
    FMemory::Free();
  }
  if ((bVar4) && (local_78[0] != 0)) {
    FMemory::Free();
  }
  if ((bVar5) && (local_68[0] != 0)) {
    FMemory::Free();
  }
  bVar17 = (int)local_res8 != 0;
  local_res8 = param_1[3];
  puVar15 = &DAT_143f3eda8;
  if (bVar17) {
    puVar15 = puVar16;
  }
  FName::ToString(&local_res8,&local_e0);
  local_118 = &DAT_143f3eda8;
  if (local_d8 != 0) {
    local_118 = local_e0;
  }
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x288))(param_1,local_58,1);
  if (*(int *)(puVar10 + 1) != 0) {
    puVar14 = (undefined2 *)*puVar10;
  }
  FString::PrintfImpl(param_2,
                      L"[UNetConnection] RemoteAddr: %s, Name: %s, Driver: %s, IsServer: %s, PC: %s, Owner: %s, UniqueId: %s"
                      ,puVar14,local_118,pwVar11,local_res20,local_res18,local_res10,puVar15);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if (local_e0 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (puVar16 != (undefined2 *)0x0) {
    FMemory::Free(puVar16);
  }
  if ((bVar6) && (local_d0 != (wchar_t *)0x0)) {
    FMemory::Free();
  }
  if ((bVar7) && (local_c0 != (wchar_t *)0x0)) {
    FMemory::Free();
  }
  if ((bVar8) && (local_b0 != (wchar_t *)0x0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1425bbac0 FUN_1425bbac0 body=34 status=ok
// SIG undefined FUN_1425bbac0(void)

void FUN_1425bbac0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x58) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0xd0), lVar1 != 0)) {
    FUN_142543860(lVar1,param_2,1);
    return;
  }
  return;
}



// FUNCTION 1425bbaf0 DestroyObject body=82 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FClassNetCacheMgr,SharedPointerInternals::DefaultDeleter<FClassNetCacheMgr>_>
     ::DestroyObject(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FClassNetCacheMgr::ClearClassNetCache(lVar1);
    *(undefined4 *)(lVar1 + 0x50) = 0;
    if (*(longlong *)(lVar1 + 0x48) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (lVar1 + 8);
    FMemory::operator_delete(lVar1,0x58);
  }
  return;
}



// FUNCTION 1425bbb50 FUN_1425bbb50 body=20 status=ok
// SIG undefined FUN_1425bbb50(void)

void FUN_1425bbb50(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FNetGUIDCache::_scalar_deleting_destructor_(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 1425bbb90 FUN_1425bbb90 body=47 status=ok
// SIG undefined FUN_1425bbb90(void)

void FUN_1425bbb90(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1423e6250(lVar1);
    FMemory::operator_delete(lVar1,0x28);
    return;
  }
  return;
}



// FUNCTION 1425bbc10 FUN_1425bbc10 body=708 status=ok
// SIG undefined FUN_1425bbc10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1425bbc10(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_148 [32];
  int local_128;
  uint local_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  longlong *local_118;
  longlong local_110 [15];
  longlong *local_98;
  undefined8 local_90;
  undefined2 local_88;
  uint local_84;
  undefined4 local_80;
  longlong local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  if (((*(uint *)(param_1 + 0x18) >> 0xb & 1) == 0) &&
     ((*(uint *)(param_1 + 0x1c) & 0x4000000) == 0)) {
    local_124 = *(uint *)(param_1 + 0x18) >> 0xd;
    uVar4 = 0;
    uVar6 = uVar4;
    uVar7 = uVar4;
    local_118 = param_2;
    if (0 < *(int *)(param_1 + 0xb20)) {
      do {
        lVar1 = *(longlong *)(uVar4 + *(longlong *)(*(longlong *)(param_1 + 0xb10) + 0x720));
        if (*(int *)(lVar1 + 0x4c) != 0) {
          local_98 = (longlong *)0x0;
          local_84 = local_84 & 0xf98000e0 | 0x18000e0;
          local_90 = 1;
          local_88 = 0xffff;
          local_80 = 0;
          local_78 = 0;
          lStack_70 = 0;
          local_68 = 0;
          local_60 = 0xffffffff;
          local_5c = 0;
          FUN_1408ca0e0(local_110);
          plVar2 = local_110;
          if (local_98 != (longlong *)0x0) {
            plVar2 = local_98;
          }
          if (plVar2 != (longlong *)0x0) {
            *plVar2 = 0;
            plVar2[1] = 0;
            plVar2[2] = 0;
            plVar2[3] = 0;
            plVar2[4] = 0;
            plVar2[6] = 0;
            plVar2[7] = 0;
            plVar2[8] = 1;
            plVar2[10] = 0;
            *(undefined4 *)(plVar2 + 0xb) = 0xffffffff;
            *(undefined4 *)((longlong)plVar2 + 0x5c) = 0;
            plVar2[0xc] = 0x3f800000;
            *(undefined2 *)(plVar2 + 0xd) = 0;
            plVar2[0xe] = 0;
          }
          plVar2 = local_110;
          if (local_98 != (longlong *)0x0) {
            plVar2 = local_98;
          }
          plVar2[2] = *(longlong *)(lVar1 + 0x40);
          lStack_70 = param_1 + 0x3a0;
          plVar3 = *(longlong **)(uVar7 + 0x28 + *(longlong *)(param_1 + 0xb18));
          local_68 = (**(code **)(*plVar3 + 0x2a8))(plVar3,0,0);
          local_78 = (longlong)(int)uVar6 * 0x60 + *(longlong *)(param_1 + 0xb18);
          *plVar2 = param_1 + 0x188;
          local_128 = (int)plVar2[7];
          local_120 = *(undefined4 *)(lVar1 + 0x48);
          uStack_11c = *(undefined4 *)(lVar1 + 0x4c);
          *(int *)(plVar2 + 7) = local_128 + 1;
          if (*(int *)((longlong)plVar2 + 0x3c) < local_128 + 1) {
            TArray<TWeakObjectPtr<UPersistenceComponent,FWeakObjectPtr>,TInlineAllocator<1,FDefaultAllocator>_>
            ::ResizeGrow(plVar2 + 5);
          }
          plVar3 = (longlong *)plVar2[6];
          if ((longlong *)plVar2[6] == (longlong *)0x0) {
            plVar3 = plVar2 + 5;
          }
          plVar3[local_128] = CONCAT44(uStack_11c,local_120);
          *(undefined4 *)(plVar2 + 9) = *(undefined4 *)(lVar1 + 0x50);
          *(undefined4 *)((longlong)plVar2 + 0x4c) = *(undefined4 *)(lVar1 + 0x54);
          local_84 = (local_124 & 7) << 0x12 | local_84 & 0xffe00fff;
          local_88 = (ushort)local_88._1_1_ << 8;
          (**(code **)(*local_118 + 0x10))(local_118,local_110,0x7f7fffff);
          FUN_1408bbda0(local_110);
        }
        uVar5 = (int)uVar6 + 1;
        uVar4 = uVar4 + 8;
        uVar6 = (ulonglong)uVar5;
        uVar7 = uVar7 + 0x60;
      } while ((int)uVar5 < *(int *)(param_1 + 0xb20));
    }
  }
  return;
}



// FUNCTION 1425bbf00 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FNetworkGUID,TUniquePtr<FActorDestructionInfo,TDefaultDelete<FActorDestructionInfo>_>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TUniquePtr<FActorDestructionInfo,TDefaultDelete<FActorDestructionInfo>_>,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FNetworkGUID,TUniquePtr<FActorDestructionInfo,TDefaultDelete<FActorDestructionInfo>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,param_2);
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



// FUNCTION 1425bbf80 Empty body=400 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<UModelComponent_*,TIndirectArray<FModelElement,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
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
      if (bVar3) goto LAB_1425bc051;
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
LAB_1425bc051:
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
      TIndirectArray<FModelElement,FDefaultAllocator>::
      ~TIndirectArray<FModelElement,FDefaultAllocator>((longlong)iStack_1c * 0x20 + 8 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 1425bc110 FUN_1425bc110 body=146 status=ok
// SIG undefined FUN_1425bc110(void)

void FUN_1425bc110(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *local_28;
  longlong *local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_1421e15d0(*(longlong *)(param_1 + 0x138),&local_28);
    if (local_28 != (longlong *)0x0) {
      local_18 = *param_2;
      uStack_14 = param_2[1];
      uStack_10 = param_2[2];
      uStack_c = param_2[3];
      (**(code **)(*local_28 + 0x88))(local_28,&local_18);
      (**(code **)(*local_28 + 0x70))();
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1425bc1b0 FUN_1425bc1b0 body=404 status=ok
// SIG undefined FUN_1425bc1b0(void)

void FUN_1425bc1b0(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  longlong *local_138;
  longlong *local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong local_118;
  longlong *local_110;
  longlong local_88;
  longlong local_28;
  longlong local_18;
  
  if ((1 < *(uint *)((longlong)param_1 + 300)) && (param_1[0xb] != 0)) {
    lVar4 = *(longlong *)param_1[0x2b0];
    if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0x30) & 2) == 0)) {
      FControlChannelOutBunch::FControlChannelOutBunch(&local_118,lVar4,0);
      local_res8[0] = 0x15;
      if ((undefined1 *)local_110[1] < (undefined1 *)*local_110 + 1) {
        (**(code **)(local_118 + 0x50))(&local_118,local_res8,1);
      }
      else {
        local_res8[0] = *(undefined1 *)*local_110;
        *local_110 = *local_110 + 1;
      }
      (**(code **)(**(longlong **)param_1[0x2b0] + 0x2c8))
                (*(longlong **)param_1[0x2b0],local_res18,&local_118,1);
      if (local_18 != 0) {
        FMemory::Free();
      }
      if (local_28 != 0) {
        FMemory::Free();
      }
      if (local_88 != 0) {
        FMemory::Free();
      }
      FArchive::~FArchive(&local_118);
    }
    (**(code **)(*param_1 + 0x2c8))(param_1,0);
    if (param_1[0x27] != 0) {
      FUN_1421e15d0(param_1[0x27],&local_138);
      if (local_138 != (longlong *)0x0) {
        local_128 = *param_2;
        uStack_124 = param_2[1];
        uStack_120 = param_2[2];
        uStack_11c = param_2[3];
        (**(code **)(*local_138 + 0x88))(local_138,&local_128);
        (**(code **)(*local_138 + 0x70))();
      }
      if (local_130 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_130 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_130)(local_130);
          LOCK();
          piVar2 = (int *)((longlong)local_130 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_130 + 8))(local_130,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1425bc350 Exec body=97 status=ok
// SIG undefined Exec(void)

undefined1
UNetConnection::Exec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = FUN_1426df4b0();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(longlong *)(DAT_146b17150 + 0x28) + 8))
                      ((longlong *)(DAT_146b17150 + 0x28),param_2,param_3,param_4);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1425bc3c0 ExecuteTask body=296 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<TEnqueueUniqueRenderCommandType<`FMaterialParameterCollectionInstanceResource::GameThread_Destroy'::`2'::DestroyCollectionCommandName,<lambda_59a5ddd379bb5d73a972473b1b9e165d>_>_>
     ::ExecuteTask(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    TRefCountPtr<FRHIIndexBuffer>::operator=(lVar3 + 0x18,0);
    if (*(longlong *)(lVar3 + 0x38) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar3 + 0x28) != 0) {
      FMemory::Free();
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar3 + 0x18);
    FMemory::operator_delete(lVar3,0x58);
  }
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_14511d158;
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



// FUNCTION 1425bc4f0 ExecuteTask body=238 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<TEnqueueUniqueRenderCommandType<`FModelSceneProxy::FModelSceneProxy'::`2'::InitOrUpdateVertexBufferCmdName,<lambda_8eb0fd50722b02ff4367f6a0ae38e9ad>_>_>
     ::ExecuteTask(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  <lambda_8eb0fd50722b02ff4367f6a0ae38e9ad>::operator()(param_1 + 2,uVar3);
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_14511d168;
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



// FUNCTION 1425bc5e0 FUN_1425bc5e0 body=242 status=ok
// SIG undefined FUN_1425bc5e0(void)

void FUN_1425bc5e0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
  ::Remove(&DAT_1465340e0,param_1 + 2);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_14511d128;
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



// FUNCTION 1425bc6e0 FUN_1425bc6e0 body=252 status=ok
// SIG undefined FUN_1425bc6e0(void)

void FUN_1425bc6e0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_1425b15b0(param_1 + 2,uVar3);
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_1 + 8) = 0;
  *param_1 = &PTR_FUN_14511d148;
  if (param_1[9] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[9] + 0x48);
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



// FUNCTION 1425bc7e0 FUN_1425bc7e0 body=269 status=ok
// SIG undefined FUN_1425bc7e0(void)

void FUN_1425bc7e0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  undefined8 *local_18;
  undefined8 *local_10;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  local_18 = param_1 + 2;
  local_10 = param_1 + 4;
  FUN_1425ab900(&DAT_1465340e0,local_res8,&local_18,0);
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_14511d138;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
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



// FUNCTION 1425bc8f0 FUN_1425bc8f0 body=1775 status=ok
// SIG undefined FUN_1425bc8f0(void)

void FUN_1425bc8f0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  ushort uVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong lVar17;
  bool bVar18;
  int local_res8 [2];
  longlong local_res10;
  undefined8 *local_res18;
  int local_98;
  int local_94;
  int local_90 [2];
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  if (*(int *)(param_1 + 0xe0) != 0) {
    iVar9 = *(int *)(param_1 + 0x18);
    uVar7 = 0;
    uVar12 = uVar7;
    puVar13 = param_3;
    local_res10 = param_2;
    local_res18 = param_3;
    if (0 < iVar9) {
      do {
        *puVar13 = 0;
        puVar13[1] = 0;
        plVar4 = *(longlong **)(uVar7 + *(longlong *)(param_1 + 0x10));
        (**(code **)(*plVar4 + 0x18))(plVar4,param_2,param_3 + (longlong)(int)uVar12 * 2);
        iVar9 = *(int *)(param_1 + 0x18);
        uVar10 = (int)uVar12 + 1;
        uVar7 = uVar7 + 8;
        uVar12 = (ulonglong)uVar10;
        puVar13 = puVar13 + 2;
      } while ((int)uVar10 < iVar9);
    }
    uVar7 = 0;
    puVar13 = param_3 + (longlong)iVar9 * 2;
    uVar12 = uVar7;
    if (0 < *(int *)(param_1 + 0x28)) {
      do {
        local_58 = 0;
        uStack_50 = 0;
        plVar4 = *(longlong **)(uVar7 + *(longlong *)(param_1 + 0x20));
        (**(code **)(*plVar4 + 0x18))(plVar4,param_2,&local_58);
        uVar7 = uVar7 + 8;
        *(undefined4 *)puVar13 = (undefined4)local_58;
        puVar13 = (undefined8 *)((longlong)puVar13 + 4);
        uVar10 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar10;
      } while ((int)uVar10 < *(int *)(param_1 + 0x28));
    }
    lVar15 = 0;
    iVar9 = 0;
    iVar11 = 0;
    lVar17 = lVar15;
    if (0 < *(int *)(param_1 + 0x38)) {
      do {
        local_88 = 0;
        local_res8[0] = 0;
        plVar4 = *(longlong **)(lVar17 + *(longlong *)(param_1 + 0x30));
        (**(code **)(*plVar4 + 0x48))
                  (plVar4,param_2,*(undefined8 *)(param_2 + 8),&local_88,local_res8);
        uVar7 = (ulonglong)*(ushort *)(lVar15 + *(longlong *)(param_1 + 0xf0));
        uVar3 = *(ushort *)(lVar15 + 2 + *(longlong *)(param_1 + 0xf0));
        if ((local_88 == 0) || (*(longlong *)(local_88 + 0x60) == 0)) {
          *(undefined8 *)(uVar7 + (longlong)param_3) = *(undefined8 *)(DAT_146ac3d68 + 0x30);
          uVar8 = *(undefined8 *)(DAT_146ac3d68 + 0x38);
        }
        else {
          *(undefined8 *)(uVar7 + (longlong)param_3) = *(undefined8 *)(local_88 + 0x98);
          if (local_res8[0] == 1) {
            uVar8 = *(undefined8 *)(DAT_146b09460 + 0x30);
          }
          else if (local_res8[0] == 2) {
            uVar8 = *(undefined8 *)(DAT_146b09468 + 0x30);
          }
          else {
            uVar8 = *(undefined8 *)(*(longlong *)(local_88 + 0x60) + 0x38);
          }
        }
        *(undefined8 *)((ulonglong)uVar3 + (longlong)param_3) = uVar8;
        iVar9 = iVar9 + 2;
        lVar15 = lVar15 + 4;
        iVar11 = iVar11 + 1;
        lVar17 = lVar17 + 8;
      } while (iVar11 < *(int *)(param_1 + 0x38));
    }
    lVar17 = 0;
    iVar11 = 0;
    if (0 < *(int *)(param_1 + 0x48)) {
      lVar15 = (longlong)iVar9 * 2;
      do {
        local_80 = 0;
        local_98 = 0;
        plVar4 = *(longlong **)(lVar17 + *(longlong *)(param_1 + 0x40));
        (**(code **)(*plVar4 + 0x48))
                  (plVar4,param_2,*(undefined8 *)(param_2 + 8),&local_80,&local_98);
        uVar7 = (ulonglong)*(ushort *)(lVar15 + *(longlong *)(param_1 + 0xf0));
        uVar3 = *(ushort *)(lVar15 + 2 + *(longlong *)(param_1 + 0xf0));
        if ((local_80 == 0) || (*(longlong *)(local_80 + 0x60) == 0)) {
          *(undefined8 *)(uVar7 + (longlong)param_3) = *(undefined8 *)(DAT_146ac3e50 + 0x30);
          uVar8 = *(undefined8 *)(DAT_146ac3e50 + 0x38);
        }
        else {
          *(undefined8 *)(uVar7 + (longlong)param_3) = *(undefined8 *)(local_80 + 0x98);
          if (local_98 == 1) {
            uVar8 = *(undefined8 *)(DAT_146b09460 + 0x30);
          }
          else if (local_98 == 2) {
            uVar8 = *(undefined8 *)(DAT_146b09468 + 0x30);
          }
          else {
            uVar8 = *(undefined8 *)(*(longlong *)(local_80 + 0x60) + 0x38);
          }
        }
        *(undefined8 *)((ulonglong)uVar3 + (longlong)param_3) = uVar8;
        iVar9 = iVar9 + 2;
        lVar15 = lVar15 + 4;
        iVar11 = iVar11 + 1;
        lVar17 = lVar17 + 8;
      } while (iVar11 < *(int *)(param_1 + 0x48));
    }
    lVar17 = 0;
    iVar11 = 0;
    if (0 < *(int *)(param_1 + 0x58)) {
      lVar15 = (longlong)iVar9 * 2;
      do {
        local_78 = 0;
        local_94 = 0;
        plVar4 = *(longlong **)(lVar17 + *(longlong *)(param_1 + 0x50));
        (**(code **)(*plVar4 + 0x48))
                  (plVar4,param_2,*(undefined8 *)(param_2 + 8),&local_78,&local_94);
        uVar7 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0xf0) + lVar15);
        uVar3 = *(ushort *)(*(longlong *)(param_1 + 0xf0) + 2 + lVar15);
        if ((local_78 == 0) || (*(longlong *)(local_78 + 0x60) == 0)) {
          *(undefined8 *)(uVar7 + (longlong)param_3) = *(undefined8 *)(DAT_146ac3e30 + 0x30);
          uVar8 = *(undefined8 *)(DAT_146ac3e30 + 0x38);
        }
        else {
          *(undefined8 *)(uVar7 + (longlong)param_3) = *(undefined8 *)(local_78 + 0x98);
          if (local_94 == 1) {
            uVar8 = *(undefined8 *)(DAT_146b09460 + 0x30);
          }
          else if (local_94 == 2) {
            uVar8 = *(undefined8 *)(DAT_146b09468 + 0x30);
          }
          else {
            uVar8 = *(undefined8 *)(*(longlong *)(local_78 + 0x60) + 0x38);
          }
        }
        *(undefined8 *)((ulonglong)uVar3 + (longlong)param_3) = uVar8;
        iVar9 = iVar9 + 2;
        lVar15 = lVar15 + 4;
        iVar11 = iVar11 + 1;
        lVar17 = lVar17 + 8;
      } while (iVar11 < *(int *)(param_1 + 0x58));
    }
    lVar17 = 0;
    iVar11 = 0;
    if (0 < *(int *)(param_1 + 0x68)) {
      lVar15 = (longlong)iVar9 * 2;
      do {
        local_70 = 0;
        local_90[0] = 0;
        plVar4 = *(longlong **)(lVar17 + *(longlong *)(param_1 + 0x60));
        (**(code **)(*plVar4 + 0x48))
                  (plVar4,param_2,*(undefined8 *)(param_2 + 8),&local_70,local_90);
        uVar7 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0xf0) + lVar15);
        uVar3 = *(ushort *)(*(longlong *)(param_1 + 0xf0) + 2 + lVar15);
        if ((local_70 == 0) || (*(longlong *)(local_70 + 0x60) == 0)) {
          *(undefined8 *)(uVar7 + (longlong)param_3) = *(undefined8 *)(DAT_146ac3e20 + 0x30);
          uVar8 = *(undefined8 *)(DAT_146ac3e20 + 0x38);
        }
        else {
          *(undefined8 *)(uVar7 + (longlong)param_3) = *(undefined8 *)(local_70 + 0x98);
          if (local_90[0] == 1) {
            uVar8 = *(undefined8 *)(DAT_146b09460 + 0x30);
          }
          else if (local_90[0] == 2) {
            uVar8 = *(undefined8 *)(DAT_146b09468 + 0x30);
          }
          else {
            uVar8 = *(undefined8 *)(*(longlong *)(local_70 + 0x60) + 0x38);
          }
        }
        *(undefined8 *)((ulonglong)uVar3 + (longlong)param_3) = uVar8;
        iVar9 = iVar9 + 2;
        lVar15 = lVar15 + 4;
        iVar11 = iVar11 + 1;
        lVar17 = lVar17 + 8;
      } while (iVar11 < *(int *)(param_1 + 0x68));
    }
    lVar17 = 0;
    iVar11 = 0;
    if (0 < *(int *)(param_1 + 0x78)) {
      lVar15 = (longlong)iVar9 * 2;
      do {
        local_60 = (undefined8 *)0x0;
        local_68 = (undefined8 *)0x0;
        puVar14 = (undefined8 *)
                  ((ulonglong)*(ushort *)(*(longlong *)(param_1 + 0xf0) + lVar15) +
                  (longlong)local_res18);
        puVar16 = (undefined8 *)
                  ((ulonglong)*(ushort *)(*(longlong *)(param_1 + 0xf0) + 2 + lVar15) +
                  (longlong)local_res18);
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x70) + lVar17);
        cVar5 = (**(code **)(*plVar4 + 0x48))(plVar4,local_res10,&local_60,&local_68);
        puVar13 = local_68;
        if (cVar5 == '\0') {
          *puVar14 = *(undefined8 *)(DAT_146ac3d68 + 0x30);
          *puVar16 = *(undefined8 *)(DAT_146ac3d68 + 0x38);
        }
        else {
          *puVar14 = local_60;
          *puVar16 = local_68;
        }
        iVar9 = iVar9 + 2;
        lVar15 = lVar15 + 4;
        if (local_68 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_68 + 1);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            if ((*(char *)(local_68 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))) {
              LOCK();
              bVar18 = *(int *)((longlong)puVar13 + 0xc) == 0;
              if (bVar18) {
                *(int *)((longlong)puVar13 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar18) {
                uVar10 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar10 == 0) {
                  lVar6 = 0;
                }
                else {
                  lVar6 = (&DAT_1468a81f8)[uVar10 >> 0xe] + (ulonglong)(uVar10 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar6 + 8) = puVar13;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar13)(puVar13,1);
            }
          }
        }
        puVar13 = local_60;
        if (local_60 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_60 + 1);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            if ((*(char *)(local_60 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))) {
              LOCK();
              bVar18 = *(int *)((longlong)puVar13 + 0xc) == 0;
              if (bVar18) {
                *(int *)((longlong)puVar13 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar18) {
                uVar10 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar10 == 0) {
                  lVar6 = 0;
                }
                else {
                  lVar6 = (&DAT_1468a81f8)[uVar10 >> 0xe] + (ulonglong)(uVar10 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar6 + 8) = puVar13;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar13)(puVar13,1);
            }
          }
        }
        iVar11 = iVar11 + 1;
        lVar17 = lVar17 + 8;
        param_3 = local_res18;
      } while (iVar11 < *(int *)(param_1 + 0x78));
    }
    *(undefined8 *)
     ((ulonglong)*(ushort *)(*(longlong *)(param_1 + 0xf0) + (longlong)iVar9 * 2) +
     (longlong)param_3) = *(undefined8 *)(DAT_146b09460 + 0x30);
    *(undefined8 *)
     ((ulonglong)*(ushort *)(*(longlong *)(param_1 + 0xf0) + 2 + (longlong)iVar9 * 2) +
     (longlong)param_3) = *(undefined8 *)(DAT_146b09468 + 0x30);
  }
  return;
}



// FUNCTION 1425bcfe0 FUN_1425bcfe0 body=834 status=ok
// SIG undefined FUN_1425bcfe0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1425bcfe0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char cVar6;
  undefined8 uVar7;
  float *pfVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_1c8 [32];
  undefined4 *local_1a8;
  float *local_1a0;
  undefined4 *local_198;
  undefined8 local_190;
  float local_188;
  uint uStack_184;
  undefined4 local_180;
  undefined8 local_178;
  float local_170;
  undefined1 local_168 [4];
  undefined4 local_164;
  float local_160;
  float local_15c;
  undefined4 local_158;
  undefined8 local_150;
  float local_148;
  undefined1 local_138 [12];
  undefined4 local_12c;
  undefined1 local_a8 [72];
  longlong local_60;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  uVar7 = (**(code **)(*param_1 + 0x148))();
  cVar6 = FUN_1428cdc10(uVar7);
  if (cVar6 == '\0') {
    cVar6 = (**(code **)(*param_1 + 0x6e8))(param_1);
    if (cVar6 != '\0') {
      _guard_xfg_dispatch_icall_nop(local_138,0,0x90);
      lVar1 = param_1[0x8c];
      lVar2 = param_1[0x2d];
      local_12c = 0x3f800000;
      auVar12._0_4_ = *(uint *)(lVar1 + 0x230) & _DAT_146aff450;
      auVar12._4_4_ = *(uint *)(lVar1 + 0x234) & uRam0000000146aff454;
      auVar12._8_4_ = *(uint *)(lVar1 + 0x238) & uRam0000000146aff458;
      auVar12._12_4_ = *(uint *)(lVar1 + 0x23c) & uRam0000000146aff45c;
      auVar13._4_4_ = auVar12._8_4_;
      auVar13._0_4_ = auVar12._4_4_;
      auVar13._8_4_ = auVar12._0_4_;
      auVar13._12_4_ = auVar12._12_4_;
      auVar13 = minps(auVar12,auVar13);
      auVar4._4_4_ = auVar12._0_4_;
      auVar4._0_4_ = auVar12._8_4_;
      auVar4._8_4_ = auVar12._4_4_;
      auVar4._12_4_ = auVar12._12_4_;
      auVar13 = minps(auVar13,auVar4);
      local_188 = auVar13._0_4_;
      fVar11 = auVar13._0_4_ * *(float *)(lVar1 + 0x714);
      if (lVar2 == 0) {
        local_178 = _DAT_1468b5d90;
        pfVar8 = (float *)&local_178;
        local_170 = (float)DAT_1468b5d98;
      }
      else {
        pfVar8 = &local_188;
        local_188 = *(float *)(lVar2 + 0x220);
        local_180 = *(undefined4 *)(lVar2 + 0x228);
        uStack_184 = *(uint *)(lVar2 + 0x224);
      }
      local_150 = *(undefined8 *)pfVar8;
      local_148 = pfVar8[2];
      auVar10._0_4_ = *(uint *)(lVar1 + 0x230) & _DAT_146aff450;
      auVar10._4_4_ = *(uint *)(lVar1 + 0x234) & uRam0000000146aff454;
      auVar10._8_4_ = *(uint *)(lVar1 + 0x238) & uRam0000000146aff458;
      auVar10._12_4_ = *(uint *)(lVar1 + 0x23c) & uRam0000000146aff45c;
      auVar3._4_4_ = auVar10._8_4_;
      auVar3._0_4_ = auVar10._4_4_;
      auVar3._8_4_ = auVar10._0_4_;
      auVar3._12_4_ = auVar10._12_4_;
      auVar13 = minps(auVar10,auVar3);
      auVar5._4_4_ = auVar10._0_4_;
      auVar5._0_4_ = auVar10._8_4_;
      auVar5._8_4_ = auVar10._4_4_;
      auVar5._12_4_ = auVar10._12_4_;
      auVar13 = minps(auVar13,auVar5);
      local_188 = auVar13._0_4_;
      if (lVar2 == 0) {
        local_178 = _DAT_1468b5d90;
        pfVar8 = (float *)&local_178;
        local_170 = (float)DAT_1468b5d98;
      }
      else {
        pfVar8 = &local_188;
        local_188 = *(float *)(lVar2 + 0x220);
        local_180 = *(undefined4 *)(lVar2 + 0x228);
        uStack_184 = *(uint *)(lVar2 + 0x224);
      }
      local_178 = *(undefined8 *)pfVar8;
      local_170 = pfVar8[2] - auVar13._0_4_ * *(float *)(lVar1 + 0x710) * 4.0;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38) < DAT_146b04758) {
        _Init_thread_header(&DAT_146b04758);
        if (DAT_146b04758 == -1) {
          FName::FName(&DAT_146b04750,"NavFindBase",1);
          _Init_thread_footer(&DAT_146b04758);
        }
      }
      local_164 = 1;
      local_158 = 0x3f800000;
      local_188 = 1.4013e-45;
      uStack_184 = uStack_184 & 0xffffff00;
      local_1a8 = (undefined4 *)0x0;
      local_160 = fVar11;
      local_15c = fVar11;
      uVar7 = FUN_1422ffb20(local_a8,DAT_146b04750,local_168,0);
      uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
      local_198 = &local_164;
      local_1a0 = &local_188;
      local_1a8 = &DAT_1464aa810;
      local_190 = uVar7;
      UWorld::SweepSingleByObjectType(uVar9,local_138,&local_150,&local_178);
      if (local_40 != 0) {
        FMemory::Free();
      }
      if (local_60 != 0) {
        FMemory::Free();
      }
      if (param_1[0x8d] != 0) {
        FUN_142398ec0(param_1[0x8d],1);
      }
      if (param_1[0x8e] != 0) {
        FUN_142398ec0(param_1[0x8e],0,1);
      }
    }
  }
  return;
}



// FUNCTION 1425bd330 FUN_1425bd330 body=43 status=ok
// SIG undefined FUN_1425bd330(void)

longlong FUN_1425bd330(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x70);
  plVar1 = plVar3 + *(int *)(param_1 + 0x78);
  while( true ) {
    if (plVar3 == plVar1) {
      return 0;
    }
    lVar2 = *plVar3;
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x44) == param_2)) break;
    plVar3 = plVar3 + 1;
  }
  return lVar2;
}



// FUNCTION 1425bd360 FindId body=119 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)*param_3) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)((longlong)iVar1 * 0x60 + *param_1) == *param_3) {
          *param_2 = iVar1;
          return param_2;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x60 + 0x58 + *param_1);
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1425bd3e0 FUN_1425bd3e0 body=130 status=ok
// SIG undefined FUN_1425bd3e0(void)

undefined8 FUN_1425bd3e0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 local_18;
  longlong *local_10;
  
  FUN_1425e3b20(*(undefined8 *)(param_1 + 0x528),&local_18,param_2);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
    return local_18;
  }
  return local_18;
}



// FUNCTION 1425bd470 FUN_1425bd470 body=557 status=ok
// SIG undefined FUN_1425bd470(void)

ulonglong FUN_1425bd470(undefined8 *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                       longlong *param_5,undefined8 *param_6)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 local_res18 [8];
  undefined8 local_res20;
  longlong local_88 [2];
  undefined1 local_78 [16];
  undefined8 local_68;
  longlong lStack_60;
  ulonglong local_58;
  
  uVar16 = 0;
  *param_1 = 0;
  *param_2 = 0;
  local_res20 = param_4;
  FName::ToString(&local_res20,local_88);
  puVar8 = (undefined8 *)FUN_1425c15b0(local_res18,*(undefined8 *)(param_3 + 0x10),local_res20);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  local_res20 = *puVar8;
  local_68 = 0;
  lStack_60 = 0;
  local_58 = 0;
  uVar9 = FName::ToString(&local_res20,local_78);
  FUN_1425c66e0(&local_68,param_3,param_3,uVar2,uVar9);
  lVar7 = lStack_60;
  if (lStack_60 == 0) goto LAB_1425bd669;
  bVar6 = false;
  if (param_5 != (longlong *)0x0) {
    uVar14 = uVar16;
    uVar15 = uVar16;
    if ((int)param_5[1] < 1) goto LAB_1425bd669;
    do {
      lVar3 = *(longlong *)(*param_5 + uVar15);
      lVar10 = UStructProperty::GetPrivateStaticClass();
      lVar4 = *(longlong *)(lVar7 + 0x10);
      if ((*(int *)(lVar4 + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
          lVar10 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        if (param_6 == (undefined8 *)0x0) goto LAB_1425bd62c;
        if (0 < *(int *)(param_6 + 1)) {
          plVar11 = (longlong *)*param_6;
          uVar12 = uVar16;
          do {
            if (*(longlong *)(*(longlong *)(lVar7 + 0x70) + 0x18) == *plVar11) {
              bVar6 = true;
              break;
            }
            uVar12 = uVar12 + 1;
            plVar11 = plVar11 + 1;
          } while ((longlong)uVar12 < (longlong)*(int *)(param_6 + 1));
        }
      }
      else {
        iVar1 = *(int *)(lVar3 + 0x90);
        if ((*(int *)(lVar4 + 0x90) < iVar1) ||
           (*(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)iVar1 * 8) != lVar3 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) goto LAB_1425bd62c;
      }
      uVar13 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar13;
      uVar15 = uVar15 + 8;
    } while ((int)uVar13 < (int)param_5[1]);
    if (!bVar6) goto LAB_1425bd669;
  }
LAB_1425bd62c:
  *param_2 = lStack_60;
  *param_1 = local_68;
  uVar16 = local_58;
LAB_1425bd669:
  if (local_88[0] != 0) {
    FMemory::Free();
  }
  return uVar16;
}



// FUNCTION 1425bd6a0 FUN_1425bd6a0 body=125 status=ok
// SIG undefined FUN_1425bd6a0(void)

undefined8 FUN_1425bd6a0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char local_res8 [8];
  
  local_res8[0] = '\0';
  puVar2 = (undefined8 *)
           FUN_1425e3cc0(*(undefined8 *)(param_1 + 0x528),param_2,*(undefined8 *)(param_1 + 0x120),
                         local_res8);
  if (puVar2 != (undefined8 *)0x0) {
    if ((local_res8[0] != '\0') &&
       (plVar1 = *(longlong **)(param_1 + 0x520), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x2a0))(plVar1,param_2);
    }
    return *puVar2;
  }
  return 0;
}



// FUNCTION 1425bd720 FUN_1425bd720 body=642 status=ok
// SIG undefined FUN_1425bd720(void)

longlong * FUN_1425bd720(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 uVar10;
  int local_res8 [2];
  int local_res10 [2];
  undefined8 local_res20;
  undefined8 local_78;
  undefined1 local_70 [8];
  longlong *local_68;
  longlong *local_60;
  undefined1 *local_58;
  longlong **local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  FWeakObjectPtr::operator=(&local_res20,param_3);
  plVar2 = (longlong *)(param_1 + 0x300);
  local_78 = local_res20;
  TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
  ::FindId(plVar2,local_res8,&local_78);
  plVar8 = (longlong *)0x0;
  plVar9 = plVar8;
  if (local_res8[0] != -1) {
    plVar9 = (longlong *)((longlong)local_res8[0] * 0x20 + *plVar2);
  }
  plVar6 = plVar9 + 1;
  if (plVar9 == (longlong *)0x0) {
    plVar6 = plVar8;
  }
  if (plVar6 == (longlong *)0x0) {
    lVar4 = *(longlong *)(param_1 + 0xd0);
    if ((lVar4 == 0) || (*(longlong *)(lVar4 + 0x108) != param_1)) {
      uVar10 = 0;
    }
    else {
      uVar10 = 1;
    }
    if (lVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_1428cfb20();
    }
    plVar6 = (longlong *)operator_new(0x38);
    plVar9 = plVar8;
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = (longlong)&PTR_LAB_14511d0e8;
      plVar6[1] = 0;
      plVar6[2] = 0;
      *(undefined1 *)(plVar6 + 3) = uVar10;
      *(undefined1 *)((longlong)plVar6 + 0x19) = uVar5;
      plVar6[4] = 0;
      plVar6[5] = 0;
      *(undefined4 *)(plVar6 + 6) = 0;
      plVar9 = plVar6;
    }
    puVar7 = (undefined8 *)FUN_1425bff60(param_1,local_48,*(undefined8 *)(param_3 + 0x10));
    FUN_14272e2d0(*puVar7,plVar9);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_40 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    FWeakObjectPtr::operator=(local_70,param_3);
    local_68 = plVar9;
    plVar6 = (longlong *)operator_new(0x18);
    if (plVar6 != (longlong *)0x0) {
      *(undefined4 *)(plVar6 + 1) = 1;
      *plVar6 = (longlong)&PTR_FUN_14415dfd8;
      *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
      plVar6[2] = (longlong)plVar9;
      plVar8 = plVar6;
    }
    local_60 = plVar8;
    SharedPointerInternals::EnableSharedFromThis(&local_68,plVar9,plVar9);
    local_58 = local_70;
    local_50 = &local_68;
    FUN_14209b530(plVar2,local_res10,&local_58,0);
    plVar8 = local_60;
    plVar6 = (longlong *)(*plVar2 + (longlong)local_res10[0] * 0x20 + 8);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_60 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
  }
  *param_2 = *plVar6;
  lVar4 = plVar6[1];
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1425bd9b0 FUN_1425bd9b0 body=521 status=ok
// SIG undefined FUN_1425bd9b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1425bd9b0(longlong param_1,undefined8 param_2,undefined4 *param_3,longlong param_4,
                      longlong param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong local_c8;
  undefined4 local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  longlong local_60 [2];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  lVar1 = param_4 + 0x328;
  local_d8 = param_6;
  lVar5 = *(longlong *)(param_4 + 0x20);
  if (*(code **)(*(longlong *)(param_4 + 0x20) + 0x40) == AK::MemoryMgr::StartProfileThreadUsage) {
    lVar5 = 0;
  }
  local_e0 = param_2;
  local_e8 = FUN_1419ee150(lVar1,lVar5,0);
  if ((param_5 != 0) && (*(char *)(param_5 + 0x6c) == '\0')) {
    param_5 = 0;
  }
  local_f8 = *(undefined4 *)(param_4 + 0x30);
  local_108 = *(undefined8 *)(param_4 + 0x20);
  local_100 = 0;
  uVar4 = FUN_1419d78c0(&local_c8,param_3,param_5,*(undefined8 *)(param_4 + 0x18));
  lVar5 = FShaderType::FindShaderById(*(undefined8 *)(param_4 + 0x20),uVar4);
  if (lVar5 == 0) {
    local_c0 = *(undefined4 *)(param_4 + 0x398);
    plVar2 = (longlong *)(param_4 + 0x3a8);
    uVar4 = *(undefined8 *)(param_4 + 0x18);
    local_c8 = param_1;
    if (*(int *)(param_4 + 0x3a0) != -1) {
      *(int *)(param_4 + 0x3a0) = *(int *)(param_4 + 0x3a0) + 4;
      iVar3 = *(int *)(param_4 + 0x3b0);
      *(int *)(param_4 + 0x3b0) = iVar3 + 4;
      if (*(int *)(param_4 + 0x3b4) < iVar3 + 4) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar2,iVar3);
      }
      *(undefined4 *)((longlong)iVar3 + *plVar2) = *(undefined4 *)(param_4 + 0x3a0);
      *(undefined4 *)(param_4 + 0x3a0) = 0xffffffff;
    }
    local_98 = *param_3;
    uStack_94 = param_3[1];
    uStack_90 = param_3[2];
    uStack_8c = param_3[3];
    local_a8 = param_4 + 0x3b8;
    local_a0 = local_e8;
    local_88 = param_3[4];
    local_68 = local_e0;
    local_70 = 0;
    local_b8 = plVar2;
    local_b0 = lVar1;
    local_80 = param_5;
    local_78 = uVar4;
    FString::FString(local_60,local_d8);
    local_50 = uVar4;
    lVar5 = (**(code **)(param_1 + 0x130))(&local_c8);
    if (local_60[0] != 0) {
      FMemory::Free();
    }
    AK::MemoryMgr::StartProfileThreadUsage((long)lVar1);
  }
  return lVar5;
}



// FUNCTION 1425bdbc0 FinishDestroy body=50 status=ok
// SIG undefined FinishDestroy(void)

void UMaterialParameterCollectionInstance::FinishDestroy(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1425beac0();
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  FUN_141755460(param_1);
  return;
}



// FUNCTION 1425bdc00 FinishDestroy body=41 status=ok
// SIG undefined FinishDestroy(void)

void UNetConnection::FinishDestroy(longlong *param_1)

{
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    (**(code **)(*param_1 + 0x300))();
  }
  FUN_141755460(param_1);
  return;
}



// FUNCTION 1425bdc30 FUN_1425bdc30 body=324 status=ok
// SIG undefined FUN_1425bdc30(void)

void FUN_1425bdc30(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    if ((DAT_146b17150 != 0) && ((int)param_1[0xa7] != 0)) {
      *(undefined4 *)(param_1 + 0xa7) = 0;
      FUN_1425b4010(DAT_146b17150,param_1[0x1a],param_1,0);
    }
    if ((longlong *)param_1[0x12] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0x12] + 0x300))();
    }
    iVar3 = (int)param_1[0x14];
    while (iVar3 != 0) {
      (**(code **)(**(longlong **)param_1[0x13] + 0x300))();
      iVar3 = (int)param_1[0x14];
    }
    (**(code **)(*param_1 + 0x2c8))(param_1);
    local_10 = (longlong *)0x0;
    if (param_1 + 0x1c != &local_18) {
      param_1[0x1c] = 0;
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1d,&local_10);
      plVar5 = local_10;
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_10 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
    }
    TBaseMulticastDelegate<void>::Remove(&DAT_146535808,param_1[0xa2]);
    TBaseMulticastDelegate<void>::Remove(&DAT_1465357f0,param_1[0xa3]);
  }
  FUN_141755460(param_1);
  return;
}



// FUNCTION 1425bdd80 FUN_1425bdd80 body=155 status=ok
// SIG undefined FUN_1425bdd80(void)

void FUN_1425bdd80(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  longlong lVar5;
  
  lVar2 = DAT_146aff520;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    if (DVar4 != DAT_1468c21c0) {
      lVar5 = 4;
      goto LAB_1425bddd9;
    }
  }
  lVar5 = 0;
LAB_1425bddd9:
  if (*(int *)(lVar5 + lVar2) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x520);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x2b8))(plVar1,param_2,param_3);
    }
    FUN_1425bde20(param_1,param_2);
  }
  return;
}



// FUNCTION 1425bde20 FUN_1425bde20 body=111 status=ok
// SIG undefined FUN_1425bde20(void)

void FUN_1425bde20(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xa0)) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0x98));
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x358))(plVar1,param_2);
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(param_1 + 0xa0));
  }
  return;
}



// FUNCTION 1425bde90 FUN_1425bde90 body=372 status=ok
// SIG undefined FUN_1425bde90(void)

void FUN_1425bde90(longlong param_1,longlong param_2)

{
  uint *puVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint local_res8;
  uint uStackX_c;
  
  cVar3 = FNetworkObjectList::MarkActive
                    (*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x528),param_2,param_1,
                     *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x120));
  uVar6 = 0;
  if (cVar3 != '\0') {
    FUN_1425be010(param_1,param_2);
    plVar5 = *(longlong **)(param_2 + 0x300);
    uVar7 = (longlong)*(int *)(param_2 + 0x308) & 0x1fffffffffffffff;
    if (plVar5 + *(int *)(param_2 + 0x308) < plVar5) {
      uVar7 = uVar6;
    }
    if (uVar7 != 0) {
      do {
        if ((*plVar5 != 0) && ((*(byte *)(*plVar5 + 0xb8) & 8) != 0)) {
          FUN_1425be010(param_1);
        }
        plVar5 = plVar5 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar7);
    }
  }
  FWeakObjectPtr::operator=(&local_res8,param_2);
  if (*(int *)(param_1 + 0x1608) != *(int *)(param_1 + 0x1634)) {
    lVar8 = *(longlong *)(param_1 + 0x1640);
    if (*(longlong *)(param_1 + 0x1640) == 0) {
      lVar8 = param_1 + 0x1638;
    }
    iVar4 = *(int *)(lVar8 + ((longlong)(int)(uStackX_c ^ local_res8) &
                             (longlong)*(int *)(param_1 + 0x1648) - 1U) * 4);
    if (iVar4 != -1) {
      lVar8 = *(longlong *)(param_1 + 0x1600);
      while ((lVar2 = (longlong)iVar4 * 0x18,
             *(uint *)(lVar8 + (longlong)iVar4 * 0x18) != local_res8 ||
             (*(uint *)(lVar8 + 4 + lVar2) != uStackX_c))) {
        iVar4 = *(int *)(lVar8 + 0x10 + lVar2);
        if (iVar4 == -1) {
          return;
        }
      }
      if (((iVar4 != -1) && (lVar8 + lVar2 != 0)) &&
         (lVar8 = *(longlong *)(lVar8 + lVar2 + 8), lVar8 != 0)) {
        puVar1 = (uint *)(lVar8 + 0x30);
        *puVar1 = *puVar1 & 0xffffff7b;
      }
    }
  }
  return;
}



// FUNCTION 1425be010 FUN_1425be010 body=721 status=ok
// SIG undefined FUN_1425be010(void)

void FUN_1425be010(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  int local_res8 [2];
  int local_res18 [2];
  undefined8 local_res20;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  longlong *local_40;
  undefined1 *local_38;
  longlong **local_30;
  
  plVar10 = (longlong *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b04780) && (_Init_thread_header(&DAT_146b04780), DAT_146b04780 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"net.DormancyValidate")
    ;
    plVar8 = plVar10;
    if (plVar9 != (longlong *)0x0) {
      plVar8 = (longlong *)(**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146b04778 = plVar8;
    _Init_thread_footer(&DAT_146b04780);
  }
  plVar8 = DAT_146b04778;
  if (DAT_146b04778 != (longlong *)0x0) {
    cVar5 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar5 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar6 = GetCurrentThreadId();
      plVar9 = (longlong *)&DAT_00000004;
      if (DVar6 == DAT_1468c21c0) goto LAB_1425be08f;
    }
    else {
LAB_1425be08f:
      plVar9 = plVar10;
    }
    if (*(int *)((longlong)plVar9 + (longlong)plVar8) == 1) {
      bVar3 = true;
      goto LAB_1425be09e;
    }
  }
  bVar3 = false;
LAB_1425be09e:
  FWeakObjectPtr::operator=(&local_res20,param_2);
  local_68 = local_res20;
  TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x16f8,local_res8,&local_68);
  plVar8 = plVar10;
  if (local_res8[0] != -1) {
    plVar8 = (longlong *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0x16f8));
  }
  plVar9 = plVar8 + 1;
  if (plVar8 == (longlong *)0x0) {
    plVar9 = plVar10;
  }
  if (plVar9 != (longlong *)0x0) {
    if (bVar3) {
      FObjectReplicator::ValidateAgainstState(*plVar9,param_2);
    }
    FWeakObjectPtr::operator=(&local_60,param_2);
    local_58 = local_60;
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 0x16f8,&local_58);
  }
  lVar7 = operator_new(0x368);
  plVar8 = plVar10;
  if (lVar7 != 0) {
    plVar8 = (longlong *)FObjectReplicator::FObjectReplicator(lVar7);
  }
  FWeakObjectPtr::operator=(local_50,param_2);
  local_48 = plVar8;
  plVar9 = (longlong *)operator_new(0x18);
  if (plVar9 != (longlong *)0x0) {
    *(undefined4 *)(plVar9 + 1) = 1;
    *plVar9 = (longlong)&PTR_DestroyObject_145098af8;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    plVar9[2] = (longlong)plVar8;
    plVar10 = plVar9;
  }
  local_40 = plVar10;
  SharedPointerInternals::EnableSharedFromThis(&local_48,plVar8,plVar8);
  local_38 = local_50;
  local_30 = &local_48;
  FUN_1425ab3e0(param_1 + 0x16f8,local_res18,&local_38,0);
  plVar10 = local_40;
  lVar7 = *(longlong *)(param_1 + 0x16f8);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_40 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  FUN_1423f1670(*(undefined8 *)((longlong)local_res18[0] * 0x20 + lVar7 + 8),param_2,param_1,0);
  lVar7 = *(longlong *)(param_1 + 0x68);
  if (lVar7 != 0) {
    *(undefined4 *)(lVar7 + 0x328) = 0;
    if (*(int *)(lVar7 + 0x32c) != 0) {
      TArray<float,FDefaultAllocator>::ResizeTo(lVar7 + 800,0);
    }
  }
  return;
}



// FUNCTION 1425be2f0 FUN_1425be2f0 body=245 status=ok
// SIG undefined FUN_1425be2f0(void)

void FUN_1425be2f0(longlong *param_1)

{
  void *_Src;
  longlong *plVar1;
  longlong lVar2;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  plVar1 = (longlong *)PacketHandler::GetQueuedConnectionlessPacket(param_1[0x15]);
  while (plVar1 != (longlong *)0x0) {
    local_10 = (int)plVar1[4];
    lVar2 = (longlong)local_10;
    _Src = (void *)plVar1[3];
    local_18 = (void *)0x0;
    if (local_10 == 0) {
      local_c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
      _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar2 * 2);
    }
    (**(code **)(*param_1 + 0x308))(param_1,&local_18,*plVar1,(int)plVar1[1]);
    if (*plVar1 != 0) {
      FMemory::operator_delete(*plVar1,1);
    }
    if (plVar1[3] != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(plVar1,0x30);
    plVar1 = (longlong *)PacketHandler::GetQueuedConnectionlessPacket(param_1[0x15]);
  }
  return;
}



// FUNCTION 1425be410 FUN_1425be410 body=1086 status=ok
// SIG undefined FUN_1425be410(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1425be410(longlong *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  float fVar3;
  char cVar4;
  DWORD DVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  LARGE_INTEGER local_res8;
  uint local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (**(code **)(*param_1 + 0x2a8))();
  uVar8 = local_28 >> 8;
  local_28 = local_28 & 0xffffff00;
  *(undefined1 *)((longlong)param_1 + 0x241) = 0;
  *(uint *)(param_1 + 0x46) = local_28;
  *(undefined4 *)((longlong)param_1 + 0x234) = uStack_24;
  *(undefined4 *)(param_1 + 0x47) = 0;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0;
  lVar11 = DAT_146aff4a0;
  if ((param_1[0xaa] != 0) ||
     ((((double)*(float *)(param_1[0xb] + 0x74) <
        (double)*(float *)(param_1[0xb] + 0x170) - (double)param_1[0x40] &&
       ((*(byte *)((longlong)param_1 + 0xa4) & 1) == 0)) && (*(int *)((longlong)param_1 + 300) != 1)
      ))) {
    if ((((*(byte *)((longlong)param_1 + 0xa4) & 1) == 0) &&
        (*(longlong *)(param_1[0xb] + 0x90) == 0)) &&
       (*(int *)param_1[0x2b4] == *(int *)((longlong)param_1 + 0x15e4))) {
      cVar4 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar4 == '\0') && (DAT_1468c21ae != '\0')) &&
         (DVar5 = GetCurrentThreadId(), DVar5 != DAT_1468c21c0)) {
        lVar7 = 4;
      }
      else {
        lVar7 = 0;
      }
      if (*(int *)(lVar7 + lVar11) != 0) {
        (**(code **)(*param_1 + 0x2f8))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001425be521. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x2b0))(param_1);
        return;
      }
    }
    if (param_1[0xaa] == 0) {
      (**(code **)(*param_1 + 0x2a8))(param_1);
      lVar11 = param_1[0xaa];
      iVar9 = 0x28;
      iVar6 = 0x28;
      if (0 < lVar11) {
        iVar6 = 1;
      }
      if (((int)param_1[0xab] - iVar6) - (int)lVar11 < 0) {
        (**(code **)(*param_1 + 0x2c8))(param_1,0);
        lVar11 = param_1[0xaa];
      }
      uStack_20 = (undefined4)lVar11;
      uStack_1c = (undefined4)((ulonglong)lVar11 >> 0x20);
      *(uint *)(param_1 + 0x44) = CONCAT31((int3)uVar8,*(byte *)(param_1 + 0x9b) >> 7);
      *(undefined4 *)((longlong)param_1 + 0x224) = uStack_24;
      *(undefined4 *)(param_1 + 0x45) = uStack_20;
      *(undefined4 *)((longlong)param_1 + 0x22c) = uStack_1c;
      if ((lVar11 == 0) && ((*(byte *)((longlong)param_1 + 0xa4) & 1) == 0)) {
        if (*(char *)((longlong)param_1 + 0x193c) != '\0') {
          (**(code **)(param_1[0x96] + 0x50))(param_1 + 0x96,(longlong)param_1 + 0x193d,3);
        }
        FBitWriter::WriteIntWrapped(param_1 + 0x96,(int)param_1[0x2ae],0x4000);
        (**(code **)(*param_1 + 0x2a8))(param_1);
        iVar6 = (int)param_1[0x23] + (int)param_1[0xaa];
        *(int *)(param_1 + 0x23) = iVar6;
        if (*(char *)((longlong)param_1 + 0x193c) != '\0') {
          *(int *)(param_1 + 0x23) = iVar6 + -0x18;
        }
      }
      if (0 < param_1[0xaa]) {
        iVar9 = 1;
      }
      if ((int)param_1[0xab] - iVar9 == (int)param_1[0xaa]) {
        (**(code **)(*param_1 + 0x2c8))(param_1,0);
      }
    }
    if (param_1[0x27] != 0) {
      AK::MemoryMgr::StartProfileThreadUsage((long)param_1[0x27]);
    }
    FBitWriter::WriteBit(param_1 + 0x96,1);
    (**(code **)(*param_1 + 0x2a8))(param_1);
    cVar4 = (**(code **)(*(longlong *)param_1[0xb] + 0x390))();
    if (cVar4 != '\0') {
      (**(code **)(*param_1 + 0x2a0))
                (param_1,param_1[0xa8],param_1[0xaa] + 7 >> 3,(int)param_1[0xaa]);
    }
    uVar10 = (ulonglong)(*(uint *)(param_1 + 0x2ae) & 0xff);
    *(uint *)((longlong)param_1 + uVar10 * 4 + 0xd68) = *(uint *)(param_1 + 0x2ae);
    QueryPerformanceCounter(&local_res8);
    param_1[uVar10 + 0xad] = (longlong)((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0);
    uVar8 = (int)param_1[0x92] >> 0x1f & 0x3ff;
    *(int *)((longlong)param_1 + uVar10 * 4 + 0x1168) = (int)((int)param_1[0x92] + uVar8) >> 10;
    *(int *)(param_1 + 0x2ae) = (int)param_1[0x2ae] + 1;
    *(int *)(param_1 + 0x90) = (int)param_1[0x90] + 1;
    *(int *)(param_1 + 0x91) = (int)param_1[0x91] + 1;
    *(int *)(param_1[0xb] + 0x1a4) = *(int *)(param_1[0xb] + 0x1a4) + 1;
    FHistogram::AddMeasurement
              (param_1 + 0x300,uVar8,
               SUB84(((double)*(float *)(param_1[0xb] + 0x170) - (double)param_1[0x40]) * 1000.0,0))
    ;
    fVar3 = *(float *)(param_1[0xb] + 0x170);
    iVar6 = (int)(param_1[0xaa] + 7 >> 3) + (int)param_1[0x30];
    *(int *)(param_1 + 0x8e) = (int)param_1[0x8e] + iVar6;
    *(int *)(param_1 + 0x8f) = (int)param_1[0x8f] + iVar6;
    *(int *)(param_1 + 0x42) = (int)param_1[0x42] + iVar6 * 8;
    param_1[0x40] = (longlong)(double)fVar3;
    piVar1 = (int *)(param_1[0xb] + 0x194);
    *piVar1 = *piVar1 + iVar6;
    _DAT_146afefe8 = _DAT_146afefe8 + iVar6;
    (**(code **)(*param_1 + 0x2b0))(param_1);
  }
  iVar6 = 0;
  if (0 < (int)param_1[0x2b9]) {
    lVar11 = 0;
    do {
      iVar9 = (int)param_1[699];
      lVar7 = param_1[0x2b8];
      *(int *)(param_1 + 699) = iVar9 + 1;
      if (*(int *)((longlong)param_1 + 0x15dc) < iVar9 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x2ba,iVar9);
      }
      puVar2 = (undefined4 *)(lVar11 + lVar7);
      iVar6 = iVar6 + 1;
      lVar11 = lVar11 + 4;
      *(undefined4 *)(param_1[0x2ba] + (longlong)iVar9 * 4) = *puVar2;
    } while (iVar6 < (int)param_1[0x2b9]);
  }
  *(undefined4 *)(param_1 + 0x2b9) = 0;
  if (*(int *)((longlong)param_1 + 0x15cc) != 0x20) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x2b8,0x20);
  }
  return;
}



// FUNCTION 1425be850 FlushNetDormancy body=83 status=ok
// SIG undefined FlushNetDormancy(void)

void UReplicationDriver::FlushNetDormancy(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             0x50,L"Pure virtual not implemented (%s)",L"UReplicationDriver::FlushNetDormancy");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             0x50,L"Pure virtual not implemented (%s)",L"UReplicationDriver::FlushNetDormancy");
  return;
}



// FUNCTION 1425be8b0 FUN_1425be8b0 body=143 status=ok
// SIG undefined FUN_1425be8b0(void)

void FUN_1425be8b0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  
  if (*(longlong **)(param_1 + 0x520) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001425be8d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x520) + 0x2b0))();
    return;
  }
  lVar1 = FUN_1425bd3e0(param_1);
  if (lVar1 != 0) {
    if (*(longlong *)(param_1 + 0xd0) == 0) {
      lVar2 = (**(code **)(*param_2 + 0x148))(param_2);
      fVar3 = *(float *)(lVar2 + 0x790);
    }
    else {
      fVar3 = *(float *)(*(longlong *)(param_1 + 0xd0) + 0x790);
    }
    *(double *)(lVar1 + 0x10) = (double)(fVar3 - 0.01);
  }
  return;
}



// FUNCTION 1425be940 ForceNetUpdate body=83 status=ok
// SIG undefined ForceNetUpdate(void)

void UReplicationDriver::ForceNetUpdate(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             0x4e,L"Pure virtual not implemented (%s)",L"UReplicationDriver::ForceNetUpdate");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             0x4e,L"Pure virtual not implemented (%s)",L"UReplicationDriver::ForceNetUpdate");
  return;
}



// FUNCTION 1425be9a0 FUN_1425be9a0 body=283 status=ok
// SIG undefined FUN_1425be9a0(void)

void FUN_1425be9a0(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint local_res8;
  uint uStackX_c;
  
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0xa0)) {
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar5 + *(longlong *)(param_1 + 0x98));
      if ((lVar2 != 0) &&
         (FWeakObjectPtr::operator=(&local_res8,param_2),
         *(int *)(lVar2 + 0x1608) != *(int *)(lVar2 + 0x1634))) {
        lVar4 = *(longlong *)(lVar2 + 0x1640);
        if (*(longlong *)(lVar2 + 0x1640) == 0) {
          lVar4 = lVar2 + 0x1638;
        }
        iVar3 = *(int *)(lVar4 + ((longlong)(int)(uStackX_c ^ local_res8) &
                                 (longlong)*(int *)(lVar2 + 0x1648) - 1U) * 4);
        if (iVar3 != -1) {
          lVar2 = *(longlong *)(lVar2 + 0x1600);
          do {
            lVar4 = (longlong)iVar3 * 0x18;
            if ((*(uint *)(lVar4 + lVar2) == local_res8) &&
               (*(uint *)(lVar4 + 4 + lVar2) == uStackX_c)) {
              if ((iVar3 != -1) &&
                 ((lVar4 + lVar2 != 0 && (lVar2 = *(longlong *)(lVar4 + lVar2 + 8), lVar2 != 0)))) {
                puVar1 = (uint *)(lVar2 + 0x88);
                *puVar1 = *puVar1 | 2;
              }
              break;
            }
            iVar3 = *(int *)(lVar4 + 0x10 + lVar2);
          } while (iVar3 != -1);
        }
      }
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar6 < *(int *)(param_1 + 0xa0));
  }
  return;
}



// FUNCTION 1425beac0 FUN_1425beac0 body=282 status=ok
// SIG undefined FUN_1425beac0(void)

void FUN_1425beac0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  DWORD DVar8;
  longlong *plVar9;
  undefined1 local_28 [32];
  
  if (((DAT_146ac3ac6 != '\0') && (cVar7 = IsInRenderingThread(), cVar7 != '\0')) ||
     ((DAT_146ac3ac5 == '\0' &&
      (((cVar7 = FUN_1415ad720(&DAT_1468e2448), cVar7 != '\0' || (DAT_1468c21ae == '\0')) ||
       (DVar8 = GetCurrentThreadId(), DVar8 == DAT_1468c21c0)))))) {
    FBaseGraphTask::GetSmallTaskAllocator();
    if (param_1 == 0) {
      return;
    }
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x18,0);
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FMemory::Free();
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x18);
    FMemory::operator_delete(param_1,0x58);
    return;
  }
  plVar9 = (longlong *)FUN_1425baba0(local_28,0,0xff);
  *(longlong *)(*plVar9 + 0x10) = param_1;
  lVar3 = *plVar9;
  lVar6 = plVar9[2];
  lVar4 = plVar9[1];
  lVar5 = *(longlong *)(lVar3 + 0x20);
  piVar1 = (int *)(lVar5 + 0x48);
  if (lVar5 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_140445100(lVar3,lVar4,(int)lVar6,1);
  if (lVar5 == 0) {
    return;
  }
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 != 1) {
    return;
  }
  FGraphEvent::Recycle(lVar5);
  return;
}



// FUNCTION 1425bebe0 FUN_1425bebe0 body=598 status=ok
// SIG undefined FUN_1425bebe0(void)

void FUN_1425bebe0(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  DWORD DVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  void *_Src_00;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [32];
  
  local_c8 = *param_2;
  uStack_c4 = param_2[1];
  uStack_c0 = param_2[2];
  uStack_bc = param_2[3];
  local_b0 = *(int *)(param_3 + 1);
  lVar10 = (longlong)local_b0;
  _Src = (void *)*param_3;
  _Src_00 = (void *)0x0;
  local_b8 = (void *)0x0;
  if (local_b0 == 0) {
    local_ac = 0;
  }
  else {
    local_98 = local_c8;
    uStack_94 = uStack_c4;
    uStack_90 = uStack_c0;
    uStack_8c = uStack_bc;
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_b8,local_b0,0);
    _Src_00 = local_b8;
    _guard_xfg_dispatch_icall_nop(local_b8,_Src,lVar10 << 4);
  }
  iVar2 = local_b0;
  uVar8 = *param_4;
  local_a8 = uVar8;
  local_a0 = param_1;
  local_98 = local_c8;
  uStack_94 = uStack_c4;
  uStack_90 = uStack_c0;
  uStack_8c = uStack_bc;
  if ((DAT_146ac3ac6 == '\0') || (cVar6 = IsInRenderingThread(), cVar6 == '\0')) {
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar6 = FUN_1415ad720(&DAT_1468e2448), cVar6 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar7 = GetCurrentThreadId(), DVar7 == DAT_1468c21c0)))) {
      local_78 = (void *)0x0;
      local_88 = local_98;
      uStack_84 = uStack_94;
      uStack_80 = uStack_90;
      uStack_7c = uStack_8c;
      local_70 = iVar2;
      if (iVar2 == 0) {
        local_6c = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_78,iVar2,0);
        _guard_xfg_dispatch_icall_nop(local_78,_Src_00,(longlong)iVar2 << 4);
      }
      local_68 = uVar8;
      local_60 = param_1;
      uVar8 = FBaseGraphTask::GetSmallTaskAllocator();
      FUN_1425b15b0(&local_88,uVar8);
      if (local_78 != (void *)0x0) {
        FMemory::Free();
      }
    }
    else {
      plVar9 = (longlong *)FUN_1425baf90(local_58,0,0xff);
      lVar10 = *plVar9;
      *(undefined4 *)(lVar10 + 0x10) = local_98;
      *(undefined4 *)(lVar10 + 0x14) = uStack_94;
      *(undefined4 *)(lVar10 + 0x18) = uStack_90;
      *(undefined4 *)(lVar10 + 0x1c) = uStack_8c;
      *(undefined8 *)(lVar10 + 0x20) = 0;
      *(int *)(lVar10 + 0x28) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(lVar10 + 0x2c) = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(lVar10 + 0x20,iVar2,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(lVar10 + 0x20),_Src_00,(longlong)iVar2 << 4);
      }
      *(undefined8 *)(lVar10 + 0x30) = uVar8;
      *(undefined8 *)(lVar10 + 0x38) = param_1;
      lVar10 = *plVar9;
      lVar5 = plVar9[2];
      lVar3 = plVar9[1];
      lVar4 = *(longlong *)(lVar10 + 0x48);
      piVar1 = (int *)(lVar4 + 0x48);
      if (lVar4 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        _Src_00 = local_b8;
      }
      FUN_140489ef0(lVar10,lVar3,(int)lVar5,1);
      if (lVar4 != 0) {
        LOCK();
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        _Src_00 = local_b8;
        if (iVar2 == 1) {
          FGraphEvent::Recycle(lVar4);
          _Src_00 = local_b8;
        }
      }
    }
  }
  else {
    uVar8 = FBaseGraphTask::GetSmallTaskAllocator();
    FUN_1425b15b0(&local_c8,uVar8);
    _Src_00 = local_b8;
  }
  if (_Src_00 != (void *)0x0) {
    FMemory::Free(_Src_00);
  }
  return;
}



// FUNCTION 1425bee40 FUN_1425bee40 body=123 status=ok
// SIG undefined FUN_1425bee40(void)

undefined8 * FUN_1425bee40(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b04720) {
    _Init_thread_header(&DAT_146b04720);
    if (DAT_146b04720 == -1) {
      FName::FName(&DAT_146b04718,"Editor",1);
      _Init_thread_footer(&DAT_146b04720);
    }
  }
  *param_2 = DAT_146b04718;
  return param_2;
}



// FUNCTION 1425beec0 FUN_1425beec0 body=123 status=ok
// SIG undefined FUN_1425beec0(void)

undefined8 * FUN_1425beec0(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b04710) {
    _Init_thread_header(&DAT_146b04710);
    if (DAT_146b04710 == -1) {
      FName::FName(&DAT_146b04708,"Project",1);
      _Init_thread_footer(&DAT_146b04710);
    }
  }
  *param_2 = DAT_146b04708;
  return param_2;
}



// FUNCTION 1425bef70 GetExternalTexture body=92 status=ok
// SIG undefined GetExternalTexture(void)

void FMaterialUniformExpressionExternalTexture::GetExternalTexture
               (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 local_28 [8];
  undefined1 local_20;
  undefined1 local_18 [16];
  
  local_20 = 0;
  FUN_1425cbcd0(param_1,local_18,param_2,local_28);
  uVar1 = FExternalTextureRegistry::Get();
  FUN_14244f210(uVar1,*param_2,local_18,param_3,param_4);
  return;
}



// FUNCTION 1425befd0 GetExternalTexture body=101 status=ok
// SIG undefined GetExternalTexture(void)

void FMaterialUniformExpressionExternalTextureParameter::GetExternalTexture
               (longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined1 local_20;
  undefined1 local_18 [16];
  
  local_28 = *(undefined8 *)(param_1 + 0x28);
  local_20 = 1;
  FUN_1425cbcd0(param_1,local_18,param_2,&local_28);
  uVar1 = FExternalTextureRegistry::Get();
  FUN_14244f210(uVar1,*param_2,local_18,param_3,param_4);
  return;
}



// FUNCTION 1425bf040 FUN_1425bf040 body=483 status=ok
// SIG undefined FUN_1425bf040(void)

longlong * FUN_1425bf040(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  int local_res8 [2];
  int local_res10 [4];
  undefined8 local_res20;
  undefined8 local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  longlong *local_50;
  undefined1 *local_48;
  longlong **local_40;
  
  FWeakObjectPtr::operator=(&local_res20,param_3);
  local_68 = local_res20;
  TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x358,local_res8,&local_68);
  plVar6 = (longlong *)0x0;
  plVar4 = plVar6;
  if (local_res8[0] != -1) {
    plVar4 = (longlong *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0x358));
  }
  plVar5 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar5 = plVar6;
  }
  if (plVar5 == (longlong *)0x0) {
    lVar3 = operator_new(0xa0);
    plVar4 = plVar6;
    if (lVar3 != 0) {
      plVar4 = (longlong *)FUN_1425ad910(lVar3);
    }
    FUN_14272e430(plVar4,param_3,*(undefined8 *)(param_1 + 0x90));
    FWeakObjectPtr::operator=(local_60,param_3);
    local_58 = plVar4;
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      plVar5[2] = (longlong)plVar4;
      plVar6 = plVar5;
    }
    local_50 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_58,plVar4,plVar4);
    local_48 = local_60;
    local_40 = &local_58;
    FUN_14209b530(param_1 + 0x358,local_res10,&local_48,0);
    plVar6 = local_50;
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x358) + (longlong)local_res10[0] * 0x20 + 8);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_50 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
  *param_2 = *plVar5;
  lVar3 = plVar5[1];
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1425bf230 FUN_1425bf230 body=230 status=ok
// SIG undefined FUN_1425bf230(void)

void FUN_1425bf230(longlong param_1,longlong param_2,int *param_3)

{
  int *piVar1;
  bool bVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  
  for (; param_2 != 0; param_2 = *(longlong *)(param_2 + 0x90)) {
    lVar3 = FUN_1429b6de0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) break;
    piVar4 = *(int **)(param_2 + 0xa0);
    piVar1 = piVar4 + (longlong)*(int *)(param_2 + 0xa8) * 10;
    if (piVar4 != piVar1) {
      do {
        if ((*piVar4 == *(int *)(param_1 + 0x10)) && (piVar4[1] == *(int *)(param_1 + 0x14))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (((bVar2) && (*(char *)((longlong)piVar4 + 0xb) == *(char *)(param_1 + 0x1b))) &&
           (piVar4[3] == *(int *)(param_1 + 0x1c))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          iVar5 = piVar4[4];
          goto LAB_1425bf302;
        }
        piVar4 = piVar4 + 10;
      } while (piVar4 != piVar1);
    }
  }
  iVar5 = *(int *)(param_1 + 0x20);
LAB_1425bf302:
  *param_3 = iVar5;
  return;
}



// FUNCTION 1425bf320 FUN_1425bf320 body=251 status=ok
// SIG undefined FUN_1425bf320(void)

void FUN_1425bf320(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  bool bVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  
  for (; param_2 != 0; param_2 = *(longlong *)(param_2 + 0x90)) {
    lVar3 = FUN_1429b6de0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) break;
    piVar4 = *(int **)(param_2 + 0xb0);
    piVar5 = piVar4 + (longlong)*(int *)(param_2 + 0xb8) * 0xc;
    if (piVar4 != piVar5) {
      do {
        if (*piVar4 == *(int *)(param_1 + 0x10)) {
          if (piVar4[1] != *(int *)(param_1 + 0x14)) goto LAB_1425bf3b7;
          bVar2 = true;
        }
        else {
LAB_1425bf3b7:
          bVar2 = false;
        }
        if ((bVar2) && (*(char *)((longlong)piVar4 + 0xb) == *(char *)(param_1 + 0x1b))) {
          if (piVar4[3] != *(int *)(param_1 + 0x1c)) goto LAB_1425bf3d2;
          bVar2 = true;
        }
        else {
LAB_1425bf3d2:
          bVar2 = false;
        }
        if (bVar2) {
          uVar1 = *(undefined8 *)(piVar4 + 6);
          *param_3 = *(undefined8 *)(piVar4 + 4);
          param_3[1] = uVar1;
          return;
        }
        piVar4 = piVar4 + 0xc;
      } while (piVar4 != piVar5);
    }
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *param_3 = *(undefined8 *)(param_1 + 0x20);
  param_3[1] = uVar1;
  return;
}



// FUNCTION 1425bf420 GetInteraction body=129 status=ok
// SIG undefined GetInteraction(void)

int * FModelSceneProxy::FElementInfo::GetInteraction
                (longlong param_1,int *param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_14274fa70(param_1,param_3,param_1 + 0x30);
  if (iVar2 != 4) {
    *param_2 = iVar2;
    return param_2;
  }
  cVar1 = (**(code **)(*param_3 + 8))(param_3,param_1 + 0x40);
  if (cVar1 != '\0') {
    *param_2 = 2;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1425bf4b0 FUN_1425bf4b0 body=508 status=ok
// SIG undefined FUN_1425bf4b0(void)

ulonglong FUN_1425bf4b0(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  longlong *local_88;
  undefined8 local_80;
  longlong local_78 [2];
  undefined1 local_68 [16];
  longlong local_58;
  ulonglong uStack_50;
  longlong local_48;
  
  uVar17 = 0;
  local_80 = 1;
  local_88 = (longlong *)0x0;
  lVar11 = UBoolProperty::GetPrivateStaticClass();
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_88,0);
  plVar5 = local_88;
  *local_88 = lVar11;
  local_res8 = param_2;
  FName::ToString(&local_res8,local_78);
  puVar12 = (undefined8 *)FUN_1425c15b0(local_res10,*(undefined8 *)(param_1 + 0x10),local_res8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  local_res8 = *puVar12;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uVar13 = FName::ToString(&local_res8,local_68);
  FUN_1425c66e0(&local_58,param_1,param_1,uVar2,uVar13);
  uVar8 = uStack_50;
  if ((uStack_50 != 0) &&
     (iVar6 = (int)local_80, uVar16 = uVar17, plVar18 = plVar5, 0 < (int)local_80)) {
    do {
      lVar11 = *plVar18;
      lVar14 = UStructProperty::GetPrivateStaticClass();
      lVar10 = local_48;
      uVar9 = uStack_50;
      lVar7 = local_58;
      lVar3 = *(longlong *)(uVar8 + 0x10);
      if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar14 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar14 + 0x90) * 8) !=
          lVar14 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
LAB_1425bf63b:
        if (local_78[0] != 0) {
          FMemory::Free();
        }
        if (lVar10 != 0) {
          if (uVar9 != 0) {
            lVar11 = UBoolProperty::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(uVar9 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(uVar9 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              uVar17 = uVar9;
            }
          }
          *param_3 = uVar17;
          uVar17 = *(int *)(uVar9 + 0x44) + lVar7;
        }
        goto LAB_1425bf615;
      }
      iVar1 = *(int *)(lVar11 + 0x90);
      if ((*(int *)(lVar3 + 0x90) < iVar1) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)iVar1 * 8) != lVar11 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) goto LAB_1425bf63b;
      uVar15 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar15;
      plVar18 = plVar18 + 1;
    } while ((int)uVar15 < iVar6);
  }
  if (local_78[0] != 0) {
    FMemory::Free();
  }
LAB_1425bf615:
  FMemory::Free(plVar5);
  return uVar17;
}



// FUNCTION 1425bf6b0 GetInterpColorPropertyRef body=250 status=ok
// SIG undefined GetInterpColorPropertyRef(void)

longlong FMatineeUtils::GetInterpColorPropertyRef(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_res18;
  longlong local_res20;
  longlong *local_38;
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 local_20;
  
  lVar3 = 0;
  local_20 = 1;
  local_28 = (undefined8 *)0x0;
  uVar1 = UStructProperty::GetPrivateStaticClass();
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_28,0);
  local_38 = (longlong *)0x0;
  local_30 = 1;
  local_res18 = 0x3e;
  *local_28 = uVar1;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_38,0);
  lVar2 = local_res18;
  local_res20 = 0;
  local_res18 = 0;
  *local_38 = lVar2;
  lVar2 = FUN_1425bd470(&local_res20,&local_res18,param_1,param_2,&local_28,&local_38);
  if (lVar2 != 0) {
    lVar3 = *(int *)(local_res18 + 0x44) + local_res20;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_28 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return lVar3;
}



// FUNCTION 1425bf7b0 FUN_1425bf7b0 body=438 status=ok
// SIG undefined FUN_1425bf7b0(void)

ulonglong FUN_1425bf7b0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  ulonglong uVar18;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68 [2];
  undefined1 local_58 [16];
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  
  uVar18 = 0;
  local_70 = 1;
  local_78 = (longlong *)0x0;
  lVar11 = UFloatProperty::GetPrivateStaticClass();
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_78,0);
  plVar6 = local_78;
  *local_78 = lVar11;
  local_res8 = param_2;
  FName::ToString(&local_res8,local_68);
  puVar12 = (undefined8 *)FUN_1425c15b0(local_res10,*(undefined8 *)(param_1 + 0x10),local_res8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  local_res8 = *puVar12;
  local_48 = 0;
  lStack_40 = 0;
  local_38 = 0;
  uVar13 = FName::ToString(&local_res8,local_58);
  FUN_1425c66e0(&local_48,param_1,param_1,uVar2,uVar13);
  lVar11 = lStack_40;
  if ((lStack_40 != 0) &&
     (iVar7 = (int)local_70, uVar16 = uVar18, plVar17 = plVar6, 0 < (int)local_70)) {
    do {
      lVar3 = *plVar17;
      lVar14 = UStructProperty::GetPrivateStaticClass();
      lVar10 = local_38;
      lVar9 = lStack_40;
      lVar8 = local_48;
      lVar4 = *(longlong *)(lVar11 + 0x10);
      if ((*(int *)(lVar4 + 0x90) < *(int *)(lVar14 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)*(int *)(lVar14 + 0x90) * 8) !=
          lVar14 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
LAB_1425bf93a:
        if (local_68[0] != 0) {
          FMemory::Free();
        }
        if (lVar10 != 0) {
          uVar18 = *(int *)(lVar9 + 0x44) + lVar8;
        }
        goto LAB_1425bf913;
      }
      iVar1 = *(int *)(lVar3 + 0x90);
      if ((*(int *)(lVar4 + 0x90) < iVar1) ||
         (*(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)iVar1 * 8) != lVar3 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) goto LAB_1425bf93a;
      uVar15 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar15;
      plVar17 = plVar17 + 1;
    } while ((int)uVar15 < iVar7);
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
LAB_1425bf913:
  FMemory::Free(plVar6);
  return uVar18;
}



// FUNCTION 1425bf970 GetInterpLinearColorPropertyRef body=250 status=ok
// SIG undefined GetInterpLinearColorPropertyRef(void)

longlong FMatineeUtils::GetInterpLinearColorPropertyRef(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_res18;
  longlong local_res20;
  longlong *local_38;
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 local_20;
  
  lVar3 = 0;
  local_20 = 1;
  local_28 = (undefined8 *)0x0;
  uVar1 = UStructProperty::GetPrivateStaticClass();
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_28,0);
  local_38 = (longlong *)0x0;
  local_30 = 1;
  local_res18 = 0x41;
  *local_28 = uVar1;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_38,0);
  lVar2 = local_res18;
  local_res20 = 0;
  local_res18 = 0;
  *local_38 = lVar2;
  lVar2 = FUN_1425bd470(&local_res20,&local_res18,param_1,param_2,&local_28,&local_38);
  if (lVar2 != 0) {
    lVar3 = *(int *)(local_res18 + 0x44) + local_res20;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_28 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return lVar3;
}



// FUNCTION 1425bfa70 GetInterpVectorPropertyRef body=250 status=ok
// SIG undefined GetInterpVectorPropertyRef(void)

longlong FMatineeUtils::GetInterpVectorPropertyRef(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_res18;
  longlong local_res20;
  longlong *local_38;
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 local_20;
  
  lVar3 = 0;
  local_20 = 1;
  local_28 = (undefined8 *)0x0;
  uVar1 = UStructProperty::GetPrivateStaticClass();
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_28,0);
  local_38 = (longlong *)0x0;
  local_30 = 1;
  local_res18 = 0x3b;
  *local_28 = uVar1;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_38,0);
  lVar2 = local_res18;
  local_res20 = 0;
  local_res18 = 0;
  *local_38 = lVar2;
  lVar2 = FUN_1425bd470(&local_res20,&local_res18,param_1,param_2,&local_28,&local_38);
  if (lVar2 != 0) {
    lVar3 = *(int *)(local_res18 + 0x44) + local_res20;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_28 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return lVar3;
}



// FUNCTION 1425bfb70 FUN_1425bfb70 body=181 status=ok
// SIG undefined FUN_1425bfb70(void)

void FUN_1425bfb70(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0xb20);
  if (*(int *)(param_2 + 0x4c) < iVar2) {
    TArray<USkeletalMeshComponent_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeTo(param_2,iVar2)
    ;
    iVar2 = *(int *)(param_1 + 0xb20);
  }
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      iVar2 = *(int *)(param_2 + 0x48);
      lVar3 = (longlong)iVar5;
      lVar1 = *(longlong *)(param_1 + 0xb18);
      *(int *)(param_2 + 0x48) = iVar2 + 1;
      if (*(int *)(param_2 + 0x4c) < iVar2 + 1) {
        TArray<UActionBase_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(param_2,iVar2);
      }
      lVar4 = *(longlong *)(param_2 + 0x40);
      if (*(longlong *)(param_2 + 0x40) == 0) {
        lVar4 = param_2;
      }
      iVar5 = iVar5 + 1;
      *(longlong *)(lVar4 + (longlong)iVar2 * 8) = lVar3 * 0x60 + lVar1;
    } while (iVar5 < *(int *)(param_1 + 0xb20));
  }
  return;
}



// FUNCTION 1425bfc40 FUN_1425bfc40 body=219 status=ok
// SIG undefined FUN_1425bfc40(void)

void FUN_1425bfc40(longlong *param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  float fVar4;
  int local_res8 [2];
  int local_res18 [2];
  
  local_res8[0] = 0;
  local_res18[0] = 0;
  (**(code **)(*param_1 + 0x668))(param_1,local_res8,local_res18);
  *param_3 = (int)((float)local_res8[0] * 1.33 * (float)local_res18[0]);
  if ((param_1[0x24] != 0) || (lVar3 = FUN_1423407b0(param_1), uVar1 = DAT_1464c9c14, lVar3 != 0)) {
    lVar3 = param_1[0x24];
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    uVar1 = *(undefined4 *)(lVar3 + 0x1c0);
  }
  cVar2 = FUN_142865d40(uVar1);
  if (cVar2 == '\0') {
    fVar4 = (float)local_res8[0] * 2.66;
  }
  else {
    fVar4 = (float)local_res8[0] * 5.32;
  }
  *param_2 = (int)(fVar4 * (float)local_res18[0]);
  return;
}



// FUNCTION 1425bfd20 FUN_1425bfd20 body=180 status=ok
// SIG undefined FUN_1425bfd20(void)

longlong FUN_1425bfd20(longlong param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_res8 [2];
  int local_res10 [2];
  undefined1 local_68 [64];
  
  iVar2 = 0;
  iVar3 = 0;
  iVar1 = iVar2;
  if (0 < *(int *)(*(longlong *)(param_1 + 0x6f8) + 0x70)) {
    do {
      FUN_1425c0cf0(param_1,iVar2,1,local_res8,local_res10,local_68,0);
      iVar2 = iVar2 + 1;
      iVar3 = iVar1 + local_res8[0] * local_res10[0];
      iVar1 = iVar3;
    } while (iVar2 < *(int *)(*(longlong *)(param_1 + 0x6f8) + 0x70));
  }
  iVar1 = (int)SQRT((float)iVar3);
  *param_2 = iVar1;
  *param_3 = iVar1;
  return (ulonglong)(uint3)((uint)iVar1 >> 8) << 8;
}



// FUNCTION 1425bfde0 FUN_1425bfde0 body=187 status=ok
// SIG undefined FUN_1425bfde0(void)

void FUN_1425bfde0(longlong param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
                  undefined1 *param_5,undefined1 *param_6)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  
  puVar2 = param_5;
  *param_3 = 1;
  *param_4 = 0;
  *param_5 = 1;
  *param_6 = 1;
  if (*(int *)(param_1 + 0xb20) < 1) {
    *param_4 = 1;
    *param_5 = 0;
  }
  else {
    iVar5 = 0;
    lVar6 = 0;
    do {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0xb18) + lVar6);
      piVar3 = (int *)(**(code **)(*plVar4 + 8))(plVar4,&param_5,param_2);
      iVar1 = *piVar3;
      if (iVar1 != 0) {
        *param_4 = 1;
        if (iVar1 != 1) {
          *puVar2 = 0;
        }
        if (iVar1 != 2) {
          *param_3 = 0;
        }
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 0x60;
    } while (iVar5 < *(int *)(param_1 + 0xb20));
  }
  return;
}



// FUNCTION 1425bfec0 GetMorphTargetDelta body=33 status=ok
// SIG undefined GetMorphTargetDelta(void)

undefined8 UMorphTarget::GetMorphTargetDelta(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  
  if (param_2 < *(int *)(param_1 + 0x38)) {
    puVar1 = (undefined8 *)((longlong)param_2 * 0x30 + *(longlong *)(param_1 + 0x30));
    *param_3 = *(undefined4 *)(puVar1 + 1);
    return *puVar1;
  }
  return 0;
}



// FUNCTION 1425bff30 GetNetMode body=45 status=ok
// SIG undefined GetNetMode(void)

char UNetDriver::GetNetMode(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x368))();
  if (cVar1 != '\0') {
    return (DAT_1468c2172 != '\0') + '\x01';
  }
  return '\x03';
}



// FUNCTION 1425bff60 FUN_1425bff60 body=483 status=ok
// SIG undefined FUN_1425bff60(void)

longlong * FUN_1425bff60(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  int local_res8 [2];
  int local_res10 [4];
  undefined8 local_res20;
  undefined8 local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  longlong *local_50;
  undefined1 *local_48;
  longlong **local_40;
  
  FWeakObjectPtr::operator=(&local_res20,param_3);
  local_68 = local_res20;
  TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x358,local_res8,&local_68);
  plVar6 = (longlong *)0x0;
  plVar4 = plVar6;
  if (local_res8[0] != -1) {
    plVar4 = (longlong *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0x358));
  }
  plVar5 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar5 = plVar6;
  }
  if (plVar5 == (longlong *)0x0) {
    lVar3 = operator_new(0xa0);
    plVar4 = plVar6;
    if (lVar3 != 0) {
      plVar4 = (longlong *)FUN_1425ad910(lVar3);
    }
    FUN_14272e710(plVar4,param_3,*(undefined8 *)(param_1 + 0x90));
    FWeakObjectPtr::operator=(local_60,param_3);
    local_58 = plVar4;
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      plVar5[2] = (longlong)plVar4;
      plVar6 = plVar5;
    }
    local_50 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_58,plVar4,plVar4);
    local_48 = local_60;
    local_40 = &local_58;
    FUN_14209b530(param_1 + 0x358,local_res10,&local_48,0);
    plVar6 = local_50;
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x358) + (longlong)local_res10[0] * 0x20 + 8);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_50 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
  *param_2 = *plVar5;
  lVar3 = plVar5[1];
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1425c0150 GetParameterData body=668 status=ok
// SIG undefined GetParameterData(void)

void UMaterialParameterCollectionInstance::GetParameterData(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  undefined4 uVar13;
  
  lVar6 = *(longlong *)(param_1 + 0x30);
  if (lVar6 != 0) {
    iVar3 = *(int *)(lVar6 + 0x40) + 3;
    plVar10 = (longlong *)0x0;
    iVar3 = ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2) + *(int *)(lVar6 + 0x50);
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != iVar3) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,iVar3);
    }
    lVar6 = *(longlong *)(param_1 + 0x30);
    plVar8 = plVar10;
    plVar11 = plVar10;
    if (0 < *(int *)(lVar6 + 0x40)) {
      do {
        lVar6 = *(longlong *)(lVar6 + 0x38);
        uVar7 = (uint)plVar11 & 0x80000003;
        if ((int)uVar7 < 0) {
          uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
        }
        if (uVar7 == 0) {
          iVar3 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar3 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar3);
          }
          puVar1 = (undefined8 *)(*param_2 + (longlong)iVar3 * 0x10);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        lVar2 = *(longlong *)((longlong)plVar8 + lVar6);
        if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
          lVar4 = *(longlong *)(param_1 + 0x80);
          if (*(longlong *)(param_1 + 0x80) == 0) {
            lVar4 = param_1 + 0x78;
          }
          iVar3 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                                   (longlong)*(int *)(param_1 + 0x88) - 1U) * 4);
          if (iVar3 != -1) {
            do {
              plVar9 = (longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar3 * 0x18);
              if (*(longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar3 * 0x18) == lVar2) {
                if (iVar3 != -1) goto LAB_1425c0293;
                break;
              }
              iVar3 = (int)plVar9[2];
            } while (iVar3 != -1);
          }
        }
        plVar9 = plVar10;
LAB_1425c0293:
        plVar5 = plVar9 + 1;
        if (plVar9 == (longlong *)0x0) {
          plVar5 = plVar10;
        }
        if (plVar5 == (longlong *)0x0) {
          uVar13 = *(undefined4 *)((longlong)plVar8 + lVar6 + 0x18);
        }
        else {
          uVar13 = (undefined4)*plVar5;
        }
        uVar12 = (uint)plVar11 + 1;
        *(undefined4 *)
         ((longlong)(int)param_2[1] * 0x10 + *param_2 + -0x10 + (longlong)(int)uVar7 * 4) = uVar13;
        lVar6 = *(longlong *)(param_1 + 0x30);
        plVar8 = plVar8 + 4;
        plVar11 = (longlong *)(ulonglong)uVar12;
      } while ((int)uVar12 < *(int *)(lVar6 + 0x40));
    }
    plVar8 = plVar10;
    plVar11 = plVar10;
    if (0 < *(int *)(lVar6 + 0x50)) {
      do {
        lVar2 = *(longlong *)((longlong)plVar11 + *(longlong *)(lVar6 + 0x48));
        if (*(int *)(param_1 + 0x98) != *(int *)(param_1 + 0xc4)) {
          lVar4 = *(longlong *)(param_1 + 0xd0);
          if (*(longlong *)(param_1 + 0xd0) == 0) {
            lVar4 = param_1 + 200;
          }
          iVar3 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                                   (longlong)*(int *)(param_1 + 0xd8) - 1U) * 4);
          if (iVar3 != -1) {
            do {
              plVar9 = (longlong *)((longlong)iVar3 * 0x20 + *(longlong *)(param_1 + 0x90));
              if (*plVar9 == lVar2) {
                if (iVar3 != -1) goto LAB_1425c0372;
                break;
              }
              iVar3 = (int)plVar9[3];
            } while (iVar3 != -1);
          }
        }
        plVar9 = plVar10;
LAB_1425c0372:
        iVar3 = (int)param_2[1];
        plVar5 = plVar9 + 1;
        if (plVar9 == (longlong *)0x0) {
          plVar5 = plVar10;
        }
        if (plVar5 == (longlong *)0x0) {
          plVar5 = (longlong *)(*(longlong *)(lVar6 + 0x48) + 0x18 + (longlong)plVar11);
        }
        lVar6 = *plVar5;
        lVar2 = plVar5[1];
        *(int *)(param_2 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar3);
        }
        uVar7 = (int)plVar8 + 1;
        plVar8 = (longlong *)(*param_2 + (longlong)iVar3 * 0x10);
        *plVar8 = lVar6;
        plVar8[1] = lVar2;
        lVar6 = *(longlong *)(param_1 + 0x30);
        plVar8 = (longlong *)(ulonglong)uVar7;
        plVar11 = plVar11 + 5;
      } while ((int)uVar7 < *(int *)(lVar6 + 0x50));
    }
  }
  return;
}



// FUNCTION 1425c03f0 GetParameterName body=262 status=ok
// SIG undefined GetParameterName(void)

undefined8 *
UMaterialParameterCollection::GetParameterName(longlong param_1,undefined8 *param_2,int *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if (0 < *(int *)(param_1 + 0x40)) {
    puVar3 = *(undefined8 **)(param_1 + 0x38);
    piVar1 = (int *)(puVar3 + 2);
    lVar2 = 0;
    do {
      if (((piVar1[-2] == *param_3 && piVar1[-1] == param_3[1]) && piVar1[1] == param_3[3]) &&
          param_3[2] == *piVar1) goto LAB_1425c04ee;
      lVar2 = lVar2 + 1;
      puVar3 = puVar3 + 4;
      piVar1 = piVar1 + 8;
    } while (lVar2 < *(int *)(param_1 + 0x40));
  }
  if (0 < *(int *)(param_1 + 0x50)) {
    puVar3 = *(undefined8 **)(param_1 + 0x48);
    lVar2 = 0;
    piVar1 = (int *)(puVar3 + 2);
    do {
      if (((piVar1[-2] == *param_3 && piVar1[-1] == param_3[1]) && piVar1[1] == param_3[3]) &&
          *piVar1 == param_3[2]) {
LAB_1425c04ee:
        *param_2 = *puVar3;
        return param_2;
      }
      lVar2 = lVar2 + 1;
      puVar3 = puVar3 + 5;
      piVar1 = piVar1 + 10;
    } while (lVar2 < *(int *)(param_1 + 0x50));
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1425c0500 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USkeletalMesh::GetPrivateStaticClass(void)

{
  if (DAT_146b04728 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"Model",&DAT_146b04728,AK::MemoryMgr::StartProfileThreadUsage,
                  0x350,0x10000000,0,L"Engine",FUN_1425ac390,FUN_1425ac460,
                  UModel::AddReferencedObjects,&LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b04728;
}



// FUNCTION 1425c05a0 FUN_1425c05a0 body=422 status=ok
// SIG undefined FUN_1425c05a0(void)

longlong * FUN_1425c05a0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  int local_res8 [2];
  int local_res10 [2];
  undefined8 local_res20;
  undefined8 local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  longlong *local_40;
  undefined1 *local_38;
  longlong **local_30;
  
  FWeakObjectPtr::operator=(&local_res20,param_3);
  plVar2 = (longlong *)(param_1 + 0x3a8);
  local_58 = local_res20;
  TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
  ::FindId(plVar2,local_res8,&local_58);
  plVar7 = (longlong *)0x0;
  plVar5 = plVar7;
  if (local_res8[0] != -1) {
    plVar5 = (longlong *)((longlong)local_res8[0] * 0x20 + *plVar2);
  }
  plVar6 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar6 = plVar7;
  }
  if (plVar6 == (longlong *)0x0) {
    lVar4 = operator_new(0x28);
    plVar5 = plVar7;
    if (lVar4 != 0) {
      plVar5 = (longlong *)FUN_1423e5a00(lVar4,param_1,param_3);
    }
    FWeakObjectPtr::operator=(local_50,param_3);
    local_48 = plVar5;
    plVar6 = (longlong *)operator_new(0x18);
    if (plVar6 != (longlong *)0x0) {
      *(undefined4 *)(plVar6 + 1) = 1;
      *plVar6 = (longlong)&PTR_FUN_14511d1a8;
      *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
      plVar6[2] = (longlong)plVar5;
      plVar7 = plVar6;
    }
    local_40 = plVar7;
    SharedPointerInternals::EnableSharedFromThis(&local_48,plVar5,plVar5);
    local_38 = local_50;
    local_30 = &local_48;
    FUN_14209b530(plVar2,local_res10,&local_38,0);
    plVar7 = local_40;
    plVar6 = (longlong *)(*plVar2 + (longlong)local_res10[0] * 0x20 + 8);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_40 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
  }
  *param_2 = *plVar6;
  lVar4 = plVar6[1];
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1425c0760 FUN_1425c0760 body=366 status=ok
// SIG undefined FUN_1425c0760(void)

void FUN_1425c0760(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  uint *puVar6;
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
  
  FUN_141758340();
  local_58 = 0;
  uStack_54 = 1;
  iVar1 = *(int *)(param_1 + 0xb0);
  puStack_20 = (uint *)(param_1 + 0x98);
  local_48._4_4_ = 0;
  uStack_40 = 0;
  if (iVar1 != 0) {
    puVar6 = *(uint **)(param_1 + 0xa8);
    if (*(uint **)(param_1 + 0xa8) == (uint *)0x0) {
      puVar6 = puStack_20;
    }
    uVar2 = *puVar6;
    uStack_40 = 0;
    local_58 = 0;
    while (uVar2 == 0) {
      lVar5 = (longlong)local_58;
      uStack_40 = uStack_40 + 0x20;
      iVar4 = local_58 + 1;
      bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar4;
      if (bVar3) goto LAB_1425c082f;
      uVar2 = puVar6[lVar5 + 1];
    }
    uStack_54 = -uVar2 & uVar2;
    iVar4 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    local_48._4_4_ = (uStack_40 - iVar4) + 0x1f;
    if (iVar1 < local_48._4_4_) {
LAB_1425c082f:
      local_48._4_4_ = iVar1;
    }
  }
  uStack_18 = 0xffffffff;
  iStack_14 = local_48._4_4_;
  iStack_10 = uStack_40;
  uStack_c = iStack_3c;
  iStack_28 = local_58;
  uStack_24 = uStack_54;
  iStack_50 = local_58;
  uStack_4c = uStack_54;
  local_38 = uStack_40;
  uStack_34 = iStack_3c;
  uStack_40 = 0xffffffff;
  iStack_3c = local_48._4_4_;
  bVar3 = local_48._4_4_ < iVar1;
  local_30 = (longlong *)(param_1 + 0x88);
  local_48 = puStack_20;
  if (bVar3) {
    do {
      *(longlong *)(param_2 + 0x28) =
           *(longlong *)(param_2 + 0x28) +
           (longlong)
           *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x88) + 8 + (longlong)iStack_3c * 0x18) +
                   0x48) * 4;
      uStack_40 = uStack_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
    } while (iStack_3c < (int)local_48[6]);
  }
  return;
}



// FUNCTION 1425c08d0 GetResourceSizeEx body=84 status=ok
// SIG undefined GetResourceSizeEx(void)

void UMorphTarget::GetResourceSizeEx(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_141758340();
  lVar2 = *(longlong *)(param_1 + 0x30);
  lVar4 = (longlong)*(int *)(param_1 + 0x38) * 0x30 + lVar2;
  if (lVar2 != lVar4) {
    lVar3 = *(longlong *)(param_2 + 0x28);
    do {
      piVar1 = (int *)(lVar2 + 0xc);
      lVar2 = lVar2 + 0x30;
      lVar3 = lVar3 + 4 + (ulonglong)(uint)(*piVar1 * 0x1c);
      *(longlong *)(param_2 + 0x28) = lVar3;
    } while (lVar2 != lVar4);
  }
  return;
}



// FUNCTION 1425c0930 FUN_1425c0930 body=44 status=ok
// SIG undefined FUN_1425c0930(void)

undefined8 FUN_1425c0930(undefined8 param_1)

{
  float fVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulonglong)param_1 >> 0x20);
  fVar1 = (float)param_1;
  if (ABS(fVar1) < 1e-05) {
    if (fVar1 < 0.0) {
      return 0xb727c5ac;
    }
    fVar1 = 1e-05;
    uVar2 = 0;
  }
  return CONCAT44(uVar2,fVar1);
}



// FUNCTION 1425c0960 GetScalarParameterValue body=239 status=ok
// SIG undefined GetScalarParameterValue(void)

ulonglong UMaterialParameterCollectionInstance::GetScalarParameterValue
                    (longlong param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x40);
  puVar2 = (undefined4 *)(longlong)iVar1;
  if (0 < iVar1) {
    plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x38);
    puVar5 = (undefined4 *)0x0;
    puVar2 = puVar5;
    do {
      if (*plVar6 == param_2) {
        if (*(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x74)) goto LAB_1425c0a10;
        lVar3 = *(longlong *)(param_1 + 0x80);
        if (*(longlong *)(param_1 + 0x80) == 0) {
          lVar3 = param_1 + 0x78;
        }
        iVar1 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                                 (longlong)*(int *)(param_1 + 0x88) - 1U) * 4);
        if (iVar1 == -1) goto LAB_1425c0a10;
        goto LAB_1425c09f0;
      }
      puVar2 = (undefined4 *)((longlong)puVar2 + 1);
      plVar6 = plVar6 + 4;
    } while ((longlong)puVar2 < (longlong)iVar1);
  }
  return (ulonglong)puVar2 & 0xffffffffffffff00;
  while (iVar1 = puVar2[4], iVar1 != -1) {
LAB_1425c09f0:
    puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar1 * 0x18);
    if (*(longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar1 * 0x18) == param_2) {
      if (iVar1 != -1) goto LAB_1425c0a13;
      break;
    }
  }
LAB_1425c0a10:
  puVar2 = puVar5;
LAB_1425c0a13:
  puVar4 = puVar2 + 2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar4 = puVar5;
  }
  if (puVar4 == (undefined4 *)0x0) {
    *param_3 = (int)plVar6[3];
    return 1;
  }
  *param_3 = *puVar4;
  return CONCAT71((int7)((ulonglong)puVar4 >> 8),1);
}



// FUNCTION 1425c0a50 FUN_1425c0a50 body=166 status=ok
// SIG undefined FUN_1425c0a50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1425c0a50(longlong *param_1,float *param_2,float *param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if (param_1[0x2d] == param_1[0x8c]) {
    cVar3 = (**(code **)(*param_1 + 0x580))();
    if (cVar3 != '\0') {
      lVar1 = param_1[0x8c];
      uVar4 = *(uint *)(lVar1 + 0x230) & _DAT_146aff450;
      uVar5 = *(uint *)(lVar1 + 0x234) & uRam0000000146aff454;
      uVar6 = *(uint *)(lVar1 + 0x238) & uRam0000000146aff458;
      uVar7 = *(uint *)(lVar1 + 0x23c) & uRam0000000146aff45c;
      auVar8._4_4_ = uVar5;
      auVar8._0_4_ = uVar4;
      auVar8._8_4_ = uVar6;
      auVar8._12_4_ = uVar7;
      auVar9._4_4_ = uVar6;
      auVar9._0_4_ = uVar5;
      auVar9._8_4_ = uVar4;
      auVar9._12_4_ = uVar7;
      auVar9 = minps(auVar8,auVar9);
      auVar2._4_4_ = uVar4;
      auVar2._0_4_ = uVar6;
      auVar2._8_4_ = uVar5;
      auVar2._12_4_ = uVar7;
      auVar9 = minps(auVar9,auVar2);
      *param_2 = auVar9._0_4_ * *(float *)(lVar1 + 0x714);
      *param_3 = auVar9._0_4_ * *(float *)(lVar1 + 0x710);
      return;
    }
  }
  FUN_142233ae0(param_1,param_2,param_3);
  return;
}



// FUNCTION 1425c0b00 FUN_1425c0b00 body=483 status=ok
// SIG undefined FUN_1425c0b00(void)

longlong * FUN_1425c0b00(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  int local_res8 [2];
  int local_res10 [4];
  undefined8 local_res20;
  undefined8 local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  longlong *local_50;
  undefined1 *local_48;
  longlong **local_40;
  
  FWeakObjectPtr::operator=(&local_res20,param_3);
  local_68 = local_res20;
  TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x358,local_res8,&local_68);
  plVar6 = (longlong *)0x0;
  plVar4 = plVar6;
  if (local_res8[0] != -1) {
    plVar4 = (longlong *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0x358));
  }
  plVar5 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar5 = plVar6;
  }
  if (plVar5 == (longlong *)0x0) {
    lVar3 = operator_new(0xa0);
    plVar4 = plVar6;
    if (lVar3 != 0) {
      plVar4 = (longlong *)FUN_1425ad910(lVar3);
    }
    FUN_14272ef90(plVar4,param_3,*(undefined8 *)(param_1 + 0x90));
    FWeakObjectPtr::operator=(local_60,param_3);
    local_58 = plVar4;
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      plVar5[2] = (longlong)plVar4;
      plVar6 = plVar5;
    }
    local_50 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_58,plVar4,plVar4);
    local_48 = local_60;
    local_40 = &local_58;
    FUN_14209b530(param_1 + 0x358,local_res10,&local_48,0);
    plVar6 = local_50;
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x358) + (longlong)local_res10[0] * 0x20 + 8);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_50 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
  *param_2 = *plVar5;
  lVar3 = plVar5[1];
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1425c0cf0 FUN_1425c0cf0 body=1993 status=ok
// SIG undefined FUN_1425c0cf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1425c0cf0(longlong param_1,uint param_2,int param_3,int *param_4,int *param_5,
                  float *param_6,longlong *param_7)

{
  undefined8 uVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
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
  float local_160;
  float local_15c;
  float local_158;
  float fStack_14c;
  float local_140;
  float local_13c;
  float local_138;
  
  uVar13 = (ulonglong)(int)param_2;
  lVar8 = uVar13 * 0x50 + *(longlong *)(*(longlong *)(param_1 + 0x6f8) + 0x68);
  FVector::FindBestAxisVectors(lVar8 + 0x30,&local_140);
  fVar26 = 2097152.0;
  fVar27 = -2097152.0;
  iVar14 = 0;
  lVar15 = 0;
  lVar12 = 0;
  fVar28 = 2097152.0;
  fVar29 = -2097152.0;
  bVar3 = false;
  do {
    while( true ) {
      if (param_7 == (longlong *)0x0) {
        iVar10 = *(int *)(param_1 + 0x718);
      }
      else {
        iVar10 = (int)param_7[1];
      }
      if (iVar10 <= iVar14) {
        if (bVar3) {
          fVar20 = (float)param_3 * *(float *)(lVar8 + 0x40);
          fVar19 = 1.0 / fVar20;
          fVar16 = (float)((int)ROUND((fVar19 * fVar26 + fVar19 * fVar26) - 0.5) >> 1) * fVar20;
          fVar28 = (float)((int)ROUND((fVar19 * fVar28 + fVar19 * fVar28) - 0.5) >> 1) * fVar20;
          fVar26 = (float)-((int)ROUND(-0.5 - (fVar19 * fVar27 + fVar19 * fVar27)) >> 1) * fVar20 -
                   fVar16;
          iVar10 = -((int)ROUND(-0.5 - (fVar19 * fVar26 + fVar19 * fVar26)) >> 1);
          iVar14 = 4;
          if ((3 < iVar10) && (iVar14 = 0x400, iVar10 < 0x400)) {
            iVar14 = iVar10;
          }
          fVar29 = (float)-((int)ROUND(-0.5 - (fVar19 * fVar29 + fVar19 * fVar29)) >> 1) * fVar20 -
                   fVar28;
          *param_4 = iVar14;
          fVar27 = fVar29 / ((float)param_3 * *(float *)(lVar8 + 0x40));
          iVar10 = -((int)ROUND(-0.5 - (fVar27 + fVar27)) >> 1);
          iVar14 = 4;
          if ((3 < iVar10) && (iVar14 = 0x400, iVar10 < 0x400)) {
            iVar14 = iVar10;
          }
          *param_5 = iVar14;
          fVar27 = *(float *)(lVar8 + 0x30);
          fVar20 = *(float *)(lVar8 + 0x3c);
          fVar17 = 1.0 / fVar26;
          fVar21 = 1.0 / fVar29;
          fVar19 = *(float *)(lVar8 + 0x38);
          fVar18 = *(float *)(lVar8 + 0x34);
          *param_6 = fVar17 * local_140;
          param_6[1] = fVar21 * local_160;
          param_6[2] = fVar27;
          param_6[3] = 0.0;
          param_6[4] = fVar17 * local_13c;
          param_6[5] = fVar21 * local_15c;
          param_6[6] = fVar18;
          param_6[7] = 0.0;
          param_6[8] = fVar17 * local_138;
          param_6[9] = fVar21 * local_158;
          param_6[10] = fVar19;
          param_6[0xb] = 0.0;
          fVar26 = (-1.0 / fVar26) * fVar16;
          fVar27 = (-1.0 / fVar29) * fVar28;
          fVar28 = -fVar20;
          fVar29 = 1.0;
        }
        else {
          *param_4 = 0;
          *param_5 = 0;
          uVar1 = _DAT_1464aa7d8;
          *(undefined8 *)param_6 = _DAT_1464aa7d0;
          *(undefined8 *)(param_6 + 2) = uVar1;
          uVar1 = _DAT_1464aa7e8;
          *(undefined8 *)(param_6 + 4) = _DAT_1464aa7e0;
          *(undefined8 *)(param_6 + 6) = uVar1;
          uVar1 = _DAT_1464aa7f8;
          *(undefined8 *)(param_6 + 8) = _DAT_1464aa7f0;
          *(undefined8 *)(param_6 + 10) = uVar1;
          fVar26 = _DAT_1464aa800;
          fVar27 = fRam00000001464aa804;
          fVar28 = fRam00000001464aa808;
          fVar29 = _DAT_1464aa80c;
        }
        param_6[0xc] = fVar26;
        param_6[0xd] = fVar27;
        param_6[0xe] = fVar28;
        param_6[0xf] = fVar29;
        return;
      }
      if (param_7 == (longlong *)0x0) {
        uVar4 = (uint)*(ushort *)(lVar15 + *(longlong *)(param_1 + 0x710));
      }
      else {
        uVar4 = *(uint *)(lVar12 + *param_7);
      }
      lVar11 = *(longlong *)(param_1 + 0x6f8);
      lVar9 = (longlong)(int)uVar4 * 0x40 + *(longlong *)(lVar11 + 0x28);
      if ((param_7 != (longlong *)0x0) || (*(int *)(lVar9 + 0x14) == (int)uVar13)) break;
LAB_1425c117c:
      iVar14 = iVar14 + 1;
      lVar12 = lVar12 + 4;
      lVar15 = lVar15 + 2;
    }
    bVar2 = *(byte *)(lVar9 + 0x36);
    uVar4 = 0;
    if (3 < bVar2) {
      lVar6 = *(longlong *)(lVar11 + 0x38);
      lVar11 = *(longlong *)(lVar11 + 0x58);
      iVar10 = *(int *)(lVar9 + 0x10);
      uVar4 = (bVar2 - 4 >> 2) + 1;
      bVar3 = true;
      uVar13 = (ulonglong)uVar4;
      uVar4 = uVar4 * 4;
      do {
        lVar7 = (longlong)iVar10;
        lVar5 = (longlong)*(int *)(lVar6 + lVar7 * 0x18);
        uVar1 = *(undefined8 *)(lVar11 + lVar5 * 0xc);
        fVar17 = (float)uVar1;
        fVar20 = *(float *)(lVar11 + 8 + lVar5 * 0xc);
        lVar5 = (longlong)*(int *)(lVar6 + 0x18 + lVar7 * 0x18);
        fStack_14c = (float)((ulonglong)uVar1 >> 0x20);
        uVar1 = *(undefined8 *)(lVar11 + lVar5 * 0xc);
        fVar21 = (float)uVar1;
        fVar19 = *(float *)(lVar11 + 8 + lVar5 * 0xc);
        fVar18 = fStack_14c * local_15c;
        lVar5 = (longlong)*(int *)(lVar6 + 0x30 + lVar7 * 0x18);
        fVar16 = fStack_14c * local_13c;
        fStack_14c = (float)((ulonglong)uVar1 >> 0x20);
        fVar25 = fVar17 * local_160 + fVar18 + fVar20 * local_158;
        fVar24 = fVar17 * local_140 + fVar16 + fVar20 * local_138;
        fVar16 = fStack_14c * local_13c;
        uVar1 = *(undefined8 *)(lVar11 + lVar5 * 0xc);
        fVar17 = (float)uVar1;
        fVar20 = *(float *)(lVar11 + 8 + lVar5 * 0xc);
        lVar5 = (longlong)*(int *)(lVar6 + 0x48 + lVar7 * 0x18);
        fVar23 = fVar21 * local_160 + fStack_14c * local_15c + fVar19 * local_158;
        fStack_14c = (float)((ulonglong)uVar1 >> 0x20);
        fVar18 = fStack_14c * local_13c;
        fVar22 = fVar21 * local_140 + fVar16 + fVar19 * local_138;
        uVar1 = *(undefined8 *)(lVar11 + lVar5 * 0xc);
        fVar19 = *(float *)(lVar11 + 8 + lVar5 * 0xc);
        fVar16 = (float)uVar1;
        fVar21 = fVar17 * local_160 + fStack_14c * local_15c + fVar20 * local_158;
        fStack_14c = (float)((ulonglong)uVar1 >> 0x20);
        fVar20 = fVar17 * local_140 + fVar18 + fVar20 * local_138;
        if (fVar24 <= fVar26) {
          fVar26 = fVar24;
        }
        iVar10 = iVar10 + 4;
        if (fVar25 <= fVar28) {
          fVar28 = fVar25;
        }
        if (fVar27 <= fVar24) {
          fVar27 = fVar24;
        }
        if (fVar29 <= fVar25) {
          fVar29 = fVar25;
        }
        if (fVar22 <= fVar26) {
          fVar26 = fVar22;
        }
        if (fVar23 <= fVar28) {
          fVar28 = fVar23;
        }
        if (fVar27 <= fVar22) {
          fVar27 = fVar22;
        }
        if (fVar29 <= fVar23) {
          fVar29 = fVar23;
        }
        if (fVar20 <= fVar26) {
          fVar26 = fVar20;
        }
        fVar18 = fVar16 * local_140 + fStack_14c * local_13c + fVar19 * local_138;
        if (fVar21 <= fVar28) {
          fVar28 = fVar21;
        }
        if (fVar27 <= fVar20) {
          fVar27 = fVar20;
        }
        if (fVar29 <= fVar21) {
          fVar29 = fVar21;
        }
        if (fVar18 <= fVar26) {
          fVar26 = fVar18;
        }
        if (fVar27 <= fVar18) {
          fVar27 = fVar18;
        }
        fVar20 = fVar16 * local_160 + fStack_14c * local_15c + fVar19 * local_158;
        if (fVar20 <= fVar28) {
          fVar28 = fVar20;
        }
        if (fVar29 <= fVar20) {
          fVar29 = fVar20;
        }
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
      lVar11 = *(longlong *)(param_1 + 0x6f8);
      uVar13 = (ulonglong)param_2;
    }
    if (bVar2 <= uVar4) goto LAB_1425c117c;
    bVar3 = true;
    do {
      iVar10 = *(int *)(lVar9 + 0x10) + uVar4;
      uVar4 = uVar4 + 1;
      lVar6 = (longlong)*(int *)(*(longlong *)(lVar11 + 0x38) + (longlong)iVar10 * 0x18);
      uVar1 = *(undefined8 *)(*(longlong *)(lVar11 + 0x58) + lVar6 * 0xc);
      fVar20 = *(float *)(*(longlong *)(lVar11 + 0x58) + 8 + lVar6 * 0xc);
      fVar16 = (float)uVar1;
      fStack_14c = (float)((ulonglong)uVar1 >> 0x20);
      fVar19 = fVar16 * local_140 + fStack_14c * local_13c + fVar20 * local_138;
      if (fVar19 <= fVar26) {
        fVar26 = fVar19;
      }
      fVar20 = fVar16 * local_160 + fStack_14c * local_15c + fVar20 * local_158;
      if (fVar27 <= fVar19) {
        fVar27 = fVar19;
      }
      if (fVar20 <= fVar28) {
        fVar28 = fVar20;
      }
      if (fVar29 <= fVar20) {
        fVar29 = fVar20;
      }
    } while (uVar4 < bVar2);
    iVar14 = iVar14 + 1;
    lVar12 = lVar12 + 4;
    lVar15 = lVar15 + 2;
  } while( true );
}



// FUNCTION 1425c14c0 FUN_1425c14c0 body=237 status=ok
// SIG undefined FUN_1425c14c0(void)

float FUN_1425c14c0(longlong param_1)

{
  float fVar1;
  char cVar2;
  undefined8 uVar3;
  float fVar4;
  
  fVar4 = *(float *)(*(longlong *)(param_1 + 0x58) + 0x78);
  if (*(int *)(param_1 + 300) == 2) goto LAB_1425c151e;
  if ((*(byte *)(param_1 + 0x130) & 1) == 0) {
    if (*(longlong **)(param_1 + 0x98) == (longlong *)0x0) goto LAB_1425c151e;
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x3f0))();
    if (cVar2 == '\0') goto LAB_1425c151e;
  }
  if ((*(byte *)(param_1 + 0x130) & 1) == 0) {
    fVar4 = *(float *)(*(longlong *)(param_1 + 0x58) + 0x7c);
  }
  else {
    fVar4 = 2.0;
  }
LAB_1425c151e:
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b04770) {
    _Init_thread_header(&DAT_146b04770);
    if (DAT_146b04770 == -1) {
      uVar3 = FCommandLine::Get();
      DAT_146b0476c = FParse::Param(uVar3,L"longtimeouts");
      _Init_thread_footer(&DAT_146b04770);
    }
  }
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x58) + 0x84);
  if ((0.0 < fVar1) && (DAT_146b0476c != '\0')) {
    fVar4 = fVar4 * fVar1;
  }
  return fVar4;
}



// FUNCTION 1425c15b0 FUN_1425c15b0 body=1115 status=ok
// SIG undefined FUN_1425c15b0(void)

undefined8 * FUN_1425c15b0(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined *puVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  uint uVar11;
  wchar_t *pwVar12;
  uint uVar13;
  longlong *plVar14;
  longlong lVar15;
  uint *puVar16;
  undefined2 *puVar17;
  wchar_t *pwVar18;
  uint uVar19;
  wchar_t *pwVar20;
  undefined8 local_res18 [2];
  undefined8 local_98;
  uint uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  uint uStack_80;
  int iStack_7c;
  uint local_78;
  undefined4 uStack_74;
  undefined2 *local_70;
  int local_68;
  longlong *local_60;
  uint uStack_58;
  uint uStack_54;
  uint *puStack_50;
  undefined4 uStack_48;
  int iStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  
  local_res18[0] = param_3;
  if (DAT_146afefc4 == '\0') {
    FUN_1425b40e0();
  }
  plVar10 = (longlong *)0x0;
  lVar2 = *(longlong *)(param_2 + 0x18);
  if (DAT_146534138 != DAT_146534164) {
    puVar6 = DAT_146534170;
    if (DAT_146534170 == (undefined *)0x0) {
      puVar6 = &DAT_146534168;
    }
    iVar1 = *(int *)(puVar6 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                              (longlong)DAT_146534178 - 1U) * 4);
    while (iVar1 != -1) {
      lVar15 = (longlong)iVar1 * 0x60;
      if (*(longlong *)(lVar15 + DAT_146534130) == lVar2) {
        plVar7 = (longlong *)(lVar15 + DAT_146534130);
        if (iVar1 != -1) goto LAB_1425c166b;
        break;
      }
      iVar1 = *(int *)(lVar15 + DAT_146534130 + 0x58);
    }
  }
  plVar7 = plVar10;
LAB_1425c166b:
  plVar14 = plVar7 + 1;
  if (plVar7 == (longlong *)0x0) {
    plVar14 = plVar10;
  }
  if (plVar14 != (longlong *)0x0) {
    FName::ToString(local_res18,&local_70);
    iVar1 = (int)plVar14[5];
    puStack_50 = (uint *)(plVar14 + 2);
    local_98._0_4_ = 0;
    local_98._4_4_ = 1;
    local_88._4_4_ = 0;
    uStack_80 = 0;
    if (iVar1 != 0) {
      puVar16 = (uint *)plVar14[4];
      if ((uint *)plVar14[4] == (uint *)0x0) {
        puVar16 = puStack_50;
      }
      uVar8 = *puVar16;
      plVar7 = plVar10;
      while (uVar8 == 0) {
        iVar5 = (int)plVar10;
        uStack_80 = (int)plVar7 + 0x20;
        plVar7 = (longlong *)(ulonglong)uStack_80;
        local_98._0_4_ = iVar5 + 1;
        plVar10 = (longlong *)(ulonglong)(uint)local_98;
        if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1425c173f;
        uVar8 = puVar16[(longlong)iVar5 + 1];
      }
      local_98._4_4_ = -uVar8 & uVar8;
      iVar5 = 0x1f;
      if (local_98._4_4_ != 0) {
        for (; local_98._4_4_ >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (local_98._4_4_ == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      local_88._4_4_ = (uStack_80 - iVar5) + 0x1f;
      if (iVar1 < local_88._4_4_) {
LAB_1425c173f:
        local_88._4_4_ = iVar1;
      }
    }
    uStack_48 = 0xffffffff;
    iStack_44 = local_88._4_4_;
    uStack_40 = uStack_80;
    uStack_3c = iStack_7c;
    uStack_58 = (uint)local_98;
    uStack_54 = local_98._4_4_;
    uStack_90 = (uint)local_98;
    uStack_8c = local_98._4_4_;
    local_78 = uStack_80;
    uStack_74 = iStack_7c;
    uStack_80 = 0xffffffff;
    iStack_7c = local_88._4_4_;
    bVar3 = local_88._4_4_ < iVar1;
    local_98 = (wchar_t *)plVar14;
    local_60 = plVar14;
    local_88 = puStack_50;
    if (bVar3) {
      do {
        iVar1 = iStack_7c;
        plVar10 = (longlong *)local_98;
        lVar2 = *(longlong *)local_98 + (longlong)iStack_7c * 0x28;
        cVar4 = FString::StartsWith(&local_70,lVar2,1);
        if (cVar4 != '\0') {
          iVar5 = *(int *)(lVar2 + 8);
          uVar13 = 0;
          uVar8 = iVar5 - 1;
          if (iVar5 == 0) {
            uVar8 = uVar13;
          }
          uVar11 = uVar8 + 0x7fffffff;
          uVar19 = local_68 - 1;
          if (local_68 == 0) {
            uVar19 = uVar13;
          }
          if (uVar8 < uVar19) {
            uVar19 = uVar8;
          }
          uVar8 = local_68 - 1;
          if (local_68 == 0) {
            uVar8 = uVar13;
          }
          uVar13 = uVar19;
          if ((uVar19 <= uVar11) && (uVar13 = uVar8, uVar11 < uVar8)) {
            uVar13 = uVar11;
          }
          local_98 = (wchar_t *)0x0;
          puVar17 = &DAT_143f3eda8;
          if (local_68 != 0) {
            puVar17 = local_70;
          }
          iVar5 = uVar13 - uVar19;
          uVar8 = iVar5 + 1;
          if (iVar5 == 0) {
            uVar8 = 0;
          }
          uStack_8c = 0;
          pwVar12 = local_98;
          uStack_90 = uVar8;
          if (0 < (int)uVar8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
            uVar8 = uStack_90;
            pwVar12 = local_98;
            if (0 < (int)uStack_90) {
              wcsncpy(local_98,puVar17 + (int)uVar19,(longlong)iVar5);
              pwVar12[iVar5] = L'\0';
            }
          }
          pwVar18 = (wchar_t *)0x0;
          uVar13 = *(uint *)(*plVar10 + 0x18 + (longlong)iVar1 * 0x28);
          pwVar20 = pwVar12;
          if (1 < (int)uVar13) {
            iVar5 = uVar8 - 1;
            if (uVar8 == 0) {
              iVar5 = 0;
            }
            if ((uVar13 != 0) || (iVar9 = 1, iVar5 == 0)) {
              iVar9 = 0;
            }
            _Src = *(void **)(*plVar10 + (longlong)iVar1 * 0x28 + 0x10);
            local_98 = (wchar_t *)0x0;
            uStack_90 = uVar13;
            if ((uVar13 == 0) && (iVar9 + iVar5 == 0)) {
              uStack_8c = 0;
              uVar13 = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,iVar9 + iVar5 + uVar13,0);
              pwVar18 = local_98;
              _guard_xfg_dispatch_icall_nop(local_98,_Src,(longlong)(int)uVar13 * 2);
              uVar13 = uStack_90;
            }
            uVar8 = uVar13;
            if (iVar5 != 0) {
              uStack_90 = uVar13 + (uVar13 == 0) + iVar5;
              if ((int)uStack_8c < (int)uStack_90) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,uVar13);
                pwVar18 = local_98;
              }
              uVar8 = uStack_90;
              _guard_xfg_dispatch_icall_nop
                        (pwVar18 + ((longlong)(int)uVar13 - (ulonglong)(uVar13 != 0)),pwVar12,
                         (longlong)iVar5 * 2);
              (pwVar18 + ((longlong)(int)uVar13 - (ulonglong)(uVar13 != 0)))[iVar5] = L'\0';
            }
            pwVar20 = pwVar18;
            if (pwVar12 != (wchar_t *)0x0) {
              FMemory::Free(pwVar12);
            }
          }
          pwVar12 = L"";
          if (uVar8 != 0) {
            pwVar12 = pwVar20;
          }
          FName::FName(param_1,pwVar12,1);
          if (pwVar20 != (wchar_t *)0x0) {
            FMemory::Free(pwVar20);
          }
          if (local_70 == (undefined2 *)0x0) {
            return param_1;
          }
          FMemory::Free();
          return param_1;
        }
        uStack_80 = uStack_80 & ~uStack_8c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
      } while (iStack_7c < (int)local_88[6]);
    }
    if (local_70 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  *param_1 = local_res18[0];
  return param_1;
}



// FUNCTION 1425c1a90 GetVectorParameterValue body=248 status=ok
// SIG undefined GetVectorParameterValue(void)

ulonglong UMaterialParameterCollectionInstance::GetVectorParameterValue
                    (longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar5 = (longlong *)0x0;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x50);
  plVar2 = (longlong *)(longlong)iVar1;
  plVar6 = plVar5;
  if (0 < iVar1) {
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x48);
    plVar2 = plVar5;
    do {
      plVar6 = plVar4;
      if (*plVar4 == param_2) break;
      plVar2 = (longlong *)((longlong)plVar2 + 1);
      plVar4 = plVar4 + 5;
      plVar6 = plVar5;
    } while ((longlong)plVar2 < (longlong)iVar1);
  }
  if (plVar6 == (longlong *)0x0) {
    return (ulonglong)plVar2 & 0xffffffffffffff00;
  }
  if (*(int *)(param_1 + 0x98) != *(int *)(param_1 + 0xc4)) {
    lVar3 = *(longlong *)(param_1 + 0xd0);
    if (*(longlong *)(param_1 + 0xd0) == 0) {
      lVar3 = param_1 + 200;
    }
    iVar1 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0xd8) - 1U) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 0x90));
        if (*plVar2 == param_2) {
          if (iVar1 != -1) goto LAB_1425c1b52;
          break;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  plVar2 = plVar5;
LAB_1425c1b52:
  plVar4 = plVar2 + 1;
  if (plVar2 == (longlong *)0x0) {
    plVar4 = plVar5;
  }
  if (plVar4 == (longlong *)0x0) {
    plVar4 = plVar6 + 3;
  }
  lVar3 = plVar4[1];
  *param_3 = *plVar4;
  param_3[1] = lVar3;
  return CONCAT71((int7)((ulonglong)(plVar6 + 3) >> 8),1);
}



// FUNCTION 1425c1b90 FUN_1425c1b90 body=178 status=ok
// SIG undefined FUN_1425c1b90(void)

undefined8 * FUN_1425c1b90(longlong param_1,undefined8 *param_2,longlong param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  *param_2 = 0;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | 0x2001;
  cVar1 = FUN_142730ad0(param_1,param_3);
  if ((cVar1 == '\0') || ((*(uint *)(*(longlong *)(param_3 + 0x10) + 0x2c) & 0x40000) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x400;
  }
  uVar3 = *(uint *)((longlong)param_2 + 4) & 0xfffffbff | uVar3;
  *(uint *)((longlong)param_2 + 4) = uVar3;
  if (((*(uint *)(param_1 + 0x18) & 0x800) != 0) ||
     (uVar4 = 0x100, (*(uint *)(param_1 + 0x1c) & 0x4000000) != 0)) {
    uVar4 = 0x200;
  }
  *(uint *)((longlong)param_2 + 4) = uVar3 | uVar4;
  bVar2 = FUN_142730880(param_1,param_3);
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) & 0xfffff7ff;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | (uint)bVar2 << 0xb;
  FUN_1425a2630(param_1 + 0xb28,param_2);
  return param_2;
}



// FUNCTION 1425c1c50 FUN_1425c1c50 body=25 status=ok
// SIG undefined FUN_1425c1c50(void)

longlong FUN_1425c1c50(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1580) + 8);
  if ((lVar1 == 0) || (*(int *)(lVar1 + 0x44) != 4)) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 1425c1ca0 FUN_1425c1ca0 body=410 status=ok
// SIG undefined FUN_1425c1ca0(void)

void FUN_1425c1ca0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  char cVar6;
  undefined4 local_res8 [2];
  longlong *local_28;
  int local_20;
  
  cVar6 = '\0';
  UEngine::GetLocalPlayerIterator
            (DAT_146b17150,&local_28,*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0xd0));
  while( true ) {
    if (local_20 < 0) {
      return;
    }
    if (((int)local_28[1] <= local_20) || (*(longlong *)(*local_28 + (longlong)local_20 * 8) != 0))
    break;
    local_20 = local_20 + 1;
  }
  while( true ) {
    if (local_20 < 0) {
      return;
    }
    if ((int)local_28[1] <= local_20) {
      return;
    }
    if (cVar6 == *(char *)((longlong)param_2 + 0x644)) break;
    do {
      local_20 = local_20 + 1;
      if ((local_20 < 0) || ((int)local_28[1] <= local_20)) break;
    } while (*(longlong *)(*local_28 + (longlong)local_20 * 8) == 0);
    cVar6 = cVar6 + '\x01';
  }
  lVar1 = *(longlong *)(*local_28 + (longlong)local_20 * 8);
  if (lVar1 == 0) {
    return;
  }
  plVar2 = *(longlong **)(lVar1 + 0x30);
  if (plVar2 != (longlong *)0x0) {
    if ((char)plVar2[0x25] == '\x03') {
      uVar4 = (**(code **)(*plVar2 + 0x148))(plVar2);
      FUN_142543860(uVar4,plVar2,0,1);
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x1970);
      plVar2 = *(longlong **)(lVar3 + 0x48);
      for (plVar5 = plVar2; plVar5 != plVar2 + *(int *)(lVar3 + 0x50); plVar5 = plVar5 + 1) {
        if (*plVar5 == param_1) {
          local_res8[0] = (undefined4)((longlong)plVar5 - (longlong)plVar2 >> 3);
          goto LAB_1425c1dc3;
        }
      }
      local_res8[0] = 0xffffffff;
LAB_1425c1dc3:
      FUN_1425cbe10(lVar3,local_res8);
    }
    *(undefined8 *)(*(longlong *)(lVar1 + 0x30) + 0x508) = 0;
    *(undefined8 *)(*(longlong *)(lVar1 + 0x30) + 0x688) = 0;
    *(undefined8 *)(lVar1 + 0x30) = 0;
  }
  *(undefined4 *)(lVar1 + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined1 *)(param_2 + 0x25) = 2;
  param_2[0xd1] = param_3;
  (**(code **)(*param_2 + 0xd18))(param_2,lVar1);
  *(longlong **)(param_1 + 0x30) = param_2;
  *(longlong **)(param_1 + 0x98) = param_2;
  return;
}



// FUNCTION 1425c1e40 FUN_1425c1e40 body=781 status=ok
// SIG undefined FUN_1425c1e40(void)

void FUN_1425c1e40(longlong param_1,longlong *param_2,longlong param_3)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong local_res10;
  undefined1 local_res18 [8];
  longlong *local_48;
  uint local_40;
  uint local_3c;
  
  plVar9 = (longlong *)0x0;
  UEngine::GetLocalPlayerIterator(DAT_146b17150,&local_48);
  do {
    plVar10 = plVar9;
    if ((int)local_40 < 0) {
LAB_1425c1ec5:
      if (plVar10[6] != 0) {
        lVar2 = AActor::GetLevel();
        lVar3 = AActor::GetLevel(param_2);
        if (lVar2 == lVar3) {
          plVar7 = (longlong *)plVar10[6];
          if ((char)plVar7[0x25] == '\x03') {
            uVar4 = (**(code **)(*plVar7 + 0x148))(plVar7);
            FUN_142543860(uVar4,plVar7,0,1);
          }
          else {
            local_res10 = CONCAT44(local_res10._4_4_,0xffffffff);
            FUN_1425cbe10(param_1,&local_res10);
          }
          *(undefined8 *)(plVar10[6] + 0x508) = 0;
          *(undefined8 *)(plVar10[6] + 0x688) = 0;
          plVar10[6] = 0;
        }
      }
      *(undefined4 *)(plVar10 + 7) = *(undefined4 *)(param_1 + 0x38);
      *(undefined1 *)(param_2 + 0x25) = 2;
      param_2[0xd1] = param_3;
      (**(code **)(*param_2 + 0xd18))(param_2,plVar10);
      fVar1 = *(float *)(*(longlong *)(param_1 + 0x58) + 0x170);
      *(undefined4 *)(param_1 + 300) = 3;
      *(longlong **)(param_1 + 0x30) = param_2;
      *(longlong **)(param_1 + 0x98) = param_2;
      *(double *)(param_1 + 0x1e8) = (double)fVar1;
      local_res10 = (**(code **)(*param_2 + 0x148))(param_2);
      plVar6 = (longlong *)0x0;
      local_48 = (longlong *)0x0;
      local_40 = 0;
      plVar7 = *(longlong **)(local_res10 + 0x88);
      local_3c = 0;
      plVar8 = (longlong *)((longlong)*(int *)(local_res10 + 0x90) & 0x1fffffffffffffff);
      if (plVar7 + *(int *)(local_res10 + 0x90) < plVar7) {
        plVar8 = plVar6;
      }
      plVar5 = plVar6;
      if (plVar8 != (longlong *)0x0) {
        do {
          if ((((*plVar7 != 0) && (lVar2 = *(longlong *)(*plVar7 + 0x120), lVar2 != 0)) &&
              ((*(byte *)(lVar2 + 0x204) & 0x10) != 0)) && ((*(byte *)(lVar2 + 0x205) & 0x40) == 0))
          {
            local_40 = (int)plVar5 + 1;
            if ((int)plVar6 < (int)local_40) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_48,plVar5);
            }
            plVar6 = (longlong *)0x0;
            plVar5 = local_48 + (longlong)(int)plVar5 * 2;
            if (plVar5 != (longlong *)0x0) {
              plVar5[1] = 0;
              *plVar5 = 0;
              plVar6 = plVar5;
            }
            lVar2 = UObjectBaseUtility::GetOutermost(lVar2);
            plVar5 = (longlong *)
                     APlayerController::NetworkRemapPath
                               (param_2,local_res18,*(undefined8 *)(lVar2 + 0x18),0);
            lVar2 = *plVar5;
            *(uint *)(plVar6 + 1) = *(uint *)(plVar6 + 1) | 1;
            *plVar6 = lVar2;
            plVar6 = (longlong *)(ulonglong)local_3c;
            plVar5 = (longlong *)(ulonglong)local_40;
          }
          plVar7 = plVar7 + 1;
          plVar9 = (longlong *)((longlong)plVar9 + 1);
        } while (plVar9 != plVar8);
        if (0 < (int)plVar5) {
          FUN_1429e2110(param_2,&local_48,*(undefined8 *)(local_res10 + 0x18));
        }
        if (local_48 != (longlong *)0x0) {
          FMemory::Free();
        }
      }
      UEngine::GetLocalPlayerIterator
                (DAT_146b17150,&local_48,*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0xd0));
      while( true ) {
        if ((int)local_40 < 0) {
          return;
        }
        plVar9 = local_48;
        if (((int)local_48[1] <= (int)local_40) ||
           (*(longlong *)(*local_48 + (longlong)(int)local_40 * 8) != 0)) break;
        local_40 = local_40 + 1;
      }
      while( true ) {
        if ((int)local_40 < 0) {
          return;
        }
        if ((int)plVar9[1] <= (int)local_40) break;
        plVar7 = *(longlong **)(*plVar9 + (longlong)(int)local_40 * 8);
        if (plVar7 != plVar10) {
          (**(code **)(*plVar7 + 0x2b0))();
          plVar9 = local_48;
        }
        do {
          local_40 = local_40 + 1;
          if ((int)local_40 < 0) {
            return;
          }
        } while (((int)local_40 < (int)plVar9[1]) &&
                (*(longlong *)(*plVar9 + (longlong)(int)local_40 * 8) == 0));
      }
      return;
    }
    if (((int)local_48[1] <= (int)local_40) ||
       (*(longlong *)(*local_48 + (longlong)(int)local_40 * 8) != 0)) {
      plVar10 = (longlong *)0x0;
      if ((-1 < (int)local_40) && ((int)local_40 < (int)local_48[1])) {
        plVar10 = *(longlong **)(*local_48 + (longlong)(int)local_40 * 8);
      }
      goto LAB_1425c1ec5;
    }
    local_40 = local_40 + 1;
  } while( true );
}



// FUNCTION 1425c2170 HasDataForLOD body=36 status=ok
// SIG undefined HasDataForLOD(void)

ulonglong UMorphTarget::HasDataForLOD(longlong param_1,int param_2)

{
  ulonglong in_RAX;
  
  if (((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x38))) &&
     (in_RAX = *(ulonglong *)(param_1 + 0x30), 0 < *(int *)(in_RAX + 8 + (longlong)param_2 * 0x30)))
  {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1425c21a0 FUN_1425c21a0 body=102 status=ok
// SIG undefined FUN_1425c21a0(void)

longlong FUN_1425c21a0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  uint7 uVar2;
  longlong *plVar3;
  int local_res18 [4];
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res18,&local_18);
  plVar3 = (longlong *)0x0;
  if (local_res18[0] != -1) {
    plVar3 = (longlong *)((longlong)local_res18[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  plVar1 = plVar3 + 2;
  if (plVar3 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  uVar2 = (uint7)((ulonglong)plVar1 >> 8);
  if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
    return CONCAT71(uVar2,1);
  }
  return (ulonglong)uVar2 << 8;
}



// FUNCTION 1425c2210 HasValidData body=45 status=ok
// SIG undefined HasValidData(void)

ulonglong UMorphTarget::HasValidData(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = *(ulonglong *)(param_1 + 0x30);
  uVar2 = (longlong)*(int *)(param_1 + 0x38) * 0x30 + uVar1;
  while( true ) {
    if (uVar1 == uVar2) {
      return uVar1 & 0xffffffffffffff00;
    }
    if (0 < *(int *)(uVar1 + 8)) break;
    uVar1 = uVar1 + 0x30;
  }
  return CONCAT71((int7)(uVar1 >> 8),1);
}



// FUNCTION 1425c2240 FUN_1425c2240 body=925 status=ok
// SIG undefined FUN_1425c2240(void)

void FUN_1425c2240(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  float fVar1;
  void *_Src;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  
  param_1[0xb] = param_2;
  param_1[0x83] = (longlong)(double)*(float *)(param_2 + 0x170);
  fVar1 = *(float *)(param_2 + 0x170);
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x89] = 0;
  param_1[0x3d] = (longlong)(double)fVar1;
  param_1[0x40] = (longlong)(double)*(float *)(param_2 + 0x170);
  param_1[0x41] = (longlong)(double)*(float *)(param_2 + 0x170);
  *(undefined4 *)(param_1 + 0x43) = *(undefined4 *)(param_2 + 0x170);
  *(undefined4 *)((longlong)param_1 + 0x21c) = *(undefined4 *)(param_2 + 0x170);
  FHistogram::InitHitchTracking(param_1 + 0x300);
  *(undefined4 *)((longlong)param_1 + 300) = param_5;
  FString::operator=(param_1 + 0x15,param_4);
  FString::operator=(param_1 + 0x17,param_4 + 0x10);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_4 + 0x20);
  FString::operator=(param_1 + 0x1a,param_4 + 0x28);
  FString::operator=(param_1 + 0x1c,param_4 + 0x38);
  plVar5 = param_1 + 0x1e;
  if (plVar5 != (longlong *)(param_4 + 0x48)) {
    plVar8 = (longlong *)*plVar5;
    for (iVar11 = (int)param_1[0x1f]; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    iVar11 = *(int *)(param_4 + 0x50);
    puVar10 = *(undefined8 **)(param_4 + 0x48);
    *(int *)(param_1 + 0x1f) = iVar11;
    if ((iVar11 == 0) && (*(int *)((longlong)param_1 + 0xfc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar5,iVar11);
      puVar9 = (undefined8 *)*plVar5;
      for (; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar9 = 0;
        iVar4 = *(int *)(puVar10 + 1);
        _Src = (void *)*puVar10;
        *(int *)(puVar9 + 1) = iVar4;
        if (iVar4 == 0) {
          *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar9,iVar4,0);
          _guard_xfg_dispatch_icall_nop((void *)*puVar9,_Src,(longlong)iVar4 * 2);
        }
        puVar9 = puVar9 + 2;
        puVar10 = puVar10 + 2;
      }
    }
  }
  FString::operator=(param_1 + 0x20,param_4 + 0x58);
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_4 + 0x68);
  *(undefined4 *)(param_1 + 0x14) = param_6;
  *(undefined4 *)(param_1 + 0x30) = param_7;
  puVar10 = (undefined8 *)param_1[0x27];
  param_1[0x27] = 0;
  if (puVar10 != (undefined8 *)0x0) {
    (**(code **)*puVar10)(puVar10,1);
  }
  local_58 = *(undefined8 *)(param_2 + 0xc0);
  local_50 = *(longlong *)(param_2 + 200);
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*param_1 + 0x328))(param_1,&local_58);
  cVar3 = FURL::HasOption(param_1 + 0x15,&DAT_14510e840);
  plVar5 = (longlong *)UPlayer::GetPrivateStaticClass();
  lVar7 = plVar5[0x1f];
  if (cVar3 == '\0') {
    if (lVar7 == 0) {
      (**(code **)(*plVar5 + 0x368))(plVar5);
      lVar7 = plVar5[0x1f];
    }
    iVar11 = *(int *)(lVar7 + 0x3c);
  }
  else {
    if (lVar7 == 0) {
      (**(code **)(*plVar5 + 0x368))(plVar5);
      lVar7 = plVar5[0x1f];
    }
    iVar11 = *(int *)(lVar7 + 0x40);
  }
  if (iVar11 == 0) {
    iVar4 = 0xa28;
  }
  else {
    iVar4 = 0x708;
    if (0x707 < iVar11) {
      iVar4 = iVar11;
    }
  }
  *(int *)(param_1 + 7) = iVar4;
  lVar7 = 0;
  if (param_1[0xc] != 0) {
    lVar6 = FUN_14171c790();
    for (lVar2 = param_1[0xc]; (lVar7 = 0, lVar2 != 0 && (lVar7 = param_1[0xc], lVar2 != lVar6));
        lVar2 = *(longlong *)(lVar2 + 0x30)) {
    }
  }
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  lVar7 = FUN_1417985e0(lVar7,param_1,0,0,0,0,0,0,0);
  if (lVar7 != 0) {
    local_48 = *(undefined8 *)(param_1[0xb] + 0xe0);
    local_40 = *(longlong *)(param_1[0xb] + 0xe8);
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      UNLOCK();
    }
    UPackageMapClient::Initialize(lVar7,param_1,&local_48);
    param_1[0xd] = lVar7;
  }
  FUN_1425b9f20(param_1,4,1);
  return;
}



// FUNCTION 1425c25e0 FUN_1425c25e0 body=623 status=ok
// SIG undefined FUN_1425c25e0(void)

undefined1 FUN_1425c25e0(longlong *param_1,char param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  wchar_t *pwVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  double dVar10;
  LARGE_INTEGER local_res8;
  longlong *plVar9;
  
  pwVar4 = (wchar_t *)FURL::GetOption(param_4,L"InitialConnectTimeout=",0);
  if (pwVar4 != (wchar_t *)0x0) {
    dVar10 = _wtof(pwVar4);
    if ((float)dVar10 != 0.0) {
      *(float *)(param_1 + 0xf) = (float)dVar10;
    }
  }
  pwVar4 = (wchar_t *)FURL::GetOption(param_4,L"ConnectionTimeout=",0);
  if (pwVar4 != (wchar_t *)0x0) {
    dVar10 = _wtof(pwVar4);
    if ((float)dVar10 != 0.0) {
      *(float *)((longlong)param_1 + 0x7c) = (float)dVar10;
    }
  }
  cVar2 = FURL::HasOption(param_4,L"NoTimeouts");
  if (cVar2 != '\0') {
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
  QueryPerformanceCounter(&local_res8);
  param_1[0x2f] = (longlong)((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0);
  uVar3 = (**(code **)(*param_1 + 0x2b0))(param_1);
  if (param_2 != '\0') goto LAB_1425c2838;
  puVar6 = (undefined8 *)param_1[0x15];
  plVar9 = (longlong *)0x0;
  plVar8 = (longlong *)0x0;
  param_1[0x15] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6,1);
  }
  (**(code **)(*param_1 + 0x298))(param_1);
  (**(code **)(*param_1 + 0x2b8))(param_1);
  lVar1 = param_1[0x1a];
  plVar5 = (longlong *)FUN_1425baa50();
  if ((((int)plVar5[1] == 0) || ((longlong *)*plVar5 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*(longlong *)*plVar5 + 0x18))(), cVar2 == '\0')) {
    if (DAT_1465342f0 == '\0') {
LAB_1425c27a6:
      if (DAT_146533de0 == 0) goto LAB_1425c2825;
    }
    else {
      DAT_1465342f0 = '\0';
      uVar7 = FCommandLine::Get();
      cVar2 = FParse::Param(uVar7,L"RepDriverEnable");
      if (cVar2 == '\0') {
        uVar7 = FCommandLine::Get();
        cVar2 = FParse::Param(uVar7,L"RepDriverDisable");
        if (cVar2 != '\0') {
          DAT_146533de0 = 0;
          plVar8 = plVar9;
          goto LAB_1425c2825;
        }
        goto LAB_1425c27a6;
      }
      DAT_146533de0 = 1;
    }
    lVar1 = param_1[0x21];
    plVar8 = plVar9;
    if (lVar1 != 0) {
      local_res8.QuadPart = 0;
      uVar7 = GetTransientPackage();
      FUN_1417846f0(uVar7,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      plVar8 = (longlong *)FUN_1417985e0(lVar1,uVar7,0,0,0,0,0,0,0);
    }
  }
  else {
    puVar6 = (undefined8 *)FUN_1425baa50();
    if (*(int *)(puVar6 + 1) != 0) {
      plVar9 = (longlong *)*puVar6;
    }
    plVar8 = (longlong *)(**(code **)(*plVar9 + 0x38))(plVar9,param_1,param_4,lVar1);
  }
LAB_1425c2825:
  FUN_1425d1630(param_1,plVar8);
LAB_1425c2838:
  param_1[0x2d] = param_3;
  return uVar3;
}



// FUNCTION 1425c2850 FUN_1425c2850 body=85 status=ok
// SIG undefined FUN_1425c2850(void)

undefined1 FUN_1425c2850(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine/NetDriver.h",0x248,
             L"Pure virtual not implemented (%s)",L"UNetDriver::InitConnect");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine/NetDriver.h",0x248,
             L"Pure virtual not implemented (%s)",L"UNetDriver::InitConnect");
  return 1;
}



// FUNCTION 1425c28b0 FUN_1425c28b0 body=363 status=ok
// SIG undefined FUN_1425c28b0(void)

void FUN_1425c28b0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  int param_5,int param_6)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_18;
  longlong local_10;
  
  *(undefined8 *)(param_1 + 0x58) = param_2;
  if ((param_6 == 0) || (0x400 < param_6)) {
    param_6 = 0x400;
  }
  *(int *)(param_1 + 0xa0) = param_6;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 300) = param_3;
  if (param_5 == 0) {
    cVar1 = FURL::HasOption(param_1 + 0xa8,&DAT_14510e848);
    plVar2 = (longlong *)UPlayer::GetPrivateStaticClass();
    lVar3 = plVar2[0x1f];
    if (cVar1 == '\0') {
      if (lVar3 == 0) {
        (**(code **)(*plVar2 + 0x368))(plVar2);
        lVar3 = plVar2[0x1f];
      }
      iVar5 = *(int *)(lVar3 + 0x3c);
    }
    else {
      if (lVar3 == 0) {
        (**(code **)(*plVar2 + 0x368))(plVar2);
        lVar3 = plVar2[0x1f];
      }
      iVar5 = *(int *)(lVar3 + 0x40);
    }
    if (iVar5 == 0) {
      param_5 = 0xa28;
    }
    else {
      param_5 = 0x708;
      if (0x707 < iVar5) {
        param_5 = iVar5;
      }
    }
  }
  *(int *)(param_1 + 0x38) = param_5;
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar4 = UPackageMapClient::GetPrivateStaticClass();
  uVar4 = FUN_1417985e0(uVar4,param_1,0,0,0,0,0,0,0);
  local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0xe0);
  local_10 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0xe8);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  UPackageMapClient::Initialize(uVar4,param_1,&local_18);
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  return;
}



// FUNCTION 1425c2a20 FUN_1425c2a20 body=224 status=ok
// SIG undefined FUN_1425c2a20(void)

bool FUN_1425c2a20(longlong param_1)

{
  wint_t wVar1;
  wint_t wVar2;
  undefined8 uVar3;
  wint_t *pwVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  
  if (*(longlong *)(param_1 + 0x100) == 0) {
    puVar6 = &DAT_143f3eda8;
    if (*(int *)(param_1 + 0x38) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = *(undefined2 **)(param_1 + 0x30);
    }
    pwVar4 = &DAT_14510c23c;
    do {
      wVar1 = *(wint_t *)((longlong)(puVar5 + -0xa288611e) + (longlong)pwVar4);
      if ((wVar1 == 0) && (*pwVar4 == 0)) break;
      if (wVar1 != *pwVar4) {
        wVar1 = towlower(wVar1);
        wVar2 = towlower(*pwVar4);
        if (wVar1 != wVar2) goto LAB_1425c2aa0;
      }
      pwVar4 = pwVar4 + 1;
    } while( true );
  }
LAB_1425c2aef:
  return *(longlong *)(param_1 + 0x100) != 0;
LAB_1425c2aa0:
  if (wVar1 != wVar2) {
    if (*(int *)(param_1 + 0x38) != 0) {
      puVar6 = *(undefined2 **)(param_1 + 0x30);
    }
    uVar3 = FUN_1429c30a0();
    uVar3 = FUN_141799830(uVar3,0,puVar6,0,0,0);
    *(undefined8 *)(param_1 + 0x100) = uVar3;
  }
  goto LAB_1425c2aef;
}



// FUNCTION 1425c2b00 FUN_1425c2b00 body=675 status=ok
// SIG undefined FUN_1425c2b00(void)

void FUN_1425c2b00(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  longlong local_res10;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong local_30;
  
  lVar4 = operator_new(0x260);
  plVar8 = (longlong *)0x0;
  plVar5 = plVar8;
  if (lVar4 != 0) {
    plVar5 = (longlong *)FUN_1421e0720(lVar4);
  }
  plVar2 = (longlong *)(param_1 + 0xa8);
  if (plVar2 == &local_res10) {
    if (plVar5 == (longlong *)0x0) goto LAB_1425c2b63;
    puVar6 = (undefined8 *)*plVar5;
  }
  else {
    plVar7 = (longlong *)*plVar2;
    *plVar2 = (longlong)plVar5;
    if (plVar7 == (longlong *)0x0) goto LAB_1425c2b63;
    puVar6 = (undefined8 *)*plVar7;
    plVar5 = plVar7;
  }
  (*(code *)*puVar6)(plVar5,1);
LAB_1425c2b63:
  if (*plVar2 != 0) {
    *(undefined1 *)(*plVar2 + 0x18) = 1;
    local_38 = *(undefined8 *)(param_1 + 0xc0);
    local_30 = *(longlong *)(param_1 + 200);
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    FUN_1421e1f00(*plVar2,1,0x400,1,&local_38);
    local_58 = 0;
    local_50 = 0x47;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy
              (local_58,L"Engine.EngineHandlerComponentFactory(StatelessConnectHandlerComponent)",
               0x8e);
    FUN_1421e0c30(*plVar2,&local_48,&local_58,1);
    plVar5 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    *(undefined8 *)(param_1 + 0xb0) = local_48;
    plVar7 = *(longlong **)(param_1 + 0xb8);
    if (local_40 != plVar7) {
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_40 + 0xc) = *(int *)((longlong)local_40 + 0xc) + 1;
        UNLOCK();
        plVar7 = *(longlong **)(param_1 + 0xb8);
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      *(longlong **)(param_1 + 0xb8) = plVar5;
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar5 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
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
    if ((*(longlong *)(param_1 + 0xb0) != 0) && (*(longlong *)(param_1 + 0xb8) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0xb8) + 8);
      LOCK();
      iVar3 = *piVar1;
      if (iVar3 == 0) {
        *piVar1 = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (0 < iVar3) {
        plVar5 = *(longlong **)(param_1 + 0xb8);
        plVar7 = plVar5;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          iVar3 = (int)plVar5[1];
          bVar9 = iVar3 == 0;
          if (bVar9) {
            *(int *)(plVar5 + 1) = 0;
            iVar3 = 0;
          }
          UNLOCK();
          while (plVar7 = plVar8, !bVar9) {
            LOCK();
            bVar9 = iVar3 == (int)plVar5[1];
            if (bVar9) {
              *(int *)(plVar5 + 1) = iVar3 + 1;
            }
            UNLOCK();
            if (bVar9) {
              plVar7 = plVar5;
              if (plVar5 != (longlong *)0x0) {
                plVar8 = *(longlong **)(param_1 + 0xb0);
              }
              break;
            }
            LOCK();
            iVar3 = (int)plVar5[1];
            bVar9 = iVar3 == 0;
            if (bVar9) {
              *(int *)(plVar5 + 1) = 0;
              iVar3 = 0;
            }
            UNLOCK();
          }
        }
        FUN_1425f3960(plVar8,param_1);
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar8 = plVar7 + 1;
          lVar4 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
        }
      }
    }
    FUN_1421e2510(*plVar2);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_40 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1425c2db0 FUN_1425c2db0 body=171 status=ok
// SIG undefined FUN_1425c2db0(void)

void FUN_1425c2db0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *local_18;
  int local_10;
  
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    UWorld::GetLevelIterator(*(longlong *)(param_1 + 0xd0),&local_18);
    for (; (-1 < local_10 && (local_10 < (int)local_18[1])); local_10 = local_10 + 1) {
      lVar2 = *(longlong *)(*local_18 + (longlong)local_10 * 8);
      if (lVar2 != 0) {
        plVar3 = (longlong *)FUN_142526c60(lVar2);
        lVar4 = *plVar3;
        lVar1 = lVar4 + (longlong)(int)plVar3[1] * 0x28;
        for (; lVar4 != lVar1; lVar4 = lVar4 + 0x28) {
          FUN_1425ba6a0(param_1,param_1,lVar2,lVar4);
        }
      }
    }
  }
  return;
}



// FUNCTION 1425c2e60 InitForNetDriver body=83 status=ok
// SIG undefined InitForNetDriver(void)

void UReplicationDriver::InitForNetDriver(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             0x40,L"Pure virtual not implemented (%s)",L"UReplicationDriver::InitForNetDriver");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             0x40,L"Pure virtual not implemented (%s)",L"UReplicationDriver::InitForNetDriver");
  return;
}



// FUNCTION 1425c2ec0 FUN_1425c2ec0 body=941 status=ok
// SIG undefined FUN_1425c2ec0(void)

void FUN_1425c2ec0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong **pplVar11;
  longlong *plVar12;
  bool bVar13;
  longlong local_res10;
  longlong *local_78;
  int local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong local_40;
  
  lVar6 = operator_new(0x260);
  plVar12 = (longlong *)0x0;
  plVar7 = plVar12;
  if (lVar6 != 0) {
    plVar7 = (longlong *)FUN_1421e0720(lVar6);
  }
  plVar2 = (longlong *)(param_1 + 0x138);
  if (plVar2 == &local_res10) {
    if (plVar7 == (longlong *)0x0) goto LAB_1425c2f3a;
    puVar8 = (undefined8 *)*plVar7;
  }
  else {
    plVar10 = (longlong *)*plVar2;
    *plVar2 = (longlong)plVar7;
    if (plVar10 == (longlong *)0x0) goto LAB_1425c2f3a;
    puVar8 = (undefined8 *)*plVar10;
    plVar7 = plVar10;
  }
  (*(code *)*puVar8)(plVar7,1);
LAB_1425c2f3a:
  if (*plVar2 != 0) {
    uStack_60 = uStack_60 & 0xffffffff00000000;
    local_78 = (longlong *)0x0;
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x90);
    local_68 = &LAB_1425b16b8;
    local_70 = 0;
    puVar8 = (undefined8 *)operator_new(0x30,&local_78);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &PTR_FUN_144318830;
      FWeakObjectPtr::operator=(puVar8 + 1,param_1);
      *(undefined4 *)(puVar8 + 2) = (undefined4)local_68;
      *(undefined4 *)((longlong)puVar8 + 0x14) = local_68._4_4_;
      *(undefined4 *)(puVar8 + 3) = (undefined4)uStack_60;
      *(undefined4 *)((longlong)puVar8 + 0x1c) = uStack_60._4_4_;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[5] = uVar9;
      *puVar8 = &PTR_FUN_144318878;
    }
    lVar3 = *plVar2;
    pplVar11 = (longlong **)(lVar3 + 0x20);
    if (&local_78 != pplVar11) {
      if ((local_70 == 0) || (local_78 == (longlong *)0x0)) {
        if ((*(int *)(lVar3 + 0x28) != 0) && (plVar7 = *pplVar11, plVar7 != (longlong *)0x0)) {
          (**(code **)(*plVar7 + 0x28))(plVar7,0);
          if (*pplVar11 != (longlong *)0x0) {
            plVar7 = (longlong *)FMemory::Realloc(*pplVar11,0,0);
            *pplVar11 = plVar7;
          }
          *(undefined4 *)(lVar3 + 0x28) = 0;
        }
      }
      else {
        (**(code **)(*local_78 + 0x30))(local_78,pplVar11);
      }
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_78);
    local_48 = *param_2;
    local_40 = param_2[1];
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      UNLOCK();
    }
    FUN_1421e1f00(*plVar2,lVar6 == 0,*(int *)(param_1 + 0xa0) << 3,0,&local_48);
    local_68 = (undefined1 *)0x0;
    uStack_60 = 0x47;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    FGenericPlatformString::Memcpy
              (local_68,L"Engine.EngineHandlerComponentFactory(StatelessConnectHandlerComponent)",
               0x8e);
    FUN_1421e0c30(*plVar2,&local_58,&local_68,1);
    plVar7 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
    }
    *(undefined8 *)(param_1 + 0x140) = local_58;
    plVar10 = *(longlong **)(param_1 + 0x148);
    if (local_50 != plVar10) {
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_50 + 0xc) = *(int *)((longlong)local_50 + 0xc) + 1;
        UNLOCK();
        plVar10 = *(longlong **)(param_1 + 0x148);
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
      *(longlong **)(param_1 + 0x148) = plVar7;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar7 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    if ((*(longlong *)(param_1 + 0x140) != 0) && (*(longlong *)(param_1 + 0x148) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x148) + 8);
      LOCK();
      iVar4 = *piVar1;
      if (iVar4 == 0) {
        *piVar1 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) {
        plVar7 = *(longlong **)(param_1 + 0x148);
        plVar10 = plVar7;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          iVar4 = (int)plVar7[1];
          bVar13 = iVar4 == 0;
          if (bVar13) {
            *(int *)(plVar7 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
          while (plVar10 = plVar12, !bVar13) {
            LOCK();
            bVar13 = iVar4 == (int)plVar7[1];
            if (bVar13) {
              *(int *)(plVar7 + 1) = iVar4 + 1;
            }
            UNLOCK();
            if (bVar13) {
              plVar10 = plVar7;
              if (plVar7 != (longlong *)0x0) {
                plVar12 = *(longlong **)(param_1 + 0x140);
              }
              break;
            }
            LOCK();
            iVar4 = (int)plVar7[1];
            bVar13 = iVar4 == 0;
            if (bVar13) {
              *(int *)(plVar7 + 1) = 0;
              iVar4 = 0;
            }
            UNLOCK();
          }
        }
        FUN_1425f3960(plVar12,*(undefined8 *)(param_1 + 0x58));
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar12 = plVar10 + 1;
          lVar6 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
      }
    }
    FUN_1421e2510(*plVar2);
    uVar5 = PacketHandler::GetTotalReservedPacketBits(*plVar2);
    *(undefined4 *)(param_1 + 0x128) = uVar5;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_50 + 1;
      lVar6 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
  }
  plVar12 = (longlong *)param_2[1];
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar12 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  return;
}



// FUNCTION 1425c3270 FUN_1425c3270 body=85 status=ok
// SIG undefined FUN_1425c3270(void)

undefined1 FUN_1425c3270(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine/NetDriver.h",0x254,
             L"Pure virtual not implemented (%s)",L"UNetDriver::InitListen");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine/NetDriver.h",0x254,
             L"Pure virtual not implemented (%s)",L"UNetDriver::InitListen");
  return 1;
}



// FUNCTION 1425c32d0 FUN_1425c32d0 body=2074 status=ok
// SIG undefined FUN_1425c32d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1425c32d0(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong lVar15;
  ushort *puVar16;
  ulonglong uVar17;
  undefined1 auStack_198 [32];
  ushort local_178 [4];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined2 local_160;
  undefined6 uStack_15e;
  longlong local_158;
  longlong local_150;
  undefined4 local_148;
  ushort auStack_144 [126];
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  uVar12 = 0;
  local_48 = 0;
  if (*(char *)(param_1 + 0x7f8) != '\0') {
    if (DAT_1464c9c6c != '\0') {
      iVar7 = *(int *)(param_1 + 0x330);
      local_160 = 0;
      local_170 = (undefined8 *)0x0;
      uStack_168 = 0;
      *(int *)(param_1 + 0x330) = iVar7 + 1;
      if (*(int *)(param_1 + 0x334) < iVar7 + 1) {
        TArray<FStreamOutElement,TFixedAllocator<32>_>::ResizeGrow(param_1 + 0x30,iVar7);
      }
      puVar2 = (undefined4 *)(param_1 + 0x30 + (longlong)iVar7 * 0x18);
      *puVar2 = (undefined4)local_170;
      puVar2[1] = local_170._4_4_;
      puVar2[2] = (undefined4)uStack_168;
      puVar2[3] = uStack_168._4_4_;
      *(ulonglong *)(param_1 + 0x40 + (longlong)iVar7 * 0x18) = CONCAT62(uStack_15e,local_160);
      lVar15 = (longlong)(int)local_48;
      uVar3 = *(undefined1 *)(param_1 + 0x794);
      uVar4 = *(undefined1 *)(param_1 + 0x796);
      uVar6 = *(ushort *)(param_1 + 0x800);
      local_178[0] = (ushort)(*(byte *)(param_1 + 0x797) & 1);
      iVar7 = (int)local_48 + 1;
      if (local_48._4_4_ < iVar7) {
        uVar10 = local_48 & 0xffffffff;
        local_48._0_4_ = iVar7;
        TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_148,uVar10);
        iVar7 = (int)local_48;
      }
      local_48._0_4_ = iVar7;
      bVar5 = *(byte *)(param_1 + 0x7a7);
      *(undefined1 *)((longlong)&local_148 + lVar15 * 8 + 1) = uVar3;
      uVar3 = *(undefined1 *)(param_1 + 0x7a4);
      *(undefined1 *)(&local_148 + lVar15 * 2) = 0;
      *(undefined1 *)((longlong)&local_148 + lVar15 * 8 + 2) = uVar4;
      uVar4 = *(undefined1 *)(param_1 + 0x7a6);
      *(undefined1 *)((longlong)&local_148 + lVar15 * 8 + 3) = 8;
      auStack_144[lVar15 * 4] = uVar6;
      auStack_144[lVar15 * 4 + 1] = local_178[0];
      iVar7 = (int)local_48;
      lVar15 = (longlong)(int)local_48;
      local_178[0] = (ushort)(bVar5 & 1);
      local_48._0_4_ = (int)local_48 + 1;
      if (local_48._4_4_ < (int)local_48) {
        TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_148,iVar7);
      }
      bVar5 = *(byte *)(param_1 + 0x7b7);
      *(undefined1 *)((longlong)&local_148 + lVar15 * 8 + 1) = uVar3;
      uVar3 = *(undefined1 *)(param_1 + 0x7b4);
      *(undefined1 *)(&local_148 + lVar15 * 2) = 0;
      *(undefined1 *)((longlong)&local_148 + lVar15 * 8 + 2) = uVar4;
      uVar4 = *(undefined1 *)(param_1 + 0x7b6);
      *(undefined1 *)((longlong)&local_148 + lVar15 * 8 + 3) = 9;
      auStack_144[lVar15 * 4] = uVar6;
      auStack_144[lVar15 * 4 + 1] = local_178[0];
      iVar7 = (int)local_48;
      lVar15 = (longlong)(int)local_48;
      local_178[0] = (ushort)(bVar5 & 1);
      local_48._0_4_ = (int)local_48 + 1;
      if (local_48._4_4_ < (int)local_48) {
        TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_148,iVar7);
      }
      bVar5 = *(byte *)(param_1 + 0x7d7);
      *(undefined1 *)((longlong)&local_148 + lVar15 * 8 + 1) = uVar3;
      uVar3 = *(undefined1 *)(param_1 + 0x7d4);
      *(undefined1 *)(&local_148 + lVar15 * 2) = 0;
      *(undefined1 *)((longlong)&local_148 + lVar15 * 8 + 2) = uVar4;
      uVar4 = *(undefined1 *)(param_1 + 0x7d6);
      *(undefined1 *)((longlong)&local_148 + lVar15 * 8 + 3) = 10;
      auStack_144[lVar15 * 4] = uVar6;
      auStack_144[lVar15 * 4 + 1] = local_178[0];
      iVar7 = (int)local_48;
      lVar15 = (longlong)(int)local_48;
      local_178[0] = (ushort)(bVar5 & 1);
      local_48._0_4_ = (int)local_48 + 1;
      if (local_48._4_4_ < (int)local_48) {
        TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_148,iVar7);
      }
      bVar5 = *(byte *)(param_1 + 0x7e7);
      *(undefined1 *)((longlong)&local_148 + lVar15 * 8 + 1) = uVar3;
      uVar3 = *(undefined1 *)(param_1 + 0x7e4);
      *(undefined1 *)(&local_148 + lVar15 * 2) = 0;
      *(undefined1 *)((longlong)&local_148 + lVar15 * 8 + 2) = uVar4;
      uVar4 = *(undefined1 *)(param_1 + 0x7e6);
      *(undefined1 *)((longlong)&local_148 + lVar15 * 8 + 3) = 0xb;
      auStack_144[lVar15 * 4] = uVar6;
      auStack_144[lVar15 * 4 + 1] = local_178[0];
      iVar7 = (int)local_48;
      lVar15 = (longlong)(int)local_48;
      local_178[0] = (ushort)(bVar5 & 1);
      local_48._0_4_ = (int)local_48 + 1;
      if (local_48._4_4_ < (int)local_48) {
        TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_148,iVar7);
      }
      bVar5 = *(byte *)(param_1 + 0x787);
      *(undefined1 *)((longlong)&local_148 + lVar15 * 8 + 1) = uVar3;
      uVar3 = *(undefined1 *)(param_1 + 0x784);
      *(undefined1 *)(&local_148 + lVar15 * 2) = 0;
      *(undefined1 *)((longlong)&local_148 + lVar15 * 8 + 2) = uVar4;
      uVar4 = *(undefined1 *)(param_1 + 0x786);
      *(undefined1 *)((longlong)&local_148 + lVar15 * 8 + 3) = 0xc;
      auStack_144[lVar15 * 4] = uVar6;
      auStack_144[lVar15 * 4 + 1] = local_178[0];
      iVar7 = (int)local_48;
      lVar15 = (longlong)(int)local_48;
      local_178[0] = (ushort)(bVar5 & 1);
      local_48._0_4_ = (int)local_48 + 1;
      if (local_48._4_4_ < (int)local_48) {
        TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_148,iVar7);
      }
      bVar5 = *(byte *)(param_1 + 0x7c7);
      *(undefined1 *)((longlong)&local_148 + lVar15 * 8 + 1) = uVar3;
      uVar3 = *(undefined1 *)(param_1 + 0x7c4);
      *(undefined1 *)(&local_148 + lVar15 * 2) = 0;
      *(undefined1 *)((longlong)&local_148 + lVar15 * 8 + 2) = uVar4;
      uVar4 = *(undefined1 *)(param_1 + 0x7c6);
      *(undefined1 *)((longlong)&local_148 + lVar15 * 8 + 3) = 0xe;
      auStack_144[lVar15 * 4] = uVar6;
      auStack_144[lVar15 * 4 + 1] = local_178[0];
      iVar7 = (int)local_48;
      lVar15 = (longlong)(int)local_48;
      local_178[0] = (ushort)(bVar5 & 1);
      local_48._0_4_ = (int)local_48 + 1;
      if (local_48._4_4_ < (int)local_48) {
        TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_148,iVar7);
      }
      bVar5 = *(byte *)(param_1 + 0x7f7);
      *(undefined1 *)((longlong)&local_148 + lVar15 * 8 + 1) = uVar3;
      uVar3 = *(undefined1 *)(param_1 + 0x7f4);
      *(undefined1 *)(&local_148 + lVar15 * 2) = 0;
      *(undefined1 *)((longlong)&local_148 + lVar15 * 8 + 2) = uVar4;
      uVar4 = *(undefined1 *)(param_1 + 0x7f6);
      *(undefined1 *)((longlong)&local_148 + lVar15 * 8 + 3) = 0xf;
      auStack_144[lVar15 * 4] = uVar6;
      auStack_144[lVar15 * 4 + 1] = local_178[0];
      iVar7 = (int)local_48;
      lVar15 = (longlong)(int)local_48;
      local_178[0] = (ushort)(bVar5 & 1);
      local_48._0_4_ = (int)local_48 + 1;
      if (local_48._4_4_ < (int)local_48) {
        TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_148,iVar7);
      }
      *(undefined1 *)(&local_148 + lVar15 * 2) = 0;
      *(undefined1 *)((longlong)&local_148 + lVar15 * 8 + 1) = uVar3;
      *(undefined1 *)((longlong)&local_148 + lVar15 * 8 + 2) = uVar4;
      auStack_144[lVar15 * 4] = uVar6;
      iVar7 = *(int *)(param_1 + 0x330);
      *(undefined1 *)((longlong)&local_148 + lVar15 * 8 + 3) = 3;
      auStack_144[lVar15 * 4 + 1] = local_178[0];
      local_160 = 0;
      local_170 = (undefined8 *)0x0;
      uStack_168 = 0;
      *(int *)(param_1 + 0x330) = iVar7 + 1;
      if (*(int *)(param_1 + 0x334) < iVar7 + 1) {
        TArray<FStreamOutElement,TFixedAllocator<32>_>::ResizeGrow(param_1 + 0x30,iVar7);
      }
      uVar10 = local_48;
      puVar2 = (undefined4 *)(param_1 + 0x30 + (longlong)iVar7 * 0x18);
      *puVar2 = (undefined4)local_170;
      puVar2[1] = local_170._4_4_;
      puVar2[2] = (undefined4)uStack_168;
      puVar2[3] = uStack_168._4_4_;
      *(ulonglong *)(param_1 + 0x40 + (longlong)iVar7 * 0x18) = CONCAT62(uStack_15e,local_160);
      lVar15 = (longlong)(int)local_48;
      uVar6 = *(ushort *)(param_1 + 0x804);
      iVar7 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar7);
      if (local_48._4_4_ < iVar7) {
        TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_148,uVar10 & 0xffffffff);
      }
      auStack_144[lVar15 * 4 + 1] = 1;
      (&local_148)[lVar15 * 2] = 0xd040001;
      auStack_144[lVar15 * 4] = uVar6;
      if (1 < DAT_1464c9c14) {
        *(undefined4 *)(param_1 + 0x820) = 0;
        TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x810,DAT_1465341b0);
        TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x818,DAT_1465341b8);
      }
    }
    if (*(longlong *)(param_1 + 0x680) != 0) {
      puVar8 = (undefined1 *)FUN_1419e2500(param_1,&local_158,(longlong *)(param_1 + 0x680),0);
      uVar10 = local_48;
      lVar15 = (longlong)(int)local_48;
      iVar7 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar7);
      if (local_48._4_4_ < iVar7) {
        TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_148,uVar10 & 0xffffffff);
      }
      lVar1 = lVar15 * 8;
      *(undefined1 *)(&local_148 + lVar15 * 2) = *puVar8;
      *(undefined1 *)((longlong)&local_148 + lVar1 + 1) = puVar8[1];
      *(undefined1 *)((longlong)&local_148 + lVar1 + 2) = puVar8[2];
      *(undefined1 *)((longlong)&local_148 + lVar1 + 3) = puVar8[3];
      auStack_144[lVar15 * 4] = *(ushort *)(puVar8 + 4);
      auStack_144[lVar15 * 4 + 1] = *(ushort *)(puVar8 + 6);
    }
    plVar13 = (longlong *)(param_1 + 0x690);
    local_178[0] = 0x201;
    puVar16 = local_178;
    local_158 = 2;
    plVar11 = plVar13;
    do {
      if (*plVar13 != 0) {
        puVar8 = (undefined1 *)FUN_1419e2500(param_1,&local_150,plVar11,(char)*puVar16);
        uVar10 = local_48;
        lVar15 = (longlong)(int)local_48;
        iVar7 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar7);
        if (local_48._4_4_ < iVar7) {
          TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_148,uVar10 & 0xffffffff)
          ;
        }
        lVar1 = lVar15 * 8;
        *(undefined1 *)(&local_148 + lVar15 * 2) = *puVar8;
        *(undefined1 *)((longlong)&local_148 + lVar1 + 1) = puVar8[1];
        *(undefined1 *)((longlong)&local_148 + lVar1 + 2) = puVar8[2];
        *(undefined1 *)((longlong)&local_148 + lVar1 + 3) = puVar8[3];
        auStack_144[lVar15 * 4] = *(ushort *)(puVar8 + 4);
        auStack_144[lVar15 * 4 + 1] = *(ushort *)(puVar8 + 6);
      }
      plVar11 = plVar11 + 2;
      plVar13 = plVar13 + 2;
      puVar16 = (ushort *)((longlong)puVar16 + 1);
      local_158 = local_158 + -1;
    } while (local_158 != 0);
    puVar14 = &DAT_146ac3d70;
    uVar10 = uVar12;
    uVar17 = uVar12;
    do {
      iVar7 = (int)uVar10;
      if ((iVar7 < 0) || (*(int *)(param_1 + 0x730) <= iVar7)) {
LAB_1425c38d3:
        plVar13 = &local_170;
        plVar11 = &local_158;
        uStack_168 = 0x408000000000000;
        local_170 = puVar14;
      }
      else {
        lVar15 = *(longlong *)(param_1 + 0x728);
        if (*(longlong *)(param_1 + 0x728) == 0) {
          lVar15 = param_1 + 0x708;
        }
        plVar13 = (longlong *)(lVar15 + uVar17);
        if (*plVar13 == 0) goto LAB_1425c38d3;
        plVar11 = &local_150;
      }
      puVar8 = (undefined1 *)FUN_1419e2500(param_1,plVar11,plVar13,iVar7 + 0x10);
      uVar10 = local_48;
      lVar15 = (longlong)(int)local_48;
      iVar9 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar9);
      if (local_48._4_4_ < iVar9) {
        TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_148,uVar10 & 0xffffffff);
      }
      *(undefined1 *)(&local_148 + lVar15 * 2) = *puVar8;
      lVar1 = lVar15 * 8;
      uVar10 = (ulonglong)(iVar7 + 1U);
      *(undefined1 *)((longlong)&local_148 + lVar1 + 1) = puVar8[1];
      uVar17 = uVar17 + 0x10;
      puVar14 = puVar14 + 9;
      *(undefined1 *)((longlong)&local_148 + lVar1 + 2) = puVar8[2];
      *(undefined1 *)((longlong)&local_148 + lVar1 + 3) = puVar8[3];
      auStack_144[lVar15 * 4] = *(ushort *)(puVar8 + 4);
      auStack_144[lVar15 * 4 + 1] = *(ushort *)(puVar8 + 6);
    } while ((int)(iVar7 + 1U) < 2);
    iVar7 = *(int *)(param_1 + 0x6f0);
    if (iVar7 != 0) {
      if (0 < iVar7) {
        do {
          iVar9 = (int)uVar12;
          puVar8 = (undefined1 *)
                   FUN_1419e2500(param_1,&local_150,((longlong)iVar9 + 0x6b) * 0x10 + param_1,
                                 iVar9 + 4);
          uVar12 = local_48;
          lVar15 = (longlong)(int)local_48;
          iVar7 = (int)local_48 + 1;
          local_48 = CONCAT44(local_48._4_4_,iVar7);
          if (local_48._4_4_ < iVar7) {
            TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow
                      (&local_148,uVar12 & 0xffffffff);
          }
          lVar1 = lVar15 * 8;
          uVar12 = (ulonglong)(iVar9 + 1U);
          *(undefined1 *)(&local_148 + lVar15 * 2) = *puVar8;
          *(undefined1 *)((longlong)&local_148 + lVar1 + 1) = puVar8[1];
          *(undefined1 *)((longlong)&local_148 + lVar1 + 2) = puVar8[2];
          *(undefined1 *)((longlong)&local_148 + lVar1 + 3) = puVar8[3];
          auStack_144[lVar15 * 4] = *(ushort *)(puVar8 + 4);
          iVar7 = *(int *)(param_1 + 0x6f0);
          auStack_144[lVar15 * 4 + 1] = *(ushort *)(puVar8 + 6);
        } while ((int)(iVar9 + 1U) < iVar7);
      }
      for (; iVar7 < 4; iVar7 = iVar7 + 1) {
        puVar8 = (undefined1 *)
                 FUN_1419e2500(param_1,&local_150,
                               ((longlong)*(int *)(param_1 + 0x6f0) + 0x6a) * 0x10 + param_1,
                               iVar7 + 4);
        uVar12 = local_48;
        lVar15 = (longlong)(int)local_48;
        iVar9 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar9);
        if (local_48._4_4_ < iVar9) {
          TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_148,uVar12 & 0xffffffff)
          ;
        }
        lVar1 = lVar15 * 8;
        *(undefined1 *)(&local_148 + lVar15 * 2) = *puVar8;
        *(undefined1 *)((longlong)&local_148 + lVar1 + 1) = puVar8[1];
        *(undefined1 *)((longlong)&local_148 + lVar1 + 2) = puVar8[2];
        *(undefined1 *)((longlong)&local_148 + lVar1 + 3) = puVar8[3];
        auStack_144[lVar15 * 4] = *(ushort *)(puVar8 + 4);
        auStack_144[lVar15 * 4 + 1] = *(ushort *)(puVar8 + 6);
      }
    }
    if (0 < *(int *)(param_1 + 0x330)) {
      FUN_1419f1da0(param_1,&local_148);
    }
  }
  return;
}



// FUNCTION 1425c3af0 FUN_1425c3af0 body=134 status=ok
// SIG undefined FUN_1425c3af0(void)

bool FUN_1425c3af0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined2 *puVar3;
  bool bVar4;
  
  if (DAT_146afefc0 != 0) {
    return false;
  }
  bVar4 = false;
  if (*(longlong *)(param_1 + 0x108) == 0) {
    lVar2 = 0;
    if (1 < *(int *)(param_1 + 0x48)) {
      if (*(int *)(param_1 + 0x48) == 0) {
        puVar3 = &DAT_143f3eda8;
      }
      else {
        puVar3 = *(undefined2 **)(param_1 + 0x40);
      }
      uVar1 = UReplicationDriver::GetPrivateStaticClass();
      lVar2 = FUN_141799830(uVar1,0,puVar3,0,0,0);
      *(longlong *)(param_1 + 0x108) = lVar2;
    }
    bVar4 = lVar2 == 0;
  }
  return !bVar4;
}



// FUNCTION 1425c3ba0 FUN_1425c3ba0 body=323 status=ok
// SIG undefined FUN_1425c3ba0(void)

void FUN_1425c3ba0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 local_d8 [144];
  longlong local_48;
  
  plVar1 = param_1 + 0x96;
  lVar3 = (longlong)((int)param_1[0x14] * 8 - (int)param_1[0x25]);
  if (lVar3 == param_1[0xab]) {
    (**(code **)(*plVar1 + 0x168))(plVar1);
  }
  else {
    lVar3 = FUN_1416884c0(local_d8,lVar3,0);
    FArchive::operator=(plVar1,lVar3);
    plVar1 = (longlong *)(lVar3 + 0x90);
    plVar2 = param_1 + 0xa8;
    if (plVar2 != plVar1) {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      *plVar2 = *plVar1;
      *plVar1 = 0;
      *(undefined4 *)(param_1 + 0xa9) = *(undefined4 *)(lVar3 + 0x98);
      *(undefined4 *)((longlong)param_1 + 0x54c) = *(undefined4 *)(lVar3 + 0x9c);
      *(undefined8 *)(lVar3 + 0x98) = 0;
    }
    param_1[0xaa] = *(longlong *)(lVar3 + 0xa0);
    param_1[0xab] = *(longlong *)(lVar3 + 0xa8);
    *(undefined1 *)(param_1 + 0xac) = *(undefined1 *)(lVar3 + 0xb0);
    *(undefined1 *)((longlong)param_1 + 0x561) = *(undefined1 *)(lVar3 + 0xb1);
    if (local_48 != 0) {
      FMemory::Free();
    }
    FArchive::~FArchive(local_d8);
  }
  param_1[0x23] = 0;
  param_1[0x24] = 0;
                    /* WARNING: Could not recover jumptable at 0x0001425c3cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2a8))(param_1);
  return;
}



// FUNCTION 1425c3cf0 FUN_1425c3cf0 body=223 status=ok
// SIG undefined FUN_1425c3cf0(void)

void FUN_1425c3cf0(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  
  lVar1 = DAT_146aff4a0;
  if (*(int *)(param_1 + 0x156c) == -1) {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
      lVar4 = 4;
    }
    else {
      lVar4 = 0;
    }
    if (0 < *(int *)(lVar4 + lVar1)) {
      *(uint *)(param_1 + 0x156c) = param_2 - 1;
      *(uint *)(param_1 + 0x1570) = param_3;
      *(uint *)(param_1 + 0x1574) = param_3 - 1;
      *(uint *)(param_1 + 0x15e0) = param_3 & 0x3ff;
      *(uint *)(param_1 + 0x15e4) = param_2 & 0x3ff;
      TArray<int,FDefaultAllocator>::Init
                (param_1 + 0x15a0,(uint *)(param_1 + 0x15e4),*(undefined4 *)(param_1 + 0x15a8));
      TArray<int,FDefaultAllocator>::Init
                (param_1 + 0x1590,param_1 + 0x15e0,*(undefined4 *)(param_1 + 0x1598));
    }
    return;
  }
  return;
}



// FUNCTION 1425c3dd0 FUN_1425c3dd0 body=190 status=ok
// SIG undefined FUN_1425c3dd0(void)

void FUN_1425c3dd0(longlong param_1,longlong param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 local_18 [16];
  
  puVar5 = (undefined4 *)FGuid::NewGuid(local_18);
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  uVar4 = puVar5[3];
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 8;
  *(undefined1 *)(param_1 + 0x328) = param_3;
  *(undefined4 *)(param_1 + 0x318) = uVar1;
  *(undefined4 *)(param_1 + 0x31c) = uVar2;
  *(undefined4 *)(param_1 + 800) = uVar3;
  *(undefined4 *)(param_1 + 0x324) = uVar4;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1 + 0x28,0);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x38,0);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x48,0);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 100) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x58,0);
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(int *)(param_1 + 0x74) != 0) {
    TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(param_1 + 0x68,0);
  }
  *(undefined4 *)(param_1 + 0x32c) = 4;
  if (param_2 != 0) {
    *(longlong *)(param_2 + 0x468) = param_1;
  }
  return;
}



// FUNCTION 1425c3e90 Initialize body=277 status=ok
// SIG undefined Initialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UPackageMapClient::Initialize(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_1 + 0x130) = param_2;
  uStack_40 = (longlong *)param_3[1];
  puVar7 = (undefined8 *)(param_1 + 0x310);
  local_48 = *param_3;
  if (uStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_40 + 1) = (int)uStack_40[1] + 1;
    UNLOCK();
  }
  if (&local_48 != puVar7) {
    local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    uVar5 = *puVar7;
    plVar4 = *(longlong **)(param_1 + 0x318);
    local_38 = (undefined4)local_48;
    uStack_34 = local_48._4_4_;
    uStack_30 = (undefined4)uStack_40;
    uStack_2c = uStack_40._4_4_;
    *(undefined4 *)puVar7 = (undefined4)local_48;
    *(undefined4 *)(param_1 + 0x314) = local_48._4_4_;
    *(undefined4 *)(param_1 + 0x318) = (undefined4)uStack_40;
    *(undefined4 *)(param_1 + 0x31c) = uStack_40._4_4_;
    local_48 = uVar5;
    uStack_40 = plVar4;
  }
  plVar4 = uStack_40;
  if (uStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_40 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*uStack_40)(uStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*uStack_40 + 8))(uStack_40,1);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x308) = 0;
  *(longlong *)(param_1 + 0x2e8) = param_1 + 0x1f8;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  return;
}



// FUNCTION 1425c3fb0 FUN_1425c3fb0 body=559 status=ok
// SIG undefined FUN_1425c3fb0(void)

void FUN_1425c3fb0(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  char param_9)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar6 = *(longlong *)(param_5 + 0x30);
  lVar2 = param_5;
  while (lVar8 = lVar6, lVar8 != 0) {
    lVar2 = lVar8;
    lVar6 = *(longlong *)(lVar8 + 0x30);
  }
  if ((((~(byte)(*(uint *)(lVar2 + 0x88) >> 7) & 1) == 0) ||
      ((~(byte)(*(uint *)(lVar2 + 0x88) >> 0xe) & 1) == 0)) ||
     (iVar5 = (**(code **)(*param_4 + 0x2d8))(param_4,0), iVar5 != 0)) {
    lVar6 = (**(code **)(*param_4 + 0x280))(param_4);
    if (lVar6 != 0) {
      param_4 = (longlong *)param_4[0x32e];
    }
    if (*(int *)((longlong)param_4 + 300) != 1) {
      lVar6 = param_2;
      if (param_3 != 0) {
        lVar6 = param_3;
      }
      lVar7 = FUN_14171a990(param_1[0x1e],*(undefined8 *)(lVar6 + 0x10));
      lVar8 = lVar7;
      if (lVar7 != 0) {
        do {
          TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::FindId(lVar8 + 0x30,&param_5,lVar2);
          if (((int)param_5 == -1) ||
             (lVar9 = *(longlong *)(lVar8 + 0x30) + (longlong)(int)param_5 * 0x18, lVar9 == 0)) {
            lVar9 = 0;
          }
          else {
            lVar9 = *(longlong *)(lVar9 + 8);
            if (lVar9 != 0) goto LAB_1425c40d1;
          }
          plVar1 = (longlong *)(lVar8 + 8);
          lVar8 = *plVar1;
        } while (*plVar1 != 0);
        if (lVar9 != 0) {
LAB_1425c40d1:
          FWeakObjectPtr::operator=(&param_5,param_2);
          lVar8 = FUN_14240d190(param_4,&param_5);
          cVar3 = param_9;
          if (lVar8 == 0) {
            if (param_9 == '\0') {
              return;
            }
            cVar4 = FUN_1407cd900(param_2);
            if (cVar4 != '\0') {
              return;
            }
            cVar4 = (**(code **)(*param_1 + 0x3d0))(param_1,param_2,param_4);
            if (cVar4 == '\0') {
              return;
            }
            lVar8 = FUN_1425b9f20(param_4,2,1,0xffffffff);
            if (lVar8 == 0) {
              return;
            }
            FUN_1423fcda0(lVar8,param_2);
          }
          FUN_1425c8a80(param_1,lVar8,lVar7,lVar9,lVar6,param_4,lVar2,param_6,param_7,param_8,cVar3,
                        0);
        }
      }
    }
  }
  return;
}



// FUNCTION 1425c41e0 FUN_1425c41e0 body=326 status=ok
// SIG undefined FUN_1425c41e0(void)

void FUN_1425c41e0(longlong *param_1,undefined1 param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b04740) && (_Init_thread_header(&DAT_146b04740), DAT_146b04740 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146b04738 =
         (longlong *)
         (**(code **)(*DAT_1468b1f88 + 0x98))
                   (DAT_1468b1f88,L"r.EditorIgnoreStaticLightingInvalidation");
    _Init_thread_footer(&DAT_146b04740);
  }
  if ((DAT_146b04738 == (longlong *)0x0) ||
     (iVar5 = (**(code **)(*DAT_146b04738 + 0x68))(), iVar5 < 2)) {
    (**(code **)(*param_1 + 0x70))(param_1,1);
    FUN_142325970(local_28,param_1);
    FUN_1423907f0(param_1,param_2,param_3);
    iVar5 = 0;
    if (0 < (int)param_1[0xe5]) {
      lVar7 = 0;
      do {
        lVar1 = *(longlong *)(lVar7 + param_1[0xe4]);
        puVar6 = (undefined4 *)FGuid::NewGuid(local_18);
        iVar5 = iVar5 + 1;
        lVar7 = lVar7 + 8;
        uVar2 = puVar6[1];
        uVar3 = puVar6[2];
        uVar4 = puVar6[3];
        *(undefined4 *)(lVar1 + 0x30) = *puVar6;
        *(undefined4 *)(lVar1 + 0x34) = uVar2;
        *(undefined4 *)(lVar1 + 0x38) = uVar3;
        *(undefined4 *)(lVar1 + 0x3c) = uVar4;
      } while (iVar5 < (int)param_1[0xe5]);
    }
    FUN_1423283e0(local_28);
  }
  return;
}



// FUNCTION 1425c4330 FUN_1425c4330 body=88 status=ok
// SIG undefined FUN_1425c4330(void)

bool FUN_1425c4330(void)

{
  int *piVar1;
  char cVar2;
  DWORD DVar3;
  
  piVar1 = DAT_146aff580;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      return 0 < piVar1[1];
    }
  }
  return 0 < *piVar1;
}



// FUNCTION 1425c4390 FUN_1425c4390 body=85 status=ok
// SIG undefined FUN_1425c4390(void)

undefined1 FUN_1425c4390(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine/NetDriver.h",0x230,
             L"Pure virtual not implemented (%s)",L"UNetDriver::IsAvailable");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine/NetDriver.h",0x230,
             L"Pure virtual not implemented (%s)",L"UNetDriver::IsAvailable");
  return 0;
}



// FUNCTION 1425c43f0 IsClientMsgTypeValid body=32 status=ok
// SIG undefined IsClientMsgTypeValid(void)

undefined1 UNetConnection::IsClientMsgTypeValid(longlong param_1,char param_2)

{
  if (*(int *)(param_1 + 0x1c0) == 1) {
    if (param_2 == *(char *)(param_1 + 0x1c4)) {
      return 1;
    }
  }
  else if ((param_2 != '\0') && (param_2 != '\x05')) {
    return 1;
  }
  return 0;
}



// FUNCTION 1425c4410 FUN_1425c4410 body=597 status=ok
// SIG undefined FUN_1425c4410(void)

undefined8 FUN_1425c4410(longlong param_1,undefined4 param_2,longlong *param_3,longlong param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong local_48 [2];
  
  puVar4 = (undefined8 *)FUN_1419f19d0();
  for (puVar4 = (undefined8 *)*puVar4; puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)*puVar4)
  {
    lVar6 = 0;
    if (*(int *)(puVar4[2] + 8) == 2) {
      lVar6 = puVar4[2];
    }
    if (((lVar6 != 0) && (cVar2 = FUN_1425d1bd0(lVar6,param_2,param_3,param_4), cVar2 != '\0')) &&
       ((param_1 == 0 || (cVar2 = FUN_1425c21a0(param_1,lVar6,0), cVar2 == '\0')))) {
      return 0;
    }
  }
  iVar3 = (**(code **)(*param_3 + 0x178))(param_3);
  puVar4 = (undefined8 *)FUN_1419f19c0();
  puVar4 = (undefined8 *)*puVar4;
  do {
    if (puVar4 == (undefined8 *)0x0) {
      return 1;
    }
    lVar6 = puVar4[2];
    lVar7 = 0;
    if (*(int *)(**(longlong **)(lVar6 + 0x10) + 8) == 2) {
      lVar7 = **(longlong **)(lVar6 + 0x10);
    }
    if ((lVar7 != 0) && ((*(longlong *)(lVar6 + 0x30) != 0) == (iVar3 != 0))) {
      iVar8 = 0;
      iVar9 = 0;
      if (0 < *(int *)(lVar6 + 0x18)) {
        lVar7 = 0;
        do {
          lVar1 = *(longlong *)(lVar7 + *(longlong *)(lVar6 + 0x10));
          lVar5 = 0;
          if (*(int *)(lVar1 + 8) == 2) {
            lVar5 = lVar1;
          }
          FName::FName(local_48,L"FLocalVertexFactory",1);
          cVar2 = FUN_142583950();
          if (((((cVar2 != '\0') && (cVar2 = (**(code **)(*param_3 + 800))(), cVar2 != '\0')) &&
               (*(longlong *)(param_4 + 0x20) == local_48[0])) ||
              ((cVar2 = (**(code **)(lVar5 + 0x138))(param_2,param_3,param_4), cVar2 == '\0' ||
               (cVar2 = (**(code **)(*param_3 + 8))(param_3,param_2,lVar5,param_4), cVar2 == '\0')))
              ) || (cVar2 = (**(code **)(param_4 + 0x38))(param_2,param_3,lVar5), cVar2 == '\0'))
          break;
          iVar8 = iVar8 + 1;
          iVar9 = iVar9 + 1;
          lVar7 = lVar7 + 8;
        } while (iVar9 < *(int *)(lVar6 + 0x18));
      }
      if ((iVar8 == *(int *)(lVar6 + 0x18)) && (iVar8 = 0, 0 < *(int *)(lVar6 + 0x18))) {
        lVar7 = 0;
        do {
          lVar1 = *(longlong *)(lVar7 + *(longlong *)(lVar6 + 0x10));
          lVar5 = 0;
          if (*(int *)(lVar1 + 8) == 2) {
            lVar5 = lVar1;
          }
          if ((lVar5 != 0) && (cVar2 = FUN_1425d1bd0(lVar5,param_2,param_3,param_4), cVar2 != '\0'))
          {
            if (param_1 == 0) {
              return 0;
            }
            cVar2 = FUN_142598d00(param_1,lVar6);
            if (cVar2 == '\0') {
              return 0;
            }
          }
          iVar8 = iVar8 + 1;
          lVar7 = lVar7 + 8;
        } while (iVar8 < *(int *)(lVar6 + 0x18));
      }
    }
    puVar4 = (undefined8 *)*puVar4;
  } while( true );
}



// FUNCTION 1425c4670 IsIdentical body=124 status=ok
// SIG undefined IsIdentical(void)

ulonglong FMaterialUniformExpressionExternalTextureBase::IsIdentical
                    (longlong *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = (**(code **)(*param_2 + 8))(param_2);
  uVar3 = (**(code **)(*param_1 + 8))(param_1);
  if ((uVar3 == uVar2) &&
     (uVar3 = (ulonglong)*(uint *)(param_2 + 2), *(uint *)(param_1 + 2) == *(uint *)(param_2 + 2)))
  {
    uVar1 = *(uint *)((longlong)param_1 + 0x14) ^ *(uint *)((longlong)param_2 + 0x14);
    uVar3 = (ulonglong)uVar1;
    if ((((int)param_1[4] == (int)param_2[4] &&
         *(int *)((longlong)param_1 + 0x1c) == *(int *)((longlong)param_2 + 0x1c)) &&
        (int)param_1[3] == (int)param_2[3]) && uVar1 == 0) {
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1425c46f0 FUN_1425c46f0 body=88 status=ok
// SIG undefined FUN_1425c46f0(void)

undefined8 FUN_1425c46f0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined **ppuVar2;
  
  ppuVar2 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
  if ((ppuVar2 == &PTR_u_FMaterialUniformExpressionExtern_146533e88) &&
     (*(longlong *)(param_1 + 0x28) == param_2[5])) {
    cVar1 = FMaterialUniformExpressionExternalTextureBase::IsIdentical(param_1,param_2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1425c4750 FUN_1425c4750 body=84 status=ok
// SIG undefined FUN_1425c4750(void)

undefined8 FUN_1425c4750(longlong param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  
  if ((param_3[0x311] == *(longlong *)(*(longlong *)(param_1 + 0xd8) + 0x18)) &&
     (cVar1 = (**(code **)(*param_3 + 0x348))(param_3), cVar1 != '\0')) {
    return 1;
  }
  if (param_2 == param_3[6]) {
    return 1;
  }
  return 0;
}



// FUNCTION 1425c4820 FUN_1425c4820 body=85 status=ok
// SIG undefined FUN_1425c4820(void)

undefined1 FUN_1425c4820(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine/NetDriver.h",0x342,
             L"Pure virtual not implemented (%s)",L"UNetDriver::IsNetResourceValid");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine/NetDriver.h",0x342,
             L"Pure virtual not implemented (%s)",L"UNetDriver::IsNetResourceValid");
  return 0;
}



// FUNCTION 1425c4880 FUN_1425c4880 body=230 status=ok
// SIG undefined FUN_1425c4880(void)

ulonglong FUN_1425c4880(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  DWORD DVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  byte bVar8;
  
  lVar7 = DAT_146aff580;
  bVar8 = 0;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar3 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
    lVar5 = 4;
  }
  else {
    lVar5 = 0;
  }
  if (0 < *(int *)(lVar5 + lVar7)) {
    plVar1 = *(longlong **)(param_1 + 0x520);
    plVar2 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0) {
      uVar6 = (**(code **)(*plVar1 + 0x308))(plVar1,plVar2);
      return uVar6;
    }
    if (((plVar2 != (longlong *)0x0) && (lVar7 = (**(code **)(*plVar2 + 0x148))(plVar2), lVar7 != 0)
        ) && (((double)param_2[3] != 0.0 &&
              ((double)*(float *)(lVar7 + 0x790) < (double)param_2[2] ||
               (double)*(float *)(lVar7 + 0x790) == (double)param_2[2])))) {
      bVar8 = 0;
      if (1.0 / *(float *)(plVar2 + 0x28) < *(float *)(param_2 + 4)) {
        bVar8 = 1;
      }
    }
  }
  return (ulonglong)bVar8;
}



// FUNCTION 1425c4970 FUN_1425c4970 body=85 status=ok
// SIG undefined FUN_1425c4970(void)

undefined1 FUN_1425c4970(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             100,L"Pure virtual not implemented (%s)",
             L"UReplicationDriver::IsNetworkActorUpdateFrequencyThrottled");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             100,L"Pure virtual not implemented (%s)",
             L"UReplicationDriver::IsNetworkActorUpdateFrequencyThrottled");
  return 0;
}



// FUNCTION 1425c49d0 FUN_1425c49d0 body=26 status=ok
// SIG undefined FUN_1425c49d0(void)

bool FUN_1425c49d0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FRenderCommandFence::IsFenceComplete(param_1 + 0x308);
  return cVar1 != '\0';
}



// FUNCTION 1425c4a00 FUN_1425c4a00 body=182 status=ok
// SIG undefined FUN_1425c4a00(void)

void FUN_1425c4a00(longlong param_1,int param_2)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x820);
  if (uVar2 < (uint)(param_2 * 0x30)) {
    *(undefined4 *)(param_1 + 0x820) = 0;
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x810,0);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x818,0);
    (**(code **)(*(longlong *)(param_1 + 0x808) + 8))
              ((longlong *)(param_1 + 0x808),0x10,param_2 * 3,1,2);
    uVar2 = *(uint *)(param_1 + 0x820);
  }
  uVar1 = (**(code **)(*DAT_146ab6358 + 0x4b0))
                    (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x810),0,uVar2,1);
  *(undefined8 *)(param_1 + 0x828) = uVar1;
  return;
}



// FUNCTION 1425c4ac0 FUN_1425c4ac0 body=34 status=ok
// SIG undefined FUN_1425c4ac0(void)

undefined8 FUN_1425c4ac0(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x1970) + 0x290))();
  return param_2;
}



// FUNCTION 1425c4af0 FUN_1425c4af0 body=107 status=ok
// SIG undefined FUN_1425c4af0(void)

undefined8 * FUN_1425c4af0(undefined8 param_1,undefined8 *param_2)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine/NetConnection.h",0x284
             ,L"Pure virtual not implemented (%s)",L"UNetConnection::LowLevelDescribe");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine/NetConnection.h",0x284
             ,L"Pure virtual not implemented (%s)",L"UNetConnection::LowLevelDescribe");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1425c4b60 <lambda_invoker_cdecl> body=12 status=ok
// SIG undefined <lambda_invoker_cdecl>(void)

void <lambda_35ab28b87e35bf3b4fc6cb932d2fec24>::<lambda_invoker_cdecl>(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001425c4b65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x380))(param_1,0);
  return;
}



// FUNCTION 1425c4b70 FUN_1425c4b70 body=107 status=ok
// SIG undefined FUN_1425c4b70(void)

undefined8 * FUN_1425c4b70(undefined8 param_1,undefined8 *param_2)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine/NetDriver.h",0x273,
             L"Pure virtual not implemented (%s)",L"UNetDriver::LowLevelGetNetworkNumber");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine/NetDriver.h",0x273,
             L"Pure virtual not implemented (%s)",L"UNetDriver::LowLevelGetNetworkNumber");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1425c4be0 FUN_1425c4be0 body=34 status=ok
// SIG undefined FUN_1425c4be0(void)

undefined8 FUN_1425c4be0(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x1970) + 0x288))();
  return param_2;
}



// FUNCTION 1425c4c10 FUN_1425c4c10 body=107 status=ok
// SIG undefined FUN_1425c4c10(void)

undefined8 * FUN_1425c4c10(undefined8 param_1,undefined8 *param_2)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine/NetConnection.h",0x281
             ,L"Pure virtual not implemented (%s)",L"UNetConnection::LowLevelGetRemoteAddress");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine/NetConnection.h",0x281
             ,L"Pure virtual not implemented (%s)",L"UNetConnection::LowLevelGetRemoteAddress");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1425c4c80 FUN_1425c4c80 body=83 status=ok
// SIG undefined FUN_1425c4c80(void)

void FUN_1425c4c80(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine/NetConnection.h",0x292
             ,L"Pure virtual not implemented (%s)",L"UNetConnection::LowLevelSend");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine/NetConnection.h",0x292
             ,L"Pure virtual not implemented (%s)",L"UNetConnection::LowLevelSend");
  return;
}



// FUNCTION 1425c4ce0 FUN_1425c4ce0 body=55 status=ok
// SIG undefined FUN_1425c4ce0(void)

undefined1 FUN_1425c4ce0(longlong param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 local_18 [16];
  
  uVar2 = FUN_14175d020();
  puVar3 = (undefined8 *)FGuid::NewGuid(local_18);
  uVar1 = puVar3[1];
  *(undefined8 *)(param_1 + 0x318) = *puVar3;
  *(undefined8 *)(param_1 + 800) = uVar1;
  return uVar2;
}



// FUNCTION 1425c4d20 FUN_1425c4d20 body=277 status=ok
// SIG undefined FUN_1425c4d20(void)

void FUN_1425c4d20(uint param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined1 local_res18 [16];
  longlong local_18 [2];
  
  FUN_1404a3a40(param_3,L"PARTICLE_FACTORY",&DAT_143f591f0);
  FUN_1404a3a40(param_3,L"PARTICLE_MESH_FACTORY",&DAT_143f591f0);
  FUN_1404a3a40(param_3,L"PARTICLE_MESH_INSTANCED",&DAT_143f591f0);
  local_18[1] = 0x14;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0x14,"MANUAL_VERTEX_FETCH",0x14,0x3f);
  piVar3 = (int *)TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
                  ::FindId(param_3 + 0x200,local_res18,local_18);
  iVar1 = *piVar3;
  if (local_18[0] != 0) {
    FMemory::Free(local_18[0]);
  }
  if ((iVar1 == -1) && ((0x1d < param_1 || ((0x25e2efcaU >> (param_1 & 0x1f) & 1) == 0)))) {
    if ((param_1 < 0x1c) &&
       (((0x8051000U >> (param_1 & 0x1f) & 1) != 0 &&
        (uVar2 = RHIGetShaderLanguageVersion(param_1), uVar2 < 2)))) {
      return;
    }
    FUN_1404a3a40(param_3,L"MANUAL_VERTEX_FETCH",&DAT_143f591f0);
  }
  return;
}



// FUNCTION 1425c4e40 ModifyCompilationEnvironment body=41 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FMeshParticleVertexFactoryEmulatedInstancing::ModifyCompilationEnvironment
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1425c4d20();
  FUN_1404a3a40(param_3,L"PARTICLE_MESH_INSTANCED",&DAT_144573578);
  return;
}



// FUNCTION 1425c4e70 FUN_1425c4e70 body=488 status=ok
// SIG undefined FUN_1425c4e70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1425c4e70(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte bVar11;
  undefined1 auStack_178 [32];
  longlong local_158;
  undefined1 local_150 [8];
  short local_148 [128];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  bVar11 = 0;
  local_158 = param_2;
  cVar2 = FParse::Command(&local_158,&DAT_14510cfe0,1);
  if ((cVar2 == '\0') || (cVar2 = FParse::Token(&local_158,local_148,0x80,1), cVar2 == '\0')) {
    uVar6 = 0;
  }
  else {
    puVar4 = (undefined8 *)FName::FName(local_150,local_148,1);
    lVar5 = FUN_142873bb0(DAT_146b17150,param_1,*puVar4);
    if (lVar5 == 0) {
      lVar5 = FUN_142876210(DAT_146b17150,param_1);
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while (local_148[lVar7] != 0);
      uVar10 = 0;
      lVar7 = local_158 + (longlong)(int)lVar7 * -2;
      uVar6 = uVar10;
      uVar9 = uVar10;
      local_158 = lVar7;
      if (0 < *(int *)(lVar5 + 0x250)) {
        do {
          lVar1 = *(longlong *)(uVar9 + *(longlong *)(lVar5 + 0x248));
          if (lVar1 != 0) {
            bVar3 = (**(code **)(*(longlong *)(lVar1 + 0x28) + 8))
                              (lVar1 + 0x28,param_1,lVar7,param_3);
            bVar11 = bVar11 | bVar3;
            lVar7 = local_158;
          }
          uVar8 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar8;
          uVar9 = uVar9 + 0x10;
        } while ((int)uVar8 < *(int *)(lVar5 + 0x250));
      }
      uVar6 = uVar10;
      if (0 < *(int *)(lVar5 + 0x298)) {
        do {
          lVar1 = *(longlong *)(uVar10 + *(longlong *)(lVar5 + 0x290));
          if (lVar1 != 0) {
            bVar3 = (**(code **)(*(longlong *)(lVar1 + 0x28) + 8))
                              (lVar1 + 0x28,param_1,lVar7,param_3);
            bVar11 = bVar11 | bVar3;
            lVar7 = local_158;
          }
          uVar8 = (int)uVar6 + 1;
          uVar10 = uVar10 + 0x10;
          uVar6 = (ulonglong)uVar8;
        } while ((int)uVar8 < *(int *)(lVar5 + 0x298));
      }
      uVar6 = (ulonglong)bVar11;
    }
    else {
      uVar6 = (**(code **)(*(longlong *)(lVar5 + 0x28) + 8))(lVar5 + 0x28,param_1,local_158,param_3)
      ;
    }
  }
  return uVar6;
}



// FUNCTION 1425c5060 FUN_1425c5060 body=23 status=ok
// SIG undefined FUN_1425c5060(void)

void FUN_1425c5060(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x520) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001425c506f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x520) + 0x2f0))();
    return;
  }
  return;
}



// FUNCTION 1425c5080 ReceivedBunch body=83 status=ok
// SIG undefined ReceivedBunch(void)

void UChannel::ReceivedBunch(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             0x5e,L"Pure virtual not implemented (%s)",
             L"UReplicationDriver::NotifyActorAlwaysRelevantChange");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             0x5e,L"Pure virtual not implemented (%s)",
             L"UReplicationDriver::NotifyActorAlwaysRelevantChange");
  return;
}



// FUNCTION 1425c50e0 FUN_1425c50e0 body=1078 status=ok
// SIG undefined FUN_1425c50e0(void)

void FUN_1425c50e0(longlong *param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  longlong local_b8;
  longlong local_b0;
  uint local_a8;
  uint uStack_a4;
  longlong local_a0;
  undefined1 local_98 [4];
  undefined1 local_94 [4];
  undefined1 local_90 [8];
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  
  FWeakObjectPtr::operator=(&local_b8);
  local_88 = local_b8;
  FUN_1423f93b0(param_1 + 0x60,&local_88);
  local_b0 = 0;
  cVar4 = (**(code **)(*param_1 + 0x368))(param_1);
  if (cVar4 != '\0') {
    cVar4 = FNetGUIDCache::IsDynamicObject(param_1[0x1c],param_2);
    if (((cVar4 == '\0') && (*(char *)(param_2 + 0x95) != '\0')) && (param_3 == '\0')) {
      bVar2 = true;
      local_b0 = FUN_1425ba240(param_1,param_1,param_2,0);
    }
    else {
      bVar2 = false;
    }
    plVar6 = (longlong *)FUN_1425e3b20(param_1[0xa5],local_50,param_2);
    lVar10 = *plVar6;
    local_a0 = lVar10;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_48 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar8 = (int *)((longlong)local_48 + 0xc);
        iVar5 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
    iVar5 = (int)param_1[0x14] + -1;
    local_b8 = (longlong)iVar5;
    if (-1 < iVar5) {
      do {
        lVar3 = *(longlong *)(param_1[0x13] + local_b8 * 8);
        if (((*(byte *)(param_2 + 0x90) & 1) != 0) &&
           (lVar9 = (longlong)*(int *)(lVar3 + 0x88), *(int *)(lVar3 + 0x88) != 0)) {
          iVar12 = 0;
          lVar10 = 0;
          bVar13 = **(longlong **)(lVar3 + 0x80) != param_2;
          iVar5 = 0;
          do {
            lVar10 = lVar10 + 1;
            iVar11 = iVar5 + 1;
            if (lVar10 < lVar9) {
              plVar6 = (longlong *)(*(longlong *)(lVar3 + 0x80) + lVar10 * 8);
              do {
                if (bVar13 != (*plVar6 != param_2)) break;
                iVar11 = iVar11 + 1;
                lVar10 = lVar10 + 1;
                plVar6 = plVar6 + 1;
              } while (lVar10 < lVar9);
            }
            if (bVar13 != false) {
              if (iVar12 != iVar5) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(*(longlong *)(lVar3 + 0x80) + (longlong)iVar12 * 8),
                           (void *)(*(longlong *)(lVar3 + 0x80) + (longlong)iVar5 * 8),
                           (longlong)(iVar11 - iVar5) << 3);
              }
              iVar12 = iVar12 + (iVar11 - iVar5);
            }
            bVar13 = (bool)(bVar13 ^ 1);
            iVar5 = iVar11;
          } while (lVar10 < lVar9);
          *(int *)(lVar3 + 0x88) = iVar12;
          lVar10 = local_a0;
        }
        lVar9 = local_b8;
        FWeakObjectPtr::operator=(&local_a8,param_2);
        if (*(int *)(lVar3 + 0x1608) != *(int *)(lVar3 + 0x1634)) {
          lVar7 = *(longlong *)(lVar3 + 0x1640);
          if (*(longlong *)(lVar3 + 0x1640) == 0) {
            lVar7 = lVar3 + 0x1638;
          }
          iVar5 = *(int *)(lVar7 + ((longlong)(int)(uStack_a4 ^ local_a8) &
                                   (longlong)*(int *)(lVar3 + 0x1648) - 1U) * 4);
          if (iVar5 != -1) {
            lVar7 = *(longlong *)(lVar3 + 0x1600);
            do {
              lVar1 = (longlong)iVar5 * 0x18;
              if ((*(uint *)(lVar1 + lVar7) == local_a8) &&
                 (*(uint *)(lVar1 + 4 + lVar7) == uStack_a4)) {
                if ((iVar5 != -1) &&
                   ((lVar1 + lVar7 != 0 &&
                    (plVar6 = *(longlong **)(lVar1 + lVar7 + 8), plVar6 != (longlong *)0x0)))) {
                  *(uint *)(plVar6 + 0x11) = *(uint *)(plVar6 + 0x11) & 0xfffffff7;
                  (**(code **)(*plVar6 + 0x288))();
                  goto LAB_1425c546e;
                }
                break;
              }
              iVar5 = *(int *)(lVar1 + 0x10 + lVar7);
            } while (iVar5 != -1);
          }
        }
        if (lVar10 == 0) {
LAB_1425c5413:
          bVar13 = false;
        }
        else {
          FWeakObjectPtr::operator=(&local_80,lVar3);
          local_78 = local_80;
          piVar8 = (int *)TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                          ::FindId(lVar10 + 0x30,local_98,&local_78);
          if (*piVar8 == -1) {
            FWeakObjectPtr::operator=(&local_70,lVar3);
            local_68 = local_70;
            piVar8 = (int *)TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                            ::FindId(lVar10 + 0x80,local_94,&local_68);
            if (*piVar8 == -1) goto LAB_1425c5413;
          }
          bVar13 = true;
        }
        if (((bVar2) || (bVar13)) &&
           (local_b0 = FUN_1425ba240(param_1,param_1,param_2,local_b0), local_b0 != 0)) {
          plVar6 = *(longlong **)(lVar3 + 0x1650);
          if (plVar6 == (longlong *)0x0) {
            FUN_140ac3dd0(lVar3 + 0x1658,local_90,local_b0 + 0x1c,0);
          }
          else {
            (**(code **)(*plVar6 + 0x290))(plVar6,local_b0);
          }
        }
LAB_1425c546e:
        FWeakObjectPtr::operator=(&local_60,param_2);
        local_58 = local_60;
        TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
        ::Remove(lVar3 + 0x16f8,&local_58);
        local_b8 = lVar9 + -1;
        lVar10 = local_a0;
      } while (-1 < local_b8);
    }
  }
  FNetworkObjectList::Remove(param_1[0xa5],param_2);
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::Remove
            (param_1 + 0x56,*(undefined8 *)(param_2 + 0x18));
  plVar6 = (longlong *)param_1[0xa4];
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x2a8))(plVar6,param_2);
  }
  return;
}



// FUNCTION 1425c5520 FUN_1425c5520 body=58 status=ok
// SIG undefined FUN_1425c5520(void)

void FUN_1425c5520(longlong param_1,undefined8 param_2)

{
  if (*(longlong **)(param_1 + 0x520) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x520) + 0x2d0))();
  }
  FUN_1425bde20(param_1,param_2);
  return;
}



// FUNCTION 1425c5560 NotifyActorDormancyChange body=83 status=ok
// SIG undefined NotifyActorDormancyChange(void)

void UReplicationDriver::NotifyActorDormancyChange(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             0x56,L"Pure virtual not implemented (%s)",
             L"UReplicationDriver::NotifyActorDormancyChange");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             0x56,L"Pure virtual not implemented (%s)",
             L"UReplicationDriver::NotifyActorDormancyChange");
  return;
}



// FUNCTION 1425c55c0 FUN_1425c55c0 body=125 status=ok
// SIG undefined FUN_1425c55c0(void)

void FUN_1425c55c0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar2 = (**(code **)(*param_1 + 0x368))();
  if (cVar2 == '\0') {
    uVar3 = 1;
  }
  else {
    uVar3 = (undefined4)param_1[0x14];
  }
  FUN_1425ec1a0(param_1[0xa5],param_2,param_3,uVar3,param_1[0x24]);
  plVar1 = (longlong *)param_1[0xa4];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2c8))(plVar1,param_2,param_3);
  }
  return;
}


