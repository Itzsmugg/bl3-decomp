// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141ded950 FUN_141ded950 body=899 status=ok
// SIG undefined FUN_141ded950(void)

void FUN_141ded950(longlong param_1,undefined8 *param_2,int param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 local_res10;
  int local_res18 [4];
  undefined *local_48;
  undefined4 local_40;
  
  plVar11 = (longlong *)0x0;
  local_res18[0] = 0;
  lVar8 = FUN_1419ef210((&DAT_1464c9c48)[param_3]);
  local_40 = 0;
  local_48 = &DAT_146aaad60;
  plVar10 = (longlong *)(lVar8 + 0x38);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar10,local_res18,&local_48);
  plVar13 = plVar11;
  if (local_res18[0] != -1) {
    plVar13 = (longlong *)((longlong)local_res18[0] * 0x20 + *plVar10);
  }
  local_40 = 0;
  plVar14 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar14 = plVar11;
  }
  local_48 = &DAT_146aae840;
  lVar8 = *plVar14;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar10,local_res18,&local_48);
  plVar13 = plVar11;
  if (local_res18[0] != -1) {
    plVar13 = (longlong *)((longlong)local_res18[0] * 0x20 + *plVar10);
  }
  plVar10 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar10 = plVar11;
  }
  lVar2 = *plVar10;
  puVar9 = (undefined8 *)FUN_141ee3620();
  *param_2 = *puVar9;
  if (lVar8 == 0) {
    local_res10 = 0;
    plVar13 = (longlong *)0x1;
    plVar10 = plVar11;
  }
  else {
    lVar8 = *(longlong *)(lVar8 + 0x48);
    if (*(char *)(lVar8 + 0x28) == '\0') {
      FUN_1419f3850(lVar8);
    }
    plVar10 = *(longlong **)(lVar8 + 0x38);
    plVar13 = plVar11;
  }
  param_2[1] = plVar10;
  if (plVar13 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  bVar7 = false;
  if (lVar2 == 0) {
    bVar7 = true;
    local_res10 = 0;
  }
  else {
    lVar8 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar8 + 0x28) == '\0') {
      FUN_1419f3850(lVar8);
    }
    plVar11 = *(longlong **)(lVar8 + 0x40);
  }
  param_2[4] = plVar11;
  if (bVar7) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
  FUN_141ed6ac0(param_1,param_2,2,1);
  lVar8 = *(longlong *)(lVar2 + 0x48);
  uVar3 = *param_4;
  uVar4 = *param_6;
  uVar5 = *(undefined8 *)CONCAT44(param_5._4_4_,(float)param_5);
  param_6 = (undefined8 *)uVar4;
  if (*(char *)(lVar8 + 0x28) == '\0') {
    FUN_1419f3850(lVar8);
  }
  uVar6 = *(undefined8 *)(lVar8 + 0x40);
  if (*(short *)(lVar2 + 0xc2) != 0) {
    uVar1 = *(ushort *)(lVar2 + 0xc0);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar12 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar9;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar12;
    *(undefined8 **)(param_1 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_143f59c80;
    puVar12[2] = uVar6;
    *(uint *)(puVar12 + 3) = (uint)uVar1;
    puVar12[4] = uVar3;
  }
  if (*(short *)(lVar2 + 0xc6) != 0) {
    uVar1 = *(ushort *)(lVar2 + 0xc4);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar12 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar9;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar12;
    *(undefined8 **)(param_1 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_143f59c80;
    puVar12[2] = uVar6;
    *(uint *)(puVar12 + 3) = (uint)uVar1;
    puVar12[4] = uVar5;
  }
  param_5._0_4_ = (float)(int)uVar4;
  param_5._4_4_ = (float)param_6._4_4_;
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>(param_1,uVar6,lVar2 + 200,&param_5,0);
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar12 + 4;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x28);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 4;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar12;
  *(undefined8 **)(param_1 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_143f59410;
  puVar12[2] = 0;
  *(undefined4 *)(puVar12 + 3) = 1;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = 1;
  return;
}



// FUNCTION 141dedce0 FUN_141dedce0 body=899 status=ok
// SIG undefined FUN_141dedce0(void)

void FUN_141dedce0(longlong param_1,undefined8 *param_2,int param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 local_res10;
  int local_res18 [4];
  undefined *local_48;
  undefined4 local_40;
  
  plVar11 = (longlong *)0x0;
  local_res18[0] = 0;
  lVar8 = FUN_1419ef210((&DAT_1464c9c48)[param_3]);
  local_40 = 0;
  local_48 = &DAT_146aaad60;
  plVar10 = (longlong *)(lVar8 + 0x38);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar10,local_res18,&local_48);
  plVar13 = plVar11;
  if (local_res18[0] != -1) {
    plVar13 = (longlong *)((longlong)local_res18[0] * 0x20 + *plVar10);
  }
  local_40 = 0;
  plVar14 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar14 = plVar11;
  }
  local_48 = &DAT_146aad730;
  lVar8 = *plVar14;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar10,local_res18,&local_48);
  plVar13 = plVar11;
  if (local_res18[0] != -1) {
    plVar13 = (longlong *)((longlong)local_res18[0] * 0x20 + *plVar10);
  }
  plVar10 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar10 = plVar11;
  }
  lVar2 = *plVar10;
  puVar9 = (undefined8 *)FUN_141ee3620();
  *param_2 = *puVar9;
  if (lVar8 == 0) {
    local_res10 = 0;
    plVar13 = (longlong *)0x1;
    plVar10 = plVar11;
  }
  else {
    lVar8 = *(longlong *)(lVar8 + 0x48);
    if (*(char *)(lVar8 + 0x28) == '\0') {
      FUN_1419f3850(lVar8);
    }
    plVar10 = *(longlong **)(lVar8 + 0x38);
    plVar13 = plVar11;
  }
  param_2[1] = plVar10;
  if (plVar13 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  bVar7 = false;
  if (lVar2 == 0) {
    bVar7 = true;
    local_res10 = 0;
  }
  else {
    lVar8 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar8 + 0x28) == '\0') {
      FUN_1419f3850(lVar8);
    }
    plVar11 = *(longlong **)(lVar8 + 0x40);
  }
  param_2[4] = plVar11;
  if (bVar7) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
  FUN_141ed6ac0(param_1,param_2,2,1);
  lVar8 = *(longlong *)(lVar2 + 0x48);
  uVar3 = *param_4;
  uVar4 = *param_6;
  uVar5 = *(undefined8 *)CONCAT44(param_5._4_4_,(float)param_5);
  param_6 = (undefined8 *)uVar4;
  if (*(char *)(lVar8 + 0x28) == '\0') {
    FUN_1419f3850(lVar8);
  }
  uVar6 = *(undefined8 *)(lVar8 + 0x40);
  if (*(short *)(lVar2 + 0xc2) != 0) {
    uVar1 = *(ushort *)(lVar2 + 0xc0);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar12 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar9;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar12;
    *(undefined8 **)(param_1 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_143f59c80;
    puVar12[2] = uVar6;
    *(uint *)(puVar12 + 3) = (uint)uVar1;
    puVar12[4] = uVar3;
  }
  if (*(short *)(lVar2 + 0xc6) != 0) {
    uVar1 = *(ushort *)(lVar2 + 0xc4);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar12 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar9;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar12;
    *(undefined8 **)(param_1 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_143f59c80;
    puVar12[2] = uVar6;
    *(uint *)(puVar12 + 3) = (uint)uVar1;
    puVar12[4] = uVar5;
  }
  param_5._0_4_ = (float)(int)uVar4;
  param_5._4_4_ = (float)param_6._4_4_;
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>(param_1,uVar6,lVar2 + 200,&param_5,0);
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar12 + 4;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x28);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 4;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar12;
  *(undefined8 **)(param_1 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_143f59410;
  puVar12[2] = 0;
  *(undefined4 *)(puVar12 + 3) = 1;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = 1;
  return;
}



// FUNCTION 141dee070 FUN_141dee070 body=899 status=ok
// SIG undefined FUN_141dee070(void)

void FUN_141dee070(longlong param_1,undefined8 *param_2,int param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 local_res10;
  int local_res18 [4];
  undefined *local_48;
  undefined4 local_40;
  
  plVar11 = (longlong *)0x0;
  local_res18[0] = 0;
  lVar8 = FUN_1419ef210((&DAT_1464c9c48)[param_3]);
  local_40 = 0;
  local_48 = &DAT_146aaad60;
  plVar10 = (longlong *)(lVar8 + 0x38);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar10,local_res18,&local_48);
  plVar13 = plVar11;
  if (local_res18[0] != -1) {
    plVar13 = (longlong *)((longlong)local_res18[0] * 0x20 + *plVar10);
  }
  local_40 = 0;
  plVar14 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar14 = plVar11;
  }
  local_48 = &DAT_146aaed80;
  lVar8 = *plVar14;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar10,local_res18,&local_48);
  plVar13 = plVar11;
  if (local_res18[0] != -1) {
    plVar13 = (longlong *)((longlong)local_res18[0] * 0x20 + *plVar10);
  }
  plVar10 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar10 = plVar11;
  }
  lVar2 = *plVar10;
  puVar9 = (undefined8 *)FUN_141ee3620();
  *param_2 = *puVar9;
  if (lVar8 == 0) {
    local_res10 = 0;
    plVar13 = (longlong *)0x1;
    plVar10 = plVar11;
  }
  else {
    lVar8 = *(longlong *)(lVar8 + 0x48);
    if (*(char *)(lVar8 + 0x28) == '\0') {
      FUN_1419f3850(lVar8);
    }
    plVar10 = *(longlong **)(lVar8 + 0x38);
    plVar13 = plVar11;
  }
  param_2[1] = plVar10;
  if (plVar13 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  bVar7 = false;
  if (lVar2 == 0) {
    bVar7 = true;
    local_res10 = 0;
  }
  else {
    lVar8 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar8 + 0x28) == '\0') {
      FUN_1419f3850(lVar8);
    }
    plVar11 = *(longlong **)(lVar8 + 0x40);
  }
  param_2[4] = plVar11;
  if (bVar7) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
  FUN_141ed6ac0(param_1,param_2,2,1);
  lVar8 = *(longlong *)(lVar2 + 0x48);
  uVar3 = *param_4;
  uVar4 = *param_6;
  uVar5 = *(undefined8 *)CONCAT44(param_5._4_4_,(float)param_5);
  param_6 = (undefined8 *)uVar4;
  if (*(char *)(lVar8 + 0x28) == '\0') {
    FUN_1419f3850(lVar8);
  }
  uVar6 = *(undefined8 *)(lVar8 + 0x40);
  if (*(short *)(lVar2 + 0xc2) != 0) {
    uVar1 = *(ushort *)(lVar2 + 0xc0);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar12 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar9;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar12;
    *(undefined8 **)(param_1 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_143f59c80;
    puVar12[2] = uVar6;
    *(uint *)(puVar12 + 3) = (uint)uVar1;
    puVar12[4] = uVar3;
  }
  if (*(short *)(lVar2 + 0xc6) != 0) {
    uVar1 = *(ushort *)(lVar2 + 0xc4);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar12 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar9;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar12;
    *(undefined8 **)(param_1 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_143f59c80;
    puVar12[2] = uVar6;
    *(uint *)(puVar12 + 3) = (uint)uVar1;
    puVar12[4] = uVar5;
  }
  param_5._0_4_ = (float)(int)uVar4;
  param_5._4_4_ = (float)param_6._4_4_;
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>(param_1,uVar6,lVar2 + 200,&param_5,0);
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar12 + 4;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x28);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 4;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar12;
  *(undefined8 **)(param_1 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_143f59410;
  puVar12[2] = 0;
  *(undefined4 *)(puVar12 + 3) = 1;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = 1;
  return;
}



// FUNCTION 141dee400 FUN_141dee400 body=899 status=ok
// SIG undefined FUN_141dee400(void)

void FUN_141dee400(longlong param_1,undefined8 *param_2,int param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 local_res10;
  int local_res18 [4];
  undefined *local_48;
  undefined4 local_40;
  
  plVar11 = (longlong *)0x0;
  local_res18[0] = 0;
  lVar8 = FUN_1419ef210((&DAT_1464c9c48)[param_3]);
  local_40 = 0;
  local_48 = &DAT_146aaad60;
  plVar10 = (longlong *)(lVar8 + 0x38);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar10,local_res18,&local_48);
  plVar13 = plVar11;
  if (local_res18[0] != -1) {
    plVar13 = (longlong *)((longlong)local_res18[0] * 0x20 + *plVar10);
  }
  local_40 = 0;
  plVar14 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar14 = plVar11;
  }
  local_48 = &DAT_146aadc70;
  lVar8 = *plVar14;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar10,local_res18,&local_48);
  plVar13 = plVar11;
  if (local_res18[0] != -1) {
    plVar13 = (longlong *)((longlong)local_res18[0] * 0x20 + *plVar10);
  }
  plVar10 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar10 = plVar11;
  }
  lVar2 = *plVar10;
  puVar9 = (undefined8 *)FUN_141ee3620();
  *param_2 = *puVar9;
  if (lVar8 == 0) {
    local_res10 = 0;
    plVar13 = (longlong *)0x1;
    plVar10 = plVar11;
  }
  else {
    lVar8 = *(longlong *)(lVar8 + 0x48);
    if (*(char *)(lVar8 + 0x28) == '\0') {
      FUN_1419f3850(lVar8);
    }
    plVar10 = *(longlong **)(lVar8 + 0x38);
    plVar13 = plVar11;
  }
  param_2[1] = plVar10;
  if (plVar13 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  bVar7 = false;
  if (lVar2 == 0) {
    bVar7 = true;
    local_res10 = 0;
  }
  else {
    lVar8 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar8 + 0x28) == '\0') {
      FUN_1419f3850(lVar8);
    }
    plVar11 = *(longlong **)(lVar8 + 0x40);
  }
  param_2[4] = plVar11;
  if (bVar7) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
  FUN_141ed6ac0(param_1,param_2,2,1);
  lVar8 = *(longlong *)(lVar2 + 0x48);
  uVar3 = *param_4;
  uVar4 = *param_6;
  uVar5 = *(undefined8 *)CONCAT44(param_5._4_4_,(float)param_5);
  param_6 = (undefined8 *)uVar4;
  if (*(char *)(lVar8 + 0x28) == '\0') {
    FUN_1419f3850(lVar8);
  }
  uVar6 = *(undefined8 *)(lVar8 + 0x40);
  if (*(short *)(lVar2 + 0xc2) != 0) {
    uVar1 = *(ushort *)(lVar2 + 0xc0);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar12 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar9;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar12;
    *(undefined8 **)(param_1 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_143f59c80;
    puVar12[2] = uVar6;
    *(uint *)(puVar12 + 3) = (uint)uVar1;
    puVar12[4] = uVar3;
  }
  if (*(short *)(lVar2 + 0xc6) != 0) {
    uVar1 = *(ushort *)(lVar2 + 0xc4);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar12 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar9;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar12;
    *(undefined8 **)(param_1 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_143f59c80;
    puVar12[2] = uVar6;
    *(uint *)(puVar12 + 3) = (uint)uVar1;
    puVar12[4] = uVar5;
  }
  param_5._0_4_ = (float)(int)uVar4;
  param_5._4_4_ = (float)param_6._4_4_;
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>(param_1,uVar6,lVar2 + 200,&param_5,0);
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar12 + 4;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x28);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 4;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar12;
  *(undefined8 **)(param_1 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_143f59410;
  puVar12[2] = 0;
  *(undefined4 *)(puVar12 + 3) = 1;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = 1;
  return;
}



// FUNCTION 141dee790 FUN_141dee790 body=899 status=ok
// SIG undefined FUN_141dee790(void)

void FUN_141dee790(longlong param_1,undefined8 *param_2,int param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 local_res10;
  int local_res18 [4];
  undefined *local_48;
  undefined4 local_40;
  
  plVar11 = (longlong *)0x0;
  local_res18[0] = 0;
  lVar8 = FUN_1419ef210((&DAT_1464c9c48)[param_3]);
  local_40 = 0;
  local_48 = &DAT_146aaad60;
  plVar10 = (longlong *)(lVar8 + 0x38);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar10,local_res18,&local_48);
  plVar13 = plVar11;
  if (local_res18[0] != -1) {
    plVar13 = (longlong *)((longlong)local_res18[0] * 0x20 + *plVar10);
  }
  local_40 = 0;
  plVar14 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar14 = plVar11;
  }
  local_48 = &DAT_146aadf10;
  lVar8 = *plVar14;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar10,local_res18,&local_48);
  plVar13 = plVar11;
  if (local_res18[0] != -1) {
    plVar13 = (longlong *)((longlong)local_res18[0] * 0x20 + *plVar10);
  }
  plVar10 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar10 = plVar11;
  }
  lVar2 = *plVar10;
  puVar9 = (undefined8 *)FUN_141ee3620();
  *param_2 = *puVar9;
  if (lVar8 == 0) {
    local_res10 = 0;
    plVar13 = (longlong *)0x1;
    plVar10 = plVar11;
  }
  else {
    lVar8 = *(longlong *)(lVar8 + 0x48);
    if (*(char *)(lVar8 + 0x28) == '\0') {
      FUN_1419f3850(lVar8);
    }
    plVar10 = *(longlong **)(lVar8 + 0x38);
    plVar13 = plVar11;
  }
  param_2[1] = plVar10;
  if (plVar13 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  bVar7 = false;
  if (lVar2 == 0) {
    bVar7 = true;
    local_res10 = 0;
  }
  else {
    lVar8 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar8 + 0x28) == '\0') {
      FUN_1419f3850(lVar8);
    }
    plVar11 = *(longlong **)(lVar8 + 0x40);
  }
  param_2[4] = plVar11;
  if (bVar7) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
  FUN_141ed6ac0(param_1,param_2,2,1);
  lVar8 = *(longlong *)(lVar2 + 0x48);
  uVar3 = *param_4;
  uVar4 = *param_6;
  uVar5 = *(undefined8 *)CONCAT44(param_5._4_4_,(float)param_5);
  param_6 = (undefined8 *)uVar4;
  if (*(char *)(lVar8 + 0x28) == '\0') {
    FUN_1419f3850(lVar8);
  }
  uVar6 = *(undefined8 *)(lVar8 + 0x40);
  if (*(short *)(lVar2 + 0xc2) != 0) {
    uVar1 = *(ushort *)(lVar2 + 0xc0);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar12 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar9;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar12;
    *(undefined8 **)(param_1 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_143f59c80;
    puVar12[2] = uVar6;
    *(uint *)(puVar12 + 3) = (uint)uVar1;
    puVar12[4] = uVar3;
  }
  if (*(short *)(lVar2 + 0xc6) != 0) {
    uVar1 = *(ushort *)(lVar2 + 0xc4);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar12 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar9;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar12;
    *(undefined8 **)(param_1 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_143f59c80;
    puVar12[2] = uVar6;
    *(uint *)(puVar12 + 3) = (uint)uVar1;
    puVar12[4] = uVar5;
  }
  param_5._0_4_ = (float)(int)uVar4;
  param_5._4_4_ = (float)param_6._4_4_;
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>(param_1,uVar6,lVar2 + 200,&param_5,0);
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar12 + 4;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x28);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 4;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar12;
  *(undefined8 **)(param_1 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_143f59410;
  puVar12[2] = 0;
  *(undefined4 *)(puVar12 + 3) = 1;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = 1;
  return;
}



// FUNCTION 141deeb20 FUN_141deeb20 body=899 status=ok
// SIG undefined FUN_141deeb20(void)

void FUN_141deeb20(longlong param_1,undefined8 *param_2,int param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 local_res10;
  int local_res18 [4];
  undefined *local_48;
  undefined4 local_40;
  
  plVar11 = (longlong *)0x0;
  local_res18[0] = 0;
  lVar8 = FUN_1419ef210((&DAT_1464c9c48)[param_3]);
  local_40 = 0;
  local_48 = &DAT_146aaad60;
  plVar10 = (longlong *)(lVar8 + 0x38);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar10,local_res18,&local_48);
  plVar13 = plVar11;
  if (local_res18[0] != -1) {
    plVar13 = (longlong *)((longlong)local_res18[0] * 0x20 + *plVar10);
  }
  local_40 = 0;
  plVar14 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar14 = plVar11;
  }
  local_48 = &DAT_146aace00;
  lVar8 = *plVar14;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar10,local_res18,&local_48);
  plVar13 = plVar11;
  if (local_res18[0] != -1) {
    plVar13 = (longlong *)((longlong)local_res18[0] * 0x20 + *plVar10);
  }
  plVar10 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar10 = plVar11;
  }
  lVar2 = *plVar10;
  puVar9 = (undefined8 *)FUN_141ee3620();
  *param_2 = *puVar9;
  if (lVar8 == 0) {
    local_res10 = 0;
    plVar13 = (longlong *)0x1;
    plVar10 = plVar11;
  }
  else {
    lVar8 = *(longlong *)(lVar8 + 0x48);
    if (*(char *)(lVar8 + 0x28) == '\0') {
      FUN_1419f3850(lVar8);
    }
    plVar10 = *(longlong **)(lVar8 + 0x38);
    plVar13 = plVar11;
  }
  param_2[1] = plVar10;
  if (plVar13 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  bVar7 = false;
  if (lVar2 == 0) {
    bVar7 = true;
    local_res10 = 0;
  }
  else {
    lVar8 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar8 + 0x28) == '\0') {
      FUN_1419f3850(lVar8);
    }
    plVar11 = *(longlong **)(lVar8 + 0x40);
  }
  param_2[4] = plVar11;
  if (bVar7) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
  FUN_141ed6ac0(param_1,param_2,2,1);
  lVar8 = *(longlong *)(lVar2 + 0x48);
  uVar3 = *param_4;
  uVar4 = *param_6;
  uVar5 = *(undefined8 *)CONCAT44(param_5._4_4_,(float)param_5);
  param_6 = (undefined8 *)uVar4;
  if (*(char *)(lVar8 + 0x28) == '\0') {
    FUN_1419f3850(lVar8);
  }
  uVar6 = *(undefined8 *)(lVar8 + 0x40);
  if (*(short *)(lVar2 + 0xc2) != 0) {
    uVar1 = *(ushort *)(lVar2 + 0xc0);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar12 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar9;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar12;
    *(undefined8 **)(param_1 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_143f59c80;
    puVar12[2] = uVar6;
    *(uint *)(puVar12 + 3) = (uint)uVar1;
    puVar12[4] = uVar3;
  }
  if (*(short *)(lVar2 + 0xc6) != 0) {
    uVar1 = *(ushort *)(lVar2 + 0xc4);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar12 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar9;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar12;
    *(undefined8 **)(param_1 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_143f59c80;
    puVar12[2] = uVar6;
    *(uint *)(puVar12 + 3) = (uint)uVar1;
    puVar12[4] = uVar5;
  }
  param_5._0_4_ = (float)(int)uVar4;
  param_5._4_4_ = (float)param_6._4_4_;
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>(param_1,uVar6,lVar2 + 200,&param_5,0);
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar12 + 4;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x28);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 4;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar12;
  *(undefined8 **)(param_1 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_143f59410;
  puVar12[2] = 0;
  *(undefined4 *)(puVar12 + 3) = 1;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = 1;
  return;
}



// FUNCTION 141deeeb0 FUN_141deeeb0 body=899 status=ok
// SIG undefined FUN_141deeeb0(void)

void FUN_141deeeb0(longlong param_1,undefined8 *param_2,int param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 local_res10;
  int local_res18 [4];
  undefined *local_48;
  undefined4 local_40;
  
  plVar11 = (longlong *)0x0;
  local_res18[0] = 0;
  lVar8 = FUN_1419ef210((&DAT_1464c9c48)[param_3]);
  local_40 = 0;
  local_48 = &DAT_146aaad60;
  plVar10 = (longlong *)(lVar8 + 0x38);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar10,local_res18,&local_48);
  plVar13 = plVar11;
  if (local_res18[0] != -1) {
    plVar13 = (longlong *)((longlong)local_res18[0] * 0x20 + *plVar10);
  }
  local_40 = 0;
  plVar14 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar14 = plVar11;
  }
  local_48 = &DAT_146aae450;
  lVar8 = *plVar14;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar10,local_res18,&local_48);
  plVar13 = plVar11;
  if (local_res18[0] != -1) {
    plVar13 = (longlong *)((longlong)local_res18[0] * 0x20 + *plVar10);
  }
  plVar10 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar10 = plVar11;
  }
  lVar2 = *plVar10;
  puVar9 = (undefined8 *)FUN_141ee3620();
  *param_2 = *puVar9;
  if (lVar8 == 0) {
    local_res10 = 0;
    plVar13 = (longlong *)0x1;
    plVar10 = plVar11;
  }
  else {
    lVar8 = *(longlong *)(lVar8 + 0x48);
    if (*(char *)(lVar8 + 0x28) == '\0') {
      FUN_1419f3850(lVar8);
    }
    plVar10 = *(longlong **)(lVar8 + 0x38);
    plVar13 = plVar11;
  }
  param_2[1] = plVar10;
  if (plVar13 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  bVar7 = false;
  if (lVar2 == 0) {
    bVar7 = true;
    local_res10 = 0;
  }
  else {
    lVar8 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar8 + 0x28) == '\0') {
      FUN_1419f3850(lVar8);
    }
    plVar11 = *(longlong **)(lVar8 + 0x40);
  }
  param_2[4] = plVar11;
  if (bVar7) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
  FUN_141ed6ac0(param_1,param_2,2,1);
  lVar8 = *(longlong *)(lVar2 + 0x48);
  uVar3 = *param_4;
  uVar4 = *param_6;
  uVar5 = *(undefined8 *)CONCAT44(param_5._4_4_,(float)param_5);
  param_6 = (undefined8 *)uVar4;
  if (*(char *)(lVar8 + 0x28) == '\0') {
    FUN_1419f3850(lVar8);
  }
  uVar6 = *(undefined8 *)(lVar8 + 0x40);
  if (*(short *)(lVar2 + 0xc2) != 0) {
    uVar1 = *(ushort *)(lVar2 + 0xc0);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar12 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar9;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar12;
    *(undefined8 **)(param_1 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_143f59c80;
    puVar12[2] = uVar6;
    *(uint *)(puVar12 + 3) = (uint)uVar1;
    puVar12[4] = uVar3;
  }
  if (*(short *)(lVar2 + 0xc6) != 0) {
    uVar1 = *(ushort *)(lVar2 + 0xc4);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar12 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar9;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar12;
    *(undefined8 **)(param_1 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_143f59c80;
    puVar12[2] = uVar6;
    *(uint *)(puVar12 + 3) = (uint)uVar1;
    puVar12[4] = uVar5;
  }
  param_5._0_4_ = (float)(int)uVar4;
  param_5._4_4_ = (float)param_6._4_4_;
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>(param_1,uVar6,lVar2 + 200,&param_5,0);
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar12 + 4;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x28);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 4;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar12;
  *(undefined8 **)(param_1 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_143f59410;
  puVar12[2] = 0;
  *(undefined4 *)(puVar12 + 3) = 1;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = 1;
  return;
}



// FUNCTION 141def240 FUN_141def240 body=899 status=ok
// SIG undefined FUN_141def240(void)

void FUN_141def240(longlong param_1,undefined8 *param_2,int param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 local_res10;
  int local_res18 [4];
  undefined *local_48;
  undefined4 local_40;
  
  plVar11 = (longlong *)0x0;
  local_res18[0] = 0;
  lVar8 = FUN_1419ef210((&DAT_1464c9c48)[param_3]);
  local_40 = 0;
  local_48 = &DAT_146aaad60;
  plVar10 = (longlong *)(lVar8 + 0x38);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar10,local_res18,&local_48);
  plVar13 = plVar11;
  if (local_res18[0] != -1) {
    plVar13 = (longlong *)((longlong)local_res18[0] * 0x20 + *plVar10);
  }
  local_40 = 0;
  plVar14 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar14 = plVar11;
  }
  local_48 = &DAT_146aad340;
  lVar8 = *plVar14;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar10,local_res18,&local_48);
  plVar13 = plVar11;
  if (local_res18[0] != -1) {
    plVar13 = (longlong *)((longlong)local_res18[0] * 0x20 + *plVar10);
  }
  plVar10 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar10 = plVar11;
  }
  lVar2 = *plVar10;
  puVar9 = (undefined8 *)FUN_141ee3620();
  *param_2 = *puVar9;
  if (lVar8 == 0) {
    local_res10 = 0;
    plVar13 = (longlong *)0x1;
    plVar10 = plVar11;
  }
  else {
    lVar8 = *(longlong *)(lVar8 + 0x48);
    if (*(char *)(lVar8 + 0x28) == '\0') {
      FUN_1419f3850(lVar8);
    }
    plVar10 = *(longlong **)(lVar8 + 0x38);
    plVar13 = plVar11;
  }
  param_2[1] = plVar10;
  if (plVar13 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  bVar7 = false;
  if (lVar2 == 0) {
    bVar7 = true;
    local_res10 = 0;
  }
  else {
    lVar8 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar8 + 0x28) == '\0') {
      FUN_1419f3850(lVar8);
    }
    plVar11 = *(longlong **)(lVar8 + 0x40);
  }
  param_2[4] = plVar11;
  if (bVar7) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
  FUN_141ed6ac0(param_1,param_2,2,1);
  lVar8 = *(longlong *)(lVar2 + 0x48);
  uVar3 = *param_4;
  uVar4 = *param_6;
  uVar5 = *(undefined8 *)CONCAT44(param_5._4_4_,(float)param_5);
  param_6 = (undefined8 *)uVar4;
  if (*(char *)(lVar8 + 0x28) == '\0') {
    FUN_1419f3850(lVar8);
  }
  uVar6 = *(undefined8 *)(lVar8 + 0x40);
  if (*(short *)(lVar2 + 0xc2) != 0) {
    uVar1 = *(ushort *)(lVar2 + 0xc0);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar12 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar9;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar12;
    *(undefined8 **)(param_1 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_143f59c80;
    puVar12[2] = uVar6;
    *(uint *)(puVar12 + 3) = (uint)uVar1;
    puVar12[4] = uVar3;
  }
  if (*(short *)(lVar2 + 0xc6) != 0) {
    uVar1 = *(ushort *)(lVar2 + 0xc4);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar12 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar9;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar12;
    *(undefined8 **)(param_1 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_143f59c80;
    puVar12[2] = uVar6;
    *(uint *)(puVar12 + 3) = (uint)uVar1;
    puVar12[4] = uVar5;
  }
  param_5._0_4_ = (float)(int)uVar4;
  param_5._4_4_ = (float)param_6._4_4_;
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>(param_1,uVar6,lVar2 + 200,&param_5,0);
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar12 + 4;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x28);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 4;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar12;
  *(undefined8 **)(param_1 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_143f59410;
  puVar12[2] = 0;
  *(undefined4 *)(puVar12 + 3) = 1;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = 1;
  return;
}



// FUNCTION 141def5d0 FUN_141def5d0 body=899 status=ok
// SIG undefined FUN_141def5d0(void)

void FUN_141def5d0(longlong param_1,undefined8 *param_2,int param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 local_res10;
  int local_res18 [4];
  undefined *local_48;
  undefined4 local_40;
  
  plVar11 = (longlong *)0x0;
  local_res18[0] = 0;
  lVar8 = FUN_1419ef210((&DAT_1464c9c48)[param_3]);
  local_40 = 0;
  local_48 = &DAT_146aaad60;
  plVar10 = (longlong *)(lVar8 + 0x38);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar10,local_res18,&local_48);
  plVar13 = plVar11;
  if (local_res18[0] != -1) {
    plVar13 = (longlong *)((longlong)local_res18[0] * 0x20 + *plVar10);
  }
  local_40 = 0;
  plVar14 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar14 = plVar11;
  }
  local_48 = &DAT_146aae990;
  lVar8 = *plVar14;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar10,local_res18,&local_48);
  plVar13 = plVar11;
  if (local_res18[0] != -1) {
    plVar13 = (longlong *)((longlong)local_res18[0] * 0x20 + *plVar10);
  }
  plVar10 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar10 = plVar11;
  }
  lVar2 = *plVar10;
  puVar9 = (undefined8 *)FUN_141ee3620();
  *param_2 = *puVar9;
  if (lVar8 == 0) {
    local_res10 = 0;
    plVar13 = (longlong *)0x1;
    plVar10 = plVar11;
  }
  else {
    lVar8 = *(longlong *)(lVar8 + 0x48);
    if (*(char *)(lVar8 + 0x28) == '\0') {
      FUN_1419f3850(lVar8);
    }
    plVar10 = *(longlong **)(lVar8 + 0x38);
    plVar13 = plVar11;
  }
  param_2[1] = plVar10;
  if (plVar13 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  bVar7 = false;
  if (lVar2 == 0) {
    bVar7 = true;
    local_res10 = 0;
  }
  else {
    lVar8 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar8 + 0x28) == '\0') {
      FUN_1419f3850(lVar8);
    }
    plVar11 = *(longlong **)(lVar8 + 0x40);
  }
  param_2[4] = plVar11;
  if (bVar7) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
  FUN_141ed6ac0(param_1,param_2,2,1);
  lVar8 = *(longlong *)(lVar2 + 0x48);
  uVar3 = *param_4;
  uVar4 = *param_6;
  uVar5 = *(undefined8 *)CONCAT44(param_5._4_4_,(float)param_5);
  param_6 = (undefined8 *)uVar4;
  if (*(char *)(lVar8 + 0x28) == '\0') {
    FUN_1419f3850(lVar8);
  }
  uVar6 = *(undefined8 *)(lVar8 + 0x40);
  if (*(short *)(lVar2 + 0xc2) != 0) {
    uVar1 = *(ushort *)(lVar2 + 0xc0);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar12 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar9;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar12;
    *(undefined8 **)(param_1 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_143f59c80;
    puVar12[2] = uVar6;
    *(uint *)(puVar12 + 3) = (uint)uVar1;
    puVar12[4] = uVar3;
  }
  if (*(short *)(lVar2 + 0xc6) != 0) {
    uVar1 = *(ushort *)(lVar2 + 0xc4);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar12 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar9;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar12;
    *(undefined8 **)(param_1 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_143f59c80;
    puVar12[2] = uVar6;
    *(uint *)(puVar12 + 3) = (uint)uVar1;
    puVar12[4] = uVar5;
  }
  param_5._0_4_ = (float)(int)uVar4;
  param_5._4_4_ = (float)param_6._4_4_;
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>(param_1,uVar6,lVar2 + 200,&param_5,0);
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar12 + 4;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x28);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 4;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar12;
  *(undefined8 **)(param_1 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_143f59410;
  puVar12[2] = 0;
  *(undefined4 *)(puVar12 + 3) = 1;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = 1;
  return;
}



// FUNCTION 141def960 FUN_141def960 body=899 status=ok
// SIG undefined FUN_141def960(void)

void FUN_141def960(longlong param_1,undefined8 *param_2,int param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 local_res10;
  int local_res18 [4];
  undefined *local_48;
  undefined4 local_40;
  
  plVar11 = (longlong *)0x0;
  local_res18[0] = 0;
  lVar8 = FUN_1419ef210((&DAT_1464c9c48)[param_3]);
  local_40 = 0;
  local_48 = &DAT_146aaad60;
  plVar10 = (longlong *)(lVar8 + 0x38);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar10,local_res18,&local_48);
  plVar13 = plVar11;
  if (local_res18[0] != -1) {
    plVar13 = (longlong *)((longlong)local_res18[0] * 0x20 + *plVar10);
  }
  local_40 = 0;
  plVar14 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar14 = plVar11;
  }
  local_48 = &DAT_146aad880;
  lVar8 = *plVar14;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar10,local_res18,&local_48);
  plVar13 = plVar11;
  if (local_res18[0] != -1) {
    plVar13 = (longlong *)((longlong)local_res18[0] * 0x20 + *plVar10);
  }
  plVar10 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar10 = plVar11;
  }
  lVar2 = *plVar10;
  puVar9 = (undefined8 *)FUN_141ee3620();
  *param_2 = *puVar9;
  if (lVar8 == 0) {
    local_res10 = 0;
    plVar13 = (longlong *)0x1;
    plVar10 = plVar11;
  }
  else {
    lVar8 = *(longlong *)(lVar8 + 0x48);
    if (*(char *)(lVar8 + 0x28) == '\0') {
      FUN_1419f3850(lVar8);
    }
    plVar10 = *(longlong **)(lVar8 + 0x38);
    plVar13 = plVar11;
  }
  param_2[1] = plVar10;
  if (plVar13 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  bVar7 = false;
  if (lVar2 == 0) {
    bVar7 = true;
    local_res10 = 0;
  }
  else {
    lVar8 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar8 + 0x28) == '\0') {
      FUN_1419f3850(lVar8);
    }
    plVar11 = *(longlong **)(lVar8 + 0x40);
  }
  param_2[4] = plVar11;
  if (bVar7) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
  FUN_141ed6ac0(param_1,param_2,2,1);
  lVar8 = *(longlong *)(lVar2 + 0x48);
  uVar3 = *param_4;
  uVar4 = *param_6;
  uVar5 = *(undefined8 *)CONCAT44(param_5._4_4_,(float)param_5);
  param_6 = (undefined8 *)uVar4;
  if (*(char *)(lVar8 + 0x28) == '\0') {
    FUN_1419f3850(lVar8);
  }
  uVar6 = *(undefined8 *)(lVar8 + 0x40);
  if (*(short *)(lVar2 + 0xc2) != 0) {
    uVar1 = *(ushort *)(lVar2 + 0xc0);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar12 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar9;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar12;
    *(undefined8 **)(param_1 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_143f59c80;
    puVar12[2] = uVar6;
    *(uint *)(puVar12 + 3) = (uint)uVar1;
    puVar12[4] = uVar3;
  }
  if (*(short *)(lVar2 + 0xc6) != 0) {
    uVar1 = *(ushort *)(lVar2 + 0xc4);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar12 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar9;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar12;
    *(undefined8 **)(param_1 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_143f59c80;
    puVar12[2] = uVar6;
    *(uint *)(puVar12 + 3) = (uint)uVar1;
    puVar12[4] = uVar5;
  }
  param_5._0_4_ = (float)(int)uVar4;
  param_5._4_4_ = (float)param_6._4_4_;
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>(param_1,uVar6,lVar2 + 200,&param_5,0);
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar12 + 4;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x28);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 4;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar12;
  *(undefined8 **)(param_1 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_143f59410;
  puVar12[2] = 0;
  *(undefined4 *)(puVar12 + 3) = 1;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = 1;
  return;
}



// FUNCTION 141defcf0 FUN_141defcf0 body=2231 status=ok
// SIG undefined FUN_141defcf0(void)

void FUN_141defcf0(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  char *param_5)

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
  ushort uVar13;
  ushort uVar14;
  undefined8 uVar15;
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
  char *pcVar26;
  undefined8 uVar27;
  float *pfVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  char *_Src;
  void *pvVar33;
  uint uVar34;
  float fVar35;
  float fVar36;
  ulonglong in_stack_fffffffffffffe48;
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
  undefined1 local_168 [8];
  float fStack_160;
  float fStack_15c;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118 [224];
  
  pcVar26 = param_5;
  if ((*(short *)(param_1 + 2) != 0) || (*(short *)(param_1 + 6) != 0)) {
    in_stack_fffffffffffffe48 = *(ulonglong *)(*(longlong *)(param_5 + 0x130) + 0x18);
    FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHIAsyncComputeCommandListImmediate>
              (param_1,param_2,*param_3,*(undefined8 *)(*(longlong *)(param_5 + 0x130) + 0x10),
               in_stack_fffffffffffffe48);
  }
  if ((*(short *)(param_1 + 10) != 0) || (*(short *)(param_1 + 0xe) != 0)) {
    in_stack_fffffffffffffe48 = *(ulonglong *)(*(longlong *)(pcVar26 + 0x138) + 0x18);
    FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHIAsyncComputeCommandListImmediate>
              (param_1 + 8,param_2,*param_3,*(undefined8 *)(*(longlong *)(pcVar26 + 0x138) + 0x10),
               in_stack_fffffffffffffe48);
  }
  if ((*(short *)(param_1 + 0x12) != 0) || (*(short *)(param_1 + 0x16) != 0)) {
    in_stack_fffffffffffffe48 = *(ulonglong *)(*(longlong *)(pcVar26 + 0x140) + 0x18);
    FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHIAsyncComputeCommandListImmediate>
              (param_1 + 0x10,param_2,*param_3,
               *(undefined8 *)(*(longlong *)(pcVar26 + 0x140) + 0x10),in_stack_fffffffffffffe48);
  }
  if ((*(short *)(param_1 + 0x1a) != 0) || (*(short *)(param_1 + 0x1e) != 0)) {
    in_stack_fffffffffffffe48 = *(ulonglong *)(*(longlong *)(param_4 + 0x2fc8) + 0x18);
    FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHIAsyncComputeCommandListImmediate>
              (param_1 + 0x18,param_2,*param_3,
               *(undefined8 *)(*(longlong *)(param_4 + 0x2fc8) + 0x10),in_stack_fffffffffffffe48);
  }
  uVar27 = FUN_141a156e0();
  uVar15 = *param_3;
  if (*(short *)(param_1 + 0x22) != 0) {
    param_5._0_4_ = (uint)*(ushort *)(param_1 + 0x20);
    puVar32 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar31 = puVar32 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar31) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar32 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar31 = puVar32 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar31;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar32;
    *(undefined8 **)(param_2 + 8) = puVar32 + 1;
    puVar32[1] = 0;
    *puVar32 = &PTR_LAB_144dc9cb0;
    puVar32[2] = uVar15;
    *(uint *)(puVar32 + 3) = (uint)param_5;
    puVar32[4] = uVar27;
  }
  if (*(char *)(param_1 + 0x2a) != '\0') {
    SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
              (param_2,*param_3,param_1 + 0x24,*(undefined8 *)(param_4 + 0x2fc0));
  }
  if (*(short *)(param_1 + 0x30) != 0) {
    fVar1 = *(float *)(param_4 + 0x6e0);
    fVar2 = *(float *)(param_4 + 0x6f4);
    fVar3 = *(float *)(param_4 + 0x704);
    fVar4 = *(float *)(param_4 + 0x6f0);
    fVar5 = *(float *)(param_4 + 0x700);
    fVar6 = *(float *)(param_4 + 0x6e8);
    local_158 = ZEXT416(*(uint *)(param_4 + 0x6d0));
    fVar7 = *(float *)(param_4 + 0x6f8);
    local_148 = ZEXT416(*(uint *)(param_4 + 0x6d8));
    fVar8 = *(float *)(param_4 + 0x708);
    fVar9 = *(float *)(param_4 + 0x6ec);
    _local_168 = ZEXT416(*(uint *)(param_4 + 0x6d4));
    fVar10 = *(float *)(param_4 + 0x6e4);
    local_138 = ZEXT416(*(uint *)(param_4 + 0x6dc));
    pfVar28 = (float *)FUN_141dfa450(param_4 + 0x390,local_118);
    fVar16 = *pfVar28;
    fVar17 = pfVar28[1];
    fVar18 = pfVar28[2];
    fVar19 = pfVar28[3];
    uVar15 = *(undefined8 *)(pfVar28 + 0xc);
    uVar27 = *(undefined8 *)(pfVar28 + 0xe);
    fVar20 = pfVar28[4];
    fVar21 = pfVar28[5];
    fVar22 = pfVar28[6];
    fVar23 = pfVar28[7];
    fVar24 = pfVar28[8];
    fVar25 = pfVar28[9];
    fVar35 = pfVar28[10];
    fVar36 = pfVar28[0xb];
    local_168._4_4_ = fVar10;
    fStack_160 = fVar2;
    fStack_15c = fVar3;
    fVar11 = *(float *)(param_4 + 0x6fc);
    fVar12 = *(float *)(param_4 + 0x70c);
    in_stack_fffffffffffffe48 = in_stack_fffffffffffffe48 & 0xffffffff00000000;
    local_1a8 = fVar17 * (float)local_168._0_4_ + fVar16 * (float)local_158._0_4_ +
                fVar18 * (float)local_148._0_4_ + fVar19 * (float)local_138._0_4_;
    fStack_1a4 = fVar17 * fVar10 + fVar16 * fVar1 + fVar18 * fVar6 + fVar19 * fVar9;
    fStack_1a0 = fVar17 * fVar2 + fVar16 * fVar4 + fVar18 * fVar7 + fVar19 * fVar11;
    fStack_19c = fVar17 * fVar3 + fVar16 * fVar5 + fVar18 * fVar8 + fVar19 * fVar12;
    local_198 = fVar21 * (float)local_168._0_4_ + fVar20 * (float)local_158._0_4_ +
                fVar22 * (float)local_148._0_4_ + fVar23 * (float)local_138._0_4_;
    fStack_194 = fVar21 * fVar10 + fVar20 * fVar1 + fVar22 * fVar6 + fVar23 * fVar9;
    fStack_190 = fVar21 * fVar2 + fVar20 * fVar4 + fVar22 * fVar7 + fVar23 * fVar11;
    fStack_18c = fVar21 * fVar3 + fVar20 * fVar5 + fVar22 * fVar8 + fVar23 * fVar12;
    local_188 = fVar24 * (float)local_158._0_4_ + fVar25 * (float)local_168._0_4_ +
                fVar35 * (float)local_148._0_4_ + fVar36 * (float)local_138._0_4_;
    fStack_184 = fVar24 * fVar1 + fVar25 * fVar10 + fVar35 * fVar6 + fVar36 * fVar9;
    fStack_180 = fVar24 * fVar4 + fVar25 * fVar2 + fVar35 * fVar7 + fVar36 * fVar11;
    fStack_17c = fVar24 * fVar5 + fVar25 * fVar3 + fVar35 * fVar8 + fVar36 * fVar12;
    local_128._0_4_ = (float)uVar15;
    local_128._4_4_ = (float)((ulonglong)uVar15 >> 0x20);
    uStack_120._0_4_ = (float)uVar27;
    uStack_120._4_4_ = (float)((ulonglong)uVar27 >> 0x20);
    local_178 = (float)local_128 * (float)local_158._0_4_ + local_128._4_4_ * (float)local_168._0_4_
                + (float)uStack_120 * (float)local_148._0_4_ +
                uStack_120._4_4_ * (float)local_138._0_4_;
    fStack_174 = (float)local_128 * fVar1 + local_128._4_4_ * fVar10 + (float)uStack_120 * fVar6 +
                 uStack_120._4_4_ * fVar9;
    fStack_170 = (float)local_128 * fVar4 + local_128._4_4_ * fVar2 + (float)uStack_120 * fVar7 +
                 uStack_120._4_4_ * fVar11;
    fStack_16c = (float)local_128 * fVar5 + local_128._4_4_ * fVar3 + (float)uStack_120 * fVar8 +
                 uStack_120._4_4_ * fVar12;
    local_128 = uVar15;
    uStack_120 = uVar27;
    SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
              (param_2,*param_3,param_1 + 0x2c,&local_1a8,in_stack_fffffffffffffe48);
  }
  if (*(short *)(param_1 + 0x36) != 0) {
    fVar1 = *(float *)(param_4 + 0x2a60);
    fVar2 = *(float *)(param_4 + 0x2a64);
    fVar3 = *(float *)(param_4 + 0x2a68);
    fVar4 = *(float *)(param_4 + 0x2a6c);
    fVar5 = *(float *)(param_4 + 0x2908);
    fVar6 = *(float *)(param_4 + 0x290c);
    in_stack_fffffffffffffe48 = in_stack_fffffffffffffe48 & 0xffffffff00000000;
    fVar7 = *(float *)(param_4 + 0x28e0);
    fVar8 = *(float *)(param_4 + 0x28e4);
    fVar9 = *(float *)(param_4 + 0x28e8);
    fVar10 = *(float *)(param_4 + 0x28ec);
    fVar11 = *(float *)(param_4 + 0x28f0);
    fVar12 = *(float *)(param_4 + 0x28f4);
    fVar16 = *(float *)(param_4 + 0x28f8);
    fVar17 = *(float *)(param_4 + 0x28fc);
    fVar18 = *(float *)(param_4 + 0x2910);
    fVar19 = *(float *)(param_4 + 0x2914);
    fVar20 = *(float *)(param_4 + 0x2918);
    fVar21 = *(float *)(param_4 + 0x291c);
    fVar35 = *(float *)(param_4 + 0x2900) - *(float *)(param_4 + 0x2e40);
    fVar36 = *(float *)(param_4 + 0x2904) - *(float *)(param_4 + 0x2e44);
    fVar22 = *(float *)(param_4 + 0x2a70);
    fVar23 = *(float *)(param_4 + 0x2a74);
    fVar24 = *(float *)(param_4 + 0x2a78);
    fVar25 = *(float *)(param_4 + 0x2a7c);
    local_1a8 = fVar2 * fVar11 + fVar1 * fVar7 + fVar3 * fVar35 + fVar4 * fVar18;
    fStack_1a4 = fVar2 * fVar12 + fVar1 * fVar8 + fVar3 * fVar36 + fVar4 * fVar19;
    fStack_1a0 = fVar2 * fVar16 + fVar1 * fVar9 + fVar3 * fVar5 + fVar4 * fVar20;
    fStack_19c = fVar2 * fVar17 + fVar1 * fVar10 + fVar3 * fVar6 + fVar4 * fVar21;
    local_198 = fVar23 * fVar11 + fVar22 * fVar7 + fVar24 * fVar35 + fVar25 * fVar18;
    fStack_194 = fVar23 * fVar12 + fVar22 * fVar8 + fVar24 * fVar36 + fVar25 * fVar19;
    fStack_190 = fVar23 * fVar16 + fVar22 * fVar9 + fVar24 * fVar5 + fVar25 * fVar20;
    fStack_18c = fVar23 * fVar17 + fVar22 * fVar10 + fVar24 * fVar6 + fVar25 * fVar21;
    fVar1 = *(float *)(param_4 + 0x2a80);
    fVar2 = *(float *)(param_4 + 0x2a84);
    fVar3 = *(float *)(param_4 + 0x2a88);
    fVar4 = *(float *)(param_4 + 0x2a8c);
    local_188 = fVar2 * fVar11 + fVar1 * fVar7 + fVar3 * fVar35 + fVar4 * fVar18;
    fStack_184 = fVar2 * fVar12 + fVar1 * fVar8 + fVar3 * fVar36 + fVar4 * fVar19;
    fStack_180 = fVar2 * fVar16 + fVar1 * fVar9 + fVar3 * fVar5 + fVar4 * fVar20;
    fStack_17c = fVar2 * fVar17 + fVar1 * fVar10 + fVar3 * fVar6 + fVar4 * fVar21;
    fVar1 = *(float *)(param_4 + 0x2a90);
    fVar2 = *(float *)(param_4 + 0x2a94);
    fVar3 = *(float *)(param_4 + 0x2a98);
    fVar4 = *(float *)(param_4 + 0x2a9c);
    local_178 = fVar2 * fVar11 + fVar1 * fVar7 + fVar3 * fVar35 + fVar4 * fVar18;
    fStack_174 = fVar2 * fVar12 + fVar1 * fVar8 + fVar3 * fVar36 + fVar4 * fVar19;
    fStack_170 = fVar2 * fVar16 + fVar1 * fVar9 + fVar3 * fVar5 + fVar4 * fVar20;
    fStack_16c = fVar2 * fVar17 + fVar1 * fVar10 + fVar3 * fVar6 + fVar4 * fVar21;
    SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
              (param_2,*param_3,param_1 + 0x32,&local_1a8,in_stack_fffffffffffffe48);
  }
  if (*(short *)(param_1 + 0x3c) != 0) {
    _Src = *(char **)(pcVar26 + 0x110);
    if (*(char **)(pcVar26 + 0x110) == (char *)0x0) {
      _Src = pcVar26 + 0x10;
    }
    local_168 = (undefined1  [8])*param_3;
    uVar34 = (uint)*(ushort *)(param_1 + 0x3c);
    if (*(int *)(pcVar26 + 0x120) * 0x10 <= (int)(uint)*(ushort *)(param_1 + 0x3c)) {
      uVar34 = *(int *)(pcVar26 + 0x120) * 0x10;
    }
    if (0 < (int)uVar34) {
      uVar13 = *(ushort *)(param_1 + 0x3a);
      pvVar33 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      param_5._0_4_ = (uint)*(ushort *)(param_1 + 0x38);
      uVar29 = (longlong)(int)uVar34 + (longlong)pvVar33;
      if (*(ulonglong *)(param_2 + 0x38) < uVar29) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar34 + 0x10);
        pvVar33 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
        uVar29 = (longlong)(int)uVar34 + (longlong)pvVar33;
      }
      *(ulonglong *)(param_2 + 0x30) = uVar29;
      _guard_xfg_dispatch_icall_nop(pvVar33,_Src,(ulonglong)uVar34);
      puVar32 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar31 = puVar32 + 6;
      if (*(undefined8 **)(param_2 + 0x38) < puVar31) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
        puVar32 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar31 = puVar32 + 6;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar31;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar32;
      *(undefined8 **)(param_2 + 8) = puVar32 + 1;
      puVar32[1] = 0;
      *puVar32 = &PTR_LAB_144dc9c80;
      puVar32[2] = local_168;
      *(uint *)(puVar32 + 4) = (uint)param_5;
      *(uint *)((longlong)puVar32 + 0x24) = (uint)uVar13;
      puVar32[3] = pvVar33;
      *(uint *)(puVar32 + 5) = uVar34;
    }
  }
  param_5._0_4_ = DAT_1464c36e4;
  if (*pcVar26 == '\0') {
    param_5._0_4_ = 0;
  }
  FUN_141c0b130(param_2,*param_3,param_1 + 0x3e,&param_5,
                in_stack_fffffffffffffe48 & 0xffffffff00000000);
  if (DAT_1464c36e8 < 1) {
    param_5._0_4_ = 1;
  }
  else {
    param_5._0_4_ = 0x10;
    if (DAT_1464c36e8 < 0x10) {
      param_5._0_4_ = DAT_1464c36e8;
    }
  }
  uVar15 = *param_3;
  uVar34 = (uint)*(ushort *)(param_1 + 0x48);
  if (3 < *(ushort *)(param_1 + 0x48)) {
    uVar34 = 4;
  }
  uVar29 = (ulonglong)uVar34;
  if (uVar34 != 0) {
    uVar13 = *(ushort *)(param_1 + 0x44);
    uVar14 = *(ushort *)(param_1 + 0x46);
    pvVar33 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar30 = (longlong)pvVar33 + uVar29;
    if (*(ulonglong *)(param_2 + 0x38) < uVar30) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar34 + 0x10);
      pvVar33 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar30 = uVar29 + (longlong)pvVar33;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar30;
    _guard_xfg_dispatch_icall_nop(pvVar33,&param_5,uVar29);
    puVar32 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar31 = puVar32 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar31) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar32 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar31 = puVar32 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar31;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar32;
    *(undefined8 **)(param_2 + 8) = puVar32 + 1;
    puVar32[1] = 0;
    *puVar32 = &PTR_LAB_144dc9c80;
    *(uint *)(puVar32 + 4) = (uint)uVar13;
    puVar32[2] = uVar15;
    puVar32[3] = pvVar33;
    *(uint *)((longlong)puVar32 + 0x24) = (uint)uVar14;
    *(uint *)(puVar32 + 5) = uVar34;
  }
  return;
}



// FUNCTION 141df05b0 FUN_141df05b0 body=2015 status=ok
// SIG undefined FUN_141df05b0(void)

void FUN_141df05b0(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  char *param_5)

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
  ushort uVar13;
  ushort uVar14;
  undefined8 uVar15;
  uint uVar16;
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
  char *pcVar27;
  undefined8 uVar28;
  float *pfVar29;
  ulonglong uVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  void *_Dst;
  char *pcVar33;
  ulonglong _Size;
  float fVar34;
  float fVar35;
  ulonglong in_stack_fffffffffffffe58;
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
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined1 local_158 [8];
  float fStack_150;
  float fStack_14c;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [224];
  
  pcVar27 = param_5;
  if ((*(short *)(param_1 + 2) != 0) || (*(short *)(param_1 + 6) != 0)) {
    in_stack_fffffffffffffe58 = *(ulonglong *)(*(longlong *)(param_5 + 0x130) + 0x18);
    FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHICommandList>
              (param_1,param_2,*param_3,*(undefined8 *)(*(longlong *)(param_5 + 0x130) + 0x10),
               in_stack_fffffffffffffe58);
  }
  if ((*(short *)(param_1 + 10) != 0) || (*(short *)(param_1 + 0xe) != 0)) {
    in_stack_fffffffffffffe58 = *(ulonglong *)(*(longlong *)(pcVar27 + 0x138) + 0x18);
    FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHICommandList>
              (param_1 + 8,param_2,*param_3,*(undefined8 *)(*(longlong *)(pcVar27 + 0x138) + 0x10),
               in_stack_fffffffffffffe58);
  }
  if ((*(short *)(param_1 + 0x12) != 0) || (*(short *)(param_1 + 0x16) != 0)) {
    in_stack_fffffffffffffe58 = *(ulonglong *)(*(longlong *)(pcVar27 + 0x140) + 0x18);
    FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHICommandList>
              (param_1 + 0x10,param_2,*param_3,
               *(undefined8 *)(*(longlong *)(pcVar27 + 0x140) + 0x10),in_stack_fffffffffffffe58);
  }
  if ((*(short *)(param_1 + 0x1a) != 0) || (*(short *)(param_1 + 0x1e) != 0)) {
    in_stack_fffffffffffffe58 = *(ulonglong *)(*(longlong *)(param_4 + 0x2fc8) + 0x18);
    FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHICommandList>
              (param_1 + 0x18,param_2,*param_3,
               *(undefined8 *)(*(longlong *)(param_4 + 0x2fc8) + 0x10),in_stack_fffffffffffffe58);
  }
  uVar28 = FUN_141a156e0();
  uVar15 = *param_3;
  if (*(short *)(param_1 + 0x22) != 0) {
    param_5._0_4_ = (uint)*(ushort *)(param_1 + 0x20);
    puVar32 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar31 = puVar32 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar31) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar32 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar31 = puVar32 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar31;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar32;
    *(undefined8 **)(param_2 + 8) = puVar32 + 1;
    puVar32[1] = 0;
    *puVar32 = &PTR_LAB_144dcb3b8;
    puVar32[2] = uVar15;
    *(uint *)(puVar32 + 3) = (uint)param_5;
    puVar32[4] = uVar28;
  }
  if (*(char *)(param_1 + 0x2a) != '\0') {
    SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
              (param_2,*param_3,param_1 + 0x24,*(undefined8 *)(param_4 + 0x2fc0));
  }
  if (*(short *)(param_1 + 0x30) != 0) {
    fVar1 = *(float *)(param_4 + 0x6e0);
    fVar2 = *(float *)(param_4 + 0x6f4);
    fVar3 = *(float *)(param_4 + 0x704);
    fVar4 = *(float *)(param_4 + 0x6f0);
    fVar5 = *(float *)(param_4 + 0x700);
    fVar6 = *(float *)(param_4 + 0x6e8);
    local_148 = ZEXT416(*(uint *)(param_4 + 0x6d0));
    fVar7 = *(float *)(param_4 + 0x6f8);
    local_138 = ZEXT416(*(uint *)(param_4 + 0x6d8));
    fVar8 = *(float *)(param_4 + 0x708);
    fVar9 = *(float *)(param_4 + 0x6ec);
    _local_158 = ZEXT416(*(uint *)(param_4 + 0x6d4));
    fVar10 = *(float *)(param_4 + 0x6e4);
    local_128 = ZEXT416(*(uint *)(param_4 + 0x6dc));
    pfVar29 = (float *)FUN_141dfa450(param_4 + 0x390,local_108);
    fVar17 = *pfVar29;
    fVar18 = pfVar29[1];
    fVar19 = pfVar29[2];
    fVar20 = pfVar29[3];
    uVar15 = *(undefined8 *)(pfVar29 + 0xc);
    uVar28 = *(undefined8 *)(pfVar29 + 0xe);
    fVar21 = pfVar29[4];
    fVar22 = pfVar29[5];
    fVar23 = pfVar29[6];
    fVar24 = pfVar29[7];
    fVar25 = pfVar29[8];
    fVar26 = pfVar29[9];
    fVar34 = pfVar29[10];
    fVar35 = pfVar29[0xb];
    local_158._4_4_ = fVar10;
    fStack_150 = fVar2;
    fStack_14c = fVar3;
    fVar11 = *(float *)(param_4 + 0x6fc);
    fVar12 = *(float *)(param_4 + 0x70c);
    in_stack_fffffffffffffe58 = in_stack_fffffffffffffe58 & 0xffffffff00000000;
    local_198 = fVar18 * (float)local_158._0_4_ + fVar17 * (float)local_148._0_4_ +
                fVar19 * (float)local_138._0_4_ + fVar20 * (float)local_128._0_4_;
    fStack_194 = fVar18 * fVar10 + fVar17 * fVar1 + fVar19 * fVar6 + fVar20 * fVar9;
    fStack_190 = fVar18 * fVar2 + fVar17 * fVar4 + fVar19 * fVar7 + fVar20 * fVar11;
    fStack_18c = fVar18 * fVar3 + fVar17 * fVar5 + fVar19 * fVar8 + fVar20 * fVar12;
    local_188 = fVar22 * (float)local_158._0_4_ + fVar21 * (float)local_148._0_4_ +
                fVar23 * (float)local_138._0_4_ + fVar24 * (float)local_128._0_4_;
    fStack_184 = fVar22 * fVar10 + fVar21 * fVar1 + fVar23 * fVar6 + fVar24 * fVar9;
    fStack_180 = fVar22 * fVar2 + fVar21 * fVar4 + fVar23 * fVar7 + fVar24 * fVar11;
    fStack_17c = fVar22 * fVar3 + fVar21 * fVar5 + fVar23 * fVar8 + fVar24 * fVar12;
    local_178 = fVar25 * (float)local_148._0_4_ + fVar26 * (float)local_158._0_4_ +
                fVar34 * (float)local_138._0_4_ + fVar35 * (float)local_128._0_4_;
    fStack_174 = fVar25 * fVar1 + fVar26 * fVar10 + fVar34 * fVar6 + fVar35 * fVar9;
    fStack_170 = fVar25 * fVar4 + fVar26 * fVar2 + fVar34 * fVar7 + fVar35 * fVar11;
    fStack_16c = fVar25 * fVar5 + fVar26 * fVar3 + fVar34 * fVar8 + fVar35 * fVar12;
    local_118._0_4_ = (float)uVar15;
    local_118._4_4_ = (float)((ulonglong)uVar15 >> 0x20);
    uStack_110._0_4_ = (float)uVar28;
    uStack_110._4_4_ = (float)((ulonglong)uVar28 >> 0x20);
    local_168 = local_118._4_4_ * (float)local_158._0_4_ + (float)local_118 * (float)local_148._0_4_
                + (float)uStack_110 * (float)local_138._0_4_ +
                uStack_110._4_4_ * (float)local_128._0_4_;
    fStack_164 = local_118._4_4_ * fVar10 + (float)local_118 * fVar1 + (float)uStack_110 * fVar6 +
                 uStack_110._4_4_ * fVar9;
    fStack_160 = local_118._4_4_ * fVar2 + (float)local_118 * fVar4 + (float)uStack_110 * fVar7 +
                 uStack_110._4_4_ * fVar11;
    fStack_15c = local_118._4_4_ * fVar3 + (float)local_118 * fVar5 + (float)uStack_110 * fVar8 +
                 uStack_110._4_4_ * fVar12;
    local_118 = uVar15;
    uStack_110 = uVar28;
    SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
              (param_2,*param_3,param_1 + 0x2c,&local_198,in_stack_fffffffffffffe58);
  }
  if (*(short *)(param_1 + 0x36) != 0) {
    fVar1 = *(float *)(param_4 + 0x2a60);
    fVar2 = *(float *)(param_4 + 0x2a64);
    fVar3 = *(float *)(param_4 + 0x2a68);
    fVar4 = *(float *)(param_4 + 0x2a6c);
    fVar5 = *(float *)(param_4 + 0x2908);
    fVar6 = *(float *)(param_4 + 0x290c);
    in_stack_fffffffffffffe58 = in_stack_fffffffffffffe58 & 0xffffffff00000000;
    fVar7 = *(float *)(param_4 + 0x28e0);
    fVar8 = *(float *)(param_4 + 0x28e4);
    fVar9 = *(float *)(param_4 + 0x28e8);
    fVar10 = *(float *)(param_4 + 0x28ec);
    fVar11 = *(float *)(param_4 + 0x28f0);
    fVar12 = *(float *)(param_4 + 0x28f4);
    fVar17 = *(float *)(param_4 + 0x28f8);
    fVar18 = *(float *)(param_4 + 0x28fc);
    fVar19 = *(float *)(param_4 + 0x2910);
    fVar20 = *(float *)(param_4 + 0x2914);
    fVar21 = *(float *)(param_4 + 0x2918);
    fVar22 = *(float *)(param_4 + 0x291c);
    fVar34 = *(float *)(param_4 + 0x2900) - *(float *)(param_4 + 0x2e40);
    fVar35 = *(float *)(param_4 + 0x2904) - *(float *)(param_4 + 0x2e44);
    fVar23 = *(float *)(param_4 + 0x2a70);
    fVar24 = *(float *)(param_4 + 0x2a74);
    fVar25 = *(float *)(param_4 + 0x2a78);
    fVar26 = *(float *)(param_4 + 0x2a7c);
    local_198 = fVar2 * fVar11 + fVar1 * fVar7 + fVar3 * fVar34 + fVar4 * fVar19;
    fStack_194 = fVar2 * fVar12 + fVar1 * fVar8 + fVar3 * fVar35 + fVar4 * fVar20;
    fStack_190 = fVar2 * fVar17 + fVar1 * fVar9 + fVar3 * fVar5 + fVar4 * fVar21;
    fStack_18c = fVar2 * fVar18 + fVar1 * fVar10 + fVar3 * fVar6 + fVar4 * fVar22;
    local_188 = fVar24 * fVar11 + fVar23 * fVar7 + fVar25 * fVar34 + fVar26 * fVar19;
    fStack_184 = fVar24 * fVar12 + fVar23 * fVar8 + fVar25 * fVar35 + fVar26 * fVar20;
    fStack_180 = fVar24 * fVar17 + fVar23 * fVar9 + fVar25 * fVar5 + fVar26 * fVar21;
    fStack_17c = fVar24 * fVar18 + fVar23 * fVar10 + fVar25 * fVar6 + fVar26 * fVar22;
    fVar1 = *(float *)(param_4 + 0x2a80);
    fVar2 = *(float *)(param_4 + 0x2a84);
    fVar3 = *(float *)(param_4 + 0x2a88);
    fVar4 = *(float *)(param_4 + 0x2a8c);
    local_178 = fVar2 * fVar11 + fVar1 * fVar7 + fVar3 * fVar34 + fVar4 * fVar19;
    fStack_174 = fVar2 * fVar12 + fVar1 * fVar8 + fVar3 * fVar35 + fVar4 * fVar20;
    fStack_170 = fVar2 * fVar17 + fVar1 * fVar9 + fVar3 * fVar5 + fVar4 * fVar21;
    fStack_16c = fVar2 * fVar18 + fVar1 * fVar10 + fVar3 * fVar6 + fVar4 * fVar22;
    fVar1 = *(float *)(param_4 + 0x2a90);
    fVar2 = *(float *)(param_4 + 0x2a94);
    fVar3 = *(float *)(param_4 + 0x2a98);
    fVar4 = *(float *)(param_4 + 0x2a9c);
    local_168 = fVar2 * fVar11 + fVar1 * fVar7 + fVar3 * fVar34 + fVar4 * fVar19;
    fStack_164 = fVar2 * fVar12 + fVar1 * fVar8 + fVar3 * fVar35 + fVar4 * fVar20;
    fStack_160 = fVar2 * fVar17 + fVar1 * fVar9 + fVar3 * fVar5 + fVar4 * fVar21;
    fStack_15c = fVar2 * fVar18 + fVar1 * fVar10 + fVar3 * fVar6 + fVar4 * fVar22;
    SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
              (param_2,*param_3,param_1 + 0x32,&local_198,in_stack_fffffffffffffe58);
  }
  if (*(short *)(param_1 + 0x3c) != 0) {
    pcVar33 = *(char **)(pcVar27 + 0x110);
    if (*(char **)(pcVar27 + 0x110) == (char *)0x0) {
      pcVar33 = pcVar27 + 0x10;
    }
    in_stack_fffffffffffffe58 =
         CONCAT44((int)(in_stack_fffffffffffffe58 >> 0x20),*(undefined4 *)(pcVar27 + 0x120));
    FUN_141aace20(param_2,*param_3,param_1 + 0x38,pcVar33,in_stack_fffffffffffffe58,0);
  }
  param_5._0_4_ = DAT_1464c36e4;
  if (*pcVar27 == '\0') {
    param_5._0_4_ = 0;
  }
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,*param_3,param_1 + 0x3e,&param_5,in_stack_fffffffffffffe58 & 0xffffffff00000000
            );
  if (DAT_1464c36e8 < 1) {
    param_5._0_4_ = 1;
  }
  else {
    param_5._0_4_ = 0x10;
    if (DAT_1464c36e8 < 0x10) {
      param_5._0_4_ = DAT_1464c36e8;
    }
  }
  uVar15 = *param_3;
  uVar16 = (uint)*(ushort *)(param_1 + 0x48);
  if (3 < *(ushort *)(param_1 + 0x48)) {
    uVar16 = 4;
  }
  _Size = (ulonglong)uVar16;
  if (uVar16 != 0) {
    uVar13 = *(ushort *)(param_1 + 0x44);
    uVar14 = *(ushort *)(param_1 + 0x46);
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar30 = (longlong)_Dst + _Size;
    if (*(ulonglong *)(param_2 + 0x38) < uVar30) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar16 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar30 = _Size + (longlong)_Dst;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar30;
    _guard_xfg_dispatch_icall_nop(_Dst,&param_5,_Size);
    puVar32 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar31 = puVar32 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar31) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar32 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar31 = puVar32 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar31;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar32;
    *(undefined8 **)(param_2 + 8) = puVar32 + 1;
    puVar32[1] = 0;
    *puVar32 = &PTR_LAB_144d92080;
    *(uint *)(puVar32 + 4) = (uint)uVar13;
    puVar32[2] = uVar15;
    puVar32[3] = _Dst;
    *(uint *)((longlong)puVar32 + 0x24) = (uint)uVar14;
    *(uint *)(puVar32 + 5) = uVar16;
  }
  return;
}



// FUNCTION 141df0d90 FUN_141df0d90 body=2267 status=ok
// SIG undefined FUN_141df0d90(void)

void FUN_141df0d90(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  char *param_5)

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
  ushort uVar14;
  ushort uVar15;
  undefined8 uVar16;
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
  char *pcVar27;
  undefined8 uVar28;
  float *pfVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  char *_Src;
  void *pvVar34;
  uint uVar35;
  float fVar36;
  float fVar37;
  ulonglong in_stack_fffffffffffffe48;
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
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118 [224];
  
  pcVar27 = param_5;
  if ((*(short *)(param_1 + 2) != 0) || (*(short *)(param_1 + 6) != 0)) {
    in_stack_fffffffffffffe48 = *(ulonglong *)(*(longlong *)(param_5 + 0x130) + 0x18);
    FUN_141df5e10(param_1,param_2,*param_3,*(undefined8 *)(*(longlong *)(param_5 + 0x130) + 0x10),
                  in_stack_fffffffffffffe48);
  }
  if ((*(short *)(param_1 + 10) != 0) || (*(short *)(param_1 + 0xe) != 0)) {
    in_stack_fffffffffffffe48 = *(ulonglong *)(*(longlong *)(pcVar27 + 0x138) + 0x18);
    FUN_141df5e10(param_1 + 8,param_2,*param_3,
                  *(undefined8 *)(*(longlong *)(pcVar27 + 0x138) + 0x10),in_stack_fffffffffffffe48);
  }
  if ((*(short *)(param_1 + 0x12) != 0) || (*(short *)(param_1 + 0x16) != 0)) {
    in_stack_fffffffffffffe48 = *(ulonglong *)(*(longlong *)(pcVar27 + 0x140) + 0x18);
    FUN_141df5e10(param_1 + 0x10,param_2,*param_3,
                  *(undefined8 *)(*(longlong *)(pcVar27 + 0x140) + 0x10),in_stack_fffffffffffffe48);
  }
  if ((*(short *)(param_1 + 0x1a) != 0) || (*(short *)(param_1 + 0x1e) != 0)) {
    in_stack_fffffffffffffe48 = *(ulonglong *)(*(longlong *)(param_4 + 0x2fc8) + 0x18);
    FUN_141df5e10(param_1 + 0x18,param_2,*param_3,
                  *(undefined8 *)(*(longlong *)(param_4 + 0x2fc8) + 0x10),in_stack_fffffffffffffe48)
    ;
  }
  uVar28 = FUN_141a156e0();
  uVar16 = *param_3;
  if (*(short *)(param_1 + 0x22) != 0) {
    param_5._0_4_ = (uint)*(ushort *)(param_1 + 0x20);
    puVar33 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar32 = puVar33 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar32) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar33 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar32 = puVar33 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar32;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar33;
    *(undefined8 **)(param_2 + 8) = puVar33 + 1;
    puVar33[1] = 0;
    *puVar33 = &PTR_LAB_144d8e610;
    puVar33[2] = uVar16;
    *(uint *)(puVar33 + 3) = (uint)param_5;
    puVar33[4] = uVar28;
  }
  if (*(char *)(param_1 + 0x2a) != '\0') {
    SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
              (param_2,*param_3,param_1 + 0x24,*(undefined8 *)(param_4 + 0x2fc0));
  }
  if (*(short *)(param_1 + 0x30) != 0) {
    fVar1 = *(float *)(param_4 + 0x6d4);
    fVar2 = *(float *)(param_4 + 0x6e0);
    fVar3 = *(float *)(param_4 + 0x6f4);
    fVar4 = *(float *)(param_4 + 0x704);
    fVar5 = *(float *)(param_4 + 0x6f0);
    fVar6 = *(float *)(param_4 + 0x700);
    fVar7 = *(float *)(param_4 + 0x6e8);
    local_158 = ZEXT416(*(uint *)(param_4 + 0x6d0));
    fVar8 = *(float *)(param_4 + 0x6f8);
    local_148 = ZEXT416(*(uint *)(param_4 + 0x6d8));
    fVar9 = *(float *)(param_4 + 0x708);
    fVar10 = *(float *)(param_4 + 0x6ec);
    fVar11 = *(float *)(param_4 + 0x6e4);
    local_138 = ZEXT416(*(uint *)(param_4 + 0x6dc));
    pfVar29 = (float *)FUN_141dfa450(param_4 + 0x390,local_118);
    fVar17 = *pfVar29;
    fVar18 = pfVar29[1];
    fVar19 = pfVar29[2];
    fVar20 = pfVar29[3];
    uVar16 = *(undefined8 *)(pfVar29 + 0xc);
    uVar28 = *(undefined8 *)(pfVar29 + 0xe);
    fVar21 = pfVar29[4];
    fVar22 = pfVar29[5];
    fVar23 = pfVar29[6];
    fVar24 = pfVar29[7];
    fVar25 = pfVar29[8];
    fVar36 = pfVar29[9];
    fVar37 = pfVar29[10];
    fVar26 = pfVar29[0xb];
    fVar12 = *(float *)(param_4 + 0x6fc);
    fVar13 = *(float *)(param_4 + 0x70c);
    in_stack_fffffffffffffe48 = in_stack_fffffffffffffe48 & 0xffffffff00000000;
    local_198 = fVar18 * fVar1 + fVar17 * (float)local_158._0_4_ + fVar19 * (float)local_148._0_4_ +
                fVar20 * (float)local_138._0_4_;
    fStack_194 = fVar18 * fVar11 + fVar17 * fVar2 + fVar19 * fVar7 + fVar20 * fVar10;
    fStack_190 = fVar18 * fVar3 + fVar17 * fVar5 + fVar19 * fVar8 + fVar20 * fVar12;
    fStack_18c = fVar18 * fVar4 + fVar17 * fVar6 + fVar19 * fVar9 + fVar20 * fVar13;
    local_188 = fVar22 * fVar1 + fVar21 * (float)local_158._0_4_ + fVar23 * (float)local_148._0_4_ +
                fVar24 * (float)local_138._0_4_;
    fStack_184 = fVar22 * fVar11 + fVar21 * fVar2 + fVar23 * fVar7 + fVar24 * fVar10;
    fStack_180 = fVar22 * fVar3 + fVar21 * fVar5 + fVar23 * fVar8 + fVar24 * fVar12;
    fStack_17c = fVar22 * fVar4 + fVar21 * fVar6 + fVar23 * fVar9 + fVar24 * fVar13;
    local_178 = fVar25 * (float)local_158._0_4_ + fVar36 * fVar1 + fVar37 * (float)local_148._0_4_ +
                fVar26 * (float)local_138._0_4_;
    fStack_174 = fVar25 * fVar2 + fVar36 * fVar11 + fVar37 * fVar7 + fVar26 * fVar10;
    fStack_170 = fVar25 * fVar5 + fVar36 * fVar3 + fVar37 * fVar8 + fVar26 * fVar12;
    fStack_16c = fVar25 * fVar6 + fVar36 * fVar4 + fVar37 * fVar9 + fVar26 * fVar13;
    local_128._0_4_ = (float)uVar16;
    local_128._4_4_ = (float)((ulonglong)uVar16 >> 0x20);
    uStack_120._0_4_ = (float)uVar28;
    uStack_120._4_4_ = (float)((ulonglong)uVar28 >> 0x20);
    local_168 = local_128._4_4_ * fVar1 + (float)local_128 * (float)local_158._0_4_ +
                (float)uStack_120 * (float)local_148._0_4_ +
                uStack_120._4_4_ * (float)local_138._0_4_;
    fStack_164 = local_128._4_4_ * fVar11 + (float)local_128 * fVar2 + (float)uStack_120 * fVar7 +
                 uStack_120._4_4_ * fVar10;
    fStack_160 = local_128._4_4_ * fVar3 + (float)local_128 * fVar5 + (float)uStack_120 * fVar8 +
                 uStack_120._4_4_ * fVar12;
    fStack_15c = local_128._4_4_ * fVar4 + (float)local_128 * fVar6 + (float)uStack_120 * fVar9 +
                 uStack_120._4_4_ * fVar13;
    local_128 = uVar16;
    uStack_120 = uVar28;
    SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
              (param_2,*param_3,param_1 + 0x2c,&local_198,in_stack_fffffffffffffe48);
  }
  if (*(short *)(param_1 + 0x36) != 0) {
    fVar1 = *(float *)(param_4 + 0x2a60);
    fVar2 = *(float *)(param_4 + 0x2a64);
    fVar3 = *(float *)(param_4 + 0x2a68);
    fVar4 = *(float *)(param_4 + 0x2a6c);
    fVar5 = *(float *)(param_4 + 0x2908);
    fVar6 = *(float *)(param_4 + 0x290c);
    in_stack_fffffffffffffe48 = in_stack_fffffffffffffe48 & 0xffffffff00000000;
    fVar7 = *(float *)(param_4 + 0x28e0);
    fVar8 = *(float *)(param_4 + 0x28e4);
    fVar9 = *(float *)(param_4 + 0x28e8);
    fVar10 = *(float *)(param_4 + 0x28ec);
    fVar11 = *(float *)(param_4 + 0x28f0);
    fVar12 = *(float *)(param_4 + 0x28f4);
    fVar13 = *(float *)(param_4 + 0x28f8);
    fVar17 = *(float *)(param_4 + 0x28fc);
    fVar18 = *(float *)(param_4 + 0x2910);
    fVar19 = *(float *)(param_4 + 0x2914);
    fVar20 = *(float *)(param_4 + 0x2918);
    fVar21 = *(float *)(param_4 + 0x291c);
    fVar36 = *(float *)(param_4 + 0x2900) - *(float *)(param_4 + 0x2e40);
    fVar37 = *(float *)(param_4 + 0x2904) - *(float *)(param_4 + 0x2e44);
    fVar22 = *(float *)(param_4 + 0x2a70);
    fVar23 = *(float *)(param_4 + 0x2a74);
    fVar24 = *(float *)(param_4 + 0x2a78);
    fVar25 = *(float *)(param_4 + 0x2a7c);
    local_198 = fVar2 * fVar11 + fVar1 * fVar7 + fVar3 * fVar36 + fVar4 * fVar18;
    fStack_194 = fVar2 * fVar12 + fVar1 * fVar8 + fVar3 * fVar37 + fVar4 * fVar19;
    fStack_190 = fVar2 * fVar13 + fVar1 * fVar9 + fVar3 * fVar5 + fVar4 * fVar20;
    fStack_18c = fVar2 * fVar17 + fVar1 * fVar10 + fVar3 * fVar6 + fVar4 * fVar21;
    local_188 = fVar23 * fVar11 + fVar22 * fVar7 + fVar24 * fVar36 + fVar25 * fVar18;
    fStack_184 = fVar23 * fVar12 + fVar22 * fVar8 + fVar24 * fVar37 + fVar25 * fVar19;
    fStack_180 = fVar23 * fVar13 + fVar22 * fVar9 + fVar24 * fVar5 + fVar25 * fVar20;
    fStack_17c = fVar23 * fVar17 + fVar22 * fVar10 + fVar24 * fVar6 + fVar25 * fVar21;
    fVar1 = *(float *)(param_4 + 0x2a80);
    fVar2 = *(float *)(param_4 + 0x2a84);
    fVar3 = *(float *)(param_4 + 0x2a88);
    fVar4 = *(float *)(param_4 + 0x2a8c);
    local_178 = fVar2 * fVar11 + fVar1 * fVar7 + fVar3 * fVar36 + fVar4 * fVar18;
    fStack_174 = fVar2 * fVar12 + fVar1 * fVar8 + fVar3 * fVar37 + fVar4 * fVar19;
    fStack_170 = fVar2 * fVar13 + fVar1 * fVar9 + fVar3 * fVar5 + fVar4 * fVar20;
    fStack_16c = fVar2 * fVar17 + fVar1 * fVar10 + fVar3 * fVar6 + fVar4 * fVar21;
    fVar1 = *(float *)(param_4 + 0x2a90);
    fVar2 = *(float *)(param_4 + 0x2a94);
    fVar3 = *(float *)(param_4 + 0x2a98);
    fVar4 = *(float *)(param_4 + 0x2a9c);
    local_168 = fVar2 * fVar11 + fVar1 * fVar7 + fVar3 * fVar36 + fVar4 * fVar18;
    fStack_164 = fVar2 * fVar12 + fVar1 * fVar8 + fVar3 * fVar37 + fVar4 * fVar19;
    fStack_160 = fVar2 * fVar13 + fVar1 * fVar9 + fVar3 * fVar5 + fVar4 * fVar20;
    fStack_15c = fVar2 * fVar17 + fVar1 * fVar10 + fVar3 * fVar6 + fVar4 * fVar21;
    SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
              (param_2,*param_3,param_1 + 0x32,&local_198,in_stack_fffffffffffffe48);
  }
  if (*(short *)(param_1 + 0x3c) != 0) {
    _Src = *(char **)(pcVar27 + 0x110);
    if (*(char **)(pcVar27 + 0x110) == (char *)0x0) {
      _Src = pcVar27 + 0x10;
    }
    uVar16 = *param_3;
    uVar35 = (uint)*(ushort *)(param_1 + 0x3c);
    if (*(int *)(pcVar27 + 0x120) * 0x10 <= (int)(uint)*(ushort *)(param_1 + 0x3c)) {
      uVar35 = *(int *)(pcVar27 + 0x120) * 0x10;
    }
    if (0 < (int)uVar35) {
      uVar14 = *(ushort *)(param_1 + 0x3a);
      pvVar34 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      param_5._0_4_ = (uint)*(ushort *)(param_1 + 0x38);
      uVar30 = (longlong)(int)uVar35 + (longlong)pvVar34;
      if (*(ulonglong *)(param_2 + 0x38) < uVar30) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar35 + 0x10);
        pvVar34 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
        uVar30 = (longlong)(int)uVar35 + (longlong)pvVar34;
      }
      *(ulonglong *)(param_2 + 0x30) = uVar30;
      _guard_xfg_dispatch_icall_nop(pvVar34,_Src,(ulonglong)uVar35);
      puVar33 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar32 = puVar33 + 6;
      if (*(undefined8 **)(param_2 + 0x38) < puVar32) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
        puVar33 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar32 = puVar33 + 6;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar32;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar33;
      *(undefined8 **)(param_2 + 8) = puVar33 + 1;
      puVar33[1] = 0;
      *puVar33 = &PTR_LAB_144e147b0;
      puVar33[2] = uVar16;
      *(uint *)(puVar33 + 4) = (uint)param_5;
      *(uint *)((longlong)puVar33 + 0x24) = (uint)uVar14;
      puVar33[3] = pvVar34;
      *(uint *)(puVar33 + 5) = uVar35;
    }
  }
  param_5._0_4_ = DAT_1464c36e4;
  if (*pcVar27 == '\0') {
    param_5._0_4_ = 0;
  }
  uVar16 = *param_3;
  uVar35 = (uint)*(ushort *)(param_1 + 0x42);
  if (3 < *(ushort *)(param_1 + 0x42)) {
    uVar35 = 4;
  }
  uVar30 = (ulonglong)uVar35;
  if (uVar35 != 0) {
    uVar14 = *(ushort *)(param_1 + 0x40);
    uVar15 = *(ushort *)(param_1 + 0x3e);
    pvVar34 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar31 = (longlong)pvVar34 + uVar30;
    if (*(ulonglong *)(param_2 + 0x38) < uVar31) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar35 + 0x10);
      pvVar34 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar31 = (longlong)pvVar34 + uVar30;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar31;
    _guard_xfg_dispatch_icall_nop(pvVar34,&param_5,uVar30);
    puVar33 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar32 = puVar33 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar32) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar33 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar32 = puVar33 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar32;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar33;
    *(undefined8 **)(param_2 + 8) = puVar33 + 1;
    puVar33[1] = 0;
    *puVar33 = &PTR_LAB_144e147b0;
    puVar33[2] = uVar16;
    *(uint *)(puVar33 + 4) = (uint)uVar15;
    *(uint *)((longlong)puVar33 + 0x24) = (uint)uVar14;
    puVar33[3] = pvVar34;
    *(uint *)(puVar33 + 5) = uVar35;
  }
  if (DAT_1464c36e8 < 1) {
    param_5._0_4_ = 1;
  }
  else {
    param_5._0_4_ = 0x10;
    if (DAT_1464c36e8 < 0x10) {
      param_5._0_4_ = DAT_1464c36e8;
    }
  }
  FUN_141cd46a0(param_2,*param_3,param_1 + 0x44,&param_5,
                in_stack_fffffffffffffe48 & 0xffffffff00000000);
  return;
}



// FUNCTION 141df1670 FUN_141df1670 body=1810 status=ok
// SIG undefined FUN_141df1670(void)

void FUN_141df1670(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  char *param_5)

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
  undefined8 uVar13;
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
  char *pcVar24;
  undefined8 uVar25;
  undefined8 *puVar26;
  float *pfVar27;
  undefined8 *puVar28;
  char *pcVar29;
  float fVar30;
  float fVar31;
  ulonglong in_stack_fffffffffffffe58;
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
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined1 local_158 [8];
  float fStack_150;
  float fStack_14c;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [224];
  
  pcVar24 = param_5;
  if ((*(short *)(param_1 + 2) != 0) || (*(short *)(param_1 + 6) != 0)) {
    in_stack_fffffffffffffe58 = *(ulonglong *)(*(longlong *)(param_5 + 0x130) + 0x18);
    FUN_141df5ec0(param_1,param_2,*param_3,*(undefined8 *)(*(longlong *)(param_5 + 0x130) + 0x10),
                  in_stack_fffffffffffffe58);
  }
  if ((*(short *)(param_1 + 10) != 0) || (*(short *)(param_1 + 0xe) != 0)) {
    in_stack_fffffffffffffe58 = *(ulonglong *)(*(longlong *)(pcVar24 + 0x138) + 0x18);
    FUN_141df5ec0(param_1 + 8,param_2,*param_3,
                  *(undefined8 *)(*(longlong *)(pcVar24 + 0x138) + 0x10),in_stack_fffffffffffffe58);
  }
  if ((*(short *)(param_1 + 0x12) != 0) || (*(short *)(param_1 + 0x16) != 0)) {
    in_stack_fffffffffffffe58 = *(ulonglong *)(*(longlong *)(pcVar24 + 0x140) + 0x18);
    FUN_141df5ec0(param_1 + 0x10,param_2,*param_3,
                  *(undefined8 *)(*(longlong *)(pcVar24 + 0x140) + 0x10),in_stack_fffffffffffffe58);
  }
  if ((*(short *)(param_1 + 0x1a) != 0) || (*(short *)(param_1 + 0x1e) != 0)) {
    in_stack_fffffffffffffe58 = *(ulonglong *)(*(longlong *)(param_4 + 0x2fc8) + 0x18);
    FUN_141df5ec0(param_1 + 0x18,param_2,*param_3,
                  *(undefined8 *)(*(longlong *)(param_4 + 0x2fc8) + 0x10),in_stack_fffffffffffffe58)
    ;
  }
  uVar25 = FUN_141a156e0();
  uVar13 = *param_3;
  if (*(short *)(param_1 + 0x22) != 0) {
    param_5._0_4_ = (uint)*(ushort *)(param_1 + 0x20);
    puVar28 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar26 = puVar28 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar26) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar28 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar26 = puVar28 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar26;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar28;
    *(undefined8 **)(param_2 + 8) = puVar28 + 1;
    puVar28[1] = 0;
    *puVar28 = &PTR_LAB_143f59c70;
    puVar28[2] = uVar13;
    *(uint *)(puVar28 + 3) = (uint)param_5;
    puVar28[4] = uVar25;
  }
  if (*(char *)(param_1 + 0x2a) != '\0') {
    SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
              (param_2,*param_3,param_1 + 0x24,*(undefined8 *)(param_4 + 0x2fc0));
  }
  if (*(short *)(param_1 + 0x30) != 0) {
    fVar1 = *(float *)(param_4 + 0x6e0);
    fVar2 = *(float *)(param_4 + 0x6f4);
    fVar3 = *(float *)(param_4 + 0x704);
    fVar4 = *(float *)(param_4 + 0x6f0);
    fVar5 = *(float *)(param_4 + 0x700);
    fVar6 = *(float *)(param_4 + 0x6e8);
    local_148 = ZEXT416(*(uint *)(param_4 + 0x6d0));
    fVar7 = *(float *)(param_4 + 0x6f8);
    local_138 = ZEXT416(*(uint *)(param_4 + 0x6d8));
    fVar8 = *(float *)(param_4 + 0x708);
    fVar9 = *(float *)(param_4 + 0x6ec);
    _local_158 = ZEXT416(*(uint *)(param_4 + 0x6d4));
    fVar10 = *(float *)(param_4 + 0x6e4);
    local_128 = ZEXT416(*(uint *)(param_4 + 0x6dc));
    pfVar27 = (float *)FUN_141dfa450(param_4 + 0x390,local_108);
    fVar14 = *pfVar27;
    fVar15 = pfVar27[1];
    fVar16 = pfVar27[2];
    fVar17 = pfVar27[3];
    uVar13 = *(undefined8 *)(pfVar27 + 0xc);
    uVar25 = *(undefined8 *)(pfVar27 + 0xe);
    fVar18 = pfVar27[4];
    fVar19 = pfVar27[5];
    fVar20 = pfVar27[6];
    fVar21 = pfVar27[7];
    fVar22 = pfVar27[8];
    fVar23 = pfVar27[9];
    fVar30 = pfVar27[10];
    fVar31 = pfVar27[0xb];
    local_158._4_4_ = fVar10;
    fStack_150 = fVar2;
    fStack_14c = fVar3;
    fVar11 = *(float *)(param_4 + 0x6fc);
    fVar12 = *(float *)(param_4 + 0x70c);
    in_stack_fffffffffffffe58 = in_stack_fffffffffffffe58 & 0xffffffff00000000;
    local_198 = fVar15 * (float)local_158._0_4_ + fVar14 * (float)local_148._0_4_ +
                fVar16 * (float)local_138._0_4_ + fVar17 * (float)local_128._0_4_;
    fStack_194 = fVar15 * fVar10 + fVar14 * fVar1 + fVar16 * fVar6 + fVar17 * fVar9;
    fStack_190 = fVar15 * fVar2 + fVar14 * fVar4 + fVar16 * fVar7 + fVar17 * fVar11;
    fStack_18c = fVar15 * fVar3 + fVar14 * fVar5 + fVar16 * fVar8 + fVar17 * fVar12;
    local_188 = fVar18 * (float)local_148._0_4_ + fVar19 * (float)local_158._0_4_ +
                fVar20 * (float)local_138._0_4_ + fVar21 * (float)local_128._0_4_;
    fStack_184 = fVar18 * fVar1 + fVar19 * fVar10 + fVar20 * fVar6 + fVar21 * fVar9;
    fStack_180 = fVar18 * fVar4 + fVar19 * fVar2 + fVar20 * fVar7 + fVar21 * fVar11;
    fStack_17c = fVar18 * fVar5 + fVar19 * fVar3 + fVar20 * fVar8 + fVar21 * fVar12;
    local_178 = fVar22 * (float)local_148._0_4_ + fVar23 * (float)local_158._0_4_ +
                fVar30 * (float)local_138._0_4_ + fVar31 * (float)local_128._0_4_;
    fStack_174 = fVar22 * fVar1 + fVar23 * fVar10 + fVar30 * fVar6 + fVar31 * fVar9;
    fStack_170 = fVar22 * fVar4 + fVar23 * fVar2 + fVar30 * fVar7 + fVar31 * fVar11;
    fStack_16c = fVar22 * fVar5 + fVar23 * fVar3 + fVar30 * fVar8 + fVar31 * fVar12;
    local_118._0_4_ = (float)uVar13;
    local_118._4_4_ = (float)((ulonglong)uVar13 >> 0x20);
    uStack_110._0_4_ = (float)uVar25;
    uStack_110._4_4_ = (float)((ulonglong)uVar25 >> 0x20);
    local_168 = (float)local_118 * (float)local_148._0_4_ + local_118._4_4_ * (float)local_158._0_4_
                + (float)uStack_110 * (float)local_138._0_4_ +
                uStack_110._4_4_ * (float)local_128._0_4_;
    fStack_164 = (float)local_118 * fVar1 + local_118._4_4_ * fVar10 + (float)uStack_110 * fVar6 +
                 uStack_110._4_4_ * fVar9;
    fStack_160 = (float)local_118 * fVar4 + local_118._4_4_ * fVar2 + (float)uStack_110 * fVar7 +
                 uStack_110._4_4_ * fVar11;
    fStack_15c = (float)local_118 * fVar5 + local_118._4_4_ * fVar3 + (float)uStack_110 * fVar8 +
                 uStack_110._4_4_ * fVar12;
    local_118 = uVar13;
    uStack_110 = uVar25;
    SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
              (param_2,*param_3,param_1 + 0x2c,&local_198,in_stack_fffffffffffffe58);
  }
  if (*(short *)(param_1 + 0x36) != 0) {
    fVar1 = *(float *)(param_4 + 0x2a60);
    fVar2 = *(float *)(param_4 + 0x2a64);
    fVar3 = *(float *)(param_4 + 0x2a68);
    fVar4 = *(float *)(param_4 + 0x2a6c);
    fVar5 = *(float *)(param_4 + 0x2908);
    fVar6 = *(float *)(param_4 + 0x290c);
    in_stack_fffffffffffffe58 = in_stack_fffffffffffffe58 & 0xffffffff00000000;
    fVar7 = *(float *)(param_4 + 0x28e0);
    fVar8 = *(float *)(param_4 + 0x28e4);
    fVar9 = *(float *)(param_4 + 0x28e8);
    fVar10 = *(float *)(param_4 + 0x28ec);
    fVar11 = *(float *)(param_4 + 0x28f0);
    fVar12 = *(float *)(param_4 + 0x28f4);
    fVar14 = *(float *)(param_4 + 0x28f8);
    fVar15 = *(float *)(param_4 + 0x28fc);
    fVar16 = *(float *)(param_4 + 0x2910);
    fVar17 = *(float *)(param_4 + 0x2914);
    fVar18 = *(float *)(param_4 + 0x2918);
    fVar19 = *(float *)(param_4 + 0x291c);
    fVar30 = *(float *)(param_4 + 0x2900) - *(float *)(param_4 + 0x2e40);
    fVar31 = *(float *)(param_4 + 0x2904) - *(float *)(param_4 + 0x2e44);
    fVar20 = *(float *)(param_4 + 0x2a70);
    fVar21 = *(float *)(param_4 + 0x2a74);
    fVar22 = *(float *)(param_4 + 0x2a78);
    fVar23 = *(float *)(param_4 + 0x2a7c);
    local_198 = fVar2 * fVar11 + fVar1 * fVar7 + fVar3 * fVar30 + fVar4 * fVar16;
    fStack_194 = fVar2 * fVar12 + fVar1 * fVar8 + fVar3 * fVar31 + fVar4 * fVar17;
    fStack_190 = fVar2 * fVar14 + fVar1 * fVar9 + fVar3 * fVar5 + fVar4 * fVar18;
    fStack_18c = fVar2 * fVar15 + fVar1 * fVar10 + fVar3 * fVar6 + fVar4 * fVar19;
    local_188 = fVar21 * fVar11 + fVar20 * fVar7 + fVar22 * fVar30 + fVar23 * fVar16;
    fStack_184 = fVar21 * fVar12 + fVar20 * fVar8 + fVar22 * fVar31 + fVar23 * fVar17;
    fStack_180 = fVar21 * fVar14 + fVar20 * fVar9 + fVar22 * fVar5 + fVar23 * fVar18;
    fStack_17c = fVar21 * fVar15 + fVar20 * fVar10 + fVar22 * fVar6 + fVar23 * fVar19;
    fVar1 = *(float *)(param_4 + 0x2a80);
    fVar2 = *(float *)(param_4 + 0x2a84);
    fVar3 = *(float *)(param_4 + 0x2a88);
    fVar4 = *(float *)(param_4 + 0x2a8c);
    local_178 = fVar2 * fVar11 + fVar1 * fVar7 + fVar3 * fVar30 + fVar4 * fVar16;
    fStack_174 = fVar2 * fVar12 + fVar1 * fVar8 + fVar3 * fVar31 + fVar4 * fVar17;
    fStack_170 = fVar2 * fVar14 + fVar1 * fVar9 + fVar3 * fVar5 + fVar4 * fVar18;
    fStack_16c = fVar2 * fVar15 + fVar1 * fVar10 + fVar3 * fVar6 + fVar4 * fVar19;
    fVar1 = *(float *)(param_4 + 0x2a90);
    fVar2 = *(float *)(param_4 + 0x2a94);
    fVar3 = *(float *)(param_4 + 0x2a98);
    fVar4 = *(float *)(param_4 + 0x2a9c);
    local_168 = fVar2 * fVar11 + fVar1 * fVar7 + fVar3 * fVar30 + fVar4 * fVar16;
    fStack_164 = fVar2 * fVar12 + fVar1 * fVar8 + fVar3 * fVar31 + fVar4 * fVar17;
    fStack_160 = fVar2 * fVar14 + fVar1 * fVar9 + fVar3 * fVar5 + fVar4 * fVar18;
    fStack_15c = fVar2 * fVar15 + fVar1 * fVar10 + fVar3 * fVar6 + fVar4 * fVar19;
    SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
              (param_2,*param_3,param_1 + 0x32,&local_198,in_stack_fffffffffffffe58);
  }
  if (*(short *)(param_1 + 0x3c) != 0) {
    pcVar29 = *(char **)(pcVar24 + 0x110);
    if (*(char **)(pcVar24 + 0x110) == (char *)0x0) {
      pcVar29 = pcVar24 + 0x10;
    }
    in_stack_fffffffffffffe58 =
         CONCAT44((int)(in_stack_fffffffffffffe58 >> 0x20),*(undefined4 *)(pcVar24 + 0x120));
    SetShaderValueArray<FRHIPixelShader_*,FVector4,FRHICommandList>
              (param_2,*param_3,param_1 + 0x38,pcVar29,in_stack_fffffffffffffe58,0);
  }
  param_5._0_4_ = DAT_1464c36e4;
  if (*pcVar24 == '\0') {
    param_5._0_4_ = 0;
  }
  in_stack_fffffffffffffe58 = in_stack_fffffffffffffe58 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,*param_3,param_1 + 0x3e,&param_5,in_stack_fffffffffffffe58);
  if (DAT_1464c36e8 < 1) {
    param_5._0_4_ = 1;
  }
  else {
    param_5._0_4_ = 0x10;
    if (DAT_1464c36e8 < 0x10) {
      param_5._0_4_ = DAT_1464c36e8;
    }
  }
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,*param_3,param_1 + 0x44,&param_5,in_stack_fffffffffffffe58 & 0xffffffff00000000
            );
  return;
}



// FUNCTION 141df1d90 FUN_141df1d90 body=2042 status=ok
// SIG undefined FUN_141df1d90(void)

void FUN_141df1d90(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  char *param_5)

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
  ushort uVar13;
  undefined8 uVar14;
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
  char *pcVar25;
  undefined8 uVar26;
  float *pfVar27;
  ulonglong uVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  char *_Src;
  void *_Dst;
  uint uVar31;
  float fVar32;
  float fVar33;
  ulonglong in_stack_fffffffffffffe48;
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
  undefined1 local_168 [8];
  float fStack_160;
  float fStack_15c;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118 [224];
  
  pcVar25 = param_5;
  if ((*(short *)(param_1 + 2) != 0) || (*(short *)(param_1 + 6) != 0)) {
    in_stack_fffffffffffffe48 = *(ulonglong *)(*(longlong *)(param_5 + 0x130) + 0x18);
    FUN_141df5f70(param_1,param_2,*param_3,*(undefined8 *)(*(longlong *)(param_5 + 0x130) + 0x10),
                  in_stack_fffffffffffffe48);
  }
  if ((*(short *)(param_1 + 10) != 0) || (*(short *)(param_1 + 0xe) != 0)) {
    in_stack_fffffffffffffe48 = *(ulonglong *)(*(longlong *)(pcVar25 + 0x138) + 0x18);
    FUN_141df5f70(param_1 + 8,param_2,*param_3,
                  *(undefined8 *)(*(longlong *)(pcVar25 + 0x138) + 0x10),in_stack_fffffffffffffe48);
  }
  if ((*(short *)(param_1 + 0x12) != 0) || (*(short *)(param_1 + 0x16) != 0)) {
    in_stack_fffffffffffffe48 = *(ulonglong *)(*(longlong *)(pcVar25 + 0x140) + 0x18);
    FUN_141df5f70(param_1 + 0x10,param_2,*param_3,
                  *(undefined8 *)(*(longlong *)(pcVar25 + 0x140) + 0x10),in_stack_fffffffffffffe48);
  }
  if ((*(short *)(param_1 + 0x1a) != 0) || (*(short *)(param_1 + 0x1e) != 0)) {
    in_stack_fffffffffffffe48 = *(ulonglong *)(*(longlong *)(param_4 + 0x2fc8) + 0x18);
    FUN_141df5f70(param_1 + 0x18,param_2,*param_3,
                  *(undefined8 *)(*(longlong *)(param_4 + 0x2fc8) + 0x10),in_stack_fffffffffffffe48)
    ;
  }
  uVar26 = FUN_141a156e0();
  uVar14 = *param_3;
  if (*(short *)(param_1 + 0x22) != 0) {
    param_5._0_4_ = (uint)*(ushort *)(param_1 + 0x20);
    puVar30 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar29 = puVar30 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar29) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar30 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar29 = puVar30 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar29;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar30;
    *(undefined8 **)(param_2 + 8) = puVar30 + 1;
    puVar30[1] = 0;
    *puVar30 = &PTR_LAB_143f59c60;
    puVar30[2] = uVar14;
    *(uint *)(puVar30 + 3) = (uint)param_5;
    puVar30[4] = uVar26;
  }
  if (*(char *)(param_1 + 0x2a) != '\0') {
    SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
              (param_2,*param_3,param_1 + 0x24,*(undefined8 *)(param_4 + 0x2fc0));
  }
  if (*(short *)(param_1 + 0x30) != 0) {
    fVar1 = *(float *)(param_4 + 0x6e0);
    fVar2 = *(float *)(param_4 + 0x6f4);
    fVar3 = *(float *)(param_4 + 0x704);
    fVar4 = *(float *)(param_4 + 0x6f0);
    fVar5 = *(float *)(param_4 + 0x700);
    fVar6 = *(float *)(param_4 + 0x6e8);
    local_158 = ZEXT416(*(uint *)(param_4 + 0x6d0));
    fVar7 = *(float *)(param_4 + 0x6f8);
    local_148 = ZEXT416(*(uint *)(param_4 + 0x6d8));
    fVar8 = *(float *)(param_4 + 0x708);
    fVar9 = *(float *)(param_4 + 0x6ec);
    _local_168 = ZEXT416(*(uint *)(param_4 + 0x6d4));
    fVar10 = *(float *)(param_4 + 0x6e4);
    local_138 = ZEXT416(*(uint *)(param_4 + 0x6dc));
    pfVar27 = (float *)FUN_141dfa450(param_4 + 0x390,local_118);
    fVar15 = *pfVar27;
    fVar16 = pfVar27[1];
    fVar17 = pfVar27[2];
    fVar18 = pfVar27[3];
    uVar14 = *(undefined8 *)(pfVar27 + 0xc);
    uVar26 = *(undefined8 *)(pfVar27 + 0xe);
    fVar19 = pfVar27[4];
    fVar20 = pfVar27[5];
    fVar21 = pfVar27[6];
    fVar22 = pfVar27[7];
    fVar23 = pfVar27[8];
    fVar24 = pfVar27[9];
    fVar32 = pfVar27[10];
    fVar33 = pfVar27[0xb];
    local_168._4_4_ = fVar10;
    fStack_160 = fVar2;
    fStack_15c = fVar3;
    fVar11 = *(float *)(param_4 + 0x6fc);
    fVar12 = *(float *)(param_4 + 0x70c);
    in_stack_fffffffffffffe48 = in_stack_fffffffffffffe48 & 0xffffffff00000000;
    local_1a8 = fVar16 * (float)local_168._0_4_ + fVar15 * (float)local_158._0_4_ +
                fVar17 * (float)local_148._0_4_ + fVar18 * (float)local_138._0_4_;
    fStack_1a4 = fVar16 * fVar10 + fVar15 * fVar1 + fVar17 * fVar6 + fVar18 * fVar9;
    fStack_1a0 = fVar16 * fVar2 + fVar15 * fVar4 + fVar17 * fVar7 + fVar18 * fVar11;
    fStack_19c = fVar16 * fVar3 + fVar15 * fVar5 + fVar17 * fVar8 + fVar18 * fVar12;
    local_198 = fVar20 * (float)local_168._0_4_ + fVar19 * (float)local_158._0_4_ +
                fVar21 * (float)local_148._0_4_ + fVar22 * (float)local_138._0_4_;
    fStack_194 = fVar20 * fVar10 + fVar19 * fVar1 + fVar21 * fVar6 + fVar22 * fVar9;
    fStack_190 = fVar20 * fVar2 + fVar19 * fVar4 + fVar21 * fVar7 + fVar22 * fVar11;
    fStack_18c = fVar20 * fVar3 + fVar19 * fVar5 + fVar21 * fVar8 + fVar22 * fVar12;
    local_188 = fVar23 * (float)local_158._0_4_ + fVar24 * (float)local_168._0_4_ +
                fVar32 * (float)local_148._0_4_ + fVar33 * (float)local_138._0_4_;
    fStack_184 = fVar23 * fVar1 + fVar24 * fVar10 + fVar32 * fVar6 + fVar33 * fVar9;
    fStack_180 = fVar23 * fVar4 + fVar24 * fVar2 + fVar32 * fVar7 + fVar33 * fVar11;
    fStack_17c = fVar23 * fVar5 + fVar24 * fVar3 + fVar32 * fVar8 + fVar33 * fVar12;
    local_128._0_4_ = (float)uVar14;
    local_128._4_4_ = (float)((ulonglong)uVar14 >> 0x20);
    uStack_120._0_4_ = (float)uVar26;
    uStack_120._4_4_ = (float)((ulonglong)uVar26 >> 0x20);
    local_178 = local_128._4_4_ * (float)local_168._0_4_ + (float)local_128 * (float)local_158._0_4_
                + (float)uStack_120 * (float)local_148._0_4_ +
                uStack_120._4_4_ * (float)local_138._0_4_;
    fStack_174 = local_128._4_4_ * fVar10 + (float)local_128 * fVar1 + (float)uStack_120 * fVar6 +
                 uStack_120._4_4_ * fVar9;
    fStack_170 = local_128._4_4_ * fVar2 + (float)local_128 * fVar4 + (float)uStack_120 * fVar7 +
                 uStack_120._4_4_ * fVar11;
    fStack_16c = local_128._4_4_ * fVar3 + (float)local_128 * fVar5 + (float)uStack_120 * fVar8 +
                 uStack_120._4_4_ * fVar12;
    local_128 = uVar14;
    uStack_120 = uVar26;
    SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
              (param_2,*param_3,param_1 + 0x2c,&local_1a8,in_stack_fffffffffffffe48);
  }
  if (*(short *)(param_1 + 0x36) != 0) {
    fVar1 = *(float *)(param_4 + 0x2a60);
    fVar2 = *(float *)(param_4 + 0x2a64);
    fVar3 = *(float *)(param_4 + 0x2a68);
    fVar4 = *(float *)(param_4 + 0x2a6c);
    fVar5 = *(float *)(param_4 + 0x2908);
    fVar6 = *(float *)(param_4 + 0x290c);
    in_stack_fffffffffffffe48 = in_stack_fffffffffffffe48 & 0xffffffff00000000;
    fVar7 = *(float *)(param_4 + 0x28e0);
    fVar8 = *(float *)(param_4 + 0x28e4);
    fVar9 = *(float *)(param_4 + 0x28e8);
    fVar10 = *(float *)(param_4 + 0x28ec);
    fVar11 = *(float *)(param_4 + 0x28f0);
    fVar12 = *(float *)(param_4 + 0x28f4);
    fVar15 = *(float *)(param_4 + 0x28f8);
    fVar16 = *(float *)(param_4 + 0x28fc);
    fVar17 = *(float *)(param_4 + 0x2910);
    fVar18 = *(float *)(param_4 + 0x2914);
    fVar19 = *(float *)(param_4 + 0x2918);
    fVar20 = *(float *)(param_4 + 0x291c);
    fVar32 = *(float *)(param_4 + 0x2900) - *(float *)(param_4 + 0x2e40);
    fVar33 = *(float *)(param_4 + 0x2904) - *(float *)(param_4 + 0x2e44);
    fVar21 = *(float *)(param_4 + 0x2a70);
    fVar22 = *(float *)(param_4 + 0x2a74);
    fVar23 = *(float *)(param_4 + 0x2a78);
    fVar24 = *(float *)(param_4 + 0x2a7c);
    local_1a8 = fVar2 * fVar11 + fVar1 * fVar7 + fVar3 * fVar32 + fVar4 * fVar17;
    fStack_1a4 = fVar2 * fVar12 + fVar1 * fVar8 + fVar3 * fVar33 + fVar4 * fVar18;
    fStack_1a0 = fVar2 * fVar15 + fVar1 * fVar9 + fVar3 * fVar5 + fVar4 * fVar19;
    fStack_19c = fVar2 * fVar16 + fVar1 * fVar10 + fVar3 * fVar6 + fVar4 * fVar20;
    local_198 = fVar22 * fVar11 + fVar21 * fVar7 + fVar23 * fVar32 + fVar24 * fVar17;
    fStack_194 = fVar22 * fVar12 + fVar21 * fVar8 + fVar23 * fVar33 + fVar24 * fVar18;
    fStack_190 = fVar22 * fVar15 + fVar21 * fVar9 + fVar23 * fVar5 + fVar24 * fVar19;
    fStack_18c = fVar22 * fVar16 + fVar21 * fVar10 + fVar23 * fVar6 + fVar24 * fVar20;
    fVar1 = *(float *)(param_4 + 0x2a80);
    fVar2 = *(float *)(param_4 + 0x2a84);
    fVar3 = *(float *)(param_4 + 0x2a88);
    fVar4 = *(float *)(param_4 + 0x2a8c);
    local_188 = fVar2 * fVar11 + fVar1 * fVar7 + fVar3 * fVar32 + fVar4 * fVar17;
    fStack_184 = fVar2 * fVar12 + fVar1 * fVar8 + fVar3 * fVar33 + fVar4 * fVar18;
    fStack_180 = fVar2 * fVar15 + fVar1 * fVar9 + fVar3 * fVar5 + fVar4 * fVar19;
    fStack_17c = fVar2 * fVar16 + fVar1 * fVar10 + fVar3 * fVar6 + fVar4 * fVar20;
    fVar1 = *(float *)(param_4 + 0x2a90);
    fVar2 = *(float *)(param_4 + 0x2a94);
    fVar3 = *(float *)(param_4 + 0x2a98);
    fVar4 = *(float *)(param_4 + 0x2a9c);
    local_178 = fVar2 * fVar11 + fVar1 * fVar7 + fVar3 * fVar32 + fVar4 * fVar17;
    fStack_174 = fVar2 * fVar12 + fVar1 * fVar8 + fVar3 * fVar33 + fVar4 * fVar18;
    fStack_170 = fVar2 * fVar15 + fVar1 * fVar9 + fVar3 * fVar5 + fVar4 * fVar19;
    fStack_16c = fVar2 * fVar16 + fVar1 * fVar10 + fVar3 * fVar6 + fVar4 * fVar20;
    SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
              (param_2,*param_3,param_1 + 0x32,&local_1a8,in_stack_fffffffffffffe48);
  }
  if (*(short *)(param_1 + 0x3c) != 0) {
    _Src = *(char **)(pcVar25 + 0x110);
    if (*(char **)(pcVar25 + 0x110) == (char *)0x0) {
      _Src = pcVar25 + 0x10;
    }
    local_168 = (undefined1  [8])*param_3;
    uVar31 = (uint)*(ushort *)(param_1 + 0x3c);
    if (*(int *)(pcVar25 + 0x120) * 0x10 <= (int)(uint)*(ushort *)(param_1 + 0x3c)) {
      uVar31 = *(int *)(pcVar25 + 0x120) * 0x10;
    }
    if (0 < (int)uVar31) {
      uVar13 = *(ushort *)(param_1 + 0x3a);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      param_5._0_4_ = (uint)*(ushort *)(param_1 + 0x38);
      uVar28 = (longlong)(int)uVar31 + (longlong)_Dst;
      if (*(ulonglong *)(param_2 + 0x38) < uVar28) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar31 + 0x10);
        _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
        uVar28 = (longlong)(int)uVar31 + (longlong)_Dst;
      }
      *(ulonglong *)(param_2 + 0x30) = uVar28;
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(ulonglong)uVar31);
      puVar30 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar29 = puVar30 + 6;
      if (*(undefined8 **)(param_2 + 0x38) < puVar29) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
        puVar30 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar29 = puVar30 + 6;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar29;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar30;
      *(undefined8 **)(param_2 + 8) = puVar30 + 1;
      puVar30[1] = 0;
      *puVar30 = &PTR_LAB_143f4d340;
      puVar30[2] = local_168;
      *(uint *)(puVar30 + 4) = (uint)param_5;
      *(uint *)((longlong)puVar30 + 0x24) = (uint)uVar13;
      puVar30[3] = _Dst;
      *(uint *)(puVar30 + 5) = uVar31;
    }
  }
  param_5._0_4_ = DAT_1464c36e4;
  if (*pcVar25 == '\0') {
    param_5._0_4_ = 0;
  }
  in_stack_fffffffffffffe48 = in_stack_fffffffffffffe48 & 0xffffffff00000000;
  FUN_1404986d0(param_2,*param_3,param_1 + 0x3e,&param_5,in_stack_fffffffffffffe48);
  if (DAT_1464c36e8 < 1) {
    param_5._0_4_ = 1;
  }
  else {
    param_5._0_4_ = 0x10;
    if (DAT_1464c36e8 < 0x10) {
      param_5._0_4_ = DAT_1464c36e8;
    }
  }
  FUN_1404986d0(param_2,*param_3,param_1 + 0x44,&param_5,
                in_stack_fffffffffffffe48 & 0xffffffff00000000);
  return;
}



// FUNCTION 141df2590 FUN_141df2590 body=2231 status=ok
// SIG undefined FUN_141df2590(void)

void FUN_141df2590(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  char *param_5)

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
  ushort uVar13;
  ushort uVar14;
  undefined8 uVar15;
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
  char *pcVar26;
  undefined8 uVar27;
  float *pfVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  char *_Src;
  void *pvVar33;
  uint uVar34;
  float fVar35;
  float fVar36;
  ulonglong in_stack_fffffffffffffe48;
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
  undefined1 local_168 [8];
  float fStack_160;
  float fStack_15c;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118 [224];
  
  pcVar26 = param_5;
  if ((*(short *)(param_1 + 2) != 0) || (*(short *)(param_1 + 6) != 0)) {
    in_stack_fffffffffffffe48 = *(ulonglong *)(*(longlong *)(param_5 + 0x130) + 0x18);
    FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHICommandList>
              (param_1,param_2,*param_3,*(undefined8 *)(*(longlong *)(param_5 + 0x130) + 0x10),
               in_stack_fffffffffffffe48);
  }
  if ((*(short *)(param_1 + 10) != 0) || (*(short *)(param_1 + 0xe) != 0)) {
    in_stack_fffffffffffffe48 = *(ulonglong *)(*(longlong *)(pcVar26 + 0x138) + 0x18);
    FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHICommandList>
              (param_1 + 8,param_2,*param_3,*(undefined8 *)(*(longlong *)(pcVar26 + 0x138) + 0x10),
               in_stack_fffffffffffffe48);
  }
  if ((*(short *)(param_1 + 0x12) != 0) || (*(short *)(param_1 + 0x16) != 0)) {
    in_stack_fffffffffffffe48 = *(ulonglong *)(*(longlong *)(pcVar26 + 0x140) + 0x18);
    FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHICommandList>
              (param_1 + 0x10,param_2,*param_3,
               *(undefined8 *)(*(longlong *)(pcVar26 + 0x140) + 0x10),in_stack_fffffffffffffe48);
  }
  if ((*(short *)(param_1 + 0x1a) != 0) || (*(short *)(param_1 + 0x1e) != 0)) {
    in_stack_fffffffffffffe48 = *(ulonglong *)(*(longlong *)(param_4 + 0x2fc8) + 0x18);
    FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHICommandList>
              (param_1 + 0x18,param_2,*param_3,
               *(undefined8 *)(*(longlong *)(param_4 + 0x2fc8) + 0x10),in_stack_fffffffffffffe48);
  }
  uVar27 = FUN_141a156e0();
  uVar15 = *param_3;
  if (*(short *)(param_1 + 0x22) != 0) {
    param_5._0_4_ = (uint)*(ushort *)(param_1 + 0x20);
    puVar32 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar31 = puVar32 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar31) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar32 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar31 = puVar32 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar31;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar32;
    *(undefined8 **)(param_2 + 8) = puVar32 + 1;
    puVar32[1] = 0;
    *puVar32 = &PTR_LAB_144dcb3b8;
    puVar32[2] = uVar15;
    *(uint *)(puVar32 + 3) = (uint)param_5;
    puVar32[4] = uVar27;
  }
  if (*(char *)(param_1 + 0x2a) != '\0') {
    SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
              (param_2,*param_3,param_1 + 0x24,*(undefined8 *)(param_4 + 0x2fc0));
  }
  if (*(short *)(param_1 + 0x30) != 0) {
    fVar1 = *(float *)(param_4 + 0x6e0);
    fVar2 = *(float *)(param_4 + 0x6f4);
    fVar3 = *(float *)(param_4 + 0x704);
    fVar4 = *(float *)(param_4 + 0x6f0);
    fVar5 = *(float *)(param_4 + 0x700);
    fVar6 = *(float *)(param_4 + 0x6e8);
    local_158 = ZEXT416(*(uint *)(param_4 + 0x6d0));
    fVar7 = *(float *)(param_4 + 0x6f8);
    local_148 = ZEXT416(*(uint *)(param_4 + 0x6d8));
    fVar8 = *(float *)(param_4 + 0x708);
    fVar9 = *(float *)(param_4 + 0x6ec);
    _local_168 = ZEXT416(*(uint *)(param_4 + 0x6d4));
    fVar10 = *(float *)(param_4 + 0x6e4);
    local_138 = ZEXT416(*(uint *)(param_4 + 0x6dc));
    pfVar28 = (float *)FUN_141dfa450(param_4 + 0x390,local_118);
    fVar16 = *pfVar28;
    fVar17 = pfVar28[1];
    fVar18 = pfVar28[2];
    fVar19 = pfVar28[3];
    uVar15 = *(undefined8 *)(pfVar28 + 0xc);
    uVar27 = *(undefined8 *)(pfVar28 + 0xe);
    fVar20 = pfVar28[4];
    fVar21 = pfVar28[5];
    fVar22 = pfVar28[6];
    fVar23 = pfVar28[7];
    fVar24 = pfVar28[8];
    fVar25 = pfVar28[9];
    fVar35 = pfVar28[10];
    fVar36 = pfVar28[0xb];
    local_168._4_4_ = fVar10;
    fStack_160 = fVar2;
    fStack_15c = fVar3;
    fVar11 = *(float *)(param_4 + 0x6fc);
    fVar12 = *(float *)(param_4 + 0x70c);
    in_stack_fffffffffffffe48 = in_stack_fffffffffffffe48 & 0xffffffff00000000;
    local_1a8 = fVar17 * (float)local_168._0_4_ + fVar16 * (float)local_158._0_4_ +
                fVar18 * (float)local_148._0_4_ + fVar19 * (float)local_138._0_4_;
    fStack_1a4 = fVar17 * fVar10 + fVar16 * fVar1 + fVar18 * fVar6 + fVar19 * fVar9;
    fStack_1a0 = fVar17 * fVar2 + fVar16 * fVar4 + fVar18 * fVar7 + fVar19 * fVar11;
    fStack_19c = fVar17 * fVar3 + fVar16 * fVar5 + fVar18 * fVar8 + fVar19 * fVar12;
    local_198 = fVar21 * (float)local_168._0_4_ + fVar20 * (float)local_158._0_4_ +
                fVar22 * (float)local_148._0_4_ + fVar23 * (float)local_138._0_4_;
    fStack_194 = fVar21 * fVar10 + fVar20 * fVar1 + fVar22 * fVar6 + fVar23 * fVar9;
    fStack_190 = fVar21 * fVar2 + fVar20 * fVar4 + fVar22 * fVar7 + fVar23 * fVar11;
    fStack_18c = fVar21 * fVar3 + fVar20 * fVar5 + fVar22 * fVar8 + fVar23 * fVar12;
    local_188 = fVar25 * (float)local_168._0_4_ + fVar24 * (float)local_158._0_4_ +
                fVar35 * (float)local_148._0_4_ + fVar36 * (float)local_138._0_4_;
    fStack_184 = fVar25 * fVar10 + fVar24 * fVar1 + fVar35 * fVar6 + fVar36 * fVar9;
    fStack_180 = fVar25 * fVar2 + fVar24 * fVar4 + fVar35 * fVar7 + fVar36 * fVar11;
    fStack_17c = fVar25 * fVar3 + fVar24 * fVar5 + fVar35 * fVar8 + fVar36 * fVar12;
    local_128._0_4_ = (float)uVar15;
    local_128._4_4_ = (float)((ulonglong)uVar15 >> 0x20);
    uStack_120._0_4_ = (float)uVar27;
    uStack_120._4_4_ = (float)((ulonglong)uVar27 >> 0x20);
    local_178 = (float)local_128 * (float)local_158._0_4_ + local_128._4_4_ * (float)local_168._0_4_
                + (float)uStack_120 * (float)local_148._0_4_ +
                uStack_120._4_4_ * (float)local_138._0_4_;
    fStack_174 = (float)local_128 * fVar1 + local_128._4_4_ * fVar10 + (float)uStack_120 * fVar6 +
                 uStack_120._4_4_ * fVar9;
    fStack_170 = (float)local_128 * fVar4 + local_128._4_4_ * fVar2 + (float)uStack_120 * fVar7 +
                 uStack_120._4_4_ * fVar11;
    fStack_16c = (float)local_128 * fVar5 + local_128._4_4_ * fVar3 + (float)uStack_120 * fVar8 +
                 uStack_120._4_4_ * fVar12;
    local_128 = uVar15;
    uStack_120 = uVar27;
    SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
              (param_2,*param_3,param_1 + 0x2c,&local_1a8,in_stack_fffffffffffffe48);
  }
  if (*(short *)(param_1 + 0x36) != 0) {
    fVar1 = *(float *)(param_4 + 0x2a60);
    fVar2 = *(float *)(param_4 + 0x2a64);
    fVar3 = *(float *)(param_4 + 0x2a68);
    fVar4 = *(float *)(param_4 + 0x2a6c);
    fVar5 = *(float *)(param_4 + 0x2908);
    fVar6 = *(float *)(param_4 + 0x290c);
    in_stack_fffffffffffffe48 = in_stack_fffffffffffffe48 & 0xffffffff00000000;
    fVar7 = *(float *)(param_4 + 0x28e0);
    fVar8 = *(float *)(param_4 + 0x28e4);
    fVar9 = *(float *)(param_4 + 0x28e8);
    fVar10 = *(float *)(param_4 + 0x28ec);
    fVar11 = *(float *)(param_4 + 0x28f0);
    fVar12 = *(float *)(param_4 + 0x28f4);
    fVar16 = *(float *)(param_4 + 0x28f8);
    fVar17 = *(float *)(param_4 + 0x28fc);
    fVar18 = *(float *)(param_4 + 0x2910);
    fVar19 = *(float *)(param_4 + 0x2914);
    fVar20 = *(float *)(param_4 + 0x2918);
    fVar21 = *(float *)(param_4 + 0x291c);
    fVar35 = *(float *)(param_4 + 0x2900) - *(float *)(param_4 + 0x2e40);
    fVar36 = *(float *)(param_4 + 0x2904) - *(float *)(param_4 + 0x2e44);
    fVar22 = *(float *)(param_4 + 0x2a70);
    fVar23 = *(float *)(param_4 + 0x2a74);
    fVar24 = *(float *)(param_4 + 0x2a78);
    fVar25 = *(float *)(param_4 + 0x2a7c);
    local_1a8 = fVar2 * fVar11 + fVar1 * fVar7 + fVar3 * fVar35 + fVar4 * fVar18;
    fStack_1a4 = fVar2 * fVar12 + fVar1 * fVar8 + fVar3 * fVar36 + fVar4 * fVar19;
    fStack_1a0 = fVar2 * fVar16 + fVar1 * fVar9 + fVar3 * fVar5 + fVar4 * fVar20;
    fStack_19c = fVar2 * fVar17 + fVar1 * fVar10 + fVar3 * fVar6 + fVar4 * fVar21;
    local_198 = fVar23 * fVar11 + fVar22 * fVar7 + fVar24 * fVar35 + fVar25 * fVar18;
    fStack_194 = fVar23 * fVar12 + fVar22 * fVar8 + fVar24 * fVar36 + fVar25 * fVar19;
    fStack_190 = fVar23 * fVar16 + fVar22 * fVar9 + fVar24 * fVar5 + fVar25 * fVar20;
    fStack_18c = fVar23 * fVar17 + fVar22 * fVar10 + fVar24 * fVar6 + fVar25 * fVar21;
    fVar1 = *(float *)(param_4 + 0x2a80);
    fVar2 = *(float *)(param_4 + 0x2a84);
    fVar3 = *(float *)(param_4 + 0x2a88);
    fVar4 = *(float *)(param_4 + 0x2a8c);
    local_188 = fVar2 * fVar11 + fVar1 * fVar7 + fVar3 * fVar35 + fVar4 * fVar18;
    fStack_184 = fVar2 * fVar12 + fVar1 * fVar8 + fVar3 * fVar36 + fVar4 * fVar19;
    fStack_180 = fVar2 * fVar16 + fVar1 * fVar9 + fVar3 * fVar5 + fVar4 * fVar20;
    fStack_17c = fVar2 * fVar17 + fVar1 * fVar10 + fVar3 * fVar6 + fVar4 * fVar21;
    fVar1 = *(float *)(param_4 + 0x2a90);
    fVar2 = *(float *)(param_4 + 0x2a94);
    fVar3 = *(float *)(param_4 + 0x2a98);
    fVar4 = *(float *)(param_4 + 0x2a9c);
    local_178 = fVar2 * fVar11 + fVar1 * fVar7 + fVar3 * fVar35 + fVar4 * fVar18;
    fStack_174 = fVar2 * fVar12 + fVar1 * fVar8 + fVar3 * fVar36 + fVar4 * fVar19;
    fStack_170 = fVar2 * fVar16 + fVar1 * fVar9 + fVar3 * fVar5 + fVar4 * fVar20;
    fStack_16c = fVar2 * fVar17 + fVar1 * fVar10 + fVar3 * fVar6 + fVar4 * fVar21;
    SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
              (param_2,*param_3,param_1 + 0x32,&local_1a8,in_stack_fffffffffffffe48);
  }
  if (*(short *)(param_1 + 0x3c) != 0) {
    _Src = *(char **)(pcVar26 + 0x110);
    if (*(char **)(pcVar26 + 0x110) == (char *)0x0) {
      _Src = pcVar26 + 0x10;
    }
    local_168 = (undefined1  [8])*param_3;
    uVar34 = (uint)*(ushort *)(param_1 + 0x3c);
    if (*(int *)(pcVar26 + 0x120) * 0x10 <= (int)(uint)*(ushort *)(param_1 + 0x3c)) {
      uVar34 = *(int *)(pcVar26 + 0x120) * 0x10;
    }
    if (0 < (int)uVar34) {
      uVar13 = *(ushort *)(param_1 + 0x3a);
      pvVar33 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      param_5._0_4_ = (uint)*(ushort *)(param_1 + 0x38);
      uVar29 = (longlong)(int)uVar34 + (longlong)pvVar33;
      if (*(ulonglong *)(param_2 + 0x38) < uVar29) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar34 + 0x10);
        pvVar33 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
        uVar29 = (longlong)(int)uVar34 + (longlong)pvVar33;
      }
      *(ulonglong *)(param_2 + 0x30) = uVar29;
      _guard_xfg_dispatch_icall_nop(pvVar33,_Src,(ulonglong)uVar34);
      puVar32 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar31 = puVar32 + 6;
      if (*(undefined8 **)(param_2 + 0x38) < puVar31) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
        puVar32 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar31 = puVar32 + 6;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar31;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar32;
      *(undefined8 **)(param_2 + 8) = puVar32 + 1;
      puVar32[1] = 0;
      *puVar32 = &PTR_LAB_144d92080;
      puVar32[2] = local_168;
      *(uint *)(puVar32 + 4) = (uint)param_5;
      *(uint *)((longlong)puVar32 + 0x24) = (uint)uVar13;
      puVar32[3] = pvVar33;
      *(uint *)(puVar32 + 5) = uVar34;
    }
  }
  param_5._0_4_ = DAT_1464c36e4;
  if (*pcVar26 == '\0') {
    param_5._0_4_ = 0;
  }
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,*param_3,param_1 + 0x3e,&param_5,in_stack_fffffffffffffe48 & 0xffffffff00000000
            );
  if (DAT_1464c36e8 < 1) {
    param_5._0_4_ = 1;
  }
  else {
    param_5._0_4_ = 0x10;
    if (DAT_1464c36e8 < 0x10) {
      param_5._0_4_ = DAT_1464c36e8;
    }
  }
  uVar15 = *param_3;
  uVar34 = (uint)*(ushort *)(param_1 + 0x48);
  if (3 < *(ushort *)(param_1 + 0x48)) {
    uVar34 = 4;
  }
  uVar29 = (ulonglong)uVar34;
  if (uVar34 != 0) {
    uVar13 = *(ushort *)(param_1 + 0x44);
    uVar14 = *(ushort *)(param_1 + 0x46);
    pvVar33 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar30 = (longlong)pvVar33 + uVar29;
    if (*(ulonglong *)(param_2 + 0x38) < uVar30) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar34 + 0x10);
      pvVar33 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar30 = uVar29 + (longlong)pvVar33;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar30;
    _guard_xfg_dispatch_icall_nop(pvVar33,&param_5,uVar29);
    puVar32 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar31 = puVar32 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar31) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar32 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar31 = puVar32 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar31;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar32;
    *(undefined8 **)(param_2 + 8) = puVar32 + 1;
    puVar32[1] = 0;
    *puVar32 = &PTR_LAB_144d92080;
    *(uint *)(puVar32 + 4) = (uint)uVar13;
    puVar32[2] = uVar15;
    puVar32[3] = pvVar33;
    *(uint *)((longlong)puVar32 + 0x24) = (uint)uVar14;
    *(uint *)(puVar32 + 5) = uVar34;
  }
  return;
}



// FUNCTION 141df2e50 FUN_141df2e50 body=1268 status=ok
// SIG undefined FUN_141df2e50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141df2e50(undefined8 param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                  ulonglong param_5,longlong param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_198 [32];
  ulonglong local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined1 local_160;
  ulonglong local_158;
  undefined *local_150;
  undefined4 local_148;
  undefined8 local_140;
  ulonglong local_138;
  longlong local_130;
  undefined8 local_128;
  ulonglong local_120;
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
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  plVar14 = (longlong *)0x0;
  local_120 = param_5;
  local_158 = local_158 & 0xffffffff00000000;
  lVar1 = *(longlong *)(param_2 + 0x3090);
  local_130 = param_6;
  local_128 = param_7;
  local_150 = &DAT_146aaa600;
  local_148 = 0;
  local_140 = param_4;
  local_138 = param_3;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_158,&local_150);
  plVar9 = plVar14;
  if ((int)local_158 != -1) {
    plVar9 = (longlong *)((longlong)(int)local_158 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_148 = 0;
  plVar13 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar13 = plVar14;
  }
  local_150 = &DAT_146b19770;
  lVar2 = *plVar13;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_158,&local_150);
  plVar9 = plVar14;
  if ((int)local_158 != -1) {
    plVar9 = (longlong *)((longlong)(int)local_158 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar13 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar13 = plVar14;
  }
  plVar9 = plVar14;
  if (plVar13 != (longlong *)0x0) {
    plVar9 = (longlong *)*plVar13;
  }
  local_148 = 0;
  local_150 = &DAT_146aaafb0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_158,&local_150);
  plVar13 = plVar14;
  if ((int)local_158 != -1) {
    plVar13 = (longlong *)((longlong)(int)local_158 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar11 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar11 = plVar14;
  }
  lVar1 = *plVar11;
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
  uStack_e0 = FUN_140985530();
  local_d8 = FUN_1409853f0();
  local_e8 = FUN_141abe130();
  local_118 = DAT_146534c78;
  if (lVar2 == 0) {
    local_158 = 0;
    plVar13 = (longlong *)0x1;
    plStack_110 = plVar14;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_110 = *(longlong **)(lVar3 + 0x38);
    plVar13 = plVar14;
  }
  uVar6 = 0;
  if (plVar13 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
  }
  bVar5 = false;
  if (plVar9 == (longlong *)0x0) {
    bVar5 = true;
    local_158 = 0;
  }
  else {
    lVar3 = plVar9[9];
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    uVar6 = *(undefined8 *)(lVar3 + 0x58);
  }
  uStack_f0 = uVar6;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
  }
  bVar5 = false;
  if (lVar1 == 0) {
    bVar5 = true;
    local_158 = 0;
    local_f8 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    local_f8 = *(undefined8 *)(lVar3 + 0x40);
  }
  uVar7 = 0;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
  }
  local_cc = local_cc & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_118,2,1);
  lVar3 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(ulonglong *)(lVar3 + 0x40);
  local_158 = uVar4;
  FUN_141aa9590(lVar1,param_1,uVar4,*(undefined8 *)(param_2 + 0x20));
  if (0 < *(int *)(lVar1 + 0x10)) {
    uVar10 = uVar7;
    do {
      iVar8 = (int)uVar10;
      if (*(undefined **)(*(longlong *)(lVar1 + 8) + uVar7 * 8) == &DAT_146a286e0) {
        if (iVar8 != -1) {
          puVar12 = *(undefined8 **)(*(longlong *)(lVar1 + 0x18) + (longlong)iVar8 * 8);
          *(undefined4 *)puVar12 = *(undefined4 *)(lVar1 + 0xb8);
          goto LAB_141df31b2;
        }
        break;
      }
      uVar10 = (ulonglong)(iVar8 + 1);
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)*(int *)(lVar1 + 0x10));
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a253f8) && (_Init_thread_header(&DAT_146a253f8), DAT_146a253f8 == -1))
  {
    DAT_146a253f0._0_4_ = 0;
    DAT_146a253f0._4_2_ = 0;
    DAT_146a253f0._6_1_ = 0;
    _Init_thread_footer(&DAT_146a253f8);
  }
  puVar12 = &DAT_146a253f0;
LAB_141df31b2:
  local_178 = param_2;
  FUN_141b51280(param_1,uVar4,puVar12,local_140);
  uVar7 = local_138;
  local_178 = local_138;
  FUN_141df1670(lVar1 + 0xcc,param_1,&local_158,param_2);
  local_178 = local_178 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_1,uVar4,lVar1 + 0xc0,local_130 + 0x68);
  local_178 = local_178 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_1,uVar4,lVar1 + 0xc6,&DAT_1464c36ec);
  local_160 = 1;
  local_168 = 0;
  local_170 = local_128;
  local_178 = local_140;
  FUN_141dba790(lVar1 + 0x118,param_1,uVar4,param_2);
  local_170 = CONCAT44(local_170._4_4_,param_9);
  local_178 = local_120;
  FUN_141e09bc0(lVar2,param_1,param_2,uVar7);
  if (plVar9 != (longlong *)0x0) {
    local_158 = CONCAT44(local_158._4_4_,param_9);
    lVar1 = plVar9[9];
    if (*(char *)(lVar1 + 0x28) == '\0') {
      FUN_1419f3850(lVar1);
    }
    local_178 = local_178 & 0xffffffff00000000;
    FUN_141cd46a0(param_1,*(undefined8 *)(lVar1 + 0x58),plVar9 + 0x18,&local_158);
  }
  return;
}



// FUNCTION 141df3350 FUN_141df3350 body=1268 status=ok
// SIG undefined FUN_141df3350(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141df3350(undefined8 param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                  ulonglong param_5,longlong param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_198 [32];
  ulonglong local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined1 local_160;
  ulonglong local_158;
  undefined *local_150;
  undefined4 local_148;
  undefined8 local_140;
  ulonglong local_138;
  longlong local_130;
  undefined8 local_128;
  ulonglong local_120;
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
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  plVar14 = (longlong *)0x0;
  local_120 = param_5;
  local_158 = local_158 & 0xffffffff00000000;
  lVar1 = *(longlong *)(param_2 + 0x3090);
  local_130 = param_6;
  local_128 = param_7;
  local_150 = &DAT_146aaa600;
  local_148 = 0;
  local_140 = param_4;
  local_138 = param_3;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_158,&local_150);
  plVar9 = plVar14;
  if ((int)local_158 != -1) {
    plVar9 = (longlong *)((longlong)(int)local_158 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_148 = 0;
  plVar13 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar13 = plVar14;
  }
  local_150 = &DAT_146b19770;
  lVar2 = *plVar13;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_158,&local_150);
  plVar9 = plVar14;
  if ((int)local_158 != -1) {
    plVar9 = (longlong *)((longlong)(int)local_158 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar13 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar13 = plVar14;
  }
  plVar9 = plVar14;
  if (plVar13 != (longlong *)0x0) {
    plVar9 = (longlong *)*plVar13;
  }
  local_148 = 0;
  local_150 = &DAT_146aab4f0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_158,&local_150);
  plVar13 = plVar14;
  if ((int)local_158 != -1) {
    plVar13 = (longlong *)((longlong)(int)local_158 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar11 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar11 = plVar14;
  }
  lVar1 = *plVar11;
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
  uStack_e0 = FUN_140985530();
  local_d8 = FUN_1409853f0();
  local_e8 = FUN_141abe130();
  local_118 = DAT_146534c78;
  if (lVar2 == 0) {
    local_158 = 0;
    plVar13 = (longlong *)0x1;
    plStack_110 = plVar14;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_110 = *(longlong **)(lVar3 + 0x38);
    plVar13 = plVar14;
  }
  uVar6 = 0;
  if (plVar13 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
  }
  bVar5 = false;
  if (plVar9 == (longlong *)0x0) {
    bVar5 = true;
    local_158 = 0;
  }
  else {
    lVar3 = plVar9[9];
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    uVar6 = *(undefined8 *)(lVar3 + 0x58);
  }
  uStack_f0 = uVar6;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
  }
  bVar5 = false;
  if (lVar1 == 0) {
    bVar5 = true;
    local_158 = 0;
    local_f8 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    local_f8 = *(undefined8 *)(lVar3 + 0x40);
  }
  uVar7 = 0;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
  }
  local_cc = local_cc & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_118,2,1);
  lVar3 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(ulonglong *)(lVar3 + 0x40);
  local_158 = uVar4;
  FUN_141aa9590(lVar1,param_1,uVar4,*(undefined8 *)(param_2 + 0x20));
  if (0 < *(int *)(lVar1 + 0x10)) {
    uVar10 = uVar7;
    do {
      iVar8 = (int)uVar10;
      if (*(undefined **)(*(longlong *)(lVar1 + 8) + uVar7 * 8) == &DAT_146a286e0) {
        if (iVar8 != -1) {
          puVar12 = *(undefined8 **)(*(longlong *)(lVar1 + 0x18) + (longlong)iVar8 * 8);
          *(undefined4 *)puVar12 = *(undefined4 *)(lVar1 + 0xb8);
          goto LAB_141df36b2;
        }
        break;
      }
      uVar10 = (ulonglong)(iVar8 + 1);
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)*(int *)(lVar1 + 0x10));
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a253f8) && (_Init_thread_header(&DAT_146a253f8), DAT_146a253f8 == -1))
  {
    DAT_146a253f0._0_4_ = 0;
    DAT_146a253f0._4_2_ = 0;
    DAT_146a253f0._6_1_ = 0;
    _Init_thread_footer(&DAT_146a253f8);
  }
  puVar12 = &DAT_146a253f0;
LAB_141df36b2:
  local_178 = param_2;
  FUN_141b51280(param_1,uVar4,puVar12,local_140);
  uVar7 = local_138;
  local_178 = local_138;
  FUN_141df1670(lVar1 + 0xcc,param_1,&local_158,param_2);
  local_178 = local_178 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_1,uVar4,lVar1 + 0xc0,local_130 + 0x68);
  local_178 = local_178 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_1,uVar4,lVar1 + 0xc6,&DAT_1464c36ec);
  local_160 = 1;
  local_168 = 0;
  local_170 = local_128;
  local_178 = local_140;
  FUN_141dba790(lVar1 + 0x118,param_1,uVar4,param_2);
  local_170 = CONCAT44(local_170._4_4_,param_9);
  local_178 = local_120;
  FUN_141e09bc0(lVar2,param_1,param_2,uVar7);
  if (plVar9 != (longlong *)0x0) {
    local_158 = CONCAT44(local_158._4_4_,param_9);
    lVar1 = plVar9[9];
    if (*(char *)(lVar1 + 0x28) == '\0') {
      FUN_1419f3850(lVar1);
    }
    local_178 = local_178 & 0xffffffff00000000;
    FUN_141cd46a0(param_1,*(undefined8 *)(lVar1 + 0x58),plVar9 + 0x18,&local_158);
  }
  return;
}



// FUNCTION 141df3850 FUN_141df3850 body=1268 status=ok
// SIG undefined FUN_141df3850(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141df3850(undefined8 param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                  ulonglong param_5,longlong param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_198 [32];
  ulonglong local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined1 local_160;
  ulonglong local_158;
  undefined *local_150;
  undefined4 local_148;
  undefined8 local_140;
  ulonglong local_138;
  longlong local_130;
  undefined8 local_128;
  ulonglong local_120;
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
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  plVar14 = (longlong *)0x0;
  local_120 = param_5;
  local_158 = local_158 & 0xffffffff00000000;
  lVar1 = *(longlong *)(param_2 + 0x3090);
  local_130 = param_6;
  local_128 = param_7;
  local_150 = &DAT_146aaa600;
  local_148 = 0;
  local_140 = param_4;
  local_138 = param_3;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_158,&local_150);
  plVar9 = plVar14;
  if ((int)local_158 != -1) {
    plVar9 = (longlong *)((longlong)(int)local_158 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_148 = 0;
  plVar13 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar13 = plVar14;
  }
  local_150 = &DAT_146b19770;
  lVar2 = *plVar13;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_158,&local_150);
  plVar9 = plVar14;
  if ((int)local_158 != -1) {
    plVar9 = (longlong *)((longlong)(int)local_158 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar13 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar13 = plVar14;
  }
  plVar9 = plVar14;
  if (plVar13 != (longlong *)0x0) {
    plVar9 = (longlong *)*plVar13;
  }
  local_148 = 0;
  local_150 = &DAT_146aab100;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_158,&local_150);
  plVar13 = plVar14;
  if ((int)local_158 != -1) {
    plVar13 = (longlong *)((longlong)(int)local_158 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar11 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar11 = plVar14;
  }
  lVar1 = *plVar11;
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
  uStack_e0 = FUN_140985530();
  local_d8 = FUN_1409853f0();
  local_e8 = FUN_141abe130();
  local_118 = DAT_146534c78;
  if (lVar2 == 0) {
    local_158 = 0;
    plVar13 = (longlong *)0x1;
    plStack_110 = plVar14;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_110 = *(longlong **)(lVar3 + 0x38);
    plVar13 = plVar14;
  }
  uVar6 = 0;
  if (plVar13 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
  }
  bVar5 = false;
  if (plVar9 == (longlong *)0x0) {
    bVar5 = true;
    local_158 = 0;
  }
  else {
    lVar3 = plVar9[9];
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    uVar6 = *(undefined8 *)(lVar3 + 0x58);
  }
  uStack_f0 = uVar6;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
  }
  bVar5 = false;
  if (lVar1 == 0) {
    bVar5 = true;
    local_158 = 0;
    local_f8 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    local_f8 = *(undefined8 *)(lVar3 + 0x40);
  }
  uVar7 = 0;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
  }
  local_cc = local_cc & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_118,2,1);
  lVar3 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(ulonglong *)(lVar3 + 0x40);
  local_158 = uVar4;
  FUN_141aa9590(lVar1,param_1,uVar4,*(undefined8 *)(param_2 + 0x20));
  if (0 < *(int *)(lVar1 + 0x10)) {
    uVar10 = uVar7;
    do {
      iVar8 = (int)uVar10;
      if (*(undefined **)(*(longlong *)(lVar1 + 8) + uVar7 * 8) == &DAT_146a286e0) {
        if (iVar8 != -1) {
          puVar12 = *(undefined8 **)(*(longlong *)(lVar1 + 0x18) + (longlong)iVar8 * 8);
          *(undefined4 *)puVar12 = *(undefined4 *)(lVar1 + 0xb8);
          goto LAB_141df3bb2;
        }
        break;
      }
      uVar10 = (ulonglong)(iVar8 + 1);
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)*(int *)(lVar1 + 0x10));
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a253f8) && (_Init_thread_header(&DAT_146a253f8), DAT_146a253f8 == -1))
  {
    DAT_146a253f0._0_4_ = 0;
    DAT_146a253f0._4_2_ = 0;
    DAT_146a253f0._6_1_ = 0;
    _Init_thread_footer(&DAT_146a253f8);
  }
  puVar12 = &DAT_146a253f0;
LAB_141df3bb2:
  local_178 = param_2;
  FUN_141b51280(param_1,uVar4,puVar12,local_140);
  uVar7 = local_138;
  local_178 = local_138;
  FUN_141df1670(lVar1 + 0xcc,param_1,&local_158,param_2);
  local_178 = local_178 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_1,uVar4,lVar1 + 0xc0,local_130 + 0x68);
  local_178 = local_178 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_1,uVar4,lVar1 + 0xc6,&DAT_1464c36ec);
  local_160 = 1;
  local_168 = 0;
  local_170 = local_128;
  local_178 = local_140;
  FUN_141dba790(lVar1 + 0x118,param_1,uVar4,param_2);
  local_170 = CONCAT44(local_170._4_4_,param_9);
  local_178 = local_120;
  FUN_141e09bc0(lVar2,param_1,param_2,uVar7);
  if (plVar9 != (longlong *)0x0) {
    local_158 = CONCAT44(local_158._4_4_,param_9);
    lVar1 = plVar9[9];
    if (*(char *)(lVar1 + 0x28) == '\0') {
      FUN_1419f3850(lVar1);
    }
    local_178 = local_178 & 0xffffffff00000000;
    FUN_141cd46a0(param_1,*(undefined8 *)(lVar1 + 0x58),plVar9 + 0x18,&local_158);
  }
  return;
}



// FUNCTION 141df3d50 FUN_141df3d50 body=1268 status=ok
// SIG undefined FUN_141df3d50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141df3d50(undefined8 param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                  ulonglong param_5,longlong param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_198 [32];
  ulonglong local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined1 local_160;
  ulonglong local_158;
  undefined *local_150;
  undefined4 local_148;
  undefined8 local_140;
  ulonglong local_138;
  longlong local_130;
  undefined8 local_128;
  ulonglong local_120;
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
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  plVar14 = (longlong *)0x0;
  local_120 = param_5;
  local_158 = local_158 & 0xffffffff00000000;
  lVar1 = *(longlong *)(param_2 + 0x3090);
  local_130 = param_6;
  local_128 = param_7;
  local_150 = &DAT_146aaa600;
  local_148 = 0;
  local_140 = param_4;
  local_138 = param_3;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_158,&local_150);
  plVar9 = plVar14;
  if ((int)local_158 != -1) {
    plVar9 = (longlong *)((longlong)(int)local_158 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_148 = 0;
  plVar13 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar13 = plVar14;
  }
  local_150 = &DAT_146b19770;
  lVar2 = *plVar13;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_158,&local_150);
  plVar9 = plVar14;
  if ((int)local_158 != -1) {
    plVar9 = (longlong *)((longlong)(int)local_158 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar13 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar13 = plVar14;
  }
  plVar9 = plVar14;
  if (plVar13 != (longlong *)0x0) {
    plVar9 = (longlong *)*plVar13;
  }
  local_148 = 0;
  local_150 = &DAT_146aab640;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_158,&local_150);
  plVar13 = plVar14;
  if ((int)local_158 != -1) {
    plVar13 = (longlong *)((longlong)(int)local_158 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar11 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar11 = plVar14;
  }
  lVar1 = *plVar11;
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
  uStack_e0 = FUN_140985530();
  local_d8 = FUN_1409853f0();
  local_e8 = FUN_141abe130();
  local_118 = DAT_146534c78;
  if (lVar2 == 0) {
    local_158 = 0;
    plVar13 = (longlong *)0x1;
    plStack_110 = plVar14;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_110 = *(longlong **)(lVar3 + 0x38);
    plVar13 = plVar14;
  }
  uVar6 = 0;
  if (plVar13 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
  }
  bVar5 = false;
  if (plVar9 == (longlong *)0x0) {
    bVar5 = true;
    local_158 = 0;
  }
  else {
    lVar3 = plVar9[9];
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    uVar6 = *(undefined8 *)(lVar3 + 0x58);
  }
  uStack_f0 = uVar6;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
  }
  bVar5 = false;
  if (lVar1 == 0) {
    bVar5 = true;
    local_158 = 0;
    local_f8 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    local_f8 = *(undefined8 *)(lVar3 + 0x40);
  }
  uVar7 = 0;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
  }
  local_cc = local_cc & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_118,2,1);
  lVar3 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(ulonglong *)(lVar3 + 0x40);
  local_158 = uVar4;
  FUN_141aa9590(lVar1,param_1,uVar4,*(undefined8 *)(param_2 + 0x20));
  if (0 < *(int *)(lVar1 + 0x10)) {
    uVar10 = uVar7;
    do {
      iVar8 = (int)uVar10;
      if (*(undefined **)(*(longlong *)(lVar1 + 8) + uVar7 * 8) == &DAT_146a286e0) {
        if (iVar8 != -1) {
          puVar12 = *(undefined8 **)(*(longlong *)(lVar1 + 0x18) + (longlong)iVar8 * 8);
          *(undefined4 *)puVar12 = *(undefined4 *)(lVar1 + 0xb8);
          goto LAB_141df40b2;
        }
        break;
      }
      uVar10 = (ulonglong)(iVar8 + 1);
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)*(int *)(lVar1 + 0x10));
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a253f8) && (_Init_thread_header(&DAT_146a253f8), DAT_146a253f8 == -1))
  {
    DAT_146a253f0._0_4_ = 0;
    DAT_146a253f0._4_2_ = 0;
    DAT_146a253f0._6_1_ = 0;
    _Init_thread_footer(&DAT_146a253f8);
  }
  puVar12 = &DAT_146a253f0;
LAB_141df40b2:
  local_178 = param_2;
  FUN_141b51280(param_1,uVar4,puVar12,local_140);
  uVar7 = local_138;
  local_178 = local_138;
  FUN_141df1670(lVar1 + 0xcc,param_1,&local_158,param_2);
  local_178 = local_178 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_1,uVar4,lVar1 + 0xc0,local_130 + 0x68);
  local_178 = local_178 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_1,uVar4,lVar1 + 0xc6,&DAT_1464c36ec);
  local_160 = 1;
  local_168 = 0;
  local_170 = local_128;
  local_178 = local_140;
  FUN_141dba790(lVar1 + 0x118,param_1,uVar4,param_2);
  local_170 = CONCAT44(local_170._4_4_,param_9);
  local_178 = local_120;
  FUN_141e09bc0(lVar2,param_1,param_2,uVar7);
  if (plVar9 != (longlong *)0x0) {
    local_158 = CONCAT44(local_158._4_4_,param_9);
    lVar1 = plVar9[9];
    if (*(char *)(lVar1 + 0x28) == '\0') {
      FUN_1419f3850(lVar1);
    }
    local_178 = local_178 & 0xffffffff00000000;
    FUN_141cd46a0(param_1,*(undefined8 *)(lVar1 + 0x58),plVar9 + 0x18,&local_158);
  }
  return;
}



// FUNCTION 141df4250 FUN_141df4250 body=1268 status=ok
// SIG undefined FUN_141df4250(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141df4250(undefined8 param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                  ulonglong param_5,longlong param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_198 [32];
  ulonglong local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined1 local_160;
  ulonglong local_158;
  undefined *local_150;
  undefined4 local_148;
  undefined8 local_140;
  ulonglong local_138;
  longlong local_130;
  undefined8 local_128;
  ulonglong local_120;
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
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  plVar14 = (longlong *)0x0;
  local_120 = param_5;
  local_158 = local_158 & 0xffffffff00000000;
  lVar1 = *(longlong *)(param_2 + 0x3090);
  local_130 = param_6;
  local_128 = param_7;
  local_150 = &DAT_146aaa600;
  local_148 = 0;
  local_140 = param_4;
  local_138 = param_3;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_158,&local_150);
  plVar9 = plVar14;
  if ((int)local_158 != -1) {
    plVar9 = (longlong *)((longlong)(int)local_158 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_148 = 0;
  plVar13 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar13 = plVar14;
  }
  local_150 = &DAT_146b19770;
  lVar2 = *plVar13;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_158,&local_150);
  plVar9 = plVar14;
  if ((int)local_158 != -1) {
    plVar9 = (longlong *)((longlong)(int)local_158 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar13 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar13 = plVar14;
  }
  plVar9 = plVar14;
  if (plVar13 != (longlong *)0x0) {
    plVar9 = (longlong *)*plVar13;
  }
  local_148 = 0;
  local_150 = &DAT_146aab250;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_158,&local_150);
  plVar13 = plVar14;
  if ((int)local_158 != -1) {
    plVar13 = (longlong *)((longlong)(int)local_158 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar11 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar11 = plVar14;
  }
  lVar1 = *plVar11;
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
  uStack_e0 = FUN_140985530();
  local_d8 = FUN_1409853f0();
  local_e8 = FUN_141abe130();
  local_118 = DAT_146534c78;
  if (lVar2 == 0) {
    local_158 = 0;
    plVar13 = (longlong *)0x1;
    plStack_110 = plVar14;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_110 = *(longlong **)(lVar3 + 0x38);
    plVar13 = plVar14;
  }
  uVar6 = 0;
  if (plVar13 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
  }
  bVar5 = false;
  if (plVar9 == (longlong *)0x0) {
    bVar5 = true;
    local_158 = 0;
  }
  else {
    lVar3 = plVar9[9];
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    uVar6 = *(undefined8 *)(lVar3 + 0x58);
  }
  uStack_f0 = uVar6;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
  }
  bVar5 = false;
  if (lVar1 == 0) {
    bVar5 = true;
    local_158 = 0;
    local_f8 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    local_f8 = *(undefined8 *)(lVar3 + 0x40);
  }
  uVar7 = 0;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
  }
  local_cc = local_cc & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_118,2,1);
  lVar3 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(ulonglong *)(lVar3 + 0x40);
  local_158 = uVar4;
  FUN_141aa9590(lVar1,param_1,uVar4,*(undefined8 *)(param_2 + 0x20));
  if (0 < *(int *)(lVar1 + 0x10)) {
    uVar10 = uVar7;
    do {
      iVar8 = (int)uVar10;
      if (*(undefined **)(*(longlong *)(lVar1 + 8) + uVar7 * 8) == &DAT_146a286e0) {
        if (iVar8 != -1) {
          puVar12 = *(undefined8 **)(*(longlong *)(lVar1 + 0x18) + (longlong)iVar8 * 8);
          *(undefined4 *)puVar12 = *(undefined4 *)(lVar1 + 0xb8);
          goto LAB_141df45b2;
        }
        break;
      }
      uVar10 = (ulonglong)(iVar8 + 1);
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)*(int *)(lVar1 + 0x10));
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a253f8) && (_Init_thread_header(&DAT_146a253f8), DAT_146a253f8 == -1))
  {
    DAT_146a253f0._0_4_ = 0;
    DAT_146a253f0._4_2_ = 0;
    DAT_146a253f0._6_1_ = 0;
    _Init_thread_footer(&DAT_146a253f8);
  }
  puVar12 = &DAT_146a253f0;
LAB_141df45b2:
  local_178 = param_2;
  FUN_141b51280(param_1,uVar4,puVar12,local_140);
  uVar7 = local_138;
  local_178 = local_138;
  FUN_141df1670(lVar1 + 0xcc,param_1,&local_158,param_2);
  local_178 = local_178 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_1,uVar4,lVar1 + 0xc0,local_130 + 0x68);
  local_178 = local_178 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_1,uVar4,lVar1 + 0xc6,&DAT_1464c36ec);
  local_160 = 0;
  local_168 = 0;
  local_170 = local_128;
  local_178 = local_140;
  FUN_141dba790(lVar1 + 0x118,param_1,uVar4,param_2);
  local_170 = CONCAT44(local_170._4_4_,param_9);
  local_178 = local_120;
  FUN_141e09bc0(lVar2,param_1,param_2,uVar7);
  if (plVar9 != (longlong *)0x0) {
    local_158 = CONCAT44(local_158._4_4_,param_9);
    lVar1 = plVar9[9];
    if (*(char *)(lVar1 + 0x28) == '\0') {
      FUN_1419f3850(lVar1);
    }
    local_178 = local_178 & 0xffffffff00000000;
    FUN_141cd46a0(param_1,*(undefined8 *)(lVar1 + 0x58),plVar9 + 0x18,&local_158);
  }
  return;
}



// FUNCTION 141df4750 FUN_141df4750 body=1268 status=ok
// SIG undefined FUN_141df4750(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141df4750(undefined8 param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                  ulonglong param_5,longlong param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_198 [32];
  ulonglong local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined1 local_160;
  ulonglong local_158;
  undefined *local_150;
  undefined4 local_148;
  undefined8 local_140;
  ulonglong local_138;
  longlong local_130;
  undefined8 local_128;
  ulonglong local_120;
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
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  plVar14 = (longlong *)0x0;
  local_120 = param_5;
  local_158 = local_158 & 0xffffffff00000000;
  lVar1 = *(longlong *)(param_2 + 0x3090);
  local_130 = param_6;
  local_128 = param_7;
  local_150 = &DAT_146aaa600;
  local_148 = 0;
  local_140 = param_4;
  local_138 = param_3;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_158,&local_150);
  plVar9 = plVar14;
  if ((int)local_158 != -1) {
    plVar9 = (longlong *)((longlong)(int)local_158 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_148 = 0;
  plVar13 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar13 = plVar14;
  }
  local_150 = &DAT_146b19770;
  lVar2 = *plVar13;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_158,&local_150);
  plVar9 = plVar14;
  if ((int)local_158 != -1) {
    plVar9 = (longlong *)((longlong)(int)local_158 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar13 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar13 = plVar14;
  }
  plVar9 = plVar14;
  if (plVar13 != (longlong *)0x0) {
    plVar9 = (longlong *)*plVar13;
  }
  local_148 = 0;
  local_150 = &DAT_146aab790;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_158,&local_150);
  plVar13 = plVar14;
  if ((int)local_158 != -1) {
    plVar13 = (longlong *)((longlong)(int)local_158 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar11 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar11 = plVar14;
  }
  lVar1 = *plVar11;
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
  uStack_e0 = FUN_140985530();
  local_d8 = FUN_1409853f0();
  local_e8 = FUN_141abe130();
  local_118 = DAT_146534c78;
  if (lVar2 == 0) {
    local_158 = 0;
    plVar13 = (longlong *)0x1;
    plStack_110 = plVar14;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_110 = *(longlong **)(lVar3 + 0x38);
    plVar13 = plVar14;
  }
  uVar6 = 0;
  if (plVar13 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
  }
  bVar5 = false;
  if (plVar9 == (longlong *)0x0) {
    bVar5 = true;
    local_158 = 0;
  }
  else {
    lVar3 = plVar9[9];
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    uVar6 = *(undefined8 *)(lVar3 + 0x58);
  }
  uStack_f0 = uVar6;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
  }
  bVar5 = false;
  if (lVar1 == 0) {
    bVar5 = true;
    local_158 = 0;
    local_f8 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    local_f8 = *(undefined8 *)(lVar3 + 0x40);
  }
  uVar7 = 0;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
  }
  local_cc = local_cc & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_118,2,1);
  lVar3 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(ulonglong *)(lVar3 + 0x40);
  local_158 = uVar4;
  FUN_141aa9590(lVar1,param_1,uVar4,*(undefined8 *)(param_2 + 0x20));
  if (0 < *(int *)(lVar1 + 0x10)) {
    uVar10 = uVar7;
    do {
      iVar8 = (int)uVar10;
      if (*(undefined **)(*(longlong *)(lVar1 + 8) + uVar7 * 8) == &DAT_146a286e0) {
        if (iVar8 != -1) {
          puVar12 = *(undefined8 **)(*(longlong *)(lVar1 + 0x18) + (longlong)iVar8 * 8);
          *(undefined4 *)puVar12 = *(undefined4 *)(lVar1 + 0xb8);
          goto LAB_141df4ab2;
        }
        break;
      }
      uVar10 = (ulonglong)(iVar8 + 1);
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)*(int *)(lVar1 + 0x10));
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a253f8) && (_Init_thread_header(&DAT_146a253f8), DAT_146a253f8 == -1))
  {
    DAT_146a253f0._0_4_ = 0;
    DAT_146a253f0._4_2_ = 0;
    DAT_146a253f0._6_1_ = 0;
    _Init_thread_footer(&DAT_146a253f8);
  }
  puVar12 = &DAT_146a253f0;
LAB_141df4ab2:
  local_178 = param_2;
  FUN_141b51280(param_1,uVar4,puVar12,local_140);
  uVar7 = local_138;
  local_178 = local_138;
  FUN_141df1670(lVar1 + 0xcc,param_1,&local_158,param_2);
  local_178 = local_178 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_1,uVar4,lVar1 + 0xc0,local_130 + 0x68);
  local_178 = local_178 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_1,uVar4,lVar1 + 0xc6,&DAT_1464c36ec);
  local_160 = 0;
  local_168 = 0;
  local_170 = local_128;
  local_178 = local_140;
  FUN_141dba790(lVar1 + 0x118,param_1,uVar4,param_2);
  local_170 = CONCAT44(local_170._4_4_,param_9);
  local_178 = local_120;
  FUN_141e09bc0(lVar2,param_1,param_2,uVar7);
  if (plVar9 != (longlong *)0x0) {
    local_158 = CONCAT44(local_158._4_4_,param_9);
    lVar1 = plVar9[9];
    if (*(char *)(lVar1 + 0x28) == '\0') {
      FUN_1419f3850(lVar1);
    }
    local_178 = local_178 & 0xffffffff00000000;
    FUN_141cd46a0(param_1,*(undefined8 *)(lVar1 + 0x58),plVar9 + 0x18,&local_158);
  }
  return;
}



// FUNCTION 141df4c50 FUN_141df4c50 body=1268 status=ok
// SIG undefined FUN_141df4c50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141df4c50(undefined8 param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                  ulonglong param_5,longlong param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_198 [32];
  ulonglong local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined1 local_160;
  ulonglong local_158;
  undefined *local_150;
  undefined4 local_148;
  undefined8 local_140;
  ulonglong local_138;
  longlong local_130;
  undefined8 local_128;
  ulonglong local_120;
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
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  plVar14 = (longlong *)0x0;
  local_120 = param_5;
  local_158 = local_158 & 0xffffffff00000000;
  lVar1 = *(longlong *)(param_2 + 0x3090);
  local_130 = param_6;
  local_128 = param_7;
  local_150 = &DAT_146aaa600;
  local_148 = 0;
  local_140 = param_4;
  local_138 = param_3;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_158,&local_150);
  plVar9 = plVar14;
  if ((int)local_158 != -1) {
    plVar9 = (longlong *)((longlong)(int)local_158 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_148 = 0;
  plVar13 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar13 = plVar14;
  }
  local_150 = &DAT_146b19770;
  lVar2 = *plVar13;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_158,&local_150);
  plVar9 = plVar14;
  if ((int)local_158 != -1) {
    plVar9 = (longlong *)((longlong)(int)local_158 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar13 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar13 = plVar14;
  }
  plVar9 = plVar14;
  if (plVar13 != (longlong *)0x0) {
    plVar9 = (longlong *)*plVar13;
  }
  local_148 = 0;
  local_150 = &DAT_146aab3a0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_158,&local_150);
  plVar13 = plVar14;
  if ((int)local_158 != -1) {
    plVar13 = (longlong *)((longlong)(int)local_158 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar11 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar11 = plVar14;
  }
  lVar1 = *plVar11;
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
  uStack_e0 = FUN_140985530();
  local_d8 = FUN_1409853f0();
  local_e8 = FUN_141abe130();
  local_118 = DAT_146534c78;
  if (lVar2 == 0) {
    local_158 = 0;
    plVar13 = (longlong *)0x1;
    plStack_110 = plVar14;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_110 = *(longlong **)(lVar3 + 0x38);
    plVar13 = plVar14;
  }
  uVar6 = 0;
  if (plVar13 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
  }
  bVar5 = false;
  if (plVar9 == (longlong *)0x0) {
    bVar5 = true;
    local_158 = 0;
  }
  else {
    lVar3 = plVar9[9];
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    uVar6 = *(undefined8 *)(lVar3 + 0x58);
  }
  uStack_f0 = uVar6;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
  }
  bVar5 = false;
  if (lVar1 == 0) {
    bVar5 = true;
    local_158 = 0;
    local_f8 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    local_f8 = *(undefined8 *)(lVar3 + 0x40);
  }
  uVar7 = 0;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
  }
  local_cc = local_cc & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_118,2,1);
  lVar3 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(ulonglong *)(lVar3 + 0x40);
  local_158 = uVar4;
  FUN_141aa9590(lVar1,param_1,uVar4,*(undefined8 *)(param_2 + 0x20));
  if (0 < *(int *)(lVar1 + 0x10)) {
    uVar10 = uVar7;
    do {
      iVar8 = (int)uVar10;
      if (*(undefined **)(*(longlong *)(lVar1 + 8) + uVar7 * 8) == &DAT_146a286e0) {
        if (iVar8 != -1) {
          puVar12 = *(undefined8 **)(*(longlong *)(lVar1 + 0x18) + (longlong)iVar8 * 8);
          *(undefined4 *)puVar12 = *(undefined4 *)(lVar1 + 0xb8);
          goto LAB_141df4fb2;
        }
        break;
      }
      uVar10 = (ulonglong)(iVar8 + 1);
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)*(int *)(lVar1 + 0x10));
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a253f8) && (_Init_thread_header(&DAT_146a253f8), DAT_146a253f8 == -1))
  {
    DAT_146a253f0._0_4_ = 0;
    DAT_146a253f0._4_2_ = 0;
    DAT_146a253f0._6_1_ = 0;
    _Init_thread_footer(&DAT_146a253f8);
  }
  puVar12 = &DAT_146a253f0;
LAB_141df4fb2:
  local_178 = param_2;
  FUN_141b51280(param_1,uVar4,puVar12,local_140);
  uVar7 = local_138;
  local_178 = local_138;
  FUN_141df1670(lVar1 + 0xcc,param_1,&local_158,param_2);
  local_178 = local_178 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_1,uVar4,lVar1 + 0xc0,local_130 + 0x68);
  local_178 = local_178 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_1,uVar4,lVar1 + 0xc6,&DAT_1464c36ec);
  local_160 = 0;
  local_168 = 0;
  local_170 = local_128;
  local_178 = local_140;
  FUN_141dba790(lVar1 + 0x118,param_1,uVar4,param_2);
  local_170 = CONCAT44(local_170._4_4_,param_9);
  local_178 = local_120;
  FUN_141e09bc0(lVar2,param_1,param_2,uVar7);
  if (plVar9 != (longlong *)0x0) {
    local_158 = CONCAT44(local_158._4_4_,param_9);
    lVar1 = plVar9[9];
    if (*(char *)(lVar1 + 0x28) == '\0') {
      FUN_1419f3850(lVar1);
    }
    local_178 = local_178 & 0xffffffff00000000;
    FUN_141cd46a0(param_1,*(undefined8 *)(lVar1 + 0x58),plVar9 + 0x18,&local_158);
  }
  return;
}



// FUNCTION 141df5150 FUN_141df5150 body=1268 status=ok
// SIG undefined FUN_141df5150(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141df5150(undefined8 param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                  ulonglong param_5,longlong param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_198 [32];
  ulonglong local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined1 local_160;
  ulonglong local_158;
  undefined *local_150;
  undefined4 local_148;
  undefined8 local_140;
  ulonglong local_138;
  longlong local_130;
  undefined8 local_128;
  ulonglong local_120;
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
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  plVar14 = (longlong *)0x0;
  local_120 = param_5;
  local_158 = local_158 & 0xffffffff00000000;
  lVar1 = *(longlong *)(param_2 + 0x3090);
  local_130 = param_6;
  local_128 = param_7;
  local_150 = &DAT_146aaa600;
  local_148 = 0;
  local_140 = param_4;
  local_138 = param_3;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_158,&local_150);
  plVar9 = plVar14;
  if ((int)local_158 != -1) {
    plVar9 = (longlong *)((longlong)(int)local_158 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_148 = 0;
  plVar13 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar13 = plVar14;
  }
  local_150 = &DAT_146b19770;
  lVar2 = *plVar13;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_158,&local_150);
  plVar9 = plVar14;
  if ((int)local_158 != -1) {
    plVar9 = (longlong *)((longlong)(int)local_158 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar13 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar13 = plVar14;
  }
  plVar9 = plVar14;
  if (plVar13 != (longlong *)0x0) {
    plVar9 = (longlong *)*plVar13;
  }
  local_148 = 0;
  local_150 = &DAT_146aab8e0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_158,&local_150);
  plVar13 = plVar14;
  if ((int)local_158 != -1) {
    plVar13 = (longlong *)((longlong)(int)local_158 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar11 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar11 = plVar14;
  }
  lVar1 = *plVar11;
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
  uStack_e0 = FUN_140985530();
  local_d8 = FUN_1409853f0();
  local_e8 = FUN_141abe130();
  local_118 = DAT_146534c78;
  if (lVar2 == 0) {
    local_158 = 0;
    plVar13 = (longlong *)0x1;
    plStack_110 = plVar14;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_110 = *(longlong **)(lVar3 + 0x38);
    plVar13 = plVar14;
  }
  uVar6 = 0;
  if (plVar13 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
  }
  bVar5 = false;
  if (plVar9 == (longlong *)0x0) {
    bVar5 = true;
    local_158 = 0;
  }
  else {
    lVar3 = plVar9[9];
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    uVar6 = *(undefined8 *)(lVar3 + 0x58);
  }
  uStack_f0 = uVar6;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
  }
  bVar5 = false;
  if (lVar1 == 0) {
    bVar5 = true;
    local_158 = 0;
    local_f8 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    local_f8 = *(undefined8 *)(lVar3 + 0x40);
  }
  uVar7 = 0;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
  }
  local_cc = local_cc & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_118,2,1);
  lVar3 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(ulonglong *)(lVar3 + 0x40);
  local_158 = uVar4;
  FUN_141aa9590(lVar1,param_1,uVar4,*(undefined8 *)(param_2 + 0x20));
  if (0 < *(int *)(lVar1 + 0x10)) {
    uVar10 = uVar7;
    do {
      iVar8 = (int)uVar10;
      if (*(undefined **)(*(longlong *)(lVar1 + 8) + uVar7 * 8) == &DAT_146a286e0) {
        if (iVar8 != -1) {
          puVar12 = *(undefined8 **)(*(longlong *)(lVar1 + 0x18) + (longlong)iVar8 * 8);
          *(undefined4 *)puVar12 = *(undefined4 *)(lVar1 + 0xb8);
          goto LAB_141df54b2;
        }
        break;
      }
      uVar10 = (ulonglong)(iVar8 + 1);
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)*(int *)(lVar1 + 0x10));
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a253f8) && (_Init_thread_header(&DAT_146a253f8), DAT_146a253f8 == -1))
  {
    DAT_146a253f0._0_4_ = 0;
    DAT_146a253f0._4_2_ = 0;
    DAT_146a253f0._6_1_ = 0;
    _Init_thread_footer(&DAT_146a253f8);
  }
  puVar12 = &DAT_146a253f0;
LAB_141df54b2:
  local_178 = param_2;
  FUN_141b51280(param_1,uVar4,puVar12,local_140);
  uVar7 = local_138;
  local_178 = local_138;
  FUN_141df1670(lVar1 + 0xcc,param_1,&local_158,param_2);
  local_178 = local_178 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_1,uVar4,lVar1 + 0xc0,local_130 + 0x68);
  local_178 = local_178 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_1,uVar4,lVar1 + 0xc6,&DAT_1464c36ec);
  local_160 = 0;
  local_168 = 0;
  local_170 = local_128;
  local_178 = local_140;
  FUN_141dba790(lVar1 + 0x118,param_1,uVar4,param_2);
  local_170 = CONCAT44(local_170._4_4_,param_9);
  local_178 = local_120;
  FUN_141e09bc0(lVar2,param_1,param_2,uVar7);
  if (plVar9 != (longlong *)0x0) {
    local_158 = CONCAT44(local_158._4_4_,param_9);
    lVar1 = plVar9[9];
    if (*(char *)(lVar1 + 0x28) == '\0') {
      FUN_1419f3850(lVar1);
    }
    local_178 = local_178 & 0xffffffff00000000;
    FUN_141cd46a0(param_1,*(undefined8 *)(lVar1 + 0x58),plVar9 + 0x18,&local_158);
  }
  return;
}



// FUNCTION 141df5650 FUN_141df5650 body=670 status=ok
// SIG undefined FUN_141df5650(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141df5650(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,
                  longlong param_5)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined8 local_res8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  local_res8 = uVar3;
  FUN_141aa92b0(param_1,param_2,uVar3,*(undefined8 *)(param_3 + 0x20));
  FUN_141defcf0(param_1 + 0xc0,param_2,&local_res8,param_3,param_4);
  lVar2 = param_5;
  uVar4 = 0;
  param_4 = param_4 & 0xffffffff00000000;
  FUN_141aac7b0(param_2,uVar3,param_1 + 0x10c,param_5 + 0x6c,param_4);
  param_4 = param_4 & 0xffffffff00000000;
  FUN_141aac7b0(param_2,uVar3,param_1 + 0x112,lVar2 + 0x7c,param_4);
  param_4 = param_4 & 0xffffffff00000000;
  FUN_141c0b130(param_2,uVar3,param_1 + 0x118,lVar2 + 0x8c,param_4);
  local_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0x3f800000;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0x3f800000;
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0x3f800000;
  local_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0x3f800000;
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0x3f800000;
  FUN_141b45c30(param_3,0);
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar7 = uVar4;
    do {
      iVar6 = (int)uVar7;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar4 * 8) == &DAT_146a177d0) {
        if (iVar6 != -1) {
          puVar9 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar6 * 8);
          *puVar9 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141df57c2;
        }
        break;
      }
      uVar7 = (ulonglong)(iVar6 + 1);
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a1c410) {
    _Init_thread_header(&DAT_146a1c410);
    if (DAT_146a1c410 == -1) {
      _DAT_146a1c408 = 0;
      DAT_146a1c40c = 0;
      DAT_146a1c40e = 0;
      _Init_thread_footer(&DAT_146a1c410);
    }
  }
  puVar9 = (undefined4 *)&DAT_146a1c408;
LAB_141df57c2:
  if (*(char *)((longlong)puVar9 + 6) != '\0') {
    (**(code **)(*DAT_146ab6358 + 0x110))
              (DAT_146ab6358,&param_5,&local_b8,&DAT_146a177f8,param_4 & 0xffffffff00000000);
    lVar2 = param_5;
    uVar1 = *(ushort *)(puVar9 + 1);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144dc9c90;
    puVar8[2] = uVar3;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = lVar2;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&param_5);
  }
  return;
}



// FUNCTION 141df58f0 FUN_141df58f0 body=670 status=ok
// SIG undefined FUN_141df58f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141df58f0(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,
                  longlong param_5)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined8 local_res8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  local_res8 = uVar3;
  FUN_141aa9420(param_1,param_2,uVar3,*(undefined8 *)(param_3 + 0x20));
  FUN_141df2590(param_1 + 0xc0,param_2,&local_res8,param_3,param_4);
  lVar2 = param_5;
  uVar4 = 0;
  param_4 = param_4 & 0xffffffff00000000;
  FUN_141a120e0(param_2,uVar3,param_1 + 0x10c,param_5 + 0x6c,param_4);
  param_4 = param_4 & 0xffffffff00000000;
  FUN_141a120e0(param_2,uVar3,param_1 + 0x112,lVar2 + 0x7c,param_4);
  param_4 = param_4 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 0x118,lVar2 + 0x8c,param_4);
  local_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0x3f800000;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0x3f800000;
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0x3f800000;
  local_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0x3f800000;
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0x3f800000;
  FUN_141b45c30(param_3,0);
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar7 = uVar4;
    do {
      iVar6 = (int)uVar7;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar4 * 8) == &DAT_146a177d0) {
        if (iVar6 != -1) {
          puVar9 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar6 * 8);
          *puVar9 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141df5a62;
        }
        break;
      }
      uVar7 = (ulonglong)(iVar6 + 1);
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a1c410) {
    _Init_thread_header(&DAT_146a1c410);
    if (DAT_146a1c410 == -1) {
      _DAT_146a1c408 = 0;
      DAT_146a1c40c = 0;
      DAT_146a1c40e = 0;
      _Init_thread_footer(&DAT_146a1c410);
    }
  }
  puVar9 = (undefined4 *)&DAT_146a1c408;
LAB_141df5a62:
  if (*(char *)((longlong)puVar9 + 6) != '\0') {
    (**(code **)(*DAT_146ab6358 + 0x110))
              (DAT_146ab6358,&param_5,&local_b8,&DAT_146a177f8,param_4 & 0xffffffff00000000);
    lVar2 = param_5;
    uVar1 = *(ushort *)(puVar9 + 1);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144dcb3c8;
    puVar8[2] = uVar3;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = lVar2;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&param_5);
  }
  return;
}



// FUNCTION 141df5b90 SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList> body=308 status=ok
// SIG undefined SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>(void)

void SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
               (longlong param_1,undefined8 param_2,ushort *param_3,void *param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *_Dst;
  uint uVar6;
  
  uVar6 = (uint)param_3[2] + param_5 * -0x40;
  if (0x3f < (int)uVar6) {
    uVar6 = 0x40;
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
    *puVar5 = &PTR_LAB_144dc9c80;
    puVar5[3] = _Dst;
    *(uint *)(puVar5 + 4) = (uint)uVar1;
    *(uint *)((longlong)puVar5 + 0x24) = (uint)uVar2 + param_5 * 0x40;
    puVar5[2] = param_2;
    *(uint *)(puVar5 + 5) = uVar6;
  }
  return;
}



// FUNCTION 141df5cd0 SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList> body=308 status=ok
// SIG undefined SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>(void)

void SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
               (longlong param_1,undefined8 param_2,ushort *param_3,void *param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *_Dst;
  uint uVar6;
  
  uVar6 = (uint)param_3[2] + param_5 * -0x40;
  if (0x3f < (int)uVar6) {
    uVar6 = 0x40;
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
    *puVar5 = &PTR_LAB_144e147b0;
    puVar5[3] = _Dst;
    *(uint *)(puVar5 + 4) = (uint)uVar1;
    *(uint *)((longlong)puVar5 + 0x24) = (uint)uVar2 + param_5 * 0x40;
    puVar5[2] = param_2;
    *(uint *)(puVar5 + 5) = uVar6;
  }
  return;
}



// FUNCTION 141df5e10 FUN_141df5e10 body=174 status=ok
// SIG undefined FUN_141df5e10(void)

void FUN_141df5e10(ushort *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar2 = puVar3 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar2) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar2 = puVar3 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar2;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar3;
    *(undefined8 **)(param_2 + 8) = puVar3 + 1;
    puVar3[1] = 0;
    *(uint *)(puVar3 + 3) = (uint)uVar1;
    *puVar3 = &PTR_LAB_144d8e620;
    puVar3[2] = param_3;
    puVar3[4] = param_4;
  }
  return;
}



// FUNCTION 141df5ec0 FUN_141df5ec0 body=174 status=ok
// SIG undefined FUN_141df5ec0(void)

void FUN_141df5ec0(ushort *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar2 = puVar3 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar2) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar2 = puVar3 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar2;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar3;
    *(undefined8 **)(param_2 + 8) = puVar3 + 1;
    puVar3[1] = 0;
    *(uint *)(puVar3 + 3) = (uint)uVar1;
    *puVar3 = &PTR_LAB_143f59c80;
    puVar3[2] = param_3;
    puVar3[4] = param_4;
  }
  return;
}



// FUNCTION 141df5f70 FUN_141df5f70 body=174 status=ok
// SIG undefined FUN_141df5f70(void)

void FUN_141df5f70(ushort *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar2 = puVar3 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar2) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar2 = puVar3 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar2;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar3;
    *(undefined8 **)(param_2 + 8) = puVar3 + 1;
    puVar3[1] = 0;
    *(uint *)(puVar3 + 3) = (uint)uVar1;
    *puVar3 = &PTR_LAB_143f59c50;
    puVar3[2] = param_3;
    puVar3[4] = param_4;
  }
  return;
}



// FUNCTION 141df6020 FUN_141df6020 body=221 status=ok
// SIG undefined FUN_141df6020(void)

void FUN_141df6020(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

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
    *puVar3 = &PTR_LAB_144dcb3c8;
    puVar3[2] = param_2;
    *(uint *)(puVar3 + 3) = (uint)uVar1;
    puVar3[4] = local_res18[0];
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res18);
  }
  return;
}



// FUNCTION 141df6100 FUN_141df6100 body=221 status=ok
// SIG undefined FUN_141df6100(void)

void FUN_141df6100(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_res18 [2];
  
  if (*(char *)(param_3 + 6) != '\0') {
    (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,local_res18,param_4,&DAT_146a81868,0);
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



// FUNCTION 141df61e0 FUN_141df61e0 body=748 status=ok
// SIG undefined FUN_141df61e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141df61e0(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7,char param_8)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78 [4];
  undefined8 *local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FRWShaderParameter::UnsetUAV<FRHICommandList>(param_1,param_2,*param_3);
  FRWShaderParameter::UnsetUAV<FRHICommandList>(param_1 + 8,param_2,*param_3);
  FRWShaderParameter::UnsetUAV<FRHICommandList>(param_1 + 0x10,param_2,*param_3);
  FRWShaderParameter::UnsetUAV<FRHICommandList>(param_1 + 0x18,param_2,*param_3);
  lVar7 = *(longlong *)(param_4 + 0x2fc8);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  local_4c = 0;
  if (*(short *)(param_1 + 6) != 0) {
    local_50 = 1;
    uVar1 = *(undefined8 *)(param_5 + 0x18);
    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(local_78);
    puVar4 = local_78;
    if (local_58 != (undefined8 *)0x0) {
      puVar4 = local_58;
    }
    *puVar4 = uVar1;
  }
  iVar2 = local_50;
  if (*(short *)(param_1 + 0xe) != 0) {
    uVar1 = *(undefined8 *)(param_6 + 0x18);
    local_50 = local_50 + 1;
    if (local_4c < local_50) {
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (local_78,iVar2);
    }
    puVar4 = local_78;
    if (local_58 != (undefined8 *)0x0) {
      puVar4 = local_58;
    }
    puVar4[iVar2] = uVar1;
  }
  iVar2 = local_50;
  if (*(short *)(param_1 + 0x16) != 0) {
    uVar1 = *(undefined8 *)(param_7 + 0x18);
    local_50 = local_50 + 1;
    if (local_4c < local_50) {
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (local_78,iVar2);
    }
    puVar4 = local_78;
    if (local_58 != (undefined8 *)0x0) {
      puVar4 = local_58;
    }
    puVar4[iVar2] = uVar1;
  }
  iVar2 = local_50;
  if (*(short *)(param_1 + 0x1e) != 0) {
    uVar1 = *(undefined8 *)(lVar7 + 0x18);
    local_50 = local_50 + 1;
    if (local_4c < local_50) {
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (local_78,iVar2);
    }
    puVar4 = local_78;
    if (local_58 != (undefined8 *)0x0) {
      puVar4 = local_58;
    }
    puVar4[iVar2] = uVar1;
  }
  iVar2 = local_50;
  if ((0 < local_50) && (param_8 != '\0')) {
    puVar4 = local_78;
    if (local_58 != (undefined8 *)0x0) {
      puVar4 = local_58;
    }
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    iVar6 = local_50 * 8;
    uVar3 = (longlong)iVar6 + (longlong)puVar8;
    if (*(ulonglong *)(param_2 + 0x38) < uVar3) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,iVar6 + 8);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      uVar3 = (longlong)iVar6 + (longlong)puVar8;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar3;
    lVar7 = (longlong)iVar2;
    if (0 < iVar2) {
      puVar5 = puVar8;
      do {
        *puVar5 = *(undefined8 *)(((longlong)puVar4 - (longlong)puVar8) + (longlong)puVar5);
        puVar5 = puVar5 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144dc9d00;
    *(int *)(puVar5 + 2) = iVar2;
    puVar5[3] = puVar8;
    *(undefined4 *)(puVar5 + 4) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x24) = 1;
    puVar5[5] = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}



// FUNCTION 141df64d0 FUN_141df64d0 body=748 status=ok
// SIG undefined FUN_141df64d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141df64d0(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7,char param_8)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78 [4];
  undefined8 *local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FRWShaderParameter::UnsetUAV<FRHICommandList>(param_1,param_2,*param_3);
  FRWShaderParameter::UnsetUAV<FRHICommandList>(param_1 + 8,param_2,*param_3);
  FRWShaderParameter::UnsetUAV<FRHICommandList>(param_1 + 0x10,param_2,*param_3);
  FRWShaderParameter::UnsetUAV<FRHICommandList>(param_1 + 0x18,param_2,*param_3);
  lVar7 = *(longlong *)(param_4 + 0x2fc8);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  local_4c = 0;
  if (*(short *)(param_1 + 6) != 0) {
    local_50 = 1;
    uVar1 = *(undefined8 *)(param_5 + 0x18);
    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(local_78);
    puVar4 = local_78;
    if (local_58 != (undefined8 *)0x0) {
      puVar4 = local_58;
    }
    *puVar4 = uVar1;
  }
  iVar2 = local_50;
  if (*(short *)(param_1 + 0xe) != 0) {
    uVar1 = *(undefined8 *)(param_6 + 0x18);
    local_50 = local_50 + 1;
    if (local_4c < local_50) {
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (local_78,iVar2);
    }
    puVar4 = local_78;
    if (local_58 != (undefined8 *)0x0) {
      puVar4 = local_58;
    }
    puVar4[iVar2] = uVar1;
  }
  iVar2 = local_50;
  if (*(short *)(param_1 + 0x16) != 0) {
    uVar1 = *(undefined8 *)(param_7 + 0x18);
    local_50 = local_50 + 1;
    if (local_4c < local_50) {
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (local_78,iVar2);
    }
    puVar4 = local_78;
    if (local_58 != (undefined8 *)0x0) {
      puVar4 = local_58;
    }
    puVar4[iVar2] = uVar1;
  }
  iVar2 = local_50;
  if (*(short *)(param_1 + 0x1e) != 0) {
    uVar1 = *(undefined8 *)(lVar7 + 0x18);
    local_50 = local_50 + 1;
    if (local_4c < local_50) {
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (local_78,iVar2);
    }
    puVar4 = local_78;
    if (local_58 != (undefined8 *)0x0) {
      puVar4 = local_58;
    }
    puVar4[iVar2] = uVar1;
  }
  iVar2 = local_50;
  if ((0 < local_50) && (param_8 != '\0')) {
    puVar4 = local_78;
    if (local_58 != (undefined8 *)0x0) {
      puVar4 = local_58;
    }
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    iVar6 = local_50 * 8;
    uVar3 = (longlong)iVar6 + (longlong)puVar8;
    if (*(ulonglong *)(param_2 + 0x38) < uVar3) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,iVar6 + 8);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      uVar3 = (longlong)iVar6 + (longlong)puVar8;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar3;
    lVar7 = (longlong)iVar2;
    if (0 < iVar2) {
      puVar5 = puVar8;
      do {
        *puVar5 = *(undefined8 *)(((longlong)puVar4 - (longlong)puVar8) + (longlong)puVar5);
        puVar5 = puVar5 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144d91e60;
    *(int *)(puVar5 + 2) = iVar2;
    puVar5[3] = puVar8;
    *(undefined4 *)(puVar5 + 4) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x24) = 1;
    puVar5[5] = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}



// FUNCTION 141df67c0 FUN_141df67c0 body=488 status=ok
// SIG undefined FUN_141df67c0(void)

undefined8 *
FUN_141df67c0(undefined8 *param_1,longlong *param_2,undefined8 param_3,longlong *param_4,int param_5
             ,undefined8 param_6,undefined4 param_7,byte param_8,byte param_9,undefined8 param_10,
             undefined8 param_11,byte param_12,byte param_13)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  FUN_141b279e0();
  *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) & 0xfffffffe;
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) & 0xfffffffe;
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) | (uint)param_12;
  *(undefined4 *)((longlong)param_1 + 100) = param_7;
  *(uint *)(param_1 + 0xd) =
       (param_9 & 0xfffffffd | (uint)param_13 * 2) * 2 |
       ((uint)param_8 | *(uint *)(param_1 + 0xd)) & 0xfffffff9;
  param_1[9] = 0;
  param_1[10] = 0;
  iVar5 = (**(code **)(*param_4 + 0x178))(param_4);
  cVar4 = FUN_141ed13a0((&DAT_1464c9c48)[param_5]);
  if (cVar4 != '\0') {
    lVar6 = (**(code **)(*param_2 + 0x40))(param_2);
    cVar4 = (**(code **)(lVar6 + 0x48))();
    if ((cVar4 != '\0') && (iVar5 != 0)) {
      bVar3 = true;
      goto LAB_141df688f;
    }
  }
  bVar3 = false;
LAB_141df688f:
  uVar1 = *(uint *)(param_1 + 0xd);
  uVar7 = (**(code **)(*(longlong *)param_1[1] + 0x40))();
  if (bVar3) {
    lVar6 = FUN_1425939a0(param_4,&DAT_146a00540,uVar7,1);
    param_1[10] = lVar6;
    if ((((uVar1 >> 1 & 1) == 0) || (lVar6 == 0)) ||
       (((bVar2 = (byte)*(undefined4 *)(lVar6 + 0xb0), (bVar2 & 0xf8) != 0x58 &&
         ((((bVar2 & 0xf8) != 0x60 && ((bVar2 & 0xf8) != 0x90)) && ((bVar2 & 0xf8) != 0x80)))) &&
        ((((bVar2 & 0xf8) != 0xb0 && ((bVar2 & 0xf8) != 0xb8)) && ((bVar2 & 0xf8) != 0xd8)))))) {
      puVar9 = &DAT_146a003f0;
    }
    else {
      puVar9 = &DAT_146a007e0;
    }
    uVar8 = FUN_1425939a0(param_4,puVar9,uVar7,1);
    param_1[9] = uVar8;
  }
  puVar9 = &DAT_146a00690;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar9 = &DAT_146a002a0;
  }
  uVar8 = FUN_1425939a0(param_4,puVar9,uVar7,1);
  param_1[8] = uVar8;
  uVar7 = FUN_1425939a0(param_4,&DAT_146a00930,uVar7,1);
  param_1[0xb] = uVar7;
  *param_1 = param_1[8];
  return param_1;
}



// FUNCTION 141df69b0 FUN_141df69b0 body=488 status=ok
// SIG undefined FUN_141df69b0(void)

undefined8 *
FUN_141df69b0(undefined8 *param_1,longlong *param_2,undefined8 param_3,longlong *param_4,int param_5
             ,undefined8 param_6,undefined4 param_7,byte param_8,byte param_9,undefined8 param_10,
             undefined8 param_11,byte param_12,byte param_13)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  FUN_141b279e0();
  *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) & 0xfffffffe;
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) & 0xfffffffe;
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) | (uint)param_12;
  *(undefined4 *)((longlong)param_1 + 100) = param_7;
  *(uint *)(param_1 + 0xd) =
       (param_9 & 0xfffffffd | (uint)param_13 * 2) * 2 |
       ((uint)param_8 | *(uint *)(param_1 + 0xd)) & 0xfffffff9;
  param_1[9] = 0;
  param_1[10] = 0;
  iVar5 = (**(code **)(*param_4 + 0x178))(param_4);
  cVar4 = FUN_141ed13a0((&DAT_1464c9c48)[param_5]);
  if (cVar4 != '\0') {
    lVar6 = (**(code **)(*param_2 + 0x40))(param_2);
    cVar4 = (**(code **)(lVar6 + 0x48))();
    if ((cVar4 != '\0') && (iVar5 != 0)) {
      bVar3 = true;
      goto LAB_141df6a7f;
    }
  }
  bVar3 = false;
LAB_141df6a7f:
  uVar1 = *(uint *)(param_1 + 0xd);
  uVar7 = (**(code **)(*(longlong *)param_1[1] + 0x40))();
  if (bVar3) {
    lVar6 = FUN_1425939a0(param_4,&DAT_146a017a0,uVar7,1);
    param_1[10] = lVar6;
    if ((((uVar1 >> 1 & 1) == 0) || (lVar6 == 0)) ||
       (((bVar2 = (byte)*(undefined4 *)(lVar6 + 0xb0), (bVar2 & 0xf8) != 0x58 &&
         ((((bVar2 & 0xf8) != 0x60 && ((bVar2 & 0xf8) != 0x90)) && ((bVar2 & 0xf8) != 0x80)))) &&
        ((((bVar2 & 0xf8) != 0xb0 && ((bVar2 & 0xf8) != 0xb8)) && ((bVar2 & 0xf8) != 0xd8)))))) {
      puVar9 = &DAT_146a01650;
    }
    else {
      puVar9 = &DAT_146a01a40;
    }
    uVar8 = FUN_1425939a0(param_4,puVar9,uVar7,1);
    param_1[9] = uVar8;
  }
  puVar9 = &DAT_146a018f0;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar9 = &DAT_146a01500;
  }
  uVar8 = FUN_1425939a0(param_4,puVar9,uVar7,1);
  param_1[8] = uVar8;
  uVar7 = FUN_1425939a0(param_4,&DAT_146a01b90,uVar7,1);
  param_1[0xb] = uVar7;
  *param_1 = param_1[8];
  return param_1;
}



// FUNCTION 141df6ba0 FUN_141df6ba0 body=278 status=ok
// SIG undefined FUN_141df6ba0(void)

undefined8 * FUN_141df6ba0(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e8ad38;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined2 *)((longlong)param_1 + 0xca) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined2 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf6) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined2 *)((longlong)param_1 + 0x114) = 0;
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
  FShaderParameter::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18),L"PhaseG",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xc6,*(undefined8 *)(param_2 + 0x18),
             L"InverseSquaredLightDistanceBiasScale",0);
  FVolumetricFogIntegrationParameters::Bind
            ((undefined8 *)((longlong)param_1 + 0xcc),*(undefined8 *)(param_2 + 0x18));
  FVolumeShadowingParameters::Bind(param_1 + 0x23,*(undefined8 *)(param_2 + 0x18));
  return param_1;
}



// FUNCTION 141df6cc0 TInjectShadowedLocalLightPS<1,1,1> body=207 status=ok
// SIG undefined TInjectShadowedLocalLightPS<1,1,1>(void)

undefined8 *
TInjectShadowedLocalLightPS<1,1,1>::TInjectShadowedLocalLightPS<1,1,1>(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e8ad38;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined2 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf6) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined2 *)((longlong)param_1 + 0x114) = 0;
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
  return param_1;
}



// FUNCTION 141df6d90 FUN_141df6d90 body=806 status=ok
// SIG undefined FUN_141df6d90(void)

undefined8 * FUN_141df6d90(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e8aff0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined2 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf6) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined2 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x156) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x166) = 0;
  *(undefined4 *)((longlong)param_1 + 0x16e) = 0;
  *(undefined2 *)((longlong)param_1 + 0x172) = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined2 *)(param_1 + 0x36) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b2) = 0;
  FShaderResourceParameter::Bind
            (param_1 + 0x18,*(undefined8 *)(param_2 + 0x18),L"LocalShadowedLightScattering",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xc4,*(undefined8 *)(param_2 + 0x18),L"LightScatteringHistory",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x19,*(undefined8 *)(param_2 + 0x18),L"LightScatteringHistorySampler",0);
  FVolumetricFogIntegrationParameters::Bind
            ((longlong)param_1 + 0xcc,*(undefined8 *)(param_2 + 0x18));
  FShaderParameter::Bind
            (param_1 + 0x23,*(undefined8 *)(param_2 + 0x18),L"DirectionalLightFunctionWorldToShadow"
             ,0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x11e,*(undefined8 *)(param_2 + 0x18),L"LightFunctionTexture",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x122,*(undefined8 *)(param_2 + 0x18),L"LightFunctionSampler",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x126,*(undefined8 *)(param_2 + 0x18),
             L"StaticLightingScatteringIntensity",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 300,*(undefined8 *)(param_2 + 0x18),L"SkyLightUseStaticShadowing",0
            );
  FShaderParameter::Bind
            ((longlong)param_1 + 0x132,*(undefined8 *)(param_2 + 0x18),
             L"SkyLightVolumetricScatteringIntensity",0);
  FShaderParameter::Bind(param_1 + 0x27,*(undefined8 *)(param_2 + 0x18),L"SkySH",0);
  FShaderParameter::Bind((longlong)param_1 + 0x13e,*(undefined8 *)(param_2 + 0x18),L"PhaseG",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x144,*(undefined8 *)(param_2 + 0x18),
             L"InverseSquaredLightDistanceBiasScale",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x14a,*(undefined8 *)(param_2 + 0x18),L"UseHeightFogColors",0);
  FShaderParameter::Bind
            (param_1 + 0x2a,*(undefined8 *)(param_2 + 0x18),L"UseDirectionalLightShadowing",0);
  FAOParameters::Bind((undefined8 *)((longlong)param_1 + 0x156),*(undefined8 *)(param_2 + 0x18));
  FGlobalDistanceFieldParameters::Bind
            ((undefined8 *)((longlong)param_1 + 0x174),*(undefined8 *)(param_2 + 0x18));
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x1b2,*(undefined8 *)(param_2 + 0x18),
             L"SkyLightSphericalHarmonicBuffer",0);
  return param_1;
}



// FUNCTION 141df70c0 FUN_141df70c0 body=276 status=ok
// SIG undefined FUN_141df70c0(void)

undefined8 * FUN_141df70c0(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e8aff0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined2 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf6) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined2 *)((longlong)param_1 + 0x114) = 0;
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
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1b4) = 0;
  return param_1;
}



// FUNCTION 141df71e0 FUN_141df71e0 body=221 status=ok
// SIG undefined FUN_141df71e0(void)

undefined8 * FUN_141df71e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = 0;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  uVar1 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  uVar1 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  uVar1 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar1;
  uVar1 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar1;
  uVar1 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar1;
  uVar1 = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar1;
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  uVar1 = *(undefined8 *)((longlong)param_2 + 0xbc);
  *(undefined8 *)((longlong)param_1 + 0xb4) = *(undefined8 *)((longlong)param_2 + 0xb4);
  *(undefined8 *)((longlong)param_1 + 0xbc) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)((longlong)param_2 + 0xc4);
  param_1[0x19] = param_2[0x19];
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
  return param_1;
}



// FUNCTION 141df72c0 FUN_141df72c0 body=361 status=ok
// SIG undefined FUN_141df72c0(void)

undefined8 * FUN_141df72c0(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  local_18 = 0x3f800000;
  local_10 = 0;
  FPackedNormal::FPackedNormal((longlong)param_1 + 0x4c,&local_18);
  local_18 = 0;
  local_10 = 0x3f800000;
  FPackedNormal::FPackedNormal(param_1 + 10);
  puVar2 = (undefined4 *)((longlong)param_1 + 0x54);
  lVar1 = 2;
  if (puVar2 <= (undefined4 *)((longlong)param_1 + 0x5c)) {
    for (; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0xffffffff;
      puVar2 = puVar2 + 1;
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x53) = 0x7f;
  *(undefined4 *)((longlong)param_1 + 0xc) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 2) = DAT_1468b5d88._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x14) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 3) = DAT_1468b5d88._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x1c) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 4) = DAT_1468b5d88._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x24) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 5) = DAT_1468b5d88._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x2c) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 6) = DAT_1468b5d88._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x34) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 7) = DAT_1468b5d88._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x3c) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 8) = DAT_1468b5d88._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x44) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 9) = DAT_1468b5d88._4_4_;
  return param_1;
}



// FUNCTION 141df7430 FPageTableUpdateVS body=203 status=ok
// SIG undefined FPageTableUpdateVS(void)

undefined8 * FPageTableUpdateVS::FPageTableUpdateVS(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144dc8b78;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xce) = 0;
  FShaderParameter::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18),L"PageTableSize",0);
  FShaderParameter::Bind((longlong)param_1 + 0xc6,*(undefined8 *)(param_2 + 0x18),L"FirstUpdate",0);
  FShaderParameter::Bind((longlong)param_1 + 0xcc,*(undefined8 *)(param_2 + 0x18),L"NumUpdates",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xd2,*(undefined8 *)(param_2 + 0x18),L"UpdateBuffer",0);
  return param_1;
}



// FUNCTION 141df7500 FUN_141df7500 body=2872 status=ok
// SIG undefined FUN_141df7500(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141df7500(undefined8 *param_1)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined1 auVar3 [13];
  undefined1 auVar4 [13];
  undefined8 uVar5;
  uint5 uVar6;
  unkbyte9 Var7;
  undefined1 auVar8 [13];
  undefined1 auVar9 [13];
  undefined1 auVar10 [16];
  ushort uVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined2 uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  ushort uVar20;
  int iVar21;
  undefined2 *puVar22;
  ushort uVar23;
  longlong lVar24;
  longlong lVar25;
  undefined8 *puVar26;
  int iVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  byte bVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auStack_1a8 [32];
  uint *local_188;
  undefined4 local_180;
  undefined8 *local_178;
  undefined8 local_170;
  ulonglong local_168;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float local_134;
  float local_130;
  undefined4 local_12c;
  float local_128;
  float local_124;
  float local_120;
  undefined4 local_11c;
  float local_118;
  float local_114;
  float local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_144e8a438;
  local_168 = 0;
  FStaticMeshVertexBuffer::FStaticMeshVertexBuffer(param_1 + 6);
  FUN_1426f5920(param_1 + 0x23);
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined2 *)(param_1 + 0x46) = 0;
  local_188 = (uint *)0x0;
  local_180 = 0;
  local_178 = (undefined8 *)0x0;
  local_170 = 1;
  puVar13 = (undefined8 *)FUN_141df72c0(&local_138,&local_188);
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<92,4>_>,TSizedDefaultAllocator<32>_>::
  ResizeGrow(&local_178,0);
  puVar26 = local_178;
  uVar5 = puVar13[1];
  local_188 = (uint *)0x0;
  local_180 = 0;
  *local_178 = *puVar13;
  local_178[1] = uVar5;
  uVar5 = puVar13[3];
  local_178[2] = puVar13[2];
  local_178[3] = uVar5;
  uVar5 = puVar13[5];
  local_178[4] = puVar13[4];
  local_178[5] = uVar5;
  uVar5 = puVar13[7];
  local_178[6] = puVar13[6];
  local_178[7] = uVar5;
  uVar5 = puVar13[9];
  local_178[8] = puVar13[8];
  local_178[9] = uVar5;
  local_178[10] = puVar13[10];
  *(undefined4 *)(local_178 + 0xb) = *(undefined4 *)(puVar13 + 0xb);
  puVar13 = (undefined8 *)FUN_141df72c0(&local_138,&local_188);
  lVar24 = (longlong)(int)local_170;
  iVar27 = (int)local_170 + 1;
  if (local_170._4_4_ < iVar27) {
    uVar19 = local_170 & 0xffffffff;
    local_170._0_4_ = iVar27;
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<92,4>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(&local_178,uVar19);
    puVar26 = local_178;
    iVar27 = (int)local_170;
  }
  local_170._0_4_ = iVar27;
  iVar12 = local_170._4_4_;
  iVar27 = (int)local_170;
  uVar5 = puVar13[1];
  local_188 = (uint *)0x0;
  lVar24 = lVar24 * 0x5c;
  local_180 = 0;
  *(undefined8 *)(lVar24 + (longlong)puVar26) = *puVar13;
  ((undefined8 *)(lVar24 + (longlong)puVar26))[1] = uVar5;
  uVar5 = puVar13[3];
  puVar1 = (undefined8 *)(lVar24 + 0x10 + (longlong)puVar26);
  *puVar1 = puVar13[2];
  puVar1[1] = uVar5;
  uVar5 = puVar13[5];
  puVar1 = (undefined8 *)(lVar24 + 0x20 + (longlong)puVar26);
  *puVar1 = puVar13[4];
  puVar1[1] = uVar5;
  uVar5 = puVar13[7];
  puVar1 = (undefined8 *)(lVar24 + 0x30 + (longlong)puVar26);
  *puVar1 = puVar13[6];
  puVar1[1] = uVar5;
  uVar5 = puVar13[9];
  puVar1 = (undefined8 *)(lVar24 + 0x40 + (longlong)puVar26);
  *puVar1 = puVar13[8];
  puVar1[1] = uVar5;
  *(undefined8 *)(lVar24 + 0x50 + (longlong)puVar26) = puVar13[10];
  *(undefined4 *)(lVar24 + 0x58 + (longlong)puVar26) = *(undefined4 *)(puVar13 + 0xb);
  puVar13 = (undefined8 *)FUN_141df72c0(&local_138,&local_188);
  local_170._0_4_ = iVar27 + 1;
  if (iVar12 < (int)local_170) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<92,4>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(&local_178,iVar27);
    puVar26 = local_178;
    iVar12 = local_170._4_4_;
  }
  iVar21 = (int)local_170;
  uVar5 = puVar13[1];
  lVar24 = (longlong)iVar27 * 0x5c;
  local_188 = (uint *)0x0;
  local_180 = 0;
  *(undefined8 *)(lVar24 + (longlong)puVar26) = *puVar13;
  ((undefined8 *)(lVar24 + (longlong)puVar26))[1] = uVar5;
  uVar5 = puVar13[3];
  puVar1 = (undefined8 *)(lVar24 + 0x10 + (longlong)puVar26);
  *puVar1 = puVar13[2];
  puVar1[1] = uVar5;
  uVar5 = puVar13[5];
  puVar1 = (undefined8 *)(lVar24 + 0x20 + (longlong)puVar26);
  *puVar1 = puVar13[4];
  puVar1[1] = uVar5;
  uVar5 = puVar13[7];
  puVar1 = (undefined8 *)(lVar24 + 0x30 + (longlong)puVar26);
  *puVar1 = puVar13[6];
  puVar1[1] = uVar5;
  uVar5 = puVar13[9];
  puVar1 = (undefined8 *)(lVar24 + 0x40 + (longlong)puVar26);
  *puVar1 = puVar13[8];
  puVar1[1] = uVar5;
  *(undefined8 *)(lVar24 + 0x50 + (longlong)puVar26) = puVar13[10];
  *(undefined4 *)(lVar24 + 0x58 + (longlong)puVar26) = *(undefined4 *)(puVar13 + 0xb);
  puVar13 = (undefined8 *)FUN_141df72c0(&local_138,&local_188);
  iVar27 = iVar21 + 1;
  local_170 = CONCAT44(local_170._4_4_,iVar27);
  if (iVar12 < iVar27) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<92,4>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(&local_178,iVar21);
    puVar26 = local_178;
    iVar27 = (int)local_170;
  }
  uVar5 = puVar13[1];
  lVar24 = (longlong)iVar21 * 0x5c;
  *(undefined8 *)(lVar24 + (longlong)puVar26) = *puVar13;
  ((undefined8 *)(lVar24 + (longlong)puVar26))[1] = uVar5;
  uVar5 = puVar13[3];
  puVar1 = (undefined8 *)(lVar24 + 0x10 + (longlong)puVar26);
  *puVar1 = puVar13[2];
  puVar1[1] = uVar5;
  uVar5 = puVar13[5];
  puVar1 = (undefined8 *)(lVar24 + 0x20 + (longlong)puVar26);
  *puVar1 = puVar13[4];
  puVar1[1] = uVar5;
  uVar5 = puVar13[7];
  puVar1 = (undefined8 *)(lVar24 + 0x30 + (longlong)puVar26);
  *puVar1 = puVar13[6];
  puVar1[1] = uVar5;
  uVar5 = puVar13[9];
  puVar1 = (undefined8 *)(lVar24 + 0x40 + (longlong)puVar26);
  *puVar1 = puVar13[8];
  puVar1[1] = uVar5;
  *(undefined8 *)(lVar24 + 0x50 + (longlong)puVar26) = puVar13[10];
  *(undefined4 *)(lVar24 + 0x58 + (longlong)puVar26) = *(undefined4 *)(puVar13 + 0xb);
  FPositionVertexBuffer::Init(param_1 + 0x23,iVar27,1);
  FStaticMeshVertexBuffer::Init(param_1 + 6,iVar27,1,1);
  if (0 < iVar27) {
    local_188 = (uint *)(puVar26 + 2);
    uVar19 = 0;
    iVar27 = (int)local_170;
    uVar23 = (ushort)local_168;
    uVar20 = (ushort)local_168;
    do {
      auVar10 = _DAT_144101760;
      iVar21 = (int)uVar19;
      iVar12 = *(int *)(param_1 + 0x2d);
      lVar24 = param_1[0x2c];
      *(undefined8 *)((ulonglong)(uint)(iVar21 * iVar12) + lVar24) = *(undefined8 *)(local_188 + -4)
      ;
      *(uint *)((ulonglong)(uint)(iVar21 * iVar12) + 8 + lVar24) = local_188[-2];
      uVar17 = local_188[0x10];
      lVar24 = param_1[0x1e];
      bVar33 = (byte)(uVar17 >> 0x18);
      auVar4[0xc] = bVar33;
      auVar4._0_12_ = ZEXT712(0);
      uVar6 = CONCAT32(auVar4._10_3_,(ushort)(byte)(uVar17 >> 0x10));
      auVar8._5_8_ = 0;
      auVar8._0_5_ = uVar6;
      Var7 = CONCAT72(SUB137(auVar8 << 0x40,6),(ushort)(byte)(uVar17 >> 8));
      auVar30._0_4_ = uVar17 & 0xff;
      auVar30._4_9_ = Var7;
      auVar30._13_3_ = 0;
      auVar29._0_4_ = -(uint)(0x7f < auVar30._0_4_);
      auVar29._4_4_ = -(uint)(0x7f < (uint)Var7);
      auVar29._8_4_ = -(uint)(0x7f < (int)uVar6);
      auVar29._12_4_ = -(uint)(0x7f < bVar33);
      auVar30 = auVar29 & auVar10 | auVar30;
      uVar17 = local_188[0xf];
      fVar34 = (float)auVar30._0_4_ * 0.007874016;
      fVar35 = (float)auVar30._4_4_ * 0.007874016;
      fVar36 = (float)auVar30._8_4_ * 0.007874016;
      fStack_13c = (float)auVar30._12_4_ * 0.007874016;
      auVar3[0xc] = (char)(uVar17 >> 0x18);
      auVar3._0_12_ = ZEXT712(0);
      uVar6 = CONCAT32(auVar3._10_3_,(ushort)(byte)(uVar17 >> 0x10));
      auVar9._5_8_ = 0;
      auVar9._0_5_ = uVar6;
      Var7 = CONCAT72(SUB137(auVar9 << 0x40,6),(ushort)(byte)(uVar17 >> 8));
      auVar32._0_4_ = uVar17 & 0xff;
      auVar32._4_9_ = Var7;
      auVar32._13_3_ = 0;
      auVar31._0_4_ = -(uint)(0x7f < auVar32._0_4_);
      auVar31._4_4_ = -(uint)(0x7f < (uint)Var7);
      auVar31._8_4_ = -(uint)(0x7f < (int)uVar6);
      auVar31._12_4_ = -(uint)(0x7f < (uint3)(auVar3._10_3_ >> 0x10));
      auVar32 = auVar31 & auVar10 | auVar32;
      local_158 = (float)auVar32._0_4_ * 0.007874016;
      fStack_154 = (float)auVar32._4_4_ * 0.007874016;
      fStack_150 = (float)auVar32._8_4_ * 0.007874016;
      fStack_14c = (float)auVar32._12_4_ * 0.007874016;
      local_124 = (float)(int)(char)bVar33 * 0.007843138 - 1.0;
      local_128 = (fVar35 * fStack_150 - fVar36 * fStack_154) * local_124;
      local_120 = (fVar34 * fStack_154 - fVar35 * local_158) * local_124;
      local_124 = (fVar36 * local_158 - fVar34 * fStack_150) * local_124;
      local_148 = fVar34;
      fStack_144 = fVar35;
      fStack_140 = fVar36;
      local_138 = local_158;
      local_134 = fStack_154;
      local_130 = fStack_150;
      local_118 = fVar34;
      local_114 = fVar35;
      local_110 = fVar36;
      if (*(char *)((longlong)param_1 + 0x111) == '\0') {
        iVar12 = (int)ROUND(local_158 * 127.0 + local_158 * 127.0 + 0.5) >> 1;
        if (iVar12 < -0x80) {
          iVar15 = -0x80;
        }
        else {
          iVar15 = 0x7f;
          if (iVar12 < 0x7f) {
            iVar15 = iVar12;
          }
        }
        *(char *)(lVar24 + uVar19 * 8) = (char)iVar15;
        iVar12 = (int)ROUND(fStack_154 * 127.0 + fStack_154 * 127.0 + 0.5) >> 1;
        if (iVar12 < -0x80) {
          iVar15 = -0x80;
        }
        else {
          iVar15 = 0x7f;
          if (iVar12 < 0x7f) {
            iVar15 = iVar12;
          }
        }
        *(char *)(lVar24 + 1 + uVar19 * 8) = (char)iVar15;
        iVar12 = (int)ROUND(fStack_150 * 127.0 + fStack_150 * 127.0 + 0.5) >> 1;
        if (iVar12 < -0x80) {
          iVar15 = -0x80;
        }
        else {
          iVar15 = 0x7f;
          if (iVar12 < 0x7f) {
            iVar15 = iVar12;
          }
        }
        *(char *)(lVar24 + 2 + uVar19 * 8) = (char)iVar15;
        *(undefined1 *)(lVar24 + 3 + uVar19 * 8) = 0x7f;
        local_12c = 0;
        local_11c = 0;
        local_10c = 0;
        local_108 = 0;
        uStack_100 = 0x3f80000000000000;
        fVar28 = (float)FMatrix::Determinant(&local_138);
        if (0.0 <= fVar28) {
          fVar28 = 254.5;
        }
        else {
          fVar28 = -253.5;
        }
        iVar12 = (int)ROUND(fVar34 * 127.0 + fVar34 * 127.0 + 0.5) >> 1;
        if (iVar12 < -0x80) {
          iVar15 = -0x80;
        }
        else {
          iVar15 = 0x7f;
          if (iVar12 < 0x7f) {
            iVar15 = iVar12;
          }
        }
        *(char *)(lVar24 + 4 + uVar19 * 8) = (char)iVar15;
        iVar12 = (int)ROUND(fVar35 * 127.0 + fVar35 * 127.0 + 0.5) >> 1;
        if (iVar12 < -0x80) {
          iVar15 = -0x80;
        }
        else {
          iVar15 = 0x7f;
          if (iVar12 < 0x7f) {
            iVar15 = iVar12;
          }
        }
        *(char *)(lVar24 + 5 + uVar19 * 8) = (char)iVar15;
        iVar12 = (int)ROUND(fVar36 * 127.0 + fVar36 * 127.0 + 0.5) >> 1;
        if (iVar12 < -0x80) {
          iVar15 = -0x80;
        }
        else {
          iVar15 = 0x7f;
          if (iVar12 < 0x7f) {
            iVar15 = iVar12;
          }
        }
        *(char *)(lVar24 + 6 + uVar19 * 8) = (char)iVar15;
        iVar12 = (int)ROUND(fVar28) >> 1;
        if (iVar12 < -0x80) {
          iVar15 = -0x80;
        }
        else {
          iVar15 = 0x7f;
          if (iVar12 < 0x7f) {
            iVar15 = iVar12;
          }
        }
        *(char *)(lVar24 + 7 + uVar19 * 8) = (char)iVar15;
      }
      else {
        puVar22 = (undefined2 *)(uVar19 * 0x10 + lVar24);
        iVar12 = (int)ROUND(local_158 * 32767.0 + local_158 * 32767.0 + 0.5) >> 1;
        if (iVar12 < -0x8000) {
          uVar14 = 0x8000;
        }
        else {
          uVar14 = 0x7fff;
          if (iVar12 < 0x7fff) {
            uVar14 = (undefined2)iVar12;
          }
        }
        *puVar22 = uVar14;
        iVar12 = (int)ROUND(fStack_154 * 32767.0 + fStack_154 * 32767.0 + 0.5) >> 1;
        if (iVar12 < -0x8000) {
          iVar21 = -0x8000;
        }
        else {
          iVar21 = 0x7fff;
          if (iVar12 < 0x7fff) {
            iVar21 = iVar12;
          }
        }
        puVar22[1] = (short)iVar21;
        iVar12 = (int)ROUND(fStack_150 * 32767.0 + fStack_150 * 32767.0 + 0.5) >> 1;
        if (iVar12 < -0x8000) {
          iVar21 = -0x8000;
        }
        else {
          iVar21 = 0x7fff;
          if (iVar12 < 0x7fff) {
            iVar21 = iVar12;
          }
        }
        puVar22[2] = (short)iVar21;
        puVar22[3] = 0x7fff;
        local_12c = 0;
        local_11c = 0;
        local_10c = 0;
        local_108 = 0;
        uStack_100 = 0x3f80000000000000;
        fVar28 = (float)FMatrix::Determinant(&local_138);
        if (0.0 <= fVar28) {
          fVar28 = 65534.5;
        }
        else {
          fVar28 = -65533.5;
        }
        iVar12 = (int)ROUND(fVar34 * 32767.0 + fVar34 * 32767.0 + 0.5) >> 1;
        if (iVar12 < -0x8000) {
          iVar21 = -0x8000;
        }
        else {
          iVar21 = 0x7fff;
          if (iVar12 < 0x7fff) {
            iVar21 = iVar12;
          }
        }
        puVar22[4] = (short)iVar21;
        iVar12 = (int)ROUND(fVar35 * 32767.0 + fVar35 * 32767.0 + 0.5) >> 1;
        if (iVar12 < -0x8000) {
          iVar21 = -0x8000;
        }
        else {
          iVar21 = 0x7fff;
          if (iVar12 < 0x7fff) {
            iVar21 = iVar12;
          }
        }
        puVar22[5] = (short)iVar21;
        iVar12 = (int)ROUND(fVar36 * 32767.0 + fVar36 * 32767.0 + 0.5) >> 1;
        if (iVar12 < -0x8000) {
          iVar21 = -0x8000;
        }
        else {
          iVar21 = 0x7fff;
          if (iVar12 < 0x7fff) {
            iVar21 = iVar12;
          }
        }
        puVar22[6] = (short)iVar21;
        iVar12 = (int)ROUND(fVar28) >> 1;
        iVar21 = (int)local_168;
        if (iVar12 < -0x8000) {
          puVar22[7] = 0x8000;
        }
        else {
          iVar15 = 0x7fff;
          if (iVar12 < 0x7fff) {
            iVar15 = iVar12;
          }
          puVar22[7] = (short)iVar15;
        }
      }
      lVar24 = param_1[0x1f];
      lVar25 = *(uint *)(param_1 + 0x21) * uVar19;
      uVar17 = local_188[-1];
      uVar18 = *local_188;
      if (*(char *)(param_1 + 0x22) == '\0') {
        uVar2 = (ushort)(uVar17 >> 0x10);
        uVar16 = uVar17 >> 0x17 & 0xff;
        if (uVar16 < 0x71) {
          uVar23 = uVar2 & 0x8000;
          iVar12 = -uVar16 + 0x7e;
          if ((iVar12 < 0x19) &&
             (uVar17 = uVar17 & 0x7fffff | 0x800000,
             uVar23 = (ushort)(uVar17 >> ((byte)iVar12 & 0x1f)) & 0x3ff | uVar23,
             (uVar17 >> ((char)-uVar16 + 0x7dU & 0x1f) & 1) != 0)) {
            uVar23 = uVar23 + 1;
          }
        }
        else if (uVar16 < 0x8f) {
          uVar23 = uVar2 & 0x8000 |
                   (ushort)(uVar17 >> 0xd) & 0x3ff | ((uVar2 >> 7) - 0x10 & 0x1f) << 10;
        }
        else {
          uVar23 = uVar2 & 0x8000 | uVar23 & 0x7bff | 0x7bff;
        }
        *(ushort *)(lVar24 + lVar25 * 4) = uVar23;
        uVar2 = (ushort)(uVar18 >> 0x10);
        uVar17 = uVar18 >> 0x17 & 0xff;
        if (uVar17 < 0x71) {
          uVar20 = uVar2 & 0x8000;
          iVar12 = -uVar17 + 0x7e;
          if ((iVar12 < 0x19) &&
             (uVar18 = uVar18 & 0x7fffff | 0x800000,
             uVar20 = (ushort)(uVar18 >> ((byte)iVar12 & 0x1f)) & 0x3ff | uVar20,
             (uVar18 >> ((char)-uVar17 + 0x7dU & 0x1f) & 1) != 0)) {
            uVar20 = uVar20 + 1;
          }
        }
        else {
          if (uVar17 < 0x8f) {
            uVar11 = ((uVar2 >> 7) - 0x10 & 0x1f) << 10 | (ushort)(uVar18 >> 0xd) & 0x3ff;
            uVar20 = uVar2 & 0x8000;
          }
          else {
            uVar20 = uVar2 & 0x8000 | uVar20 & 0x7bff;
            uVar11 = 0x7bff;
          }
          uVar20 = uVar20 | uVar11;
        }
        *(ushort *)(lVar24 + 2 + lVar25 * 4) = uVar20;
      }
      else {
        *(uint *)(lVar24 + lVar25 * 8) = uVar17;
        *(uint *)(lVar24 + 4 + lVar25 * 8) = uVar18;
      }
      uVar19 = (ulonglong)(iVar21 + 1U);
      local_188 = local_188 + 0x17;
      puVar26 = local_178;
      local_168 = uVar19;
    } while ((int)(iVar21 + 1U) < iVar27);
  }
  if (puVar26 != (undefined8 *)0x0) {
    FMemory::Free(puVar26);
  }
  return param_1;
}



// FUNCTION 141df8040 FStaticStateResource body=177 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<0,3,1,7,0,0,2,0,7,0,0,0,8,8>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
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
  *param_1 = &PTR__scalar_deleting_destructor__144e8b2c0;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x7010300;
    local_14 = 0x20000;
    local_10 = 7;
    local_c = 0x808;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141df8100 FStaticStateResource body=170 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<0,4,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
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
  *param_1 = &PTR__scalar_deleting_destructor__144e8b280;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x7000400;
    local_10 = 7;
    local_c = 0xffff;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141df81b0 FStaticStateResource body=177 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<0,7,1,7,0,0,2,0,7,0,0,0,8,8>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
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
  *param_1 = &PTR__scalar_deleting_destructor__144e8b300;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x7010700;
    local_14 = 0x20000;
    local_10 = 7;
    local_c = 0x808;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141df8270 FUN_141df8270 body=118 status=ok
// SIG undefined FUN_141df8270(void)

undefined8 * FUN_141df8270(undefined8 *param_1,undefined1 param_2)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e8ae10;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xce) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined2 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe6) = param_2;
  return param_1;
}



// FUNCTION 141df82f0 FUN_141df82f0 body=305 status=ok
// SIG undefined FUN_141df82f0(void)

undefined8 * FUN_141df82f0(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e8ae10;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xce) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined2 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe6) = param_3;
  FUN_141cdf500(param_2);
  FShaderParameter::Bind(param_1 + 0x1a,*(undefined8 *)(param_2 + 0x18),L"LowResColorTexelSize",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xd6,*(undefined8 *)(param_2 + 0x18),L"LowResDepthTexture",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xda,*(undefined8 *)(param_2 + 0x18),L"LowResColorTexture",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xde,*(undefined8 *)(param_2 + 0x18),L"BilinearClampedSampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xe2,*(undefined8 *)(param_2 + 0x18),L"PointClampedSampler",0);
  return param_1;
}



// FUNCTION 141df8430 FUN_141df8430 body=1536 status=ok
// SIG undefined FUN_141df8430(void)

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x000141df865e */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

longlong *
FUN_141df8430(longlong *param_1,longlong *param_2,undefined8 param_3,WriteBytesMem *param_4,
             undefined8 param_5,int param_6)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  DWORD DVar5;
  uchar *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined *local_38;
  undefined4 local_30;
  
  plVar13 = (longlong *)0x0;
  FUN_141b279e0();
  puVar6 = AK::WriteBytesMem::Bytes(param_4);
  uVar7 = (**(code **)(*param_2 + 0x40))(param_2);
  lVar8 = FUN_142591c80(puVar6,uVar7);
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  iVar4 = (**(code **)(*(longlong *)param_4 + 0x178))(param_4);
  cVar3 = FUN_141ed13a0((&DAT_1464c9c48)[param_6]);
  if (cVar3 != '\0') {
    lVar9 = (**(code **)(*param_2 + 0x40))(param_2);
    cVar3 = (**(code **)(lVar9 + 0x48))();
    if ((cVar3 != '\0') && (iVar4 != 0)) {
      local_30 = 0;
      local_38 = &DAT_146aa9c20;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(lVar8 + 0x38,&param_6,&local_38);
      plVar12 = plVar13;
      if (param_6 != -1) {
        plVar12 = (longlong *)((longlong)param_6 * 0x20 + *(longlong *)(lVar8 + 0x38));
      }
      plVar11 = plVar12 + 2;
      if (plVar12 == (longlong *)0x0) {
        plVar11 = plVar13;
      }
      if ((plVar11 == (longlong *)0x0) || (*plVar11 == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      local_30 = 0;
      local_38 = &DAT_146aa9d70;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(lVar8 + 0x38,&param_6,&local_38);
      plVar12 = plVar13;
      if (param_6 != -1) {
        plVar12 = (longlong *)((longlong)param_6 * 0x20 + *(longlong *)(lVar8 + 0x38));
      }
      plVar11 = plVar12 + 2;
      if (plVar12 == (longlong *)0x0) {
        plVar11 = plVar13;
      }
      if ((plVar11 == (longlong *)0x0) || (*plVar11 == 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar1) {
        local_30 = 0;
        local_38 = &DAT_146aa9c20;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(lVar8 + 0x38,&param_6,&local_38);
        lVar9 = _DAT_00000000;
        if (param_6 != -1) {
          lVar9 = (longlong)param_6 * 0x20 + *(longlong *)(lVar8 + 0x38);
          plVar12 = (longlong *)(lVar9 + 0x10);
          if (lVar9 == 0) {
            plVar12 = plVar13;
          }
          lVar9 = *plVar12;
        }
      }
      else {
        lVar9 = 0;
      }
      param_1[9] = lVar9;
      if (bVar2) {
        local_30 = 0;
        local_38 = &DAT_146aa9d70;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(lVar8 + 0x38,&param_6,&local_38);
        if (param_6 == -1) {
          param_1[10] = _DAT_00000000;
        }
        else {
          lVar9 = (longlong)param_6 * 0x20 + *(longlong *)(lVar8 + 0x38);
          plVar12 = (longlong *)(lVar9 + 0x10);
          if (lVar9 == 0) {
            plVar12 = plVar13;
          }
          param_1[10] = *plVar12;
        }
      }
      else {
        param_1[10] = 0;
      }
      goto LAB_141df884a;
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146aaaf68) && (_Init_thread_header(&DAT_146aaaf68), DAT_146aaaf68 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar11 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.ShaderPipelines");
    plVar12 = plVar13;
    if (plVar11 != (longlong *)0x0) {
      plVar12 = (longlong *)(**(code **)(*plVar11 + 0x38))(plVar11);
    }
    DAT_146aaaf60 = plVar12;
    _Init_thread_footer(&DAT_146aaaf68);
  }
  plVar12 = DAT_146aaaf60;
  plVar11 = plVar13;
  if (DAT_146aaaf60 != (longlong *)0x0) {
    cVar3 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar5 = GetCurrentThreadId();
      plVar10 = (longlong *)&DAT_00000004;
      if (DVar5 == DAT_1468c21c0) goto LAB_141df86de;
    }
    else {
LAB_141df86de:
      plVar10 = plVar13;
    }
    if (*(int *)((longlong)plVar10 + (longlong)plVar12) != 0) {
      if (*(int *)(lVar8 + 0x90) != *(int *)(lVar8 + 0xbc)) {
        lVar9 = *(longlong *)(lVar8 + 200);
        if (*(longlong *)(lVar8 + 200) == 0) {
          lVar9 = lVar8 + 0xc0;
        }
        iVar4 = *(int *)(lVar9 + ((longlong)*(int *)(lVar8 + 0xd0) - 1U & (longlong)DAT_146aaa078) *
                                 4);
        if (iVar4 != -1) {
          do {
            plVar12 = (longlong *)(*(longlong *)(lVar8 + 0x88) + (longlong)iVar4 * 0x18);
            if (*(undefined **)(*(longlong *)(lVar8 + 0x88) + (longlong)iVar4 * 0x18) ==
                &DAT_146aaa010) {
              if (iVar4 != -1) goto LAB_141df8763;
              break;
            }
            iVar4 = (int)plVar12[2];
          } while (iVar4 != -1);
        }
      }
      plVar12 = plVar13;
LAB_141df8763:
      plVar10 = plVar12 + 1;
      if (plVar12 == (longlong *)0x0) {
        plVar10 = plVar13;
      }
      if (plVar10 != (longlong *)0x0) {
        plVar11 = (longlong *)*plVar10;
      }
    }
  }
  param_1[0xb] = (longlong)plVar11;
  if (plVar11 != (longlong *)0x0) {
    lVar9 = plVar11[5];
    if (((((lVar9 == 0) || (*(undefined **)(lVar9 + 0x90) != &DAT_146aa9ad0)) &&
         ((lVar9 = plVar11[1], lVar9 == 0 || (*(undefined **)(lVar9 + 0x90) != &DAT_146aa9ad0)))) &&
        ((lVar9 = plVar11[4], lVar9 == 0 || (*(undefined **)(lVar9 + 0x90) != &DAT_146aa9ad0)))) &&
       ((lVar9 = plVar11[2], lVar9 == 0 ||
        ((*(undefined **)(lVar9 + 0x90) != &DAT_146aa9ad0 &&
         ((lVar9 = plVar11[3], lVar9 == 0 || (*(undefined **)(lVar9 + 0x90) != &DAT_146aa9ad0)))))))
       ) {
      lVar9 = 0;
    }
    param_1[7] = lVar9;
    lVar9 = plVar11[5];
    if ((((lVar9 == 0) || (*(undefined **)(lVar9 + 0x90) != &DAT_146aa9ec0)) &&
        ((lVar9 = plVar11[1], lVar9 == 0 || (*(undefined **)(lVar9 + 0x90) != &DAT_146aa9ec0)))) &&
       (((lVar9 = plVar11[4], lVar9 == 0 || (*(undefined **)(lVar9 + 0x90) != &DAT_146aa9ec0)) &&
        ((lVar9 = plVar11[2], lVar9 == 0 ||
         ((*(undefined **)(lVar9 + 0x90) != &DAT_146aa9ec0 &&
          ((lVar9 = plVar11[3], lVar9 == 0 || (*(undefined **)(lVar9 + 0x90) != &DAT_146aa9ec0))))))
        )))) {
      lVar9 = 0;
    }
    param_1[8] = lVar9;
  }
LAB_141df884a:
  if (param_1[7] == 0) {
    plVar12 = (longlong *)(lVar8 + 0x38);
    local_38 = &DAT_146aa9ad0;
    local_30 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar12,&param_6,&local_38);
    plVar11 = plVar13;
    if (param_6 != -1) {
      plVar11 = (longlong *)((longlong)param_6 * 0x20 + *plVar12);
    }
    plVar10 = plVar11 + 2;
    if (plVar11 == (longlong *)0x0) {
      plVar10 = plVar13;
    }
    if ((plVar10 == (longlong *)0x0) || (*plVar10 == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    local_30 = 0;
    local_38 = &DAT_146aa9ec0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar12,&param_6,&local_38);
    plVar11 = plVar13;
    if (param_6 != -1) {
      plVar11 = (longlong *)((longlong)param_6 * 0x20 + *plVar12);
    }
    plVar10 = plVar11 + 2;
    if (plVar11 == (longlong *)0x0) {
      plVar10 = plVar13;
    }
    if ((plVar10 == (longlong *)0x0) || (*plVar10 == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar1) {
      local_38 = &DAT_146aa9ad0;
      local_30 = 0;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(plVar12,&param_6,&local_38);
      lVar8 = _DAT_00000000;
      if (param_6 != -1) {
        lVar8 = (longlong)param_6 * 0x20 + *plVar12;
        plVar11 = (longlong *)(lVar8 + 0x10);
        if (lVar8 == 0) {
          plVar11 = plVar13;
        }
        lVar8 = *plVar11;
      }
    }
    else {
      lVar8 = 0;
    }
    param_1[7] = lVar8;
    if (bVar2) {
      local_38 = &DAT_146aa9ec0;
      local_30 = 0;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(plVar12,&param_6,&local_38);
      plVar11 = plVar13;
      if (param_6 != -1) {
        plVar11 = (longlong *)((longlong)param_6 * 0x20 + *plVar12);
      }
      plVar12 = plVar11 + 2;
      if (plVar11 == (longlong *)0x0) {
        plVar12 = plVar13;
      }
      plVar13 = (longlong *)*plVar12;
    }
    param_1[8] = (longlong)plVar13;
    *param_1 = lVar8;
  }
  else {
    *param_1 = param_1[7];
  }
  return param_1;
}



// FUNCTION 141df8a30 FUN_141df8a30 body=374 status=ok
// SIG undefined FUN_141df8a30(void)

undefined8 * FUN_141df8a30(undefined8 *param_1,longlong param_2)

{
  FUN_141aaf710();
  *param_1 = &PTR_FUN_144e8a738;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x156) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x166) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x176) = 0;
  *(undefined2 *)((longlong)param_1 + 0x17a) = 0;
  FShaderParameter::Bind(param_1 + 0x2a,*(undefined8 *)(param_2 + 0x18),L"PreviousLocalToWorld",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x156,*(undefined8 *)(param_2 + 0x18),
             L"GPUSkinCachePreviousPositionBuffer",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x15a,*(undefined8 *)(param_2 + 0x18),L"PrevTransform0",0);
  FShaderParameter::Bind(param_1 + 0x2c,*(undefined8 *)(param_2 + 0x18),L"PrevTransform1",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x166,*(undefined8 *)(param_2 + 0x18),L"PrevTransform2",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x16c,*(undefined8 *)(param_2 + 0x18),L"PrevTransformBuffer",0);
  FShaderParameter::Bind(param_1 + 0x2e,*(undefined8 *)(param_2 + 0x18),L"InstancedEyeIndex",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x176,*(undefined8 *)(param_2 + 0x18),L"bIsInstancedStereo",0);
  FShaderUniformBufferParameter::Bind
            (param_1 + 0x22,*(undefined8 *)(param_2 + 0x18),DAT_146a632c0,0);
  return param_1;
}



// FUNCTION 141df8bb0 FVolumetricFogFinalIntegrationCS body=108 status=ok
// SIG undefined FVolumetricFogFinalIntegrationCS(void)

undefined8 *
FVolumetricFogFinalIntegrationCS::FVolumetricFogFinalIntegrationCS
          (undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e8b0b8;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined2 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)((longlong)param_1 + 0xea) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  *(undefined2 *)(param_1 + 0x21) = 0;
  FVolumetricFogIntegrationParameters::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18));
  return param_1;
}



// FUNCTION 141df8c20 FVolumetricFogFinalIntegrationCS body=117 status=ok
// SIG undefined FVolumetricFogFinalIntegrationCS(void)

undefined8 * FVolumetricFogFinalIntegrationCS::FVolumetricFogFinalIntegrationCS(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e8b0b8;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined2 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)((longlong)param_1 + 0xea) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  *(undefined2 *)(param_1 + 0x21) = 0;
  return param_1;
}



// FUNCTION 141df8ca0 FVolumetricFogMaterialSetupCS body=240 status=ok
// SIG undefined FVolumetricFogMaterialSetupCS(void)

undefined8 *
FVolumetricFogMaterialSetupCS::FVolumetricFogMaterialSetupCS(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e8ac10;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined2 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)((longlong)param_1 + 0xea) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  *(undefined2 *)(param_1 + 0x21) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined2 *)((longlong)param_1 + 0x11c) = 0;
  FVolumetricFogIntegrationParameters::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18));
  FShaderParameter::Bind
            ((longlong)param_1 + 0x10c,*(undefined8 *)(param_2 + 0x18),L"GlobalAlbedo",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x112,*(undefined8 *)(param_2 + 0x18),L"GlobalEmissive",0);
  FShaderParameter::Bind(param_1 + 0x23,*(undefined8 *)(param_2 + 0x18),L"GlobalExtinctionScale",0);
  return param_1;
}



// FUNCTION 141df8d90 FVolumetricFogMaterialSetupCS body=138 status=ok
// SIG undefined FVolumetricFogMaterialSetupCS(void)

undefined8 * FVolumetricFogMaterialSetupCS::FVolumetricFogMaterialSetupCS(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e8ac10;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined2 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)((longlong)param_1 + 0xea) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  *(undefined2 *)(param_1 + 0x21) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined2 *)((longlong)param_1 + 0x11c) = 0;
  return param_1;
}



// FUNCTION 141df8e20 FUN_141df8e20 body=232 status=ok
// SIG undefined FUN_141df8e20(void)

undefined8 * FUN_141df8e20(undefined8 *param_1,longlong param_2)

{
  FUN_141aaf710();
  *param_1 = &PTR_FUN_144e8a568;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x154) = 0;
  *(undefined4 *)((longlong)param_1 + 0x156) = 0;
  *(undefined2 *)((longlong)param_1 + 0x15a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x184) = 0;
  *(undefined1 *)((longlong)param_1 + 0x186) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1a4) = 0;
  FShaderParameter::Bind(param_1 + 0x2a,*(undefined8 *)(param_2 + 0x18),L"VoxelizationPassIndex",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x156,*(undefined8 *)(param_2 + 0x18),L"ViewToVolumeClip",0);
  FVolumetricFogIntegrationParameters::Bind
            ((undefined8 *)((longlong)param_1 + 0x15c),*(undefined8 *)(param_2 + 0x18));
  FShaderUniformBufferParameter::Bind
            (param_1 + 0x22,*(undefined8 *)(param_2 + 0x18),DAT_146a632c0,0);
  return param_1;
}



// FUNCTION 141df8f10 FUN_141df8f10 body=130 status=ok
// SIG undefined FUN_141df8f10(void)

undefined8 * FUN_141df8f10(undefined8 *param_1)

{
  FUN_141aaf7d0();
  *param_1 = &PTR_FUN_144e8a568;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x184) = 0;
  *(undefined1 *)((longlong)param_1 + 0x186) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1a4) = 0;
  return param_1;
}



// FUNCTION 141df8fa0 FUN_141df8fa0 body=134 status=ok
// SIG undefined FUN_141df8fa0(void)

undefined8 * FUN_141df8fa0(undefined8 *param_1,longlong param_2)

{
  FUN_141aaf710();
  *param_1 = &PTR_FUN_144e8a870;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined2 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  *(undefined2 *)(param_1 + 0x33) = 0;
  FVolumetricFogIntegrationParameters::Bind(param_1 + 0x2a,*(undefined8 *)(param_2 + 0x18));
  FShaderUniformBufferParameter::Bind
            (param_1 + 0x22,*(undefined8 *)(param_2 + 0x18),DAT_146a632c0,0);
  return param_1;
}



// FUNCTION 141df9030 FUN_141df9030 body=117 status=ok
// SIG undefined FUN_141df9030(void)

undefined8 * FUN_141df9030(undefined8 *param_1)

{
  FUN_141aaf7d0();
  *param_1 = &PTR_FUN_144e8a870;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined2 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  *(undefined2 *)(param_1 + 0x33) = 0;
  return param_1;
}



// FUNCTION 141df90b0 FUN_141df90b0 body=232 status=ok
// SIG undefined FUN_141df90b0(void)

undefined8 * FUN_141df90b0(undefined8 *param_1,longlong param_2)

{
  FUN_141aaf710();
  *param_1 = &PTR_FUN_144e8a4f8;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x154) = 0;
  *(undefined4 *)((longlong)param_1 + 0x156) = 0;
  *(undefined2 *)((longlong)param_1 + 0x15a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x184) = 0;
  *(undefined1 *)((longlong)param_1 + 0x186) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1a4) = 0;
  FShaderParameter::Bind(param_1 + 0x2a,*(undefined8 *)(param_2 + 0x18),L"VoxelizationPassIndex",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x156,*(undefined8 *)(param_2 + 0x18),L"ViewToVolumeClip",0);
  FVolumetricFogIntegrationParameters::Bind
            ((undefined8 *)((longlong)param_1 + 0x15c),*(undefined8 *)(param_2 + 0x18));
  FShaderUniformBufferParameter::Bind
            (param_1 + 0x22,*(undefined8 *)(param_2 + 0x18),DAT_146a632c0,0);
  return param_1;
}



// FUNCTION 141df91a0 FUN_141df91a0 body=130 status=ok
// SIG undefined FUN_141df91a0(void)

undefined8 * FUN_141df91a0(undefined8 *param_1)

{
  FUN_141aaf7d0();
  *param_1 = &PTR_FUN_144e8a4f8;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x184) = 0;
  *(undefined1 *)((longlong)param_1 + 0x186) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1a4) = 0;
  return param_1;
}



// FUNCTION 141df9230 FWriteToBoundingSphereVS body=241 status=ok
// SIG undefined FWriteToBoundingSphereVS(void)

undefined8 *
FWriteToBoundingSphereVS::FWriteToBoundingSphereVS(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e8acb0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined4 *)((longlong)param_1 + 0xce) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined2 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xfe) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined2 *)((longlong)param_1 + 0x11c) = 0;
  FShaderParameter::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18),L"MinZ",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xc6,*(undefined8 *)(param_2 + 0x18),L"ViewSpaceBoundingSphere",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xcc,*(undefined8 *)(param_2 + 0x18),L"ViewToVolumeClip",0);
  FVolumetricFogIntegrationParameters::Bind
            ((undefined8 *)((longlong)param_1 + 0xd4),*(undefined8 *)(param_2 + 0x18));
  return param_1;
}



// FUNCTION 141df9330 FWriteToBoundingSphereVS body=138 status=ok
// SIG undefined FWriteToBoundingSphereVS(void)

undefined8 * FWriteToBoundingSphereVS::FWriteToBoundingSphereVS(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e8acb0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined2 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xfe) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined2 *)((longlong)param_1 + 0x11c) = 0;
  return param_1;
}



// FUNCTION 141df93c0 operator<< body=222 status=ok
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
  FUN_1419e0b60(param_1,param_2 + 0x20);
  FUN_141ad3f10(param_2 + 0x24,param_1);
  FUN_1419e0a40(param_1,param_2 + 0x2c);
  FUN_1419e0a40(param_1,param_2 + 0x32);
  FUN_1419e0a40(param_1,param_2 + 0x38);
  FUN_1419e0a40(param_1,param_2 + 0x3e);
  FUN_1419e0a40(param_1,param_2 + 0x44);
  return param_1;
}



// FUNCTION 141df94a0 FUN_141df94a0 body=97 status=ok
// SIG undefined FUN_141df94a0(void)

undefined8 * FUN_141df94a0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e8b368;
  if (param_1[0xf] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xf] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 141df9510 `scalar_deleting_destructor' body=100 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGraphTask<`FScene::AddExponentialHeightFog'::`2'::EURCMacro_FAddFogCommand>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__144e8b358;
  if (param_1[0x18] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x18] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 141df9580 `scalar_deleting_destructor' body=100 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGraphTask<`FSkeletalMeshSceneProxy::UpdateMorphMaterialUsage_GameThread'::`23'::EURCMacro_UpdateSkelProxyLODSectionElementsCmd>
::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__144e8b1e0;
  if (param_1[0x10] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x10] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 141df95f0 FUN_141df95f0 body=97 status=ok
// SIG undefined FUN_141df95f0(void)

undefined8 * FUN_141df95f0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e8b200;
  if (param_1[0xf] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xf] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 141df9660 FUN_141df9660 body=97 status=ok
// SIG undefined FUN_141df9660(void)

undefined8 * FUN_141df9660(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e8b1c0;
  if (param_1[0xf] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xf] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 141df96d0 FUN_141df96d0 body=124 status=ok
// SIG undefined FUN_141df96d0(void)

undefined8 * FUN_141df96d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144e8b210;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xeb);
  if (param_1[0xe0] != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xca);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xc9);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x770);
  }
  return param_1;
}



// FUNCTION 141df9750 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e8b2c0;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141df97a0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e8b280;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141df97f0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e8b300;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141df9840 FUN_141df9840 body=72 status=ok
// SIG undefined FUN_141df9840(void)

undefined8 * FUN_141df9840(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_144e8b1d0;
  FUN_141d662d0(param_1,0);
  FParallelCommandListSet::~FParallelCommandListSet(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 141df9890 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FVelocityPassParallelCommandListSet::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e8b1f0;
  FUN_141d662d0(param_1,0);
  FParallelCommandListSet::~FParallelCommandListSet(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 141df98e0 FUN_141df98e0 body=845 status=ok
// SIG undefined FUN_141df98e0(void)

void FUN_141df98e0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
                  undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  void *_Src;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  int local_res8 [2];
  longlong local_res10;
  longlong local_148 [5];
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 local_84;
  longlong local_80;
  undefined4 local_78;
  undefined1 local_70 [56];
  
  local_res10 = param_2;
  TSet<TStaticMeshDrawList<FVelocityDrawingPolicy>::FDrawingPolicyLink,TStaticMeshDrawList<FVelocityDrawingPolicy>::FDrawingPolicyKeyFuncs,FDefaultSetAllocator>
  ::FindId(param_1 + 0x40,local_res8,param_4);
  iVar6 = 0;
  if ((local_res8[0] == -1) ||
     (plVar11 = (longlong *)((longlong)local_res8[0] * 0xe0 + *(longlong *)(param_1 + 0x40)),
     plVar11 == (longlong *)0x0)) {
    local_148[4] = *param_4;
    uStack_120 = param_4[1];
    local_118 = param_4[2];
    uStack_110 = param_4[3];
    local_148[0] = 0;
    local_148[1] = 0;
    local_108 = param_4[4];
    uStack_100 = param_4[5];
    local_148[2] = 0;
    local_148[3] = 0;
    local_f8 = param_4[6];
    uStack_f0 = param_4[7];
    local_98 = param_5;
    local_84 = 0xffffffff;
    local_e8 = param_4[8];
    uStack_e0 = param_4[9];
    local_78 = 0;
    local_d8 = param_4[10];
    uStack_d0 = param_4[0xb];
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_80 = param_1;
    puVar8 = (undefined8 *)FUN_141e00690(local_148 + 4,local_70);
    local_c8 = *puVar8;
    uStack_c0 = puVar8[1];
    local_b8 = puVar8[2];
    uStack_b0 = puVar8[3];
    local_a8 = puVar8[4];
    uStack_a0 = puVar8[5];
    FUN_141de7bc0(param_1 + 0x40,local_res8,local_148,0);
    TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
    ::
    ~TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
              (local_148 + 2);
    if (local_148[0] != 0) {
      FMemory::Free();
    }
    plVar11 = (longlong *)((longlong)local_res8[0] * 0xe0 + *(longlong *)(param_1 + 0x40));
    *(int *)((longlong)plVar11 + 0xc4) = local_res8[0];
    DAT_146a81050 =
         (ulonglong)(uint)(*(int *)((longlong)plVar11 + 0x1c) * 0x38) + 0xd8 +
         (ulonglong)(uint)(*(int *)((longlong)plVar11 + 0xc) << 2) + DAT_146a81050;
    iVar12 = *(int *)(param_1 + 0x38) + -1;
    if (0 < iVar12) {
      lVar10 = *(longlong *)(param_1 + 0x40);
      iVar13 = 0;
      do {
        iVar6 = (iVar12 + iVar13) / 2;
        lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar6 * 4) * 0xe0;
        uVar3 = *(ulonglong *)(lVar9 + 0x28 + lVar10);
        if (uVar3 < (ulonglong)plVar11[5]) {
LAB_141df9a96:
          iVar13 = iVar6 + 1;
          iVar6 = iVar12;
        }
        else if (uVar3 == plVar11[5]) {
          uVar3 = *(ulonglong *)(lVar9 + 0x30 + lVar10);
          if (uVar3 < (ulonglong)plVar11[6]) goto LAB_141df9a96;
          if (uVar3 == plVar11[6]) {
            uVar7 = *(uint *)(lVar9 + 0x50 + lVar10) & 1;
            if (uVar7 < (*(uint *)(plVar11 + 10) & 1)) goto LAB_141df9a96;
            if (uVar7 <= (*(uint *)(plVar11 + 10) & 1)) break;
          }
        }
        iVar12 = iVar6;
        iVar6 = iVar13;
        iVar13 = iVar6;
      } while (iVar6 < iVar12);
    }
    iVar12 = *(int *)(param_1 + 0x38);
    *(int *)(param_1 + 0x38) = iVar12 + 1;
    if (*(int *)(param_1 + 0x3c) < iVar12 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x30,iVar12);
    }
    _Src = (void *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar6 * 4);
    _guard_xfg_dispatch_icall_nop((void *)((longlong)_Src + 4),_Src,(longlong)(iVar12 - iVar6) << 2)
    ;
    *(int *)((longlong)iVar6 * 4 + *(longlong *)(param_1 + 0x30)) = local_res8[0];
  }
  iVar6 = (int)plVar11[3];
  iVar12 = *(int *)((longlong)plVar11 + 0xc);
  iVar13 = *(int *)((longlong)plVar11 + 0x1c);
  *(int *)(plVar11 + 3) = iVar6 + 1;
  if (*(int *)((longlong)plVar11 + 0x1c) < iVar6 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar11 + 2,iVar6);
  }
  lVar10 = (longlong)iVar6 * 0x38 + plVar11[2];
  if (lVar10 == 0) {
    lVar10 = 0;
  }
  else {
    uVar2 = *(undefined4 *)((longlong)plVar11 + 0xc4);
    *(longlong *)(lVar10 + 8) = local_res10;
    puVar8 = (undefined8 *)operator_new(0x20);
    if (puVar8 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar8 + 1) = 0;
      *puVar8 = &PTR_FUN_144e8b340;
      puVar8[2] = param_1;
      *(undefined4 *)(puVar8 + 3) = uVar2;
      *(int *)((longlong)puVar8 + 0x1c) = iVar6;
    }
    *(undefined8 **)(lVar10 + 0x30) = puVar8;
    if (puVar8 != (undefined8 *)0x0) {
      *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
    }
    lVar9 = *(longlong *)(*(longlong *)(*(longlong *)(lVar10 + 8) + 0xc0) + 8);
    uVar2 = *(undefined4 *)(lVar9 + 0xc4);
    uVar4 = *(undefined4 *)(lVar9 + 200);
    uVar5 = *(undefined4 *)(lVar9 + 0xcc);
    *(undefined4 *)(lVar10 + 0x10) = *(undefined4 *)(lVar9 + 0xc0);
    *(undefined4 *)(lVar10 + 0x14) = uVar2;
    *(undefined4 *)(lVar10 + 0x18) = uVar4;
    *(undefined4 *)(lVar10 + 0x1c) = uVar5;
    *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(lVar9 + 0xd0);
    *(undefined4 *)(lVar10 + 0x28) = *(undefined4 *)(lVar9 + 0xd8);
    *(byte *)(lVar10 + 0x2c) =
         (byte)((uint)*(undefined4 *)
                       (*(longlong *)(*(longlong *)(*(longlong *)(lVar10 + 8) + 0xc0) + 8) + 0x18)
               >> 0x1b) & 1;
  }
  iVar6 = (int)plVar11[1];
  *(int *)(plVar11 + 1) = iVar6 + 1;
  if (*(int *)((longlong)plVar11 + 0xc) < iVar6 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar11,iVar6);
  }
  puVar1 = (undefined4 *)(*plVar11 + (longlong)iVar6 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)(local_res10 + 200);
  }
  DAT_146a81050 =
       DAT_146a81050 +
       ((((ulonglong)(uint)(*(int *)((longlong)plVar11 + 0x1c) * 0x38) +
         (ulonglong)(uint)(*(int *)((longlong)plVar11 + 0xc) << 2)) - (ulonglong)(uint)(iVar12 << 2)
        ) - (ulonglong)(uint)(iVar13 * 0x38));
  FUN_141d6b230(local_res10,*(undefined8 *)(lVar10 + 0x30));
  return;
}



// FUNCTION 141df9c30 FUN_141df9c30 body=538 status=ok
// SIG undefined FUN_141df9c30(void)

void FUN_141df9c30(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  DWORD DVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *local_res8;
  longlong *local_res10;
  undefined1 local_res18 [8];
  longlong **pplVar10;
  undefined1 local_88 [96];
  undefined4 uVar11;
  
  plVar9 = *(longlong **)(param_2 + 0xa8);
  uVar1 = *(undefined4 *)(param_1 + 8);
  local_res8 = (longlong *)0x0;
  (**(code **)(*plVar9 + 0x40))(plVar9,uVar1,&local_res10,&local_res8);
  plVar4 = local_res8;
  lVar3 = DAT_146aa9a70;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar5 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar6 = GetCurrentThreadId();
    if (DVar6 == DAT_1468c21c0) goto LAB_141df9cb1;
    lVar8 = 4;
  }
  else {
LAB_141df9cb1:
    lVar8 = 0;
  }
  if (*(int *)(lVar8 + lVar3) == 1) {
    cVar5 = FUN_141ae37e0();
    if ((cVar5 == '\0') ||
       ((*(uint *)(*(longlong *)(*(longlong *)(param_2 + 0xc0) + 8) + 0x18) >> 0x13 & 1) == 0)) {
      bVar2 = true;
      goto LAB_141df9cde;
    }
  }
  bVar2 = false;
LAB_141df9cde:
  if ((*(int *)(*(longlong *)(*(longlong *)(param_2 + 0xc0) + 8) + 0x10) - 1U < 2) && (!bVar2)) {
    uVar7 = (**(code **)(*plVar4 + 0x1e8))(plVar4);
    if (uVar7 < 2) {
      cVar5 = FUN_141b196e0(plVar4,0);
      if (cVar5 != '\0') {
        cVar5 = (**(code **)(*plVar4 + 0x28))(plVar4);
        if (cVar5 == '\0') {
          cVar5 = FUN_14259cbc0(plVar4);
          if (cVar5 == '\0') {
            plVar9 = (longlong *)UMaterial::GetDefaultMaterial(0);
            plVar9 = (longlong *)(**(code **)(*plVar9 + 0x2a8))(plVar9,0,0);
          }
        }
      }
      uVar7 = *(uint *)(param_2 + 0x8c);
      local_res8 = (longlong *)
                   (CONCAT44(uVar7 >> 0xc,
                             ((uVar7 >> 0x13 & 0x80 | uVar7 & 0x100) >> 2 | uVar7 & 0x10) >> 4 |
                             uVar7 & 8) & 0x3fffffffff);
      local_res10 = local_res8;
      local_res8 = (longlong *)0x0;
      (**(code **)(*plVar9 + 0x40))(plVar9,uVar1,local_res18,&local_res8);
      pplVar10 = &local_res10;
      FUN_141df8430(local_88,*(undefined8 *)(param_2 + 0xa0),plVar9,local_res8,pplVar10,uVar1);
      uVar11 = (undefined4)((ulonglong)pplVar10 >> 0x20);
      cVar5 = FUN_141e0bc90(local_88);
      if (cVar5 != '\0') {
        FUN_141df98e0(param_1 + 0xa88,param_2,&local_res8,local_88,CONCAT44(uVar11,uVar1));
      }
    }
  }
  return;
}



// FUNCTION 141df9e50 FUN_141df9e50 body=203 status=ok
// SIG undefined FUN_141df9e50(void)

void FUN_141df9e50(int *param_1,void *param_2,int param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = param_1[8];
  param_1[8] = iVar1 + param_3;
  if (param_1[9] < iVar1 + param_3) {
    FUN_141daba00(param_1 + 6,iVar1);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 6)),param_2,
             (longlong)param_3 << 4);
  *param_1 = *param_1 + *param_4;
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | *(byte *)(param_4 + 4);
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | *(byte *)(param_4 + 5);
  param_1[1] = param_1[1] + param_4[1];
  *(byte *)((longlong)param_1 + 0x11) =
       *(byte *)((longlong)param_1 + 0x11) | *(byte *)((longlong)param_4 + 0x11);
  *(byte *)((longlong)param_1 + 0x15) =
       *(byte *)((longlong)param_1 + 0x15) | *(byte *)((longlong)param_4 + 0x15);
  param_1[2] = param_1[2] + param_4[2];
  *(byte *)((longlong)param_1 + 0x12) =
       *(byte *)((longlong)param_1 + 0x12) | *(byte *)((longlong)param_4 + 0x12);
  *(byte *)((longlong)param_1 + 0x16) =
       *(byte *)((longlong)param_1 + 0x16) | *(byte *)((longlong)param_4 + 0x16);
  param_1[3] = param_1[3] + param_4[3];
  *(byte *)((longlong)param_1 + 0x13) =
       *(byte *)((longlong)param_1 + 0x13) | *(byte *)((longlong)param_4 + 0x13);
  *(byte *)((longlong)param_1 + 0x17) =
       *(byte *)((longlong)param_1 + 0x17) | *(byte *)((longlong)param_4 + 0x17);
  return;
}



// FUNCTION 141df9f20 FUN_141df9f20 body=526 status=ok
// SIG undefined FUN_141df9f20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141df9f20(longlong param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_318 [32];
  undefined4 local_2f8;
  undefined1 local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d4;
  longlong local_2d0;
  longlong local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined2 local_2b8;
  undefined1 local_2a8 [192];
  undefined4 local_1e8;
  undefined1 local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_318;
  lVar4 = *(longlong *)(*param_2 + 8);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  local_2e8 = lVar4;
  lVar1 = FSceneRenderTargets::Get();
  local_2d0 = *(longlong *)(*(longlong *)(lVar1 + 0x60) + 0x10);
  if (local_2d0 != 0) {
    LOCK();
    *(int *)(local_2d0 + 8) = *(int *)(local_2d0 + 8) + 1;
    UNLOCK();
    lVar4 = local_2e8;
  }
  if (param_3 == '\0') {
    local_2f0 = 0;
    local_2f8 = 0x21;
    FUN_141ad74f0(param_1,lVar4,local_2d0,0);
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar2 = puVar3 + 3;
    if (*(undefined8 **)(param_1 + 0x38) < puVar2) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar2 = puVar3 + 3;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar2;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar3;
    *(undefined8 **)(param_1 + 8) = puVar3 + 1;
    puVar3[1] = 0;
    *puVar3 = &PTR_LAB_144e345f0;
    *(undefined2 *)(puVar3 + 2) = 1;
    *(undefined1 *)((longlong)puVar3 + 0x12) = 0;
  }
  else {
    local_2c0 = 0;
    local_2bc = 0xffffffff;
    local_2b8 = 0x102;
    local_2d8 = 0x10001;
    local_2d4 = 0x21;
    local_2e0 = local_2d0;
    local_2c8 = lVar4;
    FUN_140c63b80(local_2a8,1,&local_2c8,&local_2e0);
    FRHICommandListBase::CacheActiveRenderTargets(param_1,local_1e8,local_2a8,local_118);
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar2 = puVar3 + 0x54;
    if (*(undefined8 **)(param_1 + 0x38) < puVar2) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x2a8);
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar2 = puVar3 + 0x54;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar2;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar3;
    *(undefined8 **)(param_1 + 8) = puVar3 + 1;
    puVar3[1] = 0;
    *puVar3 = &PTR_FUN_1444d5488;
    FUN_140c63680(puVar3 + 2,local_2a8);
    FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_2a8);
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_2d0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_2e8);
  return;
}



// FUNCTION 141dfa130 Bind body=249 status=ok
// SIG undefined Bind(void)

void FVolumetricFogIntegrationParameters::Bind(longlong param_1,undefined8 param_2)

{
  FRWShaderParameter::Bind(param_1,param_2,L"VBufferA");
  FRWShaderParameter::Bind(param_1 + 8,param_2,L"VBufferB");
  FRWShaderParameter::Bind(param_1 + 0x10,param_2,L"LightScattering");
  FRWShaderParameter::Bind(param_1 + 0x18,param_2,L"IntegratedLightScattering");
  FShaderResourceParameter::Bind(param_1 + 0x20,param_2,L"IntegratedLightScatteringSampler",0);
  FShaderUniformBufferParameter::Bind(param_1 + 0x24,param_2,L"VolumetricFog",0);
  FShaderParameter::Bind(param_1 + 0x2c,param_2,L"UnjitteredClipToTranslatedWorld",0);
  FShaderParameter::Bind(param_1 + 0x32,param_2,L"UnjitteredPrevWorldToClip",0);
  FShaderParameter::Bind(param_1 + 0x38,param_2,L"FrameJitterOffsets",0);
  FShaderParameter::Bind(param_1 + 0x3e,param_2,L"HistoryWeight",0);
  FShaderParameter::Bind(param_1 + 0x44,param_2,L"HistoryMissSuperSampleCount",0);
  return;
}



// FUNCTION 141dfa230 FUN_141dfa230 body=543 status=ok
// SIG undefined FUN_141dfa230(void)

int * FUN_141dfa230(int *param_1,float *param_2,longlong param_3,longlong param_4,
                   undefined8 *param_5)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar1 = *param_5;
  fVar2 = *(float *)(param_5 + 1);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  fVar11 = param_2[2] * *(float *)(param_3 + 0x538) + *(float *)(param_3 + 0x548) * 1.0 +
           *param_2 * *(float *)(param_3 + 0x518) + param_2[1] * *(float *)(param_3 + 0x528);
  fVar10 = param_2[3];
  fVar9 = *(float *)((longlong)param_5 + 4);
  if (*(int *)(lVar4 + 0x38) < DAT_1468509dc) {
    _Init_thread_header();
    if (DAT_1468509dc == -1) {
      DAT_1468509d8 = 1.442695;
      _Init_thread_footer();
    }
  }
  iVar5 = DAT_1468509dc;
  fVar9 = _guard_xfg_dispatch_icall_nop((float)uVar1 * (fVar11 + fVar10) + fVar9);
  fVar10 = param_2[3];
  fVar3 = *(float *)(param_5 + 1);
  uVar1 = *param_5;
  iVar8 = (int)(fVar9 * DAT_1468509d8 * fVar2);
  fVar9 = *(float *)((longlong)param_5 + 4);
  if (*(int *)(lVar4 + 0x38) < iVar5) {
    _Init_thread_header();
    if (DAT_1468509dc == -1) {
      DAT_1468509d8 = 1.442695;
      _Init_thread_footer();
    }
  }
  fVar10 = _guard_xfg_dispatch_icall_nop((float)uVar1 * (fVar11 - fVar10) + fVar9);
  iVar5 = *(int *)(param_4 + 8) + -1;
  iVar7 = (int)(fVar10 * DAT_1468509d8 * fVar3);
  if (iVar7 < 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = iVar5;
    if (iVar7 < iVar5) {
      iVar6 = iVar7;
    }
  }
  *param_1 = iVar6;
  if (iVar8 < 0) {
    param_1[1] = 0;
  }
  else {
    if (iVar8 < iVar5) {
      iVar5 = iVar8;
    }
    param_1[1] = iVar5;
  }
  return param_1;
}



// FUNCTION 141dfa450 FUN_141dfa450 body=474 status=ok
// SIG undefined FUN_141dfa450(void)

float * FUN_141dfa450(undefined8 *param_1,float *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_78;
  undefined8 uStack_70;
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
  
  fStack_50 = *(float *)(param_1 + 5);
  fStack_4c = *(float *)((longlong)param_1 + 0x2c);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  local_68 = *(float *)(param_1 + 2);
  fStack_64 = *(float *)((longlong)param_1 + 0x14);
  fStack_60 = *(float *)(param_1 + 3);
  fStack_5c = *(float *)((longlong)param_1 + 0x1c);
  fStack_54 = *(float *)((longlong)param_1 + 0x24) - *(float *)((longlong)param_1 + 0x564);
  local_58 = *(float *)(param_1 + 4) - *(float *)(param_1 + 0xac);
  local_48 = *(float *)(param_1 + 6);
  fStack_44 = *(float *)((longlong)param_1 + 0x34);
  fStack_40 = *(float *)(param_1 + 7);
  fStack_3c = *(float *)((longlong)param_1 + 0x3c);
  if ((((((local_68 == 0.0) && (local_48 == 0.0)) &&
        (local_78._4_4_ = (float)((ulonglong)uVar1 >> 0x20), local_78._4_4_ == 0.0)) &&
       ((fStack_44 == 0.0 && (uStack_70._0_4_ = (float)uVar2, (float)uStack_70 == 0.0)))) &&
      ((fStack_60 == 0.0 &&
       ((uStack_70._4_4_ = (float)((ulonglong)uVar2 >> 0x20), uStack_70._4_4_ == 0.0 &&
        (fStack_5c == 0.0)))))) && ((fStack_4c == 1.0 && (fStack_3c == 0.0)))) {
    local_78._0_4_ = (float)uVar1;
    param_2[0xe] = 1.0;
    param_2[0xc] = -(local_58 * (1.0 / (float)local_78));
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = 0.0;
    param_2[4] = 0.0;
    param_2[6] = 0.0;
    param_2[7] = 0.0;
    param_2[8] = 0.0;
    param_2[9] = 0.0;
    param_2[10] = 0.0;
    *param_2 = 1.0 / (float)local_78;
    param_2[0xb] = 1.0 / fStack_40;
    param_2[0xf] = -(fStack_50 * (1.0 / fStack_40));
    param_2[5] = 1.0 / fStack_64;
    param_2[0xd] = -(fStack_54 * (1.0 / fStack_64));
    return param_2;
  }
  local_78 = uVar1;
  uStack_70 = uVar2;
  FMatrix::Inverse(&local_78);
  return param_2;
}



// FUNCTION 141dfa630 FUN_141dfa630 body=8352 status=ok
// SIG undefined FUN_141dfa630(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141dfa630(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  longlong lVar16;
  longlong *plVar17;
  long lVar18;
  undefined4 *puVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  longlong lVar27;
  longlong *plVar28;
  longlong *plVar29;
  undefined8 *puVar30;
  ulonglong *puVar31;
  longlong lVar32;
  ulonglong uVar33;
  undefined8 **ppuVar34;
  bool bVar35;
  undefined1 auStack_5f8 [32];
  wchar_t *local_5d8;
  longlong *local_5d0;
  longlong **local_5c8;
  undefined8 *local_5c0;
  longlong *local_5b8;
  longlong **local_5b0;
  undefined1 local_5a8;
  char local_5a7;
  longlong local_5a0;
  int local_598;
  longlong *local_590;
  longlong local_588;
  int local_580;
  longlong *local_578;
  wchar_t *local_570;
  longlong local_568;
  longlong *local_560;
  longlong *local_558;
  int local_550;
  undefined8 *local_548;
  undefined8 *local_540;
  int local_538;
  int local_534;
  int local_530;
  int local_52c;
  int local_528;
  int local_524;
  int local_520 [2];
  undefined8 local_518;
  undefined8 local_510;
  undefined4 uStack_508;
  undefined4 uStack_504;
  undefined8 local_500;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  longlong local_4f0;
  undefined8 *local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined4 local_4d0;
  undefined4 local_4cc;
  undefined2 local_4c8 [4];
  undefined8 local_4c0;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined2 local_4b0 [4];
  int local_4a8;
  int iStack_4a4;
  undefined4 local_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  ulonglong local_478;
  longlong local_470;
  undefined8 local_468;
  undefined8 local_460;
  longlong *local_458;
  undefined8 local_450;
  undefined8 local_448;
  int local_440;
  undefined8 local_438;
  undefined4 local_430;
  undefined8 local_428;
  undefined4 local_420;
  undefined8 local_418;
  int local_410;
  undefined8 local_408;
  undefined4 local_400;
  undefined8 local_3f8;
  int local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  longlong local_3c8 [2];
  longlong local_3b8;
  longlong local_3b0;
  longlong local_3a8;
  longlong local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined *local_388;
  undefined4 local_380;
  undefined *local_378;
  undefined4 local_370;
  undefined *local_368;
  undefined4 local_360;
  undefined *local_358;
  undefined4 local_350;
  undefined *local_348;
  undefined4 local_340;
  undefined *local_338;
  undefined4 local_330;
  undefined *local_328;
  undefined4 local_320;
  undefined1 local_318 [12];
  undefined1 local_30c [20];
  longlong local_2f8 [8];
  undefined1 local_2b8 [16];
  undefined4 local_2a8 [64];
  undefined4 *local_1a8;
  undefined8 local_198;
  wchar_t *local_188;
  longlong *plStack_180;
  longlong *local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined2 uStack_140;
  undefined2 uStack_13e;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  uint uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_5f8;
  local_588 = param_1;
  cVar9 = FUN_141e0bba0(*(undefined8 *)(param_1 + 8),param_1 + 0x10);
  if (cVar9 != '\0') {
    local_568 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18f8);
    local_550 = 0;
    if (0 < *(int *)(param_1 + 200)) {
      local_478 = (ulonglong)_tls_index;
      local_4f0 = 0;
      do {
        lVar32 = local_4f0 * 0x30d0 + *(longlong *)(param_1 + 0xc0);
        local_5a0 = lVar32;
        FString::PrintfImpl(local_3c8,L"ComputeVolumetricFog_View%d",local_550);
        AK::MemoryMgr::StartProfileThreadUsage(0x464aa748);
        if (local_3c8[0] != 0) {
          FMemory::Free();
        }
        iVar13 = DAT_1464c36d8;
        iVar10 = ((*(int *)(lVar32 + 0x1aa8) - *(int *)(lVar32 + 0x1aa0)) + -1 + DAT_1464c36d4) /
                 DAT_1464c36d4;
        local_598 = DAT_1464c36d8;
        iVar11 = (DAT_1464c36d4 + -1 + (*(int *)(lVar32 + 0x1aac) - *(int *)(lVar32 + 0x1aa4))) /
                 DAT_1464c36d4;
        local_580 = iVar10;
        local_4a8 = iVar10;
        iStack_4a4 = iVar11;
        FUN_141e00d60(&local_438,*(undefined4 *)(lVar32 + 0x11b0),*(undefined4 *)(local_568 + 0x90),
                      DAT_1464c36d8);
        local_2b8[0] = 0;
        local_1a8 = (undefined4 *)0x0;
        local_198 = 0;
        local_188 = (wchar_t *)0x0;
        plStack_180 = (longlong *)0x0;
        local_178 = (longlong *)0x0;
        TArray<FVector4,TInlineAllocator<16,FDefaultAllocator>_>::ResizeTo(local_2a8,0x10);
        uVar20 = local_198;
        lVar27 = (longlong)(int)local_198;
        iVar12 = (int)local_198 + 0x10;
        local_198 = CONCAT44(local_198._4_4_,iVar12);
        if (local_198._4_4_ < iVar12) {
          TArray<FVector4,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow
                    (local_2a8,uVar20 & 0xffffffff);
        }
        puVar19 = local_2a8;
        if (local_1a8 != (undefined4 *)0x0) {
          puVar19 = local_1a8;
        }
        _guard_xfg_dispatch_icall_nop(puVar19 + lVar27 * 4,0,0x100);
        puVar15 = (undefined4 *)
                  VolumetricFogTemporalRandom
                            (local_30c,*(undefined4 *)(*(longlong *)(lVar32 + 0x10) + 0x5c));
        iVar12 = 1;
        uVar4 = puVar15[1];
        uVar14 = puVar15[2];
        local_498 = *puVar15;
        uStack_494 = puVar15[1];
        uStack_490 = puVar15[2];
        puVar19 = local_2a8;
        if (local_1a8 != (undefined4 *)0x0) {
          puVar19 = local_1a8;
        }
        uStack_48c = 0x3f800000;
        *puVar19 = *puVar15;
        puVar19[1] = uVar4;
        puVar19[2] = uVar14;
        puVar19[3] = 0x3f800000;
        if (1 < DAT_1464c36e8) {
          uStack_47c = 0x3f800000;
          lVar27 = 0x10;
          do {
            puVar15 = (undefined4 *)
                      VolumetricFogTemporalRandom
                                (local_318,*(int *)(*(longlong *)(lVar32 + 0x10) + 0x5c) - iVar12);
            uVar4 = puVar15[1];
            uVar14 = puVar15[2];
            local_488 = *puVar15;
            uStack_484 = puVar15[1];
            uStack_480 = puVar15[2];
            puVar19 = local_2a8;
            if (local_1a8 != (undefined4 *)0x0) {
              puVar19 = local_1a8;
            }
            iVar12 = iVar12 + 1;
            puVar19 = (undefined4 *)((longlong)puVar19 + lVar27);
            *puVar19 = *puVar15;
            puVar19[1] = uVar4;
            puVar19[2] = uVar14;
            puVar19[3] = uStack_47c;
            lVar27 = lVar27 + 0x10;
            iVar13 = local_598;
          } while (iVar12 < DAT_1464c36e8);
        }
        lVar27 = local_588;
        puVar31 = (ulonglong *)(param_2 + 0x30);
        if ((DAT_1464c36dc == 0) || (*(longlong *)(lVar32 + 0x1ab0) == 0)) {
          local_5a7 = '\0';
LAB_141dfa9d8:
          local_2b8[0] = 0;
        }
        else {
          local_5a7 = '\x01';
          if (((((*(char *)(lVar32 + 0x11f4) != '\0') || ((*(byte *)(lVar32 + 0x28cc) & 0x20) != 0))
               || (*(char *)(local_588 + 0x70) == '\0')) ||
              ((plVar17 = *(longlong **)(*(longlong *)(lVar32 + 0x1ab0) + 0x13c8),
               plVar17 == (longlong *)0x0 ||
               (lVar16 = (**(code **)(*plVar17 + 0x10))(), *(int *)(lVar16 + 0x14) != iVar10)))) ||
             ((*(int *)(lVar16 + 0x18) != iVar11 || (*(int *)(lVar16 + 0x1c) != iVar13))))
          goto LAB_141dfa9d8;
          local_2b8[0] = 1;
        }
        uVar3 = CONCAT44(iStack_4a4,local_4a8);
        local_560 = (longlong *)0x0;
        local_5c0 = (undefined8 *)&local_5a8;
        local_5c8 = &local_560;
        local_5d0 = local_2f8;
        local_5d8 = (wchar_t *)CONCAT44(local_5d8._4_4_,*(undefined4 *)(local_568 + 0x90));
        local_448 = uVar3;
        local_440 = iVar13;
        FUN_141e03bf0(lVar27,param_2,lVar32,&local_448);
        pwVar5 = *(wchar_t **)(lVar32 + 0x2f90);
        local_570 = pwVar5;
        if (pwVar5 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)pwVar5 + 0x28))(pwVar5);
        }
        local_578 = *(longlong **)(lVar32 + 0x2f98);
        if (local_578 != (longlong *)0x0) {
          (**(code **)(*local_578 + 0x28))();
        }
        plVar17 = *(longlong **)(lVar32 + 0x2f90);
        *(undefined8 *)(lVar32 + 0x2f90) = 0;
        if (plVar17 != (longlong *)0x0) {
          (**(code **)(*plVar17 + 0x30))();
        }
        plVar17 = *(longlong **)(lVar32 + 0x2f98);
        *(undefined8 *)(lVar32 + 0x2f98) = 0;
        if (plVar17 != (longlong *)0x0) {
          (**(code **)(*plVar17 + 0x30))();
        }
        local_158 = DAT_1464c9c98;
        iStack_154 = iVar10;
        local_168 = _DAT_1464c9c88;
        uStack_160 = uRam00000001464c9c90;
        local_118 = _DAT_1464c9c88;
        uStack_110 = uRam00000001464c9c90;
        iStack_150 = iVar11;
        uVar20 = 0;
        uStack_13c = 10;
        uStack_138 = 0;
        local_128 = L"UnknownTextureVolume";
        iStack_14c = iVar13;
        local_148 = 1;
        uStack_144 = 0x10000;
        uStack_140 = 1;
        local_108 = CONCAT44(iVar10,DAT_1464c9c98);
        uStack_100 = CONCAT44(iVar13,iVar11);
        uStack_134 = 0x40010009;
        uStack_130 = uStack_130 & 0xffffff00;
        uStack_120 = CONCAT22(uStack_120._2_2_,1);
        local_f8 = 0x1000000000001;
        uStack_f0 = CONCAT44(10,CONCAT22(uStack_13e,1));
        uStack_e4 = 0x40010009;
        uStack_e0 = uStack_130;
        uStack_dc = uStack_12c;
        local_e8 = DAT_146a9da7c;
        local_d8 = 0x44dc9e20;
        uStack_d4 = 1;
        uStack_d0 = uStack_120;
        uStack_cc = uStack_11c;
        if (pwVar5 == (wchar_t *)0x0) {
          local_5c8._0_1_ = 1;
          local_5d0._0_1_ = 1;
          local_5d8 = L"VBufferA";
          FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_118,&local_570);
          local_5c8 = (longlong **)CONCAT71(local_5c8._1_7_,1);
          local_5d0 = (longlong *)CONCAT71(local_5d0._1_7_,1);
          local_5d8 = L"VBufferB";
          FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_118,&local_578);
        }
        iVar10 = 0;
        local_188 = local_570;
        plStack_180 = local_578;
        local_4d8 = 0;
        local_4d0 = 0;
        local_4cc = 0xffffffff;
        local_4c8[0] = 0x101;
        local_510 = 0;
        uStack_508 = 0x1010101;
        uStack_504 = 0x22;
        *(undefined4 *)(param_2 + 0x98) = 1;
        uVar24 = uVar20;
        do {
          uVar22 = (int)uVar24 + 1;
          uVar8 = *(undefined8 *)(&local_4d0 + uVar24 * 6);
          uVar2 = *(undefined8 *)(local_4c8 + uVar24 * 0xc);
          puVar26 = (undefined8 *)(param_2 + 0xa0 + uVar24 * 0x18);
          *puVar26 = (&local_4d8)[uVar24 * 3];
          puVar26[1] = uVar8;
          *(undefined8 *)(param_2 + 0xb0 + uVar24 * 0x18) = uVar2;
          uVar24 = (ulonglong)uVar22;
        } while (uVar22 < *(uint *)(param_2 + 0x98));
        *(undefined4 *)(param_2 + 0x160) = 0;
        *(undefined4 *)(param_2 + 0x164) = 0;
        *(undefined4 *)(param_2 + 0x168) = 0x1010101;
        *(undefined4 *)(param_2 + 0x16c) = 0x22;
        puVar25 = (undefined8 *)(*puVar31 + 7 & 0xfffffffffffffff8);
        puVar26 = puVar25 + 0x26;
        if (*(undefined8 **)(param_2 + 0x38) < puVar26) {
          FMemStackBase::AllocateNewChunk(puVar31,0x138);
          puVar25 = (undefined8 *)(*puVar31 + 7 & 0xfffffffffffffff8);
          puVar26 = puVar25 + 0x26;
        }
        *puVar31 = (ulonglong)puVar26;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar25;
        *(undefined8 **)(param_2 + 8) = puVar25 + 1;
        puVar25[1] = 0;
        *puVar25 = &PTR_LAB_143f59440;
        *(undefined4 *)(puVar25 + 2) = 1;
        puVar25[3] = 0;
        *(undefined4 *)(puVar25 + 4) = 0;
        *(undefined4 *)((longlong)puVar25 + 0x24) = 0xffffffff;
        *(undefined2 *)(puVar25 + 5) = 0;
        puVar25[6] = 0;
        *(undefined4 *)(puVar25 + 7) = 0;
        *(undefined4 *)((longlong)puVar25 + 0x3c) = 0xffffffff;
        *(undefined2 *)(puVar25 + 8) = 0;
        puVar25[9] = 0;
        *(undefined4 *)(puVar25 + 10) = 0;
        *(undefined4 *)((longlong)puVar25 + 0x54) = 0xffffffff;
        *(undefined2 *)(puVar25 + 0xb) = 0;
        puVar25[0xc] = 0;
        *(undefined4 *)(puVar25 + 0xd) = 0;
        *(undefined4 *)((longlong)puVar25 + 0x6c) = 0xffffffff;
        *(undefined2 *)(puVar25 + 0xe) = 0;
        puVar25[0xf] = 0;
        *(undefined4 *)(puVar25 + 0x10) = 0;
        *(undefined4 *)((longlong)puVar25 + 0x84) = 0xffffffff;
        *(undefined2 *)(puVar25 + 0x11) = 0;
        puVar25[0x12] = 0;
        *(undefined4 *)(puVar25 + 0x13) = 0;
        *(undefined4 *)((longlong)puVar25 + 0x9c) = 0xffffffff;
        *(undefined2 *)(puVar25 + 0x14) = 0;
        puVar25[0x15] = 0;
        *(undefined4 *)(puVar25 + 0x16) = 0;
        *(undefined4 *)((longlong)puVar25 + 0xb4) = 0xffffffff;
        *(undefined2 *)(puVar25 + 0x17) = 0;
        puVar25[0x18] = 0;
        *(undefined4 *)(puVar25 + 0x19) = 0;
        *(undefined4 *)((longlong)puVar25 + 0xcc) = 0xffffffff;
        *(undefined2 *)(puVar25 + 0x1a) = 0;
        puVar25[0x1b] = 0;
        *(undefined4 *)(puVar25 + 0x1c) = 0;
        *(undefined8 *)((longlong)puVar25 + 0xe4) = 0;
        uVar24 = uVar20;
        if (*(int *)(puVar25 + 2) != 0) {
          do {
            uVar22 = (int)uVar24 + 1;
            uVar2 = *(undefined8 *)(&local_4d0 + uVar24 * 6);
            puVar25[uVar24 * 3 + 3] = (&local_4d8)[uVar24 * 3];
            (puVar25 + uVar24 * 3 + 3)[1] = uVar2;
            puVar25[uVar24 * 3 + 5] = *(undefined8 *)(local_4c8 + uVar24 * 0xc);
            uVar24 = (ulonglong)uVar22;
          } while (uVar22 < *(uint *)(puVar25 + 2));
          iVar10 = *(int *)(puVar25 + 0x1d);
        }
        if (iVar10 != 0) {
          do {
            uVar22 = (int)uVar20 + 1;
            puVar25[uVar20 + 0x1e] = *(undefined8 *)(uVar20 * 8);
            uVar20 = (ulonglong)uVar22;
          } while (uVar22 < *(uint *)(puVar25 + 0x1d));
        }
        *(undefined4 *)(puVar25 + 0x1b) = (undefined4)local_510;
        *(undefined4 *)((longlong)puVar25 + 0xdc) = local_510._4_4_;
        *(undefined4 *)(puVar25 + 0x1c) = uStack_508;
        *(undefined4 *)((longlong)puVar25 + 0xe4) = uStack_504;
        iVar11 = (DAT_1464c36f0 + -1 + iVar13) / DAT_1464c36f0;
        local_518 = CONCAT44(iStack_4a4,local_4a8);
        iVar13 = DAT_1464c36f0 + -1 + iStack_4a4;
        lVar32 = (longlong)DAT_1464c36f0;
        iVar10 = local_580 + -1 + DAT_1464c36f0;
        lVar27 = (longlong)DAT_1464c36f0;
        lVar16 = local_5a0;
        if (pwVar5 == (wchar_t *)0x0) {
          local_388 = &DAT_146aaa4b0;
          local_380 = 0;
          lVar16 = *(longlong *)(local_5a0 + 0x3090);
          TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
          ::FindId(lVar16 + 0x38,&local_530,&local_388);
          plVar17 = (longlong *)0x0;
          if (local_530 != -1) {
            plVar17 = (longlong *)((longlong)local_530 * 0x20 + *(longlong *)(lVar16 + 0x38));
          }
          plVar28 = plVar17 + 2;
          if (plVar17 == (longlong *)0x0) {
            plVar28 = (longlong *)0x0;
          }
          lVar6 = *plVar28;
          lVar16 = *(longlong *)(lVar6 + 0x48);
          if (*(char *)(lVar16 + 0x28) == '\0') {
            FUN_1419f3850(lVar16);
          }
          uVar2 = *(undefined8 *)(lVar16 + 0x60);
          FRHIComputeShader::UpdateStats(uVar2);
          puVar25 = (undefined8 *)(*puVar31 + 7 & 0xfffffffffffffff8);
          puVar26 = puVar25 + 3;
          if (*(undefined8 **)(param_2 + 0x38) < puVar26) {
            FMemStackBase::AllocateNewChunk(puVar31);
            puVar25 = (undefined8 *)(*puVar31 + 7 & 0xfffffffffffffff8);
            puVar26 = puVar25 + 3;
          }
          *puVar31 = (ulonglong)puVar26;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar25;
          *(undefined8 **)(param_2 + 8) = puVar25 + 1;
          puVar25[1] = 0;
          *puVar25 = &PTR_LAB_144d91e50;
          puVar25[2] = uVar2;
          local_5d8 = (wchar_t *)local_568;
          FUN_141df58f0(lVar6,param_2,local_5a0,local_2b8);
          local_5d8 = (wchar_t *)CONCAT44(local_5d8._4_4_,iVar11);
          DispatchComputeShader
                    (param_2,lVar6,(longlong)iVar10 / lVar27 & 0xffffffff,
                     (longlong)iVar13 / lVar32 & 0xffffffff);
          pwVar5 = local_570;
          plVar17 = local_578;
          lVar32 = *(longlong *)(lVar6 + 0x48);
          if (*(char *)(lVar32 + 0x28) == '\0') {
            FUN_1419f3850(lVar32);
          }
          lVar16 = local_5a0;
          local_450 = *(undefined8 *)(lVar32 + 0x60);
          local_5c0 = (undefined8 *)((ulonglong)local_5c0 & 0xffffffffffffff00);
          local_5c8 = (longlong **)0x0;
          local_5d0 = plVar17;
          local_5d8 = pwVar5;
          FUN_141df64d0(lVar6 + 0xc0,param_2,&local_450,local_5a0);
        }
        local_3b8 = *(longlong *)(local_570 + 0xc);
        local_3b0 = local_578[3];
        puVar25 = (undefined8 *)(*puVar31 + 7 & 0xfffffffffffffff8);
        puVar26 = puVar25 + 2;
        if (*(undefined8 **)(param_2 + 0x38) < puVar26) {
          FMemStackBase::AllocateNewChunk(puVar31,0x18);
          puVar25 = (undefined8 *)(*puVar31 + 7 & 0xfffffffffffffff8);
          puVar26 = puVar25 + 2;
        }
        *puVar31 = (ulonglong)puVar26;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar25;
        *(undefined8 **)(param_2 + 8) = puVar25 + 1;
        puVar25[1] = 0;
        *puVar25 = &PTR_LAB_144dc9c50;
        plVar28 = (longlong *)(*puVar31 + 7 & 0xfffffffffffffff8);
        plVar17 = plVar28 + 2;
        if (*(longlong **)(param_2 + 0x38) < plVar17) {
          FMemStackBase::AllocateNewChunk(puVar31,0x18);
          plVar28 = (longlong *)(*puVar31 + 7 & 0xfffffffffffffff8);
          plVar17 = plVar28 + 2;
        }
        *puVar31 = (ulonglong)plVar17;
        *plVar28 = local_3b8;
        plVar28[1] = local_3b0;
        puVar25 = (undefined8 *)(*puVar31 + 7 & 0xfffffffffffffff8);
        puVar26 = puVar25 + 6;
        if (*(undefined8 **)(param_2 + 0x38) < puVar26) {
          FMemStackBase::AllocateNewChunk(puVar31,0x38);
          puVar25 = (undefined8 *)(*puVar31 + 7 & 0xfffffffffffffff8);
          puVar26 = puVar25 + 6;
        }
        uVar4 = local_430;
        uVar2 = local_438;
        lVar27 = local_568;
        lVar32 = local_588;
        iVar13 = local_598;
        *puVar31 = (ulonglong)puVar26;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar25;
        *(undefined8 **)(param_2 + 8) = puVar25 + 1;
        puVar25[1] = 0;
        *puVar25 = &PTR_LAB_144d91e60;
        *(undefined4 *)(puVar25 + 4) = 1;
        *(undefined4 *)((longlong)puVar25 + 0x24) = 1;
        local_5d0 = &local_428;
        puVar25[5] = 0;
        *(undefined4 *)(puVar25 + 2) = 2;
        puVar25[3] = plVar28;
        local_5c8 = (longlong **)CONCAT44(local_5c8._4_4_,*(undefined4 *)(local_568 + 0x90));
        local_5d8 = (wchar_t *)&local_418;
        local_428 = local_438;
        local_420 = local_430;
        local_410 = local_598;
        local_418 = uVar3;
        FUN_141e0c6d0(local_588,param_2,lVar16,local_2b8);
        plVar28 = (longlong *)(*puVar31 + 7 & 0xfffffffffffffff8);
        local_3a8 = *(longlong *)(local_570 + 4);
        local_3a0 = local_578[1];
        plVar17 = plVar28 + 2;
        if (*(longlong **)(param_2 + 0x38) < plVar17) {
          FMemStackBase::AllocateNewChunk(puVar31,0x18);
          plVar28 = (longlong *)(*puVar31 + 7 & 0xfffffffffffffff8);
          plVar17 = plVar28 + 2;
        }
        *puVar31 = (ulonglong)plVar17;
        *plVar28 = local_3a8;
        plVar28[1] = local_3a0;
        puVar25 = (undefined8 *)(*puVar31 + 7 & 0xfffffffffffffff8);
        puVar26 = puVar25 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar26) {
          FMemStackBase::AllocateNewChunk(puVar31);
          puVar25 = (undefined8 *)(*puVar31 + 7 & 0xfffffffffffffff8);
          puVar26 = puVar25 + 5;
        }
        *puVar31 = (ulonglong)puVar26;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar25;
        *(undefined8 **)(param_2 + 8) = puVar25 + 1;
        puVar25[1] = 0;
        *(undefined4 *)(puVar25 + 4) = 0;
        *(undefined1 *)((longlong)puVar25 + 0x24) = 0;
        *puVar25 = &PTR_LAB_143f59470;
        *(undefined4 *)(puVar25 + 2) = 2;
        puVar25[3] = plVar28;
        AK::MemoryMgr::StartProfileThreadUsage(0x464c2590);
        AK::MemoryMgr::StartProfileThreadUsage(0x464c2590);
        lVar16 = local_5a0;
        local_558 = (longlong *)0x0;
        local_5b0 = &local_558;
        local_408 = uVar2;
        local_5b8 = &local_118;
        local_400 = uVar4;
        local_5c0 = &local_408;
        local_5c8 = (longlong **)&local_3f8;
        local_5d8 = (wchar_t *)local_2b8;
        local_5d0 = (longlong *)lVar27;
        local_3f0 = iVar13;
        local_3f8 = uVar3;
        FUN_141e04e50(lVar32,param_2,local_5a0,local_5a7);
        local_b8 = CONCAT44(iStack_154,local_158);
        uStack_b0 = CONCAT44(iStack_14c,iStack_150);
        local_c8 = local_168;
        uStack_c0 = uStack_160;
        local_a8 = CONCAT44(uStack_144,local_148);
        uStack_a0 = CONCAT44(uStack_13c,CONCAT22(uStack_13e,uStack_140));
        uVar22 = 0;
        uVar24 = 0;
        local_5c8 = (longlong **)CONCAT71(local_5c8._1_7_,1);
        local_5d0 = (longlong *)CONCAT71(local_5d0._1_7_,1);
        local_88 = (undefined4)local_128;
        uStack_84 = local_128._4_4_;
        uStack_80 = uStack_120;
        uStack_7c = uStack_11c;
        local_590 = (longlong *)0x0;
        local_98 = uStack_138;
        uStack_94 = uStack_134;
        uStack_90 = uStack_130;
        uStack_8c = uStack_12c;
        local_5d8 = L"LightScattering";
        FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_c8,&local_590);
        local_178 = local_590;
        local_4c0 = 0;
        local_4b8 = 0;
        local_4b4 = 0xffffffff;
        local_4b0[0] = 0x101;
        local_500 = 0;
        uStack_4f8 = 0x1010101;
        uStack_4f4 = 0x22;
        *(undefined4 *)(param_2 + 0x98) = 1;
        uVar20 = uVar24;
        do {
          uVar23 = (int)uVar20 + 1;
          uVar2 = *(undefined8 *)(&local_4b8 + uVar20 * 6);
          uVar3 = *(undefined8 *)(local_4b0 + uVar20 * 0xc);
          puVar26 = (undefined8 *)(param_2 + 0xa0 + uVar20 * 0x18);
          *puVar26 = (&local_4c0)[uVar20 * 3];
          puVar26[1] = uVar2;
          *(undefined8 *)(param_2 + 0xb0 + uVar20 * 0x18) = uVar3;
          uVar20 = (ulonglong)uVar23;
        } while (uVar23 < *(uint *)(param_2 + 0x98));
        *(undefined4 *)(param_2 + 0x160) = 0;
        *(undefined4 *)(param_2 + 0x164) = 0;
        *(undefined4 *)(param_2 + 0x168) = 0x1010101;
        *(undefined4 *)(param_2 + 0x16c) = 0x22;
        puVar25 = (undefined8 *)(*puVar31 + 7 & 0xfffffffffffffff8);
        puVar26 = puVar25 + 0x26;
        if (*(undefined8 **)(param_2 + 0x38) < puVar26) {
          FMemStackBase::AllocateNewChunk(puVar31,0x138);
          puVar25 = (undefined8 *)(*puVar31 + 7 & 0xfffffffffffffff8);
          puVar26 = puVar25 + 0x26;
        }
        *puVar31 = (ulonglong)puVar26;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar25;
        *(undefined8 **)(param_2 + 8) = puVar25 + 1;
        puVar25[1] = 0;
        *puVar25 = &PTR_LAB_143f59440;
        *(undefined4 *)(puVar25 + 2) = 1;
        puVar25[3] = 0;
        *(undefined4 *)(puVar25 + 4) = 0;
        *(undefined4 *)((longlong)puVar25 + 0x24) = 0xffffffff;
        *(undefined2 *)(puVar25 + 5) = 0;
        puVar25[6] = 0;
        *(undefined4 *)(puVar25 + 7) = 0;
        *(undefined4 *)((longlong)puVar25 + 0x3c) = 0xffffffff;
        *(undefined2 *)(puVar25 + 8) = 0;
        puVar25[9] = 0;
        *(undefined4 *)(puVar25 + 10) = 0;
        *(undefined4 *)((longlong)puVar25 + 0x54) = 0xffffffff;
        *(undefined2 *)(puVar25 + 0xb) = 0;
        puVar25[0xc] = 0;
        *(undefined4 *)(puVar25 + 0xd) = 0;
        *(undefined4 *)((longlong)puVar25 + 0x6c) = 0xffffffff;
        *(undefined2 *)(puVar25 + 0xe) = 0;
        puVar25[0xf] = 0;
        *(undefined4 *)(puVar25 + 0x10) = 0;
        *(undefined4 *)((longlong)puVar25 + 0x84) = 0xffffffff;
        *(undefined2 *)(puVar25 + 0x11) = 0;
        puVar25[0x12] = 0;
        *(undefined4 *)(puVar25 + 0x13) = 0;
        *(undefined4 *)((longlong)puVar25 + 0x9c) = 0xffffffff;
        *(undefined2 *)(puVar25 + 0x14) = 0;
        puVar25[0x15] = 0;
        *(undefined4 *)(puVar25 + 0x16) = 0;
        *(undefined4 *)((longlong)puVar25 + 0xb4) = 0xffffffff;
        *(undefined2 *)(puVar25 + 0x17) = 0;
        puVar25[0x18] = 0;
        *(undefined4 *)(puVar25 + 0x19) = 0;
        *(undefined4 *)((longlong)puVar25 + 0xcc) = 0xffffffff;
        *(undefined2 *)(puVar25 + 0x1a) = 0;
        puVar25[0x1b] = 0;
        *(undefined4 *)(puVar25 + 0x1c) = 0;
        *(undefined8 *)((longlong)puVar25 + 0xe4) = 0;
        uVar20 = uVar24;
        uVar23 = uVar22;
        if (*(int *)(puVar25 + 2) != 0) {
          do {
            uVar23 = (int)uVar20 + 1;
            uVar3 = *(undefined8 *)(&local_4b8 + uVar20 * 6);
            puVar25[uVar20 * 3 + 3] = (&local_4c0)[uVar20 * 3];
            (puVar25 + uVar20 * 3 + 3)[1] = uVar3;
            puVar25[uVar20 * 3 + 5] = *(undefined8 *)(local_4b0 + uVar20 * 0xc);
            uVar20 = (ulonglong)uVar23;
          } while (uVar23 < *(uint *)(puVar25 + 2));
          uVar23 = *(uint *)(puVar25 + 0x1d);
        }
        if (uVar23 != 0) {
          do {
            uVar20 = (ulonglong)uVar22;
            uVar22 = uVar22 + 1;
            puVar25[uVar20 + 0x1e] = *(undefined8 *)(uVar20 * 8);
          } while (uVar22 < *(uint *)(puVar25 + 0x1d));
        }
        *(undefined4 *)(puVar25 + 0x1b) = (undefined4)local_500;
        *(undefined4 *)((longlong)puVar25 + 0xdc) = local_500._4_4_;
        *(undefined4 *)(puVar25 + 0x1c) = uStack_4f8;
        *(undefined4 *)((longlong)puVar25 + 0xe4) = uStack_4f4;
        iVar13 = (iVar13 + -1 + DAT_1464c36f0) / DAT_1464c36f0;
        uVar33 = (longlong)(DAT_1464c36f0 + -1 + (int)((ulonglong)local_518 >> 0x20)) /
                 (longlong)DAT_1464c36f0 & 0xffffffff;
        uVar20 = (longlong)(local_580 + -1 + DAT_1464c36f0) / (longlong)DAT_1464c36f0;
        local_598 = (int)uVar20;
        uVar20 = uVar20 & 0xffffffff;
        if ((DAT_1464c1c88 != 0) && (0 < *(int *)(*(longlong *)(local_588 + 8) + 0x15f0))) {
          uVar24 = 1;
        }
        if (((((*(uint *)(local_588 + 0x38) & 0x800) == 0) ||
             (lVar32 = *(longlong *)(*(longlong *)(local_588 + 8) + 0x1150), lVar32 == 0)) ||
            (*(char *)(lVar32 + 0x27) == '\0')) ||
           ((*(char *)(lVar32 + 0x2a) == '\0' || (cVar9 = FUN_141b19380(), cVar9 == '\0')))) {
LAB_141dfb67b:
          bVar35 = false;
        }
        else {
          uVar4 = *(undefined4 *)(lVar16 + 0x1a38);
          uVar14 = FUN_14274f980(local_5a0);
          cVar9 = SupportsDistanceFieldAO(uVar4,uVar14);
          lVar16 = local_5a0;
          if (((cVar9 == '\0') || (((char)uVar24 == '\0' || (*(int *)(local_588 + 200) != 1)))) ||
             (1.0 < *(float *)(local_5a0 + 0x3cc) || *(float *)(local_5a0 + 0x3cc) == 1.0))
          goto LAB_141dfb67b;
          bVar35 = true;
        }
        if (local_5a7 == '\0') {
          lVar32 = *(longlong *)(lVar16 + 0x3090);
          plVar17 = (longlong *)0x0;
          if (bVar35) {
            local_350 = 0;
            local_358 = &DAT_146aabb80;
            TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
            ::FindId(lVar32 + 0x38,&local_534,&local_358);
            plVar28 = plVar17;
            if (local_534 != -1) {
              plVar28 = (longlong *)((longlong)local_534 * 0x20 + *(longlong *)(lVar32 + 0x38));
            }
            plVar29 = plVar28 + 2;
            if (plVar28 == (longlong *)0x0) {
              plVar29 = plVar17;
            }
            lVar32 = *plVar29;
            lVar27 = *(longlong *)(lVar32 + 0x48);
            if (*(char *)(lVar27 + 0x28) == '\0') {
              FUN_1419f3850(lVar27);
            }
            uVar3 = *(undefined8 *)(lVar27 + 0x60);
            FRHIComputeShader::UpdateStats(uVar3);
            puVar25 = (undefined8 *)(*puVar31 + 7 & 0xfffffffffffffff8);
            puVar26 = puVar25 + 3;
            if (*(undefined8 **)(param_2 + 0x38) < puVar26) {
              FMemStackBase::AllocateNewChunk(puVar31);
              puVar25 = (undefined8 *)(*puVar31 + 7 & 0xfffffffffffffff8);
              puVar26 = puVar25 + 3;
            }
            *puVar31 = (ulonglong)puVar26;
            *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
            **(undefined8 **)(param_2 + 8) = puVar25;
            *(undefined8 **)(param_2 + 8) = puVar25 + 1;
            puVar25[1] = 0;
            *puVar25 = &PTR_LAB_144d91e50;
            local_5b0 = &local_560;
            local_5b8 = local_2f8;
            local_5c0 = (undefined8 *)CONCAT71(local_5c0._1_7_,local_5a8);
            local_5c8 = (longlong **)0x0;
            puVar25[2] = uVar3;
            local_5d0 = local_558;
            local_5d8 = (wchar_t *)local_568;
            FUN_141e084b0(lVar32,param_2,local_5a0,local_2b8);
            local_5d8 = (wchar_t *)CONCAT44(local_5d8._4_4_,iVar13);
            DispatchComputeShader(param_2,lVar32,uVar20,uVar33);
            plVar17 = local_590;
            lVar27 = *(longlong *)(lVar32 + 0x48);
            if (*(char *)(lVar27 + 0x28) == '\0') {
              FUN_1419f3850(lVar27);
            }
            local_3d8 = *(undefined8 *)(lVar27 + 0x60);
            puVar26 = &local_3d8;
          }
          else {
            local_340 = 0;
            local_348 = &DAT_146aabe20;
            TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
            ::FindId(lVar32 + 0x38,&local_524,&local_348);
            plVar28 = plVar17;
            if (local_524 != -1) {
              plVar28 = (longlong *)((longlong)local_524 * 0x20 + *(longlong *)(lVar32 + 0x38));
            }
            plVar29 = plVar28 + 2;
            if (plVar28 == (longlong *)0x0) {
              plVar29 = plVar17;
            }
            lVar32 = *plVar29;
            lVar27 = *(longlong *)(lVar32 + 0x48);
            if (*(char *)(lVar27 + 0x28) == '\0') {
              FUN_1419f3850(lVar27);
            }
            uVar3 = *(undefined8 *)(lVar27 + 0x60);
            FRHIComputeShader::UpdateStats(uVar3);
            puVar25 = (undefined8 *)(*puVar31 + 7 & 0xfffffffffffffff8);
            puVar26 = puVar25 + 3;
            if (*(undefined8 **)(param_2 + 0x38) < puVar26) {
              FMemStackBase::AllocateNewChunk(puVar31);
              puVar25 = (undefined8 *)(*puVar31 + 7 & 0xfffffffffffffff8);
              puVar26 = puVar25 + 3;
            }
            *puVar31 = (ulonglong)puVar26;
            *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
            **(undefined8 **)(param_2 + 8) = puVar25;
            *(undefined8 **)(param_2 + 8) = puVar25 + 1;
            puVar25[1] = 0;
            *puVar25 = &PTR_LAB_144d91e50;
            local_5b0 = &local_560;
            local_5b8 = local_2f8;
            local_5c0 = (undefined8 *)CONCAT71(local_5c0._1_7_,local_5a8);
            local_5c8 = (longlong **)0x0;
            puVar25[2] = uVar3;
            local_5d0 = local_558;
            local_5d8 = (wchar_t *)local_568;
            FUN_141e084b0(lVar32,param_2,local_5a0,local_2b8);
            local_5d8 = (wchar_t *)CONCAT44(local_5d8._4_4_,iVar13);
            DispatchComputeShader(param_2,lVar32,uVar20,uVar33);
            plVar17 = local_590;
            lVar27 = *(longlong *)(lVar32 + 0x48);
            if (*(char *)(lVar27 + 0x28) == '\0') {
              FUN_1419f3850(lVar27);
            }
            local_3d0 = *(undefined8 *)(lVar27 + 0x60);
            puVar26 = &local_3d0;
          }
        }
        else {
          lVar32 = *(longlong *)(*(longlong *)(lVar16 + 0x1ab0) + 0x13c8);
          if (lVar32 == 0) {
            puVar26 = (undefined8 *)(DAT_146ac3e30 + 0x30);
          }
          else {
            puVar26 = (undefined8 *)(lVar32 + 0x10);
          }
          lVar32 = *(longlong *)(lVar16 + 0x3090);
          plVar17 = (longlong *)0x0;
          uVar3 = *puVar26;
          if (bVar35) {
            local_370 = 0;
            local_378 = &DAT_146aaba30;
            TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
            ::FindId(lVar32 + 0x38,&local_52c,&local_378);
            plVar28 = plVar17;
            if (local_52c != -1) {
              plVar28 = (longlong *)((longlong)local_52c * 0x20 + *(longlong *)(lVar32 + 0x38));
            }
            plVar29 = plVar28 + 2;
            if (plVar28 == (longlong *)0x0) {
              plVar29 = plVar17;
            }
            lVar32 = *plVar29;
            lVar27 = *(longlong *)(lVar32 + 0x48);
            if (*(char *)(lVar27 + 0x28) == '\0') {
              FUN_1419f3850(lVar27);
            }
            uVar2 = *(undefined8 *)(lVar27 + 0x60);
            FRHIComputeShader::UpdateStats(uVar2);
            puVar25 = (undefined8 *)(*puVar31 + 7 & 0xfffffffffffffff8);
            puVar26 = puVar25 + 3;
            if (*(undefined8 **)(param_2 + 0x38) < puVar26) {
              FMemStackBase::AllocateNewChunk(puVar31);
              puVar25 = (undefined8 *)(*puVar31 + 7 & 0xfffffffffffffff8);
              puVar26 = puVar25 + 3;
            }
            *puVar31 = (ulonglong)puVar26;
            *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
            **(undefined8 **)(param_2 + 8) = puVar25;
            *(undefined8 **)(param_2 + 8) = puVar25 + 1;
            puVar25[1] = 0;
            *puVar25 = &PTR_LAB_144d91e50;
            puVar25[2] = uVar2;
            local_5b0 = &local_560;
            local_5b8 = local_2f8;
            local_5c0 = (undefined8 *)CONCAT71(local_5c0._1_7_,local_5a8);
            local_5d0 = local_558;
            local_5d8 = (wchar_t *)local_568;
            local_5c8 = (longlong **)uVar3;
            FUN_141e084b0(lVar32,param_2,local_5a0,local_2b8);
            local_5d8 = (wchar_t *)CONCAT44(local_5d8._4_4_,iVar13);
            DispatchComputeShader(param_2,lVar32,local_598,uVar33);
            plVar17 = local_590;
            lVar27 = *(longlong *)(lVar32 + 0x48);
            if (*(char *)(lVar27 + 0x28) == '\0') {
              FUN_1419f3850(lVar27);
            }
            local_3e8 = *(undefined8 *)(lVar27 + 0x60);
            puVar26 = &local_3e8;
          }
          else {
            local_360 = 0;
            local_368 = &DAT_146aabcd0;
            TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
            ::FindId(lVar32 + 0x38,&local_528,&local_368);
            plVar28 = plVar17;
            if (local_528 != -1) {
              plVar28 = (longlong *)((longlong)local_528 * 0x20 + *(longlong *)(lVar32 + 0x38));
            }
            plVar29 = plVar28 + 2;
            if (plVar28 == (longlong *)0x0) {
              plVar29 = plVar17;
            }
            lVar32 = *plVar29;
            lVar27 = *(longlong *)(lVar32 + 0x48);
            if (*(char *)(lVar27 + 0x28) == '\0') {
              FUN_1419f3850(lVar27);
            }
            uVar2 = *(undefined8 *)(lVar27 + 0x60);
            FRHIComputeShader::UpdateStats(uVar2);
            puVar25 = (undefined8 *)(*puVar31 + 7 & 0xfffffffffffffff8);
            puVar26 = puVar25 + 3;
            if (*(undefined8 **)(param_2 + 0x38) < puVar26) {
              FMemStackBase::AllocateNewChunk(puVar31);
              puVar25 = (undefined8 *)(*puVar31 + 7 & 0xfffffffffffffff8);
              puVar26 = puVar25 + 3;
            }
            *puVar31 = (ulonglong)puVar26;
            *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
            **(undefined8 **)(param_2 + 8) = puVar25;
            *(undefined8 **)(param_2 + 8) = puVar25 + 1;
            puVar25[1] = 0;
            *puVar25 = &PTR_LAB_144d91e50;
            puVar25[2] = uVar2;
            local_5b0 = &local_560;
            local_5b8 = local_2f8;
            local_5c0 = (undefined8 *)CONCAT71(local_5c0._1_7_,local_5a8);
            local_5d0 = local_558;
            local_5d8 = (wchar_t *)local_568;
            local_5c8 = (longlong **)uVar3;
            FUN_141e084b0(lVar32,param_2,local_5a0,local_2b8);
            local_5d8 = (wchar_t *)CONCAT44(local_5d8._4_4_,iVar13);
            DispatchComputeShader(param_2,lVar32,local_598,uVar33);
            plVar17 = local_590;
            lVar27 = *(longlong *)(lVar32 + 0x48);
            if (*(char *)(lVar27 + 0x28) == '\0') {
              FUN_1419f3850(lVar27);
            }
            local_3e0 = *(undefined8 *)(lVar27 + 0x60);
            puVar26 = &local_3e0;
          }
        }
        lVar27 = local_5a0;
        local_5c0 = (undefined8 *)CONCAT71(local_5c0._1_7_,1);
        local_5d0 = (longlong *)0x0;
        local_5d8 = (wchar_t *)0x0;
        local_5c8 = (longlong **)plVar17;
        FUN_141df64d0(lVar32 + 0xcc,param_2,puVar26,local_5a0);
        AK::MemoryMgr::StartProfileThreadUsage(0x464c2590);
        if (local_5a7 == '\0') {
          lVar32 = *(longlong *)(lVar27 + 0x1ab0);
          if (lVar32 != 0) {
            plVar17 = *(longlong **)(lVar32 + 0x13c8);
            *(undefined8 *)(lVar32 + 0x13c8) = 0;
            if (plVar17 != (longlong *)0x0) {
              lVar32 = *plVar17;
              goto LAB_141dfbcd0;
            }
          }
        }
        else {
          plVar17 = *(longlong **)(*(longlong *)(lVar27 + 0x1ab0) + 0x13c8);
          *(longlong **)(*(longlong *)(lVar27 + 0x1ab0) + 0x13c8) = local_590;
          if (local_590 != (longlong *)0x0) {
            (**(code **)(*local_590 + 0x28))();
          }
          if (plVar17 != (longlong *)0x0) {
            lVar32 = *plVar17;
LAB_141dfbcd0:
            (**(code **)(lVar32 + 0x30))(plVar17);
          }
        }
        pwVar5 = local_570;
        local_570 = (wchar_t *)0x0;
        if (pwVar5 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)pwVar5 + 0x30))();
        }
        plVar17 = local_578;
        local_578 = (longlong *)0x0;
        if (plVar17 != (longlong *)0x0) {
          (**(code **)(*plVar17 + 0x30))();
        }
        plVar17 = local_560;
        local_560 = (longlong *)0x0;
        if (plVar17 != (longlong *)0x0) {
          (**(code **)(*plVar17 + 0x30))();
        }
        plVar17 = (longlong *)(lVar27 + 0x2fc8);
        local_5c8 = (longlong **)CONCAT71(local_5c8._1_7_,1);
        local_5d0 = (longlong *)CONCAT71(local_5d0._1_7_,1);
        local_5d8 = L"IntegratedLightScattering";
        local_458 = plVar17;
        FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_168,plVar17);
        cVar9 = FUN_141e0bc40();
        if (cVar9 == '\0') {
          lVar32 = *(longlong *)(lVar27 + 0x3090);
          iVar13 = local_580 + -1 + DAT_1464c3700;
          local_330 = 0;
          lVar16 = (longlong)DAT_1464c3700;
          iVar10 = (int)((ulonglong)local_518 >> 0x20) + -1 + DAT_1464c3700;
          lVar6 = (longlong)DAT_1464c3700;
          local_338 = &DAT_146aaa750;
          TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
          ::FindId(lVar32 + 0x38,local_520,&local_338);
          plVar17 = (longlong *)0x0;
          if (local_520[0] != -1) {
            plVar17 = (longlong *)((longlong)local_520[0] * 0x20 + *(longlong *)(lVar32 + 0x38));
          }
          plVar28 = plVar17 + 2;
          if (plVar17 == (longlong *)0x0) {
            plVar28 = (longlong *)0x0;
          }
          lVar32 = *plVar28;
          lVar7 = *(longlong *)(lVar32 + 0x48);
          if (*(char *)(lVar7 + 0x28) == '\0') {
            FUN_1419f3850(lVar7);
          }
          uVar3 = *(undefined8 *)(lVar7 + 0x60);
          FRHIComputeShader::UpdateStats(uVar3);
          puVar25 = (undefined8 *)(*puVar31 + 7 & 0xfffffffffffffff8);
          puVar26 = puVar25 + 3;
          if (*(undefined8 **)(param_2 + 0x38) < puVar26) {
            FMemStackBase::AllocateNewChunk(puVar31);
            puVar25 = (undefined8 *)(*puVar31 + 7 & 0xfffffffffffffff8);
            puVar26 = puVar25 + 3;
          }
          *puVar31 = (ulonglong)puVar26;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar25;
          *(undefined8 **)(param_2 + 8) = puVar25 + 1;
          puVar25[1] = 0;
          *puVar25 = &PTR_LAB_144d91e50;
          puVar25[2] = uVar3;
          lVar7 = *(longlong *)(lVar32 + 0x48);
          if (*(char *)(lVar7 + 0x28) == '\0') {
            FUN_1419f3850(lVar7);
          }
          local_398 = *(undefined8 *)(lVar7 + 0x60);
          FUN_141aa9420(lVar32,param_2,local_398,*(undefined8 *)(lVar27 + 0x20));
          local_5d8 = (wchar_t *)local_2b8;
          FUN_141df2590(lVar32 + 0xc0,param_2,&local_398,lVar27);
          local_5d8 = (wchar_t *)CONCAT44(local_5d8._4_4_,1);
          DispatchComputeShader
                    (param_2,lVar32,(longlong)iVar13 / lVar16 & 0xffffffff,
                     (longlong)iVar10 / lVar6 & 0xffffffff);
          lVar16 = *(longlong *)(lVar32 + 0x48);
          if (*(char *)(lVar16 + 0x28) == '\0') {
            FUN_1419f3850(lVar16);
          }
          local_390 = *(undefined8 *)(lVar16 + 0x60);
          local_5c0 = (undefined8 *)CONCAT71(local_5c0._1_7_,1);
          local_5c8 = (longlong **)0x0;
          local_5d0 = (longlong *)0x0;
          local_5d8 = (wchar_t *)0x0;
          FUN_141df64d0(lVar32 + 0xc0,param_2,&local_390,lVar27);
        }
        else {
          lVar32 = *(longlong *)((longlong)ThreadLocalStoragePointer + local_478 * 8);
          if ((*(int *)(lVar32 + 0x38) < DAT_146aabf78) &&
             (_Init_thread_header(&DAT_146aabf78), DAT_146aabf78 == -1)) {
            FName::FName(&DAT_146aabf70,L"VolumetricFogFinalIntegrationAsyncBeginFence",1);
            _Init_thread_footer(&DAT_146aabf78);
          }
          if ((*(int *)(lVar32 + 0x38) < DAT_146aabf88) &&
             (_Init_thread_header(&DAT_146aabf88), DAT_146aabf88 == -1)) {
            FName::FName(&DAT_146aabf80,L"VolumetricFogFinalIntegrationAsyncEndFence",1);
            _Init_thread_footer(&DAT_146aabf88);
          }
          (**(code **)(*DAT_146ab6358 + 0xd0))(DAT_146ab6358,&local_4e8,&DAT_146aabf70);
          local_548 = local_4e8;
          local_4e8 = (undefined8 *)0x0;
          (**(code **)(*DAT_146ab6358 + 0xd0))(DAT_146ab6358,&local_540,&DAT_146aabf80);
          ppuVar34 = (undefined8 **)(local_588 + 0x2f8);
          if (ppuVar34 == &local_540) {
LAB_141dfc079:
            puVar26 = local_540;
            if (local_540 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(local_540 + 1);
              iVar13 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                if ((*(char *)(local_540 + 2) == '\0') &&
                   ((DAT_146ab62f5 != '\0' ||
                    (cVar9 = FOutputDevice::CanBeUsedOnAnyThread(), cVar9 == '\0')))) {
                  LOCK();
                  bVar35 = *(int *)((longlong)puVar26 + 0xc) == 0;
                  if (bVar35) {
                    *(int *)((longlong)puVar26 + 0xc) = 1;
                  }
                  UNLOCK();
                  if (bVar35) {
                    TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar26);
                  }
                }
                else {
                  (**(code **)*puVar26)(puVar26,1);
                }
              }
            }
          }
          else {
            puVar26 = *ppuVar34;
            *ppuVar34 = local_540;
            local_540 = (undefined8 *)0x0;
            if (puVar26 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(puVar26 + 1);
              iVar13 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                if ((*(char *)(puVar26 + 2) == '\0') &&
                   ((DAT_146ab62f5 != '\0' ||
                    (cVar9 = FOutputDevice::CanBeUsedOnAnyThread(), cVar9 == '\0')))) {
                  LOCK();
                  bVar35 = *(int *)((longlong)puVar26 + 0xc) == 0;
                  if (bVar35) {
                    *(int *)((longlong)puVar26 + 0xc) = 1;
                  }
                  UNLOCK();
                  if (bVar35) {
                    TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar26);
                  }
                }
                else {
                  (**(code **)*puVar26)(puVar26,1);
                }
              }
              goto LAB_141dfc079;
            }
          }
          plVar28 = (longlong *)(*puVar31 + 7 & 0xfffffffffffffff8);
          local_4e0 = *(undefined8 *)(*plVar17 + 0x18);
          local_470 = local_590[2];
          plVar17 = plVar28 + 1;
          if (*(longlong **)(param_2 + 0x38) < plVar17) {
            FMemStackBase::AllocateNewChunk(puVar31,0x10);
            plVar28 = (longlong *)(*puVar31 + 7 & 0xfffffffffffffff8);
            plVar17 = plVar28 + 1;
          }
          *puVar31 = (ulonglong)plVar17;
          *plVar28 = local_470;
          puVar25 = (undefined8 *)(*puVar31 + 7 & 0xfffffffffffffff8);
          puVar26 = puVar25 + 5;
          if (*(undefined8 **)(param_2 + 0x38) < puVar26) {
            FMemStackBase::AllocateNewChunk(puVar31,0x30);
            puVar25 = (undefined8 *)(*puVar31 + 7 & 0xfffffffffffffff8);
            puVar26 = puVar25 + 5;
          }
          puVar30 = local_548;
          *puVar31 = (ulonglong)puVar26;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar25;
          *(undefined8 **)(param_2 + 8) = puVar25 + 1;
          puVar25[1] = 0;
          puVar25[3] = plVar28;
          *puVar25 = &PTR_LAB_143f59470;
          *(undefined4 *)(puVar25 + 2) = 1;
          *(undefined4 *)(puVar25 + 4) = 0;
          *(undefined1 *)((longlong)puVar25 + 0x24) = 1;
          puVar25 = (undefined8 *)(*puVar31 + 7 & 0xfffffffffffffff8);
          puVar26 = puVar25 + 1;
          if (*(undefined8 **)(param_2 + 0x38) < puVar26) {
            FMemStackBase::AllocateNewChunk(puVar31,0x10);
            puVar25 = (undefined8 *)(*puVar31 + 7 & 0xfffffffffffffff8);
            puVar26 = puVar25 + 1;
          }
          *puVar31 = (ulonglong)puVar26;
          *puVar25 = local_4e0;
          puVar21 = (undefined8 *)(*puVar31 + 7 & 0xfffffffffffffff8);
          puVar26 = puVar21 + 6;
          if (*(undefined8 **)(param_2 + 0x38) < puVar26) {
            FMemStackBase::AllocateNewChunk(puVar31,0x38);
            puVar21 = (undefined8 *)(*puVar31 + 7 & 0xfffffffffffffff8);
            puVar26 = puVar21 + 6;
          }
          *puVar31 = (ulonglong)puVar26;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar21;
          *(undefined8 **)(param_2 + 8) = puVar21 + 1;
          puVar21[1] = 0;
          *puVar21 = &PTR_LAB_144d91e60;
          *(undefined4 *)(puVar21 + 2) = 1;
          puVar21[3] = puVar25;
          puVar21[4] = 2;
          puVar21[5] = puVar30;
          puVar25 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
          puVar26 = puVar25 + 3;
          if (DAT_146ab7068 < puVar26) {
            FMemStackBase::AllocateNewChunk(&DAT_146ab7060,0x20);
            puVar25 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
            puVar26 = puVar25 + 3;
          }
          _DAT_146ab7044 = _DAT_146ab7044 + 1;
          local_320 = 0;
          DAT_146ab7060 = puVar26;
          *DAT_146ab7038 = puVar25;
          DAT_146ab7038 = puVar25 + 1;
          *DAT_146ab7038 = 0;
          *puVar25 = &PTR_LAB_144dc9d10;
          puVar25[2] = local_548;
          iVar13 = local_580 + -1 + DAT_1464c3700;
          lVar27 = (longlong)DAT_1464c3700;
          iVar10 = (int)((ulonglong)local_518 >> 0x20) + -1 + DAT_1464c3700;
          lVar16 = (longlong)DAT_1464c3700;
          local_328 = &DAT_146aaa750;
          lVar32 = *(longlong *)(local_5a0 + 0x3090);
          TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
          ::FindId(lVar32 + 0x38,&local_538,&local_328);
          plVar17 = (longlong *)0x0;
          if (local_538 != -1) {
            plVar17 = (longlong *)((longlong)local_538 * 0x20 + *(longlong *)(lVar32 + 0x38));
          }
          plVar28 = plVar17 + 2;
          if (plVar17 == (longlong *)0x0) {
            plVar28 = (longlong *)0x0;
          }
          lVar32 = *plVar28;
          lVar6 = *(longlong *)(lVar32 + 0x48);
          if (*(char *)(lVar6 + 0x28) == '\0') {
            FUN_1419f3850(lVar6);
          }
          uVar3 = *(undefined8 *)(lVar6 + 0x60);
          FRHIComputeShader::UpdateStats(uVar3);
          puVar25 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
          puVar26 = puVar25 + 3;
          if (DAT_146ab7068 < puVar26) {
            FMemStackBase::AllocateNewChunk(&DAT_146ab7060);
            puVar25 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
            puVar26 = puVar25 + 3;
          }
          _DAT_146ab7044 = _DAT_146ab7044 + 1;
          DAT_146ab7060 = puVar26;
          *DAT_146ab7038 = puVar25;
          DAT_146ab7038 = puVar25 + 1;
          *DAT_146ab7038 = 0;
          *puVar25 = &PTR_LAB_144dc9ce0;
          puVar25[2] = uVar3;
          lVar6 = *(longlong *)(lVar32 + 0x48);
          if (*(char *)(lVar6 + 0x28) == '\0') {
            FUN_1419f3850(lVar6);
          }
          local_468 = *(undefined8 *)(lVar6 + 0x60);
          FUN_141aa92b0(lVar32,&DAT_146ab7030,local_468,*(undefined8 *)(local_5a0 + 0x20));
          local_5d8 = (wchar_t *)local_2b8;
          FUN_141defcf0(lVar32 + 0xc0,&DAT_146ab7030,&local_468,local_5a0);
          local_5d8 = (wchar_t *)CONCAT44(local_5d8._4_4_,1);
          DispatchComputeShader
                    (&DAT_146ab7030,lVar32,(longlong)iVar13 / lVar27 & 0xffffffff,
                     (longlong)iVar10 / lVar16 & 0xffffffff);
          lVar27 = *(longlong *)(lVar32 + 0x48);
          if (*(char *)(lVar27 + 0x28) == '\0') {
            FUN_1419f3850(lVar27);
          }
          local_460 = *(undefined8 *)(lVar27 + 0x60);
          local_5c0 = (undefined8 *)CONCAT71(local_5c0._1_7_,1);
          local_5c8 = (longlong **)0x0;
          local_5d0 = (longlong *)0x0;
          local_5d8 = (wchar_t *)0x0;
          FUN_141df61e0(lVar32 + 0xc0,&DAT_146ab7030,&local_460,local_5a0);
          puVar25 = *ppuVar34;
          puVar30 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
          puVar26 = puVar30 + 1;
          if (DAT_146ab7068 < puVar26) {
            FMemStackBase::AllocateNewChunk(&DAT_146ab7060,0x10);
            puVar30 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
            puVar26 = puVar30 + 1;
          }
          DAT_146ab7060 = puVar26;
          *puVar30 = local_4e0;
          puVar21 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
          puVar26 = puVar21 + 6;
          if (DAT_146ab7068 < puVar26) {
            FMemStackBase::AllocateNewChunk(&DAT_146ab7060,0x38);
            puVar21 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
            puVar26 = puVar21 + 6;
          }
          _DAT_146ab7044 = _DAT_146ab7044 + 1;
          DAT_146ab7060 = puVar26;
          *DAT_146ab7038 = puVar21;
          DAT_146ab7038 = puVar21 + 1;
          *DAT_146ab7038 = 0;
          *puVar21 = &PTR_LAB_144dc9d00;
          *(undefined4 *)(puVar21 + 2) = 1;
          puVar21[3] = puVar30;
          *(undefined4 *)(puVar21 + 4) = 0;
          *(undefined4 *)((longlong)puVar21 + 0x24) = 1;
          puVar21[5] = puVar25;
          FUN_141ec93f0(&DAT_146ab7030);
          puVar26 = local_548;
          if (local_548 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(local_548 + 1);
            iVar13 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar13 == 1) {
              if ((*(char *)(local_548 + 2) == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar9 = FOutputDevice::CanBeUsedOnAnyThread(), cVar9 == '\0')))) {
                LOCK();
                bVar35 = *(int *)((longlong)puVar26 + 0xc) == 0;
                if (bVar35) {
                  *(int *)((longlong)puVar26 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar35) {
                  TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,local_548);
                }
              }
              else {
                (**(code **)*puVar26)(puVar26,1);
              }
            }
          }
        }
        lVar18 = 0x464c2590;
        AK::MemoryMgr::StartProfileThreadUsage(0x464c2590);
        AK::MemoryMgr::StartProfileThreadUsage(lVar18);
        if (local_590 != (longlong *)0x0) {
          (**(code **)(*local_590 + 0x30))();
        }
        if (local_558 != (longlong *)0x0) {
          (**(code **)(*local_558 + 0x30))();
        }
        if (local_578 != (longlong *)0x0) {
          (**(code **)(*local_578 + 0x30))();
        }
        if (local_570 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_570 + 0x30))();
        }
        if (local_560 != (longlong *)0x0) {
          (**(code **)(*local_560 + 0x30))();
        }
        if (local_1a8 != (undefined4 *)0x0) {
          FMemory::Free();
        }
        local_550 = local_550 + 1;
        local_4f0 = local_4f0 + 1;
        param_1 = local_588;
      } while (local_550 < *(int *)(local_588 + 200));
    }
  }
  return;
}



// FUNCTION 141dfc6d0 FUN_141dfc6d0 body=3533 status=ok
// SIG undefined FUN_141dfc6d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141dfc6d0(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  undefined8 *puVar22;
  bool bVar23;
  undefined1 auStack_338 [32];
  wchar_t *local_318;
  float local_310;
  float local_308;
  float local_300;
  float local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  longlong local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d0;
  uint local_2c8;
  undefined8 local_2c0;
  int local_2b8;
  int local_2b4;
  int local_2b0 [2];
  longlong local_2a8;
  undefined8 *local_2a0;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined8 local_284;
  undefined8 uStack_27c;
  undefined8 local_274;
  undefined4 local_26c;
  longlong local_268;
  undefined1 local_260 [8];
  longlong local_258;
  undefined1 local_250 [8];
  longlong local_248;
  undefined1 local_240 [8];
  longlong local_238;
  int local_230;
  int iStack_22c;
  longlong *local_228;
  longlong local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  longlong local_1e0;
  undefined *local_1d8;
  undefined4 local_1d0;
  undefined *local_1c8;
  undefined4 local_1c0;
  undefined1 local_1b8 [24];
  undefined1 local_1a0 [24];
  undefined1 local_188 [32];
  undefined8 local_168;
  undefined8 *puStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  uint local_118;
  int local_114 [16];
  undefined1 auStack_d4 [4];
  undefined8 local_d0;
  undefined4 local_c8;
  ulonglong local_c4;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
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
  longlong *plVar21;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_338;
  local_2b4 = 0;
  local_2c8 = 0;
  local_2b8 = 0;
  if (0 < *(int *)(param_1 + 200)) {
    local_220 = 0;
    puVar16 = local_2a0;
    puVar22 = local_2a0;
    local_2a8 = param_1;
    local_228 = param_3;
    do {
      lVar10 = 0;
      lVar20 = local_220 * 0x30d0 + *(longlong *)(local_2a8 + 0xc0);
      cVar8 = '\0';
      do {
        if (cVar8 != '\0') goto LAB_141dfc785;
        cVar8 = *(char *)(lVar10 + 0x1d80 + lVar20);
        lVar10 = lVar10 + 1;
      } while (lVar10 < 4);
      if (cVar8 != '\0') {
LAB_141dfc785:
        local_1e0 = lVar20;
        lVar10 = FSceneRenderTargets::Get(param_2);
        local_288 = *(undefined4 *)(lVar20 + 0x1aac);
        local_294 = *(undefined4 *)(lVar20 + 0x1aa0);
        local_290 = *(undefined4 *)(lVar20 + 0x1aa4);
        local_28c = *(undefined4 *)(lVar20 + 0x1aa8);
        local_298 = 0;
        local_284 = 0xffffffffffffffff;
        uStack_27c = 0xffffffffffffffff;
        local_274 = 0;
        local_26c = 0;
        local_238 = lVar10;
        puVar11 = (undefined8 *)FSceneRenderTargets::GetSceneColorTexture(lVar10);
        uVar6 = *puVar11;
        puVar11 = (undefined8 *)FSceneRenderTargets::GetSceneColorSurface(lVar10);
        puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        plVar21 = (longlong *)*puVar11;
        puVar11 = puVar14 + 10;
        if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x58);
          puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar11 = puVar14 + 10;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar11;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar14;
        *(undefined8 **)(param_2 + 8) = puVar14 + 1;
        puVar14[1] = 0;
        *puVar14 = &PTR_LAB_143f489f0;
        *(undefined4 *)(puVar14 + 2) = local_298;
        *(undefined4 *)((longlong)puVar14 + 0x14) = local_294;
        *(undefined4 *)(puVar14 + 3) = local_290;
        *(undefined4 *)((longlong)puVar14 + 0x1c) = local_28c;
        *(undefined4 *)(puVar14 + 4) = local_288;
        *(undefined4 *)((longlong)puVar14 + 0x24) = (undefined4)local_284;
        *(undefined4 *)(puVar14 + 5) = local_284._4_4_;
        *(undefined4 *)((longlong)puVar14 + 0x2c) = (undefined4)uStack_27c;
        *(undefined4 *)(puVar14 + 6) = uStack_27c._4_4_;
        *(undefined4 *)((longlong)puVar14 + 0x34) = (undefined4)local_274;
        *(undefined4 *)(puVar14 + 7) = local_274._4_4_;
        *(undefined4 *)((longlong)puVar14 + 0x3c) = local_26c;
        puVar14[8] = plVar21;
        puVar14[9] = uVar6;
        lVar10 = (**(code **)(*plVar21 + 8))(plVar21);
        if ((lVar10 == 0) && (lVar10 = (**(code **)(*(longlong *)puVar14[8] + 0x18))(), lVar10 == 0)
           ) {
          (**(code **)(*(longlong *)puVar14[8] + 0x20))();
        }
        lVar10 = (**(code **)(*(longlong *)puVar14[9] + 8))();
        if ((lVar10 == 0) && (lVar10 = (**(code **)(*(longlong *)puVar14[9] + 0x18))(), lVar10 == 0)
           ) {
          (**(code **)(*(longlong *)puVar14[9] + 0x20))();
        }
        plVar21 = local_228;
        lVar10 = *local_228;
        if (lVar10 == 0) {
          local_98 = DAT_1464c9cb0;
          local_308 = (float)CONCAT31(local_308._1_3_,1);
          local_310 = (float)CONCAT31(local_310._1_3_,1);
          uVar6 = *(undefined8 *)(local_238 + 0x378);
          local_94 = (undefined4)uVar6;
          local_2c0._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          local_90 = local_2c0._4_4_;
          local_88 = 1;
          local_80 = 1;
          local_74 = 1;
          local_68 = L"UnknownTexture2D";
          local_318 = L"SceneColorCopy";
          local_a8 = _DAT_1464c9ca0;
          uStack_a0 = uRam00000001464c9ca8;
          local_8c = 0;
          local_84 = 0x10000;
          local_7c = 2;
          local_70 = 0;
          local_60 = 1;
          local_2c0 = uVar6;
          FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_a8,local_228);
          lVar10 = *plVar21;
        }
        local_310 = (float)CONCAT31(local_310._1_3_,1);
        local_318 = (wchar_t *)((ulonglong)local_318 & 0xffffffff00000000);
        local_1e8 = 0;
        FUN_141ad74f0(param_2,*(undefined8 *)(lVar10 + 8),0,1);
        uVar2 = *(undefined4 *)(lVar20 + 0x1aac);
        uVar3 = *(undefined4 *)(lVar20 + 0x1aa8);
        puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        uVar4 = *(undefined4 *)(lVar20 + 0x1aa4);
        uVar5 = *(undefined4 *)(lVar20 + 0x1aa0);
        puVar11 = puVar14 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
          puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar11 = puVar14 + 5;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar11;
        uVar18 = 0;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar14;
        *(undefined8 **)(param_2 + 8) = puVar14 + 1;
        puVar14[1] = 0;
        *(undefined4 *)(puVar14 + 2) = uVar5;
        iVar19 = 0;
        plVar21 = (longlong *)0x0;
        *puVar14 = &PTR_LAB_143f59420;
        *(undefined4 *)(puVar14 + 3) = 0;
        *(undefined4 *)((longlong)puVar14 + 0x14) = uVar4;
        *(undefined4 *)((longlong)puVar14 + 0x1c) = uVar3;
        *(undefined4 *)(puVar14 + 4) = uVar2;
        *(undefined4 *)((longlong)puVar14 + 0x24) = 0x3f800000;
        local_118 = *(uint *)(param_2 + 0x98);
        local_168 = 0;
        puStack_160 = (undefined8 *)0x0;
        local_158 = 0;
        uStack_150 = 0;
        local_148 = (undefined8 *)0x0;
        uStack_140 = 0;
        local_138 = 0;
        uStack_130 = 0;
        local_128 = 0;
        local_120 = 0;
        local_11c = 0x26;
        local_114[0] = 0;
        local_114[1] = 0;
        local_114[2] = 0;
        local_114[3] = 0;
        local_114[4] = 0;
        local_114[5] = 0;
        local_114[6] = 0;
        local_114[7] = 0;
        local_114[8] = 0;
        local_114[9] = 0;
        local_114[10] = 0;
        local_114[0xb] = 0;
        local_114[0xc] = 0;
        local_114[0xd] = 0;
        local_114[0xe] = 0;
        stack0xffffffffffffff28 = 0;
        local_d0 = 0;
        local_c8 = 0;
        local_c4 = 0;
        local_bc = 0;
        local_b4 = 0;
        if (local_118 != 0) {
          do {
            lVar10 = *(longlong *)(param_2 + 0xa0 + uVar18 * 0x18);
            if (lVar10 == 0) {
              local_114[uVar18] = 0;
            }
            else {
              local_114[uVar18] = *(int *)(lVar10 + 0x3c);
              local_114[uVar18 + 8] = *(int *)(lVar10 + 0x40);
            }
            auStack_d4[uVar18] = *(undefined1 *)(param_2 + 0xb0 + uVar18 * 0x18);
            *(undefined1 *)((longlong)&local_d0 + uVar18 + 4) =
                 *(undefined1 *)(param_2 + 0xb1 + uVar18 * 0x18);
            if (local_114[uVar18] != 0) {
              local_b4 = CONCAT22(local_b4._2_2_,*(undefined2 *)(lVar10 + 0x38));
            }
            uVar17 = (int)uVar18 + 1;
            uVar18 = (ulonglong)uVar17;
          } while (uVar17 < local_118);
        }
        lVar10 = *(longlong *)(param_2 + 0x160);
        if (lVar10 == 0) {
          local_c4 = local_c4 & 0xffffffff00000000;
        }
        else {
          iVar19 = *(int *)(lVar10 + 0x3c);
          local_c4 = *(ulonglong *)(lVar10 + 0x3c);
        }
        local_bc = *(undefined8 *)(param_2 + 0x168);
        if (iVar19 != 0) {
          local_b4 = CONCAT22(local_b4._2_2_,*(undefined2 *)(lVar10 + 0x38));
        }
        if (DAT_146864320 == 0) {
          if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
            cVar8 = IsInRenderingThread();
            if (cVar8 == '\0') {
              FScopedEvent::FScopedEvent(local_260);
              plVar12 = (longlong *)FUN_14049e3d0(local_1b8,0,0xff);
              lVar10 = *plVar12;
              *(undefined1 **)(lVar10 + 0x10) = &LAB_140985690;
              *(undefined1 **)(lVar10 + 0x18) = local_260;
              lVar10 = *plVar12;
              lVar13 = plVar12[2];
              lVar20 = plVar12[1];
              lVar7 = *(longlong *)(lVar10 + 0x28);
              piVar1 = (int *)(lVar7 + 0x48);
              if (lVar7 != 0) {
                LOCK();
                *piVar1 = *piVar1 + 1;
                UNLOCK();
              }
              local_268 = lVar7;
              FUN_1404a4fe0(lVar10,lVar20,(int)lVar13,1);
              if (lVar7 != 0) {
                LOCK();
                iVar19 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar19 == 1) {
                  FGraphEvent::Recycle(local_268);
                }
              }
              FScopedEvent::~FScopedEvent(local_260);
            }
            else {
              lVar10 = operator_new(0x38);
              if (lVar10 == 0) {
                DAT_146864320 = 0;
              }
              else {
                DAT_146864320 =
                     TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
                     ::FStaticStateResource::FStaticStateResource(lVar10);
              }
            }
          }
          else {
            lVar10 = operator_new(0x38);
            if (lVar10 == 0) {
              LOCK();
              if (DAT_146864320 == 0) {
                DAT_146864320 = 0;
              }
              UNLOCK();
            }
            else {
              lVar10 = TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
                       ::FStaticStateResource::FStaticStateResource(lVar10);
              LOCK();
              if (DAT_146864320 != 0) {
                lVar10 = DAT_146864320;
              }
              DAT_146864320 = lVar10;
              UNLOCK();
            }
          }
        }
        uStack_130 = *(undefined8 *)(DAT_146864320 + 0x30);
        if (DAT_146864318 == 0) {
          if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
            cVar8 = IsInRenderingThread();
            if (cVar8 == '\0') {
              FScopedEvent::FScopedEvent(local_250);
              plVar12 = (longlong *)FUN_14049e3d0(local_1a0,0,0xff);
              lVar10 = *plVar12;
              *(undefined1 **)(lVar10 + 0x10) = &LAB_140985680;
              *(undefined1 **)(lVar10 + 0x18) = local_250;
              lVar10 = *plVar12;
              lVar13 = plVar12[2];
              lVar20 = plVar12[1];
              lVar7 = *(longlong *)(lVar10 + 0x28);
              piVar1 = (int *)(lVar7 + 0x48);
              if (lVar7 != 0) {
                LOCK();
                *piVar1 = *piVar1 + 1;
                UNLOCK();
              }
              local_258 = lVar7;
              FUN_1404a4fe0(lVar10,lVar20,(int)lVar13,1);
              if (lVar7 != 0) {
                LOCK();
                iVar19 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar19 == 1) {
                  FGraphEvent::Recycle(local_258);
                }
              }
              FScopedEvent::~FScopedEvent(local_250);
            }
            else {
              lVar10 = operator_new(0x38);
              if (lVar10 == 0) {
                DAT_146864318 = 0;
              }
              else {
                DAT_146864318 =
                     TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                     ::FStaticStateResource::FStaticStateResource(lVar10);
              }
            }
          }
          else {
            lVar10 = operator_new(0x38);
            if (lVar10 == 0) {
              LOCK();
              if (DAT_146864318 == 0) {
                DAT_146864318 = 0;
              }
              UNLOCK();
            }
            else {
              lVar10 = TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                       ::FStaticStateResource::FStaticStateResource(lVar10);
              LOCK();
              if (DAT_146864318 != 0) {
                lVar10 = DAT_146864318;
              }
              DAT_146864318 = lVar10;
              UNLOCK();
            }
          }
        }
        local_128 = *(undefined8 *)(DAT_146864318 + 0x30);
        if (DAT_146852b40 == 0) {
          if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
            cVar8 = IsInRenderingThread();
            if (cVar8 == '\0') {
              FScopedEvent::FScopedEvent(local_240);
              plVar12 = (longlong *)FUN_14049e3d0(local_188,0,0xff);
              lVar10 = *plVar12;
              *(undefined1 **)(lVar10 + 0x10) = &LAB_1404a0f60;
              *(undefined1 **)(lVar10 + 0x18) = local_240;
              lVar10 = *plVar12;
              lVar13 = plVar12[2];
              lVar20 = plVar12[1];
              lVar7 = *(longlong *)(lVar10 + 0x28);
              piVar1 = (int *)(lVar7 + 0x48);
              if (lVar7 != 0) {
                LOCK();
                *piVar1 = *piVar1 + 1;
                UNLOCK();
              }
              local_248 = lVar7;
              FUN_1404a4fe0(lVar10,lVar20,(int)lVar13,1);
              if (lVar7 != 0) {
                LOCK();
                iVar19 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar19 == 1) {
                  FGraphEvent::Recycle(local_248);
                }
              }
              FScopedEvent::~FScopedEvent(local_240);
            }
            else {
              lVar10 = operator_new(0x38);
              if (lVar10 == 0) {
                DAT_146852b40 = 0;
              }
              else {
                DAT_146852b40 =
                     TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                     ::FStaticStateResource::FStaticStateResource(lVar10);
              }
            }
          }
          else {
            lVar10 = operator_new(0x38);
            if (lVar10 == 0) {
              LOCK();
              if (DAT_146852b40 == 0) {
                DAT_146852b40 = 0;
              }
              UNLOCK();
            }
            else {
              lVar10 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                       ::FStaticStateResource::FStaticStateResource(lVar10);
              LOCK();
              if (DAT_146852b40 != 0) {
                lVar10 = DAT_146852b40;
              }
              DAT_146852b40 = lVar10;
              UNLOCK();
            }
          }
        }
        lVar20 = local_1e0;
        local_1d0 = 0;
        local_138 = *(undefined8 *)(DAT_146852b40 + 0x30);
        lVar10 = *(longlong *)(local_1e0 + 0x3090);
        local_1d8 = &DAT_146b09c50;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(lVar10 + 0x38,local_2b0,&local_1d8);
        plVar12 = plVar21;
        if (local_2b0[0] != -1) {
          plVar12 = (longlong *)((longlong)local_2b0[0] * 0x20 + *(longlong *)(lVar10 + 0x38));
        }
        local_1c0 = 0;
        plVar15 = plVar12 + 2;
        if (plVar12 == (longlong *)0x0) {
          plVar15 = plVar21;
        }
        local_1c8 = &DAT_146aa9620;
        lVar7 = *plVar15;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(lVar10 + 0x38,&local_2b4);
        plVar12 = plVar21;
        if (local_2b4 != -1) {
          plVar12 = (longlong *)((longlong)local_2b4 * 0x20 + *(longlong *)(lVar10 + 0x38));
        }
        plVar15 = plVar12 + 2;
        if (plVar12 == (longlong *)0x0) {
          plVar15 = plVar21;
        }
        lVar10 = *plVar15;
        local_168 = DAT_1464c2720;
        if (lVar7 == 0) {
          local_2c8 = local_2c8 | 1;
          puStack_160 = (undefined8 *)0x0;
          puVar16 = puStack_160;
        }
        else {
          lVar13 = *(longlong *)(lVar7 + 0x48);
          if (*(char *)(lVar13 + 0x28) == '\0') {
            FUN_1419f3850(lVar13);
          }
          puStack_160 = *(undefined8 **)(lVar13 + 0x38);
        }
        uVar17 = local_2c8;
        if (((local_2c8 & 1) != 0) &&
           (uVar17 = local_2c8 & 0xfffffffe, local_2c8 = uVar17, puVar16 != (undefined8 *)0x0)) {
          LOCK();
          piVar1 = (int *)(puVar16 + 1);
          iVar19 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            if ((*(char *)(puVar16 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar8 = FOutputDevice::CanBeUsedOnAnyThread(), cVar8 == '\0')))) {
              LOCK();
              bVar23 = *(int *)((longlong)puVar16 + 0xc) == 0;
              if (bVar23) {
                *(int *)((longlong)puVar16 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar23) {
                uVar9 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar9 == 0) {
                  lVar13 = 0;
                }
                else {
                  lVar13 = (&DAT_1468a81f8)[uVar9 >> 0xe] + (ulonglong)(uVar9 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar13 + 8) = puVar16;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar16)(puVar16,1);
            }
          }
        }
        if (lVar10 == 0) {
          local_2c8 = uVar17 | 2;
          local_148 = (undefined8 *)0x0;
          puVar22 = local_148;
        }
        else {
          lVar13 = *(longlong *)(lVar10 + 0x48);
          if (*(char *)(lVar13 + 0x28) == '\0') {
            FUN_1419f3850(lVar13);
          }
          local_148 = *(undefined8 **)(lVar13 + 0x40);
        }
        if (((local_2c8 & 2) != 0) &&
           (local_2c8 = local_2c8 & 0xfffffffd, puVar22 != (undefined8 *)0x0)) {
          LOCK();
          piVar1 = (int *)(puVar22 + 1);
          iVar19 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            if ((*(char *)(puVar22 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar8 = FOutputDevice::CanBeUsedOnAnyThread(), cVar8 == '\0')))) {
              LOCK();
              bVar23 = *(int *)((longlong)puVar22 + 0xc) == 0;
              if (bVar23) {
                *(int *)((longlong)puVar22 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar23) {
                uVar17 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar17 == 0) {
                  lVar13 = 0;
                }
                else {
                  lVar13 = (&DAT_1468a81f8)[uVar17 >> 0xe] + (ulonglong)(uVar17 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar13 + 8) = puVar22;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar22)(puVar22,1);
            }
          }
        }
        local_11c = 0;
        FUN_141ed6ac0(param_2,&local_168,2,1);
        lVar13 = *(longlong *)(lVar10 + 0x48);
        if (*(char *)(lVar13 + 0x28) == '\0') {
          FUN_1419f3850(lVar13);
        }
        local_2a0 = *(undefined8 **)(lVar13 + 0x40);
        local_318._0_4_ = 0xf;
        FUN_141aa6800(lVar10 + 0xc0,param_2,&local_2a0,*(undefined4 *)(lVar20 + 0x1a38));
        local_2e8 = *(undefined8 *)(local_238 + 0x378);
        local_230 = *(int *)(lVar20 + 0x1aa8) - *(int *)(lVar20 + 0x1aa0);
        iStack_22c = *(int *)(lVar20 + 0x1aac) - *(int *)(lVar20 + 0x1aa4);
        local_300 = (float)local_230;
        local_2d0 = 1;
        local_2d8 = 1;
        local_2f0 = CONCAT44(iStack_22c,local_230);
        local_2f8 = (float)iStack_22c;
        local_310 = (float)*(int *)(lVar20 + 0x1aa0);
        local_308 = (float)*(int *)(lVar20 + 0x1aa4);
        local_318 = (wchar_t *)CONCAT44(local_318._4_4_,local_2f8);
        local_2e0 = lVar7;
        DrawRectangle(param_2);
        local_218 = 0xffffffff00000000;
        uStack_210 = 0xffffffffffffffff;
        puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        local_208 = 0xffffffffffffffff;
        uStack_200 = 0xffffffffffffffff;
        local_1f8 = 0xffffffff;
        uStack_1f0 = 0;
        uVar6 = *(undefined8 *)(*local_228 + 0x10);
        plVar21 = *(longlong **)(*local_228 + 8);
        puVar11 = puVar14 + 10;
        if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x58);
          puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar11 = puVar14 + 10;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar11;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar14;
        *(undefined8 **)(param_2 + 8) = puVar14 + 1;
        puVar14[1] = 0;
        *puVar14 = &PTR_LAB_143f489f0;
        *(undefined4 *)(puVar14 + 2) = (undefined4)local_218;
        *(undefined4 *)((longlong)puVar14 + 0x14) = local_218._4_4_;
        *(undefined4 *)(puVar14 + 3) = (undefined4)uStack_210;
        *(undefined4 *)((longlong)puVar14 + 0x1c) = uStack_210._4_4_;
        *(undefined4 *)(puVar14 + 4) = (undefined4)local_208;
        *(undefined4 *)((longlong)puVar14 + 0x24) = local_208._4_4_;
        *(undefined4 *)(puVar14 + 5) = (undefined4)uStack_200;
        *(undefined4 *)((longlong)puVar14 + 0x2c) = uStack_200._4_4_;
        *(undefined4 *)(puVar14 + 6) = (undefined4)local_1f8;
        *(undefined4 *)((longlong)puVar14 + 0x34) = local_1f8._4_4_;
        *(undefined4 *)(puVar14 + 7) = (undefined4)uStack_1f0;
        *(undefined4 *)((longlong)puVar14 + 0x3c) = uStack_1f0._4_4_;
        puVar14[8] = plVar21;
        puVar14[9] = uVar6;
        lVar10 = (**(code **)(*plVar21 + 8))(plVar21);
        if ((lVar10 == 0) && (lVar10 = (**(code **)(*(longlong *)puVar14[8] + 0x18))(), lVar10 == 0)
           ) {
          (**(code **)(*(longlong *)puVar14[8] + 0x20))();
        }
        lVar10 = (**(code **)(*(longlong *)puVar14[9] + 8))();
        if ((lVar10 == 0) && (lVar10 = (**(code **)(*(longlong *)puVar14[9] + 0x18))(), lVar10 == 0)
           ) {
          (**(code **)(*(longlong *)puVar14[9] + 0x20))();
        }
      }
      local_2b8 = local_2b8 + 1;
      local_220 = local_220 + 1;
    } while (local_2b8 < *(int *)(local_2a8 + 200));
  }
  return;
}



// FUNCTION 141dfd4a0 ConstructCompiledInstance body=198 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FWideCustomResolvePS<2,1,1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91300;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    FShaderResourceParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),&DAT_144dea4b8,1);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),L"FMaskTex",0);
    FShaderParameter::Bind(puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"ResolveOrigin",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141dfd570 ConstructCompiledInstance body=158 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FWideCustomResolvePS<0,1,1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91300;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    FShaderResourceParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),&DAT_144dea4b8,1);
    FShaderParameter::Bind(puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"ResolveOrigin",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141dfd610 FUN_141dfd610 body=46 status=ok
// SIG undefined FUN_141dfd610(void)

void FUN_141dfd610(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x170);
  if (lVar1 != 0) {
    FUN_141df6ba0(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141dfd640 ConstructCompiledInstance body=77 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * TPageTableUpdateVS<1>::ConstructCompiledInstance(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FPageTableUpdateVS::FPageTableUpdateVS(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dc8b78;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141dfd690 FUN_141dfd690 body=46 status=ok
// SIG undefined FUN_141dfd690(void)

void FUN_141dfd690(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x1b8);
  if (lVar1 != 0) {
    FUN_141df6d90(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141dfd6c0 FUN_141dfd6c0 body=77 status=ok
// SIG undefined FUN_141dfd6c0(void)

undefined8 * FUN_141dfd6c0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1a8);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141df8e20(puVar1,param_1);
    *puVar1 = &PTR_FUN_144e8a568;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141dfd710 FUN_141dfd710 body=77 status=ok
// SIG undefined FUN_141dfd710(void)

undefined8 * FUN_141dfd710(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1a0);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141df8fa0(puVar1,param_1);
    *puVar1 = &PTR_FUN_144e8a870;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141dfd760 FUN_141dfd760 body=77 status=ok
// SIG undefined FUN_141dfd760(void)

undefined8 * FUN_141dfd760(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1a8);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141df90b0(puVar1,param_1);
    *puVar1 = &PTR_FUN_144e8a568;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141dfd7b0 ConstructCompiledInstance body=80 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 *
FTranslucencyNearestDepthNeighborUpsamplingPS::ConstructCompiledInstance(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe8);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141df82f0(puVar1,param_1,1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e8ae98;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141dfd800 ConstructCompiledInstance body=80 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FTranslucencySimpleUpsamplingPS::ConstructCompiledInstance(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe8);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141df82f0(puVar1,param_1,0);
    *puVar1 = &PTR__scalar_deleting_destructor__144e8ae98;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141dfd850 FUN_141dfd850 body=46 status=ok
// SIG undefined FUN_141dfd850(void)

void FUN_141dfd850(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x180);
  if (lVar1 != 0) {
    FUN_141df8a30(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141dfd880 FUN_141dfd880 body=160 status=ok
// SIG undefined FUN_141dfd880(void)

undefined8 * FUN_141dfd880(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d914f0;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xca) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"DiffuseColor",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18),L"VolumeVisualizationMode",0)
    ;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141dfd920 ConstructCompiledInstance body=248 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FStereoLayerVS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e8aec8;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xce) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xd6) = 0;
    FShaderParameter::Bind
              (puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"VisualizationRadiusScale",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18),
               L"VisualizationMinScreenFraction",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xcc,*(undefined8 *)(param_1 + 0x18),L"VolumeVisualizationMode",0)
    ;
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xd2,*(undefined8 *)(param_1 + 0x18),L"BaseInstanceOffset",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141dfda20 FUN_141dfda20 body=46 status=ok
// SIG undefined FUN_141dfda20(void)

void FUN_141dfda20(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x110);
  if (lVar1 != 0) {
    FVolumetricFogFinalIntegrationCS::FVolumetricFogFinalIntegrationCS(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141dfda50 FUN_141dfda50 body=272 status=ok
// SIG undefined FUN_141dfda50(void)

undefined8 * FUN_141dfda50(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x130);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141d89a50(puVar1,param_1);
    *puVar1 = &PTR_FUN_144e8b160;
    *(undefined4 *)(puVar1 + 0x22) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x114) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x116) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x11e) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x126) = 0;
    FShaderParameter::Bind
              (puVar1 + 0x22,*(undefined8 *)(param_1 + 0x18),L"LightFunctionParameters",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x11c,*(undefined8 *)(param_1 + 0x18),L"LightFunctionWorldToLight"
               ,0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x116,*(undefined8 *)(param_1 + 0x18),L"LightFunctionParameters2",
               0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x122,*(undefined8 *)(param_1 + 0x18),L"LightFunctionTexelSize",0)
    ;
    FShaderParameter::Bind(puVar1 + 0x25,*(undefined8 *)(param_1 + 0x18),L"ShadowToWorld",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141dfdb60 FUN_141dfdb60 body=46 status=ok
// SIG undefined FUN_141dfdb60(void)

void FUN_141dfdb60(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x120);
  if (lVar1 != 0) {
    FVolumetricFogMaterialSetupCS::FVolumetricFogMaterialSetupCS(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141dfdb90 FUN_141dfdb90 body=46 status=ok
// SIG undefined FUN_141dfdb90(void)

void FUN_141dfdb90(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x120);
  if (lVar1 != 0) {
    FWriteToBoundingSphereVS::FWriteToBoundingSphereVS(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141dfdbc0 FUN_141dfdbc0 body=36 status=ok
// SIG undefined FUN_141dfdbc0(void)

void FUN_141dfdbc0(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x170);
  if (lVar1 != 0) {
    TInjectShadowedLocalLightPS<1,1,1>::TInjectShadowedLocalLightPS<1,1,1>(lVar1);
    return;
  }
  return;
}



// FUNCTION 141dfdbf0 ConstructSerializedInstance body=86 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * TPageTableUpdateVS<1>::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xd4) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144dc8b78;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141dfdc50 FUN_141dfdc50 body=36 status=ok
// SIG undefined FUN_141dfdc50(void)

void FUN_141dfdc50(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x1b8);
  if (lVar1 != 0) {
    FUN_141df70c0(lVar1);
    return;
  }
  return;
}



// FUNCTION 141dfdc80 FUN_141dfdc80 body=57 status=ok
// SIG undefined FUN_141dfdc80(void)

undefined8 * FUN_141dfdc80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1a8);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141df8f10(puVar1);
    *puVar1 = &PTR_FUN_144e8a568;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141dfdcc0 ConstructSerializedInstance body=57 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 *
FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1a0);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141df9030(puVar1);
    *puVar1 = &PTR_FUN_144e8a870;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141dfdd00 FUN_141dfdd00 body=57 status=ok
// SIG undefined FUN_141dfdd00(void)

undefined8 * FUN_141dfdd00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1a8);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141df91a0(puVar1);
    *puVar1 = &PTR_FUN_144e8a568;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141dfdd40 ConstructSerializedInstance body=59 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FTranslucencyNearestDepthNeighborUpsamplingPS::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe8);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141df8270(puVar1,1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e8ae98;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141dfdd80 ConstructSerializedInstance body=59 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FTranslucencySimpleUpsamplingPS::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe8);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141df8270(puVar1,0);
    *puVar1 = &PTR__scalar_deleting_destructor__144e8ae98;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141dfddc0 FUN_141dfddc0 body=100 status=ok
// SIG undefined FUN_141dfddc0(void)

undefined8 * FUN_141dfddc0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x180);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf7d0(puVar1);
    *puVar1 = &PTR_FUN_144e8a738;
    puVar1[0x2a] = 0;
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    puVar1[0x2e] = 0;
    *(undefined4 *)(puVar1 + 0x2f) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141dfde30 FUN_141dfde30 body=80 status=ok
// SIG undefined FUN_141dfde30(void)

undefined8 * FUN_141dfde30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e8aec8;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141dfde80 FUN_141dfde80 body=36 status=ok
// SIG undefined FUN_141dfde80(void)

void FUN_141dfde80(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x110);
  if (lVar1 != 0) {
    FVolumetricFogFinalIntegrationCS::FVolumetricFogFinalIntegrationCS(lVar1);
    return;
  }
  return;
}



// FUNCTION 141dfdeb0 FUN_141dfdeb0 body=93 status=ok
// SIG undefined FUN_141dfdeb0(void)

undefined8 * FUN_141dfdeb0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x130);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141afa950(puVar1);
    *puVar1 = &PTR_FUN_144e8b160;
    puVar1[0x22] = 0;
    puVar1[0x23] = 0;
    puVar1[0x24] = 0;
    *(undefined4 *)(puVar1 + 0x25) = 0;
    *(undefined2 *)((longlong)puVar1 + 300) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141dfdf10 FUN_141dfdf10 body=36 status=ok
// SIG undefined FUN_141dfdf10(void)

void FUN_141dfdf10(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x120);
  if (lVar1 != 0) {
    FVolumetricFogMaterialSetupCS::FVolumetricFogMaterialSetupCS(lVar1);
    return;
  }
  return;
}



// FUNCTION 141dfdf40 FUN_141dfdf40 body=36 status=ok
// SIG undefined FUN_141dfdf40(void)

void FUN_141dfdf40(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x120);
  if (lVar1 != 0) {
    FWriteToBoundingSphereVS::FWriteToBoundingSphereVS(lVar1);
    return;
  }
  return;
}



// FUNCTION 141dfdf70 CreateTask body=378 status=ok
// SIG undefined CreateTask(void)

undefined8 *
TGraphTask<FTranscodeTask>::CreateTask(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar8 = (longlong)&PTR__scalar_deleting_destructor__144e8b358;
  *(undefined1 *)(plVar8 + 0x17) = 0;
  plVar8[0x18] = local_res10;
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



// FUNCTION 141dfe0f0 FUN_141dfe0f0 body=1595 status=ok
// SIG undefined FUN_141dfe0f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141dfe0f0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  undefined8 param_5,int param_6)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong extraout_XMM0_Qa;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_8a8 [32];
  undefined4 local_888;
  longlong local_878 [2];
  undefined8 local_868;
  float fStack_860;
  float fStack_85c;
  longlong local_858;
  undefined8 local_850;
  undefined1 local_848 [640];
  undefined1 local_5c8 [640];
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined1 local_228 [272];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  float local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_8a8;
  local_850 = param_5;
  lVar2 = FSceneRenderTargets::Get();
  local_878[0] = lVar2;
  FForwardLightData::FForwardLightData(local_848);
  FForwardLightData::FForwardLightData(local_5c8);
  local_348 = 0;
  uStack_340 = 0x3f80000000000000;
  local_2d8 = 0;
  uStack_2d0 = 0x3f80000000000000;
  local_2c8 = 0;
  uStack_2c0 = 0x3f80000000000000;
  local_2b8 = 0;
  uStack_2b0 = 0x3f80000000000000;
  local_288 = 0;
  uStack_280 = 0x3f80000000000000;
  local_278 = 0;
  uStack_270 = 0x3f80000000000000;
  local_f8 = 0;
  uStack_f0 = 0x3f80000000000000;
  local_e8 = 0;
  uStack_e0 = 0x3f80000000000000;
  FUN_141ada8c0(param_1,param_2,lVar2,local_848);
  FUN_141d05c90(lVar2,*(undefined4 *)(param_2 + 0x1a38),param_4,local_228);
  puVar3 = (undefined8 *)FUN_141ce45c0(lVar2);
  FSceneRenderTargets::GetSceneColorTexture(lVar2);
  puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar8 + 2;
  if (*(undefined8 **)(param_1 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x18);
    puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar8 + 2;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar4;
  *puVar8 = *puVar3;
  puVar8[1] = puVar3[1];
  puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar3 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar3 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar4;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar3;
  *(undefined8 **)(param_1 + 8) = puVar3 + 1;
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar3 + 2) = 2;
  puVar3[3] = puVar8;
  *(undefined4 *)(puVar3 + 4) = 0;
  *(undefined1 *)((longlong)puVar3 + 0x24) = 0;
  puVar4 = (undefined8 *)GetEyeAdaptation(param_2);
  fVar16 = 1.0 / *(float *)(param_2 + 0x2f28);
  local_118 = *puVar4;
  if (*(longlong *)(param_2 + 0x2f88) == 0) {
    local_d0 = *(undefined8 *)(DAT_146ac3e00 + 0x30);
    local_c8 = FUN_1404a0e20();
    local_c0 = *(undefined8 *)(DAT_146ac3e00 + 0x30);
    local_b8 = FUN_141a156e0();
    iVar11 = *(int *)(param_2 + 0x1aac);
    uVar13 = extraout_XMM0_Qa;
    goto LAB_141dfe3fe;
  }
  local_d0 = *(undefined8 *)(*(longlong *)(param_2 + 0x2f88) + 0x10);
  local_c8 = FUN_1404a0e20();
  plVar5 = &DAT_1464c3318;
  if (*(longlong *)(param_2 + 0x2f10) == 0) {
    if (*(longlong *)(param_2 + 0x2e50) != 0) {
      plVar5 = (longlong *)(param_2 + 0x2e50);
      goto LAB_141dfe30d;
    }
  }
  else {
    plVar5 = (longlong *)(param_2 + 0x2f10);
LAB_141dfe30d:
    fVar16 = 1.0 / *(float *)(param_2 + 0x2e78);
  }
  local_c0 = *(undefined8 *)(*plVar5 + 0x10);
  local_b8 = FUN_141a156e0();
  iVar11 = *(int *)(param_2 + 0x1aac);
  fVar15 = (float)(*(int *)(param_2 + 0x1aa8) - *(int *)(param_2 + 0x1aa0)) /
           (float)(*(int *)(param_2 + 0x2fd0) * 2);
  fVar14 = (float)(iVar11 - *(int *)(param_2 + 0x1aa4)) / (float)(*(int *)(param_2 + 0x2fd4) * 2);
  fStack_860 = 1.0 / fVar15;
  uVar13 = (ulonglong)(uint)fStack_860;
  fStack_85c = 1.0 / fVar14;
  local_868 = CONCAT44(fVar14,fVar15);
  local_f8 = CONCAT44(fVar14,fVar15);
  uStack_f0 = CONCAT44(fStack_85c,fStack_860);
LAB_141dfe3fe:
  uVar9 = *(ulonglong *)(param_2 + 0x1aa0);
  uVar6 = *(ulonglong *)(lVar2 + 0x378);
  iVar12 = *(int *)(param_2 + 0x1aa8) - (int)uVar9;
  iVar7 = (int)(uVar9 >> 0x20);
  iVar11 = iVar11 - iVar7;
  iVar10 = (int)(uVar6 >> 0x20);
  if (*(longlong **)(param_2 + 0x2e50) != (longlong *)0x0) {
    uVar1 = *(uint *)(param_2 + 0x2e68);
    iVar7 = *(int *)(param_2 + 0x2e6c);
    iVar12 = *(int *)(param_2 + 0x2e70);
    iVar11 = *(int *)(param_2 + 0x2e74);
    lVar2 = (**(code **)(**(longlong **)(param_2 + 0x2e50) + 0x10))(uVar13);
    iVar12 = iVar12 - uVar1;
    iVar11 = iVar11 - iVar7;
    uVar9 = (ulonglong)uVar1;
    iVar10 = *(int *)(lVar2 + 0x18);
    uVar6 = (ulonglong)*(uint *)(lVar2 + 0x14);
  }
  fStack_860 = 1.0 / (float)(int)uVar6;
  fVar15 = fStack_860 * (float)iVar12 * 0.5;
  fVar14 = (float)-iVar11 * 0.5 * (1.0 / (float)iVar10);
  fStack_860 = ((float)(int)uVar9 + (float)iVar12 * 0.5) * fStack_860;
  fStack_85c = ((float)iVar11 * 0.5 + (float)iVar7) * (1.0 / (float)iVar10);
  local_e8 = CONCAT44(fVar14,fVar15);
  uStack_e0 = CONCAT44(fStack_85c,fStack_860);
  local_868 = CONCAT44(fVar14,fVar15);
  lVar2 = *(longlong *)(local_878[0] + 0x1b8);
  if (*(longlong *)(local_878[0] + 0x1b8) == 0) {
    lVar2 = local_878[0] + 0x1a0;
  }
  local_d8 = fVar16;
  if (*(longlong *)(lVar2 + (ulonglong)(-(uint)(DAT_1464c32d4 != 0) & 0x10)) == 0) {
    local_878[0] = *(longlong *)(DAT_1464c3318 + 0x10);
    if (local_878[0] != 0) {
      LOCK();
      *(int *)(local_878[0] + 8) = *(int *)(local_878[0] + 8) + 1;
      UNLOCK();
    }
    local_b0 = local_878[0];
    local_a0 = local_878[0];
    local_90 = local_878[0];
    local_80 = local_878[0];
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_878);
  }
  else {
    param_6 = param_6 * 3;
    local_b0 = *(longlong *)
                (*(longlong *)
                  (lVar2 + (longlong)(int)(param_6 + (-(uint)(DAT_1464c32d4 != 0) & 2)) * 8) + 0x10)
    ;
    lVar2 = *(longlong *)(local_878[0] + 0x1b8);
    if (*(longlong *)(local_878[0] + 0x1b8) == 0) {
      lVar2 = local_878[0] + 0x1a0;
    }
    local_a0 = *(longlong *)
                (*(longlong *)(lVar2 + (longlong)(int)(param_6 + (uint)(DAT_1464c32d4 == 0)) * 8) +
                0x10);
    lVar2 = *(longlong *)(local_878[0] + 0x1e0);
    if (*(longlong *)(local_878[0] + 0x1e0) == 0) {
      lVar2 = local_878[0] + 0x1c8;
    }
    local_90 = *(longlong *)
                (*(longlong *)
                  (lVar2 + (longlong)(int)(param_6 + (-(uint)(DAT_1464c32d4 != 0) & 2)) * 8) + 0x10)
    ;
    lVar2 = *(longlong *)(local_878[0] + 0x1e0);
    if (*(longlong *)(local_878[0] + 0x1e0) == 0) {
      lVar2 = local_878[0] + 0x1c8;
    }
    local_80 = *(longlong *)
                (*(longlong *)(lVar2 + (longlong)(int)(param_6 + (uint)(DAT_1464c32d4 == 0)) * 8) +
                0x10);
  }
  local_a8 = FUN_141a156e0();
  local_98 = FUN_141a156e0();
  local_88 = FUN_141a156e0();
  local_78 = FUN_141a156e0();
  if (param_3 == 0) {
    puVar4 = (undefined8 *)(DAT_146ac3e00 + 0x30);
  }
  else {
    puVar4 = (undefined8 *)(param_3 + 0x10);
  }
  local_110 = *puVar4;
  local_888 = 1;
  (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_858,local_848,&DAT_1469fda38);
  local_868 = local_858;
  if (local_858 != 0) {
    LOCK();
    *(int *)(local_858 + 8) = *(int *)(local_858 + 8) + 1;
    UNLOCK();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_858);
  TRefCountPtr<FRHIIndexBuffer>::operator=(local_850,&local_868);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_868);
  return;
}



// FUNCTION 141dfe730 FUN_141dfe730 body=450 status=ok
// SIG undefined FUN_141dfe730(void)

void FUN_141dfe730(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  short *psVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  
  if (param_1[0xe] == 0) {
    if (*(char *)(param_1 + 10) == '\0') {
      FUN_141de7700(*param_1,param_1[1],param_1[2],0,param_1 + 3,param_1[0xb],param_1[0xc],0);
    }
    else {
      FUN_141de7950(*param_1,param_1[1],param_1[0xf],*(char *)(param_1 + 10),param_1 + 3,0,0,
                    param_1 + 0xf,*(undefined4 *)(param_1 + 0xd),
                    *(undefined4 *)((longlong)param_1 + 0x6c),1);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0xd);
    uVar4 = (ulonglong)iVar1;
    iVar7 = *(int *)((longlong)param_1 + 0x6c);
    if (iVar1 <= iVar7) {
      uVar5 = uVar4;
      if (iVar7 < iVar1) goto LAB_141dfe799;
      do {
        psVar2 = (short *)(*(longlong *)param_1[0xe] + uVar5 * 2);
        do {
          if (*psVar2 != 0) break;
          uVar4 = (ulonglong)((int)uVar4 + 1);
          uVar5 = uVar5 + 1;
          psVar2 = psVar2 + 1;
        } while ((longlong)uVar5 <= (longlong)iVar7);
LAB_141dfe799:
        uVar3 = (uint)uVar4;
        if ((int)uVar3 <= iVar7) {
          uVar4 = uVar4 & 0xffffffff;
          uVar6 = uVar3;
          if ((int)uVar3 < iVar7) {
            psVar2 = (short *)(*(longlong *)param_1[0xe] + 2 + uVar5 * 2);
            do {
              uVar6 = (uint)uVar4;
              if (*psVar2 == 0) break;
              uVar6 = uVar6 + 1;
              uVar4 = (ulonglong)uVar6;
              uVar5 = uVar5 + 1;
              psVar2 = psVar2 + 1;
            } while ((longlong)uVar5 < (longlong)iVar7);
          }
          if (*(char *)(param_1 + 10) == '\0') {
            FUN_141de7700(*param_1,param_1[1],param_1[2],0,param_1 + 3,param_1[0xb],param_1[0xc],0);
          }
          else {
            FUN_141de7950(*param_1,param_1[1],param_1[0xf],*(char *)(param_1 + 10),param_1 + 3,0,0,
                          param_1 + 0xf,uVar3,uVar6,1);
          }
          iVar7 = *(int *)((longlong)param_1 + 0x6c);
          uVar4 = (ulonglong)(uVar6 + 1);
          uVar5 = uVar5 + 1;
        }
      } while ((int)uVar4 <= iVar7);
    }
  }
  FUN_141ec9240(param_1[1],param_3);
  return;
}



// FUNCTION 141dfe900 FUN_141dfe900 body=259 status=ok
// SIG undefined FUN_141dfe900(void)

undefined1
FUN_141dfe900(undefined8 param_1,undefined8 param_2,undefined4 *param_3,longlong param_4,
             undefined1 param_5,undefined8 *param_6,undefined8 param_7,undefined4 param_8)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  
  local_48 = *param_6;
  local_40 = param_6[1];
  local_38 = *(undefined4 *)(param_6 + 2);
  local_30 = param_6[3];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  local_28 = param_6[4];
  local_18 = *(undefined4 *)(param_4 + 0x90);
  local_20 = *(undefined4 *)(param_6 + 5);
  local_1c = *(undefined4 *)((longlong)param_6 + 0x2c);
  iVar2 = 1;
  local_14 = 0;
  if (*(int *)(param_4 + 0x80) != 1) {
    iVar2 = (1 << ((byte)*(int *)(param_4 + 0x80) & 0x1f)) + -1;
  }
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  param_6 = (undefined8 *)(longlong)iVar2;
  uVar1 = FUN_141dfed70(param_1,param_2,&local_58,param_4,&param_6,&local_48,param_5,param_7,param_8
                       );
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_30);
  return uVar1;
}



// FUNCTION 141dfea10 FUN_141dfea10 body=854 status=ok
// SIG undefined FUN_141dfea10(void)

undefined8
FUN_141dfea10(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
             char param_9)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  uint local_res10;
  uint uStackX_14;
  longlong *local_res20;
  ulonglong *puVar11;
  ulonglong uVar12;
  longlong local_128;
  ulonglong local_120;
  uint local_118 [2];
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  undefined1 local_c8 [56];
  longlong local_90;
  undefined1 local_68 [48];
  
  plVar7 = *(longlong **)(param_4 + 0xa8);
  uVar1 = *(undefined4 *)(param_2 + 0x1a38);
  iVar10 = 0;
  local_res20 = (longlong *)0x0;
  (**(code **)(*plVar7 + 0x40))(plVar7,uVar1,local_d8,&local_res20);
  plVar3 = local_res20;
  uVar5 = (**(code **)(*local_res20 + 0x1e8))(local_res20);
  if ((uVar5 < 2) && (iVar6 = (**(code **)(*plVar3 + 0x20))(plVar3), iVar6 != 3)) {
    cVar4 = FUN_141b196e0(plVar3,0);
    if ((cVar4 != '\0') &&
       ((cVar4 = (**(code **)(*plVar3 + 0x28))(plVar3), cVar4 == '\0' &&
        (cVar4 = FUN_14259cbc0(plVar3), cVar4 == '\0')))) {
      plVar7 = (longlong *)UMaterial::GetDefaultMaterial(0);
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x2a8))(plVar7,0,0);
    }
    uVar5 = *(uint *)(param_4 + 0x8c);
    local_128 = 0;
    uStackX_14 = uVar5 >> 0xc & 0x3f;
    local_res10 = ((uVar5 >> 0x13 & 0x80 | uVar5 & 0x100) >> 2 | uVar5 & 0x10) >> 4 | uVar5 & 8;
    local_120 = CONCAT44(uVar5 >> 0xc,local_res10) & 0x3fffffffff;
    (**(code **)(*plVar7 + 0x40))(plVar7,uVar1,local_d0,&local_128);
    puVar11 = &local_120;
    FUN_141df8430(local_c8,*(undefined8 *)(param_4 + 0xa0),plVar7,local_128,puVar11,uVar1);
    cVar4 = FUN_141e0bc90(local_c8);
    if (cVar4 != '\0') {
      local_110 = *param_6;
      local_108 = param_6[1];
      local_100 = *(undefined4 *)(param_6 + 2);
      local_f8 = param_6[3];
      if (local_f8 != 0) {
        LOCK();
        *(int *)(local_f8 + 8) = *(int *)(local_f8 + 8) + 1;
        UNLOCK();
      }
      local_f0 = param_6[4];
      local_e0 = *(undefined4 *)(param_4 + 0x90);
      local_e8 = *(undefined4 *)(param_6 + 5);
      local_e4 = *(undefined4 *)((longlong)param_6 + 0x2c);
      local_dc = 0;
      uVar8 = FUN_141e00690(local_c8,local_68,*(undefined4 *)(param_2 + 0x1a38));
      FUN_141a9adc0(param_1,local_c8,&local_110,uVar8);
      uVar12 = CONCAT71((int7)((ulonglong)puVar11 >> 8),param_9);
      FUN_141e09ec0(local_c8,param_1,&local_110,param_2,uVar12);
      local_120 = (ulonglong)*(int *)(param_4 + 0x80);
      if (0 < (longlong)local_120) {
        local_128 = 0;
        do {
          if (param_9 == '\0') {
LAB_141dfec55:
            local_res20 = (longlong *)CONCAT44(local_res20._4_4_,1);
          }
          else {
            local_res20 = (longlong *)CONCAT44(local_res20._4_4_,2);
            lVar9 = *(longlong *)(param_4 + 0x78);
            if (*(longlong *)(param_4 + 0x78) == 0) {
              lVar9 = param_4;
            }
            if (*(char *)(lVar9 + 0x67 + local_128) == '\0') goto LAB_141dfec55;
          }
          uVar5 = 0;
          do {
            lVar9 = local_90;
            local_118[0] = uVar5;
            if (*(short *)(local_90 + 0x174) != 0) {
              lVar2 = *(longlong *)(local_90 + 0x48);
              if (*(char *)(lVar2 + 0x28) == '\0') {
                FUN_1419f3850(lVar2);
              }
              FUN_1404986d0(param_1,*(undefined8 *)(lVar2 + 0x38),lVar9 + 0x170,local_118,
                            uVar12 & 0xffffffff00000000);
            }
            lVar9 = param_4;
            FUN_141e07fa0(local_c8,param_1,param_2,param_7,param_4,iVar10,&local_110,&local_res10,0)
            ;
            uVar12 = CONCAT44((int)((ulonglong)lVar9 >> 0x20),iVar10);
            FUN_141b315b0(local_c8,param_1,param_2,param_4,uVar12,param_9);
            uVar5 = uVar5 + 1;
          } while (uVar5 < (uint)local_res20);
          iVar10 = iVar10 + 1;
          local_128 = local_128 + 0x78;
          local_120 = local_120 - 1;
        } while (local_120 != 0);
      }
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_f8);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141dfed70 FUN_141dfed70 body=776 status=ok
// SIG undefined FUN_141dfed70(void)

undefined8
FUN_141dfed70(undefined8 param_1,longlong param_2,undefined8 *param_3,longlong param_4,
             undefined8 *param_5,undefined8 *param_6,byte param_7,longlong param_8,
             undefined4 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char cVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined1 local_fc;
  longlong *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  longlong local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  byte local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined1 local_b3;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined1 local_60 [32];
  
  uVar1 = *(undefined4 *)(param_2 + 0x1a38);
  lVar7 = FSceneRenderTargets::Get();
  local_f8 = (longlong *)0x0;
  (**(code **)(**(longlong **)(param_4 + 0xa8) + 0x40))
            (*(longlong **)(param_4 + 0xa8),uVar1,local_60,&local_f8);
  plVar4 = local_f8;
  cVar5 = FUN_141e0b810(param_3,local_f8,*(undefined1 *)(lVar7 + 0x375));
  if (cVar5 != '\0') {
    lVar7 = param_6[3];
    uVar3 = *param_6;
    uVar8 = param_6[1];
    uVar2 = *(undefined4 *)(param_6 + 2);
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
    }
    local_110 = param_6[4];
    uVar10 = *(undefined4 *)(param_6 + 5);
    uVar12 = *(undefined4 *)(param_6 + 6);
    uVar11 = *(undefined4 *)((longlong)param_6 + 0x2c);
    local_fc = 0;
    local_118 = lVar7;
    local_108 = uVar10;
    local_104 = uVar11;
    local_100 = uVar12;
    local_f0 = local_110;
    cVar5 = (**(code **)(*plVar4 + 0x60))(plVar4);
    cVar6 = (**(code **)(*plVar4 + 0x70))();
    if (((cVar6 == '\0') || (*(char *)((longlong)param_3 + 0xc) != '\0')) ||
       ((*(uint *)(param_4 + 0x8c) & 0x200) != 0)) {
      if (cVar5 != '\0') {
        uVar8 = FUN_1409853f0();
        uVar10 = 0;
        local_108 = uVar10;
      }
    }
    else if (cVar5 == '\0') {
      uVar8 = FUN_141e00870();
      uVar10 = 8;
      local_108 = uVar10;
    }
    else {
      uVar8 = FUN_141e00af0();
      uVar10 = 8;
      local_108 = uVar10;
    }
    if ((*(byte *)(param_4 + 0x8c) & 1) != 0) {
      uVar8 = FUN_141e009b0();
      uVar10 = 0;
      local_108 = 0;
    }
    if ((param_8 == 0) || ((*(uint *)(param_8 + 0x1c) >> 6 & 1) == 0)) {
      local_64 = 0;
    }
    else {
      local_64 = 1;
    }
    local_70 = *param_3;
    local_88 = local_f0;
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
      local_88 = local_110;
      uVar12 = local_100;
      uVar10 = local_108;
      uVar11 = local_104;
    }
    local_68 = param_9;
    local_74 = 0;
    if ((*(char *)(param_2 + 0x1209) == '\0') || (*(int *)(param_2 + 0xf60) != 1)) {
      uVar9 = 0;
    }
    else {
      uVar9 = 1;
    }
    local_d8 = plVar4;
    local_d0 = param_8;
    local_e0 = *param_5;
    local_e8 = param_4;
    local_b0 = param_2;
    local_a8 = uVar3;
    local_a0 = uVar8;
    local_98 = uVar2;
    local_90 = lVar7;
    local_80 = uVar10;
    local_7c = uVar11;
    local_78 = uVar12;
    local_c8 = (**(code **)(*plVar4 + 0x1e8))(plVar4);
    local_c4 = (**(code **)(*plVar4 + 0x1f8))(plVar4);
    local_c0 = param_7 ^ 1;
    local_b8 = 0;
    local_b3 = 0;
    local_bc = uVar1;
    local_b4 = uVar9;
    FUN_141de9960(param_1,&local_e8,&local_b0);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_90);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
    return 1;
  }
  return 0;
}



// FUNCTION 141dff080 FUN_141dff080 body=877 status=ok
// SIG undefined FUN_141dff080(void)

/* WARNING: Removing unreachable block (ram,0x000141dff278) */
/* WARNING: Removing unreachable block (ram,0x000141dff286) */
/* WARNING: Removing unreachable block (ram,0x000141dff295) */

void FUN_141dff080(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong param_5,undefined4 param_6,int param_7,int param_8)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  DWORD *pDVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong local_68;
  longlong local_60;
  longlong local_58 [2];
  longlong local_48;
  
  uVar11 = (ulonglong)param_7;
  local_68 = local_68 & 0xffffffff00000000;
  if (param_7 <= param_8) {
    local_60 = uVar11 << 4;
    do {
      plVar8 = (longlong *)0x0;
      lVar5 = *(longlong *)(local_60 + *(longlong *)(param_1 + 0x18));
      if ((*(longlong *)(lVar5 + 8) == 0) ||
         ((*(uint *)(*(longlong *)(lVar5 + 8) + 0x1c) >> 6 & 1) == 0)) {
        FUN_141e05810(param_1,param_2,param_3,param_4,lVar5,
                      *(longlong *)(param_3 + 0x1b30) + (longlong)*(int *)(lVar5 + 0xe8) * 8,0,
                      param_6,0);
      }
      else {
        plVar3 = (longlong *)operator_new(0x1b8);
        plVar9 = plVar8;
        if (plVar3 != (longlong *)0x0) {
          FRHICommandListBase::FRHICommandListBase(plVar3,*(undefined4 *)(param_3 + 0x2f20));
          plVar9 = plVar3;
        }
        plVar9[0x12] = *(longlong *)(param_2 + 0x90);
        pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
        plVar3 = TlsGetValue(*pDVar4);
        if (plVar3 == (longlong *)0x0) {
          plVar3 = (longlong *)operator_new(0x18);
          if (plVar3 != (longlong *)0x0) {
            *plVar3 = 0;
            plVar3[1] = 0;
            *(undefined4 *)(plVar3 + 2) = 0;
            plVar8 = plVar3;
          }
          TlsSetValue(*pDVar4,plVar8);
          plVar3 = plVar8;
        }
        plVar8 = (longlong *)plVar3[1];
        if (plVar8 == (longlong *)0x0) {
          if (*plVar3 == 0) {
            lVar5 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar4 + 2);
            plVar3[1] = lVar5;
            if (lVar5 == 0) {
              puVar6 = (undefined8 *)FMemory::Malloc(0x2000,0);
              plVar3[1] = (longlong)puVar6;
              lVar5 = 0x1f;
              do {
                puVar2 = puVar6 + 0x20;
                *puVar6 = puVar2;
                lVar5 = lVar5 + -1;
                puVar6 = puVar2;
              } while (lVar5 != 0);
              *puVar2 = 0;
            }
          }
          else {
            plVar3[1] = *plVar3;
            *plVar3 = 0;
          }
          plVar8 = (longlong *)plVar3[1];
          iVar7 = 0x20;
          *(undefined4 *)(plVar3 + 2) = 0x20;
        }
        else {
          iVar7 = (int)plVar3[2];
        }
        plVar3[1] = *plVar8;
        *(int *)(plVar3 + 2) = iVar7 + -1;
        plVar3 = (longlong *)FUN_1415914c0(local_58);
        local_48 = *plVar3;
        *plVar3 = 0;
        *plVar8 = (longlong)&PTR_FUN_143f3edd8;
        *(undefined4 *)(plVar8 + 1) = 0xff;
        *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
        *plVar8 = (longlong)&PTR_FUN_144e8b1c0;
        *(undefined1 *)(plVar8 + 0xe) = 0;
        plVar8[0xf] = local_48;
        if (local_58[0] != 0) {
          LOCK();
          piVar1 = (int *)(local_58[0] + 0x48);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            FGraphEvent::Recycle();
          }
        }
        plVar8[3] = param_1;
        plVar8[2] = (longlong)plVar9;
        plVar8[4] = param_3;
        plVar8[5] = *param_4;
        plVar8[6] = param_4[1];
        *(int *)(plVar8 + 7) = (int)param_4[2];
        lVar5 = param_4[3];
        plVar8[8] = lVar5;
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
          UNLOCK();
        }
        plVar8[9] = param_4[4];
        *(int *)(plVar8 + 10) = (int)param_4[5];
        *(undefined4 *)((longlong)plVar8 + 0x54) = *(undefined4 *)((longlong)param_4 + 0x2c);
        *(int *)(plVar8 + 0xb) = (int)param_4[6];
        *(undefined1 *)((longlong)plVar8 + 0x5c) = 0;
        plVar8[0xc] = param_5;
        *(undefined4 *)(plVar8 + 0xd) = param_6;
        *(int *)((longlong)plVar8 + 0x6c) = (int)uVar11;
        local_68 = plVar8[0xf];
        if (local_68 != 0) {
          LOCK();
          *(int *)(local_68 + 0x48) = *(int *)(local_68 + 0x48) + 1;
          UNLOCK();
        }
        FUN_141e0ac00(plVar8,0,0xff,1);
        FRHICommandListBase::QueueRenderThreadCommandListSubmit(param_2,&local_68,plVar9);
        if (local_68 != 0) {
          LOCK();
          piVar1 = (int *)(local_68 + 0x48);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            FGraphEvent::Recycle();
          }
        }
      }
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
      local_60 = local_60 + 0x10;
    } while ((int)uVar10 <= param_8);
  }
  return;
}



// FUNCTION 141dff3f0 FUN_141dff3f0 body=2707 status=ok
// SIG undefined FUN_141dff3f0(void)

/* WARNING: Removing unreachable block (ram,0x000141dffd58) */
/* WARNING: Removing unreachable block (ram,0x000141dffd65) */
/* WARNING: Removing unreachable block (ram,0x000141dffd71) */

void FUN_141dff3f0(longlong param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  bool bVar11;
  bool bVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined8 uVar19;
  DWORD *pDVar20;
  undefined8 *puVar21;
  int iVar22;
  ulonglong *puVar23;
  ushort *puVar24;
  undefined2 uVar25;
  longlong *plVar26;
  longlong *plVar27;
  longlong lVar28;
  uint uVar29;
  uint uVar30;
  longlong *plVar31;
  uint uVar32;
  longlong *plVar33;
  uint uVar34;
  uint uVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  undefined8 local_res20;
  uint local_194;
  uint local_18c;
  undefined1 local_188;
  undefined1 local_187 [3];
  uint local_184;
  undefined8 local_180;
  undefined4 local_178;
  int local_174;
  undefined8 local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140 [3];
  undefined *local_128;
  undefined1 *puStack_120;
  code *local_118;
  undefined1 *puStack_110;
  undefined1 *local_108;
  longlong *plStack_100;
  longlong local_f8;
  longlong *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined *local_c8;
  undefined1 *puStack_c0;
  code *local_b8;
  undefined1 *puStack_b0;
  undefined1 *local_a8;
  longlong *plStack_a0;
  undefined1 local_98 [24];
  undefined1 local_80 [24];
  undefined1 local_68 [40];
  
  iVar36 = *(int *)(param_1 + 0x38);
  lVar28 = (longlong)iVar36;
  plVar27 = (longlong *)0x0;
  local_174 = 0;
  iVar22 = *(int *)(param_6 + 0x6c);
  if (iVar36 <= *(int *)(param_6 + 0x6c)) {
    iVar22 = iVar36;
  }
  if (iVar22 != 0) {
    local_178 = DAT_1464a8210;
    local_res10[0] = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    if (*(char *)(param_6 + 0x78) == '\0') {
      iVar36 = *(int *)(param_1 + 0x38);
      iVar14 = iVar36 / iVar22;
      if (0 < iVar22) {
        local_168 = param_6 + 0x18;
        plVar31 = plVar27;
        plVar17 = plVar27;
        do {
          local_184 = (uint)((int)plVar31 < iVar36 - iVar14 * iVar22) + (int)plVar17 + iVar14;
          local_174 = local_184 - 1;
          local_180 = FUN_141d6b6f0(param_6);
          pDVar20 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
          plVar18 = TlsGetValue(*pDVar20);
          if (plVar18 == (longlong *)0x0) {
            plVar26 = (longlong *)operator_new(0x18);
            plVar18 = plVar27;
            if (plVar26 != (longlong *)0x0) {
              *plVar26 = 0;
              plVar26[1] = 0;
              *(undefined4 *)(plVar26 + 2) = 0;
              plVar18 = plVar26;
            }
            TlsSetValue(*pDVar20,plVar18);
          }
          plVar26 = (longlong *)plVar18[1];
          if (plVar26 == (longlong *)0x0) {
            if (*plVar18 == 0) {
              lVar28 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar20 + 2);
              plVar18[1] = lVar28;
              if (lVar28 == 0) {
                puVar21 = (undefined8 *)FMemory::Malloc(0x2000,0);
                plVar18[1] = (longlong)puVar21;
                lVar28 = 0x1f;
                do {
                  puVar2 = puVar21 + 0x20;
                  *puVar21 = puVar2;
                  lVar28 = lVar28 + -1;
                  puVar21 = puVar2;
                } while (lVar28 != 0);
                *puVar2 = 0;
              }
            }
            else {
              plVar18[1] = *plVar18;
              *plVar18 = 0;
            }
            plVar26 = (longlong *)plVar18[1];
            iVar15 = 0x20;
            *(undefined4 *)(plVar18 + 2) = 0x20;
          }
          else {
            iVar15 = (int)plVar18[2];
          }
          plVar18[1] = *plVar26;
          *(int *)(plVar18 + 2) = iVar15 + -1;
          plVar18 = (longlong *)FUN_1415914c0(local_140);
          local_d0 = *plVar18;
          *plVar18 = 0;
          *plVar26 = (longlong)&PTR_FUN_143f3edd8;
          *(undefined4 *)(plVar26 + 1) = 0xff;
          *(undefined4 *)((longlong)plVar26 + 0xc) = 1;
          *plVar26 = (longlong)&PTR__scalar_deleting_destructor__144e8b358;
          *(undefined1 *)(plVar26 + 0x17) = 0;
          plVar26[0x18] = local_d0;
          if (local_140[0] != 0) {
            LOCK();
            piVar1 = (int *)(local_140[0] + 0x48);
            iVar15 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              FGraphEvent::Recycle();
            }
          }
          uVar4 = local_180;
          FUN_141aad8b0(plVar26 + 2,param_1,local_180,*(undefined8 *)(param_6 + 8),local_168,
                        local_res10,local_res18,local_res20,param_5,(int)plVar17,local_174,0);
          local_148 = plVar26[0x18];
          if (local_148 != 0) {
            LOCK();
            *(int *)(local_148 + 0x48) = *(int *)(local_148 + 0x48) + 1;
            UNLOCK();
          }
          FUN_141ada070(plVar26,0,local_178,1);
          FParallelCommandListSet::AddParallelCommandList(param_6,uVar4,&local_148,0xffffffff);
          if (local_148 != 0) {
            LOCK();
            piVar1 = (int *)(local_148 + 0x48);
            iVar15 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              FGraphEvent::Recycle();
            }
          }
          plVar17 = (longlong *)(ulonglong)local_184;
          uVar29 = (int)plVar31 + 1;
          plVar31 = (longlong *)(ulonglong)uVar29;
        } while ((int)uVar29 < iVar22);
      }
    }
    else {
      puStack_120 = &local_188;
      local_188 = 0;
      local_128 = &DAT_14060d670;
      local_c8 = &DAT_14060d670;
      local_184 = iVar36;
      puStack_c0 = puStack_120;
      lVar16 = FUN_1415d8310(&local_c8,&DAT_146216a38);
      plVar17 = (longlong *)operator_new(0x10,lVar16 + 0x18,1,0);
      plVar31 = plVar27;
      if (plVar17 != (longlong *)0x0) {
        *plVar17 = 0;
        plVar17[1] = 0;
        plVar31 = plVar17;
      }
      lVar16 = plVar31[1];
      iVar14 = (int)lVar16 + iVar36;
      *(int *)(plVar31 + 1) = iVar14;
      if (*(int *)((longlong)plVar31 + 0xc) < iVar14) {
        FUN_141ad3a00(plVar31);
      }
      _guard_xfg_dispatch_icall_nop((void *)(*plVar31 + (longlong)(int)lVar16 * 2),0,lVar28 * 2);
      bVar11 = false;
      bVar12 = false;
      iVar14 = FColorVertexBuffer::GetAllocatedSize(*(undefined8 *)(param_6 + 8));
      iVar15 = FUN_14274f350(*(undefined8 *)(param_6 + 8));
      if ((((*(char *)(param_6 + 0x7a) == '\0') || (iVar14 == 0)) ||
          (*(int *)(param_1 + 0x94) != iVar14)) || (*(int *)(param_1 + 0x90) + 1 != iVar15)) {
        puStack_110 = local_187;
        local_187[0] = 0;
        local_118 = FUN_141ab5cb0;
        local_e8 = &local_res18;
        local_e0 = &local_res20;
        local_b8 = FUN_141ab5cb0;
        local_d8 = param_5;
        local_108 = &LAB_141b90ec0;
        local_a8 = &LAB_141b90ec0;
        plStack_100 = &local_f8;
        local_f8 = param_1;
        local_f0 = plVar31;
        puStack_b0 = puStack_110;
        plStack_a0 = &local_f8;
        FUN_141ac7f60(iVar36,&local_a8,&local_b8,0);
        bVar11 = true;
        bVar12 = true;
      }
      else {
        plVar17 = plVar27;
        if (0 < lVar28) {
          do {
            uVar29 = *(uint *)((longlong)
                               *(int *)(*(longlong *)(param_1 + 0x30) + (longlong)plVar17 * 4) *
                               0xe0 + 0xd0 + *(longlong *)(param_1 + 0x40));
            uVar25 = 0xffff;
            if (uVar29 < 0x10000) {
              uVar25 = (short)uVar29;
            }
            *(undefined2 *)(*plVar31 + (longlong)plVar17 * 2) = uVar25;
            plVar17 = (longlong *)((longlong)plVar17 + 1);
          } while ((longlong)plVar17 < lVar28);
        }
      }
      *(int *)(param_1 + 0x90) = iVar15;
      uVar29 = 0;
      *(int *)(param_1 + 0x94) = iVar14;
      puVar23 = (ulonglong *)*plVar31;
      plVar17 = (longlong *)((longlong)(int)plVar31[1] & 0x7fffffffffffffff);
      if ((ulonglong *)((longlong)(int)plVar31[1] * 2 + (longlong)puVar23) < puVar23) {
        plVar17 = plVar27;
      }
      if (plVar17 != (longlong *)0x0) {
        plVar26 = plVar27;
        plVar18 = plVar27;
        if ((longlong *)0x7 < plVar17) {
          iVar36 = 0;
          iVar15 = 0;
          iVar38 = 0;
          iVar40 = 0;
          iVar14 = 0;
          iVar37 = 0;
          iVar39 = 0;
          iVar41 = 0;
          do {
            uVar3 = *puVar23;
            auVar5._8_4_ = 0;
            auVar5._0_8_ = uVar3;
            auVar5._12_2_ = (short)(uVar3 >> 0x30);
            auVar7._8_2_ = (short)(uVar3 >> 0x20);
            auVar7._0_8_ = uVar3;
            auVar7._10_4_ = auVar5._10_4_;
            auVar9._6_8_ = 0;
            auVar9._0_6_ = auVar7._8_6_;
            plVar26 = plVar26 + 1;
            iVar36 = (uint)(ushort)uVar3 + iVar36;
            iVar15 = (int)CONCAT82(SUB148(auVar9 << 0x40,6),(short)(uVar3 >> 0x10)) + iVar15;
            iVar38 = auVar7._8_4_ + iVar38;
            iVar40 = (auVar5._10_4_ >> 0x10) + iVar40;
            uVar3 = puVar23[1];
            auVar6._8_4_ = 0;
            auVar6._0_8_ = uVar3;
            auVar6._12_2_ = (short)(uVar3 >> 0x30);
            auVar8._8_2_ = (short)(uVar3 >> 0x20);
            auVar8._0_8_ = uVar3;
            auVar8._10_4_ = auVar6._10_4_;
            auVar10._6_8_ = 0;
            auVar10._0_6_ = auVar8._8_6_;
            puVar23 = puVar23 + 2;
            iVar14 = (uint)(ushort)uVar3 + iVar14;
            iVar37 = (int)CONCAT82(SUB148(auVar10 << 0x40,6),(short)(uVar3 >> 0x10)) + iVar37;
            iVar39 = auVar8._8_4_ + iVar39;
            iVar41 = (auVar6._10_4_ >> 0x10) + iVar41;
          } while (plVar26 != (longlong *)((ulonglong)plVar17 & 0xfffffffffffffff8));
          plVar18 = (longlong *)
                    (ulonglong)
                    (uint)(iVar36 + iVar14 + iVar38 + iVar39 + iVar15 + iVar37 + iVar40 + iVar41);
        }
        uVar29 = (uint)plVar18;
        for (; plVar26 != plVar17; plVar26 = (longlong *)((longlong)plVar26 + 1)) {
          uVar3 = *puVar23;
          puVar23 = (ulonglong *)((longlong)puVar23 + 2);
          uVar29 = (int)plVar18 + (uint)(ushort)uVar3;
          plVar18 = (longlong *)(ulonglong)uVar29;
        }
      }
      if ((!bVar11) || (uVar29 != 0)) {
        local_18c = 0;
        if ((int)uVar29 < 2) {
          uVar29 = 1;
        }
        uVar30 = 0xfffffffe;
        local_194 = 0xfffffffe;
        iVar36 = (int)(*(int *)(param_6 + 0x74) + -1 + uVar29) / *(int *)(param_6 + 0x74);
        if (iVar22 <= iVar36) {
          iVar36 = iVar22;
        }
        iVar36 = (int)((uVar29 - 1) + iVar36) / iVar36;
        iVar22 = iVar36 + 2;
        local_174 = (int)(((longlong)iVar22 / 3 + ((longlong)iVar22 >> 0x3f) & 0xffffffffU) >> 0x1f)
                    + iVar22 / 3 + (iVar22 >> 0x1f);
        local_180._0_4_ = 0xffffffff;
        plVar18 = (longlong *)0xffffffff;
        plVar26 = plVar27;
        plVar17 = plVar27;
        if (0 < lVar28) {
          do {
            iVar14 = (int)plVar18;
            iVar22 = (int)plVar26;
            if (bVar11) {
              while( true ) {
                if (lVar28 <= (longlong)plVar27) goto LAB_141dffab1;
                if (*(short *)(*plVar31 + (longlong)plVar27 * 2) != 0) break;
                plVar17 = (longlong *)(ulonglong)((int)plVar17 + 1);
                plVar27 = (longlong *)((longlong)plVar27 + 1);
              }
            }
            if (lVar28 <= (longlong)plVar27) break;
            uVar35 = (uint)plVar17;
            puVar24 = (ushort *)(*plVar31 + (longlong)plVar27 * 2);
            uVar34 = (uint)*puVar24;
            uVar29 = uVar35;
            uVar32 = uVar35;
            plVar26 = plVar17;
            plVar33 = plVar17;
            while ((int)uVar29 < (int)(local_184 + -1)) {
              uVar29 = (uint)plVar26;
              uVar32 = (uint)plVar33;
              if (iVar36 <= (int)uVar34) break;
              uVar29 = uVar29 + 1;
              plVar26 = (longlong *)(ulonglong)uVar29;
              plVar27 = (longlong *)((longlong)plVar27 + 1);
              puVar24 = puVar24 + 1;
              if ((!bVar11) || (*puVar24 != 0)) {
                uVar34 = uVar34 + *puVar24;
                plVar33 = plVar26;
              }
              uVar32 = (uint)plVar33;
            }
            if ((uVar34 == 0) && (bVar11)) {
              plVar26 = (longlong *)(ulonglong)local_18c;
              plVar17 = plVar18;
            }
            else if ((int)uVar30 < iVar14) {
              plVar26 = (longlong *)(ulonglong)uVar34;
              local_194 = uVar32;
              local_18c = uVar34;
              uVar30 = uVar32;
              local_180._0_4_ = uVar35;
            }
            else {
              local_170 = FUN_141d6b6f0(param_6);
              local_168 = *(undefined8 *)(param_6 + 8);
              bVar11 = bVar12;
              if ((int)uVar34 < local_174) {
                plVar18 = (longlong *)TGraphTask<FTranscodeTask>::CreateTask(local_98,0,local_178);
                uVar4 = local_170;
                plVar17 = (longlong *)0x0;
                if (bVar12) {
                  plVar17 = plVar31;
                }
                FUN_141aad8b0(*plVar18 + 0x10,param_1,local_170,local_168,param_6 + 0x18,local_res10
                              ,local_res18,local_res20,param_5,(uint)local_180,uVar32,plVar17);
                lVar28 = *plVar18;
                lVar13 = plVar18[2];
                lVar16 = plVar18[1];
                local_160 = *(longlong *)(lVar28 + 0xc0);
                if (local_160 != 0) {
                  LOCK();
                  *(int *)(local_160 + 0x48) = *(int *)(local_160 + 0x48) + 1;
                  UNLOCK();
                }
                FUN_141ada070(lVar28,lVar16,(int)lVar13,1);
                iVar22 = local_18c + uVar34;
                if ((int)(local_18c + uVar34) < 2) {
                  iVar22 = 1;
                }
                FParallelCommandListSet::AddParallelCommandList(param_6,uVar4,&local_160,iVar22);
                local_18c = 0;
                local_180._0_4_ = 0xffffffff;
                local_194 = 0xfffffffe;
                plVar17 = (longlong *)0xffffffff;
                plVar26 = (longlong *)0x0;
                uVar30 = local_194;
                if (local_160 != 0) {
                  LOCK();
                  piVar1 = (int *)(local_160 + 0x48);
                  iVar22 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar22 == 1) {
                    FGraphEvent::Recycle();
                    plVar17 = (longlong *)(ulonglong)(uint)local_180;
                  }
                }
              }
              else {
                plVar26 = (longlong *)TGraphTask<FTranscodeTask>::CreateTask(local_80,0,local_178);
                plVar18 = (longlong *)0x0;
                if (bVar12) {
                  plVar18 = plVar31;
                }
                FUN_141aad8b0(*plVar26 + 0x10,param_1,local_170,local_168,param_6 + 0x18,local_res10
                              ,local_res18,local_res20,param_5,(uint)local_180,local_194,plVar18);
                lVar28 = *plVar26;
                lVar13 = plVar26[2];
                lVar16 = plVar26[1];
                local_158 = *(longlong *)(lVar28 + 0xc0);
                if (local_158 != 0) {
                  LOCK();
                  *(int *)(local_158 + 0x48) = *(int *)(local_158 + 0x48) + 1;
                  UNLOCK();
                }
                FUN_141ada070(lVar28,lVar16,(int)lVar13,1);
                if ((int)local_18c < 2) {
                  local_18c = 1;
                }
                FParallelCommandListSet::AddParallelCommandList
                          (param_6,local_170,&local_158,local_18c);
                plVar26 = (longlong *)(ulonglong)uVar34;
                local_194 = uVar32;
                local_18c = uVar34;
                uVar30 = uVar32;
                local_180._0_4_ = uVar35;
                if (local_158 != 0) {
                  LOCK();
                  piVar1 = (int *)(local_158 + 0x48);
                  iVar22 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar22 == 1) {
                    FGraphEvent::Recycle();
                  }
                }
              }
            }
            iVar14 = (int)plVar17;
            iVar22 = (int)plVar26;
            lVar28 = (longlong)(int)local_184;
            plVar27 = (longlong *)((longlong)plVar27 + 1);
            plVar18 = plVar17;
            plVar17 = (longlong *)(ulonglong)(uVar29 + 1);
          } while ((longlong)plVar27 < lVar28);
LAB_141dffab1:
          if (iVar14 <= (int)uVar30) {
            uVar19 = FUN_141d6b6f0(param_6);
            uVar4 = *(undefined8 *)(param_6 + 8);
            plVar17 = (longlong *)TGraphTask<FTranscodeTask>::CreateTask(local_68,0,local_178);
            plVar27 = (longlong *)0x0;
            if (bVar12) {
              plVar27 = plVar31;
            }
            FUN_141aad8b0(*plVar17 + 0x10,param_1,uVar19,uVar4,param_6 + 0x18,local_res10,
                          local_res18,local_res20,param_5,(uint)local_180,local_194,plVar27);
            lVar28 = *plVar17;
            lVar13 = plVar17[2];
            lVar16 = plVar17[1];
            local_150 = *(longlong *)(lVar28 + 0xc0);
            if (local_150 != 0) {
              LOCK();
              *(int *)(local_150 + 0x48) = *(int *)(local_150 + 0x48) + 1;
              UNLOCK();
            }
            FUN_141ada070(lVar28,lVar16,(int)lVar13,1);
            if (iVar22 < 2) {
              iVar22 = 1;
            }
            FParallelCommandListSet::AddParallelCommandList(param_6,uVar19,&local_150,iVar22);
            if (local_150 != 0) {
              LOCK();
              piVar1 = (int *)(local_150 + 0x48);
              iVar36 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar36 == 1) {
                FGraphEvent::Recycle();
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141dffe90 ExecuteTask body=318 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<FDrawViewElementsAnyThreadTask<FTranslucencyDrawingPolicyFactory>_>::ExecuteTask
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141de7150(param_1[2],param_1[3],param_1 + 4,param_1[0xb],*(undefined1 *)(param_1 + 0xc),
                *(undefined1 *)((longlong)param_1 + 0x61),*(undefined4 *)((longlong)param_1 + 100),
                *(undefined4 *)(param_1 + 0xd));
  FUN_141ec9240(param_1[2],param_1 + 0xf);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  *(undefined1 *)(param_1 + 0xe) = 0;
  FUN_141591a60(param_1[0xf],param_2,param_3);
  *param_1 = &PTR_FUN_144e8b368;
  if (param_1[0xf] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xf] + 0x48);
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



// FUNCTION 141dfffd0 FUN_141dfffd0 body=277 status=ok
// SIG undefined FUN_141dfffd0(void)

void FUN_141dfffd0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141dfe730(param_1 + 2,param_3,param_1 + 0x18);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 8);
  *(undefined1 *)(param_1 + 0x17) = 0;
  FUN_141591a60(param_1[0x18],param_2,param_3);
  *param_1 = &PTR__scalar_deleting_destructor__144e8b358;
  if (param_1[0x18] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x18] + 0x48);
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



// FUNCTION 141e000f0 FUN_141e000f0 body=327 status=ok
// SIG undefined FUN_141e000f0(void)

void FUN_141e000f0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141dff080(param_1[0xd],param_1[3],param_1[4],param_1 + 5,param_1[2],
                *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0xe),
                *(undefined4 *)((longlong)param_1 + 0x74));
  FUN_141ec9240(param_1[3],param_1 + 0x10);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 8);
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_141591a60(param_1[0x10],param_2,param_3);
  *param_1 = &PTR__scalar_deleting_destructor__144e8b1e0;
  if (param_1[0x10] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x10] + 0x48);
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



// FUNCTION 141e00240 FUN_141e00240 body=311 status=ok
// SIG undefined FUN_141e00240(void)

void FUN_141e00240(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    FUN_141e03ac0();
  }
  else {
    FUN_141e03990(param_1[2],param_1[3],param_1[4],param_1 + 5,*(undefined4 *)(param_1 + 0xc),
                  *(undefined4 *)((longlong)param_1 + 100));
  }
  FUN_141ec9240(param_1[3],param_1 + 0xf);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 8);
  *(undefined1 *)(param_1 + 0xe) = 0;
  FUN_141591a60(param_1[0xf],param_2,param_3);
  *param_1 = &PTR_FUN_144e8b200;
  if (param_1[0xf] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xf] + 0x48);
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



// FUNCTION 141e00380 FUN_141e00380 body=434 status=ok
// SIG undefined FUN_141e00380(void)

void FUN_141e00380(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  DWORD *pDVar8;
  longlong *lpTlsValue;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong in_stack_ffffffffffffffa8;
  undefined4 uVar11;
  
  lVar6 = FSceneRenderTargets::Get(param_1[2]);
  in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffa8 & 0xffffffffffffff00;
  if (*(char *)(lVar6 + 0x375) == '\0') {
    FUN_141cdf000(lVar6,param_1[2],param_1[4],param_1[0xc],in_stack_ffffffffffffffa8);
    uVar11 = (undefined4)(in_stack_ffffffffffffffa8 >> 0x20);
  }
  else {
    FUN_141cdec30();
    uVar11 = (undefined4)(in_stack_ffffffffffffffa8 >> 0x20);
  }
  lVar6 = param_1[3];
  lVar4 = param_1[4];
  uVar3 = *(undefined4 *)(param_1 + 0xd);
  lVar5 = *(longlong *)
           (*(longlong *)(lVar6 + 0x18) + (longlong)*(int *)((longlong)param_1 + 0x6c) * 0x10);
  uVar7 = FUN_141e03330(param_1[0xc],param_1[2],lVar4,lVar5,CONCAT44(uVar11,uVar3));
  FUN_141e05810(lVar6,param_1[2],lVar4,param_1 + 5,lVar5,
                *(longlong *)(lVar4 + 0x1b30) + (longlong)*(int *)(lVar5 + 0xe8) * 8,uVar7,uVar3,0);
  FUN_141ec9240(param_1[2],param_1 + 0xf);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 8);
  *(undefined1 *)(param_1 + 0xe) = 0;
  FUN_141591a60(param_1[0xf],param_2,param_3);
  *param_1 = &PTR_FUN_144e8b1c0;
  if (param_1[0xf] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xf] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar8 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar8);
  plVar10 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar9 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar10;
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = 0;
      plVar9[1] = 0;
      *(undefined4 *)(plVar9 + 2) = 0;
      lpTlsValue = plVar9;
    }
    TlsSetValue(*pDVar8,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar10 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar8 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar10;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 141e00540 FindId body=332 status=ok
// SIG undefined FindId(void)

int * TSet<TStaticMeshDrawList<FVelocityDrawingPolicy>::FDrawingPolicyLink,TStaticMeshDrawList<FVelocityDrawingPolicy>::FDrawingPolicyKeyFuncs,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  uint *puVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  uint local_res8 [2];
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = (longlong *)param_1[8];
    iVar2 = FMeshDrawingPolicy::GetTypeHash(param_3);
    if (plVar3 == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      uVar5 = local_res8[0];
      do {
        lVar6 = (longlong)iVar2 * 0xe0 + lVar1;
        puVar4 = (uint *)FUN_141ac2bf0(lVar6 + 0x20,local_res8,param_3,0);
        uVar5 = (*puVar4 ^ uVar5) & 1 ^ uVar5;
        if (((((uVar5 & 1) != 0) &&
             (bVar7 = *(longlong *)(lVar6 + 0x68) == *(longlong *)(param_3 + 0x48),
             uVar5 = (uint)bVar7, bVar7)) &&
            (bVar7 = *(longlong *)(lVar6 + 0x70) == *(longlong *)(param_3 + 0x50),
            uVar5 = (uint)bVar7, bVar7)) &&
           (bVar7 = *(longlong *)(lVar6 + 0x58) == *(longlong *)(param_3 + 0x38),
           uVar5 = (uint)bVar7, bVar7)) {
          uVar5 = (uint)(*(longlong *)(lVar6 + 0x60) == *(longlong *)(param_3 + 0x40));
        }
        if ((uVar5 & 1) != 0) {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = *(int *)(lVar6 + 0xd8);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141e00690 FUN_141e00690 body=287 status=ok
// SIG undefined FUN_141e00690(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_141e00690(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong local_res8 [2];
  undefined8 local_res20;
  
  uVar6 = 0;
  local_res8[0] = local_res8[0] & 0xffffffff00000000;
  if (*(longlong *)(param_1 + 0x50) == 0) {
    local_res20 = 0;
    uVar5 = 1;
    uVar7 = uVar6;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x48);
    if (*(char *)(lVar1 + 0x28) == '\0') {
      FUN_1419f3850(lVar1);
    }
    uVar5 = uVar6;
    uVar7 = *(ulonglong *)(lVar1 + 0x50);
  }
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar5 = (ulonglong)((uint)uVar5 | 2);
    local_res8[1] = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x48);
    if (*(char *)(lVar1 + 0x28) == '\0') {
      FUN_1419f3850(lVar1);
    }
    uVar6 = *(ulonglong *)(lVar1 + 0x48);
  }
  local_res8[0] = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x40);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  uVar3 = *(undefined8 *)(lVar1 + 0x38);
  puVar4 = (undefined8 *)FUN_141b34160(param_1);
  param_2[1] = uVar3;
  param_2[2] = uVar6;
  param_2[3] = uVar7;
  *param_2 = *puVar4;
  param_2[4] = uVar2;
  param_2[5] = 0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  if ((uVar5 & 2) != 0) {
    uVar5 = (ulonglong)((uint)uVar5 & 0xfffffffd);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8 + 1);
  }
  if ((uVar5 & 1) != 0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res20);
  }
  return param_2;
}



// FUNCTION 141e007b0 FUN_141e007b0 body=178 status=ok
// SIG undefined FUN_141e007b0(void)

int FUN_141e007b0(void)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aaaf88) {
    _Init_thread_header(&DAT_146aaaf88);
    if (DAT_146aaaf88 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar3 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MotionBlurQuality");
      lVar4 = 0;
      if (plVar3 != (longlong *)0x0) {
        lVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
      }
      DAT_146aaaf80 = lVar4;
      _Init_thread_footer(&DAT_146aaaf88);
    }
  }
  iVar1 = *(int *)(DAT_146aaaf80 + 4);
  if (iVar1 < 0) {
    return 0;
  }
  iVar2 = 4;
  if (iVar1 < 4) {
    iVar2 = iVar1;
  }
  return iVar2;
}



// FUNCTION 141e00870 FUN_141e00870 body=320 status=ok
// SIG undefined FUN_141e00870(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141e00870(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_28 [32];
  
  if (DAT_146aaeed8 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141e00c30;
        *(undefined1 **)(lVar7 + 0x18) = local_res10;
        lVar5 = plVar8[2];
        lVar7 = plVar8[1];
        lVar3 = *plVar8;
        lVar4 = *(longlong *)(lVar3 + 0x28);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
          UNLOCK();
        }
        FUN_1404a4fe0(lVar3,lVar7,(int)lVar5,1);
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar4);
          }
        }
        FScopedEvent::~FScopedEvent(local_res10);
        return *(undefined8 *)(DAT_146aaeed8 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146aaeed8 = 0;
        return _DAT_00000030;
      }
      DAT_146aaeed8 =
           TStaticStateRHI<TStaticDepthStencilState<0,3,1,7,0,0,2,0,7,0,0,0,8,8>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146aaeed8 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<0,3,1,7,0,0,2,0,7,0,0,0,8,8>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146aaeed8 != 0) {
      lVar7 = DAT_146aaeed8;
    }
    DAT_146aaeed8 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146aaeed8 + 0x30);
}



// FUNCTION 141e009b0 FUN_141e009b0 body=320 status=ok
// SIG undefined FUN_141e009b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141e009b0(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_28 [32];
  
  if (DAT_146aaeed0 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141e00c40;
        *(undefined1 **)(lVar7 + 0x18) = local_res10;
        lVar5 = plVar8[2];
        lVar7 = plVar8[1];
        lVar3 = *plVar8;
        lVar4 = *(longlong *)(lVar3 + 0x28);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
          UNLOCK();
        }
        FUN_1404a4fe0(lVar3,lVar7,(int)lVar5,1);
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar4);
          }
        }
        FScopedEvent::~FScopedEvent(local_res10);
        return *(undefined8 *)(DAT_146aaeed0 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146aaeed0 = 0;
        return _DAT_00000030;
      }
      DAT_146aaeed0 =
           TStaticStateRHI<TStaticDepthStencilState<0,4,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146aaeed0 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<0,4,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146aaeed0 != 0) {
      lVar7 = DAT_146aaeed0;
    }
    DAT_146aaeed0 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146aaeed0 + 0x30);
}



// FUNCTION 141e00af0 FUN_141e00af0 body=320 status=ok
// SIG undefined FUN_141e00af0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141e00af0(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_28 [32];
  
  if (DAT_146aaeee0 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141e00c50;
        *(undefined1 **)(lVar7 + 0x18) = local_res10;
        lVar5 = plVar8[2];
        lVar7 = plVar8[1];
        lVar3 = *plVar8;
        lVar4 = *(longlong *)(lVar3 + 0x28);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
          UNLOCK();
        }
        FUN_1404a4fe0(lVar3,lVar7,(int)lVar5,1);
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar4);
          }
        }
        FScopedEvent::~FScopedEvent(local_res10);
        return *(undefined8 *)(DAT_146aaeee0 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146aaeee0 = 0;
        return _DAT_00000030;
      }
      DAT_146aaeee0 =
           TStaticStateRHI<TStaticDepthStencilState<0,7,1,7,0,0,2,0,7,0,0,0,8,8>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146aaeee0 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<0,7,1,7,0,0,2,0,7,0,0,0,8,8>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146aaeee0 != 0) {
      lVar7 = DAT_146aaeee0;
    }
    DAT_146aaeee0 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146aaeee0 + 0x30);
}



// FUNCTION 141e00c60 FUN_141e00c60 body=172 status=ok
// SIG undefined FUN_141e00c60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141e00c60(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uStackX_c;
  
  lVar3 = FSceneRenderTargets::Get();
  uVar1 = *(undefined8 *)(lVar3 + 0x378);
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 1;
  *(undefined2 *)(param_1 + 5) = 1;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = L"UnknownTexture";
  *(undefined2 *)(param_1 + 9) = 1;
  uVar2 = uRam00000001464c9cc0;
  *param_1 = _DAT_1464c9cb8;
  param_1[1] = uVar2;
  *(undefined4 *)(param_1 + 2) = DAT_1464c9cc8;
  *(int *)((longlong)param_1 + 0x14) = (int)uVar1;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 3) = uStackX_c;
  param_1[8] = L"UnknownTexture2D";
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x10000;
  *(undefined2 *)(param_1 + 5) = 1;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x13;
  *(undefined4 *)((longlong)param_1 + 0x34) = 1;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined2 *)(param_1 + 9) = 1;
  return param_1;
}



// FUNCTION 141e00d10 GetShadowForInjectionIntoVolumetricFog body=78 status=ok
// SIG undefined GetShadowForInjectionIntoVolumetricFog(void)

longlong GetShadowForInjectionIntoVolumetricFog(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (0 < *(int *)(param_2 + 0x28)) {
    plVar3 = *(longlong **)(param_2 + 0x20);
    lVar2 = 0;
    do {
      uVar1 = *(uint *)(*plVar3 + 0x560);
      if ((((byte)uVar1 & 0x41) == 0x41) && ((uVar1 >> 9 & 1) == 0)) {
        return *plVar3;
      }
      lVar2 = lVar2 + 1;
      plVar3 = plVar3 + 1;
    } while (lVar2 < *(int *)(param_2 + 0x28));
  }
  return 0;
}



// FUNCTION 141e00d60 FUN_141e00d60 body=448 status=ok
// SIG undefined FUN_141e00d60(void)

float * FUN_141e00d60(float *param_1,float param_2,float param_3,int param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = DAT_1464c36d0;
  param_2 = param_2 + 9.5;
  fVar3 = _guard_xfg_dispatch_icall_nop(2.0,(float)(param_4 + -1) / DAT_1464c36d0);
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  fVar3 = (param_3 - fVar3 * param_2) / (param_3 - param_2);
  if (*(int *)(lVar1 + 0x38) < DAT_1468509dc) {
    _Init_thread_header(&DAT_1468509dc);
    if (DAT_1468509dc == -1) {
      DAT_1468509d8 = 0x3fb8aa3b;
      _Init_thread_footer(&DAT_1468509dc);
    }
    if (*(int *)(lVar1 + 0x38) < DAT_1468509dc) {
      _Init_thread_header(&DAT_1468509dc);
      if (DAT_1468509dc == -1) {
        DAT_1468509d8 = 0x3fb8aa3b;
        _Init_thread_footer(&DAT_1468509dc);
      }
      if ((*(int *)(lVar1 + 0x38) < DAT_1468509dc) &&
         (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
        DAT_1468509d8 = 0x3fb8aa3b;
        _Init_thread_footer(&DAT_1468509dc);
      }
    }
  }
  *param_1 = (1.0 - fVar3) / param_2;
  param_1[2] = fVar2;
  param_1[1] = fVar3;
  return param_1;
}



// FUNCTION 141e00f20 FUN_141e00f20 body=195 status=ok
// SIG undefined FUN_141e00f20(void)

ulonglong FUN_141e00f20(longlong param_1,longlong param_2)

{
  uint uVar1;
  float *in_RAX;
  longlong lVar2;
  longlong lVar3;
  float *pfVar4;
  float local_48 [16];
  
  if (*(char *)(param_1 + 0x11f4) == '\0') {
    uVar1 = *(int *)(*(longlong *)(param_2 + 8) + 0x10) - 1;
    in_RAX = (float *)(ulonglong)uVar1;
    if (uVar1 < 2) {
      uVar1 = *(uint *)(*(longlong *)(param_2 + 8) + 0x1c) >> 0x13;
      in_RAX = (float *)(ulonglong)uVar1;
      if ((uVar1 & 1) != 0) {
LAB_141e00f52:
        return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
      }
      in_RAX = (float *)FMotionBlurInfoData::GetPrimitiveMotionBlurInfo();
      if ((char)in_RAX != '\0') {
        pfVar4 = local_48;
        lVar3 = 0;
        do {
          lVar2 = 0;
          in_RAX = pfVar4;
          do {
            if (0.0001 < ABS(*(float *)(((*(longlong *)(param_2 + 8) + 0x80) - (longlong)local_48) +
                                       (longlong)in_RAX) - *in_RAX)) goto LAB_141e00f52;
            lVar2 = lVar2 + 1;
            in_RAX = in_RAX + 1;
          } while (lVar2 < 4);
          lVar3 = lVar3 + 1;
          pfVar4 = pfVar4 + 4;
        } while (lVar3 < 4);
      }
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141e00ff0 FUN_141e00ff0 body=202 status=ok
// SIG undefined FUN_141e00ff0(void)

undefined8
FUN_141e00ff0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
             undefined1 *param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong *local_res8;
  undefined1 local_18 [16];
  
  if (*(char *)(param_1 + 0x11f4) != '\0') {
    return 0;
  }
  lVar1 = *(longlong *)(param_3 + 0xd8);
  cVar3 = FMotionBlurInfoData::GetPrimitiveMotionBlurInfo(lVar1 + 0x5ee0,param_3,param_6);
  if (cVar3 == '\0') {
    *param_5 = 0;
    if (1 < *(int *)(param_2 + 0x10) - 1U) {
      local_res8 = (longlong *)0x0;
      (**(code **)(**(longlong **)(param_4 + 0xa8) + 0x40))
                (*(longlong **)(param_4 + 0xa8),*(undefined4 *)(lVar1 + 8),local_18,&local_res8);
      plVar2 = local_res8;
      cVar3 = FUN_14259cbc0(local_res8);
      if ((cVar3 != '\0') && (cVar3 = (**(code **)(*plVar2 + 0x1b8))(plVar2), cVar3 != '\0')) {
        return 1;
      }
      return 0;
    }
  }
  else {
    *param_5 = 1;
  }
  return 1;
}



// FUNCTION 141e010c0 FUN_141e010c0 body=291 status=ok
// SIG undefined FUN_141e010c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e010c0(undefined8 param_1)

{
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined2 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_20 = 0xffffffffffffffff;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_18 = 0;
  FUN_1426fb810(&DAT_146aaab38,param_1,&local_108);
  FUN_142723e40(&DAT_146aaaa50,param_1,&local_108);
  FUN_142723ca0(&DAT_146aaaa50,param_1,&local_108);
  FUN_142723be0(&DAT_146aaaa50,param_1,&local_108,0);
  FUN_142723b20(0,param_1,&local_108,1);
  FUN_142578240(param_1,&local_108);
  FUN_142571150(param_1);
  if (local_60 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141e011f0 InitRHI body=93 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<0,3,1,7,0,0,2,0,7,0,0,0,8,8>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x7010300;
  local_14 = 0x20000;
  local_10 = 7;
  local_c = 0x808;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141e01250 InitRHI body=86 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<0,4,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x7000400;
  local_10 = 7;
  local_c = 0xffff;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141e012b0 InitRHI body=93 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<0,7,1,7,0,0,2,0,7,0,0,0,8,8>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x7010700;
  local_14 = 0x20000;
  local_10 = 7;
  local_c = 0x808;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141e01310 FUN_141e01310 body=1308 status=ok
// SIG undefined FUN_141e01310(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e01310(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  char cVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  int iVar19;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined1 local_220;
  int local_218;
  int local_214;
  int local_210 [2];
  ulonglong local_208;
  longlong local_200;
  longlong local_1f8;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined *local_1c0;
  undefined4 local_1b8;
  undefined1 local_1b0 [12];
  undefined1 local_1a4 [12];
  undefined1 local_198 [16];
  undefined4 local_188 [64];
  undefined4 *local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  local_200 = param_2;
  cVar8 = FUN_141e0bba0(*(undefined8 *)(param_1 + 8),param_1 + 0x10);
  if ((cVar8 != '\0') && (((0 < DAT_146aa954c && (DAT_146ab62f0 != '\0')) || (DAT_146aa954c < 0))))
  {
    iVar19 = 0;
    local_1c8 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18f8);
    if (0 < *(int *)(param_1 + 200)) {
      local_1f8 = 0;
      do {
        iVar6 = DAT_1464c36d8;
        lVar18 = local_1f8 + *(longlong *)(param_1 + 0xc0);
        if (*(longlong *)(lVar18 + 0x2f90) != 0) {
          local_218 = ((*(int *)(lVar18 + 0x1aa8) - *(int *)(lVar18 + 0x1aa0)) + -1 + DAT_1464c36d4)
                      / DAT_1464c36d4;
          local_198[0] = 0;
          local_88 = (undefined4 *)0x0;
          local_78 = 0;
          iVar9 = (DAT_1464c36d4 + -1 + (*(int *)(lVar18 + 0x1aac) - *(int *)(lVar18 + 0x1aa4))) /
                  DAT_1464c36d4;
          local_68 = 0;
          uStack_60 = 0;
          local_58 = 0;
          local_214 = iVar9;
          TArray<FVector4,TInlineAllocator<16,FDefaultAllocator>_>::ResizeTo(local_188,0x10);
          uVar7 = local_78;
          lVar16 = (longlong)(int)local_78;
          iVar12 = (int)local_78 + 0x10;
          local_78 = CONCAT44(local_78._4_4_,iVar12);
          if (local_78._4_4_ < iVar12) {
            TArray<FVector4,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow
                      (local_188,uVar7 & 0xffffffff);
          }
          puVar13 = local_188;
          if (local_88 != (undefined4 *)0x0) {
            puVar13 = local_88;
          }
          _guard_xfg_dispatch_icall_nop(puVar13 + lVar16 * 4,0,0x100);
          puVar10 = (undefined4 *)
                    VolumetricFogTemporalRandom
                              (local_1b0,*(undefined4 *)(*(longlong *)(lVar18 + 0x10) + 0x5c));
          iVar12 = 1;
          uVar4 = puVar10[1];
          uVar5 = puVar10[2];
          local_1e8 = *puVar10;
          uStack_1e4 = puVar10[1];
          uStack_1e0 = puVar10[2];
          puVar13 = local_188;
          if (local_88 != (undefined4 *)0x0) {
            puVar13 = local_88;
          }
          uStack_1dc = 0x3f800000;
          *puVar13 = *puVar10;
          puVar13[1] = uVar4;
          puVar13[2] = uVar5;
          puVar13[3] = 0x3f800000;
          if (1 < DAT_1464c36e8) {
            uStack_1cc = 0x3f800000;
            lVar16 = 0x10;
            do {
              puVar10 = (undefined4 *)
                        VolumetricFogTemporalRandom
                                  (local_1a4,*(int *)(*(longlong *)(lVar18 + 0x10) + 0x5c) - iVar12)
              ;
              uVar4 = puVar10[1];
              uVar5 = puVar10[2];
              local_1d8 = *puVar10;
              uStack_1d4 = puVar10[1];
              uStack_1d0 = puVar10[2];
              puVar13 = local_188;
              if (local_88 != (undefined4 *)0x0) {
                puVar13 = local_88;
              }
              iVar12 = iVar12 + 1;
              puVar13 = (undefined4 *)((longlong)puVar13 + lVar16);
              *puVar13 = *puVar10;
              puVar13[1] = uVar4;
              puVar13[2] = uVar5;
              puVar13[3] = uStack_1cc;
              lVar16 = lVar16 + 0x10;
              param_2 = local_200;
              iVar9 = local_214;
            } while (iVar12 < DAT_1464c36e8);
          }
          if (((((DAT_1464c36dc == 0) || (*(longlong *)(lVar18 + 0x1ab0) == 0)) ||
               ((*(char *)(lVar18 + 0x11f4) != '\0' ||
                (((*(byte *)(lVar18 + 0x28cc) & 0x20) != 0 || (*(char *)(param_1 + 0x70) == '\0'))))
               )) || (plVar15 = *(longlong **)(*(longlong *)(lVar18 + 0x1ab0) + 0x13c8),
                     plVar15 == (longlong *)0x0)) ||
             (((lVar16 = (**(code **)(*plVar15 + 0x10))(), *(int *)(lVar16 + 0x14) != local_218 ||
               (*(int *)(lVar16 + 0x18) != iVar9)) || (*(int *)(lVar16 + 0x1c) != iVar6)))) {
            local_198[0] = 0;
          }
          else {
            local_198[0] = 1;
          }
          local_68 = *(undefined8 *)(lVar18 + 0x2f90);
          lVar16 = *(longlong *)(lVar18 + 0x3090);
          uStack_60 = *(undefined8 *)(lVar18 + 0x2f98);
          local_208 = CONCAT44(local_208._4_4_,(DAT_1464c36f0 + -1 + local_218) / DAT_1464c36f0);
          local_1b8 = 0;
          local_218 = (DAT_1464c36f0 + -1 + iVar9) / DAT_1464c36f0;
          local_214 = (iVar6 + -1 + DAT_1464c36f0) / DAT_1464c36f0;
          local_1c0 = &DAT_146aaa4b0;
          TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
          ::FindId(lVar16 + 0x38,local_210,&local_1c0);
          plVar15 = (longlong *)0x0;
          if (local_210[0] != -1) {
            plVar15 = (longlong *)((longlong)local_210[0] * 0x20 + *(longlong *)(lVar16 + 0x38));
          }
          plVar17 = plVar15 + 2;
          if (plVar15 == (longlong *)0x0) {
            plVar17 = (longlong *)0x0;
          }
          lVar16 = *plVar17;
          lVar1 = *(longlong *)(lVar16 + 0x48);
          if (*(char *)(lVar1 + 0x28) == '\0') {
            FUN_1419f3850(lVar1);
          }
          uVar2 = *(undefined8 *)(lVar1 + 0x60);
          FRHIComputeShader::UpdateStats(uVar2);
          puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar11 = puVar14 + 3;
          if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30);
            puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar11 = puVar14 + 3;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar11;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar14;
          *(undefined8 **)(param_2 + 8) = puVar14 + 1;
          puVar14[1] = 0;
          *puVar14 = &PTR_LAB_144dc9ce0;
          puVar14[2] = uVar2;
          local_238 = local_1c8;
          FUN_141df5650(lVar16,param_2,lVar18,local_198);
          local_238 = CONCAT44(local_238._4_4_,local_214);
          DispatchComputeShader(param_2,lVar16,local_208 & 0xffffffff,local_218);
          lVar1 = *(longlong *)(lVar16 + 0x48);
          uVar2 = *(undefined8 *)(lVar18 + 0x2f98);
          uVar3 = *(undefined8 *)(lVar18 + 0x2f90);
          if (*(char *)(lVar1 + 0x28) == '\0') {
            FUN_1419f3850(lVar1);
          }
          param_2 = local_200;
          local_208 = *(ulonglong *)(lVar1 + 0x60);
          local_220 = 0;
          local_228 = 0;
          local_238 = uVar3;
          local_230 = uVar2;
          FUN_141df61e0(lVar16 + 0xc0,local_200,&local_208);
          if (local_88 != (undefined4 *)0x0) {
            FMemory::Free();
          }
        }
        iVar19 = iVar19 + 1;
        local_1f8 = local_1f8 + 0x30d0;
      } while (iVar19 < *(int *)(param_1 + 200));
    }
  }
  return;
}



// FUNCTION 141e01830 FUN_141e01830 body=323 status=ok
// SIG undefined FUN_141e01830(void)

undefined8 FUN_141e01830(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x1a38) < 3) {
    return 0;
  }
  lVar3 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146aaaf88) && (_Init_thread_header(&DAT_146aaaf88), DAT_146aaaf88 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar2 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MotionBlurQuality");
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 0x38))(plVar2);
    }
    DAT_146aaaf80 = lVar3;
    _Init_thread_footer(&DAT_146aaaf88);
  }
  iVar1 = *(int *)(DAT_146aaaf80 + 4);
  iVar4 = 0;
  if ((-1 < iVar1) && (iVar4 = 4, iVar1 < 4)) {
    iVar4 = iVar1;
  }
  if (((((*(uint *)(*(longlong *)(param_1 + 0x10) + 0x28) & 0x100001) == 0x100001) &&
       (0.001 < *(float *)(param_1 + 0x177c))) && (0.001 < *(float *)(param_1 + 0x1780))) &&
     ((((*(char *)(*(longlong *)(param_1 + 0x10) + 0x60) != '\0' && (0 < iVar4)) &&
       ((iVar1 = (**(code **)(*DAT_146aa9ab0 + 0x68))(), iVar1 != 0 ||
        (*(int *)(*(longlong *)(param_1 + 0x10) + 8) < 2)))) &&
      (*(char *)(param_1 + 0x120e) == '\0')))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141e01980 FUN_141e01980 body=193 status=ok
// SIG undefined FUN_141e01980(void)

undefined8 FUN_141e01980(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x30);
  if ((DAT_1464c36cc != 0) && ((byte)(*(char *)(lVar4 + 0x188) - 1U) < 2)) {
    if (((*(uint *)(lVar4 + 0x180) >> 2 & 1) == 0) && ((*(uint *)(lVar4 + 0x180) & 0x210) == 0x210))
    {
      lVar1 = *(longlong *)(lVar4 + 0x150);
      cVar3 = FUN_141ba17a0();
      if ((((cVar3 == '\0') || (lVar1 == 0)) || (*(longlong *)(lVar1 + 0x68) == 0)) ||
         (*(longlong *)(lVar1 + 0x30) == 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      lVar4 = GetShadowForInjectionIntoVolumetricFog(lVar4,param_2);
      if ((lVar4 == 0) && (!bVar2)) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141e01a50 ModifyCompilationEnvironment body=81 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FWideCustomResolvePS<2,1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"WIDE_RESOLVE_WIDTH",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MSAA_SAMPLE_COUNT",2);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FMASK",1);
  return;
}



// FUNCTION 141e01ab0 ModifyCompilationEnvironment body=78 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FWideCustomResolvePS<2,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"WIDE_RESOLVE_WIDTH",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MSAA_SAMPLE_COUNT",2);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FMASK",0);
  return;
}



// FUNCTION 141e01b00 ModifyCompilationEnvironment body=81 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FWideCustomResolvePS<2,2,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"WIDE_RESOLVE_WIDTH",2);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MSAA_SAMPLE_COUNT",2);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FMASK",1);
  return;
}



// FUNCTION 141e01b60 ModifyCompilationEnvironment body=78 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FWideCustomResolvePS<2,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"WIDE_RESOLVE_WIDTH",2);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MSAA_SAMPLE_COUNT",2);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FMASK",0);
  return;
}



// FUNCTION 141e01bb0 ModifyCompilationEnvironment body=81 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FWideCustomResolvePS<2,3,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"WIDE_RESOLVE_WIDTH",3);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MSAA_SAMPLE_COUNT",2);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FMASK",1);
  return;
}



// FUNCTION 141e01c10 ModifyCompilationEnvironment body=78 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FWideCustomResolvePS<2,3,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"WIDE_RESOLVE_WIDTH",3);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MSAA_SAMPLE_COUNT",2);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FMASK",0);
  return;
}



// FUNCTION 141e01c60 ModifyCompilationEnvironment body=78 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FWideCustomResolvePS<2,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"WIDE_RESOLVE_WIDTH",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MSAA_SAMPLE_COUNT",2);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FMASK",1);
  return;
}



// FUNCTION 141e01cb0 ModifyCompilationEnvironment body=75 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FWideCustomResolvePS<2,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"WIDE_RESOLVE_WIDTH",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MSAA_SAMPLE_COUNT",2);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FMASK",0);
  return;
}



// FUNCTION 141e01d00 ModifyCompilationEnvironment body=81 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FWideCustomResolvePS<4,1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"WIDE_RESOLVE_WIDTH",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MSAA_SAMPLE_COUNT",4);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FMASK",1);
  return;
}



// FUNCTION 141e01d60 ModifyCompilationEnvironment body=78 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FWideCustomResolvePS<4,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"WIDE_RESOLVE_WIDTH",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MSAA_SAMPLE_COUNT",4);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FMASK",0);
  return;
}



// FUNCTION 141e01db0 ModifyCompilationEnvironment body=81 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FWideCustomResolvePS<4,2,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"WIDE_RESOLVE_WIDTH",2);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MSAA_SAMPLE_COUNT",4);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FMASK",1);
  return;
}



// FUNCTION 141e01e10 ModifyCompilationEnvironment body=78 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FWideCustomResolvePS<4,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"WIDE_RESOLVE_WIDTH",2);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MSAA_SAMPLE_COUNT",4);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FMASK",0);
  return;
}



// FUNCTION 141e01e60 ModifyCompilationEnvironment body=81 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FWideCustomResolvePS<4,3,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"WIDE_RESOLVE_WIDTH",3);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MSAA_SAMPLE_COUNT",4);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FMASK",1);
  return;
}



// FUNCTION 141e01ec0 ModifyCompilationEnvironment body=78 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FWideCustomResolvePS<4,3,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"WIDE_RESOLVE_WIDTH",3);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MSAA_SAMPLE_COUNT",4);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FMASK",0);
  return;
}



// FUNCTION 141e01f10 ModifyCompilationEnvironment body=78 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FWideCustomResolvePS<4,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"WIDE_RESOLVE_WIDTH",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MSAA_SAMPLE_COUNT",4);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FMASK",1);
  return;
}



// FUNCTION 141e01f60 ModifyCompilationEnvironment body=75 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FWideCustomResolvePS<4,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"WIDE_RESOLVE_WIDTH",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MSAA_SAMPLE_COUNT",4);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FMASK",0);
  return;
}



// FUNCTION 141e01fb0 ModifyCompilationEnvironment body=81 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FWideCustomResolvePS<8,1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"WIDE_RESOLVE_WIDTH",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MSAA_SAMPLE_COUNT",8);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FMASK",1);
  return;
}



// FUNCTION 141e02010 ModifyCompilationEnvironment body=78 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FWideCustomResolvePS<8,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"WIDE_RESOLVE_WIDTH",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MSAA_SAMPLE_COUNT",8);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FMASK",0);
  return;
}



// FUNCTION 141e02060 ModifyCompilationEnvironment body=81 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FWideCustomResolvePS<8,2,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"WIDE_RESOLVE_WIDTH",2);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MSAA_SAMPLE_COUNT",8);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FMASK",1);
  return;
}



// FUNCTION 141e020c0 ModifyCompilationEnvironment body=78 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FWideCustomResolvePS<8,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"WIDE_RESOLVE_WIDTH",2);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MSAA_SAMPLE_COUNT",8);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FMASK",0);
  return;
}



// FUNCTION 141e02110 ModifyCompilationEnvironment body=81 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FWideCustomResolvePS<8,3,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"WIDE_RESOLVE_WIDTH",3);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MSAA_SAMPLE_COUNT",8);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FMASK",1);
  return;
}



// FUNCTION 141e02170 ModifyCompilationEnvironment body=78 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FWideCustomResolvePS<8,3,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"WIDE_RESOLVE_WIDTH",3);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MSAA_SAMPLE_COUNT",8);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FMASK",0);
  return;
}



// FUNCTION 141e021c0 ModifyCompilationEnvironment body=78 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FWideCustomResolvePS<8,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"WIDE_RESOLVE_WIDTH",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MSAA_SAMPLE_COUNT",8);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FMASK",1);
  return;
}



// FUNCTION 141e02210 ModifyCompilationEnvironment body=75 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FWideCustomResolvePS<8,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"WIDE_RESOLVE_WIDTH",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MSAA_SAMPLE_COUNT",8);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FMASK",0);
  return;
}



// FUNCTION 141e02260 ModifyCompilationEnvironment body=78 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FWideCustomResolvePS<0,1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"WIDE_RESOLVE_WIDTH",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MSAA_SAMPLE_COUNT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FMASK",1);
  return;
}



// FUNCTION 141e022b0 ModifyCompilationEnvironment body=75 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FWideCustomResolvePS<0,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"WIDE_RESOLVE_WIDTH",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MSAA_SAMPLE_COUNT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FMASK",0);
  return;
}



// FUNCTION 141e02300 ModifyCompilationEnvironment body=81 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TInjectShadowedLocalLightPS<1,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"DYNAMICALLY_SHADOWED",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"INVERSE_SQUARED_FALLOFF",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_TEMPORAL_REPROJECTION",1);
  return;
}



// FUNCTION 141e02360 ModifyCompilationEnvironment body=78 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TInjectShadowedLocalLightPS<1,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"DYNAMICALLY_SHADOWED",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"INVERSE_SQUARED_FALLOFF",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_TEMPORAL_REPROJECTION",0);
  return;
}



// FUNCTION 141e023b0 ModifyCompilationEnvironment body=78 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TInjectShadowedLocalLightPS<1,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"DYNAMICALLY_SHADOWED",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"INVERSE_SQUARED_FALLOFF",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_TEMPORAL_REPROJECTION",1);
  return;
}



// FUNCTION 141e02400 ModifyCompilationEnvironment body=75 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TInjectShadowedLocalLightPS<1,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"DYNAMICALLY_SHADOWED",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"INVERSE_SQUARED_FALLOFF",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_TEMPORAL_REPROJECTION",0);
  return;
}



// FUNCTION 141e02450 ModifyCompilationEnvironment body=78 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TInjectShadowedLocalLightPS<0,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"DYNAMICALLY_SHADOWED",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"INVERSE_SQUARED_FALLOFF",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_TEMPORAL_REPROJECTION",1);
  return;
}



// FUNCTION 141e024a0 ModifyCompilationEnvironment body=75 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TInjectShadowedLocalLightPS<0,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"DYNAMICALLY_SHADOWED",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"INVERSE_SQUARED_FALLOFF",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_TEMPORAL_REPROJECTION",0);
  return;
}



// FUNCTION 141e024f0 ModifyCompilationEnvironment body=75 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TInjectShadowedLocalLightPS<0,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"DYNAMICALLY_SHADOWED",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"INVERSE_SQUARED_FALLOFF",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_TEMPORAL_REPROJECTION",1);
  return;
}



// FUNCTION 141e02540 ModifyCompilationEnvironment body=72 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TInjectShadowedLocalLightPS<0,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"DYNAMICALLY_SHADOWED",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"INVERSE_SQUARED_FALLOFF",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_TEMPORAL_REPROJECTION",0);
  return;
}



// FUNCTION 141e02590 ModifyCompilationEnvironment body=98 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TPageTableUpdatePS<1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  undefined4 *local_18;
  undefined1 *local_10;
  
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"PAGE_TABLE_FORMAT",1);
  local_18 = local_res18;
  local_res18[0] = 0;
  local_10 = local_res10;
  local_res10[0] = 0x25;
  TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_char_const_&>_>
            (param_2 + 0xc0,local_res20,&local_18,0);
  return;
}



// FUNCTION 141e02600 ModifyCompilationEnvironment body=95 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TPageTableUpdatePS<0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  undefined4 *local_18;
  undefined1 *local_10;
  
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"PAGE_TABLE_FORMAT",0);
  local_18 = local_res18;
  local_res18[0] = 0;
  local_10 = local_res10;
  local_res10[0] = 0x20;
  TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_char_const_&>_>
            (param_2 + 0xc0,local_res20,&local_18,0);
  return;
}



// FUNCTION 141e026a0 FUN_141e026a0 body=164 status=ok
// SIG undefined FUN_141e026a0(void)

void FUN_141e026a0(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREADGROUP_SIZE",DAT_1464c36f0);
  FUN_141a172f0(param_2,L"LOCAL_LIGHT_DATA_STRIDE",9);
  FUN_141a172f0(param_2,L"NUM_CULLED_LIGHTS_GRID_STRIDE",DAT_1464c1ca0);
  FUN_141a172f0(param_2,L"NUM_CULLED_GRID_PRIMITIVE_TYPES",DAT_1464c1ca4);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_TEMPORAL_REPROJECTION",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"DISTANCE_FIELD_SKY_OCCLUSION",1);
  return;
}



// FUNCTION 141e02750 FUN_141e02750 body=161 status=ok
// SIG undefined FUN_141e02750(void)

void FUN_141e02750(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREADGROUP_SIZE",DAT_1464c36f0);
  FUN_141a172f0(param_2,L"LOCAL_LIGHT_DATA_STRIDE",9);
  FUN_141a172f0(param_2,L"NUM_CULLED_LIGHTS_GRID_STRIDE",DAT_1464c1ca0);
  FUN_141a172f0(param_2,L"NUM_CULLED_GRID_PRIMITIVE_TYPES",DAT_1464c1ca4);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_TEMPORAL_REPROJECTION",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"DISTANCE_FIELD_SKY_OCCLUSION",0);
  return;
}



// FUNCTION 141e02800 FUN_141e02800 body=161 status=ok
// SIG undefined FUN_141e02800(void)

void FUN_141e02800(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREADGROUP_SIZE",DAT_1464c36f0);
  FUN_141a172f0(param_2,L"LOCAL_LIGHT_DATA_STRIDE",9);
  FUN_141a172f0(param_2,L"NUM_CULLED_LIGHTS_GRID_STRIDE",DAT_1464c1ca0);
  FUN_141a172f0(param_2,L"NUM_CULLED_GRID_PRIMITIVE_TYPES",DAT_1464c1ca4);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_TEMPORAL_REPROJECTION",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"DISTANCE_FIELD_SKY_OCCLUSION",1);
  return;
}



// FUNCTION 141e028b0 FUN_141e028b0 body=158 status=ok
// SIG undefined FUN_141e028b0(void)

void FUN_141e028b0(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREADGROUP_SIZE",DAT_1464c36f0);
  FUN_141a172f0(param_2,L"LOCAL_LIGHT_DATA_STRIDE",9);
  FUN_141a172f0(param_2,L"NUM_CULLED_LIGHTS_GRID_STRIDE",DAT_1464c1ca0);
  FUN_141a172f0(param_2,L"NUM_CULLED_GRID_PRIMITIVE_TYPES",DAT_1464c1ca4);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_TEMPORAL_REPROJECTION",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"DISTANCE_FIELD_SKY_OCCLUSION",0);
  return;
}



// FUNCTION 141e02950 FUN_141e02950 body=116 status=ok
// SIG undefined FUN_141e02950(void)

void FUN_141e02950(uint param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_141ac7cb0();
  iVar2 = FUN_1419ef5f0(param_1);
  if ((iVar2 < 2) || ((param_1 < 0x1e && ((0x28e71800U >> (param_1 & 0x1f) & 1) != 0)))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  uVar3 = 1;
  if (bVar1) {
    uVar3 = DAT_1464c36c0;
  }
  FUN_141a172f0(param_3,L"MAX_SLICES_PER_VOXELIZATION_PASS",uVar3);
  FUN_1404a3a40(param_3,L"VOXELIZE_SHAPE_MODE",L"OBJECT_BOX_MODE");
  return;
}



// FUNCTION 141e029d0 FUN_141e029d0 body=116 status=ok
// SIG undefined FUN_141e029d0(void)

void FUN_141e029d0(uint param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_141ac7cb0();
  iVar2 = FUN_1419ef5f0(param_1);
  if ((iVar2 < 2) || ((param_1 < 0x1e && ((0x28e71800U >> (param_1 & 0x1f) & 1) != 0)))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  uVar3 = 1;
  if (bVar1) {
    uVar3 = DAT_1464c36c0;
  }
  FUN_141a172f0(param_3,L"MAX_SLICES_PER_VOXELIZATION_PASS",uVar3);
  FUN_1404a3a40(param_3,L"VOXELIZE_SHAPE_MODE",L"PRIMITIVE_SPHERE_MODE");
  return;
}



// FUNCTION 141e02a50 ModifyCompilationEnvironment body=41 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TVoxelizeVolumeVS<1>::ModifyCompilationEnvironment
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141ac7cb0();
  FUN_1404a3a40(param_3,L"VOXELIZE_SHAPE_MODE",L"OBJECT_BOX_MODE");
  return;
}



// FUNCTION 141e02a80 ModifyCompilationEnvironment body=41 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TVoxelizeVolumeVS<0>::ModifyCompilationEnvironment
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141ac7cb0();
  FUN_1404a3a40(param_3,L"VOXELIZE_SHAPE_MODE",L"PRIMITIVE_SPHERE_MODE");
  return;
}



// FUNCTION 141e02ab0 FUN_141e02ab0 body=141 status=ok
// SIG undefined FUN_141e02ab0(void)

void FUN_141e02ab0(uint param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  
  FUN_141ac7cb0();
  iVar1 = FUN_1419ef5f0(param_1);
  if ((1 < iVar1) && ((0x1d < param_1 || ((0x28e71800U >> (param_1 & 0x1f) & 1) == 0)))) {
    iVar1 = *(int *)(param_3 + 0xb8);
    *(int *)(param_3 + 0xb8) = iVar1 + 1;
    if (*(int *)(param_3 + 0xbc) < iVar1 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3 + 0xb0,iVar1);
    }
    *(undefined4 *)(*(longlong *)(param_3 + 0xb0) + (longlong)iVar1 * 4) = 0xd;
  }
  FUN_1404a3a40(param_3,L"VOXELIZE_SHAPE_MODE",L"OBJECT_BOX_MODE");
  return;
}



// FUNCTION 141e02b40 FUN_141e02b40 body=141 status=ok
// SIG undefined FUN_141e02b40(void)

void FUN_141e02b40(uint param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  
  FUN_141ac7cb0();
  iVar1 = FUN_1419ef5f0(param_1);
  if ((1 < iVar1) && ((0x1d < param_1 || ((0x28e71800U >> (param_1 & 0x1f) & 1) == 0)))) {
    iVar1 = *(int *)(param_3 + 0xb8);
    *(int *)(param_3 + 0xb8) = iVar1 + 1;
    if (*(int *)(param_3 + 0xbc) < iVar1 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3 + 0xb0,iVar1);
    }
    *(undefined4 *)(*(longlong *)(param_3 + 0xb0) + (longlong)iVar1 * 4) = 0xd;
  }
  FUN_1404a3a40(param_3,L"VOXELIZE_SHAPE_MODE",L"PRIMITIVE_SPHERE_MODE");
  return;
}



// FUNCTION 141e02bd0 ModifyCompilationEnvironment body=67 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FVelocityPS::ModifyCompilationEnvironment
               (undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  undefined1 local_28 [8];
  undefined4 *local_20;
  undefined1 *local_18;
  
  local_20 = local_res20;
  local_res20[0] = 0;
  local_18 = local_res18;
  local_res18[0] = 0xe;
  TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_char_const_&>_>
            (param_3 + 0xc0,local_28,&local_20,0);
  return;
}



// FUNCTION 141e02c80 ModifyCompilationEnvironment body=63 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FWriteToBoundingSphereVS::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0xb8);
  *(int *)(param_2 + 0xb8) = iVar1 + 1;
  if (*(int *)(param_2 + 0xbc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow((longlong *)(param_2 + 0xb0),iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + (longlong)iVar1 * 4) = 0xd;
  return;
}



// FUNCTION 141e02cc0 FUN_141e02cc0 body=117 status=ok
// SIG undefined FUN_141e02cc0(void)

undefined8 FUN_141e02cc0(char param_1)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  
  lVar1 = DAT_146aa9a70;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      lVar4 = 4;
      goto LAB_141e02d08;
    }
  }
  lVar4 = 0;
LAB_141e02d08:
  if (*(int *)(lVar4 + lVar1) == 1) {
    cVar2 = FUN_141ae37e0();
    if ((cVar2 == '\0') || (param_1 == '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141e02d40 FUN_141e02d40 body=89 status=ok
// SIG undefined FUN_141e02d40(void)

bool FUN_141e02d40(void)

{
  int *piVar1;
  char cVar2;
  DWORD DVar3;
  
  piVar1 = DAT_146aa9a70;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      return piVar1[1] == 1;
    }
  }
  return *piVar1 == 1;
}



// FUNCTION 141e02da0 FUN_141e02da0 body=747 status=ok
// SIG undefined FUN_141e02da0(void)

void FUN_141e02da0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int *param_5,
                  int *param_6)

{
  short sVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar4 = *(longlong *)(param_1 + 8);
  if (*(char *)(param_2 + 0x123c) == '\0') {
    fVar7 = *(float *)(lVar4 + 0xc4) - *(float *)(param_2 + 0x8e0);
    fVar6 = *(float *)(lVar4 + 0xc0) - *(float *)(param_2 + 0x8dc);
    fVar5 = *(float *)(lVar4 + 200) - *(float *)(param_2 + 0x8e4);
    fVar5 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
  }
  else if (*(char *)(param_2 + 0x123c) == '\x02') {
    fVar5 = (*(float *)(lVar4 + 0xc4) - *(float *)(param_2 + 0x8e0)) * *(float *)(param_2 + 0x1234)
            + (*(float *)(lVar4 + 0xc0) - *(float *)(param_2 + 0x8dc)) *
              *(float *)(param_2 + 0x1230) +
            (*(float *)(lVar4 + 200) - *(float *)(param_2 + 0x8e4)) * *(float *)(param_2 + 0x1238);
  }
  else {
    fVar5 = *(float *)(lVar4 + 200) * *(float *)(param_2 + 0x538) +
            *(float *)(param_2 + 0x548) * 1.0 +
            *(float *)(lVar4 + 0xc4) * *(float *)(param_2 + 0x528) +
            *(float *)(lVar4 + 0xc0) * *(float *)(param_2 + 0x518);
  }
  cVar2 = FUN_1427476e0(*(undefined8 *)(param_2 + 0x10));
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
    if (cVar2 == '\0') {
      lVar4 = (longlong)*param_5;
      *param_5 = *param_5 + 1;
      sVar1 = *(short *)(*(longlong *)(param_1 + 8) + 0x170);
      *(float *)(param_4 + 0xc + lVar4 * 0x10) = fVar5;
      *(longlong *)(param_4 + lVar4 * 0x10) = param_1;
      *(uint *)(param_4 + 8 + lVar4 * 0x10) = (int)sVar1 + 0x8000U | 0x30000;
      uVar3 = *(uint *)(param_3 + 4);
      param_6[3] = param_6[3] + 1;
      *(byte *)((longlong)param_6 + 0x13) =
           *(byte *)((longlong)param_6 + 0x13) | (byte)(uVar3 >> 5) & 1;
      *(byte *)((longlong)param_6 + 0x17) =
           *(byte *)((longlong)param_6 + 0x17) | (byte)(uVar3 >> 6) & 1;
    }
  }
  else {
    uVar3 = *(uint *)(param_3 + 4);
    if ((uVar3 & 0x10) != 0) {
      lVar4 = (longlong)*param_5;
      *param_5 = *param_5 + 1;
      sVar1 = *(short *)(*(longlong *)(param_1 + 8) + 0x170);
      *(float *)(param_4 + 0xc + lVar4 * 0x10) = fVar5;
      *(int *)(param_4 + 8 + lVar4 * 0x10) = sVar1 + 0x8000;
      *(longlong *)(param_4 + lVar4 * 0x10) = param_1;
      uVar3 = *(uint *)(param_3 + 4);
      *param_6 = *param_6 + 1;
      *(byte *)(param_6 + 4) = *(byte *)(param_6 + 4) | (byte)(uVar3 >> 5) & 1;
      *(byte *)(param_6 + 5) = *(byte *)(param_6 + 5) | (byte)(uVar3 >> 6) & 1;
      uVar3 = *(uint *)(param_3 + 4);
    }
    if ((uVar3 & 8) != 0) {
      lVar4 = (longlong)*param_5;
      *param_5 = *param_5 + 1;
      sVar1 = *(short *)(*(longlong *)(param_1 + 8) + 0x170);
      *(float *)(param_4 + 0xc + lVar4 * 0x10) = fVar5;
      *(longlong *)(param_4 + lVar4 * 0x10) = param_1;
      *(uint *)(param_4 + 8 + lVar4 * 0x10) = (int)sVar1 + 0x8000U | 0x10000;
      uVar3 = *(uint *)(param_3 + 4);
      param_6[1] = param_6[1] + 1;
      *(byte *)((longlong)param_6 + 0x11) =
           *(byte *)((longlong)param_6 + 0x11) | (byte)(uVar3 >> 5) & 1;
      *(byte *)((longlong)param_6 + 0x15) =
           *(byte *)((longlong)param_6 + 0x15) | (byte)(uVar3 >> 6) & 1;
    }
  }
  cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
  if (cVar2 != '\0') {
    lVar4 = (longlong)*param_5;
    *param_5 = *param_5 + 1;
    sVar1 = *(short *)(*(longlong *)(param_1 + 8) + 0x170);
    *(float *)(param_4 + 0xc + lVar4 * 0x10) = fVar5;
    *(longlong *)(param_4 + lVar4 * 0x10) = param_1;
    *(uint *)(param_4 + 8 + lVar4 * 0x10) = (int)sVar1 + 0x8000U | 0x20000;
    uVar3 = *(uint *)(param_3 + 4);
    param_6[2] = param_6[2] + 1;
    *(byte *)((longlong)param_6 + 0x12) =
         *(byte *)((longlong)param_6 + 0x12) | (byte)(uVar3 >> 5) & 1;
    *(byte *)((longlong)param_6 + 0x16) =
         *(byte *)((longlong)param_6 + 0x16) | (byte)(uVar3 >> 6) & 1;
  }
  return;
}



// FUNCTION 141e03090 FUN_141e03090 body=666 status=ok
// SIG undefined FUN_141e03090(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_141e03090(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_138 [32];
  wchar_t *local_118;
  undefined1 local_110;
  undefined1 local_108;
  undefined8 local_f8;
  undefined4 local_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined2 uStack_c0;
  undefined2 uStack_be;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  wchar_t *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_f8 = param_2;
  cVar4 = FUN_141e0bba0(*(undefined8 *)(param_1 + 8),param_1 + 0x10);
  if ((cVar4 == '\0') ||
     ((((int)DAT_146aa954c < 1 || (DAT_146ab62f0 == '\0')) && (-1 < (int)DAT_146aa954c)))) {
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 200)) {
      lVar6 = 0;
      do {
        lVar2 = *(longlong *)(param_1 + 0xc0);
        local_d8 = DAT_1464c9c98;
        local_98 = _DAT_1464c9c88;
        uStack_90 = uRam00000001464c9c90;
        uStack_cc = DAT_1464c36d8;
        iStack_d4 = (DAT_1464c36d4 + -1 +
                    (*(int *)(lVar6 + 0x1aa8 + lVar2) - *(int *)(lVar6 + 0x1aa0 + lVar2))) /
                    DAT_1464c36d4;
        uStack_bc = 10;
        uStack_b8 = 0;
        local_c8 = 1;
        uStack_c0 = 1;
        local_a8 = L"UnknownTextureVolume";
        iStack_d0 = (DAT_1464c36d4 + -1 +
                    (*(int *)(lVar6 + 0x1aac + lVar2) - *(int *)(lVar6 + 0x1aa4 + lVar2))) /
                    DAT_1464c36d4;
        local_108 = 1;
        local_88 = CONCAT44(iStack_d4,DAT_1464c9c98);
        uStack_80 = CONCAT44(DAT_1464c36d8,iStack_d0);
        uStack_b4 = 0x40010009;
        uStack_b0 = uStack_b0 & 0xffffff00;
        uStack_64 = 0x40010009;
        uStack_60 = uStack_b0;
        uStack_5c = uStack_ac;
        local_68 = DAT_146a9da7c;
        uStack_c4 = 0x10000;
        local_78 = 0x1000000000001;
        uStack_70 = CONCAT44(10,CONCAT22(uStack_be,1));
        uStack_a0 = CONCAT22(uStack_a0._2_2_,1);
        local_110 = 1;
        local_118 = L"VBufferA";
        local_58 = 0x44dc9e20;
        uStack_54 = 1;
        uStack_50 = uStack_a0;
        uStack_4c = uStack_9c;
        FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_98,lVar6 + lVar2 + 0x2f90);
        local_108 = 1;
        local_110 = 1;
        local_118 = L"VBufferB";
        FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_98,lVar2 + 0x2f98 + lVar6);
        iVar1 = (int)param_3[1];
        uVar3 = *(undefined8 *)(*(longlong *)(lVar6 + lVar2 + 0x2f90) + 0x18);
        *(int *)(param_3 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
          FUN_140822430(param_3,iVar1);
        }
        *(undefined8 *)(*param_3 + (longlong)iVar1 * 8) = uVar3;
        iVar1 = (int)param_3[1];
        uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 0x2f98 + lVar6) + 0x18);
        *(int *)(param_3 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
          FUN_140822430(param_3,iVar1);
        }
        iVar5 = iVar5 + 1;
        lVar6 = lVar6 + 0x30d0;
        *(undefined8 *)(*param_3 + (longlong)iVar1 * 8) = uVar3;
        param_2 = local_f8;
      } while (iVar5 < *(int *)(param_1 + 200));
    }
    iVar5 = (DAT_146aa954c ^ (int)DAT_146aa954c >> 0x1f) - ((int)DAT_146aa954c >> 0x1f);
  }
  return iVar5;
}



// FUNCTION 141e03330 FUN_141e03330 body=183 status=ok
// SIG undefined FUN_141e03330(void)

longlong FUN_141e03330(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = 0;
  if ((*(longlong *)(param_4 + 8) != 0) &&
     ((*(uint *)(*(longlong *)(param_4 + 8) + 0x1c) >> 6 & 1) != 0)) {
    plVar2 = *(longlong **)(param_4 + 200);
    while ((plVar2 != (longlong *)0x0 && (lVar6 == 0))) {
      lVar7 = lVar6;
      if (*(char *)(*(longlong *)(*plVar2 + 0x30) + 0x188) == '\0') {
        lVar5 = 0;
        lVar3 = (longlong)*(int *)(*plVar2 + 0x58) * 0x70 + *(longlong *)(param_1 + 0x1c8);
        iVar1 = *(int *)(lVar3 + 0x18);
        if (0 < iVar1) {
          plVar4 = *(longlong **)(lVar3 + 0x10);
          do {
            lVar7 = *plVar4;
            if ((((lVar7 != 0) && ((*(uint *)(lVar7 + 0x560) & 0x100) != 0)) &&
                (*(longlong *)(lVar7 + 0x600) == param_4)) && (*(longlong *)(lVar7 + 0x10) != 0))
            break;
            lVar5 = lVar5 + 1;
            plVar4 = plVar4 + 1;
            lVar7 = lVar6;
          } while (lVar5 < iVar1);
        }
      }
      plVar2 = (longlong *)plVar2[7];
      lVar6 = lVar7;
    }
  }
  return lVar6;
}



// FUNCTION 141e033f0 Rehash body=538 status=ok
// SIG undefined Rehash(void)

void TSet<TStaticMeshDrawList<FVelocityDrawingPolicy>::FDrawingPolicyLink,TStaticMeshDrawList<FVelocityDrawingPolicy>::FDrawingPolicyKeyFuncs,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar5 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar5 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar5) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_38;
      }
      uVar5 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_141e0351f;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
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
LAB_141e0351f:
        iStack_54 = iVar3;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = iStack_2c;
        lVar6 = (longlong)iStack_2c * 0xe0 + *param_1;
        uVar5 = FMeshDrawingPolicy::GetTypeHash(lVar6 + 0x20);
        uVar5 = uVar5 & (int)*plVar2 - 1U;
        *(uint *)(lVar6 + 0xdc) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0xd8) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 141e03610 Remove body=885 status=ok
// SIG undefined Remove(void)

void TStaticMeshDrawList<FVelocityDrawingPolicy>::FElementHandle::Remove
               (longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  int *piVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  iVar8 = *(int *)(param_1 + 0x1c);
  lVar13 = (longlong)iVar8;
  plVar12 = (longlong *)((longlong)*(int *)(param_1 + 0x18) * 0xe0 + *(longlong *)(lVar2 + 0x40));
  if (param_2 != '\0') {
    FUN_141d78430(*(undefined8 *)(lVar13 * 0x38 + 8 + plVar12[2]),param_1);
  }
  iVar16 = 0;
  *(undefined8 *)(lVar13 * 0x38 + 8 + plVar12[2]) = 0;
  iVar7 = *(int *)((longlong)plVar12 + 0x1c);
  iVar15 = *(int *)((longlong)plVar12 + 0xc);
  TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
  ::RemoveAtSwapImpl(plVar12 + 2,iVar8,1,1);
  iVar5 = (int)plVar12[1];
  iVar4 = (iVar5 - iVar8) + -1;
  if (0 < iVar4) {
    iVar4 = 1;
  }
  if (iVar4 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*plVar12 + lVar13 * 4),(void *)(*plVar12 + (longlong)(iVar5 - iVar4) * 4),
               (longlong)iVar4 << 2);
    iVar5 = (int)plVar12[1];
  }
  *(int *)(plVar12 + 1) = iVar5 + -1;
  TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar12);
  DAT_146a81050 =
       DAT_146a81050 -
       (ulonglong)
       (uint)((iVar7 * 0xe + iVar15) * 4 +
             (*(int *)((longlong)plVar12 + 0x1c) * 0xe + *(int *)((longlong)plVar12 + 0xc)) * -4);
  iVar7 = (int)plVar12[3];
  if (iVar8 < iVar7) {
    *(int *)(*(longlong *)(lVar13 * 0x38 + 0x30 + plVar12[2]) + 0x1c) = iVar8;
    iVar7 = (int)plVar12[3];
  }
  if (iVar7 == 0) {
    DAT_146a81050 =
         DAT_146a81050 +
         ((-0xd8 - (ulonglong)(uint)(*(int *)((longlong)plVar12 + 0x1c) * 0x38)) -
         (ulonglong)(uint)(*(int *)((longlong)plVar12 + 0xc) << 2));
    iVar7 = *(int *)(lVar2 + 0x38);
    iVar8 = iVar7 + -1;
    if (0 < iVar8) {
      lVar13 = *(longlong *)(lVar2 + 0x40);
      iVar15 = iVar16;
      do {
        iVar5 = (iVar8 + iVar15) / 2;
        lVar9 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar5 * 4) * 0xe0;
        uVar3 = *(ulonglong *)(lVar9 + 0x28 + lVar13);
        if (uVar3 < (ulonglong)plVar12[5]) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = 1;
          if (uVar3 <= (ulonglong)plVar12[5]) {
            uVar3 = *(ulonglong *)(lVar9 + 0x30 + lVar13);
            if (uVar3 < (ulonglong)plVar12[6]) {
              uVar6 = 0xffffffff;
            }
            else if (uVar3 <= (ulonglong)plVar12[6]) {
              uVar6 = *(uint *)(lVar9 + 0x50 + lVar13) & 1;
              if (uVar6 < (*(uint *)(plVar12 + 10) & 1)) {
                uVar6 = 0xffffffff;
              }
              else {
                uVar6 = (uint)((*(uint *)(plVar12 + 10) & 1) < uVar6);
              }
            }
          }
        }
        iVar16 = iVar5 + 1;
        if (-1 < (int)uVar6) {
          iVar16 = iVar15;
          iVar8 = iVar5;
        }
        iVar15 = iVar16;
      } while (iVar16 < iVar8);
    }
    if (iVar16 < iVar7) {
      lVar13 = (longlong)iVar16;
      piVar11 = (int *)(*(longlong *)(lVar2 + 0x30) + lVar13 * 4);
      do {
        if (*piVar11 == *(int *)(param_1 + 0x18)) break;
        iVar16 = iVar16 + 1;
        lVar13 = lVar13 + 1;
        piVar11 = piVar11 + 1;
      } while (lVar13 < iVar7);
    }
    plVar1 = (longlong *)(lVar2 + 0x30);
    if (iVar16 < iVar7) {
      iVar8 = *(int *)(lVar2 + 0x38);
      iVar7 = (iVar8 - iVar16) + -1;
      if (iVar7 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)(*plVar1 + (longlong)iVar16 * 4),
                   (void *)(*plVar1 + (longlong)(iVar16 + 1) * 4),(longlong)iVar7 << 2);
        iVar8 = *(int *)(lVar2 + 0x38);
      }
      *(int *)(lVar2 + 0x38) = iVar8 + -1;
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar1);
    }
    else {
      piVar11 = (int *)*plVar1;
      if (piVar11 != piVar11 + *(int *)(lVar2 + 0x38)) {
        piVar10 = piVar11;
        do {
          if (*piVar10 == *(int *)((longlong)plVar12 + 0xc4)) {
            iVar8 = (int)((longlong)piVar10 - (longlong)piVar11 >> 2);
            if (iVar8 != -1) {
              ::_guard_xfg_dispatch_icall_nop
                        (piVar11 + iVar8,piVar11 + iVar8 + 1,
                         (longlong)((*(int *)(lVar2 + 0x38) - iVar8) + -1) << 2);
              *(int *)(lVar2 + 0x38) = *(int *)(lVar2 + 0x38) + -1;
            }
            break;
          }
          piVar10 = piVar10 + 1;
        } while (piVar10 != piVar11 + *(int *)(lVar2 + 0x38));
      }
    }
    iVar8 = *(int *)((longlong)plVar12 + 0xc4);
    if (*(int *)(lVar2 + 0x48) != *(int *)(lVar2 + 0x74)) {
      lVar13 = *(longlong *)(lVar2 + 0x40);
      lVar14 = (longlong)iVar8 * 0xe0;
      lVar9 = *(longlong *)(lVar2 + 0x80);
      if (*(longlong *)(lVar2 + 0x80) == 0) {
        lVar9 = lVar2 + 0x78;
      }
      piVar11 = (int *)((longlong)
                        (int)(*(int *)(lVar2 + 0x88) - 1U & *(uint *)(lVar14 + 0xdc + lVar13)) * 4 +
                       lVar9);
      iVar7 = *piVar11;
      while (iVar7 != -1) {
        if (iVar7 == iVar8) {
          *piVar11 = *(int *)(lVar14 + 0xd8 + lVar13);
          break;
        }
        piVar11 = (int *)(lVar13 + 0xd8 + (longlong)iVar7 * 0xe0);
        iVar7 = *piVar11;
      }
    }
    plVar12 = (longlong *)((longlong)iVar8 * 0xe0 + *(longlong *)(lVar2 + 0x40));
    TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
    ::
    ~TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
              (plVar12 + 2);
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FDrawingPolicyLink>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(lVar2 + 0x40,iVar8,1);
  }
  return;
}



// FUNCTION 141e03990 FUN_141e03990 body=301 status=ok
// SIG undefined FUN_141e03990(void)

void FUN_141e03990(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  int param_5,int param_6)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  char cVar5;
  undefined1 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 local_48;
  uint local_40;
  
  lVar7 = (longlong)param_5;
  local_48 = 2;
  uVar3 = local_48;
  local_40 = local_40 & 0xffff0000;
  uVar4 = local_40;
  if (lVar7 <= param_6) {
    lVar8 = lVar7 * 0x18;
    lVar7 = (param_6 - lVar7) + 1;
    do {
      lVar1 = *(longlong *)(param_3 + 0x22a0);
      if (((*(byte *)(lVar8 + 0x10 + lVar1) & 3) != 0) &&
         (cVar5 = FUN_141d4f4f0(*(undefined8 *)(*(longlong *)(lVar8 + 8 + lVar1) + 0x140),param_3,1)
         , cVar5 != '\0')) {
        lVar2 = *(longlong *)(lVar8 + lVar1);
        local_48 = uVar3;
        local_40 = uVar4;
        uVar6 = FUN_141ac28e0(param_3);
        FUN_141dfea10(param_2,param_3,&local_48,lVar2,1,param_4,*(undefined8 *)(lVar8 + 8 + lVar1),
                      *(undefined4 *)(lVar2 + 0xb0),uVar6);
      }
      lVar8 = lVar8 + 0x18;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 141e03ac0 FUN_141e03ac0 body=301 status=ok
// SIG undefined FUN_141e03ac0(void)

void FUN_141e03ac0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  int param_5,int param_6)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  char cVar5;
  undefined1 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 local_48;
  uint local_40;
  
  lVar7 = (longlong)param_5;
  local_48 = 2;
  uVar3 = local_48;
  local_40 = local_40 & 0xffff0000;
  uVar4 = local_40;
  if (lVar7 <= param_6) {
    lVar8 = lVar7 * 0x18;
    lVar7 = (param_6 - lVar7) + 1;
    do {
      lVar1 = *(longlong *)(param_3 + 0x2280);
      if (((*(byte *)(lVar8 + 0x10 + lVar1) & 3) != 0) &&
         (cVar5 = FUN_141d4f4f0(*(undefined8 *)(*(longlong *)(lVar8 + 8 + lVar1) + 0x140),param_3,1)
         , cVar5 != '\0')) {
        lVar2 = *(longlong *)(lVar8 + lVar1);
        local_48 = uVar3;
        local_40 = uVar4;
        uVar6 = FUN_141ac28e0(param_3);
        FUN_141dfea10(param_2,param_3,&local_48,lVar2,1,param_4,*(undefined8 *)(lVar8 + 8 + lVar1),
                      *(undefined4 *)(lVar2 + 0xb0),uVar6);
      }
      lVar8 = lVar8 + 0x18;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 141e03bf0 FUN_141e03bf0 body=4692 status=ok
// SIG undefined FUN_141e03bf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141e03bf0(longlong param_1,longlong param_2,longlong param_3,int *param_4,
                  undefined4 param_5,WriteBytesMem *param_6,longlong *param_7,byte *param_8)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float extraout_XMM0_Da;
  undefined8 uVar16;
  float extraout_XMM0_Db;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
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
  undefined1 auStack_bc8 [32];
  undefined8 local_ba8;
  undefined8 local_ba0;
  ulonglong local_b98;
  float local_b90;
  float local_b88;
  ulonglong local_b80;
  ulonglong local_b78;
  longlong local_b70;
  undefined4 local_b68;
  undefined4 local_b60;
  WriteBytesMem *local_b58 [2];
  WriteBytesMem *local_b48;
  undefined4 local_b40;
  uint local_b38;
  undefined4 local_b34;
  int *local_b30;
  float local_b28;
  float local_b24;
  float local_b20;
  undefined *local_b18;
  uint local_b10;
  float local_b0c;
  byte *local_b08;
  undefined1 local_b00 [8];
  uint local_af8;
  float local_af4;
  float local_af0;
  longlong *local_ae8;
  float local_ad8;
  float fStack_ad4;
  float fStack_ad0;
  float fStack_acc;
  undefined4 uStack_ac8;
  float fStack_ac4;
  undefined4 local_ac0;
  undefined1 local_ab8 [16];
  float local_aa8;
  float fStack_aa4;
  float fStack_aa0;
  undefined8 uStack_a9c;
  float fStack_a94;
  float fStack_a90;
  float fStack_a8c;
  float local_a88;
  float fStack_a84;
  float fStack_a80;
  undefined4 uStack_a7c;
  float local_a78;
  float fStack_a74;
  undefined8 uStack_a70;
  float local_a68;
  float fStack_a64;
  undefined8 uStack_a60;
  float local_a58;
  float fStack_a54;
  float fStack_a50;
  float fStack_a4c;
  float local_a48;
  float fStack_a44;
  float fStack_a40;
  float fStack_a3c;
  float local_a30;
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined4 local_a18;
  uint local_a14;
  uint local_a10;
  undefined4 local_a0c;
  float local_a08;
  float fStack_a04;
  float fStack_a00;
  float fStack_9fc;
  undefined4 local_9f8;
  undefined4 local_9f4;
  undefined1 local_9f0;
  wchar_t *local_9e8;
  undefined2 local_9e0;
  ulonglong local_9d8;
  undefined8 uStack_9d0;
  undefined8 local_9c8;
  undefined8 uStack_9c0;
  undefined8 local_9b8;
  undefined8 uStack_9b0;
  undefined8 local_9a8;
  undefined8 uStack_9a0;
  undefined8 local_998;
  float fStack_990;
  float fStack_98c;
  float fStack_988;
  float fStack_984;
  float local_980;
  float local_97c;
  undefined4 uStack_978;
  undefined4 uStack_974;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 local_960;
  undefined8 local_958;
  undefined8 local_950;
  undefined8 local_948;
  undefined8 uStack_940;
  undefined4 local_938;
  undefined8 local_934;
  undefined4 local_92c;
  undefined4 uStack_928;
  undefined4 uStack_924;
  undefined8 uStack_920;
  undefined4 local_918;
  undefined4 local_914;
  longlong local_8a8;
  undefined8 local_898;
  longlong local_808;
  undefined8 local_7f8;
  undefined1 local_7c8;
  undefined4 local_7c4;
  ushort local_7b8;
  undefined1 local_7a8 [68];
  float local_764;
  float local_760;
  float local_75c;
  float local_718;
  float fStack_714;
  float fStack_710;
  float fStack_70c;
  float local_708;
  float fStack_704;
  float fStack_700;
  float fStack_6fc;
  float local_6f8;
  float fStack_6f4;
  float fStack_6f0;
  float fStack_6ec;
  float local_6e8;
  float fStack_6e4;
  float fStack_6e0;
  float fStack_6dc;
  longlong local_5e8;
  longlong local_548;
  longlong local_4c8;
  longlong local_428;
  longlong local_368;
  longlong local_2c8;
  longlong local_258;
  longlong local_210;
  longlong local_200;
  int local_1f8;
  undefined1 local_1f0 [8];
  longlong *local_1e8;
  ulonglong local_e8;
  
  uVar16 = _DAT_1464aa7d8;
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_bc8;
  uVar15 = 0;
  local_b48 = (WriteBytesMem *)((ulonglong)local_b48 & 0xffffffff00000000);
  *(undefined8 *)param_6 = _DAT_1464aa7d0;
  *(undefined8 *)(param_6 + 8) = uVar16;
  uVar16 = _DAT_1464aa7e8;
  *(undefined8 *)(param_6 + 0x10) = _DAT_1464aa7e0;
  *(undefined8 *)(param_6 + 0x18) = uVar16;
  *(undefined1 (*) [16])(param_6 + 0x20) = _DAT_1464aa7f0;
  fVar32 = _DAT_1464aa80c;
  fVar31 = fRam00000001464aa808;
  fVar17 = fRam00000001464aa804;
  *(float *)(param_6 + 0x30) = _DAT_1464aa800;
  *(float *)(param_6 + 0x34) = fVar17;
  *(float *)(param_6 + 0x38) = fVar31;
  *(float *)(param_6 + 0x3c) = fVar32;
  plVar13 = (longlong *)*param_7;
  local_b58[0] = param_6;
  local_ae8 = param_7;
  local_b08 = param_8;
  *param_7 = 0;
  local_b30 = param_4;
  if (plVar13 != (longlong *)0x0) {
    (**(code **)(*plVar13 + 0x30))(plVar13);
  }
  *param_8 = 1;
  lVar4 = *(longlong *)(param_1 + 8);
  uVar11 = uVar15;
  uVar14 = uVar15;
  if (0 < *(int *)(lVar4 + 0x10e0)) {
    do {
      lVar4 = *(longlong *)(uVar14 + *(longlong *)(lVar4 + 0x10d8));
      if ((((((*(byte *)(param_1 + 0x3c) & 4) != 0) &&
            (lVar5 = *(longlong *)(lVar4 + 0x30), *(char *)(lVar5 + 0x188) == '\0')) &&
           ((1e-05 <= *(float *)(lVar5 + 0x100) * *(float *)(lVar5 + 0x100) ||
            ((1e-05 <= *(float *)(lVar5 + 0x104) * *(float *)(lVar5 + 0x104) ||
             (1e-05 <= *(float *)(lVar5 + 0x108) * *(float *)(lVar5 + 0x108))))))) &&
          (((*(uint *)(lVar5 + 0x180) >> 2 & 1) == 0 ||
           (cVar2 = FUN_141ba17a0(lVar4), cVar2 == '\0')))) &&
         (cVar2 = FUN_141be7b80(lVar4,param_3), cVar2 != '\0')) {
        *local_b08 = (byte)(*(uint *)(*(longlong *)(lVar4 + 0x30) + 0x180) >> 9) & 1;
        cVar2 = FUN_141b57a40(param_1,lVar4);
        if (cVar2 != '\0') {
          FUN_141dbc980(local_7a8);
          plVar13 = *(longlong **)(lVar4 + 0x30);
          local_b28 = *(float *)(plVar13 + 6);
          local_b24 = *(float *)(plVar13 + 8);
          local_b20 = *(float *)(plVar13 + 10);
          local_af0 = 1.0;
          fVar17 = local_b24 * local_b24 + local_b28 * local_b28 + local_b20 * local_b20;
          if (fVar17 != 1.0) {
            if (1e-08 <= fVar17) {
              auVar26 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
              fVar31 = auVar26._0_4_;
              fVar31 = fVar31 + fVar31 * (0.5 - fVar17 * 0.5 * fVar31 * fVar31);
              fVar31 = fVar31 + fVar31 * (0.5 - fVar17 * 0.5 * fVar31 * fVar31);
              local_b24 = fVar31 * local_b24;
              local_b28 = local_b28 * fVar31;
              local_b20 = fVar31 * local_b20;
            }
            else {
              local_b24 = DAT_1468b5d94;
              local_b20 = DAT_1468b5d98;
              local_b28 = DAT_1468b5d90;
            }
          }
          local_914 = 0;
          local_7c4 = 0xffffffff;
          fVar17 = ABS(*(float *)(param_3 + 0x764) * local_b24 +
                       *(float *)(param_3 + 0x754) * local_b28 +
                       *(float *)(param_3 + 0x774) * local_b20) * (float)local_b30[1];
          fVar31 = ABS(*(float *)(param_3 + 0x768) * local_b24 +
                       *(float *)(param_3 + 0x758) * local_b28 +
                       *(float *)(param_3 + 0x778) * local_b20) * (float)local_b30[2];
          if (fVar17 <= fVar31) {
            fVar17 = fVar31;
          }
          uStack_928 = 0;
          uStack_924 = 0x4a000000;
          uStack_920 = 0;
          fVar31 = ABS(*(float *)(param_3 + 0x760) * local_b24 +
                       *(float *)(param_3 + 0x750) * local_b28 +
                       *(float *)(param_3 + 0x770) * local_b20) * (float)*local_b30;
          local_948 = 0;
          uStack_940 = 0x3f80000000000000;
          if (fVar17 <= fVar31) {
            fVar17 = fVar31;
          }
          local_918 = 0x4a000000;
          local_b48 = *(WriteBytesMem **)(param_3 + 0x8dc);
          local_b34 = 0;
          iVar3 = (int)(fVar17 * _DAT_1464c3704) + 0x1f;
          uVar10 = (iVar3 >> 0x1f & 0x1fU) + iVar3;
          local_b40 = *(undefined4 *)(param_3 + 0x8e4);
          local_b38 = uVar10 & 0xffffffe0;
          local_b98 = 0;
          local_8a8 = 0;
          local_898 = 0;
          local_808 = 0;
          local_7f8 = 0;
          local_7c8 = 0;
          local_7b8 = 0;
          local_ba0._0_4_ = (float)param_5;
          local_ba8._0_4_ = 0;
          local_b08 = (byte *)(CONCAT44(uVar10,uVar10) & 0xffffffe0ffffffe0);
          (**(code **)(*plVar13 + 0xd0))(plVar13,&local_b18,param_3,&local_b48);
          local_b48 = (WriteBytesMem *)CONCAT44(local_b48._4_4_,local_b0c);
          local_a30 = local_b0c * 0.57735026;
          local_b30 = (int *)CONCAT44(local_b30._4_4_,local_a30);
          local_af8 = local_b10 ^ 0x80000000;
          uStack_9d0 = (undefined8 *)(CONCAT44(uStack_9d0._4_4_,local_b10) ^ 0x80000000);
          local_9d8 = (ulonglong)local_b18 ^ 0x8000000080000000;
          FVector::Rotation(&local_b28,local_b00);
          uVar16 = __libm_sse2_sincosf_();
          fVar31 = (float)uVar16;
          local_ad8 = (float)((ulonglong)uVar16 >> 0x20);
          local_af4 = -fVar31;
          local_aa8 = 0.0;
          uStack_a9c = 0;
          fStack_a8c = 0.0;
          fStack_ad4 = fVar31;
          fStack_ad0 = fVar31;
          fStack_acc = fVar31;
          uVar16 = __libm_sse2_sincosf_();
          fVar32 = (float)uVar16;
          fVar36 = (float)((ulonglong)uVar16 >> 0x20);
          fVar29 = -fVar32;
          local_a28 = (ulonglong)(uint)local_a28;
          uStack_a20 = (ulonglong)(uint)uStack_a20;
          fStack_a04 = 0.0;
          fStack_9fc = 0.0;
          __libm_sse2_sincosf_();
          fVar17 = local_af0;
          fStack_a74 = -extraout_XMM0_Da;
          uStack_a70 = 0;
          local_a28 = CONCAT44(local_a28._4_4_,fVar36);
          uStack_a20 = CONCAT44(uStack_a20._4_4_,fVar29);
          fVar33 = fStack_a74 * 0.0 + extraout_XMM0_Db * fVar36 + fVar32 * 0.0 + 0.0;
          fVar34 = fStack_a74 * 1.0 + extraout_XMM0_Db * local_a28._4_4_ + fStack_a04 * 0.0 + 0.0;
          fVar35 = fStack_a74 * 0.0 + extraout_XMM0_Db * fVar29 + fVar36 * 0.0 + 0.0;
          fVar37 = fStack_a74 * 0.0 + extraout_XMM0_Db * uStack_a20._4_4_ + fStack_9fc * 0.0 + 0.0;
          uStack_a60 = 0;
          fVar22 = extraout_XMM0_Db * 0.0 + extraout_XMM0_Da * fVar36 + fVar32 * 0.0 + 0.0;
          fVar23 = extraout_XMM0_Db * 1.0 + extraout_XMM0_Da * local_a28._4_4_ + fStack_a04 * 0.0 +
                   0.0;
          fVar24 = extraout_XMM0_Db * 0.0 + extraout_XMM0_Da * fVar29 + fVar36 * 0.0 + 0.0;
          fVar25 = extraout_XMM0_Db * 0.0 + extraout_XMM0_Da * uStack_a20._4_4_ + fStack_9fc * 0.0 +
                   0.0;
          fVar18 = fVar36 * 0.0 + 0.0 + fVar32 * 1.0 + 0.0;
          fVar19 = local_a28._4_4_ * 0.0 + 0.0 + fStack_a04 * 1.0 + 0.0;
          fVar20 = fVar29 * 0.0 + 0.0 + fVar36 * 1.0 + 0.0;
          fVar21 = uStack_a20._4_4_ * 0.0 + 0.0 + fStack_9fc * 1.0 + 0.0;
          fVar27 = fVar36 * 0.0 + 0.0 + fVar32 * 0.0 + 0.0;
          fVar28 = local_a28._4_4_ * 0.0 + 0.0 + fStack_a04 * 0.0 + 0.0;
          fVar29 = fVar29 * 0.0 + 0.0 + fVar36 * 0.0 + 0.0;
          fVar30 = uStack_a20._4_4_ * 0.0 + 0.0 + fStack_9fc * 0.0 + 1.0;
          fStack_aa4 = local_ad8;
          fStack_a94 = local_af4;
          fStack_a90 = local_ad8;
          local_9c8 = CONCAT44(fVar34 * local_ad8 + fVar33 * 0.0 + fVar35 * local_af4 + fVar37 * 0.0
                               ,fVar34 * local_aa8 + fVar33 * 1.0 + fVar35 * uStack_a9c._4_4_ +
                                fVar37 * 0.0);
          uStack_9c0 = CONCAT44(fVar34 * (float)uStack_a9c + fVar33 * 0.0 + fVar35 * fStack_a8c +
                                fVar37 * 1.0,
                                fVar34 * fVar31 + fVar33 * 0.0 + fVar35 * local_ad8 + fVar37 * 0.0);
          local_9b8 = CONCAT44(fVar23 * local_ad8 + fVar22 * 0.0 + fVar24 * local_af4 + fVar25 * 0.0
                               ,fVar23 * local_aa8 + fVar22 * 1.0 + fVar24 * uStack_a9c._4_4_ +
                                fVar25 * 0.0);
          uStack_9b0 = CONCAT44(fVar23 * (float)uStack_a9c + fVar22 * 0.0 + fVar24 * fStack_a8c +
                                fVar25 * 1.0,
                                fVar23 * fVar31 + fVar22 * 0.0 + fVar24 * local_ad8 + fVar25 * 0.0);
          local_9a8 = CONCAT44(fVar19 * local_ad8 + fVar18 * 0.0 + fVar20 * local_af4 + fVar21 * 0.0
                               ,fVar19 * local_aa8 + fVar18 * 1.0 + fVar20 * uStack_a9c._4_4_ +
                                fVar21 * 0.0);
          uStack_9a0 = CONCAT44(fVar19 * (float)uStack_a9c + fVar18 * 0.0 + fVar20 * fStack_a8c +
                                fVar21 * 1.0,
                                fVar19 * fVar31 + fVar18 * 0.0 + fVar20 * local_ad8 + fVar21 * 0.0);
          fStack_984 = local_af0 / local_b0c;
          fStack_990 = fVar28 * fVar31 + fVar27 * 0.0 + fVar29 * local_ad8 + fVar30 * 0.0;
          fStack_98c = fVar28 * (float)uStack_a9c + fVar27 * 0.0 + fVar29 * fStack_a8c +
                       fVar30 * 1.0;
          fStack_988 = local_af0;
          uStack_970 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
          local_97c = local_af0;
          uStack_978 = local_b34;
          uStack_974 = 0;
          fStack_ad0 = DAT_1468b5d98;
          local_998 = CONCAT44(fVar28 * local_ad8 + fVar27 * 0.0 + fVar29 * local_af4 + fVar30 * 0.0
                               ,fVar28 * local_aa8 + fVar27 * 1.0 + fVar29 * uStack_a9c._4_4_ +
                                fVar30 * 0.0);
          fStack_ac4 = local_a30;
          fStack_acc = (float)local_b30._0_4_;
          uStack_ac8 = local_b30._0_4_;
          local_ac0 = (int)local_b48;
          uStack_968 = CONCAT44(local_b30._0_4_,DAT_1468b5d98);
          local_af8 = 0;
          local_960 = CONCAT44(local_a30,local_b30._0_4_);
          local_b90 = (float)((uint)local_b90 & 0xffffff00);
          local_948 = 0;
          uStack_940 = 0x3f80000000000000;
          local_b98 = local_b98 & 0xffffffff00000000;
          local_ba0 = CONCAT44(local_ba0._4_4_,uVar10) & 0xffffffffffffffe0;
          local_938 = 0xc9800000;
          local_934 = CONCAT44(local_934._4_4_,0x47000000);
          local_958 = CONCAT44(local_958._4_4_,(int)local_b48);
          local_7b8 = local_7b8 & 0xff;
          local_7c8 = 0;
          local_ba8 = (wchar_t *)(CONCAT44(local_ba8._4_4_,uVar10) & 0xffffffffffffffe0);
          fStack_aa0 = fVar31;
          local_a78 = extraout_XMM0_Db;
          local_a68 = extraout_XMM0_Da;
          fStack_a64 = extraout_XMM0_Db;
          local_a08 = fVar32;
          fStack_a00 = fVar36;
          local_980 = fStack_984;
          FUN_141de28f0(local_7a8,lVar4,param_3,&local_9d8);
          if (local_808 != 0) {
            FMemory::Free();
          }
          if (local_8a8 != 0) {
            FMemory::Free();
          }
          plVar13 = *(longlong **)(*(longlong *)(lVar4 + 0x30) + 0x170);
          if (plVar13 != (longlong *)0x0) {
            local_b48 = (WriteBytesMem *)0x0;
            (**(code **)(*plVar13 + 0x40))
                      (plVar13,*(undefined4 *)(*(longlong *)(param_1 + 8) + 8),&local_b30,&local_b48
                      );
            cVar2 = (**(code **)(*(longlong *)local_b48 + 0x98))();
            plVar12 = local_ae8;
            if (cVar2 != '\0') {
              local_a18 = DAT_146ab6938;
              local_a14 = local_b38;
              local_a10 = local_b38;
              local_a08 = 1.4013e-45;
              fStack_a00 = (float)CONCAT22(fStack_a00._2_2_,1);
              local_9e8 = L"UnknownTexture2D";
              local_a0c = 0;
              local_9f0 = 0;
              local_9f8 = DAT_146a9da7c;
              local_b98 = CONCAT71(local_b98._1_7_,1);
              local_ba0._0_1_ = 1;
              local_ba8 = L"VolumetricFogLightFunction";
              local_a28 = _DAT_146ab6928;
              uStack_a20 = uRam0000000146ab6930;
              fStack_a04 = 9.18355e-41;
              fStack_9fc = 4.2039e-45;
              local_9f4 = 9;
              local_9e0 = 1;
              FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_a28,local_ae8);
              local_a78 = local_708 * 0.0 + local_718 * 1.0 + local_6f8 * 0.0 + local_6e8 * 0.0;
              fStack_a74 = fStack_704 * 0.0 + fStack_714 * 1.0 + fStack_6f4 * 0.0 + fStack_6e4 * 0.0
              ;
              fVar36 = fStack_700 * 0.0 + fStack_710 * 1.0 + fStack_6f0 * 0.0 + fStack_6e0 * 0.0;
              fVar18 = fStack_6fc * 0.0 + fStack_70c * 1.0 + fStack_6ec * 0.0 + fStack_6dc * 0.0;
              uStack_a70 = CONCAT44(fVar18,fVar36);
              local_a68 = local_708 * 1.0 + local_718 * 0.0 + local_6f8 * 0.0 + local_6e8 * 0.0;
              fStack_a64 = fStack_704 * 1.0 + fStack_714 * 0.0 + fStack_6f4 * 0.0 + fStack_6e4 * 0.0
              ;
              fVar31 = fStack_700 * 1.0 + fStack_710 * 0.0 + fStack_6f0 * 0.0 + fStack_6e0 * 0.0;
              fVar32 = fStack_6fc * 1.0 + fStack_70c * 0.0 + fStack_6ec * 0.0 + fStack_6dc * 0.0;
              uStack_a60 = CONCAT44(fVar32,fVar31);
              *(float *)local_b58[0] = local_a78;
              *(float *)(local_b58[0] + 4) = fStack_a74;
              *(float *)(local_b58[0] + 8) = fVar36;
              *(float *)(local_b58[0] + 0xc) = fVar18;
              *(float *)(local_b58[0] + 0x10) = local_a68;
              *(float *)(local_b58[0] + 0x14) = fStack_a64;
              *(float *)(local_b58[0] + 0x18) = fVar31;
              *(float *)(local_b58[0] + 0x1c) = fVar32;
              local_a88 = local_764;
              fStack_a84 = local_760;
              fStack_a80 = local_75c;
              uStack_a7c = 0x3f800000;
              local_b48 = (WriteBytesMem *)0x0;
              local_a58 = local_708 * 0.0 + local_718 * 0.0 + local_6f8 * 1.0 + local_6e8 * 0.0;
              fStack_a54 = fStack_704 * 0.0 + fStack_714 * 0.0 + fStack_6f4 * 1.0 + fStack_6e4 * 0.0
              ;
              fStack_a50 = fStack_700 * 0.0 + fStack_710 * 0.0 + fStack_6f0 * 1.0 + fStack_6e0 * 0.0
              ;
              fStack_a4c = fStack_6fc * 0.0 + fStack_70c * 0.0 + fStack_6ec * 1.0 + fStack_6dc * 0.0
              ;
              *(float *)(local_b58[0] + 0x20) = local_a58;
              *(float *)(local_b58[0] + 0x24) = fStack_a54;
              *(float *)(local_b58[0] + 0x28) = fStack_a50;
              *(float *)(local_b58[0] + 0x2c) = fStack_a4c;
              local_a48 = local_760 * local_708 + local_764 * local_718 + local_75c * local_6f8 +
                          local_6e8 * 1.0;
              fStack_a44 = local_760 * fStack_704 + local_764 * fStack_714 + local_75c * fStack_6f4
                           + fStack_6e4 * 1.0;
              fStack_a40 = local_760 * fStack_700 + local_764 * fStack_710 + local_75c * fStack_6f0
                           + fStack_6e0 * 1.0;
              fStack_a3c = local_760 * fStack_6fc + local_764 * fStack_70c + local_75c * fStack_6ec
                           + fStack_6dc * 1.0;
              *(float *)(local_b58[0] + 0x30) = local_a48;
              *(float *)(local_b58[0] + 0x34) = fStack_a44;
              *(float *)(local_b58[0] + 0x38) = fStack_a40;
              *(float *)(local_b58[0] + 0x3c) = fStack_a3c;
              (**(code **)(*plVar13 + 0x40))
                        (plVar13,*(undefined4 *)(*(longlong *)(param_1 + 8) + 8),&local_b30,
                         &local_b48);
              local_ba0 = CONCAT71(local_ba0._1_7_,1);
              local_b58[0] = local_b48;
              local_ba8 = (wchar_t *)((ulonglong)local_ba8 & 0xffffffff00000000);
              FUN_141ad74f0(param_2,*(undefined8 *)(*plVar12 + 8),0,0);
              puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar6 = puVar7 + 5;
              if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
                FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
                puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar6 = puVar7 + 5;
              }
              *(undefined8 **)(param_2 + 0x30) = puVar6;
              *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
              **(undefined8 **)(param_2 + 8) = puVar7;
              *(undefined8 **)(param_2 + 8) = puVar7 + 1;
              puVar7[1] = 0;
              *puVar7 = &PTR_LAB_143f59420;
              *(uint *)((longlong)puVar7 + 0x1c) = local_b38;
              *(uint *)(puVar7 + 4) = local_b38;
              puVar7[2] = 0;
              *(undefined4 *)(puVar7 + 3) = 0;
              *(undefined4 *)((longlong)puVar7 + 0x24) = 0x3f800000;
              local_9d8 = 0;
              uStack_9d0 = (undefined8 *)0x0;
              local_9c8 = 0;
              uStack_9c0 = 0;
              local_9b8 = 0;
              uStack_9b0 = 0;
              local_9a8 = 0;
              uStack_9a0 = 0;
              local_998 = 0;
              fStack_990 = 0.0;
              fStack_98c = 5.32493e-44;
              fStack_988 = 0.0;
              fStack_984 = 0.0;
              local_980 = 0.0;
              local_97c = 0.0;
              uStack_978 = 0;
              uStack_974 = 0;
              uStack_970 = 0;
              uStack_968 = 0;
              local_960 = 0;
              local_958 = 0;
              local_950 = 0;
              local_948 = 0;
              uStack_940 = 0;
              local_938 = 0;
              local_934 = 0;
              local_92c = 0;
              uStack_928 = 0;
              uStack_924 = 0;
              FUN_14049afe0(param_2,&local_9d8);
              uStack_9a0 = FUN_140985530();
              local_9a8 = FUN_1404a0ce0();
              local_998 = FUN_1409853f0();
              fStack_98c = 0.0;
              local_b30 = (int *)AK::WriteBytesMem::Bytes(local_b58[0]);
              local_b10 = 0;
              lVar5 = *(longlong *)(param_3 + 0x3090);
              local_b18 = &DAT_146a51f90;
              TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
              ::FindId(lVar5 + 0x38,&local_b48,&local_b18);
              if ((int)local_b48 == -1) {
                lVar5 = 0;
              }
              else {
                lVar5 = (longlong)(int)local_b48 * 0x20 + *(longlong *)(lVar5 + 0x38);
              }
              local_b10 = 0;
              plVar12 = (longlong *)(lVar5 + 0x10);
              if (lVar5 == 0) {
                plVar12 = (longlong *)0x0;
              }
              local_b18 = &DAT_146aaa8b0;
              lVar5 = *plVar12;
              TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
              ::FindId(local_b30 + 0xe,&local_b48,&local_b18);
              if ((int)local_b48 == -1) {
                lVar8 = 0;
              }
              else {
                lVar8 = (longlong)(int)local_b48 * 0x20 + *(longlong *)(local_b30 + 0xe);
              }
              puVar6 = (undefined8 *)0x0;
              puVar7 = (undefined8 *)(lVar8 + 0x10);
              if (lVar8 == 0) {
                puVar7 = puVar6;
              }
              local_b48 = (WriteBytesMem *)*puVar7;
              local_9d8 = DAT_1464c2720;
              if (lVar5 == 0) {
                local_b58[0] = (WriteBytesMem *)0x0;
                uVar15 = 1;
              }
              else {
                local_b58[0] = *(WriteBytesMem **)(lVar5 + 0x48);
                if (local_b58[0][0x28] == (WriteBytesMem)0x0) {
                  FUN_1419f3850(local_b58[0]);
                }
                puVar6 = *(undefined8 **)(local_b58[0] + 0x38);
              }
              uStack_9d0 = puVar6;
              if (uVar15 != 0) {
                TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>();
              }
              bVar1 = false;
              if (local_b48 == (WriteBytesMem *)0x0) {
                bVar1 = true;
                local_9b8 = 0;
                local_b58[0] = (WriteBytesMem *)0x0;
              }
              else {
                local_b58[0] = *(WriteBytesMem **)(local_b48 + 0x48);
                if (local_b58[0][0x28] == (WriteBytesMem)0x0) {
                  FUN_1419f3850(local_b58[0]);
                }
                local_9b8 = *(undefined8 *)(local_b58[0] + 0x40);
              }
              if (bVar1) {
                TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_b58);
              }
              FUN_141ed6ac0(param_2,&local_9d8,2,1);
              lVar8 = *(longlong *)(lVar5 + 0x48);
              local_b58[0] = *(WriteBytesMem **)(param_3 + 0x20);
              if (*(char *)(lVar8 + 0x28) == '\0') {
                FUN_1419f3850(lVar8);
              }
              FUN_141aa9800(lVar5,param_2,*(undefined8 *)(lVar8 + 0x38),local_b58[0]);
              fVar32 = (float)(int)local_b38;
              fVar31 = (float)(int)local_b38;
              local_b98 = FMatrix::Inverse(&local_a78,local_ab8);
              local_ba8 = (wchar_t *)plVar13;
              local_ba0._0_4_ = fVar17 / fVar32;
              local_ba0._4_4_ = fVar17 / fVar31;
              FUN_141e097e0(local_b48,param_2,param_3,lVar4);
              local_b60 = 1;
              local_b68 = 0;
              local_b78 = (ulonglong)local_b08;
              local_b80 = (ulonglong)local_b08;
              local_b98 = CONCAT44(local_b98._4_4_,local_b34);
              local_ba0 = CONCAT44(local_ba0._4_4_,local_b34);
              local_ba8 = (wchar_t *)CONCAT44(local_ba8._4_4_,fVar31);
              local_b90 = fVar32;
              local_b88 = fVar31;
              local_b70 = lVar5;
              DrawRectangle(param_2,local_b34,local_b34,fVar32);
              puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              local_b58[0] = *(WriteBytesMem **)(*local_ae8 + 8);
              puVar6 = puVar7 + 1;
              if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
                FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
                puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar6 = puVar7 + 1;
              }
              *(undefined8 **)(param_2 + 0x30) = puVar6;
              *puVar7 = local_b58[0];
              puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar6 = puVar9 + 5;
              if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
                FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
                puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar6 = puVar9 + 5;
              }
              *(undefined8 **)(param_2 + 0x30) = puVar6;
              *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
              **(undefined8 **)(param_2 + 8) = puVar9;
              *(undefined8 **)(param_2 + 8) = puVar9 + 1;
              puVar9[1] = 0;
              *puVar9 = &PTR_LAB_143f59470;
              *(undefined4 *)(puVar9 + 2) = 1;
              puVar9[3] = puVar7;
              *(undefined4 *)(puVar9 + 4) = 0;
              *(undefined1 *)((longlong)puVar9 + 0x24) = 0;
              AK::MemoryMgr::StartProfileThreadUsage(0x464c2590);
            }
          }
          if (local_1e8 != (longlong *)0x0) {
            (**(code **)(*local_1e8 + 0x30))();
          }
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_1f0);
          if (local_1f8 != 0) {
            plVar13 = (longlong *)(local_200 + 0x60);
            iVar3 = local_1f8;
            do {
              if (plVar13[0x14] != 0) {
                FMemory::Free();
              }
              if (*plVar13 != 0) {
                FMemory::Free();
              }
              plVar13 = plVar13 + 0x24;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          if (local_200 != 0) {
            FMemory::Free();
          }
          if (local_210 != 0) {
            FMemory::Free();
          }
          if (local_258 != 0) {
            FMemory::Free();
          }
          if (local_2c8 != 0) {
            FMemory::Free();
          }
          if (local_368 != 0) {
            FMemory::Free();
          }
          if (local_428 != 0) {
            FMemory::Free();
          }
          if (local_4c8 != 0) {
            FMemory::Free();
          }
          if (local_548 != 0) {
            FMemory::Free();
          }
          if (local_5e8 == 0) {
            return;
          }
          FMemory::Free();
          return;
        }
      }
      lVar4 = *(longlong *)(param_1 + 8);
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
      uVar14 = uVar14 + 8;
    } while ((int)uVar10 < *(int *)(lVar4 + 0x10e0));
  }
  return;
}



// FUNCTION 141e04e50 FUN_141e04e50 body=2473 status=ok
// SIG undefined FUN_141e04e50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e04e50(longlong param_1,longlong param_2,longlong param_3,char param_4,
                  undefined8 param_5,longlong param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 param_9,longlong *param_10)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_478 [32];
  wchar_t *local_458;
  longlong local_450;
  longlong local_448;
  undefined8 *local_440;
  int local_438;
  int local_428;
  longlong local_420;
  char local_418;
  longlong local_410;
  undefined8 local_408;
  longlong local_400;
  undefined8 local_3f8;
  int local_3f0;
  undefined8 local_3e8;
  longlong local_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  longlong local_3a0;
  longlong local_398;
  longlong *local_390;
  undefined8 local_388;
  undefined4 local_380;
  undefined8 local_378;
  undefined4 local_370;
  undefined8 local_368;
  undefined4 local_360;
  undefined8 local_358;
  undefined4 local_350;
  undefined8 local_348;
  undefined4 local_340;
  undefined8 local_338;
  undefined4 local_330;
  undefined8 local_328;
  undefined4 local_320;
  undefined8 local_318;
  undefined4 local_310;
  undefined8 local_308;
  undefined4 local_300;
  undefined1 local_2f8 [192];
  undefined4 local_238;
  undefined1 local_168 [256];
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_478;
  iVar18 = 0;
  local_3f8 = param_5;
  iVar17 = 0;
  local_400 = param_6;
  local_3a8 = param_9;
  lVar9 = *(longlong *)(param_1 + 8);
  local_390 = param_10;
  iVar14 = 0;
  local_3e8 = param_7;
  local_3a0 = 0;
  local_410 = 0;
  local_428 = 0;
  local_408._4_4_ = 0;
  if (0 < *(int *)(lVar9 + 0x10f0)) {
    lVar16 = 0;
    local_420 = param_3;
    local_418 = param_4;
    local_3e0 = param_2;
    local_398 = param_1;
    do {
      lVar11 = local_398;
      lVar9 = *(longlong *)(lVar16 + *(longlong *)(lVar9 + 0x10e8));
      lVar7 = *(longlong *)(lVar9 + 0x30);
      if (((((1e-05 <= *(float *)(lVar7 + 0x100) * *(float *)(lVar7 + 0x100)) ||
            (1e-05 <= *(float *)(lVar7 + 0x104) * *(float *)(lVar7 + 0x104))) ||
           (1e-05 <= *(float *)(lVar7 + 0x108) * *(float *)(lVar7 + 0x108))) &&
          (((*(uint *)(lVar7 + 0x180) >> 2 & 1) == 0 ||
           (cVar6 = FUN_141ba17a0(lVar9), cVar6 == '\0')))) &&
         (cVar6 = FUN_141be7b80(lVar9,param_3), cVar6 != '\0')) {
        iVar2 = *(int *)(lVar9 + 0x58);
        lVar7 = *(longlong *)(lVar9 + 0x30);
        lVar11 = *(longlong *)(lVar11 + 0x1c8);
        param_3 = local_420;
        iVar18 = local_428;
        if (((DAT_1464c36cc != 0) && ((byte)(*(char *)(lVar7 + 0x188) - 1U) < 2)) &&
           (((*(uint *)(lVar7 + 0x180) >> 2 & 1) == 0 &&
            ((*(uint *)(lVar7 + 0x180) & 0x210) == 0x210)))) {
          lVar15 = *(longlong *)(lVar7 + 0x150);
          cVar6 = FUN_141ba17a0(lVar9);
          if ((((cVar6 == '\0') || (lVar15 == 0)) || (*(longlong *)(lVar15 + 0x68) == 0)) ||
             (*(longlong *)(lVar15 + 0x30) == 0)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          lVar7 = GetShadowForInjectionIntoVolumetricFog(lVar7,(longlong)iVar2 * 0x70 + lVar11);
          param_3 = local_420;
          iVar18 = local_428;
          if (((lVar7 != 0) || (bVar5)) &&
             (plVar12 = *(longlong **)(lVar9 + 0x30), 0.0 < *(float *)((longlong)plVar12 + 0x114)))
          {
            (**(code **)(*plVar12 + 0x10))(plVar12,&local_3d8);
            iVar2 = local_428;
            fVar22 = *(float *)(local_420 + 0x8e0) - local_3d8._4_4_;
            fVar21 = *(float *)(local_420 + 0x8dc) - (float)local_3d8;
            fVar19 = *(float *)(local_420 + 0x8e4) - (float)uStack_3d0;
            fVar20 = uStack_3d0._4_4_ + *(float *)(local_400 + 0x90);
            param_3 = local_420;
            iVar18 = local_428;
            if (fVar22 * fVar22 + fVar21 * fVar21 + fVar19 * fVar19 < fVar20 * fVar20) {
              lVar7 = (longlong)local_428;
              iVar18 = local_428 + 1;
              local_428 = iVar18;
              local_408._0_4_ = iVar18;
              if (iVar14 < iVar18) {
                FUN_140822430(&local_410,iVar2);
                local_428 = (int)local_408;
                *(longlong *)(local_410 + lVar7 * 8) = lVar9;
                local_3a0 = local_410;
                param_3 = local_420;
                iVar18 = (int)local_408;
                iVar14 = local_408._4_4_;
              }
              else {
                *(longlong *)(local_3a0 + lVar7 * 8) = lVar9;
              }
            }
          }
        }
      }
      plVar12 = local_390;
      lVar11 = local_398;
      lVar7 = local_3e0;
      puVar8 = local_3e8;
      iVar17 = iVar17 + 1;
      lVar16 = lVar16 + 8;
      lVar9 = *(longlong *)(local_398 + 8);
    } while (iVar17 < *(int *)(lVar9 + 0x10f0));
    if (0 < iVar18) {
      local_448 = CONCAT71(local_448._1_7_,1);
      local_450 = CONCAT71(local_450._1_7_,1);
      local_458 = L"LocalShadowedLightScattering";
      FUN_141ce20b0(&PTR_PTR_1464c2560,local_3e0,local_3a8,local_390);
      uStack_3d0 = 0xffffffff00000000;
      local_3c8 = CONCAT62(local_3c8._2_6_,0x102);
      local_3d8 = *(undefined8 *)(*plVar12 + 8);
      local_410 = 0;
      local_408 = 0;
      FUN_140c63b80(local_2f8,1,&local_3d8,&local_410);
      FRHICommandListBase::CacheActiveRenderTargets(lVar7,local_238,local_2f8,local_168);
      puVar10 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar10 + 0x54;
      if (*(undefined8 **)(lVar7 + 0x38) < puVar13) {
        FMemStackBase::AllocateNewChunk(lVar7 + 0x30,0x2a8);
        puVar10 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar13 = puVar10 + 0x54;
      }
      *(undefined8 **)(lVar7 + 0x30) = puVar13;
      *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
      **(undefined8 **)(lVar7 + 8) = puVar10;
      *(undefined8 **)(lVar7 + 8) = puVar10 + 1;
      puVar10[1] = 0;
      *puVar10 = &PTR_FUN_1444d5488;
      FUN_140c63680(puVar10 + 2,local_2f8);
      local_3f0 = 0;
      if (0 < iVar18) {
        local_3e0 = 0;
        do {
          lVar15 = 0;
          lVar9 = *(longlong *)(local_3a0 + local_3e0);
          lVar11 = (longlong)*(int *)(lVar9 + 0x58) * 0x70 + *(longlong *)(lVar11 + 0x1c8);
          iVar18 = *(int *)(lVar11 + 0x28);
          lVar16 = lVar15;
          if (0 < iVar18) {
            plVar12 = *(longlong **)(lVar11 + 0x20);
            lVar11 = lVar15;
            do {
              uVar3 = *(uint *)(*plVar12 + 0x560);
              if ((((byte)uVar3 & 0x41) == 0x41) && (lVar16 = *plVar12, (uVar3 >> 9 & 1) == 0))
              break;
              lVar11 = lVar11 + 1;
              plVar12 = plVar12 + 1;
              lVar16 = lVar15;
            } while (lVar11 < iVar18);
          }
          cVar6 = (**(code **)(**(longlong **)(lVar9 + 0x30) + 0x30))();
          (**(code **)(**(longlong **)(lVar9 + 0x30) + 0x10))
                    (*(longlong **)(lVar9 + 0x30),&local_410);
          local_380 = *(undefined4 *)(param_8 + 1);
          local_388 = *param_8;
          local_458 = (wchar_t *)&local_388;
          local_370 = *(undefined4 *)(puVar8 + 1);
          local_378 = *puVar8;
          FUN_141dfa230(&local_3e8,&local_410,local_420,&local_378);
          local_3a8 = CONCAT44(local_3a8._4_4_,local_3e8._4_4_);
          iVar18 = (int)local_3e8;
          if (iVar18 < local_3e8._4_4_) {
            uVar1 = *puVar8;
            uVar4 = *(undefined4 *)(puVar8 + 1);
            local_448 = lVar16;
            local_438 = iVar18;
            if (local_418 == '\0') {
              if (lVar16 == 0) {
                if (cVar6 == '\0') {
                  uStack_3d0 = CONCAT44(uStack_3d0._4_4_,uVar4);
                  local_440 = &local_3d8;
                  local_448 = 0;
                  local_450 = local_400;
                  local_458 = (wchar_t *)&local_410;
                  local_3d8 = uVar1;
                  FUN_141df5150(lVar7,local_420,local_3f8,lVar9);
                }
                else {
                  local_440 = &local_308;
                  local_448 = 0;
                  local_450 = local_400;
                  local_458 = (wchar_t *)&local_410;
                  local_308 = uVar1;
                  local_300 = uVar4;
                  FUN_141df4750();
                }
              }
              else if (cVar6 == '\0') {
                local_440 = &local_318;
                local_450 = local_400;
                local_458 = (wchar_t *)&local_410;
                local_318 = uVar1;
                local_310 = uVar4;
                FUN_141df3d50();
              }
              else {
                local_440 = &local_328;
                local_450 = local_400;
                local_458 = (wchar_t *)&local_410;
                local_328 = uVar1;
                local_320 = uVar4;
                FUN_141df3350();
              }
            }
            else if (lVar16 == 0) {
              if (cVar6 == '\0') {
                local_440 = &local_338;
                local_448 = 0;
                local_450 = local_400;
                local_458 = (wchar_t *)&local_410;
                local_338 = uVar1;
                local_330 = uVar4;
                FUN_141df4c50();
              }
              else {
                local_440 = &local_348;
                local_448 = 0;
                local_450 = local_400;
                local_458 = (wchar_t *)&local_410;
                local_348 = uVar1;
                local_340 = uVar4;
                FUN_141df4250();
              }
            }
            else if (cVar6 == '\0') {
              local_440 = &local_358;
              local_450 = local_400;
              local_458 = (wchar_t *)&local_410;
              local_358 = uVar1;
              local_350 = uVar4;
              FUN_141df3850();
            }
            else {
              local_440 = &local_368;
              local_450 = local_400;
              local_458 = (wchar_t *)&local_410;
              local_368 = uVar1;
              local_360 = uVar4;
              FUN_141df2e50();
            }
            uVar1 = DAT_1464c3748;
            puVar10 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar13 = puVar10 + 5;
            if (*(undefined8 **)(lVar7 + 0x38) < puVar13) {
              FMemStackBase::AllocateNewChunk(lVar7 + 0x30,0x30);
              puVar10 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar13 = puVar10 + 5;
            }
            *(undefined8 **)(lVar7 + 0x30) = puVar13;
            iVar18 = (int)local_3a8 - iVar18;
            *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
            **(undefined8 **)(lVar7 + 8) = puVar10;
            *(undefined8 **)(lVar7 + 8) = puVar10 + 1;
            puVar10[1] = 0;
            *puVar10 = &PTR_LAB_143f489e0;
            *(undefined4 *)(puVar10 + 2) = 0;
            puVar10[3] = uVar1;
            *(undefined4 *)(puVar10 + 4) = 0;
            lVar9 = DAT_1464c37c0;
            iVar17 = DAT_1464c36f4;
            iVar14 = DAT_1464c36f4 + -2;
            if (DAT_1464c37c0 == 0) {
              LowLevelFatalErrorHandler
                        ("Unknown",0x8d8,
                         L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
              FDebug::AssertFailed
                        (&DAT_143f3f584,"Unknown",0x8d8,
                         L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
            }
            puVar10 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar13 = puVar10 + 7;
            if (*(undefined8 **)(lVar7 + 0x38) < puVar13) {
              FMemStackBase::AllocateNewChunk(lVar7 + 0x30,0x40);
              puVar10 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar13 = puVar10 + 7;
            }
            *(undefined8 **)(lVar7 + 0x30) = puVar13;
            *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
            **(undefined8 **)(lVar7 + 8) = puVar10;
            *(undefined8 **)(lVar7 + 8) = puVar10 + 1;
            puVar10[1] = 0;
            *puVar10 = &PTR_LAB_143f489d0;
            puVar10[2] = lVar9;
            puVar10[3] = 0;
            *(undefined4 *)(puVar10 + 4) = 0;
            *(int *)((longlong)puVar10 + 0x24) = iVar17;
            *(undefined4 *)(puVar10 + 5) = 0;
            *(int *)((longlong)puVar10 + 0x2c) = iVar14;
            *(int *)(puVar10 + 6) = iVar18;
          }
          local_3f0 = local_3f0 + 1;
          local_3e0 = local_3e0 + 8;
          lVar11 = local_398;
          plVar12 = local_390;
        } while (local_3f0 < local_428);
      }
      local_3d8 = 0xffffffff00000000;
      uStack_3d0 = 0xffffffffffffffff;
      puVar13 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
      local_3c8 = 0xffffffffffffffff;
      uStack_3c0 = 0xffffffffffffffff;
      local_3b8 = 0xffffffff;
      uStack_3b0 = 0;
      uVar1 = *(undefined8 *)(*plVar12 + 0x10);
      plVar12 = *(longlong **)(*plVar12 + 8);
      puVar8 = puVar13 + 10;
      if (*(undefined8 **)(lVar7 + 0x38) < puVar8) {
        FMemStackBase::AllocateNewChunk(lVar7 + 0x30,0x58);
        puVar13 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar13 + 10;
      }
      *(undefined8 **)(lVar7 + 0x30) = puVar8;
      *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
      **(undefined8 **)(lVar7 + 8) = puVar13;
      *(undefined8 **)(lVar7 + 8) = puVar13 + 1;
      puVar13[1] = 0;
      *puVar13 = &PTR_LAB_143f489f0;
      *(float *)(puVar13 + 2) = (float)local_3d8;
      *(float *)((longlong)puVar13 + 0x14) = local_3d8._4_4_;
      *(float *)(puVar13 + 3) = (float)uStack_3d0;
      *(float *)((longlong)puVar13 + 0x1c) = uStack_3d0._4_4_;
      *(undefined4 *)(puVar13 + 4) = (undefined4)local_3c8;
      *(undefined4 *)((longlong)puVar13 + 0x24) = local_3c8._4_4_;
      *(undefined4 *)(puVar13 + 5) = (undefined4)uStack_3c0;
      *(undefined4 *)((longlong)puVar13 + 0x2c) = uStack_3c0._4_4_;
      *(undefined4 *)(puVar13 + 6) = (undefined4)local_3b8;
      *(undefined4 *)((longlong)puVar13 + 0x34) = local_3b8._4_4_;
      *(undefined4 *)(puVar13 + 7) = (undefined4)uStack_3b0;
      *(undefined4 *)((longlong)puVar13 + 0x3c) = uStack_3b0._4_4_;
      puVar13[8] = plVar12;
      puVar13[9] = uVar1;
      lVar9 = (**(code **)(*plVar12 + 8))(plVar12);
      if ((lVar9 == 0) && (lVar9 = (**(code **)(*(longlong *)puVar13[8] + 0x18))(), lVar9 == 0)) {
        (**(code **)(*(longlong *)puVar13[8] + 0x20))();
      }
      lVar9 = (**(code **)(*(longlong *)puVar13[9] + 8))();
      if ((lVar9 == 0) && (lVar9 = (**(code **)(*(longlong *)puVar13[9] + 0x18))(), lVar9 == 0)) {
        (**(code **)(*(longlong *)puVar13[9] + 0x20))();
      }
      AK::MemoryMgr::StartProfileThreadUsage(0x464c2590);
      FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_2f8);
    }
  }
  return;
}



// FUNCTION 141e05810 FUN_141e05810 body=920 status=ok
// SIG undefined FUN_141e05810(void)

void FUN_141e05810(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
                  longlong param_5,longlong *param_6,undefined8 param_7,uint param_8,byte param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  bool bVar17;
  ulonglong in_stack_ffffffffffffff18;
  ulonglong in_stack_ffffffffffffff28;
  undefined8 local_b8;
  uint uStack_b0;
  uint uStack_ac;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  ulonglong uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_48;
  ulonglong uStack_40;
  
  uVar14 = uStack_ac;
  uVar7 = param_7;
  plVar6 = param_6;
  uVar1 = *(undefined4 *)(param_3 + 0x1a38);
  if (*(char *)(param_3 + 0x1202) != '\0') {
    if ((*(uint *)(param_5 + 0x100) & 1) != 0) goto LAB_141e05873;
    if ((*(uint *)(param_5 + 0x100) & 2) != 0) {
      return;
    }
  }
  if ((*(uint *)((longlong)param_6 + 4) >> 10 & 1) == 0) {
    return;
  }
LAB_141e05873:
  iVar11 = *(int *)(param_5 + 0xe8);
  local_b8 = param_7;
  lVar15 = *(longlong *)((ulonglong)param_9 * 0x20 + 0x2290 + param_3);
  uStack_b0 = param_8;
  uStack_ac = uStack_ac & 0xffffff00;
  iVar12 = 0;
  if (iVar11 != 0) {
    iVar12 = *(int *)(lVar15 + -4 + (longlong)iVar11 * 4);
  }
  iVar11 = *(int *)(lVar15 + (longlong)iVar11 * 4);
  uVar5 = CONCAT44(uVar14,param_8) & 0xffffff00ffffffff;
  if (iVar12 < iVar11) {
    uVar16 = (ulonglong)(uint)(iVar11 - iVar12);
    lVar15 = (longlong)iVar12 * 0x18;
    if (param_9 == 0) {
      do {
        local_98 = uVar7;
        lVar3 = *(longlong *)(lVar15 + *(longlong *)(param_3 + 0x2280));
        in_stack_ffffffffffffff28 = *(ulonglong *)(lVar15 + 8 + *(longlong *)(param_3 + 0x2280));
        in_stack_ffffffffffffff18 = in_stack_ffffffffffffff18 & 0xffffffffffffff00;
        uStack_90 = uVar5;
        FUN_141dfe900(param_2,param_3,&local_98,lVar3,in_stack_ffffffffffffff18,param_4,
                      in_stack_ffffffffffffff28,*(undefined4 *)(lVar3 + 0xb0));
        lVar15 = lVar15 + 0x18;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    else {
      do {
        local_98 = uVar7;
        lVar3 = *(longlong *)(lVar15 + *(longlong *)(param_3 + 0x22a0));
        in_stack_ffffffffffffff28 = *(ulonglong *)(lVar15 + 8 + *(longlong *)(param_3 + 0x22a0));
        in_stack_ffffffffffffff18 = in_stack_ffffffffffffff18 & 0xffffffffffffff00;
        uStack_90 = uVar5;
        FUN_141dfe900(param_2,param_3,&local_98,lVar3,in_stack_ffffffffffffff18,param_4,
                      in_stack_ffffffffffffff28,*(undefined4 *)(lVar3 + 0xb0));
        lVar15 = lVar15 + 0x18;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  if (((*plVar6 & 0x10000000000) != 0) &&
     (local_a0 = (longlong)*(int *)(param_5 + 0x38), 0 < local_a0)) {
    lVar15 = 0;
    uVar14 = param_8;
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_5 + 0x30) + lVar15 * 8);
      uVar10 = *(uint *)(lVar3 + 200);
      lVar13 = *(longlong *)(param_3 + 0x1b50);
      if (*(longlong *)(param_3 + 0x1b50) == 0) {
        lVar13 = param_3 + 0x1b40;
      }
      uVar9 = uVar10;
      if ((int)uVar10 < 0) {
        uVar9 = uVar10 + 0x1f;
      }
      if ((*(uint *)(lVar13 + (longlong)((int)uVar9 >> 5) * 4) >> (uVar10 & 0x1f) & 1) != 0) {
        FSceneRenderTargets::Get(param_2);
        param_6 = (longlong *)0x0;
        (**(code **)(**(longlong **)(lVar3 + 0xa8) + 0x40))
                  (*(longlong **)(lVar3 + 0xa8),uVar1,&local_b8,&param_6);
        plVar6 = param_6;
        if (((param_6 != (longlong *)0x0) &&
            (uVar10 = (**(code **)(*param_6 + 0x1e8))(param_6), 1 < uVar10)) &&
           (iVar11 = (**(code **)(*plVar6 + 0x20))(plVar6), iVar11 != 3)) {
          bVar17 = uVar14 == 3;
          cVar8 = (**(code **)(*plVar6 + 600))(plVar6);
          if ((param_8 == 2) || (uVar14 = param_8, param_8 == (cVar8 != '\0') || bVar17)) {
            if ((*(uint *)(lVar3 + 0x8c) & 0x2000000) == 0) {
              local_a8 = (1L << ((byte)*(undefined4 *)(lVar3 + 0x80) & 0x3f)) + -1;
            }
            else {
              local_a8 = *(longlong *)
                          (*(longlong *)(param_3 + 0x1c50) + (longlong)*(int *)(lVar3 + 0xcc) * 8);
            }
            local_88 = *param_4;
            uVar2 = *(undefined4 *)(lVar3 + 0xb0);
            local_80 = param_4[1];
            uVar4 = *(undefined8 *)(param_5 + 8);
            local_78 = *(undefined4 *)(param_4 + 2);
            local_70 = param_4[3];
            if (local_70 != 0) {
              LOCK();
              *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
              UNLOCK();
            }
            local_68 = param_4[4];
            local_58 = *(undefined4 *)(param_4 + 6);
            local_60 = *(undefined4 *)(param_4 + 5);
            local_5c = *(undefined4 *)((longlong)param_4 + 0x2c);
            local_54 = 0;
            FUN_141b36960(&local_88,param_3,lVar3,0);
            in_stack_ffffffffffffff28 = in_stack_ffffffffffffff28 & 0xffffffffffffff00;
            local_48 = uVar7;
            uStack_40 = uVar5;
            FUN_141dfed70(param_2,param_3,&local_48,lVar3,&local_a8,&local_88,
                          in_stack_ffffffffffffff28,uVar4,uVar2);
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_70);
            uVar14 = param_8;
          }
        }
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 < local_a0);
  }
  return;
}



// FUNCTION 141e05bb0 FUN_141e05bb0 body=1894 status=ok
// SIG undefined FUN_141e05bb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_141e05bb0(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  float fVar10;
  undefined1 auStack_1088 [32];
  undefined8 *local_1068;
  ulonglong local_1060;
  char local_1058;
  undefined1 local_1057;
  undefined1 local_1056;
  longlong local_1050;
  undefined4 local_1048;
  undefined4 uStack_1044;
  longlong local_1040;
  undefined8 local_1038;
  undefined8 local_1030;
  longlong local_1028 [3];
  undefined4 local_1010;
  longlong local_1008;
  undefined8 local_1000;
  undefined8 local_ff8;
  undefined4 local_ff0;
  undefined1 local_fec;
  int local_fe8;
  int local_fe4;
  int local_fe0;
  int local_fdc;
  undefined8 local_fd8;
  longlong local_fd0;
  longlong local_fc8 [3];
  undefined1 local_fb0;
  undefined1 local_fa8 [3888];
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_1088;
  if ((param_3 == 3) || (param_3 == 0)) {
    lVar6 = *(longlong *)(param_1 + 0xc0);
    lVar7 = (longlong)*(int *)(param_1 + 200) * 0x30d0 + lVar6;
    for (; lVar6 != lVar7; lVar6 = lVar6 + 0x30d0) {
      if ((((((*(byte *)(lVar6 + 0x28cc) & 0x10) != 0) || (*(int *)(lVar6 + 0x2300) != 0)) ||
           (*(int *)(lVar6 + 0x2310) != 0)) ||
          ((*(int *)(lVar6 + 0x2350) != 0 || (*(int *)(lVar6 + 0x2428) != 0)))) ||
         ((*(int *)(lVar6 + 0x2340) != 0 || (0 < *(int *)(lVar6 + 0x2320))))) goto LAB_141e05cbf;
    }
  }
  if ((DAT_146a275c0 == 0) || (param_3 != 1)) {
    lVar6 = *(longlong *)(param_1 + 0xc0);
    lVar7 = (longlong)*(int *)(param_1 + 200) * 0x30d0 + lVar6;
    while( true ) {
      if (lVar6 == lVar7) {
        return;
      }
      if (0 < *(int *)(lVar6 + 0x1d70 + (longlong)param_3 * 4)) break;
      lVar6 = lVar6 + 0x30d0;
    }
  }
LAB_141e05cbf:
  local_1030 = 0;
  local_fc8[0] = 0;
  local_fc8[1] = 0;
  local_fd8 = param_4;
  FScopedGPUStatEvent::Begin(local_fc8,param_2,&DAT_146aa9558,&local_1030);
  lVar6 = FSceneRenderTargets::Get(param_2);
  cVar2 = FUN_141636a40();
  if ((cVar2 == '\0') ||
     (((DAT_1464c9c18 == '\0' && (DAT_146ab6383 != '\0')) || (*(int *)(DAT_146aa97b0 + 4) == 0)))) {
LAB_141e05d75:
    local_1058 = '\0';
  }
  else {
    local_1058 = '\x01';
    cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xf0))();
    if ((cVar2 != '\0') && (*(int *)(DAT_146a10108 + 4) == 0)) goto LAB_141e05d75;
    FUN_141cd9bc0(lVar6,param_2);
    if ((0 < *(int *)(DAT_146aa9798 + 4)) || (0 < *(int *)(DAT_146ab6d10 + 4))) {
      local_fb0 = 1;
      goto LAB_141e05d7c;
    }
  }
  local_fb0 = 0;
LAB_141e05d7c:
  local_fc8[2] = param_2;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar9 = 0;
  local_1057 = 1;
  local_1056 = 1;
  if (0 < *(int *)(param_1 + 200)) {
    local_1050 = 0;
    do {
      lVar7 = local_1050;
      lVar8 = *(longlong *)(param_1 + 0xc0) + local_1050;
      if (((*(byte *)(lVar8 + 0x28cc) & 8) == 0) && (*(char *)(lVar8 + 0x1a98) != '\0')) {
        if (*(char *)(lVar8 + 0x1209) == '\0') {
          if (*(char *)(lVar8 + 0x120b) != '\0') {
LAB_141e05e3e:
            if (((*(int *)(lVar8 + 0xf60) == 2) || (*(longlong *)(lVar8 + 0x10) == 0)) ||
               (*(int *)(*(longlong *)(lVar8 + 0x10) + 8) < 2)) goto LAB_141e06219;
          }
        }
        else if (*(int *)(lVar8 + 0xf60) == 2) {
          if (*(char *)(lVar8 + 0x120b) != '\0') goto LAB_141e05e3e;
          goto LAB_141e06219;
        }
        local_1068 = &local_1038;
        local_1060 = CONCAT44(local_1060._4_4_,iVar9);
        local_1038 = 0;
        FUN_141dfe0f0(param_2,lVar8,local_fd8,0xf);
        local_1010 = 0x11;
        local_1028[1] = 0;
        local_1028[2] = 0;
        local_1008 = *(longlong *)(lVar8 + 0x20);
        if (local_1008 != 0) {
          LOCK();
          *(int *)(local_1008 + 8) = *(int *)(local_1008 + 8) + 1;
          UNLOCK();
        }
        local_1000 = local_1038;
        local_ff0 = 0;
        local_fec = 0;
        local_ff8._4_4_ =
             (uint)(*(char *)(lVar8 + 0x1205) != '\0') |
             -(uint)(*(char *)(lVar8 + 0x11b4) != '\0') & 8;
        local_ff8._0_4_ = 0;
        if (param_3 == 1) {
          fVar10 = *(float *)(lVar6 + 0x390);
LAB_141e05f34:
          if (fVar10 < 1.0) {
            lVar7 = FSceneRenderTargets::Get(param_2);
            local_1048 = *(undefined4 *)(lVar7 + 0x388);
            uStack_1044 = *(undefined4 *)(lVar7 + 0x38c);
            fVar10 = *(float *)(lVar7 + 0x390);
            FUN_141ce48e0(lVar7,param_2,*(undefined8 *)(lVar7 + 0x388));
            local_1060 = local_1060 & 0xffffffffffffff00;
            local_1068 = (undefined8 *)CONCAT44(local_1068._4_4_,fVar10);
            FUN_141b03cc0(param_1,param_2,*(longlong *)(lVar7 + 0x220) + 8,lVar8);
            _guard_xfg_dispatch_icall_nop(local_fa8,*(void **)(lVar8 + 0x1ab8),0xf30);
            local_1068 = (undefined8 *)(lVar8 + 0x390);
            local_fe8 = (int)((float)*(int *)(lVar8 + 0x1aa0) * fVar10);
            local_fe4 = (int)((float)*(int *)(lVar8 + 0x1aa4) * fVar10);
            local_fe0 = (int)((float)*(int *)(lVar8 + 0x1aa8) * fVar10);
            local_fdc = (int)((float)*(int *)(lVar8 + 0x1aac) * fVar10);
            local_1060 = lVar8 + 0x28e0;
            FUN_14275e210(lVar8,local_fa8,&local_1048,&local_fe8);
            local_1068 = (undefined8 *)CONCAT44(local_1068._4_4_,1);
            (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,local_1028,local_fa8,&DAT_146b09708)
            ;
            lVar7 = local_1028[0];
            local_1040 = local_1028[0];
            if (local_1028[0] != 0) {
              LOCK();
              *(int *)(local_1028[0] + 8) = *(int *)(local_1028[0] + 8) + 1;
              UNLOCK();
            }
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_1028);
            local_fd0 = lVar7;
            local_1040 = 0;
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1040);
            TRefCountPtr<FRHIIndexBuffer>::operator=(&local_1008,lVar7);
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_fd0);
          }
          lVar7 = DAT_146aa9590;
          if (param_3 == 1) {
            cVar2 = FUN_1415ad720(&DAT_1468e2448);
            if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
               (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
              lVar4 = 4;
            }
            else {
              lVar4 = 0;
            }
            if ((((0 < *(int *)(lVar7 + lVar4)) && (*(char *)(lVar8 + 0x1202) == '\0')) &&
                (*(longlong *)(lVar8 + 0x1ab0) != 0)) && (DAT_146ab62df != '\0')) {
              FUN_141d1f100(*(longlong *)(lVar8 + 0x1ab0) + 0x16e0,param_2);
            }
          }
          local_1068 = (undefined8 *)CONCAT71(local_1068._1_7_,local_1057);
          FUN_141cdec30(lVar6,param_2,lVar8,param_1);
          local_1057 = 0;
          local_1028[2] = FUN_141abfb70();
          local_ff8 = (ulonglong)local_ff8._4_4_ << 0x20;
          if (local_1058 == '\0') {
            local_1060 = local_1060 & 0xffffffffffffff00;
            local_1068 = (undefined8 *)CONCAT44(local_1068._4_4_,param_3);
            FUN_141e07210(param_1,param_2,lVar8,local_1028 + 1);
          }
          else {
            local_1068 = (undefined8 *)CONCAT44(local_1068._4_4_,param_3);
            FUN_141e07460();
          }
          FUN_141ce3ac0(lVar6,param_2,lVar8);
          lVar4 = DAT_146aa9590;
          if (param_3 == 1) {
            cVar2 = FUN_1415ad720(&DAT_1468e2448);
            if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
               (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
              lVar5 = 4;
            }
            else {
              lVar5 = 0;
            }
            lVar7 = local_1050;
            if (((0 < *(int *)(lVar4 + lVar5)) && (*(char *)(lVar8 + 0x1202) == '\0')) &&
               ((*(longlong *)(lVar8 + 0x1ab0) != 0 && (DAT_146ab62df != '\0')))) {
              FUN_141d2dde0(*(longlong *)(lVar8 + 0x1ab0) + 0x16e0,param_2);
              lVar7 = local_1050;
            }
          }
          else {
            FUN_141e0c020(param_2,lVar8,0);
            lVar7 = local_1050;
          }
        }
        else {
          if (*(char *)((longlong)param_3 + 0x1d84 + lVar8) == '\0') {
            bVar1 = -1 < DAT_146aa9548;
          }
          else {
            bVar1 = 0 < DAT_146aa9548;
          }
          if ((bVar1) && (fVar10 = *(float *)(lVar6 + 0x390), fVar10 < 1.0)) goto LAB_141e05f34;
          local_1068 = (undefined8 *)CONCAT71(local_1068._1_7_,local_1056);
          FUN_141cdf000(lVar6,param_2,lVar8,param_1);
          local_1056 = 0;
          local_1028[2] = FUN_141abfb70();
          local_ff8 = (ulonglong)local_ff8._4_4_ << 0x20;
          if (local_1058 == '\0') {
            local_1060 = local_1060 & 0xffffffffffffff00;
            local_1068 = (undefined8 *)CONCAT44(local_1068._4_4_,param_3);
            FUN_141e07210(param_1,param_2,lVar8,local_1028 + 1);
          }
          else {
            local_1068 = (undefined8 *)CONCAT44(local_1068._4_4_,param_3);
            FUN_141e07460();
          }
        }
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1008);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1038);
        local_1050 = lVar7;
      }
LAB_141e06219:
      local_1050 = local_1050 + 0x30d0;
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(param_1 + 200));
  }
  FScopedCommandListWaitForTasks::~FScopedCommandListWaitForTasks(local_fc8 + 2);
  if (local_fc8[0] != 0) {
    FScopedGPUStatEvent::End(local_fc8);
  }
  return;
}



// FUNCTION 141e06320 FUN_141e06320 body=932 status=ok
// SIG undefined FUN_141e06320(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141e06320(undefined8 param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_128 [32];
  wchar_t *local_108;
  undefined1 local_100;
  undefined1 local_f8;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  longlong local_b0 [3];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined2 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined1 local_60;
  wchar_t *local_58;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  cVar1 = FUN_141e0b970();
  if (cVar1 != '\0') {
    uVar5 = 0;
    local_e8 = 0;
    local_b0[0] = 0;
    local_b0[1] = 0;
    FScopedGPUStatEvent::Begin(local_b0,param_2,&DAT_146aa9ac0,&local_e8);
    lVar2 = FSceneRenderTargets::Get();
    local_f8 = 1;
    uVar7 = *(undefined8 *)(lVar2 + 0x378);
    local_84 = (undefined4)uVar7;
    local_e8._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
    local_80 = local_e8._4_4_;
    local_78 = 1;
    local_70 = 1;
    local_64 = 1;
    local_58 = L"UnknownTexture2D";
    local_88 = DAT_1464c9cc8;
    local_100 = 1;
    local_108 = L"Velocity";
    local_98 = _DAT_1464c9cb8;
    uStack_90 = uRam00000001464c9cc0;
    local_7c = 0;
    local_74 = 0x10000;
    local_6c = 0x13;
    local_60 = 0;
    local_50 = 1;
    local_e8 = uVar7;
    FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_98,param_3);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146aaaf98) &&
       (_Init_thread_header(&DAT_146aaaf98), DAT_146aaaf98 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar4 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MotionBlurDebug");
      if (plVar4 != (longlong *)0x0) {
        uVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
      }
      _DAT_146aaaf90 = uVar5;
      _Init_thread_footer(&DAT_146aaaf98);
    }
    cVar1 = FUN_141e02d40();
    if ((cVar1 == '\0') || (cVar1 = FUN_141ae37e0(), cVar1 == '\0')) {
      uVar7 = 1;
    }
    else {
      uVar7 = 0;
    }
    FUN_141df9f20(param_2,param_3,uVar7);
    cVar1 = FUN_141636a40();
    if ((cVar1 == '\0') ||
       (((DAT_1464c9c18 == '\0' && (DAT_146ab6383 != '\0')) || (*(int *)(DAT_146aa9a88 + 4) == 0))))
    {
      FUN_141e066d0(param_1,param_2,param_3);
    }
    else {
      FUN_141e06b10(param_1,param_2,param_3);
    }
    local_e0 = 0xffffffff00000000;
    uStack_d8 = 0xffffffffffffffff;
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    local_d0 = 0xffffffffffffffff;
    uStack_c8 = 0xffffffffffffffff;
    local_c0 = 0xffffffff;
    uStack_b8 = 0;
    uVar7 = *(undefined8 *)(*param_3 + 0x10);
    plVar4 = *(longlong **)(*param_3 + 8);
    puVar3 = puVar6 + 10;
    if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x58);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar6 + 10;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar3;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_143f489f0;
    *(undefined4 *)(puVar6 + 2) = (undefined4)local_e0;
    *(undefined4 *)((longlong)puVar6 + 0x14) = local_e0._4_4_;
    *(undefined4 *)(puVar6 + 3) = (undefined4)uStack_d8;
    *(undefined4 *)((longlong)puVar6 + 0x1c) = uStack_d8._4_4_;
    *(undefined4 *)(puVar6 + 4) = (undefined4)local_d0;
    *(undefined4 *)((longlong)puVar6 + 0x24) = local_d0._4_4_;
    *(undefined4 *)(puVar6 + 5) = (undefined4)uStack_c8;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uStack_c8._4_4_;
    *(undefined4 *)(puVar6 + 6) = (undefined4)local_c0;
    *(undefined4 *)((longlong)puVar6 + 0x34) = local_c0._4_4_;
    *(undefined4 *)(puVar6 + 7) = (undefined4)uStack_b8;
    *(undefined4 *)((longlong)puVar6 + 0x3c) = uStack_b8._4_4_;
    puVar6[8] = plVar4;
    puVar6[9] = uVar7;
    lVar2 = (**(code **)(*plVar4 + 8))(plVar4);
    if ((lVar2 == 0) && (lVar2 = (**(code **)(*(longlong *)puVar6[8] + 0x18))(), lVar2 == 0)) {
      (**(code **)(*(longlong *)puVar6[8] + 0x20))();
    }
    lVar2 = (**(code **)(*(longlong *)puVar6[9] + 8))();
    if ((lVar2 == 0) && (lVar2 = (**(code **)(*(longlong *)puVar6[9] + 0x18))(), lVar2 == 0)) {
      (**(code **)(*(longlong *)puVar6[9] + 0x20))();
    }
    AK::MemoryMgr::StartProfileThreadUsage(0x464c2590);
    if (local_b0[0] != 0) {
      FScopedGPUStatEvent::End(local_b0);
    }
  }
  return;
}



// FUNCTION 141e066d0 FUN_141e066d0 body=1076 status=ok
// SIG undefined FUN_141e066d0(void)

void FUN_141e066d0(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar7;
  longlong local_res8;
  longlong local_res20;
  ulonglong in_stack_fffffffffffffd58;
  undefined4 uVar10;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong in_stack_fffffffffffffd60;
  longlong lVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined4 local_258;
  longlong local_250;
  longlong local_248;
  undefined4 local_240;
  uint local_23c;
  undefined4 local_238;
  undefined1 local_234;
  undefined8 local_230;
  undefined8 local_228;
  undefined4 local_220;
  longlong local_218;
  longlong local_210;
  undefined4 local_208;
  uint local_204;
  undefined4 local_200;
  undefined1 local_1fc;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  undefined4 local_1d0;
  uint local_1cc;
  undefined4 local_1c8;
  undefined1 local_1c4;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  undefined1 local_188 [336];
  ulonglong uVar6;
  
  uVar6 = 0;
  uVar7 = uVar6;
  if (0 < *(int *)(param_1 + 200)) {
    do {
      uVar10 = (undefined4)(in_stack_fffffffffffffd58 >> 0x20);
      lVar4 = *(longlong *)(param_1 + 0xc0) + uVar7;
      uVar2 = FSceneRenderTargets::Get(param_2);
      FUN_141d05c90(uVar2,*(undefined4 *)(lVar4 + 0x1a38),0,local_188);
      in_stack_fffffffffffffd58 = CONCAT44(uVar10,1);
      (**(code **)(*DAT_146ab6358 + 0x110))
                (DAT_146ab6358,&local_res8,local_188,&DAT_146a632d8,in_stack_fffffffffffffd58);
      local_res20 = local_res8;
      if (local_res8 != 0) {
        LOCK();
        *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
        UNLOCK();
      }
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>();
      local_250 = *(longlong *)(lVar4 + 0x20);
      local_258 = 0x11;
      local_268 = 0;
      uStack_260 = 0;
      if (local_250 != 0) {
        LOCK();
        *(int *)(local_250 + 8) = *(int *)(local_250 + 8) + 1;
        UNLOCK();
      }
      local_248 = local_res20;
      local_240 = 0;
      local_238 = 0;
      local_234 = 0;
      local_23c = (uint)(*(char *)(lVar4 + 0x1205) != '\0') |
                  -(uint)(*(char *)(lVar4 + 0x11b4) != '\0') & 8;
      if (((*(byte *)(lVar4 + 0x28cc) & 8) == 0) && (*(char *)(lVar4 + 0x1a98) != '\0')) {
        if (*(char *)(lVar4 + 0x1209) == '\0') {
          if (*(char *)(lVar4 + 0x120b) != '\0') {
LAB_141e06841:
            if (((*(int *)(lVar4 + 0xf60) == 2) || (*(longlong *)(lVar4 + 0x10) == 0)) ||
               (*(int *)(*(longlong *)(lVar4 + 0x10) + 8) < 2)) goto LAB_141e06aa8;
          }
        }
        else if (*(int *)(lVar4 + 0xf60) == 2) {
          if (*(char *)(lVar4 + 0x120b) != '\0') goto LAB_141e06841;
          goto LAB_141e06aa8;
        }
        FUN_141e0a680(param_2,lVar4,param_1,&local_268,param_3,
                      in_stack_fffffffffffffd60 & 0xffffffff00000000,0x3f800000);
        if ((*(char *)(lVar4 + 0x1209) == '\0') || (*(int *)(lVar4 + 0xf60) != 1)) {
          lVar1 = *(longlong *)(param_1 + 8);
          local_1f8 = local_268;
          local_1f0 = uStack_260;
          local_1e8 = local_258;
          local_1e0 = local_250;
          if (local_250 != 0) {
            LOCK();
            *(int *)(local_250 + 8) = *(int *)(local_250 + 8) + 1;
            UNLOCK();
          }
          lVar12 = lVar4 + 0x1c50;
          lVar11 = lVar4 + 0x1b80;
          local_1d8 = local_248;
          local_1d0 = local_240;
          local_1cc = local_23c;
          local_1c8 = local_238;
          puVar8 = &local_1f8;
          local_1c4 = 0;
          FUN_141de7700(lVar1 + 0xa88,param_2,lVar4,0,puVar8,lVar11,lVar12,0,0,
                        *(int *)(lVar1 + 0xac0) + -1,0);
          uVar13 = (undefined4)((ulonglong)lVar12 >> 0x20);
          uVar10 = (undefined4)((ulonglong)lVar11 >> 0x20);
          plVar3 = &local_1e0;
        }
        else {
          local_1c0 = *(longlong *)(param_1 + 0xc0);
          lVar1 = *(longlong *)(param_1 + 8);
          local_1b8 = local_1c0 + 0x30d0;
          local_1b0 = local_1c0 + 0x1b80;
          local_1a8 = local_1c0 + 0x4c50;
          local_1a0 = local_1c0 + 0x1c50;
          local_198 = local_1c0 + 0x4d20;
          local_230 = local_268;
          local_228 = uStack_260;
          local_220 = local_258;
          local_218 = local_250;
          if (local_250 != 0) {
            LOCK();
            *(int *)(local_250 + 8) = *(int *)(local_250 + 8) + 1;
            UNLOCK();
          }
          local_210 = local_248;
          local_208 = local_240;
          local_204 = local_23c;
          local_200 = local_238;
          puVar8 = &local_230;
          uVar13 = 0;
          uVar10 = 0;
          local_1fc = 0;
          FUN_141de7950(lVar1 + 0xa88,param_2,local_1c0,1,puVar8,0,0,&local_1c0,0,
                        *(int *)(lVar1 + 0xac0) + -1,0);
          plVar3 = &local_218;
        }
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar3);
        uVar2 = CONCAT44(uVar10,*(int *)(lVar4 + 0x2288) + -1);
        FUN_141e03ac0(param_1,param_2,lVar4,&local_268,(ulonglong)puVar8 & 0xffffffff00000000,uVar2)
        ;
        uVar2 = CONCAT44((int)((ulonglong)uVar2 >> 0x20),0x3f600000);
        uVar9 = param_3;
        FUN_141e0a680(param_2,lVar4,param_1,&local_268,param_3,uVar2,CONCAT44(uVar13,0x3f800000));
        in_stack_fffffffffffffd60 =
             CONCAT44((int)((ulonglong)uVar2 >> 0x20),*(int *)(lVar4 + 0x22a8) + -1);
        in_stack_fffffffffffffd58 = uVar9 & 0xffffffff00000000;
        FUN_141e03990(param_1,param_2,lVar4,&local_268,in_stack_fffffffffffffd58,
                      in_stack_fffffffffffffd60);
      }
LAB_141e06aa8:
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_250);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res20);
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      uVar7 = uVar7 + 0x30d0;
    } while ((int)uVar5 < *(int *)(param_1 + 200));
  }
  return;
}



// FUNCTION 141e06b10 FUN_141e06b10 body=1778 status=ok
// SIG undefined FUN_141e06b10(void)

/* WARNING: Removing unreachable block (ram,0x000141e07034) */
/* WARNING: Removing unreachable block (ram,0x000141e07040) */
/* WARNING: Removing unreachable block (ram,0x000141e0704f) */

void FUN_141e06b10(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  DWORD *pDVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 uVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  int iVar17;
  int local_res20;
  longlong *in_stack_fffffffffffffcb8;
  undefined4 uVar18;
  undefined ***in_stack_fffffffffffffcc0;
  undefined8 uVar19;
  int local_324;
  longlong local_308;
  longlong local_300;
  longlong local_2f8;
  longlong local_2f0;
  longlong local_2e8 [2];
  longlong local_2d8;
  undefined8 local_2d0;
  undefined1 local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined4 local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  undefined4 local_298;
  uint local_294;
  undefined4 local_290;
  undefined1 local_28c;
  undefined **local_288;
  undefined8 local_280;
  undefined8 local_278;
  longlong local_270;
  longlong local_268;
  undefined4 local_260;
  longlong local_258;
  longlong local_250;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined8 local_238;
  int local_21c;
  int local_214;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  undefined1 local_178 [312];
  
  if ((*(int *)(DAT_146aaa090 + 4) < 1) && (*(int *)(DAT_146ab6d10 + 4) < 1)) {
    local_2c8 = 0;
  }
  else {
    local_2c8 = 1;
  }
  local_324 = 0;
  local_2d0 = param_2;
  if (0 < *(int *)(param_1 + 200)) {
    local_308 = 0;
    do {
      uVar18 = (undefined4)((ulonglong)in_stack_fffffffffffffcb8 >> 0x20);
      lVar3 = local_308 + *(longlong *)(param_1 + 0xc0);
      if (((*(byte *)(lVar3 + 0x28cc) & 8) == 0) && (*(char *)(lVar3 + 0x1a98) != '\0')) {
        if (*(char *)(lVar3 + 0x1209) == '\0') {
          if (*(char *)(lVar3 + 0x120b) == '\0') {
            bVar5 = true;
          }
          else {
LAB_141e06bff:
            if (((*(int *)(lVar3 + 0xf60) == 2) || (*(longlong *)(lVar3 + 0x10) == 0)) ||
               (*(int *)(*(longlong *)(lVar3 + 0x10) + 8) < 2)) goto LAB_141e06c1c;
            bVar5 = true;
          }
        }
        else {
          if (*(int *)(lVar3 + 0xf60) == 2) {
            if (*(char *)(lVar3 + 0x120b) != '\0') goto LAB_141e06bff;
            goto LAB_141e06c1c;
          }
          bVar5 = true;
        }
      }
      else {
LAB_141e06c1c:
        bVar5 = false;
      }
      if (bVar5) {
        uVar8 = FSceneRenderTargets::Get(param_2);
        FUN_141d05c90(uVar8,*(undefined4 *)(lVar3 + 0x1a38),0,local_178);
        (**(code **)(*DAT_146ab6358 + 0x110))
                  (DAT_146ab6358,&local_300,local_178,&DAT_146a632d8,CONCAT44(uVar18,1));
        local_2f0 = local_300;
        if (local_300 != 0) {
          LOCK();
          *(int *)(local_300 + 8) = *(int *)(local_300 + 8) + 1;
          UNLOCK();
        }
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>();
        local_2a8 = *(longlong *)(lVar3 + 0x20);
        local_2b0 = 0x11;
        local_2c0 = 0;
        uStack_2b8 = 0;
        if (local_2a8 != 0) {
          LOCK();
          *(int *)(local_2a8 + 8) = *(int *)(local_2a8 + 8) + 1;
          UNLOCK();
        }
        local_2a0 = local_2f0;
        local_298 = 0;
        local_290 = 0;
        local_28c = 0;
        local_294 = (uint)(*(char *)(lVar3 + 0x1205) != '\0') |
                    -(uint)(*(char *)(lVar3 + 0x11b4) != '\0') & 8;
        if ((*(int *)(DAT_146aaa090 + 4) == 0) && (*(int *)(DAT_146ab6d10 + 4) == 0)) {
          uVar13 = 1;
        }
        else {
          uVar13 = 0;
        }
        uVar19 = CONCAT71((int7)((ulonglong)in_stack_fffffffffffffcc0 >> 8),
                          0 < *(int *)(DAT_146aa9aa0 + 4));
        FUN_141d59a10(&local_288,(char)param_1,lVar3,param_1,param_2,uVar19,uVar13,&local_2c0);
        uVar8 = local_238;
        uVar18 = (undefined4)((ulonglong)uVar19 >> 0x20);
        local_288 = &PTR__scalar_deleting_destructor__144e8b1f0;
        local_1c8 = 0;
        local_1c4 = 0x3f800000;
        local_1d0 = param_3;
        FUN_141df9f20(local_238,param_3,0);
        FUN_141e0a680(uVar8,local_280,local_278,&local_270,local_1d0,CONCAT44(uVar18,local_1c8),
                      local_1c4);
        if ((*(char *)(lVar3 + 0x1209) == '\0') || (*(int *)(lVar3 + 0xf60) != 1)) {
          uVar8 = 0;
          lVar11 = lVar3 + 0x1c50;
          in_stack_fffffffffffffcb8 = (longlong *)0x0;
          lVar16 = lVar3 + 0x1b80;
        }
        else {
          local_1b8 = *(longlong *)(param_1 + 0xc0);
          lVar11 = 0;
          lVar16 = 0;
          uVar8 = 1;
          local_1b0 = local_1b8 + 0x30d0;
          local_1a8 = local_1b8 + 0x1b80;
          local_1a0 = local_1b8 + 0x4c50;
          local_198 = local_1b8 + 0x1c50;
          local_190 = local_1b8 + 0x4d20;
          in_stack_fffffffffffffcb8 = &local_1b8;
        }
        in_stack_fffffffffffffcc0 = &local_288;
        FUN_141dff3f0(*(longlong *)(param_1 + 8) + 0xa88,uVar8,lVar16,lVar11,
                      in_stack_fffffffffffffcb8,in_stack_fffffffffffffcc0);
        iVar4 = *(int *)(lVar3 + 0x2288);
        iVar6 = (local_214 + -1 + iVar4) / local_214;
        iVar17 = local_21c;
        if (iVar6 <= local_21c) {
          iVar17 = iVar6;
        }
        local_res20 = 0;
        if (iVar17 != 0) {
          iVar6 = 0;
          if (0 < iVar17) {
            do {
              plVar15 = (longlong *)0x0;
              iVar7 = iVar4 / iVar17 + (uint)(iVar6 < iVar4 - (iVar4 / iVar17) * iVar17) +
                      local_res20;
              local_2d8 = FUN_141d6b6f0(&local_288);
              uVar18 = DAT_1464a8210;
              pDVar9 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
              plVar10 = TlsGetValue(*pDVar9);
              if (plVar10 == (longlong *)0x0) {
                plVar10 = (longlong *)operator_new(0x18);
                if (plVar10 != (longlong *)0x0) {
                  *plVar10 = 0;
                  plVar10[1] = 0;
                  *(undefined4 *)(plVar10 + 2) = 0;
                  plVar15 = plVar10;
                }
                TlsSetValue(*pDVar9,plVar15);
                plVar10 = plVar15;
              }
              plVar15 = (longlong *)plVar10[1];
              if (plVar15 == (longlong *)0x0) {
                if (*plVar10 == 0) {
                  lVar11 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar9 + 2);
                  plVar10[1] = lVar11;
                  if (lVar11 == 0) {
                    puVar12 = (undefined8 *)FMemory::Malloc(0x2000,0);
                    plVar10[1] = (longlong)puVar12;
                    lVar11 = 0x1f;
                    do {
                      puVar2 = puVar12 + 0x20;
                      *puVar12 = puVar2;
                      lVar11 = lVar11 + -1;
                      puVar12 = puVar2;
                    } while (lVar11 != 0);
                    *puVar2 = 0;
                  }
                }
                else {
                  plVar10[1] = *plVar10;
                  *plVar10 = 0;
                }
                plVar15 = (longlong *)plVar10[1];
                iVar14 = 0x20;
                *(undefined4 *)(plVar10 + 2) = 0x20;
              }
              else {
                iVar14 = (int)plVar10[2];
              }
              plVar10[1] = *plVar15;
              *(int *)(plVar10 + 2) = iVar14 + -1;
              plVar10 = (longlong *)FUN_1415914c0(local_2e8);
              local_188 = *plVar10;
              *plVar10 = 0;
              *plVar15 = (longlong)&PTR_FUN_143f3edd8;
              *(undefined4 *)(plVar15 + 1) = 0xff;
              *(undefined4 *)((longlong)plVar15 + 0xc) = 1;
              *plVar15 = (longlong)&PTR_FUN_144e8b200;
              *(undefined1 *)(plVar15 + 0xe) = 0;
              plVar15[0xf] = local_188;
              if (local_2e8[0] != 0) {
                LOCK();
                piVar1 = (int *)(local_2e8[0] + 0x48);
                iVar14 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar14 == 1) {
                  FGraphEvent::Recycle();
                }
              }
              lVar11 = local_2d8;
              plVar15[2] = param_1;
              plVar15[3] = local_2d8;
              plVar15[4] = lVar3;
              plVar15[5] = local_270;
              plVar15[6] = local_268;
              *(undefined4 *)(plVar15 + 7) = local_260;
              plVar15[8] = local_258;
              if (local_258 != 0) {
                LOCK();
                *(int *)(local_258 + 8) = *(int *)(local_258 + 8) + 1;
                UNLOCK();
              }
              plVar15[9] = local_250;
              *(undefined4 *)(plVar15 + 10) = local_248;
              *(undefined4 *)((longlong)plVar15 + 0x54) = local_244;
              *(undefined4 *)(plVar15 + 0xb) = local_240;
              *(undefined1 *)((longlong)plVar15 + 0x5c) = 0;
              *(int *)(plVar15 + 0xc) = local_res20;
              *(int *)((longlong)plVar15 + 100) = iVar7 + -1;
              *(undefined1 *)(plVar15 + 0xd) = 0;
              local_2f8 = plVar15[0xf];
              if (local_2f8 != 0) {
                LOCK();
                *(int *)(local_2f8 + 0x48) = *(int *)(local_2f8 + 0x48) + 1;
                UNLOCK();
              }
              FUN_141bc09d0(plVar15,0,uVar18,1);
              FParallelCommandListSet::AddParallelCommandList
                        (&local_288,lVar11,&local_2f8,0xffffffff);
              if (local_2f8 != 0) {
                LOCK();
                piVar1 = (int *)(local_2f8 + 0x48);
                iVar14 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar14 == 1) {
                  FGraphEvent::Recycle();
                }
              }
              iVar6 = iVar6 + 1;
              local_res20 = iVar7;
            } while (iVar6 < iVar17);
          }
        }
        local_288 = &PTR__scalar_deleting_destructor__144e8b1f0;
        FUN_141d662d0(&local_288,0);
        FParallelCommandListSet::~FParallelCommandListSet(&local_288);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_2a8);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_2f0);
      }
      local_324 = local_324 + 1;
      local_308 = local_308 + 0x30d0;
    } while (local_324 < *(int *)(param_1 + 200));
  }
  FScopedCommandListWaitForTasks::~FScopedCommandListWaitForTasks(&local_2d0);
  return;
}



// FUNCTION 141e07210 FUN_141e07210 body=583 status=ok
// SIG undefined FUN_141e07210(void)

void FUN_141e07210(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  int param_5,char param_6)

{
  undefined1 uVar1;
  longlong lVar2;
  ulonglong local_res18;
  longlong in_stack_ffffffffffffff88;
  undefined4 uVar5;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong in_stack_ffffffffffffff90;
  ulonglong in_stack_ffffffffffffff98;
  undefined8 local_48;
  int local_40;
  uint local_3c;
  
  FTranslucenyPrimCount::GetPassRange(param_3 + 0x1d70,&local_48,param_5);
  if (param_6 != '\0') {
    if ((*(char *)(param_3 + 0x1209) == '\0') || (*(int *)(param_3 + 0xf60) != 1)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
    in_stack_ffffffffffffff88 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff88 >> 8),uVar1);
    FUN_141ada980(param_2,param_3,0x3f600000,0x3f800000,in_stack_ffffffffffffff88);
  }
  if (local_48._4_4_ < (int)local_3c) {
    lVar2 = (longlong)local_48._4_4_ << 4;
    local_res18 = (ulonglong)(local_3c - local_48._4_4_);
    do {
      in_stack_ffffffffffffff88 = *(longlong *)(lVar2 + *(longlong *)(param_3 + 0x1d88));
      in_stack_ffffffffffffff98 =
           FUN_141e03330(param_1,param_2,param_3,in_stack_ffffffffffffff88,param_5);
      in_stack_ffffffffffffff90 =
           *(longlong *)(param_3 + 0x1b30) +
           (longlong)*(int *)(in_stack_ffffffffffffff88 + 0xe8) * 8;
      FUN_141e05810(param_3 + 0x1d70,param_2,param_3,param_4,in_stack_ffffffffffffff88,
                    in_stack_ffffffffffffff90,in_stack_ffffffffffffff98,param_5,param_6);
      local_res18 = local_res18 - 1;
      lVar2 = lVar2 + 0x10;
    } while (local_res18 != 0);
  }
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  if (param_6 != '\0') {
    if ((*(char *)(param_3 + 0x1209) == '\0') || (*(int *)(param_3 + 0xf60) != 1)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
    uVar3 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff88 >> 8),uVar1);
    FUN_141ada980(param_2,param_3,0x3f600000,0x3f800000,uVar3);
    uVar5 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  uVar3 = CONCAT44(uVar5,2);
  FUN_14274ac60(param_3 + 0x22e0,param_2,param_4,param_3,uVar3);
  if ((*(char *)(param_3 + 0x1202) == '\0') && ((param_5 == 3 || (param_5 == 0)))) {
    uVar4 = CONCAT44((int)((ulonglong)uVar3 >> 0x20),2);
    FUN_14274ac60(param_3 + 0x22e0,param_2,param_4,param_3,uVar4);
    if ((*(byte *)(param_3 + 0x28cc) & 0x10) != 0) {
      local_48 = 0;
      local_40 = param_5;
      local_3c = local_3c & 0xffffff00;
      if (*(int *)(param_3 + 0x2258) != 0) {
        in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffff00000000;
        in_stack_ffffffffffffff90 = in_stack_ffffffffffffff90 & 0xffffffffffffff00;
        FUN_141de7150(param_2,param_3,param_4,&local_48,uVar4 & 0xffffffffffffff00,
                      in_stack_ffffffffffffff90,in_stack_ffffffffffffff98,
                      *(int *)(param_3 + 0x2258) + -1);
      }
      if (*(int *)(param_3 + 0x2268) != 0) {
        FUN_141de7150(param_2,param_3,param_4,&local_48,1,
                      in_stack_ffffffffffffff90 & 0xffffffffffffff00,
                      in_stack_ffffffffffffff98 & 0xffffffff00000000,*(int *)(param_3 + 0x2268) + -1
                     );
      }
    }
  }
  return;
}



// FUNCTION 141e07460 FUN_141e07460 body=1175 status=ok
// SIG undefined FUN_141e07460(void)

/* WARNING: Removing unreachable block (ram,0x000141e07729) */
/* WARNING: Removing unreachable block (ram,0x000141e07737) */
/* WARNING: Removing unreachable block (ram,0x000141e07746) */

void FUN_141e07460(longlong param_1,ulonglong param_2,longlong param_3,undefined8 param_4,
                  int param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  DWORD *pDVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined1 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  undefined4 uVar21;
  longlong local_150;
  longlong local_148 [2];
  longlong local_138;
  undefined1 local_130 [4];
  int local_12c;
  int local_124;
  undefined **local_118;
  undefined8 local_110;
  undefined8 local_108;
  longlong local_100;
  longlong local_f8;
  undefined4 local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined8 local_c8;
  int local_ac;
  int local_a4;
  int local_60;
  char local_5c;
  longlong local_58;
  
  uVar21 = 0;
  if ((*(int *)(DAT_146aa9798 + 4) == 0) && (*(int *)(DAT_146ab6d10 + 4) == 0)) {
    uVar15 = 1;
  }
  else {
    uVar15 = 0;
  }
  lVar6 = FSceneRenderTargets::Get(param_2);
  cVar3 = *(char *)(lVar6 + 0x375);
  uVar20 = param_2;
  FUN_141d59a10(&local_118,(undefined1)param_5,param_3,param_1,param_2,
                0 < *(int *)(DAT_146aa9780 + 4),uVar15,param_4,uVar21);
  local_118 = &PTR_FUN_144e8b1d0;
  local_60 = param_5;
  local_5c = cVar3;
  uVar7 = FSceneRenderTargets::Get(local_c8);
  uVar20 = uVar20 & 0xffffffffffffff00;
  if (local_5c == '\0') {
    FUN_141cdf000(uVar7,local_c8,local_110,local_108,uVar20);
  }
  else {
    FUN_141cdec30();
  }
  FTranslucenyPrimCount::GetPassRange(param_3 + 0x1d70,local_130,param_5);
  uVar21 = (undefined4)(uVar20 >> 0x20);
  iVar16 = local_124 - local_12c;
  local_a4 = (local_a4 + -1 + iVar16) / local_a4;
  iVar18 = local_ac;
  if (local_a4 <= local_ac) {
    iVar18 = local_a4;
  }
  if (iVar18 != 0) {
    iVar19 = 0;
    uVar4 = (uint)((longlong)iVar16 / (longlong)iVar18);
    iVar11 = uVar4 * iVar18;
    uVar13 = (longlong)iVar16 / (longlong)iVar18 & 0xffffffff;
    iVar17 = local_12c;
    if (0 < iVar18) {
      do {
        plVar14 = (longlong *)0x0;
        iVar5 = (uint)(iVar19 < iVar16 - iVar11) + (int)uVar13 + iVar17;
        local_138 = FUN_141d6b6f0(&local_118);
        uVar21 = DAT_1464a8210;
        pDVar8 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
        plVar9 = TlsGetValue(*pDVar8);
        if (plVar9 == (longlong *)0x0) {
          plVar9 = (longlong *)operator_new(0x18);
          if (plVar9 != (longlong *)0x0) {
            *plVar9 = 0;
            plVar9[1] = 0;
            *(undefined4 *)(plVar9 + 2) = 0;
            plVar14 = plVar9;
          }
          TlsSetValue(*pDVar8,plVar14);
          plVar9 = plVar14;
        }
        plVar14 = (longlong *)plVar9[1];
        if (plVar14 == (longlong *)0x0) {
          if (*plVar9 == 0) {
            lVar6 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar8 + 2);
            plVar9[1] = lVar6;
            if (lVar6 == 0) {
              puVar10 = (undefined8 *)FMemory::Malloc(0x2000,0);
              plVar9[1] = (longlong)puVar10;
              lVar6 = 0x1f;
              do {
                puVar2 = puVar10 + 0x20;
                *puVar10 = puVar2;
                lVar6 = lVar6 + -1;
                puVar10 = puVar2;
              } while (lVar6 != 0);
              *puVar2 = 0;
            }
          }
          else {
            plVar9[1] = *plVar9;
            *plVar9 = 0;
          }
          plVar14 = (longlong *)plVar9[1];
          iVar12 = 0x20;
          *(undefined4 *)(plVar9 + 2) = 0x20;
        }
        else {
          iVar12 = (int)plVar9[2];
        }
        plVar9[1] = *plVar14;
        *(int *)(plVar9 + 2) = iVar12 + -1;
        plVar9 = (longlong *)FUN_1415914c0(local_148);
        local_58 = *plVar9;
        *plVar9 = 0;
        *plVar14 = (longlong)&PTR_FUN_143f3edd8;
        *(undefined4 *)(plVar14 + 1) = 0xff;
        *(undefined4 *)((longlong)plVar14 + 0xc) = 1;
        *plVar14 = (longlong)&PTR__scalar_deleting_destructor__144e8b1e0;
        *(undefined1 *)(plVar14 + 0xf) = 0;
        plVar14[0x10] = local_58;
        if (local_148[0] != 0) {
          LOCK();
          piVar1 = (int *)(local_148[0] + 0x48);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            FGraphEvent::Recycle();
          }
        }
        lVar6 = local_138;
        plVar14[2] = param_1;
        plVar14[3] = local_138;
        plVar14[4] = param_3;
        plVar14[5] = local_100;
        plVar14[6] = local_f8;
        *(undefined4 *)(plVar14 + 7) = local_f0;
        plVar14[8] = local_e8;
        if (local_e8 != 0) {
          LOCK();
          *(int *)(local_e8 + 8) = *(int *)(local_e8 + 8) + 1;
          UNLOCK();
        }
        plVar14[9] = local_e0;
        *(undefined4 *)(plVar14 + 10) = local_d8;
        *(undefined4 *)((longlong)plVar14 + 0x54) = local_d4;
        *(undefined4 *)(plVar14 + 0xb) = local_d0;
        *(undefined1 *)((longlong)plVar14 + 0x5c) = 0;
        *(int *)(plVar14 + 0xc) = param_5;
        plVar14[0xd] = param_3 + 0x1d70;
        *(int *)((longlong)plVar14 + 0x74) = iVar5 + -1;
        *(int *)(plVar14 + 0xe) = iVar17;
        local_150 = plVar14[0x10];
        if (local_150 != 0) {
          LOCK();
          *(int *)(local_150 + 0x48) = *(int *)(local_150 + 0x48) + 1;
          UNLOCK();
        }
        FUN_141e0a940(plVar14,0,uVar21,1);
        FParallelCommandListSet::AddParallelCommandList(&local_118,lVar6,&local_150,0xffffffff);
        if (local_150 != 0) {
          LOCK();
          piVar1 = (int *)(local_150 + 0x48);
          iVar17 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            FGraphEvent::Recycle();
          }
        }
        uVar21 = (undefined4)(uVar20 >> 0x20);
        iVar19 = iVar19 + 1;
        uVar13 = (ulonglong)uVar4;
        iVar17 = iVar5;
      } while (iVar19 < iVar18);
    }
  }
  if ((*(char *)(param_3 + 0x1202) == '\0') &&
     (((param_5 == 3 || (param_5 == 0)) &&
      (FUN_14274ac60(param_3 + 0x22e0,param_2,param_4,param_3,CONCAT44(uVar21,2)),
      (*(byte *)(param_3 + 0x28cc) & 0x10) != 0)))) {
    FUN_141de73a0(&DAT_1464c3708,0,0,&local_118);
    FUN_141de73a0(&DAT_1464c3708,1,0,&local_118);
  }
  local_118 = &PTR_FUN_144e8b1d0;
  FUN_141d662d0(&local_118,0);
  FParallelCommandListSet::~FParallelCommandListSet(&local_118);
  return;
}



// FUNCTION 141e07900 FUN_141e07900 body=143 status=ok
// SIG undefined FUN_141e07900(void)

void FUN_141e07900(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x78);
  if (param_3 < 2) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x78);
    pvVar1 = *(void **)((longlong)param_1 + 0x78);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        pvVar1 = (void *)FMemory::Realloc(0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 0x78) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x78);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x78) = uVar2;
  return;
}



// FUNCTION 141e07990 ResizeGrow body=137 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FVector4,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x110);
  if (uVar1 < 0x11) {
    iVar2 = 0x10;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x114) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 << 4,0);
    iVar2 = (int)(uVar3 >> 4);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x114) = iVar2;
  TInlineAllocator<16,FDefaultAllocator>::ForElementType<FVector4>::ResizeAllocation
            (param_1,param_2,iVar2,0x10);
  return;
}



// FUNCTION 141e07a20 ResizeTo body=110 status=ok
// SIG undefined ResizeTo(void)

void TArray<FVector4,TInlineAllocator<16,FDefaultAllocator>_>::ResizeTo
               (longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x11) {
      iVar1 = 0x10;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0x114)) {
    *(int *)(param_1 + 0x114) = iVar1;
    TInlineAllocator<16,FDefaultAllocator>::ForElementType<FVector4>::ResizeAllocation
              (param_1,*(undefined4 *)(param_1 + 0x110),iVar1,0x10);
  }
  return;
}



// FUNCTION 141e07a90 FUN_141e07a90 body=502 status=ok
// SIG undefined FUN_141e07a90(void)

void FUN_141e07a90(longlong param_1,undefined8 *param_2,int param_3,undefined8 *param_4,
                  longlong *param_5,undefined8 param_6,int param_7,int param_8)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 uStackX_10;
  int aiStackX_18 [4];
  undefined *puStack_48;
  undefined4 uStack_40;
  
  if (*param_5 == 0) {
    if (param_7 < 2) {
      FUN_141deb9c0();
      return;
    }
    if (param_7 == 2) {
      if (param_8 == 0) {
        FUN_141deeb20();
        return;
      }
      if (param_8 == 1) {
        FUN_141dea4e0();
        return;
      }
      if (param_8 == 2) {
        FUN_141dec060();
        return;
      }
      if (param_8 == 3) {
        FUN_141ded5c0();
        return;
      }
    }
    else if (param_7 == 4) {
      if (param_8 == 0) {
        FUN_141def240();
        return;
      }
      if (param_8 == 1) {
        FUN_141deac00();
        return;
      }
      if (param_8 == 2) {
        FUN_141dec780();
        return;
      }
      if (param_8 == 3) {
        FUN_141dedce0();
        return;
      }
    }
    else if (param_7 == 8) {
      if (param_8 == 0) {
        FUN_141def960();
        return;
      }
      if (param_8 == 1) {
        FUN_141deb320();
        return;
      }
      if (param_8 == 2) {
        FUN_141decea0();
        return;
      }
      if (param_8 == 3) {
        FUN_141dee400();
        return;
      }
    }
  }
  else {
    if (param_7 < 2) {
      plVar10 = (longlong *)0x0;
      aiStackX_18[0] = 0;
      lVar7 = FUN_1419ef210((&DAT_1464c9c48)[param_3]);
      uStack_40 = 0;
      puStack_48 = &DAT_146aaad60;
      plVar9 = (longlong *)(lVar7 + 0x38);
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(plVar9,aiStackX_18,&puStack_48);
      plVar12 = plVar10;
      if (aiStackX_18[0] != -1) {
        plVar12 = (longlong *)((longlong)aiStackX_18[0] * 0x20 + *plVar9);
      }
      uStack_40 = 0;
      plVar13 = plVar12 + 2;
      if (plVar12 == (longlong *)0x0) {
        plVar13 = plVar10;
      }
      puStack_48 = &DAT_146aaddc0;
      lVar7 = *plVar13;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(plVar9,aiStackX_18,&puStack_48);
      plVar12 = plVar10;
      if (aiStackX_18[0] != -1) {
        plVar12 = (longlong *)((longlong)aiStackX_18[0] * 0x20 + *plVar9);
      }
      plVar9 = plVar12 + 2;
      if (plVar12 == (longlong *)0x0) {
        plVar9 = plVar10;
      }
      lVar2 = *plVar9;
      puVar8 = (undefined8 *)FUN_141ee3620();
      *param_2 = *puVar8;
      if (lVar7 == 0) {
        uStackX_10 = 0;
        plVar12 = (longlong *)0x1;
        plVar9 = plVar10;
      }
      else {
        lVar7 = *(longlong *)(lVar7 + 0x48);
        if (*(char *)(lVar7 + 0x28) == '\0') {
          FUN_1419f3850(lVar7);
        }
        plVar9 = *(longlong **)(lVar7 + 0x38);
        plVar12 = plVar10;
      }
      param_2[1] = plVar9;
      if (plVar12 != (longlong *)0x0) {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&uStackX_10);
      }
      bVar6 = false;
      if (lVar2 == 0) {
        bVar6 = true;
        uStackX_10 = 0;
      }
      else {
        lVar7 = *(longlong *)(lVar2 + 0x48);
        if (*(char *)(lVar7 + 0x28) == '\0') {
          FUN_1419f3850(lVar7);
        }
        plVar10 = *(longlong **)(lVar7 + 0x40);
      }
      param_2[4] = plVar10;
      if (bVar6) {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&uStackX_10);
      }
      *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
      FUN_141ed6ac0(param_1,param_2,2,1);
      lVar7 = *(longlong *)(lVar2 + 0x48);
      uVar3 = *param_4;
      uVar4 = *(undefined8 *)CONCAT44(param_6._4_4_,(float)param_6);
      uStackX_10 = uVar4;
      if (*(char *)(lVar7 + 0x28) == '\0') {
        FUN_1419f3850(lVar7);
      }
      uVar5 = *(undefined8 *)(lVar7 + 0x40);
      if (*(short *)(lVar2 + 0xc2) != 0) {
        uVar1 = *(ushort *)(lVar2 + 0xc0);
        puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar11 + 5;
        if (*(undefined8 **)(param_1 + 0x38) < puVar8) {
          FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
          puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar8 = puVar11 + 5;
        }
        *(undefined8 **)(param_1 + 0x30) = puVar8;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar11;
        *(undefined8 **)(param_1 + 8) = puVar11 + 1;
        puVar11[1] = 0;
        *(uint *)(puVar11 + 3) = (uint)uVar1;
        *puVar11 = &PTR_LAB_143f59c80;
        puVar11[2] = uVar5;
        puVar11[4] = uVar3;
      }
      param_6._0_4_ = (float)(int)uVar4;
      param_6._4_4_ = (float)uStackX_10._4_4_;
      SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>
                (param_1,uVar5,lVar2 + 200,&param_6,0);
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar11 + 4;
      if (*(undefined8 **)(param_1 + 0x38) < puVar8) {
        FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x28);
        puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar11 + 4;
      }
      *(undefined8 **)(param_1 + 0x30) = puVar8;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      **(undefined8 **)(param_1 + 8) = puVar11;
      *(undefined8 **)(param_1 + 8) = puVar11 + 1;
      puVar11[1] = 0;
      *puVar11 = &PTR_LAB_143f59410;
      puVar11[2] = 0;
      *(undefined4 *)(puVar11 + 3) = 1;
      *(undefined4 *)((longlong)puVar11 + 0x1c) = 1;
      return;
    }
    if (param_7 == 2) {
      if (param_8 == 0) {
        FUN_141dee790();
        return;
      }
      if (param_8 == 1) {
        FUN_141dea150();
        return;
      }
      if (param_8 == 2) {
        FUN_141debcd0();
        return;
      }
      if (param_8 == 3) {
        FUN_141ded230();
        return;
      }
    }
    else if (param_7 == 4) {
      if (param_8 == 0) {
        FUN_141deeeb0();
        return;
      }
      if (param_8 == 1) {
        FUN_141dea870();
        return;
      }
      if (param_8 == 2) {
        FUN_141dec3f0();
        return;
      }
      if (param_8 == 3) {
        FUN_141ded950();
        return;
      }
    }
    else if (param_7 == 8) {
      if (param_8 == 0) {
        FUN_141def5d0();
        return;
      }
      if (param_8 == 1) {
        FUN_141deaf90();
        return;
      }
      if (param_8 == 2) {
        FUN_141decb10();
        return;
      }
      if (param_8 == 3) {
        FUN_141dee070();
        return;
      }
    }
  }
  return;
}



// FUNCTION 141e07c90 FUN_141e07c90 body=541 status=ok
// SIG undefined FUN_141e07c90(void)

void FUN_141e07c90(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                  longlong param_5,longlong param_6,undefined8 param_7,undefined8 param_8)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined4 local_res8 [2];
  ulonglong uVar8;
  longlong *local_78;
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x38);
  uVar8 = param_4;
  FUN_141d84f90(param_1,param_2,uVar4,param_3,param_4,param_5,param_7,param_8,0);
  sVar1 = *(short *)(param_1 + 0x15c);
  sVar2 = *(short *)(param_1 + 0x162);
  local_res8[0] = 0x3f800000;
  if ((sVar1 == 0) && (sVar2 == 0)) goto LAB_141e07e45;
  if ((param_5 == 0) || (*(char *)(param_4 + 0x11f4) != '\0')) {
LAB_141e07e0f:
    local_68 = 0x3f800000;
    uStack_60 = 0;
    local_58 = 0x3f80000000000000;
    uStack_50 = 0;
    local_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0x3f800000;
    local_48 = 0;
    uStack_40 = 0x3f800000;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_5 + 0x140) + 0xd8);
    cVar6 = FMotionBlurInfoData::GetPrimitiveMotionBlurInfo
                      (lVar3 + 0x5ee0,*(longlong *)(param_5 + 0x140),&local_68);
    if (cVar6 == '\0') {
      if (1 < *(int *)(param_5 + 0x10) - 1U) {
        local_78 = (longlong *)0x0;
        (**(code **)(**(longlong **)(param_6 + 0xa8) + 0x40))
                  (*(longlong **)(param_6 + 0xa8),*(undefined4 *)(lVar3 + 8),local_70,&local_78);
        plVar5 = local_78;
        cVar6 = FUN_14259cbc0(local_78);
        if ((cVar6 == '\0') || (cVar6 = (**(code **)(*plVar5 + 0x1b8))(plVar5), cVar6 == '\0'))
        goto LAB_141e07e0f;
      }
      puVar7 = (undefined8 *)(param_5 + 0x80);
    }
    else {
      puVar7 = &local_68;
    }
    local_68 = *puVar7;
    uStack_60 = puVar7[1];
    local_58 = puVar7[2];
    uStack_50 = puVar7[3];
    local_48 = puVar7[4];
    uStack_40 = puVar7[5];
    local_38 = *(undefined4 *)(puVar7 + 6);
    uStack_34 = *(undefined4 *)((longlong)puVar7 + 0x34);
    uStack_30 = *(undefined4 *)(puVar7 + 7);
    uStack_2c = *(undefined4 *)((longlong)puVar7 + 0x3c);
    local_res8[0] = 0;
  }
LAB_141e07e45:
  if (sVar1 != 0) {
    uVar8 = uVar8 & 0xffffffff00000000;
    SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
              (param_2,uVar4,param_1 + 0x158,&local_68,uVar8);
  }
  if (sVar2 != 0) {
    FUN_1404986d0(param_2,uVar4,param_1 + 0x15e,local_res8,uVar8 & 0xffffffff00000000);
  }
  return;
}



// FUNCTION 141e07eb0 FUN_141e07eb0 body=239 status=ok
// SIG undefined FUN_141e07eb0(void)

void FUN_141e07eb0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  int param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  lVar2 = *(longlong *)(param_4 + 0x78);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  if (lVar2 == 0) {
    lVar2 = param_4;
  }
  FUN_141d84f90(param_1,param_2,*(undefined8 *)(lVar1 + 0x38),param_3,param_7,param_8,
                lVar2 + (longlong)param_5 * 0x78,param_6,0);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
            (param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0x150,param_9);
  return;
}



// FUNCTION 141e07fa0 FUN_141e07fa0 body=422 status=ok
// SIG undefined FUN_141e07fa0(void)

void FUN_141e07fa0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,int param_6,undefined8 param_7)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar7;
  undefined1 local_68 [64];
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  cVar2 = FMotionBlurInfoData::GetPrimitiveMotionBlurInfo
                    (*(longlong *)(param_4 + 0x130) + 0x5ee0,*(undefined8 *)(param_4 + 0x140),
                     local_68);
  puVar3 = local_68;
  if (cVar2 == '\0') {
    puVar3 = (undefined1 *)(param_4 + 0x80);
  }
  FUN_141e07eb0(*(undefined8 *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 8),param_5,
                CONCAT44(uVar7,param_6),param_7,param_3,param_4,puVar3);
  if ((*(longlong *)(param_1 + 0x48) != 0) && (*(longlong *)(param_1 + 0x50) != 0)) {
    lVar5 = (longlong)param_6 * 0x78;
    lVar4 = *(longlong *)(param_5 + 0x78);
    if (*(longlong *)(param_5 + 0x78) == 0) {
      lVar4 = param_5;
    }
    FBaseDS::SetMesh(*(longlong *)(param_1 + 0x50),param_2,*(undefined8 *)(param_1 + 8),param_3,
                     param_4,lVar4 + lVar5,param_7);
    lVar4 = *(longlong *)(param_5 + 0x78);
    if (*(longlong *)(param_5 + 0x78) == 0) {
      lVar4 = param_5;
    }
    FBaseHS::SetMesh(*(undefined8 *)(param_1 + 0x48),param_2,*(undefined8 *)(param_1 + 8),param_3,
                     param_4,lVar4 + lVar5,param_7);
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar4 = *(longlong *)(param_1 + 0x40);
  lVar5 = *(longlong *)(lVar4 + 0x48);
  if (*(char *)(lVar5 + 0x28) == '\0') {
    FUN_1419f3850(lVar5);
  }
  lVar6 = *(longlong *)(param_5 + 0x78);
  if (*(longlong *)(param_5 + 0x78) == 0) {
    lVar6 = param_5;
  }
  FUN_141d84bb0(lVar4,param_2,*(undefined8 *)(lVar5 + 0x40),uVar1,param_3,param_4,
                lVar6 + (longlong)param_6 * 0x78,param_7,(ulonglong)puVar3 & 0xffffffff00000000);
  return;
}



// FUNCTION 141e08150 FUN_141e08150 body=561 status=ok
// SIG undefined FUN_141e08150(void)

void FUN_141e08150(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6,longlong param_7,undefined8 param_8,
                  undefined4 param_9)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  lVar7 = *(longlong *)(param_5 + 0x78);
  if (*(longlong *)(param_5 + 0x78) == 0) {
    lVar7 = param_5;
  }
  lVar6 = (longlong)(int)param_6;
  param_6 = CONCAT44(param_6._4_4_,(undefined4)param_7);
  lVar7 = lVar7 + lVar6 * 0x78;
  lVar6 = *(longlong *)(lVar1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 8);
  if (*(char *)(lVar6 + 0x28) == '\0') {
    FUN_1419f3850(lVar6);
  }
  uVar3 = param_8;
  uVar8 = param_3;
  FUN_141d84f90(lVar1,param_2,*(undefined8 *)(lVar6 + 0x38),uVar2,param_3,param_4,lVar7,param_8,0);
  uVar4 = FUN_14274f980(param_3);
  iVar5 = FUN_1419ef5f0(uVar4);
  if ((iVar5 < 2) || ((uVar4 < 0x1e && ((0x28e71800U >> (uVar4 & 0x1f) & 1) != 0)))) {
    lVar6 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    FUN_1404986d0(param_2,*(undefined8 *)(lVar6 + 0x38),lVar1 + 0x150,&param_6,
                  uVar8 & 0xffffffff00000000);
  }
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    lVar6 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    FUN_141d84270(lVar1,param_2,*(undefined8 *)(lVar6 + 0x58),uVar2,param_3,param_4,lVar7,uVar3,0);
    lVar6 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    FUN_141cd46a0(param_2,*(undefined8 *)(lVar6 + 0x58),lVar1 + 0x150,&param_7,
                  param_3 & 0xffffffff00000000);
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  lVar1 = *(longlong *)(param_1 + 0x48);
  lVar6 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar6 + 0x28) == '\0') {
    FUN_1419f3850(lVar6);
  }
  param_9 = 0;
  param_6 = param_4;
  param_7 = lVar7;
  param_8 = uVar3;
  FUN_141d84bb0(lVar1,param_2,*(undefined8 *)(lVar6 + 0x40),uVar2);
  return;
}



// FUNCTION 141e08390 FUN_141e08390 body=274 status=ok
// SIG undefined FUN_141e08390(void)

void FUN_141e08390(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5,longlong param_6,undefined8 param_7,byte param_8)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x38);
  FUN_141aa8c40(param_1,param_2,uVar2,param_3,param_5,param_6,
                CONCAT44(param_7._4_4_,(uint)param_7) + 0x18,
                *(undefined8 *)(CONCAT44(param_7._4_4_,(uint)param_7) + 0x20));
  SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
            (param_2,uVar2,param_1 + 0x150,*(undefined8 *)(param_6 + 0x2fb0));
  if (*(short *)(param_1 + 0x16e) != 0) {
    param_7._0_4_ = (uint)param_8;
    param_5 = param_5 & 0xffffffff00000000;
    FUN_1404986d0(param_2,uVar2,param_1 + 0x16a,&param_7,param_5);
  }
  if (*(short *)(param_1 + 0x168) != 0) {
    param_7._0_4_ = 0;
    FUN_1404986d0(param_2,uVar2,param_1 + 0x164,&param_7,param_5 & 0xffffffff00000000);
  }
  return;
}



// FUNCTION 141e084b0 FUN_141e084b0 body=4070 status=ok
// SIG undefined FUN_141e084b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141e084b0(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,
                  longlong param_5,ulonglong param_6,longlong param_7,float param_8,
                  undefined8 param_9,longlong *param_10)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 local_res8 [2];
  uint uVar16;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  uVar2 = *(undefined8 *)(lVar4 + 0x60);
  local_188 = uVar2;
  FUN_141aa9420(param_1,param_2,uVar2,*(undefined8 *)(param_3 + 0x20));
  uVar3 = *(undefined8 *)(DAT_146ac3e30 + 0x30);
  if (param_6 != 0) {
    uVar3 = *(undefined8 *)(param_6 + 0x10);
  }
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144d92090;
    puVar8[2] = uVar2;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar3;
  }
  lVar4 = param_7;
  if (param_7 == 0) {
    lVar4 = *(longlong *)(DAT_146ac3e30 + 0x30);
  }
  uVar3 = FUN_141a156e0();
  if (*(short *)(param_1 + 0xc6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc4);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144d92090;
    puVar8[2] = uVar2;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = lVar4;
  }
  if (*(short *)(param_1 + 0xca) != 0) {
    uVar1 = *(ushort *)(param_1 + 200);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144dcb3b8;
    puVar8[2] = uVar2;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar3;
  }
  lVar4 = 0;
  FUN_141df05b0(param_1 + 0xcc,param_2,&local_188,param_3,param_4);
  iVar11 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      if (*(undefined **)(*(longlong *)(param_1 + 8) + lVar4 * 8) == &DAT_146a1ea50) {
        if (iVar11 != -1) {
          puVar13 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar11 * 8);
          *puVar13 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141e0876e;
        }
        break;
      }
      iVar11 = iVar11 + 1;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a25428) {
    _Init_thread_header(&DAT_146a25428);
    if (DAT_146a25428 == -1) {
      _DAT_146a25420 = 0;
      DAT_146a25424 = 0;
      DAT_146a25426 = 0;
      _Init_thread_footer(&DAT_146a25428);
    }
  }
  puVar13 = (undefined4 *)&DAT_146a25420;
LAB_141e0876e:
  FUN_141b51b30(param_2,uVar2,puVar13,*(longlong *)(param_3 + 0x1a30) + 0x280);
  param_4 = param_4 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
            (param_2,uVar2,param_1 + 0x118,param_9,param_4);
  uVar16 = (uint)(param_4 >> 0x20);
  uVar3 = *(undefined8 *)(DAT_146ac3d68 + 0x30);
  if (*param_10 != 0) {
    uVar3 = *(undefined8 *)(*param_10 + 0x10);
  }
  uVar5 = FUN_141a156e0();
  if (*(short *)(param_1 + 0x120) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x11e);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    *puVar8 = &PTR_LAB_144d92090;
    puVar8[2] = uVar2;
    puVar8[4] = uVar3;
  }
  if (*(short *)(param_1 + 0x124) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x122);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144dcb3b8;
    puVar8[2] = uVar2;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar5;
  }
  fVar15 = 0.0;
  lVar4 = *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x20);
  FDistanceFieldAOParameters::FDistanceFieldAOParameters
            (&local_178,*(undefined4 *)(lVar4 + 0x5fe8),0);
  lVar4 = *(longlong *)(lVar4 + 0x1150);
  if (((lVar4 == 0) || (*(char *)(lVar4 + 0x29) != '\0')) ||
     ((*(uint *)(*(longlong *)(param_3 + 0x10) + 0x2c) & 0x8000000) == 0)) {
    param_6 = (ulonglong)param_6._4_4_ << 0x20;
    uVar7 = (ulonglong)uVar16 << 0x20;
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,uVar2,param_1 + 300,&param_6,uVar7);
    param_6 = param_6 & 0xffffffff00000000;
    uVar7 = uVar7 & 0xffffffff00000000;
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,uVar2,param_1 + 0x132,&param_6,uVar7);
    uVar7 = uVar7 & 0xffffffff00000000;
    local_188 = 0;
    uStack_180 = 0;
    FUN_141a120e0(param_2,uVar2,param_1 + 0x138,&local_188,uVar7);
    uVar3 = CONCAT44((int)(uVar7 >> 0x20),1);
    local_188 = 0;
    uStack_180 = 0;
    FUN_141a120e0(param_2,uVar2,param_1 + 0x138,&local_188,uVar3);
    uVar7 = CONCAT44((int)((ulonglong)uVar3 >> 0x20),2);
    local_188 = 0;
    uStack_180 = 0;
    FUN_141a120e0(param_2,uVar2,param_1 + 0x138,&local_188,uVar7);
  }
  else {
    if ((*(char *)(lVar4 + 0x28) == '\0') || (*(char *)(lVar4 + 0x27) == '\0')) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0x3f800000;
    }
    param_6 = CONCAT44(param_6._4_4_,uVar14);
    uVar7 = (ulonglong)uVar16 << 0x20;
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,uVar2,param_1 + 300,&param_6,uVar7);
    uVar7 = uVar7 & 0xffffffff00000000;
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,uVar2,param_1 + 0x132,lVar4 + 0x108,uVar7);
    uVar7 = uVar7 & 0xffffffff00000000;
    FUN_141a120e0(param_2,uVar2,param_1 + 0x138,lVar4 + 0x70,uVar7);
    uVar3 = CONCAT44((int)(uVar7 >> 0x20),1);
    FUN_141a120e0(param_2,uVar2,param_1 + 0x138,lVar4 + 0xa0,uVar3);
    uVar7 = CONCAT44((int)((ulonglong)uVar3 >> 0x20),2);
    FUN_141a120e0(param_2,uVar2,param_1 + 0x138,lVar4 + 0xd0,uVar7);
    puVar6 = (undefined8 *)
             FDistanceFieldAOParameters::FDistanceFieldAOParameters
                       (&local_188,*(undefined4 *)(lVar4 + 0x10c),*(undefined4 *)(lVar4 + 0x110));
    local_178 = *puVar6;
    local_170 = *(undefined4 *)(puVar6 + 1);
  }
  local_res8[0] = 0;
  uVar16 = *(uint *)(*(longlong *)(param_3 + 0x10) + 0x28);
  if (((uVar16 >> 8 & 1) != 0) && ((int)uVar16 < 0)) {
    local_res8[0] = *(undefined4 *)(param_5 + 0x94);
  }
  uVar7 = uVar7 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar2,param_1 + 0x126,local_res8,uVar7);
  uVar7 = uVar7 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar2,param_1 + 0x13e,param_5 + 0x68,uVar7);
  uVar7 = uVar7 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar2,param_1 + 0x144,&DAT_1464c36ec,uVar7);
  if (*(char *)(param_5 + 0x98) == '\0') {
    uVar14 = 0;
  }
  else {
    uVar14 = 0x3f800000;
  }
  param_6 = CONCAT44(param_6._4_4_,uVar14);
  uVar7 = uVar7 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar2,param_1 + 0x14a,&param_6,uVar7);
  if (param_8._0_1_ != '\0') {
    fVar15 = 1.0;
  }
  uVar7 = uVar7 & 0xffffffff00000000;
  param_8 = fVar15;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar2,param_1 + 0x150,&param_8,uVar7);
  uVar14 = (undefined4)(uVar7 >> 0x20);
  FAOParameters::Set<FRHIComputeShader_*>(param_1 + 0x156,param_2,uVar2,&local_178);
  if ((*(short *)(param_1 + 0x198) != 0) || (*(short *)(param_1 + 0x19e) != 0)) {
    lVar4 = *(longlong *)(param_3 + 0x1d40);
    if (lVar4 == 0) {
      lVar4 = *(longlong *)(DAT_146ac3e30 + 0x30);
    }
    param_6 = FUN_141b33a40();
    if (*(short *)(param_1 + 0x176) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x174);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar8 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar8;
      *(undefined8 **)(param_2 + 8) = puVar8 + 1;
      puVar8[1] = 0;
      *(uint *)(puVar8 + 3) = (uint)uVar1;
      *puVar8 = &PTR_LAB_144d92090;
      puVar8[2] = uVar2;
      puVar8[4] = lVar4;
    }
    uVar3 = param_6;
    if (*(short *)(param_1 + 0x186) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x184);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar8 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar8;
      *(undefined8 **)(param_2 + 8) = puVar8 + 1;
      puVar8[1] = 0;
      *puVar8 = &PTR_LAB_144dcb3b8;
      puVar8[2] = uVar2;
      *(uint *)(puVar8 + 3) = (uint)uVar1;
      puVar8[4] = uVar3;
    }
    lVar4 = *(longlong *)(param_3 + 0x1d48);
    if (lVar4 == 0) {
      lVar4 = *(longlong *)(DAT_146ac3e30 + 0x30);
    }
    param_6 = FUN_141b33a40();
    if (*(short *)(param_1 + 0x17a) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x178);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar8 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar8;
      *(undefined8 **)(param_2 + 8) = puVar8 + 1;
      puVar8[1] = 0;
      *(uint *)(puVar8 + 3) = (uint)uVar1;
      *puVar8 = &PTR_LAB_144d92090;
      puVar8[2] = uVar2;
      puVar8[4] = lVar4;
    }
    uVar3 = param_6;
    if (*(short *)(param_1 + 0x18a) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x188);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar8 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar8;
      *(undefined8 **)(param_2 + 8) = puVar8 + 1;
      puVar8[1] = 0;
      *puVar8 = &PTR_LAB_144dcb3b8;
      puVar8[2] = uVar2;
      *(uint *)(puVar8 + 3) = (uint)uVar1;
      puVar8[4] = uVar3;
    }
    lVar4 = *(longlong *)(param_3 + 0x1d50);
    if (lVar4 == 0) {
      lVar4 = *(longlong *)(DAT_146ac3e30 + 0x30);
    }
    param_6 = FUN_141b33a40();
    if (*(short *)(param_1 + 0x17e) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x17c);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar8 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar8;
      *(undefined8 **)(param_2 + 8) = puVar8 + 1;
      puVar8[1] = 0;
      *(uint *)(puVar8 + 3) = (uint)uVar1;
      *puVar8 = &PTR_LAB_144d92090;
      puVar8[2] = uVar2;
      puVar8[4] = lVar4;
    }
    uVar3 = param_6;
    if (*(short *)(param_1 + 0x18e) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x18c);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar8 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar8;
      *(undefined8 **)(param_2 + 8) = puVar8 + 1;
      puVar8[1] = 0;
      *puVar8 = &PTR_LAB_144dcb3b8;
      puVar8[2] = uVar2;
      *(uint *)(puVar8 + 3) = (uint)uVar1;
      puVar8[4] = uVar3;
    }
    lVar4 = *(longlong *)(param_3 + 0x1d58);
    if (lVar4 == 0) {
      lVar4 = *(longlong *)(DAT_146ac3e30 + 0x30);
    }
    param_6 = FUN_141b33a40();
    if (*(short *)(param_1 + 0x182) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x180);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar8 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar8;
      *(undefined8 **)(param_2 + 8) = puVar8 + 1;
      puVar8[1] = 0;
      *(uint *)(puVar8 + 3) = (uint)uVar1;
      *puVar8 = &PTR_LAB_144d92090;
      puVar8[2] = uVar2;
      puVar8[4] = lVar4;
    }
    uVar3 = param_6;
    if (*(short *)(param_1 + 0x192) != 0) {
      uVar1 = *(ushort *)(param_1 + 400);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar8 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar8;
      *(undefined8 **)(param_2 + 8) = puVar8 + 1;
      puVar8[1] = 0;
      *puVar8 = &PTR_LAB_144dcb3b8;
      puVar8[2] = uVar2;
      *(uint *)(puVar8 + 3) = (uint)uVar1;
      puVar8[4] = uVar3;
    }
    uVar3 = CONCAT44(uVar14,4);
    FUN_141aace20(param_2,uVar2,param_1 + 0x194,param_3 + 0x1cc0,uVar3,0);
    uVar7 = CONCAT44((int)((ulonglong)uVar3 >> 0x20),4);
    FUN_141aace20(param_2,uVar2,param_1 + 0x19a,param_3 + 0x1d00,uVar7,0);
    uVar7 = uVar7 & 0xffffffff00000000;
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,uVar2,param_1 + 0x1a0,param_3 + 0x1d60,uVar7);
    param_8 = 1.0 / *(float *)(param_3 + 0x1d60);
    uVar7 = uVar7 & 0xffffffff00000000;
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,uVar2,param_1 + 0x1a6,&param_8,uVar7);
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,uVar2,param_1 + 0x1ac,param_3 + 0x1d64,uVar7 & 0xffffffff00000000);
  }
  lVar4 = 0;
  local_168 = 0;
  uStack_164 = 0;
  uStack_160 = 0;
  uStack_15c = 0x3f800000;
  local_158 = 0;
  uStack_154 = 0;
  uStack_150 = 0;
  uStack_14c = 0x3f800000;
  local_148 = 0;
  uStack_144 = 0;
  uStack_140 = 0;
  uStack_13c = 0x3f800000;
  local_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_10c = 0x3f800000;
  local_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0x3f800000;
  FUN_141b45c30(param_3,0);
  iVar11 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      if (*(undefined **)(*(longlong *)(param_1 + 8) + lVar4 * 8) == &DAT_146a177d0) {
        if (iVar11 != -1) {
          puVar13 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar11 * 8);
          *puVar13 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141e09204;
        }
        break;
      }
      iVar11 = iVar11 + 1;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a1c410) {
    _Init_thread_header(&DAT_146a1c410);
    if (DAT_146a1c410 == -1) {
      _DAT_146a1c408 = 0;
      DAT_146a1c40c = 0;
      DAT_146a1c40e = 0;
      _Init_thread_footer(&DAT_146a1c410);
    }
  }
  puVar13 = (undefined4 *)&DAT_146a1c408;
LAB_141e09204:
  FUN_141df6020(param_2,uVar2,puVar13);
  lVar4 = FSceneRenderTargets::Get(param_2);
  puVar13 = (undefined4 *)&DAT_146a612d8;
  iVar11 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar9 = 0;
    do {
      if (*(undefined **)(*(longlong *)(param_1 + 8) + lVar9 * 8) == &DAT_146a81840) {
        if (iVar11 != -1) {
          puVar12 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar11 * 8);
          *puVar12 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141e092ad;
        }
        break;
      }
      iVar11 = iVar11 + 1;
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a612e0) {
    _Init_thread_header(&DAT_146a612e0);
    if (DAT_146a612e0 == -1) {
      _DAT_146a612d8 = 0;
      DAT_146a612dc = 0;
      DAT_146a612de = 0;
      _Init_thread_footer(&DAT_146a612e0);
    }
  }
  puVar12 = (undefined4 *)&DAT_146a612d8;
LAB_141e092ad:
  if (*(char *)((longlong)puVar12 + 6) != '\0') {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0x3f800000;
    FUN_141d4f100(lVar4,param_3,&local_c8);
    uVar7 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      uVar10 = uVar7;
      do {
        iVar11 = (int)uVar10;
        if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar7 * 8) == &DAT_146a81840) {
          if (iVar11 != -1) {
            puVar13 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar11 * 8);
            *puVar13 = *(undefined4 *)(param_1 + 0xb8);
            goto LAB_141e09358;
          }
          break;
        }
        uVar10 = (ulonglong)(iVar11 + 1);
        uVar7 = uVar7 + 1;
      } while ((longlong)uVar7 < (longlong)*(int *)(param_1 + 0x10));
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146a612e0) {
      _Init_thread_header(&DAT_146a612e0);
      if (DAT_146a612e0 == -1) {
        _DAT_146a612d8 = 0;
        DAT_146a612dc = 0;
        DAT_146a612de = 0;
        _Init_thread_footer(&DAT_146a612e0);
      }
    }
LAB_141e09358:
    FUN_141df6100(param_2,uVar2,puVar13,&local_c8);
  }
  if (*(short *)(param_1 + 0x1b4) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1b2);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    if (*(char *)(param_3 + 0x1207) == '\0') {
      lVar4 = *(longlong *)(lVar4 + 0x438);
    }
    else {
      lVar4 = *(longlong *)(lVar4 + 0x430);
    }
    uVar3 = *(undefined8 *)(lVar4 + 0x10);
    puVar8 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    puVar6[4] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[2] = uVar2;
    *puVar6 = &PTR_LAB_144dcb360;
  }
  return;
}



// FUNCTION 141e094a0 FUN_141e094a0 body=830 status=ok
// SIG undefined FUN_141e094a0(void)

void FUN_141e094a0(longlong param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 local_res8;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  uVar3 = *(undefined8 *)(lVar4 + 0x40);
  FUN_141aa9590(param_1,param_2,uVar3,*(undefined8 *)(param_3 + 0x20));
  lVar4 = FSceneRenderTargets::Get(param_2);
  lVar5 = (**(code **)(**(longlong **)(lVar4 + 0x210) + 0x10))();
  iVar2 = *(int *)(lVar5 + 0x14);
  lVar5 = (**(code **)(**(longlong **)(lVar4 + 0x210) + 0x10))();
  local_40 = 1.0 / (float)iVar2;
  local_44 = (float)*(int *)(lVar5 + 0x18);
  local_3c = 1.0 / local_44;
  local_48 = (float)iVar2;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,uVar3,param_1 + 0xd0,&local_48,0);
  uVar7 = *(undefined8 *)(*(longlong *)(lVar4 + 0x210) + 0x10);
  if (*(short *)(param_1 + 0xdc) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xda);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_143f59c80;
    puVar8[2] = uVar3;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar7;
  }
  uVar7 = *(undefined8 *)(*(longlong *)(lVar4 + 0x220) + 8);
  if (*(short *)(param_1 + 0xd8) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd6);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_143f59c80;
    puVar8[2] = uVar3;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar7;
  }
  uVar7 = FUN_141a156e0();
  if (*(short *)(param_1 + 0xe0) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xde);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_143f59c70;
    puVar8[2] = uVar3;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar7;
  }
  uVar7 = FUN_1404a0e20();
  if (*(short *)(param_1 + 0xe4) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xe2);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_143f59c70;
    puVar8[2] = uVar3;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar7;
  }
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  local_res8 = *(undefined8 *)(lVar4 + 0x40);
  FUN_141aa6800(param_1 + 0xc0,param_2,&local_res8,*(undefined4 *)(param_3 + 0x1a38),0xf);
  return;
}



// FUNCTION 141e097e0 FUN_141e097e0 body=979 status=ok
// SIG undefined FUN_141e097e0(void)

void FUN_141e097e0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong *param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
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
  longlong *plVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  ulonglong local_res8;
  ulonglong uVar24;
  float local_e8;
  undefined4 local_e4;
  float local_e0;
  undefined4 local_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
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
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  plVar19 = param_5;
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  local_res8 = 0;
  (**(code **)(*param_5 + 0x40))(param_5,*(undefined4 *)(param_3 + 0x1a38),&param_5,&local_res8);
  uVar24 = local_res8;
  FUN_141d857a0(param_1,param_2,uVar3,plVar19,local_res8,param_3,param_3 + 0x20,0);
  local_e0 = 0.0;
  local_dc = 0x3f800000;
  cVar1 = (char)(*(longlong **)(param_4 + 0x30))[0x31];
  if (cVar1 == '\x02') {
    fVar20 = (float)(**(code **)(**(longlong **)(param_4 + 0x30) + 0x20))();
    local_e8 = _guard_xfg_dispatch_icall_nop(fVar20);
  }
  else {
    local_e8 = 1.0;
    if (cVar1 == '\x01') goto LAB_141e098b5;
  }
  local_dc = 0;
LAB_141e098b5:
  if (cVar1 == '\x02') {
    local_e0 = 1.0;
  }
  local_e4 = 0x3f800000;
  uVar24 = uVar24 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,uVar3,param_1 + 0x110,&local_e8,uVar24);
  uVar24 = uVar24 & 0xffffffff00000000;
  local_e4 = *(undefined4 *)(*(longlong *)(param_4 + 0x30) + 0x168);
  local_e8 = *(float *)(*(longlong *)(param_4 + 0x30) + 0x164);
  local_e0 = 0.0;
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,uVar3,param_1 + 0x116,&local_e8,uVar24);
  if (*(short *)(param_1 + 0x120) != 0) {
    lVar2 = *(longlong *)(param_4 + 0x30);
    local_e0 = *(float *)(lVar2 + 0x160);
    fVar21 = 1.0 / (float)((ulonglong)*(undefined8 *)(lVar2 + 0x158) >> 0x20);
    fVar20 = *(float *)(lVar2 + 0x30);
    fVar4 = *(float *)(lVar2 + 0x34);
    fVar5 = *(float *)(lVar2 + 0x38);
    fVar6 = *(float *)(lVar2 + 0x3c);
    fVar7 = *(float *)(lVar2 + 0x40);
    fVar8 = *(float *)(lVar2 + 0x44);
    fVar9 = *(float *)(lVar2 + 0x48);
    fVar10 = *(float *)(lVar2 + 0x4c);
    fVar11 = *(float *)(lVar2 + 0x50);
    fVar12 = *(float *)(lVar2 + 0x54);
    fVar13 = *(float *)(lVar2 + 0x58);
    fVar14 = *(float *)(lVar2 + 0x5c);
    fVar23 = 1.0 / local_e0;
    fVar22 = 1.0 / (float)*(undefined8 *)(lVar2 + 0x158);
    fVar15 = *(float *)(lVar2 + 0x60);
    fVar16 = *(float *)(lVar2 + 100);
    fVar17 = *(float *)(lVar2 + 0x68);
    fVar18 = *(float *)(lVar2 + 0x6c);
    local_d8 = fVar4 * 0.0 + fVar20 * fVar23 + fVar5 * 0.0 + fVar6 * 0.0;
    fStack_c4 = fVar7 * 0.0 + fVar8 * fVar21 + fVar9 * 0.0 + fVar10 * 0.0;
    _fStack_d4 = CONCAT44(fVar4 * 0.0 + fVar20 * 0.0 + fVar5 * fVar22 + fVar6 * 0.0,
                          fVar4 * fVar21 + fVar20 * 0.0 + fVar5 * 0.0 + fVar6 * 0.0);
    _fStack_cc = CONCAT44(fVar7 * fVar23 + fVar8 * 0.0 + fVar9 * 0.0 + fVar10 * 0.0,
                          fVar4 * 0.0 + fVar20 * 0.0 + fVar5 * 0.0 + fVar6 * 1.0);
    _fStack_c0 = CONCAT44(fVar7 * 0.0 + fVar8 * 0.0 + fVar9 * 0.0 + fVar10 * 1.0,
                          fVar7 * 0.0 + fVar8 * 0.0 + fVar9 * fVar22 + fVar10 * 0.0);
    uVar24 = uVar24 & 0xffffffff00000000;
    fStack_b0 = fVar11 * 0.0 + fVar12 * 0.0 + fVar13 * fVar22 + fVar14 * 0.0;
    fStack_ac = fVar11 * 0.0 + fVar12 * 0.0 + fVar13 * 0.0 + fVar14 * 1.0;
    _local_b8 = CONCAT44(fVar11 * 0.0 + fVar12 * fVar21 + fVar13 * 0.0 + fVar14 * 0.0,
                         fVar11 * fVar23 + fVar12 * 0.0 + fVar13 * 0.0 + fVar14 * 0.0);
    local_a8 = fVar16 * 0.0 + fVar15 * fVar23 + fVar17 * 0.0 + fVar18 * 0.0;
    fStack_a4 = fVar16 * fVar21 + fVar15 * 0.0 + fVar17 * 0.0 + fVar18 * 0.0;
    fStack_a0 = fVar16 * 0.0 + fVar15 * 0.0 + fVar17 * fVar22 + fVar18 * 0.0;
    fStack_9c = fVar16 * 0.0 + fVar15 * 0.0 + fVar17 * 0.0 + fVar18 * 1.0;
    SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
              (param_2,uVar3,param_1 + 0x11c,&local_d8,uVar24);
  }
  uVar24 = uVar24 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>
            (param_2,uVar3,param_1 + 0x122,&param_6,uVar24);
  SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
            (param_2,uVar3,param_1 + 0x128,param_7,uVar24 & 0xffffffff00000000);
  return;
}



// FUNCTION 141e09bc0 FUN_141e09bc0 body=767 status=ok
// SIG undefined FUN_141e09bc0(void)

void FUN_141e09bc0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  void *_Dst;
  ulonglong _Size;
  undefined8 in_stack_ffffffffffffff68;
  uint uVar11;
  ulonglong uVar10;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  float local_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar11 = (uint)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  lVar5 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar5 + 0x28) == '\0') {
    FUN_1419f3850(lVar5);
  }
  uVar10 = (ulonglong)uVar11 << 0x20;
  FUN_1404986d0(param_2,*(undefined8 *)(lVar5 + 0x38),param_1 + 0xc0,&stack0x00000030,uVar10);
  lVar5 = *(longlong *)(param_1 + 0x48);
  fVar1 = param_5[1];
  fVar2 = param_5[2];
  fVar3 = *param_5;
  fStack_80 = *(float *)(param_3 + 0x548) * 1.0 + fVar2 * *(float *)(param_3 + 0x538) +
              fVar1 * *(float *)(param_3 + 0x528) + fVar3 * *(float *)(param_3 + 0x518);
  _local_88 = CONCAT44(*(float *)(param_3 + 0x544) * 1.0 + fVar2 * *(float *)(param_3 + 0x534) +
                       fVar1 * *(float *)(param_3 + 0x524) + fVar3 * *(float *)(param_3 + 0x514),
                       *(float *)(param_3 + 0x540) * 1.0 + fVar2 * *(float *)(param_3 + 0x530) +
                       fVar1 * *(float *)(param_3 + 0x520) + fVar3 * *(float *)(param_3 + 0x510));
  fStack_7c = param_5[3];
  if (*(char *)(lVar5 + 0x28) == '\0') {
    FUN_1419f3850(lVar5);
  }
  uVar6 = *(undefined8 *)(lVar5 + 0x38);
  uVar11 = (uint)*(ushort *)(param_1 + 0xca);
  if (0xf < *(ushort *)(param_1 + 0xca)) {
    uVar11 = 0x10;
  }
  _Size = (ulonglong)uVar11;
  if (uVar11 != 0) {
    uVar4 = *(ushort *)(param_1 + 200);
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    param_5 = (float *)CONCAT44(param_5._4_4_,(uint)*(ushort *)(param_1 + 0xc6));
    uVar7 = (longlong)_Dst + _Size;
    if (*(ulonglong *)(param_2 + 0x38) < uVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar11 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar7 = (longlong)_Dst + _Size;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar7;
    _guard_xfg_dispatch_icall_nop(_Dst,&local_88,_Size);
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
    *(undefined4 *)(puVar9 + 4) = param_5._0_4_;
    *(uint *)((longlong)puVar9 + 0x24) = (uint)uVar4;
    puVar9[2] = uVar6;
    puVar9[3] = _Dst;
    *(uint *)(puVar9 + 5) = uVar11;
  }
  local_78 = *(undefined8 *)(param_3 + 0x390);
  uStack_70 = *(undefined8 *)(param_3 + 0x398);
  lVar5 = *(longlong *)(param_1 + 0x48);
  uStack_50 = *(undefined4 *)(param_3 + 0x3b8);
  uStack_4c = *(undefined4 *)(param_3 + 0x3bc);
  local_68 = *(undefined4 *)(param_3 + 0x3a0);
  uStack_64 = *(undefined4 *)(param_3 + 0x3a4);
  uStack_60 = *(undefined4 *)(param_3 + 0x3a8);
  uStack_5c = *(undefined4 *)(param_3 + 0x3ac);
  local_58 = *(float *)(param_3 + 0x3b0) - *(float *)(param_3 + 0x8f0);
  local_48 = *(undefined8 *)(param_3 + 0x3c0);
  uStack_40 = *(undefined8 *)(param_3 + 0x3c8);
  fStack_54 = *(float *)(param_3 + 0x3b4) - *(float *)(param_3 + 0x8f4);
  if (*(char *)(lVar5 + 0x28) == '\0') {
    FUN_1419f3850(lVar5);
  }
  SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
            (param_2,*(undefined8 *)(lVar5 + 0x38),param_1 + 0xcc,&local_78,
             uVar10 & 0xffffffff00000000);
  lVar5 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar5 + 0x28) == '\0') {
    FUN_1419f3850(lVar5);
  }
  param_5 = *(float **)(lVar5 + 0x38);
  FUN_141df1d90(param_1 + 0xd4,param_2,&param_5,param_3,param_4);
  return;
}



// FUNCTION 141e09ec0 FUN_141e09ec0 body=752 status=ok
// SIG undefined FUN_141e09ec0(void)

void FUN_141e09ec0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  uint param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined8 local_res8;
  ulonglong in_stack_ffffffffffffff98;
  longlong local_48;
  undefined1 local_40 [8];
  
  uVar8 = param_5;
  lVar2 = *(longlong *)(param_1 + 0x38);
  plVar3 = *(longlong **)(param_1 + 0x10);
  uVar7 = (undefined1)param_5;
  if (*(short *)(lVar2 + 0x17a) != 0) {
    lVar4 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    param_5 = uVar8 & 0xff;
    in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffff00000000;
    FUN_1404986d0(param_2,*(undefined8 *)(lVar4 + 0x38),lVar2 + 0x176,&param_5,
                  in_stack_ffffffffffffff98);
  }
  if (*(short *)(lVar2 + 0x174) != 0) {
    lVar4 = *(longlong *)(lVar2 + 0x48);
    param_5 = 0;
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    FUN_1404986d0(param_2,*(undefined8 *)(lVar4 + 0x38),lVar2 + 0x170,&param_5,
                  in_stack_ffffffffffffff98 & 0xffffffff00000000);
  }
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  local_res8 = 0;
  (**(code **)(*plVar3 + 0x40))(plVar3,*(undefined4 *)(param_4 + 0x1a38),&local_48,&local_res8);
  uVar6 = local_res8;
  lVar4 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  FUN_141aa8c40(lVar2,param_2,*(undefined8 *)(lVar4 + 0x38),plVar3,uVar6,param_4,param_3 + 0x18,
                uVar5);
  plVar3 = *(longlong **)(param_1 + 0x10);
  lVar2 = *(longlong *)(param_1 + 0x40);
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  local_res8 = 0;
  (**(code **)(*plVar3 + 0x40))(plVar3,*(undefined4 *)(param_4 + 0x1a38),&local_48,&local_res8);
  uVar6 = local_res8;
  lVar4 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  lVar1 = param_3 + 0x18;
  FUN_141aa87d0(lVar2,param_2,*(undefined8 *)(lVar4 + 0x40),plVar3,uVar6,param_4,lVar1,uVar5);
  if ((*(longlong *)(param_1 + 0x48) != 0) && (*(longlong *)(param_1 + 0x50) != 0)) {
    FUN_141ad6a40(*(longlong *)(param_1 + 0x48),param_2,*(undefined8 *)(param_1 + 0x10),param_4,
                  lVar1,*(undefined8 *)(param_3 + 0x20));
    plVar3 = *(longlong **)(param_1 + 0x10);
    uVar5 = *(undefined8 *)(param_3 + 0x20);
    lVar2 = *(longlong *)(param_1 + 0x50);
    local_res8 = 0;
    local_48 = lVar2;
    (**(code **)(*plVar3 + 0x40))(plVar3,*(undefined4 *)(param_4 + 0x1a38),local_40,&local_res8);
    uVar6 = local_res8;
    lVar2 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    FUN_141aa7ef0(local_48,param_2,*(undefined8 *)(lVar2 + 0x50),plVar3,uVar6,param_4,lVar1,uVar5);
  }
  param_5 = CONCAT31(param_5._1_3_,uVar7);
  FUN_141b45c10(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 141e0a1b0 FUN_141e0a1b0 body=1020 status=ok
// SIG undefined FUN_141e0a1b0(void)

void FUN_141e0a1b0(longlong param_1,undefined8 param_2,longlong param_3,ulonglong param_4,
                  undefined8 param_5,undefined1 param_6,longlong param_7)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined8 local_res18;
  ulonglong local_res20;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  float local_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  float local_88;
  float fStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [48];
  
  lVar8 = param_7;
  local_res20 = param_4;
  FUN_141b45c10(param_1,param_2,param_7,param_3,param_6);
  plVar1 = *(longlong **)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(lVar8 + 0x20);
  lVar3 = *(longlong *)(param_1 + 0x38);
  param_7 = 0;
  (**(code **)(*plVar1 + 0x40))(plVar1,*(undefined4 *)(param_3 + 0x1a38),local_68,&param_7);
  lVar4 = *(longlong *)(lVar3 + 0x48);
  local_res18 = param_7;
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  lVar12 = lVar8 + 0x18;
  FUN_141aa8c40(lVar3,param_2,*(undefined8 *)(lVar4 + 0x38),plVar1,local_res18,param_3,lVar12,uVar2,
                lVar12);
  uVar9 = FUN_14274f980(param_3);
  iVar10 = FUN_1419ef5f0(uVar9);
  fVar7 = param_5._4_4_;
  fVar5 = (float)param_5;
  if ((iVar10 < 2) || ((uVar9 < 0x1e && ((0x28e71800U >> (uVar9 & 0x1f) & 1) != 0)))) {
    lVar4 = *(longlong *)(lVar3 + 0x48);
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    param_5 = *(undefined8 *)(lVar4 + 0x38);
    uVar11 = local_res20;
    FUN_141df1d90(lVar3 + 0x15c,param_2,&param_5,param_3,local_res20);
    uStack_c0 = *(undefined4 *)(param_3 + 0x3b8);
    uStack_bc = *(undefined4 *)(param_3 + 0x3bc);
    lVar4 = *(longlong *)(lVar3 + 0x48);
    local_a8 = *(undefined8 *)(param_3 + 0x390);
    uStack_a0 = *(undefined8 *)(param_3 + 0x398);
    local_98 = *(undefined4 *)(param_3 + 0x3a0);
    uStack_94 = *(undefined4 *)(param_3 + 0x3a4);
    uStack_90 = *(undefined4 *)(param_3 + 0x3a8);
    uStack_8c = *(undefined4 *)(param_3 + 0x3ac);
    local_78 = *(undefined8 *)(param_3 + 0x3c0);
    uStack_70 = *(undefined8 *)(param_3 + 0x3c8);
    local_c8 = (*(float *)(param_3 + 0x3b0) - *(float *)(param_3 + 0x8f0)) + fVar5;
    fStack_c4 = (*(float *)(param_3 + 0x3b4) - *(float *)(param_3 + 0x8f4)) + fVar7;
    local_88 = local_c8;
    fStack_84 = fStack_c4;
    uStack_80 = uStack_c0;
    uStack_7c = uStack_bc;
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
              (param_2,*(undefined8 *)(lVar4 + 0x38),lVar3 + 0x156,&local_a8,
               uVar11 & 0xffffffff00000000);
  }
  lVar3 = *(longlong *)(param_1 + 0x40);
  if (lVar3 != 0) {
    plVar1 = *(longlong **)(param_1 + 0x10);
    param_7 = *(undefined8 *)(lVar8 + 0x20);
    param_5 = 0;
    (**(code **)(*plVar1 + 0x40))(plVar1,*(undefined4 *)(param_3 + 0x1a38),&local_res18,&param_5);
    uVar2 = param_5;
    lVar4 = *(longlong *)(lVar3 + 0x48);
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    FUN_141af68c0(lVar3,param_2,*(undefined8 *)(lVar4 + 0x58),plVar1,uVar2,param_3,lVar8 + 0x18,
                  param_7);
    lVar4 = *(longlong *)(lVar3 + 0x48);
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    param_5 = *(undefined8 *)(lVar4 + 0x58);
    uVar11 = local_res20;
    FUN_141df0d90(lVar3 + 0x15c,param_2,&param_5,param_3,local_res20);
    local_88 = *(float *)(param_3 + 0x3b0);
    fStack_84 = *(float *)(param_3 + 0x3b4);
    uStack_c0 = *(undefined4 *)(param_3 + 0x3b8);
    uStack_bc = *(undefined4 *)(param_3 + 0x3bc);
    lVar4 = *(longlong *)(lVar3 + 0x48);
    local_e8 = *(undefined8 *)(param_3 + 0x390);
    uStack_e0 = *(undefined8 *)(param_3 + 0x398);
    local_d8 = *(undefined4 *)(param_3 + 0x3a0);
    uStack_d4 = *(undefined4 *)(param_3 + 0x3a4);
    uStack_d0 = *(undefined4 *)(param_3 + 0x3a8);
    uStack_cc = *(undefined4 *)(param_3 + 0x3ac);
    local_b8 = *(undefined8 *)(param_3 + 0x3c0);
    uStack_b0 = *(undefined8 *)(param_3 + 0x3c8);
    local_c8 = (local_88 - *(float *)(param_3 + 0x8f0)) + fVar5;
    fStack_c4 = (fStack_84 - *(float *)(param_3 + 0x8f4)) + fVar7;
    uStack_80 = uStack_c0;
    uStack_7c = uStack_bc;
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
              (param_2,*(undefined8 *)(lVar4 + 0x58),lVar3 + 0x156,&local_e8,
               uVar11 & 0xffffffff00000000);
  }
  plVar1 = *(longlong **)(param_1 + 0x10);
  lVar3 = *(longlong *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(lVar8 + 0x20);
  param_5 = 0;
  (**(code **)(*plVar1 + 0x40))(plVar1,*(undefined4 *)(param_3 + 0x1a38),&param_7,&param_5);
  uVar6 = param_5;
  lVar4 = *(longlong *)(lVar3 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  FUN_141aa87d0(lVar3,param_2,*(undefined8 *)(lVar4 + 0x40),plVar1,uVar6,param_3,lVar12,uVar2);
  lVar4 = *(longlong *)(lVar3 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  param_5 = *(undefined8 *)(lVar4 + 0x40);
  FUN_141df1670(lVar3 + 0x150,param_2,&param_5,param_3,local_res20);
  return;
}



// FUNCTION 141e0a5b0 SetStateOnCommandList body=84 status=ok
// SIG undefined SetStateOnCommandList(void)

void FTranslucencyPassParallelCommandListSet::SetStateOnCommandList
               (longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FSceneRenderTargets::Get(param_2);
  if (*(char *)(param_1 + 0xbc) != '\0') {
    FUN_141cdec30();
    return;
  }
  FUN_141cdf000(uVar1,param_2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),0);
  return;
}



// FUNCTION 141e0a610 FUN_141e0a610 body=105 status=ok
// SIG undefined FUN_141e0a610(void)

void FUN_141e0a610(longlong param_1,undefined8 param_2)

{
  FUN_141df9f20(param_2,*(undefined8 *)(param_1 + 0xb8),0);
  FUN_141e0a680(param_2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_1 + 0x18,
                *(undefined8 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xc0),
                *(undefined4 *)(param_1 + 0xc4));
  return;
}



// FUNCTION 141e0a680 FUN_141e0a680 body=693 status=ok
// SIG undefined FUN_141e0a680(void)

void FUN_141e0a680(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  
  lVar11 = FSceneRenderTargets::Get();
  uVar9 = *(ulonglong *)(lVar11 + 0x378);
  iVar15 = (int)(uVar9 >> 0x20);
  iVar16 = (int)uVar9;
  if ((*(char *)(param_2 + 0x1209) == '\0') || (*(int *)(param_2 + 0xf60) != 1)) {
    iVar10 = (*(int *)(param_2 + 0x1aa0) * iVar16) / iVar16;
    iVar6 = *(int *)(param_2 + 0x1aa4);
    iVar7 = *(int *)(param_2 + 0x1aa8);
    iVar8 = *(int *)(param_2 + 0x1aac);
    puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar14 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar14 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar14;
    *(undefined8 **)(param_1 + 8) = puVar14 + 1;
    puVar14[1] = 0;
    *(undefined4 *)(puVar14 + 3) = param_6;
    *puVar14 = &PTR_LAB_143f59420;
    *(undefined4 *)((longlong)puVar14 + 0x24) = param_7;
    *(int *)((longlong)puVar14 + 0x14) = (iVar6 * iVar15) / iVar15;
    *(int *)((longlong)puVar14 + 0x1c) = (iVar7 * iVar16) / iVar16;
    *(int *)(puVar14 + 4) = (iVar8 * iVar15) / iVar15;
  }
  else {
    puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    if (*(char *)(param_2 + 0x120a) == '\0') {
      iVar10 = *(int *)(param_3 + 0x2a4);
      iVar6 = *(int *)(param_2 + 0x1aac);
      puVar12 = puVar14 + 5;
      if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
        FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
        puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar14 + 5;
      }
      *(undefined8 **)(param_1 + 0x30) = puVar12;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      **(undefined8 **)(param_1 + 8) = puVar14;
      *(undefined8 **)(param_1 + 8) = puVar14 + 1;
      puVar14[1] = 0;
      *puVar14 = &PTR_LAB_143f59420;
      puVar14[2] = 0;
      *(undefined4 *)(puVar14 + 3) = 0;
      *(int *)((longlong)puVar14 + 0x1c) =
           (int)((ulonglong)(uint)(iVar10 * iVar16) / (uVar9 & 0xffffffff));
      *(int *)(puVar14 + 4) = (iVar6 * iVar15) / iVar15;
      *(undefined4 *)((longlong)puVar14 + 0x24) = 0x3f800000;
      goto LAB_141e0a90a;
    }
    lVar11 = *(longlong *)(param_3 + 0xc0);
    iVar10 = *(int *)(lVar11 + 0x1aa0);
    uVar1 = *(undefined4 *)(lVar11 + 0x1aa8);
    uVar2 = *(undefined4 *)(lVar11 + 0x4b70);
    uVar3 = *(undefined4 *)(lVar11 + 0x4b78);
    uVar4 = *(undefined4 *)(lVar11 + 0x1aac);
    uVar5 = *(undefined4 *)(lVar11 + 0x4b7c);
    puVar12 = puVar14 + 7;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x40);
      puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar14 + 7;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar14;
    *(undefined8 **)(param_1 + 8) = puVar14 + 1;
    puVar14[1] = 0;
    *(undefined4 *)(puVar14 + 4) = param_6;
    *puVar14 = &PTR_LAB_144dc9c30;
    *(undefined4 *)((longlong)puVar14 + 0x2c) = uVar4;
    *(undefined4 *)(puVar14 + 6) = uVar5;
    *(undefined4 *)((longlong)puVar14 + 0x34) = param_7;
    *(undefined4 *)((longlong)puVar14 + 0x14) = uVar2;
    puVar14[3] = 0;
    *(undefined4 *)((longlong)puVar14 + 0x24) = uVar1;
    *(undefined4 *)(puVar14 + 5) = uVar3;
  }
  *(int *)(puVar14 + 2) = iVar10;
LAB_141e0a90a:
  uVar13 = FUN_1404a0ce0();
  *param_4 = uVar13;
  uVar13 = FUN_141abfb70();
  *(undefined4 *)(param_4 + 5) = 0;
  param_4[1] = uVar13;
  return;
}



// FUNCTION 141e0a940 FUN_141e0a940 body=691 status=ok
// SIG undefined FUN_141e0a940(void)

void FUN_141e0a940(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

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
  
  *(undefined1 *)(param_1 + 0x78) = 1;
  iVar4 = DAT_1464a820c;
  if (((DAT_146ac32c8 != 0x800) && (iVar4 = DAT_1464a8208, DAT_146ac32c8 != 0x1000)) ||
     (uVar3 = DAT_146ac32d0, iVar4 != 0)) {
    uVar3 = DAT_146ac32cc | DAT_146ac32c8;
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
          goto LAB_141e0ab47;
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
LAB_141e0ab47:
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



// FUNCTION 141e0ac00 FUN_141e0ac00 body=611 status=ok
// SIG undefined FUN_141e0ac00(void)

void FUN_141e0ac00(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

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
  
  iVar11 = 0;
  *(undefined1 *)(param_1 + 0x70) = 1;
  *(undefined4 *)(param_1 + 8) = DAT_1464a8214;
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
          goto LAB_141e0adb7;
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
LAB_141e0adb7:
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



// FUNCTION 141e0ae70 FUN_141e0ae70 body=678 status=ok
// SIG undefined FUN_141e0ae70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141e0ae70(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong local_res8;
  longlong local_res10;
  undefined8 local_c8;
  undefined4 local_c0;
  int local_b8;
  int local_b4;
  int local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined8 local_98;
  undefined4 local_90;
  float local_88;
  float local_84;
  int local_80;
  int local_7c;
  undefined4 local_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_40;
  
  cVar4 = FUN_141e0bba0(*(undefined8 *)(param_1 + 8),param_1 + 0x10);
  uVar6 = 0;
  if (cVar4 == '\0') {
    uVar8 = uVar6;
    if (0 < *(int *)(param_1 + 200)) {
      do {
        lVar1 = *(longlong *)(uVar8 + 0x1ab0 + *(longlong *)(param_1 + 0xc0));
        if (lVar1 != 0) {
          plVar3 = *(longlong **)(lVar1 + 0x13c8);
          *(undefined8 *)(lVar1 + 0x13c8) = 0;
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x30))();
          }
        }
        uVar7 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar7;
        uVar8 = uVar8 + 0x30d0;
      } while ((int)uVar7 < *(int *)(param_1 + 200));
    }
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18f8);
    uVar8 = uVar6;
    if (0 < *(int *)(param_1 + 200)) {
      do {
        lVar2 = *(longlong *)(param_1 + 0xc0);
        local_b8 = ((*(int *)(uVar6 + 0x1aa8 + lVar2) - *(int *)(uVar6 + 0x1aa0 + lVar2)) + -1 +
                   DAT_1464c36d4) / DAT_1464c36d4;
        local_a0 = (float)DAT_1464c36d8;
        local_b0 = DAT_1464c36d8;
        iVar5 = DAT_1464c36d4 + -1 +
                (*(int *)(uVar6 + 0x1aac + lVar2) - *(int *)(uVar6 + 0x1aa4 + lVar2));
        local_b4 = iVar5 / DAT_1464c36d4;
        local_a8 = (float)local_b8;
        local_a4 = (float)local_b4;
        FUN_141e00d60(&local_c8,(longlong)iVar5 % (longlong)DAT_1464c36d4 & 0xffffffff);
        local_98 = local_c8;
        local_90 = local_c0;
        local_80 = DAT_1464c36d4;
        local_7c = DAT_1464c36d4;
        local_88 = 1.0 / (local_a8 * (float)DAT_1464c36d4);
        local_84 = 1.0 / (local_a4 * (float)DAT_1464c36d4);
        local_78 = *(undefined4 *)(lVar1 + 0x90);
        local_68 = *(undefined8 *)(uVar6 + 0x2820 + lVar2);
        local_60 = *(undefined4 *)(uVar6 + 0x2828 + lVar2);
        local_50 = DAT_1468b5d98;
        local_58 = _DAT_1468b5d90;
        if ((*(char *)(uVar6 + 0x2864 + lVar2) != '\0') &&
           (*(longlong *)(uVar6 + 0x2850 + lVar2) == 0)) {
          local_50 = *(undefined4 *)(uVar6 + 0x2884 + lVar2);
          local_58 = CONCAT44(*(undefined4 *)(uVar6 + 0x2880 + lVar2),
                              *(undefined4 *)(uVar6 + 0x287c + lVar2));
          local_40 = local_50;
        }
        (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_res8,&local_b8,&DAT_146aaa448,1);
        local_res10 = local_res8;
        if (local_res8 != 0) {
          LOCK();
          *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
          UNLOCK();
        }
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
        TRefCountPtr<FRHIIndexBuffer>::operator=(lVar2 + 0x2fc0 + uVar6,&local_res10);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
        uVar7 = (int)uVar8 + 1;
        uVar6 = uVar6 + 0x30d0;
        uVar8 = (ulonglong)uVar7;
      } while ((int)uVar7 < *(int *)(param_1 + 200));
    }
  }
  return;
}



// FUNCTION 141e0b120 FUN_141e0b120 body=477 status=ok
// SIG undefined FUN_141e0b120(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141e0b120(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined8 local_48;
  float local_40;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
  cVar2 = FUN_141e0bba0(lVar1);
  if (cVar2 != '\0') {
    lVar1 = *(longlong *)(lVar1 + 0x18f8);
    local_40 = 1.0 / (float)DAT_1464c36d8;
    fVar6 = (float)(((*(int *)(param_1 + 0x1aa8) - *(int *)(param_1 + 0x1aa0)) + -1 + DAT_1464c36d4)
                   / DAT_1464c36d4);
    fVar5 = (float)((DAT_1464c36d4 + -1 + (*(int *)(param_1 + 0x1aac) - *(int *)(param_1 + 0x1aa4)))
                   / DAT_1464c36d4);
    *(ulonglong *)(param_2 + 0xc50) = CONCAT44(1.0 / fVar5,1.0 / fVar6);
    *(float *)(param_2 + 0xc58) = local_40;
    FUN_141e00d60(&local_48,*(undefined4 *)(param_1 + 0x11b0),*(undefined4 *)(lVar1 + 0x90));
    *(undefined8 *)(param_2 + 0xc60) = local_48;
    *(float *)(param_2 + 0xc68) = local_40;
    fVar3 = (float)DAT_1464c36d4;
    *(float *)(param_2 + 0xc70) = 1.0 / (fVar6 * fVar3);
    *(float *)(param_2 + 0xc74) = 1.0 / (fVar5 * fVar3);
    *(undefined4 *)(param_2 + 0xc78) = *(undefined4 *)(lVar1 + 0x90);
    return;
  }
  *(undefined8 *)(param_2 + 0xc50) = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 0xc58) = DAT_1468b5d98;
  *(undefined8 *)(param_2 + 0xc60) = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 0xc68) = DAT_1468b5d98;
  *(undefined8 *)(param_2 + 0xc70) = 0;
  if ((lVar1 == 0) || (*(int *)(lVar1 + 0x1900) < 1)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(*(longlong *)(lVar1 + 0x18f8) + 0x90);
  }
  *(undefined4 *)(param_2 + 0xc78) = uVar4;
  return;
}



// FUNCTION 141e0b320 FUN_141e0b320 body=51 status=ok
// SIG undefined FUN_141e0b320(void)

undefined8 FUN_141e0b320(uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  iVar2 = FUN_1419ef5f0(uVar1);
  if ((2 < iVar2) && ((0x1d < uVar1 || ((0x3fffbf4aU >> (uVar1 & 0x1f) & 1) == 0)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141e0b360 FUN_141e0b360 body=118 status=ok
// SIG undefined FUN_141e0b360(void)

undefined8 FUN_141e0b360(undefined4 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_141ed13a0();
  if (cVar1 != '\0') {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if (((param_2 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) &&
       (cVar1 = FUN_141e0b570(param_1,param_2,param_3), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141e0b3e0 FUN_141e0b3e0 body=391 status=ok
// SIG undefined FUN_141e0b3e0(void)

undefined8 FUN_141e0b3e0(undefined4 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  DWORD DVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146aaaf58) && (_Init_thread_header(&DAT_146aaaf58), DAT_146aaaf58 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AllowVelocityBuffer");
    lVar6 = lVar7;
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_146aaaf50 = lVar6;
    _Init_thread_footer(&DAT_146aaaf58);
  }
  lVar6 = DAT_146aaaf50;
  if (DAT_146aaaf50 != 0) {
    cVar1 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar1 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar2 = GetCurrentThreadId(), DVar2 != DAT_1468c21c0)) {
      lVar7 = 4;
    }
    if (((*(int *)(lVar7 + lVar6) != 0) &&
        ((((cVar1 = (**(code **)(*param_2 + 200))(param_2), cVar1 != '\0' ||
           (cVar1 = FUN_141b196e0(param_2,0), cVar1 == '\0')) ||
          ((cVar1 = (**(code **)(*param_2 + 0x28))(param_2), cVar1 != '\0' &&
           (uVar3 = (**(code **)(*param_2 + 0x1e8))(param_2), uVar3 < 2)))) ||
         (cVar1 = FUN_14259cb20(param_2), cVar1 != '\0')))) &&
       ((iVar4 = FUN_1419ef5f0(param_1), 1 < iVar4 &&
        (cVar1 = FUN_141e02cc0(CONCAT31((uint3)(*(uint *)(param_3 + 0x28) >> 9),
                                        (char)(*(uint *)(param_3 + 0x28) >> 1)) & 0xffffff01),
        cVar1 == '\0')))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141e0b570 FUN_141e0b570 body=391 status=ok
// SIG undefined FUN_141e0b570(void)

undefined8 FUN_141e0b570(undefined4 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  DWORD DVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146aaaf48) && (_Init_thread_header(&DAT_146aaaf48), DAT_146aaaf48 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AllowVelocityBuffer");
    lVar6 = lVar7;
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_146aaaf40 = lVar6;
    _Init_thread_footer(&DAT_146aaaf48);
  }
  lVar6 = DAT_146aaaf40;
  if (DAT_146aaaf40 != 0) {
    cVar1 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar1 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar2 = GetCurrentThreadId(), DVar2 != DAT_1468c21c0)) {
      lVar7 = 4;
    }
    if (((*(int *)(lVar7 + lVar6) != 0) &&
        ((((cVar1 = (**(code **)(*param_2 + 200))(param_2), cVar1 != '\0' ||
           (cVar1 = FUN_141b196e0(param_2,0), cVar1 == '\0')) ||
          ((cVar1 = (**(code **)(*param_2 + 0x28))(param_2), cVar1 != '\0' &&
           (uVar3 = (**(code **)(*param_2 + 0x1e8))(param_2), uVar3 < 2)))) ||
         (cVar1 = FUN_14259cb20(param_2), cVar1 != '\0')))) &&
       ((iVar4 = FUN_1419ef5f0(param_1), 1 < iVar4 &&
        (cVar1 = FUN_141e02cc0(CONCAT31((uint3)(*(uint *)(param_3 + 0x28) >> 9),
                                        (char)(*(uint *)(param_3 + 0x28) >> 1)) & 0xffffff01),
        cVar1 == '\0')))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141e0b700 FUN_141e0b700 body=55 status=ok
// SIG undefined FUN_141e0b700(void)

ulonglong FUN_141e0b700(uint param_1,longlong *param_2)

{
  ulonglong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  if ((((char)uVar1 != '\0') && (param_1 < 0x20)) &&
     (uVar1 = 0xd0150015, (0xd0150015U >> (param_1 & 0x1f) & 1) != 0)) {
    return 0xd0150001;
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 141e0b740 FUN_141e0b740 body=80 status=ok
// SIG undefined FUN_141e0b740(void)

undefined8 FUN_141e0b740(uint param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = FUN_1419ef5f0();
  if (((2 < iVar1) && (param_1 < 0x20)) && ((0xd0100015U >> (param_1 & 0x1f) & 1) != 0)) {
    iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
    if (iVar1 == 3) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141e0b790 FUN_141e0b790 body=80 status=ok
// SIG undefined FUN_141e0b790(void)

undefined8 FUN_141e0b790(uint param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = FUN_1419ef5f0();
  if (((2 < iVar1) && (param_1 < 0x20)) && ((0xd0150015U >> (param_1 & 0x1f) & 1) != 0)) {
    iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
    if (iVar1 == 3) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141e0b7e0 ShouldCompilePermutation body=41 status=ok
// SIG undefined ShouldCompilePermutation(void)

undefined4 FWideCustomResolveVS::ShouldCompilePermutation(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = FUN_1419ef5f0(iVar1);
  if ((iVar2 < 3) && (iVar1 != 7)) {
    return 0;
  }
  return 1;
}



// FUNCTION 141e0b810 FUN_141e0b810 body=141 status=ok
// SIG undefined FUN_141e0b810(void)

ulonglong FUN_141e0b810(longlong param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  
  if (param_2 != (longlong *)0x0) {
    in_RAX = (**(code **)(*param_2 + 0x1e8))(param_2);
    if (1 < (uint)in_RAX) {
      in_RAX = (**(code **)(*param_2 + 0x20))(param_2);
      if ((int)in_RAX != 3) {
        iVar1 = *(int *)(param_1 + 8);
        cVar2 = (**(code **)(*param_2 + 600))(param_2);
        uVar3 = (ulonglong)(iVar1 == 3);
        if (*(uint *)(param_1 + 8) == (uint)(cVar2 != '\0')) {
          uVar3 = 1;
        }
        if (*(int *)(param_1 + 8) == 2) {
          uVar3 = 1;
        }
        return uVar3;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141e0b8a0 FUN_141e0b8a0 body=206 status=ok
// SIG undefined FUN_141e0b8a0(void)

undefined8 FUN_141e0b8a0(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 == 3) || (param_2 == 0)) {
    lVar1 = *(longlong *)(param_1 + 0xc0);
    lVar2 = (longlong)*(int *)(param_1 + 200) * 0x30d0 + lVar1;
    for (; lVar1 != lVar2; lVar1 = lVar1 + 0x30d0) {
      if ((*(byte *)(lVar1 + 0x28cc) & 0x10) != 0) {
        return 1;
      }
      if (*(int *)(lVar1 + 0x2300) != 0) {
        return 1;
      }
      if (*(int *)(lVar1 + 0x2310) != 0) {
        return 1;
      }
      if (*(int *)(lVar1 + 0x2350) != 0) {
        return 1;
      }
      if (*(int *)(lVar1 + 0x2428) != 0) {
        return 1;
      }
      if (*(int *)(lVar1 + 0x2340) != 0) {
        return 1;
      }
      if (0 < *(int *)(lVar1 + 0x2320)) {
        return 1;
      }
    }
  }
  if ((DAT_146a275c0 != 0) && (param_2 == 1)) {
    return 1;
  }
  lVar1 = *(longlong *)(param_1 + 0xc0);
  lVar2 = (longlong)*(int *)(param_1 + 200) * 0x30d0 + lVar1;
  if (lVar1 != lVar2) {
    do {
      if (0 < *(int *)((longlong)param_2 * 4 + 0x1d70 + lVar1)) {
        return 1;
      }
      lVar1 = lVar1 + 0x30d0;
    } while (lVar1 != lVar2);
  }
  return 0;
}



// FUNCTION 141e0b970 FUN_141e0b970 body=548 status=ok
// SIG undefined FUN_141e0b970(void)

ulonglong FUN_141e0b970(longlong param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  ulonglong in_RAX;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  byte bVar12;
  int iVar13;
  
  if (DAT_1464ca400 == '\0') {
    return in_RAX & 0xffffffffffffff00;
  }
  bVar12 = 0;
  iVar13 = 0;
  if (0 < *(int *)(param_1 + 200)) {
    lVar11 = 0;
    do {
      lVar10 = *(longlong *)(param_1 + 0xc0) + lVar11;
      if ((*(int *)(lVar10 + 0x1a10) == 2) && (*(char *)(lVar10 + 0x11f4) == '\0')) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (*(int *)(lVar10 + 0x1a38) < 3) {
LAB_141e0ba9d:
        bVar1 = false;
      }
      else {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38) < DAT_146aaaf88) &&
           (_Init_thread_header(&DAT_146aaaf88), DAT_146aaaf88 == -1)) {
          if (DAT_1468b1f88 == (longlong *)0x0) {
            IConsoleManager::SetupSingleton();
          }
          plVar7 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))();
          lVar8 = 0;
          if (plVar7 != (longlong *)0x0) {
            lVar8 = (**(code **)(*plVar7 + 0x38))(plVar7);
          }
          DAT_146aaaf80 = lVar8;
          _Init_thread_footer(&DAT_146aaaf88);
        }
        iVar6 = *(int *)(DAT_146aaaf80 + 4);
        if (iVar6 < 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = 4;
          if (iVar6 < 4) {
            iVar9 = iVar6;
          }
        }
        if ((((((*(uint *)(*(longlong *)(lVar10 + 0x10) + 0x28) & 0x100001) != 0x100001) ||
              (*(float *)(lVar10 + 0x177c) <= 0.001)) || (*(float *)(lVar10 + 0x1780) <= 0.001)) ||
            ((*(char *)(*(longlong *)(lVar10 + 0x10) + 0x60) == '\0' || (iVar9 < 1)))) ||
           (((iVar6 = (**(code **)(*DAT_146aa9ab0 + 0x68))(), iVar6 == 0 &&
             (1 < *(int *)(*(longlong *)(lVar10 + 0x10) + 8))) ||
            (*(char *)(lVar10 + 0x120e) != '\0')))) goto LAB_141e0ba9d;
        bVar1 = true;
      }
      cVar3 = FUN_141b190f0(param_1);
      cVar4 = FUN_141d38210(lVar10,1);
      if (((bVar1) || (bVar2)) || ((cVar3 != '\0' || (bVar5 = 0, cVar4 != '\0')))) {
        bVar5 = 1;
      }
      bVar12 = bVar12 | bVar5;
      iVar13 = iVar13 + 1;
      lVar11 = lVar11 + 0x30d0;
    } while (iVar13 < *(int *)(param_1 + 200));
  }
  return (ulonglong)bVar12;
}



// FUNCTION 141e0bba0 FUN_141e0bba0 body=142 status=ok
// SIG undefined FUN_141e0bba0(void)

ulonglong FUN_141e0bba0(longlong param_1,longlong param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_141b46200(param_2);
  if (((((((char)uVar2 != '\0') && (param_1 != 0)) &&
        (uVar2 = (ulonglong)*(int *)(param_1 + 8), 2 < *(int *)(param_1 + 8))) &&
       ((puVar1 = &DAT_1464c9c48 + uVar2, *puVar1 < 0x20 &&
        (uVar2 = 0xd0150015, (0xd0150015U >> (*puVar1 & 0x1f) & 1) != 0)))) &&
      ((DAT_1464c36c8 != 0 && ((*(int *)(param_2 + 0x2c) < 0 && (0 < *(int *)(param_1 + 0x1900))))))
      ) && ((uVar2 = *(ulonglong *)(param_1 + 0x18f8), *(char *)(uVar2 + 100) != '\0' &&
            (0.0 < *(float *)(uVar2 + 0x90))))) {
    return CONCAT71((int7)(uVar2 >> 8),1);
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141e0bc30 ShouldRenderVolumetricFog body=13 status=ok
// SIG undefined ShouldRenderVolumetricFog(void)

void FDeferredShadingSceneRenderer::ShouldRenderVolumetricFog(longlong param_1)

{
  FUN_141e0bba0(*(undefined8 *)(param_1 + 8),param_1 + 0x10);
  return;
}



// FUNCTION 141e0bc40 FUN_141e0bc40 body=28 status=ok
// SIG undefined FUN_141e0bc40(void)

longlong FUN_141e0bc40(void)

{
  uint7 uVar1;
  
  uVar1 = (uint7)(uint3)((uint)DAT_146aa9550 >> 8);
  if (DAT_146aa9550 == 1) {
    if (DAT_146ab62f0 == '\0') {
LAB_141e0bc59:
      return (ulonglong)uVar1 << 8;
    }
  }
  else if (DAT_146aa9550 < 2) goto LAB_141e0bc59;
  return CONCAT71(uVar1,1);
}



// FUNCTION 141e0bc60 SortPrimitives body=33 status=ok
// SIG undefined SortPrimitives(void)

void FTranslucentPrimSet::SortPrimitives(longlong param_1)

{
  undefined1 local_res8 [32];
  
  FUN_141de8050(*(undefined8 *)(param_1 + 0x18),(longlong)*(int *)(param_1 + 0x20),local_res8[0],
                local_res8);
  return;
}


