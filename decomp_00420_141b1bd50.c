// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141b1bd50 FUN_141b1bd50 body=68 status=ok
// SIG undefined FUN_141b1bd50(void)

void FUN_141b1bd50(longlong param_1)

{
  FUN_141ace450(param_1 + 0x38);
  FUN_141ace450(param_1 + 0x60);
  FUN_141b38020(param_1 + 0x88);
  FUN_141b38020(param_1 + 0xb0);
  FUN_141b38020(param_1 + 0xd8);
  return;
}



// FUNCTION 141b1bda0 Serialize body=89 status=ok
// SIG undefined Serialize(void)

undefined1 FUploadObjectsToBufferCS::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_1419e0a40(param_2,param_1 + 0xc0);
  FUN_1419e0b60(param_2,param_1 + 0xc6);
  FUN_1419e0b60(param_2,param_1 + 0xca);
  ::operator<<(param_2,param_1 + 0xce);
  return 0;
}



// FUNCTION 141b1be00 Serialize body=114 status=ok
// SIG undefined Serialize(void)

undefined1 FCopyObjectBufferCS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xc0);
  FUN_1419e0b60(uVar1,param_1 + 0xc4);
  uVar1 = FUN_1419e0b60(param_2,param_1 + 200);
  FUN_1419e0b60(uVar1,param_1 + 0xcc);
  ::operator<<(param_2,param_1 + 0xd0);
  return 0;
}



// FUNCTION 141b1be80 Serialize body=129 status=ok
// SIG undefined Serialize(void)

undefined1 FCopySurfelBufferCS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xc0);
  FUN_1419e0b60(uVar1,param_1 + 0xc4);
  uVar1 = FUN_1419e0b60(param_2,param_1 + 200);
  FUN_1419e0b60(uVar1,param_1 + 0xcc);
  ::operator<<(param_2,param_1 + 0xd0);
  FUN_1419e0a40(param_2,param_1 + 0xe8);
  return 0;
}



// FUNCTION 141b1bf10 Serialize body=99 status=ok
// SIG undefined Serialize(void)

undefined1 FCopyVPLFluxBufferCS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xc0);
  FUN_1419e0b60(uVar1,param_1 + 0xc4);
  ::operator<<(param_2,param_1 + 200);
  FUN_1419e0a40(param_2,param_1 + 0xe0);
  return 0;
}



// FUNCTION 141b1bf80 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FTemporaryIrradianceCacheResources>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144ddff58;
  FRenderResource::ReleaseResource();
  FUN_141b28b20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 141b1bfd0 Serialize body=104 status=ok
// SIG undefined Serialize(void)

undefined1 TRemoveObjectsFromBufferCS<1>::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_1419e0a40(param_2,param_1 + 0xc0);
  FUN_1419e0b60(param_2,param_1 + 0xc6);
  ::operator<<(param_2,param_1 + 0xca);
  FUN_1419e0b60(param_2,param_1 + 0xee);
  FUN_1419e0b60(param_2,param_1 + 0xf2);
  return 0;
}



// FUNCTION 141b1c040 Serialize body=219 status=ok
// SIG undefined Serialize(void)

undefined1 FVPLPlacementCS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xc0);
  FUN_1419e0b60(uVar1,param_1 + 0xc4);
  uVar1 = FUN_1419e0b60(param_2,param_1 + 200);
  FUN_1419e0b60(uVar1,param_1 + 0xcc);
  FUN_1419e0a40(param_2,param_1 + 0xd0);
  FUN_1419e0a40(param_2,param_1 + 0xd6);
  FUN_1419e0a40(param_2,param_1 + 0xdc);
  FUN_1419e0a40(param_2,param_1 + 0xe2);
  FUN_1419e0a40(param_2,param_1 + 0xe8);
  ::operator<<(param_2,param_1 + 0xee);
  ::operator<<(param_2,param_1 + 0x11c);
  FUN_1419e0a40(param_2,param_1 + 0x148);
  return 0;
}



// FUNCTION 141b1c120 FUN_141b1c120 body=79 status=ok
// SIG undefined FUN_141b1c120(void)

undefined8 * FUN_141b1c120(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144de0118;
  FRenderResource::ReleaseResource();
  FUN_141b28a30(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 141b1c170 Serialize body=84 status=ok
// SIG undefined Serialize(void)

undefined1 FSetupVPLCullndirectArgumentsCS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xc0);
  FUN_1419e0b60(uVar1,param_1 + 0xc4);
  FUN_1419e0b60(param_2,param_1 + 200);
  return 0;
}



// FUNCTION 141b1c1d0 FUN_141b1c1d0 body=1109 status=ok
// SIG undefined FUN_141b1c1d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b1c1d0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_228 [32];
  float local_208;
  float local_200;
  float local_1f8;
  float local_1f0;
  float local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined *local_1a8;
  undefined4 local_1a0;
  ulonglong local_198;
  ulonglong local_190;
  undefined8 local_188;
  longlong local_180;
  undefined1 local_178 [64];
  longlong local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined8 local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  ulonglong local_bc;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  plVar13 = (longlong *)0x0;
  local_1b8 = local_1b8 & 0xffffffff00000000;
  lVar2 = *(longlong *)(param_3 + 0x3090);
  local_1a8 = &DAT_146a51f90;
  local_1a0 = 0;
  local_188 = param_4;
  local_180 = param_2;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_1b8,&local_1a8);
  plVar12 = plVar13;
  if ((int)local_1b8 != -1) {
    plVar12 = (longlong *)((longlong)(int)local_1b8 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  local_1a0 = 0;
  plVar11 = plVar12 + 2;
  if (plVar12 == (longlong *)0x0) {
    plVar11 = plVar13;
  }
  local_1a8 = &DAT_146a1aa80;
  lVar3 = *plVar11;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_1b8,&local_1a8);
  plVar12 = plVar13;
  if ((int)local_1b8 != -1) {
    plVar12 = (longlong *)((longlong)(int)local_1b8 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar12 + 2;
  if (plVar12 == (longlong *)0x0) {
    plVar11 = plVar13;
  }
  lVar2 = *plVar11;
  FUN_141cd7760(local_178,param_1,param_3);
  auVar1 = *(undefined1 (*) [16])(param_3 + 0x1aa0);
  local_130 = auVar1._0_4_;
  local_1b8 = auVar1._0_8_;
  local_124 = auVar1._12_4_;
  local_198 = local_1b8 >> 0x20;
  local_12c = auVar1._4_4_;
  local_190 = auVar1._8_8_;
  local_128 = auVar1._8_4_;
  local_1a8 = (undefined *)(local_190 >> 0x20);
  puVar9 = (undefined8 *)(*(longlong *)(local_138 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar9 + 5;
  if (*(undefined8 **)(local_138 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(local_138 + 0x30,0x30);
    puVar9 = (undefined8 *)(*(longlong *)(local_138 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 5;
  }
  *(undefined8 **)(local_138 + 0x30) = puVar7;
  *(int *)(local_138 + 0x14) = *(int *)(local_138 + 0x14) + 1;
  **(undefined8 **)(local_138 + 8) = puVar9;
  *(undefined8 **)(local_138 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_143f59420;
  *(int *)(puVar9 + 2) = (int)local_1b8;
  *(int *)((longlong)puVar9 + 0x14) = (int)local_198;
  *(int *)((longlong)puVar9 + 0x1c) = (int)local_190;
  *(int *)(puVar9 + 4) = (int)local_1a8;
  *(undefined4 *)(puVar9 + 3) = 0;
  *(undefined4 *)((longlong)puVar9 + 0x24) = 0x3f800000;
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 0x26;
  local_b4 = 0;
  local_ac = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_64 = 0;
  local_5c = 0;
  local_54 = 0;
  FUN_14049afe0(param_1,&local_108);
  local_d8 = FUN_1404a0ce0();
  uStack_d0 = FUN_140985530();
  local_c8 = FUN_141b33900();
  local_108 = DAT_1464c2720;
  if (lVar3 == 0) {
    local_1a8 = (undefined *)0x0;
    plVar12 = (longlong *)0x1;
    plStack_100 = plVar13;
  }
  else {
    lVar4 = *(longlong *)(lVar3 + 0x48);
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    plStack_100 = *(longlong **)(lVar4 + 0x38);
    plVar12 = plVar13;
  }
  uVar6 = 0;
  if (plVar12 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
  }
  bVar5 = false;
  if (lVar2 == 0) {
    bVar5 = true;
    local_1a8 = (undefined *)0x0;
  }
  else {
    lVar4 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    uVar6 = *(undefined8 *)(lVar4 + 0x40);
  }
  local_e8 = uVar6;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
  }
  local_bc = local_bc & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_108,2,1);
  puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar9 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar7;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar9;
  *(undefined8 **)(param_1 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_143f489c0;
  *(undefined4 *)(puVar9 + 2) = 1;
  FUN_141ad70c0(lVar3,local_178);
  FUN_141b41320(lVar2,local_178,param_3,local_188);
  iVar10 = *(int *)(param_3 + 0x1aa8) - *(int *)(param_3 + 0x1aa0);
  local_1d8 = *(undefined8 *)(local_180 + 0x378);
  iVar8 = *(int *)(param_3 + 0x1aac) - *(int *)(param_3 + 0x1aa4);
  local_1c0 = 1;
  local_1c8 = 1;
  local_208 = (float)iVar8;
  local_1b8 = CONCAT44(iVar8,iVar10);
  local_1e0 = local_1b8;
  local_1f0 = (float)iVar10;
  local_200 = (float)*(int *)(param_3 + 0x1aa0);
  local_1f8 = (float)*(int *)(param_3 + 0x1aa4);
  local_1e8 = local_208;
  local_1d0 = lVar3;
  DrawRectangle(param_1);
  FRenderingCompositePassContext::~FRenderingCompositePassContext(local_178);
  return;
}



// FUNCTION 141b1c630 FUN_141b1c630 body=1109 status=ok
// SIG undefined FUN_141b1c630(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b1c630(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_228 [32];
  float local_208;
  float local_200;
  float local_1f8;
  float local_1f0;
  float local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined *local_1a8;
  undefined4 local_1a0;
  ulonglong local_198;
  ulonglong local_190;
  undefined8 local_188;
  longlong local_180;
  undefined1 local_178 [64];
  longlong local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined8 local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  ulonglong local_bc;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  plVar13 = (longlong *)0x0;
  local_1b8 = local_1b8 & 0xffffffff00000000;
  lVar2 = *(longlong *)(param_3 + 0x3090);
  local_1a8 = &DAT_146a51f90;
  local_1a0 = 0;
  local_188 = param_4;
  local_180 = param_2;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_1b8,&local_1a8);
  plVar12 = plVar13;
  if ((int)local_1b8 != -1) {
    plVar12 = (longlong *)((longlong)(int)local_1b8 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  local_1a0 = 0;
  plVar11 = plVar12 + 2;
  if (plVar12 == (longlong *)0x0) {
    plVar11 = plVar13;
  }
  local_1a8 = &DAT_146a1a930;
  lVar3 = *plVar11;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_1b8,&local_1a8);
  plVar12 = plVar13;
  if ((int)local_1b8 != -1) {
    plVar12 = (longlong *)((longlong)(int)local_1b8 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar12 + 2;
  if (plVar12 == (longlong *)0x0) {
    plVar11 = plVar13;
  }
  lVar2 = *plVar11;
  FUN_141cd7760(local_178,param_1,param_3);
  auVar1 = *(undefined1 (*) [16])(param_3 + 0x1aa0);
  local_130 = auVar1._0_4_;
  local_1b8 = auVar1._0_8_;
  local_124 = auVar1._12_4_;
  local_198 = local_1b8 >> 0x20;
  local_12c = auVar1._4_4_;
  local_190 = auVar1._8_8_;
  local_128 = auVar1._8_4_;
  local_1a8 = (undefined *)(local_190 >> 0x20);
  puVar9 = (undefined8 *)(*(longlong *)(local_138 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar9 + 5;
  if (*(undefined8 **)(local_138 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(local_138 + 0x30,0x30);
    puVar9 = (undefined8 *)(*(longlong *)(local_138 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 5;
  }
  *(undefined8 **)(local_138 + 0x30) = puVar7;
  *(int *)(local_138 + 0x14) = *(int *)(local_138 + 0x14) + 1;
  **(undefined8 **)(local_138 + 8) = puVar9;
  *(undefined8 **)(local_138 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_143f59420;
  *(int *)(puVar9 + 2) = (int)local_1b8;
  *(int *)((longlong)puVar9 + 0x14) = (int)local_198;
  *(int *)((longlong)puVar9 + 0x1c) = (int)local_190;
  *(int *)(puVar9 + 4) = (int)local_1a8;
  *(undefined4 *)(puVar9 + 3) = 0;
  *(undefined4 *)((longlong)puVar9 + 0x24) = 0x3f800000;
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 0x26;
  local_b4 = 0;
  local_ac = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_64 = 0;
  local_5c = 0;
  local_54 = 0;
  FUN_14049afe0(param_1,&local_108);
  local_d8 = FUN_1404a0ce0();
  uStack_d0 = FUN_140985530();
  local_c8 = FUN_141b33900();
  local_108 = DAT_1464c2720;
  if (lVar3 == 0) {
    local_1a8 = (undefined *)0x0;
    plVar12 = (longlong *)0x1;
    plStack_100 = plVar13;
  }
  else {
    lVar4 = *(longlong *)(lVar3 + 0x48);
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    plStack_100 = *(longlong **)(lVar4 + 0x38);
    plVar12 = plVar13;
  }
  uVar6 = 0;
  if (plVar12 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
  }
  bVar5 = false;
  if (lVar2 == 0) {
    bVar5 = true;
    local_1a8 = (undefined *)0x0;
  }
  else {
    lVar4 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    uVar6 = *(undefined8 *)(lVar4 + 0x40);
  }
  local_e8 = uVar6;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
  }
  local_bc = local_bc & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_108,2,1);
  puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar9 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar7;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar9;
  *(undefined8 **)(param_1 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_143f489c0;
  *(undefined4 *)(puVar9 + 2) = 1;
  FUN_141ad70c0(lVar3,local_178);
  FUN_141b41320(lVar2,local_178,param_3,local_188);
  iVar10 = *(int *)(param_3 + 0x1aa8) - *(int *)(param_3 + 0x1aa0);
  local_1d8 = *(undefined8 *)(local_180 + 0x378);
  iVar8 = *(int *)(param_3 + 0x1aac) - *(int *)(param_3 + 0x1aa4);
  local_1c0 = 1;
  local_1c8 = 1;
  local_208 = (float)iVar8;
  local_1b8 = CONCAT44(iVar8,iVar10);
  local_1e0 = local_1b8;
  local_1f0 = (float)iVar10;
  local_200 = (float)*(int *)(param_3 + 0x1aa0);
  local_1f8 = (float)*(int *)(param_3 + 0x1aa4);
  local_1e8 = local_208;
  local_1d0 = lVar3;
  DrawRectangle(param_1);
  FRenderingCompositePassContext::~FRenderingCompositePassContext(local_178);
  return;
}



// FUNCTION 141b1ca90 FUN_141b1ca90 body=1412 status=ok
// SIG undefined FUN_141b1ca90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b1ca90(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_238 [32];
  float local_218;
  float local_210;
  float local_208;
  float local_200;
  float local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  longlong local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined *local_1b8;
  undefined4 local_1b0;
  undefined8 *local_1a8;
  ulonglong local_1a0;
  ulonglong local_198;
  longlong local_190;
  undefined1 local_188 [64];
  longlong local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_118;
  longlong *plStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  ulonglong local_cc;
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
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  plVar14 = (longlong *)0x0;
  local_1c8 = local_1c8 & 0xffffffff00000000;
  lVar3 = *(longlong *)(param_3 + 0x3090);
  local_1b8 = &DAT_146a51f90;
  local_1b0 = 0;
  local_1a8 = param_4;
  local_190 = param_2;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar3 + 0x38,&local_1c8,&local_1b8);
  plVar13 = plVar14;
  if ((int)local_1c8 != -1) {
    plVar13 = (longlong *)((longlong)(int)local_1c8 * 0x20 + *(longlong *)(lVar3 + 0x38));
  }
  local_1b0 = 0;
  plVar12 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar12 = plVar14;
  }
  local_1b8 = &DAT_146a1ad20;
  lVar4 = *plVar12;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar3 + 0x38,&local_1c8,&local_1b8);
  plVar13 = plVar14;
  if ((int)local_1c8 != -1) {
    plVar13 = (longlong *)((longlong)(int)local_1c8 * 0x20 + *(longlong *)(lVar3 + 0x38));
  }
  plVar12 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar12 = plVar14;
  }
  lVar3 = *plVar12;
  FUN_141cd7760(local_188,param_1,param_3);
  lVar5 = local_148;
  auVar1 = *(undefined1 (*) [16])(param_3 + 0x1aa0);
  local_140 = auVar1._0_4_;
  local_1c8 = auVar1._0_8_;
  local_134 = auVar1._12_4_;
  local_1a0 = local_1c8 >> 0x20;
  local_13c = auVar1._4_4_;
  local_198 = auVar1._8_8_;
  local_138 = auVar1._8_4_;
  local_1b8 = (undefined *)(local_198 >> 0x20);
  puVar10 = (undefined8 *)(*(longlong *)(local_148 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 5;
  if (*(undefined8 **)(local_148 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(local_148 + 0x30,0x30);
    puVar10 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 5;
  }
  *(undefined8 **)(lVar5 + 0x30) = puVar8;
  *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
  **(undefined8 **)(lVar5 + 8) = puVar10;
  *(undefined8 **)(lVar5 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_143f59420;
  *(int *)(puVar10 + 2) = (int)local_1c8;
  *(int *)((longlong)puVar10 + 0x14) = (int)local_1a0;
  *(int *)((longlong)puVar10 + 0x1c) = (int)local_198;
  *(int *)(puVar10 + 4) = (int)local_1b8;
  *(undefined4 *)(puVar10 + 3) = 0;
  *(undefined4 *)((longlong)puVar10 + 0x24) = 0x3f800000;
  local_118 = 0;
  plStack_110 = (longlong *)0x0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
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
  FUN_14049afe0(param_1,&local_118);
  local_e8 = FUN_1404a0ce0();
  uStack_e0 = FUN_140985530();
  local_d8 = FUN_141b337c0();
  local_118 = DAT_1464c2720;
  if (lVar4 == 0) {
    local_1b8 = (undefined *)0x0;
    plVar13 = (longlong *)0x1;
    plStack_110 = plVar14;
  }
  else {
    lVar5 = *(longlong *)(lVar4 + 0x48);
    if (*(char *)(lVar5 + 0x28) == '\0') {
      FUN_1419f3850(lVar5);
    }
    plStack_110 = *(longlong **)(lVar5 + 0x38);
    plVar13 = plVar14;
  }
  uVar7 = 0;
  if (plVar13 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1b8);
  }
  bVar6 = false;
  if (lVar3 == 0) {
    bVar6 = true;
    local_1b8 = (undefined *)0x0;
  }
  else {
    lVar5 = *(longlong *)(lVar3 + 0x48);
    if (*(char *)(lVar5 + 0x28) == '\0') {
      FUN_1419f3850(lVar5);
    }
    uVar7 = *(undefined8 *)(lVar5 + 0x40);
  }
  local_f8 = uVar7;
  if (bVar6) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1b8);
  }
  local_cc = local_cc & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_118,2,1);
  puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar8;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar10;
  *(undefined8 **)(param_1 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_143f489c0;
  *(undefined4 *)(puVar10 + 2) = 1;
  FUN_141ad70c0(lVar4,local_188);
  FSceneRenderTargets::Get(local_148);
  lVar5 = *(longlong *)(lVar3 + 0x48);
  if (*(char *)(lVar5 + 0x28) == '\0') {
    FUN_1419f3850(lVar5);
  }
  uVar7 = *(undefined8 *)(lVar5 + 0x40);
  FUN_141aa9690(lVar3,local_148,uVar7,*(undefined8 *)(param_3 + 0x20));
  local_1a8 = (undefined8 *)*local_1a8;
  local_1b8 = (undefined *)FUN_1404a0e20();
  if (*(short *)(lVar3 + 0xc2) != 0) {
    local_1c8 = CONCAT44(local_1c8._4_4_,(uint)*(ushort *)(lVar3 + 0xc0));
    puVar10 = (undefined8 *)(*(longlong *)(local_148 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 5;
    if (*(undefined8 **)(local_148 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(local_148 + 0x30,0x30);
      puVar10 = (undefined8 *)(*(longlong *)(local_148 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar10 + 5;
    }
    *(undefined8 **)(local_148 + 0x30) = puVar8;
    *(int *)(local_148 + 0x14) = *(int *)(local_148 + 0x14) + 1;
    **(undefined8 **)(local_148 + 8) = puVar10;
    *(undefined8 **)(local_148 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_143f59c80;
    *(int *)(puVar10 + 3) = (int)local_1c8;
    puVar10[4] = local_1a8;
    puVar10[2] = uVar7;
  }
  if (*(short *)(lVar3 + 0xc6) != 0) {
    uVar2 = *(ushort *)(lVar3 + 0xc4);
    puVar10 = (undefined8 *)(*(longlong *)(local_148 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 5;
    if (*(undefined8 **)(local_148 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(local_148 + 0x30,0x30);
      puVar10 = (undefined8 *)(*(longlong *)(local_148 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar10 + 5;
    }
    *(undefined8 **)(local_148 + 0x30) = puVar8;
    *(int *)(local_148 + 0x14) = *(int *)(local_148 + 0x14) + 1;
    **(undefined8 **)(local_148 + 8) = puVar10;
    *(undefined8 **)(local_148 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_143f59c70;
    puVar10[4] = local_1b8;
    puVar10[2] = uVar7;
    *(uint *)(puVar10 + 3) = (uint)uVar2;
  }
  iVar9 = *(int *)(param_3 + 0x1aac) - *(int *)(param_3 + 0x1aa4);
  iVar11 = *(int *)(param_3 + 0x1aa8) - *(int *)(param_3 + 0x1aa0);
  local_1d0 = 1;
  local_1d8 = 1;
  local_1e8 = *(undefined8 *)(local_190 + 0x378);
  local_218 = (float)iVar9;
  local_1c8 = CONCAT44(iVar9,iVar11);
  local_1f0 = local_1c8;
  local_200 = (float)iVar11;
  local_210 = (float)*(int *)(param_3 + 0x1aa0);
  local_208 = (float)*(int *)(param_3 + 0x1aa4);
  local_1f8 = local_218;
  local_1e0 = lVar4;
  DrawRectangle(param_1);
  FRenderingCompositePassContext::~FRenderingCompositePassContext(local_188);
  return;
}



// FUNCTION 141b1d020 FUN_141b1d020 body=1109 status=ok
// SIG undefined FUN_141b1d020(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b1d020(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_228 [32];
  float local_208;
  float local_200;
  float local_1f8;
  float local_1f0;
  float local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined *local_1a8;
  undefined4 local_1a0;
  ulonglong local_198;
  ulonglong local_190;
  undefined8 local_188;
  longlong local_180;
  undefined1 local_178 [64];
  longlong local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined8 local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  ulonglong local_bc;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  plVar13 = (longlong *)0x0;
  local_1b8 = local_1b8 & 0xffffffff00000000;
  lVar2 = *(longlong *)(param_3 + 0x3090);
  local_1a8 = &DAT_146a51f90;
  local_1a0 = 0;
  local_188 = param_4;
  local_180 = param_2;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_1b8,&local_1a8);
  plVar12 = plVar13;
  if ((int)local_1b8 != -1) {
    plVar12 = (longlong *)((longlong)(int)local_1b8 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  local_1a0 = 0;
  plVar11 = plVar12 + 2;
  if (plVar12 == (longlong *)0x0) {
    plVar11 = plVar13;
  }
  local_1a8 = &DAT_146a1abd0;
  lVar3 = *plVar11;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_1b8,&local_1a8);
  plVar12 = plVar13;
  if ((int)local_1b8 != -1) {
    plVar12 = (longlong *)((longlong)(int)local_1b8 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar12 + 2;
  if (plVar12 == (longlong *)0x0) {
    plVar11 = plVar13;
  }
  lVar2 = *plVar11;
  FUN_141cd7760(local_178,param_1,param_3);
  auVar1 = *(undefined1 (*) [16])(param_3 + 0x1aa0);
  local_130 = auVar1._0_4_;
  local_1b8 = auVar1._0_8_;
  local_124 = auVar1._12_4_;
  local_198 = local_1b8 >> 0x20;
  local_12c = auVar1._4_4_;
  local_190 = auVar1._8_8_;
  local_128 = auVar1._8_4_;
  local_1a8 = (undefined *)(local_190 >> 0x20);
  puVar9 = (undefined8 *)(*(longlong *)(local_138 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar9 + 5;
  if (*(undefined8 **)(local_138 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(local_138 + 0x30,0x30);
    puVar9 = (undefined8 *)(*(longlong *)(local_138 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 5;
  }
  *(undefined8 **)(local_138 + 0x30) = puVar7;
  *(int *)(local_138 + 0x14) = *(int *)(local_138 + 0x14) + 1;
  **(undefined8 **)(local_138 + 8) = puVar9;
  *(undefined8 **)(local_138 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_143f59420;
  *(int *)(puVar9 + 2) = (int)local_1b8;
  *(int *)((longlong)puVar9 + 0x14) = (int)local_198;
  *(int *)((longlong)puVar9 + 0x1c) = (int)local_190;
  *(int *)(puVar9 + 4) = (int)local_1a8;
  *(undefined4 *)(puVar9 + 3) = 0;
  *(undefined4 *)((longlong)puVar9 + 0x24) = 0x3f800000;
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 0x26;
  local_b4 = 0;
  local_ac = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_64 = 0;
  local_5c = 0;
  local_54 = 0;
  FUN_14049afe0(param_1,&local_108);
  local_d8 = FUN_1404a0ce0();
  uStack_d0 = FUN_140985530();
  local_c8 = FUN_141b337c0();
  local_108 = DAT_1464c2720;
  if (lVar3 == 0) {
    local_1a8 = (undefined *)0x0;
    plVar12 = (longlong *)0x1;
    plStack_100 = plVar13;
  }
  else {
    lVar4 = *(longlong *)(lVar3 + 0x48);
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    plStack_100 = *(longlong **)(lVar4 + 0x38);
    plVar12 = plVar13;
  }
  uVar6 = 0;
  if (plVar12 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
  }
  bVar5 = false;
  if (lVar2 == 0) {
    bVar5 = true;
    local_1a8 = (undefined *)0x0;
  }
  else {
    lVar4 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    uVar6 = *(undefined8 *)(lVar4 + 0x40);
  }
  local_e8 = uVar6;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
  }
  local_bc = local_bc & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_108,2,1);
  puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar9 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar7;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar9;
  *(undefined8 **)(param_1 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_143f489c0;
  *(undefined4 *)(puVar9 + 2) = 1;
  FUN_141ad70c0(lVar3,local_178);
  FUN_141b415b0(lVar2,local_178,param_3,local_188);
  iVar10 = *(int *)(param_3 + 0x1aa8) - *(int *)(param_3 + 0x1aa0);
  local_1d8 = *(undefined8 *)(local_180 + 0x378);
  iVar8 = *(int *)(param_3 + 0x1aac) - *(int *)(param_3 + 0x1aa4);
  local_1c0 = 1;
  local_1c8 = 1;
  local_208 = (float)iVar8;
  local_1b8 = CONCAT44(iVar8,iVar10);
  local_1e0 = local_1b8;
  local_1f0 = (float)iVar10;
  local_200 = (float)*(int *)(param_3 + 0x1aa0);
  local_1f8 = (float)*(int *)(param_3 + 0x1aa4);
  local_1e8 = local_208;
  local_1d0 = lVar3;
  DrawRectangle(param_1);
  FRenderingCompositePassContext::~FRenderingCompositePassContext(local_178);
  return;
}



// FUNCTION 141b1d480 FUN_141b1d480 body=668 status=ok
// SIG undefined FUN_141b1d480(void)

int * FUN_141b1d480(longlong *param_1,int *param_2,ulonglong *param_3,undefined1 *param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong *_Src;
  uint *puVar14;
  undefined4 uVar15;
  bool bVar16;
  int local_res8 [2];
  int local_res10;
  
  uVar15 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar7 * 0x10);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x10) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar7;
  lVar5 = (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar14 = (uint *)((longlong)plVar6 + lVar5);
  *puVar14 = *puVar14 | 1 << ((byte)iVar7 & 0x1f);
  lVar9 = (longlong)iVar7 * 0x10;
  _Src = (ulonglong *)(*param_1 + lVar9);
  *_Src = *param_3;
  *(undefined4 *)(_Src + 1) = 0xffffffff;
  local_res10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (local_res10 != 1) {
    TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
              (param_1,local_res8,*_Src);
    iVar1 = local_res8[0];
    lVar12 = (longlong)local_res8[0];
    bVar16 = local_res8[0] != -1;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar16);
    if (bVar16) {
      _guard_xfg_dispatch_icall_nop((void *)(lVar12 * 0x10 + *param_1),_Src,8);
      bVar3 = (byte)iVar7 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x10) = iVar7;
      }
      lVar12 = *param_1;
      *(undefined4 *)(lVar9 + lVar12) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar15 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar9 + 4 + lVar12) = uVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar7;
      plVar6 = (longlong *)param_1[4];
      *param_2 = iVar1;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar14 = (uint *)((longlong)plVar6 + lVar5);
      *puVar14 = *puVar14 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      uVar11 = (undefined1)local_res8[0];
      goto LAB_141b1d6f2;
    }
  }
  uVar11 = 0;
  cVar4 = TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::ConditionalRehash
                    (param_1,local_res10,0);
  if (cVar4 == '\0') {
    iVar7 = (int)(*_Src >> 4);
    uVar10 = 0x9e3779b9U - iVar7 ^ iVar7 << 8;
    uVar13 = -(iVar7 + uVar10) ^ uVar10 >> 0xd;
    uVar8 = (iVar7 - uVar10) - uVar13 ^ uVar13 >> 0xc;
    uVar10 = (uVar10 - uVar8) - uVar13 ^ uVar8 << 0x10;
    uVar13 = (uVar13 - uVar10) - uVar8 ^ uVar10 >> 5;
    uVar8 = (uVar8 - uVar10) - uVar13 ^ uVar13 >> 3;
    uVar10 = (uVar10 - uVar8) - uVar13 ^ uVar8 << 10;
    uVar8 = ((uVar13 - uVar10) - uVar8 ^ uVar10 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0xc) = uVar8;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 1) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
LAB_141b1d6f2:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar11;
  }
  return param_2;
}



// FUNCTION 141b1d720 FUN_141b1d720 body=434 status=ok
// SIG undefined FUN_141b1d720(void)

void FUN_141b1d720(undefined8 param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  ushort uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (*(char *)(param_2 + 6) != '\0') {
    local_218 = 0;
    uStack_214 = 0;
    uStack_210 = 0;
    uStack_20c = 0x3f800000;
    local_208 = 0;
    uStack_204 = 0;
    uStack_200 = 0;
    uStack_1fc = 0x3f800000;
    local_178 = 0;
    uStack_174 = 0;
    uStack_170 = 0;
    uStack_16c = 0x3f800000;
    local_168 = 0;
    uStack_164 = 0;
    uStack_160 = 0;
    uStack_15c = 0x3f800000;
    local_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0x3f800000;
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0x3f800000;
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0x3f800000;
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0x3f800000;
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0x3f800000;
    local_68 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0x3f800000;
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0x3f800000;
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0x3f800000;
    FUN_141b6db10(&local_218,0);
    local_220 = 0;
    puVar4 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 5;
    if (*(undefined8 **)(param_3 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(param_3 + 0x30,0x30);
      puVar4 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar4 + 5;
    }
    *(undefined8 **)(param_3 + 0x30) = puVar3;
    *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
    **(undefined8 **)(param_3 + 8) = puVar4;
    *(undefined8 **)(param_3 + 8) = puVar4 + 1;
    puVar4[1] = 0;
    *puVar4 = &PTR_LAB_144d91e30;
    FLocalUniformBufferWorkArea::FLocalUniformBufferWorkArea
              (puVar4 + 2,param_3,&local_218,0x200,&DAT_146a1c468);
    uVar2 = *(ushort *)(param_2 + 4);
    puVar5 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar5 + 6;
    if (*(undefined8 **)(param_3 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(param_3 + 0x30,0x38);
      puVar5 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar5 + 6;
    }
    *(undefined8 **)(param_3 + 0x30) = puVar3;
    *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
    **(undefined8 **)(param_3 + 8) = puVar5;
    *(undefined8 **)(param_3 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_FUN_144de04f8;
    puVar5[2] = param_1;
    *(uint *)(puVar5 + 3) = (uint)uVar2;
    puVar5[4] = puVar4 + 2;
    puVar5[5] = 0;
    piVar1 = (int *)(*(longlong *)(puVar5[4] + 0x10) + 8);
    *piVar1 = *piVar1 + 1;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_220);
  }
  return;
}



// FUNCTION 141b1d8e0 FUN_141b1d8e0 body=788 status=ok
// SIG undefined FUN_141b1d8e0(void)

void FUN_141b1d8e0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int local_res18 [4];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined *local_48;
  undefined4 local_40;
  
  local_58 = 0;
  uStack_50 = 0;
  plVar9 = *(longlong **)(*(longlong *)(param_3 + 0x5c8) + 0x30);
  cVar5 = (**(code **)(*plVar9 + 0xd8))(plVar9,&local_58,param_2,param_2 + 0x1aa0);
  if (cVar5 == '\0') {
    local_58 = *(undefined8 *)(param_2 + 0x1aa0);
    uStack_50 = *(undefined8 *)(param_2 + 0x1aa8);
    iVar7 = *(int *)(param_2 + 0x1aa0);
    iVar16 = *(int *)(param_2 + 0x1aa4);
    iVar6 = *(int *)(param_2 + 0x1aa8);
    iVar15 = *(int *)(param_2 + 0x1aac);
  }
  else {
    iVar7 = (int)local_58;
    iVar16 = local_58._4_4_;
    iVar6 = (int)uStack_50;
    iVar15 = uStack_50._4_4_;
  }
  lVar1 = *(longlong *)(param_2 + 0x3090);
  iVar14 = 2 - (uint)(DAT_146a15384 != 0);
  iVar7 = (iVar6 - iVar7) / iVar14 + 7;
  local_40 = 0;
  uVar17 = (int)((iVar7 >> 0x1f & 7U) + iVar7) >> 3;
  iVar7 = (iVar15 - iVar16) / iVar14 + 7;
  uVar8 = (int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3;
  local_48 = &DAT_146a19eb0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_res18,&local_48);
  plVar9 = (longlong *)0x0;
  if (local_res18[0] != -1) {
    plVar9 = (longlong *)((longlong)local_res18[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar13 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
  }
  lVar1 = *plVar13;
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  FRHIComputeShader::UpdateStats(uVar3);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar10;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar3;
  lVar2 = *(longlong *)(param_3 + 0x5c0);
  FUN_141b23870(lVar1,param_1,param_2,param_3,lVar2 + 8,CONCAT44((float)uVar8,(float)uVar17),
                &local_58,param_4);
  DispatchComputeShader(param_1,lVar1,uVar17,uVar8,1);
  lVar4 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  FRWShaderParameter::UnsetUAV<FRHICommandList>(lVar1 + 0xc0,param_1,*(undefined8 *)(lVar4 + 0x60));
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar11 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar11 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar10;
  *puVar11 = uVar3;
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar12 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar10;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar12;
  *(undefined8 **)(param_1 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  puVar12[3] = puVar11;
  *puVar12 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar12 + 2) = 1;
  *(undefined4 *)(puVar12 + 4) = 0;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 1;
  puVar12[5] = 0;
  return;
}



// FUNCTION 141b1dc00 FUN_141b1dc00 body=788 status=ok
// SIG undefined FUN_141b1dc00(void)

void FUN_141b1dc00(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int local_res18 [4];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined *local_48;
  undefined4 local_40;
  
  local_58 = 0;
  uStack_50 = 0;
  plVar9 = *(longlong **)(*(longlong *)(param_3 + 0x5c8) + 0x30);
  cVar5 = (**(code **)(*plVar9 + 0xd8))(plVar9,&local_58,param_2,param_2 + 0x1aa0);
  if (cVar5 == '\0') {
    local_58 = *(undefined8 *)(param_2 + 0x1aa0);
    uStack_50 = *(undefined8 *)(param_2 + 0x1aa8);
    iVar7 = *(int *)(param_2 + 0x1aa0);
    iVar16 = *(int *)(param_2 + 0x1aa4);
    iVar6 = *(int *)(param_2 + 0x1aa8);
    iVar15 = *(int *)(param_2 + 0x1aac);
  }
  else {
    iVar7 = (int)local_58;
    iVar16 = local_58._4_4_;
    iVar6 = (int)uStack_50;
    iVar15 = uStack_50._4_4_;
  }
  lVar1 = *(longlong *)(param_2 + 0x3090);
  iVar14 = 2 - (uint)(DAT_146a15384 != 0);
  iVar7 = (iVar6 - iVar7) / iVar14 + 7;
  local_40 = 0;
  uVar17 = (int)((iVar7 >> 0x1f & 7U) + iVar7) >> 3;
  iVar7 = (iVar15 - iVar16) / iVar14 + 7;
  uVar8 = (int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3;
  local_48 = &DAT_146a1a000;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_res18,&local_48);
  plVar9 = (longlong *)0x0;
  if (local_res18[0] != -1) {
    plVar9 = (longlong *)((longlong)local_res18[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar13 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
  }
  lVar1 = *plVar13;
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  FRHIComputeShader::UpdateStats(uVar3);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar10;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar3;
  lVar2 = *(longlong *)(param_3 + 0x5c0);
  FUN_141b23870(lVar1,param_1,param_2,param_3,lVar2 + 8,CONCAT44((float)uVar8,(float)uVar17),
                &local_58,param_4);
  DispatchComputeShader(param_1,lVar1,uVar17,uVar8,1);
  lVar4 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  FRWShaderParameter::UnsetUAV<FRHICommandList>(lVar1 + 0xc0,param_1,*(undefined8 *)(lVar4 + 0x60));
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar11 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar11 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar10;
  *puVar11 = uVar3;
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar12 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar10;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar12;
  *(undefined8 **)(param_1 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  puVar12[3] = puVar11;
  *puVar12 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar12 + 2) = 1;
  *(undefined4 *)(puVar12 + 4) = 0;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 1;
  puVar12[5] = 0;
  return;
}



// FUNCTION 141b1df20 FUN_141b1df20 body=788 status=ok
// SIG undefined FUN_141b1df20(void)

void FUN_141b1df20(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int local_res18 [4];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined *local_48;
  undefined4 local_40;
  
  local_58 = 0;
  uStack_50 = 0;
  plVar9 = *(longlong **)(*(longlong *)(param_3 + 0x5c8) + 0x30);
  cVar5 = (**(code **)(*plVar9 + 0xd8))(plVar9,&local_58,param_2,param_2 + 0x1aa0);
  if (cVar5 == '\0') {
    local_58 = *(undefined8 *)(param_2 + 0x1aa0);
    uStack_50 = *(undefined8 *)(param_2 + 0x1aa8);
    iVar7 = *(int *)(param_2 + 0x1aa0);
    iVar16 = *(int *)(param_2 + 0x1aa4);
    iVar6 = *(int *)(param_2 + 0x1aa8);
    iVar15 = *(int *)(param_2 + 0x1aac);
  }
  else {
    iVar7 = (int)local_58;
    iVar16 = local_58._4_4_;
    iVar6 = (int)uStack_50;
    iVar15 = uStack_50._4_4_;
  }
  lVar1 = *(longlong *)(param_2 + 0x3090);
  iVar14 = 2 - (uint)(DAT_146a15384 != 0);
  iVar7 = (iVar6 - iVar7) / iVar14 + 7;
  local_40 = 0;
  uVar17 = (int)((iVar7 >> 0x1f & 7U) + iVar7) >> 3;
  iVar7 = (iVar15 - iVar16) / iVar14 + 7;
  uVar8 = (int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3;
  local_48 = &DAT_146a1a150;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_res18,&local_48);
  plVar9 = (longlong *)0x0;
  if (local_res18[0] != -1) {
    plVar9 = (longlong *)((longlong)local_res18[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar13 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
  }
  lVar1 = *plVar13;
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  FRHIComputeShader::UpdateStats(uVar3);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar10;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar3;
  lVar2 = *(longlong *)(param_3 + 0x5c0);
  FUN_141b23870(lVar1,param_1,param_2,param_3,lVar2 + 8,CONCAT44((float)uVar8,(float)uVar17),
                &local_58,param_4);
  DispatchComputeShader(param_1,lVar1,uVar17,uVar8,1);
  lVar4 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  FRWShaderParameter::UnsetUAV<FRHICommandList>(lVar1 + 0xc0,param_1,*(undefined8 *)(lVar4 + 0x60));
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar11 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar11 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar10;
  *puVar11 = uVar3;
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar12 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar10;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar12;
  *(undefined8 **)(param_1 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  puVar12[3] = puVar11;
  *puVar12 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar12 + 2) = 1;
  *(undefined4 *)(puVar12 + 4) = 0;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 1;
  puVar12[5] = 0;
  return;
}



// FUNCTION 141b1e240 FUN_141b1e240 body=788 status=ok
// SIG undefined FUN_141b1e240(void)

void FUN_141b1e240(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int local_res18 [4];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined *local_48;
  undefined4 local_40;
  
  local_58 = 0;
  uStack_50 = 0;
  plVar9 = *(longlong **)(*(longlong *)(param_3 + 0x5c8) + 0x30);
  cVar5 = (**(code **)(*plVar9 + 0xd8))(plVar9,&local_58,param_2,param_2 + 0x1aa0);
  if (cVar5 == '\0') {
    local_58 = *(undefined8 *)(param_2 + 0x1aa0);
    uStack_50 = *(undefined8 *)(param_2 + 0x1aa8);
    iVar7 = *(int *)(param_2 + 0x1aa0);
    iVar16 = *(int *)(param_2 + 0x1aa4);
    iVar6 = *(int *)(param_2 + 0x1aa8);
    iVar15 = *(int *)(param_2 + 0x1aac);
  }
  else {
    iVar7 = (int)local_58;
    iVar16 = local_58._4_4_;
    iVar6 = (int)uStack_50;
    iVar15 = uStack_50._4_4_;
  }
  lVar1 = *(longlong *)(param_2 + 0x3090);
  iVar14 = 2 - (uint)(DAT_146a15384 != 0);
  iVar7 = (iVar6 - iVar7) / iVar14 + 7;
  local_40 = 0;
  uVar17 = (int)((iVar7 >> 0x1f & 7U) + iVar7) >> 3;
  iVar7 = (iVar15 - iVar16) / iVar14 + 7;
  uVar8 = (int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3;
  local_48 = &DAT_146a1a2a0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_res18,&local_48);
  plVar9 = (longlong *)0x0;
  if (local_res18[0] != -1) {
    plVar9 = (longlong *)((longlong)local_res18[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar13 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
  }
  lVar1 = *plVar13;
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  FRHIComputeShader::UpdateStats(uVar3);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar10;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar3;
  lVar2 = *(longlong *)(param_3 + 0x5c0);
  FUN_141b23870(lVar1,param_1,param_2,param_3,lVar2 + 8,CONCAT44((float)uVar8,(float)uVar17),
                &local_58,param_4);
  DispatchComputeShader(param_1,lVar1,uVar17,uVar8,1);
  lVar4 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  FRWShaderParameter::UnsetUAV<FRHICommandList>(lVar1 + 0xc0,param_1,*(undefined8 *)(lVar4 + 0x60));
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar11 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar11 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar10;
  *puVar11 = uVar3;
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar12 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar10;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar12;
  *(undefined8 **)(param_1 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  puVar12[3] = puVar11;
  *puVar12 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar12 + 2) = 1;
  *(undefined4 *)(puVar12 + 4) = 0;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 1;
  puVar12[5] = 0;
  return;
}



// FUNCTION 141b1e560 FUN_141b1e560 body=788 status=ok
// SIG undefined FUN_141b1e560(void)

void FUN_141b1e560(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int local_res18 [4];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined *local_48;
  undefined4 local_40;
  
  local_58 = 0;
  uStack_50 = 0;
  plVar9 = *(longlong **)(*(longlong *)(param_3 + 0x5c8) + 0x30);
  cVar5 = (**(code **)(*plVar9 + 0xd8))(plVar9,&local_58,param_2,param_2 + 0x1aa0);
  if (cVar5 == '\0') {
    local_58 = *(undefined8 *)(param_2 + 0x1aa0);
    uStack_50 = *(undefined8 *)(param_2 + 0x1aa8);
    iVar7 = *(int *)(param_2 + 0x1aa0);
    iVar16 = *(int *)(param_2 + 0x1aa4);
    iVar6 = *(int *)(param_2 + 0x1aa8);
    iVar15 = *(int *)(param_2 + 0x1aac);
  }
  else {
    iVar7 = (int)local_58;
    iVar16 = local_58._4_4_;
    iVar6 = (int)uStack_50;
    iVar15 = uStack_50._4_4_;
  }
  lVar1 = *(longlong *)(param_2 + 0x3090);
  iVar14 = 2 - (uint)(DAT_146a15384 != 0);
  iVar7 = (iVar6 - iVar7) / iVar14 + 7;
  local_40 = 0;
  uVar17 = (int)((iVar7 >> 0x1f & 7U) + iVar7) >> 3;
  iVar7 = (iVar15 - iVar16) / iVar14 + 7;
  uVar8 = (int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3;
  local_48 = &DAT_146a19c10;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_res18,&local_48);
  plVar9 = (longlong *)0x0;
  if (local_res18[0] != -1) {
    plVar9 = (longlong *)((longlong)local_res18[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar13 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
  }
  lVar1 = *plVar13;
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  FRHIComputeShader::UpdateStats(uVar3);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar10;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar3;
  lVar2 = *(longlong *)(param_3 + 0x5c0);
  FUN_141b23870(lVar1,param_1,param_2,param_3,lVar2 + 8,CONCAT44((float)uVar8,(float)uVar17),
                &local_58,param_4);
  DispatchComputeShader(param_1,lVar1,uVar17,uVar8,1);
  lVar4 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  FRWShaderParameter::UnsetUAV<FRHICommandList>(lVar1 + 0xc0,param_1,*(undefined8 *)(lVar4 + 0x60));
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar11 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar11 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar10;
  *puVar11 = uVar3;
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar12 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar10;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar12;
  *(undefined8 **)(param_1 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  puVar12[3] = puVar11;
  *puVar12 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar12 + 2) = 1;
  *(undefined4 *)(puVar12 + 4) = 0;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 1;
  puVar12[5] = 0;
  return;
}



// FUNCTION 141b1e880 FUN_141b1e880 body=788 status=ok
// SIG undefined FUN_141b1e880(void)

void FUN_141b1e880(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int local_res18 [4];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined *local_48;
  undefined4 local_40;
  
  local_58 = 0;
  uStack_50 = 0;
  plVar9 = *(longlong **)(*(longlong *)(param_3 + 0x5c8) + 0x30);
  cVar5 = (**(code **)(*plVar9 + 0xd8))(plVar9,&local_58,param_2,param_2 + 0x1aa0);
  if (cVar5 == '\0') {
    local_58 = *(undefined8 *)(param_2 + 0x1aa0);
    uStack_50 = *(undefined8 *)(param_2 + 0x1aa8);
    iVar7 = *(int *)(param_2 + 0x1aa0);
    iVar16 = *(int *)(param_2 + 0x1aa4);
    iVar6 = *(int *)(param_2 + 0x1aa8);
    iVar15 = *(int *)(param_2 + 0x1aac);
  }
  else {
    iVar7 = (int)local_58;
    iVar16 = local_58._4_4_;
    iVar6 = (int)uStack_50;
    iVar15 = uStack_50._4_4_;
  }
  lVar1 = *(longlong *)(param_2 + 0x3090);
  iVar14 = 2 - (uint)(DAT_146a15384 != 0);
  iVar7 = (iVar6 - iVar7) / iVar14 + 7;
  local_40 = 0;
  uVar17 = (int)((iVar7 >> 0x1f & 7U) + iVar7) >> 3;
  iVar7 = (iVar15 - iVar16) / iVar14 + 7;
  uVar8 = (int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3;
  local_48 = &DAT_146a19d60;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_res18,&local_48);
  plVar9 = (longlong *)0x0;
  if (local_res18[0] != -1) {
    plVar9 = (longlong *)((longlong)local_res18[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar13 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
  }
  lVar1 = *plVar13;
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  FRHIComputeShader::UpdateStats(uVar3);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar10;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar3;
  lVar2 = *(longlong *)(param_3 + 0x5c0);
  FUN_141b23870(lVar1,param_1,param_2,param_3,lVar2 + 8,CONCAT44((float)uVar8,(float)uVar17),
                &local_58,param_4);
  DispatchComputeShader(param_1,lVar1,uVar17,uVar8,1);
  lVar4 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  FRWShaderParameter::UnsetUAV<FRHICommandList>(lVar1 + 0xc0,param_1,*(undefined8 *)(lVar4 + 0x60));
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar11 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar11 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar10;
  *puVar11 = uVar3;
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar12 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar10;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar12;
  *(undefined8 **)(param_1 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  puVar12[3] = puVar11;
  *puVar12 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar12 + 2) = 1;
  *(undefined4 *)(puVar12 + 4) = 0;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 1;
  puVar12[5] = 0;
  return;
}



// FUNCTION 141b1eba0 FUN_141b1eba0 body=2872 status=ok
// SIG undefined FUN_141b1eba0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b1eba0(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined1 auStack_208 [32];
  wchar_t *local_1e8;
  undefined4 local_1e0;
  undefined1 local_1d8;
  int local_1c8 [2];
  longlong *local_1c0;
  ulonglong uStack_1b8;
  uint local_1b0;
  longlong *local_1a8;
  int local_1a0;
  longlong local_198;
  longlong local_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined2 local_180 [4];
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  ulonglong local_11c;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  int local_94;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined2 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined1 local_70;
  wchar_t *local_68;
  undefined2 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  lVar12 = *(longlong *)(param_2 + 0x3090);
  plVar15 = (longlong *)0x0;
  local_1b0 = 0;
  local_1a0 = 0;
  local_1c0 = (longlong *)&DAT_146a17380;
  local_170 = param_6;
  uStack_1b8 = uStack_1b8 & 0xffffffff00000000;
  local_198 = param_2;
  local_178 = param_3;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar12 + 0x38,local_1c8,&local_1c0);
  plVar6 = plVar15;
  if (local_1c8[0] != -1) {
    plVar6 = (longlong *)((longlong)local_1c8[0] * 0x20 + *(longlong *)(lVar12 + 0x38));
  }
  uStack_1b8 = uStack_1b8 & 0xffffffff00000000;
  plVar11 = plVar6 + 2;
  if (plVar6 == (longlong *)0x0) {
    plVar11 = plVar15;
  }
  local_1c0 = (longlong *)&DAT_146a19970;
  lVar1 = *plVar11;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar12 + 0x38,local_1c8,&local_1c0);
  plVar6 = plVar15;
  if (local_1c8[0] != -1) {
    plVar6 = (longlong *)((longlong)local_1c8[0] * 0x20 + *(longlong *)(lVar12 + 0x38));
  }
  local_1c0 = (longlong *)0x0;
  uStack_1b8 = 0;
  plVar11 = plVar6 + 2;
  if (plVar6 == (longlong *)0x0) {
    plVar11 = plVar15;
  }
  lVar12 = *plVar11;
  FUN_141b33f50(lVar12 + 0xee,param_6,&local_1c0);
  iVar2 = (int)uStack_1b8;
  lVar14 = (longlong)(int)uStack_1b8;
  local_1a8 = local_1c0;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  local_1a0 = (int)uStack_1b8;
  iVar8 = (int)uStack_1b8 * 8;
  uVar5 = (longlong)iVar8 + (longlong)puVar13;
  if (*(ulonglong *)(param_1 + 0x38) < uVar5) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,iVar8 + 8);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar5 = (longlong)iVar8 + (longlong)puVar13;
  }
  plVar6 = local_1a8;
  *(ulonglong *)(param_1 + 0x30) = uVar5;
  if (0 < iVar2) {
    puVar10 = puVar13;
    do {
      *puVar10 = *(undefined8 *)(((longlong)local_1a8 - (longlong)puVar13) + (longlong)puVar10);
      puVar10 = puVar10 + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar7 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar7 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar10;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar7;
  *(undefined8 **)(param_1 + 8) = puVar7 + 1;
  puVar7[3] = puVar13;
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_144d91e60;
  *(int *)(puVar7 + 2) = iVar2;
  *(undefined4 *)(puVar7 + 4) = 2;
  *(undefined4 *)((longlong)puVar7 + 0x24) = 1;
  puVar7[5] = 0;
  local_1c8[0] = param_5._4_4_;
  if (DAT_146ab62f4 == '\0') {
    *(undefined4 *)(param_1 + 0x98) = 0;
    local_1c0 = (longlong *)0x0;
    uStack_1b8 = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar10 + 0x26;
    if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
      puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar10 + 0x26;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar13;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar10;
    *(undefined8 **)(param_1 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_143f59440;
    *(undefined4 *)(puVar10 + 2) = 0;
    puVar10[3] = 0;
    *(undefined4 *)(puVar10 + 4) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x24) = 0xffffffff;
    *(undefined2 *)(puVar10 + 5) = 0;
    puVar10[6] = 0;
    *(undefined4 *)(puVar10 + 7) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x3c) = 0xffffffff;
    *(undefined2 *)(puVar10 + 8) = 0;
    puVar10[9] = 0;
    *(undefined4 *)(puVar10 + 10) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x54) = 0xffffffff;
    *(undefined2 *)(puVar10 + 0xb) = 0;
    puVar10[0xc] = 0;
    *(undefined4 *)(puVar10 + 0xd) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x6c) = 0xffffffff;
    *(undefined2 *)(puVar10 + 0xe) = 0;
    puVar10[0xf] = 0;
    *(undefined4 *)(puVar10 + 0x10) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x84) = 0xffffffff;
    *(undefined2 *)(puVar10 + 0x11) = 0;
    puVar10[0x12] = 0;
    *(undefined4 *)(puVar10 + 0x13) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x9c) = 0xffffffff;
    *(undefined2 *)(puVar10 + 0x14) = 0;
    puVar10[0x15] = 0;
    *(undefined4 *)(puVar10 + 0x16) = 0;
    *(undefined4 *)((longlong)puVar10 + 0xb4) = 0xffffffff;
    *(undefined2 *)(puVar10 + 0x17) = 0;
    puVar10[0x18] = 0;
    *(undefined4 *)(puVar10 + 0x19) = 0;
    *(undefined4 *)((longlong)puVar10 + 0xcc) = 0xffffffff;
    *(undefined2 *)(puVar10 + 0x1a) = 0;
    puVar10[0x1b] = 0;
    puVar10[0x1c] = 0;
    *(int *)(puVar10 + 0x1d) = iVar2;
    uVar5 = 0;
    if (*(int *)(puVar10 + 2) != 0) {
      do {
        uVar9 = (int)uVar5 + 1;
        uVar3 = ((undefined8 *)(uVar5 * 0x18))[1];
        puVar10[uVar5 * 3 + 3] = *(undefined8 *)(uVar5 * 0x18);
        (puVar10 + uVar5 * 3 + 3)[1] = uVar3;
        puVar10[uVar5 * 3 + 5] = *(undefined8 *)(uVar5 * 0x18 + 0x10);
        uVar5 = (ulonglong)uVar9;
      } while (uVar9 < *(uint *)(puVar10 + 2));
      iVar2 = *(int *)(puVar10 + 0x1d);
    }
    uVar5 = 0;
    if (iVar2 != 0) {
      do {
        uVar9 = (int)uVar5 + 1;
        puVar10[uVar5 + 0x1e] = plVar6[uVar5];
        uVar5 = (ulonglong)uVar9;
      } while (uVar9 < *(uint *)(puVar10 + 0x1d));
    }
  }
  else {
    local_1d8 = 1;
    local_98 = DAT_146ab6938;
    local_1e0 = CONCAT31(local_1e0._1_3_,1);
    local_68 = L"UnknownTexture2D";
    local_1a8 = (longlong *)0x0;
    local_8c = 0;
    local_88 = 1;
    local_80 = 1;
    local_74 = 1;
    local_70 = 0;
    local_60 = 1;
    local_1e8 = L"Dummy";
    local_a8 = _DAT_146ab6928;
    uStack_a0 = uRam0000000146ab6930;
    local_94 = (int)param_5;
    local_84 = 0x10000;
    local_7c = 2;
    FUN_141ce20b0(&PTR_PTR_1464c2560,param_1,&local_a8);
    local_190 = local_1a8[1];
    local_188 = 0;
    local_184 = 0xffffffff;
    local_180[0] = 0x100;
    *(undefined4 *)(param_1 + 0x98) = 1;
    uVar5 = 0;
    do {
      uVar9 = (int)uVar5 + 1;
      lVar14 = *(longlong *)(&local_188 + uVar5 * 6);
      uVar3 = *(undefined8 *)(local_180 + uVar5 * 0xc);
      plVar15 = (longlong *)(param_1 + 0xa0 + uVar5 * 0x18);
      *plVar15 = (&local_190)[uVar5 * 3];
      plVar15[1] = lVar14;
      *(undefined8 *)(param_1 + 0xb0 + uVar5 * 0x18) = uVar3;
      uVar5 = (ulonglong)uVar9;
    } while (uVar9 < *(uint *)(param_1 + 0x98));
    local_1c0 = (longlong *)0x0;
    uStack_1b8 = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar10 + 0x26;
    if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
      puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar10 + 0x26;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar13;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar10;
    *(undefined8 **)(param_1 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_143f59440;
    *(undefined4 *)(puVar10 + 2) = 1;
    puVar10[3] = 0;
    *(undefined4 *)(puVar10 + 4) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x24) = 0xffffffff;
    *(undefined2 *)(puVar10 + 5) = 0;
    puVar10[6] = 0;
    *(undefined4 *)(puVar10 + 7) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x3c) = 0xffffffff;
    *(undefined2 *)(puVar10 + 8) = 0;
    puVar10[9] = 0;
    *(undefined4 *)(puVar10 + 10) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x54) = 0xffffffff;
    *(undefined2 *)(puVar10 + 0xb) = 0;
    puVar10[0xc] = 0;
    *(undefined4 *)(puVar10 + 0xd) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x6c) = 0xffffffff;
    *(undefined2 *)(puVar10 + 0xe) = 0;
    puVar10[0xf] = 0;
    *(undefined4 *)(puVar10 + 0x10) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x84) = 0xffffffff;
    *(undefined2 *)(puVar10 + 0x11) = 0;
    puVar10[0x12] = 0;
    *(undefined4 *)(puVar10 + 0x13) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x9c) = 0xffffffff;
    *(undefined2 *)(puVar10 + 0x14) = 0;
    puVar10[0x15] = 0;
    *(undefined4 *)(puVar10 + 0x16) = 0;
    *(undefined4 *)((longlong)puVar10 + 0xb4) = 0xffffffff;
    *(undefined2 *)(puVar10 + 0x17) = 0;
    puVar10[0x18] = 0;
    *(undefined4 *)(puVar10 + 0x19) = 0;
    *(undefined4 *)((longlong)puVar10 + 0xcc) = 0xffffffff;
    *(undefined2 *)(puVar10 + 0x1a) = 0;
    puVar10[0x1b] = 0;
    puVar10[0x1c] = 0;
    *(int *)(puVar10 + 0x1d) = iVar2;
    uVar5 = 0;
    if (*(int *)(puVar10 + 2) != 0) {
      do {
        uVar9 = (int)uVar5 + 1;
        lVar14 = *(longlong *)(&local_188 + uVar5 * 6);
        puVar10[uVar5 * 3 + 3] = (&local_190)[uVar5 * 3];
        (puVar10 + uVar5 * 3 + 3)[1] = lVar14;
        puVar10[uVar5 * 3 + 5] = *(undefined8 *)(local_180 + uVar5 * 0xc);
        uVar5 = (ulonglong)uVar9;
      } while (uVar9 < *(uint *)(puVar10 + 2));
      iVar2 = *(int *)(puVar10 + 0x1d);
    }
    uVar5 = 0;
    if (iVar2 != 0) {
      do {
        uVar9 = (int)uVar5 + 1;
        puVar10[uVar5 + 0x1e] = plVar6[uVar5];
        uVar5 = (ulonglong)uVar9;
      } while (uVar9 < *(uint *)(puVar10 + 0x1d));
    }
    if (local_1a8 != (longlong *)0x0) {
      (**(code **)(*local_1a8 + 0x30))();
    }
  }
  local_128 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_120 = 0;
  local_11c = 0x26;
  local_114 = 0;
  local_10c = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_bc = 0;
  local_b4 = 0;
  FUN_14049afe0(param_1,&local_168);
  puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar10 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar10 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  uVar3 = 0;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar10;
  *(undefined8 **)(param_1 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_143f59420;
  *(int *)(puVar10 + 4) = local_1c8[0];
  puVar10[2] = 0;
  *(undefined4 *)(puVar10 + 3) = 0;
  *(int *)((longlong)puVar10 + 0x1c) = (int)param_5;
  *(undefined4 *)((longlong)puVar10 + 0x24) = 0x3f800000;
  if (*(char *)(local_198 + 0x11b4) == '\0') {
    uStack_130 = FUN_141ac06b0();
  }
  else {
    uStack_130 = FUN_141ac0570();
  }
  local_128 = FUN_1409853f0();
  local_138 = FUN_1404a0ce0();
  puVar13 = (undefined8 *)FUN_141ee3620();
  local_168 = *puVar13;
  if (lVar1 == 0) {
    local_1a8 = (longlong *)0x0;
    local_1b0 = 1;
  }
  else {
    lVar14 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar14 + 0x28) == '\0') {
      FUN_1419f3850(lVar14);
    }
    uVar3 = *(undefined8 *)(lVar14 + 0x38);
  }
  uVar4 = 0;
  uStack_160 = uVar3;
  if ((local_1b0 & 1) != 0) {
    local_1b0 = local_1b0 & 0xfffffffe;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
  }
  if (lVar12 == 0) {
    uVar9 = local_1b0 | 2;
    local_1a8 = (longlong *)0x0;
  }
  else {
    lVar14 = *(longlong *)(lVar12 + 0x48);
    if (*(char *)(lVar14 + 0x28) == '\0') {
      FUN_1419f3850(lVar14);
    }
    uVar4 = *(undefined8 *)(lVar14 + 0x40);
    uVar9 = local_1b0;
  }
  local_148 = uVar4;
  if ((uVar9 & 2) != 0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
  }
  local_11c = local_11c & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_168,2,1);
  lVar14 = local_198;
  local_1e8 = (wchar_t *)local_178;
  local_1e0 = param_4;
  FUN_141b45010(lVar1,param_1,local_198,CONCAT44((float)local_1c8[0],(float)(int)param_5));
  lVar1 = *(longlong *)(lVar12 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  local_198 = *(longlong *)(lVar1 + 0x40);
  FUN_141aa9590(lVar12,param_1,local_198,*(undefined8 *)(lVar14 + 0x20));
  FUN_141b22160(lVar12 + 0xc0,param_1,&local_198,&DAT_146a17160);
  FUN_141b22420(lVar12 + 0xee,param_1,&local_198,local_170);
  puVar13 = (undefined8 *)FUN_141ee3600();
  puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar3 = *puVar13;
  puVar13 = puVar10 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar10 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar10;
  *(undefined8 **)(param_1 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_143f489e0;
  *(undefined4 *)(puVar10 + 2) = 0;
  puVar10[3] = uVar3;
  *(undefined4 *)(puVar10 + 4) = 0;
  uVar4 = DAT_146a17168;
  puVar13 = (undefined8 *)FUN_141ee35f0();
  puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar3 = *puVar13;
  puVar13 = puVar10 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar10 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar10;
  *(undefined8 **)(param_1 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144de0188;
  puVar10[2] = uVar3;
  puVar10[3] = uVar4;
  puVar10[4] = 0;
  FUN_141a19150(param_1,0,0,0);
  iVar2 = local_1a0;
  lVar12 = (longlong)local_1a0;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  iVar8 = local_1a0 * 8;
  uVar5 = (longlong)iVar8 + (longlong)puVar13;
  if (*(ulonglong *)(param_1 + 0x38) < uVar5) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,iVar8 + 8);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar5 = (longlong)iVar8 + (longlong)puVar13;
  }
  *(ulonglong *)(param_1 + 0x30) = uVar5;
  if (0 < iVar2) {
    puVar10 = puVar13;
    do {
      *puVar10 = *(undefined8 *)(((longlong)plVar6 - (longlong)puVar13) + (longlong)puVar10);
      puVar10 = puVar10 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar7 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar7 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar10;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar7;
  *(undefined8 **)(param_1 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_144d91e60;
  *(int *)(puVar7 + 2) = iVar2;
  puVar7[3] = puVar13;
  puVar7[4] = 0;
  puVar7[5] = 0;
  if (plVar6 != (longlong *)0x0) {
    FMemory::Free(plVar6);
  }
  return;
}



// FUNCTION 141b1f6e0 FUN_141b1f6e0 body=2872 status=ok
// SIG undefined FUN_141b1f6e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b1f6e0(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined1 auStack_208 [32];
  wchar_t *local_1e8;
  undefined4 local_1e0;
  undefined1 local_1d8;
  int local_1c8 [2];
  longlong *local_1c0;
  ulonglong uStack_1b8;
  uint local_1b0;
  longlong *local_1a8;
  int local_1a0;
  longlong local_198;
  longlong local_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined2 local_180 [4];
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  ulonglong local_11c;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  int local_94;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined2 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined1 local_70;
  wchar_t *local_68;
  undefined2 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  lVar12 = *(longlong *)(param_2 + 0x3090);
  plVar15 = (longlong *)0x0;
  local_1b0 = 0;
  local_1a0 = 0;
  local_1c0 = (longlong *)&DAT_146a17380;
  local_170 = param_6;
  uStack_1b8 = uStack_1b8 & 0xffffffff00000000;
  local_198 = param_2;
  local_178 = param_3;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar12 + 0x38,local_1c8,&local_1c0);
  plVar6 = plVar15;
  if (local_1c8[0] != -1) {
    plVar6 = (longlong *)((longlong)local_1c8[0] * 0x20 + *(longlong *)(lVar12 + 0x38));
  }
  uStack_1b8 = uStack_1b8 & 0xffffffff00000000;
  plVar11 = plVar6 + 2;
  if (plVar6 == (longlong *)0x0) {
    plVar11 = plVar15;
  }
  local_1c0 = (longlong *)&DAT_146a19ac0;
  lVar1 = *plVar11;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar12 + 0x38,local_1c8,&local_1c0);
  plVar6 = plVar15;
  if (local_1c8[0] != -1) {
    plVar6 = (longlong *)((longlong)local_1c8[0] * 0x20 + *(longlong *)(lVar12 + 0x38));
  }
  local_1c0 = (longlong *)0x0;
  uStack_1b8 = 0;
  plVar11 = plVar6 + 2;
  if (plVar6 == (longlong *)0x0) {
    plVar11 = plVar15;
  }
  lVar12 = *plVar11;
  FUN_141b33f50(lVar12 + 0xee,param_6,&local_1c0);
  iVar2 = (int)uStack_1b8;
  lVar14 = (longlong)(int)uStack_1b8;
  local_1a8 = local_1c0;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  local_1a0 = (int)uStack_1b8;
  iVar8 = (int)uStack_1b8 * 8;
  uVar5 = (longlong)iVar8 + (longlong)puVar13;
  if (*(ulonglong *)(param_1 + 0x38) < uVar5) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,iVar8 + 8);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar5 = (longlong)iVar8 + (longlong)puVar13;
  }
  plVar6 = local_1a8;
  *(ulonglong *)(param_1 + 0x30) = uVar5;
  if (0 < iVar2) {
    puVar10 = puVar13;
    do {
      *puVar10 = *(undefined8 *)(((longlong)local_1a8 - (longlong)puVar13) + (longlong)puVar10);
      puVar10 = puVar10 + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar7 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar7 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar10;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar7;
  *(undefined8 **)(param_1 + 8) = puVar7 + 1;
  puVar7[3] = puVar13;
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_144d91e60;
  *(int *)(puVar7 + 2) = iVar2;
  *(undefined4 *)(puVar7 + 4) = 2;
  *(undefined4 *)((longlong)puVar7 + 0x24) = 1;
  puVar7[5] = 0;
  local_1c8[0] = param_5._4_4_;
  if (DAT_146ab62f4 == '\0') {
    *(undefined4 *)(param_1 + 0x98) = 0;
    local_1c0 = (longlong *)0x0;
    uStack_1b8 = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar10 + 0x26;
    if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
      puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar10 + 0x26;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar13;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar10;
    *(undefined8 **)(param_1 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_143f59440;
    *(undefined4 *)(puVar10 + 2) = 0;
    puVar10[3] = 0;
    *(undefined4 *)(puVar10 + 4) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x24) = 0xffffffff;
    *(undefined2 *)(puVar10 + 5) = 0;
    puVar10[6] = 0;
    *(undefined4 *)(puVar10 + 7) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x3c) = 0xffffffff;
    *(undefined2 *)(puVar10 + 8) = 0;
    puVar10[9] = 0;
    *(undefined4 *)(puVar10 + 10) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x54) = 0xffffffff;
    *(undefined2 *)(puVar10 + 0xb) = 0;
    puVar10[0xc] = 0;
    *(undefined4 *)(puVar10 + 0xd) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x6c) = 0xffffffff;
    *(undefined2 *)(puVar10 + 0xe) = 0;
    puVar10[0xf] = 0;
    *(undefined4 *)(puVar10 + 0x10) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x84) = 0xffffffff;
    *(undefined2 *)(puVar10 + 0x11) = 0;
    puVar10[0x12] = 0;
    *(undefined4 *)(puVar10 + 0x13) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x9c) = 0xffffffff;
    *(undefined2 *)(puVar10 + 0x14) = 0;
    puVar10[0x15] = 0;
    *(undefined4 *)(puVar10 + 0x16) = 0;
    *(undefined4 *)((longlong)puVar10 + 0xb4) = 0xffffffff;
    *(undefined2 *)(puVar10 + 0x17) = 0;
    puVar10[0x18] = 0;
    *(undefined4 *)(puVar10 + 0x19) = 0;
    *(undefined4 *)((longlong)puVar10 + 0xcc) = 0xffffffff;
    *(undefined2 *)(puVar10 + 0x1a) = 0;
    puVar10[0x1b] = 0;
    puVar10[0x1c] = 0;
    *(int *)(puVar10 + 0x1d) = iVar2;
    uVar5 = 0;
    if (*(int *)(puVar10 + 2) != 0) {
      do {
        uVar9 = (int)uVar5 + 1;
        uVar3 = ((undefined8 *)(uVar5 * 0x18))[1];
        puVar10[uVar5 * 3 + 3] = *(undefined8 *)(uVar5 * 0x18);
        (puVar10 + uVar5 * 3 + 3)[1] = uVar3;
        puVar10[uVar5 * 3 + 5] = *(undefined8 *)(uVar5 * 0x18 + 0x10);
        uVar5 = (ulonglong)uVar9;
      } while (uVar9 < *(uint *)(puVar10 + 2));
      iVar2 = *(int *)(puVar10 + 0x1d);
    }
    uVar5 = 0;
    if (iVar2 != 0) {
      do {
        uVar9 = (int)uVar5 + 1;
        puVar10[uVar5 + 0x1e] = plVar6[uVar5];
        uVar5 = (ulonglong)uVar9;
      } while (uVar9 < *(uint *)(puVar10 + 0x1d));
    }
  }
  else {
    local_1d8 = 1;
    local_98 = DAT_146ab6938;
    local_1e0 = CONCAT31(local_1e0._1_3_,1);
    local_68 = L"UnknownTexture2D";
    local_1a8 = (longlong *)0x0;
    local_8c = 0;
    local_88 = 1;
    local_80 = 1;
    local_74 = 1;
    local_70 = 0;
    local_60 = 1;
    local_1e8 = L"Dummy";
    local_a8 = _DAT_146ab6928;
    uStack_a0 = uRam0000000146ab6930;
    local_94 = (int)param_5;
    local_84 = 0x10000;
    local_7c = 2;
    FUN_141ce20b0(&PTR_PTR_1464c2560,param_1,&local_a8);
    local_190 = local_1a8[1];
    local_188 = 0;
    local_184 = 0xffffffff;
    local_180[0] = 0x100;
    *(undefined4 *)(param_1 + 0x98) = 1;
    uVar5 = 0;
    do {
      uVar9 = (int)uVar5 + 1;
      lVar14 = *(longlong *)(&local_188 + uVar5 * 6);
      uVar3 = *(undefined8 *)(local_180 + uVar5 * 0xc);
      plVar15 = (longlong *)(param_1 + 0xa0 + uVar5 * 0x18);
      *plVar15 = (&local_190)[uVar5 * 3];
      plVar15[1] = lVar14;
      *(undefined8 *)(param_1 + 0xb0 + uVar5 * 0x18) = uVar3;
      uVar5 = (ulonglong)uVar9;
    } while (uVar9 < *(uint *)(param_1 + 0x98));
    local_1c0 = (longlong *)0x0;
    uStack_1b8 = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar10 + 0x26;
    if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
      puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar10 + 0x26;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar13;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar10;
    *(undefined8 **)(param_1 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_143f59440;
    *(undefined4 *)(puVar10 + 2) = 1;
    puVar10[3] = 0;
    *(undefined4 *)(puVar10 + 4) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x24) = 0xffffffff;
    *(undefined2 *)(puVar10 + 5) = 0;
    puVar10[6] = 0;
    *(undefined4 *)(puVar10 + 7) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x3c) = 0xffffffff;
    *(undefined2 *)(puVar10 + 8) = 0;
    puVar10[9] = 0;
    *(undefined4 *)(puVar10 + 10) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x54) = 0xffffffff;
    *(undefined2 *)(puVar10 + 0xb) = 0;
    puVar10[0xc] = 0;
    *(undefined4 *)(puVar10 + 0xd) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x6c) = 0xffffffff;
    *(undefined2 *)(puVar10 + 0xe) = 0;
    puVar10[0xf] = 0;
    *(undefined4 *)(puVar10 + 0x10) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x84) = 0xffffffff;
    *(undefined2 *)(puVar10 + 0x11) = 0;
    puVar10[0x12] = 0;
    *(undefined4 *)(puVar10 + 0x13) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x9c) = 0xffffffff;
    *(undefined2 *)(puVar10 + 0x14) = 0;
    puVar10[0x15] = 0;
    *(undefined4 *)(puVar10 + 0x16) = 0;
    *(undefined4 *)((longlong)puVar10 + 0xb4) = 0xffffffff;
    *(undefined2 *)(puVar10 + 0x17) = 0;
    puVar10[0x18] = 0;
    *(undefined4 *)(puVar10 + 0x19) = 0;
    *(undefined4 *)((longlong)puVar10 + 0xcc) = 0xffffffff;
    *(undefined2 *)(puVar10 + 0x1a) = 0;
    puVar10[0x1b] = 0;
    puVar10[0x1c] = 0;
    *(int *)(puVar10 + 0x1d) = iVar2;
    uVar5 = 0;
    if (*(int *)(puVar10 + 2) != 0) {
      do {
        uVar9 = (int)uVar5 + 1;
        lVar14 = *(longlong *)(&local_188 + uVar5 * 6);
        puVar10[uVar5 * 3 + 3] = (&local_190)[uVar5 * 3];
        (puVar10 + uVar5 * 3 + 3)[1] = lVar14;
        puVar10[uVar5 * 3 + 5] = *(undefined8 *)(local_180 + uVar5 * 0xc);
        uVar5 = (ulonglong)uVar9;
      } while (uVar9 < *(uint *)(puVar10 + 2));
      iVar2 = *(int *)(puVar10 + 0x1d);
    }
    uVar5 = 0;
    if (iVar2 != 0) {
      do {
        uVar9 = (int)uVar5 + 1;
        puVar10[uVar5 + 0x1e] = plVar6[uVar5];
        uVar5 = (ulonglong)uVar9;
      } while (uVar9 < *(uint *)(puVar10 + 0x1d));
    }
    if (local_1a8 != (longlong *)0x0) {
      (**(code **)(*local_1a8 + 0x30))();
    }
  }
  local_128 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_120 = 0;
  local_11c = 0x26;
  local_114 = 0;
  local_10c = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_bc = 0;
  local_b4 = 0;
  FUN_14049afe0(param_1,&local_168);
  puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar10 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar10 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  uVar3 = 0;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar10;
  *(undefined8 **)(param_1 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_143f59420;
  *(int *)(puVar10 + 4) = local_1c8[0];
  puVar10[2] = 0;
  *(undefined4 *)(puVar10 + 3) = 0;
  *(int *)((longlong)puVar10 + 0x1c) = (int)param_5;
  *(undefined4 *)((longlong)puVar10 + 0x24) = 0x3f800000;
  if (*(char *)(local_198 + 0x11b4) == '\0') {
    uStack_130 = FUN_141ac06b0();
  }
  else {
    uStack_130 = FUN_141ac0570();
  }
  local_128 = FUN_1409853f0();
  local_138 = FUN_1404a0ce0();
  puVar13 = (undefined8 *)FUN_141ee3620();
  local_168 = *puVar13;
  if (lVar1 == 0) {
    local_1a8 = (longlong *)0x0;
    local_1b0 = 1;
  }
  else {
    lVar14 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar14 + 0x28) == '\0') {
      FUN_1419f3850(lVar14);
    }
    uVar3 = *(undefined8 *)(lVar14 + 0x38);
  }
  uVar4 = 0;
  uStack_160 = uVar3;
  if ((local_1b0 & 1) != 0) {
    local_1b0 = local_1b0 & 0xfffffffe;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
  }
  if (lVar12 == 0) {
    uVar9 = local_1b0 | 2;
    local_1a8 = (longlong *)0x0;
  }
  else {
    lVar14 = *(longlong *)(lVar12 + 0x48);
    if (*(char *)(lVar14 + 0x28) == '\0') {
      FUN_1419f3850(lVar14);
    }
    uVar4 = *(undefined8 *)(lVar14 + 0x40);
    uVar9 = local_1b0;
  }
  local_148 = uVar4;
  if ((uVar9 & 2) != 0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
  }
  local_11c = local_11c & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_168,2,1);
  lVar14 = local_198;
  local_1e8 = (wchar_t *)local_178;
  local_1e0 = param_4;
  FUN_141b45010(lVar1,param_1,local_198,CONCAT44((float)local_1c8[0],(float)(int)param_5));
  lVar1 = *(longlong *)(lVar12 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  local_198 = *(longlong *)(lVar1 + 0x40);
  FUN_141aa9590(lVar12,param_1,local_198,*(undefined8 *)(lVar14 + 0x20));
  FUN_141b22160(lVar12 + 0xc0,param_1,&local_198,&DAT_146a17160);
  FUN_141b22420(lVar12 + 0xee,param_1,&local_198,local_170);
  puVar13 = (undefined8 *)FUN_141ee3600();
  puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar3 = *puVar13;
  puVar13 = puVar10 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar10 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar10;
  *(undefined8 **)(param_1 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_143f489e0;
  *(undefined4 *)(puVar10 + 2) = 0;
  puVar10[3] = uVar3;
  *(undefined4 *)(puVar10 + 4) = 0;
  uVar4 = DAT_146a17168;
  puVar13 = (undefined8 *)FUN_141ee35f0();
  puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar3 = *puVar13;
  puVar13 = puVar10 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar10 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar10;
  *(undefined8 **)(param_1 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144de0188;
  puVar10[2] = uVar3;
  puVar10[3] = uVar4;
  puVar10[4] = 0;
  FUN_141a19150(param_1,0,0,0);
  iVar2 = local_1a0;
  lVar12 = (longlong)local_1a0;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  iVar8 = local_1a0 * 8;
  uVar5 = (longlong)iVar8 + (longlong)puVar13;
  if (*(ulonglong *)(param_1 + 0x38) < uVar5) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,iVar8 + 8);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar5 = (longlong)iVar8 + (longlong)puVar13;
  }
  *(ulonglong *)(param_1 + 0x30) = uVar5;
  if (0 < iVar2) {
    puVar10 = puVar13;
    do {
      *puVar10 = *(undefined8 *)(((longlong)plVar6 - (longlong)puVar13) + (longlong)puVar10);
      puVar10 = puVar10 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar7 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar7 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar10;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar7;
  *(undefined8 **)(param_1 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_144d91e60;
  *(int *)(puVar7 + 2) = iVar2;
  puVar7[3] = puVar13;
  puVar7[4] = 0;
  puVar7[5] = 0;
  if (plVar6 != (longlong *)0x0) {
    FMemory::Free(plVar6);
  }
  return;
}



// FUNCTION 141b20220 FUN_141b20220 body=2828 status=ok
// SIG undefined FUN_141b20220(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b20220(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  int iStackX_1c;
  undefined1 auStack_208 [32];
  wchar_t *local_1e8;
  undefined1 local_1e0;
  undefined1 local_1d8;
  uint local_1c8 [2];
  undefined *local_1c0;
  ulonglong uStack_1b8;
  longlong *local_1b0;
  int local_1a8;
  undefined *local_1a0;
  uint local_198;
  longlong local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined2 local_178 [4];
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  ulonglong local_11c;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  int local_94;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined2 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined1 local_70;
  wchar_t *local_68;
  undefined2 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  plVar14 = (longlong *)0x0;
  local_1a8 = 0;
  lVar13 = *(longlong *)(param_2 + 0x3090);
  local_198 = 0;
  uStack_1b8 = uStack_1b8 & 0xffffffff00000000;
  local_1c0 = &DAT_146a16760;
  local_170 = param_4;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar13 + 0x38,local_1c8,&local_1c0);
  plVar6 = plVar14;
  if (local_1c8[0] != 0xffffffff) {
    plVar6 = (longlong *)((longlong)(int)local_1c8[0] * 0x20 + *(longlong *)(lVar13 + 0x38));
  }
  uStack_1b8 = uStack_1b8 & 0xffffffff00000000;
  plVar12 = plVar6 + 2;
  if (plVar6 == (longlong *)0x0) {
    plVar12 = plVar14;
  }
  local_1c0 = &DAT_146a18c50;
  lVar1 = *plVar12;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar13 + 0x38,local_1c8,&local_1c0);
  plVar6 = plVar14;
  if (local_1c8[0] != 0xffffffff) {
    plVar6 = (longlong *)((longlong)(int)local_1c8[0] * 0x20 + *(longlong *)(lVar13 + 0x38));
  }
  local_1c0 = (undefined *)0x0;
  uStack_1b8 = 0;
  plVar12 = plVar6 + 2;
  if (plVar6 == (longlong *)0x0) {
    plVar12 = plVar14;
  }
  lVar13 = *plVar12;
  FUN_141b34050(lVar13 + 0x10c,*(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x13d0),&local_1c0);
  local_1a0 = local_1c0;
  local_1c8[0] = (uint)uStack_1b8;
  puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  iVar8 = (uint)uStack_1b8 * 8;
  uVar5 = (longlong)puVar15 + (longlong)iVar8;
  if (*(ulonglong *)(param_1 + 0x38) < uVar5) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,iVar8 + 8);
    puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar5 = (longlong)puVar15 + (longlong)iVar8;
  }
  puVar2 = local_1a0;
  *(ulonglong *)(param_1 + 0x30) = uVar5;
  lVar10 = (longlong)(int)local_1c8[0];
  if (0 < (int)local_1c8[0]) {
    puVar11 = puVar15;
    do {
      *puVar11 = *(undefined8 *)(((longlong)local_1a0 - (longlong)puVar15) + (longlong)puVar11);
      puVar11 = puVar11 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar7 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar11) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar7 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar11;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar7;
  *(undefined8 **)(param_1 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  puVar7[3] = puVar15;
  iStackX_1c = (int)((ulonglong)param_3 >> 0x20);
  *puVar7 = &PTR_LAB_144d91e60;
  *(uint *)(puVar7 + 2) = local_1c8[0];
  *(undefined4 *)(puVar7 + 4) = 2;
  *(undefined4 *)((longlong)puVar7 + 0x24) = 1;
  puVar7[5] = 0;
  local_1a8 = iStackX_1c;
  iVar8 = (int)param_3;
  if (DAT_146ab62f4 == '\0') {
    *(undefined4 *)(param_1 + 0x98) = 0;
    local_1c0 = (undefined *)0x0;
    uStack_1b8 = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar11 + 0x26;
    if (*(undefined8 **)(param_1 + 0x38) < puVar15) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar11 + 0x26;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar15;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar11;
    *(undefined8 **)(param_1 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_143f59440;
    *(undefined4 *)(puVar11 + 2) = 0;
    puVar11[3] = 0;
    *(undefined4 *)(puVar11 + 4) = 0;
    *(undefined4 *)((longlong)puVar11 + 0x24) = 0xffffffff;
    *(undefined2 *)(puVar11 + 5) = 0;
    puVar11[6] = 0;
    *(undefined4 *)(puVar11 + 7) = 0;
    *(undefined4 *)((longlong)puVar11 + 0x3c) = 0xffffffff;
    *(undefined2 *)(puVar11 + 8) = 0;
    puVar11[9] = 0;
    *(undefined4 *)(puVar11 + 10) = 0;
    *(undefined4 *)((longlong)puVar11 + 0x54) = 0xffffffff;
    *(undefined2 *)(puVar11 + 0xb) = 0;
    puVar11[0xc] = 0;
    *(undefined4 *)(puVar11 + 0xd) = 0;
    *(undefined4 *)((longlong)puVar11 + 0x6c) = 0xffffffff;
    *(undefined2 *)(puVar11 + 0xe) = 0;
    puVar11[0xf] = 0;
    *(undefined4 *)(puVar11 + 0x10) = 0;
    *(undefined4 *)((longlong)puVar11 + 0x84) = 0xffffffff;
    *(undefined2 *)(puVar11 + 0x11) = 0;
    puVar11[0x12] = 0;
    *(undefined4 *)(puVar11 + 0x13) = 0;
    *(undefined4 *)((longlong)puVar11 + 0x9c) = 0xffffffff;
    *(undefined2 *)(puVar11 + 0x14) = 0;
    puVar11[0x15] = 0;
    *(undefined4 *)(puVar11 + 0x16) = 0;
    *(undefined4 *)((longlong)puVar11 + 0xb4) = 0xffffffff;
    *(undefined2 *)(puVar11 + 0x17) = 0;
    puVar11[0x18] = 0;
    *(undefined4 *)(puVar11 + 0x19) = 0;
    *(undefined4 *)((longlong)puVar11 + 0xcc) = 0xffffffff;
    *(undefined2 *)(puVar11 + 0x1a) = 0;
    puVar11[0x1b] = 0;
    puVar11[0x1c] = 0;
    *(uint *)(puVar11 + 0x1d) = local_1c8[0];
    uVar5 = 0;
    uVar9 = local_1c8[0];
    if (*(int *)(puVar11 + 2) != 0) {
      do {
        uVar9 = (int)uVar5 + 1;
        uVar3 = ((undefined8 *)(uVar5 * 0x18))[1];
        puVar11[uVar5 * 3 + 3] = *(undefined8 *)(uVar5 * 0x18);
        (puVar11 + uVar5 * 3 + 3)[1] = uVar3;
        puVar11[uVar5 * 3 + 5] = *(undefined8 *)(uVar5 * 0x18 + 0x10);
        uVar5 = (ulonglong)uVar9;
      } while (uVar9 < *(uint *)(puVar11 + 2));
      uVar9 = *(uint *)(puVar11 + 0x1d);
    }
    uVar5 = 0;
    if (uVar9 != 0) {
      do {
        uVar9 = (int)uVar5 + 1;
        puVar11[uVar5 + 0x1e] = *(undefined8 *)(puVar2 + uVar5 * 8);
        uVar5 = (ulonglong)uVar9;
      } while (uVar9 < *(uint *)(puVar11 + 0x1d));
    }
  }
  else {
    local_1d8 = 1;
    local_98 = DAT_146ab6938;
    local_1e0 = 1;
    local_68 = L"UnknownTexture2D";
    local_88 = 1;
    local_80 = 1;
    local_74 = 1;
    local_60 = 1;
    local_1e8 = L"Dummy";
    local_1b0 = (longlong *)0x0;
    local_a8 = _DAT_146ab6928;
    uStack_a0 = uRam0000000146ab6930;
    local_90 = iStackX_1c;
    local_8c = 0;
    local_84 = 0x10000;
    local_7c = 2;
    local_70 = 0;
    local_94 = iVar8;
    FUN_141ce20b0(&PTR_PTR_1464c2560,param_1,&local_a8,&local_1b0);
    local_188 = local_1b0[1];
    local_180 = 0;
    local_17c = 0xffffffff;
    local_178[0] = 0x100;
    *(undefined4 *)(param_1 + 0x98) = 1;
    uVar5 = 0;
    do {
      uVar9 = (int)uVar5 + 1;
      lVar10 = *(longlong *)(&local_180 + uVar5 * 6);
      uVar3 = *(undefined8 *)(local_178 + uVar5 * 0xc);
      plVar6 = (longlong *)(param_1 + 0xa0 + uVar5 * 0x18);
      *plVar6 = (&local_188)[uVar5 * 3];
      plVar6[1] = lVar10;
      *(undefined8 *)(param_1 + 0xb0 + uVar5 * 0x18) = uVar3;
      uVar5 = (ulonglong)uVar9;
    } while (uVar9 < *(uint *)(param_1 + 0x98));
    local_1c0 = (undefined *)0x0;
    uStack_1b8 = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar11 + 0x26;
    if (*(undefined8 **)(param_1 + 0x38) < puVar15) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar11 + 0x26;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar15;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar11;
    *(undefined8 **)(param_1 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_143f59440;
    *(undefined4 *)(puVar11 + 2) = 1;
    puVar11[3] = 0;
    *(undefined4 *)(puVar11 + 4) = 0;
    *(undefined4 *)((longlong)puVar11 + 0x24) = 0xffffffff;
    *(undefined2 *)(puVar11 + 5) = 0;
    puVar11[6] = 0;
    *(undefined4 *)(puVar11 + 7) = 0;
    *(undefined4 *)((longlong)puVar11 + 0x3c) = 0xffffffff;
    *(undefined2 *)(puVar11 + 8) = 0;
    puVar11[9] = 0;
    *(undefined4 *)(puVar11 + 10) = 0;
    *(undefined4 *)((longlong)puVar11 + 0x54) = 0xffffffff;
    *(undefined2 *)(puVar11 + 0xb) = 0;
    puVar11[0xc] = 0;
    *(undefined4 *)(puVar11 + 0xd) = 0;
    *(undefined4 *)((longlong)puVar11 + 0x6c) = 0xffffffff;
    *(undefined2 *)(puVar11 + 0xe) = 0;
    puVar11[0xf] = 0;
    *(undefined4 *)(puVar11 + 0x10) = 0;
    *(undefined4 *)((longlong)puVar11 + 0x84) = 0xffffffff;
    *(undefined2 *)(puVar11 + 0x11) = 0;
    puVar11[0x12] = 0;
    *(undefined4 *)(puVar11 + 0x13) = 0;
    *(undefined4 *)((longlong)puVar11 + 0x9c) = 0xffffffff;
    *(undefined2 *)(puVar11 + 0x14) = 0;
    puVar11[0x15] = 0;
    *(undefined4 *)(puVar11 + 0x16) = 0;
    *(undefined4 *)((longlong)puVar11 + 0xb4) = 0xffffffff;
    *(undefined2 *)(puVar11 + 0x17) = 0;
    puVar11[0x18] = 0;
    *(undefined4 *)(puVar11 + 0x19) = 0;
    *(undefined4 *)((longlong)puVar11 + 0xcc) = 0xffffffff;
    *(undefined2 *)(puVar11 + 0x1a) = 0;
    puVar11[0x1b] = 0;
    puVar11[0x1c] = 0;
    *(uint *)(puVar11 + 0x1d) = local_1c8[0];
    uVar5 = 0;
    uVar9 = local_1c8[0];
    if (*(int *)(puVar11 + 2) != 0) {
      do {
        uVar9 = (int)uVar5 + 1;
        lVar10 = *(longlong *)(&local_180 + uVar5 * 6);
        puVar11[uVar5 * 3 + 3] = (&local_188)[uVar5 * 3];
        (puVar11 + uVar5 * 3 + 3)[1] = lVar10;
        puVar11[uVar5 * 3 + 5] = *(undefined8 *)(local_178 + uVar5 * 0xc);
        uVar5 = (ulonglong)uVar9;
      } while (uVar9 < *(uint *)(puVar11 + 2));
      uVar9 = *(uint *)(puVar11 + 0x1d);
    }
    uVar5 = 0;
    if (uVar9 != 0) {
      do {
        uVar9 = (int)uVar5 + 1;
        puVar11[uVar5 + 0x1e] = *(undefined8 *)(puVar2 + uVar5 * 8);
        uVar5 = (ulonglong)uVar9;
      } while (uVar9 < *(uint *)(puVar11 + 0x1d));
    }
    if (local_1b0 != (longlong *)0x0) {
      (**(code **)(*local_1b0 + 0x30))();
    }
  }
  local_128 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_120 = 0;
  local_11c = 0x26;
  local_114 = 0;
  local_10c = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_bc = 0;
  local_b4 = 0;
  FUN_14049afe0(param_1,&local_168);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar15) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar15;
  uVar3 = 0;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_143f59420;
  puVar11[2] = 0;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(int *)((longlong)puVar11 + 0x1c) = iVar8;
  *(int *)(puVar11 + 4) = iStackX_1c;
  *(undefined4 *)((longlong)puVar11 + 0x24) = 0x3f800000;
  if (*(char *)(param_2 + 0x11b4) == '\0') {
    uStack_130 = FUN_141ac06b0();
  }
  else {
    uStack_130 = FUN_141ac0570();
  }
  local_128 = FUN_1409853f0();
  local_138 = FUN_1404a0ce0();
  local_11c = local_11c & 0xffffffff00000000;
  puVar15 = (undefined8 *)FUN_141ee3620();
  local_168 = *puVar15;
  if (lVar1 == 0) {
    local_1b0 = (longlong *)0x0;
    uVar9 = 1;
  }
  else {
    lVar10 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar10 + 0x28) == '\0') {
      FUN_1419f3850(lVar10);
    }
    uVar3 = *(undefined8 *)(lVar10 + 0x38);
    uVar9 = local_198;
  }
  uVar4 = 0;
  uStack_160 = uVar3;
  if ((uVar9 & 1) != 0) {
    uVar9 = uVar9 & 0xfffffffe;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1b0);
  }
  if (lVar13 == 0) {
    uVar9 = uVar9 | 2;
    local_1b0 = (longlong *)0x0;
  }
  else {
    lVar10 = *(longlong *)(lVar13 + 0x48);
    if (*(char *)(lVar10 + 0x28) == '\0') {
      FUN_1419f3850(lVar10);
    }
    uVar4 = *(undefined8 *)(lVar10 + 0x40);
  }
  local_148 = uVar4;
  if ((uVar9 & 2) != 0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1b0);
  }
  FUN_141ed6ac0(param_1,&local_168,2,1);
  uVar3 = local_170;
  FUN_141b44de0(lVar1,param_1,param_2,local_170);
  local_1e8 = (wchar_t *)uVar3;
  FUN_141b42470(lVar13,param_1,param_2,CONCAT44((float)local_1a8,(float)iVar8));
  uVar3 = DAT_1464c2150;
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar15) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar15;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_143f489e0;
  *(undefined4 *)(puVar11 + 2) = 0;
  puVar11[3] = uVar3;
  *(undefined4 *)(puVar11 + 4) = 0;
  uVar4 = DAT_146a163f8;
  uVar3 = DAT_1464c2190;
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar15) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar11 + 5;
  }
  uVar9 = local_1c8[0];
  *(undefined8 **)(param_1 + 0x30) = puVar15;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  lVar13 = (longlong)(int)local_1c8[0];
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  iVar8 = local_1c8[0] * 8;
  puVar11[3] = uVar4;
  *puVar11 = &PTR_LAB_144de0188;
  puVar11[2] = uVar3;
  puVar11[4] = 0;
  puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar5 = (longlong)iVar8 + (longlong)puVar15;
  if (*(ulonglong *)(param_1 + 0x38) < uVar5) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,iVar8 + 8);
    puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar5 = (longlong)iVar8 + (longlong)puVar15;
  }
  puVar2 = local_1a0;
  *(ulonglong *)(param_1 + 0x30) = uVar5;
  if (0 < (int)uVar9) {
    puVar11 = puVar15;
    do {
      *puVar11 = *(undefined8 *)(((longlong)local_1a0 - (longlong)puVar15) + (longlong)puVar11);
      puVar11 = puVar11 + 1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar7 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar11) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar7 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar11;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar7;
  *(undefined8 **)(param_1 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_144d91e60;
  *(uint *)(puVar7 + 2) = uVar9;
  puVar7[3] = puVar15;
  puVar7[4] = 2;
  puVar7[5] = 0;
  FUN_141a19150(param_1,0,0,0);
  if (puVar2 != (undefined *)0x0) {
    FMemory::Free(puVar2);
  }
  return;
}



// FUNCTION 141b20d30 FUN_141b20d30 body=2828 status=ok
// SIG undefined FUN_141b20d30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b20d30(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  int iStackX_1c;
  undefined1 auStack_208 [32];
  wchar_t *local_1e8;
  undefined1 local_1e0;
  undefined1 local_1d8;
  uint local_1c8 [2];
  undefined *local_1c0;
  ulonglong uStack_1b8;
  longlong *local_1b0;
  int local_1a8;
  undefined *local_1a0;
  uint local_198;
  longlong local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined2 local_178 [4];
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  ulonglong local_11c;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  int local_94;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined2 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined1 local_70;
  wchar_t *local_68;
  undefined2 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  plVar14 = (longlong *)0x0;
  local_1a8 = 0;
  lVar13 = *(longlong *)(param_2 + 0x3090);
  local_198 = 0;
  uStack_1b8 = uStack_1b8 & 0xffffffff00000000;
  local_1c0 = &DAT_146a16760;
  local_170 = param_4;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar13 + 0x38,local_1c8,&local_1c0);
  plVar6 = plVar14;
  if (local_1c8[0] != 0xffffffff) {
    plVar6 = (longlong *)((longlong)(int)local_1c8[0] * 0x20 + *(longlong *)(lVar13 + 0x38));
  }
  uStack_1b8 = uStack_1b8 & 0xffffffff00000000;
  plVar12 = plVar6 + 2;
  if (plVar6 == (longlong *)0x0) {
    plVar12 = plVar14;
  }
  local_1c0 = &DAT_146a18da0;
  lVar1 = *plVar12;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar13 + 0x38,local_1c8,&local_1c0);
  plVar6 = plVar14;
  if (local_1c8[0] != 0xffffffff) {
    plVar6 = (longlong *)((longlong)(int)local_1c8[0] * 0x20 + *(longlong *)(lVar13 + 0x38));
  }
  local_1c0 = (undefined *)0x0;
  uStack_1b8 = 0;
  plVar12 = plVar6 + 2;
  if (plVar6 == (longlong *)0x0) {
    plVar12 = plVar14;
  }
  lVar13 = *plVar12;
  FUN_141b34050(lVar13 + 0x10c,*(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x13d0),&local_1c0);
  local_1a0 = local_1c0;
  local_1c8[0] = (uint)uStack_1b8;
  puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  iVar8 = (uint)uStack_1b8 * 8;
  uVar5 = (longlong)puVar15 + (longlong)iVar8;
  if (*(ulonglong *)(param_1 + 0x38) < uVar5) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,iVar8 + 8);
    puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar5 = (longlong)puVar15 + (longlong)iVar8;
  }
  puVar2 = local_1a0;
  *(ulonglong *)(param_1 + 0x30) = uVar5;
  lVar10 = (longlong)(int)local_1c8[0];
  if (0 < (int)local_1c8[0]) {
    puVar11 = puVar15;
    do {
      *puVar11 = *(undefined8 *)(((longlong)local_1a0 - (longlong)puVar15) + (longlong)puVar11);
      puVar11 = puVar11 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar7 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar11) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar7 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar11;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar7;
  *(undefined8 **)(param_1 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  puVar7[3] = puVar15;
  iStackX_1c = (int)((ulonglong)param_3 >> 0x20);
  *puVar7 = &PTR_LAB_144d91e60;
  *(uint *)(puVar7 + 2) = local_1c8[0];
  *(undefined4 *)(puVar7 + 4) = 2;
  *(undefined4 *)((longlong)puVar7 + 0x24) = 1;
  puVar7[5] = 0;
  local_1a8 = iStackX_1c;
  iVar8 = (int)param_3;
  if (DAT_146ab62f4 == '\0') {
    *(undefined4 *)(param_1 + 0x98) = 0;
    local_1c0 = (undefined *)0x0;
    uStack_1b8 = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar11 + 0x26;
    if (*(undefined8 **)(param_1 + 0x38) < puVar15) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar11 + 0x26;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar15;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar11;
    *(undefined8 **)(param_1 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_143f59440;
    *(undefined4 *)(puVar11 + 2) = 0;
    puVar11[3] = 0;
    *(undefined4 *)(puVar11 + 4) = 0;
    *(undefined4 *)((longlong)puVar11 + 0x24) = 0xffffffff;
    *(undefined2 *)(puVar11 + 5) = 0;
    puVar11[6] = 0;
    *(undefined4 *)(puVar11 + 7) = 0;
    *(undefined4 *)((longlong)puVar11 + 0x3c) = 0xffffffff;
    *(undefined2 *)(puVar11 + 8) = 0;
    puVar11[9] = 0;
    *(undefined4 *)(puVar11 + 10) = 0;
    *(undefined4 *)((longlong)puVar11 + 0x54) = 0xffffffff;
    *(undefined2 *)(puVar11 + 0xb) = 0;
    puVar11[0xc] = 0;
    *(undefined4 *)(puVar11 + 0xd) = 0;
    *(undefined4 *)((longlong)puVar11 + 0x6c) = 0xffffffff;
    *(undefined2 *)(puVar11 + 0xe) = 0;
    puVar11[0xf] = 0;
    *(undefined4 *)(puVar11 + 0x10) = 0;
    *(undefined4 *)((longlong)puVar11 + 0x84) = 0xffffffff;
    *(undefined2 *)(puVar11 + 0x11) = 0;
    puVar11[0x12] = 0;
    *(undefined4 *)(puVar11 + 0x13) = 0;
    *(undefined4 *)((longlong)puVar11 + 0x9c) = 0xffffffff;
    *(undefined2 *)(puVar11 + 0x14) = 0;
    puVar11[0x15] = 0;
    *(undefined4 *)(puVar11 + 0x16) = 0;
    *(undefined4 *)((longlong)puVar11 + 0xb4) = 0xffffffff;
    *(undefined2 *)(puVar11 + 0x17) = 0;
    puVar11[0x18] = 0;
    *(undefined4 *)(puVar11 + 0x19) = 0;
    *(undefined4 *)((longlong)puVar11 + 0xcc) = 0xffffffff;
    *(undefined2 *)(puVar11 + 0x1a) = 0;
    puVar11[0x1b] = 0;
    puVar11[0x1c] = 0;
    *(uint *)(puVar11 + 0x1d) = local_1c8[0];
    uVar5 = 0;
    uVar9 = local_1c8[0];
    if (*(int *)(puVar11 + 2) != 0) {
      do {
        uVar9 = (int)uVar5 + 1;
        uVar3 = ((undefined8 *)(uVar5 * 0x18))[1];
        puVar11[uVar5 * 3 + 3] = *(undefined8 *)(uVar5 * 0x18);
        (puVar11 + uVar5 * 3 + 3)[1] = uVar3;
        puVar11[uVar5 * 3 + 5] = *(undefined8 *)(uVar5 * 0x18 + 0x10);
        uVar5 = (ulonglong)uVar9;
      } while (uVar9 < *(uint *)(puVar11 + 2));
      uVar9 = *(uint *)(puVar11 + 0x1d);
    }
    uVar5 = 0;
    if (uVar9 != 0) {
      do {
        uVar9 = (int)uVar5 + 1;
        puVar11[uVar5 + 0x1e] = *(undefined8 *)(puVar2 + uVar5 * 8);
        uVar5 = (ulonglong)uVar9;
      } while (uVar9 < *(uint *)(puVar11 + 0x1d));
    }
  }
  else {
    local_1d8 = 1;
    local_98 = DAT_146ab6938;
    local_1e0 = 1;
    local_68 = L"UnknownTexture2D";
    local_88 = 1;
    local_80 = 1;
    local_74 = 1;
    local_60 = 1;
    local_1e8 = L"Dummy";
    local_1b0 = (longlong *)0x0;
    local_a8 = _DAT_146ab6928;
    uStack_a0 = uRam0000000146ab6930;
    local_90 = iStackX_1c;
    local_8c = 0;
    local_84 = 0x10000;
    local_7c = 2;
    local_70 = 0;
    local_94 = iVar8;
    FUN_141ce20b0(&PTR_PTR_1464c2560,param_1,&local_a8,&local_1b0);
    local_188 = local_1b0[1];
    local_180 = 0;
    local_17c = 0xffffffff;
    local_178[0] = 0x100;
    *(undefined4 *)(param_1 + 0x98) = 1;
    uVar5 = 0;
    do {
      uVar9 = (int)uVar5 + 1;
      lVar10 = *(longlong *)(&local_180 + uVar5 * 6);
      uVar3 = *(undefined8 *)(local_178 + uVar5 * 0xc);
      plVar6 = (longlong *)(param_1 + 0xa0 + uVar5 * 0x18);
      *plVar6 = (&local_188)[uVar5 * 3];
      plVar6[1] = lVar10;
      *(undefined8 *)(param_1 + 0xb0 + uVar5 * 0x18) = uVar3;
      uVar5 = (ulonglong)uVar9;
    } while (uVar9 < *(uint *)(param_1 + 0x98));
    local_1c0 = (undefined *)0x0;
    uStack_1b8 = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar11 + 0x26;
    if (*(undefined8 **)(param_1 + 0x38) < puVar15) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar11 + 0x26;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar15;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar11;
    *(undefined8 **)(param_1 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_143f59440;
    *(undefined4 *)(puVar11 + 2) = 1;
    puVar11[3] = 0;
    *(undefined4 *)(puVar11 + 4) = 0;
    *(undefined4 *)((longlong)puVar11 + 0x24) = 0xffffffff;
    *(undefined2 *)(puVar11 + 5) = 0;
    puVar11[6] = 0;
    *(undefined4 *)(puVar11 + 7) = 0;
    *(undefined4 *)((longlong)puVar11 + 0x3c) = 0xffffffff;
    *(undefined2 *)(puVar11 + 8) = 0;
    puVar11[9] = 0;
    *(undefined4 *)(puVar11 + 10) = 0;
    *(undefined4 *)((longlong)puVar11 + 0x54) = 0xffffffff;
    *(undefined2 *)(puVar11 + 0xb) = 0;
    puVar11[0xc] = 0;
    *(undefined4 *)(puVar11 + 0xd) = 0;
    *(undefined4 *)((longlong)puVar11 + 0x6c) = 0xffffffff;
    *(undefined2 *)(puVar11 + 0xe) = 0;
    puVar11[0xf] = 0;
    *(undefined4 *)(puVar11 + 0x10) = 0;
    *(undefined4 *)((longlong)puVar11 + 0x84) = 0xffffffff;
    *(undefined2 *)(puVar11 + 0x11) = 0;
    puVar11[0x12] = 0;
    *(undefined4 *)(puVar11 + 0x13) = 0;
    *(undefined4 *)((longlong)puVar11 + 0x9c) = 0xffffffff;
    *(undefined2 *)(puVar11 + 0x14) = 0;
    puVar11[0x15] = 0;
    *(undefined4 *)(puVar11 + 0x16) = 0;
    *(undefined4 *)((longlong)puVar11 + 0xb4) = 0xffffffff;
    *(undefined2 *)(puVar11 + 0x17) = 0;
    puVar11[0x18] = 0;
    *(undefined4 *)(puVar11 + 0x19) = 0;
    *(undefined4 *)((longlong)puVar11 + 0xcc) = 0xffffffff;
    *(undefined2 *)(puVar11 + 0x1a) = 0;
    puVar11[0x1b] = 0;
    puVar11[0x1c] = 0;
    *(uint *)(puVar11 + 0x1d) = local_1c8[0];
    uVar5 = 0;
    uVar9 = local_1c8[0];
    if (*(int *)(puVar11 + 2) != 0) {
      do {
        uVar9 = (int)uVar5 + 1;
        lVar10 = *(longlong *)(&local_180 + uVar5 * 6);
        puVar11[uVar5 * 3 + 3] = (&local_188)[uVar5 * 3];
        (puVar11 + uVar5 * 3 + 3)[1] = lVar10;
        puVar11[uVar5 * 3 + 5] = *(undefined8 *)(local_178 + uVar5 * 0xc);
        uVar5 = (ulonglong)uVar9;
      } while (uVar9 < *(uint *)(puVar11 + 2));
      uVar9 = *(uint *)(puVar11 + 0x1d);
    }
    uVar5 = 0;
    if (uVar9 != 0) {
      do {
        uVar9 = (int)uVar5 + 1;
        puVar11[uVar5 + 0x1e] = *(undefined8 *)(puVar2 + uVar5 * 8);
        uVar5 = (ulonglong)uVar9;
      } while (uVar9 < *(uint *)(puVar11 + 0x1d));
    }
    if (local_1b0 != (longlong *)0x0) {
      (**(code **)(*local_1b0 + 0x30))();
    }
  }
  local_128 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_120 = 0;
  local_11c = 0x26;
  local_114 = 0;
  local_10c = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_bc = 0;
  local_b4 = 0;
  FUN_14049afe0(param_1,&local_168);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar15) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar15;
  uVar3 = 0;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_143f59420;
  puVar11[2] = 0;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(int *)((longlong)puVar11 + 0x1c) = iVar8;
  *(int *)(puVar11 + 4) = iStackX_1c;
  *(undefined4 *)((longlong)puVar11 + 0x24) = 0x3f800000;
  if (*(char *)(param_2 + 0x11b4) == '\0') {
    uStack_130 = FUN_141ac06b0();
  }
  else {
    uStack_130 = FUN_141ac0570();
  }
  local_128 = FUN_1409853f0();
  local_138 = FUN_1404a0ce0();
  local_11c = local_11c & 0xffffffff00000000;
  puVar15 = (undefined8 *)FUN_141ee3620();
  local_168 = *puVar15;
  if (lVar1 == 0) {
    local_1b0 = (longlong *)0x0;
    uVar9 = 1;
  }
  else {
    lVar10 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar10 + 0x28) == '\0') {
      FUN_1419f3850(lVar10);
    }
    uVar3 = *(undefined8 *)(lVar10 + 0x38);
    uVar9 = local_198;
  }
  uVar4 = 0;
  uStack_160 = uVar3;
  if ((uVar9 & 1) != 0) {
    uVar9 = uVar9 & 0xfffffffe;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1b0);
  }
  if (lVar13 == 0) {
    uVar9 = uVar9 | 2;
    local_1b0 = (longlong *)0x0;
  }
  else {
    lVar10 = *(longlong *)(lVar13 + 0x48);
    if (*(char *)(lVar10 + 0x28) == '\0') {
      FUN_1419f3850(lVar10);
    }
    uVar4 = *(undefined8 *)(lVar10 + 0x40);
  }
  local_148 = uVar4;
  if ((uVar9 & 2) != 0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1b0);
  }
  FUN_141ed6ac0(param_1,&local_168,2,1);
  uVar3 = local_170;
  FUN_141b44de0(lVar1,param_1,param_2,local_170);
  local_1e8 = (wchar_t *)uVar3;
  FUN_141b42470(lVar13,param_1,param_2,CONCAT44((float)local_1a8,(float)iVar8));
  uVar3 = DAT_1464c2150;
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar15) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar15;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_143f489e0;
  *(undefined4 *)(puVar11 + 2) = 0;
  puVar11[3] = uVar3;
  *(undefined4 *)(puVar11 + 4) = 0;
  uVar4 = DAT_146a163f8;
  uVar3 = DAT_1464c2190;
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar15) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar11 + 5;
  }
  uVar9 = local_1c8[0];
  *(undefined8 **)(param_1 + 0x30) = puVar15;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  lVar13 = (longlong)(int)local_1c8[0];
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  iVar8 = local_1c8[0] * 8;
  puVar11[3] = uVar4;
  *puVar11 = &PTR_LAB_144de0188;
  puVar11[2] = uVar3;
  puVar11[4] = 0;
  puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar5 = (longlong)iVar8 + (longlong)puVar15;
  if (*(ulonglong *)(param_1 + 0x38) < uVar5) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,iVar8 + 8);
    puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar5 = (longlong)iVar8 + (longlong)puVar15;
  }
  puVar2 = local_1a0;
  *(ulonglong *)(param_1 + 0x30) = uVar5;
  if (0 < (int)uVar9) {
    puVar11 = puVar15;
    do {
      *puVar11 = *(undefined8 *)(((longlong)local_1a0 - (longlong)puVar15) + (longlong)puVar11);
      puVar11 = puVar11 + 1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar7 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar11) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar7 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar11;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar7;
  *(undefined8 **)(param_1 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_144d91e60;
  *(uint *)(puVar7 + 2) = uVar9;
  puVar7[3] = puVar15;
  puVar7[4] = 2;
  puVar7[5] = 0;
  FUN_141a19150(param_1,0,0,0);
  if (puVar2 != (undefined *)0x0) {
    FMemory::Free(puVar2);
  }
  return;
}



// FUNCTION 141b21840 Set<FRHIComputeShader_*> body=319 status=ok
// SIG undefined Set<FRHIComputeShader_*>(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FAOParameters::Set<FRHIComputeShader_*>
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  float fVar1;
  float fVar2;
  float local_res8 [2];
  float local_res20 [2];
  undefined4 local_48 [8];
  
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,param_3,param_1,param_4 + 1,0);
  fVar1 = ::_guard_xfg_dispatch_icall_nop(2.0,-((float)(DAT_1464c17b8 - 1) * _DAT_1464c17a8));
  fVar2 = ::_guard_xfg_dispatch_icall_nop(DAT_1464c197c);
  local_res8[0] = fVar1 * ((float)param_4[1] / (fVar2 + 1.0));
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,param_3,param_1 + 6,local_res8,0);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xc,&DAT_1464c17a8,0);
  local_res20[0] = DAT_1464c17ac;
  if (65000.0 <= DAT_1464c17ac) {
    local_res20[0] = 65000.0;
  }
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0x12,local_res20,0);
  local_48[0] = *param_4;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,param_3,param_1 + 0x18,local_48,0)
  ;
  return;
}



// FUNCTION 141b21980 FUN_141b21980 body=551 status=ok
// SIG undefined FUN_141b21980(void)

void FUN_141b21980(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 local_res8;
  int local_res18;
  int local_res1c;
  float local_res20;
  float local_res24;
  
  FUN_141b08510(&local_res18);
  local_res20 = 1.0 / (float)local_res18;
  local_res24 = 1.0 / (float)local_res1c;
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2,*param_3,param_1,&local_res20,0);
  if ((DAT_1464c19f0 == 0) || (DAT_1464c1a0c == 0)) {
    local_res8 = 0;
  }
  else {
    lVar6 = (longlong)*(int *)(*(longlong *)(param_4 + 0x1ab0) + 0x4dc);
    local_res8 = CONCAT44((float)DAT_1464c19f4 * *(float *)(&DAT_1464c1ba4 + lVar6 * 8),
                          (float)DAT_1464c19f4 * *(float *)(&DAT_1464c1ba0 + lVar6 * 8));
  }
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2,*param_3,param_1 + 6,&local_res8,0);
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2,*param_3,param_1 + 0xc,
             *(longlong *)(*(longlong *)(param_4 + 0x1ab0) + 0x13d8) + 0x30,0);
  uVar2 = *(undefined8 *)(param_5 + 8);
  uVar4 = FUN_141ac0bb0();
  uVar3 = *param_3;
  if (*(short *)(param_1 + 0x14) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x12);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    *puVar7 = &PTR_LAB_144d92090;
    puVar7[2] = uVar3;
    puVar7[4] = uVar2;
  }
  if (*(short *)(param_1 + 0x18) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x16);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144dcb3b8;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar4;
  }
  return;
}



// FUNCTION 141b21bb0 FUN_141b21bb0 body=510 status=ok
// SIG undefined FUN_141b21bb0(void)

void FUN_141b21bb0(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  float local_38;
  float local_34;
  float local_30;
  
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1,param_2,*param_3,param_4 + 8);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 8,param_2,*param_3,param_4 + 0x58);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0x10,param_2,*param_3,param_4 + 0x80);
  if ((*(short *)(param_1 + 0x1a) != 0) || (*(short *)(param_1 + 0x1e) != 0)) {
    FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
              (param_1 + 0x18,param_2,*param_3,param_4 + 0xa8);
  }
  lVar3 = DAT_146532078;
  uVar4 = FUN_141a156e0();
  uVar2 = *param_3;
  if (*(short *)(param_1 + 0x22) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x20);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    *puVar6 = &PTR_LAB_144d92090;
    puVar6[2] = uVar2;
    puVar6[4] = lVar3;
  }
  if (*(short *)(param_1 + 0x26) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x24);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144dcb3b8;
    puVar6[2] = uVar2;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar4;
  }
  local_30 = 1.0 / (float)*(int *)(DAT_146532078 + 0x68);
  local_38 = 1.0 / (float)*(int *)(DAT_146532078 + 0x60);
  local_34 = 1.0 / (float)*(int *)(DAT_146532078 + 100);
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,*param_3,param_1 + 0x28,&local_38,0);
  return;
}



// FUNCTION 141b21db0 FUN_141b21db0 body=181 status=ok
// SIG undefined FUN_141b21db0(void)

void FUN_141b21db0(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1,param_2,*param_3,param_4 + 8);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 8,param_2,*param_3,param_4 + 0x58);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0x10,param_2,*param_3,param_4 + 0x30);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0x18,param_2,*param_3,param_4 + 0x80);
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2,*param_3,param_1 + 0x20,param_4,0);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,*param_3,param_1 + 0x26,&DAT_1464c1a30,0);
  return;
}



// FUNCTION 141b21e70 FUN_141b21e70 body=425 status=ok
// SIG undefined FUN_141b21e70(void)

void FUN_141b21e70(longlong param_1,longlong param_2,undefined8 *param_3,void *param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  void *_Dst;
  ulonglong _Size;
  
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1,param_2,*param_3,(longlong)param_4 + 8);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 8,param_2,*param_3,(longlong)param_4 + 0x58);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0x10,param_2,*param_3,(longlong)param_4 + 0x30);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0x18,param_2,*param_3,(longlong)param_4 + 0x80);
  uVar3 = *param_3;
  uVar4 = (uint)*(ushort *)(param_1 + 0x24);
  if (7 < *(ushort *)(param_1 + 0x24)) {
    uVar4 = 8;
  }
  _Size = (ulonglong)uVar4;
  if (uVar4 != 0) {
    uVar1 = *(ushort *)(param_1 + 0x22);
    uVar2 = *(ushort *)(param_1 + 0x20);
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar5 = (longlong)_Dst + _Size;
    if (*(ulonglong *)(param_2 + 0x38) < uVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar4 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar5 = (longlong)_Dst + _Size;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar5;
    _guard_xfg_dispatch_icall_nop(_Dst,param_4,_Size);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144d92080;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 4) = (uint)uVar2;
    puVar7[3] = _Dst;
    *(uint *)((longlong)puVar7 + 0x24) = (uint)uVar1;
    *(uint *)(puVar7 + 5) = uVar4;
  }
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,*param_3,param_1 + 0x26,&DAT_1464c1a30,0);
  return;
}



// FUNCTION 141b22020 Set<FRHIPixelShader_*> body=319 status=ok
// SIG undefined Set<FRHIPixelShader_*>(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FAOParameters::Set<FRHIPixelShader_*>
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  float fVar1;
  float fVar2;
  float local_res8 [2];
  float local_res20 [2];
  undefined4 local_48 [8];
  
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1,param_4 + 1,0);
  fVar1 = ::_guard_xfg_dispatch_icall_nop(2.0,-((float)(DAT_1464c17b8 - 1) * _DAT_1464c17a8));
  fVar2 = ::_guard_xfg_dispatch_icall_nop(DAT_1464c197c);
  local_res8[0] = fVar1 * ((float)param_4[1] / (fVar2 + 1.0));
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 6,local_res8,0);
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xc,&DAT_1464c17a8,0);
  local_res20[0] = DAT_1464c17ac;
  if (65000.0 <= DAT_1464c17ac) {
    local_res20[0] = 65000.0;
  }
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x12,local_res20,0);
  local_48[0] = *param_4;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x18,local_48,0);
  return;
}



// FUNCTION 141b22160 FUN_141b22160 body=694 status=ok
// SIG undefined FUN_141b22160(void)

void FUN_141b22160(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  void *_Dst;
  float local_38;
  float local_34;
  float local_30;
  
  FUN_141b228d0(param_1,param_2,*param_3,param_4 + 8);
  FUN_141b228d0(param_1 + 8,param_2,*param_3,param_4 + 0x58);
  FUN_141b228d0(param_1 + 0x10,param_2,*param_3,param_4 + 0x80);
  if ((*(short *)(param_1 + 0x1a) != 0) || (*(short *)(param_1 + 0x1e) != 0)) {
    FUN_141b228d0(param_1 + 0x18,param_2,*param_3,param_4 + 0xa8);
  }
  lVar5 = DAT_146532078;
  uVar6 = FUN_141a156e0();
  uVar3 = *param_3;
  if (*(short *)(param_1 + 0x22) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x20);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c80;
    puVar9[2] = uVar3;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = lVar5;
  }
  if (*(short *)(param_1 + 0x26) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x24);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c70;
    puVar9[2] = uVar3;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar6;
  }
  uVar3 = *param_3;
  local_30 = 1.0 / (float)*(int *)(DAT_146532078 + 0x68);
  uVar4 = (uint)*(ushort *)(param_1 + 0x2c);
  if (0xb < *(ushort *)(param_1 + 0x2c)) {
    uVar4 = 0xc;
  }
  local_34 = 1.0 / (float)*(int *)(DAT_146532078 + 100);
  local_38 = 1.0 / (float)*(int *)(DAT_146532078 + 0x60);
  if (uVar4 != 0) {
    uVar1 = *(ushort *)(param_1 + 0x2a);
    uVar2 = *(ushort *)(param_1 + 0x28);
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar7 = (longlong)_Dst + (ulonglong)uVar4;
    if (*(ulonglong *)(param_2 + 0x38) < uVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar4 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar7 = (longlong)_Dst + (ulonglong)uVar4;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar7;
    _guard_xfg_dispatch_icall_nop(_Dst,&local_38,(ulonglong)uVar4);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f594b0;
    puVar9[2] = uVar3;
    puVar9[3] = _Dst;
    *(uint *)(puVar9 + 4) = (uint)uVar2;
    *(uint *)((longlong)puVar9 + 0x24) = (uint)uVar1;
    *(uint *)(puVar9 + 5) = uVar4;
  }
  return;
}



// FUNCTION 141b22420 FUN_141b22420 body=381 status=ok
// SIG undefined FUN_141b22420(void)

void FUN_141b22420(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  void *_Dst;
  ulonglong _Size;
  
  FUN_141b228d0(param_1,param_2,*param_3,param_4 + 8);
  FUN_141b228d0(param_1 + 8,param_2,*param_3,param_4 + 0x58);
  FUN_141b228d0(param_1 + 0x10,param_2,*param_3,param_4 + 0x30);
  FUN_141b228d0(param_1 + 0x18,param_2,*param_3,param_4 + 0x80);
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>
            (param_2,*param_3,param_1 + 0x20,param_4,0);
  uVar3 = *param_3;
  uVar4 = (uint)*(ushort *)(param_1 + 0x2a);
  if (3 < *(ushort *)(param_1 + 0x2a)) {
    uVar4 = 4;
  }
  _Size = (ulonglong)uVar4;
  if (uVar4 != 0) {
    uVar1 = *(ushort *)(param_1 + 0x26);
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar2 = *(ushort *)(param_1 + 0x28);
    uVar5 = (longlong)_Dst + _Size;
    if (*(ulonglong *)(param_2 + 0x38) < uVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar4 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar5 = (longlong)_Dst + _Size;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar5;
    _guard_xfg_dispatch_icall_nop(_Dst,&DAT_1464c1a30,_Size);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *(uint *)(puVar7 + 4) = (uint)uVar1;
    *(uint *)((longlong)puVar7 + 0x24) = (uint)uVar2;
    *puVar7 = &PTR_LAB_143f594b0;
    puVar7[2] = uVar3;
    puVar7[3] = _Dst;
    *(uint *)(puVar7 + 5) = uVar4;
  }
  return;
}



// FUNCTION 141b225a0 FUN_141b225a0 body=805 status=ok
// SIG undefined FUN_141b225a0(void)

void FUN_141b225a0(ushort *param_1,longlong param_2,undefined8 *param_3,longlong param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  void *_Dst;
  float local_38;
  float local_34;
  float local_30;
  
  uVar3 = *param_3;
  uVar6 = *(undefined8 *)(param_4 + 0x18);
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_144165218;
    puVar9[2] = uVar3;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar6;
  }
  FUN_141b22980(param_1 + 4,param_2,*param_3,param_4 + 0x58);
  FUN_141b22980(param_1 + 8,param_2,*param_3,param_4 + 0x80);
  if ((param_1[0xd] != 0) || (param_1[0xf] != 0)) {
    FUN_141b22980(param_1 + 0xc,param_2,*param_3,param_4 + 0xa8);
  }
  lVar5 = DAT_146532078;
  uVar6 = FUN_141a156e0();
  uVar3 = *param_3;
  if (param_1[0x11] != 0) {
    uVar1 = param_1[0x10];
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c50;
    puVar9[2] = uVar3;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = lVar5;
  }
  if (param_1[0x13] != 0) {
    uVar1 = param_1[0x12];
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c60;
    puVar9[2] = uVar3;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar6;
  }
  uVar3 = *param_3;
  local_30 = 1.0 / (float)*(int *)(DAT_146532078 + 0x68);
  uVar4 = (uint)param_1[0x16];
  if (0xb < param_1[0x16]) {
    uVar4 = 0xc;
  }
  local_34 = 1.0 / (float)*(int *)(DAT_146532078 + 100);
  local_38 = 1.0 / (float)*(int *)(DAT_146532078 + 0x60);
  if (uVar4 != 0) {
    uVar1 = param_1[0x15];
    uVar2 = param_1[0x14];
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar7 = (longlong)_Dst + (ulonglong)uVar4;
    if (*(ulonglong *)(param_2 + 0x38) < uVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar4 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar7 = (longlong)_Dst + (ulonglong)uVar4;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar7;
    _guard_xfg_dispatch_icall_nop(_Dst,&local_38,(ulonglong)uVar4);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f4d340;
    puVar9[2] = uVar3;
    puVar9[3] = _Dst;
    *(uint *)(puVar9 + 4) = (uint)uVar2;
    *(uint *)((longlong)puVar9 + 0x24) = (uint)uVar1;
    *(uint *)(puVar9 + 5) = uVar4;
  }
  return;
}



// FUNCTION 141b228d0 FUN_141b228d0 body=175 status=ok
// SIG undefined FUN_141b228d0(void)

void FUN_141b228d0(ushort *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  uVar2 = *(undefined8 *)(param_4 + 0x10);
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar4 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar3;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar4;
    *(undefined8 **)(param_2 + 8) = puVar4 + 1;
    puVar4[1] = 0;
    *(uint *)(puVar4 + 3) = (uint)uVar1;
    *puVar4 = &PTR_LAB_144d8e600;
    puVar4[2] = param_3;
    puVar4[4] = uVar2;
  }
  return;
}



// FUNCTION 141b22980 FUN_141b22980 body=175 status=ok
// SIG undefined FUN_141b22980(void)

void FUN_141b22980(ushort *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  uVar2 = *(undefined8 *)(param_4 + 0x10);
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar4 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar3;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar4;
    *(undefined8 **)(param_2 + 8) = puVar4 + 1;
    puVar4[1] = 0;
    *(uint *)(puVar4 + 3) = (uint)uVar1;
    *puVar4 = &PTR_LAB_144165218;
    puVar4[2] = param_3;
    puVar4[4] = uVar2;
  }
  return;
}



// FUNCTION 141b22a30 FUN_141b22a30 body=1812 status=ok
// SIG undefined FUN_141b22a30(void)

void FUN_141b22a30(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong param_4,
                  char param_5,undefined8 param_6,longlong *param_7)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  int local_res18 [4];
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148 [2];
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  longlong local_108;
  undefined1 local_100;
  longlong local_f8;
  undefined1 local_f0;
  longlong local_e8;
  undefined1 local_e0;
  longlong local_d8;
  undefined1 local_d0;
  longlong local_c8;
  undefined1 local_c0;
  longlong local_b8;
  undefined1 local_b0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined *local_98;
  undefined4 local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined *local_48;
  undefined4 local_40;
  
  plVar10 = param_7;
  plVar12 = (longlong *)0x0;
  local_res18[0] = 0;
  if (0 < *(int *)(param_3 + 0x1900)) {
    lVar1 = *(longlong *)(param_4 + 0x3090);
    local_a8 = &DAT_146a17860;
    local_a0 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,&param_7,&local_a8);
    plVar11 = plVar12;
    if ((int)param_7 != -1) {
      plVar11 = (longlong *)((longlong)(int)param_7 * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    plVar13 = plVar11 + 2;
    if (plVar11 == (longlong *)0x0) {
      plVar13 = plVar12;
    }
    lVar1 = *plVar13;
    *param_2 = DAT_1464c1bf0;
    if (lVar1 == 0) {
      local_140 = 0;
      plVar13 = (longlong *)0x1;
      plVar11 = plVar12;
    }
    else {
      lVar2 = *(longlong *)(lVar1 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      plVar11 = *(longlong **)(lVar2 + 0x38);
      plVar13 = plVar12;
    }
    param_2[1] = plVar11;
    if (plVar13 != (longlong *)0x0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_140);
    }
    bVar9 = false;
    bVar8 = false;
    bVar7 = false;
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    lVar3 = *(longlong *)(param_4 + 0x3090);
    lVar2 = lVar3 + 0x38;
    if (param_5 == '\0') {
      if (*(longlong *)(param_4 + 0x2850) == 0) {
        if (*(char *)(param_4 + 0x2864) == '\0') {
          local_40 = 0;
          local_48 = &DAT_146a1b3d0;
          TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
          ::FindId(lVar2,local_148,&local_48);
          plVar11 = plVar12;
          if (local_148[0] != -1) {
            plVar11 = (longlong *)((longlong)local_148[0] * 0x20 + *(longlong *)(lVar3 + 0x38));
          }
          plVar13 = plVar11 + 2;
          if (plVar11 == (longlong *)0x0) {
            plVar13 = plVar12;
          }
          lVar2 = *plVar13;
          if (lVar2 == 0) {
            bVar9 = true;
            local_110 = 0;
          }
          else {
            lVar3 = *(longlong *)(lVar2 + 0x48);
            if (*(char *)(lVar3 + 0x28) == '\0') {
              FUN_1419f3850(lVar3);
            }
            plVar12 = *(longlong **)(lVar3 + 0x40);
          }
          param_2[4] = plVar12;
          if (bVar9) {
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_110);
          }
          FUN_141ed6ac0(param_1,param_2,2,1);
          FUN_141b44c30(lVar1,param_1,param_4);
          local_b0 = 0;
          if ((char)plVar10[1] != '\0') {
            local_b8 = *plVar10;
            if (local_b8 != 0) {
              LOCK();
              *(int *)(local_b8 + 8) = *(int *)(local_b8 + 8) + 1;
              UNLOCK();
            }
            local_b0 = 1;
          }
          FUN_141b41930(lVar2,param_1,param_4,param_6,&local_b8);
        }
        else {
          local_50 = 0;
          local_58 = &DAT_146a1b670;
          TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
          ::FindId(lVar2,&local_14c,&local_58);
          plVar11 = plVar12;
          if (local_14c != -1) {
            plVar11 = (longlong *)((longlong)local_14c * 0x20 + *(longlong *)(lVar3 + 0x38));
          }
          plVar13 = plVar11 + 2;
          if (plVar11 == (longlong *)0x0) {
            plVar13 = plVar12;
          }
          lVar2 = *plVar13;
          if (lVar2 == 0) {
            local_118 = 0;
            bVar8 = true;
          }
          else {
            lVar3 = *(longlong *)(lVar2 + 0x48);
            if (*(char *)(lVar3 + 0x28) == '\0') {
              FUN_1419f3850(lVar3);
            }
            plVar12 = *(longlong **)(lVar3 + 0x40);
          }
          param_2[4] = plVar12;
          if (bVar8) {
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
          }
          FUN_141ed6ac0(param_1,param_2,2,1);
          FUN_141b44c30(lVar1,param_1,param_4);
          local_c0 = 0;
          if ((char)plVar10[1] != '\0') {
            local_c8 = *plVar10;
            if (local_c8 != 0) {
              LOCK();
              *(int *)(local_c8 + 8) = *(int *)(local_c8 + 8) + 1;
              UNLOCK();
            }
            local_c0 = 1;
          }
          FUN_141b41930(lVar2,param_1,param_4,param_6,&local_c8);
        }
      }
      else {
        local_60 = 0;
        local_68 = &DAT_146a1b520;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(lVar2,&local_150,&local_68);
        plVar11 = plVar12;
        if (local_150 != -1) {
          plVar11 = (longlong *)((longlong)local_150 * 0x20 + *(longlong *)(lVar3 + 0x38));
        }
        plVar13 = plVar11 + 2;
        if (plVar11 == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        lVar2 = *plVar13;
        if (lVar2 == 0) {
          local_120 = 0;
          bVar7 = true;
        }
        else {
          lVar3 = *(longlong *)(lVar2 + 0x48);
          if (*(char *)(lVar3 + 0x28) == '\0') {
            FUN_1419f3850(lVar3);
          }
          plVar12 = *(longlong **)(lVar3 + 0x40);
        }
        param_2[4] = plVar12;
        if (bVar7) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_120);
        }
        FUN_141ed6ac0(param_1,param_2,2,1);
        FUN_141b44c30(lVar1,param_1,param_4);
        local_d0 = 0;
        if ((char)plVar10[1] != '\0') {
          local_d8 = *plVar10;
          if (local_d8 != 0) {
            LOCK();
            *(int *)(local_d8 + 8) = *(int *)(local_d8 + 8) + 1;
            UNLOCK();
          }
          local_d0 = 1;
        }
        FUN_141b41930(lVar2,param_1,param_4,param_6,&local_d8);
      }
    }
    else if (*(longlong *)(param_4 + 0x2850) == 0) {
      if (*(char *)(param_4 + 0x2864) == '\0') {
        local_70 = 0;
        local_78 = &DAT_146a1b7c0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(lVar2,&local_154,&local_78);
        plVar11 = plVar12;
        if (local_154 != -1) {
          plVar11 = (longlong *)((longlong)local_154 * 0x20 + *(longlong *)(lVar3 + 0x38));
        }
        plVar13 = plVar11 + 2;
        if (plVar11 == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        lVar2 = *plVar13;
        if (lVar2 == 0) {
          local_128 = 0;
          bVar6 = true;
        }
        else {
          lVar3 = *(longlong *)(lVar2 + 0x48);
          if (*(char *)(lVar3 + 0x28) == '\0') {
            FUN_1419f3850(lVar3);
          }
          plVar12 = *(longlong **)(lVar3 + 0x40);
        }
        param_2[4] = plVar12;
        if (bVar6) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
        }
        FUN_141ed6ac0(param_1,param_2,2,1);
        FUN_141b44c30(lVar1,param_1,param_4);
        local_e0 = 0;
        if ((char)plVar10[1] != '\0') {
          local_e8 = *plVar10;
          if (local_e8 != 0) {
            LOCK();
            *(int *)(local_e8 + 8) = *(int *)(local_e8 + 8) + 1;
            UNLOCK();
          }
          local_e0 = 1;
        }
        FUN_141b41930(lVar2,param_1,param_4,param_6,&local_e8);
      }
      else {
        local_80 = 0;
        local_88 = &DAT_146a1ba60;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(lVar2,&local_158,&local_88);
        plVar11 = plVar12;
        if (local_158 != -1) {
          plVar11 = (longlong *)((longlong)local_158 * 0x20 + *(longlong *)(lVar3 + 0x38));
        }
        plVar13 = plVar11 + 2;
        if (plVar11 == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        lVar2 = *plVar13;
        if (lVar2 == 0) {
          local_130 = 0;
          bVar5 = true;
        }
        else {
          lVar3 = *(longlong *)(lVar2 + 0x48);
          if (*(char *)(lVar3 + 0x28) == '\0') {
            FUN_1419f3850(lVar3);
          }
          plVar12 = *(longlong **)(lVar3 + 0x40);
        }
        param_2[4] = plVar12;
        if (bVar5) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_130);
        }
        FUN_141ed6ac0(param_1,param_2,2,1);
        FUN_141b44c30(lVar1,param_1,param_4);
        local_f0 = 0;
        if ((char)plVar10[1] != '\0') {
          local_f8 = *plVar10;
          if (local_f8 != 0) {
            LOCK();
            *(int *)(local_f8 + 8) = *(int *)(local_f8 + 8) + 1;
            UNLOCK();
          }
          local_f0 = 1;
        }
        FUN_141b41930(lVar2,param_1,param_4,param_6,&local_f8);
      }
    }
    else {
      local_90 = 0;
      local_98 = &DAT_146a1b910;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(lVar2,local_res18,&local_98);
      plVar11 = plVar12;
      if (local_res18[0] != -1) {
        plVar11 = (longlong *)((longlong)local_res18[0] * 0x20 + *(longlong *)(lVar3 + 0x38));
      }
      plVar13 = plVar11 + 2;
      if (plVar11 == (longlong *)0x0) {
        plVar13 = plVar12;
      }
      lVar2 = *plVar13;
      if (lVar2 == 0) {
        local_138 = 0;
        bVar4 = true;
      }
      else {
        lVar3 = *(longlong *)(lVar2 + 0x48);
        if (*(char *)(lVar3 + 0x28) == '\0') {
          FUN_1419f3850(lVar3);
        }
        plVar12 = *(longlong **)(lVar3 + 0x40);
      }
      param_2[4] = plVar12;
      if (bVar4) {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_138);
      }
      FUN_141ed6ac0(param_1,param_2,2,1);
      FUN_141b44c30(lVar1,param_1,param_4);
      local_100 = 0;
      if ((char)plVar10[1] != '\0') {
        local_108 = *plVar10;
        if (local_108 != 0) {
          LOCK();
          *(int *)(local_108 + 8) = *(int *)(local_108 + 8) + 1;
          UNLOCK();
        }
        local_100 = 1;
      }
      FUN_141b41930(lVar2,param_1,param_4,param_6,&local_108);
    }
  }
  if ((char)plVar10[1] != '\0') {
    *(undefined1 *)(plVar10 + 1) = 0;
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(plVar10);
  }
  return;
}



// FUNCTION 141b23150 FUN_141b23150 body=1812 status=ok
// SIG undefined FUN_141b23150(void)

void FUN_141b23150(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong param_4,
                  char param_5,undefined8 param_6,longlong *param_7)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  int local_res18 [4];
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148 [2];
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  longlong local_108;
  undefined1 local_100;
  longlong local_f8;
  undefined1 local_f0;
  longlong local_e8;
  undefined1 local_e0;
  longlong local_d8;
  undefined1 local_d0;
  longlong local_c8;
  undefined1 local_c0;
  longlong local_b8;
  undefined1 local_b0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined *local_98;
  undefined4 local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined *local_48;
  undefined4 local_40;
  
  plVar10 = param_7;
  plVar12 = (longlong *)0x0;
  local_res18[0] = 0;
  if (0 < *(int *)(param_3 + 0x1900)) {
    lVar1 = *(longlong *)(param_4 + 0x3090);
    local_a8 = &DAT_146a17860;
    local_a0 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,&param_7,&local_a8);
    plVar11 = plVar12;
    if ((int)param_7 != -1) {
      plVar11 = (longlong *)((longlong)(int)param_7 * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    plVar13 = plVar11 + 2;
    if (plVar11 == (longlong *)0x0) {
      plVar13 = plVar12;
    }
    lVar1 = *plVar13;
    *param_2 = DAT_1464c1bf0;
    if (lVar1 == 0) {
      local_140 = 0;
      plVar13 = (longlong *)0x1;
      plVar11 = plVar12;
    }
    else {
      lVar2 = *(longlong *)(lVar1 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      plVar11 = *(longlong **)(lVar2 + 0x38);
      plVar13 = plVar12;
    }
    param_2[1] = plVar11;
    if (plVar13 != (longlong *)0x0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_140);
    }
    bVar9 = false;
    bVar8 = false;
    bVar7 = false;
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    lVar3 = *(longlong *)(param_4 + 0x3090);
    lVar2 = lVar3 + 0x38;
    if (param_5 == '\0') {
      if (*(longlong *)(param_4 + 0x2850) == 0) {
        if (*(char *)(param_4 + 0x2864) == '\0') {
          local_40 = 0;
          local_48 = &DAT_146a1bbb0;
          TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
          ::FindId(lVar2,local_148,&local_48);
          plVar11 = plVar12;
          if (local_148[0] != -1) {
            plVar11 = (longlong *)((longlong)local_148[0] * 0x20 + *(longlong *)(lVar3 + 0x38));
          }
          plVar13 = plVar11 + 2;
          if (plVar11 == (longlong *)0x0) {
            plVar13 = plVar12;
          }
          lVar2 = *plVar13;
          if (lVar2 == 0) {
            bVar9 = true;
            local_110 = 0;
          }
          else {
            lVar3 = *(longlong *)(lVar2 + 0x48);
            if (*(char *)(lVar3 + 0x28) == '\0') {
              FUN_1419f3850(lVar3);
            }
            plVar12 = *(longlong **)(lVar3 + 0x40);
          }
          param_2[4] = plVar12;
          if (bVar9) {
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_110);
          }
          FUN_141ed6ac0(param_1,param_2,2,1);
          FUN_141b44c30(lVar1,param_1,param_4);
          local_b0 = 0;
          if ((char)plVar10[1] != '\0') {
            local_b8 = *plVar10;
            if (local_b8 != 0) {
              LOCK();
              *(int *)(local_b8 + 8) = *(int *)(local_b8 + 8) + 1;
              UNLOCK();
            }
            local_b0 = 1;
          }
          FUN_141b41930(lVar2,param_1,param_4,param_6,&local_b8);
        }
        else {
          local_50 = 0;
          local_58 = &DAT_146a1be50;
          TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
          ::FindId(lVar2,&local_14c,&local_58);
          plVar11 = plVar12;
          if (local_14c != -1) {
            plVar11 = (longlong *)((longlong)local_14c * 0x20 + *(longlong *)(lVar3 + 0x38));
          }
          plVar13 = plVar11 + 2;
          if (plVar11 == (longlong *)0x0) {
            plVar13 = plVar12;
          }
          lVar2 = *plVar13;
          if (lVar2 == 0) {
            local_118 = 0;
            bVar8 = true;
          }
          else {
            lVar3 = *(longlong *)(lVar2 + 0x48);
            if (*(char *)(lVar3 + 0x28) == '\0') {
              FUN_1419f3850(lVar3);
            }
            plVar12 = *(longlong **)(lVar3 + 0x40);
          }
          param_2[4] = plVar12;
          if (bVar8) {
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
          }
          FUN_141ed6ac0(param_1,param_2,2,1);
          FUN_141b44c30(lVar1,param_1,param_4);
          local_c0 = 0;
          if ((char)plVar10[1] != '\0') {
            local_c8 = *plVar10;
            if (local_c8 != 0) {
              LOCK();
              *(int *)(local_c8 + 8) = *(int *)(local_c8 + 8) + 1;
              UNLOCK();
            }
            local_c0 = 1;
          }
          FUN_141b41930(lVar2,param_1,param_4,param_6,&local_c8);
        }
      }
      else {
        local_60 = 0;
        local_68 = &DAT_146a1bd00;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(lVar2,&local_150,&local_68);
        plVar11 = plVar12;
        if (local_150 != -1) {
          plVar11 = (longlong *)((longlong)local_150 * 0x20 + *(longlong *)(lVar3 + 0x38));
        }
        plVar13 = plVar11 + 2;
        if (plVar11 == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        lVar2 = *plVar13;
        if (lVar2 == 0) {
          local_120 = 0;
          bVar7 = true;
        }
        else {
          lVar3 = *(longlong *)(lVar2 + 0x48);
          if (*(char *)(lVar3 + 0x28) == '\0') {
            FUN_1419f3850(lVar3);
          }
          plVar12 = *(longlong **)(lVar3 + 0x40);
        }
        param_2[4] = plVar12;
        if (bVar7) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_120);
        }
        FUN_141ed6ac0(param_1,param_2,2,1);
        FUN_141b44c30(lVar1,param_1,param_4);
        local_d0 = 0;
        if ((char)plVar10[1] != '\0') {
          local_d8 = *plVar10;
          if (local_d8 != 0) {
            LOCK();
            *(int *)(local_d8 + 8) = *(int *)(local_d8 + 8) + 1;
            UNLOCK();
          }
          local_d0 = 1;
        }
        FUN_141b41930(lVar2,param_1,param_4,param_6,&local_d8);
      }
    }
    else if (*(longlong *)(param_4 + 0x2850) == 0) {
      if (*(char *)(param_4 + 0x2864) == '\0') {
        local_70 = 0;
        local_78 = &DAT_146a1bfa0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(lVar2,&local_154,&local_78);
        plVar11 = plVar12;
        if (local_154 != -1) {
          plVar11 = (longlong *)((longlong)local_154 * 0x20 + *(longlong *)(lVar3 + 0x38));
        }
        plVar13 = plVar11 + 2;
        if (plVar11 == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        lVar2 = *plVar13;
        if (lVar2 == 0) {
          local_128 = 0;
          bVar6 = true;
        }
        else {
          lVar3 = *(longlong *)(lVar2 + 0x48);
          if (*(char *)(lVar3 + 0x28) == '\0') {
            FUN_1419f3850(lVar3);
          }
          plVar12 = *(longlong **)(lVar3 + 0x40);
        }
        param_2[4] = plVar12;
        if (bVar6) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
        }
        FUN_141ed6ac0(param_1,param_2,2,1);
        FUN_141b44c30(lVar1,param_1,param_4);
        local_e0 = 0;
        if ((char)plVar10[1] != '\0') {
          local_e8 = *plVar10;
          if (local_e8 != 0) {
            LOCK();
            *(int *)(local_e8 + 8) = *(int *)(local_e8 + 8) + 1;
            UNLOCK();
          }
          local_e0 = 1;
        }
        FUN_141b41930(lVar2,param_1,param_4,param_6,&local_e8);
      }
      else {
        local_80 = 0;
        local_88 = &DAT_146a1c240;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(lVar2,&local_158,&local_88);
        plVar11 = plVar12;
        if (local_158 != -1) {
          plVar11 = (longlong *)((longlong)local_158 * 0x20 + *(longlong *)(lVar3 + 0x38));
        }
        plVar13 = plVar11 + 2;
        if (plVar11 == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        lVar2 = *plVar13;
        if (lVar2 == 0) {
          local_130 = 0;
          bVar5 = true;
        }
        else {
          lVar3 = *(longlong *)(lVar2 + 0x48);
          if (*(char *)(lVar3 + 0x28) == '\0') {
            FUN_1419f3850(lVar3);
          }
          plVar12 = *(longlong **)(lVar3 + 0x40);
        }
        param_2[4] = plVar12;
        if (bVar5) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_130);
        }
        FUN_141ed6ac0(param_1,param_2,2,1);
        FUN_141b44c30(lVar1,param_1,param_4);
        local_f0 = 0;
        if ((char)plVar10[1] != '\0') {
          local_f8 = *plVar10;
          if (local_f8 != 0) {
            LOCK();
            *(int *)(local_f8 + 8) = *(int *)(local_f8 + 8) + 1;
            UNLOCK();
          }
          local_f0 = 1;
        }
        FUN_141b41930(lVar2,param_1,param_4,param_6,&local_f8);
      }
    }
    else {
      local_90 = 0;
      local_98 = &DAT_146a1c0f0;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(lVar2,local_res18,&local_98);
      plVar11 = plVar12;
      if (local_res18[0] != -1) {
        plVar11 = (longlong *)((longlong)local_res18[0] * 0x20 + *(longlong *)(lVar3 + 0x38));
      }
      plVar13 = plVar11 + 2;
      if (plVar11 == (longlong *)0x0) {
        plVar13 = plVar12;
      }
      lVar2 = *plVar13;
      if (lVar2 == 0) {
        local_138 = 0;
        bVar4 = true;
      }
      else {
        lVar3 = *(longlong *)(lVar2 + 0x48);
        if (*(char *)(lVar3 + 0x28) == '\0') {
          FUN_1419f3850(lVar3);
        }
        plVar12 = *(longlong **)(lVar3 + 0x40);
      }
      param_2[4] = plVar12;
      if (bVar4) {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_138);
      }
      FUN_141ed6ac0(param_1,param_2,2,1);
      FUN_141b44c30(lVar1,param_1,param_4);
      local_100 = 0;
      if ((char)plVar10[1] != '\0') {
        local_108 = *plVar10;
        if (local_108 != 0) {
          LOCK();
          *(int *)(local_108 + 8) = *(int *)(local_108 + 8) + 1;
          UNLOCK();
        }
        local_100 = 1;
      }
      FUN_141b41930(lVar2,param_1,param_4,param_6,&local_108);
    }
  }
  if ((char)plVar10[1] != '\0') {
    *(undefined1 *)(plVar10 + 1) = 0;
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(plVar10);
  }
  return;
}



// FUNCTION 141b23870 FUN_141b23870 body=1601 status=ok
// SIG undefined FUN_141b23870(void)

void FUN_141b23870(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,int *param_7,longlong param_8)

{
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
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
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  undefined8 local_res8;
  undefined8 local_res18;
  undefined8 uVar27;
  ulonglong uVar28;
  float local_1a8;
  float local_1a4;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 uStack_14c;
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
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  float fStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [36];
  float local_c4;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  local_res18 = param_3;
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  local_res8 = uVar3;
  FUN_141aa9420(param_1,param_2,uVar3,*(undefined8 *)(param_3 + 0x20));
  puVar23 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar27 = *(undefined8 *)(param_5 + 0x10);
  puVar21 = puVar23 + 1;
  if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    puVar23 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar23 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar21;
  *puVar23 = uVar27;
  puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar21 = puVar22 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar22 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar21;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar22;
  *(undefined8 **)(param_2 + 8) = puVar22 + 1;
  puVar22[1] = 0;
  *puVar22 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar22 + 2) = 1;
  puVar22[3] = puVar23;
  *(undefined4 *)(puVar22 + 4) = 2;
  *(undefined4 *)((longlong)puVar22 + 0x24) = 3;
  puVar22[5] = 0;
  uVar27 = *(undefined8 *)(param_5 + 0x10);
  FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0xc0,param_2,uVar3,*(undefined8 *)(param_5 + 8),uVar27);
  uVar26 = (undefined4)((ulonglong)uVar27 >> 0x20);
  FUN_141b21bb0(param_1 + 0xf2,param_2,&local_res8,&DAT_146a17160);
  uVar28 = CONCAT44(uVar26,0xf);
  FUN_141aa6060(param_1 + 0x120,param_2,&local_res8,*(undefined4 *)(local_res18 + 0x1a38),uVar28);
  uVar28 = uVar28 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2,uVar3,param_1 + 200,&param_6,uVar28);
  plVar4 = *(longlong **)(*(longlong *)(param_4 + 0x5c8) + 0x30);
  local_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  fStack_fc = 1.0;
  local_f8 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0x3f800000;
  (**(code **)(*plVar4 + 0x68))(plVar4,0);
  uVar28 = uVar28 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,uVar3,param_1 + 0xce,local_e8,uVar28);
  uVar28 = uVar28 & 0xffffffff00000000;
  FUN_141a120e0(param_2,uVar3,param_1 + 0xd4,&local_108,uVar28);
  if (local_c4 == 0.0) {
    fVar25 = 20.0;
  }
  else if (0.001 <= local_c4) {
    fVar25 = 1.0 / (fStack_fc * 4.0);
    if (local_c4 <= fVar25) {
      fVar25 = local_c4;
    }
  }
  else {
    fVar25 = 0.001;
  }
  uVar28 = uVar28 & 0xffffffff00000000;
  local_res18._0_4_ = fVar25;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 0xda,&local_res18,uVar28);
  local_res18 = CONCAT44(local_res18._4_4_,*(undefined4 *)((longlong)plVar4 + 0x184));
  uVar28 = uVar28 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 0xe0,&local_res18,uVar28);
  fVar24 = (float)(**(code **)(*plVar4 + 0x40))(plVar4);
  fVar25 = 0.001;
  if ((0.001 <= fVar24) && (fVar25 = fVar24, 5.0 <= fVar24)) {
    fVar25 = 5.0;
  }
  uVar26 = (**(code **)(*plVar4 + 0x48))(plVar4);
  local_1a8 = _guard_xfg_dispatch_icall_nop(fVar25 * 0.017453292);
  local_1a4 = _guard_xfg_dispatch_icall_nop(fVar25 * 0.017453292 + 1.5707964);
  uVar28 = uVar28 & 0xffffffff00000000;
  local_1a0 = uVar26;
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,uVar3,param_1 + 0xe6,&local_1a8,uVar28);
  uVar28 = uVar28 & 0xffffffff00000000;
  local_res18 = CONCAT44(param_7[3] - param_7[1],param_7[2] - *param_7);
  local_198 = *(undefined8 *)param_7;
  local_190 = local_res18;
  FUN_141a120e0(param_2,uVar3,param_1 + 0xec,&local_198,uVar28);
  if (param_8 != 0) {
    FUN_141b21e70(param_1 + 0x130,param_2,&local_res8);
  }
  fVar5 = *(float *)(param_4 + 0xa0);
  fVar6 = *(float *)(param_4 + 0xa4);
  fVar7 = *(float *)(param_4 + 0xa8);
  fVar8 = *(float *)(param_4 + 0xac);
  fVar9 = *(float *)(param_4 + 0x90);
  fVar10 = *(float *)(param_4 + 0x94);
  fVar11 = *(float *)(param_4 + 0x98);
  fVar12 = *(float *)(param_4 + 0x9c);
  fVar13 = *(float *)(param_4 + 0xb0);
  fVar14 = *(float *)(param_4 + 0xb4);
  fVar15 = *(float *)(param_4 + 0xb8);
  fVar16 = *(float *)(param_4 + 0xbc);
  fVar17 = *(float *)(param_4 + 0xc0);
  fVar18 = *(float *)(param_4 + 0xc4);
  fVar19 = *(float *)(param_4 + 200);
  fVar20 = *(float *)(param_4 + 0xcc);
  fVar25 = *(float *)(param_4 + 0x44);
  fVar24 = *(float *)(param_4 + 0x48);
  fVar1 = *(float *)(param_4 + 0x4c);
  uStack_14c = 0x3f800000;
  uVar28 = uVar28 & 0xffffffff00000000;
  local_148 = fVar9 * 1.0 + fVar5 * 0.0 + fVar13 * 0.0 + fVar17 * 0.0;
  fStack_144 = fVar10 * 1.0 + fVar6 * 0.0 + fVar14 * 0.0 + fVar18 * 0.0;
  fStack_140 = fVar11 * 1.0 + fVar7 * 0.0 + fVar15 * 0.0 + fVar19 * 0.0;
  fStack_13c = fVar12 * 1.0 + fVar8 * 0.0 + fVar16 * 0.0 + fVar20 * 0.0;
  local_138 = fVar9 * 0.0 + fVar5 * 1.0 + fVar13 * 0.0 + fVar17 * 0.0;
  fStack_134 = fVar10 * 0.0 + fVar6 * 1.0 + fVar14 * 0.0 + fVar18 * 0.0;
  fStack_130 = fVar11 * 0.0 + fVar7 * 1.0 + fVar15 * 0.0 + fVar19 * 0.0;
  fStack_12c = fVar12 * 0.0 + fVar8 * 1.0 + fVar16 * 0.0 + fVar20 * 0.0;
  local_128 = fVar9 * 0.0 + fVar5 * 0.0 + fVar13 * 1.0 + fVar17 * 0.0;
  fStack_124 = fVar10 * 0.0 + fVar6 * 0.0 + fVar14 * 1.0 + fVar18 * 0.0;
  fStack_120 = fVar11 * 0.0 + fVar7 * 0.0 + fVar15 * 1.0 + fVar19 * 0.0;
  fStack_11c = fVar12 * 0.0 + fVar8 * 0.0 + fVar16 * 1.0 + fVar20 * 0.0;
  local_118 = fVar25 * fVar9 + fVar24 * fVar5 + fVar1 * fVar13 + fVar17 * 1.0;
  fStack_114 = fVar25 * fVar10 + fVar24 * fVar6 + fVar1 * fVar14 + fVar18 * 1.0;
  fStack_110 = fVar25 * fVar11 + fVar24 * fVar7 + fVar1 * fVar15 + fVar19 * 1.0;
  fStack_10c = fVar25 * fVar12 + fVar24 * fVar8 + fVar1 * fVar16 + fVar20 * 1.0;
  SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
            (param_2,uVar3,param_1 + 0x15c,&local_148,uVar28);
  uVar28 = uVar28 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 0x162,&DAT_1464c1a08,uVar28);
  uVar28 = uVar28 & 0xffffffff00000000;
  if ((*(byte *)(param_4 + 0x560) & 0x10) == 0) {
    local_res18 = (ulonglong)local_res18._4_4_ << 0x20;
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,uVar3,param_1 + 0x168,&local_res18,uVar28);
    local_res18 = 0x4130000000000000;
    uVar28 = uVar28 & 0xffffffff00000000;
    SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
              (param_2,uVar3,param_1 + 0x16e,&local_res18,uVar28);
  }
  else {
    local_res18 = CONCAT44(local_res18._4_4_,
                           *(float *)(param_4 + 0x3c0) - *(float *)(param_4 + 0x3c8));
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,uVar3,param_1 + 0x168,&local_res18,uVar28);
    uVar28 = uVar28 & 0xffffffff00000000;
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,uVar3,param_1 + 0x16e,param_4 + 0x3c4,uVar28);
  }
  local_res18 = CONCAT44(local_res18._4_4_,2 - (uint)(DAT_146a15384 != 0));
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 0x174,&local_res18,uVar28 & 0xffffffff00000000);
  return;
}



// FUNCTION 141b23ec0 SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList> body=308 status=ok
// SIG undefined SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>(void)

void SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
               (longlong param_1,undefined8 param_2,ushort *param_3,void *param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *_Dst;
  uint uVar6;
  
  uVar6 = (uint)param_3[2] + param_5 * -0x10;
  if (0xb < (int)uVar6) {
    uVar6 = 0xc;
  }
  if (0 < (int)uVar6) {
    _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = (longlong)(int)uVar6 + (longlong)_Dst;
    if (*(ulonglong *)(param_1 + 0x38) < uVar3) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,uVar6 + 0x10);
      _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar3 = (longlong)(int)uVar6 + (longlong)_Dst;
    }
    *(ulonglong *)(param_1 + 0x30) = uVar3;
    _guard_xfg_dispatch_icall_nop(_Dst,param_4,(ulonglong)uVar6);
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar4;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar5;
    *(undefined8 **)(param_1 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_143f4d340;
    puVar5[3] = _Dst;
    *(uint *)(puVar5 + 4) = (uint)uVar1;
    *(uint *)((longlong)puVar5 + 0x24) = (uint)uVar2 + param_5 * 0x10;
    puVar5[2] = param_2;
    *(uint *)(puVar5 + 5) = uVar6;
  }
  return;
}



// FUNCTION 141b24000 FUN_141b24000 body=221 status=ok
// SIG undefined FUN_141b24000(void)

void FUN_141b24000(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_res18 [2];
  
  if (*(char *)(param_3 + 6) != '\0') {
    (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,local_res18,param_4,&DAT_146a11068,0);
    uVar1 = *(ushort *)(param_3 + 4);
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar2 = puVar3 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar2) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar2 = puVar3 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar2;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar3;
    *(undefined8 **)(param_1 + 8) = puVar3 + 1;
    puVar3[1] = 0;
    *puVar3 = &PTR_LAB_144dcb3c8;
    puVar3[2] = param_2;
    *(uint *)(puVar3 + 3) = (uint)uVar1;
    puVar3[4] = local_res18[0];
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res18);
  }
  return;
}



// FUNCTION 141b240e0 FUN_141b240e0 body=221 status=ok
// SIG undefined FUN_141b240e0(void)

void FUN_141b240e0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_res18 [2];
  
  if (*(char *)(param_3 + 6) != '\0') {
    (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,local_res18,param_4,&DAT_146a177f8,0);
    uVar1 = *(ushort *)(param_3 + 4);
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar2 = puVar3 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar2) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar2 = puVar3 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar2;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar3;
    *(undefined8 **)(param_1 + 8) = puVar3 + 1;
    puVar3[1] = 0;
    *puVar3 = &PTR_LAB_144d920a0;
    puVar3[2] = param_2;
    *(uint *)(puVar3 + 3) = (uint)uVar1;
    puVar3[4] = local_res18[0];
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res18);
  }
  return;
}



// FUNCTION 141b241c0 FUN_141b241c0 body=4277 status=ok
// SIG undefined FUN_141b241c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_141b241c0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  ulonglong *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined4 *puVar19;
  longlong lVar20;
  int iVar21;
  uint uVar22;
  longlong lVar23;
  bool bVar24;
  float fVar25;
  undefined1 auStack_1438 [32];
  longlong *local_1418;
  undefined8 *local_1410;
  undefined1 local_1408;
  longlong local_1400;
  undefined4 local_13f8;
  undefined4 local_13f0;
  undefined1 local_13e8;
  undefined1 local_13e0;
  byte local_13d8;
  char local_13d7;
  int local_13d4;
  int local_13cc;
  int local_13c8;
  int local_13c4;
  longlong local_13c0;
  longlong local_13b8;
  int local_13b0 [2];
  longlong local_13a8;
  undefined8 local_13a0;
  undefined8 uStack_1398;
  int local_1390;
  int local_138c;
  longlong local_1388;
  longlong local_1380;
  undefined1 local_1378 [8];
  undefined1 local_1370 [8];
  undefined1 local_1368 [8];
  undefined1 local_1360 [8];
  undefined1 local_1358 [8];
  longlong *local_1350;
  longlong local_1348;
  longlong *local_1340;
  undefined8 local_1338;
  undefined8 local_1330;
  undefined8 uStack_1328;
  undefined4 local_1320;
  longlong local_1318 [3];
  undefined4 local_1300;
  undefined1 local_12fc;
  int local_12f8;
  int local_12f4;
  int local_12f0;
  int local_12ec;
  undefined8 local_12e8;
  undefined4 uStack_12e0;
  uint uStack_12dc;
  undefined2 local_12d8;
  undefined6 uStack_12d6;
  undefined8 local_12d0;
  longlong local_12c8;
  longlong local_12c0;
  undefined *local_12b8;
  undefined4 local_12b0;
  undefined1 local_12a8 [8];
  undefined8 local_12a0;
  undefined8 uStack_1298;
  undefined1 local_1290 [24];
  undefined1 local_1278 [24];
  undefined1 local_1260 [24];
  undefined1 local_1248 [24];
  undefined1 local_1230 [24];
  undefined8 local_1218;
  longlong lStack_1210;
  undefined8 local_1208;
  undefined8 local_1200;
  undefined4 local_11f8;
  undefined4 local_11f4;
  undefined2 local_11f0;
  undefined8 local_11e8;
  undefined4 local_11e0;
  undefined4 local_11dc;
  undefined2 local_11d8;
  undefined8 local_11d0;
  undefined4 local_11c8;
  undefined4 local_11c4;
  undefined2 local_11c0;
  undefined8 local_11b8;
  undefined4 local_11b0;
  undefined4 local_11ac;
  undefined2 local_11a8;
  undefined8 local_11a0;
  undefined4 local_1198;
  undefined4 local_1194;
  undefined2 local_1190;
  undefined8 local_1188;
  undefined4 local_1180;
  undefined4 local_117c;
  undefined2 local_1178;
  undefined8 local_1170;
  undefined4 local_1168;
  undefined4 local_1164;
  undefined2 local_1160;
  undefined4 local_1158;
  undefined1 local_1154;
  undefined8 local_1150;
  undefined4 local_1148;
  undefined4 local_1144;
  undefined2 local_1140;
  undefined8 local_1138;
  undefined4 local_1130;
  undefined4 local_112c;
  undefined2 local_1128;
  undefined8 local_1120;
  undefined4 local_1118;
  undefined4 local_1114;
  undefined2 local_1110;
  undefined8 local_1108;
  undefined4 local_1100;
  undefined4 local_10fc;
  undefined2 local_10f8;
  undefined8 local_10f0;
  undefined4 local_10e8;
  undefined4 local_10e4;
  undefined2 local_10e0;
  undefined8 local_10d8;
  undefined4 local_10d0;
  undefined4 local_10cc;
  undefined2 local_10c8;
  undefined8 local_10c0;
  undefined4 local_10b8;
  undefined4 local_10b4;
  undefined2 local_10b0;
  undefined8 local_10a8;
  undefined4 local_10a0;
  undefined4 local_109c;
  undefined2 local_1098;
  undefined1 local_1090;
  undefined8 local_1088;
  undefined8 uStack_1080;
  undefined2 local_1078;
  undefined8 local_1070;
  undefined8 local_1068;
  undefined8 uStack_1060;
  undefined8 local_1058;
  undefined8 uStack_1050;
  undefined8 local_1048;
  undefined8 uStack_1040;
  longlong local_1038;
  undefined4 local_1030 [3];
  undefined8 local_1024 [19];
  undefined1 local_f8c;
  undefined1 local_f88 [3888];
  ulonglong local_58;
  undefined8 uStack_40;
  
  uStack_40 = 0x141b241e2;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1438;
  local_1340 = param_5;
  local_13b8 = param_2;
  local_13a8 = param_1;
  local_1338 = param_3;
  local_13c0 = FSceneRenderTargets::Get();
  cVar6 = FUN_141cdbfa0(local_13c0,param_1);
  lVar23 = local_13c0;
  uVar22 = 0;
  iVar3 = *(int *)(DAT_146a18468 + 4);
  lVar20 = param_1;
  if (iVar3 < 1) {
    if (cVar6 == '\0') goto LAB_141b24694;
LAB_141b24244:
    bVar24 = true;
  }
  else {
    if ((cVar6 != '\0') || (iVar3 - 1U < 2)) goto LAB_141b24244;
    bVar24 = false;
  }
  if (((iVar3 == 3) && (*(int *)(*(longlong *)(param_2 + 0x30) + 0xb0) == 0)) || (bVar24)) {
    puVar1 = (ulonglong *)(param_1 + 0x30);
    do {
      local_13a0 = 0;
      uStack_1398 = 0;
      local_12e8 = *(undefined8 *)(*(longlong *)(lVar23 + 0x308) + 8);
      local_1088 = 0;
      uStack_1080 = 0;
      local_1068 = 0;
      uStack_1060 = 0;
      local_1048 = 0;
      uStack_1040 = 0;
      uStack_12e0 = 0;
      local_12d8 = 0x102;
      local_1200 = 0;
      local_11f8 = 0;
      local_11f4 = 0xffffffff;
      local_11f0 = 0;
      local_11e8 = 0;
      local_11e0 = 0;
      local_11dc = 0xffffffff;
      local_11d8 = 0;
      local_11d0 = 0;
      local_11c8 = 0;
      local_11c4 = 0xffffffff;
      local_11c0 = 0;
      local_11b8 = 0;
      local_11b0 = 0;
      local_11ac = 0xffffffff;
      local_11a8 = 0;
      local_11a0 = 0;
      local_1198 = 0;
      local_1194 = 0xffffffff;
      local_1190 = 0;
      local_1188 = 0;
      local_1180 = 0;
      local_117c = 0xffffffff;
      local_1178 = 0;
      local_1170 = 0;
      local_1168 = 0;
      local_1164 = 0xffffffff;
      local_1160 = 0;
      local_1158 = 1;
      local_1154 = 1;
      local_1150 = 0;
      local_1148 = 0;
      local_1144 = 0xffffffff;
      local_1140 = 0;
      local_1138 = 0;
      local_1130 = 0;
      local_112c = 0xffffffff;
      local_1128 = 0;
      local_1120 = 0;
      local_1118 = 0;
      local_1114 = 0xffffffff;
      local_1110 = 0;
      local_1108 = 0;
      local_1100 = 0;
      local_10fc = 0xffffffff;
      local_10f8 = 0;
      local_10f0 = 0;
      local_10e8 = 0;
      local_10e4 = 0xffffffff;
      local_10e0 = 0;
      local_10d8 = 0;
      local_10d0 = 0;
      local_10cc = 0xffffffff;
      local_10c8 = 0;
      local_10c0 = 0;
      local_10b8 = 0;
      local_10b4 = 0xffffffff;
      local_10b0 = 0;
      local_10a8 = 0;
      local_10a0 = 0;
      local_109c = 0xffffffff;
      local_1098 = 0;
      local_1090 = 0;
      local_1078 = 0;
      local_1070 = 0;
      local_1058 = 0;
      uStack_1050 = 0;
      local_1038 = 0;
      local_1030[0] = 0;
      puVar9 = local_1024;
      lVar14 = 8;
      do {
        puVar9[-1] = 1;
        *puVar9 = 0;
        *(undefined4 *)(puVar9 + 1) = 0;
        puVar9 = (undefined8 *)((longlong)puVar9 + 0x14);
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      lStack_1210 = (ulonglong)uVar22 << 0x20;
      local_1208 = CONCAT62(uStack_12d6,0x102);
      local_f8c = 0;
      uStack_12dc = uVar22;
      local_1218 = local_12e8;
      FRHICommandListBase::CacheActiveRenderTargets(lVar20,1,&local_1218,&local_1088);
      puVar15 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar9 = puVar15 + 0x54;
      if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
        FMemStackBase::AllocateNewChunk(puVar1,0x2a8);
        puVar15 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar9 = puVar15 + 0x54;
      }
      *puVar1 = (ulonglong)puVar9;
      *(int *)(lVar20 + 0x14) = *(int *)(lVar20 + 0x14) + 1;
      **(undefined8 **)(lVar20 + 8) = puVar15;
      *(undefined8 **)(lVar20 + 8) = puVar15 + 1;
      *puVar15 = &PTR_FUN_1444d5488;
      puVar15[1] = 0;
      FUN_140c63680(puVar15 + 2,&local_1218);
      lVar20 = 8;
      puVar19 = local_1030;
      do {
        puVar9 = *(undefined8 **)(puVar19 + -2);
        puVar19 = puVar19 + -2;
        lVar20 = lVar20 + -1;
        if (puVar9 != (undefined8 *)0x0) {
          LOCK();
          piVar2 = (int *)(puVar9 + 1);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            if ((*(char *)(puVar9 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')))) {
              LOCK();
              bVar24 = *(int *)((longlong)puVar9 + 0xc) == 0;
              if (bVar24) {
                *(int *)((longlong)puVar9 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar24) {
                uVar8 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar8 == 0) {
                  lVar14 = 0;
                }
                else {
                  lVar14 = (&DAT_1468a81f8)[uVar8 >> 0xe] + (ulonglong)(uVar8 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar14 + 8) = puVar9;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar9)(puVar9,1);
            }
          }
        }
      } while (lVar20 != 0);
      uVar22 = uVar22 + 1;
      lVar20 = local_13a8;
      param_2 = local_13b8;
      param_5 = local_1340;
    } while ((int)uVar22 < 6);
  }
LAB_141b24694:
  FUN_141b570f0(lVar20,param_2,0);
  lVar14 = FSceneRenderTargets::Get(lVar20);
  lVar23 = *(longlong *)(param_2 + 0x3090);
  puVar15 = (undefined8 *)0x0;
  local_12b8 = &DAT_146a1c4d0;
  local_12b0 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar23 + 0x38,local_13b0,&local_12b8);
  puVar9 = puVar15;
  if (local_13b0[0] != -1) {
    puVar9 = (undefined8 *)((longlong)local_13b0[0] * 0x20 + *(longlong *)(lVar23 + 0x38));
  }
  puVar18 = puVar9 + 2;
  if (puVar9 == (undefined8 *)0x0) {
    puVar18 = puVar15;
  }
  FUN_141b60ed0(*puVar18,lVar20,param_2,lVar14);
  puVar1 = (ulonglong *)(lVar20 + 0x30);
  puVar18 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
  local_12d0 = *(undefined8 *)(*(longlong *)(lVar14 + 0x338) + 0x10);
  puVar9 = puVar18 + 1;
  if (*(undefined8 **)(lVar20 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(puVar1,0x10);
    puVar18 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar18 + 1;
  }
  *puVar1 = (ulonglong)puVar9;
  *puVar18 = local_12d0;
  puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
  puVar9 = puVar16 + 5;
  if (*(undefined8 **)(lVar20 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(puVar1,0x30);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar16 + 5;
  }
  *puVar1 = (ulonglong)puVar9;
  *(int *)(lVar20 + 0x14) = *(int *)(lVar20 + 0x14) + 1;
  **(undefined8 **)(lVar20 + 8) = puVar16;
  *(undefined8 **)(lVar20 + 8) = puVar16 + 1;
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar16 + 2) = 1;
  puVar16[3] = puVar18;
  *(undefined4 *)(puVar16 + 4) = 0;
  *(undefined1 *)((longlong)puVar16 + 0x24) = 0;
  FUN_141b63bb0(lVar20,param_2,0);
  FUN_141b570f0(lVar20,param_2,1);
  FUN_141b301e0(lVar20,param_2);
  FUN_141b63bb0(lVar20,param_2,1);
  FUN_141b570f0(lVar20,param_2,2);
  FUN_141b30880(lVar20,param_2);
  uVar10 = FUN_141b63bb0(lVar20,param_2,2);
  if ((int)param_5[1] == 0) {
    puVar15 = (undefined8 *)(uVar10 & 0xffffffffffffff00);
  }
  else {
    local_13d8 = 0;
    iVar3 = *(int *)(DAT_146a18498 + 4);
    if ((*(int *)(DAT_146a184b0 + 4) == 1) && (iVar3 - 1U < 2)) {
      cVar6 = '\x01';
    }
    else {
      cVar6 = '\0';
    }
    iVar17 = *(int *)(DAT_146a184c8 + 4);
    local_13d7 = cVar6;
    local_13d4 = iVar17;
    FUN_141b570f0(lVar20,param_2,4);
    if (iVar3 < 2) {
      local_1418 = (longlong *)((ulonglong)local_1418 & 0xffffffffffffff00);
      FUN_141cdf000(local_13c0,lVar20,param_2,local_1338);
    }
    else {
      FUN_141cde240();
    }
    fVar25 = 1.0 / (float)iVar3;
    local_1390 = (int)((float)(int)*(undefined8 *)(local_13c0 + 0x378) * fVar25);
    local_138c = (int)((float)(int)((ulonglong)*(undefined8 *)(local_13c0 + 0x378) >> 0x20) * fVar25
                      );
    _guard_xfg_dispatch_icall_nop(local_f88,*(void **)(param_2 + 0x1ab8),0xf30);
    local_1418 = (longlong *)(param_2 + 0x390);
    local_12f8 = (int)((float)*(int *)(param_2 + 0x1aa0) * fVar25);
    local_12f4 = (int)((float)*(int *)(param_2 + 0x1aa4) * fVar25);
    local_12f0 = (int)((float)*(int *)(param_2 + 0x1aa8) * fVar25);
    local_12ec = (int)((float)*(int *)(param_2 + 0x1aac) * fVar25);
    local_1410 = (undefined8 *)(param_2 + 0x28e0);
    FUN_14275e210(param_2,local_f88,&local_1390,&local_12f8);
    local_1418 = (longlong *)CONCAT44(local_1418._4_4_,1);
    (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_1388,local_f88,&DAT_146b09708);
    local_1380 = local_1388;
    if (local_1388 != 0) {
      LOCK();
      *(int *)(local_1388 + 8) = *(int *)(local_1388 + 8) + 1;
      UNLOCK();
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1388);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_2 + 0x28);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1380);
    local_1318[0] = *(longlong *)(param_2 + 0x20);
    local_1320 = 0x11;
    local_1330 = 0;
    uStack_1328 = 0;
    if (local_1318[0] != 0) {
      LOCK();
      *(int *)(local_1318[0] + 8) = *(int *)(local_1318[0] + 8) + 1;
      UNLOCK();
    }
    local_1318[1] = 0;
    local_1318[2] = 0;
    local_1300 = 0;
    local_12fc = 0;
    local_13cc = 0;
    if (0 < (int)param_5[1]) {
      local_13b8 = 0;
      do {
        lVar23 = 0;
        local_13c4 = 0;
        local_12c8 = *(longlong *)(*param_5 + local_13b8 * 8);
        local_1348 = *(longlong *)(local_12c8 + 0x140);
        if (0 < *(int *)(local_1348 + 0x38)) {
          do {
            if ((iVar17 != 1) || (local_13c8 = 2, 1 < iVar3)) {
              local_13c8 = 1;
            }
            iVar21 = 0;
            do {
              lVar14 = *(longlong *)(*(longlong *)(local_1348 + 0x30) + lVar23 * 8);
              lVar20 = DAT_146a0e7a0;
              if ((cVar6 == '\0') && (iVar21 != 1)) {
                lVar12 = DAT_146864318;
                if (DAT_146864318 == 0) {
                  if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
                    cVar6 = IsInRenderingThread();
                    if (cVar6 == '\0') {
                      FScopedEvent::FScopedEvent(local_1378);
                      plVar11 = (longlong *)FUN_14049e3d0(local_1290,0,0xff);
                      lVar20 = *plVar11;
                      *(undefined1 **)(lVar20 + 0x10) = &LAB_140985680;
                      *(undefined1 **)(lVar20 + 0x18) = local_1378;
                      lVar20 = *plVar11;
                      lVar5 = plVar11[2];
                      lVar12 = plVar11[1];
                      lVar13 = *(longlong *)(lVar20 + 0x28);
                      if (lVar13 != 0) {
                        LOCK();
                        *(int *)(lVar13 + 0x48) = *(int *)(lVar13 + 0x48) + 1;
                        UNLOCK();
                      }
                      FUN_1404a4fe0(lVar20,lVar12,(int)lVar5,1);
                      if (lVar13 != 0) {
                        LOCK();
                        piVar2 = (int *)(lVar13 + 0x48);
                        iVar17 = *piVar2;
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        if (iVar17 == 1) {
                          FGraphEvent::Recycle(lVar13);
                        }
                      }
                      FScopedEvent::~FScopedEvent(local_1378);
                      lVar12 = DAT_146864318;
                      iVar17 = local_13d4;
                      lVar20 = DAT_146a0e7a0;
                    }
                    else {
                      lVar20 = operator_new(0x38);
                      if (lVar20 == 0) {
                        lVar12 = 0;
                        DAT_146864318 = lVar12;
                        lVar20 = DAT_146a0e7a0;
                      }
                      else {
                        lVar12 = TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                                 ::FStaticStateResource::FStaticStateResource(lVar20);
                        DAT_146864318 = lVar12;
                        lVar20 = DAT_146a0e7a0;
                      }
                    }
                  }
                  else {
                    lVar20 = operator_new(0x38);
                    if (lVar20 == 0) {
                      LOCK();
                      if (DAT_146864318 == 0) {
                        DAT_146864318 = 0;
                      }
                      UNLOCK();
                      lVar12 = DAT_146864318;
                      lVar20 = DAT_146a0e7a0;
                    }
                    else {
                      lVar20 = TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                               ::FStaticStateResource::FStaticStateResource(lVar20);
                      LOCK();
                      if (DAT_146864318 != 0) {
                        lVar20 = DAT_146864318;
                      }
                      DAT_146864318 = lVar20;
                      UNLOCK();
                      lVar12 = DAT_146864318;
                      lVar20 = DAT_146a0e7a0;
                    }
                  }
                }
              }
              else {
                lVar12 = DAT_146a0e7a0;
                if (DAT_146a0e7a0 == 0) {
                  if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
                    cVar6 = IsInRenderingThread();
                    if (cVar6 == '\0') {
                      FScopedEvent::FScopedEvent(local_1370);
                      plVar11 = (longlong *)FUN_14049e3d0(local_1278,0,0xff);
                      lVar20 = *plVar11;
                      *(undefined1 **)(lVar20 + 0x10) = &LAB_141ac0f40;
                      *(undefined1 **)(lVar20 + 0x18) = local_1370;
                      lVar20 = *plVar11;
                      lVar5 = plVar11[2];
                      lVar12 = plVar11[1];
                      lVar13 = *(longlong *)(lVar20 + 0x28);
                      if (lVar13 != 0) {
                        LOCK();
                        *(int *)(lVar13 + 0x48) = *(int *)(lVar13 + 0x48) + 1;
                        UNLOCK();
                      }
                      FUN_1404a4fe0(lVar20,lVar12,(int)lVar5,1);
                      if (lVar13 != 0) {
                        LOCK();
                        piVar2 = (int *)(lVar13 + 0x48);
                        iVar17 = *piVar2;
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        if (iVar17 == 1) {
                          FGraphEvent::Recycle(lVar13);
                        }
                      }
                      FScopedEvent::~FScopedEvent(local_1370);
                      lVar12 = DAT_146a0e7a0;
                      iVar17 = local_13d4;
                      lVar20 = DAT_146a0e7a0;
                    }
                    else {
                      lVar13 = operator_new(0x38);
                      lVar12 = 0;
                      lVar20 = 0;
                      if (lVar13 != 0) {
                        lVar12 = TStaticStateRHI<TStaticDepthStencilState<0,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                                 ::FStaticStateResource::FStaticStateResource(lVar13);
                        lVar20 = lVar12;
                      }
                    }
                  }
                  else {
                    lVar20 = operator_new(0x38);
                    if (lVar20 == 0) {
                      LOCK();
                      if (DAT_146a0e7a0 == 0) {
                        DAT_146a0e7a0 = 0;
                      }
                      UNLOCK();
                      lVar12 = DAT_146a0e7a0;
                      lVar20 = DAT_146a0e7a0;
                    }
                    else {
                      lVar20 = TStaticStateRHI<TStaticDepthStencilState<0,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                               ::FStaticStateResource::FStaticStateResource(lVar20);
                      LOCK();
                      if (DAT_146a0e7a0 != 0) {
                        lVar20 = DAT_146a0e7a0;
                      }
                      DAT_146a0e7a0 = lVar20;
                      UNLOCK();
                      lVar12 = DAT_146a0e7a0;
                      lVar20 = DAT_146a0e7a0;
                    }
                  }
                }
              }
              DAT_146a0e7a0 = lVar20;
              uStack_1328 = *(undefined8 *)(lVar12 + 0x30);
              local_1318[2] = local_1318[2] & 0xffffffff00000000;
              lVar20 = DAT_146852b40;
              if ((iVar17 == 1) && (iVar3 < 2)) {
                if (iVar21 == 0) {
                  lVar12 = DAT_146a1c3f0;
                  if (DAT_146a1c3f0 == 0) {
                    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
                      cVar6 = IsInRenderingThread();
                      if (cVar6 == '\0') {
                        FScopedEvent::FScopedEvent(local_1368);
                        plVar11 = (longlong *)FUN_14049e3d0(local_1260,0,0xff);
                        lVar20 = *plVar11;
                        *(undefined1 **)(lVar20 + 0x10) = &LAB_141b33e00;
                        *(undefined1 **)(lVar20 + 0x18) = local_1368;
                        lVar20 = *plVar11;
                        lVar5 = plVar11[2];
                        lVar12 = plVar11[1];
                        lVar13 = *(longlong *)(lVar20 + 0x28);
                        if (lVar13 != 0) {
                          LOCK();
                          *(int *)(lVar13 + 0x48) = *(int *)(lVar13 + 0x48) + 1;
                          UNLOCK();
                        }
                        FUN_1404a4fe0(lVar20,lVar12,(int)lVar5,1);
                        if (lVar13 != 0) {
                          LOCK();
                          piVar2 = (int *)(lVar13 + 0x48);
                          iVar17 = *piVar2;
                          *piVar2 = *piVar2 + -1;
                          UNLOCK();
                          if (iVar17 == 1) {
                            FGraphEvent::Recycle(lVar13);
                          }
                        }
                        FScopedEvent::~FScopedEvent(local_1368);
                        lVar12 = DAT_146a1c3f0;
                        lVar20 = DAT_146852b40;
                      }
                      else {
                        lVar20 = operator_new(0x38);
                        if (lVar20 == 0) {
                          lVar12 = 0;
                          lVar20 = DAT_146852b40;
                          DAT_146a1c3f0 = lVar12;
                        }
                        else {
                          lVar12 = TStaticStateRHI<TStaticBlendState<7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                                   ::FStaticStateResource::FStaticStateResource(lVar20);
                          lVar20 = DAT_146852b40;
                          DAT_146a1c3f0 = lVar12;
                        }
                      }
                    }
                    else {
                      lVar20 = operator_new(0x38);
                      if (lVar20 == 0) {
                        LOCK();
                        if (DAT_146a1c3f0 == 0) {
                          DAT_146a1c3f0 = 0;
                        }
                        UNLOCK();
                        lVar12 = DAT_146a1c3f0;
                        lVar20 = DAT_146852b40;
                      }
                      else {
                        lVar20 = TStaticStateRHI<TStaticBlendState<7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                                 ::FStaticStateResource::FStaticStateResource(lVar20);
                        LOCK();
                        if (DAT_146a1c3f0 != 0) {
                          lVar20 = DAT_146a1c3f0;
                        }
                        DAT_146a1c3f0 = lVar20;
                        UNLOCK();
                        lVar12 = DAT_146a1c3f0;
                        lVar20 = DAT_146852b40;
                      }
                    }
                  }
                  goto LAB_141b25176;
                }
                if (iVar21 == 1) {
                  lVar12 = DAT_146a1c3e8;
                  if (DAT_146a1c3e8 == 0) {
                    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
                      cVar6 = IsInRenderingThread();
                      if (cVar6 == '\0') {
                        FScopedEvent::FScopedEvent(local_1360);
                        plVar11 = (longlong *)FUN_14049e3d0(local_1248,0,0xff);
                        lVar20 = *plVar11;
                        *(undefined1 **)(lVar20 + 0x10) = &LAB_141b33e20;
                        *(undefined1 **)(lVar20 + 0x18) = local_1360;
                        lVar20 = *plVar11;
                        lVar5 = plVar11[2];
                        lVar12 = plVar11[1];
                        lVar13 = *(longlong *)(lVar20 + 0x28);
                        if (lVar13 != 0) {
                          LOCK();
                          *(int *)(lVar13 + 0x48) = *(int *)(lVar13 + 0x48) + 1;
                          UNLOCK();
                        }
                        FUN_1404a4fe0(lVar20,lVar12,(int)lVar5,1);
                        if (lVar13 != 0) {
                          LOCK();
                          piVar2 = (int *)(lVar13 + 0x48);
                          iVar17 = *piVar2;
                          *piVar2 = *piVar2 + -1;
                          UNLOCK();
                          if (iVar17 == 1) {
                            FGraphEvent::Recycle(lVar13);
                          }
                        }
                        FScopedEvent::~FScopedEvent(local_1360);
                        lVar12 = DAT_146a1c3e8;
                        lVar20 = DAT_146852b40;
                      }
                      else {
                        lVar20 = operator_new(0x38);
                        if (lVar20 == 0) {
                          lVar12 = 0;
                          lVar20 = DAT_146852b40;
                          DAT_146a1c3e8 = lVar12;
                        }
                        else {
                          lVar12 = FUN_141b27ec0(lVar20);
                          lVar20 = DAT_146852b40;
                          DAT_146a1c3e8 = lVar12;
                        }
                      }
                    }
                    else {
                      lVar20 = operator_new(0x38);
                      if (lVar20 == 0) {
                        LOCK();
                        if (DAT_146a1c3e8 == 0) {
                          DAT_146a1c3e8 = 0;
                        }
                        UNLOCK();
                        lVar12 = DAT_146a1c3e8;
                        lVar20 = DAT_146852b40;
                      }
                      else {
                        lVar20 = FUN_141b27ec0(lVar20);
                        LOCK();
                        if (DAT_146a1c3e8 != 0) {
                          lVar20 = DAT_146a1c3e8;
                        }
                        DAT_146a1c3e8 = lVar20;
                        UNLOCK();
                        lVar12 = DAT_146a1c3e8;
                        lVar20 = DAT_146852b40;
                      }
                    }
                  }
                  goto LAB_141b25176;
                }
              }
              else {
                lVar12 = DAT_146852b40;
                if (DAT_146852b40 == 0) {
                  if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
                    cVar6 = IsInRenderingThread();
                    if (cVar6 == '\0') {
                      FScopedEvent::FScopedEvent(local_1358);
                      plVar11 = (longlong *)FUN_14049e3d0(local_1230,0,0xff);
                      lVar20 = *plVar11;
                      *(undefined1 **)(lVar20 + 0x10) = &LAB_1404a0f60;
                      *(undefined1 **)(lVar20 + 0x18) = local_1358;
                      lVar20 = *plVar11;
                      lVar5 = plVar11[2];
                      lVar12 = plVar11[1];
                      lVar13 = *(longlong *)(lVar20 + 0x28);
                      if (lVar13 != 0) {
                        LOCK();
                        *(int *)(lVar13 + 0x48) = *(int *)(lVar13 + 0x48) + 1;
                        UNLOCK();
                      }
                      FUN_1404a4fe0(lVar20,lVar12,(int)lVar5,1);
                      if (lVar13 != 0) {
                        LOCK();
                        piVar2 = (int *)(lVar13 + 0x48);
                        iVar17 = *piVar2;
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        if (iVar17 == 1) {
                          FGraphEvent::Recycle(lVar13);
                        }
                      }
                      FScopedEvent::~FScopedEvent(local_1358);
                      lVar12 = DAT_146852b40;
                      lVar20 = DAT_146852b40;
                    }
                    else {
                      lVar13 = operator_new(0x38);
                      lVar12 = 0;
                      lVar20 = 0;
                      if (lVar13 != 0) {
                        lVar12 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                                 ::FStaticStateResource::FStaticStateResource(lVar13);
                        lVar20 = lVar12;
                      }
                    }
                  }
                  else {
                    lVar20 = operator_new(0x38);
                    if (lVar20 == 0) {
                      LOCK();
                      if (DAT_146852b40 == 0) {
                        DAT_146852b40 = 0;
                      }
                      UNLOCK();
                      lVar12 = DAT_146852b40;
                      lVar20 = DAT_146852b40;
                    }
                    else {
                      lVar20 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                               ::FStaticStateResource::FStaticStateResource(lVar20);
                      LOCK();
                      if (DAT_146852b40 != 0) {
                        lVar20 = DAT_146852b40;
                      }
                      DAT_146852b40 = lVar20;
                      UNLOCK();
                      lVar12 = DAT_146852b40;
                      lVar20 = DAT_146852b40;
                    }
                  }
                }
LAB_141b25176:
                DAT_146852b40 = lVar20;
                local_1330 = *(undefined8 *)(lVar12 + 0x30);
              }
              local_1300 = 0;
              if ((*(uint *)(lVar14 + 0x8c) & 0x2000000) == 0) {
                local_12c0 = (1L << ((byte)*(undefined4 *)(lVar14 + 0x80) & 0x3f)) + -1;
              }
              else {
                local_12c0 = *(longlong *)
                              (*(longlong *)(param_2 + 0x1c50) +
                              (longlong)*(int *)(lVar14 + 200) * 8);
              }
              uVar4 = *(undefined4 *)(lVar14 + 0xb0);
              local_1350 = (longlong *)0x0;
              (**(code **)(**(longlong **)(lVar14 + 0xa8) + 0x40))
                        (*(longlong **)(lVar14 + 0xa8),*(undefined4 *)(param_2 + 0x1a38),local_12a8,
                         &local_1350);
              (**(code **)(*local_1350 + 0x1f8))();
              lVar20 = local_13a8;
              local_13e0 = 0;
              local_13e8 = 0;
              local_13f0 = 0;
              local_1400 = local_12c8;
              local_1410 = &local_1330;
              local_1408 = 1;
              local_1418 = &local_12c0;
              local_13f8 = uVar4;
              bVar7 = FUN_141b31130(local_13a8,param_2,0,lVar14);
              iVar21 = iVar21 + 1;
              local_13d8 = local_13d8 | bVar7;
              iVar17 = local_13d4;
              cVar6 = local_13d7;
            } while (iVar21 < local_13c8);
            lVar23 = lVar23 + 1;
            local_13c4 = local_13c4 + 1;
          } while (local_13c4 < *(int *)(local_1348 + 0x38));
        }
        local_13cc = local_13cc + 1;
        local_13b8 = local_13b8 + 1;
        param_5 = local_1340;
        cVar6 = local_13d7;
      } while (local_13cc < (int)local_1340[1]);
      if ((local_13d8 != 0) && (1 < iVar3)) {
        local_12a0 = 0xffffffffffffffff;
        uStack_1298 = 0xffffffffffffffff;
        FUN_141ce35d0(local_13c0,lVar20,&local_12a0);
      }
      puVar15 = (undefined8 *)(ulonglong)local_13d8;
    }
    FUN_141b63bb0(lVar20,param_2,4);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_1318);
    if (((char)puVar15 != '\0') && (1 < iVar3)) {
      FUN_141b570f0(lVar20,param_2,5);
      FUN_141b29ad0(lVar20,param_2,local_1338);
      FUN_141b63bb0(lVar20,param_2,5);
    }
  }
  return puVar15;
}



// FUNCTION 141b25290 FUN_141b25290 body=292 status=ok
// SIG undefined FUN_141b25290(void)

void FUN_141b25290(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  char param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FRWShaderParameter::UnsetUAV<FRHICommandList>(param_1,param_2,*param_3);
  FRWShaderParameter::UnsetUAV<FRHICommandList>(param_1 + 8,param_2,*param_3);
  if (param_5 != '\0') {
    uVar1 = *(undefined8 *)(param_4 + 0x38);
    uVar2 = *(undefined8 *)(param_4 + 0x10);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar5 + 2;
    if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar5 + 2;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar3;
    *puVar5 = uVar2;
    puVar5[1] = uVar1;
    puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar4 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar3;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar4;
    *(undefined8 **)(param_2 + 8) = puVar4 + 1;
    puVar4[1] = 0;
    *puVar4 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar4 + 2) = 2;
    puVar4[3] = puVar5;
    *(undefined4 *)(puVar4 + 4) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x24) = 3;
    puVar4[5] = 0;
  }
  return;
}



// FUNCTION 141b253c0 FShadowObjectCullPS<1> body=140 status=ok
// SIG undefined FShadowObjectCullPS<1>(void)

undefined8 * FShadowObjectCullPS<1>::FShadowObjectCullPS<1>(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144dde270;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined2 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xee) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x106) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x116) = 0;
  FDistanceFieldCulledObjectBufferParameters::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18));
  FLightTileIntersectionParameters::Bind
            ((undefined8 *)((longlong)param_1 + 0xee),*(undefined8 *)(param_2 + 0x18));
  return param_1;
}



// FUNCTION 141b25450 FShadowObjectCullPS<1> body=119 status=ok
// SIG undefined FShadowObjectCullPS<1>(void)

undefined8 * FShadowObjectCullPS<1>::FShadowObjectCullPS<1>(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144dde270;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined2 *)(param_1 + 0x23) = 0;
  return param_1;
}



// FUNCTION 141b254d0 FUN_141b254d0 body=486 status=ok
// SIG undefined FUN_141b254d0(void)

undefined8 * FUN_141b254d0(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144ddde58;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xce) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined2 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x106) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x116) = 0;
  *(undefined2 *)((longlong)param_1 + 0x11a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined2 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x136) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x146) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x156) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x166) = 0;
  *(undefined4 *)((longlong)param_1 + 0x16e) = 0;
  *(undefined2 *)((longlong)param_1 + 0x172) = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined2 *)(param_1 + 0x32) = 0;
  FUN_141cdf500(param_2);
  FDistanceFieldCulledObjectBufferParameters::Bind(param_1 + 0x1a,*(undefined8 *)(param_2 + 0x18));
  FAOParameters::Bind((undefined8 *)((longlong)param_1 + 0xfe),*(undefined8 *)(param_2 + 0x18));
  FScreenGridParameters::Bind((longlong)param_1 + 0x11c,*(undefined8 *)(param_2 + 0x18));
  FGlobalDistanceFieldParameters::Bind
            ((undefined8 *)((longlong)param_1 + 0x136),*(undefined8 *)(param_2 + 0x18));
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x174,*(undefined8 *)(param_2 + 0x18),L"TileConeDepthRanges",0);
  FShaderParameter::Bind(param_1 + 0x2f,*(undefined8 *)(param_2 + 0x18),L"TileListGroupSize",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x17e,*(undefined8 *)(param_2 + 0x18),L"TanConeHalfAngle",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x184,*(undefined8 *)(param_2 + 0x18),L"BentNormalNormalizeFactor",
             0);
  FRWShaderParameter::Bind
            ((longlong)param_1 + 0x18a,*(undefined8 *)(param_2 + 0x18),L"ScreenGridConeVisibility");
  return param_1;
}



// FUNCTION 141b256c0 TConeTraceScreenGridGlobalOcclusionCS<1> body=248 status=ok
// SIG undefined TConeTraceScreenGridGlobalOcclusionCS<1>(void)

undefined8 *
TConeTraceScreenGridGlobalOcclusionCS<1>::TConeTraceScreenGridGlobalOcclusionCS<1>
          (undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144ddde58;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xce) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
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
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined2 *)(param_1 + 0x32) = 0;
  return param_1;
}



// FUNCTION 141b257c0 FUN_141b257c0 body=553 status=ok
// SIG undefined FUN_141b257c0(void)

undefined8 * FUN_141b257c0(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144dddc50;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xce) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined2 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x106) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x116) = 0;
  *(undefined2 *)((longlong)param_1 + 0x11a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined2 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x136) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x146) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x156) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x166) = 0;
  *(undefined4 *)((longlong)param_1 + 0x16e) = 0;
  *(undefined2 *)((longlong)param_1 + 0x172) = 0;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(undefined2 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a6) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ae) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b6) = 0;
  FUN_141cdf500(param_2,param_1 + 0x18,param_1 + 0x19);
  FDistanceFieldCulledObjectBufferParameters::Bind(param_1 + 0x1a,*(undefined8 *)(param_2 + 0x18));
  FAOParameters::Bind((longlong)param_1 + 0xfe,*(undefined8 *)(param_2 + 0x18));
  FScreenGridParameters::Bind((longlong)param_1 + 0x11c,*(undefined8 *)(param_2 + 0x18));
  FGlobalDistanceFieldParameters::Bind
            ((undefined8 *)((longlong)param_1 + 0x136),*(undefined8 *)(param_2 + 0x18));
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x174,*(undefined8 *)(param_2 + 0x18),L"TileConeDepthRanges",0);
  FTileIntersectionParameters::Bind(param_1 + 0x2f,*(undefined8 *)(param_2 + 0x18));
  FShaderParameter::Bind
            ((longlong)param_1 + 0x19e,*(undefined8 *)(param_2 + 0x18),L"TanConeHalfAngle",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x1a4,*(undefined8 *)(param_2 + 0x18),L"BentNormalNormalizeFactor",
             0);
  FRWShaderParameter::Bind
            ((longlong)param_1 + 0x1aa,*(undefined8 *)(param_2 + 0x18),L"ScreenGridConeVisibility");
  FRWShaderParameter::Bind
            ((longlong)param_1 + 0x1b2,*(undefined8 *)(param_2 + 0x18),
             L"ConeDepthVisibilityFunction");
  return param_1;
}



// FUNCTION 141b259f0 TConeTraceScreenGridObjectOcclusionCS<1,1> body=283 status=ok
// SIG undefined TConeTraceScreenGridObjectOcclusionCS<1,1>(void)

undefined8 *
TConeTraceScreenGridObjectOcclusionCS<1,1>::TConeTraceScreenGridObjectOcclusionCS<1,1>
          (undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144dddc50;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xce) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
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
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined2 *)(param_1 + 0x37) = 0;
  return param_1;
}



// FUNCTION 141b25b10 FUN_141b25b10 body=719 status=ok
// SIG undefined FUN_141b25b10(void)

undefined8 * FUN_141b25b10(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144dde338;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf2) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfa) = 0;
  *(undefined8 *)((longlong)param_1 + 0x102) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x112) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x11e) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined2 *)((longlong)param_1 + 0x124) = 0;
  *(undefined1 *)((longlong)param_1 + 0x126) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined2 *)((longlong)param_1 + 300) = 0;
  *(undefined1 *)((longlong)param_1 + 0x12e) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  *(undefined2 *)(param_1 + 0x2f) = 0;
  FRWShaderParameter::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18),L"ShadowFactors");
  FShaderParameter::Bind(param_1 + 0x19,*(undefined8 *)(param_2 + 0x18),L"NumGroups",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xce,*(undefined8 *)(param_2 + 0x18),L"LightDirection",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xda,*(undefined8 *)(param_2 + 0x18),L"LightSourceRadius",0);
  FShaderParameter::Bind
            (param_1 + 0x1c,*(undefined8 *)(param_2 + 0x18),L"RayStartOffsetDepthScale",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xd4,*(undefined8 *)(param_2 + 0x18),L"LightPositionAndInvRadius",0
            );
  FShaderParameter::Bind
            ((longlong)param_1 + 0xe6,*(undefined8 *)(param_2 + 0x18),
             L"TanLightAngleAndNormalThreshold",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xec,*(undefined8 *)(param_2 + 0x18),L"ScissorRectMinAndSize",0);
  FDistanceFieldCulledObjectBufferParameters::Bind
            ((undefined8 *)((longlong)param_1 + 0xf2),*(undefined8 *)(param_2 + 0x18));
  FUN_141cdf500(param_2,param_1 + 0x24,param_1 + 0x25);
  FLightTileIntersectionParameters::Bind(param_1 + 0x26,*(undefined8 *)(param_2 + 0x18));
  FShaderParameter::Bind
            ((longlong)param_1 + 0x15c,*(undefined8 *)(param_2 + 0x18),L"WorldToShadow",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x162,*(undefined8 *)(param_2 + 0x18),L"TwoSidedMeshDistanceBias",0
            );
  FShaderParameter::Bind(param_1 + 0x2d,*(undefined8 *)(param_2 + 0x18),L"MinDepth",0);
  FShaderParameter::Bind((longlong)param_1 + 0x16e,*(undefined8 *)(param_2 + 0x18),L"MaxDepth",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x174,*(undefined8 *)(param_2 + 0x18),L"DownsampleFactor",0);
  return param_1;
}



// FUNCTION 141b25de0 TDistanceFieldShadowingCS<1,1> body=227 status=ok
// SIG undefined TDistanceFieldShadowingCS<1,1>(void)

undefined8 * TDistanceFieldShadowingCS<1,1>::TDistanceFieldShadowingCS<1,1>(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144dde338;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x124) = 0;
  *(undefined1 *)((longlong)param_1 + 0x126) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined2 *)((longlong)param_1 + 300) = 0;
  *(undefined1 *)((longlong)param_1 + 0x12e) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined2 *)(param_1 + 0x2f) = 0;
  return param_1;
}



// FUNCTION 141b25ed0 TDistanceFieldShadowingUpsamplePS<1> body=353 status=ok
// SIG undefined TDistanceFieldShadowingUpsamplePS<1>(void)

undefined8 *
TDistanceFieldShadowingUpsamplePS<1>::TDistanceFieldShadowingUpsamplePS<1>
          (undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144dde4c0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xce) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined2 *)((longlong)param_1 + 0xf4) = 0;
  FUN_141cdf500(param_2);
  FShaderResourceParameter::Bind
            (param_1 + 0x1a,*(undefined8 *)(param_2 + 0x18),L"ShadowFactorsTexture",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xd4,*(undefined8 *)(param_2 + 0x18),L"ShadowFactorsSampler",0);
  FShaderParameter::Bind(param_1 + 0x1b,*(undefined8 *)(param_2 + 0x18),L"ScissorRectMinAndSize",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xde,*(undefined8 *)(param_2 + 0x18),L"FadePlaneOffset",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xe4,*(undefined8 *)(param_2 + 0x18),L"InvFadePlaneLength",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xea,*(undefined8 *)(param_2 + 0x18),L"NearFadePlaneOffset",0);
  FShaderParameter::Bind(param_1 + 0x1e,*(undefined8 *)(param_2 + 0x18),L"InvNearFadePlaneLength",0)
  ;
  return param_1;
}



// FUNCTION 141b26040 FUN_141b26040 body=321 status=ok
// SIG undefined FUN_141b26040(void)

undefined8 *
FUN_141b26040(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_141b279e0();
  uVar5 = 0;
  *(undefined1 *)(param_1 + 10) = param_5;
  param_1[8] = 0;
  param_1[9] = 0;
  iVar2 = (**(code **)(*(longlong *)param_1[3] + 0x178))();
  cVar1 = FUN_141ed13a0((&DAT_1464c9c48)[param_8]);
  if (cVar1 != '\0') {
    lVar3 = (**(code **)(*param_2 + 0x40))(param_2);
    cVar1 = (**(code **)(lVar3 + 0x48))();
    if ((cVar1 != '\0') && (iVar2 != 0)) {
      uVar4 = (**(code **)(*(longlong *)param_1[1] + 0x40))();
      uVar4 = FUN_1425939a0(param_4,&DAT_146a1afc0,uVar4,1);
      param_1[8] = uVar4;
      uVar4 = (**(code **)(*(longlong *)param_1[1] + 0x40))();
      uVar4 = FUN_1425939a0(param_4,&DAT_146a1b110,uVar4,1);
      param_1[9] = uVar4;
    }
  }
  uVar4 = (**(code **)(*param_2 + 0x40))(param_2);
  uVar4 = FUN_1425939a0(param_4,&DAT_146a1ae70,uVar4,1);
  param_1[7] = uVar4;
  if (*(char *)(param_1 + 10) == '\0') {
    uVar5 = (**(code **)(*param_2 + 0x40))(param_2);
    uVar5 = FUN_1425939a0(param_4,&DAT_146a1b260,uVar5,1);
  }
  param_1[0xb] = uVar5;
  *param_1 = param_1[7];
  return param_1;
}



// FUNCTION 141b26190 FUN_141b26190 body=229 status=ok
// SIG undefined FUN_141b26190(void)

longlong * FUN_141b26190(longlong *param_1)

{
  char cVar1;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = (longlong)&PTR_FUN_144de0118;
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x28))();
    return param_1;
  }
  FUN_141edf270(param_1);
  return param_1;
}



// FUNCTION 141b26280 FUN_141b26280 body=192 status=ok
// SIG undefined FUN_141b26280(void)

longlong * FUN_141b26280(longlong *param_1)

{
  char cVar1;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  *param_1 = (longlong)&PTR__scalar_deleting_destructor__144ddff58;
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x28))();
    return param_1;
  }
  FUN_141edf270(param_1);
  return param_1;
}



// FUNCTION 141b26340 TObjectCullPS<1> body=321 status=ok
// SIG undefined TObjectCullPS<1>(void)

undefined8 * TObjectCullPS<1>::TObjectCullPS<1>(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144ddf860;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined2 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xee) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x106) = 0;
  *(undefined2 *)((longlong)param_1 + 0x10a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x26) = 0;
  *(undefined8 *)((longlong)param_1 + 0x132) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x13e) = 0;
  FDistanceFieldCulledObjectBufferParameters::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18));
  FAOParameters::Bind((undefined8 *)((longlong)param_1 + 0xee),*(undefined8 *)(param_2 + 0x18));
  FTileIntersectionParameters::Bind
            ((undefined8 *)((longlong)param_1 + 0x10c),*(undefined8 *)(param_2 + 0x18));
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x132,*(undefined8 *)(param_2 + 0x18),L"TileConeAxisAndCos",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x136,*(undefined8 *)(param_2 + 0x18),L"TileConeDepthRanges",0);
  FShaderParameter::Bind((longlong)param_1 + 0x13a,*(undefined8 *)(param_2 + 0x18),L"NumGroups",0);
  return param_1;
}



// FUNCTION 141b26490 TObjectCullPS<1> body=147 status=ok
// SIG undefined TObjectCullPS<1>(void)

undefined8 * TObjectCullPS<1>::TObjectCullPS<1>(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144ddf860;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
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
  return param_1;
}



// FUNCTION 141b26530 TRemoveObjectsFromBufferCS<1> body=236 status=ok
// SIG undefined TRemoveObjectsFromBufferCS<1>(void)

undefined8 *
TRemoveObjectsFromBufferCS<1>::TRemoveObjectsFromBufferCS<1>(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144ddff98;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xca) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd2) = 0;
  *(undefined8 *)((longlong)param_1 + 0xda) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe2) = 0;
  *(undefined4 *)((longlong)param_1 + 0xea) = 0;
  *(undefined8 *)((longlong)param_1 + 0xee) = 0;
  FShaderParameter::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18),L"NumRemoveOperations",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xc6,*(undefined8 *)(param_2 + 0x18),L"RemoveOperationIndices",0);
  FDistanceFieldObjectBufferParameters::Bind
            ((undefined8 *)((longlong)param_1 + 0xca),*(undefined8 *)(param_2 + 0x18));
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xee,*(undefined8 *)(param_2 + 0x18),L"ObjectBounds2",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xf2,*(undefined8 *)(param_2 + 0x18),L"ObjectData2",0);
  return param_1;
}



// FUNCTION 141b26620 FUN_141b26620 body=119 status=ok
// SIG undefined FUN_141b26620(void)

undefined8 * FUN_141b26620(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146a51f90;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 141b266a0 FUN_141b266a0 body=343 status=ok
// SIG undefined FUN_141b266a0(void)

undefined8 * FUN_141b266a0(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144dde578;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xce) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xde) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xee) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf6) = 0;
  *(undefined2 *)((longlong)param_1 + 0xfa) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x102) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  *(undefined2 *)(param_1 + 0x21) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x25) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x132) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x142) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x152) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x162) = 0;
  *(undefined2 *)((longlong)param_1 + 0x166) = 0;
  FRWShaderParameter::Bind
            (param_1 + 0x18,*(undefined8 *)(param_2 + 0x18),L"VisualizeMeshDistanceFields");
  FShaderParameter::Bind(param_1 + 0x19,*(undefined8 *)(param_2 + 0x18),L"NumGroups",0);
  FDistanceFieldCulledObjectBufferParameters::Bind
            ((undefined8 *)((longlong)param_1 + 0xce),*(undefined8 *)(param_2 + 0x18));
  FUN_141cdf500(param_2,(undefined4 *)((longlong)param_1 + 0xfc),(longlong)param_1 + 0x104);
  FAOParameters::Bind((undefined8 *)((longlong)param_1 + 0x10c),*(undefined8 *)(param_2 + 0x18));
  FGlobalDistanceFieldParameters::Bind
            ((undefined8 *)((longlong)param_1 + 0x12a),*(undefined8 *)(param_2 + 0x18));
  return param_1;
}



// FUNCTION 141b26800 TVisualizeMeshDistanceFieldCS<1> body=206 status=ok
// SIG undefined TVisualizeMeshDistanceFieldCS<1>(void)

undefined8 * TVisualizeMeshDistanceFieldCS<1>::TVisualizeMeshDistanceFieldCS<1>(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144dde578;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x102) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  *(undefined2 *)(param_1 + 0x21) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  return param_1;
}



// FUNCTION 141b268d0 FUN_141b268d0 body=358 status=ok
// SIG undefined FUN_141b268d0(void)

undefined8 * FUN_141b268d0(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144ddf758;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xce) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined2 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xee) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x106) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10e) = 0;
  FUN_141cdf500(param_2);
  FAOParameters::Bind(param_1 + 0x1a,*(undefined8 *)(param_2 + 0x18));
  FRWShaderParameter::Bind
            ((longlong)param_1 + 0xee,*(undefined8 *)(param_2 + 0x18),L"TileConeAxisAndCos");
  FRWShaderParameter::Bind
            ((longlong)param_1 + 0xf6,*(undefined8 *)(param_2 + 0x18),L"TileConeDepthRanges");
  FShaderParameter::Bind((longlong)param_1 + 0x104,*(undefined8 *)(param_2 + 0x18),L"NumGroups",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xfe,*(undefined8 *)(param_2 + 0x18),L"ViewDimensions",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x10a,*(undefined8 *)(param_2 + 0x18),L"DistanceFieldNormalTexture"
             ,0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x10e,*(undefined8 *)(param_2 + 0x18),L"DistanceFieldNormalSampler"
             ,0);
  return param_1;
}



// FUNCTION 141b26a40 FBuildTileConesCS body=136 status=ok
// SIG undefined FBuildTileConesCS(void)

undefined8 * FBuildTileConesCS::FBuildTileConesCS(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144ddf758;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xce) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined2 *)(param_1 + 0x22) = 0;
  return param_1;
}



// FUNCTION 141b26ad0 FCombineConeVisibilityCS body=293 status=ok
// SIG undefined FCombineConeVisibilityCS(void)

undefined8 *
FCombineConeVisibilityCS::FCombineConeVisibilityCS(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144dddf10;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined2 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)((longlong)param_1 + 0xda) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe2) = 0;
  *(undefined8 *)((longlong)param_1 + 0xea) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf2) = 0;
  *(undefined2 *)((longlong)param_1 + 0xf6) = 0;
  FScreenGridParameters::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18));
  FShaderParameter::Bind
            ((longlong)param_1 + 0xda,*(undefined8 *)(param_2 + 0x18),L"BentNormalNormalizeFactor",0
            );
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xec,*(undefined8 *)(param_2 + 0x18),L"ScreenGridConeVisibility",0)
  ;
  FRWShaderParameter::Bind
            (param_1 + 0x1e,*(undefined8 *)(param_2 + 0x18),L"DistanceFieldBentNormal");
  FShaderParameter::Bind
            ((longlong)param_1 + 0xe6,*(undefined8 *)(param_2 + 0x18),L"ConeBufferMax",0);
  FShaderParameter::Bind(param_1 + 0x1c,*(undefined8 *)(param_2 + 0x18),L"DFNormalBufferUVMax",0);
  return param_1;
}



// FUNCTION 141b26c00 FComputeCulledTilesStartOffsetCS body=140 status=ok
// SIG undefined FComputeCulledTilesStartOffsetCS(void)

undefined8 *
FComputeCulledTilesStartOffsetCS::FComputeCulledTilesStartOffsetCS
          (undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144ddf890;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined2 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xee) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x106) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10e) = 0;
  *(undefined2 *)((longlong)param_1 + 0x112) = 0;
  FDistanceFieldCulledObjectBufferParameters::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18));
  FTileIntersectionParameters::Bind
            ((undefined8 *)((longlong)param_1 + 0xee),*(undefined8 *)(param_2 + 0x18));
  return param_1;
}



// FUNCTION 141b26c90 CScrollView body=111 status=ok
// SIG undefined CScrollView(CScrollView * this)

/* Library Function - Single Match
    protected: __cdecl CScrollView::CScrollView(void) __ptr64
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release */

CScrollView * __thiscall CScrollView::CScrollView(CScrollView *this)

{
  FShader::FShader();
  *(undefined ***)this = &PTR__scalar_deleting_destructor__144ddf890;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  return this;
}



// FUNCTION 141b26d00 FUN_141b26d00 body=546 status=ok
// SIG undefined FUN_141b26d00(void)

undefined8 * FUN_141b26d00(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144dddc80;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xce) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined2 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x106) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x116) = 0;
  *(undefined2 *)((longlong)param_1 + 0x11a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined2 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x136) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x146) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x156) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x166) = 0;
  FUN_141cdf500(param_2);
  FDistanceFieldCulledObjectBufferParameters::Bind(param_1 + 0x1a,*(undefined8 *)(param_2 + 0x18));
  FAOParameters::Bind((longlong)param_1 + 0xfe,*(undefined8 *)(param_2 + 0x18));
  FScreenGridParameters::Bind((longlong)param_1 + 0x11c,*(undefined8 *)(param_2 + 0x18));
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  FRWShaderParameter::Bind((longlong)param_1 + 0x136,uVar1,L"InterpolatedVertexData");
  FRWShaderParameter::Bind((longlong)param_1 + 0x13e,uVar1,L"SurfelData");
  FRWShaderParameter::Bind((longlong)param_1 + 0x146,uVar1,L"VPLFlux");
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x14e,*(undefined8 *)(param_2 + 0x18),L"TileConeDepthRanges",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x152,*(undefined8 *)(param_2 + 0x18),L"TileListGroupSize",0);
  FShaderParameter::Bind(param_1 + 0x2b,*(undefined8 *)(param_2 + 0x18),L"VPLGatherRadius",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x15e,*(undefined8 *)(param_2 + 0x18),L"StepBentNormalBuffer",0);
  FRWShaderParameter::Bind
            ((longlong)param_1 + 0x162,*(undefined8 *)(param_2 + 0x18),L"SurfelIrradiance");
  return param_1;
}



// FUNCTION 141b26f30 FComputeIrradianceScreenGridCS body=213 status=ok
// SIG undefined FComputeIrradianceScreenGridCS(void)

undefined8 * FComputeIrradianceScreenGridCS::FComputeIrradianceScreenGridCS(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144dddc80;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xce) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
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
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined2 *)(param_1 + 0x2d) = 0;
  return param_1;
}



// FUNCTION 141b27010 FCullObjectsForShadowCS body=342 status=ok
// SIG undefined FCullObjectsForShadowCS(void)

undefined8 * FCullObjectsForShadowCS::FCullObjectsForShadowCS(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144dde128;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined2 *)(param_1 + 0x22) = 0;
  *(undefined8 *)((longlong)param_1 + 0x112) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x122) = 0;
  *(undefined4 *)((longlong)param_1 + 0x12a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x12e) = 0;
  FDistanceFieldObjectBufferParameters::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18));
  FDistanceFieldCulledObjectBufferParameters::Bind
            ((undefined8 *)((longlong)param_1 + 0xe4),*(undefined8 *)(param_2 + 0x18));
  FShaderParameter::Bind
            ((longlong)param_1 + 0x112,*(undefined8 *)(param_2 + 0x18),
             L"ObjectBoundingGeometryIndexCount",0);
  FShaderParameter::Bind(param_1 + 0x23,*(undefined8 *)(param_2 + 0x18),L"WorldToShadow",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x11e,*(undefined8 *)(param_2 + 0x18),L"NumShadowHullPlanes",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x124,*(undefined8 *)(param_2 + 0x18),L"ShadowBoundingSphere",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x12a,*(undefined8 *)(param_2 + 0x18),L"ShadowConvexHull",0);
  return param_1;
}



// FUNCTION 141b27170 FCullObjectsForShadowCS body=133 status=ok
// SIG undefined FCullObjectsForShadowCS(void)

undefined8 * FCullObjectsForShadowCS::FCullObjectsForShadowCS(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144dde128;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  return param_1;
}



// FUNCTION 141b27200 FCullObjectsForViewCS body=317 status=ok
// SIG undefined FCullObjectsForViewCS(void)

undefined8 * FCullObjectsForViewCS::FCullObjectsForViewCS(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144ddf5f0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined2 *)(param_1 + 0x22) = 0;
  *(undefined8 *)((longlong)param_1 + 0x112) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x122) = 0;
  *(undefined4 *)((longlong)param_1 + 0x12a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x12e) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined2 *)(param_1 + 0x28) = 0;
  FDistanceFieldObjectBufferParameters::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18));
  FDistanceFieldCulledObjectBufferParameters::Bind
            ((undefined8 *)((longlong)param_1 + 0xe4),*(undefined8 *)(param_2 + 0x18));
  FAOParameters::Bind((undefined8 *)((longlong)param_1 + 0x112),*(undefined8 *)(param_2 + 0x18));
  FShaderParameter::Bind(param_1 + 0x26,*(undefined8 *)(param_2 + 0x18),L"NumConvexHullPlanes",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x136,*(undefined8 *)(param_2 + 0x18),L"ViewFrustumConvexHull",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x13c,*(undefined8 *)(param_2 + 0x18),
             L"ObjectBoundingGeometryIndexCount",0);
  return param_1;
}



// FUNCTION 141b27340 FUN_141b27340 body=154 status=ok
// SIG undefined FUN_141b27340(void)

undefined8 * FUN_141b27340(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144ddf5f0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
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
  *(undefined2 *)(param_1 + 0x28) = 0;
  return param_1;
}



// FUNCTION 141b273e0 FCullVPLsForViewCS body=320 status=ok
// SIG undefined FCullVPLsForViewCS(void)

undefined8 * FCullVPLsForViewCS::FCullVPLsForViewCS(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144ddd488;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined2 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf6) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfe) = 0;
  FShaderResourceParameter::Bind
            (param_1 + 0x18,*(undefined8 *)(param_2 + 0x18),L"VPLParameterBuffer",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xc4,*(undefined8 *)(param_2 + 0x18),L"VPLData",0);
  FRWShaderParameter::Bind
            (param_1 + 0x19,*(undefined8 *)(param_2 + 0x18),L"CulledVPLParameterBuffer");
  FRWShaderParameter::Bind(param_1 + 0x1a,*(undefined8 *)(param_2 + 0x18),L"CulledVPLData");
  FAOParameters::Bind(param_1 + 0x1b,*(undefined8 *)(param_2 + 0x18));
  FShaderParameter::Bind
            ((longlong)param_1 + 0xf6,*(undefined8 *)(param_2 + 0x18),L"NumConvexHullPlanes",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xfc,*(undefined8 *)(param_2 + 0x18),L"ViewFrustumConvexHull",0);
  return param_1;
}



// FUNCTION 141b27520 FGeometryAwareUpsamplePS body=136 status=ok
// SIG undefined FGeometryAwareUpsamplePS(void)

undefined8 *
FGeometryAwareUpsamplePS::FGeometryAwareUpsamplePS(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144dded98;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined2 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xde) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xee) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x106) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10e) = 0;
  FAOParameters::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18));
  FGeometryAwareUpsampleParameters::Bind
            ((undefined8 *)((longlong)param_1 + 0xde),*(undefined8 *)(param_2 + 0x18));
  return param_1;
}



// FUNCTION 141b275b0 FUN_141b275b0 body=112 status=ok
// SIG undefined FUN_141b275b0(void)

undefined8 * FUN_141b275b0(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144dded98;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined2 *)(param_1 + 0x22) = 0;
  return param_1;
}



// FUNCTION 141b27620 FUN_141b27620 body=728 status=ok
// SIG undefined FUN_141b27620(void)

undefined8 * FUN_141b27620(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144ddd928;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined2 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xde) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xee) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf6) = 0;
  *(undefined2 *)((longlong)param_1 + 0xfa) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x25) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x132) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x142) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x152) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x162) = 0;
  *(undefined4 *)((longlong)param_1 + 0x16a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x176) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x186) = 0;
  *(undefined2 *)((longlong)param_1 + 0x18a) = 0;
  FAOParameters::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18));
  FShaderParameter::Bind
            ((longlong)param_1 + 0xde,*(undefined8 *)(param_2 + 0x18),L"LightDirection",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xea,*(undefined8 *)(param_2 + 0x18),L"LightSourceRadius",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xe4,*(undefined8 *)(param_2 + 0x18),L"LightPositionAndInvRadius",0
            );
  FShaderParameter::Bind
            (param_1 + 0x1e,*(undefined8 *)(param_2 + 0x18),L"TanLightAngleAndNormalThreshold",0);
  FShaderParameter::Bind((longlong)param_1 + 0xf6,*(undefined8 *)(param_2 + 0x18),L"LightColor",0);
  FDistanceFieldCulledObjectBufferParameters::Bind
            ((undefined8 *)((longlong)param_1 + 0xfc),*(undefined8 *)(param_2 + 0x18));
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  FRWShaderParameter::Bind((longlong)param_1 + 0x12a,uVar1,L"InterpolatedVertexData");
  FRWShaderParameter::Bind((longlong)param_1 + 0x132,uVar1,L"SurfelData");
  FRWShaderParameter::Bind((longlong)param_1 + 0x13a,uVar1,L"VPLFlux");
  FLightTileIntersectionParameters::Bind
            ((undefined8 *)((longlong)param_1 + 0x142),*(undefined8 *)(param_2 + 0x18));
  FShaderParameter::Bind
            ((longlong)param_1 + 0x16e,*(undefined8 *)(param_2 + 0x18),L"WorldToShadow",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x174,*(undefined8 *)(param_2 + 0x18),
             L"ShadowObjectIndirectArguments",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x2f,*(undefined8 *)(param_2 + 0x18),L"ShadowCulledObjectBounds",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x17c,*(undefined8 *)(param_2 + 0x18),L"ShadowCulledObjectData",0);
  FShaderParameter::Bind(param_1 + 0x30,*(undefined8 *)(param_2 + 0x18),L"ObjectProcessStride",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x186,*(undefined8 *)(param_2 + 0x18),L"ObjectProcessStartIndex",0)
  ;
  return param_1;
}



// FUNCTION 141b27900 FLightVPLsCS body=216 status=ok
// SIG undefined FLightVPLsCS(void)

undefined8 * FLightVPLsCS::FLightVPLsCS(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144ddd928;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
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
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  return param_1;
}



// FUNCTION 141b279e0 FUN_141b279e0 body=272 status=ok
// SIG undefined FUN_141b279e0(void)

undefined8 *
FUN_141b279e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             uint *param_5,int param_6)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  *param_1 = 0;
  uVar5 = 1;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  *(uint *)(param_1 + 5) = param_5[1];
  *(undefined4 *)((longlong)param_1 + 0x2c) = 1;
  cVar1 = (**(code **)(*param_4 + 0x30))(param_4);
  if ((cVar1 == '\0') && ((~(byte)(*param_5 >> 1) & 1) != 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xfffffffe;
  *(uint *)(param_1 + 6) =
       (*(uint *)(param_1 + 6) ^ param_6 * 4) & 0xfc ^ (uVar4 | *(uint *)(param_1 + 6));
  *(byte *)((longlong)param_1 + 0x34) = (byte)(*param_5 >> 4) & 1;
  *(byte *)((longlong)param_1 + 0x35) = (byte)(*param_5 >> 5) & 1;
  cVar1 = (**(code **)(*param_4 + 0x28))(param_4);
  cVar2 = (**(code **)(*param_4 + 0xb8))(param_4);
  if ((cVar2 == '\0') && ((~(byte)(*param_5 >> 2) & 1) != 0)) {
    uVar5 = 2;
  }
  *(undefined4 *)(param_1 + 4) = uVar5;
  if ((cVar1 == '\0') && ((*param_5 & 1) == 0)) {
    iVar3 = (*param_5 >> 3 & 1) + 1;
  }
  else {
    iVar3 = 0;
  }
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xfffffffd;
  *(int *)((longlong)param_1 + 0x24) = iVar3;
  return param_1;
}



// FUNCTION 141b27af0 FObjectCullVS body=189 status=ok
// SIG undefined FObjectCullVS(void)

undefined8 * FObjectCullVS::FObjectCullVS(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144ddf800;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined2 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xee) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x106) = 0;
  *(undefined2 *)((longlong)param_1 + 0x10a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined2 *)(param_1 + 0x22) = 0;
  FDistanceFieldCulledObjectBufferParameters::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18));
  FAOParameters::Bind((undefined8 *)((longlong)param_1 + 0xee),*(undefined8 *)(param_2 + 0x18));
  FShaderParameter::Bind
            ((longlong)param_1 + 0x10c,*(undefined8 *)(param_2 + 0x18),L"ConservativeRadiusScale",0)
  ;
  return param_1;
}



// FUNCTION 141b27bb0 FUN_141b27bb0 body=112 status=ok
// SIG undefined FUN_141b27bb0(void)

undefined8 * FUN_141b27bb0(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144ddf800;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined2 *)(param_1 + 0x22) = 0;
  return param_1;
}



// FUNCTION 141b27c20 FSetupLightVPLsIndirectArgumentsCS body=181 status=ok
// SIG undefined FSetupLightVPLsIndirectArgumentsCS(void)

undefined8 *
FSetupLightVPLsIndirectArgumentsCS::FSetupLightVPLsIndirectArgumentsCS
          (undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144ddd7e0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined2 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf6) = 0;
  *(undefined2 *)((longlong)param_1 + 0xfa) = 0;
  FRWShaderParameter::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18),L"DispatchParameters");
  FDistanceFieldCulledObjectBufferParameters::Bind(param_1 + 0x19,*(undefined8 *)(param_2 + 0x18));
  FShaderParameter::Bind
            ((longlong)param_1 + 0xf6,*(undefined8 *)(param_2 + 0x18),L"ObjectProcessStride",0);
  return param_1;
}



// FUNCTION 141b27ce0 FShadowObjectCullVS body=177 status=ok
// SIG undefined FShadowObjectCullVS(void)

undefined8 * FShadowObjectCullVS::FShadowObjectCullVS(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144dde1e8;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined2 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xee) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf6) = 0;
  FDistanceFieldCulledObjectBufferParameters::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18));
  FShaderParameter::Bind
            ((longlong)param_1 + 0xee,*(undefined8 *)(param_2 + 0x18),L"WorldToShadow",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xf4,*(undefined8 *)(param_2 + 0x18),L"MinExpandRadius",0);
  return param_1;
}



// FUNCTION 141b27da0 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144de0438;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141b27e30 FUN_141b27e30 body=131 status=ok
// SIG undefined FUN_141b27e30(void)

undefined8 * FUN_141b27e30(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144de0378;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<7,0,8,0,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141b27ec0 FUN_141b27ec0 body=131 status=ok
// SIG undefined FUN_141b27ec0(void)

undefined8 * FUN_141b27ec0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144de03f8;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = FUN_141b2e790(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141b27f50 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<15,0,1,1,0,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144de02f8;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<15,0,1,1,0,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141b27fe0 FUN_141b27fe0 body=131 status=ok
// SIG undefined FUN_141b27fe0(void)

undefined8 * FUN_141b27fe0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144de0238;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = FUN_141b2e930(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141b28070 FStaticStateResource body=177 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<0,3,1,7,0,0,2,0,7,0,0,0,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144de0338;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x7010300;
    local_14 = 0x20000;
    local_10 = 7;
    local_c = 0x101;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141b28130 FStaticStateResource body=177 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<0,7,1,4,0,0,1,0,7,0,0,0,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144de0478;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x4010700;
    local_14 = 0x10000;
    local_10 = 7;
    local_c = 0x101;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141b281f0 FStaticStateResource body=170 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<0,7,1,4,0,0,0,0,7,0,0,0,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144de04b8;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x4010700;
    local_10 = 7;
    local_c = 0x101;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141b282a0 FStaticStateResource body=186 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticSamplerState<1,0,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144de03b8;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_24 = 0;
    local_10 = 0;
    local_1c = 0x7f7fffff;
    local_28 = 1;
    local_18 = 1;
    (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141b28360 FStaticStateResource body=186 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticSamplerState<2,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144de02b8;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_24 = 0;
    local_10 = 0;
    local_1c = 0x7f7fffff;
    local_28 = 0x1010102;
    local_18 = 1;
    (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141b28420 FStaticStateResource body=186 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticSamplerState<2,0,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144de0278;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_24 = 0;
    local_10 = 0;
    local_1c = 0x7f7fffff;
    local_28 = 2;
    local_18 = 1;
    (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141b284e0 FUN_141b284e0 body=539 status=ok
// SIG undefined FUN_141b284e0(void)

undefined8 * FUN_141b284e0(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144dde880;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xce) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined2 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xee) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x106) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x116) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x122) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x132) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x142) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x14e) = 0;
  FUN_141cdf500(param_2);
  FAOParameters::Bind(param_1 + 0x1a,*(undefined8 *)(param_2 + 0x18));
  FGeometryAwareUpsampleParameters::Bind((longlong)param_1 + 0xee,*(undefined8 *)(param_2 + 0x18));
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x122,*(undefined8 *)(param_2 + 0x18),L"BentNormalHistoryTexture",0
            );
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x126,*(undefined8 *)(param_2 + 0x18),L"BentNormalHistorySampler",0
            );
  FShaderParameter::Bind
            ((longlong)param_1 + 0x12a,*(undefined8 *)(param_2 + 0x18),L"HistoryWeight",0);
  FShaderParameter::Bind
            (param_1 + 0x26,*(undefined8 *)(param_2 + 0x18),L"HistoryDistanceThreshold",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x136,*(undefined8 *)(param_2 + 0x18),L"UseHistoryFilter",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x13c,*(undefined8 *)(param_2 + 0x18),L"VelocityTexture",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x28,*(undefined8 *)(param_2 + 0x18),L"VelocityTextureSampler",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x144,*(undefined8 *)(param_2 + 0x18),
             L"HistoryScreenPositionScaleBias",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x14a,*(undefined8 *)(param_2 + 0x18),L"HistoryUVMinMax",0);
  return param_1;
}



// FUNCTION 141b28700 FUpdateHistoryDepthRejectionPS body=185 status=ok
// SIG undefined FUpdateHistoryDepthRejectionPS(void)

undefined8 * FUpdateHistoryDepthRejectionPS::FUpdateHistoryDepthRejectionPS(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144dde880;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xce) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
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
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  return param_1;
}



// FUNCTION 141b287c0 FVPLPlacementCS body=446 status=ok
// SIG undefined FVPLPlacementCS(void)

undefined8 * FVPLPlacementCS::FVPLPlacementCS(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144ddffc8;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined2 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xee) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x106) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x116) = 0;
  *(undefined2 *)((longlong)param_1 + 0x11a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined2 *)((longlong)param_1 + 0x14c) = 0;
  FRWShaderParameter::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18),L"VPLParameterBuffer");
  FRWShaderParameter::Bind(param_1 + 0x19,*(undefined8 *)(param_2 + 0x18),L"VPLData");
  FShaderParameter::Bind(param_1 + 0x1a,*(undefined8 *)(param_2 + 0x18),L"InvPlacementGridSize",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xd6,*(undefined8 *)(param_2 + 0x18),L"WorldToShadow",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xdc,*(undefined8 *)(param_2 + 0x18),L"ShadowToWorld",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xe2,*(undefined8 *)(param_2 + 0x18),
             L"LightDirectionAndTraceDistance",0);
  FShaderParameter::Bind(param_1 + 0x1d,*(undefined8 *)(param_2 + 0x18),L"LightColor",0);
  FDistanceFieldCulledObjectBufferParameters::Bind
            ((undefined8 *)((longlong)param_1 + 0xee),*(undefined8 *)(param_2 + 0x18));
  FLightTileIntersectionParameters::Bind
            ((undefined8 *)((longlong)param_1 + 0x11c),*(undefined8 *)(param_2 + 0x18));
  FShaderParameter::Bind
            (param_1 + 0x29,*(undefined8 *)(param_2 + 0x18),L"VPLPlacementCameraRadius",0);
  return param_1;
}



// FUNCTION 141b28980 FVPLPlacementCS body=167 status=ok
// SIG undefined FVPLPlacementCS(void)

undefined8 * FVPLPlacementCS::FVPLPlacementCS(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144ddffc8;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
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
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined2 *)((longlong)param_1 + 0x14c) = 0;
  return param_1;
}



// FUNCTION 141b28a30 FUN_141b28a30 body=227 status=ok
// SIG undefined FUN_141b28a30(void)

void FUN_141b28a30(longlong param_1)

{
  FUN_141b38020(param_1 + 0xa8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xb8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xb0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xa8);
  FUN_141b38020(param_1 + 0x80);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x90);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x88);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x80);
  FUN_141b38020(param_1 + 0x58);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x60);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x58);
  FUN_141ace450(param_1 + 0x30);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x40);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x38);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x30);
  FUN_141ace450(param_1 + 8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x18);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x10);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 8);
  return;
}



// FUNCTION 141b28b20 FUN_141b28b20 body=199 status=ok
// SIG undefined FUN_141b28b20(void)

void FUN_141b28b20(longlong param_1)

{
  FUN_141ace450(param_1 + 0xb0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xc0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xb8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xb0);
  FUN_141ace450(param_1 + 0x88);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x98);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x90);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x88);
  FUN_141ace450(param_1 + 0x60);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x70);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x60);
  FUN_141ace450(param_1 + 0x38);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x48);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x40);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x38);
  FUN_141edd2d0(param_1);
  return;
}



// FUNCTION 141b28bf0 operator<< body=184 status=ok
// SIG undefined operator<<(void)

undefined8 operator<<(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1419e0b60();
  uVar1 = FUN_1419e0b60(uVar1,param_2 + 4);
  uVar1 = FUN_1419e0b60(uVar1,param_2 + 8);
  uVar1 = FUN_1419e0b60(uVar1,param_2 + 0xc);
  uVar1 = FUN_1419e0b60(uVar1,param_2 + 0x10);
  uVar1 = FUN_1419e0b60(uVar1,param_2 + 0x14);
  uVar1 = FUN_1419e0b60(uVar1,param_2 + 0x18);
  uVar1 = FUN_1419e0b60(uVar1,param_2 + 0x1c);
  uVar1 = FUN_1419e0b60(uVar1,param_2 + 0x20);
  uVar1 = FUN_1419e0b60(uVar1,param_2 + 0x24);
  FUN_1419e0a40(uVar1,param_2 + 0x28);
  return param_1;
}



// FUNCTION 141b28cb0 operator<< body=143 status=ok
// SIG undefined operator<<(void)

undefined8 operator<<(undefined8 param_1,longlong param_2)

{
  FUN_1419e0b60();
  FUN_1419e0b60(param_1,param_2 + 4);
  FUN_1419e0b60(param_1,param_2 + 8);
  FUN_1419e0b60(param_1,param_2 + 0xc);
  FUN_1419e0a40(param_1,param_2 + 0x10);
  FUN_1419e0a40(param_1,param_2 + 0x16);
  FUN_1419e0a40(param_1,param_2 + 0x1c);
  FUN_1419e0a40(param_1,param_2 + 0x22);
  FUN_1419e0a40(param_1,param_2 + 0x28);
  FUN_1419e0a40(param_1,param_2 + 0x2e);
  return param_1;
}



// FUNCTION 141b28d40 operator<< body=179 status=ok
// SIG undefined operator<<(void)

undefined8 operator<<(undefined8 param_1,longlong param_2)

{
  FUN_1419e0b60();
  FUN_1419e0b60(param_1,param_2 + 4);
  FUN_1419e0b60(param_1,param_2 + 8);
  FUN_1419e0b60(param_1,param_2 + 0xc);
  FUN_1419e0b60(param_1,param_2 + 0x10);
  FUN_1419e0b60(param_1,param_2 + 0x14);
  FUN_1419e0b60(param_1,param_2 + 0x18);
  FUN_1419e0b60(param_1,param_2 + 0x1c);
  FUN_1419e0a40(param_1,param_2 + 0x20);
  FUN_1419e0a40(param_1,param_2 + 0x26);
  FUN_1419e0a40(param_1,param_2 + 0x2c);
  FUN_1419e0a40(param_1,param_2 + 0x32);
  FUN_1419e0a40(param_1,param_2 + 0x38);
  return param_1;
}



// FUNCTION 141b28e00 operator<< body=162 status=ok
// SIG undefined operator<<(void)

undefined8 operator<<(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1419e0b60();
  FUN_1419e0b60(uVar1,param_2 + 4);
  uVar1 = FUN_1419e0b60(param_1,param_2 + 8);
  FUN_1419e0b60(uVar1,param_2 + 0xc);
  uVar1 = FUN_1419e0b60(param_1,param_2 + 0x10);
  FUN_1419e0b60(uVar1,param_2 + 0x14);
  uVar1 = FUN_1419e0b60(param_1,param_2 + 0x18);
  FUN_1419e0b60(uVar1,param_2 + 0x1c);
  FUN_1419e0a40(param_1,param_2 + 0x20);
  FUN_1419e0a40(param_1,param_2 + 0x26);
  return param_1;
}



// FUNCTION 141b28eb0 operator<< body=124 status=ok
// SIG undefined operator<<(void)

undefined8 operator<<(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1419e0a40();
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 6);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0xc);
  uVar1 = FUN_1419e0b60(uVar1,param_2 + 0x12);
  FUN_1419e0b60(uVar1,param_2 + 0x16);
  return param_1;
}



// FUNCTION 141b28f30 operator<< body=108 status=ok
// SIG undefined operator<<(void)

undefined8 operator<<(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1419e0b60();
  uVar1 = FUN_1419e0b60(uVar1,param_2 + 4);
  uVar1 = FUN_1419e0b60(uVar1,param_2 + 8);
  uVar1 = FUN_1419e0b60(uVar1,param_2 + 0xc);
  uVar1 = FUN_1419e0b60(uVar1,param_2 + 0x10);
  FUN_1419e0b60(uVar1,param_2 + 0x14);
  return param_1;
}



// FUNCTION 141b28fa0 operator<< body=153 status=ok
// SIG undefined operator<<(void)

undefined8 operator<<(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1419e0a40();
  uVar1 = FUN_1419e0b60(param_1,param_2 + 6);
  FUN_1419e0b60(uVar1,param_2 + 10);
  uVar1 = FUN_1419e0b60(param_1,param_2 + 0xe);
  FUN_1419e0b60(uVar1,param_2 + 0x12);
  uVar1 = FUN_1419e0b60(param_1,param_2 + 0x16);
  FUN_1419e0b60(uVar1,param_2 + 0x1a);
  uVar1 = FUN_1419e0b60(param_1,param_2 + 0x1e);
  FUN_1419e0b60(uVar1,param_2 + 0x22);
  return param_1;
}



// FUNCTION 141b29040 FUN_141b29040 body=202 status=ok
// SIG undefined FUN_141b29040(void)

void FUN_141b29040(undefined8 param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_141ace450(param_2 + 0x80);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_2 + 0x90);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_2 + 0x88);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_2 + 0x80);
    FUN_141ace450(param_2 + 0x58);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_2 + 0x68);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_2 + 0x60);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_2 + 0x58);
    FUN_141ace450(param_2 + 0x30);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_2 + 0x40);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_2 + 0x38);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_2 + 0x30);
    FUN_141ace450(param_2 + 8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_2 + 0x18);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_2 + 0x10);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_2 + 8);
    FMemory::operator_delete(param_2,0xb0);
  }
  return;
}



// FUNCTION 141b29110 FUN_141b29110 body=282 status=ok
// SIG undefined FUN_141b29110(void)

longlong FUN_141b29110(longlong param_1,ulonglong param_2)

{
  FUN_141ace450(param_1 + 0xe0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xf0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xe8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xe0);
  FUN_141ace450(param_1 + 0xb8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 200);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xc0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xb8);
  FUN_141ace450(param_1 + 0x90);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xa0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x98);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x90);
  FUN_141ace450(param_1 + 0x68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x78);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x70);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x68);
  FUN_141ace450(param_1 + 0x38);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x48);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x40);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x38);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 141b29230 FUN_141b29230 body=130 status=ok
// SIG undefined FUN_141b29230(void)

longlong FUN_141b29230(longlong param_1,ulonglong param_2)

{
  FUN_141ace450(param_1 + 0x30);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x40);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x38);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x30);
  FUN_141ace450(param_1 + 8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x18);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x10);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 8);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 141b292c0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144de0438;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141b29310 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144de0378;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141b29360 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144de03f8;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141b293b0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144de02f8;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141b29400 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144de0238;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141b29450 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144de0338;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141b294a0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144de0478;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141b294f0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144de04b8;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141b29540 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144de03b8;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141b29590 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144de02b8;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141b295e0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144de0278;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141b29630 FUN_141b29630 body=330 status=ok
// SIG undefined FUN_141b29630(void)

longlong FUN_141b29630(longlong param_1,ulonglong param_2)

{
  FUN_141ace450(param_1 + 0xf8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x108);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x100);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xf8);
  FUN_141ace450(param_1 + 0xd0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xe0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xd8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xd0);
  FUN_141ace450(param_1 + 0xa8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xb8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xb0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xa8);
  FUN_141ace450(param_1 + 0x80);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x90);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x88);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x80);
  FUN_141ace450(param_1 + 0x58);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x60);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x58);
  FUN_141ace450(param_1 + 0x30);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x40);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x38);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x30);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x130);
  }
  return param_1;
}



// FUNCTION 141b29780 FUN_141b29780 body=161 status=ok
// SIG undefined FUN_141b29780(void)

void FUN_141b29780(char *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (*(char *)(lVar1 + 0x11) == '\0') {
    if (DAT_146ab62f3 != '\0') {
      (**(code **)(*DAT_146ab6358 + 0x688))(DAT_146ab6358,lVar1);
    }
    *(undefined1 *)(lVar1 + 0x11) = 1;
  }
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar1 + 0x11) == '\0') {
    if (DAT_146ab62f3 != '\0') {
      (**(code **)(*DAT_146ab6358 + 0x688))(DAT_146ab6358,lVar1);
    }
    *(undefined1 *)(lVar1 + 0x11) = 1;
  }
  if ((*param_1 != '\0') && (lVar1 = *(longlong *)(param_1 + 0xa8), *(char *)(lVar1 + 0x11) == '\0')
     ) {
    if (DAT_146ab62f3 != '\0') {
      (**(code **)(*DAT_146ab6358 + 0x688))(DAT_146ab6358,lVar1);
    }
    *(undefined1 *)(lVar1 + 0x11) = 1;
  }
  return;
}



// FUNCTION 141b29830 AddPrimitive body=394 status=ok
// SIG undefined AddPrimitive(void)

void FSurfelBufferAllocator::AddPrimitive
               (int *param_1,undefined8 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined8 *_Dst;
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int local_res8;
  int iStackX_c;
  undefined8 local_res10;
  int local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  undefined8 *local_48;
  int *local_40;
  
  uVar6 = 0;
  iVar10 = param_4 * param_5;
  uVar9 = 0xffffffffffffffff;
  uVar11 = uVar9;
  if (0 < param_1[0x18]) {
    uVar8 = uVar6;
    do {
      iVar5 = *(int *)(*(longlong *)(param_1 + 0x16) + 4 + uVar8 * 8);
      if ((iVar10 <= iVar5) &&
         ((uVar9 == 0xffffffffffffffff ||
          (iVar5 < *(int *)(*(longlong *)(param_1 + 0x16) + 4 + uVar9 * 8))))) {
        uVar9 = uVar8;
        uVar11 = uVar6;
      }
      uVar4 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar4;
      uVar8 = uVar8 + 1;
    } while ((int)uVar4 < param_1[0x18]);
  }
  iVar5 = (int)uVar11;
  local_res10 = param_2;
  local_54 = param_3;
  local_50 = param_4;
  if (iVar5 != -1) {
    lVar1 = *(longlong *)(param_1 + 0x16);
    uVar2 = *(undefined8 *)(lVar1 + (longlong)iVar5 * 8);
    _Dst = (undefined8 *)(lVar1 + (longlong)iVar5 * 8);
    iVar7 = (int)((ulonglong)uVar2 >> 0x20);
    iVar3 = (int)uVar2;
    if (iVar7 == iVar10) {
      iVar10 = param_1[0x18];
      iVar5 = (iVar10 - iVar5) + -1;
      if (0 < iVar5) {
        iVar5 = 1;
      }
      if (iVar5 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  (_Dst,(void *)(lVar1 + (longlong)(iVar10 - iVar5) * 8),(longlong)iVar5 << 3);
        iVar10 = param_1[0x18];
      }
      param_1[0x18] = iVar10 + -1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x16);
    }
    else {
      local_res8 = iVar3 + iVar10;
      iStackX_c = iVar7 - iVar10;
      *_Dst = CONCAT44(iStackX_c,local_res8);
    }
    local_48 = &local_res10;
    local_40 = &local_58;
    local_4c = param_5;
    local_58 = iVar3;
    FUN_1416e09d0(param_1 + 2,&local_res8,&local_48,0);
    return;
  }
  local_58 = *param_1;
  local_48 = &local_res10;
  local_40 = &local_58;
  local_4c = param_5;
  FUN_1416e09d0(param_1 + 2,&local_res8,&local_48,0);
  *param_1 = *param_1 + iVar10;
  return;
}



// FUNCTION 141b299c0 FUN_141b299c0 body=268 status=ok
// SIG undefined FUN_141b299c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b299c0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined2 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  wchar_t *local_38;
  undefined2 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if (*param_2 == 0) {
    FUN_141b08510(&local_88);
    local_68 = DAT_146ab6938;
    local_64 = local_88;
    local_60 = local_84;
    local_58 = 1;
    local_50 = 1;
    local_48 = param_5;
    local_98 = 0;
    local_a0 = 1;
    local_38 = L"UnknownTexture2D";
    local_78 = _DAT_146ab6928;
    uStack_74 = uRam0000000146ab692c;
    uStack_70 = uRam0000000146ab6930;
    uStack_6c = uRam0000000146ab6934;
    local_5c = 0;
    local_54 = 0x10000;
    local_44 = 0x10001;
    local_40 = 0;
    local_30 = 0;
    local_a8 = param_3;
    local_4c = param_4;
    FUN_141ce20b0(&PTR_PTR_1464c2560,param_1,&local_78,param_2);
  }
  return;
}



// FUNCTION 141b29ad0 FUN_141b29ad0 body=1225 status=ok
// SIG undefined FUN_141b29ad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b29ad0(longlong param_1,longlong param_2,undefined8 param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined *puVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  ulonglong *puVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  int iVar18;
  undefined1 auStack_198 [32];
  float local_178;
  float local_170;
  float local_168;
  float local_160;
  float local_158;
  undefined8 local_150;
  undefined8 local_148;
  longlong local_140;
  undefined4 local_138;
  undefined4 local_130;
  ulonglong local_128;
  undefined8 local_120;
  undefined *local_118;
  undefined4 local_110;
  undefined8 local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  ulonglong local_bc;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  bVar7 = false;
  local_128 = local_128 & 0xffffffff00000000;
  lVar9 = FSceneRenderTargets::Get();
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 0x26;
  local_b4 = 0;
  local_ac = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_64 = 0;
  local_5c = 0;
  local_54 = 0;
  local_120 = lVar9;
  uStack_d0 = FUN_140985530();
  local_d8 = FUN_141b33540();
  local_c8 = FUN_1409853f0();
  FUN_141ed6ac0(param_1,&local_108,2,1);
  local_178 = (float)((uint)local_178 & 0xffffff00);
  FUN_141cdf000(lVar9,param_1,param_2,param_3);
  uVar2 = *(undefined4 *)(param_2 + 0x1aac);
  uVar3 = *(undefined4 *)(param_2 + 0x1aa8);
  puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar4 = *(undefined4 *)(param_2 + 0x1aa4);
  local_128 = CONCAT44(local_128._4_4_,*(undefined4 *)(param_2 + 0x1aa0));
  puVar13 = puVar15 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar15 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar15;
  *(undefined8 **)(param_1 + 8) = puVar15 + 1;
  puVar15[1] = 0;
  *puVar15 = &PTR_LAB_143f59420;
  *(undefined4 *)((longlong)puVar15 + 0x14) = uVar4;
  plVar10 = (longlong *)0x0;
  *(int *)(puVar15 + 2) = (int)local_128;
  *(undefined4 *)(puVar15 + 3) = 0;
  *(undefined4 *)((longlong)puVar15 + 0x1c) = uVar3;
  *(undefined4 *)(puVar15 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar15 + 0x24) = 0x3f800000;
  lVar9 = *(longlong *)(param_2 + 0x3090);
  local_118 = &DAT_146b09c50;
  local_110 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar9 + 0x38,&local_128,&local_118);
  plVar16 = plVar10;
  if ((int)local_128 != -1) {
    plVar16 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar9 + 0x38));
  }
  local_110 = 0;
  plVar17 = plVar16 + 2;
  if (plVar16 == (longlong *)0x0) {
    plVar17 = plVar10;
  }
  local_118 = &DAT_146a18530;
  lVar5 = *plVar17;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar9 + 0x38,&local_128,&local_118);
  plVar16 = plVar10;
  if ((int)local_128 != -1) {
    plVar16 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar9 + 0x38));
  }
  plVar17 = plVar16 + 2;
  if (plVar16 == (longlong *)0x0) {
    plVar17 = plVar10;
  }
  lVar9 = *plVar17;
  local_108 = DAT_1464c2720;
  if (lVar5 == 0) {
    local_128 = 0;
    bVar7 = true;
  }
  else {
    lVar6 = *(longlong *)(lVar5 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar10 = *(longlong **)(lVar6 + 0x38);
  }
  uVar11 = 0;
  plStack_100 = plVar10;
  if (bVar7) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  bVar7 = false;
  if (lVar9 == 0) {
    bVar7 = true;
    local_128 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar9 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    uVar11 = *(undefined8 *)(lVar6 + 0x40);
  }
  local_e8 = uVar11;
  if (bVar7) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  local_bc = local_bc & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_108,2,1);
  puVar12 = (ulonglong *)FUN_141ce4ee0(local_120);
  lVar6 = *(longlong *)(lVar9 + 0x48);
  if (*(char *)(lVar6 + 0x28) == '\0') {
    FUN_1419f3850(lVar6);
  }
  local_128 = *puVar12;
  uVar11 = *(undefined8 *)(lVar6 + 0x40);
  local_118 = (undefined *)FUN_141b33b80();
  if (*(short *)(lVar9 + 0xc2) != 0) {
    uVar1 = *(ushort *)(lVar9 + 0xc0);
    puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar15 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar15 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar13;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar15;
    *(undefined8 **)(param_1 + 8) = puVar15 + 1;
    puVar15[1] = 0;
    *puVar15 = &PTR_LAB_143f59c80;
    *(uint *)(puVar15 + 3) = (uint)uVar1;
    puVar15[4] = local_128;
    puVar15[2] = uVar11;
  }
  puVar8 = local_118;
  if (*(short *)(lVar9 + 0xc6) != 0) {
    uVar1 = *(ushort *)(lVar9 + 0xc4);
    puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar15 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30);
      puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar15 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar13;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar15;
    *(undefined8 **)(param_1 + 8) = puVar15 + 1;
    puVar15[1] = 0;
    *puVar15 = &PTR_LAB_143f59c70;
    puVar15[2] = uVar11;
    *(uint *)(puVar15 + 3) = (uint)uVar1;
    puVar15[4] = puVar8;
  }
  iVar14 = *(int *)(param_2 + 0x1aac) - *(int *)(param_2 + 0x1aa4);
  local_130 = 1;
  iVar18 = *(int *)(param_2 + 0x1aa8) - *(int *)(param_2 + 0x1aa0);
  local_138 = 1;
  local_148 = *(undefined8 *)(local_120 + 0x378);
  local_178 = (float)iVar14;
  local_120 = CONCAT44(iVar14,iVar18);
  local_150 = local_120;
  local_160 = (float)iVar18;
  local_170 = (float)*(int *)(param_2 + 0x1aa0);
  local_168 = (float)*(int *)(param_2 + 0x1aa4);
  local_158 = local_178;
  local_140 = lVar5;
  DrawRectangle(param_1);
  return;
}



// FUNCTION 141b29fa0 FUN_141b29fa0 body=340 status=ok
// SIG undefined FUN_141b29fa0(void)

void FUN_141b29fa0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int local_res18 [4];
  undefined *local_28;
  undefined4 local_20;
  
  if (((*(int *)(DAT_146a18360 + 4) != 0) && (*(longlong *)(param_2 + 0x30) != 0)) &&
     (*(char *)(*(longlong *)(param_2 + 0x30) + 0xe9) != '\0')) {
    FUN_141b570f0(param_1,param_2,3);
    uVar2 = FSceneRenderTargets::Get(param_1);
    lVar1 = *(longlong *)(param_2 + 0x3090);
    puVar5 = (undefined8 *)0x0;
    local_28 = &DAT_146a17ef0;
    local_20 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,local_res18,&local_28);
    puVar3 = puVar5;
    if (local_res18[0] != -1) {
      puVar3 = (undefined8 *)((longlong)local_res18[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    puVar4 = puVar3 + 2;
    if (puVar3 == (undefined8 *)0x0) {
      puVar4 = puVar5;
    }
    FUN_141b2fff0(*puVar4,param_1,param_2,uVar2);
    uVar2 = FSceneRenderTargets::Get(param_1);
    lVar1 = *(longlong *)(param_2 + 0x3090);
    local_20 = 0;
    local_28 = &DAT_146a17da0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,local_res18,&local_28);
    puVar3 = puVar5;
    if (local_res18[0] != -1) {
      puVar3 = (undefined8 *)((longlong)local_res18[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    puVar4 = puVar3 + 2;
    if (puVar3 == (undefined8 *)0x0) {
      puVar4 = puVar5;
    }
    FUN_141b2fbe0(*puVar4,param_1,param_2,uVar2);
    FUN_141b63bb0(param_1,param_2,3);
  }
  return;
}



// FUNCTION 141b2a100 FUN_141b2a100 body=1323 status=ok
// SIG undefined FUN_141b2a100(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b2a100(longlong param_1,undefined8 param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  ulonglong uVar5;
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
  char cVar22;
  undefined4 uVar23;
  uint uVar24;
  longlong lVar25;
  int iVar26;
  int iVar27;
  undefined1 auStack_1b8 [32];
  wchar_t *local_198;
  undefined *local_190;
  undefined8 *local_188;
  undefined4 local_180;
  longlong local_178;
  undefined8 local_168;
  ulonglong uStack_160;
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
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined2 local_f0;
  undefined4 local_ec;
  float local_e8;
  undefined4 uStack_e4;
  uint uStack_e0;
  undefined4 uStack_dc;
  wchar_t *local_d8;
  undefined2 local_d0;
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  iVar27 = *(int *)(param_3 + 0x1a38);
  uVar23 = FUN_14274f980(param_3);
  if (DAT_1464c19f8 == 0) {
    return;
  }
  if (DAT_1464c19fc < 0) {
    return;
  }
  iVar26 = 2;
  if (DAT_1464c19fc < 2) {
    iVar26 = DAT_1464c19fc;
  }
  if (iVar26 < 1) {
    return;
  }
  if (iVar27 < 3) {
    return;
  }
  cVar22 = FUN_141b30a50(uVar23);
  if (cVar22 == '\0') {
    return;
  }
  if ((*(uint *)(*(longlong *)(param_3 + 0x10) + 0x28) & 0x20000000) == 0) {
    return;
  }
  if (DAT_146532078 == 0) {
    return;
  }
  if (*(int *)(*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x20) + 0x15f0) < 1) {
    return;
  }
  FUN_141a19150(param_2,0,0,0);
  uVar23 = 0;
  local_168 = 0;
  uStack_160 = 0;
  if ((*(uint *)(param_1 + 0x560) & 0x10) == 0) {
    if ((*(uint *)(param_1 + 0x560) & 0x20) != 0) {
      local_168 = *(undefined8 *)(param_1 + 0x3a4);
      uStack_160 = *(ulonglong *)(param_1 + 0x3ac);
      local_190 = (undefined *)0;
      goto LAB_141b2a29e;
    }
    lVar25 = param_1 + 0x160;
    local_168 = *(undefined8 *)(param_1 + 0x44);
    uVar23 = *(undefined4 *)(param_1 + 0x1d0);
    uStack_160 = (ulonglong)*(uint *)(param_1 + 0x4c);
  }
  else {
    uVar23 = *(undefined4 *)(param_1 + 0x450);
    lVar25 = param_1 + 0x3e0;
  }
  local_190 = (undefined *)*(longlong *)(lVar25 + 0x60);
  if (*(longlong *)(lVar25 + 0x60) == 0) {
    local_190 = (undefined *)lVar25;
  }
LAB_141b2a29e:
  fVar6 = *(float *)(param_1 + 0xa0);
  fVar7 = *(float *)(param_1 + 0xa4);
  fVar8 = *(float *)(param_1 + 0xa8);
  fVar9 = *(float *)(param_1 + 0xac);
  fVar10 = *(float *)(param_1 + 0x90);
  fVar11 = *(float *)(param_1 + 0x94);
  fVar12 = *(float *)(param_1 + 0x98);
  fVar13 = *(float *)(param_1 + 0x9c);
  fVar14 = *(float *)(param_1 + 0xb0);
  fVar15 = *(float *)(param_1 + 0xb4);
  fVar16 = *(float *)(param_1 + 0xb8);
  fVar17 = *(float *)(param_1 + 0xbc);
  fVar18 = *(float *)(param_1 + 0xc0);
  fVar19 = *(float *)(param_1 + 0xc4);
  fVar20 = *(float *)(param_1 + 200);
  fVar21 = *(float *)(param_1 + 0xcc);
  fVar1 = *(float *)(param_1 + 0x44);
  fVar2 = *(float *)(param_1 + 0x48);
  fVar3 = *(float *)(param_1 + 0x4c);
  local_e8 = *(float *)(param_1 + 0x44);
  uStack_e4 = *(undefined4 *)(param_1 + 0x48);
  uStack_e0 = *(uint *)(param_1 + 0x4c);
  local_178 = *(longlong *)(param_1 + 0x5c8) + 0x70;
  local_158 = fVar10 * 1.0 + fVar6 * 0.0 + fVar14 * 0.0 + fVar18 * 0.0;
  fStack_154 = fVar11 * 1.0 + fVar7 * 0.0 + fVar15 * 0.0 + fVar19 * 0.0;
  fStack_150 = fVar12 * 1.0 + fVar8 * 0.0 + fVar16 * 0.0 + fVar20 * 0.0;
  fStack_14c = fVar13 * 1.0 + fVar9 * 0.0 + fVar17 * 0.0 + fVar21 * 0.0;
  uStack_dc = 0x3f800000;
  local_148 = fVar10 * 0.0 + fVar6 * 1.0 + fVar14 * 0.0 + fVar18 * 0.0;
  fStack_144 = fVar11 * 0.0 + fVar7 * 1.0 + fVar15 * 0.0 + fVar19 * 0.0;
  fStack_140 = fVar12 * 0.0 + fVar8 * 1.0 + fVar16 * 0.0 + fVar20 * 0.0;
  fStack_13c = fVar13 * 0.0 + fVar9 * 1.0 + fVar17 * 0.0 + fVar21 * 0.0;
  local_138 = fVar10 * 0.0 + fVar6 * 0.0 + fVar14 * 1.0 + fVar18 * 0.0;
  fStack_134 = fVar11 * 0.0 + fVar7 * 0.0 + fVar15 * 1.0 + fVar19 * 0.0;
  fStack_130 = fVar12 * 0.0 + fVar8 * 0.0 + fVar16 * 1.0 + fVar20 * 0.0;
  fStack_12c = fVar13 * 0.0 + fVar9 * 0.0 + fVar17 * 1.0 + fVar21 * 0.0;
  local_128 = fVar1 * fVar10 + fVar2 * fVar6 + fVar3 * fVar14 + fVar18 * 1.0;
  fStack_124 = fVar1 * fVar11 + fVar2 * fVar7 + fVar3 * fVar15 + fVar19 * 1.0;
  fStack_120 = fVar1 * fVar12 + fVar2 * fVar8 + fVar3 * fVar16 + fVar20 * 1.0;
  fStack_11c = fVar1 * fVar13 + fVar2 * fVar9 + fVar3 * fVar17 + fVar21 * 1.0;
  local_180 = *(undefined4 *)(param_1 + 0x3b0);
  local_188 = &local_168;
  local_198 = (wchar_t *)CONCAT44(local_198._4_4_,uVar23);
  FUN_141b2ea00(param_2,param_3,*(undefined8 *)(*(longlong *)(param_1 + 0x5c8) + 0x30),&local_158);
  uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x5c8) + 0x70);
  local_190 = &DAT_146a17130;
  local_198 = (wchar_t *)uVar4;
  FUN_141b5c2b0(param_3 + 0x3018,param_3,param_2,param_1);
  iVar27 = 2 - (uint)(DAT_146a15384 != 0);
  lVar25 = FSceneRenderTargets::Get();
  local_188 = (undefined8 *)CONCAT71(local_188._1_7_,1);
  local_190 = (undefined *)CONCAT71(local_190._1_7_,1);
  uVar5 = *(ulonglong *)(lVar25 + 0x378);
  local_118 = _DAT_146ab6928;
  uStack_114 = uRam0000000146ab692c;
  uStack_110 = uRam0000000146ab6930;
  uStack_10c = uRam0000000146ab6934;
  local_fc = 0;
  local_f4 = 0x10000;
  local_104 = (undefined4)
              ((longlong)((ulonglong)(uint)((int)uVar5 >> 0x1f) << 0x20 | uVar5 & 0xffffffff) /
              (longlong)iVar27);
  local_108 = DAT_146ab6938;
  local_ec = 0xf;
  local_100 = (undefined4)
              ((longlong)((ulonglong)(uint)((longlong)uVar5 >> 0x3f) << 0x20 | uVar5 >> 0x20) /
              (longlong)iVar27);
  uStack_e4 = 0x10001;
  local_f8 = 1;
  local_f0 = 1;
  local_d8 = L"UnknownTexture2D";
  local_e8 = (float)DAT_146a9da68;
  local_198 = L"RayTracedShadows";
  uStack_e0 = uStack_e0 & 0xffffff00;
  local_d0 = 1;
  FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_118,param_1 + 0x5c0);
  FUN_141a19150(param_2,0,0,0);
  iVar27 = 0;
  if ((-1 < DAT_1464c19fc) && (iVar27 = 2, DAT_1464c19fc < 2)) {
    iVar27 = DAT_1464c19fc;
  }
  uVar24 = *(uint *)(param_1 + 0x560) & 0x10;
  if ((uVar24 == 0) || (DAT_1464c1a00 == 0)) {
    if (uVar24 == 0) {
      if (iVar27 == 1) {
        FUN_141b1df20();
      }
      else {
        FUN_141b1e240(param_2,param_3,param_1,uVar4);
      }
    }
    else if (iVar27 == 1) {
      FUN_141b1d8e0();
    }
    else {
      FUN_141b1dc00();
    }
  }
  else if (iVar27 == 1) {
    FUN_141b1e560();
  }
  else {
    FUN_141b1e880(param_2,param_3,param_1,uVar4);
  }
  return;
}



// FUNCTION 141b2a630 Bind body=161 status=ok
// SIG undefined Bind(void)

void FDistanceFieldCulledObjectBufferParameters::Bind(longlong param_1,undefined8 param_2)

{
  FRWShaderParameter::Bind(param_1,param_2,L"ObjectIndirectArguments");
  FRWShaderParameter::Bind(param_1 + 8,param_2,L"CulledObjectBounds");
  FRWShaderParameter::Bind(param_1 + 0x10,param_2,L"CulledObjectData");
  FRWShaderParameter::Bind(param_1 + 0x18,param_2,L"CulledObjectBoxBounds");
  FShaderResourceParameter::Bind(param_1 + 0x20,param_2,L"DistanceFieldTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x24,param_2,L"DistanceFieldSampler",0);
  FShaderParameter::Bind(param_1 + 0x28,param_2,L"DistanceFieldAtlasTexelSize",0);
  return;
}



// FUNCTION 141b2a6e0 Bind body=239 status=ok
// SIG undefined Bind(void)

void FGeometryAwareUpsampleParameters::Bind(longlong param_1,undefined8 param_2)

{
  FShaderResourceParameter::Bind(param_1,param_2,L"DistanceFieldNormalTexture",0);
  FShaderResourceParameter::Bind(param_1 + 4,param_2,L"DistanceFieldNormalSampler",0);
  FShaderResourceParameter::Bind(param_1 + 8,param_2,L"BentNormalAOTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0xc,param_2,L"BentNormalAOSampler",0);
  FShaderParameter::Bind(param_1 + 0x10,param_2,L"DistanceFieldGBufferTexelSize",0);
  FShaderParameter::Bind(param_1 + 0x16,param_2,L"DistanceFieldGBufferJitterOffset",0);
  FShaderParameter::Bind(param_1 + 0x1c,param_2,L"BentNormalBufferAndTexelSize",0);
  FShaderParameter::Bind(param_1 + 0x22,param_2,L"MinDownsampleFactorToBaseLevel",0);
  FShaderParameter::Bind(param_1 + 0x28,param_2,L"DistanceFadeScale",0);
  FShaderParameter::Bind(param_1 + 0x2e,param_2,L"JitterOffset",0);
  return;
}



// FUNCTION 141b2a7d0 Bind body=305 status=ok
// SIG undefined Bind(void)

void FGlobalDistanceFieldParameters::Bind(longlong param_1,undefined8 param_2)

{
  FShaderResourceParameter::Bind(param_1,param_2,L"GlobalDistanceFieldTexture0",0);
  FShaderResourceParameter::Bind(param_1 + 4,param_2,L"GlobalDistanceFieldTexture1",0);
  FShaderResourceParameter::Bind(param_1 + 8,param_2,L"GlobalDistanceFieldTexture2",0);
  FShaderResourceParameter::Bind(param_1 + 0xc,param_2,L"GlobalDistanceFieldTexture3",0);
  FShaderResourceParameter::Bind(param_1 + 0x10,param_2,L"GlobalDistanceFieldSampler0",0);
  FShaderResourceParameter::Bind(param_1 + 0x14,param_2,L"GlobalDistanceFieldSampler1",0);
  FShaderResourceParameter::Bind(param_1 + 0x18,param_2,L"GlobalDistanceFieldSampler2",0);
  FShaderResourceParameter::Bind(param_1 + 0x1c,param_2,L"GlobalDistanceFieldSampler3",0);
  FShaderParameter::Bind(param_1 + 0x20,param_2,L"GlobalVolumeCenterAndExtent",0);
  FShaderParameter::Bind(param_1 + 0x26,param_2,L"GlobalVolumeWorldToUVAddAndMul",0);
  FShaderParameter::Bind(param_1 + 0x2c,param_2,L"GlobalVolumeDimension",0);
  FShaderParameter::Bind(param_1 + 0x32,param_2,L"GlobalVolumeTexelSize",0);
  FShaderParameter::Bind(param_1 + 0x38,param_2,L"MaxGlobalDistance",0);
  return;
}



// FUNCTION 141b2a910 Bind body=139 status=ok
// SIG undefined Bind(void)

void FLightTileIntersectionParameters::Bind(longlong param_1,undefined8 param_2)

{
  FRWShaderParameter::Bind(param_1,param_2,L"ShadowTileNumCulledObjects");
  FRWShaderParameter::Bind(param_1 + 8,param_2,L"ShadowTileStartOffsets");
  FRWShaderParameter::Bind(param_1 + 0x10,param_2,L"NextStartOffset");
  FRWShaderParameter::Bind(param_1 + 0x18,param_2,L"ShadowTileArrayData");
  FShaderParameter::Bind(param_1 + 0x20,param_2,L"ShadowTileListGroupSize",0);
  FShaderParameter::Bind(param_1 + 0x26,param_2,L"ShadowAverageObjectsPerTile",0);
  return;
}



// FUNCTION 141b2a9a0 Bind body=129 status=ok
// SIG undefined Bind(void)

void FScreenGridParameters::Bind(longlong param_1,undefined8 param_2)

{
  FShaderParameter::Bind(param_1,param_2,L"BaseLevelTexelSize",0);
  FShaderParameter::Bind(param_1 + 6,param_2,L"JitterOffset",0);
  FShaderParameter::Bind(param_1 + 0xc,param_2,L"ScreenGridConeVisibilitySize",0);
  FShaderResourceParameter::Bind(param_1 + 0x12,param_2,L"DistanceFieldNormalTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x16,param_2,L"DistanceFieldNormalSampler",0);
  return;
}



// FUNCTION 141b2aa30 Bind body=117 status=ok
// SIG undefined Bind(void)

void FTileIntersectionParameters::Bind(longlong param_1,undefined8 param_2)

{
  FShaderParameter::Bind(param_1,param_2,L"TileListGroupSize",0);
  FRWShaderParameter::Bind(param_1 + 6,param_2,L"NumCulledTilesArray");
  FRWShaderParameter::Bind(param_1 + 0xe,param_2,L"CulledTilesStartOffsetArray");
  FRWShaderParameter::Bind(param_1 + 0x16,param_2,L"CulledTileDataArray");
  FRWShaderParameter::Bind(param_1 + 0x1e,param_2,L"ObjectTilesIndirectArguments");
  return;
}



// FUNCTION 141b2aab0 FUN_141b2aab0 body=2374 status=ok
// SIG undefined FUN_141b2aab0(void)

void FUN_141b2aab0(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  int local_a8;
  int local_a4;
  int local_a0 [2];
  int local_98;
  int iStack_94;
  longlong *local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined4 local_58;
  undefined *local_50;
  undefined4 local_48;
  
  FUN_141a19150(param_1,0,0,0);
  local_a8 = 0;
  if (0 < (int)param_3[1]) {
    local_88 = 0;
    do {
      lVar16 = *param_3 + local_88;
      iVar5 = (*(int *)(lVar16 + 0x1aac) - *(int *)(lVar16 + 0x1aa4)) / 2;
      iVar6 = (*(int *)(lVar16 + 0x1aa8) - *(int *)(lVar16 + 0x1aa0)) / 2;
      iVar7 = 1;
      if (0 < iVar6) {
        iVar7 = iVar6;
      }
      uVar8 = (longlong)(DAT_1464c1790 + -1 + iVar7) / (longlong)DAT_1464c1790;
      iVar6 = (int)uVar8;
      iVar7 = 1;
      if (0 < iVar5) {
        iVar7 = iVar5;
      }
      plVar14 = (longlong *)(*(longlong *)(lVar16 + 0x18) + 0x13d0);
      lVar2 = (longlong)(iVar7 + -1 + DAT_1464c1794);
      uVar3 = lVar2 / (longlong)DAT_1464c1794;
      plVar11 = (longlong *)*plVar14;
      iVar7 = (int)uVar3;
      local_98 = iVar6;
      iStack_94 = iVar7;
      local_90 = plVar14;
      if (plVar11 == (longlong *)0x0) {
        puVar13 = (undefined8 *)operator_new(0x130,lVar2 % (longlong)DAT_1464c1794 & 0xffffffff);
        if (puVar13 != (undefined8 *)0x0) {
          if (((uint)(&DAT_1464c9c48)[*(int *)(lVar16 + 0x1a38)] < 0x1c) &&
             ((0x8c51800U >> ((&DAT_1464c9c48)[*(int *)(lVar16 + 0x1a38)] & 0x1f) & 1) != 0)) {
            uVar4 = 0;
          }
          else {
            uVar4 = 1;
          }
          *(undefined4 *)(puVar13 + 1) = 4;
          puVar13[2] = 0;
          puVar13[3] = 0;
          *(undefined1 *)(puVar13 + 5) = 0;
          *puVar13 = &PTR_FUN_144de0198;
          puVar13[6] = 0;
          puVar13[7] = 0;
          puVar13[8] = 0;
          *(undefined4 *)(puVar13 + 9) = 0;
          puVar13[10] = 0;
          puVar13[0xb] = 0;
          puVar13[0xc] = 0;
          puVar13[0xd] = 0;
          *(undefined4 *)(puVar13 + 0xe) = 0;
          puVar13[0xf] = 0;
          puVar13[0x10] = 0;
          puVar13[0x11] = 0;
          puVar13[0x12] = 0;
          *(undefined4 *)(puVar13 + 0x13) = 0;
          puVar13[0x14] = 0;
          puVar13[0x15] = 0;
          puVar13[0x16] = 0;
          puVar13[0x17] = 0;
          *(undefined4 *)(puVar13 + 0x18) = 0;
          puVar13[0x19] = 0;
          puVar13[0x1a] = 0;
          puVar13[0x1b] = 0;
          puVar13[0x1c] = 0;
          *(undefined4 *)(puVar13 + 0x1d) = 0;
          puVar13[0x1e] = 0;
          puVar13[0x1f] = 0;
          puVar13[0x20] = 0;
          puVar13[0x21] = 0;
          *(undefined4 *)(puVar13 + 0x22) = 0;
          puVar13[0x23] = 0;
          *(undefined4 *)(puVar13 + 0x25) = 0;
          *(undefined1 *)((longlong)puVar13 + 300) = uVar4;
        }
        *plVar14 = (longlong)puVar13;
LAB_141b2ad14:
        uVar18 = *(undefined4 *)(param_2 + 0x15f0);
        *(int *)(puVar13 + 0x24) = iVar6;
        *(int *)((longlong)puVar13 + 0x124) = iVar7;
        *(undefined4 *)(puVar13 + 0x25) = uVar18;
        (**(code **)(*(longlong *)*plVar14 + 0x28))();
        plVar11 = (longlong *)*plVar14;
      }
      else if (((((char)plVar11[5] == '\0') || (iVar6 != (int)plVar11[0x24])) ||
               (iVar7 != *(int *)((longlong)plVar11 + 0x124))) ||
              (((int)plVar11[0x25] < *(int *)(param_2 + 0x15f0) || (DAT_146a9dad4 != '\0')))) {
        (**(code **)(*plVar11 + 0x30))(plVar11);
        puVar13 = (undefined8 *)*plVar14;
        goto LAB_141b2ad14;
      }
      lVar2 = plVar11[6];
      if (*(char *)(lVar2 + 0x11) == '\0') {
        if (DAT_146ab62f3 != '\0') {
          (**(code **)(*DAT_146ab6358 + 0x690))(DAT_146ab6358,lVar2);
        }
        *(undefined1 *)(lVar2 + 0x11) = 1;
      }
      lVar2 = plVar11[0xb];
      if (*(char *)(lVar2 + 0x11) == '\0') {
        if (DAT_146ab62f3 != '\0') {
          (**(code **)(*DAT_146ab6358 + 0x690))(DAT_146ab6358,lVar2);
        }
        *(undefined1 *)(lVar2 + 0x11) = 1;
      }
      lVar2 = plVar11[0x10];
      if (*(char *)(lVar2 + 0x11) == '\0') {
        if (DAT_146ab62f3 != '\0') {
          (**(code **)(*DAT_146ab6358 + 0x690))(DAT_146ab6358,lVar2);
        }
        *(undefined1 *)(lVar2 + 0x11) = 1;
      }
      lVar2 = plVar11[0x15];
      if (*(char *)(lVar2 + 0x11) == '\0') {
        if (DAT_146ab62f3 != '\0') {
          (**(code **)(*DAT_146ab6358 + 0x690))(DAT_146ab6358,lVar2);
        }
        *(undefined1 *)(lVar2 + 0x11) = 1;
      }
      lVar2 = plVar11[0x1a];
      if (*(char *)(lVar2 + 0x11) == '\0') {
        if (DAT_146ab62f3 != '\0') {
          (**(code **)(*DAT_146ab6358 + 0x690))(DAT_146ab6358,lVar2);
        }
        *(undefined1 *)(lVar2 + 0x11) = 1;
      }
      if (DAT_1464c1a28 != 0) {
        lVar2 = *(longlong *)(lVar16 + 0x3090);
        local_60 = &DAT_146a16610;
        local_58 = 0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(lVar2 + 0x38,&local_a4,&local_60);
        plVar11 = (longlong *)0x0;
        if (local_a4 != -1) {
          plVar11 = (longlong *)((longlong)local_a4 * 0x20 + *(longlong *)(lVar2 + 0x38));
        }
        plVar14 = plVar11 + 2;
        if (plVar11 == (longlong *)0x0) {
          plVar14 = (longlong *)0x0;
        }
        lVar2 = *plVar14;
        lVar15 = *(longlong *)(lVar2 + 0x48);
        if (*(char *)(lVar15 + 0x28) == '\0') {
          FUN_1419f3850(lVar15);
        }
        uVar17 = *(undefined8 *)(lVar15 + 0x60);
        FRHIComputeShader::UpdateStats(uVar17);
        puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar13 = puVar9 + 3;
        if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
          FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
          puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar13 = puVar9 + 3;
        }
        *(undefined8 **)(param_1 + 0x30) = puVar13;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar9;
        *(undefined8 **)(param_1 + 8) = puVar9 + 1;
        puVar9[1] = 0;
        *puVar9 = &PTR_LAB_144d91e50;
        puVar9[2] = uVar17;
        lVar15 = param_2;
        FUN_141b428c0(lVar2,param_1,lVar16,param_4,param_2,CONCAT44((float)iVar7,(float)iVar6),
                      param_5);
        uVar17 = CONCAT44((int)((ulonglong)lVar15 >> 0x20),1);
        DispatchComputeShader(param_1,lVar2,uVar8 & 0xffffffff,uVar3 & 0xffffffff,uVar17);
        uVar18 = (undefined4)((ulonglong)uVar17 >> 0x20);
        lVar15 = *(longlong *)(lVar2 + 0x48);
        if (*(char *)(lVar15 + 0x28) == '\0') {
          FUN_1419f3850(lVar15);
        }
        FRWShaderParameter::UnsetUAV<FRHICommandList>
                  (lVar2 + 0xee,param_1,*(undefined8 *)(lVar15 + 0x60));
        lVar15 = *(longlong *)(lVar2 + 0x48);
        if (*(char *)(lVar15 + 0x28) == '\0') {
          FUN_1419f3850(lVar15);
        }
        FRWShaderParameter::UnsetUAV<FRHICommandList>
                  (lVar2 + 0xf6,param_1,*(undefined8 *)(lVar15 + 0x60));
        puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        lVar2 = *(longlong *)(*(longlong *)(lVar16 + 0x18) + 0x13d0);
        local_70 = *(undefined8 *)(lVar2 + 0x38);
        local_68 = *(undefined8 *)(lVar2 + 0x60);
        puVar13 = puVar9 + 2;
        if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
          FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x18);
          puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar13 = puVar9 + 2;
        }
        *(undefined8 **)(param_1 + 0x30) = puVar13;
        *puVar9 = local_70;
        puVar9[1] = local_68;
        puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar13 = puVar10 + 6;
        if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
          FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
          puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar13 = puVar10 + 6;
        }
        plVar11 = local_90;
        *(undefined8 **)(param_1 + 0x30) = puVar13;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar10;
        *(undefined8 **)(param_1 + 8) = puVar10 + 1;
        puVar10[3] = puVar9;
        puVar10[1] = 0;
        *puVar10 = &PTR_LAB_144d91e60;
        *(undefined4 *)(puVar10 + 2) = 2;
        *(undefined4 *)(puVar10 + 4) = 0;
        *(undefined4 *)((longlong)puVar10 + 0x24) = 3;
        puVar10[5] = 0;
        ClearUAV(param_1,*local_90 + 0x80,0);
        FUN_141b20220(param_1,lVar16,CONCAT44(iVar7,iVar6),param_5);
        ClearUAV(param_1,*plVar11 + 0xf8,0);
        lVar2 = *(longlong *)(lVar16 + 0x3090);
        local_50 = &DAT_146a168b0;
        local_48 = 0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(lVar2 + 0x38,local_a0,&local_50);
        plVar11 = (longlong *)0x0;
        if (local_a0[0] != -1) {
          plVar11 = (longlong *)((longlong)local_a0[0] * 0x20 + *(longlong *)(lVar2 + 0x38));
        }
        plVar14 = plVar11 + 2;
        if (plVar11 == (longlong *)0x0) {
          plVar14 = (longlong *)0x0;
        }
        iVar5 = *(int *)(param_2 + 0x15f0);
        lVar2 = *plVar14;
        lVar15 = *(longlong *)(lVar2 + 0x48);
        if (*(char *)(lVar15 + 0x28) == '\0') {
          FUN_1419f3850(lVar15);
        }
        uVar17 = *(undefined8 *)(lVar15 + 0x60);
        FRHIComputeShader::UpdateStats(uVar17);
        puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar13 = puVar9 + 3;
        if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
          FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
          puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar13 = puVar9 + 3;
        }
        *(undefined8 **)(param_1 + 0x30) = puVar13;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar9;
        *(undefined8 **)(param_1 + 8) = puVar9 + 1;
        puVar9[1] = 0;
        *puVar9 = &PTR_LAB_144d91e50;
        puVar9[2] = uVar17;
        FUN_141b43750(lVar2,param_1,lVar16);
        DispatchComputeShader(param_1,lVar2,iVar5 + 0x3fU >> 6,1,CONCAT44(uVar18,1));
        lVar15 = *(longlong *)(lVar2 + 0x48);
        uVar17 = *(undefined8 *)(*(longlong *)(lVar16 + 0x18) + 0x13d0);
        if (*(char *)(lVar15 + 0x28) == '\0') {
          FUN_1419f3850(lVar15);
        }
        uVar1 = *(undefined8 *)(lVar15 + 0x60);
        FRWShaderParameter::UnsetUAV<FRHICommandList>(lVar2 + 0xf4,param_1,uVar1);
        FRWShaderParameter::UnsetUAV<FRHICommandList>(lVar2 + 0xfc,param_1,uVar1);
        FRWShaderParameter::UnsetUAV<FRHICommandList>(lVar2 + 0x104,param_1,uVar1);
        FRWShaderParameter::UnsetUAV<FRHICommandList>(lVar2 + 0x10c,param_1,uVar1);
        local_80 = 0;
        local_78 = 0;
        FUN_141b34050(lVar2 + 0xee,uVar17,&local_80);
        lVar2 = local_80;
        iVar5 = (int)local_78;
        lVar15 = (longlong)(int)local_78;
        puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        iVar12 = (int)local_78 * 8;
        uVar8 = (longlong)puVar13 + (longlong)iVar12;
        if (*(ulonglong *)(param_1 + 0x38) < uVar8) {
          FMemStackBase::AllocateNewChunk(param_1 + 0x30,iVar12 + 8);
          puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
          uVar8 = (longlong)puVar13 + (longlong)iVar12;
        }
        *(ulonglong *)(param_1 + 0x30) = uVar8;
        if (0 < iVar5) {
          puVar9 = puVar13;
          do {
            *puVar9 = *(undefined8 *)((lVar2 - (longlong)puVar13) + (longlong)puVar9);
            puVar9 = puVar9 + 1;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
        puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar9 = puVar10 + 6;
        if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
          FMemStackBase::AllocateNewChunk(param_1 + 0x30);
          puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar9 = puVar10 + 6;
        }
        *(undefined8 **)(param_1 + 0x30) = puVar9;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar10;
        *(undefined8 **)(param_1 + 8) = puVar10 + 1;
        puVar10[1] = 0;
        *puVar10 = &PTR_LAB_144d91e60;
        *(int *)(puVar10 + 2) = iVar5;
        puVar10[3] = puVar13;
        *(undefined4 *)(puVar10 + 4) = 0;
        *(undefined4 *)((longlong)puVar10 + 0x24) = 3;
        puVar10[5] = 0;
        if (lVar2 != 0) {
          FMemory::Free(lVar2);
        }
        ClearUAV(param_1,*local_90 + 0x80,0);
        FUN_141b20d30(param_1,lVar16,CONCAT44(iVar7,iVar6),param_5);
      }
      local_a8 = local_a8 + 1;
      local_88 = local_88 + 0x30d0;
    } while (local_a8 < (int)param_3[1]);
  }
  return;
}



// FUNCTION 141b2b400 FUN_141b2b400 body=512 status=ok
// SIG undefined FUN_141b2b400(void)

void FUN_141b2b400(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  ulonglong uVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  longlong local_68;
  ulonglong local_60;
  int local_58;
  
  if ((int)param_1[1] < 2) {
    return;
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = -1;
  uVar4 = ACharacter::GetPrivateStaticClass();
  FUN_1417a5560(uVar4,&local_68,1,0x10,0);
  uVar6 = local_60 & 0xffffffff;
  do {
    local_58 = local_58 + 1;
    lVar7 = local_68;
    if ((int)local_60 <= local_58) break;
  } while (*(longlong *)(local_68 + (longlong)local_58 * 8) == 0);
  do {
    if ((local_58 < 0) || ((int)uVar6 <= local_58)) {
      if (lVar7 == 0) {
        return;
      }
      FMemory::Free(lVar7);
      return;
    }
    lVar1 = *(longlong *)(lVar7 + (longlong)local_58 * 8);
    if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x640), lVar1 != 0)) {
      if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = *(wchar_t **)*param_1;
      }
      dVar8 = _wtof(pwVar5);
      if (*(int *)(*param_1 + 0x18) == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = *(wchar_t **)(*param_1 + 0x10);
      }
      dVar9 = _wtof(pwVar5);
      iVar2 = (int)param_1[1];
      fVar11 = 1.0;
      if (2 < iVar2) {
        if (*(int *)(*param_1 + 0x28) == 0) {
          pwVar5 = L"";
        }
        else {
          pwVar5 = *(wchar_t **)(*param_1 + 0x20);
        }
        dVar10 = _wtof(pwVar5);
        iVar2 = (int)param_1[1];
        fVar11 = (float)dVar10;
      }
      iVar3 = 0;
      if (3 < iVar2) {
        if (*(int *)(*param_1 + 0x38) == 0) {
          pwVar5 = L"";
        }
        else {
          pwVar5 = *(wchar_t **)(*param_1 + 0x30);
        }
        iVar3 = _wtoi(pwVar5);
      }
      FUN_142490530(lVar1 + 0x3c0,(float)dVar8,(float)dVar9,fVar11,iVar3);
      uVar6 = local_60 & 0xffffffff;
      lVar7 = local_68;
    }
    do {
      local_58 = local_58 + 1;
      if ((int)uVar6 <= local_58) break;
    } while (*(longlong *)(lVar7 + (longlong)local_58 * 8) == 0);
  } while( true );
}



// FUNCTION 141b2b600 FUN_141b2b600 body=1788 status=ok
// SIG undefined FUN_141b2b600(void)

void FUN_141b2b600(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6,longlong param_7)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined *local_40;
  undefined4 local_38;
  
  lVar4 = param_6;
  iVar5 = (*(int *)(param_2 + 0x1aa8) - *(int *)(param_2 + 0x1aa0)) / 2 + 7;
  iVar5 = (int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3;
  iVar6 = (*(int *)(param_2 + 0x1aac) - *(int *)(param_2 + 0x1aa4)) / 2 + 7;
  iVar6 = (int)(iVar6 + (iVar6 >> 0x1f & 7U)) >> 3;
  ClearUAV(param_1,param_6 + 0xe0,0);
  ClearUAV(param_1,lVar4 + 0xb8,0);
  FUN_141b58510(param_2 + 0x3018,param_2,param_1,param_5,lVar4,param_4);
  if (DAT_1464c1a48 != 0) {
    lVar1 = *(longlong *)(param_2 + 0x3090);
    local_40 = &DAT_146a15cb0;
    local_38 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,&param_6,&local_40);
    plVar9 = (longlong *)0x0;
    if ((int)param_6 != -1) {
      plVar9 = (longlong *)((longlong)(int)param_6 * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    plVar11 = plVar9 + 2;
    if (plVar9 == (longlong *)0x0) {
      plVar11 = (longlong *)0x0;
    }
    lVar1 = *plVar11;
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    uVar3 = *(undefined8 *)(lVar2 + 0x60);
    FRHIComputeShader::UpdateStats(uVar3);
    puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 3;
    if (*(undefined8 **)(param_1 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 3;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar7;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar8;
    *(undefined8 **)(param_1 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144d91e50;
    puVar8[2] = uVar3;
    FUN_141b43d10(lVar1,param_1,param_2,param_5,lVar4);
    DispatchComputeShader(param_1,lVar1,iVar5,iVar6,1);
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    FRWShaderParameter::UnsetUAV<FRHICommandList>
              (lVar1 + 0xe4,param_1,*(undefined8 *)(lVar2 + 0x60));
    param_6 = *(longlong *)(lVar4 + 0x98);
    plVar11 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar9 = plVar11 + 1;
    if (*(longlong **)(param_1 + 0x38) < plVar9) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar11 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar9 = plVar11 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar9;
    *plVar11 = param_6;
    puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar7;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar8;
    *(undefined8 **)(param_1 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar8 + 2) = 1;
    puVar8[3] = plVar11;
    *(undefined4 *)(puVar8 + 4) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x24) = 3;
    puVar8[5] = 0;
    if (DAT_1464c1a4c != 0) {
      lVar1 = *(longlong *)(param_2 + 0x3090);
      local_40 = &DAT_146a15e00;
      local_38 = 0;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(lVar1 + 0x38,&param_6,&local_40);
      plVar9 = (longlong *)0x0;
      if ((int)param_6 != -1) {
        plVar9 = (longlong *)((longlong)(int)param_6 * 0x20 + *(longlong *)(lVar1 + 0x38));
      }
      plVar11 = plVar9 + 2;
      if (plVar9 == (longlong *)0x0) {
        plVar11 = (longlong *)0x0;
      }
      lVar1 = *plVar11;
      lVar2 = *(longlong *)(lVar1 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      uVar3 = *(undefined8 *)(lVar2 + 0x60);
      FRHIComputeShader::UpdateStats(uVar3);
      puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 3;
      if (*(undefined8 **)(param_1 + 0x38) < puVar7) {
        FMemStackBase::AllocateNewChunk(param_1 + 0x30);
        puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar8 + 3;
      }
      *(undefined8 **)(param_1 + 0x30) = puVar7;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      **(undefined8 **)(param_1 + 8) = puVar8;
      *(undefined8 **)(param_1 + 8) = puVar8 + 1;
      puVar8[1] = 0;
      *puVar8 = &PTR_LAB_144d91e50;
      puVar8[2] = uVar3;
      FUN_141b43980(lVar1,param_1,param_2,param_5,param_4);
      DispatchComputeShader
                (param_1,lVar1,(*(int *)(param_2 + 0x1aa8) - *(int *)(param_2 + 0x1aa0)) / 2,
                 (*(int *)(param_2 + 0x1aac) - *(int *)(param_2 + 0x1aa4)) / 2,1);
      lVar2 = *(longlong *)(lVar1 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      FRWShaderParameter::UnsetUAV<FRHICommandList>
                (lVar1 + 0x162,param_1,*(undefined8 *)(lVar2 + 0x60));
      plVar11 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      param_6 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x1ab0) + 0x13d8) + 0xc0);
      plVar9 = plVar11 + 1;
      if (*(longlong **)(param_1 + 0x38) < plVar9) {
        FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
        plVar11 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        plVar9 = plVar11 + 1;
      }
      *(longlong **)(param_1 + 0x30) = plVar9;
      *plVar11 = param_6;
      puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 6;
      if (*(undefined8 **)(param_1 + 0x38) < puVar7) {
        FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
        puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar8 + 6;
      }
      *(undefined8 **)(param_1 + 0x30) = puVar7;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      **(undefined8 **)(param_1 + 8) = puVar8;
      *(undefined8 **)(param_1 + 8) = puVar8 + 1;
      puVar8[1] = 0;
      *puVar8 = &PTR_LAB_144d91e60;
      *(undefined4 *)(puVar8 + 2) = 1;
      puVar8[3] = plVar11;
      *(undefined4 *)(puVar8 + 4) = 0;
      *(undefined4 *)((longlong)puVar8 + 0x24) = 3;
      puVar8[5] = 0;
    }
  }
  lVar1 = *(longlong *)(param_2 + 0x3090);
  local_40 = &DAT_146a15f50;
  local_38 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&param_6,&local_40);
  plVar9 = (longlong *)0x0;
  if ((int)param_6 != -1) {
    plVar9 = (longlong *)((longlong)(int)param_6 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar1 = *plVar11;
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  FRHIComputeShader::UpdateStats(uVar3);
  puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar8 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 3;
  }
  lVar2 = param_7;
  *(undefined8 **)(param_1 + 0x30) = puVar7;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar8;
  *(undefined8 **)(param_1 + 8) = puVar8 + 1;
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_144d91e50;
  puVar8[2] = uVar3;
  FUN_141b43340(lVar1,param_1,param_2,lVar4,param_7);
  DispatchComputeShader(param_1,lVar1,iVar5,iVar6,1);
  lVar4 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  FRWShaderParameter::UnsetUAV<FRHICommandList>(lVar1 + 0xc0,param_1,*(undefined8 *)(lVar4 + 0x60));
  param_6 = *(undefined8 *)(lVar2 + 0x10);
  puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar8 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar7;
  *puVar8 = param_6;
  puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar10 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar10 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar7;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar10;
  *(undefined8 **)(param_1 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  puVar10[3] = puVar8;
  *puVar10 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar10 + 2) = 1;
  *(undefined4 *)(puVar10 + 4) = 0;
  *(undefined4 *)((longlong)puVar10 + 0x24) = 3;
  puVar10[5] = 0;
  return;
}



// FUNCTION 141b2bd00 FUN_141b2bd00 body=46 status=ok
// SIG undefined FUN_141b2bd00(void)

void FUN_141b2bd00(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x120);
  if (lVar1 != 0) {
    FShadowObjectCullPS<1>::FShadowObjectCullPS<1>(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141b2bd30 FUN_141b2bd30 body=46 status=ok
// SIG undefined FUN_141b2bd30(void)

void FUN_141b2bd30(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x198);
  if (lVar1 != 0) {
    FUN_141b254d0(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141b2bd60 FUN_141b2bd60 body=46 status=ok
// SIG undefined FUN_141b2bd60(void)

void FUN_141b2bd60(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x1c0);
  if (lVar1 != 0) {
    FUN_141b257c0(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141b2bd90 ConstructCompiledInstance body=293 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * TDistanceFieldAOUpsamplePS<1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0xe8);
  if (puVar2 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar2,param_1);
    *puVar2 = &PTR__scalar_deleting_destructor__144dc8c68;
    *(undefined4 *)(puVar2 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar2 + 0xc4) = 0;
    *(undefined1 *)((longlong)puVar2 + 0xc6) = 0;
    *(undefined4 *)(puVar2 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar2 + 0xcc) = 0;
    *(undefined1 *)((longlong)puVar2 + 0xce) = 0;
    puVar2[0x1a] = 0;
    *(undefined4 *)(puVar2 + 0x1b) = 0;
    *(undefined2 *)((longlong)puVar2 + 0xdc) = 0;
    *(undefined4 *)((longlong)puVar2 + 0xde) = 0;
    *(undefined2 *)((longlong)puVar2 + 0xe2) = 0;
    FUN_141cdf500(param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    FShaderResourceParameter::Bind(puVar2 + 0x1a,uVar1,L"BentNormalAOTexture",0);
    FShaderResourceParameter::Bind((longlong)puVar2 + 0xd4,uVar1,L"BentNormalAOSampler",0);
    FShaderParameter::Bind(puVar2 + 0x1b,uVar1,L"AOBufferBilinearUVMax",0);
    FShaderParameter::Bind
              ((longlong)puVar2 + 0xde,*(undefined8 *)(param_1 + 0x18),
               L"MinIndirectDiffuseOcclusion",0);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2bec0 FUN_141b2bec0 body=46 status=ok
// SIG undefined FUN_141b2bec0(void)

void FUN_141b2bec0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x180);
  if (lVar1 != 0) {
    FUN_141b25b10(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141b2bef0 FUN_141b2bef0 body=46 status=ok
// SIG undefined FUN_141b2bef0(void)

void FUN_141b2bef0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0xf8);
  if (lVar1 != 0) {
    TDistanceFieldShadowingUpsamplePS<1>::TDistanceFieldShadowingUpsamplePS<1>(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141b2bf20 ConstructCompiledInstance body=244 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * TDistortionApplyScreenPS<1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144ddf728;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xd4) = 0;
    FShaderResourceParameter::Bind
              (puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"DistortionMSAATexture",0);
    FShaderResourceParameter::Bind
              (puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"SceneColorMSAATexture",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),L"DistortionTextureSampler",0
              );
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xcc,*(undefined8 *)(param_1 + 0x18),L"SceneColorTextureSampler",0
              );
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2c020 ConstructCompiledInstance body=244 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * TDistortionApplyScreenPS<0>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144ddf728;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xd4) = 0;
    FShaderResourceParameter::Bind
              (puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"DistortionTexture",0);
    FShaderResourceParameter::Bind
              (puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"SceneColorTexture",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),L"DistortionTextureSampler",0
              );
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xcc,*(undefined8 *)(param_1 + 0x18),L"SceneColorTextureSampler",0
              );
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2c120 ConstructCompiledInstance body=149 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * TDistortionMergePS<1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(200);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144ddf7d0;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc4) = 0;
    FShaderResourceParameter::Bind
              (puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"SceneColorMSAATexture",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),L"SceneColorTextureSampler",0
              );
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2c1c0 ConstructCompiledInstance body=149 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * TDistortionMergePS<0>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(200);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144ddf7d0;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc4) = 0;
    FShaderResourceParameter::Bind
              (puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"SceneColorTexture",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),L"SceneColorTextureSampler",0
              );
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2c260 FUN_141b2c260 body=145 status=ok
// SIG undefined FUN_141b2c260(void)

undefined8 * FUN_141b2c260(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x150);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf710(puVar1,param_1);
    *puVar1 = &PTR_FUN_144dc7018;
    FShaderUniformBufferParameter::Bind
              (puVar1 + 0x22,*(undefined8 *)(param_1 + 0x18),DAT_146a632c0,0);
    *puVar1 = &PTR_FUN_144dc7018;
    FUN_141cdf500(param_1,puVar1 + 0x22,puVar1 + 0x22);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2c300 FUN_141b2c300 body=129 status=ok
// SIG undefined FUN_141b2c300(void)

undefined8 * FUN_141b2c300(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x158);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf710(puVar1,param_1);
    *puVar1 = &PTR_FUN_144dd4f08;
    *(undefined4 *)(puVar1 + 0x2a) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x154) = 0;
    FShaderParameter::Bind(puVar1 + 0x2a,*(undefined8 *)(param_1 + 0x18),L"DistortionParams",0);
    FUN_141cdf500(param_1,puVar1 + 0x22,puVar1 + 0x22);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2c390 FUN_141b2c390 body=95 status=ok
// SIG undefined FUN_141b2c390(void)

undefined8 * FUN_141b2c390(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x150);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf710(puVar1,param_1);
    *puVar1 = &PTR_FUN_144dc7018;
    FUN_141cdf500(param_1,puVar1 + 0x22,puVar1 + 0x22);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2c3f0 FUN_141b2c3f0 body=292 status=ok
// SIG undefined FUN_141b2c3f0(void)

undefined8 * FUN_141b2c3f0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144ddf490;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xce) = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xd4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xdc) = 0;
    FShaderResourceParameter::Bind
              (puVar1 + 0x1a,*(undefined8 *)(param_1 + 0x18),L"OcclusionTexture",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xd4,*(undefined8 *)(param_1 + 0x18),L"OcclusionSampler",0);
    FUN_141cdf500(param_1,puVar1 + 0x18,puVar1 + 0x19);
    FShaderResourceParameter::Bind
              (puVar1 + 0x1b,*(undefined8 *)(param_1 + 0x18),L"GbxSceneDepthTexture",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xdc,*(undefined8 *)(param_1 + 0x18),
               L"GbxSceneDepthTextureSampler",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2c520 ConstructCompiledInstance body=370 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * TFilterHistoryPS<1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144ddec98;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xd4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xdc) = 0;
    *(undefined2 *)(puVar1 + 0x1c) = 0;
    FShaderResourceParameter::Bind
              (puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"BentNormalAOTexture",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),L"BentNormalAOSampler",0);
    FShaderParameter::Bind(puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"HistoryWeight",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xce,*(undefined8 *)(param_1 + 0x18),L"BentNormalAOTexelSize",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xd4,*(undefined8 *)(param_1 + 0x18),L"MaxSampleBufferUV",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xda,*(undefined8 *)(param_1 + 0x18),L"DistanceFieldNormalTexture"
               ,0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xde,*(undefined8 *)(param_1 + 0x18),L"DistanceFieldNormalSampler"
               ,0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2c6a0 FUN_141b2c6a0 body=46 status=ok
// SIG undefined FUN_141b2c6a0(void)

void FUN_141b2c6a0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x140);
  if (lVar1 != 0) {
    TObjectCullPS<1>::TObjectCullPS<1>(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141b2c6d0 FUN_141b2c6d0 body=46 status=ok
// SIG undefined FUN_141b2c6d0(void)

void FUN_141b2c6d0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0xf8);
  if (lVar1 != 0) {
    TRemoveObjectsFromBufferCS<1>::TRemoveObjectsFromBufferCS<1>(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141b2c700 FUN_141b2c700 body=46 status=ok
// SIG undefined FUN_141b2c700(void)

void FUN_141b2c700(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x168);
  if (lVar1 != 0) {
    FUN_141b266a0(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141b2c730 FUN_141b2c730 body=46 status=ok
// SIG undefined FUN_141b2c730(void)

void FUN_141b2c730(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x118);
  if (lVar1 != 0) {
    FUN_141b268d0(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141b2c760 FUN_141b2c760 body=46 status=ok
// SIG undefined FUN_141b2c760(void)

void FUN_141b2c760(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0xf8);
  if (lVar1 != 0) {
    FCombineConeVisibilityCS::FCombineConeVisibilityCS(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141b2c790 ConstructCompiledInstance body=242 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FCombineIrradianceScreenGridCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144ddde88;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xd4) = 0;
    FRWShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"IrradianceTexture");
    FShaderResourceParameter::Bind
              (puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"SurfelIrradiance",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xcc,*(undefined8 *)(param_1 + 0x18),L"HeightfieldIrradiance",0);
    FShaderParameter::Bind
              (puVar1 + 0x1a,*(undefined8 *)(param_1 + 0x18),L"ScreenGridConeVisibilitySize",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2c890 ConstructCompiledInstance body=117 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FComputeCulledObjectStartOffsetCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dde518;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    *(undefined4 *)(puVar1 + 0x1d) = 0;
    FLightTileIntersectionParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2c910 FUN_141b2c910 body=46 status=ok
// SIG undefined FUN_141b2c910(void)

void FUN_141b2c910(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x118);
  if (lVar1 != 0) {
    FComputeCulledTilesStartOffsetCS::FComputeCulledTilesStartOffsetCS(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141b2c940 FUN_141b2c940 body=46 status=ok
// SIG undefined FUN_141b2c940(void)

void FUN_141b2c940(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x170);
  if (lVar1 != 0) {
    FUN_141b26d00(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141b2c970 ConstructCompiledInstance body=244 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FComputeStepBentNormalScreenGridCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dddb00;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    *(undefined2 *)(puVar1 + 0x1b) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xda) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xe2) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xea) = 0;
    FScreenGridParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xda,*(undefined8 *)(param_1 + 0x18),L"BentNormalNormalizeFactor",
               0);
    FShaderResourceParameter::Bind
              (puVar1 + 0x1c,*(undefined8 *)(param_1 + 0x18),L"ConeDepthVisibilityFunction",0);
    FRWShaderParameter::Bind
              ((longlong)puVar1 + 0xe4,*(undefined8 *)(param_1 + 0x18),L"StepBentNormal");
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2ca70 ConstructCompiledInstance body=196 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FCopyObjectBufferCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144ddfd08;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    *(undefined4 *)(puVar1 + 0x1e) = 0;
    FRWShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"CopyObjectBounds");
    FRWShaderParameter::Bind(puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"CopyObjectData");
    FDistanceFieldObjectBufferParameters::Bind(puVar1 + 0x1a,*(undefined8 *)(param_1 + 0x18));
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2cb40 ConstructCompiledInstance body=299 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FCopySurfelBufferCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0xf0);
  if (puVar2 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar2,param_1);
    *puVar2 = &PTR__scalar_deleting_destructor__144ddfe70;
    puVar2[0x18] = 0;
    puVar2[0x19] = 0;
    puVar2[0x1a] = 0;
    puVar2[0x1b] = 0;
    puVar2[0x1c] = 0;
    *(undefined4 *)(puVar2 + 0x1d) = 0;
    *(undefined2 *)((longlong)puVar2 + 0xec) = 0;
    FRWShaderParameter::Bind
              (puVar2 + 0x18,*(undefined8 *)(param_1 + 0x18),L"CopyInterpolatedVertexData");
    FRWShaderParameter::Bind(puVar2 + 0x19,*(undefined8 *)(param_1 + 0x18),L"CopySurfelData");
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    FRWShaderParameter::Bind(puVar2 + 0x1a,uVar1,L"InterpolatedVertexData");
    FRWShaderParameter::Bind(puVar2 + 0x1b,uVar1,L"SurfelData");
    FRWShaderParameter::Bind(puVar2 + 0x1c,uVar1,L"VPLFlux");
    FShaderParameter::Bind(puVar2 + 0x1d,*(undefined8 *)(param_1 + 0x18),L"NumSurfels",0);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2cc70 ConstructCompiledInstance body=269 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FCopyVPLFluxBufferCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0xe8);
  if (puVar2 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar2,param_1);
    *puVar2 = &PTR__scalar_deleting_destructor__144ddff10;
    puVar2[0x18] = 0;
    puVar2[0x19] = 0;
    puVar2[0x1a] = 0;
    puVar2[0x1b] = 0;
    *(undefined4 *)(puVar2 + 0x1c) = 0;
    *(undefined2 *)((longlong)puVar2 + 0xe4) = 0;
    FRWShaderParameter::Bind(puVar2 + 0x18,*(undefined8 *)(param_1 + 0x18),L"CopyVPLFlux");
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    FRWShaderParameter::Bind(puVar2 + 0x19,uVar1,L"InterpolatedVertexData");
    FRWShaderParameter::Bind(puVar2 + 0x1a,uVar1,L"SurfelData");
    FRWShaderParameter::Bind(puVar2 + 0x1b,uVar1,L"VPLFlux");
    FShaderParameter::Bind(puVar2 + 0x1c,*(undefined8 *)(param_1 + 0x18),L"NumSurfels",0);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2cd80 FUN_141b2cd80 body=46 status=ok
// SIG undefined FUN_141b2cd80(void)

void FUN_141b2cd80(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x130);
  if (lVar1 != 0) {
    FCullObjectsForShadowCS::FCullObjectsForShadowCS(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141b2cdb0 FUN_141b2cdb0 body=46 status=ok
// SIG undefined FUN_141b2cdb0(void)

void FUN_141b2cdb0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x148);
  if (lVar1 != 0) {
    FCullObjectsForViewCS::FCullObjectsForViewCS(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141b2cde0 FUN_141b2cde0 body=46 status=ok
// SIG undefined FUN_141b2cde0(void)

void FUN_141b2cde0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x108);
  if (lVar1 != 0) {
    FCullVPLsForViewCS::FCullVPLsForViewCS(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141b2ce10 ConstructCompiledInstance body=276 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FGammaCorrectionPS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dde018;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xd4) = 0;
    *(undefined2 *)(puVar1 + 0x1b) = 0;
    FShaderResourceParameter::Bind
              (puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"SceneColorTexture",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),L"SceneColorTextureSampler",0
              );
    FShaderParameter::Bind(puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"InverseGamma",0);
    FShaderParameter::Bind((longlong)puVar1 + 0xce,*(undefined8 *)(param_1 + 0x18),L"ColorScale",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xd4,*(undefined8 *)(param_1 + 0x18),L"OverlayColor",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2cf30 FUN_141b2cf30 body=149 status=ok
// SIG undefined FUN_141b2cf30(void)

undefined8 * FUN_141b2cf30(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(200);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91290;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc4) = 0;
    FShaderResourceParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"GbxSkyTexture",0)
    ;
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),L"GbxSkySampler",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2cfd0 FUN_141b2cfd0 body=251 status=ok
// SIG undefined FUN_141b2cfd0(void)

undefined8 * FUN_141b2cfd0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144ddea30;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined2 *)(puVar1 + 0x1a) = 0;
    puVar1[0x1b] = 0;
    FShaderResourceParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"DstCubeMapUAV",0)
    ;
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),L"SrcCubeMapTexture",0);
    FShaderResourceParameter::Bind
              (puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"TrilinearClampSampler",0);
    FShaderParameter::Bind((longlong)puVar1 + 0xcc,*(undefined8 *)(param_1 + 0x18),L"TextureSize",0)
    ;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2d0d0 FUN_141b2d0d0 body=276 status=ok
// SIG undefined FUN_141b2d0d0(void)

undefined8 * FUN_141b2d0d0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dde6b0;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xd4) = 0;
    puVar1[0x1b] = 0;
    FShaderResourceParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"SkyEnvCubeUAV",0)
    ;
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),L"SkyEnvCubeTexture",0);
    FShaderResourceParameter::Bind
              (puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"SkyCubeTexture",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xcc,*(undefined8 *)(param_1 + 0x18),L"TrilinearClampSampler",0);
    FShaderParameter::Bind(puVar1 + 0x1a,*(undefined8 *)(param_1 + 0x18),L"TextureSize",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2d1f0 FUN_141b2d1f0 body=251 status=ok
// SIG undefined FUN_141b2d1f0(void)

undefined8 * FUN_141b2d1f0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144ddea30;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined2 *)(puVar1 + 0x1a) = 0;
    puVar1[0x1b] = 0;
    FShaderResourceParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"DstCubeMapUAV",0)
    ;
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),L"SrcCubeMapTexture",0);
    FShaderResourceParameter::Bind(puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"SrcSampler",0);
    FShaderParameter::Bind((longlong)puVar1 + 0xcc,*(undefined8 *)(param_1 + 0x18),L"TextureSize",0)
    ;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2d2f0 FUN_141b2d2f0 body=223 status=ok
// SIG undefined FUN_141b2d2f0(void)

undefined8 * FUN_141b2d2f0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x160);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf710(puVar1,param_1);
    *puVar1 = &PTR_FUN_144ddecc8;
    *(undefined4 *)(puVar1 + 0x2a) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x154) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x15c) = 0;
    FShaderResourceParameter::Bind
              (puVar1 + 0x2a,*(undefined8 *)(param_1 + 0x18),L"GbxSkyCubeMapTexture",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0x154,*(undefined8 *)(param_1 + 0x18),L"GbxSkyCubeMapSampler",0);
    FShaderParameter::Bind
              (puVar1 + 0x2b,*(undefined8 *)(param_1 + 0x18),L"GbxSkyNegativeZThreshold",0);
    FShaderUniformBufferParameter::Bind
              (puVar1 + 0x22,*(undefined8 *)(param_1 + 0x18),DAT_146a632c0,0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2d3d0 FUN_141b2d3d0 body=226 status=ok
// SIG undefined FUN_141b2d3d0(void)

undefined8 * FUN_141b2d3d0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x168);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf710(puVar1,param_1);
    *puVar1 = &PTR_FUN_144ddec40;
    *(undefined4 *)(puVar1 + 0x2a) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x154) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x156) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x15e) = 0;
    FShaderParameter::Bind(puVar1 + 0x2a,*(undefined8 *)(param_1 + 0x18),L"InstancedEyeIndex",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x156,*(undefined8 *)(param_1 + 0x18),L"bIsInstancedStereo",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x15c,*(undefined8 *)(param_1 + 0x18),
               L"bIsInstancedStereoEmulated",0);
    FShaderUniformBufferParameter::Bind
              (puVar1 + 0x22,*(undefined8 *)(param_1 + 0x18),DAT_146a632c0,0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2d4c0 FUN_141b2d4c0 body=46 status=ok
// SIG undefined FUN_141b2d4c0(void)

void FUN_141b2d4c0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x118);
  if (lVar1 != 0) {
    FGeometryAwareUpsamplePS::FGeometryAwareUpsamplePS(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141b2d4f0 ConstructCompiledInstance body=111 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FHeightFogVS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(200);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91120;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"FogStartZ",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2d560 FUN_141b2d560 body=46 status=ok
// SIG undefined FUN_141b2d560(void)

void FUN_141b2d560(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(400);
  if (lVar1 != 0) {
    FUN_141b27620(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141b2d590 FUN_141b2d590 body=46 status=ok
// SIG undefined FUN_141b2d590(void)

void FUN_141b2d590(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x118);
  if (lVar1 != 0) {
    FObjectCullVS::FObjectCullVS(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141b2d5c0 FUN_141b2d5c0 body=46 status=ok
// SIG undefined FUN_141b2d5c0(void)

void FUN_141b2d5c0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x100);
  if (lVar1 != 0) {
    FSetupLightVPLsIndirectArgumentsCS::FSetupLightVPLsIndirectArgumentsCS(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141b2d5f0 ConstructCompiledInstance body=147 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FSetupVPLCullndirectArgumentsCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144de0158;
    puVar1[0x18] = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    FRWShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"DispatchParameters");
    FShaderResourceParameter::Bind
              (puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"VPLParameterBuffer",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2d690 FUN_141b2d690 body=46 status=ok
// SIG undefined FUN_141b2d690(void)

void FUN_141b2d690(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x100);
  if (lVar1 != 0) {
    FShadowObjectCullVS::FShadowObjectCullVS(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141b2d6c0 FUN_141b2d6c0 body=46 status=ok
// SIG undefined FUN_141b2d6c0(void)

void FUN_141b2d6c0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x150);
  if (lVar1 != 0) {
    FUN_141b284e0(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141b2d6f0 ConstructCompiledInstance body=244 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FUploadObjectsToBufferCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144ddfb00;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xce) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xd6) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xde) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xe6) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xee) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"NumUploadOperations",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18),L"UploadOperationIndices",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xca,*(undefined8 *)(param_1 + 0x18),L"UploadOperationData",0);
    FDistanceFieldObjectBufferParameters::Bind
              ((undefined8 *)((longlong)puVar1 + 0xce),*(undefined8 *)(param_1 + 0x18));
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2d7f0 FUN_141b2d7f0 body=46 status=ok
// SIG undefined FUN_141b2d7f0(void)

void FUN_141b2d7f0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x150);
  if (lVar1 != 0) {
    FVPLPlacementCS::FVPLPlacementCS(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141b2d820 ConstructCompiledInstance body=202 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FVisualizeDistanceFieldUpsamplePS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dde5d8;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xce) = 0;
    puVar1[0x1a] = 0;
    FUN_141cdf500(param_1);
    FShaderResourceParameter::Bind
              (puVar1 + 0x1a,*(undefined8 *)(param_1 + 0x18),L"VisualizeDistanceFieldTexture",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xd4,*(undefined8 *)(param_1 + 0x18),
               L"VisualizeDistanceFieldSampler",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2d8f0 FUN_141b2d8f0 body=36 status=ok
// SIG undefined FUN_141b2d8f0(void)

void FUN_141b2d8f0(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x120);
  if (lVar1 != 0) {
    FShadowObjectCullPS<1>::FShadowObjectCullPS<1>(lVar1);
    return;
  }
  return;
}



// FUNCTION 141b2d920 FUN_141b2d920 body=36 status=ok
// SIG undefined FUN_141b2d920(void)

void FUN_141b2d920(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x198);
  if (lVar1 != 0) {
    TConeTraceScreenGridGlobalOcclusionCS<1>::TConeTraceScreenGridGlobalOcclusionCS<1>(lVar1);
    return;
  }
  return;
}



// FUNCTION 141b2d950 FUN_141b2d950 body=36 status=ok
// SIG undefined FUN_141b2d950(void)

void FUN_141b2d950(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x1c0);
  if (lVar1 != 0) {
    TConeTraceScreenGridObjectOcclusionCS<1,1>::TConeTraceScreenGridObjectOcclusionCS<1,1>(lVar1);
    return;
  }
  return;
}



// FUNCTION 141b2d980 FUN_141b2d980 body=36 status=ok
// SIG undefined FUN_141b2d980(void)

void FUN_141b2d980(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x180);
  if (lVar1 != 0) {
    TDistanceFieldShadowingCS<1,1>::TDistanceFieldShadowingCS<1,1>(lVar1);
    return;
  }
  return;
}



// FUNCTION 141b2d9b0 ConstructSerializedInstance body=138 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * TDistanceFieldShadowingUpsamplePS<1>::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dde4c0;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xce) = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    *(undefined4 *)(puVar1 + 0x1e) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xf4) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2da40 FUN_141b2da40 body=86 status=ok
// SIG undefined FUN_141b2da40(void)

undefined8 * FUN_141b2da40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144ddf728;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xd4) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2daa0 FUN_141b2daa0 body=66 status=ok
// SIG undefined FUN_141b2daa0(void)

undefined8 * FUN_141b2daa0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(200);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144ddf7d0;
    puVar1[0x18] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2daf0 FUN_141b2daf0 body=111 status=ok
// SIG undefined FUN_141b2daf0(void)

undefined8 * FUN_141b2daf0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144ddf490;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xce) = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2db60 ConstructSerializedInstance body=94 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FTranslucentObjectShadowingPS::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144ddec98;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *(undefined2 *)(puVar1 + 0x1c) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2dbc0 FUN_141b2dbc0 body=36 status=ok
// SIG undefined FUN_141b2dbc0(void)

void FUN_141b2dbc0(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x140);
  if (lVar1 != 0) {
    TObjectCullPS<1>::TObjectCullPS<1>(lVar1);
    return;
  }
  return;
}



// FUNCTION 141b2dbf0 ConstructSerializedInstance body=114 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * TRemoveObjectsFromBufferCS<1>::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144ddff98;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    *(undefined4 *)(puVar1 + 0x1e) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xf4) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2dc70 FUN_141b2dc70 body=36 status=ok
// SIG undefined FUN_141b2dc70(void)

void FUN_141b2dc70(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x168);
  if (lVar1 != 0) {
    TVisualizeMeshDistanceFieldCS<1>::TVisualizeMeshDistanceFieldCS<1>(lVar1);
    return;
  }
  return;
}



// FUNCTION 141b2dca0 FUN_141b2dca0 body=36 status=ok
// SIG undefined FUN_141b2dca0(void)

void FUN_141b2dca0(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x118);
  if (lVar1 != 0) {
    FBuildTileConesCS::FBuildTileConesCS(lVar1);
    return;
  }
  return;
}



// FUNCTION 141b2dcd0 FUN_141b2dcd0 body=108 status=ok
// SIG undefined FUN_141b2dcd0(void)

undefined8 * FUN_141b2dcd0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dddf10;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2dd40 FUN_141b2dd40 body=86 status=ok
// SIG undefined FUN_141b2dd40(void)

undefined8 * FUN_141b2dd40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144ddde88;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xd4) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2dda0 FUN_141b2dda0 body=100 status=ok
// SIG undefined FUN_141b2dda0(void)

undefined8 * FUN_141b2dda0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dde518;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    *(undefined4 *)(puVar1 + 0x1d) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2de10 FUN_141b2de10 body=36 status=ok
// SIG undefined FUN_141b2de10(void)

void FUN_141b2de10(void)

{
  CScrollView *this;
  
  this = (CScrollView *)operator_new(0x118);
  if (this != (CScrollView *)0x0) {
    CScrollView::CScrollView(this);
    return;
  }
  return;
}



// FUNCTION 141b2de40 FUN_141b2de40 body=36 status=ok
// SIG undefined FUN_141b2de40(void)

void FUN_141b2de40(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x170);
  if (lVar1 != 0) {
    FComputeIrradianceScreenGridCS::FComputeIrradianceScreenGridCS(lVar1);
    return;
  }
  return;
}



// FUNCTION 141b2de70 FUN_141b2de70 body=100 status=ok
// SIG undefined FUN_141b2de70(void)

undefined8 * FUN_141b2de70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dddb00;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    *(undefined4 *)(puVar1 + 0x1d) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2dee0 ConstructSerializedInstance body=107 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FCopyObjectBufferCS::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144ddfd08;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    *(undefined4 *)(puVar1 + 0x1e) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2df50 FUN_141b2df50 body=107 status=ok
// SIG undefined FUN_141b2df50(void)

undefined8 * FUN_141b2df50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144ddfe70;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    *(undefined4 *)(puVar1 + 0x1d) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xec) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2dfc0 FUN_141b2dfc0 body=100 status=ok
// SIG undefined FUN_141b2dfc0(void)

undefined8 * FUN_141b2dfc0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144ddff10;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *(undefined4 *)(puVar1 + 0x1c) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xe4) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2e030 FUN_141b2e030 body=36 status=ok
// SIG undefined FUN_141b2e030(void)

void FUN_141b2e030(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x130);
  if (lVar1 != 0) {
    FCullObjectsForShadowCS::FCullObjectsForShadowCS(lVar1);
    return;
  }
  return;
}



// FUNCTION 141b2e060 FUN_141b2e060 body=36 status=ok
// SIG undefined FUN_141b2e060(void)

void FUN_141b2e060(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x148);
  if (lVar1 != 0) {
    FUN_141b27340(lVar1);
    return;
  }
  return;
}



// FUNCTION 141b2e090 ConstructSerializedInstance body=122 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FCullVPLsForViewCS::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x108);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144ddd488;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    *(undefined2 *)(puVar1 + 0x20) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2e110 FUN_141b2e110 body=87 status=ok
// SIG undefined FUN_141b2e110(void)

undefined8 * FUN_141b2e110(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dde018;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    *(undefined2 *)(puVar1 + 0x1b) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2e170 FUN_141b2e170 body=87 status=ok
// SIG undefined FUN_141b2e170(void)

undefined8 * FUN_141b2e170(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144ddea30;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined2 *)(puVar1 + 0x1a) = 0;
    puVar1[0x1b] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2e1d0 FUN_141b2e1d0 body=93 status=ok
// SIG undefined FUN_141b2e1d0(void)

undefined8 * FUN_141b2e1d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dde6b0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xd4) = 0;
    puVar1[0x1b] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2e230 FUN_141b2e230 body=79 status=ok
// SIG undefined FUN_141b2e230(void)

undefined8 * FUN_141b2e230(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x160);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf7d0(puVar1);
    *puVar1 = &PTR_FUN_144ddecc8;
    puVar1[0x2a] = 0;
    *(undefined4 *)(puVar1 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x15c) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2e280 FUN_141b2e280 body=80 status=ok
// SIG undefined FUN_141b2e280(void)

undefined8 * FUN_141b2e280(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x168);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf7d0(puVar1);
    *puVar1 = &PTR_FUN_144ddec40;
    puVar1[0x2a] = 0;
    puVar1[0x2b] = 0;
    *(undefined2 *)(puVar1 + 0x2c) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2e2d0 FUN_141b2e2d0 body=36 status=ok
// SIG undefined FUN_141b2e2d0(void)

void FUN_141b2e2d0(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x118);
  if (lVar1 != 0) {
    FUN_141b275b0(lVar1);
    return;
  }
  return;
}



// FUNCTION 141b2e300 FUN_141b2e300 body=36 status=ok
// SIG undefined FUN_141b2e300(void)

void FUN_141b2e300(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(400);
  if (lVar1 != 0) {
    FLightVPLsCS::FLightVPLsCS(lVar1);
    return;
  }
  return;
}



// FUNCTION 141b2e330 FUN_141b2e330 body=36 status=ok
// SIG undefined FUN_141b2e330(void)

void FUN_141b2e330(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x118);
  if (lVar1 != 0) {
    FUN_141b27bb0(lVar1);
    return;
  }
  return;
}



// FUNCTION 141b2e360 ConstructSerializedInstance body=114 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FSetupLightVPLsIndirectArgumentsCS::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x100);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144ddd7e0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    *(undefined4 *)(puVar1 + 0x1f) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2e3e0 FUN_141b2e3e0 body=72 status=ok
// SIG undefined FUN_141b2e3e0(void)

undefined8 * FUN_141b2e3e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144de0158;
    puVar1[0x18] = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2e430 ConstructSerializedInstance body=115 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FShadowHeightfieldsPS::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x100);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dde1e8;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    *(undefined2 *)(puVar1 + 0x1f) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2e4b0 FUN_141b2e4b0 body=36 status=ok
// SIG undefined FUN_141b2e4b0(void)

void FUN_141b2e4b0(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x150);
  if (lVar1 != 0) {
    FUpdateHistoryDepthRejectionPS::FUpdateHistoryDepthRejectionPS(lVar1);
    return;
  }
  return;
}



// FUNCTION 141b2e4e0 FUN_141b2e4e0 body=108 status=ok
// SIG undefined FUN_141b2e4e0(void)

undefined8 * FUN_141b2e4e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144ddfb00;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    *(undefined2 *)(puVar1 + 0x1e) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2e550 FUN_141b2e550 body=36 status=ok
// SIG undefined FUN_141b2e550(void)

void FUN_141b2e550(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x150);
  if (lVar1 != 0) {
    FVPLPlacementCS::FVPLPlacementCS(lVar1);
    return;
  }
  return;
}



// FUNCTION 141b2e580 ConstructSerializedInstance body=104 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * TExponentialHeightFogPS<1>::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dde5d8;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xce) = 0;
    puVar1[0x1a] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b2e5f0 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
::CreateRHI(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [64];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0x50400;
  local_84 = 0x70100;
  local_80 = 0x1000001;
  local_7c = 0x1000f00;
  local_78 = 0x10000;
  local_74 = 0x1000f;
  local_70 = 0xf000100;
  local_6c = 0x100;
  local_68 = 0xf0001;
  local_64 = 0x1000001;
  local_60 = 0x1000f00;
  local_5c = 0x10000;
  local_58 = 0x1000f;
  local_54 = 0xf000100;
  uVar1 = FBlendStateInitializerRHI::FBlendStateInitializerRHI<8>(local_50,&local_88);
  (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,param_1,uVar1);
  return param_1;
}



// FUNCTION 141b2e6c0 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<7,0,8,0,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
::CreateRHI(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [64];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0x800;
  local_84 = 0x70100;
  local_80 = 0x1000001;
  local_7c = 0x1000f00;
  local_78 = 0x10000;
  local_74 = 0x1000f;
  local_70 = 0xf000100;
  local_6c = 0x100;
  local_68 = 0xf0001;
  local_64 = 0x1000001;
  local_60 = 0x1000f00;
  local_5c = 0x10000;
  local_58 = 0x1000f;
  local_54 = 0xf000100;
  uVar1 = FBlendStateInitializerRHI::FBlendStateInitializerRHI<8>(local_50,&local_88);
  (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,param_1,uVar1);
  return param_1;
}



// FUNCTION 141b2e790 FUN_141b2e790 body=198 status=ok
// SIG undefined FUN_141b2e790(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141b2e790(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [64];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0x100;
  local_84 = 0x80001;
  local_80 = 0x1000001;
  local_7c = 0x1000f00;
  local_78 = 0x10000;
  local_74 = 0x1000f;
  local_70 = 0xf000100;
  local_6c = 0x100;
  local_68 = 0xf0001;
  local_64 = 0x1000001;
  local_60 = 0x1000f00;
  local_5c = 0x10000;
  local_58 = 0x1000f;
  local_54 = 0xf000100;
  uVar1 = FBlendStateInitializerRHI::FBlendStateInitializerRHI<8>(local_50,&local_88);
  (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,param_1,uVar1);
  return param_1;
}



// FUNCTION 141b2e860 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<15,0,1,1,0,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
::CreateRHI(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [64];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0x10100;
  local_84 = 0xf0101;
  local_80 = 0x1000001;
  local_7c = 0x1000f00;
  local_78 = 0x10000;
  local_74 = 0x1000f;
  local_70 = 0xf000100;
  local_6c = 0x100;
  local_68 = 0xf0001;
  local_64 = 0x1000001;
  local_60 = 0x1000f00;
  local_5c = 0x10000;
  local_58 = 0x1000f;
  local_54 = 0xf000100;
  uVar1 = FBlendStateInitializerRHI::FBlendStateInitializerRHI<8>(local_50,&local_88);
  (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,param_1,uVar1);
  return param_1;
}



// FUNCTION 141b2e930 FUN_141b2e930 body=198 status=ok
// SIG undefined FUN_141b2e930(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141b2e930(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [64];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0x50400;
  local_84 = 0xf0100;
  local_80 = 0x1000001;
  local_7c = 0x1000f00;
  local_78 = 0x10000;
  local_74 = 0x1000f;
  local_70 = 0xf000100;
  local_6c = 0x100;
  local_68 = 0xf0001;
  local_64 = 0x1000001;
  local_60 = 0x1000f00;
  local_5c = 0x10000;
  local_58 = 0x1000f;
  local_54 = 0xf000100;
  uVar1 = FBlendStateInitializerRHI::FBlendStateInitializerRHI<8>(local_50,&local_88);
  (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,param_1,uVar1);
  return param_1;
}



// FUNCTION 141b2ea00 FUN_141b2ea00 body=1602 status=ok
// SIG undefined FUN_141b2ea00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b2ea00(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,float param_8,
                  longlong *param_9)

{
  longlong lVar1;
  float fVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined4 uVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  char cVar12;
  undefined4 uVar13;
  int iVar14;
  float fVar15;
  int local_res10;
  int iStackX_14;
  longlong local_res18;
  undefined8 local_res20;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 in_stack_ffffffffffffff90;
  undefined *local_58;
  undefined4 local_50;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
  lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x20);
  local_res20 = param_4;
  if ((((DAT_146a17158 == '\0') || (DAT_146a17164 < *(int *)(lVar9 + 0x15f0))) ||
      (*(int *)(lVar9 + 0x15f0) * 3 < DAT_146a17164)) || (DAT_146a9dad4 != '\0')) {
    DAT_146a17160 = 1;
    iVar14 = *(int *)(lVar9 + 0x15f0) * 5;
    DAT_146a17164 = (int)(iVar14 + (iVar14 >> 0x1f & 3U)) >> 2;
    FRenderResource::ReleaseResource(&DAT_146a17130);
    FRenderResource::InitResource(&DAT_146a17130);
  }
  FUN_141b29780(&DAT_146a17160);
  ClearUAV(param_1,&DAT_146a17168,0);
  local_58 = &DAT_146a17230;
  local_50 = 0;
  lVar3 = FUN_1419ef210((&DAT_1464c9c48)[*(int *)(lVar9 + 8)]);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar3 + 0x38,&local_res10,&local_58);
  plVar7 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar7 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar3 + 0x38));
  }
  plVar4 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  lVar3 = *plVar4;
  lVar1 = *(longlong *)(lVar3 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  uVar16 = *(undefined8 *)(lVar1 + 0x60);
  FRHIComputeShader::UpdateStats(uVar16);
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar6 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar5;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar6;
  *(undefined8 **)(param_1 + 8) = puVar6 + 1;
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_144d91e50;
  puVar6[2] = uVar16;
  FUN_141b44620(lVar3,param_1,lVar9,param_2,param_4,CONCAT44(uVar8,param_5),param_6,param_7);
  uVar16 = CONCAT44((int)((ulonglong)param_4 >> 0x20),1);
  DispatchComputeShader(param_1,lVar3,*(int *)(lVar9 + 0x15f0) + 0x3fU >> 6,1,uVar16);
  uVar8 = (undefined4)((ulonglong)uVar16 >> 0x20);
  FUN_141b46ee0(lVar3,param_1,lVar9);
  plVar7 = param_9;
  fVar2 = param_8;
  fVar15 = param_8 / _DAT_1464c1a04 + 1.0;
  if (256.0 <= fVar15) {
    fVar15 = 256.0;
  }
  iVar14 = (int)fVar15;
  if (*(char *)(param_3 + 0x188) != '\0') {
    return;
  }
  if (DAT_1464c1a00 == 0) {
    return;
  }
  if ((*(char *)(lVar9 + 0x1795) == '\0') || (0xffff < *(int *)(lVar9 + 0x15f0))) {
    cVar12 = '\0';
  }
  else {
    cVar12 = '\x01';
  }
  piVar10 = (int *)*param_9;
  local_res10 = iVar14;
  iStackX_14 = iVar14;
  if (piVar10 == (int *)0x0) {
    lVar3 = operator_new();
    lVar9 = 0;
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 8) = 0;
      *(undefined8 *)(lVar3 + 0x10) = 0;
      *(undefined8 *)(lVar3 + 0x18) = 0;
      *(undefined4 *)(lVar3 + 0x20) = 0;
      *(undefined8 *)(lVar3 + 0x28) = 0;
      *(undefined8 *)(lVar3 + 0x30) = 0;
      *(undefined8 *)(lVar3 + 0x38) = 0;
      *(undefined8 *)(lVar3 + 0x40) = 0;
      *(undefined4 *)(lVar3 + 0x48) = 0;
      *(undefined8 *)(lVar3 + 0x50) = 0;
      *(undefined8 *)(lVar3 + 0x58) = 0;
      *(undefined8 *)(lVar3 + 0x60) = 0;
      *(undefined8 *)(lVar3 + 0x68) = 0;
      *(undefined4 *)(lVar3 + 0x70) = 0;
      *(undefined8 *)(lVar3 + 0x78) = 0;
      *(undefined8 *)(lVar3 + 0x80) = 0;
      *(undefined8 *)(lVar3 + 0x88) = 0;
      *(undefined8 *)(lVar3 + 0x90) = 0;
      *(undefined4 *)(lVar3 + 0x98) = 0;
      *(undefined8 *)(lVar3 + 0xa0) = 0;
      *(undefined1 *)(lVar3 + 0xa8) = 0;
      lVar9 = lVar3;
    }
    if (plVar7 != &local_res18) {
      lVar3 = *plVar7;
      *plVar7 = lVar9;
      FUN_141b29040(plVar7,lVar3);
      lVar9 = 0;
    }
    FUN_141b29040(&local_res18,lVar9);
  }
  else {
    if (((*piVar10 == iVar14) && (piVar10[1] == iVar14)) && ((char)piVar10[0x2a] == cVar12))
    goto LAB_141b2ee6c;
    FUN_141ace450(piVar10 + 2);
    FUN_141ace450(piVar10 + 0xc);
    FUN_141ace450(piVar10 + 0x16);
    FUN_141ace450(piVar10 + 0x20);
  }
  piVar10 = (int *)*plVar7;
  *piVar10 = iVar14;
  piVar10[1] = iVar14;
  *(char *)(*plVar7 + 0xa8) = cVar12;
  piVar10 = (int *)*plVar7;
  FUN_141ac25e0(piVar10 + 2,4,piVar10[1] * *piVar10,0x1c,CONCAT44(uVar8,1),0,0);
  FUN_141ac25e0(piVar10 + 0xc,4,1,0x1c,1,0,0);
  uVar13 = 0x1c;
  uVar8 = 4;
  FUN_141ac25e0(piVar10 + 0x16,4,piVar10[1] * *piVar10,0x1c,1,0,0);
  if ((char)piVar10[0x2a] != '\0') {
    uVar13 = 0x20;
  }
  if ((char)piVar10[0x2a] != '\0') {
    uVar8 = 2;
  }
  FUN_141ac25e0(piVar10 + 0x20,uVar8,piVar10[1] * *piVar10 * DAT_1464c1a44 * DAT_1464c1a30,uVar13,1,
                0,0);
  piVar10 = (int *)*plVar7;
LAB_141b2ee6c:
  ClearUAV(param_1,piVar10 + 2,0);
  uVar16 = CONCAT44(iStackX_14,local_res10);
  uVar17 = uVar16;
  FUN_141b1eba0(param_1,param_2,local_res20,fVar2,uVar16,*plVar7);
  uVar8 = (undefined4)((ulonglong)uVar17 >> 0x20);
  ClearUAV(param_1,*plVar7 + 0x30,0);
  lVar9 = *(longlong *)(param_2 + 0x3090);
  local_50 = 0;
  local_res10 = (int)(iVar14 + 7 + (iVar14 + 7 >> 0x1f & 7U)) >> 3;
  local_58 = &DAT_146a174d0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar9 + 0x38,&param_8,&local_58);
  plVar4 = (longlong *)0x0;
  if (param_8 != -NAN) {
    plVar4 = (longlong *)((longlong)(int)param_8 * 0x20 + *(longlong *)(lVar9 + 0x38));
  }
  plVar11 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar9 = *plVar11;
  lVar3 = *(longlong *)(lVar9 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar17 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar17);
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar6 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar5;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar6;
  *(undefined8 **)(param_1 + 8) = puVar6 + 1;
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_144d91e50;
  puVar6[2] = uVar17;
  FUN_141b435b0(lVar9,param_1,param_2,*plVar7);
  DispatchComputeShader
            (param_1,lVar9,local_res10,(int)((iVar14 + 7 >> 0x1f & 7U) + iVar14 + 7) >> 3,
             CONCAT44(uVar8,1));
  FComputeCulledObjectStartOffsetCS::UnsetParameters(lVar9,param_1,param_2,*plVar7);
  ClearUAV(param_1,*plVar7 + 8,0);
  FUN_141b1f6e0(param_1,param_2,local_res20,fVar2,uVar16,*plVar7);
  return;
}



// FUNCTION 141b2f050 FUN_141b2f050 body=472 status=ok
// SIG undefined FUN_141b2f050(void)

void FUN_141b2f050(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined *local_38;
  undefined4 local_30;
  
  plVar7 = param_5;
  if ((char)param_5[5] != '\0') {
    if ((*(int *)(param_2 + 0x15f0) <= *(int *)((longlong)param_5 + 0x34)) &&
       (*(int *)((longlong)param_5 + 0x34) <= *(int *)(param_2 + 0x15f0) * 3)) goto LAB_141b2f0c1;
  }
  iVar3 = *(int *)(param_2 + 0x15f0) * 5;
  *(int *)((longlong)param_5 + 0x34) = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
  (**(code **)(*param_5 + 0x30))(param_5);
  (**(code **)(*plVar7 + 0x28))(plVar7);
LAB_141b2f0c1:
  FUN_141b29780(plVar7 + 6);
  ClearUAV(param_1,plVar7 + 7,0);
  local_38 = &DAT_146a164c0;
  local_30 = 0;
  lVar4 = FUN_1419ef210((&DAT_1464c9c48)[*(int *)(param_2 + 8)]);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x38,&param_5,&local_38);
  plVar7 = (longlong *)0x0;
  if ((int)param_5 != -1) {
    plVar7 = (longlong *)((longlong)(int)param_5 * 0x20 + *(longlong *)(lVar4 + 0x38));
  }
  plVar8 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  lVar4 = *plVar8;
  lVar1 = *(longlong *)(lVar4 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x60);
  FRHIComputeShader::UpdateStats(uVar2);
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar6 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar5;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar6;
  *(undefined8 **)(param_1 + 8) = puVar6 + 1;
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_144d91e50;
  puVar6[2] = uVar2;
  FUN_141b449a0(lVar4,param_1,param_2,param_3,param_4);
  DispatchComputeShader(param_1,lVar4,*(int *)(param_2 + 0x15f0) + 0x3fU >> 6,1,1);
  FUN_141b470c0(lVar4,param_1,param_2);
  return;
}



// FUNCTION 141b2f230 FUN_141b2f230 body=161 status=ok
// SIG undefined FUN_141b2f230(void)

void FUN_141b2f230(char *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (*(char *)(lVar1 + 0x11) != '\0') {
    if (DAT_146ab62f3 != '\0') {
      (**(code **)(*DAT_146ab6358 + 0x6a0))(DAT_146ab6358,lVar1);
    }
    *(undefined1 *)(lVar1 + 0x11) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar1 + 0x11) != '\0') {
    if (DAT_146ab62f3 != '\0') {
      (**(code **)(*DAT_146ab6358 + 0x6a0))(DAT_146ab6358,lVar1);
    }
    *(undefined1 *)(lVar1 + 0x11) = 0;
  }
  if ((*param_1 != '\0') && (lVar1 = *(longlong *)(param_1 + 0xa8), *(char *)(lVar1 + 0x11) != '\0')
     ) {
    if (DAT_146ab62f3 != '\0') {
      (**(code **)(*DAT_146ab6358 + 0x6a0))(DAT_146ab6358,lVar1);
    }
    *(undefined1 *)(lVar1 + 0x11) = 0;
  }
  return;
}



// FUNCTION 141b2f2e0 FUN_141b2f2e0 body=1770 status=ok
// SIG undefined FUN_141b2f2e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b2f2e0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  float fVar13;
  int iStackX_c;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_48 [2];
  
  iStackX_c = *(int *)(DAT_146a184e0 + 4);
  local_res20 = param_4;
  FSceneRenderTargets::Get(param_2);
  local_48[0] = 0;
  local_res18 = 0;
  FUN_141a19150(param_2,0,0,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res18);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_48);
  lVar7 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar2 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar2);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar10 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar6;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144d91e50;
  puVar10[2] = uVar2;
  lVar7 = *(longlong *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  FUN_141aa9420(param_1,param_2,*(undefined8 *)(lVar7 + 0x60),uVar2);
  lVar7 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar2 = *(undefined8 *)(lVar7 + 0x60);
  if (((*(short *)(param_1 + 0xda) != 0) || (*(short *)(param_1 + 0xe2) != 0)) ||
     (*(short *)(param_1 + 0xea) != 0)) {
    uVar3 = *(undefined8 *)(param_3 + 0x1a18);
    uVar5 = FUN_141a156e0();
    if (*(short *)(param_1 + 0xda) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xd8);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar10 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar10 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar10;
      *(undefined8 **)(param_2 + 8) = puVar10 + 1;
      puVar10[1] = 0;
      *puVar10 = &PTR_LAB_144d92090;
      puVar10[2] = uVar2;
      *(uint *)(puVar10 + 3) = (uint)uVar1;
      puVar10[4] = uVar3;
    }
    if (*(short *)(param_1 + 0xde) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xdc);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar10 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar10 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar10;
      *(undefined8 **)(param_2 + 8) = puVar10 + 1;
      puVar10[1] = 0;
      *puVar10 = &PTR_LAB_144dcb3b8;
      puVar10[2] = uVar2;
      *(uint *)(puVar10 + 3) = (uint)uVar1;
      puVar10[4] = uVar5;
    }
    uVar3 = *(undefined8 *)(param_3 + 0x1a20);
    uVar5 = FUN_141a156e0();
    if (*(short *)(param_1 + 0xe2) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xe0);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar10 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar10 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar10;
      *(undefined8 **)(param_2 + 8) = puVar10 + 1;
      puVar10[1] = 0;
      *(uint *)(puVar10 + 3) = (uint)uVar1;
      *puVar10 = &PTR_LAB_144d92090;
      puVar10[2] = uVar2;
      puVar10[4] = uVar3;
    }
    if (*(short *)(param_1 + 0xe6) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xe4);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar10 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar10 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar10;
      *(undefined8 **)(param_2 + 8) = puVar10 + 1;
      puVar10[1] = 0;
      *puVar10 = &PTR_LAB_144dcb3b8;
      puVar10[2] = uVar2;
      *(uint *)(puVar10 + 3) = (uint)uVar1;
      puVar10[4] = uVar5;
    }
    uVar3 = *(undefined8 *)(param_3 + 0x1a28);
    uVar5 = FUN_141a156e0();
    if (*(short *)(param_1 + 0xea) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xe8);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar10 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar10 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar10;
      *(undefined8 **)(param_2 + 8) = puVar10 + 1;
      puVar10[1] = 0;
      *puVar10 = &PTR_LAB_144d92090;
      puVar10[2] = uVar2;
      *(uint *)(puVar10 + 3) = (uint)uVar1;
      puVar10[4] = uVar3;
    }
    if (*(short *)(param_1 + 0xee) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xec);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar10 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar10 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar10;
      *(undefined8 **)(param_2 + 8) = puVar10 + 1;
      puVar10[1] = 0;
      *puVar10 = &PTR_LAB_144dcb3b8;
      puVar10[2] = uVar2;
      *(uint *)(puVar10 + 3) = (uint)uVar1;
      puVar10[4] = uVar5;
    }
  }
  uVar2 = local_res20;
  FUN_141b3c600(param_1,param_2,local_res20,param_3,iStackX_c);
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar7 = 0;
    do {
      if (*(undefined **)(*(longlong *)(param_1 + 8) + lVar7 * 8) == &DAT_146a1c440) {
        if (iVar8 != -1) {
          puVar12 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar8 * 8);
          *puVar12 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141b2f7b4;
        }
        break;
      }
      iVar8 = iVar8 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 0x10));
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a1c3d8) && (_Init_thread_header(&DAT_146a1c3d8), DAT_146a1c3d8 == -1))
  {
    _DAT_146a1c3d0 = 0;
    _DAT_146a1c3d4 = 0;
    DAT_146a1c3d6 = 0;
    _Init_thread_footer(&DAT_146a1c3d8);
  }
  puVar12 = (undefined4 *)&DAT_146a1c3d0;
LAB_141b2f7b4:
  lVar7 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  FUN_141b1d720(*(undefined8 *)(lVar7 + 0x60),puVar12,param_2,param_3);
  iVar8 = *(int *)(DAT_146a183d8 + 4);
  if (iVar8 < 2) {
    if (iVar8 == -1) {
      iStackX_c = (int)((ulonglong)*(undefined8 *)(param_3 + 0x1aa8) >> 0x20);
      iStackX_c = iStackX_c - *(int *)(param_3 + 0x1aa4);
      iVar8 = (int)*(undefined8 *)(param_3 + 0x1aa8) - *(int *)(param_3 + 0x1aa0);
      iVar8 = (uint)(0 < iVar8 % *(int *)(param_1 + 0xc0)) + iVar8 / *(int *)(param_1 + 0xc0);
    }
    else {
      iVar8 = (uint)(0 < iStackX_c % *(int *)(param_1 + 0xc0)) +
              iStackX_c / *(int *)(param_1 + 0xc0);
    }
    uVar9 = 1;
    iVar11 = (uint)(0 < iStackX_c % *(int *)(param_1 + 0xc4)) + iStackX_c / *(int *)(param_1 + 0xc4)
    ;
  }
  else {
    uVar4 = (longlong)(iStackX_c * iStackX_c) /
            (longlong)
            (*(int *)(param_1 + 200) * *(int *)(param_1 + 0xc4) * *(int *)(param_1 + 0xc0));
    uVar9 = 6;
    fVar13 = SQRT((float)(int)((longlong)
                               ((ulonglong)(uint)((int)uVar4 >> 0x1f) << 0x20 | uVar4 & 0xffffffff)
                              / (longlong)iVar8));
    iVar8 = -((int)ROUND(-0.5 - (fVar13 + fVar13)) >> 1);
    iVar11 = iVar8;
  }
  lVar7 = *(longlong *)(param_3 + 0x30);
  *(undefined4 *)(lVar7 + 0x8c) = uVar9;
  *(int *)(lVar7 + 0x84) = iVar8;
  *(int *)(lVar7 + 0x88) = iVar11;
  DispatchComputeShader(param_2,param_1,iVar8,iVar11,uVar9);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar10 + 2;
  if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x18);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar10 + 2;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar6;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144dc9c50;
  FUN_141b46270(param_1,param_2,uVar2);
  return;
}



// FUNCTION 141b2f9d0 FUN_141b2f9d0 body=528 status=ok
// SIG undefined FUN_141b2f9d0(void)

void FUN_141b2f9d0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_res8;
  undefined8 in_stack_ffffffffffffffa8;
  uint uVar8;
  undefined8 local_38 [2];
  
  puVar5 = param_5;
  uVar8 = (uint)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  lVar4 = (**(code **)(*(longlong *)*param_5 + 0x20))();
  uVar3 = param_8;
  lVar1 = *(longlong *)(param_1 + 0x48);
  param_5._0_4_ = *(int *)(lVar4 + 0x60) >> ((byte)param_8 & 0x1f);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x60);
  local_38[0] = 0;
  local_res8 = 0;
  FUN_141a19150(param_2,0,0,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_38);
  FRHIComputeShader::UpdateStats(uVar2);
  puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar6 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar6 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar7;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar6;
  *(undefined8 **)(param_2 + 8) = puVar6 + 1;
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_144d91e50;
  puVar6[2] = uVar2;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar2,param_1 + 0xcc,&param_5,(ulonglong)uVar8 << 0x20);
  FUN_141b3d0c0(param_1,param_2,param_4,puVar5,param_6,param_7,uVar3);
  DispatchComputeShader
            (param_2,param_1,(uint)(0 < (int)param_5 % DAT_1464c1bf8) + (int)param_5 / DAT_1464c1bf8
             ,(uint)(0 < (int)param_5 % DAT_1464c1bfc) + (int)param_5 / DAT_1464c1bfc,1);
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar7 + 2;
  if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x18);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 2;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar5;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar7;
  *(undefined8 **)(param_2 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_144dc9c50;
  FUN_141b46410(param_1,param_2);
  return;
}



// FUNCTION 141b2fbe0 FUN_141b2fbe0 body=1032 status=ok
// SIG undefined FUN_141b2fbe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b2fbe0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  float fVar9;
  undefined8 local_res20;
  undefined4 uVar11;
  undefined8 uVar10;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  
  if (((*(longlong *)(param_4 + 800) != 0) && (*(longlong *)(param_4 + 0x308) != 0)) &&
     (local_50 = *(longlong *)(param_4 + 800) + 8, local_50 != 0)) {
    lVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_4 + 0x308) + 8) + 0x20))();
    iVar6 = *(int *)(lVar2 + 0x60);
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar2 + 0x38) < DAT_1468509dc) &&
       (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
      DAT_1468509d8 = 1.442695;
      _Init_thread_footer(&DAT_1468509dc);
    }
    iVar7 = DAT_1468509dc;
    fVar9 = _guard_xfg_dispatch_icall_nop((float)iVar6);
    local_res20 = CONCAT44(local_res20._4_4_,(int)(fVar9 * DAT_1468509d8));
    if ((*(int *)(lVar2 + 0x38) < iVar7) &&
       (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
      DAT_1468509d8 = 1.442695;
      _Init_thread_footer(&DAT_1468509dc);
    }
    fVar9 = _guard_xfg_dispatch_icall_nop(128.0);
    iVar7 = 0;
    if (((iVar6 != 0x80) && (0x7f < iVar6)) && (iVar7 = -1, 0x80 < iVar6)) {
      iVar7 = (int)local_res20 - (int)(fVar9 * DAT_1468509d8);
    }
    iVar6 = iVar6 >> ((byte)iVar7 & 0x1f);
    uVar10 = *(undefined8 *)(*(longlong *)(param_3 + 0x10) + 0x20);
    local_48 = uVar10;
    FSceneRenderTargets::Get(param_2);
    local_58 = 0;
    local_res20 = 0;
    FUN_141a19150(param_2,0,0,0);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res20);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_58);
    lVar2 = *(longlong *)(param_1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    uVar1 = *(undefined8 *)(lVar2 + 0x60);
    FRHIComputeShader::UpdateStats(uVar1);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar5 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar5 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar3;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144d91e50;
    puVar5[2] = uVar1;
    lVar2 = local_50;
    FUN_141b3d430(param_1,param_2,uVar10,param_4,local_50,iVar6,iVar7);
    uVar11 = (undefined4)((ulonglong)lVar2 >> 0x20);
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      lVar2 = 0;
      do {
        if (*(undefined **)(*(longlong *)(param_1 + 8) + lVar2 * 8) == &DAT_146a1c440) {
          if (iVar4 != -1) {
            puVar8 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar4 * 8);
            *puVar8 = *(undefined4 *)(param_1 + 0xb8);
            goto LAB_141b2fec5;
          }
          break;
        }
        iVar4 = iVar4 + 1;
        lVar2 = lVar2 + 1;
      } while (lVar2 < *(int *)(param_1 + 0x10));
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146a1c3d8) &&
       (_Init_thread_header(&DAT_146a1c3d8), DAT_146a1c3d8 == -1)) {
      _DAT_146a1c3d0 = 0;
      _DAT_146a1c3d4 = 0;
      DAT_146a1c3d6 = 0;
      _Init_thread_footer(&DAT_146a1c3d8);
    }
    puVar8 = (undefined4 *)&DAT_146a1c3d0;
LAB_141b2fec5:
    lVar2 = *(longlong *)(param_1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    FUN_141b1d720(*(undefined8 *)(lVar2 + 0x60),puVar8,param_2,param_3);
    uVar10 = CONCAT44(uVar11,1);
    DispatchComputeShader
              (param_2,param_1,(uint)(0 < iVar6 % DAT_1464c1c08) + iVar6 / DAT_1464c1c08,
               (uint)(0 < iVar6 % DAT_1464c1c0c) + iVar6 / DAT_1464c1c0c,uVar10);
    uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar5 + 2;
    if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x18);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar5 + 2;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar3;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144dc9c50;
    FUN_141b465e0(param_1,param_2,local_48,param_4,CONCAT44(uVar11,iVar7));
  }
  return;
}



// FUNCTION 141b2fff0 FUN_141b2fff0 body=487 status=ok
// SIG undefined FUN_141b2fff0(void)

void FUN_141b2fff0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_res20;
  undefined8 local_38 [2];
  
  if (*(longlong *)(param_4 + 0x308) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_3 + 0x10) + 0x20);
    FSceneRenderTargets::Get(param_2);
    local_38[0] = 0;
    local_res20 = 0;
    FUN_141a19150(param_2,0,0,0);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res20);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_38);
    lVar2 = *(longlong *)(param_1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    uVar3 = *(undefined8 *)(lVar2 + 0x60);
    FRHIComputeShader::UpdateStats(uVar3);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144d91e50;
    puVar5[2] = uVar3;
    FUN_141b3d850(param_1,param_2,uVar1,param_4,0x80,0);
    DispatchComputeShader
              (param_2,param_1,
               (uint)(0 < (int)(0x80 % (longlong)DAT_1464c1c18)) +
               (int)(0x80 / (longlong)DAT_1464c1c18),
               (uint)(0 < (int)(0x80 % (longlong)DAT_1464c1c1c)) +
               (int)(0x80 / (longlong)DAT_1464c1c1c),1);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 2;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x18);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 2;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144dc9c50;
    FUN_141b468e0(param_1,param_2,uVar1,param_4,0);
  }
  return;
}



// FUNCTION 141b301e0 FUN_141b301e0 body=1682 status=ok
// SIG undefined FUN_141b301e0(void)

void FUN_141b301e0(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 local_res18 [2];
  undefined2 *local_38;
  int local_30;
  
  lVar5 = FSceneRenderTargets::Get();
  plVar9 = DAT_146a18418;
  plVar12 = (longlong *)0x0;
  iVar1 = *(int *)(DAT_146a18420 + 4);
  iVar2 = *(int *)(DAT_146a18438 + 4);
  if (iVar1 == 1) {
    lVar3 = *(longlong *)(param_2 + 0x3090);
    local_30 = 0;
    if (iVar2 == 0) {
      local_38 = (undefined2 *)&DAT_146a1f370;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(lVar3 + 0x38,local_res18,&local_38);
      plVar9 = plVar12;
      if ((int)local_res18[0] != -1) {
        plVar9 = (longlong *)((longlong)(int)local_res18[0] * 0x20 + *(longlong *)(lVar3 + 0x38));
      }
      lVar3 = *(longlong *)(param_2 + 0x30);
      plVar7 = plVar9 + 2;
      if (plVar9 == (longlong *)0x0) {
        plVar7 = plVar12;
      }
      lVar4 = *plVar7;
      *(undefined4 *)(lVar3 + 0x90) = *(undefined4 *)(lVar4 + 0xc0);
      *(undefined4 *)(lVar3 + 0x94) = *(undefined4 *)(lVar4 + 0xc4);
      *(undefined4 *)(lVar3 + 0x98) = *(undefined4 *)(lVar4 + 200);
      FUN_141b2f2e0(lVar4,param_1,param_2,lVar5);
    }
    else {
      local_38 = (undefined2 *)&DAT_146a1ece0;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(lVar3 + 0x38,local_res18,&local_38);
      plVar9 = plVar12;
      if ((int)local_res18[0] != -1) {
        plVar9 = (longlong *)((longlong)(int)local_res18[0] * 0x20 + *(longlong *)(lVar3 + 0x38));
      }
      lVar3 = *(longlong *)(param_2 + 0x30);
      plVar7 = plVar9 + 2;
      if (plVar9 == (longlong *)0x0) {
        plVar7 = plVar12;
      }
      lVar4 = *plVar7;
      *(undefined4 *)(lVar3 + 0x90) = *(undefined4 *)(lVar4 + 0xc0);
      *(undefined4 *)(lVar3 + 0x94) = *(undefined4 *)(lVar4 + 0xc4);
      *(undefined4 *)(lVar3 + 0x98) = *(undefined4 *)(lVar4 + 200);
      FUN_141b2f2e0(lVar4,param_1,param_2,lVar5);
    }
  }
  else if (iVar1 == 2) {
    lVar3 = *(longlong *)(param_2 + 0x3090);
    local_30 = 0;
    if (iVar2 == 0) {
      local_38 = (undefined2 *)&DAT_146a1f4c0;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(lVar3 + 0x38,local_res18,&local_38);
      plVar9 = plVar12;
      if ((int)local_res18[0] != -1) {
        plVar9 = (longlong *)((longlong)(int)local_res18[0] * 0x20 + *(longlong *)(lVar3 + 0x38));
      }
      lVar3 = *(longlong *)(param_2 + 0x30);
      plVar7 = plVar9 + 2;
      if (plVar9 == (longlong *)0x0) {
        plVar7 = plVar12;
      }
      lVar4 = *plVar7;
      *(undefined4 *)(lVar3 + 0x90) = *(undefined4 *)(lVar4 + 0xc0);
      *(undefined4 *)(lVar3 + 0x94) = *(undefined4 *)(lVar4 + 0xc4);
      *(undefined4 *)(lVar3 + 0x98) = *(undefined4 *)(lVar4 + 200);
      FUN_141b2f2e0(lVar4,param_1,param_2,lVar5);
    }
    else {
      local_38 = (undefined2 *)&DAT_146a1ee30;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(lVar3 + 0x38,local_res18,&local_38);
      plVar9 = plVar12;
      if ((int)local_res18[0] != -1) {
        plVar9 = (longlong *)((longlong)(int)local_res18[0] * 0x20 + *(longlong *)(lVar3 + 0x38));
      }
      lVar3 = *(longlong *)(param_2 + 0x30);
      plVar7 = plVar9 + 2;
      if (plVar9 == (longlong *)0x0) {
        plVar7 = plVar12;
      }
      lVar4 = *plVar7;
      *(undefined4 *)(lVar3 + 0x90) = *(undefined4 *)(lVar4 + 0xc0);
      *(undefined4 *)(lVar3 + 0x94) = *(undefined4 *)(lVar4 + 0xc4);
      *(undefined4 *)(lVar3 + 0x98) = *(undefined4 *)(lVar4 + 200);
      FUN_141b2f2e0(lVar4,param_1,param_2,lVar5);
    }
  }
  else {
    if (((iVar1 - 4U & 0xfffffff3) == 0) && (iVar1 != 0xc)) {
      if (iVar1 != 4) {
        if (iVar1 == 8) {
          lVar3 = *(longlong *)(param_2 + 0x3090);
          local_30 = 0;
          if (iVar2 == 0) {
            local_38 = (undefined2 *)&DAT_146a1f760;
            TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
            ::FindId(lVar3 + 0x38,local_res18,&local_38);
            plVar9 = plVar12;
            if ((int)local_res18[0] != -1) {
              plVar9 = (longlong *)
                       ((longlong)(int)local_res18[0] * 0x20 + *(longlong *)(lVar3 + 0x38));
            }
            lVar3 = *(longlong *)(param_2 + 0x30);
            plVar7 = plVar9 + 2;
            if (plVar9 == (longlong *)0x0) {
              plVar7 = plVar12;
            }
            lVar4 = *plVar7;
            *(undefined4 *)(lVar3 + 0x90) = *(undefined4 *)(lVar4 + 0xc0);
            *(undefined4 *)(lVar3 + 0x94) = *(undefined4 *)(lVar4 + 0xc4);
            *(undefined4 *)(lVar3 + 0x98) = *(undefined4 *)(lVar4 + 200);
            FUN_141b2f2e0(lVar4,param_1,param_2,lVar5);
          }
          else {
            local_38 = (undefined2 *)&DAT_146a1f0d0;
            TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
            ::FindId(lVar3 + 0x38,local_res18,&local_38);
            plVar9 = plVar12;
            if ((int)local_res18[0] != -1) {
              plVar9 = (longlong *)
                       ((longlong)(int)local_res18[0] * 0x20 + *(longlong *)(lVar3 + 0x38));
            }
            lVar3 = *(longlong *)(param_2 + 0x30);
            plVar7 = plVar9 + 2;
            if (plVar9 == (longlong *)0x0) {
              plVar7 = plVar12;
            }
            lVar4 = *plVar7;
            *(undefined4 *)(lVar3 + 0x90) = *(undefined4 *)(lVar4 + 0xc0);
            *(undefined4 *)(lVar3 + 0x94) = *(undefined4 *)(lVar4 + 0xc4);
            *(undefined4 *)(lVar3 + 0x98) = *(undefined4 *)(lVar4 + 200);
            FUN_141b2f2e0(lVar4,param_1,param_2,lVar5);
          }
        }
        else if (iVar1 == 0x10) {
          lVar3 = *(longlong *)(param_2 + 0x3090);
          local_30 = 0;
          if (iVar2 == 0) {
            local_38 = (undefined2 *)&DAT_146a1f8b0;
            TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
            ::FindId(lVar3 + 0x38,local_res18,&local_38);
            plVar9 = plVar12;
            if ((int)local_res18[0] != -1) {
              plVar9 = (longlong *)
                       ((longlong)(int)local_res18[0] * 0x20 + *(longlong *)(lVar3 + 0x38));
            }
            lVar3 = *(longlong *)(param_2 + 0x30);
            plVar7 = plVar9 + 2;
            if (plVar9 == (longlong *)0x0) {
              plVar7 = plVar12;
            }
            lVar4 = *plVar7;
            *(undefined4 *)(lVar3 + 0x90) = *(undefined4 *)(lVar4 + 0xc0);
            *(undefined4 *)(lVar3 + 0x94) = *(undefined4 *)(lVar4 + 0xc4);
            *(undefined4 *)(lVar3 + 0x98) = *(undefined4 *)(lVar4 + 200);
            FUN_141b2f2e0(lVar4,param_1,param_2,lVar5);
          }
          else {
            local_38 = (undefined2 *)&DAT_146a1f220;
            TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
            ::FindId(lVar3 + 0x38,local_res18,&local_38);
            plVar9 = plVar12;
            if ((int)local_res18[0] != -1) {
              plVar9 = (longlong *)
                       ((longlong)(int)local_res18[0] * 0x20 + *(longlong *)(lVar3 + 0x38));
            }
            lVar3 = *(longlong *)(param_2 + 0x30);
            plVar7 = plVar9 + 2;
            if (plVar9 == (longlong *)0x0) {
              plVar7 = plVar12;
            }
            lVar4 = *plVar7;
            *(undefined4 *)(lVar3 + 0x90) = *(undefined4 *)(lVar4 + 0xc0);
            *(undefined4 *)(lVar3 + 0x94) = *(undefined4 *)(lVar4 + 0xc4);
            *(undefined4 *)(lVar3 + 0x98) = *(undefined4 *)(lVar4 + 200);
            FUN_141b2f2e0(lVar4,param_1,param_2,lVar5);
          }
        }
        goto LAB_141b307a2;
      }
    }
    else {
      FString::PrintfImpl(&local_38,&DAT_143f3edc0,4);
      puVar10 = &DAT_143f3eda8;
      if (local_30 != 0) {
        puVar10 = local_38;
      }
      (**(code **)(*plVar9 + 0x60))(plVar9,puVar10,0x9000000);
      if (local_38 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    lVar3 = *(longlong *)(param_2 + 0x3090);
    local_30 = 0;
    if (iVar2 == 0) {
      local_38 = (undefined2 *)&DAT_146a1f610;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(lVar3 + 0x38,local_res18,&local_38);
      plVar9 = plVar12;
      if ((int)local_res18[0] != -1) {
        plVar9 = (longlong *)((longlong)(int)local_res18[0] * 0x20 + *(longlong *)(lVar3 + 0x38));
      }
      lVar3 = *(longlong *)(param_2 + 0x30);
      plVar7 = plVar9 + 2;
      if (plVar9 == (longlong *)0x0) {
        plVar7 = plVar12;
      }
      lVar4 = *plVar7;
      *(undefined4 *)(lVar3 + 0x90) = *(undefined4 *)(lVar4 + 0xc0);
      *(undefined4 *)(lVar3 + 0x94) = *(undefined4 *)(lVar4 + 0xc4);
      *(undefined4 *)(lVar3 + 0x98) = *(undefined4 *)(lVar4 + 200);
      FUN_141b2f2e0(lVar4,param_1,param_2,lVar5);
    }
    else {
      local_38 = (undefined2 *)&DAT_146a1ef80;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(lVar3 + 0x38,local_res18,&local_38);
      plVar9 = plVar12;
      if ((int)local_res18[0] != -1) {
        plVar9 = (longlong *)((longlong)(int)local_res18[0] * 0x20 + *(longlong *)(lVar3 + 0x38));
      }
      lVar3 = *(longlong *)(param_2 + 0x30);
      plVar7 = plVar9 + 2;
      if (plVar9 == (longlong *)0x0) {
        plVar7 = plVar12;
      }
      lVar4 = *plVar7;
      *(undefined4 *)(lVar3 + 0x90) = *(undefined4 *)(lVar4 + 0xc0);
      *(undefined4 *)(lVar3 + 0x94) = *(undefined4 *)(lVar4 + 0xc4);
      *(undefined4 *)(lVar3 + 0x98) = *(undefined4 *)(lVar4 + 200);
      FUN_141b2f2e0(lVar4,param_1,param_2,lVar5);
    }
  }
LAB_141b307a2:
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  local_res18[0] = *(undefined8 *)(*(longlong *)(lVar5 + 0x308) + 0x10);
  puVar6 = puVar11 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar11 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar6;
  *puVar11 = local_res18[0];
  puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar8 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar6;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar8;
  *(undefined8 **)(param_1 + 8) = puVar8 + 1;
  puVar8[1] = 0;
  puVar8[3] = puVar11;
  *puVar8 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar8 + 2) = 1;
  *(undefined4 *)(puVar8 + 4) = 0;
  *(undefined1 *)((longlong)puVar8 + 0x24) = 0;
  return;
}



// FUNCTION 141b30880 FUN_141b30880 body=454 status=ok
// SIG undefined FUN_141b30880(void)

void FUN_141b30880(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined8 local_res10;
  undefined *local_38;
  undefined4 local_30;
  
  lVar4 = FSceneRenderTargets::Get();
  lVar2 = *(longlong *)(param_2 + 0x3090);
  local_30 = 0;
  lVar9 = *(longlong *)(lVar4 + 0x308);
  local_38 = &DAT_146a17c50;
  iVar1 = *(int *)(*(longlong *)(lVar9 + 0x10) + 0x34);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res10,&local_38);
  puVar5 = (undefined8 *)0x0;
  if ((int)local_res10 != -1) {
    puVar5 = (undefined8 *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  iVar8 = 1;
  puVar7 = puVar5 + 2;
  if (puVar5 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  uVar3 = *puVar7;
  if (1 < iVar1) {
    do {
      FUN_141b2f9d0(uVar3,param_1,param_2,lVar4,*(longlong *)(lVar4 + 0x308) + 8,lVar4 + 0x310,
                    iVar8 + -1,iVar8);
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar1);
    lVar9 = *(longlong *)(lVar4 + 0x308);
  }
  local_res10 = *(undefined8 *)(lVar9 + 0x10);
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar7 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar5;
  *puVar7 = local_res10;
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar6 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar5;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar6;
  *(undefined8 **)(param_1 + 8) = puVar6 + 1;
  puVar6[1] = 0;
  puVar6[3] = puVar7;
  *puVar6 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar6 + 2) = 1;
  *(undefined4 *)(puVar6 + 4) = 0;
  *(undefined1 *)((longlong)puVar6 + 0x24) = 0;
  return;
}



// FUNCTION 141b30a50 FUN_141b30a50 body=91 status=ok
// SIG undefined FUN_141b30a50(void)

undefined8 FUN_141b30a50(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((0x1f < param_1) || ((0xc0000005U >> (param_1 & 0x1f) & 1) == 0)) {
    if ((param_1 < 0x1c) &&
       ((((0x8c51800U >> (param_1 & 0x1f) & 1) != 0 && (iVar1 = FUN_1419ef5f0(), 2 < iVar1)) &&
        (uVar2 = RHIGetShaderLanguageVersion(param_1), 1 < uVar2)))) {
      return 1;
    }
    if (((param_1 - 4 & 0xffffffe7) != 0) || (param_1 == 0xc)) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 141b30ab0 FUN_141b30ab0 body=989 status=ok
// SIG undefined FUN_141b30ab0(void)

byte FUN_141b30ab0(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
                  undefined1 param_5)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  byte bVar15;
  ulonglong in_stack_ffffffffffffff38;
  undefined8 local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  uint local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_48 [16];
  
  if (*(int *)(param_3 + 0x2258) == 0) {
    bVar15 = 0;
  }
  else {
    iVar6 = *(int *)(param_3 + 0x2258) + -1;
    if (-1 < iVar6) {
      lVar14 = 0;
      do {
        local_a8 = (longlong *)0x0;
        lVar11 = *(longlong *)(*(longlong *)(param_3 + 0x2250) + lVar14 * 8);
        (**(code **)(**(longlong **)(lVar11 + 0xa8) + 0x40))
                  (*(longlong **)(lVar11 + 0xa8),*(undefined4 *)(param_3 + 0x1a38),&local_88,
                   &local_a8);
        cVar4 = (**(code **)(*local_a8 + 0x28))();
        uVar10 = (uint)(cVar4 != '\0');
        do {
          local_80 = *param_4;
          local_78 = param_4[1];
          local_70 = *(undefined4 *)(param_4 + 2);
          local_68 = param_4[3];
          if (local_68 != 0) {
            LOCK();
            *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
            UNLOCK();
          }
          local_60 = param_4[4];
          local_50 = *(undefined4 *)(param_4 + 6);
          local_58 = *(undefined4 *)(param_4 + 5);
          local_54 = -(uint)(uVar10 != 0) & 8 ^ *(uint *)((longlong)param_4 + 0x2c);
          local_4c = 0;
          in_stack_ffffffffffffff38 = in_stack_ffffffffffffff38 & 0xffffffffffffff00;
          FUN_141b30e90(param_2,param_3,param_5,lVar11,in_stack_ffffffffffffff38,&local_80,0,
                        *(undefined4 *)(lVar11 + 0xb0));
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>();
          uVar10 = uVar10 - 1;
        } while (-1 < (int)uVar10);
        lVar14 = lVar14 + 1;
      } while (lVar14 <= iVar6);
    }
    bVar15 = 1;
  }
  if ((int)param_1[1] != 0) {
    iVar6 = 0;
    local_a8 = (longlong *)((ulonglong)local_a8._4_4_ << 0x20);
    if (0 < (int)param_1[1]) {
      local_90 = 0;
      do {
        lVar14 = *(longlong *)(param_3 + 0x1b30);
        local_88 = *(longlong **)(local_90 + *param_1);
        lVar11 = local_88[0x28];
        iVar1 = *(int *)(lVar11 + 0xe8);
        local_a0 = (longlong *)(longlong)iVar1;
        local_98 = lVar11;
        cVar4 = (**(code **)(*local_88 + 0x18))();
        iVar2 = *(int *)(lVar11 + 0xe8);
        lVar9 = 0x2290;
        if (cVar4 != '\0') {
          lVar9 = 0x22b0;
        }
        if (iVar2 == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(*(longlong *)(lVar9 + param_3) + -4 + (longlong)iVar2 * 4);
        }
        iVar2 = *(int *)(*(longlong *)(lVar9 + param_3) + (longlong)iVar2 * 4);
        plVar13 = (longlong *)(longlong)iVar1;
        if (iVar8 < iVar2) {
          lVar11 = (longlong)iVar8 * 0x18;
          uVar12 = (ulonglong)(uint)(iVar2 - iVar8);
          do {
            if (cVar4 == '\0') {
              lVar9 = *(longlong *)(param_3 + 0x2280);
            }
            else {
              lVar9 = *(longlong *)(param_3 + 0x22a0);
            }
            in_stack_ffffffffffffff38 = in_stack_ffffffffffffff38 & 0xffffffffffffff00;
            bVar5 = FUN_141b30e90(param_2,param_3,param_5,*(longlong *)(lVar9 + lVar11),
                                  in_stack_ffffffffffffff38,param_4,
                                  *(undefined8 *)(lVar9 + 8 + lVar11),
                                  *(undefined4 *)(*(longlong *)(lVar9 + lVar11) + 0xb0));
            bVar15 = bVar15 | bVar5;
            lVar11 = lVar11 + 0x18;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
          lVar11 = local_98;
          plVar13 = local_a0;
          iVar6 = (int)local_a8;
        }
        plVar3 = local_88;
        if ((*(uint *)(lVar14 + 4 + (longlong)plVar13 * 8) & 0x100) != 0) {
          iVar6 = 0;
          if (0 < *(int *)(lVar11 + 0x38)) {
            lVar14 = 0;
            do {
              lVar11 = *(longlong *)(lVar14 + *(longlong *)(lVar11 + 0x30));
              uVar10 = *(uint *)(lVar11 + 200);
              lVar9 = *(longlong *)(param_3 + 0x1b50);
              if (*(longlong *)(param_3 + 0x1b50) == 0) {
                lVar9 = param_3 + 0x1b40;
              }
              uVar7 = uVar10;
              if ((int)uVar10 < 0) {
                uVar7 = uVar10 + 0x1f;
              }
              if ((*(uint *)(lVar9 + (longlong)((int)uVar7 >> 5) * 4) >> (uVar10 & 0x1f) & 1) != 0)
              {
                local_a0 = (longlong *)0x0;
                (**(code **)(**(longlong **)(lVar11 + 0xa8) + 0x40))
                          (*(longlong **)(lVar11 + 0xa8),*(undefined4 *)(param_3 + 0x1a38),local_48,
                           &local_a0);
                uVar10 = (**(code **)(*local_a0 + 0x1e8))();
                if (1 < uVar10) {
                  if ((*(uint *)(lVar11 + 0x8c) & 0x2000000) == 0) {
                    in_stack_ffffffffffffff38 =
                         (1L << ((byte)*(undefined4 *)(lVar11 + 0x80) & 0x3f)) - 1;
                  }
                  else {
                    in_stack_ffffffffffffff38 =
                         *(ulonglong *)
                          (*(longlong *)(param_3 + 0x1c50) + (longlong)*(int *)(lVar11 + 0xcc) * 8);
                  }
                  bVar5 = FUN_141b32450(param_2,param_3,param_5,lVar11,in_stack_ffffffffffffff38,
                                        param_4,plVar3,*(undefined4 *)(lVar11 + 0xb0));
                  bVar15 = bVar15 | bVar5;
                }
              }
              iVar6 = iVar6 + 1;
              lVar14 = lVar14 + 8;
              lVar11 = local_98;
            } while (iVar6 < *(int *)(local_98 + 0x38));
          }
          iVar6 = (int)local_a8;
        }
        iVar6 = iVar6 + 1;
        local_90 = local_90 + 8;
        local_a8 = (longlong *)CONCAT44(local_a8._4_4_,iVar6);
      } while (iVar6 < (int)param_1[1]);
    }
  }
  return bVar15;
}



// FUNCTION 141b30e90 FUN_141b30e90 body=662 status=ok
// SIG undefined FUN_141b30e90(void)

undefined8
FUN_141b30e90(undefined8 param_1,longlong param_2,undefined1 param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  longlong *local_res10 [2];
  longlong *local_res20;
  undefined8 in_stack_fffffffffffffea8;
  ulonglong uVar9;
  ulonglong *puVar10;
  undefined8 in_stack_fffffffffffffeb8;
  uint uVar11;
  undefined8 in_stack_fffffffffffffec0;
  undefined4 uVar12;
  undefined8 local_128;
  ulonglong local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined1 local_e4;
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  undefined1 local_c8 [96];
  undefined1 local_68 [48];
  
  uVar11 = (uint)((ulonglong)in_stack_fffffffffffffeb8 >> 0x20);
  uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffec0 >> 0x20);
  uVar1 = *(undefined4 *)(param_2 + 0x1a38);
  plVar3 = *(longlong **)(param_4 + 0xa8);
  if (plVar3 != (longlong *)0x0) {
    iVar8 = 0;
    local_res10[0] = (longlong *)0x0;
    (**(code **)(*plVar3 + 0x40))(plVar3,uVar1,local_e0,local_res10);
    cVar5 = (**(code **)(*local_res10[0] + 0x220))();
    if (cVar5 != '\0') {
      local_res20 = (longlong *)0x0;
      (**(code **)(**(longlong **)(param_4 + 0xa8) + 0x40))
                (*(longlong **)(param_4 + 0xa8),uVar1,local_d8,&local_res20);
      iVar6 = (**(code **)(*local_res20 + 0x20))();
      if ((iVar6 != 3) &&
         (puVar4 = (undefined8 *)CONCAT44(param_6._4_4_,(uint)param_6),
         *(byte *)(param_2 + 0x11b4) == ((byte)(*(uint *)((longlong)puVar4 + 0x2c) >> 3) & 1))) {
        uVar2 = *(uint *)(param_4 + 0x8c);
        local_128 = 0;
        param_6._4_4_ = uVar2 >> 0xc & 0x3f;
        param_6._0_4_ =
             ((uVar2 >> 0x13 & 0x80 | uVar2 & 0x100) >> 2 | uVar2 & 0x10) >> 4 | uVar2 & 8;
        local_120 = CONCAT44(uVar2 >> 0xc,(uint)param_6) & 0x3fffffffff;
        (**(code **)(**(longlong **)(param_4 + 0xa8) + 0x40))
                  (*(longlong **)(param_4 + 0xa8),uVar1,local_d0,&local_128);
        puVar10 = &local_120;
        uVar9 = CONCAT71((int7)((ulonglong)in_stack_fffffffffffffea8 >> 8),param_3);
        FUN_141b26040(local_c8,*(undefined8 *)(param_4 + 0xa0),*(undefined8 *)(param_4 + 0xa8),
                      local_128,uVar9,puVar10,(ulonglong)uVar11 << 0x20,CONCAT44(uVar12,uVar1));
        local_118 = *puVar4;
        local_110 = puVar4[1];
        local_108 = *(undefined4 *)(puVar4 + 2);
        local_100 = puVar4[3];
        if (local_100 != 0) {
          LOCK();
          *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
          UNLOCK();
        }
        local_f8 = puVar4[4];
        local_e8 = *(undefined4 *)(param_4 + 0x90);
        local_f0 = *(undefined4 *)(puVar4 + 5);
        local_ec = *(undefined4 *)((longlong)puVar4 + 0x2c);
        local_e4 = 0;
        uVar7 = FUN_141b32d50(local_c8,local_68,*(undefined4 *)(param_2 + 0x1a38));
        FUN_141a9adc0(param_1,local_c8,&local_118,uVar7);
        FUN_141b459d0(local_c8,param_1,&local_118,param_2,uVar9 & 0xffffffffffffff00);
        uVar7 = param_7;
        if (0 < *(int *)(param_4 + 0x80)) {
          do {
            uVar9 = CONCAT44((int)((ulonglong)puVar10 >> 0x20),iVar8);
            FUN_141b3ded0(local_c8,param_1,param_2,uVar7,param_4,uVar9,&local_118,&param_6,0);
            puVar10 = (ulonglong *)(uVar9 & 0xffffffffffffff00);
            FUN_141b315b0(local_c8,param_1,param_2,param_4,iVar8,puVar10);
            iVar8 = iVar8 + 1;
          } while (iVar8 < *(int *)(param_4 + 0x80));
        }
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_100);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 141b31130 FUN_141b31130 body=1152 status=ok
// SIG undefined FUN_141b31130(void)

undefined1
FUN_141b31130(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
             ulonglong *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,char param_11,undefined1 param_12)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  undefined1 local_res10;
  uint local_res20;
  uint uStackX_24;
  ulonglong uVar8;
  undefined8 in_stack_fffffffffffffec0;
  uint uVar9;
  ulonglong local_118;
  ulonglong local_110;
  uint local_108 [2];
  ulonglong local_100;
  longlong local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  longlong local_c0;
  longlong local_b8;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  longlong local_88 [2];
  undefined4 local_78;
  uint local_74;
  undefined4 local_70;
  undefined1 local_6c;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  
  uVar9 = (uint)((ulonglong)in_stack_fffffffffffffec0 >> 0x20);
  uVar6 = *(uint *)(param_4 + 0x8c);
  plVar7 = *(longlong **)(param_4 + 0xa8);
  local_res10 = 0;
  uStackX_24 = uVar6 >> 0xc & 0x3f;
  local_118 = 0;
  local_res20 = ((uVar6 >> 0x13 & 0x80 | uVar6 & 0x100) >> 2 | uVar6 & 0x10) >> 4 | uVar6 & 8;
  local_110 = CONCAT44(uVar6 >> 0xc,local_res20) & 0x3fffffffff;
  (**(code **)(*plVar7 + 0x40))(plVar7,*(undefined4 *)(param_2 + 0x1a38),&local_100,&local_118);
  uVar8 = local_118;
  FUN_141b279e0(&local_f8,*(undefined8 *)(param_4 + 0xa0),plVar7,local_118,&local_110,
                (ulonglong)uVar9 << 0x20);
  plVar7 = local_f0;
  uVar2 = (**(code **)(*local_f0 + 0x40))(local_f0);
  lVar3 = FUN_1425939a0(uVar8,&DAT_146a18190,uVar2,1);
  local_b8 = lVar3;
  uVar2 = (**(code **)(*plVar7 + 0x40))(plVar7);
  lVar4 = FUN_1425939a0(uVar8,&DAT_146a18040,uVar2,1);
  local_88[0] = *(longlong *)(param_2 + 0x20);
  local_90 = 0x11;
  local_a0 = 0;
  uStack_98 = 0;
  if (local_88[0] != 0) {
    LOCK();
    *(int *)(local_88[0] + 8) = *(int *)(local_88[0] + 8) + 1;
    UNLOCK();
    lVar3 = local_b8;
    plVar7 = local_f0;
  }
  lVar3 = *(longlong *)(lVar3 + 0x48);
  local_88[1] = 0;
  local_78 = 0;
  local_6c = 0;
  local_70 = 0;
  local_74 = (uint)(*(char *)(param_2 + 0x1205) != '\0') |
             -(uint)(*(char *)(param_2 + 0x11b4) != '\0') & 8;
  local_f8 = lVar4;
  local_c0 = lVar4;
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar2 = *(undefined8 *)(lVar3 + 0x40);
  lVar3 = *(longlong *)(lVar4 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  local_68 = plVar7[0xc9];
  local_60 = *(undefined8 *)(lVar3 + 0x38);
  local_58 = 0;
  uStack_50 = 0;
  local_40 = 0;
  local_48 = uVar2;
  FUN_141a9adc0(param_1,&local_f8,param_6,&local_68);
  lVar4 = local_c0;
  FUN_141b457a0(local_c0,param_1,local_e8,local_e0,param_2,&local_a0,param_11,param_12);
  lVar5 = local_b8;
  lVar3 = *(longlong *)(local_b8 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  FUN_141aa87d0(lVar5,param_1,*(undefined8 *)(lVar3 + 0x40),local_e8,local_e0,param_2,param_2 + 0x28
                ,0);
  FUN_141a0cff0(local_f0,*(undefined4 *)(param_2 + 0x1a38));
  _param_12 = 0;
  local_110 = 0;
  local_118 = *param_5;
  uVar8 = local_e0;
  do {
    local_100 = local_118;
    if ((local_118 & 1) != 0) {
      if (param_11 == '\0') {
LAB_141b31416:
        param_5._0_4_ = 1;
      }
      else {
        param_5._0_4_ = 2;
        lVar3 = *(longlong *)(param_4 + 0x78);
        if (*(longlong *)(param_4 + 0x78) == 0) {
          lVar3 = param_4;
        }
        if (*(char *)(lVar3 + 0x67 + local_110) == '\0') goto LAB_141b31416;
      }
      uVar6 = 0;
      local_a8 = (longlong)_param_12 * 0x78;
      local_res10 = 1;
      do {
        lVar3 = local_a8;
        local_108[0] = uVar6;
        if ((uVar6 != 0) && (*(short *)(lVar4 + 0x154) != 0)) {
          lVar5 = *(longlong *)(lVar4 + 0x48);
          if (*(char *)(lVar5 + 0x28) == '\0') {
            FUN_1419f3850(lVar5);
          }
          FUN_1404986d0(param_1,*(undefined8 *)(lVar5 + 0x38),lVar4 + 0x150,local_108,
                        uVar8 & 0xffffffff00000000);
        }
        lVar5 = *(longlong *)(param_4 + 0x78);
        if (*(longlong *)(param_4 + 0x78) == 0) {
          lVar5 = param_4;
        }
        lVar1 = *(longlong *)(lVar4 + 0x48);
        if (*(char *)(lVar1 + 0x28) == '\0') {
          FUN_1419f3850(lVar1);
        }
        FUN_141d84f90(lVar4,param_1,*(undefined8 *)(lVar1 + 0x38),local_f0,param_2,param_8,
                      lVar5 + lVar3,param_6,0);
        uVar2 = param_8;
        FUN_141b3dce0(local_b8,param_1,local_f0,param_2,param_8,lVar5 + lVar3,param_6,&local_res20);
        uVar8 = CONCAT44((int)((ulonglong)uVar2 >> 0x20),_param_12);
        FUN_141b315b0(&local_f8,param_1,param_2,param_4,uVar8,param_11);
        uVar6 = uVar6 + 1;
      } while (uVar6 < (uint)param_5);
    }
    local_118 = local_118 >> 1;
    _param_12 = _param_12 + 1;
    local_110 = local_110 + 0x78;
    if (local_100 < 2) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_88);
      return local_res10;
    }
  } while( true );
}



// FUNCTION 141b315b0 FUN_141b315b0 body=3742 status=ok
// SIG undefined FUN_141b315b0(void)

void FUN_141b315b0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  uint param_5,char param_6)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 uVar13;
  bool bVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  wchar_t *pwVar21;
  undefined4 *puVar22;
  wchar_t *in_stack_ffffffffffffff88;
  int *local_50 [3];
  
  bVar14 = false;
  lVar20 = *(longlong *)(param_4 + 0x78);
  if (*(longlong *)(param_4 + 0x78) == 0) {
    lVar20 = param_4;
  }
  lVar20 = lVar20 + (longlong)(int)param_5 * 0x78;
  if (*(longlong *)(lVar20 + 0x10) == 0) {
    if (*(char *)(lVar20 + 0x69) == '\0') {
      piVar17 = *(int **)(lVar20 + 0x30);
      if (*(int **)(lVar20 + 0x30) == (int *)0x0) {
        piVar17 = (int *)(lVar20 + 0x28);
      }
      local_50[0] = piVar17 + (longlong)*(int *)(lVar20 + 0x38) * 2;
      if (piVar17 != local_50[0]) {
        do {
          in_stack_ffffffffffffff88 =
               (wchar_t *)((ulonglong)in_stack_ffffffffffffff88 & 0xffffffff00000000);
          FUN_141b3dbd0(param_1,param_2,param_3,*(int *)(lVar20 + 0x44) + *piVar17,
                        in_stack_ffffffffffffff88,1);
          uVar4 = *(undefined4 *)(lVar20 + 0x40);
          iVar19 = *(int *)(lVar20 + 0x44);
          iVar18 = *piVar17;
          puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          iVar2 = piVar17[1];
          uVar7 = *(uint *)(param_4 + 0x8c);
          puVar15 = puVar16 + 4;
          if (*(undefined8 **)(param_2 + 0x38) < puVar15) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x28);
            puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar15 = puVar16 + 4;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar15;
          piVar17 = piVar17 + 2;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar16;
          *(undefined8 **)(param_2 + 8) = puVar16 + 1;
          puVar16[1] = 0;
          *(int *)(puVar16 + 3) = iVar2;
          *(undefined4 *)((longlong)puVar16 + 0x1c) = uVar4;
          *puVar16 = &PTR_LAB_143f59410;
          *(uint *)(puVar16 + 2) = uVar7 >> 0xc & 0x3f;
          *(int *)((longlong)puVar16 + 0x14) = iVar19 + iVar18;
        } while (piVar17 != local_50[0]);
      }
    }
    else if (DAT_146ab6324 == '\0') {
      if ((*(uint *)(param_1 + 0x30) >> 1 & 1) == 0) {
        param_5 = 0;
        if (*(int *)(lVar20 + 0x40) != 0) {
          do {
            lVar12 = (ulonglong)(param_5 * 2) * 4;
            iVar19 = (*(int *)(*(longlong *)(lVar20 + 0x18) + (ulonglong)(param_5 * 2 + 1) * 4) -
                     *(int *)(*(longlong *)(lVar20 + 0x18) + lVar12)) + 1;
            in_stack_ffffffffffffff88 =
                 (wchar_t *)((ulonglong)in_stack_ffffffffffffff88 & 0xffffffff00000000);
            FUN_141b3dbd0(param_1,param_2,param_3,*(undefined4 *)(lVar20 + 0x44),
                          in_stack_ffffffffffffff88,iVar19);
            FUN_141a00720(*(undefined8 *)(param_1 + 8),param_2,
                          *(undefined4 *)(lVar12 + *(longlong *)(lVar20 + 0x18)));
            piVar17 = *(int **)(lVar20 + 0x30);
            if (*(int **)(lVar20 + 0x30) == (int *)0x0) {
              piVar17 = (int *)(lVar20 + 0x28);
            }
            local_50[0] = piVar17 + (longlong)*(int *)(lVar20 + 0x38) * 2;
            if (piVar17 != local_50[0]) {
              do {
                iVar18 = *(int *)(param_1 + 0x2c);
                iVar2 = piVar17[1];
                uVar7 = *(uint *)(param_4 + 0x8c);
                puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                uVar4 = *(undefined4 *)(lVar20 + 0x44);
                puVar15 = puVar16 + 4;
                if (*(undefined8 **)(param_2 + 0x38) < puVar15) {
                  FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x28);
                  puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                  puVar15 = puVar16 + 4;
                }
                *(undefined8 **)(param_2 + 0x30) = puVar15;
                piVar17 = piVar17 + 2;
                *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
                **(undefined8 **)(param_2 + 8) = puVar16;
                *(undefined8 **)(param_2 + 8) = puVar16 + 1;
                puVar16[1] = 0;
                *(undefined4 *)((longlong)puVar16 + 0x14) = uVar4;
                *(int *)((longlong)puVar16 + 0x1c) = iVar19 * iVar18;
                *puVar16 = &PTR_LAB_143f59410;
                *(uint *)(puVar16 + 2) = uVar7 >> 0xc & 0x3f;
                *(int *)(puVar16 + 3) = iVar2;
              } while (piVar17 != local_50[0]);
            }
            param_5 = param_5 + 1;
          } while (param_5 < *(uint *)(lVar20 + 0x40));
        }
      }
      else {
        param_5 = 0;
        if (*(int *)(lVar20 + 0x40) != 0) {
          do {
            lVar12 = (ulonglong)(param_5 * 2) * 4;
            iVar19 = (*(int *)(*(longlong *)(lVar20 + 0x18) + (ulonglong)(param_5 * 2 + 1) * 4) -
                     *(int *)(*(longlong *)(lVar20 + 0x18) + lVar12)) + 1;
            in_stack_ffffffffffffff88 =
                 (wchar_t *)((ulonglong)in_stack_ffffffffffffff88 & 0xffffffff00000000);
            FUN_141b3dbd0(param_1,param_2,param_3,*(undefined4 *)(lVar20 + 0x44),
                          in_stack_ffffffffffffff88,iVar19);
            FUN_141a00810(*(undefined8 *)(param_1 + 8),param_2,
                          *(undefined4 *)(lVar12 + *(longlong *)(lVar20 + 0x18)));
            piVar17 = *(int **)(lVar20 + 0x30);
            if (*(int **)(lVar20 + 0x30) == (int *)0x0) {
              piVar17 = (int *)(lVar20 + 0x28);
            }
            local_50[0] = piVar17 + (longlong)*(int *)(lVar20 + 0x38) * 2;
            if (piVar17 != local_50[0]) {
              do {
                iVar18 = *(int *)(param_1 + 0x2c);
                iVar2 = piVar17[1];
                uVar7 = *(uint *)(param_4 + 0x8c);
                puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                uVar4 = *(undefined4 *)(lVar20 + 0x44);
                puVar15 = puVar16 + 4;
                if (*(undefined8 **)(param_2 + 0x38) < puVar15) {
                  FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x28);
                  puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                  puVar15 = puVar16 + 4;
                }
                *(undefined8 **)(param_2 + 0x30) = puVar15;
                piVar17 = piVar17 + 2;
                *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
                **(undefined8 **)(param_2 + 8) = puVar16;
                *(undefined8 **)(param_2 + 8) = puVar16 + 1;
                puVar16[1] = 0;
                *(undefined4 *)((longlong)puVar16 + 0x14) = uVar4;
                *(int *)((longlong)puVar16 + 0x1c) = iVar19 * iVar18;
                *puVar16 = &PTR_LAB_143f59410;
                *(uint *)(puVar16 + 2) = uVar7 >> 0xc & 0x3f;
                *(int *)(puVar16 + 3) = iVar2;
              } while (piVar17 != local_50[0]);
            }
            param_5 = param_5 + 1;
          } while (param_5 < *(uint *)(lVar20 + 0x40));
        }
      }
    }
    else {
      param_5 = 0;
      if (*(int *)(lVar20 + 0x40) != 0) {
        do {
          iVar19 = *(int *)(*(longlong *)(lVar20 + 0x18) + (ulonglong)(param_5 * 2) * 4);
          iVar18 = (*(int *)(*(longlong *)(lVar20 + 0x18) + (ulonglong)(param_5 * 2 + 1) * 4) -
                   iVar19) + 1;
          FUN_141b3dbd0(param_1,param_2,param_3,*(undefined4 *)(lVar20 + 0x44),iVar19,iVar18);
          piVar17 = *(int **)(lVar20 + 0x30);
          if (*(int **)(lVar20 + 0x30) == (int *)0x0) {
            piVar17 = (int *)(lVar20 + 0x28);
          }
          local_50[0] = piVar17 + (longlong)*(int *)(lVar20 + 0x38) * 2;
          if (piVar17 != local_50[0]) {
            do {
              uVar4 = *(undefined4 *)(lVar20 + 0x44);
              iVar19 = *(int *)(param_1 + 0x2c);
              iVar2 = piVar17[1];
              uVar7 = *(uint *)(param_4 + 0x8c);
              puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar15 = puVar16 + 4;
              if (*(undefined8 **)(param_2 + 0x38) < puVar15) {
                FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x28);
                puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar15 = puVar16 + 4;
              }
              *(undefined8 **)(param_2 + 0x30) = puVar15;
              piVar17 = piVar17 + 2;
              *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
              **(undefined8 **)(param_2 + 8) = puVar16;
              *(undefined8 **)(param_2 + 8) = puVar16 + 1;
              puVar16[1] = 0;
              *puVar16 = &PTR_LAB_143f59410;
              *(int *)(puVar16 + 3) = iVar2;
              *(undefined4 *)((longlong)puVar16 + 0x14) = uVar4;
              *(uint *)(puVar16 + 2) = uVar7 >> 0xc & 0x3f;
              *(int *)((longlong)puVar16 + 0x1c) = iVar18 * iVar19;
            } while (piVar17 != local_50[0]);
          }
          param_5 = param_5 + 1;
        } while (param_5 < *(uint *)(lVar20 + 0x40));
      }
    }
  }
  else {
    if (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) == 0) {
      plVar11 = *(longlong **)(param_1 + 0x10);
      in_stack_ffffffffffffff88 = L"";
      if (plVar11 == (longlong *)0x0) {
        pwVar21 = L"null";
      }
      else {
        puVar15 = (undefined8 *)(**(code **)(*plVar11 + 0x38))(plVar11,local_50);
        if (*(int *)(puVar15 + 1) == 0) {
          pwVar21 = L"";
          bVar14 = true;
        }
        else {
          pwVar21 = (wchar_t *)*puVar15;
          bVar14 = true;
        }
      }
      LowLevelFatalErrorHandler
                ("Unknown",0x6c,
                 L"FMeshDrawingPolicy::DrawMesh - BatchElement has an index buffer object with null RHI resource (drawing using material \"%s\")"
                 ,pwVar21);
      if ((bVar14) && (local_50[0] != (int *)0x0)) {
        FMemory::Free();
      }
      bVar14 = false;
      plVar11 = *(longlong **)(param_1 + 0x10);
      if (plVar11 == (longlong *)0x0) {
        in_stack_ffffffffffffff88 = L"null";
      }
      else {
        bVar14 = true;
        puVar15 = (undefined8 *)(**(code **)(*plVar11 + 0x38))(plVar11,local_50);
        if (*(int *)(puVar15 + 1) != 0) {
          in_stack_ffffffffffffff88 = (wchar_t *)*puVar15;
        }
      }
      FDebug::AssertFailed
                (&DAT_144dd5dce,"Unknown",0x6c,
                 L"FMeshDrawingPolicy::DrawMesh - BatchElement has an index buffer object with null RHI resource (drawing using material \"%s\")"
                 ,in_stack_ffffffffffffff88);
      if ((bVar14) && (local_50[0] != (int *)0x0)) {
        FMemory::Free();
      }
    }
    if (*(char *)(lVar20 + 0x69) == '\0') {
      lVar12 = *(longlong *)(lVar20 + 0x70);
      if (lVar12 == 0) {
        if ((param_6 == '\0') || (iVar19 = 2, *(char *)(lVar20 + 0x67) != '\0')) {
          iVar19 = *(int *)(lVar20 + 0x40);
        }
        FUN_141b3dbd0(param_1,param_2,param_3,*(undefined4 *)(lVar20 + 0x44),
                      (ulonglong)in_stack_ffffffffffffff88 & 0xffffffff00000000,iVar19);
        piVar17 = *(int **)(lVar20 + 0x30);
        if (*(int **)(lVar20 + 0x30) == (int *)0x0) {
          piVar17 = (int *)(lVar20 + 0x28);
        }
        local_50[0] = piVar17 + (longlong)*(int *)(lVar20 + 0x38) * 2;
        if (piVar17 != local_50[0]) {
          do {
            iVar18 = *(int *)(lVar20 + 0x4c);
            iVar2 = *(int *)(lVar20 + 0x48);
            lVar12 = *(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30);
            iVar3 = *(int *)(param_1 + 0x2c);
            iVar8 = piVar17[1];
            iVar9 = *piVar17;
            uVar4 = *(undefined4 *)(lVar20 + 0x44);
            uVar7 = *(uint *)(param_4 + 0x8c);
            if (lVar12 == 0) {
              LowLevelFatalErrorHandler
                        ("Unknown",0x8d8,
                         L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
              FDebug::AssertFailed
                        (&DAT_143f3f584,"Unknown",0x8d8,
                         L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
            }
            puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar15 = puVar16 + 7;
            if (*(undefined8 **)(param_2 + 0x38) < puVar15) {
              FMemStackBase::AllocateNewChunk(param_2 + 0x30);
              puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar15 = puVar16 + 7;
            }
            *(undefined8 **)(param_2 + 0x30) = puVar15;
            piVar17 = piVar17 + 2;
            *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
            **(undefined8 **)(param_2 + 8) = puVar16;
            *(undefined8 **)(param_2 + 8) = puVar16 + 1;
            puVar16[1] = 0;
            *puVar16 = &PTR_LAB_143f489d0;
            *(undefined4 *)((longlong)puVar16 + 0x1c) = uVar4;
            *(int *)(puVar16 + 5) = iVar9;
            *(int *)((longlong)puVar16 + 0x24) = (iVar18 - iVar2) + 1;
            *(int *)((longlong)puVar16 + 0x2c) = iVar8;
            puVar16[2] = lVar12;
            *(uint *)(puVar16 + 3) = uVar7 >> 0xc & 0x3f;
            *(undefined4 *)(puVar16 + 4) = 0;
            *(int *)(puVar16 + 6) = iVar19 * iVar3;
          } while (piVar17 != local_50[0]);
        }
      }
      else {
        uVar7 = *(uint *)(param_4 + 0x8c);
        puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        uVar13 = *(undefined8 *)(*(longlong *)(lVar20 + 0x10) + 0x30);
        puVar15 = puVar16 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar15) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30);
          puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar15 = puVar16 + 5;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar15;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar16;
        *(undefined8 **)(param_2 + 8) = puVar16 + 1;
        puVar16[1] = 0;
        *puVar16 = &PTR_LAB_144de0188;
        puVar16[2] = uVar13;
        puVar16[3] = lVar12;
        *(uint *)(puVar16 + 4) = uVar7 >> 0xc & 0x3f;
        *(undefined4 *)((longlong)puVar16 + 0x24) = 0;
      }
    }
    else if (DAT_146ab6324 == '\0') {
      if ((*(uint *)(param_1 + 0x30) >> 1 & 1) == 0) {
        param_5 = 0;
        if (*(int *)(lVar20 + 0x40) != 0) {
          do {
            iVar19 = *(int *)(*(longlong *)(lVar20 + 0x18) + (ulonglong)(param_5 * 2) * 4);
            iVar18 = (*(int *)(*(longlong *)(lVar20 + 0x18) + (ulonglong)(param_5 * 2 + 1) * 4) -
                     iVar19) + 1;
            FUN_141b3dbd0(param_1,param_2,param_3,*(undefined4 *)(lVar20 + 0x44),iVar19,iVar18);
            FUN_141a00720(*(undefined8 *)(param_4 + 0xa0),param_2,iVar19);
            puVar22 = *(undefined4 **)(lVar20 + 0x30);
            if (*(undefined4 **)(lVar20 + 0x30) == (undefined4 *)0x0) {
              puVar22 = (undefined4 *)(lVar20 + 0x28);
            }
            puVar1 = puVar22 + (longlong)*(int *)(lVar20 + 0x38) * 2;
            for (; puVar22 != puVar1; puVar22 = puVar22 + 2) {
              iVar19 = *(int *)(lVar20 + 0x4c);
              iVar2 = *(int *)(lVar20 + 0x48);
              lVar12 = *(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30);
              iVar3 = *(int *)(param_1 + 0x2c);
              uVar4 = puVar22[1];
              uVar5 = *puVar22;
              uVar6 = *(undefined4 *)(lVar20 + 0x44);
              uVar7 = *(uint *)(param_4 + 0x8c);
              if (lVar12 == 0) {
                LowLevelFatalErrorHandler
                          ("Unknown",0x8d8,
                           L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
                FDebug::AssertFailed
                          (&DAT_143f3f584,"Unknown",0x8d8,
                           L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
              }
              puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar15 = puVar16 + 7;
              if (*(undefined8 **)(param_2 + 0x38) < puVar15) {
                FMemStackBase::AllocateNewChunk(param_2 + 0x30);
                puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar15 = puVar16 + 7;
              }
              *(undefined8 **)(param_2 + 0x30) = puVar15;
              *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
              **(undefined8 **)(param_2 + 8) = puVar16;
              *(undefined8 **)(param_2 + 8) = puVar16 + 1;
              puVar16[1] = 0;
              *puVar16 = &PTR_LAB_143f489d0;
              *(undefined4 *)((longlong)puVar16 + 0x1c) = uVar6;
              *(undefined4 *)(puVar16 + 5) = uVar5;
              *(int *)((longlong)puVar16 + 0x24) = (iVar19 - iVar2) + 1;
              *(undefined4 *)((longlong)puVar16 + 0x2c) = uVar4;
              puVar16[2] = lVar12;
              *(uint *)(puVar16 + 3) = uVar7 >> 0xc & 0x3f;
              *(undefined4 *)(puVar16 + 4) = 0;
              *(int *)(puVar16 + 6) = iVar18 * iVar3;
            }
            param_5 = param_5 + 1;
          } while (param_5 < *(uint *)(lVar20 + 0x40));
        }
      }
      else {
        param_5 = 0;
        if (*(int *)(lVar20 + 0x40) != 0) {
          do {
            iVar19 = *(int *)(*(longlong *)(lVar20 + 0x18) + (ulonglong)(param_5 * 2) * 4);
            iVar18 = (*(int *)(*(longlong *)(lVar20 + 0x18) + (ulonglong)(param_5 * 2 + 1) * 4) -
                     iVar19) + 1;
            FUN_141b3dbd0(param_1,param_2,param_3,*(undefined4 *)(lVar20 + 0x44),iVar19,iVar18);
            FUN_141a00810(*(undefined8 *)(param_4 + 0xa0),param_2,iVar19);
            puVar22 = *(undefined4 **)(lVar20 + 0x30);
            if (*(undefined4 **)(lVar20 + 0x30) == (undefined4 *)0x0) {
              puVar22 = (undefined4 *)(lVar20 + 0x28);
            }
            puVar1 = puVar22 + (longlong)*(int *)(lVar20 + 0x38) * 2;
            for (; puVar22 != puVar1; puVar22 = puVar22 + 2) {
              iVar19 = *(int *)(lVar20 + 0x4c);
              iVar2 = *(int *)(lVar20 + 0x48);
              lVar12 = *(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30);
              iVar3 = *(int *)(param_1 + 0x2c);
              uVar4 = puVar22[1];
              uVar5 = *puVar22;
              uVar6 = *(undefined4 *)(lVar20 + 0x44);
              uVar7 = *(uint *)(param_4 + 0x8c);
              if (lVar12 == 0) {
                LowLevelFatalErrorHandler
                          ("Unknown",0x8d8,
                           L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
                FDebug::AssertFailed
                          (&DAT_143f3f584,"Unknown",0x8d8,
                           L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
              }
              puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar15 = puVar16 + 7;
              if (*(undefined8 **)(param_2 + 0x38) < puVar15) {
                FMemStackBase::AllocateNewChunk(param_2 + 0x30);
                puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar15 = puVar16 + 7;
              }
              *(undefined8 **)(param_2 + 0x30) = puVar15;
              *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
              **(undefined8 **)(param_2 + 8) = puVar16;
              *(undefined8 **)(param_2 + 8) = puVar16 + 1;
              puVar16[1] = 0;
              *puVar16 = &PTR_LAB_143f489d0;
              *(undefined4 *)((longlong)puVar16 + 0x1c) = uVar6;
              *(undefined4 *)(puVar16 + 5) = uVar5;
              *(int *)((longlong)puVar16 + 0x24) = (iVar19 - iVar2) + 1;
              *(undefined4 *)((longlong)puVar16 + 0x2c) = uVar4;
              puVar16[2] = lVar12;
              *(uint *)(puVar16 + 3) = uVar7 >> 0xc & 0x3f;
              *(undefined4 *)(puVar16 + 4) = 0;
              *(int *)(puVar16 + 6) = iVar18 * iVar3;
            }
            param_5 = param_5 + 1;
          } while (param_5 < *(uint *)(lVar20 + 0x40));
        }
      }
    }
    else {
      param_5 = 0;
      if (*(int *)(lVar20 + 0x40) != 0) {
        do {
          iVar19 = *(int *)(*(longlong *)(lVar20 + 0x18) + (ulonglong)(param_5 * 2) * 4);
          iVar18 = (*(int *)(*(longlong *)(lVar20 + 0x18) + (ulonglong)(param_5 * 2 + 1) * 4) -
                   iVar19) + 1;
          FUN_141b3dbd0(param_1,param_2,param_3,*(undefined4 *)(lVar20 + 0x44),iVar19,iVar18);
          piVar17 = *(int **)(lVar20 + 0x30);
          if (*(int **)(lVar20 + 0x30) == (int *)0x0) {
            piVar17 = (int *)(lVar20 + 0x28);
          }
          local_50[0] = piVar17 + (longlong)*(int *)(lVar20 + 0x38) * 2;
          if (piVar17 != local_50[0]) {
            do {
              iVar2 = *(int *)(lVar20 + 0x4c);
              iVar3 = *(int *)(lVar20 + 0x48);
              lVar12 = *(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30);
              iVar8 = *(int *)(param_1 + 0x2c);
              iVar9 = piVar17[1];
              iVar10 = *piVar17;
              uVar4 = *(undefined4 *)(lVar20 + 0x44);
              uVar7 = *(uint *)(param_4 + 0x8c);
              if (lVar12 == 0) {
                LowLevelFatalErrorHandler
                          ("Unknown",0x8d8,
                           L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
                FDebug::AssertFailed
                          (&DAT_143f3f584,"Unknown",0x8d8,
                           L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
              }
              puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar15 = puVar16 + 7;
              if (*(undefined8 **)(param_2 + 0x38) < puVar15) {
                FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x40);
                puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar15 = puVar16 + 7;
              }
              *(undefined8 **)(param_2 + 0x30) = puVar15;
              piVar17 = piVar17 + 2;
              *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
              **(undefined8 **)(param_2 + 8) = puVar16;
              *(undefined8 **)(param_2 + 8) = puVar16 + 1;
              puVar16[1] = 0;
              *puVar16 = &PTR_LAB_143f489d0;
              *(undefined4 *)((longlong)puVar16 + 0x1c) = uVar4;
              *(int *)(puVar16 + 4) = iVar19;
              *(int *)(puVar16 + 5) = iVar10;
              *(int *)((longlong)puVar16 + 0x24) = (iVar2 - iVar3) + 1;
              *(int *)((longlong)puVar16 + 0x2c) = iVar9;
              puVar16[2] = lVar12;
              *(uint *)(puVar16 + 3) = uVar7 >> 0xc & 0x3f;
              *(int *)(puVar16 + 6) = iVar18 * iVar8;
            } while (piVar17 != local_50[0]);
          }
          param_5 = param_5 + 1;
        } while (param_5 < *(uint *)(lVar20 + 0x40));
      }
    }
  }
  return;
}



// FUNCTION 141b32450 FUN_141b32450 body=736 status=ok
// SIG undefined FUN_141b32450(void)

undefined8
FUN_141b32450(undefined8 param_1,longlong param_2,undefined1 param_3,longlong param_4,
             ulonglong param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  bool bVar12;
  longlong *local_res10 [2];
  undefined8 local_res20;
  undefined8 in_stack_fffffffffffffeb8;
  ulonglong uVar13;
  ulonglong *puVar14;
  undefined8 in_stack_fffffffffffffec8;
  undefined8 in_stack_fffffffffffffed0;
  undefined4 uVar15;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  float local_e8;
  undefined1 local_e4;
  ulonglong local_e0;
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  undefined1 local_c8 [96];
  undefined1 local_68 [48];
  
  uVar10 = (uint)((ulonglong)in_stack_fffffffffffffec8 >> 0x20);
  uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffffed0 >> 0x20);
  uVar1 = *(undefined4 *)(param_2 + 0x1a38);
  plVar4 = *(longlong **)(param_4 + 0xa8);
  if (plVar4 != (longlong *)0x0) {
    iVar9 = 0;
    local_res10[0] = (longlong *)0x0;
    (**(code **)(*plVar4 + 0x40))(plVar4,uVar1,local_d8,local_res10);
    cVar6 = (**(code **)(*local_res10[0] + 0x220))();
    if ((cVar6 != '\0') &&
       (puVar5 = (undefined8 *)CONCAT44(param_6._4_4_,(uint)param_6),
       *(byte *)(param_2 + 0x11b4) == ((byte)(*(uint *)((longlong)puVar5 + 0x2c) >> 3) & 1))) {
      uVar2 = *(uint *)(param_4 + 0x8c);
      local_res20 = 0;
      param_6._4_4_ = uVar2 >> 0xc & 0x3f;
      param_6._0_4_ = ((uVar2 >> 0x13 & 0x80 | uVar2 & 0x100) >> 2 | uVar2 & 0x10) >> 4 | uVar2 & 8;
      local_e0 = CONCAT44(uVar2 >> 0xc,(uint)param_6) & 0x3fffffffff;
      (**(code **)(**(longlong **)(param_4 + 0xa8) + 0x40))
                (*(longlong **)(param_4 + 0xa8),uVar1,local_d0,&local_res20);
      puVar14 = &local_e0;
      uVar13 = CONCAT71((int7)((ulonglong)in_stack_fffffffffffffeb8 >> 8),param_3);
      FUN_141b26040(local_c8,*(undefined8 *)(param_4 + 0xa0),*(undefined8 *)(param_4 + 0xa8),
                    local_res20,uVar13,puVar14,(ulonglong)uVar10 << 0x20,CONCAT44(uVar15,uVar1));
      local_118 = *puVar5;
      local_110 = puVar5[1];
      local_108 = *(undefined4 *)(puVar5 + 2);
      local_100 = puVar5[3];
      if (local_100 != 0) {
        LOCK();
        *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
        UNLOCK();
      }
      local_f8 = puVar5[4];
      local_f0 = *(undefined4 *)(puVar5 + 5);
      local_ec = *(undefined4 *)((longlong)puVar5 + 0x2c);
      local_e8 = 0.0;
      local_e4 = 0;
      if ((*(uint *)(param_4 + 0x8c) & 0x4000000) != 0) {
        iVar3 = *(int *)(param_4 + 200);
        uVar10 = 1 << ((byte)iVar3 & 0x1f);
        lVar11 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5);
        lVar7 = *(longlong *)(param_2 + 0x1bd0);
        if (*(longlong *)(param_2 + 0x1bd0) == 0) {
          lVar7 = param_2 + 0x1bc0;
        }
        if ((*(uint *)(lVar7 + lVar11 * 4) & uVar10) == 0) {
          lVar7 = *(longlong *)(param_2 + 0x1bf0);
          if (*(longlong *)(param_2 + 0x1bf0) == 0) {
            lVar7 = param_2 + 0x1be0;
          }
          if ((*(uint *)(lVar7 + lVar11 * 4) & uVar10) != 0) {
            local_e8 = (float)FUN_14274fcb0(param_2);
            local_e8 = local_e8 - 1.0;
          }
        }
        else {
          local_e8 = (float)FUN_14274fcb0(param_2);
        }
      }
      uVar8 = FUN_141b32d50(local_c8,local_68,*(undefined4 *)(param_2 + 0x1a38));
      FUN_141a9adc0(param_1,local_c8,&local_118,uVar8);
      FUN_141b459d0(local_c8,param_1,&local_118,param_2,uVar13 & 0xffffffffffffff00);
      uVar8 = param_7;
      do {
        if ((param_5 & 1) != 0) {
          uVar13 = CONCAT44((int)((ulonglong)puVar14 >> 0x20),iVar9);
          FUN_141b3ded0(local_c8,param_1,param_2,uVar8,param_4,uVar13,&local_118,&param_6,0);
          puVar14 = (ulonglong *)(uVar13 & 0xffffffffffffff00);
          FUN_141b315b0(local_c8,param_1,param_2,param_4,iVar9,puVar14);
        }
        iVar9 = iVar9 + 1;
        bVar12 = 1 < param_5;
        param_5 = param_5 >> 1;
      } while (bVar12);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_100);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141b32730 FUN_141b32730 body=28 status=ok
// SIG undefined FUN_141b32730(void)

void FUN_141b32730(longlong param_1)

{
  FUN_141ec2790();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x28);
  return;
}



// FUNCTION 141b32760 FindAllocation body=85 status=ok
// SIG undefined FindAllocation(void)

longlong FSurfelBufferAllocator::FindAllocation(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  int local_res8 [8];
  
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 8),local_res8,param_2);
  if (local_res8[0] == -1) {
    return 0;
  }
  lVar2 = (longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 8);
  lVar1 = lVar2 + 8;
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 141b327c0 FUN_141b327c0 body=1413 status=ok
// SIG undefined FUN_141b327c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b327c0(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  ulonglong param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  ulonglong local_1c0;
  undefined4 local_1b8;
  float local_1b0;
  float local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  longlong local_190;
  undefined4 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  longlong local_120;
  longlong *local_118;
  undefined8 local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  ulonglong local_bc;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  bVar4 = false;
  local_128 = param_6;
  local_178 = local_178 & 0xffffffff00000000;
  local_170 = param_4;
  local_118 = param_3;
  local_120 = FSceneRenderTargets::Get();
  FUN_141a19150(param_1,*(undefined8 *)(*param_3 + 8),0,0);
  local_c8 = 0;
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = (longlong *)0x0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_c0 = 0;
  local_bc = 0x26;
  local_b4 = 0;
  local_ac = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_64 = 0;
  local_5c = 0;
  local_54 = 0;
  FUN_14049afe0(param_1,&local_108);
  iVar5 = *(int *)(param_2 + 0x1aac);
  iVar6 = *(int *)(param_2 + 0x1aa4);
  puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  iVar7 = *(int *)(param_2 + 0x1aa8);
  iVar1 = *(int *)(param_2 + 0x1aa0);
  puVar9 = puVar10 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar10;
  *(undefined8 **)(param_1 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_143f59420;
  puVar10[2] = 0;
  *(undefined4 *)(puVar10 + 3) = 0;
  *(int *)((longlong)puVar10 + 0x1c) = (iVar7 - iVar1) / 2;
  *(int *)(puVar10 + 4) = (iVar5 - iVar6) / 2;
  *(undefined4 *)((longlong)puVar10 + 0x24) = 0x3f800000;
  uStack_d0 = FUN_140985530();
  local_c8 = FUN_1409853f0();
  local_d8 = FUN_1404a0ce0();
  lVar11 = *(longlong *)(param_2 + 0x3090);
  local_160 = 0;
  local_168 = &DAT_146a51f90;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar11 + 0x38,&local_178,&local_168);
  if ((int)local_178 == -1) {
    lVar11 = 0;
  }
  else {
    lVar11 = (longlong)(int)local_178 * 0x20 + *(longlong *)(lVar11 + 0x38);
  }
  plVar8 = (longlong *)0x0;
  plVar13 = (longlong *)(lVar11 + 0x10);
  if (lVar11 == 0) {
    plVar13 = plVar8;
  }
  lVar11 = *plVar13;
  local_108 = DAT_1464c2720;
  if (lVar11 == 0) {
    local_168 = (undefined *)0x0;
    bVar4 = true;
  }
  else {
    lVar12 = *(longlong *)(lVar11 + 0x48);
    if (*(char *)(lVar12 + 0x28) == '\0') {
      FUN_1419f3850(lVar12);
    }
    plVar8 = *(longlong **)(lVar12 + 0x38);
  }
  plStack_100 = plVar8;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_168);
  }
  bVar4 = false;
  local_bc = local_bc & 0xffffffff00000000;
  local_160 = 0;
  lVar12 = *(longlong *)(param_2 + 0x3090);
  local_168 = &DAT_146a16250;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar12 + 0x38,&local_178,&local_168);
  if ((int)local_178 == -1) {
    lVar12 = 0;
  }
  else {
    lVar12 = (longlong)(int)local_178 * 0x20 + *(longlong *)(lVar12 + 0x38);
  }
  plVar8 = (longlong *)0x0;
  plVar13 = (longlong *)(lVar12 + 0x10);
  if (lVar12 == 0) {
    plVar13 = plVar8;
  }
  lVar12 = *plVar13;
  if (lVar12 == 0) {
    bVar4 = true;
    local_170 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar12 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plVar8 = *(longlong **)(lVar2 + 0x40);
    param_4 = local_170;
  }
  local_e8 = plVar8;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_170);
  }
  FUN_141ed6ac0(param_1,&local_108,2,1);
  lVar2 = *(longlong *)(lVar12 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  local_170 = uVar3;
  FUN_141aa9590(lVar12,param_1,uVar3,*(undefined8 *)(param_2 + 0x20));
  FAOParameters::Set<FRHIPixelShader_*>(lVar12 + 0xc0,param_1,uVar3,local_128);
  local_1c0 = param_5;
  local_1c8 = param_4;
  FUN_141b3c250(lVar12 + 0xde,param_1,&local_170,param_2);
  lVar12 = *(longlong *)(lVar11 + 0x48);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  if (*(char *)(lVar12 + 0x28) == '\0') {
    FUN_1419f3850(lVar12);
  }
  FUN_141aa9800(lVar11,param_1,*(undefined8 *)(lVar12 + 0x38),uVar3);
  local_180 = 1;
  local_188 = 0;
  local_178._4_4_ = (int)((ulonglong)*(undefined8 *)(local_120 + 0x378) >> 0x20);
  local_178 = CONCAT44(local_178._4_4_ / 2,(int)*(undefined8 *)(local_120 + 0x378) / 2);
  iVar5 = (*(int *)(param_2 + 0x1aa8) - *(int *)(param_2 + 0x1aa0)) / 2;
  iVar6 = *(int *)(param_2 + 0x1aac) - *(int *)(param_2 + 0x1aa4);
  iVar7 = iVar6 / 2;
  local_168 = (undefined *)CONCAT44(iVar7,iVar5);
  local_1b0 = (float)iVar5;
  local_198 = local_178;
  local_1a0 = local_168;
  local_1a8 = (float)iVar7;
  local_1b8 = 0;
  local_1c0 = local_1c0 & 0xffffffff00000000;
  local_1c8 = CONCAT44(local_1c8._4_4_,local_1a8);
  local_190 = lVar11;
  DrawRectangle(param_1,iVar6 >> 0x1f,0);
  local_158 = 0xffffffff00000000;
  uStack_150 = 0xffffffffffffffff;
  puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  local_148 = 0xffffffffffffffff;
  uStack_140 = 0xffffffffffffffff;
  local_138 = 0xffffffff;
  uStack_130 = 0;
  uVar3 = *(undefined8 *)(*local_118 + 0x10);
  plVar8 = *(longlong **)(*local_118 + 8);
  puVar9 = puVar10 + 10;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x58);
    puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 10;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar10;
  *(undefined8 **)(param_1 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar10 + 2) = (undefined4)local_158;
  *(undefined4 *)((longlong)puVar10 + 0x14) = local_158._4_4_;
  *(undefined4 *)(puVar10 + 3) = (undefined4)uStack_150;
  *(undefined4 *)((longlong)puVar10 + 0x1c) = uStack_150._4_4_;
  *(undefined4 *)(puVar10 + 4) = (undefined4)local_148;
  *(undefined4 *)((longlong)puVar10 + 0x24) = local_148._4_4_;
  *(undefined4 *)(puVar10 + 5) = (undefined4)uStack_140;
  *(undefined4 *)((longlong)puVar10 + 0x2c) = uStack_140._4_4_;
  *(undefined4 *)(puVar10 + 6) = (undefined4)local_138;
  *(undefined4 *)((longlong)puVar10 + 0x34) = local_138._4_4_;
  *(undefined4 *)(puVar10 + 7) = (undefined4)uStack_130;
  *(undefined4 *)((longlong)puVar10 + 0x3c) = uStack_130._4_4_;
  puVar10[8] = plVar8;
  puVar10[9] = uVar3;
  lVar11 = (**(code **)(*plVar8 + 8))(plVar8);
  if (lVar11 == 0) {
    lVar11 = (**(code **)(*(longlong *)puVar10[8] + 0x18))();
    if (lVar11 == 0) {
      (**(code **)(*(longlong *)puVar10[8] + 0x20))();
    }
  }
  lVar11 = (**(code **)(*(longlong *)puVar10[9] + 8))();
  if (lVar11 == 0) {
    lVar11 = (**(code **)(*(longlong *)puVar10[9] + 0x18))();
    if (lVar11 == 0) {
      (**(code **)(*(longlong *)puVar10[9] + 0x20))();
    }
  }
  return;
}


