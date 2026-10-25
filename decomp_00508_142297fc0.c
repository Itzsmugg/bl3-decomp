// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142297fc0 Make body=511 status=ok
// SIG undefined Make(void)

float * FQuatRotationMatrix::Make(float *param_1,float *param_2)

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
  
  fVar7 = DAT_1468b5d98;
  fVar6 = DAT_1468b5d94;
  fVar5 = DAT_1468b5d90;
  fVar1 = param_2[2];
  fVar2 = param_2[3];
  fVar8 = fVar1 + fVar1;
  fVar3 = param_2[1];
  fVar9 = fVar3 + fVar3;
  fVar4 = *param_2;
  fVar10 = fVar4 * (fVar4 + fVar4);
  fVar11 = fVar2 * (fVar4 + fVar4);
  *param_1 = 1.0 - (fVar1 * fVar8 + fVar3 * fVar9);
  param_1[1] = fVar2 * fVar8 + fVar4 * fVar9;
  param_1[2] = fVar4 * fVar8 - fVar2 * fVar9;
  param_1[3] = 0.0;
  param_1[4] = fVar4 * fVar9 - fVar2 * fVar8;
  param_1[5] = 1.0 - (fVar1 * fVar8 + fVar10);
  param_1[6] = fVar11 + fVar3 * fVar8;
  param_1[7] = 0.0;
  param_1[8] = fVar2 * fVar9 + fVar4 * fVar8;
  param_1[9] = fVar3 * fVar8 - fVar11;
  param_1[10] = 1.0 - (fVar3 * fVar9 + fVar10);
  param_1[0xb] = 0.0;
  param_1[0xc] = fVar5;
  param_1[0xd] = fVar6;
  param_1[0xe] = fVar7;
  param_1[0xf] = 1.0;
  return param_1;
}



// FUNCTION 1422981c0 MakeBox body=2036 status=ok
// SIG undefined MakeBox(void)

undefined8 * FAnimPhysShape::MakeBox(undefined8 *param_1,float *param_2)

{
  undefined8 uVar1;
  void *_Src;
  void *_Src_00;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_c8;
  float fStack_c4;
  float local_c0;
  void *local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  
  if (*param_2 * *param_2 + param_2[1] * param_2[1] + param_2[2] * param_2[2] <= 1e-08) {
    local_c0 = 1.0;
    param_2[0] = 1.0;
    param_2[1] = 1.0;
    param_2[2] = 1.0;
  }
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
            (&local_a8,8);
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
            (&local_b8,0xc);
  lVar5 = (longlong)(int)local_a0;
  fVar16 = *param_2 * -0.5;
  fVar10 = param_2[1] * -0.5;
  iVar4 = (int)local_a0 + 1;
  fVar14 = param_2[2] * 0.5;
  fVar12 = *param_2 * 0.5;
  fVar11 = param_2[1] * 0.5;
  local_c8 = fVar16;
  fStack_c4 = fVar10;
  local_c0 = fVar14;
  if (local_a0._4_4_ < iVar4) {
    uVar3 = local_a0 & 0xffffffff;
    local_a0._0_4_ = iVar4;
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_a8,uVar3);
    iVar4 = (int)local_a0;
  }
  local_a0._0_4_ = iVar4 + 1;
  fVar15 = -fVar11;
  *(ulonglong *)((longlong)local_a8 + lVar5 * 0xc) = CONCAT44(fStack_c4,local_c8);
  *(float *)((longlong)local_a8 + lVar5 * 0xc + 8) = local_c0;
  iVar7 = (int)local_a0;
  local_c8 = fVar12;
  fStack_c4 = fVar10;
  local_c0 = fVar14;
  if (local_a0._4_4_ < (int)local_a0) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_a8,iVar4);
    iVar7 = (int)local_a0;
  }
  fVar10 = -fVar14;
  local_a0._0_4_ = iVar7 + 1;
  *(ulonglong *)((longlong)local_a8 + (longlong)iVar4 * 0xc) = CONCAT44(fStack_c4,local_c8);
  *(float *)((longlong)local_a8 + (longlong)iVar4 * 0xc + 8) = local_c0;
  iVar4 = (int)local_a0;
  local_c8 = fVar12;
  fStack_c4 = fVar15;
  local_c0 = fVar10;
  if (local_a0._4_4_ < (int)local_a0) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_a8,iVar7);
    iVar4 = (int)local_a0;
  }
  fVar13 = -fVar12;
  local_a0._0_4_ = iVar4 + 1;
  *(ulonglong *)((longlong)local_a8 + (longlong)iVar7 * 0xc) = CONCAT44(fStack_c4,local_c8);
  *(float *)((longlong)local_a8 + (longlong)iVar7 * 0xc + 8) = local_c0;
  iVar7 = (int)local_a0;
  local_c8 = fVar16;
  fStack_c4 = fVar15;
  local_c0 = fVar10;
  if (local_a0._4_4_ < (int)local_a0) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_a8,iVar4);
    iVar7 = (int)local_a0;
  }
  local_a0._0_4_ = iVar7 + 1;
  *(ulonglong *)((longlong)local_a8 + (longlong)iVar4 * 0xc) = CONCAT44(fStack_c4,local_c8);
  *(float *)((longlong)local_a8 + (longlong)iVar4 * 0xc + 8) = local_c0;
  iVar4 = (int)local_a0;
  local_c8 = fVar12;
  fStack_c4 = fVar11;
  local_c0 = fVar14;
  if (local_a0._4_4_ < (int)local_a0) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_a8,iVar7);
    iVar4 = (int)local_a0;
  }
  local_a0._0_4_ = iVar4 + 1;
  *(ulonglong *)((longlong)local_a8 + (longlong)iVar7 * 0xc) = CONCAT44(fStack_c4,local_c8);
  *(float *)((longlong)local_a8 + (longlong)iVar7 * 0xc + 8) = local_c0;
  iVar7 = (int)local_a0;
  local_c8 = fVar13;
  fStack_c4 = fVar11;
  local_c0 = fVar14;
  if (local_a0._4_4_ < (int)local_a0) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_a8,iVar4);
    iVar7 = (int)local_a0;
  }
  local_a0._0_4_ = iVar7 + 1;
  *(ulonglong *)((longlong)local_a8 + (longlong)iVar4 * 0xc) = CONCAT44(fStack_c4,local_c8);
  *(float *)((longlong)local_a8 + (longlong)iVar4 * 0xc + 8) = local_c0;
  iVar4 = (int)local_a0;
  local_c8 = fVar13;
  fStack_c4 = fVar11;
  local_c0 = fVar10;
  if (local_a0._4_4_ < (int)local_a0) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_a8,iVar7);
    iVar4 = (int)local_a0;
  }
  iVar6 = iVar4 + 1;
  local_a0 = CONCAT44(local_a0._4_4_,iVar6);
  *(ulonglong *)((longlong)local_a8 + (longlong)iVar7 * 0xc) = CONCAT44(fStack_c4,local_c8);
  *(float *)((longlong)local_a8 + (longlong)iVar7 * 0xc + 8) = local_c0;
  local_c8 = fVar12;
  fStack_c4 = fVar11;
  local_c0 = fVar10;
  if (local_a0._4_4_ < iVar6) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_a8,iVar4);
    iVar6 = (int)local_a0;
  }
  _Src_00 = local_a8;
  uVar1 = CONCAT44(fStack_c4,local_c8);
  lVar5 = (longlong)(int)local_b0;
  local_c8 = 0.0;
  fStack_c4 = 1.4013e-45;
  iVar7 = (int)local_b0 + 1;
  *(undefined8 *)((longlong)local_a8 + (longlong)iVar4 * 0xc) = uVar1;
  *(float *)((longlong)local_a8 + (longlong)iVar4 * 0xc + 8) = local_c0;
  if (local_b0._4_4_ < iVar7) {
    uVar3 = local_b0 & 0xffffffff;
    local_b0._0_4_ = iVar7;
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_b8,uVar3);
    iVar7 = (int)local_b0;
  }
  uVar1 = CONCAT44(fStack_c4,local_c8);
  local_b0._0_4_ = iVar7 + 1;
  local_c8 = 1.4013e-45;
  fStack_c4 = 2.8026e-45;
  *(undefined8 *)((longlong)local_b8 + lVar5 * 0xc) = uVar1;
  *(undefined4 *)((longlong)local_b8 + lVar5 * 0xc + 8) = 3;
  iVar4 = (int)local_b0;
  if (local_b0._4_4_ < (int)local_b0) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_b8,iVar7);
    iVar4 = (int)local_b0;
  }
  uVar1 = CONCAT44(fStack_c4,local_c8);
  local_b0._0_4_ = iVar4 + 1;
  local_c8 = 5.60519e-45;
  fStack_c4 = 7.00649e-45;
  *(undefined8 *)((longlong)local_b8 + (longlong)iVar7 * 0xc) = uVar1;
  *(undefined4 *)((longlong)local_b8 + (longlong)iVar7 * 0xc + 8) = 3;
  iVar7 = (int)local_b0;
  if (local_b0._4_4_ < (int)local_b0) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_b8,iVar4);
    iVar7 = (int)local_b0;
  }
  uVar1 = CONCAT44(fStack_c4,local_c8);
  local_b0._0_4_ = iVar7 + 1;
  local_c8 = 7.00649e-45;
  fStack_c4 = 8.40779e-45;
  *(undefined8 *)((longlong)local_b8 + (longlong)iVar4 * 0xc) = uVar1;
  *(undefined4 *)((longlong)local_b8 + (longlong)iVar4 * 0xc + 8) = 7;
  iVar4 = (int)local_b0;
  if (local_b0._4_4_ < (int)local_b0) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_b8,iVar7);
    iVar4 = (int)local_b0;
  }
  uVar1 = CONCAT44(fStack_c4,local_c8);
  local_b0._0_4_ = iVar4 + 1;
  local_c8 = 0.0;
  fStack_c4 = 7.00649e-45;
  *(undefined8 *)((longlong)local_b8 + (longlong)iVar7 * 0xc) = uVar1;
  *(undefined4 *)((longlong)local_b8 + (longlong)iVar7 * 0xc + 8) = 7;
  iVar7 = (int)local_b0;
  if (local_b0._4_4_ < (int)local_b0) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_b8,iVar4);
    iVar7 = (int)local_b0;
  }
  uVar1 = CONCAT44(fStack_c4,local_c8);
  local_b0._0_4_ = iVar7 + 1;
  local_c8 = 7.00649e-45;
  fStack_c4 = 5.60519e-45;
  *(undefined8 *)((longlong)local_b8 + (longlong)iVar4 * 0xc) = uVar1;
  *(undefined4 *)((longlong)local_b8 + (longlong)iVar4 * 0xc + 8) = 1;
  iVar4 = (int)local_b0;
  if (local_b0._4_4_ < (int)local_b0) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_b8,iVar7);
    iVar4 = (int)local_b0;
  }
  uVar1 = CONCAT44(fStack_c4,local_c8);
  local_b0._0_4_ = iVar4 + 1;
  local_c8 = 1.4013e-45;
  fStack_c4 = 5.60519e-45;
  *(undefined8 *)((longlong)local_b8 + (longlong)iVar7 * 0xc) = uVar1;
  *(undefined4 *)((longlong)local_b8 + (longlong)iVar7 * 0xc + 8) = 1;
  iVar7 = (int)local_b0;
  if (local_b0._4_4_ < (int)local_b0) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_b8,iVar4);
    iVar7 = (int)local_b0;
  }
  uVar1 = CONCAT44(fStack_c4,local_c8);
  local_b0._0_4_ = iVar7 + 1;
  local_c8 = 2.8026e-45;
  fStack_c4 = 5.60519e-45;
  *(undefined8 *)((longlong)local_b8 + (longlong)iVar4 * 0xc) = uVar1;
  *(undefined4 *)((longlong)local_b8 + (longlong)iVar4 * 0xc + 8) = 2;
  iVar4 = (int)local_b0;
  if (local_b0._4_4_ < (int)local_b0) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_b8,iVar7);
    iVar4 = (int)local_b0;
  }
  uVar1 = CONCAT44(fStack_c4,local_c8);
  local_b0._0_4_ = iVar4 + 1;
  local_c8 = 0.0;
  fStack_c4 = 4.2039e-45;
  *(undefined8 *)((longlong)local_b8 + (longlong)iVar7 * 0xc) = uVar1;
  *(undefined4 *)((longlong)local_b8 + (longlong)iVar7 * 0xc + 8) = 7;
  iVar7 = (int)local_b0;
  if (local_b0._4_4_ < (int)local_b0) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_b8,iVar4);
    iVar7 = (int)local_b0;
  }
  uVar1 = CONCAT44(fStack_c4,local_c8);
  local_b0._0_4_ = iVar7 + 1;
  local_c8 = 7.00649e-45;
  fStack_c4 = 4.2039e-45;
  *(undefined8 *)((longlong)local_b8 + (longlong)iVar4 * 0xc) = uVar1;
  *(undefined4 *)((longlong)local_b8 + (longlong)iVar4 * 0xc + 8) = 5;
  iVar4 = (int)local_b0;
  if (local_b0._4_4_ < (int)local_b0) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_b8,iVar7);
    iVar4 = (int)local_b0;
  }
  uVar1 = CONCAT44(fStack_c4,local_c8);
  local_b0._0_4_ = iVar4 + 1;
  local_c8 = 4.2039e-45;
  fStack_c4 = 2.8026e-45;
  *(undefined8 *)((longlong)local_b8 + (longlong)iVar7 * 0xc) = uVar1;
  *(undefined4 *)((longlong)local_b8 + (longlong)iVar7 * 0xc + 8) = 6;
  iVar7 = (int)local_b0;
  if (local_b0._4_4_ < (int)local_b0) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_b8,iVar4);
    iVar7 = (int)local_b0;
  }
  uVar1 = CONCAT44(fStack_c4,local_c8);
  iVar8 = iVar7 + 1;
  local_c8 = 2.8026e-45;
  fStack_c4 = 9.80909e-45;
  local_b0 = CONCAT44(local_b0._4_4_,iVar8);
  *(undefined8 *)((longlong)local_b8 + (longlong)iVar4 * 0xc) = uVar1;
  *(undefined4 *)((longlong)local_b8 + (longlong)iVar4 * 0xc + 8) = 6;
  if (local_b0._4_4_ < iVar8) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_b8,iVar7);
    iVar8 = (int)local_b0;
  }
  _Src = local_b8;
  *(ulonglong *)((longlong)local_b8 + (longlong)iVar7 * 0xc) = CONCAT44(fStack_c4,local_c8);
  *(undefined4 *)((longlong)local_b8 + (longlong)iVar7 * 0xc + 8) = 6;
  *param_1 = 0;
  *(int *)(param_1 + 1) = iVar6;
  if (iVar6 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<FVector,FDefaultAllocator>::ResizeForCopy(param_1,iVar6,0);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src_00,(longlong)iVar6 * 0xc);
  }
  param_1[2] = 0;
  *(int *)(param_1 + 3) = iVar8;
  if (iVar8 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    TArray<FVector,FDefaultAllocator>::ResizeForCopy(param_1 + 2,iVar8,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[2],_Src,(longlong)iVar8 * 0xc);
  }
  uVar9 = FAnimPhys::CalculateVolume(param_1,param_1 + 2);
  *(undefined4 *)(param_1 + 4) = uVar9;
  puVar2 = (undefined8 *)FAnimPhys::CalculateCenterOfMass(&local_c8,param_1,param_1 + 2);
  *(undefined8 *)((longlong)param_1 + 0x24) = *puVar2;
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(puVar2 + 1);
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  if (_Src_00 != (void *)0x0) {
    FMemory::Free(_Src_00);
  }
  return param_1;
}



// FUNCTION 1422989c0 Notify body=41 status=ok
// SIG undefined Notify(void)

void UAnimNotify::Notify(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_2;
  FUN_1428f5180();
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return;
}



// FUNCTION 142298a40 FUN_142298a40 body=431 status=ok
// SIG undefined FUN_142298a40(void)

void FUN_142298a40(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar3;
  uint in_stack_ffffffffffffff88;
  undefined8 in_stack_ffffffffffffff90;
  undefined4 uVar4;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar5;
  undefined8 in_stack_ffffffffffffffa0;
  uint uVar6;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  uVar6 = (uint)((ulonglong)in_stack_ffffffffffffffa0 >> 0x20);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    cVar1 = USoundBase::IsLooping();
    if (cVar1 == '\0') {
      if ((*(byte *)(param_1 + 0x48) & 1) != 0) {
        local_38 = DAT_1468b5da0;
        local_30 = DAT_1468b5da8;
        local_28 = 0;
        local_10 = 0;
        local_20 = 0;
        FUN_142460bb0(*(undefined8 *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x50),
                      &local_28,&local_38,0,in_stack_ffffffffffffff88 & 0xffffff00,
                      CONCAT44(uVar4,*(undefined4 *)(param_1 + 0x40)),
                      CONCAT44(uVar5,*(undefined4 *)(param_1 + 0x44)),(ulonglong)uVar6 << 0x20,0,0,1
                     );
        return;
      }
      local_38 = *(undefined8 *)(param_2 + 0x220);
      local_30 = *(undefined4 *)(param_2 + 0x228);
      lVar2 = *(longlong *)(param_2 + 0x120);
      if (lVar2 == 0) {
        lVar2 = FUN_1423407b0(param_2);
      }
      local_20 = DAT_1468b5da8;
      local_28 = DAT_1468b5da0;
      local_10 = local_30;
      local_18 = local_38;
      FUN_142458510(lVar2,*(undefined8 *)(param_1 + 0x38),&local_18,&local_28,
                    CONCAT44(uVar3,*(undefined4 *)(param_1 + 0x40)),*(undefined4 *)(param_1 + 0x44),
                    0,0,0,0);
    }
  }
  return;
}



// FUNCTION 142298c00 thunk_FUN_1428f9800 body=5 status=ok
// SIG undefined thunk_FUN_1428f9800(void)

bool thunk_FUN_1428f9800(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  char cStack_14;
  
  lVar1 = *param_1;
  cStack_14 = '\0';
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  uVar2 = FUN_14178ac60(param_1,DAT_146b1af28);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&uStack_28);
  return cStack_14 != '\0';
}



// FUNCTION 142298c10 FUN_142298c10 body=226 status=ok
// SIG undefined FUN_142298c10(void)

void FUN_142298c10(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    cVar1 = (**(code **)(*param_2 + 0x440))(param_2);
    if (cVar1 == '\0') {
      iVar2 = FUN_1423ac950(param_2);
      if (iVar2 == -1) goto LAB_142298cc8;
    }
    local_30 = *(undefined4 *)(param_1 + 0x54);
    local_38 = *(undefined8 *)(param_1 + 0x4c);
    local_20 = *(undefined4 *)(param_1 + 0x48);
    local_28 = *(undefined8 *)(param_1 + 0x40);
    FUN_1424600f0(*(undefined8 *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x38),&local_28,
                  &local_38,0,*(char *)(param_1 + 0x58) == '\0',0,*(undefined1 *)(param_1 + 0x59),0)
    ;
  }
LAB_142298cc8:
  FUN_1428f9800(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 142298d00 FUN_142298d00 body=1265 status=ok
// SIG undefined FUN_142298d00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142298d00(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong **pplVar7;
  byte bVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined8 local_170;
  undefined1 local_168;
  undefined8 local_160;
  undefined1 local_158;
  longlong *local_148;
  undefined4 local_140;
  undefined8 local_138 [8];
  undefined8 *local_f8;
  undefined8 local_f0;
  longlong local_e8 [8];
  longlong *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  longlong **pplStack_90;
  longlong *local_88;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  lVar5 = *(longlong *)(param_2 + 0x120);
  if (lVar5 == 0) {
    lVar5 = FUN_1423407b0(param_2);
  }
  iVar4 = FUN_1428cf800(lVar5);
  if (iVar4 == 1) {
    return;
  }
  lVar5 = (**(code **)(*param_1 + 0x2d8))(param_1,param_2,param_3);
  if (lVar5 == 0) {
    lVar5 = param_1[6];
  }
  else {
    param_1[6] = lVar5;
  }
  if (lVar5 == 0) {
    return;
  }
  uVar10 = 0;
  local_a8 = (longlong *)0x0;
  local_a0 = 0;
  if (*(longlong *)(param_2 + 0x118) == 0) {
    local_148 = local_e8;
    local_178 = 0x20000000;
    pplStack_90 = &local_148;
    local_98 = (longlong *)&LAB_14228c530;
    FUN_1417a4830(param_2,&local_98,0,0);
  }
  else {
    FUN_142286440(*(longlong *)(param_2 + 0x118),local_e8);
  }
  uVar13 = (**(code **)(*param_1 + 0x2e0))(param_1,param_2);
  plVar11 = local_e8;
  if (local_a8 != (longlong *)0x0) {
    plVar11 = local_a8;
  }
  local_88 = (longlong *)0x0;
  local_98 = (longlong *)0x0;
  pplStack_90 = (longlong **)0x0;
  plVar1 = plVar11 + (int)local_a0;
  bVar8 = 0;
  if (plVar11 != plVar1) {
    do {
      plVar2 = (longlong *)*plVar11;
      cVar3 = (**(code **)(*plVar2 + 0x2a0))(plVar2);
      if (cVar3 == '\0') {
        if (((*(byte *)((longlong)plVar2 + 0x719) & 8) != 0) &&
           (cVar3 = (**(code **)(*plVar2 + 0x2a0))(plVar2), cVar3 == '\0')) {
          uVar9 = 2;
          if (plVar2[0xde] == param_1[6]) {
            uVar9 = (ulonglong)(plVar2[4] != param_2);
          }
          (&local_98)[uVar9] = plVar2;
        }
      }
      else {
        local_f8 = (undefined8 *)0x0;
        local_f0 = 0;
        (**(code **)(*plVar2 + 0x990))(plVar2,local_138,param_1,0);
        if (0 < (int)local_f0) {
          if ((param_1[6] == plVar2[0xde]) || (plVar2[4] != param_2)) {
            puVar12 = local_138;
            if (local_f8 != (undefined8 *)0x0) {
              puVar12 = local_f8;
            }
            uVar9 = (longlong)(int)local_f0 & 0x1fffffffffffffff;
            if (puVar12 + (int)local_f0 < puVar12) {
              uVar9 = uVar10;
            }
            if (uVar9 != 0) {
              do {
                plVar11 = (longlong *)*puVar12;
                (**(code **)(*plVar11 + 0x208))(plVar11);
                local_178 = uVar13;
                (**(code **)(*plVar11 + 0x218))(plVar11,param_1[7],param_1[8],(char)param_1[9]);
                uVar10 = uVar10 + 1;
                puVar12 = puVar12 + 1;
              } while (uVar10 != uVar9);
            }
          }
          else {
            (**(code **)(*plVar2 + 0x3b0))(plVar2,0);
          }
          goto joined_r0x000142298fa1;
        }
        if (local_f8 != (undefined8 *)0x0) {
          FMemory::Free();
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar1);
    pplVar7 = (longlong **)local_98;
    if ((local_98 != (longlong *)0x0) || (pplVar7 = pplStack_90, pplStack_90 != (longlong **)0x0))
    goto LAB_142298ff9;
  }
  pplVar7 = (longlong **)local_88;
  if (local_88 == (longlong *)0x0) {
    FUN_1417846f0(param_2,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    local_148 = (longlong *)0x0;
    uVar6 = AGFreezeCharacterCue::GetPrivateStaticClass();
    local_158 = 0;
    local_160 = 0;
    local_168 = 0;
    local_170 = 0;
    local_178 = 0;
    pplVar7 = (longlong **)FUN_1417985e0(uVar6,param_2,0,0);
    bVar8 = ~(byte)(int)param_1[0xb];
  }
LAB_142298ff9:
  *(byte *)((longlong)pplVar7 + 0xba) = *(byte *)((longlong)pplVar7 + 0xba) & 0xfd;
  *(byte *)((longlong)pplVar7 + 0x719) = *(byte *)((longlong)pplVar7 + 0x719) | 0x18;
  *(byte *)((longlong)pplVar7 + 0x71a) =
       (bVar8 & 1) << 6 | *(byte *)((longlong)pplVar7 + 0x71a) & 0xbe;
  *(undefined8 *)((longlong)pplVar7 + 0x204) = 0x3f8000003f800000;
  local_140 = 0x3f800000;
  *(undefined4 *)((longlong)pplVar7 + 0x794) = 0;
  *(undefined4 *)((longlong)pplVar7 + 0x20c) = 0x3f800000;
  local_148 = (longlong *)0x0;
  FWeakObjectPtr::operator=(pplVar7 + 0x10d,param_2);
  pplVar7[0x10e] = (longlong *)0x0;
  USceneComponent::ConvertAttachLocation
            (0,pplVar7 + 0x10f,(longlong)pplVar7 + 0x879,(longlong)pplVar7 + 0x87a);
  if (pplVar7[0xde] != (longlong *)param_1[6]) {
    FUN_14260f940(pplVar7);
  }
  if ((*(byte *)(pplVar7 + 0x17) & 1) == 0) {
    lVar5 = *(longlong *)(param_2 + 0x120);
    if (lVar5 == 0) {
      lVar5 = FUN_1423407b0(param_2);
    }
    FUN_14234b270(pplVar7,lVar5);
  }
  local_148 = (longlong *)0x0;
  FUN_142382f60(pplVar7,param_2,&DAT_146af29ec,0);
  FUN_1425fcab0(pplVar7,1);
  local_f8 = (undefined8 *)0x0;
  local_f0 = 0;
  (**(code **)((longlong)*pplVar7 + 0x990))(pplVar7,local_138,param_1,1);
  puVar12 = local_138;
  if (local_f8 != (undefined8 *)0x0) {
    puVar12 = local_f8;
  }
  uVar9 = (longlong)(int)local_f0 & 0x1fffffffffffffff;
  if (puVar12 + (int)local_f0 < puVar12) {
    uVar9 = uVar10;
  }
  if (uVar9 != 0) {
    do {
      plVar11 = (longlong *)*puVar12;
      (**(code **)(*plVar11 + 0x208))(plVar11);
      local_178 = uVar13;
      (**(code **)(*plVar11 + 0x218))(plVar11,param_1[7],param_1[8],(char)param_1[9]);
      uVar10 = uVar10 + 1;
      puVar12 = puVar12 + 1;
    } while (uVar10 != uVar9);
  }
joined_r0x000142298fa1:
  if (local_f8 != (undefined8 *)0x0) {
    FMemory::Free(local_f8);
  }
  FUN_1428f9800(param_1,param_2,param_3,param_4);
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142299200 thunk_FUN_1428f9860 body=5 status=ok
// SIG undefined thunk_FUN_1428f9860(void)

bool thunk_FUN_1428f9860(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  char cStack_17;
  
  lVar1 = *param_1;
  cStack_17 = '\0';
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  uVar2 = FUN_14178ac60(param_1,DAT_146b1af30);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&uStack_28);
  return cStack_17 != '\0';
}



// FUNCTION 142299210 FUN_142299210 body=304 status=ok
// SIG undefined FUN_142299210(void)

void FUN_142299210(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_28;
  undefined8 local_20;
  
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_14238b380(param_2,0,&local_28);
  plVar1 = local_28 + (int)local_20;
  plVar5 = local_28;
  do {
    if (plVar5 == plVar1) {
LAB_1422992fc:
      FUN_1428f9860(param_1,param_2,param_3,param_4);
      if (local_28 != (longlong *)0x0) {
        FMemory::Free();
      }
      return;
    }
    plVar2 = (longlong *)*plVar5;
    if (plVar2 != (longlong *)0x0) {
      lVar4 = AGFreezeCharacterCue::GetPrivateStaticClass();
      if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((((bVar3) && (plVar2[0x33] == *(longlong *)(param_1 + 0x38))) &&
          (plVar2[0xde] == *(longlong *)(param_1 + 0x30))) &&
         ((*(byte *)(plVar2 + 0xe3) & 0x10) == 0)) {
        if (*(char *)(param_1 + 0x58) == '\0') {
          FUN_142600fa0(plVar2);
        }
        else {
          (**(code **)(*plVar2 + 0x3b0))(plVar2,0);
        }
        goto LAB_1422992fc;
      }
    }
    plVar5 = plVar5 + 1;
  } while( true );
}



// FUNCTION 142299340 FUN_142299340 body=541 status=ok
// SIG undefined FUN_142299340(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142299340(undefined8 param_1,longlong param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined1 local_128;
  undefined1 *local_118;
  undefined1 **ppuStack_110;
  undefined8 *local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 local_f0 [8];
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 local_a0 [8];
  undefined8 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  lVar5 = *(longlong *)(param_2 + 0x120);
  local_128 = param_4;
  local_100 = param_2;
  local_f8 = param_3;
  if (lVar5 == 0) {
    lVar5 = FUN_1423407b0(param_2);
  }
  iVar4 = FUN_1428cf800(lVar5);
  if (iVar4 != 1) {
    local_b0 = (undefined8 *)0x0;
    local_a8 = 0;
    if (*(longlong *)(param_2 + 0x118) == 0) {
      local_108 = local_f0;
      local_138 = 0x20000000;
      ppuStack_110 = (undefined1 **)&local_108;
      local_118 = &LAB_14228c530;
      FUN_1417a4830(param_2,&local_118,0,0);
    }
    else {
      FUN_142286440(*(longlong *)(param_2 + 0x118),local_f0);
    }
    puVar7 = local_f0;
    if (local_b0 != (undefined8 *)0x0) {
      puVar7 = local_b0;
    }
    puVar1 = puVar7 + (int)local_a8;
    if (puVar7 != puVar1) {
      do {
        plVar2 = (longlong *)*puVar7;
        cVar3 = (**(code **)(*plVar2 + 0x2a0))(plVar2);
        if (cVar3 != '\0') {
          local_60 = (undefined8 *)0x0;
          local_58 = 0;
          (**(code **)(*plVar2 + 0x990))(plVar2,local_a0,param_1,0);
          puVar6 = local_a0;
          if (local_60 != (undefined8 *)0x0) {
            puVar6 = local_60;
          }
          uVar9 = (longlong)(int)local_58 & 0x1fffffffffffffff;
          if (puVar6 + (int)local_58 < puVar6) {
            uVar9 = 0;
          }
          uVar8 = 0;
          if (uVar9 != 0) {
            do {
              (**(code **)(*(longlong *)*puVar6 + 0x210))();
              uVar8 = uVar8 + 1;
              puVar6 = puVar6 + 1;
            } while (uVar8 != uVar9);
          }
          if (local_60 != (undefined8 *)0x0) {
            FMemory::Free();
          }
        }
        puVar7 = puVar7 + 1;
        param_2 = local_100;
      } while (puVar7 != puVar1);
    }
    FUN_1428f9860(param_1,param_2,local_f8,local_128);
    if (local_b0 != (undefined8 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142299570 FUN_142299570 body=604 status=ok
// SIG undefined FUN_142299570(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142299570(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined1 *local_138;
  undefined1 **ppuStack_130;
  undefined8 *local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 local_110 [8];
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined8 local_c0 [8];
  undefined8 *local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  lVar5 = *(longlong *)(param_2 + 0x120);
  local_120 = param_2;
  local_118 = param_3;
  if (lVar5 == 0) {
    lVar5 = FUN_1423407b0(param_2);
  }
  iVar4 = FUN_1428cf800(lVar5);
  if (iVar4 != 1) {
    local_d0 = (undefined8 *)0x0;
    local_c8 = 0;
    if (*(longlong *)(param_2 + 0x118) == 0) {
      local_128 = local_110;
      local_148 = 0x20000000;
      ppuStack_130 = (undefined1 **)&local_128;
      local_138 = &LAB_14228c530;
      FUN_1417a4830(param_2,&local_138,0,0);
    }
    else {
      FUN_142286440(*(longlong *)(param_2 + 0x118),local_110);
    }
    uVar10 = (**(code **)(*param_1 + 0x2e0))(param_1,param_2);
    puVar8 = local_110;
    if (local_d0 != (undefined8 *)0x0) {
      puVar8 = local_d0;
    }
    puVar1 = puVar8 + (int)local_c8;
    if (puVar8 != puVar1) {
      do {
        plVar2 = (longlong *)*puVar8;
        cVar3 = (**(code **)(*plVar2 + 0x2a0))(plVar2);
        if (cVar3 != '\0') {
          local_80 = (undefined8 *)0x0;
          local_78 = 0;
          (**(code **)(*plVar2 + 0x990))(plVar2,local_c0,param_1,0);
          puVar6 = local_c0;
          if (local_80 != (undefined8 *)0x0) {
            puVar6 = local_80;
          }
          uVar9 = (longlong)(int)local_78 & 0x1fffffffffffffff;
          if (puVar6 + (int)local_78 < puVar6) {
            uVar9 = 0;
          }
          uVar7 = 0;
          if (uVar9 != 0) {
            do {
              local_148 = uVar10;
              (**(code **)(*(longlong *)*puVar6 + 0x218))((longlong *)*puVar6,param_1[7],param_1[8])
              ;
              uVar7 = uVar7 + 1;
              puVar6 = puVar6 + 1;
            } while (uVar7 != uVar9);
          }
          if (local_80 != (undefined8 *)0x0) {
            FMemory::Free();
          }
        }
        puVar8 = puVar8 + 1;
        param_2 = local_120;
      } while (puVar8 != puVar1);
    }
    FUN_1428f98c0(param_1,param_2,local_118,param_4);
    if (local_d0 != (undefined8 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1422997d0 FUN_1422997d0 body=10 status=ok
// SIG undefined FUN_1422997d0(void)

void FUN_1422997d0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001422997d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))();
  return;
}



// FUNCTION 1422997e0 FUN_1422997e0 body=892 status=ok
// SIG undefined FUN_1422997e0(void)

void FUN_1422997e0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  bool bVar18;
  
  uVar12 = 0;
  uVar8 = uVar12;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    uVar4 = FUN_1428eccf0();
    for (uVar17 = *(ulonglong *)(param_1 + 0x48);
        (uVar8 = uVar12, uVar17 != 0 && (uVar8 = *(ulonglong *)(param_1 + 0x48), uVar17 != uVar4));
        uVar17 = *(ulonglong *)(uVar17 + 0x30)) {
    }
  }
  lVar7 = *(longlong *)(param_1 + 0x50);
  if (uVar8 == 0) {
    if (lVar7 != 0) {
      FUN_142283dd0();
      *(undefined8 *)(param_1 + 0x50) = 0;
      return;
    }
  }
  else {
    lVar1 = *(longlong *)(param_3 + 0x20);
    if (lVar7 != 0) {
      lVar11 = (longlong)*(int *)(lVar1 + 0xa58);
      if (*(int *)(lVar1 + 0xa58) != 0) {
        bVar18 = **(longlong **)(lVar1 + 0xa50) != lVar7;
        uVar8 = uVar12;
        uVar17 = uVar12;
        do {
          iVar14 = (int)uVar8;
          uVar12 = uVar12 + 1;
          uVar8 = (ulonglong)(iVar14 + 1);
          if ((longlong)uVar12 < lVar11) {
            plVar9 = (longlong *)(*(longlong *)(lVar1 + 0xa50) + uVar12 * 8);
            do {
              if (bVar18 != (*plVar9 != *(longlong *)(param_1 + 0x50))) break;
              uVar8 = (ulonglong)((int)uVar8 + 1);
              uVar12 = uVar12 + 1;
              plVar9 = plVar9 + 1;
            } while ((longlong)uVar12 < lVar11);
          }
          iVar13 = (int)uVar8 - iVar14;
          if (bVar18 != false) {
            iVar16 = (int)uVar17;
            if (iVar16 != iVar14) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*(longlong *)(lVar1 + 0xa50) + (longlong)iVar16 * 8),
                         (void *)(*(longlong *)(lVar1 + 0xa50) + (longlong)iVar14 * 8),
                         (longlong)iVar13 << 3);
            }
            uVar17 = (ulonglong)(uint)(iVar16 + iVar13);
          }
          bVar18 = (bool)(bVar18 ^ 1);
        } while ((longlong)uVar12 < lVar11);
        *(int *)(lVar1 + 0xa58) = (int)uVar17;
        lVar7 = *(longlong *)(param_1 + 0x50);
      }
      lVar11 = 0;
      iVar14 = *(int *)(lVar7 + 0xc);
      if (iVar14 < (int)DAT_1469e91c4) {
        uVar10 = iVar14 >> 0x1f & 0xffff;
        uVar3 = iVar14 + uVar10;
        lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                 (longlong)(int)((uVar3 & 0xffff) - uVar10) * 0x18;
      }
      *(uint *)(lVar11 + 8) = *(uint *)(lVar11 + 8) | 0x20000000;
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
    uVar12 = 0;
    uVar8 = uVar12;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      uVar4 = FUN_1428eccf0();
      for (uVar17 = *(ulonglong *)(param_1 + 0x48);
          (uVar8 = uVar12, uVar17 != 0 && (uVar8 = *(ulonglong *)(param_1 + 0x48), uVar17 != uVar4))
          ; uVar17 = *(ulonglong *)(uVar17 + 0x30)) {
      }
    }
    FUN_1417846f0(lVar1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar5 = FUN_1417985e0(uVar8,lVar1,0,0,0,0,0,0,0);
    *(undefined8 *)(param_1 + 0x50) = uVar5;
    FUN_142289fe0(param_1,uVar5);
    FUN_142276240(*(undefined8 *)(param_1 + 0x50));
    iVar14 = *(int *)(lVar1 + 0xa58);
    *(int *)(lVar1 + 0xa58) = iVar14 + 1;
    if (*(int *)(lVar1 + 0xa5c) < iVar14 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                ((longlong *)(lVar1 + 0xa50),iVar14);
    }
    *(undefined8 *)(*(longlong *)(lVar1 + 0xa50) + (longlong)iVar14 * 8) =
         *(undefined8 *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x60) = 0;
    if (*(int *)(param_1 + 100) < *(int *)(param_1 + 0x80)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x58);
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
    if (*(int *)(param_1 + 0x74) < *(int *)(param_1 + 0x80)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x68);
    }
    if (0 < *(int *)(param_1 + 0x80)) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x88);
        lVar7 = (longlong)(int)uVar12 * 8;
        lVar11 = FindField<UProperty>
                           (*(undefined8 *)(param_3 + 0x10),
                            *(undefined8 *)(lVar7 + *(longlong *)(param_1 + 0x78)));
        if (*(longlong *)(param_1 + 0x48) != 0) {
          lVar6 = FUN_1428eccf0();
          lVar15 = *(longlong *)(param_1 + 0x48);
          for (lVar2 = lVar15; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
            if (lVar2 == lVar6) goto LAB_142299ab3;
          }
        }
        lVar15 = 0;
LAB_142299ab3:
        lVar7 = FindField<UProperty>(lVar15,*(undefined8 *)(lVar1 + lVar7));
        if ((lVar11 != 0) && (lVar7 != 0)) {
          iVar14 = *(int *)(param_1 + 0x60);
          *(int *)(param_1 + 0x60) = iVar14 + 1;
          if (*(int *)(param_1 + 100) < iVar14 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x58,iVar14)
            ;
          }
          *(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar14 * 8) = lVar11;
          iVar14 = *(int *)(param_1 + 0x70);
          *(int *)(param_1 + 0x70) = iVar14 + 1;
          if (*(int *)(param_1 + 0x74) < iVar14 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x68,iVar14)
            ;
          }
          *(longlong *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar14 * 8) = lVar7;
        }
        uVar3 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar3;
      } while ((int)uVar3 < *(int *)(param_1 + 0x80));
    }
  }
  return;
}



// FUNCTION 142299b60 FUN_142299b60 body=510 status=ok
// SIG undefined FUN_142299b60(void)

bool FUN_142299b60(longlong param_1,undefined8 *param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  float fVar12;
  float fVar13;
  
  plVar9 = (longlong *)0x0;
  if (((*(int *)(param_4 + 0x40) != 0) && (*(longlong **)(param_4 + 0x38) != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(**(longlong **)(param_4 + 0x38) + 0x18))(), cVar4 != '\0')) {
    plVar7 = plVar9;
    if (*(int *)(param_4 + 0x40) != 0) {
      plVar7 = *(longlong **)(param_4 + 0x38);
    }
    cVar4 = (**(code **)(*plVar7 + 0x38))();
    if (cVar4 == '\0') {
      return false;
    }
    if (*(char *)(param_4 + 0x48) != '\0') {
      return (bool)cVar4;
    }
  }
  if (*(char *)(param_5 + 0xd) == '\0') {
    if ((*(longlong *)(param_4 + 0x20) == 0) && (*(int *)(param_4 + 0x18) < 1)) {
      return true;
    }
    FUN_142290d80(param_4 + 8,param_2);
    return (bool)*(undefined1 *)(param_4 + 0x30);
  }
  puVar11 = *(undefined4 **)(param_3 + 0x30);
  fVar13 = 0.0;
  plVar7 = (longlong *)((longlong)*(int *)(param_3 + 0x38) & 0x3fffffffffffffff);
  if (puVar11 + *(int *)(param_3 + 0x38) < puVar11) {
    plVar7 = plVar9;
  }
  plVar10 = plVar9;
  if (plVar7 != (longlong *)0x0) {
    do {
      uVar2 = *puVar11;
      uVar3 = *param_2;
      uVar5 = FUN_1428f56b0();
      plVar6 = (longlong *)FAnimInstanceProxy::GetNodeFromIndexUntyped(uVar3,uVar2,uVar5);
      if (((plVar6 != (longlong *)0x0) && ((char)plVar6[6] == '\0')) &&
         (fVar12 = (float)(**(code **)(*plVar6 + 0xf0))(plVar6), fVar13 < fVar12)) {
        fVar13 = (float)(**(code **)(*plVar6 + 0xf0))(plVar6);
        plVar10 = plVar6;
      }
      puVar11 = puVar11 + 1;
      plVar9 = (longlong *)((longlong)plVar9 + 1);
    } while (plVar9 != plVar7);
    if ((plVar10 != (longlong *)0x0) &&
       (plVar9 = (longlong *)(**(code **)(*plVar10 + 0x108))(plVar10), plVar9 != (longlong *)0x0)) {
      fVar13 = (float)(**(code **)(*plVar9 + 0x280))(plVar9);
      fVar12 = (float)(**(code **)(*plVar10 + 0xf8))(plVar10);
      fVar13 = fVar13 - fVar12;
      lVar8 = (longlong)*(int *)(param_5 + 8) * 0x40 +
              *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x20);
      cVar4 = *(char *)(lVar8 + 0x39);
      if (cVar4 != '\0') {
        if (cVar4 == '\x02') {
          return fVar13 <= 0.0;
        }
        fVar12 = (float)(**(code **)(*plVar10 + 0x140))(plVar10);
        if (fVar12 != -1.0) {
          fVar13 = (float)(**(code **)(*plVar10 + 0x120))(plVar10);
          return fVar12 <= fVar13;
        }
      }
      pfVar1 = (float *)(lVar8 + 0x10);
      return fVar13 < *pfVar1 || fVar13 == *pfVar1;
    }
  }
  return false;
}



// FUNCTION 142299d60 FUN_142299d60 body=1050 status=ok
// SIG undefined FUN_142299d60(void)

void FUN_142299d60(float param_1,ulonglong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,undefined8 param_6,float *param_7,uint param_8,uint param_9)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  int iVar13;
  float fVar14;
  float afStack_bc [11];
  float local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [80];
  
  plVar5 = (longlong *)*param_2;
  uVar9 = 0;
  iVar13 = (int)param_2[1];
  uVar8 = (longlong)iVar13 & 0x1fffffffffffffff;
  if (plVar5 + iVar13 < plVar5) {
    uVar8 = uVar9;
  }
  uVar10 = uVar9;
  if (uVar8 != 0) {
    do {
      FUN_1422968a0(param_1,*plVar5,param_6);
      uVar10 = uVar10 + 1;
      plVar5 = plVar5 + 1;
    } while (uVar10 != uVar8);
    iVar13 = (int)param_2[1];
    plVar5 = (longlong *)*param_2;
  }
  if (((0.0001 < ABS(*param_7)) || (0.0001 < ABS(param_7[1]))) || (0.0001 < ABS(param_7[2]))) {
    uVar8 = (longlong)iVar13 & 0x1fffffffffffffff;
    if (plVar5 + iVar13 < plVar5) {
      uVar8 = uVar9;
    }
    uVar10 = uVar9;
    if (uVar8 != 0) {
      do {
        lVar6 = *plVar5;
        fVar14 = param_7[1];
        plVar5 = plVar5 + 1;
        fVar1 = param_7[2];
        uVar10 = uVar10 + 1;
        *(float *)(lVar6 + 0x20) = param_1 * *param_7 + *(float *)(lVar6 + 0x20);
        *(float *)(lVar6 + 0x24) = fVar14 * param_1 + *(float *)(lVar6 + 0x24);
        *(float *)(lVar6 + 0x28) = fVar1 * param_1 + *(float *)(lVar6 + 0x28);
      } while (uVar10 != uVar8);
    }
  }
  lVar6 = *param_5;
  lVar11 = (longlong)(int)param_5[1] * 0x60 + lVar6;
  for (; lVar6 != lVar11; lVar6 = lVar6 + 0x60) {
    FAnimPhysSpring::ApplyForces(lVar6);
  }
  if (0 < (int)param_8) {
    uVar8 = (ulonglong)param_8;
    do {
      lVar6 = *param_3;
      lVar11 = (longlong)(int)param_3[1] * 0x68 + lVar6;
      for (; lVar6 != lVar11; lVar6 = lVar6 + 0x68) {
        FAnimPhysLinearLimit::Iter(lVar6);
      }
      lVar6 = *param_4;
      lVar11 = (longlong)(int)param_4[1] * 0x30 + lVar6;
      for (; lVar6 != lVar11; lVar6 = lVar6 + 0x30) {
        FUN_142297890(lVar6);
      }
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  puVar12 = (undefined8 *)*param_2;
  puVar7 = puVar12 + (int)param_2[1];
  for (; puVar12 != puVar7; puVar12 = puVar12 + 1) {
    pfVar3 = (float *)*puVar12;
    fVar14 = pfVar3[0xf];
    lVar6 = 4;
    local_90 = fVar14 * pfVar3[10] * param_1 + pfVar3[2];
    *(ulonglong *)(pfVar3 + 0x30) =
         CONCAT44(fVar14 * pfVar3[9] * param_1 + pfVar3[1],fVar14 * pfVar3[8] * param_1 + *pfVar3);
    pfVar3[0x32] = local_90;
    pfVar4 = pfVar3 + 0x11;
    do {
      fVar1 = *pfVar4;
      *(float *)((longlong)pfVar4 + ((longlong)afStack_bc - (longlong)pfVar3)) = fVar14 * pfVar4[-1]
      ;
      fVar2 = pfVar4[1];
      *(float *)((longlong)pfVar4 + (longlong)afStack_bc + (4 - (longlong)pfVar3)) = fVar14 * fVar1;
      fVar1 = pfVar4[2];
      *(float *)((longlong)pfVar4 + (longlong)afStack_bc + (8 - (longlong)pfVar3)) = fVar14 * fVar2;
      *(float *)((longlong)pfVar4 + (longlong)afStack_bc + (0xc - (longlong)pfVar3)) =
           fVar14 * fVar1;
      lVar6 = lVar6 + -1;
      pfVar4 = pfVar4 + 4;
    } while (lVar6 != 0);
    afStack_bc[5] = param_1;
    pfVar4 = (float *)FUN_14229cad0(local_88,pfVar3 + 4,local_78,pfVar3 + 0xb);
    fVar14 = pfVar4[1];
    fVar1 = pfVar4[2];
    fVar2 = pfVar4[3];
    pfVar3[0x34] = *pfVar4;
    pfVar3[0x35] = fVar14;
    pfVar3[0x36] = fVar1;
    pfVar3[0x37] = fVar2;
  }
  lVar6 = *param_3;
  lVar11 = (longlong)(int)param_3[1] * 0x68 + lVar6;
  for (; lVar6 != lVar11; lVar6 = lVar6 + 0x68) {
    *(undefined4 *)(lVar6 + 0x34) = *(undefined4 *)(lVar6 + 0x38);
  }
  lVar6 = *param_4;
  lVar11 = (longlong)(int)param_4[1] * 0x30 + lVar6;
  for (; lVar6 != lVar11; lVar6 = lVar6 + 0x30) {
    if (0.0 < *(float *)(lVar6 + 0x24) || *(float *)(lVar6 + 0x24) == 0.0) {
      fVar14 = *(float *)(lVar6 + 0x20);
      if (0.0 <= fVar14) {
        fVar14 = 0.0;
      }
    }
    else {
      fVar14 = 0.0;
    }
    *(float *)(lVar6 + 0x20) = fVar14;
  }
  if (0 < (int)param_9) {
    uVar8 = (ulonglong)param_9;
    do {
      lVar6 = *param_3;
      lVar11 = (longlong)(int)param_3[1] * 0x68 + lVar6;
      for (; lVar6 != lVar11; lVar6 = lVar6 + 0x68) {
        FAnimPhysLinearLimit::Iter(lVar6,param_1);
      }
      lVar6 = *param_4;
      lVar11 = (longlong)(int)param_4[1] * 0x30 + lVar6;
      for (; lVar6 != lVar11; lVar6 = lVar6 + 0x30) {
        FUN_142297890(lVar6,param_1);
      }
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  puVar7 = (undefined8 *)*param_2;
  uVar8 = (longlong)(int)param_2[1] & 0x1fffffffffffffff;
  if (puVar7 + (int)param_2[1] < puVar7) {
    uVar8 = uVar9;
  }
  if (uVar8 != 0) {
    do {
      FAnimPhys::UpdatePose(*puVar7);
      uVar9 = uVar9 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar9 != uVar8);
  }
  return;
}



// FUNCTION 14229a180 FUN_14229a180 body=350 status=ok
// SIG undefined FUN_14229a180(void)

void FUN_14229a180(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  float *pfVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  
  *(undefined4 *)(param_1 + 0x50) = 0;
  lVar5 = (longlong)*(int *)(param_1 + 0x98);
  if (0 < *(int *)(param_1 + 0x98)) {
    lVar2 = *(longlong *)(param_1 + 0x90);
    iVar7 = 0;
    iVar4 = 1;
    fVar11 = *(float *)(lVar2 + 8);
    *(float *)(param_1 + 0x50) = fVar11;
    if (1 < lVar5) {
      lVar8 = 1;
      iVar7 = 0;
      if (4 < lVar5) {
        iVar9 = 3;
        lVar10 = (lVar5 - 5U >> 2) + 1;
        pfVar6 = (float *)(lVar2 + 0x38);
        lVar8 = lVar10 * 4 + 1;
        do {
          fVar1 = pfVar6[-6];
          if (fVar11 < fVar1) {
            *(float *)(param_1 + 0x50) = fVar1;
            fVar11 = fVar1;
            iVar7 = iVar4;
          }
          fVar1 = *pfVar6;
          if (fVar11 < fVar1) {
            *(float *)(param_1 + 0x50) = fVar1;
            iVar7 = iVar9 + -1;
            fVar11 = fVar1;
          }
          fVar1 = pfVar6[6];
          if (fVar11 < fVar1) {
            *(float *)(param_1 + 0x50) = fVar1;
            fVar11 = fVar1;
            iVar7 = iVar9;
          }
          fVar1 = pfVar6[0xc];
          if (fVar11 < fVar1) {
            *(float *)(param_1 + 0x50) = fVar1;
            iVar7 = iVar9 + 1;
            fVar11 = fVar1;
          }
          iVar4 = iVar4 + 4;
          iVar9 = iVar9 + 4;
          pfVar6 = pfVar6 + 0x18;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      if (lVar8 < lVar5) {
        fVar11 = *(float *)(param_1 + 0x50);
        lVar10 = lVar8 * 0x18;
        lVar5 = lVar5 - lVar8;
        do {
          fVar1 = *(float *)(lVar10 + 8 + lVar2);
          if (fVar11 < fVar1) {
            *(float *)(param_1 + 0x50) = fVar1;
            fVar11 = fVar1;
            iVar7 = iVar4;
          }
          iVar4 = iVar4 + 1;
          lVar10 = lVar10 + 0x18;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
    }
    plVar3 = *(longlong **)(param_1 + 0x38);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,lVar2 + (longlong)iVar7 * 0x18);
    }
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(uint *)(param_1 + 0x9c) < 0x80000000) {
    return;
  }
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
            (param_1 + 0x90,0);
  return;
}



// FUNCTION 14229a2e0 PostLoad body=41 status=ok
// SIG undefined PostLoad(void)

void UAnimNotify_PlayParticleEffect::PostLoad(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  UObject::PostLoad();
  puVar2 = (undefined8 *)FRotator::Quaternion(param_1 + 0x4c,local_18);
  uVar1 = puVar2[1];
  *(undefined8 *)(param_1 + 0x70) = *puVar2;
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  return;
}



// FUNCTION 14229a310 FUN_14229a310 body=1436 status=ok
// SIG undefined FUN_14229a310(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14229a310(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar7;
  byte bVar8;
  byte bVar9;
  longlong lVar10;
  undefined2 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined2 *puVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_178 [32];
  undefined2 *local_158;
  undefined2 *local_150;
  ulonglong local_148;
  undefined2 *local_140;
  int local_138;
  longlong local_130 [2];
  longlong local_120 [3];
  undefined1 local_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  float local_98;
  float fStack_94;
  float fStack_90;
  ulonglong local_78;
  ulonglong uVar6;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  uVar6 = 0;
  local_148 = local_148 & 0xffffffff00000000;
  FUN_1422b0550();
  cVar3 = (**(code **)(*param_1 + 0x290))(param_1);
  if (((cVar3 != '\0') && (param_1[0x30] != 0)) &&
     (*(longlong *)(param_1[0x30] + 0x38) != param_1[7])) {
    param_1[0x30] = 0;
  }
  UAnimSequenceBase::RefreshCacheData(param_1);
  fVar17 = 0.0;
  if (((int)param_1[0x17] != 0) || ((int)param_1[0x14] != 0)) {
    if (*(float *)(param_1 + 0x12) == 0.0) {
      *(undefined4 *)(param_1 + 0x12) = 0x3d088889;
    }
    else if (((*(char *)((longlong)param_1 + 0x1c1) == '\0') && (param_1[7] != 0)) &&
            (cVar3 = FUN_142297730(param_1), cVar3 == '\0')) {
      if (param_1[4] == 0) {
        puVar4 = (undefined8 *)UObjectBaseUtility::GetFullName(param_1,local_130,0);
        bVar9 = 0x20;
        if (*(int *)(puVar4 + 1) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = (undefined2 *)*puVar4;
        }
      }
      else {
        puVar4 = (undefined8 *)UObjectBaseUtility::GetFullName(param_1[4],local_120,0);
        if (*(int *)(puVar4 + 1) == 0) {
          puVar14 = &DAT_143f3eda8;
          bVar9 = 0x10;
        }
        else {
          puVar14 = (undefined2 *)*puVar4;
          bVar9 = 0x10;
        }
      }
      local_148 = param_1[3];
      FName::ToString(&local_148,&local_140);
      puVar11 = &DAT_143f3eda8;
      if (local_138 != 0) {
        puVar11 = local_140;
      }
      local_158 = puVar14;
      LowLevelFatalErrorHandler
                ("Unknown",0x1fa,L"No animation compression exists for sequence %s (%s)",puVar11);
      if (local_140 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (((bVar9 & 0x20) != 0) && (bVar9 = bVar9 & 0xdf, local_130[0] != 0)) {
        FMemory::Free();
      }
      if (((bVar9 & 0x10) != 0) && (bVar9 = bVar9 & 0xef, local_120[0] != 0)) {
        FMemory::Free();
      }
      if (param_1[4] == 0) {
        puVar4 = (undefined8 *)UObjectBaseUtility::GetFullName(param_1,local_120,0);
        bVar8 = 0x80;
        if (*(int *)(puVar4 + 1) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = (undefined2 *)*puVar4;
        }
      }
      else {
        puVar4 = (undefined8 *)UObjectBaseUtility::GetFullName(param_1[4],local_130,0);
        if (*(int *)(puVar4 + 1) == 0) {
          puVar14 = &DAT_143f3eda8;
          bVar8 = 0x40;
        }
        else {
          puVar14 = (undefined2 *)*puVar4;
          bVar8 = 0x40;
        }
      }
      local_148 = param_1[3];
      bVar9 = bVar8 | bVar9;
      FName::ToString(&local_148,&local_140);
      local_158 = &DAT_143f3eda8;
      if (local_138 != 0) {
        local_158 = local_140;
      }
      local_150 = puVar14;
      FDebug::AssertFailed
                (&DAT_14501c48d,"Unknown",0x1fa,
                 L"No animation compression exists for sequence %s (%s)");
      if (local_140 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (((char)bVar9 < '\0') && (bVar9 = bVar8 & 0x7f, local_120[0] != 0)) {
        FMemory::Free();
      }
      if (((bVar9 & 0x40) != 0) && (local_130[0] != 0)) {
        FMemory::Free();
      }
    }
  }
  lVar10 = param_1[7];
  if (lVar10 != 0) {
    uVar15 = *(undefined4 *)(lVar10 + 0x174);
    uVar1 = *(undefined4 *)(lVar10 + 0x178);
    uVar2 = *(undefined4 *)(lVar10 + 0x17c);
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(lVar10 + 0x170);
    *(undefined4 *)((longlong)param_1 + 0x54) = uVar15;
    *(undefined4 *)(param_1 + 0xb) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x5c) = uVar2;
  }
  if ((0 < (int)param_1[0x1d]) &&
     ((0 < (int)param_1[0x25] ||
      ((((char)param_1[0x1e] == '\x06' && (*(char *)((longlong)param_1 + 0xf1) == '\x06')) &&
       (*(char *)((longlong)param_1 + 0xf2) == '\x06')))))) {
    uVar12 = uVar6;
    if (0 < (int)param_1[0x1d]) {
      do {
        lVar10 = param_1[0x1c] + uVar12;
        *(undefined4 *)(lVar10 + 8) = 0;
        if (*(int *)(lVar10 + 0xc) != 0) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::
          ResizeTo(lVar10,0);
        }
        *(undefined4 *)(lVar10 + 0x18) = 0;
        if (*(int *)(lVar10 + 0x1c) != 0) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo();
        }
        *(undefined4 *)(lVar10 + 0x28) = 0;
        if (*(int *)(lVar10 + 0x2c) != 0) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::
          ResizeTo(lVar10 + 0x20,0);
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        uVar12 = uVar12 + 0x30;
      } while ((int)uVar5 < (int)param_1[0x1d]);
    }
    TArray<FRawAnimSequenceTrack,TSizedDefaultAllocator<32>_>::Empty(param_1 + 0x1c,0);
  }
  lVar10 = param_1[0x10];
  lVar7 = (longlong)(int)param_1[0x11] * 0xa8 + lVar10;
  for (; lVar10 != lVar7; lVar10 = lVar10 + 0xa8) {
    if (*(float *)(lVar10 + 0x30) == 0.0) {
      uVar15 = FAnimLinkableElement::GetTime(lVar10,0);
    }
    else {
      FAnimLinkableElement::Clear();
      uVar15 = *(undefined4 *)(lVar10 + 0x30);
    }
    FAnimLinkableElement::LinkSequence(lVar10,param_1,uVar15);
    if (*(float *)(lVar10 + 0x58) != 0.0) {
      fVar16 = (float)FAnimLinkableElement::GetTime(lVar10,0);
      FAnimLinkableElement::LinkSequence(lVar10 + 0x60,param_1,fVar16 + *(float *)(lVar10 + 0x58));
    }
  }
  lVar10 = param_1[7];
  if (lVar10 != 0) {
    lVar7 = param_1[0x2b];
    lVar13 = (longlong)(int)param_1[0x2c] * 0x90 + lVar7;
    for (; lVar7 != lVar13; lVar7 = lVar7 + 0x90) {
      USkeleton::VerifySmartName(lVar10,&DAT_146aef308,lVar7 + 8);
    }
    lVar7 = param_1[0x2d];
    lVar13 = (longlong)(int)param_1[0x2e] * 0x470 + lVar7;
    for (; lVar7 != lVar13; lVar7 = lVar7 + 0x470) {
      USkeleton::VerifySmartName(lVar10,&DAT_146aef310,lVar7 + 8);
    }
  }
  if ((*(float *)((longlong)param_1 + 0x1dc) <= 0.0 && *(float *)((longlong)param_1 + 0x1dc) != 0.0)
     && (fVar16 = *(float *)(param_1 + 0x12), 0.0 <= fVar16)) {
    fVar18 = 0.0;
    if (0.0 < fVar16) {
      do {
        FUN_142291cd0(param_1,local_108,fVar18,0);
        fVar18 = fVar18 + 0.01;
        FUN_142291cd0(param_1,local_d8,fVar18);
        local_e8 = 0x3f8000003f800000;
        uStack_e0 = 0x3f800000;
        local_b8 = 0x3f8000003f800000;
        uStack_b0 = 0x3f800000;
        FUN_14162bcf0(local_d8,local_a8,local_108);
        fVar17 = fVar17 + SQRT(fStack_94 * fStack_94 + local_98 * local_98 + fStack_90 * fStack_90);
        fVar16 = *(float *)(param_1 + 0x12);
      } while (fVar18 < fVar16);
    }
    *(float *)((longlong)param_1 + 0x1dc) = fVar17 / fVar16;
  }
  return;
}



// FUNCTION 14229a8e0 FUN_14229a8e0 body=297 status=ok
// SIG undefined FUN_14229a8e0(void)

void FUN_14229a8e0(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  float fVar6;
  undefined1 local_res8 [8];
  
  lVar2 = *(longlong *)(param_1 + 0x1a0);
  iVar4 = *(int *)(param_1 + 0x1a8);
  lVar3 = (longlong)iVar4 * 0x10 + lVar2;
  if (lVar2 != lVar3) {
    do {
      fVar1 = *(float *)(lVar2 + 8);
      if (0.0 <= fVar1) {
        fVar6 = *(float *)(param_1 + 0x90);
        if (fVar1 <= *(float *)(param_1 + 0x90)) {
          fVar6 = fVar1;
        }
      }
      else {
        fVar6 = 0.0;
      }
      *(float *)(lVar2 + 8) = fVar6;
      lVar2 = lVar2 + 0x10;
    } while (lVar2 != lVar3);
    iVar4 = *(int *)(param_1 + 0x1a8);
  }
  AlgoImpl::
  IntroSortInternal<FAnimSyncMarker,FIdentityFunctor,TDereferenceWrapper<FAnimSyncMarker,TLess<FAnimSyncMarker>_>_>
            (*(undefined8 *)(param_1 + 0x1a0),(longlong)iVar4,local_res8[0],local_res8);
  lVar2 = param_1 + 0x1b0;
  if (*(int *)(param_1 + 0x1a8) < 1) {
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    if (*(int *)(param_1 + 0x1bc) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(lVar2,0);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    if ((*(int *)(param_1 + 0x1bc) < 0) && (*(int *)(param_1 + 0x1bc) != 0)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(lVar2,0);
    }
    if (*(int *)(param_1 + 0x1bc) < *(int *)(param_1 + 0x1a8)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(lVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x1a0);
    lVar5 = (longlong)*(int *)(param_1 + 0x1a8) * 0x10 + lVar3;
    for (; lVar3 != lVar5; lVar3 = lVar3 + 0x10) {
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(lVar2,lVar3);
    }
  }
  UAnimSequenceBase::RefreshCacheData(param_1);
  return;
}



// FUNCTION 14229aa10 FUN_14229aa10 body=235 status=ok
// SIG undefined FUN_14229aa10(void)

void FUN_14229aa10(longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_3 != 0) {
    lVar2 = *param_1 + 0x60 + (longlong)param_2 * 0xd8;
    iVar3 = param_3;
    do {
      if (*(longlong *)(lVar2 + 0x20) != 0) {
        FMemory::Free();
      }
      FUN_14084c260(lVar2);
      if (*(longlong *)(lVar2 + -0x10) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar2 + -0x50) != 0) {
        FMemory::Free();
      }
      lVar2 = lVar2 + 0xd8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar1 = (iVar3 - param_2) - param_3;
    if (iVar1 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0xd8),
                 (void *)((longlong)(param_2 + param_3) * 0xd8 + *param_1),(longlong)iVar1 * 0xd8);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      TArray<FSessionSortDetails,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 14229ab00 FUN_14229ab00 body=235 status=ok
// SIG undefined FUN_14229ab00(void)

void FUN_14229ab00(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar3 = (int)param_1[1];
  if (iVar1 < param_2) {
    if (iVar3 != 0) {
      lVar2 = *param_1 + 0x60;
      do {
        if (*(longlong *)(lVar2 + 0x20) != 0) {
          FMemory::Free();
        }
        FUN_14084c260(lVar2);
        if (*(longlong *)(lVar2 + -0x10) != 0) {
          FMemory::Free();
        }
        if (*(longlong *)(lVar2 + -0x50) != 0) {
          FMemory::Free();
        }
        lVar2 = lVar2 + 0xd8;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      iVar1 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar1 != param_2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<216,8>_>,FDefaultAllocator>::ResizeTo
                (param_1,param_2);
    }
  }
  else {
    if (iVar3 != 0) {
      lVar2 = *param_1 + 0x60;
      do {
        if (*(longlong *)(lVar2 + 0x20) != 0) {
          FMemory::Free();
        }
        FUN_14084c260(lVar2);
        if (*(longlong *)(lVar2 + -0x10) != 0) {
          FMemory::Free();
        }
        if (*(longlong *)(lVar2 + -0x50) != 0) {
          FMemory::Free();
        }
        lVar2 = lVar2 + 0xd8;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 14229abf0 FUN_14229abf0 body=99 status=ok
// SIG undefined FUN_14229abf0(void)

void FUN_14229abf0(undefined4 *param_1,longlong param_2)

{
  param_1[6] = 0;
  if (0x7fffffff < (uint)param_1[7]) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 4,0);
  }
  TSet<TTuple<UClass_*,TArray<ULinkerPlaceholderExportObject_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<ULinkerPlaceholderExportObject_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
  ::Reset(param_1 + 8);
  TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
  ::Reset(param_1 + 0x1c);
  if (param_2 != 0) {
    *param_1 = *(undefined4 *)(param_2 + 0x83c);
    return;
  }
  *param_1 = 0xffffffff;
  return;
}



// FUNCTION 14229ac70 FUN_14229ac70 body=225 status=ok
// SIG undefined FUN_14229ac70(void)

void FUN_14229ac70(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  iVar3 = 0;
  lVar4 = *param_1 + 0x3a0;
  param_1[3] = lVar4;
  iVar5 = 0;
  iVar2 = *(int *)(*param_1 + 0x3a8);
  *(undefined4 *)(param_1 + 2) = 0;
  if (*(int *)((longlong)param_1 + 0x14) < iVar2) {
    FUN_140848c80(param_1 + 1,iVar2);
    iVar3 = (int)param_1[2];
  }
  *(int *)(param_1 + 2) = iVar3 + iVar2;
  if (*(int *)((longlong)param_1 + 0x14) < iVar3 + iVar2) {
    TArray<FTransform,TMemStackAllocator<0>_>::ResizeGrow(param_1 + 1);
  }
  FUN_1408488d0(param_1 + 1,param_1[3]);
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != (int)param_1[2]) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 4);
    iVar5 = (int)param_1[5];
  }
  lVar1 = param_1[2];
  iVar2 = iVar5 + (int)lVar1;
  *(int *)(param_1 + 5) = iVar2;
  if (*(int *)((longlong)param_1 + 0x2c) < iVar2) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 4);
  }
  _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar5 + param_1[4]),0,(longlong)(int)lVar1);
  *(undefined1 *)param_1[4] = 1;
  FBaseBlendedCurve<TMemStackAllocator<0>_>::InitFrom(param_1 + 10,lVar4);
  return;
}



// FUNCTION 14229ad60 FUN_14229ad60 body=149 status=ok
// SIG undefined FUN_14229ad60(void)

void FUN_14229ad60(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x10);
  if (param_3 < 4) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 2);
    pvVar1 = *(void **)((longlong)param_1 + 0x10);
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
        *(void **)((longlong)param_1 + 0x10) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 2);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar2;
  return;
}



// FUNCTION 14229ae00 ResizeGrow body=132 status=ok
// SIG undefined ResizeGrow(void)

void TArray<int,TInlineAllocator<3,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 < 4) {
    iVar2 = 3;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x1c) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 * 4,0);
    iVar2 = (int)(uVar3 >> 2);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x1c) = iVar2;
  FUN_14229ad60(param_1,param_2,iVar2,4);
  return;
}



// FUNCTION 14229ae90 FUN_14229ae90 body=101 status=ok
// SIG undefined FUN_14229ae90(void)

void FUN_14229ae90(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 4) {
      iVar1 = 3;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 2,0);
      iVar1 = (int)(uVar2 >> 2);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0x1c)) {
    *(int *)(param_1 + 0x1c) = iVar1;
    FUN_14229ad60(param_1,*(undefined4 *)(param_1 + 0x18),iVar1,4);
  }
  return;
}



// FUNCTION 14229af00 FUN_14229af00 body=1206 status=ok
// SIG undefined FUN_14229af00(void)

void FUN_14229af00(longlong param_1,longlong *param_2)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  int local_res10 [2];
  byte local_res18 [8];
  longlong local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0088);
  iVar8 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  if (param_2[0xe] != 0) {
    plVar11 = (longlong *)(param_1 + 0x98);
    if (&local_58 == plVar11) {
      iVar8 = *(int *)(param_1 + 0xa4);
    }
    else {
      local_58 = *plVar11;
      *plVar11 = 0;
      local_50 = *(undefined8 *)(param_1 + 0xa0);
      *(undefined8 *)(param_1 + 0xa0) = 0;
    }
    iVar6 = *(int *)(param_1 + 0xa0);
    if (iVar8 < 0) {
      if (iVar6 != 0) {
        lVar9 = *plVar11 + 0x20;
        do {
          FRichCurve::~FRichCurve(lVar9);
          lVar9 = lVar9 + 0x90;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        iVar8 = *(int *)(param_1 + 0xa4);
      }
      *(undefined4 *)(param_1 + 0xa0) = 0;
      if (iVar8 != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<144,8>_>,FDefaultAllocator>::ResizeTo
                  (plVar11,0);
      }
    }
    else {
      if (iVar6 != 0) {
        lVar9 = *plVar11 + 0x20;
        do {
          FRichCurve::~FRichCurve(lVar9);
          lVar9 = lVar9 + 0x90;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      *(undefined4 *)(param_1 + 0xa0) = 0;
    }
    plVar11 = (longlong *)(param_1 + 0xa8);
    FUN_142287a70(&local_48,plVar11);
    iVar8 = *(int *)(param_1 + 0xb4);
    iVar6 = *(int *)(param_1 + 0xb0);
    if (iVar8 < 0) {
      if (iVar6 != 0) {
        lVar9 = *plVar11 + 0x300;
        do {
          lVar7 = 3;
          lVar10 = lVar9 + 0x170;
          do {
            lVar10 = lVar10 + -0x70;
            FRichCurve::~FRichCurve(lVar10);
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
          lVar7 = 3;
          lVar10 = lVar9;
          do {
            lVar10 = lVar10 + -0x70;
            FRichCurve::~FRichCurve(lVar10);
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
          lVar7 = 3;
          lVar10 = lVar9 + -0x170;
          do {
            lVar10 = lVar10 + -0x70;
            FRichCurve::~FRichCurve(lVar10);
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
          lVar9 = lVar9 + 0x470;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        iVar8 = *(int *)(param_1 + 0xb4);
      }
      *(undefined4 *)(param_1 + 0xb0) = 0;
      if (iVar8 != 0) {
        FUN_14227dd30(plVar11,0);
      }
    }
    else {
      if (iVar6 != 0) {
        lVar9 = *plVar11 + 0x300;
        do {
          lVar7 = 3;
          lVar10 = lVar9 + 0x170;
          do {
            lVar10 = lVar10 + -0x70;
            FRichCurve::~FRichCurve(lVar10);
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
          lVar7 = 3;
          lVar10 = lVar9;
          do {
            lVar10 = lVar10 + -0x70;
            FRichCurve::~FRichCurve(lVar10);
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
          lVar7 = 3;
          lVar10 = lVar9 + -0x170;
          do {
            lVar10 = lVar10 + -0x70;
            FRichCurve::~FRichCurve(lVar10);
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
          lVar9 = lVar9 + 0x470;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      *(undefined4 *)(param_1 + 0xb0) = 0;
    }
  }
  FUN_1422b2ce0(param_1,param_2);
  if (param_2[0xe] != 0) {
    plVar11 = (longlong *)(param_1 + 0x98);
    if (plVar11 != &local_58) {
      iVar8 = *(int *)(param_1 + 0xa0);
      lVar9 = *plVar11;
      if (iVar8 != 0) {
        lVar9 = lVar9 + 0x20;
        do {
          FRichCurve::~FRichCurve(lVar9);
          lVar9 = lVar9 + 0x90;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        lVar9 = *plVar11;
      }
      if (lVar9 != 0) {
        FMemory::Free();
      }
      *plVar11 = local_58;
      *(int *)(param_1 + 0xa0) = (int)local_50;
      *(undefined4 *)(param_1 + 0xa4) = local_50._4_4_;
      local_50 = 0;
      local_58 = 0;
    }
    FUN_142287a70(param_1 + 0xa8,&local_48);
  }
  FUN_14242a0d0(local_res18,param_2,0,0xd6);
  if ((local_res18[0] & 1) == 0) {
    FUN_142287be0(param_2,param_1 + 0xe0);
  }
  iVar8 = FArchive::CustomVer(param_2,&DAT_1464b0088);
  if (iVar8 < 5) {
    plVar11 = (longlong *)param_2[1];
    if ((int *)plVar11[1] < (int *)*plVar11 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res10,4);
      }
    }
    else {
      local_res10[0] = *(int *)*plVar11;
      *plVar11 = *plVar11 + 4;
    }
    local_68 = 0;
    local_5c = 0;
    local_60 = local_res10[0];
    if (0 < local_res10[0]) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_68,0);
    }
    lVar9 = local_68;
    (**(code **)(*param_2 + 0x50))(param_2,local_68,(longlong)local_res10[0]);
    if (lVar9 != 0) {
      FMemory::Free(lVar9);
    }
    goto LAB_14229b35a;
  }
  uVar2 = *(uint *)(param_2 + 6);
  plVar11 = (longlong *)param_2[0xe];
  if ((plVar11 == (longlong *)0x0) ||
     (cVar4 = (**(code **)(*plVar11 + 0x88))(plVar11), cVar4 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  bVar1 = *(byte *)((longlong)param_2 + 0x2a);
  if (plVar11 == (longlong *)0x0) {
LAB_14229b300:
    if (((uVar2 & 0x401000) != 0) || ((bVar1 & 0x20) != 0)) goto LAB_14229b30f;
    uVar5 = 0;
  }
  else {
    plVar11 = (longlong *)FUN_1428e5be0();
    lVar9 = plVar11[0x1f];
    if (lVar9 == 0) {
      (**(code **)(*plVar11 + 0x368))(plVar11);
      lVar9 = plVar11[0x1f];
    }
    if (((*(char *)(lVar9 + 0x6e) != '\0') && (bVar3)) && (*(char *)(param_1 + 0x199) == '\0'))
    goto LAB_14229b300;
LAB_14229b30f:
    uVar5 = 1;
  }
  local_res10[0] = CONCAT31(local_res10[0]._1_3_,uVar5);
  (**(code **)(*param_2 + 8))(param_2,local_res10);
  if ((uVar2 & 0x401000) != 0) {
    (**(code **)(*param_2 + 8))(param_2,param_1 + 0x1c1);
  }
  if ((char)local_res10[0] != '\0') {
    FUN_14229b3c0(param_1,param_2,0);
    (**(code **)(*param_2 + 8))(param_2,param_1 + 0x1c0);
  }
LAB_14229b35a:
  FUN_1422557f0(&local_48);
  lVar9 = local_58;
  if ((int)local_50 != 0) {
    lVar10 = local_58 + 0x20;
    iVar8 = (int)local_50;
    do {
      FRichCurve::~FRichCurve(lVar10);
      lVar10 = lVar10 + 0x90;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if (lVar9 != 0) {
    FMemory::Free(lVar9);
  }
  return;
}



// FUNCTION 14229b3c0 FUN_14229b3c0 body=1202 status=ok
// SIG undefined FUN_14229b3c0(void)

void FUN_14229b3c0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong local_res8 [2];
  longlong local_e8;
  ulonglong local_e0;
  undefined **local_d8 [5];
  byte local_af;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  
  puVar3 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x130,1);
  }
  else {
    *(undefined1 *)(param_1 + 0x130) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar3 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xf0,1);
  }
  else {
    *(undefined1 *)(param_1 + 0xf0) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar3 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xf1,1);
  }
  else {
    *(undefined1 *)(param_1 + 0xf1) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar3 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xf2,1);
  }
  else {
    *(undefined1 *)(param_1 + 0xf2) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  FUN_1408bda20(param_2,param_1 + 0xf8);
  puVar1 = (undefined4 *)(param_1 + 0x118);
  plVar6 = (longlong *)FUN_1408bda20(param_2);
  puVar4 = *(undefined4 **)plVar6[1];
  if ((undefined4 *)((undefined8 *)plVar6[1])[1] < puVar4 + 1) {
    (**(code **)(*plVar6 + 0x50))(plVar6,puVar1,4);
    if ((*(byte *)((longlong)plVar6 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(plVar6,puVar1,4);
    }
  }
  else {
    *puVar1 = *puVar4;
    *(longlong *)plVar6[1] = *(longlong *)plVar6[1] + 4;
  }
  FUN_142287d90(param_2,param_1 + 0xd0);
  FUN_142255c00(param_2,param_1 + 0x158);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x178,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x178,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x178) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if (((*(byte *)(param_2 + 5) & 2) == 0) && ((*(byte *)((longlong)param_2 + 0x2a) & 0x20) == 0))
    {
      return;
    }
    if (*(ulonglong *)(param_1 + 0x138) == 0) {
      cVar2 = *(char *)(param_1 + 0x130);
      uVar9 = DAT_146aef128;
      if (((cVar2 != '\0') && (uVar9 = DAT_146aef1d0, cVar2 != '\x01')) &&
         (uVar9 = DAT_146aef1d8, cVar2 != '\x02')) {
        uVar9 = 0;
      }
      *(ulonglong *)(param_1 + 0x138) = uVar9;
    }
    local_res8[0] = 0;
    (**(code **)(*param_2 + 0x40))(param_2);
    local_e8 = 0;
    local_e0 = 0;
    local_e0._0_4_ = 0;
    if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
      uVar8 = FUN_1408357d0();
      FUN_14229b890(uVar8,param_1);
      (**(code **)(**(longlong **)(param_1 + 0x148) + 8))
                (*(longlong **)(param_1 + 0x148),param_1,&local_e8,
                 *(byte *)((longlong)param_2 + 0x29) >> 4 & 1);
    }
    plVar6 = (longlong *)param_2[1];
    local_res8[0] = CONCAT44(local_res8[0]._4_4_,(int)local_e0);
    if ((undefined4 *)plVar6[1] < (undefined4 *)*plVar6 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res8,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res8,4);
      }
    }
    else {
      local_res8[0] = CONCAT44(local_res8[0]._4_4_,*(undefined4 *)*plVar6);
      *plVar6 = *plVar6 + 4;
    }
    (**(code **)(*param_2 + 0x50))(param_2,local_e8,(longlong)(int)local_e0);
    (**(code **)(*param_2 + 0x78))(param_2,(longlong)(int)local_e0,(longlong)(int)local_e0);
  }
  else {
    (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0x138);
    uVar9 = 0;
    if (*(longlong *)(param_1 + 0x138) == 0) {
      cVar2 = *(char *)(param_1 + 0x130);
      uVar7 = DAT_146aef128;
      if (((cVar2 != '\0') && (uVar7 = DAT_146aef1d0, cVar2 != '\x01')) &&
         (uVar7 = DAT_146aef1d8, cVar2 != '\x02')) {
        uVar7 = uVar9;
      }
      *(ulonglong *)(param_1 + 0x138) = uVar7;
    }
    local_res8[1] = 0;
    plVar6 = (longlong *)param_2[1];
    if ((undefined4 *)plVar6[1] < (undefined4 *)*plVar6 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res8,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res8,4);
      }
    }
    else {
      local_res8[0] = CONCAT44(local_res8[0]._4_4_,*(undefined4 *)*plVar6);
      *plVar6 = *plVar6 + 4;
    }
    local_e8 = 0;
    local_e0 = 0;
    uVar7 = uVar9;
    iVar10 = 0;
    if ((int)local_res8[0] != 0) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_e8,local_res8[0] & 0xffffffff);
      uVar7 = local_e0 >> 0x20;
      uVar9 = local_e0 & 0xffffffff;
      iVar10 = (int)local_res8[0];
    }
    iVar5 = (int)uVar9 + iVar10;
    local_e0 = CONCAT44(local_e0._4_4_,iVar5);
    if ((int)uVar7 < iVar5) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_e8);
      iVar10 = (int)local_res8[0];
    }
    (**(code **)(*param_2 + 0x50))(param_2,local_e8,(longlong)iVar10);
    FArchive::FArchive(local_d8);
    local_48 = 0;
    local_d8[0] = &PTR_FUN_143f4a3a0;
    local_40 = &local_e8;
    local_38 = 0x7fffffffffffffff;
    FArchive::SetIsLoading(local_d8,1);
    FArchive::SetIsPersistent(local_d8,1);
    local_af = local_af ^ (*(byte *)((longlong)param_2 + 0x29) ^ local_af) & 0x10;
    uVar8 = FUN_1408357d0();
    FUN_14229b890(uVar8,param_1);
    (**(code **)**(undefined8 **)(param_1 + 0x148))
              (*(undefined8 **)(param_1 + 0x148),param_1,local_d8);
    FArchive::~FArchive(local_d8);
  }
  if (local_e8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14229b890 FUN_14229b890 body=193 status=ok
// SIG undefined FUN_14229b890(void)

void FUN_14229b890(longlong *param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 local_res8;
  
  local_res8 = *(undefined8 *)(param_2 + 0x138);
  puVar4 = (undefined8 *)0x0;
  lVar3 = *param_1;
  uVar2 = (ulonglong)(int)param_1[1];
  iVar1 = 0;
  puVar7 = puVar4;
  if ((int)param_1[1] != 0) {
    do {
      uVar5 = uVar2 >> 1;
      iVar1 = FName::Compare((uVar5 + (longlong)puVar7) * 0x10 + lVar3,&local_res8);
      if (iVar1 < 0) {
        puVar7 = (undefined8 *)((ulonglong)((uint)uVar2 & 1) + uVar5 + (longlong)puVar7);
      }
      uVar2 = uVar5;
    } while (uVar5 != 0);
    iVar1 = (int)param_1[1];
  }
  iVar6 = (int)puVar7;
  if ((ulonglong)(longlong)iVar6 < (ulonglong)(longlong)iVar1) {
    lVar3 = (longlong)iVar6 * 0x10;
    iVar1 = FName::Compare(&local_res8,*param_1 + lVar3);
    if ((-1 < iVar1) && (iVar6 != -1)) {
      puVar4 = (undefined8 *)(*param_1 + 8 + lVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014229b94e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(param_2);
  return;
}



// FUNCTION 14229b960 FUN_14229b960 body=1087 status=ok
// SIG undefined FUN_14229b960(void)

void FUN_14229b960(longlong param_1,longlong *param_2,uint param_3,char param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  char cVar15;
  undefined4 *puVar16;
  float fVar17;
  longlong local_res8;
  longlong *local_res10;
  uint local_res18;
  char local_res20;
  longlong local_50 [2];
  
  uVar1 = *(uint *)(param_1 + 0x48);
  uVar13 = (ulonglong)(int)uVar1;
  if (param_3 == uVar1) {
    return;
  }
  uVar14 = uVar1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((uVar1 != 0xffffffff) && ((int)uVar1 < *(int *)(param_1 + 0xa0))) {
    TBaseDelegate<void,FAnimNode_StateMachine_const_&,int,int>::ExecuteIfBound
              (uVar13 * 0x10 + *(longlong *)(param_1 + 0x98),param_1,uVar13,param_3);
    uVar14 = *(uint *)(param_1 + 0x48);
    uVar13 = (ulonglong)uVar14;
  }
  uVar12 = 0;
  uVar4 = 0;
  if ((uVar14 != 0xffffffff) && (*(int *)(param_1 + 0x140) != *(int *)(param_1 + 0x16c))) {
    lVar7 = *(longlong *)(param_1 + 0x178);
    if (*(longlong *)(param_1 + 0x178) == 0) {
      lVar7 = param_1 + 0x170;
    }
    iVar3 = *(int *)(lVar7 + ((longlong)*(int *)(param_1 + 0x180) - 1U & (longlong)(int)uVar14) * 4)
    ;
    if (iVar3 != -1) {
      lVar11 = *(longlong *)(param_1 + 0x138);
      do {
        if (*(uint *)(lVar11 + (longlong)iVar3 * 0x28) == uVar14) {
          if (iVar3 != -1) {
            iVar3 = *(int *)(lVar7 + ((longlong)*(int *)(param_1 + 0x180) - 1U &
                                     (longlong)(int)uVar13) * 4);
            goto joined_r0x00014229ba5f;
          }
          break;
        }
        iVar3 = *(int *)(lVar11 + 0x20 + (longlong)iVar3 * 0x28);
      } while (iVar3 != -1);
    }
  }
  goto LAB_14229ba93;
joined_r0x00014229ba5f:
  if (iVar3 == -1) goto LAB_14229ba81;
  uVar6 = lVar11 + (longlong)iVar3 * 0x28;
  if (*(int *)(lVar11 + (longlong)iVar3 * 0x28) == (int)uVar13) {
    if (iVar3 != -1) goto LAB_14229ba84;
    goto LAB_14229ba81;
  }
  iVar3 = *(int *)(uVar6 + 0x20);
  goto joined_r0x00014229ba5f;
LAB_14229ba81:
  uVar6 = uVar12;
LAB_14229ba84:
  FUN_14228b4c0(uVar6 + 8,param_1,uVar13,param_3);
LAB_14229ba93:
  lVar7 = *(longlong *)(param_1 + 0x40);
  if (((-1 < (int)param_3) && ((int)param_3 < *(int *)(lVar7 + 0x18))) &&
     ((param_4 != '\0' ||
      (local_res20 = '\0',
      *(char *)(*(longlong *)(lVar7 + 0x10) + 0x40 + (longlong)(int)param_3 * 0x58) != '\0')))) {
    local_res20 = '\x01';
  }
  fVar17 = (float)FUN_1422960a0(param_1,param_3);
  plVar9 = local_res10;
  local_res8 = CONCAT71(local_res8._1_7_,0.0 < fVar17);
  if ((-1 < (int)param_3) && (uVar4 = *(int *)(lVar7 + 0x18) - 1, (int)param_3 < (int)uVar4)) {
    uVar4 = param_3;
  }
  *(uint *)(param_1 + 0x48) = uVar4;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  puVar16 = *(undefined4 **)((longlong)(int)uVar4 * 0x58 + 0x30 + *(longlong *)(lVar7 + 0x10));
  uVar6 = (ulonglong)*(int *)((longlong)(int)uVar4 * 0x58 + 0x38 + *(longlong *)(lVar7 + 0x10));
  uVar13 = uVar6 & 0x3fffffffffffffff;
  if (puVar16 + uVar6 < puVar16) {
    uVar13 = uVar12;
  }
  cVar15 = 0.0 < fVar17;
  if (uVar13 != 0) {
    do {
      uVar2 = *puVar16;
      lVar7 = *plVar9;
      FUN_1428f56b0();
      lVar7 = FAnimInstanceProxy::GetNodeFromIndexUntyped(lVar7,uVar2);
      if (lVar7 != 0) {
        *(undefined4 *)(lVar7 + 0x3c) = 0;
      }
      puVar16 = puVar16 + 1;
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar13);
    cVar15 = (char)local_res8;
    param_3 = local_res18;
  }
  plVar9 = (longlong *)0x0;
  if (((cVar15 != '\0') && (local_res20 == '\0')) ||
     ((lVar7 = *(longlong *)(param_1 + 0x40), lVar7 != 0 &&
      (((int)param_3 < *(int *)(lVar7 + 0x18) &&
       (*(char *)((longlong)(int)param_3 * 0x58 + 0x28 + *(longlong *)(lVar7 + 0x10)) != '\0'))))))
  goto LAB_14229bc82;
  lVar11 = (longlong)(int)param_3;
  lVar7 = *(longlong *)(param_1 + 0x68);
  local_res8 = *local_res10;
  puVar10 = *(undefined8 **)(lVar7 + 8 + lVar11 * 0x18);
  if (puVar10 == (undefined8 *)0x0) {
    iVar3 = *(int *)(lVar7 + lVar11 * 0x18);
    if (iVar3 != -1) {
      if (local_res8 != 0) {
        plVar9 = *(longlong **)(local_res8 + 0xa8);
      }
      lVar8 = (**(code **)(*plVar9 + 0x20))(plVar9);
      if ((iVar3 < 0) || (*(int *)(lVar8 + 8) <= iVar3)) {
        puVar10 = *(undefined8 **)(lVar7 + 8 + lVar11 * 0x18);
      }
      else {
        iVar3 = *(int *)(lVar7 + lVar11 * 0x18);
        plVar9 = (longlong *)(**(code **)(*plVar9 + 0x20))(plVar9);
        puVar10 = (undefined8 *)
                  (*(longlong *)(local_res8 + 0xa0) +
                  (longlong)*(int *)(*(longlong *)(*plVar9 + (longlong)iVar3 * 8) + 0x44));
        *(undefined8 **)(lVar7 + 8 + lVar11 * 0x18) = puVar10;
      }
    }
    plVar9 = local_res10;
    if (puVar10 != (undefined8 *)0x0) goto LAB_14229bc5d;
  }
  else {
LAB_14229bc5d:
    plVar9 = local_res10;
    (**(code **)*puVar10)(puVar10,&local_res8);
  }
  local_50[0] = *plVar9;
  FUN_14228c540(param_1,param_3,local_50);
LAB_14229bc82:
  iVar3 = *(int *)(param_1 + 0x48);
  if ((iVar3 != -1) && (iVar3 < *(int *)(param_1 + 0x90))) {
    TBaseDelegate<void,FAnimNode_StateMachine_const_&,int,int>::ExecuteIfBound
              ((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x88),param_1,uVar1);
    iVar3 = *(int *)(param_1 + 0x48);
  }
  if ((iVar3 != -1) && (*(int *)(param_1 + 0xf0) != *(int *)(param_1 + 0x11c))) {
    lVar7 = *(longlong *)(param_1 + 0x128);
    if (*(longlong *)(param_1 + 0x128) == 0) {
      lVar7 = param_1 + 0x120;
    }
    iVar5 = *(int *)(lVar7 + ((longlong)*(int *)(param_1 + 0x130) - 1U & (longlong)iVar3) * 4);
    if (iVar5 != -1) {
      lVar11 = *(longlong *)(param_1 + 0xe8);
      while (*(int *)(lVar11 + (longlong)iVar5 * 0x28) != iVar3) {
        iVar5 = *(int *)(lVar11 + 0x20 + (longlong)iVar5 * 0x28);
        if (iVar5 == -1) {
          return;
        }
      }
      if (iVar5 != -1) {
        iVar5 = *(int *)(lVar7 + ((longlong)*(int *)(param_1 + 0x130) - 1U & (longlong)iVar3) * 4);
        while (iVar5 != -1) {
          lVar7 = lVar11 + (longlong)iVar5 * 0x28;
          if (*(int *)(lVar11 + (longlong)iVar5 * 0x28) == iVar3) {
            if (iVar5 != -1) goto LAB_14229bd82;
            break;
          }
          iVar5 = *(int *)(lVar7 + 0x20);
        }
        lVar7 = 0;
LAB_14229bd82:
        FUN_14228b4c0(lVar7 + 8,param_1,uVar1);
      }
    }
  }
  return;
}



// FUNCTION 14229bda0 FUN_14229bda0 body=802 status=ok
// SIG undefined FUN_14229bda0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14229bda0(longlong param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 *local_100;
  uint local_f8;
  undefined1 local_f0;
  undefined1 local_e8;
  byte local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  lVar6 = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    if ((*(uint *)(*(longlong *)(param_1 + 0x38) + 0x14c) >> 1 & 1) == 0) {
      lVar6 = *(longlong *)(param_1 + 0x10);
      lVar5 = FUN_1428f13a0();
      bVar7 = lVar6 == lVar5;
      if ((*(uint *)(param_1 + 0x80) & 1) == 0) {
        (**(code **)(*param_2 + 0x420))(param_2,&local_98,*(undefined8 *)(param_1 + 0x88),0);
        local_78 = *(float *)(param_1 + 0x40) * local_78;
        fStack_74 = *(float *)(param_1 + 0x44) * fStack_74;
        fStack_70 = *(float *)(param_1 + 0x48) * fStack_70;
        fVar8 = fStack_70 * fStack_94 - fStack_74 * fStack_90;
        fVar9 = local_78 * fStack_90 - fStack_70 * local_98;
        fVar10 = fStack_74 * local_98 - local_78 * fStack_94;
        fVar8 = fVar8 + fVar8;
        fVar9 = fVar9 + fVar9;
        fVar10 = fVar10 + fVar10;
        fVar1 = *(float *)(param_1 + 0x70);
        fVar2 = *(float *)(param_1 + 0x74);
        fVar3 = *(float *)(param_1 + 0x78);
        fVar4 = *(float *)(param_1 + 0x7c);
        local_58._4_4_ =
             (fVar8 * fStack_90 - fVar10 * local_98) + fStack_8c * fVar9 + fStack_74 + fStack_84;
        local_58._0_4_ =
             (fVar10 * fStack_94 - fVar9 * fStack_90) + fStack_8c * fVar8 + local_78 + local_88;
        local_58._8_4_ =
             (fVar9 * local_98 - fVar8 * fStack_94) + fStack_8c * fVar10 + fStack_70 + fStack_80;
        local_58._12_4_ = 0;
        local_68 = local_98 * fVar4 * _DAT_146aef150 + fStack_8c * fVar1 +
                   fStack_94 * fVar3 * _DAT_146aef140 + fStack_90 * fVar2 * _DAT_146aef130;
        fStack_64 = local_98 * fVar3 * fRam0000000146aef154 + fStack_8c * fVar2 +
                    fStack_94 * fVar4 * fRam0000000146aef144 +
                    fStack_90 * fVar1 * fRam0000000146aef134;
        fStack_60 = local_98 * fVar2 * fRam0000000146aef158 + fStack_8c * fVar3 +
                    fStack_94 * fVar1 * fRam0000000146aef148 +
                    fStack_90 * fVar4 * fRam0000000146aef138;
        fStack_5c = local_98 * fVar1 * fRam0000000146aef15c + fStack_8c * fVar4 +
                    fStack_94 * fVar2 * fRam0000000146aef14c +
                    fStack_90 * fVar3 * fRam0000000146aef13c;
        lVar6 = param_2[0x24];
        local_48._12_4_ = 0;
        local_48._0_12_ = *(undefined1 (*) [12])(param_1 + 0x58);
        if (lVar6 == 0) {
          lVar6 = FUN_1423407b0(param_2);
        }
        local_100 = (undefined8 *)0x0;
        local_108 = (undefined8 *)CONCAT71(local_108._1_7_,bVar7);
        lVar6 = FUN_14245f910(lVar6,*(undefined8 *)(param_1 + 0x38),&local_68,1);
        if (((*(byte *)(param_1 + 0x80) & 2) != 0) && (lVar6 != 0)) {
          FUN_1423979a0(lVar6,*(byte *)(param_2 + 0x5e) >> 5 & 1);
          FUN_142397970(lVar6,*(byte *)(param_2 + 0x5e) >> 6 & 1);
          FUN_142398e60(lVar6,(int)param_2[0xd7],0);
          FUN_142398ea0(lVar6,param_2[0xd6]);
          UActorComponent::SetTickableWhenPaused(lVar6,*(byte *)((longlong)param_2 + 0x3c) & 1);
        }
      }
      else {
        local_c0 = *(undefined4 *)(param_1 + 0x60);
        local_c8 = *(undefined8 *)(param_1 + 0x58);
        local_d8 = 0;
        local_f8 = ~(*(int *)(param_1 + 0x90) * 2) & 2;
        local_b0 = *(undefined4 *)(param_1 + 0x54);
        local_a0 = *(undefined4 *)(param_1 + 0x48);
        local_e0 = (byte)(*(uint *)(param_1 + 0x80) >> 1) & 1;
        local_b8 = *(undefined8 *)(param_1 + 0x4c);
        local_100 = &local_c8;
        local_f0 = 1;
        local_108 = &local_b8;
        local_a8 = *(undefined8 *)(param_1 + 0x40);
        local_e8 = bVar7;
        lVar6 = FUN_14245fd00(*(undefined8 *)(param_1 + 0x38),param_2,
                              *(undefined8 *)(param_1 + 0x88),&local_a8);
      }
    }
    else {
      lVar6 = 0;
    }
  }
  return lVar6;
}



// FUNCTION 14229c0d0 FUN_14229c0d0 body=169 status=ok
// SIG undefined FUN_14229c0d0(void)

void FUN_14229c0d0(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  
  if ((*(longlong *)
        ((longlong)*(int *)(param_1 + 0x48) * 0x58 + 0x50 + *(longlong *)(param_3 + 0x10)) != 0) &&
     (*(int *)(param_2 + 0x6b0) < *(int *)(param_3 + 0x30))) {
    *(int *)(param_2 + 0x6b0) = *(int *)(param_3 + 0x30);
    uVar1 = (ulonglong)_tls_index;
    *(undefined8 *)(param_2 + 0x6a8) =
         *(undefined8 *)
          ((longlong)*(int *)(param_1 + 0x48) * 0x58 + 0x50 + *(longlong *)(param_3 + 0x10));
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
        DAT_146aef1e8) {
      _Init_thread_header(&DAT_146aef1e8);
      if (DAT_146aef1e8 == -1) {
        FName::FName(&DAT_146aef1e0,L"ActiveAnimBoneSetFilter",1);
        _Init_thread_footer(&DAT_146aef1e8);
      }
    }
  }
  return;
}



// FUNCTION 14229c180 Update body=17 status=ok
// SIG undefined Update(void)

void FPoseLinkBase::Update(longlong param_1)

{
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014229c18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14229c1a0 FUN_14229c1a0 body=591 status=ok
// SIG undefined FUN_14229c1a0(void)

void FUN_14229c1a0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float local_res8 [2];
  longlong local_res18 [2];
  
  FUN_142290d80(param_1 + 8);
  FUN_142286930(param_1,param_1 + 0x68,param_2);
  plVar3 = *(longlong **)(param_1 + 0x68);
  if (((plVar3 != (longlong *)0x0) && (*(longlong *)(*param_2 + 0xb0) != 0)) &&
     (plVar3[7] == *(longlong *)(*param_2 + 0xb0))) {
    local_res8[0] = *(float *)(param_1 + 0x78);
    fVar10 = 0.0;
    if (local_res8[0] < 0.0) {
      fVar11 = -1.0;
    }
    else {
      fVar11 = 1.0;
    }
    fVar8 = (float)(**(code **)(*plVar3 + 0x350))();
    cVar1 = *(char *)(param_1 + 0xbc);
    if (((cVar1 == '\0') && (*(char *)(param_1 + 200) == '\0')) ||
       ((*(float *)(param_1 + 0xc0) <= 0.0 || (fVar8 <= 0.0)))) {
      *(undefined4 *)(param_1 + 0xcc) = 0x7f7fffff;
      *(undefined4 *)(param_1 + 0xd0) = 0x3f800000;
    }
    else {
      local_res8[0] = (*(float *)(param_1 + 0xc0) / fVar8) * fVar11;
      FUN_1422b4a10((char *)(param_1 + 200),local_res8,cVar1,*(undefined4 *)(*param_2 + 0x660),
                    (int)param_2[2]);
      cVar1 = *(char *)(param_1 + 0xbc);
    }
    if ((cVar1 == '\0') && (*(float *)(param_1 + 0xc4) != 0.0)) {
      local_res8[0] =
           (*(float *)(*(longlong *)(param_1 + 0x68) + 0x90) / *(float *)(param_1 + 0xc4)) * fVar11;
    }
    fVar11 = *(float *)(param_1 + 0x40);
    if (0.0 <= fVar11) {
      fVar8 = *(float *)(*(longlong *)(param_1 + 0x68) + 0x90);
      if (fVar11 <= fVar8) {
        fVar8 = fVar11;
      }
    }
    else {
      fVar8 = 0.0;
    }
    *(float *)(param_1 + 0x40) = fVar8;
    if (1e-08 < ABS(*(float *)(param_1 + 0x74))) {
      fVar10 = local_res8[0] / *(float *)(param_1 + 0x74);
    }
    uVar9 = FInputScaleBiasClamp::ApplyTo(param_1 + 0x7c,fVar10,(int)param_2[2]);
    uVar2 = *(undefined1 *)(param_1 + 0x70);
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    lVar5 = param_2[1];
    if ((*(byte *)(param_1 + 0x38) < 3) || (uVar7 = 0xffffffff, *(char *)(param_1 + 0x54) != '\0'))
    {
      uVar7 = *(undefined4 *)(param_1 + 0x34);
    }
    lVar6 = FUN_14225c6d0(*param_2,uVar7,local_res18);
    FUN_1422777c0(*param_2,lVar6,uVar4,uVar2,uVar9,(int)lVar5,(float *)(param_1 + 0x40),
                  param_1 + 0x44);
    *(undefined4 *)(lVar6 + 0x18) = *(undefined4 *)((longlong)param_2 + 0xc);
    if (local_res18[0] != 0) {
      FUN_1422b4c10(local_res18[0],*(undefined1 *)(param_1 + 0x38));
    }
  }
  return;
}



// FUNCTION 14229c3f0 UpdateCachedData body=409 status=ok
// SIG undefined UpdateCachedData(void)

void FAnimPhysAngularLimit::UpdateCachedData(longlong *param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  
  lVar3 = *param_1;
  fVar4 = 0.0;
  if (lVar3 == 0) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = *(float *)(param_1 + 2);
    fVar1 = *(float *)((longlong)param_1 + 0x14);
    fVar2 = *(float *)(param_1 + 3);
    fVar5 = fVar1 * (*(float *)(lVar3 + 0xb4) * 0.0 + fVar2 * *(float *)(lVar3 + 0xa4) +
                    fVar1 * *(float *)(lVar3 + 0x94) + fVar5 * *(float *)(lVar3 + 0x84)) +
            fVar5 * (*(float *)(lVar3 + 0xb0) * 0.0 + fVar2 * *(float *)(lVar3 + 0xa0) +
                    fVar1 * *(float *)(lVar3 + 0x90) + fVar5 * *(float *)(lVar3 + 0x80)) +
            fVar2 * (*(float *)(lVar3 + 0xb8) * 0.0 + fVar2 * *(float *)(lVar3 + 0xa8) +
                    fVar1 * *(float *)(lVar3 + 0x98) + fVar5 * *(float *)(lVar3 + 0x88));
  }
  lVar3 = param_1[1];
  if (lVar3 != 0) {
    fVar4 = *(float *)(param_1 + 2);
    fVar1 = *(float *)((longlong)param_1 + 0x14);
    fVar2 = *(float *)(param_1 + 3);
    fVar4 = fVar1 * (*(float *)(lVar3 + 0xb4) * 0.0 + fVar2 * *(float *)(lVar3 + 0xa4) +
                    fVar1 * *(float *)(lVar3 + 0x94) + fVar4 * *(float *)(lVar3 + 0x84)) +
            fVar4 * (*(float *)(lVar3 + 0xb0) * 0.0 + fVar2 * *(float *)(lVar3 + 0xa0) +
                    fVar1 * *(float *)(lVar3 + 0x90) + fVar4 * *(float *)(lVar3 + 0x80)) +
            fVar2 * (*(float *)(lVar3 + 0xb8) * 0.0 + fVar2 * *(float *)(lVar3 + 0xa8) +
                    fVar1 * *(float *)(lVar3 + 0x98) + fVar4 * *(float *)(lVar3 + 0x88));
  }
  *(float *)((longlong)param_1 + 0x2c) = 1.0 / (fVar4 + fVar5);
  return;
}



// FUNCTION 14229c590 UpdateCachedData body=1344 status=ok
// SIG undefined UpdateCachedData(void)

void FAnimPhysLinearLimit::UpdateCachedData(longlong *param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
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
  undefined8 local_a8;
  float fStack_a0;
  
  lVar3 = *param_1;
  local_a8 = param_1[2];
  fStack_a0 = *(float *)(param_1 + 3);
  if (lVar3 != 0) {
    fVar5 = (float)((ulonglong)local_a8 >> 0x20);
    fVar13 = *(float *)(lVar3 + 0x14);
    fVar14 = *(float *)(lVar3 + 0x18);
    fVar1 = *(float *)(lVar3 + 0x10);
    fVar12 = fStack_a0 * fVar13 - fVar5 * fVar14;
    fVar11 = (float)local_a8 * fVar14 - fStack_a0 * fVar1;
    fVar12 = fVar12 + fVar12;
    fVar10 = fVar5 * fVar1 - (float)local_a8 * fVar13;
    fVar2 = *(float *)(lVar3 + 0x1c);
    fVar11 = fVar11 + fVar11;
    fVar10 = fVar10 + fVar10;
    fStack_a0 = (fVar11 * fVar1 - fVar12 * fVar13) + fVar10 * fVar2 + fStack_a0;
    local_a8 = CONCAT44((fVar12 * fVar14 - fVar10 * fVar1) + fVar11 * fVar2 + fVar5,
                        (fVar10 * fVar13 - fVar11 * fVar14) + fVar12 * fVar2 + (float)local_a8);
  }
  lVar4 = param_1[1];
  *(longlong *)((longlong)param_1 + 0x4c) = local_a8;
  local_a8 = *(longlong *)((longlong)param_1 + 0x1c);
  *(float *)((longlong)param_1 + 0x54) = fStack_a0;
  fStack_a0 = *(float *)((longlong)param_1 + 0x24);
  if (lVar4 != 0) {
    fVar5 = (float)((ulonglong)local_a8 >> 0x20);
    fVar13 = *(float *)(lVar4 + 0x14);
    fVar14 = *(float *)(lVar4 + 0x18);
    fVar1 = *(float *)(lVar4 + 0x10);
    fVar12 = fStack_a0 * fVar13 - fVar5 * fVar14;
    fVar11 = (float)local_a8 * fVar14 - fStack_a0 * fVar1;
    fVar12 = fVar12 + fVar12;
    fVar10 = fVar5 * fVar1 - (float)local_a8 * fVar13;
    fVar2 = *(float *)(lVar4 + 0x1c);
    fVar11 = fVar11 + fVar11;
    fVar10 = fVar10 + fVar10;
    fStack_a0 = (fVar11 * fVar1 - fVar12 * fVar13) + fVar10 * fVar2 + fStack_a0;
    local_a8 = CONCAT44((fVar12 * fVar14 - fVar10 * fVar1) + fVar11 * fVar2 + fVar5,
                        (fVar10 * fVar13 - fVar11 * fVar14) + fVar12 * fVar2 + (float)local_a8);
  }
  fVar13 = 0.0;
  param_1[0xb] = local_a8;
  *(float *)(param_1 + 0xc) = fStack_a0;
  if (lVar3 == 0) {
    fVar14 = 0.0;
  }
  else {
    fVar14 = *(float *)(param_1 + 10);
    fVar1 = *(float *)((longlong)param_1 + 0x54);
    fVar2 = *(float *)((longlong)param_1 + 0x4c);
    fVar5 = *(float *)(param_1 + 6);
    fVar10 = *(float *)((longlong)param_1 + 0x2c);
    fVar11 = *(float *)(param_1 + 5);
    fVar7 = fVar5 * fVar14 - fVar10 * fVar1;
    fVar6 = fVar11 * fVar1 - fVar2 * fVar5;
    fVar12 = fVar2 * fVar10 - fVar11 * fVar14;
    fVar8 = *(float *)(lVar3 + 0xb0) * 0.0 + fVar12 * *(float *)(lVar3 + 0xa0) +
            fVar6 * *(float *)(lVar3 + 0x90) + fVar7 * *(float *)(lVar3 + 0x80);
    fVar9 = *(float *)(lVar3 + 0xb4) * 0.0 + fVar12 * *(float *)(lVar3 + 0xa4) +
            fVar6 * *(float *)(lVar3 + 0x94) + fVar7 * *(float *)(lVar3 + 0x84);
    fVar12 = *(float *)(lVar3 + 0xb8) * 0.0 + fVar12 * *(float *)(lVar3 + 0xa8) +
             fVar6 * *(float *)(lVar3 + 0x98) + fVar7 * *(float *)(lVar3 + 0x88);
    fVar14 = (fVar12 * fVar2 - fVar8 * fVar1) * fVar10 + (fVar9 * fVar1 - fVar12 * fVar14) * fVar11
             + (fVar8 * fVar14 - fVar9 * fVar2) * fVar5 + *(float *)(lVar3 + 0x3c);
  }
  if (lVar4 != 0) {
    fVar13 = *(float *)((longlong)param_1 + 0x5c);
    fVar1 = *(float *)(param_1 + 0xc);
    fVar2 = *(float *)(param_1 + 0xb);
    fVar5 = *(float *)(param_1 + 6);
    fVar10 = *(float *)((longlong)param_1 + 0x2c);
    fVar11 = *(float *)(param_1 + 5);
    fVar7 = fVar5 * fVar13 - fVar10 * fVar1;
    fVar6 = fVar11 * fVar1 - fVar2 * fVar5;
    fVar12 = fVar2 * fVar10 - fVar11 * fVar13;
    fVar8 = *(float *)(lVar4 + 0xb0) * 0.0 + fVar12 * *(float *)(lVar4 + 0xa0) +
            fVar6 * *(float *)(lVar4 + 0x90) + fVar7 * *(float *)(lVar4 + 0x80);
    fVar9 = *(float *)(lVar4 + 0xb4) * 0.0 + fVar12 * *(float *)(lVar4 + 0xa4) +
            fVar6 * *(float *)(lVar4 + 0x94) + fVar7 * *(float *)(lVar4 + 0x84);
    fVar12 = *(float *)(lVar4 + 0xb8) * 0.0 + fVar12 * *(float *)(lVar4 + 0xa8) +
             fVar6 * *(float *)(lVar4 + 0x98) + fVar7 * *(float *)(lVar4 + 0x88);
    fVar13 = (fVar12 * fVar2 - fVar8 * fVar1) * fVar10 + (fVar9 * fVar1 - fVar12 * fVar13) * fVar11
             + (fVar8 * fVar13 - fVar9 * fVar2) * fVar5 + *(float *)(lVar4 + 0x3c);
  }
  *(float *)(param_1 + 9) = 1.0 / (fVar13 + fVar14);
  return;
}



// FUNCTION 14229cad0 FUN_14229cad0 body=923 status=ok
// SIG undefined FUN_14229cad0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_14229cad0(float *param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                     float param_5)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
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
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  undefined1 local_b8 [16];
  
  FAnimPhys::DiffQ(&local_e8);
  fVar17 = param_5 * 0.5;
  local_b8 = ZEXT416((uint)local_e8);
  local_d8 = local_e8 * fVar17 + *param_2;
  local_d4 = local_e4 * fVar17 + param_2[1];
  local_d0 = local_e0 * fVar17 + param_2[2];
  local_cc = local_dc * fVar17 + param_2[3];
  FAnimPhys::DiffQ(&local_c8,&local_d8,param_3,param_4);
  fVar12 = local_bc;
  fVar4 = local_c0;
  fVar7 = local_c4;
  fVar5 = local_c8;
  local_d8 = local_c8 * fVar17 + *param_2;
  local_d4 = local_c4 * fVar17 + param_2[1];
  local_d0 = local_c0 * fVar17 + param_2[2];
  local_cc = local_bc * fVar17 + param_2[3];
  FAnimPhys::DiffQ(&local_c8,&local_d8,param_3,param_4);
  fVar13 = local_bc;
  fVar11 = local_c0;
  fVar8 = local_c4;
  fVar6 = local_c8;
  local_d8 = local_c8 * param_5 + *param_2;
  local_d4 = local_c4 * param_5 + param_2[1];
  local_d0 = local_c0 * param_5 + param_2[2];
  local_cc = local_bc * param_5 + param_2[3];
  FAnimPhys::DiffQ(&local_c8,&local_d8,param_3,param_4);
  fVar16 = fRam0000000146aef17c;
  fVar15 = fRam0000000146aef178;
  fVar14 = fRam0000000146aef174;
  fVar17 = _DAT_146aef170;
  fVar1 = param_5 * 0.16666667;
  param_5 = param_5 * 0.33333334;
  fVar10 = (float)local_b8._0_4_ * fVar1 + *param_2 + fVar5 * param_5 + fVar6 * param_5 +
           local_c8 * fVar1;
  fVar9 = local_e4 * fVar1 + param_2[1] + fVar7 * param_5 + fVar8 * param_5 + local_c4 * fVar1;
  fVar4 = local_e0 * fVar1 + param_2[2] + fVar4 * param_5 + fVar11 * param_5 + local_c0 * fVar1;
  fVar18 = local_dc * fVar1 + param_2[3] + fVar12 * param_5 + fVar13 * param_5 + local_bc * fVar1;
  *param_1 = fVar10;
  param_1[1] = fVar9;
  param_1[2] = fVar4;
  param_1[3] = fVar18;
  auVar2._0_4_ = fVar10 * fVar10 + fVar4 * fVar4;
  auVar2._4_4_ = fVar9 * fVar9 + fVar18 * fVar18;
  auVar2._8_4_ = fVar4 * fVar4 + fVar10 * fVar10;
  auVar2._12_4_ = fVar18 * fVar18 + fVar9 * fVar9;
  fVar11 = auVar2._4_4_ + auVar2._0_4_;
  fVar12 = auVar2._8_4_ + auVar2._4_4_;
  fVar13 = auVar2._12_4_ + auVar2._8_4_;
  fVar1 = auVar2._0_4_ + auVar2._12_4_;
  auVar3._4_4_ = fVar12;
  auVar3._0_4_ = fVar11;
  auVar3._8_4_ = fVar13;
  auVar3._12_4_ = fVar1;
  auVar3 = rsqrtps(auVar2,auVar3);
  fVar5 = auVar3._0_4_;
  fVar6 = auVar3._4_4_;
  fVar7 = auVar3._8_4_;
  fVar8 = auVar3._12_4_;
  fVar5 = (fVar17 - fVar5 * fVar5 * fVar11 * fVar17) * fVar5 + fVar5;
  fVar6 = (fVar14 - fVar6 * fVar6 * fVar12 * fVar14) * fVar6 + fVar6;
  fVar7 = (fVar15 - fVar7 * fVar7 * fVar13 * fVar15) * fVar7 + fVar7;
  fVar8 = (fVar16 - fVar8 * fVar8 * fVar1 * fVar16) * fVar8 + fVar8;
  fVar14 = (float)(((uint)(((fVar14 - fVar6 * fVar6 * fVar12 * fVar14) * fVar6 + fVar6) * fVar9) ^
                   uRam0000000146aef164) & -(uint)(1e-08 <= fVar12) ^ uRam0000000146aef164);
  fVar15 = (float)(((uint)(((fVar15 - fVar7 * fVar7 * fVar13 * fVar15) * fVar7 + fVar7) * fVar4) ^
                   uRam0000000146aef168) & -(uint)(1e-08 <= fVar13) ^ uRam0000000146aef168);
  fVar16 = (float)(((uint)(((fVar16 - fVar8 * fVar8 * fVar1 * fVar16) * fVar8 + fVar8) * fVar18) ^
                   uRam0000000146aef16c) & -(uint)(1e-08 <= fVar1) ^ uRam0000000146aef16c);
  *param_1 = (float)(((uint)(((fVar17 - fVar5 * fVar5 * fVar11 * fVar17) * fVar5 + fVar5) * fVar10)
                     ^ _DAT_146aef160) & -(uint)(1e-08 <= fVar11) ^ _DAT_146aef160);
  param_1[1] = fVar14;
  param_1[2] = fVar15;
  param_1[3] = fVar16;
  return param_1;
}



// FUNCTION 14229ce70 UpdatePose body=892 status=ok
// SIG undefined UpdatePose(void)

void FAnimPhys::UpdatePose(undefined8 *param_1)

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
  float fVar28;
  float fVar29;
  float fVar30;
  longlong lVar31;
  float local_118 [32];
  float local_98 [36];
  
  param_1[0x1c] = *param_1;
  param_1[0x1e] = param_1[2];
  param_1[0x1f] = param_1[3];
  *param_1 = param_1[0x18];
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(param_1 + 1);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_1 + 0x19);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_1 + 0x1a);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_1 + 0xd4);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_1 + 0x1b);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_1 + 0xdc);
  FQuatRotationMatrix::Make(local_118);
  fVar30 = local_118[0xf];
  fVar29 = local_118[0xe];
  fVar28 = local_118[0xd];
  fVar27 = local_118[0xc];
  fVar26 = local_118[0xb];
  fVar25 = local_118[10];
  fVar24 = local_118[9];
  fVar23 = local_118[7];
  fVar22 = local_118[6];
  fVar21 = local_118[5];
  fVar20 = local_118[3];
  fVar19 = local_118[2];
  fVar18 = local_118[1];
  fVar2 = *(float *)(param_1 + 10);
  fVar3 = *(float *)((longlong)param_1 + 0x54);
  fVar4 = *(float *)(param_1 + 0xb);
  fVar5 = *(float *)((longlong)param_1 + 0x5c);
  fVar6 = *(float *)(param_1 + 8);
  fVar7 = *(float *)((longlong)param_1 + 0x44);
  fVar8 = *(float *)(param_1 + 9);
  fVar9 = *(float *)((longlong)param_1 + 0x4c);
  fVar10 = *(float *)(param_1 + 0xc);
  fVar11 = *(float *)((longlong)param_1 + 100);
  fVar12 = *(float *)(param_1 + 0xd);
  fVar13 = *(float *)((longlong)param_1 + 0x6c);
  fVar14 = *(float *)(param_1 + 0xe);
  fVar15 = *(float *)((longlong)param_1 + 0x74);
  fVar16 = *(float *)(param_1 + 0xf);
  fVar17 = *(float *)((longlong)param_1 + 0x7c);
  local_118[0x10] = local_118[0];
  local_118[0x12] = local_118[8];
  local_118[0x11] = local_118[4];
  local_98[0] = local_118[0] * fVar6 + local_118[1] * fVar2 + local_118[2] * fVar10 +
                local_118[3] * fVar14;
  local_98[1] = local_118[0] * fVar7 + local_118[1] * fVar3 + local_118[2] * fVar11 +
                local_118[3] * fVar15;
  local_98[2] = local_118[0] * fVar8 + local_118[1] * fVar4 + local_118[2] * fVar12 +
                local_118[3] * fVar16;
  local_98[3] = local_118[0] * fVar9 + local_118[1] * fVar5 + local_118[2] * fVar13 +
                local_118[3] * fVar17;
  lVar31 = 0;
  local_98[4] = local_118[4] * fVar6 + local_118[5] * fVar2 + local_118[6] * fVar10 +
                local_118[7] * fVar14;
  local_98[5] = local_118[4] * fVar7 + local_118[5] * fVar3 + local_118[6] * fVar11 +
                local_118[7] * fVar15;
  local_98[6] = local_118[4] * fVar8 + local_118[5] * fVar4 + local_118[6] * fVar12 +
                local_118[7] * fVar16;
  local_98[7] = local_118[4] * fVar9 + local_118[5] * fVar5 + local_118[6] * fVar13 +
                local_118[7] * fVar17;
  local_98[8] = local_118[8] * fVar6 + local_118[9] * fVar2 + local_118[10] * fVar10 +
                local_118[0xb] * fVar14;
  local_98[9] = local_118[8] * fVar7 + local_118[9] * fVar3 + local_118[10] * fVar11 +
                local_118[0xb] * fVar15;
  local_98[10] = local_118[8] * fVar8 + local_118[9] * fVar4 + local_118[10] * fVar12 +
                 local_118[0xb] * fVar16;
  local_98[0xb] =
       local_118[8] * fVar9 + local_118[9] * fVar5 + local_118[10] * fVar13 +
       local_118[0xb] * fVar17;
  fVar1 = *(float *)((longlong)param_1 + 0x3c);
  local_98[0xc] =
       local_118[0xc] * fVar6 + local_118[0xd] * fVar2 + local_118[0xe] * fVar10 +
       local_118[0xf] * fVar14;
  local_98[0xd] =
       local_118[0xc] * fVar7 + local_118[0xd] * fVar3 + local_118[0xe] * fVar11 +
       local_118[0xf] * fVar15;
  local_98[0xe] =
       local_118[0xc] * fVar8 + local_118[0xd] * fVar4 + local_118[0xe] * fVar12 +
       local_118[0xf] * fVar16;
  local_98[0xf] =
       local_118[0xc] * fVar9 + local_118[0xd] * fVar5 + local_118[0xe] * fVar13 +
       local_118[0xf] * fVar17;
  do {
    fVar2 = *(float *)((longlong)local_98 + lVar31 + 4);
    fVar3 = *(float *)((longlong)local_98 + lVar31 + 8);
    fVar4 = *(float *)((longlong)local_98 + lVar31 + 0xc);
    *(float *)((longlong)local_118 + lVar31) = *(float *)((longlong)local_98 + lVar31) * fVar1;
    *(float *)((longlong)local_118 + lVar31 + 4) = fVar2 * fVar1;
    *(float *)((longlong)local_118 + lVar31 + 8) = fVar3 * fVar1;
    *(float *)((longlong)local_118 + lVar31 + 0xc) = fVar4 * fVar1;
    lVar31 = lVar31 + 0x10;
  } while (lVar31 < 0x40);
  *(float *)(param_1 + 0x10) =
       local_118[1] * fVar18 + local_118[0] * local_118[0x10] + local_118[2] * fVar19 +
       local_118[3] * fVar20;
  *(float *)((longlong)param_1 + 0x84) =
       local_118[1] * fVar21 + local_118[0] * local_118[0x11] + local_118[2] * fVar22 +
       local_118[3] * fVar23;
  *(float *)(param_1 + 0x11) =
       local_118[1] * fVar24 + local_118[0] * local_118[0x12] + local_118[2] * fVar25 +
       local_118[3] * fVar26;
  *(float *)((longlong)param_1 + 0x8c) =
       local_118[1] * fVar28 + local_118[0] * fVar27 + local_118[2] * fVar29 + local_118[3] * fVar30
  ;
  *(float *)(param_1 + 0x12) =
       local_118[5] * fVar18 + local_118[4] * local_118[0x10] + local_118[6] * fVar19 +
       local_118[7] * fVar20;
  *(float *)((longlong)param_1 + 0x94) =
       local_118[5] * fVar21 + local_118[4] * local_118[0x11] + local_118[6] * fVar22 +
       local_118[7] * fVar23;
  *(float *)(param_1 + 0x13) =
       local_118[5] * fVar24 + local_118[4] * local_118[0x12] + local_118[6] * fVar25 +
       local_118[7] * fVar26;
  *(float *)((longlong)param_1 + 0x9c) =
       local_118[5] * fVar28 + local_118[4] * fVar27 + local_118[6] * fVar29 + local_118[7] * fVar30
  ;
  *(float *)(param_1 + 0x14) =
       local_118[9] * fVar18 + local_118[8] * local_118[0x10] + local_118[10] * fVar19 +
       local_118[0xb] * fVar20;
  *(float *)((longlong)param_1 + 0xa4) =
       local_118[9] * fVar21 + local_118[8] * local_118[0x11] + local_118[10] * fVar22 +
       local_118[0xb] * fVar23;
  *(float *)(param_1 + 0x15) =
       local_118[9] * fVar24 + local_118[8] * local_118[0x12] + local_118[10] * fVar25 +
       local_118[0xb] * fVar26;
  *(float *)((longlong)param_1 + 0xac) =
       local_118[9] * fVar28 + local_118[8] * fVar27 + local_118[10] * fVar29 +
       local_118[0xb] * fVar30;
  *(float *)(param_1 + 0x16) =
       local_118[0xd] * fVar18 + local_118[0xc] * local_118[0x10] + local_118[0xe] * fVar19 +
       local_118[0xf] * fVar20;
  *(float *)((longlong)param_1 + 0xb4) =
       local_118[0xd] * fVar21 + local_118[0xc] * local_118[0x11] + local_118[0xe] * fVar22 +
       local_118[0xf] * fVar23;
  *(float *)(param_1 + 0x17) =
       local_118[0xd] * fVar24 + local_118[0xc] * local_118[0x12] + local_118[0xe] * fVar25 +
       local_118[0xf] * fVar26;
  *(float *)((longlong)param_1 + 0xbc) =
       local_118[0xd] * fVar28 + local_118[0xc] * fVar27 + local_118[0xe] * fVar29 +
       local_118[0xf] * fVar30;
  return;
}



// FUNCTION 14229d1f0 FUN_14229d1f0 body=232 status=ok
// SIG undefined FUN_14229d1f0(void)

void FUN_14229d1f0(longlong param_1,int param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int *piVar5;
  undefined4 uVar6;
  
  if (param_2 != -1) {
    piVar5 = *(int **)(param_1 + 0x78);
    iVar2 = *(int *)(param_1 + 0x80);
    piVar1 = piVar5 + iVar2;
    for (; piVar5 != piVar1; piVar5 = piVar5 + 1) {
      if (*piVar5 == param_2) {
        return;
      }
    }
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (((lVar3 == 0) || (*(int *)(lVar3 + 0x18) <= param_2)) ||
       (*(char *)((longlong)param_2 * 0x58 + 0x28 + *(longlong *)(lVar3 + 0x10)) == '\0')) {
      *(int *)(param_1 + 0x80) = iVar2 + 1;
      if (*(int *)(param_1 + 0x84) < iVar2 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x78,iVar2);
      }
      *(int *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar2 * 4) = param_2;
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x68) + 8 + (longlong)param_2 * 0x18);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,param_3);
      }
      uVar6 = FUN_1422960a0(param_1,param_2);
      FAnimInstanceProxy::RecordStateWeight(*param_3,*(undefined4 *)(param_1 + 0x30),param_2,uVar6);
    }
  }
  return;
}



// FUNCTION 14229d2e0 FUN_14229d2e0 body=584 status=ok
// SIG undefined FUN_14229d2e0(void)

void FUN_14229d2e0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  float fVar6;
  undefined8 local_48;
  float local_40;
  float local_3c;
  undefined4 local_38;
  
  if (*(char *)(param_3 + 0xd) != '\0') {
    if (*(char *)(param_3 + 0x4c) == '\0') {
      if (*(char *)(param_3 + 0xd1) == '\0') {
        local_38 = *(undefined4 *)(param_2 + 2);
        local_48 = *param_2;
        local_40 = (1.0 - *(float *)(param_3 + 4)) * *(float *)(param_2 + 1);
        local_3c = *(float *)((longlong)param_2 + 0xc);
        FUN_14229d1f0(local_3c,*(undefined4 *)(param_3 + 0x3c),&local_48);
        local_38 = *(undefined4 *)(param_2 + 2);
        local_40 = *(float *)(param_3 + 4) * *(float *)(param_2 + 1);
        local_48 = *param_2;
        local_3c = *(float *)((longlong)param_2 + 0xc);
        FUN_14229d1f0(param_1,*(undefined4 *)(param_3 + 0x38),&local_48);
      }
      else {
        if (*(char *)(param_3 + 0xd1) == '\x01') {
          local_3c = 1.0;
          fVar6 = 0.0;
        }
        else {
          local_3c = 0.0;
          fVar6 = 1.0;
        }
        local_48 = *param_2;
        local_38 = *(undefined4 *)(param_2 + 2);
        local_40 = (1.0 - *(float *)(param_3 + 4)) * *(float *)(param_2 + 1);
        if (0.0 < local_40) {
          local_3c = local_3c / local_40;
        }
        FUN_14229d1f0(local_38,*(undefined4 *)(param_3 + 0x3c),&local_48);
        local_40 = *(float *)(param_3 + 4) * *(float *)(param_2 + 1);
        local_48 = *param_2;
        local_38 = *(undefined4 *)(param_2 + 2);
        if (0.0 < local_40) {
          fVar6 = fVar6 / local_40;
        }
        local_3c = fVar6;
        FUN_14229d1f0(param_1,*(undefined4 *)(param_3 + 0x38),&local_48);
      }
    }
    else if ((*(char *)(param_3 + 0x4c) == '\x01') && (*(int *)(param_3 + 0x20) != -1)) {
      plVar2 = *(longlong **)(param_3 + 0x28);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
      }
      for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_3 + 0x58))); iVar5 = iVar5 + 1) {
        lVar3 = *(longlong *)(*(longlong *)(param_3 + 0x50) + (longlong)iVar5 * 8);
        if ((*(char *)(lVar3 + 0x31) == '\0') ||
           ((*(char *)(lVar3 + 0x31) == '\x02' && (0 < *(int *)(lVar3 + 0x70))))) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (bVar4) {
          if (*(char *)(lVar3 + 0x30) == '\0') {
            uVar1 = *(undefined4 *)(param_3 + 0x3c);
            local_40 = 1.0 - *(float *)(param_3 + 4);
          }
          else {
            uVar1 = *(undefined4 *)(param_3 + 0x38);
            local_40 = *(float *)(param_3 + 4);
          }
          local_38 = *(undefined4 *)(param_2 + 2);
          local_40 = local_40 * *(float *)(param_2 + 1);
          local_48 = *param_2;
          local_3c = *(float *)((longlong)param_2 + 0xc);
          FUN_14229d1f0(param_1,uVar1,&local_48);
        }
      }
    }
  }
  return;
}



// FUNCTION 14229d530 FUN_14229d530 body=329 status=ok
// SIG undefined FUN_14229d530(void)

void FUN_14229d530(longlong *param_1,longlong *param_2)

{
  float *pfVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  float fVar5;
  longlong local_38;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  lVar2 = *param_2;
  iVar4 = (**(code **)(*param_1 + 0xa8))(param_1);
  fVar5 = (float)(**(code **)(*param_1 + 0xe8))(param_1);
  if ((((DAT_146aef0d0 == 0) || ((fVar5 == 0.0 && (iVar4 == -1)))) &&
      (pfVar1 = (float *)(lVar2 + 0x6b4), fVar5 * fVar5 < *pfVar1 || fVar5 * fVar5 == *pfVar1)) &&
     ((iVar4 == -1 || (*(int *)(lVar2 + 0x4c8) <= iVar4)))) {
    FUN_142290d80(param_1 + 1,param_2);
    fVar5 = *(float *)(param_1 + 0xc);
    *(float *)(param_1 + 0xe) = fVar5;
    if (*(char *)((longlong)param_1 + 0x75) != '\0') {
      if (*(char *)((longlong)param_1 + 0x74) == '\0') {
        fVar5 = 0.0;
      }
      else {
        fVar5 = 1.0;
      }
      *(float *)(param_1 + 0xe) = fVar5;
    }
    if (*(char *)((longlong)param_1 + 0x76) != '\0') {
      fVar5 = 1.0 - fVar5;
      *(float *)(param_1 + 0xe) = fVar5;
    }
    local_30 = (float)FInputScaleBias::ApplyTo((longlong)param_1 + 100,fVar5);
    *(float *)(param_1 + 0xe) = local_30;
    if (1e-05 < local_30) {
      local_30 = local_30 * *(float *)(param_2 + 1);
      plVar3 = (longlong *)param_1[10];
      local_38 = *param_2;
      local_28 = (undefined4)param_2[2];
      local_2c = *(undefined4 *)((longlong)param_2 + 0xc);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,&local_38);
      }
    }
  }
  return;
}



// FUNCTION 14229d6f0 FUN_14229d6f0 body=101 status=ok
// SIG undefined FUN_14229d6f0(void)

void FUN_14229d6f0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x98);
  lVar3 = (longlong)iVar1;
  *(int *)(param_1 + 0x98) = iVar1 + 1;
  if (*(int *)(param_1 + 0x9c) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 0x90),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x90);
  *(undefined8 *)(lVar2 + lVar3 * 0x18) = *param_2;
  *(undefined4 *)(lVar2 + 8 + lVar3 * 0x18) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(lVar2 + 0xc + lVar3 * 0x18) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(lVar2 + 0x10 + lVar3 * 0x18) = *(undefined4 *)(param_2 + 2);
  return;
}



// FUNCTION 14229d760 FUN_14229d760 body=2223 status=ok
// SIG undefined FUN_14229d760(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14229d760(undefined8 *param_1,ulonglong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  char cVar6;
  short sVar7;
  DWORD DVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  int *piVar12;
  longlong lVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  int *piVar19;
  char *pcVar20;
  undefined1 uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined1 auStack_158 [32];
  undefined1 *local_138;
  char local_128;
  ulonglong local_120;
  undefined8 *local_118;
  ulonglong *local_110;
  longlong *local_108;
  longlong local_100;
  int local_f8 [2];
  longlong local_f0;
  longlong local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [16];
  longlong local_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_118 = param_1;
  local_110 = param_2;
  FAnimInstanceProxy::RecordMachineWeight(*param_2,*(undefined4 *)(param_1 + 6),(int)param_2[1]);
  lVar13 = DAT_146aef110;
  uVar15 = 0;
  if ((((*(char *)(param_1 + 0x15) != '\0') || (*(char *)((longlong)param_1 + 0x39) == '\0')) ||
      (*(short *)(param_1 + 0x19) == -1)) ||
     ((param_1[0x18] == -1 || (*(short *)(param_1 + 0x19) == *(short *)(*param_2 + 0x330)))))
  goto LAB_14229d86d;
  sVar7 = (short)*(undefined4 *)(param_1 + 0x19) + 1;
  if (sVar7 == -1) {
    sVar7 = 0;
  }
  if ((DAT_1468c21b0 != -1) && (sVar7 == *(short *)(*param_2 + 0x330))) goto LAB_14229d86d;
  cVar6 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar6 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar8 = GetCurrentThreadId();
    uVar9 = 4;
    if (DVar8 == DAT_1468c21c0) goto LAB_14229d84e;
  }
  else {
LAB_14229d84e:
    uVar9 = uVar15;
  }
  if (*(int *)(uVar9 + lVar13) == 1) {
    local_120 = *param_2;
    (**(code **)*param_1)(param_1,&local_120);
  }
LAB_14229d86d:
  uVar9 = *param_2;
  *(undefined2 *)(param_1 + 0x19) = *(undefined2 *)(uVar9 + 0x330);
  param_1[0x18] = *(undefined8 *)(uVar9 + 0x328);
  *(undefined2 *)((longlong)param_1 + 0xca) = *(undefined2 *)(uVar9 + 0x332);
  local_100 = param_1[8];
  if ((local_100 != 0) && (*(int *)(local_100 + 0x18) != 0)) {
    iVar17 = *(int *)(param_1 + 9);
    if ((-1 < iVar17) && (iVar17 < *(int *)(local_100 + 0x18))) {
      if (*(char *)(param_1 + 0x15) != '\0') {
        FAnimInstanceProxy::AddAnimNotifyFromGeneratedClass
                  (*param_2,*(undefined4 *)
                             ((longlong)iVar17 * 0x58 + 0x1c + *(longlong *)(local_100 + 0x10)));
      }
      local_108 = param_1 + 0xb;
      do {
        local_f8[0] = -1;
        local_f0 = 0;
        bVar4 = false;
        local_d8 = 0;
        local_d0 = 0;
        local_b8 = 0;
        local_b0 = 0;
        local_138 = local_c8;
        FUN_142291e40(param_1,param_2,
                      (longlong)*(int *)(param_1 + 9) * 0x58 + *(longlong *)(param_1[8] + 0x10),
                      local_f8);
        if (local_b8 != 0) {
          FMemory::Free();
        }
        if (((local_f8[0] != -1) && (local_f0 != 0)) && (*(int *)(local_f0 + 8) != -1)) {
          bVar4 = true;
          if (0 < *(int *)(param_1 + 0xc)) {
            lVar11 = (longlong)*(int *)(param_1 + 0xc) * 0xd8;
            lVar13 = param_1[0xb];
            if (*(char *)(lVar11 + -0xcb + lVar13) != '\0') {
              FAnimInstanceProxy::AddAnimNotifyFromGeneratedClass
                        (*param_2,*(undefined4 *)(lVar11 + -0x90 + lVar13));
            }
          }
          iVar5 = local_f8[0];
          iVar17 = *(int *)(param_1 + 9);
          FAnimInstanceProxy::AddAnimNotifyFromGeneratedClass
                    (*param_2,*(undefined4 *)
                               ((longlong)iVar17 * 0x58 + 0x20 + *(longlong *)(param_1[8] + 0x10)));
          FAnimInstanceProxy::AddAnimNotifyFromGeneratedClass
                    (*param_2,*(undefined4 *)
                               ((longlong)iVar5 * 0x58 + 0x1c + *(longlong *)(param_1[8] + 0x10)));
          fVar22 = (float)FUN_1422960a0(param_1,iVar5);
          if (0 < *(int *)(param_1 + 0xc)) {
            lVar13 = (longlong)*(int *)(param_1 + 0xc) + -1;
            piVar19 = (int *)(param_1[0xb] + lVar13 * 0xd8 + 0x3c);
            do {
              if (*piVar19 == iVar5) break;
              piVar19 = piVar19 + -0x36;
              lVar13 = lVar13 + -1;
            } while (-1 < lVar13);
          }
          iVar2 = *(int *)(param_1 + 0xc);
          lVar13 = (longlong)*(int *)(local_f0 + 8) * 0x40 + *(longlong *)(param_1[8] + 0x20);
          *(int *)(param_1 + 0xc) = iVar2 + 1;
          if (*(int *)((longlong)param_1 + 100) < iVar2 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<216,8>_>,FDefaultAllocator>::
            ResizeGrow(param_1 + 0xb,iVar2);
          }
          puVar14 = (undefined8 *)((longlong)iVar2 * 0xd8 + param_1[0xb]);
          if (puVar14 == (undefined8 *)0x0) {
            uVar21 = 0;
          }
          else {
            *puVar14 = 0;
            *(undefined1 *)((longlong)puVar14 + 0xc) = *(undefined1 *)(lVar13 + 0x20);
            *(undefined1 *)((longlong)puVar14 + 0xd) = 1;
            puVar14[2] = 0;
            puVar14[3] = 0;
            puVar14[5] = 0;
            *(undefined1 *)(puVar14 + 6) = 0;
            *(undefined4 *)(puVar14 + 4) = 0xffffffff;
            *(int *)(puVar14 + 7) = iVar5;
            *(int *)((longlong)puVar14 + 0x3c) = iVar17;
            *(undefined4 *)(puVar14 + 8) = *(undefined4 *)(lVar13 + 0x14);
            *(undefined4 *)((longlong)puVar14 + 0x44) = *(undefined4 *)(lVar13 + 0x18);
            *(undefined4 *)(puVar14 + 9) = *(undefined4 *)(lVar13 + 0x1c);
            *(undefined1 *)((longlong)puVar14 + 0x4c) = *(undefined1 *)(lVar13 + 0x38);
            puVar14[10] = 0;
            puVar14[0xb] = 0;
            puVar14[0xc] = 0;
            puVar14[0xd] = 0;
            puVar14[0x10] = 0;
            puVar14[0x11] = 0;
            puVar14[0x12] = *(undefined8 *)(lVar13 + 0x30);
            FAlphaBlend::FAlphaBlend(puVar14 + 0x13,0x3e4ccccd);
            fVar22 = 1.0 - fVar22;
            *(undefined1 *)(puVar14 + 0x1a) = *(undefined1 *)(lVar13 + 0x3a);
            *(undefined1 *)((longlong)puVar14 + 0xd1) = *(undefined1 *)(lVar13 + 0x3b);
            if (*(char *)((longlong)puVar14 + 0xc) == '\x02') {
              fVar23 = fVar22 * fVar22;
              fVar22 = (fVar23 * fVar22 * 1.3333334 - (fVar23 + fVar23)) + fVar22 * 1.6666666;
            }
            else if (0.0 <= fVar22) {
              if (1.0 <= fVar22) {
                fVar22 = 1.0;
              }
            }
            else {
              fVar22 = 0.0;
            }
            *(float *)(puVar14 + 1) = fVar22 * *(float *)(lVar13 + 0x10);
            FAlphaBlend::SetBlendTime(puVar14 + 0x13);
            FAlphaBlend::SetBlendOption(puVar14 + 0x13,*(undefined1 *)((longlong)puVar14 + 0xc));
            FAlphaBlend::SetCustomCurve(puVar14 + 0x13,*(undefined8 *)(lVar13 + 0x28));
            FAlphaBlend::SetValueRange(puVar14 + 0x13,0,0x3f800000);
            if ((local_f0 != 0) &&
               (FUN_142296e70(puVar14,param_2), *(char *)(param_1 + 0x15) == '\0')) {
              FAnimInstanceProxy::AddAnimNotifyFromGeneratedClass
                        (*param_2,*(undefined4 *)(puVar14 + 8));
            }
            uVar21 = *(undefined1 *)(puVar14 + 0x1a);
          }
          FUN_14229b960(param_1,param_2,iVar5,uVar21);
          uVar15 = (ulonglong)((int)uVar15 + 1);
        }
        lVar13 = 0;
        plVar10 = param_1 + 0xb;
        if (local_d8 != 0) {
          FMemory::Free();
        }
      } while ((bVar4) && ((int)uVar15 < *(int *)((longlong)param_1 + 0x34)));
      if (*(char *)(param_1 + 0x15) != '\0') {
        if (*(char *)(param_1 + 7) != '\0') {
          FUN_14229ab00(plVar10,0);
        }
        *(undefined1 *)(param_1 + 0x15) = 0;
      }
      puVar14 = param_1 + 0xf;
      *(undefined4 *)(param_1 + 0x10) = 0;
      if ((*(int *)((longlong)param_1 + 0x84) < 0) && (*(int *)((longlong)param_1 + 0x84) != 0)) {
        TArray<float,FDefaultAllocator>::ResizeTo(puVar14,0);
      }
      if (0 < *(int *)(param_1 + 0xc)) {
        iVar17 = 0;
        local_120 = local_120 & 0xffffffff00000000;
        do {
          uVar15 = 0;
          lVar11 = *plVar10;
          local_128 = '\0';
          if (*(char *)(lVar13 + 0xd + lVar11) == '\0') {
LAB_14229dea6:
            FUN_14229d2e0(param_1,param_2,(longlong)iVar17 * 0xd8 + *plVar10);
          }
          else {
            lVar1 = lVar13 + lVar11;
            *(float *)(lVar13 + lVar11) = *(float *)(param_2 + 2) + *(float *)(lVar13 + lVar11);
            FAlphaBlend::Update(lVar1 + 0x98,(int)param_2[2]);
            fVar22 = *(float *)(lVar13 + 8 + lVar11);
            fVar23 = 1.0;
            if (0.0 < fVar22) {
              fVar23 = *(float *)(lVar13 + lVar11) / fVar22;
            }
            uVar24 = FUN_142246950(fVar23,*(undefined1 *)(lVar1 + 0x98),
                                   *(undefined8 *)(lVar13 + 0xa0 + lVar11));
            *(undefined4 *)(lVar13 + 4 + lVar11) = uVar24;
            cVar6 = FAlphaBlend::IsComplete(lVar1 + 0x98);
            if (cVar6 != '\0') {
              *(undefined1 *)(lVar13 + 0xd + lVar11) = 0;
              local_128 = '\x01';
            }
            if (*(longlong *)(lVar13 + 0x90 + lVar11) != 0) {
              plVar10 = (longlong *)(lVar11 + 0x60 + lVar13);
              uVar9 = uVar15;
              do {
                uVar16 = 0;
                lVar1 = *plVar10;
                fVar22 = *(float *)(lVar13 + 4 + lVar11);
                iVar17 = (int)uVar9;
                if (iVar17 != 0) {
                  fVar22 = 1.0 - fVar22;
                }
                *(float *)(uVar15 + 0x10 + lVar1) = fVar22;
                uVar9 = uVar16;
                if (0 < *(int *)(uVar15 + 0x38 + lVar1)) {
                  do {
                    lVar3 = *(longlong *)(uVar15 + 0x30 + lVar1);
                    fVar22 = (float)UBlendProfile::GetEntryBlendScale
                                              (*(undefined8 *)(lVar13 + 0x90 + lVar11),uVar9);
                    if (iVar17 != 0) {
                      fVar22 = 1.0 / fVar22;
                    }
                    uVar18 = (int)uVar9 + 1;
                    *(float *)(lVar3 + uVar16) = fVar22 * *(float *)(uVar15 + 0x10 + lVar1);
                    uVar16 = uVar16 + 4;
                    uVar9 = (ulonglong)uVar18;
                  } while ((int)uVar18 < *(int *)(uVar15 + 0x38 + lVar1));
                  plVar10 = (longlong *)(lVar11 + 0x60 + lVar13);
                }
                uVar9 = (ulonglong)(iVar17 + 1);
                uVar15 = uVar15 + 0x40;
              } while ((longlong)uVar15 < 0x80);
              FBlendSampleData::NormalizeDataWeight(plVar10);
              plVar10 = local_108;
              param_1 = local_118;
              param_2 = local_110;
              iVar17 = (int)local_120;
            }
            if (local_128 == '\0') goto LAB_14229dea6;
            if (iVar17 == *(int *)(param_1 + 0xc) + -1) {
              FAnimInstanceProxy::AddAnimNotifyFromGeneratedClass
                        (*param_2,*(undefined4 *)(*plVar10 + 0x44 + lVar13));
              FAnimInstanceProxy::AddAnimNotifyFromGeneratedClass
                        (*param_2,*(undefined4 *)
                                   ((longlong)*(int *)(param_1 + 9) * 0x58 + 0x24 +
                                   *(longlong *)(param_1[8] + 0x10)));
            }
          }
          iVar17 = iVar17 + 1;
          lVar13 = lVar13 + 0xd8;
          local_120 = CONCAT44(local_120._4_4_,iVar17);
        } while (iVar17 < *(int *)(param_1 + 0xc));
        iVar17 = *(int *)(param_1 + 0xc) + -1;
        if (-1 < iVar17) {
          lVar13 = (longlong)iVar17;
          pcVar20 = (char *)(*plVar10 + 0xd + lVar13 * 0xd8);
          do {
            if (*pcVar20 == '\0') {
              FUN_14229aa10(plVar10,0,iVar17 + 1,CONCAT71((uint7)(uint3)((uint)iVar17 >> 8),1));
              break;
            }
            iVar17 = iVar17 + -1;
            pcVar20 = pcVar20 + -0xd8;
            lVar13 = lVar13 + -1;
          } while (-1 < lVar13);
        }
        puVar14 = param_1 + 0xf;
      }
      FUN_14229c0d0(param_1,*param_2,local_100);
      if (*(int *)(param_1 + 0xc) == 0) {
        lVar13 = param_1[8];
        iVar17 = *(int *)(param_1 + 9);
        uVar15 = (ulonglong)iVar17;
        if (((lVar13 == 0) || (*(int *)(lVar13 + 0x18) <= iVar17)) ||
           (*(char *)(uVar15 * 0x58 + 0x28 + *(longlong *)(lVar13 + 0x10)) == '\0')) {
          piVar12 = (int *)*puVar14;
          piVar19 = piVar12 + *(int *)(puVar14 + 1);
          for (; piVar12 != piVar19; piVar12 = piVar12 + 1) {
            if (*piVar12 == iVar17) goto LAB_14229dfd9;
          }
          plVar10 = *(longlong **)(param_1[0xd] + 8 + uVar15 * 0x18);
          if (plVar10 != (longlong *)0x0) {
            (**(code **)(*plVar10 + 0x10))(plVar10,param_2);
            uVar15 = (ulonglong)*(uint *)(param_1 + 9);
          }
          uVar24 = FUN_1422960a0(param_1,uVar15 & 0xffffffff);
          FAnimInstanceProxy::RecordStateWeight
                    (*param_2,*(undefined4 *)(param_1 + 6),uVar15 & 0xffffffff,uVar24);
        }
      }
LAB_14229dfd9:
      *(float *)((longlong)param_1 + 0x4c) =
           *(float *)(param_2 + 2) + *(float *)((longlong)param_1 + 0x4c);
    }
  }
  return;
}



// FUNCTION 14229e010 FUN_14229e010 body=387 status=ok
// SIG undefined FUN_14229e010(void)

void FUN_14229e010(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  void *_Src;
  int iVar7;
  void *_Dst;
  
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
  }
  FUN_142290d80(param_1 + 8,param_2);
  plVar1 = *(longlong **)(param_1 + 0x50);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  lVar6 = plVar1[4];
  if (lVar6 == 0) goto LAB_14229e0d3;
  lVar5 = FUN_142a07000();
  lVar6 = *(longlong *)(lVar6 + 0x10);
  if ((*(int *)(lVar6 + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar6 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) goto LAB_14229e0d3;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    bVar2 = false;
    if (DVar4 == DAT_1468c21c0) goto LAB_14229e0bd;
  }
  else {
LAB_14229e0bd:
    bVar2 = true;
  }
  if (bVar2) {
    FUN_1423b2d70(plVar1[4],1);
  }
LAB_14229e0d3:
  if (plVar1[0x72] == 0) {
    lVar6 = (**(code **)(*plVar1 + 0x308))(plVar1);
    plVar1[0x72] = lVar6;
  }
  if ((*(byte *)(*(longlong *)(param_1 + 0x50) + 0x31) & 4) != 0) {
    FUN_142284410(plVar1[0x72]);
  }
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x60)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x58));
      _Src = (void *)((longlong)*(int *)((longlong)plVar1 + 0x44) + *(longlong *)(*param_2 + 0xa0));
      _Dst = (void *)((longlong)
                      *(int *)(*(longlong *)(lVar6 + *(longlong *)(param_1 + 0x68)) + 0x44) +
                     *(longlong *)(param_1 + 0x50));
      if (_Dst != _Src) {
        if ((*(uint *)(plVar1 + 7) >> 0x1e & 1) == 0) {
          (**(code **)(*plVar1 + 0x2e8))(plVar1,_Dst,_Src,(int)plVar1[6]);
        }
        else {
          _guard_xfg_dispatch_icall_nop
                    (_Dst,_Src,(longlong)(*(int *)((longlong)plVar1 + 0x34) * (int)plVar1[6]));
        }
      }
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 8;
    } while (iVar7 < *(int *)(param_1 + 0x60));
  }
  return;
}



// FUNCTION 14229e1a0 FUN_14229e1a0 body=167 status=ok
// SIG undefined FUN_14229e1a0(void)

undefined8 FUN_14229e1a0(longlong param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x1c0) == '\0') {
    lVar2 = *(longlong *)(param_1 + 0x38);
    auVar1 = *(undefined1 (*) [16])(param_1 + 0x50);
    if ((((((*(int *)(lVar2 + 0x17c) == auVar1._12_4_ && *(int *)(lVar2 + 0x174) == auVar1._4_4_) &&
           auVar1._0_4_ == *(int *)(lVar2 + 0x170)) && auVar1._8_4_ == *(int *)(lVar2 + 0x178)) &&
         (*(char *)(param_2 + 0xd0) == '\0')) && (*(char *)(param_2 + 0xd1) == '\0')) &&
       (*(char *)(param_2 + 0xd2) == '\0')) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 14229e250 FUN_14229e250 body=386 status=ok
// SIG undefined FUN_14229e250(void)

undefined4 *
FUN_14229e250(longlong param_1,longlong *param_2,char param_3,char param_4,undefined4 *param_5,
             uint *param_6,int *param_7)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  puVar1 = (ulonglong *)(param_1 + 0x1a0);
  if (param_3 == '\0') {
    if ((*param_7 == -1) || (param_2[1] == *(longlong *)(*puVar1 + (longlong)*param_7 * 0x10))) {
      puVar4 = (undefined4 *)(ulonglong)*param_6;
    }
    else {
      AdvanceMarkerBackwards(param_7,param_2[1],param_4,puVar1);
      iVar5 = *param_7;
      if ((iVar5 == -1) || ((iVar5 == 0 && (param_4 != '\0')))) {
        uVar3 = *(int *)(param_1 + 0x1a8) - 1;
        puVar4 = (undefined4 *)(ulonglong)uVar3;
        *param_6 = uVar3;
      }
      else {
        puVar4 = (undefined4 *)(ulonglong)(iVar5 - 1U);
        *param_6 = iVar5 - 1U;
      }
    }
    iVar5 = (int)puVar4;
    if ((iVar5 != -1) &&
       (puVar4 = (undefined4 *)*puVar1, *param_2 != *(longlong *)(puVar4 + (longlong)iVar5 * 4))) {
      puVar4 = (undefined4 *)AdvanceMarkerBackwards(param_6,*param_2,param_4,puVar1);
    }
  }
  else {
    uVar3 = *param_6;
    puVar4 = (undefined4 *)(longlong)(int)uVar3;
    if ((uVar3 == 0xffffffff) ||
       (puVar4 = (undefined4 *)*puVar1, *param_2 == *(longlong *)(puVar4 + (longlong)(int)uVar3 * 4)
       )) {
      iVar5 = *param_7;
    }
    else {
      puVar4 = (undefined4 *)AdvanceMarkerForwards(param_6,*param_2,param_4,puVar1);
      iVar5 = *param_6 + 1;
      *param_7 = iVar5;
      iVar2 = *(int *)(param_1 + 0x1a8);
      if (iVar2 <= iVar5) {
        if (param_4 == '\0') {
          iVar5 = -1;
          *param_7 = -1;
        }
        else {
          puVar4 = (undefined4 *)((longlong)iVar5 / (longlong)iVar2 & 0xffffffff);
          iVar5 = iVar5 % iVar2;
          *param_7 = iVar5;
        }
      }
    }
    if ((iVar5 != -1) &&
       (puVar4 = (undefined4 *)*puVar1, param_2[1] != *(longlong *)(puVar4 + (longlong)iVar5 * 4)))
    {
      puVar4 = (undefined4 *)AdvanceMarkerForwards(param_7,param_2[1],param_4,puVar1);
    }
  }
  if ((*param_6 != 0xffffffff) && (*param_7 != -1)) {
    uVar6 = FUN_1422952b0(param_1,param_6,param_7,(int)param_2[2]);
    *param_5 = uVar6;
    puVar4 = param_5;
  }
  return puVar4;
}



// FUNCTION 14229e3e0 operator<FName,FReferencePose>_TTuple<FName,FReferencePose> body=127 status=ok
// SIG undefined operator<FName,FReferencePose>_TTuple<FName,FReferencePose>(void)

undefined8 *
TPairInitializer<FName_const_&,FReferencePose_const_&>::
operator<FName,FReferencePose>_TTuple<FName,FReferencePose>(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  puVar2 = (undefined8 *)param_1[1];
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = *puVar2;
  param_2[2] = 0;
  iVar1 = *(int *)(puVar2 + 2);
  _Src = (void *)puVar2[1];
  *(int *)(param_2 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
  }
  else {
    TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(param_2 + 2,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_2[2],_Src,(longlong)iVar1 * 0x30);
  }
  return param_2;
}



// FUNCTION 14229e460 operator<FName,FSmartNameMapping>_TTuple<FName,FSmartNameMapping> body=319 status=ok
// SIG undefined operator<FName,FSmartNameMapping>_TTuple<FName,FSmartNameMapping>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
TKeyInitializer<FName_const_&>::operator<FName,FSmartNameMapping>_TTuple<FName,FSmartNameMapping>
          (undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  longlong local_78 [4];
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [8];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  local_80 = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  TSparseArray<TSetElement<TTuple<FName,FCurveMetaData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(param_2 + 3,local_78);
  lVar1 = local_38;
  if (local_38 == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_2 + 10,local_40,4);
  }
  if (param_2[0xb] != 0) {
    FMemory::Free();
    lVar1 = local_38;
  }
  param_2[0xb] = lVar1;
  *(undefined4 *)(param_2 + 0xc) = local_30;
  local_30 = 0;
  local_38 = 0;
  TSparseArray<TSetElement<TTuple<FName,FCurveMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(local_78,0);
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14229e5a0 AddUniqueImpl<FBlendSampleData> body=217 status=ok
// SIG undefined AddUniqueImpl<FBlendSampleData>(void)

ulonglong TArray<FBlendSampleData,FDefaultAllocator>::AddUniqueImpl<FBlendSampleData>
                    (longlong *param_1,int *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  int *piVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  piVar3 = (int *)*param_1;
  uVar2 = *(uint *)(param_1 + 1);
  lVar8 = (longlong)(int)uVar2 * 0x40;
  if (piVar3 != piVar3 + (longlong)(int)uVar2 * 0x10) {
    piVar6 = piVar3;
    do {
      if (*param_2 == *piVar6) {
        uVar7 = (longlong)piVar6 - (longlong)piVar3 >> 6;
        if ((int)uVar7 != -1) {
          return uVar7;
        }
        break;
      }
      piVar6 = piVar6 + 0x10;
    } while (piVar6 != piVar3 + (longlong)(int)uVar2 * 0x10);
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar2 + 1)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1,uVar2);
  }
  lVar4 = *param_1;
  *(int *)(lVar8 + lVar4) = *param_2;
  *(undefined8 *)(lVar8 + 8 + lVar4) = *(undefined8 *)(param_2 + 2);
  *(int *)(lVar8 + 0x10 + lVar4) = param_2[4];
  *(int *)(lVar8 + 0x14 + lVar4) = param_2[5];
  *(int *)(lVar8 + 0x18 + lVar4) = param_2[6];
  *(int *)(lVar8 + 0x1c + lVar4) = param_2[7];
  uVar5 = *(undefined8 *)(param_2 + 10);
  puVar1 = (undefined8 *)(lVar8 + 0x20 + lVar4);
  *puVar1 = *(undefined8 *)(param_2 + 8);
  puVar1[1] = uVar5;
  *(undefined8 *)(lVar8 + 0x30 + lVar4) = 0;
  *(undefined8 *)(lVar8 + 0x30 + lVar4) = *(undefined8 *)(param_2 + 0xc);
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  *(int *)(lVar8 + 0x38 + lVar4) = param_2[0xe];
  *(int *)(lVar8 + 0x3c + lVar4) = param_2[0xf];
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  return (ulonglong)uVar2;
}



// FUNCTION 14229e680 Append<FBlendSampleData,FDefaultAllocator> body=269 status=ok
// SIG undefined Append<FBlendSampleData,FDefaultAllocator>(void)

void TArray<FBlendSampleData,FDefaultAllocator>::Append<FBlendSampleData,FDefaultAllocator>
               (longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 != 0) {
    iVar7 = (int)param_1[1];
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + iVar1) {
      TArray<FBoneTransform,FDefaultAllocator>::ResizeTo();
      iVar7 = (int)param_1[1];
    }
    puVar9 = (undefined4 *)*param_2;
    puVar8 = (undefined4 *)((longlong)iVar7 * 0x40 + *param_1);
    puVar6 = puVar8 + 0xf;
    iVar7 = iVar1;
    do {
      *puVar8 = *puVar9;
      *(undefined8 *)(puVar6 + -0xd) = *(undefined8 *)(puVar9 + 2);
      puVar6[-0xb] = puVar9[4];
      puVar6[-10] = puVar9[5];
      puVar6[-9] = puVar9[6];
      puVar6[-8] = puVar9[7];
      uVar3 = puVar9[9];
      uVar4 = puVar9[10];
      uVar5 = puVar9[0xb];
      puVar6[-7] = puVar9[8];
      puVar6[-6] = uVar3;
      puVar6[-5] = uVar4;
      puVar6[-4] = uVar5;
      *(undefined8 *)(puVar6 + -3) = 0;
      iVar2 = puVar9[0xe];
      _Src = *(void **)(puVar9 + 0xc);
      puVar6[-1] = iVar2;
      if (iVar2 == 0) {
        *puVar6 = 0;
      }
      else {
        TArray<int,FDefaultAllocator>::ResizeForCopy(puVar6 + -3,iVar2,0);
        ::_guard_xfg_dispatch_icall_nop(*(void **)(puVar6 + -3),_Src,(longlong)iVar2 << 2);
      }
      puVar8 = puVar8 + 0x10;
      puVar6 = puVar6 + 0x10;
      puVar9 = puVar9 + 0x10;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    *(int *)(param_1 + 1) = (int)param_1[1] + iVar1;
  }
  return;
}



// FUNCTION 14229e790 FUN_14229e790 body=238 status=ok
// SIG undefined FUN_14229e790(void)

void FUN_14229e790(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong local_18 [2];
  
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_144c7e268;
    FWeakObjectPtr::operator=(plVar2 + 1,param_2);
    plVar2[2] = param_3;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[4] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_144c7e2b0;
  }
  if (local_18 != param_1) {
    if (plVar2 == (longlong *)0x0) {
      if (((int)param_1[1] != 0) && (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x28))(plVar1,0);
        if (*param_1 != 0) {
          lVar3 = FMemory::Realloc(*param_1,0,0);
          *param_1 = lVar3;
        }
        *(undefined4 *)(param_1 + 1) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,param_1);
    }
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  return;
}



// FUNCTION 14229e880 FUN_14229e880 body=713 status=ok
// SIG undefined FUN_14229e880(void)

int * FUN_14229e880(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  longlong *plVar13;
  uint *puVar14;
  int iVar15;
  bool bVar16;
  
  iVar7 = 1;
  iVar15 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x18);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x18) = 0xffffffff;
    }
  }
  plVar13 = (longlong *)param_1[4];
  *param_2 = iVar10;
  lVar5 = (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = param_1 + 2;
  }
  bVar16 = false;
  puVar14 = (uint *)((longlong)plVar13 + lVar5);
  *puVar14 = *puVar14 | 1 << ((byte)iVar10 & 0x1f);
  lVar1 = (longlong)iVar10 * 0x18;
  plVar13 = (longlong *)(*param_1 + lVar1);
  lVar2 = *(longlong *)*param_3;
  *plVar13 = lVar2;
  *(undefined4 *)(plVar13 + 1) = 0xffffffff;
  *(undefined4 *)((longlong)plVar13 + 0xc) = 0;
  *(undefined4 *)(plVar13 + 2) = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    iVar9 = iVar15;
    if (uVar12 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar6 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar8 != -1) {
        do {
          iVar9 = iVar8;
          if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x18) == lVar2) break;
          iVar8 = *(int *)(*param_1 + 0x10 + (longlong)iVar8 * 0x18);
          iVar9 = iVar15;
        } while (iVar8 != -1);
      }
    }
    bVar16 = iVar9 != -1;
    if (bVar16) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar9 * 0x18),plVar13,0x10);
      bVar3 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar10;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar1 + lVar2) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar15 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar2) = iVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar13 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar13 == (longlong *)0x0) {
        plVar13 = param_1 + 2;
      }
      puVar14 = (uint *)((longlong)plVar13 + lVar5);
      *puVar14 = *puVar14 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_14229eb24;
    }
  }
  if (3 < uVar12) {
    uVar4 = (uVar12 >> 1) + 8;
    iVar15 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    iVar7 = 0x20;
    if (uVar4 != 0) {
      iVar7 = 0x1f - iVar15;
    }
    uVar4 = (uVar12 >> 1) + 7;
    iVar15 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar4 == 0) {
      cVar11 = '\0';
    }
    else {
      cVar11 = '\x1f' - (char)iVar15;
    }
    iVar7 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    uVar12 = (int)((ulonglong)*plVar13 >> 0x20) + (int)*plVar13 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar13 + 0x14) = uVar12;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(plVar13 + 2) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    TSet<TTuple<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14229eb24:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar16;
  }
  return param_2;
}



// FUNCTION 14229eb50 Emplace<TKeyInitializer<FName_const_&>_> body=578 status=ok
// SIG undefined Emplace<TKeyInitializer<FName_const_&>_>(void)

int * TSet<TTuple<FName,FCurveMetaData>,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<FName_const_&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  void *_Dst;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  bool bVar13;
  int local_58 [2];
  longlong *local_50;
  undefined2 local_48;
  
  TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_58);
  uVar12 = 0xffffffff;
  *param_2 = local_58[0];
  bVar13 = false;
  local_48 = 0;
  lVar2 = *(longlong *)*param_3;
  *local_50 = lVar2;
  *(undefined2 *)(local_50 + 1) = 0;
  local_50[2] = 0;
  local_50[3] = 0;
  *(undefined1 *)(local_50 + 4) = 0xff;
  *(undefined4 *)(local_50 + 5) = 0xffffffff;
  iVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar10 != 1) {
    iVar11 = -1;
    iVar8 = iVar11;
    if (iVar10 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar6 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar7 != -1) {
        do {
          iVar8 = iVar7;
          if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x30) == lVar2) break;
          iVar7 = *(int *)(*param_1 + 0x28 + (longlong)iVar7 * 0x30);
          iVar8 = iVar11;
        } while (iVar7 != -1);
      }
    }
    bVar13 = iVar8 != -1;
    if (bVar13) {
      _Dst = (void *)((longlong)iVar8 * 0x30 + *param_1);
      if (*(longlong *)((longlong)_Dst + 0x10) != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_50,0x28);
      iVar10 = *param_2;
      bVar3 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x30) = iVar10;
      }
      puVar5 = (undefined4 *)((longlong)iVar10 * 0x30 + *param_1);
      *puVar5 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar12 = (undefined4)param_1[6];
      }
      puVar5[1] = uVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar6 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar6 +
                       (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_14229ed69;
    }
  }
  cVar4 = TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar10,0);
  if (cVar4 == '\0') {
    uVar9 = (int)((ulonglong)*local_50 >> 0x20) + (int)*local_50 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_50 + 0x2c) = uVar9;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(local_50 + 5) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         *param_2;
  }
LAB_14229ed69:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar13;
  }
  return param_2;
}



// FUNCTION 14229eda0 Emplace<TKeyInitializer<FName_const_&>_> body=522 status=ok
// SIG undefined Emplace<TKeyInitializer<FName_const_&>_>(void)

int * TSet<TTuple<FName,FSmartNameMapping>,TDefaultMapHashableKeyFuncs<FName,FSmartNameMapping,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<FName_const_&>_>
                (longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  void *_Dst;
  uint uVar11;
  int iVar12;
  bool bVar13;
  int local_38 [2];
  longlong *local_30;
  
  TSparseArray<TSetElement<FShaderCodeLibraryPipeline>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  *param_2 = local_38[0];
  TKeyInitializer<FName_const_&>::operator<FName,FSmartNameMapping>_TTuple<FName,FSmartNameMapping>
            (param_3,local_30);
  uVar10 = 0xffffffff;
  bVar13 = false;
  *(undefined4 *)(local_30 + 0xd) = 0xffffffff;
  iVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar12 != 1) {
    lVar2 = *local_30;
    iVar9 = -1;
    iVar8 = iVar9;
    if (iVar12 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar6 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar7 != -1) {
        do {
          iVar8 = iVar7;
          if (*(longlong *)((longlong)iVar7 * 0x70 + *param_1) == lVar2) break;
          iVar7 = *(int *)((longlong)iVar7 * 0x70 + 0x68 + *param_1);
          iVar8 = iVar9;
        } while (iVar7 != -1);
      }
    }
    bVar13 = iVar8 != -1;
    if (bVar13) {
      _Dst = (void *)((longlong)iVar8 * 0x70 + *param_1);
      FSmartNameMapping::~FSmartNameMapping((longlong)_Dst + 8);
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_30,0x68);
      iVar12 = *param_2;
      bVar3 = (byte)iVar12 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x70 + *param_1) = iVar12;
      }
      puVar5 = (undefined4 *)((longlong)iVar12 * 0x70 + *param_1);
      *puVar5 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar10 = (undefined4)param_1[6];
      }
      puVar5[1] = uVar10;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar12;
      plVar6 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar6 +
                       (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_14229ef82;
    }
  }
  cVar4 = ConditionalRehash(param_1,iVar12,0);
  if (cVar4 == '\0') {
    uVar11 = (int)((ulonglong)*local_30 >> 0x20) + (int)*local_30 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x6c) = uVar11;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 0xd) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_14229ef82:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar13;
  }
  return param_2;
}



// FUNCTION 14229efb0 FUN_14229efb0 body=480 status=ok
// SIG undefined FUN_14229efb0(void)

int * FUN_14229efb0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  int local_res8 [2];
  uint local_res10;
  uint local_res14;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar8 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar8 * 0x14);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x14) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar8;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  puVar1 = (uint *)(*param_1 + (longlong)iVar8 * 0x14);
  puVar3 = (uint *)*param_3;
  puVar4 = (uint *)param_3[1];
  bVar10 = false;
  *puVar1 = *puVar3;
  puVar1[1] = puVar3[1];
  puVar1[2] = *puVar4;
  puVar1[3] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_res14 = puVar1[1];
    local_res10 = *puVar1;
    TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,&local_res10);
    bVar10 = local_res8[0] != -1;
    if (bVar10) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)local_res8[0] * 0x14),puVar1,0xc);
      TSparseArray<TSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_14229f16e;
    }
  }
  cVar5 = TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar5 == '\0') {
    uVar9 = (puVar1[1] ^ *puVar1) & (int)param_1[9] - 1U;
    puVar1[4] = uVar9;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    puVar1[3] = *(uint *)((longlong)plVar7 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         *param_2;
  }
LAB_14229f16e:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar10;
  }
  return param_2;
}



// FUNCTION 14229f190 FUN_14229f190 body=669 status=ok
// SIG undefined FUN_14229f190(void)

int * FUN_14229f190(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  
  iVar16 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar13 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar13);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar13 = (int)param_1[6];
    iVar15 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar11 = *(int *)(*param_1 + 4 + (longlong)iVar13 * 0x18);
    *(int *)(param_1 + 6) = iVar11;
    *(int *)((longlong)param_1 + 0x34) = iVar15;
    if (iVar15 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar11 * 0x18) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar13;
  lVar7 = (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar12 = (uint *)((longlong)plVar9 + lVar7);
  *puVar12 = *puVar12 | 1 << ((byte)iVar13 & 0x1f);
  puVar2 = (undefined8 *)param_3[1];
  lVar1 = (longlong)iVar13 * 0x18;
  puVar12 = (uint *)(*param_1 + lVar1);
  bVar17 = false;
  uVar3 = *(undefined8 *)*param_3;
  *(undefined8 *)puVar12 = uVar3;
  *(undefined8 *)(puVar12 + 2) = *puVar2;
  puVar12[4] = 0xffffffff;
  iVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar15 != 1) {
    iVar11 = iVar16;
    if (iVar15 != 0) {
      uVar14 = (uint)uVar3;
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = param_1 + 7;
      }
      iVar10 = *(int *)((longlong)plVar9 +
                       ((longlong)(int)(uVar14 ^ puVar12[1]) & (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar10 != -1) {
        lVar4 = *param_1;
        do {
          lVar8 = (longlong)iVar10;
          if ((*(uint *)(lVar4 + lVar8 * 0x18) == uVar14) &&
             (*(uint *)(lVar4 + 4 + lVar8 * 0x18) == puVar12[1])) {
            bVar17 = true;
          }
          else {
            bVar17 = false;
          }
          iVar11 = iVar10;
        } while ((!bVar17) &&
                (iVar10 = *(int *)(lVar4 + 0x10 + lVar8 * 0x18), iVar11 = iVar16, iVar10 != -1));
      }
    }
    bVar17 = iVar11 != -1;
    if (bVar17) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar11 * 0x18),puVar12,0x10);
      bVar5 = (byte)iVar13 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar13;
      }
      lVar4 = *param_1;
      *(undefined4 *)(lVar1 + lVar4) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar16 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar4) = iVar16;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar13;
      plVar9 = (longlong *)param_1[4];
      *param_2 = iVar11;
      if (plVar9 == (longlong *)0x0) {
        plVar9 = param_1 + 2;
      }
      puVar12 = (uint *)((longlong)plVar9 + lVar7);
      *puVar12 = *puVar12 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
      goto LAB_14229f402;
    }
  }
  cVar6 = TSet<TTuple<ULandscapeLayerInfoObject_*,float>,TDefaultMapHashableKeyFuncs<ULandscapeLayerInfoObject_*,float,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar15,0);
  if (cVar6 == '\0') {
    uVar14 = (puVar12[1] ^ *puVar12) & (int)param_1[9] - 1U;
    puVar12[5] = uVar14;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    puVar12[4] = *(uint *)((longlong)plVar9 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
         *param_2;
  }
LAB_14229f402:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar17;
  }
  return param_2;
}



// FUNCTION 14229f430 FUN_14229f430 body=643 status=ok
// SIG undefined FUN_14229f430(void)

int * FUN_14229f430(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  
  iVar8 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar7 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0x28);
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x28) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  plVar9 = (longlong *)(*param_1 + (longlong)iVar11 * 0x28);
  TPairInitializer<FName_const_&,FReferencePose_const_&>::
  operator<FName,FReferencePose>_TTuple<FName,FReferencePose>(param_3,plVar9);
  *(undefined4 *)(plVar9 + 4) = 0xffffffff;
  bVar12 = false;
  iVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar11 != 1) {
    lVar2 = *plVar9;
    iVar7 = iVar8;
    if (iVar11 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar6 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar5 != -1) {
        do {
          iVar7 = iVar5;
          if (*(longlong *)(*param_1 + (longlong)iVar5 * 0x28) == lVar2) break;
          iVar5 = *(int *)(*param_1 + 0x20 + (longlong)iVar5 * 0x28);
          iVar7 = iVar8;
        } while (iVar5 != -1);
      }
    }
    bVar12 = iVar7 != -1;
    if (bVar12) {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + 0x10 + (longlong)iVar7 * 0x28) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar2 + (longlong)iVar7 * 0x28),plVar9,0x20);
      iVar11 = *param_2;
      bVar3 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar11;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + (longlong)iVar11 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar8 = (int)param_1[6];
      }
      *(int *)(lVar2 + 4 + (longlong)iVar11 * 0x28) = iVar8;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar9 = (longlong *)param_1[4];
      *param_2 = iVar7;
      if (plVar9 == (longlong *)0x0) {
        plVar9 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar9 +
                       (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_14229f68e;
    }
  }
  cVar4 = TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar11,0);
  if (cVar4 == '\0') {
    uVar10 = (int)((ulonglong)*plVar9 >> 0x20) + (int)*plVar9 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar9 + 0x24) = uVar10;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(plVar9 + 4) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
LAB_14229f68e:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 14229f6c0 HeapSortInternal<FAnimNotifyEvent,FIdentityFunctor,TDereferenceWrapper<FAnimNotifyEvent,TLess<FAnimNotifyEvent>_>_> body=1801 status=ok
// SIG undefined HeapSortInternal<FAnimNotifyEvent,FIdentityFunctor,TDereferenceWrapper<FAnimNotifyEvent,TLess<FAnimNotifyEvent>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     HeapSortInternal<FAnimNotifyEvent,FIdentityFunctor,TDereferenceWrapper<FAnimNotifyEvent,TLess<FAnimNotifyEvent>_>_>
               (undefined8 *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_1e8 [32];
  int local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
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
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  iVar8 = (param_2 + -2) / 2;
  if (-1 < iVar8) {
    local_1c8 = iVar8 * 2 + 1;
    iVar9 = local_1c8;
    iVar10 = iVar8;
joined_r0x00014229f736:
    do {
      if (iVar9 < param_2) {
        iVar2 = iVar8 * 2;
        iVar9 = iVar2 + 1;
        if (iVar2 + 2 < param_2) {
          puVar11 = param_1 + ((longlong)iVar2 + 2) * 0x15;
          puVar13 = param_1 + (longlong)iVar9 * 0x15;
          fVar14 = (float)FAnimLinkableElement::GetTime(puVar11,0);
          fVar14 = fVar14 + *(float *)((longlong)puVar11 + 0x34);
          fVar15 = (float)FAnimLinkableElement::GetTime(puVar13);
          fVar15 = fVar15 + *(float *)((longlong)puVar13 + 0x34);
          if (1e-08 < ABS(fVar14 - fVar15)) {
            bVar1 = fVar14 < fVar15;
          }
          else {
            bVar1 = *(int *)((longlong)puVar11 + 0xa4) < *(int *)((longlong)puVar13 + 0xa4);
          }
          if (bVar1) {
            iVar9 = iVar2;
          }
          iVar9 = iVar9 + 1;
        }
        puVar13 = param_1 + (longlong)iVar8 * 0x15;
        puVar11 = param_1 + (longlong)iVar9 * 0x15;
        fVar14 = (float)FAnimLinkableElement::GetTime(puVar13,0);
        fVar14 = fVar14 + *(float *)((longlong)puVar13 + 0x34);
        fVar15 = (float)FAnimLinkableElement::GetTime(puVar11);
        fVar15 = fVar15 + *(float *)((longlong)puVar11 + 0x34);
        if (1e-08 < ABS(fVar14 - fVar15)) {
          bVar1 = fVar14 < fVar15;
        }
        else {
          bVar1 = *(int *)((longlong)puVar13 + 0xa4) < *(int *)((longlong)puVar11 + 0xa4);
        }
        if (bVar1) {
          if (puVar13 != puVar11) {
            local_1c0 = *puVar13;
            uStack_1b8 = puVar13[1];
            local_120 = puVar13[0x14];
            local_1b0 = puVar13[2];
            uStack_1a8 = puVar13[3];
            local_1a0 = puVar13[4];
            uStack_198 = puVar13[5];
            local_190 = puVar13[6];
            uStack_188 = puVar13[7];
            local_180 = puVar13[8];
            uStack_178 = puVar13[9];
            local_170 = puVar13[10];
            uStack_168 = puVar13[0xb];
            local_160 = puVar13[0xc];
            uStack_158 = puVar13[0xd];
            local_150 = puVar13[0xe];
            uStack_148 = puVar13[0xf];
            uVar3 = puVar13[0x10];
            uVar4 = puVar13[0x11];
            uVar5 = puVar13[0x12];
            uVar6 = puVar13[0x13];
            uVar7 = puVar11[1];
            *puVar13 = *puVar11;
            puVar13[1] = uVar7;
            uVar7 = puVar11[3];
            puVar13[2] = puVar11[2];
            puVar13[3] = uVar7;
            uVar7 = puVar11[5];
            puVar13[4] = puVar11[4];
            puVar13[5] = uVar7;
            uVar7 = puVar11[7];
            puVar13[6] = puVar11[6];
            puVar13[7] = uVar7;
            uVar7 = puVar11[9];
            puVar13[8] = puVar11[8];
            puVar13[9] = uVar7;
            uVar7 = puVar11[0xb];
            puVar13[10] = puVar11[10];
            puVar13[0xb] = uVar7;
            uVar7 = puVar11[0xd];
            puVar13[0xc] = puVar11[0xc];
            puVar13[0xd] = uVar7;
            uVar7 = puVar11[0xf];
            puVar13[0xe] = puVar11[0xe];
            puVar13[0xf] = uVar7;
            uVar7 = puVar11[0x11];
            puVar13[0x10] = puVar11[0x10];
            puVar13[0x11] = uVar7;
            uVar7 = puVar11[0x13];
            puVar13[0x12] = puVar11[0x12];
            puVar13[0x13] = uVar7;
            puVar13[0x14] = puVar11[0x14];
            *puVar11 = local_1c0;
            puVar11[1] = uStack_1b8;
            puVar11[2] = local_1b0;
            puVar11[3] = uStack_1a8;
            puVar11[4] = local_1a0;
            puVar11[5] = uStack_198;
            puVar11[6] = local_190;
            puVar11[7] = uStack_188;
            puVar11[8] = local_180;
            puVar11[9] = uStack_178;
            puVar11[10] = local_170;
            puVar11[0xb] = uStack_168;
            puVar11[0xc] = local_160;
            puVar11[0xd] = uStack_158;
            local_140._0_4_ = (undefined4)uVar3;
            local_140._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
            uStack_138._0_4_ = (undefined4)uVar4;
            uStack_138._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
            puVar11[0xe] = local_150;
            puVar11[0xf] = uStack_148;
            local_130._0_4_ = (undefined4)uVar5;
            local_130._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
            uStack_128._0_4_ = (undefined4)uVar6;
            uStack_128._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
            *(undefined4 *)(puVar11 + 0x10) = (undefined4)local_140;
            *(undefined4 *)((longlong)puVar11 + 0x84) = local_140._4_4_;
            *(undefined4 *)(puVar11 + 0x11) = (undefined4)uStack_138;
            *(undefined4 *)((longlong)puVar11 + 0x8c) = uStack_138._4_4_;
            *(undefined4 *)(puVar11 + 0x12) = (undefined4)local_130;
            *(undefined4 *)((longlong)puVar11 + 0x94) = local_130._4_4_;
            *(undefined4 *)(puVar11 + 0x13) = (undefined4)uStack_128;
            *(undefined4 *)((longlong)puVar11 + 0x9c) = uStack_128._4_4_;
            puVar11[0x14] = local_120;
            local_140 = uVar3;
            uStack_138 = uVar4;
            local_130 = uVar5;
            uStack_128 = uVar6;
          }
          iVar8 = iVar9;
          iVar9 = iVar9 * 2 + 1;
          goto joined_r0x00014229f736;
        }
      }
      local_1c8 = local_1c8 + -2;
      iVar8 = iVar10 + -1;
      iVar9 = local_1c8;
      iVar10 = iVar8;
    } while (-1 < iVar8);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar13 = param_1 + (longlong)param_2 * 0x15;
    do {
      if (param_1 != puVar13) {
        local_1c0 = *param_1;
        uStack_1b8 = param_1[1];
        local_120 = param_1[0x14];
        local_1b0 = param_1[2];
        uStack_1a8 = param_1[3];
        local_1a0 = param_1[4];
        uStack_198 = param_1[5];
        local_190 = param_1[6];
        uStack_188 = param_1[7];
        local_180 = param_1[8];
        uStack_178 = param_1[9];
        local_170 = param_1[10];
        uStack_168 = param_1[0xb];
        local_160 = param_1[0xc];
        uStack_158 = param_1[0xd];
        local_150 = param_1[0xe];
        uStack_148 = param_1[0xf];
        uVar3 = param_1[0x10];
        uVar4 = param_1[0x11];
        uVar5 = param_1[0x12];
        uVar6 = param_1[0x13];
        uVar7 = puVar13[1];
        *param_1 = *puVar13;
        param_1[1] = uVar7;
        uVar7 = puVar13[3];
        param_1[2] = puVar13[2];
        param_1[3] = uVar7;
        uVar7 = puVar13[5];
        param_1[4] = puVar13[4];
        param_1[5] = uVar7;
        uVar7 = puVar13[7];
        param_1[6] = puVar13[6];
        param_1[7] = uVar7;
        uVar7 = puVar13[9];
        param_1[8] = puVar13[8];
        param_1[9] = uVar7;
        uVar7 = puVar13[0xb];
        param_1[10] = puVar13[10];
        param_1[0xb] = uVar7;
        uVar7 = puVar13[0xd];
        param_1[0xc] = puVar13[0xc];
        param_1[0xd] = uVar7;
        uVar7 = puVar13[0xf];
        param_1[0xe] = puVar13[0xe];
        param_1[0xf] = uVar7;
        uVar7 = puVar13[0x11];
        param_1[0x10] = puVar13[0x10];
        param_1[0x11] = uVar7;
        uVar7 = puVar13[0x13];
        param_1[0x12] = puVar13[0x12];
        param_1[0x13] = uVar7;
        param_1[0x14] = puVar13[0x14];
        *puVar13 = local_1c0;
        puVar13[1] = uStack_1b8;
        puVar13[2] = local_1b0;
        puVar13[3] = uStack_1a8;
        puVar13[4] = local_1a0;
        puVar13[5] = uStack_198;
        puVar13[6] = local_190;
        puVar13[7] = uStack_188;
        puVar13[8] = local_180;
        puVar13[9] = uStack_178;
        puVar13[10] = local_170;
        puVar13[0xb] = uStack_168;
        puVar13[0xc] = local_160;
        puVar13[0xd] = uStack_158;
        local_140._0_4_ = (undefined4)uVar3;
        local_140._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
        uStack_138._0_4_ = (undefined4)uVar4;
        uStack_138._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
        puVar13[0xe] = local_150;
        puVar13[0xf] = uStack_148;
        local_130._0_4_ = (undefined4)uVar5;
        local_130._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
        uStack_128._0_4_ = (undefined4)uVar6;
        uStack_128._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
        *(undefined4 *)(puVar13 + 0x10) = (undefined4)local_140;
        *(undefined4 *)((longlong)puVar13 + 0x84) = local_140._4_4_;
        *(undefined4 *)(puVar13 + 0x11) = (undefined4)uStack_138;
        *(undefined4 *)((longlong)puVar13 + 0x8c) = uStack_138._4_4_;
        *(undefined4 *)(puVar13 + 0x12) = (undefined4)local_130;
        *(undefined4 *)((longlong)puVar13 + 0x94) = local_130._4_4_;
        *(undefined4 *)(puVar13 + 0x13) = (undefined4)uStack_128;
        *(undefined4 *)((longlong)puVar13 + 0x9c) = uStack_128._4_4_;
        puVar13[0x14] = local_120;
        local_140 = uVar3;
        uStack_138 = uVar4;
        local_130 = uVar5;
        uStack_128 = uVar6;
      }
      iVar8 = 0;
      if (1 < param_2) {
        do {
          iVar9 = iVar8 * 2;
          iVar10 = iVar9 + 1;
          if (iVar9 + 2 < param_2) {
            puVar12 = param_1 + ((longlong)iVar9 + 2) * 0x15;
            puVar11 = param_1 + (longlong)iVar10 * 0x15;
            fVar14 = (float)FAnimLinkableElement::GetTime(puVar12,0);
            fVar14 = fVar14 + *(float *)((longlong)puVar12 + 0x34);
            fVar15 = (float)FAnimLinkableElement::GetTime(puVar11);
            fVar15 = fVar15 + *(float *)((longlong)puVar11 + 0x34);
            if (1e-08 < ABS(fVar14 - fVar15)) {
              bVar1 = fVar14 < fVar15;
            }
            else {
              bVar1 = *(int *)((longlong)puVar12 + 0xa4) < *(int *)((longlong)puVar11 + 0xa4);
            }
            if (bVar1) {
              iVar10 = iVar9;
            }
            iVar10 = iVar10 + 1;
          }
          puVar11 = param_1 + (longlong)iVar8 * 0x15;
          puVar12 = param_1 + (longlong)iVar10 * 0x15;
          fVar14 = (float)FAnimLinkableElement::GetTime(puVar11,0);
          fVar14 = fVar14 + *(float *)((longlong)puVar11 + 0x34);
          fVar15 = (float)FAnimLinkableElement::GetTime(puVar12);
          fVar15 = fVar15 + *(float *)((longlong)puVar12 + 0x34);
          if (1e-08 < ABS(fVar14 - fVar15)) {
            bVar1 = fVar14 < fVar15;
          }
          else {
            bVar1 = *(int *)((longlong)puVar11 + 0xa4) < *(int *)((longlong)puVar12 + 0xa4);
          }
          if (!bVar1) break;
          if (puVar11 != puVar12) {
            local_118 = *puVar11;
            uStack_110 = puVar11[1];
            local_78 = puVar11[0x14];
            local_108 = puVar11[2];
            uStack_100 = puVar11[3];
            local_f8 = puVar11[4];
            uStack_f0 = puVar11[5];
            local_e8 = puVar11[6];
            uStack_e0 = puVar11[7];
            local_d8 = puVar11[8];
            uStack_d0 = puVar11[9];
            local_c8 = puVar11[10];
            uStack_c0 = puVar11[0xb];
            local_b8 = puVar11[0xc];
            uStack_b0 = puVar11[0xd];
            local_a8 = puVar11[0xe];
            uStack_a0 = puVar11[0xf];
            uVar3 = puVar11[0x10];
            uVar4 = puVar11[0x11];
            uVar5 = puVar11[0x12];
            uVar6 = puVar11[0x13];
            uVar7 = puVar12[1];
            *puVar11 = *puVar12;
            puVar11[1] = uVar7;
            uVar7 = puVar12[3];
            puVar11[2] = puVar12[2];
            puVar11[3] = uVar7;
            uVar7 = puVar12[5];
            puVar11[4] = puVar12[4];
            puVar11[5] = uVar7;
            uVar7 = puVar12[7];
            puVar11[6] = puVar12[6];
            puVar11[7] = uVar7;
            uVar7 = puVar12[9];
            puVar11[8] = puVar12[8];
            puVar11[9] = uVar7;
            uVar7 = puVar12[0xb];
            puVar11[10] = puVar12[10];
            puVar11[0xb] = uVar7;
            uVar7 = puVar12[0xd];
            puVar11[0xc] = puVar12[0xc];
            puVar11[0xd] = uVar7;
            uVar7 = puVar12[0xf];
            puVar11[0xe] = puVar12[0xe];
            puVar11[0xf] = uVar7;
            uVar7 = puVar12[0x11];
            puVar11[0x10] = puVar12[0x10];
            puVar11[0x11] = uVar7;
            uVar7 = puVar12[0x13];
            puVar11[0x12] = puVar12[0x12];
            puVar11[0x13] = uVar7;
            puVar11[0x14] = puVar12[0x14];
            *puVar12 = local_118;
            puVar12[1] = uStack_110;
            puVar12[2] = local_108;
            puVar12[3] = uStack_100;
            puVar12[4] = local_f8;
            puVar12[5] = uStack_f0;
            puVar12[6] = local_e8;
            puVar12[7] = uStack_e0;
            puVar12[8] = local_d8;
            puVar12[9] = uStack_d0;
            puVar12[10] = local_c8;
            puVar12[0xb] = uStack_c0;
            puVar12[0xc] = local_b8;
            puVar12[0xd] = uStack_b0;
            local_98._0_4_ = (undefined4)uVar3;
            local_98._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
            uStack_90._0_4_ = (undefined4)uVar4;
            uStack_90._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
            puVar12[0xe] = local_a8;
            puVar12[0xf] = uStack_a0;
            local_88._0_4_ = (undefined4)uVar5;
            local_88._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
            uStack_80._0_4_ = (undefined4)uVar6;
            uStack_80._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
            *(undefined4 *)(puVar12 + 0x10) = (undefined4)local_98;
            *(undefined4 *)((longlong)puVar12 + 0x84) = local_98._4_4_;
            *(undefined4 *)(puVar12 + 0x11) = (undefined4)uStack_90;
            *(undefined4 *)((longlong)puVar12 + 0x8c) = uStack_90._4_4_;
            *(undefined4 *)(puVar12 + 0x12) = (undefined4)local_88;
            *(undefined4 *)((longlong)puVar12 + 0x94) = local_88._4_4_;
            *(undefined4 *)(puVar12 + 0x13) = (undefined4)uStack_80;
            *(undefined4 *)((longlong)puVar12 + 0x9c) = uStack_80._4_4_;
            puVar12[0x14] = local_78;
            local_98 = uVar3;
            uStack_90 = uVar4;
            local_88 = uVar5;
            uStack_80 = uVar6;
          }
          iVar8 = iVar10;
        } while (iVar10 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar13 = puVar13 + -0x15;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 14229fdd0 FUN_14229fdd0 body=637 status=ok
// SIG undefined FUN_14229fdd0(void)

void FUN_14229fdd0(undefined8 *param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
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
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  int iVar17;
  undefined8 *puVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  
  iVar14 = (param_2 + -2) / 2;
  if (-1 < iVar14) {
    iVar17 = iVar14 * 2 + 1;
    iVar22 = iVar17;
    iVar21 = iVar14;
joined_r0x00014229fe05:
    do {
      if (iVar17 < param_2) {
        iVar19 = iVar14 * 2 + 1;
        iVar17 = iVar14 * 2 + 2;
        iVar20 = iVar19;
        if ((iVar17 < param_2) &&
           (fVar2 = *(float *)((longlong)param_1 + (longlong)iVar17 * 0x50 + 0x4c),
           pfVar1 = (float *)((longlong)param_1 + (longlong)iVar19 * 0x50 + 0x4c), iVar20 = iVar17,
           *pfVar1 <= fVar2 && fVar2 != *pfVar1)) {
          iVar20 = iVar19;
        }
        puVar15 = param_1 + (longlong)iVar14 * 10;
        puVar18 = param_1 + (longlong)iVar20 * 10;
        if (*(float *)((longlong)puVar18 + 0x4c) < *(float *)((longlong)puVar15 + 0x4c)) {
          if (puVar15 != puVar18) {
            uVar3 = puVar18[1];
            uVar4 = *puVar15;
            uVar5 = puVar15[1];
            uVar6 = puVar15[2];
            uVar7 = puVar15[3];
            uVar8 = puVar15[4];
            uVar9 = puVar15[5];
            uVar10 = puVar15[6];
            uVar11 = puVar15[7];
            uVar12 = puVar15[8];
            uVar13 = puVar15[9];
            *puVar15 = *puVar18;
            puVar15[1] = uVar3;
            uVar3 = puVar18[3];
            puVar15[2] = puVar18[2];
            puVar15[3] = uVar3;
            uVar3 = puVar18[5];
            puVar15[4] = puVar18[4];
            puVar15[5] = uVar3;
            uVar3 = puVar18[7];
            puVar15[6] = puVar18[6];
            puVar15[7] = uVar3;
            uVar3 = puVar18[9];
            puVar15[8] = puVar18[8];
            puVar15[9] = uVar3;
            *puVar18 = uVar4;
            puVar18[1] = uVar5;
            puVar18[2] = uVar6;
            puVar18[3] = uVar7;
            puVar18[4] = uVar8;
            puVar18[5] = uVar9;
            puVar18[6] = uVar10;
            puVar18[7] = uVar11;
            puVar18[8] = uVar12;
            puVar18[9] = uVar13;
          }
          iVar17 = iVar20 * 2 + 1;
          iVar14 = iVar20;
          goto joined_r0x00014229fe05;
        }
      }
      iVar17 = iVar22 + -2;
      iVar14 = iVar21 + -1;
      iVar22 = iVar17;
      iVar21 = iVar14;
    } while (-1 < iVar14);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar18 = param_1 + (longlong)param_2 * 10;
    do {
      if (param_1 != puVar18) {
        uVar3 = puVar18[1];
        uVar4 = *param_1;
        uVar5 = param_1[1];
        uVar6 = param_1[2];
        uVar7 = param_1[3];
        uVar8 = param_1[4];
        uVar9 = param_1[5];
        uVar10 = param_1[6];
        uVar11 = param_1[7];
        uVar12 = param_1[8];
        uVar13 = param_1[9];
        *param_1 = *puVar18;
        param_1[1] = uVar3;
        uVar3 = puVar18[3];
        param_1[2] = puVar18[2];
        param_1[3] = uVar3;
        uVar3 = puVar18[5];
        param_1[4] = puVar18[4];
        param_1[5] = uVar3;
        uVar3 = puVar18[7];
        param_1[6] = puVar18[6];
        param_1[7] = uVar3;
        uVar3 = puVar18[9];
        param_1[8] = puVar18[8];
        param_1[9] = uVar3;
        *puVar18 = uVar4;
        puVar18[1] = uVar5;
        puVar18[2] = uVar6;
        puVar18[3] = uVar7;
        puVar18[4] = uVar8;
        puVar18[5] = uVar9;
        puVar18[6] = uVar10;
        puVar18[7] = uVar11;
        puVar18[8] = uVar12;
        puVar18[9] = uVar13;
      }
      iVar14 = 0;
      if (1 < param_2) {
        do {
          iVar21 = iVar14 * 2 + 1;
          iVar17 = iVar14 * 2 + 2;
          iVar22 = iVar21;
          if ((iVar17 < param_2) &&
             (fVar2 = *(float *)((longlong)param_1 + (longlong)iVar17 * 0x50 + 0x4c),
             pfVar1 = (float *)((longlong)param_1 + (longlong)iVar21 * 0x50 + 0x4c), iVar22 = iVar17
             , *pfVar1 <= fVar2 && fVar2 != *pfVar1)) {
            iVar22 = iVar21;
          }
          puVar16 = param_1 + (longlong)iVar14 * 10;
          puVar15 = param_1 + (longlong)iVar22 * 10;
          if (*(float *)((longlong)puVar16 + 0x4c) <= *(float *)((longlong)puVar15 + 0x4c)) break;
          if (puVar16 != puVar15) {
            uVar3 = puVar15[1];
            uVar4 = *puVar16;
            uVar5 = puVar16[1];
            uVar6 = puVar16[2];
            uVar7 = puVar16[3];
            uVar8 = puVar16[4];
            uVar9 = puVar16[5];
            uVar10 = puVar16[6];
            uVar11 = puVar16[7];
            uVar12 = puVar16[8];
            uVar13 = puVar16[9];
            *puVar16 = *puVar15;
            puVar16[1] = uVar3;
            uVar3 = puVar15[3];
            puVar16[2] = puVar15[2];
            puVar16[3] = uVar3;
            uVar3 = puVar15[5];
            puVar16[4] = puVar15[4];
            puVar16[5] = uVar3;
            uVar3 = puVar15[7];
            puVar16[6] = puVar15[6];
            puVar16[7] = uVar3;
            uVar3 = puVar15[9];
            puVar16[8] = puVar15[8];
            puVar16[9] = uVar3;
            *puVar15 = uVar4;
            puVar15[1] = uVar5;
            puVar15[2] = uVar6;
            puVar15[3] = uVar7;
            puVar15[4] = uVar8;
            puVar15[5] = uVar9;
            puVar15[6] = uVar10;
            puVar15[7] = uVar11;
            puVar15[8] = uVar12;
            puVar15[9] = uVar13;
          }
          iVar14 = iVar22;
        } while (iVar22 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar18 = puVar18 + -10;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1422a0050 HeapSortInternal<FBlendSampleData,FIdentityFunctor,TDereferenceWrapper<FBlendSampleData,<lambda_cb145bcc11e94150a77fe427b9dae3d9>_>_> body=545 status=ok
// SIG undefined HeapSortInternal<FBlendSampleData,FIdentityFunctor,TDereferenceWrapper<FBlendSampleData,<lambda_cb145bcc11e94150a77fe427b9dae3d9>_>_>(void)

void AlgoImpl::
     HeapSortInternal<FBlendSampleData,FIdentityFunctor,TDereferenceWrapper<FBlendSampleData,<lambda_cb145bcc11e94150a77fe427b9dae3d9>_>_>
               (undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  
  iVar10 = (param_2 + -2) / 2;
  if (-1 < iVar10) {
    iVar16 = iVar10 * 2 + 1;
    iVar14 = iVar16;
    iVar13 = iVar10;
joined_r0x0001422a007a:
    do {
      if (iVar16 < param_2) {
        iVar11 = iVar10 * 2 + 1;
        iVar16 = iVar10 * 2 + 2;
        iVar12 = iVar11;
        if ((iVar16 < param_2) &&
           (iVar12 = iVar16,
           *(float *)(param_1 + (longlong)iVar11 * 8 + 2) <=
           *(float *)(param_1 + (longlong)iVar16 * 8 + 2) &&
           *(float *)(param_1 + (longlong)iVar16 * 8 + 2) !=
           *(float *)(param_1 + (longlong)iVar11 * 8 + 2))) {
          iVar12 = iVar11;
        }
        puVar17 = param_1 + (longlong)iVar10 * 8;
        puVar15 = param_1 + (longlong)iVar12 * 8;
        if (*(float *)(puVar15 + 2) <= *(float *)(puVar17 + 2) &&
            *(float *)(puVar17 + 2) != *(float *)(puVar15 + 2)) {
          if (puVar17 != puVar15) {
            uVar1 = puVar15[1];
            uVar2 = *puVar17;
            uVar3 = puVar17[1];
            uVar4 = puVar17[2];
            uVar5 = puVar17[3];
            uVar6 = puVar17[4];
            uVar7 = puVar17[5];
            uVar8 = puVar17[6];
            uVar9 = puVar17[7];
            *puVar17 = *puVar15;
            puVar17[1] = uVar1;
            uVar1 = puVar15[3];
            puVar17[2] = puVar15[2];
            puVar17[3] = uVar1;
            uVar1 = puVar15[5];
            puVar17[4] = puVar15[4];
            puVar17[5] = uVar1;
            uVar1 = puVar15[7];
            puVar17[6] = puVar15[6];
            puVar17[7] = uVar1;
            *puVar15 = uVar2;
            puVar15[1] = uVar3;
            puVar15[2] = uVar4;
            puVar15[3] = uVar5;
            puVar15[4] = uVar6;
            puVar15[5] = uVar7;
            puVar15[6] = uVar8;
            puVar15[7] = uVar9;
          }
          iVar16 = iVar12 * 2 + 1;
          iVar10 = iVar12;
          goto joined_r0x0001422a007a;
        }
      }
      iVar16 = iVar14 + -2;
      iVar10 = iVar13 + -1;
      iVar14 = iVar16;
      iVar13 = iVar10;
    } while (-1 < iVar10);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar15 = param_1 + (longlong)param_2 * 8;
    do {
      if (param_1 != puVar15) {
        uVar1 = puVar15[1];
        uVar2 = *param_1;
        uVar3 = param_1[1];
        uVar4 = param_1[2];
        uVar5 = param_1[3];
        uVar6 = param_1[4];
        uVar7 = param_1[5];
        uVar8 = param_1[6];
        uVar9 = param_1[7];
        *param_1 = *puVar15;
        param_1[1] = uVar1;
        uVar1 = puVar15[3];
        param_1[2] = puVar15[2];
        param_1[3] = uVar1;
        uVar1 = puVar15[5];
        param_1[4] = puVar15[4];
        param_1[5] = uVar1;
        uVar1 = puVar15[7];
        param_1[6] = puVar15[6];
        param_1[7] = uVar1;
        *puVar15 = uVar2;
        puVar15[1] = uVar3;
        puVar15[2] = uVar4;
        puVar15[3] = uVar5;
        puVar15[4] = uVar6;
        puVar15[5] = uVar7;
        puVar15[6] = uVar8;
        puVar15[7] = uVar9;
      }
      iVar10 = 0;
      if (1 < param_2) {
        do {
          iVar13 = iVar10 * 2 + 1;
          iVar16 = iVar10 * 2 + 2;
          iVar14 = iVar13;
          if ((iVar16 < param_2) &&
             (iVar14 = iVar16,
             *(float *)(param_1 + (longlong)iVar13 * 8 + 2) <=
             *(float *)(param_1 + (longlong)iVar16 * 8 + 2) &&
             *(float *)(param_1 + (longlong)iVar16 * 8 + 2) !=
             *(float *)(param_1 + (longlong)iVar13 * 8 + 2))) {
            iVar14 = iVar13;
          }
          puVar18 = param_1 + (longlong)iVar10 * 8;
          puVar17 = param_1 + (longlong)iVar14 * 8;
          if (*(float *)(puVar18 + 2) < *(float *)(puVar17 + 2) ||
              *(float *)(puVar18 + 2) == *(float *)(puVar17 + 2)) break;
          if (puVar18 != puVar17) {
            uVar1 = puVar17[1];
            uVar2 = *puVar18;
            uVar3 = puVar18[1];
            uVar4 = puVar18[2];
            uVar5 = puVar18[3];
            uVar6 = puVar18[4];
            uVar7 = puVar18[5];
            uVar8 = puVar18[6];
            uVar9 = puVar18[7];
            *puVar18 = *puVar17;
            puVar18[1] = uVar1;
            uVar1 = puVar17[3];
            puVar18[2] = puVar17[2];
            puVar18[3] = uVar1;
            uVar1 = puVar17[5];
            puVar18[4] = puVar17[4];
            puVar18[5] = uVar1;
            uVar1 = puVar17[7];
            puVar18[6] = puVar17[6];
            puVar18[7] = uVar1;
            *puVar17 = uVar2;
            puVar17[1] = uVar3;
            puVar17[2] = uVar4;
            puVar17[3] = uVar5;
            puVar17[4] = uVar6;
            puVar17[5] = uVar7;
            puVar17[6] = uVar8;
            puVar17[7] = uVar9;
          }
          iVar10 = iVar14;
        } while (iVar14 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar15 = puVar15 + -8;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1422a0280 FUN_1422a0280 body=417 status=ok
// SIG undefined FUN_1422a0280(void)

void FUN_1422a0280(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  iVar7 = (param_2 + -2) / 2;
  if (-1 < iVar7) {
    iVar8 = iVar7 * 2 + 1;
    iVar1 = iVar8;
    iVar10 = iVar7;
joined_r0x0001422a02aa:
    do {
      if (iVar8 < param_2) {
        iVar8 = iVar7 * 2;
        iVar9 = iVar8 + 1;
        if (iVar8 + 2 < param_2) {
          if (*(int *)(param_1 + (longlong)iVar9 * 4 + 1) <
              *(int *)(param_1 + (longlong)iVar8 * 4 + 9)) {
            iVar9 = iVar8;
          }
          iVar9 = iVar9 + 1;
        }
        puVar12 = param_1 + (longlong)iVar7 * 4;
        puVar11 = param_1 + (longlong)iVar9 * 4;
        if (*(int *)(puVar11 + 1) < *(int *)(puVar12 + 1)) {
          if (puVar12 != puVar11) {
            uVar2 = puVar11[1];
            uVar3 = *puVar12;
            uVar4 = puVar12[1];
            uVar5 = puVar12[2];
            uVar6 = puVar12[3];
            *puVar12 = *puVar11;
            puVar12[1] = uVar2;
            uVar2 = puVar11[3];
            puVar12[2] = puVar11[2];
            puVar12[3] = uVar2;
            *puVar11 = uVar3;
            puVar11[1] = uVar4;
            puVar11[2] = uVar5;
            puVar11[3] = uVar6;
          }
          iVar8 = iVar9 * 2 + 1;
          iVar7 = iVar9;
          goto joined_r0x0001422a02aa;
        }
      }
      iVar8 = iVar1 + -2;
      iVar7 = iVar10 + -1;
      iVar1 = iVar8;
      iVar10 = iVar7;
    } while (-1 < iVar7);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar11 = param_1 + (longlong)param_2 * 4;
    do {
      if (param_1 != puVar11) {
        uVar2 = puVar11[1];
        uVar3 = *param_1;
        uVar4 = param_1[1];
        uVar5 = param_1[2];
        uVar6 = param_1[3];
        *param_1 = *puVar11;
        param_1[1] = uVar2;
        uVar2 = puVar11[3];
        param_1[2] = puVar11[2];
        param_1[3] = uVar2;
        *puVar11 = uVar3;
        puVar11[1] = uVar4;
        puVar11[2] = uVar5;
        puVar11[3] = uVar6;
      }
      iVar7 = 0;
      if (1 < param_2) {
        do {
          iVar1 = iVar7 * 2;
          iVar8 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            if (*(int *)(param_1 + (longlong)iVar8 * 4 + 1) <
                *(int *)(param_1 + (longlong)iVar1 * 4 + 9)) {
              iVar8 = iVar1;
            }
            iVar8 = iVar8 + 1;
          }
          puVar13 = param_1 + (longlong)iVar7 * 4;
          puVar12 = param_1 + (longlong)iVar8 * 4;
          if (*(int *)(puVar13 + 1) <= *(int *)(puVar12 + 1)) break;
          if (puVar13 != puVar12) {
            uVar2 = puVar12[1];
            uVar3 = *puVar13;
            uVar4 = puVar13[1];
            uVar5 = puVar13[2];
            uVar6 = puVar13[3];
            *puVar13 = *puVar12;
            puVar13[1] = uVar2;
            uVar2 = puVar12[3];
            puVar13[2] = puVar12[2];
            puVar13[3] = uVar2;
            *puVar12 = uVar3;
            puVar12[1] = uVar4;
            puVar12[2] = uVar5;
            puVar12[3] = uVar6;
          }
          iVar7 = iVar8;
        } while (iVar8 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar11 = puVar11 + -4;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1422a0430 IntroSortInternal<FAnimNotifyEvent,FIdentityFunctor,TDereferenceWrapper<FAnimNotifyEvent,TLess<FAnimNotifyEvent>_>_> body=2480 status=ok
// SIG undefined IntroSortInternal<FAnimNotifyEvent,FIdentityFunctor,TDereferenceWrapper<FAnimNotifyEvent,TLess<FAnimNotifyEvent>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FAnimNotifyEvent,FIdentityFunctor,TDereferenceWrapper<FAnimNotifyEvent,TLess<FAnimNotifyEvent>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined1 (*pauVar12) [16];
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_658 [48];
  undefined8 local_628;
  undefined8 local_620;
  undefined8 uStack_618;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
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
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
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
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
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
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
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
  longlong local_378;
  longlong lStack_370;
  undefined4 local_368;
  undefined1 local_360 [744];
  ulonglong local_78;
  
  if (1 < param_2) {
    local_78 = DAT_1468387a8 ^ (ulonglong)auStack_658;
    fVar16 = (float)(longlong)param_2;
    lStack_370 = param_1 + -0xa8 + param_2 * 0xa8;
    if ((longlong)param_2 < 0) {
      fVar16 = fVar16 + 1.8446744e+19;
    }
    local_378 = param_1;
    fVar16 = ::_guard_xfg_dispatch_icall_nop(fVar16);
    local_368 = (undefined4)(longlong)(fVar16 + fVar16);
    ::_guard_xfg_dispatch_icall_nop(local_360,0,0x2e8);
    pauVar12 = (undefined1 (*) [16])&local_378;
    do {
      local_628 = *(undefined8 *)pauVar12[1];
      puVar10 = SUB168(*pauVar12,0);
      puVar15 = SUB168(*pauVar12,8);
      lVar6 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816((longlong)puVar15 - (longlong)puVar10),8
                    ) + ((longlong)puVar15 - (longlong)puVar10);
      lVar6 = ((lVar6 >> 7) + 1) - (lVar6 >> 0x3f);
      puVar9 = puVar10;
      iVar11 = (int)local_628;
      if ((int)local_628 != 0) {
LAB_1422a0562:
        if (8 < lVar6) {
          puVar10 = puVar9 + (lVar6 / 2) * 0x15;
          if (puVar10 != puVar9) {
            local_620 = *puVar10;
            uStack_618 = puVar10[1];
            local_580 = puVar10[0x14];
            local_610 = puVar10[2];
            uStack_608 = puVar10[3];
            local_600 = puVar10[4];
            uStack_5f8 = puVar10[5];
            local_5f0 = puVar10[6];
            uStack_5e8 = puVar10[7];
            local_5e0 = puVar10[8];
            uStack_5d8 = puVar10[9];
            local_5d0 = puVar10[10];
            uStack_5c8 = puVar10[0xb];
            local_5c0 = puVar10[0xc];
            uStack_5b8 = puVar10[0xd];
            local_5b0 = puVar10[0xe];
            uStack_5a8 = puVar10[0xf];
            uVar2 = puVar10[0x10];
            uVar3 = puVar10[0x11];
            local_590 = *(undefined8 *)*(undefined1 (*) [16])(puVar10 + 0x12);
            uStack_588 = puVar10[0x13];
            auVar5 = *(undefined1 (*) [16])(puVar10 + 0x12);
            uVar4 = puVar9[1];
            *puVar10 = *puVar9;
            puVar10[1] = uVar4;
            uVar4 = puVar9[3];
            puVar10[2] = puVar9[2];
            puVar10[3] = uVar4;
            uVar4 = puVar9[5];
            puVar10[4] = puVar9[4];
            puVar10[5] = uVar4;
            uVar4 = puVar9[7];
            puVar10[6] = puVar9[6];
            puVar10[7] = uVar4;
            uVar4 = puVar9[9];
            puVar10[8] = puVar9[8];
            puVar10[9] = uVar4;
            uVar4 = puVar9[0xb];
            puVar10[10] = puVar9[10];
            puVar10[0xb] = uVar4;
            uVar4 = puVar9[0xd];
            puVar10[0xc] = puVar9[0xc];
            puVar10[0xd] = uVar4;
            uVar4 = puVar9[0xf];
            puVar10[0xe] = puVar9[0xe];
            puVar10[0xf] = uVar4;
            uVar4 = puVar9[0x11];
            puVar10[0x10] = puVar9[0x10];
            puVar10[0x11] = uVar4;
            uVar4 = puVar9[0x13];
            puVar10[0x12] = puVar9[0x12];
            puVar10[0x13] = uVar4;
            puVar10[0x14] = puVar9[0x14];
            *puVar9 = local_620;
            puVar9[1] = uStack_618;
            puVar9[2] = local_610;
            puVar9[3] = uStack_608;
            puVar9[4] = local_600;
            puVar9[5] = uStack_5f8;
            puVar9[6] = local_5f0;
            puVar9[7] = uStack_5e8;
            puVar9[8] = local_5e0;
            puVar9[9] = uStack_5d8;
            puVar9[10] = local_5d0;
            puVar9[0xb] = uStack_5c8;
            puVar9[0xc] = local_5c0;
            puVar9[0xd] = uStack_5b8;
            local_5a0._0_4_ = (undefined4)uVar2;
            local_5a0._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
            uStack_598._0_4_ = (undefined4)uVar3;
            uStack_598._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
            puVar9[0xe] = local_5b0;
            puVar9[0xf] = uStack_5a8;
            *(undefined4 *)(puVar9 + 0x10) = (undefined4)local_5a0;
            *(undefined4 *)((longlong)puVar9 + 0x84) = local_5a0._4_4_;
            *(undefined4 *)(puVar9 + 0x11) = (undefined4)uStack_598;
            *(undefined4 *)((longlong)puVar9 + 0x8c) = uStack_598._4_4_;
            *(undefined1 (*) [16])(puVar9 + 0x12) = auVar5;
            puVar9[0x14] = local_580;
            local_5a0 = uVar2;
            uStack_598 = uVar3;
          }
          puVar13 = puVar15 + 0x15;
          puVar10 = puVar9;
LAB_1422a06e0:
          puVar8 = puVar10;
          puVar10 = puVar8 + 0x15;
          if (puVar10 <= puVar15) goto code_r0x0001422a06ec;
          goto LAB_1422a0740;
        }
        for (; puVar10 = puVar9, puVar13 = puVar9, puVar9 < puVar15; puVar15 = puVar15 + -0x15) {
          while (puVar8 = puVar10, puVar10 = puVar13 + 0x15, puVar10 <= puVar15) {
            fVar16 = (float)FAnimLinkableElement::GetTime(puVar8,0);
            fVar16 = fVar16 + *(float *)((longlong)puVar8 + 0x34);
            fVar17 = (float)FAnimLinkableElement::GetTime(puVar10);
            fVar17 = fVar17 + *(float *)((longlong)puVar13 + 0xdc);
            if (1e-08 < ABS(fVar16 - fVar17)) {
              bVar1 = fVar16 < fVar17;
            }
            else {
              bVar1 = *(int *)((longlong)puVar8 + 0xa4) < *(int *)((longlong)puVar13 + 0x14c);
            }
            puVar13 = puVar10;
            if (!bVar1) {
              puVar10 = puVar8;
            }
          }
          if (puVar8 != puVar15) {
            local_428 = *puVar8;
            uStack_420 = puVar8[1];
            local_388 = puVar8[0x14];
            local_418 = puVar8[2];
            uStack_410 = puVar8[3];
            local_408 = puVar8[4];
            uStack_400 = puVar8[5];
            local_3f8 = puVar8[6];
            uStack_3f0 = puVar8[7];
            local_3e8 = puVar8[8];
            uStack_3e0 = puVar8[9];
            local_3d8 = puVar8[10];
            uStack_3d0 = puVar8[0xb];
            local_3c8 = puVar8[0xc];
            uStack_3c0 = puVar8[0xd];
            local_3b8 = puVar8[0xe];
            uStack_3b0 = puVar8[0xf];
            uVar2 = puVar8[0x10];
            uVar3 = puVar8[0x11];
            local_398 = *(undefined8 *)*(undefined1 (*) [16])(puVar8 + 0x12);
            uStack_390 = puVar8[0x13];
            auVar5 = *(undefined1 (*) [16])(puVar8 + 0x12);
            uVar4 = puVar15[1];
            *puVar8 = *puVar15;
            puVar8[1] = uVar4;
            uVar4 = puVar15[3];
            puVar8[2] = puVar15[2];
            puVar8[3] = uVar4;
            uVar4 = puVar15[5];
            puVar8[4] = puVar15[4];
            puVar8[5] = uVar4;
            uVar4 = puVar15[7];
            puVar8[6] = puVar15[6];
            puVar8[7] = uVar4;
            uVar4 = puVar15[9];
            puVar8[8] = puVar15[8];
            puVar8[9] = uVar4;
            uVar4 = puVar15[0xb];
            puVar8[10] = puVar15[10];
            puVar8[0xb] = uVar4;
            uVar4 = puVar15[0xd];
            puVar8[0xc] = puVar15[0xc];
            puVar8[0xd] = uVar4;
            uVar4 = puVar15[0xf];
            puVar8[0xe] = puVar15[0xe];
            puVar8[0xf] = uVar4;
            uVar4 = puVar15[0x11];
            puVar8[0x10] = puVar15[0x10];
            puVar8[0x11] = uVar4;
            uVar4 = puVar15[0x13];
            puVar8[0x12] = puVar15[0x12];
            puVar8[0x13] = uVar4;
            puVar8[0x14] = puVar15[0x14];
            *puVar15 = local_428;
            puVar15[1] = uStack_420;
            puVar15[2] = local_418;
            puVar15[3] = uStack_410;
            puVar15[4] = local_408;
            puVar15[5] = uStack_400;
            puVar15[6] = local_3f8;
            puVar15[7] = uStack_3f0;
            puVar15[8] = local_3e8;
            puVar15[9] = uStack_3e0;
            puVar15[10] = local_3d8;
            puVar15[0xb] = uStack_3d0;
            puVar15[0xc] = local_3c8;
            puVar15[0xd] = uStack_3c0;
            local_3a8._0_4_ = (undefined4)uVar2;
            local_3a8._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
            uStack_3a0._0_4_ = (undefined4)uVar3;
            uStack_3a0._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
            puVar15[0xe] = local_3b8;
            puVar15[0xf] = uStack_3b0;
            *(undefined4 *)(puVar15 + 0x10) = (undefined4)local_3a8;
            *(undefined4 *)((longlong)puVar15 + 0x84) = local_3a8._4_4_;
            *(undefined4 *)(puVar15 + 0x11) = (undefined4)uStack_3a0;
            *(undefined4 *)((longlong)puVar15 + 0x8c) = uStack_3a0._4_4_;
            *(undefined1 (*) [16])(puVar15 + 0x12) = auVar5;
            puVar15[0x14] = local_388;
            local_3a8 = uVar2;
            uStack_3a0 = uVar3;
          }
        }
        goto LAB_1422a0b5c;
      }
LAB_1422a0b43:
      HeapSortInternal<FAnimNotifyEvent,FIdentityFunctor,TDereferenceWrapper<FAnimNotifyEvent,TLess<FAnimNotifyEvent>_>_>
                (puVar10,lVar6,param_3,param_4);
LAB_1422a0b5c:
      pauVar12 = (undefined1 (*) [16])(pauVar12[-2] + 8);
    } while ((undefined1 (*) [16])&local_378 <= pauVar12);
  }
  return;
code_r0x0001422a06ec:
  fVar16 = (float)FAnimLinkableElement::GetTime(puVar9,0);
  fVar16 = fVar16 + *(float *)((longlong)puVar9 + 0x34);
  fVar17 = (float)FAnimLinkableElement::GetTime(puVar10);
  fVar17 = fVar17 + *(float *)((longlong)puVar8 + 0xdc);
  if (1e-08 < ABS(fVar16 - fVar17)) {
    bVar1 = fVar16 < fVar17;
  }
  else {
    bVar1 = *(int *)((longlong)puVar9 + 0xa4) < *(int *)((longlong)puVar8 + 0x14c);
  }
  if (!bVar1) goto LAB_1422a06e0;
LAB_1422a0740:
  do {
    puVar14 = puVar13;
    puVar13 = puVar14 + -0x15;
    if (puVar13 <= puVar9) break;
    fVar16 = (float)FAnimLinkableElement::GetTime(puVar13,0);
    fVar16 = fVar16 + *(float *)((longlong)puVar14 + -0x74);
    fVar17 = (float)FAnimLinkableElement::GetTime(puVar9);
    fVar17 = fVar17 + *(float *)((longlong)puVar9 + 0x34);
    if (1e-08 < ABS(fVar16 - fVar17)) {
      bVar1 = fVar16 < fVar17;
    }
    else {
      bVar1 = *(int *)((longlong)puVar14 + -4) < *(int *)((longlong)puVar9 + 0xa4);
    }
  } while (!bVar1);
  if (puVar10 <= puVar13) {
    if (puVar10 != puVar13) {
      local_578 = *puVar10;
      uStack_570 = puVar8[0x16];
      local_4d8 = puVar8[0x29];
      local_568 = puVar8[0x17];
      uStack_560 = puVar8[0x18];
      local_558 = puVar8[0x19];
      uStack_550 = puVar8[0x1a];
      local_548 = puVar8[0x1b];
      uStack_540 = puVar8[0x1c];
      local_538 = puVar8[0x1d];
      uStack_530 = puVar8[0x1e];
      local_528 = puVar8[0x1f];
      uStack_520 = puVar8[0x20];
      local_518 = puVar8[0x21];
      uStack_510 = puVar8[0x22];
      local_508 = puVar8[0x23];
      uStack_500 = puVar8[0x24];
      uVar2 = puVar8[0x25];
      uVar3 = puVar8[0x26];
      local_4e8 = *(undefined8 *)*(undefined1 (*) [16])(puVar8 + 0x27);
      uStack_4e0 = puVar8[0x28];
      auVar5 = *(undefined1 (*) [16])(puVar8 + 0x27);
      uVar4 = puVar14[-0x14];
      *puVar10 = *puVar13;
      puVar8[0x16] = uVar4;
      uVar4 = puVar14[-0x12];
      puVar8[0x17] = puVar14[-0x13];
      puVar8[0x18] = uVar4;
      uVar4 = puVar14[-0x10];
      puVar8[0x19] = puVar14[-0x11];
      puVar8[0x1a] = uVar4;
      uVar4 = puVar14[-0xe];
      puVar8[0x1b] = puVar14[-0xf];
      puVar8[0x1c] = uVar4;
      uVar4 = puVar14[-0xc];
      puVar8[0x1d] = puVar14[-0xd];
      puVar8[0x1e] = uVar4;
      uVar4 = puVar14[-10];
      puVar8[0x1f] = puVar14[-0xb];
      puVar8[0x20] = uVar4;
      uVar4 = puVar14[-8];
      puVar8[0x21] = puVar14[-9];
      puVar8[0x22] = uVar4;
      uVar4 = puVar14[-6];
      puVar8[0x23] = puVar14[-7];
      puVar8[0x24] = uVar4;
      uVar4 = puVar14[-4];
      puVar8[0x25] = puVar14[-5];
      puVar8[0x26] = uVar4;
      uVar4 = puVar14[-2];
      puVar8[0x27] = puVar14[-3];
      puVar8[0x28] = uVar4;
      puVar8[0x29] = puVar14[-1];
      *puVar13 = local_578;
      puVar14[-0x14] = uStack_570;
      puVar14[-0x13] = local_568;
      puVar14[-0x12] = uStack_560;
      puVar14[-0x11] = local_558;
      puVar14[-0x10] = uStack_550;
      puVar14[-0xf] = local_548;
      puVar14[-0xe] = uStack_540;
      puVar14[-0xd] = local_538;
      puVar14[-0xc] = uStack_530;
      puVar14[-0xb] = local_528;
      puVar14[-10] = uStack_520;
      puVar14[-9] = local_518;
      puVar14[-8] = uStack_510;
      local_4f8._0_4_ = (undefined4)uVar2;
      local_4f8._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_4f0._0_4_ = (undefined4)uVar3;
      uStack_4f0._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      puVar14[-7] = local_508;
      puVar14[-6] = uStack_500;
      *(undefined4 *)(puVar14 + -5) = (undefined4)local_4f8;
      *(undefined4 *)((longlong)puVar14 + -0x24) = local_4f8._4_4_;
      *(undefined4 *)(puVar14 + -4) = (undefined4)uStack_4f0;
      *(undefined4 *)((longlong)puVar14 + -0x1c) = uStack_4f0._4_4_;
      *(undefined1 (*) [16])(puVar14 + -3) = auVar5;
      puVar14[-1] = local_4d8;
      local_4f8 = uVar2;
      uStack_4f0 = uVar3;
    }
    goto LAB_1422a06e0;
  }
  if (puVar9 != puVar13) {
    local_4d0 = *puVar9;
    uStack_4c8 = puVar9[1];
    local_430 = puVar9[0x14];
    local_4c0 = puVar9[2];
    uStack_4b8 = puVar9[3];
    local_4b0 = puVar9[4];
    uStack_4a8 = puVar9[5];
    local_4a0 = puVar9[6];
    uStack_498 = puVar9[7];
    local_490 = puVar9[8];
    uStack_488 = puVar9[9];
    local_480 = puVar9[10];
    uStack_478 = puVar9[0xb];
    local_470 = puVar9[0xc];
    uStack_468 = puVar9[0xd];
    local_460 = puVar9[0xe];
    uStack_458 = puVar9[0xf];
    uVar2 = puVar9[0x10];
    uVar3 = puVar9[0x11];
    local_440 = *(undefined8 *)*(undefined1 (*) [16])(puVar9 + 0x12);
    uStack_438 = puVar9[0x13];
    auVar5 = *(undefined1 (*) [16])(puVar9 + 0x12);
    uVar4 = puVar14[-0x14];
    *puVar9 = *puVar13;
    puVar9[1] = uVar4;
    uVar4 = puVar14[-0x12];
    puVar9[2] = puVar14[-0x13];
    puVar9[3] = uVar4;
    uVar4 = puVar14[-0x10];
    puVar9[4] = puVar14[-0x11];
    puVar9[5] = uVar4;
    uVar4 = puVar14[-0xe];
    puVar9[6] = puVar14[-0xf];
    puVar9[7] = uVar4;
    uVar4 = puVar14[-0xc];
    puVar9[8] = puVar14[-0xd];
    puVar9[9] = uVar4;
    uVar4 = puVar14[-10];
    puVar9[10] = puVar14[-0xb];
    puVar9[0xb] = uVar4;
    uVar4 = puVar14[-8];
    puVar9[0xc] = puVar14[-9];
    puVar9[0xd] = uVar4;
    uVar4 = puVar14[-6];
    puVar9[0xe] = puVar14[-7];
    puVar9[0xf] = uVar4;
    uVar4 = puVar14[-4];
    puVar9[0x10] = puVar14[-5];
    puVar9[0x11] = uVar4;
    uVar4 = puVar14[-2];
    puVar9[0x12] = puVar14[-3];
    puVar9[0x13] = uVar4;
    puVar9[0x14] = puVar14[-1];
    *puVar13 = local_4d0;
    puVar14[-0x14] = uStack_4c8;
    puVar14[-0x13] = local_4c0;
    puVar14[-0x12] = uStack_4b8;
    puVar14[-0x11] = local_4b0;
    puVar14[-0x10] = uStack_4a8;
    puVar14[-0xf] = local_4a0;
    puVar14[-0xe] = uStack_498;
    puVar14[-0xd] = local_490;
    puVar14[-0xc] = uStack_488;
    puVar14[-0xb] = local_480;
    puVar14[-10] = uStack_478;
    puVar14[-9] = local_470;
    puVar14[-8] = uStack_468;
    local_450._0_4_ = (undefined4)uVar2;
    local_450._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
    uStack_448._0_4_ = (undefined4)uVar3;
    uStack_448._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
    puVar14[-7] = local_460;
    puVar14[-6] = uStack_458;
    *(undefined4 *)(puVar14 + -5) = (undefined4)local_450;
    *(undefined4 *)((longlong)puVar14 + -0x24) = local_450._4_4_;
    *(undefined4 *)(puVar14 + -4) = (undefined4)uStack_448;
    *(undefined4 *)((longlong)puVar14 + -0x1c) = uStack_448._4_4_;
    *(undefined1 (*) [16])(puVar14 + -3) = auVar5;
    puVar14[-1] = local_430;
    local_450 = uVar2;
    uStack_448 = uVar3;
  }
  lVar6 = (longlong)puVar13 + (-0xa8 - (longlong)puVar9);
  iVar11 = iVar11 + -1;
  lVar6 = lVar6 + SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816(lVar6),8);
  lVar7 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816((longlong)puVar15 - (longlong)puVar10),8) +
          ((longlong)puVar15 - (longlong)puVar10);
  if ((lVar6 >> 7) - (lVar6 >> 0x3f) < (lVar7 >> 7) - (lVar7 >> 0x3f)) {
    if (puVar10 < puVar15) {
      *(undefined8 **)*pauVar12 = puVar10;
      *(undefined8 **)(*pauVar12 + 8) = puVar15;
      *(int *)pauVar12[1] = iVar11;
      pauVar12 = (undefined1 (*) [16])(pauVar12[1] + 8);
    }
    if (puVar13 <= puVar9 + 0x15) goto LAB_1422a0b5c;
    puVar15 = puVar14 + -0x2a;
    puVar10 = puVar9;
  }
  else {
    if (puVar9 + 0x15 < puVar13) {
      *(undefined8 **)*pauVar12 = puVar9;
      *(undefined8 **)(*pauVar12 + 8) = puVar14 + -0x2a;
      *(int *)pauVar12[1] = iVar11;
      pauVar12 = (undefined1 (*) [16])(pauVar12[1] + 8);
    }
    if (puVar15 <= puVar10) goto LAB_1422a0b5c;
  }
  lVar6 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816((longlong)puVar15 - (longlong)puVar10),8) +
          ((longlong)puVar15 - (longlong)puVar10);
  lVar6 = ((lVar6 >> 7) + 1) - (lVar6 >> 0x3f);
  puVar9 = puVar10;
  if (iVar11 == 0) goto LAB_1422a0b43;
  goto LAB_1422a0562;
}



// FUNCTION 1422a0de0 FUN_1422a0de0 body=1061 status=ok
// SIG undefined FUN_1422a0de0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1422a0de0(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  float *pfVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
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
  longlong lVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  longlong *plVar28;
  float fVar29;
  undefined1 auStack_388 [48];
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
    lStack_340 = param_2 * 0x50 + -0x50 + param_1;
    fVar29 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar29 = fVar29 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar29 = _guard_xfg_dispatch_icall_nop(fVar29);
    local_338 = (undefined4)(longlong)(fVar29 + fVar29);
    _guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar28 = &local_348;
    do {
      puVar27 = (undefined8 *)*plVar28;
      puVar22 = (undefined8 *)plVar28[1];
      lVar2 = plVar28[2];
      local_358._0_4_ = (int)lVar2;
      lVar21 = ((longlong)puVar22 - (longlong)puVar27) / 0x50 + 1;
      puVar26 = puVar27;
      if ((int)local_358 != 0) {
LAB_1422a0ee0:
        if (8 < lVar21) {
          if (lVar21 < 0) {
            lVar21 = lVar21 + 1;
          }
          puVar27 = puVar26 + (lVar21 >> 1) * 10;
          if (puVar27 != puVar26) {
            uVar10 = puVar26[1];
            uVar3 = *(undefined4 *)puVar27;
            uVar4 = *(undefined4 *)((longlong)puVar27 + 4);
            uVar5 = *(undefined4 *)(puVar27 + 1);
            uVar6 = *(undefined4 *)((longlong)puVar27 + 0xc);
            uVar11 = puVar27[2];
            uVar12 = puVar27[3];
            uVar13 = puVar27[4];
            uVar14 = puVar27[5];
            uVar15 = puVar27[6];
            uVar16 = puVar27[7];
            uVar17 = puVar27[8];
            uVar18 = puVar27[9];
            *puVar27 = *puVar26;
            puVar27[1] = uVar10;
            uVar10 = puVar26[3];
            puVar27[2] = puVar26[2];
            puVar27[3] = uVar10;
            uVar10 = puVar26[5];
            puVar27[4] = puVar26[4];
            puVar27[5] = uVar10;
            uVar10 = puVar26[7];
            puVar27[6] = puVar26[6];
            puVar27[7] = uVar10;
            uVar7 = *(undefined4 *)((longlong)puVar26 + 0x44);
            uVar8 = *(undefined4 *)(puVar26 + 9);
            uVar9 = *(undefined4 *)((longlong)puVar26 + 0x4c);
            *(undefined4 *)(puVar27 + 8) = *(undefined4 *)(puVar26 + 8);
            *(undefined4 *)((longlong)puVar27 + 0x44) = uVar7;
            *(undefined4 *)(puVar27 + 9) = uVar8;
            *(undefined4 *)((longlong)puVar27 + 0x4c) = uVar9;
            *(undefined4 *)puVar26 = uVar3;
            *(undefined4 *)((longlong)puVar26 + 4) = uVar4;
            *(undefined4 *)(puVar26 + 1) = uVar5;
            *(undefined4 *)((longlong)puVar26 + 0xc) = uVar6;
            puVar26[2] = uVar11;
            puVar26[3] = uVar12;
            puVar26[4] = uVar13;
            puVar26[5] = uVar14;
            puVar26[6] = uVar15;
            puVar26[7] = uVar16;
            puVar26[8] = uVar17;
            puVar26[9] = uVar18;
          }
          puVar24 = puVar22 + 10;
          puVar27 = puVar26;
LAB_1422a0f62:
          puVar23 = puVar27;
          puVar27 = puVar23 + 10;
          if (puVar27 <= puVar22) goto code_r0x0001422a0f6b;
          goto LAB_1422a0f80;
        }
        for (; puVar27 = puVar26, puVar24 = puVar26, puVar26 < puVar22; puVar22 = puVar22 + -10) {
          while (puVar23 = puVar24 + 10, puVar23 <= puVar22) {
            pfVar1 = (float *)((longlong)puVar24 + 0x9c);
            puVar24 = puVar23;
            if (*pfVar1 < *(float *)((longlong)puVar27 + 0x4c)) {
              puVar27 = puVar23;
            }
          }
          if (puVar27 != puVar22) {
            uVar10 = puVar22[1];
            uVar11 = *puVar27;
            uVar12 = puVar27[1];
            uVar13 = puVar27[2];
            uVar14 = puVar27[3];
            uVar15 = puVar27[4];
            uVar16 = puVar27[5];
            uVar17 = puVar27[6];
            uVar18 = puVar27[7];
            uVar19 = puVar27[8];
            uVar20 = puVar27[9];
            *puVar27 = *puVar22;
            puVar27[1] = uVar10;
            uVar10 = puVar22[3];
            puVar27[2] = puVar22[2];
            puVar27[3] = uVar10;
            uVar10 = puVar22[5];
            puVar27[4] = puVar22[4];
            puVar27[5] = uVar10;
            uVar10 = puVar22[7];
            puVar27[6] = puVar22[6];
            puVar27[7] = uVar10;
            uVar10 = puVar22[9];
            puVar27[8] = puVar22[8];
            puVar27[9] = uVar10;
            *puVar22 = uVar11;
            puVar22[1] = uVar12;
            puVar22[2] = uVar13;
            puVar22[3] = uVar14;
            puVar22[4] = uVar15;
            puVar22[5] = uVar16;
            puVar22[6] = uVar17;
            puVar22[7] = uVar18;
            puVar22[8] = uVar19;
            puVar22[9] = uVar20;
          }
        }
        goto LAB_1422a1124;
      }
LAB_1422a1115:
      local_358 = lVar2;
      FUN_14229fdd0(puVar27,lVar21,param_3,param_4);
LAB_1422a1124:
      plVar28 = plVar28 + -3;
    } while (&local_348 <= plVar28);
  }
  return;
code_r0x0001422a0f6b:
  if (*(float *)((longlong)puVar26 + 0x4c) <= *(float *)((longlong)puVar23 + 0x9c))
  goto LAB_1422a0f62;
LAB_1422a0f80:
  do {
    puVar25 = puVar24;
    puVar24 = puVar25 + -10;
    if (puVar24 <= puVar26) break;
  } while (*(float *)((longlong)puVar25 + -4) <= *(float *)((longlong)puVar26 + 0x4c));
  if (puVar27 <= puVar24) {
    if (puVar27 != puVar24) {
      uVar10 = puVar25[-9];
      uVar3 = *(undefined4 *)puVar27;
      uVar4 = *(undefined4 *)((longlong)puVar23 + 0x54);
      uVar5 = *(undefined4 *)(puVar23 + 0xb);
      uVar6 = *(undefined4 *)((longlong)puVar23 + 0x5c);
      uVar11 = puVar23[0xc];
      uVar12 = puVar23[0xd];
      uVar13 = puVar23[0xe];
      uVar14 = puVar23[0xf];
      uVar15 = puVar23[0x10];
      uVar16 = puVar23[0x11];
      uVar17 = puVar23[0x12];
      uVar18 = puVar23[0x13];
      *puVar27 = *puVar24;
      puVar23[0xb] = uVar10;
      uVar10 = puVar25[-7];
      puVar23[0xc] = puVar25[-8];
      puVar23[0xd] = uVar10;
      uVar10 = puVar25[-5];
      puVar23[0xe] = puVar25[-6];
      puVar23[0xf] = uVar10;
      uVar10 = puVar25[-3];
      puVar23[0x10] = puVar25[-4];
      puVar23[0x11] = uVar10;
      uVar7 = *(undefined4 *)((longlong)puVar25 + -0xc);
      uVar8 = *(undefined4 *)(puVar25 + -1);
      uVar9 = *(undefined4 *)((longlong)puVar25 + -4);
      *(undefined4 *)(puVar23 + 0x12) = *(undefined4 *)(puVar25 + -2);
      *(undefined4 *)((longlong)puVar23 + 0x94) = uVar7;
      *(undefined4 *)(puVar23 + 0x13) = uVar8;
      *(undefined4 *)((longlong)puVar23 + 0x9c) = uVar9;
      *(undefined4 *)puVar24 = uVar3;
      *(undefined4 *)((longlong)puVar25 + -0x4c) = uVar4;
      *(undefined4 *)(puVar25 + -9) = uVar5;
      *(undefined4 *)((longlong)puVar25 + -0x44) = uVar6;
      puVar25[-8] = uVar11;
      puVar25[-7] = uVar12;
      puVar25[-6] = uVar13;
      puVar25[-5] = uVar14;
      puVar25[-4] = uVar15;
      puVar25[-3] = uVar16;
      puVar25[-2] = uVar17;
      puVar25[-1] = uVar18;
    }
    goto LAB_1422a0f62;
  }
  if (puVar26 != puVar24) {
    uVar10 = puVar25[-9];
    uVar3 = *(undefined4 *)puVar26;
    uVar4 = *(undefined4 *)((longlong)puVar26 + 4);
    uVar5 = *(undefined4 *)(puVar26 + 1);
    uVar6 = *(undefined4 *)((longlong)puVar26 + 0xc);
    uVar11 = puVar26[2];
    uVar12 = puVar26[3];
    uVar13 = puVar26[4];
    uVar14 = puVar26[5];
    uVar15 = puVar26[6];
    uVar16 = puVar26[7];
    uVar17 = puVar26[8];
    uVar18 = puVar26[9];
    *puVar26 = *puVar24;
    puVar26[1] = uVar10;
    uVar10 = puVar25[-7];
    puVar26[2] = puVar25[-8];
    puVar26[3] = uVar10;
    uVar10 = puVar25[-5];
    puVar26[4] = puVar25[-6];
    puVar26[5] = uVar10;
    uVar10 = puVar25[-3];
    puVar26[6] = puVar25[-4];
    puVar26[7] = uVar10;
    uVar7 = *(undefined4 *)((longlong)puVar25 + -0xc);
    uVar8 = *(undefined4 *)(puVar25 + -1);
    uVar9 = *(undefined4 *)((longlong)puVar25 + -4);
    *(undefined4 *)(puVar26 + 8) = *(undefined4 *)(puVar25 + -2);
    *(undefined4 *)((longlong)puVar26 + 0x44) = uVar7;
    *(undefined4 *)(puVar26 + 9) = uVar8;
    *(undefined4 *)((longlong)puVar26 + 0x4c) = uVar9;
    *(undefined4 *)puVar24 = uVar3;
    *(undefined4 *)((longlong)puVar25 + -0x4c) = uVar4;
    *(undefined4 *)(puVar25 + -9) = uVar5;
    *(undefined4 *)((longlong)puVar25 + -0x44) = uVar6;
    puVar25[-8] = uVar11;
    puVar25[-7] = uVar12;
    puVar25[-6] = uVar13;
    puVar25[-5] = uVar14;
    puVar25[-4] = uVar15;
    puVar25[-3] = uVar16;
    puVar25[-2] = uVar17;
    puVar25[-1] = uVar18;
  }
  local_358._0_4_ = (int)local_358 + -1;
  if (((longlong)puVar24 + (-0x50 - (longlong)puVar26)) / 0x50 <
      ((longlong)puVar22 - (longlong)puVar27) / 0x50) {
    if (puVar27 < puVar22) {
      *plVar28 = (longlong)puVar27;
      plVar28[1] = (longlong)puVar22;
      *(int *)(plVar28 + 2) = (int)local_358;
      plVar28 = plVar28 + 3;
    }
    if (puVar24 <= puVar26 + 10) goto LAB_1422a1124;
    puVar22 = puVar25 + -0x14;
    puVar27 = puVar26;
  }
  else {
    if (puVar26 + 10 < puVar24) {
      *plVar28 = (longlong)puVar26;
      plVar28[1] = (longlong)(puVar25 + -0x14);
      *(int *)(plVar28 + 2) = (int)local_358;
      plVar28 = plVar28 + 3;
    }
    if (puVar22 <= puVar27) goto LAB_1422a1124;
  }
  lVar21 = ((longlong)puVar22 - (longlong)puVar27) / 0x50 + 1;
  puVar26 = puVar27;
  if ((int)local_358 == 0) goto LAB_1422a1115;
  goto LAB_1422a0ee0;
}



// FUNCTION 1422a1210 IntroSortInternal<FBlendSampleData,FIdentityFunctor,TDereferenceWrapper<FBlendSampleData,<lambda_cb145bcc11e94150a77fe427b9dae3d9>_>_> body=845 status=ok
// SIG undefined IntroSortInternal<FBlendSampleData,FIdentityFunctor,TDereferenceWrapper<FBlendSampleData,<lambda_cb145bcc11e94150a77fe427b9dae3d9>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FBlendSampleData,FIdentityFunctor,TDereferenceWrapper<FBlendSampleData,<lambda_cb145bcc11e94150a77fe427b9dae3d9>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  float *pfVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  longlong lVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  float fVar27;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_2 * 0x40 + -0x40 + param_1;
    fVar27 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar27 = fVar27 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar27 = ::_guard_xfg_dispatch_icall_nop(fVar27);
    local_318 = (undefined4)(longlong)(fVar27 + fVar27);
    ::_guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar21 = &local_328;
    do {
      puVar26 = (undefined8 *)*plVar21;
      puVar24 = (undefined8 *)plVar21[1];
      lVar2 = plVar21[2];
      local_338._0_4_ = (int)lVar2;
      lVar19 = ((longlong)puVar24 - (longlong)puVar26 >> 6) + 1;
      puVar25 = puVar26;
      if ((int)local_338 != 0) {
LAB_1422a12e0:
        if (8 < lVar19) {
          puVar26 = puVar25 + (lVar19 / 2) * 8;
          if (puVar26 != puVar25) {
            uVar10 = puVar25[1];
            uVar3 = *(undefined4 *)puVar26;
            uVar4 = *(undefined4 *)((longlong)puVar26 + 4);
            uVar5 = *(undefined4 *)(puVar26 + 1);
            uVar6 = *(undefined4 *)((longlong)puVar26 + 0xc);
            uVar11 = puVar26[2];
            uVar12 = puVar26[3];
            uVar13 = puVar26[4];
            uVar14 = puVar26[5];
            uVar15 = puVar26[6];
            uVar16 = puVar26[7];
            *puVar26 = *puVar25;
            puVar26[1] = uVar10;
            uVar10 = puVar25[3];
            puVar26[2] = puVar25[2];
            puVar26[3] = uVar10;
            uVar7 = *(undefined4 *)((longlong)puVar25 + 0x24);
            uVar8 = *(undefined4 *)(puVar25 + 5);
            uVar9 = *(undefined4 *)((longlong)puVar25 + 0x2c);
            *(undefined4 *)(puVar26 + 4) = *(undefined4 *)(puVar25 + 4);
            *(undefined4 *)((longlong)puVar26 + 0x24) = uVar7;
            *(undefined4 *)(puVar26 + 5) = uVar8;
            *(undefined4 *)((longlong)puVar26 + 0x2c) = uVar9;
            uVar10 = puVar25[7];
            puVar26[6] = puVar25[6];
            puVar26[7] = uVar10;
            *(undefined4 *)puVar25 = uVar3;
            *(undefined4 *)((longlong)puVar25 + 4) = uVar4;
            *(undefined4 *)(puVar25 + 1) = uVar5;
            *(undefined4 *)((longlong)puVar25 + 0xc) = uVar6;
            puVar25[2] = uVar11;
            puVar25[3] = uVar12;
            puVar25[4] = uVar13;
            puVar25[5] = uVar14;
            puVar25[6] = uVar15;
            puVar25[7] = uVar16;
          }
          puVar22 = puVar24 + 8;
          puVar26 = puVar25;
LAB_1422a1350:
          puVar20 = puVar26;
          puVar26 = puVar20 + 8;
          if (puVar26 <= puVar24) goto code_r0x0001422a1359;
          goto LAB_1422a1365;
        }
        for (; puVar26 = puVar25, puVar22 = puVar25, puVar25 < puVar24; puVar24 = puVar24 + -8) {
          while (puVar20 = puVar22 + 8, puVar20 <= puVar24) {
            pfVar1 = (float *)(puVar22 + 10);
            puVar22 = puVar20;
            if (*pfVar1 < *(float *)(puVar26 + 2)) {
              puVar26 = puVar20;
            }
          }
          if (puVar26 != puVar24) {
            uVar10 = puVar24[1];
            uVar11 = *puVar26;
            uVar12 = puVar26[1];
            uVar13 = puVar26[2];
            uVar14 = puVar26[3];
            uVar15 = puVar26[4];
            uVar16 = puVar26[5];
            uVar17 = puVar26[6];
            uVar18 = puVar26[7];
            *puVar26 = *puVar24;
            puVar26[1] = uVar10;
            uVar10 = puVar24[3];
            puVar26[2] = puVar24[2];
            puVar26[3] = uVar10;
            uVar10 = puVar24[5];
            puVar26[4] = puVar24[4];
            puVar26[5] = uVar10;
            uVar10 = puVar24[7];
            puVar26[6] = puVar24[6];
            puVar26[7] = uVar10;
            *puVar24 = uVar11;
            puVar24[1] = uVar12;
            puVar24[2] = uVar13;
            puVar24[3] = uVar14;
            puVar24[4] = uVar15;
            puVar24[5] = uVar16;
            puVar24[6] = uVar17;
            puVar24[7] = uVar18;
          }
        }
        goto LAB_1422a14a5;
      }
LAB_1422a1496:
      local_338 = lVar2;
      HeapSortInternal<FBlendSampleData,FIdentityFunctor,TDereferenceWrapper<FBlendSampleData,<lambda_cb145bcc11e94150a77fe427b9dae3d9>_>_>
                (puVar26,lVar19,param_3,param_4);
LAB_1422a14a5:
      plVar21 = plVar21 + -3;
    } while (&local_328 <= plVar21);
  }
  return;
code_r0x0001422a1359:
  if (*(float *)(puVar25 + 2) < *(float *)(puVar20 + 10) ||
      *(float *)(puVar25 + 2) == *(float *)(puVar20 + 10)) goto LAB_1422a1350;
LAB_1422a1365:
  do {
    puVar23 = puVar22;
    puVar22 = puVar23 + -8;
    if (puVar22 <= puVar25) break;
  } while (*(float *)(puVar23 + -6) < *(float *)(puVar25 + 2) ||
           *(float *)(puVar23 + -6) == *(float *)(puVar25 + 2));
  if (puVar26 <= puVar22) {
    if (puVar26 != puVar22) {
      uVar10 = puVar23[-7];
      uVar3 = *(undefined4 *)puVar26;
      uVar4 = *(undefined4 *)((longlong)puVar20 + 0x44);
      uVar5 = *(undefined4 *)(puVar20 + 9);
      uVar6 = *(undefined4 *)((longlong)puVar20 + 0x4c);
      uVar11 = puVar20[10];
      uVar12 = puVar20[0xb];
      uVar13 = puVar20[0xc];
      uVar14 = puVar20[0xd];
      uVar15 = puVar20[0xe];
      uVar16 = puVar20[0xf];
      *puVar26 = *puVar22;
      puVar20[9] = uVar10;
      uVar10 = puVar23[-5];
      puVar20[10] = puVar23[-6];
      puVar20[0xb] = uVar10;
      uVar7 = *(undefined4 *)((longlong)puVar23 + -0x1c);
      uVar8 = *(undefined4 *)(puVar23 + -3);
      uVar9 = *(undefined4 *)((longlong)puVar23 + -0x14);
      *(undefined4 *)(puVar20 + 0xc) = *(undefined4 *)(puVar23 + -4);
      *(undefined4 *)((longlong)puVar20 + 100) = uVar7;
      *(undefined4 *)(puVar20 + 0xd) = uVar8;
      *(undefined4 *)((longlong)puVar20 + 0x6c) = uVar9;
      uVar10 = puVar23[-1];
      puVar20[0xe] = puVar23[-2];
      puVar20[0xf] = uVar10;
      *(undefined4 *)puVar22 = uVar3;
      *(undefined4 *)((longlong)puVar23 + -0x3c) = uVar4;
      *(undefined4 *)(puVar23 + -7) = uVar5;
      *(undefined4 *)((longlong)puVar23 + -0x34) = uVar6;
      puVar23[-6] = uVar11;
      puVar23[-5] = uVar12;
      puVar23[-4] = uVar13;
      puVar23[-3] = uVar14;
      puVar23[-2] = uVar15;
      puVar23[-1] = uVar16;
    }
    goto LAB_1422a1350;
  }
  if (puVar25 != puVar22) {
    uVar10 = puVar23[-7];
    uVar3 = *(undefined4 *)puVar25;
    uVar4 = *(undefined4 *)((longlong)puVar25 + 4);
    uVar5 = *(undefined4 *)(puVar25 + 1);
    uVar6 = *(undefined4 *)((longlong)puVar25 + 0xc);
    uVar11 = puVar25[2];
    uVar12 = puVar25[3];
    uVar13 = puVar25[4];
    uVar14 = puVar25[5];
    uVar15 = puVar25[6];
    uVar16 = puVar25[7];
    *puVar25 = *puVar22;
    puVar25[1] = uVar10;
    uVar10 = puVar23[-5];
    puVar25[2] = puVar23[-6];
    puVar25[3] = uVar10;
    uVar7 = *(undefined4 *)((longlong)puVar23 + -0x1c);
    uVar8 = *(undefined4 *)(puVar23 + -3);
    uVar9 = *(undefined4 *)((longlong)puVar23 + -0x14);
    *(undefined4 *)(puVar25 + 4) = *(undefined4 *)(puVar23 + -4);
    *(undefined4 *)((longlong)puVar25 + 0x24) = uVar7;
    *(undefined4 *)(puVar25 + 5) = uVar8;
    *(undefined4 *)((longlong)puVar25 + 0x2c) = uVar9;
    uVar10 = puVar23[-1];
    puVar25[6] = puVar23[-2];
    puVar25[7] = uVar10;
    *(undefined4 *)puVar22 = uVar3;
    *(undefined4 *)((longlong)puVar23 + -0x3c) = uVar4;
    *(undefined4 *)(puVar23 + -7) = uVar5;
    *(undefined4 *)((longlong)puVar23 + -0x34) = uVar6;
    puVar23[-6] = uVar11;
    puVar23[-5] = uVar12;
    puVar23[-4] = uVar13;
    puVar23[-3] = uVar14;
    puVar23[-2] = uVar15;
    puVar23[-1] = uVar16;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)puVar22 + (-0x40 - (longlong)puVar25) & 0xffffffffffffffc0U) <
      (longlong)((longlong)puVar24 - (longlong)puVar26 & 0xffffffffffffffc0U)) {
    if (puVar26 < puVar24) {
      *plVar21 = (longlong)puVar26;
      plVar21[1] = (longlong)puVar24;
      *(int *)(plVar21 + 2) = (int)local_338;
      plVar21 = plVar21 + 3;
    }
    if (puVar22 <= puVar25 + 8) goto LAB_1422a14a5;
    puVar24 = puVar23 + -0x10;
    puVar26 = puVar25;
  }
  else {
    if (puVar25 + 8 < puVar22) {
      *plVar21 = (longlong)puVar25;
      plVar21[1] = (longlong)(puVar23 + -0x10);
      *(int *)(plVar21 + 2) = (int)local_338;
      plVar21 = plVar21 + 3;
    }
    if (puVar24 <= puVar26) goto LAB_1422a14a5;
  }
  lVar19 = ((longlong)puVar24 - (longlong)puVar26 >> 6) + 1;
  puVar25 = puVar26;
  if ((int)local_338 == 0) goto LAB_1422a1496;
  goto LAB_1422a12e0;
}



// FUNCTION 1422a1560 FUN_1422a1560 body=705 status=ok
// SIG undefined FUN_1422a1560(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1422a1560(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  float fVar22;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_2 * 0x20 + -0x20 + param_1;
    fVar22 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar22 = fVar22 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar22 = _guard_xfg_dispatch_icall_nop(fVar22);
    local_318 = (undefined4)(longlong)(fVar22 + fVar22);
    _guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar16 = &local_328;
    do {
      puVar21 = (undefined8 *)*plVar16;
      puVar19 = (undefined8 *)plVar16[1];
      lVar1 = plVar16[2];
      local_338._0_4_ = (int)lVar1;
      lVar14 = ((longlong)puVar19 - (longlong)puVar21 >> 5) + 1;
      puVar20 = puVar21;
      if ((int)local_338 != 0) {
LAB_1422a1630:
        if (8 < lVar14) {
          puVar21 = puVar20 + (lVar14 / 2) * 4;
          if (puVar21 != puVar20) {
            uVar2 = *(undefined4 *)((longlong)puVar20 + 4);
            uVar3 = *(undefined4 *)(puVar20 + 1);
            uVar4 = *(undefined4 *)((longlong)puVar20 + 0xc);
            uVar5 = *(undefined4 *)puVar21;
            uVar6 = *(undefined4 *)((longlong)puVar21 + 4);
            uVar7 = *(undefined4 *)(puVar21 + 1);
            uVar8 = *(undefined4 *)((longlong)puVar21 + 0xc);
            uVar10 = puVar21[2];
            uVar11 = puVar21[3];
            *(undefined4 *)puVar21 = *(undefined4 *)puVar20;
            *(undefined4 *)((longlong)puVar21 + 4) = uVar2;
            *(undefined4 *)(puVar21 + 1) = uVar3;
            *(undefined4 *)((longlong)puVar21 + 0xc) = uVar4;
            uVar9 = puVar20[3];
            puVar21[2] = puVar20[2];
            puVar21[3] = uVar9;
            *(undefined4 *)puVar20 = uVar5;
            *(undefined4 *)((longlong)puVar20 + 4) = uVar6;
            *(undefined4 *)(puVar20 + 1) = uVar7;
            *(undefined4 *)((longlong)puVar20 + 0xc) = uVar8;
            puVar20[2] = uVar10;
            puVar20[3] = uVar11;
          }
          puVar17 = puVar19 + 4;
          puVar21 = puVar20;
LAB_1422a1680:
          puVar15 = puVar21;
          puVar21 = puVar15 + 4;
          if (puVar21 <= puVar19) goto code_r0x0001422a1689;
          goto LAB_1422a1692;
        }
        for (; puVar17 = puVar20, puVar21 = puVar20, puVar20 < puVar19; puVar19 = puVar19 + -4) {
          while (puVar15 = puVar17, puVar21 = puVar21 + 4, puVar21 <= puVar19) {
            puVar17 = puVar21;
            if (*(int *)(puVar15 + 1) <= *(int *)(puVar21 + 1)) {
              puVar17 = puVar15;
            }
          }
          if (puVar15 != puVar19) {
            uVar9 = puVar19[1];
            uVar10 = *puVar15;
            uVar11 = puVar15[1];
            uVar12 = puVar15[2];
            uVar13 = puVar15[3];
            *puVar15 = *puVar19;
            puVar15[1] = uVar9;
            uVar9 = puVar19[3];
            puVar15[2] = puVar19[2];
            puVar15[3] = uVar9;
            *puVar19 = uVar10;
            puVar19[1] = uVar11;
            puVar19[2] = uVar12;
            puVar19[3] = uVar13;
          }
        }
        goto LAB_1422a1783;
      }
LAB_1422a1774:
      local_338 = lVar1;
      FUN_1422a0280(puVar21,lVar14,param_3,param_4);
LAB_1422a1783:
      plVar16 = plVar16 + -3;
    } while (&local_328 <= plVar16);
  }
  return;
code_r0x0001422a1689:
  if (*(int *)(puVar20 + 1) <= *(int *)(puVar15 + 5)) goto LAB_1422a1680;
LAB_1422a1692:
  do {
    puVar18 = puVar17;
    puVar17 = puVar18 + -4;
    if (puVar17 <= puVar20) break;
  } while (*(int *)(puVar18 + -3) <= *(int *)(puVar20 + 1));
  if (puVar21 <= puVar17) {
    if (puVar21 != puVar17) {
      uVar2 = *(undefined4 *)((longlong)puVar18 + -0x1c);
      uVar3 = *(undefined4 *)(puVar18 + -3);
      uVar4 = *(undefined4 *)((longlong)puVar18 + -0x14);
      uVar5 = *(undefined4 *)puVar21;
      uVar6 = *(undefined4 *)((longlong)puVar15 + 0x24);
      uVar7 = *(undefined4 *)(puVar15 + 5);
      uVar8 = *(undefined4 *)((longlong)puVar15 + 0x2c);
      uVar10 = puVar15[6];
      uVar11 = puVar15[7];
      *(undefined4 *)puVar21 = *(undefined4 *)puVar17;
      *(undefined4 *)((longlong)puVar15 + 0x24) = uVar2;
      *(undefined4 *)(puVar15 + 5) = uVar3;
      *(undefined4 *)((longlong)puVar15 + 0x2c) = uVar4;
      uVar9 = puVar18[-1];
      puVar15[6] = puVar18[-2];
      puVar15[7] = uVar9;
      *(undefined4 *)puVar17 = uVar5;
      *(undefined4 *)((longlong)puVar18 + -0x1c) = uVar6;
      *(undefined4 *)(puVar18 + -3) = uVar7;
      *(undefined4 *)((longlong)puVar18 + -0x14) = uVar8;
      puVar18[-2] = uVar10;
      puVar18[-1] = uVar11;
    }
    goto LAB_1422a1680;
  }
  if (puVar20 != puVar17) {
    uVar2 = *(undefined4 *)((longlong)puVar18 + -0x1c);
    uVar3 = *(undefined4 *)(puVar18 + -3);
    uVar4 = *(undefined4 *)((longlong)puVar18 + -0x14);
    uVar5 = *(undefined4 *)puVar20;
    uVar6 = *(undefined4 *)((longlong)puVar20 + 4);
    uVar7 = *(undefined4 *)(puVar20 + 1);
    uVar8 = *(undefined4 *)((longlong)puVar20 + 0xc);
    uVar10 = puVar20[2];
    uVar11 = puVar20[3];
    *(undefined4 *)puVar20 = *(undefined4 *)puVar17;
    *(undefined4 *)((longlong)puVar20 + 4) = uVar2;
    *(undefined4 *)(puVar20 + 1) = uVar3;
    *(undefined4 *)((longlong)puVar20 + 0xc) = uVar4;
    uVar9 = puVar18[-1];
    puVar20[2] = puVar18[-2];
    puVar20[3] = uVar9;
    *(undefined4 *)puVar17 = uVar5;
    *(undefined4 *)((longlong)puVar18 + -0x1c) = uVar6;
    *(undefined4 *)(puVar18 + -3) = uVar7;
    *(undefined4 *)((longlong)puVar18 + -0x14) = uVar8;
    puVar18[-2] = uVar10;
    puVar18[-1] = uVar11;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)puVar17 + (-0x20 - (longlong)puVar20) & 0xffffffffffffffe0U) <
      (longlong)((longlong)puVar19 - (longlong)puVar21 & 0xffffffffffffffe0U)) {
    if (puVar21 < puVar19) {
      *plVar16 = (longlong)puVar21;
      plVar16[1] = (longlong)puVar19;
      *(int *)(plVar16 + 2) = (int)local_338;
      plVar16 = plVar16 + 3;
    }
    if (puVar17 <= puVar20 + 4) goto LAB_1422a1783;
    puVar19 = puVar18 + -8;
    puVar21 = puVar20;
  }
  else {
    if (puVar20 + 4 < puVar17) {
      *plVar16 = (longlong)puVar20;
      plVar16[1] = (longlong)(puVar18 + -8);
      *(int *)(plVar16 + 2) = (int)local_338;
      plVar16 = plVar16 + 3;
    }
    if (puVar19 <= puVar21) goto LAB_1422a1783;
  }
  lVar14 = ((longlong)puVar19 - (longlong)puVar21 >> 5) + 1;
  puVar20 = puVar21;
  if ((int)local_338 == 0) goto LAB_1422a1774;
  goto LAB_1422a1630;
}



// FUNCTION 1422a1830 FUN_1422a1830 body=241 status=ok
// SIG undefined FUN_1422a1830(void)

undefined8 * FUN_1422a1830(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *(undefined1 *)(param_1 + 0x8c) = 0;
  *param_1 = &PTR_FUN_145027170;
  param_1[0x8b] = &PTR_LAB_145027878;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c4) = 0;
  param_1[0x9a] = 0;
  *(undefined4 *)(param_1 + 0x9b) = 0;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"SkeletalMeshComponent0",1);
  uVar1 = *puVar2;
  uVar3 = FUN_142a07000();
  lVar4 = FUN_141752410(param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x8d] = lVar4;
  *(undefined1 *)(lVar4 + 0x878) = 1;
  (**(code **)(*(longlong *)param_1[0x8d] + 0x640))((longlong *)param_1[0x8d],DAT_146aefc68);
  *(uint *)((longlong)param_1 + 0x464) = *(uint *)((longlong)param_1 + 0x464) | 1;
  param_1[0x2d] = param_1[0x8d];
  return param_1;
}



// FUNCTION 1422a1930 FUN_1422a1930 body=222 status=ok
// SIG undefined FUN_1422a1930(void)

undefined8 *
FUN_1422a1930(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,float param_7,float param_8,undefined1 param_9,
             undefined1 param_10)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 3) = param_6;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_5;
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 2) = param_4;
  param_1[1] = param_3;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  FAlphaBlend::FAlphaBlend(param_1 + 5);
  *(undefined1 *)(param_1 + 0xc) = param_9;
  *(undefined1 *)((longlong)param_1 + 0x61) = param_10;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  UBlendSpaceBase::InitializeFilter(param_1[1],param_1 + 0xd);
  if (param_7 <= 0.0) {
    param_7 = 0.0;
  }
  if (param_8 <= 0.0) {
    param_8 = 0.0;
  }
  *(float *)(param_1 + 4) = param_7;
  *(float *)((longlong)param_1 + 0x24) = param_8;
  if (*(char *)((longlong)param_1 + 0x61) != '\0') {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  return param_1;
}



// FUNCTION 1422a1a10 FUN_1422a1a10 body=505 status=ok
// SIG undefined FUN_1422a1a10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1422a1a10(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined1 *param_8,
             undefined1 *param_9,undefined1 *param_10,undefined1 *param_11,undefined1 *param_12,
             undefined1 *param_13,undefined1 *param_14,undefined1 *param_15,undefined1 *param_16)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = *param_3;
  param_1[2] = *param_4;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_4 + 1);
  *(undefined8 *)((longlong)param_1 + 0x1c) = *param_5;
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(param_5 + 1);
  param_1[5] = *param_6;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_6 + 1);
  uVar1 = param_7[1];
  param_1[7] = *param_7;
  param_1[8] = uVar1;
  uVar1 = param_7[3];
  param_1[9] = param_7[2];
  param_1[10] = uVar1;
  uVar1 = param_7[5];
  param_1[0xb] = param_7[4];
  param_1[0xc] = uVar1;
  param_1[0xd] = param_7[6];
  *(undefined1 *)(param_1 + 0xe) = *param_8;
  *(undefined1 *)((longlong)param_1 + 0x71) = *param_9;
  *(undefined1 *)((longlong)param_1 + 0x72) = *param_10;
  *(undefined1 *)((longlong)param_1 + 0x73) = *param_11;
  *(undefined1 *)((longlong)param_1 + 0x74) = *param_12;
  *(undefined1 *)((longlong)param_1 + 0x75) = *param_13;
  *(undefined1 *)((longlong)param_1 + 0x76) = *param_14;
  *(undefined1 *)((longlong)param_1 + 0x77) = *param_14;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((longlong)param_1 + 0x79) = *param_15;
  *(undefined1 *)((longlong)param_1 + 0x7a) = *param_16;
  *(undefined8 *)((longlong)param_1 + 0x7c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x84) = DAT_1468b5d98;
  param_1[0x11] = DAT_1468b5da0;
  *(undefined4 *)(param_1 + 0x12) = DAT_1468b5da8;
  *(undefined8 *)((longlong)param_1 + 0x94) = DAT_1464aa788;
  *(undefined4 *)((longlong)param_1 + 0x9c) = DAT_1464aa790;
  param_1[0x14] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x15) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0xac) = DAT_1468b5da0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = DAT_1468b5da8;
  param_1[0x17] = DAT_1464aa788;
  *(undefined4 *)(param_1 + 0x18) = DAT_1464aa790;
  *(undefined8 *)((longlong)param_1 + 0xc4) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0xcc) = DAT_1468b5d98;
  param_1[0x1a] = DAT_1468b5da0;
  *(undefined4 *)(param_1 + 0x1b) = DAT_1468b5da8;
  *(undefined8 *)((longlong)param_1 + 0xdc) = DAT_1464aa788;
  *(undefined4 *)((longlong)param_1 + 0xe4) = DAT_1464aa790;
  return param_1;
}



// FUNCTION 1422a1c10 FUN_1422a1c10 body=17 status=ok
// SIG undefined FUN_1422a1c10(void)

undefined8 *
FUN_1422a1c10(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined4 *)((longlong)param_1 + 0xc) = param_4;
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 1422a1c80 FUN_1422a1c80 body=141 status=ok
// SIG undefined FUN_1422a1c80(void)

undefined8 * FUN_1422a1c80(undefined8 *param_1)

{
  FUN_141781840();
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *param_1 = &PTR_FUN_145024578;
  param_1[5] = &PTR_LAB_1450248d0;
  param_1[6] = &PTR_LAB_145024900;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x3f800000;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  return param_1;
}



// FUNCTION 1422a1d10 UAnimSet body=160 status=ok
// SIG undefined UAnimSet(void)

undefined8 * UAnimSet::UAnimSet(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__145025208;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0xffffffff;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  return param_1;
}



// FUNCTION 1422a1db0 FUN_1422a1db0 body=65 status=ok
// SIG undefined FUN_1422a1db0(void)

undefined8 * FUN_1422a1db0(undefined8 *param_1)

{
  FUN_1422552b0();
  *param_1 = &PTR__scalar_deleting_destructor__145025488;
  FWeakObjectPtr::operator=(param_1 + 0x89,0);
  param_1[0x8a] = 0;
  return param_1;
}



// FUNCTION 1422a1e00 UAnimationAsset body=89 status=ok
// SIG undefined UAnimationAsset(void)

undefined8 * UAnimationAsset::UAnimationAsset(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__145024280;
  param_1[5] = &PTR_LAB_145024520;
  param_1[6] = &PTR_LAB_145024550;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return param_1;
}



// FUNCTION 1422a1e60 UBlendProfile body=199 status=ok
// SIG undefined UBlendProfile(void)

undefined8 * UBlendProfile::UBlendProfile(undefined8 *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1417818c0();
  *param_1 = &PTR__scalar_deleting_destructor__145025f10;
  param_1[5] = &PTR_LAB_145026188;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = USkeleton::GetPrivateStaticClass();
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
      param_1[6] = lVar3;
      lVar3 = param_1[7];
      lVar2 = (longlong)*(int *)(param_1 + 8) * 0x20 + lVar3;
      for (; lVar3 != lVar2; lVar3 = lVar3 + 0x20) {
        FBoneReference::Initialize(lVar3,param_1[6]);
      }
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 1422a1f30 FUN_1422a1f30 body=69 status=ok
// SIG undefined FUN_1422a1f30(void)

undefined8 * FUN_1422a1f30(undefined8 *param_1)

{
  FUN_1422a1fd0();
  *param_1 = &PTR__scalar_deleting_destructor__145026190;
  param_1[5] = &PTR_LAB_1450152e8;
  param_1[6] = &PTR_LAB_145015318;
  param_1[0x10] = &PTR_GetPerBoneInterpolationIndex_145015340;
  return param_1;
}



// FUNCTION 1422a1f80 FUN_1422a1f80 body=69 status=ok
// SIG undefined FUN_1422a1f80(void)

undefined8 * FUN_1422a1f80(undefined8 *param_1)

{
  FUN_1422a1fd0();
  *param_1 = &PTR__scalar_deleting_destructor__1450257e0;
  param_1[5] = &PTR_LAB_1450152e8;
  param_1[6] = &PTR_LAB_145015318;
  param_1[0x10] = &PTR_GetPerBoneInterpolationIndex_145015340;
  return param_1;
}



// FUNCTION 1422a1fd0 FUN_1422a1fd0 body=263 status=ok
// SIG undefined FUN_1422a1fd0(void)

undefined8 * FUN_1422a1fd0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  FUN_141781840();
  param_1[8] = 0;
  puVar1 = param_1 + 0x1d;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  lVar2 = 3;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145024e18;
  param_1[5] = &PTR_LAB_1450250d8;
  param_1[6] = &PTR_LAB_145025108;
  param_1[0x10] = &PTR_GetPerBoneInterpolationIndex_145015340;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  do {
    *puVar1 = 0;
    puVar1[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar1,0);
    FGenericPlatformString::Memcpy(*puVar1,&DAT_143f3edc8,10);
    *(undefined4 *)(puVar1 + 2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0x42c80000;
    *(undefined4 *)(puVar1 + 3) = 4;
    puVar1 = puVar1 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return param_1;
}



// FUNCTION 1422a20e0 UPlatformInterfaceBase body=43 status=ok
// SIG undefined UPlatformInterfaceBase(void)

undefined8 * UPlatformInterfaceBase::UPlatformInterfaceBase(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__144024f70;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 1422a2110 ULevelSequence body=132 status=ok
// SIG undefined ULevelSequence(void)

undefined8 * ULevelSequence::ULevelSequence(undefined8 *param_1)

{
  UDataAsset::UDataAsset();
  *param_1 = &PTR__scalar_deleting_destructor__145024928;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  return param_1;
}



// FUNCTION 1422a21a0 FUN_1422a21a0 body=41 status=ok
// SIG undefined FUN_1422a21a0(void)

undefined8 * FUN_1422a21a0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_145026458;
  param_1[6] = 0xffffffffffffffff;
  return param_1;
}



// FUNCTION 1422a21d0 FUN_1422a21d0 body=63 status=ok
// SIG undefined FUN_1422a21d0(void)

undefined8 * FUN_1422a21d0(undefined8 *param_1)

{
  UDataAsset::UDataAsset();
  *param_1 = &PTR_FUN_145024ba0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  return param_1;
}



// FUNCTION 1422a2210 UGRichTextWebWidget_obj body=55 status=ok
// SIG undefined UGRichTextWebWidget_obj(void)

undefined8 * g3::ui::UGRichTextWebWidget_obj::UGRichTextWebWidget_obj(undefined8 *param_1)

{
  UDataAsset::UDataAsset();
  *param_1 = &PTR__scalar_deleting_destructor__145026710;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 1422a2250 UNodeMappingContainer body=390 status=ok
// SIG undefined UNodeMappingContainer(void)

undefined8 * UNodeMappingContainer::UNodeMappingContainer(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__145026988;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x13c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x26,0);
  }
  if ((undefined2 *)param_1[0x26] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x26] = 0;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if ((*(int *)((longlong)param_1 + 0x164) < 0) && (*(int *)((longlong)param_1 + 0x164) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x2b,0);
  }
  if ((undefined2 *)param_1[0x2b] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x2b] = 0;
  }
  *(undefined4 *)(param_1 + 0x29) = 0;
  return param_1;
}



// FUNCTION 1422a23e0 FUN_1422a23e0 body=225 status=ok
// SIG undefined FUN_1422a23e0(void)

undefined8 * FUN_1422a23e0(undefined8 *param_1)

{
  FUN_141781840();
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145025c10;
  param_1[5] = &PTR_LAB_145025eb8;
  param_1[6] = &PTR_LAB_145025ee8;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0xffffffff;
  param_1[0x23] = 0;
  return param_1;
}



// FUNCTION 1422a24d0 URig body=62 status=ok
// SIG undefined URig(void)

undefined8 * URig::URig(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__145026c00;
  param_1[5] = &PTR_LAB_145026e78;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return param_1;
}



// FUNCTION 1422a2510 FUN_1422a2510 body=673 status=ok
// SIG undefined FUN_1422a2510(void)

undefined8 * FUN_1422a2510(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_145023fb0;
  param_1[5] = &PTR_LAB_145024228;
  param_1[6] = &PTR_LAB_145024258;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 1;
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
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 2;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x324) = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  FSmartNameContainer::AddContainer(param_1 + 0x3e,DAT_146aef308);
  *(undefined2 *)(param_1 + 0x4a) = 0;
  return param_1;
}



// FUNCTION 1422a27c0 ~TArray<FPropertyAccessSegment,TSizedDefaultAllocator<32>_> body=95 status=ok
// SIG undefined ~TArray<FPropertyAccessSegment,TSizedDefaultAllocator<32>_>(void)

void TArray<FPropertyAccessSegment,TSizedDefaultAllocator<32>_>::
     ~TArray<FPropertyAccessSegment,TSizedDefaultAllocator<32>_>(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x20);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 8;
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



// FUNCTION 1422a2820 ~TArray<FNode,FDefaultAllocator> body=95 status=ok
// SIG undefined ~TArray<FNode,FDefaultAllocator>(void)

void TArray<FNode,FDefaultAllocator>::~TArray<FNode,FDefaultAllocator>(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x40);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0xc;
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



// FUNCTION 1422a2880 ~TArray<FTransformBase,FDefaultAllocator> body=146 status=ok
// SIG undefined ~TArray<FTransformBase,FDefaultAllocator>(void)

void TArray<FTransformBase,FDefaultAllocator>::~TArray<FTransformBase,FDefaultAllocator>
               (longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    do {
      lVar4 = lVar4 + 0x28;
      lVar2 = 2;
      lVar5 = lVar4;
      do {
        plVar1 = (longlong *)(lVar5 + -0x10);
        lVar5 = lVar5 + -0x10;
        lVar2 = lVar2 + -1;
        if (*plVar1 != 0) {
          FMemory::Free();
        }
      } while (lVar2 != 0);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar4 = *param_1;
  }
  if (lVar4 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 1422a2920 ~TSparseArray<TSetElement<TTuple<FName,FNodeItem>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=100 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FName,FNodeItem>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FName,FNodeItem>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FName,FNodeItem>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,0);
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



// FUNCTION 1422a2990 ~FPoseDataContainer body=107 status=ok
// SIG undefined ~FPoseDataContainer(void)

void FPoseDataContainer::~FPoseDataContainer(longlong *param_1)

{
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 6);
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>::
  ~TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>(param_1 + 2);
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1422a2a00 ~FReferenceSkeleton body=188 status=ok
// SIG undefined ~FReferenceSkeleton(void)

void FReferenceSkeleton::~FReferenceSkeleton(longlong *param_1)

{
  if (param_1[0x1e] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1c] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (param_1[0x1a] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x12);
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 8);
  if (param_1[6] != 0) {
    FMemory::Free();
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



// FUNCTION 1422a2ac0 ~FSmartNameMapping body=97 status=ok
// SIG undefined ~FSmartNameMapping(void)

void FSmartNameMapping::~FSmartNameMapping(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FCurveMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 2,0);
  if (param_1[6] != 0) {
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



// FUNCTION 1422a2b30 FUN_1422a2b30 body=452 status=ok
// SIG undefined FUN_1422a2b30(void)

void FUN_1422a2b30(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x358) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x340) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x338) = 0;
  if (*(longlong *)(param_1 + 0x330) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x2f0);
  TArray<FSaveGameUserSetting,FDefaultAllocator>::~TArray<FSaveGameUserSetting,FDefaultAllocator>
            (param_1 + 0x2e0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x2c8);
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  if (*(longlong *)(param_1 + 0x2b8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x278);
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x268);
  if (*(longlong *)(param_1 + 600) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x240) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x238) = 0;
  if (*(longlong *)(param_1 + 0x230) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FSmartNameMapping>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x1f0,0);
  if (*(longlong *)(param_1 + 0x210) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x1a0,0);
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FMemory::Free();
  }
  FReferenceSkeleton::~FReferenceSkeleton(param_1 + 0x58);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_145013eb0;
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_143f47c68;
  FUN_141782120(param_1);
  return;
}



// FUNCTION 1422a2d00 operator= body=373 status=ok
// SIG undefined operator=(void)

longlong *
TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::operator=
          (longlong *param_1,longlong *param_2)

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
    TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
    ::Empty(param_1,(int)param_2[1] - *(int *)((longlong)param_2 + 0x34));
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
        if (bVar3) goto LAB_1422a2ddd;
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
LAB_1422a2ddd:
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
        FUN_14084b330(param_1,local_res8,*param_2 + (longlong)iStack_3c * 0x18,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 1422a2e80 operator= body=678 status=ok
// SIG undefined operator=(void)

longlong *
TSparseArray<TSetElement<TTuple<FName,FCurveMetaData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
::operator=(longlong *param_1,longlong *param_2)

{
  uint *_Dst;
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  int local_78;
  uint uStack_74;
  uint uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  uint uStack_3c;
  undefined8 uStack_38;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_1 + 5);
    _Dst = (uint *)(param_1 + 2);
    uStack_74 = 1;
    local_78 = 0;
    uStack_64 = 0;
    iStack_60 = 0;
    if (uVar1 != 0) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar2 = *puVar7;
      iStack_60 = 0;
      local_78 = 0;
      while (uVar2 == 0) {
        lVar6 = (longlong)local_78;
        iStack_60 = iStack_60 + 0x20;
        iVar4 = local_78 + 1;
        bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_78;
        local_78 = iVar4;
        if (bVar3) goto LAB_1422a2f5d;
        uVar2 = puVar7[lVar6 + 1];
      }
      uStack_74 = -uVar2 & uVar2;
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
      uStack_64 = (iStack_60 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_1422a2f5d:
        uStack_64 = uVar1;
      }
    }
    uVar2 = *(uint *)(param_1 + 5);
    local_40 = 0xffffffff;
    uStack_3c = uStack_64;
    uStack_38 = CONCAT44(uStack_5c,iStack_60);
    uVar8 = uVar2 & 0xffffffe0;
    local_50 = local_78;
    uStack_4c = uStack_74;
    puStack_48 = _Dst;
    uStack_64 = uVar2;
    if (uVar2 != uVar1) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar5 = puVar7[(int)uVar2 >> 5] & -1 << ((byte)uVar2 & 0x1f);
      iVar4 = (int)uVar2 >> 5;
      while (uVar5 == 0) {
        uVar8 = uVar8 + 0x20;
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
        goto LAB_1422a3013;
        uVar5 = puVar7[(longlong)iVar4 + 1];
        iVar4 = iVar4 + 1;
      }
      uVar5 = -uVar5 & uVar5;
      iVar4 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uVar5 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_64 = (uVar8 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_1422a3013:
        uStack_64 = uVar1;
      }
    }
    while ((uStack_3c != uStack_64 || (puStack_48 != _Dst))) {
      if (*(longlong *)(*param_1 + 0x10 + (longlong)(int)uStack_3c * 0x30) != 0) {
        FMemory::Free();
      }
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    }
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (_Dst != (uint *)(param_2 + 2)) {
      if (param_2[4] == 0) {
        ::_guard_xfg_dispatch_icall_nop(_Dst,param_2 + 2,0x10);
      }
      if (param_1[4] != 0) {
        FMemory::Free();
      }
      param_1[4] = param_2[4];
      param_2[4] = 0;
      *(int *)(param_1 + 5) = (int)param_2[5];
      *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
      param_2[5] = 0;
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 6) = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 1422a3130 FUN_1422a3130 body=162 status=ok
// SIG undefined FUN_1422a3130(void)

longlong * FUN_1422a3130(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  int iVar2;
  
  FArchive::UsingCustomVersion(param_1,&DAT_1464b0138);
  (**(code **)(*param_1 + 8))(param_1,param_2);
  (**(code **)(*param_1 + 8))(param_1,param_2 + 1);
  FUN_1422a3460(param_1,param_2 + 8);
  iVar2 = FArchive::CustomVer(param_1,&DAT_1464b0138);
  if (0xb < iVar2) {
    puVar1 = *(undefined1 **)param_1[1];
    if (puVar1 + 1 <= (undefined1 *)((undefined8 *)param_1[1])[1]) {
      *(undefined1 *)(param_2 + 0x18) = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
      return param_1;
    }
    (**(code **)(*param_1 + 0x50))(param_1,(undefined1 *)(param_2 + 0x18),1);
  }
  return param_1;
}



// FUNCTION 1422a31e0 FUN_1422a31e0 body=238 status=ok
// SIG undefined FUN_1422a31e0(void)

longlong * FUN_1422a31e0(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined4 local_res8 [2];
  
  puVar1 = (undefined4 *)(param_2 + 8);
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x40))();
  puVar2 = *(undefined4 **)plVar3[1];
  if ((undefined4 *)((undefined8 *)plVar3[1])[1] < puVar2 + 1) {
    (**(code **)(*plVar3 + 0x50))(plVar3,puVar1,4);
    if ((*(byte *)((longlong)plVar3 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(plVar3,puVar1,4);
    }
  }
  else {
    *puVar1 = *puVar2;
    *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 4;
  }
  if (((*(byte *)(param_1 + 5) & 1) != 0) && ((int)param_1[8] < 0x136)) {
    plVar3 = (longlong *)param_1[1];
    local_res8[0] = DAT_1464aa730;
    if (*plVar3 + 4U <= (ulonglong)plVar3[1]) {
      *plVar3 = *plVar3 + 4;
      return param_1;
    }
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  return param_1;
}



// FUNCTION 1422a32d0 operator<< body=390 status=ok
// SIG undefined operator<<(void)

longlong operator<<(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  void *_Src;
  undefined8 *puVar4;
  byte bVar5;
  longlong lVar6;
  int iVar7;
  
  FUN_1422a3610();
  plVar1 = param_2 + 2;
  FUN_1422a37a0(param_1,plVar1);
  if ((0x135 < *(int *)(param_1 + 0x40)) &&
     (FUN_1422a3ec0(param_1,param_2 + 8), (*(byte *)(param_1 + 0x28) & 1) != 0)) {
    if (param_2[0x10] != 0) {
      lVar6 = FMemory::Realloc(param_2[0x10],0,0);
      param_2[0x10] = lVar6;
    }
    *(undefined4 *)(param_2 + 0x11) = 0;
    TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
    ::ConditionalRehash(param_2 + 8,(int)param_2[9] - *(int *)((longlong)param_2 + 0x74),0);
  }
  bVar5 = *(byte *)(param_1 + 0x28);
  if (((((bVar5 & 1) != 0) && (*(int *)(param_1 + 0x40) < 0x138)) && (0 < (int)param_2[1])) &&
     (*(int *)(*param_2 + 8) != -1)) {
    *(undefined4 *)(*param_2 + 8) = 0xffffffff;
    bVar5 = *(byte *)(param_1 + 0x28);
  }
  if ((bVar5 & 1) != 0) {
    plVar2 = param_2 + 4;
    if (plVar2 != param_2) {
      iVar7 = (int)param_2[1];
      puVar3 = (undefined8 *)*param_2;
      *(int *)(param_2 + 5) = iVar7;
      if ((iVar7 == 0) && (*(int *)((longlong)param_2 + 0x2c) == 0)) {
        *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar2,iVar7);
        puVar4 = (undefined8 *)*plVar2;
        for (; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar4 = *puVar3;
          *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
          puVar3 = puVar3 + 2;
          puVar4 = puVar4 + 2;
        }
      }
    }
    plVar2 = param_2 + 6;
    if (plVar2 != plVar1) {
      iVar7 = (int)param_2[3];
      _Src = (void *)*plVar1;
      *(int *)(param_2 + 7) = iVar7;
      if ((iVar7 == 0) && (*(int *)((longlong)param_2 + 0x3c) == 0)) {
        *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
      }
      else {
        TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(plVar2,iVar7);
        _guard_xfg_dispatch_icall_nop((void *)*plVar2,_Src,(longlong)iVar7 * 0x30);
      }
    }
    TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::operator=
              (param_2 + 0x12,param_2 + 8);
  }
  return param_1;
}



// FUNCTION 1422a3460 FUN_1422a3460 body=427 status=ok
// SIG undefined FUN_1422a3460(void)

longlong * FUN_1422a3460(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  puVar6 = (undefined8 *)0x0;
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
        (**(code **)(*param_1 + 0x40))(param_1,*param_2 + (longlong)(int)puVar6 * 0x18);
        uVar7 = (int)puVar6 + 1;
        puVar6 = (undefined8 *)(ulonglong)uVar7;
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
    puVar1 = (undefined8 *)(*param_2 + (longlong)iVar3 * 0x18);
    puVar5 = puVar6;
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0xffffffff;
      *(undefined1 *)((longlong)puVar1 + 0xc) = 0;
      *(undefined4 *)(puVar1 + 2) = 0xffffffff;
      puVar5 = puVar1;
    }
    (**(code **)(*param_1 + 0x40))(param_1,puVar5);
    uVar7 = (int)puVar8 + 1;
    puVar8 = (undefined8 *)(ulonglong)uVar7;
  } while ((int)uVar7 < local_res8[0]);
  return param_1;
}



// FUNCTION 1422a3610 FUN_1422a3610 body=391 status=ok
// SIG undefined FUN_1422a3610(void)

longlong * FUN_1422a3610(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  puVar6 = (undefined8 *)0x0;
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
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x100000 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
    return param_1;
  }
  if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_1422a31e0(param_1,(longlong)(int)puVar6 * 0x10 + *param_2);
        uVar7 = (int)puVar6 + 1;
        puVar6 = (undefined8 *)(ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,local_res8[0]);
  }
  puVar8 = puVar6;
  if (local_res8[0] < 1) {
    return param_1;
  }
  do {
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
    puVar5 = puVar6;
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0xffffffff;
      puVar5 = puVar4;
    }
    FUN_1422a31e0(param_1,puVar5);
    uVar7 = (int)puVar8 + 1;
    puVar8 = (undefined8 *)(ulonglong)uVar7;
  } while ((int)uVar7 < local_res8[0]);
  return param_1;
}



// FUNCTION 1422a37a0 FUN_1422a37a0 body=457 status=ok
// SIG undefined FUN_1422a37a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1422a37a0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x30,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x30);
  puVar6 = (undefined4 *)0x0;
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
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x55555 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
    return param_1;
  }
  if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_14217f6d0(param_1,(longlong)(int)puVar6 * 0x30 + *param_2);
        uVar8 = (int)puVar6 + 1;
        puVar6 = (undefined4 *)(ulonglong)uVar8;
      } while ((int)uVar8 < (int)param_2[1]);
    }
    return param_1;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_2,local_res8[0]);
  }
  puVar7 = puVar6;
  if (local_res8[0] < 1) {
    return param_1;
  }
  do {
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
    }
    uVar8 = uRam0000000146aef21c;
    puVar4 = (undefined4 *)((longlong)iVar2 * 0x30 + *param_2);
    puVar5 = puVar6;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = uVar8;
      *(undefined8 *)(puVar4 + 4) = 0;
      *(undefined8 *)(puVar4 + 6) = 0;
      uVar8 = uRam0000000146aef214 & uRam0000000146aef224;
      uVar9 = uRam0000000146aef218 & uRam0000000146aef228;
      uVar10 = uRam0000000146aef21c & uRam0000000146aef22c;
      puVar4[8] = _DAT_146aef210 & _DAT_146aef220;
      puVar4[9] = uVar8;
      puVar4[10] = uVar9;
      puVar4[0xb] = uVar10;
      puVar5 = puVar4;
    }
    FUN_14217f6d0(param_1,puVar5);
    uVar8 = (int)puVar7 + 1;
    puVar7 = (undefined4 *)(ulonglong)uVar8;
  } while ((int)uVar8 < local_res8[0]);
  return param_1;
}



// FUNCTION 1422a3970 operator<< body=194 status=ok
// SIG undefined operator<<(void)

longlong operator<<(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  
  FUN_1422a3b10();
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      uVar3 = FMemory::Realloc(*(longlong *)(param_2 + 0x40),0,0);
      *(undefined8 *)(param_2 + 0x40) = uVar3;
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar5 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    if (uVar5 < 4) {
      iVar2 = 1;
    }
    else {
      uVar1 = (uVar5 >> 1) + 8;
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar4 = 0x20;
      if (uVar1 != 0) {
        iVar4 = 0x1f - iVar2;
      }
      uVar1 = (uVar5 >> 1) + 7;
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      if (uVar1 == 0) {
        iVar2 = 1;
      }
      else {
        iVar2 = 1 << (~(byte)((iVar4 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
      }
    }
    if (0 < (int)uVar5) {
      *(int *)(param_2 + 0x48) = iVar2;
      FUN_1422b1d60(param_2);
    }
  }
  return param_1;
}



// FUNCTION 1422a3a40 operator<< body=194 status=ok
// SIG undefined operator<<(void)

longlong operator<<(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  
  FUN_1422a44f0();
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      uVar3 = FMemory::Realloc(*(longlong *)(param_2 + 0x40),0,0);
      *(undefined8 *)(param_2 + 0x40) = uVar3;
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar5 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    if (uVar5 < 4) {
      iVar2 = 1;
    }
    else {
      uVar1 = (uVar5 >> 1) + 8;
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar4 = 0x20;
      if (uVar1 != 0) {
        iVar4 = 0x1f - iVar2;
      }
      uVar1 = (uVar5 >> 1) + 7;
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      if (uVar1 == 0) {
        iVar2 = 1;
      }
      else {
        iVar2 = 1 << (~(byte)((iVar4 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
      }
    }
    if (0 < (int)uVar5) {
      *(int *)(param_2 + 0x48) = iVar2;
      TSet<TTuple<FName,TBaseDelegate<IModuleInterface_*>_>,TDefaultMapHashableKeyFuncs<FName,TBaseDelegate<IModuleInterface_*>,0>,FDefaultSetAllocator>
      ::Rehash(param_2);
    }
  }
  return param_1;
}



// FUNCTION 1422a3b10 FUN_1422a3b10 body=939 status=ok
// SIG undefined FUN_1422a3b10(void)

longlong * FUN_1422a3b10(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  undefined2 *puVar3;
  longlong lVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  int local_res8 [2];
  longlong *local_58;
  undefined1 local_50 [4];
  uint local_4c;
  longlong local_48;
  uint local_40;
  int local_3c;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  plVar1 = param_2 + 2;
  iVar6 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar7 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) << 2);
  plVar12 = (longlong *)param_1[1];
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    if ((int *)plVar12[1] < (int *)*plVar12 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(int *)*plVar12;
      *plVar12 = *plVar12 + 4;
    }
    TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
              (&local_58,param_2);
    if (local_3c < *(int *)(local_48 + 0x18)) {
      do {
        puVar3 = (undefined2 *)(*local_58 + (longlong)local_3c * 0x18);
        puVar5 = *(undefined2 **)param_1[1];
        if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar5 + 1) {
          (**(code **)(*param_1 + 0x50))(param_1,puVar3,2);
          if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_1,puVar3,2);
          }
        }
        else {
          *puVar3 = *puVar5;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
        }
        (**(code **)(*param_1 + 0x40))(param_1,puVar3 + 4);
        local_40 = local_40 & ~local_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_50);
      } while (local_3c < *(int *)(local_48 + 0x18));
    }
    return param_1;
  }
  iVar6 = 0;
  local_res8[0] = 0;
  if ((int *)plVar12[1] < (int *)*plVar12 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar12;
    *plVar12 = *plVar12 + 4;
  }
  iVar7 = local_res8[0];
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_2,local_res8[0]);
  }
  *(undefined4 *)(param_2 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  uVar8 = iVar7 + 0x1f + (iVar7 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_2 + 0x2c) != uVar8) {
    *(uint *)((longlong)param_2 + 0x2c) = uVar8;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(plVar1,0);
  }
  if (0 < local_res8[0]) {
    do {
      if (*(int *)((longlong)param_2 + 0x34) == 0) {
        iVar7 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar7 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(param_2,iVar7);
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(plVar1,0,1);
      }
      else {
        iVar7 = (int)param_2[6];
        iVar9 = *(int *)((longlong)param_2 + 0x34) + -1;
        iVar10 = *(int *)(*param_2 + 4 + (longlong)iVar7 * 0x18);
        *(int *)(param_2 + 6) = iVar10;
        *(int *)((longlong)param_2 + 0x34) = iVar9;
        if (iVar9 != 0) {
          *(undefined4 *)(*param_2 + (longlong)iVar10 * 0x18) = 0xffffffff;
        }
      }
      plVar12 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar12 = plVar1;
      }
      iVar10 = iVar7;
      if (iVar7 < 0) {
        iVar10 = iVar7 + 0x1f;
      }
      puVar2 = (uint *)((longlong)plVar12 + (longlong)(iVar10 >> 5) * 4);
      lVar11 = (longlong)iVar7;
      *puVar2 = *puVar2 | 1 << ((byte)iVar7 & 0x1f);
      lVar4 = *param_2;
      *(undefined2 *)(lVar4 + lVar11 * 0x18) = 0;
      *(undefined8 *)(lVar4 + 8 + lVar11 * 0x18) = 0;
      puVar3 = (undefined2 *)(lVar4 + lVar11 * 0x18);
      *(undefined4 *)(puVar3 + 8) = 0xffffffff;
      puVar5 = *(undefined2 **)param_1[1];
      if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar5 + 1) {
        (**(code **)(*param_1 + 0x50))(param_1,puVar3,2);
        if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_1,puVar3,2);
        }
      }
      else {
        *puVar3 = *puVar5;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
      }
      (**(code **)(*param_1 + 0x40))(param_1,puVar3 + 4);
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 1422a3ec0 FUN_1422a3ec0 body=876 status=ok
// SIG undefined FUN_1422a3ec0(void)

longlong * FUN_1422a3ec0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  uint *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  int local_res8 [2];
  longlong *local_48;
  undefined1 local_40 [4];
  uint local_3c;
  longlong local_38;
  uint local_30;
  int local_2c;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  plVar1 = param_2 + 2;
  iVar6 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar7 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) << 2);
  plVar11 = (longlong *)param_1[1];
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    iVar6 = 0;
    local_res8[0] = 0;
    if ((int *)plVar11[1] < (int *)*plVar11 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(int *)*plVar11;
      *plVar11 = *plVar11 + 4;
    }
    iVar7 = local_res8[0];
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (param_2,local_res8[0]);
    }
    *(undefined4 *)(param_2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 5) = 0;
    uVar8 = iVar7 + 0x1f + (iVar7 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
    if (*(uint *)((longlong)param_2 + 0x2c) != uVar8) {
      *(uint *)((longlong)param_2 + 0x2c) = uVar8;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(plVar1,0);
    }
    if (0 < local_res8[0]) {
      do {
        if (*(int *)((longlong)param_2 + 0x34) == 0) {
          iVar7 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar7 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(param_2,iVar7);
          }
          TBitArray<FDefaultBitArrayAllocator>::Add(plVar1,0,1);
        }
        else {
          iVar7 = (int)param_2[6];
          iVar9 = *(int *)((longlong)param_2 + 0x34) + -1;
          iVar10 = *(int *)(*param_2 + 4 + (longlong)iVar7 * 0x18);
          *(int *)(param_2 + 6) = iVar10;
          *(int *)((longlong)param_2 + 0x34) = iVar9;
          if (iVar9 != 0) {
            *(undefined4 *)(*param_2 + (longlong)iVar10 * 0x18) = 0xffffffff;
          }
        }
        plVar11 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        iVar10 = iVar7;
        if (iVar7 < 0) {
          iVar10 = iVar7 + 0x1f;
        }
        puVar3 = (uint *)((longlong)plVar11 + (longlong)(iVar10 >> 5) * 4);
        *puVar3 = *puVar3 | 1 << ((byte)iVar7 & 0x1f);
        lVar4 = *param_2;
        *(undefined8 *)(lVar4 + (longlong)iVar7 * 0x18) = 0;
        lVar4 = lVar4 + (longlong)iVar7 * 0x18;
        *(undefined4 *)(lVar4 + 8) = 0;
        puVar2 = (undefined4 *)(lVar4 + 8);
        *(undefined4 *)(lVar4 + 0x10) = 0xffffffff;
        (**(code **)(*param_1 + 0x40))(param_1);
        puVar5 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar5 + 1) {
          (**(code **)(*param_1 + 0x50))(param_1,puVar2,4);
          if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_1,puVar2,4);
          }
        }
        else {
          *puVar2 = *puVar5;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < local_res8[0]);
    }
    return param_1;
  }
  local_res8[0] = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
  if ((int *)plVar11[1] < (int *)*plVar11 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar11;
    *plVar11 = *plVar11 + 4;
  }
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_48,param_2);
  if (local_2c < *(int *)(local_38 + 0x18)) {
    do {
      lVar4 = *local_48 + (longlong)local_2c * 0x18;
      (**(code **)(*param_1 + 0x40))(param_1,lVar4);
      puVar2 = *(undefined4 **)param_1[1];
      if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
        (**(code **)(*param_1 + 0x50))(param_1,lVar4 + 8,4);
        if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_1,lVar4 + 8,4);
        }
      }
      else {
        *(undefined4 *)(lVar4 + 8) = *puVar2;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
      local_30 = local_30 & ~local_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_40);
    } while (local_2c < *(int *)(local_38 + 0x18));
  }
  return param_1;
}



// FUNCTION 1422a4230 FUN_1422a4230 body=697 status=ok
// SIG undefined FUN_1422a4230(void)

longlong * FUN_1422a4230(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int local_res8 [2];
  longlong *local_48;
  undefined1 local_40 [4];
  uint local_3c;
  longlong local_38;
  uint local_30;
  int local_2c;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x30,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x30);
  iVar2 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar3 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) << 2);
  plVar6 = (longlong *)param_1[1];
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    if ((int *)plVar6[1] < (int *)*plVar6 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(int *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
              (&local_48,param_2);
    if (local_2c < *(int *)(local_38 + 0x18)) {
      do {
        lVar8 = (longlong)local_2c * 0x30 + *local_48;
        (**(code **)(*param_1 + 0x40))(param_1,lVar8);
        FUN_1422a3130(param_1,lVar8 + 8);
        local_30 = local_30 & ~local_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_40);
      } while (local_2c < *(int *)(local_38 + 0x18));
    }
    return param_1;
  }
  iVar2 = 0;
  local_res8[0] = 0;
  if ((int *)plVar6[1] < (int *)*plVar6 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar6;
    *plVar6 = *plVar6 + 4;
  }
  TSparseArray<TSetElement<TTuple<FName,FCurveMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(param_2,local_res8[0]);
  if (0 < local_res8[0]) {
    do {
      if (*(int *)((longlong)param_2 + 0x34) == 0) {
        iVar3 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(param_2 + 2,0,1);
      }
      else {
        iVar3 = (int)param_2[6];
        iVar4 = *(int *)((longlong)param_2 + 0x34) + -1;
        iVar5 = *(int *)(*param_2 + 4 + (longlong)iVar3 * 0x30);
        *(int *)(param_2 + 6) = iVar5;
        *(int *)((longlong)param_2 + 0x34) = iVar4;
        if (iVar4 != 0) {
          *(undefined4 *)(*param_2 + (longlong)iVar5 * 0x30) = 0xffffffff;
        }
      }
      plVar6 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar6 = param_2 + 2;
      }
      iVar5 = iVar3;
      if (iVar3 < 0) {
        iVar5 = iVar3 + 0x1f;
      }
      puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar5 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar3 & 0x1f);
      puVar7 = (undefined8 *)((longlong)iVar3 * 0x30 + *param_2);
      *puVar7 = 0;
      *(undefined2 *)(puVar7 + 1) = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      *(undefined1 *)(puVar7 + 4) = 0xff;
      *(undefined4 *)(puVar7 + 5) = 0xffffffff;
      (**(code **)(*param_1 + 0x40))(param_1);
      FUN_1422a3130(param_1,puVar7 + 1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 1422a44f0 FUN_1422a44f0 body=806 status=ok
// SIG undefined FUN_1422a44f0(void)

longlong * FUN_1422a44f0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int local_res8 [2];
  undefined1 local_78 [16];
  undefined1 *local_68;
  undefined1 **local_60;
  longlong *local_58;
  undefined1 local_50 [4];
  uint local_4c;
  longlong local_48;
  uint local_40;
  int local_3c;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
            );
  plVar1 = param_2 + 2;
  iVar4 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar5 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) << 2);
  plVar8 = (longlong *)param_1[1];
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
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
    TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
              (&local_58,param_2);
    if (local_3c < *(int *)(local_48 + 0x18)) {
      do {
        lVar10 = (longlong)local_3c * 0x20 + *local_58;
        (**(code **)(*param_1 + 0x40))(param_1,lVar10);
        FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_78,param_1);
        local_68 = local_78;
        local_60 = &local_68;
        FUN_141661f40(&local_68,lVar10 + 8);
        FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_78);
        local_40 = local_40 & ~local_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_50);
      } while (local_3c < *(int *)(local_48 + 0x18));
    }
    return param_1;
  }
  iVar4 = 0;
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
  iVar5 = local_res8[0];
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_2,local_res8[0]);
  }
  *(undefined4 *)(param_2 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  uVar6 = iVar5 + 0x1f + (iVar5 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_2 + 0x2c) != uVar6) {
    *(uint *)((longlong)param_2 + 0x2c) = uVar6;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(plVar1,0);
  }
  if (0 < local_res8[0]) {
    do {
      if (*(int *)((longlong)param_2 + 0x34) == 0) {
        iVar5 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar5 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar5 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(param_2,iVar5);
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(plVar1,0,1);
      }
      else {
        iVar5 = (int)param_2[6];
        iVar3 = *(int *)((longlong)iVar5 * 0x20 + 4 + *param_2);
        iVar7 = *(int *)((longlong)param_2 + 0x34) + -1;
        *(int *)(param_2 + 6) = iVar3;
        *(int *)((longlong)param_2 + 0x34) = iVar7;
        if (iVar7 != 0) {
          *(undefined4 *)((longlong)iVar3 * 0x20 + *param_2) = 0xffffffff;
        }
      }
      plVar8 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar8 = plVar1;
      }
      iVar7 = iVar5;
      if (iVar5 < 0) {
        iVar7 = iVar5 + 0x1f;
      }
      puVar2 = (uint *)((longlong)plVar8 + (longlong)(iVar7 >> 5) * 4);
      *puVar2 = *puVar2 | 1 << ((byte)iVar5 & 0x1f);
      puVar9 = (undefined8 *)((longlong)iVar5 * 0x20 + *param_2);
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      *(undefined4 *)(puVar9 + 3) = 0xffffffff;
      (**(code **)(*param_1 + 0x40))(param_1);
      FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_78,param_1);
      local_68 = local_78;
      local_60 = &local_68;
      FUN_141661f40(&local_68);
      FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_78);
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 1422a4820 FUN_1422a4820 body=708 status=ok
// SIG undefined FUN_1422a4820(void)

longlong * FUN_1422a4820(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int local_res8 [2];
  longlong *local_48;
  undefined1 local_40 [4];
  uint local_3c;
  longlong local_38;
  uint local_30;
  int local_2c;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x70,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x70);
  iVar2 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar3 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) << 2);
  plVar6 = (longlong *)param_1[1];
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    if ((int *)plVar6[1] < (int *)*plVar6 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(int *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
              (&local_48,param_2);
    if (local_2c < *(int *)(local_38 + 0x18)) {
      do {
        lVar8 = (longlong)local_2c * 0x70 + *local_48;
        (**(code **)(*param_1 + 0x40))(param_1,lVar8);
        FUN_1422b29a0(lVar8 + 8,param_1);
        local_30 = local_30 & ~local_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_40);
      } while (local_2c < *(int *)(local_38 + 0x18));
    }
    return param_1;
  }
  iVar2 = 0;
  local_res8[0] = 0;
  if ((int *)plVar6[1] < (int *)*plVar6 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar6;
    *plVar6 = *plVar6 + 4;
  }
  TSparseArray<TSetElement<TTuple<FName,FSmartNameMapping>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_2,local_res8[0]);
  if (0 < local_res8[0]) {
    do {
      if (*(int *)((longlong)param_2 + 0x34) == 0) {
        iVar3 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::
          ResizeGrow(param_2,iVar3);
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(param_2 + 2,0,1);
      }
      else {
        iVar3 = (int)param_2[6];
        iVar4 = *(int *)((longlong)param_2 + 0x34) + -1;
        iVar5 = *(int *)((longlong)iVar3 * 0x70 + 4 + *param_2);
        *(int *)(param_2 + 6) = iVar5;
        *(int *)((longlong)param_2 + 0x34) = iVar4;
        if (iVar4 != 0) {
          *(undefined4 *)((longlong)iVar5 * 0x70 + *param_2) = 0xffffffff;
        }
      }
      plVar6 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar6 = param_2 + 2;
      }
      iVar5 = iVar3;
      if (iVar3 < 0) {
        iVar5 = iVar3 + 0x1f;
      }
      puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar5 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar3 & 0x1f);
      puVar7 = (undefined8 *)((longlong)iVar3 * 0x70 + *param_2);
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[4] = 0;
      puVar7[7] = 0;
      puVar7[8] = 0;
      *(undefined4 *)(puVar7 + 9) = 0xffffffff;
      *(undefined4 *)((longlong)puVar7 + 0x4c) = 0;
      puVar7[0xb] = 0;
      *(undefined4 *)(puVar7 + 0xc) = 0;
      *(undefined4 *)(puVar7 + 0xd) = 0xffffffff;
      (**(code **)(*param_1 + 0x40))(param_1);
      FUN_1422b29a0(puVar7 + 1,param_1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 1422a4af0 FUN_1422a4af0 body=139 status=ok
// SIG undefined FUN_1422a4af0(void)

undefined8 * FUN_1422a4af0(void)

{
  DWORD DVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0xb8);
  if (puVar2 != (undefined8 *)0x0) {
    _guard_xfg_dispatch_icall_nop(puVar2 + 2,0,0xa8);
    *puVar2 = &PTR_FUN_1440104d0;
    puVar2[1] = 0;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(puVar2 + 2) = DVar1;
    *puVar2 = &PTR_FUN_145026450;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[0x15] = 0;
    puVar2[0x16] = 0;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1422a4c20 FUN_1422a4c20 body=119 status=ok
// SIG undefined FUN_1422a4c20(void)

longlong FUN_1422a4c20(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x4d8) = 0;
  if (*(longlong *)(param_1 + 0x4d0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x490);
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_145026e90;
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4e0);
  }
  return param_1;
}



// FUNCTION 1422a4ca0 FUN_1422a4ca0 body=72 status=ok
// SIG undefined FUN_1422a4ca0(void)

undefined8 * FUN_1422a4ca0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1422a4cf0 FUN_1422a4cf0 body=207 status=ok
// SIG undefined FUN_1422a4cf0(void)

longlong FUN_1422a4cf0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1 + 0x828;
  lVar2 = 3;
  do {
    plVar1 = (longlong *)(lVar3 + -0x30);
    lVar3 = lVar3 + -0x30;
    lVar2 = lVar2 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar2 != 0);
  FUN_14084c260(param_1 + 0x780);
  *(undefined ***)(param_1 + 0x710) = &PTR_ReadLocalVoiceData_1440104f8;
  if (*(longlong *)(param_1 + 0x720) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x700) = 0;
  if (*(longlong *)(param_1 + 0x6f8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x6b8);
  FUN_14083e560(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x850);
  }
  return param_1;
}



// FUNCTION 1422a4dc0 FUN_1422a4dc0 body=93 status=ok
// SIG undefined FUN_1422a4dc0(void)

undefined8 * FUN_1422a4dc0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x15] != 0) {
    FMemory::Free();
  }
  FUN_14084c260(param_1 + 5);
  FUN_14084c260(param_1 + 3);
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 1422a4e20 FUN_1422a4e20 body=43 status=ok
// SIG undefined FUN_1422a4e20(void)

undefined8 * FUN_1422a4e20(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145026e90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1422a4e50 FUN_1422a4e50 body=191 status=ok
// SIG undefined FUN_1422a4e50(void)

longlong FUN_1422a4e50(longlong param_1,ulonglong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  FUN_142287a00(param_1 + 0x98);
  iVar1 = *(int *)(param_1 + 0x88);
  puVar2 = *(undefined8 **)(param_1 + 0x80);
  if (iVar1 != 0) {
    do {
      puVar2[0xc] = &PTR_FUN_14410b0e0;
      *puVar2 = &PTR_FUN_14410b0e0;
      puVar2 = puVar2 + 0x15;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    puVar2 = *(undefined8 **)(param_1 + 0x80);
  }
  if (puVar2 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_145013eb0;
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_143f47c68;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 1422a4f10 `scalar_deleting_destructor' body=238 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UAnimSet::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xa0);
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x48);
  plVar1 = *(longlong **)(param_1 + 0x40);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x40);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 1422a5000 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
AK::StreamMgr::CAkDeviceBlocking::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145025488;
  FUN_14083eff0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x460);
  }
  return param_1;
}



// FUNCTION 1422a5040 `scalar_deleting_destructor' body=106 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UAnimationAsset::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_145013eb0;
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_143f47c68;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1422a50b0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UBlendSpaceBase::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~UBlendSpaceBase();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x148);
  }
  return param_1;
}



// FUNCTION 1422a50f0 `scalar_deleting_destructor' body=138 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UDatasmithActorTemplate::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x38);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 1422a5180 FUN_1422a5180 body=79 status=ok
// SIG undefined FUN_1422a5180(void)

longlong FUN_1422a5180(longlong param_1,ulonglong param_2)

{
  TArray<FPropertyAccessSegment,TSizedDefaultAllocator<32>_>::
  ~TArray<FPropertyAccessSegment,TSizedDefaultAllocator<32>_>(param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1422a51d0 `scalar_deleting_destructor' body=205 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UNodeMappingContainer::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x110) = 0;
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 200);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FNodeItem>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FName,FNodeItem>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FNodeItem>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FName,FNodeItem>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x168);
  }
  return param_1;
}



// FUNCTION 1422a52a0 `scalar_deleting_destructor' body=115 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UPoseAsset::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  FPoseDataContainer::~FPoseDataContainer(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_145013eb0;
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_143f47c68;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 1422a5320 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong URig::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TArray<FNode,FDefaultAllocator>::~TArray<FNode,FDefaultAllocator>(param_1 + 0x40);
  TArray<FTransformBase,FDefaultAllocator>::~TArray<FTransformBase,FDefaultAllocator>
            (param_1 + 0x30);
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_143fe0658;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1422a5380 FUN_1422a5380 body=52 status=ok
// SIG undefined FUN_1422a5380(void)

undefined8 FUN_1422a5380(undefined8 param_1,ulonglong param_2)

{
  FUN_1422a2b30();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x368);
  }
  return param_1;
}



// FUNCTION 1422a53c0 AccumulateCurveMetaData body=188 status=ok
// SIG undefined AccumulateCurveMetaData(void)

void USkeleton::AccumulateCurveMetaData(longlong param_1,longlong param_2,byte param_3,byte param_4)

{
  longlong *plVar1;
  longlong lVar2;
  byte *pbVar3;
  longlong *plVar4;
  
  if (((param_3 != 0) || (param_4 != 0)) &&
     (plVar1 = (longlong *)FSmartNameContainer::GetContainerInternal(param_1 + 0x1f0,&DAT_146aef308)
     , plVar1 != (longlong *)0x0)) {
    plVar4 = (longlong *)*plVar1;
    plVar1 = plVar4 + (int)plVar1[1];
    for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
      if (*plVar4 == param_2) {
        lVar2 = FSmartNameContainer::GetContainerInternal(param_1 + 0x1f0,&DAT_146aef308);
        pbVar3 = (byte *)0x0;
        if (lVar2 != 0) {
          pbVar3 = (byte *)FSmartNameMapping::GetCurveMetaData(lVar2,param_2);
        }
        *pbVar3 = *pbVar3 | param_3;
        pbVar3[1] = pbVar3[1] | param_4;
        UObjectBaseUtility::MarkPackageDirty(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1422a5480 Add body=338 status=ok
// SIG undefined Add(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FReferenceSkeleton::Add(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  float *pfVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
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
  int local_res8 [2];
  undefined1 local_res10 [8];
  undefined8 *local_38;
  int *local_30;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
  }
  puVar8 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
  *puVar8 = *param_2;
  *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(param_2 + 1);
  iVar2 = (int)param_1[3];
  *(int *)(param_1 + 3) = iVar2 + 1;
  local_res8[0] = iVar1;
  if (*(int *)((longlong)param_1 + 0x1c) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar2);
  }
  uVar7 = param_3[1];
  local_30 = local_res8;
  puVar8 = (undefined8 *)((longlong)iVar2 * 0x30 + param_1[2]);
  *puVar8 = *param_3;
  puVar8[1] = uVar7;
  uVar7 = param_3[3];
  puVar8[2] = param_3[2];
  puVar8[3] = uVar7;
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x24);
  uVar4 = *(undefined4 *)(param_3 + 5);
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x2c);
  *(undefined4 *)(puVar8 + 4) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)((longlong)puVar8 + 0x24) = uVar3;
  *(undefined4 *)(puVar8 + 5) = uVar4;
  *(undefined4 *)((longlong)puVar8 + 0x2c) = uVar5;
  local_38 = param_2;
  FUN_1415ec610(param_1 + 8,local_res10,&local_38,0);
  pfVar9 = (float *)((longlong)local_res8[0] * 0x30 + param_1[2]);
  fVar6 = *pfVar9;
  fVar20 = pfVar9[1];
  fVar21 = pfVar9[2];
  fVar22 = pfVar9[3];
  auVar10._0_4_ = fVar6 * fVar6 + fVar21 * fVar21;
  auVar10._4_4_ = fVar20 * fVar20 + fVar22 * fVar22;
  auVar10._8_4_ = fVar21 * fVar21 + fVar6 * fVar6;
  auVar10._12_4_ = fVar22 * fVar22 + fVar20 * fVar20;
  fVar16 = auVar10._4_4_ + auVar10._0_4_;
  fVar17 = auVar10._8_4_ + auVar10._4_4_;
  fVar18 = auVar10._12_4_ + auVar10._8_4_;
  fVar19 = auVar10._0_4_ + auVar10._12_4_;
  auVar11._4_4_ = fVar17;
  auVar11._0_4_ = fVar16;
  auVar11._8_4_ = fVar18;
  auVar11._12_4_ = fVar19;
  auVar11 = rsqrtps(auVar10,auVar11);
  fVar12 = auVar11._0_4_;
  fVar13 = auVar11._4_4_;
  fVar14 = auVar11._8_4_;
  fVar15 = auVar11._12_4_;
  fVar12 = (_DAT_146aef270 - fVar12 * fVar12 * _DAT_146aef270 * fVar16) * fVar12 + fVar12;
  fVar13 = (fRam0000000146aef274 - fVar13 * fVar13 * fRam0000000146aef274 * fVar17) * fVar13 +
           fVar13;
  fVar14 = (fRam0000000146aef278 - fVar14 * fVar14 * fRam0000000146aef278 * fVar18) * fVar14 +
           fVar14;
  fVar15 = (fRam0000000146aef27c - fVar15 * fVar15 * fRam0000000146aef27c * fVar19) * fVar15 +
           fVar15;
  fVar20 = (float)(((uint)(((fRam0000000146aef274 - fVar13 * fVar13 * fRam0000000146aef274 * fVar17)
                            * fVar13 + fVar13) * fVar20) ^ uRam0000000146aef264) &
                   -(uint)(fRam0000000146aef284 <= fVar17) ^ uRam0000000146aef264);
  fVar21 = (float)(((uint)(((fRam0000000146aef278 - fVar14 * fVar14 * fRam0000000146aef278 * fVar18)
                            * fVar14 + fVar14) * fVar21) ^ uRam0000000146aef268) &
                   -(uint)(fRam0000000146aef288 <= fVar18) ^ uRam0000000146aef268);
  fVar22 = (float)(((uint)(((fRam0000000146aef27c - fVar15 * fVar15 * fRam0000000146aef27c * fVar19)
                            * fVar15 + fVar15) * fVar22) ^ uRam0000000146aef26c) &
                   -(uint)(fRam0000000146aef28c <= fVar19) ^ uRam0000000146aef26c);
  *pfVar9 = (float)(((uint)(((_DAT_146aef270 - fVar12 * fVar12 * _DAT_146aef270 * fVar16) * fVar12 +
                            fVar12) * fVar6) ^ _DAT_146aef260) & -(uint)(_DAT_146aef280 <= fVar16) ^
                   _DAT_146aef260);
  pfVar9[1] = fVar20;
  pfVar9[2] = fVar21;
  pfVar9[3] = fVar22;
  return;
}



// FUNCTION 1422a55e0 AddAssetUserData body=110 status=ok
// SIG undefined AddAssetUserData(void)

void UAnimationAsset::AddAssetUserData(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong local_res10;
  
  if (param_2 != 0) {
    local_res10 = (**(code **)(*param_1 + 0x18))(param_1,*(undefined8 *)(param_2 + 0x10));
    if (local_res10 != 0) {
      TArray<FName,FDefaultAllocator>::Remove(param_1 + 9,&local_res10);
    }
    iVar1 = (int)param_1[10];
    *(int *)(param_1 + 10) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0x54) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 9,iVar1);
    }
    *(longlong *)(param_1[9] + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 1422a5650 AddAssetUserData body=128 status=ok
// SIG undefined AddAssetUserData(void)

void USkeleton::AddAssetUserData(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong local_res10;
  
  if (param_2 != 0) {
    local_res10 = (**(code **)(*param_1 + 0x18))(param_1,*(undefined8 *)(param_2 + 0x10));
    if (local_res10 != 0) {
      TArray<FName,FDefaultAllocator>::Remove(param_1 + 99,&local_res10);
    }
    iVar1 = (int)param_1[100];
    *(int *)(param_1 + 100) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0x324) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 99,iVar1);
    }
    *(longlong *)(param_1[99] + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 1422a56d0 AddContainer body=166 status=ok
// SIG undefined AddContainer(void)

void FSmartNameContainer::AddContainer(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  longlong local_res10;
  longlong *local_res18 [2];
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        plVar3 = (longlong *)((longlong)iVar1 * 0x70 + *param_1);
        if (*plVar3 == param_2) {
          if (iVar1 != -1) goto LAB_1422a5741;
          break;
        }
        iVar1 = (int)plVar3[0xd];
      } while (iVar1 != -1);
    }
  }
  plVar3 = (longlong *)0x0;
LAB_1422a5741:
  plVar2 = plVar3 + 1;
  if (plVar3 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  if (plVar2 == (longlong *)0x0) {
    local_res18[0] = &local_res10;
    local_res10 = param_2;
    TSet<TTuple<FName,FSmartNameMapping>,TDefaultMapHashableKeyFuncs<FName,FSmartNameMapping,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<FName_const_&>_>(param_1,local_res8,local_res18,0);
  }
  return;
}



// FUNCTION 1422a5780 ApplyTo body=219 status=ok
// SIG undefined ApplyTo(void)

undefined4 FInputAlphaBoolBlend::ApplyTo(undefined4 *param_1,char param_2,undefined4 param_3)

{
  undefined4 uVar1;
  float fVar2;
  
  if (param_2 == '\0') {
    fVar2 = 0.0;
  }
  else {
    fVar2 = 1.0;
  }
  if (*(char *)(param_1 + 0x14) == '\0') {
    if (*(longlong *)(param_1 + 4) != *(longlong *)(param_1 + 8)) {
      FAlphaBlend::SetCustomCurve(param_1 + 6);
    }
    if (*(char *)(param_1 + 2) != *(char *)(param_1 + 6)) {
      FAlphaBlend::SetBlendOption(param_1 + 6);
    }
    FAlphaBlend::SetDesiredValue(param_1 + 6,fVar2);
    FAlphaBlend::SetBlendTime(param_1 + 6,0);
    FAlphaBlend::Reset(param_1 + 6);
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  else if (fVar2 != (float)param_1[0x10]) {
    FAlphaBlend::SetDesiredValue(param_1 + 6,fVar2);
    if (param_2 == '\0') {
      uVar1 = param_1[1];
    }
    else {
      uVar1 = *param_1;
    }
    FAlphaBlend::SetBlendTime(param_1 + 6,uVar1);
  }
  FAlphaBlend::Update(param_1 + 6,param_3);
  return param_1[0xe];
}



// FUNCTION 1422a5860 ApplyTo body=29 status=ok
// SIG undefined ApplyTo(void)

float FInputScaleBias::ApplyTo(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_2 * *param_1 + param_1[1];
  fVar2 = 0.0;
  if ((0.0 <= fVar1) && (fVar2 = fVar1, 1.0 <= fVar1)) {
    fVar2 = 1.0;
  }
  return fVar2;
}



// FUNCTION 1422a5880 ApplyTo body=237 status=ok
// SIG undefined ApplyTo(void)

undefined8 FInputScaleBiasClamp::ApplyTo(char *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  
  uVar3 = (undefined4)((ulonglong)param_2 >> 0x20);
  fVar2 = (float)param_2;
  if (*param_1 != '\0') {
    fVar4 = *(float *)(param_1 + 8) - *(float *)(param_1 + 4);
    if (1e-08 < ABS(fVar4)) {
      fVar4 = (fVar2 - *(float *)(param_1 + 4)) / fVar4;
    }
    else if (fVar2 < *(float *)(param_1 + 8)) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = 1.0;
    }
    uVar3 = 0;
    fVar2 = (*(float *)(param_1 + 0x10) - *(float *)(param_1 + 0xc)) * fVar4 +
            *(float *)(param_1 + 0xc);
  }
  fVar4 = fVar2 * *(float *)(param_1 + 0x14) + *(float *)(param_1 + 0x18);
  fVar2 = fVar4;
  if (param_1[0x1c] != '\0') {
    fVar2 = *(float *)(param_1 + 0x20);
    if (fVar2 <= fVar4) {
      fVar2 = *(float *)(param_1 + 0x24);
      if (fVar4 <= *(float *)(param_1 + 0x24)) {
        fVar2 = fVar4;
      }
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
    }
  }
  uVar1 = CONCAT44(uVar3,fVar2);
  if (param_1[0x28] != '\0') {
    if (param_1[0x38] != '\0') {
      if (fVar2 < *(float *)(param_1 + 0x34)) {
        uVar3 = *(undefined4 *)(param_1 + 0x30);
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 0x2c);
      }
      uVar1 = FMath::FInterpTo(*(float *)(param_1 + 0x34),fVar2,param_3,uVar3);
    }
    *(int *)(param_1 + 0x34) = (int)uVar1;
    param_1[0x38] = '\x01';
    return uVar1;
  }
  param_1[0x38] = '\x01';
  return CONCAT44(uVar3,fVar2);
}



// FUNCTION 1422a5970 BakeFromFloatCurve body=1674 status=ok
// SIG undefined BakeFromFloatCurve(void)

void FTimeStretchCurve::BakeFromFloatCurve(float *param_1,undefined8 param_2,float param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  float *pfVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  fVar17 = *param_1;
  if (1.0 <= fVar17) {
    if (240.0 <= fVar17) {
      fVar17 = 240.0;
    }
  }
  else {
    fVar17 = 1.0;
  }
  fVar20 = 0.0;
  fVar21 = 0.0;
  iVar5 = (int)ROUND((fVar17 * param_3 + fVar17 * param_3) - 0.5) >> 1;
  iVar6 = 1;
  if (0 < iVar5) {
    iVar6 = iVar5;
  }
  uVar13 = 0;
  uVar11 = uVar13;
  fVar17 = fVar21;
  if (0 < iVar6) {
    do {
      fVar19 = (float)(int)uVar11 * (param_3 / (float)iVar6);
      fVar16 = (float)FFloatCurve::Evaluate(param_2,fVar19);
      fVar18 = param_1[4];
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      param_1[4] = (float)((int)fVar18 + 1);
      if ((int)param_1[5] < (int)fVar18 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 2,fVar18);
      }
      fVar21 = fVar16;
      if (fVar16 <= fVar17) {
        fVar21 = fVar17;
      }
      uVar10 = (int)uVar11 + 1;
      puVar1 = (ulonglong *)(*(longlong *)(param_1 + 2) + (longlong)(int)fVar18 * 0x10);
      *puVar1 = (ulonglong)(uint)fVar19;
      puVar1[1] = (ulonglong)(uint)fVar16 << 0x20;
      uVar11 = (ulonglong)uVar10;
      fVar17 = fVar21;
    } while ((int)uVar10 < iVar6);
  }
  if (0.0001 <= fVar21) {
    lVar7 = *(longlong *)(param_1 + 2);
    fVar17 = param_1[4];
    lVar8 = (longlong)(int)fVar17 * 0x10 + lVar7;
    if (lVar7 != lVar8) {
      do {
        *(float *)(lVar7 + 0xc) = (1.0 / fVar21) * *(float *)(lVar7 + 0xc);
        lVar7 = lVar7 + 0x10;
      } while (lVar7 != lVar8);
      fVar17 = param_1[4];
    }
    if (0 < (int)((int)param_1[4] - 2U)) {
      uVar9 = (ulonglong)((int)param_1[4] - 2U);
      uVar11 = uVar13;
      uVar15 = uVar13;
      do {
        lVar7 = *(longlong *)(param_1 + 2);
        uVar10 = (int)uVar15 + 1;
        fVar17 = param_1[4];
        fVar21 = ABS(*(float *)(uVar11 + 0xc + lVar7) - *(float *)(uVar11 + 0x1c + lVar7));
        if (param_1[1] <= fVar21 && fVar21 != param_1[1]) {
          uVar15 = (ulonglong)uVar10;
          uVar11 = uVar11 + 0x10;
        }
        else {
          iVar6 = ((int)fVar17 - uVar10) + -1;
          if (iVar6 != 0) {
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)(int)uVar10 * 0x10 + lVar7),
                       (void *)((longlong)((int)uVar15 + 2) * 0x10 + lVar7),(longlong)iVar6 << 4);
            fVar17 = param_1[4];
          }
          fVar17 = (float)((int)fVar17 + -1);
          param_1[4] = fVar17;
        }
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if (param_1[5] != fVar17) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 2);
    }
    if (2 < (int)param_1[4]) {
      fVar17 = 0.0;
      param_1[6] = 0.0;
      param_1[7] = 0.0;
      param_1[8] = 0.0;
      lVar7 = (longlong)(int)param_1[4] + -1;
      if (3 < lVar7) {
        lVar14 = 0x30;
        lVar8 = ((longlong)(int)param_1[4] - 5U >> 2) + 1;
        uVar13 = lVar8 * 4;
        do {
          lVar2 = *(longlong *)(param_1 + 2);
          *(float *)(lVar14 + -0x2c + lVar2) = fVar20;
          *(float *)(lVar14 + -0x28 + lVar2) = fVar17;
          fVar21 = *(float *)(lVar14 + -0x24 + lVar2);
          fVar18 = *(float *)(*(longlong *)(param_1 + 2) + -0x20 + lVar14) -
                   *(float *)(lVar14 + -0x30 + lVar2);
          param_1[6] = fVar18 * fVar21 + param_1[6];
          fVar20 = fVar20 + fVar18 / (fVar21 * 100.0 + 1.0);
          fVar17 = fVar17 + fVar18 / (1.0 - fVar21 * 0.99);
          param_1[7] = (fVar20 - *(float *)(lVar14 + -0x2c + lVar2)) * fVar21 + param_1[7];
          param_1[8] = (fVar17 - *(float *)(lVar14 + -0x28 + lVar2)) * fVar21 + param_1[8];
          lVar2 = *(longlong *)(param_1 + 2);
          *(float *)(lVar2 + -0x1c + lVar14) = fVar20;
          *(float *)(lVar2 + -0x18 + lVar14) = fVar17;
          fVar21 = *(float *)(lVar2 + -0x14 + lVar14);
          fVar18 = *(float *)(*(longlong *)(param_1 + 2) + -0x10 + lVar14) -
                   *(float *)(lVar2 + -0x20 + lVar14);
          param_1[6] = fVar18 * fVar21 + param_1[6];
          fVar20 = fVar20 + fVar18 / (fVar21 * 100.0 + 1.0);
          fVar17 = fVar17 + fVar18 / (1.0 - fVar21 * 0.99);
          param_1[7] = (fVar20 - *(float *)(lVar2 + -0x1c + lVar14)) * fVar21 + param_1[7];
          param_1[8] = (fVar17 - *(float *)(lVar2 + -0x18 + lVar14)) * fVar21 + param_1[8];
          lVar2 = *(longlong *)(param_1 + 2);
          *(float *)(lVar14 + -0xc + lVar2) = fVar20;
          *(float *)(lVar14 + -8 + lVar2) = fVar17;
          fVar21 = *(float *)(lVar14 + -4 + lVar2);
          fVar18 = *(float *)(*(longlong *)(param_1 + 2) + lVar14) -
                   *(float *)(lVar14 + -0x10 + lVar2);
          param_1[6] = fVar18 * fVar21 + param_1[6];
          fVar20 = fVar20 + fVar18 / (fVar21 * 100.0 + 1.0);
          fVar17 = fVar17 + fVar18 / (1.0 - fVar21 * 0.99);
          param_1[7] = (fVar20 - *(float *)(lVar14 + -0xc + lVar2)) * fVar21 + param_1[7];
          param_1[8] = (fVar17 - *(float *)(lVar14 + -8 + lVar2)) * fVar21 + param_1[8];
          lVar3 = *(longlong *)(param_1 + 2);
          *(float *)(lVar14 + 4 + lVar3) = fVar20;
          *(float *)(lVar14 + 8 + lVar3) = fVar17;
          fVar21 = *(float *)(lVar14 + 0xc + lVar3);
          fVar18 = *(float *)(*(longlong *)(param_1 + 2) + 0x10 + lVar14) -
                   *(float *)(lVar14 + lVar3);
          param_1[6] = fVar18 * fVar21 + param_1[6];
          fVar20 = fVar20 + fVar18 / (fVar21 * 100.0 + 1.0);
          fVar17 = fVar17 + fVar18 / (1.0 - fVar21 * 0.99);
          param_1[7] = (fVar20 - *(float *)(lVar14 + 4 + lVar3)) * fVar21 + param_1[7];
          lVar2 = lVar14 + 8;
          lVar14 = lVar14 + 0x40;
          param_1[8] = (fVar17 - *(float *)(lVar2 + lVar3)) * fVar21 + param_1[8];
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      if ((longlong)uVar13 < lVar7) {
        lVar8 = uVar13 << 4;
        do {
          lVar2 = *(longlong *)(param_1 + 2);
          uVar13 = uVar13 + 1;
          fVar21 = *(float *)(lVar8 + 0xc + lVar2);
          *(float *)(lVar8 + 4 + lVar2) = fVar20;
          *(float *)(lVar8 + 8 + lVar2) = fVar17;
          fVar18 = *(float *)(lVar8 + 0x10 + *(longlong *)(param_1 + 2)) - *(float *)(lVar8 + lVar2)
          ;
          param_1[6] = fVar18 * fVar21 + param_1[6];
          fVar20 = fVar20 + fVar18 / (fVar21 * 100.0 + 1.0);
          fVar17 = fVar17 + fVar18 / (1.0 - fVar21 * 0.99);
          param_1[7] = (fVar20 - *(float *)(lVar8 + 4 + lVar2)) * fVar21 + param_1[7];
          lVar14 = lVar8 + 8;
          lVar8 = lVar8 + 0x10;
          param_1[8] = (fVar17 - *(float *)(lVar14 + lVar2)) * fVar21 + param_1[8];
        } while ((longlong)uVar13 < lVar7);
      }
      bVar4 = true;
      pfVar12 = (float *)(lVar7 * 0x10 + *(longlong *)(param_1 + 2));
      *pfVar12 = param_3;
      pfVar12[1] = fVar20;
      pfVar12[2] = fVar17;
      lVar7 = *(longlong *)(param_1 + 2);
      lVar8 = (longlong)(int)param_1[4];
      fVar17 = *(float *)(lVar7 + -0xc + lVar8 * 0x10);
      fVar21 = *(float *)(lVar7 + -0x10 + lVar8 * 0x10);
      fVar20 = *(float *)(lVar7 + -8 + lVar8 * 0x10);
      if ((ABS(fVar17) <= 1e-08) || (ABS(fVar20) <= 1e-08)) {
        bVar4 = false;
      }
      if (((1e-08 < ABS(fVar21 - fVar17)) && (1e-08 < ABS(fVar21 - fVar20))) && (bVar4)) {
        return;
      }
    }
  }
  param_1[4] = 0.0;
  if (((int)param_1[5] < 0) && (param_1[5] != 0.0)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 2,0);
  }
  return;
}



// FUNCTION 1422a6000 FUN_1422a6000 body=65 status=ok
// SIG undefined FUN_1422a6000(void)

void FUN_1422a6000(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x718);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x48) != 0)) {
    lVar1 = FUN_1423ac7e0();
    if (lVar1 == 0) {
      FUN_1423b9af0(*(undefined8 *)(param_1 + 0x10),1);
      return;
    }
  }
  return;
}



// FUNCTION 1422a6050 FUN_1422a6050 body=63 status=ok
// SIG undefined FUN_1422a6050(void)

void FUN_1422a6050(longlong param_1)

{
  FUN_142223710();
  if (*(char *)(param_1 + 0x460) != '\0') {
    AActor::SetActorTickEnabled(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x0001422a6082. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x468) + 0x358))(*(longlong **)(param_1 + 0x468),0);
    return;
  }
  return;
}



// FUNCTION 1422a6090 BinarySearchMarkerIndex body=83 status=ok
// SIG undefined BinarySearchMarkerIndex(void)

ulonglong FTimeStretchCurveInstance::BinarySearchMarkerIndex
                    (undefined8 param_1,float param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar5 = (int)param_3[1] + -2;
  uVar4 = 0xffffffff;
  if (-1 < iVar5) {
    do {
      iVar3 = (iVar5 + iVar6) / 2;
      uVar4 = (ulonglong)iVar3;
      fVar1 = *(float *)(*param_3 + uVar4 * 4);
      fVar2 = *(float *)(*param_3 + 4 + uVar4 * 4);
      if ((fVar1 <= param_2) && (param_2 <= fVar2)) break;
      if (param_2 <= fVar2) {
        if (fVar1 <= param_2) break;
        iVar5 = iVar3 + -1;
      }
      else {
        iVar6 = iVar3 + 1;
      }
    } while (iVar6 <= iVar5);
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1422a60f0 FUN_1422a60f0 body=90 status=ok
// SIG undefined FUN_1422a60f0(void)

void FUN_1422a60f0(longlong param_1)

{
  FUN_1422b2430();
  *(undefined8 *)(param_1 + 0xc4) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0x24);
  *(undefined8 *)(param_1 + 0xdc) = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x77) = 1;
  return;
}



// FUNCTION 1422a6150 FUN_1422a6150 body=108 status=ok
// SIG undefined FUN_1422a6150(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1422a6150(longlong param_1)

{
  FUN_1422b2430();
  *(undefined8 *)(param_1 + 0xc4) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d98;
  *(undefined8 *)(param_1 + 0xd0) = DAT_1468b5da0;
  *(undefined4 *)(param_1 + 0xd8) = DAT_1468b5da8;
  *(undefined8 *)(param_1 + 0xdc) = DAT_1464aa788;
  *(undefined4 *)(param_1 + 0xe4) = DAT_1464aa790;
  *(undefined1 *)(param_1 + 0x77) = 0;
  return;
}



// FUNCTION 1422a61c0 FUN_1422a61c0 body=446 status=ok
// SIG undefined FUN_1422a61c0(void)

void FUN_1422a61c0(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  iVar1 = *(int *)(param_2 + 0x160);
  uVar8 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar9 = uVar8;
  if (*(int *)((longlong)param_1 + 0xc) != iVar1) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1,iVar1);
    uVar9 = (ulonglong)*(uint *)(param_1 + 1);
  }
  iVar4 = (int)uVar9 + iVar1;
  *(int *)(param_1 + 1) = iVar4;
  if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1);
  }
  uVar9 = uVar8;
  uVar10 = uVar8;
  if (0 < (longlong)iVar1) {
    do {
      plVar2 = *(longlong **)(param_3 + 0x30);
      for (plVar7 = plVar2; plVar7 != plVar2 + *(int *)(param_3 + 0x38); plVar7 = plVar7 + 1) {
        if (*plVar7 == *(longlong *)(uVar10 + *(longlong *)(param_2 + 0x158))) {
          uVar6 = (undefined4)((longlong)plVar7 - (longlong)plVar2 >> 3);
          goto LAB_1422a6257;
        }
      }
      uVar6 = 0xffffffff;
LAB_1422a6257:
      *(undefined4 *)(*param_1 + uVar9 * 4) = uVar6;
      uVar9 = uVar9 + 1;
      uVar10 = uVar10 + 0x10;
    } while ((longlong)uVar9 < (longlong)iVar1);
  }
  iVar1 = *(int *)(param_3 + 0x38);
  if (*(int *)(param_3 + 0x58) != iVar1) {
    *(undefined4 *)(param_3 + 0x58) = 0;
    uVar9 = uVar8;
    if (*(int *)(param_3 + 0x5c) != iVar1) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_3 + 0x50,iVar1);
      uVar9 = (ulonglong)*(uint *)(param_3 + 0x58);
    }
    iVar4 = (int)uVar9 + iVar1;
    *(int *)(param_3 + 0x58) = iVar4;
    if (*(int *)(param_3 + 0x5c) < iVar4) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_3 + 0x50);
    }
    *(undefined4 *)(param_3 + 0x68) = 0;
    uVar9 = uVar8;
    if (*(int *)(param_3 + 0x6c) != iVar1) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_3 + 0x60,iVar1);
      uVar9 = (ulonglong)*(uint *)(param_3 + 0x68);
    }
    iVar4 = (int)uVar9 + iVar1;
    *(int *)(param_3 + 0x68) = iVar4;
    if (*(int *)(param_3 + 0x6c) < iVar4) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_3 + 0x60);
    }
    if (0 < iVar1) {
      do {
        plVar7 = *(longlong **)(param_3 + 0x70);
        plVar2 = plVar7 + *(int *)(param_3 + 0x78);
        lVar3 = *(longlong *)(*(longlong *)(param_3 + 0x30) + uVar8 * 8);
        for (; plVar7 != plVar2; plVar7 = plVar7 + 1) {
          if (*plVar7 == lVar3) {
            uVar5 = 1;
            goto LAB_1422a6310;
          }
        }
        uVar5 = 0;
LAB_1422a6310:
        *(undefined1 *)(uVar8 + *(longlong *)(param_3 + 0x50)) = uVar5;
        plVar7 = *(longlong **)(param_3 + 0x80);
        plVar2 = plVar7 + *(int *)(param_3 + 0x88);
        for (; plVar7 != plVar2; plVar7 = plVar7 + 1) {
          if (*plVar7 == lVar3) {
            uVar5 = 1;
            goto LAB_1422a6340;
          }
        }
        uVar5 = 0;
LAB_1422a6340:
        *(undefined1 *)(uVar8 + *(longlong *)(param_3 + 0x60)) = uVar5;
        uVar8 = uVar8 + 1;
      } while ((longlong)uVar8 < (longlong)iVar1);
    }
  }
  return;
}



// FUNCTION 1422a6380 FUN_1422a6380 body=778 status=ok
// SIG undefined FUN_1422a6380(void)

int FUN_1422a6380(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int local_res8 [2];
  undefined8 local_res10;
  undefined1 local_res18 [8];
  undefined1 *local_68;
  int *local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  uint local_40;
  uint local_3c;
  
  iVar1 = *(int *)(param_2 + 0x160);
  puVar11 = (undefined4 *)0x0;
  local_58 = 0;
  local_50 = 0;
  local_40 = 0;
  local_48 = 0;
  local_3c = 0;
  puVar7 = puVar11;
  puVar10 = puVar11;
  if (iVar1 != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(&local_48,iVar1);
    puVar10 = (undefined4 *)(ulonglong)local_3c;
    puVar7 = (undefined4 *)(ulonglong)local_40;
  }
  local_40 = iVar1 + (int)puVar7;
  if ((int)puVar10 < (int)local_40) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_48);
  }
  if (0 < iVar1) {
    local_res10 = 0;
    puVar7 = puVar11;
    puVar10 = puVar11;
    do {
      uVar8 = 0xffffffff;
      lVar2 = *(longlong *)((longlong)puVar7 + *(longlong *)(param_2 + 0x158));
      if (lVar2 != 0) {
        if (*(int *)(param_1 + 0xf0) != *(int *)(param_1 + 0x11c)) {
          lVar5 = *(longlong *)(param_1 + 0x128);
          if (*(longlong *)(param_1 + 0x128) == 0) {
            lVar5 = param_1 + 0x120;
          }
          iVar4 = *(int *)(lVar5 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                                   (longlong)*(int *)(param_1 + 0x130) - 1U) * 4);
          if (iVar4 != -1) {
            do {
              puVar9 = (undefined4 *)(*(longlong *)(param_1 + 0xe8) + (longlong)iVar4 * 0x18);
              if (*(longlong *)(*(longlong *)(param_1 + 0xe8) + (longlong)iVar4 * 0x18) == lVar2) {
                if (iVar4 != -1) goto LAB_1422a64a2;
                break;
              }
              iVar4 = puVar9[4];
            } while (iVar4 != -1);
          }
        }
        puVar9 = puVar11;
LAB_1422a64a2:
        puVar6 = puVar9 + 2;
        if (puVar9 == (undefined4 *)0x0) {
          puVar6 = puVar11;
        }
        if (puVar6 != (undefined4 *)0x0) {
          uVar8 = *puVar6;
        }
      }
      *(undefined4 *)(local_48 + (longlong)puVar10 * 4) = uVar8;
      puVar7 = puVar7 + 4;
      puVar10 = (undefined4 *)((longlong)puVar10 + 1);
    } while ((longlong)puVar10 < (longlong)iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x80);
  uVar3 = local_50 >> 0x20;
  local_50 = local_50 & 0xffffffff00000000;
  puVar7 = puVar11;
  if ((int)uVar3 != iVar1) {
    TArray<float,FDefaultAllocator>::ResizeTo(&local_58,iVar1);
    puVar7 = (undefined4 *)(local_50 & 0xffffffff);
  }
  iVar4 = iVar1 + (int)puVar7;
  local_50 = CONCAT44(local_50._4_4_,iVar4);
  if (local_50._4_4_ < iVar4) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_58);
  }
  if (0 < iVar1) {
    local_res10 = 0;
    puVar7 = puVar11;
    puVar10 = puVar11;
    do {
      uVar8 = 0xffffffff;
      lVar2 = *(longlong *)((longlong)puVar7 + *(longlong *)(param_1 + 0x78));
      if (lVar2 != 0) {
        if (*(int *)(param_2 + 0x1d0) != *(int *)(param_2 + 0x1fc)) {
          lVar5 = *(longlong *)(param_2 + 0x208);
          if (*(longlong *)(param_2 + 0x208) == 0) {
            lVar5 = param_2 + 0x200;
          }
          iVar4 = *(int *)(lVar5 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                                   (longlong)*(int *)(param_2 + 0x210) - 1U) * 4);
          if (iVar4 != -1) {
            do {
              puVar9 = (undefined4 *)(*(longlong *)(param_2 + 0x1c8) + (longlong)iVar4 * 0x18);
              if (*(longlong *)(*(longlong *)(param_2 + 0x1c8) + (longlong)iVar4 * 0x18) == lVar2) {
                if (iVar4 != -1) goto LAB_1422a65b2;
                break;
              }
              iVar4 = puVar9[4];
            } while (iVar4 != -1);
          }
        }
        puVar9 = puVar11;
LAB_1422a65b2:
        puVar6 = puVar9 + 2;
        if (puVar9 == (undefined4 *)0x0) {
          puVar6 = puVar11;
        }
        if (puVar6 != (undefined4 *)0x0) {
          uVar8 = *puVar6;
        }
      }
      puVar7 = puVar7 + 4;
      *(undefined4 *)(local_58 + (longlong)puVar10 * 4) = uVar8;
      puVar10 = (undefined4 *)((longlong)puVar10 + 1);
    } while ((longlong)puVar10 < (longlong)iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x2e8);
  *(int *)(param_1 + 0x2e8) = iVar1 + 1;
  if (*(int *)(param_1 + 0x2ec) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1 + 0x2e0,iVar1);
  }
  FUN_140870120((longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 0x2e0),&local_58);
  local_res8[0] = iVar1;
  FWeakObjectPtr::operator=(local_res18,param_2);
  local_68 = local_res18;
  local_60 = local_res8;
  FUN_14229efb0(param_1 + 0x2f0,&local_res10,&local_68,0);
  iVar1 = local_res8[0];
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  return iVar1;
}



// FUNCTION 1422a6690 FUN_1422a6690 body=773 status=ok
// SIG undefined FUN_1422a6690(void)

void FUN_1422a6690(longlong param_1,char param_2)

{
  uint *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint *puVar7;
  ulonglong uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  uint *puVar16;
  longlong *plVar17;
  undefined1 local_res10 [8];
  undefined8 local_a8;
  uint *puStack_a0;
  uint local_98;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  uint uStack_7c;
  uint *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  plVar2 = (longlong *)(param_1 + 0x278);
  FUN_1406c5d90(plVar2,0);
  puVar16 = *(uint **)(param_1 + 0x268);
  puVar1 = puVar16 + (longlong)*(int *)(param_1 + 0x270) * 6;
  for (; puVar16 != puVar1; puVar16 = puVar16 + 6) {
    lVar13 = *(longlong *)(puVar16 + 2);
    lVar3 = lVar13 + (longlong)(int)puVar16[4] * 8;
    puVar9 = puVar16;
    puVar7 = puStack_a0;
    for (; puStack_a0 = puVar9, lVar13 != lVar3; lVar13 = lVar13 + 8) {
      local_a8 = lVar13;
      TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
                (plVar2,local_res10,&local_a8,0);
      puVar9 = puStack_a0;
      puVar7 = puStack_a0;
    }
    puStack_a0 = puVar7;
  }
  if (param_2 != '\0') {
    plVar17 = *(longlong **)(param_1 + 0x268);
    plVar4 = plVar17 + (longlong)*(int *)(param_1 + 0x270) * 3;
    if (plVar17 != plVar4) {
      puVar1 = (uint *)(param_1 + 0x288);
      plVar14 = plVar17 + 2;
      do {
        lVar3 = *plVar14;
        *(int *)plVar14 = 0;
        if (*(int *)((longlong)plVar14 + 4) != (int)lVar3) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(plVar14 + -1);
        }
        uVar6 = *(uint *)(param_1 + 0x2a0);
        local_a8 = 0x100000000;
        uStack_94 = 0;
        iStack_90 = 0;
        if (uVar6 != 0) {
          puVar16 = *(uint **)(param_1 + 0x298);
          if (*(uint **)(param_1 + 0x298) == (uint *)0x0) {
            puVar16 = puVar1;
          }
          uVar10 = *puVar16;
          iVar11 = 0;
          while (uVar10 == 0) {
            iStack_90 = iStack_90 + 0x20;
            uVar8 = (ulonglong)local_a8 >> 0x20;
            local_a8 = CONCAT44((int)uVar8,iVar11 + 1);
            if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar11)
            goto LAB_1422a681f;
            uVar10 = puVar16[(longlong)iVar11 + 1];
            iVar11 = iVar11 + 1;
          }
          uVar10 = -uVar10 & uVar10;
          iVar11 = 0x1f;
          if (uVar10 != 0) {
            for (; uVar10 >> iVar11 == 0; iVar11 = iVar11 + -1) {
            }
          }
          local_a8 = CONCAT44(uVar10,(undefined4)local_a8);
          if (uVar10 == 0) {
            iVar11 = 0x20;
          }
          else {
            iVar11 = 0x1f - iVar11;
          }
          uStack_94 = (iStack_90 - iVar11) + 0x1f;
          if ((int)uVar6 < (int)uStack_94) {
LAB_1422a681f:
            uStack_94 = uVar6;
          }
        }
        uVar10 = *(uint *)(param_1 + 0x2a0);
        uStack_70 = CONCAT44(uStack_94,0xffffffff);
        local_68 = CONCAT44(uStack_8c,iStack_90);
        local_98 = -1 << ((byte)uVar10 & 0x1f);
        uStack_58 = local_a8;
        lVar3 = uStack_58;
        uVar15 = uVar10 & 0xffffffe0;
        uStack_58._0_4_ = (undefined4)local_a8;
        uStack_58._4_4_ = (uint)((ulonglong)local_a8 >> 0x20);
        uStack_80 = (undefined4)uStack_58;
        uStack_7c = uStack_58._4_4_;
        puStack_a0 = puVar1;
        uStack_94 = uVar10;
        local_78 = puVar1;
        local_60 = plVar2;
        uStack_58 = lVar3;
        puStack_50 = puVar1;
        uStack_48 = uStack_70;
        uStack_40 = local_68;
        local_88 = plVar2;
        if (uVar10 != uVar6) {
          puVar16 = *(uint **)(param_1 + 0x298);
          if (*(uint **)(param_1 + 0x298) == (uint *)0x0) {
            puVar16 = puVar1;
          }
          uVar12 = puVar16[(int)uVar10 >> 5] & local_98;
          iVar11 = (int)uVar10 >> 5;
          while (uVar12 == 0) {
            uVar15 = uVar15 + 0x20;
            if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar11)
            goto LAB_1422a68e8;
            uVar12 = puVar16[(longlong)iVar11 + 1];
            local_98 = 0xffffffff;
            iVar11 = iVar11 + 1;
          }
          uVar12 = -uVar12 & uVar12;
          iVar11 = 0x1f;
          if (uVar12 != 0) {
            for (; uVar12 >> iVar11 == 0; iVar11 = iVar11 + -1) {
            }
          }
          if (uVar12 == 0) {
            iVar11 = 0x20;
          }
          else {
            iVar11 = 0x1f - iVar11;
          }
          uStack_94 = (uVar15 - iVar11) + 0x1f;
          uVar10 = uStack_94;
          if ((int)uVar6 < (int)uStack_94) {
LAB_1422a68e8:
            uStack_94 = uVar6;
            uVar10 = uVar6;
          }
        }
        while( true ) {
          if (((uStack_70._4_4_ == uVar10) && (local_78 == puVar1)) && (local_88 == plVar2)) break;
          puVar5 = (undefined8 *)(*local_88 + (longlong)(int)uStack_70._4_4_ * 0x18);
          if (puVar5[1] == *plVar17) {
            iVar11 = (int)*plVar14;
            *(int *)plVar14 = iVar11 + 1;
            if (*(int *)((longlong)plVar14 + 4) < iVar11 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar14 + -1,iVar11)
              ;
            }
            *(undefined8 *)(plVar14[-1] + (longlong)iVar11 * 8) = *puVar5;
          }
          uStack_70 = CONCAT44(uStack_70._4_4_,(uint)uStack_70 & ~uStack_7c);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
        }
        plVar17 = plVar17 + 3;
        plVar14 = plVar14 + 3;
      } while (plVar17 != plVar4);
    }
  }
  return;
}



// FUNCTION 1422a69b0 Clamp_P_Target body=30 status=ok
// SIG undefined Clamp_P_Target(void)

float FTimeStretchCurveInstance::Clamp_P_Target(longlong param_1,float param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if ((0.0 <= param_2) &&
     (fVar1 = *(float *)(*(longlong *)(param_1 + 0x20) + -4 + (longlong)*(int *)(param_1 + 0x28) * 4
                        ), param_2 <= fVar1)) {
    fVar1 = param_2;
  }
  return fVar1;
}



// FUNCTION 1422a69d0 DestroyRenderState_Concurrent body=31 status=ok
// SIG undefined DestroyRenderState_Concurrent(void)

void UInteractiveFoliageComponent::DestroyRenderState_Concurrent(longlong param_1)

{
  FAnimInstanceProxy::ClearObjects();
  *(undefined8 *)(param_1 + 0x708) = 0;
  return;
}



// FUNCTION 1422a69f0 FUN_1422a69f0 body=562 status=ok
// SIG undefined FUN_1422a69f0(void)

void FUN_1422a69f0(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  uVar2 = *(uint *)(param_1 + 5);
  puVar1 = (uint *)(param_1 + 2);
  uStack_94 = 1;
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar2 != 0) {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar3 = *puVar10;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar8 = local_98 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar8;
      if (bVar4) goto LAB_1422a6abe;
      uVar3 = puVar10[lVar5 + 1];
    }
    uStack_94 = -uVar3 & uVar3;
    iVar8 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_84 = (iStack_80 - iVar8) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_1422a6abe:
      uStack_84 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_1 + 5);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar9 = uVar3 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar1;
  local_50 = param_1;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar3;
  if (uVar3 != uVar2) {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar7 = puVar10[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar8 = (int)uVar3 >> 5;
    while (uVar7 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_1422a6b83;
      uVar7 = puVar10[(longlong)iVar8 + 1];
      iVar8 = iVar8 + 1;
    }
    uVar7 = -uVar7 & uVar7;
    iVar8 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_84 = (uVar9 - iVar8) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_1422a6b83:
      uStack_84 = uVar2;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar1))) {
    lVar5 = *param_1 + (longlong)(int)uStack_5c * 0x18;
    plVar6 = *(longlong **)(*param_1 + 8 + (longlong)(int)uStack_5c * 0x18);
    if (plVar6 != (longlong *)0x0) {
      if (plVar6[5] != 0) {
        plVar6[5] = 0;
        plVar6 = *(longlong **)(lVar5 + 8);
        (**(code **)(*plVar6 + 0x298))(plVar6,2);
        plVar6 = *(longlong **)(lVar5 + 8);
      }
      (**(code **)(*plVar6 + 0x280))(plVar6,param_2);
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  FUN_1422a74b0(param_1,0);
  return;
}



// FUNCTION 1422a6c30 CollectMarkersInRange body=260 status=ok
// SIG undefined CollectMarkersInRange(void)

void FMarkerSyncData::CollectMarkersInRange
               (longlong *param_1,float param_2,float param_3,longlong *param_4,float param_5)

{
  undefined8 *puVar1;
  float fVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  puVar4 = (undefined8 *)*param_1;
  puVar5 = puVar4 + (longlong)(int)param_1[1] * 2;
  for (; puVar4 != puVar5; puVar4 = puVar4 + 2) {
    fVar2 = *(float *)(puVar4 + 1);
    if ((param_2 <= fVar2) && (fVar2 < param_3)) {
      iVar3 = (int)param_4[1];
      lVar6 = (longlong)iVar3;
      *(int *)(param_4 + 1) = iVar3 + 1;
      if (*(int *)((longlong)param_4 + 0xc) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_4,iVar3);
      }
      puVar1 = (undefined8 *)(*param_4 + lVar6 * 0x10);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(*param_4 + lVar6 * 0x10) = *puVar4;
      *(float *)(*param_4 + 8 + lVar6 * 0x10) = param_5 - (fVar2 - param_2);
    }
  }
  return;
}



// FUNCTION 1422a6d40 CollectUniqueNames body=197 status=ok
// SIG undefined CollectUniqueNames(void)

void FMarkerSyncData::CollectUniqueNames(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  plVar1 = param_1 + 2;
  if ((int)param_1[1] < 1) {
    *(undefined4 *)(param_1 + 3) = 0;
    if (*(int *)((longlong)param_1 + 0x1c) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
      return;
    }
  }
  else {
    AlgoImpl::
    IntroSortInternal<FAnimSyncMarker,FIdentityFunctor,TDereferenceWrapper<FAnimSyncMarker,TLess<FAnimSyncMarker>_>_>
              (*param_1,(longlong)(int)param_1[1],local_res8[0],local_res8);
    *(undefined4 *)(param_1 + 3) = 0;
    if ((*(int *)((longlong)param_1 + 0x1c) < 0) && (*(int *)((longlong)param_1 + 0x1c) != 0)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
    }
    iVar2 = (int)param_1[1];
    if (*(int *)((longlong)param_1 + 0x1c) < iVar2) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,iVar2);
      iVar2 = (int)param_1[1];
    }
    lVar3 = *param_1;
    lVar4 = (longlong)iVar2 * 0x10 + lVar3;
    for (; lVar3 != lVar4; lVar3 = lVar3 + 0x10) {
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(plVar1,lVar3);
    }
  }
  return;
}



// FUNCTION 1422a6e10 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
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
      TSet<TTuple<FWeakObjectPtr,int>,TDefaultMapHashableKeyFuncs<FWeakObjectPtr,int,0>,FDefaultSetAllocator>
      ::Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1422a6ec0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FName,FSmartNameMapping>,TDefaultMapHashableKeyFuncs<FName,FSmartNameMapping,0>,FDefaultSetAllocator>
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
      TSet<TTuple<FName,FDynamicClassStaticData>,TDefaultMapHashableKeyFuncs<FName,FDynamicClassStaticData,0>,FDefaultSetAllocator>
      ::Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1422a6f70 FUN_1422a6f70 body=181 status=ok
// SIG undefined FUN_1422a6f70(void)

ulonglong FUN_1422a6f70(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  byte bVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)(param_1 + 200);
  uVar3 = (ulonglong)*(int *)(param_1 + 0xd0);
  bVar4 = 1;
  plVar1 = plVar5 + uVar3 * 3;
  for (; plVar5 != plVar1; plVar5 = plVar5 + 3) {
    plVar2 = (longlong *)*plVar5;
    if (*(int *)(param_1 + 0xd0) < 2) {
      if (plVar2 != (longlong *)0x0) goto LAB_1422a6fc9;
LAB_1422a6fec:
      uVar3 = uVar3 & 0xffffffffffffff00;
    }
    else {
      if (plVar2 != (longlong *)0x0) {
LAB_1422a6fc9:
        if (((param_2 != 0) && (uVar3 = (**(code **)(*plVar2 + 0x290))(plVar2), (char)uVar3 == '\0')
            ) || (uVar3 = 0, *(byte *)((longlong)plVar2 + 0x17c) != param_2)) goto LAB_1422a6fec;
      }
      uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
    }
    bVar4 = bVar4 & (byte)uVar3;
    if (bVar4 == 0) goto LAB_1422a700a;
  }
  if (*(int *)(param_1 + 0xd0) < 1) {
LAB_1422a700a:
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
    uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3;
}



// FUNCTION 1422a7030 Convert_P_Original_To_Target body=61 status=ok
// SIG undefined Convert_P_Original_To_Target(void)

float FTimeStretchCurveInstance::Convert_P_Original_To_Target
                (longlong param_1,int param_2,float param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar3 = (longlong)param_2;
  lVar2 = *(longlong *)(param_1 + 0x20);
  return ((param_3 - *(float *)(lVar1 + lVar3 * 4)) /
         (*(float *)(lVar1 + 4 + lVar3 * 4) - *(float *)(lVar1 + lVar3 * 4))) *
         (*(float *)(lVar2 + 4 + lVar3 * 4) - *(float *)(lVar2 + lVar3 * 4)) +
         *(float *)(lVar2 + lVar3 * 4);
}



// FUNCTION 1422a7070 Convert_P_Target_To_Original body=61 status=ok
// SIG undefined Convert_P_Target_To_Original(void)

float FTimeStretchCurveInstance::Convert_P_Target_To_Original
                (longlong param_1,int param_2,float param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  lVar3 = (longlong)param_2;
  lVar2 = *(longlong *)(param_1 + 0x10);
  return ((param_3 - *(float *)(lVar1 + lVar3 * 4)) /
         (*(float *)(lVar1 + 4 + lVar3 * 4) - *(float *)(lVar1 + lVar3 * 4))) *
         (*(float *)(lVar2 + 4 + lVar3 * 4) - *(float *)(lVar2 + lVar3 * 4)) +
         *(float *)(lVar2 + lVar3 * 4);
}



// FUNCTION 1422a70b0 FUN_1422a70b0 body=366 status=ok
// SIG undefined FUN_1422a70b0(void)

undefined8 * FUN_1422a70b0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x850);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14083cb80(puVar1,param_1);
    *puVar1 = &PTR_FUN_145025b90;
    puVar1[0xd7] = 0;
    puVar1[0xd8] = 0;
    puVar1[0xdb] = 0;
    puVar1[0xdc] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x6ec) = 0;
    *(undefined4 *)(puVar1 + 0xdd) = 0xffffffff;
    puVar1[0xdf] = 0;
    *(undefined4 *)(puVar1 + 0xe0) = 0;
    puVar1[0xe1] = 0;
    puVar1[0xe3] = 0;
    puVar1[0xe4] = 0;
    puVar1[0xe5] = 0;
    puVar1[0xe6] = 0;
    *(undefined1 *)(puVar1 + 0xe7) = 0;
    puVar1[0xe2] = &PTR_ReadLocalVoiceData_145025aa0;
    puVar1[0xe9] = 0;
    *(undefined1 *)(puVar1 + 0xea) = 0;
    *(undefined4 *)(puVar1 + 0xe8) = 0xffffffff;
    puVar1[0xeb] = 0;
    *(undefined1 *)(puVar1 + 0xec) = 0;
    puVar1[0xf0] = 0;
    puVar1[0xee] = 0;
    *(undefined4 *)(puVar1 + 0xef) = 0;
    puVar1[0xf1] = 0;
    puVar1[0xf3] = 0;
    puVar1[0xf4] = 0;
    puVar1[0xf9] = 0;
    puVar1[0xfa] = 0;
    puVar1[0xff] = 0;
    puVar1[0x100] = 0;
    puVar1[0x104] = 0;
    puVar1[0x105] = 0;
    *(undefined4 *)(puVar1 + 0x106) = 0xfffffffe;
    *(undefined4 *)(puVar1 + 0x107) = 0xfffffffe;
    *(undefined1 *)((longlong)puVar1 + 0x846) = 0;
    *(undefined4 *)(puVar1 + 0x108) = 0x3f800000;
    *(undefined2 *)((longlong)puVar1 + 0x844) = 0x101;
    puVar1[0xed] = puVar1;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1422a7220 FUN_1422a7220 body=401 status=ok
// SIG undefined FUN_1422a7220(void)

void FUN_1422a7220(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  
  lVar7 = (longlong)param_2;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar7 * 8);
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    lVar3 = *(longlong *)(param_1 + 0x70);
    if (*(longlong *)(param_1 + 0x70) == 0) {
      lVar3 = param_1 + 0x68;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                             (longlong)*(int *)(param_1 + 0x78) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar2 * 0x18) == lVar1) {
          if (iVar2 != -1) {
            TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
            ::Remove(param_1 + 0x30);
          }
          break;
        }
        iVar2 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x10 + (longlong)iVar2 * 0x18);
      } while (iVar2 != -1);
    }
  }
  iVar2 = *(int *)(param_1 + 0x28);
  iVar9 = param_2 + 1;
  iVar4 = (iVar2 - param_2) + -1;
  if (iVar4 != 0) {
    _guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(param_1 + 0x20) + lVar7 * 8),
               (void *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar9 * 8),(longlong)iVar4 << 3);
    iVar2 = *(int *)(param_1 + 0x28);
  }
  *(int *)(param_1 + 0x28) = iVar2 + -1;
  TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x20);
  plVar8 = *(longlong **)(param_1 + 0x10);
  plVar6 = plVar8 + (longlong)*(int *)(param_1 + 0x18) * 6;
  if (plVar8 != plVar6) {
    plVar5 = plVar8 + 3;
    do {
      iVar2 = (int)*plVar5;
      iVar4 = (iVar2 - param_2) + -1;
      if (iVar4 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(plVar5[-1] + lVar7),(void *)((longlong)iVar9 + plVar5[-1]),
                   (longlong)iVar4);
        iVar2 = (int)*plVar5;
      }
      *(int *)plVar5 = iVar2 + -1;
      TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(plVar5 + -1);
      iVar2 = (int)plVar5[-2];
      iVar4 = (iVar2 - param_2) + -1;
      if (iVar4 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(lVar7 * 0x30 + *plVar8),(void *)((longlong)iVar9 * 0x30 + *plVar8),
                   (longlong)iVar4 * 0x30);
        iVar2 = (int)plVar5[-2];
      }
      *(int *)(plVar5 + -2) = iVar2 + -1;
      TArray<FCloudFile,FDefaultAllocator>::ResizeShrink(plVar8);
      plVar8 = plVar8 + 6;
      plVar5 = plVar5 + 6;
    } while (plVar8 != plVar6);
  }
  return;
}



// FUNCTION 1422a73c0 FUN_1422a73c0 body=44 status=ok
// SIG undefined FUN_1422a73c0(void)

void FUN_1422a73c0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
    param_2[7] = 0;
  }
  return;
}



// FUNCTION 1422a73f0 FUN_1422a73f0 body=192 status=ok
// SIG undefined FUN_1422a73f0(void)

ulonglong FUN_1422a73f0(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 local_res8;
  
  if (param_2 == 0) {
    return CONCAT71((int7)((ulonglong)**(longlong **)(param_3 + 0x158) >> 8),
                    **(longlong **)(param_1 + 0x78) == **(longlong **)(param_3 + 0x158));
  }
  lVar3 = *(longlong *)(param_1 + 0x78);
  local_res8 = *(undefined8 *)(lVar3 + (longlong)param_2 * 0x10);
  uVar5 = FReferenceSkeleton::FindBoneIndex(param_3 + 0x138,&local_res8);
  if ((int)uVar5 != -1) {
    lVar4 = *(longlong *)(param_3 + 0x158);
    iVar1 = *(int *)(lVar3 + 8 + (longlong)param_2 * 0x10);
    uVar5 = (longlong)(int)uVar5 * 0x10;
    iVar2 = *(int *)(uVar5 + 8 + lVar4);
    while( true ) {
      if ((iVar1 == -1) || (iVar2 == -1)) {
        return CONCAT71((int7)(uVar5 >> 8),iVar1 == iVar2);
      }
      uVar5 = *(ulonglong *)(lVar4 + (longlong)iVar2 * 0x10);
      if (*(ulonglong *)(lVar3 + (longlong)iVar1 * 0x10) != uVar5) break;
      iVar1 = *(int *)(lVar3 + 8 + (longlong)iVar1 * 0x10);
      iVar2 = *(int *)(lVar4 + 8 + (longlong)iVar2 * 0x10);
    }
  }
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 1422a74b0 FUN_1422a74b0 body=181 status=ok
// SIG undefined FUN_1422a74b0(void)

void FUN_1422a74b0(longlong param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  cVar1 = TSet<TTuple<ULandscapeLayerInfoObject_*,float>,TDefaultMapHashableKeyFuncs<ULandscapeLayerInfoObject_*,float,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,param_2,1);
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



// FUNCTION 1422a7570 Empty body=202 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FName,FCurveMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
     ::Empty(longlong param_1,int param_2)

{
  uint uVar1;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      if (*(longlong *)((longlong)local_1c * 0x30 + *local_38 + 0x10) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar1 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar1) {
    *(uint *)(param_1 + 0x2c) = uVar1;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  return;
}



// FUNCTION 1422a7640 Empty body=191 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FName,FSmartNameMapping>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong param_1,int param_2)

{
  uint uVar1;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      FSmartNameMapping::~FSmartNameMapping((longlong)local_1c * 0x70 + 8 + *local_38);
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar1 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar1) {
    *(uint *)(param_1 + 0x2c) = uVar1;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  return;
}



// FUNCTION 1422a7700 Empty body=132 status=ok
// SIG undefined Empty(void)

void FReferenceSkeleton::Empty(longlong param_1,int param_2)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x10,param_2);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != param_2) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x20,param_2);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x30,param_2);
  }
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x40,param_2);
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x90,param_2);
  return;
}



// FUNCTION 1422a7790 FUN_1422a7790 body=154 status=ok
// SIG undefined FUN_1422a7790(void)

void FUN_1422a7790(longlong *param_1,undefined1 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_142a07000();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_1423b2d70(param_1[4],1);
    }
  }
  lVar3 = param_1[0x72];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar3;
  }
  *(undefined1 *)(lVar3 + 0x760) = param_2;
  return;
}



// FUNCTION 1422a7830 FUN_1422a7830 body=362 status=ok
// SIG undefined FUN_1422a7830(void)

void FUN_1422a7830(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  void *_Src;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 local_res8 [16];
  undefined1 *local_48;
  undefined1 *puStack_40;
  
  iVar6 = *(int *)(param_1 + 0x28);
  puStack_40 = local_res8;
  uVar7 = 0;
  local_48 = &LAB_141f794c0;
  local_res8[0] = 0;
  lVar4 = FUN_1415d8310(&local_48);
  iVar5 = 0;
  plVar1 = (longlong *)(lVar4 + 0x18);
  *(undefined4 *)(lVar4 + 0x20) = 0;
  if ((*(int *)(lVar4 + 0x24) < 0) && (*(int *)(lVar4 + 0x24) != 0)) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(plVar1);
    iVar5 = *(int *)(lVar4 + 0x20);
  }
  if (iVar5 < iVar6) {
    *(int *)(lVar4 + 0x20) = iVar6;
    if (*(int *)(lVar4 + 0x24) < iVar6) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1);
    }
    _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar5 + *plVar1),0,(longlong)(iVar6 - iVar5));
  }
  else if ((iVar6 < iVar5) && (iVar6 != iVar5)) {
    *(int *)(lVar4 + 0x20) = iVar6;
    TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(plVar1);
  }
  uVar8 = uVar7;
  if (0 < (int)param_2[1]) {
    do {
      uVar2 = *(ushort *)(uVar8 + *param_2);
      iVar6 = (int)uVar7;
      if (uVar2 == 0) {
        *(undefined1 *)*plVar1 = 1;
LAB_1422a7975:
        uVar7 = (ulonglong)(iVar6 + 1);
        uVar8 = uVar8 + 2;
      }
      else {
        ((undefined1 *)*plVar1)[uVar2] = 1;
        iVar5 = *(int *)((ulonglong)uVar2 * 0x10 + 8 + *(longlong *)(param_1 + 0x20));
        if (*(char *)((longlong)iVar5 + *plVar1) != '\0') goto LAB_1422a7975;
        iVar3 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
        }
        _Src = (void *)(*param_2 + (longlong)iVar6 * 2);
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)_Src + 2),_Src,(longlong)(iVar3 - iVar6) * 2);
        *(short *)(uVar8 + *param_2) = (short)iVar5;
        *(undefined1 *)((longlong)iVar5 + *plVar1) = 1;
      }
    } while ((int)uVar7 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 1422a79a0 Evaluate body=24 status=ok
// SIG undefined Evaluate(void)

undefined8 FAnimSequencerInstanceProxy::Evaluate(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x710) + 0x18))();
  return 1;
}



// FUNCTION 1422a79d0 FUN_1422a79d0 body=1478 status=ok
// SIG undefined FUN_1422a79d0(void)

void FUN_1422a79d0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 in_stack_ffffffffffffff60;
  undefined4 uVar8;
  undefined8 local_78;
  int local_70;
  int local_6c;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined2 local_28;
  undefined1 local_26;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
  plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 0x708);
  if (plVar7 == (longlong *)0x0) {
    return;
  }
  if ((*(uint *)(plVar7 + 1) >> 0xf & 1) != 0) {
    return;
  }
  lVar5 = UBlendSpaceBase::GetPrivateStaticClass();
  if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    lVar5 = param_2 + 0x20;
    lVar2 = *(longlong *)(param_1 + 0x58);
    lVar6 = param_2 + 8;
    cVar4 = (**(code **)(*plVar7 + 0x290))(plVar7);
    if (cVar4 != '\0') {
      local_68 = *(longlong *)(param_2 + 0x18);
      local_70 = 0;
      local_78 = 0;
      local_6c = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      local_46 = 0;
      iVar1 = *(int *)(local_68 + 8);
      if (0 < iVar1) {
        local_70 = 0;
        FUN_140848c80(&local_78,iVar1);
      }
      local_70 = local_70 + iVar1;
      if (local_6c < local_70) {
        TArray<FTransform,TMemStackAllocator<0>_>::ResizeGrow(&local_78);
      }
      FBaseBlendedCurve<TMemStackAllocator<0>_>::InitFrom(&local_60,lVar5);
      FUN_1422b24a0(lVar6);
      FUN_1422a87c0(plVar7,lVar2 + 0x780,&local_78,&local_60);
      FAnimationRuntime::AccumulateAdditivePose
                (lVar6,&local_78,lVar5,&local_60,0x3f800000,
                 CONCAT44(uVar8,((char)plVar7[0x11] != '\0') + 1));
      return;
    }
    FUN_1422a87c0(plVar7,lVar2 + 0x780,lVar6,lVar5);
    return;
  }
  plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 0x708);
  if (plVar7 == (longlong *)0x0) {
LAB_1422a7ca2:
    plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 0x708);
    if (plVar7 != (longlong *)0x0) {
      lVar5 = FUN_1428ea3a0();
      if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_60 = CONCAT44(*(undefined4 *)(*(longlong *)(param_1 + 0x58) + 0x82c),
                            (undefined4)local_60);
        local_60 = CONCAT71(local_60._1_7_,*(byte *)(*(longlong *)(param_1 + 0x58) + 0x5b8) >> 1) &
                   0xffffffffffffff01;
        local_58 = 0;
        local_50 = 0;
        cVar4 = FAnimTrack::IsAdditive(plVar7 + 0x17);
        if (cVar4 == '\0') goto LAB_1422a7df0;
        FUN_1422b24a0(param_2 + 8);
        cVar4 = FUN_1422513a0(plVar7 + 0x17);
        local_78 = 0;
        local_68 = *(longlong *)(param_2 + 0x18);
        local_6c = 0;
        local_40 = 0;
        local_38 = 0;
        local_30 = 0;
        local_28 = 0;
        local_26 = 0;
        iVar1 = *(int *)(local_68 + 8);
        local_70 = 0;
        if (0 < iVar1) {
          local_70 = 0;
          FUN_140848c80(&local_78,iVar1);
        }
        local_70 = local_70 + iVar1;
        if (local_6c < local_70) {
          TArray<FTransform,TMemStackAllocator<0>_>::ResizeGrow(&local_78);
        }
        FBaseBlendedCurve<TMemStackAllocator<0>_>::InitFrom(&local_40,param_2 + 0x20);
        (**(code **)(*plVar7 + 0x2d8))(plVar7,&local_78,&local_40,&local_60);
        FAnimationRuntime::AccumulateAdditivePose
                  (param_2 + 8,&local_78,param_2 + 0x20,&local_40,0x3f800000,
                   CONCAT44(uVar8,(cVar4 != '\0') + 1));
        goto LAB_1422a7e08;
      }
    }
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x708);
    if (lVar5 != 0) {
      lVar6 = UMaterialInstanceConstant::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        if (*(int *)(lVar5 + 0x180) < 1) {
          return;
        }
        local_68 = *(longlong *)(param_2 + 0x18);
        local_70 = 0;
        local_78 = 0;
        local_6c = 0;
        local_40 = 0;
        local_38 = 0;
        local_30 = 0;
        local_28 = 0;
        local_26 = 0;
        iVar1 = *(int *)(local_68 + 8);
        if (0 < iVar1) {
          local_70 = 0;
          FUN_140848c80(&local_78,iVar1);
        }
        local_70 = local_70 + iVar1;
        if (local_6c < local_70) {
          TArray<FTransform,TMemStackAllocator<0>_>::ResizeGrow(&local_78);
        }
        FBaseBlendedCurve<TMemStackAllocator<0>_>::InitFrom(&local_40,param_2 + 0x20);
        lVar5 = FUN_14225e840(lVar5,*(undefined8 *)(param_1 + 0x48));
        if (lVar5 != 0) {
          FAnimTrack::IsAdditive(lVar5);
        }
        FUN_1422b24a0(&local_78);
        lVar5 = *(longlong *)(param_1 + 0x58);
        FUN_142280970(lVar5,param_1 + 0x48,&local_78,&local_40,*(undefined4 *)(lVar5 + 0x820),
                      param_2 + 8,param_2 + 0x20,*(undefined4 *)(lVar5 + 0x824),
                      *(undefined4 *)(lVar5 + 0x828));
        return;
      }
    }
    if (*(char *)(param_2 + 0x40) == '\0') {
      FUN_1422b24a0(param_2 + 8);
    }
    else {
      FBaseCompactPose<TMemStackAllocator<0>_>::ResetToAdditiveIdentity();
    }
  }
  else {
    lVar5 = UAnimMontage::GetPrivateStaticClass();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_1422a7ca2;
    cVar4 = (**(code **)(*plVar7 + 0x290))(plVar7);
    local_60 = CONCAT71(local_60._1_7_,*(undefined1 *)((longlong)plVar7 + 0x199));
    local_60 = CONCAT44(*(undefined4 *)(*(longlong *)(param_1 + 0x58) + 0x82c),(undefined4)local_60)
    ;
    local_58 = 0;
    local_50 = 0;
    if (cVar4 == '\0') {
LAB_1422a7df0:
      (**(code **)(*plVar7 + 0x2d8))(plVar7,param_2 + 8,param_2 + 0x20,&local_60);
    }
    else {
      if (*(char *)(param_2 + 0x40) == '\0') {
        FUN_1422b24a0(param_2 + 8);
      }
      else {
        FBaseCompactPose<TMemStackAllocator<0>_>::ResetToAdditiveIdentity();
      }
      local_68 = *(longlong *)(param_2 + 0x18);
      local_78 = 0;
      local_6c = 0;
      local_40 = 0;
      local_38 = 0;
      local_30 = 0;
      local_28 = 0;
      local_26 = 0;
      iVar1 = *(int *)(local_68 + 8);
      local_70 = 0;
      if (0 < iVar1) {
        local_70 = 0;
        FUN_140848c80(&local_78,iVar1);
      }
      local_70 = local_70 + iVar1;
      if (local_6c < local_70) {
        TArray<FTransform,TMemStackAllocator<0>_>::ResizeGrow(&local_78);
      }
      FBaseBlendedCurve<TMemStackAllocator<0>_>::InitFrom(&local_40,param_2 + 0x20);
      (**(code **)(*plVar7 + 0x2d8))(plVar7,&local_78,&local_40,&local_60);
      FAnimationRuntime::AccumulateAdditivePose
                (param_2 + 8,&local_78,param_2 + 0x20,&local_40,0x3f800000,
                 CONCAT44(uVar8,(uint)*(byte *)((longlong)plVar7 + 0x17c)));
      FUN_141fac440(param_2 + 8);
    }
LAB_1422a7e08:
    if (local_58 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1422a7fa0 FillUidArray body=124 status=ok
// SIG undefined FillUidArray(void)

void FSmartNameMapping::FillUidArray(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = *(int *)(param_1 + 8);
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2);
  }
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      *(short *)(*param_2 + (longlong)iVar1 * 2) = (short)iVar2;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  return;
}



// FUNCTION 1422a8020 FUN_1422a8020 body=98 status=ok
// SIG undefined FUN_1422a8020(void)

void FUN_1422a8020(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  
  if ((((param_2 == 0) || (*(int *)(param_2 + 0x10) != (int)param_1[2])) ||
      ((0.0 < *(float *)(param_2 + 0x2c) && (*(float *)((longlong)param_1 + 0x2c) == 0.0)))) &&
     (iVar2 = (int)param_1[2] + 1, iVar2 < (int)param_1[1])) {
    lVar3 = (longlong)iVar2 * 0x50;
    do {
      iVar2 = iVar2 + 1;
      puVar1 = *(undefined4 **)(lVar3 + 0x40 + *param_1);
      *puVar1 = 0xfffffffe;
      puVar1[2] = 0xfffffffe;
      lVar3 = lVar3 + 0x50;
    } while (iVar2 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 1422a8090 FindSocketAndIndex body=86 status=ok
// SIG undefined FindSocketAndIndex(void)

longlong USkeleton::FindSocketAndIndex(longlong param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  *param_3 = -1;
  if ((param_2 != 0) && (0 < *(int *)(param_1 + 0x198))) {
    plVar3 = *(longlong **)(param_1 + 400);
    uVar4 = uVar2;
    do {
      lVar1 = *plVar3;
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x28) == param_2)) {
        *param_3 = (int)uVar4;
        return lVar1;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
      uVar2 = uVar2 + 1;
      plVar3 = plVar3 + 1;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x198));
  }
  return 0;
}



// FUNCTION 1422a80f0 FindUID body=50 status=ok
// SIG undefined FindUID(void)

longlong FSmartNameMapping::FindUID(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != plVar1 + (int)param_1[1]) {
    plVar2 = plVar1;
    do {
      if (*plVar2 == *param_2) {
        return (longlong)plVar2 - (longlong)plVar1 >> 3;
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1 + (int)param_1[1]);
  }
  return 0xffff;
}



// FUNCTION 1422a8130 FUN_1422a8130 body=121 status=ok
// SIG undefined FUN_1422a8130(void)

void FUN_1422a8130(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_14062c730(*(undefined8 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    lVar2 = FUN_1423ac7e0(*(undefined8 *)(param_1 + 0x10));
    if (lVar2 != 0) {
      FUN_142279320(lVar2,0,0);
      FUN_142284510(lVar2,0,0);
    }
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x960))(*(longlong **)(param_1 + 0x10),0);
    FUN_1423b8300(*(undefined8 *)(param_1 + 0x10));
    FUN_140942fb0(*(undefined8 *)(param_1 + 0x10),0,0);
  }
  return;
}



// FUNCTION 1422a81b0 GetAnimControlSlotDesc body=83 status=ok
// SIG undefined GetAnimControlSlotDesc(void)

void IMatineeAnimInterface::GetAnimControlSlotDesc(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Matinee/MatineeAnimInterface.h"
             ,0x49,L"Pure virtual not implemented (%s)",
             L"UMatineeAnimInterface::GetAnimControlSlotDesc");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Matinee/MatineeAnimInterface.h"
             ,0x49,L"Pure virtual not implemented (%s)",
             L"UMatineeAnimInterface::GetAnimControlSlotDesc");
  return;
}



// FUNCTION 1422a8210 FUN_1422a8210 body=336 status=ok
// SIG undefined FUN_1422a8210(void)

void FUN_1422a8210(longlong *param_1,float *param_2,float *param_3,char param_4,undefined8 param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined1 local_res18 [8];
  float local_38;
  float local_34;
  float local_30 [6];
  
  if ((*param_3 != 0.0) && (cVar2 = (**(code **)(*param_1 + 0x348))(), cVar2 != '\0')) {
    local_34 = *param_3;
    local_38 = *param_2;
    bVar1 = 0.0 <= local_34;
    local_res18[0] = 0;
    local_30[0] = local_38;
    iVar3 = FUN_1422467d0(local_res18,&local_34,&local_38,param_1 + 0x12);
    (**(code **)(*param_1 + 0x2a8))(param_1,local_30,&local_38,param_5);
    while ((iVar3 == 1 && (param_4 != '\0'))) {
      local_34 = local_34 - (local_38 - local_30[0]);
      if (bVar1) {
        local_38 = 0.0;
      }
      else {
        local_38 = *(float *)(param_1 + 0x12);
      }
      local_res18[0] = 0;
      local_30[0] = local_38;
      iVar3 = FUN_1422467d0(local_res18,&local_34,&local_38,param_1 + 0x12);
      (**(code **)(*param_1 + 0x2a8))(param_1,local_30,&local_38,param_5);
    }
  }
  return;
}



// FUNCTION 1422a8360 GetAnimNotifiesFromDeltaPositions body=386 status=ok
// SIG undefined GetAnimNotifiesFromDeltaPositions(void)

void UAnimSequenceBase::GetAnimNotifiesFromDeltaPositions
               (longlong param_1,float *param_2,float *param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar2 = *(int *)(param_1 + 0x88);
  if (iVar2 != 0) {
    if (*param_2 != *param_3) {
      uVar5 = 0;
      if (*param_2 <= *param_3) {
        uVar6 = uVar5;
        if (0 < iVar2) {
          do {
            lVar7 = *(longlong *)(param_1 + 0x80) + uVar6;
            fVar10 = (float)FAnimLinkableElement::GetTime(lVar7,0);
            fVar10 = fVar10 + *(float *)(lVar7 + 0x34);
            fVar8 = (float)FAnimNotifyEvent::GetEndTriggerTime(lVar7);
            if ((fVar10 < *param_3 || fVar10 == *param_3) &&
               (*param_2 <= fVar8 && fVar8 != *param_2)) {
              lVar1 = param_4[1];
              iVar2 = (int)lVar1 + 1;
              *(int *)(param_4 + 1) = iVar2;
              if (*(int *)((longlong)param_4 + 0xc) < iVar2) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_4);
              }
              plVar3 = (longlong *)((longlong)(int)lVar1 * 0x10 + *param_4);
              *plVar3 = lVar7;
              plVar3[1] = param_1;
            }
            uVar4 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar4;
            uVar6 = uVar6 + 0xa8;
          } while ((int)uVar4 < *(int *)(param_1 + 0x88));
        }
      }
      else {
        uVar6 = uVar5;
        if (0 < iVar2) {
          do {
            lVar7 = *(longlong *)(param_1 + 0x80) + uVar6;
            fVar8 = (float)FAnimLinkableElement::GetTime(lVar7,0);
            fVar10 = *(float *)(lVar7 + 0x34);
            fVar9 = (float)FAnimNotifyEvent::GetEndTriggerTime(lVar7);
            if ((fVar8 + fVar10 < *param_2) && (*param_3 <= fVar9)) {
              lVar1 = param_4[1];
              iVar2 = (int)lVar1 + 1;
              *(int *)(param_4 + 1) = iVar2;
              if (*(int *)((longlong)param_4 + 0xc) < iVar2) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_4);
              }
              plVar3 = (longlong *)((longlong)(int)lVar1 * 0x10 + *param_4);
              *plVar3 = lVar7;
              plVar3[1] = param_1;
            }
            uVar4 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar4;
            uVar6 = uVar6 + 0xa8;
          } while ((int)uVar4 < *(int *)(param_1 + 0x88));
        }
      }
    }
  }
  return;
}



// FUNCTION 1422a84f0 FUN_1422a84f0 body=8 status=ok
// SIG undefined FUN_1422a84f0(void)

undefined8 FUN_1422a84f0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x440);
}



// FUNCTION 1422a8500 GetAnimationLengthFromSampleData body=691 status=ok
// SIG undefined GetAnimationLengthFromSampleData(void)

float UBlendSpaceBase::GetAnimationLengthFromSampleData(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar5 = (longlong)(int)param_2[1];
  lVar3 = 0;
  fVar8 = 0.0;
  if (3 < lVar5) {
    pfVar2 = (float *)(*param_2 + 0x10);
    lVar4 = (lVar5 - 4U >> 2) + 1;
    lVar3 = lVar4 * 4;
    do {
      fVar6 = pfVar2[-4];
      if (((-1 < (int)fVar6) && ((int)fVar6 < *(int *)(param_1 + 0xd0))) &&
         (lVar1 = *(longlong *)(*(longlong *)(param_1 + 200) + (longlong)(int)fVar6 * 0x18),
         lVar1 != 0)) {
        fVar6 = *(float *)(lVar1 + 0x94) * pfVar2[3];
        if (fVar6 == 0.0) {
          fVar6 = 1.0;
        }
        else {
          fVar6 = ABS(fVar6);
        }
        fVar7 = *pfVar2;
        if (0.0 <= fVar7) {
          if (1.0 <= fVar7) {
            fVar7 = 1.0;
          }
        }
        else {
          fVar7 = 0.0;
        }
        fVar8 = fVar8 + (*(float *)(lVar1 + 0x90) / fVar6) * fVar7;
      }
      fVar6 = pfVar2[0xc];
      if (((-1 < (int)fVar6) && ((int)fVar6 < *(int *)(param_1 + 0xd0))) &&
         (lVar1 = *(longlong *)(*(longlong *)(param_1 + 200) + (longlong)(int)fVar6 * 0x18),
         lVar1 != 0)) {
        fVar6 = *(float *)(lVar1 + 0x94) * pfVar2[0x13];
        if (fVar6 == 0.0) {
          fVar6 = 1.0;
        }
        else {
          fVar6 = ABS(fVar6);
        }
        fVar7 = pfVar2[0x10];
        if (0.0 <= fVar7) {
          if (1.0 <= fVar7) {
            fVar7 = 1.0;
          }
        }
        else {
          fVar7 = 0.0;
        }
        fVar8 = fVar8 + (*(float *)(lVar1 + 0x90) / fVar6) * fVar7;
      }
      fVar6 = pfVar2[0x1c];
      if (((-1 < (int)fVar6) && ((int)fVar6 < *(int *)(param_1 + 0xd0))) &&
         (lVar1 = *(longlong *)(*(longlong *)(param_1 + 200) + (longlong)(int)fVar6 * 0x18),
         lVar1 != 0)) {
        fVar6 = *(float *)(lVar1 + 0x94) * pfVar2[0x23];
        if (fVar6 == 0.0) {
          fVar6 = 1.0;
        }
        else {
          fVar6 = ABS(fVar6);
        }
        fVar7 = pfVar2[0x20];
        if (0.0 <= fVar7) {
          if (1.0 <= fVar7) {
            fVar7 = 1.0;
          }
        }
        else {
          fVar7 = 0.0;
        }
        fVar8 = fVar8 + (*(float *)(lVar1 + 0x90) / fVar6) * fVar7;
      }
      fVar6 = pfVar2[0x2c];
      if (((-1 < (int)fVar6) && ((int)fVar6 < *(int *)(param_1 + 0xd0))) &&
         (lVar1 = *(longlong *)(*(longlong *)(param_1 + 200) + (longlong)(int)fVar6 * 0x18),
         lVar1 != 0)) {
        fVar6 = *(float *)(lVar1 + 0x94) * pfVar2[0x33];
        if (fVar6 == 0.0) {
          fVar6 = 1.0;
        }
        else {
          fVar6 = ABS(fVar6);
        }
        fVar7 = pfVar2[0x30];
        if (0.0 <= fVar7) {
          if (1.0 <= fVar7) {
            fVar7 = 1.0;
          }
        }
        else {
          fVar7 = 0.0;
        }
        fVar8 = fVar8 + (*(float *)(lVar1 + 0x90) / fVar6) * fVar7;
      }
      pfVar2 = pfVar2 + 0x40;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (lVar3 < lVar5) {
    pfVar2 = (float *)(*param_2 + 0x10 + lVar3 * 0x40);
    lVar5 = lVar5 - lVar3;
    do {
      fVar6 = pfVar2[-4];
      if (((-1 < (int)fVar6) && ((int)fVar6 < *(int *)(param_1 + 0xd0))) &&
         (lVar3 = *(longlong *)(*(longlong *)(param_1 + 200) + (longlong)(int)fVar6 * 0x18),
         lVar3 != 0)) {
        fVar6 = *(float *)(lVar3 + 0x94) * pfVar2[3];
        if (fVar6 == 0.0) {
          fVar6 = 1.0;
        }
        else {
          fVar6 = ABS(fVar6);
        }
        fVar7 = *pfVar2;
        if (0.0 <= fVar7) {
          if (1.0 <= fVar7) {
            fVar7 = 1.0;
          }
        }
        else {
          fVar7 = 0.0;
        }
        fVar8 = fVar8 + (*(float *)(lVar3 + 0x90) / fVar6) * fVar7;
      }
      pfVar2 = pfVar2 + 0x10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return fVar8;
}



// FUNCTION 1422a87c0 FUN_1422a87c0 body=2177 status=ok
// SIG undefined FUN_1422a87c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1422a87c0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  short *psVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  float fVar23;
  undefined4 uVar24;
  undefined1 auStack_318 [32];
  longlong *local_2f8;
  longlong *local_2f0;
  longlong *local_2e8;
  int iStack_2e0;
  undefined4 uStack_2dc;
  longlong *local_2d8;
  longlong *local_2d0;
  longlong *local_2c8;
  undefined8 uStack_2c0;
  longlong *local_2b8;
  undefined8 uStack_2b0;
  longlong *local_2a8;
  undefined1 local_2a0 [4];
  float local_29c;
  longlong local_298;
  undefined8 local_290;
  longlong local_288 [4];
  longlong *local_268;
  int local_260;
  undefined4 local_25c;
  longlong local_258 [32];
  longlong *local_158;
  int local_150;
  undefined4 local_14c;
  longlong local_148 [24];
  longlong *local_88;
  int local_80;
  undefined4 local_7c;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_318;
  iVar5 = (int)param_2[1];
  lVar12 = (longlong)iVar5;
  local_2e8 = param_4;
  local_2d8 = param_1;
  local_2d0 = param_3;
  local_2a8 = param_2;
  if (iVar5 == 0) {
    FUN_1422b24a0(param_3);
    return;
  }
  plVar15 = (longlong *)0x0;
  local_88 = (longlong *)0x0;
  local_7c = 0;
  local_80 = iVar5;
  if (0 < iVar5) {
    TArray<FCompactPose,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(local_148);
  }
  plVar14 = local_148;
  if (local_88 != (longlong *)0x0) {
    plVar14 = plVar15;
  }
  _guard_xfg_dispatch_icall_nop((void *)((ulonglong)plVar14 | (ulonglong)local_88),0,lVar12 * 0x18);
  local_14c = 0;
  local_158 = (longlong *)0x0;
  local_150 = iVar5;
  if (0 < iVar5) {
    TArray<FBlendedCurve,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(local_258);
  }
  plVar14 = local_258;
  if (local_158 != (longlong *)0x0) {
    plVar14 = plVar15;
  }
  _guard_xfg_dispatch_icall_nop((void *)((ulonglong)plVar14 | (ulonglong)local_158),0,lVar12 << 5);
  local_25c = 0;
  local_268 = (longlong *)0x0;
  local_260 = iVar5;
  if (0 < iVar5) {
    TArray<unsigned_int,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(local_288);
  }
  plVar14 = local_288;
  if (local_268 != (longlong *)0x0) {
    plVar14 = plVar15;
  }
  _guard_xfg_dispatch_icall_nop((void *)((ulonglong)plVar14 | (ulonglong)local_268),0,lVar12 * 4);
  uVar18 = 0;
  uVar20 = uVar18;
  if (0 < local_80) {
    do {
      iVar5 = 0;
      plVar14 = local_148;
      if (local_88 != (longlong *)0x0) {
        plVar14 = local_88;
      }
      lVar13 = (longlong)plVar14 + uVar18;
      lVar12 = local_2d0[2];
      *(longlong *)(lVar13 + 0x10) = lVar12;
      iVar9 = *(int *)(lVar12 + 8);
      *(undefined4 *)(lVar13 + 8) = 0;
      if (*(int *)(lVar13 + 0xc) < iVar9) {
        FUN_140848c80(lVar13,iVar9);
        iVar5 = *(int *)(lVar13 + 8);
      }
      *(int *)(lVar13 + 8) = iVar5 + iVar9;
      if (*(int *)(lVar13 + 0xc) < iVar5 + iVar9) {
        TArray<FTransform,TMemStackAllocator<0>_>::ResizeGrow(lVar13);
      }
      plVar14 = local_258;
      if (local_158 != (longlong *)0x0) {
        plVar14 = local_158;
      }
      plVar14 = (longlong *)((longlong)plVar14 + (longlong)plVar15);
      if (param_4 != plVar14) {
        puVar2 = (undefined8 *)param_4[2];
        sVar7 = 0;
        plVar14[2] = (longlong)puVar2;
        if ((puVar2 != (undefined8 *)0x0) && (lVar12 = (longlong)*(int *)(puVar2 + 1), 0 < lVar12))
        {
          psVar10 = (short *)*puVar2;
          sVar8 = 0;
          do {
            sVar7 = sVar8 + 1;
            if (*psVar10 == -1) {
              sVar7 = sVar8;
            }
            lVar12 = lVar12 + -1;
            psVar10 = psVar10 + 1;
            sVar8 = sVar7;
          } while (lVar12 != 0);
        }
        *(short *)(plVar14 + 3) = sVar7;
        *(undefined4 *)(plVar14 + 1) = 0;
        if ((*(int *)((longlong)plVar14 + 0xc) < 0) && (*(int *)((longlong)plVar14 + 0xc) != 0)) {
          FUN_140957580(plVar14);
        }
        uVar1 = *(ushort *)(plVar14 + 3);
        lVar12 = plVar14[1];
        iVar5 = (int)lVar12 + (uint)uVar1;
        *(int *)(plVar14 + 1) = iVar5;
        if (*(int *)((longlong)plVar14 + 0xc) < iVar5) {
          FUN_140848b80(plVar14);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*plVar14 + (longlong)(int)lVar12 * 8),0,(ulonglong)uVar1 << 3);
        *(undefined1 *)((longlong)plVar14 + 0x1a) = 1;
      }
      uVar21 = (int)uVar20 + 1;
      uVar18 = uVar18 + 0x18;
      plVar15 = plVar15 + 4;
      param_1 = local_2d8;
      uVar20 = (ulonglong)uVar21;
    } while ((int)uVar21 < local_80);
  }
  uVar19 = 0;
  uVar20 = uVar19;
  uVar18 = uVar19;
  uVar22 = uVar19;
  if (0 < (int)local_2a8[1]) {
    do {
      plVar15 = local_148;
      if (local_88 != (longlong *)0x0) {
        plVar15 = local_88;
      }
      iVar5 = *(int *)(*local_2a8 + uVar18);
      plVar15 = (longlong *)((longlong)plVar15 + uVar20);
      if ((iVar5 < 0) || ((int)param_1[0x1a] <= iVar5)) {
        lVar12 = plVar15[2];
        iVar5 = *(int *)(lVar12 + 0xa8);
        *(undefined4 *)(plVar15 + 1) = 0;
        if (*(int *)((longlong)plVar15 + 0xc) < iVar5) {
          FUN_140848c80(plVar15);
        }
        iVar5 = *(int *)(lVar12 + 0xa8);
        if (iVar5 != 0) {
          iVar9 = (int)plVar15[1];
          if (*(int *)((longlong)plVar15 + 0xc) < iVar5 + iVar9) {
            FUN_140848c80(plVar15);
            iVar9 = (int)plVar15[1];
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar9 * 0x30 + *plVar15),*(void **)(lVar12 + 0xa0),
                     (longlong)iVar5 * 0x30);
          *(int *)(plVar15 + 1) = (int)plVar15[1] + iVar5;
        }
        param_1 = local_2d8;
        if ((*(char *)(lVar12 + 0xd0) != '\0') &&
           (lVar13 = FWeakObjectPtr::Get(lVar12 + 0x38), param_1 = local_2d8, lVar13 != 0)) {
          lVar13 = 0;
          local_2c8 = (longlong *)0x0;
          uVar6 = FWeakObjectPtr::Get(lVar12 + 0x40);
          plVar14 = (longlong *)USkeleton::GetRefLocalPoses(uVar6,0);
          param_1 = local_2d8;
          if (*(uint *)(plVar15 + 1) != 0) {
            uVar17 = (ulonglong)*(uint *)(plVar15 + 1);
            lVar12 = lVar13;
            do {
              lVar3 = *plVar15;
              lVar13 = lVar13 + 4;
              puVar11 = (undefined8 *)
                        ((longlong)*(int *)(*(longlong *)(plVar15[2] + 0x70) + -4 + lVar13) * 0x30 +
                        *plVar14);
              uVar6 = puVar11[1];
              *(undefined8 *)(lVar12 + lVar3) = *puVar11;
              ((undefined8 *)(lVar12 + lVar3))[1] = uVar6;
              uVar6 = puVar11[3];
              puVar2 = (undefined8 *)(lVar12 + 0x10 + lVar3);
              *puVar2 = puVar11[2];
              puVar2[1] = uVar6;
              uVar6 = puVar11[5];
              puVar2 = (undefined8 *)(lVar12 + 0x20 + lVar3);
              *puVar2 = puVar11[4];
              puVar2[1] = uVar6;
              uVar17 = uVar17 - 1;
              lVar12 = lVar12 + 0x30;
            } while (uVar17 != 0);
          }
        }
      }
      else {
        fVar23 = *(float *)(*local_2a8 + 0x10 + uVar18);
        lVar12 = param_1[0x19];
        if (0.0 <= fVar23) {
          if (1.0 <= fVar23) {
            fVar23 = 1.0;
          }
        }
        else {
          fVar23 = 0.0;
        }
        plVar14 = local_288;
        if (local_268 != (longlong *)0x0) {
          plVar14 = local_268;
        }
        *(float *)((longlong)plVar14 + uVar19) = fVar23;
        plVar14 = *(longlong **)(lVar12 + (longlong)iVar5 * 0x18);
        if (plVar14 == (longlong *)0x0) {
          lVar12 = plVar15[2];
          iVar5 = *(int *)(lVar12 + 0xa8);
          *(undefined4 *)(plVar15 + 1) = 0;
          if (*(int *)((longlong)plVar15 + 0xc) < iVar5) {
            FUN_140848c80(plVar15);
          }
          iVar5 = *(int *)(lVar12 + 0xa8);
          if (iVar5 != 0) {
            iVar9 = (int)plVar15[1];
            if (*(int *)((longlong)plVar15 + 0xc) < iVar5 + iVar9) {
              FUN_140848c80(plVar15);
              iVar9 = (int)plVar15[1];
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar9 * 0x30 + *plVar15),*(void **)(lVar12 + 0xa0),
                       (longlong)iVar5 * 0x30);
            *(int *)(plVar15 + 1) = (int)plVar15[1] + iVar5;
          }
          param_1 = local_2d8;
          if ((*(char *)(lVar12 + 0xd0) != '\0') &&
             (lVar13 = FWeakObjectPtr::Get(lVar12 + 0x38), param_1 = local_2d8, lVar13 != 0)) {
            lVar13 = 0;
            local_2b8 = (longlong *)0x0;
            uVar6 = FWeakObjectPtr::Get(lVar12 + 0x40);
            plVar14 = (longlong *)USkeleton::GetRefLocalPoses(uVar6,0);
            param_1 = local_2d8;
            if (*(uint *)(plVar15 + 1) != 0) {
              uVar17 = (ulonglong)*(uint *)(plVar15 + 1);
              lVar12 = lVar13;
              do {
                lVar3 = *plVar15;
                lVar13 = lVar13 + 4;
                puVar11 = (undefined8 *)
                          ((longlong)*(int *)(*(longlong *)(plVar15[2] + 0x70) + -4 + lVar13) * 0x30
                          + *plVar14);
                uVar6 = puVar11[1];
                *(undefined8 *)(lVar12 + lVar3) = *puVar11;
                ((undefined8 *)(lVar12 + lVar3))[1] = uVar6;
                uVar6 = puVar11[3];
                puVar2 = (undefined8 *)(lVar12 + 0x10 + lVar3);
                *puVar2 = puVar11[2];
                puVar2[1] = uVar6;
                uVar6 = puVar11[5];
                puVar2 = (undefined8 *)(lVar12 + 0x20 + lVar3);
                *puVar2 = puVar11[4];
                puVar2[1] = uVar6;
                uVar17 = uVar17 - 1;
                lVar12 = lVar12 + 0x30;
              } while (uVar17 != 0);
            }
          }
        }
        else {
          fVar23 = *(float *)(*local_2a8 + 0x14 + uVar18);
          if (0.0 <= fVar23) {
            local_29c = *(float *)(plVar14 + 0x12);
            if (fVar23 <= *(float *)(plVar14 + 0x12)) {
              local_29c = fVar23;
            }
          }
          else {
            local_29c = 0.0;
          }
          local_2a0[0] = 1;
          plVar16 = local_258;
          if (local_158 != (longlong *)0x0) {
            plVar16 = local_158;
          }
          local_298 = 0;
          local_290 = 0;
          (**(code **)(*plVar14 + 0x2d8))
                    (plVar14,plVar15,plVar16 + (longlong)(int)uVar22 * 4,local_2a0);
          if (local_298 != 0) {
            FMemory::Free();
          }
        }
      }
      uVar21 = (int)uVar22 + 1;
      uVar19 = uVar19 + 4;
      param_4 = local_2e8;
      uVar20 = uVar20 + 0x18;
      uVar18 = uVar18 + 0x40;
      uVar22 = (ulonglong)uVar21;
    } while ((int)uVar21 < (int)local_2a8[1]);
  }
  iVar5 = local_80;
  plVar15 = local_148;
  if (local_88 != (longlong *)0x0) {
    plVar15 = local_88;
  }
  if ((int)param_1[0x17] < 1) {
    local_2c8 = local_288;
    if (local_268 != (longlong *)0x0) {
      local_2c8 = local_268;
    }
    uStack_2c0 = CONCAT44(uStack_2dc,local_260);
    local_2b8 = local_258;
    if (local_158 != (longlong *)0x0) {
      local_2b8 = local_158;
    }
    uStack_2b0 = CONCAT44(uStack_2dc,local_150);
    local_2f8 = param_4;
    local_2e8 = plVar15;
    iStack_2e0 = local_80;
    FUN_142249f10(&local_2e8,&local_2b8,&local_2c8,local_2d0);
  }
  else {
    local_2c8 = plVar15;
    uStack_2c0._0_4_ = local_80;
    cVar4 = (**(code **)(*param_1 + 0x290))(param_1);
    local_2f0 = param_4;
    if (cVar4 == '\0') {
      uVar24 = (undefined4)local_2a8[1];
    }
    else {
      uVar24 = (undefined4)local_2a8[1];
      if ((char)param_1[0x11] != '\0') {
        uStack_2b0 = CONCAT44(uStack_2dc,uVar24);
        local_2e8 = local_258;
        if (local_158 != (longlong *)0x0) {
          local_2e8 = local_158;
        }
        iStack_2e0 = local_150;
        local_2f8 = local_2d0;
        local_2b8 = (longlong *)*local_2a8;
        FUN_14224ae90(&local_2c8,&local_2e8,param_1,&local_2b8);
        goto LAB_1422a8fdb;
      }
    }
    uStack_2c0 = CONCAT44(uStack_2dc,uVar24);
    plVar14 = param_1 + 0x10;
    local_2b8 = local_258;
    if (local_158 != (longlong *)0x0) {
      local_2b8 = local_158;
    }
    if (param_1 == (longlong *)0x0) {
      plVar14 = (longlong *)0x0;
    }
    uStack_2b0 = CONCAT44(uStack_2dc,local_150);
    local_2f8 = local_2d0;
    local_2e8 = plVar15;
    iStack_2e0 = iVar5;
    local_2c8 = (longlong *)*local_2a8;
    FUN_14224a6b0(&local_2e8,&local_2b8,plVar14,&local_2c8);
  }
LAB_1422a8fdb:
  FUN_141fac440(local_2d0);
  if (local_268 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_158 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1422a9050 FUN_1422a9050 body=4624 status=ok
// SIG undefined FUN_1422a9050(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1422a9050(longlong param_1,longlong *param_2,longlong *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  char cVar3;
  ushort uVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined1 uVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  float *pfVar17;
  byte bVar18;
  short sVar19;
  short sVar20;
  uint uVar21;
  uint uVar22;
  float *pfVar23;
  float *pfVar24;
  ulonglong uVar25;
  uint uVar26;
  longlong lVar27;
  longlong lVar28;
  short *psVar29;
  longlong *plVar30;
  float *pfVar31;
  undefined8 uVar32;
  undefined8 *puVar33;
  longlong *plVar34;
  longlong lVar35;
  ulonglong uVar36;
  uint uVar37;
  uint *puVar38;
  uint *puVar39;
  uint uVar40;
  longlong *plVar41;
  float fVar42;
  float *pfVar43;
  float *pfVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
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
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  undefined1 auStack_2c8 [32];
  float *local_2a8;
  longlong local_2a0;
  undefined1 local_298;
  float local_288;
  float local_284;
  float *local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined1 local_268 [8];
  undefined8 uStack_260;
  undefined8 local_250;
  undefined8 local_248;
  uint uStack_240;
  uint uStack_23c;
  undefined8 local_238;
  uint uStack_230;
  int iStack_22c;
  undefined8 local_228;
  longlong *local_220;
  float *local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  uint uStack_1f8;
  uint uStack_1f4;
  undefined8 local_1f0;
  float *local_1e8;
  ulonglong local_1e0;
  longlong local_1d8;
  float *local_1d0;
  longlong *local_1c8;
  float *local_1c0;
  uint uStack_1b8;
  uint uStack_1b4;
  uint *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  float *local_198;
  uint *local_190;
  longlong local_188;
  float *local_180;
  undefined8 local_178;
  longlong local_170;
  float *local_168;
  undefined8 uStack_160;
  uint *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  float local_138 [2];
  undefined8 local_130;
  uint local_128 [4];
  uint *local_118;
  ulonglong local_110;
  undefined4 local_108;
  int local_104;
  longlong local_f8;
  undefined4 local_f0;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  local_170 = param_2[2];
  local_1c0 = (float *)(param_1 + 0xb0);
  puVar39 = (uint *)(param_1 + 0xc0);
  local_140 = *(undefined8 *)(param_1 + 0x38);
  uVar22 = *(uint *)(param_1 + 0xd8);
  uVar40 = 0;
  local_1d0 = (float *)0x0;
  local_248 = (float *)0x0;
  local_288 = (float)(*(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xe4));
  uStack_23c = 0;
  local_210._0_4_ = 0;
  local_210._4_4_ = 1;
  local_200._4_4_ = 0;
  uStack_1f8 = 0;
  if (uVar22 != 0) {
    puVar38 = *(uint **)(param_1 + 0xd0);
    if (*(uint **)(param_1 + 0xd0) == (uint *)0x0) {
      puVar38 = puVar39;
    }
    uVar21 = *puVar38;
    while (uVar21 == 0) {
      lVar27 = (longlong)(int)(uint)local_210;
      uStack_1f8 = uStack_1f8 + 0x20;
      uVar21 = (uint)local_210 + 1;
      bVar5 = (int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)(uint)local_210
      ;
      local_210._0_4_ = uVar21;
      if (bVar5) goto LAB_1422a918c;
      uVar21 = puVar38[lVar27 + 1];
    }
    local_210._4_4_ = -uVar21 & uVar21;
    iVar14 = 0x1f;
    if (local_210._4_4_ != 0) {
      for (; local_210._4_4_ >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (local_210._4_4_ == 0) {
      iVar14 = 0x20;
    }
    else {
      iVar14 = 0x1f - iVar14;
    }
    local_200._4_4_ = (uStack_1f8 - iVar14) + 0x1f;
    if ((int)uVar22 < (int)local_200._4_4_) {
LAB_1422a918c:
      local_200._4_4_ = uVar22;
    }
  }
  uVar21 = *(uint *)(param_1 + 0xd8);
  uStack_1a8 = (undefined1  [8])CONCAT44(local_200._4_4_,0xffffffff);
  local_1f0 = CONCAT44(uStack_1f4,uStack_1f8);
  local_268._4_4_ = uVar21;
  local_284 = (float)(-1 << ((byte)uVar21 & 0x1f));
  local_268._0_4_ = local_284;
  uStack_1b8 = (uint)local_210;
  uStack_1b4 = local_210._4_4_;
  uVar37 = uVar21 & 0xffffffe0;
  uStack_208 = (float *)CONCAT44(local_210._4_4_,(uint)local_210);
  uStack_1f8 = 0xffffffff;
  uStack_1f4 = local_200._4_4_;
  if (uVar21 != uVar22) {
    puVar38 = *(uint **)(param_1 + 0xd0);
    if (*(uint **)(param_1 + 0xd0) == (uint *)0x0) {
      puVar38 = puVar39;
    }
    uVar26 = puVar38[(int)uVar21 >> 5] & (uint)local_284;
    iVar14 = (int)uVar21 >> 5;
    while (uVar26 == 0) {
      uVar37 = uVar37 + 0x20;
      if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar14)
      goto LAB_1422a9265;
      uVar26 = puVar38[(longlong)iVar14 + 1];
      local_268._0_4_ = 0xffffffff;
      iVar14 = iVar14 + 1;
    }
    uVar26 = -uVar26 & uVar26;
    iVar14 = 0x1f;
    if (uVar26 != 0) {
      for (; uVar26 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar26 == 0) {
      iVar14 = 0x20;
    }
    else {
      iVar14 = 0x1f - iVar14;
    }
    iVar14 = (uVar37 - iVar14) + 0x1f;
    local_268._4_4_ = iVar14;
    if ((int)uVar22 < iVar14) {
LAB_1422a9265:
      local_268._4_4_ = uVar22;
    }
  }
  auVar49 = _local_268;
  local_280 = param_4;
  local_220 = param_2;
  local_210 = local_1c0;
  local_1c8 = param_3;
  puStack_1b0 = puVar39;
  uStack_1a0 = local_1f0;
  local_188 = param_1;
  uVar22 = uVar40;
  local_200 = puVar39;
  while (((uStack_1f4 != auVar49._4_4_ || (local_200 != puVar39)) ||
         (local_210 != (float *)(param_1 + 0xb0)))) {
    lVar27 = (longlong)(int)uVar40;
    uStack_240 = uVar40 + 1;
    iVar14 = *(int *)(*(longlong *)local_210 + 8 + (longlong)(int)uStack_1f4 * 0x18);
    local_250 = (float *)CONCAT44(*(undefined4 *)
                                   (*(longlong *)(local_170 + 0x80) + (longlong)iVar14 * 4),iVar14);
    if ((int)uVar22 < (int)uStack_240) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_248,uVar40);
      local_1d0 = local_248;
      uVar22 = uStack_23c;
    }
    uVar40 = uStack_240;
    *(float **)(local_1d0 + lVar27 * 2) = local_250;
    uStack_1f8 = uStack_1f8 & ~uStack_208._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_208);
  }
  if (*(char *)(param_1 + 0x110) == '\0') {
    FUN_1422b24a0(local_220);
  }
  else {
    FBaseCompactPose<TMemStackAllocator<0>_>::ResetToAdditiveIdentity();
  }
  plVar34 = local_1c8;
  cVar3 = *(char *)(param_1 + 0x110);
  if (local_280[4] == *(float *)(param_1 + 0x98)) {
    uVar25 = 0;
    local_138[0] = 0.0;
    local_138[1] = 0.0;
    local_104 = 0;
    local_f8 = 0;
    local_130._0_4_ = 0;
    local_130 = 0;
    local_118 = (uint *)0x0;
    fVar74 = 0.0;
    local_110 = 0;
    local_108 = 0xffffffff;
    local_f0 = 0;
    pfVar17 = local_280;
    uVar16 = uVar25;
    if (0 < (int)*(float *)(param_1 + 0x98)) {
      do {
        iVar14 = (int)uVar25;
        local_284 = *(float *)(uVar16 + *(longlong *)(pfVar17 + 2));
        if (((*(char *)(param_1 + 0x110) == '\0') || (iVar14 != *(int *)(param_1 + 0x114))) &&
           (1e-05 < local_284)) {
          local_210 = (float *)&local_250;
          uStack_208 = &local_284;
          local_250 = (float *)((longlong)iVar14 * 0x30 + *(longlong *)(param_1 + 0x90));
          FUN_1405c0150(local_138,&local_1d8,&local_210,0);
          fVar74 = fVar74 + local_284;
          pfVar17 = local_280;
        }
        uVar25 = (ulonglong)(iVar14 + 1U);
        uVar16 = uVar16 + 4;
      } while ((int)(iVar14 + 1U) < *(int *)(param_1 + 0x98));
      uVar25 = local_110 & 0xffffffff;
    }
    fVar42 = (float)((int)local_130 - local_104);
    local_284 = fVar42;
    if (0 < (int)fVar42) {
      local_250 = (float *)0x0;
      local_1e8 = (float *)0x0;
      local_1e0 = 0;
      local_180 = (float *)0x0;
      local_178 = 0;
      local_210 = (float *)0x0;
      uStack_208 = (float *)0x0;
      local_238 = (uint *)CONCAT44(local_238._4_4_,(undefined4)local_238);
      if ((cVar3 == '\0') &&
         (local_238 = (uint *)CONCAT44(local_238._4_4_,(undefined4)local_238), 1.0 < fVar74)) {
        local_248._4_4_ = 1;
        local_248._0_4_ = 0;
        puStack_1b0 = local_128;
        local_238._4_4_ = 0;
        uStack_230 = 0;
        iVar14 = (int)uVar25;
        if (iVar14 != 0) {
          puVar39 = local_128;
          if (local_118 != (uint *)0x0) {
            puVar39 = local_118;
          }
          local_248._4_4_ = *puVar39;
          local_248._0_4_ = 0;
          uStack_230 = 0;
          while (local_248._4_4_ == 0) {
            lVar27 = (longlong)(int)(uint)local_248;
            uStack_230 = uStack_230 + 0x20;
            uVar22 = (uint)local_248 + 1;
            local_248._4_4_ = 1;
            bVar5 = (int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)(uint)local_248;
            local_238._4_4_ = iVar14;
            local_248._0_4_ = uVar22;
            if (bVar5) goto LAB_1422a9564;
            local_248._4_4_ = puVar39[lVar27 + 1];
          }
          local_248._4_4_ = -local_248._4_4_ & local_248._4_4_;
          iVar15 = 0x1f;
          if (local_248._4_4_ != 0) {
            for (; local_248._4_4_ >> iVar15 == 0; iVar15 = iVar15 + -1) {
            }
          }
          if (local_248._4_4_ == 0) {
            iVar15 = 0x20;
          }
          else {
            iVar15 = 0x1f - iVar15;
          }
          local_238._4_4_ = (uStack_230 - iVar15) + 0x1f;
          if (iVar14 < local_238._4_4_) {
            local_238._4_4_ = iVar14;
          }
        }
LAB_1422a9564:
        local_1c0 = local_138;
        uStack_1a8 = (undefined1  [8])CONCAT44(local_238._4_4_,0xffffffff);
        local_228 = CONCAT44(iStack_22c,uStack_230);
        uStack_1b8 = (uint)local_248;
        uStack_1b4 = local_248._4_4_;
        local_268._4_4_ = iVar14;
        local_268._0_4_ = -1 << ((byte)uVar25 & 0x1f);
        uStack_240 = (uint)local_248;
        uStack_23c = local_248._4_4_;
        uStack_230 = 0xffffffff;
        iStack_22c = local_238._4_4_;
        local_248 = local_1c0;
        uStack_1a0 = local_228;
        local_238 = puStack_1b0;
        while (((iStack_22c != iVar14 || (local_238 != local_128)) || (local_248 != local_138))) {
          *(float *)(*(longlong *)local_248 + 8 + (longlong)iStack_22c * 0x18) =
               *(float *)(*(longlong *)local_248 + 8 + (longlong)iStack_22c * 0x18) / fVar74;
          uStack_230 = uStack_230 & ~uStack_23c;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_240);
        }
      }
      lVar27 = (longlong)(int)local_288;
      local_1e0 = CONCAT44(local_1e0._4_4_,local_288);
      local_1d8 = lVar27;
      if (0 < (int)local_288) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_1e8);
        uVar16 = local_110 & 0xffffffff;
        local_250 = local_1e8;
        local_280 = local_1d0 + 1;
        local_218 = (float *)0x0;
        pfVar17 = local_1e8;
        local_198 = local_1e8;
        do {
          pfVar23 = (float *)0x0;
          local_288 = *local_280;
          if (local_288 != -NAN) {
            local_1e8 = (float *)0x0;
            uStack_270 = local_128;
            uVar22 = 0;
            local_1e0 = local_1e0 & 0xffffffff;
            local_248 = (float *)0x0;
            uStack_23c = 0;
            local_278._0_4_ = 0;
            fVar74 = 0.0;
            local_278._4_4_ = 1;
            _local_268 = ZEXT412(0xffffffff);
            iVar14 = (int)uVar16;
            if (iVar14 != 0) {
              puVar39 = local_128;
              if (local_118 != (uint *)0x0) {
                puVar39 = local_118;
              }
              uVar40 = *puVar39;
              pfVar24 = pfVar23;
              pfVar31 = pfVar23;
              while (uVar12 = local_268._0_4_, uVar40 == 0) {
                iVar15 = (int)pfVar24;
                uVar22 = (int)pfVar31 + 0x20;
                pfVar31 = (float *)(ulonglong)uVar22;
                local_278._0_4_ = iVar15 + 1;
                pfVar24 = (float *)(ulonglong)(uint)local_278;
                uVar25 = CONCAT44(uStack_260._4_4_,uVar22);
                auVar49._8_8_ = 0;
                auVar49._0_8_ = uVar25;
                _local_268 = auVar49 << 0x40;
                if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar15) {
                  local_268._4_4_ = iVar14;
                  local_268 = (undefined1  [8])CONCAT44(local_268._4_4_,uVar12);
                  uStack_260 = uVar25;
                  goto LAB_1422a979a;
                }
                uVar40 = puVar39[(longlong)iVar15 + 1];
                local_268._0_4_ = 0xffffffff;
              }
              local_278._4_4_ = -uVar40 & uVar40;
              iVar15 = 0x1f;
              if (local_278._4_4_ != 0) {
                for (; local_278._4_4_ >> iVar15 == 0; iVar15 = iVar15 + -1) {
                }
              }
              if (local_278._4_4_ == 0) {
                iVar15 = 0x20;
              }
              else {
                iVar15 = 0x1f - iVar15;
              }
              iVar15 = (uVar22 - iVar15) + 0x1f;
              if (iVar14 < iVar15) {
                iVar15 = iVar14;
              }
              local_268._4_4_ = iVar15;
            }
LAB_1422a979a:
            uStack_150 = local_268;
            pfVar24 = (float *)0x0;
            uStack_160 = CONCAT44(local_278._4_4_,(uint)local_278);
            local_268._4_4_ = iVar14;
            uStack_148 = uStack_260;
            local_1c0 = local_138;
            local_268._0_4_ = -1 << ((byte)uVar16 & 0x1f);
            local_190 = (uint *)((ulonglong)local_268 >> 0x20);
            uStack_1b8 = (uint)local_278;
            uStack_1b4 = local_278._4_4_;
            uStack_1a8 = uStack_150;
            uStack_1a0 = uStack_260;
            pfVar31 = pfVar23;
            pfVar43 = pfVar23;
            pfVar44 = pfVar23;
            puStack_1b0 = uStack_270;
            local_168 = local_1c0;
            puStack_158 = uStack_270;
            while( true ) {
              param_1 = local_188;
              iVar14 = (int)pfVar43;
              if (((uStack_1a8._4_4_ == (float)(int)local_190) && (puStack_1b0 == local_128)) &&
                 (local_1c0 == local_138)) break;
              plVar34 = *(longlong **)
                         (*(longlong *)local_1c0 + (longlong)(int)uStack_1a8._4_4_ * 0x18);
              fVar42 = *(float *)(*(longlong *)local_1c0 + 8 +
                                 (longlong)(int)uStack_1a8._4_4_ * 0x18);
              if (*(char *)((longlong)local_218 + plVar34[2]) != '\0') {
                lVar27 = (longlong)iVar14;
                puVar33 = (undefined8 *)((longlong)pfVar17 + (*plVar34 - (longlong)local_198));
                uVar22 = iVar14 + 1;
                local_1e0 = CONCAT44(local_1e0._4_4_,uVar22);
                if ((int)pfVar23 < (int)uVar22) {
                  TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_1e8,pfVar43);
                  pfVar31 = local_1e8;
                  uVar22 = (uint)local_1e0;
                }
                pfVar43 = (float *)(ulonglong)uVar22;
                uVar32 = puVar33[1];
                *(undefined8 *)(pfVar31 + lVar27 * 0xc) = *puVar33;
                *(undefined8 *)(pfVar31 + lVar27 * 0xc + 2) = uVar32;
                uVar32 = puVar33[3];
                *(undefined8 *)(pfVar31 + lVar27 * 0xc + 4) = puVar33[2];
                *(undefined8 *)(pfVar31 + lVar27 * 0xc + 4 + 2) = uVar32;
                fVar45 = *(float *)((longlong)puVar33 + 0x24);
                fVar46 = *(float *)(puVar33 + 5);
                fVar1 = *(float *)((longlong)puVar33 + 0x2c);
                iVar14 = (int)pfVar44;
                pfVar23 = pfVar31 + lVar27 * 0xc + 8;
                *pfVar23 = *(float *)(puVar33 + 4);
                pfVar23[1] = fVar45;
                pfVar23[2] = fVar46;
                pfVar23[3] = fVar1;
                uStack_240 = iVar14 + 1;
                if ((int)uStack_23c < (int)uStack_240) {
                  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_248,pfVar44);
                  pfVar24 = local_248;
                }
                pfVar44 = (float *)(ulonglong)uStack_240;
                pfVar24[iVar14] = fVar42;
                fVar74 = fVar74 + fVar42;
              }
              uStack_1a8 = (undefined1  [8])
                           CONCAT44(uStack_1a8._4_4_,(uint)uStack_1a8 & ~uStack_1b4);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1b8);
              pfVar23 = (float *)(local_1e0 >> 0x20);
            }
            lVar27 = (longlong)(int)local_288;
            if ((*(char *)(local_188 + 0x110) != '\0') || (fVar74 < 1.0)) {
              lVar28 = 0;
              lVar35 = lVar28;
            }
            else {
              lVar28 = 0x30;
              lVar35 = 1;
            }
            iVar15 = (int)lVar35;
            if ((iVar14 == 0) || (*(char *)(local_188 + 0x110) != '\0')) {
              puVar33 = (undefined8 *)(lVar27 * 0x30 + *local_220);
              uVar32 = puVar33[1];
              *(undefined8 *)pfVar17 = *puVar33;
              *(undefined8 *)(pfVar17 + 2) = uVar32;
              fVar74 = *(float *)((longlong)puVar33 + 0x14);
              fVar42 = *(float *)(puVar33 + 3);
              fVar45 = *(float *)((longlong)puVar33 + 0x1c);
              pfVar17[4] = *(float *)(puVar33 + 2);
              pfVar17[5] = fVar74;
              pfVar17[6] = fVar42;
              pfVar17[7] = fVar45;
              fVar74 = *(float *)(puVar33 + 4);
              fVar42 = *(float *)((longlong)puVar33 + 0x24);
              fVar45 = *(float *)(puVar33 + 5);
              fVar46 = *(float *)((longlong)puVar33 + 0x2c);
            }
            else {
              if (iVar15 == 0) {
                local_288 = 1.0 - fVar74;
                pfVar23 = (float *)(lVar27 * 0x30 + *local_220);
                fVar47 = pfVar23[4] * local_288;
                fVar63 = pfVar23[5] * local_288;
                fVar64 = pfVar23[6] * local_288;
                fVar65 = pfVar23[7] * local_288;
                fVar1 = pfVar23[1];
                fVar9 = pfVar23[2];
                fVar10 = pfVar23[3];
                fVar74 = pfVar23[8] * local_288;
                fVar42 = pfVar23[9] * local_288;
                fVar45 = pfVar23[10] * local_288;
                fVar46 = pfVar23[0xb] * local_288;
                *pfVar17 = local_288 * *pfVar23;
                pfVar17[1] = local_288 * fVar1;
                pfVar17[2] = local_288 * fVar9;
                pfVar17[3] = local_288 * fVar10;
              }
              else {
                fVar1 = *local_248;
                fVar9 = pfVar31[1];
                fVar10 = pfVar31[2];
                fVar11 = pfVar31[3];
                fVar47 = pfVar31[4] * fVar1;
                fVar63 = pfVar31[5] * fVar1;
                fVar64 = pfVar31[6] * fVar1;
                fVar65 = pfVar31[7] * fVar1;
                fVar74 = pfVar31[8] * fVar1;
                fVar42 = pfVar31[9] * fVar1;
                fVar45 = pfVar31[10] * fVar1;
                fVar46 = pfVar31[0xb] * fVar1;
                *pfVar17 = *pfVar31 * fVar1;
                pfVar17[1] = fVar9 * fVar1;
                pfVar17[2] = fVar10 * fVar1;
                pfVar17[3] = fVar11 * fVar1;
              }
              pfVar17[4] = fVar47;
              pfVar17[5] = fVar63;
              pfVar17[6] = fVar64;
              pfVar17[7] = fVar65;
            }
            pfVar17[8] = fVar74;
            pfVar17[9] = fVar42;
            pfVar17[10] = fVar45;
            pfVar17[0xb] = fVar46;
            fVar73 = fRam0000000146aef2bc;
            fVar71 = fRam0000000146aef2b8;
            fVar69 = fRam0000000146aef2b4;
            fVar67 = _DAT_146aef2b0;
            fVar62 = fRam0000000146aef2ac;
            fVar60 = fRam0000000146aef2a8;
            fVar57 = fRam0000000146aef2a4;
            fVar54 = _DAT_146aef2a0;
            fVar65 = fRam0000000146aef29c;
            fVar64 = fRam0000000146aef298;
            fVar63 = fRam0000000146aef294;
            fVar47 = _DAT_146aef290;
            fVar11 = fRam0000000146aef28c;
            fVar10 = fRam0000000146aef288;
            fVar9 = fRam0000000146aef284;
            fVar1 = _DAT_146aef280;
            fVar46 = fRam0000000146aef27c;
            fVar45 = fRam0000000146aef278;
            fVar42 = fRam0000000146aef274;
            fVar74 = _DAT_146aef270;
            if (iVar15 < iVar14) {
              pfVar24 = (float *)(lVar28 + 0x20 + (longlong)pfVar31);
              pfVar23 = local_248 + lVar35;
              uVar16 = (ulonglong)(uint)(iVar14 - iVar15);
              do {
                if (*(char *)(local_188 + 0x110) == '\0') {
                  fVar2 = *pfVar23;
                  fVar55 = pfVar24[-8] * fVar2;
                  fVar58 = pfVar24[-7] * fVar2;
                  fVar61 = pfVar24[-6] * fVar2;
                  fVar66 = pfVar24[-5] * fVar2;
                  fVar53 = *pfVar17 * fVar55 + pfVar17[2] * fVar61;
                  fVar56 = pfVar17[1] * fVar58 + pfVar17[3] * fVar66;
                  fVar59 = pfVar17[2] * fVar61 + *pfVar17 * fVar55;
                  fVar52 = pfVar17[3] * fVar66 + pfVar17[1] * fVar58;
                  *pfVar17 = (float)(-(uint)(0.0 <= fVar56 + fVar53) &
                                     ((uint)(0.0 - fVar55) ^ (uint)fVar55) ^ (uint)(0.0 - fVar55)) +
                             *pfVar17;
                  pfVar17[1] = (float)(-(uint)(0.0 <= fVar59 + fVar56) &
                                       ((uint)(0.0 - fVar58) ^ (uint)fVar58) ^ (uint)(0.0 - fVar58))
                               + pfVar17[1];
                  pfVar17[2] = (float)(-(uint)(0.0 <= fVar52 + fVar59) &
                                       ((uint)(0.0 - fVar61) ^ (uint)fVar61) ^ (uint)(0.0 - fVar61))
                               + pfVar17[2];
                  pfVar17[3] = (float)(-(uint)(0.0 <= fVar53 + fVar52) &
                                       ((uint)(0.0 - fVar66) ^ (uint)fVar66) ^ (uint)(0.0 - fVar66))
                               + pfVar17[3];
                  fVar53 = pfVar24[-3];
                  fVar56 = pfVar24[-2];
                  fVar59 = pfVar24[-1];
                  pfVar17[4] = pfVar24[-4] * fVar2 + pfVar17[4];
                  pfVar17[5] = fVar53 * fVar2 + pfVar17[5];
                  pfVar17[6] = fVar56 * fVar2 + pfVar17[6];
                  pfVar17[7] = fVar59 * fVar2 + pfVar17[7];
                  fVar53 = pfVar24[1];
                  fVar56 = pfVar24[2];
                  fVar59 = pfVar24[3];
                  pfVar17[8] = fVar2 * *pfVar24 + pfVar17[8];
                  pfVar17[9] = fVar2 * fVar53 + pfVar17[9];
                  pfVar17[10] = fVar2 * fVar56 + pfVar17[10];
                  pfVar17[0xb] = fVar2 * fVar59 + pfVar17[0xb];
                }
                else {
                  fVar2 = *pfVar17;
                  fVar53 = pfVar17[1];
                  fVar56 = pfVar17[2];
                  fVar59 = pfVar17[3];
                  auVar48._0_4_ = fVar2 * fVar2 + fVar56 * fVar56;
                  auVar48._4_4_ = fVar53 * fVar53 + fVar59 * fVar59;
                  auVar48._8_4_ = fVar56 * fVar56 + fVar2 * fVar2;
                  auVar48._12_4_ = fVar59 * fVar59 + fVar53 * fVar53;
                  fVar66 = auVar48._4_4_ + auVar48._0_4_;
                  fVar68 = auVar48._8_4_ + auVar48._4_4_;
                  fVar70 = auVar48._12_4_ + auVar48._8_4_;
                  fVar72 = auVar48._0_4_ + auVar48._12_4_;
                  auVar6._4_4_ = fVar68;
                  auVar6._0_4_ = fVar66;
                  auVar6._8_4_ = fVar70;
                  auVar6._12_4_ = fVar72;
                  auVar49 = rsqrtps(auVar48,auVar6);
                  fVar52 = auVar49._0_4_;
                  fVar55 = auVar49._4_4_;
                  fVar58 = auVar49._8_4_;
                  fVar61 = auVar49._12_4_;
                  fVar52 = (fVar74 - fVar52 * fVar52 * fVar66 * fVar74) * fVar52 + fVar52;
                  fVar55 = (fVar42 - fVar55 * fVar55 * fVar68 * fVar42) * fVar55 + fVar55;
                  fVar58 = (fVar45 - fVar58 * fVar58 * fVar70 * fVar45) * fVar58 + fVar58;
                  fVar61 = (fVar46 - fVar61 * fVar61 * fVar72 * fVar46) * fVar61 + fVar61;
                  fVar76 = (float)(((uint)(((fVar74 - fVar52 * fVar52 * fVar66 * fVar74) * fVar52 +
                                           fVar52) * fVar2) ^ (uint)_DAT_146aef260) &
                                   -(uint)(fVar1 <= fVar66) ^ (uint)_DAT_146aef260);
                  fVar77 = (float)(((uint)(((fVar42 - fVar55 * fVar55 * fVar68 * fVar42) * fVar55 +
                                           fVar55) * fVar53) ^ (uint)fRam0000000146aef264) &
                                   -(uint)(fVar9 <= fVar68) ^ (uint)fRam0000000146aef264);
                  fVar78 = (float)(((uint)(((fVar45 - fVar58 * fVar58 * fVar70 * fVar45) * fVar58 +
                                           fVar58) * fVar56) ^ (uint)fRam0000000146aef268) &
                                   -(uint)(fVar10 <= fVar70) ^ (uint)fRam0000000146aef268);
                  fVar79 = (float)(((uint)(((fVar46 - fVar61 * fVar61 * fVar72 * fVar46) * fVar61 +
                                           fVar61) * fVar59) ^ (uint)fRam0000000146aef26c) &
                                   -(uint)(fVar11 <= fVar72) ^ (uint)fRam0000000146aef26c);
                  *pfVar17 = fVar76;
                  pfVar17[1] = fVar77;
                  pfVar17[2] = fVar78;
                  pfVar17[3] = fVar79;
                  fVar2 = *pfVar23;
                  fVar68 = (float)(((uint)(0.0 - _DAT_146aef260) ^ (uint)_DAT_146aef260) &
                                   -(uint)(0.0 <= pfVar24[-8]) ^ (uint)(0.0 - _DAT_146aef260)) *
                           (_DAT_146aef210 - fVar2) + fVar2 * pfVar24[-8];
                  fVar70 = (float)(((uint)(0.0 - fRam0000000146aef264) ^ (uint)fRam0000000146aef264)
                                   & -(uint)(0.0 <= pfVar24[-7]) ^
                                  (uint)(0.0 - fRam0000000146aef264)) *
                           (fRam0000000146aef214 - fVar2) + fVar2 * pfVar24[-7];
                  fVar72 = (float)(((uint)(0.0 - fRam0000000146aef268) ^ (uint)fRam0000000146aef268)
                                   & -(uint)(0.0 <= pfVar24[-6]) ^
                                  (uint)(0.0 - fRam0000000146aef268)) *
                           (fRam0000000146aef218 - fVar2) + fVar2 * pfVar24[-6];
                  fVar75 = (float)(((uint)(0.0 - fRam0000000146aef26c) ^ (uint)fRam0000000146aef26c)
                                   & -(uint)(0.0 <= pfVar24[-5]) ^
                                  (uint)(0.0 - fRam0000000146aef26c)) *
                           (fRam0000000146aef21c - fVar2) + fVar2 * pfVar24[-5];
                  auVar50._0_4_ = fVar68 * fVar68 + fVar72 * fVar72;
                  auVar50._4_4_ = fVar70 * fVar70 + fVar75 * fVar75;
                  auVar50._8_4_ = fVar72 * fVar72 + fVar68 * fVar68;
                  auVar50._12_4_ = fVar75 * fVar75 + fVar70 * fVar70;
                  fVar55 = auVar50._4_4_ + auVar50._0_4_;
                  fVar58 = auVar50._8_4_ + auVar50._4_4_;
                  fVar61 = auVar50._12_4_ + auVar50._8_4_;
                  fVar66 = auVar50._0_4_ + auVar50._12_4_;
                  auVar7._4_4_ = fVar58;
                  auVar7._0_4_ = fVar55;
                  auVar7._8_4_ = fVar61;
                  auVar7._12_4_ = fVar66;
                  auVar49 = rsqrtps(auVar50,auVar7);
                  fVar53 = auVar49._0_4_;
                  fVar56 = auVar49._4_4_;
                  fVar59 = auVar49._8_4_;
                  fVar52 = auVar49._12_4_;
                  fVar53 = (fVar74 - fVar53 * fVar53 * fVar55 * fVar74) * fVar53 + fVar53;
                  fVar56 = (fVar42 - fVar56 * fVar56 * fVar58 * fVar42) * fVar56 + fVar56;
                  fVar59 = (fVar45 - fVar59 * fVar59 * fVar61 * fVar45) * fVar59 + fVar59;
                  fVar52 = (fVar46 - fVar52 * fVar52 * fVar66 * fVar46) * fVar52 + fVar52;
                  fVar53 = (float)(((uint)(((fVar74 - fVar53 * fVar53 * fVar55 * fVar74) * fVar53 +
                                           fVar53) * fVar68) ^ (uint)_DAT_146aef260) &
                                   -(uint)(fVar1 <= fVar55) ^ (uint)_DAT_146aef260);
                  fVar56 = (float)(((uint)(((fVar42 - fVar56 * fVar56 * fVar58 * fVar42) * fVar56 +
                                           fVar56) * fVar70) ^ (uint)fRam0000000146aef264) &
                                   -(uint)(fVar9 <= fVar58) ^ (uint)fRam0000000146aef264);
                  fVar59 = (float)(((uint)(((fVar45 - fVar59 * fVar59 * fVar61 * fVar45) * fVar59 +
                                           fVar59) * fVar72) ^ (uint)fRam0000000146aef268) &
                                   -(uint)(fVar10 <= fVar61) ^ (uint)fRam0000000146aef268);
                  fVar52 = (float)(((uint)(((fVar46 - fVar52 * fVar52 * fVar66 * fVar46) * fVar52 +
                                           fVar52) * fVar75) ^ (uint)fRam0000000146aef26c) &
                                   -(uint)(fVar11 <= fVar66) ^ (uint)fRam0000000146aef26c);
                  *pfVar17 = fVar53 * fVar79 * fVar67 + fVar52 * fVar76 + fVar56 * fVar78 * fVar54 +
                             fVar59 * fVar77 * fVar47;
                  pfVar17[1] = fVar53 * fVar78 * fVar69 + fVar52 * fVar77 + fVar56 * fVar79 * fVar57
                               + fVar59 * fVar76 * fVar63;
                  pfVar17[2] = fVar53 * fVar77 * fVar71 + fVar52 * fVar78 + fVar56 * fVar76 * fVar60
                               + fVar59 * fVar79 * fVar64;
                  pfVar17[3] = fVar53 * fVar76 * fVar73 + fVar52 * fVar79 + fVar56 * fVar77 * fVar62
                               + fVar59 * fVar78 * fVar65;
                  fVar53 = pfVar24[-3];
                  fVar56 = pfVar24[-2];
                  fVar59 = pfVar24[-1];
                  fVar52 = *pfVar24;
                  fVar55 = pfVar24[1];
                  fVar58 = pfVar24[2];
                  fVar61 = pfVar24[3];
                  pfVar17[4] = (pfVar24[-4] - 0.0) * fVar2 + 0.0 + pfVar17[4];
                  pfVar17[5] = (fVar53 - 0.0) * fVar2 + 0.0 + pfVar17[5];
                  pfVar17[6] = (fVar56 - 0.0) * fVar2 + 0.0 + pfVar17[6];
                  pfVar17[7] = (fVar59 - 0.0) * fVar2 + 0.0 + pfVar17[7];
                  pfVar17[8] = ((fVar52 - 0.0) * fVar2 + 0.0 + 1.0) * pfVar17[8];
                  pfVar17[9] = ((fVar55 - 0.0) * fVar2 + 0.0 + 1.0) * pfVar17[9];
                  pfVar17[10] = ((fVar58 - 0.0) * fVar2 + 0.0 + 1.0) * pfVar17[10];
                  pfVar17[0xb] = ((fVar61 - 0.0) * fVar2 + 0.0 + 0.0) * pfVar17[0xb];
                }
                pfVar23 = pfVar23 + 1;
                pfVar24 = pfVar24 + 0xc;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
            if (local_248 != (float *)0x0) {
              FMemory::Free(local_248);
            }
            if (pfVar31 != (float *)0x0) {
              FMemory::Free(pfVar31);
            }
            uVar16 = local_110 & 0xffffffff;
            lVar27 = local_1d8;
          }
          local_280 = local_280 + 2;
          local_218 = (float *)((longlong)local_218 + 1);
          pfVar17 = pfVar17 + 0xc;
          plVar34 = local_1c8;
          fVar42 = local_284;
        } while ((longlong)local_218 < lVar27);
      }
      local_178 = CONCAT44(local_178._4_4_,fVar42);
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(&local_180,0);
      pfVar23 = local_180;
      local_280 = local_180;
      iVar14 = 0;
      pfVar17 = local_180 + 3;
      fVar74 = fVar42;
      do {
        pfVar17[-3] = 0.0;
        pfVar17[-2] = 0.0;
        pfVar17[-1] = 0.0;
        pfVar17[0] = 0.0;
        pfVar17[1] = 0.0;
        pfVar17[2] = 0.0;
        *(undefined2 *)(pfVar17 + 3) = 0;
        *(undefined1 *)((longlong)pfVar17 + 0xe) = 0;
        pfVar17 = pfVar17 + 8;
        fVar74 = (float)((int)fVar74 - 1);
      } while (fVar74 != 0.0);
      uStack_208 = (float *)CONCAT44(uStack_208._4_4_,fVar42);
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_210,0);
      uStack_270 = local_128;
      local_278._0_4_ = 0;
      local_278._4_4_ = 1;
      _local_268 = ZEXT412(0xffffffff);
      fVar74 = 0.0;
      if ((float)local_110 != 0.0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_278);
        fVar74 = (float)local_110;
      }
      auVar49 = _local_268;
      plVar30 = (longlong *)0x0;
      local_1c0 = local_138;
      uStack_1a8 = local_268;
      uStack_1a0 = uStack_260;
      bVar18 = SUB41(fVar74,0) & 0x1f;
      iVar15 = 1 << bVar18;
      local_190 = local_128;
      local_268._4_4_ = fVar74;
      local_198 = local_138;
      local_268._0_4_ = -1 << bVar18;
      auVar6 = _local_268;
      uStack_1b8 = (uint)local_278;
      uStack_1b4 = local_278._4_4_;
      uStack_260._4_4_ = auVar49._12_4_;
      local_268 = auVar6._0_8_;
      uStack_260._0_4_ = (uint)fVar74 & 0xffffffe0;
      uStack_160 = CONCAT44(iVar15,(int)fVar74 >> 5);
      local_1c8 = (longlong *)0x0;
      local_218 = local_210;
      puStack_1b0 = uStack_270;
      uStack_150 = local_268;
      uStack_148 = uStack_260;
      uStack_260 = local_268;
      local_268 = (undefined1  [8])local_190;
      uStack_270 = (uint *)CONCAT44(iVar15,(int)fVar74 >> 5);
      plVar41 = plVar30;
      pfVar17 = local_210;
      local_288 = fVar74;
      local_168 = local_198;
      puStack_158 = local_190;
      local_278 = local_198;
      while( true ) {
        if (((uStack_1a8._4_4_ == local_288) && (puStack_1b0 == local_190)) &&
           (local_1c0 == local_198)) break;
        local_188 = *(longlong *)(*(longlong *)local_1c0 + (longlong)(int)uStack_1a8._4_4_ * 0x18);
        *(undefined4 *)((longlong)plVar30 + (longlong)pfVar17) =
             *(undefined4 *)(*(longlong *)local_1c0 + 8 + (longlong)(int)uStack_1a8._4_4_ * 0x18);
        plVar30 = (longlong *)((longlong)pfVar23 + (longlong)plVar41);
        if (plVar34 != plVar30) {
          puVar33 = (undefined8 *)plVar34[2];
          sVar19 = 0;
          plVar30[2] = (longlong)puVar33;
          if ((puVar33 != (undefined8 *)0x0) &&
             (lVar27 = (longlong)*(int *)(puVar33 + 1), 0 < lVar27)) {
            psVar29 = (short *)*puVar33;
            sVar20 = 0;
            do {
              sVar19 = sVar20 + 1;
              if (*psVar29 == -1) {
                sVar19 = sVar20;
              }
              lVar27 = lVar27 + -1;
              psVar29 = psVar29 + 1;
              sVar20 = sVar19;
            } while (lVar27 != 0);
          }
          *(short *)(plVar30 + 3) = sVar19;
          *(undefined4 *)(plVar30 + 1) = 0;
          if ((*(int *)((longlong)plVar30 + 0xc) < 0) && (*(int *)((longlong)plVar30 + 0xc) != 0)) {
            FUN_140957580(plVar30);
          }
          uVar4 = *(ushort *)(plVar30 + 3);
          lVar27 = plVar30[1];
          iVar15 = (uint)uVar4 + (int)lVar27;
          *(int *)(plVar30 + 1) = iVar15;
          if (*(int *)((longlong)plVar30 + 0xc) < iVar15) {
            FUN_140848b80(plVar30);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar30 + (longlong)(int)lVar27 * 8),0,(ulonglong)uVar4 << 3);
          *(undefined1 *)((longlong)plVar30 + 0x1a) = 1;
          pfVar17 = local_218;
          pfVar23 = local_280;
        }
        FUN_1422ac740(param_1 + 0x80,local_188,pfVar23 + (longlong)iVar14 * 8);
        uStack_1a8 = (undefined1  [8])CONCAT44(uStack_1a8._4_4_,(uint)uStack_1a8 & ~uStack_1b4);
        plVar30 = (longlong *)((longlong)local_1c8 + 4);
        iVar14 = iVar14 + 1;
        plVar41 = plVar41 + 4;
        local_1c8 = plVar30;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1b8);
      }
      iVar14 = (int)local_178;
      if (0 < (int)local_178) {
        FBaseBlendedCurve<TMemStackAllocator<0>_>::Override(plVar34,pfVar23,*pfVar17);
        if (1 < iVar14) {
          uVar16 = (ulonglong)(iVar14 - 1);
          pfVar24 = pfVar23;
          do {
            pfVar17 = pfVar17 + 1;
            pfVar24 = pfVar24 + 8;
            fVar74 = *pfVar17;
            if ((1e-05 < fVar74) && (0 < (int)plVar34[1])) {
              lVar27 = *(longlong *)pfVar24;
              uVar25 = 0;
              uVar36 = 0;
              do {
                if ((*(char *)(*plVar34 + 4 + uVar25) == '\0') &&
                   (*(char *)(lVar27 + 4 + uVar25) == '\0')) {
                  uVar13 = 0;
                }
                else {
                  uVar13 = 1;
                }
                *(undefined1 *)(*plVar34 + 4 + uVar25) = uVar13;
                uVar22 = (int)uVar36 + 1;
                uVar36 = (ulonglong)uVar22;
                lVar27 = *(longlong *)pfVar24;
                *(float *)(*plVar34 + uVar25) =
                     fVar74 * *(float *)(lVar27 + uVar25) + *(float *)(*plVar34 + uVar25);
                uVar25 = uVar25 + 8;
              } while ((int)uVar22 < (int)plVar34[1]);
            }
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
      }
      plVar34 = local_220;
      pfVar17 = local_250;
      iVar14 = 0;
      if (0 < local_1d8) {
        pfVar24 = local_250 + 8;
        pfVar31 = local_1d0 + 1;
        lVar27 = local_1d8;
        do {
          if (*pfVar31 != -NAN) {
            local_298 = *(undefined1 *)(param_1 + 0x110);
            local_2a0 = local_170;
            local_2a8 = pfVar31;
            FUN_1422521e0(local_140,param_1 + 0x118,pfVar17 + (longlong)iVar14 * 0xc,pfVar31[-1]);
            uVar32 = *(undefined8 *)(pfVar24 + -6);
            puVar33 = (undefined8 *)((longlong)(int)*pfVar31 * 0x30 + *plVar34);
            *puVar33 = *(undefined8 *)(pfVar24 + -8);
            puVar33[1] = uVar32;
            *(undefined1 (*) [16])(puVar33 + 2) = *(undefined1 (*) [16])(pfVar24 + -4);
            fVar74 = pfVar24[1];
            fVar42 = pfVar24[2];
            fVar45 = pfVar24[3];
            *(float *)(puVar33 + 4) = *pfVar24;
            *(float *)((longlong)puVar33 + 0x24) = fVar74;
            *(float *)(puVar33 + 5) = fVar42;
            *(float *)((longlong)puVar33 + 0x2c) = fVar45;
            fVar11 = fRam0000000146aef28c;
            fVar10 = fRam0000000146aef288;
            fVar9 = fRam0000000146aef284;
            fVar1 = _DAT_146aef280;
            fVar46 = fRam0000000146aef27c;
            fVar45 = fRam0000000146aef278;
            fVar42 = fRam0000000146aef274;
            fVar74 = _DAT_146aef270;
            pfVar23 = (float *)*plVar34;
            pfVar43 = pfVar23 + (longlong)(int)plVar34[1] * 0xc;
            for (; pfVar23 != pfVar43; pfVar23 = pfVar23 + 0xc) {
              fVar47 = *pfVar23;
              fVar63 = pfVar23[1];
              fVar64 = pfVar23[2];
              fVar65 = pfVar23[3];
              auVar51._0_4_ = fVar47 * fVar47 + fVar64 * fVar64;
              auVar51._4_4_ = fVar63 * fVar63 + fVar65 * fVar65;
              auVar51._8_4_ = fVar64 * fVar64 + fVar47 * fVar47;
              auVar51._12_4_ = fVar65 * fVar65 + fVar63 * fVar63;
              fVar67 = auVar51._4_4_ + auVar51._0_4_;
              fVar69 = auVar51._8_4_ + auVar51._4_4_;
              fVar71 = auVar51._12_4_ + auVar51._8_4_;
              fVar73 = auVar51._0_4_ + auVar51._12_4_;
              auVar8._4_4_ = fVar69;
              auVar8._0_4_ = fVar67;
              auVar8._8_4_ = fVar71;
              auVar8._12_4_ = fVar73;
              auVar49 = rsqrtps(auVar51,auVar8);
              fVar54 = auVar49._0_4_;
              fVar57 = auVar49._4_4_;
              fVar60 = auVar49._8_4_;
              fVar62 = auVar49._12_4_;
              fVar54 = (fVar74 - fVar54 * fVar54 * fVar67 * fVar74) * fVar54 + fVar54;
              fVar57 = (fVar42 - fVar57 * fVar57 * fVar69 * fVar42) * fVar57 + fVar57;
              fVar60 = (fVar45 - fVar60 * fVar60 * fVar71 * fVar45) * fVar60 + fVar60;
              fVar62 = (fVar46 - fVar62 * fVar62 * fVar73 * fVar46) * fVar62 + fVar62;
              fVar63 = (float)(((uint)(((fVar42 - fVar57 * fVar57 * fVar69 * fVar42) * fVar57 +
                                       fVar57) * fVar63) ^ (uint)fRam0000000146aef264) &
                               -(uint)(fVar9 <= fVar69) ^ (uint)fRam0000000146aef264);
              fVar64 = (float)(((uint)(((fVar45 - fVar60 * fVar60 * fVar71 * fVar45) * fVar60 +
                                       fVar60) * fVar64) ^ (uint)fRam0000000146aef268) &
                               -(uint)(fVar10 <= fVar71) ^ (uint)fRam0000000146aef268);
              fVar65 = (float)(((uint)(((fVar46 - fVar62 * fVar62 * fVar73 * fVar46) * fVar62 +
                                       fVar62) * fVar65) ^ (uint)fRam0000000146aef26c) &
                               -(uint)(fVar11 <= fVar73) ^ (uint)fRam0000000146aef26c);
              *pfVar23 = (float)(((uint)(((fVar74 - fVar54 * fVar54 * fVar67 * fVar74) * fVar54 +
                                         fVar54) * fVar47) ^ (uint)_DAT_146aef260) &
                                 -(uint)(fVar1 <= fVar67) ^ (uint)_DAT_146aef260);
              pfVar23[1] = fVar63;
              pfVar23[2] = fVar64;
              pfVar23[3] = fVar65;
            }
          }
          iVar14 = iVar14 + 1;
          pfVar31 = pfVar31 + 2;
          pfVar24 = pfVar24 + 0xc;
          lVar27 = lVar27 + -1;
          pfVar23 = local_280;
        } while (lVar27 != 0);
      }
      if (local_218 != (float *)0x0) {
        FMemory::Free();
      }
      if (pfVar23 != (float *)0x0) {
        FMemory::Free(pfVar23);
      }
      if (pfVar17 != (float *)0x0) {
        FMemory::Free(pfVar17);
      }
      local_f0 = 0;
      if (local_f8 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (local_138);
      uVar32 = 1;
      goto LAB_1422aa1f3;
    }
    local_f0 = 0;
    if (local_f8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (local_138);
  }
  uVar32 = 0;
LAB_1422aa1f3:
  if (local_1d0 != (float *)0x0) {
    FMemory::Free(local_1d0);
  }
  return uVar32;
}



// FUNCTION 1422aa260 FUN_1422aa260 body=76 status=ok
// SIG undefined FUN_1422aa260(void)

ulonglong FUN_1422aa260(undefined8 param_1,int param_2,longlong param_3,byte param_4)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined8 *)((((ulonglong)param_4 ^ 1) + 0xc) * 0x10 + param_3);
  if (param_2 != -1) {
    iVar1 = *(int *)(puVar2 + 1);
    uVar4 = 0;
    if (0 < iVar1) {
      piVar3 = (int *)*puVar2;
      uVar5 = uVar4;
      do {
        if (*piVar3 == param_2) {
          return uVar5;
        }
        uVar5 = (ulonglong)((int)uVar5 + 1);
        uVar4 = uVar4 + 1;
        piVar3 = piVar3 + 1;
      } while ((longlong)uVar4 < (longlong)iVar1);
    }
  }
  return 0xffffffff;
}



// FUNCTION 1422aa2b0 GetAssetRegistryTags body=279 status=ok
// SIG undefined GetAssetRegistryTags(void)

void UPoseAsset::GetAssetRegistryTags(longlong param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  void *pvVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  void *local_58;
  ulonglong local_50;
  undefined8 local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  
  FUN_1417557f0();
  pvVar5 = (void *)0x0;
  local_58 = (void *)0x0;
  local_50 = 0;
  FString::AppendInt(&local_58,*(undefined4 *)(param_1 + 0x98));
  puVar4 = (undefined8 *)FName::FName(local_res8,"Poses",1);
  _Src = local_58;
  lVar6 = (longlong)(int)local_50;
  local_40 = (void *)0x0;
  local_48 = *puVar4;
  local_38 = (int)local_50;
  if ((int)local_50 == 0) {
    local_34 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_40,local_50 & 0xffffffff,0);
    pvVar5 = local_40;
    ::_guard_xfg_dispatch_icall_nop(local_40,_Src,lVar6 * 2);
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
  puVar4[1] = pvVar5;
  *(int *)(puVar4 + 2) = iVar3;
  *(undefined4 *)((longlong)puVar4 + 0x14) = local_34;
  puVar4[3] = 2;
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1422aa3d0 GetAssetUserDataOfClass body=196 status=ok
// SIG undefined GetAssetUserDataOfClass(void)

longlong UAnimationAsset::GetAssetUserDataOfClass(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x50)) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(lVar6 + *(longlong *)(param_1 + 0x48));
      if (lVar1 != 0) {
        if (param_2 != 0) {
          lVar3 = UAssetUserData::GetPrivateStaticClass();
          lVar4 = param_2;
          do {
            lVar5 = param_2;
            if (lVar4 == lVar3) goto LAB_1422aa430;
            lVar4 = *(longlong *)(lVar4 + 0x30);
          } while (lVar4 != 0);
        }
        lVar5 = 0;
LAB_1422aa430:
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          return lVar1;
        }
      }
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 8;
    } while (iVar7 < *(int *)(param_1 + 0x50));
  }
  return 0;
}



// FUNCTION 1422aa4a0 FUN_1422aa4a0 body=199 status=ok
// SIG undefined FUN_1422aa4a0(void)

longlong FUN_1422aa4a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 800)) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(lVar6 + *(longlong *)(param_1 + 0x318));
      if (lVar1 != 0) {
        if (param_2 != 0) {
          lVar3 = UAssetUserData::GetPrivateStaticClass();
          lVar4 = param_2;
          do {
            lVar5 = param_2;
            if (lVar4 == lVar3) goto LAB_1422aa500;
            lVar4 = *(longlong *)(lVar4 + 0x30);
          } while (lVar4 != 0);
        }
        lVar5 = 0;
LAB_1422aa500:
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          return lVar1;
        }
      }
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 8;
    } while (iVar7 < *(int *)(param_1 + 800));
  }
  return 0;
}



// FUNCTION 1422aa590 FUN_1422aa590 body=85 status=ok
// SIG undefined FUN_1422aa590(void)

undefined8 FUN_1422aa590(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation/BlendSpaceBase.h",
             0x171,L"Pure virtual not implemented (%s)",L"UBlendSpaceBase::GetAxisToScale");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation/BlendSpaceBase.h",
             0x171,L"Pure virtual not implemented (%s)",L"UBlendSpaceBase::GetAxisToScale");
  return 0;
}



// FUNCTION 1422aa5f0 GetBlendParameter body=17 status=ok
// SIG undefined GetBlendParameter(void)

longlong UBlendSpaceBase::GetBlendParameter(longlong param_1,int param_2)

{
  return (longlong)param_2 * 0x20 + 0xe8 + param_1;
}



// FUNCTION 1422aa610 GetBlendSample body=19 status=ok
// SIG undefined GetBlendSample(void)

longlong UBlendSpaceBase::GetBlendSample(longlong param_1,int param_2)

{
  return *(longlong *)(param_1 + 200) + (longlong)param_2 * 0x18;
}



// FUNCTION 1422aa630 FUN_1422aa630 body=28 status=ok
// SIG undefined FUN_1422aa630(void)

undefined1 FUN_1422aa630(longlong param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x58))) {
    return *(undefined1 *)(*(longlong *)(param_1 + 0x50) + 0xc + (longlong)param_2 * 0x10);
  }
  return 0;
}



// FUNCTION 1422aa650 FUN_1422aa650 body=1532 status=ok
// SIG undefined FUN_1422aa650(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1422aa650(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  float *pfVar12;
  float *pfVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar19;
  float fVar20;
  undefined1 auVar18 [16];
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
  undefined1 auStack_198 [32];
  undefined4 local_178;
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
  undefined1 local_108 [48];
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  lVar11 = (longlong)param_5;
  pfVar13 = (float *)(lVar11 * 0x30 + *param_3);
  if (*(char *)(lVar11 + *param_2) == '\0') {
    local_178 = *(undefined4 *)(*(longlong *)(param_4 + 0x20) + 8 + lVar11 * 0x10);
    pfVar12 = (float *)FUN_1422aa650(local_108);
    fVar33 = fRam0000000146aef2d8;
    fVar32 = fRam0000000146aef2d4;
    fVar24 = _DAT_146aef2d0;
    fVar50 = fRam0000000146aef218;
    fVar49 = fRam0000000146aef214;
    fVar48 = _DAT_146aef210;
    auVar14 = *(undefined1 (*) [16])(pfVar13 + 8);
    fVar21 = auVar14._0_4_;
    fVar23 = auVar14._4_4_;
    fVar1 = auVar14._8_4_;
    fVar3 = auVar14._12_4_;
    auVar15 = *(undefined1 (*) [16])(pfVar12 + 8);
    fVar22 = auVar15._0_4_;
    fVar25 = auVar15._4_4_;
    fVar2 = auVar15._8_4_;
    fVar4 = auVar15._12_4_;
    auVar14 = minps(auVar14,auVar15);
    auVar15._4_4_ = -(uint)(auVar14._4_4_ < fRam0000000146aef2d4);
    auVar15._0_4_ = -(uint)(auVar14._0_4_ < _DAT_146aef2d0);
    auVar15._8_4_ = -(uint)(auVar14._8_4_ < fRam0000000146aef2d8);
    auVar15._12_4_ = -(uint)(auVar14._12_4_ < fRam0000000146aef2dc);
    iVar10 = movmskps((int)pfVar12,auVar15);
    if (iVar10 == 0) {
      fVar48 = *pfVar12;
      fVar49 = pfVar12[1];
      fVar50 = pfVar12[2];
      fVar24 = pfVar12[3];
      fVar32 = *pfVar13;
      fVar33 = pfVar13[1];
      fVar34 = pfVar13[2];
      fVar35 = pfVar13[3];
      fVar6 = pfVar12[4];
      fVar16 = pfVar12[5];
      fVar7 = pfVar12[6];
      fVar8 = pfVar12[7];
      fVar39 = pfVar13[4] * fVar22;
      fVar40 = pfVar13[5] * fVar25;
      fVar41 = pfVar13[6] * fVar2;
      fVar42 = pfVar13[7] * fVar4;
      fVar19 = fVar35 * fVar48 * _DAT_146aef2b0;
      fVar30 = fVar34 * fVar48 * fRam0000000146aef2b4;
      fVar20 = fVar33 * fVar48 * fRam0000000146aef2b8;
      fVar29 = fVar32 * fVar48 * fRam0000000146aef2bc;
      fVar17 = fVar34 * fVar49 * _DAT_146aef2a0;
      fVar27 = fVar35 * fVar49 * fRam0000000146aef2a4;
      fVar28 = fVar32 * fVar49 * fRam0000000146aef2a8;
      fVar26 = fVar33 * fVar49 * fRam0000000146aef2ac;
      fVar31 = fVar33 * fVar50 * _DAT_146aef290;
      fVar36 = fVar32 * fVar50 * fRam0000000146aef294;
      fVar37 = fVar35 * fVar50 * fRam0000000146aef298;
      fVar38 = fVar34 * fVar50 * fRam0000000146aef29c;
      pfVar13[8] = fVar21 * fVar22;
      pfVar13[9] = fVar23 * fVar25;
      pfVar13[10] = fVar1 * fVar2;
      pfVar13[0xb] = fVar3 * fVar4;
      *pfVar13 = fVar19 + fVar24 * fVar32 + fVar17 + fVar31;
      pfVar13[1] = fVar30 + fVar24 * fVar33 + fVar27 + fVar36;
      pfVar13[2] = fVar20 + fVar24 * fVar34 + fVar28 + fVar37;
      pfVar13[3] = fVar29 + fVar24 * fVar35 + fVar26 + fVar38;
      fVar21 = fVar41 * fVar49 - fVar40 * fVar50;
      fVar22 = fVar39 * fVar50 - fVar41 * fVar48;
      fVar23 = fVar40 * fVar48 - fVar39 * fVar49;
      fVar25 = fVar42 * fVar24 - fVar42 * fVar24;
      fVar21 = fVar21 + fVar21;
      fVar22 = fVar22 + fVar22;
      fVar23 = fVar23 + fVar23;
      fVar25 = fVar25 + fVar25;
      pfVar13[4] = (fVar23 * fVar49 - fVar22 * fVar50) + fVar24 * fVar21 + fVar39 + fVar6;
      pfVar13[5] = (fVar21 * fVar50 - fVar23 * fVar48) + fVar24 * fVar22 + fVar40 + fVar16;
      pfVar13[6] = (fVar22 * fVar48 - fVar21 * fVar49) + fVar24 * fVar23 + fVar41 + fVar7;
      pfVar13[7] = (fVar25 * fVar24 - fVar25 * fVar24) + fVar24 * fVar25 + fVar42 + fVar8;
    }
    else {
      fVar34 = *pfVar12;
      fVar35 = pfVar12[1];
      fVar6 = pfVar12[2];
      fVar16 = pfVar12[3];
      fVar26 = fVar35 + fVar35;
      fVar28 = fVar6 + fVar6;
      fVar7 = pfVar12[4];
      fVar8 = pfVar12[5];
      fVar17 = pfVar12[6];
      fVar30 = fVar34 * (fVar34 + fVar34);
      fVar27 = (fVar34 + fVar34) * fVar16;
      fVar45 = (fVar28 * fVar16 + fVar26 * fVar34) * fVar22;
      fVar46 = (fVar27 + fVar28 * fVar35) * fVar25;
      fVar47 = (fVar26 * fVar16 + fVar28 * fVar34) * fVar2;
      fVar36 = fVar25 * (fVar26 * fVar34 - fVar28 * fVar16);
      fVar38 = fVar2 * (fVar28 * fVar35 - fVar27);
      fVar40 = fVar22 * (fVar28 * fVar34 - fVar26 * fVar16);
      fVar27 = (float)((uint)((_DAT_146aef210 - (fVar6 * fVar28 + fVar35 * fVar26)) * fVar22) &
                      _DAT_146aef220);
      fVar28 = (float)((uint)((fRam0000000146aef214 - (fVar6 * fVar28 + fVar30)) * fVar25) &
                      uRam0000000146aef224);
      fVar19 = (float)((uint)((fRam0000000146aef218 - (fVar35 * fVar26 + fVar30)) * fVar2) &
                      uRam0000000146aef228);
      fVar20 = (float)((uint)((fRam0000000146aef21c - (fVar30 + fVar30)) * fVar4) &
                      uRam0000000146aef22c);
      fVar34 = *pfVar13;
      fVar35 = pfVar13[1];
      fVar6 = pfVar13[2];
      fVar16 = pfVar13[3];
      fVar30 = fVar35 + fVar35;
      fVar29 = fVar6 + fVar6;
      fVar31 = fVar34 * (fVar34 + fVar34);
      fVar26 = (fVar34 + fVar34) * fVar16;
      fVar42 = (fVar29 * fVar16 + fVar30 * fVar34) * fVar21;
      fVar43 = (fVar26 + fVar29 * fVar35) * fVar23;
      fVar44 = (fVar30 * fVar16 + fVar29 * fVar34) * fVar1;
      fVar37 = fVar23 * (fVar30 * fVar34 - fVar29 * fVar16);
      fVar39 = fVar1 * (fVar29 * fVar35 - fVar26);
      fVar41 = fVar21 * (fVar29 * fVar34 - fVar30 * fVar16);
      fVar16 = (float)((uint)((_DAT_146aef210 - (fVar6 * fVar29 + fVar35 * fVar30)) * fVar21) &
                      _DAT_146aef220);
      fVar26 = (float)((uint)((fRam0000000146aef214 - (fVar6 * fVar29 + fVar31)) * fVar23) &
                      uRam0000000146aef224);
      fVar30 = (float)((uint)((fRam0000000146aef218 - (fVar35 * fVar30 + fVar31)) * fVar1) &
                      uRam0000000146aef228);
      fVar29 = (float)((uint)((fRam0000000146aef21c - (fVar31 + fVar31)) * fVar3) &
                      uRam0000000146aef22c);
      fVar34 = pfVar13[4];
      fVar35 = pfVar13[5];
      fVar6 = pfVar13[6];
      local_158 = fVar42 * fVar36 + fVar16 * fVar27 + fVar41 * fVar47 + fVar29 * fVar7;
      fStack_154 = fVar42 * fVar28 + fVar16 * fVar45 + fVar41 * fVar38 + fVar29 * fVar8;
      fStack_150 = fVar42 * fVar46 + fVar16 * fVar40 + fVar41 * fVar19 + fVar29 * fVar17;
      fStack_14c = fVar42 * fVar20 + fVar16 * fVar20 + fVar41 * fVar20 +
                   fVar29 * fRam0000000146aef21c;
      local_148 = fVar26 * fVar36 + fVar37 * fVar27 + fVar43 * fVar47 + fVar29 * fVar7;
      fStack_144 = fVar26 * fVar28 + fVar37 * fVar45 + fVar43 * fVar38 + fVar29 * fVar8;
      fStack_140 = fVar26 * fVar46 + fVar37 * fVar40 + fVar43 * fVar19 + fVar29 * fVar17;
      fStack_13c = fVar26 * fVar20 + fVar37 * fVar20 + fVar43 * fVar20 +
                   fVar29 * fRam0000000146aef21c;
      local_138 = fVar39 * fVar36 + fVar44 * fVar27 + fVar30 * fVar47 + fVar29 * fVar7;
      fStack_134 = fVar39 * fVar28 + fVar44 * fVar45 + fVar30 * fVar38 + fVar29 * fVar8;
      fStack_130 = fVar39 * fVar46 + fVar44 * fVar40 + fVar30 * fVar19 + fVar29 * fVar17;
      fStack_12c = fVar39 * fVar20 + fVar44 * fVar20 + fVar30 * fVar20 +
                   fVar29 * fRam0000000146aef21c;
      local_128 = fVar35 * fVar36 + fVar34 * fVar27 + fVar6 * fVar47 + fRam0000000146aef21c * fVar7;
      fStack_124 = fVar35 * fVar28 + fVar34 * fVar45 + fVar6 * fVar38 + fRam0000000146aef21c * fVar8
      ;
      fStack_120 = fVar35 * fVar46 + fVar34 * fVar40 + fVar6 * fVar19 +
                   fRam0000000146aef21c * fVar17;
      fStack_11c = fVar35 * fVar20 + fVar34 * fVar20 + fVar6 * fVar20 +
                   fRam0000000146aef21c * fRam0000000146aef21c;
      FMatrix::RemoveScaling(&local_158);
      fVar48 = (float)(-(uint)(fVar24 <= fVar21 * fVar22) & (_DAT_146aef2c0 ^ (uint)fVar48) ^
                      _DAT_146aef2c0);
      fVar49 = (float)(-(uint)(fVar32 <= fVar23 * fVar25) & (uRam0000000146aef2c4 ^ (uint)fVar49) ^
                      uRam0000000146aef2c4);
      fVar50 = (float)(-(uint)(fVar33 <= fVar1 * fVar2) & (uRam0000000146aef2c8 ^ (uint)fVar50) ^
                      uRam0000000146aef2c8);
      local_158 = local_158 * fVar48;
      fStack_154 = fStack_154 * fVar48;
      fStack_150 = fStack_150 * fVar48;
      fStack_144 = fStack_144 * fVar49;
      fStack_140 = fStack_140 * fVar49;
      local_148 = local_148 * fVar49;
      fStack_134 = fStack_134 * fVar50;
      fStack_130 = fStack_130 * fVar50;
      local_138 = local_138 * fVar50;
      FQuat::FQuat(&local_118,&local_158);
      auVar18._0_4_ = local_118 * local_118 + fStack_110 * fStack_110;
      auVar18._4_4_ = fStack_114 * fStack_114 + fStack_10c * fStack_10c;
      auVar18._8_4_ = fStack_110 * fStack_110 + local_118 * local_118;
      auVar18._12_4_ = fStack_10c * fStack_10c + fStack_114 * fStack_114;
      fVar32 = auVar18._4_4_ + auVar18._0_4_;
      fVar33 = auVar18._8_4_ + auVar18._4_4_;
      fVar34 = auVar18._12_4_ + auVar18._8_4_;
      fVar35 = auVar18._0_4_ + auVar18._12_4_;
      auVar5._4_4_ = fVar33;
      auVar5._0_4_ = fVar32;
      auVar5._8_4_ = fVar34;
      auVar5._12_4_ = fVar35;
      auVar14 = rsqrtps(auVar18,auVar5);
      fVar48 = auVar14._0_4_;
      fVar49 = auVar14._4_4_;
      fVar50 = auVar14._8_4_;
      fVar24 = auVar14._12_4_;
      fVar48 = (_DAT_146aef270 - fVar48 * fVar48 * fVar32 * _DAT_146aef270) * fVar48 + fVar48;
      fVar49 = (fRam0000000146aef274 - fVar49 * fVar49 * fVar33 * fRam0000000146aef274) * fVar49 +
               fVar49;
      fVar50 = (fRam0000000146aef278 - fVar50 * fVar50 * fVar34 * fRam0000000146aef278) * fVar50 +
               fVar50;
      fVar24 = (fRam0000000146aef27c - fVar24 * fVar24 * fVar35 * fRam0000000146aef27c) * fVar24 +
               fVar24;
      auVar14._4_4_ = fStack_124;
      auVar14._0_4_ = local_128;
      auVar14._8_4_ = fStack_120;
      fVar48 = (float)(((uint)(((_DAT_146aef270 - fVar48 * fVar48 * fVar32 * _DAT_146aef270) *
                                fVar48 + fVar48) * local_118) ^ _DAT_146aef260) &
                       -(uint)(1e-08 <= fVar32) ^ _DAT_146aef260);
      fVar49 = (float)(((uint)(((fRam0000000146aef274 -
                                fVar49 * fVar49 * fVar33 * fRam0000000146aef274) * fVar49 + fVar49)
                              * fStack_114) ^ uRam0000000146aef264) & -(uint)(1e-08 <= fVar33) ^
                      uRam0000000146aef264);
      fVar50 = (float)(((uint)(((fRam0000000146aef278 -
                                fVar50 * fVar50 * fVar34 * fRam0000000146aef278) * fVar50 + fVar50)
                              * fStack_110) ^ uRam0000000146aef268) & -(uint)(1e-08 <= fVar34) ^
                      uRam0000000146aef268);
      fVar24 = (float)(((uint)(((fRam0000000146aef27c -
                                fVar24 * fVar24 * fVar35 * fRam0000000146aef27c) * fVar24 + fVar24)
                              * fStack_10c) ^ uRam0000000146aef26c) & -(uint)(1e-08 <= fVar35) ^
                      uRam0000000146aef26c);
      pfVar13[8] = fVar21 * fVar22;
      pfVar13[9] = fVar23 * fVar25;
      pfVar13[10] = fVar1 * fVar2;
      pfVar13[0xb] = fVar3 * fVar4;
      auVar14._12_4_ = 0;
      *(undefined1 (*) [16])(pfVar13 + 4) = auVar14;
      *pfVar13 = fVar48;
      pfVar13[1] = fVar49;
      pfVar13[2] = fVar50;
      pfVar13[3] = fVar24;
    }
    *(undefined1 *)(lVar11 + *param_2) = 1;
  }
  uVar9 = *(undefined8 *)(pfVar13 + 2);
  *param_1 = *(undefined8 *)pfVar13;
  param_1[1] = uVar9;
  uVar9 = *(undefined8 *)(pfVar13 + 6);
  param_1[2] = *(undefined8 *)(pfVar13 + 4);
  param_1[3] = uVar9;
  uVar9 = *(undefined8 *)(pfVar13 + 10);
  param_1[4] = *(undefined8 *)(pfVar13 + 8);
  param_1[5] = uVar9;
  return param_1;
}



// FUNCTION 1422aac50 GetContainerInternal body=138 status=ok
// SIG undefined GetContainerInternal(void)

longlong * FSmartNameContainer::GetContainerInternal(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar1 = *param_2;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar4 +
                    ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      while (plVar4 = (longlong *)((longlong)iVar2 * 0x70 + *param_1), *plVar4 != lVar1) {
        iVar2 = (int)plVar4[0xd];
        if (iVar2 == -1) {
          return (longlong *)0x0;
        }
      }
      if (iVar2 != -1) goto LAB_1422aacce;
    }
  }
  plVar4 = (longlong *)0x0;
LAB_1422aacce:
  plVar3 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  return plVar3;
}



// FUNCTION 1422aace0 FUN_1422aace0 body=142 status=ok
// SIG undefined FUN_1422aace0(void)

undefined4 FUN_1422aace0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_142a07000();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_1423b2d70(param_1[4],1);
    }
  }
  lVar3 = param_1[0x72];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar3;
  }
  return *(undefined4 *)(lVar3 + 0x82c);
}



// FUNCTION 1422aad70 GetCurveMetaData body=184 status=ok
// SIG undefined GetCurveMetaData(void)

longlong * FSmartNameMapping::GetCurveMetaData(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int local_res8 [2];
  longlong local_res10;
  longlong *local_res18 [2];
  
  plVar1 = (longlong *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar3 = *(longlong *)(param_1 + 0x50);
    if (*(longlong *)(param_1 + 0x50) == 0) {
      lVar3 = param_1 + 0x48;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x58) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        plVar4 = (longlong *)((longlong)iVar2 * 0x30 + *plVar1);
        if (*plVar4 == param_2) {
          if ((iVar2 != -1) && (plVar4 != (longlong *)0x0)) {
            return plVar4 + 1;
          }
          break;
        }
        iVar2 = (int)plVar4[5];
      } while (iVar2 != -1);
    }
  }
  local_res18[0] = &local_res10;
  local_res10 = param_2;
  TSet<TTuple<FName,FCurveMetaData>,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FName_const_&>_>(plVar1,local_res8,local_res18,0);
  return (longlong *)((longlong)local_res8[0] * 0x30 + 8 + *plVar1);
}



// FUNCTION 1422aae30 FUN_1422aae30 body=142 status=ok
// SIG undefined FUN_1422aae30(void)

longlong * FUN_1422aae30(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar2 = *(longlong *)(param_1 + 0x50);
    if (*(longlong *)(param_1 + 0x50) == 0) {
      lVar2 = param_1 + 0x48;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x58) - 1U) * 4);
    if (iVar1 != -1) {
      while (plVar4 = (longlong *)((longlong)iVar1 * 0x30 + *(longlong *)(param_1 + 0x10)),
            *plVar4 != param_2) {
        iVar1 = (int)plVar4[5];
        if (iVar1 == -1) {
          return (longlong *)0x0;
        }
      }
      if (iVar1 != -1) goto LAB_1422aaeb2;
    }
  }
  plVar4 = (longlong *)0x0;
LAB_1422aaeb2:
  plVar3 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  return plVar3;
}



// FUNCTION 1422aaec0 GetCurveMetaData body=55 status=ok
// SIG undefined GetCurveMetaData(void)

void USkeleton::GetCurveMetaData(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FSmartNameContainer::GetContainerInternal(param_1 + 0x1f0,&DAT_146aef308);
  if (lVar1 != 0) {
    FSmartNameMapping::GetCurveMetaData(lVar1,*param_2);
    return;
  }
  return;
}



// FUNCTION 1422aaf00 GetCurveMetaData body=55 status=ok
// SIG undefined GetCurveMetaData(void)

void USkeleton::GetCurveMetaData(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FSmartNameContainer::GetContainerInternal(param_1 + 0x1f0,&DAT_146aef308);
  if (lVar1 != 0) {
    FUN_1422aae30(lVar1,*param_2);
    return;
  }
  return;
}



// FUNCTION 1422aaf40 GetCurveMetaData body=92 status=ok
// SIG undefined GetCurveMetaData(void)

undefined8 USkeleton::GetCurveMetaData(longlong param_1,ushort param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FSmartNameContainer::GetContainerInternal(param_1 + 0x1f0,&DAT_146aef308);
  if ((plVar1 != (longlong *)0x0) && ((int)(uint)param_2 < (int)plVar1[1])) {
    if (*(longlong *)(*plVar1 + (ulonglong)param_2 * 8) != 0) {
      uVar2 = FUN_1422aae30(plVar1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1422aafa0 GetDataSize body=130 status=ok
// SIG undefined GetDataSize(void)

longlong FReferenceSkeleton::GetDataSize(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xbc) + 0x1f;
  iVar2 = *(int *)(param_1 + 0x6c) + 0x1f;
  return (ulonglong)(uint)(*(int *)(param_1 + 0x1c) * 0x30) +
         (ulonglong)
         (uint)((((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) + *(int *)(param_1 + 0x9c) * 6 +
                *(int *)(param_1 + 0xd8)) * 4) +
         (ulonglong)
         (uint)((((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) + *(int *)(param_1 + 0x4c) * 6 +
                *(int *)(param_1 + 0x88)) * 4) + (ulonglong)(uint)(*(int *)(param_1 + 0x3c) * 0x30)
         + (ulonglong)(uint)(*(int *)(param_1 + 0x2c) << 4) +
         (ulonglong)(uint)(*(int *)(param_1 + 0xc) << 4);
}



// FUNCTION 1422ab030 FUN_1422ab030 body=237 status=ok
// SIG undefined FUN_1422ab030(void)

longlong * FUN_1422ab030(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong local_18 [2];
  
  *param_2 = 0;
  param_2[1] = 0;
  plVar2 = *(longlong **)(param_1 + 0x468);
  if (plVar2 == (longlong *)0x0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x19);
    iVar1 = (int)param_2[1] + 0x19;
    *(int *)(param_2 + 1) = iVar1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
    }
    builtin_wcsncpy((wchar_t *)*param_2,L"No_SkeletalMeshComponent",0x19);
  }
  else {
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x40))(plVar2,local_18);
    if (param_2 != plVar2) {
      if (*param_2 != 0) {
        FMemory::Free();
      }
      *param_2 = *plVar2;
      *plVar2 = 0;
      *(int *)(param_2 + 1) = (int)plVar2[1];
      *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar2 + 0xc);
      plVar2[1] = 0;
    }
    if (local_18[0] != 0) {
      FMemory::Free();
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 1422ab120 GetDuration body=72 status=ok
// SIG undefined GetDuration(void)

float FAnimNotifyEvent::GetDuration(longlong param_1)

{
  float fVar1;
  float fVar2;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    fVar1 = (float)FAnimLinkableElement::GetTime(param_1 + 0x60,0);
    fVar2 = (float)FAnimLinkableElement::GetTime(param_1,0);
    return fVar1 - fVar2;
  }
  return 0.0;
}



// FUNCTION 1422ab170 GetEndTriggerTime body=135 status=ok
// SIG undefined GetEndTriggerTime(void)

float FAnimNotifyEvent::GetEndTriggerTime(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  fVar2 = (float)FAnimLinkableElement::GetTime(param_1,0);
  fVar2 = fVar2 + *(float *)(param_1 + 0x34);
  if (lVar1 != 0) {
    if (*(longlong *)(param_1 + 0x50) == 0) {
      fVar3 = 0.0;
    }
    else {
      fVar3 = (float)FAnimLinkableElement::GetTime(param_1 + 0x60,0);
      fVar4 = (float)FAnimLinkableElement::GetTime(param_1,0);
      fVar3 = fVar3 - fVar4;
    }
    return fVar3 + fVar2 + *(float *)(param_1 + 0x38);
  }
  return fVar2;
}



// FUNCTION 1422ab200 GetEntryBlendScale body=36 status=ok
// SIG undefined GetEntryBlendScale(void)

undefined4 UBlendProfile::GetEntryBlendScale(longlong param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x40))) {
    return *(undefined4 *)((longlong)param_2 * 0x20 + 0x18 + *(longlong *)(param_1 + 0x38));
  }
  return 0x3f800000;
}



// FUNCTION 1422ab230 GetGridSamplesFromBlendInput body=696 status=ok
// SIG undefined GetGridSamplesFromBlendInput(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UBlendSpace::GetGridSamplesFromBlendInput
               (longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
               undefined8 *param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  int iVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_88 [32];
  float local_68;
  float fStack_64;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  UBlendSpaceBase::GetNormalizedBlendInput(param_1,&local_68,param_2);
  fVar5 = (float)(int)local_68;
  local_68 = local_68 - fVar5;
  fVar6 = (float)(int)fStack_64;
  fStack_64 = fStack_64 - fVar6;
  iVar2 = (*(int *)(param_1 + 0x120) + 1) * (int)fVar5 + (int)(fVar6 + 1.0);
  if (((iVar2 < 0) || (*(int *)(param_1 + 0xe0) <= iVar2)) ||
     (puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar2 * 0x18),
     puVar1 == (undefined8 *)0x0)) {
    uVar4 = 0;
    *param_5 = 0xffffffffffffffff;
    param_5[1] = 0xffffffff;
    fVar3 = 0.0;
  }
  else {
    uVar4 = puVar1[1];
    *param_5 = *puVar1;
    param_5[1] = uVar4;
    uVar4 = puVar1[2];
    fVar3 = (1.0 - local_68) * fStack_64;
  }
  param_5[2] = uVar4;
  *(float *)(param_5 + 3) = fVar3;
  iVar2 = (*(int *)(param_1 + 0x120) + 1) * (int)(fVar5 + 1.0) + (int)(fVar6 + 1.0);
  if (((iVar2 < 0) || (*(int *)(param_1 + 0xe0) <= iVar2)) ||
     (puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar2 * 0x18),
     puVar1 == (undefined8 *)0x0)) {
    uVar4 = 0;
    *param_6 = 0xffffffffffffffff;
    param_6[1] = 0xffffffff;
    fVar3 = 0.0;
  }
  else {
    uVar4 = puVar1[1];
    *param_6 = *puVar1;
    param_6[1] = uVar4;
    uVar4 = puVar1[2];
    fVar3 = fStack_64 * local_68;
  }
  param_6[2] = uVar4;
  *(float *)(param_6 + 3) = fVar3;
  iVar2 = (*(int *)(param_1 + 0x120) + 1) * (int)fVar5 + (int)fVar6;
  if (((iVar2 < 0) || (*(int *)(param_1 + 0xe0) <= iVar2)) ||
     (puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar2 * 0x18),
     puVar1 == (undefined8 *)0x0)) {
    uVar4 = 0;
    *param_3 = 0xffffffffffffffff;
    param_3[1] = 0xffffffff;
    fVar3 = 0.0;
  }
  else {
    uVar4 = puVar1[1];
    *param_3 = *puVar1;
    param_3[1] = uVar4;
    uVar4 = puVar1[2];
    fVar3 = (1.0 - local_68) * (1.0 - fStack_64);
  }
  param_3[2] = uVar4;
  *(float *)(param_3 + 3) = fVar3;
  iVar2 = (*(int *)(param_1 + 0x120) + 1) * (int)(fVar5 + 1.0) + (int)fVar6;
  if (((iVar2 < 0) || (*(int *)(param_1 + 0xe0) <= iVar2)) ||
     (puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar2 * 0x18),
     puVar1 == (undefined8 *)0x0)) {
    *param_4 = 0xffffffffffffffff;
    param_4[1] = 0xffffffff;
    param_4[2] = 0;
    *(undefined4 *)(param_4 + 3) = 0;
  }
  else {
    uVar4 = puVar1[1];
    *param_4 = *puVar1;
    param_4[1] = uVar4;
    param_4[2] = puVar1[2];
    *(float *)(param_4 + 3) = (1.0 - fStack_64) * local_68;
  }
  return;
}



// FUNCTION 1422ab500 FUN_1422ab500 body=63 status=ok
// SIG undefined FUN_1422ab500(void)

undefined8 * FUN_1422ab500(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 8) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x38), lVar1 != 0)) {
    FUN_1422ad450(lVar1,param_2,param_1);
    return param_2;
  }
  *param_2 = DAT_146aef318;
  return param_2;
}



// FUNCTION 1422ab540 FUN_1422ab540 body=530 status=ok
// SIG undefined FUN_1422ab540(void)

int FUN_1422ab540(longlong *param_1,longlong *param_2)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar2 = (int)param_1[1];
  iVar4 = 0;
  fVar8 = 1.1754944e-38;
  iVar5 = -1;
  if (3 < iVar2) {
    iVar6 = 2;
    piVar3 = (int *)(*param_1 + 0x40);
    pfVar7 = (float *)(*param_1 + 0x90);
    do {
      fVar1 = (float)piVar3[-0xc];
      fVar9 = fVar1;
      if (1.0 <= fVar1) {
        fVar9 = 1.0;
      }
      fVar10 = fVar9;
      if (fVar1 < 0.0) {
        fVar10 = 0.0;
      }
      if (((fVar8 < fVar10) &&
          (0 < *(int *)(*(longlong *)(*param_2 + (longlong)piVar3[-0x10] * 0x18) + 0x1a8))) &&
         (fVar8 = fVar9, iVar5 = iVar4, fVar1 < 0.0)) {
        fVar8 = 0.0;
      }
      fVar1 = pfVar7[-0x10];
      fVar9 = fVar1;
      if (1.0 <= fVar1) {
        fVar9 = 1.0;
      }
      fVar10 = fVar9;
      if (fVar1 < 0.0) {
        fVar10 = 0.0;
      }
      if (((fVar8 < fVar10) &&
          (0 < *(int *)(*(longlong *)(*param_2 + (longlong)*piVar3 * 0x18) + 0x1a8))) &&
         (iVar5 = iVar6 + -1, fVar8 = fVar9, fVar1 < 0.0)) {
        fVar8 = 0.0;
      }
      fVar1 = *pfVar7;
      fVar9 = fVar1;
      if (1.0 <= fVar1) {
        fVar9 = 1.0;
      }
      fVar10 = fVar9;
      if (fVar1 < 0.0) {
        fVar10 = 0.0;
      }
      if (((fVar8 < fVar10) &&
          (0 < *(int *)(*(longlong *)(*param_2 + (longlong)piVar3[0x10] * 0x18) + 0x1a8))) &&
         (fVar8 = fVar9, iVar5 = iVar6, fVar1 < 0.0)) {
        fVar8 = 0.0;
      }
      fVar1 = pfVar7[0x10];
      fVar9 = fVar1;
      if (1.0 <= fVar1) {
        fVar9 = 1.0;
      }
      fVar10 = fVar9;
      if (fVar1 < 0.0) {
        fVar10 = 0.0;
      }
      if (((fVar8 < fVar10) &&
          (0 < *(int *)(*(longlong *)(*param_2 + (longlong)piVar3[0x20] * 0x18) + 0x1a8))) &&
         (iVar5 = iVar6 + 1, fVar8 = fVar9, fVar1 < 0.0)) {
        fVar8 = 0.0;
      }
      piVar3 = piVar3 + 0x40;
      pfVar7 = pfVar7 + 0x40;
      iVar4 = iVar4 + 4;
      iVar6 = iVar6 + 4;
    } while (iVar4 < iVar2 + -3);
  }
  if (iVar4 < iVar2) {
    piVar3 = (int *)((longlong)iVar4 * 0x40 + *param_1);
    do {
      fVar1 = (float)piVar3[4];
      fVar9 = fVar1;
      if (1.0 <= fVar1) {
        fVar9 = 1.0;
      }
      fVar10 = fVar9;
      if (fVar1 < 0.0) {
        fVar10 = 0.0;
      }
      if (((fVar8 < fVar10) &&
          (0 < *(int *)(*(longlong *)(*param_2 + (longlong)*piVar3 * 0x18) + 0x1a8))) &&
         (fVar8 = fVar9, iVar5 = iVar4, fVar1 < 0.0)) {
        fVar8 = 0.0;
      }
      piVar3 = piVar3 + 0x10;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return iVar5;
}



// FUNCTION 1422ab760 GetHighestWeightSample body=368 status=ok
// SIG undefined GetHighestWeightSample(void)

int FBlendSpaceUtilities::GetHighestWeightSample(longlong *param_1)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar3 = *param_1;
  iVar7 = 0;
  fVar8 = *(float *)(lVar3 + 0x10);
  if (0.0 <= fVar8) {
    if (1.0 <= fVar8) {
      fVar8 = 1.0;
    }
  }
  else {
    fVar8 = 0.0;
  }
  iVar2 = (int)param_1[1];
  iVar4 = 1;
  if (1 < iVar2) {
    if (4 < iVar2) {
      iVar5 = 3;
      pfVar6 = (float *)(lVar3 + 0x90);
      do {
        fVar1 = pfVar6[-0x10];
        fVar9 = fVar1;
        if (1.0 <= fVar1) {
          fVar9 = 1.0;
        }
        fVar10 = fVar9;
        if (fVar1 < 0.0) {
          fVar10 = 0.0;
        }
        if ((fVar8 < fVar10) && (fVar8 = fVar9, iVar7 = iVar4, fVar1 < 0.0)) {
          fVar8 = 0.0;
        }
        fVar1 = *pfVar6;
        fVar9 = fVar1;
        if (1.0 <= fVar1) {
          fVar9 = 1.0;
        }
        fVar10 = fVar9;
        if (fVar1 < 0.0) {
          fVar10 = 0.0;
        }
        if ((fVar8 < fVar10) && (iVar7 = iVar5 + -1, fVar8 = fVar9, fVar1 < 0.0)) {
          fVar8 = 0.0;
        }
        fVar1 = pfVar6[0x10];
        fVar9 = fVar1;
        if (1.0 <= fVar1) {
          fVar9 = 1.0;
        }
        fVar10 = fVar9;
        if (fVar1 < 0.0) {
          fVar10 = 0.0;
        }
        if ((fVar8 < fVar10) && (fVar8 = fVar9, iVar7 = iVar5, fVar1 < 0.0)) {
          fVar8 = 0.0;
        }
        fVar1 = pfVar6[0x20];
        fVar9 = fVar1;
        if (1.0 <= fVar1) {
          fVar9 = 1.0;
        }
        fVar10 = fVar9;
        if (fVar1 < 0.0) {
          fVar10 = 0.0;
        }
        if ((fVar8 < fVar10) && (iVar7 = iVar5 + 1, fVar8 = fVar9, fVar1 < 0.0)) {
          fVar8 = 0.0;
        }
        pfVar6 = pfVar6 + 0x40;
        iVar4 = iVar4 + 4;
        iVar5 = iVar5 + 4;
      } while (iVar4 < iVar2 + -3);
    }
    if (iVar4 < iVar2) {
      pfVar6 = (float *)(lVar3 + 0x10 + (longlong)iVar4 * 0x40);
      do {
        fVar1 = *pfVar6;
        fVar9 = fVar1;
        if (1.0 <= fVar1) {
          fVar9 = 1.0;
        }
        fVar10 = fVar9;
        if (fVar1 < 0.0) {
          fVar10 = 0.0;
        }
        if ((fVar8 < fVar10) && (fVar8 = fVar9, iVar7 = iVar4, fVar1 < 0.0)) {
          fVar8 = 0.0;
        }
        pfVar6 = pfVar6 + 0x10;
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
  }
  return iVar7;
}



// FUNCTION 1422ab8d0 FUN_1422ab8d0 body=201 status=ok
// SIG undefined FUN_1422ab8d0(void)

undefined4 FUN_1422ab8d0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x440);
  if (lVar1 != 0) {
    lVar3 = UBlendSpace::GetPrivateStaticClass();
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
      return *(undefined4 *)(lVar1 + 0x8c);
    }
    lVar1 = *(longlong *)(param_1 + 0x440);
    if (lVar1 != 0) {
      lVar3 = UTextureRenderTarget::StaticClass();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        return *(undefined4 *)(lVar1 + 0x90);
      }
    }
  }
  return 0;
}



// FUNCTION 1422ab9a0 FUN_1422ab9a0 body=785 status=ok
// SIG undefined FUN_1422ab9a0(void)

void FUN_1422ab9a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_142231c90();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146aef340) && (_Init_thread_header(&DAT_146aef340), DAT_146aef340 == -1)) {
    uVar1 = AEquipmentSkin::GetPrivateStaticClass();
    AEquipmentSkin::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ReplicatedMesh",1);
    DAT_146aef338 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146aef340);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146aef338 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146aef338 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146aef338 + 0x30));
  }
  if ((*piVar5 < DAT_146aef350) && (_Init_thread_header(&DAT_146aef350), DAT_146aef350 == -1)) {
    uVar1 = AEquipmentSkin::GetPrivateStaticClass();
    AEquipmentSkin::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ReplicatedPhysAsset",1);
    DAT_146aef348 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146aef350);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146aef348 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146aef348 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146aef348 + 0x30));
  }
  if ((*piVar5 < DAT_146aef360) && (_Init_thread_header(&DAT_146aef360), DAT_146aef360 == -1)) {
    uVar1 = AEquipmentSkin::GetPrivateStaticClass();
    AEquipmentSkin::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ReplicatedMaterial0",1);
    DAT_146aef358 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146aef360);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146aef358 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146aef358 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146aef358 + 0x30));
  }
  if ((*piVar5 < DAT_146aef370) && (_Init_thread_header(&DAT_146aef370), DAT_146aef370 == -1)) {
    uVar1 = AEquipmentSkin::GetPrivateStaticClass();
    AEquipmentSkin::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ReplicatedMaterial1",1);
    DAT_146aef368 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146aef370);
  }
  if (0 < *(int *)(DAT_146aef368 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146aef368 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146aef368 + 0x30));
  }
  return;
}



// FUNCTION 1422abcc0 GetMappableNodeData body=406 status=ok
// SIG undefined GetMappableNodeData(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void URig::GetMappableNodeData(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong uVar16;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  iVar1 = *(int *)(param_1 + 0x20);
  uVar15 = (ulonglong)iVar1;
  lVar13 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
  }
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) < iVar1) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_3);
  }
  if (0 < iVar1) {
    lVar17 = param_2[1];
    iVar9 = (int)lVar17 + iVar1;
    *(int *)(param_2 + 1) = iVar9;
    if (*(int *)((longlong)param_2 + 0xc) < iVar9) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2);
    }
    ::_guard_xfg_dispatch_icall_nop((void *)(*param_2 + (longlong)(int)lVar17 * 8),0,uVar15 * 8);
    iVar9 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar9 + iVar1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar9 + iVar1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_3,iVar9);
    }
    puVar12 = (undefined8 *)((longlong)iVar9 * 0x40 + *param_3);
    puVar10 = puVar12 + 6;
    uVar16 = uVar15;
    do {
      *puVar12 = 0;
      uVar3 = uRam00000001468b5b78;
      puVar12 = puVar12 + 8;
      puVar10[-4] = _DAT_1468b5b70;
      puVar10[-3] = uVar3;
      uVar3 = uRam00000001468b5b88;
      puVar10[-2] = _DAT_1468b5b80;
      puVar10[-1] = uVar3;
      uVar3 = uRam00000001468b5b98;
      *puVar10 = _DAT_1468b5b90;
      puVar10[1] = uVar3;
      uVar14 = (int)uVar16 - 1;
      uVar16 = (ulonglong)uVar14;
      puVar10 = puVar10 + 8;
    } while (uVar14 != 0);
    lVar17 = lVar13;
    lVar18 = lVar13;
    if (0 < (longlong)uVar15) {
      do {
        *(undefined8 *)(*param_2 + lVar17 * 8) =
             *(undefined8 *)(lVar13 + *(longlong *)(param_1 + 0x18));
        lVar17 = lVar17 + 1;
        lVar11 = *(longlong *)(param_1 + 0x18) + lVar13;
        lVar13 = lVar13 + 0x60;
        uVar3 = *(undefined8 *)(lVar11 + 0x10);
        uVar4 = *(undefined8 *)(lVar11 + 0x18);
        uVar5 = *(undefined8 *)(lVar11 + 0x20);
        uVar6 = *(undefined8 *)(lVar11 + 0x28);
        uVar7 = *(undefined8 *)(lVar11 + 0x30);
        uVar8 = *(undefined8 *)(lVar11 + 0x38);
        lVar2 = *param_3;
        *(undefined8 *)(lVar18 + lVar2) = *(undefined8 *)(lVar11 + 8);
        puVar12 = (undefined8 *)(lVar18 + 0x10 + lVar2);
        *puVar12 = uVar3;
        puVar12[1] = uVar4;
        puVar12 = (undefined8 *)(lVar18 + 0x20 + lVar2);
        *puVar12 = uVar5;
        puVar12[1] = uVar6;
        puVar12 = (undefined8 *)(lVar18 + 0x30 + lVar2);
        *puVar12 = uVar7;
        puVar12[1] = uVar8;
        lVar18 = lVar18 + 0x40;
      } while (lVar17 < (longlong)uVar15);
    }
  }
  return;
}



// FUNCTION 1422abe60 GetMarkerIndicesForTime body=276 status=ok
// SIG undefined GetMarkerIndicesForTime(void)

void FMarkerSyncData::GetMarkerIndicesForTime
               (longlong *param_1,float param_2,uint param_3,longlong *param_4,int *param_5,
               int *param_6,float param_7)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  
  param_5[1] = (int)-param_2;
  *param_5 = -1;
  *param_6 = -1;
  iVar3 = (param_3 & 0xff ^ 1) - 1;
  param_6[1] = (int)(param_7 - param_2);
  do {
    if ((int)((param_3 & 0xff) + 1) <= iVar3) {
      return;
    }
    iVar4 = 0;
    if (0 < (int)param_1[1]) {
      lVar5 = 0;
      do {
        plVar2 = (longlong *)*param_4;
        plVar1 = plVar2 + (int)param_4[1];
        if (plVar2 != plVar1) {
          do {
            if (*plVar2 == *(longlong *)(lVar5 + *param_1)) {
              fVar6 = (float)iVar3 * param_7 + *(float *)(lVar5 + 8 + *param_1);
              fVar7 = fVar6 - param_2;
              if (param_2 <= fVar6) {
                param_6[1] = (int)fVar7;
                *param_6 = iVar4;
                goto LAB_1422abf4d;
              }
              param_5[1] = (int)fVar7;
              *param_5 = iVar4;
              break;
            }
            plVar2 = plVar2 + 1;
          } while (plVar2 != plVar1);
        }
        iVar4 = iVar4 + 1;
        lVar5 = lVar5 + 0x10;
      } while (iVar4 < (int)param_1[1]);
    }
LAB_1422abf4d:
    if (*param_6 != -1) {
      return;
    }
    iVar3 = iVar3 + 1;
  } while( true );
}



// FUNCTION 1422abf80 GetMarkerSyncPositionfromMarkerIndicies body=146 status=ok
// SIG undefined GetMarkerSyncPositionfromMarkerIndicies(void)

undefined8 *
FMarkerSyncData::GetMarkerSyncPositionfromMarkerIndicies
          (longlong *param_1,undefined8 *param_2,int param_3,int param_4,float param_5,float param_6
          )

{
  float fVar1;
  float fVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  if (param_3 == -1) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = *(float *)(*param_1 + 8 + (longlong)param_3 * 0x10);
    *param_2 = *(undefined8 *)(*param_1 + (longlong)param_3 * 0x10);
  }
  fVar2 = param_6;
  if (param_4 != -1) {
    fVar2 = *(float *)(*param_1 + 8 + (longlong)param_4 * 0x10);
    param_2[1] = *(undefined8 *)(*param_1 + (longlong)param_4 * 0x10);
  }
  if (param_5 < fVar1) {
    fVar1 = fVar1 - param_6;
  }
  if (fVar2 < param_5) {
    fVar2 = fVar2 + param_6;
  }
  if (fVar1 == fVar2) {
    fVar1 = fVar1 - param_6;
  }
  *(float *)(param_2 + 2) = (param_5 - fVar1) / (fVar2 - fVar1);
  return param_2;
}



// FUNCTION 1422ac020 GetMeshLinkupIndex body=374 status=ok
// SIG undefined GetMeshLinkupIndex(void)

int UAnimSet::GetMeshLinkupIndex(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int *piVar4;
  undefined2 *puVar5;
  int *piVar6;
  int local_res8 [4];
  undefined1 local_res18 [8];
  longlong local_res20;
  longlong *local_38;
  int *local_30;
  
  puVar2 = (undefined8 *)UObjectBaseUtility::GetPathName(param_2,&local_38,0);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*puVar2;
  }
  FName::FName(&local_res20,puVar5,1);
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
    lVar3 = *(longlong *)(param_1 + 0xe0);
    if (*(longlong *)(param_1 + 0xe0) == 0) {
      lVar3 = param_1 + 0xd8;
    }
    iVar1 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)local_res20 >> 0x20) + (int)local_res20) &
                             (longlong)*(int *)(param_1 + 0xe8) - 1U) * 4);
    if (iVar1 != -1) {
      lVar3 = *(longlong *)(param_1 + 0xa0);
      do {
        piVar6 = (int *)(lVar3 + (longlong)iVar1 * 0x18);
        if (*(longlong *)(lVar3 + (longlong)iVar1 * 0x18) == local_res20) {
          if (iVar1 != -1) goto LAB_1422ac0e3;
          break;
        }
        iVar1 = piVar6[4];
      } while (iVar1 != -1);
    }
  }
  piVar6 = (int *)0x0;
LAB_1422ac0e3:
  piVar4 = piVar6 + 2;
  if (piVar6 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  if (piVar4 != (int *)0x0) {
    return *piVar4;
  }
  iVar1 = *(int *)(param_1 + 0x48);
  *(int *)(param_1 + 0x48) = iVar1 + 1;
  if (*(int *)(param_1 + 0x4c) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x40,iVar1);
  }
  puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x40));
  *puVar2 = 0;
  puVar2[1] = 0;
  local_38 = &local_res20;
  local_30 = local_res8;
  local_res8[0] = iVar1;
  FUN_1415ec610((longlong *)(param_1 + 0xa0),local_res18,&local_38,0);
  FUN_1422a61c0((longlong)local_res8[0] * 0x10 + *(longlong *)(param_1 + 0x40),param_2,param_1);
  return local_res8[0];
}



// FUNCTION 1422ac1a0 FUN_1422ac1a0 body=133 status=ok
// SIG undefined FUN_1422ac1a0(void)

ulonglong FUN_1422ac1a0(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  uint *puVar3;
  int local_res8 [4];
  undefined8 local_res18;
  undefined8 local_res20;
  
  FWeakObjectPtr::operator=(&local_res18);
  local_res20 = local_res18;
  TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x2f0,local_res8);
  puVar3 = (uint *)0x0;
  if (local_res8[0] != -1) {
    puVar3 = (uint *)(*(longlong *)(param_1 + 0x2f0) + (longlong)local_res8[0] * 0x14);
  }
  puVar1 = puVar3 + 2;
  if (puVar3 == (uint *)0x0) {
    puVar1 = (uint *)0x0;
  }
  if (puVar1 != (uint *)0x0) {
    return (ulonglong)*puVar1;
  }
  uVar2 = FUN_1422a6380(param_1,param_2);
  return uVar2;
}



// FUNCTION 1422ac230 GetName body=37 status=ok
// SIG undefined GetName(void)

ulonglong FSmartNameMapping::GetName(longlong *param_1,ushort *param_2,longlong *param_3)

{
  ushort uVar1;
  longlong lVar2;
  
  uVar1 = *param_2;
  if ((int)(uint)uVar1 < (int)param_1[1]) {
    lVar2 = *(longlong *)(*param_1 + (ulonglong)uVar1 * 8);
    *param_3 = lVar2;
    return (ulonglong)(lVar2 != 0);
  }
  return (ulonglong)(byte)(uVar1 >> 8) << 8;
}



// FUNCTION 1422ac260 GetNormalizedBlendInput body=313 status=ok
// SIG undefined GetNormalizedBlendInput(void)

float * UBlendSpaceBase::GetNormalizedBlendInput(longlong param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = *(float *)(param_1 + 0xf8);
  fVar2 = *(float *)(param_1 + 0xfc);
  fVar3 = *param_3;
  fVar4 = *(float *)(param_1 + 0x118);
  fVar5 = *(float *)(param_1 + 0x138);
  fVar6 = *(float *)(param_1 + 0x11c);
  fVar7 = *(float *)(param_1 + 0x13c);
  iVar8 = *(int *)(param_1 + 0x120);
  iVar9 = *(int *)(param_1 + 0x140);
  fVar12 = fVar1;
  if ((fVar1 <= fVar3) && (fVar12 = fVar3, fVar2 <= fVar3)) {
    fVar12 = fVar2;
  }
  fVar3 = param_3[1];
  fVar11 = fVar4;
  if ((fVar4 <= fVar3) && (fVar11 = fVar3, *(float *)(param_1 + 0x11c) <= fVar3)) {
    fVar11 = *(float *)(param_1 + 0x11c);
  }
  fVar3 = param_3[2];
  fVar10 = fVar5;
  if ((fVar5 <= fVar3) && (fVar10 = fVar3, *(float *)(param_1 + 0x13c) <= fVar3)) {
    fVar10 = *(float *)(param_1 + 0x13c);
  }
  *param_2 = ((fVar12 - fVar1) * (float)*(int *)(param_1 + 0x100)) / (fVar2 - fVar1);
  param_2[1] = ((fVar11 - fVar4) * (float)iVar8) / (fVar6 - fVar4);
  param_2[2] = ((fVar10 - fVar5) * (float)iVar9) / (fVar7 - fVar5);
  return param_2;
}



// FUNCTION 1422ac3a0 FUN_1422ac3a0 body=524 status=ok
// SIG undefined FUN_1422ac3a0(void)

int FUN_1422ac3a0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  
  lVar5 = (longlong)(int)param_2[1];
  lVar4 = 0;
  fVar8 = 0.0;
  if (3 < lVar5) {
    piVar3 = (int *)(*param_2 + 0x40);
    lVar6 = (lVar5 - 4U >> 2) + 1;
    lVar4 = lVar6 * 4;
    do {
      iVar1 = piVar3[-0x10];
      if (((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0xd0))) &&
         (lVar2 = *(longlong *)(*(longlong *)(param_1 + 200) + (longlong)iVar1 * 0x18), lVar2 != 0))
      {
        fVar7 = (float)piVar3[-0xc];
        if (0.0 <= fVar7) {
          if (1.0 <= fVar7) {
            fVar7 = 1.0;
          }
        }
        else {
          fVar7 = 0.0;
        }
        fVar8 = fVar8 + (float)*(int *)(lVar2 + 0xb8) * fVar7;
      }
      iVar1 = *piVar3;
      if (((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0xd0))) &&
         (lVar2 = *(longlong *)(*(longlong *)(param_1 + 200) + (longlong)iVar1 * 0x18), lVar2 != 0))
      {
        fVar7 = (float)piVar3[4];
        if (0.0 <= fVar7) {
          if (1.0 <= fVar7) {
            fVar7 = 1.0;
          }
        }
        else {
          fVar7 = 0.0;
        }
        fVar8 = fVar8 + (float)*(int *)(lVar2 + 0xb8) * fVar7;
      }
      iVar1 = piVar3[0x10];
      if (((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0xd0))) &&
         (lVar2 = *(longlong *)(*(longlong *)(param_1 + 200) + (longlong)iVar1 * 0x18), lVar2 != 0))
      {
        fVar7 = (float)piVar3[0x14];
        if (0.0 <= fVar7) {
          if (1.0 <= fVar7) {
            fVar7 = 1.0;
          }
        }
        else {
          fVar7 = 0.0;
        }
        fVar8 = fVar8 + (float)*(int *)(lVar2 + 0xb8) * fVar7;
      }
      iVar1 = piVar3[0x20];
      if (((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0xd0))) &&
         (lVar2 = *(longlong *)(*(longlong *)(param_1 + 200) + (longlong)iVar1 * 0x18), lVar2 != 0))
      {
        fVar7 = (float)piVar3[0x24];
        if (0.0 <= fVar7) {
          if (1.0 <= fVar7) {
            fVar7 = 1.0;
          }
        }
        else {
          fVar7 = 0.0;
        }
        fVar8 = fVar8 + (float)*(int *)(lVar2 + 0xb8) * fVar7;
      }
      piVar3 = piVar3 + 0x40;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (lVar4 < lVar5) {
    piVar3 = (int *)(lVar4 * 0x40 + *param_2);
    lVar5 = lVar5 - lVar4;
    do {
      iVar1 = *piVar3;
      if (((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0xd0))) &&
         (lVar4 = *(longlong *)(*(longlong *)(param_1 + 200) + (longlong)iVar1 * 0x18), lVar4 != 0))
      {
        fVar7 = (float)piVar3[4];
        if (0.0 <= fVar7) {
          if (1.0 <= fVar7) {
            fVar7 = 1.0;
          }
        }
        else {
          fVar7 = 0.0;
        }
        fVar8 = fVar8 + (float)*(int *)(lVar4 + 0xb8) * fVar7;
      }
      piVar3 = piVar3 + 0x10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return (int)(fVar8 + 0.5);
}



// FUNCTION 1422ac620 GetPerBoneInterpolationIndex body=142 status=ok
// SIG undefined GetPerBoneInterpolationIndex(void)

int UBlendSpaceBase::GetPerBoneInterpolationIndex
              (longlong param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar3 = 0;
    do {
      cVar1 = FBoneReference::IsValidToEvaluate
                        ((longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x30),param_3);
      if ((cVar1 != '\0') &&
         (cVar1 = FBoneContainer::BoneIsChildOf
                            (param_3,param_2,
                             *(undefined4 *)(lVar3 + 8 + *(longlong *)(param_1 + 0x30))),
         cVar1 != '\0')) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 0x20;
    } while (iVar2 < *(int *)(param_1 + 0x38));
  }
  return -1;
}



// FUNCTION 1422ac6b0 FUN_1422ac6b0 body=142 status=ok
// SIG undefined FUN_1422ac6b0(void)

undefined4 FUN_1422ac6b0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_142a07000();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_1423b2d70(param_1[4],1);
    }
  }
  lVar3 = param_1[0x72];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar3;
  }
  return *(undefined4 *)(lVar3 + 0x840);
}



// FUNCTION 1422ac740 FUN_1422ac740 body=139 status=ok
// SIG undefined FUN_1422ac740(void)

void FUN_1422ac740(longlong param_1,longlong param_2,longlong *param_3)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_1 + 0x88))) {
    lVar3 = 0;
    lVar5 = 0;
    do {
      uVar1 = *(ushort *)
               (*(longlong *)param_3[2] +
               (ulonglong)*(ushort *)(lVar3 + 0x10 + *(longlong *)(param_1 + 0x80)) * 2);
      if (uVar1 != 0xffff) {
        lVar2 = *param_3;
        *(undefined4 *)(lVar2 + (ulonglong)uVar1 * 8) =
             *(undefined4 *)(lVar5 + *(longlong *)(param_2 + 0x20));
        *(undefined1 *)(lVar2 + 4 + (ulonglong)uVar1 * 8) = 1;
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 4;
      lVar3 = lVar3 + 0x20;
    } while (iVar4 < *(int *)(param_1 + 0x88));
  }
  return;
}



// FUNCTION 1422ac7d0 GetPoseIndexByName body=62 status=ok
// SIG undefined GetPoseIndexByName(void)

ulonglong UPoseAsset::GetPoseIndexByName(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x88)) {
    plVar1 = *(longlong **)(param_1 + 0x80);
    uVar3 = uVar2;
    do {
      if (*plVar1 == *param_2) {
        return uVar3;
      }
      uVar3 = (ulonglong)((int)uVar3 + 1);
      uVar2 = uVar2 + 1;
      plVar1 = plVar1 + 2;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x88));
  }
  return 0xffffffff;
}



// FUNCTION 1422ac810 GetPoseNames body=116 status=ok
// SIG undefined GetPoseNames(void)

undefined8 * UPoseAsset::GetPoseNames(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x88);
  _Src = *(void **)(param_1 + 0x80);
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    return param_2;
  }
  TArray<FString,FDefaultAllocator>::ResizeForCopy(param_2,iVar1,0);
  ::_guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1 << 4);
  return param_2;
}



// FUNCTION 1422ac890 FUN_1422ac890 body=410 status=ok
// SIG undefined FUN_1422ac890(void)

void FUN_1422ac890(longlong param_1,longlong *param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar9 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  uVar7 = uVar9;
  uVar10 = uVar9;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      lVar8 = *(longlong *)(param_1 + 0x10) + uVar10;
      lVar3 = FUN_1405ec200(lVar8);
      if (lVar3 != 0) {
        lVar4 = USkeleton::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          uVar5 = FWeakObjectPtr::Get(lVar8);
          if (uVar5 == 0) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            if ((DAT_1464b56f4 != *(int *)(lVar8 + 8)) && (*(longlong *)(lVar8 + 0x10) != 0)) {
              lVar3 = FUN_141796df0();
              FWeakObjectPtr::operator=(lVar8,lVar3);
              if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                *(int *)(lVar8 + 8) = DAT_1464b56f4;
              }
              uVar5 = FWeakObjectPtr::Get(lVar8);
              if (uVar5 != 0) goto LAB_1422ac9a7;
            }
LAB_1422ac9dd:
            uVar5 = uVar9;
          }
          else {
LAB_1422ac9a7:
            lVar3 = USkeleton::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(uVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(uVar5 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (!bVar2) goto LAB_1422ac9dd;
          }
          iVar1 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
          }
          *(ulonglong *)(*param_2 + (longlong)iVar1 * 8) = uVar5;
        }
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar10 = uVar10 + 0x28;
    } while ((int)uVar6 < *(int *)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 1422aca30 GetRawSamplesFromBlendInput body=537 status=ok
// SIG undefined GetRawSamplesFromBlendInput(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UBlendSpace1D::GetRawSamplesFromBlendInput
               (longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float local_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  UBlendSpaceBase::GetNormalizedBlendInput(param_1,&local_88,param_2);
  fVar6 = (float)(int)(float)local_88;
  iVar3 = (int)fVar6;
  fVar11 = (float)local_88 - fVar6;
  if (((iVar3 < 0) || (*(int *)(param_1 + 0xe0) <= iVar3)) ||
     (puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar3 * 0x18),
     puVar1 == (undefined4 *)0x0)) {
    local_88 = 0xffffffffffffffff;
    uStack_80 = 0xffffffff;
    uVar14 = 0;
    uVar15 = 0;
    uStack_7c = 0;
    local_88._0_4_ = -NAN;
    local_88._4_4_ = 0xffffffff;
    uVar9 = 0xffffffff;
    uVar10 = 0;
    local_70 = 0.0;
    uVar12 = (float)local_88;
    uVar13 = local_88._4_4_;
  }
  else {
    uVar9 = puVar1[2];
    uVar10 = puVar1[3];
    uVar14 = (undefined4)*(undefined8 *)(puVar1 + 4);
    uVar15 = (undefined4)((ulonglong)*(undefined8 *)(puVar1 + 4) >> 0x20);
    local_70 = 1.0 - fVar11;
    uVar12 = *puVar1;
    uVar13 = puVar1[1];
  }
  iVar3 = *(int *)(param_3 + 0x78);
  *(int *)(param_3 + 0x78) = iVar3 + 1;
  if (*(int *)(param_3 + 0x7c) < iVar3 + 1) {
    TArray<FGridBlendSample,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(param_3,iVar3);
  }
  lVar5 = *(longlong *)(param_3 + 0x70);
  if (*(longlong *)(param_3 + 0x70) == 0) {
    lVar5 = param_3;
  }
  lVar4 = (longlong)iVar3 * 0x1c;
  puVar1 = (undefined4 *)(lVar5 + lVar4);
  *puVar1 = uVar12;
  puVar1[1] = uVar13;
  puVar1[2] = uVar9;
  puVar1[3] = uVar10;
  *(ulonglong *)(lVar5 + 0x10 + lVar4) = CONCAT44(uVar15,uVar14);
  *(float *)(lVar5 + 0x18 + lVar4) = local_70;
  iVar3 = (int)(fVar6 + 1.0);
  if (((iVar3 < 0) || (*(int *)(param_1 + 0xe0) <= iVar3)) ||
     (puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar3 * 0x18),
     puVar2 == (undefined8 *)0x0)) {
    local_88 = 0xffffffffffffffff;
    uStack_80 = 0xffffffff;
    uVar9 = 0;
    uVar10 = 0;
    uStack_7c = 0;
    uVar7 = 0xffffffffffffffff;
    uVar8 = 0xffffffff;
    local_70 = 0.0;
  }
  else {
    uVar7 = *puVar2;
    uVar8 = puVar2[1];
    uVar9 = (undefined4)puVar2[2];
    uVar10 = (undefined4)((ulonglong)puVar2[2] >> 0x20);
    local_70 = fVar11;
  }
  iVar3 = *(int *)(param_3 + 0x78);
  *(int *)(param_3 + 0x78) = iVar3 + 1;
  if (*(int *)(param_3 + 0x7c) < iVar3 + 1) {
    TArray<FGridBlendSample,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(param_3,iVar3);
  }
  lVar5 = *(longlong *)(param_3 + 0x70);
  if (*(longlong *)(param_3 + 0x70) == 0) {
    lVar5 = param_3;
  }
  lVar4 = (longlong)iVar3 * 0x1c;
  *(undefined8 *)(lVar5 + lVar4) = uVar7;
  ((undefined8 *)(lVar5 + lVar4))[1] = uVar8;
  *(ulonglong *)(lVar5 + 0x10 + lVar4) = CONCAT44(uVar10,uVar9);
  *(float *)(lVar5 + 0x18 + lVar4) = local_70;
  return;
}



// FUNCTION 1422acc60 GetRawSamplesFromBlendInput body=152 status=ok
// SIG undefined GetRawSamplesFromBlendInput(void)

void UBlendSpace::GetRawSamplesFromBlendInput
               (undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_3 + 0x7c);
  *(undefined4 *)(param_3 + 0x78) = 0;
  iVar1 = 0;
  if ((iVar3 < 0) && (iVar1 = 0, iVar3 != 0)) {
    FUN_1422b26f0(param_3);
    iVar1 = *(int *)(param_3 + 0x78);
    iVar3 = *(int *)(param_3 + 0x7c);
  }
  *(int *)(param_3 + 0x78) = iVar1 + 4;
  if (iVar3 < iVar1 + 4) {
    TArray<FGridBlendSample,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(param_3);
  }
  lVar2 = *(longlong *)(param_3 + 0x70);
  if (*(longlong *)(param_3 + 0x70) == 0) {
    lVar2 = param_3;
  }
  GetGridSamplesFromBlendInput(param_1,param_2,lVar2,lVar2 + 0x1c,lVar2 + 0x38,lVar2 + 0x54);
  return;
}



// FUNCTION 1422acd00 FUN_1422acd00 body=663 status=ok
// SIG undefined FUN_1422acd00(void)

float FUN_1422acd00(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar5 = (longlong)(int)param_2[1];
  lVar3 = 0;
  fVar8 = 0.0;
  if (3 < lVar5) {
    pfVar2 = (float *)(*param_2 + 0x10);
    lVar4 = (lVar5 - 4U >> 2) + 1;
    lVar3 = lVar4 * 4;
    do {
      fVar6 = pfVar2[-4];
      if (((-1 < (int)fVar6) && ((int)fVar6 < *(int *)(param_1 + 0xd0))) &&
         (lVar1 = *(longlong *)(*(longlong *)(param_1 + 200) + (longlong)(int)fVar6 * 0x18),
         lVar1 != 0)) {
        fVar6 = pfVar2[3] * *(float *)(lVar1 + 0x94);
        if (fVar6 == 0.0) {
          fVar6 = 1.0;
        }
        else {
          fVar6 = ABS(fVar6);
        }
        fVar7 = *pfVar2;
        if (0.0 <= fVar7) {
          if (1.0 <= fVar7) {
            fVar7 = 1.0;
          }
        }
        else {
          fVar7 = 0.0;
        }
        fVar8 = fVar8 + fVar6 * *(float *)(lVar1 + 0x1dc) * fVar7;
      }
      fVar6 = pfVar2[0xc];
      if (((-1 < (int)fVar6) && ((int)fVar6 < *(int *)(param_1 + 0xd0))) &&
         (lVar1 = *(longlong *)(*(longlong *)(param_1 + 200) + (longlong)(int)fVar6 * 0x18),
         lVar1 != 0)) {
        fVar6 = pfVar2[0x13] * *(float *)(lVar1 + 0x94);
        if (fVar6 == 0.0) {
          fVar6 = 1.0;
        }
        else {
          fVar6 = ABS(fVar6);
        }
        fVar7 = pfVar2[0x10];
        if (0.0 <= fVar7) {
          if (1.0 <= fVar7) {
            fVar7 = 1.0;
          }
        }
        else {
          fVar7 = 0.0;
        }
        fVar8 = fVar8 + fVar6 * *(float *)(lVar1 + 0x1dc) * fVar7;
      }
      fVar6 = pfVar2[0x1c];
      if (((-1 < (int)fVar6) && ((int)fVar6 < *(int *)(param_1 + 0xd0))) &&
         (lVar1 = *(longlong *)(*(longlong *)(param_1 + 200) + (longlong)(int)fVar6 * 0x18),
         lVar1 != 0)) {
        fVar6 = pfVar2[0x23] * *(float *)(lVar1 + 0x94);
        if (fVar6 == 0.0) {
          fVar6 = 1.0;
        }
        else {
          fVar6 = ABS(fVar6);
        }
        fVar7 = pfVar2[0x20];
        if (0.0 <= fVar7) {
          if (1.0 <= fVar7) {
            fVar7 = 1.0;
          }
        }
        else {
          fVar7 = 0.0;
        }
        fVar8 = fVar8 + fVar6 * *(float *)(lVar1 + 0x1dc) * fVar7;
      }
      fVar6 = pfVar2[0x2c];
      if (((-1 < (int)fVar6) && ((int)fVar6 < *(int *)(param_1 + 0xd0))) &&
         (lVar1 = *(longlong *)(*(longlong *)(param_1 + 200) + (longlong)(int)fVar6 * 0x18),
         lVar1 != 0)) {
        fVar6 = pfVar2[0x33] * *(float *)(lVar1 + 0x94);
        if (fVar6 == 0.0) {
          fVar6 = 1.0;
        }
        else {
          fVar6 = ABS(fVar6);
        }
        fVar7 = pfVar2[0x30];
        if (0.0 <= fVar7) {
          if (1.0 <= fVar7) {
            fVar7 = 1.0;
          }
        }
        else {
          fVar7 = 0.0;
        }
        fVar8 = fVar8 + fVar6 * *(float *)(lVar1 + 0x1dc) * fVar7;
      }
      pfVar2 = pfVar2 + 0x40;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (lVar3 < lVar5) {
    pfVar2 = (float *)(*param_2 + 0x10 + lVar3 * 0x40);
    lVar5 = lVar5 - lVar3;
    do {
      fVar6 = pfVar2[-4];
      if (((-1 < (int)fVar6) && ((int)fVar6 < *(int *)(param_1 + 0xd0))) &&
         (lVar3 = *(longlong *)(*(longlong *)(param_1 + 200) + (longlong)(int)fVar6 * 0x18),
         lVar3 != 0)) {
        fVar6 = *(float *)(lVar3 + 0x94) * pfVar2[3];
        if (fVar6 == 0.0) {
          fVar6 = 1.0;
        }
        else {
          fVar6 = ABS(fVar6);
        }
        fVar7 = *pfVar2;
        if (0.0 <= fVar7) {
          if (1.0 <= fVar7) {
            fVar7 = 1.0;
          }
        }
        else {
          fVar7 = 0.0;
        }
        fVar8 = fVar8 + fVar6 * *(float *)(lVar3 + 0x1dc) * fVar7;
      }
      pfVar2 = pfVar2 + 0x10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return fVar8;
}



// FUNCTION 1422acfa0 FUN_1422acfa0 body=1199 status=ok
// SIG undefined FUN_1422acfa0(void)

bool FUN_1422acfa0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  float *pfVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 local_res8 [8];
  uint local_res18 [4];
  undefined1 *local_e8;
  undefined1 *puStack_e0;
  int local_d8 [2];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  
  local_res8[0] = 0;
  puStack_e0 = local_res8;
  local_e8 = &LAB_1422a69a0;
  lVar6 = FUN_1415d8310(&local_e8,&DAT_146531aa4);
  puVar11 = (undefined1 *)(lVar6 + 0x38);
  local_e8 = puVar11;
  (**(code **)(*param_1 + 0x2a8))(param_1,param_2,puVar11);
  TArray<FBlendSampleData,FDefaultAllocator>::Reset(param_3,0);
  iVar8 = *(int *)(lVar6 + 0xb0);
  if (*(int *)((longlong)param_3 + 0xc) < iVar8 * 3) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_3);
    iVar8 = *(int *)(lVar6 + 0xb0);
  }
  uVar9 = 0;
  uVar14 = uVar9;
  if (0 < iVar8) {
    do {
      lVar6 = 0;
      puVar10 = *(undefined1 **)(puVar11 + 0x70);
      if (*(undefined1 **)(puVar11 + 0x70) == (undefined1 *)0x0) {
        puVar10 = puVar11;
      }
      fVar19 = *(float *)(puVar10 + uVar14 + 0x18);
      do {
        iVar8 = *(int *)(puVar10 + lVar6 * 4 + uVar14);
        if ((iVar8 < 0) || ((int)param_1[0x1a] <= iVar8)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          local_d0 = 0;
          local_a8 = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          local_b8 = 0xfffffffe;
          local_b0 = 0xfffffffe;
          local_a0 = 0;
          local_d8[0] = iVar8;
          iVar5 = TArray<FBlendSampleData,FDefaultAllocator>::AddUniqueImpl<FBlendSampleData>
                            (param_3,local_d8);
          if (local_a8 != 0) {
            FMemory::Free();
          }
          lVar12 = (longlong)iVar5 * 0x40 + *param_3;
          *(float *)(lVar12 + 0x10) =
               fVar19 * *(float *)(puVar10 + lVar6 * 4 + uVar14 + 0xc) + *(float *)(lVar12 + 0x10);
          *(undefined8 *)(lVar12 + 8) = *(undefined8 *)(param_1[0x19] + (longlong)iVar8 * 0x18);
          *(undefined4 *)(lVar12 + 0x1c) =
               *(undefined4 *)(param_1[0x19] + 0x14 + (longlong)iVar8 * 0x18);
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < 3);
      uVar13 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar13;
      puVar11 = local_e8;
      uVar14 = uVar14 + 0x1c;
    } while ((int)uVar13 < *(int *)(local_e8 + 0x78));
  }
  lVar6 = 0;
  iVar8 = (int)param_3[1];
  fVar19 = 0.0;
  if (iVar8 < 1) {
    lVar12 = *param_3;
  }
  else {
    local_res18[0] = 1;
    do {
      lVar12 = *param_3;
      lVar1 = lVar12 + lVar6;
      lVar3 = lVar6;
      uVar13 = local_res18[0];
      if ((int)local_res18[0] < iVar8) {
        do {
          lVar2 = lVar3 + 0x40 + lVar12;
          lVar15 = lVar3 + 0x40;
          if (*(longlong *)(lVar1 + 8) == *(longlong *)(lVar2 + 8)) {
            fVar18 = *(float *)(lVar2 + 0x10);
            if (0.0 <= fVar18) {
              fVar17 = fVar18;
              if (1.0 <= fVar18) {
                fVar17 = 1.0;
              }
            }
            else {
              fVar17 = 0.0;
            }
            fVar16 = (float)FBlendSampleData::GetWeight(lVar1);
            if (1e-08 < ABS(fVar16 + fVar17)) {
              fVar16 = 1.0 / (fVar16 + fVar17);
              fVar17 = (float)FBlendSampleData::GetWeight(lVar1);
              if (0.0 <= fVar18) {
                if (1.0 <= fVar18) {
                  fVar18 = 1.0;
                }
              }
              else {
                fVar18 = 0.0;
              }
              *(float *)(lVar1 + 0x1c) =
                   fVar16 * fVar18 * *(float *)(lVar2 + 0x1c) +
                   fVar17 * fVar16 * *(float *)(lVar1 + 0x1c);
              fVar18 = *(float *)(lVar2 + 0x10);
              if (0.0 <= fVar18) {
                if (1.0 <= fVar18) {
                  fVar18 = 1.0;
                }
              }
              else {
                fVar18 = 0.0;
              }
              *(float *)(lVar1 + 0x10) = fVar18 + *(float *)(lVar1 + 0x10);
              lVar12 = *param_3;
            }
            if (*(longlong *)((longlong)(int)uVar13 * 0x40 + 0x30 + lVar12) != 0) {
              FMemory::Free();
              lVar12 = *param_3;
            }
            iVar8 = (int)param_3[1];
            iVar5 = (iVar8 - uVar13) + -1;
            if (0 < iVar5) {
              iVar5 = 1;
            }
            if (iVar5 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)(int)uVar13 * 0x40 + lVar12),
                         (void *)((longlong)(iVar8 - iVar5) * 0x40 + lVar12),(longlong)iVar5 << 6);
              iVar8 = (int)param_3[1];
              lVar12 = *param_3;
            }
            iVar8 = iVar8 + -1;
            uVar13 = uVar13 - 1;
            *(int *)(param_3 + 1) = iVar8;
            lVar15 = lVar3;
          }
          uVar13 = uVar13 + 1;
          lVar3 = lVar15;
        } while ((int)uVar13 < iVar8);
      }
      local_res18[0] = local_res18[0] + 1;
      lVar6 = lVar6 + 0x40;
    } while ((int)local_res18[0] <= iVar8);
  }
  local_res18[0] = local_res18[0] & 0xffffff00;
  AlgoImpl::
  IntroSortInternal<FBlendSampleData,FIdentityFunctor,TDereferenceWrapper<FBlendSampleData,<lambda_cb145bcc11e94150a77fe427b9dae3d9>_>_>
            (lVar12,(longlong)iVar8,local_res8[0],local_res18);
  iVar8 = (int)param_3[1];
  iVar5 = 0;
  if (0 < iVar8) {
    lVar6 = 0;
    pfVar7 = (float *)(*param_3 + 0x10);
    do {
      if (*pfVar7 < 1e-05) {
        TArray<FBlendSampleData,FDefaultAllocator>::RemoveAtImpl(param_3,0x3727c5ac,iVar8 - iVar5,0)
        ;
        break;
      }
      iVar5 = iVar5 + 1;
      fVar19 = fVar19 + *pfVar7;
      lVar6 = lVar6 + 1;
      pfVar7 = pfVar7 + 0x10;
    } while (lVar6 < iVar8);
  }
  iVar8 = 0;
  if (0 < (int)param_3[1]) {
    lVar6 = 0;
    do {
      iVar8 = iVar8 + 1;
      *(float *)(lVar6 + 0x10 + *param_3) = (1.0 / fVar19) * *(float *)(lVar6 + 0x10 + *param_3);
      lVar6 = lVar6 + 0x40;
    } while (iVar8 < (int)param_3[1]);
  }
  *(undefined4 *)(local_e8 + 0x78) = 0;
  if (0x7fffffff < *(uint *)(local_e8 + 0x7c)) {
    FUN_1422b26f0(local_e8,0);
  }
  return (int)param_3[1] != 0;
}



// FUNCTION 1422ad450 FUN_1422ad450 body=181 status=ok
// SIG undefined FUN_1422ad450(void)

undefined8 * FUN_1422ad450(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar1 = *param_3;
  if (*(int *)(param_1 + 0x280) != *(int *)(param_1 + 0x2ac)) {
    lVar3 = *(longlong *)(param_1 + 0x2b8);
    if (*(longlong *)(param_1 + 0x2b8) == 0) {
      lVar3 = param_1 + 0x2b0;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                             (longlong)*(int *)(param_1 + 0x2c0) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x278) + (longlong)iVar2 * 0x18);
        if (*(longlong *)(*(longlong *)(param_1 + 0x278) + (longlong)iVar2 * 0x18) == lVar1) {
          if (iVar2 != -1) goto LAB_1422ad4d3;
          break;
        }
        iVar2 = *(int *)(puVar5 + 2);
      } while (iVar2 != -1);
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_1422ad4d3:
  puVar4 = puVar5 + 1;
  if (puVar5 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  if (puVar4 == (undefined8 *)0x0) {
    *param_2 = DAT_146aef318;
    return param_2;
  }
  *param_2 = *puVar4;
  return param_2;
}



// FUNCTION 1422ad510 FUN_1422ad510 body=8 status=ok
// SIG undefined FUN_1422ad510(void)

longlong FUN_1422ad510(longlong param_1)

{
  return param_1 + 0x268;
}



// FUNCTION 1422ad520 GetSmartNameContainer body=154 status=ok
// SIG undefined GetSmartNameContainer(void)

longlong * USkeleton::GetSmartNameContainer(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar1 = *param_2;
  if (*(int *)(param_1 + 0x1f8) != *(int *)(param_1 + 0x224)) {
    lVar3 = *(longlong *)(param_1 + 0x230);
    if (*(longlong *)(param_1 + 0x230) == 0) {
      lVar3 = param_1 + 0x228;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                             (longlong)*(int *)(param_1 + 0x238) - 1U) * 4);
    if (iVar2 != -1) {
      while (plVar5 = (longlong *)((longlong)iVar2 * 0x70 + *(longlong *)(param_1 + 0x1f0)),
            *plVar5 != lVar1) {
        iVar2 = (int)plVar5[0xd];
        if (iVar2 == -1) {
          return (longlong *)0x0;
        }
      }
      if (iVar2 != -1) goto LAB_1422ad5ae;
    }
  }
  plVar5 = (longlong *)0x0;
LAB_1422ad5ae:
  plVar4 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  return plVar4;
}



// FUNCTION 1422ad5c0 FUN_1422ad5c0 body=65 status=ok
// SIG undefined FUN_1422ad5c0(void)

float FUN_1422ad5c0(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x2c0))();
  return (*(float *)(param_1 + 0x12) / (float)iVar1) * (float)param_2;
}



// FUNCTION 1422ad610 FUN_1422ad610 body=59 status=ok
// SIG undefined FUN_1422ad610(void)

float FUN_1422ad610(longlong param_1)

{
  float fVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = (float)UBlendSpaceBase::GetAnimationLengthFromSampleData
                             (*(longlong *)(param_1 + 8),param_1 + 0xf8);
  }
  return fVar1 - fVar1 * *(float *)(param_1 + 100);
}



// FUNCTION 1422ad650 GetUnlockedCosmeticDecalItems body=116 status=ok
// SIG undefined GetUnlockedCosmeticDecalItems(void)

undefined8 * UDakCampaignItem::GetUnlockedCosmeticDecalItems(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0xa8);
  _Src = *(void **)(param_1 + 0xa0);
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    return param_2;
  }
  TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_2,iVar1,0);
  ::_guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1 << 3);
  return param_2;
}



// FUNCTION 1422ad6d0 GetTriggerTime body=27 status=ok
// SIG undefined GetTriggerTime(void)

float FAnimNotifyEvent::GetTriggerTime(longlong param_1)

{
  float fVar1;
  
  fVar1 = (float)FAnimLinkableElement::GetTime(param_1,0);
  return fVar1 + *(float *)(param_1 + 0x34);
}



// FUNCTION 1422ad6f0 GetUIDByName body=89 status=ok
// SIG undefined GetUIDByName(void)

longlong USkeleton::GetUIDByName(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = (longlong *)FSmartNameContainer::GetContainerInternal(param_1 + 0x1f0);
  if (plVar2 != (longlong *)0x0) {
    plVar1 = (longlong *)*plVar2;
    if (plVar1 != plVar1 + (int)plVar2[1]) {
      plVar3 = plVar1;
      do {
        if (*plVar3 == *param_3) {
          return (longlong)plVar3 - (longlong)plVar1 >> 3;
        }
        plVar3 = plVar3 + 1;
      } while (plVar3 != plVar1 + (int)plVar2[1]);
    }
  }
  return 0xffff;
}



// FUNCTION 1422ad750 GetWeight body=26 status=ok
// SIG undefined GetWeight(void)

float FBlendSampleData::GetWeight(longlong param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x10);
  if (fVar1 < 0.0) {
    return 0.0;
  }
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  return fVar1;
}



// FUNCTION 1422ad770 HandleAssetPlayerTickedInternal body=121 status=ok
// SIG undefined HandleAssetPlayerTickedInternal(void)

void UAnimSequenceBase::HandleAssetPlayerTickedInternal
               (undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
               longlong param_5,undefined8 param_6)

{
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  FUN_1422a8210(param_1,local_res18,local_res20,*(undefined1 *)(param_5 + 0x1c),local_18);
  FAnimNotifyQueue::AddAnimNotifies
            (param_6,*(undefined1 *)(param_2 + 0xa1),local_18,*(undefined4 *)(param_5 + 0x14));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1422ad7f0 FUN_1422ad7f0 body=284 status=ok
// SIG undefined FUN_1422ad7f0(void)

void FUN_1422ad7f0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plVar6;
  
  *(short *)(param_1 + 0x250) = *(short *)(param_1 + 0x250) + 1;
  plVar6 = (longlong *)0x0;
  if (*(int *)(param_1 + 0x1f8) != *(int *)(param_1 + 0x224)) {
    lVar2 = *(longlong *)(param_1 + 0x230);
    if (*(longlong *)(param_1 + 0x230) == 0) {
      lVar2 = param_1 + 0x228;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)
                              ((int)((ulonglong)DAT_146aef308 >> 0x20) + (int)DAT_146aef308) &
                             (longlong)*(int *)(param_1 + 0x238) - 1U) * 4);
    if (iVar1 != -1) {
      do {
        plVar3 = (longlong *)((longlong)iVar1 * 0x70 + *(longlong *)(param_1 + 0x1f0));
        if (*plVar3 == DAT_146aef308) {
          if (iVar1 != -1) goto LAB_1422ad881;
          break;
        }
        iVar1 = (int)plVar3[0xd];
      } while (iVar1 != -1);
    }
  }
  plVar3 = plVar6;
LAB_1422ad881:
  plVar4 = plVar3 + 1;
  if (plVar3 == (longlong *)0x0) {
    plVar4 = plVar6;
  }
  if (plVar4 != (longlong *)0x0) {
    plVar3 = (longlong *)(param_1 + 0x240);
    *(undefined4 *)(param_1 + 0x248) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x24c)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar3,0);
    }
    lVar2 = plVar4[1];
    *(undefined4 *)(param_1 + 0x248) = 0;
    if (*(int *)(param_1 + 0x24c) < (int)lVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar3);
    }
    if (0 < (int)plVar4[1]) {
      do {
        iVar1 = *(int *)(param_1 + 0x248);
        *(int *)(param_1 + 0x248) = iVar1 + 1;
        if (*(int *)(param_1 + 0x24c) < iVar1 + 1) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar3,iVar1);
        }
        *(short *)(*plVar3 + (longlong)iVar1 * 2) = (short)plVar6;
        uVar5 = (int)plVar6 + 1;
        plVar6 = (longlong *)(ulonglong)uVar5;
      } while ((int)uVar5 < (int)plVar4[1]);
    }
  }
  return;
}



// FUNCTION 1422ad910 FUN_1422ad910 body=166 status=ok
// SIG undefined FUN_1422ad910(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1422ad910(longlong param_1)

{
  FAlphaBlend::SetDesiredValue(param_1 + 0x38,0x3f800000);
  if (*(char *)(param_1 + 0x76) == '\0') {
    FUN_1422b2430(param_1);
    *(undefined8 *)(param_1 + 0xc4) = _DAT_1468b5d90;
    *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d98;
    *(undefined8 *)(param_1 + 0xd0) = DAT_1468b5da0;
    *(undefined4 *)(param_1 + 0xd8) = DAT_1468b5da8;
    *(undefined8 *)(param_1 + 0xdc) = DAT_1464aa788;
    *(undefined4 *)(param_1 + 0xe4) = DAT_1464aa790;
    *(undefined1 *)(param_1 + 0x77) = 0;
  }
  else {
    FUN_1422a60f0();
  }
  FAlphaBlend::SetAlpha(param_1 + 0x38,0x3f800000);
  return;
}



// FUNCTION 1422ad9c0 FUN_1422ad9c0 body=1423 status=ok
// SIG undefined FUN_1422ad9c0(void)

void FUN_1422ad9c0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  int *piVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  longlong lVar16;
  int iVar17;
  int local_res20;
  int local_c8;
  longlong *local_b8;
  int local_b0;
  int iStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong *local_80;
  longlong *local_78;
  undefined1 local_70 [8];
  longlong local_68;
  int *local_60;
  longlong **local_58;
  longlong local_50 [3];
  
  plVar5 = (longlong *)FUN_142268ae0(*(undefined8 *)(param_2 + 0x10));
  if (plVar5 != (longlong *)0x0) {
    local_78 = plVar5;
    local_80 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);
    local_res20 = 0;
    if (0 < (int)local_80[1]) {
      local_88 = 0;
      do {
        lVar16 = *(longlong *)(local_88 + *local_80);
        if (((lVar16 != 0) && (lVar6 = FUN_1428f58f0(), *(longlong *)(lVar16 + 0x70) == lVar6)) &&
           (lVar16 = *(int *)(lVar16 + 0x44) + param_2, lVar16 != 0)) {
          iVar11 = (int)local_80[1] - local_res20;
          iVar1 = iVar11 + -1;
          lVar6 = FUN_1422699d0(param_2,plVar5,lVar16);
          if (lVar6 != 0) {
            iVar17 = *(int *)(lVar6 + 0x18);
            if (0 < iVar17) {
              iVar13 = 1;
              lVar12 = 0;
              do {
                lVar2 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x48 + lVar12);
                if (lVar2 != 0) {
                  uVar3 = *(undefined8 *)(lVar2 + 0x10);
                  local_a8 = 0;
                  local_a0 = 0;
                  FUN_1417846f0(param_2,
                                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                               );
                  local_b8 = (longlong *)FUN_1417985e0(uVar3,param_2,0,0,0,lVar2,0,0,0);
                  iVar14 = iVar13 + -1;
                  local_b8[6] = CONCAT44(iVar14,iVar1);
                  local_b0 = iVar1;
                  iStack_ac = iVar14;
                  (**(code **)(*local_b8 + 0x278))(local_b8,param_2);
                  local_60 = &local_b0;
                  local_58 = &local_b8;
                  FUN_14229f190(param_1,local_70,&local_60);
                  iVar17 = *(int *)(lVar16 + 0x90);
                  if (*(int *)(lVar16 + 0x90) <= iVar13) {
                    iVar17 = iVar13;
                  }
                  TArray<TBaseDelegate<void,FAnimNode_StateMachine_const_&,int,int>,FDefaultAllocator>
                  ::SetNum(lVar16 + 0x88,iVar17,1);
                  FUN_14229e790(*(longlong *)(lVar16 + 0x88) + (longlong)iVar14 * 0x10,local_b8,
                                &LAB_1422b0130);
                  iVar17 = *(int *)(lVar16 + 0xa0);
                  if (*(int *)(lVar16 + 0xa0) <= iVar13) {
                    iVar17 = iVar13;
                  }
                  TArray<TBaseDelegate<void,FAnimNode_StateMachine_const_&,int,int>,FDefaultAllocator>
                  ::SetNum(lVar16 + 0x98,iVar17,1);
                  FUN_14229e790(*(longlong *)(lVar16 + 0x98) + (longlong)iVar14 * 0x10,local_b8,
                                &LAB_1422b0150);
                }
                iVar17 = *(int *)(lVar6 + 0x18);
                iVar13 = iVar13 + 1;
                lVar12 = lVar12 + 0x58;
              } while (iVar13 <= iVar17);
            }
            local_c8 = 0;
            if (0 < iVar17) {
              local_90 = 0;
              do {
                iVar17 = 0;
                local_68 = *(longlong *)(lVar6 + 0x10) + local_90;
                if (0 < *(int *)(local_68 + 0x10)) {
                  local_98 = 0;
                  do {
                    piVar10 = (int *)(*(longlong *)(local_68 + 8) + local_98);
                    iVar13 = *(int *)((longlong)piVar10[2] * 0x40 + 0xc +
                                     *(longlong *)(lVar6 + 0x20));
                    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
                      plVar5 = (longlong *)param_1[8];
                      if ((longlong *)param_1[8] == (longlong *)0x0) {
                        plVar5 = param_1 + 7;
                      }
                      iVar14 = *(int *)((longlong)plVar5 +
                                       (((longlong)iVar11 - 1U ^ (longlong)iVar13) &
                                       (longlong)(int)param_1[9] - 1U) * 4);
                      if (iVar14 != -1) {
                        do {
                          puVar9 = (undefined8 *)(*param_1 + (longlong)iVar14 * 0x18);
                          if ((*(int *)(*param_1 + (longlong)iVar14 * 0x18) == iVar1) &&
                             (*(int *)((longlong)puVar9 + 4) == iVar13)) {
                            if (iVar14 != -1) goto LAB_1422add19;
                            break;
                          }
                          iVar14 = *(int *)(puVar9 + 2);
                        } while (iVar14 != -1);
                      }
                    }
                    puVar9 = (undefined8 *)0x0;
LAB_1422add19:
                    puVar15 = puVar9 + 1;
                    if (puVar9 == (undefined8 *)0x0) {
                      puVar15 = (undefined8 *)0x0;
                    }
                    if (puVar15 != (undefined8 *)0x0) {
                      plVar5 = (longlong *)*puVar15;
                      cVar4 = (**(code **)(*plVar5 + 0x2a8))(plVar5);
                      plVar7 = local_78;
                      if ((cVar4 != '\0') && (iVar13 = *piVar10, iVar13 != -1)) {
                        lVar16 = (**(code **)(*local_78 + 0x20))(local_78);
                        iVar14 = *(int *)(lVar16 + 8);
                        plVar7 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7);
                        lVar16 = *(int *)(*(longlong *)
                                           (*plVar7 + -8 + (longlong)(iVar14 - iVar13) * 8) + 0x44)
                                 + param_2;
                        if (lVar16 != 0) {
                          uVar3 = *puVar15;
                          plVar7 = (longlong *)(lVar16 + 0x38);
                          plVar8 = (longlong *)FMemory::Realloc(0,0x30);
                          if (plVar8 != (longlong *)0x0) {
                            *plVar8 = (longlong)&PTR_FUN_14433a710;
                            FWeakObjectPtr::operator=(plVar8 + 1,uVar3);
                            plVar8[2] = (longlong)&LAB_1422a4b7c;
                            lVar12 = FDelegateHandle::GenerateNewID();
                            plVar8[4] = lVar12;
                          }
                          if (local_50 == plVar7) {
LAB_1422addf4:
                            if (plVar8 != (longlong *)0x0) {
                              (**(code **)(*plVar8 + 0x28))(plVar8,0);
                              lVar12 = FMemory::Realloc(plVar8,0);
                              if (lVar12 != 0) {
                                FMemory::Free(lVar12);
                              }
                            }
                          }
                          else {
                            if (plVar8 != (longlong *)0x0) {
                              (**(code **)(*plVar8 + 0x30))(plVar8,plVar7);
                              goto LAB_1422addf4;
                            }
                            if ((*(int *)(lVar16 + 0x40) != 0) &&
                               (plVar8 = (longlong *)*plVar7, plVar8 != (longlong *)0x0)) {
                              (**(code **)(*plVar8 + 0x28))(plVar8,0);
                              if (*plVar7 != 0) {
                                lVar12 = FMemory::Realloc(*plVar7,0);
                                *plVar7 = lVar12;
                              }
                              *(undefined4 *)(lVar16 + 0x40) = 0;
                            }
                          }
                          cVar4 = (**(code **)(*plVar5 + 0x2b0))(plVar5);
                          *(bool *)(lVar16 + 0x48) = cVar4 == '\0';
                        }
                      }
                    }
                    iVar17 = iVar17 + 1;
                    local_98 = local_98 + 0x20;
                  } while (iVar17 < *(int *)(local_68 + 0x10));
                }
                local_c8 = local_c8 + 1;
                local_90 = local_90 + 0x58;
              } while (local_c8 < *(int *)(lVar6 + 0x18));
            }
          }
        }
        local_res20 = local_res20 + 1;
        local_88 = local_88 + 8;
        plVar5 = local_78;
      } while (local_res20 < (int)local_80[1]);
    }
  }
  return;
}



// FUNCTION 1422adf60 FUN_1422adf60 body=117 status=ok
// SIG undefined FUN_1422adf60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1422adf60(longlong param_1)

{
  undefined4 uVar1;
  undefined1 local_res8 [32];
  
  FUN_142275c20();
  *(undefined8 *)(param_1 + 0x708) = 0;
  *(undefined4 *)(param_1 + 0x330) = 0xffff;
  *(undefined8 *)(param_1 + 0x328) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x770) = _DAT_1468b5d90;
  uVar1 = DAT_1468b5d98;
  *(undefined4 *)(param_1 + 0x82c) = 0;
  *(undefined4 *)(param_1 + 0x778) = uVar1;
  SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>(local_res8,param_1);
  (*(code *)**(undefined8 **)(param_1 + 0x710))((undefined8 *)(param_1 + 0x710),local_res8);
  return;
}



// FUNCTION 1422adfe0 Initialize body=167 status=ok
// SIG undefined Initialize(void)

void FFIRFilterTimeBased::Initialize(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  param_1[4] = 0;
  iVar1 = 0;
  if (param_1[5] != 10) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 2);
    iVar1 = param_1[4];
  }
  param_1[4] = iVar1 + 10;
  if ((int)param_1[5] < iVar1 + 10) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 2);
  }
  ::_guard_xfg_dispatch_icall_nop((void *)(*(longlong *)(param_1 + 2) + (longlong)iVar1 * 8),0,0x50)
  ;
  param_1[8] = param_2;
  param_1[6] = param_3;
  *(undefined8 *)(param_1 + 9) = 0;
  param_1[7] = 0;
  *param_1 = 0;
  return;
}



// FUNCTION 1422ae090 InitializeCurveMetaData body=546 status=ok
// SIG undefined InitializeCurveMetaData(void)

void FSmartNameMapping::InitializeCurveMetaData(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint *puVar10;
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
  
  plVar1 = (longlong *)(param_1 + 0x10);
  uStack_84 = 1;
  uVar3 = *(uint *)(param_1 + 0x38);
  puVar2 = (uint *)(param_1 + 0x20);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar10 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar10 = puVar2;
    }
    uVar4 = *puVar10;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar4 == 0) {
      lVar8 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar6 = local_88 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar6;
      if (bVar5) goto LAB_1422ae15c;
      uVar4 = puVar10[lVar8 + 1];
    }
    uStack_84 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_74 = (iStack_70 - iVar6) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_1422ae15c:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x38);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar9 = uVar4 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar2;
  local_40 = plVar1;
  puStack_30 = puVar2;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar3) {
    puVar10 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar10 = puVar2;
    }
    uVar7 = puVar10[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar6 = (int)uVar4 >> 5;
    while (uVar7 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_1422ae222;
      uVar7 = puVar10[(longlong)iVar6 + 1];
      iVar6 = iVar6 + 1;
    }
    uVar7 = -uVar7 & uVar7;
    iVar6 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_74 = (uVar9 - iVar6) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_1422ae222:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar2))) {
    iVar6 = 0;
    lVar8 = (longlong)(int)uStack_4c * 0x30 + *plVar1;
    if (0 < *(int *)(lVar8 + 0x18)) {
      do {
        FBoneReference::Initialize(*(longlong *)(lVar8 + 0x10) + (longlong)iVar6 * 0x18,param_2);
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar8 + 0x18));
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return;
}



// FUNCTION 1422ae2c0 InitializeFilter body=106 status=ok
// SIG undefined InitializeFilter(void)

void UBlendSpaceBase::InitializeFilter(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    FFIRFilterTimeBased::Initialize
              (param_2,*(undefined4 *)(param_1 + 0x90),*(undefined1 *)(param_1 + 0x94));
    FFIRFilterTimeBased::Initialize
              (param_2 + 0x30,*(undefined4 *)(param_1 + 0x98),*(undefined1 *)(param_1 + 0x9c));
    FFIRFilterTimeBased::Initialize
              (param_2 + 0x60,*(undefined4 *)(param_1 + 0xa0),*(undefined1 *)(param_1 + 0xa4));
  }
  return;
}



// FUNCTION 1422ae330 InitializeFromPlayRate body=1561 status=ok
// SIG undefined InitializeFromPlayRate(void)

void FTimeStretchCurveInstance::InitializeFromPlayRate
               (undefined1 *param_1,float param_2,longlong param_3)

{
  longlong lVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  longlong local_res8;
  longlong local_res18;
  
  *param_1 = 0;
  if ((0 < *(int *)(param_3 + 0x10)) && (1e-08 < ABS(param_2))) {
    lVar15 = 8;
    fVar18 = *(float *)(*(longlong *)(param_3 + 8) + -0x10 +
                       (longlong)*(int *)(param_3 + 0x10) * 0x10);
    *(float *)(param_1 + 4) = fVar18;
    fVar16 = fVar18 / ABS(param_2);
    *(float *)(param_1 + 8) = fVar16;
    iVar4 = *(int *)(param_3 + 0x10);
    lVar13 = (longlong)iVar4;
    lVar1 = lVar13 + -1;
    if (fVar18 <= fVar16) {
      fVar2 = *(float *)(*(longlong *)(param_3 + 8) + 8 + lVar1 * 0x10);
      if (fVar16 <= fVar2) {
        fVar17 = 1.0;
        fVar18 = (fVar16 - fVar18) / (fVar2 - fVar18);
      }
      else {
        fVar18 = 1.0;
        fVar17 = fVar16 / fVar2;
      }
      lVar8 = 8;
      local_res8 = 8;
      local_res18 = 0x20;
    }
    else {
      fVar2 = *(float *)(*(longlong *)(param_3 + 8) + 4 + lVar1 * 0x10);
      if (fVar2 <= fVar16) {
        fVar17 = 1.0;
        fVar18 = (fVar18 - fVar16) / (fVar18 - fVar2);
      }
      else {
        fVar17 = fVar16 / fVar2;
        fVar18 = 1.0;
      }
      lVar8 = 4;
      local_res18 = 0x1c;
      local_res8 = 4;
    }
    uVar10 = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    if (*(int *)(param_1 + 0x2c) < iVar4) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x20,iVar4);
    }
    iVar11 = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x28) = iVar11 + iVar4;
    if (*(int *)(param_1 + 0x2c) < iVar11 + iVar4) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x20);
    }
    uVar7 = uVar10;
    if (3 < lVar1) {
      fVar16 = 1.0 - fVar18;
      uVar12 = uVar10;
      do {
        pfVar5 = (float *)(*(longlong *)(param_3 + 8) + uVar12);
        *(float *)(*(longlong *)(param_1 + 0x20) + uVar7 * 4) =
             (fVar18 * *(float *)(local_res8 + (longlong)pfVar5) + fVar16 * *pfVar5) * fVar17;
        lVar6 = *(longlong *)(param_3 + 8) + uVar12;
        *(float *)(*(longlong *)(param_1 + 0x20) + 4 + uVar7 * 4) =
             (fVar18 * *(float *)(local_res8 + 0x10 + lVar6) + fVar16 * *(float *)(lVar6 + 0x10)) *
             fVar17;
        lVar6 = *(longlong *)(param_3 + 8) + uVar12;
        *(float *)(*(longlong *)(param_1 + 0x20) + 8 + uVar7 * 4) =
             (fVar18 * *(float *)(local_res8 + 0x20 + lVar6) + fVar16 * *(float *)(lVar6 + 0x20)) *
             fVar17;
        lVar6 = *(longlong *)(param_3 + 8) + uVar12;
        uVar12 = uVar12 + 0x40;
        *(float *)(*(longlong *)(param_1 + 0x20) + 0xc + uVar7 * 4) =
             (fVar18 * *(float *)(local_res8 + 0x30 + lVar6) + fVar16 * *(float *)(lVar6 + 0x30)) *
             fVar17;
        uVar7 = uVar7 + 4;
      } while ((longlong)uVar7 < lVar13 + -4);
    }
    if ((longlong)uVar7 < lVar1) {
      lVar6 = uVar7 << 4;
      do {
        pfVar5 = (float *)(*(longlong *)(param_3 + 8) + lVar6);
        lVar6 = lVar6 + 0x10;
        *(float *)(*(longlong *)(param_1 + 0x20) + uVar7 * 4) =
             (fVar18 * *(float *)(lVar8 + (longlong)pfVar5) + (1.0 - fVar18) * *pfVar5) * fVar17;
        uVar7 = uVar7 + 1;
      } while ((longlong)uVar7 < lVar1);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + lVar1 * 4) = *(undefined4 *)(param_1 + 8);
    fVar18 = (fVar18 * *(float *)(local_res18 + param_3) +
             (1.0 - fVar18) * *(float *)(param_3 + 0x18)) * fVar17 * fVar17;
    if (((1e-08 < ABS(fVar18)) &&
        (fVar18 = (*(float *)(param_1 + 4) - fVar17 * *(float *)(param_1 + 8)) / fVar18,
        -1.0 < fVar18)) && (1e-08 <= (fVar18 + 1.0) * fVar17)) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      if (*(int *)(param_1 + 0x1c) < iVar4) {
        TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x10,iVar4);
      }
      iVar11 = *(int *)(param_1 + 0x18);
      *(int *)(param_1 + 0x18) = iVar11 + iVar4;
      if (*(int *)(param_1 + 0x1c) < iVar11 + iVar4) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x10);
      }
      fVar16 = 0.0;
      uVar7 = uVar10;
      if (3 < lVar1) {
        lVar13 = (lVar13 - 5U >> 2) + 1;
        uVar7 = lVar13 * 4;
        uVar12 = uVar10;
        do {
          *(float *)(lVar15 + -8 + *(longlong *)(param_1 + 0x10)) = fVar16;
          fVar16 = fVar16 + (*(float *)(lVar15 + -4 + *(longlong *)(param_1 + 0x20)) -
                            *(float *)(lVar15 + -8 + *(longlong *)(param_1 + 0x20))) * fVar17 *
                            (fVar18 * *(float *)(*(longlong *)(param_3 + 8) + 0xc + uVar12) + 1.0);
          *(float *)(lVar15 + -4 + *(longlong *)(param_1 + 0x10)) = fVar16;
          fVar16 = fVar16 + (*(float *)(lVar15 + *(longlong *)(param_1 + 0x20)) -
                            *(float *)(lVar15 + -4 + *(longlong *)(param_1 + 0x20))) * fVar17 *
                            (fVar18 * *(float *)(*(longlong *)(param_3 + 8) + 0x1c + uVar12) + 1.0);
          *(float *)(lVar15 + *(longlong *)(param_1 + 0x10)) = fVar16;
          fVar16 = fVar16 + (*(float *)(lVar15 + 4 + *(longlong *)(param_1 + 0x20)) -
                            *(float *)(lVar15 + *(longlong *)(param_1 + 0x20))) * fVar17 *
                            (fVar18 * *(float *)(*(longlong *)(param_3 + 8) + 0x2c + uVar12) + 1.0);
          *(float *)(lVar15 + 4 + *(longlong *)(param_1 + 0x10)) = fVar16;
          lVar8 = lVar15 + 8;
          lVar6 = lVar15 + 4;
          lVar15 = lVar15 + 0x10;
          pfVar5 = (float *)(*(longlong *)(param_3 + 8) + 0x3c + uVar12);
          uVar12 = uVar12 + 0x40;
          fVar16 = fVar16 + (*(float *)(lVar8 + *(longlong *)(param_1 + 0x20)) -
                            *(float *)(lVar6 + *(longlong *)(param_1 + 0x20))) * fVar17 *
                            (fVar18 * *pfVar5 + 1.0);
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      if ((longlong)uVar7 < lVar1) {
        lVar13 = uVar7 << 4;
        do {
          *(float *)(*(longlong *)(param_1 + 0x10) + uVar7 * 4) = fVar16;
          lVar8 = uVar7 * 4;
          pfVar5 = (float *)(*(longlong *)(param_3 + 8) + 0xc + lVar13);
          lVar13 = lVar13 + 0x10;
          lVar15 = uVar7 * 4;
          uVar7 = uVar7 + 1;
          fVar16 = fVar16 + (fVar18 * *pfVar5 + 1.0) *
                            (*(float *)(*(longlong *)(param_1 + 0x20) + 4 + lVar8) -
                            *(float *)(*(longlong *)(param_1 + 0x20) + lVar15)) * fVar17;
        } while ((longlong)uVar7 < lVar1);
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + lVar1 * 4) = *(undefined4 *)(param_1 + 4);
      iVar4 = *(int *)(param_1 + 0x18);
      if (0 < iVar4 + -1) {
        iVar11 = 1;
        iVar14 = 2;
        uVar7 = uVar10;
        do {
          iVar9 = (int)uVar10;
          lVar1 = *(longlong *)(param_1 + 0x20);
          if ((ABS(*(float *)(uVar7 + 4 + lVar1) - *(float *)(uVar7 + lVar1)) <= 0.0001) ||
             (ABS(*(float *)(uVar7 + 4 + *(longlong *)(param_1 + 0x10)) -
                  *(float *)(uVar7 + *(longlong *)(param_1 + 0x10))) <= 0.0001)) {
            iVar4 = *(int *)(param_1 + 0x28);
            iVar3 = (iVar4 - iVar11) + -1;
            if (iVar3 != 0) {
              ::_guard_xfg_dispatch_icall_nop
                        ((void *)(lVar1 + (longlong)iVar11 * 4),
                         (void *)(lVar1 + (longlong)iVar14 * 4),(longlong)iVar3 << 2);
              iVar4 = *(int *)(param_1 + 0x28);
            }
            *(int *)(param_1 + 0x28) = iVar4 + -1;
            iVar4 = (*(int *)(param_1 + 0x18) - iVar11) + -1;
            if (iVar4 != 0) {
              ::_guard_xfg_dispatch_icall_nop
                        ((void *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar11 * 4),
                         (void *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar14 * 4),
                         (longlong)iVar4 << 2);
            }
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
            iVar9 = iVar9 + -1;
            iVar11 = iVar11 + -1;
            iVar14 = iVar14 + -1;
            uVar7 = uVar7 - 4;
          }
          iVar4 = *(int *)(param_1 + 0x18);
          uVar10 = (ulonglong)(iVar9 + 1U);
          iVar11 = iVar11 + 1;
          iVar14 = iVar14 + 1;
          uVar7 = uVar7 + 4;
        } while ((int)(iVar9 + 1U) < iVar4 + -1);
      }
      if (2 < iVar4) {
        *param_1 = 1;
      }
    }
  }
  return;
}



// FUNCTION 1422ae950 FUN_1422ae950 body=46 status=ok
// SIG undefined FUN_1422ae950(void)

void FUN_1422ae950(longlong param_1,longlong param_2)

{
  FUN_142276b00();
  *(undefined8 *)(param_1 + 0x708) = *(undefined8 *)(param_2 + 0x440);
  return;
}



// FUNCTION 1422ae980 InterpolateWeightOfSampleData body=2734 status=ok
// SIG undefined InterpolateWeightOfSampleData(void)

bool UBlendSpaceBase::InterpolateWeightOfSampleData
               (longlong param_1,undefined4 param_2,longlong *param_3,longlong *param_4,
               longlong *param_5)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined4 *puVar21;
  int iVar22;
  longlong lVar23;
  void *_Src;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  void *local_180;
  undefined4 *local_178;
  void *local_138;
  uint local_130;
  uint local_12c;
  int local_128;
  undefined8 local_120;
  float local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  undefined4 *local_f8;
  uint local_f0;
  int local_ec;
  uint local_e8;
  int local_e4;
  longlong local_e0;
  
  local_e4 = 0;
  fVar27 = 0.0;
  do {
    if ((local_e4 < 0) || ((int)param_3[1] <= local_e4)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (!bVar12) {
      iVar22 = 0;
      do {
        if ((iVar22 < 0) || ((int)param_4[1] <= iVar22)) {
          bVar12 = false;
        }
        else {
          bVar12 = true;
        }
        if (!bVar12) {
          return 1e-05 < fVar27;
        }
        _Src = (void *)0x0;
        piVar14 = (int *)((longlong)iVar22 * 0x40 + *param_4);
        local_138 = (void *)0x0;
        iVar2 = piVar14[6];
        iVar3 = piVar14[5];
        local_130 = piVar14[0xe];
        lVar18 = (longlong)(int)local_130;
        uVar7 = *(undefined8 *)(piVar14 + 2);
        fVar25 = (float)piVar14[4];
        iVar6 = *piVar14;
        pvVar8 = *(void **)(piVar14 + 0xc);
        iVar4 = piVar14[7];
        iVar9 = piVar14[8];
        iVar10 = piVar14[9];
        iVar11 = piVar14[10];
        iVar13 = piVar14[0xb];
        if (local_130 == 0) {
          local_12c = 0;
          uVar17 = 0;
        }
        else {
          TArray<int,FDefaultAllocator>::ResizeForCopy(&local_138,local_130,0);
          _Src = local_138;
          ::_guard_xfg_dispatch_icall_nop(local_138,pvVar8,lVar18 << 2);
          uVar17 = local_130;
        }
        bVar12 = false;
        uVar5 = *(uint *)(param_1 + 0xb8);
        uVar19 = (ulonglong)uVar5;
        if (uVar17 != uVar5) {
          local_130 = 0;
          if (local_12c != uVar5) {
            TArray<float,FDefaultAllocator>::ResizeTo(&local_138);
            _Src = local_138;
          }
          uVar17 = local_130;
          if (0 < (int)uVar5) {
            do {
              lVar18 = (longlong)(int)local_130;
              local_130 = local_130 + 1;
              if ((int)local_12c < (int)local_130) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_138);
                _Src = local_138;
              }
              pfVar1 = (float *)((longlong)_Src + lVar18 * 4);
              if (pfVar1 != (float *)0x0) {
                *pfVar1 = fVar25;
              }
              uVar19 = uVar19 - 1;
              uVar17 = local_130;
            } while (uVar19 != 0);
          }
        }
        iVar16 = 0;
        while( true ) {
          if ((iVar16 < 0) || ((int)param_5[1] <= iVar16)) goto LAB_1422af1d0;
          if (*(int *)((longlong)iVar16 * 0x40 + *param_5) == iVar6) break;
          iVar16 = iVar16 + 1;
        }
        bVar12 = true;
LAB_1422af1d0:
        if (!bVar12) {
          local_178 = (undefined4 *)0x0;
          local_f8 = (undefined4 *)0x0;
          local_128 = iVar6;
          local_120 = uVar7;
          local_118 = fVar25;
          local_114 = iVar3;
          local_110 = iVar2;
          local_10c = iVar4;
          local_108 = iVar9;
          iStack_104 = iVar10;
          iStack_100 = iVar11;
          iStack_fc = iVar13;
          local_f0 = uVar17;
          if (uVar17 != 0) {
            TArray<int,FDefaultAllocator>::ResizeForCopy(&local_f8,uVar17,0);
            local_178 = local_f8;
            ::_guard_xfg_dispatch_icall_nop(local_f8,_Src,(longlong)(int)uVar17 << 2);
          }
          uVar17 = local_f0;
          iVar13 = iStack_fc;
          iVar11 = iStack_100;
          iVar10 = iStack_104;
          iVar9 = local_108;
          iVar6 = local_10c;
          iVar4 = local_110;
          iVar3 = local_114;
          uVar7 = local_120;
          iVar2 = local_128;
          fVar25 = (float)FMath::FInterpConstantTo(0,fVar25,param_2,*(undefined4 *)(param_1 + 0xa8))
          ;
          if (0 < (int)uVar17) {
            lVar20 = 0;
            uVar19 = (ulonglong)uVar17;
            lVar18 = (longlong)_Src - (longlong)local_178;
            puVar21 = local_178;
            local_e0 = lVar18;
            do {
              uVar24 = *(undefined4 *)((longlong)puVar21 + lVar18);
              if (0.0 < *(float *)(*(longlong *)(param_1 + 0xb0) + 0x18 + lVar20)) {
                uVar24 = FMath::FInterpConstantTo(0,uVar24,param_2);
                lVar18 = local_e0;
              }
              *puVar21 = uVar24;
              lVar20 = lVar20 + 0x20;
              puVar21 = puVar21 + 1;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
          iVar16 = (int)param_5[1];
          *(int *)(param_5 + 1) = iVar16 + 1;
          if (*(int *)((longlong)param_5 + 0xc) < iVar16 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
            ResizeGrow(param_5,iVar16);
          }
          piVar15 = (int *)((longlong)iVar16 * 0x40 + *param_5);
          piVar15[4] = (int)fVar25;
          piVar14 = piVar15 + 0xc;
          piVar15[5] = iVar3;
          piVar15[6] = iVar4;
          piVar15[7] = iVar6;
          *piVar15 = iVar2;
          *(undefined8 *)(piVar15 + 2) = uVar7;
          piVar15[8] = iVar9;
          piVar15[9] = iVar10;
          piVar15[10] = iVar11;
          piVar15[0xb] = iVar13;
          piVar14[0] = 0;
          piVar14[1] = 0;
          piVar15[0xe] = uVar17;
          if (uVar17 == 0) {
            piVar15[0xf] = 0;
          }
          else {
            TArray<int,FDefaultAllocator>::ResizeForCopy(piVar14,uVar17,0);
            ::_guard_xfg_dispatch_icall_nop(*(void **)piVar14,local_178,(longlong)(int)uVar17 << 2);
          }
          if (0.0 <= fVar25) {
            if (1.0 <= fVar25) {
              fVar25 = 1.0;
            }
          }
          else {
            fVar25 = 0.0;
          }
          fVar27 = fVar27 + fVar25;
          if (local_178 != (undefined4 *)0x0) {
            FMemory::Free(local_178);
          }
        }
        if (_Src != (void *)0x0) {
          FMemory::Free(_Src);
        }
        iVar22 = iVar22 + 1;
      } while( true );
    }
    piVar14 = (int *)((longlong)local_e4 * 0x40 + *param_3);
    local_180 = (void *)0x0;
    local_138 = (void *)0x0;
    local_130 = piVar14[0xe];
    lVar18 = (longlong)(int)local_130;
    iVar22 = piVar14[6];
    iVar2 = piVar14[5];
    iVar4 = *piVar14;
    uVar7 = *(undefined8 *)(piVar14 + 2);
    fVar25 = (float)piVar14[4];
    pvVar8 = *(void **)(piVar14 + 0xc);
    iVar3 = piVar14[7];
    iVar6 = piVar14[8];
    iVar9 = piVar14[9];
    iVar10 = piVar14[10];
    iVar11 = piVar14[0xb];
    if (local_130 == 0) {
      local_12c = 0;
      uVar17 = 0;
    }
    else {
      TArray<int,FDefaultAllocator>::ResizeForCopy(&local_138,local_130,0);
      local_180 = local_138;
      ::_guard_xfg_dispatch_icall_nop(local_138,pvVar8,lVar18 << 2);
      uVar17 = local_130;
    }
    uVar5 = *(uint *)(param_1 + 0xb8);
    uVar19 = (ulonglong)uVar5;
    bVar12 = false;
    if (uVar17 != uVar5) {
      local_130 = 0;
      if (local_12c != uVar5) {
        TArray<float,FDefaultAllocator>::ResizeTo(&local_138,uVar5);
        local_180 = local_138;
      }
      uVar17 = local_130;
      if (0 < (int)uVar5) {
        do {
          local_130 = uVar17 + 1;
          if ((int)local_12c < (int)local_130) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_138,uVar17);
            local_180 = local_138;
          }
          pfVar1 = (float *)((longlong)local_180 + (longlong)(int)uVar17 * 4);
          if (pfVar1 != (float *)0x0) {
            *pfVar1 = fVar25;
          }
          uVar19 = uVar19 - 1;
          uVar17 = local_130;
        } while (uVar19 != 0);
      }
    }
    uVar5 = local_130;
    iVar13 = 0;
    while( true ) {
      if ((iVar13 < 0) || ((int)param_4[1] <= iVar13)) goto LAB_1422aee1c;
      lVar18 = *param_4;
      lVar20 = (longlong)iVar13 * 0x40;
      iVar16 = *(int *)(lVar20 + lVar18);
      if (iVar16 == iVar4) break;
      iVar13 = iVar13 + 1;
    }
    local_110 = *(int *)(lVar20 + 0x18 + lVar18);
    local_114 = *(int *)(lVar20 + 0x14 + lVar18);
    local_f0 = *(int *)(lVar20 + 0x38 + lVar18);
    lVar23 = (longlong)(int)local_f0;
    local_120 = *(undefined8 *)(lVar20 + 8 + lVar18);
    uVar24 = *(undefined4 *)(lVar20 + 0x10 + lVar18);
    pvVar8 = *(void **)(lVar20 + 0x30 + lVar18);
    local_10c = *(int *)(lVar20 + 0x1c + lVar18);
    local_178 = (undefined4 *)0x0;
    local_f8 = (undefined4 *)0x0;
    piVar14 = (int *)(lVar20 + 0x20 + lVar18);
    local_108 = *piVar14;
    iStack_104 = piVar14[1];
    iStack_100 = piVar14[2];
    iStack_fc = piVar14[3];
    local_128 = iVar16;
    local_118 = (float)uVar24;
    if (local_f0 == 0) {
      local_ec = 0;
    }
    else {
      TArray<int,FDefaultAllocator>::ResizeForCopy(&local_f8,local_f0,0);
      local_178 = local_f8;
      ::_guard_xfg_dispatch_icall_nop(local_f8,pvVar8,lVar23 << 2);
      uVar24 = *(undefined4 *)(lVar20 + 0x10 + lVar18);
    }
    iVar13 = local_ec;
    local_118 = (float)FMath::FInterpConstantTo
                                 (fVar25,uVar24,param_2,*(undefined4 *)(param_1 + 0xa8));
    local_f0 = uVar17;
    if ((uVar17 != 0) || (iVar13 != 0)) {
      local_e8 = uVar17;
      TArray<int,FDefaultAllocator>::ResizeForCopy(&local_f8,uVar17,iVar13);
      local_178 = local_f8;
      ::_guard_xfg_dispatch_icall_nop(local_f8,local_180,(longlong)(int)uVar17 << 2);
    }
    fVar26 = local_118;
    uVar19 = (ulonglong)local_f0;
    local_e8 = local_f0;
    if (0 < (int)local_f0) {
      lVar23 = 0;
      puVar21 = local_178;
      do {
        uVar24 = *(undefined4 *)(lVar20 + 0x10 + lVar18);
        if (0.0 < *(float *)(*(longlong *)(param_1 + 0xb0) + 0x18 + lVar23)) {
          uVar24 = FMath::FInterpConstantTo
                             (*(undefined4 *)
                               ((longlong)puVar21 + ((longlong)local_180 - (longlong)local_178)),
                              uVar24,param_2);
        }
        *puVar21 = uVar24;
        lVar23 = lVar23 + 0x20;
        puVar21 = puVar21 + 1;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
      uVar19 = (ulonglong)local_e8;
      uVar17 = uVar5;
    }
    iVar13 = (int)param_5[1];
    *(int *)(param_5 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_5 + 0xc) < iVar13 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_5,iVar13);
    }
    piVar15 = (int *)((longlong)iVar13 * 0x40 + *param_5);
    piVar15[5] = local_114;
    piVar14 = piVar15 + 0xc;
    piVar15[6] = local_110;
    *piVar15 = local_128;
    piVar15[7] = local_10c;
    *(undefined8 *)(piVar15 + 2) = local_120;
    piVar15[4] = (int)fVar26;
    piVar15[8] = local_108;
    piVar15[9] = iStack_104;
    piVar15[10] = iStack_100;
    piVar15[0xb] = iStack_fc;
    piVar14[0] = 0;
    piVar14[1] = 0;
    iVar13 = (int)uVar19;
    piVar15[0xe] = iVar13;
    if (iVar13 == 0) {
      piVar15[0xf] = 0;
    }
    else {
      TArray<int,FDefaultAllocator>::ResizeForCopy(piVar14,uVar19,0);
      ::_guard_xfg_dispatch_icall_nop(*(void **)piVar14,local_178,(longlong)iVar13 << 2);
    }
    if (0.0 <= fVar26) {
      if (1.0 <= fVar26) {
        fVar26 = 1.0;
      }
    }
    else {
      fVar26 = 0.0;
    }
    fVar27 = fVar27 + fVar26;
    bVar12 = true;
    if (local_178 != (undefined4 *)0x0) {
      FMemory::Free(local_178);
    }
LAB_1422aee1c:
    if (!bVar12) {
      local_178 = (undefined4 *)0x0;
      local_f8 = (undefined4 *)0x0;
      local_128 = iVar4;
      local_120 = uVar7;
      local_118 = fVar25;
      local_114 = iVar2;
      local_110 = iVar22;
      local_10c = iVar3;
      local_108 = iVar6;
      iStack_104 = iVar9;
      iStack_100 = iVar10;
      iStack_fc = iVar11;
      local_f0 = uVar17;
      if (uVar17 != 0) {
        TArray<int,FDefaultAllocator>::ResizeForCopy(&local_f8,uVar17,0);
        local_178 = local_f8;
        ::_guard_xfg_dispatch_icall_nop(local_f8,local_180,(longlong)(int)uVar17 << 2);
      }
      uVar17 = local_f0;
      iVar11 = iStack_fc;
      iVar10 = iStack_100;
      iVar9 = iStack_104;
      iVar6 = local_108;
      iVar4 = local_10c;
      iVar3 = local_110;
      iVar2 = local_114;
      uVar7 = local_120;
      iVar22 = local_128;
      fVar25 = (float)FMath::FInterpConstantTo(fVar25,0,param_2,*(undefined4 *)(param_1 + 0xa8));
      if (0 < (int)uVar17) {
        lVar18 = 0;
        uVar19 = (ulonglong)uVar17;
        puVar21 = local_178;
        do {
          if (*(float *)(*(longlong *)(param_1 + 0xb0) + 0x18 + lVar18) <= 0.0) {
            uVar24 = 0;
          }
          else {
            uVar24 = FMath::FInterpConstantTo
                               (*(undefined4 *)
                                 (((longlong)local_180 - (longlong)local_178) + (longlong)puVar21),0
                                ,param_2);
          }
          *puVar21 = uVar24;
          lVar18 = lVar18 + 0x20;
          puVar21 = puVar21 + 1;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      if (1e-05 < fVar25) {
        iVar13 = (int)param_5[1];
        *(int *)(param_5 + 1) = iVar13 + 1;
        if (*(int *)((longlong)param_5 + 0xc) < iVar13 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
          ResizeGrow(param_5,iVar13);
        }
        piVar15 = (int *)((longlong)iVar13 * 0x40 + *param_5);
        piVar15[4] = (int)fVar25;
        piVar14 = piVar15 + 0xc;
        piVar15[5] = iVar2;
        piVar15[6] = iVar3;
        piVar15[7] = iVar4;
        *piVar15 = iVar22;
        *(undefined8 *)(piVar15 + 2) = uVar7;
        piVar15[8] = iVar6;
        piVar15[9] = iVar9;
        piVar15[10] = iVar10;
        piVar15[0xb] = iVar11;
        piVar14[0] = 0;
        piVar14[1] = 0;
        piVar15[0xe] = uVar17;
        if (uVar17 == 0) {
          piVar15[0xf] = 0;
        }
        else {
          TArray<int,FDefaultAllocator>::ResizeForCopy(piVar14,uVar17,0);
          ::_guard_xfg_dispatch_icall_nop(*(void **)piVar14,local_178,(longlong)(int)uVar17 << 2);
        }
        if (0.0 <= fVar25) {
          if (1.0 <= fVar25) {
            fVar25 = 1.0;
          }
        }
        else {
          fVar25 = 0.0;
        }
        fVar27 = fVar27 + fVar25;
      }
      if (local_178 != (undefined4 *)0x0) {
        FMemory::Free(local_178);
      }
    }
    if (local_180 != (void *)0x0) {
      FMemory::Free(local_180);
    }
    local_e4 = local_e4 + 1;
  } while( true );
}



// FUNCTION 1422af430 IsBranchingPoint body=52 status=ok
// SIG undefined IsBranchingPoint(void)

undefined8 FAnimNotifyEvent::IsBranchingPoint(longlong param_1)

{
  if ((*(longlong *)(param_1 + 8) != 0) &&
     (((*(char *)(param_1 + 0x91) == '\x01' ||
       ((*(longlong *)(param_1 + 0x48) != 0 &&
        (*(char *)(*(longlong *)(param_1 + 0x48) + 0x28) != '\0')))) ||
      ((*(longlong *)(param_1 + 0x50) != 0 &&
       (*(char *)(*(longlong *)(param_1 + 0x50) + 0x28) != '\0')))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 1422af470 FUN_1422af470 body=574 status=ok
// SIG undefined FUN_1422af470(void)

bool FUN_1422af470(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  int *piVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  
  iVar1 = *(int *)(param_2 + 0x140);
  uVar11 = 0;
  iVar5 = 0;
  if (0 < iVar1) {
    plVar2 = *(longlong **)(param_2 + 0x158);
    uVar13 = uVar11;
    uVar14 = uVar11;
    plVar15 = plVar2;
    do {
      lVar3 = *plVar15;
      iVar12 = -1;
      if (lVar3 != 0) {
        if (*(int *)(param_1 + 0xf0) != *(int *)(param_1 + 0x11c)) {
          lVar8 = *(longlong *)(param_1 + 0x128);
          if (*(longlong *)(param_1 + 0x128) == 0) {
            lVar8 = param_1 + 0x120;
          }
          iVar5 = *(int *)(lVar8 + ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                                   (longlong)*(int *)(param_1 + 0x130) - 1U) * 4);
          if (iVar5 != -1) {
            do {
              piVar9 = (int *)(*(longlong *)(param_1 + 0xe8) + (longlong)iVar5 * 0x18);
              if (*(longlong *)(*(longlong *)(param_1 + 0xe8) + (longlong)iVar5 * 0x18) == lVar3) {
                if (iVar5 != -1) goto LAB_1422af553;
                break;
              }
              iVar5 = piVar9[4];
            } while (iVar5 != -1);
          }
        }
        piVar9 = (int *)0x0;
LAB_1422af553:
        piVar7 = piVar9 + 2;
        if (piVar9 == (int *)0x0) {
          piVar7 = (int *)0x0;
        }
        if (piVar7 != (int *)0x0) {
          iVar12 = *piVar7;
        }
      }
      iVar10 = (int)uVar11;
      if (iVar12 == -1) {
        do {
          if ((int)uVar11 == -1) {
LAB_1422af65d:
            if (iVar12 == -1) {
              return false;
            }
            break;
          }
          iVar5 = (int)plVar2[(longlong)(int)uVar11 * 2 + 1];
          uVar11 = (ulonglong)iVar5;
          if (iVar5 != -1) {
            iVar12 = -1;
            lVar3 = plVar2[uVar11 * 2];
            if (lVar3 != 0) {
              if (*(int *)(param_1 + 0xf0) != *(int *)(param_1 + 0x11c)) {
                lVar8 = *(longlong *)(param_1 + 0x128);
                if (*(longlong *)(param_1 + 0x128) == 0) {
                  lVar8 = param_1 + 0x120;
                }
                iVar6 = *(int *)(lVar8 + ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                                         (longlong)*(int *)(param_1 + 0x130) - 1U) * 4);
                if (iVar6 != -1) {
                  do {
                    lVar8 = *(longlong *)(param_1 + 0xe8) + (longlong)iVar6 * 0x18;
                    if (*(longlong *)(*(longlong *)(param_1 + 0xe8) + (longlong)iVar6 * 0x18) ==
                        lVar3) {
                      if (iVar6 != -1) goto LAB_1422af634;
                      break;
                    }
                    iVar6 = *(int *)(lVar8 + 0x10);
                  } while (iVar6 != -1);
                }
              }
              lVar8 = 0;
LAB_1422af634:
              piVar9 = (int *)(lVar8 + 8);
              if (lVar8 == 0) {
                piVar9 = (int *)0x0;
              }
              if (piVar9 != (int *)0x0) {
                iVar12 = *piVar9;
              }
            }
          }
          if (iVar5 == 0) goto LAB_1422af65d;
        } while (iVar12 == -1);
      }
      else {
        uVar13 = (ulonglong)((int)uVar13 + 1);
      }
      iVar5 = (int)uVar13;
      cVar4 = FUN_1422a73f0(param_1,iVar12,param_2);
      if (cVar4 == '\0') {
        return false;
      }
      uVar11 = (ulonglong)(iVar10 + 1);
      uVar14 = uVar14 + 1;
      plVar15 = plVar15 + 2;
    } while ((longlong)uVar14 < (longlong)iVar1);
  }
  return 0 < iVar5;
}



// FUNCTION 1422af6b0 FUN_1422af6b0 body=141 status=ok
// SIG undefined FUN_1422af6b0(void)

undefined1 FUN_1422af6b0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_142a07000();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_1423b2d70(param_1[4],1);
    }
  }
  lVar3 = param_1[0x72];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar3;
  }
  return *(undefined1 *)(lVar3 + 0x844);
}



// FUNCTION 1422af740 IsNotifyAvailable body=27 status=ok
// SIG undefined IsNotifyAvailable(void)

undefined1 UAnimSequenceBase::IsNotifyAvailable(longlong param_1)

{
  if ((*(int *)(param_1 + 0x88) != 0) && (0.0 < *(float *)(param_1 + 0x90))) {
    return 1;
  }
  return 0;
}



// FUNCTION 1422af760 FUN_1422af760 body=162 status=ok
// SIG undefined FUN_1422af760(void)

undefined1 FUN_1422af760(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = UAnimInstance::GetActiveMontageInstance();
  if (lVar2 != 0) {
    return *(undefined1 *)(lVar2 + 0x28);
  }
  lVar2 = param_1[4];
  if (lVar2 != 0) {
    lVar3 = FUN_142a07000();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_1423b2d70(param_1[4],1);
    }
  }
  lVar2 = param_1[0x72];
  if (lVar2 == 0) {
    lVar2 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar2;
  }
  return *(undefined1 *)(lVar2 + 0x845);
}



// FUNCTION 1422af810 FUN_1422af810 body=43 status=ok
// SIG undefined FUN_1422af810(void)

undefined8 FUN_1422af810(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0x440) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x440) + 0x298))();
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1422af8a0 IsAvailable body=85 status=ok
// SIG undefined IsAvailable(void)

undefined1 UNetDriver::IsAvailable(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation/BlendSpaceBase.h",
             400,L"Pure virtual not implemented (%s)",L"UBlendSpaceBase::IsSameSamplePoint");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation/BlendSpaceBase.h",
             400,L"Pure virtual not implemented (%s)",L"UBlendSpaceBase::IsSameSamplePoint");
  return 0;
}



// FUNCTION 1422af900 FUN_1422af900 body=287 status=ok
// SIG undefined FUN_1422af900(void)

ulonglong FUN_1422af900(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  byte bVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)(param_1 + 200);
  uVar3 = (ulonglong)*(int *)(param_1 + 0xd0);
  bVar4 = 1;
  plVar1 = plVar5 + uVar3 * 3;
  for (; plVar5 != plVar1; plVar5 = plVar5 + 3) {
    plVar2 = (longlong *)*plVar5;
    if (*(int *)(param_1 + 0xd0) < 2) {
      if (plVar2 != (longlong *)0x0) goto LAB_1422af958;
LAB_1422af975:
      uVar3 = uVar3 & 0xffffffffffffff00;
    }
    else {
      if (plVar2 != (longlong *)0x0) {
LAB_1422af958:
        uVar3 = (**(code **)(*plVar2 + 0x290))(plVar2);
        if (((char)uVar3 == '\0') || (*(char *)((longlong)plVar2 + 0x17c) != '\x01'))
        goto LAB_1422af975;
      }
      uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
    }
    bVar4 = bVar4 & (byte)uVar3;
    if (bVar4 == 0) goto LAB_1422af98e;
  }
  if (*(int *)(param_1 + 0xd0) < 1) {
LAB_1422af98e:
    plVar5 = *(longlong **)(param_1 + 200);
    bVar4 = 1;
    uVar3 = (ulonglong)*(int *)(param_1 + 0xd0);
    plVar1 = plVar5 + uVar3 * 3;
    for (; plVar5 != plVar1; plVar5 = plVar5 + 3) {
      plVar2 = (longlong *)*plVar5;
      if (*(int *)(param_1 + 0xd0) < 2) {
        if (plVar2 != (longlong *)0x0) goto LAB_1422af9c8;
LAB_1422af9e5:
        uVar3 = uVar3 & 0xffffffffffffff00;
      }
      else {
        if (plVar2 != (longlong *)0x0) {
LAB_1422af9c8:
          uVar3 = (**(code **)(*plVar2 + 0x290))(plVar2);
          if (((char)uVar3 == '\0') || (*(char *)((longlong)plVar2 + 0x17c) != '\x02'))
          goto LAB_1422af9e5;
        }
        uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
      }
      bVar4 = bVar4 & (byte)uVar3;
      if (bVar4 == 0) goto LAB_1422af9fe;
    }
    if (*(int *)(param_1 + 0xd0) < 1) {
LAB_1422af9fe:
      return uVar3 & 0xffffffffffffff00;
    }
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}


