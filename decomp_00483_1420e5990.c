// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1420e5990 CacheExistingState body=296 status=ok
// SIG undefined CacheExistingState(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
PropertyTemplate::FTokenProducer<FMargin>::CacheExistingState(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [8];
  longlong local_d0;
  undefined **local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 local_a0 [64];
  longlong local_60;
  undefined4 local_58;
  longlong local_50;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  uVar2 = *(undefined8 *)(param_1 + 8);
  FTrackInstancePropertyBindings::FindOrAdd(uVar2,local_d8);
  lVar3 = FWeakObjectPtr::Get(local_d8);
  if ((((lVar3 == 0) || (local_d0 == 0)) || ((*(uint *)(lVar3 + 8) & 0x18000) != 0)) ||
     (puVar4 = (undefined4 *)(*(int *)(lVar3 + 0x44) + local_d0), puVar4 == (undefined4 *)0x0)) {
    local_e8 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
  }
  else {
    local_e8 = *puVar4;
    uStack_e4 = puVar4[1];
    uStack_e0 = puVar4[2];
    uStack_dc = puVar4[3];
  }
  local_b8 = &PTR__scalar_deleting_destructor__144fb24d8;
  local_b0 = local_e8;
  uStack_ac = uStack_e4;
  uStack_a8 = uStack_e0;
  uStack_a4 = uStack_dc;
  FTrackInstancePropertyBindings::FTrackInstancePropertyBindings(local_a0,uVar2);
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfc;
  puVar5 = (undefined8 *)FMemory::Malloc(0x90,8);
  *param_2 = puVar5;
  bVar1 = *(byte *)(param_2 + 4);
  *(byte *)(param_2 + 4) = bVar1 | 1;
  if ((bVar1 & 2) != 0) {
    puVar5 = param_2;
  }
  *puVar5 = &PTR__scalar_deleting_destructor__144fb24d8;
  *(undefined4 *)(puVar5 + 1) = local_b0;
  *(undefined4 *)((longlong)puVar5 + 0xc) = uStack_ac;
  *(undefined4 *)(puVar5 + 2) = uStack_a8;
  *(undefined4 *)((longlong)puVar5 + 0x14) = uStack_a4;
  FTrackInstancePropertyBindings::FTrackInstancePropertyBindings(puVar5 + 3,local_a0);
  if (local_50 != 0) {
    FMemory::Free();
  }
  local_58 = 0;
  if (local_60 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_a0);
  return param_2;
}



// FUNCTION 1420e5ad0 CacheExistingState body=273 status=ok
// SIG undefined CacheExistingState(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
PropertyTemplate::FTokenProducer<FWidgetTransform>::CacheExistingState
          (longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [32];
  undefined **local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_a0 [64];
  longlong local_60;
  undefined4 local_58;
  longlong local_50;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar3 = (undefined4 *)
           FTrackInstancePropertyBindings::GetCurrentValue<FWidgetTransform>(uVar2,local_e8);
  local_a8 = puVar3[6];
  local_c0 = *puVar3;
  uStack_bc = puVar3[1];
  uStack_b8 = puVar3[2];
  uStack_b4 = puVar3[3];
  local_b0 = *(undefined8 *)(puVar3 + 4);
  local_c8 = &PTR__scalar_deleting_destructor__144fb24c8;
  FTrackInstancePropertyBindings::FTrackInstancePropertyBindings(local_a0,uVar2);
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfc;
  puVar4 = (undefined8 *)FMemory::Malloc(0xa0,8);
  bVar1 = *(byte *)(param_2 + 4);
  *param_2 = puVar4;
  *(byte *)(param_2 + 4) = bVar1 | 1;
  if ((bVar1 & 2) != 0) {
    puVar4 = param_2;
  }
  *puVar4 = &PTR__scalar_deleting_destructor__144fb24c8;
  *(undefined4 *)(puVar4 + 1) = local_c0;
  *(undefined4 *)((longlong)puVar4 + 0xc) = uStack_bc;
  *(undefined4 *)(puVar4 + 2) = uStack_b8;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_b4;
  puVar4[3] = local_b0;
  *(undefined4 *)(puVar4 + 4) = local_a8;
  FTrackInstancePropertyBindings::FTrackInstancePropertyBindings(puVar4 + 5,local_a0);
  if (local_50 != 0) {
    FMemory::Free();
  }
  local_58 = 0;
  if (local_60 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_a0);
  return param_2;
}



// FUNCTION 1420e5bf0 CacheExistingState body=286 status=ok
// SIG undefined CacheExistingState(void)

/* WARNING: Removing unreachable block (ram,0x0001420e5cea) */

undefined8 *
TMaterialTrackExecutionToken<FWidgetMaterialAccessor>::FPreAnimatedTokenProducer::CacheExistingState
          (longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_40;
  void *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  local_40 = *puVar3;
  local_38 = (void *)0x0;
  iVar1 = *(int *)(puVar3 + 2);
  _Src = (void *)puVar3[1];
  local_30 = CONCAT44(local_30._4_4_,iVar1);
  if (iVar1 == 0) {
    local_30 = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
              (&local_38,iVar1,0,puVar3,&PTR_FUN_144fb1a08);
    ::_guard_xfg_dispatch_icall_nop(local_38,_Src,(longlong)iVar1 << 3);
  }
  uVar2 = FUN_1420fc8e0(&local_40,param_3);
  FWeakObjectPtr::operator=(&local_28,uVar2);
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfc;
  puVar3 = (undefined8 *)FMemory::Malloc(0x28);
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 1;
  *param_2 = puVar3;
  if ((*(byte *)(param_2 + 4) & 2) != 0) {
    puVar3 = param_2;
  }
  *puVar3 = &PTR_FUN_144fb1a08;
  puVar3[1] = local_40;
  puVar3[2] = 0;
  puVar3[2] = local_38;
  *(undefined4 *)(puVar3 + 3) = (undefined4)local_30;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = local_30._4_4_;
  *(undefined4 *)(puVar3 + 4) = local_28;
  *(undefined4 *)((longlong)puVar3 + 0x24) = local_24;
  return param_2;
}



// FUNCTION 1420e5d10 FUN_1420e5d10 body=386 status=ok
// SIG undefined FUN_1420e5d10(void)

undefined4 * FUN_1420e5d10(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 *puVar6;
  float fVar7;
  float fVar8;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  float local_30;
  undefined1 local_28 [32];
  
  if (*(char *)(param_1 + 0x728) == '\x01') {
    local_38 = 0;
    local_30 = 0.0;
    local_48 = 0;
    uStack_40 = 0;
    FBoxSphereBounds::TransformBy(&local_48);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x73c);
    iVar2 = *(int *)(param_1 + 0x738);
    fVar7 = (float)iVar1 * 0.5;
    fVar8 = (float)iVar2 * 0.5;
    local_38 = CONCAT44(fVar7,fVar8);
    local_48 = CONCAT44((float)iVar2 * *(float *)(param_1 + 0x75c) - fVar8,0x3f000000);
    uStack_40 = CONCAT44(0x3f800000,(float)iVar1 * *(float *)(param_1 + 0x760) - fVar7);
    local_30 = (float)(int)SQRT((float)((longlong)iVar1 * (longlong)iVar1 +
                                       (longlong)iVar2 * (longlong)iVar2)) * 0.5;
    puVar6 = (undefined4 *)FBoxSphereBounds::TransformBy(&local_48,local_28);
    fVar7 = *(float *)(param_1 + 0x364);
    uVar3 = puVar6[1];
    uVar4 = puVar6[2];
    fVar5 = (float)puVar6[3];
    fVar8 = (float)puVar6[6];
    local_38._0_4_ = (float)*(undefined8 *)(puVar6 + 4);
    local_38._4_4_ = (float)((ulonglong)*(undefined8 *)(puVar6 + 4) >> 0x20);
    *param_2 = *puVar6;
    param_2[1] = uVar3;
    param_2[2] = uVar4;
    param_2[3] = fVar5 * fVar7;
    *(ulonglong *)(param_2 + 4) = CONCAT44(local_38._4_4_ * fVar7,(float)local_38 * fVar7);
    param_2[6] = fVar8 * fVar7;
  }
  return param_2;
}



// FUNCTION 1420e5ea0 FUN_1420e5ea0 body=2010 status=ok
// SIG undefined FUN_1420e5ea0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1420e5ea0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
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
  undefined1 auStack_498 [32];
  undefined1 local_478 [4];
  float local_474;
  undefined4 local_470;
  undefined4 uStack_46c;
  undefined8 local_468;
  float fStack_460;
  float fStack_45c;
  float fStack_454;
  float fStack_44c;
  float fStack_434;
  float fStack_42c;
  undefined8 uStack_410;
  undefined8 uStack_400;
  float local_3c8;
  undefined8 uStack_3bc;
  float fStack_3ac;
  undefined8 local_398;
  undefined4 local_390;
  float local_388;
  float fStack_384;
  float fStack_380;
  float fStack_37c;
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
  undefined4 local_2c8;
  undefined8 local_278;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  longlong *local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined4 local_240;
  longlong local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  longlong local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a0 [64];
  longlong local_160;
  undefined4 local_158;
  char local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined2 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined2 local_e8;
  undefined1 local_e6;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_498;
  uVar4 = 0;
  local_2c8 = 0;
  local_248 = 0;
  local_230 = _DAT_1468b5d78;
  uStack_228 = uRam00000001468b5d80;
  local_220 = _DAT_1468b5d78;
  uStack_218 = uRam00000001468b5d80;
  local_240 = 0xffffffff;
  local_238 = 0;
  local_258 = (longlong *)0x0;
  uStack_250 = 0;
  local_210 = _DAT_1464aa6c0;
  uStack_208 = _DAT_1464aa6c8;
  local_200 = 0;
  local_1f8 = 0x42c80000;
  local_140 = 0x3f800000;
  local_13c = 0xbf800000;
  local_118 = 0;
  uStack_110 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0xffffffff;
  local_1bc = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_150 = '\0';
  local_148 = 0xffffffffffffffff;
  local_138 = 0;
  local_130 = 0;
  local_12c = 0x100;
  local_128 = 0x42b40000;
  local_124 = 0x42b40000;
  local_120 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  local_f4 = 0;
  local_ec = 0;
  local_e8 = 1;
  local_e6 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x20))(*(longlong **)(param_1 + 0x6d8),&local_470)
  ;
  local_398 = *(undefined8 *)(param_1 + 0x698);
  local_260 = local_470;
  local_390 = *(undefined4 *)(param_1 + 0x6a0);
  local_278 = 0;
  local_26c = uStack_46c;
  local_268 = 0;
  local_25c = uStack_46c;
  uVar5 = __libm_sse2_sincosf_(*(float *)(param_1 + 0x6ac) * 0.017453292);
  fVar18 = (float)uVar5;
  local_468 = CONCAT44(fVar18,(int)((ulonglong)uVar5 >> 0x20));
  local_474 = -fVar18;
  local_3c8 = 0.0;
  uStack_3bc = 0;
  fStack_3ac = 0.0;
  fStack_460 = fVar18;
  fStack_45c = fVar18;
  uVar5 = __libm_sse2_sincosf_(*(float *)(param_1 + 0x6a4) * 0.017453292);
  fVar12 = (float)((ulonglong)uVar5 >> 0x20);
  fVar10 = (float)uVar5;
  fVar13 = -fVar10;
  fStack_454 = 0.0;
  fStack_44c = 0.0;
  fStack_434 = 0.0;
  fStack_42c = 0.0;
  uVar5 = __libm_sse2_sincosf_(*(float *)(param_1 + 0x6a8) * 0.017453292);
  fVar11 = (float)((ulonglong)uVar5 >> 0x20);
  fVar9 = (float)uVar5;
  fVar6 = -fVar9;
  uStack_410 = 0;
  uStack_400 = 0;
  fVar22 = fVar6 * 0.0 + fVar11 * fVar12 + fVar10 * 0.0 + 0.0;
  fVar23 = fVar6 * 1.0 + fVar11 * fStack_454 + fStack_434 * 0.0 + 0.0;
  fVar24 = fVar6 * 0.0 + fVar11 * fVar13 + fVar12 * 0.0 + 0.0;
  fVar25 = fVar6 * 0.0 + fVar11 * fStack_44c + fStack_42c * 0.0 + 0.0;
  fVar6 = fVar11 * 0.0 + fVar9 * fVar12 + fVar10 * 0.0 + 0.0;
  fVar7 = fVar11 * 1.0 + fVar9 * fStack_454 + fStack_434 * 0.0 + 0.0;
  fVar8 = fVar11 * 0.0 + fVar9 * fVar13 + fVar12 * 0.0 + 0.0;
  fVar9 = fVar11 * 0.0 + fVar9 * fStack_44c + fStack_42c * 0.0 + 0.0;
  fVar14 = fVar12 * 0.0 + 0.0 + fVar10 * 1.0 + 0.0;
  fVar15 = fStack_454 * 0.0 + 0.0 + fStack_434 * 1.0 + 0.0;
  fVar16 = fVar13 * 0.0 + 0.0 + fVar12 * 1.0 + 0.0;
  fVar17 = fStack_44c * 0.0 + 0.0 + fStack_42c * 1.0 + 0.0;
  fVar10 = fVar12 * 0.0 + 0.0 + fVar10 * 0.0 + 0.0;
  fVar11 = fStack_454 * 0.0 + 0.0 + fStack_434 * 0.0 + 0.0;
  fVar12 = fVar13 * 0.0 + 0.0 + fVar12 * 0.0 + 0.0;
  fVar13 = fStack_44c * 0.0 + 0.0 + fStack_42c * 0.0 + 1.0;
  fVar19 = fVar23 * local_3c8 + fVar22 * 1.0 + fVar24 * uStack_3bc._4_4_ + fVar25 * 0.0;
  fVar20 = fVar23 * (float)local_468 + fVar22 * 0.0 + fVar24 * local_474 + fVar25 * 0.0;
  fVar21 = fVar23 * fVar18 + fVar22 * 0.0 + fVar24 * (float)local_468 + fVar25 * 0.0;
  fVar25 = fVar23 * (float)uStack_3bc + fVar22 * 0.0 + fVar24 * fStack_3ac + fVar25 * 1.0;
  fVar22 = fVar7 * local_3c8 + fVar6 * 1.0 + fVar8 * uStack_3bc._4_4_ + fVar9 * 0.0;
  fVar23 = fVar7 * (float)local_468 + fVar6 * 0.0 + fVar8 * local_474 + fVar9 * 0.0;
  fVar24 = fVar7 * fVar18 + fVar6 * 0.0 + fVar8 * (float)local_468 + fVar9 * 0.0;
  fVar9 = fVar7 * (float)uStack_3bc + fVar6 * 0.0 + fVar8 * fStack_3ac + fVar9 * 1.0;
  fVar6 = fVar15 * local_3c8 + fVar14 * 1.0 + fVar16 * uStack_3bc._4_4_ + fVar17 * 0.0;
  fVar7 = fVar15 * (float)local_468 + fVar14 * 0.0 + fVar16 * local_474 + fVar17 * 0.0;
  fVar8 = fVar15 * fVar18 + fVar14 * 0.0 + fVar16 * (float)local_468 + fVar17 * 0.0;
  fVar14 = fVar15 * (float)uStack_3bc + fVar14 * 0.0 + fVar16 * fStack_3ac + fVar17 * 1.0;
  fVar15 = fVar11 * local_3c8 + fVar10 * 1.0 + fVar12 * uStack_3bc._4_4_ + fVar13 * 0.0;
  fVar16 = fVar11 * (float)local_468 + fVar10 * 0.0 + fVar12 * local_474 + fVar13 * 0.0;
  fVar18 = fVar11 * fVar18 + fVar10 * 0.0 + fVar12 * (float)local_468 + fVar13 * 0.0;
  fVar10 = fVar11 * (float)uStack_3bc + fVar10 * 0.0 + fVar12 * fStack_3ac + fVar13 * 1.0;
  local_388 = fVar20 * 1.0 + fVar19 * 0.0 + fVar21 * 0.0 + fVar25 * 0.0;
  fStack_384 = fVar20 * 0.0 + fVar19 * 0.0 + fVar21 * 1.0 + fVar25 * 0.0;
  fStack_380 = fVar20 * 0.0 + fVar19 * 1.0 + fVar21 * 0.0 + fVar25 * 0.0;
  fStack_37c = fVar20 * 0.0 + fVar19 * 0.0 + fVar21 * 0.0 + fVar25 * 1.0;
  local_378 = fVar23 * 1.0 + fVar22 * 0.0 + fVar24 * 0.0 + fVar9 * 0.0;
  fStack_374 = fVar23 * 0.0 + fVar22 * 0.0 + fVar24 * 1.0 + fVar9 * 0.0;
  fStack_370 = fVar23 * 0.0 + fVar22 * 1.0 + fVar24 * 0.0 + fVar9 * 0.0;
  fStack_36c = fVar23 * 0.0 + fVar22 * 0.0 + fVar24 * 0.0 + fVar9 * 1.0;
  local_368 = fVar7 * 1.0 + fVar6 * 0.0 + fVar8 * 0.0 + fVar14 * 0.0;
  fStack_364 = fVar7 * 0.0 + fVar6 * 0.0 + fVar8 * 1.0 + fVar14 * 0.0;
  fStack_360 = fVar7 * 0.0 + fVar6 * 1.0 + fVar8 * 0.0 + fVar14 * 0.0;
  fStack_35c = fVar7 * 0.0 + fVar6 * 0.0 + fVar8 * 0.0 + fVar14 * 1.0;
  local_358 = fVar16 * 1.0 + fVar15 * 0.0 + fVar18 * 0.0 + fVar10 * 0.0;
  fStack_354 = fVar16 * 0.0 + fVar15 * 0.0 + fVar18 * 1.0 + fVar10 * 0.0;
  fStack_350 = fVar16 * 0.0 + fVar15 * 1.0 + fVar18 * 0.0 + fVar10 * 0.0;
  fStack_34c = fVar16 * 0.0 + fVar15 * 0.0 + fVar18 * 0.0 + fVar10 * 1.0;
  plVar2 = (longlong *)ULocalPlayer::GetPrivateStaticClass();
  if (plVar2[0x1f] == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
  }
  local_478[0] = *(undefined1 *)(plVar2[0x1f] + 0x94);
  FUN_142306cd0(param_1 + 0x30,local_478,*(undefined8 *)(param_1 + 0x6d8),&local_398);
  uStack_250 = *(undefined8 *)(param_1 + 0x6e8);
  local_230 = *(undefined8 *)(param_1 + 0x680);
  uStack_228 = *(undefined8 *)(param_1 + 0x688);
  local_238 = param_1 + 0x20;
  local_258 = param_2;
  lVar3 = operator_new(0x1aa0);
  if (lVar3 != 0) {
    uVar4 = FUN_142742170(lVar3,&local_398);
  }
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar4;
  local_468 = *(undefined8 *)(param_1 + 0x698);
  fStack_460 = *(float *)(param_1 + 0x6a0);
  FUN_14275edd0(uVar4,&local_468);
  FUN_14274b020(uVar4,&local_398);
  if (local_150 != '\0') {
    local_150 = '\0';
    local_158 = 0;
    if (local_160 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (local_1a0);
  }
  local_1a8 = 0;
  if (local_1b0 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_1f0);
  return uVar4;
}



// FUNCTION 1420e6680 Call body=66 status=ok
// SIG undefined Call(void)

undefined8
UE4Function_Private::
TFunctionRefCaller<<lambda_9660092bd0920007bd48b3b3f2c569b9>,TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
::Call(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *param_4;
  local_10 = param_4[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_1420d9c20(param_2,param_1,*param_3,&local_18);
  return param_1;
}



// FUNCTION 1420e66d0 Call body=97 status=ok
// SIG undefined Call(void)

void UE4Function_Private::
     TFunctionRefCaller<<lambda_05e0778bb1535725ad776805881661ff>,void___cdecl(UWidget_*)>::Call
               (undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar3 = UUserWidget::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_1421342d0(lVar1,*param_1);
    }
  }
  return;
}



// FUNCTION 1420e6740 FUN_1420e6740 body=8 status=ok
// SIG undefined FUN_1420e6740(void)

void FUN_1420e6740(undefined8 param_1,undefined8 *param_2)

{
  <lambda_360e99235a3787812a52daafec849ed7>::operator()(param_1,*param_2);
  return;
}



// FUNCTION 1420e6750 FUN_1420e6750 body=92 status=ok
// SIG undefined FUN_1420e6750(void)

void FUN_1420e6750(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    lVar2 = UUserWidget::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x0001420e679f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x2d0))(param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1420e67b0 FUN_1420e67b0 body=23 status=ok
// SIG undefined FUN_1420e67b0(void)

void FUN_1420e67b0(undefined8 *param_1,longlong *param_2)

{
  if (*(longlong *)(*param_2 + 0x18) == *(longlong *)*param_1) {
    *(longlong *)param_1[1] = *param_2;
  }
  return;
}



// FUNCTION 1420e67d0 FUN_1420e67d0 body=8 status=ok
// SIG undefined FUN_1420e67d0(void)

void FUN_1420e67d0(undefined8 param_1,undefined8 *param_2)

{
  FUN_1420da260(param_1,*param_2);
  return;
}



// FUNCTION 1420e67e0 FUN_1420e67e0 body=8 status=ok
// SIG undefined FUN_1420e67e0(void)

void FUN_1420e67e0(undefined8 param_1,undefined8 *param_2)

{
  FUN_1420e3000(*param_2);
  return;
}



// FUNCTION 1420e67f0 FUN_1420e67f0 body=176 status=ok
// SIG undefined FUN_1420e67f0(void)

undefined8 *
FUN_1420e67f0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *param_4;
  local_10 = param_4[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_1420da370(param_2,&local_28,*param_3,&local_18);
  plVar5 = local_20;
  *param_1 = local_28;
  param_1[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = local_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 1420e68a0 FUN_1420e68a0 body=8 status=ok
// SIG undefined FUN_1420e68a0(void)

void FUN_1420e68a0(undefined8 param_1,undefined8 *param_2)

{
  FUN_1420da830(param_1,*param_2);
  return;
}



// FUNCTION 1420e68b0 Call body=104 status=ok
// SIG undefined Call(void)

void UE4Function_Private::
     TFunctionRefCaller<<lambda_109500daa63055641f2213496924cbf3>,void___cdecl(UWidget_*)>::Call
               (longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar3 = UUserWidget::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_1421342d0(lVar1,*param_1 + 0x1f0);
    }
  }
  return;
}



// FUNCTION 1420e6920 Call body=69 status=ok
// SIG undefined Call(void)

void UE4Function_Private::
     TFunctionRefCaller<<lambda_dadf7409b85dba36764c7ab939093d40>,void___cdecl(UObject_*)>::Call
               (longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  param_1 = (longlong *)*param_1;
  uVar2 = *param_2;
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 1420e6970 FUN_1420e6970 body=176 status=ok
// SIG undefined FUN_1420e6970(void)

undefined8 *
FUN_1420e6970(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *param_4;
  local_10 = param_4[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_1420da960(param_2,&local_28,*param_3,&local_18);
  plVar5 = local_20;
  *param_1 = local_28;
  param_1[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = local_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 1420e6a20 FUN_1420e6a20 body=188 status=ok
// SIG undefined FUN_1420e6a20(void)

undefined8 FUN_1420e6a20(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  if (*(char *)(param_2 + 0x8c) == '\x01') {
    lVar4 = UFunction::GetReturnProperty(param_2);
    if (((lVar4 != 0) &&
        (cVar2 = IsConcreteTypeCompatibleWithReflectedType<unsigned_char>(lVar4), cVar2 != '\0')) &&
       (cVar2 = PropertySizesMatch<unsigned_char>(lVar4), cVar2 != '\0')) {
      iVar1 = *(int *)((longlong)param_1 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar5 = iVar1 >> 0x1f & 0xffff;
        uVar3 = iVar1 + uVar5;
        lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) == 0) {
        (**(code **)(*param_1 + 0x208))(param_1,param_2,param_3);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1420e6ae0 FUN_1420e6ae0 body=182 status=ok
// SIG undefined FUN_1420e6ae0(void)

undefined8 FUN_1420e6ae0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  if (*(char *)(param_2 + 0x8c) == '\x01') {
    lVar4 = UFunction::GetReturnProperty(param_2);
    if (((lVar4 != 0) &&
        (cVar2 = IsConcreteTypeCompatibleWithReflectedType<int>(lVar4), cVar2 != '\0')) &&
       (*(int *)(lVar4 + 0x34) == 4)) {
      iVar1 = *(int *)((longlong)param_1 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar5 = iVar1 >> 0x1f & 0xffff;
        uVar3 = iVar1 + uVar5;
        lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) == 0) {
        (**(code **)(*param_1 + 0x208))(param_1,param_2,param_3);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1420e6ba0 FUN_1420e6ba0 body=200 status=ok
// SIG undefined FUN_1420e6ba0(void)

undefined8 FUN_1420e6ba0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  
  if (*(char *)(param_2 + 0x8c) == '\x01') {
    lVar4 = UFunction::GetReturnProperty(param_2);
    if (((lVar4 != 0) &&
        (lVar2 = *(longlong *)(lVar4 + 0x10), lVar5 = UFloatProperty::GetPrivateStaticClass(),
        lVar2 == lVar5)) && (*(int *)(lVar4 + 0x34) == 4)) {
      iVar1 = *(int *)((longlong)param_1 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar6 = iVar1 >> 0x1f & 0xffff;
        uVar3 = iVar1 + uVar6;
        lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) == 0) {
        (**(code **)(*param_1 + 0x208))(param_1,param_2,param_3);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1420e6c70 FUN_1420e6c70 body=182 status=ok
// SIG undefined FUN_1420e6c70(void)

undefined8 FUN_1420e6c70(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  if (*(char *)(param_2 + 0x8c) == '\x01') {
    lVar4 = UFunction::GetReturnProperty(param_2);
    if (((lVar4 != 0) &&
        (cVar2 = IsConcreteTypeCompatibleWithReflectedType<UObject_*>(lVar4), cVar2 != '\0')) &&
       (*(int *)(lVar4 + 0x34) == 8)) {
      iVar1 = *(int *)((longlong)param_1 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar5 = iVar1 >> 0x1f & 0xffff;
        uVar3 = iVar1 + uVar5;
        lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) == 0) {
        (**(code **)(*param_1 + 0x208))(param_1,param_2,param_3);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1420e6d30 FUN_1420e6d30 body=182 status=ok
// SIG undefined FUN_1420e6d30(void)

undefined8 FUN_1420e6d30(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  if (*(char *)(param_2 + 0x8c) == '\x01') {
    lVar4 = UFunction::GetReturnProperty(param_2);
    if (((lVar4 != 0) && (cVar2 = FUN_1420caf70(lVar4), cVar2 != '\0')) &&
       (*(int *)(lVar4 + 0x34) == 0x10)) {
      iVar1 = *(int *)((longlong)param_1 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar5 = iVar1 >> 0x1f & 0xffff;
        uVar3 = iVar1 + uVar5;
        lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) == 0) {
        (**(code **)(*param_1 + 0x208))(param_1,param_2,param_3);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1420e6df0 FUN_1420e6df0 body=185 status=ok
// SIG undefined FUN_1420e6df0(void)

undefined8 FUN_1420e6df0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  if (*(char *)(param_2 + 0x8c) == '\x01') {
    lVar4 = UFunction::GetReturnProperty(param_2);
    if (((lVar4 != 0) &&
        (cVar2 = IsConcreteTypeCompatibleWithReflectedType<FSlateBrush>(lVar4), cVar2 != '\0')) &&
       (*(int *)(lVar4 + 0x34) == 0x88)) {
      iVar1 = *(int *)((longlong)param_1 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar5 = iVar1 >> 0x1f & 0xffff;
        uVar3 = iVar1 + uVar5;
        lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) == 0) {
        (**(code **)(*param_1 + 0x208))(param_1,param_2,param_3);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1420e6eb0 FUN_1420e6eb0 body=182 status=ok
// SIG undefined FUN_1420e6eb0(void)

undefined8 FUN_1420e6eb0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  if (*(char *)(param_2 + 0x8c) == '\x01') {
    lVar4 = UFunction::GetReturnProperty(param_2);
    if (((lVar4 != 0) &&
        (cVar2 = IsConcreteTypeCompatibleWithReflectedType<FSlateColor>(lVar4), cVar2 != '\0')) &&
       (*(int *)(lVar4 + 0x34) == 0x28)) {
      iVar1 = *(int *)((longlong)param_1 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar5 = iVar1 >> 0x1f & 0xffff;
        uVar3 = iVar1 + uVar5;
        lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) == 0) {
        (**(code **)(*param_1 + 0x208))(param_1,param_2,param_3);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1420e6f70 FUN_1420e6f70 body=200 status=ok
// SIG undefined FUN_1420e6f70(void)

undefined8 FUN_1420e6f70(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  
  if (*(char *)(param_2 + 0x8c) == '\x01') {
    lVar4 = UFunction::GetReturnProperty(param_2);
    if (((lVar4 != 0) &&
        (lVar2 = *(longlong *)(lVar4 + 0x10), lVar5 = UStrProperty::GetPrivateStaticClass(),
        lVar2 == lVar5)) && (*(int *)(lVar4 + 0x34) == 0x10)) {
      iVar1 = *(int *)((longlong)param_1 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar6 = iVar1 >> 0x1f & 0xffff;
        uVar3 = iVar1 + uVar6;
        lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) == 0) {
        (**(code **)(*param_1 + 0x208))(param_1,param_2,param_3);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1420e7040 FUN_1420e7040 body=200 status=ok
// SIG undefined FUN_1420e7040(void)

undefined8 FUN_1420e7040(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  
  if (*(char *)(param_2 + 0x8c) == '\x01') {
    lVar4 = UFunction::GetReturnProperty(param_2);
    if (((lVar4 != 0) &&
        (lVar2 = *(longlong *)(lVar4 + 0x10), lVar5 = UTextProperty::GetPrivateStaticClass(),
        lVar2 == lVar5)) && (*(int *)(lVar4 + 0x34) == 0x18)) {
      iVar1 = *(int *)((longlong)param_1 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar6 = iVar1 >> 0x1f & 0xffff;
        uVar3 = iVar1 + uVar6;
        lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) == 0) {
        (**(code **)(*param_1 + 0x208))(param_1,param_2,param_3);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1420e7110 FUN_1420e7110 body=200 status=ok
// SIG undefined FUN_1420e7110(void)

undefined8 FUN_1420e7110(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  
  if (*(char *)(param_2 + 0x8c) == '\x01') {
    lVar4 = UFunction::GetReturnProperty(param_2);
    if (((lVar4 != 0) &&
        (lVar2 = *(longlong *)(lVar4 + 0x10), lVar5 = UBoolProperty::GetPrivateStaticClass(),
        lVar2 == lVar5)) && (*(int *)(lVar4 + 0x34) == 1)) {
      iVar1 = *(int *)((longlong)param_1 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar6 = iVar1 >> 0x1f & 0xffff;
        uVar3 = iVar1 + uVar6;
        lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) == 0) {
        (**(code **)(*param_1 + 0x208))(param_1,param_2,param_3);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1420e71f0 CanPossessObject body=195 status=ok
// SIG undefined CanPossessObject(void)

undefined8 UWidgetAnimation::CanPossessObject(undefined8 param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    if (param_2 == param_3) {
      return 1;
    }
    if (param_2 != 0) {
      lVar3 = UPanelSlot::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (*(longlong *)(param_2 + 0x30) == 0)) {
        return 0;
      }
    }
    lVar3 = UVisual::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (cVar2 = UObjectBaseUtility::IsIn(param_2,param_3), cVar2 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1420e72d0 CaptureJoystick body=226 status=ok
// SIG undefined CaptureJoystick(void)

undefined8
UWidgetBlueprintLibrary::CaptureJoystick
          (undefined8 param_1,undefined8 param_2,longlong param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  if (param_3 != 0) {
    FUN_1420f9830(param_3,&local_28);
    plVar1 = plStack_20;
    if (local_28 != 0) {
      local_18 = local_28;
      plStack_10 = plStack_20;
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
        UNLOCK();
      }
      uVar6 = FUN_14185b9a0(param_2,&local_18,2,param_4);
      FUN_140459130(param_2,uVar6);
    }
    plVar5 = plStack_20;
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar1 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
  }
  FUN_140438260(param_1,param_2);
  return param_1;
}



// FUNCTION 1420e73c0 CaptureMouse body=215 status=ok
// SIG undefined CaptureMouse(void)

undefined8
UWidgetBlueprintLibrary::CaptureMouse(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  if (param_3 != 0) {
    FUN_1420f9830(param_3,&local_28);
    plVar1 = plStack_20;
    if (local_28 != 0) {
      local_18 = local_28;
      plStack_10 = plStack_20;
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
        UNLOCK();
      }
      uVar6 = FUN_140693ff0(param_2,&local_18);
      FUN_140459130(param_2,uVar6);
    }
    plVar5 = plStack_20;
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar1 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
  }
  FUN_140438260(param_1,param_2);
  return param_1;
}



// FUNCTION 1420e74a0 FUN_1420e74a0 body=276 status=ok
// SIG undefined FUN_1420e74a0(void)

void FUN_1420e74a0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if (0 < (int)*(uint *)(param_1 + 0x21)) {
    uVar7 = (ulonglong)*(uint *)(param_1 + 0x21);
    do {
      if (0 < (int)param_1[0x21]) {
        plVar1 = param_1 + 0x20;
        plVar2 = *(longlong **)*plVar1;
        if (plVar2[6] != 0) {
          *(undefined8 *)(plVar2[6] + 0x28) = 0;
        }
        iVar5 = (int)param_1[0x21];
        if (iVar5 + -1 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)*plVar1,(void *)(*plVar1 + 8),(longlong)(iVar5 + -1) << 3);
          iVar5 = (int)param_1[0x21];
        }
        *(int *)(param_1 + 0x21) = iVar5 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
        (**(code **)(*param_1 + 0x2e0))(param_1,plVar2);
        lVar3 = plVar2[6];
        if (lVar3 != 0) {
          lVar6 = UUserWidget::GetPrivateStaticClass();
          lVar3 = *(longlong *)(lVar3 + 0x10);
          if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
              lVar6 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (!bVar4) {
            (**(code **)(*plVar2 + 0x278))(plVar2,CONCAT71((int7)((ulonglong)lVar3 >> 8),1));
          }
        }
        plVar2[5] = 0;
        plVar2[6] = 0;
        UWidget::InvalidateLayoutAndVolatility(param_1);
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}



// FUNCTION 1420e75c0 ClearError body=45 status=ok
// SIG undefined ClearError(void)

void UEditableTextBox::ClearError(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xa10);
  if (lVar1 != 0) {
    uVar2 = FUN_1404b03b0();
    SEditableTextBox::SetError(lVar1,uVar2);
    return;
  }
  return;
}



// FUNCTION 1420e75f0 ClearHeightOverride body=68 status=ok
// SIG undefined ClearHeightOverride(void)

void USizeBox::ClearHeightOverride(longlong param_1)

{
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xfffffffd;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    local_28 = 0xbf800000;
    local_20 = 0;
    local_18 = 0;
    local_24 = 1;
    FUN_1419a29a0(*(longlong *)(param_1 + 0x138),&local_28);
  }
  return;
}



// FUNCTION 1420e7640 FUN_1420e7640 body=69 status=ok
// SIG undefined FUN_1420e7640(void)

void FUN_1420e7640(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x2b4)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x2a8,0);
  }
  if (*(longlong **)(param_1 + 0x1f8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001420e7678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x1f8) + 0x208))();
    return;
  }
  return;
}



// FUNCTION 1420e7690 ClearMaxAspectRatio body=68 status=ok
// SIG undefined ClearMaxAspectRatio(void)

void USizeBox::ClearMaxAspectRatio(longlong param_1)

{
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xffffffbf;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    local_28 = 0xbf800000;
    local_20 = 0;
    local_18 = 0;
    local_24 = 1;
    FUN_1419a3130(*(longlong *)(param_1 + 0x138),&local_28);
  }
  return;
}



// FUNCTION 1420e76e0 ClearMaxDesiredHeight body=68 status=ok
// SIG undefined ClearMaxDesiredHeight(void)

void USizeBox::ClearMaxDesiredHeight(longlong param_1)

{
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xffffffdf;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    local_28 = 0xbf800000;
    local_20 = 0;
    local_18 = 0;
    local_24 = 1;
    FUN_1419a3190(*(longlong *)(param_1 + 0x138),&local_28);
  }
  return;
}



// FUNCTION 1420e7730 ClearMaxDesiredWidth body=68 status=ok
// SIG undefined ClearMaxDesiredWidth(void)

void USizeBox::ClearMaxDesiredWidth(longlong param_1)

{
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xffffffef;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    local_28 = 0xbf800000;
    local_20 = 0;
    local_18 = 0;
    local_24 = 1;
    FUN_1419a31f0(*(longlong *)(param_1 + 0x138),&local_28);
  }
  return;
}



// FUNCTION 1420e7780 FUN_1420e7780 body=158 status=ok
// SIG undefined FUN_1420e7780(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1420e7780(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [36];
  undefined1 local_34;
  undefined1 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  *(uint *)(param_1 + 0x4d8) = *(uint *)(param_1 + 0x4d8) & 0xfffffff7;
  lVar1 = *(longlong *)(param_1 + 0x4f0);
  if (lVar1 != 0) {
    local_34 = 0;
    local_30 = 1;
    local_28 = 0;
    local_20 = 0;
    if ((undefined4 *)(lVar1 + 0x448) != (undefined4 *)(lVar1 + 0x488)) {
      if (*(char *)(lVar1 + 0x48c) != '\0') {
        *(undefined1 *)(lVar1 + 0x48c) = 0;
      }
      if (*(char *)(lVar1 + 0x44c) != '\0') {
        *(undefined4 *)(lVar1 + 0x488) = *(undefined4 *)(lVar1 + 0x448);
        *(undefined1 *)(lVar1 + 0x48c) = 1;
      }
    }
    *(undefined1 *)(lVar1 + 0x490) = *(undefined1 *)(lVar1 + 0x450);
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar1 + 0x498,lVar1 + 0x458);
    SSpinBox<float>::UpdateIsSpinRangeUnlimited(lVar1);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
  }
  return;
}



// FUNCTION 1420e7820 FUN_1420e7820 body=143 status=ok
// SIG undefined FUN_1420e7820(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1420e7820(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34;
  undefined1 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  *(uint *)(param_1 + 0x4d8) = *(uint *)(param_1 + 0x4d8) & 0xfffffffd;
  lVar1 = *(longlong *)(param_1 + 0x4f0);
  if (lVar1 != 0) {
    local_34 = 0;
    local_28 = 0;
    local_20 = 0;
    local_30 = 1;
    if ((local_38 != (undefined1 *)(lVar1 + 0x448)) && (*(char *)(lVar1 + 0x44c) != '\0')) {
      *(undefined1 *)(lVar1 + 0x44c) = 0;
    }
    *(undefined1 *)(lVar1 + 0x450) = 1;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar1 + 0x458,&local_28);
    SSpinBox<float>::UpdateIsSpinRangeUnlimited(lVar1);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
  }
  return;
}



// FUNCTION 1420e78b0 ClearMinDesiredHeight body=68 status=ok
// SIG undefined ClearMinDesiredHeight(void)

void USizeBox::ClearMinDesiredHeight(longlong param_1)

{
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xfffffff7;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    local_28 = 0xbf800000;
    local_20 = 0;
    local_18 = 0;
    local_24 = 1;
    FUN_1419a3250(*(longlong *)(param_1 + 0x138),&local_28);
  }
  return;
}



// FUNCTION 1420e7900 ClearMinDesiredWidth body=68 status=ok
// SIG undefined ClearMinDesiredWidth(void)

void USizeBox::ClearMinDesiredWidth(longlong param_1)

{
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xfffffffb;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    local_28 = 0xbf800000;
    local_20 = 0;
    local_18 = 0;
    local_24 = 1;
    FUN_1419a3330(*(longlong *)(param_1 + 0x138),&local_28);
  }
  return;
}



// FUNCTION 1420e7950 FUN_1420e7950 body=158 status=ok
// SIG undefined FUN_1420e7950(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1420e7950(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [36];
  undefined1 local_34;
  undefined1 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  *(uint *)(param_1 + 0x4d8) = *(uint *)(param_1 + 0x4d8) & 0xfffffffb;
  lVar1 = *(longlong *)(param_1 + 0x4f0);
  if (lVar1 != 0) {
    local_34 = 0;
    local_30 = 1;
    local_28 = 0;
    local_20 = 0;
    if ((undefined4 *)(lVar1 + 0x428) != (undefined4 *)(lVar1 + 0x468)) {
      if (*(char *)(lVar1 + 0x46c) != '\0') {
        *(undefined1 *)(lVar1 + 0x46c) = 0;
      }
      if (*(char *)(lVar1 + 0x42c) != '\0') {
        *(undefined4 *)(lVar1 + 0x468) = *(undefined4 *)(lVar1 + 0x428);
        *(undefined1 *)(lVar1 + 0x46c) = 1;
      }
    }
    *(undefined1 *)(lVar1 + 0x470) = *(undefined1 *)(lVar1 + 0x430);
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar1 + 0x478,lVar1 + 0x438);
    SSpinBox<float>::UpdateIsSpinRangeUnlimited(lVar1);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
  }
  return;
}



// FUNCTION 1420e79f0 FUN_1420e79f0 body=143 status=ok
// SIG undefined FUN_1420e79f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1420e79f0(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34;
  undefined1 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  *(uint *)(param_1 + 0x4d8) = *(uint *)(param_1 + 0x4d8) & 0xfffffffe;
  lVar1 = *(longlong *)(param_1 + 0x4f0);
  if (lVar1 != 0) {
    local_34 = 0;
    local_28 = 0;
    local_20 = 0;
    local_30 = 1;
    if ((local_38 != (undefined1 *)(lVar1 + 0x428)) && (*(char *)(lVar1 + 0x42c) != '\0')) {
      *(undefined1 *)(lVar1 + 0x42c) = 0;
    }
    *(undefined1 *)(lVar1 + 0x430) = 1;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar1 + 0x438,&local_28);
    SSpinBox<float>::UpdateIsSpinRangeUnlimited(lVar1);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
  }
  return;
}



// FUNCTION 1420e7a80 FUN_1420e7a80 body=68 status=ok
// SIG undefined FUN_1420e7a80(void)

void FUN_1420e7a80(longlong param_1)

{
  FUN_1420e7b70();
  TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_1 + 0xc78,0);
  if (*(longlong *)(param_1 + 0xc88) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001420e7ab7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xc88) + 0x3b0) + 0x208))();
    return;
  }
  return;
}



// FUNCTION 1420e7ad0 FUN_1420e7ad0 body=146 status=ok
// SIG undefined FUN_1420e7ad0(void)

void FUN_1420e7ad0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x3c8) != 0) && (*(longlong **)(param_1 + 0x3c0) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x3c0) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x3c8) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x3c0);
      }
      uVar2 = (**(code **)(*plVar3 + 0x38))();
      *(undefined4 *)(param_1 + 0x3b8) = uVar2;
    }
  }
  if ((*(int *)(param_1 + 0x3b8) != 0) && (*(int *)(param_1 + 0x560) != *(int *)(param_1 + 0x58c)))
  {
    (**(code **)(*(longlong *)(param_1 + 0x430) + 0x20))(param_1 + 0x430);
                    /* WARNING: Could not recover jumptable at 0x0001420e7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + 0x430) + 0x30))(param_1 + 0x430,3);
    return;
  }
  return;
}



// FUNCTION 1420e7b70 FUN_1420e7b70 body=203 status=ok
// SIG undefined FUN_1420e7b70(void)

void FUN_1420e7b70(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0xca8) != &local_18) {
    *(undefined8 *)(param_1 + 0xca8) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xcb0,&local_10);
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
  if (*(longlong *)(param_1 + 0xc88) != 0) {
    FUN_14196e710(*(undefined8 *)(*(longlong *)(param_1 + 0xc88) + 0x3b0));
  }
  if (*(longlong *)(param_1 + 0xc98) == 0) {
    return;
  }
  SBox::SetContent(*(longlong *)(param_1 + 0xc98),&DAT_1469eb218);
  return;
}



// FUNCTION 1420e7c40 ClearUserFocus body=62 status=ok
// SIG undefined ClearUserFocus(void)

undefined8 UWidgetBlueprintLibrary::ClearUserFocus(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141805170(param_2,2);
  FUN_140459130(param_2,uVar1);
  FUN_140438260(param_1,param_2);
  return param_1;
}



// FUNCTION 1420e7c80 ClearWidthOverride body=68 status=ok
// SIG undefined ClearWidthOverride(void)

void USizeBox::ClearWidthOverride(longlong param_1)

{
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xfffffffe;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    local_28 = 0xbf800000;
    local_20 = 0;
    local_18 = 0;
    local_24 = 1;
    FUN_1419a5160(*(longlong *)(param_1 + 0x138),&local_28);
  }
  return;
}



// FUNCTION 1420e7cf0 FUN_1420e7cf0 body=56 status=ok
// SIG undefined FUN_1420e7cf0(void)

void FUN_1420e7cf0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x318);
  if (plVar1 != (longlong *)0x0) {
    TSet<TTuple<UObject_*,FObjectGraphNode_*>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectGraphNode_*,0>,FDefaultSetAllocator>
    ::Empty(plVar1 + 0xca,0);
                    /* WARNING: Could not recover jumptable at 0x0001420e7d1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x278))(plVar1);
    return;
  }
  return;
}



// FUNCTION 1420e7d30 FUN_1420e7d30 body=252 status=ok
// SIG undefined FUN_1420e7d30(void)

longlong FUN_1420e7d30(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  if (param_2 < 2) {
    param_2 = 1;
  }
  *(int *)(param_1 + 100) = param_2;
  if ((*(longlong *)(param_1 + 0x50) != 0) && (*(longlong *)(param_1 + 0x58) != 0)) {
    plVar6 = (longlong *)0x0;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x58) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      plVar2 = *(longlong **)(param_1 + 0x58);
      plVar5 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        iVar4 = (int)plVar2[1];
        bVar7 = iVar4 == 0;
        if (bVar7) {
          *(int *)(plVar2 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
        while (plVar5 = plVar6, !bVar7) {
          LOCK();
          bVar7 = iVar4 == (int)plVar2[1];
          if (bVar7) {
            *(int *)(plVar2 + 1) = iVar4 + 1;
          }
          UNLOCK();
          if (bVar7) {
            plVar5 = plVar2;
            if (plVar2 != (longlong *)0x0) {
              plVar6 = *(longlong **)(param_1 + 0x50);
            }
            break;
          }
          LOCK();
          iVar4 = (int)plVar2[1];
          bVar7 = iVar4 == 0;
          if (bVar7) {
            *(int *)(plVar2 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
        }
      }
      SGridPanel::NotifySlotChanged(plVar6,param_1);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar5 + 1;
        lVar3 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
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
        return param_1;
      }
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 1420e7e30 FUN_1420e7e30 body=1384 status=ok
// SIG undefined FUN_1420e7e30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1420e7e30(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,longlong param_7)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  ulonglong *puVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  int *piVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  int iVar14;
  char cVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_1f8 [32];
  longlong **local_1d8;
  undefined8 *local_1d0;
  longlong local_1c8;
  char local_1b8;
  ulonglong local_1b0;
  undefined8 *local_1a8;
  longlong local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 local_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  ulonglong local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  longlong local_120;
  longlong *local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  undefined1 local_f8 [8];
  undefined1 local_f0 [16];
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined **local_c0 [2];
  longlong *local_b0;
  undefined **local_a8 [2];
  longlong *local_98;
  undefined1 local_90 [16];
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined4 local_5c;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  local_1b0 = param_5;
  local_1a8 = param_6;
  local_1a0 = param_1;
  plVar6 = (longlong *)FUN_1420c59d0(param_3,param_4);
  if (plVar6 != (longlong *)0x0) {
    puVar12 = *(ulonglong **)(param_1 + 0x10);
    local_7c = 0;
    local_74 = 0;
    uVar17 = 0;
    local_100 = param_7;
    local_80 = 0;
    local_5c = 0;
    uVar16 = (longlong)*(int *)(param_1 + 0x18) & 0x1fffffffffffffff;
    if (puVar12 + *(int *)(param_1 + 0x18) < puVar12) {
      uVar16 = uVar17;
    }
    local_44 = 0;
    uVar13 = uVar17;
    local_118 = plVar6;
    local_110 = param_1;
    local_108 = param_2;
    if (uVar16 != 0) {
      do {
        puVar4 = (ulonglong *)*puVar12;
        local_1d8 = &local_118;
        puVar7 = puVar12;
        if ((puVar4[2] & 2) == 0) {
          puVar7 = puVar4;
        }
        (**(code **)(*(longlong *)*puVar7 + 8))
                  ((longlong *)*puVar7,local_90,*(undefined4 *)((longlong)puVar4 + 0x2c),
                   (char)puVar4[6]);
        puVar12 = puVar12 + 1;
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar16);
    }
    MovieScene::TMaskedBlendable<float,4>::Resolve<FMargin>(local_90,local_f0,&local_118);
    lVar5 = local_1a0;
    local_1c8 = param_7;
    local_1d0 = local_1a8;
    local_1d8 = (longlong **)local_1b0;
    (**(code **)(*plVar6 + 0x20))(plVar6,param_2,local_f0,local_1a0);
    local_1b0 = 0xffffffff;
    iVar14 = -1;
    uVar16 = uVar17;
    if (param_2 != 0) {
      FWeakObjectPtr::operator=(&local_180,param_2);
      local_1b0 = local_180;
      iVar14 = (int)local_180;
      uVar16 = local_180 >> 0x20;
    }
    piVar11 = (int *)plVar6[3];
    piVar1 = piVar11 + (longlong)(int)plVar6[4] * 6;
    for (; piVar11 != piVar1; piVar11 = piVar11 + 6) {
      if ((*piVar11 == iVar14) && (piVar11[1] == (int)uVar16)) {
        lVar9 = plVar6[5];
        FUN_141f522c0(local_f8);
        FMovieSceneAnimTypeID::Combine(&local_1a8,lVar9);
        if (param_2 == 0) {
          puVar8 = (undefined8 *)
                   TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(plVar6 + 1,local_d0);
          local_128 = *puVar8;
          local_120 = puVar8[1];
          if (local_120 != 0) {
            LOCK();
            *(int *)(local_120 + 0xc) = *(int *)(local_120 + 0xc) + 1;
            UNLOCK();
          }
          uVar10 = FUN_141f394d0(local_a8,&local_128);
          plVar6 = *(longlong **)(lVar5 + 0x10);
          uVar16 = (longlong)*(int *)(local_1a0 + 0x18) & 0x1fffffffffffffff;
          if (plVar6 + *(int *)(local_1a0 + 0x18) < plVar6) {
            uVar16 = uVar17;
          }
          cVar15 = '\0';
          if (uVar16 != 0) {
            local_1b8 = '\x01';
            do {
              lVar5 = *plVar6;
              *(undefined8 *)(param_7 + 0x2d0) = *(undefined8 *)(lVar5 + 0x18);
              *(undefined4 *)(param_7 + 0x2d8) = *(undefined4 *)(lVar5 + 0x20);
              *(undefined1 *)(param_7 + 0x2dc) = 2;
              local_158 = *(undefined8 *)(param_7 + 0x2d0);
              local_150 = *(undefined4 *)(param_7 + 0x2d8);
              local_1d8 = (longlong **)uVar10;
              local_1d0 = (undefined8 *)(param_7 + 0xf8);
              TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>::
              OnPreAnimated(param_7 + 0x148,2,local_1a8,&local_158);
              uVar17 = uVar17 + 1;
              plVar6 = plVar6 + 1;
              cVar15 = local_1b8;
            } while (uVar17 != uVar16);
          }
          cVar3 = *(char *)(param_7 + 0x2dd);
          local_18c = DAT_146500f60;
          uStack_188 = 0xffffffff;
          uStack_184 = 0xffffffff;
          *(ulonglong *)(param_7 + 0x2d0) = CONCAT44(0xffffffff,DAT_146500f60);
          *(undefined4 *)(param_7 + 0x2d8) = 0xffffffff;
          *(char *)(param_7 + 0x2dc) = cVar3;
          if ((cVar15 == '\0') && (cVar3 != '\0')) {
            local_148 = *(undefined8 *)(param_7 + 0x2d0);
            local_140 = *(undefined4 *)(param_7 + 0x2d8);
            local_1d8 = (longlong **)uVar10;
            local_1d0 = (undefined8 *)(param_7 + 0xf8);
            TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>::
            OnPreAnimated(param_7 + 0x148,cVar3,local_1a8,&local_148);
          }
          if (local_98 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_98 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar14 == 1) && (local_98 != (longlong *)0x0)) {
              (**(code **)(*local_98 + 8))(local_98,1);
            }
          }
          local_a8[0] = &PTR_FUN_143fcdb70;
          plVar6 = local_c8;
        }
        else {
          puVar8 = (undefined8 *)
                   TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(plVar6 + 1,local_e0);
          local_138 = *puVar8;
          local_130 = puVar8[1];
          if (local_130 != 0) {
            LOCK();
            *(int *)(local_130 + 0xc) = *(int *)(local_130 + 0xc) + 1;
            UNLOCK();
          }
          lVar9 = FUN_141f39530(local_c0,&local_138);
          plVar6 = *(longlong **)(lVar5 + 0x10);
          uVar16 = (longlong)*(int *)(lVar5 + 0x18) & 0x1fffffffffffffff;
          if (plVar6 + *(int *)(lVar5 + 0x18) < plVar6) {
            uVar16 = uVar17;
          }
          cVar15 = '\0';
          local_1a0 = lVar9;
          if (uVar16 != 0) {
            local_1b8 = '\x01';
            do {
              lVar5 = *plVar6;
              *(undefined8 *)(param_7 + 0x2d0) = *(undefined8 *)(lVar5 + 0x18);
              local_170 = *(undefined4 *)(lVar5 + 0x20);
              *(undefined4 *)(param_7 + 0x2d8) = local_170;
              local_1d0 = &local_178;
              *(undefined1 *)(param_7 + 0x2dc) = 2;
              local_178 = *(undefined8 *)(param_7 + 0x2d0);
              local_1d8 = (longlong **)CONCAT71(local_1d8._1_7_,2);
              FMovieScenePreAnimatedState::SavePreAnimatedState
                        (param_7 + 0xf8,local_1a8,lVar9,param_2);
              uVar17 = uVar17 + 1;
              plVar6 = plVar6 + 1;
              cVar15 = local_1b8;
            } while (uVar17 != uVar16);
          }
          local_198 = DAT_146500f60;
          uStack_194 = 0xffffffff;
          uStack_190 = 0xffffffff;
          *(ulonglong *)(param_7 + 0x2d0) = CONCAT44(0xffffffff,DAT_146500f60);
          *(undefined4 *)(param_7 + 0x2d8) = 0xffffffff;
          *(undefined1 *)(param_7 + 0x2dc) = *(undefined1 *)(param_7 + 0x2dd);
          if (cVar15 == '\0') {
            local_160 = *(undefined4 *)(param_7 + 0x2d8);
            local_168 = *(undefined8 *)(param_7 + 0x2d0);
            local_1d0 = &local_168;
            local_1d8 = (longlong **)CONCAT71(local_1d8._1_7_,*(undefined1 *)(param_7 + 0x2dd));
            FMovieScenePreAnimatedState::SavePreAnimatedState
                      (param_7 + 0xf8,local_1a8,local_1a0,param_2);
          }
          if (local_b0 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_b0 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar14 == 1) && (local_b0 != (longlong *)0x0)) {
              (**(code **)(*local_b0 + 8))(local_b0,1);
            }
          }
          local_c0[0] = &PTR_FUN_143fcdb70;
          plVar6 = local_d8;
        }
        if (plVar6 == (longlong *)0x0) {
          return;
        }
        LOCK();
        plVar2 = plVar6 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 != 1) {
          return;
        }
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 != 1) {
          return;
        }
        (**(code **)(*plVar6 + 8))(plVar6,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1420e83a0 FUN_1420e83a0 body=1400 status=ok
// SIG undefined FUN_1420e83a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1420e83a0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,longlong param_7)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  ulonglong *puVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  int *piVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  int iVar14;
  char cVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_238 [32];
  longlong **local_218;
  undefined8 *local_210;
  longlong local_208;
  char local_1f8;
  ulonglong local_1f0;
  undefined8 *local_1e8;
  longlong local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 local_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  ulonglong local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  longlong local_170;
  undefined8 local_168;
  longlong local_160;
  longlong *local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  undefined1 local_138 [8];
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined **local_110 [2];
  longlong *local_100;
  undefined **local_f8 [2];
  longlong *local_e8;
  undefined1 local_e0 [32];
  undefined1 local_c0 [28];
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_68;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  local_1f0 = param_5;
  local_1e8 = param_6;
  local_1e0 = param_1;
  plVar6 = (longlong *)FUN_1420c5af0(param_3,param_4);
  if (plVar6 != (longlong *)0x0) {
    puVar12 = *(ulonglong **)(param_1 + 0x10);
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    uVar17 = 0;
    local_140 = param_7;
    local_a4 = 0;
    local_68 = 0;
    uVar16 = (longlong)*(int *)(param_1 + 0x18) & 0x1fffffffffffffff;
    if (puVar12 + *(int *)(param_1 + 0x18) < puVar12) {
      uVar16 = uVar17;
    }
    local_44 = 0;
    uVar13 = uVar17;
    local_158 = plVar6;
    local_150 = param_1;
    local_148 = param_2;
    if (uVar16 != 0) {
      do {
        puVar4 = (ulonglong *)*puVar12;
        local_218 = &local_158;
        puVar7 = puVar12;
        if ((puVar4[4] & 2) == 0) {
          puVar7 = puVar4;
        }
        (**(code **)(*(longlong *)*puVar7 + 8))
                  ((longlong *)*puVar7,local_c0,*(undefined4 *)((longlong)puVar4 + 0x3c),
                   (char)puVar4[8]);
        puVar12 = puVar12 + 1;
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar16);
    }
    MovieScene::TMaskedBlendable<float,7>::Resolve<FWidgetTransform>(local_c0,local_e0,&local_158);
    lVar5 = local_1e0;
    local_208 = param_7;
    local_210 = local_1e8;
    local_218 = (longlong **)local_1f0;
    (**(code **)(*plVar6 + 0x20))(plVar6,param_2,local_e0,local_1e0);
    local_1f0 = 0xffffffff;
    iVar14 = -1;
    uVar16 = uVar17;
    if (param_2 != 0) {
      FWeakObjectPtr::operator=(&local_1c0,param_2);
      local_1f0 = local_1c0;
      iVar14 = (int)local_1c0;
      uVar16 = local_1c0 >> 0x20;
    }
    piVar11 = (int *)plVar6[3];
    piVar1 = piVar11 + (longlong)(int)plVar6[4] * 9;
    for (; piVar11 != piVar1; piVar11 = piVar11 + 9) {
      if ((*piVar11 == iVar14) && (piVar11[1] == (int)uVar16)) {
        lVar9 = plVar6[5];
        FUN_141f522c0(local_138);
        FMovieSceneAnimTypeID::Combine(&local_1e8,lVar9);
        if (param_2 == 0) {
          puVar8 = (undefined8 *)
                   TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(plVar6 + 1,local_120);
          local_168 = *puVar8;
          local_160 = puVar8[1];
          if (local_160 != 0) {
            LOCK();
            *(int *)(local_160 + 0xc) = *(int *)(local_160 + 0xc) + 1;
            UNLOCK();
          }
          uVar10 = FUN_141f394d0(local_f8,&local_168);
          plVar6 = *(longlong **)(lVar5 + 0x10);
          uVar16 = (longlong)*(int *)(local_1e0 + 0x18) & 0x1fffffffffffffff;
          if (plVar6 + *(int *)(local_1e0 + 0x18) < plVar6) {
            uVar16 = uVar17;
          }
          cVar15 = '\0';
          if (uVar16 != 0) {
            local_1f8 = '\x01';
            do {
              lVar5 = *plVar6;
              *(undefined8 *)(param_7 + 0x2d0) = *(undefined8 *)(lVar5 + 0x28);
              *(undefined4 *)(param_7 + 0x2d8) = *(undefined4 *)(lVar5 + 0x30);
              *(undefined1 *)(param_7 + 0x2dc) = 2;
              local_198 = *(undefined8 *)(param_7 + 0x2d0);
              local_190 = *(undefined4 *)(param_7 + 0x2d8);
              local_218 = (longlong **)uVar10;
              local_210 = (undefined8 *)(param_7 + 0xf8);
              TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>::
              OnPreAnimated(param_7 + 0x148,2,local_1e8,&local_198);
              uVar17 = uVar17 + 1;
              plVar6 = plVar6 + 1;
              cVar15 = local_1f8;
            } while (uVar17 != uVar16);
          }
          cVar3 = *(char *)(param_7 + 0x2dd);
          local_1cc = DAT_146500f60;
          uStack_1c8 = 0xffffffff;
          uStack_1c4 = 0xffffffff;
          *(ulonglong *)(param_7 + 0x2d0) = CONCAT44(0xffffffff,DAT_146500f60);
          *(undefined4 *)(param_7 + 0x2d8) = 0xffffffff;
          *(char *)(param_7 + 0x2dc) = cVar3;
          if ((cVar15 == '\0') && (cVar3 != '\0')) {
            local_188 = *(undefined8 *)(param_7 + 0x2d0);
            local_180 = *(undefined4 *)(param_7 + 0x2d8);
            local_218 = (longlong **)uVar10;
            local_210 = (undefined8 *)(param_7 + 0xf8);
            TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>::
            OnPreAnimated(param_7 + 0x148,cVar3,local_1e8,&local_188);
          }
          if (local_e8 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_e8 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar14 == 1) && (local_e8 != (longlong *)0x0)) {
              (**(code **)(*local_e8 + 8))(local_e8,1);
            }
          }
          local_f8[0] = &PTR_FUN_143fcdb70;
          plVar6 = local_118;
        }
        else {
          puVar8 = (undefined8 *)
                   TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(plVar6 + 1,local_130);
          local_178 = *puVar8;
          local_170 = puVar8[1];
          if (local_170 != 0) {
            LOCK();
            *(int *)(local_170 + 0xc) = *(int *)(local_170 + 0xc) + 1;
            UNLOCK();
          }
          lVar9 = FUN_141f39530(local_110,&local_178);
          plVar6 = *(longlong **)(lVar5 + 0x10);
          uVar16 = (longlong)*(int *)(lVar5 + 0x18) & 0x1fffffffffffffff;
          if (plVar6 + *(int *)(lVar5 + 0x18) < plVar6) {
            uVar16 = uVar17;
          }
          cVar15 = '\0';
          local_1e0 = lVar9;
          if (uVar16 != 0) {
            local_1f8 = '\x01';
            do {
              lVar5 = *plVar6;
              *(undefined8 *)(param_7 + 0x2d0) = *(undefined8 *)(lVar5 + 0x28);
              local_1b0 = *(undefined4 *)(lVar5 + 0x30);
              *(undefined4 *)(param_7 + 0x2d8) = local_1b0;
              local_210 = &local_1b8;
              *(undefined1 *)(param_7 + 0x2dc) = 2;
              local_1b8 = *(undefined8 *)(param_7 + 0x2d0);
              local_218 = (longlong **)CONCAT71(local_218._1_7_,2);
              FMovieScenePreAnimatedState::SavePreAnimatedState
                        (param_7 + 0xf8,local_1e8,lVar9,param_2);
              uVar17 = uVar17 + 1;
              plVar6 = plVar6 + 1;
              cVar15 = local_1f8;
            } while (uVar17 != uVar16);
          }
          local_1d8 = DAT_146500f60;
          uStack_1d4 = 0xffffffff;
          uStack_1d0 = 0xffffffff;
          *(ulonglong *)(param_7 + 0x2d0) = CONCAT44(0xffffffff,DAT_146500f60);
          *(undefined4 *)(param_7 + 0x2d8) = 0xffffffff;
          *(undefined1 *)(param_7 + 0x2dc) = *(undefined1 *)(param_7 + 0x2dd);
          if (cVar15 == '\0') {
            local_1a0 = *(undefined4 *)(param_7 + 0x2d8);
            local_1a8 = *(undefined8 *)(param_7 + 0x2d0);
            local_210 = &local_1a8;
            local_218 = (longlong **)CONCAT71(local_218._1_7_,*(undefined1 *)(param_7 + 0x2dd));
            FMovieScenePreAnimatedState::SavePreAnimatedState
                      (param_7 + 0xf8,local_1e8,local_1e0,param_2);
          }
          if (local_100 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_100 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar14 == 1) && (local_100 != (longlong *)0x0)) {
              (**(code **)(*local_100 + 8))(local_100,1);
            }
          }
          local_110[0] = &PTR_FUN_143fcdb70;
          plVar6 = local_128;
        }
        if (plVar6 == (longlong *)0x0) {
          return;
        }
        LOCK();
        plVar2 = plVar6 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 != 1) {
          return;
        }
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 != 1) {
          return;
        }
        (**(code **)(*plVar6 + 8))(plVar6,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1420e8940 FUN_1420e8940 body=53 status=ok
// SIG undefined FUN_1420e8940(void)

undefined8 FUN_1420e8940(longlong param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x3f9) != '\0') {
    SWidget::GetDesiredSize(*(undefined8 *)(param_1 + 1000));
    return param_2;
  }
  FUN_1418054a0();
  return param_2;
}



// FUNCTION 1420e8980 FUN_1420e8980 body=222 status=ok
// SIG undefined FUN_1420e8980(void)

char FUN_1420e8980(longlong param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *puStack_10;
  
  if (*(longlong *)(param_1 + 0x300) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x300) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar6;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1c & 1) == 0) {
      puStack_10 = local_res8;
      local_res8[0] = 0;
      local_18 = FUN_1406ddef0;
      lVar5 = FUN_1415d8310(&local_18,&DAT_14622e6dc);
      if (*(char *)(lVar5 + 0x58) == '\0') {
        bVar2 = true;
        goto LAB_1420e8a23;
      }
    }
  }
  bVar2 = false;
LAB_1420e8a23:
  cVar3 = SWidget::ComputeVolatility(param_1);
  if (bVar2) {
    if ((cVar3 == '\0') && (*(int *)(*(longlong *)(param_1 + 0x300) + 0x178) < 1)) {
      return '\0';
    }
    cVar3 = '\x01';
  }
  return cVar3;
}



// FUNCTION 1420e8a60 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<USceneComponent_*,SWorldWidgetScreenLayer::FComponentEntry>,TDefaultMapHashableKeyFuncs<USceneComponent_*,SWorldWidgetScreenLayer::FComponentEntry,0>,FDefaultSetAllocator>
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



// FUNCTION 1420e8b10 FUN_1420e8b10 body=686 status=ok
// SIG undefined FUN_1420e8b10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1420e8b10(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 ***pppuVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 ****ppppuVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined8 ***local_58;
  undefined8 ***local_50 [4];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  plVar4 = (longlong *)(param_1 + 8);
  plVar8 = (longlong *)0x0;
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    lVar1 = *plVar4;
    plVar5 = (longlong *)param_2[8];
    if ((longlong *)param_2[8] == (longlong *)0x0) {
      plVar5 = param_2 + 7;
    }
    iVar3 = *(int *)((longlong)plVar5 +
                    ((longlong)((int)((ulonglong)lVar1 >> 0x20) * 0x17 + (int)lVar1) &
                    (longlong)(int)param_2[9] - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar3 * 0x38 + *param_2);
        if (*plVar5 == lVar1) {
          if (iVar3 != -1) goto LAB_1420e8ba2;
          break;
        }
        iVar3 = (int)plVar5[6];
      } while (iVar3 != -1);
    }
  }
  plVar5 = plVar8;
LAB_1420e8ba2:
  plVar7 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar7 = plVar8;
  }
  if (plVar7 == (longlong *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146ae7a80) &&
       (_Init_thread_header(&DAT_146ae7a80), DAT_146ae7a80 == -1)) {
      FMovieSceneAnimTypeID::Unique(&DAT_146ae7a78);
      _Init_thread_footer(&DAT_146ae7a80);
    }
    pppuVar2 = DAT_146ae7a78;
    local_30 = local_30 & 0xfc;
    local_50[0] = (undefined8 ***)FMemory::Malloc(0x28);
    ppppuVar6 = local_50;
    if ((local_30 & 2) == 0) {
      ppppuVar6 = (undefined8 ****)local_50[0];
    }
    local_30 = local_30 | 1;
    *ppppuVar6 = (undefined8 ***)&PTR_FUN_144fb1fb8;
    local_58 = local_50;
    ppppuVar6[1] = pppuVar2;
    ppppuVar6[2] = (undefined8 ***)0x0;
    ppppuVar6[3] = (undefined8 ***)0x0;
    *(undefined4 *)(ppppuVar6 + 4) = 0x80000000;
    local_60 = plVar4;
    FUN_141f32b00(param_2,local_68,&local_60,0);
    if ((local_30 & 1) != 0) {
      ppppuVar6 = local_50;
      if ((local_30 & 2) == 0) {
        ppppuVar6 = (undefined8 ****)local_50[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar6)(ppppuVar6,0);
      if ((local_30 & 2) == 0) {
        FMemory::Free(local_50[0]);
      }
    }
    if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
      lVar1 = *plVar4;
      plVar4 = (longlong *)param_2[8];
      if ((longlong *)param_2[8] == (longlong *)0x0) {
        plVar4 = param_2 + 7;
      }
      iVar3 = *(int *)((longlong)plVar4 +
                      ((longlong)((int)((ulonglong)lVar1 >> 0x20) * 0x17 + (int)lVar1) &
                      (longlong)(int)param_2[9] - 1U) * 4);
      if (iVar3 != -1) {
        do {
          plVar7 = (longlong *)((longlong)iVar3 * 0x38 + *param_2);
          if (*plVar7 == lVar1) {
            if (iVar3 != -1) goto LAB_1420e8cf1;
            break;
          }
          iVar3 = (int)plVar7[6];
        } while (iVar3 != -1);
      }
    }
    plVar7 = plVar8;
LAB_1420e8cf1:
    plVar7 = plVar7 + 1;
  }
  plVar4 = plVar7;
  if ((*(byte *)(plVar7 + 4) & 2) == 0) {
    plVar4 = (longlong *)*plVar7;
  }
  if (plVar4[1] == *(longlong *)(param_1 + 0x10)) {
    if ((*(byte *)(plVar7 + 4) & 2) == 0) {
      plVar7 = (longlong *)*plVar7;
    }
    bVar9 = *(int *)(param_1 + 0x40) == (int)plVar7[4];
    if ((int)plVar7[4] < *(int *)(param_1 + 0x40)) {
      *(undefined4 *)(plVar7 + 3) = 0;
      if (0x7fffffff < *(uint *)((longlong)plVar7 + 0x1c)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(plVar7 + 2,0);
      }
      iVar3 = *(int *)(param_1 + 0x40);
      *(int *)(plVar7 + 4) = iVar3;
      bVar9 = *(int *)(param_1 + 0x40) == iVar3;
    }
    if (bVar9) {
      iVar3 = (int)plVar7[3];
      *(int *)(plVar7 + 3) = iVar3 + 1;
      if (*(int *)((longlong)plVar7 + 0x1c) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar7 + 2,iVar3);
      }
      *(longlong *)(plVar7[2] + (longlong)iVar3 * 8) = param_1 + 0x18;
    }
  }
  return;
}



// FUNCTION 1420e8dc0 FUN_1420e8dc0 body=686 status=ok
// SIG undefined FUN_1420e8dc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1420e8dc0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 ***pppuVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 ****ppppuVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined8 ***local_58;
  undefined8 ***local_50 [4];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  plVar4 = (longlong *)(param_1 + 8);
  plVar8 = (longlong *)0x0;
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    lVar1 = *plVar4;
    plVar5 = (longlong *)param_2[8];
    if ((longlong *)param_2[8] == (longlong *)0x0) {
      plVar5 = param_2 + 7;
    }
    iVar3 = *(int *)((longlong)plVar5 +
                    ((longlong)((int)((ulonglong)lVar1 >> 0x20) * 0x17 + (int)lVar1) &
                    (longlong)(int)param_2[9] - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar3 * 0x38 + *param_2);
        if (*plVar5 == lVar1) {
          if (iVar3 != -1) goto LAB_1420e8e52;
          break;
        }
        iVar3 = (int)plVar5[6];
      } while (iVar3 != -1);
    }
  }
  plVar5 = plVar8;
LAB_1420e8e52:
  plVar7 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar7 = plVar8;
  }
  if (plVar7 == (longlong *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146ae7a70) &&
       (_Init_thread_header(&DAT_146ae7a70), DAT_146ae7a70 == -1)) {
      FMovieSceneAnimTypeID::Unique(&DAT_146ae7a68);
      _Init_thread_footer(&DAT_146ae7a70);
    }
    pppuVar2 = DAT_146ae7a68;
    local_30 = local_30 & 0xfc;
    local_50[0] = (undefined8 ***)FMemory::Malloc(0x28);
    ppppuVar6 = local_50;
    if ((local_30 & 2) == 0) {
      ppppuVar6 = (undefined8 ****)local_50[0];
    }
    local_30 = local_30 | 1;
    *ppppuVar6 = (undefined8 ***)&PTR_FUN_144fb1fe8;
    local_58 = local_50;
    ppppuVar6[1] = pppuVar2;
    ppppuVar6[2] = (undefined8 ***)0x0;
    ppppuVar6[3] = (undefined8 ***)0x0;
    *(undefined4 *)(ppppuVar6 + 4) = 0x80000000;
    local_60 = plVar4;
    FUN_141f32b00(param_2,local_68,&local_60,0);
    if ((local_30 & 1) != 0) {
      ppppuVar6 = local_50;
      if ((local_30 & 2) == 0) {
        ppppuVar6 = (undefined8 ****)local_50[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar6)(ppppuVar6,0);
      if ((local_30 & 2) == 0) {
        FMemory::Free(local_50[0]);
      }
    }
    if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
      lVar1 = *plVar4;
      plVar4 = (longlong *)param_2[8];
      if ((longlong *)param_2[8] == (longlong *)0x0) {
        plVar4 = param_2 + 7;
      }
      iVar3 = *(int *)((longlong)plVar4 +
                      ((longlong)((int)((ulonglong)lVar1 >> 0x20) * 0x17 + (int)lVar1) &
                      (longlong)(int)param_2[9] - 1U) * 4);
      if (iVar3 != -1) {
        do {
          plVar7 = (longlong *)((longlong)iVar3 * 0x38 + *param_2);
          if (*plVar7 == lVar1) {
            if (iVar3 != -1) goto LAB_1420e8fa1;
            break;
          }
          iVar3 = (int)plVar7[6];
        } while (iVar3 != -1);
      }
    }
    plVar7 = plVar8;
LAB_1420e8fa1:
    plVar7 = plVar7 + 1;
  }
  plVar4 = plVar7;
  if ((*(byte *)(plVar7 + 4) & 2) == 0) {
    plVar4 = (longlong *)*plVar7;
  }
  if (plVar4[1] == *(longlong *)(param_1 + 0x10)) {
    if ((*(byte *)(plVar7 + 4) & 2) == 0) {
      plVar7 = (longlong *)*plVar7;
    }
    bVar9 = *(int *)(param_1 + 0x50) == (int)plVar7[4];
    if ((int)plVar7[4] < *(int *)(param_1 + 0x50)) {
      *(undefined4 *)(plVar7 + 3) = 0;
      if (0x7fffffff < *(uint *)((longlong)plVar7 + 0x1c)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(plVar7 + 2,0);
      }
      iVar3 = *(int *)(param_1 + 0x50);
      *(int *)(plVar7 + 4) = iVar3;
      bVar9 = *(int *)(param_1 + 0x50) == iVar3;
    }
    if (bVar9) {
      iVar3 = (int)plVar7[3];
      *(int *)(plVar7 + 3) = iVar3 + 1;
      if (*(int *)((longlong)plVar7 + 0x1c) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar7 + 2,iVar3);
      }
      *(longlong *)(plVar7[2] + (longlong)iVar3 * 8) = param_1 + 0x18;
    }
  }
  return;
}



// FUNCTION 1420e9070 FUN_1420e9070 body=4079 status=ok
// SIG undefined FUN_1420e9070(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1420e9070(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong **pplVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  char cVar9;
  byte bVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  code *pcVar17;
  longlong *plVar18;
  undefined4 *puVar19;
  longlong *plVar20;
  bool bVar21;
  undefined1 auStack_d68 [32];
  longlong local_d48;
  longlong local_d40;
  undefined4 local_d38;
  longlong local_d30;
  longlong local_d28;
  longlong local_d20;
  undefined1 local_d18;
  undefined1 local_d10;
  longlong local_d08;
  char local_cf8;
  undefined1 local_cf6 [2];
  undefined1 local_cf4;
  undefined1 local_cf3 [11];
  undefined8 local_ce8;
  undefined8 uStack_ce0;
  undefined8 local_cd8;
  longlong *plStack_cd0;
  undefined8 local_cc8;
  longlong *plStack_cc0;
  longlong *local_cb8;
  longlong *local_cb0;
  longlong *local_ca8;
  longlong *plStack_ca0;
  longlong *local_c98;
  int local_c90;
  longlong *local_c88;
  int local_c80;
  undefined4 local_c78;
  undefined4 uStack_c74;
  undefined4 uStack_c70;
  undefined4 uStack_c6c;
  longlong *local_c68;
  int local_c60;
  longlong local_c58;
  undefined8 local_c50;
  longlong *local_c48 [2];
  undefined8 local_c38;
  undefined4 uStack_c30;
  undefined4 uStack_c2c;
  longlong *local_c28;
  longlong *local_c20;
  undefined1 *local_c18;
  longlong *local_c10;
  longlong *local_c08;
  undefined1 *local_c00;
  undefined8 local_bf8;
  undefined4 uStack_bf0;
  undefined4 uStack_bec;
  undefined4 local_be8;
  undefined1 local_be4;
  longlong local_be0;
  undefined4 local_bd8;
  longlong local_bd0;
  undefined1 local_bc8 [8];
  longlong *local_bc0;
  undefined4 local_bb8;
  undefined1 local_bb4;
  longlong local_bb0;
  undefined4 local_ba8;
  undefined4 local_ba0;
  undefined4 uStack_b9c;
  undefined4 uStack_b98;
  undefined4 uStack_b94;
  undefined1 local_b90;
  undefined8 local_b88;
  longlong *plStack_b80;
  undefined1 local_b78;
  undefined8 local_b70;
  undefined4 local_b68;
  undefined8 local_b60;
  longlong local_b58;
  undefined1 local_b50 [8];
  longlong *local_b48;
  undefined1 local_b38;
  undefined8 local_b30;
  undefined4 local_b28;
  undefined8 local_b20;
  longlong local_b18;
  undefined4 local_b08;
  undefined4 uStack_b04;
  undefined4 uStack_b00;
  undefined4 uStack_afc;
  undefined4 local_af8;
  undefined4 uStack_af4;
  undefined4 uStack_af0;
  undefined4 uStack_aec;
  undefined1 local_ae8 [8];
  longlong *local_ae0;
  undefined4 local_ad8;
  undefined4 uStack_ad4;
  undefined4 uStack_ad0;
  undefined4 uStack_acc;
  longlong *local_ac8;
  longlong *local_ac0;
  undefined1 local_ab0 [8];
  longlong *local_aa8;
  undefined4 local_a98;
  undefined4 uStack_a94;
  undefined4 uStack_a90;
  undefined4 uStack_a8c;
  longlong *local_a88;
  longlong *plStack_a80;
  undefined8 local_a78;
  longlong *plStack_a70;
  undefined8 local_a68;
  longlong *plStack_a60;
  undefined1 local_a58 [496];
  undefined1 local_868 [576];
  undefined1 local_628 [592];
  undefined1 local_3d8 [912];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d68;
  *(undefined8 *)(param_1 + 0x388) = *(undefined8 *)(param_2 + 0x128);
  local_c58 = *(longlong *)(param_2 + 0x120);
  lVar11 = *(longlong *)(param_2 + 0x118);
  local_bd0 = lVar11 + 8;
  if (local_c58 == 0) {
    local_c58 = lVar11 + 0x10;
  }
  bVar21 = *(char *)(param_2 + 0x208) == '\0';
  puVar15 = (undefined8 *)(param_2 + 0x1f0);
  if (bVar21) {
    puVar15 = (undefined8 *)(lVar11 + 0x3a8);
  }
  *(undefined8 *)(param_1 + 0x358) = *puVar15;
  puVar15 = (undefined8 *)(param_2 + 0x1f8);
  if (bVar21) {
    puVar15 = (undefined8 *)(lVar11 + 0x3b0);
  }
  *(undefined8 *)(param_1 + 0x360) = *puVar15;
  puVar19 = (undefined4 *)(param_2 + 0x200);
  if (bVar21) {
    puVar19 = (undefined4 *)(lVar11 + 0x3b8);
  }
  *(undefined4 *)(param_1 + 0x368) = *puVar19;
  *(undefined4 *)(param_1 + 0x36c) = puVar19[1];
  if (*(char *)(param_2 + 0x228) == '\0') {
    puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x118) + 0x3c0);
  }
  else {
    puVar15 = (undefined8 *)(param_2 + 0x210);
  }
  *(undefined8 *)(param_1 + 0x370) = *puVar15;
  *(undefined8 *)(param_1 + 0x378) = puVar15[1];
  *(undefined4 *)(param_1 + 0x380) = *(undefined4 *)(puVar15 + 2);
  *(undefined4 *)(param_1 + 900) = *(undefined4 *)((longlong)puVar15 + 0x14);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3c8,param_2 + 0x1c0);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x390,param_2 + 0x1a0);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3d8,param_2 + 0x1b0);
  puVar15 = (undefined8 *)(param_1 + 0x3b8);
  *(undefined1 *)(param_1 + 1000) = *(undefined1 *)(param_2 + 0x231);
  *(undefined8 *)(param_1 + 0x3f0) = *(undefined8 *)(param_2 + 0x198);
  plVar14 = *(longlong **)(param_2 + 0x1d8);
  uVar16 = *(undefined8 *)(param_2 + 0x1d0);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  local_cd8 = uVar16;
  plStack_cd0 = plVar14;
  if (&local_cd8 != puVar15) {
    local_cd8 = *puVar15;
    plStack_cd0 = *(longlong **)(param_1 + 0x3c0);
    *puVar15 = uVar16;
    *(longlong **)(param_1 + 0x3c0) = plVar14;
    local_a78 = uVar16;
    plStack_a70 = plVar14;
  }
  plVar14 = plStack_cd0;
  if (plStack_cd0 != (longlong *)0x0) {
    LOCK();
    plVar20 = plStack_cd0 + 1;
    lVar11 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_cd0)();
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_cd0 + 8))(plStack_cd0,1);
      }
    }
  }
  plVar14 = *(longlong **)(param_2 + 0x1d8);
  local_be8 = *(undefined4 *)(param_2 + 0x1ec);
  uVar16 = *(undefined8 *)(param_2 + 0x1d0);
  local_c38 = FUN_142112280;
  local_bf8 = FUN_1420f6f90;
  local_bb8 = 1;
  local_bb4 = 1;
  local_bb0 = 0;
  local_ba8 = 0;
  uStack_c30 = 0;
  uStack_bf0 = 0;
  local_be4 = 1;
  local_be0 = 0;
  local_bd8 = 0;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  uVar12 = *(undefined8 *)(param_2 + 0x198);
  lVar11 = FUN_14068eb10(local_628);
  local_b08 = (undefined4)local_bf8;
  uStack_b04 = local_bf8._4_4_;
  uStack_b00 = uStack_bf0;
  uStack_afc = uStack_bec;
  *(undefined8 *)(lVar11 + 0x148) = uVar12;
  uVar12 = FUN_1420c49a0(&local_c98,param_1,&local_b08);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x108,uVar12);
  if (local_c90 == 0) {
LAB_1420e937e:
    if (local_c98 != (longlong *)0x0) {
      FMemory::Free(local_c98);
    }
  }
  else if (local_c98 != (longlong *)0x0) {
    (**(code **)(*local_c98 + 0x28))(local_c98,0);
    if (local_c98 != (longlong *)0x0) {
      local_c98 = (longlong *)FMemory::Realloc(local_c98,0,0);
    }
    local_c90 = 0;
    goto LAB_1420e937e;
  }
  local_af8 = (undefined4)local_c38;
  uStack_af4 = local_c38._4_4_;
  uStack_af0 = uStack_c30;
  uStack_aec = uStack_c2c;
  uVar12 = FUN_14191f310(&local_c88,param_1,&local_af8);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x198,uVar12);
  if (local_c80 == 0) {
LAB_1420e93f7:
    if (local_c88 != (longlong *)0x0) {
      FMemory::Free(local_c88);
    }
  }
  else if (local_c88 != (longlong *)0x0) {
    (**(code **)(*local_c88 + 0x28))(local_c88,0);
    if (local_c88 != (longlong *)0x0) {
      local_c88 = (longlong *)FMemory::Realloc(local_c88,0,0);
    }
    local_c80 = 0;
    goto LAB_1420e93f7;
  }
  plVar20 = (longlong *)(lVar11 + 0x1b0);
  *(undefined4 *)(lVar11 + 0x1a8) = 1;
  *(undefined1 *)(lVar11 + 0x1ac) = 1;
  if (((&local_bb0 != plVar20) && (*(int *)(lVar11 + 0x1b8) != 0)) &&
     (plVar18 = (longlong *)*plVar20, plVar18 != (longlong *)0x0)) {
    (**(code **)(*plVar18 + 0x28))(plVar18,0);
    if (*plVar20 != 0) {
      lVar13 = FMemory::Realloc(*plVar20,0,0);
      *plVar20 = lVar13;
    }
    *(undefined4 *)(lVar11 + 0x1b8) = 0;
  }
  puVar15 = (undefined8 *)(lVar11 + 0x1d8);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  local_cc8 = uVar16;
  plStack_cc0 = plVar14;
  if (&local_cc8 != puVar15) {
    local_cc8 = *puVar15;
    plStack_cc0 = *(longlong **)(lVar11 + 0x1e0);
    *puVar15 = uVar16;
    *(longlong **)(lVar11 + 0x1e0) = plVar14;
    local_a68 = uVar16;
    plStack_a60 = plVar14;
  }
  plVar20 = plStack_cc0;
  if (plStack_cc0 != (longlong *)0x0) {
    LOCK();
    plVar18 = plStack_cc0 + 1;
    lVar13 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plStack_cc0)(plStack_cc0);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_cc0 + 8))(plStack_cc0,1);
      }
    }
  }
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar20 = plVar14 + 1;
    lVar13 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  plVar14 = (longlong *)operator_new(0x638);
  if (plVar14 == (longlong *)0x0) {
    plVar14 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar14 + 1) = 1;
    *(undefined4 *)((longlong)plVar14 + 0xc) = 1;
    *plVar14 = (longlong)&PTR_FUN_144fb2748;
    if (plVar14 + 2 != (longlong *)0x0) {
      FUN_1420ccc10(plVar14 + 2,0);
    }
  }
  plVar20 = plVar14 + 2;
  local_c28 = plVar20;
  local_c20 = plVar14;
  FUN_14044f790(&local_c28,plVar20);
  local_c18 = &local_cf4;
  local_d48 = 0x628;
  SWidget::SetDebugInfo
            (plVar20,"SComboListType",
             "d:\\oak\\main\\engine\\source\\runtime\\slate\\public\\Widgets/Input/SComboBox.h",0xc5
            );
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  local_cb8 = plVar20;
  local_cb0 = plVar14;
  if ((longlong **)(param_1 + 0x3a8) != &local_cb8) {
    *(longlong **)(param_1 + 0x3a8) = plVar20;
    local_cb8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x3b0,&local_cb0);
  }
  plVar14 = local_cb0;
  if (local_cb0 != (longlong *)0x0) {
    LOCK();
    plVar20 = local_cb0 + 1;
    lVar13 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_cb0)(local_cb0);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_cb0 + 8))(local_cb0,1);
      }
    }
  }
  puVar15 = (undefined8 *)FUN_1420dacb0(&local_c28,local_ae8,lVar11);
  local_b20 = *puVar15;
  local_b18 = puVar15[1];
  if (local_b18 != 0) {
    LOCK();
    *(int *)(local_b18 + 8) = *(int *)(local_b18 + 8) + 1;
    UNLOCK();
  }
  lVar11 = FUN_14068f180(local_a58);
  plVar14 = (longlong *)(lVar11 + 0x1c8);
  *(undefined4 *)(lVar11 + 0x1c0) = local_be8;
  *(undefined1 *)(lVar11 + 0x1c4) = 1;
  if (((&local_be0 != plVar14) && (*(int *)(lVar11 + 0x1d0) != 0)) &&
     (plVar20 = (longlong *)*plVar14, plVar20 != (longlong *)0x0)) {
    (**(code **)(*plVar20 + 0x28))(plVar20,0);
    if (*plVar14 != 0) {
      lVar13 = FMemory::Realloc(*plVar14,0,0);
      *plVar14 = lVar13;
    }
    *(undefined4 *)(lVar11 + 0x1d0) = 0;
  }
  plVar14 = (longlong *)operator_new(800);
  if (plVar14 == (longlong *)0x0) {
    plVar14 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar14 + 1) = 1;
    *(undefined4 *)((longlong)plVar14 + 0xc) = 1;
    *plVar14 = (longlong)&PTR_FUN_144044b78;
    if (plVar14 != (longlong *)0xfffffffffffffff0) {
      FUN_1419618a0();
    }
  }
  plVar20 = plVar14 + 2;
  local_ac8 = plVar20;
  local_ac0 = plVar14;
  FUN_14044f790(&local_ac8,plVar20);
  local_d48 = 0x310;
  SWidget::SetDebugInfo
            (plVar20,&DAT_144044860,
             "d:\\oak\\main\\engine\\source\\runtime\\slate\\public\\Widgets/Input/SComboBox.h",0xc2
            );
  lVar11 = FUN_140692660(lVar11,&local_b20);
  local_d38 = *(undefined4 *)(lVar11 + 0x90);
  local_d08 = lVar11 + 0xf8;
  local_d20 = lVar11 + 0xe8;
  local_d10 = *(undefined1 *)(lVar11 + 0xf1);
  local_d48 = lVar11 + 0x60;
  local_d28 = lVar11 + 200;
  local_d18 = *(undefined1 *)(lVar11 + 0xf0);
  local_d30 = lVar11 + 0x98;
  local_d40 = lVar11 + 0x78;
  plVar20 = plVar14 + 2;
  SWidget::SWidgetConstruct(plVar20,lVar11,lVar11 + 0x30,lVar11 + 0x40);
  FUN_141972160(plVar20,lVar11);
  if (((char)plVar14[5] < '\0') || (cVar9 = (**(code **)(*plVar20 + 0x1e8))(plVar20), cVar9 != '\0')
     ) {
    bVar10 = 1;
  }
  else {
    bVar10 = 0;
  }
  *(byte *)((longlong)plVar14 + 0x29) = *(byte *)((longlong)plVar14 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar14 + 0x29) = *(byte *)((longlong)plVar14 + 0x29) | bVar10;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    LOCK();
    plVar18 = plVar14 + 1;
    lVar11 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
    LOCK();
    plVar18 = plVar14 + 1;
    lVar11 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  FUN_140690ea0(local_a58);
  if (local_ae0 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_ae0 + 1;
    lVar11 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_ae0)(local_ae0);
      LOCK();
      piVar1 = (int *)((longlong)local_ae0 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_ae0 + 8))(local_ae0,1);
      }
    }
  }
  plVar18 = local_c20;
  if (local_c20 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_c20 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_c20)(local_c20);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_c20 + 8))(local_c20,1);
      }
    }
  }
  FUN_1420d7ab0(local_628);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_be0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_bb0);
  uStack_ce0 = *(longlong **)(param_2 + 0x110);
  local_ce8 = *(longlong **)(param_2 + 0x108);
  plVar18 = local_ce8;
  if (uStack_ce0 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_ce0 + 1) = (int)uStack_ce0[1] + 1;
    UNLOCK();
    plVar18 = *(longlong **)(param_2 + 0x108);
  }
  if (plVar18 == DAT_1469eb218) {
    local_b90 = 0;
    local_b78 = (code)0x1;
    local_b70 = 0;
    local_b68 = 0;
    local_ba0 = _DAT_1464aa6f0;
    uStack_b9c = uRam00000001464aa6f4;
    uStack_b98 = uRam00000001464aa6f8;
    uStack_b94 = uRam00000001464aa6fc;
    local_b88 = 0;
    plStack_b80 = (longlong *)0x0;
    uVar16 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_ab0,L"No Content Provided",L"SComboBox",L"ContentWarning");
    FText::FText(local_b50,uVar16);
    local_b38 = (code)0x1;
    local_b30 = 0;
    local_b28 = 0;
    pcVar17 = (code *)STextBlock::FArguments::FArguments(local_3d8);
    local_bf8 = pcVar17;
    FText::operator=(pcVar17 + 0x108,local_b50);
    pcVar17[0x120] = local_b38;
    TBaseDelegate<FSlateBrush_const_*>::operator=(pcVar17 + 0x128,&local_b30);
    FUN_140692440(pcVar17 + 0x1a8,&local_ba0);
    pcVar17[0x1d0] = local_b78;
    TBaseDelegate<FSlateBrush_const_*>::operator=(pcVar17 + 0x1d8,&local_b70);
    plVar18 = (longlong *)operator_new(0x660);
    if (plVar18 == (longlong *)0x0) {
      plVar18 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar18 + 1) = 1;
      *(undefined4 *)((longlong)plVar18 + 0xc) = 1;
      *plVar18 = (longlong)&PTR_FUN_144043520;
      if (plVar18 != (longlong *)0xfffffffffffffff0) {
        FUN_1419a9150();
      }
    }
    plVar2 = plVar18 + 2;
    local_c10 = plVar2;
    local_c08 = plVar18;
    FUN_14044f790(&local_c10,plVar2);
    local_c00 = local_cf3;
    local_d48 = 0x650;
    SWidget::SetDebugInfo
              (plVar2,"STextBlock",
               "d:\\oak\\main\\engine\\source\\runtime\\slate\\public\\Widgets/Input/SComboBox.h",
               0xd1);
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      UNLOCK();
    }
    local_c50 = 0;
    local_ce8 = plVar2;
    local_c48[0] = plVar18;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&uStack_ce0,local_c48);
    plVar18 = local_c48[0];
    if (local_c48[0] != (longlong *)0x0) {
      LOCK();
      plVar2 = local_c48[0] + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_c48[0])(local_c48[0]);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_c48[0] + 8))(local_c48[0],1);
        }
      }
    }
    FUN_140693250(&local_c10,local_bc8,local_bf8);
    plVar18 = local_bc0;
    if (local_bc0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_bc0 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_bc0)(local_bc0);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_bc0 + 8))(local_bc0,1);
        }
      }
    }
    plVar18 = local_c08;
    if (local_c08 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_c08 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_c08)(local_c08);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_c08 + 8))(local_c08,1);
        }
      }
    }
    FUN_140691150(local_3d8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b30);
    if (local_b48 != (longlong *)0x0) {
      LOCK();
      plVar18 = local_b48 + 1;
      lVar11 = *plVar18;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_b48)(local_b48);
        LOCK();
        piVar1 = (int *)((longlong)local_b48 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_b48 + 8))(local_b48,1);
        }
      }
    }
    if (local_aa8 != (longlong *)0x0) {
      LOCK();
      plVar18 = local_aa8 + 1;
      lVar11 = *plVar18;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_aa8)(local_aa8);
        LOCK();
        piVar1 = (int *)((longlong)local_aa8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_aa8 + 8))(local_aa8,1);
        }
      }
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b70);
    plVar18 = plStack_b80;
    if (plStack_b80 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_b80 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_b80)(plStack_b80);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_b80 + 8))(plStack_b80,1);
        }
      }
    }
  }
  local_c38 = FUN_14210dca0;
  uStack_c30 = 0;
  if (uStack_ce0 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_ce0 + 1) = (int)uStack_ce0[1] + 1;
    UNLOCK();
  }
  local_cf8 = *(char *)(param_2 + 0x1e9);
  if (local_cf8 != '\0') {
    local_cf6[0] = *(undefined1 *)(param_2 + 0x1e8);
  }
  uVar8 = local_cf6[0];
  lVar11 = FUN_1418ce0e0(local_868);
  *(longlong *)(lVar11 + 0x108) = local_bd0;
  *(longlong *)(lVar11 + 0x110) = local_c58;
  if (local_cf6 != (undefined1 *)(lVar11 + 0x238)) {
    if (*(char *)(lVar11 + 0x239) != '\0') {
      *(undefined1 *)(lVar11 + 0x239) = 0;
    }
    if (local_cf8 != '\0') {
      *(undefined1 *)(lVar11 + 0x238) = uVar8;
      *(undefined1 *)(lVar11 + 0x239) = 1;
    }
  }
  puVar19 = (undefined4 *)(lVar11 + 0x118);
  local_c78 = (undefined4)local_ce8;
  uStack_c74 = local_ce8._4_4_;
  uStack_c70 = (undefined4)uStack_ce0;
  uStack_c6c = uStack_ce0._4_4_;
  if (uStack_ce0 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_ce0 + 1) = (int)uStack_ce0[1] + 1;
    UNLOCK();
  }
  if (&local_c78 != puVar19) {
    local_c78 = *puVar19;
    uStack_c74 = *(undefined4 *)(lVar11 + 0x11c);
    uStack_c70 = *(undefined4 *)(lVar11 + 0x120);
    uStack_c6c = *(undefined4 *)(lVar11 + 0x124);
    local_a98 = (undefined4)local_ce8;
    uStack_a94 = local_ce8._4_4_;
    uStack_a90 = (undefined4)uStack_ce0;
    uStack_a8c = uStack_ce0._4_4_;
    *puVar19 = (undefined4)local_ce8;
    *(undefined4 *)(lVar11 + 0x11c) = local_ce8._4_4_;
    *(undefined4 *)(lVar11 + 0x120) = (undefined4)uStack_ce0;
    *(undefined4 *)(lVar11 + 0x124) = uStack_ce0._4_4_;
  }
  if (CONCAT44(uStack_c6c,uStack_c70) != 0) {
    LOCK();
    piVar1 = (int *)(CONCAT44(uStack_c6c,uStack_c70) + 8);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      puVar15 = (undefined8 *)CONCAT44(uStack_c6c,uStack_c70);
      (**(code **)*puVar15)(puVar15);
      LOCK();
      piVar1 = (int *)((longlong)puVar15 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*(longlong *)CONCAT44(uStack_c6c,uStack_c70) + 8))
                  ((longlong *)CONCAT44(uStack_c6c,uStack_c70),1);
      }
    }
  }
  pplVar3 = (longlong **)(lVar11 + 0x128);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  local_ca8 = plVar20;
  plStack_ca0 = plVar14;
  if (&local_ca8 != pplVar3) {
    local_ca8 = *pplVar3;
    plStack_ca0 = *(longlong **)(lVar11 + 0x130);
    *pplVar3 = plVar20;
    *(longlong **)(lVar11 + 0x130) = plVar14;
    local_a88 = plVar20;
    plStack_a80 = plVar14;
  }
  plVar20 = plStack_ca0;
  if (plStack_ca0 != (longlong *)0x0) {
    LOCK();
    plVar18 = plStack_ca0 + 1;
    lVar13 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plStack_ca0)(plStack_ca0);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_ca0 + 8))(plStack_ca0,1);
      }
    }
  }
  *(undefined1 *)(lVar11 + 0x169) = *(undefined1 *)(param_2 + 0x230);
  uVar5 = *(undefined4 *)(param_2 + 0x134);
  uVar6 = *(undefined4 *)(param_2 + 0x138);
  uVar7 = *(undefined4 *)(param_2 + 0x13c);
  *(undefined4 *)(lVar11 + 0x1f0) = *(undefined4 *)(param_2 + 0x130);
  *(undefined4 *)(lVar11 + 500) = uVar5;
  *(undefined4 *)(lVar11 + 0x1f8) = uVar6;
  *(undefined4 *)(lVar11 + 0x1fc) = uVar7;
  *(undefined1 *)(lVar11 + 0x200) = *(undefined1 *)(param_2 + 0x140);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x208,param_2 + 0x148);
  FUN_140692440(lVar11 + 0x170,param_2 + 0x158);
  *(undefined1 *)(lVar11 + 0x198) = *(undefined1 *)(param_2 + 0x180);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x1a0,param_2 + 0x188);
  local_ad8 = (undefined4)local_c38;
  uStack_ad4 = local_c38._4_4_;
  uStack_ad0 = uStack_c30;
  uStack_acc = uStack_c2c;
  uVar16 = FUN_1418c8b70(&local_c68,param_1,&local_ad8);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x148,uVar16);
  if (local_c60 != 0) {
    if (local_c68 == (longlong *)0x0) goto LAB_1420e9efc;
    (**(code **)(*local_c68 + 0x28))(local_c68,0);
    if (local_c68 != (longlong *)0x0) {
      local_c68 = (longlong *)FMemory::Realloc(local_c68,0,0);
    }
    local_c60 = 0;
  }
  if (local_c68 != (longlong *)0x0) {
    FMemory::Free(local_c68);
  }
LAB_1420e9efc:
  *(undefined1 *)(lVar11 + 0x168) = *(undefined1 *)(param_2 + 0x232);
  FUN_14192e4e0(param_1,lVar11);
  FUN_1418d1c60(local_868);
  plVar20 = uStack_ce0;
  if (uStack_ce0 != (longlong *)0x0) {
    LOCK();
    plVar18 = uStack_ce0 + 1;
    lVar11 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*uStack_ce0)(uStack_ce0);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_ce0 + 8))(uStack_ce0,1);
      }
    }
  }
  local_b60 = *(undefined8 *)(param_1 + 0x3a8);
  local_b58 = *(longlong *)(param_1 + 0x3b0);
  if (local_b58 != 0) {
    LOCK();
    *(int *)(local_b58 + 0xc) = *(int *)(local_b58 + 0xc) + 1;
    UNLOCK();
  }
  FUN_1421331c0(param_1,&local_b60);
  lVar11 = *(longlong *)(param_2 + 0x1e0);
  *(longlong *)(param_1 + 0x3a0) = lVar11;
  if (lVar11 != 0) {
    plVar20 = (longlong *)(*(longlong *)(param_1 + 0x3a8) + 0x430);
    (**(code **)(*plVar20 + 0x18))(plVar20,lVar11,1,0);
  }
  plVar20 = uStack_ce0;
  if (uStack_ce0 != (longlong *)0x0) {
    LOCK();
    plVar18 = uStack_ce0 + 1;
    lVar11 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*uStack_ce0)(uStack_ce0);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_ce0 + 8))(uStack_ce0,1);
      }
    }
  }
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar20 = plVar14 + 1;
    lVar11 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  return;
}



// FUNCTION 1420ea060 FUN_1420ea060 body=2098 status=ok
// SIG undefined FUN_1420ea060(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1420ea060(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong **pplVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_538 [32];
  longlong local_518;
  longlong local_510;
  longlong local_508;
  longlong local_500;
  longlong local_4f8;
  longlong local_4f0;
  undefined1 local_4e8;
  undefined1 local_4e0;
  longlong local_4d8;
  longlong local_4c8;
  int local_4c0;
  int local_4bc;
  longlong *local_4b8;
  int local_4b0;
  longlong *local_4a8;
  int local_4a0;
  undefined1 local_498;
  undefined1 local_497;
  undefined8 local_490;
  undefined4 local_488;
  undefined4 local_480;
  undefined4 local_478;
  undefined1 local_474;
  undefined8 local_470;
  undefined4 local_468;
  undefined2 local_460 [4];
  undefined8 local_458;
  undefined4 local_450;
  longlong *local_448;
  longlong *local_440;
  undefined1 local_438 [8];
  longlong *local_430;
  undefined1 local_420;
  undefined8 local_418;
  undefined4 local_410;
  longlong *local_408;
  longlong *local_400;
  undefined1 local_3f0 [8];
  longlong *local_3e8;
  undefined1 local_3d8 [912];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_538;
  local_480 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x508,param_2 + 0x108);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x538,param_2 + 0x118);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x548,param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x5b8) = *(undefined8 *)(param_2 + 0x148);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3a8,param_2 + 0x168);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x5e8,param_2 + 0x178);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x5f8,param_2 + 0x188);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x5d8,param_2 + 0x198);
  TAttribute<enum_ESelectionMode::Type>::operator=(param_1 + 0x3b8,param_2 + 0x1a8);
  *(undefined1 *)(param_1 + 0x620) = *(undefined1 *)(param_2 + 0x1d0);
  *(undefined1 *)(param_1 + 0x418) = *(undefined1 *)(param_2 + 0x201);
  *(undefined1 *)(param_1 + 0x419) = *(undefined1 *)(param_2 + 0x202);
  *(undefined4 *)(param_1 + 0x40c) = *(undefined4 *)(param_2 + 0x204);
  *(undefined1 *)(param_1 + 0x621) = *(undefined1 *)(param_2 + 0x208);
  *(undefined1 *)(param_1 + 0x622) = *(undefined1 *)(param_2 + 0x209);
  *(undefined1 *)(param_1 + 0x608) = *(undefined1 *)(param_2 + 0x210);
  *(undefined1 *)(param_1 + 0x609) = *(undefined1 *)(param_2 + 0x211);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x610,param_2 + 0x218);
  pplVar9 = (longlong **)(param_2 + 0x228);
  if (((*(int *)(param_2 + 0x230) == 0) || (*pplVar9 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**pplVar9 + 0x18))(), cVar5 == '\0')) {
    plVar7 = (longlong *)FMemory::Realloc(0,0x20);
    iVar11 = 2;
    local_4a0 = 2;
    local_4a8 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)&PTR_GetPoolName_144fb2758;
      lVar10 = FDelegateHandle::GenerateNewID();
      plVar7[2] = lVar10;
    }
    pplVar9 = &local_4a8;
    bVar4 = false;
    bVar3 = true;
  }
  else {
    local_4b8 = (longlong *)0x0;
    local_4b0 = 0;
    if (((pplVar9 != &local_4b8) && (*(int *)(param_2 + 0x230) != 0)) &&
       (plVar7 = *pplVar9, plVar7 != (longlong *)0x0)) {
      (**(code **)(*plVar7 + 0x30))(plVar7,&local_4b8);
    }
    pplVar9 = &local_4b8;
    bVar4 = true;
    bVar3 = false;
    plVar7 = local_4a8;
    iVar11 = local_4a0;
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x518,pplVar9);
  if (bVar3) {
    if (iVar11 != 0) {
      if (plVar7 == (longlong *)0x0) goto LAB_1420ea2b8;
      (**(code **)(*plVar7 + 0x28))(plVar7,0);
      plVar7 = (longlong *)FMemory::Realloc(plVar7,0,0);
      local_4a8 = plVar7;
    }
    if (plVar7 != (longlong *)0x0) {
      FMemory::Free(plVar7);
    }
  }
LAB_1420ea2b8:
  if (bVar4) {
    if (local_4b0 != 0) {
      if (local_4b8 == (longlong *)0x0) goto LAB_1420ea306;
      (**(code **)(*local_4b8 + 0x28))(local_4b8,0);
      if (local_4b8 != (longlong *)0x0) {
        local_4b8 = (longlong *)FMemory::Realloc(local_4b8,0,0);
      }
      local_4b0 = 0;
    }
    if (local_4b8 != (longlong *)0x0) {
      FMemory::Free(local_4b8);
    }
  }
LAB_1420ea306:
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x528,param_2 + 0x238);
  local_4bc = 0;
  local_4c8 = 0;
  local_4c0 = 0;
  iVar11 = 0;
  if (((*(int *)(param_1 + 0x510) == 0) ||
      (iVar11 = 0, *(longlong **)(param_1 + 0x508) == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x508) + 0x18))(), iVar11 = local_4c0,
     cVar5 == '\0')) {
    local_4c0 = (0x23 - (uint)(iVar11 != 0)) + iVar11;
    if (local_4bc < local_4c0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4c8,iVar11);
    }
    lVar10 = (longlong)iVar11 - (ulonglong)(iVar11 != 0);
    builtin_wcsncpy((wchar_t *)(local_4c8 + lVar10 * 2),L"Please s",8);
    builtin_wcsncpy((wchar_t *)(local_4c8 + 0x10 + lVar10 * 2),L"pecify a",8);
    builtin_wcsncpy((wchar_t *)(local_4c8 + 0x20 + lVar10 * 2),L"n OnGene",8);
    builtin_wcsncpy((wchar_t *)(local_4c8 + 0x30 + lVar10 * 2),L"rateRow.",8);
    *(undefined4 *)(local_4c8 + 0x40 + lVar10 * 2) = 0xa0020;
    *(undefined2 *)(local_4c8 + 0x44 + lVar10 * 2) = 0;
  }
  iVar11 = local_4c0;
  if (*(longlong *)(param_1 + 0x5b8) == 0) {
    lVar10 = (longlong)local_4c0;
    local_4c0 = (0x24 - (uint)(local_4c0 != 0)) + local_4c0;
    if (local_4bc < local_4c0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4c8,iVar11);
    }
    lVar10 = lVar10 - (ulonglong)(iVar11 != 0);
    builtin_wcsncpy((wchar_t *)(local_4c8 + lVar10 * 2),L"Please s",8);
    builtin_wcsncpy((wchar_t *)(local_4c8 + 0x10 + lVar10 * 2),L"pecify a",8);
    builtin_wcsncpy((wchar_t *)(local_4c8 + 0x20 + lVar10 * 2),L" ListIte",8);
    builtin_wcsncpy((wchar_t *)(local_4c8 + 0x30 + lVar10 * 2),L"msSource",8);
    *(undefined4 *)(local_4c8 + 0x40 + lVar10 * 2) = 0x20002e;
    *(undefined2 *)(local_4c8 + 0x44 + lVar10 * 2) = 10;
    *(undefined2 *)(local_4c8 + 0x46 + lVar10 * 2) = 0;
  }
  if ((local_4c0 == 0) || (local_4c0 + -1 < 1)) {
    local_508 = param_2 + 0x128;
    local_460[0] = 0x103;
    local_510 = param_2 + 0x1d8;
    local_518 = param_2 + 0x1c0;
    local_458 = 0;
    local_478 = 0;
    local_450 = 0;
    local_474 = 1;
    local_470 = 0;
    local_468 = 0;
    FUN_1419b0690(param_1,&local_478,param_2 + 0x150,local_460);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_470);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_458);
    if (*(longlong *)(param_1 + 0x310) != 0) {
      SScrollBox::SetConsumeMouseWheel
                (*(longlong *)(param_1 + 0x310),*(undefined1 *)(param_2 + 0x200));
      local_498 = *(undefined1 *)(param_2 + 0x1e8);
      local_497 = *(undefined1 *)(param_2 + 0x1e9);
      local_490 = 0;
      local_488 = 0;
      TBaseDelegate<FSlateBrush_const_*>::operator=(&local_490,param_2 + 0x1f0);
      lVar10 = *(longlong *)(param_1 + 0x310);
      *(undefined1 *)(lVar10 + 0x388) = local_498;
      *(undefined1 *)(lVar10 + 0x389) = local_497;
      TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x390,&local_490);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_490);
    }
  }
  else {
    uVar8 = FText::FromString(local_3f0,&local_4c8);
    FText::FText(local_438,uVar8);
    local_420 = 1;
    local_418 = 0;
    local_410 = 0;
    lVar10 = STextBlock::FArguments::FArguments(local_3d8);
    FText::operator=(lVar10 + 0x108,local_438);
    *(undefined1 *)(lVar10 + 0x120) = local_420;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x128,&local_418);
    plVar7 = (longlong *)operator_new(0x660);
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar7 + 1) = 1;
      *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
      *plVar7 = (longlong)&PTR_FUN_144043520;
      if (plVar7 != (longlong *)0xfffffffffffffff0) {
        FUN_1419a9150();
      }
    }
    plVar1 = plVar7 + 2;
    local_408 = plVar1;
    local_400 = plVar7;
    FUN_14044f790(&local_408,plVar1);
    local_518 = 0x650;
    SWidget::SetDebugInfo
              (plVar1,"STextBlock",
               "d:\\oak\\main\\engine\\source\\runtime\\slate\\public\\Widgets/Views/SListView.h",
               0xc3);
    local_4d8 = lVar10 + 0xf8;
    local_4f0 = lVar10 + 0xe8;
    local_4e0 = *(undefined1 *)(lVar10 + 0xf1);
    local_4f8 = lVar10 + 200;
    local_500 = lVar10 + 0x98;
    local_4e8 = *(undefined1 *)(lVar10 + 0xf0);
    local_510 = lVar10 + 0x78;
    local_518 = lVar10 + 0x60;
    local_508 = CONCAT44(local_508._4_4_,*(undefined4 *)(lVar10 + 0x90));
    SWidget::SWidgetConstruct(plVar1,lVar10,lVar10 + 0x30,lVar10 + 0x40);
    FUN_1419b0120(plVar1,lVar10);
    if (((char)plVar7[5] < '\0') || (cVar5 = (**(code **)(*plVar1 + 0x1e8))(plVar1), cVar5 != '\0'))
    {
      bVar6 = 1;
    }
    else {
      bVar6 = 0;
    }
    *(byte *)((longlong)plVar7 + 0x29) = *(byte *)((longlong)plVar7 + 0x29) & 0xfe;
    *(byte *)((longlong)plVar7 + 0x29) = *(byte *)((longlong)plVar7 + 0x29) | bVar6;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    *(undefined4 *)(param_1 + 0x238) = 2;
    *(undefined4 *)(param_1 + 0x23c) = 2;
    local_448 = plVar1;
    local_440 = plVar7;
    TSlotBase<FSimpleSlot>::operator[](param_1 + 0x218,&local_448);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar7 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar11 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      LOCK();
      plVar1 = plVar7 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar11 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      LOCK();
      plVar1 = plVar7 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar11 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    FUN_140691150(local_3d8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_418);
    if (local_430 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_430 + 1;
      lVar10 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_430)(local_430);
        LOCK();
        piVar2 = (int *)((longlong)local_430 + 0xc);
        iVar11 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_430 + 8))(local_430,1);
        }
      }
    }
    if (local_3e8 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_3e8 + 1;
      lVar10 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_3e8)(local_3e8);
        LOCK();
        piVar2 = (int *)((longlong)local_3e8 + 0xc);
        iVar11 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_3e8 + 8))(local_3e8,1);
        }
      }
    }
  }
  if (local_4c8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1420ea8a0 FUN_1420ea8a0 body=1357 status=ok
// SIG undefined FUN_1420ea8a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1420ea8a0(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_508 [32];
  longlong local_4e8;
  longlong local_4e0;
  undefined4 local_4d8;
  longlong local_4d0;
  longlong local_4c8;
  longlong local_4c0;
  undefined1 local_4b8;
  undefined1 local_4b0;
  longlong local_4a8;
  longlong local_498;
  longlong *local_490;
  undefined1 local_488 [4];
  undefined1 local_484 [12];
  longlong *local_478;
  longlong local_470;
  undefined1 *local_468;
  longlong *local_460;
  longlong *local_458;
  longlong *local_450;
  undefined1 local_448 [8];
  longlong *local_440;
  undefined1 local_430;
  undefined8 local_428;
  undefined4 local_420;
  undefined1 local_418 [8];
  longlong *local_410;
  longlong *local_408;
  longlong *local_400;
  undefined1 local_3f0 [8];
  longlong *local_3e8;
  undefined1 local_3d8 [912];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_508;
  *(longlong *)(param_1 + 0x300) = param_4;
  lVar8 = *(longlong *)(param_4 + 0x10);
  local_478 = param_3;
  local_470 = param_2;
  if (lVar8 != 0) {
    uVar5 = UUserListEntry::GetPrivateStaticClass();
    cVar3 = UClass::ImplementsInterface(lVar8,uVar5);
    if (cVar3 != '\0') {
      plVar6 = (longlong *)
               TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_418);
      plVar9 = (longlong *)plVar6[1];
      lVar8 = *plVar6;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      if (local_410 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_410 + 1;
        lVar7 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_410)(local_410);
          LOCK();
          piVar1 = (int *)((longlong)local_410 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_410 + 8))(local_410,1);
          }
        }
      }
      if (lVar8 == 0) {
        local_498 = 0;
      }
      else {
        local_498 = lVar8 + 0x308;
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
        UNLOCK();
      }
      local_490 = plVar9;
      FWeakObjectPtr::operator=(local_484,param_4);
      local_468 = local_484;
      local_460 = &local_498;
      FUN_1420c51c0(&DAT_146500f90,local_488,&local_468,0);
      if (local_490 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_490 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar2 == 1) && (local_490 != (longlong *)0x0)) {
          (**(code **)(*local_490 + 8))(local_490,1);
        }
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar9 + 1;
        lVar8 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      plVar9 = (longlong *)local_478[1];
      lVar8 = *local_478;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      lVar7 = lVar8 + 0x430;
      if (lVar8 == 0) {
        lVar7 = 0;
      }
      *(longlong *)(param_1 + 0x330) = lVar7;
      plVar6 = *(longlong **)(param_1 + 0x338);
      if (plVar9 != plVar6) {
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
          UNLOCK();
          plVar6 = *(longlong **)(param_1 + 0x338);
        }
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
        *(longlong **)(param_1 + 0x338) = plVar9;
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar9 + 1;
        lVar8 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      lVar8 = local_470;
      TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x310,local_470 + 0x118);
      TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 800,lVar8 + 0x128);
      TSlotBase<FSimpleSlot>::operator[](param_1 + 0x218,lVar8 + 0x108);
      return;
    }
  }
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_3f0,
                     L"Any UserWidget generated as a table row must implement the IUserListEntry interface"
                     ,L"SObjectTableRow",L"InvalidWidgetClass");
  FText::FText(local_448,uVar5);
  local_430 = 1;
  local_428 = 0;
  local_420 = 0;
  lVar8 = STextBlock::FArguments::FArguments(local_3d8);
  FText::operator=(lVar8 + 0x108,local_448);
  *(undefined1 *)(lVar8 + 0x120) = local_430;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x128,&local_428);
  plVar9 = (longlong *)operator_new(0x660);
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar9 + 1) = 1;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *plVar9 = (longlong)&PTR_FUN_144043520;
    if (plVar9 != (longlong *)0xfffffffffffffff0) {
      FUN_1419a9150();
    }
  }
  plVar6 = plVar9 + 2;
  local_408 = plVar6;
  local_400 = plVar9;
  FUN_14044f790(&local_408,plVar6);
  local_4e8 = 0x650;
  SWidget::SetDebugInfo
            (plVar6,"STextBlock",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Public\\Slate/SObjectTableRow.h",0x4b);
  local_4d8 = *(undefined4 *)(lVar8 + 0x90);
  local_4a8 = lVar8 + 0xf8;
  local_4c0 = lVar8 + 0xe8;
  local_4b0 = *(undefined1 *)(lVar8 + 0xf1);
  local_4c8 = lVar8 + 200;
  local_4d0 = lVar8 + 0x98;
  local_4b8 = *(undefined1 *)(lVar8 + 0xf0);
  local_4e0 = lVar8 + 0x78;
  local_4e8 = lVar8 + 0x60;
  SWidget::SWidgetConstruct(plVar6,lVar8,lVar8 + 0x30,lVar8 + 0x40);
  FUN_1419b0120(plVar6,lVar8);
  if (((char)plVar9[5] < '\0') || (cVar3 = (**(code **)(*plVar6 + 0x1e8))(plVar6), cVar3 != '\0')) {
    bVar4 = 1;
  }
  else {
    bVar4 = 0;
  }
  *(byte *)((longlong)plVar9 + 0x29) = *(byte *)((longlong)plVar9 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar9 + 0x29) = *(byte *)((longlong)plVar9 + 0x29) | bVar4;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_458 = plVar6;
  local_450 = plVar9;
  TSlotBase<FSimpleSlot>::operator[](param_1 + 0x218,&local_458);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar9 + 1;
    lVar8 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
    LOCK();
    plVar6 = plVar9 + 1;
    lVar8 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
    LOCK();
    plVar6 = plVar9 + 1;
    lVar8 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  FUN_140691150(local_3d8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_428);
  if (local_440 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_440 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_440)(local_440);
      LOCK();
      piVar1 = (int *)((longlong)local_440 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_440 + 8))(local_440,1);
      }
    }
  }
  if (local_3e8 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_3e8 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_3e8)(local_3e8);
      LOCK();
      piVar1 = (int *)((longlong)local_3e8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_3e8 + 8))(local_3e8,1);
      }
    }
  }
  return;
}



// FUNCTION 1420eadf0 FUN_1420eadf0 body=2142 status=ok
// SIG undefined FUN_1420eadf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1420eadf0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong **pplVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_518 [32];
  undefined8 *local_4f8;
  longlong local_4f0;
  longlong local_4e8;
  longlong local_4e0;
  longlong local_4d8;
  longlong local_4d0;
  undefined1 local_4c8;
  undefined1 local_4c0;
  longlong local_4b8;
  longlong local_4a8;
  int local_4a0;
  int local_49c;
  longlong *local_498;
  int local_490;
  longlong *local_488;
  int local_480;
  undefined1 local_478;
  undefined1 local_477;
  undefined8 local_470;
  undefined4 local_468;
  undefined4 local_460;
  longlong *local_458;
  longlong *local_450;
  undefined8 local_448;
  longlong *plStack_440;
  undefined1 local_438 [8];
  longlong *local_430;
  undefined1 local_420;
  undefined8 local_418;
  undefined4 local_410;
  longlong *local_408;
  longlong *local_400;
  undefined1 local_3f0 [8];
  longlong *local_3e8;
  undefined1 local_3d8 [912];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_518;
  local_460 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x508,param_2 + 0x108);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x538,param_2 + 0x118);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x548,param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x5b8) = *(undefined8 *)(param_2 + 0x148);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3a8,param_2 + 0x198);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x5e8,param_2 + 0x1a8);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x5f8,param_2 + 0x1b8);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x5d8,param_2 + 0x1c8);
  TAttribute<enum_ESelectionMode::Type>::operator=(param_1 + 0x3b8,param_2 + 0x1d8);
  *(undefined1 *)(param_1 + 0x620) = *(undefined1 *)(param_2 + 0x1f0);
  *(undefined1 *)(param_1 + 0x418) = *(undefined1 *)(param_2 + 0x221);
  *(undefined1 *)(param_1 + 0x419) = *(undefined1 *)(param_2 + 0x222);
  *(undefined4 *)(param_1 + 0x40c) = *(undefined4 *)(param_2 + 0x224);
  *(undefined1 *)(param_1 + 0x621) = *(undefined1 *)(param_2 + 0x228);
  *(undefined1 *)(param_1 + 0x622) = *(undefined1 *)(param_2 + 0x229);
  *(undefined1 *)(param_1 + 0x608) = *(undefined1 *)(param_2 + 0x230);
  *(undefined1 *)(param_1 + 0x609) = *(undefined1 *)(param_2 + 0x231);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x610,param_2 + 0x238);
  pplVar9 = (longlong **)(param_2 + 0x248);
  if (((*(int *)(param_2 + 0x250) == 0) || (*pplVar9 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**pplVar9 + 0x18))(), cVar5 == '\0')) {
    plVar7 = (longlong *)FMemory::Realloc(0,0x20);
    iVar11 = 2;
    local_480 = 2;
    local_488 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)&PTR_GetPoolName_144fb2758;
      lVar10 = FDelegateHandle::GenerateNewID();
      plVar7[2] = lVar10;
    }
    pplVar9 = &local_488;
    bVar4 = false;
    bVar3 = true;
  }
  else {
    local_498 = (longlong *)0x0;
    local_490 = 0;
    if (((pplVar9 != &local_498) && (*(int *)(param_2 + 0x250) != 0)) &&
       (plVar7 = *pplVar9, plVar7 != (longlong *)0x0)) {
      (**(code **)(*plVar7 + 0x30))(plVar7,&local_498);
    }
    pplVar9 = &local_498;
    bVar4 = true;
    bVar3 = false;
    plVar7 = local_488;
    iVar11 = local_480;
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x518,pplVar9);
  if (bVar3) {
    if (iVar11 != 0) {
      if (plVar7 == (longlong *)0x0) goto LAB_1420eb048;
      (**(code **)(*plVar7 + 0x28))(plVar7,0);
      plVar7 = (longlong *)FMemory::Realloc(plVar7,0,0);
      local_488 = plVar7;
    }
    if (plVar7 != (longlong *)0x0) {
      FMemory::Free(plVar7);
    }
  }
LAB_1420eb048:
  if (bVar4) {
    if (local_490 != 0) {
      if (local_498 == (longlong *)0x0) goto LAB_1420eb096;
      (**(code **)(*local_498 + 0x28))(local_498,0);
      if (local_498 != (longlong *)0x0) {
        local_498 = (longlong *)FMemory::Realloc(local_498,0,0);
      }
      local_490 = 0;
    }
    if (local_498 != (longlong *)0x0) {
      FMemory::Free(local_498);
    }
  }
LAB_1420eb096:
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x528,param_2 + 600);
  *(undefined1 *)(param_1 + 0x628) = *(undefined1 *)(param_2 + 0x268);
  local_4a8 = 0;
  local_4a0 = 0;
  local_49c = 0;
  iVar11 = 0;
  if (((*(int *)(param_1 + 0x510) == 0) ||
      (iVar11 = 0, *(longlong **)(param_1 + 0x508) == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x508) + 0x18))(), iVar11 = local_4a0,
     cVar5 == '\0')) {
    local_4a0 = (0x24 - (uint)(iVar11 != 0)) + iVar11;
    if (local_49c < local_4a0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4a8,iVar11);
    }
    lVar10 = (longlong)iVar11 - (ulonglong)(iVar11 != 0);
    builtin_wcsncpy((wchar_t *)(local_4a8 + lVar10 * 2),L"Please s",8);
    builtin_wcsncpy((wchar_t *)(local_4a8 + 0x10 + lVar10 * 2),L"pecify a",8);
    builtin_wcsncpy((wchar_t *)(local_4a8 + 0x20 + lVar10 * 2),L"n OnGene",8);
    builtin_wcsncpy((wchar_t *)(local_4a8 + 0x30 + lVar10 * 2),L"rateTile",8);
    *(undefined4 *)(local_4a8 + 0x40 + lVar10 * 2) = 0x20002e;
    *(undefined2 *)(local_4a8 + 0x44 + lVar10 * 2) = 10;
    *(undefined2 *)(local_4a8 + 0x46 + lVar10 * 2) = 0;
  }
  iVar11 = local_4a0;
  if (*(longlong *)(param_1 + 0x5b8) == 0) {
    lVar10 = (longlong)local_4a0;
    local_4a0 = (0x24 - (uint)(local_4a0 != 0)) + local_4a0;
    if (local_49c < local_4a0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4a8,iVar11);
    }
    lVar10 = lVar10 - (ulonglong)(iVar11 != 0);
    builtin_wcsncpy((wchar_t *)(local_4a8 + lVar10 * 2),L"Please s",8);
    builtin_wcsncpy((wchar_t *)(local_4a8 + 0x10 + lVar10 * 2),L"pecify a",8);
    builtin_wcsncpy((wchar_t *)(local_4a8 + 0x20 + lVar10 * 2),L" ListIte",8);
    builtin_wcsncpy((wchar_t *)(local_4a8 + 0x30 + lVar10 * 2),L"msSource",8);
    *(undefined4 *)(local_4a8 + 0x40 + lVar10 * 2) = 0x20002e;
    *(undefined2 *)(local_4a8 + 0x44 + lVar10 * 2) = 10;
    *(undefined2 *)(local_4a8 + 0x46 + lVar10 * 2) = 0;
  }
  if ((local_4a0 == 0) || (local_4a0 + -1 < 1)) {
    local_4e8 = param_2 + 0x128;
    local_4f0 = param_2 + 0x1f8;
    local_4f8 = &local_448;
    local_448 = 0;
    plStack_440 = (longlong *)0x0;
    FUN_1419b0690(param_1,param_2 + 0x168,param_2 + 0x150,param_2 + 0x180);
    plVar7 = plStack_440;
    if (plStack_440 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_440 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plStack_440)(plStack_440);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar11 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    if (*(longlong *)(param_1 + 0x310) != 0) {
      SScrollBox::SetConsumeMouseWheel
                (*(longlong *)(param_1 + 0x310),*(undefined1 *)(param_2 + 0x220));
      local_478 = *(undefined1 *)(param_2 + 0x208);
      local_477 = *(undefined1 *)(param_2 + 0x209);
      local_470 = 0;
      local_468 = 0;
      TBaseDelegate<FSlateBrush_const_*>::operator=(&local_470,param_2 + 0x210);
      lVar10 = *(longlong *)(param_1 + 0x310);
      *(undefined1 *)(lVar10 + 0x388) = local_478;
      *(undefined1 *)(lVar10 + 0x389) = local_477;
      TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x390,&local_470);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_470);
    }
  }
  else {
    uVar8 = FText::FromString(local_3f0,&local_4a8);
    FText::FText(local_438,uVar8);
    local_420 = 1;
    local_418 = 0;
    local_410 = 0;
    lVar10 = STextBlock::FArguments::FArguments(local_3d8);
    FText::operator=(lVar10 + 0x108,local_438);
    *(undefined1 *)(lVar10 + 0x120) = local_420;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x128,&local_418);
    plVar7 = (longlong *)operator_new(0x660);
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar7 + 1) = 1;
      *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
      *plVar7 = (longlong)&PTR_FUN_144043520;
      if (plVar7 != (longlong *)0xfffffffffffffff0) {
        FUN_1419a9150();
      }
    }
    plVar1 = plVar7 + 2;
    local_408 = plVar1;
    local_400 = plVar7;
    FUN_14044f790(&local_408,plVar1);
    local_4f8 = (undefined8 *)0x650;
    SWidget::SetDebugInfo
              (plVar1,"STextBlock",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets/Views/STileView.h",
               0xb4);
    local_4b8 = lVar10 + 0xf8;
    local_4d0 = lVar10 + 0xe8;
    local_4c0 = *(undefined1 *)(lVar10 + 0xf1);
    local_4d8 = lVar10 + 200;
    local_4e0 = lVar10 + 0x98;
    local_4c8 = *(undefined1 *)(lVar10 + 0xf0);
    local_4f0 = lVar10 + 0x78;
    local_4f8 = (undefined8 *)(lVar10 + 0x60);
    local_4e8 = CONCAT44(local_4e8._4_4_,*(undefined4 *)(lVar10 + 0x90));
    SWidget::SWidgetConstruct(plVar1,lVar10,lVar10 + 0x30,lVar10 + 0x40);
    FUN_1419b0120(plVar1,lVar10);
    if (((char)plVar7[5] < '\0') || (cVar5 = (**(code **)(*plVar1 + 0x1e8))(plVar1), cVar5 != '\0'))
    {
      bVar6 = 1;
    }
    else {
      bVar6 = 0;
    }
    *(byte *)((longlong)plVar7 + 0x29) = *(byte *)((longlong)plVar7 + 0x29) & 0xfe;
    *(byte *)((longlong)plVar7 + 0x29) = *(byte *)((longlong)plVar7 + 0x29) | bVar6;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    *(undefined4 *)(param_1 + 0x238) = 2;
    *(undefined4 *)(param_1 + 0x23c) = 2;
    local_458 = plVar1;
    local_450 = plVar7;
    TSlotBase<FSimpleSlot>::operator[](param_1 + 0x218,&local_458);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar7 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar11 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      LOCK();
      plVar1 = plVar7 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar11 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      LOCK();
      plVar1 = plVar7 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar11 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    FUN_140691150(local_3d8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_418);
    if (local_430 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_430 + 1;
      lVar10 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_430)(local_430);
        LOCK();
        piVar2 = (int *)((longlong)local_430 + 0xc);
        iVar11 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_430 + 8))(local_430,1);
        }
      }
    }
    if (local_3e8 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_3e8 + 1;
      lVar10 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_3e8)(local_3e8);
        LOCK();
        piVar2 = (int *)((longlong)local_3e8 + 0xc);
        iVar11 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_3e8 + 8))(local_3e8,1);
        }
      }
    }
  }
  if (local_4a8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1420eb650 FUN_1420eb650 body=2255 status=ok
// SIG undefined FUN_1420eb650(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1420eb650(longlong param_1,longlong param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong **pplVar10;
  longlong lVar11;
  int iVar12;
  longlong *plVar13;
  undefined1 auStack_528 [32];
  longlong local_508;
  longlong local_500;
  longlong local_4f8;
  longlong local_4f0;
  longlong local_4e8;
  longlong local_4e0;
  undefined1 local_4d8;
  undefined1 local_4d0;
  longlong local_4c8;
  longlong local_4b8;
  uint local_4b0;
  int local_4ac;
  longlong *local_4a8;
  int local_4a0;
  longlong *local_498;
  int local_490;
  undefined4 local_488;
  undefined4 local_480;
  undefined1 local_47c;
  undefined8 local_478;
  undefined4 local_470;
  undefined2 local_468 [4];
  undefined8 local_460;
  undefined4 local_458;
  longlong *local_450;
  longlong *local_448;
  undefined1 local_440 [8];
  longlong *local_438;
  undefined1 local_428;
  undefined8 local_420;
  undefined4 local_418;
  longlong *local_410;
  longlong *local_408;
  undefined1 local_3f8 [8];
  longlong *local_3f0;
  undefined1 local_3d8 [912];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_528;
  local_488 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x508,param_2 + 0x108);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x538,param_2 + 0x118);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x548,param_2 + 0x138);
  plVar9 = (longlong *)(param_1 + 0x628);
  if ((longlong *)(param_2 + 0x148) != plVar9) {
    if ((*(int *)(param_2 + 0x150) == 0) ||
       (plVar7 = *(longlong **)(param_2 + 0x148), plVar7 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x630) != 0) &&
         (plVar7 = (longlong *)*plVar9, plVar7 != (longlong *)0x0)) {
        (**(code **)(*plVar7 + 0x28))(plVar7,0);
        if (*plVar9 != 0) {
          lVar11 = FMemory::Realloc(*plVar9,0,0);
          *plVar9 = lVar11;
        }
        *(undefined4 *)(param_1 + 0x630) = 0;
      }
    }
    else {
      (**(code **)(*plVar7 + 0x30))(plVar7,plVar9);
    }
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x638,param_2 + 0x158);
  *(undefined8 *)(param_1 + 0x648) = *(undefined8 *)(param_2 + 0x168);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3a8,param_2 + 0x188);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x5e8,param_2 + 0x198);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x5f8,param_2 + 0x1a8);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x5d8,param_2 + 0x1b8);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x6c0,param_2 + 0x1c8);
  TAttribute<enum_ESelectionMode::Type>::operator=(param_1 + 0x3b8,param_2 + 0x1d8);
  pplVar10 = (longlong **)(param_2 + 0x220);
  *(undefined1 *)(param_1 + 0x620) = *(undefined1 *)(param_2 + 0x200);
  *(undefined1 *)(param_1 + 0x419) = *(undefined1 *)(param_2 + 0x219);
  *(undefined1 *)(param_1 + 0x418) = *(undefined1 *)(param_2 + 0x21a);
  *(undefined4 *)(param_1 + 0x40c) = *(undefined4 *)(param_2 + 0x21c);
  if (((*(int *)(param_2 + 0x228) == 0) || (*pplVar10 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**pplVar10 + 0x18))(), cVar5 == '\0')) {
    plVar7 = (longlong *)FMemory::Realloc(0,0x20);
    iVar12 = 2;
    local_490 = 2;
    local_498 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)&PTR_GetPoolName_144fb2758;
      lVar11 = FDelegateHandle::GenerateNewID();
      plVar7[2] = lVar11;
    }
    pplVar10 = &local_498;
    bVar3 = false;
    bVar2 = true;
  }
  else {
    local_4a8 = (longlong *)0x0;
    local_4a0 = 0;
    if (((pplVar10 != &local_4a8) && (*(int *)(param_2 + 0x228) != 0)) &&
       (plVar7 = *pplVar10, plVar7 != (longlong *)0x0)) {
      (**(code **)(*plVar7 + 0x30))(plVar7,&local_4a8);
    }
    pplVar10 = &local_4a8;
    bVar3 = true;
    bVar2 = false;
    plVar7 = local_498;
    iVar12 = local_490;
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x518,pplVar10);
  if (bVar2) {
    if (iVar12 != 0) {
      if (plVar7 == (longlong *)0x0) goto LAB_1420eb8e4;
      (**(code **)(*plVar7 + 0x28))(plVar7,0);
      plVar7 = (longlong *)FMemory::Realloc(plVar7,0,0);
      local_498 = plVar7;
    }
    if (plVar7 != (longlong *)0x0) {
      FMemory::Free(plVar7);
    }
  }
LAB_1420eb8e4:
  if (bVar3) {
    if (local_4a0 != 0) {
      if (local_4a8 == (longlong *)0x0) goto LAB_1420eb93d;
      (**(code **)(*local_4a8 + 0x28))(local_4a8,0);
      if (local_4a8 != (longlong *)0x0) {
        local_4a8 = (longlong *)FMemory::Realloc(local_4a8,0,0);
      }
      local_4a0 = 0;
    }
    if (local_4a8 != (longlong *)0x0) {
      FMemory::Free(local_4a8);
    }
  }
LAB_1420eb93d:
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x528,param_2 + 0x230);
  plVar13 = (longlong *)0x0;
  *(undefined1 *)(param_1 + 0x621) = *(undefined1 *)(param_2 + 0x240);
  *(undefined1 *)(param_1 + 0x622) = *(undefined1 *)(param_2 + 0x241);
  *(undefined1 *)(param_1 + 0x6d1) = *(undefined1 *)(param_2 + 0x242);
  local_4b8 = 0;
  local_4b0 = 0;
  local_4ac = 0;
  plVar7 = plVar13;
  if ((*(int *)(param_1 + 0x510) != 0) && (*(longlong **)(param_1 + 0x508) != (longlong *)0x0)) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x508) + 0x18))();
    if (cVar5 != '\0') goto LAB_1420eba28;
    plVar7 = (longlong *)(ulonglong)local_4b0;
  }
  iVar12 = (int)plVar7;
  local_4b0 = (0x23 - (uint)(iVar12 != 0)) + iVar12;
  if (local_4ac < (int)local_4b0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4b8,plVar7);
  }
  lVar11 = (longlong)iVar12 - (ulonglong)(iVar12 != 0);
  builtin_wcsncpy((wchar_t *)(local_4b8 + lVar11 * 2),L"Please s",8);
  builtin_wcsncpy((wchar_t *)(local_4b8 + 0x10 + lVar11 * 2),L"pecify a",8);
  builtin_wcsncpy((wchar_t *)(local_4b8 + 0x20 + lVar11 * 2),L"n OnGene",8);
  builtin_wcsncpy((wchar_t *)(local_4b8 + 0x30 + lVar11 * 2),L"rateRow.",8);
  *(undefined4 *)(local_4b8 + 0x40 + lVar11 * 2) = 0xa0020;
  *(undefined2 *)(local_4b8 + 0x44 + lVar11 * 2) = 0;
LAB_1420eba28:
  uVar4 = local_4b0;
  if (*(longlong *)(param_1 + 0x648) == 0) {
    lVar11 = (longlong)(int)local_4b0;
    local_4b0 = (0x24 - (uint)(local_4b0 != 0)) + local_4b0;
    if (local_4ac < (int)local_4b0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4b8,uVar4);
    }
    lVar11 = lVar11 - (ulonglong)(uVar4 != 0);
    builtin_wcsncpy((wchar_t *)(local_4b8 + lVar11 * 2),L"Please s",8);
    builtin_wcsncpy((wchar_t *)(local_4b8 + 0x10 + lVar11 * 2),L"pecify a",8);
    builtin_wcsncpy((wchar_t *)(local_4b8 + 0x20 + lVar11 * 2),L" TreeIte",8);
    builtin_wcsncpy((wchar_t *)(local_4b8 + 0x30 + lVar11 * 2),L"msSource",8);
    *(undefined4 *)(local_4b8 + 0x40 + lVar11 * 2) = 0x20002e;
    *(undefined2 *)(local_4b8 + 0x44 + lVar11 * 2) = 10;
    *(undefined2 *)(local_4b8 + 0x46 + lVar11 * 2) = 0;
  }
  if (((*(int *)(param_1 + 0x630) == 0) || ((longlong *)*plVar9 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*(longlong *)*plVar9 + 0x18))(), cVar5 == '\0')) {
    uVar4 = local_4b0;
    lVar11 = (longlong)(int)local_4b0;
    local_4b0 = (0x23 - (uint)(local_4b0 != 0)) + local_4b0;
    if (local_4ac < (int)local_4b0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4b8,uVar4);
    }
    lVar11 = lVar11 - (ulonglong)(uVar4 != 0);
    builtin_wcsncpy((wchar_t *)(local_4b8 + lVar11 * 2),L"Please s",8);
    builtin_wcsncpy((wchar_t *)(local_4b8 + 0x10 + lVar11 * 2),L"pecify a",8);
    builtin_wcsncpy((wchar_t *)(local_4b8 + 0x20 + lVar11 * 2),L"n OnGetC",8);
    builtin_wcsncpy((wchar_t *)(local_4b8 + 0x30 + lVar11 * 2),L"hildren.",8);
    *(undefined4 *)(local_4b8 + 0x40 + lVar11 * 2) = 0xa0020;
    *(undefined2 *)(local_4b8 + 0x44 + lVar11 * 2) = 0;
  }
  if ((local_4b0 == 0) || ((int)(local_4b0 - 1) < 1)) {
    local_4f8 = param_2 + 0x128;
    local_468[0] = 0x103;
    local_500 = param_2 + 0x208;
    local_508 = param_2 + 0x1f0;
    local_460 = 0;
    local_480 = 0;
    local_458 = 0;
    local_47c = 1;
    local_478 = 0;
    local_470 = 0;
    FUN_1419b0690(param_1,&local_480,param_2 + 0x170,local_468);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_478);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_460);
    if (*(longlong *)(param_1 + 0x310) != 0) {
      SScrollBox::SetConsumeMouseWheel
                (*(longlong *)(param_1 + 0x310),*(undefined1 *)(param_2 + 0x218));
    }
  }
  else {
    uVar8 = FText::FromString(local_3f8,&local_4b8);
    FText::FText(local_440,uVar8);
    local_428 = 1;
    local_420 = 0;
    local_418 = 0;
    lVar11 = STextBlock::FArguments::FArguments(local_3d8);
    FText::operator=(lVar11 + 0x108,local_440);
    *(undefined1 *)(lVar11 + 0x120) = local_428;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x128,&local_420);
    plVar9 = (longlong *)operator_new(0x660);
    if (plVar9 != (longlong *)0x0) {
      *(undefined4 *)(plVar9 + 1) = 1;
      *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
      *plVar9 = (longlong)&PTR_FUN_144043520;
      plVar13 = plVar9;
      if (plVar9 != (longlong *)0xfffffffffffffff0) {
        FUN_1419a9150();
      }
    }
    plVar9 = plVar13 + 2;
    local_410 = plVar9;
    local_408 = plVar13;
    FUN_14044f790(&local_410,plVar9);
    local_508 = 0x650;
    SWidget::SetDebugInfo
              (plVar9,"STextBlock",
               "d:\\oak\\main\\engine\\source\\runtime\\slate\\public\\Widgets/Views/STreeView.h",
               0xfa);
    local_4c8 = lVar11 + 0xf8;
    local_4e0 = lVar11 + 0xe8;
    local_4d0 = *(undefined1 *)(lVar11 + 0xf1);
    local_4e8 = lVar11 + 200;
    local_4f0 = lVar11 + 0x98;
    local_4d8 = *(undefined1 *)(lVar11 + 0xf0);
    local_500 = lVar11 + 0x78;
    local_508 = lVar11 + 0x60;
    local_4f8 = CONCAT44(local_4f8._4_4_,*(undefined4 *)(lVar11 + 0x90));
    SWidget::SWidgetConstruct(plVar9,lVar11,lVar11 + 0x30,lVar11 + 0x40);
    FUN_1419b0120(plVar9,lVar11);
    if (((char)plVar13[5] < '\0') || (cVar5 = (**(code **)(*plVar9 + 0x1e8))(plVar9), cVar5 != '\0')
       ) {
      bVar6 = 1;
    }
    else {
      bVar6 = 0;
    }
    *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) & 0xfe;
    *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) | bVar6;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    *(undefined4 *)(param_1 + 0x238) = 2;
    *(undefined4 *)(param_1 + 0x23c) = 2;
    local_450 = plVar9;
    local_448 = plVar13;
    TSlotBase<FSimpleSlot>::operator[](param_1 + 0x218,&local_450);
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar13 + 1;
      lVar11 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
      LOCK();
      plVar9 = plVar13 + 1;
      lVar11 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
      LOCK();
      plVar9 = plVar13 + 1;
      lVar11 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
    FUN_140691150(local_3d8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_420);
    if (local_438 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_438 + 1;
      lVar11 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_438)(local_438);
        LOCK();
        piVar1 = (int *)((longlong)local_438 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_438 + 8))(local_438,1);
        }
      }
    }
    if (local_3f0 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_3f0 + 1;
      lVar11 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_3f0)(local_3f0);
        LOCK();
        piVar1 = (int *)((longlong)local_3f0 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_3f0 + 8))(local_3f0,1);
        }
      }
    }
  }
  if (local_4b8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1420ebf20 FUN_1420ebf20 body=1553 status=ok
// SIG undefined FUN_1420ebf20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1420ebf20(longlong param_1)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_228 [32];
  undefined4 local_208 [2];
  longlong *local_200;
  longlong *local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  longlong *local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined1 local_1b8 [8];
  longlong *local_1b0;
  undefined1 local_1a8 [272];
  longlong *local_98;
  undefined1 local_88 [19];
  undefined1 local_75;
  undefined1 local_72;
  longlong *local_68;
  undefined1 local_50 [24];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  plVar10 = (longlong *)0x0;
  local_208[0] = 0;
  FUN_14200e4c0(local_1a8);
  local_72 = 0;
  local_75 = 0;
  FUN_141978d50(param_1,local_1a8);
  plVar6 = (longlong *)operator_new(0x720);
  plVar9 = plVar10;
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 2) = 0x3f800000;
    *(undefined1 *)((longlong)plVar6 + 0x14) = 1;
    plVar6[3] = 0;
    *plVar6 = (longlong)&PTR_FUN_144fae490;
    plVar6[5] = param_1 + 0x380;
    plVar6[4] = (longlong)&PTR_StartProfileThreadUsage_144fae690;
    plVar6[6] = 0;
    plVar6[7] = 0;
    plVar6[8] = 0;
    *(uint *)((longlong)plVar6 + 100) = *(uint *)((longlong)plVar6 + 100) & 0xfffffffe;
    *(uint *)((longlong)plVar6 + 100) = *(uint *)((longlong)plVar6 + 100) | 2;
    *(undefined4 *)(plVar6 + 9) = 0x42b40000;
    *(undefined4 *)(plVar6 + 10) = 0x42b40000;
    *(undefined8 *)((longlong)plVar6 + 0x54) = 0x44000000;
    *(undefined4 *)((longlong)plVar6 + 0x5c) = 0x4a000000;
    *(undefined4 *)(plVar6 + 0xc) = 0x3faaaaab;
    *(undefined1 *)(plVar6 + 0xd) = 0;
    *(undefined4 *)((longlong)plVar6 + 0x6c) = 0;
    FUN_142741540(plVar6 + 0xe);
    plVar6[0xce] = 0;
    *(uint *)(plVar6 + 0xcf) = *(uint *)(plVar6 + 0xcf) & 0xfffffffe;
    plVar6[0xd2] = 0;
    plVar6[0xd3] = _DAT_1468b5d90;
    *(undefined4 *)(plVar6 + 0xd4) = DAT_1468b5d98;
    *(undefined8 *)((longlong)plVar6 + 0x6a4) = DAT_1468b5da0;
    *(undefined4 *)((longlong)plVar6 + 0x6ac) = DAT_1468b5da8;
    plVar6[0xd6] = _DAT_1468b5d90;
    *(undefined4 *)(plVar6 + 0xd7) = DAT_1468b5d98;
    *(longlong *)((longlong)plVar6 + 0x6bc) = _DAT_1468b5d90;
    *(undefined4 *)((longlong)plVar6 + 0x6c4) = DAT_1468b5d98;
    plVar6[0xd9] = _DAT_1468b5d90;
    *(undefined4 *)(plVar6 + 0xda) = DAT_1468b5d98;
    *(undefined4 *)((longlong)plVar6 + 0x6d4) = 0x461c4000;
    plVar6[0xdb] = 0;
    plVar6[0xdc] = (longlong)&PTR__scalar_deleting_destructor__144a80b30;
    plVar6[0xdd] = 0;
    plVar6[0xde] = 0;
    plVar6[0xdf] = 0;
    plVar6[0xe1] = -1;
    *(undefined4 *)(plVar6 + 0xe2) = 0xffffffff;
    *(uint *)(plVar6 + 0xe1) = *(uint *)(plVar6 + 0xe1) | 0x15c2625;
    *(uint *)((longlong)plVar6 + 0x70c) =
         *(uint *)((longlong)plVar6 + 0x70c) & 0xf9ffffff | 0x1120400;
    FSceneViewStateReference::Allocate();
    local_208[0] = 0xff373737;
    FLinearColor::FLinearColor(&local_1c8,local_208);
    *(undefined4 *)(plVar6 + 0xd0) = local_1c8;
    *(undefined4 *)((longlong)plVar6 + 0x684) = uStack_1c4;
    *(undefined4 *)(plVar6 + 0xd1) = uStack_1c0;
    *(undefined4 *)((longlong)plVar6 + 0x68c) = uStack_1bc;
    plVar9 = plVar6;
  }
  plVar7 = (longlong *)operator_new(0x18);
  plVar6 = plVar10;
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)&PTR_FUN_143f3f2e0;
    plVar7[2] = (longlong)plVar9;
    plVar6 = plVar7;
  }
  pplVar2 = (longlong **)(param_1 + 0x360);
  local_200 = plVar9;
  local_1f8 = plVar6;
  SharedPointerInternals::EnableSharedFromThis(&local_200,plVar9,plVar9);
  if (pplVar2 != &local_200) {
    *pplVar2 = plVar9;
    local_200 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x368,&local_1f8);
    plVar6 = local_1f8;
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar6 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  local_1e0 = operator_new(0x3a8);
  if (local_1e0 == 0) {
    plVar9 = (longlong *)0x0;
    plVar6 = plVar10;
  }
  else {
    puVar8 = (undefined8 *)
             TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_1b8);
    plVar9 = (longlong *)puVar8[1];
    uVar4 = *puVar8;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    if (local_1b0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_1b0 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_1b0)(local_1b0);
        LOCK();
        piVar1 = (int *)((longlong)local_1b0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1b0 + 8))(local_1b0,1);
        }
      }
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    local_1d8 = uVar4;
    local_1d0 = plVar9;
    plVar6 = (longlong *)FUN_1427ede60(local_1e0,*pplVar2,&local_1d8);
    plVar10 = (longlong *)0x1;
  }
  plVar7 = (longlong *)operator_new(0x18);
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)&PTR_FUN_144fb23d8;
    plVar7[2] = (longlong)plVar6;
  }
  pplVar2 = (longlong **)(param_1 + 0x370);
  local_1f0 = plVar6;
  local_1e8 = plVar7;
  SharedPointerInternals::EnableSharedFromThis(&local_1f0,plVar6,plVar6);
  if (pplVar2 != &local_1f0) {
    *pplVar2 = plVar6;
    local_1f0 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x378,&local_1e8);
    plVar7 = local_1e8;
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar7 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if ((plVar10 != (longlong *)0x0) && (plVar9 != (longlong *)0x0)) {
    LOCK();
    plVar6 = plVar9 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  plVar9 = *(longlong **)(param_1 + 0x378);
  plVar6 = *pplVar2;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  plVar10 = plVar6 + 0x2b;
  if (plVar6 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  *(longlong **)(param_1 + 0x2f0) = plVar10;
  plVar6 = *(longlong **)(param_1 + 0x2f8);
  if (plVar9 != plVar6) {
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
      UNLOCK();
      plVar6 = *(longlong **)(param_1 + 0x2f8);
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
    *(longlong **)(param_1 + 0x2f8) = plVar9;
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar9 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar9 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_50);
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_68 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_88);
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_98 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  FUN_140456c70(local_1a8);
  return;
}



// FUNCTION 1420ec540 FUN_1420ec540 body=1474 status=ok
// SIG undefined FUN_1420ec540(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1420ec540(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong **pplVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  byte bVar11;
  longlong *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined1 auStack_268 [32];
  undefined8 local_248;
  longlong local_240;
  uint local_238;
  longlong local_230;
  ulonglong local_228;
  longlong local_220;
  undefined1 local_218;
  undefined1 local_210;
  longlong local_208;
  longlong *local_1f8;
  int iStack_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  undefined8 local_1d8;
  longlong *local_1d0;
  undefined8 local_1c8;
  undefined1 local_1c0;
  undefined1 local_1bf;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  longlong *local_198;
  longlong *local_190;
  undefined1 local_188 [16];
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  longlong *local_168;
  longlong *local_160;
  undefined1 local_148 [272];
  ulonglong local_38;
  
  lVar15 = DAT_1469eaf38;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  local_1f8 = &DAT_14210c190;
  iStack_1f0 = 0;
  local_178 = 0x4210c190;
  uStack_174 = 1;
  uStack_170 = 0;
  plVar12 = (longlong *)FUN_14044bb20(&local_1f8,param_1,&local_178);
  if (((int)plVar12[1] != 0) && (*plVar12 != 0)) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar15 + 0x30,1);
    if (((int)plVar12[1] != 0) && (plVar16 = (longlong *)*plVar12, plVar16 != (longlong *)0x0)) {
      (**(code **)(*plVar16 + 0x20))(plVar16,local_188);
    }
    iVar5 = *(int *)(lVar15 + 0x38);
    *(int *)(lVar15 + 0x38) = iVar5 + 1;
    if (*(int *)(lVar15 + 0x3c) < iVar5 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar15 + 0x30,iVar5);
    }
    plVar16 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar15 + 0x30));
    *plVar16 = 0;
    *plVar16 = *plVar12;
    *plVar12 = 0;
    *(int *)(plVar16 + 1) = (int)plVar12[1];
    *(undefined4 *)(plVar12 + 1) = 0;
  }
  if (iStack_1f0 != 0) {
    if (local_1f8 == (longlong *)0x0) goto LAB_1420ec66e;
    (**(code **)(*local_1f8 + 0x28))(local_1f8,0);
    if (local_1f8 != (longlong *)0x0) {
      local_1f8 = (longlong *)FMemory::Realloc(local_1f8,0,0);
    }
    iStack_1f0 = 0;
  }
  if (local_1f8 != (longlong *)0x0) {
    FMemory::Free(local_1f8);
  }
LAB_1420ec66e:
  uVar13 = GetTransientPackage();
  FUN_1417846f0(uVar13,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  local_1c8 = 0;
  uVar14 = UTexture2D::GetPrivateStaticClass();
  local_228 = local_228 & 0xffffffffffffff00;
  local_230 = 0;
  local_238 = local_238 & 0xffffff00;
  local_240 = 0;
  local_248 = (ulonglong)local_248._4_4_ << 0x20;
  lVar15 = FUN_1417985e0(uVar14,uVar13,0,0);
  uVar9 = uRam00000001468b5d84;
  uVar8 = uRam00000001468b5d80;
  uVar7 = uRam00000001468b5d7c;
  *(undefined4 *)(lVar15 + 200) = _DAT_1468b5d78;
  *(undefined4 *)(lVar15 + 0xcc) = uVar7;
  *(undefined4 *)(lVar15 + 0xd0) = uVar8;
  *(undefined4 *)(lVar15 + 0xd4) = uVar9;
  *(undefined1 *)(lVar15 + 0xe2) = 2;
  *(byte *)(lVar15 + 0xda) = *(byte *)(lVar15 + 0xda) & 0xfe;
  *(longlong *)(*(longlong *)(param_1 + 0x430) + 0x20) = lVar15;
  FSlateBrush::SetResourceObject(param_1 + 0x358,lVar15);
  uVar6 = DAT_1464b9eec;
  local_1c0 = DAT_1464b9eec;
  local_1bf = 1;
  local_1b8 = 0;
  local_1b0 = 0;
  lVar15 = SVirtualWindow::FArguments::FArguments(local_148);
  *(undefined1 *)(lVar15 + 0x78) = uVar6;
  *(undefined1 *)(lVar15 + 0x79) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar15 + 0x80,&local_1b8);
  plVar16 = (longlong *)SharedPointerInternals::NewIntrusiveReferenceController<SVirtualWindow>();
  plVar12 = plVar16 + 2;
  local_168 = plVar12;
  local_160 = plVar16;
  FUN_14044f790(&local_168,plVar12);
  local_248 = 0x608;
  SWidget::SetDebugInfo
            (plVar12,"SVirtualWindow",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Slate\\SRetainerWidget.cpp",0xa4
            );
  local_238 = *(undefined4 *)(lVar15 + 0x90);
  local_208 = lVar15 + 0xf8;
  local_220 = lVar15 + 0xe8;
  local_210 = *(undefined1 *)(lVar15 + 0xf1);
  local_228 = lVar15 + 200;
  local_230 = lVar15 + 0x98;
  local_218 = *(undefined1 *)(lVar15 + 0xf0);
  local_248 = lVar15 + 0x60;
  local_240 = lVar15 + 0x78;
  SWidget::SWidgetConstruct(plVar12,lVar15,lVar15 + 0x30,lVar15 + 0x40);
  FUN_141979060(plVar12,lVar15);
  if (((char)plVar16[5] < '\0') ||
     (cVar10 = (**(code **)(*plVar12 + 0x1e8))(plVar12), cVar10 != '\0')) {
    bVar11 = 1;
  }
  else {
    bVar11 = 0;
  }
  *(byte *)((longlong)plVar16 + 0x29) = *(byte *)((longlong)plVar16 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar16 + 0x29) = *(byte *)((longlong)plVar16 + 0x29) | bVar11;
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  pplVar3 = (longlong **)(param_1 + 0x418);
  local_1e8 = plVar12;
  local_1e0 = plVar16;
  if (pplVar3 != &local_1e8) {
    *pplVar3 = plVar12;
    local_1e8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x420,&local_1e0);
  }
  plVar12 = local_1e0;
  if (local_1e0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1e0 + 1;
    lVar15 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*local_1e0)(local_1e0);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_1e0 + 8))(local_1e0,1);
      }
    }
  }
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar16 + 1;
    lVar15 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
    LOCK();
    plVar12 = plVar16 + 1;
    lVar15 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
  FUN_140456c70(local_148);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1b8);
  FUN_1419a3e90(*pplVar3,0);
  FUN_142144830(param_1);
  local_1d0 = *(longlong **)(param_2 + 0x110);
  local_1d8 = *(undefined8 *)(param_2 + 0x108);
  if (local_1d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1d0 + 1) = (int)local_1d0[1] + 1;
    UNLOCK();
  }
  puVar4 = (undefined8 *)(param_1 + 1000);
  if (puVar4 != &local_1d8) {
    *puVar4 = local_1d8;
    local_1d8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x3f0,&local_1d0);
  }
  plVar12 = local_1d0;
  if (local_1d0 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_1d0 + 1;
    lVar15 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*local_1d0)(local_1d0);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_1d0 + 8))(local_1d0,1);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x404) = *(undefined1 *)(param_2 + 0x118);
  *(undefined1 *)(param_1 + 0x405) = *(undefined1 *)(param_2 + 0x119);
  *(undefined4 *)(param_1 + 0x3fc) = *(undefined4 *)(param_2 + 0x11c);
  *(undefined4 *)(param_1 + 0x400) = *(undefined4 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x408) = DAT_1468b5a78;
  *(undefined8 *)(param_1 + 0x410) = 0;
  *(undefined2 *)(param_1 + 0x3f8) = 1;
  *(undefined1 *)(param_1 + 0x406) = 1;
  *(undefined8 *)(param_1 + 0x4c8) = 0;
  *(undefined4 *)(param_1 + 0x4e0) = 0;
  local_1a8 = *puVar4;
  local_1a0 = *(longlong *)(param_1 + 0x3f0);
  if (local_1a0 != 0) {
    LOCK();
    *(int *)(local_1a0 + 8) = *(int *)(local_1a0 + 8) + 1;
    UNLOCK();
  }
  FUN_14185a760(*pplVar3,&local_1a8);
  plVar12 = *(longlong **)(param_1 + 0x420);
  local_198 = *pplVar3;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_190 = plVar12;
  TSlotBase<FSimpleSlot>::operator[](param_1 + 0x218,&local_198);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar12 + 1;
    lVar15 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
    LOCK();
    plVar16 = plVar12 + 1;
    lVar15 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  return;
}



// FUNCTION 1420ecb10 FUN_1420ecb10 body=2415 status=ok
// SIG undefined FUN_1420ecb10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1420ecb10(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  longlong **pplVar2;
  float fVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  byte bVar7;
  ushort uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined1 auStack_6e8 [32];
  longlong local_6c8;
  longlong local_6c0;
  undefined4 local_6b8;
  longlong local_6b0;
  longlong local_6a8;
  longlong local_6a0;
  undefined1 local_698;
  undefined1 local_690;
  longlong local_688;
  longlong *local_678;
  longlong *plStack_670;
  float local_668;
  undefined1 local_664;
  longlong local_660;
  undefined4 local_658;
  float local_650;
  undefined1 local_64c;
  longlong local_648;
  undefined4 local_640;
  longlong local_638;
  undefined4 local_630;
  undefined1 local_62c;
  undefined8 local_628;
  undefined4 local_620;
  undefined4 local_618;
  undefined1 local_614;
  undefined8 local_610;
  undefined4 local_608;
  longlong *local_600;
  longlong *local_5f8;
  longlong *local_5f0;
  longlong *local_5e8;
  undefined8 local_5e0;
  longlong *local_5d8;
  longlong local_5d0;
  undefined1 local_5c8;
  undefined8 local_5c0;
  undefined4 local_5b8;
  longlong *local_5b0;
  longlong *local_5a8;
  longlong *local_598;
  longlong *local_590;
  longlong *local_580;
  longlong *local_578;
  longlong *local_568;
  longlong *plStack_560;
  undefined1 local_558 [272];
  longlong *local_448;
  undefined1 local_430 [24];
  undefined1 local_418 [24];
  undefined1 local_400 [24];
  undefined1 local_3e8 [32];
  undefined1 local_3c8 [280];
  undefined1 local_2b0 [48];
  longlong *local_280;
  undefined1 local_270 [16];
  undefined1 local_260 [24];
  undefined1 local_248 [496];
  ulonglong local_58;
  
  if (param_3 != 0) {
    local_58 = DAT_1468387a8 ^ (ulonglong)auStack_6e8;
    local_638 = param_1;
    FUN_1418388a0(*(undefined8 *)(*(longlong *)(DAT_1469f4590 + 0x18) + 8),&local_5e0);
    fVar3 = *(float *)(param_3 + 0x14);
    uVar8 = FUN_14183a8e0(local_5e0,param_4 + 8,0x3f800000);
    local_5c8 = 1;
    local_618 = 1;
    local_5c0 = 0;
    local_5b8 = 0;
    local_614 = 1;
    local_610 = 0;
    local_608 = 0;
    local_668 = (float)uVar8;
    if (fVar3 <= (float)uVar8) {
      local_668 = fVar3;
    }
    local_630 = 2;
    local_62c = 1;
    local_628 = 0;
    local_620 = 0;
    local_64c = 1;
    local_648 = 0;
    local_640 = 0;
    local_664 = 1;
    local_660 = 0;
    local_658 = 0;
    local_650 = local_668;
    local_5d0 = param_3 + 8;
    lVar9 = SImage::FArguments::FArguments(local_3c8);
    *(longlong *)(lVar9 + 0x108) = param_3 + 8;
    *(undefined1 *)(lVar9 + 0x110) = 1;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x118,&local_5c0);
    plVar10 = (longlong *)FUN_140c61c00();
    plVar13 = plVar10 + 2;
    local_5b0 = plVar13;
    local_5a8 = plVar10;
    FUN_14044f790(&local_5b0,plVar13);
    local_6c8 = 0x278;
    SWidget::SetDebugInfo
              (plVar13,"SImage",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\RichTextBlockImageDecorator.cpp"
               ,0x2e);
    local_688 = lVar9 + 0xf8;
    local_6a0 = lVar9 + 0xe8;
    local_690 = *(undefined1 *)(lVar9 + 0xf1);
    local_6a8 = lVar9 + 200;
    local_6b0 = lVar9 + 0x98;
    local_698 = *(undefined1 *)(lVar9 + 0xf0);
    local_6c0 = lVar9 + 0x78;
    local_6c8 = lVar9 + 0x60;
    local_6b8 = *(undefined4 *)(lVar9 + 0x90);
    SWidget::SWidgetConstruct(plVar13,lVar9,lVar9 + 0x30,lVar9 + 0x40);
    SImage::Construct(plVar13,lVar9);
    if (((char)plVar10[5] < '\0') ||
       (cVar6 = (**(code **)(*plVar13 + 0x1e8))(plVar13), cVar6 != '\0')) {
      bVar7 = 1;
    }
    else {
      bVar7 = 0;
    }
    *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) & 0xfe;
    *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) | bVar7;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    lVar9 = FUN_1420ce2b0(local_558);
    *(undefined4 *)(lVar9 + 0x138) = 2;
    *(undefined1 *)(lVar9 + 0x13c) = 1;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x140,&local_628);
    *(undefined4 *)(lVar9 + 0x120) = 1;
    *(undefined1 *)(lVar9 + 0x124) = 1;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x128,&local_610);
    pplVar2 = (longlong **)(lVar9 + 0x108);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    local_678 = plVar13;
    plStack_670 = plVar10;
    if (&local_678 != pplVar2) {
      local_678 = *pplVar2;
      plStack_670 = *(longlong **)(lVar9 + 0x110);
      *pplVar2 = plVar13;
      *(longlong **)(lVar9 + 0x110) = plVar10;
      local_568 = plVar13;
      plStack_560 = plVar10;
    }
    plVar13 = plStack_670;
    if (plStack_670 != (longlong *)0x0) {
      LOCK();
      plVar11 = plStack_670 + 1;
      lVar12 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plStack_670)(plStack_670);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_670 + 8))(plStack_670,1);
        }
      }
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar10 + 1;
      lVar12 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
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
    plVar11 = (longlong *)FUN_1420cba60();
    plVar13 = plVar11 + 2;
    local_598 = plVar13;
    local_590 = plVar11;
    FUN_14044f790(&local_598,plVar13);
    local_6c8 = 0x398;
    SWidget::SetDebugInfo
              (plVar13,"SScaleBox",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\RichTextBlockImageDecorator.cpp"
               ,0x2a);
    local_6b8 = *(undefined4 *)(lVar9 + 0x90);
    local_688 = lVar9 + 0xf8;
    local_6a0 = lVar9 + 0xe8;
    local_690 = *(undefined1 *)(lVar9 + 0xf1);
    local_6a8 = lVar9 + 200;
    local_6b0 = lVar9 + 0x98;
    local_698 = *(undefined1 *)(lVar9 + 0xf0);
    local_6c0 = lVar9 + 0x78;
    local_6c8 = lVar9 + 0x60;
    SWidget::SWidgetConstruct(plVar13,lVar9,lVar9 + 0x30,lVar9 + 0x40);
    FUN_141976420(plVar13,lVar9);
    if (((char)plVar11[5] < '\0') ||
       (cVar6 = (**(code **)(*plVar13 + 0x1e8))(plVar13), cVar6 != '\0')) {
      bVar7 = 1;
    }
    else {
      bVar7 = 0;
    }
    *(byte *)((longlong)plVar11 + 0x29) = *(byte *)((longlong)plVar11 + 0x29) & 0xfe;
    *(byte *)((longlong)plVar11 + 0x29) = *(byte *)((longlong)plVar11 + 0x29) | bVar7;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    local_600 = plVar13;
    local_5f8 = plVar11;
    lVar9 = FUN_14068f180(local_248);
    plVar13 = (longlong *)(lVar9 + 0x168);
    *(float *)(lVar9 + 0x160) = local_668;
    *(undefined1 *)(lVar9 + 0x164) = 1;
    if (((&local_660 != plVar13) && (*(int *)(lVar9 + 0x170) != 0)) &&
       (plVar5 = (longlong *)*plVar13, plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 0x28))(plVar5,0);
      if (*plVar13 != 0) {
        lVar12 = FMemory::Realloc(*plVar13,0,0);
        *plVar13 = lVar12;
      }
      *(undefined4 *)(lVar9 + 0x170) = 0;
    }
    plVar13 = (longlong *)(lVar9 + 0x150);
    *(float *)(lVar9 + 0x148) = local_650;
    *(undefined1 *)(lVar9 + 0x14c) = 1;
    if (((&local_648 != plVar13) && (*(int *)(lVar9 + 0x158) != 0)) &&
       (plVar5 = (longlong *)*plVar13, plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 0x28))(plVar5,0);
      if (*plVar13 != 0) {
        lVar12 = FMemory::Realloc(*plVar13,0,0);
        *plVar13 = lVar12;
      }
      *(undefined4 *)(lVar9 + 0x158) = 0;
    }
    plVar13 = (longlong *)operator_new(800);
    if (plVar13 == (longlong *)0x0) {
      plVar13 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar13 + 1) = 1;
      *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
      *plVar13 = (longlong)&PTR_FUN_144044b78;
      if (plVar13 != (longlong *)0xfffffffffffffff0) {
        FUN_1419618a0();
      }
    }
    plVar5 = plVar13 + 2;
    local_580 = plVar5;
    local_578 = plVar13;
    FUN_14044f790(&local_580,plVar5);
    local_6c8 = 0x310;
    SWidget::SetDebugInfo
              (plVar5,&DAT_144044860,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\RichTextBlockImageDecorator.cpp"
               ,0x26);
    lVar9 = FUN_140692660(lVar9,&local_600);
    local_6b8 = *(undefined4 *)(lVar9 + 0x90);
    local_688 = lVar9 + 0xf8;
    local_6a0 = lVar9 + 0xe8;
    local_690 = *(undefined1 *)(lVar9 + 0xf1);
    local_6c8 = lVar9 + 0x60;
    local_6a8 = lVar9 + 200;
    local_698 = *(undefined1 *)(lVar9 + 0xf0);
    local_6b0 = lVar9 + 0x98;
    local_6c0 = lVar9 + 0x78;
    plVar5 = plVar13 + 2;
    SWidget::SWidgetConstruct(plVar5,lVar9,lVar9 + 0x30,lVar9 + 0x40);
    FUN_141972160(plVar5,lVar9);
    if (((char)plVar13[5] < '\0') || (cVar6 = (**(code **)(*plVar5 + 0x1e8))(plVar5), cVar6 != '\0')
       ) {
      bVar7 = 1;
    }
    else {
      bVar7 = 0;
    }
    *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) & 0xfe;
    *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) | bVar7;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    local_5f0 = plVar5;
    local_5e8 = plVar13;
    TSlotBase<FSimpleSlot>::operator[](local_638 + 0x218,&local_5f0);
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar13 + 1;
      lVar9 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
      LOCK();
      plVar5 = plVar13 + 1;
      lVar9 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
      LOCK();
      plVar5 = plVar13 + 1;
      lVar9 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
    FUN_140690ea0(local_248);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar11 + 1;
      lVar9 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
      LOCK();
      plVar13 = plVar11 + 1;
      lVar9 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_3e8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_400);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_418);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_430);
    if (local_448 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_448 + 1;
      lVar9 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_448)(local_448);
        LOCK();
        piVar1 = (int *)((longlong)local_448 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_448 + 8))(local_448,1);
        }
      }
    }
    FUN_140456c70(local_558);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar10 + 1;
      lVar9 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
      LOCK();
      plVar13 = plVar10 + 1;
      lVar9 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_260);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_270);
    if (local_280 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_280 + 1;
      lVar9 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_280)(local_280);
        LOCK();
        piVar1 = (int *)((longlong)local_280 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_280 + 8))(local_280,1);
        }
      }
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_2b0);
    FUN_140456c70(local_3c8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_660);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_648);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_628);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_610);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_5c0);
    if (local_5d8 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_5d8 + 1;
      lVar9 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_5d8)(local_5d8);
        LOCK();
        piVar1 = (int *)((longlong)local_5d8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_5d8 + 8))(local_5d8,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1420ed480 FUN_1420ed480 body=693 status=ok
// SIG undefined FUN_1420ed480(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1420ed480(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined1 local_188 [8];
  longlong *local_180;
  longlong *local_178;
  longlong *local_170;
  longlong *local_168;
  undefined1 *local_160;
  undefined8 local_158;
  longlong *local_150;
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_138 [264];
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  *(undefined4 *)(param_1 + 0x2f0) = *param_3;
  *(undefined4 *)(param_1 + 0x2f4) = param_3[1];
  *(undefined4 *)(param_1 + 0x2f8) = param_3[2];
  *(undefined4 *)(param_1 + 0x2fc) = param_3[3];
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfb;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined4 *)(param_1 + 0x308) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x30c) = 0x3f000000;
  plVar5 = (longlong *)operator_new(0x240);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_144fb23f8;
    if (plVar5 != (longlong *)0xfffffffffffffff0) {
      FUN_141961aa0();
    }
  }
  plVar1 = plVar5 + 2;
  local_170 = plVar1;
  local_168 = plVar5;
  FUN_14044f790(&local_170,plVar1);
  local_160 = local_188;
  local_198 = 0x230;
  SWidget::SetDebugInfo
            (plVar1,"SConstraintCanvas",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Slate\\SWorldWidgetScreenLayer.cpp"
             ,0x15);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_180 = plVar1;
  local_178 = plVar5;
  if ((longlong **)(param_1 + 0x360) != &local_180) {
    *(longlong **)(param_1 + 0x360) = plVar1;
    local_180 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x368,&local_178);
  }
  plVar5 = local_178;
  if (local_178 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_178 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_178)(local_178);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_178 + 8))(local_178,1);
      }
    }
  }
  uVar6 = SCanvas::FArguments::FArguments(local_138);
  puVar7 = (undefined8 *)FUN_1420dadb0(&local_170,local_148,uVar6);
  plVar5 = (longlong *)puVar7[1];
  local_158 = *puVar7;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_150 = plVar5;
  TSlotBase<FSimpleSlot>::operator[](param_1 + 0x218,&local_158);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  if (local_140 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_140 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  plVar5 = local_168;
  if (local_168 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_168 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_168)(local_168);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_168 + 8))(local_168,1);
      }
    }
  }
  if (local_30 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_138);
  return;
}



// FUNCTION 1420ed740 FUN_1420ed740 body=2007 status=ok
// SIG undefined FUN_1420ed740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1420ed740(longlong param_1,uint param_2,undefined4 *param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  byte bVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined1 auStack_468 [32];
  longlong local_448;
  longlong local_440;
  undefined4 local_438;
  longlong local_430;
  longlong local_428;
  longlong local_420;
  undefined1 local_418;
  undefined1 local_410;
  longlong local_408;
  undefined4 local_3f8;
  undefined4 local_3f0;
  undefined1 local_3ec;
  undefined8 local_3e8;
  undefined4 local_3e0;
  longlong local_3d8;
  longlong *local_3d0;
  longlong *local_3c8;
  longlong local_3c0;
  longlong local_3b8;
  longlong *local_3b0;
  undefined4 local_3a8;
  undefined1 local_3a4;
  undefined8 local_3a0;
  undefined4 local_398;
  undefined4 local_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined1 local_380;
  undefined8 local_378;
  undefined4 local_370;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined1 local_358;
  undefined8 local_350;
  undefined4 local_348;
  undefined8 local_340;
  longlong local_338;
  longlong *local_330;
  longlong *local_328;
  longlong *local_320;
  longlong *local_318;
  undefined1 local_310 [8];
  longlong *local_308;
  longlong *local_300;
  longlong *local_2f8;
  longlong *local_2e8;
  longlong *local_2e0;
  undefined1 local_2c8 [280];
  undefined1 local_1b0 [24];
  undefined1 local_198 [24];
  undefined1 local_180 [24];
  undefined1 local_168 [264];
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_468;
  *(undefined8 *)(param_1 + 0x428) = *param_4;
  plVar10 = (longlong *)param_4[1];
  plVar11 = *(longlong **)(param_1 + 0x430);
  local_3c0 = param_1;
  if (plVar10 != plVar11) {
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
      UNLOCK();
      plVar11 = *(longlong **)(param_1 + 0x430);
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
    *(longlong **)(param_1 + 0x430) = plVar10;
  }
  puVar15 = (undefined8 *)0x0;
  *(undefined8 *)(param_1 + 0x420) = 0;
  if (param_2 < 2) {
    local_368 = *param_3;
    uStack_364 = param_3[1];
    uStack_360 = param_3[2];
    uStack_35c = param_3[3];
    local_358 = *(undefined1 *)(param_3 + 4);
    local_350 = 0;
    local_348 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_350,param_3 + 6);
    lVar9 = param_1 + 0x210;
    puVar8 = (undefined8 *)(param_1 + 0x210);
    if (param_1 == -0x220) {
      lVar9 = 0;
      puVar8 = puVar15;
    }
    *(undefined1 *)(lVar9 + 0x48) = local_358;
    *(undefined4 *)(lVar9 + 0x38) = local_368;
    *(undefined4 *)(lVar9 + 0x3c) = uStack_364;
    *(undefined4 *)(lVar9 + 0x40) = uStack_360;
    *(undefined4 *)(lVar9 + 0x44) = uStack_35c;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x50,&local_350);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_350);
    TSlotBase<FSimpleSlot>::operator[](lVar9 + 0x10,param_4);
    puVar15 = puVar8 + 2;
    if (puVar8 == (undefined8 *)0x0) {
      puVar15 = (undefined8 *)0x0;
    }
    *(undefined8 **)(param_1 + 0x420) = puVar15;
  }
  else {
    local_340 = *param_4;
    local_338 = param_4[1];
    local_3a8 = 0x3f800000;
    local_3a4 = 1;
    local_3a0 = 0;
    local_398 = 0;
    if (local_338 != 0) {
      LOCK();
      *(int *)(local_338 + 8) = *(int *)(local_338 + 8) + 1;
      UNLOCK();
    }
    local_390 = *param_3;
    uStack_38c = param_3[1];
    uStack_388 = param_3[2];
    uStack_384 = param_3[3];
    local_380 = *(undefined1 *)(param_3 + 4);
    local_378 = 0;
    local_370 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_378,param_3 + 6);
    puVar8 = (undefined8 *)operator_new(0x88);
    if (puVar8 != (undefined8 *)0x0) {
      FUN_1417f13c0(puVar8);
      *puVar8 = &PTR__scalar_deleting_destructor__144042bf8;
      puVar15 = puVar8;
    }
    local_3f8 = 1;
    local_3f0 = 0x3f800000;
    local_3ec = 1;
    local_3e8 = 0;
    local_3e0 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_3e8,&local_3a0);
    *(undefined4 *)(puVar15 + 5) = local_3f8;
    *(undefined1 *)((longlong)puVar15 + 0x34) = local_3ec;
    *(undefined4 *)(puVar15 + 6) = local_3f0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(puVar15 + 7,&local_3e8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_3e8);
    *(undefined4 *)(puVar15 + 9) = local_390;
    *(undefined4 *)((longlong)puVar15 + 0x4c) = uStack_38c;
    *(undefined4 *)(puVar15 + 10) = uStack_388;
    *(undefined4 *)((longlong)puVar15 + 0x54) = uStack_384;
    *(undefined1 *)(puVar15 + 0xb) = local_380;
    TBaseDelegate<FSlateBrush_const_*>::operator=(puVar15 + 0xc,&local_378);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_378);
    uVar12 = *(undefined8 *)(param_1 + 0x3b0);
    lVar9 = SExpanderArrow::FArguments::FArguments(local_2c8);
    *(undefined8 *)(lVar9 + 0x108) = uVar12;
    plVar10 = (longlong *)
              TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x10,local_310);
    if (*plVar10 == 0) {
      local_3d8 = 0;
    }
    else {
      local_3d8 = *plVar10 + -8;
    }
    local_3d0 = (longlong *)plVar10[1];
    if (local_3d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_3d0 + 1) = (int)local_3d0[1] + 1;
      UNLOCK();
    }
    if (local_308 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_308 + 1;
      lVar5 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_308)(local_308);
        LOCK();
        piVar1 = (int *)((longlong)local_308 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_308 + 8))(local_308,1);
        }
      }
    }
    local_3c8 = &local_3d8;
    plVar11 = (longlong *)SharedPointerInternals::NewIntrusiveReferenceController<SExpanderArrow>();
    plVar10 = plVar11 + 2;
    local_300 = plVar10;
    local_2f8 = plVar11;
    FUN_14044f790(&local_300,plVar10);
    local_448 = 0x360;
    SWidget::SetDebugInfo
              (plVar10,"SExpanderArrow",
               "d:\\oak\\main\\engine\\source\\runtime\\slate\\public\\Widgets/Views/STableRow.h",
               0xe3);
    local_438 = *(undefined4 *)(lVar9 + 0x90);
    local_408 = lVar9 + 0xf8;
    local_420 = lVar9 + 0xe8;
    local_410 = *(undefined1 *)(lVar9 + 0xf1);
    local_428 = lVar9 + 200;
    local_430 = lVar9 + 0x98;
    local_418 = *(undefined1 *)(lVar9 + 0xf0);
    local_440 = lVar9 + 0x78;
    local_448 = lVar9 + 0x60;
    SWidget::SWidgetConstruct(plVar10,lVar9,lVar9 + 0x30,lVar9 + 0x40);
    local_3b8 = *local_3c8;
    local_3b0 = (longlong *)local_3c8[1];
    if (local_3b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_3b0 + 1) = (int)local_3b0[1] + 1;
      UNLOCK();
    }
    FUN_1419ab980(plVar10,lVar9,&local_3b8);
    plVar3 = local_3b0;
    if (local_3b0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_3b0 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_3b0)(local_3b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    if (((char)plVar11[5] < '\0') ||
       (cVar6 = (**(code **)(*plVar10 + 0x1e8))(plVar10), cVar6 != '\0')) {
      bVar7 = 1;
    }
    else {
      bVar7 = 0;
    }
    *(byte *)((longlong)plVar11 + 0x29) = *(byte *)((longlong)plVar11 + 0x29) & 0xfe;
    *(byte *)((longlong)plVar11 + 0x29) = *(byte *)((longlong)plVar11 + 0x29) | bVar7;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    local_330 = plVar10;
    local_328 = plVar11;
    puVar8 = (undefined8 *)operator_new(0x88);
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      FUN_1417f13c0(puVar8);
      *puVar8 = &PTR__scalar_deleting_destructor__144042bf8;
    }
    lVar9 = SVerticalBox::FSlot::AutoHeight(puVar8);
    *(undefined2 *)(lVar9 + 0x20) = 3;
    plVar10 = (longlong *)operator_new(0x248);
    if (plVar10 == (longlong *)0x0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar10 + 1) = 1;
      *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
      *plVar10 = (longlong)&PTR_FUN_144044b58;
      if (plVar10 != (longlong *)0xfffffffffffffff0) {
        SHorizontalBox::SHorizontalBox();
      }
    }
    plVar3 = plVar10 + 2;
    local_2e8 = plVar3;
    local_2e0 = plVar10;
    FUN_14044f790(&local_2e8,plVar3);
    local_448 = 0x238;
    SWidget::SetDebugInfo
              (plVar3,"SHorizontalBox",
               "d:\\oak\\main\\engine\\source\\runtime\\slate\\public\\Widgets/Views/STableRow.h",
               0xdc);
    uVar12 = FUN_140692760(puVar15,&local_340);
    uVar13 = FUN_140692760(lVar9,&local_330);
    uVar14 = SCanvas::FArguments::FArguments(local_168);
    uVar13 = SOverlay::FArguments::operator+(uVar14,uVar13);
    lVar9 = SOverlay::FArguments::operator+(uVar13,uVar12);
    local_438 = *(undefined4 *)(lVar9 + 0x90);
    local_408 = lVar9 + 0xf8;
    local_420 = lVar9 + 0xe8;
    local_410 = *(undefined1 *)(lVar9 + 0xf1);
    local_448 = lVar9 + 0x60;
    local_428 = lVar9 + 200;
    local_418 = *(undefined1 *)(lVar9 + 0xf0);
    local_430 = lVar9 + 0x98;
    local_440 = lVar9 + 0x78;
    plVar3 = plVar10 + 2;
    SWidget::SWidgetConstruct(plVar3,lVar9,lVar9 + 0x30,lVar9 + 0x40);
    SHorizontalBox::Construct(plVar3,lVar9);
    if (((char)plVar10[5] < '\0') || (cVar6 = (**(code **)(*plVar3 + 0x1e8))(plVar3), cVar6 != '\0')
       ) {
      bVar7 = 1;
    }
    else {
      bVar7 = 0;
    }
    lVar9 = local_3c0;
    *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) & 0xfe;
    *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) | bVar7;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    local_320 = plVar3;
    local_318 = plVar10;
    TSlotBase<FSimpleSlot>::operator[](local_3c0 + 0x220,&local_320);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar10 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
      LOCK();
      plVar3 = plVar10 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
      LOCK();
      plVar3 = plVar10 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    if (local_60 != 0) {
      FMemory::Free();
    }
    FUN_140456c70(local_168);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar11 + 1;
      lVar5 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
      LOCK();
      plVar10 = plVar11 + 1;
      lVar5 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    plVar10 = local_3d0;
    if (local_3d0 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_3d0 + 1;
      lVar5 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_3d0)(local_3d0);
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
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_180);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_198);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1b0);
    FUN_140456c70(local_2c8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_3a0);
    *(undefined8 **)(lVar9 + 0x420) = puVar15;
  }
  return;
}



// FUNCTION 1420edf20 FUN_1420edf20 body=870 status=ok
// SIG undefined FUN_1420edf20(void)

void FUN_1420edf20(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  code *local_98;
  undefined4 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined8 local_40;
  longlong *plStack_38;
  undefined1 local_30;
  undefined1 local_28 [16];
  
  *(undefined1 *)(param_1 + 0x439) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = *(undefined8 *)(param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x3b0) = *(undefined8 *)(param_2 + 0x110);
  uStack_90 = 0;
  local_98 = FUN_1420f91a0;
  local_88 = 0x420f91a0;
  uStack_84 = 1;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 1;
  FUN_14068c560(local_68,param_1,&local_88);
  *(undefined8 *)(param_1 + 0x2f8) = local_78;
  *(undefined1 *)(param_1 + 0x300) = local_70;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x308,local_68);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_68);
  local_58 = 0x3f800000;
  uStack_50 = 0x3f8000003f800000;
  local_48 = 0;
  local_98 = FUN_14069b950;
  uStack_90 = 0;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  local_30 = 1;
  FUN_14068c6c0(local_28,param_1,&local_98);
  FUN_140692440(param_1 + 0x2b8,&local_58);
  *(undefined1 *)(param_1 + 0x2e0) = local_30;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x2e8,local_28);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_28);
  plVar2 = plStack_38;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_38 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_38 + 8))(plStack_38,1);
      }
    }
  }
  plVar2 = (longlong *)(param_1 + 0x3b8);
  if ((longlong *)(param_2 + 0x118) != plVar2) {
    if ((*(int *)(param_2 + 0x120) == 0) ||
       (plVar6 = *(longlong **)(param_2 + 0x118), plVar6 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x3c0) != 0) &&
         (plVar6 = (longlong *)*plVar2, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        if (*plVar2 != 0) {
          lVar4 = FMemory::Realloc(*plVar2,0,0);
          *plVar2 = lVar4;
        }
        *(undefined4 *)(param_1 + 0x3c0) = 0;
      }
    }
    else {
      (**(code **)(*plVar6 + 0x30))(plVar6,plVar2);
    }
  }
  plVar2 = (longlong *)(param_1 + 0x3c8);
  if ((longlong *)(param_2 + 0x128) != plVar2) {
    if ((*(int *)(param_2 + 0x130) == 0) ||
       (plVar6 = *(longlong **)(param_2 + 0x128), plVar6 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x3d0) != 0) &&
         (plVar6 = (longlong *)*plVar2, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        if (*plVar2 != 0) {
          lVar4 = FMemory::Realloc(*plVar2,0,0);
          *plVar2 = lVar4;
        }
        *(undefined4 *)(param_1 + 0x3d0) = 0;
      }
    }
    else {
      (**(code **)(*plVar6 + 0x30))(plVar6,plVar2);
    }
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3e0,param_2 + 0x138);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3f0,param_2 + 0x148);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x400,param_2 + 0x158);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x410,param_2 + 0x168);
  plVar2 = (longlong *)param_3[1];
  lVar4 = *param_3;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
  }
  lVar5 = lVar4 + 0x430;
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  *(longlong *)(param_1 + 0x390) = lVar5;
  plVar6 = *(longlong **)(param_1 + 0x398);
  if (plVar2 != plVar6) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar6 = *(longlong **)(param_1 + 0x398);
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
    *(longlong **)(param_1 + 0x398) = plVar2;
  }
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar2 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar2 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x3a4) = *(undefined1 *)(param_2 + 0x1a0);
  return;
}



// FUNCTION 1420ee290 FUN_1420ee290 body=107 status=ok
// SIG undefined FUN_1420ee290(void)

undefined4 * FUN_1420ee290(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
  if ((param_3[4] != 0) && (*(longlong **)(param_3 + 2) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 2) + 0x18))();
    if (cVar1 != '\0') {
      if (param_3[4] == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_3 + 2);
      }
      uVar3 = (**(code **)(*plVar2 + 0x38))();
      *param_3 = uVar3;
    }
  }
  *param_2 = *param_3;
  *(undefined1 *)(param_2 + 1) = 1;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3 + 2);
  return param_2;
}



// FUNCTION 1420ee300 ConvertImage body=73 status=ok
// SIG undefined ConvertImage(void)

longlong UBorder::ConvertImage(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1420f8790(param_2);
  FUN_1406922e0(param_1 + 0x150,uVar1);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 0x90);
  FSlateBrush::~FSlateBrush(param_2);
  return param_1 + 0x150;
}



// FUNCTION 1420ee350 ConvertImage body=73 status=ok
// SIG undefined ConvertImage(void)

longlong UImage::ConvertImage(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1420f8790(param_2);
  FUN_1406922e0(param_1 + 0x100,uVar1);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 0x90);
  FSlateBrush::~FSlateBrush(param_2);
  return param_1 + 0x100;
}



// FUNCTION 1420ee3a0 FUN_1420ee3a0 body=134 status=ok
// SIG undefined FUN_1420ee3a0(void)

undefined4 * FUN_1420ee3a0(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if ((*(int *)(param_3 + 4) != 0) && ((longlong *)param_3[3] != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)param_3[3] + 0x18))();
    if (cVar4 != '\0') {
      if (*(int *)(param_3 + 4) == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = (longlong *)param_3[3];
      }
      (**(code **)(*plVar5 + 0x38))(plVar5,&local_18);
      *param_3 = local_18;
      param_3[1] = uStack_10;
    }
  }
  uVar1 = *(undefined4 *)((longlong)param_3 + 4);
  uVar2 = *(undefined4 *)(param_3 + 1);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
  *param_2 = *(undefined4 *)param_3;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  *(undefined1 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3 + 3);
  return param_2;
}



// FUNCTION 1420ee430 ConvertSerializedSizeParamToRuntime body=237 status=ok
// SIG undefined ConvertSerializedSizeParamToRuntime(void)

undefined4 *
UWidget::ConvertSerializedSizeParamToRuntime
          (undefined4 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  local_24 = 1;
  local_40 = 0;
  local_38 = 0;
  local_20 = 0;
  local_18 = 0;
  if (*(char *)(param_2 + 1) == '\x01') {
    local_28 = *param_2;
    local_30 = 1;
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_20,&local_40,param_3,param_4,local_28);
    *param_1 = local_30;
    *(undefined1 *)(param_1 + 3) = local_24;
    param_1[2] = local_28;
    *(undefined8 *)(param_1 + 4) = 0;
    param_1[6] = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 4,&local_20);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
    puVar1 = &local_40;
  }
  else {
    local_30 = 0;
    local_28 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_20,&local_40,param_3,param_4,0);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_40);
    *param_1 = local_30;
    *(undefined1 *)(param_1 + 3) = local_24;
    param_1[2] = local_28;
    *(undefined8 *)(param_1 + 4) = 0;
    param_1[6] = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 4,&local_20);
    puVar1 = &local_20;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(puVar1);
  return param_1;
}



// FUNCTION 1420ee520 FUN_1420ee520 body=169 status=ok
// SIG undefined FUN_1420ee520(void)

undefined1 * FUN_1420ee520(undefined8 param_1,undefined1 *param_2,char *param_3)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if (((*(int *)(param_3 + 0x10) != 0) && (*(longlong **)(param_3 + 8) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_3 + 8) + 0x18))(), cVar1 != '\0')) {
    if (*(int *)(param_3 + 0x10) == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)(param_3 + 8);
    }
    cVar1 = (**(code **)(*plVar3 + 0x38))();
    *param_3 = cVar1;
  }
  cVar1 = *param_3;
  if ((cVar1 == '\0') ||
     (((uVar2 = DAT_1464b9ee9, cVar1 != '\x01' && (uVar2 = DAT_1464b9eea, cVar1 != '\x02')) &&
      ((uVar2 = DAT_1464b9eeb, cVar1 != '\x03' && (uVar2 = DAT_1464b9eec, cVar1 != '\x04')))))) {
    uVar2 = DAT_1464b9ee8;
  }
  *param_2 = uVar2;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3 + 8);
  return param_2;
}



// FUNCTION 1420ee5d0 FUN_1420ee5d0 body=2389 status=ok
// SIG undefined FUN_1420ee5d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_1420ee5d0(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
             undefined8 *param_5,longlong *param_6)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  wchar_t *pwVar6;
  short sVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  undefined2 *puVar19;
  float fVar20;
  undefined1 auStack_2c8 [32];
  longlong *local_2a8;
  int *local_2a0;
  int local_298;
  int local_294;
  longlong *local_290;
  longlong *plStack_288;
  wchar_t *local_280;
  uint local_278;
  undefined4 local_274;
  wchar_t *local_270;
  int local_268;
  undefined4 local_264;
  int local_260;
  uint uStack_25c;
  uint *puStack_258;
  undefined4 local_250;
  uint uStack_24c;
  int iStack_248;
  undefined4 uStack_244;
  undefined8 local_240;
  longlong *local_238;
  longlong local_230;
  longlong *local_228;
  int local_220;
  uint local_210;
  uint uStack_20c;
  uint local_208;
  int local_200;
  int local_1fc;
  undefined1 local_1f8 [8];
  undefined8 *local_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  undefined8 local_1d8;
  undefined8 *local_1d0;
  longlong local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  int iStack_1b0;
  uint uStack_1ac;
  uint *local_1a8;
  uint uStack_1a0;
  uint uStack_19c;
  undefined8 local_198;
  longlong local_190;
  wchar_t **local_188;
  undefined8 local_180;
  longlong *local_178;
  undefined1 local_170 [8];
  longlong *local_168;
  longlong *local_160;
  undefined8 uStack_158;
  uint *puStack_150;
  uint uStack_148;
  uint uStack_144;
  undefined8 uStack_140;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [16];
  longlong local_110;
  longlong *local_108;
  undefined2 local_100;
  undefined1 local_f4;
  longlong local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong local_d8 [4];
  longlong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  local_1e0 = param_6;
  local_294 = -1;
  local_1f0 = param_5;
  uVar17 = 0;
  if (*(int *)(*param_6 + 8) == 0) {
    local_298 = 0;
  }
  else {
    local_298 = *(int *)(*param_6 + 8) + -1;
  }
  iVar15 = *(int *)(param_5 + 1);
  uVar11 = *(uint *)(param_4 + 0x1c);
  uVar18 = iVar15 - 1;
  if (iVar15 == 0) {
    uVar18 = uVar17;
  }
  if (*(uint *)(param_4 + 0x18) < uVar18) {
    uVar18 = *(uint *)(param_4 + 0x18);
  }
  uVar13 = iVar15 - 1;
  if (iVar15 == 0) {
    uVar13 = uVar17;
  }
  uVar14 = uVar18;
  if ((uVar18 <= uVar11) && (uVar14 = uVar13, uVar11 < uVar13)) {
    uVar14 = uVar11;
  }
  if (iVar15 == 0) {
    puVar19 = &DAT_143f3eda8;
  }
  else {
    puVar19 = (undefined2 *)*param_5;
  }
  iVar15 = uVar14 - uVar18;
  local_280 = (wchar_t *)0x0;
  local_274 = 0;
  local_278 = iVar15 + 1;
  if (iVar15 == 0) {
    local_278 = uVar17;
  }
  local_1e8 = param_1;
  local_1d8 = param_3;
  local_1d0 = param_2;
  if ((0 < (int)local_278) &&
     (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_280,0), pwVar6 = local_280,
     0 < (int)local_278)) {
    wcsncpy(local_280,puVar19 + (int)uVar18,(longlong)iVar15);
    pwVar6[iVar15] = L'\0';
  }
  uVar8 = FText::FromString(local_138,&local_280);
  plVar9 = (longlong *)FString::FString(local_120,param_4);
  local_e8 = *plVar9;
  *plVar9 = 0;
  local_e0 = (undefined4)plVar9[1];
  local_dc = *(undefined4 *)((longlong)plVar9 + 0xc);
  plVar9[1] = 0;
  _guard_xfg_dispatch_icall_nop(local_d8,0,0x50);
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  FText::FText(local_88,uVar8);
  if (*plVar9 != 0) {
    FMemory::Free();
  }
  if (local_130 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_130 + 1;
    lVar12 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_130)(local_130);
      LOCK();
      piVar1 = (int *)((longlong)local_130 + 0xc);
      iVar15 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*local_130 + 8))(local_130,1);
      }
    }
  }
  if (local_280 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  local_290 = (longlong *)(param_4 + 0x20);
  uStack_25c = 1;
  uVar17 = *(uint *)(param_4 + 0x48);
  puStack_258 = (uint *)(param_4 + 0x30);
  local_260 = 0;
  uStack_24c = 0;
  iStack_248 = 0;
  if (uVar17 != 0) {
    puVar16 = *(uint **)(param_4 + 0x40);
    if (*(uint **)(param_4 + 0x40) == (uint *)0x0) {
      puVar16 = puStack_258;
    }
    uVar11 = *puVar16;
    iStack_248 = 0;
    local_260 = 0;
    while (uVar11 == 0) {
      lVar12 = (longlong)local_260;
      iStack_248 = iStack_248 + 0x20;
      iVar15 = local_260 + 1;
      bVar4 = (int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_260;
      local_260 = iVar15;
      if (bVar4) goto LAB_1420ee8a3;
      uVar11 = puVar16[lVar12 + 1];
    }
    uStack_25c = -uVar11 & uVar11;
    local_200 = 0x1f;
    if (uStack_25c != 0) {
      for (; uStack_25c >> local_200 == 0; local_200 = local_200 + -1) {
      }
    }
    if (uStack_25c == 0) {
      iVar15 = 0x20;
    }
    else {
      iVar15 = 0x1f - local_200;
    }
    uStack_24c = (iStack_248 - iVar15) + 0x1f;
    if ((int)uVar17 < (int)uStack_24c) {
LAB_1420ee8a3:
      uStack_24c = uVar17;
    }
  }
  local_250 = 0xffffffff;
  uStack_20c = *(uint *)(param_4 + 0x48);
  uStack_158 = CONCAT44(uStack_25c,local_260);
  uStack_1a0 = 0xffffffff;
  uStack_19c = uStack_24c;
  local_198 = CONCAT44(uStack_244,iStack_248);
  local_210 = -1 << ((byte)uStack_20c & 0x1f);
  local_220 = (int)uStack_20c >> 5;
  local_208 = uStack_20c & 0xffffffe0;
  iStack_1b0 = local_260;
  uStack_1ac = uStack_25c;
  local_1a8 = puStack_258;
  local_160 = local_290;
  puStack_150 = puStack_258;
  uStack_140 = local_198;
  local_1b8 = local_290;
  uStack_148 = uStack_1a0;
  uStack_144 = uStack_19c;
  uVar11 = uStack_20c;
  if (uStack_20c != uVar17) {
    puVar16 = *(uint **)(param_4 + 0x40);
    if (*(uint **)(param_4 + 0x40) == (uint *)0x0) {
      puVar16 = puStack_258;
    }
    uVar11 = puVar16[local_220] & local_210;
    while (uVar11 == 0) {
      lVar12 = (longlong)local_220;
      local_208 = local_208 + 0x20;
      iVar15 = local_220 + 1;
      bVar4 = (int)(((int)(uVar17 - 1) >> 0x1f & 0x1fU) + (uVar17 - 1)) >> 5 <= local_220;
      local_220 = iVar15;
      if (bVar4) goto LAB_1420ee989;
      uVar11 = puVar16[lVar12 + 1];
      local_210 = 0xffffffff;
    }
    uVar11 = -uVar11 & uVar11;
    local_1fc = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> local_1fc == 0; local_1fc = local_1fc + -1) {
      }
    }
    if (uVar11 == 0) {
      iVar15 = 0x20;
    }
    else {
      iVar15 = 0x1f - local_1fc;
    }
    uStack_20c = (local_208 - iVar15) + 0x1f;
    uVar11 = uStack_20c;
    if ((int)uVar17 < (int)uStack_20c) {
LAB_1420ee989:
      uStack_20c = uVar17;
      uVar11 = uVar17;
    }
  }
  while (((uStack_19c != uVar11 || (local_1a8 != puStack_258)) || (local_1b8 != local_290))) {
    lVar12 = (longlong)(int)uStack_19c * 0x20 + *local_1b8;
    iVar15 = *(int *)(local_1f0 + 1);
    uVar18 = *(uint *)(lVar12 + 0x14);
    uVar17 = iVar15 - 1;
    if (iVar15 == 0) {
      uVar17 = 0;
    }
    uVar13 = iVar15 - 1;
    if (*(uint *)(lVar12 + 0x10) < uVar17) {
      uVar17 = *(uint *)(lVar12 + 0x10);
    }
    if (iVar15 == 0) {
      uVar13 = 0;
    }
    uVar14 = uVar17;
    if ((uVar17 <= uVar18) && (uVar14 = uVar13, uVar18 < uVar13)) {
      uVar14 = uVar18;
    }
    if (iVar15 == 0) {
      puVar19 = &DAT_143f3eda8;
    }
    else {
      puVar19 = (undefined2 *)*local_1f0;
    }
    iVar15 = uVar14 - uVar17;
    local_270 = (wchar_t *)0x0;
    local_264 = 0;
    local_268 = iVar15 + 1;
    if (iVar15 == 0) {
      local_268 = 0;
    }
    if (0 < local_268) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_270,0);
      pwVar6 = local_270;
      if (0 < local_268) {
        wcsncpy(local_270,puVar19 + (int)uVar17,(longlong)iVar15);
        pwVar6[iVar15] = L'\0';
      }
    }
    local_188 = &local_270;
    local_190 = lVar12;
    TSet<TTuple<FString,TArray<physx::PxBase_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TArray<physx::PxBase_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,TArray<physx::PxBase_*,FDefaultAllocator>_&&>_>
              (local_d8,local_1f8,&local_190,0);
    if (local_270 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    uStack_1a0 = uStack_1a0 & ~uStack_1ac;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_1b0);
  }
  local_290 = (longlong *)0x0;
  plStack_288 = (longlong *)0x0;
  lVar12 = local_1e8[1];
  (**(code **)(*local_1e8 + 0x18))(local_1e8,&local_230,&local_e8,lVar12 + 0x150);
  plVar9 = local_1e0;
  if (local_230 != 0) {
    plVar3 = (longlong *)*local_1e0;
    iVar15 = (int)plVar3[1];
    iVar5 = iVar15 + -1;
    if (iVar15 < 1) {
      iVar5 = 0;
    }
    iVar15 = (iVar15 < 1) + 1 + iVar15;
    *(int *)(plVar3 + 1) = iVar15;
    if (*(int *)((longlong)plVar3 + 0xc) < iVar15) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar3);
    }
    *(undefined2 *)(*plVar3 + (longlong)iVar5 * 2) = 0x200b;
    *(undefined2 *)(*plVar3 + 2 + (longlong)iVar5 * 2) = 0;
    if (*(int *)(*plVar9 + 8) == 0) {
      local_294 = 0;
    }
    else {
      local_294 = *(int *)(*plVar9 + 8) + -1;
    }
    FUN_1418388a0(*(undefined8 *)(*(longlong *)(DAT_1469f4590 + 0x18) + 8),&local_180);
    fVar20 = *(float *)(lVar12 + 0x1d4);
    sVar7 = FSlateFontMeasure::GetBaseline(local_180,lVar12 + 0x158,0x3f800000);
    plVar3 = local_228;
    if (0.0 <= fVar20) {
      fVar20 = 0.0;
    }
    if (local_228 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_228 + 1) = (int)local_228[1] + 1;
      UNLOCK();
    }
    local_110 = local_230;
    local_108 = local_228;
    if (local_228 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_228 + 1) = (int)local_228[1] + 1;
      UNLOCK();
    }
    local_100 = (undefined2)(int)((float)(int)sVar7 - fVar20);
    local_f4 = 0;
    if (local_228 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_228 + 1;
      lVar12 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_228)(local_228);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    local_1c8 = *plVar9;
    local_1c0 = (longlong *)plVar9[1];
    if (local_1c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1c0 + 1) = (int)local_1c0[1] + 1;
      UNLOCK();
    }
    local_2a0 = &local_298;
    local_2a8 = &local_110;
    puVar10 = (undefined8 *)FSlateWidgetRun::Create(local_170,local_1d8,&local_e8,&local_1c8);
    local_238 = (longlong *)puVar10[1];
    local_290 = (longlong *)*puVar10;
    if (local_238 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_238 + 1) = (int)local_238[1] + 1;
      UNLOCK();
    }
    local_240 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_288,&local_238);
    plVar9 = local_238;
    if (local_238 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_238 + 1;
      lVar12 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_238)(local_238);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*local_238 + 8))(local_238,1);
        }
      }
    }
    if (local_168 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_168 + 1;
      lVar12 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_168)(local_168);
        LOCK();
        piVar1 = (int *)((longlong)local_168 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*local_168 + 8))(local_168,1);
        }
      }
    }
    plVar9 = local_1c0;
    if (local_1c0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_1c0 + 1;
      lVar12 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_1c0)(local_1c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    plVar9 = local_108;
    local_f4 = 0;
    if (local_108 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_108 + 1;
      lVar12 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_108)(local_108);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    if (local_178 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_178 + 1;
      lVar12 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_178)(local_178);
        LOCK();
        piVar1 = (int *)((longlong)local_178 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*local_178 + 8))(local_178,1);
        }
      }
    }
  }
  puVar10 = local_1d0;
  *local_1d0 = local_290;
  local_1d0[1] = plStack_288;
  if (plStack_288 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_288 + 1) = (int)plStack_288[1] + 1;
    UNLOCK();
  }
  if (local_228 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_228 + 1;
    lVar12 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_228)(local_228);
      LOCK();
      piVar1 = (int *)((longlong)local_228 + 0xc);
      iVar15 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*local_228 + 8))(local_228,1);
      }
    }
  }
  plVar9 = plStack_288;
  if (plStack_288 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_288 + 1;
    lVar12 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_288)(plStack_288);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar15 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*plStack_288 + 8))(plStack_288,1);
      }
    }
  }
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_80 + 1;
    lVar12 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)local_80 + 0xc);
      iVar15 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  local_90 = 0;
  if (local_98 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_d8,0);
  if (local_b8 != 0) {
    FMemory::Free();
  }
  if (local_d8[0] != 0) {
    FMemory::Free();
  }
  if (local_e8 != 0) {
    FMemory::Free();
  }
  return puVar10;
}



// FUNCTION 1420eef30 Create body=277 status=ok
// SIG undefined Create(void)

longlong UWidgetBlueprintLibrary::Create(undefined8 param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar2 = UUserWidget::GetPrivateStaticClass();
  lVar4 = param_2;
  while (lVar4 != lVar2) {
    lVar4 = *(longlong *)(lVar4 + 0x30);
    if (lVar4 == 0) {
      return 0;
    }
  }
  lVar2 = UUserWidget::GetPrivateStaticClass();
  lVar4 = param_2;
  do {
    lVar5 = 0;
    lVar3 = param_2;
    if (lVar4 == lVar2) break;
    lVar4 = *(longlong *)(lVar4 + 0x30);
    lVar3 = lVar5;
  } while (lVar4 != 0);
  if ((*(byte *)(lVar3 + 0xb4) & 1) != 0) {
    return 0;
  }
  if (param_3 == 0) {
    lVar4 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
    if (lVar4 != 0) {
      lVar5 = FUN_1420c4b00(lVar4,param_2,0);
    }
  }
  else {
    lVar4 = FUN_1420f0e60(param_3,param_2,0);
    if (lVar4 != 0) {
      lVar2 = UUserWidget::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
           ) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        return lVar4;
      }
    }
  }
  return lVar5;
}



// FUNCTION 1420ef050 CreateCacheNode body=238 status=ok
// SIG undefined CreateCacheNode(void)

undefined8 SRetainerWidget::CreateCacheNode(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  
  iVar3 = *(int *)(param_1 + 0x1f0);
  if (*(int *)(param_1 + 0x1e8) <= iVar3) {
    lVar5 = 10;
    do {
      _Dst = (void *)operator_new(0x88);
      pvVar4 = (void *)0x0;
      if (_Dst != (void *)0x0) {
        ::_guard_xfg_dispatch_icall_nop(_Dst,0,0x88);
        *(undefined8 *)((longlong)_Dst + 0x38) = 0;
        FGeometry::FGeometry((longlong)_Dst + 0x40);
        *(undefined1 *)((longlong)_Dst + 0x80) = 0x19;
        pvVar4 = _Dst;
      }
      iVar3 = *(int *)(param_1 + 0x1e8);
      iVar2 = iVar3 + 1;
      *(int *)(param_1 + 0x1e8) = iVar2;
      if (*(int *)(param_1 + 0x1ec) < iVar2) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x1e0);
      }
      *(void **)(*(longlong *)(param_1 + 0x1e0) + (longlong)iVar3 * 8) = pvVar4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    iVar3 = *(int *)(param_1 + 0x1f0);
  }
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x1e0) + (longlong)iVar3 * 8);
  *(int *)(param_1 + 0x1f0) = iVar3 + 1;
  return uVar1;
}



// FUNCTION 1420ef140 FUN_1420ef140 body=68 status=ok
// SIG undefined FUN_1420ef140(void)

void FUN_1420ef140(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144fb1f78;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  }
  return;
}



// FUNCTION 1420ef190 CreateCopy body=48 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<FString___cdecl(TSharedPtr<FInterfaceContainer,0>),<lambda_5e27373bf3904ac0086c7d4deb00b610>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144fb2758;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  }
  return;
}



// FUNCTION 1420ef1c0 CreateCopy body=85 status=ok
// SIG undefined CreateCopy(void)

void TBaseSPMethodDelegateInstance<0,FOnlineExternalUITwitch,1,FLoginFlowResult___cdecl(FString_const_&)>
     ::CreateCopy(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x38);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_144fb2070;
    puVar3[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar3[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puVar3[3] = *(undefined8 *)(param_1 + 0x18);
    puVar3[4] = uVar2;
    puVar3[6] = *(undefined8 *)(param_1 + 0x30);
  }
  return;
}



// FUNCTION 1420ef220 FUN_1420ef220 body=66 status=ok
// SIG undefined FUN_1420ef220(void)

void FUN_1420ef220(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144fb1630;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144fb1678;
  }
  return;
}



// FUNCTION 1420ef270 FUN_1420ef270 body=81 status=ok
// SIG undefined FUN_1420ef270(void)

void FUN_1420ef270(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_LAB_144fb2838;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 1420ef2d0 FUN_1420ef2d0 body=81 status=ok
// SIG undefined FUN_1420ef2d0(void)

void FUN_1420ef2d0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_LAB_144fb2878;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 1420ef330 FUN_1420ef330 body=81 status=ok
// SIG undefined FUN_1420ef330(void)

void FUN_1420ef330(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_LAB_144fb2938;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 1420ef390 FUN_1420ef390 body=81 status=ok
// SIG undefined FUN_1420ef390(void)

void FUN_1420ef390(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_LAB_144fb28f8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 1420ef3f0 FUN_1420ef3f0 body=81 status=ok
// SIG undefined FUN_1420ef3f0(void)

void FUN_1420ef3f0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_LAB_144fb28b8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 1420ef450 FUN_1420ef450 body=81 status=ok
// SIG undefined FUN_1420ef450(void)

void FUN_1420ef450(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_LAB_144fb2978;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 1420ef4b0 CreateCopy body=116 status=ok
// SIG undefined CreateCopy(void)

void TBaseUObjectMethodDelegateInstance<1,UBorder,FSlateColor___cdecl(void),TAttribute<FLinearColor>_>
     ::CreateCopy(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)operator_new(0x48);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_144fb1a98;
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar4 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
    uVar2 = *(undefined4 *)(param_1 + 0x20);
    uVar3 = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar1;
    *(undefined4 *)(puVar4 + 4) = uVar2;
    *(undefined4 *)((longlong)puVar4 + 0x24) = uVar3;
    *(undefined1 *)(puVar4 + 5) = *(undefined1 *)(param_1 + 0x28);
    puVar4[6] = 0;
    *(undefined4 *)(puVar4 + 7) = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(puVar4 + 6,param_1 + 0x30);
    puVar4[8] = *(undefined8 *)(param_1 + 0x40);
  }
  return;
}



// FUNCTION 1420ef530 CreateCopy body=182 status=ok
// SIG undefined CreateCopy(void)

void TBaseUObjectMethodDelegateInstance<1,UBorder,FSlateBrush_const_*___cdecl(void),TAttribute<FSlateBrush>_>
     ::CreateCopy(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0xc0);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144fb1ad8;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    FUN_14080bc50(puVar2 + 3,param_1 + 0x18);
    *(undefined1 *)(puVar2 + 0x14) = *(undefined1 *)(param_1 + 0xa0);
    puVar2[0x15] = 0;
    *(undefined4 *)(puVar2 + 0x16) = 0;
    if ((((longlong *)(param_1 + 0xa8) != puVar2 + 0x15) && (*(int *)(param_1 + 0xb0) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 0xa8), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))();
    }
    puVar2[0x17] = *(undefined8 *)(param_1 + 0xb8);
  }
  return;
}



// FUNCTION 1420ef5f0 FUN_1420ef5f0 body=68 status=ok
// SIG undefined FUN_1420ef5f0(void)

void FUN_1420ef5f0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144fb1b98;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  }
  return;
}



// FUNCTION 1420ef640 FUN_1420ef640 body=68 status=ok
// SIG undefined FUN_1420ef640(void)

void FUN_1420ef640(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144fb1bd8;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  }
  return;
}



// FUNCTION 1420ef690 CreateCopy body=114 status=ok
// SIG undefined CreateCopy(void)

void TBaseUObjectMethodDelegateInstance<1,UProgressBar,TOptional<float>___cdecl(void),TAttribute<float>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x38);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144fb1d98;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined1 *)((longlong)puVar1 + 0x1c) = *(undefined1 *)(param_1 + 0x1c);
    puVar1[4] = 0;
    *(undefined4 *)(puVar1 + 5) = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(puVar1 + 4,param_1 + 0x20);
    puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  }
  return;
}



// FUNCTION 1420ef710 FUN_1420ef710 body=74 status=ok
// SIG undefined FUN_1420ef710(void)

void FUN_1420ef710(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144fb1ef8;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 1420ef760 FUN_1420ef760 body=74 status=ok
// SIG undefined FUN_1420ef760(void)

void FUN_1420ef760(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144fb1f38;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 1420ef7b0 CreateCopy body=134 status=ok
// SIG undefined CreateCopy(void)

void TBaseUObjectMethodDelegateInstance<1,UWidget,EVisibility___cdecl(void),TAttribute<enum_ESlateVisibility>_>
     ::CreateCopy(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144fb1e68;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    *(undefined1 *)(puVar2 + 3) = *(undefined1 *)(param_1 + 0x18);
    *(undefined1 *)((longlong)puVar2 + 0x19) = *(undefined1 *)(param_1 + 0x19);
    puVar2[4] = 0;
    *(undefined4 *)(puVar2 + 5) = 0;
    if ((((longlong *)(param_1 + 0x20) != puVar2 + 4) && (*(int *)(param_1 + 0x28) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 0x20), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))();
    }
    puVar2[6] = *(undefined8 *)(param_1 + 0x30);
  }
  return;
}



// FUNCTION 1420ef840 FUN_1420ef840 body=68 status=ok
// SIG undefined FUN_1420ef840(void)

void FUN_1420ef840(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144fb1b18;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  }
  return;
}



// FUNCTION 1420ef890 FUN_1420ef890 body=68 status=ok
// SIG undefined FUN_1420ef890(void)

void FUN_1420ef890(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144fb1b58;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  }
  return;
}



// FUNCTION 1420ef8e0 FUN_1420ef8e0 body=78 status=ok
// SIG undefined FUN_1420ef8e0(void)

void FUN_1420ef8e0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144fb1c18;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_144fb1c60;
  }
  return;
}



// FUNCTION 1420ef930 FUN_1420ef930 body=74 status=ok
// SIG undefined FUN_1420ef930(void)

void FUN_1420ef930(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144fb22c0;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 1420ef980 FUN_1420ef980 body=68 status=ok
// SIG undefined FUN_1420ef980(void)

void FUN_1420ef980(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144fb1d58;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  }
  return;
}



// FUNCTION 1420ef9d0 FUN_1420ef9d0 body=78 status=ok
// SIG undefined FUN_1420ef9d0(void)

void FUN_1420ef9d0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144fb1dd8;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_144fb1e20;
  }
  return;
}



// FUNCTION 1420efa20 CreateCopy body=106 status=ok
// SIG undefined CreateCopy(void)

void TBaseUObjectMethodDelegateInstance<0,UUserWidget,TTypeWrapper<void>___cdecl(void),FOnInputAction>
     ::CreateCopy(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144fb2348;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)((longlong)puVar2 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[6] = *(undefined8 *)(param_1 + 0x30);
    *puVar2 = &PTR_FUN_144fb2390;
  }
  return;
}



// FUNCTION 1420efa90 FUN_1420efa90 body=68 status=ok
// SIG undefined FUN_1420efa90(void)

void FUN_1420efa90(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144fb1eb8;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  }
  return;
}



// FUNCTION 1420efae0 CreateDecorator body=157 status=ok
// SIG undefined CreateDecorator(void)

undefined8 *
URichTextBlockImageDecorator::CreateDecorator
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1[1] = param_3;
    *puVar1 = &PTR_FUN_144faa860;
    puVar1[2] = param_1;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar1;
  }
  *param_2 = puVar1;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar1,puVar1);
  return param_2;
}



// FUNCTION 1420efb80 FUN_1420efb80 body=669 status=ok
// SIG undefined FUN_1420efb80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1420efb80(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined1 auStack_208 [32];
  longlong local_1e8;
  longlong local_1e0;
  undefined4 local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined1 local_1b8;
  undefined1 local_1b0;
  longlong local_1a8;
  int local_198 [2];
  longlong local_190 [3];
  undefined1 local_178 [8];
  longlong *local_170;
  longlong *local_168;
  undefined1 local_158 [272];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  local_190[1] = 3;
  lVar9 = 0;
  local_190[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_190,0);
  lVar4 = local_190[0];
  FGenericPlatformString::Memcpy(local_190[0],&DAT_144faa880,6);
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(param_3 + 0x10,local_198,local_190);
  if (local_198[0] != -1) {
    lVar9 = *(longlong *)(param_3 + 0x10) + (longlong)local_198[0] * 0x28;
  }
  if (*(int *)(lVar9 + 0x18) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = *(undefined2 **)(lVar9 + 0x10);
  }
  puVar7 = (undefined8 *)FName::FName(local_178,puVar10,1);
  local_190[2] = FUN_1420f64f0(*(undefined8 *)(param_1 + 0x10),*puVar7,1);
  if (lVar4 != 0) {
    FMemory::Free(lVar4);
  }
  plVar8 = (longlong *)FUN_1420cb9e0();
  plVar1 = plVar8 + 2;
  local_170 = plVar1;
  local_168 = plVar8;
  FUN_14044f790(&local_170,plVar1);
  local_1e8 = 0x2f0;
  SWidget::SetDebugInfo
            (plVar1,"SRichInlineImage",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\RichTextBlockImageDecorator.cpp"
             ,0x54);
  lVar9 = STSDRichInlineImage::FArguments::FArguments(local_158);
  local_1a8 = lVar9 + 0xf8;
  local_1d8 = *(undefined4 *)(lVar9 + 0x90);
  local_1c0 = lVar9 + 0xe8;
  local_1c8 = lVar9 + 200;
  local_1d0 = lVar9 + 0x98;
  local_1e0 = lVar9 + 0x78;
  local_1e8 = lVar9 + 0x60;
  local_1b0 = *(undefined1 *)(lVar9 + 0xf1);
  local_1b8 = *(undefined1 *)(lVar9 + 0xf0);
  SWidget::SWidgetConstruct(plVar1,lVar9,lVar9 + 0x30,lVar9 + 0x40);
  FUN_1420ecb10(plVar1,lVar9,local_190[2],param_4);
  if (-1 < (char)plVar8[5]) {
    cVar5 = (**(code **)(*plVar1 + 0x1e8))(plVar1);
    if (cVar5 == '\0') {
      bVar6 = 0;
      goto LAB_1420efd67;
    }
  }
  bVar6 = 1;
LAB_1420efd67:
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) | bVar6;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar8 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
    LOCK();
    plVar1 = plVar8 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  FUN_140456c70(local_158);
  return param_2;
}



// FUNCTION 1420efe20 FUN_1420efe20 body=344 status=ok
// SIG undefined FUN_1420efe20(void)

void FUN_1420efe20(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong local_38;
  longlong *local_30;
  
  uVar6 = 0;
  plVar8 = *(longlong **)(param_1 + 0x340);
  uVar7 = (longlong)*(int *)(param_1 + 0x348) & 0x1fffffffffffffff;
  if (plVar8 + *(int *)(param_1 + 0x348) < plVar8) {
    uVar7 = uVar6;
  }
  if (uVar7 != 0) {
    do {
      plVar3 = (longlong *)*plVar8;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x278))(plVar3,&local_38,param_1);
        plVar3 = local_30;
        lVar4 = local_38;
        if (local_38 != 0) {
          if (local_30 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_30 + 1) = (int)local_30[1] + 1;
            UNLOCK();
          }
          iVar2 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar2 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
          }
          plVar5 = (longlong *)((longlong)iVar2 * 0x10 + *param_2);
          *plVar5 = lVar4;
          plVar5[1] = (longlong)plVar3;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
            LOCK();
            plVar5 = plVar3 + 1;
            lVar4 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
          }
        }
        plVar3 = local_30;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_30 + 1;
          lVar4 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_30)(local_30);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
      }
      plVar8 = plVar8 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar7);
  }
  return;
}



// FUNCTION 1420eff80 CreateDragDropOperation body=257 status=ok
// SIG undefined CreateDragDropOperation(void)

void UWidgetBlueprintLibrary::CreateDragDropOperation(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 != 0) {
    lVar1 = UDragDropOperation::GetPrivateStaticClass();
    lVar4 = param_1;
    do {
      if (lVar4 == lVar1) {
        lVar1 = UDragDropOperation::GetPrivateStaticClass();
        lVar4 = param_1;
        goto LAB_1420f0011;
      }
      lVar4 = *(longlong *)(lVar4 + 0x30);
    } while (lVar4 != 0);
  }
  uVar2 = GetTransientPackage();
  FUN_1417846f0(uVar2,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar3 = UDragDropOperation::GetPrivateStaticClass();
  FUN_1417985e0(uVar3,uVar2,0,0,0,0,0,0,0);
  return;
  while (lVar4 = *(longlong *)(lVar4 + 0x30), lVar5 = 0, lVar4 != 0) {
LAB_1420f0011:
    lVar5 = param_1;
    if (lVar4 == lVar1) break;
  }
  uVar2 = GetTransientPackage();
  FUN_1417846f0(uVar2,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  FUN_1417985e0(lVar5,uVar2,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 1420f0090 FUN_1420f0090 body=1442 status=ok
// SIG undefined FUN_1420f0090(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_1420f0090(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,longlong param_5
             )

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 auStack_288 [32];
  undefined8 local_268;
  ulonglong local_260;
  ulonglong local_258;
  undefined1 *local_250;
  undefined1 local_248;
  undefined8 local_238;
  undefined8 local_230;
  undefined4 *local_228;
  undefined1 *puStack_220;
  undefined8 local_218;
  longlong local_210;
  undefined1 local_208 [16];
  undefined1 local_1f8 [8];
  longlong *local_1f0;
  undefined1 local_1e8 [8];
  longlong *local_1e0;
  undefined1 local_1d0 [8];
  longlong *local_1c8;
  undefined1 local_1b8 [8];
  longlong *local_1b0;
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  undefined1 local_180 [40];
  undefined1 local_158 [24];
  undefined4 local_140 [4];
  undefined1 local_130 [8];
  longlong *local_128;
  char local_118;
  undefined1 local_110 [8];
  undefined1 local_108 [24];
  undefined1 local_f0 [64];
  longlong local_b0;
  undefined4 local_a8;
  undefined1 local_a0 [64];
  longlong local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  local_230 = param_4;
  if (param_1 == 0) {
    FName::FName(&local_230,&DAT_144f9751c,1);
    if (param_2 != 0) {
      lVar6 = UUserWidget::GetPrivateStaticClass();
      lVar7 = param_2;
      do {
        if (lVar7 == lVar6) goto LAB_1420f0112;
        lVar7 = *(longlong *)(lVar7 + 0x30);
      } while (lVar7 != 0);
    }
    param_2 = 0;
LAB_1420f0112:
    local_238 = *(undefined8 *)(param_2 + 0x18);
    lVar7 = FText::FromName(local_158,&local_238);
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_1b8,L"Unable to create the widget {0}, no outer provided.",
                       &DAT_144f97ea8,L"OuterNull");
    puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_1a0,uVar8);
    local_140[0] = 4;
    FText::FText(local_130,lVar7);
    local_218 = *puVar9;
    local_228 = local_140;
    puStack_220 = local_110;
    local_210 = puVar9[1];
    local_118 = '\x01';
    if (local_210 != 0) {
      LOCK();
      *(int *)(local_210 + 8) = *(int *)(local_210 + 8) + 1;
      UNLOCK();
    }
    uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_208,&local_228);
    uVar8 = FText::Format(local_1d0,&local_218,uVar8);
    FText::FText(local_1e8,uVar8);
    if (local_1c8 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_1c8 + 1;
      lVar6 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_1c8)(local_1c8);
        LOCK();
        piVar1 = (int *)((longlong)local_1c8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1c8 + 8))(local_1c8,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_208);
    if ((local_118 != '\0') && (local_118 = '\0', local_128 != (longlong *)0x0)) {
      LOCK();
      plVar12 = local_128 + 1;
      lVar6 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_128)(local_128);
        LOCK();
        piVar1 = (int *)((longlong)local_128 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_128 + 8))(local_128,1);
        }
      }
    }
    plVar12 = (longlong *)puVar9[1];
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar12 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    plVar12 = *(longlong **)(lVar7 + 8);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar12 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    uVar8 = FUN_14161fb50(local_180,&local_230);
    FMessageLog::Error(uVar8,local_1f8,local_1e8);
    if (local_1f0 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_1f0 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_1f0)(local_1f0);
        LOCK();
        piVar1 = (int *)((longlong)local_1f0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1f0 + 8))(local_1f0,1);
        }
      }
    }
    FMessageLog::~FMessageLog(local_180);
    if (local_1e0 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_1e0 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_1e0)(local_1e0);
        LOCK();
        piVar1 = (int *)((longlong)local_1e0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1e0 + 8))(local_1e0,1);
        }
      }
    }
    if (local_1b0 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_1b0 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_1b0)(local_1b0);
        LOCK();
        piVar1 = (int *)((longlong)local_1b0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1b0 + 8))(local_1b0,1);
        }
      }
    }
    return (longlong *)0x0;
  }
  lVar6 = 0;
  lVar7 = lVar6;
  if (param_2 != 0) {
    lVar10 = UUserWidget::GetPrivateStaticClass();
    lVar7 = param_2;
    do {
      if (lVar7 == lVar10) {
        lVar7 = UWidgetBlueprintGeneratedClass::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if ((bVar5) && ((*(byte *)(param_2 + 0x2e8) & 6) == 6)) {
          if ((*(byte *)(param_2 + 0x2e8) & 8) == 0) {
            if ((DAT_1468c21ab == '\0') && (*(longlong *)(param_2 + 0x348) == 0)) {
              lVar7 = FUN_1405ec200(param_2 + 800);
              if (lVar7 == 0) {
LAB_1420f047a:
                lVar7 = lVar6;
              }
              else {
                lVar10 = UUserWidget::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                if (!bVar5) goto LAB_1420f047a;
              }
              *(longlong *)(param_2 + 0x348) = lVar7;
            }
            if ((((*(longlong *)(param_2 + 0x348) != 0) &&
                 (*(byte *)(param_2 + 0x2e8) = *(byte *)(param_2 + 0x2e8) | 8, DAT_1468c21ab == '\0'
                 )) && ((*(uint *)(*(longlong *)(param_2 + 0x348) + 8) >> 10 & 1) != 0)) &&
               (lVar7 = FUN_1417a53c0(), lVar7 != 0)) {
              FUN_141740c00(lVar7 + 0x200,*(undefined8 *)(param_2 + 0x348));
            }
          }
          uVar4 = *(ulonglong *)(param_2 + 0x348);
          if (uVar4 != 0) {
            FObjectInstancingGraph::FObjectInstancingGraph(local_108,0);
            lVar10 = UUserWidget::GetPrivateStaticClass();
            lVar7 = param_2;
            goto LAB_1420f04f0;
          }
        }
        break;
      }
      lVar7 = *(longlong *)(lVar7 + 0x30);
    } while (lVar7 != 0);
    goto LAB_1420f059d;
  }
  goto LAB_1420f05b6;
  while (lVar7 = *(longlong *)(lVar7 + 0x30), lVar11 = lVar6, lVar7 != 0) {
LAB_1420f04f0:
    lVar11 = param_2;
    if (lVar7 == lVar10) break;
  }
  local_238 = 0;
  if (param_3 == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  local_248 = 0;
  local_250 = local_108;
  local_258 = local_258 & 0xffffffffffffff00;
  local_268 = (ulonglong)local_268._4_4_ << 0x20;
  local_260 = uVar4;
  plVar12 = (longlong *)FUN_1417985e0(lVar11,param_1,param_3,0);
  local_58 = 0;
  if (local_60 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_a0);
  local_a8 = 0;
  if (local_b0 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_f0);
  if (plVar12 != (longlong *)0x0) goto LAB_1420f05d9;
LAB_1420f059d:
  lVar11 = UUserWidget::GetPrivateStaticClass();
  lVar10 = param_2;
  do {
    lVar7 = param_2;
    if (lVar10 == lVar11) break;
    lVar10 = *(longlong *)(lVar10 + 0x30);
    lVar7 = lVar6;
  } while (lVar10 != 0);
LAB_1420f05b6:
  local_258 = 0;
  local_260 = local_260 & 0xffffffffffffff00;
  local_268 = 0;
  plVar12 = (longlong *)NewObject<USaveGame>(param_1,lVar7,param_3,0);
LAB_1420f05d9:
  (**(code **)(*plVar12 + 0x2d0))(plVar12);
  if (param_5 != 0) {
    uVar8 = FLocalPlayerContext::FLocalPlayerContext(local_190,param_5,local_230);
    FUN_1421342d0(plVar12,uVar8);
  }
  return plVar12;
}



// FUNCTION 1420f0640 FUN_1420f0640 body=140 status=ok
// SIG undefined FUN_1420f0640(void)

undefined8 * FUN_1420f0640(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar5 = (undefined8 *)FDefaultRichTextMarkupParser::Create(local_18);
  *param_2 = *puVar5;
  lVar4 = puVar5[1];
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
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
    return param_2;
  }
  return param_2;
}



// FUNCTION 1420f06d0 FUN_1420f06d0 body=140 status=ok
// SIG undefined FUN_1420f06d0(void)

undefined8 * FUN_1420f06d0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar5 = (undefined8 *)FUN_1418f3de0(local_18);
  *param_2 = *puVar5;
  lVar4 = puVar5[1];
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
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
    return param_2;
  }
  return param_2;
}



// FUNCTION 1420f0760 FUN_1420f0760 body=117 status=ok
// SIG undefined FUN_1420f0760(void)

void FUN_1420f0760(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = UMovieScene2DTransformSection::GetPrivateStaticClass();
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  FUN_1417985e0(uVar1,param_1,0,8,0,0,0,0,0);
  return;
}



// FUNCTION 1420f07e0 FUN_1420f07e0 body=117 status=ok
// SIG undefined FUN_1420f07e0(void)

void FUN_1420f07e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = UMovieSceneMarginSection::GetPrivateStaticClass();
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  FUN_1417985e0(uVar1,param_1,0,8,0,0,0,0,0);
  return;
}



// FUNCTION 1420f0860 FUN_1420f0860 body=445 status=ok
// SIG undefined FUN_1420f0860(void)

undefined8 * FUN_1420f0860(longlong *param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 local_res10 [8];
  
  if (param_1[0x100] != 0) {
    param_1[0x100] = 0;
  }
  if (((((char)param_1[0xe5] != '\x01') && (param_1[0x108] != 0)) && (param_1[0xf6] != 0)) &&
     (param_1[0xf7] != 0)) {
    piVar1 = (int *)(param_1[0xf7] + 8);
    LOCK();
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      *piVar1 = 0;
      iVar3 = 0;
    }
    UNLOCK();
    if (0 < iVar3) {
      uVar4 = (**(code **)(*param_1 + 0x560))(param_1,0);
      lVar5 = UMaterialInstanceDynamic::Create(uVar4,param_1);
      param_1[0x100] = lVar5;
      FUN_142142c60(param_1);
      (**(code **)(*param_1 + 0x960))(param_1);
      param_1[0xe9] = 0;
      puVar6 = (undefined8 *)operator_new(0x3f0);
      if (puVar6 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      uVar4 = *(undefined8 *)(param_1[0x108] + 0x18);
      FUN_14271d7c0(puVar6,param_1,0);
      *puVar6 = &PTR_FUN_144fafb48;
      *(undefined8 *)((longlong)puVar6 + 0x3ac) = *(undefined8 *)((longlong)param_1 + 0x75c);
      puVar6[0x77] = uVar4;
      puVar6[0x78] = param_1[0xff];
      puVar6[0x79] = param_1[0x100];
      puVar6[0x7a] = 0;
      uVar4 = (**(code **)(*param_1 + 0x6b8))(param_1);
      puVar6[0x7b] = uVar4;
      *(undefined1 *)(puVar6 + 0x7c) = *(undefined1 *)((longlong)param_1 + 0x794);
      *(undefined1 *)((longlong)puVar6 + 0x3e1) = *(undefined1 *)((longlong)param_1 + 0x81c);
      fVar2 = *(float *)(param_1 + 0x104);
      *(uint *)((longlong)puVar6 + 0x1c) = *(uint *)((longlong)puVar6 + 0x1c) & 0xfffffffd;
      *(float *)((longlong)puVar6 + 0x3e4) = fVar2 * 0.017453292;
      puVar7 = (undefined8 *)
               FUN_142592090(puVar6[0x79],local_res10,*(undefined4 *)(puVar6[0x26] + 8));
      puVar6[0x7a] = *puVar7;
      return puVar6;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420f0a20 CreateTemplateForSection body=147 status=ok
// SIG undefined CreateTemplateForSection(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
UMovieScene2DTransformTrack::CreateTemplateForSection
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_4e8 [32];
  undefined1 local_4c8 [1200];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_4e8;
  uVar1 = FMovieScene2DTransformSectionTemplate::FMovieScene2DTransformSectionTemplate
                    (local_4c8,param_3,param_1);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfc;
  puVar2 = (undefined8 *)FMemory::Malloc(0x4b0,8);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) | 1;
  *param_2 = puVar2;
  if ((*(byte *)(param_2 + 6) & 2) != 0) {
    puVar2 = param_2;
  }
  FMovieScene2DTransformSectionTemplate::FMovieScene2DTransformSectionTemplate(puVar2,uVar1);
  FMovieScene2DTransformSectionTemplate::~FMovieScene2DTransformSectionTemplate(local_4c8);
  return param_2;
}



// FUNCTION 1420f0ac0 CreateTemplateForSection body=452 status=ok
// SIG undefined CreateTemplateForSection(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
UMovieSceneMarginTrack::CreateTemplateForSection
          (longlong param_1,undefined8 *param_2,longlong param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined1 auStack_318 [32];
  undefined **local_2f8;
  undefined1 local_2f0;
  undefined1 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined1 local_2b0 [160];
  undefined1 local_210 [160];
  undefined1 local_170 [160];
  undefined1 local_d0 [160];
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_318;
  FMovieScenePropertySectionTemplate::FMovieScenePropertySectionTemplate
            (&local_2f8,*(undefined8 *)(param_1 + 0x58),param_1 + 0x60);
  local_2f8 = &PTR__scalar_deleting_destructor__144f9e1f8;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(local_2b0,param_3 + 0xe0);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(local_210,param_3 + 0x180);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(local_170,param_3 + 0x220);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(local_d0,param_3 + 0x2c0);
  local_30 = *(undefined1 *)(param_3 + 0xc9);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfc;
  puVar2 = (undefined8 *)FMemory::Malloc(0x2d0,8);
  *param_2 = puVar2;
  bVar1 = *(byte *)(param_2 + 6);
  *(byte *)(param_2 + 6) = bVar1 | 1;
  if ((bVar1 & 2) != 0) {
    puVar2 = param_2;
  }
  *puVar2 = &PTR_FUN_143fcdb48;
  *(undefined1 *)(puVar2 + 1) = local_2f0;
  *puVar2 = &PTR_FUN_143fcdb90;
  *(undefined1 *)(puVar2 + 2) = local_2e8;
  puVar2[3] = local_2e0;
  *puVar2 = &PTR__scalar_deleting_destructor__144f1bc38;
  puVar2[4] = local_2d8;
  puVar2[5] = 0;
  puVar2[5] = local_2d0;
  local_2d0 = 0;
  *(undefined4 *)(puVar2 + 6) = (undefined4)local_2c8;
  *(undefined4 *)((longlong)puVar2 + 0x34) = local_2c8._4_4_;
  local_2c8 = 0;
  puVar2[7] = local_2c0;
  puVar2[8] = local_2b8;
  *puVar2 = &PTR__scalar_deleting_destructor__144f9e1f8;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(puVar2 + 9,local_2b0);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(puVar2 + 0x1d,local_210);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(puVar2 + 0x31,local_170);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(puVar2 + 0x45,local_d0);
  *(undefined1 *)(puVar2 + 0x59) = local_30;
  FMovieSceneMarginSectionTemplate::~FMovieSceneMarginSectionTemplate(&local_2f8);
  return param_2;
}



// FUNCTION 1420f0c90 FUN_1420f0c90 body=454 status=ok
// SIG undefined FUN_1420f0c90(void)

/* WARNING: Removing unreachable block (ram,0x0001420f0e0d) */

undefined8 * FUN_1420f0c90(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined **local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  void *local_28;
  undefined8 local_20;
  
  FUN_141fcf000(&local_88,param_3);
  iVar1 = *(int *)(param_1 + 0x70);
  _Src = *(void **)(param_1 + 0x68);
  local_88 = &PTR__scalar_deleting_destructor__144f9e560;
  local_28 = (void *)0x0;
  local_20 = CONCAT44(local_20._4_4_,iVar1);
  if (iVar1 == 0) {
    local_20 = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_28,iVar1,0);
    _guard_xfg_dispatch_icall_nop(local_28,_Src,(longlong)iVar1 << 3);
  }
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfc;
  puVar2 = (undefined8 *)FMemory::Malloc(0x70);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) | 1;
  *param_2 = puVar2;
  if ((*(byte *)(param_2 + 6) & 2) != 0) {
    puVar2 = param_2;
  }
  *puVar2 = &PTR_FUN_143fcdb48;
  *puVar2 = &PTR_FUN_143fcdb90;
  *(undefined1 *)(puVar2 + 1) = local_80;
  *(undefined1 *)(puVar2 + 2) = local_78;
  puVar2[3] = local_70;
  *puVar2 = &PTR_FUN_144f4a390;
  puVar2[4] = 0;
  puVar2[4] = local_68;
  *(undefined4 *)(puVar2 + 5) = (undefined4)local_60;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = local_60._4_4_;
  puVar2[6] = 0;
  puVar2[6] = local_58;
  *(undefined4 *)(puVar2 + 7) = (undefined4)local_50;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = local_50._4_4_;
  puVar2[8] = 0;
  puVar2[8] = local_48;
  *(undefined4 *)(puVar2 + 9) = (undefined4)local_40;
  *(undefined4 *)((longlong)puVar2 + 0x4c) = local_40._4_4_;
  puVar2[10] = 0;
  puVar2[10] = local_38;
  *(undefined4 *)(puVar2 + 0xb) = (undefined4)local_30;
  *(undefined4 *)((longlong)puVar2 + 0x5c) = local_30._4_4_;
  *puVar2 = &PTR__scalar_deleting_destructor__144f9e560;
  puVar2[0xc] = 0;
  puVar2[0xc] = local_28;
  *(undefined4 *)(puVar2 + 0xd) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar2 + 0x6c) = local_20._4_4_;
  local_20 = 0;
  local_28 = (void *)0x0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  FUN_141fd2510(&local_38);
  TArray<FColorParameterNameAndCurves,TSizedDefaultAllocator<32>_>::
  ~TArray<FColorParameterNameAndCurves,TSizedDefaultAllocator<32>_>(&local_48);
  TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_>::
  ~TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_>(&local_58);
  TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_>::
  ~TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_>(&local_68);
  return param_2;
}



// FUNCTION 1420f0e60 FUN_1420f0e60 body=1529 status=ok
// SIG undefined FUN_1420f0e60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1420f0e60(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_2e8 [32];
  longlong local_2c8;
  longlong local_2b8 [4];
  undefined1 local_298 [4];
  undefined1 local_294 [4];
  longlong local_290;
  undefined1 local_288 [8];
  longlong local_280;
  undefined1 local_278 [8];
  longlong *local_270;
  undefined4 *local_268;
  longlong *local_260;
  undefined4 *local_258;
  undefined1 local_250 [8];
  longlong *local_248;
  undefined1 local_240 [8];
  longlong *local_238;
  undefined1 local_230 [8];
  longlong *local_228;
  undefined1 local_218 [8];
  longlong *local_210;
  undefined1 local_200 [8];
  longlong *local_1f8;
  undefined1 local_1e8 [8];
  longlong *local_1e0;
  undefined1 local_1d0 [8];
  longlong *local_1c8;
  undefined1 local_1b8 [8];
  longlong *local_1b0;
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  undefined1 local_180 [40];
  undefined1 local_158 [48];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  longlong local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  undefined4 local_88 [4];
  undefined1 local_78 [8];
  longlong *local_70;
  char local_60;
  undefined4 local_58 [4];
  undefined1 local_48 [8];
  longlong *local_40;
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  if (((*(uint *)((longlong)param_1 + 0x4cc) >> 1 & 1) == 0) ||
     (cVar4 = (**(code **)(*param_1 + 0x768))(), cVar4 == '\0')) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_218,
               L"Only Local Player Controllers can be assigned to widgets. {PlayerController} is not a Local Player Controller."
               ,&DAT_144f97be8,L"NotLocalPlayer");
    local_280 = param_1[3];
    local_d8 = 0;
    local_d0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0xffffffff;
    local_a4 = 0;
    local_98 = 0;
    local_90 = 0;
    uVar5 = FText::FromName(local_1d0,&local_280);
    local_58[0] = 4;
    FText::FText(local_48,uVar5);
    local_30 = '\x01';
    local_2b8[2] = 0;
    local_2b8[3] = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_2b8 + 2,0);
    FGenericPlatformString::Memcpy(local_2b8[2],L"PlayerController",0x22);
    local_260 = local_2b8 + 2;
    local_258 = local_58;
    FUN_1407484b0(&local_d8,local_294,&local_260,0);
    if (local_2b8[2] != 0) {
      FMemory::Free();
    }
    if ((local_30 != '\0') && (local_30 = '\0', local_40 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    if (local_1c8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1c8 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_1c8)(local_1c8);
        LOCK();
        piVar2 = (int *)((longlong)local_1c8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1c8 + 8))(local_1c8,1);
        }
      }
    }
    FName::FName(local_278,&DAT_144f97454,1);
    uVar5 = FTextFormat::FTextFormat(local_190,local_218);
    uVar5 = FText::Format(local_1b8,uVar5,&local_d8);
    uVar6 = FUN_14161fb50(local_158,local_278);
    FMessageLog::Error(uVar6,local_240,uVar5);
    if (local_238 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_238 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_238)(local_238);
        LOCK();
        piVar2 = (int *)((longlong)local_238 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_238 + 8))(local_238,1);
        }
      }
    }
    FMessageLog::~FMessageLog(local_158);
    if (local_1b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1b0 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    local_90 = 0;
    if (local_98 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_d8);
  }
  else {
    if (param_1[0xa1] != 0) {
      lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
      if (lVar7 == 0) {
        return 0;
      }
      lVar8 = lVar7;
      if (*(longlong *)(lVar7 + 400) != 0) {
        lVar8 = *(longlong *)(lVar7 + 400);
      }
      local_2c8 = param_1[0xa1];
      uVar5 = FUN_1420f0090(lVar8,param_2,param_3,lVar7);
      return uVar5;
    }
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_230,
               L"CreateWidget cannot be used on Player Controller with no attached player. {PlayerController} has no Player attached."
               ,&DAT_144f97d10,L"NoPlayer");
    local_290 = param_1[3];
    local_128 = 0;
    local_120 = 0;
    local_108 = 0;
    local_100 = 0;
    local_f8 = 0xffffffff;
    local_f4 = 0;
    local_e8 = 0;
    local_e0 = 0;
    uVar5 = FText::FromName(local_200,&local_290);
    local_88[0] = 4;
    FText::FText(local_78,uVar5);
    local_60 = '\x01';
    local_2b8[0] = 0;
    local_2b8[1] = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_2b8,0);
    FGenericPlatformString::Memcpy(local_2b8[0],L"PlayerController",0x22);
    local_270 = local_2b8;
    local_268 = local_88;
    FUN_1407484b0(&local_128,local_298,&local_270,0);
    if (local_2b8[0] != 0) {
      FMemory::Free();
    }
    if ((local_60 != '\0') && (local_60 = '\0', local_70 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_70 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)local_70 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    if (local_1f8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1f8 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_1f8)(local_1f8);
        LOCK();
        piVar2 = (int *)((longlong)local_1f8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1f8 + 8))(local_1f8,1);
        }
      }
    }
    FName::FName(local_288,&DAT_144f974c4,1);
    uVar5 = FTextFormat::FTextFormat(local_1a0,local_230);
    uVar5 = FText::Format(local_1e8,uVar5,&local_128);
    uVar6 = FUN_14161fb50(local_180,local_288);
    FMessageLog::Error(uVar6,local_250,uVar5);
    if (local_248 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_248 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_248)(local_248);
        LOCK();
        piVar2 = (int *)((longlong)local_248 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_248 + 8))(local_248,1);
        }
      }
    }
    FMessageLog::~FMessageLog(local_180);
    if (local_1e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1e0 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    local_e0 = 0;
    if (local_e8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_128);
    local_210 = local_228;
  }
  if (local_210 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_210 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_210)(local_210);
      LOCK();
      piVar2 = (int *)((longlong)local_210 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_210 + 8))(local_210,1);
      }
    }
  }
  return 0;
}



// FUNCTION 1420f1460 CreateWidgetInstance body=94 status=ok
// SIG undefined CreateWidgetInstance(void)

void UUserWidget::CreateWidgetInstance(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = UGameInstance::GetFirstGamePlayer();
  uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  FUN_1420f0090(param_1,param_2,param_3,uVar2,uVar1);
  return;
}



// FUNCTION 1420f14c0 FUN_1420f14c0 body=273 status=ok
// SIG undefined FUN_1420f14c0(void)

undefined8 FUN_1420f14c0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 != (longlong *)0x0) {
    lVar2 = UUserWidget::GetPrivateStaticClass();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1420f1564;
  }
  if (param_1[4] == 0) {
    return 0;
  }
  param_1 = *(longlong **)(param_1[4] + 0x20);
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  lVar2 = UUserWidget::GetPrivateStaticClass();
  if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
      lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return 0;
  }
LAB_1420f1564:
  if (param_1[0x34] == 0) {
    return 0;
  }
  uVar3 = (**(code **)(*param_1 + 0x2a8))(param_1);
  uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  uVar3 = FUN_1420f0090(param_1[0x34],param_2,param_3,uVar4,uVar3);
  return uVar3;
}



// FUNCTION 1420f15e0 FUN_1420f15e0 body=155 status=ok
// SIG undefined FUN_1420f15e0(void)

void FUN_1420f15e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar3 = UUserWidget::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_1420f14c0(lVar1,param_2,param_3);
      return;
    }
  }
  FUN_1420f0090(param_1,param_2,param_3,0,0);
  return;
}



// FUNCTION 1420f1680 CreateWidgetInstance body=127 status=ok
// SIG undefined CreateWidgetInstance(void)

void UUserWidget::CreateWidgetInstance(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)param_1[0x32];
  if (plVar1 == (longlong *)0x0) {
    uVar2 = FUN_1428cc3e0();
    plVar3 = param_1;
  }
  else {
    uVar2 = UGameInstance::GetFirstGamePlayer(plVar1);
    plVar3 = (longlong *)(**(code **)(*plVar1 + 0x148))(plVar1);
    param_1 = plVar1;
  }
  FUN_1420f0090(param_1,param_2,param_3,plVar3,uVar2);
  return;
}



// FUNCTION 1420f1700 FUN_1420f1700 body=171 status=ok
// SIG undefined FUN_1420f1700(void)

void FUN_1420f1700(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  FUN_142338f40();
  if (DAT_1469f4590 != 0) {
    plVar5 = (longlong *)(param_1 + 0x2e0);
    if (*plVar5 != 0) {
      FUN_1418c6c20(DAT_1469f4590,*(undefined4 *)(*plVar5 + 8));
      local_10 = (longlong *)0x0;
      if (plVar5 != &local_18) {
        *plVar5 = 0;
        local_18 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x2e8,&local_10);
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
    }
  }
  return;
}



// FUNCTION 1420f17b0 FUN_1420f17b0 body=32 status=ok
// SIG undefined FUN_1420f17b0(void)

void FUN_1420f17b0(longlong *param_1)

{
  FUN_142388290();
                    /* WARNING: Could not recover jumptable at 0x0001420f17c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x930))(param_1);
  return;
}



// FUNCTION 1420f17e0 FUN_1420f17e0 body=9 status=ok
// SIG undefined FUN_1420f17e0(void)

void FUN_1420f17e0(longlong param_1)

{
  FUN_1420d75a0(param_1 + 0x10);
  return;
}



// FUNCTION 1420f1810 FUN_1420f1810 body=9 status=ok
// SIG undefined FUN_1420f1810(void)

void FUN_1420f1810(longlong param_1)

{
  FUN_1420d8220(param_1 + 0x10);
  return;
}



// FUNCTION 1420f1830 DestroyObject body=63 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::TIntrusiveReferenceController<SBackgroundBlur>::DestroyObject
               (longlong param_1)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x330);
  if (*(char *)(param_1 + 0x324) != '\0') {
    *(undefined1 *)(param_1 + 0x324) = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x310);
  FUN_140458b70(param_1 + 0x10);
  return;
}



// FUNCTION 1420f1870 FUN_1420f1870 body=9 status=ok
// SIG undefined FUN_1420f1870(void)

void FUN_1420f1870(longlong param_1)

{
  SConstraintCanvas::~SConstraintCanvas(param_1 + 0x10);
  return;
}



// FUNCTION 1420f1890 FUN_1420f1890 body=9 status=ok
// SIG undefined FUN_1420f1890(void)

void FUN_1420f1890(longlong param_1)

{
  FUN_141966450(param_1 + 0x10);
  return;
}



// FUNCTION 1420f18c0 FUN_1420f18c0 body=9 status=ok
// SIG undefined FUN_1420f18c0(void)

void FUN_1420f18c0(longlong param_1)

{
  FUN_1420d8980(param_1 + 0x10);
  return;
}



// FUNCTION 1420f18d0 FUN_1420f18d0 body=9 status=ok
// SIG undefined FUN_1420f18d0(void)

void FUN_1420f18d0(longlong param_1)

{
  FUN_1419a95d0(param_1 + 0x10);
  return;
}



// FUNCTION 1420f18f0 FUN_1420f18f0 body=9 status=ok
// SIG undefined FUN_1420f18f0(void)

void FUN_1420f18f0(longlong param_1)

{
  FUN_141966dc0(param_1 + 0x10);
  return;
}



// FUNCTION 1420f1910 FUN_1420f1910 body=9 status=ok
// SIG undefined FUN_1420f1910(void)

void FUN_1420f1910(longlong param_1)

{
  SWrapBox::~SWrapBox(param_1 + 0x10);
  return;
}



// FUNCTION 1420f1920 FUN_1420f1920 body=26 status=ok
// SIG undefined FUN_1420f1920(void)

void FUN_1420f1920(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001420f1936. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(lVar1 + 8))(lVar1 + 8,1);
    return;
  }
  return;
}



// FUNCTION 1420f1940 DetectDrag body=390 status=ok
// SIG undefined DetectDrag(void)

undefined8
UWidgetBlueprintLibrary::DetectDrag
          (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong local_48;
  longlong *plStack_40;
  longlong local_38;
  longlong *plStack_30;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  
  if (param_3 != 0) {
    FUN_1420f9830(param_3,&local_48);
    plVar6 = plStack_40;
    if (local_48 != 0) {
      local_28 = *param_4;
      local_20 = param_4[1];
      local_18 = param_4[2];
      if (local_18 != 0) {
        LOCK();
        *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
        UNLOCK();
      }
      local_38 = local_48;
      plStack_30 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
        UNLOCK();
      }
      uVar5 = FUN_140466100(param_2,&local_38,&local_28);
      FUN_140459130(param_2,uVar5);
      plVar2 = plStack_40;
      if (plVar6 == (longlong *)0x0) goto LAB_1420f1a6b;
      LOCK();
      plVar6 = plVar6 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      plVar6 = plStack_40;
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_40)(plStack_40);
        plVar6 = plStack_40;
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_40 + 8))(plStack_40,1);
        }
      }
    }
    plVar2 = plStack_40;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar6 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_40 + 8))(plStack_40,1);
        }
      }
    }
  }
LAB_1420f1a6b:
  FUN_140438260(param_1,param_2);
  plVar6 = (longlong *)param_4[2];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1420f1ad0 FUN_1420f1ad0 body=1090 status=ok
// SIG undefined FUN_1420f1ad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1420f1ad0(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_3a8 [32];
  longlong local_388;
  longlong *plStack_380;
  longlong local_378;
  longlong local_370;
  longlong *local_368;
  longlong local_358;
  longlong *plStack_350;
  undefined1 local_348 [8];
  undefined8 local_340;
  undefined8 local_338;
  undefined1 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined4 local_298;
  uint local_294;
  undefined1 local_288 [8];
  undefined8 local_280;
  undefined8 local_278;
  undefined1 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  uint local_1d4;
  undefined1 local_1c8 [8];
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  uint local_114;
  undefined1 local_108 [192];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_3a8;
  plVar3 = *(longlong **)(param_2 + 0x48);
  lVar4 = *(longlong *)(param_2 + 0x38);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if ((lVar4 == *param_4) || (*(char *)(param_2 + 0x5c) != '\0')) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar3 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  if (!bVar6) {
    FEventReply::FEventReply(param_1,0);
    local_1d4 = local_1d4 & 0xffffff00;
    local_288[0] = 0;
    local_280 = 0;
    local_258 = 0;
    uStack_250 = 0;
    local_248 = 0;
    uStack_240 = 0;
    local_238 = 0;
    uStack_230 = 0;
    local_228 = 0;
    uStack_220 = 0;
    local_218 = 0;
    uStack_210 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_1e8 = 0;
    uStack_1e0 = 0;
    local_278 = 0;
    local_268 = 0;
    local_260 = 0;
    local_208 = 0;
    local_200 = 0;
    local_1d8 = 0x20702;
    FUN_140439160(param_1,local_288);
    FUN_140438c20(local_288);
    plVar3 = (longlong *)param_4[2];
    if (plVar3 == (longlong *)0x0) {
      return param_1;
    }
    LOCK();
    plVar9 = plVar3 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar4 != 1) {
      return param_1;
    }
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) {
      return param_1;
    }
    (**(code **)(*plVar3 + 8))(plVar3,1);
    return param_1;
  }
  local_114 = local_114 & 0xffffff00;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_1c8[0] = 0;
  local_118 = 0x20702;
  FReply::FReply(local_108,local_1c8);
  FUN_140438c20(local_1c8);
  local_294 = local_294 & 0xffffff00;
  local_348[0] = 1;
  local_318 = 0;
  uStack_310 = 0;
  local_308 = 0;
  uStack_300 = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_340 = 0;
  local_338 = 0;
  local_328 = 0;
  local_320 = 0;
  local_2c8 = 0;
  local_2c0 = 0;
  local_298 = 0x20702;
  FUN_140439160(local_108,local_348);
  FUN_140438c20(local_348);
  plVar3 = (longlong *)param_4[2];
  lVar4 = *param_4;
  lVar5 = param_4[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (param_3 != 0) {
    FUN_1420f9830(param_3,&local_388);
    plVar9 = plStack_380;
    if (local_388 != 0) {
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      local_358 = local_388;
      plStack_350 = plStack_380;
      if (plStack_380 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_380 + 1) = (int)plStack_380[1] + 1;
        UNLOCK();
      }
      local_378 = lVar4;
      local_370 = lVar5;
      local_368 = plVar3;
      uVar8 = FUN_140466100(local_108,&local_358,&local_378);
      FUN_140459130(local_108,uVar8);
      plVar7 = plStack_380;
      if (plVar9 == (longlong *)0x0) goto LAB_1420f1d96;
      LOCK();
      plVar9 = plVar9 + 1;
      lVar4 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      plVar9 = plStack_380;
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_380)(plStack_380);
        plVar9 = plStack_380;
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_380 + 8))(plStack_380,1);
        }
      }
    }
    plVar7 = plStack_380;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar9 + 1;
      lVar4 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_380)(plStack_380);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_380 + 8))(plStack_380,1);
        }
      }
    }
  }
LAB_1420f1d96:
  FUN_140438260(param_1,local_108);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar3 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  FUN_140438c20(local_108);
  plVar3 = (longlong *)param_4[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar3 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1420f1f20 FUN_1420f1f20 body=940 status=ok
// SIG undefined FUN_1420f1f20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1420f1f20(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_288 [32];
  byte local_268 [8];
  longlong *local_260;
  longlong *local_258;
  byte local_250 [4];
  undefined4 local_24c;
  uint local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined8 local_23c;
  undefined4 local_234;
  longlong local_230;
  undefined4 local_228;
  undefined8 local_224;
  undefined4 local_21c;
  longlong local_218;
  undefined4 local_210;
  undefined8 local_20c;
  undefined4 local_204;
  longlong local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  undefined1 local_1b0 [352];
  char local_50;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  FWidgetPath::FWidgetPath(param_2);
  plVar2 = (longlong *)param_1[0x86];
  *(undefined2 *)(param_1 + 0x99) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4ca) = 0;
  param_1[0x86] = 0;
  (**(code **)(*param_1 + 0x588))(param_1,local_250);
  *(byte *)(param_1 + 0x87) = *(byte *)(param_1 + 0x87) & 0xfc;
  *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xfffffffe;
  *(byte *)(param_1 + 0x87) = *(byte *)(param_1 + 0x87) | local_250[0] & 3;
  *(undefined4 *)((longlong)param_1 + 0x43c) = local_24c;
  *(undefined4 *)((longlong)param_1 + 0x444) = local_244;
  *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | local_248 & 1;
  *(undefined8 *)((longlong)param_1 + 0x44c) = local_23c;
  *(undefined4 *)((longlong)param_1 + 0x454) = local_234;
  param_1[0x8b] = local_230;
  *(undefined4 *)(param_1 + 0x8c) = local_228;
  *(undefined8 *)((longlong)param_1 + 0x464) = local_224;
  *(undefined4 *)((longlong)param_1 + 0x46c) = local_21c;
  param_1[0x8e] = local_218;
  *(undefined4 *)(param_1 + 0x8f) = local_210;
  *(undefined8 *)((longlong)param_1 + 0x47c) = local_20c;
  *(undefined4 *)((longlong)param_1 + 0x484) = local_204;
  param_1[0x91] = local_200;
  *(undefined4 *)(param_1 + 0x92) = local_1f8;
  *(undefined4 *)(param_1 + 0x93) = local_1f0;
  *(undefined4 *)(param_1 + 0x89) = local_240;
  *(undefined4 *)((longlong)param_1 + 0x494) = local_1f4;
  *(undefined4 *)((longlong)param_1 + 0x49c) = local_1ec;
  *(undefined4 *)(param_1 + 0x94) = local_1e8;
  *(undefined4 *)((longlong)param_1 + 0x4a4) = local_1e4;
  *(undefined4 *)(param_1 + 0x95) = local_1e0;
  *(undefined4 *)((longlong)param_1 + 0x4ac) = local_1dc;
  *(undefined4 *)(param_1 + 0x96) = local_1d8;
  param_1[0x97] = local_1d0;
  param_1[0x98] = local_1c8;
  param_1[0x86] = local_1b8;
  plVar5 = &local_1c0;
  if (local_50 == '\0') {
    plVar5 = param_1 + 0x85;
  }
  param_1[0x85] = param_1[0x84];
  param_1[0x84] = *plVar5;
  FUN_1417f9710(param_2,local_1b0);
  if ((longlong *)param_1[0x86] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x86] + 0x960))();
  }
  cVar4 = FWidgetPath::IsValid(param_2);
  if (cVar4 != '\0') {
    lVar6 = *(longlong *)(param_2 + 0x128);
    if (*(longlong *)(param_2 + 0x128) == 0) {
      lVar6 = param_2 + 8;
    }
    lVar1 = lVar6 + (longlong)*(int *)(param_2 + 0x130) * 0x48;
    for (; lVar6 != lVar1; lVar6 = lVar6 + 0x48) {
      lVar3 = *(longlong *)(lVar6 + 0x38);
      if (((*(int *)(lVar3 + 0xa8) != 0) && (*(longlong **)(lVar3 + 0xa0) != (longlong *)0x0)) &&
         (cVar4 = (**(code **)(**(longlong **)(lVar3 + 0xa0) + 0x18))(), cVar4 != '\0')) {
        if (*(int *)(lVar3 + 0xa8) == 0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = *(longlong **)(lVar3 + 0xa0);
        }
        cVar4 = (**(code **)(*plVar5 + 0x38))();
        *(char *)(lVar3 + 0x98) = cVar4;
      }
      if (*(char *)(lVar3 + 0x98) != '\0') {
        cVar4 = (**(code **)(**(longlong **)(lVar6 + 0x38) + 400))();
        if (cVar4 != '\0') {
          *(undefined1 *)(param_1 + 0x99) = 1;
        }
        cVar4 = (**(code **)(**(longlong **)(lVar6 + 0x38) + 0x178))();
        if (cVar4 != '\0') {
          *(undefined1 *)((longlong)param_1 + 0x4c9) = 1;
        }
      }
      lVar3 = *(longlong *)(lVar6 + 0x38);
      if (((*(int *)(lVar3 + 0xc0) != 0) && (*(longlong **)(lVar3 + 0xb8) != (longlong *)0x0)) &&
         (cVar4 = (**(code **)(**(longlong **)(lVar3 + 0xb8) + 0x18))(), cVar4 != '\0')) {
        if (*(int *)(lVar3 + 0xc0) == 0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = *(longlong **)(lVar3 + 0xb8);
        }
        (**(code **)(*plVar5 + 0x38))(plVar5,local_268);
        *(byte *)(lVar3 + 0xb0) = local_268[0];
      }
      if ((*(byte *)(lVar3 + 0xb0) & 8) != 0) {
        *(undefined1 *)((longlong)param_1 + 0x4ca) = 1;
      }
    }
  }
  plVar5 = (longlong *)param_1[0x86];
  if (plVar5 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x960))(plVar2);
      plVar5 = (longlong *)param_1[0x86];
    }
    local_260 = plVar5;
    local_258 = plVar2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x5a,&local_260);
  }
  FUN_140458830(local_1b0);
  return param_2;
}



// FUNCTION 1420f22d0 Difference body=425 status=ok
// SIG undefined Difference(void)

undefined8 *
TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Difference
          (longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int *piVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  uint *puVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_68;
  uint uStack_64;
  int iStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  int local_48;
  undefined4 uStack_44;
  longlong *local_40;
  int iStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined4 *)(param_2 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  if (*(int *)(param_2 + 1) - *(int *)((longlong)param_2 + 0x34) <
      (int)param_1[1] - *(int *)((longlong)param_1 + 0x34)) {
    FUN_1405effc0(param_2);
  }
  iVar1 = (int)param_1[5];
  puStack_30 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  local_58._4_4_ = 0;
  uStack_50 = 0;
  if (iVar1 != 0) {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puStack_30;
    }
    uVar2 = *puVar8;
    uStack_50 = 0;
    local_68 = 0;
    while (uVar2 == 0) {
      lVar5 = (longlong)local_68;
      uStack_50 = uStack_50 + 0x20;
      iVar6 = local_68 + 1;
      bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar6;
      if (bVar3) goto LAB_1420f23cb;
      uVar2 = puVar8[lVar5 + 1];
    }
    uStack_64 = -uVar2 & uVar2;
    iVar6 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    local_58._4_4_ = (uStack_50 - iVar6) + 0x1f;
    if (iVar1 < local_58._4_4_) {
LAB_1420f23cb:
      local_58._4_4_ = iVar1;
    }
  }
  uStack_28 = 0xffffffff;
  iStack_24 = local_58._4_4_;
  iStack_20 = uStack_50;
  uStack_1c = iStack_4c;
  iStack_38 = local_68;
  uStack_34 = uStack_64;
  iStack_60 = local_68;
  uStack_5c = uStack_64;
  local_48 = uStack_50;
  uStack_44 = iStack_4c;
  uStack_50 = 0xffffffff;
  iStack_4c = local_58._4_4_;
  bVar3 = local_58._4_4_ < iVar1;
  local_40 = param_1;
  local_58 = puStack_30;
  if (bVar3) {
    do {
      puVar7 = (undefined8 *)((longlong)iStack_4c * 0x10 + *param_1);
      piVar4 = (int *)TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                                (param_3,local_res8,*puVar7);
      if (*piVar4 == -1) {
        FUN_14058cbf0(param_2,local_res10,puVar7,0);
      }
      uStack_50 = uStack_50 & ~uStack_5c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
    } while (iStack_4c < (int)local_58[6]);
  }
  return param_2;
}



// FUNCTION 1420f2490 FUN_1420f2490 body=331 status=ok
// SIG undefined FUN_1420f2490(void)

void FUN_1420f2490(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  LARGE_INTEGER local_res8;
  undefined1 local_res20 [8];
  uint uVar11;
  LARGE_INTEGER *pLVar12;
  LARGE_INTEGER local_28 [2];
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(local_28);
  plVar4 = (longlong *)FTexture2DDynamicResource::GetTexture2DRHI(*param_1,local_res20);
  lVar3 = *plVar4;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res20);
  pLVar12 = &local_res8;
  uVar1 = *(uint *)(lVar3 + 0x60);
  iVar8 = 0;
  iVar2 = *(int *)(lVar3 + 100);
  local_res8.s.LowPart = 0;
  uVar11 = 0;
  lVar5 = (**(code **)(*DAT_146ab6358 + 0x580))(DAT_146ab6358,&DAT_146ab6e78,lVar3,0,1,pLVar12,0,0);
  if (0 < iVar2) {
    iVar10 = (iVar2 + -1) * uVar1;
    do {
      puVar9 = (undefined1 *)(param_1[1] + (longlong)iVar10 * 4);
      puVar6 = (undefined1 *)((ulonglong)(((iVar2 - iVar8) + -1) * local_res8.s.LowPart) + lVar5);
      uVar7 = (ulonglong)uVar1;
      if (0 < (int)uVar1) {
        do {
          *puVar6 = *puVar9;
          puVar6[1] = puVar9[1];
          puVar6[2] = puVar9[2];
          puVar6[3] = puVar9[3];
          uVar7 = uVar7 - 1;
          puVar6 = puVar6 + 4;
          puVar9 = puVar9 + 4;
        } while (uVar7 != 0);
      }
      iVar8 = iVar8 + 1;
      iVar10 = iVar10 - uVar1;
    } while (iVar8 < iVar2);
  }
  (**(code **)(*DAT_146ab6358 + 0x588))
            (DAT_146ab6358,&DAT_146ab6e78,lVar3,0,uVar11 & 0xffffff00,
             (ulonglong)pLVar12 & 0xffffffffffffff00);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_28[0]._0_4_);
  return;
}



// FUNCTION 1420f25e0 FUN_1420f25e0 body=172 status=ok
// SIG undefined FUN_1420f25e0(void)

undefined1 FUN_1420f25e0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar2 = *(longlong **)(param_1 + 0x30);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar8 = iVar5 == 0;
    if (bVar8) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar6 = plVar7, !bVar8) {
      LOCK();
      bVar8 = iVar5 == (int)plVar2[1];
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar6 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar7 = *(longlong **)(param_1 + 0x28);
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  uVar4 = (**(code **)(*plVar7 + 0x58))(plVar7,*(undefined4 *)(param_1 + 0x38));
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
    return uVar4;
  }
  return uVar4;
}



// FUNCTION 1420f2690 DownloadImage body=156 status=ok
// SIG undefined DownloadImage(void)

undefined8 UAsyncTaskDownloadImage::DownloadImage(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_18 [16];
  
  uVar1 = GetTransientPackage();
  FUN_1417846f0(uVar1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar2 = GetPrivateStaticClass();
  uVar1 = FUN_1417985e0(uVar2,uVar1,0,0,0,0,0,0,0);
  uVar2 = FString::FString(local_18,param_1);
  FUN_142137b00(uVar1,uVar2);
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 1420f2730 DragCancelled_Implementation body=28 status=ok
// SIG undefined DragCancelled_Implementation(void)

void UDragDropOperation::DragCancelled_Implementation(longlong param_1)

{
  longlong local_res8 [4];
  
  local_res8[0] = param_1;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x68,local_res8);
  return;
}



// FUNCTION 1420f2750 Dragged_Implementation body=28 status=ok
// SIG undefined Dragged_Implementation(void)

void UDragDropOperation::Dragged_Implementation(longlong param_1)

{
  longlong local_res8 [4];
  
  local_res8[0] = param_1;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x78,local_res8);
  return;
}



// FUNCTION 1420f2770 FUN_1420f2770 body=677 status=ok
// SIG undefined FUN_1420f2770(void)

void FUN_1420f2770(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 uVar8;
  double dVar9;
  float fVar10;
  undefined8 local_128;
  longlong *local_120;
  longlong local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  uint local_ec;
  undefined1 local_e8 [40];
  uint local_c0;
  undefined8 *local_40;
  
  lVar1 = param_1[0xdb];
  lVar5 = lVar1;
  if (param_2 != 0) {
    lVar5 = param_2;
  }
  param_1[0xdb] = lVar5;
  lVar5 = DAT_146b19a68;
  dVar9 = DAT_1468b5a78 - DAT_1468e2430;
  uVar2 = *(undefined8 *)(param_3 + 0x58);
  fVar10 = (float)DAT_1464a97d0;
  local_120 = (longlong *)(**(code **)(*param_1 + 0x1f8))();
  local_118 = param_1[0xe1];
  local_110 = (undefined4)param_1[0xe2];
  local_ec = local_ec & 0xfffffff4 | 4;
  local_f4 = 0x3f800000;
  local_f0 = 0;
  local_10c = 0xffffffff;
  local_108 = 0;
  local_128 = uVar2;
  if (local_120 != (longlong *)0x0) {
    lVar6 = (**(code **)(*local_120 + 0x208))(local_120);
    if (lVar6 != 0) {
      cVar3 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
        DVar4 = GetCurrentThreadId();
        if (DVar4 != DAT_1468c21c0) goto LAB_1420f289f;
      }
      local_ec = local_ec | 8;
      local_f0 = FUN_1428ccc70(lVar6);
    }
  }
LAB_1420f289f:
  local_ec = local_ec | 9;
  local_100 = (float)dVar9;
  local_fc = fVar10;
  local_f8 = (float)dVar9;
  FUN_142743490(local_e8,&local_128);
  uVar8 = FUN_14046e540(param_1);
  local_c0 = local_c0 | 0x1000000;
  lVar6 = (**(code **)(*param_1 + 0x1f0))(param_1,local_e8);
  local_40 = (undefined8 *)operator_new(0x20);
  if (local_40 == (undefined8 *)0x0) {
    local_40 = (undefined8 *)0x0;
  }
  else {
    FLegacyScreenPercentageDriver::FLegacyScreenPercentageDriver(local_40,local_e8,uVar8,0,uVar8);
    *local_40 = &PTR_FUN_1450e89a0;
  }
  *(undefined4 *)(lVar6 + 0x1220) = *(undefined4 *)(lVar6 + 0x368);
  *(undefined4 *)(lVar6 + 0x1224) = *(undefined4 *)(lVar6 + 0x36c);
  *(undefined4 *)(lVar6 + 0x1228) = *(undefined4 *)(lVar6 + 0x370);
  *(undefined4 *)(lVar6 + 0x122c) = *(undefined4 *)(lVar6 + 0x374);
  if ((*(byte *)((longlong)param_1 + 100) & 1) != 0) {
    FUN_1428a0af0(param_3,&DAT_1464aa6e0);
  }
  FUN_1428a0af0(param_3,param_1 + 0xd0);
  DAT_1464aaa8c = DAT_1464aaa8c + -1;
  plVar7 = (longlong *)GetRendererModule();
  (**(code **)(*plVar7 + 0x40))(plVar7,param_3,local_e8);
  lVar6 = *(longlong *)(lVar5 + 0x40);
  if ((lVar6 != 0) && ((*(int *)(lVar6 + 0x6f8) != 0 || (*(int *)(lVar6 + 0x708) != 0)))) {
    FUN_142368cd0();
  }
  lVar5 = *(longlong *)(lVar5 + 0x50);
  if ((lVar5 != 0) && ((*(int *)(lVar5 + 0x6f8) != 0 || (*(int *)(lVar5 + 0x708) != 0)))) {
    FUN_142368cd0();
  }
  param_1[0xdb] = lVar1;
  FUN_142745e10(local_e8);
  return;
}



// FUNCTION 1420f2a20 DrawBox body=429 status=ok
// SIG undefined DrawBox(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UWidgetBlueprintLibrary::DrawBox
               (longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
               undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined8 local_a4;
  undefined8 local_9c;
  float local_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  undefined8 local_84;
  byte local_7c;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  iVar2 = *(int *)((longlong)param_1 + 0x2c) + 1;
  *(int *)((longlong)param_1 + 0x2c) = iVar2;
  if (param_4 != 0) {
    lVar1 = *param_1;
    local_c8._4_4_ = (float)((ulonglong)param_2 >> 0x20);
    fStack_bc = *(float *)(lVar1 + 0x20);
    fStack_b8 = *(float *)(lVar1 + 0x24);
    local_c0 = *(float *)(lVar1 + 0x1c);
    fStack_b4 = *(float *)(lVar1 + 0x28);
    local_c8._0_4_ = (float)param_2;
    local_d0 = param_5;
    local_d8 = 0;
    local_a8 = *(float *)(lVar1 + 8);
    local_b0 = local_a8 * (float)local_c8 + *(float *)(lVar1 + 0xc);
    local_ac = local_a8 * local_c8._4_4_ + *(float *)(lVar1 + 0x10);
    local_7c = (*(byte *)(lVar1 + 0x34) & 1) * '\x02' | local_7c & 0xfc;
    local_a4 = 0;
    local_84 = CONCAT44(fStack_bc * (float)local_c8 + fStack_b4 * local_c8._4_4_ +
                        *(float *)(lVar1 + 0x30),
                        local_c0 * (float)local_c8 + fStack_b8 * local_c8._4_4_ +
                        *(float *)(lVar1 + 0x2c));
    local_c8 = param_2;
    local_9c = param_3;
    local_94 = local_c0;
    fStack_90 = fStack_bc;
    fStack_8c = fStack_b8;
    fStack_88 = fStack_b4;
    FSlateDrawElement::MakeBox(param_1[2],iVar2,&local_b0,param_4 + 0x28);
  }
  return;
}



// FUNCTION 1420f2bd0 DrawLine body=335 status=ok
// SIG undefined DrawLine(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UWidgetBlueprintLibrary::DrawLine
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined1 param_5)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined4 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 local_4c;
  byte local_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  *(int *)((longlong)param_1 + 0x2c) = *(int *)((longlong)param_1 + 0x2c) + 1;
  local_80 = 1;
  local_88 = (undefined8 *)0x0;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_88,0);
  uVar2 = local_80;
  *local_88 = param_2;
  lVar4 = (longlong)(int)local_80;
  iVar3 = (int)local_80 + 1;
  local_80 = CONCAT44(local_80._4_4_,iVar3);
  if (local_80._4_4_ < iVar3) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_88,uVar2 & 0xffffffff);
  }
  local_88[lVar4] = param_3;
  puVar1 = (undefined4 *)*param_1;
  local_78 = puVar1[3];
  local_74 = puVar1[4];
  local_70 = puVar1[2];
  local_6c = 0;
  local_64 = *puVar1;
  local_60 = puVar1[1];
  local_5c = puVar1[7];
  uStack_58 = puVar1[8];
  uStack_54 = puVar1[9];
  uStack_50 = puVar1[10];
  local_4c = *(undefined8 *)(puVar1 + 0xb);
  local_44 = (*(byte *)(puVar1 + 0xd) & 1) * '\x02' | local_44 & 0xfc;
  local_90 = 0x3f800000;
  local_98 = param_5;
  local_a8 = 0;
  local_a0 = param_4;
  FSlateDrawElement::MakeLines
            (param_1[2],*(undefined4 *)((longlong)param_1 + 0x2c),&local_78,&local_88);
  if (local_88 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1420f2d20 DrawLines body=211 status=ok
// SIG undefined DrawLines(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UWidgetBlueprintLibrary::DrawLines
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 local_1c;
  byte local_14;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  puVar1 = (undefined4 *)*param_1;
  *(int *)((longlong)param_1 + 0x2c) = *(int *)((longlong)param_1 + 0x2c) + 1;
  local_48 = puVar1[3];
  local_44 = puVar1[4];
  local_40 = puVar1[2];
  local_3c = 0;
  local_34 = *puVar1;
  local_30 = puVar1[1];
  local_2c = puVar1[7];
  uStack_28 = puVar1[8];
  uStack_24 = puVar1[9];
  uStack_20 = puVar1[10];
  local_1c = *(undefined8 *)(puVar1 + 0xb);
  local_14 = (*(byte *)(puVar1 + 0xd) & 1) * '\x02' | local_14 & 0xfc;
  local_50 = 0x3f800000;
  local_68 = 0;
  local_60 = param_3;
  local_58 = param_4;
  FSlateDrawElement::MakeLines
            (param_1[2],*(undefined4 *)((longlong)param_1 + 0x2c),&local_48,param_2);
  return;
}



// FUNCTION 1420f2e00 FUN_1420f2e00 body=603 status=ok
// SIG undefined FUN_1420f2e00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1420f2e00(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_188 [32];
  undefined8 *local_168;
  undefined1 local_160;
  undefined8 local_158;
  undefined8 local_148;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined1 local_d8 [8];
  undefined8 local_d0;
  undefined8 local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined4 local_a8;
  float local_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  undefined8 local_94;
  byte local_8c;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  *(int *)((longlong)param_1 + 0x2c) = *(int *)((longlong)param_1 + 0x2c) + 1;
  plVar5 = DAT_1469eb140;
  local_148 = param_3;
  puVar6 = (undefined8 *)FName::FName(local_d8,"NormalText",1);
  local_d0 = *puVar6;
  local_c8 = local_d0;
  lVar7 = (**(code **)(*plVar5 + 0x80))(plVar5,DAT_1469eb158);
  if (lVar7 == 0) {
    lVar7 = FUN_141835350();
  }
  local_128 = *(undefined8 *)(lVar7 + 8);
  local_120 = *(undefined8 *)(lVar7 + 0x10);
  local_118 = *(undefined8 *)(lVar7 + 0x18);
  uStack_110 = *(undefined8 *)(lVar7 + 0x20);
  local_108 = *(undefined8 *)(lVar7 + 0x28);
  uStack_100 = *(undefined8 *)(lVar7 + 0x30);
  local_f8 = *(undefined8 *)(lVar7 + 0x38);
  local_f0 = *(longlong **)(lVar7 + 0x40);
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
    UNLOCK();
  }
  local_e8 = *(undefined8 *)(lVar7 + 0x48);
  local_e0 = *(undefined4 *)(lVar7 + 0x50);
  local_dc = *(undefined1 *)(lVar7 + 0x54);
  puVar4 = (undefined4 *)*param_1;
  local_160 = 0;
  local_140 = (float)puVar4[7];
  fStack_13c = (float)puVar4[8];
  local_b8 = (float)puVar4[2];
  fStack_138 = (float)puVar4[9];
  fStack_134 = (float)puVar4[10];
  local_c0 = local_b8 * (float)local_148 + (float)puVar4[3];
  local_bc = local_b8 * local_148._4_4_ + (float)puVar4[4];
  local_b4 = 0;
  local_ac = *puVar4;
  local_a8 = puVar4[1];
  local_8c = (*(byte *)(puVar4 + 0xd) & 1) * '\x02' | local_8c & 0xfc;
  local_168 = &local_128;
  local_94 = CONCAT44((float)local_148 * fStack_13c + local_148._4_4_ * fStack_134 +
                      (float)puVar4[0xc],
                      (float)local_148 * local_140 + local_148._4_4_ * fStack_138 +
                      (float)puVar4[0xb]);
  local_158 = param_4;
  local_a4 = local_140;
  fStack_a0 = fStack_13c;
  fStack_9c = fStack_138;
  fStack_98 = fStack_134;
  FUN_14184a500(param_1[2],*(undefined4 *)((longlong)param_1 + 0x2c),&local_c0,param_2);
  plVar5 = local_f0;
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_f0 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_f0)(local_f0);
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
  return;
}



// FUNCTION 1420f3060 FUN_1420f3060 body=573 status=ok
// SIG undefined FUN_1420f3060(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1420f3060(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_188 [32];
  undefined4 *local_168;
  undefined1 local_160;
  undefined8 local_158;
  undefined8 local_148;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  undefined4 local_130;
  undefined1 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined1 local_108 [56];
  longlong *local_d0;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined4 local_a0;
  float local_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  undefined8 local_8c;
  byte local_84;
  ulonglong local_80;
  
  uVar8 = param_7;
  if (param_4 != 0) {
    local_80 = DAT_1468387a8 ^ (ulonglong)auStack_188;
    *(int *)((longlong)param_1 + 0x2c) = *(int *)((longlong)param_1 + 0x2c) + 1;
    local_130 = 0;
    local_12c = 0;
    local_128 = 0;
    local_168 = &local_130;
    local_120 = DAT_1464aa6e0;
    uStack_11c = DAT_1464aa6e4;
    uStack_118 = DAT_1464aa6e8;
    uStack_114 = DAT_1464aa6ec;
    local_148 = param_3;
    FSlateFontInfo::FSlateFontInfo(local_108,param_4,param_5,&param_6);
    puVar5 = (undefined4 *)*param_1;
    uVar4 = *(undefined4 *)((longlong)param_1 + 0x2c);
    uVar6 = param_1[2];
    local_140 = (float)puVar5[7];
    fStack_13c = (float)puVar5[8];
    fStack_138 = (float)puVar5[9];
    fStack_134 = (float)puVar5[10];
    local_b0 = (float)puVar5[2];
    local_b8 = local_b0 * (float)local_148 + (float)puVar5[3];
    local_b4 = local_b0 * local_148._4_4_ + (float)puVar5[4];
    local_ac = 0;
    local_a4 = *puVar5;
    local_a0 = puVar5[1];
    local_84 = (*(byte *)(puVar5 + 0xd) & 1) * '\x02' | local_84 & 0xfc;
    local_8c = CONCAT44(fStack_13c * (float)local_148 + fStack_134 * local_148._4_4_ +
                        (float)puVar5[0xc],
                        local_140 * (float)local_148 + fStack_138 * local_148._4_4_ +
                        (float)puVar5[0xb]);
    local_9c = local_140;
    fStack_98 = fStack_13c;
    fStack_94 = fStack_138;
    fStack_90 = fStack_134;
    uVar9 = FText::ToString(param_2);
    local_158 = uVar8;
    local_160 = 0;
    local_168 = (undefined4 *)local_108;
    FUN_14184a500(uVar6,uVar4,&local_b8,uVar9);
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_d0 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar2 = (int *)((longlong)local_d0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_d0 + 8))(local_d0,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1420f32a0 FUN_1420f32a0 body=709 status=ok
// SIG undefined FUN_1420f32a0(void)

void FUN_1420f32a0(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  float fVar8;
  float local_res18;
  float local_res1c;
  float local_res20;
  float fStackX_24;
  longlong local_58;
  longlong *local_50;
  undefined1 local_48 [48];
  
  if (((DAT_146ab62f7 == '\0') && (param_1[0x105] != 0)) && (iVar3 = (int)param_1[0xe7], 0 < iVar3))
  {
    iVar4 = *(int *)((longlong)param_1 + 0x73c);
    if (((0 < iVar4) && (iVar3 <= DAT_1464c9c64)) && (iVar4 <= DAT_1464c9c64)) {
      *(int *)(param_1 + 0xea) = iVar3;
      *(int *)((longlong)param_1 + 0x754) = iVar4;
      if ((char)param_1[0xeb] == '\0') {
        *(undefined1 *)(param_1[0x108] + 0x28) = 1;
      }
      else {
        FUN_14185c5d0(param_1[0x105]);
        SWidget::GetDesiredSize(param_1[0x105],&local_res18);
        fVar8 = (float)((int)ROUND(local_res18 * 2.0 + 0.5) >> 1);
        *(int *)(param_1 + 0xea) = (int)ROUND(fVar8 + fVar8 + 0.5) >> 1;
        fVar8 = (float)((int)ROUND(local_res1c * 2.0 + 0.5) >> 1);
        *(int *)((longlong)param_1 + 0x754) = (int)ROUND(fVar8 + fVar8 + 0.5) >> 1;
        *(undefined1 *)(param_1[0x108] + 0x28) = 0;
      }
      if (((int)param_1[0xea] != (int)param_1[0xe7]) ||
         (*(int *)((longlong)param_1 + 0x754) != *(int *)((longlong)param_1 + 0x73c))) {
        *(int *)(param_1 + 0xe7) = (int)param_1[0xea];
        *(undefined4 *)((longlong)param_1 + 0x73c) = *(undefined4 *)((longlong)param_1 + 0x754);
        FUN_142142570(param_1,1);
        FUN_14234b040(param_1);
      }
      (**(code **)(*param_1 + 0x940))(param_1,param_1[0xea]);
      if (param_1[0xff] != 0) {
        *(undefined1 *)((longlong)param_1 + 0x741) = 0;
        plVar5 = (longlong *)param_1[0x106];
        local_res20 = (float)(int)param_1[0xea];
        local_58 = param_1[0x105];
        fStackX_24 = (float)(int)((ulonglong)param_1[0xea] >> 0x20);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        local_50 = plVar5;
        uVar6 = FUN_141839450(param_1[0x105],local_48);
        FUN_1420f39b0(param_1[0x108],param_1[0xff],uVar6,&local_58,0x3f800000,
                      CONCAT44(fStackX_24,local_res20),param_2,0);
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
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        lVar7 = FUN_1420f9f90(param_1);
        param_1[0xe9] = lVar7;
      }
    }
  }
  return;
}



// FUNCTION 1420f3570 FUN_1420f3570 body=1087 status=ok
// SIG undefined FUN_1420f3570(void)

void FUN_1420f3570(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 **ppuVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  undefined1 uVar7;
  BOOL BVar8;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  int iVar14;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  longlong local_e0;
  longlong *local_d8;
  longlong local_d0;
  undefined8 local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  
  local_e0 = param_5;
  local_e8 = param_6;
  local_d8 = param_4;
  local_c8 = param_3;
  lpCriticalSection =
       (LPCRITICAL_SECTION)(**(code **)(**(longlong **)(DAT_1469f4590 + 0x18) + 0x160))();
  BVar8 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar8 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468509e4) {
    _Init_thread_header(&DAT_1468509e4);
    if (DAT_1468509e4 == -1) {
      uVar10 = FCommandLine::Get();
      DAT_1468509e0 = FParse::Param(uVar10,L"nullrhi");
      _Init_thread_footer(&DAT_1468509e4);
    }
  }
  if ((((DAT_1468b616c == '\0') || (DAT_1468b616d != '\0')) && (DAT_1468509e0 == '\0')) &&
     (*(longlong *)(param_1 + 0x18) != 0)) {
    if (*(char *)(param_1 + 0x28) != '\0') {
      FUN_14185c5d0(*param_4,*(undefined4 *)(param_5 + 8));
    }
    if (*(char *)(param_1 + 0x29) != '\0') {
      FUN_141804f90(*(undefined8 *)(param_2 + 8),param_6);
    }
    local_d0 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    local_90 = *param_4;
    local_88 = param_4[1];
    if (local_88 != 0) {
      LOCK();
      *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      UNLOCK();
    }
    lVar9 = FUN_141801fe0(local_d0,&local_90);
    lVar13 = *param_4;
    if ((*(int *)(lVar13 + 0xa8) != 0) && (*(longlong **)(lVar13 + 0xa0) != (longlong *)0x0)) {
      cVar6 = (**(code **)(**(longlong **)(lVar13 + 0xa0) + 0x18))();
      if (cVar6 != '\0') {
        if (*(int *)(lVar13 + 0xa8) == 0) {
          plVar11 = (longlong *)0x0;
        }
        else {
          plVar11 = *(longlong **)(lVar13 + 0xa0);
        }
        uVar7 = (**(code **)(*plVar11 + 0x38))();
        *(undefined1 *)(lVar13 + 0x98) = uVar7;
      }
    }
    local_b0 = CONCAT44(DAT_1464aa6c4,DAT_1464aa6c0);
    uStack_a8 = CONCAT44(DAT_1464aa6cc,DAT_1464aa6c8);
    local_a0 = DAT_1464aa6c0 * 0.6;
    local_9c = DAT_1464aa6c4 * 0.6;
    local_98 = DAT_1464aa6c8 * 0.6;
    local_94 = DAT_1464aa6cc * 0.6;
    local_c0 = DAT_1464aa6c0;
    local_bc = DAT_1464aa6c4;
    local_b8 = DAT_1464aa6c8;
    local_b4 = DAT_1464aa6cc;
    FUN_14184f6c0(*param_4,param_2,local_e0,local_e8,lVar9,0,&local_c0,
                  *(undefined1 *)(lVar13 + 0x98));
    iVar14 = *(int *)(lVar9 + 0xa30);
    lVar13 = *(longlong *)(lVar9 + 0xa28);
    local_f8 = (undefined8 *)0x0;
    local_f0 = CONCAT44(local_f0._4_4_,iVar14);
    if (iVar14 == 0) {
      local_f0 = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_f8,iVar14,0);
      lVar13 = lVar13 - (longlong)local_f8;
      puVar12 = local_f8;
      do {
        *puVar12 = *(undefined8 *)(lVar13 + (longlong)puVar12);
        lVar9 = *(longlong *)(lVar13 + 8 + (longlong)puVar12);
        puVar12[1] = lVar9;
        if (lVar9 != 0) {
          LOCK();
          *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
          UNLOCK();
        }
        puVar12 = puVar12 + 2;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    ppuVar1 = (undefined8 **)(param_1 + 8);
    if (ppuVar1 != &local_f8) {
      iVar14 = *(int *)(param_1 + 0x10);
      puVar12 = *ppuVar1;
      if (iVar14 != 0) {
        plVar11 = puVar12 + 1;
        do {
          plVar5 = (longlong *)*plVar11;
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar5 + 1;
            lVar13 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar13 == 1) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar3 = (int *)((longlong)plVar5 + 0xc);
              iVar4 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          plVar11 = plVar11 + 2;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
        puVar12 = *ppuVar1;
      }
      if (puVar12 != (undefined8 *)0x0) {
        FMemory::Free();
      }
      *ppuVar1 = local_f8;
      *(undefined4 *)(param_1 + 0x10) = (undefined4)local_f0;
      *(undefined4 *)(param_1 + 0x14) = local_f0._4_4_;
      local_f0 = 0;
      local_f8 = (undefined8 *)0x0;
      param_4 = local_d8;
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_f8);
    lVar13 = local_d0;
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))(*(longlong **)(param_1 + 0x18),local_d0);
    *(undefined8 *)(lVar13 + 0x28) = *(undefined8 *)(param_1 + 0x2c);
    local_80 = lVar13;
    local_78 = FHdrImageWrapper::GetHeight(local_c8);
    local_70 = *(undefined8 *)(param_1 + 0x18);
    local_68 = *(undefined1 *)(param_1 + 0x2b);
    (**(code **)(**(longlong **)(DAT_1469f4590 + 0x18) + 400))
              (*(longlong **)(DAT_1469f4590 + 0x18),&local_80,param_8);
  }
  LeaveCriticalSection(lpCriticalSection);
  plVar11 = (longlong *)param_4[1];
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar11 + 1;
    lVar13 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar3 = (int *)((longlong)plVar11 + 0xc);
      iVar14 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  return;
}



// FUNCTION 1420f39b0 FUN_1420f39b0 body=724 status=ok
// SIG undefined FUN_1420f39b0(void)

void FUN_1420f39b0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  float param_5,undefined8 param_6,undefined4 param_7,undefined1 param_8)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 in_stack_fffffffffffffe80;
  undefined4 uVar8;
  undefined8 local_158;
  float local_150;
  undefined8 local_14c;
  float local_144;
  float local_140;
  float fStack_13c;
  float fStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  float fStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  float fStack_118;
  undefined4 local_114;
  undefined4 uStack_110;
  uint local_10c;
  undefined8 local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined1 local_98 [56];
  longlong *local_60;
  
  uVar8 = (undefined4)((ulonglong)in_stack_fffffffffffffe80 >> 0x20);
  local_10c = local_10c & 0xfffffffe;
  local_114 = 0;
  uStack_110 = 0;
  uStack_134 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  local_158 = 0;
  local_14c = 0;
  local_140 = (float)param_6 * (1.0 / param_5);
  fStack_13c = param_6._4_4_ * (1.0 / param_5);
  local_144 = fStack_13c * param_5;
  local_150 = local_140 * param_5;
  fStack_138 = param_5;
  fStack_124 = param_5;
  uStack_120 = 0;
  uStack_11c = 0;
  fStack_118 = param_5;
  FSlateRotatedRect::ToBoundingRect(&local_158,&local_f8);
  plVar4 = (longlong *)param_4[1];
  local_108 = *param_4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_3[1];
  uVar6 = *param_3;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  FPaintArgs::FPaintArgs
            (local_98,local_108,uVar6,DAT_1468b5d88,DAT_1468b5a78,CONCAT44(uVar8,param_7));
  local_e8 = local_f8;
  uStack_e0 = uStack_f0;
  local_d8 = CONCAT44(fStack_13c,local_140);
  uStack_d0 = CONCAT44(uStack_134,fStack_138);
  local_c8 = CONCAT44(uStack_12c,uStack_130);
  uStack_c0 = CONCAT44(fStack_124,uStack_128);
  local_a8 = CONCAT44(local_10c,uStack_110);
  local_b8 = uStack_120;
  uStack_b4 = uStack_11c;
  fStack_b0 = fStack_118;
  uStack_ac = local_114;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_100 = plVar4;
  FUN_1420f3570(param_1,local_98,param_2,&local_108,&local_d8,&local_e8,param_7,param_8,param_5);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_60 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (local_60 != (longlong *)0x0)) {
      (**(code **)(*local_60 + 8))(local_60,1);
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  plVar4 = (longlong *)param_4[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  return;
}



// FUNCTION 1420f3c90 Drop_Implementation body=28 status=ok
// SIG undefined Drop_Implementation(void)

void UDragDropOperation::Drop_Implementation(longlong param_1)

{
  longlong local_res8 [4];
  
  local_res8[0] = param_1;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x58,local_res8);
  return;
}



// FUNCTION 1420f3cb0 FUN_1420f3cb0 body=349 status=ok
// SIG undefined FUN_1420f3cb0(void)

void FUN_1420f3cb0(longlong param_1,int param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 local_28;
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  lVar5 = *(longlong *)(param_1 + 0x308);
  if (*(longlong *)(param_1 + 0x308) == 0) {
    lVar5 = param_1 + 0x218;
  }
  if (*(longlong *)(lVar5 + 0x40 + (longlong)param_2 * 0x50) == 0) {
    FUN_14168dc80();
    uVar4 = DAT_146ae7950;
    uVar6 = FUN_14168dc80();
    plVar7 = (longlong *)FModuleManager::GetModule(uVar6,uVar4);
    puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x58))(plVar7,local_18,param_3);
    local_20 = (longlong *)puVar8[1];
    local_28 = *puVar8;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
    }
    lVar5 = *(longlong *)(param_1 + 0x308);
    if (*(longlong *)(param_1 + 0x308) == 0) {
      lVar5 = param_1 + 0x218;
    }
    puVar8 = (undefined8 *)(lVar5 + 0x40 + (longlong)param_2 * 0x50);
    if (puVar8 != &local_28) {
      *puVar8 = local_28;
      local_28 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(puVar8 + 1,&local_20);
    }
    plVar7 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_10 + 1;
      lVar5 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    }
  }
  return;
}



// FUNCTION 1420f3e10 EndDragDrop body=59 status=ok
// SIG undefined EndDragDrop(void)

undefined8 UWidgetBlueprintLibrary::EndDragDrop(undefined8 param_1,longlong param_2)

{
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) | 0x80;
  FUN_140459130(param_2);
  FUN_140438260(param_1,param_2);
  return param_1;
}



// FUNCTION 1420f3e50 FUN_1420f3e50 body=44 status=ok
// SIG undefined FUN_1420f3e50(void)

void FUN_1420f3e50(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x930))();
  FUN_14233a670(param_1,param_2);
  return;
}



// FUNCTION 1420f3e80 EqualEqual_SlateBrush body=261 status=ok
// SIG undefined EqualEqual_SlateBrush(void)

ulonglong USlateBlueprintLibrary::EqualEqual_SlateBrush(longlong param_1,longlong param_2)

{
  ulonglong in_RAX;
  
  if ((((*(float *)(param_2 + 8) == *(float *)(param_1 + 8)) &&
       (*(float *)(param_2 + 0xc) == *(float *)(param_1 + 0xc))) &&
      (in_RAX = 0, *(char *)(param_1 + 0x6c) == *(char *)(param_2 + 0x6c))) &&
     (((*(float *)(param_2 + 0x10) == *(float *)(param_1 + 0x10) &&
       (*(float *)(param_2 + 0x18) == *(float *)(param_1 + 0x18))) &&
      ((*(float *)(param_2 + 0x14) == *(float *)(param_1 + 0x14) &&
       (*(float *)(param_2 + 0x1c) == *(float *)(param_1 + 0x1c))))))) {
    in_RAX = FSlateColor::operator==(param_1 + 0x20,param_2 + 0x20);
    if (((((char)in_RAX != '\0') &&
         (in_RAX = 0, *(char *)(param_1 + 0x6d) == *(char *)(param_2 + 0x6d))) &&
        ((in_RAX = 0, *(char *)(param_1 + 0x6e) == *(char *)(param_2 + 0x6e) &&
         ((((in_RAX = *(ulonglong *)(param_2 + 0x48), *(ulonglong *)(param_1 + 0x48) == in_RAX &&
            (in_RAX = *(ulonglong *)(param_2 + 0x50), *(ulonglong *)(param_1 + 0x50) == in_RAX)) &&
           (in_RAX = 0, ((*(byte *)(param_1 + 0x80) ^ *(byte *)(param_2 + 0x80)) & 1) == 0)) &&
          ((*(float *)(param_2 + 0x58) == *(float *)(param_1 + 0x58) &&
           (*(float *)(param_2 + 0x5c) == *(float *)(param_1 + 0x5c))))))))) &&
       ((*(float *)(param_2 + 0x60) == *(float *)(param_1 + 0x60) &&
        (*(float *)(param_2 + 100) == *(float *)(param_1 + 100))))) {
      return 1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1420f3f90 Evaluate body=940 status=ok
// SIG undefined Evaluate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FMovieScene2DTransformSectionTemplate::Evaluate
               (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
               longlong param_5)

{
  undefined1 uVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 ***pppuVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined1 auStack_f8 [32];
  uint local_d8 [2];
  longlong local_d0;
  undefined8 local_c8;
  uint local_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint local_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  undefined8 **local_a0 [4];
  byte bStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_d0 = param_5;
  lVar4 = 0x10;
  if (*(uint *)(param_3 + 0x24) == 0x80000000) {
    lVar7 = lVar4;
    if (*(int *)(param_3 + 0x20) != 0) {
      lVar7 = 4;
    }
    uVar6 = *(ulonglong *)(lVar7 + param_3);
  }
  else {
    local_d8[1] = 0;
    uVar6 = (ulonglong)*(uint *)(param_3 + 0x24);
  }
  uVar2 = *(uint *)(param_1 + 0x4ac);
  uStack_a4 = 0;
  local_d8[0] = 0;
  uVar8 = 0;
  uVar9 = 0;
  if ((uVar2 & 1) != 0) {
    cVar3 = FMovieSceneFloatChannel::Evaluate(param_1 + 0x48,uVar6,local_d8);
    uVar8 = 0;
    uVar9 = 0;
    if (cVar3 != '\0') {
      uVar8 = 1;
      local_c0 = local_d8[0];
      uVar9 = 1;
      uStack_a4 = 1;
    }
  }
  local_d8[0] = 0;
  if ((uVar2 >> 1 & 1) != 0) {
    cVar3 = FMovieSceneFloatChannel::Evaluate(param_1 + 0xe8,uVar6,local_d8);
    if (cVar3 != '\0') {
      uVar8 = uVar9 | 2;
      uStack_bc = local_d8[0];
      uStack_a4 = uVar8;
    }
  }
  local_d8[0] = 0;
  if ((uVar2 >> 3 & 1) != 0) {
    cVar3 = FMovieSceneFloatChannel::Evaluate(param_1 + 0x228,uVar6,local_d8);
    if (cVar3 != '\0') {
      uVar8 = uVar8 | 4;
      uStack_b8 = local_d8[0];
      uStack_a4 = uVar8;
    }
  }
  local_d8[0] = 0;
  if ((uVar2 >> 4 & 1) != 0) {
    cVar3 = FMovieSceneFloatChannel::Evaluate(param_1 + 0x2c8,uVar6,local_d8);
    if (cVar3 != '\0') {
      uVar8 = uVar8 | 8;
      uStack_b4 = local_d8[0];
      uStack_a4 = uVar8;
    }
  }
  local_d8[0] = 0;
  if ((uVar2 >> 5 & 1) != 0) {
    cVar3 = FMovieSceneFloatChannel::Evaluate(param_1 + 0x368,uVar6,local_d8);
    if (cVar3 != '\0') {
      uVar8 = uVar8 | 0x10;
      local_b0 = local_d8[0];
      uStack_a4 = uVar8;
    }
  }
  local_d8[0] = 0;
  if ((uVar2 >> 6 & 1) != 0) {
    cVar3 = FMovieSceneFloatChannel::Evaluate(param_1 + 0x408,uVar6,local_d8);
    if (cVar3 != '\0') {
      uVar8 = uVar8 | 0x20;
      uStack_ac = local_d8[0];
      uStack_a4 = uVar8;
    }
  }
  local_d8[0] = 0;
  if ((uVar2 >> 2 & 1) != 0) {
    cVar3 = FMovieSceneFloatChannel::Evaluate(param_1 + 0x188,uVar6,local_d8);
    if (cVar3 != '\0') {
      uVar8 = uVar8 | 0x40;
      uStack_a8 = local_d8[0];
      uStack_a4 = uVar8;
    }
  }
  lVar7 = local_d0;
  if (uVar8 != 0) {
    FUN_1420c5800(param_1,&local_c8,local_d0 + 0x60);
    uVar2 = *(uint *)(param_3 + 0x24);
    if (uVar2 == 0x80000000) {
      if (*(int *)(param_3 + 0x20) != 0) {
        lVar4 = 4;
      }
      uVar6 = *(ulonglong *)(lVar4 + param_3);
    }
    else {
      local_d8[1] = 0;
      uVar6 = (ulonglong)uVar2;
      local_d8[0] = uVar2;
    }
    uVar10 = FMovieSceneEvalTemplate::EvaluateEasing(param_1,uVar6);
    uVar1 = *(undefined1 *)(param_1 + 0x4a8);
    bStack_80 = bStack_80 & 0xfc;
    local_a0[0] = (undefined8 **)FMemory::Malloc(0x28);
    pppuVar5 = local_a0;
    if ((bStack_80 & 2) == 0) {
      pppuVar5 = (undefined8 ***)local_a0[0];
    }
    bStack_80 = bStack_80 | 1;
    pppuVar5[1] = (undefined8 **)CONCAT44(uStack_bc,local_c0);
    pppuVar5[2] = (undefined8 **)CONCAT44(uStack_b4,uStack_b8);
    *pppuVar5 = (undefined8 **)&PTR_FUN_144fb1a48;
    *(uint *)(pppuVar5 + 3) = local_b0;
    *(uint *)((longlong)pppuVar5 + 0x1c) = uStack_ac;
    *(uint *)(pppuVar5 + 4) = uStack_a8;
    *(uint *)((longlong)pppuVar5 + 0x24) = uStack_a4;
    local_68 = *(undefined4 *)(lVar7 + 0x170);
    local_78 = *(undefined4 *)(lVar7 + 0x124);
    uStack_74 = *(undefined4 *)(lVar7 + 0x128);
    uStack_70 = *(undefined4 *)(lVar7 + 300);
    uStack_6c = *(undefined4 *)(lVar7 + 0x130);
    local_64 = uVar10;
    local_60 = uVar1;
    TSet<TTuple<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>,FDefaultSetAllocator>
    ::FindId(lVar7 + 0xb0,local_d8,lVar7 + 0x110);
    if ((local_d8[0] == 0xffffffff) ||
       (lVar4 = (longlong)(int)local_d8[0] * 0x30 + *(longlong *)(lVar7 + 0xb0), lVar4 == 0)) {
      local_d0 = lVar7 + 0x110;
      FUN_141fc7cb0(lVar7 + 0xb0,local_d8,&local_d0,0);
      lVar4 = (longlong)(int)local_d8[0] * 0x30 + *(longlong *)(lVar7 + 0xb0);
    }
    FUN_1420c1a30(lVar4 + 0x18,local_c8,local_a0);
    if ((bStack_80 & 1) != 0) {
      pppuVar5 = local_a0;
      if ((bStack_80 & 2) == 0) {
        pppuVar5 = (undefined8 ***)local_a0[0];
      }
      bStack_80 = bStack_80 & 0xfe;
      (*(code *)**pppuVar5)(pppuVar5,0);
      if ((bStack_80 & 2) == 0) {
        FMemory::Free(local_a0[0]);
      }
    }
  }
  return;
}



// FUNCTION 1420f4340 Evaluate body=669 status=ok
// SIG undefined Evaluate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FMovieSceneMarginSectionTemplate::Evaluate
               (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
               longlong param_5)

{
  undefined1 uVar1;
  uint uVar2;
  undefined8 **ppuVar3;
  char cVar4;
  longlong lVar5;
  undefined8 ***pppuVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined1 auStack_e8 [32];
  undefined4 local_c8 [2];
  uint local_c0 [2];
  longlong local_b8;
  undefined8 local_b0;
  undefined8 **local_a8 [2];
  byte bStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  uVar9 = *(uint *)(param_3 + 0x24);
  lVar5 = 0x10;
  if (uVar9 == 0x80000000) {
    lVar8 = lVar5;
    if (*(int *)(param_3 + 0x20) != 0) {
      lVar8 = 4;
    }
    uVar7 = *(ulonglong *)(lVar8 + param_3);
  }
  else {
    local_c0[1] = 0;
    uVar7 = (ulonglong)uVar9;
    local_c0[0] = uVar9;
  }
  local_c8[0] = 0;
  cVar4 = FMovieSceneFloatChannel::Evaluate(param_1 + 0xe8,uVar7,local_c8);
  bVar10 = cVar4 != '\0';
  if (bVar10) {
    local_70 = local_c8[0];
  }
  uVar9 = (uint)bVar10;
  cVar4 = FMovieSceneFloatChannel::Evaluate(param_1 + 0x48,uVar7,local_c8);
  if (cVar4 != '\0') {
    uVar9 = bVar10 | 2;
    uStack_6c = local_c8[0];
  }
  cVar4 = FMovieSceneFloatChannel::Evaluate(param_1 + 0x188,uVar7,local_c8);
  if (cVar4 != '\0') {
    uVar9 = uVar9 | 4;
    uStack_68 = local_c8[0];
  }
  cVar4 = FMovieSceneFloatChannel::Evaluate(param_1 + 0x228,uVar7,local_c8);
  if (cVar4 != '\0') {
    uVar9 = uVar9 | 8;
    uStack_64 = local_c8[0];
  }
  if (uVar9 != 0) {
    FUN_1420c5630(param_1,&local_b0,param_5 + 0x60);
    uVar2 = *(uint *)(param_3 + 0x24);
    if (uVar2 == 0x80000000) {
      if (*(int *)(param_3 + 0x20) != 0) {
        lVar5 = 4;
      }
      uVar7 = *(ulonglong *)(lVar5 + param_3);
    }
    else {
      local_c0[1] = 0;
      uVar7 = (ulonglong)uVar2;
      local_c0[0] = uVar2;
    }
    uVar11 = FMovieSceneEvalTemplate::EvaluateEasing(param_1,uVar7);
    uVar1 = *(undefined1 *)(param_1 + 0x2c8);
    bStack_98 = bStack_98 & 0xfc;
    local_a8[0] = (undefined8 **)FMemory::Malloc(0x20);
    ppuVar3 = (undefined8 **)CONCAT44(uStack_64,uStack_68);
    pppuVar6 = local_a8;
    if ((bStack_98 & 2) == 0) {
      pppuVar6 = (undefined8 ***)local_a8[0];
    }
    bStack_98 = bStack_98 | 1;
    pppuVar6[1] = (undefined8 **)CONCAT44(uStack_6c,local_70);
    pppuVar6[2] = ppuVar3;
    *(uint *)(pppuVar6 + 3) = uVar9;
    *pppuVar6 = (undefined8 **)&PTR_FUN_144fb1a88;
    local_90 = *(undefined4 *)(param_5 + 0x124);
    uStack_8c = *(undefined4 *)(param_5 + 0x128);
    uStack_88 = *(undefined4 *)(param_5 + 300);
    uStack_84 = *(undefined4 *)(param_5 + 0x130);
    local_80 = *(undefined4 *)(param_5 + 0x170);
    local_7c = uVar11;
    local_78 = uVar1;
    TSet<TTuple<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>,FDefaultSetAllocator>
    ::FindId(param_5 + 0xb0,local_c0,param_5 + 0x110);
    if ((local_c0[0] == 0xffffffff) ||
       (lVar5 = (longlong)(int)local_c0[0] * 0x30 + *(longlong *)(param_5 + 0xb0), lVar5 == 0)) {
      local_b8 = param_5 + 0x110;
      FUN_141fc7cb0(param_5 + 0xb0,local_c0,&local_b8,0);
      lVar5 = (longlong)(int)local_c0[0] * 0x30 + *(longlong *)(param_5 + 0xb0);
    }
    FUN_1420c1830(lVar5 + 0x18,local_b0,local_a8);
    if ((bStack_98 & 1) != 0) {
      pppuVar6 = local_a8;
      if ((bStack_98 & 2) == 0) {
        pppuVar6 = (undefined8 ***)local_a8[0];
      }
      bStack_98 = bStack_98 & 0xfe;
      (*(code *)**pppuVar6)(pppuVar6,0);
      if ((bStack_98 & 2) == 0) {
        FMemory::Free(local_a8[0]);
      }
    }
  }
  return;
}



// FUNCTION 1420f45e0 FUN_1420f45e0 body=786 status=ok
// SIG undefined FUN_1420f45e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1420f45e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  int iVar1;
  void *_Src;
  byte bVar2;
  undefined8 ***pppuVar3;
  longlong lVar4;
  undefined1 auStack_298 [32];
  undefined8 *local_278;
  undefined8 *local_270;
  int local_268;
  undefined4 local_264;
  undefined8 **local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined8 local_230;
  undefined8 uStack_228;
  byte local_220;
  undefined **local_218;
  undefined8 *local_210;
  undefined8 *local_208;
  undefined8 local_200;
  undefined1 local_1f8 [32];
  longlong local_1d8;
  undefined8 local_1d0;
  longlong local_198;
  undefined8 local_190;
  longlong local_158;
  undefined8 local_150;
  longlong local_108;
  undefined8 local_100;
  longlong local_f8;
  longlong lStack_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined1 local_d4 [68];
  undefined8 **local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  TMovieSceneAnimTypeIDContainer<TArray<FName,FDefaultAllocator>_>::GetAnimTypeID
            (&DAT_146ae7830,&local_278,param_1 + 0x60);
  local_268 = *(int *)(param_1 + 0x68);
  lVar4 = (longlong)local_268;
  local_208 = (undefined8 **)0x0;
  _Src = *(void **)(param_1 + 0x60);
  local_270 = (undefined8 **)0x0;
  if (local_268 == 0) {
    local_264 = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_270,local_268,0);
    local_208 = local_270;
    _guard_xfg_dispatch_icall_nop(local_270,_Src,lVar4 << 3);
  }
  local_218 = &PTR_FUN_144f9ee10;
  local_210 = local_278;
  local_1d8 = 0;
  local_1d0 = 0;
  local_198 = 0;
  local_190 = 0;
  local_158 = 0;
  local_150 = 0;
  local_108 = 0;
  local_100 = 0;
  local_200._0_4_ = local_268;
  local_200._4_4_ = local_264;
  FUN_141fea6d0(param_1,param_3,local_1f8);
  local_220 = local_220 & 0xfc;
  local_260 = (undefined8 **)FMemory::Malloc(0x120,8);
  pppuVar3 = &local_260;
  if ((local_220 & 2) == 0) {
    pppuVar3 = (undefined8 ***)local_260;
  }
  local_220 = local_220 | 1;
  *pppuVar3 = (undefined8 **)&PTR_FUN_144f9ee10;
  pppuVar3[1] = (undefined8 **)local_210;
  pppuVar3[2] = (undefined8 **)0x0;
  pppuVar3[2] = (undefined8 **)local_208;
  local_208 = (undefined8 *)0x0;
  *(int *)(pppuVar3 + 3) = (int)local_200;
  *(undefined4 *)((longlong)pppuVar3 + 0x1c) = local_200._4_4_;
  local_200 = 0;
  FUN_141fcdf20(pppuVar3 + 4,local_1f8);
  local_f8 = param_5[0x22];
  lStack_f0 = param_5[0x23];
  local_e8 = (undefined4)param_5[0x24];
  local_e4 = *(undefined4 *)((longlong)param_5 + 0x124);
  uStack_e0 = (undefined4)param_5[0x25];
  uStack_dc = *(undefined4 *)((longlong)param_5 + 300);
  uStack_d8 = (undefined4)param_5[0x26];
  FMovieSceneContext::FMovieSceneContext(local_d4,(longlong)param_5 + 0x134);
  bVar2 = local_50 & 0xfe;
  local_50 = bVar2 | 2;
  if ((local_220 & 1) != 0) {
    local_220 = local_220 & 0xfe;
    local_90 = local_260;
    uStack_88 = uStack_258;
    local_50 = (local_220 ^ bVar2) & 2 ^ bVar2 | 1;
    local_80 = local_250;
    uStack_78 = uStack_248;
    local_70 = local_240;
    uStack_6c = uStack_23c;
    uStack_68 = uStack_238;
    uStack_64 = uStack_234;
    local_60 = local_230;
    uStack_58 = uStack_228;
  }
  iVar1 = (int)param_5[1];
  *(int *)(param_5 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_5 + 0xc) < iVar1 + 1) {
    TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(param_5,iVar1);
  }
  FMovieSceneExecutionTokens::FEntry::FEntry((longlong)iVar1 * 0xb0 + *param_5,&local_f8);
  if ((local_50 & 1) != 0) {
    pppuVar3 = &local_90;
    if ((local_50 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_90;
    }
    local_50 = local_50 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_50 & 2) == 0) {
      FMemory::Free(local_90);
    }
  }
  if ((local_220 & 1) != 0) {
    pppuVar3 = &local_260;
    if ((local_220 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_260;
    }
    local_220 = local_220 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_220 & 2) == 0) {
      FMemory::Free(local_260);
    }
  }
  if (local_108 != 0) {
    FMemory::Free();
  }
  if (local_158 != 0) {
    FMemory::Free();
  }
  if (local_198 != 0) {
    FMemory::Free();
  }
  if (local_1d8 != 0) {
    FMemory::Free();
  }
  if (local_208 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1420f4900 Execute body=151 status=ok
// SIG undefined Execute(void)

undefined8 *
TBaseFunctorDelegateInstance<TSharedPtr<SWidget,0>___cdecl(enum_EUINavigation),<lambda_edd65cb384c6d640cb9a4987c478fe46>_>
::Execute(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 local_18 [8];
  longlong local_10;
  
  local_10 = 0;
  local_18[0] = param_3;
  plVar1 = (longlong *)FWeakObjectPtr::Get(param_1 + 8);
  uVar2 = FUN_14178ac60(plVar1,*(undefined8 *)(param_1 + 0x10));
  (**(code **)(*plVar1 + 0x208))(plVar1,uVar2,local_18);
  if (local_10 != 0) {
    FUN_1420f9830(local_10,param_2);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1420f49a0 Execute body=88 status=ok
// SIG undefined Execute(void)

undefined8 *
TBaseFunctorDelegateInstance<FString___cdecl(UObject_*),<lambda_1ba63f25c5510ee60f541b427f7d1959>_>
::Execute(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  if (param_3 != 0) {
    FString::PrintfImpl(param_2,L"0x%08x");
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"nullptr",0x10);
  return param_2;
}



// FUNCTION 1420f4a00 FUN_1420f4a00 body=276 status=ok
// SIG undefined FUN_1420f4a00(void)

undefined8 * FUN_1420f4a00(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 local_38 [8];
  longlong *local_30;
  code *local_20;
  undefined8 uStack_18;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar8 = iVar4 == 0;
    if (bVar8) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar6 = plVar7, !bVar8) {
      LOCK();
      bVar8 = iVar4 == (int)plVar2[1];
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar6 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar7 = *(longlong **)(param_1 + 8);
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar8 = iVar4 == 0;
      if (bVar8) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  local_20 = *(code **)(param_1 + 0x18);
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)(*local_20)((longlong)(int)uStack_18 + (longlong)plVar7,local_38);
  *param_2 = *puVar5;
  lVar3 = puVar5[1];
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1420f4b40 Execute body=112 status=ok
// SIG undefined Execute(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
TBaseUFunctionDelegateInstance<UObject,FLinearColor___cdecl(void)>::Execute
          (longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  local_18 = 1;
  plVar1 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x208))(plVar1,*(undefined8 *)(param_1 + 8),&local_28);
  *param_2 = CONCAT44(uStack_24,local_28);
  param_2[1] = CONCAT44(uStack_1c,uStack_20);
  return param_2;
}



// FUNCTION 1420f4bb0 FUN_1420f4bb0 body=430 status=ok
// SIG undefined FUN_1420f4bb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1420f4bb0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined **local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_110;
  undefined8 local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  longlong *plStack_c8;
  byte local_c0;
  undefined1 local_b8 [136];
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_c0 = local_c0 & 0xfc;
  local_138 = 0x4200000042000000;
  uStack_130 = 0;
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  local_120 = _DAT_1464aa6c0;
  uStack_118 = _DAT_1464aa6c8;
  local_140 = &PTR__scalar_deleting_destructor__143f489a8;
  local_e8 = (undefined4)DAT_1468b5d88;
  local_148 = DAT_1468b5d88;
  uVar5 = local_148;
  local_148._4_4_ = (undefined4)((ulonglong)DAT_1468b5d88 >> 0x20);
  local_dc = local_148._4_4_;
  local_e4 = local_148._4_4_;
  local_d0 = 0;
  plStack_c8 = (longlong *)0x0;
  local_30 = 0;
  local_128 = 0;
  local_110 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_d8 = 0;
  local_d4 = 3;
  local_148 = uVar5;
  local_e0 = local_e8;
  FUN_14080bc50(local_b8,&local_140);
  plVar6 = plStack_c8;
  if (plStack_c8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_c8 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_c8)(plStack_c8);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_c8 + 8))(plStack_c8,1);
      }
    }
  }
  plVar6 = plStack_100;
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_100 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_100)(plStack_100);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_100 + 8))(plStack_100,1);
      }
    }
  }
  local_30 = '\x01';
  plVar6 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x18);
  (**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(param_1 + 8),local_b8);
  FUN_14080bc50(param_2,local_b8);
  if (local_30 != '\0') {
    FSlateBrush::~FSlateBrush(local_b8);
  }
  return param_2;
}



// FUNCTION 1420f4d60 FUN_1420f4d60 body=262 status=ok
// SIG undefined FUN_1420f4d60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_1420f4d60(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  undefined8 local_28;
  longlong *plStack_20;
  char local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_68 = 0x3f800000;
  uStack_60 = 0x3f8000003f800000;
  local_40 = 0x3f800000;
  uStack_38 = 0x3f8000003f800000;
  local_30 = 0;
  local_18 = '\x01';
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  plVar5 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x18);
  (**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(param_1 + 8),&local_40);
  plVar5 = plStack_20;
  *param_2 = (undefined4)local_40;
  param_2[1] = local_40._4_4_;
  param_2[2] = (undefined4)uStack_38;
  param_2[3] = uStack_38._4_4_;
  *(undefined1 *)(param_2 + 4) = local_30;
  *(undefined8 *)(param_2 + 6) = local_28;
  *(longlong **)(param_2 + 8) = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  if ((local_18 != '\0') && (plStack_20 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_20)(plStack_20);
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
  return param_2;
}



// FUNCTION 1420f4e70 Execute body=261 status=ok
// SIG undefined Execute(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TBaseUFunctionDelegateInstance<UObject,FText___cdecl(void)>::Execute
          (longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_28 = 0;
  uVar4 = FText::FText(local_58);
  FText::FText(local_40,uVar4);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_50 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  local_28 = '\x01';
  plVar5 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x18);
  (**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(param_1 + 8),local_40);
  FText::FText(param_2,local_40);
  if ((local_28 != '\0') && (local_38 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_38 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_38 + 8))(local_38,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1420f4f80 FUN_1420f4f80 body=58 status=ok
// SIG undefined FUN_1420f4f80(void)

undefined1 FUN_1420f4f80(longlong param_1)

{
  longlong *plVar1;
  undefined2 local_res8 [16];
  
  local_res8[0] = 0x100;
  plVar1 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x208))(plVar1,*(undefined8 *)(param_1 + 8),local_res8);
  return (undefined1)local_res8[0];
}



// FUNCTION 1420f4fc0 Execute body=94 status=ok
// SIG undefined Execute(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 TBaseUFunctionDelegateInstance<UObject,float___cdecl(void)>::Execute(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  local_14 = 1;
  local_18 = 0;
  plVar1 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x208))(plVar1,*(undefined8 *)(param_1 + 8),&local_18);
  return local_18;
}



// FUNCTION 1420f5020 FUN_1420f5020 body=221 status=ok
// SIG undefined FUN_1420f5020(void)

undefined4 * FUN_1420f5020(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_30 [32];
  longlong *local_10;
  
  uVar9 = FWeakObjectPtr::Get(param_1 + 8);
  local_58 = *(undefined4 *)(param_1 + 0x18);
  uStack_54 = *(undefined4 *)(param_1 + 0x1c);
  uStack_50 = *(undefined4 *)(param_1 + 0x20);
  uStack_4c = *(undefined4 *)(param_1 + 0x24);
  local_48 = *(undefined1 *)(param_1 + 0x28);
  pcVar4 = *(code **)(param_1 + 0x10);
  local_40 = 0;
  local_38 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_40,param_1 + 0x30);
  puVar10 = (undefined4 *)(*pcVar4)(uVar9,local_30,&local_58);
  uVar6 = puVar10[1];
  uVar7 = puVar10[2];
  uVar8 = puVar10[3];
  *param_2 = *puVar10;
  param_2[1] = uVar6;
  param_2[2] = uVar7;
  param_2[3] = uVar8;
  *(undefined1 *)(param_2 + 4) = *(undefined1 *)(puVar10 + 4);
  *(undefined8 *)(param_2 + 6) = *(undefined8 *)(puVar10 + 6);
  lVar5 = *(longlong *)(puVar10 + 8);
  *(longlong *)(param_2 + 8) = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  }
  return param_2;
}



// FUNCTION 1420f5100 Execute body=161 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<1,UBorder,FSlateBrush_const_*___cdecl(void),TAttribute<FSlateBrush>_>
     ::Execute(longlong param_1)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 local_a8 [136];
  undefined1 local_20;
  longlong local_18;
  undefined4 local_10;
  
  uVar3 = FWeakObjectPtr::Get(param_1 + 8);
  pcVar1 = *(code **)(param_1 + 0x10);
  FUN_14080bc50(local_a8,param_1 + 0x18);
  local_20 = *(undefined1 *)(param_1 + 0xa0);
  local_18 = 0;
  local_10 = 0;
  if ((((longlong *)(param_1 + 0xa8) != &local_18) && (*(int *)(param_1 + 0xb0) != 0)) &&
     (plVar2 = *(longlong **)(param_1 + 0xa8), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_18);
  }
  (*pcVar1)(uVar3,local_a8);
  return;
}



// FUNCTION 1420f51b0 FUN_1420f51b0 body=149 status=ok
// SIG undefined FUN_1420f51b0(void)

undefined8 * FUN_1420f51b0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar5 = FWeakObjectPtr::Get(param_1 + 8);
  puVar6 = (undefined8 *)(**(code **)(param_1 + 0x10))(uVar5,local_18,param_3);
  *param_2 = *puVar6;
  lVar4 = puVar6[1];
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
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
  }
  return param_2;
}



// FUNCTION 1420f5250 FUN_1420f5250 body=242 status=ok
// SIG undefined FUN_1420f5250(void)

undefined8 * FUN_1420f5250(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  code *pcVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 local_28;
  longlong local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar7 = FWeakObjectPtr::Get(param_1 + 8);
  local_28 = *param_3;
  pcVar4 = *(code **)(param_1 + 0x10);
  local_20 = param_3[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  puVar8 = (undefined8 *)(*pcVar4)(uVar7,local_18,&local_28);
  *param_2 = *puVar8;
  lVar5 = puVar8[1];
  param_2[1] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_10 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)local_10 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  plVar6 = (longlong *)param_3[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1420f5350 Execute body=163 status=ok
// SIG undefined Execute(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 *
TBaseUObjectMethodDelegateInstance<1,UProgressBar,TOptional<float>___cdecl(void),TAttribute<float>_>
::Execute(longlong param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  uVar2 = FWeakObjectPtr::Get(param_1 + 8);
  local_48 = *(undefined4 *)(param_1 + 0x18);
  pcVar1 = *(code **)(param_1 + 0x10);
  local_44 = *(undefined1 *)(param_1 + 0x1c);
  local_40 = 0;
  local_38 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_40,param_1 + 0x20);
  puVar3 = (undefined4 *)(*pcVar1)(uVar2,local_30,&local_48);
  *(undefined1 *)(param_2 + 1) = 0;
  if (*(char *)(puVar3 + 1) != '\0') {
    *param_2 = *puVar3;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  return param_2;
}



// FUNCTION 1420f5400 Execute body=80 status=ok
// SIG undefined Execute(void)

undefined8 *
TBaseUObjectMethodDelegateInstance<1,UUserWidget,FAnchors___cdecl(void)>::Execute
          (longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_18 [16];
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 8);
  puVar3 = (undefined8 *)
           (**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar2,local_18);
  uVar1 = puVar3[1];
  *param_2 = *puVar3;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1420f5450 Execute body=82 status=ok
// SIG undefined Execute(void)

undefined8 *
TBaseUObjectMethodDelegateInstance<1,UUserWidget,FVector2D___cdecl(void)>::Execute
          (longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  puVar2 = (undefined8 *)
           (**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar1,local_res8);
  *param_2 = *puVar2;
  return param_2;
}



// FUNCTION 1420f54b0 Execute body=156 status=ok
// SIG undefined Execute(void)

undefined1 *
TBaseUObjectMethodDelegateInstance<1,UWidget,EVisibility___cdecl(void),TAttribute<enum_ESlateVisibility>_>
::Execute(longlong param_1,undefined1 *param_2)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 local_res8 [8];
  undefined1 local_28;
  undefined1 local_27;
  longlong local_20;
  undefined4 local_18;
  
  uVar3 = FWeakObjectPtr::Get(param_1 + 8);
  local_28 = *(undefined1 *)(param_1 + 0x18);
  pcVar1 = *(code **)(param_1 + 0x10);
  local_27 = *(undefined1 *)(param_1 + 0x19);
  local_20 = 0;
  local_18 = 0;
  if ((((longlong *)(param_1 + 0x20) != &local_20) && (*(int *)(param_1 + 0x28) != 0)) &&
     (plVar2 = *(longlong **)(param_1 + 0x20), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_20);
  }
  puVar4 = (undefined1 *)(*pcVar1)(uVar3,local_res8,&local_28);
  *param_2 = *puVar4;
  return param_2;
}



// FUNCTION 1420f5550 Execute body=124 status=ok
// SIG undefined Execute(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TBaseUObjectMethodDelegateInstance<0,UBorder,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&)>
::Execute(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [192];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
  uVar1 = (**(code **)(param_1 + 0x10))(uVar1,local_f8,param_3,param_4);
  FReply::FReply(param_2,uVar1);
  FUN_140438c20(local_f8);
  return param_2;
}



// FUNCTION 1420f55d0 Execute body=118 status=ok
// SIG undefined Execute(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TBaseUObjectMethodDelegateInstance<0,UButton,FReply___cdecl(void)>::Execute
          (longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [192];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
  uVar1 = (**(code **)(param_1 + 0x10))(uVar1,local_d8);
  FReply::FReply(param_2,uVar1);
  FUN_140438c20(local_d8);
  return param_2;
}



// FUNCTION 1420f5650 FUN_1420f5650 body=148 status=ok
// SIG undefined FUN_1420f5650(void)

void FUN_1420f5650(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 local_18;
  longlong local_10;
  
  uVar7 = FWeakObjectPtr::Get(param_1 + 8);
  local_18 = *param_2;
  pcVar4 = *(code **)(param_1 + 0x10);
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  (*pcVar4)(uVar7,&local_18,param_3);
  plVar5 = (longlong *)param_2[1];
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
  return;
}



// FUNCTION 1420f56f0 FUN_1420f56f0 body=192 status=ok
// SIG undefined FUN_1420f56f0(void)

undefined8 *
FUN_1420f56f0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_38 [8];
  longlong *local_30;
  code *local_20;
  undefined8 uStack_18;
  
  lVar4 = FWeakObjectPtr::Get(param_1 + 8);
  local_20 = *(code **)(param_1 + 0x10);
  uStack_18 = *(undefined8 *)(param_1 + 0x18);
  puVar5 = (undefined8 *)(*local_20)((int)uStack_18 + lVar4,local_38,param_3,param_4);
  *param_2 = *puVar5;
  lVar4 = puVar5[1];
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1420f57b0 FUN_1420f57b0 body=157 status=ok
// SIG undefined FUN_1420f57b0(void)

undefined8 * FUN_1420f57b0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar5 = FWeakObjectPtr::Get(param_1 + 8);
  puVar6 = (undefined8 *)(**(code **)(param_1 + 0x10))(uVar5,local_18);
  *param_2 = *puVar6;
  lVar4 = puVar6[1];
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
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
    return param_2;
  }
  return param_2;
}



// FUNCTION 1420f5850 Execute body=64 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,USpinBox,TTypeWrapper<void>___cdecl(float,enum_ETextCommit::Type)>
     ::Execute(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0001420f588d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3);
  return;
}



// FUNCTION 1420f5890 Execute body=82 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,UUserWidget,TTypeWrapper<void>___cdecl(void),FOnInputAction>
     ::Execute(longlong param_1)

{
  longlong lVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  local_10 = *(undefined8 *)(param_1 + 0x28);
  local_18 = *(undefined4 *)(param_1 + 0x20);
  local_14 = *(undefined4 *)(param_1 + 0x24);
  (**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar1,&local_18);
  return;
}



// FUNCTION 1420f58f0 FUN_1420f58f0 body=979 status=ok
// SIG undefined FUN_1420f58f0(void)

void FUN_1420f58f0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong param_5)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  longlong lVar16;
  undefined2 *local_c8;
  undefined8 local_c0;
  undefined2 *local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  undefined8 local_a0;
  longlong local_98;
  int local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78 [2];
  undefined8 local_68;
  undefined4 local_60;
  undefined **local_58;
  undefined8 *local_50;
  undefined1 local_48 [16];
  
  if (*(int *)(param_5 + 0xb0) != *(int *)(param_5 + 0xdc)) {
    lVar3 = *(longlong *)(param_5 + 0xe8);
    if (*(longlong *)(param_5 + 0xe8) == 0) {
      lVar3 = param_5 + 0xe0;
    }
    iVar9 = *(int *)(lVar3 + ((longlong)*(int *)(param_5 + 0xf0) - 1U &
                             (longlong)*(int *)(param_3 + 0x10)) * 4);
    if (iVar9 != -1) {
      do {
        piVar8 = (int *)((longlong)iVar9 * 0xc0 + *(longlong *)(param_5 + 0xa8));
        if (*piVar8 == *(int *)(param_3 + 0x10)) {
          if (((iVar9 != -1) && (piVar8 != (int *)0x0)) && (piVar8 + 2 != (int *)0x0)) {
            FMovieSceneObjectCache::FindBoundObjects(piVar8 + 2,&local_98,param_3,param_5);
            goto LAB_1420f598f;
          }
          break;
        }
        iVar9 = piVar8[0x2e];
      } while (iVar9 != -1);
    }
  }
  local_98 = 0;
  local_90 = 0;
LAB_1420f598f:
  lVar3 = local_98 + (longlong)local_90 * 8;
  for (lVar16 = local_98; lVar16 != lVar3; lVar16 = lVar16 + 8) {
    lVar4 = FWeakObjectPtr::Get(lVar16);
    local_80 = lVar4;
    if (lVar4 != 0) {
      puVar12 = (undefined8 *)(param_1 + 8);
      lVar5 = FUN_1420fc8e0(puVar12,lVar4);
      if (lVar5 != 0) {
        lVar6 = FUN_1429ba110();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) {
          local_60 = *(undefined4 *)(param_5 + 0x2d8);
          local_68 = *(undefined8 *)(param_5 + 0x2d0);
          local_58 = &PTR_FUN_144fb19f0;
          local_50 = puVar12;
          FMovieScenePreAnimatedState::SavePreAnimatedState
                    (param_5 + 0xf8,*puVar12,&local_58,lVar4,*(undefined1 *)(param_5 + 0x2dc),
                     &local_68);
          local_b0 = 10;
          local_58 = &PTR_FUN_143fcdb70;
          local_b8 = (undefined2 *)0x0;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
          puVar13 = local_b8;
          FGenericPlatformString::Convert<char,wchar_t>(local_b8,10,"_Animated",10,0x3f);
          local_88 = *(undefined8 *)(lVar5 + 0x18);
          FName::ToString(&local_88,&local_a8);
          iVar11 = (int)local_a0;
          iVar9 = (int)local_b0;
          if ((int)local_a0 < 2) {
            local_b0 = 0;
            puVar14 = (undefined2 *)0x0;
            puVar15 = puVar13;
          }
          else {
            iVar10 = 0;
            if ((int)local_b0 != 0) {
              iVar10 = (int)local_b0 + -1;
            }
            if (((int)local_a0 != 0) || (iVar9 = 1, iVar10 == 0)) {
              iVar9 = 0;
            }
            iVar2 = local_a0._4_4_;
            iVar9 = iVar9 + (int)local_a0;
            local_c8 = local_a8;
            local_a8 = (undefined2 *)0x0;
            local_c0._0_4_ = (int)local_a0;
            local_c0._4_4_ = local_a0._4_4_;
            local_a0 = 0;
            if (iVar2 < iVar9 + iVar10) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_c8);
              iVar11 = (int)local_c0;
            }
            puVar15 = local_c8;
            iVar9 = iVar11;
            if (iVar10 != 0) {
              iVar9 = iVar11 + (uint)(iVar11 == 0) + iVar10;
              local_c0 = CONCAT44(local_c0._4_4_,iVar9);
              if (local_c0._4_4_ < iVar9) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,iVar11);
                iVar9 = (int)local_c0;
              }
              puVar15 = local_c8;
              puVar14 = local_c8 + ((longlong)iVar11 - (ulonglong)(iVar11 != 0));
              _guard_xfg_dispatch_icall_nop(puVar14,puVar13,(longlong)iVar10 * 2);
              puVar14[iVar10] = 0;
            }
            local_c8 = (undefined2 *)0x0;
            local_c0 = 0;
            puVar14 = puVar13;
          }
          if (local_a8 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (puVar14 != (undefined2 *)0x0) {
            FMemory::Free(puVar14);
          }
          puVar13 = &DAT_143f3eda8;
          if (iVar9 != 0) {
            puVar13 = puVar15;
          }
          uVar7 = FUN_1429ba110();
          puVar12 = (undefined8 *)FName::FName(local_48,puVar13,1);
          lVar4 = local_80;
          FUN_141791c20(local_78,local_80,uVar7,*puVar12);
          lVar5 = UMaterialInstanceDynamic::Create(lVar5,lVar4,local_78[0]);
          FUN_142132d00(param_1 + 8,lVar4,lVar5);
          if (puVar15 != (undefined2 *)0x0) {
            FMemory::Free(puVar15);
          }
        }
        FDefaultMaterialAccessor::Apply(param_1 + 8,lVar5,param_1 + 0x20);
      }
    }
  }
  return;
}



// FUNCTION 1420f5cd0 FUN_1420f5cd0 body=474 status=ok
// SIG undefined FUN_1420f5cd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1420f5cd0(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined1 local_198 [56];
  undefined **local_160;
  ushort local_158;
  undefined1 local_156;
  undefined4 local_154;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined2 local_104;
  undefined8 local_100;
  undefined1 local_f8;
  undefined1 local_f0 [184];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  local_1d8 = *param_3;
  uStack_1d0 = param_3[1];
  local_1c8 = param_3[2];
  uStack_1c0 = param_3[3];
  local_1b8 = *(undefined4 *)(param_3 + 4);
  uStack_1b4 = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_1b0 = *(undefined4 *)(param_3 + 5);
  uStack_1ac = *(undefined4 *)((longlong)param_3 + 0x2c);
  local_1a8 = param_3[6];
  FGeometry::FGeometry();
  local_156 = 0;
  local_154 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = local_158 & 0xfe00;
  local_160 = &PTR__scalar_deleting_destructor__144d565c0;
  local_150 = 0;
  local_138 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_104 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_130 = &DAT_1469eb010;
  local_108 = 0x3f800000;
  FEventReply::FEventReply(local_f0,0);
  FGeometry::operator=(local_198,&local_1d8);
  local_158 = *(undefined2 *)(param_4 + 8);
  local_148 = *(undefined8 *)(param_4 + 0x18);
  uStack_140 = *(undefined8 *)(param_4 + 0x20);
  local_156 = *(undefined1 *)(param_4 + 10);
  local_154 = *(undefined4 *)(param_4 + 0xc);
  local_150 = *(undefined8 *)(param_4 + 0x10);
  local_138 = *(undefined8 *)(param_4 + 0x28);
  TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator>::operator=
            (local_130,*(undefined8 *)(param_4 + 0x30));
  FKey::operator=(&local_128,param_4 + 0x38);
  local_154 = *(undefined4 *)(param_4 + 0xc);
  local_108 = *(undefined4 *)(param_4 + 0x58);
  local_110 = *(undefined8 *)(param_4 + 0x50);
  local_104 = *(undefined2 *)(param_4 + 0x5c);
  local_f8 = *(undefined1 *)(param_4 + 0x68);
  local_100 = *(undefined8 *)(param_4 + 0x60);
  plVar1 = (longlong *)FWeakObjectPtr::Get(param_1);
  uVar2 = FUN_14178ac60(plVar1,*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar1 + 0x208))(plVar1,uVar2,local_198);
  FUN_140438260(param_2,local_f0);
  FUN_140438c20(local_f0);
  FPointerEvent::~FPointerEvent(&local_160);
  return param_2;
}



// FUNCTION 1420f5eb0 FUN_1420f5eb0 body=28 status=ok
// SIG undefined FUN_1420f5eb0(void)

undefined8 FUN_1420f5eb0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  (**(code **)(param_1 + 8))(param_2,param_3);
  return 1;
}



// FUNCTION 1420f5ed0 FUN_1420f5ed0 body=309 status=ok
// SIG undefined FUN_1420f5ed0(void)

undefined8 FUN_1420f5ed0(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_28;
  longlong *local_20;
  
  lVar6 = FWeakObjectPtr::Get(param_1 + 8);
  plVar4 = (longlong *)param_2[1];
  if (lVar6 == 0) {
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
    uVar8 = 0;
  }
  else {
    uVar8 = *param_2;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    uVar7 = FWeakObjectPtr::Get(param_1 + 8);
    pcVar5 = *(code **)(param_1 + 0x10);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_28 = uVar8;
    local_20 = plVar4;
    (*pcVar5)(uVar7,&local_28,param_3);
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
    plVar4 = (longlong *)param_2[1];
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
    uVar8 = 1;
  }
  return uVar8;
}



// FUNCTION 1420f6010 ExecuteIfSafe body=90 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined1
TBaseUObjectMethodDelegateInstance<0,USpinBox,void___cdecl(float,enum_ETextCommit::Type)>::
ExecuteIfSafe(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  uVar2 = (undefined1)lVar3;
  if (lVar3 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1420f6070 ExecuteIfSafe body=118 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined8
TBaseUObjectMethodDelegateInstance<0,UUserWidget,void___cdecl(void),FOnInputAction>::ExecuteIfSafe
          (longlong param_1)

{
  longlong lVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 8);
    local_18 = *(undefined4 *)(param_1 + 0x20);
    local_14 = *(undefined4 *)(param_1 + 0x24);
    local_10 = *(undefined8 *)(param_1 + 0x28);
    (**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar1,&local_18);
    return 1;
  }
  return 0;
}



// FUNCTION 1420f60f0 FUN_1420f60f0 body=251 status=ok
// SIG undefined FUN_1420f60f0(void)

void FUN_1420f60f0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_1420f2490(param_1 + 2,param_3,param_1 + 6);
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_144fa29e0;
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



// FUNCTION 1420f61f0 FUN_1420f61f0 body=145 status=ok
// SIG undefined FUN_1420f61f0(void)

void FUN_1420f61f0(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 local_res8;
  
  uVar3 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x2a8);
  uVar2 = (longlong)*(int *)(param_1 + 0x2b0) & 0x1fffffffffffffff;
  if (puVar1 + *(int *)(param_1 + 0x2b0) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      local_res8 = *puVar1;
      (**(code **)(**(longlong **)(param_1 + 0x318) + 0x280))
                (*(longlong **)(param_1 + 0x318),&local_res8,1);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 1420f6290 FUN_1420f6290 body=499 status=ok
// SIG undefined FUN_1420f6290(void)

undefined8 * FUN_1420f6290(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong local_38;
  ulonglong local_30;
  int local_28;
  
  plVar14 = (longlong *)0x0;
  if (DAT_146ae78f8 == 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = -1;
    uVar4 = FUN_14171bfe0();
    FUN_1417a5560(uVar4,&local_38,1,0x10,0);
    uVar8 = local_30 & 0xffffffff;
    do {
      local_28 = local_28 + 1;
      if ((int)local_30 <= local_28) break;
    } while (*(longlong *)(local_38 + (longlong)local_28 * 8) == 0);
    do {
      if ((local_28 < 0) || ((int)uVar8 <= local_28)) goto LAB_1420f63bf;
      lVar5 = UPropertyBinding::GetPrivateStaticClass();
      iVar2 = DAT_146ae78f8;
      lVar1 = *(longlong *)(local_38 + (longlong)local_28 * 8);
      for (lVar12 = lVar1; lVar12 != 0; lVar12 = *(longlong *)(lVar12 + 0x30)) {
        if (lVar12 == lVar5) {
          lVar12 = (longlong)DAT_146ae78f8;
          DAT_146ae78f8 = DAT_146ae78f8 + 1;
          if (DAT_146ae78fc < DAT_146ae78f8) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146ae78f0,iVar2);
          }
          *(longlong *)(DAT_146ae78f0 + lVar12 * 8) = lVar1;
          break;
        }
      }
      uVar8 = local_30 & 0xffffffff;
      do {
        local_28 = local_28 + 1;
        if ((int)local_30 <= local_28) break;
      } while (*(longlong *)(local_38 + (longlong)local_28 * 8) == 0);
    } while( true );
  }
LAB_1420f63cc:
  plVar10 = plVar14;
  plVar13 = plVar14;
  if (0 < DAT_146ae78f8) {
    do {
      lVar1 = DAT_146ae78f0;
      plVar9 = plVar14;
      if (*(longlong *)(DAT_146ae78f0 + (longlong)plVar10) != 0) {
        plVar6 = (longlong *)UPropertyBinding::GetPrivateStaticClass();
        for (plVar7 = *(longlong **)(lVar1 + (longlong)plVar10);
            (plVar9 = plVar14, plVar7 != (longlong *)0x0 &&
            (plVar9 = *(longlong **)(lVar1 + (longlong)plVar10), plVar7 != plVar6));
            plVar7 = (longlong *)plVar7[6]) {
        }
      }
      plVar7 = (longlong *)plVar9[0x1f];
      if (plVar7 == (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x368))(plVar9);
        plVar7 = (longlong *)plVar9[0x1f];
      }
      cVar3 = (**(code **)(*plVar7 + 0x280))(plVar7,param_2);
      if (cVar3 != '\0') {
        *param_1 = *(undefined8 *)(DAT_146ae78f0 + (longlong)(int)plVar13 * 8);
        return param_1;
      }
      uVar11 = (int)plVar13 + 1;
      plVar10 = plVar10 + 1;
      plVar13 = (longlong *)(ulonglong)uVar11;
    } while ((int)uVar11 < DAT_146ae78f8);
  }
  *param_1 = 0;
  return param_1;
LAB_1420f63bf:
  if (local_38 != 0) {
    FMemory::Free(local_38);
  }
  goto LAB_1420f63cc;
}



// FUNCTION 1420f6490 FindHoveredWidgetPath body=87 status=ok
// SIG undefined FindHoveredWidgetPath(void)

undefined8
UWidgetInteractionComponent::FindHoveredWidgetPath
          (undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 local_18 [16];
  
  if (*(longlong *)(param_3 + 0x98) != 0) {
    uVar1 = FUN_1420fbd30(*(longlong *)(param_3 + 0x98),local_18,*(undefined8 *)(param_3 + 0x90),0,0
                         );
    FUN_1417f3830(param_2,uVar1);
    return param_2;
  }
  FWidgetPath::FWidgetPath(param_2);
  return param_2;
}



// FUNCTION 1420f64f0 FUN_1420f64f0 body=235 status=ok
// SIG undefined FUN_1420f64f0(void)

undefined8 FUN_1420f64f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 == 0) {
    return 0;
  }
  if (*(longlong *)(lVar1 + 0x28) == 0) {
    return 0;
  }
  lVar3 = FRichImageRow::StaticStruct();
  lVar4 = *(longlong *)(lVar1 + 0x28);
  while( true ) {
    if (lVar4 == 0) {
      return 0;
    }
    if (lVar4 == lVar3) break;
    lVar4 = *(longlong *)(lVar4 + 0x30);
  }
  if (param_2 == 0) {
    return 0;
  }
  if (*(int *)(lVar1 + 0x38) != *(int *)(lVar1 + 100)) {
    lVar4 = *(longlong *)(lVar1 + 0x70);
    if (*(longlong *)(lVar1 + 0x70) == 0) {
      lVar4 = lVar1 + 0x68;
    }
    iVar2 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(lVar1 + 0x78) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        puVar6 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar2 * 0x18);
        if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar2 * 0x18) == param_2) {
          if (iVar2 != -1) goto LAB_1420f65b3;
          break;
        }
        iVar2 = *(int *)(puVar6 + 2);
      } while (iVar2 != -1);
    }
  }
  puVar6 = (undefined8 *)0x0;
LAB_1420f65b3:
  puVar5 = puVar6 + 1;
  if (puVar6 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  if (puVar5 == (undefined8 *)0x0) {
    return 0;
  }
  return *puVar5;
}



// FUNCTION 1420f65e0 FindOptionIndex body=150 status=ok
// SIG undefined FindOptionIndex(void)

int UComboBoxString::FindOptionIndex(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0xc80)) {
    lVar6 = 0;
    do {
      puVar1 = *(undefined8 **)(lVar6 + *(longlong *)(param_1 + 0xc78));
      if (*(int *)(param_2 + 1) == 0) {
        puVar4 = &DAT_143f3eda8;
      }
      else {
        puVar4 = (undefined2 *)*param_2;
      }
      if (*(int *)(puVar1 + 1) == 0) {
        puVar3 = &DAT_143f3eda8;
      }
      else {
        puVar3 = (undefined2 *)*puVar1;
      }
      iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar4);
      if (iVar2 == 0) {
        return iVar5;
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while (iVar5 < *(int *)(param_1 + 0xc80));
  }
  return -1;
}



// FUNCTION 1420f6680 FUN_1420f6680 body=121 status=ok
// SIG undefined FUN_1420f6680(void)

undefined8 FUN_1420f6680(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8;
  longlong local_res10 [3];
  undefined8 local_28;
  undefined8 *local_20;
  code *local_18;
  undefined8 *puStack_10;
  
  local_20 = &local_res8;
  local_res8 = 0;
  puStack_10 = &local_28;
  local_18 = FUN_1420e67b0;
  local_res10[0] = *(longlong *)(param_1 + 0x28);
  if (local_res10[0] != 0) {
    local_28 = param_2;
    FUN_1420e67b0(&local_28,local_res10);
    FUN_1420f6990(*(undefined8 *)(param_1 + 0x28),&local_18,0);
    return local_res8;
  }
  return 0;
}



// FUNCTION 1420f6700 FUN_1420f6700 body=545 status=ok
// SIG undefined FUN_1420f6700(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1420f6700(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  FWeakObjectPtr::operator=(&local_a8);
  plVar6 = param_1 + 0x37;
  lVar5 = *plVar6;
  lVar3 = param_1[0x38];
  lVar7 = lVar5;
  do {
    if (lVar7 == lVar5 + (longlong)(int)lVar3 * 8) {
LAB_1420f6778:
      iVar2 = (int)param_1[0x38];
      *(int *)(param_1 + 0x38) = iVar2 + 1;
      if (*(int *)((longlong)param_1 + 0x1c4) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6,iVar2);
      }
      puVar1 = (undefined4 *)(*plVar6 + (longlong)iVar2 * 8);
      *puVar1 = local_a8;
      puVar1[1] = local_a4;
LAB_1420f67a5:
      if ((param_1[0x36] == 0) && (lVar5 = (**(code **)(*param_1 + 0x148))(param_1), lVar5 != 0)) {
        if (*(longlong *)(lVar5 + 400) == 0) {
          uVar8 = *(undefined8 *)(lVar5 + 0x3f8);
        }
        else {
          uVar8 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0x90);
        }
        plVar6 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar6 != (longlong *)0x0) {
          *plVar6 = (longlong)&PTR_FUN_143f4d170;
          FWeakObjectPtr::operator=(plVar6 + 1,param_1);
          plVar6[2] = (longlong)UListViewBase::HandleAnnounceGeneratedEntries;
          lVar5 = FDelegateHandle::GenerateNewID();
          plVar6[4] = lVar5;
          *plVar6 = (longlong)&PTR_FUN_143f4d1b8;
        }
        local_98 = 0;
        local_90 = 0;
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x30))(plVar6,&local_98);
        }
        FWeakObjectPtr::operator=(local_88,0);
        local_80 = 0;
        local_78 = AK::MemoryMgr::StartProfileThreadUsage;
        local_48 = (longlong *)0x0;
        local_38 = 0;
        FUN_142880af0(uVar8,&local_98);
        if (local_38 != 0) {
          plVar9 = local_68;
          if (local_48 != (longlong *)0x0) {
            plVar9 = local_48;
          }
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x10))(plVar9,0);
          }
        }
        if (local_48 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x28))(plVar6,0);
          lVar5 = FMemory::Realloc(plVar6,0,0);
          if (lVar5 != 0) {
            FMemory::Free(lVar5);
          }
        }
      }
      return;
    }
    cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar7,&local_a8);
    if (cVar4 != '\0') {
      if ((int)(lVar7 - lVar5 >> 3) != -1) goto LAB_1420f67a5;
      goto LAB_1420f6778;
    }
    lVar7 = lVar7 + 8;
  } while( true );
}



// FUNCTION 1420f6930 FUN_1420f6930 body=92 status=ok
// SIG undefined FUN_1420f6930(void)

void FUN_1420f6930(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong local_res8;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_res8 = *(longlong *)(param_1 + 0x28);
  if (local_res8 != 0) {
    (*(code *)*param_2)(param_2[1],&local_res8);
    local_18 = *(undefined4 *)param_2;
    uStack_14 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_10 = *(undefined4 *)(param_2 + 1);
    uStack_c = *(undefined4 *)((longlong)param_2 + 0xc);
    FUN_1420f6990(*(undefined8 *)(param_1 + 0x28),&local_18,param_3);
  }
  return;
}



// FUNCTION 1420f6990 FUN_1420f6990 body=605 status=ok
// SIG undefined FUN_1420f6990(void)

void FUN_1420f6990(longlong param_1,undefined8 *param_2,char param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong local_res8;
  longlong local_res20;
  undefined8 *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_res8 = param_1;
  if (param_1 != 0) {
    uVar3 = UNamedSlotInterface::GetPrivateStaticClass();
    plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_1,uVar3);
    uVar7 = 0;
    if (plVar4 != (longlong *)0x0) {
      local_58 = (undefined8 *)0x0;
      local_50 = 0;
      (**(code **)(*plVar4 + 0x10))(plVar4,&local_58);
      uVar10 = (ulonglong)((longlong)(local_58 + (int)local_50) + (7 - (longlong)local_58)) >> 3;
      if (local_58 + (int)local_50 < local_58) {
        uVar10 = uVar7;
      }
      uVar8 = uVar7;
      puVar9 = local_58;
      if (uVar10 != 0) {
        do {
          lVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,*puVar9);
          if (lVar5 != 0) {
            local_res20 = lVar5;
            (*(code *)*param_2)(param_2[1],&local_res20);
            local_48 = *(undefined4 *)param_2;
            uStack_44 = *(undefined4 *)((longlong)param_2 + 4);
            uStack_40 = *(undefined4 *)(param_2 + 1);
            uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
            FUN_1420f6990(lVar5,&local_48,param_3);
          }
          uVar8 = uVar8 + 1;
          param_1 = local_res8;
          puVar9 = puVar9 + 1;
        } while (uVar8 != uVar10);
      }
      if (local_58 != (undefined8 *)0x0) {
        FMemory::Free(local_58);
      }
    }
    lVar5 = UPanelWidget::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
         ) != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (iVar2 = *(int *)(param_1 + 0x108), uVar10 = uVar7, 0 < iVar2)) {
      do {
        if (((longlong)uVar10 < 0) || (iVar2 <= (int)uVar7)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (((bVar1) &&
            (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x100) + uVar10 * 8), lVar5 != 0)) &&
           (lVar5 = *(longlong *)(lVar5 + 0x30), lVar5 != 0)) {
          local_res8 = lVar5;
          (*(code *)*param_2)(param_2[1],&local_res8);
          local_48 = *(undefined4 *)param_2;
          uStack_44 = *(undefined4 *)((longlong)param_2 + 4);
          uStack_40 = *(undefined4 *)(param_2 + 1);
          uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
          FUN_1420f6990(lVar5,&local_48,param_3);
        }
        iVar2 = *(int *)(param_1 + 0x108);
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        uVar10 = uVar10 + 1;
      } while ((int)uVar6 < iVar2);
    }
  }
  if ((param_3 != '\0') && (param_1 != 0)) {
    lVar5 = UUserWidget::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
         ) != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(longlong *)(param_1 + 0x1a0) != 0)) {
      local_48 = *(undefined4 *)param_2;
      uStack_44 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_40 = *(undefined4 *)(param_2 + 1);
      uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
      FUN_1420f6930(*(longlong *)(param_1 + 0x1a0),&local_48,param_3);
    }
  }
  return;
}



// FUNCTION 1420f6bf0 FUN_1420f6bf0 body=122 status=ok
// SIG undefined FUN_1420f6bf0(void)

void FUN_1420f6bf0(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  FUN_1420f9830(param_1,&local_18);
  if (local_18 != 0) {
    FUN_14185c5d0(local_18,*(undefined4 *)(local_18 + 0x54));
  }
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
  return;
}



// FUNCTION 1420f6c70 FUN_1420f6c70 body=144 status=ok
// SIG undefined FUN_1420f6c70(void)

void FUN_1420f6c70(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) & 0xef;
  *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) | param_2 << 4;
  FUN_1420f9830(param_1,&local_18);
  if (local_18 != 0) {
    *(byte *)(local_18 + 0x18) = *(byte *)(local_18 + 0x18) & 0x7f;
    *(byte *)(local_18 + 0x18) = *(byte *)(local_18 + 0x18) | param_2 << 7;
    FUN_1418475e0(local_18,5);
  }
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
  return;
}



// FUNCTION 1420f6d00 FromShearAngles body=233 status=ok
// SIG undefined FromShearAngles(void)

float * FShear2D::FromShearAngles(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *param_2;
  fVar2 = 0.0;
  if (fVar3 == 0.0) {
    fVar3 = 0.0;
  }
  else {
    if (-89.0 <= fVar3) {
      if (89.0 <= fVar3) {
        fVar3 = 89.0;
      }
    }
    else {
      fVar3 = -89.0;
    }
    fVar3 = ::_guard_xfg_dispatch_icall_nop((90.0 - fVar3) * 0.017453292);
    fVar3 = 1.0 / fVar3;
  }
  fVar1 = param_2[1];
  if (fVar1 != 0.0) {
    fVar2 = -89.0;
    if ((-89.0 <= fVar1) && (fVar2 = fVar1, 89.0 <= fVar1)) {
      fVar2 = 89.0;
    }
    fVar2 = ::_guard_xfg_dispatch_icall_nop((90.0 - fVar2) * 0.017453292);
    fVar2 = 1.0 / fVar2;
  }
  *param_1 = fVar3;
  param_1[1] = fVar2;
  return param_1;
}



// FUNCTION 1420f6df0 FUN_1420f6df0 body=408 status=ok
// SIG undefined FUN_1420f6df0(void)

longlong * FUN_1420f6df0(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong local_res8 [2];
  
  lVar10 = *(int *)(param_1 + 0x44) + param_2;
  if ((((lVar10 != 0) && (*(char *)(*(longlong *)(param_1 + 0x70) + 0x8c) == '\x01')) &&
      (lVar5 = UFunction::GetReturnProperty(), lVar5 != 0)) &&
     (FUN_1420f6290(local_res8,lVar5), lVar3 = local_res8[0], local_res8[0] != 0)) {
    lVar6 = UPropertyBinding::GetPrivateStaticClass();
    do {
      if (local_res8[0] == lVar6) {
        local_res8[0] = 0;
        lVar7 = UPropertyBinding::GetPrivateStaticClass();
        lVar4 = local_res8[0];
        lVar6 = lVar3;
        goto LAB_1420f6e90;
      }
      local_res8[0] = *(longlong *)(local_res8[0] + 0x30);
    } while (local_res8[0] != 0);
  }
  return (longlong *)0x0;
  while (lVar6 = *(longlong *)(lVar6 + 0x30), lVar9 = 0, lVar6 != 0) {
LAB_1420f6e90:
    lVar9 = lVar3;
    if (lVar6 == lVar7) break;
  }
  local_res8[1] = 0;
  if (local_res8[0] == 0) {
    FUN_1417846f0(param_2,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  plVar8 = (longlong *)FUN_1417985e0(lVar9,param_2,lVar4,0,0,0,0,0,0);
  FWeakObjectPtr::operator=(plVar8 + 5,param_3);
  plVar1 = plVar8 + 6;
  if (plVar1 != param_4) {
    iVar2 = (int)param_4[1];
    _Src = (void *)*param_4;
    *(int *)(plVar8 + 7) = iVar2;
    if ((iVar2 == 0) && (*(int *)((longlong)plVar8 + 0x3c) == 0)) {
      *(undefined4 *)((longlong)plVar8 + 0x3c) = 0;
    }
    else {
      TArray<SWaapiPickerRow::KeyValueArgs,FDefaultAllocator>::ResizeForCopy(plVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*plVar1,_Src,(longlong)iVar2 << 5);
    }
  }
  plVar8[8] = param_4[2];
  plVar8[9] = param_4[3];
  *(char *)(plVar8 + 10) = (char)param_4[4];
  (**(code **)(*plVar8 + 0x288))(plVar8,lVar5,lVar10);
  return plVar8;
}



// FUNCTION 1420f6f90 FUN_1420f6f90 body=1515 status=ok
// SIG undefined FUN_1420f6f90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_1420f6f90(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 auStack_768 [32];
  longlong local_748;
  longlong local_740;
  undefined4 local_738;
  longlong local_730;
  longlong local_728;
  longlong local_720;
  undefined1 local_718;
  undefined1 local_710;
  longlong local_708;
  longlong *local_6f8;
  longlong *local_6f0;
  undefined8 *local_6e8;
  longlong *local_6e0;
  longlong *local_6d8;
  undefined8 *local_6d0;
  undefined8 local_6c8;
  undefined8 local_6c0;
  longlong *local_6b8;
  longlong *local_6b0;
  undefined1 local_6a8 [8];
  longlong *local_6a0;
  undefined1 local_690;
  undefined8 local_688;
  undefined4 local_680;
  undefined1 local_678 [16];
  undefined1 local_668 [8];
  longlong *local_660;
  undefined1 local_658 [8];
  longlong *local_650;
  longlong *local_648;
  longlong *local_640;
  undefined1 local_630 [8];
  longlong *local_628;
  undefined1 local_618 [280];
  longlong *local_500;
  undefined1 local_4f8 [280];
  longlong *local_3e0;
  undefined1 local_3d8 [912];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_768;
  if (((*(int *)(param_1 + 0x3e0) == 0) || (*(longlong **)(param_1 + 0x3d8) == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x3d8) + 0x18))(), cVar4 == '\0')) {
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_630,L"Please provide a .OnGenerateWidget() handler.",L"SlateCore",
                       L"ComboBoxMissingOnGenerateWidgetMethod");
    FText::FText(local_6a8,uVar8);
    local_690 = 1;
    local_688 = 0;
    local_680 = 0;
    lVar6 = STextBlock::FArguments::FArguments(local_3d8);
    FText::operator=(lVar6 + 0x108,local_6a8);
    *(undefined1 *)(lVar6 + 0x120) = local_690;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar6 + 0x128,&local_688);
    plVar7 = (longlong *)operator_new(0x660);
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar7 + 1) = 1;
      *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
      *plVar7 = (longlong)&PTR_FUN_144043520;
      if (plVar7 != (longlong *)0xfffffffffffffff0) {
        FUN_1419a9150();
      }
    }
    plVar10 = plVar7 + 2;
    local_648 = plVar10;
    local_640 = plVar7;
    FUN_14044f790(&local_648,plVar10);
    local_748 = 0x650;
    SWidget::SetDebugInfo
              (plVar10,"STextBlock",
               "d:\\oak\\main\\engine\\source\\runtime\\slate\\public\\Widgets/Input/SComboBox.h",
               0x199);
    local_738 = *(undefined4 *)(lVar6 + 0x90);
    local_708 = lVar6 + 0xf8;
    local_720 = lVar6 + 0xe8;
    local_710 = *(undefined1 *)(lVar6 + 0xf1);
    local_728 = lVar6 + 200;
    local_730 = lVar6 + 0x98;
    local_718 = *(undefined1 *)(lVar6 + 0xf0);
    local_740 = lVar6 + 0x78;
    local_748 = lVar6 + 0x60;
    SWidget::SWidgetConstruct(plVar10,lVar6,lVar6 + 0x30,lVar6 + 0x40);
    FUN_1419b0120(plVar10,lVar6);
    if (((char)plVar7[5] < '\0') ||
       (cVar4 = (**(code **)(*plVar10 + 0x1e8))(plVar10), cVar4 != '\0')) {
      bVar5 = 1;
    }
    else {
      bVar5 = 0;
    }
    *(byte *)((longlong)plVar7 + 0x29) = *(byte *)((longlong)plVar7 + 0x29) & 0xfe;
    *(byte *)((longlong)plVar7 + 0x29) = *(byte *)((longlong)plVar7 + 0x29) | bVar5;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    local_6c0 = param_4;
    local_6b8 = plVar10;
    local_6b0 = plVar7;
    plVar10 = (longlong *)FUN_1420cb200();
    local_6e0 = plVar10 + 2;
    local_6d8 = plVar10;
    TSharedRef<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>::
    Init<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>_>
              (&local_6e0,local_6e0);
    local_6d0 = &local_6c0;
    local_748 = 0x440;
    SWidget::SetDebugInfo
              (plVar10 + 3,"SComboRow<OptionType>",
               "d:\\oak\\main\\engine\\source\\runtime\\slate\\public\\Widgets/Input/SComboBox.h",
               0x197);
    uVar8 = FUN_14195f3e0(local_4f8);
    uVar8 = FUN_1419671f0(uVar8,&local_6b8);
    puVar9 = (undefined8 *)FUN_1420dab10(&local_6e0,local_658,uVar8);
    *param_2 = *puVar9;
    lVar6 = puVar9[1];
    param_2[1] = lVar6;
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    if (local_650 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_650 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_650)(local_650);
        LOCK();
        piVar1 = (int *)((longlong)local_650 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_650 + 8))(local_650,1);
        }
      }
    }
    plVar10 = local_6d8;
    if (local_6d8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_6d8 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_6d8)(local_6d8);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_6d8 + 8))(local_6d8,1);
        }
      }
    }
    if (local_3e0 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_3e0 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_3e0)(local_3e0);
        LOCK();
        piVar1 = (int *)((longlong)local_3e0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_3e0 + 8))(local_3e0,1);
        }
      }
    }
    FUN_140456c70(local_4f8);
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
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      LOCK();
      plVar10 = plVar7 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    FUN_140691150(local_3d8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_688);
    if (local_6a0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_6a0 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_6a0)(local_6a0);
        LOCK();
        piVar1 = (int *)((longlong)local_6a0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_6a0 + 8))(local_6a0,1);
        }
      }
    }
    if (local_628 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_628 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_628)(local_628);
        LOCK();
        piVar1 = (int *)((longlong)local_628 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_628 + 8))(local_628,1);
        }
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x3e0) == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)(param_1 + 0x3d8);
    }
    (**(code **)(*plVar7 + 0x38))(plVar7,local_678,param_3);
    uVar8 = *(undefined8 *)(param_1 + 0x388);
    lVar6 = FUN_14195f3e0(local_618);
    *(undefined8 *)(lVar6 + 0x108) = uVar8;
    local_6c8 = param_4;
    plVar7 = (longlong *)FUN_1420cb200();
    local_6f8 = plVar7 + 2;
    local_6f0 = plVar7;
    TSharedRef<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>::
    Init<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>_>
              (&local_6f8,local_6f8);
    local_6e8 = &local_6c8;
    local_748 = 0x440;
    SWidget::SetDebugInfo
              (plVar7 + 3,"SComboRow<OptionType>",
               "d:\\oak\\main\\engine\\source\\runtime\\slate\\public\\Widgets/Input/SComboBox.h",
               399);
    uVar8 = FUN_1419671f0(lVar6,local_678);
    puVar9 = (undefined8 *)FUN_1420dab10(&local_6f8,local_668,uVar8);
    *param_2 = *puVar9;
    lVar6 = puVar9[1];
    param_2[1] = lVar6;
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    if (local_660 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_660 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_660)(local_660);
        LOCK();
        piVar1 = (int *)((longlong)local_660 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_660 + 8))(local_660,1);
        }
      }
    }
    plVar7 = local_6f0;
    if (local_6f0 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_6f0 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_6f0)(local_6f0);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_6f0 + 8))(local_6f0,1);
        }
      }
    }
    if (local_500 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_500 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_500)(local_500);
        LOCK();
        piVar1 = (int *)((longlong)local_500 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_500 + 8))(local_500,1);
        }
      }
    }
    FUN_140456c70(local_618);
  }
  return param_2;
}



// FUNCTION 1420f7580 FUN_1420f7580 body=1983 status=ok
// SIG undefined FUN_1420f7580(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1420f7580(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_718 [32];
  longlong local_6f8;
  longlong local_6f0;
  undefined4 local_6e8;
  longlong local_6e0;
  longlong local_6d8;
  longlong local_6d0;
  undefined1 local_6c8;
  undefined1 local_6c0;
  longlong local_6b8;
  longlong local_6a8;
  longlong local_6a0;
  longlong *local_698;
  longlong *plStack_690;
  longlong *local_688;
  longlong *local_680;
  longlong *local_670;
  longlong **local_668;
  undefined8 local_660;
  longlong *local_658;
  longlong local_650;
  longlong *local_648;
  longlong local_640;
  longlong *local_638;
  undefined1 local_630 [8];
  longlong *local_628;
  undefined1 local_618;
  undefined8 local_610;
  undefined4 local_608;
  undefined1 local_600 [8];
  longlong *local_5f8;
  undefined1 local_5f0 [8];
  longlong *local_5e8;
  longlong *local_5e0;
  longlong *local_5d8;
  undefined1 local_5c8 [8];
  longlong *local_5c0;
  longlong *local_5b0;
  longlong *plStack_5a8;
  undefined1 local_598 [448];
  undefined1 local_3d8 [912];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_718;
  local_6a8 = param_3;
  if (((*(int *)(param_1 + 0x510) == 0) || (*(longlong **)(param_1 + 0x508) == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x508) + 0x18))(), cVar5 == '\0')) {
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_5c8,L"OnGenerateWidget() not assigned.",L"SListView",L"BrokenUIMessage"
                      );
    FText::FText(local_630,uVar8);
    local_618 = 1;
    local_610 = 0;
    local_608 = 0;
    lVar9 = STextBlock::FArguments::FArguments(local_3d8);
    FText::operator=(lVar9 + 0x108,local_630);
    *(undefined1 *)(lVar9 + 0x120) = local_618;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x128,&local_610);
    plVar10 = (longlong *)operator_new(0x660);
    if (plVar10 == (longlong *)0x0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar10 + 1) = 1;
      *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
      *plVar10 = (longlong)&PTR_FUN_144043520;
      if (plVar10 != (longlong *)0xfffffffffffffff0) {
        FUN_1419a9150();
      }
    }
    plVar11 = plVar10 + 2;
    local_5e0 = plVar11;
    local_5d8 = plVar10;
    FUN_14044f790(&local_5e0,plVar11);
    local_6f8 = 0x650;
    SWidget::SetDebugInfo
              (plVar11,"STextBlock",
               "d:\\oak\\main\\engine\\source\\runtime\\slate\\public\\Widgets/Views/SListView.h",
               0x42d);
    local_6e8 = *(undefined4 *)(lVar9 + 0x90);
    local_6b8 = lVar9 + 0xf8;
    local_6d0 = lVar9 + 0xe8;
    local_6c0 = *(undefined1 *)(lVar9 + 0xf1);
    local_6d8 = lVar9 + 200;
    local_6e0 = lVar9 + 0x98;
    local_6c8 = *(undefined1 *)(lVar9 + 0xf0);
    local_6f0 = lVar9 + 0x78;
    local_6f8 = lVar9 + 0x60;
    SWidget::SWidgetConstruct(plVar11,lVar9,lVar9 + 0x30,lVar9 + 0x40);
    FUN_1419b0120(plVar11,lVar9);
    if (((char)plVar10[5] < '\0') ||
       (cVar5 = (**(code **)(*plVar11 + 0x1e8))(plVar11), cVar5 != '\0')) {
      bVar6 = 1;
    }
    else {
      bVar6 = 0;
    }
    *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) & 0xfe;
    *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) | bVar6;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    lVar9 = FUN_14068ed70(local_598);
    local_668 = (longlong **)(lVar9 + 0x1a8);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    local_698 = plVar11;
    plStack_690 = plVar10;
    if (&local_698 != local_668) {
      local_698 = *local_668;
      plStack_690 = *(longlong **)(lVar9 + 0x1b0);
      *local_668 = plVar11;
      *(longlong **)(lVar9 + 0x1b0) = plVar10;
      local_5b0 = plVar11;
      plStack_5a8 = plVar10;
    }
    plVar11 = plStack_690;
    local_6a8 = lVar9;
    if (plStack_690 != (longlong *)0x0) {
      LOCK();
      plVar12 = plStack_690 + 1;
      lVar4 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_690)(plStack_690);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_690 + 8))(plStack_690,1);
        }
      }
    }
    plVar11 = (longlong *)
              TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_5f0);
    local_640 = *plVar11;
    local_638 = (longlong *)plVar11[1];
    if (local_638 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_638 + 1) = (int)local_638[1] + 1;
      UNLOCK();
    }
    if (local_5e8 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_5e8 + 1;
      lVar4 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_5e8)(local_5e8);
        LOCK();
        piVar1 = (int *)((longlong)local_5e8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_5e8 + 8))(local_5e8,1);
        }
      }
    }
    local_670 = &local_640;
    TWidgetAllocator<SImage,0>::PrivateAllocateWidget(&local_688);
    plVar12 = local_688;
    plVar13 = local_688 + 1;
    local_6f8 = 0x440;
    SWidget::SetDebugInfo
              (plVar13,"STableRow<ItemType>",
               "d:\\oak\\main\\engine\\source\\runtime\\slate\\public\\Widgets/Views/SListView.h",
               0x42a);
    local_6e8 = *(undefined4 *)(lVar9 + 0x90);
    local_6b8 = lVar9 + 0xf8;
    local_6d0 = lVar9 + 0xe8;
    local_6c0 = *(undefined1 *)(lVar9 + 0xf1);
    local_6d8 = lVar9 + 200;
    local_6e0 = lVar9 + 0x98;
    local_6c8 = *(undefined1 *)(lVar9 + 0xf0);
    local_6f0 = lVar9 + 0x78;
    local_6f8 = lVar9 + 0x60;
    SWidget::SWidgetConstruct(plVar13,lVar9,lVar9 + 0x30,lVar9 + 0x40);
    plVar2 = local_688;
    plVar11 = (longlong *)local_670[1];
    local_6a0 = *local_670;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    local_650 = local_6a0;
    local_648 = plVar11;
    FUN_1420edf20(local_688,local_6a8,&local_650);
    (**(code **)(*plVar2 + 0x78))
              (plVar2,*(undefined4 *)(local_6a0 + 0x2f8),local_6a8 + 0x178,local_668);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar11 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    if (((char)plVar12[4] < '\0') ||
       (cVar5 = (**(code **)(*plVar13 + 0x1e8))(plVar13), cVar5 != '\0')) {
      bVar6 = 1;
    }
    else {
      bVar6 = 0;
    }
    plVar11 = local_680;
    *(byte *)((longlong)plVar12 + 0x21) = *(byte *)((longlong)plVar12 + 0x21) & 0xfe;
    *(byte *)((longlong)plVar12 + 0x21) = *(byte *)((longlong)plVar12 + 0x21) | bVar6;
    if (local_680 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_680 + 1) = (int)local_680[1] + 1;
      UNLOCK();
      LOCK();
      plVar12 = local_680 + 1;
      lVar9 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_680)(local_680);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_680 + 8))(local_680,1);
        }
      }
    }
    plVar11 = local_638;
    if (local_638 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_638 + 1;
      lVar9 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_638)(local_638);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    FUN_140690c40(local_598);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar10 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
      LOCK();
      plVar11 = plVar10 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
      LOCK();
      plVar11 = plVar10 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    FUN_140691150(local_3d8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_610);
    if (local_628 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_628 + 1;
      lVar9 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_628)(local_628);
        LOCK();
        piVar1 = (int *)((longlong)local_628 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_628 + 8))(local_628,1);
        }
      }
    }
    if (local_5c0 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_5c0 + 1;
      lVar9 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_5c0)(local_5c0);
        LOCK();
        piVar1 = (int *)((longlong)local_5c0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_5c0 + 8))(local_5c0,1);
        }
      }
    }
    plVar10 = local_680;
    *param_2 = local_688;
    param_2[1] = local_680;
    if (local_680 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_680 + 1) = (int)local_680[1] + 1;
      UNLOCK();
      LOCK();
      plVar11 = local_680 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_680)(local_680);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_680 + 8))(local_680,1);
        }
      }
    }
    return param_2;
  }
  puVar7 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_600)
  ;
  local_6a0 = *puVar7;
  plVar10 = (longlong *)puVar7[1];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  if (local_5f8 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_5f8 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_5f8)(local_5f8);
      LOCK();
      piVar1 = (int *)((longlong)local_5f8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_5f8 + 8))(local_5f8,1);
      }
    }
  }
  plVar11 = plVar10 + 1;
  local_660 = local_6a0;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar11 = (int)*plVar11 + 1;
    UNLOCK();
  }
  if (*(int *)(param_1 + 0x510) == 0) {
    plVar12 = (longlong *)0x0;
  }
  else {
    plVar12 = *(longlong **)(param_1 + 0x508);
  }
  local_658 = plVar10;
  (**(code **)(*plVar12 + 0x38))(plVar12,param_2,local_6a8,&local_660);
  plVar12 = local_658;
  if (local_658 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_658 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_658)(local_658);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  if (plVar10 == (longlong *)0x0) {
    return param_2;
  }
  LOCK();
  lVar9 = *plVar11;
  *(int *)plVar11 = (int)*plVar11 + -1;
  UNLOCK();
  if ((int)lVar9 != 1) {
    return param_2;
  }
  (**(code **)*plVar10)(plVar10);
  LOCK();
  piVar1 = (int *)((longlong)plVar10 + 0xc);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar3 != 1) {
    return param_2;
  }
  (**(code **)(*plVar10 + 8))(plVar10,1);
  return param_2;
}



// FUNCTION 1420f7d40 FUN_1420f7d40 body=1950 status=ok
// SIG undefined FUN_1420f7d40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1420f7d40(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_718 [32];
  longlong local_6f8;
  longlong local_6f0;
  undefined4 local_6e8;
  longlong local_6e0;
  longlong local_6d8;
  longlong local_6d0;
  undefined1 local_6c8;
  undefined1 local_6c0;
  longlong local_6b8;
  undefined8 local_6a8;
  longlong local_6a0;
  longlong *local_698;
  longlong *plStack_690;
  longlong *local_688;
  longlong *local_680;
  longlong *local_670;
  longlong **local_668;
  undefined8 local_660;
  longlong *local_658;
  longlong local_650;
  longlong *local_648;
  longlong local_640;
  longlong *local_638;
  undefined1 local_630 [8];
  longlong *local_628;
  undefined1 local_618;
  undefined8 local_610;
  undefined4 local_608;
  undefined1 local_600 [8];
  longlong *local_5f8;
  undefined1 local_5f0 [8];
  longlong *local_5e8;
  longlong *local_5e0;
  longlong *local_5d8;
  undefined1 local_5c8 [8];
  longlong *local_5c0;
  longlong *local_5b0;
  longlong *plStack_5a8;
  undefined1 local_598 [448];
  undefined1 local_3d8 [912];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_718;
  local_6a8 = param_3;
  if (((*(int *)(param_1 + 0x510) == 0) || (*(longlong **)(param_1 + 0x508) == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x508) + 0x18))(), cVar5 == '\0')) {
    plVar8 = (longlong *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_5f0)
    ;
    local_640 = *plVar8;
    local_638 = (longlong *)plVar8[1];
    if (local_638 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_638 + 1) = (int)local_638[1] + 1;
      UNLOCK();
    }
    if (local_5e8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_5e8 + 1;
      lVar10 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_5e8)(local_5e8);
        LOCK();
        piVar1 = (int *)((longlong)local_5e8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_5e8 + 8))(local_5e8,1);
        }
      }
    }
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_5c8,L"OnGenerateWidget() not assigned.",L"STreeView",
                       L"BrokenSetupMessage");
    FText::FText(local_630,uVar9);
    local_618 = 1;
    local_610 = 0;
    local_608 = 0;
    lVar10 = STextBlock::FArguments::FArguments(local_3d8);
    FText::operator=(lVar10 + 0x108,local_630);
    *(undefined1 *)(lVar10 + 0x120) = local_618;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x128,&local_610);
    plVar8 = (longlong *)operator_new(0x660);
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar8 + 1) = 1;
      *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
      *plVar8 = (longlong)&PTR_FUN_144043520;
      if (plVar8 != (longlong *)0xfffffffffffffff0) {
        FUN_1419a9150();
      }
    }
    plVar11 = plVar8 + 2;
    local_5e0 = plVar11;
    local_5d8 = plVar8;
    FUN_14044f790(&local_5e0,plVar11);
    local_6f8 = 0x650;
    SWidget::SetDebugInfo
              (plVar11,"STextBlock",
               "d:\\oak\\main\\engine\\source\\runtime\\slate\\public\\Widgets/Views/STreeView.h",
               0x26c);
    local_6e8 = *(undefined4 *)(lVar10 + 0x90);
    local_6b8 = lVar10 + 0xf8;
    local_6d0 = lVar10 + 0xe8;
    local_6c0 = *(undefined1 *)(lVar10 + 0xf1);
    local_6d8 = lVar10 + 200;
    local_6e0 = lVar10 + 0x98;
    local_6c8 = *(undefined1 *)(lVar10 + 0xf0);
    local_6f0 = lVar10 + 0x78;
    local_6f8 = lVar10 + 0x60;
    SWidget::SWidgetConstruct(plVar11,lVar10,lVar10 + 0x30,lVar10 + 0x40);
    FUN_1419b0120(plVar11,lVar10);
    if (((char)plVar8[5] < '\0') ||
       (cVar5 = (**(code **)(*plVar11 + 0x1e8))(plVar11), cVar5 != '\0')) {
      bVar6 = 1;
    }
    else {
      bVar6 = 0;
    }
    *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) & 0xfe;
    *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) | bVar6;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    lVar10 = FUN_14068ed70(local_598);
    local_668 = (longlong **)(lVar10 + 0x1a8);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_698 = plVar11;
    plStack_690 = plVar8;
    if (&local_698 != local_668) {
      local_698 = *local_668;
      plStack_690 = *(longlong **)(lVar10 + 0x1b0);
      *local_668 = plVar11;
      *(longlong **)(lVar10 + 0x1b0) = plVar8;
      local_5b0 = plVar11;
      plStack_5a8 = plVar8;
    }
    plVar11 = plStack_690;
    if (plStack_690 != (longlong *)0x0) {
      LOCK();
      plVar12 = plStack_690 + 1;
      lVar4 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_690)(plStack_690);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_690 + 8))(plStack_690,1);
        }
      }
    }
    local_670 = &local_640;
    TWidgetAllocator<SImage,0>::PrivateAllocateWidget(&local_688);
    plVar12 = local_688;
    plVar13 = local_688 + 1;
    local_6f8 = 0x440;
    SWidget::SetDebugInfo
              (plVar13,"STableRow<ItemType>",
               "d:\\oak\\main\\engine\\source\\runtime\\slate\\public\\Widgets/Views/STreeView.h",
               0x269);
    local_6e8 = *(undefined4 *)(lVar10 + 0x90);
    local_6b8 = lVar10 + 0xf8;
    local_6d0 = lVar10 + 0xe8;
    local_6c0 = *(undefined1 *)(lVar10 + 0xf1);
    local_6d8 = lVar10 + 200;
    local_6e0 = lVar10 + 0x98;
    local_6c8 = *(undefined1 *)(lVar10 + 0xf0);
    local_6f0 = lVar10 + 0x78;
    local_6f8 = lVar10 + 0x60;
    SWidget::SWidgetConstruct(plVar13,lVar10,lVar10 + 0x30,lVar10 + 0x40);
    plVar2 = local_688;
    plVar11 = (longlong *)local_670[1];
    local_6a0 = *local_670;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    local_650 = local_6a0;
    local_648 = plVar11;
    FUN_1420edf20(local_688,lVar10,&local_650);
    (**(code **)(*plVar2 + 0x78))
              (plVar2,*(undefined4 *)(local_6a0 + 0x2f8),lVar10 + 0x178,local_668);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar11 + 1;
      lVar10 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    if (((char)plVar12[4] < '\0') ||
       (cVar5 = (**(code **)(*plVar13 + 0x1e8))(plVar13), cVar5 != '\0')) {
      bVar6 = 1;
    }
    else {
      bVar6 = 0;
    }
    plVar11 = local_680;
    *(byte *)((longlong)plVar12 + 0x21) = *(byte *)((longlong)plVar12 + 0x21) & 0xfe;
    *(byte *)((longlong)plVar12 + 0x21) = *(byte *)((longlong)plVar12 + 0x21) | bVar6;
    if (local_680 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_680 + 1) = (int)local_680[1] + 1;
      UNLOCK();
      LOCK();
      plVar12 = local_680 + 1;
      lVar10 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_680)(local_680);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_680 + 8))(local_680,1);
        }
      }
    }
    FUN_140690c40(local_598);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar8 + 1;
      lVar10 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      LOCK();
      plVar11 = plVar8 + 1;
      lVar10 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      LOCK();
      plVar11 = plVar8 + 1;
      lVar10 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar8)(plVar8);
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
    FUN_140691150(local_3d8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_610);
    if (local_628 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_628 + 1;
      lVar10 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_628)(local_628);
        LOCK();
        piVar1 = (int *)((longlong)local_628 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_628 + 8))(local_628,1);
        }
      }
    }
    if (local_5c0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_5c0 + 1;
      lVar10 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_5c0)(local_5c0);
        LOCK();
        piVar1 = (int *)((longlong)local_5c0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_5c0 + 8))(local_5c0,1);
        }
      }
    }
    plVar8 = local_680;
    *param_2 = local_688;
    param_2[1] = local_680;
    if (local_680 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_680 + 1) = (int)local_680[1] + 1;
      UNLOCK();
      LOCK();
      plVar11 = local_680 + 1;
      lVar10 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_680)(local_680);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_680 + 8))(local_680,1);
        }
      }
    }
    plVar8 = local_638;
    if (local_638 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_638 + 1;
      lVar10 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_638)(local_638);
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
    return param_2;
  }
  puVar7 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_600)
  ;
  local_6a0 = *puVar7;
  plVar8 = (longlong *)puVar7[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  if (local_5f8 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_5f8 + 1;
    lVar10 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_5f8)(local_5f8);
      LOCK();
      piVar1 = (int *)((longlong)local_5f8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_5f8 + 8))(local_5f8,1);
      }
    }
  }
  plVar11 = plVar8 + 1;
  local_660 = local_6a0;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar11 = (int)*plVar11 + 1;
    UNLOCK();
  }
  if (*(int *)(param_1 + 0x510) == 0) {
    plVar12 = (longlong *)0x0;
  }
  else {
    plVar12 = *(longlong **)(param_1 + 0x508);
  }
  local_658 = plVar8;
  (**(code **)(*plVar12 + 0x38))(plVar12,param_2,local_6a8,&local_660);
  plVar12 = local_658;
  if (local_658 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_658 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_658)(local_658);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  if (plVar8 == (longlong *)0x0) {
    return param_2;
  }
  LOCK();
  lVar10 = *plVar11;
  *(int *)plVar11 = (int)*plVar11 + -1;
  UNLOCK();
  if ((int)lVar10 != 1) {
    return param_2;
  }
  (**(code **)*plVar8)(plVar8);
  LOCK();
  piVar1 = (int *)((longlong)plVar8 + 0xc);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar3 != 1) {
    return param_2;
  }
  (**(code **)(*plVar8 + 8))(plVar8,1);
  return param_2;
}



// FUNCTION 1420f84e0 FUN_1420f84e0 body=671 status=ok
// SIG undefined FUN_1420f84e0(void)

void FUN_1420f84e0(longlong *param_1,undefined8 *param_2,int param_3,int param_4,undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 local_res8 [8];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_68 [3] [16];
  
  FUN_142100550(param_1 + 0x87,&local_c8,param_2);
  plVar10 = (longlong *)CONCAT44(uStack_c4,local_c8);
  if (plVar10 == (longlong *)0x0) {
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x268))(param_1,local_78,*param_2);
    local_b0 = (longlong *)puVar8[1];
    uVar4 = *puVar8;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
      UNLOCK();
    }
    local_c8 = (undefined4)uVar4;
    uStack_c4 = (undefined4)((ulonglong)uVar4 >> 0x20);
    local_b8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&uStack_c0,&local_b0);
    plVar10 = local_b0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b0 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_70 + 1;
      lVar9 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)local_70 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    plVar10 = (longlong *)CONCAT44(uStack_c4,local_c8);
  }
  (**(code **)(*plVar10 + 0x10))(plVar10,param_3);
  uVar7 = uStack_bc;
  uStack_90 = uStack_c0;
  uVar6 = uStack_c4;
  uVar5 = local_c8;
  local_68[0]._4_4_ = uStack_c4;
  local_68[0]._0_4_ = local_c8;
  local_68[0]._8_4_ = uStack_c0;
  local_68[0]._12_4_ = uStack_bc;
  lVar9 = 0;
  if (local_68[0]._8_8_ != 0) {
    LOCK();
    piVar2 = (int *)(local_68[0]._8_8_ + 8);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    lVar9 = CONCAT44(uStack_bc,uStack_c0);
    plVar10 = (longlong *)CONCAT44(uStack_c4,local_c8);
  }
  FUN_14210c690(param_1 + 0x87,*param_2,local_68);
  (**(code **)(*plVar10 + 0x50))(plVar10,&local_a8);
  FUN_14185c5d0(local_a8,param_5);
  SWidget::GetDesiredSize(local_a8,local_res8);
  if (param_3 < param_4) {
    uStack_7c = uVar7;
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
      lVar9 = CONCAT44(uStack_bc,uStack_c0);
    }
    local_88 = uVar5;
    uStack_84 = uVar6;
    uStack_80 = uStack_90;
    FUN_1419b3c90(param_1,&local_88);
    plVar10 = (longlong *)CONCAT44(uStack_7c,uStack_80);
  }
  else {
    uStack_8c = uVar7;
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
      lVar9 = CONCAT44(uStack_bc,uStack_c0);
    }
    local_98 = uVar5;
    uStack_94 = uVar6;
    FUN_1419aa990(param_1,&local_98);
    plVar10 = (longlong *)CONCAT44(uStack_8c,uStack_90);
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar10 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
    lVar9 = CONCAT44(uStack_bc,uStack_c0);
  }
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_a0 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)local_a0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
    lVar9 = CONCAT44(uStack_bc,uStack_c0);
  }
  if (lVar9 != 0) {
    LOCK();
    piVar2 = (int *)(lVar9 + 8);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      puVar8 = (undefined8 *)CONCAT44(uStack_bc,uStack_c0);
      (**(code **)*puVar8)(puVar8);
      LOCK();
      piVar2 = (int *)((longlong)puVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*(longlong *)CONCAT44(uStack_bc,uStack_c0) + 8))
                  ((longlong *)CONCAT44(uStack_bc,uStack_c0),1);
      }
    }
  }
  return;
}



// FUNCTION 1420f8780 GetInitialDesiredPositionInScreen body=16 status=ok
// SIG undefined GetInitialDesiredPositionInScreen(void)

undefined8 * SWindow::GetInitialDesiredPositionInScreen(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x420);
  return param_2;
}



// FUNCTION 1420f8790 FUN_1420f8790 body=109 status=ok
// SIG undefined FUN_1420f8790(void)

longlong FUN_1420f8790(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 local_98 [144];
  
  if ((*(int *)(param_1 + 0x98) != 0) && (*(longlong **)(param_1 + 0x90) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x98) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x90);
      }
      (**(code **)(*plVar2 + 0x38))(plVar2,local_98);
      FUN_1406922e0(param_1,local_98);
      FSlateBrush::~FSlateBrush(local_98);
    }
  }
  return param_1;
}



// FUNCTION 1420f8800 GetAbsoluteSize body=56 status=ok
// SIG undefined GetAbsoluteSize(void)

float * USlateBlueprintLibrary::GetAbsoluteSize(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_2[1];
  fVar2 = *param_2;
  fVar3 = param_2[8];
  fVar4 = param_2[10];
  *param_1 = fVar1 * param_2[9] + fVar2 * param_2[7];
  param_1[1] = fVar2 * fVar3 + fVar1 * fVar4;
  return param_1;
}



// FUNCTION 1420f8840 FUN_1420f8840 body=156 status=ok
// SIG undefined FUN_1420f8840(void)

undefined8 FUN_1420f8840(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    iVar4 = *(int *)(param_1 + 0x118);
  }
  else {
    if ((*(int *)(lVar1 + 0x218) != 0) && (*(longlong **)(lVar1 + 0x210) != (longlong *)0x0)) {
      cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x210) + 0x18))();
      if (cVar2 != '\0') {
        if (*(int *)(lVar1 + 0x218) == 0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = *(longlong **)(lVar1 + 0x210);
        }
        uVar3 = (**(code **)(*plVar5 + 0x38))();
        *(undefined4 *)(lVar1 + 0x208) = uVar3;
      }
    }
    iVar4 = *(int *)(lVar1 + 0x208);
  }
  if ((-1 < iVar4) && (iVar4 < *(int *)(param_1 + 0x108))) {
    return *(undefined8 *)
            (*(longlong *)(*(longlong *)(param_1 + 0x100) + (longlong)iVar4 * 8) + 0x30);
  }
  return 0;
}



// FUNCTION 1420f88e0 FUN_1420f88e0 body=105 status=ok
// SIG undefined FUN_1420f88e0(void)

undefined4 FUN_1420f88e0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 != 0) {
    if ((*(int *)(lVar1 + 0x218) != 0) && (*(longlong **)(lVar1 + 0x210) != (longlong *)0x0)) {
      cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x210) + 0x18))();
      if (cVar2 != '\0') {
        if (*(int *)(lVar1 + 0x218) == 0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = *(longlong **)(lVar1 + 0x210);
        }
        uVar3 = (**(code **)(*plVar4 + 0x38))();
        *(undefined4 *)(lVar1 + 0x208) = uVar3;
      }
    }
    return *(undefined4 *)(lVar1 + 0x208);
  }
  return *(undefined4 *)(param_1 + 0x118);
}



// FUNCTION 1420f8950 GetAlignment body=141 status=ok
// SIG undefined GetAlignment(void)

undefined8 * UCanvasPanelSlot::GetAlignment(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 local_res8;
  
  lVar1 = *(longlong *)(param_1 + 0x68);
  if (lVar1 != 0) {
    if ((*(int *)(lVar1 + 0x88) != 0) && (*(longlong **)(lVar1 + 0x80) != (longlong *)0x0)) {
      cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x80) + 0x18))();
      if (cVar2 != '\0') {
        if (*(int *)(lVar1 + 0x88) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(lVar1 + 0x80);
        }
        (**(code **)(*plVar3 + 0x38))(plVar3,&local_res8);
        *(undefined8 *)(lVar1 + 0x70) = local_res8;
      }
    }
    *param_2 = *(undefined8 *)(lVar1 + 0x70);
    return param_2;
  }
  *param_2 = *(undefined8 *)(param_1 + 0x58);
  return param_2;
}



// FUNCTION 1420f89e0 GetAlignmentInViewport body=16 status=ok
// SIG undefined GetAlignmentInViewport(void)

undefined8 * UUserWidget::GetAlignmentInViewport(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x1d8);
  return param_2;
}



// FUNCTION 1420f89f0 FUN_1420f89f0 body=108 status=ok
// SIG undefined FUN_1420f89f0(void)

void FUN_1420f89f0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 local_res8;
  longlong local_res10;
  code *local_18;
  undefined8 *puStack_10;
  
  puStack_10 = &local_res8;
  local_18 = UE4Function_Private::
             TFunctionRefCaller<<lambda_dadf7409b85dba36764c7ab939093d40>,void___cdecl(UObject_*)>::
             Call;
  local_res10 = *(longlong *)(param_1 + 0x28);
  if (local_res10 != 0) {
    local_res8 = param_2;
    UE4Function_Private::
    TFunctionRefCaller<<lambda_dadf7409b85dba36764c7ab939093d40>,void___cdecl(UObject_*)>::Call
              (&local_res8,&local_res10);
    FUN_1420f6990(*(undefined8 *)(param_1 + 0x28),&local_18,param_3);
  }
  return;
}



// FUNCTION 1420f8a60 FUN_1420f8a60 body=524 status=ok
// SIG undefined FUN_1420f8a60(void)

void FUN_1420f8a60(longlong param_1,longlong *param_2,longlong param_3,char param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong local_38;
  ulonglong local_30;
  int local_28;
  
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  if (param_3 != 0) {
    lVar4 = UUserWidget::GetPrivateStaticClass();
    lVar5 = param_3;
    do {
      if (lVar5 == lVar4) {
        if (param_1 == 0) {
          return;
        }
        lVar5 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
        if (lVar5 == 0) {
          return;
        }
        local_38 = 0;
        local_30 = 0;
        local_28 = -1;
        uVar6 = UUserWidget::GetPrivateStaticClass();
        FUN_1417a5560(uVar6,&local_38,1,0x10,0);
        uVar9 = local_30 & 0xffffffff;
        goto joined_r0x0001420f8b32;
      }
      lVar5 = *(longlong *)(lVar5 + 0x30);
    } while (lVar5 != 0);
  }
  return;
  while (*(longlong *)(local_38 + (longlong)local_28 * 8) == 0) {
joined_r0x0001420f8b32:
    local_28 = local_28 + 1;
    if ((int)local_30 <= local_28) break;
  }
  do {
    if ((local_28 < 0) || ((int)uVar9 <= local_28)) {
      if (local_38 == 0) {
        return;
      }
      FMemory::Free(local_38);
      return;
    }
    plVar2 = *(longlong **)(local_38 + (longlong)local_28 * 8);
    lVar4 = (**(code **)(*plVar2 + 0x148))(plVar2);
    if (lVar4 == lVar5) {
      lVar7 = UUserWidget::GetPrivateStaticClass();
      lVar4 = param_3;
      do {
        lVar8 = param_3;
        if (lVar4 == lVar7) break;
        lVar4 = *(longlong *)(lVar4 + 0x30);
        lVar8 = 0;
      } while (lVar4 != 0);
      for (lVar4 = plVar2[2]; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
        if (lVar4 == lVar8) {
          if (param_4 != '\0') {
            if ((plVar2[0x3c] == 0) || (plVar2[0x3d] == 0)) break;
            piVar1 = (int *)(plVar2[0x3d] + 8);
            LOCK();
            iVar3 = *piVar1;
            if (iVar3 == 0) {
              *piVar1 = 0;
              iVar3 = 0;
            }
            UNLOCK();
            if (iVar3 < 1) break;
          }
          iVar3 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar3 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
          }
          *(longlong **)(*param_2 + (longlong)iVar3 * 8) = plVar2;
          break;
        }
      }
    }
    uVar9 = local_30 & 0xffffffff;
    do {
      local_28 = local_28 + 1;
      if ((int)local_30 <= local_28) break;
    } while (*(longlong *)(local_38 + (longlong)local_28 * 8) == 0);
  } while( true );
}



// FUNCTION 1420f8c70 FUN_1420f8c70 body=540 status=ok
// SIG undefined FUN_1420f8c70(void)

void FUN_1420f8c70(longlong param_1,longlong param_2,longlong *param_3,char param_4)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong local_38;
  ulonglong local_30;
  int local_28;
  
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_3,0);
  }
  if (param_2 != 0) {
    lVar5 = UInterface::GetPrivateStaticClass();
    lVar6 = param_2;
    do {
      if (lVar6 == lVar5) {
        if (param_1 == 0) {
          return;
        }
        lVar6 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
        if (lVar6 == 0) {
          return;
        }
        local_38 = 0;
        local_30 = 0;
        local_28 = -1;
        uVar7 = UUserWidget::GetPrivateStaticClass();
        FUN_1417a5560(uVar7,&local_38,1,0x10,0);
        uVar10 = local_30 & 0xffffffff;
        goto joined_r0x0001420f8d42;
      }
      lVar6 = *(longlong *)(lVar6 + 0x30);
    } while (lVar6 != 0);
  }
  return;
  while (*(longlong *)(local_38 + (longlong)local_28 * 8) == 0) {
joined_r0x0001420f8d42:
    local_28 = local_28 + 1;
    if ((int)local_30 <= local_28) break;
  }
  do {
    if ((local_28 < 0) || ((int)uVar10 <= local_28)) {
      if (local_38 == 0) {
        return;
      }
      FMemory::Free(local_38);
      return;
    }
    plVar2 = *(longlong **)(local_38 + (longlong)local_28 * 8);
    lVar5 = (**(code **)(*plVar2 + 0x148))(plVar2);
    if (lVar5 == lVar6) {
      if (param_4 == '\0') {
        lVar8 = UInterface::GetPrivateStaticClass();
        lVar5 = param_2;
        do {
          lVar9 = param_2;
          if (lVar5 == lVar8) goto LAB_1420f8df6;
          lVar5 = *(longlong *)(lVar5 + 0x30);
        } while (lVar5 != 0);
        lVar9 = 0;
LAB_1420f8df6:
        cVar3 = UClass::ImplementsInterface(plVar2[2],lVar9);
        if (cVar3 != '\0') {
          iVar4 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar4 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar4 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar4);
          }
          *(longlong **)(*param_3 + (longlong)iVar4 * 8) = plVar2;
        }
      }
      else if ((plVar2[0x3c] != 0) && (plVar2[0x3d] != 0)) {
        piVar1 = (int *)(plVar2[0x3d] + 8);
        LOCK();
        iVar4 = *piVar1;
        if (iVar4 == 0) {
          *piVar1 = 0;
          iVar4 = 0;
        }
        UNLOCK();
        if (0 < iVar4) {
          lVar8 = UInterface::GetPrivateStaticClass();
          lVar5 = param_2;
          do {
            lVar9 = param_2;
            if (lVar5 == lVar8) break;
            lVar5 = *(longlong *)(lVar5 + 0x30);
            lVar9 = 0;
          } while (lVar5 != 0);
          goto LAB_1420f8df6;
        }
      }
    }
    uVar10 = local_30 & 0xffffffff;
    do {
      local_28 = local_28 + 1;
      if ((int)local_30 <= local_28) break;
    } while (*(longlong *)(local_38 + (longlong)local_28 * 8) == 0);
  } while( true );
}



// FUNCTION 1420f8e90 GetAnchors body=123 status=ok
// SIG undefined GetAnchors(void)

undefined8 * UCanvasPanelSlot::GetAnchors(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  
  lVar1 = *(longlong *)(param_1 + 0x68);
  if (lVar1 != 0) {
    if ((*(int *)(lVar1 + 0x68) != 0) && (*(longlong **)(lVar1 + 0x60) != (longlong *)0x0)) {
      cVar3 = (**(code **)(**(longlong **)(lVar1 + 0x60) + 0x18))();
      if (cVar3 != '\0') {
        if (*(int *)(lVar1 + 0x68) == 0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = *(longlong **)(lVar1 + 0x60);
        }
        (**(code **)(*plVar4 + 0x38))(plVar4,&local_18);
        *(undefined8 *)(lVar1 + 0x48) = local_18;
        *(undefined8 *)(lVar1 + 0x50) = uStack_10;
      }
    }
    uVar2 = *(undefined8 *)(lVar1 + 0x50);
    *param_2 = *(undefined8 *)(lVar1 + 0x48);
    param_2[1] = uVar2;
    return param_2;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  *param_2 = *(undefined8 *)(param_1 + 0x48);
  param_2[1] = uVar2;
  return param_2;
}



// FUNCTION 1420f8f10 GetAnchorsInViewport body=14 status=ok
// SIG undefined GetAnchorsInViewport(void)

undefined8 * UUserWidget::GetAnchorsInViewport(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1c0);
  *param_2 = *(undefined8 *)(param_1 + 0x1b8);
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1420f8f20 GetAnimTypeID body=352 status=ok
// SIG undefined GetAnimTypeID(void)

undefined8 *
TMovieSceneAnimTypeIDContainer<TArray<FName,FDefaultAllocator>_>::GetAnimTypeID
          (int *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  void *_Src;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  
  do {
    LOCK();
    iVar1 = *param_1;
    *param_1 = 1;
    UNLOCK();
  } while (iVar1 != 0);
  plVar2 = *(longlong **)(param_1 + 6);
  iVar1 = param_1[8];
  if (plVar2 != plVar2 + (longlong)iVar1 * 2) {
    plVar7 = plVar2;
    do {
      iVar5 = (int)plVar7[1];
      if (iVar5 == (int)param_3[1]) {
        plVar3 = (longlong *)*param_3;
        if (iVar5 == 0) {
LAB_1420f8fa8:
          iVar5 = (int)((longlong)plVar7 - (longlong)plVar2 >> 4);
          if (iVar5 != -1) {
            uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 2) + (longlong)iVar5 * 8);
            LOCK();
            *param_1 = 0;
            UNLOCK();
            *param_2 = uVar4;
            return param_2;
          }
          break;
        }
        lVar8 = *plVar7 - (longlong)plVar3;
        while (*(longlong *)(lVar8 + (longlong)plVar3) == *plVar3) {
          plVar3 = plVar3 + 1;
          iVar5 = iVar5 + -1;
          if (iVar5 == 0) goto LAB_1420f8fa8;
        }
      }
      plVar7 = plVar7 + 2;
    } while (plVar7 != plVar2 + (longlong)iVar1 * 2);
  }
  param_1[8] = iVar1 + 1;
  if (param_1[9] < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 6,iVar1);
  }
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 6) + (longlong)iVar1 * 0x10);
  *puVar6 = 0;
  iVar1 = (int)param_3[1];
  _Src = (void *)*param_3;
  *(int *)(puVar6 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar6,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)*puVar6,_Src,(longlong)iVar1 << 3);
  }
  uVar4 = FMovieSceneAnimTypeID::GenerateHash(param_1,param_1[4]);
  iVar1 = param_1[4];
  param_1[4] = iVar1 + 1;
  if (param_1[5] < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 2) + (longlong)iVar1 * 8) = uVar4;
  LOCK();
  *param_1 = 0;
  UNLOCK();
  *param_2 = uVar4;
  return param_2;
}



// FUNCTION 1420f9080 FUN_1420f9080 body=144 status=ok
// SIG undefined FUN_1420f9080(void)

void FUN_1420f9080(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x170);
    plVar1 = plVar2 + *(int *)(param_1 + 0x178);
    for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
      if (*(longlong *)(*plVar2 + 0x378) == param_2) {
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        return;
      }
    }
  }
  return;
}



// FUNCTION 1420f9110 GetAutoSize body=101 status=ok
// SIG undefined GetAutoSize(void)

undefined1 UCanvasPanelSlot::GetAutoSize(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x68);
  if (lVar1 != 0) {
    if ((*(int *)(lVar1 + 0xa0) != 0) && (*(longlong **)(lVar1 + 0x98) != (longlong *)0x0)) {
      cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x98) + 0x18))();
      if (cVar2 != '\0') {
        if (*(int *)(lVar1 + 0xa0) == 0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = *(longlong **)(lVar1 + 0x98);
        }
        uVar3 = (**(code **)(*plVar4 + 0x38))();
        *(undefined1 *)(lVar1 + 0x90) = uVar3;
      }
    }
    return *(undefined1 *)(lVar1 + 0x90);
  }
  return *(undefined1 *)(param_1 + 0x60);
}



// FUNCTION 1420f9180 FUN_1420f9180 body=29 status=ok
// SIG undefined FUN_1420f9180(void)

undefined8 FUN_1420f9180(longlong param_1)

{
  FUN_142142570(param_1,0);
  return *(undefined8 *)(param_1 + 0x7c0);
}



// FUNCTION 1420f91a0 FUN_1420f91a0 body=623 status=ok
// SIG undefined FUN_1420f91a0(void)

longlong FUN_1420f91a0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 local_28 [8];
  longlong *local_20;
  
  plVar2 = (longlong *)param_1[0x73];
  plVar10 = (longlong *)0x0;
  plVar9 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar12 = iVar5 == 0;
    if (bVar12) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar9 = plVar10, !bVar12) {
      LOCK();
      bVar12 = iVar5 == (int)plVar2[1];
      if (bVar12) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar12) {
        plVar9 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar10 = (longlong *)param_1[0x72];
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar12 = iVar5 == 0;
      if (bVar12) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  puVar6 = (undefined8 *)(**(code **)(*plVar10 + 0xa8))(plVar10,local_28);
  cVar3 = (**(code **)(*(longlong *)*puVar6 + 0x180))();
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_20 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ae8790) && (_Init_thread_header(&DAT_146ae8790), DAT_146ae8790 == -1))
  {
    FName::FName(&DAT_146ae8788,"GenericWhiteBox",1);
    _Init_thread_footer(&DAT_146ae8790);
  }
  (**(code **)(*DAT_1469eb140 + 0x40))(DAT_1469eb140,DAT_146ae8788,0);
  uVar7 = (**(code **)(*plVar10 + 0x38))(plVar10,param_1);
  cVar4 = (**(code **)(*plVar10 + 0x10))(plVar10,uVar7);
  if ((cVar4 == '\0') || (*(char *)((longlong)param_1 + 0x3a4) == '\0')) {
    iVar5 = (**(code **)(*param_1 + 0x70))(param_1);
    if ((*(byte *)(param_1 + 0x74) & 1) == 0) {
      cVar3 = (**(code **)(param_1[1] + 0x1a8))();
      if ((cVar3 == '\0') || (iVar5 == 0)) {
        lVar11 = param_1[0x75] + 0x338;
      }
      else {
        lVar11 = param_1[0x75] + 0x2b0;
      }
    }
    else {
      cVar3 = (**(code **)(param_1[1] + 0x1a8))();
      if ((cVar3 == '\0') || (iVar5 == 0)) {
        lVar11 = param_1[0x75] + 0x448;
      }
      else {
        lVar11 = param_1[0x75] + 0x3c0;
      }
    }
  }
  else {
    cVar4 = (**(code **)(param_1[1] + 0x1a8))(param_1 + 1);
    lVar11 = param_1[0x75];
    if (cVar3 == '\0') {
      if (cVar4 == '\0') {
        lVar11 = lVar11 + 0x228;
      }
      else {
        lVar11 = lVar11 + 0x1a0;
      }
    }
    else {
      lVar8 = 0x118;
      if (cVar4 != '\0') {
        lVar8 = 0x90;
      }
      lVar11 = lVar11 + lVar8;
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return lVar11;
}



// FUNCTION 1420f9410 GetBrushResourceAsMaterial body=86 status=ok
// SIG undefined GetBrushResourceAsMaterial(void)

longlong UWidgetBlueprintLibrary::GetBrushResourceAsMaterial(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    lVar3 = UMaterialInterface::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1420f9470 GetBrushResourceAsTexture2D body=86 status=ok
// SIG undefined GetBrushResourceAsTexture2D(void)

longlong UWidgetBlueprintLibrary::GetBrushResourceAsTexture2D(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    lVar3 = UTexture2D::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1420f94d0 FUN_1420f94d0 body=706 status=ok
// SIG undefined FUN_1420f94d0(void)

undefined8 *
FUN_1420f94d0(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             undefined1 param_5)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_res8;
  float local_88;
  float fStack_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined8 local_68;
  undefined4 local_60;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x18);
  if ((((cVar2 != '\0') && (lVar3 = FWeakObjectPtr::Get(param_1 + 0x18), lVar3 != 0)) &&
      (lVar3 = UEngine::GetLocalPlayerFromControllerId(DAT_146b17150,lVar3,0), lVar3 != 0)) &&
     (*(longlong *)(lVar3 + 0x30) != 0)) {
    local_88 = (float)param_4;
    fVar7 = 1.0 / (*(float *)(param_3 + 0x1c) * *(float *)(param_3 + 0x28) -
                  *(float *)(param_3 + 0x20) * *(float *)(param_3 + 0x24));
    fVar8 = fVar7 * *(float *)(param_3 + 0x28);
    fVar6 = -(fVar7 * *(float *)(param_3 + 0x24));
    fVar5 = fVar7 * *(float *)(param_3 + 0x1c);
    fVar7 = -(fVar7 * *(float *)(param_3 + 0x20));
    fStack_84 = (float)((ulonglong)param_4 >> 0x20);
    plVar4 = (longlong *)
             FWidget3DHitTester::GetHitResultAtScreenPositionAndCache
                       (param_1,*(longlong *)(lVar3 + 0x30),
                        CONCAT44((local_88 * fVar7 + fStack_84 * fVar5 +
                                 -*(float *)(param_3 + 0x2c) * fVar7 +
                                 -*(float *)(param_3 + 0x30) * fVar5) * *(float *)(param_3 + 8),
                                 (local_88 * fVar8 + fStack_84 * fVar6 +
                                 -*(float *)(param_3 + 0x2c) * fVar8 +
                                 fVar6 * -*(float *)(param_3 + 0x30)) * *(float *)(param_3 + 8)));
    if (plVar4 != (longlong *)0x0) {
      lVar3 = AUGDungeon::GetPrivateStaticClass();
      if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (((bVar1) && (*(char *)((longlong)plVar4 + 0x764) != '\0')) &&
         (((float)(int)plVar4[0xe7] != 0.0 &&
          (((float)(int)((ulonglong)plVar4[0xe7] >> 0x20) != 0.0 &&
           (FUN_142369f10(plVar4,&local_80),
           local_7c * (*(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x78)) +
           local_80 * (*(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x74)) +
           local_78 * (*(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x7c)) < 0.0)))))) {
        local_60 = *(undefined4 *)(param_1 + 0x4c);
        local_68 = *(undefined8 *)(param_1 + 0x44);
        (**(code **)(*plVar4 + 0x948))(plVar4,&local_68,&local_res8);
        FUN_1420fbd30(plVar4,param_2,local_res8,param_5,0);
        return param_2;
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1420f97a0 FUN_1420f97a0 body=139 status=ok
// SIG undefined FUN_1420f97a0(void)

longlong FUN_1420f97a0(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  FUN_1420f9830(param_1,&local_18);
  plVar5 = local_10;
  if (local_18 == 0) {
    local_18 = DAT_1469eb218;
  }
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
    return local_18 + 0x4c;
  }
  return local_18 + 0x4c;
}



// FUNCTION 1420f9830 FUN_1420f9830 body=319 status=ok
// SIG undefined FUN_1420f9830(void)

undefined8 * FUN_1420f9830(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  plVar5 = (longlong *)0x0;
  if ((*(longlong *)(param_1 + 0xe0) != 0) && (*(longlong *)(param_1 + 0xe8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0xe8) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      plVar2 = *(longlong **)(param_1 + 0xe8);
      plVar6 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        iVar4 = (int)plVar2[1];
        bVar7 = iVar4 == 0;
        if (bVar7) {
          *(int *)(plVar2 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
        while (plVar6 = plVar5, !bVar7) {
          LOCK();
          bVar7 = iVar4 == (int)plVar2[1];
          if (bVar7) {
            *(int *)(plVar2 + 1) = iVar4 + 1;
          }
          UNLOCK();
          if (bVar7) {
            plVar6 = plVar2;
            if (plVar2 != (longlong *)0x0) {
              plVar5 = *(longlong **)(param_1 + 0xe0);
            }
            break;
          }
          LOCK();
          iVar4 = (int)plVar2[1];
          bVar7 = iVar4 == 0;
          if (bVar7) {
            *(int *)(plVar2 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
        }
      }
      *param_2 = plVar5;
      param_2[1] = plVar6;
      if (plVar6 == (longlong *)0x0) {
        return param_2;
      }
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      plVar5 = plVar6 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      return param_2;
    }
  }
  *param_2 = 0;
  lVar3 = *(longlong *)(param_1 + 0xd8);
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    iVar4 = *(int *)(lVar3 + 8);
    bVar7 = iVar4 == 0;
    if (bVar7) {
      *(int *)(lVar3 + 8) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (!bVar7) {
      LOCK();
      bVar7 = iVar4 == *(int *)(lVar3 + 8);
      if (bVar7) {
        *(int *)(lVar3 + 8) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar7) {
        plVar5 = (longlong *)param_2[1];
        goto LAB_1420f9951;
      }
      LOCK();
      iVar4 = *(int *)(lVar3 + 8);
      bVar7 = iVar4 == 0;
      if (bVar7) {
        *(int *)(lVar3 + 8) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
    param_2[1] = 0;
LAB_1420f9951:
    if (plVar5 != (longlong *)0x0) {
      *param_2 = *(undefined8 *)(param_1 + 0xd0);
    }
  }
  return param_2;
}



// FUNCTION 1420f9970 FUN_1420f9970 body=28 status=ok
// SIG undefined FUN_1420f9970(void)

undefined1 FUN_1420f9970(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x120) != 0) {
    return *(undefined1 *)(*(longlong *)(param_1 + 0x120) + 0x46b);
  }
  return *(undefined1 *)(param_1 + 0x118);
}



// FUNCTION 1420f9990 GetCheckedState body=28 status=ok
// SIG undefined GetCheckedState(void)

ulonglong UCheckBox::GetCheckedState(longlong param_1)

{
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x758) != 0) {
    uVar1 = FUN_14193f350(*(longlong *)(param_1 + 0x758));
    return uVar1;
  }
  return (ulonglong)*(byte *)(param_1 + 0x118);
}



// FUNCTION 1420f99b0 GetChildAt body=39 status=ok
// SIG undefined GetChildAt(void)

undefined8 UPanelWidget::GetChildAt(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x108))) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x100) + (longlong)param_2 * 8), lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 0x30);
  }
  return 0;
}



// FUNCTION 1420f99e0 GetChildIndex body=84 status=ok
// SIG undefined GetChildIndex(void)

int UPanelWidget::GetChildIndex(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x108)) {
    lVar2 = 0;
    do {
      if (((lVar2 < 0) || (*(int *)(param_1 + 0x108) <= iVar3)) ||
         (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x100) + lVar2 * 8), lVar1 == 0)) {
        lVar1 = 0;
      }
      else {
        lVar1 = *(longlong *)(lVar1 + 0x30);
      }
      if (lVar1 == param_2) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x108));
  }
  return -1;
}



// FUNCTION 1420f9a60 FUN_1420f9a60 body=7 status=ok
// SIG undefined FUN_1420f9a60(void)

undefined4 FUN_1420f9a60(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x108);
}



// FUNCTION 1420f9a70 FUN_1420f9a70 body=150 status=ok
// SIG undefined FUN_1420f9a70(void)

undefined1 FUN_1420f9a70(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 uVar6;
  longlong local_18;
  longlong *local_10;
  
  FUN_1420f9830(param_1,&local_18);
  plVar5 = local_10;
  if (local_18 == 0) {
    uVar6 = *(undefined1 *)(param_1 + 0xb6);
  }
  else {
    uVar6 = *(undefined1 *)(local_18 + 0x1a);
  }
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
    return uVar6;
  }
  return uVar6;
}



// FUNCTION 1420f9b10 FUN_1420f9b10 body=233 status=ok
// SIG undefined FUN_1420f9b10(void)

undefined4 * FUN_1420f9b10(longlong param_1,undefined4 *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = DAT_1468b5d94;
  if (*(char *)(param_1 + 0x728) != '\x01') {
    fVar3 = *(float *)(param_1 + 0x230) * 0.01 + param_3;
    fVar1 = (float)*(int *)(param_1 + 0x738) * 0.5 * *(float *)(param_1 + 0x234) + param_3;
    fVar2 = (float)*(int *)(param_1 + 0x73c) * 0.5 * *(float *)(param_1 + 0x238) + param_3;
    if (param_3 < 0.0) {
      if (fVar3 <= DAT_1468b5d90) {
        fVar3 = DAT_1468b5d90;
      }
      if (fVar1 <= DAT_1468b5d94) {
        fVar1 = DAT_1468b5d94;
      }
      if (fVar2 <= DAT_1468b5d98) {
        fVar2 = DAT_1468b5d98;
      }
    }
    param_2[1] = fVar3;
    param_2[2] = fVar1;
    param_2[3] = fVar2;
    *param_2 = 1;
    return param_2;
  }
  param_2[1] = DAT_1468b5d90;
  param_2[3] = DAT_1468b5d98;
  param_2[2] = fVar1;
  *param_2 = 1;
  return param_2;
}



// FUNCTION 1420f9c00 FUN_1420f9c00 body=99 status=ok
// SIG undefined FUN_1420f9c00(void)

undefined8 * FUN_1420f9c00(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x70);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14237e540(puVar1,param_1);
    *puVar1 = &PTR_FUN_144fafcc0;
    puVar1[0xc] = *(undefined8 *)(param_1 + 0x730);
    puVar1[0xd] = *(undefined8 *)(param_1 + 0x7f8);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420f9c70 FUN_1420f9c70 body=151 status=ok
// SIG undefined FUN_1420f9c70(void)

undefined8 * FUN_1420f9c70(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar5 = (undefined8 *)
           (**(code **)(*(longlong *)(param_1 + -0x100) + 0x10))
                     ((longlong *)(param_1 + -0x100),local_18,0);
  *param_2 = *puVar5;
  lVar4 = puVar5[1];
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
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
    return param_2;
  }
  return param_2;
}



// FUNCTION 1420f9d10 GetContent body=32 status=ok
// SIG undefined GetContent(void)

undefined8 UContentWidget::GetContent(longlong param_1)

{
  if ((0 < *(int *)(param_1 + 0x108)) && (**(longlong **)(param_1 + 0x100) != 0)) {
    return *(undefined8 *)(**(longlong **)(param_1 + 0x100) + 0x30);
  }
  return 0;
}



// FUNCTION 1420f9da0 GetContentSlot body=23 status=ok
// SIG undefined GetContentSlot(void)

undefined8 UContentWidget::GetContentSlot(longlong param_1)

{
  if (0 < *(int *)(param_1 + 0x108)) {
    return **(undefined8 **)(param_1 + 0x100);
  }
  return 0;
}



// FUNCTION 1420f9dc0 FUN_1420f9dc0 body=450 status=ok
// SIG undefined FUN_1420f9dc0(void)

longlong * FUN_1420f9dc0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  longlong local_res18;
  longlong local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong *plStack_40;
  code *local_38;
  undefined1 *puStack_30;
  code *local_28;
  undefined1 *puStack_20;
  
  plVar1 = (longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    local_res18 = 0;
    plVar5 = (longlong *)FWeakObjectPtr::Get(param_1 + 8);
    uVar6 = FUN_14178ac60(plVar5,*(undefined8 *)(param_1 + 0x10));
    (**(code **)(*plVar5 + 0x208))(plVar5,uVar6,&local_res18);
    if (local_res18 == 0) {
      *param_2 = DAT_1469eb218;
      lVar7 = DAT_1469eb220;
    }
    else {
      puStack_30 = local_res8;
      local_res8[0] = 0;
      local_38 = UE4Function_Private::
                 TFunctionRefCaller<<lambda_9660092bd0920007bd48b3b3f2c569b9>,TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                 ::Call;
      local_28 = UE4Function_Private::
                 TFunctionRefCaller<<lambda_9660092bd0920007bd48b3b3f2c569b9>,TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                 ::Call;
      puStack_20 = puStack_30;
      FUN_14213eb80(local_res18,&local_58,&local_28);
      plVar5 = plStack_50;
      local_48 = local_58;
      plStack_40 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
        UNLOCK();
      }
      if (plVar1 != &local_48) {
        *plVar1 = local_58;
        local_48 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x20,&plStack_40);
      }
      plVar4 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        plVar5 = plStack_40 + 1;
        lVar7 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        plVar5 = plStack_50;
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_40)(plStack_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          plVar5 = plStack_50;
          if (iVar3 == 1) {
            (**(code **)(*plStack_40 + 8))(plStack_40,1);
            plVar5 = plStack_50;
          }
        }
      }
      plVar4 = plStack_50;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar5 + 1;
        lVar7 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_50)(plStack_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_50 + 8))(plStack_50,1);
          }
        }
      }
      *param_2 = *plVar1;
      lVar7 = *(longlong *)(param_1 + 0x20);
    }
    param_2[1] = lVar7;
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
    }
  }
  else {
    *param_2 = *(longlong *)(param_1 + 0x18);
    lVar7 = *(longlong *)(param_1 + 0x20);
    param_2[1] = lVar7;
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 1420f9f90 FUN_1420f9f90 body=59 status=ok
// SIG undefined FUN_1420f9f90(void)

double FUN_1420f9f90(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x729) == '\0') {
    return DAT_1468b5a78;
  }
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0();
  }
  return (double)*(float *)(lVar1 + 0x790);
}



// FUNCTION 1420f9fd0 FUN_1420f9fd0 body=1402 status=ok
// SIG undefined FUN_1420f9fd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1420f9fd0(longlong param_1,undefined8 *param_2,float *param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
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
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 unaff_XMM8 [16];
  undefined1 auVar23 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  
  auVar23 = *(undefined1 (*) [16])(param_1 + 0x230);
  fVar17 = auVar23._0_4_;
  fVar13 = auVar23._4_4_;
  fVar1 = auVar23._8_4_;
  fVar14 = (float)((uint)(*param_3 - *(float *)(param_1 + 0x220)) & _DAT_146ae7820);
  fVar15 = (float)((uint)(param_3[1] - *(float *)(param_1 + 0x224)) & uRam0000000146ae7824);
  fVar16 = (float)((uint)(param_3[2] - *(float *)(param_1 + 0x228)) & uRam0000000146ae7828);
  auVar23 = rcpps(unaff_XMM8,auVar23);
  fVar28 = *(float *)(param_1 + 0x210) * _DAT_146ae7940;
  fVar29 = *(float *)(param_1 + 0x214) * fRam0000000146ae7944;
  fVar30 = *(float *)(param_1 + 0x218) * fRam0000000146ae7948;
  fVar31 = *(float *)(param_1 + 0x21c) * fRam0000000146ae794c;
  fVar10 = fVar16 * fVar29 - fVar15 * fVar30;
  fVar11 = fVar14 * fVar30 - fVar16 * fVar28;
  fVar12 = fVar15 * fVar28 - fVar14 * fVar29;
  fVar20 = auVar23._0_4_;
  fVar24 = auVar23._4_4_;
  fVar26 = auVar23._8_4_;
  fVar10 = fVar10 + fVar10;
  fVar11 = fVar11 + fVar11;
  fVar12 = fVar12 + fVar12;
  fVar20 = (fVar20 + fVar20) - fVar20 * fVar20 * fVar17;
  fVar24 = (fVar24 + fVar24) - fVar24 * fVar24 * fVar13;
  fVar26 = (fVar26 + fVar26) - fVar26 * fVar26 * fVar1;
  bVar3 = (float)((uint)fVar17 & _DAT_146ae78e0) <= _DAT_146ae7930;
  bVar4 = (float)((uint)fVar1 & uRam0000000146ae78e8) <= fRam0000000146ae7938;
  fVar21 = (fVar20 + fVar20) - fVar20 * fVar20 * fVar17;
  fVar25 = (fVar24 + fVar24) - fVar24 * fVar24 * fVar13;
  fVar27 = (fVar26 + fVar26) - fVar26 * fVar26 * fVar1;
  fVar17 = *param_4;
  fVar1 = param_4[2];
  fVar32 = ((fVar10 * fVar30 - fVar12 * fVar28) + fVar31 * fVar11 + fVar15) *
           (float)(-(uint)((float)((uint)fVar13 & uRam0000000146ae78e4) <= fRam0000000146ae7934) &
                   (uint)fVar25 ^ (uint)fVar25);
  fVar13 = param_4[1];
  fVar15 = fVar1 * fVar29 - fVar13 * fVar30;
  fVar24 = fVar17 * fVar30 - fVar1 * fVar28;
  fVar26 = fVar13 * fVar28 - fVar17 * fVar29;
  fVar15 = fVar15 + fVar15;
  fVar24 = fVar24 + fVar24;
  fVar26 = fVar26 + fVar26;
  fVar20 = *(float *)(param_1 + 0x820) * 0.017453292;
  bVar5 = (float)(*(uint *)(param_1 + 0x238) & uRam0000000146ae78e8) <= fRam0000000146ae7938;
  fVar19 = (float)*(int *)(param_1 + 0x738) / fVar20;
  fVar33 = ((fVar26 * fVar29 - fVar24 * fVar30) + fVar31 * fVar15 + fVar17) *
           (float)(-(uint)((float)(*(uint *)(param_1 + 0x230) & _DAT_146ae78e0) <= _DAT_146ae7930) &
                   (uint)fVar21 ^ (uint)fVar21);
  fVar34 = ((fVar15 * fVar30 - fVar26 * fVar28) + fVar31 * fVar24 + fVar13) *
           (float)(-(uint)((float)(*(uint *)(param_1 + 0x234) & uRam0000000146ae78e4) <=
                          fRam0000000146ae7934) & (uint)fVar25 ^ (uint)fVar25);
  uVar9 = __libm_sse2_sincosf_(fVar20 * 0.5);
  fVar17 = (float)((ulonglong)uVar9 >> 0x20);
  fVar13 = -(fVar17 * fVar19);
  fVar22 = (float)uVar9 * (fVar19 + fVar19);
  fVar20 = (0.5 - *(float *)(param_1 + 0x75c)) * fVar22 + fVar32;
  fVar18 = fVar34 * fVar34 + fVar33 * fVar33;
  fVar25 = fVar34 * fVar20 + fVar34 * fVar20 + fVar33 * fVar13 + fVar33 * fVar13;
  fVar19 = fVar25 * fVar25 - ((fVar20 * fVar20 + fVar13 * fVar13) - fVar19 * fVar19) * fVar18 * 4.0;
  if (fVar19 < 0.0) {
    *param_2 = _DAT_1468b5d90;
    *(undefined4 *)(param_2 + 1) = DAT_1468b5d98;
    *(undefined8 *)((longlong)param_2 + 0xc) = DAT_1468b5d88;
  }
  else {
    fVar19 = (SQRT(fVar19) - fVar25) * (0.5 / fVar18);
    fVar18 = (float)FGenericPlatformMath::Atan2(CONCAT44(fVar17,fVar22 * -0.5),fVar13);
    fVar18 = fVar18 + 6.2831855;
    fVar25 = (float)(int)(fVar18 * 0.15915494) * 6.2831855;
    if (ABS(fVar18) < ABS(fVar25)) {
      fVar25 = fVar18;
    }
    fVar18 = fVar18 - fVar25;
    fVar25 = (float)FGenericPlatformMath::Atan2(CONCAT44(fVar17,fVar22 * 0.5),fVar13);
    fVar25 = fVar25 + 6.2831855;
    fVar17 = (float)(int)(fVar25 * 0.15915494) * 6.2831855;
    if (ABS(fVar25) < ABS(fVar17)) {
      fVar17 = fVar25;
    }
    fVar25 = fVar25 - fVar17;
    fVar13 = (float)FGenericPlatformMath::Atan2(fVar20 + fVar34 * fVar19,fVar33 * fVar19 + fVar13);
    fVar13 = fVar13 + 6.2831855;
    fVar17 = (float)(int)(fVar13 * 0.15915494) * 6.2831855;
    if (ABS(fVar13) < ABS(fVar17)) {
      fVar17 = fVar13;
    }
    fVar20 = *(float *)(param_1 + 0x210);
    fVar22 = *(float *)(param_1 + 0x214);
    fVar6 = *(float *)(param_1 + 0x218);
    fVar7 = *(float *)(param_1 + 0x21c);
    fVar8 = fVar25;
    if (fVar18 <= fVar25) {
      fVar8 = fVar18;
    }
    fVar24 = ((fVar24 * fVar28 - fVar15 * fVar29) + fVar31 * fVar26 + fVar1) *
             (float)(-(uint)bVar5 & (uint)fVar27 ^ (uint)fVar27) * fVar19 +
             ((fVar11 * fVar28 - fVar10 * fVar29) + fVar31 * fVar12 + fVar16) *
             (float)(-(uint)bVar4 & (uint)fVar27 ^ (uint)fVar27);
    iVar2 = *(int *)(param_1 + 0x754);
    fVar1 = *(float *)(param_1 + 0x760);
    fVar16 = (((fVar12 * fVar29 - fVar11 * fVar30) + fVar31 * fVar10 + fVar14) *
              (float)(-(uint)bVar3 & (uint)fVar21 ^ (uint)fVar21) + fVar33 * fVar19) *
             *(float *)(param_1 + 0x230);
    fVar19 = (fVar32 + fVar34 * fVar19) * *(float *)(param_1 + 0x234);
    fVar21 = fVar24 * *(float *)(param_1 + 0x238);
    fVar12 = fVar21 * fVar22 - fVar19 * fVar6;
    fVar26 = fVar16 * fVar6 - fVar21 * fVar20;
    fVar14 = fVar19 * fVar20 - fVar16 * fVar22;
    fVar12 = fVar12 + fVar12;
    fVar26 = fVar26 + fVar26;
    fVar14 = fVar14 + fVar14;
    fVar10 = *(float *)(param_1 + 0x220);
    fVar15 = *(float *)(param_1 + 0x224);
    fVar11 = *(float *)(param_1 + 0x228);
    *(float *)((longlong)param_2 + 0xc) =
         (((fVar13 - fVar17) - fVar8) / ABS(fVar25 - fVar18)) * (float)*(int *)(param_1 + 0x750);
    *(float *)(param_2 + 2) = (float)iVar2 * fVar1 - fVar24;
    *param_2 = CONCAT44((fVar12 * fVar6 - fVar14 * fVar20) + fVar7 * fVar26 + fVar19 + fVar15,
                        (fVar14 * fVar22 - fVar26 * fVar6) + fVar7 * fVar12 + fVar16 + fVar10);
    *(float *)(param_2 + 1) = (fVar26 * fVar20 - fVar12 * fVar22) + fVar7 * fVar14 + fVar21 + fVar11
    ;
  }
  return param_2;
}



// FUNCTION 1420fa550 GetPropertyTooltip body=26 status=ok
// SIG undefined GetPropertyTooltip(void)

undefined8 UPropertyValue::GetPropertyTooltip(undefined8 param_1,undefined8 param_2)

{
  FUN_1420c5f40(param_2);
  return param_2;
}



// FUNCTION 1420fa570 GetPropertyTooltip body=26 status=ok
// SIG undefined GetPropertyTooltip(void)

undefined8 UPropertyValue::GetPropertyTooltip(undefined8 param_1,undefined8 param_2)

{
  FUN_1420c5fb0(param_2);
  return param_2;
}



// FUNCTION 1420fa590 FUN_1420fa590 body=174 status=ok
// SIG undefined FUN_1420fa590(void)

longlong FUN_1420fa590(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  plVar7 = *(longlong **)(param_1 + 0x340);
  plVar1 = plVar7 + *(int *)(param_1 + 0x348);
  do {
    if (plVar7 == plVar1) {
      return 0;
    }
    lVar2 = *plVar7;
    if (param_2 != 0) {
      lVar4 = URichTextBlockDecorator::GetPrivateStaticClass();
      lVar5 = param_2;
      do {
        lVar6 = param_2;
        if (lVar5 == lVar4) goto LAB_1420fa5e3;
        lVar5 = *(longlong *)(lVar5 + 0x30);
      } while (lVar5 != 0);
    }
    lVar6 = 0;
LAB_1420fa5e3:
    lVar5 = *(longlong *)(lVar2 + 0x10);
    if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      return lVar2;
    }
    plVar7 = plVar7 + 1;
  } while( true );
}



// FUNCTION 1420fa6a0 GetDesiredSize body=135 status=ok
// SIG undefined GetDesiredSize(void)

undefined8 * UWidget::GetDesiredSize(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  FUN_1420f9830(param_1,&local_18);
  if (local_18 == 0) {
    *param_2 = 0;
  }
  else {
    SWidget::GetDesiredSize(local_18,param_2);
  }
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
  return param_2;
}



// FUNCTION 1420fa730 GetDisplayText body=404 status=ok
// SIG undefined GetDisplayText(void)

longlong UTextBlock::GetDisplayText(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 local_res8;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_28 [16];
  
  local_res8 = 0;
  if (*(longlong *)(param_1 + 0x140) != 0) {
    lVar6 = FWeakObjectPtr::Get(param_1 + 0x138);
    if (lVar6 != 0) {
      lVar6 = UObject::FindFunction(lVar6,*(undefined8 *)(param_1 + 0x140));
      if (lVar6 != 0) {
        local_res8 = *(undefined8 *)(param_1 + 0x140);
        uVar7 = FWeakObjectPtr::Get(param_1 + 0x138);
        puVar8 = (undefined1 *)FUN_1420c47a0(local_48,uVar7,&local_res8);
        bVar5 = true;
        bVar4 = false;
        goto LAB_1420fa7f2;
      }
    }
  }
  FText::FText(local_78,param_1 + 0x120);
  local_60 = 1;
  puVar8 = local_78;
  local_58 = 0;
  bVar5 = false;
  bVar4 = true;
  local_50 = 0;
LAB_1420fa7f2:
  FText::FText(param_2,puVar8);
  *(undefined1 *)(param_2 + 0x18) = puVar8[0x18];
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=((undefined8 *)(param_2 + 0x20),puVar8 + 0x20);
  if (bVar4) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_58);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)local_70 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
  }
  if (bVar5) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_28);
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
  }
  return param_2;
}



// FUNCTION 1420fa8d0 FUN_1420fa8d0 body=218 status=ok
// SIG undefined FUN_1420fa8d0(void)

longlong FUN_1420fa8d0(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *local_18;
  longlong *local_10;
  
  FUN_14189c990(DAT_1469f4590,&local_18);
  plVar3 = local_18;
  if (local_18 != (longlong *)0x0) {
    lVar8 = *local_18;
    uVar7 = FUN_1420ff340();
    cVar6 = (**(code **)(lVar8 + 0x50))(plVar3,uVar7);
    plVar3 = local_10;
    if (cVar6 != '\0') {
      if (local_10 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_10 + 1) = (int)local_10[1] + 1;
        UNLOCK();
      }
      lVar8 = local_18[0xb];
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_10 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      goto LAB_1420fa962;
    }
  }
  lVar8 = 0;
LAB_1420fa962:
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_10 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return lVar8;
}



// FUNCTION 1420fa9b0 FUN_1420fa9b0 body=38 status=ok
// SIG undefined FUN_1420fa9b0(void)

float * FUN_1420fa9b0(longlong param_1,float *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x738);
  *param_2 = (float)(int)uVar1;
  param_2[1] = (float)(int)((ulonglong)uVar1 >> 0x20);
  return param_2;
}


