// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141857f40 ResizeGrow body=232 status=ok
// SIG undefined ResizeGrow(void)

void TArray<int,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(void *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x18);
  uVar2 = 4;
  if (4 < uVar1) {
    if ((*(int *)((longlong)param_1 + 0x1c) != 0) || (4 < uVar1)) {
      uVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(uVar2 * 4,0);
    uVar2 = uVar3 >> 2 & 0xffffffff;
    if ((int)(uVar3 >> 2) < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  uVar1 = (uint)uVar2;
  *(uint *)((longlong)param_1 + 0x1c) = uVar1;
  pvVar4 = *(void **)((longlong)param_1 + 0x10);
  if (uVar1 < 5) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 2);
    pvVar4 = *(void **)((longlong)param_1 + 0x10);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar1 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar1 << 2,0);
        *(void **)((longlong)param_1 + 0x10) = pvVar4;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 2);
      return;
    }
    lVar6 = (longlong)(int)uVar1 << 2;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar5;
  return;
}



// FUNCTION 141858030 ResizeGrow body=236 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FCachedTypefaceData::FCachedFontData,TInlineAllocator<1,FDefaultAllocator>_>::ResizeGrow
               (void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x18);
  if (uVar1 < 2) {
    uVar2 = 1;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x1c) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 << 4,0);
    uVar2 = (uint)(uVar3 >> 4);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x1c) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x10);
  if (uVar2 < 2) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 4);
    pvVar4 = *(void **)((longlong)param_1 + 0x10);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 4,0);
        *(void **)((longlong)param_1 + 0x10) = pvVar4;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 4);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 4;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar5;
  return;
}



// FUNCTION 141858120 ResizeGrow body=145 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
               (longlong *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar4 = FMemory::QuantizeSize(lVar3 * 0x38,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  lVar3 = SUB168(ZEXT816(0x2492492492492493) * auVar2,8);
  iVar5 = (int)((uVar4 - lVar3 >> 1) + lVar3 >> 5);
  if (iVar5 < (int)uVar1) {
    iVar5 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar5;
  if ((*param_1 != 0) || (iVar5 != 0)) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0x38,0);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 1418581c0 ResizeGrow body=236 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TSharedPtr<FCachedTypefaceData,0>,TInlineAllocator<2,FDefaultAllocator>_>::ResizeGrow
               (void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x28);
  if (uVar1 < 3) {
    uVar2 = 2;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x2c) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 << 4,0);
    uVar2 = (uint)(uVar3 >> 4);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x20);
  if (uVar2 < 3) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 4);
    pvVar4 = *(void **)((longlong)param_1 + 0x20);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 4,0);
        *(void **)((longlong)param_1 + 0x20) = pvVar4;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 4);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 4;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
  return;
}



// FUNCTION 1418582b0 ResizeGrow body=149 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FArrangedWidget,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x128);
  uVar3 = 4;
  if (4 < uVar1) {
    if ((*(int *)(param_1 + 300) != 0) || (4 < uVar1)) {
      uVar3 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar2 = FMemory::QuantizeSize(uVar3 * 0x48,0);
    uVar3 = uVar2 / 0x48 & 0xffffffff;
    if ((int)(uVar2 / 0x48) < (int)uVar1) {
      uVar3 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 300) = (int)uVar3;
  FUN_141857d50(param_1,param_2,uVar3,0x48);
  return;
}



// FUNCTION 141858350 ResizeGrow body=140 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<36,4>_>,FDefaultAllocator>::ResizeGrow
               (longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar2 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x24,0);
  iVar4 = (int)(uVar3 / 0x24);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x24,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 1418583e0 ResizeGrow body=166 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x1d0);
  if (uVar1 < 3) {
    uVar5 = 2;
  }
  else {
    lVar3 = 4;
    if ((*(int *)(param_1 + 0x1d4) != 0) || (4 < uVar1)) {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar4 = FMemory::QuantizeSize(lVar3 * 0xe0,0);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar4;
    lVar3 = SUB168(ZEXT816(0x2492492492492493) * auVar2,8);
    uVar4 = (uVar4 - lVar3 >> 1) + lVar3 >> 7;
    uVar5 = uVar4 & 0xffffffff;
    if ((int)uVar4 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x1d4) = (int)uVar5;
  TInlineAllocator<2,FDefaultAllocator>::ForElementType<FSlateElementBatch>::ResizeAllocation
            (param_1,param_2,uVar5,0xe0);
  return;
}



// FUNCTION 141858490 ResizeShrink body=178 status=ok
// SIG undefined ResizeShrink(void)

void TArray<FArrangedWidget,TInlineAllocator<4,FDefaultAllocator>_>::ResizeShrink(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x128);
  uVar3 = *(uint *)(param_1 + 300);
  if (uVar2 < 5) {
    uVar2 = 4;
    goto LAB_141858515;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar2) * 0x48)) ||
     ((int)(uVar2 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar2) {
      if (0 < (int)uVar2) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar2 * 0x48,0);
        uVar3 = *(uint *)(param_1 + 300);
        uVar2 = (uint)(uVar1 / 0x48);
      }
      goto LAB_141858515;
    }
    if (uVar2 == 0) goto LAB_141858515;
  }
  uVar2 = uVar3;
LAB_141858515:
  if (uVar2 != uVar3) {
    *(uint *)(param_1 + 300) = uVar2;
    FUN_141857d50(param_1,*(undefined4 *)(param_1 + 0x128),uVar2,0x48);
    return;
  }
  return;
}



// FUNCTION 141858550 FUN_141858550 body=127 status=ok
// SIG undefined FUN_141858550(void)

void FUN_141858550(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 5) {
      iVar2 = 4;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x48,0);
      iVar2 = (int)(uVar1 / 0x48);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != *(int *)(param_1 + 300)) {
    *(int *)(param_1 + 300) = iVar2;
    FUN_141857d50(param_1,*(undefined4 *)(param_1 + 0x128),iVar2,0x48);
  }
  return;
}



// FUNCTION 1418585d0 ResizeTo body=135 status=ok
// SIG undefined ResizeTo(void)

void TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>::ResizeTo
               (longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  if (param_2 != 0) {
    if (param_2 < 3) {
      iVar3 = 2;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 * 0xe0,0);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar2;
      lVar4 = SUB168(ZEXT816(0x2492492492492493) * auVar1,8);
      iVar3 = (int)((uVar2 - lVar4 >> 1) + lVar4 >> 7);
      if (iVar3 < (int)param_2) {
        iVar3 = 0x7fffffff;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x1d4)) {
    *(int *)(param_1 + 0x1d4) = iVar3;
    TInlineAllocator<2,FDefaultAllocator>::ForElementType<FSlateElementBatch>::ResizeAllocation
              (param_1,*(undefined4 *)(param_1 + 0x1d0),iVar3,0xe0);
  }
  return;
}



// FUNCTION 141858660 ResizeTo body=118 status=ok
// SIG undefined ResizeTo(void)

void TArray<FSlateRenderBatch,FDefaultAllocator>::ResizeTo(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0xf0,0);
    iVar3 = (int)(uVar1 / 0xf0);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0xf0,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 1418586e0 Reverse body=174 status=ok
// SIG undefined Reverse(void)

void FArrangedChildren::Reverse(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = 0;
  iVar1 = *(int *)(param_1 + 0x130);
  if (0 < iVar1 / 2) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      lVar2 = ((longlong)iVar1 + -1) - lVar3;
      if (lVar3 != lVar2) {
        lVar6 = *(longlong *)(param_1 + 0x128);
        if (*(longlong *)(param_1 + 0x128) == 0) {
          lVar6 = param_1 + 8;
        }
        FGenericPlatformMemory::MemswapGreaterThan8(lVar4 + lVar6,lVar6 + lVar2 * 0x48);
      }
      iVar5 = iVar5 + 1;
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x48;
    } while (iVar5 < *(int *)(param_1 + 0x130) / 2);
  }
  return;
}



// FUNCTION 141858790 Reverse body=139 status=ok
// SIG undefined Reverse(void)

void FCurveSequence::Reverse(longlong param_1)

{
  float fVar1;
  double dVar2;
  float fVar3;
  
  fVar1 = (float)GetSequenceTime();
  fVar1 = fVar1 / *(float *)(param_1 + 0x50);
  fVar3 = 0.0;
  if ((0.0 <= fVar1) && (fVar3 = fVar1, 1.0 <= fVar1)) {
    fVar3 = 1.0;
  }
  *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) ^ 1;
  dVar2 = (double)(**(code **)(*DAT_1469eaf38 + 0x40))();
  if ((*(byte *)(param_1 + 0x54) & 1) != 0) {
    fVar3 = 1.0 - fVar3;
  }
  *(double *)(param_1 + 0x40) = dVar2 - (double)(fVar3 * *(float *)(param_1 + 0x50));
  return;
}



// FUNCTION 141858820 RootToContentDir body=176 status=ok
// SIG undefined RootToContentDir(void)

undefined8 *
FSlateStyleSet::RootToContentDir(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar3 = 0;
  }
  if ((*(int *)(param_1 + 0x18) != 0) || (iVar2 = 2, iVar3 == -1)) {
    iVar2 = 1;
  }
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  _Src = *(void **)(param_1 + 0x10);
  *(int *)(param_2 + 1) = iVar1;
  if ((iVar1 == 0) && (iVar3 + iVar2 == 0)) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,iVar1 + iVar3 + iVar2);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  FString::PathAppend(param_2,*param_3,iVar3);
  return param_2;
}



// FUNCTION 1418588d0 RootToContentDir body=486 status=ok
// SIG undefined RootToContentDir(void)

undefined8 *
FSlateStyleSet::RootToContentDir
          (longlong param_1,undefined8 *param_2,undefined8 *param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  void *_Dst;
  int iVar5;
  void *pvVar6;
  void *local_48;
  undefined8 local_40;
  void *local_38;
  int local_30;
  int local_2c;
  
  iVar1 = *(int *)(param_1 + 0x18);
  iVar3 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar3 = 0;
  }
  if ((iVar1 != 0) || (iVar2 = 2, iVar3 == -1)) {
    iVar2 = 1;
  }
  pvVar6 = *(void **)(param_1 + 0x10);
  local_48 = (void *)0x0;
  local_40 = CONCAT44(local_40._4_4_,iVar1);
  if ((iVar1 == 0) && (iVar3 + iVar2 == 0)) {
    local_40 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,iVar1 + iVar3 + iVar2,0);
    ::_guard_xfg_dispatch_icall_nop(local_48,pvVar6,(longlong)iVar1 * 2);
  }
  FString::PathAppend(&local_48,*param_3);
  iVar1 = local_40._4_4_;
  if ((param_4 == (short *)0x0) || (*param_4 == 0)) {
    *param_2 = local_48;
    *(int *)(param_2 + 1) = (int)local_40;
    *(int *)((longlong)param_2 + 0xc) = local_40._4_4_;
  }
  else {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (param_4[lVar4] != 0);
    iVar3 = (int)lVar4;
    if (((int)local_40 != 0) || (iVar2 = 1, iVar3 == 0)) {
      iVar2 = 0;
    }
    iVar2 = iVar2 + (int)local_40;
    local_38 = local_48;
    local_30 = (int)local_40;
    local_48 = (void *)0x0;
    local_2c = local_40._4_4_;
    local_40 = 0;
    if (iVar1 < iVar2 + iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38);
    }
    iVar1 = local_30;
    pvVar6 = local_38;
    iVar2 = local_30;
    iVar5 = local_2c;
    if (iVar3 != 0) {
      lVar4 = (longlong)local_30;
      local_30 = local_30 + (uint)(local_30 == 0) + iVar3;
      if (local_2c < local_30) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,iVar1,0);
      }
      iVar5 = local_2c;
      iVar2 = local_30;
      pvVar6 = local_38;
      _Dst = (void *)((lVar4 - (ulonglong)(iVar1 != 0)) * 2 + (longlong)local_38);
      ::_guard_xfg_dispatch_icall_nop(_Dst,param_4,(longlong)iVar3 * 2);
      *(undefined2 *)((longlong)iVar3 * 2 + (longlong)_Dst) = 0;
    }
    *param_2 = pvVar6;
    *(int *)(param_2 + 1) = iVar2;
    *(int *)((longlong)param_2 + 0xc) = iVar5;
    if (local_48 != (void *)0x0) {
      FMemory::Free();
    }
  }
  return param_2;
}



// FUNCTION 141858ac0 RootToContentDir body=286 status=ok
// SIG undefined RootToContentDir(void)

undefined8 * FSlateStyleSet::RootToContentDir(longlong param_1,undefined8 *param_2,char *param_3)

{
  int iVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong local_28;
  int local_20;
  undefined4 local_1c;
  
  lVar3 = 0;
  local_28 = 0;
  local_1c = 0;
  iVar4 = 0;
  if ((param_3 != (char *)0x0) && (iVar4 = 0, *param_3 != '\0')) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (param_3[lVar3] != '\0');
    iVar2 = (int)lVar3 + 1;
    local_20 = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    iVar4 = local_20;
    lVar3 = local_28;
    FGenericPlatformString::Convert<char,wchar_t>(local_28,iVar2,param_3,iVar2,0x3f);
  }
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar4 + -1;
  }
  if ((*(int *)(param_1 + 0x18) != 0) || (iVar2 = 2, iVar4 == -1)) {
    iVar2 = 1;
  }
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  _Src = *(void **)(param_1 + 0x10);
  *(int *)(param_2 + 1) = iVar1;
  if ((iVar1 == 0) && (iVar2 + iVar4 == 0)) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,iVar1 + iVar2 + iVar4,0);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  FString::PathAppend(param_2,lVar3,iVar4);
  if (lVar3 != 0) {
    FMemory::Free(lVar3);
  }
  return param_2;
}



// FUNCTION 141858be0 RootToContentDir body=630 status=ok
// SIG undefined RootToContentDir(void)

undefined8 *
FSlateStyleSet::RootToContentDir(longlong param_1,undefined8 *param_2,char *param_3,short *param_4)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  void *local_res8;
  void *local_58;
  undefined8 local_50;
  void *local_48;
  int local_40;
  int local_3c;
  longlong local_38;
  int local_30;
  undefined4 local_2c;
  
  local_38 = 0;
  iVar3 = 0;
  local_2c = 0;
  lVar6 = -1;
  if ((param_3 == (char *)0x0) || (lVar5 = lVar6, *param_3 == '\0')) {
    lVar5 = 0;
  }
  else {
    do {
      lVar5 = lVar5 + 1;
    } while (param_3[lVar5] != '\0');
    iVar4 = (int)lVar5 + 1;
    local_30 = iVar4;
    if (0 < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38);
    }
    iVar3 = local_30;
    lVar5 = local_38;
    FGenericPlatformString::Convert<char,wchar_t>(local_38,iVar4,param_3,iVar4,0x3f);
  }
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = iVar3 + -1;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if ((iVar3 != 0) || (iVar2 = 2, iVar4 == -1)) {
    iVar2 = 1;
  }
  pvVar1 = *(void **)(param_1 + 0x10);
  local_58 = (void *)0x0;
  local_50 = CONCAT44(local_50._4_4_,iVar3);
  if ((iVar3 == 0) && (iVar2 + iVar4 == 0)) {
    local_50 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,iVar3 + iVar2 + iVar4,0);
    ::_guard_xfg_dispatch_icall_nop(local_58,pvVar1,(longlong)iVar3 * 2);
  }
  FString::PathAppend(&local_58,lVar5);
  iVar3 = local_50._4_4_;
  if ((param_4 == (short *)0x0) || (*param_4 == 0)) {
    *param_2 = local_58;
    *(int *)(param_2 + 1) = (int)local_50;
    *(int *)((longlong)param_2 + 0xc) = local_50._4_4_;
    local_50 = 0;
    local_58 = (void *)0x0;
  }
  else {
    do {
      lVar6 = lVar6 + 1;
    } while (param_4[lVar6] != 0);
    iVar4 = (int)lVar6;
    if (((int)local_50 == 0) && (iVar4 != 0)) {
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
    iVar2 = iVar2 + iVar4 + (int)local_50;
    local_48 = local_58;
    local_58 = (void *)0x0;
    local_40 = (int)local_50;
    local_3c = local_50._4_4_;
    local_50 = 0;
    if (iVar3 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48,iVar2);
    }
    iVar3 = local_40;
    iVar2 = local_40;
    iVar7 = local_3c;
    local_res8 = local_48;
    if (iVar4 != 0) {
      lVar6 = (longlong)local_40;
      local_40 = local_40 + (uint)(local_40 == 0) + iVar4;
      if (local_3c < local_40) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar3,0);
      }
      iVar7 = local_3c;
      iVar2 = local_40;
      local_res8 = local_48;
      pvVar1 = (void *)((longlong)local_48 + (lVar6 - (ulonglong)(iVar3 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_4,(longlong)iVar4 * 2);
      *(undefined2 *)((longlong)iVar4 * 2 + (longlong)pvVar1) = 0;
      lVar5 = local_38;
    }
    *param_2 = local_res8;
    *(int *)(param_2 + 1) = iVar2;
    *(int *)((longlong)param_2 + 0xc) = iVar7;
    if (local_58 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if (lVar5 != 0) {
    FMemory::Free(lVar5);
  }
  return param_2;
}



// FUNCTION 141858e60 RootToContentDir body=496 status=ok
// SIG undefined RootToContentDir(void)

undefined8 *
FSlateStyleSet::RootToContentDir
          (longlong param_1,undefined8 *param_2,longlong param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Dst;
  int iVar6;
  int iVar7;
  void *pvVar8;
  void *local_48;
  undefined8 local_40;
  void *local_38;
  int local_30;
  int local_2c;
  longlong lVar5;
  
  lVar3 = -1;
  lVar4 = -1;
  do {
    lVar5 = lVar4;
    lVar4 = lVar5 + 1;
  } while (*(short *)(param_3 + lVar4 * 2) != 0);
  iVar1 = *(int *)(param_1 + 0x18);
  if ((iVar1 != 0) || (iVar2 = 2, (int)lVar5 == -2)) {
    iVar2 = 1;
  }
  pvVar8 = *(void **)(param_1 + 0x10);
  iVar2 = iVar2 + (int)lVar4;
  local_40 = CONCAT44(local_40._4_4_,iVar1);
  local_48 = (void *)0x0;
  if ((iVar1 == 0) && (iVar2 == 0)) {
    local_40 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,iVar1 + iVar2,0);
    ::_guard_xfg_dispatch_icall_nop(local_48,pvVar8,(longlong)iVar1 * 2);
  }
  FString::PathAppend(&local_48,param_3);
  iVar1 = local_40._4_4_;
  if ((param_4 == (short *)0x0) || (*param_4 == 0)) {
    *param_2 = local_48;
    *(int *)(param_2 + 1) = (int)local_40;
    *(int *)((longlong)param_2 + 0xc) = local_40._4_4_;
  }
  else {
    do {
      lVar3 = lVar3 + 1;
    } while (param_4[lVar3] != 0);
    iVar2 = (int)lVar3;
    if (((int)local_40 == 0) && (iVar2 != 0)) {
      iVar6 = 1;
    }
    else {
      iVar6 = 0;
    }
    iVar6 = iVar6 + (int)local_40;
    local_38 = local_48;
    local_48 = (void *)0x0;
    local_30 = (int)local_40;
    local_2c = local_40._4_4_;
    local_40 = 0;
    if (iVar1 < iVar6 + iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38);
    }
    iVar1 = local_30;
    pvVar8 = local_38;
    iVar6 = local_30;
    iVar7 = local_2c;
    if (iVar2 != 0) {
      lVar4 = (longlong)local_30;
      local_30 = local_30 + (uint)(local_30 == 0) + iVar2;
      if (local_2c < local_30) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,iVar1,0);
      }
      iVar7 = local_2c;
      iVar6 = local_30;
      pvVar8 = local_38;
      _Dst = (void *)((lVar4 - (ulonglong)(iVar1 != 0)) * 2 + (longlong)local_38);
      ::_guard_xfg_dispatch_icall_nop(_Dst,param_4,(longlong)iVar2 * 2);
      *(undefined2 *)((longlong)iVar2 * 2 + (longlong)_Dst) = 0;
    }
    *param_2 = pvVar8;
    *(int *)(param_2 + 1) = iVar6;
    *(int *)((longlong)param_2 + 0xc) = iVar7;
    if (local_48 != (void *)0x0) {
      FMemory::Free();
    }
  }
  return param_2;
}



// FUNCTION 141859050 RootToContentDir body=191 status=ok
// SIG undefined RootToContentDir(void)

undefined8 * FSlateStyleSet::RootToContentDir(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  void *_Src;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = 0xffffffffffffffff;
  do {
    uVar4 = uVar3;
    uVar3 = uVar4 + 1;
  } while (*(short *)(param_3 + uVar3 * 2) != 0);
  if ((*(int *)(param_1 + 0x18) != 0) || (iVar2 = 2, (int)uVar4 == -2)) {
    iVar2 = 1;
  }
  iVar2 = iVar2 + (int)uVar3;
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  _Src = *(void **)(param_1 + 0x10);
  *(int *)(param_2 + 1) = iVar1;
  if ((iVar1 == 0) && (iVar2 == 0)) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,iVar2 + iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  FString::PathAppend(param_2,param_3,uVar3 & 0xffffffff);
  return param_2;
}



// FUNCTION 141859110 RootToCoreContentDir body=176 status=ok
// SIG undefined RootToCoreContentDir(void)

undefined8 *
FSlateStyleSet::RootToCoreContentDir(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar3 = 0;
  }
  if ((*(int *)(param_1 + 0x28) != 0) || (iVar2 = 2, iVar3 == -1)) {
    iVar2 = 1;
  }
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(param_2 + 1) = iVar1;
  if ((iVar1 == 0) && (iVar3 + iVar2 == 0)) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,iVar1 + iVar3 + iVar2);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  FString::PathAppend(param_2,*param_3,iVar3);
  return param_2;
}



// FUNCTION 1418591c0 RootToCoreContentDir body=486 status=ok
// SIG undefined RootToCoreContentDir(void)

undefined8 *
FSlateStyleSet::RootToCoreContentDir
          (longlong param_1,undefined8 *param_2,undefined8 *param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  void *_Dst;
  int iVar5;
  void *pvVar6;
  void *local_48;
  undefined8 local_40;
  void *local_38;
  int local_30;
  int local_2c;
  
  iVar1 = *(int *)(param_1 + 0x28);
  iVar3 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar3 = 0;
  }
  if ((iVar1 != 0) || (iVar2 = 2, iVar3 == -1)) {
    iVar2 = 1;
  }
  pvVar6 = *(void **)(param_1 + 0x20);
  local_48 = (void *)0x0;
  local_40 = CONCAT44(local_40._4_4_,iVar1);
  if ((iVar1 == 0) && (iVar3 + iVar2 == 0)) {
    local_40 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,iVar1 + iVar3 + iVar2,0);
    ::_guard_xfg_dispatch_icall_nop(local_48,pvVar6,(longlong)iVar1 * 2);
  }
  FString::PathAppend(&local_48,*param_3);
  iVar1 = local_40._4_4_;
  if ((param_4 == (short *)0x0) || (*param_4 == 0)) {
    *param_2 = local_48;
    *(int *)(param_2 + 1) = (int)local_40;
    *(int *)((longlong)param_2 + 0xc) = local_40._4_4_;
  }
  else {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (param_4[lVar4] != 0);
    iVar3 = (int)lVar4;
    if (((int)local_40 != 0) || (iVar2 = 1, iVar3 == 0)) {
      iVar2 = 0;
    }
    iVar2 = iVar2 + (int)local_40;
    local_38 = local_48;
    local_30 = (int)local_40;
    local_48 = (void *)0x0;
    local_2c = local_40._4_4_;
    local_40 = 0;
    if (iVar1 < iVar2 + iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38);
    }
    iVar1 = local_30;
    pvVar6 = local_38;
    iVar2 = local_30;
    iVar5 = local_2c;
    if (iVar3 != 0) {
      lVar4 = (longlong)local_30;
      local_30 = local_30 + (uint)(local_30 == 0) + iVar3;
      if (local_2c < local_30) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,iVar1,0);
      }
      iVar5 = local_2c;
      iVar2 = local_30;
      pvVar6 = local_38;
      _Dst = (void *)((lVar4 - (ulonglong)(iVar1 != 0)) * 2 + (longlong)local_38);
      ::_guard_xfg_dispatch_icall_nop(_Dst,param_4,(longlong)iVar3 * 2);
      *(undefined2 *)((longlong)iVar3 * 2 + (longlong)_Dst) = 0;
    }
    *param_2 = pvVar6;
    *(int *)(param_2 + 1) = iVar2;
    *(int *)((longlong)param_2 + 0xc) = iVar5;
    if (local_48 != (void *)0x0) {
      FMemory::Free();
    }
  }
  return param_2;
}



// FUNCTION 1418593b0 RootToCoreContentDir body=286 status=ok
// SIG undefined RootToCoreContentDir(void)

undefined8 *
FSlateStyleSet::RootToCoreContentDir(longlong param_1,undefined8 *param_2,char *param_3)

{
  int iVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong local_28;
  int local_20;
  undefined4 local_1c;
  
  lVar3 = 0;
  local_28 = 0;
  local_1c = 0;
  iVar4 = 0;
  if ((param_3 != (char *)0x0) && (iVar4 = 0, *param_3 != '\0')) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (param_3[lVar3] != '\0');
    iVar2 = (int)lVar3 + 1;
    local_20 = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    iVar4 = local_20;
    lVar3 = local_28;
    FGenericPlatformString::Convert<char,wchar_t>(local_28,iVar2,param_3,iVar2,0x3f);
  }
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar4 + -1;
  }
  if ((*(int *)(param_1 + 0x28) != 0) || (iVar2 = 2, iVar4 == -1)) {
    iVar2 = 1;
  }
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(param_2 + 1) = iVar1;
  if ((iVar1 == 0) && (iVar2 + iVar4 == 0)) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,iVar1 + iVar2 + iVar4,0);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  FString::PathAppend(param_2,lVar3,iVar4);
  if (lVar3 != 0) {
    FMemory::Free(lVar3);
  }
  return param_2;
}



// FUNCTION 1418594d0 RootToCoreContentDir body=630 status=ok
// SIG undefined RootToCoreContentDir(void)

undefined8 *
FSlateStyleSet::RootToCoreContentDir
          (longlong param_1,undefined8 *param_2,char *param_3,short *param_4)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  void *local_res8;
  void *local_58;
  undefined8 local_50;
  void *local_48;
  int local_40;
  int local_3c;
  longlong local_38;
  int local_30;
  undefined4 local_2c;
  
  local_38 = 0;
  iVar3 = 0;
  local_2c = 0;
  lVar6 = -1;
  if ((param_3 == (char *)0x0) || (lVar5 = lVar6, *param_3 == '\0')) {
    lVar5 = 0;
  }
  else {
    do {
      lVar5 = lVar5 + 1;
    } while (param_3[lVar5] != '\0');
    iVar4 = (int)lVar5 + 1;
    local_30 = iVar4;
    if (0 < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38);
    }
    iVar3 = local_30;
    lVar5 = local_38;
    FGenericPlatformString::Convert<char,wchar_t>(local_38,iVar4,param_3,iVar4,0x3f);
  }
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = iVar3 + -1;
  }
  iVar3 = *(int *)(param_1 + 0x28);
  if ((iVar3 != 0) || (iVar2 = 2, iVar4 == -1)) {
    iVar2 = 1;
  }
  pvVar1 = *(void **)(param_1 + 0x20);
  local_58 = (void *)0x0;
  local_50 = CONCAT44(local_50._4_4_,iVar3);
  if ((iVar3 == 0) && (iVar2 + iVar4 == 0)) {
    local_50 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,iVar3 + iVar2 + iVar4,0);
    ::_guard_xfg_dispatch_icall_nop(local_58,pvVar1,(longlong)iVar3 * 2);
  }
  FString::PathAppend(&local_58,lVar5);
  iVar3 = local_50._4_4_;
  if ((param_4 == (short *)0x0) || (*param_4 == 0)) {
    *param_2 = local_58;
    *(int *)(param_2 + 1) = (int)local_50;
    *(int *)((longlong)param_2 + 0xc) = local_50._4_4_;
    local_50 = 0;
    local_58 = (void *)0x0;
  }
  else {
    do {
      lVar6 = lVar6 + 1;
    } while (param_4[lVar6] != 0);
    iVar4 = (int)lVar6;
    if (((int)local_50 == 0) && (iVar4 != 0)) {
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
    iVar2 = iVar2 + iVar4 + (int)local_50;
    local_48 = local_58;
    local_58 = (void *)0x0;
    local_40 = (int)local_50;
    local_3c = local_50._4_4_;
    local_50 = 0;
    if (iVar3 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48,iVar2);
    }
    iVar3 = local_40;
    iVar2 = local_40;
    iVar7 = local_3c;
    local_res8 = local_48;
    if (iVar4 != 0) {
      lVar6 = (longlong)local_40;
      local_40 = local_40 + (uint)(local_40 == 0) + iVar4;
      if (local_3c < local_40) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar3,0);
      }
      iVar7 = local_3c;
      iVar2 = local_40;
      local_res8 = local_48;
      pvVar1 = (void *)((longlong)local_48 + (lVar6 - (ulonglong)(iVar3 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_4,(longlong)iVar4 * 2);
      *(undefined2 *)((longlong)iVar4 * 2 + (longlong)pvVar1) = 0;
      lVar5 = local_38;
    }
    *param_2 = local_res8;
    *(int *)(param_2 + 1) = iVar2;
    *(int *)((longlong)param_2 + 0xc) = iVar7;
    if (local_58 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if (lVar5 != 0) {
    FMemory::Free(lVar5);
  }
  return param_2;
}



// FUNCTION 141859750 RootToCoreContentDir body=496 status=ok
// SIG undefined RootToCoreContentDir(void)

undefined8 *
FSlateStyleSet::RootToCoreContentDir
          (longlong param_1,undefined8 *param_2,longlong param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Dst;
  int iVar6;
  int iVar7;
  void *pvVar8;
  void *local_48;
  undefined8 local_40;
  void *local_38;
  int local_30;
  int local_2c;
  longlong lVar5;
  
  lVar3 = -1;
  lVar4 = -1;
  do {
    lVar5 = lVar4;
    lVar4 = lVar5 + 1;
  } while (*(short *)(param_3 + lVar4 * 2) != 0);
  iVar1 = *(int *)(param_1 + 0x28);
  if ((iVar1 != 0) || (iVar2 = 2, (int)lVar5 == -2)) {
    iVar2 = 1;
  }
  pvVar8 = *(void **)(param_1 + 0x20);
  iVar2 = iVar2 + (int)lVar4;
  local_40 = CONCAT44(local_40._4_4_,iVar1);
  local_48 = (void *)0x0;
  if ((iVar1 == 0) && (iVar2 == 0)) {
    local_40 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,iVar1 + iVar2,0);
    ::_guard_xfg_dispatch_icall_nop(local_48,pvVar8,(longlong)iVar1 * 2);
  }
  FString::PathAppend(&local_48,param_3);
  iVar1 = local_40._4_4_;
  if ((param_4 == (short *)0x0) || (*param_4 == 0)) {
    *param_2 = local_48;
    *(int *)(param_2 + 1) = (int)local_40;
    *(int *)((longlong)param_2 + 0xc) = local_40._4_4_;
  }
  else {
    do {
      lVar3 = lVar3 + 1;
    } while (param_4[lVar3] != 0);
    iVar2 = (int)lVar3;
    if (((int)local_40 == 0) && (iVar2 != 0)) {
      iVar6 = 1;
    }
    else {
      iVar6 = 0;
    }
    iVar6 = iVar6 + (int)local_40;
    local_38 = local_48;
    local_48 = (void *)0x0;
    local_30 = (int)local_40;
    local_2c = local_40._4_4_;
    local_40 = 0;
    if (iVar1 < iVar6 + iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38);
    }
    iVar1 = local_30;
    pvVar8 = local_38;
    iVar6 = local_30;
    iVar7 = local_2c;
    if (iVar2 != 0) {
      lVar4 = (longlong)local_30;
      local_30 = local_30 + (uint)(local_30 == 0) + iVar2;
      if (local_2c < local_30) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,iVar1,0);
      }
      iVar7 = local_2c;
      iVar6 = local_30;
      pvVar8 = local_38;
      _Dst = (void *)((lVar4 - (ulonglong)(iVar1 != 0)) * 2 + (longlong)local_38);
      ::_guard_xfg_dispatch_icall_nop(_Dst,param_4,(longlong)iVar2 * 2);
      *(undefined2 *)((longlong)iVar2 * 2 + (longlong)_Dst) = 0;
    }
    *param_2 = pvVar8;
    *(int *)(param_2 + 1) = iVar6;
    *(int *)((longlong)param_2 + 0xc) = iVar7;
    if (local_48 != (void *)0x0) {
      FMemory::Free();
    }
  }
  return param_2;
}



// FUNCTION 141859940 RootToCoreContentDir body=191 status=ok
// SIG undefined RootToCoreContentDir(void)

undefined8 *
FSlateStyleSet::RootToCoreContentDir(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  void *_Src;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = 0xffffffffffffffff;
  do {
    uVar4 = uVar3;
    uVar3 = uVar4 + 1;
  } while (*(short *)(param_3 + uVar3 * 2) != 0);
  if ((*(int *)(param_1 + 0x28) != 0) || (iVar2 = 2, (int)uVar4 == -2)) {
    iVar2 = 1;
  }
  iVar2 = iVar2 + (int)uVar3;
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(param_2 + 1) = iVar1;
  if ((iVar1 == 0) && (iVar2 == 0)) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,iVar2 + iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  FString::PathAppend(param_2,param_3,uVar3 & 0xffffffff);
  return param_2;
}



// FUNCTION 141859a00 SWidgetConstruct body=23 status=ok
// SIG undefined SWidgetConstruct(void)

void SWidget::SWidgetConstruct(void)

{
  FUN_1418066b0();
  return;
}



// FUNCTION 141859a20 FUN_141859a20 body=453 status=ok
// SIG undefined FUN_141859a20(void)

undefined8 FUN_141859a20(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  char local_res18 [8];
  longlong local_res20;
  
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0068);
  iVar4 = FArchive::CustomVer(param_2,&DAT_1464b0068);
  if (iVar4 < 9) {
    return 0;
  }
  local_res18[0] = param_2[0xe] != 0;
  (**(code **)(*param_2 + 8))(param_2,local_res18);
  if (local_res18[0] == '\0') {
    plVar5 = (longlong *)FFontData::StaticStruct();
    cVar3 = UScriptStruct::UseBinarySerialization(plVar5,param_2);
    if (cVar3 != '\0') {
      (**(code **)(*plVar5 + 0x298))();
      return 1;
    }
    (**(code **)(*plVar5 + 0x2a0))(plVar5,param_2,param_1,plVar5,0,0);
  }
  else {
    local_res20 = *(longlong *)(param_1 + 0x18);
    (**(code **)(*param_2 + 0x30))(param_2,&local_res20);
    *(longlong *)(param_1 + 0x18) = local_res20;
    if (local_res20 == 0) {
      FUN_14158ce90(param_2,param_1);
      puVar1 = *(undefined1 **)param_2[1];
      if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,(undefined1 *)(param_1 + 0x10),1);
      }
      else {
        *(undefined1 *)(param_1 + 0x10) = *puVar1;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
      }
      puVar1 = *(undefined1 **)param_2[1];
      if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,(undefined1 *)(param_1 + 0x11),1);
      }
      else {
        *(undefined1 *)(param_1 + 0x11) = *puVar1;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
      }
    }
    puVar2 = *(undefined4 **)param_2[1];
    if (puVar2 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
      *(undefined4 *)(param_1 + 0x14) = *puVar2;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      return 1;
    }
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x14,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x14,4);
      return 1;
    }
  }
  return 1;
}



// FUNCTION 141859bf0 Serialize body=83 status=ok
// SIG undefined Serialize(void)

void UFontBulkData::Serialize(longlong param_1,longlong param_2)

{
  FUN_141763960();
  FUN_1417225e0(param_1 + 0x28,param_2,param_1,0xffffffff);
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    FUntypedBulkData::SetBulkDataFlags(param_1 + 0x28,8);
  }
  return;
}



// FUNCTION 141859c50 FUN_141859c50 body=689 status=ok
// SIG undefined FUN_141859c50(void)

undefined8 FUN_141859c50(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  ulonglong local_res10;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined8 local_40;
  longlong *plStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 local_20;
  undefined8 local_18;
  longlong *plStack_10;
  
  if (*param_2 == 10) {
    local_res10 = 0x3e;
    if (param_2[3] == 0x3e) {
      plVar4 = (longlong *)param_3[1];
      if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
        (**(code **)(*param_3 + 0x50))(param_3,&local_res10,4);
        if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_3,&local_res10,4);
        }
      }
      else {
        local_res10 = (ulonglong)*(uint *)*plVar4;
        *plVar4 = *plVar4 + 4;
      }
      puVar6 = (undefined4 *)FLinearColor::FLinearColor(local_68,&local_res10);
      local_48 = 0;
      local_40 = 0;
      plStack_38 = (longlong *)0x0;
      local_58 = *puVar6;
      uStack_54 = puVar6[1];
      uStack_50 = puVar6[2];
      uStack_4c = puVar6[3];
      FUN_140692440(param_1,&local_58);
      plVar4 = plStack_38;
      if (plStack_38 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_38 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_38)(plStack_38);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_38 + 8))(plStack_38,1);
            return 1;
          }
        }
      }
    }
    else {
      local_res10 = 0x41;
      if (param_2[3] != 0x41) goto LAB_141859eea;
      plVar4 = (longlong *)param_3[1];
      if ((undefined4 *)plVar4[1] < (undefined4 *)*plVar4 + 1) {
        (**(code **)(*param_3 + 0x50))(param_3,&local_78,4);
        if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_3,&local_78,4);
        }
      }
      else {
        local_78 = *(undefined4 *)*plVar4;
        *plVar4 = *plVar4 + 4;
      }
      plVar4 = (longlong *)param_3[1];
      if ((undefined4 *)plVar4[1] < (undefined4 *)*plVar4 + 1) {
        (**(code **)(*param_3 + 0x50))(param_3,&uStack_74,4);
        if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_3,&uStack_74,4);
        }
      }
      else {
        uStack_74 = *(undefined4 *)*plVar4;
        *plVar4 = *plVar4 + 4;
      }
      plVar4 = (longlong *)param_3[1];
      if ((undefined4 *)plVar4[1] < (undefined4 *)*plVar4 + 1) {
        (**(code **)(*param_3 + 0x50))(param_3,&uStack_70,4);
        if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_3,&uStack_70,4);
        }
      }
      else {
        uStack_70 = *(undefined4 *)*plVar4;
        *plVar4 = *plVar4 + 4;
      }
      plVar4 = (longlong *)param_3[1];
      if ((undefined4 *)plVar4[1] < (undefined4 *)*plVar4 + 1) {
        (**(code **)(*param_3 + 0x50))(param_3,&uStack_6c,4);
        if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_3,&uStack_6c,4);
        }
      }
      else {
        uStack_6c = *(undefined4 *)*plVar4;
        *plVar4 = *plVar4 + 4;
      }
      local_20 = 0;
      local_30 = local_78;
      uStack_2c = uStack_74;
      uStack_28 = uStack_70;
      uStack_24 = uStack_6c;
      local_18 = 0;
      plStack_10 = (longlong *)0x0;
      FUN_140692440(param_1,&local_30);
      plVar4 = plStack_10;
      if (plStack_10 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_10 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_10)(plStack_10);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_10 + 8))(plStack_10,1);
          }
        }
      }
    }
    uVar7 = 1;
  }
  else {
LAB_141859eea:
    uVar7 = 0;
  }
  return uVar7;
}



// FUNCTION 141859f10 FUN_141859f10 body=101 status=ok
// SIG undefined FUN_141859f10(void)

undefined8 FUN_141859f10(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  undefined8 local_res10 [3];
  
  if (*param_2 == 6) {
    local_res10[0] = 0;
    (**(code **)(*param_3 + 0x40))(param_3,local_res10);
    param_1[1] = local_res10[0];
    *param_1 = 0;
    *(undefined4 *)(param_1 + 2) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    return 1;
  }
  return 0;
}



// FUNCTION 141859f80 Set body=54 status=ok
// SIG undefined Set(void)

void FSlateStyleSet::Set(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_res8 [8];
  undefined8 local_res10 [3];
  undefined8 *local_18;
  undefined8 local_10;
  
  local_18 = local_res10;
  local_res10[0] = param_2;
  local_10 = param_3;
  TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FLinearColor_const_&>_>
            (param_1 + 0x120,local_res8,&local_18,0);
  return;
}



// FUNCTION 141859fc0 Set body=54 status=ok
// SIG undefined Set(void)

void FSlateStyleSet::Set(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_res8 [8];
  undefined8 local_res10 [3];
  undefined8 *local_18;
  undefined8 local_10;
  
  local_18 = local_res10;
  local_res10[0] = param_2;
  local_10 = param_3;
  FUN_1417e0a30(param_1 + 0x1c0,local_res8,&local_18,0);
  return;
}



// FUNCTION 14185a000 Set body=54 status=ok
// SIG undefined Set(void)

void FSlateStyleSet::Set(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_res8 [8];
  undefined8 local_res10 [3];
  undefined8 *local_18;
  undefined8 local_10;
  
  local_18 = local_res10;
  local_res10[0] = param_2;
  local_10 = param_3;
  FUN_1417e0cf0(param_1 + 0x170,local_res8,&local_18,0);
  return;
}



// FUNCTION 14185a040 Set body=54 status=ok
// SIG undefined Set(void)

void FSlateStyleSet::Set(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_res8 [8];
  undefined8 local_res10 [3];
  undefined8 *local_18;
  undefined8 local_10;
  
  local_18 = local_res10;
  local_res10[0] = param_2;
  local_10 = param_3;
  FUN_1417e1000(param_1 + 0x2b8,local_res8,&local_18,0);
  return;
}



// FUNCTION 14185a080 Set body=58 status=ok
// SIG undefined Set(void)

void FSlateStyleSet::Set(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined4 local_res18 [4];
  undefined8 *local_18;
  undefined4 *local_10;
  
  local_18 = &local_res10;
  local_10 = local_res18;
  local_res10 = param_2;
  local_res18[0] = param_3;
  FUN_1417e05c0(param_1 + 0x80,local_res8,&local_18,0);
  return;
}



// FUNCTION 14185a0c0 Set body=59 status=ok
// SIG undefined Set(void)

void FSlateStyleSet::Set(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18 [2];
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_18 = &local_res10;
  local_10 = local_res18;
  local_res10 = param_2;
  local_res18[0] = param_3;
  FUN_141711540(param_1 + 0x218,local_res8,&local_18,0);
  return;
}



// FUNCTION 14185a100 Set body=59 status=ok
// SIG undefined Set(void)

void FSlateStyleSet::Set(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18 [2];
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_18 = &local_res10;
  local_10 = local_res18;
  local_res10 = param_2;
  local_res18[0] = param_3;
  FUN_141711540(param_1 + 0x218,local_res8,&local_18,0);
  return;
}



// FUNCTION 14185a140 SetActiveBrush body=30 status=ok
// SIG undefined SetActiveBrush(void)

longlong FDockTabStyle::SetActiveBrush(longlong param_1)

{
  FUN_1406922e0(param_1 + 0x308);
  return param_1;
}



// FUNCTION 14185a160 SetActiveBrush body=30 status=ok
// SIG undefined SetActiveBrush(void)

longlong FTableRowStyle::SetActiveBrush(longlong param_1)

{
  FUN_1406922e0(param_1 + 0x118);
  return param_1;
}



// FUNCTION 14185a180 SetActiveHoveredBrush body=30 status=ok
// SIG undefined SetActiveHoveredBrush(void)

longlong FTableRowStyle::SetActiveHoveredBrush(longlong param_1)

{
  FUN_1406922e0(param_1 + 0x90);
  return param_1;
}



// FUNCTION 14185a1a0 SetActiveTitleBrush body=30 status=ok
// SIG undefined SetActiveTitleBrush(void)

longlong FWindowStyle::SetActiveTitleBrush(longlong param_1)

{
  FUN_1406922e0(param_1 + 0xbc8);
  return param_1;
}



// FUNCTION 14185a1c0 FUN_14185a1c0 body=30 status=ok
// SIG undefined FUN_14185a1c0(void)

longlong FUN_14185a1c0(longlong param_1)

{
  FUN_1406922e0(param_1 + 0x228);
  return param_1;
}



// FUNCTION 14185a1e0 SetBackgroundBrush body=30 status=ok
// SIG undefined SetBackgroundBrush(void)

longlong FHeaderRowStyle::SetBackgroundBrush(longlong param_1)

{
  FUN_1406922e0(param_1 + 0xac0);
  return param_1;
}



// FUNCTION 14185a200 FUN_14185a200 body=27 status=ok
// SIG undefined FUN_14185a200(void)

longlong FUN_14185a200(longlong param_1)

{
  FUN_1406922e0(param_1 + 8);
  return param_1;
}



// FUNCTION 14185a220 FUN_14185a220 body=30 status=ok
// SIG undefined FUN_14185a220(void)

longlong FUN_14185a220(longlong param_1)

{
  FUN_1406922e0(param_1 + 0xec0);
  return param_1;
}



// FUNCTION 14185a240 SetBackgroundImageComposing body=30 status=ok
// SIG undefined SetBackgroundImageComposing(void)

longlong FEditableTextStyle::SetBackgroundImageComposing(longlong param_1)

{
  FUN_1406922e0(param_1 + 0x108);
  return param_1;
}



// FUNCTION 14185a260 SetBackgroundImageReadOnly body=30 status=ok
// SIG undefined SetBackgroundImageReadOnly(void)

longlong FEditableTextBoxStyle::SetBackgroundImageReadOnly(longlong param_1)

{
  FUN_1406922e0(param_1 + 0x1a0);
  return param_1;
}



// FUNCTION 14185a280 FUN_14185a280 body=27 status=ok
// SIG undefined FUN_14185a280(void)

longlong FUN_14185a280(longlong param_1)

{
  FUN_1406922e0(param_1 + 0x80);
  return param_1;
}



// FUNCTION 14185a2a0 SetBarThickness body=12 status=ok
// SIG undefined SetBarThickness(void)

longlong FSliderStyle::SetBarThickness(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x228) = param_2;
  return param_1;
}



// FUNCTION 14185a2b0 SetBorderBrush body=30 status=ok
// SIG undefined SetBorderBrush(void)

longlong FWindowStyle::SetBorderBrush(longlong param_1)

{
  FUN_1406922e0(param_1 + 0xe38);
  return param_1;
}



// FUNCTION 14185a2d0 FUN_14185a2d0 body=247 status=ok
// SIG undefined FUN_14185a2d0(void)

void FUN_14185a2d0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  plVar1 = (longlong *)(param_2 + 0x70);
  *param_1 = param_2;
  if (((((longlong *)*plVar1 == (longlong *)0x0) || (*(longlong *)*plVar1 == 0)) &&
      (*(char *)(param_2 + 0x6c) != '\0')) &&
     ((*(longlong *)(param_2 + 0x50) != 0 || (*(longlong *)(param_2 + 0x48) != 0)))) {
    plVar5 = (longlong *)
             (**(code **)(**(longlong **)(DAT_1469eaf38 + 0x18) + 0x90))
                       (*(longlong **)(DAT_1469eaf38 + 0x18),local_28,param_2);
    if (plVar1 != plVar5) {
      *plVar1 = *plVar5;
      *plVar5 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 0x78,plVar5 + 1);
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_20 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
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
  if ((longlong *)*plVar1 == (longlong *)0x0) {
    param_1[1] = 0;
    return;
  }
  param_1[1] = *(longlong *)*plVar1;
  return;
}



// FUNCTION 14185a3d0 SetButtonStyle body=27 status=ok
// SIG undefined SetButtonStyle(void)

longlong FComboButtonStyle::SetButtonStyle(longlong param_1)

{
  FButtonStyle::operator=(param_1 + 8);
  return param_1;
}



// FUNCTION 14185a3f0 FUN_14185a3f0 body=253 status=ok
// SIG undefined FUN_14185a3f0(void)

void FUN_14185a3f0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 local_28;
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  *(undefined8 *)(param_1 + 0x368) = param_2;
  puVar6 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_18);
  local_28 = *puVar6;
  local_20 = (longlong *)puVar6[1];
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_10 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  if ((*(int *)(param_1 + 0x520) != 0) && (*(longlong **)(param_1 + 0x518) != (longlong *)0x0)) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x518) + 0x18))();
    if (cVar5 != '\0') {
      if (*(int *)(param_1 + 0x520) == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)(param_1 + 0x518);
      }
      (**(code **)(*plVar7 + 0x40))(plVar7,&local_28);
    }
  }
  plVar7 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_20 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
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
  return;
}



// FUNCTION 14185a4f0 SetCachedSize body=73 status=ok
// SIG undefined SetCachedSize(void)

void SWindow::SetCachedSize(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 local_res8 [4];
  
  plVar1 = *(longlong **)(param_1 + 0x498);
  if (plVar1 != (longlong *)0x0) {
    local_res8[0] = param_2;
    (**(code **)(*plVar1 + 0xe8))(plVar1,local_res8);
    *(undefined8 *)(param_1 + 0x378) = local_res8[0];
    return;
  }
  *(undefined8 *)(param_1 + 0x378) = param_2;
  return;
}



// FUNCTION 14185a540 SetCaretImage body=30 status=ok
// SIG undefined SetCaretImage(void)

longlong FEditableTextStyle::SetCaretImage(longlong param_1)

{
  FUN_1406922e0(param_1 + 400);
  return param_1;
}



// FUNCTION 14185a560 SetCheckBoxType body=7 status=ok
// SIG undefined SetCheckBoxType(void)

longlong FCheckBoxStyle::SetCheckBoxType(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 8) = param_2;
  return param_1;
}



// FUNCTION 14185a570 SetCheckedHoveredImage body=30 status=ok
// SIG undefined SetCheckedHoveredImage(void)

longlong FCheckBoxStyle::SetCheckedHoveredImage(longlong param_1)

{
  FUN_1406922e0(param_1 + 0x230);
  return param_1;
}



// FUNCTION 14185a590 SetCheckedImage body=30 status=ok
// SIG undefined SetCheckedImage(void)

longlong FCheckBoxStyle::SetCheckedImage(longlong param_1)

{
  FUN_1406922e0(param_1 + 0x1a8);
  return param_1;
}



// FUNCTION 14185a5b0 FUN_14185a5b0 body=30 status=ok
// SIG undefined FUN_14185a5b0(void)

longlong FUN_14185a5b0(longlong param_1)

{
  FUN_1406922e0(param_1 + 0x2b8);
  return param_1;
}



// FUNCTION 14185a5d0 FUN_14185a5d0 body=30 status=ok
// SIG undefined FUN_14185a5d0(void)

longlong FUN_14185a5d0(longlong param_1)

{
  FUN_1406922e0(param_1 + 0xf48);
  return param_1;
}



// FUNCTION 14185a5f0 SetClearImage body=30 status=ok
// SIG undefined SetClearImage(void)

longlong FSearchBoxStyle::SetClearImage(longlong param_1)

{
  FUN_1406922e0(param_1 + 0x9e0);
  return param_1;
}



// FUNCTION 14185a610 SetCloseButtonStyle body=30 status=ok
// SIG undefined SetCloseButtonStyle(void)

longlong FWindowStyle::SetCloseButtonStyle(longlong param_1)

{
  FButtonStyle::operator=(param_1 + 0x770);
  return param_1;
}



// FUNCTION 14185a630 FUN_14185a630 body=27 status=ok
// SIG undefined FUN_14185a630(void)

longlong FUN_14185a630(longlong param_1)

{
  FUN_140692440(param_1 + 0x58);
  return param_1;
}



// FUNCTION 14185a650 SetColorOverlayIconBrush body=30 status=ok
// SIG undefined SetColorOverlayIconBrush(void)

longlong FDockTabStyle::SetColorOverlayIconBrush(longlong param_1)

{
  FUN_1406922e0(param_1 + 0x418);
  return param_1;
}



// FUNCTION 14185a670 SetColorOverlayTabBrush body=30 status=ok
// SIG undefined SetColorOverlayTabBrush(void)

longlong FDockTabStyle::SetColorOverlayTabBrush(longlong param_1)

{
  FUN_1406922e0(param_1 + 0x390);
  return param_1;
}



// FUNCTION 14185a690 SetColumnSplitterStyle body=65 status=ok
// SIG undefined SetColumnSplitterStyle(void)

longlong FHeaderRowStyle::SetColumnSplitterStyle(longlong param_1,longlong param_2)

{
  FUN_1406922e0(param_1 + 0x9b0,param_2 + 8);
  FUN_1406922e0(param_1 + 0xa38,param_2 + 0x90);
  return param_1;
}



// FUNCTION 14185a6e0 SetColumnStyle body=27 status=ok
// SIG undefined SetColumnStyle(void)

longlong FHeaderRowStyle::SetColumnStyle(longlong param_1)

{
  FScrollBarStyle::operator=(param_1 + 8);
  return param_1;
}



// FUNCTION 14185a700 SetComboButtonStyle body=95 status=ok
// SIG undefined SetComboButtonStyle(void)

longlong FComboBoxStyle::SetComboButtonStyle(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FButtonStyle::operator=(param_1 + 0x10,param_2 + 8);
  FUN_1406922e0(param_1 + 0x288,param_2 + 0x280);
  FUN_1406922e0(param_1 + 0x310,param_2 + 0x308);
  uVar1 = *(undefined8 *)(param_2 + 0x398);
  *(undefined8 *)(param_1 + 0x398) = *(undefined8 *)(param_2 + 0x390);
  *(undefined8 *)(param_1 + 0x3a0) = uVar1;
  return param_1;
}



// FUNCTION 14185a760 FUN_14185a760 body=167 status=ok
// SIG undefined FUN_14185a760(void)

void FUN_14185a760(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_18;
  longlong local_10;
  
  if (((*(byte *)(param_1 + 0x350) & 2) == 0) && (*(int *)(param_1 + 0x30c) != 4)) {
    local_18 = *param_2;
    local_10 = param_2[1];
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    FUN_1417f9c30(*(undefined8 *)(param_1 + 0x440),&local_18);
  }
  else {
    TSlotBase<FSimpleSlot>::operator[](param_1 + 0x218);
  }
  FUN_1418475e0(param_1,5);
  plVar4 = (longlong *)param_2[1];
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
  return;
}



// FUNCTION 14185a810 SetContentAreaBrush body=30 status=ok
// SIG undefined SetContentAreaBrush(void)

longlong FDockTabStyle::SetContentAreaBrush(longlong param_1)

{
  FUN_1406922e0(param_1 + 0x5b0);
  return param_1;
}



// FUNCTION 14185a850 FUN_14185a850 body=12 status=ok
// SIG undefined FUN_14185a850(void)

void FUN_14185a850(longlong param_1)

{
  TAttribute<TOptional<enum_EMouseCursor::Type>_>::operator=(param_1 + 0x140);
  return;
}



// FUNCTION 14185a860 SetCursorOverride body=44 status=ok
// SIG undefined SetCursorOverride(void)

void FDragDropOperation::SetCursorOverride(longlong param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)(param_1 + 0x38)) {
    if (*(char *)(param_1 + 0x3c) != '\0') {
      *(undefined1 *)(param_1 + 0x3c) = 0;
    }
    if (*(char *)(param_2 + 1) == '\0') {
      return;
    }
    *(undefined4 *)(param_1 + 0x38) = *param_2;
    *(undefined1 *)(param_1 + 0x3c) = 1;
  }
  if (*(char *)(param_2 + 1) != '\0') {
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return;
}



// FUNCTION 14185a890 SetDebugInfo body=43 status=ok
// SIG undefined SetDebugInfo(void)

void SWidget::SetDebugInfo(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  FName::FName(local_res8,param_2,1);
  *(undefined8 *)(param_1 + 0x120) = local_res8[0];
  return;
}



// FUNCTION 14185a8c0 FUN_14185a8c0 body=245 status=ok
// SIG undefined FUN_14185a8c0(void)

void FUN_14185a8c0(longlong *param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong *local_48;
  longlong *local_40;
  undefined1 local_38;
  undefined1 local_37;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_20;
  undefined1 local_1f;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar4 = param_1[4];
  if (lVar4 == 0) {
    if ((char)param_1[3] == '\0') {
      (**(code **)(*param_1 + 0x20))(param_1,&local_48);
      if (local_48 != (longlong *)0x0) {
        if (param_2 == '\0') {
          local_20 = DAT_1464b9eea;
          puVar5 = &local_20;
          local_18 = 0;
          local_10 = 0;
          local_1f = 1;
        }
        else {
          local_38 = DAT_1464b9eeb;
          puVar5 = &local_38;
          local_30 = 0;
          local_28 = 0;
          local_37 = 1;
        }
        (**(code **)(*local_48 + 0x1b8))(local_48,puVar5);
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
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
    }
  }
  else {
    if (param_2 != '\0') {
      FUN_14185c3e0(lVar4);
      return;
    }
    if (*(longlong **)(lVar4 + 0x498) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014185a8fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(lVar4 + 0x498) + 0x58))();
      return;
    }
  }
  return;
}



// FUNCTION 14185a9c0 FUN_14185a9c0 body=30 status=ok
// SIG undefined FUN_14185a9c0(void)

longlong FUN_14185a9c0(longlong param_1)

{
  FUN_1406922e0(param_1 + 0x280);
  return param_1;
}



// FUNCTION 14185a9e0 SetDownArrowImage body=30 status=ok
// SIG undefined SetDownArrowImage(void)

longlong FSearchBoxStyle::SetDownArrowImage(longlong param_1)

{
  FUN_1406922e0(param_1 + 0x8d0);
  return param_1;
}



// FUNCTION 14185aa00 FUN_14185aa00 body=30 status=ok
// SIG undefined FUN_14185aa00(void)

longlong FUN_14185aa00(longlong param_1)

{
  FUN_1406922e0(param_1 + 0x448);
  return param_1;
}



// FUNCTION 14185aa20 FUN_14185aa20 body=30 status=ok
// SIG undefined FUN_14185aa20(void)

longlong FUN_14185aa20(longlong param_1)

{
  FUN_1406922e0(param_1 + 0x520);
  return param_1;
}



// FUNCTION 14185aa40 SetDropIndicator_Below body=30 status=ok
// SIG undefined SetDropIndicator_Below(void)

longlong FTableRowStyle::SetDropIndicator_Below(longlong param_1)

{
  FUN_1406922e0(param_1 + 0x630);
  return param_1;
}



// FUNCTION 14185aa60 SetDropIndicator_Onto body=30 status=ok
// SIG undefined SetDropIndicator_Onto(void)

longlong FTableRowStyle::SetDropIndicator_Onto(longlong param_1)

{
  FUN_1406922e0(param_1 + 0x5a8);
  return param_1;
}



// FUNCTION 14185aa80 SetEditableTextBoxStyle body=27 status=ok
// SIG undefined SetEditableTextBoxStyle(void)

longlong FInlineEditableTextBlockStyle::SetEditableTextBoxStyle(longlong param_1)

{
  FEditableTextBoxStyle::operator=(param_1 + 8);
  return param_1;
}



// FUNCTION 14185aaa0 SetEvenRowBackgroundBrush body=30 status=ok
// SIG undefined SetEvenRowBackgroundBrush(void)

longlong FTableRowStyle::SetEvenRowBackgroundBrush(longlong param_1)

{
  FUN_1406922e0(param_1 + 0x338);
  return param_1;
}



// FUNCTION 14185aac0 FUN_14185aac0 body=30 status=ok
// SIG undefined FUN_14185aac0(void)

longlong FUN_14185aac0(longlong param_1)

{
  FUN_1406922e0(param_1 + 0x2b0);
  return param_1;
}



// FUNCTION 14185aae0 SetFlashColor body=30 status=ok
// SIG undefined SetFlashColor(void)

longlong FDockTabStyle::SetFlashColor(longlong param_1)

{
  FUN_140692440(param_1 + 0x6d8);
  return param_1;
}



// FUNCTION 14185ab00 FUN_14185ab00 body=30 status=ok
// SIG undefined FUN_14185ab00(void)

longlong FUN_14185ab00(longlong param_1)

{
  FUN_1406922e0(param_1 + 0xcd8);
  return param_1;
}



// FUNCTION 14185ab20 FUN_14185ab20 body=30 status=ok
// SIG undefined FUN_14185ab20(void)

longlong FUN_14185ab20(longlong param_1)

{
  FUN_1417f9360(param_1 + 0x238);
  return param_1;
}



// FUNCTION 14185ab40 FUN_14185ab40 body=27 status=ok
// SIG undefined FUN_14185ab40(void)

longlong FUN_14185ab40(longlong param_1)

{
  FUN_1417f9360(param_1 + 8);
  return param_1;
}



// FUNCTION 14185ab60 SetForegroundBrush body=30 status=ok
// SIG undefined SetForegroundBrush(void)

longlong FDockTabStyle::SetForegroundBrush(longlong param_1)

{
  FUN_1406922e0(param_1 + 0x4a0);
  return param_1;
}



// FUNCTION 14185ab80 SetForegroundColor body=30 status=ok
// SIG undefined SetForegroundColor(void)

longlong FHeaderRowStyle::SetForegroundColor(longlong param_1)

{
  FUN_140692440(param_1 + 0xb48);
  return param_1;
}



// FUNCTION 14185aba0 FUN_14185aba0 body=30 status=ok
// SIG undefined FUN_14185aba0(void)

longlong FUN_14185aba0(longlong param_1)

{
  FUN_140692440(param_1 + 0x2b0);
  return param_1;
}



// FUNCTION 14185abc0 SetForegroundColor body=98 status=ok
// SIG undefined SetForegroundColor(void)

longlong FWidgetStyle::SetForegroundColor(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_141831530(param_2);
  cVar1 = *(char *)(puVar6 + 2);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      puVar6 = (undefined8 *)puVar6[3];
    }
    else if (cVar1 == '\x03') {
      puVar6 = (undefined8 *)(param_1 + 0x20);
    }
    else {
      puVar6 = (undefined8 *)(param_1 + 0x10);
    }
  }
  uVar5 = puVar6[1];
  *(undefined8 *)(param_1 + 0x10) = *puVar6;
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  uVar2 = *(undefined4 *)((longlong)puVar6 + 4);
  uVar3 = *(undefined4 *)(puVar6 + 1);
  fVar4 = *(float *)((longlong)puVar6 + 0xc);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)puVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  *(float *)(param_1 + 0x2c) = fVar4;
  *(float *)(param_1 + 0x2c) = fVar4 * 0.6;
  return param_1;
}



// FUNCTION 14185ac30 SetGlassImage body=30 status=ok
// SIG undefined SetGlassImage(void)

longlong FSearchBoxStyle::SetGlassImage(longlong param_1)

{
  FUN_1406922e0(param_1 + 0x958);
  return param_1;
}



// FUNCTION 14185ac50 FUN_14185ac50 body=30 status=ok
// SIG undefined FUN_14185ac50(void)

longlong FUN_14185ac50(longlong param_1)

{
  FUN_1406922e0(param_1 + 0x238);
  return param_1;
}



// FUNCTION 14185ac70 SetHighlightColor body=14 status=ok
// SIG undefined SetHighlightColor(void)

longlong FTextBlockStyle::SetHighlightColor(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0xc0) = *param_2;
  *(undefined8 *)(param_1 + 200) = uVar1;
  return param_1;
}



// FUNCTION 14185ac80 SetHighlightShape body=30 status=ok
// SIG undefined SetHighlightShape(void)

longlong FTextBlockStyle::SetHighlightShape(longlong param_1)

{
  FUN_1406922e0(param_1 + 0xd0);
  return param_1;
}



// FUNCTION 14185aca0 SetHoveredBrush body=30 status=ok
// SIG undefined SetHoveredBrush(void)

longlong FDockTabStyle::SetHoveredBrush(longlong param_1)

{
  FUN_1406922e0(param_1 + 0x528);
  return param_1;
}



// FUNCTION 14185acc0 SetHoveredThumbImage body=30 status=ok
// SIG undefined SetHoveredThumbImage(void)

longlong FScrollBarStyle::SetHoveredThumbImage(longlong param_1)

{
  FUN_1406922e0(param_1 + 0x3c0);
  return param_1;
}



// FUNCTION 14185ace0 FUN_14185ace0 body=30 status=ok
// SIG undefined FUN_14185ace0(void)

longlong FUN_14185ace0(longlong param_1)

{
  FUN_1406922e0(param_1 + 0xc50);
  return param_1;
}



// FUNCTION 14185ad00 SetLastColumnStyle body=30 status=ok
// SIG undefined SetLastColumnStyle(void)

longlong FHeaderRowStyle::SetLastColumnStyle(longlong param_1)

{
  FScrollBarStyle::operator=(param_1 + 0x4d8);
  return param_1;
}



// FUNCTION 14185ad20 FUN_14185ad20 body=306 status=ok
// SIG undefined FUN_14185ad20(void)

void FUN_14185ad20(longlong param_1,longlong param_2,undefined8 *param_3,byte param_4,
                  undefined8 *param_5)

{
  ushort uVar1;
  ulonglong uVar2;
  longlong lVar3;
  void *pvVar4;
  void *_Dst;
  uint uVar5;
  ulonglong *puVar6;
  
  *(byte *)(param_1 + 0x62) = *(byte *)(param_1 + 0x62) & 0xfe;
  *(byte *)(param_1 + 0x62) = *(byte *)(param_1 + 0x62) | param_4;
  if (param_4 != 0) {
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0x10;
  }
  uVar1 = *(ushort *)(param_3 + 1);
  *(ushort *)(param_1 + 0x60) = uVar1;
  if (uVar1 != 0) {
    puVar6 = (ulonglong *)(param_2 + 0xa70);
    uVar5 = (uint)uVar1 * 8;
    pvVar4 = (void *)(*puVar6 + 3 & 0xfffffffffffffffc);
    uVar2 = (ulonglong)uVar5 + (longlong)pvVar4;
    if (*(ulonglong *)(param_2 + 0xa78) < uVar2) {
      FMemStackBase::AllocateNewChunk(puVar6,uVar5 + 4);
      pvVar4 = (void *)(*puVar6 + 3 & 0xfffffffffffffffc);
      uVar2 = (ulonglong)uVar5 + (longlong)pvVar4;
    }
    *puVar6 = uVar2;
    *(void **)(param_1 + 0x68) = pvVar4;
    _guard_xfg_dispatch_icall_nop
              (pvVar4,(void *)*param_3,(ulonglong)*(ushort *)(param_1 + 0x60) << 3);
    if ((param_5 == (undefined8 *)0x0) ||
       (*(uint *)(param_5 + 1) != (uint)*(ushort *)(param_1 + 0x60))) {
      *(undefined8 *)(param_1 + 0x70) = 0;
    }
    else {
      lVar3 = (ulonglong)*(ushort *)(param_1 + 0x60) * 0x10;
      _Dst = (void *)(*puVar6 + 3 & 0xfffffffffffffffc);
      pvVar4 = (void *)(lVar3 + (longlong)_Dst);
      if (*(void **)(param_2 + 0xa78) < pvVar4) {
        FMemStackBase::AllocateNewChunk(puVar6,(int)lVar3 + 4);
        _Dst = (void *)(*puVar6 + 3 & 0xfffffffffffffffc);
        pvVar4 = (void *)(lVar3 + (longlong)_Dst);
      }
      *puVar6 = (ulonglong)pvVar4;
      *(void **)(param_1 + 0x70) = _Dst;
      _guard_xfg_dispatch_icall_nop
                (_Dst,(void *)*param_5,(ulonglong)*(ushort *)(param_1 + 0x60) << 4);
    }
    return;
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}



// FUNCTION 14185ae60 FUN_14185ae60 body=30 status=ok
// SIG undefined FUN_14185ae60(void)

longlong FUN_14185ae60(longlong param_1)

{
  FUN_1406922e0(param_1 + 0x348);
  return param_1;
}



// FUNCTION 14185ae80 SetMaximizeButtonStyle body=30 status=ok
// SIG undefined SetMaximizeButtonStyle(void)

longlong FWindowStyle::SetMaximizeButtonStyle(longlong param_1)

{
  FButtonStyle::operator=(param_1 + 0x280);
  return param_1;
}



// FUNCTION 14185aea0 SetMenuBorderPadding body=14 status=ok
// SIG undefined SetMenuBorderPadding(void)

longlong FComboButtonStyle::SetMenuBorderPadding(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x390) = *param_2;
  *(undefined8 *)(param_1 + 0x398) = uVar1;
  return param_1;
}



// FUNCTION 14185aeb0 SetMidVolumeImage body=30 status=ok
// SIG undefined SetMidVolumeImage(void)

longlong FVolumeControlStyle::SetMidVolumeImage(longlong param_1)

{
  FUN_1406922e0(param_1 + 0x2c0);
  return param_1;
}



// FUNCTION 14185aed0 SetMousePos body=36 status=ok
// SIG undefined SetMousePos(void)

longlong FReply::SetMousePos(longlong param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)(param_1 + 0x18)) {
    if (*(char *)(param_1 + 0x20) != '\0') {
      *(undefined1 *)(param_1 + 0x20) = 0;
    }
    *(undefined8 *)(param_1 + 0x18) = *param_2;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  return param_1;
}



// FUNCTION 14185af00 FUN_14185af00 body=30 status=ok
// SIG undefined FUN_14185af00(void)

longlong FUN_14185af00(longlong param_1)

{
  FUN_1406922e0(param_1 + 0x458);
  return param_1;
}



// FUNCTION 14185af20 FUN_14185af20 body=226 status=ok
// SIG undefined FUN_14185af20(void)

void FUN_14185af20(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_18;
  longlong *local_10;
  
  local_10 = (longlong *)param_2[1];
  local_18 = *param_2;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
  }
  if ((undefined8 *)(param_1 + 0x498) != &local_18) {
    *(undefined8 *)(param_1 + 0x498) = local_18;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x4a0,&local_10);
  }
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
  plVar4 = (longlong *)param_2[1];
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
  return;
}



// FUNCTION 14185b010 FUN_14185b010 body=173 status=ok
// SIG undefined FUN_14185b010(void)

longlong FUN_14185b010(longlong param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  *(undefined1 *)(param_1 + 0xb1) = param_2;
  *(undefined1 *)(param_1 + 0xb2) = param_3;
  *(undefined1 *)(param_1 + 0xb3) = param_4;
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x78) != &local_18) {
    *(undefined8 *)(param_1 + 0x78) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x80,&local_10);
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
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14185b0c0 FUN_14185b0c0 body=30 status=ok
// SIG undefined FUN_14185b0c0(void)

longlong FUN_14185b0c0(longlong param_1)

{
  FUN_1406922e0(param_1 + 0x3d0);
  return param_1;
}



// FUNCTION 14185b0e0 SetNormalPadding body=14 status=ok
// SIG undefined SetNormalPadding(void)

longlong FButtonStyle::SetNormalPadding(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x228) = *param_2;
  *(undefined8 *)(param_1 + 0x230) = uVar1;
  return param_1;
}



// FUNCTION 14185b0f0 FUN_14185b0f0 body=64 status=ok
// SIG undefined FUN_14185b0f0(void)

void FUN_14185b0f0(longlong param_1,undefined8 param_2)

{
  undefined1 local_res8 [32];
  undefined8 *local_18;
  undefined8 local_10;
  
  local_18 = &DAT_1469eb248;
  local_10 = param_2;
  FUN_140437c00(param_1 + 400,local_res8,&local_18,0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2);
  return;
}



// FUNCTION 14185b130 FUN_14185b130 body=64 status=ok
// SIG undefined FUN_14185b130(void)

void FUN_14185b130(longlong param_1,undefined8 param_2)

{
  undefined1 local_res8 [32];
  undefined8 *local_18;
  undefined8 local_10;
  
  local_18 = &DAT_1469eb250;
  local_10 = param_2;
  FUN_140437c00(param_1 + 400,local_res8,&local_18,0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2);
  return;
}



// FUNCTION 14185b170 FUN_14185b170 body=64 status=ok
// SIG undefined FUN_14185b170(void)

void FUN_14185b170(longlong param_1,undefined8 param_2)

{
  undefined1 local_res8 [32];
  undefined8 *local_18;
  undefined8 local_10;
  
  local_18 = &DAT_1469eb260;
  local_10 = param_2;
  FUN_140437c00(param_1 + 400,local_res8,&local_18,0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2);
  return;
}



// FUNCTION 14185b1b0 FUN_14185b1b0 body=64 status=ok
// SIG undefined FUN_14185b1b0(void)

void FUN_14185b1b0(longlong param_1,undefined8 param_2)

{
  undefined1 local_res8 [32];
  undefined8 *local_18;
  undefined8 local_10;
  
  local_18 = &DAT_1469eb258;
  local_10 = param_2;
  FUN_140437c00(param_1 + 400,local_res8,&local_18,0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2);
  return;
}



// FUNCTION 14185b1f0 SetOnUserScrolled body=12 status=ok
// SIG undefined SetOnUserScrolled(void)

void SScrollBar::SetOnUserScrolled(longlong param_1)

{
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x508);
  return;
}



// FUNCTION 14185b200 Tick body=12 status=ok
// SIG undefined Tick(void)

void SDockingTabStack::Tick(longlong param_1)

{
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x518);
  return;
}



// FUNCTION 14185b210 SetOpacity body=35 status=ok
// SIG undefined SetOpacity(void)

void SWindow::SetOpacity(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x344)) {
    *(float *)(param_1 + 0x344) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00014185b22b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x498) + 0x98))();
    return;
  }
  return;
}



// FUNCTION 14185b240 SetOutlineBrush body=30 status=ok
// SIG undefined SetOutlineBrush(void)

longlong FWindowStyle::SetOutlineBrush(longlong param_1)

{
  FUN_1406922e0(param_1 + 0xd88);
  return param_1;
}



// FUNCTION 14185b260 FUN_14185b260 body=30 status=ok
// SIG undefined FUN_14185b260(void)

longlong FUN_14185b260(longlong param_1)

{
  FUN_140692440(param_1 + 0xe10);
  return param_1;
}



// FUNCTION 14185b280 FUN_14185b280 body=12 status=ok
// SIG undefined FUN_14185b280(void)

longlong FUN_14185b280(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x6d0) = param_2;
  return param_1;
}



// FUNCTION 14185b290 SetPadding body=14 status=ok
// SIG undefined SetPadding(void)

longlong FHyperlinkStyle::SetPadding(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x460) = *param_2;
  *(undefined8 *)(param_1 + 0x468) = uVar1;
  return param_1;
}



// FUNCTION 14185b2a0 SetPressedPadding body=14 status=ok
// SIG undefined SetPressedPadding(void)

longlong FButtonStyle::SetPressedPadding(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x238) = *param_2;
  *(undefined8 *)(param_1 + 0x240) = uVar1;
  return param_1;
}



// FUNCTION 14185b2b0 FUN_14185b2b0 body=5 status=ok
// SIG undefined FUN_14185b2b0(void)

void FUN_14185b2b0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}



// FUNCTION 14185b2c0 FUN_14185b2c0 body=12 status=ok
// SIG undefined FUN_14185b2c0(void)

void FUN_14185b2c0(longlong param_1)

{
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x528);
  return;
}



// FUNCTION 14185b2d0 SetRestoreButtonStyle body=30 status=ok
// SIG undefined SetRestoreButtonStyle(void)

longlong FWindowStyle::SetRestoreButtonStyle(longlong param_1)

{
  FButtonStyle::operator=(param_1 + 0x4f8);
  return param_1;
}



// FUNCTION 14185b2f0 SetScrollBarStyle body=30 status=ok
// SIG undefined SetScrollBarStyle(void)

longlong FEditableTextBoxStyle::SetScrollBarStyle(longlong param_1)

{
  FScrollBarStyle::operator=(param_1 + 800);
  return param_1;
}



// FUNCTION 14185b310 SetRestoreButtonStyle body=30 status=ok
// SIG undefined SetRestoreButtonStyle(void)

longlong FWindowStyle::SetRestoreButtonStyle(longlong param_1)

{
  FUN_140692440(param_1 + 0x4f8);
  return param_1;
}



// FUNCTION 14185b330 SetShadowColorAndOpacity body=14 status=ok
// SIG undefined SetShadowColorAndOpacity(void)

longlong FTextBlockStyle::SetShadowColorAndOpacity(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x88) = *param_2;
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  return param_1;
}



// FUNCTION 14185b340 SetShadowOffset body=16 status=ok
// SIG undefined SetShadowOffset(void)

longlong FTextBlockStyle::SetShadowOffset(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x80) = *param_2;
  return param_1;
}



// FUNCTION 14185b350 SetShouldReportReferencesToGC body=7 status=ok
// SIG undefined SetShouldReportReferencesToGC(void)

void FSlateWindowElementList::SetShouldReportReferencesToGC(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xaa0) = param_2;
  return;
}



// FUNCTION 14185b360 SetSliderStyle body=112 status=ok
// SIG undefined SetSliderStyle(void)

longlong FVolumeControlStyle::SetSliderStyle(longlong param_1,longlong param_2)

{
  FUN_1406922e0(param_1 + 0x10,param_2 + 8);
  FUN_1406922e0(param_1 + 0x98,param_2 + 0x90);
  FUN_1406922e0(param_1 + 0x120,param_2 + 0x118);
  FUN_1406922e0(param_1 + 0x1a8,param_2 + 0x1a0);
  *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_2 + 0x228);
  return param_1;
}



// FUNCTION 14185b3d0 FUN_14185b3d0 body=14 status=ok
// SIG undefined FUN_14185b3d0(void)

longlong FUN_14185b3d0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x6c0) = *param_2;
  *(undefined8 *)(param_1 + 0x6c8) = uVar1;
  return param_1;
}



// FUNCTION 14185b3e0 SetTabWellBrush body=30 status=ok
// SIG undefined SetTabWellBrush(void)

longlong FDockTabStyle::SetTabWellBrush(longlong param_1)

{
  FUN_1406922e0(param_1 + 0x638);
  return param_1;
}



// FUNCTION 14185b400 FUN_14185b400 body=290 status=ok
// SIG undefined FUN_14185b400(void)

void FUN_14185b400(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  int param_5,int param_6)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  wchar_t *_Dest;
  longlong lVar5;
  
  FUN_1417f9360(param_1 + 0x60,param_4);
  iVar1 = (int)param_3[1];
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = -1;
  }
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  if (param_5 <= iVar4) {
    iVar4 = param_5;
  }
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  if (param_6 <= iVar3) {
    iVar3 = param_6;
  }
  iVar1 = iVar3 - iVar4;
  if (iVar3 <= iVar4) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0xb8) = iVar1;
  _Dest = (wchar_t *)(*(longlong *)(param_2 + 0xa70) + 1U & 0xfffffffffffffffe);
  lVar5 = (longlong)(iVar1 * 2 + 2);
  uVar2 = lVar5 + (longlong)_Dest;
  if (*(ulonglong *)(param_2 + 0xa78) < uVar2) {
    FMemStackBase::AllocateNewChunk(param_2 + 0xa70,iVar1 * 2 + 4);
    _Dest = (wchar_t *)(*(longlong *)(param_2 + 0xa70) + 1U & 0xfffffffffffffffe);
    uVar2 = lVar5 + (longlong)_Dest;
  }
  *(ulonglong *)(param_2 + 0xa70) = uVar2;
  iVar1 = *(int *)(param_1 + 0xb8);
  *(wchar_t **)(param_1 + 0xb0) = _Dest;
  if (iVar1 < 1) {
    *_Dest = L'\0';
  }
  else {
    wcsncpy(_Dest,(wchar_t *)(*param_3 + (longlong)iVar4 * 2),(longlong)iVar1);
    _Dest[iVar1] = L'\0';
  }
  return;
}



// FUNCTION 14185b530 SetTextBoxStyle body=59 status=ok
// SIG undefined SetTextBoxStyle(void)

longlong FSearchBoxStyle::SetTextBoxStyle(longlong param_1)

{
  FEditableTextBoxStyle::operator=(param_1 + 8);
  if ((*(longlong *)(param_1 + 0x828) == 0) && (*(longlong *)(param_1 + 0x7f8) == 0)) {
    FUN_1417f9360((longlong *)(param_1 + 0x7f8),param_1 + 0x240);
  }
  return param_1;
}



// FUNCTION 14185b570 SetTextColor body=30 status=ok
// SIG COLORREF SetTextColor(HDC hdc, COLORREF color)

COLORREF __stdcall FTableRowStyle::SetTextColor(HDC hdc,COLORREF color)

{
  FUN_140692440(hdc + 0x134);
  return (COLORREF)hdc;
}



// FUNCTION 14185b590 SetTextPadding body=14 status=ok
// SIG undefined SetTextPadding(void)

longlong FSpinBoxStyle::SetTextPadding(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x2d8) = *param_2;
  *(undefined8 *)(param_1 + 0x2e0) = uVar1;
  return param_1;
}



// FUNCTION 14185b5a0 SetTextStyle body=30 status=ok
// SIG undefined SetTextStyle(void)

longlong FHyperlinkStyle::SetTextStyle(longlong param_1)

{
  FTextBlockStyle::operator=(param_1 + 0x280);
  return param_1;
}



// FUNCTION 14185b5c0 SetTextStyle body=30 status=ok
// SIG undefined SetTextStyle(void)

longlong FInlineEditableTextBlockStyle::SetTextStyle(longlong param_1)

{
  FTextBlockStyle::operator=(param_1 + 0x7f8);
  return param_1;
}



// FUNCTION 14185b5e0 SetTitleTextStyle body=30 status=ok
// SIG undefined SetTitleTextStyle(void)

longlong FWindowStyle::SetTitleTextStyle(longlong param_1)

{
  FTextBlockStyle::operator=(param_1 + 0x9e8);
  return param_1;
}



// FUNCTION 14185b600 SetTimeSource body=191 status=ok
// SIG undefined SetTimeSource(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FMediaModule::SetTimeSource(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  puVar3 = (undefined8 *)(param_1 + 0x160);
  uStack_30 = (longlong *)param_2[1];
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_30 + 1) = (int)uStack_30[1] + 1;
    UNLOCK();
  }
  if (&local_38 != puVar3) {
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    uVar5 = *puVar3;
    plVar6 = *(longlong **)(param_1 + 0x168);
    local_28 = (undefined4)local_38;
    uStack_24 = local_38._4_4_;
    uStack_20 = (undefined4)uStack_30;
    uStack_1c = uStack_30._4_4_;
    *(undefined4 *)puVar3 = (undefined4)local_38;
    *(undefined4 *)(param_1 + 0x164) = local_38._4_4_;
    *(undefined4 *)(param_1 + 0x168) = (undefined4)uStack_30;
    *(undefined4 *)(param_1 + 0x16c) = uStack_30._4_4_;
    local_38 = uVar5;
    uStack_30 = plVar6;
  }
  plVar6 = uStack_30;
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_30 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*uStack_30)(uStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_30 + 8))(uStack_30,1);
      }
    }
  }
  return;
}



// FUNCTION 14185b6c0 FUN_14185b6c0 body=239 status=ok
// SIG undefined FUN_14185b6c0(void)

void FUN_14185b6c0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 local_28;
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar6 = (undefined8 *)(**(code **)(*DAT_1469eaf38 + 0xf8))(DAT_1469eaf38,local_18,param_2);
  local_20 = (longlong *)puVar6[1];
  local_28 = *puVar6;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
  }
  if ((undefined8 *)(param_1 + 0x160) != &local_28) {
    *(undefined8 *)(param_1 + 0x160) = local_28;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x168,&local_20);
  }
  plVar3 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
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
  return;
}



// FUNCTION 14185b7b0 FUN_14185b7b0 body=239 status=ok
// SIG undefined FUN_14185b7b0(void)

void FUN_14185b7b0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 local_28;
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar6 = (undefined8 *)(**(code **)(*DAT_1469eaf38 + 0xf0))(DAT_1469eaf38,local_18,param_2);
  local_20 = (longlong *)puVar6[1];
  local_28 = *puVar6;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
  }
  if ((undefined8 *)(param_1 + 0x160) != &local_28) {
    *(undefined8 *)(param_1 + 0x160) = local_28;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x168,&local_20);
  }
  plVar3 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
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
  return;
}



// FUNCTION 14185b8a0 FUN_14185b8a0 body=30 status=ok
// SIG undefined FUN_14185b8a0(void)

longlong FUN_14185b8a0(longlong param_1)

{
  FUN_1406922e0(param_1 + 0x98);
  return param_1;
}



// FUNCTION 14185b8c0 SetUncheckedImage body=27 status=ok
// SIG undefined SetUncheckedImage(void)

longlong FCheckBoxStyle::SetUncheckedImage(longlong param_1)

{
  FUN_1406922e0(param_1 + 0x10);
  return param_1;
}



// FUNCTION 14185b8e0 SetUncheckedPressedImage body=30 status=ok
// SIG undefined SetUncheckedPressedImage(void)

longlong FCheckBoxStyle::SetUncheckedPressedImage(longlong param_1)

{
  FUN_1406922e0(param_1 + 0x120);
  return param_1;
}



// FUNCTION 14185b900 SetUnderlineBrush body=30 status=ok
// SIG undefined SetUnderlineBrush(void)

longlong FTextBlockStyle::SetUnderlineBrush(longlong param_1)

{
  FUN_1406922e0(param_1 + 0x158);
  return param_1;
}



// FUNCTION 14185b920 FUN_14185b920 body=30 status=ok
// SIG undefined FUN_14185b920(void)

longlong FUN_14185b920(longlong param_1)

{
  FUN_1406922e0(param_1 + 0x3c8);
  return param_1;
}



// FUNCTION 14185b940 FUN_14185b940 body=30 status=ok
// SIG undefined FUN_14185b940(void)

longlong FUN_14185b940(longlong param_1)

{
  FUN_1406922e0(param_1 + 0x340);
  return param_1;
}



// FUNCTION 14185b960 SetUndeterminedPressedImage body=30 status=ok
// SIG undefined SetUndeterminedPressedImage(void)

longlong FCheckBoxStyle::SetUndeterminedPressedImage(longlong param_1)

{
  FUN_1406922e0(param_1 + 0x450);
  return param_1;
}



// FUNCTION 14185b980 SetUpArrowImage body=30 status=ok
// SIG undefined SetUpArrowImage(void)

longlong FSearchBoxStyle::SetUpArrowImage(longlong param_1)

{
  FUN_1406922e0(param_1 + 0x848);
  return param_1;
}



// FUNCTION 14185b9a0 FUN_14185b9a0 body=287 status=ok
// SIG undefined FUN_14185b9a0(void)

longlong FUN_14185b9a0(longlong param_1,undefined8 *param_2,undefined1 param_3,byte param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_28;
  longlong *local_20;
  
  *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 2;
  local_20 = (longlong *)param_2[1];
  local_28 = *param_2;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
  }
  if ((undefined8 *)(param_1 + 0x48) != &local_28) {
    *(undefined8 *)(param_1 + 0x48) = local_28;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x50,&local_20);
  }
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
  *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xfffffff3;
  *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | (uint)param_4 << 3;
  *(undefined1 *)(param_1 + 0xb0) = param_3;
  plVar4 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 14185bac0 SetVisibility body=87 status=ok
// SIG undefined SetVisibility(void)

void SLeafWidget::SetVisibility(undefined8 param_1,undefined1 *param_2)

{
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined4 local_18;
  
  local_28 = *param_2;
  local_27 = param_2[1];
  local_20 = 0;
  local_18 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_20,param_2 + 8);
  FUN_14185bb20(param_1,&local_28);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 8);
  return;
}



// FUNCTION 14185bb20 FUN_14185bb20 body=269 status=ok
// SIG undefined FUN_14185bb20(void)

void FUN_14185bb20(longlong param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  if ((*(int *)(param_1 + 0xc0) == 0) || (*(longlong **)(param_1 + 0xb8) == (longlong *)0x0)) {
LAB_14185bb55:
    cVar1 = '\0';
  }
  else {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x18))();
    if (cVar1 == '\0') goto LAB_14185bb55;
    cVar1 = '\x01';
  }
  if ((*(int *)(param_2 + 0x10) == 0) || (*(longlong **)(param_2 + 8) == (longlong *)0x0)) {
LAB_14185bb75:
    cVar2 = '\0';
  }
  else {
    cVar2 = (**(code **)(**(longlong **)(param_2 + 8) + 0x18))();
    if (cVar2 == '\0') goto LAB_14185bb75;
    cVar2 = '\x01';
  }
  if (cVar1 == cVar2) {
    if (cVar1 == '\0') {
      if (*(char *)(param_1 + 0xb1) != param_2[1]) goto LAB_14185bbea;
      bVar6 = *(char *)(param_1 + 0xb0) == *param_2;
    }
    else {
      lVar4 = 0;
      lVar5 = lVar4;
      if ((*(int *)(param_2 + 0x10) != 0) &&
         (plVar3 = *(longlong **)(param_2 + 8), lVar5 = 0, plVar3 != (longlong *)0x0)) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
        lVar5 = *plVar3;
      }
      if ((*(int *)(param_1 + 0xc0) != 0) &&
         (plVar3 = *(longlong **)(param_1 + 0xb8), plVar3 != (longlong *)0x0)) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
        lVar4 = *plVar3;
      }
      bVar6 = lVar4 == lVar5;
    }
    if (bVar6) goto LAB_14185bc19;
  }
LAB_14185bbea:
  *(char *)(param_1 + 0xb0) = *param_2;
  *(char *)(param_1 + 0xb1) = param_2[1];
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0xb8,param_2 + 8);
  FUN_1418475e0(param_1,7);
LAB_14185bc19:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 8);
  return;
}



// FUNCTION 14185bc30 FUN_14185bc30 body=522 status=ok
// SIG undefined FUN_14185bc30(void)

void FUN_14185bc30(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  BOOL BVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  float *pfVar8;
  undefined8 *puVar9;
  undefined8 local_res8;
  undefined8 local_res18 [2];
  undefined8 local_78;
  longlong local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58;
  undefined1 local_57;
  undefined8 local_50;
  undefined4 local_48;
  
  uVar6 = (**(code **)(**(longlong **)(param_1 + 0x498) + 0x68))();
  if (uVar6 != param_2) {
    lpCriticalSection =
         (LPCRITICAL_SECTION)(**(code **)(**(longlong **)(DAT_1469eaf38 + 0x18) + 0x160))();
    BVar7 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar7 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    if (param_2 != 2) {
      *(undefined8 *)(param_1 + 0x370) = *(undefined8 *)(param_1 + 0x368);
    }
    *(undefined1 *)(param_1 + 0x5d8) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x498) + 0x60))(*(longlong **)(param_1 + 0x498),param_2);
    if (*(char *)(param_1 + 0x351) < '\0') {
      local_res8 = *(undefined8 *)(param_1 + 0x378);
      pfVar8 = (float *)&local_res8;
    }
    else {
      pfVar8 = (float *)(param_1 + 0x380);
      if (*pfVar8 == 0.0) {
        pfVar8 = (float *)(param_1 + 0x378);
      }
      local_res18[0] = *(undefined8 *)pfVar8;
      pfVar8 = (float *)local_res18;
    }
    plVar4 = *(longlong **)(DAT_1469eaf38 + 0x18);
    puVar9 = (undefined8 *)
             TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_68);
    local_78 = *puVar9;
    local_70 = puVar9[1];
    if (local_70 != 0) {
      LOCK();
      *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
      UNLOCK();
    }
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)local_60 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
    (**(code **)(*plVar4 + 0x30))(plVar4,&local_78,(longlong)*pfVar8,(longlong)pfVar8[1]);
    plVar4 = *(longlong **)(param_1 + 0x430);
    if (plVar4 != (longlong *)0x0) {
      local_58 = DAT_1464b9ee8;
      if (param_2 < 2) {
        local_58 = DAT_1464b9ee9;
      }
      local_57 = 1;
      local_50 = 0;
      local_48 = 0;
      (**(code **)(*plVar4 + 0x1b8))(plVar4,&local_58);
    }
    if (uVar6 != 2) {
      SWindow::MoveWindowTo(param_1,*(undefined8 *)(param_1 + 0x370));
    }
    *(undefined1 *)(param_1 + 0x5d8) = 1;
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}



// FUNCTION 14185be40 FUN_14185be40 body=394 status=ok
// SIG undefined FUN_14185be40(void)

void FUN_14185be40(float *param_1,longlong param_2,undefined2 param_3,undefined8 *param_4,
                  byte param_5)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  float fVar4;
  
  uVar1 = *(undefined8 *)((longlong)param_4 + 0x24);
  *(undefined8 *)param_1 = *(undefined8 *)((longlong)param_4 + 0x1c);
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)((longlong)param_4 + 0x2c);
  *(undefined8 *)(param_1 + 0xc) = *param_4;
  fVar4 = *(float *)(param_4 + 1);
  param_1[0x10] = fVar4;
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)((longlong)param_4 + 0x14);
  if (*(int *)(param_2 + 0x990) < 1) {
    uVar3 = 0xffff;
  }
  else {
    uVar3 = (undefined2)
            *(undefined4 *)
             (*(longlong *)(param_2 + 0x988) + -4 + (longlong)*(int *)(param_2 + 0x990) * 4);
  }
  *(undefined2 *)((longlong)param_1 + 0x46) = uVar3;
  *(undefined2 *)(param_1 + 0x11) = param_3;
  *(byte *)((longlong)param_1 + 0x49) = param_5;
  fVar4 = 1.0 / fVar4;
  *(ulonglong *)(param_1 + 6) = CONCAT44(param_1[1] * fVar4,*param_1 * fVar4);
  *(ulonglong *)(param_1 + 8) = CONCAT44(param_1[3] * fVar4,param_1[2] * fVar4);
  *(ulonglong *)(param_1 + 10) =
       CONCAT44(param_1[1] * -(fVar4 * param_1[0xc]) + param_1[3] * -(fVar4 * param_1[0xd]) +
                param_1[5],
                *param_1 * -(fVar4 * param_1[0xc]) + param_1[2] * -(fVar4 * param_1[0xd]) +
                param_1[4]);
  uVar2 = (**(code **)(**(longlong **)(DAT_1469eaf38 + 0x18) + 0x178))();
  *(undefined1 *)(param_1 + 0x12) = uVar2;
  *(byte *)((longlong)param_1 + 0x4a) = param_5 & 0xf;
  if ((char)param_5 < '\0') {
    *(byte *)((longlong)param_1 + 0x4a) = param_5 & 0xf | 0x80;
  }
  return;
}



// FUNCTION 14185bfd0 ShapeBidirectionalText body=364 status=ok
// SIG undefined ShapeBidirectionalText(void)

undefined8
FSlateFontCache::ShapeBidirectionalText
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
          undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined1 param_8,
          undefined1 param_9)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 in_stack_ffffffffffffff58;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  
  lVar2 = *(longlong *)(param_1 + 0x38);
  local_68 = (undefined4 *)0x0;
  local_60 = 0;
  uVar4 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff58 >> 8),param_8);
  (**(code **)(**(longlong **)(lVar2 + 0x30) + 8))
            (*(longlong **)(lVar2 + 0x30),param_3,param_4,param_5,uVar4,&local_68);
  uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_78 = 0;
  local_70 = 0;
  puVar1 = local_68 + (longlong)(int)local_60 * 3;
  local_58 = 0;
  puVar3 = local_68;
  local_50 = 0;
  local_4c = 0;
  if (local_68 != puVar1) {
    do {
      uVar4 = param_6;
      FUN_141851f70(lVar2,param_3,*puVar3,puVar3[1],param_6,param_7,*(undefined1 *)(puVar3 + 2),
                    param_9,&local_78);
      uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
      puVar3 = puVar3 + 3;
    } while (puVar3 != puVar1);
    local_58 = local_78;
    local_50 = (undefined4)local_70;
    local_4c = local_70._4_4_;
  }
  local_resc = param_5;
  local_78 = 0;
  local_70 = 0;
  local_res8 = param_4;
  FUN_14182d5b0(lVar2,param_2,&local_58,param_6,CONCAT44(uVar5,param_7),&local_res8);
  FUN_1417f50c0(&local_78);
  if (local_68 != (undefined4 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14185c140 ShapeUnidirectionalText body=274 status=ok
// SIG undefined ShapeUnidirectionalText(void)

undefined8
FSlateFontCache::ShapeUnidirectionalText
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
          undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined1 param_8,
          undefined1 param_9)

{
  undefined8 uVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  local_48 = 0;
  local_40 = 0;
  FUN_141851f70(uVar1,param_3,param_4,param_5,param_6,param_7,param_8,param_9,&local_48);
  local_38 = local_48;
  local_30 = (undefined4)local_40;
  local_2c = local_40._4_4_;
  local_resc = param_5;
  local_48 = 0;
  local_40 = 0;
  local_res8 = param_4;
  FUN_14182d5b0(uVar1,param_2,&local_38,param_6,param_7,&local_res8);
  FUN_1417f50c0(&local_48);
  return param_2;
}



// FUNCTION 14185c260 ShouldBeEnabled body=101 status=ok
// SIG undefined ShouldBeEnabled(void)

undefined8 SWidget::ShouldBeEnabled(longlong param_1,char param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if (param_2 != '\0') {
    if ((*(int *)(param_1 + 0xa8) != 0) && (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))();
      if (cVar1 != '\0') {
        if (*(int *)(param_1 + 0xa8) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(param_1 + 0xa0);
        }
        uVar2 = (**(code **)(*plVar3 + 0x38))();
        *(undefined1 *)(param_1 + 0x98) = uVar2;
      }
    }
    if (*(char *)(param_1 + 0x98) != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14185c2d0 ShouldCull body=116 status=ok
// SIG undefined ShouldCull(void)

ulonglong FSlateDrawElement::ShouldCull(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = *(int *)(param_1 + 0x990);
  uVar2 = (longlong)iVar1;
  if (0 < iVar1) {
    uVar2 = *(ulonglong *)(param_1 + 0x988);
    iVar1 = *(int *)((uVar2 - 4) + (longlong)iVar1 * 4);
    if ((((iVar1 != -1) &&
         (uVar2 = (longlong)iVar1 * 0x40 + *(longlong *)(param_1 + 0x998),
         *(char *)(uVar2 + 0x28) != '\0')) && ((*(byte *)(uVar2 + 0x24) & 1) != 0)) &&
       ((ABS(*(float *)(uVar2 + 4) - *(float *)(uVar2 + 0x1c)) <= 1e-08 ||
        (ABS(*(float *)(uVar2 + 8) - *(float *)(uVar2 + 0x20)) <= 1e-08)))) {
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 14185c350 ShouldCull body=139 status=ok
// SIG undefined ShouldCull(void)

undefined8 FSlateDrawElement::ShouldCull(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  
  if ((((*(float *)(param_2 + 0x14) == 0.0) || (*(float *)(param_2 + 0x18) == 0.0)) ||
      (cVar3 = ShouldCull(), cVar3 != '\0')) || (*(char *)(param_3 + 0x6c) == '\0')) {
    return 1;
  }
  lVar2 = *(longlong *)(param_3 + 0x48);
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar6;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) & 0x30000000) != 0) {
      return 1;
    }
    if ((*(uint *)(lVar2 + 8) >> 0xf & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14185c3e0 FUN_14185c3e0 body=489 status=ok
// SIG undefined FUN_14185c3e0(void)

void FUN_14185c3e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  float local_res8;
  float local_resc;
  undefined8 local_38;
  longlong local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if ((*(byte *)(param_1 + 0x350) & 0x40) == 0) {
    if (*(longlong *)(param_1 + 0x498) != 0) {
      plVar6 = (longlong *)DAT_1469eaf38[3];
      puVar5 = (undefined8 *)
               TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_28);
      local_38 = *puVar5;
      local_30 = puVar5[1];
      if (local_30 != 0) {
        LOCK();
        *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
        UNLOCK();
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
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_38);
    }
    if ((*(char *)(param_1 + 0x348) == '\x01') && (*(char *)(param_1 + 0x349) != '\0')) {
      plVar6 = *(longlong **)(param_1 + 0x498);
      fVar7 = (float)(**(code **)(*DAT_1469eaf38 + 0x38))();
      fVar8 = (float)(**(code **)(*plVar6 + 0xf0))(plVar6);
      FUN_14185c5d0(param_1,fVar7 * fVar8);
      SWidget::GetDesiredSize(param_1,&local_res8);
      SWindow::ReshapeWindow
                (param_1,CONCAT44(*(float *)(param_1 + 0x35c) - local_resc * 0.5,
                                  *(float *)(param_1 + 0x358) - local_res8 * 0.5),
                 CONCAT44(local_resc,local_res8));
    }
    plVar6 = *(longlong **)(param_1 + 0x498);
    if ((plVar6 != (longlong *)0x0) && ((*(byte *)(param_1 + 0x350) & 0x10) != 0)) {
      (**(code **)(*plVar6 + 0x40))();
      plVar6 = *(longlong **)(param_1 + 0x498);
    }
    if ((plVar6 != (longlong *)0x0) && ((*(byte *)(param_1 + 0x350) & 0x20) != 0)) {
      (**(code **)(*plVar6 + 0x38))();
    }
  }
  *(byte *)(param_1 + 0x350) = *(byte *)(param_1 + 0x350) | 0x40;
  if ((*(longlong **)(param_1 + 0x498) != (longlong *)0x0) &&
     ((**(code **)(**(longlong **)(param_1 + 0x498) + 0x50))(),
     (*(byte *)(param_1 + 0x350) & 4) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014185c5bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x498) + 0x20))(*(longlong **)(param_1 + 0x498),0);
    return;
  }
  return;
}



// FUNCTION 14185c5d0 FUN_14185c5d0 body=421 status=ok
// SIG undefined FUN_14185c5d0(void)

void FUN_14185c5d0(longlong *param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  float fVar11;
  undefined1 local_res18 [16];
  longlong local_38;
  longlong *local_30;
  
  if (DAT_1469eaf30 != 0) {
    if (((*(byte *)(param_1 + 9) & 1) == 0) && (param_2 == *(float *)((longlong)param_1 + 0x44))) {
      return;
    }
    *(float *)((longlong)param_1 + 0x44) = param_2;
    *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xfe;
  }
  if ((*(byte *)(param_1 + 3) & 8) != 0) {
    plVar7 = (longlong *)(**(code **)(*param_1 + 0x170))();
    iVar6 = (**(code **)*plVar7)(plVar7);
    iVar10 = 0;
    if (0 < iVar6) {
      do {
        (**(code **)(*plVar7 + 0x10))(plVar7,&local_38,iVar10);
        lVar4 = local_38;
        if (DAT_1469eaf30 == 0) {
          if (((*(int *)(local_38 + 0xc0) != 0) &&
              (*(longlong **)(local_38 + 0xb8) != (longlong *)0x0)) &&
             (cVar5 = (**(code **)(**(longlong **)(local_38 + 0xb8) + 0x18))(), cVar5 != '\0')) {
            if (*(int *)(lVar4 + 0xc0) == 0) {
              plVar9 = (longlong *)0x0;
            }
            else {
              plVar9 = *(longlong **)(lVar4 + 0xb8);
            }
            (**(code **)(*plVar9 + 0x38))(plVar9,local_res18);
            *(undefined1 *)(lVar4 + 0xb0) = local_res18[0];
          }
          if (*(char *)(lVar4 + 0xb0) != DAT_1464b9ee9) goto LAB_14185c6c8;
        }
        else {
LAB_14185c6c8:
          lVar4 = *param_1;
          uVar8 = (**(code **)(*plVar7 + 0x18))(plVar7,iVar10);
          fVar11 = (float)(**(code **)(lVar4 + 0x160))(param_1,uVar8,param_2);
          FUN_14185c5d0(local_38,fVar11 * param_2);
        }
        plVar9 = local_30;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_30 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_30)(local_30);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar6);
    }
  }
  if (DAT_1469eaf30 == 0) {
    (**(code **)(*param_1 + 0x150))(param_1,param_2);
  }
  return;
}



// FUNCTION 14185c780 SlatePrepass body=53 status=ok
// SIG undefined SlatePrepass(void)

void SWidget::SlatePrepass(undefined8 param_1)

{
  undefined4 uVar1;
  
  if (DAT_1469eaf30 == 0) {
    uVar1 = (**(code **)(*DAT_1469eaf38 + 0x38))();
    FUN_14185c5d0(param_1,uVar1);
    return;
  }
  return;
}



// FUNCTION 14185c7c0 FUN_14185c7c0 body=115 status=ok
// SIG undefined FUN_14185c7c0(void)

undefined8 * FUN_14185c7c0(void)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x50);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = 0;
    *puVar3 = &PTR__scalar_deleting_destructor__144d4edf0;
    puVar3[2] = DAT_1469eb218;
    lVar2 = DAT_1469eb220;
    puVar3[3] = DAT_1469eb220;
    if (lVar2 != 0) {
      LOCK();
      piVar1 = (int *)(lVar2 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar3 + 4) = 0;
    *puVar3 = &PTR_FUN_1444d5278;
    *(undefined2 *)((longlong)puVar3 + 0x24) = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *(undefined1 *)(puVar3 + 7) = 1;
    puVar3[8] = 0;
    *(undefined4 *)(puVar3 + 9) = 0;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14185c860 FUN_14185c860 body=424 status=ok
// SIG undefined FUN_14185c860(void)

void FUN_14185c860(longlong param_1)

{
  int *piVar1;
  float *pfVar2;
  longlong *plVar3;
  double dVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  code *local_38;
  float fStack_30;
  float fStack_2c;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_18 [16];
  
  pfVar2 = (float *)(param_1 + 0x368);
  local_38 = *(code **)pfVar2;
  *(byte *)(param_1 + 0x420) = *(byte *)(param_1 + 0x420) | 1;
  fStack_30 = *pfVar2 + *(float *)(param_1 + 0x378);
  fStack_2c = *(float *)(param_1 + 0x36c) + *(float *)(param_1 + 0x37c);
  *(undefined4 *)(param_1 + 0x3a0) = *(undefined4 *)(param_1 + 0x344);
  *(float *)(param_1 + 0x3a8) = *pfVar2;
  *(undefined4 *)(param_1 + 0x3ac) = *(undefined4 *)(param_1 + 0x36c);
  *(float *)(param_1 + 0x3b0) = fStack_30;
  *(float *)(param_1 + 0x3b4) = fStack_2c;
  *(byte *)(param_1 + 0x41c) = *(byte *)(param_1 + 0x41c) & 0xf9 | 1;
  dVar4 = (double)(**(code **)(*DAT_1469eaf38 + 0x40))();
  *(double *)(param_1 + 0x408) = dVar4 - (double)*(float *)(param_1 + 0x418);
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 2;
  if ((*(longlong *)(param_1 + 0x5e0) != 0) && (*(longlong *)(param_1 + 0x5e8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x5e8) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      return;
    }
  }
  local_38 = FUN_14185f400;
  fStack_30 = 0.0;
  uVar7 = FUN_1417ddb00(local_18,param_1,&local_38);
  puVar8 = (undefined8 *)FUN_141853de0(param_1,local_28,0,uVar7);
  *(undefined8 *)(param_1 + 0x5e0) = *puVar8;
  plVar3 = (longlong *)puVar8[1];
  plVar9 = *(longlong **)(param_1 + 0x5e8);
  if (plVar3 != plVar9) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar9 = *(longlong **)(param_1 + 0x5e8);
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
    *(longlong **)(param_1 + 0x5e8) = plVar3;
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return;
}



// FUNCTION 14185ca10 Subdivide body=298 status=ok
// SIG undefined Subdivide(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FLineBuilder::Subdivide
               (float *param_1,float *param_2,float *param_3,float *param_4,longlong param_5,
               float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  float local_60;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  fVar1 = param_2[1];
  fVar2 = *param_2;
  fVar3 = *param_3;
  fVar4 = param_3[1];
  if (ABS((fVar3 + *param_1) - (fVar2 + fVar2)) + ABS((fVar4 + param_1[1]) - (fVar1 + fVar1)) +
      ABS((fVar2 + *param_4) - (fVar3 + fVar3)) + ABS((fVar1 + param_4[1]) - (fVar4 + fVar4)) <=
      param_6) {
    AppendPoint(param_5,*(undefined8 *)param_4,param_5 + 0x38);
  }
  else {
    local_68 = local_58;
    deCasteljauSplit();
    local_60 = param_6;
    local_68 = (undefined1 *)param_5;
    Subdivide(local_58,local_50,local_48,local_40);
    local_60 = param_6;
    local_68 = (undefined1 *)param_5;
    Subdivide(local_40,local_38,local_30,local_28);
  }
  return;
}



// FUNCTION 14185cb40 Subdivide_WithColorGradient body=478 status=ok
// SIG undefined Subdivide_WithColorGradient(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FLineBuilder::Subdivide_WithColorGradient
               (undefined8 param_1,undefined8 param_2,longlong param_3,float *param_4,float *param_5
               ,float *param_6,float *param_7,undefined8 param_8,float param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined8 local_b0;
  float local_a8;
  undefined1 local_98 [8];
  undefined1 local_90 [16];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  fVar1 = *param_6;
  fVar2 = param_5[1];
  fVar3 = *param_5;
  fVar4 = param_6[1];
  if (ABS((fVar1 + *param_4) - (fVar3 + fVar3)) + ABS((fVar4 + param_4[1]) - (fVar2 + fVar2)) +
      ABS((fVar3 + *param_7) - (fVar1 + fVar1)) + ABS((fVar2 + param_7[1]) - (fVar4 + fVar4)) <=
      param_9) {
    FLinearColor::ToFColor(param_2,local_98,*(undefined1 *)(param_3 + 0x44));
    AppendPoint(param_8,*(undefined8 *)param_7,local_98);
  }
  else {
    local_c8 = local_80;
    deCasteljauSplit(param_4,param_5,param_6,param_7);
    FLinearColor::LerpUsingHSV(local_90,param_1,param_2,0x3f000000);
    local_a8 = param_9;
    local_b8 = local_68;
    local_b0 = param_8;
    local_c0 = local_70;
    local_c8 = local_78;
    Subdivide_WithColorGradient(param_1,local_90,param_3,local_80);
    local_a8 = param_9;
    local_b8 = local_50;
    local_b0 = param_8;
    local_c0 = local_58;
    local_c8 = local_60;
    Subdivide_WithColorGradient(local_90,param_2,param_3,local_68);
  }
  return;
}



// FUNCTION 14185cd20 FUN_14185cd20 body=1091 status=ok
// SIG undefined FUN_14185cd20(void)

void FUN_14185cd20(longlong param_1)

{
  float *pfVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((*(byte *)(param_1 + 0x420) & 1) == 0) {
    return;
  }
  if (((*(byte *)(param_1 + 0x41c) & 4) != 0) ||
     (((*(byte *)(param_1 + 0x41c) & 2) == 0 &&
      (dVar2 = (double)(**(code **)(*DAT_1469eaf38 + 0x40))(),
      (double)*(float *)(param_1 + 0x418) < dVar2 - *(double *)(param_1 + 0x408))))) {
    if ((*(byte *)(param_1 + 0x420) & 2) == 0) {
      if ((*(float *)(param_1 + 0x3b8) != *(float *)(param_1 + 0x368)) ||
         (*(float *)(param_1 + 0x3bc) != *(float *)(param_1 + 0x36c))) {
        SWindow::MoveWindowTo(param_1,*(undefined8 *)(param_1 + 0x3b8));
      }
    }
    else {
      if ((*(byte *)(param_1 + 0x351) & 2) == 0) {
        fVar9 = *(float *)(param_1 + 0x368);
        fVar8 = *(float *)(param_1 + 0x36c);
        fVar10 = fVar9 + *(float *)(param_1 + 0x378);
        fVar5 = fVar8 + *(float *)(param_1 + 0x37c);
      }
      else {
        fVar10 = *(float *)(param_1 + 0x378);
        fVar9 = 0.0;
        fVar5 = *(float *)(param_1 + 0x37c);
        fVar8 = 0.0;
      }
      if ((((fVar9 != *(float *)(param_1 + 0x3b8)) || (fVar8 != *(float *)(param_1 + 0x3bc))) ||
          (fVar10 != *(float *)(param_1 + 0x3c0))) || (fVar5 != *(float *)(param_1 + 0x3c4))) {
        FUN_141857940(param_1);
      }
    }
    if (*(float *)(param_1 + 0x3a4) != *(float *)(param_1 + 0x344)) {
      *(float *)(param_1 + 0x344) = *(float *)(param_1 + 0x3a4);
      (**(code **)(**(longlong **)(param_1 + 0x498) + 0x98))();
    }
    *(byte *)(param_1 + 0x420) = *(byte *)(param_1 + 0x420) & 0xfe;
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfd;
    return;
  }
  if (param_1 + 0x3c8 == 0) {
    fVar5 = 0.0;
    goto switchD_14185cde6_default;
  }
  fVar10 = (float)FCurveSequence::GetSequenceTime(param_1 + 0x3c8);
  pfVar1 = *(float **)(param_1 + 0x3f8);
  fVar10 = (fVar10 - pfVar1[1]) / *pfVar1;
  if (0.0 <= fVar10) {
    if (1.0 <= fVar10) {
      fVar10 = 1.0;
    }
  }
  else {
    fVar10 = 0.0;
  }
  fVar5 = 0.0;
  switch(*(undefined1 *)(pfVar1 + 2)) {
  case 0:
    fVar5 = fVar10;
    break;
  case 1:
    fVar5 = fVar10 * fVar10;
    break;
  case 2:
    fVar5 = (2.0 - fVar10) * fVar10;
    break;
  case 3:
    if (0.5 <= fVar10) {
      fVar10 = ((fVar10 - 0.5) + fVar10) - 0.5;
      fVar5 = ((fVar10 - 2.0) * fVar10 - 1.0) * -0.5;
    }
    else {
      fVar5 = (fVar10 + fVar10) * 0.5 * (fVar10 + fVar10);
    }
    break;
  case 4:
    fVar5 = fVar10 * fVar10 * fVar10;
    break;
  case 5:
    fVar10 = fVar10 - 1.0;
    fVar10 = fVar10 * fVar10 * fVar10;
    goto LAB_14185ceb5;
  case 6:
    fVar10 = fVar10 + fVar10;
    if (fVar10 < 1.0) {
      fVar5 = fVar10 * 0.5 * fVar10 * fVar10;
      break;
    }
    fVar10 = fVar10 + -2.0;
    fVar10 = fVar10 * fVar10 * fVar10 * 0.5;
LAB_14185ceb5:
    fVar5 = fVar10 + 1.0;
  }
switchD_14185cde6_default:
  fVar8 = 0.0;
  fVar10 = *(float *)(param_1 + 0x3a8);
  fVar9 = *(float *)(param_1 + 0x3ac);
  if ((*(byte *)(param_1 + 0x420) & 2) == 0) {
    fVar10 = (*(float *)(param_1 + 0x3b8) - fVar10) * fVar5 + fVar10;
    fVar9 = (*(float *)(param_1 + 0x3bc) - fVar9) * fVar5 + fVar9;
    if ((fVar10 != *(float *)(param_1 + 0x368)) || (fVar9 != *(float *)(param_1 + 0x36c))) {
      SWindow::MoveWindowTo(param_1,CONCAT44(fVar9,fVar10));
    }
  }
  else {
    fVar10 = (*(float *)(param_1 + 0x3b8) - fVar10) * fVar5 + fVar10;
    fVar9 = (*(float *)(param_1 + 0x3bc) - fVar9) * fVar5 + fVar9;
    fVar3 = (*(float *)(param_1 + 0x3c0) - *(float *)(param_1 + 0x3b0)) * fVar5 +
            *(float *)(param_1 + 0x3b0);
    fVar4 = (*(float *)(param_1 + 0x3c4) - *(float *)(param_1 + 0x3b4)) * fVar5 +
            *(float *)(param_1 + 0x3b4);
    if ((*(byte *)(param_1 + 0x351) & 2) == 0) {
      fVar8 = *(float *)(param_1 + 0x368);
      fVar11 = *(float *)(param_1 + 0x36c);
      fVar7 = fVar8 + *(float *)(param_1 + 0x378);
      fVar6 = fVar11 + *(float *)(param_1 + 0x37c);
    }
    else {
      fVar7 = *(float *)(param_1 + 0x378);
      fVar11 = 0.0;
      fVar6 = *(float *)(param_1 + 0x37c);
    }
    if (((fVar10 != fVar8) || (fVar9 != fVar11)) || ((fVar3 != fVar7 || (fVar4 != fVar6)))) {
      SWindow::ReshapeWindow(param_1,CONCAT44(fVar9,fVar10),CONCAT44(fVar4 - fVar9,fVar3 - fVar10));
    }
  }
  fVar10 = (*(float *)(param_1 + 0x3a4) - *(float *)(param_1 + 0x3a0)) * fVar5 +
           *(float *)(param_1 + 0x3a0);
  if (fVar10 == *(float *)(param_1 + 0x344)) {
    return;
  }
  *(float *)(param_1 + 0x344) = fVar10;
                    /* WARNING: Could not recover jumptable at 0x00014185d06a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x498) + 0x98))();
  return;
}



// FUNCTION 14185d180 ToBoundingRect body=189 status=ok
// SIG undefined ToBoundingRect(void)

float * FSlateRotatedRect::ToBoundingRect(float *param_1,float *param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fStack_54;
  
  fVar6 = *param_1 + param_1[4];
  uVar1 = *(undefined8 *)param_1;
  fVar7 = (float)uVar1;
  fVar4 = *param_1 + param_1[2];
  fVar8 = param_1[1] + param_1[5];
  fVar5 = param_1[1] + param_1[3];
  fVar3 = fVar4 + param_1[4];
  fVar2 = fVar6;
  if (fVar4 <= fVar6) {
    fVar2 = fVar4;
  }
  if (fVar6 <= fVar4) {
    fVar6 = fVar4;
  }
  fVar4 = fVar5 + param_1[5];
  if (fVar3 <= fVar2) {
    fVar2 = fVar3;
  }
  if (fVar6 <= fVar3) {
    fVar6 = fVar3;
  }
  if (fVar7 <= fVar2) {
    fVar2 = fVar7;
  }
  if (fVar6 <= fVar7) {
    fVar6 = fVar7;
  }
  *param_2 = fVar2;
  fVar2 = fVar8;
  if (fVar8 <= fVar5) {
    fVar2 = fVar5;
  }
  param_2[2] = fVar6;
  if (fVar5 <= fVar8) {
    fVar8 = fVar5;
  }
  if (fVar2 <= fVar4) {
    fVar2 = fVar4;
  }
  if (fVar4 <= fVar8) {
    fVar8 = fVar4;
  }
  fStack_54 = (float)((ulonglong)uVar1 >> 0x20);
  if (fVar2 <= fStack_54) {
    fVar2 = fStack_54;
  }
  if (fStack_54 <= fVar8) {
    fVar8 = fStack_54;
  }
  param_2[3] = fVar2;
  param_2[1] = fVar8;
  return param_2;
}



// FUNCTION 14185d240 FUN_14185d240 body=228 status=ok
// SIG undefined FUN_14185d240(void)

/* WARNING: Removing unreachable block (ram,0x00014185d2a2) */
/* WARNING: Removing unreachable block (ram,0x00014185d2ae) */
/* WARNING: Removing unreachable block (ram,0x00014185d2c7) */
/* WARNING: Removing unreachable block (ram,0x00014185d2df) */
/* WARNING: Removing unreachable block (ram,0x00014185d2eb) */
/* WARNING: Removing unreachable block (ram,0x00014185d302) */

undefined8 FUN_14185d240(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18;
  
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  FUN_14185d330();
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
  return param_2;
}



// FUNCTION 14185d330 FUN_14185d330 body=359 status=ok
// SIG undefined FUN_14185d330(void)

undefined1 *
FUN_14185d330(longlong *param_1,undefined1 *param_2,undefined1 param_3,longlong param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  undefined1 local_48;
  undefined1 local_47;
  
  local_47 = DAT_1464b9ee8;
  *param_2 = DAT_1464b9ee8;
  *(undefined8 *)(param_2 + 0x128) = 0;
  *(undefined8 *)(param_2 + 0x130) = 0;
  param_2[0x138] = 0;
  *(undefined8 *)(param_2 + 0x140) = 0;
  *(undefined8 *)(param_2 + 0x148) = 0;
  local_48 = local_47;
  *(undefined8 *)(param_2 + 0x150) = 0;
  *(undefined8 *)(param_2 + 0x158) = 0;
  FUN_14185e130(param_1,param_2,0,0,&local_48);
  plVar5 = *(longlong **)(*param_1 + -8 + (longlong)(int)param_1[1] * 0x10);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    iVar7 = (int)plVar5[1];
    bVar8 = iVar7 == 0;
    if (bVar8) {
      *(int *)(plVar5 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    while (!bVar8) {
      LOCK();
      bVar8 = iVar7 == (int)plVar5[1];
      if (bVar8) {
        *(int *)(plVar5 + 1) = iVar7 + 1;
      }
      UNLOCK();
      if (bVar8) goto LAB_14185d3e7;
      LOCK();
      iVar7 = (int)plVar5[1];
      bVar8 = iVar7 == 0;
      if (bVar8) {
        *(int *)(plVar5 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
    }
    plVar5 = (longlong *)0x0;
  }
LAB_14185d3e7:
  iVar7 = *(int *)(param_2 + 0x130) + -1;
  lVar6 = (longlong)iVar7 * 0x48;
  do {
    if (iVar7 < 0) break;
    if (*(char *)(param_4 + 0x30) == '\x03') {
      puVar4 = *(undefined1 **)(param_2 + 0x128);
      if (*(undefined1 **)(param_2 + 0x128) == (undefined1 *)0x0) {
        puVar4 = param_2 + 8;
      }
      if (*(longlong *)(param_5 + 0x38) == *(longlong *)(puVar4 + lVar6 + 0x38)) break;
    }
    cVar3 = FUN_14184bf20(param_2,iVar7,param_3);
    iVar7 = iVar7 + -1;
    lVar6 = lVar6 + -0x48;
  } while (cVar3 == '\0');
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
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14185d4a0 ToString body=628 status=ok
// SIG undefined ToString(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 SWindow::ToString(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_128 [32];
  undefined4 *local_108;
  ulonglong *puStack_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [16];
  undefined1 local_80 [24];
  undefined4 local_68 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_128;
  lVar6 = FUN_14183e490(param_1,local_80);
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_a8,L" Window : {0} ",L"SWindow",L"Window_TitleFmt");
  puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_90,uVar7);
  local_68[0] = 4;
  FText::FText(local_58,lVar6);
  local_108 = local_68;
  local_40 = '\x01';
  puStack_100 = local_38;
  local_f8 = *puVar8;
  local_f0 = puVar8[1];
  if (local_f0 != 0) {
    LOCK();
    *(int *)(local_f0 + 8) = *(int *)(local_f0 + 8) + 1;
    UNLOCK();
  }
  uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_e8,&local_108);
  uVar7 = FText::Format(local_c0,&local_f8,uVar7);
  FText::FText(local_d8,uVar7);
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_b8 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_b8)(local_b8);
      LOCK();
      piVar1 = (int *)((longlong)local_b8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_b8 + 8))(local_b8,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_e8);
  if (local_40 != '\0') {
    local_40 = '\0';
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_50 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
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
  uVar7 = FText::ToString(local_d8);
  FString::FString(param_2,uVar7);
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_d0 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_a0 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  return param_2;
}



// FUNCTION 14185d720 FUN_14185d720 body=656 status=ok
// SIG undefined FUN_14185d720(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14185d720(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_118 [32];
  undefined4 *local_f8;
  ulonglong *puStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined1 local_c0 [16];
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [16];
  undefined1 local_70 [24];
  undefined4 local_58 [4];
  undefined1 local_48 [8];
  longlong *local_40;
  char local_30;
  ulonglong local_28 [2];
  
  local_28[0] = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_e8 = *(undefined8 *)(param_1 + 0x18);
  local_e0 = *(undefined8 *)(param_1 + 0x20);
  local_d8 = *(longlong **)(param_1 + 0x28);
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
    UNLOCK();
  }
  lVar6 = FUN_1417ad2a0(&local_e8,local_70);
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_98,L"AnalogInput Key({0})",L"Events",L"AnalogInput");
  puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_80,uVar7);
  local_58[0] = 4;
  FText::FText(local_48,lVar6);
  local_f8 = local_58;
  local_30 = '\x01';
  puStack_f0 = local_28;
  local_d0 = *puVar8;
  local_c8 = puVar8[1];
  if (local_c8 != 0) {
    LOCK();
    *(int *)(local_c8 + 8) = *(int *)(local_c8 + 8) + 1;
    UNLOCK();
  }
  uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_c0,&local_f8);
  uVar7 = FText::Format(local_b0,&local_d0,uVar7);
  FText::FText(param_2,uVar7);
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_a8 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar1 = (int *)((longlong)local_a8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_a8 + 8))(local_a8,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_c0);
  if (local_30 != '\0') {
    local_30 = '\0';
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_40 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_90 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)local_90 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  plVar4 = local_d8;
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_d8 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_d8)(local_d8);
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
  return param_2;
}



// FUNCTION 14185d9b0 FUN_14185d9b0 body=632 status=ok
// SIG undefined FUN_14185d9b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14185d9b0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 auStack_118 [32];
  wchar_t *local_f8;
  undefined8 local_f0;
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
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_f0 = 2;
  local_f8 = (wchar_t *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
  pwVar6 = local_f8;
  if (0 < (int)local_f0) {
    wcsncpy(local_f8,(wchar_t *)(param_1 + 0x18),1);
    pwVar6[1] = L'\0';
  }
  lVar7 = FText::FromString(local_78,&local_f8);
  uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_a0,L"Char({0})",L"Events",L"Char");
  puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_88,uVar8);
  local_60[0] = 4;
  FText::FText(local_50,lVar7);
  local_e8 = local_60;
  local_38 = '\x01';
  puStack_e0 = &local_30;
  local_d8 = *puVar9;
  local_d0 = puVar9[1];
  if (local_d0 != 0) {
    LOCK();
    *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
    UNLOCK();
  }
  uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_c8,&local_e8);
  uVar8 = FText::Format(local_b8,&local_d8,uVar8);
  FText::FText(param_2,uVar8);
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
  plVar4 = (longlong *)puVar9[1];
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
  plVar4 = *(longlong **)(lVar7 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
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
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_98 + 1;
    lVar7 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  if (local_f8 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14185dc30 ToText body=47 status=ok
// SIG undefined ToText(void)

undefined8 FInputEvent::ToText(undefined8 param_1,undefined8 param_2)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (param_2,L"Unimplemented",L"Events",L"Unimplemented");
  return param_2;
}



// FUNCTION 14185dc60 FUN_14185dc60 body=551 status=ok
// SIG undefined FUN_14185dc60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14185dc60(longlong param_1,undefined8 param_2)

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
  lVar6 = FUN_1417ad2a0(param_1 + 0x18,local_78);
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_a0,L"Key({0})",L"Events",&DAT_144d4b968);
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



// FUNCTION 14185de90 FUN_14185de90 body=551 status=ok
// SIG undefined FUN_14185de90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14185de90(longlong param_1,undefined8 param_2)

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
  lVar6 = FUN_1417ad2a0(param_1 + 0x38,local_78);
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_a0,L"Pointer({0}, {1})",L"Events",L"Pointer");
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



// FUNCTION 14185e0c0 ToWidgetPath body=110 status=ok
// SIG undefined ToWidgetPath(void)

undefined1 * FWeakWidgetPath::ToWidgetPath(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = DAT_1464b9ee8;
  *(undefined8 *)(param_2 + 0x128) = 0;
  *(undefined8 *)(param_2 + 0x130) = 0;
  param_2[0x138] = 0;
  *(undefined8 *)(param_2 + 0x140) = 0;
  *(undefined8 *)(param_2 + 0x148) = 0;
  *(undefined8 *)(param_2 + 0x150) = 0;
  *(undefined8 *)(param_2 + 0x158) = 0;
  FUN_14185e130(param_1);
  return param_2;
}



// FUNCTION 14185e130 FUN_14185e130 body=4555 status=ok
// SIG undefined FUN_14185e130(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_14185e130(longlong *param_1,undefined8 param_2,int param_3,longlong param_4,byte *param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
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
  char cVar17;
  char cVar18;
  int iVar19;
  int iVar20;
  longlong *plVar21;
  longlong *plVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined1 *puVar25;
  undefined4 **ppuVar26;
  longlong *plVar27;
  longlong *plVar28;
  undefined1 *puVar29;
  longlong *plVar30;
  longlong lVar31;
  longlong *plVar32;
  longlong lVar33;
  bool bVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auStack_7e8 [32];
  ulonglong local_7c8;
  longlong local_7c0;
  char local_7b8;
  undefined1 local_7b7 [3];
  uint local_7b4;
  longlong *local_7b0;
  int local_7a8;
  undefined8 local_7a0;
  undefined4 *local_798;
  undefined8 local_790;
  undefined4 *local_788;
  undefined8 local_780;
  longlong local_778;
  longlong *plStack_770;
  longlong local_768;
  longlong *plStack_760;
  int local_758;
  longlong *local_750;
  longlong local_748;
  undefined8 local_740;
  longlong local_738;
  undefined8 local_730;
  longlong local_728;
  longlong *local_720;
  undefined8 local_718;
  longlong *local_710;
  longlong *local_708;
  longlong *local_700;
  longlong local_6f8;
  int local_6f0;
  undefined4 local_6ec;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined4 local_6c8;
  undefined4 uStack_6c4;
  undefined4 uStack_6c0;
  undefined4 uStack_6bc;
  undefined8 local_6b8;
  undefined8 local_6b0;
  longlong local_6a8;
  undefined8 local_6a0;
  undefined8 local_698;
  longlong local_688;
  longlong local_680;
  undefined8 local_678 [2];
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined4 local_648;
  undefined4 uStack_644;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined8 local_638;
  undefined8 local_630;
  longlong local_628;
  undefined8 local_620;
  undefined8 local_618;
  undefined1 local_608 [8];
  longlong *local_600;
  undefined1 local_5f8 [8];
  longlong *local_5f0;
  undefined4 local_5e8;
  undefined4 uStack_5e4;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  undefined4 local_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined4 local_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined8 local_5b8;
  undefined4 local_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined4 local_588;
  undefined4 uStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined4 local_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined8 local_568;
  undefined1 local_548 [64];
  longlong *local_508;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined4 local_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined8 local_490;
  byte local_488 [8];
  undefined1 local_480 [288];
  undefined1 *local_360;
  undefined8 local_358;
  undefined1 local_350;
  undefined1 local_348 [8];
  undefined1 local_340 [320];
  longlong *local_200;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [352];
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_7e8;
  plVar28 = (longlong *)0x0;
  local_7b4 = 0;
  local_7b0 = (longlong *)0x0;
  local_758 = param_3;
  local_728 = param_4;
  local_718 = param_2;
  if (DAT_1469eaf34 == 0) {
    local_7a0 = (longlong *)param_1[3];
    local_788 = (undefined4 *)0x0;
    local_780 = 0;
    local_738 = 0;
    local_730 = 0;
    plVar22 = plVar28;
    plVar21 = local_7a0;
    if (local_7a0 != (longlong *)0x0) {
      LOCK();
      iVar20 = (int)local_7a0[1];
      bVar34 = iVar20 == 0;
      if (bVar34) {
        *(int *)(local_7a0 + 1) = 0;
        iVar20 = 0;
      }
      UNLOCK();
      while (!bVar34) {
        LOCK();
        bVar34 = iVar20 == (int)local_7a0[1];
        if (bVar34) {
          *(int *)(local_7a0 + 1) = iVar20 + 1;
        }
        UNLOCK();
        if (bVar34) {
          if (local_7a0 != (longlong *)0x0) {
            local_7b0 = (longlong *)param_1[2];
          }
          goto LAB_14185eb73;
        }
        LOCK();
        iVar20 = (int)local_7a0[1];
        bVar34 = iVar20 == 0;
        if (bVar34) {
          *(int *)(local_7a0 + 1) = 0;
          iVar20 = 0;
        }
        UNLOCK();
      }
      local_7a0 = (longlong *)0x0;
      plVar21 = local_7a0;
    }
LAB_14185eb73:
    while ((uVar5 = local_730, plVar30 = local_7b0, iVar20 = (int)plVar22, -1 < iVar20 &&
           (iVar20 < (int)param_1[1]))) {
      plVar27 = (longlong *)((longlong)iVar20 * 0x10 + *param_1);
      plVar22 = (longlong *)plVar27[1];
      plVar30 = plVar22;
      plVar32 = plVar28;
      if (plVar22 != (longlong *)0x0) {
        LOCK();
        iVar19 = (int)plVar22[1];
        bVar34 = iVar19 == 0;
        if (bVar34) {
          *(int *)(plVar22 + 1) = 0;
          iVar19 = 0;
        }
        UNLOCK();
        while (plVar30 = plVar28, !bVar34) {
          LOCK();
          bVar34 = iVar19 == (int)plVar22[1];
          if (bVar34) {
            *(int *)(plVar22 + 1) = iVar19 + 1;
          }
          UNLOCK();
          if (bVar34) {
            plVar30 = plVar22;
            plVar32 = (longlong *)0x0;
            if (plVar22 != (longlong *)0x0) {
              plVar32 = (longlong *)*plVar27;
            }
            break;
          }
          LOCK();
          iVar19 = (int)plVar22[1];
          bVar34 = iVar19 == 0;
          if (bVar34) {
            *(int *)(plVar22 + 1) = 0;
            iVar19 = 0;
          }
          UNLOCK();
        }
      }
      lVar31 = (longlong)(int)local_730;
      iVar19 = (int)local_730 + 1;
      local_730 = CONCAT44(local_730._4_4_,iVar19);
      if (local_730._4_4_ < iVar19) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_738,uVar5 & 0xffffffff);
      }
      plVar22 = (longlong *)(lVar31 * 0x10 + local_738);
      *plVar22 = (longlong)plVar32;
      plVar22[1] = (longlong)plVar30;
      plVar22 = (longlong *)(ulonglong)(iVar20 + 1);
    }
    cVar18 = '\0';
    if (local_7b0 != (longlong *)0x0) {
      cVar18 = '\x01';
      SWindow::GetWindowGeometryInScreen(local_7b0,&local_4f8);
      if (plVar21 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
        UNLOCK();
      }
      uVar35 = (undefined4)local_4c8;
      uVar36 = (undefined4)((ulonglong)local_4c8 >> 0x20);
      local_568 = local_4c8;
      local_598 = (undefined4)local_4f8;
      uStack_594 = local_4f8._4_4_;
      uStack_590 = (undefined4)uStack_4f0;
      uStack_58c = uStack_4f0._4_4_;
      local_588 = (undefined4)local_4e8;
      uStack_584 = local_4e8._4_4_;
      uStack_580 = (undefined4)uStack_4e0;
      uStack_57c = uStack_4e0._4_4_;
      local_578 = local_4d8;
      uStack_574 = uStack_4d4;
      uStack_570 = uStack_4d0;
      uStack_56c = uStack_4cc;
      if (plVar21 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
        UNLOCK();
        LOCK();
        plVar22 = plVar21 + 1;
        lVar31 = *plVar22;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)lVar31 == 1) {
          (**(code **)*plVar21)(plVar21);
          LOCK();
          piVar1 = (int *)((longlong)plVar21 + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*plVar21 + 8))(plVar21,1);
          }
        }
        LOCK();
        *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
        UNLOCK();
        uVar35 = (undefined4)local_568;
        uVar36 = (undefined4)((ulonglong)local_568 >> 0x20);
      }
      uVar16 = uStack_56c;
      uVar15 = uStack_570;
      uVar14 = uStack_574;
      uVar13 = local_578;
      uVar12 = uStack_57c;
      uVar11 = uStack_580;
      uVar10 = uStack_584;
      uVar9 = local_588;
      uVar8 = uStack_58c;
      uVar7 = uStack_590;
      uVar6 = uStack_594;
      uVar4 = local_598;
      local_780 = CONCAT44(local_780._4_4_,1);
      TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(&local_788,0);
      *local_788 = uVar4;
      local_788[1] = uVar6;
      local_788[2] = uVar7;
      local_788[3] = uVar8;
      local_788[4] = uVar9;
      local_788[5] = uVar10;
      local_788[6] = uVar11;
      local_788[7] = uVar12;
      local_788[8] = uVar13;
      local_788[9] = uVar14;
      local_788[10] = uVar15;
      local_788[0xb] = uVar16;
      *(ulonglong *)(local_788 + 0xc) = CONCAT44(uVar36,uVar35);
      *(longlong **)(local_788 + 0xe) = plVar30;
      *(longlong **)(local_788 + 0x10) = plVar21;
      if (plVar21 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
        UNLOCK();
      }
      *(undefined8 *)(local_788 + 0x12) = 0;
      *(undefined8 *)(local_788 + 0x14) = 0;
      if (plVar21 != (longlong *)0x0) {
        LOCK();
        plVar22 = plVar21 + 1;
        lVar31 = *plVar22;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)lVar31 == 1) {
          (**(code **)*plVar21)(plVar21);
          LOCK();
          piVar1 = (int *)((longlong)plVar21 + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*plVar21 + 8))(plVar21,1);
          }
        }
        LOCK();
        plVar22 = plVar21 + 1;
        lVar31 = *plVar22;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)lVar31 == 1) {
          (**(code **)*plVar21)(plVar21);
          LOCK();
          piVar1 = (int *)((longlong)plVar21 + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*plVar21 + 8))(plVar21,1);
          }
        }
        LOCK();
        plVar22 = plVar21 + 1;
        lVar31 = *plVar22;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)lVar31 == 1) {
          (**(code **)*plVar21)(plVar21);
          LOCK();
          piVar1 = (int *)((longlong)plVar21 + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*plVar21 + 8))(plVar21,1);
          }
        }
      }
      local_7a8 = (int)local_730 + -1;
      local_7b0 = (longlong *)(local_738 + 8);
      local_360 = (undefined1 *)0x0;
      local_488[0] = *param_5;
      local_7b4 = 0;
      local_358 = 0;
      local_350 = 1;
      local_768 = 0;
      plStack_760 = (longlong *)0x0;
      plVar22 = plVar28;
      do {
        if (local_7a8 <= (int)plVar22) break;
        local_710 = (longlong *)*local_7b0;
        plVar22 = (longlong *)local_7b0[-1];
        local_720 = local_710 + 1;
        if (local_710 != (longlong *)0x0) {
          LOCK();
          *(int *)local_720 = (int)*local_720 + 1;
          UNLOCK();
        }
        cVar18 = '\0';
        cVar17 = local_7b8;
        local_750 = plVar22;
        if (plVar22 != (longlong *)0x0) {
          FUN_1418569d0(local_480,0);
          (**(code **)(*plVar22 + 0x200))(plVar22,&local_4f8,local_488);
          cVar18 = '\0';
          puVar29 = local_360;
          plVar30 = plVar28;
          plVar32 = plVar28;
          do {
            iVar20 = (int)plVar32;
            plVar21 = local_7a0;
            cVar17 = cVar18;
            if ((int)local_358 <= iVar20) break;
            puVar25 = local_480;
            if (puVar29 != (undefined1 *)0x0) {
              puVar25 = puVar29;
            }
            if ((local_7b0[1] != 0) &&
               (local_7b0[1] == *(longlong *)(puVar25 + 0x38 + (longlong)plVar30))) {
              if ((local_728 != 0) && (local_768 == 0)) {
                local_7c0 = local_728 + 0x20;
                local_7c8 = local_728 + 0x18;
                plVar21 = (longlong *)
                          (**(code **)(*plVar22 + 0x118))
                                    (plVar22,local_5f8,puVar25 + 0x38 + (longlong)plVar30,&local_4f8
                                    );
                if (&local_768 != plVar21) {
                  local_768 = *plVar21;
                  *plVar21 = 0;
                  SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_760,plVar21 + 1);
                }
                plVar21 = local_5f0;
                puVar29 = local_360;
                if (local_5f0 != (longlong *)0x0) {
                  LOCK();
                  plVar22 = local_5f0 + 1;
                  lVar31 = *plVar22;
                  *(int *)plVar22 = (int)*plVar22 + -1;
                  UNLOCK();
                  if ((int)lVar31 == 1) {
                    (**(code **)*local_5f0)(local_5f0);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar21 + 0xc);
                    iVar19 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    puVar29 = local_360;
                    if (iVar19 == 1) {
                      (**(code **)(*plVar21 + 8))(plVar21,1);
                      puVar29 = local_360;
                    }
                  }
                }
              }
              uVar5 = local_780;
              cVar18 = '\x01';
              puVar25 = local_480;
              if (puVar29 != (undefined1 *)0x0) {
                puVar25 = puVar29;
              }
              puVar23 = (undefined8 *)(puVar25 + (longlong)plVar30);
              local_6e8 = *puVar23;
              uStack_6e0 = puVar23[1];
              lVar31 = puVar23[8];
              local_6b0 = puVar23[7];
              local_6d8 = puVar23[2];
              uStack_6d0 = puVar23[3];
              local_6c8 = *(undefined4 *)(puVar23 + 4);
              uStack_6c4 = *(undefined4 *)((longlong)puVar23 + 0x24);
              uStack_6c0 = *(undefined4 *)(puVar23 + 5);
              uStack_6bc = *(undefined4 *)((longlong)puVar23 + 0x2c);
              local_6b8 = puVar23[6];
              if (lVar31 != 0) {
                LOCK();
                *(int *)(lVar31 + 8) = *(int *)(lVar31 + 8) + 1;
                UNLOCK();
              }
              if (plStack_760 != (longlong *)0x0) {
                LOCK();
                *(int *)(plStack_760 + 1) = (int)plStack_760[1] + 1;
                UNLOCK();
              }
              lVar33 = (longlong)(int)local_780;
              iVar19 = (int)local_780 + 1;
              local_780 = CONCAT44(local_780._4_4_,iVar19);
              local_6a8 = lVar31;
              if (local_780._4_4_ < iVar19) {
                TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow
                          (&local_788,uVar5 & 0xffffffff);
              }
              puVar23 = (undefined8 *)(local_788 + lVar33 * 0x16);
              *puVar23 = local_6e8;
              puVar23[1] = uStack_6e0;
              puVar23[2] = local_6d8;
              puVar23[3] = uStack_6d0;
              *(undefined4 *)(puVar23 + 4) = local_6c8;
              *(undefined4 *)((longlong)puVar23 + 0x24) = uStack_6c4;
              *(undefined4 *)(puVar23 + 5) = uStack_6c0;
              *(undefined4 *)((longlong)puVar23 + 0x2c) = uStack_6bc;
              puVar23[6] = local_6b8;
              puVar23[7] = local_6b0;
              puVar23[8] = lVar31;
              if (lVar31 != 0) {
                LOCK();
                *(int *)(lVar31 + 8) = *(int *)(lVar31 + 8) + 1;
                UNLOCK();
              }
              puVar23[9] = local_768;
              puVar23[10] = plStack_760;
              local_698 = 0;
              local_6a0 = 0;
              TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_6a0);
              TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_6b0);
              puVar29 = local_480;
              if (local_360 != (undefined1 *)0x0) {
                puVar29 = local_360;
              }
              puVar23 = (undefined8 *)(puVar29 + (longlong)iVar20 * 0x48);
              plVar22 = local_750;
              puVar29 = local_360;
              if (&local_4f8 != puVar23) {
                local_4f8 = *puVar23;
                uStack_4f0 = puVar23[1];
                local_4e8 = puVar23[2];
                uStack_4e0 = puVar23[3];
                local_4d8 = *(undefined4 *)(puVar23 + 4);
                uStack_4d4 = *(undefined4 *)((longlong)puVar23 + 0x24);
                uStack_4d0 = *(undefined4 *)(puVar23 + 5);
                uStack_4cc = *(undefined4 *)((longlong)puVar23 + 0x2c);
                local_4c8 = puVar23[6];
              }
            }
            plVar32 = (longlong *)(ulonglong)(iVar20 + 1);
            plVar30 = plVar30 + 9;
            plVar21 = local_7a0;
            cVar17 = cVar18;
          } while (cVar18 == '\0');
        }
        local_7b8 = cVar17;
        plVar30 = local_710;
        plVar22 = local_7b0;
        if ((cVar18 == '\0') && (local_758 == 1)) {
          if (local_710 != (longlong *)0x0) {
            LOCK();
            lVar31 = *local_720;
            *(int *)local_720 = (int)*local_720 + -1;
            UNLOCK();
            if ((int)lVar31 == 1) {
              (**(code **)*local_710)(local_710);
              LOCK();
              piVar1 = (int *)((longlong)plVar30 + 0xc);
              iVar20 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar20 == 1) {
                (**(code **)(*plVar30 + 8))(plVar30,1);
              }
            }
          }
          plVar28 = plStack_760;
          if (plStack_760 != (longlong *)0x0) {
            LOCK();
            plVar22 = plStack_760 + 1;
            lVar31 = *plVar22;
            *(int *)plVar22 = (int)*plVar22 + -1;
            UNLOCK();
            if ((int)lVar31 == 1) {
              (**(code **)*plStack_760)(plStack_760);
              LOCK();
              piVar1 = (int *)((longlong)plVar28 + 0xc);
              iVar20 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar20 == 1) {
                (**(code **)(*plStack_760 + 8))(plStack_760,1);
              }
            }
          }
          FUN_140456b10(local_480);
          bVar34 = true;
          goto LAB_14185f273;
        }
        if (local_710 != (longlong *)0x0) {
          LOCK();
          plVar32 = local_710 + 1;
          lVar31 = *plVar32;
          *(int *)plVar32 = (int)*plVar32 + -1;
          UNLOCK();
          if ((int)lVar31 == 1) {
            (**(code **)*local_710)(local_710);
            LOCK();
            piVar1 = (int *)((longlong)plVar30 + 0xc);
            iVar20 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar20 == 1) {
              (**(code **)(*plVar30 + 8))(plVar30,1);
            }
          }
        }
        local_7b0 = plVar22 + 2;
        local_7b4 = local_7b4 + 1;
        plVar22 = (longlong *)(ulonglong)local_7b4;
      } while (cVar18 != '\0');
      plVar28 = plStack_760;
      if (plStack_760 != (longlong *)0x0) {
        LOCK();
        plVar22 = plStack_760 + 1;
        lVar31 = *plVar22;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)lVar31 == 1) {
          (**(code **)*plStack_760)(plStack_760);
          LOCK();
          piVar1 = (int *)((longlong)plVar28 + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*plStack_760 + 8))(plStack_760,1);
          }
        }
      }
      FUN_140456b10(local_480);
    }
    local_678[0] = 0;
    local_7c8 = local_7c8 & 0xffffffff00000000;
    TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_>::CopyToEmpty<FWidgetAndPointer,int>
              (local_678,local_788,local_780 & 0xffffffff,0);
    uVar24 = FUN_1417f3830(local_1e8,local_678);
    FUN_1417f9510(local_718,uVar24);
    FUN_140458830(local_1e8);
    bVar34 = cVar18 == '\0';
LAB_14185f273:
    if (plVar21 != (longlong *)0x0) {
      LOCK();
      plVar28 = plVar21 + 1;
      lVar31 = *plVar28;
      *(int *)plVar28 = (int)*plVar28 + -1;
      UNLOCK();
      if ((int)lVar31 == 1) {
        (**(code **)*plVar21)(plVar21);
        LOCK();
        piVar1 = (int *)((longlong)plVar21 + 0xc);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*plVar21 + 8))(plVar21,1);
        }
      }
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_738);
    ppuVar26 = &local_788;
  }
  else {
    plVar21 = (longlong *)param_1[3];
    local_798 = (undefined4 *)0x0;
    local_790 = 0;
    local_748 = 0;
    local_740 = 0;
    plVar22 = plVar28;
    plVar30 = plVar21;
    if (plVar21 != (longlong *)0x0) {
      LOCK();
      iVar20 = (int)plVar21[1];
      bVar34 = iVar20 == 0;
      if (bVar34) {
        *(int *)(plVar21 + 1) = 0;
        iVar20 = 0;
      }
      UNLOCK();
      while (plVar30 = plVar28, !bVar34) {
        LOCK();
        bVar34 = iVar20 == (int)plVar21[1];
        if (bVar34) {
          *(int *)(plVar21 + 1) = iVar20 + 1;
        }
        UNLOCK();
        if (bVar34) {
          plVar30 = plVar21;
          if (plVar21 != (longlong *)0x0) {
            local_7b0 = (longlong *)param_1[2];
          }
          break;
        }
        LOCK();
        iVar20 = (int)plVar21[1];
        bVar34 = iVar20 == 0;
        if (bVar34) {
          *(int *)(plVar21 + 1) = 0;
          iVar20 = 0;
        }
        UNLOCK();
      }
    }
    while ((uVar5 = local_740, plVar21 = local_7b0, iVar20 = (int)plVar22, -1 < iVar20 &&
           (iVar20 < (int)param_1[1]))) {
      plVar27 = (longlong *)((longlong)iVar20 * 0x10 + *param_1);
      plVar21 = (longlong *)plVar27[1];
      plVar22 = plVar21;
      plVar32 = plVar28;
      if (plVar21 != (longlong *)0x0) {
        LOCK();
        iVar19 = (int)plVar21[1];
        bVar34 = iVar19 == 0;
        if (bVar34) {
          *(int *)(plVar21 + 1) = 0;
          iVar19 = 0;
        }
        UNLOCK();
        while (plVar22 = plVar28, !bVar34) {
          LOCK();
          bVar34 = iVar19 == (int)plVar21[1];
          if (bVar34) {
            *(int *)(plVar21 + 1) = iVar19 + 1;
          }
          UNLOCK();
          if (bVar34) {
            plVar22 = plVar21;
            plVar32 = (longlong *)0x0;
            if (plVar21 != (longlong *)0x0) {
              plVar32 = (longlong *)*plVar27;
            }
            break;
          }
          LOCK();
          iVar19 = (int)plVar21[1];
          bVar34 = iVar19 == 0;
          if (bVar34) {
            *(int *)(plVar21 + 1) = 0;
            iVar19 = 0;
          }
          UNLOCK();
        }
      }
      lVar31 = (longlong)(int)local_740;
      iVar19 = (int)local_740 + 1;
      local_740 = CONCAT44(local_740._4_4_,iVar19);
      if (local_740._4_4_ < iVar19) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_748,uVar5 & 0xffffffff);
      }
      plVar21 = (longlong *)(lVar31 * 0x10 + local_748);
      *plVar21 = (longlong)plVar32;
      plVar21[1] = (longlong)plVar22;
      plVar22 = (longlong *)(ulonglong)(iVar20 + 1);
    }
    cVar18 = '\0';
    if (local_7b0 != (longlong *)0x0) {
      cVar18 = '\x01';
      SWindow::GetWindowGeometryInScreen(local_7b0,&local_4c0);
      if (plVar30 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar30 + 1) = (int)plVar30[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar30 + 1) = (int)plVar30[1] + 1;
        UNLOCK();
      }
      uVar35 = (undefined4)local_490;
      uVar36 = (undefined4)((ulonglong)local_490 >> 0x20);
      local_5b8 = local_490;
      local_5e8 = (undefined4)local_4c0;
      uStack_5e4 = local_4c0._4_4_;
      uStack_5e0 = (undefined4)uStack_4b8;
      uStack_5dc = uStack_4b8._4_4_;
      local_5d8 = (undefined4)local_4b0;
      uStack_5d4 = local_4b0._4_4_;
      uStack_5d0 = (undefined4)uStack_4a8;
      uStack_5cc = uStack_4a8._4_4_;
      local_5c8 = local_4a0;
      uStack_5c4 = uStack_49c;
      uStack_5c0 = uStack_498;
      uStack_5bc = uStack_494;
      if (plVar30 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar30 + 1) = (int)plVar30[1] + 1;
        UNLOCK();
        LOCK();
        plVar22 = plVar30 + 1;
        lVar31 = *plVar22;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)lVar31 == 1) {
          (**(code **)*plVar30)(plVar30);
          LOCK();
          piVar1 = (int *)((longlong)plVar30 + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*plVar30 + 8))(plVar30,1);
          }
        }
        LOCK();
        *(int *)(plVar30 + 1) = (int)plVar30[1] + 1;
        UNLOCK();
        uVar35 = (undefined4)local_5b8;
        uVar36 = (undefined4)((ulonglong)local_5b8 >> 0x20);
      }
      uVar16 = uStack_5bc;
      uVar15 = uStack_5c0;
      uVar14 = uStack_5c4;
      uVar13 = local_5c8;
      uVar12 = uStack_5cc;
      uVar11 = uStack_5d0;
      uVar10 = uStack_5d4;
      uVar9 = local_5d8;
      uVar8 = uStack_5dc;
      uVar7 = uStack_5e0;
      uVar6 = uStack_5e4;
      uVar4 = local_5e8;
      local_790 = CONCAT44(local_790._4_4_,1);
      TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(&local_798,0);
      *local_798 = uVar4;
      local_798[1] = uVar6;
      local_798[2] = uVar7;
      local_798[3] = uVar8;
      local_798[4] = uVar9;
      local_798[5] = uVar10;
      local_798[6] = uVar11;
      local_798[7] = uVar12;
      local_798[8] = uVar13;
      local_798[9] = uVar14;
      local_798[10] = uVar15;
      local_798[0xb] = uVar16;
      *(ulonglong *)(local_798 + 0xc) = CONCAT44(uVar36,uVar35);
      *(longlong **)(local_798 + 0xe) = plVar21;
      *(longlong **)(local_798 + 0x10) = plVar30;
      if (plVar30 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar30 + 1) = (int)plVar30[1] + 1;
        UNLOCK();
      }
      *(undefined8 *)(local_798 + 0x12) = 0;
      *(undefined8 *)(local_798 + 0x14) = 0;
      if (plVar30 != (longlong *)0x0) {
        LOCK();
        plVar21 = plVar30 + 1;
        lVar31 = *plVar21;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)lVar31 == 1) {
          (**(code **)*plVar30)(plVar30);
          LOCK();
          piVar1 = (int *)((longlong)plVar30 + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*plVar30 + 8))(plVar30,1);
          }
        }
        LOCK();
        plVar21 = plVar30 + 1;
        lVar31 = *plVar21;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)lVar31 == 1) {
          (**(code **)*plVar30)(plVar30);
          LOCK();
          piVar1 = (int *)((longlong)plVar30 + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*plVar30 + 8))(plVar30,1);
          }
        }
        LOCK();
        plVar21 = plVar30 + 1;
        lVar31 = *plVar21;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)lVar31 == 1) {
          (**(code **)*plVar30)(plVar30);
          LOCK();
          piVar1 = (int *)((longlong)plVar30 + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*plVar30 + 8))(plVar30,1);
          }
        }
      }
      local_7a8 = (int)local_740 + -1;
      local_7b0 = (longlong *)(local_748 + 0x10);
      local_778 = 0;
      plStack_770 = (longlong *)0x0;
      local_7a0 = (longlong *)((ulonglong)local_7a0._4_4_ << 0x20);
      plVar21 = local_710;
      plVar22 = plVar28;
      do {
        if (local_7a8 <= (int)plVar22) break;
        plVar32 = (longlong *)local_7b0[-1];
        plVar27 = (longlong *)local_7b0[-2];
        if (plVar32 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar32 + 1) = (int)plVar32[1] + 1;
          UNLOCK();
        }
        local_7b8 = '\0';
        iVar20 = (int)plVar22;
        if (plVar27 != (longlong *)0x0) {
          bVar3 = *param_5;
          if ((((int)plVar27[0x18] != 0) && ((longlong *)plVar27[0x17] != (longlong *)0x0)) &&
             (cVar18 = (**(code **)(*(longlong *)plVar27[0x17] + 0x18))(), cVar18 != '\0')) {
            plVar22 = plVar28;
            if ((int)plVar27[0x18] != 0) {
              plVar22 = (longlong *)plVar27[0x17];
            }
            (**(code **)(*plVar22 + 0x38))(plVar22,local_7b7);
            *(undefined1 *)(plVar27 + 0x16) = local_7b7[0];
          }
          if ((*(byte *)(plVar27 + 0x16) & bVar3) != 0) {
            if (plVar32 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar32 + 1) = (int)plVar32[1] + 1;
              UNLOCK();
            }
            lVar31 = *local_7b0;
            plVar22 = plVar21;
            if (lVar31 != 0) {
              plVar21 = *(longlong **)(lVar31 + 0x188);
              local_7b4 = local_7b4 | 1;
              plVar22 = plVar21;
              if (plVar21 != (longlong *)0x0) {
                LOCK();
                iVar20 = (int)plVar21[1];
                bVar34 = iVar20 == 0;
                if (bVar34) {
                  *(int *)(plVar21 + 1) = 0;
                  iVar20 = 0;
                }
                UNLOCK();
                while (plVar22 = plVar28, !bVar34) {
                  LOCK();
                  bVar34 = iVar20 == (int)plVar21[1];
                  if (bVar34) {
                    *(int *)(plVar21 + 1) = iVar20 + 1;
                  }
                  UNLOCK();
                  if (bVar34) {
                    plVar22 = plVar21;
                    if (((plVar21 != (longlong *)0x0) &&
                        (*(longlong **)(lVar31 + 0x180) != (longlong *)0x0)) &&
                       (*(longlong **)(lVar31 + 0x180) == plVar27)) {
                      bVar34 = true;
                      goto LAB_14185e55d;
                    }
                    break;
                  }
                  LOCK();
                  iVar20 = (int)plVar21[1];
                  bVar34 = iVar20 == 0;
                  if (bVar34) {
                    *(int *)(plVar21 + 1) = 0;
                    iVar20 = 0;
                  }
                  UNLOCK();
                }
              }
            }
            bVar34 = false;
            plVar21 = plVar22;
LAB_14185e55d:
            local_708 = plVar27;
            local_700 = plVar32;
            if (((local_7b4 & 1) != 0) &&
               (local_7b4 = local_7b4 & 0xfffffffe, plVar21 != (longlong *)0x0)) {
              LOCK();
              plVar22 = plVar21 + 1;
              lVar31 = *plVar22;
              *(int *)plVar22 = (int)*plVar22 + -1;
              UNLOCK();
              if ((int)lVar31 == 1) {
                (**(code **)*plVar21)(plVar21);
                LOCK();
                piVar1 = (int *)((longlong)plVar21 + 0xc);
                iVar20 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar20 == 1) {
                  (**(code **)(*plVar21 + 8))(plVar21,1);
                }
              }
            }
            if (bVar34) {
              if ((local_728 != 0) && (local_778 == 0)) {
                local_7c8 = local_728 + 0x18;
                local_7c0 = local_728 + 0x20;
                plVar22 = (longlong *)
                          (**(code **)(*plVar27 + 0x118))(plVar27,local_608,&local_708,&local_4c0);
                if (&local_778 != plVar22) {
                  local_778 = *plVar22;
                  *plVar22 = 0;
                  SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_770,plVar22 + 1);
                }
                plVar22 = local_600;
                if (local_600 != (longlong *)0x0) {
                  LOCK();
                  plVar27 = local_600 + 1;
                  lVar31 = *plVar27;
                  *(int *)plVar27 = (int)*plVar27 + -1;
                  UNLOCK();
                  if ((int)lVar31 == 1) {
                    (**(code **)*local_600)(local_600);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar22 + 0xc);
                    iVar20 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar20 == 1) {
                      (**(code **)(*plVar22 + 8))(plVar22,1);
                    }
                  }
                }
              }
              local_7b8 = '\x01';
              local_688 = *local_7b0;
              local_680 = local_7b0[1];
              if (local_680 != 0) {
                LOCK();
                *(int *)(local_680 + 8) = *(int *)(local_680 + 8) + 1;
                UNLOCK();
              }
              puVar23 = (undefined8 *)
                        FArrangedWidget::FArrangedWidget(local_548,&local_688,local_688 + 0x4c);
              uVar5 = local_790;
              local_668 = *puVar23;
              uStack_660 = puVar23[1];
              lVar31 = puVar23[8];
              local_630 = puVar23[7];
              local_658 = puVar23[2];
              uStack_650 = puVar23[3];
              local_648 = *(undefined4 *)(puVar23 + 4);
              uStack_644 = *(undefined4 *)((longlong)puVar23 + 0x24);
              uStack_640 = *(undefined4 *)(puVar23 + 5);
              uStack_63c = *(undefined4 *)((longlong)puVar23 + 0x2c);
              local_638 = puVar23[6];
              if (lVar31 != 0) {
                LOCK();
                *(int *)(lVar31 + 8) = *(int *)(lVar31 + 8) + 1;
                UNLOCK();
              }
              if (plStack_770 != (longlong *)0x0) {
                LOCK();
                *(int *)(plStack_770 + 1) = (int)plStack_770[1] + 1;
                UNLOCK();
              }
              lVar33 = (longlong)(int)local_790;
              iVar20 = (int)local_790 + 1;
              local_790 = CONCAT44(local_790._4_4_,iVar20);
              local_628 = lVar31;
              if (local_790._4_4_ < iVar20) {
                TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow
                          (&local_798,uVar5 & 0xffffffff);
              }
              puVar23 = (undefined8 *)(local_798 + lVar33 * 0x16);
              *puVar23 = local_668;
              puVar23[1] = uStack_660;
              puVar23[2] = local_658;
              puVar23[3] = uStack_650;
              *(undefined4 *)(puVar23 + 4) = local_648;
              *(undefined4 *)((longlong)puVar23 + 0x24) = uStack_644;
              *(undefined4 *)(puVar23 + 5) = uStack_640;
              *(undefined4 *)((longlong)puVar23 + 0x2c) = uStack_63c;
              puVar23[6] = local_638;
              puVar23[7] = local_630;
              puVar23[8] = lVar31;
              if (lVar31 != 0) {
                LOCK();
                *(int *)(lVar31 + 8) = *(int *)(lVar31 + 8) + 1;
                UNLOCK();
              }
              puVar23[9] = local_778;
              puVar23[10] = plStack_770;
              local_618 = 0;
              local_620 = 0;
              FWidgetAndPointer::~FWidgetAndPointer(&local_668);
              plVar22 = local_508;
              if (local_508 != (longlong *)0x0) {
                LOCK();
                plVar27 = local_508 + 1;
                lVar31 = *plVar27;
                *(int *)plVar27 = (int)*plVar27 + -1;
                UNLOCK();
                if ((int)lVar31 == 1) {
                  (**(code **)*local_508)(local_508);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar22 + 0xc);
                  iVar20 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar20 == 1) {
                    (**(code **)(*plVar22 + 8))(plVar22,1);
                  }
                }
              }
              if (&local_4c0 != (undefined8 *)((longlong)local_708 + 0x4c)) {
                local_4c0 = *(undefined8 *)((longlong)local_708 + 0x4c);
                uStack_4b8 = *(undefined8 *)((longlong)local_708 + 0x54);
                local_4b0 = *(undefined8 *)((longlong)local_708 + 0x5c);
                uStack_4a8 = *(undefined8 *)((longlong)local_708 + 100);
                local_4a0 = *(undefined4 *)((longlong)local_708 + 0x6c);
                uStack_49c = (undefined4)local_708[0xe];
                uStack_498 = *(undefined4 *)((longlong)local_708 + 0x74);
                uStack_494 = (undefined4)local_708[0xf];
                local_490 = *(undefined8 *)((longlong)local_708 + 0x7c);
              }
            }
            plVar22 = local_700;
            if (local_700 != (longlong *)0x0) {
              LOCK();
              plVar27 = local_700 + 1;
              lVar31 = *plVar27;
              *(int *)plVar27 = (int)*plVar27 + -1;
              UNLOCK();
              if ((int)lVar31 == 1) {
                (**(code **)*local_700)(local_700);
                LOCK();
                piVar1 = (int *)((longlong)plVar22 + 0xc);
                iVar20 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar20 == 1) {
                  (**(code **)(*plVar22 + 8))(plVar22,1);
                }
              }
            }
          }
          iVar20 = (int)local_7a0;
        }
        cVar18 = local_7b8;
        if ((local_7b8 == '\0') && (local_758 == 1)) {
          if (plVar32 != (longlong *)0x0) {
            LOCK();
            plVar28 = plVar32 + 1;
            lVar31 = *plVar28;
            *(int *)plVar28 = (int)*plVar28 + -1;
            UNLOCK();
            if ((int)lVar31 == 1) {
              (**(code **)*plVar32)(plVar32);
              LOCK();
              piVar1 = (int *)((longlong)plVar32 + 0xc);
              iVar20 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar20 == 1) {
                (**(code **)(*plVar32 + 8))(plVar32,1);
              }
            }
          }
          plVar28 = plStack_770;
          if (plStack_770 != (longlong *)0x0) {
            LOCK();
            plVar21 = plStack_770 + 1;
            lVar31 = *plVar21;
            *(int *)plVar21 = (int)*plVar21 + -1;
            UNLOCK();
            if ((int)lVar31 == 1) {
              (**(code **)*plStack_770)(plStack_770);
              LOCK();
              piVar1 = (int *)((longlong)plVar28 + 0xc);
              iVar20 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar20 == 1) {
                (**(code **)(*plStack_770 + 8))(plStack_770,1);
              }
            }
          }
          bVar34 = true;
          goto LAB_14185eace;
        }
        if (plVar32 != (longlong *)0x0) {
          LOCK();
          plVar22 = plVar32 + 1;
          lVar31 = *plVar22;
          *(int *)plVar22 = (int)*plVar22 + -1;
          UNLOCK();
          if ((int)lVar31 == 1) {
            (**(code **)*plVar32)(plVar32);
            LOCK();
            piVar1 = (int *)((longlong)plVar32 + 0xc);
            iVar19 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar19 == 1) {
              (**(code **)(*plVar32 + 8))(plVar32,1);
            }
          }
        }
        plVar22 = (longlong *)(ulonglong)(iVar20 + 1U);
        local_7b0 = local_7b0 + 2;
        local_7a0 = (longlong *)CONCAT44(local_7a0._4_4_,iVar20 + 1U);
      } while (cVar18 != '\0');
      plVar28 = plStack_770;
      if (plStack_770 != (longlong *)0x0) {
        LOCK();
        plVar21 = plStack_770 + 1;
        lVar31 = *plVar21;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)lVar31 == 1) {
          (**(code **)*plStack_770)(plStack_770);
          LOCK();
          piVar1 = (int *)((longlong)plVar28 + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*plStack_770 + 8))(plStack_770,1);
          }
        }
      }
    }
    iVar20 = (int)local_790;
    local_6f8 = 0;
    local_6f0 = (int)local_790;
    if ((int)local_790 == 0) {
      local_6ec = 0;
    }
    else {
      TArray<FCloudFileHeader,FDefaultAllocator>::ResizeForCopy(&local_6f8,local_790 & 0xffffffff,0)
      ;
      lVar31 = (longlong)local_798 - local_6f8;
      plVar28 = (longlong *)(local_6f8 + 0x50);
      do {
        plVar21 = (longlong *)(lVar31 + -0x50 + (longlong)plVar28);
        lVar33 = plVar21[1];
        plVar28[-10] = *plVar21;
        plVar28[-9] = lVar33;
        plVar21 = (longlong *)(lVar31 + -0x40 + (longlong)plVar28);
        lVar33 = plVar21[1];
        plVar28[-8] = *plVar21;
        plVar28[-7] = lVar33;
        puVar2 = (undefined4 *)(lVar31 + -0x30 + (longlong)plVar28);
        uVar35 = puVar2[1];
        uVar36 = puVar2[2];
        uVar4 = puVar2[3];
        *(undefined4 *)(plVar28 + -6) = *puVar2;
        *(undefined4 *)((longlong)plVar28 + -0x2c) = uVar35;
        *(undefined4 *)(plVar28 + -5) = uVar36;
        *(undefined4 *)((longlong)plVar28 + -0x24) = uVar4;
        plVar28[-4] = *(longlong *)(lVar31 + -0x20 + (longlong)plVar28);
        plVar28[-3] = *(longlong *)(lVar31 + -0x18 + (longlong)plVar28);
        lVar33 = *(longlong *)(lVar31 + -0x10 + (longlong)plVar28);
        plVar28[-2] = lVar33;
        if (lVar33 != 0) {
          LOCK();
          *(int *)(lVar33 + 8) = *(int *)(lVar33 + 8) + 1;
          UNLOCK();
        }
        plVar28[-1] = *(longlong *)(lVar31 + -8 + (longlong)plVar28);
        lVar33 = *(longlong *)(lVar31 + (longlong)plVar28);
        *plVar28 = lVar33;
        if (lVar33 != 0) {
          LOCK();
          *(int *)(lVar33 + 8) = *(int *)(lVar33 + 8) + 1;
          UNLOCK();
        }
        plVar28 = plVar28 + 0xb;
        iVar20 = iVar20 + -1;
      } while (iVar20 != 0);
    }
    uVar24 = FUN_1417f3830(local_348,&local_6f8);
    FUN_1417f9510(local_718,uVar24);
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_1f8);
    if (local_200 != (longlong *)0x0) {
      LOCK();
      plVar28 = local_200 + 1;
      lVar31 = *plVar28;
      *(int *)plVar28 = (int)*plVar28 + -1;
      UNLOCK();
      if ((int)lVar31 == 1) {
        (**(code **)*local_200)(local_200);
        LOCK();
        piVar1 = (int *)((longlong)local_200 + 0xc);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*local_200 + 8))(local_200,1);
        }
      }
    }
    FUN_140456b10(local_340);
    bVar34 = cVar18 == '\0';
LAB_14185eace:
    if (plVar30 != (longlong *)0x0) {
      LOCK();
      plVar28 = plVar30 + 1;
      lVar31 = *plVar28;
      *(int *)plVar28 = (int)*plVar28 + -1;
      UNLOCK();
      if ((int)lVar31 == 1) {
        (**(code **)*plVar30)(plVar30);
        LOCK();
        piVar1 = (int *)((longlong)plVar30 + 0xc);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*plVar30 + 8))(plVar30,1);
        }
      }
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_748);
    ppuVar26 = &local_798;
  }
  TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_>::
  ~TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_>(ppuVar26);
  return bVar34;
}



// FUNCTION 14185f300 ToWidgetPathRef body=255 status=ok
// SIG undefined ToWidgetPathRef(void)

undefined8 *
FWeakWidgetPath::ToWidgetPathRef
          (undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)operator_new(0x160);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)puVar1 = DAT_1464b9ee8;
    puVar1[0x25] = 0;
    puVar1[0x26] = 0;
    *(undefined1 *)(puVar1 + 0x27) = 0;
    puVar1[0x28] = 0;
    puVar1[0x29] = 0;
    puVar1[0x2a] = 0;
    puVar1[0x2b] = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_DestroyObject_144d50388;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  param_5._0_1_ = *(undefined1 *)CONCAT71(param_5._1_7_,(undefined1)param_5);
  FUN_14185e130(param_1,*param_2,param_3,param_4,&param_5);
  return param_2;
}



// FUNCTION 14185f400 FUN_14185f400 body=176 status=ok
// SIG undefined FUN_14185f400(void)

ulonglong FUN_14185f400(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 extraout_XMM0_Qa;
  undefined8 local_28;
  longlong local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar6 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_18);
  local_28 = *puVar6;
  local_20 = puVar6[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_141853ff0(param_1 + 0x3c8,&local_28);
  *(byte *)(param_1 + 0x41c) = *(byte *)(param_1 + 0x41c) & 0xf8;
  uVar7 = (**(code **)(*DAT_1469eaf38 + 0x40))();
  *(undefined8 *)(param_1 + 0x408) = extraout_XMM0_Qa;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    uVar5 = (int)lVar4 - 1;
    uVar7 = (ulonglong)uVar5;
    if (uVar5 == 0) {
      uVar7 = (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        uVar7 = (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
    return uVar7 & 0xffffffffffffff00;
  }
  return uVar7 & 0xffffffffffffff00;
}



// FUNCTION 14185f4b0 UTextureIdentifier body=59 status=ok
// SIG undefined UTextureIdentifier(void)

undefined8 * FSlateBrush::UTextureIdentifier(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
  FGenericPlatformString::Memcpy(*param_1,L"texture:/",0x14);
  return param_1;
}



// FUNCTION 14185f4f0 FUN_14185f4f0 body=162 status=ok
// SIG undefined FUN_14185f4f0(void)

void FUN_14185f4f0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  BOOL BVar3;
  undefined8 *local_res8;
  undefined8 local_18;
  longlong *local_10;
  
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  }
  local_18 = *param_2;
  local_10 = (longlong *)param_2[1];
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_10 + 0xc) = *(int *)((longlong)local_10 + 0xc) + 1;
    UNLOCK();
  }
  local_res8 = &local_18;
  TArray<TWeakPtr<IBusListener,1>,FDefaultAllocator>::
  RemoveAll<<lambda_75c4bb420badbf6619ba8f8d778f9e7f>_>(param_1 + 8,&local_res8);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_10 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (local_10 != (longlong *)0x0)) {
      (**(code **)(*local_10 + 8))(local_10,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014185f58b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  return;
}



// FUNCTION 14185f5a0 FUN_14185f5a0 body=409 status=ok
// SIG undefined FUN_14185f5a0(void)

void FUN_14185f5a0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  
  if (DAT_1469eaf38 != 0) {
    FUN_14185f4f0();
    lVar8 = (longlong)*(int *)(param_1 + 0x90);
    if (*(int *)(param_1 + 0x90) != 0) {
      iVar9 = 0;
      bVar12 = **(longlong **)(param_1 + 0x88) != *param_2;
      lVar7 = 0;
      iVar10 = 0;
      do {
        lVar7 = lVar7 + 1;
        iVar11 = iVar10 + 1;
        if (lVar7 < lVar8) {
          plVar5 = (longlong *)(lVar7 * 0x10 + *(longlong *)(param_1 + 0x88));
          do {
            if (bVar12 != (*plVar5 != *param_2)) break;
            iVar11 = iVar11 + 1;
            lVar7 = lVar7 + 1;
            plVar5 = plVar5 + 2;
          } while (lVar7 < lVar8);
        }
        iVar6 = iVar11 - iVar10;
        if (bVar12 == false) {
          if (iVar6 != 0) {
            plVar5 = (longlong *)((longlong)iVar10 * 0x10 + 8 + *(longlong *)(param_1 + 0x88));
            do {
              plVar3 = (longlong *)*plVar5;
              if (plVar3 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar3 + 1;
                lVar4 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar4 == 1) {
                  (**(code **)*plVar3)(plVar3);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar3 + 0xc);
                  iVar10 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar10 == 1) {
                    (**(code **)(*plVar3 + 8))(plVar3,1);
                  }
                }
              }
              plVar5 = plVar5 + 2;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
        }
        else {
          if (iVar9 != iVar10) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar9 * 0x10 + *(longlong *)(param_1 + 0x88)),
                       (void *)((longlong)iVar10 * 0x10 + *(longlong *)(param_1 + 0x88)),
                       (longlong)iVar6 << 4);
          }
          iVar9 = iVar9 + iVar6;
        }
        bVar12 = (bool)(bVar12 ^ 1);
        iVar10 = iVar11;
      } while (lVar7 < lVar8);
      *(int *)(param_1 + 0x90) = iVar9;
    }
  }
  return;
}



// FUNCTION 14185f740 FUN_14185f740 body=6 status=ok
// SIG undefined FUN_14185f740(void)

undefined4 FUN_14185f740(longlong param_1)

{
  undefined4 uVar1;
  
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = 0;
  UNLOCK();
  return uVar1;
}



// FUNCTION 14185f750 UpdateCache body=81 status=ok
// SIG undefined UpdateCache(void)

void FSlateFontCache::UpdateCache(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0xe0);
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0xe8) * 2;
  for (; plVar1 != plVar2; plVar1 = plVar1 + 2) {
    (**(code **)(*(longlong *)(*plVar1 + 8) + 8))();
  }
  return;
}



// FUNCTION 14185f7b0 UpdateMorphTargetShape body=11 status=ok
// SIG undefined UpdateMorphTargetShape(void)

void SWindow::UpdateMorphTargetShape(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x3b8) = *param_2;
  *(undefined8 *)(param_1 + 0x3c0) = uVar1;
  return;
}



// FUNCTION 14185f7c0 FUN_14185f7c0 body=88 status=ok
// SIG undefined FUN_14185f7c0(void)

void FUN_14185f7c0(longlong param_1,int param_2)

{
  char cVar1;
  DWORD DVar2;
  
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar1 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar2 = GetCurrentThreadId(), DVar2 != DAT_1468c21c0)) {
    return;
  }
  if (param_2 != *(int *)(param_1 + 0x24)) {
    TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_1 + 0x10,0);
    *(int *)(param_1 + 0x24) = param_2;
  }
  return;
}



// FUNCTION 14185f820 FUN_14185f820 body=392 status=ok
// SIG undefined FUN_14185f820(void)

void FUN_14185f820(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  bool bVar7;
  longlong local_res10;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  local_res10 = param_2;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469eb3d8) {
    _Init_thread_header(&DAT_1469eb3d8);
    if (DAT_1469eb3d8 == -1) {
      FName::FName(&DAT_1469eb3d0,"DefaultSystemFont",1);
      _Init_thread_footer(&DAT_1469eb3d8);
    }
  }
  bVar7 = local_res10 != DAT_1469eb3d0;
  if (bVar7) {
    uVar5 = FUN_1418315f0();
    puVar6 = (undefined8 *)FUN_141833cc0(uVar5,local_28,&local_res10,param_3);
  }
  else {
    uVar5 = FUN_1418315f0();
    puVar6 = (undefined8 *)FUN_14183e1a0(uVar5,local_18);
  }
  if ((undefined8 *)(param_1 + 0x30) != puVar6) {
    *(undefined8 *)(param_1 + 0x30) = *puVar6;
    *puVar6 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x38,puVar6 + 1);
  }
  if (bVar7) {
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
  if ((!bVar7) && (local_10 != (longlong *)0x0)) {
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
  return;
}



// FUNCTION 14185f9b0 UseForeground body=39 status=ok
// SIG undefined UseForeground(void)

undefined8 * FSlateColor::UseForeground(undefined8 *param_1)

{
  *param_1 = 0x3f800000;
  *(undefined4 *)(param_1 + 1) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined1 *)(param_1 + 2) = 2;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 14185f9e0 deCasteljauSplit body=404 status=ok
// SIG undefined deCasteljauSplit(void)

void FLineBuilder::deCasteljauSplit
               (float *param_1,float *param_2,float *param_3,float *param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar2 = *param_2 + *param_1;
  fVar3 = param_2[1] + param_1[1];
  fVar6 = param_3[1] + param_4[1];
  fVar5 = param_3[1] + param_2[1];
  fVar8 = *param_3 + *param_4;
  fVar4 = *param_3 + *param_2;
  fVar7 = (fVar6 + fVar5) * 0.5;
  fVar9 = (fVar8 + fVar4) * 0.5;
  fVar5 = (fVar5 + fVar3) * 0.5;
  fVar4 = (fVar4 + fVar2) * 0.5;
  uVar1 = *(undefined8 *)param_1;
  *(float *)(param_5 + 3) = (fVar9 + fVar4) * 0.25;
  *(float *)(param_5 + 1) = fVar2 * 0.5;
  *(float *)((longlong)param_5 + 0xc) = fVar3 * 0.5;
  *(float *)(param_5 + 2) = fVar4 * 0.5;
  *(float *)((longlong)param_5 + 0x1c) = (fVar7 + fVar5) * 0.25;
  *(float *)(param_5 + 5) = fVar8 * 0.5;
  *(float *)((longlong)param_5 + 0x2c) = fVar6 * 0.5;
  *(float *)((longlong)param_5 + 0x14) = fVar5 * 0.5;
  *(float *)(param_5 + 4) = fVar9 * 0.5;
  *(float *)((longlong)param_5 + 0x24) = fVar7 * 0.5;
  *param_5 = uVar1;
  param_5[6] = *(undefined8 *)param_4;
  return;
}



// FUNCTION 14185fb80 get_glyph_contour_point body=271 status=ok
// SIG undefined get_glyph_contour_point(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
HarfBuzzFontFunctions::Internal::get_glyph_contour_point
          (longlong param_1,undefined8 param_2,undefined4 param_3,uint param_4,undefined4 *param_5,
          undefined4 *param_6)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined1 *local_98;
  undefined1 local_88 [64];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  uVar3 = hb_ft_font_get_face(*(undefined8 *)(param_1 + 0x78));
  uVar2 = hb_ft_font_get_load_flags(*(undefined8 *)(param_1 + 0x78));
  puVar4 = (undefined4 *)hb_font_get_user_data(param_1,&DAT_1469eaf20);
  local_98 = local_88;
  uVar5 = 0;
  local_48 = 0;
  local_40 = 0;
  local_a8 = *puVar4;
  local_a0 = puVar4[1];
  cVar1 = FFreeTypeGlyphCache::FindOrCache(*(undefined8 *)(puVar4 + 2),uVar3,param_3,uVar2);
  if ((cVar1 != '\0') && (param_4 < (uint)local_40)) {
    uVar5 = 1;
    *param_5 = *(undefined4 *)(local_48 + (longlong)(int)param_4 * 8);
    *param_6 = *(undefined4 *)(local_48 + 4 + (longlong)(int)param_4 * 8);
  }
  if (local_48 != 0) {
    FMemory::Free(local_48);
  }
  return uVar5;
}



// FUNCTION 14185fc90 get_glyph_extents body=234 status=ok
// SIG undefined get_glyph_extents(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool HarfBuzzFontFunctions::Internal::get_glyph_extents
               (longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined1 *local_98;
  undefined1 local_88 [4];
  undefined4 local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  uVar3 = hb_ft_font_get_face(*(undefined8 *)(param_1 + 0x78));
  uVar2 = hb_ft_font_get_load_flags(*(undefined8 *)(param_1 + 0x78));
  puVar4 = (undefined4 *)hb_font_get_user_data(param_1,&DAT_1469eaf20);
  local_98 = local_88;
  local_48 = 0;
  local_40 = 0;
  local_a8 = *puVar4;
  local_a0 = puVar4[1];
  cVar1 = FFreeTypeGlyphCache::FindOrCache(*(undefined8 *)(puVar4 + 2),uVar3,param_3,uVar2);
  if (cVar1 != '\0') {
    *param_4 = local_7c;
    param_4[1] = local_78;
    param_4[2] = local_84;
    param_4[3] = -local_80;
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  return cVar1 != '\0';
}



// FUNCTION 14185fd80 get_glyph_h_advance body=158 status=ok
// SIG undefined get_glyph_h_advance(void)

int HarfBuzzFontFunctions::Internal::get_glyph_h_advance
              (longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  int local_res8 [2];
  
  uVar4 = hb_ft_font_get_face(*(undefined8 *)(param_1 + 0x78));
  uVar2 = hb_ft_font_get_load_flags(*(undefined8 *)(param_1 + 0x78));
  puVar5 = (undefined4 *)hb_font_get_user_data(param_1,&DAT_1469eaf20);
  local_res8[0] = 0;
  cVar1 = FFreeTypeAdvanceCache::FindOrCache
                    (*(undefined8 *)(puVar5 + 4),uVar4,param_3,uVar2,*puVar5,puVar5[1],local_res8);
  if (cVar1 == '\0') {
    iVar3 = 0;
  }
  else {
    iVar3 = local_res8[0] + 0x200 >> 10;
  }
  return iVar3;
}



// FUNCTION 14185fe20 get_glyph_h_kerning body=143 status=ok
// SIG undefined get_glyph_h_kerning(void)

undefined4
HarfBuzzFontFunctions::Internal::get_glyph_h_kerning
          (longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_18 [4];
  
  uVar2 = hb_ft_font_get_face(*(undefined8 *)(param_1 + 0x78));
  puVar3 = (undefined4 *)hb_font_get_user_data(param_1,&DAT_1469eaf20);
  local_res8 = param_3;
  local_resc = param_4;
  cVar1 = FFreeTypeKerningPairCache::FindOrCache
                    (*(undefined8 *)(puVar3 + 6),uVar2,&local_res8,0,*puVar3,puVar3[1],local_18);
  uVar4 = 0;
  if (cVar1 != '\0') {
    uVar4 = local_18[0];
  }
  return uVar4;
}



// FUNCTION 14185feb0 get_glyph_v_advance body=161 status=ok
// SIG undefined get_glyph_v_advance(void)

int HarfBuzzFontFunctions::Internal::get_glyph_v_advance
              (longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  int local_res8 [2];
  
  uVar4 = hb_ft_font_get_face(*(undefined8 *)(param_1 + 0x78));
  uVar2 = hb_ft_font_get_load_flags(*(undefined8 *)(param_1 + 0x78));
  puVar5 = (undefined4 *)hb_font_get_user_data(param_1,&DAT_1469eaf20);
  local_res8[0] = 0;
  cVar1 = FFreeTypeAdvanceCache::FindOrCache
                    (*(undefined8 *)(puVar5 + 4),uVar4,param_3,uVar2 | 0x10,*puVar5,puVar5[1],
                     local_res8);
  if (cVar1 == '\0') {
    iVar3 = 0;
  }
  else {
    iVar3 = 0x200 - local_res8[0] >> 10;
  }
  return iVar3;
}



// FUNCTION 14185ff60 get_glyph_v_origin body=273 status=ok
// SIG undefined get_glyph_v_origin(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
HarfBuzzFontFunctions::Internal::get_glyph_v_origin
          (longlong param_1,undefined8 param_2,undefined4 param_3,int *param_4,int *param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined1 *local_a8;
  undefined1 local_98 [12];
  int local_8c;
  int local_88;
  int local_80;
  int local_7c;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  uVar3 = hb_ft_font_get_face(*(undefined8 *)(param_1 + 0x78));
  uVar2 = hb_ft_font_get_load_flags(*(undefined8 *)(param_1 + 0x78));
  puVar4 = (undefined4 *)hb_font_get_user_data(param_1,&DAT_1469eaf20);
  local_a8 = local_98;
  uVar5 = 0;
  local_58 = 0;
  local_50 = 0;
  local_b8 = *puVar4;
  local_b0 = puVar4[1];
  cVar1 = FFreeTypeGlyphCache::FindOrCache(*(undefined8 *)(puVar4 + 2),uVar3,param_3,uVar2);
  if (cVar1 != '\0') {
    *param_4 = local_8c - local_80;
    *param_5 = local_88 + local_7c;
    if (*(int *)(param_1 + 0x88) < 0) {
      *param_4 = -*param_4;
    }
    if (*(int *)(param_1 + 0x8c) < 0) {
      *param_5 = -*param_5;
    }
    uVar5 = 1;
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  return uVar5;
}



// FUNCTION 141860080 get_nominal_glyph body=112 status=ok
// SIG undefined get_nominal_glyph(void)

undefined8
HarfBuzzFontFunctions::Internal::get_nominal_glyph
          (longlong param_1,undefined8 param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = hb_ft_font_get_face(*(undefined8 *)(param_1 + 0x78));
  iVar1 = FT_Get_Char_Index(uVar2,param_3);
  *param_4 = iVar1;
  if (param_3 != 0) {
    if (iVar1 == 0) {
      iVar1 = FT_Get_Char_Index(uVar2,0xfffd);
      *param_4 = iVar1;
    }
    if (*param_4 == 0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1418600f0 HarfBuzzCalloc body=71 status=ok
// SIG undefined HarfBuzzCalloc(void)

void * HarfBuzzCalloc(longlong param_1,longlong param_2)

{
  void *_Dst;
  size_t _Size;
  
  _Size = param_1 * param_2;
  if (_Size != 0) {
    _Dst = (void *)FMemory::Malloc(_Size);
    _guard_xfg_dispatch_icall_nop(_Dst,0,_Size);
    return _Dst;
  }
  return (void *)0x0;
}



// FUNCTION 141860140 FUN_141860140 body=53 status=ok
// SIG undefined FUN_141860140(void)

void FUN_141860140(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144d56930;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141860180 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FButtonStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x278;
    *puVar1 = &PTR_FUN_144d59c08;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1418601c0 FUN_1418601c0 body=53 status=ok
// SIG undefined FUN_1418601c0(void)

void FUN_1418601c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_144d56a48;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141860200 FUN_141860200 body=53 status=ok
// SIG undefined FUN_141860200(void)

void FUN_141860200(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &PTR_FUN_144d58010;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141860240 FUN_141860240 body=53 status=ok
// SIG undefined FUN_141860240(void)

void FUN_141860240(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_144d56b60;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141860280 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1e0;
    *puVar1 = &PTR_FUN_144d59d20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1418602c0 FUN_1418602c0 body=53 status=ok
// SIG undefined FUN_1418602c0(void)

void FUN_1418602c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_144d56c78;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141860300 FUN_141860300 body=53 status=ok
// SIG undefined FUN_141860300(void)

void FUN_141860300(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_144d58128;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141860340 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x580;
    *puVar1 = &PTR_FUN_144d59e38;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141860380 FUN_141860380 body=47 status=ok
// SIG undefined FUN_141860380(void)

longlong FUN_141860380(void)

{
  if (DAT_1469f3e18 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469f3e18,&PTR_FUN_1464bb410);
  }
  return DAT_1469f3e18;
}



// FUNCTION 1418603b0 FUN_1418603b0 body=47 status=ok
// SIG undefined FUN_1418603b0(void)

longlong FUN_1418603b0(void)

{
  if (DAT_1469f3e08 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469f3e08,&PTR_FUN_1464bb390);
  }
  return DAT_1469f3e08;
}



// FUNCTION 1418603e0 FUN_1418603e0 body=53 status=ok
// SIG undefined FUN_1418603e0(void)

void FUN_1418603e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_144d56df0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141860440 FUN_141860440 body=53 status=ok
// SIG undefined FUN_141860440(void)

void FUN_141860440(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &PTR_FUN_144d56f08;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141860480 FUN_141860480 body=53 status=ok
// SIG undefined FUN_141860480(void)

void FUN_141860480(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144d58240;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1418604c0 FUN_1418604c0 body=53 status=ok
// SIG undefined FUN_1418604c0(void)

void FUN_1418604c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &PTR_FUN_144d59f50;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141860500 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong USlateWidgetStyleContainerInterface::StaticClass(void)

{
  if (DAT_1469f4190 == 0) {
    FUN_14171ccd0(L"/Script/SlateCore",L"SlateWidgetStyleContainerInterface",&DAT_1469f4190,
                  FUN_140447710,0x28,0x10004001,0,L"Engine",&LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_1469f4190;
}



// FUNCTION 1418605b0 FUN_1418605b0 body=53 status=ok
// SIG undefined FUN_1418605b0(void)

void FUN_1418605b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &PTR_FUN_144d57020;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1418605f0 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong USlateWidgetStyleContainerBase::StaticClass(void)

{
  if (DAT_1469f4180 == 0) {
    FUN_14171ccd0(L"/Script/SlateCore",L"SlateWidgetStyleContainerBase",&DAT_1469f4180,FUN_140447710
                  ,0x30,0x10000000,0,L"Engine",FUN_1418613a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1469f4180;
}



// FUNCTION 141860690 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong USlateWidgetStyleContainerBase::StaticClass(void)

{
  if (DAT_1469f4170 == 0) {
    FUN_14171ccd0(L"/Script/SlateCore",L"SlateWidgetStyleAsset",&DAT_1469f4170,FUN_140447710,0x30,
                  0x10000000,0,L"Engine",FUN_14143e370,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1469f4170;
}



// FUNCTION 141860730 FUN_141860730 body=53 status=ok
// SIG undefined FUN_141860730(void)

void FUN_141860730(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_144d57138;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141860780 FUN_141860780 body=53 status=ok
// SIG undefined FUN_141860780(void)

void FUN_141860780(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_144d57250;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1418607e0 FUN_1418607e0 body=53 status=ok
// SIG undefined FUN_1418607e0(void)

void FUN_1418607e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_144d57368;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141860830 FUN_141860830 body=53 status=ok
// SIG undefined FUN_141860830(void)

void FUN_141860830(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144d57480;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141860870 FUN_141860870 body=53 status=ok
// SIG undefined FUN_141860870(void)

void FUN_141860870(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &PTR_FUN_144d57598;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1418608b0 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong USlateTypes::StaticClass(void)

{
  if (DAT_1469f4150 == 0) {
    FUN_14171ccd0(L"/Script/SlateCore",L"SlateTypes",&DAT_1469f4150,FUN_140447710,0x28,0x10000000,0,
                  L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1469f4150;
}



// FUNCTION 141860950 FUN_141860950 body=47 status=ok
// SIG undefined FUN_141860950(void)

longlong FUN_141860950(void)

{
  if (DAT_1469f4160 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469f4160,&PTR_FUN_1464bee90);
  }
  return DAT_1469f4160;
}



// FUNCTION 141860980 FUN_141860980 body=53 status=ok
// SIG undefined FUN_141860980(void)

void FUN_141860980(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xfd0;
    *puVar1 = &PTR_FUN_144d583f8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1418609c0 FUN_1418609c0 body=53 status=ok
// SIG undefined FUN_1418609c0(void)

void FUN_1418609c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x118;
    *puVar1 = &PTR_FUN_144d58510;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141860a00 FUN_141860a00 body=53 status=ok
// SIG undefined FUN_141860a00(void)

void FUN_141860a00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x228;
    *puVar1 = &PTR_FUN_144d58628;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141860a40 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x700;
    *puVar1 = &PTR_FUN_144d58740;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141860a80 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb70;
    *puVar1 = &PTR_FUN_144d58858;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141860ac0 FUN_141860ac0 body=53 status=ok
// SIG undefined FUN_141860ac0(void)

void FUN_141860ac0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x4d0;
    *puVar1 = &PTR_FUN_144d58970;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141860b00 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UFontBulkData::StaticClass(void)

{
  if (DAT_1469f3e48 == 0) {
    FUN_14171ccd0(L"/Script/SlateCore",L"FontBulkData",&DAT_1469f3e48,FUN_140447710,0xc0,0x10000000,
                  0,L"Engine",&LAB_141861390,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1469f3e48;
}



// FUNCTION 141860ba0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UFontFaceInterface::GetPrivateStaticClass(void)

{
  if (DAT_1469f3e60 == 0) {
    FUN_14171ccd0(L"/Script/SlateCore",L"FontFaceInterface",&DAT_1469f3e60,FUN_140447710,0x28,
                  0x10004001,0,L"Engine",&LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_1469f3e60;
}



// FUNCTION 141860c60 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x6b8;
    *puVar1 = &PTR_FUN_144d58a88;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141860ca0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UFontProviderInterface::GetPrivateStaticClass(void)

{
  if (DAT_1469f3e70 == 0) {
    FUN_14171ccd0(L"/Script/SlateCore",L"FontProviderInterface",&DAT_1469f3e70,FUN_140447710,0x28,
                  0x10004001,0,L"Engine",&LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_1469f3e70;
}



// FUNCTION 141860d60 FUN_141860d60 body=53 status=ok
// SIG undefined FUN_141860d60(void)

void FUN_141860d60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x118;
    *puVar1 = &PTR_FUN_144d58ba0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141860da0 FUN_141860da0 body=53 status=ok
// SIG undefined FUN_141860da0(void)

void FUN_141860da0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_144d57708;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 141860de0 FUN_141860de0 body=53 status=ok
// SIG undefined FUN_141860de0(void)

void FUN_141860de0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x2e8;
    *puVar1 = &PTR_FUN_144d58cb8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141860e20 FUN_141860e20 body=53 status=ok
// SIG undefined FUN_141860e20(void)

void FUN_141860e20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x98;
    *puVar1 = &PTR_FUN_144d58dd0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141860e60 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FTransformCurve_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x4e0;
    *puVar1 = &PTR_FUN_144d58ee8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141860ea0 FUN_141860ea0 body=47 status=ok
// SIG undefined FUN_141860ea0(void)

longlong FUN_141860ea0(void)

{
  if (DAT_1469f3ef0 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_1469f3ef0,&PTR_s__Script_SlateCore_144d57c38);
  }
  return DAT_1469f3ef0;
}



// FUNCTION 141860ed0 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x230;
    *puVar1 = &PTR_FUN_144d59000;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141860f10 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa80;
    *puVar1 = &PTR_FUN_144d59118;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141860f50 FUN_141860f50 body=53 status=ok
// SIG undefined FUN_141860f50(void)

void FUN_141860f50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x120;
    *puVar1 = &PTR_FUN_144d59230;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141860f90 FUN_141860f90 body=53 status=ok
// SIG undefined FUN_141860f90(void)

void FUN_141860f90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1a0;
    *puVar1 = &PTR_FUN_144d59348;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141860fd0 FUN_141860fd0 body=53 status=ok
// SIG undefined FUN_141860fd0(void)

void FUN_141860fd0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x9d8;
    *puVar1 = &PTR_FUN_144d59460;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141861010 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x7f0;
    *puVar1 = &PTR_FUN_144d59578;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141861050 FUN_141861050 body=53 status=ok
// SIG undefined FUN_141861050(void)

void FUN_141861050(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x4d0;
    *puVar1 = &PTR_FUN_144d59690;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141861090 FUN_141861090 body=53 status=ok
// SIG undefined FUN_141861090(void)

void FUN_141861090(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *puVar1 = &PTR_FUN_144d579c0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}


