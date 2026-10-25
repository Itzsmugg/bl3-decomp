// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142fb0b40 FUN_142fb0b40 body=317 status=ok
// SIG undefined FUN_142fb0b40(void)

void FUN_142fb0b40(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  if ((lVar1 == 0) && (lVar1 = FUN_1423407b0(), lVar1 == 0)) {
    return;
  }
  lVar2 = FUN_142f9cfb0(lVar1,0);
  if ((lVar2 != 0) && (*(int *)(param_1 + 0x1dc) != DAT_14676e178)) {
    iVar3 = *(int *)(param_1 + 0x1a0);
    lVar4 = (longlong)iVar3;
    *(undefined1 *)(param_1 + 0x1f8) = 0;
    if ((-1 < iVar3) &&
       ((iVar3 < *(int *)(lVar2 + 0x6d8) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x6d0) + lVar4 * 0x10) == param_1)))) {
      *(undefined1 *)(*(longlong *)(lVar2 + 0x6d0) + 0xc + lVar4 * 0x10) = 0;
      *(undefined4 *)(*(longlong *)(lVar2 + 0x6d0) + 8 + lVar4 * 0x10) = 0;
      iVar3 = *(int *)(param_1 + 0x1a0);
    }
    if ((-1 < iVar3) && (iVar3 < *(int *)(lVar2 + 0x6d8))) {
      lVar4 = (longlong)iVar3;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x6d0) + lVar4 * 0x10) == param_1) {
        *(undefined8 *)(*(longlong *)(lVar2 + 0x6d0) + lVar4 * 0x10) = 0;
        *(undefined4 *)(*(longlong *)(lVar2 + 0x6d0) + 8 + lVar4 * 0x10) = 0;
      }
    }
    *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_1 + 0x1dc);
    *(int *)(param_1 + 0x1dc) = DAT_14676e178;
    FUN_142faf470(lVar2 + 0x6c0,param_1);
    FUN_142fbb0d0(param_1);
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar5 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar5 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    FUN_142880530(uVar5,param_1 + 0x200);
    *(undefined8 *)(param_1 + 0x200) = 0;
  }
  return;
}



// FUNCTION 142fb0c80 FUN_142fb0c80 body=161 status=ok
// SIG undefined FUN_142fb0c80(void)

void FUN_142fb0c80(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x200);
  if (param_3 < 0x21) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 4);
    pvVar1 = *(void **)((longlong)param_1 + 0x200);
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
        *(void **)((longlong)param_1 + 0x200) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 4);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x200) = uVar2;
  return;
}



// FUNCTION 142fb0d30 ResizeAllocation body=161 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<32,TSizedDefaultAllocator<32>_>::
     ForElementType<ACoreAIController::FTraceRequest>::ResizeAllocation
               (void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x800);
  if (param_3 < 0x21) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 6);
    pvVar1 = *(void **)((longlong)param_1 + 0x800);
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
        *(void **)((longlong)param_1 + 0x800) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 6);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x800) = uVar2;
  return;
}



// FUNCTION 142fb0de0 ResizeAllocation body=155 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<64,TSizedDefaultAllocator<32>_>::ForElementType<FClipmapUpdateBounds>::
     ResizeAllocation(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x700);
  if (param_3 < 0x41) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x1c);
    pvVar1 = *(void **)((longlong)param_1 + 0x700);
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
        *(void **)((longlong)param_1 + 0x700) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x1c);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x700) = uVar2;
  return;
}



// FUNCTION 142fb0e80 FUN_142fb0e80 body=142 status=ok
// SIG undefined FUN_142fb0e80(void)

void FUN_142fb0e80(longlong *param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0x150,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x8618618618618619) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 8);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if ((iVar4 != param_3) && ((*param_1 != 0 || (iVar4 != 0)))) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x150,0);
    *param_1 = lVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  return;
}



// FUNCTION 142fb0f10 FUN_142fb0f10 body=137 status=ok
// SIG undefined FUN_142fb0f10(void)

void FUN_142fb0f10(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x208);
  if (uVar1 < 0x21) {
    iVar2 = 0x20;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x20c) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 << 4,0);
    iVar2 = (int)(uVar3 >> 4);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x20c) = iVar2;
  FUN_142fb0c80(param_1,param_2,iVar2,0x10);
  return;
}



// FUNCTION 142fb0fa0 FUN_142fb0fa0 body=137 status=ok
// SIG undefined FUN_142fb0fa0(void)

void FUN_142fb0fa0(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x808);
  if (uVar1 < 0x21) {
    iVar2 = 0x20;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x80c) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 << 6,0);
    iVar2 = (int)(uVar3 >> 6);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x80c) = iVar2;
  TInlineAllocator<32,TSizedDefaultAllocator<32>_>::ForElementType<ACoreAIController::FTraceRequest>
  ::ResizeAllocation(param_1,param_2,iVar2,0x40);
  return;
}



// FUNCTION 142fb1030 FUN_142fb1030 body=257 status=ok
// SIG undefined FUN_142fb1030(void)

void FUN_142fb1030(void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x208);
  if (uVar1 < 0x21) {
    uVar2 = 0x20;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x20c) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 << 4,0);
    uVar2 = (uint)(uVar3 >> 4);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x20c) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x200);
  if (uVar2 < 0x21) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 4);
    pvVar4 = *(void **)((longlong)param_1 + 0x200);
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
        *(void **)((longlong)param_1 + 0x200) = pvVar4;
      }
      _guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 4);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 4;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x200) = uVar5;
  return;
}



// FUNCTION 142fb1140 FUN_142fb1140 body=163 status=ok
// SIG undefined FUN_142fb1140(void)

void FUN_142fb1140(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x708);
  if (uVar1 < 0x41) {
    uVar5 = 0x40;
  }
  else {
    lVar3 = 4;
    if ((*(int *)(param_1 + 0x70c) != 0) || (4 < uVar1)) {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar4 = FMemory::QuantizeSize(lVar3 * 0x1c,0);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar4;
    lVar3 = SUB168(ZEXT816(0x2492492492492493) * auVar2,8);
    uVar4 = (uVar4 - lVar3 >> 1) + lVar3 >> 4;
    uVar5 = uVar4 & 0xffffffff;
    if ((int)uVar4 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x70c) = (int)uVar5;
  TInlineAllocator<64,TSizedDefaultAllocator<32>_>::ForElementType<FClipmapUpdateBounds>::
  ResizeAllocation(param_1,param_2,uVar5,0x1c);
  return;
}



// FUNCTION 142fb11f0 FUN_142fb11f0 body=151 status=ok
// SIG undefined FUN_142fb11f0(void)

void FUN_142fb11f0(longlong *param_1)

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
  uVar4 = FMemory::QuantizeSize(lVar3 * 0x150,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  lVar3 = SUB168(ZEXT816(0x8618618618618619) * auVar2,8);
  iVar5 = (int)((uVar4 - lVar3 >> 1) + lVar3 >> 8);
  if (iVar5 < (int)uVar1) {
    iVar5 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar5;
  if ((*param_1 != 0) || (iVar5 != 0)) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0x150,0);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 142fb1290 FUN_142fb1290 body=262 status=ok
// SIG undefined FUN_142fb1290(void)

void FUN_142fb1290(void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x808);
  if (uVar1 < 0x81) {
    uVar2 = 0x80;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x80c) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 << 4,0);
    uVar2 = (uint)(uVar3 >> 4);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x80c) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x800);
  if (uVar2 < 0x81) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 4);
    pvVar4 = *(void **)((longlong)param_1 + 0x800);
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
        *(void **)((longlong)param_1 + 0x800) = pvVar4;
      }
      _guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 4);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 4;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x800) = uVar5;
  return;
}



// FUNCTION 142fb13a0 FUN_142fb13a0 body=164 status=ok
// SIG undefined FUN_142fb13a0(void)

void FUN_142fb13a0(longlong param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x78);
  uVar5 = (ulonglong)(int)uVar1;
  uVar3 = *(uint *)(param_1 + 0x7c);
  if (uVar1 < 5) {
    uVar5 = 4;
    goto LAB_142fb141f;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar1) * 0x1c)) ||
     ((int)(uVar1 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar1) {
      if (0 < (int)uVar1) {
        uVar5 = FMemory::QuantizeSize(uVar5 * 0x1c,0);
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar5;
        lVar4 = SUB168(ZEXT816(0x2492492492492493) * auVar2,8);
        uVar3 = *(uint *)(param_1 + 0x7c);
        uVar5 = (uVar5 - lVar4 >> 1) + lVar4 >> 4;
      }
      goto LAB_142fb141f;
    }
    if (uVar1 == 0) goto LAB_142fb141f;
  }
  uVar5 = (ulonglong)uVar3;
LAB_142fb141f:
  if ((uint)uVar5 != uVar3) {
    *(uint *)(param_1 + 0x7c) = (uint)uVar5;
    FUN_1422b25c0(param_1,*(undefined4 *)(param_1 + 0x78),uVar5,0x1c);
    return;
  }
  return;
}



// FUNCTION 142fb1450 ResizeTo body=110 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>,TInlineAllocator<32,FDefaultAllocator>_>
     ::ResizeTo(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x21) {
      iVar1 = 0x20;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0x20c)) {
    *(int *)(param_1 + 0x20c) = iVar1;
    FUN_142fb0c80(param_1,*(undefined4 *)(param_1 + 0x208),iVar1,0x10);
  }
  return;
}



// FUNCTION 142fb14c0 ResizeTo body=110 status=ok
// SIG undefined ResizeTo(void)

void TArray<ACoreAIController::FTraceRequest,TInlineAllocator<32,TSizedDefaultAllocator<32>_>_>::
     ResizeTo(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x21) {
      iVar1 = 0x20;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 6,0);
      iVar1 = (int)(uVar2 >> 6);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0x80c)) {
    *(int *)(param_1 + 0x80c) = iVar1;
    TInlineAllocator<32,TSizedDefaultAllocator<32>_>::
    ForElementType<ACoreAIController::FTraceRequest>::ResizeAllocation
              (param_1,*(undefined4 *)(param_1 + 0x808),iVar1,0x40);
  }
  return;
}



// FUNCTION 142fb1530 ResizeTo body=132 status=ok
// SIG undefined ResizeTo(void)

void TArray<FClipmapUpdateBounds,TInlineAllocator<64,TSizedDefaultAllocator<32>_>_>::ResizeTo
               (longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x41) {
      iVar3 = 0x40;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x1c,0);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar2;
      lVar4 = SUB168(ZEXT816(0x2492492492492493) * auVar1,8);
      iVar3 = (int)((uVar2 - lVar4 >> 1) + lVar4 >> 4);
      if (iVar3 < (int)param_2) {
        iVar3 = 0x7fffffff;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x70c)) {
    *(int *)(param_1 + 0x70c) = iVar3;
    TInlineAllocator<64,TSizedDefaultAllocator<32>_>::ForElementType<FClipmapUpdateBounds>::
    ResizeAllocation(param_1,*(undefined4 *)(param_1 + 0x708),iVar3,0x1c);
  }
  return;
}



// FUNCTION 142fb15c0 ResizeTo body=130 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<336,8>_>,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0x150,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x8618618618618619) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 8);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if (iVar4 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x150,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 142fb1650 FUN_142fb1650 body=89 status=ok
// SIG undefined FUN_142fb1650(void)

void FUN_142fb1650(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_res10 [3];
  
  if ((param_1 != (longlong *)0x0) &&
     (local_res10[0] = param_2, plVar1 = (longlong *)(**(code **)(*param_1 + 0x668))(),
     plVar1 != (longlong *)0x0)) {
    uVar2 = AAICharacter::GetPrivateStaticClass();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if (lVar3 != 0) {
      FUN_142dafbc0(lVar3 + 0x390,local_res10);
    }
  }
  return;
}



// FUNCTION 142fb16b0 FUN_142fb16b0 body=89 status=ok
// SIG undefined FUN_142fb16b0(void)

void FUN_142fb16b0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_res10 [3];
  
  if ((param_1 != (longlong *)0x0) &&
     (local_res10[0] = param_2, plVar1 = (longlong *)(**(code **)(*param_1 + 0x668))(),
     plVar1 != (longlong *)0x0)) {
    uVar2 = AAICharacter::GetPrivateStaticClass();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if (lVar3 != 0) {
      FUN_142dbb5d0(lVar3 + 0x390,local_res10);
    }
  }
  return;
}



// FUNCTION 142fb1710 FUN_142fb1710 body=550 status=ok
// SIG undefined FUN_142fb1710(void)

void FUN_142fb1710(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  BOOL BVar4;
  undefined8 uVar5;
  float *pfVar6;
  longlong lVar7;
  longlong lVar8;
  float local_48;
  float fStack_44;
  float local_40;
  undefined8 local_3c;
  float local_34;
  undefined **local_30;
  undefined8 local_28;
  undefined4 local_20;
  uint local_1c;
  
  FUN_1424c98a0();
  lVar7 = *(longlong *)(param_1 + 0x18);
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar7 + 0xb0);
  BVar4 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar4 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (((*(longlong *)(lVar7 + 0xd8) != 0) &&
      (*(int *)(*(longlong *)(lVar7 + 0xd8) + 0xf40) == *(int *)(lVar7 + 0xf8))) &&
     (*(longlong *)(lVar7 + 0xe0) != 0)) {
    local_1c = 0x80000000;
    local_28 = 0;
    local_30 = hkTrivialTaskQueue::vftable;
    local_20 = 0;
    FUN_1438ed320(*(longlong *)(lVar7 + 0xe0),&local_30,1);
    uVar5 = FUN_143703a50();
    local_20 = 0;
    if (-1 < (int)local_1c) {
      FUN_143702e10(uVar5,local_28,8,local_1c & 0x3fffffff);
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  lVar7 = *(longlong *)(param_1 + 8);
  lVar8 = (longlong)*(int *)(param_1 + 0x10) * 0x140 + lVar7;
  if (lVar7 != lVar8) {
    pfVar6 = (float *)(lVar7 + 0xf8);
    do {
      if (*(char *)((longlong)pfVar6 + 0x35) == '\0') {
        fVar1 = pfVar6[-0x3c];
        local_40 = fVar1 * *pfVar6;
        local_28 = CONCAT44(local_28._4_4_,local_40);
        local_3c = CONCAT44(fVar1 * pfVar6[-1],fVar1 * pfVar6[-2]);
      }
      else {
        lVar2 = *(longlong *)(pfVar6 + 0xe);
        local_48 = (float)DAT_14676e1b0;
        lVar3 = *(longlong *)(lVar2 + 0xe8);
        fStack_44 = DAT_14676e1b0._4_4_;
        local_40 = DAT_14676e1b8;
        if (lVar3 != 0) {
          if (*(char *)(lVar2 + 0x28) == '\x01') {
            lVar2 = *(longlong *)(lVar2 + 0x60);
LAB_142fb1871:
            if (lVar2 == 0) goto LAB_142fb18ad;
          }
          else if (*(char *)(lVar2 + 0x28) == '\x02') {
            lVar2 = *(longlong *)(lVar2 + 0x70);
            goto LAB_142fb1871;
          }
          local_48 = *(float *)(lVar3 + 0x90) * 100.0;
          fStack_44 = *(float *)(lVar3 + 0x94) * 100.0;
          local_40 = *(float *)(lVar3 + 0x98) * 100.0;
        }
LAB_142fb18ad:
        local_3c = CONCAT44(fStack_44,local_48);
        local_34 = local_40;
        if (*(char *)((longlong)pfVar6 + -0x5f) == '\x02') {
          FUN_142fa5920(&local_3c,*pfVar6,pfVar6[-0x3c]);
          local_40 = local_34;
        }
      }
      *(undefined8 *)(pfVar6 + -8) = local_3c;
      lVar7 = lVar7 + 0x140;
      pfVar6[-6] = local_40;
      pfVar6 = pfVar6 + 0x50;
    } while (lVar7 != lVar8);
  }
  return;
}



// FUNCTION 142fb1940 FUN_142fb1940 body=454 status=ok
// SIG undefined FUN_142fb1940(void)

void FUN_142fb1940(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong local_38;
  uint local_30;
  uint local_2c;
  undefined1 local_28 [24];
  longlong local_10;
  
  uVar2 = 0;
  if (param_2 != (longlong *)0x0) {
    uVar2 = (**(code **)(*param_2 + 0x148))(param_2);
  }
  lVar3 = FUN_142f9cfb0(uVar2,0);
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x9f8);
    local_38 = 0;
    local_30 = 0;
    local_2c = 0x80000000;
    uVar4 = FUN_143703a50();
    if (local_30 == (local_2c & 0x3fffffff)) {
      FUN_14370c460(uVar4,&local_38,0x18);
    }
    puVar1 = (undefined8 *)(local_38 + (longlong)(int)local_30 * 0x18);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    lVar3 = (longlong)(int)local_30;
    local_30 = local_30 + 1;
    lVar3 = local_38 + lVar3 * 0x18;
    FUN_1437166c0(lVar3,"avoidsystem");
    FUN_143716530(lVar3 + 0x10,uVar2,&DAT_14682bb30);
    uVar2 = FUN_1437151f0(&DAT_14682bb30);
    FUN_1437166c0(lVar3 + 8,uVar2);
    FUN_1437159e0(local_28,"hkaiAvoid.hkt");
    if (local_10 != 0) {
      FUN_143716d90(&local_38,&DAT_1467e3a30,local_10,0);
    }
    FUN_143715a60(local_28);
    uVar2 = FUN_143703a50();
    lVar3 = (longlong)(int)(local_30 + -1);
    if (-1 < (int)(local_30 + -1)) {
      lVar5 = local_38 + (lVar3 * 3 + 1) * 8;
      do {
        if (*(longlong *)(lVar5 + 8) != 0) {
          FUN_14370c150();
        }
        FUN_143716650(lVar5);
        FUN_143716650(lVar5 + -8);
        lVar5 = lVar5 + -0x18;
        lVar3 = lVar3 + -1;
      } while (-1 < lVar3);
    }
    local_30 = 0;
    if (-1 < (int)local_2c) {
      FUN_143702e10(uVar2,local_38,0x18,local_2c & 0x3fffffff);
    }
  }
  return;
}



// FUNCTION 142fb1b10 FUN_142fb1b10 body=108 status=ok
// SIG undefined FUN_142fb1b10(void)

void FUN_142fb1b10(undefined8 param_1,longlong param_2)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined1 local_10;
  
  if (((param_2 != 0) && (*(longlong *)(param_2 + 0x118) != 0)) &&
     ((*(uint *)(*(longlong *)(param_2 + 0x118) + 8) >> 6 & 1) == 0)) {
    local_28 = *(undefined4 *)(param_2 + 0x220);
    uStack_24 = *(undefined4 *)(param_2 + 0x224);
    local_20 = *(undefined4 *)(param_2 + 0x228);
    local_10 = 1;
    local_1c = local_28;
    uStack_18 = uStack_24;
    local_14 = local_20;
    FUN_142b85e90(local_28,&local_28);
  }
  return;
}



// FUNCTION 142fb1b80 FUN_142fb1b80 body=1146 status=ok
// SIG undefined FUN_142fb1b80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142fb1b80(longlong param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  float *pfVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  float *pfVar14;
  longlong *plVar15;
  longlong **pplVar16;
  longlong *plVar17;
  longlong **pplVar18;
  float fVar19;
  uint uVar20;
  uint *puVar21;
  float fVar22;
  undefined1 auStack_8e8 [32];
  float local_8c8;
  float fStack_8c4;
  undefined8 uStack_8c0;
  uint local_8b8;
  uint uStack_8b4;
  uint uStack_8b0;
  undefined4 uStack_8ac;
  longlong *local_8a8;
  int local_8a0;
  undefined8 local_898;
  float fStack_890;
  float fStack_88c;
  undefined8 uStack_888;
  uint uStack_880;
  uint uStack_87c;
  undefined8 uStack_878;
  undefined4 local_870;
  longlong *local_868;
  float fStack_860;
  float fStack_85c;
  uint *local_858;
  uint uStack_850;
  uint uStack_84c;
  undefined8 local_848;
  longlong local_840 [256];
  longlong *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_8e8;
  fStack_8c4 = 1.4013e-45;
  local_40 = (longlong *)0x0;
  plVar17 = (longlong *)(param_1 + 0x70);
  local_38 = 0;
  uVar3 = *(uint *)(param_1 + 0x98);
  puVar1 = (uint *)(param_1 + 0x80);
  local_8c8 = 0.0;
  uStack_8b4 = 0;
  uStack_8b0 = 0;
  if (uVar3 != 0) {
    puVar21 = *(uint **)(param_1 + 0x90);
    if (*(uint **)(param_1 + 0x90) == (uint *)0x0) {
      puVar21 = puVar1;
    }
    uVar4 = *puVar21;
    uStack_8b0 = 0;
    local_8c8 = 0.0;
    while (uVar4 == 0) {
      lVar13 = (longlong)(int)local_8c8;
      uStack_8b0 = uStack_8b0 + 0x20;
      fVar19 = (float)((int)local_8c8 + 1);
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_8c8;
      local_8c8 = fVar19;
      if (bVar5) goto LAB_142fb1c7e;
      uVar4 = puVar21[lVar13 + 1];
    }
    fStack_8c4 = (float)(-uVar4 & uVar4);
    iVar8 = 0x1f;
    if (fStack_8c4 != 0.0) {
      for (; (uint)fStack_8c4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (fStack_8c4 == 0.0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_8b4 = (uStack_8b0 - iVar8) + 0x1f;
    if ((int)uVar3 < (int)uStack_8b4) {
LAB_142fb1c7e:
      uStack_8b4 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x98);
  uStack_850 = 0xffffffff;
  uStack_84c = uStack_8b4;
  uStack_878 = CONCAT44(uStack_8ac,uStack_8b0);
  fStack_890 = local_8c8;
  fStack_88c = fStack_8c4;
  local_8b8 = -1 << ((byte)uVar4 & 0x1f);
  uVar20 = uVar4 & 0xffffffe0;
  fStack_860 = local_8c8;
  fStack_85c = fStack_8c4;
  uStack_8b4 = uVar4;
  if (uVar4 != uVar3) {
    puVar21 = *(uint **)(param_1 + 0x90);
    if (*(uint **)(param_1 + 0x90) == (uint *)0x0) {
      puVar21 = puVar1;
    }
    uVar12 = puVar21[(int)uVar4 >> 5] & local_8b8;
    iVar8 = (int)uVar4 >> 5;
    while (uVar12 == 0) {
      uVar20 = uVar20 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_142fb1d52;
      uVar12 = puVar21[(longlong)iVar8 + 1];
      local_8b8 = 0xffffffff;
      iVar8 = iVar8 + 1;
    }
    uVar12 = -uVar12 & uVar12;
    iVar8 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar12 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_8b4 = (uVar20 - iVar8) + 0x1f;
    if ((int)uVar3 < (int)uStack_8b4) {
LAB_142fb1d52:
      uStack_8b4 = uVar3;
    }
  }
  uVar3 = uStack_8b4;
  uStack_8c0 = puVar1;
  local_898 = plVar17;
  uStack_888 = puVar1;
  local_858 = puVar1;
  local_848 = uStack_878;
  local_868 = plVar17;
  uStack_880 = uStack_850;
  uStack_87c = uStack_84c;
  do {
    if (((uStack_84c == uVar3) && (local_858 == puVar1)) && (local_868 == plVar17)) {
      plVar17 = local_840;
      if (local_40 != (longlong *)0x0) {
        plVar17 = (longlong *)0x0;
      }
      plVar17 = (longlong *)((ulonglong)plVar17 | (ulonglong)local_40);
      plVar15 = plVar17 + (longlong)(int)local_38 * 2;
      for (; plVar17 != plVar15; plVar17 = plVar17 + 2) {
        if (((int)plVar17[1] != 0) && ((longlong *)*plVar17 != (longlong *)0x0)) {
          cVar7 = (**(code **)(*(longlong *)*plVar17 + 0x18))();
          if (cVar7 != '\0') {
            plVar11 = (longlong *)0x0;
            if ((int)plVar17[1] != 0) {
              plVar11 = (longlong *)*plVar17;
            }
            (**(code **)(*plVar11 + 0x40))();
          }
        }
      }
      plVar17 = local_840;
      iVar8 = (int)local_38;
      if (local_40 != (longlong *)0x0) {
        plVar17 = local_40;
      }
      for (; iVar8 != 0; iVar8 = iVar8 + -1) {
        TBaseDelegate<FText>::~TBaseDelegate<FText>(plVar17);
        plVar17 = plVar17 + 2;
      }
      if (local_40 != (longlong *)0x0) {
        FMemory::Free(local_40);
      }
      return;
    }
    lVar13 = *local_868;
    lVar9 = (longlong)(int)uStack_84c * 0x40;
    pfVar10 = (float *)(lVar9 + 8 + lVar13);
    local_8c8 = *pfVar10;
    fStack_8c4 = pfVar10[1];
    fVar19 = pfVar10[2];
    fVar22 = pfVar10[3];
    uStack_8c0 = *(uint **)(pfVar10 + 2);
    uStack_8b0 = *(uint *)(lVar9 + 0x20 + lVar13);
    uVar2 = *(undefined8 *)(lVar9 + 0x18 + lVar13);
    local_8b8 = (uint)uVar2;
    uStack_8b4 = (uint)((ulonglong)uVar2 >> 0x20);
    pplVar18 = (longlong **)(lVar9 + 0x28 + lVar13);
    local_8a0 = 0;
    local_8a8 = (longlong *)0x0;
    if (((pplVar18 != &local_8a8) && (*(int *)(pplVar18 + 1) != 0)) &&
       (plVar15 = *pplVar18, plVar15 != (longlong *)0x0)) {
      (**(code **)(*plVar15 + 0x30))(plVar15,&local_8a8);
      fVar19 = (float)uStack_8c0;
      fVar22 = uStack_8c0._4_4_;
    }
    uStack_888 = (uint *)CONCAT44(uStack_8b4,local_8b8);
    uStack_878 = 0;
    local_870 = 0;
    local_898 = (longlong *)CONCAT44(fStack_8c4,local_8c8);
    fStack_890 = fVar19;
    fStack_88c = fVar22;
    uStack_880 = uStack_8b0;
    if ((local_8a0 != 0) && (local_8a8 != (longlong *)0x0)) {
      (**(code **)(*local_8a8 + 0x30))(local_8a8,&uStack_878);
    }
    pfVar10 = *(float **)(param_1 + 0x18);
    pfVar14 = pfVar10 + (longlong)*(int *)(param_1 + 0x20) * 7;
    if (pfVar10 != pfVar14) {
      do {
        if (((((*pfVar10 <= fStack_88c) &&
              ((float)local_898 < pfVar10[3] || (float)local_898 == pfVar10[3])) &&
             (pfVar10[1] <= (float)uStack_888)) &&
            ((local_898._4_4_ < pfVar10[4] || local_898._4_4_ == pfVar10[4] &&
             (pfVar10[2] <= uStack_888._4_4_)))) &&
           (fStack_890 < pfVar10[5] || fStack_890 == pfVar10[5])) {
          bVar5 = true;
          goto LAB_142fb1e92;
        }
        pfVar10 = pfVar10 + 7;
      } while (pfVar10 != pfVar14);
    }
    bVar5 = false;
LAB_142fb1e92:
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&uStack_878);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_8a8);
    uVar6 = local_38;
    if (bVar5) {
      lVar13 = (longlong)(int)local_38;
      iVar8 = (int)local_38 + 1;
      local_38 = CONCAT44(local_38._4_4_,iVar8);
      if (local_38._4_4_ < iVar8) {
        FUN_142fb1290(local_840,uVar6 & 0xffffffff);
      }
      plVar15 = local_840;
      if (local_40 != (longlong *)0x0) {
        plVar15 = local_40;
      }
      pplVar16 = (longlong **)(plVar15 + lVar13 * 2);
      *pplVar16 = (longlong *)0x0;
      *(undefined4 *)(pplVar16 + 1) = 0;
      if (((pplVar18 != pplVar16) && (*(int *)(pplVar18 + 1) != 0)) &&
         (*pplVar18 != (longlong *)0x0)) {
        (**(code **)(**pplVar18 + 0x30))();
      }
    }
    uStack_850 = uStack_850 & ~(uint)fStack_85c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&fStack_860);
  } while( true );
}



// FUNCTION 142fb2000 FUN_142fb2000 body=1400 status=ok
// SIG undefined FUN_142fb2000(void)

void FUN_142fb2000(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  LPVOID pvVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  int local_res10 [2];
  longlong local_88;
  uint local_80;
  uint local_7c;
  longlong local_70;
  undefined8 local_68;
  int local_60;
  uint local_5c;
  longlong *local_58;
  undefined8 uStack_50;
  undefined1 local_48 [24];
  longlong local_30;
  
  FUN_141763960();
  plVar9 = (longlong *)0x0;
  local_res10[0] = 0;
  local_58 = (longlong *)0x0;
  uStack_50 = 0;
  plVar10 = plVar9;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 2) == 0) {
      return;
    }
    local_88 = 0;
    local_80 = 0;
    local_7c = 0x80000000;
    uVar5 = FUN_143703a50();
    if (local_80 == (local_7c & 0x3fffffff)) {
      FUN_14370c460(uVar5,&local_88,0x18);
    }
    puVar3 = (undefined8 *)(local_88 + (longlong)(int)local_80 * 0x18);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    lVar4 = (longlong)(int)local_80;
    local_80 = local_80 + 1;
    lVar4 = local_88 + lVar4 * 0x18;
    FUN_1437166c0(lVar4,"MeshSet");
    FUN_143716530(lVar4 + 0x10,uVar5,&DAT_146810240);
    uVar5 = FUN_1437151f0(&DAT_146810240);
    FUN_1437166c0(lVar4 + 8,uVar5);
    uVar5 = FUN_143703a50();
    if (local_80 == (local_7c & 0x3fffffff)) {
      FUN_14370c460(uVar5,&local_88,0x18);
    }
    puVar3 = (undefined8 *)(local_88 + (longlong)(int)local_80 * 0x18);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    lVar4 = (longlong)(int)local_80;
    local_80 = local_80 + 1;
    lVar4 = local_88 + lVar4 * 0x18;
    FUN_1437166c0(lVar4,"GraphSet");
    FUN_143716530(lVar4 + 0x10,uVar5,&DAT_146810240);
    uVar5 = FUN_1437151f0(&DAT_146810240);
    FUN_1437166c0(lVar4 + 8,uVar5);
    local_68 = 0;
    local_60 = 0;
    local_5c = 0x80000000;
    FUN_1437158f0(local_48,&local_68);
    if ((local_30 != 0) &&
       (iVar7 = FUN_143716d90(&local_88,&DAT_1467e3a30,local_30,0), plVar10 = (longlong *)0x0,
       -1 < iVar7)) {
      local_res10[0] = local_60;
      uStack_50 = CONCAT44(uStack_50._4_4_,local_60);
      plVar10 = plVar9;
      if (0 < local_60) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_58,0);
        plVar10 = local_58;
      }
      FUN_14370c700(plVar10,local_68,local_res10[0]);
    }
    plVar9 = (longlong *)param_2[1];
    if ((int *)plVar9[1] < (int *)*plVar9 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res10,4);
      }
    }
    else {
      local_res10[0] = *(int *)*plVar9;
      *plVar9 = *plVar9 + 4;
    }
    if (local_res10[0] != 0) {
      (**(code **)(*param_2 + 0x50))(param_2,plVar10,local_res10[0]);
    }
    FUN_143715a60(local_48);
    uVar5 = FUN_143703a50();
    local_60 = 0;
    if (-1 < (int)local_5c) {
      FUN_143702e10(uVar5,local_68,1,local_5c & 0x3fffffff);
    }
    local_68 = 0;
    local_5c = 0x80000000;
    uVar5 = FUN_143703a50();
    lVar4 = (longlong)(int)(local_80 + -1);
    if (-1 < (int)(local_80 + -1)) {
      lVar8 = local_88 + (lVar4 * 3 + 1) * 8;
      do {
        if (*(longlong *)(lVar8 + 8) != 0) {
          FUN_14370c150();
        }
        FUN_143716650(lVar8);
        FUN_143716650(lVar8 + -8);
        lVar8 = lVar8 + -0x18;
        lVar4 = lVar4 + -1;
      } while (-1 < lVar4);
    }
    local_80 = 0;
    if (-1 < (int)local_7c) {
      FUN_143702e10(uVar5,local_88,0x18,local_7c & 0x3fffffff);
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x30) != 0) {
      FUN_14370c150();
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_14370c150();
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
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
    if (local_res10[0] == 0) {
      return;
    }
    uStack_50 = CONCAT44(uStack_50._4_4_,local_res10[0]);
    if (0 < local_res10[0]) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_58,0);
      plVar10 = local_58;
    }
    (**(code **)(*param_2 + 0x50))(param_2,plVar10,local_res10[0]);
    FUN_1424c8610();
    FUN_1424c98a0();
    FUN_143717320(&local_88,plVar10,local_res10[0]);
    if (local_70 != 0) {
      puVar3 = (undefined8 *)FUN_143716940(&local_68,0,0);
      local_58 = (longlong *)*puVar3;
      uStack_50 = puVar3[1];
      lVar4 = FUN_143716af0(local_70,0,&local_58);
      if (lVar4 != 0) {
        plVar1 = *(longlong **)(lVar4 + 0x18);
        if (((*(longlong *)(lVar4 + 0x20) != 0) &&
            (cVar2 = FUN_143714910(*(longlong *)(lVar4 + 0x20),&DAT_1467e3a30), cVar2 != '\0')) &&
           (plVar1 != (longlong *)0x0)) {
          *(undefined8 *)(lVar4 + 0x18) = 0;
          *(undefined8 *)(lVar4 + 0x20) = 0;
          *(undefined8 *)(lVar4 + 0x28) = 0;
          plVar9 = plVar1;
        }
        FUN_14370c150(lVar4);
        if (plVar9 != (longlong *)0x0) {
          lVar4 = FUN_143717490(plVar9,"MeshSet",0);
          *(longlong *)(param_1 + 0x30) = lVar4;
          if (lVar4 != 0) {
            FUN_14370c030(lVar4);
          }
          lVar4 = FUN_143717490(plVar9,"GraphSet",0);
          *(longlong *)(param_1 + 0x38) = lVar4;
          if (lVar4 != 0) {
            FUN_14370c030(lVar4);
          }
          uVar5 = FUN_143703a50();
          iVar7 = (int)plVar9[1] + -1;
          lVar4 = (longlong)iVar7;
          if (-1 < iVar7) {
            lVar8 = *plVar9 + (lVar4 * 3 + 1) * 8;
            do {
              if (*(longlong *)(lVar8 + 8) != 0) {
                FUN_14370c150();
              }
              FUN_143716650(lVar8);
              FUN_143716650(lVar8 + -8);
              lVar8 = lVar8 + -0x18;
              lVar4 = lVar4 + -1;
            } while (-1 < lVar4);
          }
          *(undefined4 *)(plVar9 + 1) = 0;
          if (-1 < (int)*(uint *)((longlong)plVar9 + 0xc)) {
            FUN_143702e10(uVar5,*plVar9,0x18,*(uint *)((longlong)plVar9 + 0xc) & 0x3fffffff);
          }
          *plVar9 = 0;
          *(undefined4 *)((longlong)plVar9 + 0xc) = 0x80000000;
          pvVar6 = TlsGetValue(DAT_146b7bf70);
          if (pvVar6 == (LPVOID)0x0) {
            pvVar6 = DAT_146b7bf68;
          }
          (**(code **)(**(longlong **)((longlong)pvVar6 + 0x58) + 0x10))
                    (*(longlong **)((longlong)pvVar6 + 0x58),plVar9,0x10);
        }
      }
    }
    FUN_1437173d0(&local_88);
  }
  if (plVar10 != (longlong *)0x0) {
    FMemory::Free(plVar10);
  }
  return;
}



// FUNCTION 142fb2580 FUN_142fb2580 body=722 status=ok
// SIG undefined FUN_142fb2580(void)

void FUN_142fb2580(float *param_1,float param_2,longlong *param_3)

{
  uint *puVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  longlong *plVar15;
  int local_res8 [2];
  undefined4 local_res10 [2];
  longlong *local_res18;
  undefined4 *local_res20;
  int local_d8;
  uint uStack_d4;
  uint uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  int iStack_b0;
  uint uStack_ac;
  uint *local_a8;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  longlong *local_90;
  undefined8 uStack_88;
  uint *puStack_80;
  uint uStack_78;
  uint uStack_74;
  undefined8 uStack_70;
  
  *param_1 = 0.0;
  local_res18 = param_3;
  TSet<TTuple<UClass_*,TArray<ULinkerPlaceholderExportObject_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<ULinkerPlaceholderExportObject_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
  ::Reset(param_1 + 2);
  puVar1 = (uint *)(param_3 + 2);
  *param_1 = param_2;
  uVar3 = *(uint *)(param_3 + 5);
  local_d8 = 0;
  uStack_d4 = 1;
  uStack_c4 = 0;
  iStack_c0 = 0;
  if (uVar3 != 0) {
    puVar12 = (uint *)param_3[4];
    if ((uint *)param_3[4] == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar4 = *puVar12;
    iStack_c0 = 0;
    local_d8 = 0;
    while (uVar4 == 0) {
      lVar9 = (longlong)local_d8;
      iStack_c0 = iStack_c0 + 0x20;
      iVar13 = local_d8 + 1;
      bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_d8;
      local_d8 = iVar13;
      if (bVar6) goto LAB_142fb266a;
      uVar4 = puVar12[lVar9 + 1];
    }
    uStack_d4 = -uVar4 & uVar4;
    iVar13 = 0x1f;
    if (uStack_d4 != 0) {
      for (; uStack_d4 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uStack_d4 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - iVar13;
    }
    uStack_c4 = (iStack_c0 - iVar13) + 0x1f;
    if ((int)uVar3 < (int)uStack_c4) {
LAB_142fb266a:
      uStack_c4 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_3 + 5);
  uStack_a0 = 0xffffffff;
  uStack_9c = uStack_c4;
  local_98 = CONCAT44(uStack_bc,iStack_c0);
  uStack_88 = CONCAT44(uStack_d4,local_d8);
  uVar14 = uVar4 & 0xffffffe0;
  iStack_b0 = local_d8;
  uStack_ac = uStack_d4;
  plVar15 = param_3;
  local_a8 = puVar1;
  local_90 = param_3;
  puStack_80 = puVar1;
  uStack_70 = local_98;
  uStack_78 = uStack_a0;
  uStack_74 = uStack_9c;
  uStack_c4 = uVar4;
  if (uVar4 != uVar3) {
    puVar12 = (uint *)param_3[4];
    if ((uint *)param_3[4] == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar8 = puVar12[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar13 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar14 = uVar14 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar13)
      goto LAB_142fb2732;
      uVar8 = puVar12[(longlong)iVar13 + 1];
      iVar13 = iVar13 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar13 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - iVar13;
    }
    uStack_c4 = (uVar14 - iVar13) + 0x1f;
    if ((int)uVar3 < (int)uStack_c4) {
LAB_142fb2732:
      uStack_c4 = uVar3;
    }
  }
  while (((uStack_9c != uStack_c4 || (local_a8 != puVar1)) || (param_3 != plVar15))) {
    puVar11 = (undefined4 *)((longlong)(int)uStack_9c * 0x20 + *param_3);
    local_res10[0] = *puVar11;
    local_res20 = local_res10;
    FUN_142f85df0(param_1 + 2,local_res8,&local_res20,0);
    iVar13 = puVar11[4];
    lVar9 = *(longlong *)(param_1 + 2) + (longlong)local_res8[0] * 0x20;
    iVar5 = *(int *)(lVar9 + 0x10);
    iVar7 = iVar5 + iVar13;
    *(int *)(lVar9 + 0x10) = iVar7;
    if (*(int *)(lVar9 + 0x14) < iVar7) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(lVar9 + 8);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar5 + *(longlong *)(lVar9 + 8)),0,(longlong)iVar13);
    iVar13 = 0;
    lVar10 = 0;
    if (0 < (int)puVar11[4]) {
      do {
        fVar2 = *(float *)(*(longlong *)(puVar11 + 2) + lVar10 * 4);
        if (fVar2 <= 0.0) {
          *(undefined1 *)(lVar10 + *(longlong *)(lVar9 + 8)) = 0xff;
        }
        else {
          *(char *)(lVar10 + *(longlong *)(lVar9 + 8)) = (char)(int)((fVar2 / *param_1) * 254.0);
        }
        iVar13 = iVar13 + 1;
        lVar10 = lVar10 + 1;
      } while (iVar13 < (int)puVar11[4]);
    }
    uStack_a0 = uStack_a0 & ~uStack_ac;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_b0);
    plVar15 = local_res18;
  }
  return;
}



// FUNCTION 142fb2860 FUN_142fb2860 body=68 status=ok
// SIG undefined FUN_142fb2860(void)

void FUN_142fb2860(longlong *param_1,char param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((param_1 != (longlong *)0x0) && (param_2 != '\0')) {
    uVar1 = FUN_142fc0410();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      *(char *)(lVar2 + 0x2851) = param_2;
    }
  }
  return;
}



// FUNCTION 142fb28b0 FUN_142fb28b0 body=12 status=ok
// SIG undefined FUN_142fb28b0(void)

void FUN_142fb28b0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0x1010101;
  *(undefined1 *)(param_1 + 0x21) = 1;
  return;
}



// FUNCTION 142fb28c0 FUN_142fb28c0 body=431 status=ok
// SIG undefined FUN_142fb28c0(void)

void FUN_142fb28c0(longlong *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 local_58 [4];
  int local_54;
  undefined8 local_50;
  undefined4 local_48;
  uint local_44;
  undefined1 local_38 [16];
  longlong local_28;
  int local_20;
  uint local_1c;
  
  lVar5 = (**(code **)(*param_1 + 0x148))();
  if (lVar5 != 0) {
    cVar4 = UWorld::IsGameWorld(lVar5);
    if (cVar4 != '\0') goto LAB_142fb28ed;
  }
  param_2 = '\0';
LAB_142fb28ed:
  if (param_1[0x11f] != 0) {
    cVar4 = UPrimitiveComponent::IsWelded();
    if (cVar4 != param_2) {
      if (param_2 == '\0') {
        FUN_14384bfc0(param_1[0x11f]);
      }
      else {
        FUN_143718d80(local_58);
        local_54 = 1;
        FUN_1437166c0(local_38,"Async AI Worker Thread");
        iVar3 = local_54;
        local_58[0] = 0;
        uVar6 = FUN_143703a50();
        if ((int)(local_1c & 0x3fffffff) < iVar3) {
          iVar2 = (local_1c & 0x3fffffff) * 2;
          iVar1 = iVar3;
          if (iVar3 < iVar2) {
            iVar1 = iVar2;
          }
          FUN_14370c310(uVar6,&local_28,iVar1,1);
        }
        puVar7 = (undefined1 *)(local_20 + local_28);
        lVar5 = (longlong)(iVar3 - local_20);
        if (0 < iVar3 - local_20) {
          do {
            if (puVar7 != (undefined1 *)0x0) {
              *puVar7 = 1;
            }
            puVar7 = puVar7 + 1;
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
        }
        local_20 = iVar3;
        FUN_14384c580(param_1[0x11f],local_58,1);
        AXProjectile::SetLingerTime(param_1[0x11f],0x3a83126f);
        *(undefined1 *)(param_1[0x11f] + 0x510) = 0;
        uVar6 = FUN_143703a50();
        local_20 = 0;
        if (-1 < (int)local_1c) {
          FUN_143702e10(uVar6,local_28,1,local_1c & 0x3fffffff);
        }
        local_28 = 0;
        local_1c = 0x80000000;
        FUN_143716650(local_38);
        uVar6 = FUN_143703a50();
        local_48 = 0;
        if (-1 < (int)local_44) {
          FUN_143702e10(uVar6,local_50,4,local_44 & 0x3fffffff);
        }
      }
    }
  }
  FUN_142fb32d0(param_1);
  return;
}



// FUNCTION 142fb2a70 FUN_142fb2a70 body=7 status=ok
// SIG undefined FUN_142fb2a70(void)

void FUN_142fb2a70(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x428) = param_2;
  return;
}



// FUNCTION 142fb2a80 FUN_142fb2a80 body=2082 status=ok
// SIG undefined FUN_142fb2a80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142fb2a80(longlong param_1,byte param_2,byte param_3,float *param_4,undefined8 *param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [12];
  bool bVar7;
  char cVar8;
  BOOL BVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined1 (*pauVar13) [12];
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_128 [32];
  longlong local_108;
  float local_100;
  int local_f8;
  undefined4 local_f4;
  float *local_f0;
  longlong local_e8;
  float local_e0;
  ulonglong local_d8;
  float fStack_d0;
  float fStack_cc;
  undefined1 local_c8 [16];
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  *(undefined1 *)(param_1 + 0x80) = 0;
  local_f0 = param_4;
  lVar12 = FWeakObjectPtr::Get();
  if (lVar12 == 0) {
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0xe8);
  if (lVar4 == 0) {
    return;
  }
  param_3 = param_2 & param_3;
  if (param_2 != *(byte *)(param_1 + 0xa9)) {
    if (param_2 == 0) {
      BVar9 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar12 + 0x9c8));
      if (BVar9 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar12 + 0x9c8));
      }
      if ((*(longlong *)(lVar12 + 0x9f8) != 0) && (lVar4 != 0)) {
        iVar3 = *(int *)(lVar4 + 0x18);
        FWeakObjectPtr::operator=(&local_f8,0);
        lVar5 = *(longlong *)(lVar12 + 0xa08);
        *(int *)(lVar5 + (longlong)iVar3 * 8) = local_f8;
        *(undefined4 *)(lVar5 + 4 + (longlong)iVar3 * 8) = local_f4;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Remove(lVar12 + 0x968,iVar3);
        FUN_1438ed0b0(*(undefined8 *)(lVar12 + 0x9f8),lVar4);
        param_4 = local_f0;
      }
    }
    else {
      local_d8 = FWeakObjectPtr::Get(param_1 + 0x20);
      lVar4 = *(longlong *)(param_1 + 0xe8);
      local_108 = lVar4;
      BVar9 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar12 + 0x9c8));
      if (BVar9 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar12 + 0x9c8));
      }
      if ((*(longlong *)(lVar12 + 0x9f8) != 0) && (lVar4 != 0)) {
        iVar10 = FUN_142fa4ef0(lVar12 + 0x968);
        local_e8 = (longlong)iVar10;
        *(longlong *)(lVar4 + 0x18) = local_e8;
        plVar1 = (longlong *)(lVar12 + 0xa08);
        iVar3 = *(int *)(lVar12 + 0xa10);
        iVar11 = iVar10 + 1;
        if (iVar10 + 1 <= *(int *)(lVar12 + 0xa10)) {
          iVar11 = *(int *)(lVar12 + 0xa10);
        }
        if (iVar3 < iVar11) {
          *(int *)(lVar12 + 0xa10) = iVar11;
          local_f8 = iVar11 - iVar3;
          if (*(int *)(lVar12 + 0xa14) < iVar11) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + (longlong)iVar3 * 8),0,(longlong)local_f8 << 3);
        }
        else if ((iVar11 < iVar3) && (iVar11 != iVar3)) {
          *(int *)(lVar12 + 0xa10) = iVar11;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
        }
        FWeakObjectPtr::operator=(*plVar1 + local_e8 * 8,local_d8);
        FUN_1438ecf10(*(undefined8 *)(lVar12 + 0x9f8),local_108);
        param_4 = local_f0;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar12 + 0x9c8));
  }
  if (param_3 != *(byte *)(param_1 + 0xa8)) {
    if (param_3 == 0) {
      hkaiCollisionAvoidance::Character::disableSteering();
    }
    else {
      hkaiCollisionAvoidance::Character::enableSteering();
    }
  }
  *(byte *)(param_1 + 0xa9) = param_2;
  *(byte *)(param_1 + 0xa8) = param_3;
  if ((param_2 == 0) && (param_3 == 0)) {
    return;
  }
  lVar12 = *(longlong *)(param_1 + 0xe8);
  if (*(longlong *)(lVar12 + 0x100) == 0) {
    return;
  }
  local_f0 = (float *)*param_5;
  local_e0 = *(float *)(param_5 + 1);
  fVar16 = param_4[1];
  fVar22 = *param_4;
  fVar14 = fVar22 * fVar22 + fVar16 * fVar16;
  if (fVar14 == 1.0) {
    if (param_4[2] != 0.0) {
LAB_142fb2e37:
      fVar19 = fVar16;
      fVar20 = fVar22;
      local_100 = 0.0;
      goto LAB_142fb2e42;
    }
    local_108 = *(longlong *)param_4;
    fVar20 = (float)local_108;
    fVar19 = (float)((ulonglong)local_108 >> 0x20);
    local_100 = param_4[2];
  }
  else {
    fVar19 = DAT_1468b5d94;
    fVar20 = DAT_1468b5d90;
    local_100 = DAT_1468b5d98;
    if (1e-08 <= fVar14) {
      auVar18 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
      fVar19 = auVar18._0_4_;
      fVar19 = fVar19 + fVar19 * (0.5 - fVar14 * 0.5 * fVar19 * fVar19);
      fVar19 = fVar19 + fVar19 * (0.5 - fVar14 * 0.5 * fVar19 * fVar19);
      fVar22 = fVar22 * fVar19;
      fVar16 = fVar16 * fVar19;
      goto LAB_142fb2e37;
    }
LAB_142fb2e42:
    local_108 = CONCAT44(fVar19,fVar20);
  }
  local_d8 = *(ulonglong *)(lVar12 + 0x90);
  fStack_d0 = *(float *)(lVar12 + 0x98);
  fVar22 = *(float *)(lVar12 + 0x94) * 100.0;
  fVar14 = *(float *)(lVar12 + 0x90) * 100.0;
  fVar16 = fVar22 * fVar22 + fVar14 * fVar14;
  if (fVar16 == 1.0) {
    fVar21 = fVar22;
    fVar23 = fVar14;
    fVar15 = fStack_d0 * 100.0;
    if (fStack_d0 * 100.0 == 0.0) goto LAB_142fb2f3f;
  }
  else {
    fVar21 = DAT_1468b5d94;
    fVar23 = DAT_1468b5d90;
    fVar15 = DAT_1468b5d98;
    if (fVar16 < 1e-08) goto LAB_142fb2f3f;
    auVar18 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
    fVar21 = auVar18._0_4_;
    fVar21 = fVar21 + fVar21 * (0.5 - fVar16 * 0.5 * fVar21 * fVar21);
    fVar21 = fVar21 + fVar21 * (0.5 - fVar16 * 0.5 * fVar21 * fVar21);
    fVar14 = fVar14 * fVar21;
    fVar22 = fVar22 * fVar21;
  }
  fVar21 = fVar22;
  fVar23 = fVar14;
  fVar15 = 0.0;
LAB_142fb2f3f:
  if (((0.0001 < ABS(fVar23 - *(float *)(param_1 + 0x9c))) ||
      (0.0001 < ABS(fVar21 - *(float *)(param_1 + 0xa0)))) ||
     (0.0001 < ABS(fVar15 - *(float *)(param_1 + 0xa4)))) {
    cVar8 = '\x01';
  }
  else {
    cVar8 = '\0';
  }
  *(char *)(param_1 + 0x80) = cVar8;
  if (((0.0001 < ABS(fVar23)) || (0.0001 < ABS(fVar21))) || (0.0001 < ABS(fVar15))) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  fVar22 = fVar19 * *(float *)(param_1 + 0x94) + fVar20 * *(float *)(param_1 + 0x90) +
           local_100 * *(float *)(param_1 + 0x98);
  fVar16 = -1.0;
  if ((-1.0 <= fVar22) && (fVar16 = fVar22, 1.0 <= fVar22)) {
    fVar16 = 1.0;
  }
  if ((((cVar8 == '\0') || (bVar7)) ||
      (fVar16 = _guard_xfg_dispatch_icall_nop(fVar16),
      *(float *)(param_1 + 0xdc) <= ABS(fVar16) * 57.295776)) || (*(char *)(param_1 + 0xe0) != '\0')
     ) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  *(ulonglong *)(param_1 + 0x9c) = CONCAT44(fVar19,fVar20);
  *(float *)(param_1 + 0xa4) = local_100;
  if (bVar7) {
    local_f0 = *(float **)(param_1 + 0x84);
    local_e0 = *(float *)(param_1 + 0x8c);
  }
  else {
    *(undefined8 *)(param_1 + 0x84) = *param_5;
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_5 + 1);
    *(ulonglong *)(param_1 + 0x90) = CONCAT44(fVar19,fVar20);
    *(float *)(param_1 + 0x98) = local_100;
  }
  local_c8._4_4_ = fVar19;
  local_c8._0_4_ = fVar20;
  local_c8._8_4_ = local_100;
  local_c8._12_4_ = 0;
  FUN_1438eb570(lVar12,local_c8);
  lVar12 = *(longlong *)(param_1 + 0xe8);
  *(float *)(lVar12 + 0x40) = SUB84(local_f0,0) * 0.01;
  *(float *)(lVar12 + 0x44) = (float)((ulonglong)local_f0 >> 0x20) * 0.01;
  *(float *)(lVar12 + 0x48) = local_e0 * 0.01;
  *(undefined4 *)(lVar12 + 0x4c) = 0;
  if (((-(float)DAT_14676e1b0 < *(float *)(param_1 + 0x38)) &&
      (*(float *)(param_1 + 0x38) < (float)DAT_14676e1b0)) &&
     (((-DAT_14676e1b0._4_4_ < *(float *)(param_1 + 0x3c) &&
       ((*(float *)(param_1 + 0x3c) < DAT_14676e1b0._4_4_ &&
        (-DAT_14676e1b8 < *(float *)(param_1 + 0x40))))) &&
      (*(float *)(param_1 + 0x40) < DAT_14676e1b8)))) {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    fVar16 = *(float *)(param_1 + 0x40);
    pauVar13 = (undefined1 (*) [12])FUN_142fa3db0(param_1,&local_108);
    auVar6 = *pauVar13;
    fVar22 = auVar6._0_4_ * 0.01 - (float)uVar2 * 0.01;
    fVar14 = auVar6._4_4_ * 0.01 - (float)((ulonglong)uVar2 >> 0x20) * 0.01;
    fVar16 = auVar6._8_4_ * 0.01 - fVar16 * 0.01;
    fVar22 = fVar22 * fVar22;
    fVar14 = fVar14 * fVar14;
    auVar17._8_4_ = fVar16 * fVar16;
    auVar17._4_4_ = auVar17._8_4_;
    auVar17._0_4_ = auVar17._8_4_;
    auVar17._12_4_ = auVar17._8_4_;
    fVar19 = fVar14 + fVar22 + auVar17._8_4_;
    fVar20 = fVar14 + fVar22 + auVar17._8_4_;
    auVar18._4_4_ = fVar20;
    auVar18._0_4_ = fVar19;
    auVar18._8_4_ = fVar14 + fVar22 + auVar17._8_4_;
    auVar18._12_4_ = fVar14 + fVar22 + auVar17._8_4_;
    auVar18 = rsqrtps(auVar17,auVar18);
    fVar16 = auVar18._0_4_;
    fVar22 = auVar18._4_4_;
    fStack_cc = (float)(~-(uint)(fVar19 <= 0.0) &
                       (uint)((3.0 - fVar19 * fVar16 * fVar16) * fVar16 * 0.5 * fVar19)) -
                *(float *)(param_1 + 0xd8) * *(float *)(*(longlong *)(param_1 + 0xe8) + 0xa0);
    fStack_d0 = (float)(local_c8._8_4_ ^ 0x80000000);
    local_d8 = local_c8._0_8_ ^ 0x8000000080000000;
    setPxVehicleEngineDataMDampingRateZeroThrottleClutchEngaged
              (CONCAT44(fStack_cc,fStack_cc),
               CONCAT44(~-(uint)(fVar20 <= 0.0) &
                        (uint)((3.0 - fVar20 * fVar22 * fVar22) * fVar22 * 0.5 * fVar20),fStack_cc))
    ;
    hkaiCollisionAvoidance::Character::provideHorizonPlane
              (*(undefined8 *)(param_1 + 0xe8),&local_d8);
  }
  return;
}



// FUNCTION 142fb32b0 FUN_142fb32b0 body=22 status=ok
// SIG undefined FUN_142fb32b0(void)

void FUN_142fb32b0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x9c) = *param_2;
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 1);
  return;
}



// FUNCTION 142fb32d0 FUN_142fb32d0 body=123 status=ok
// SIG undefined FUN_142fb32d0(void)

void FUN_142fb32d0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 0x7fffffff;
  if (*(longlong *)(param_1 + 0x8f8) != 0) {
    cVar2 = UPrimitiveComponent::IsWelded();
    if (cVar2 != '\0') {
      bVar1 = true;
      uVar4 = 0x7fffffff;
      goto LAB_142fb330c;
    }
  }
  uVar4 = *(undefined4 *)(param_1 + 0x848);
  bVar1 = false;
LAB_142fb330c:
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x8f8) != 0) {
    FUN_14384d0d0(*(longlong *)(param_1 + 0x8f8),uVar4);
    lVar3 = *(longlong *)(param_1 + 0x8f8);
  }
  if (!bVar1) {
    uVar5 = *(undefined4 *)(param_1 + 0x84c);
  }
  if (lVar3 != 0) {
    uhx::glues::AGPlayerState_Glue_obj::set_TimeSurvivedMinXP(lVar3,uVar5);
  }
  return;
}



// FUNCTION 142fb3370 FUN_142fb3370 body=412 status=ok
// SIG undefined FUN_142fb3370(void)

void FUN_142fb3370(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float local_98;
  float local_94;
  float local_90;
  float local_88;
  float local_84;
  float local_80;
  float local_70;
  float local_64;
  undefined8 local_60;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined4 local_48;
  
  lVar4 = *(longlong *)(param_1 + 0x490);
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0x6f8) != param_2)) {
    *(char *)(lVar4 + 0x6f8) = param_2;
    FUN_142faef00(lVar4);
    lVar3 = *(longlong *)(lVar4 + 0x120);
    lVar2 = *(longlong *)(lVar4 + 0x118);
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(lVar4);
    }
    lVar4 = FUN_142f9cfb0(lVar3,0);
    if ((lVar2 != 0) && (lVar4 != 0)) {
      FUN_14222da00(lVar2,0,&local_98,&local_88);
      local_64 = local_90 + local_80;
      fStack_54 = local_98 + local_88;
      local_70 = local_90 - local_80;
      local_48 = CONCAT31(local_48._1_3_,1);
      fStack_50 = local_94 + local_84;
      *(undefined1 *)(lVar4 + 0xb68) = 1;
      iVar1 = *(int *)(lVar4 + 0xb78);
      local_60 = CONCAT44(local_94 - local_84,local_98 - local_88);
      *(int *)(lVar4 + 0xb78) = iVar1 + 1;
      fStack_58 = local_70;
      fStack_4c = local_64;
      if (*(int *)(lVar4 + 0xb7c) < iVar1 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::
        ResizeGrow(lVar4 + 0xb70,iVar1);
      }
      lVar4 = *(longlong *)(lVar4 + 0xb70);
      lVar3 = (longlong)iVar1 * 0x1c;
      *(undefined8 *)(lVar3 + lVar4) = local_60;
      ((undefined8 *)(lVar3 + lVar4))[1] = CONCAT44(fStack_54,fStack_58);
      *(ulonglong *)(lVar3 + 0x10 + lVar4) = CONCAT44(fStack_4c,fStack_50);
      *(undefined4 *)(lVar3 + 0x18 + lVar4) = local_48;
    }
  }
  return;
}



// FUNCTION 142fb3510 FUN_142fb3510 body=398 status=ok
// SIG undefined FUN_142fb3510(void)

void FUN_142fb3510(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  float local_98;
  float local_94;
  float local_90;
  float local_88;
  float local_84;
  float local_80;
  float local_70;
  float local_64;
  undefined8 local_60;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined4 local_48;
  
  if (*(char *)(param_1 + 0x6f8) != param_2) {
    *(char *)(param_1 + 0x6f8) = param_2;
    FUN_142faef00();
    lVar2 = *(longlong *)(param_1 + 0x120);
    lVar3 = *(longlong *)(param_1 + 0x118);
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0(param_1);
    }
    lVar2 = FUN_142f9cfb0(lVar2,0);
    if ((lVar3 != 0) && (lVar2 != 0)) {
      FUN_14222da00(lVar3,0,&local_88,&local_98);
      local_64 = local_90 + local_80;
      fStack_54 = local_88 + local_98;
      local_48 = CONCAT31(local_48._1_3_,1);
      fStack_50 = local_84 + local_94;
      local_70 = local_80 - local_90;
      *(undefined1 *)(lVar2 + 0xb68) = 1;
      iVar1 = *(int *)(lVar2 + 0xb78);
      local_60 = CONCAT44(local_84 - local_94,local_88 - local_98);
      *(int *)(lVar2 + 0xb78) = iVar1 + 1;
      fStack_58 = local_70;
      fStack_4c = local_64;
      if (*(int *)(lVar2 + 0xb7c) < iVar1 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::
        ResizeGrow(lVar2 + 0xb70,iVar1);
      }
      lVar2 = *(longlong *)(lVar2 + 0xb70);
      lVar3 = (longlong)iVar1 * 0x1c;
      *(undefined8 *)(lVar3 + lVar2) = local_60;
      ((undefined8 *)(lVar3 + lVar2))[1] = CONCAT44(fStack_54,fStack_58);
      *(ulonglong *)(lVar3 + 0x10 + lVar2) = CONCAT44(fStack_4c,fStack_50);
      *(undefined4 *)(lVar3 + 0x18 + lVar2) = local_48;
    }
  }
  return;
}



// FUNCTION 142fb36a0 FUN_142fb36a0 body=227 status=ok
// SIG undefined FUN_142fb36a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142fb36a0(undefined1 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38 [4];
  float local_28;
  float fStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0xe8) == 0) {
    return;
  }
  if (param_1[0x28] == '\x01') {
    lVar1 = *(longlong *)(param_1 + 0x60);
  }
  else {
    if (param_1[0x28] != '\x02') goto LAB_142fb36ee;
    lVar1 = *(longlong *)(param_1 + 0x70);
  }
  if (lVar1 == 0) {
    return;
  }
LAB_142fb36ee:
  if ((*(longlong *)(param_1 + 0x60) != 0) && (lVar1 = FUN_1412bf1c0(), lVar1 == 0)) {
    return;
  }
  *(undefined8 *)(param_1 + 0x2c) = *param_2;
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 1);
  local_28 = (float)*param_2 * 0.01;
  fStack_24 = (float)((ulonglong)*param_2 >> 0x20) * 0.01;
  fStack_20 = *(float *)(param_2 + 1) * 0.01;
  uStack_1c = 0;
  *param_1 = 0;
  if (param_1[0x28] == '\x01') {
    local_38[0] = 0xffffffff;
    FUN_14385e670(*(undefined8 *)(param_1 + 0x60),&local_28,local_38);
  }
  else if (param_1[0x28] == '\x02') {
    FUN_143860e50(*(undefined8 *)(param_1 + 0x70),&local_28);
  }
  return;
}



// FUNCTION 142fb3790 FUN_142fb3790 body=832 status=ok
// SIG undefined FUN_142fb3790(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142fb3790(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  iVar4 = (int)param_1[0x4e];
  lVar8 = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  if (iVar4 == 3) {
    lVar9 = lVar8;
    if (param_1[0xdb] != 0) {
      lVar9 = *(longlong *)(param_1[0xdb] + 0x568);
    }
    if (lVar9 != 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146b441f0) &&
         (_Init_thread_header(&DAT_146b441f0), DAT_146b441f0 == -1)) {
        FName::FName(&DAT_146b441e8,L"IsMoving",1);
        _Init_thread_footer(&DAT_146b441f0);
      }
      UBlackboardComponent::SetValueAsBool(lVar9,&DAT_146b441e8,0);
    }
  }
  if ((iVar4 != 0) && (((iVar4 == 1 || (iVar4 == 2)) || (iVar4 == 3)))) {
    FUN_142facd90(param_1);
  }
  lVar9 = *param_2;
  if (lVar9 == 0) {
    return 0;
  }
  if (*(char *)(lVar9 + 0x68) == '\x01') {
    lVar7 = 0x10;
  }
  else {
    if (*(char *)(lVar9 + 0x68) != '\x02') {
      if ((((float)DAT_14676e1b0 == *(float *)(lVar9 + 0x6c)) &&
          (DAT_14676e1b0._4_4_ == *(float *)(lVar9 + 0x70))) &&
         (DAT_14676e1b8 == *(float *)(lVar9 + 0x74))) {
        return 0;
      }
      goto LAB_142fb38bb;
    }
    lVar7 = 0x18;
  }
  cVar6 = FWeakObjectPtr::IsValid(lVar9 + 0x68 + lVar7);
  if (cVar6 == '\0') {
    return 0;
  }
LAB_142fb38bb:
  plVar5 = (longlong *)param_2[1];
  lVar9 = *param_2;
  plVar3 = param_1 + 0x4f;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_58 = lVar9;
  plStack_50 = plVar5;
  if (&local_58 != plVar3) {
    local_58 = *plVar3;
    plStack_50 = (longlong *)param_1[0x50];
    *plVar3 = lVar9;
    param_1[0x50] = (longlong)plVar5;
    local_48 = lVar9;
    plStack_40 = plVar5;
  }
  plVar5 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_50 + 8))(plStack_50,1);
      }
    }
  }
  FUN_142fb8fb0(*plVar3,param_1 + 0xdd);
  if (*(char *)*plVar3 != '\0') {
    return 0;
  }
  cVar6 = FUN_142fae920(param_1);
  if (cVar6 == '\0') {
    iVar4 = (int)param_1[0x4e];
    fVar10 = *(float *)((longlong)param_1 + 0x78c) - *(float *)((longlong)param_1 + 0x6ec);
    plStack_50 = (longlong *)CONCAT44(plStack_50._4_4_,fVar10);
    *(undefined8 *)((longlong)param_1 + 0x2ec) = *(undefined8 *)((longlong)param_1 + 0x784);
    *(float *)((longlong)param_1 + 0x2f4) = fVar10;
    *(undefined4 *)(param_1 + 0x4e) = 1;
    if (iVar4 == 3) {
      if (param_1[0xdb] != 0) {
        lVar8 = *(longlong *)(param_1[0xdb] + 0x568);
      }
      if (lVar8 != 0) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38) < DAT_146b441f0) &&
           (_Init_thread_header(&DAT_146b441f0), DAT_146b441f0 == -1)) {
          FName::FName(&DAT_146b441e8,L"IsMoving",1);
          _Init_thread_footer(&DAT_146b441f0);
        }
        UBlackboardComponent::SetValueAsBool(lVar8,&DAT_146b441e8,0);
      }
    }
    if ((iVar4 == 0) || ((iVar4 != 1 && ((iVar4 == 2 || (iVar4 == 3)))))) {
      FUN_142fa50c0(param_1);
    }
    (**(code **)(*param_1 + 0x438))(param_1,0);
    return 2;
  }
  return 1;
}



// FUNCTION 142fb3ad0 FUN_142fb3ad0 body=216 status=ok
// SIG undefined FUN_142fb3ad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142fb3ad0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_48 [32];
  float local_28;
  float fStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  if (param_1[0xe1] != 0) {
    cVar2 = (**(code **)(*param_1 + 0x8f8))();
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*param_1 + 0x930))(param_1);
      if (((cVar2 != '\0') && (*(longlong *)(param_1[0xe1] + 0x8f8) != 0)) &&
         (lVar1 = *(longlong *)(*(longlong *)(param_1[0xe1] + 0x8f8) + 0x130), lVar1 != 0)) {
        local_28 = *(float *)(param_2 + 0x10) * 0.01;
        fStack_24 = *(float *)(param_2 + 0x14) * 0.01;
        fStack_20 = *(float *)(param_2 + 0x18) * 0.01;
        uStack_1c = 0;
        FUN_143841920(lVar1,param_1[0xf3],&local_28);
      }
    }
  }
  return;
}



// FUNCTION 142fb3bb0 FUN_142fb3bb0 body=294 status=ok
// SIG undefined FUN_142fb3bb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142fb3bb0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  undefined1 auStack_a8 [48];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [48];
  float local_38;
  float fStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  if ((((param_1[0xe1] != 0) && (cVar5 = (**(code **)(*param_1 + 0x8f8))(), cVar5 != '\0')) &&
      (cVar5 = (**(code **)(*param_1 + 0x930))(param_1), cVar5 != '\0')) &&
     ((*(longlong *)(param_1[0xe1] + 0x8f8) != 0 &&
      (lVar1 = *(longlong *)(*(longlong *)(param_1[0xe1] + 0x8f8) + 0x130), lVar1 != 0)))) {
    fVar2 = *(float *)(param_2 + 2);
    fVar3 = *(float *)((longlong)param_2 + 0x14);
    fVar4 = *(float *)(param_2 + 3);
    local_78 = *param_2;
    uStack_70 = param_2[1];
    FUN_143716430(local_68,&local_78);
    local_38 = fVar2 * 0.01;
    fStack_34 = fVar3 * 0.01;
    fStack_30 = fVar4 * 0.01;
    uStack_2c = 0;
    FUN_143841740(lVar1,param_1[0xf2],local_68);
  }
  return;
}



// FUNCTION 142fb3ce0 FUN_142fb3ce0 body=38 status=ok
// SIG undefined FUN_142fb3ce0(void)

void FUN_142fb3ce0(longlong param_1,undefined8 *param_2)

{
  if (*(char *)(param_1 + 0x365) == '\0') {
    *(undefined1 *)(param_1 + 0x365) = 1;
  }
  *(undefined8 *)(param_1 + 0x368) = *param_2;
  *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(param_2 + 1);
  return;
}



// FUNCTION 142fb3d10 FUN_142fb3d10 body=8 status=ok
// SIG undefined FUN_142fb3d10(void)

void FUN_142fb3d10(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x188) = param_2;
  return;
}



// FUNCTION 142fb3d20 FUN_142fb3d20 body=65 status=ok
// SIG undefined FUN_142fb3d20(void)

void FUN_142fb3d20(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x2868) != 0)) {
    *(longlong *)(param_1 + 0x2860) = param_2;
    *(longlong *)(param_1 + 0x2868) = *(longlong *)(param_1 + 0x2868);
    return;
  }
  *(undefined8 *)(param_1 + 0x2860) = *(undefined8 *)(param_1 + 0x2718);
  *(undefined8 *)(param_1 + 0x2868) = *(undefined8 *)(param_1 + 0x2720);
  return;
}



// FUNCTION 142fb3d70 FUN_142fb3d70 body=122 status=ok
// SIG undefined FUN_142fb3d70(void)

void FUN_142fb3d70(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  *(longlong *)(param_1 + 0x20f8) = param_2;
  if (param_2 != 0) {
    lVar2 = AAICharacter::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(longlong *)(param_1 + 0x27b0) = param_2;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x27b0) = 0;
  return;
}



// FUNCTION 142fb3df0 FUN_142fb3df0 body=576 status=ok
// SIG undefined FUN_142fb3df0(void)

void FUN_142fb3df0(longlong *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[0x4e];
  *(int *)(param_1 + 0x4e) = param_2;
  if ((iVar1 == 3) != (param_2 == 3)) {
    lVar3 = 0;
    if (param_1[0xdb] != 0) {
      lVar3 = *(longlong *)(param_1[0xdb] + 0x568);
    }
    if (lVar3 != 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146b441f0) &&
         (_Init_thread_header(&DAT_146b441f0), DAT_146b441f0 == -1)) {
        FName::FName(&DAT_146b441e8,L"IsMoving",1);
        _Init_thread_footer(&DAT_146b441f0);
      }
      UBlackboardComponent::SetValueAsBool(lVar3,&DAT_146b441e8,param_2 == 3);
    }
  }
  if (iVar1 == 0) {
    if (param_2 == 1) goto LAB_142fb3fd5;
    if (param_2 == 2) {
      FUN_142fa50c0(param_1);
LAB_142fb3fbe:
      FUN_142fa4f90(param_1);
      return;
    }
    if (param_2 != 3) {
      return;
    }
    FUN_142fa50c0(param_1);
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        if (param_2 == 0) goto LAB_142fb3f2c;
        if (param_2 != 1) {
          if (param_2 != 3) {
            return;
          }
          FUN_142facd60(param_1);
          return;
        }
      }
      else {
        if (iVar1 != 3) {
          return;
        }
        if (param_2 == 0) {
LAB_142fb3f2c:
          FUN_142facd90(param_1);
          return;
        }
        if (param_2 != 1) {
          if (param_2 != 2) {
            return;
          }
          cVar2 = FUN_142fa53c0(param_1);
          if (cVar2 != '\0') {
            FUN_142fb36a0(param_1 + 0x86,param_1[0x4f] + 0x20);
          }
          (**(code **)(*param_1 + 0x438))(param_1,0);
          *(undefined4 *)(param_1 + 0x125) = 0;
          if (0x7fffffff < *(uint *)((longlong)param_1 + 0x92c)) {
            FUN_1422b26f0(param_1 + 0x116,0);
          }
          TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x4b,param_1);
          return;
        }
      }
LAB_142fb3fd5:
      FUN_142fa50c0(param_1);
      return;
    }
    if (param_2 == 0) goto LAB_142fb3f2c;
    if (param_2 == 2) goto LAB_142fb3fbe;
    if (param_2 != 3) {
      return;
    }
  }
  FUN_142fa4f90(param_1);
  FUN_142facd60(param_1);
  return;
}



// FUNCTION 142fb4030 FUN_142fb4030 body=65 status=ok
// SIG undefined FUN_142fb4030(void)

void FUN_142fb4030(longlong param_1,longlong param_2)

{
  if ((*(longlong *)(param_1 + 0x2860) != 0) && (param_2 != 0)) {
    *(longlong *)(param_1 + 0x2860) = *(longlong *)(param_1 + 0x2860);
    *(longlong *)(param_1 + 0x2868) = param_2;
    return;
  }
  *(undefined8 *)(param_1 + 0x2860) = *(undefined8 *)(param_1 + 0x2718);
  *(undefined8 *)(param_1 + 0x2868) = *(undefined8 *)(param_1 + 0x2720);
  return;
}



// FUNCTION 142fb4080 FUN_142fb4080 body=58 status=ok
// SIG undefined FUN_142fb4080(void)

void FUN_142fb4080(longlong param_1)

{
  longlong lVar1;
  
  FUN_142cff800();
  lVar1 = *(longlong *)(param_1 + 0x27b0);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x671) != '\0')) {
    FUN_142fb5ca0(lVar1 + 0x650);
    return;
  }
  return;
}



// FUNCTION 142fb40e0 FUN_142fb40e0 body=17 status=ok
// SIG undefined FUN_142fb40e0(void)

void FUN_142fb40e0(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
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
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined8 uStack_c8;
  uint uStack_c0;
  uint uStack_a4;
  
  lVar7 = *(longlong *)(param_1 + 0x490);
  if (lVar7 != 0) {
    if (*(char *)(lVar7 + 0x179) != param_2) {
      lVar4 = *(longlong *)(lVar7 + 0x120);
      *(char *)(lVar7 + 0x179) = param_2;
      if (lVar4 == 0) {
        lVar4 = FUN_1423407b0();
      }
      lVar4 = FUN_142f9cfb0(lVar4,0);
      if (lVar4 != 0) {
        if (*(char *)(lVar7 + 0x180) == '\x01') {
          FUN_142fbb0d0(lVar7);
        }
        iVar1 = *(int *)(lVar7 + 0x1a0);
        if ((-1 < iVar1) && (iVar1 < *(int *)(lVar4 + 0x6d8))) {
          plVar6 = (longlong *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar4 + 0x6d0));
          lVar5 = *plVar6;
          if (lVar5 != 0) {
            *(undefined1 *)((longlong)plVar6 + 0xc) = *(undefined1 *)(lVar5 + 0x179);
          }
        }
        bVar3 = false;
        lVar5 = *(longlong *)(lVar7 + 0x1b0);
        lVar7 = (longlong)*(int *)(lVar7 + 0x1b8) * 0x20 + lVar5;
        fStack_cc = DAT_1468b5d90;
        uStack_c8 = CONCAT44(DAT_1468b5d98,DAT_1468b5d94);
        fStack_d8 = DAT_1468b5d90;
        fStack_d4 = DAT_1468b5d94;
        fStack_d0 = DAT_1468b5d98;
        uStack_c0 = uStack_c0 & 0xffffff00;
        fVar8 = DAT_1468b5d98;
        fVar9 = DAT_1468b5d94;
        fVar10 = DAT_1468b5d90;
        fVar11 = DAT_1468b5d98;
        fVar12 = DAT_1468b5d94;
        fVar13 = DAT_1468b5d90;
        if (lVar5 != lVar7) {
          do {
            lVar2 = *(longlong *)(lVar5 + 0x18);
            fVar18 = fVar9;
            fVar17 = fVar10;
            fVar16 = fVar11;
            fVar15 = fVar12;
            fVar14 = fVar13;
            if (lVar2 != 0) {
              fVar17 = *(float *)(lVar2 + 0x1d0) + *(float *)(lVar2 + 0x1dc);
              fVar18 = *(float *)(lVar2 + 0x1d4) + *(float *)(lVar2 + 0x1e0);
              uStack_a4 = CONCAT31(uStack_a4._1_3_,1);
              fVar19 = *(float *)(lVar2 + 0x1d8) + *(float *)(lVar2 + 0x1e4);
              fVar14 = *(float *)(lVar2 + 0x1d0) - *(float *)(lVar2 + 0x1dc);
              fVar15 = *(float *)(lVar2 + 0x1d4) - *(float *)(lVar2 + 0x1e0);
              fVar16 = *(float *)(lVar2 + 0x1d8) - *(float *)(lVar2 + 0x1e4);
              if (bVar3) {
                if (fVar14 < fVar13) {
                  fVar13 = fVar14;
                  fStack_d8 = fVar14;
                }
                if (fVar15 < fVar12) {
                  fVar12 = fVar15;
                  fStack_d4 = fVar15;
                }
                if (fVar16 < fVar11) {
                  fVar11 = fVar16;
                  fStack_d0 = fVar16;
                }
                if (fVar10 < fVar17) {
                  fVar10 = fVar17;
                  fStack_cc = fVar17;
                }
                if (fVar9 < fVar18) {
                  uStack_c8 = CONCAT44(uStack_c8._4_4_,fVar18);
                  fVar9 = fVar18;
                }
                fVar18 = fVar9;
                fVar17 = fVar10;
                fVar16 = fVar11;
                fVar15 = fVar12;
                fVar14 = fVar13;
                if (fVar8 < fVar19) {
                  uStack_c8 = CONCAT44(fVar19,(undefined4)uStack_c8);
                  fVar8 = fVar19;
                }
              }
              else {
                uStack_c8 = CONCAT44(fVar19,fVar18);
                bVar3 = true;
                fVar8 = fVar19;
                uStack_c0 = uStack_a4;
                fStack_d8 = fVar14;
                fStack_d4 = fVar15;
                fStack_d0 = fVar16;
                fStack_cc = fVar17;
              }
            }
            lVar5 = lVar5 + 0x20;
            fVar9 = fVar18;
            fVar10 = fVar17;
            fVar11 = fVar16;
            fVar12 = fVar15;
            fVar13 = fVar14;
          } while (lVar5 != lVar7);
          if (bVar3) {
            *(undefined1 *)(lVar4 + 0xb68) = 1;
            iVar1 = *(int *)(lVar4 + 0xb78);
            *(int *)(lVar4 + 0xb78) = iVar1 + 1;
            if (*(int *)(lVar4 + 0xb7c) < iVar1 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::
              ResizeGrow((longlong *)(lVar4 + 0xb70),iVar1);
            }
            lVar7 = *(longlong *)(lVar4 + 0xb70);
            lVar4 = (longlong)iVar1 * 0x1c;
            *(undefined8 *)(lVar4 + lVar7) = CONCAT44(fStack_d4,fStack_d8);
            ((undefined8 *)(lVar4 + lVar7))[1] = CONCAT44(fStack_cc,fStack_d0);
            *(undefined8 *)(lVar4 + 0x10 + lVar7) = uStack_c8;
            *(uint *)(lVar4 + 0x18 + lVar7) = uStack_c0;
          }
        }
      }
    }
    return;
  }
  return;
}



// FUNCTION 142fb4100 FUN_142fb4100 body=842 status=ok
// SIG undefined FUN_142fb4100(void)

void FUN_142fb4100(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
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
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined8 local_c8;
  uint local_c0;
  uint local_a4;
  
  if (*(char *)(param_1 + 0x179) != param_2) {
    lVar4 = *(longlong *)(param_1 + 0x120);
    *(char *)(param_1 + 0x179) = param_2;
    if (lVar4 == 0) {
      lVar4 = FUN_1423407b0();
    }
    lVar4 = FUN_142f9cfb0(lVar4,0);
    if (lVar4 != 0) {
      if (*(char *)(param_1 + 0x180) == '\x01') {
        FUN_142fbb0d0(param_1);
      }
      iVar1 = *(int *)(param_1 + 0x1a0);
      if ((-1 < iVar1) && (iVar1 < *(int *)(lVar4 + 0x6d8))) {
        plVar6 = (longlong *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar4 + 0x6d0));
        lVar5 = *plVar6;
        if (lVar5 != 0) {
          *(undefined1 *)((longlong)plVar6 + 0xc) = *(undefined1 *)(lVar5 + 0x179);
        }
      }
      bVar3 = false;
      lVar5 = *(longlong *)(param_1 + 0x1b0);
      lVar7 = (longlong)*(int *)(param_1 + 0x1b8) * 0x20 + lVar5;
      fStack_cc = DAT_1468b5d90;
      local_c8 = CONCAT44(DAT_1468b5d98,DAT_1468b5d94);
      local_d8 = DAT_1468b5d90;
      fStack_d4 = DAT_1468b5d94;
      fStack_d0 = DAT_1468b5d98;
      local_c0 = local_c0 & 0xffffff00;
      fVar8 = DAT_1468b5d98;
      fVar9 = DAT_1468b5d94;
      fVar10 = DAT_1468b5d90;
      fVar11 = DAT_1468b5d98;
      fVar12 = DAT_1468b5d94;
      fVar13 = DAT_1468b5d90;
      if (lVar5 != lVar7) {
        do {
          lVar2 = *(longlong *)(lVar5 + 0x18);
          fVar18 = fVar9;
          fVar17 = fVar10;
          fVar16 = fVar11;
          fVar15 = fVar12;
          fVar14 = fVar13;
          if (lVar2 != 0) {
            fVar17 = *(float *)(lVar2 + 0x1d0) + *(float *)(lVar2 + 0x1dc);
            fVar18 = *(float *)(lVar2 + 0x1d4) + *(float *)(lVar2 + 0x1e0);
            local_a4 = CONCAT31(local_a4._1_3_,1);
            fVar19 = *(float *)(lVar2 + 0x1d8) + *(float *)(lVar2 + 0x1e4);
            fVar14 = *(float *)(lVar2 + 0x1d0) - *(float *)(lVar2 + 0x1dc);
            fVar15 = *(float *)(lVar2 + 0x1d4) - *(float *)(lVar2 + 0x1e0);
            fVar16 = *(float *)(lVar2 + 0x1d8) - *(float *)(lVar2 + 0x1e4);
            if (bVar3) {
              if (fVar14 < fVar13) {
                fVar13 = fVar14;
                local_d8 = fVar14;
              }
              if (fVar15 < fVar12) {
                fVar12 = fVar15;
                fStack_d4 = fVar15;
              }
              if (fVar16 < fVar11) {
                fVar11 = fVar16;
                fStack_d0 = fVar16;
              }
              if (fVar10 < fVar17) {
                fVar10 = fVar17;
                fStack_cc = fVar17;
              }
              if (fVar9 < fVar18) {
                local_c8 = CONCAT44(local_c8._4_4_,fVar18);
                fVar9 = fVar18;
              }
              fVar18 = fVar9;
              fVar17 = fVar10;
              fVar16 = fVar11;
              fVar15 = fVar12;
              fVar14 = fVar13;
              if (fVar8 < fVar19) {
                local_c8 = CONCAT44(fVar19,(undefined4)local_c8);
                fVar8 = fVar19;
              }
            }
            else {
              local_c8 = CONCAT44(fVar19,fVar18);
              bVar3 = true;
              fVar8 = fVar19;
              local_c0 = local_a4;
              local_d8 = fVar14;
              fStack_d4 = fVar15;
              fStack_d0 = fVar16;
              fStack_cc = fVar17;
            }
          }
          lVar5 = lVar5 + 0x20;
          fVar9 = fVar18;
          fVar10 = fVar17;
          fVar11 = fVar16;
          fVar12 = fVar15;
          fVar13 = fVar14;
        } while (lVar5 != lVar7);
        if (bVar3) {
          *(undefined1 *)(lVar4 + 0xb68) = 1;
          iVar1 = *(int *)(lVar4 + 0xb78);
          *(int *)(lVar4 + 0xb78) = iVar1 + 1;
          if (*(int *)(lVar4 + 0xb7c) < iVar1 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::
            ResizeGrow((longlong *)(lVar4 + 0xb70),iVar1);
          }
          lVar4 = *(longlong *)(lVar4 + 0xb70);
          lVar5 = (longlong)iVar1 * 0x1c;
          *(undefined8 *)(lVar5 + lVar4) = CONCAT44(fStack_d4,local_d8);
          ((undefined8 *)(lVar5 + lVar4))[1] = CONCAT44(fStack_cc,fStack_d0);
          *(undefined8 *)(lVar5 + 0x10 + lVar4) = local_c8;
          *(uint *)(lVar5 + 0x18 + lVar4) = local_c0;
        }
      }
    }
  }
  return;
}



// FUNCTION 142fb4450 FUN_142fb4450 body=7 status=ok
// SIG undefined FUN_142fb4450(void)

void FUN_142fb4450(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x180) = param_2;
  return;
}



// FUNCTION 142fb4460 FUN_142fb4460 body=374 status=ok
// SIG undefined FUN_142fb4460(void)

void FUN_142fb4460(longlong *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  char cVar5;
  uint7 uStack_77;
  undefined1 uStack_5c;
  undefined2 uStack_5a;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  longlong lStack_20;
  longlong local_18;
  
  cVar5 = FUN_142f8c3d0(param_1 + 0xd);
  if (cVar5 == '\0') {
    FUN_142fa7a70(param_1);
    *(undefined1 *)(param_1 + 0xd) = *param_2;
    *(undefined8 *)((longlong)param_1 + 0x6c) = *(undefined8 *)(param_2 + 4);
    *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x24);
    lVar4 = *(longlong *)(param_2 + 0x30);
    param_1[0x12] = *(longlong *)(param_2 + 0x28);
    param_1[0x13] = lVar4;
    uVar1 = *(undefined4 *)(param_2 + 0x3c);
    uVar2 = *(undefined4 *)(param_2 + 0x40);
    uVar3 = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x38);
    *(undefined4 *)((longlong)param_1 + 0xa4) = uVar1;
    *(undefined4 *)(param_1 + 0x15) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0xac) = uVar3;
    param_1[0x16] = *(longlong *)(param_2 + 0x48);
    *(undefined1 *)(param_1 + 0x17) = param_2[0x50];
    *(undefined1 *)((longlong)param_1 + 0xb9) = param_2[0x51];
    *(undefined1 *)((longlong)param_1 + 0xba) = param_2[0x52];
    *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)(param_2 + 0x54);
    *(undefined1 *)(param_1 + 0x18) = param_2[0x58];
    *(undefined1 *)((longlong)param_1 + 0xc1) = param_2[0x59];
    *(undefined1 *)((longlong)param_1 + 0xc2) = param_2[0x5a];
    uVar1 = DAT_14676e1b8;
    lVar4 = DAT_14676e1b0;
    FUN_142f89390(&local_58);
    FUN_142c62620(&local_28);
    *param_1 = (ulonglong)uStack_77 << 8;
    param_1[1] = 0;
    param_1[2] = lVar4;
    param_1[3] = CONCAT26(uStack_5a,(uint6)CONCAT14(uStack_5c,uVar1));
    param_1[4] = local_58;
    param_1[5] = lStack_50;
    param_1[6] = local_48;
    param_1[7] = lStack_40;
    param_1[8] = local_38;
    param_1[9] = lStack_30;
    param_1[10] = local_28;
    param_1[0xb] = lStack_20;
    param_1[0xc] = local_18;
  }
  return;
}



// FUNCTION 142fb45e0 FUN_142fb45e0 body=80 status=ok
// SIG undefined FUN_142fb45e0(void)

void FUN_142fb45e0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x6e0);
  if (lVar1 != 0) {
    if ((*(longlong *)(lVar1 + 0x2860) != 0) && (param_2 != 0)) {
      *(longlong *)(lVar1 + 0x2860) = *(longlong *)(lVar1 + 0x2860);
      *(longlong *)(lVar1 + 0x2868) = param_2;
      return;
    }
    *(undefined8 *)(lVar1 + 0x2860) = *(undefined8 *)(lVar1 + 0x2718);
    *(undefined8 *)(lVar1 + 0x2868) = *(undefined8 *)(lVar1 + 0x2720);
  }
  return;
}



// FUNCTION 142fb4630 FUN_142fb4630 body=193 status=ok
// SIG undefined FUN_142fb4630(void)

void FUN_142fb4630(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x18);
  if ((((*param_2 == 0) || (param_2[1] == 0)) || (lVar1 == 0)) ||
     (*(longlong *)(param_1 + 0x60) == 0)) {
    FUN_142f97c10(param_1);
    if (*(longlong *)(param_1 + 0x60) == 0) {
      return;
    }
    FUN_14385caa0();
    uVar3 = *(undefined8 *)(param_1 + 0x60);
  }
  else {
    lVar1 = lVar1 + 0xa28;
    FUN_142faeb40(lVar1,param_2);
    lVar2 = FUN_142fa12f0(lVar1,param_2);
    if (lVar2 == 0) {
      FUN_14385caa0(*(undefined8 *)(param_1 + 0x60));
    }
    else {
      FUN_14385e5a0(*(undefined8 *)(param_1 + 0x60),lVar2);
    }
    lVar1 = FUN_142f9efa0(lVar1,param_2);
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    if (lVar1 != 0) {
      FUN_14385e4d0(uVar3,lVar1);
      return;
    }
  }
  FUN_14385c9f0(uVar3);
  return;
}



// FUNCTION 142fb4700 FUN_142fb4700 body=104 status=ok
// SIG undefined FUN_142fb4700(void)

void FUN_142fb4700(longlong param_1)

{
  char cVar1;
  float local_18;
  float local_14;
  float local_10;
  
  cVar1 = FUN_142fa8b90();
  if (cVar1 != '\0') {
    FUN_142f8eb00(param_1,&local_18,param_1 + 0x300);
    if (((local_18 != 0.0) || (local_14 != 0.0)) || (local_10 != 0.0)) {
      (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x528))
                (*(longlong **)(param_1 + 0x6e0),&local_18,0);
    }
  }
  return;
}



// FUNCTION 142fb4770 FUN_142fb4770 body=14 status=ok
// SIG undefined FUN_142fb4770(void)

void FUN_142fb4770(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined1 *)(param_1 + 0x60) = 1;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  return;
}



// FUNCTION 142fb4780 FUN_142fb4780 body=36 status=ok
// SIG undefined FUN_142fb4780(void)

void FUN_142fb4780(longlong *param_1,undefined1 param_2)

{
  undefined1 uVar1;
  
  *(undefined1 *)((longlong)param_1 + 0x38c) = param_2;
  uVar1 = (**(code **)(*param_1 + 0x4b8))();
  *(undefined1 *)(param_1 + 0xf0) = uVar1;
  return;
}



// FUNCTION 142fb47b0 FUN_142fb47b0 body=128 status=ok
// SIG undefined FUN_142fb47b0(void)

undefined8 FUN_142fb47b0(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((((*(byte *)((longlong)param_1 + 0x4b4) & 0x80) == 0) &&
      (cVar1 = (**(code **)(*param_1 + 0x558))(), cVar1 == '\0')) &&
     ((param_1[0x2ef] == 0 ||
      (((*(byte *)((longlong)param_1 + 0x18cc) & 2) != 0 || (param_1[0x2f] == 0)))))) {
    cVar1 = FUN_1407c3030(param_1 + 0x4cf);
    if (cVar1 != '\0') {
      return 0;
    }
    cVar1 = FUN_142c84260(param_1 + 0x422);
    if (cVar1 == '\0') {
      uVar2 = FUN_14233f0e0(param_1);
      cVar1 = FUN_142314560(uVar2);
      if (cVar1 == '\0') {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 142fb4830 FUN_142fb4830 body=74 status=ok
// SIG undefined FUN_142fb4830(void)

undefined8 FUN_142fb4830(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_142c842c0();
  if (cVar1 != '\0') {
    return 1;
  }
  if ((*(char *)(param_1 + 0x279c) != '\0') || (*(char *)(param_1 + 0x2788) != '\0')) {
    lVar2 = 0x27a0;
    if (*(char *)(param_1 + 0x279c) == '\0') {
      lVar2 = 0x278c;
    }
    if (*(char *)(lVar2 + param_1) != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142fb4880 FUN_142fb4880 body=504 status=ok
// SIG undefined FUN_142fb4880(void)

bool FUN_142fb4880(longlong param_1,float *param_2)

{
  longlong lVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float local_48;
  
  if (*(char *)(param_1 + 0xa91) == '\0') {
    return false;
  }
  if (*(char *)(param_1 + 0x365) != '\0') {
    return false;
  }
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar3 = fVar5 * fVar5 + fVar6 * fVar6;
  if (fVar3 == 1.0) {
    if (param_2[2] == 0.0) {
      local_48 = (float)*(undefined8 *)param_2;
      fVar7 = param_2[2];
      fVar4 = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
      goto LAB_142fb4996;
    }
  }
  else {
    fVar7 = DAT_1468b5d98;
    local_48 = DAT_1468b5d90;
    fVar4 = DAT_1468b5d94;
    if (fVar3 < 1e-08) goto LAB_142fb4996;
    auVar8 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
    fVar7 = auVar8._0_4_;
    fVar7 = fVar7 + fVar7 * (0.5 - fVar3 * 0.5 * fVar7 * fVar7);
    fVar7 = fVar7 + fVar7 * (0.5 - fVar3 * 0.5 * fVar7 * fVar7);
    fVar5 = fVar5 * fVar7;
    fVar6 = fVar6 * fVar7;
  }
  fVar7 = 0.0;
  local_48 = fVar5;
  fVar4 = fVar6;
LAB_142fb4996:
  if (0.0 <= fVar4 * *(float *)(param_1 + 0x778) + local_48 * *(float *)(param_1 + 0x774) +
             fVar7 * *(float *)(param_1 + 0x77c)) {
    return false;
  }
  cVar2 = FUN_142fa53c0();
  if ((cVar2 != '\0') &&
     (cVar2 = FUN_142fa8a90(*(longlong *)(param_1 + 0x278) + 0x20), cVar2 != '\0')) {
    lVar1 = *(longlong *)(param_1 + 0x278);
    fVar3 = *(float *)(lVar1 + 0x24) - (float)((ulonglong)*(undefined8 *)(param_1 + 0x784) >> 0x20);
    fVar6 = *(float *)(lVar1 + 0x20) - (float)*(undefined8 *)(param_1 + 0x784);
    fVar5 = *(float *)(lVar1 + 0x28) - (*(float *)(param_1 + 0x78c) - *(float *)(param_1 + 0x6ec));
    return SQRT(fVar3 * fVar3 + fVar6 * fVar6 + fVar5 * fVar5) < *(float *)(param_1 + 0xa94);
  }
  return true;
}



// FUNCTION 142fb4a80 FUN_142fb4a80 body=78 status=ok
// SIG undefined FUN_142fb4a80(void)

void FUN_142fb4a80(longlong param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_142fb47b0();
  if (cVar1 != '\0') {
    FUN_142d00110(param_1,param_2);
    return;
  }
  if (*(char *)(param_1 + 0x248) == '\x02') {
    FUN_14233b6a0(param_1,param_2);
  }
  return;
}



// FUNCTION 142fb4ad0 FUN_142fb4ad0 body=106 status=ok
// SIG undefined FUN_142fb4ad0(void)

void FUN_142fb4ad0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + -0x118) == 0) {
    lVar1 = FUN_1423407b0(param_1 + -0x238);
    if (lVar1 == 0) goto LAB_142fb4b18;
  }
  if (*(longlong *)(param_1 + -0x118) == 0) {
    FUN_1423407b0(param_1 + -0x238);
  }
LAB_142fb4b18:
  *(undefined8 *)(param_1 + 0x7c) = *param_4;
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_4 + 1);
  return;
}



// FUNCTION 142fb4b40 FUN_142fb4b40 body=171 status=ok
// SIG undefined FUN_142fb4b40(void)

void FUN_142fb4b40(longlong param_1,float *param_2,undefined8 param_3,float *param_4,
                  undefined8 param_5)

{
  char cVar1;
  
  cVar1 = FUN_142fb47b0(param_1 + -0x218);
  if (cVar1 == '\0') {
    if (*(longlong *)(param_1 + 0x2590) == 0) {
      return;
    }
    if ((param_4[1] - param_2[1]) * (param_4[1] - param_2[1]) +
        (*param_4 - *param_2) * (*param_4 - *param_2) +
        (param_4[2] - param_2[2]) * (param_4[2] - param_2[2]) <
        *(float *)(param_1 + 0x2530) * *(float *)(param_1 + 0x2530)) {
      return;
    }
  }
  FUN_142d00370(param_1,param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 142fb4bf0 FUN_142fb4bf0 body=1250 status=ok
// SIG undefined FUN_142fb4bf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fb4bf0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong local_res18;
  longlong *local_res20;
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_50 [24];
  
  if ((param_2 != 0) && (*(int *)(param_2 + 0x770) != 0)) {
    param_1[3] = param_2 + 0x918;
    *(undefined4 *)(param_1 + 2) = 0;
    if (0x7fffffff < *(uint *)((longlong)param_1 + 0x14)) {
      FUN_141d4c320(param_1 + 1,0);
    }
    plVar13 = *(longlong **)(param_2 + 0x768);
    plVar11 = plVar13 + *(int *)(param_2 + 0x770);
    local_res20 = plVar11;
    if (plVar13 != plVar11) {
      do {
        lVar3 = *plVar13;
        if (lVar3 != 0) {
          iVar2 = (int)param_1[2];
          *(int *)(param_1 + 2) = iVar2 + 1;
          if (*(int *)((longlong)param_1 + 0x14) < iVar2 + 1) {
            FUN_1407d8cb0(param_1 + 1,iVar2);
          }
          lVar12 = param_1[1] + (longlong)iVar2 * 0x140;
          local_res18 = -1;
          FUN_142f88d20(lVar12);
          *(undefined8 *)(lVar12 + 0xb4) = 0xffffffffffffffff;
          *(undefined8 *)(lVar12 + 0xbc) = 0xffffffffffffffff;
          FUN_142c62620(lVar12 + 0xc4);
          *(undefined8 *)(lVar12 + 0xb4) = 0xffffffffffffffff;
          *(longlong *)(lVar12 + 0xbc) = local_res18;
          puVar10 = (undefined8 *)FUN_142c62620();
          uVar8 = puVar10[1];
          *(undefined8 *)(lVar12 + 0xc4) = *puVar10;
          *(undefined8 *)(lVar12 + 0xcc) = uVar8;
          *(undefined4 *)(lVar12 + 0xd4) = *(undefined4 *)(puVar10 + 2);
          *(undefined8 *)(lVar12 + 0xa8) = DAT_14676e1b0;
          *(undefined4 *)(lVar12 + 0xb0) = DAT_14676e1b8;
          *(undefined8 *)(lVar12 + 0xd8) = _DAT_1468b5d90;
          *(undefined4 *)(lVar12 + 0xe0) = DAT_1468b5d98;
          *(undefined8 *)(lVar12 + 0xe4) = _DAT_1468b5d90;
          *(undefined4 *)(lVar12 + 0xec) = DAT_1468b5d98;
          *(undefined8 *)(lVar12 + 0xf0) = _DAT_1468b5d90;
          *(undefined4 *)(lVar12 + 0xf8) = DAT_1468b5d98;
          *(undefined8 *)(lVar12 + 0xfc) = _DAT_1468b5d90;
          *(undefined4 *)(lVar12 + 0x104) = DAT_1468b5d98;
          *(undefined8 *)(lVar12 + 0x108) = DAT_14676e1b0;
          *(undefined4 *)(lVar12 + 0x110) = DAT_14676e1b8;
          *(undefined8 *)(lVar12 + 0x114) = DAT_14676e1b0;
          *(undefined4 *)(lVar12 + 0x11c) = DAT_14676e1b8;
          *(undefined8 *)(lVar12 + 0x120) = DAT_14676e1b0;
          *(undefined4 *)(lVar12 + 0x128) = DAT_14676e1b8;
          *(undefined2 *)(lVar12 + 300) = 0;
          *(undefined8 *)(lVar12 + 0x130) = 0;
          *(undefined8 *)(lVar12 + 0x138) = 0;
          *(undefined4 *)(lVar12 + 0x138) = 0xffffffff;
          *(undefined4 *)(lVar12 + 0x13c) = 0;
          uVar8 = *(undefined8 *)(lVar3 + 0x6f0);
          puVar10 = (undefined8 *)(param_1[1] + (longlong)iVar2 * 0x140);
          *puVar10 = *(undefined8 *)(lVar3 + 0x6e8);
          puVar10[1] = uVar8;
          uVar8 = *(undefined8 *)(lVar3 + 0x700);
          puVar10[2] = *(undefined8 *)(lVar3 + 0x6f8);
          puVar10[3] = uVar8;
          uVar8 = *(undefined8 *)(lVar3 + 0x710);
          puVar10[4] = *(undefined8 *)(lVar3 + 0x708);
          puVar10[5] = uVar8;
          uVar8 = *(undefined8 *)(lVar3 + 0x720);
          puVar10[6] = *(undefined8 *)(lVar3 + 0x718);
          puVar10[7] = uVar8;
          uVar8 = *(undefined8 *)(lVar3 + 0x730);
          puVar10[8] = *(undefined8 *)(lVar3 + 0x728);
          puVar10[9] = uVar8;
          uVar8 = *(undefined8 *)(lVar3 + 0x740);
          puVar10[10] = *(undefined8 *)(lVar3 + 0x738);
          puVar10[0xb] = uVar8;
          uVar8 = *(undefined8 *)(lVar3 + 0x750);
          puVar10[0xc] = *(undefined8 *)(lVar3 + 0x748);
          puVar10[0xd] = uVar8;
          uVar8 = *(undefined8 *)(lVar3 + 0x760);
          puVar10[0xe] = *(undefined8 *)(lVar3 + 0x758);
          puVar10[0xf] = uVar8;
          uVar8 = *(undefined8 *)(lVar3 + 0x770);
          puVar10[0x10] = *(undefined8 *)(lVar3 + 0x768);
          puVar10[0x11] = uVar8;
          uVar8 = *(undefined8 *)(lVar3 + 0x780);
          puVar10[0x12] = *(undefined8 *)(lVar3 + 0x778);
          puVar10[0x13] = uVar8;
          puVar10[0x14] = *(undefined8 *)(lVar3 + 0x788);
          puVar10[0x26] = lVar3 + 0x430;
          uVar8 = *(undefined8 *)(lVar3 + 0x308);
          puVar10[0x1b] = *(undefined8 *)(lVar3 + 0x300);
          puVar10[0x1c] = uVar8;
          uVar8 = *(undefined8 *)(lVar3 + 0x318);
          puVar10[0x1d] = *(undefined8 *)(lVar3 + 0x310);
          puVar10[0x1e] = uVar8;
          uVar8 = *(undefined8 *)(lVar3 + 0x328);
          puVar10[0x1f] = *(undefined8 *)(lVar3 + 800);
          puVar10[0x20] = uVar8;
          uVar8 = *(undefined8 *)(lVar3 + 0x338);
          puVar10[0x21] = *(undefined8 *)(lVar3 + 0x330);
          puVar10[0x22] = uVar8;
          uVar5 = *(undefined4 *)(lVar3 + 0x344);
          uVar6 = *(undefined4 *)(lVar3 + 0x348);
          uVar7 = *(undefined4 *)(lVar3 + 0x34c);
          *(undefined4 *)(puVar10 + 0x23) = *(undefined4 *)(lVar3 + 0x340);
          *(undefined4 *)((longlong)puVar10 + 0x11c) = uVar5;
          *(undefined4 *)(puVar10 + 0x24) = uVar6;
          *(undefined4 *)((longlong)puVar10 + 0x124) = uVar7;
          puVar10[0x25] = *(undefined8 *)(lVar3 + 0x350);
          FWeakObjectPtr::operator=(puVar10 + 0x27,lVar3);
          FUN_142fb2a80(puVar10[0x26],*(undefined1 *)((longlong)puVar10 + 300),
                        *(undefined1 *)((longlong)puVar10 + 0x12d),puVar10 + 0x1e,
                        (longlong)puVar10 + 0xe4);
          plVar11 = local_res20;
        }
        plVar13 = plVar13 + 1;
      } while (plVar13 != plVar11);
    }
    FUN_142fb6f40(param_1[3]);
    local_88 = (longlong *)0x0;
    local_78 = 0;
    puVar10 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
    if (puVar10 != (undefined8 *)0x0) {
      puVar10[1] = param_1;
      *puVar10 = &PTR_FUN_143f77b70;
    }
    local_b8[0] = &LAB_142f945a0;
    plVar11 = (longlong *)FUN_140596960(local_50,0,0xff);
    lVar3 = *plVar11;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(lVar3 + 0x10,local_b8);
    *(undefined4 *)(lVar3 + 0x60) = 0x10ff;
    lVar3 = *plVar11;
    lVar9 = plVar11[2];
    lVar12 = plVar11[1];
    lVar4 = *(longlong *)(lVar3 + 0x78);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
      UNLOCK();
    }
    local_res18 = lVar4;
    FUN_1405ab110(lVar3,lVar12,(int)lVar9,1);
    if (local_78 != 0) {
      plVar11 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar11 = local_88;
      }
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x10))(plVar11,0);
      }
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (param_1 == &local_res18) {
      if (lVar4 == 0) {
        return;
      }
      LOCK();
      piVar1 = (int *)(lVar4 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      lVar3 = local_res18;
    }
    else {
      lVar3 = *param_1;
      *param_1 = lVar4;
      if (lVar3 == 0) {
        return;
      }
      LOCK();
      piVar1 = (int *)(lVar3 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    if (iVar2 == 1) {
      FGraphEvent::Recycle(lVar3);
    }
  }
  return;
}



// FUNCTION 142fb50e0 FUN_142fb50e0 body=1001 status=ok
// SIG undefined FUN_142fb50e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142fb50e0(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined1 local_98;
  int local_94;
  longlong local_90;
  code *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if ((*param_1 == 0) || ((longlong *)param_1[1] == (longlong *)0x0)) {
    *(undefined1 *)(param_1 + 4) = 0;
    return 1;
  }
  if (param_1[0x11] == 0) {
    cVar7 = (**(code **)(*(longlong *)param_1[1] + 0x490))();
    if (cVar7 != '\0') {
      lVar2 = param_1[1];
      if (((-1 < *(int *)(lVar2 + 0x758)) && (-1 < *(int *)(lVar2 + 0x75c))) ||
         ((-1 < *(int *)(lVar2 + 0x760) && (-1 < *(int *)(lVar2 + 0x764))))) {
        lVar9 = operator_new(0xf0);
        lVar12 = 0;
        if (lVar9 != 0) {
          *(undefined8 *)(lVar9 + 0x14) = 0xffffffffffffffff;
          *(undefined4 *)(lVar9 + 0x34) = 0x3dcccccd;
          *(undefined4 *)(lVar9 + 0x38) = 0x3f800000;
          *(undefined4 *)(lVar9 + 0x3c) = 0x3c23d70a;
          *(undefined4 *)(lVar9 + 0x40) = 0x3dcccccd;
          *(undefined4 *)(lVar9 + 0x44) = 0x3f800000;
          *(undefined4 *)(lVar9 + 0x48) = 0x42c80000;
          *(undefined8 *)(lVar9 + 0x4c) = 0x3f000000;
          *(undefined4 *)(lVar9 + 0x54) = 0x3fa00000;
          *(undefined4 *)(lVar9 + 0x58) = 0x40800000;
          *(undefined4 *)(lVar9 + 0x5c) = 0x3f800000;
          *(undefined4 *)(lVar9 + 0x60) = 0x3f800000;
          *(undefined4 *)(lVar9 + 100) = 0x40a00000;
          *(undefined1 *)(lVar9 + 0x68) = 0;
          *(undefined8 *)(lVar9 + 0x70) = 0;
          *(undefined8 *)(lVar9 + 0x78) = 0;
          _guard_xfg_dispatch_icall_nop((void *)(lVar9 + 8),0,0x88);
          *(undefined8 *)(lVar9 + 8) = DAT_14676e1b0;
          *(undefined4 *)(lVar9 + 0x10) = DAT_14676e1b8;
          *(undefined8 *)(lVar9 + 0x98) = 0;
          *(undefined8 *)(lVar9 + 0xa0) = 0;
          *(undefined8 *)(lVar9 + 0xb8) = 0;
          *(undefined8 *)(lVar9 + 0xc0) = 0;
          *(undefined4 *)(lVar9 + 200) = 0xffffffff;
          *(undefined4 *)(lVar9 + 0xcc) = 0;
          *(undefined8 *)(lVar9 + 0xd8) = 0;
          *(undefined4 *)(lVar9 + 0xe0) = 0;
          *(undefined4 *)(lVar9 + 0x90) = 0;
          TSet<TTuple<UClass_*,TArray<ULinkerPlaceholderExportObject_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<ULinkerPlaceholderExportObject_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
          ::Reset();
          *(undefined4 *)(lVar9 + 0xe8) = 0xffffffff;
          *(undefined4 *)(lVar9 + 0xec) = 0;
          lVar12 = lVar9;
        }
        param_1[0x11] = lVar12;
        *(longlong *)(lVar12 + 0x80) = *param_1;
        lVar12 = param_1[0x11];
        if (((*param_1 != 0) && (-1 < *(int *)(lVar2 + 0x758))) && (-1 < *(int *)(lVar2 + 0x75c))) {
          lVar9 = *(longlong *)(lVar2 + 0x758);
          iVar8 = (int)lVar9;
          if ((((-1 < iVar8) && (-1 < lVar9)) &&
              (((lVar3 = *(longlong *)(*param_1 + 0x8f8), lVar3 != 0 &&
                ((lVar3 = *(longlong *)(lVar3 + 0x130), lVar3 != 0 && (-1 < iVar8)))) &&
               (iVar8 < *(int *)(lVar3 + 0x40))))) &&
             ((lVar3 = *(longlong *)((longlong)iVar8 * 0x100 + *(longlong *)(lVar3 + 0x38)),
              lVar3 != 0 &&
              ((int)((ulonglong)lVar9 >> 0x20) <
               *(int *)(*(longlong *)(lVar3 + 0x18) + 0xd8) +
               *(int *)(*(longlong *)(lVar3 + 0x18) + 0x20))))) {
            local_38 = 0;
            uStack_30 = 0;
            local_94 = *(int *)(lVar2 + 0x75c);
            FUN_143852380(lVar3,&local_94,&local_38);
            *(undefined4 *)(lVar12 + 8) = (undefined4)local_38;
            *(undefined4 *)(lVar12 + 0xc) = local_38._4_4_;
            *(undefined4 *)(lVar12 + 0x10) = (undefined4)uStack_30;
            *(float *)(lVar12 + 8) = *(float *)(lVar12 + 8) * 100.0;
            *(float *)(lVar12 + 0x10) = *(float *)(lVar12 + 0x10) * 100.0;
            *(float *)(lVar12 + 0xc) = *(float *)(lVar12 + 0xc) * 100.0;
          }
        }
        *(undefined8 *)(param_1[0x11] + 0x14) = *(undefined8 *)(lVar2 + 0x758);
        uVar11 = *(undefined8 *)(lVar2 + 0x6f0);
        lVar12 = param_1[0x11];
        *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)(lVar2 + 0x6e8);
        *(undefined8 *)(lVar12 + 0x28) = uVar11;
        uVar11 = *(undefined8 *)(lVar2 + 0x700);
        *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)(lVar2 + 0x6f8);
        *(undefined8 *)(lVar12 + 0x38) = uVar11;
        uVar11 = *(undefined8 *)(lVar2 + 0x710);
        *(undefined8 *)(lVar12 + 0x40) = *(undefined8 *)(lVar2 + 0x708);
        *(undefined8 *)(lVar12 + 0x48) = uVar11;
        uVar11 = *(undefined8 *)(lVar2 + 0x720);
        *(undefined8 *)(lVar12 + 0x50) = *(undefined8 *)(lVar2 + 0x718);
        *(undefined8 *)(lVar12 + 0x58) = uVar11;
        uVar4 = *(undefined4 *)(lVar2 + 0x72c);
        uVar5 = *(undefined4 *)(lVar2 + 0x730);
        uVar6 = *(undefined4 *)(lVar2 + 0x734);
        *(undefined4 *)(lVar12 + 0x60) = *(undefined4 *)(lVar2 + 0x728);
        *(undefined4 *)(lVar12 + 100) = uVar4;
        *(undefined4 *)(lVar12 + 0x68) = uVar5;
        *(undefined4 *)(lVar12 + 0x6c) = uVar6;
        uVar4 = *(undefined4 *)(lVar2 + 0x73c);
        uVar5 = *(undefined4 *)(lVar2 + 0x740);
        uVar6 = *(undefined4 *)(lVar2 + 0x744);
        *(undefined4 *)(lVar12 + 0x70) = *(undefined4 *)(lVar2 + 0x738);
        *(undefined4 *)(lVar12 + 0x74) = uVar4;
        *(undefined4 *)(lVar12 + 0x78) = uVar5;
        *(undefined4 *)(lVar12 + 0x7c) = uVar6;
        FWeakObjectPtr::operator=(param_1[0x11] + 0xe8,param_1[1]);
        local_58 = 0;
        local_48 = 0;
        puVar10 = (undefined8 *)FUN_140438ef0(0x10,local_78);
        if (puVar10 != (undefined8 *)0x0) {
          puVar10[1] = param_1;
          *puVar10 = &PTR_FUN_143f77b70;
        }
        local_88[0] = FUN_142f94560;
        local_a8 = 0x10ff;
        uVar11 = FUN_140983350(&local_90,local_88,local_98,0);
        TRefCountPtr<FGraphEvent>::operator=(param_1 + 0x10,uVar11);
        if (local_90 != 0) {
          LOCK();
          piVar1 = (int *)(local_90 + 0x48);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            FGraphEvent::Recycle();
          }
        }
        goto LAB_142fb549a;
      }
    }
    uVar11 = 0;
  }
  else {
LAB_142fb549a:
    uVar11 = 1;
  }
  return uVar11;
}



// FUNCTION 142fb54d0 FUN_142fb54d0 body=1188 status=ok
// SIG undefined FUN_142fb54d0(void)

undefined1 FUN_142fb54d0(longlong *param_1,float *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined8 local_78;
  float local_70;
  float local_6c;
  undefined1 local_67;
  float local_60;
  float fStack_5c;
  float local_58;
  undefined8 local_50;
  float local_48;
  
  lVar5 = param_1[3];
  if ((((lVar5 == 0) || (param_1[2] == 0)) || (*param_1 == 0)) || (param_1[4] == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  uVar3 = 0;
  if (bVar2) {
    param_1[0x10] = *param_3;
    param_1[0x11] = *param_4;
    lVar1 = param_1[2];
    local_50 = *(undefined8 *)(lVar1 + 0x784);
    local_48 = *(float *)(lVar1 + 0x78c);
    fVar7 = (float)((ulonglong)local_50 >> 0x20);
    local_78._0_4_ = *param_2 - (float)local_50;
    local_70 = param_2[2] - (local_48 - *(float *)(lVar1 + 0x6ec));
    local_78._4_4_ = param_2[1] - fVar7;
    fVar6 = (float)local_78 * (float)local_78 + local_78._4_4_ * local_78._4_4_;
    if (*(char *)(lVar1 + 0x781) == '\x01') {
      if (fVar6 == 1.0) {
        if (local_70 != 0.0) {
          local_70 = 0.0;
        }
      }
      else if (1e-08 <= fVar6) {
        auVar9 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
        fVar8 = auVar9._0_4_;
        fVar8 = fVar8 + fVar8 * (0.5 - fVar6 * 0.5 * fVar8 * fVar8);
        fVar8 = fVar8 + fVar8 * (0.5 - fVar6 * 0.5 * fVar8 * fVar8);
        local_78._0_4_ = (float)local_78 * fVar8;
        local_78._4_4_ = fVar8 * local_78._4_4_;
        local_70 = 0.0;
      }
      else {
        local_70 = DAT_1468b5d98;
        local_78._0_4_ = DAT_1468b5d90;
        local_78._4_4_ = DAT_1468b5d94;
      }
    }
    else {
      fVar6 = local_70 * local_70 + fVar6;
      if (fVar6 != 1.0) {
        if (fVar6 < 1e-08) {
          local_70 = DAT_1468b5d98;
          local_78._0_4_ = DAT_1468b5d90;
          local_78._4_4_ = DAT_1468b5d94;
        }
        else {
          auVar9 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
          fVar8 = auVar9._0_4_;
          fVar8 = fVar8 + fVar8 * (0.5 - fVar6 * 0.5 * fVar8 * fVar8);
          fVar8 = fVar8 + fVar8 * (0.5 - fVar6 * 0.5 * fVar8 * fVar8);
          local_78._0_4_ = (float)local_78 * fVar8;
          local_70 = fVar8 * local_70;
          local_78._4_4_ = fVar8 * local_78._4_4_;
        }
      }
    }
    local_60 = (float)*(undefined8 *)param_2;
    local_60 = local_60 + (float)local_78;
    fStack_5c = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
    fVar6 = local_60 - (float)local_50;
    fStack_5c = fStack_5c + local_78._4_4_;
    fVar7 = fStack_5c - fVar7;
    local_58 = param_2[2] + local_70 + *(float *)(param_1 + 6) * 0.5;
    fVar7 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + (local_58 - local_48) * (local_58 - local_48));
    if (0.0001 <= fVar7) {
      lVar5 = *(longlong *)(lVar5 + 0x168);
      if (lVar5 != 0) {
        lVar4 = FUN_1429f11d0();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          FUN_142db7130(param_1 + 0xb,lVar5,0);
        }
      }
      fVar6 = (float)(**(code **)(*(longlong *)param_1[4] + 0x400))();
      DSP::CAkRectifier::CAkRectifier(&local_78);
      if (fVar6 <= 100.0) {
        fVar6 = 100.0;
      }
      local_70 = local_58 - *(float *)(lVar1 + 0x78c);
      local_67 = 1;
      local_6c = fVar7 / fVar6;
      local_78 = CONCAT44(fStack_5c - (float)((ulonglong)*(undefined8 *)(lVar1 + 0x784) >> 0x20),
                          local_60 - (float)*(undefined8 *)(lVar1 + 0x784));
      local_48 = local_70;
      lVar5 = FUN_142d85b60(param_1[4] + 0x2428,&local_78,0);
      param_1[0x14] = lVar5;
      (**(code **)(*(longlong *)param_1[4] + 0x5a0))((longlong *)param_1[4],0,0);
      FUN_142dafbc0(param_1[4] + 0x8b0,&DAT_146b44028);
      uVar3 = 1;
    }
    else {
      FUN_14223c850(lVar5,&local_60,0,0,1);
      FUN_142fb71e0(param_1,1);
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 142fb5980 FUN_142fb5980 body=793 status=ok
// SIG undefined FUN_142fb5980(void)

ulonglong FUN_142fb5980(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  ulonglong in_RAX;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 uVar9;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  float local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  longlong lStack_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_28;
  float local_20;
  undefined4 local_1c;
  undefined8 local_18;
  longlong local_10;
  
  if ((((param_1[3] == 0) || (lVar2 = param_1[2], lVar2 == 0)) || (*param_1 == 0)) ||
     ((param_1[4] == 0 || (DAT_146b17150 == 0)))) {
LAB_142fb5bc2:
    uVar5 = in_RAX & 0xffffffffffffff00;
  }
  else {
    fVar7 = *(float *)(lVar2 + 0x6ec);
    uVar9 = *(undefined8 *)(lVar2 + 0x784);
    fVar6 = *(float *)(lVar2 + 0x78c) - fVar7;
    local_c8 = 0;
    local_c0 = 0;
    local_res8 = 0xffffffffffffffff;
    local_res10 = 0xffffffffffffffff;
    if (*(char *)(lVar2 + 0x781) == '\x01') {
      uStack_90 = *(undefined8 *)(lVar2 + 0x6f8);
      uStack_88 = *(undefined8 *)(lVar2 + 0x700);
      local_40 = param_1[1];
      auStack_a0 = *(undefined1 (*) [16])(lVar2 + 0x6e8);
      local_a8 = 0;
      local_80 = *(undefined8 *)(lVar2 + 0x708);
      uStack_78 = *(undefined8 *)(lVar2 + 0x710);
      local_38 = 0;
      local_70 = *(undefined8 *)(lVar2 + 0x718);
      uStack_68 = *(undefined8 *)(lVar2 + 0x720);
      local_60 = *(undefined8 *)(lVar2 + 0x728);
      uStack_58 = *(undefined8 *)(lVar2 + 0x730);
      local_50 = *(undefined8 *)(lVar2 + 0x738);
      lStack_48 = *(longlong *)(lVar2 + 0x740);
      local_ac = 0x45000000;
      local_b8 = uVar9;
      local_b0 = fVar6;
      if (auStack_a0._12_4_ == -1) {
        uVar4 = FUN_142fa3070(local_40 + 0x720,*(undefined4 *)(lVar2 + 0x6e8),fVar7);
        auStack_a0._12_4_ = uVar4;
      }
      in_RAX = FUN_142f9b3a0(&local_b8,&local_c8,&local_res8);
      if ((char)in_RAX == '\0') goto LAB_142fb5bc2;
      if ((((int)local_res8 == *(int *)(lVar2 + 0x758)) &&
          (local_res8._4_4_ == *(int *)(lVar2 + 0x75c))) &&
         (fVar7 = local_c8._4_4_ - (float)((ulonglong)uVar9 >> 0x20),
         fVar8 = (float)local_c8 - (float)uVar9, fVar7 * fVar7 + fVar8 * fVar8 <= 1.0)) {
        local_28 = *(undefined8 *)(lVar2 + 0x784);
        local_1c = 0x3dcccccd;
        fVar6 = *(float *)(lVar2 + 0x78c) - *(float *)(lVar2 + 0x6ec);
        local_18 = *(undefined8 *)(lVar2 + 0x758);
        local_10 = param_1[1];
        local_20 = fVar6;
        cVar3 = FUN_142fa8600(&local_28,0);
        if (cVar3 != '\0') {
          iVar1 = (int)param_1[0x16];
          *(int *)(param_1 + 0x16) = iVar1 + 1;
          if (*(int *)((longlong)param_1 + 0xb4) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x15,iVar1);
          }
          *(ulonglong *)(param_1[0x15] + (longlong)iVar1 * 8) = local_res8;
          in_RAX = local_res8;
          goto LAB_142fb5bc2;
        }
      }
    }
    else if (*(char *)(lVar2 + 0x781) == '\x02') {
      uStack_90 = *(undefined8 *)(lVar2 + 0x700);
      lStack_48 = param_1[1];
      local_a8 = *(undefined8 *)(lVar2 + 0x6e8);
      auStack_a0 = *(undefined1 (*) [16])(lVar2 + 0x6f0);
      local_ac = 0x45000000;
      uStack_88 = *(undefined8 *)(lVar2 + 0x708);
      local_80 = *(undefined8 *)(lVar2 + 0x710);
      uStack_78 = *(undefined8 *)(lVar2 + 0x718);
      local_70 = *(undefined8 *)(lVar2 + 0x720);
      uStack_68 = *(undefined8 *)(lVar2 + 0x728);
      local_60 = *(undefined8 *)(lVar2 + 0x730);
      uStack_58 = *(undefined8 *)(lVar2 + 0x738);
      local_50 = *(undefined8 *)(lVar2 + 0x740);
      local_b8 = uVar9;
      local_b0 = fVar6;
      if (*(int *)(lVar2 + 0x6f8) == -1) {
        fVar8 = *(float *)(lVar2 + 0x6e8);
        if (*(float *)(lVar2 + 0x6e8) <= fVar7) {
          fVar8 = fVar7;
        }
        uVar4 = FUN_142fa3010(lStack_48 + 0x738,fVar8);
        auStack_a0._8_4_ = uVar4;
      }
      in_RAX = FUN_142f9e4d0(&local_b8,&local_c8,&local_res10);
      if ((char)in_RAX == '\0') goto LAB_142fb5bc2;
    }
    uVar5 = FUN_142fb54d0(param_1,&local_c8,&local_res8,&local_res10,uVar9,fVar6);
  }
  return uVar5;
}



// FUNCTION 142fb5ca0 FUN_142fb5ca0 body=218 status=ok
// SIG undefined FUN_142fb5ca0(void)

void FUN_142fb5ca0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 local_18;
  float local_10;
  
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  if ((param_1[3] != 0) && (plVar1 = *(longlong **)(param_1[3] + 0x180), plVar1 != (longlong *)0x0))
  {
    (**(code **)(*plVar1 + 0x830))(plVar1,2);
    (**(code **)(**(longlong **)(param_1[3] + 0x180) + 0x830))(*(longlong **)(param_1[3] + 0x180),6)
    ;
  }
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    local_18 = *(undefined8 *)(lVar2 + 0x784);
    local_10 = *(float *)(lVar2 + 0x78c) - *(float *)(lVar2 + 0x6ec);
    uVar4 = FUN_142f9cfb0(*param_1,0);
    cVar3 = FUN_142fa5110(uVar4,&local_18,lVar2 + 0x6e8,0);
    if ((cVar3 == '\0') && (lVar2 = param_1[1], *(char *)(lVar2 + 0x9a8) != '\x02')) {
      cVar3 = FUN_142fb5980(lVar2 + 0x930);
      if (cVar3 != '\0') {
        *(undefined1 *)(lVar2 + 0x9a8) = 2;
      }
    }
  }
  return;
}



// FUNCTION 142fb5d80 FUN_142fb5d80 body=900 status=ok
// SIG undefined FUN_142fb5d80(void)

void FUN_142fb5d80(longlong param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  uint *_Dst;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  uint local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_a8;
  float local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  float local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
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
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  
  if ((((*(longlong *)(param_1 + 0x108) != 0) && (*(longlong *)(param_1 + 0x100) != 0)) &&
      (*(longlong *)(param_1 + 0x110) != 0)) && (*(longlong *)(param_1 + 0x118) != 0)) {
    lVar7 = 0;
    if ((*(longlong *)(param_1 + 0x30) != 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x38) + 8);
      LOCK();
      iVar3 = *piVar1;
      if (iVar3 == 0) {
        *piVar1 = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (0 < iVar3) {
        return;
      }
    }
    if ((*(int *)(param_1 + 0x198) != 0) && (*(longlong *)(param_1 + 0x118) != 0)) {
      lVar6 = lVar7;
      if (*(longlong *)(param_1 + 0x108) != 0) {
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x6e0);
      }
      if ((lVar6 != 0) && (*(char *)(lVar6 + 0x2740) != '\0')) {
        uVar8 = FUN_142cecf20(lVar6);
        cVar2 = FUN_142cf34c0(lVar6,uVar8,0);
        if (cVar2 == '\0') {
          return;
        }
      }
      _Dst = *(uint **)(param_1 + 400);
      if (*(uint **)(param_1 + 400) == (uint *)0x0) {
        _Dst = (uint *)(param_1 + 0x120);
      }
      local_c8 = *_Dst;
      fStack_c4 = (float)_Dst[1];
      fStack_c0 = (float)_Dst[2];
      fStack_bc = (float)_Dst[3];
      local_b8 = *(undefined8 *)(_Dst + 4);
      local_b0 = (float)_Dst[6];
      iVar3 = *(int *)(param_1 + 0x198);
      if (iVar3 + -1 != 0) {
        _guard_xfg_dispatch_icall_nop(_Dst,_Dst + 7,(longlong)(iVar3 + -1) * 0x1c);
        iVar3 = *(int *)(param_1 + 0x198);
      }
      *(int *)(param_1 + 0x198) = iVar3 + -1;
      FUN_142fb13a0((uint *)(param_1 + 0x120));
      lVar6 = *(longlong *)(param_1 + 0x100);
      if (local_c8 != 0) {
        if ((int)(local_c8 & 0xff) < *(int *)(lVar6 + 0x668)) {
          plVar4 = *(longlong **)(param_1 + 0x108);
          if (plVar4 == (longlong *)0x0) {
            return;
          }
          if (lVar6 == 0) {
            return;
          }
          if (*(longlong *)(param_1 + 0x110) == 0) {
            return;
          }
          if (*(longlong *)(param_1 + 0x118) == 0) {
            return;
          }
          (**(code **)(*plVar4 + 0x4a0))(plVar4,&local_98);
          if (local_98 == 0) {
            return;
          }
          if (local_90 == 0) {
            return;
          }
          local_18 = *(longlong *)(param_1 + 0x100);
          lVar6 = lVar7;
          if ((int)(local_c8 & 0xff) < *(int *)(local_18 + 0x668)) {
            lVar6 = *(longlong *)(*(longlong *)(local_18 + 0x660) + (ulonglong)(byte)local_c8 * 8);
          }
          plVar4 = *(longlong **)(local_90 + 0x30);
          plVar5 = plVar4 + (longlong)*(int *)(local_90 + 0x38) * 4;
          for (; plVar4 != plVar5; plVar4 = plVar4 + 4) {
            if (*plVar4 == lVar6) {
              if (plVar4 != (longlong *)0x0) {
                lVar7 = plVar4[2];
              }
              break;
            }
          }
          if (((fStack_c4 == (float)DAT_14676e1b0) && (fStack_c0 == DAT_14676e1b0._4_4_)) &&
             (fStack_bc == DAT_14676e1b8)) {
            return;
          }
          if ((((float)local_b8 == (float)DAT_14676e1b0) && (local_b8._4_4_ == DAT_14676e1b0._4_4_))
             && (local_b0 == DAT_14676e1b8)) {
            return;
          }
          local_7c = 0x437a0000;
          local_a8 = local_b8;
          local_88 = local_b8;
          local_a0 = local_b0;
          local_80 = local_b0;
          lVar6 = *(longlong *)(param_1 + 0x108);
          local_78 = *(undefined8 *)(lVar6 + 0x6e8);
          uStack_70 = *(undefined8 *)(lVar6 + 0x6f0);
          local_68 = *(undefined8 *)(lVar6 + 0x6f8);
          uStack_60 = *(undefined8 *)(lVar6 + 0x700);
          local_58 = *(undefined8 *)(lVar6 + 0x708);
          uStack_50 = *(undefined8 *)(lVar6 + 0x710);
          local_48 = *(undefined8 *)(lVar6 + 0x718);
          uStack_40 = *(undefined8 *)(lVar6 + 0x720);
          local_38 = *(undefined4 *)(lVar6 + 0x728);
          uStack_34 = *(undefined4 *)(lVar6 + 0x72c);
          uStack_30 = *(undefined4 *)(lVar6 + 0x730);
          uStack_2c = *(undefined4 *)(lVar6 + 0x734);
          local_28 = *(undefined4 *)(lVar6 + 0x738);
          uStack_24 = *(undefined4 *)(lVar6 + 0x73c);
          uStack_20 = *(undefined4 *)(lVar6 + 0x740);
          uStack_1c = *(undefined4 *)(lVar6 + 0x744);
          FUN_142fae610(&local_88,&local_a8,0);
          cVar2 = FUN_142facf40(param_1,lVar7,&fStack_c4,&local_a8);
        }
        else {
          if (*(int *)(lVar6 + 0x668) + *(int *)(lVar6 + 0x678) <= (int)(local_c8 & 0xff)) {
            return;
          }
          cVar2 = FUN_142fb6480(param_1,&local_c8);
        }
        if (cVar2 != '\0') {
          FUN_142f9da80(*(undefined8 *)(*(longlong *)(param_1 + 0x118) + 0x488),&fStack_c4,
                        *(undefined8 *)(param_1 + 0x108),param_1 + 0x40);
          FUN_142f9da80(*(undefined8 *)(*(longlong *)(param_1 + 0x118) + 0x488),&local_b8,
                        *(undefined8 *)(param_1 + 0x108),param_1 + 0x78);
          TBaseMulticastDelegate<void>::Broadcast(param_1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142fb6110 FUN_142fb6110 body=869 status=ok
// SIG undefined FUN_142fb6110(void)

void FUN_142fb6110(longlong *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  void *_Src;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined4 *puVar15;
  int iVar16;
  undefined4 *puVar17;
  longlong local_res10;
  undefined1 local_a8 [32];
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  
  if ((int)param_1[2] != 0) {
    plVar13 = param_1 + 3;
    if (plVar13 != param_1 + 1) {
      iVar16 = (int)param_1[4];
      if (iVar16 != 0) {
        plVar14 = (longlong *)(*plVar13 + 0xf8);
        do {
          if (*plVar14 != 0) {
            FMemory::Free();
          }
          plVar14 = plVar14 + 0x2a;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
      }
      iVar16 = (int)param_1[2];
      lVar4 = param_1[1];
      *(int *)(param_1 + 4) = iVar16;
      if ((iVar16 == 0) && (*(int *)((longlong)param_1 + 0x24) == 0)) {
        *(undefined4 *)((longlong)param_1 + 0x24) = 0;
      }
      else {
        FUN_142fb0e80(plVar13,iVar16);
        puVar12 = (undefined8 *)*plVar13;
        if (iVar16 != 0) {
          puVar15 = (undefined4 *)((longlong)puVar12 + 0x104);
          puVar17 = (undefined4 *)(lVar4 + 0x10c);
          do {
            *puVar12 = *(undefined8 *)(puVar17 + -0x43);
            uVar10 = *(undefined8 *)(puVar17 + -0x3f);
            *(undefined8 *)(puVar15 + -0x3f) = *(undefined8 *)(puVar17 + -0x41);
            *(undefined8 *)(puVar15 + -0x3d) = uVar10;
            uVar10 = *(undefined8 *)(puVar17 + -0x3b);
            *(undefined8 *)(puVar15 + -0x3b) = *(undefined8 *)(puVar17 + -0x3d);
            *(undefined8 *)(puVar15 + -0x39) = uVar10;
            uVar10 = *(undefined8 *)(puVar17 + -0x37);
            *(undefined8 *)(puVar15 + -0x37) = *(undefined8 *)(puVar17 + -0x39);
            *(undefined8 *)(puVar15 + -0x35) = uVar10;
            uVar10 = *(undefined8 *)(puVar17 + -0x33);
            *(undefined8 *)(puVar15 + -0x33) = *(undefined8 *)(puVar17 + -0x35);
            *(undefined8 *)(puVar15 + -0x31) = uVar10;
            uVar10 = *(undefined8 *)(puVar17 + -0x2f);
            *(undefined8 *)(puVar15 + -0x2f) = *(undefined8 *)(puVar17 + -0x31);
            *(undefined8 *)(puVar15 + -0x2d) = uVar10;
            uVar10 = *(undefined8 *)(puVar17 + -0x2b);
            *(undefined8 *)(puVar15 + -0x2b) = *(undefined8 *)(puVar17 + -0x2d);
            *(undefined8 *)(puVar15 + -0x29) = uVar10;
            uVar10 = *(undefined8 *)(puVar17 + -0x27);
            *(undefined8 *)(puVar15 + -0x27) = *(undefined8 *)(puVar17 + -0x29);
            *(undefined8 *)(puVar15 + -0x25) = uVar10;
            uVar10 = *(undefined8 *)(puVar17 + -0x23);
            *(undefined8 *)(puVar15 + -0x23) = *(undefined8 *)(puVar17 + -0x25);
            *(undefined8 *)(puVar15 + -0x21) = uVar10;
            uVar10 = *(undefined8 *)(puVar17 + -0x1f);
            *(undefined8 *)(puVar15 + -0x1f) = *(undefined8 *)(puVar17 + -0x21);
            *(undefined8 *)(puVar15 + -0x1d) = uVar10;
            uVar10 = *(undefined8 *)(puVar17 + -0x1b);
            *(undefined8 *)(puVar15 + -0x1b) = *(undefined8 *)(puVar17 + -0x1d);
            *(undefined8 *)(puVar15 + -0x19) = uVar10;
            *(undefined8 *)(puVar15 + -0x17) = *(undefined8 *)(puVar17 + -0x19);
            uVar10 = *(undefined8 *)(puVar17 + -0x15);
            *(undefined8 *)(puVar15 + -0x15) = *(undefined8 *)(puVar17 + -0x17);
            *(undefined8 *)(puVar15 + -0x13) = uVar10;
            puVar15[-0x11] = puVar17[-0x13];
            uVar10 = *(undefined8 *)(puVar17 + -0x10);
            *(undefined8 *)(puVar15 + -0x10) = *(undefined8 *)(puVar17 + -0x12);
            *(undefined8 *)(puVar15 + -0xe) = uVar10;
            uVar7 = puVar17[-0xd];
            uVar8 = puVar17[-0xc];
            uVar9 = puVar17[-0xb];
            puVar15[-0xc] = puVar17[-0xe];
            puVar15[-0xb] = uVar7;
            puVar15[-10] = uVar8;
            puVar15[-9] = uVar9;
            uVar7 = puVar17[-9];
            uVar8 = puVar17[-8];
            uVar9 = puVar17[-7];
            puVar15[-8] = puVar17[-10];
            puVar15[-7] = uVar7;
            puVar15[-6] = uVar8;
            puVar15[-5] = uVar9;
            *(undefined8 *)(puVar15 + -3) = 0;
            iVar3 = puVar17[-3];
            _Src = *(void **)(puVar17 + -5);
            puVar15[-1] = iVar3;
            if (iVar3 == 0) {
              *puVar15 = 0;
            }
            else {
              TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                        (puVar15 + -3,iVar3,0);
              _guard_xfg_dispatch_icall_nop(*(void **)(puVar15 + -3),_Src,(longlong)iVar3 << 3);
            }
            puVar12 = puVar12 + 0x2a;
            puVar15[1] = puVar17[-1];
            puVar15[2] = *puVar17;
            *(undefined8 *)(puVar15 + 3) = *(undefined8 *)(puVar17 + 1);
            puVar15[5] = puVar17[3];
            uVar10 = *(undefined8 *)(puVar17 + 6);
            *(undefined8 *)(puVar15 + 6) = *(undefined8 *)(puVar17 + 4);
            *(undefined8 *)(puVar15 + 8) = uVar10;
            uVar10 = *(undefined8 *)(puVar17 + 10);
            *(undefined8 *)(puVar15 + 10) = *(undefined8 *)(puVar17 + 8);
            *(undefined8 *)(puVar15 + 0xc) = uVar10;
            puVar1 = puVar17 + 0xc;
            uVar7 = puVar17[0xd];
            uVar8 = puVar17[0xe];
            uVar9 = puVar17[0xf];
            puVar17 = puVar17 + 0x54;
            puVar15[0xe] = *puVar1;
            puVar15[0xf] = uVar7;
            puVar15[0x10] = uVar8;
            puVar15[0x11] = uVar9;
            puVar15 = puVar15 + 0x54;
            iVar16 = iVar16 + -1;
          } while (iVar16 != 0);
        }
      }
    }
    FUN_142fb0970(param_1 + 1,0);
    local_58 = (longlong *)0x0;
    local_48 = 0;
    puVar12 = (undefined8 *)FUN_140438ef0(0x10,local_78);
    if (puVar12 != (undefined8 *)0x0) {
      puVar12[1] = param_1;
      *puVar12 = &PTR_FUN_1444f8620;
    }
    local_88[0] = &LAB_142f94550;
    plVar13 = (longlong *)FUN_140596960(local_a8,0,0xff);
    lVar4 = *plVar13;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(lVar4 + 0x10,local_88);
    *(undefined4 *)(lVar4 + 0x60) = 0x10ff;
    lVar4 = *plVar13;
    lVar11 = plVar13[2];
    lVar5 = plVar13[1];
    lVar6 = *(longlong *)(lVar4 + 0x78);
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 0x48) = *(int *)(lVar6 + 0x48) + 1;
      UNLOCK();
    }
    local_res10 = lVar6;
    FUN_1405ab110(lVar4,lVar5,(int)lVar11,1);
    if (local_48 != 0) {
      plVar13 = local_78;
      if (local_58 != (longlong *)0x0) {
        plVar13 = local_58;
      }
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 0x10))(plVar13,0);
      }
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (param_1 == &local_res10) {
      if (lVar6 == 0) {
        return;
      }
      LOCK();
      piVar2 = (int *)(lVar6 + 0x48);
      iVar16 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      lVar4 = local_res10;
    }
    else {
      lVar4 = *param_1;
      *param_1 = lVar6;
      if (lVar4 == 0) {
        return;
      }
      LOCK();
      piVar2 = (int *)(lVar4 + 0x48);
      iVar16 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
    }
    if (iVar16 == 1) {
      FGraphEvent::Recycle(lVar4);
    }
  }
  return;
}



// FUNCTION 142fb6480 FUN_142fb6480 body=1083 status=ok
// SIG undefined FUN_142fb6480(void)

ulonglong FUN_142fb6480(longlong param_1,uint *param_2)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong *in_RAX;
  longlong *plVar9;
  undefined8 *puVar10;
  float *pfVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *plVar14;
  uint uVar15;
  longlong *plVar16;
  uint uVar17;
  longlong *plVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 local_78 [8];
  float local_70;
  longlong local_68;
  longlong local_60;
  undefined1 local_58 [64];
  
  plVar18 = *(longlong **)(param_1 + 0x108);
  if ((((plVar18 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x100) != 0)) &&
      (*(longlong *)(param_1 + 0x110) != 0)) &&
     (((*(longlong *)(param_1 + 0x118) != 0 &&
       (in_RAX = (longlong *)(**(code **)(*plVar18 + 0x4a0))(plVar18,&local_68), local_68 != 0)) &&
      (local_60 != 0)))) {
    uVar2 = *param_2;
    plVar18 = (longlong *)0x0;
    lVar4 = *(longlong *)(param_1 + 0x100);
    uVar17 = uVar2 >> 8 & 0xfff;
    uVar15 = uVar2 & 0xff;
    iVar3 = *(int *)(lVar4 + 0x668);
    plVar14 = plVar18;
    if ((iVar3 <= (int)uVar15) && ((int)uVar15 < *(int *)(lVar4 + 0x678) + iVar3)) {
      plVar14 = (longlong *)((longlong)(int)(uVar15 - iVar3) * 0x20 + *(longlong *)(lVar4 + 0x670));
    }
    plVar13 = *(longlong **)(local_60 + 0x30);
    plVar16 = plVar13 + (longlong)*(int *)(local_60 + 0x38) * 4;
    for (; plVar9 = plVar18, plVar13 != plVar16; plVar13 = plVar13 + 4) {
      if (*plVar13 == *plVar14) {
        if (plVar13 != (longlong *)0x0) {
          plVar9 = (longlong *)plVar13[2];
        }
        break;
      }
    }
    *(longlong **)(param_1 + 0xe8) = plVar9;
    plVar13 = *(longlong **)(local_60 + 0x30);
    plVar16 = plVar13 + (longlong)*(int *)(local_60 + 0x38) * 4;
    for (; plVar9 = plVar18, plVar13 != plVar16; plVar13 = plVar13 + 4) {
      if (*plVar13 == plVar14[1]) {
        if (plVar13 != (longlong *)0x0) {
          plVar9 = (longlong *)plVar13[2];
        }
        break;
      }
    }
    *(longlong **)(param_1 + 0xf8) = plVar9;
    in_RAX = plVar18;
    if ((*plVar14 != 0) && (plVar14[1] != 0)) {
      plVar13 = *(longlong **)(local_60 + 0x40);
      plVar16 = plVar13 + (longlong)*(int *)(local_60 + 0x48) * 6;
      for (; (plVar9 = plVar18, plVar13 != plVar16 &&
             ((*plVar13 != *plVar14 || (plVar9 = plVar13, plVar13[1] != plVar14[1]))));
          plVar13 = plVar13 + 6) {
      }
      plVar14 = plVar9 + 3;
      if (plVar9 == (longlong *)0x0) {
        plVar14 = (longlong *)(local_60 + 0x50);
      }
      in_RAX = (longlong *)*plVar14;
    }
    *(longlong **)(param_1 + 0xf0) = in_RAX;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      in_RAX = (longlong *)FUN_142e20fc0();
      for (plVar14 = *(longlong **)(param_1 + 0xe8); plVar14 != (longlong *)0x0;
          plVar14 = (longlong *)plVar14[6]) {
        if (plVar14 == in_RAX) {
          if ((*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) &&
             (*(longlong *)(param_1 + 0xf8) != 0)) {
            in_RAX = (longlong *)FUN_142e20fc0();
            plVar14 = *(longlong **)(param_1 + 0xf8);
            goto joined_r0x000142fb66a1;
          }
          break;
        }
      }
    }
  }
LAB_142fb6662:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
joined_r0x000142fb66a1:
  if (plVar14 == (longlong *)0x0) goto LAB_142fb6662;
  if (plVar14 == in_RAX) {
    if ((*(longlong **)(param_1 + 0xf8) != (longlong *)0x0) && (*(longlong *)(param_1 + 0xf0) != 0))
    {
      in_RAX = (longlong *)FUN_142e20fc0();
      plVar14 = *(longlong **)(param_1 + 0xf0);
      goto joined_r0x000142fb66d3;
    }
    goto LAB_142fb6662;
  }
  plVar14 = (longlong *)plVar14[6];
  goto joined_r0x000142fb66a1;
joined_r0x000142fb66d3:
  if (plVar14 == (longlong *)0x0) goto LAB_142fb6662;
  if (plVar14 == in_RAX) {
    if (*(longlong **)(param_1 + 0xf0) != (longlong *)0x0) {
      plVar14 = plVar18;
      if (((int)(uVar2 >> 0x14) < *(int *)(lVar4 + 0x688)) &&
         (puVar10 = (undefined8 *)((ulonglong)(uVar2 >> 0x14) * 0x10 + *(longlong *)(lVar4 + 0x680))
         , puVar10 != (undefined8 *)0x0)) {
        plVar14 = (longlong *)*puVar10;
      }
      if (((int)uVar17 < *(int *)(lVar4 + 0x688)) &&
         (puVar10 = (undefined8 *)((ulonglong)uVar17 * 0x10 + *(longlong *)(lVar4 + 0x680)),
         puVar10 != (undefined8 *)0x0)) {
        plVar18 = (longlong *)*puVar10;
      }
      pfVar1 = (float *)(param_1 + 0xb0);
      *(undefined8 *)pfVar1 = *(undefined8 *)(param_2 + 1);
      *(uint *)(param_1 + 0xb8) = param_2[3];
      puVar10 = (undefined8 *)FUN_142fa1200(plVar14,local_78,0x3f000000,0);
      *(undefined8 *)(param_1 + 0xbc) = *puVar10;
      *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(puVar10 + 1);
      puVar10 = (undefined8 *)FUN_142fa1200(plVar18,local_78,0x3f000000,0);
      *(undefined8 *)(param_1 + 200) = *puVar10;
      *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(puVar10 + 1);
      pfVar11 = (float *)FUN_142fa13b0(plVar18,local_58,0x42800000);
      fVar22 = pfVar11[8] * 0.0;
      fVar23 = pfVar11[9] * 0.0;
      fVar24 = pfVar11[10] * 0.0;
      fVar5 = *pfVar11;
      fVar6 = pfVar11[1];
      fVar7 = pfVar11[2];
      fVar8 = pfVar11[3];
      fVar19 = fVar24 * fVar6 - fVar23 * fVar7;
      fVar20 = fVar22 * fVar7 - fVar24 * fVar5;
      fVar21 = fVar23 * fVar5 - fVar22 * fVar6;
      fVar19 = fVar19 + fVar19;
      fVar20 = fVar20 + fVar20;
      fVar21 = fVar21 + fVar21;
      local_70 = (fVar20 * fVar5 - fVar19 * fVar6) + fVar8 * fVar21 + fVar24 + pfVar11[6];
      in_RAX = (longlong *)(ulonglong)(uint)local_70;
      *(ulonglong *)(param_1 + 0xd4) =
           CONCAT44((fVar19 * fVar7 - fVar21 * fVar5) + fVar8 * fVar20 + fVar23 + pfVar11[5],
                    (fVar21 * fVar6 - fVar20 * fVar7) + fVar8 * fVar19 + fVar22 + pfVar11[4]);
      *(float *)(param_1 + 0xdc) = local_70;
      if (((((float)DAT_14676e1b0 != *pfVar1) || (DAT_14676e1b0._4_4_ != *(float *)(param_1 + 0xb4))
           ) || (DAT_14676e1b8 != *(float *)(param_1 + 0xb8))) &&
         ((((float)DAT_14676e1b0 != *(float *)(param_1 + 0xd4) ||
           (DAT_14676e1b0._4_4_ != *(float *)(param_1 + 0xd8))) ||
          (DAT_14676e1b8 != *(float *)(param_1 + 0xdc))))) {
        *(undefined1 *)(param_1 + 0xe0) = 1;
        uVar12 = FUN_142facf40(param_1,*(undefined8 *)(param_1 + 0xe8),pfVar1,param_1 + 0xbc);
        return uVar12;
      }
    }
    goto LAB_142fb6662;
  }
  plVar14 = (longlong *)plVar14[6];
  goto joined_r0x000142fb66d3;
}



// FUNCTION 142fb68c0 FUN_142fb68c0 body=58 status=ok
// SIG undefined FUN_142fb68c0(void)

undefined8 FUN_142fb68c0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    plVar1 = (longlong *)FUN_14222e260();
    if (plVar1 != (longlong *)0x0) {
      uVar2 = AAICharacter::GetPrivateStaticClass();
                    /* WARNING: Could not recover jumptable at 0x000142fb68eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 142fb6900 FUN_142fb6900 body=1585 status=ok
// SIG undefined FUN_142fb6900(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142fb6900(longlong *param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  BOOL BVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  uint uVar13;
  float *pfVar14;
  float *pfVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  float *pfVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  float local_e0;
  undefined8 local_dc;
  undefined8 local_d0;
  float local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_ac;
  float local_a4;
  undefined1 local_a0;
  undefined1 local_98 [48];
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  (**(code **)(*param_1 + 0x148))();
  puVar1 = (ulonglong *)(param_1 + 0xed);
  puVar20 = (undefined8 *)0x0;
  local_c0 = 0;
  TArray<FName,FDefaultAllocator>::Remove(puVar1,&local_c0);
  if (param_1[0x16c] != 0) {
    FUN_142f9c640();
  }
  FUN_142f9c930(param_1);
  FUN_142f9ca70(&DAT_146b44070);
  if ((((param_1[0x11f] == 0) || (cVar4 = UPrimitiveComponent::IsWelded(), cVar4 == '\0')) ||
      (cVar4 = APrimalCharacter::IsValidForStatusUpdate(), cVar4 == '\0')) ||
     (cVar4 = FUN_14384c8b0(), cVar4 != '\0')) {
    if ((param_1[0x11f] == 0) || (*(char *)(param_1[0x11f] + 0x512) == '\0')) {
      pfVar14 = (float *)param_1[0x16e];
      pfVar15 = pfVar14 + (longlong)(int)param_1[0x16f] * 7;
      if (pfVar14 != pfVar15) {
        pfVar18 = pfVar14 + 5;
        do {
          local_e0 = *pfVar18 + 100.0;
          local_a0 = 1;
          local_c8 = pfVar18[-3] - 100.0;
          local_b8 = CONCAT44(pfVar18[-4] - 100.0,*pfVar14 - 100.0);
          local_ac = CONCAT44(pfVar18[-1] + 100.0,pfVar18[-2] + 100.0);
          local_b0 = local_c8;
          local_a4 = local_e0;
          FUN_142fa7b00(param_1,&local_b8);
          pfVar14 = pfVar14 + 7;
          pfVar18 = pfVar18 + 7;
        } while (pfVar14 != pfVar15);
      }
      *(undefined4 *)(param_1 + 0x16f) = 0;
      if (0x7fffffff < *(uint *)((longlong)param_1 + 0xb7c)) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeTo
                  (param_1 + 0x16e,0);
      }
      if ((char)param_1[0x16d] != '\0') {
        *(undefined1 *)(param_1 + 0x16d) = 0;
        local_d0 = 0;
        TArray<FName,FDefaultAllocator>::Remove(puVar1,&local_d0);
        plVar11 = (longlong *)*puVar1;
        puVar12 = (undefined8 *)((longlong)(int)param_1[0xee] & 0x1fffffffffffffff);
        if (plVar11 + (int)param_1[0xee] < plVar11) {
          puVar12 = puVar20;
        }
        if (puVar12 != (undefined8 *)0x0) {
          local_dc = 0xffffffffffffffff;
          local_e8 = 0xffffffffffffffff;
          puVar16 = puVar20;
          do {
            lVar10 = *plVar11;
            *(undefined8 *)(lVar10 + 0xa00) = 0xffffffffffffffff;
            *(undefined8 *)(lVar10 + 0x9f8) = 0xffffffffffffffff;
            FUN_142f96a70();
            puVar16 = (undefined8 *)((longlong)puVar16 + 1);
            plVar11 = plVar11 + 1;
          } while (puVar16 != puVar12);
        }
      }
    }
    uVar17 = 0;
    plVar11 = (longlong *)param_1[0x11b];
    uVar21 = (longlong)(int)param_1[0x11c] & 0x1fffffffffffffff;
    if (plVar11 + (int)param_1[0x11c] < plVar11) {
      uVar21 = uVar17;
    }
    if (uVar21 != 0) {
      do {
        plVar2 = (longlong *)*plVar11;
        if (plVar2 != (longlong *)0x0) {
          lVar10 = *plVar2;
          uVar9 = (**(code **)(lVar10 + 0x910))(plVar2,local_98);
          (**(code **)(lVar10 + 0x908))(plVar2,uVar9);
        }
        plVar11 = plVar11 + 1;
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar21);
    }
    *(undefined4 *)(param_1 + 0x11c) = 0;
    if ((*(int *)((longlong)param_1 + 0x8e4) < 0) && (*(int *)((longlong)param_1 + 0x8e4) != 0)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x11b,0);
    }
    FUN_142fb9710(param_1 + 0xcc,param_1);
  }
  puVar12 = (undefined8 *)*puVar1;
  puVar16 = (undefined8 *)((longlong)(int)param_1[0xee] & 0x1fffffffffffffff);
  if (puVar12 + (int)param_1[0xee] < puVar12) {
    puVar16 = puVar20;
  }
  puVar19 = puVar20;
  if (puVar16 != (undefined8 *)0x0) {
    do {
      FUN_142fbba00(*puVar12);
      puVar19 = (undefined8 *)((longlong)puVar19 + 1);
      puVar12 = puVar12 + 1;
    } while (puVar19 != puVar16);
  }
  BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 199));
  if (BVar5 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 199));
  }
  if (param_1[0x11f] != 0) {
    LOCK();
    DAT_146b44118 = 1;
    UNLOCK();
    uVar6 = FUN_1416a5660();
    uVar9 = FUN_1424c8610();
    lVar10 = FUN_14203ac20(uVar9);
    if ((lVar10 == 0) ||
       (cVar4 = UTTLBaseBossWyveAnimationInstance::GetState(lVar10), cVar4 == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
      FUN_143712ff0(lVar10);
      uVar9 = FUN_1424c8610();
      plVar11 = (longlong *)FUN_14067a440(uVar9);
      (**(code **)(*plVar11 + 0x20))(plVar11,lVar10);
    }
    puVar12 = (undefined8 *)(lVar10 + 0x18);
    if (lVar10 == 0) {
      puVar12 = puVar20;
    }
    FUN_14384b630(param_1[0x11f],param_2,puVar12,uVar6);
    if ((bVar3) && (lVar10 != 0)) {
      FUN_143712420(lVar10);
      uVar9 = FUN_1424c8610();
      plVar11 = (longlong *)FUN_14067a440(uVar9);
      (**(code **)(*plVar11 + 0x40))(plVar11);
    }
    LOCK();
    DAT_146b44118 = 0;
    UNLOCK();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 199));
  puVar12 = (undefined8 *)*puVar1;
  puVar16 = (undefined8 *)((longlong)(int)param_1[0xee] & 0x1fffffffffffffff);
  if (puVar12 + (int)param_1[0xee] < puVar12) {
    puVar16 = puVar20;
  }
  puVar19 = puVar20;
  if (puVar16 != (undefined8 *)0x0) {
    do {
      plVar11 = (longlong *)*puVar12;
      FUN_142fbb3e0(plVar11);
      (**(code **)(*plVar11 + 0x4b0))(plVar11);
      puVar19 = (undefined8 *)((longlong)puVar19 + 1);
      puVar12 = puVar12 + 1;
    } while (puVar19 != puVar16);
  }
  if ((int)param_1[0xee] != 0) {
    (**(code **)(*param_1 + 0x148))(param_1);
    puVar12 = (undefined8 *)param_1[0x16c];
    if (puVar12 == (undefined8 *)0x0) {
      puVar16 = (undefined8 *)operator_new(0x20);
      puVar12 = puVar20;
      if (puVar16 != (undefined8 *)0x0) {
        *puVar16 = 0;
        puVar16[1] = 0;
        puVar16[2] = 0;
        puVar16[3] = 0;
        puVar12 = puVar16;
      }
      param_1[0x16c] = (longlong)puVar12;
    }
    FUN_142fb4bf0(puVar12,param_1);
    if ((*(char *)((longlong)param_1 + 0x851) == '\0') && (param_1[0x16c] != 0)) {
      FUN_142f9c640();
    }
  }
  if (((char)param_1[0x16d] == '\0') &&
     ((puVar12 = puVar20, param_1[0x11f] == 0 || (*(char *)(param_1[0x11f] + 0x512) == '\0')))) {
    do {
      if ((int)param_1[0xec] < 1) {
        if (puVar12 == (undefined8 *)0x0) goto LAB_142fb6f07;
        break;
      }
      iVar7 = (int)param_1[0xec];
      puVar16 = (undefined8 *)param_1[0xeb];
      puVar19 = (undefined8 *)*puVar16;
      if (iVar7 + -1 != 0) {
        _guard_xfg_dispatch_icall_nop(puVar16,puVar16 + 1,(longlong)(iVar7 + -1) << 3);
        iVar7 = (int)param_1[0xec];
      }
      *(int *)(param_1 + 0xec) = iVar7 + -1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0xeb);
      if (puVar19 != (undefined8 *)0x0) {
        uVar8 = *(uint *)((longlong)puVar19 + 0xc);
        puVar16 = puVar20;
        if ((int)uVar8 < (int)DAT_1469e91c4) {
          uVar13 = uVar8 & 0xffff;
          if ((int)uVar8 < 0) {
            uVar8 = uVar8 + 0xffff;
            uVar13 = uVar13 - 0x10000;
          }
          puVar16 = (undefined8 *)
                    (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                    (longlong)(int)uVar13 * 0x18);
        }
        if ((*(uint *)(puVar16 + 1) >> 0x1d & 1) == 0) {
          puVar12 = puVar19;
        }
      }
    } while (puVar12 == (undefined8 *)0x0);
    cVar4 = FUN_142fb50e0(puVar12 + 0x13d);
    if (cVar4 == '\0') {
      iVar7 = (int)param_1[0xec];
      *(int *)(param_1 + 0xec) = iVar7 + 1;
      if (*(int *)((longlong)param_1 + 0x764) < iVar7 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xeb,iVar7);
      }
      *(undefined8 **)(param_1[0xeb] + (longlong)iVar7 * 8) = puVar12;
    }
    else {
      param_1[0xea] = (longlong)puVar12;
    }
  }
LAB_142fb6f07:
  FUN_142fb6110(&DAT_146b44070);
  return;
}



// FUNCTION 142fb6f40 FUN_142fb6f40 body=672 status=ok
// SIG undefined FUN_142fb6f40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142fb6f40(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_168 [44];
  undefined1 local_13c [20];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [128];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  if ((*(longlong *)(param_1 + 0xd8) != 0) &&
     (lVar4 = FWeakObjectPtr::Get(param_1 + 0xe8), lVar4 != 0)) {
    lVar9 = *(longlong *)(param_1 + 0x100);
    lVar1 = lVar9 + (longlong)*(int *)(param_1 + 0x108) * 8;
    for (; lVar9 != lVar1; lVar9 = lVar9 + 8) {
      cVar3 = FWeakObjectPtr::IsValid(lVar9);
      if (((cVar3 != '\0') && (lVar5 = FWeakObjectPtr::Get(lVar9), *(longlong *)(lVar5 + 0x68) != 0)
          ) && (lVar6 = *(longlong *)(lVar5 + 0x58), lVar6 != 0)) {
        if (*(char *)(lVar5 + 0x60) != '\0') {
          FUN_142f8fba0(lVar5);
          lVar6 = *(longlong *)(lVar5 + 0x58);
        }
        local_128 = *(undefined8 *)(lVar6 + 0x210);
        uStack_120 = *(undefined8 *)(lVar6 + 0x218);
        fVar10 = *(float *)(lVar6 + 0x220) * 0.01;
        fVar11 = *(float *)(lVar6 + 0x224) * 0.01;
        fVar12 = *(float *)(lVar6 + 0x228) * 0.01;
        FUN_143716430(&local_118,&local_128);
        lVar6 = *(longlong *)(lVar5 + 0x68);
        *(undefined8 *)(lVar6 + 0x30) = local_118;
        *(undefined8 *)(lVar6 + 0x38) = uStack_110;
        *(undefined8 *)(lVar6 + 0x40) = local_108;
        *(undefined8 *)(lVar6 + 0x48) = uStack_100;
        *(undefined4 *)(lVar6 + 0x50) = local_f8;
        *(undefined4 *)(lVar6 + 0x54) = uStack_f4;
        *(undefined4 *)(lVar6 + 0x58) = uStack_f0;
        *(undefined4 *)(lVar6 + 0x5c) = uStack_ec;
        *(float *)(lVar6 + 0x60) = fVar10;
        *(float *)(lVar6 + 100) = fVar11;
        *(float *)(lVar6 + 0x68) = fVar12;
        *(undefined4 *)(lVar6 + 0x6c) = 0;
        lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x58) + 0x118);
        plVar8 = (longlong *)0x0;
        if (lVar6 != 0) {
          plVar8 = *(longlong **)(lVar6 + 0x168);
        }
        local_e8 = fVar10;
        fStack_e4 = fVar11;
        fStack_e0 = fVar12;
        uStack_dc = 0;
        if (plVar8 != (longlong *)0x0) {
          puVar7 = (undefined8 *)(**(code **)(*plVar8 + 0x458))(local_f8,local_13c);
          uVar2 = *puVar7;
          fVar10 = *(float *)(puVar7 + 1);
          lVar5 = *(longlong *)(lVar5 + 0x68);
          *(float *)(lVar5 + 0x70) = (float)uVar2 * 0.01;
          *(float *)(lVar5 + 0x74) = (float)((ulonglong)uVar2 >> 0x20) * 0.01;
          *(float *)(lVar5 + 0x78) = fVar10 * 0.01;
          *(undefined4 *)(lVar5 + 0x7c) = 0;
        }
      }
    }
    local_58 = 0;
    local_50 = 0;
    FUN_142f9ac40(lVar4,param_1 + 0xf0,*(longlong *)(param_1 + 0xd8) + 0x738,local_d8);
    FUN_142f9b040(lVar4,param_1 + 0x100,*(longlong *)(param_1 + 0xd8) + 0x28,local_d8);
    FUN_142fbbfc0(param_1 + 0xa0,*(longlong *)(param_1 + 0xd8) + 0x18,local_d8);
    if (local_58 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142fb71e0 FUN_142fb71e0 body=202 status=ok
// SIG undefined FUN_142fb71e0(void)

void FUN_142fb71e0(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if ((((param_1[3] == 0) || (param_1[2] == 0)) || (*param_1 == 0)) || (param_1[4] == 0)) {
    return;
  }
  FUN_142d7e5f0(param_1[4] + 0x2428,param_1[0x14]);
  plVar1 = (longlong *)param_1[4];
  param_1[0x14] = 0;
  if ((char)plVar1[0x49] == '\0') {
    if (((int)param_1[0x10] < 0) || (*(int *)((longlong)param_1 + 0x84) < 0)) {
      if (((int)param_1[0x11] < 0) || (*(int *)((longlong)param_1 + 0x8c) < 0)) goto LAB_142fb727d;
      uVar2 = 5;
    }
    else {
      uVar2 = 3;
    }
    (**(code **)(*plVar1 + 0x5a0))(plVar1,uVar2,0);
  }
LAB_142fb727d:
  FUN_142dbb5d0(param_1[4] + 0x8b0,&DAT_146b44028);
  FUN_142db61a0(param_1 + 0xb,1);
  return;
}



// FUNCTION 142fb72b0 FUN_142fb72b0 body=147 status=ok
// SIG undefined FUN_142fb72b0(void)

void FUN_142fb72b0(int *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 1);
  if (lVar1 != 0) {
    *param_1 = *param_1 + -1;
    if (*(longlong **)(param_2 + 0x108) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_2 + 0x108) + 0x88))();
      FUN_143848900(*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_2 + 0x108));
      FUN_14370c150(*(undefined8 *)(param_2 + 0x108));
      *(undefined8 *)(param_2 + 0x108) = 0;
    }
    if (*(longlong *)(param_2 + 0x100) != 0) {
      FUN_14384a650(*(undefined8 *)(param_1 + 4));
      FUN_14370c150(*(undefined8 *)(param_2 + 0x100));
      *(undefined8 *)(param_2 + 0x100) = 0;
    }
  }
  return;
}



// FUNCTION 142fb7360 FUN_142fb7360 body=642 status=ok
// SIG undefined FUN_142fb7360(void)

ulonglong FUN_142fb7360(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  uint7 uVar7;
  longlong *plVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  bool bVar8;
  undefined1 local_208 [4];
  undefined8 local_204;
  undefined4 local_1fc;
  undefined4 local_1e4;
  undefined1 local_1a8 [44];
  int local_17c;
  int iStack_178;
  int local_174;
  int iStack_170;
  undefined1 local_d8 [32];
  undefined1 local_b8 [176];
  
  lVar2 = FWeakObjectPtr::Get(param_2);
  uVar6 = 0;
  if (lVar2 != 0) {
    lVar3 = FUN_1428dfc70();
    uVar7 = (uint7)((ulonglong)(lVar3 + 0x88) >> 8);
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      uVar6 = (ulonglong)uVar7 << 8;
    }
    else {
      uVar6 = CONCAT71(uVar7,1);
    }
    if ((char)uVar6 != '\0') {
      plVar4 = (longlong *)FUN_14222e260(lVar2);
      uVar6 = 0;
      if (plVar4 != (longlong *)0x0) {
        uVar5 = AAICharacter::GetPrivateStaticClass();
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x628))(plVar4,uVar5);
        uVar6 = 0;
        if (((plVar4 != (longlong *)0x0) &&
            (uVar6 = (**(code **)(*plVar4 + 0x418))(plVar4), (char)uVar6 != '\0')) &&
           (lVar2 = plVar4[0xd7], lVar2 != 0)) {
          *(undefined1 *)((longlong)plVar4 + 0x9a9) = 1;
          FUN_142f89530(local_208);
          local_1fc = *(undefined4 *)(param_2 + 0x10);
          local_204 = *(undefined8 *)(param_2 + 8);
          local_208[0] = 0;
          if (*(longlong *)(lVar2 + 0xb50) == 0) {
            local_1e4 = 0x42c80000;
          }
          else {
            local_1e4 = *(undefined4 *)(*(longlong *)(lVar2 + 0xb50) + 0xf4);
          }
          FUN_142f89220(local_d8,local_208);
          FUN_142fb8fb0(local_d8,plVar4 + 0xdd);
          cVar1 = FUN_142fa8a90(local_b8);
          if ((cVar1 == '\0') || (cVar1 = FUN_142fae860(plVar4,local_d8), cVar1 == '\0')) {
            bVar8 = false;
          }
          else {
            FUN_142f89530(local_208);
            local_1fc = *(undefined4 *)(param_2 + 0x1c);
            local_204 = *(undefined8 *)(param_2 + 0x14);
            local_208[0] = 0;
            if (*(longlong *)(lVar2 + 0xb50) == 0) {
              local_1e4 = 0x42c80000;
            }
            else {
              local_1e4 = *(undefined4 *)(*(longlong *)(lVar2 + 0xb50) + 0xf4);
            }
            FUN_142f89220(local_1a8,local_208);
            FUN_142fb8fb0(local_1a8,plVar4 + 0xdd);
            cVar1 = FUN_142fae860(plVar4,local_1a8);
            if (cVar1 == '\0') {
              if ((local_17c < 0) || (iStack_178 < 0)) {
                bVar8 = false;
              }
              else {
                bVar8 = true;
              }
              if (bVar8) {
                cVar1 = FUN_142f95960();
                bVar8 = cVar1 == '\x01';
                FUN_142f8b770(local_1a8);
              }
              else {
                if ((local_174 < 0) || (iStack_170 < 0)) {
                  bVar8 = false;
                }
                else {
                  bVar8 = true;
                }
                if (bVar8) {
                  cVar1 = FUN_142f958b0(plVar4 + 0x13d);
                  bVar8 = cVar1 == '\x01';
                  FUN_142f8b770(local_1a8);
                }
                else {
                  bVar8 = false;
                  FUN_142f8b770(local_1a8);
                }
              }
            }
            else {
              bVar8 = true;
              FUN_142f8b770(local_1a8);
            }
          }
          FUN_142f8b770(local_d8);
          return (ulonglong)bVar8;
        }
      }
    }
  }
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 142fb75f0 FUN_142fb75f0 body=271 status=ok
// SIG undefined FUN_142fb75f0(void)

void FUN_142fb75f0(longlong *param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar4 = (**(code **)(*param_1 + 0x148))();
  if (param_1[0x86] != 0) goto LAB_142fb7672;
  lVar6 = param_1[5];
  if (lVar6 == 0) {
LAB_142fb765f:
    lVar6 = 0;
  }
  else {
    lVar5 = FUN_142fc43a0();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_142fb765f;
  }
  param_1[0x86] = lVar6;
  if (lVar6 == 0) {
    return;
  }
LAB_142fb7672:
  if ((DAT_1468c21ae != '\0') && (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
    FUN_1424c98a0();
  }
  FUN_142fb6900(param_1[0x86],param_2);
  if ((lVar4 != 0) && (cVar2 = UWorld::IsGameWorld(lVar4), cVar2 != '\0')) {
    *(byte *)((longlong)param_1 + 0x39a) = *(byte *)((longlong)param_1 + 0x39a) & 0xdf;
    *(undefined4 *)(param_1 + 0x6d) = 0;
    if (*(uint *)((longlong)param_1 + 0x36c) < 0x80000000) {
      return;
    }
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x6c,0);
    return;
  }
  FUN_142b989c0(param_1,param_2);
  return;
}



// FUNCTION 142fb7710 FUN_142fb7710 body=523 status=ok
// SIG undefined FUN_142fb7710(void)

void FUN_142fb7710(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  
  if ((((*(int *)(param_1 + 0x20) != 0) &&
       (plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x28), plVar2 != (longlong *)0x0)) &&
      (lVar3 = (**(code **)(*plVar2 + 0x148))(plVar2), lVar3 != 0)) &&
     (cVar1 = UWorld::IsGameWorld(lVar3), cVar1 == '\0')) {
    FUN_142fb1b80(param_1);
    FUN_142faf550(plVar2);
    FUN_142fa5d50(plVar2 + 0xd8);
    FUN_142fa5ee0(plVar2 + 0xcc,plVar2);
    uVar4 = (**(code **)(*plVar2 + 0x148))(plVar2);
    FUN_142fbbca0(uVar4);
    uVar4 = (**(code **)(*plVar2 + 0x148))(plVar2);
    FUN_142fb9de0(uVar4);
    uVar4 = (**(code **)(*plVar2 + 0x148))(plVar2);
    FUN_142fbadb0(uVar4);
    lVar8 = *(longlong *)(param_1 + 0x30);
    lVar3 = lVar8 + (longlong)*(int *)(param_1 + 0x38) * 0x18;
    for (; lVar8 != lVar3; lVar8 = lVar8 + 0x18) {
      lVar5 = FWeakObjectPtr::Get(lVar8 + 0x10);
      if (lVar5 != 0) {
        pfVar6 = *(float **)(param_1 + 0x18);
        pfVar7 = pfVar6 + (longlong)*(int *)(param_1 + 0x20) * 7;
        for (; pfVar6 != pfVar7; pfVar6 = pfVar6 + 7) {
          if ((((DAT_1468b5d90 < pfVar6[3] || DAT_1468b5d90 == pfVar6[3]) &&
               (*pfVar6 <= DAT_1468b5d90)) &&
              ((DAT_1468b5d94 < pfVar6[4] || DAT_1468b5d94 == pfVar6[4] &&
               ((pfVar6[1] <= DAT_1468b5d94 &&
                (DAT_1468b5d98 < pfVar6[5] || DAT_1468b5d98 == pfVar6[5])))))) &&
             (pfVar6[2] <= DAT_1468b5d98)) {
            FUN_142f8f970(param_1,lVar8);
            break;
          }
        }
      }
    }
    lVar8 = *(longlong *)(param_1 + 0x50);
    lVar3 = lVar8 + (longlong)*(int *)(param_1 + 0x58) * 0x18;
    for (; lVar8 != lVar3; lVar8 = lVar8 + 0x18) {
      lVar5 = FWeakObjectPtr::Get(lVar8 + 0x10);
      if (lVar5 != 0) {
        pfVar6 = *(float **)(param_1 + 0x18);
        pfVar7 = pfVar6 + (longlong)*(int *)(param_1 + 0x20) * 7;
        for (; pfVar6 != pfVar7; pfVar6 = pfVar6 + 7) {
          if (((((DAT_1468b5d90 < pfVar6[3] || DAT_1468b5d90 == pfVar6[3]) &&
                (*pfVar6 <= DAT_1468b5d90)) &&
               (DAT_1468b5d94 < pfVar6[4] || DAT_1468b5d94 == pfVar6[4])) &&
              ((pfVar6[1] <= DAT_1468b5d94 &&
               (DAT_1468b5d98 < pfVar6[5] || DAT_1468b5d98 == pfVar6[5])))) &&
             (pfVar6[2] <= DAT_1468b5d98)) {
            FUN_142f8f7b0(param_1,lVar8);
            break;
          }
        }
      }
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (*(int *)(param_1 + 0x24) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeTo
                (param_1 + 0x18,0);
    }
  }
  return;
}



// FUNCTION 142fb7920 FUN_142fb7920 body=602 status=ok
// SIG undefined FUN_142fb7920(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fb7920(longlong param_1,float param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  char cVar6;
  float fVar7;
  float fVar8;
  undefined8 local_58;
  float local_50;
  float local_40;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0x128) != '\x01')) {
    cVar6 = '\0';
    local_58 = _DAT_1468b5d90;
    local_50 = DAT_1468b5d98;
    if ((lVar1 != 0) && (lVar2 = *(longlong *)(lVar1 + 0x168), lVar2 != 0)) {
      local_58 = *(undefined8 *)(lVar2 + 0x220);
      local_50 = *(float *)(lVar2 + 0x228);
    }
    *(undefined8 *)(param_1 + 0x2b4) = local_58;
    *(float *)(param_1 + 700) = local_50;
    FUN_142fade00(local_58,lVar1,param_2);
  }
  else {
    cVar6 = '\x01';
  }
  FUN_142463fa0(param_1,param_2,param_3,param_4);
  if (*(longlong *)(param_1 + 0x250) == 0) {
    plVar5 = (longlong *)0x0;
    plVar3 = plVar5;
    if (*(longlong *)(param_1 + 0x178) != 0) {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x178) + 0x118);
    }
    if ((plVar3 != (longlong *)0x0) &&
       (plVar3 = (longlong *)(**(code **)(*plVar3 + 0x668))(), plVar3 != (longlong *)0x0)) {
      uVar4 = AAICharacter::GetPrivateStaticClass();
      plVar5 = (longlong *)(**(code **)(*plVar3 + 0x628))(plVar3,uVar4);
    }
    *(longlong **)(param_1 + 0x250) = plVar5;
  }
  if ((cVar6 != '\0') && (*(longlong *)(param_1 + 0x178) != 0)) {
    local_50 = param_2 * *(float *)(param_1 + 0x194) + *(float *)(param_1 + 700);
    fVar8 = param_2 * *(float *)(param_1 + 0x18c) + *(float *)(param_1 + 0x2b4);
    fVar7 = param_2 * *(float *)(param_1 + 400) + *(float *)(param_1 + 0x2b8);
    local_58 = CONCAT44(fVar7,fVar8);
    local_40 = local_50;
    FUN_1423990b0(*(longlong *)(param_1 + 0x178),&local_58,0,0,0);
    *(ulonglong *)(param_1 + 0x2b4) = CONCAT44(fVar7,fVar8);
    *(float *)(param_1 + 700) = local_40;
  }
  FUN_142fb7e80(param_1,param_2,cVar6);
  return;
}



// FUNCTION 142fb7b80 FUN_142fb7b80 body=491 status=ok
// SIG undefined FUN_142fb7b80(void)

void FUN_142fb7b80(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  float local_res8 [2];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  float local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a0 [2];
  undefined8 local_98;
  float local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  FUN_142357eb0();
  plVar1 = *(longlong **)(param_1 + 0x118);
  local_c8 = 0xffffffffffffffff;
  if ((plVar1 != (longlong *)0x0) && (local_28 = *(longlong *)(param_1 + 0x1a0), local_28 != 0)) {
    uStack_80 = *(undefined8 *)(param_1 + 0x1b0);
    uStack_78 = *(undefined8 *)(param_1 + 0x1b8);
    uStack_70 = *(undefined8 *)(param_1 + 0x1c0);
    uStack_88 = (undefined4)*(undefined8 *)(param_1 + 0x1a8);
    uStack_84 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x1a8) >> 0x20);
    local_68 = *(undefined8 *)(param_1 + 0x1c8);
    uStack_60 = *(undefined8 *)(param_1 + 0x1d0);
    local_a0[0] = 0;
    local_58 = *(undefined8 *)(param_1 + 0x1d8);
    uStack_50 = *(undefined8 *)(param_1 + 0x1e0);
    local_res8[0] = 0.0;
    local_48 = *(undefined8 *)(param_1 + 0x1e8);
    uStack_40 = *(undefined8 *)(param_1 + 0x1f0);
    local_38 = *(undefined8 *)(param_1 + 0x1f8);
    uStack_30 = *(undefined8 *)(param_1 + 0x200);
    local_8c = *(undefined4 *)(param_1 + 0x18c);
    local_c0 = (undefined4)DAT_14676e1b0;
    uStack_bc = DAT_14676e1b0._4_4_;
    local_b8 = DAT_14676e1b8;
    (**(code **)(*plVar1 + 0x6c0))(plVar1,&local_c0,local_a0,local_res8);
    local_b8 = local_b8 - local_res8[0];
    local_98 = CONCAT44(uStack_bc,local_c0);
    local_90 = local_b8;
    cVar2 = FUN_142fae610(&local_98,&local_b0,0);
    if (cVar2 != '\0') {
      uStack_80 = *(undefined8 *)(param_1 + 0x1a8);
      uStack_78 = *(undefined8 *)(param_1 + 0x1b0);
      uStack_70 = *(undefined8 *)(param_1 + 0x1b8);
      local_68 = *(undefined8 *)(param_1 + 0x1c0);
      local_8c = 0;
      uStack_88 = 0;
      uStack_84 = 0;
      uStack_60 = *(undefined8 *)(param_1 + 0x1c8);
      local_58 = *(undefined8 *)(param_1 + 0x1d0);
      local_18 = 0;
      local_20 = *(undefined8 *)(param_1 + 0x1a0);
      uStack_50 = *(undefined8 *)(param_1 + 0x1d8);
      local_48 = *(undefined8 *)(param_1 + 0x1e0);
      local_90 = (float)local_a8;
      uStack_40 = *(undefined8 *)(param_1 + 0x1e8);
      local_38 = *(undefined8 *)(param_1 + 0x1f0);
      uStack_30 = *(undefined8 *)(param_1 + 0x1f8);
      local_28 = *(undefined8 *)(param_1 + 0x200);
      local_98 = local_b0;
      cVar2 = FUN_142f9b3a0(&local_98,&local_b0,&local_c8);
      if (cVar2 != '\0') {
        cVar2 = FUN_142f94610(param_1,&local_b0,&local_c8);
        if (cVar2 != '\0') {
          FUN_142f98940(param_1,&local_b0,&local_c8);
        }
        *(undefined8 *)(param_1 + 0x210) = local_b0;
        *(undefined4 *)(param_1 + 0x218) = local_a8;
        *(undefined8 *)(param_1 + 0x208) = local_c8;
      }
    }
  }
  return;
}



// FUNCTION 142fb7d70 FUN_142fb7d70 body=160 status=ok
// SIG undefined FUN_142fb7d70(void)

void FUN_142fb7d70(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_b8 [176];
  
  FUN_142d01d90();
  if (*(longlong *)(param_1 + 0x27a8) != 0) {
    puVar2 = (undefined8 *)FUN_142f9f070(param_1,local_b8);
    uVar1 = puVar2[1];
    *(undefined8 *)(param_1 + 0x27b8) = *puVar2;
    *(undefined8 *)(param_1 + 0x27c0) = uVar1;
    uVar1 = puVar2[3];
    *(undefined8 *)(param_1 + 0x27c8) = puVar2[2];
    *(undefined8 *)(param_1 + 0x27d0) = uVar1;
    uVar1 = puVar2[5];
    *(undefined8 *)(param_1 + 0x27d8) = puVar2[4];
    *(undefined8 *)(param_1 + 0x27e0) = uVar1;
    uVar1 = puVar2[7];
    *(undefined8 *)(param_1 + 0x27e8) = puVar2[6];
    *(undefined8 *)(param_1 + 0x27f0) = uVar1;
    uVar1 = puVar2[9];
    *(undefined8 *)(param_1 + 0x27f8) = puVar2[8];
    *(undefined8 *)(param_1 + 0x2800) = uVar1;
    uVar1 = puVar2[0xb];
    *(undefined8 *)(param_1 + 0x2808) = puVar2[10];
    *(undefined8 *)(param_1 + 0x2810) = uVar1;
    uVar1 = puVar2[0xd];
    *(undefined8 *)(param_1 + 0x2818) = puVar2[0xc];
    *(undefined8 *)(param_1 + 0x2820) = uVar1;
    uVar1 = puVar2[0xf];
    *(undefined8 *)(param_1 + 0x2828) = puVar2[0xe];
    *(undefined8 *)(param_1 + 0x2830) = uVar1;
    uVar1 = puVar2[0x11];
    *(undefined8 *)(param_1 + 0x2838) = puVar2[0x10];
    *(undefined8 *)(param_1 + 0x2840) = uVar1;
    uVar1 = puVar2[0x13];
    *(undefined8 *)(param_1 + 0x2848) = puVar2[0x12];
    *(undefined8 *)(param_1 + 0x2850) = uVar1;
    *(undefined8 *)(param_1 + 0x2858) = puVar2[0x14];
  }
  return;
}



// FUNCTION 142fb7e10 FUN_142fb7e10 body=99 status=ok
// SIG undefined FUN_142fb7e10(void)

void FUN_142fb7e10(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_142fbac60();
  if ((*(longlong *)(param_1 + 0x27a8) == 0) ||
     ((*(char *)(param_1 + 0x248) != '\x02' && (*(char *)(param_1 + 0x248) != '\x05')))) {
    *(uint *)(param_1 + 0x188) = *(uint *)(param_1 + 0x188) & 0xfffffffe;
  }
  else {
    *(uint *)(param_1 + 0x188) = *(uint *)(param_1 + 0x188) | 1;
  }
  FUN_142d021f0(param_1,param_2,param_3);
  return;
}



// FUNCTION 142fb7e80 FUN_142fb7e80 body=1463 status=ok
// SIG undefined FUN_142fb7e80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fb7e80(longlong *param_1,undefined4 param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 in_EAX;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  char cVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 local_d8;
  float fStack_d0;
  float fStack_cc;
  undefined8 local_c8;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined8 local_a8;
  float local_a0;
  
  if ((param_3 != '\0') || (param_1[0x4a] != 0)) {
    cVar10 = (char)param_1[0x50];
    lVar1 = param_1[0x2f];
    fVar11 = *(float *)(lVar1 + 0x210);
    local_c8 = *(undefined8 *)(lVar1 + 0x210);
    fStack_c0 = *(float *)(lVar1 + 0x218);
    fStack_bc = *(float *)(lVar1 + 0x21c);
    auVar16._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != *(float *)(lVar1 + 0x214));
    auVar16._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != fVar11);
    auVar16._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_c0);
    auVar16._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_bc);
    iVar6 = movmskps(in_EAX,auVar16);
    if (iVar6 != 0) {
      *(float *)(lVar1 + 0x250) = fVar11;
      *(float *)(lVar1 + 0x254) = *(float *)(lVar1 + 0x214);
      *(float *)(lVar1 + 600) = fStack_c0;
      *(float *)(lVar1 + 0x25c) = fStack_bc;
      puVar8 = (undefined8 *)FQuat::Rotator(&local_c8,&local_a8);
      *(undefined8 *)(lVar1 + 0x260) = *puVar8;
      *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar8 + 1);
      cVar10 = (char)param_1[0x50];
    }
    uVar9 = *(undefined8 *)(lVar1 + 0x260);
    fVar12 = (float)((ulonglong)uVar9 >> 0x20);
    fVar11 = *(float *)(lVar1 + 0x268);
    fStack_c0 = fVar11;
    local_c8 = uVar9;
    if (cVar10 == '\x02') {
      local_d8 = *(undefined8 *)((longlong)param_1 + 0x29c);
      fStack_d0 = *(float *)((longlong)param_1 + 0x2a4);
      fVar24 = (float)((ulonglong)local_d8 >> 0x20);
      fVar25 = fStack_d0;
    }
    else if (param_1[0x51] == 0) {
      fVar24 = fVar12;
      fVar25 = fVar11;
      if (cVar10 == '\x01') {
        lVar1 = param_1[0x52];
        if (lVar1 == 0) {
          local_a8 = uVar9;
          puVar8 = &local_a8;
          local_a0 = fVar11;
        }
        else {
          lVar2 = *(longlong *)(lVar1 + 0x168);
          local_a0 = (float)DAT_1468b5da8;
          local_a8 = DAT_1468b5da0;
          if (lVar2 != 0) {
            fVar24 = *(float *)(lVar2 + 0x210);
            local_d8 = *(undefined8 *)(lVar2 + 0x210);
            fStack_d0 = *(float *)(lVar2 + 0x218);
            fStack_cc = *(float *)(lVar2 + 0x21c);
            auVar14._4_4_ = -(uint)(*(float *)(lVar2 + 0x254) != *(float *)(lVar2 + 0x214));
            auVar14._0_4_ = -(uint)(*(float *)(lVar2 + 0x250) != fVar24);
            auVar14._8_4_ = -(uint)(*(float *)(lVar2 + 600) != fStack_d0);
            auVar14._12_4_ = -(uint)(*(float *)(lVar2 + 0x25c) != fStack_cc);
            iVar6 = movmskps((int)lVar1,auVar14);
            if (iVar6 != 0) {
              *(float *)(lVar2 + 0x250) = fVar24;
              *(float *)(lVar2 + 0x254) = *(float *)(lVar2 + 0x214);
              *(float *)(lVar2 + 600) = fStack_d0;
              *(float *)(lVar2 + 0x25c) = fStack_cc;
              puVar8 = (undefined8 *)FQuat::Rotator(&local_d8,&local_a8);
              *(undefined8 *)(lVar2 + 0x260) = *puVar8;
              *(undefined4 *)(lVar2 + 0x268) = *(undefined4 *)(puVar8 + 1);
            }
            local_a0 = (float)*(undefined4 *)(lVar2 + 0x268);
            local_a8 = *(undefined8 *)(lVar2 + 0x260);
          }
          fStack_d0 = local_a0;
          puVar8 = &local_d8;
          local_d8 = local_a8;
        }
        local_d8 = *puVar8;
        fStack_d0 = *(float *)(puVar8 + 1);
        fVar24 = (float)((ulonglong)local_d8 >> 0x20);
        fVar25 = fStack_d0;
      }
    }
    else {
      local_a8 = uVar9;
      local_a0 = fVar11;
      FUN_142fa06a0(param_1,param_1[0x51],&local_a8,&local_d8,param_2);
      fVar24 = local_d8._4_4_;
      fVar25 = fStack_d0;
    }
    local_a8 = uVar9;
    local_a0 = fVar11;
    uVar7 = FRotator::Vector(&local_a8,&local_d8);
    fVar19 = local_d8._4_4_ * *(float *)(param_1 + 0x32) +
             (float)local_d8 * *(float *)((longlong)param_1 + 0x18c) +
             fStack_d0 * *(float *)((longlong)param_1 + 0x194);
    fVar19 = SQRT(local_d8._4_4_ * fVar19 * local_d8._4_4_ * fVar19 +
                  (float)local_d8 * fVar19 * (float)local_d8 * fVar19 +
                  fStack_d0 * fVar19 * fStack_d0 * fVar19) *
             (1.0 / *(float *)((longlong)param_1 + 0x214));
    if (0.0 <= fVar19) {
      if (1.0 <= fVar19) {
        fVar19 = 1.0;
      }
    }
    else {
      fVar19 = 0.0;
    }
    if ((char)param_1[0x50] == '\x01') {
      fVar19 = *(float *)(param_1 + 0x57) - *(float *)((longlong)param_1 + 0x2ac);
      fVar18 = *(float *)((longlong)param_1 + 0x2b4) - *(float *)(param_1 + 0x55);
      fVar19 = SQRT(fVar19 * fVar19 + fVar18 * fVar18) *
               (1.0 / *(float *)((longlong)param_1 + 0x26c));
      if (0.0 <= fVar19) {
        if (1.0 <= fVar19) {
          fVar19 = 1.0;
        }
        fVar19 = fVar19 * *(float *)(param_1 + 0x4f);
      }
      else {
        fVar19 = *(float *)(param_1 + 0x4f) * 0.0;
      }
    }
    else {
      fVar19 = -(fVar19 * *(float *)(param_1 + 0x4f));
    }
    fVar13 = (float)local_c8;
    fVar18 = (float)DAT_146b43f60;
    fVar3 = DAT_146b43f60._4_4_;
    fVar4 = DAT_146b43f60._8_4_;
    fVar5 = DAT_146b43f60._12_4_;
    auVar15._4_4_ = fVar12 - fVar24;
    auVar15._0_4_ = (float)local_c8 - fVar19;
    auVar15._8_4_ = fVar11 - fVar25;
    auVar15._12_4_ = 0;
    auVar16 = divps(auVar15,_DAT_146b43f60);
    fVar20 = ((float)local_c8 - fVar19) - (float)(int)auVar16._0_4_ * fVar18;
    fVar21 = (fVar12 - fVar24) - (float)(int)auVar16._4_4_ * fVar3;
    fVar22 = (fVar11 - fVar25) - (float)(int)auVar16._8_4_ * fVar4;
    fVar23 = 0.0 - (float)(int)auVar16._12_4_ * fVar5;
    fVar20 = (float)(((uint)(fVar20 + fVar18) ^ (uint)fVar20) & -(uint)(0.0 <= fVar20) ^
                    (uint)(fVar20 + fVar18));
    fVar21 = (float)(((uint)(fVar21 + fVar3) ^ (uint)fVar21) & -(uint)(0.0 <= fVar21) ^
                    (uint)(fVar21 + fVar3));
    fVar22 = (float)(((uint)(fVar22 + fVar4) ^ (uint)fVar22) & -(uint)(0.0 <= fVar22) ^
                    (uint)(fVar22 + fVar4));
    fVar23 = (float)(((uint)(fVar23 + fVar5) ^ (uint)fVar23) & -(uint)(0.0 <= fVar23) ^
                    (uint)(fVar23 + fVar5));
    auVar17._4_4_ =
         -(uint)(0.001 < (float)((((uint)(fVar21 - fVar3) ^ (uint)fVar21) &
                                  -(uint)(fRam0000000146b43f54 < fVar21) ^ (uint)fVar21) &
                                uRam0000000146b43f44));
    auVar17._0_4_ =
         -(uint)(0.001 < (float)((((uint)(fVar20 - fVar18) ^ (uint)fVar20) &
                                  -(uint)(_DAT_146b43f50 < fVar20) ^ (uint)fVar20) & _DAT_146b43f40)
                );
    auVar17._8_4_ =
         -(uint)(0.001 < (float)((((uint)(fVar22 - fVar4) ^ (uint)fVar22) &
                                  -(uint)(fRam0000000146b43f58 < fVar22) ^ (uint)fVar22) &
                                uRam0000000146b43f48));
    auVar17._12_4_ =
         -(uint)(0.001 < (float)((((uint)(fVar23 - fVar5) ^ (uint)fVar23) &
                                  -(uint)(fRam0000000146b43f5c < fVar23) ^ (uint)fVar23) &
                                uRam0000000146b43f4c));
    iVar6 = movmskps(uVar7,auVar17);
    if (iVar6 != 0) {
      if (0.001 < ABS(fVar11 - fVar25)) {
        fVar11 = (float)FMath::FixedTurn();
      }
      if (0.001 < ABS(fVar12 - fVar24)) {
        fVar12 = (float)FMath::FixedTurn();
      }
      if (0.001 < ABS(fVar13 - fVar19)) {
        fVar13 = (float)FMath::FixedTurn();
      }
      local_b8 = fVar13;
      local_b4 = fVar12;
      local_b0 = fVar11;
      uVar9 = FUN_14247f500();
      FUN_14247ea90(uVar9);
      lVar1 = *param_1;
      uVar9 = FRotator::Quaternion(&local_b8,&local_a8);
      (**(code **)(lVar1 + 0x488))(param_1,&DAT_1468b5d90,uVar9,1,0,0);
    }
  }
  return;
}



// FUNCTION 142fb8440 FUN_142fb8440 body=146 status=ok
// SIG undefined FUN_142fb8440(void)

void FUN_142fb8440(longlong *param_1)

{
  char cVar1;
  
  if (param_1[0xe1] != 0) {
    cVar1 = (**(code **)(*param_1 + 0x8f8))();
    if (cVar1 != '\0') {
      TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
      Remove(param_1[0xe1] + 0x7f8,*(undefined4 *)(*(longlong *)(param_1[0xf3] + 0x18) + 0x94));
      if ((*(longlong *)(param_1[0xe1] + 0x8f8) != 0) &&
         (-1 < *(int *)(*(longlong *)(param_1[0xf3] + 0x18) + 0x94))) {
        FUN_143847ce0();
      }
    }
  }
  if (param_1[0xf3] != 0) {
    FUN_14370c150();
    param_1[0xf3] = 0;
  }
  return;
}



// FUNCTION 142fb84e0 FUN_142fb84e0 body=145 status=ok
// SIG undefined FUN_142fb84e0(void)

void FUN_142fb84e0(longlong *param_1)

{
  char cVar1;
  
  if (param_1[0xe1] != 0) {
    cVar1 = (**(code **)(*param_1 + 0x8f8))();
    if (((cVar1 != '\0') && (*(longlong *)(param_1[0xe1] + 0x8f8) != 0)) &&
       (-1 < *(int *)(*(longlong *)(param_1[0xf2] + 0x18) + 0x17c))) {
      FUN_1438479c0(*(longlong *)(param_1[0xe1] + 0x8f8),param_1[0xf2],param_1[0xf3]);
    }
  }
  if (param_1[0xf2] != 0) {
    FUN_14370c150();
    param_1[0xf2] = 0;
  }
  if (param_1[0xf3] != 0) {
    FUN_14370c150();
    param_1[0xf3] = 0;
  }
  return;
}



// FUNCTION 142fb8580 FUN_142fb8580 body=159 status=ok
// SIG undefined FUN_142fb8580(void)

void FUN_142fb8580(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 local_res10;
  
  local_res10 = param_2;
  cVar2 = FUN_1407c3030(param_1 + 0x6f0);
  FUN_142dbb5d0(param_1 + 0x6f0,&local_res10);
  if (cVar2 != '\0') {
    cVar2 = FUN_1407c3030(param_1 + 0x6f0);
    if (((cVar2 == '\0') && (lVar1 = *(longlong *)(param_1 + 0x788), lVar1 != 0)) &&
       (*(longlong *)(lVar1 + 0x58) != 0)) {
      lVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x58) + 0x120);
      if (lVar3 == 0) {
        lVar3 = FUN_1423407b0();
      }
      lVar3 = FUN_142f9cfb0(lVar3,0);
      if (lVar3 != 0) {
        FUN_142f8e420(lVar3 + 0x918,lVar1);
      }
    }
  }
  return;
}



// FUNCTION 142fb8620 FUN_142fb8620 body=2444 status=ok
// SIG undefined FUN_142fb8620(void)

void FUN_142fb8620(float *param_1)

{
  undefined8 uVar1;
  char cVar2;
  char cVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  uint uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_res8 [2];
  undefined8 local_98;
  float local_90;
  undefined4 local_88;
  undefined8 uStack_84;
  float fStack_7c;
  uint local_78;
  undefined4 uStack_74;
  float local_70;
  
  if (*(longlong *)(param_1 + 10) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0xc) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0xe) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_142f96e50();
  fVar19 = 1.0;
  fVar22 = 3.4028235e+38;
  if ((((((*(longlong *)(param_1 + 10) != 0) && (*(longlong *)(param_1 + 0xc) != 0)) &&
        (lVar9 = *(longlong *)(param_1 + 0xe), lVar9 != 0)) &&
       ((*(longlong *)(param_1 + 0x10) != 0 && (cVar2 = FUN_142fa8b90(lVar9), cVar2 != '\0')))) &&
      (*(char *)(lVar9 + 0x780) == '\0')) &&
     ((cVar2 = FUN_142fbc510(lVar9), cVar2 != '\0' &&
      (cVar2 = FUN_142fa8000(*(longlong *)(param_1 + 0xe) + 0x930), cVar2 == '\0')))) {
    pfVar4 = (float *)(**(code **)(**(longlong **)(param_1 + 0xe) + 0x400))
                                (*(longlong **)(param_1 + 0xe),&local_88);
    fVar21 = pfVar4[1];
    fVar20 = *pfVar4;
    fVar13 = fVar20 * fVar20 + fVar21 * fVar21;
    if (fVar13 == 1.0) {
      if (pfVar4[2] == 0.0) {
        local_98 = *(undefined8 *)pfVar4;
        local_90 = pfVar4[2];
      }
      else {
LAB_142fb8806:
        local_98 = CONCAT44(fVar21,fVar20);
        local_90 = 0.0;
      }
    }
    else {
      if (1e-08 <= fVar13) {
        auVar18 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
        local_res8[0] = auVar18._0_4_;
        local_res8[0] =
             local_res8[0] + local_res8[0] * (0.5 - fVar13 * 0.5 * local_res8[0] * local_res8[0]);
        local_res8[0] =
             local_res8[0] + local_res8[0] * (0.5 - fVar13 * 0.5 * local_res8[0] * local_res8[0]);
        fVar20 = fVar20 * local_res8[0];
        fVar21 = fVar21 * local_res8[0];
        goto LAB_142fb8806;
      }
      local_90 = DAT_1468b5d98;
      local_98 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    }
    *(undefined8 *)(param_1 + 0x41) = local_98;
    param_1[0x43] = local_90;
    lVar9 = *(longlong *)(param_1 + 0xe);
    fVar21 = *(float *)(lVar9 + 0x778);
    fVar20 = *(float *)(lVar9 + 0x774);
    fVar13 = fVar20 * fVar20 + fVar21 * fVar21;
    if (fVar13 == 1.0) {
      if (*(float *)(lVar9 + 0x77c) == 0.0) {
        local_98 = *(undefined8 *)(lVar9 + 0x774);
        local_90 = *(float *)(lVar9 + 0x77c);
      }
      else {
LAB_142fb891f:
        local_98 = CONCAT44(fVar21,fVar20);
        local_90 = 0.0;
      }
    }
    else {
      if (1e-08 <= fVar13) {
        auVar18 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
        local_res8[0] = auVar18._0_4_;
        local_res8[0] =
             local_res8[0] + local_res8[0] * (0.5 - fVar13 * 0.5 * local_res8[0] * local_res8[0]);
        local_res8[0] =
             local_res8[0] + local_res8[0] * (0.5 - fVar13 * 0.5 * local_res8[0] * local_res8[0]);
        fVar20 = fVar20 * local_res8[0];
        fVar21 = fVar21 * local_res8[0];
        goto LAB_142fb891f;
      }
      local_90 = DAT_1468b5d98;
      local_98 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    }
    *(undefined8 *)(param_1 + 0x44) = local_98;
    param_1[0x46] = local_90;
    pfVar5 = (float *)FUN_142f91840(param_1,&local_88);
    pfVar4 = param_1 + 0x2c;
    fVar21 = pfVar5[1];
    fVar20 = pfVar5[2];
    fVar13 = pfVar5[3];
    *pfVar4 = *pfVar5;
    param_1[0x2d] = fVar21;
    param_1[0x2e] = fVar20;
    param_1[0x2f] = fVar13;
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(pfVar5 + 4);
    param_1[0x32] = pfVar5[6];
    pfVar6 = (float *)FUN_142f93270(param_1,&local_88,0);
    pfVar5 = param_1 + 0x33;
    fVar21 = pfVar6[1];
    fVar20 = pfVar6[2];
    fVar13 = pfVar6[3];
    *pfVar5 = *pfVar6;
    param_1[0x34] = fVar21;
    param_1[0x35] = fVar20;
    param_1[0x36] = fVar13;
    *(undefined8 *)(param_1 + 0x37) = *(undefined8 *)(pfVar6 + 4);
    param_1[0x39] = pfVar6[6];
    cVar2 = FUN_142fa89b0(pfVar5);
    if (cVar2 == '\0') {
      uStack_84 = DAT_14676e1b0;
      uVar1 = uStack_84;
      fStack_7c = DAT_14676e1b8;
      local_88 = 0x7f7fffff;
      fVar11 = 3.4028235e+38;
      uStack_84._0_4_ = (float)DAT_14676e1b0;
      uStack_84._4_4_ = (float)((ulonglong)DAT_14676e1b0 >> 0x20);
      local_78 = local_78 & 0xffffff00;
      uStack_74 = 0x7f7fffff;
      uVar12 = 0x7f7fffff;
      local_70 = 3.4028235e+38;
      uVar10 = local_78;
      fVar14 = (float)uStack_84;
      fVar15 = uStack_84._4_4_;
      fVar16 = DAT_14676e1b8;
      fVar17 = 3.4028235e+38;
      uStack_84 = uVar1;
    }
    else {
      cVar2 = FUN_142fa89b0(pfVar4);
      if (cVar2 == '\0') {
        fVar11 = *pfVar6;
        fVar14 = pfVar6[1];
        fVar15 = pfVar6[2];
        fVar16 = pfVar6[3];
        uVar10 = (uint)*(undefined8 *)(pfVar6 + 4);
        uVar12 = (undefined4)((ulonglong)*(undefined8 *)(pfVar6 + 4) >> 0x20);
        fVar17 = pfVar6[6];
      }
      else if (*pfVar5 < *pfVar4 || *pfVar5 == *pfVar4) {
        fVar21 = param_1[0x39];
        fVar20 = -1.0;
        if (fVar21 <= 0.0) {
          if (0.0 <= fVar21) {
            fVar13 = 0.0;
          }
          else {
            fVar13 = -1.0;
          }
        }
        else {
          fVar13 = 1.0;
        }
        fVar17 = param_1[0x32];
        if (fVar17 <= 0.0) {
          if (0.0 <= fVar17) {
            fVar20 = 0.0;
          }
        }
        else {
          fVar20 = 1.0;
        }
        fVar11 = *pfVar6;
        fVar14 = pfVar6[1];
        fVar15 = pfVar6[2];
        fVar16 = pfVar6[3];
        if (fVar13 == fVar20) {
          uVar10 = (uint)*(undefined8 *)(pfVar6 + 4);
          uVar12 = (undefined4)((ulonglong)*(undefined8 *)(pfVar6 + 4) >> 0x20);
          local_70 = fVar17;
          if (fVar21 < 0.0) {
            if (fVar17 <= fVar21) {
              fVar17 = fVar21;
              local_70 = fVar21;
            }
          }
          else if (fVar21 <= fVar17) {
            fVar17 = fVar21;
            local_70 = fVar21;
          }
        }
        else {
          uVar10 = (uint)*(undefined8 *)(pfVar6 + 4);
          uVar12 = (undefined4)((ulonglong)*(undefined8 *)(pfVar6 + 4) >> 0x20);
          fVar17 = pfVar6[6];
        }
      }
      else {
        fVar11 = *pfVar4;
        fVar14 = param_1[0x2d];
        fVar15 = param_1[0x2e];
        fVar16 = param_1[0x2f];
        uVar10 = (uint)*(undefined8 *)(param_1 + 0x30);
        uVar12 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
        fVar17 = param_1[0x32];
      }
    }
    lVar9 = *(longlong *)(param_1 + 0xe);
    param_1[0x3a] = fVar11;
    param_1[0x3b] = fVar14;
    param_1[0x3c] = fVar15;
    param_1[0x3d] = fVar16;
    *(ulonglong *)(param_1 + 0x3e) = CONCAT44(uVar12,uVar10);
    param_1[0x40] = fVar17;
    if (((((lVar9 == 0) || (cVar2 = FUN_142fa89b0(pfVar5), cVar2 == '\0')) ||
         (cVar2 = FUN_142fa89b0(pfVar4), cVar2 == '\0')) ||
        ((fVar21 = *pfVar4, *pfVar5 <= fVar21 ||
         ((cVar2 = *(char *)(param_1 + 1), cVar2 == '\0' && (*(char *)(param_1 + 3) == '\0')))))) ||
       (cVar3 = FUN_142fa89b0(pfVar4), cVar3 == '\0')) {
LAB_142fb8bb4:
      fVar21 = 1.0;
    }
    else {
      if (((*(longlong *)(param_1 + 10) == 0) || (*(longlong *)(param_1 + 0xc) == 0)) ||
         (*(longlong *)(param_1 + 0x10) == 0)) {
        fVar20 = 0.0;
      }
      else {
        fVar20 = *(float *)(lVar9 + 0x6f0);
        if (0.0 < param_1[0x15]) {
          fVar20 = fVar20 / param_1[0x15];
        }
      }
      fVar13 = (float)FUN_142fa4e50(param_1,0);
      if ((fVar20 <= 0.0) || (fVar13 <= 0.0)) goto LAB_142fb8bb4;
      fVar17 = fVar20;
      if (cVar2 != '\0') {
        fVar17 = fVar20 * *param_1;
      }
      fVar11 = fVar13;
      if (*(char *)(param_1 + 3) != '\0') {
        fVar11 = fVar13 * param_1[2];
      }
      if ((fVar20 - fVar17 <= 0.0) && (fVar11 - fVar13 <= 0.0)) goto LAB_142fb8bb4;
      fVar21 = fVar21 * 6.2831855;
      fVar21 = (fVar21 * fVar11 - fVar17 * 360.0) /
               (fVar21 * (fVar11 - fVar13) + (fVar20 - fVar17) * 360.0);
      if (1.0 <= fVar21) {
        fVar21 = 1.0;
      }
    }
    param_1[0x47] = fVar21;
    fVar21 = (float)FUN_142f93d80(param_1);
    param_1[0x48] = fVar21;
  }
  fVar21 = param_1[0x48];
  if (param_1[0x47] <= param_1[0x48]) {
    fVar21 = param_1[0x47];
  }
  fVar20 = param_1[0x14];
  if (fVar21 == fVar20) goto LAB_142fb8e55;
  if (0.0 < param_1[4]) {
    fVar13 = *(float *)(*(longlong *)(param_1 + 10) + 0x7b0);
    fVar17 = ABS(fVar21 - fVar20);
    if (fVar21 <= fVar20) {
      fVar13 = -fVar13;
    }
    fVar13 = fVar13 / param_1[4];
    fVar21 = -fVar17;
    if ((-fVar17 <= fVar13) && (fVar21 = fVar13, fVar17 <= fVar13)) {
      fVar21 = fVar17;
    }
    fVar21 = fVar20 + fVar21;
    if (0.0 <= fVar21) {
      if (1.0 <= fVar21) {
        fVar21 = 1.0;
      }
    }
    else {
      fVar21 = 0.0;
    }
  }
  if (fVar21 == fVar20) goto LAB_142fb8e55;
  param_1[0x14] = fVar21;
  if ((((*(longlong *)(param_1 + 10) != 0) && (*(longlong *)(param_1 + 0xc) != 0)) &&
      (*(longlong *)(param_1 + 0xe) != 0)) && (*(longlong *)(param_1 + 0x10) != 0)) {
    if (*(char *)(param_1 + 3) != '\0') {
      fVar21 = (1.0 - param_1[2]) * fVar21 + param_1[2];
      param_1[0x16] = fVar21;
      pfVar4 = (float *)FUN_14248a390(*(longlong *)(param_1 + 0x10) + 0x13ac,&local_88,
                                      param_1 + 0x18,3,fVar21,local_res8);
      fVar21 = pfVar4[1];
      fVar20 = pfVar4[2];
      fVar13 = pfVar4[3];
      param_1[0x18] = *pfVar4;
      param_1[0x19] = fVar21;
      param_1[0x1a] = fVar20;
      param_1[0x1b] = fVar13;
      param_1[0x1c] = pfVar4[4];
    }
    if (*(char *)(param_1 + 1) != '\0') {
      lVar9 = 0x298;
      fVar21 = (1.0 - *param_1) * param_1[0x14] + *param_1;
      if (fVar21 <= 0.0001) {
        fVar21 = 0.0001;
      }
      param_1[0x15] = fVar21;
      cVar2 = *(char *)(*(longlong *)(param_1 + 0xe) + 0x781);
      cVar3 = *(char *)(param_1 + 0x17);
      if (cVar2 != cVar3) {
        if (cVar3 == '\x01') {
          lVar7 = 0x274;
LAB_142fb8d4a:
          if (*(longlong *)(param_1 + 0x10) + lVar7 != 0) {
            FUN_14248ba60(*(longlong *)(param_1 + 0x10) + lVar7,param_1 + 0x1d);
          }
        }
        else if (cVar3 == '\x02') {
          lVar7 = 0x298;
          goto LAB_142fb8d4a;
        }
        *(char *)(param_1 + 0x17) = cVar2;
      }
      if (cVar2 == '\x01') {
        lVar9 = 0x274;
      }
      else if (cVar2 != '\x02') goto LAB_142fb8db6;
      if (*(longlong *)(param_1 + 0x10) + lVar9 != 0) {
        puVar8 = (undefined8 *)
                 FUN_14248a390(*(longlong *)(param_1 + 0x10) + lVar9,&local_88,param_1 + 0x1d,3,
                               param_1[0x15],local_res8);
        uVar1 = puVar8[1];
        *(undefined8 *)(param_1 + 0x1d) = *puVar8;
        *(undefined8 *)(param_1 + 0x1f) = uVar1;
        param_1[0x21] = *(float *)(puVar8 + 2);
      }
    }
  }
LAB_142fb8db6:
  if (*(longlong *)(param_1 + 0x12) != 0) {
    if (*(char *)(param_1 + 3) != '\0') {
      puVar8 = (undefined8 *)
               FUN_14248a390(*(longlong *)(param_1 + 0x12) + 600,&local_88,param_1 + 0x22,3,
                             param_1[0x16],local_res8);
      uVar1 = puVar8[1];
      *(undefined8 *)(param_1 + 0x22) = *puVar8;
      *(undefined8 *)(param_1 + 0x24) = uVar1;
      param_1[0x26] = *(float *)(puVar8 + 2);
    }
    if (*(char *)(param_1 + 1) != '\0') {
      puVar8 = (undefined8 *)
               FUN_14248a390(*(longlong *)(param_1 + 0x12) + 0x210,&local_88,param_1 + 0x27,3,
                             param_1[0x15],local_res8);
      uVar1 = puVar8[1];
      *(undefined8 *)(param_1 + 0x27) = *puVar8;
      *(undefined8 *)(param_1 + 0x29) = uVar1;
      param_1[0x2b] = *(float *)(puVar8 + 2);
    }
  }
LAB_142fb8e55:
  fVar20 = 1.0;
  fVar21 = param_1[0x48];
  if (param_1[0x47] <= param_1[0x48]) {
    fVar21 = param_1[0x47];
  }
  if (*(char *)(param_1 + 3) != '\0') {
    fVar20 = (1.0 - param_1[2]) * fVar21 + param_1[2];
  }
  if ((*(char *)(param_1 + 1) != '\0') &&
     (fVar19 = (1.0 - *param_1) * fVar21 + *param_1, fVar19 <= 0.0001)) {
    fVar19 = 0.0001;
  }
  if (fVar21 < 0.9) {
    lVar9 = *(longlong *)(param_1 + 0x12);
    fVar22 = 0.0;
    if (lVar9 == 0) {
      if (*(longlong *)(param_1 + 0x10) != 0) {
        fVar22 = *(float *)(*(longlong *)(param_1 + 0x10) + 0x2f8);
      }
    }
    else if (*(char *)(lVar9 + 0x280) == '\x01') {
      fVar22 = *(float *)(lVar9 + 0x268) * *(float *)(lVar9 + 0x244);
    }
    else if (*(char *)(lVar9 + 0x280) == '\x02') {
      fVar22 = *(float *)(lVar9 + 0x274) * *(float *)(lVar9 + 0x244);
    }
    else {
      fVar22 = *(float *)(lVar9 + 0x25c) * *(float *)(lVar9 + 0x244);
    }
    if (0.0 < param_1[0x16]) {
      fVar22 = fVar22 / param_1[0x16];
    }
    if (((*(longlong *)(param_1 + 10) == 0) || (*(longlong *)(param_1 + 0xc) == 0)) ||
       ((*(longlong *)(param_1 + 0xe) == 0 || (*(longlong *)(param_1 + 0x10) == 0)))) {
      fVar21 = 0.0;
    }
    else {
      fVar21 = *(float *)(*(longlong *)(param_1 + 0xe) + 0x6f0);
      if (0.0 < param_1[0x15]) {
        fVar21 = fVar21 / param_1[0x15];
      }
    }
    pfVar4 = (float *)FUN_142f934e0(param_1,&local_88,fVar21 * fVar19,fVar22 * fVar20);
    fVar22 = *pfVar4;
  }
  param_1[0x49] = fVar22;
  return;
}



// FUNCTION 142fb8fb0 FUN_142fb8fb0 body=295 status=ok
// SIG undefined FUN_142fb8fb0(void)

bool FUN_142fb8fb0(char *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 local_38 [48];
  
  if ((*(longlong *)(param_1 + 8) == DAT_1468c21b0) || (*(longlong *)(param_2 + 0x60) == 0)) {
    return false;
  }
  if ((param_1[0xb9] == '\0') &&
     ((*(longlong *)(param_1 + 8) != 0 && (cVar5 = FUN_142fa8a90(param_1 + 0x20), cVar5 != '\0'))))
  {
    return false;
  }
  local_a8 = *(undefined8 *)param_1;
  uStack_a0 = *(undefined8 *)(param_1 + 8);
  local_98 = *(undefined8 *)(param_1 + 0x10);
  uStack_90 = *(undefined8 *)(param_1 + 0x18);
  local_88 = *(undefined8 *)(param_1 + 0x20);
  uStack_80 = *(undefined8 *)(param_1 + 0x28);
  local_78 = *(undefined8 *)(param_1 + 0x30);
  uStack_70 = *(undefined8 *)(param_1 + 0x38);
  local_68 = *(undefined8 *)(param_1 + 0x40);
  uStack_60 = *(undefined8 *)(param_1 + 0x48);
  local_58 = *(undefined4 *)(param_1 + 0x50);
  uStack_54 = *(undefined4 *)(param_1 + 0x54);
  uStack_50 = *(undefined4 *)(param_1 + 0x58);
  uStack_4c = *(undefined4 *)(param_1 + 0x5c);
  local_48 = *(undefined8 *)(param_1 + 0x60);
  puVar6 = (undefined8 *)FUN_142f914a0(param_1,local_38,param_2,&local_a8);
  uVar4 = puVar6[1];
  *(undefined8 *)(param_1 + 0x20) = *puVar6;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  uVar1 = *(undefined4 *)((longlong)puVar6 + 0x14);
  uVar2 = *(undefined4 *)(puVar6 + 3);
  uVar3 = *(undefined4 *)((longlong)puVar6 + 0x1c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(puVar6 + 2);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  uVar1 = *(undefined4 *)((longlong)puVar6 + 0x24);
  uVar2 = *(undefined4 *)(puVar6 + 5);
  uVar3 = *(undefined4 *)((longlong)puVar6 + 0x2c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(puVar6 + 4);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  cVar5 = FUN_142fa8a90();
  if ((cVar5 == '\0') && ((*param_1 != '\0' || (param_1[0x1d] == '\0')))) {
    cVar5 = '\x01';
  }
  else {
    cVar5 = '\0';
  }
  *param_1 = cVar5;
  *(longlong *)(param_1 + 8) = DAT_1468c21b0;
  cVar5 = FUN_142c66f30(param_1 + 0x3c,(longlong)&uStack_70 + 4,0x3f800000);
  return cVar5 == '\0';
}



// FUNCTION 142fb90e0 FUN_142fb90e0 body=1077 status=ok
// SIG undefined FUN_142fb90e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fb90e0(longlong *param_1)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_68;
  float fStack_64;
  float local_58;
  float fStack_54;
  undefined8 local_48;
  float local_40;
  
  if (param_1[2] == 0) {
    return;
  }
  if (*param_1 == 0) {
    return;
  }
  lVar7 = param_1[1];
  if (lVar7 == 0) {
    return;
  }
  fVar11 = *(float *)(lVar7 + 0x770);
  fVar1 = *(float *)(*param_1 + 0x790);
  lVar7 = *(longlong *)(lVar7 + 0x768);
  lVar6 = *(longlong *)(param_1[2] + 0x168);
  if (lVar6 == 0) {
    local_48 = _DAT_1468b5d90;
    local_40 = DAT_1468b5d98;
  }
  else {
    local_48 = *(undefined8 *)(lVar6 + 0x220);
    local_40 = *(float *)(lVar6 + 0x228);
  }
  fVar14 = 0.0;
  if (((*(float *)((longlong)param_1 + 0x24) == (float)DAT_14676e1b0) &&
      (DAT_14676e1b0._4_4_ == *(float *)(param_1 + 5))) &&
     (DAT_14676e1b8 == *(float *)((longlong)param_1 + 0x2c))) {
LAB_142fb9236:
    bVar2 = true;
  }
  else {
    local_68 = (float)local_48;
    fStack_64 = (float)((ulonglong)local_48 >> 0x20);
    local_68 = local_68 - *(float *)((longlong)param_1 + 0x24);
    fVar10 = *(float *)((longlong)param_1 + 0x5c);
    fVar12 = local_40 - *(float *)((longlong)param_1 + 0x2c);
    if (fVar10 <= 0.0) {
      fVar10 = *(float *)((longlong)param_1 + 0x44);
    }
    if (fVar10 * fVar10 <=
        (fStack_64 - *(float *)(param_1 + 5)) * (fStack_64 - *(float *)(param_1 + 5)) +
        local_68 * local_68 + fVar12 * fVar12) goto LAB_142fb9236;
    bVar2 = false;
  }
  fVar10 = *(float *)(param_1 + 0xc);
  local_58 = (float)lVar7;
  fStack_54 = (float)((ulonglong)lVar7 >> 0x20);
  fVar12 = *(float *)(param_1 + 6);
  fStack_54 = fStack_54 - *(float *)((longlong)param_1 + 0x34);
  fVar13 = fVar11 - *(float *)(param_1 + 7);
  if (fVar10 <= 0.0) {
    fVar10 = *(float *)(param_1 + 9);
  }
  if (((longlong *)param_1[3] == (longlong *)0x0) ||
     (cVar4 = (**(code **)(*(longlong *)param_1[3] + 0xa68))(), cVar4 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (((*(int *)(param_1[1] + 0x270) != 3) || (bVar2)) ||
     ((fVar10 * fVar10 <=
       fStack_54 * fStack_54 + (local_58 - fVar12) * (local_58 - fVar12) + fVar13 * fVar13 ||
      (bVar3)))) {
    if ((char)param_1[4] != '\0') {
      *(float *)(param_1 + 8) = fVar1;
    }
    *(undefined8 *)((longlong)param_1 + 0x24) = local_48;
    *(float *)((longlong)param_1 + 0x2c) = local_40;
    cVar4 = '\0';
    param_1[6] = lVar7;
    *(float *)(param_1 + 7) = fVar11;
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0xff7fffff;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  else {
    cVar4 = (char)param_1[4];
    if (cVar4 == '\0') {
      fVar11 = *(float *)((longlong)param_1 + 0x3c);
      if (*(float *)((longlong)param_1 + 0x3c) == -3.4028235e+38) {
        *(float *)((longlong)param_1 + 0x3c) = fVar1;
        fVar11 = fVar1;
      }
      fVar10 = *(float *)((longlong)param_1 + 100);
      if (fVar10 <= 0.0) {
        fVar10 = *(float *)((longlong)param_1 + 0x4c);
      }
      cVar4 = '\0';
      if (fVar10 <= fVar1 - fVar11) {
        *(undefined1 *)(param_1 + 4) = 1;
        cVar4 = '\x01';
      }
    }
  }
  if (*(char *)((longlong)param_1 + 0x21) == '\0') {
    if (((cVar4 != '\0') && (cVar4 = FUN_142f94e10(param_1), cVar4 != '\0')) &&
       (*(float *)((longlong)param_1 + 0x54) <=
        *(float *)(*param_1 + 0x790) - *(float *)((longlong)param_1 + 0x3c))) {
      FUN_142fb5ca0(param_1);
      return;
    }
    if (*(char *)((longlong)param_1 + 0x21) == '\0') {
      return;
    }
  }
  if ((param_1[1] != 0) && (*(char *)(param_1[1] + 0x9a8) == '\x02')) {
    return;
  }
  cVar4 = FUN_142f94e10(param_1);
  if (cVar4 != '\0') {
    if (((param_1[2] == 0) || (*param_1 == 0)) || (param_1[1] == 0)) {
      fVar14 = 3.4028235e+38;
    }
    else if ((char)param_1[4] == '\0') {
      fVar14 = *(float *)(*param_1 + 0x790) - *(float *)(param_1 + 8);
    }
    if (fVar14 < *(float *)(param_1 + 0xb) || fVar14 == *(float *)(param_1 + 0xb)) {
      return;
    }
  }
  lVar7 = param_1[3];
  *(undefined1 *)((longlong)param_1 + 0x21) = 0;
  if (lVar7 == 0) {
    return;
  }
  if (*(longlong *)(lVar7 + 0x180) == 0) {
    return;
  }
  plVar9 = (longlong *)0x0;
  plVar8 = plVar9;
  if (*(longlong *)(lVar7 + 0x220) != 0) {
    plVar8 = *(longlong **)(*(longlong *)(lVar7 + 0x220) + 0x10);
  }
  if (plVar8 != (longlong *)0x0) {
    lVar6 = plVar8[0x1f];
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0x368))(plVar8);
      lVar6 = plVar8[0x1f];
      lVar7 = param_1[3];
      if (lVar6 == 0) goto LAB_142fb945c;
    }
    plVar9 = *(longlong **)(lVar6 + 0x4d0);
  }
LAB_142fb945c:
  if (plVar9 == (longlong *)0x0) {
    (**(code **)(**(longlong **)(lVar7 + 0x180) + 0x830))(*(longlong **)(lVar7 + 0x180),2,2);
    (**(code **)(**(longlong **)(param_1[3] + 0x180) + 0x830))
              (*(longlong **)(param_1[3] + 0x180),6,2);
  }
  else {
    lVar7 = **(longlong **)(lVar7 + 0x180);
    uVar5 = (**(code **)(*plVar9 + 0x4f0))(plVar9);
    (**(code **)(lVar7 + 0x830))(*(undefined8 *)(param_1[3] + 0x180),2,uVar5);
    plVar8 = *(longlong **)(param_1[3] + 0x180);
    lVar7 = *plVar8;
    uVar5 = (**(code **)(*plVar9 + 0x4f0))(plVar9,6);
    (**(code **)(lVar7 + 0x830))(plVar8,6,uVar5);
  }
  return;
}



// FUNCTION 142fb9520 FUN_142fb9520 body=491 status=ok
// SIG undefined FUN_142fb9520(void)

void FUN_142fb9520(longlong *param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  
  if (((int)param_1[0x4e] == 3) && (cVar2 = FUN_142fa53c0(), cVar2 != '\0')) {
    if (*(char *)((longlong)param_1 + 0x364) == '\0') {
      if (*(char *)((longlong)param_1 + 0x781) != '\0') {
        cVar2 = FUN_142c73900(param_1[0x4f] + 0x3c,param_1 + 0x66);
        if ((cVar2 == '\0') || (cVar2 = FUN_142fa5210(param_1), cVar2 == '\0')) {
          cVar2 = '\0';
        }
        else {
          cVar2 = '\x01';
        }
        *(char *)((longlong)param_1 + 0x364) = cVar2;
        if (cVar2 != '\0') {
          *(undefined4 *)((longlong)param_1 + 0x35c) = 0;
          *(undefined1 *)(param_1 + 0x6b) = 0;
          return;
        }
      }
    }
    else {
      cVar2 = FUN_142fa5210(param_1);
      if (cVar2 == '\0') {
        iVar1 = (int)param_1[0x4e];
        *(undefined1 *)((longlong)param_1 + 0x364) = 0;
        *(undefined4 *)(param_1 + 0x4e) = 2;
        if (iVar1 == 3) {
          lVar3 = 0;
          if (param_1[0xdb] != 0) {
            lVar3 = *(longlong *)(param_1[0xdb] + 0x568);
          }
          if (lVar3 != 0) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38)
                 < DAT_146b441f0) && (_Init_thread_header(&DAT_146b441f0), DAT_146b441f0 == -1)) {
              FName::FName(&DAT_146b441e8,L"IsMoving",1);
              _Init_thread_footer(&DAT_146b441f0);
            }
            UBlackboardComponent::SetValueAsBool(lVar3,&DAT_146b441e8,0);
          }
        }
        if (iVar1 == 0) {
          FUN_142fa50c0(param_1);
        }
        else if (iVar1 != 1) {
          if (iVar1 == 2) {
            return;
          }
          if (iVar1 != 3) {
            return;
          }
          cVar2 = FUN_142fa53c0(param_1);
          if (cVar2 != '\0') {
            FUN_142fb36a0(param_1 + 0x86,param_1[0x4f] + 0x20);
          }
          (**(code **)(*param_1 + 0x438))(param_1,0);
          *(undefined4 *)(param_1 + 0x125) = 0;
          if (0x7fffffff < *(uint *)((longlong)param_1 + 0x92c)) {
            FUN_1422b26f0(param_1 + 0x116,0);
          }
          TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x4b,param_1);
          return;
        }
        FUN_142fa4f90(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142fb9710 FUN_142fb9710 body=1734 status=ok
// SIG undefined FUN_142fb9710(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142fb9710(longlong *param_1,longlong param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  char cVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined4 *puVar16;
  longlong *plVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  undefined1 auStack_158 [32];
  float *local_138;
  undefined4 *local_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  undefined4 local_110;
  uint local_108 [2];
  undefined4 local_100 [2];
  longlong *local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  longlong lStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  if (((int)param_1[9] != 0) || ((int)param_1[7] != 0)) {
    lVar6 = *(longlong *)(param_2 + 0x8f8);
    uVar19 = 0;
    if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x130) != 0)) {
      puVar16 = (undefined4 *)param_1[8];
      uVar18 = (longlong)(int)param_1[9] & 0x3fffffffffffffff;
      if (puVar16 + (int)param_1[9] < puVar16) {
        uVar18 = uVar19;
      }
      local_f8 = param_1;
      local_e8 = param_2;
      if (uVar18 != 0) {
        do {
          FUN_143848600(lVar6,*puVar16);
          uVar19 = uVar19 + 1;
          puVar16 = puVar16 + 1;
        } while (uVar19 != uVar18);
      }
      *(undefined4 *)(param_1 + 9) = 0;
      if (*(int *)((longlong)param_1 + 0x4c) != 0) {
        TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
      }
      plVar17 = (longlong *)param_1[6];
      local_e0 = param_1 + 6;
      plVar11 = plVar17 + (longlong)(int)param_1[7] * 10;
      local_f0 = plVar11;
      if (plVar17 != plVar11) {
        do {
          lVar10 = 0;
          if (*plVar17 != 0) {
            local_88 = (float)plVar17[1] * 0.01;
            fStack_84 = (float)((ulonglong)plVar17[1] >> 0x20) * 0.01;
            fStack_80 = *(float *)(plVar17 + 2) * 0.01;
            uStack_7c = 0;
            local_108[0] = 1;
            local_98 = (float)*(undefined8 *)((longlong)plVar17 + 0x14) * 0.01;
            fStack_94 = (float)((ulonglong)*(undefined8 *)((longlong)plVar17 + 0x14) >> 0x20) * 0.01
            ;
            fStack_90 = *(float *)((longlong)plVar17 + 0x1c) * 0.01;
            uStack_8c = 0;
            local_a8 = (float)plVar17[4] * 0.01;
            fStack_a4 = (float)((ulonglong)plVar17[4] >> 0x20) * 0.01;
            fStack_a0 = *(float *)(plVar17 + 5) * 0.01;
            uStack_9c = 0;
            local_b8 = (float)*(undefined8 *)((longlong)plVar17 + 0x2c) * 0.01;
            fStack_b4 = (float)((ulonglong)*(undefined8 *)((longlong)plVar17 + 0x2c) >> 0x20) * 0.01
            ;
            fStack_b0 = *(float *)((longlong)plVar17 + 0x34) * 0.01;
            uStack_ac = 0;
            uVar9 = FUN_143703a50();
            lVar13 = (longlong)(int)local_108[0];
            if (local_108[0] != 0) {
              lVar10 = FUN_143702d60(uVar9,0xe0,local_108);
            }
            uVar20 = 0x80000000;
            if (local_108[0] != 0) {
              uVar20 = local_108[0];
            }
            if (lVar10 != 0) {
              FUN_143830860(lVar10);
            }
            local_130 = &local_c8;
            local_138 = &local_b8;
            local_c8 = 0;
            uStack_c4 = 0;
            uStack_c0._0_4_ = 0x3f800000;
            uStack_c0._4_4_ = 0;
            FUN_143832030(lVar10,&local_88,&local_98,&local_a8);
            *(char *)(lVar10 + 0xd0) = (char)plVar17[9];
            *(undefined1 *)(lVar10 + 0xd2) = 1;
            plVar11 = (longlong *)*param_1;
            for (plVar14 = plVar11; plVar14 != plVar11 + (int)param_1[1]; plVar14 = plVar14 + 1) {
              if (*plVar14 == plVar17[8]) {
                uVar12 = (uint)((longlong)plVar14 - (longlong)plVar11 >> 3);
                goto LAB_142fb9979;
              }
            }
            uVar12 = 0xffffffff;
LAB_142fb9979:
            *(uint *)(lVar10 + 0xa0) = uVar12 | 0xffffff00;
            *(uint *)(lVar10 + 0xa4) = uVar12 | 0xffffff00;
            FUN_143848350(lVar6,local_100);
            lStack_d0 = lVar13 * 0xe0 + lVar10;
            local_d8._0_4_ = (undefined4)lVar10;
            local_d8._4_4_ = (undefined4)((ulonglong)lVar10 >> 0x20);
            local_c8 = (undefined4)local_d8;
            uStack_c4 = local_d8._4_4_;
            local_d8 = lVar10;
            uStack_c0 = lStack_d0;
            FUN_143848080(lVar6,local_100[0],&local_c8);
            uVar7 = local_100[0];
            lVar13 = *plVar17;
            iVar5 = *(int *)(lVar13 + 0x228);
            *(int *)(lVar13 + 0x228) = iVar5 + 1;
            if (*(int *)(lVar13 + 0x22c) < iVar5 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar13 + 0x220,iVar5);
            }
            *(undefined4 *)(*(longlong *)(lVar13 + 0x220) + (longlong)iVar5 * 4) = uVar7;
            if ((char)local_110 == '\0') {
              local_128 = (float)plVar17[1];
              fStack_120 = *(float *)(plVar17 + 2);
              fStack_118 = (float)((ulonglong)plVar17[1] >> 0x20);
              cVar8 = '\x01';
              fStack_124 = fStack_118;
              local_110 = CONCAT31(local_110._1_3_,1);
              fStack_11c = local_128;
              fStack_114 = fStack_120;
            }
            else {
              fVar2 = *(float *)(plVar17 + 1);
              if (fVar2 < local_128) {
                local_128 = fVar2;
              }
              fVar3 = *(float *)((longlong)plVar17 + 0xc);
              if (fVar3 < fStack_124) {
                fStack_124 = fVar3;
              }
              fVar4 = *(float *)(plVar17 + 2);
              if (fVar4 < fStack_120) {
                fStack_120 = fVar4;
              }
              if (fStack_11c < fVar2) {
                fStack_11c = fVar2;
              }
              if (fStack_118 < fVar3) {
                fStack_118 = fVar3;
              }
              cVar8 = (char)local_110;
              if (fStack_114 < fVar4) {
                fStack_114 = fVar4;
              }
            }
            if (cVar8 == '\0') {
              local_128 = (float)*(undefined8 *)((longlong)plVar17 + 0x14);
              fStack_120 = *(float *)((longlong)plVar17 + 0x1c);
              fStack_118 = (float)((ulonglong)*(undefined8 *)((longlong)plVar17 + 0x14) >> 0x20);
              cVar8 = '\x01';
              fStack_124 = fStack_118;
              local_110 = CONCAT31(local_110._1_3_,1);
              fStack_11c = local_128;
              fStack_114 = fStack_120;
            }
            else {
              fVar2 = *(float *)((longlong)plVar17 + 0x14);
              if (fVar2 < local_128) {
                local_128 = fVar2;
              }
              fVar3 = *(float *)(plVar17 + 3);
              if (fVar3 < fStack_124) {
                fStack_124 = fVar3;
              }
              fVar4 = *(float *)((longlong)plVar17 + 0x1c);
              if (fVar4 < fStack_120) {
                fStack_120 = fVar4;
              }
              if (fStack_11c < fVar2) {
                fStack_11c = fVar2;
              }
              if (fStack_118 < fVar3) {
                fStack_118 = fVar3;
              }
              if (fStack_114 < fVar4) {
                fStack_114 = fVar4;
              }
            }
            if (cVar8 == '\0') {
              local_128 = (float)plVar17[4];
              fStack_120 = *(float *)(plVar17 + 5);
              fStack_118 = (float)((ulonglong)plVar17[4] >> 0x20);
              cVar8 = '\x01';
              fStack_124 = fStack_118;
              local_110 = CONCAT31(local_110._1_3_,1);
              fStack_11c = local_128;
              fStack_114 = fStack_120;
            }
            else {
              fVar2 = *(float *)(plVar17 + 4);
              if (fVar2 < local_128) {
                local_128 = fVar2;
              }
              fVar3 = *(float *)((longlong)plVar17 + 0x24);
              if (fVar3 < fStack_124) {
                fStack_124 = fVar3;
              }
              fVar4 = *(float *)(plVar17 + 5);
              if (fVar4 < fStack_120) {
                fStack_120 = fVar4;
              }
              if (fStack_11c < fVar2) {
                fStack_11c = fVar2;
              }
              if (fStack_118 < fVar3) {
                fStack_118 = fVar3;
              }
              if (fStack_114 < fVar4) {
                fStack_114 = fVar4;
              }
            }
            if (cVar8 == '\0') {
              fStack_120 = *(float *)((longlong)plVar17 + 0x34);
              local_128 = (float)*(undefined8 *)((longlong)plVar17 + 0x2c);
              fStack_124 = (float)((ulonglong)*(undefined8 *)((longlong)plVar17 + 0x2c) >> 0x20);
              local_110 = CONCAT31(local_110._1_3_,1);
              fStack_11c = local_128;
              fStack_118 = fStack_124;
              fStack_114 = fStack_120;
            }
            else {
              fVar2 = *(float *)((longlong)plVar17 + 0x2c);
              if (fVar2 < local_128) {
                local_128 = fVar2;
              }
              fVar3 = *(float *)(plVar17 + 6);
              if (fVar3 < fStack_124) {
                fStack_124 = fVar3;
              }
              fVar4 = *(float *)((longlong)plVar17 + 0x34);
              if (fVar4 < fStack_120) {
                fStack_120 = fVar4;
              }
              if (fStack_11c < fVar2) {
                fStack_11c = fVar2;
              }
              if (fStack_118 < fVar3) {
                fStack_118 = fVar3;
              }
              if (fStack_114 < fVar4) {
                fStack_114 = fVar4;
              }
            }
            plVar11 = (longlong *)(local_e8 + 0xb70);
            *(undefined1 *)(local_e8 + 0xb68) = 1;
            iVar5 = *(int *)(local_e8 + 0xb78);
            *(int *)(local_e8 + 0xb78) = iVar5 + 1;
            if (*(int *)(local_e8 + 0xb7c) < iVar5 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::
              ResizeGrow(plVar11,iVar5);
            }
            lVar13 = *plVar11;
            lVar15 = (longlong)iVar5 * 0x1c;
            pfVar1 = (float *)(lVar15 + lVar13);
            *pfVar1 = local_128;
            pfVar1[1] = fStack_124;
            pfVar1[2] = fStack_120;
            pfVar1[3] = fStack_11c;
            *(ulonglong *)(lVar15 + 0x10 + lVar13) = CONCAT44(fStack_114,fStack_118);
            *(undefined4 *)(lVar15 + 0x18 + lVar13) = local_110;
            uVar9 = FUN_143703a50();
            plVar11 = local_f0;
            param_1 = local_f8;
            if (-1 < (int)uVar20) {
              FUN_143702e10(uVar9,lVar10,0xe0,uVar20 & 0x3fffffff);
              plVar11 = local_f0;
              param_1 = local_f8;
            }
          }
          plVar17 = plVar17 + 10;
        } while (plVar17 != plVar11);
      }
      *(undefined4 *)(local_e0 + 1) = 0;
      if (*(int *)((longlong)local_e0 + 0xc) != 0) {
        TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(local_e0,0);
      }
    }
  }
  return;
}



// FUNCTION 142fb9de0 FUN_142fb9de0 body=677 status=ok
// SIG undefined FUN_142fb9de0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142fb9de0(undefined8 param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  uint local_c0;
  uint local_bc;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined1 local_90 [8];
  longlong local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  undefined1 local_50 [8];
  undefined1 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_b0 = &local_b8;
  plVar9 = (longlong *)0x0;
  iVar11 = 0;
  local_88 = 0;
  local_c8 = (longlong *)0x0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (undefined1 *)0x0;
  local_40 = 0;
  local_bc = 0;
  local_b8 = param_1;
  local_a8 = FUN_14073d760(&local_b8,DAT_146b44170);
  puVar3 = local_b0;
  local_a0 = &local_b8;
  local_98 = 0;
  puVar5 = (undefined8 *)FUN_14073d760(local_b0,local_a8);
  puVar6 = (undefined8 *)FUN_14073d760(local_a0,local_98);
  plVar10 = plVar9;
  plVar14 = plVar9;
  do {
    if (puVar5 == puVar6) {
      uVar12 = 0;
      iVar8 = 1;
      uVar13 = (ulonglong)((longlong)(plVar9 + iVar11) + (7 - (longlong)plVar9)) >> 3;
      if (plVar9 + iVar11 < plVar9) {
        uVar13 = uVar12;
      }
      plVar10 = plVar9;
      if (uVar13 != 0) {
        do {
          lVar2 = *plVar9;
          do {
            iVar11 = iVar8;
            if ((int)local_80 != local_54) {
              puVar7 = local_50;
              if (local_48 != (undefined1 *)0x0) {
                puVar7 = local_48;
              }
              for (iVar4 = *(int *)(puVar7 + ((longlong)local_40 - 1U & (longlong)iVar11) * 4);
                  iVar4 != -1; iVar4 = *(int *)(local_88 + 4 + (longlong)iVar4 * 0xc)) {
                if (*(int *)(local_88 + (longlong)iVar4 * 0xc) == iVar11) goto LAB_142fb9ffc;
              }
            }
            iVar4 = -1;
LAB_142fb9ffc:
            iVar8 = iVar11 + 1;
          } while (iVar4 != -1);
          *(int *)(lVar2 + 0x7a8) = iVar11;
          UObjectBaseUtility::MarkPackageDirty(lVar2);
          plVar9 = plVar9 + 1;
          uVar12 = uVar12 + 1;
          plVar10 = local_c8;
        } while (uVar12 != uVar13);
      }
      if (plVar10 != (longlong *)0x0) {
        FMemory::Free(plVar10);
      }
      local_40 = 0;
      if (local_48 != (undefined1 *)0x0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_88);
      return;
    }
    lVar2 = puVar5[2];
    uVar1 = *(uint *)(lVar2 + 0x7a8);
    if (uVar1 == DAT_14676e170) {
LAB_142fb9f27:
      iVar11 = (int)plVar10;
      local_c0 = iVar11 + 1;
      if ((int)plVar14 < (int)local_c0) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_c8,plVar10);
        plVar14 = (longlong *)(ulonglong)local_bc;
      }
      plVar10 = (longlong *)(ulonglong)local_c0;
      local_c8[iVar11] = lVar2;
      plVar9 = local_c8;
    }
    else {
      if ((int)local_80 != local_54) {
        puVar7 = local_50;
        if (local_48 != (undefined1 *)0x0) {
          puVar7 = local_48;
        }
        for (iVar11 = *(int *)(puVar7 + (longlong)(int)(local_40 - 1U & uVar1) * 4); iVar11 != -1;
            iVar11 = *(int *)(local_88 + 4 + (longlong)iVar11 * 0xc)) {
          if (*(uint *)(local_88 + (longlong)iVar11 * 0xc) == uVar1) {
            if (iVar11 != -1) goto LAB_142fb9f27;
            break;
          }
        }
      }
      FUN_14044be50(&local_88,local_90,lVar2 + 0x7a8,0);
    }
    iVar11 = (int)plVar10;
    puVar5 = (undefined8 *)FUN_14073d760(puVar3,*puVar5);
  } while( true );
}



// FUNCTION 142fba0b0 FUN_142fba0b0 body=392 status=ok
// SIG undefined FUN_142fba0b0(void)

void FUN_142fba0b0(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  plVar2 = (longlong *)*param_1;
  iVar1 = *(int *)(param_1 + 1);
  if (plVar2 == plVar2 + (longlong)iVar1 * 4) {
    return;
  }
  plVar9 = plVar2 + 3;
LAB_142fba0e7:
  if (*plVar9 != 0) {
    plVar4 = (longlong *)FUN_142ba7330();
    plVar7 = (longlong *)*plVar9;
    for (plVar5 = plVar7; plVar5 != (longlong *)0x0; plVar5 = (longlong *)plVar5[6]) {
      if (plVar5 == plVar4) {
        if (plVar7 != (longlong *)0x0) {
          plVar4 = (longlong *)FUN_142ba7330();
          plVar5 = plVar7;
          goto LAB_142fba130;
        }
        break;
      }
    }
  }
  goto LAB_142fba20d;
  while (plVar5 = (longlong *)plVar5[6], plVar5 != (longlong *)0x0) {
LAB_142fba130:
    if (plVar5 == plVar4) {
      plVar4 = (longlong *)FUN_142ba7330();
      plVar5 = plVar7;
      goto LAB_142fba150;
    }
  }
  goto LAB_142fba203;
  while (plVar5 = (longlong *)plVar5[6], plVar8 = (longlong *)0x0, plVar5 != (longlong *)0x0) {
LAB_142fba150:
    plVar8 = plVar7;
    if (plVar5 == plVar4) break;
  }
  plVar5 = (longlong *)FUN_142ba7b40();
  if (plVar8 == plVar5) {
    lVar6 = FUN_142f9d030();
    if (lVar6 != 0) {
      plVar7 = *(longlong **)(lVar6 + 0x38);
      goto LAB_142fba206;
    }
  }
  else {
    plVar4 = (longlong *)FUN_142ba7330();
    plVar5 = plVar7;
    do {
      if (plVar5 == plVar4) {
        lVar6 = plVar7[0x1f];
        if (lVar6 == 0) {
          (**(code **)(*plVar7 + 0x368))(plVar7);
          lVar6 = plVar7[0x1f];
          if (lVar6 == 0) break;
        }
        plVar7 = *(longlong **)(lVar6 + 0x28);
        if (plVar7 != (longlong *)0x0) {
          lVar6 = FUN_142fbe0e0();
          if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
              != lVar6 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) goto LAB_142fba206;
        }
        break;
      }
      plVar5 = (longlong *)plVar5[6];
    } while (plVar5 != (longlong *)0x0);
  }
LAB_142fba203:
  plVar7 = (longlong *)0x0;
LAB_142fba206:
  plVar9[-3] = (longlong)plVar7;
  *plVar9 = 0;
LAB_142fba20d:
  plVar7 = plVar9 + 1;
  plVar9 = plVar9 + 4;
  if (plVar7 == plVar2 + (longlong)iVar1 * 4) {
    return;
  }
  goto LAB_142fba0e7;
}



// FUNCTION 142fba240 FUN_142fba240 body=972 status=ok
// SIG undefined FUN_142fba240(void)

void FUN_142fba240(longlong *param_1)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  undefined8 local_18;
  undefined4 local_10;
  
  if ((int)param_1[0x4e] == 0) {
    return;
  }
  cVar2 = FUN_142fa53c0();
  if (cVar2 == '\0') {
    iVar4 = (int)param_1[0x4e];
LAB_142fba29a:
    lVar3 = 0;
    *(undefined4 *)(param_1 + 0x4e) = 0;
    if (iVar4 == 3) {
      if (param_1[0xdb] != 0) {
        lVar3 = *(longlong *)(param_1[0xdb] + 0x568);
      }
      if (lVar3 != 0) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38) < DAT_146b441f0) &&
           (_Init_thread_header(&DAT_146b441f0), DAT_146b441f0 == -1)) {
          FName::FName(&DAT_146b441e8,L"IsMoving",1);
          _Init_thread_footer(&DAT_146b441f0);
        }
        UBlackboardComponent::SetValueAsBool(lVar3,&DAT_146b441e8,0);
      }
    }
    if ((iVar4 != 0) && (((iVar4 == 1 || (iVar4 == 2)) || (iVar4 == 3)))) {
      FUN_142facd90(param_1);
      return;
    }
    return;
  }
  FUN_142fb8fb0(param_1[0x4f],param_1 + 0xdd);
  pcVar1 = (char *)param_1[0x4f];
  iVar4 = (int)param_1[0x4e];
  if (*pcVar1 != '\0') goto LAB_142fba29a;
  if (iVar4 == 1) {
    cVar2 = FUN_142fa8a90(pcVar1 + 0x20);
    if ((((cVar2 != '\0') && (cVar2 = FUN_142fa8000(param_1 + 0x126), cVar2 == '\0')) &&
        ((param_1[0x13d] == 0 || (*(char *)(param_1[0x13d] + 0xb68) == '\0')))) &&
       ((char)param_1[0x141] == '\0')) {
      iVar4 = (int)param_1[0x4e];
      lVar3 = 0;
      *(undefined4 *)(param_1 + 0x4e) = 2;
      if (iVar4 == 3) {
        if (param_1[0xdb] != 0) {
          lVar3 = *(longlong *)(param_1[0xdb] + 0x568);
        }
        if (lVar3 != 0) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38) <
               DAT_146b441f0) && (_Init_thread_header(&DAT_146b441f0), DAT_146b441f0 == -1)) {
            FName::FName(&DAT_146b441e8,L"IsMoving",1);
            _Init_thread_footer(&DAT_146b441f0);
          }
          UBlackboardComponent::SetValueAsBool(lVar3,&DAT_146b441e8,0);
        }
      }
      if (iVar4 == 0) {
        FUN_142fa50c0(param_1);
      }
      else if (iVar4 != 1) {
        if ((iVar4 != 2) && (iVar4 == 3)) {
          cVar2 = FUN_142fa53c0(param_1);
          if (cVar2 != '\0') {
            FUN_142fb36a0(param_1 + 0x86,param_1[0x4f] + 0x20);
          }
          (**(code **)(*param_1 + 0x438))(param_1,0);
          *(undefined4 *)(param_1 + 0x125) = 0;
          if ((*(int *)((longlong)param_1 + 0x92c) < 0) &&
             (*(int *)((longlong)param_1 + 0x92c) != 0)) {
            FUN_1422b26f0(param_1 + 0x116,0);
          }
          TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x4b,param_1);
        }
        goto LAB_142fba515;
      }
      FUN_142fa4f90(param_1);
    }
    goto LAB_142fba515;
  }
  if ((char)param_1[0x6b] == '\0') {
    if ((*(char *)((longlong)param_1 + 0x364) != '\0') ||
       (cVar2 = FUN_142fa8a90(pcVar1 + 0x20), cVar2 == '\0')) goto LAB_142fba515;
    local_18 = *(undefined8 *)((longlong)param_1 + 0x45c);
    local_10 = *(undefined4 *)((longlong)param_1 + 0x464);
    cVar2 = FUN_142c73900(param_1[0x4f] + 0x3c,&local_18);
    if (cVar2 != '\0') goto LAB_142fba515;
  }
  else {
    lVar3 = param_1[0x24];
    if ((lVar3 == 0) && (lVar3 = FUN_1423407b0(param_1), lVar3 == 0)) {
      fVar5 = 0.0;
    }
    else {
      fVar5 = *(float *)(lVar3 + 0x790);
    }
    if (fVar5 < *(float *)((longlong)param_1 + 0x35c)) goto LAB_142fba515;
  }
  FUN_142fb3df0(param_1,2);
LAB_142fba515:
  cVar2 = FUN_142fa8a90(param_1[0x4f] + 0x20);
  if (cVar2 == '\0') {
    return;
  }
  cVar2 = FUN_142fa53c0(param_1);
  if (cVar2 == '\0') {
    return;
  }
  cVar2 = FUN_142fae860(param_1,param_1[0x4f]);
  if (cVar2 == '\0') {
    if (*(char *)(param_1[0x4f] + 0xc0) != '\x01') {
      return;
    }
    cVar2 = FUN_142faca90(param_1);
    if (cVar2 == '\0') {
      return;
    }
  }
  FUN_142fa9bb0(param_1);
  FUN_142fb3df0(param_1,0);
  return;
}



// FUNCTION 142fba610 FUN_142fba610 body=1139 status=ok
// SIG undefined FUN_142fba610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142fba610(longlong param_1)

{
  int *piVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  float local_a0;
  float local_90;
  undefined1 local_88 [8];
  float local_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  cVar3 = *(char *)(param_1 + 0x781);
  lVar9 = param_1 + 0x430;
  if (*(char *)(param_1 + 0x458) != cVar3) {
    FUN_142f98010(lVar9);
    if (*(longlong *)(param_1 + 0x4a0) != 0) {
      FUN_14370c150();
      *(undefined8 *)(param_1 + 0x4a0) = 0;
    }
    if (*(longlong *)(param_1 + 0x4a8) != 0) {
      FMemory::operator_delete(*(longlong *)(param_1 + 0x4a8),8);
      *(undefined8 *)(param_1 + 0x4a8) = 0;
    }
    local_a8 = *(undefined8 *)(param_1 + 0x45c);
    local_a0 = *(float *)(param_1 + 0x464);
    FUN_142f97c10(lVar9);
    *(char *)(param_1 + 0x458) = cVar3;
    if (cVar3 == '\x01') {
      FUN_142fa7810(lVar9);
    }
    else if (cVar3 == '\x02') {
      FUN_142fa6c70(lVar9);
    }
    if ((((float)local_a8 != (float)DAT_14676e1b0) || (local_a8._4_4_ != DAT_14676e1b0._4_4_)) ||
       (local_a0 != DAT_14676e1b8)) {
      FUN_142fb36a0(lVar9,&local_a8);
    }
  }
  fVar2 = *(float *)(param_1 + 0x724);
  fVar12 = *(float *)(param_1 + 0x6e8) * 0.01;
  if (*(longlong *)(param_1 + 0x490) != 0) {
    FUN_14385e410(*(longlong *)(param_1 + 0x490),fVar12);
  }
  if (*(longlong *)(param_1 + 0x518) != 0) {
    *(float *)(*(longlong *)(param_1 + 0x518) + 0xa0) = fVar12 * fVar2;
  }
  if (*(longlong *)(param_1 + 0x490) != 0) {
    FUN_14385eb60(*(longlong *)(param_1 + 0x490),
                  *(float *)(param_1 + 0xaa4) * *(float *)(param_1 + 0x6e8) * 0.01);
  }
  lVar9 = *(longlong *)(param_1 + 0x518);
  fVar2 = *(float *)(param_1 + 0x720);
  if (lVar9 != 0) {
    if (*(char *)(param_1 + 0x458) == '\x01') {
      lVar5 = *(longlong *)(param_1 + 0x490);
LAB_142fba7b2:
      if (lVar5 == 0) goto LAB_142fba816;
    }
    else if (*(char *)(param_1 + 0x458) == '\x02') {
      lVar5 = *(longlong *)(param_1 + 0x4a0);
      goto LAB_142fba7b2;
    }
    fVar11 = *(float *)(param_1 + 0x6f0) * 0.01;
    fVar12 = fVar11 * *(float *)(param_1 + 0x71c);
    *(float *)(lVar9 + 0xa8) = fVar11;
    *(float *)(*(longlong *)(param_1 + 0x518) + 0xa4) = fVar12;
    lVar9 = *(longlong *)(param_1 + 0x518);
    local_90 = *(float *)(lVar9 + 0xa0);
    *(ulonglong *)(lVar9 + 0xac) = CONCAT44(local_90,fVar12 * fVar2);
    *(float *)(lVar9 + 0xb4) = local_90;
    lVar9 = *(longlong *)(param_1 + 0x518);
  }
LAB_142fba816:
  if (lVar9 != 0) {
    if (*(char *)(param_1 + 0x458) == '\x01') {
      lVar9 = *(longlong *)(param_1 + 0x490);
LAB_142fba842:
      if (lVar9 == 0) goto LAB_142fba872;
    }
    else if (*(char *)(param_1 + 0x458) == '\x02') {
      lVar9 = *(longlong *)(param_1 + 0x4a0);
      goto LAB_142fba842;
    }
    if (*(longlong *)(param_1 + 0x490) != 0) {
      iVar8 = *(int *)(param_1 + 0x6f4);
      if (*(int *)(param_1 + 0x6f4) == -1) {
        iVar8 = 0;
      }
      FUN_14385ea10(*(longlong *)(param_1 + 0x490),iVar8);
      if (*(longlong *)(param_1 + 0x520) != 0) {
        *(int *)(*(longlong *)(param_1 + 0x520) + 0x20) = iVar8;
      }
    }
  }
LAB_142fba872:
  if (*(longlong *)(param_1 + 0x518) != 0) {
    if (*(char *)(param_1 + 0x458) == '\x01') {
      lVar9 = *(longlong *)(param_1 + 0x490);
LAB_142fba8a2:
      if (lVar9 == 0) goto LAB_142fba8c1;
    }
    else if (*(char *)(param_1 + 0x458) == '\x02') {
      lVar9 = *(longlong *)(param_1 + 0x4a0);
      goto LAB_142fba8a2;
    }
    if (*(longlong *)(param_1 + 0x4a0) != 0) {
      iVar8 = *(int *)(param_1 + 0x6f8);
      if (*(int *)(param_1 + 0x6f8) == -1) {
        iVar8 = 0;
      }
      FUN_143861130(*(longlong *)(param_1 + 0x4a0),iVar8);
    }
  }
LAB_142fba8c1:
  if ((*(longlong *)(param_1 + 0x7c0) == 0) || (*(longlong *)(param_1 + 0x7c8) == 0)) {
LAB_142fba948:
    local_90 = *(float *)(param_1 + 0x78c);
    lVar9 = *(longlong *)(param_1 + 0x518);
    local_78 = (float)*(undefined8 *)(param_1 + 0x784) * 0.01;
    fStack_74 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x784) >> 0x20) * 0.01;
    fStack_70 = (local_90 - *(float *)(param_1 + 0x6ec)) * 0.01;
    uStack_6c = 0;
    if (lVar9 != 0) {
      *(float *)(lVar9 + 0x30) = local_78;
      *(float *)(lVar9 + 0x34) = fStack_74;
      *(float *)(lVar9 + 0x38) = fStack_70;
      *(undefined4 *)(lVar9 + 0x3c) = 0;
    }
    if (*(longlong *)(param_1 + 0x490) != 0) {
      FUN_14385eab0(*(longlong *)(param_1 + 0x490),&local_78);
    }
    lVar9 = *(longlong *)(param_1 + 0x4a0);
    if (lVar9 == 0) goto LAB_142fba9b5;
    pfVar10 = &local_78;
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x7c8) + 8);
    LOCK();
    iVar8 = *piVar1;
    if (iVar8 == 0) {
      *piVar1 = 0;
      iVar8 = 0;
    }
    UNLOCK();
    if (iVar8 < 1) goto LAB_142fba948;
    FUN_1422e15c0(param_1 + 0x808,local_88);
    lVar9 = *(longlong *)(param_1 + 0x518);
    local_58 = local_88._0_4_ * 0.01;
    fStack_54 = local_88._4_4_ * 0.01;
    fStack_50 = local_80 * 0.01;
    uStack_4c = 0;
    if (lVar9 != 0) {
      *(float *)(lVar9 + 0x30) = local_58;
      *(float *)(lVar9 + 0x34) = fStack_54;
      *(float *)(lVar9 + 0x38) = fStack_50;
      *(undefined4 *)(lVar9 + 0x3c) = 0;
    }
    if (*(longlong *)(param_1 + 0x490) != 0) {
      FUN_14385eab0(*(longlong *)(param_1 + 0x490),&local_58);
    }
    lVar9 = *(longlong *)(param_1 + 0x4a0);
    if (lVar9 == 0) goto LAB_142fba9b5;
    pfVar10 = &local_58;
  }
  FUN_1438611d0(lVar9,pfVar10);
LAB_142fba9b5:
  lVar9 = *(longlong *)(param_1 + 0x518);
  *(undefined8 *)(param_1 + 0x4dc) = *(undefined8 *)(param_1 + 0x6fc);
  *(undefined8 *)(param_1 + 0x4e4) = *(undefined8 *)(param_1 + 0x704);
  *(undefined8 *)(param_1 + 0x4ec) = *(undefined8 *)(param_1 + 0x70c);
  *(undefined8 *)(param_1 + 0x4f4) = *(undefined8 *)(param_1 + 0x714);
  *(undefined8 *)(param_1 + 0x4fc) = *(undefined8 *)(param_1 + 0x71c);
  *(undefined8 *)(param_1 + 0x504) = *(undefined8 *)(param_1 + 0x724);
  *(undefined8 *)(param_1 + 0x50c) = *(undefined8 *)(param_1 + 0x72c);
  if (lVar9 != 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x4f8);
    uVar6 = *(undefined4 *)(param_1 + 0x4e0);
    uVar7 = *(undefined4 *)(param_1 + 0x4e4);
    uStack_6c = (undefined4)*(undefined8 *)(param_1 + 0x4e8);
    uStack_68 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x4e8) >> 0x20);
    uStack_64 = (undefined4)*(undefined8 *)(param_1 + 0x4f0);
    uStack_60 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x4f0) >> 0x20);
    *(undefined4 *)(lVar9 + 0xbc) = *(undefined4 *)(param_1 + 0x4dc);
    *(undefined4 *)(lVar9 + 0xc0) = uVar6;
    *(undefined4 *)(lVar9 + 0xc4) = uVar7;
    *(undefined4 *)(lVar9 + 200) = uStack_6c;
    *(ulonglong *)(lVar9 + 0xcc) = CONCAT44(uStack_64,uStack_68);
    *(ulonglong *)(lVar9 + 0xd4) = CONCAT44(uVar4,uStack_60);
  }
  return;
}



// FUNCTION 142fbaa90 FUN_142fbaa90 body=392 status=ok
// SIG undefined FUN_142fbaa90(void)

void FUN_142fbaa90(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  plVar2 = (longlong *)*param_1;
  iVar1 = *(int *)(param_1 + 1);
  if (plVar2 == plVar2 + (longlong)iVar1 * 4) {
    return;
  }
  plVar9 = plVar2 + 3;
LAB_142fbaac7:
  if (*plVar9 != 0) {
    plVar4 = (longlong *)FUN_142ba7330();
    plVar7 = (longlong *)*plVar9;
    for (plVar5 = plVar7; plVar5 != (longlong *)0x0; plVar5 = (longlong *)plVar5[6]) {
      if (plVar5 == plVar4) {
        if (plVar7 != (longlong *)0x0) {
          plVar4 = (longlong *)FUN_142ba7330();
          plVar5 = plVar7;
          goto LAB_142fbab10;
        }
        break;
      }
    }
  }
  goto LAB_142fbabed;
  while (plVar5 = (longlong *)plVar5[6], plVar5 != (longlong *)0x0) {
LAB_142fbab10:
    if (plVar5 == plVar4) {
      plVar4 = (longlong *)FUN_142ba7330();
      plVar5 = plVar7;
      goto LAB_142fbab30;
    }
  }
  goto LAB_142fbabe3;
  while (plVar5 = (longlong *)plVar5[6], plVar8 = (longlong *)0x0, plVar5 != (longlong *)0x0) {
LAB_142fbab30:
    plVar8 = plVar7;
    if (plVar5 == plVar4) break;
  }
  plVar5 = (longlong *)FUN_142ba7620();
  if (plVar8 == plVar5) {
    lVar6 = FUN_142f9d030();
    if (lVar6 != 0) {
      plVar7 = *(longlong **)(lVar6 + 0x30);
      goto LAB_142fbabe6;
    }
  }
  else {
    plVar4 = (longlong *)FUN_142ba7330();
    plVar5 = plVar7;
    do {
      if (plVar5 == plVar4) {
        lVar6 = plVar7[0x1f];
        if (lVar6 == 0) {
          (**(code **)(*plVar7 + 0x368))(plVar7);
          lVar6 = plVar7[0x1f];
          if (lVar6 == 0) break;
        }
        plVar7 = *(longlong **)(lVar6 + 0x28);
        if (plVar7 != (longlong *)0x0) {
          lVar6 = FUN_142fbe640();
          if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
              != lVar6 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) goto LAB_142fbabe6;
        }
        break;
      }
      plVar5 = (longlong *)plVar5[6];
    } while (plVar5 != (longlong *)0x0);
  }
LAB_142fbabe3:
  plVar7 = (longlong *)0x0;
LAB_142fbabe6:
  plVar9[-3] = (longlong)plVar7;
  *plVar9 = 0;
LAB_142fbabed:
  plVar7 = plVar9 + 1;
  plVar9 = plVar9 + 4;
  if (plVar7 == plVar2 + (longlong)iVar1 * 4) {
    return;
  }
  goto LAB_142fbaac7;
}



// FUNCTION 142fbac20 FUN_142fbac20 body=51 status=ok
// SIG undefined FUN_142fbac20(void)

void FUN_142fbac20(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar1 = UNavAreaBase::GetPrivateStaticClass();
    lVar2 = param_1;
    do {
      if (lVar2 == lVar1) goto LAB_142fbac46;
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
  param_1 = 0;
LAB_142fbac46:
  FUN_142fa27a0(param_1);
  return;
}



// FUNCTION 142fbac60 FUN_142fbac60 body=334 status=ok
// SIG undefined FUN_142fbac60(void)

void FUN_142fbac60(longlong param_1)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined1 local_b8 [176];
  
  lVar5 = *(longlong *)(param_1 + 0x27a8);
  if ((*(longlong **)(param_1 + 0x220) == (longlong *)0x0) ||
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x220) + 0x780))(), cVar3 != '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (lVar5 != 0) {
    if (!bVar2) {
      *(undefined8 *)(param_1 + 0x27a8) = 0;
      puVar4 = (undefined8 *)FUN_142f88d20(local_b8);
      uVar1 = puVar4[1];
      *(undefined8 *)(param_1 + 0x27b8) = *puVar4;
      *(undefined8 *)(param_1 + 0x27c0) = uVar1;
      uVar1 = puVar4[3];
      *(undefined8 *)(param_1 + 0x27c8) = puVar4[2];
      *(undefined8 *)(param_1 + 0x27d0) = uVar1;
      uVar1 = puVar4[5];
      *(undefined8 *)(param_1 + 0x27d8) = puVar4[4];
      *(undefined8 *)(param_1 + 0x27e0) = uVar1;
      uVar1 = puVar4[7];
      *(undefined8 *)(param_1 + 0x27e8) = puVar4[6];
      *(undefined8 *)(param_1 + 0x27f0) = uVar1;
      uVar1 = puVar4[9];
      *(undefined8 *)(param_1 + 0x27f8) = puVar4[8];
      *(undefined8 *)(param_1 + 0x2800) = uVar1;
      uVar1 = puVar4[0xb];
      *(undefined8 *)(param_1 + 0x2808) = puVar4[10];
      *(undefined8 *)(param_1 + 0x2810) = uVar1;
      uVar1 = puVar4[0xd];
      *(undefined8 *)(param_1 + 0x2818) = puVar4[0xc];
      *(undefined8 *)(param_1 + 0x2820) = uVar1;
      uVar1 = puVar4[0xf];
      *(undefined8 *)(param_1 + 0x2828) = puVar4[0xe];
      *(undefined8 *)(param_1 + 0x2830) = uVar1;
      uVar1 = puVar4[0x11];
      *(undefined8 *)(param_1 + 0x2838) = puVar4[0x10];
      *(undefined8 *)(param_1 + 0x2840) = uVar1;
      uVar1 = puVar4[0x13];
      *(undefined8 *)(param_1 + 0x2848) = puVar4[0x12];
      *(undefined8 *)(param_1 + 0x2850) = uVar1;
      *(undefined8 *)(param_1 + 0x2858) = puVar4[0x14];
      return;
    }
    if (lVar5 != 0) {
      return;
    }
  }
  if (bVar2) {
    lVar5 = *(longlong *)(param_1 + 0x120);
    if (lVar5 == 0) {
      lVar5 = FUN_1423407b0(param_1);
    }
    lVar5 = FUN_142f9cfb0(lVar5,0);
    *(longlong *)(param_1 + 0x27a8) = lVar5;
    if ((lVar5 == 0) || (*(longlong *)(lVar5 + 0xb50) == 0)) {
      uVar6 = 0x42c80000;
    }
    else {
      uVar6 = *(undefined4 *)(*(longlong *)(lVar5 + 0xb50) + 0xf4);
    }
    *(undefined4 *)(param_1 + 0x2108) = uVar6;
    FUN_142fb0a50(param_1);
  }
  return;
}



// FUNCTION 142fbadb0 FUN_142fbadb0 body=789 status=ok
// SIG undefined FUN_142fbadb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142fbadb0(undefined8 param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  uint local_a8;
  uint local_a4;
  undefined1 local_a0 [8];
  undefined8 local_98;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  undefined1 local_50 [8];
  undefined1 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_d0 = &local_d8;
  plVar9 = (longlong *)0x0;
  iVar10 = 0;
  local_b0 = (longlong *)0x0;
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (undefined1 *)0x0;
  local_40 = 0;
  local_a4 = 0;
  local_d8 = param_1;
  local_98 = param_1;
  local_c8 = FUN_14073d760(&local_d8,DAT_146b440a8);
  puVar3 = local_d0;
  local_c0 = &local_d8;
  local_b8 = 0;
  puVar5 = (undefined8 *)FUN_14073d760(local_d0,local_c8);
  puVar6 = (undefined8 *)FUN_14073d760(local_c0,local_b8);
  plVar12 = plVar9;
  plVar14 = plVar9;
  do {
    if (puVar5 == puVar6) {
      uVar11 = 0;
      iVar8 = 1;
      uVar13 = (ulonglong)((longlong)(plVar9 + iVar10) + (7 - (longlong)plVar9)) >> 3;
      if (plVar9 + iVar10 < plVar9) {
        uVar13 = uVar11;
      }
      if (uVar13 != 0) {
        do {
          lVar2 = *plVar9;
          do {
            iVar10 = iVar8;
            if ((int)local_80 != local_54) {
              puVar7 = local_50;
              if (local_48 != (undefined1 *)0x0) {
                puVar7 = local_48;
              }
              for (iVar4 = *(int *)(puVar7 + ((longlong)local_40 - 1U & (longlong)iVar10) * 4);
                  iVar4 != -1; iVar4 = *(int *)(local_88 + 4 + (longlong)iVar4 * 0xc)) {
                if (*(int *)(local_88 + (longlong)iVar4 * 0xc) == iVar10) goto LAB_142fbafcc;
              }
            }
            iVar4 = -1;
LAB_142fbafcc:
            iVar8 = iVar10 + 1;
          } while (iVar4 != -1);
          *(int *)(lVar2 + 0x1a0) = iVar10;
          UObjectBaseUtility::MarkPackageDirty(lVar2);
          plVar9 = plVar9 + 1;
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar13);
      }
      local_d8 = local_98;
      local_d0 = &local_d8;
      local_c8 = FUN_14073d760(&local_d8,DAT_146b440a8);
      puVar3 = local_d0;
      local_c0 = &local_d8;
      local_b8 = 0;
      puVar5 = (undefined8 *)FUN_14073d760(local_d0,local_c8);
      puVar6 = (undefined8 *)FUN_14073d760(local_c0,local_b8);
      for (; puVar5 != puVar6; puVar5 = (undefined8 *)FUN_14073d760(puVar3,*puVar5)) {
        FUN_142fbb0d0(puVar5[2]);
      }
      if (local_b0 != (longlong *)0x0) {
        FMemory::Free();
      }
      local_40 = 0;
      if (local_48 != (undefined1 *)0x0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_88);
      return;
    }
    lVar2 = puVar5[2];
    uVar1 = *(uint *)(lVar2 + 0x1a0);
    if (uVar1 == DAT_14676e178) {
LAB_142fbaef7:
      iVar10 = (int)plVar12;
      local_a8 = iVar10 + 1;
      if ((int)plVar14 < (int)local_a8) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_b0,plVar12);
        plVar14 = (longlong *)(ulonglong)local_a4;
      }
      plVar12 = (longlong *)(ulonglong)local_a8;
      local_b0[iVar10] = lVar2;
      plVar9 = local_b0;
    }
    else {
      if ((int)local_80 != local_54) {
        puVar7 = local_50;
        if (local_48 != (undefined1 *)0x0) {
          puVar7 = local_48;
        }
        for (iVar10 = *(int *)(puVar7 + (longlong)(int)(local_40 - 1U & uVar1) * 4); iVar10 != -1;
            iVar10 = *(int *)(local_88 + 4 + (longlong)iVar10 * 0xc)) {
          if (*(uint *)(local_88 + (longlong)iVar10 * 0xc) == uVar1) {
            if (iVar10 != -1) goto LAB_142fbaef7;
            break;
          }
        }
      }
      FUN_14044be50(&local_88,local_a0,lVar2 + 0x1a0,0);
    }
    iVar10 = (int)plVar12;
    puVar5 = (undefined8 *)FUN_14073d760(puVar3,*puVar5);
  } while( true );
}



// FUNCTION 142fbb0d0 FUN_142fbb0d0 body=771 status=ok
// SIG undefined FUN_142fbb0d0(void)

void FUN_142fbb0d0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  char cVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  char cVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  undefined1 local_res18;
  undefined1 local_res20;
  
  lVar8 = *(longlong *)(param_1 + 0x120);
  if ((lVar8 == 0) && (lVar8 = FUN_1423407b0(), lVar8 == 0)) {
    return;
  }
  if (*(longlong *)(param_1 + 0x118) == 0) {
    return;
  }
  cVar7 = UWorld::IsGameWorld(lVar8);
  if (cVar7 == '\0') {
    FUN_142f9cc50(param_1);
  }
  if (*(char *)(param_1 + 0x180) == '\0') {
    cVar10 = '\x02';
  }
  else {
    if (*(char *)(param_1 + 0x180) == '\x01') {
      if ((*(char *)(param_1 + 0x179) != '\0') && (*(char *)(param_1 + 0x1f8) != '\x02')) {
        cVar10 = '\x03';
        goto LAB_142fbb16a;
      }
    }
    else if (*(char *)(param_1 + 0x1f8) != '\x02') {
      cVar10 = (*(char *)(param_1 + 0x1f8) == '\x01') + '\x02';
      goto LAB_142fbb16a;
    }
    cVar10 = '\x04';
  }
LAB_142fbb16a:
  puVar14 = *(undefined4 **)(param_1 + 0x1b0);
  puVar11 = puVar14 + (longlong)*(int *)(param_1 + 0x1b8) * 8;
  do {
    if (puVar14 == puVar11) {
      return;
    }
    lVar8 = *(longlong *)(puVar14 + 6);
    if (lVar8 != 0) {
      uVar4 = *(undefined4 *)(lVar8 + 0x224);
      uVar5 = *(undefined4 *)(lVar8 + 0x228);
      iVar16 = 3;
      *puVar14 = *(undefined4 *)(lVar8 + 0x220);
      puVar14[1] = uVar4;
      puVar14[2] = uVar5;
      uVar4 = *(undefined4 *)(lVar8 + 0x224);
      uVar5 = *(undefined4 *)(lVar8 + 0x228);
      puVar14[3] = *(undefined4 *)(lVar8 + 0x220);
      puVar14[4] = uVar4;
      puVar14[5] = uVar5;
      local_res18 = *(undefined1 *)(lVar8 + 0x450);
      cVar1 = *(char *)(lVar8 + 0x451);
      lVar17 = *(longlong *)(param_1 + 0x188);
      iVar15 = *(int *)(param_1 + 0x1a0);
      local_res20 = *(undefined1 *)(lVar8 + 0x460);
      lVar3 = *(longlong *)(lVar8 + 0x458);
      iVar2 = *(int *)(lVar8 + 0x464);
      uVar12 = *(undefined8 *)(lVar8 + 0x468);
      lVar8 = lVar17;
      if (*(char *)(param_1 + 0x178) == '\0') {
LAB_142fbb2b2:
        if (lVar8 == 0) {
LAB_142fbb2ce:
          iVar16 = 0;
          goto LAB_142fbb2d9;
        }
        lVar9 = FUN_142f9d030();
        lVar8 = 0;
        if (lVar9 != 0) {
          lVar8 = *(longlong *)(lVar9 + 0x40);
        }
        cVar13 = cVar10;
        if (*(longlong *)(param_1 + 0x188) == lVar8) goto LAB_142fbb2ce;
      }
      else {
        lVar8 = FUN_142f9d030();
        if (lVar8 == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = *(longlong *)(lVar8 + 0x48);
        }
        lVar8 = *(longlong *)(param_1 + 0x188);
        if (lVar8 != lVar9) goto LAB_142fbb2b2;
        iVar16 = 1;
LAB_142fbb2d9:
        local_res18 = 0;
        lVar17 = 0;
        uVar12 = 0;
        local_res20 = 0;
        iVar15 = -1;
        cVar13 = '\0';
      }
      lVar8 = *(longlong *)(puVar14 + 6);
      if ((((*(int *)(lVar8 + 0x448) != iVar16) || (lVar17 != lVar3)) || (iVar15 != iVar2)) ||
         (cVar13 != cVar1)) {
        if ((cVar13 == '\x03') || (cVar1 == '\x03')) {
          bVar6 = true;
        }
        else {
          bVar6 = false;
        }
        if ((cVar7 == '\0') || (!bVar6)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
          FUN_142339350(lVar8);
          lVar8 = *(longlong *)(puVar14 + 6);
        }
        *(int *)(lVar8 + 0x448) = iVar16;
        lVar8 = *(longlong *)(puVar14 + 6);
        *(undefined1 *)(lVar8 + 0x450) = local_res18;
        *(char *)(lVar8 + 0x451) = cVar13;
        *(undefined1 *)(lVar8 + 0x460) = local_res20;
        *(longlong *)(lVar8 + 0x458) = lVar17;
        *(int *)(lVar8 + 0x464) = iVar15;
        *(undefined8 *)(lVar8 + 0x468) = uVar12;
        if (bVar6) {
          FUN_142338140(*(undefined8 *)(puVar14 + 6));
        }
      }
    }
    puVar14 = puVar14 + 8;
  } while( true );
}



// FUNCTION 142fbb3e0 FUN_142fbb3e0 body=1554 status=ok
// SIG undefined FUN_142fbb3e0(void)

void FUN_142fbb3e0(longlong *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 local_res8;
  longlong local_res10;
  undefined8 local_c8;
  float local_c0;
  longlong local_b8;
  undefined4 local_b0;
  longlong local_a8;
  float local_a0;
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  longlong lStack_80;
  float local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  float fStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float fStack_54;
  undefined8 uStack_50;
  undefined1 local_48 [5];
  undefined1 uStack_43;
  undefined2 uStack_42;
  undefined1 local_40 [12];
  undefined1 local_34 [12];
  undefined1 local_28 [32];
  
  if (*(char *)((longlong)param_1 + 0x671) != '\0') {
    local_c0 = *(float *)((longlong)param_1 + 0x43c);
    lVar5 = param_1[0x86];
    local_c8 = *(undefined8 *)((longlong)param_1 + 0x434);
    local_res10 = param_1[0x88];
    *(undefined1 *)(param_1 + 0x86) = 0;
    if (((char)lVar5 != '\0') && ((char)param_1[0x135] != '\x02')) {
      local_res8 = 0xffffffffffffffff;
      cVar6 = FUN_142fb54d0(param_1 + 0x126,&local_c8,&local_res10,&local_res8);
      if (cVar6 != '\0') {
        *(undefined1 *)(param_1 + 0x135) = 2;
      }
    }
  }
  FUN_142f936c0(param_1 + 0x86,param_1 + 0xeb);
  local_98 = param_1[0x60];
  uStack_84 = (undefined4)param_1[0xee];
  lStack_80 = param_1[99];
  uStack_90 = (undefined4)param_1[0x61];
  local_68 = param_1[0x66];
  local_78 = (float)param_1[100];
  uStack_74 = (undefined4)((ulonglong)param_1[100] >> 0x20);
  uStack_70 = (undefined4)param_1[0x65];
  uStack_6c = (undefined4)((ulonglong)param_1[0x65] >> 0x20);
  local_b0 = DAT_146b43f38;
  uStack_50 = param_1[0x69];
  fStack_60 = (float)param_1[0x67];
  uStack_5c = (undefined4)((ulonglong)param_1[0x67] >> 0x20);
  _local_48 = param_1[0x6a];
  uStack_58 = (undefined4)param_1[0x68];
  fStack_54 = (float)((ulonglong)param_1[0x68] >> 0x20);
  uStack_8c = (undefined4)param_1[0xed];
  uStack_88 = (undefined4)((ulonglong)param_1[0xed] >> 0x20);
  local_b8 = DAT_146b43f30;
  if (*(char *)((longlong)param_1 + 0x365) == '\0') {
    if ((int)param_1[0x4e] == 3) {
      if ((*(char *)((longlong)param_1 + 0x364) == '\0') && ((char)param_1[0x6b] == '\0')) {
        plVar7 = (longlong *)FUN_142f9ffb0(param_1 + 0x86,local_40);
      }
      else {
        plVar7 = (longlong *)FUN_142fa0ab0(param_1,local_34);
      }
      local_b8 = *plVar7;
      local_b0 = (undefined4)plVar7[1];
    }
  }
  else {
    local_b8 = param_1[0x6d];
    local_b0 = (undefined4)param_1[0x6e];
  }
  FUN_142d9bf60((longlong)param_1 + 0x374,&local_a8,&local_b8);
  lStack_80 = local_a8;
  local_78 = local_a0;
  puVar8 = (undefined8 *)FUN_142f911a0(param_1,local_28);
  uStack_6c = *(undefined4 *)(puVar8 + 1);
  uStack_74 = (undefined4)*puVar8;
  uStack_70 = (undefined4)((ulonglong)*puVar8 >> 0x20);
  if (((int)param_1[0x4e] == 3) && (cVar6 = FUN_142fa53c0(param_1), cVar6 != '\0')) {
    if ((*(char *)((longlong)param_1 + 0x364) == '\0') && ((char)param_1[0x6b] == '\0')) {
      uVar9 = (undefined4)param_1[0x8d];
      uVar10 = (undefined4)((ulonglong)param_1[0x8d] >> 0x20);
      fStack_60 = *(float *)(param_1 + 0x8e);
    }
    else {
      uVar4 = *(undefined8 *)(param_1[0x4f] + 0x20);
      uVar9 = (undefined4)uVar4;
      uVar10 = (undefined4)((ulonglong)uVar4 >> 0x20);
      fStack_60 = *(float *)(param_1[0x4f] + 0x28);
    }
  }
  else {
    uVar9 = (undefined4)*(undefined8 *)((longlong)param_1 + 0x784);
    uVar10 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x784) >> 0x20);
    fStack_60 = *(float *)((longlong)param_1 + 0x78c) - *(float *)((longlong)param_1 + 0x6ec);
    local_c0 = fStack_60;
  }
  local_68 = CONCAT44(uVar10,uVar9);
  if (((int)param_1[0x4e] == 3) && (cVar6 = FUN_142fa53c0(param_1), cVar6 != '\0')) {
    if ((*(char *)((longlong)param_1 + 0x364) == '\0') && ((char)param_1[0x6b] == '\0')) {
      uStack_5c = (undefined4)*(undefined8 *)((longlong)param_1 + 0x474);
      uStack_58 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x474) >> 0x20);
      fStack_54 = *(float *)((longlong)param_1 + 0x47c);
    }
    else {
      uVar4 = *(undefined8 *)(param_1[0x4f] + 0x20);
      uStack_5c = (undefined4)uVar4;
      uStack_58 = (undefined4)((ulonglong)uVar4 >> 0x20);
      fStack_54 = *(float *)(param_1[0x4f] + 0x28);
    }
  }
  else {
    uStack_5c = (undefined4)*(undefined8 *)((longlong)param_1 + 0x784);
    uStack_58 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x784) >> 0x20);
    fStack_54 = *(float *)((longlong)param_1 + 0x78c) - *(float *)((longlong)param_1 + 0x6ec);
    local_c0 = fStack_54;
  }
  uStack_50 = param_1[0x90];
  _local_48 = CONCAT44(stack0xffffffffffffffbc,(int)param_1[0x91]);
  cVar6 = (**(code **)(*param_1 + 0x4c8))(param_1);
  local_48 = (undefined1  [5])CONCAT14(cVar6,local_48._0_4_);
  if (cVar6 == '\0') {
LAB_142fbb6bf:
    _local_48 = (uint6)(uint5)local_48;
  }
  else {
    cVar6 = (**(code **)(*param_1 + 0x4c0))(param_1);
    _local_48 = CONCAT15(1,local_48);
    if (cVar6 == '\0') goto LAB_142fbb6bf;
  }
  param_1[0x60] = local_98;
  param_1[0x61] = CONCAT44(uStack_8c,uStack_90);
  param_1[0x62] = CONCAT44(uStack_84,uStack_88);
  param_1[99] = lStack_80;
  param_1[100] = CONCAT44(uStack_74,local_78);
  param_1[0x65] = CONCAT44(uStack_6c,uStack_70);
  param_1[0x66] = local_68;
  param_1[0x67] = CONCAT44(uStack_5c,fStack_60);
  *(undefined4 *)(param_1 + 0x68) = uStack_58;
  *(float *)((longlong)param_1 + 0x344) = fStack_54;
  *(undefined4 *)(param_1 + 0x69) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_1 + 0x34c) = uStack_50._4_4_;
  param_1[0x6a] = _local_48;
  cVar6 = FUN_142fa8b90(param_1);
  if (cVar6 != '\0') {
    if ((int)param_1[0x4e] == 3) {
      fVar1 = *(float *)((longlong)param_1 + 0x324);
      if (((((-(float)DAT_14676e1b0 < fVar1) && (fVar1 < (float)DAT_14676e1b0)) &&
           (fVar2 = *(float *)(param_1 + 0x65), -DAT_14676e1b0._4_4_ < fVar2)) &&
          ((fVar2 < DAT_14676e1b0._4_4_ &&
           (fVar3 = *(float *)((longlong)param_1 + 0x32c), -DAT_14676e1b8 < fVar3)))) &&
         ((fVar3 < DAT_14676e1b8 && (((fVar1 != 0.0 || (fVar2 != 0.0)) || (fVar3 != 0.0)))))) {
        local_c0 = *(float *)((longlong)param_1 + 0x32c) * 512.0 +
                   *(float *)((longlong)param_1 + 0x78c);
        local_a8 = CONCAT44(*(float *)(param_1 + 0x65) * 512.0 +
                            (float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x784) >> 0x20),
                            fVar1 * 512.0 + (float)*(undefined8 *)((longlong)param_1 + 0x784));
        local_a0 = local_c0;
        (**(code **)(*(longlong *)param_1[0xdb] + 0x8b8))((longlong *)param_1[0xdb],&local_a8,1);
      }
    }
    else if ((int)param_1[0x4e] == 0) {
      (**(code **)(*(longlong *)param_1[0xdb] + 0x8c8))((longlong *)param_1[0xdb],1);
    }
  }
  FUN_142fb9520(param_1);
  FUN_142fb8620(param_1 + 0xa5);
  FUN_142fb90e0(param_1 + 0xca);
  plVar7 = param_1 + 0x126;
  if ((((param_1[0x129] != 0) && (param_1[0x128] != 0)) && (*plVar7 != 0)) &&
     (lVar5 = param_1[0x12a], lVar5 != 0)) {
    cVar6 = (char)param_1[0x135];
    if (cVar6 == '\0') {
      cVar6 = FUN_142fa8000(plVar7);
      if (cVar6 != '\0') {
        *(undefined1 *)(param_1 + 0x135) = 1;
        *(undefined4 *)((longlong)param_1 + 0x9ac) = *(undefined4 *)(*plVar7 + 0x790);
      }
    }
    else {
      if (cVar6 == '\x01') {
        cVar6 = FUN_142fa8000(plVar7);
        if (cVar6 != '\0') {
          if ((((param_1[0x129] == 0) || (param_1[0x128] == 0)) ||
              ((*plVar7 == 0 ||
               (((longlong *)param_1[0x12a] == (longlong *)0x0 ||
                (*(float *)(*plVar7 + 0x790) - *(float *)((longlong)param_1 + 0x9ac) < 0.5)))))) ||
             ((cVar6 = (**(code **)(*(longlong *)param_1[0x12a] + 0x560))(), cVar6 == '\0' &&
              (cVar6 = (**(code **)(*(longlong *)param_1[0x12a] + 0x570))(), cVar6 == '\0'))))
          goto LAB_142fbb9c1;
          cVar6 = FUN_142fb5980(plVar7);
          if (cVar6 != '\0') {
            *(undefined1 *)(param_1 + 0x135) = 2;
            goto LAB_142fbb9c1;
          }
        }
      }
      else {
        if (cVar6 != '\x02') goto LAB_142fbb9c1;
        if (*(char *)(lVar5 + 0x248) == '\0') {
          if ((param_1[0x13a] == 0) ||
             (cVar6 = FUN_142d86a70(lVar5 + 0x2428,param_1[0x13a]), cVar6 == '\0')) {
            FUN_142fb71e0(plVar7,1);
            *(undefined1 *)(param_1 + 0x135) = 0;
            cVar6 = FUN_142fa53c0(param_1[0x128]);
            if (cVar6 != '\0') {
              (**(code **)(*(longlong *)param_1[0x128] + 0x438))((longlong *)param_1[0x128],0);
            }
          }
          goto LAB_142fbb9c1;
        }
        FUN_142fb71e0(plVar7,0);
      }
      *(undefined1 *)(param_1 + 0x135) = 0;
    }
  }
LAB_142fbb9c1:
  FUN_142f96a70(param_1 + 0x13d);
  FUN_142fb5d80(param_1 + 0xf2);
  return;
}



// FUNCTION 142fbba00 FUN_142fbba00 body=659 status=ok
// SIG undefined FUN_142fbba00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fbba00(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  longlong local_d8;
  float local_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [168];
  
  cVar4 = FUN_142fa8b90();
  if (cVar4 != '\0') {
    (**(code **)(*param_1 + 0x4a0))(param_1,&local_d8);
    if ((local_d8 != param_1[0xe7]) || (CONCAT44(uStack_cc,local_d0) != param_1[0xe8])) {
      FUN_142fb4630(param_1 + 0x86,&local_d8);
    }
    plVar5 = (longlong *)(**(code **)(*param_1 + 0x4d0))(param_1,local_b0);
    lVar3 = plVar5[1];
    param_1[0xdd] = *plVar5;
    param_1[0xde] = lVar3;
    lVar3 = plVar5[3];
    param_1[0xdf] = plVar5[2];
    param_1[0xe0] = lVar3;
    lVar3 = plVar5[5];
    param_1[0xe1] = plVar5[4];
    param_1[0xe2] = lVar3;
    lVar3 = plVar5[7];
    param_1[0xe3] = plVar5[6];
    param_1[0xe4] = lVar3;
    lVar3 = plVar5[9];
    param_1[0xe5] = plVar5[8];
    param_1[0xe6] = lVar3;
    lVar3 = plVar5[0xb];
    param_1[0xe7] = plVar5[10];
    param_1[0xe8] = lVar3;
    lVar3 = plVar5[0xd];
    param_1[0xe9] = plVar5[0xc];
    param_1[0xea] = lVar3;
    lVar3 = plVar5[0xf];
    param_1[0xeb] = plVar5[0xe];
    param_1[0xec] = lVar3;
    uVar1 = *(undefined4 *)((longlong)plVar5 + 0x84);
    lVar3 = plVar5[0x11];
    uVar2 = *(undefined4 *)((longlong)plVar5 + 0x8c);
    *(int *)(param_1 + 0xed) = (int)plVar5[0x10];
    *(undefined4 *)((longlong)param_1 + 0x76c) = uVar1;
    *(int *)(param_1 + 0xee) = (int)lVar3;
    *(undefined4 *)((longlong)param_1 + 0x774) = uVar2;
    uVar1 = *(undefined4 *)((longlong)plVar5 + 0x94);
    lVar3 = plVar5[0x13];
    uVar2 = *(undefined4 *)((longlong)plVar5 + 0x9c);
    *(int *)(param_1 + 0xef) = (int)plVar5[0x12];
    *(undefined4 *)((longlong)param_1 + 0x77c) = uVar1;
    *(int *)(param_1 + 0xf0) = (int)lVar3;
    *(undefined4 *)((longlong)param_1 + 0x784) = uVar2;
    param_1[0xf1] = plVar5[0x14];
    FUN_142fba610(param_1);
    FUN_142fba240(param_1);
    if (((((longlong *)param_1[0xdc] != (longlong *)0x0) &&
         (cVar4 = (**(code **)(*(longlong *)param_1[0xdc] + 0x570))(), cVar4 == '\0')) &&
        (cVar4 = FUN_1407c3030(param_1[0xdc] + 0x8b0), cVar4 == '\0')) &&
       ((cVar4 = FUN_1407c3030(param_1[0xdc] + 0x948), cVar4 == '\0' &&
        (cVar4 = (**(code **)(*(longlong *)param_1[0xdc] + 0xa68))(), cVar4 == '\0')))) {
      if ((*(longlong *)(param_1[0xdc] + 0x220) != 0) &&
         ((plVar5 = *(longlong **)(*(longlong *)(param_1[0xdc] + 0x220) + 0x4c0),
          plVar5 != (longlong *)0x0 && (cVar4 = (**(code **)(*plVar5 + 0x408))(), cVar4 != '\0'))))
      {
        return;
      }
      cVar4 = (**(code **)(*(longlong *)param_1[0xdc] + 0x560))();
      if (((cVar4 == '\0') && (*(char *)(param_1[0xdc] + 0x248) != '\0')) &&
         (cVar4 = FUN_142cf3960(), cVar4 == '\0')) {
        return;
      }
      plVar5 = (longlong *)param_1[0xdc];
      if (((char)plVar5[0x49] != '\x02') && ((char)plVar5[0x96] == '\x02')) {
        local_c8 = _DAT_1468b5d90;
        local_d8 = *(longlong *)((longlong)param_1 + 0x784);
        local_c0 = DAT_1468b5d98;
        local_d0 = *(float *)((longlong)param_1 + 0x78c) - *(float *)((longlong)param_1 + 0x6ec);
        local_b8 = 0;
        cVar4 = (**(code **)(*plVar5 + 0x8f0))(plVar5,&local_d8,&local_c8);
        if (cVar4 != '\0') {
          fVar7 = (float)local_c8 - (float)*(undefined8 *)((longlong)param_1 + 0x784);
          fVar6 = local_c8._4_4_ -
                  (float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x784) >> 0x20);
          if (fVar6 * fVar6 + fVar7 * fVar7 <= 1.0) {
            (**(code **)(*(longlong *)param_1[0xdc] + 0x5a0))((longlong *)param_1[0xdc],2);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142fbbca0 FUN_142fbbca0 body=793 status=ok
// SIG undefined FUN_142fbbca0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142fbbca0(undefined8 param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined8 *local_1c0;
  undefined8 local_1b8;
  undefined8 *local_1b0;
  undefined8 local_1a8;
  undefined1 local_1a0 [8];
  longlong local_198;
  undefined8 local_190;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  int local_164;
  undefined1 local_160 [8];
  undefined1 *local_158;
  int local_150;
  longlong local_148 [32];
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  local_1c0 = &local_1c8;
  uVar11 = 0;
  local_198 = 0;
  local_190 = 0;
  local_178 = 0;
  local_170 = 0;
  local_164 = 0;
  local_158 = (undefined1 *)0x0;
  local_150 = 0;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  local_168 = 0xffffffff;
  local_1c8 = param_1;
  local_1b8 = FUN_14073d760(&local_1c8,DAT_146b440d8);
  puVar3 = local_1c0;
  local_1b0 = &local_1c8;
  local_1a8 = 0;
  puVar5 = (undefined8 *)FUN_14073d760(local_1c0,local_1b8);
  puVar6 = (undefined8 *)FUN_14073d760(local_1b0,local_1a8);
  uVar12 = local_40;
  while (local_40._0_4_ = (int)uVar12, local_40 = uVar12, puVar5 != puVar6) {
    lVar2 = puVar5[2];
    uVar1 = *(uint *)(lVar2 + 0x6f0);
    if (uVar1 == DAT_14676e174) {
LAB_142fbbe09:
      lVar9 = (longlong)(int)local_40;
      local_40._0_4_ = (int)local_40 + 1;
      local_40._4_4_ = (int)(uVar12 >> 0x20);
      if (local_40._4_4_ < (int)local_40) {
        TArray<FInventoryItem_*,TInlineAllocator<32,FDefaultAllocator>_>::ResizeGrow
                  (local_148,uVar12 & 0xffffffff);
      }
      plVar8 = local_148;
      if (local_48 != (longlong *)0x0) {
        plVar8 = local_48;
      }
      plVar8[lVar9] = lVar2;
    }
    else {
      if ((int)local_190 != local_164) {
        puVar7 = local_160;
        if (local_158 != (undefined1 *)0x0) {
          puVar7 = local_158;
        }
        for (iVar10 = *(int *)(puVar7 + (longlong)(int)(local_150 - 1U & uVar1) * 4); iVar10 != -1;
            iVar10 = *(int *)(local_198 + 4 + (longlong)iVar10 * 0xc)) {
          if (*(uint *)(local_198 + (longlong)iVar10 * 0xc) == uVar1) {
            if (iVar10 != -1) goto LAB_142fbbe09;
            break;
          }
        }
      }
      FUN_14044be50(&local_198,local_1a0,lVar2 + 0x6f0,0);
    }
    puVar5 = (undefined8 *)FUN_14073d760(puVar3,*puVar5);
    uVar12 = local_40;
  }
  plVar8 = local_148;
  if (local_48 != (longlong *)0x0) {
    plVar8 = local_48;
  }
  uVar12 = (longlong)(int)local_40 & 0x1fffffffffffffff;
  if (plVar8 + (int)local_40 < plVar8) {
    uVar12 = uVar11;
  }
  uVar13 = uVar11;
  if (uVar12 == 0) {
LAB_142fbbf43:
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_150 = 0;
    if (local_158 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_198);
    return;
  }
LAB_142fbbea0:
  lVar2 = *plVar8;
  do {
    iVar10 = (int)uVar11;
    if ((int)local_190 != local_164) {
      puVar7 = local_160;
      if (local_158 != (undefined1 *)0x0) {
        puVar7 = local_158;
      }
      for (iVar4 = *(int *)(puVar7 + ((longlong)local_150 - 1U & (longlong)iVar10) * 4); iVar4 != -1
          ; iVar4 = *(int *)(local_198 + 4 + (longlong)iVar4 * 0xc)) {
        if (*(int *)(local_198 + (longlong)iVar4 * 0xc) == iVar10) goto LAB_142fbbf0c;
      }
    }
    iVar4 = -1;
LAB_142fbbf0c:
    if (iVar4 == -1) break;
    uVar11 = (ulonglong)(iVar10 + 1U);
  } while( true );
  *(int *)(lVar2 + 0x6f0) = iVar10;
  UObjectBaseUtility::MarkPackageDirty(lVar2);
  plVar8 = plVar8 + 1;
  uVar13 = uVar13 + 1;
  uVar11 = (ulonglong)(iVar10 + 1U);
  if (uVar13 == uVar12) goto LAB_142fbbf43;
  goto LAB_142fbbea0;
}



// FUNCTION 142fbbfc0 FUN_142fbbfc0 body=898 status=ok
// SIG undefined FUN_142fbbfc0(void)

void FUN_142fbbfc0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  uint *puVar2;
  byte bVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  longlong *plVar20;
  
  plVar20 = (longlong *)param_3[0x10];
  if ((longlong *)param_3[0x10] == (longlong *)0x0) {
    plVar20 = param_3;
  }
  plVar1 = plVar20 + (int)param_3[0x11];
  for (; plVar20 != plVar1; plVar20 = plVar20 + 1) {
    lVar4 = *plVar20;
    if (lVar4 != 0) {
      bVar3 = *(byte *)(lVar4 + 0x6a);
      uVar10 = (ulonglong)bVar3;
      if (((int)param_1[1] <= (int)(uint)bVar3) ||
         (cVar5 = FWeakObjectPtr::IsValid(*param_1 + uVar10 * 8), cVar5 == '\0')) {
        iVar18 = (int)param_1[1];
        if (iVar18 <= (int)(uint)bVar3) {
          iVar15 = bVar3 + 1;
          if (iVar18 < iVar15) {
            *(int *)(param_1 + 1) = iVar15;
            if (*(int *)((longlong)param_1 + 0xc) < iVar15) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1);
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*param_1 + (longlong)iVar18 * 8),0,(longlong)(iVar15 - iVar18) << 3)
            ;
          }
          else if ((iVar15 < iVar18) && (iVar15 != iVar18)) {
            *(int *)(param_1 + 1) = iVar15;
            TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1);
          }
          iVar18 = (int)param_2[1];
          if (iVar18 < iVar15) {
            *(int *)(param_2 + 1) = iVar15;
            iVar17 = iVar15 - iVar18;
            if (*(int *)((longlong)param_2 + 0xc) < iVar15) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
              ::ResizeGrow(param_2,iVar18);
            }
            if (iVar17 != 0) {
              lVar9 = (longlong)iVar18 * 0x20 + 0x1c + *param_2;
              do {
                *(undefined8 *)(lVar9 + -0xc) = 0;
                *(undefined8 *)(lVar9 + -4) = 0;
                lVar9 = lVar9 + 0x20;
                iVar17 = iVar17 + -1;
              } while (iVar17 != 0);
            }
          }
          else if (iVar15 < iVar18) {
            TArray<FClothCollisionPrim_ConvexFace,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                      (param_2,iVar15,iVar18 - iVar15,1);
          }
        }
        FWeakObjectPtr::operator=(*param_1 + uVar10 * 8);
        lVar19 = *param_2;
        lVar16 = (longlong)(int)param_2[1] * 0x20 + lVar19;
        lVar9 = uVar10 * 0x20 + lVar19;
        for (; lVar19 != lVar16; lVar19 = lVar19 + 0x20) {
          iVar18 = *(int *)(lVar19 + 0x18);
          if (iVar18 < (int)param_2[1]) {
            do {
              iVar15 = iVar18 + 1;
              *(int *)(lVar19 + 0x18) = iVar15;
              if (*(int *)(lVar19 + 0x1c) <= iVar18) {
                uVar6 = (int)(iVar18 + 0x20 + (iVar18 + 0x20 >> 0x1f & 0x1fU)) >> 5;
                if (uVar6 < 5) {
                  iVar17 = 4;
                }
                else {
                  uVar10 = FMemory::QuantizeSize
                                     ((((ulonglong)((longlong)(int)uVar6 * 3) >> 3) +
                                      (longlong)(int)uVar6) * 4 + 0x40,0);
                  iVar15 = *(int *)(lVar19 + 0x18);
                  iVar17 = (int)(uVar10 >> 2);
                  if (iVar17 < (int)uVar6) {
                    iVar17 = 0x7fffffff;
                  }
                }
                *(int *)(lVar19 + 0x1c) = iVar17 << 5;
                TBitArray<FDefaultBitArrayAllocator>::Realloc(lVar19,iVar15 + -1);
              }
              lVar12 = *(longlong *)(lVar19 + 0x10);
              if (*(longlong *)(lVar19 + 0x10) == 0) {
                lVar12 = lVar19;
              }
              iVar15 = iVar18;
              if (iVar18 < 0) {
                iVar15 = iVar18 + 0x1f;
              }
              puVar2 = (uint *)(lVar12 + (longlong)(iVar15 >> 5) * 4);
              *puVar2 = *puVar2 & ~(1 << ((byte)iVar18 & 0x1f));
              iVar18 = *(int *)(lVar19 + 0x18);
            } while (iVar18 < (int)param_2[1]);
          }
        }
        iVar18 = 0;
        if (0 < (int)param_1[1]) {
          uVar6 = 1 << (bVar3 & 0x1f);
          lVar16 = 0;
          lVar19 = (ulonglong)(bVar3 >> 5) * 4;
          do {
            uVar11 = FWeakObjectPtr::Get(*param_1 + (longlong)iVar18 * 8);
            lVar12 = *param_2;
            iVar15 = FUN_142df3570(lVar4,uVar11);
            iVar17 = FUN_142df3570(uVar11);
            lVar13 = *(longlong *)(lVar9 + 0x10);
            if (lVar13 == 0) {
              lVar13 = lVar9;
            }
            iVar7 = iVar18;
            if (iVar18 < 0) {
              iVar7 = iVar18 + 0x1f;
            }
            puVar2 = (uint *)(lVar13 + (longlong)(iVar7 >> 5) * 4);
            uVar8 = *puVar2;
            uVar14 = 1 << ((byte)iVar18 & 0x1f);
            if (iVar15 == 0) {
              uVar8 = uVar8 | uVar14;
            }
            else {
              uVar8 = uVar8 & ~uVar14;
            }
            *puVar2 = uVar8;
            lVar13 = *(longlong *)(lVar12 + lVar16 + 0x10);
            if (lVar13 == 0) {
              lVar13 = lVar12 + lVar16;
            }
            uVar8 = *(uint *)(lVar13 + lVar19);
            if (iVar17 == 0) {
              uVar8 = uVar8 | uVar6;
            }
            else {
              uVar8 = uVar8 & ~uVar6;
            }
            *(uint *)(lVar13 + lVar19) = uVar8;
            iVar18 = iVar18 + 1;
            lVar16 = lVar16 + 0x20;
          } while (iVar18 < (int)param_1[1]);
        }
      }
    }
  }
  return;
}



// FUNCTION 142fbc350 FUN_142fbc350 body=440 status=ok
// SIG undefined FUN_142fbc350(void)

undefined8 FUN_142fbc350(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong local_res18;
  undefined8 local_e8;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_ac;
  float local_a4;
  ulonglong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  cVar1 = FUN_142fa8b90();
  if (cVar1 == '\0') {
LAB_142fbc4e4:
    uVar2 = 0;
  }
  else {
    if ((int)param_2[1] != 0) {
      iVar4 = 0;
      uVar2 = *(undefined8 *)(param_1 + 0x784);
      local_38 = *(undefined8 *)(param_1 + 0x6b8);
      local_res18 = *(ulonglong *)(param_1 + 0x758);
      fVar6 = *(float *)(param_1 + 0x78c) - *(float *)(param_1 + 0x6ec);
      local_88 = *(undefined8 *)(param_1 + 0x6f8);
      uStack_80 = *(undefined8 *)(param_1 + 0x700);
      local_98 = *(undefined8 *)(param_1 + 0x6e8);
      uStack_90 = *(undefined8 *)(param_1 + 0x6f0);
      local_68 = *(undefined8 *)(param_1 + 0x718);
      uStack_60 = *(undefined8 *)(param_1 + 0x720);
      local_78 = *(undefined8 *)(param_1 + 0x708);
      uStack_70 = *(undefined8 *)(param_1 + 0x710);
      local_48 = *(undefined8 *)(param_1 + 0x738);
      uStack_40 = *(undefined8 *)(param_1 + 0x740);
      local_58 = *(undefined8 *)(param_1 + 0x728);
      uStack_50 = *(undefined8 *)(param_1 + 0x730);
      if (0 < (int)param_2[1]) {
        lVar5 = 0;
        lVar3 = 0;
        do {
          uVar7 = (int)uVar2;
          uVar8 = (int)((ulonglong)uVar2 >> 0x20);
          local_a4 = fVar6;
          local_e8 = uVar2;
          if (-1 < lVar5 + -1) {
            local_e8 = *(undefined8 *)(*param_2 + -0xc + lVar3);
            uVar7 = (int)local_e8;
            uVar8 = (int)((ulonglong)local_e8 >> 0x20);
            local_a4 = *(float *)(*param_2 + -4 + lVar3);
          }
          local_ac = CONCAT44(uVar8,uVar7);
          local_d8 = uVar2;
          local_d0 = fVar6;
          if (-1 < lVar5) {
            local_d8 = *(undefined8 *)(lVar3 + *param_2);
            local_d0 = *(float *)(lVar3 + 8 + *param_2);
          }
          local_b0 = local_d0 - local_a4;
          local_b8 = CONCAT44(local_d8._4_4_ - local_e8._4_4_,(float)local_d8 - (float)local_e8);
          local_a0 = local_res18;
          cVar1 = FUN_142f99630(&local_b8,0,&local_res18);
          if (cVar1 == '\0') goto LAB_142fbc4e4;
          iVar4 = iVar4 + 1;
          lVar5 = lVar5 + 1;
          lVar3 = lVar3 + 0xc;
        } while (iVar4 < (int)param_2[1]);
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 142fbc510 FUN_142fbc510 body=169 status=ok
// SIG undefined FUN_142fbc510(void)

undefined8 FUN_142fbc510(longlong param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = FUN_142fa8b90();
  if ((cVar2 != '\0') &&
     (cVar2 = FUN_1407c3030(*(longlong *)(param_1 + 0x6e0) + 0x8b0), cVar2 == '\0')) {
    if ((*(longlong *)(param_1 + 0x7c0) != 0) && (*(longlong *)(param_1 + 0x7c8) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x7c8) + 8);
      LOCK();
      iVar3 = *piVar1;
      if (iVar3 == 0) {
        *piVar1 = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (0 < iVar3) {
        return 0;
      }
    }
    if ((*(int *)(param_1 + 0x928) < 1) &&
       (((0.0001 < ABS(*(float *)(param_1 + 0x300)) || (0.0001 < ABS(*(float *)(param_1 + 0x304))))
        || (0.0001 < ABS(*(float *)(param_1 + 0x308)))))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142fbc5d0 call body=33 status=ok
// SIG undefined call(void)

void hkSignal2<hkaiWorld_*,hkArrayView<hkaiWorldSignals::FaceClearanceFilledInfo_const_>_>::
     MemberSlot<hkaiNavMeshClearanceCacheViewer,void_(__cdecl_hkaiNavMeshClearanceCacheViewer::*)(hkaiWorld_*,hkArrayView<hkaiWorldSignals::FaceClearanceFilledInfo_const_>)>
     ::call(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x10),param_2,&local_18);
  return;
}



// FUNCTION 142fbc600 FUN_142fbc600 body=3145 status=ok
// SIG undefined FUN_142fbc600(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142fbc600(longlong param_1,float *param_2,uint *param_3)

{
  uint uVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [14];
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [14];
  undefined1 auVar14 [12];
  ulonglong uVar15;
  char cVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  float *pfVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  uint uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  uint uVar30;
  int iVar31;
  uint uVar42;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar43;
  float fVar53;
  float fVar54;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined4 uVar64;
  undefined1 in_XMM2 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar76;
  float fVar80;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  float fVar97;
  undefined1 auVar98 [16];
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar104;
  undefined1 auVar103 [16];
  float fVar105;
  undefined4 uVar106;
  undefined4 uVar107;
  undefined4 uVar108;
  undefined4 uVar109;
  undefined4 uVar110;
  undefined4 uVar111;
  float fVar112;
  undefined1 auStack_2f8 [32];
  char local_2d8;
  uint local_2d4;
  ulonglong local_2d0;
  ulonglong local_2c8;
  ulonglong local_2c0;
  undefined8 local_2b8;
  longlong local_2b0;
  uint *local_2a8;
  longlong local_2a0;
  undefined4 local_298;
  undefined2 local_294;
  ushort local_292;
  undefined4 local_290;
  ushort local_28c;
  uint local_288;
  undefined4 local_284;
  float local_278 [2];
  undefined4 *local_270;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  undefined1 local_258 [8];
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  undefined4 *local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined1 local_218 [8];
  float fStack_210;
  float fStack_20c;
  undefined1 local_208 [8];
  undefined8 uStack_200;
  uint local_1f8;
  undefined8 *local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined1 local_180;
  undefined2 local_178;
  undefined2 uStack_176;
  undefined2 uStack_174;
  ushort uStack_172;
  undefined2 uStack_170;
  ushort uStack_16e;
  ushort uStack_16c;
  ushort uStack_16a;
  uint local_168;
  undefined4 local_164;
  longlong local_158;
  float *local_150;
  float *local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined1 local_118 [16];
  longlong local_108 [2];
  undefined1 local_f8 [16];
  ulonglong local_e8;
  float fVar75;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_2f8;
  fVar91 = *param_2;
  fVar92 = param_2[1];
  fVar93 = param_2[2];
  fVar94 = param_2[3];
  uVar24 = 0;
  fVar97 = param_2[8];
  local_2d0 = (ulonglong)(uint)fVar97;
  local_2d4 = 0;
  fVar112 = 0.0;
  fVar43 = (fVar91 - param_2[4]) * (fVar91 - param_2[4]);
  fVar53 = (fVar92 - param_2[5]) * (fVar92 - param_2[5]);
  fVar54 = (fVar93 - param_2[6]) * (fVar93 - param_2[6]);
  auVar96._0_4_ = fVar53 + fVar43 + fVar54;
  auVar96._4_4_ = fVar53 + fVar43 + fVar54;
  auVar96._8_4_ = fVar53 + fVar43 + fVar54;
  auVar96._12_4_ = fVar53 + fVar43 + fVar54;
  auVar55 = rsqrtps(in_XMM2,auVar96);
  fVar43 = auVar55._0_4_;
  fVar53 = auVar55._4_4_;
  fVar54 = auVar55._8_4_;
  fVar89 = auVar55._12_4_;
  fVar43 = (float)(~-(uint)(auVar96._0_4_ <= 0.0) &
                  (uint)((3.0 - fVar43 * auVar96._0_4_ * fVar43) * fVar43 * 0.5 * auVar96._0_4_));
  fVar53 = (float)(~-(uint)(auVar96._4_4_ <= 0.0) &
                  (uint)((3.0 - fVar53 * auVar96._4_4_ * fVar53) * fVar53 * 0.5 * auVar96._4_4_));
  fVar54 = (float)(~-(uint)(auVar96._8_4_ <= 0.0) &
                  (uint)((3.0 - fVar54 * auVar96._8_4_ * fVar54) * fVar54 * 0.5 * auVar96._8_4_));
  fVar89 = (float)(~-(uint)(auVar96._12_4_ <= 0.0) &
                  (uint)((3.0 - fVar89 * auVar96._12_4_ * fVar89) * fVar89 * 0.5 * auVar96._12_4_));
  local_2a8 = param_3;
  if (fVar97 != -NAN) {
    local_1b8 = _DAT_1467f08d0;
    local_1e8 = 0;
    uStack_1e0 = 0;
    local_238 = -NAN;
    uVar29 = (ulonglong)((uint)fVar97 & 0x3fffff);
    uVar26 = 0xffffffff;
    local_230 = (undefined4 *)0x0;
    uVar25 = (ulonglong)((uint)fVar97 >> 0x16);
    local_1f8 = 0xffffffff;
    local_1f0 = (undefined8 *)0x0;
    auVar55._0_8_ = (ulonglong)DAT_1467f08d0 ^ 0x8000000080000000;
    auVar55._8_4_ = DAT_1467f08d0._8_4_ ^ 0x80000000;
    auVar55._12_4_ = DAT_1467f08d0._12_4_ ^ 0x80000000;
    lVar21 = *(longlong *)(uVar25 * 0x100 + 8 + *(longlong *)(param_1 + 0x38));
    lVar22 = *(longlong *)(*(longlong *)(lVar21 + 0x18) + 0x18);
    local_298 = *(undefined4 *)(lVar22 + uVar29 * 0x18);
    local_294 = *(undefined2 *)(lVar22 + 4 + uVar29 * 0x18);
    local_292 = *(ushort *)(lVar22 + 6 + uVar29 * 0x18);
    local_290 = *(undefined4 *)(lVar22 + 8 + uVar29 * 0x18);
    local_28c = *(ushort *)(lVar22 + 0xc + uVar29 * 0x18);
    local_288 = *(uint *)(lVar22 + 0x10 + uVar29 * 0x18);
    local_284 = *(undefined4 *)(lVar22 + 0x14 + uVar29 * 0x18);
    lVar22 = *(longlong *)(lVar21 + 0x18);
    if ((*(int *)(lVar22 + 0x48) == 0) ||
       (iVar31 = *(int *)(*(longlong *)(lVar22 + 0x40) + uVar29 * 4), iVar31 == -1)) {
      uVar28 = 0xffffffff;
      uVar29 = uVar24;
    }
    else {
      local_2c8 = *(ulonglong *)(*(longlong *)(lVar22 + 0x50) + (longlong)iVar31 * 8);
      uVar28 = local_2c8 & 0xffffffff;
      uVar29 = local_2c8 >> 0x20;
    }
    local_270 = &local_298;
    local_2c0 = uVar25;
    local_2b0 = param_1;
    local_278[0] = fVar97;
    local_268 = fVar91;
    fStack_264 = fVar92;
    fStack_260 = fVar93;
    fStack_25c = fVar94;
    local_1a8 = auVar55;
    uVar17 = FUN_142fbd3f0(lVar21,&local_298,local_258);
    fVar99 = param_2[4];
    fVar100 = param_2[5];
    uVar10 = *(undefined8 *)(param_2 + 4);
    fVar101 = param_2[6];
    fVar102 = param_2[7];
    uVar11 = *(undefined8 *)(param_2 + 6);
    auVar33._0_4_ = -(uint)(fVar99 <= local_248 && (float)local_258._0_4_ <= fVar99);
    auVar33._4_4_ = -(uint)(fVar100 <= fStack_244 && (float)local_258._4_4_ <= fVar100);
    auVar33._8_4_ = -(uint)(fVar101 <= fStack_240 && fStack_250 <= fVar101);
    auVar33._12_4_ = -(uint)(fVar102 <= fStack_23c && fStack_24c <= fVar102);
    local_2d8 = '\0';
    uVar17 = movmskps(uVar17,auVar33);
    fVar82 = 0.0;
    fVar84 = 0.0;
    fVar86 = 0.0;
    if (((byte)uVar17 & 7) != 7) {
LAB_142fbc918:
      auVar69._0_4_ = (float)(~-(uint)(*param_2 - fVar99 == 0.0) & (uint)(*param_2 - fVar99));
      auVar69._4_4_ = (float)(~-(uint)(param_2[1] - fVar100 == 0.0) & (uint)(param_2[1] - fVar100));
      auVar69._8_4_ = (float)(~-(uint)(param_2[2] - fVar101 == 0.0) & (uint)(param_2[2] - fVar101));
      auVar69._12_4_ = (float)(~-(uint)(fRam00000001467f06fc == 0.0) & (uint)fRam00000001467f06fc);
      auVar56 = rcpps(auVar55,auVar69);
      auVar77._0_8_ =
           CONCAT44(-(uint)(auVar69._4_4_ == 0.0),-(uint)(auVar69._0_4_ == 0.0)) &
           0x7f7fffee7f7fffee;
      auVar77._8_4_ = -(uint)(auVar69._8_4_ == 0.0) & 0x7f7fffee;
      auVar77._12_4_ = -(uint)(auVar69._12_4_ == 0.0) & 0x7f7fffee;
      auVar103._0_4_ =
           ~-(uint)(auVar69._0_4_ == 0.0) &
           (uint)((2.0 - auVar56._0_4_ * auVar69._0_4_) * auVar56._0_4_);
      auVar103._4_4_ =
           ~-(uint)(auVar69._4_4_ == 0.0) &
           (uint)((2.0 - auVar56._4_4_ * auVar69._4_4_) * auVar56._4_4_);
      auVar103._8_4_ =
           ~-(uint)(auVar69._8_4_ == 0.0) &
           (uint)((2.0 - auVar56._8_4_ * auVar69._8_4_) * auVar56._8_4_);
      auVar103._12_4_ =
           ~-(uint)(auVar69._12_4_ == 0.0) &
           (uint)((2.0 - auVar56._12_4_ * auVar69._12_4_) * auVar56._12_4_);
      auVar103 = auVar103 | auVar77;
      fVar43 = fVar91;
      fVar53 = fVar92;
      fVar54 = fVar93;
      fVar89 = fVar94;
      uVar17 = DAT_1467f06f0;
      uVar106 = uRam00000001467f06f4;
      uVar107 = uRam00000001467f06f8;
      fVar88 = fRam00000001467f06fc;
      uVar108 = _DAT_1467f06e0;
      uVar109 = uRam00000001467f06e4;
      uVar110 = uRam00000001467f06e8;
      uVar111 = DAT_1467f06ec;
      if (local_2d8 == '\0') {
LAB_142fbc9a0:
        uVar24 = (ulonglong)local_2d4;
        fVar91 = fVar43;
        fVar92 = fVar53;
        fVar93 = fVar54;
        fVar94 = fVar89;
        if ((int)local_2d4 < (int)param_2[9]) {
          auVar55 = *(undefined1 (*) [16])(param_2 + 4);
          fVar91 = auVar55._0_4_;
          fVar92 = auVar55._4_4_;
          fVar93 = auVar55._8_4_;
          fVar94 = auVar55._12_4_;
          local_2d4 = local_2d4 + 1;
          iVar31 = 0;
          auVar95._4_4_ = fVar53;
          auVar95._0_4_ = fVar43;
          auVar95._8_4_ = fVar54;
          auVar95._12_4_ = fVar89;
          auVar98._4_4_ = fVar53;
          auVar98._0_4_ = fVar43;
          auVar98._8_4_ = fVar54;
          auVar98._12_4_ = fVar89;
          auVar96 = minps(auVar95,auVar55);
          uVar24 = *(ulonglong *)(local_2b0 + 0x38);
          local_198 = CONCAT44((int)(short)local_292 + local_288,local_288);
          local_2a0 = *(longlong *)((longlong)(int)uVar25 * 0x100 + 8 + uVar24);
          local_190 = (float *)CONCAT44((int)uVar29 + (int)uVar28,(int)uVar28);
          local_188 = (float *)((ulonglong)local_288 << 0x20);
          auVar55 = maxps(auVar98,auVar55);
          uVar19 = local_288;
          if (local_288 == (int)(short)local_292 + local_288) {
            do {
              lVar21 = (longlong)iVar31;
              iVar31 = iVar31 + 1;
              local_188 = (float *)CONCAT44(local_188._4_4_,iVar31);
              if (iVar31 == 2) goto LAB_142fbd101;
              uVar19 = *(uint *)(&local_190 + lVar21);
              local_188 = (float *)CONCAT44(uVar19,iVar31);
            } while (uVar19 == *(uint *)((longlong)&local_190 + lVar21 * 8 + 4));
          }
          if (iVar31 < 2) {
            uVar25 = (ulonglong)(uint)((int)uVar25 << 0x16);
            local_2c8 = uVar24;
            local_2c0 = uVar25;
            do {
              uVar30 = uVar19 + 1;
              local_188 = (float *)CONCAT44(uVar30,(undefined4)local_188);
              if (uVar30 == *(uint *)((longlong)&local_198 + (longlong)iVar31 * 8 + 4)) {
                do {
                  iVar31 = iVar31 + 1;
                  local_188 = (float *)CONCAT44(local_188._4_4_,iVar31);
                  if (iVar31 == 2) break;
                  uVar30 = *(uint *)(&local_198 + iVar31);
                  local_188 = (float *)CONCAT44(uVar30,iVar31);
                } while (uVar30 == *(uint *)((longlong)&local_198 + (longlong)iVar31 * 8 + 4));
              }
              lVar21 = *(longlong *)(local_2a0 + 0x18);
              uVar27 = uVar19 | (uint)uVar25;
              if ((int)uVar19 < *(int *)(lVar21 + 0x30)) {
                lVar22 = *(longlong *)(lVar21 + 0x28);
              }
              else {
                uVar19 = uVar19 - *(int *)(lVar21 + 0x30);
                lVar22 = *(longlong *)(lVar21 + 0x60);
              }
              uVar29 = *(ulonglong *)(lVar22 + (longlong)(int)uVar19 * 8);
              if ((uVar29 >> 0x10 & 0x10) == 0) {
                uVar23 = uVar29 >> 0x20;
                uVar19 = (uint)(uVar29 >> 0x20);
                if (((uVar29 >> 0x10 & 0x40) == 0) && (uVar19 != 0xffffffff)) {
                  uVar23 = (ulonglong)(uVar19 & 0x3fffff | *(int *)(lVar21 + 0x94) << 0x16);
                }
                fVar97 = (float)uVar23;
                local_2b8 = CONCAT44(fVar97,(int)uVar29);
                uVar25 = local_2c0;
                if (fVar97 != (float)uVar26) {
                  lVar21 = *(longlong *)((uVar23 >> 0x16) * 0x100 + 8 + uVar24);
                  uVar24 = (ulonglong)((uint)fVar97 & 0x3fffff);
                  lVar22 = *(longlong *)(*(longlong *)(lVar21 + 0x18) + 0x18);
                  uVar19 = *(uint *)(lVar22 + uVar24 * 0x18);
                  local_178 = (undefined2)uVar19;
                  uStack_176 = (undefined2)(uVar19 >> 0x10);
                  uStack_174 = *(undefined2 *)(lVar22 + 4 + uVar24 * 0x18);
                  uStack_172 = *(ushort *)(lVar22 + 6 + uVar24 * 0x18);
                  uVar1 = *(uint *)(lVar22 + 8 + uVar24 * 0x18);
                  uStack_170 = (undefined2)uVar1;
                  uStack_16e = (ushort)(uVar1 >> 0x10);
                  uStack_16c = *(ushort *)(lVar22 + 0xc + uVar24 * 0x18);
                  local_168 = *(uint *)(lVar22 + 0x10 + uVar24 * 0x18);
                  auVar14._2_2_ = uStack_170;
                  auVar14._0_2_ = uStack_172;
                  local_164 = *(undefined4 *)(lVar22 + 0x14 + uVar24 * 0x18);
                  auVar14._4_8_ = 0;
                  auVar9._12_2_ = uStack_172;
                  auVar9._0_12_ = auVar14 << 0x30;
                  uVar10 = CONCAT44(auVar9._10_4_,CONCAT22(uStack_174,uStack_172));
                  auVar13._6_8_ = 0;
                  auVar13._0_6_ = (uint6)((ulonglong)uVar10 >> 0x10);
                  uVar42 = (uint)((ulonglong)uVar10 >> 0x10);
                  lVar22 = *(longlong *)(*(longlong *)(lVar21 + 0x18) + 0x38);
                  local_218._4_4_ =
                       *(float *)(lVar22 + 0x94) *
                       ((float)(int)CONCAT82(SUB148(auVar13 << 0x40,6),uStack_176) + 0.0) +
                       *(float *)(lVar22 + 0xa4);
                  local_218._0_4_ =
                       *(float *)(lVar22 + 0x90) * ((float)(uVar19 & 0xffff) + 0.0) +
                       *(float *)(lVar22 + 0xa0);
                  fStack_210 = *(float *)(lVar22 + 0x98) *
                               ((float)(uVar42 >> 0x10) * 65536.0 + (float)(uVar42 & 0xffff)) +
                               *(float *)(lVar22 + 0xa8);
                  fStack_20c = *(float *)(lVar22 + 0x9c) * ((float)uStack_172 + 0.0) +
                               *(float *)(lVar22 + 0xac);
                  auVar56._0_4_ =
                       *(float *)(lVar22 + 0x90) * ((float)(uVar1 & 0xffff) + 0.0) +
                       *(float *)(lVar22 + 0xa0);
                  auVar56._4_4_ =
                       *(float *)(lVar22 + 0x94) * ((float)uStack_16e + 0.0) +
                       *(float *)(lVar22 + 0xa4);
                  auVar56._8_4_ =
                       *(float *)(lVar22 + 0x98) * ((float)uStack_16c + 0.0) +
                       *(float *)(lVar22 + 0xa8);
                  auVar56._12_4_ =
                       *(float *)(lVar22 + 0x9c) * ((float)uStack_16a + 0.0) +
                       *(float *)(lVar22 + 0xac);
                  _local_208 = auVar56;
                  local_108[0] = lVar21;
                  uVar18 = FUN_142fbdd20(lVar21 + 0x30,local_218);
                  lVar22 = local_2b0;
                  uVar15 = local_2d0;
                  fVar76 = (float)local_218._0_4_ + *(float *)(lVar21 + 0x40);
                  fVar80 = (float)local_218._4_4_ + *(float *)(lVar21 + 0x44);
                  local_218 = (undefined1  [8])CONCAT44(fVar80,fVar76);
                  fStack_210 = fStack_210 + *(float *)(lVar21 + 0x48);
                  fStack_20c = fStack_20c + *(float *)(lVar21 + 0x4c);
                  fVar81 = (float)local_208._0_4_ + *(float *)(lVar21 + 0x40);
                  fVar83 = (float)local_208._4_4_ + *(float *)(lVar21 + 0x44);
                  fVar85 = (float)uStack_200 + *(float *)(lVar21 + 0x48);
                  fVar87 = uStack_200._4_4_ + *(float *)(lVar21 + 0x4c);
                  auVar44._0_4_ = -(uint)(fVar76 <= auVar55._0_4_ && auVar96._0_4_ <= fVar81);
                  auVar44._4_4_ = -(uint)(fVar80 <= auVar55._4_4_ && auVar96._4_4_ <= fVar83);
                  auVar44._8_4_ = -(uint)(fStack_210 <= auVar55._8_4_ && auVar96._8_4_ <= fVar85);
                  auVar44._12_4_ = -(uint)(fStack_20c <= auVar55._12_4_ && auVar96._12_4_ <= fVar87)
                  ;
                  local_208._4_4_ = fVar83;
                  local_208._0_4_ = fVar81;
                  uStack_200._0_4_ = fVar85;
                  uStack_200._4_4_ = fVar87;
                  uVar19 = movmskps(uVar18,auVar44);
                  uVar25 = local_2c0;
                  uVar24 = local_2c8;
                  if ((char)(uVar19 & 7) == '\a') {
                    auVar57._8_4_ = fStack_210;
                    auVar57._0_8_ = local_218;
                    auVar57._12_4_ = fStack_20c;
                    auVar32._4_4_ = fVar83;
                    auVar32._0_4_ = fVar81;
                    auVar32._8_4_ = fVar85;
                    auVar32._12_4_ = fVar87;
                    auVar56 = maxps(auVar57,_local_258);
                    auVar12._4_4_ = fStack_244;
                    auVar12._0_4_ = local_248;
                    auVar12._8_4_ = fStack_240;
                    auVar12._12_4_ = fStack_23c;
                    auVar33 = minps(auVar32,auVar12);
                    fVar90 = auVar103._0_4_;
                    fVar104 = auVar103._4_4_;
                    fVar105 = auVar103._12_4_;
                    local_1d8 = minps(auVar56,auVar33);
                    local_1c8 = maxps(auVar56,auVar33);
                    auVar65._0_8_ =
                         CONCAT44(fVar104 * (local_1d8._4_4_ - fVar100),
                                  fVar90 * (local_1d8._0_4_ - fVar99));
                    fVar75 = auVar103._8_4_;
                    auVar65._8_4_ = fVar75 * (local_1d8._8_4_ - fVar101);
                    auVar65._12_4_ = fVar105 * (local_1d8._12_4_ - fVar102);
                    auVar34._0_4_ = fVar90 * (local_1c8._0_4_ - fVar99);
                    auVar34._4_4_ = fVar104 * (local_1c8._4_4_ - fVar100);
                    auVar34._8_4_ = fVar75 * (local_1c8._8_4_ - fVar101);
                    auVar34._12_4_ = fVar105 * (local_1c8._12_4_ - fVar102);
                    auVar58._8_4_ = auVar65._8_4_;
                    auVar58._0_8_ = auVar65._0_8_;
                    auVar58._12_4_ = auVar65._12_4_;
                    auVar33 = minps(auVar58,auVar34);
                    auVar56 = maxps(auVar65,auVar34);
                    uVar18 = auVar33._0_4_;
                    uVar64 = auVar33._4_4_;
                    auVar59._8_4_ = auVar33._8_4_;
                    auVar45._4_4_ = uVar64;
                    auVar45._0_4_ = uVar64;
                    auVar45._8_4_ = uVar64;
                    auVar45._12_4_ = uVar64;
                    auVar35._4_4_ = uVar18;
                    auVar35._0_4_ = uVar18;
                    auVar35._8_4_ = uVar18;
                    auVar35._12_4_ = uVar18;
                    auVar33 = maxps(auVar45,auVar35);
                    uVar18 = auVar56._0_4_;
                    uVar64 = auVar56._4_4_;
                    auVar66._8_4_ = auVar56._8_4_;
                    auVar59._4_4_ = auVar59._8_4_;
                    auVar59._0_4_ = auVar59._8_4_;
                    auVar59._12_4_ = auVar59._8_4_;
                    auVar56 = maxps(auVar59,auVar33);
                    auVar36._4_4_ = uVar18;
                    auVar36._0_4_ = uVar18;
                    auVar36._8_4_ = uVar18;
                    auVar36._12_4_ = uVar18;
                    auVar46._4_4_ = uVar64;
                    auVar46._0_4_ = uVar64;
                    auVar46._8_4_ = uVar64;
                    auVar46._12_4_ = uVar64;
                    auVar66._4_4_ = auVar66._8_4_;
                    auVar66._0_4_ = auVar66._8_4_;
                    auVar66._12_4_ = auVar66._8_4_;
                    auVar33 = minps(auVar46,auVar36);
                    auVar6._4_4_ = uVar109;
                    auVar6._0_4_ = uVar108;
                    auVar6._8_4_ = uVar110;
                    auVar6._12_4_ = uVar111;
                    auVar56 = maxps(auVar56,auVar6);
                    auVar33 = minps(auVar66,auVar33);
                    auVar3._4_4_ = uVar106;
                    auVar3._0_4_ = uVar17;
                    auVar3._8_4_ = uVar107;
                    auVar3._12_4_ = fVar88;
                    auVar33 = minps(auVar33,auVar3);
                    if (auVar56._0_4_ <= auVar33._0_4_) {
                      auVar47._0_4_ = -(uint)(fVar91 <= fVar81 && fVar76 <= fVar91);
                      auVar47._4_4_ = -(uint)(fVar92 <= fVar83 && fVar80 <= fVar92);
                      auVar47._8_4_ = -(uint)(fVar93 <= fVar85 && fStack_210 <= fVar93);
                      auVar47._12_4_ = -(uint)(fVar94 <= fVar87 && fStack_20c <= fVar94);
                      uVar18 = movmskps(uVar19 & 7,auVar47);
                      if (((byte)uVar18 & 7) == 7) {
                        local_2d8 = '\x01';
                        goto LAB_142fbcd79;
                      }
                      auVar60._0_8_ =
                           CONCAT44(fVar104 * (fVar80 - fVar100),fVar90 * (fVar76 - fVar99));
                      auVar60._8_4_ = fVar75 * (fStack_210 - fVar101);
                      auVar60._12_4_ = fVar105 * (fStack_20c - fVar102);
                      auVar37._0_4_ = fVar90 * (fVar81 - fVar99);
                      auVar37._4_4_ = fVar104 * (fVar83 - fVar100);
                      auVar37._8_4_ = fVar75 * (fVar85 - fVar101);
                      auVar37._12_4_ = fVar105 * (fVar87 - fVar102);
                      auVar67._8_4_ = auVar60._8_4_;
                      auVar67._0_8_ = auVar60._0_8_;
                      auVar67._12_4_ = auVar60._12_4_;
                      auVar33 = minps(auVar67,auVar37);
                      auVar56 = maxps(auVar60,auVar37);
                      uVar18 = auVar33._0_4_;
                      uVar64 = auVar33._4_4_;
                      auVar68._8_4_ = auVar33._8_4_;
                      auVar48._4_4_ = uVar64;
                      auVar48._0_4_ = uVar64;
                      auVar48._8_4_ = uVar64;
                      auVar48._12_4_ = uVar64;
                      auVar38._4_4_ = uVar18;
                      auVar38._0_4_ = uVar18;
                      auVar38._8_4_ = uVar18;
                      auVar38._12_4_ = uVar18;
                      auVar33 = maxps(auVar48,auVar38);
                      uVar18 = auVar56._0_4_;
                      uVar64 = auVar56._4_4_;
                      auVar61._8_4_ = auVar56._8_4_;
                      auVar68._4_4_ = auVar68._8_4_;
                      auVar68._0_4_ = auVar68._8_4_;
                      auVar68._12_4_ = auVar68._8_4_;
                      auVar56 = maxps(auVar68,auVar33);
                      auVar39._4_4_ = uVar18;
                      auVar39._0_4_ = uVar18;
                      auVar39._8_4_ = uVar18;
                      auVar39._12_4_ = uVar18;
                      auVar49._4_4_ = uVar64;
                      auVar49._0_4_ = uVar64;
                      auVar49._8_4_ = uVar64;
                      auVar49._12_4_ = uVar64;
                      auVar61._4_4_ = auVar61._8_4_;
                      auVar61._0_4_ = auVar61._8_4_;
                      auVar61._12_4_ = auVar61._8_4_;
                      auVar33 = minps(auVar49,auVar39);
                      auVar7._4_4_ = uVar109;
                      auVar7._0_4_ = uVar108;
                      auVar7._8_4_ = uVar110;
                      auVar7._12_4_ = uVar111;
                      auVar69 = maxps(auVar56,auVar7);
                      auVar33 = minps(auVar61,auVar33);
                      auVar4._4_4_ = uVar106;
                      auVar4._0_4_ = uVar17;
                      auVar4._8_4_ = uVar107;
                      auVar4._12_4_ = fVar88;
                      auVar56 = minps(auVar33,auVar4);
                      if (auVar69._0_4_ <= auVar56._0_4_) goto LAB_142fbcd61;
                    }
                  }
                }
              }
              uVar19 = uVar30;
              if (1 < iVar31) break;
            } while( true );
          }
LAB_142fbd101:
          fVar97 = (float)local_2d0;
          fVar91 = fVar43;
          fVar92 = fVar53;
          fVar93 = fVar54;
          fVar94 = fVar89;
          goto LAB_142fbd106;
        }
        goto LAB_142fbd1cc;
      }
LAB_142fbd08e:
      plVar2 = *(longlong **)(param_2 + 0xe);
      if (plVar2 != (longlong *)0x0) {
        local_228 = *(undefined8 *)(param_2 + 4);
        uStack_220 = *(undefined8 *)(param_2 + 6);
        local_238 = -NAN;
        local_230 = (undefined4 *)0x0;
        local_1f0 = (undefined8 *)0x0;
        local_190 = param_2 + 10;
        local_188 = local_278;
        local_1f8 = 0xffffffff;
        local_180 = 0x42;
        local_198 = param_1;
        cVar16 = (**(code **)(*plVar2 + 0x28))(plVar2,&local_198);
        if (cVar16 == '\0') goto LAB_142fbd1c8;
      }
      uVar10 = *(undefined8 *)(param_2 + 4);
      uVar11 = *(undefined8 *)(param_2 + 6);
      *local_2a8 = local_2d4;
      uVar24 = CONCAT71((uint7)(uint3)(local_2d4 >> 8),1);
      *(undefined8 *)(local_2a8 + 4) = uVar10;
      *(undefined8 *)(local_2a8 + 6) = uVar11;
      local_2a8[1] = (uint)fVar97;
      goto LAB_142fbd1e1;
    }
    plVar2 = *(longlong **)(param_2 + 0xe);
    local_2d8 = '\x01';
    if ((plVar2 == (longlong *)0x0) && (*(longlong *)(param_2 + 0xc) == 0)) {
LAB_142fbc90f:
      fVar99 = param_2[4];
      fVar100 = param_2[5];
      fVar101 = param_2[6];
      fVar102 = param_2[7];
      fVar112 = fVar43;
      fVar82 = fVar53;
      fVar84 = fVar54;
      fVar86 = fVar89;
      goto LAB_142fbc918;
    }
    pfVar20 = param_2 + 10;
    local_208._4_4_ = fStack_244;
    local_208._0_4_ = local_248;
    uStack_200._4_4_ = fStack_23c;
    uStack_200._0_4_ = fStack_240;
    local_238 = local_278[0];
    local_230 = local_270;
    local_188 = local_278;
    local_1f8 = 0xffffffff;
    local_1f0 = (undefined8 *)0x0;
    _local_218 = _local_258;
    local_180 = 0x52;
    local_228 = uVar10;
    uStack_220 = uVar11;
    local_198 = param_1;
    local_190 = pfVar20;
    if ((plVar2 == (longlong *)0x0) ||
       (cVar16 = (**(code **)(*plVar2 + 0x28))(plVar2,&local_198), cVar16 != '\0')) {
      plVar2 = *(longlong **)(param_2 + 0xc);
      uVar25 = local_2c0;
      if (plVar2 != (longlong *)0x0) {
        local_138 = CONCAT44(uRam00000001467f06e4,_DAT_1467f06e0);
        uStack_130 = CONCAT44(DAT_1467f06ec,uRam00000001467f06e8);
        local_148 = local_278;
        local_118._8_8_ = uStack_130;
        local_118._0_8_ = local_138;
        local_140 = 0x52;
        local_158 = param_1;
        local_150 = pfVar20;
        local_128 = fVar43;
        fStack_124 = fVar53;
        fStack_120 = fVar54;
        fStack_11c = fVar89;
        pfVar20 = (float *)(**(code **)(*plVar2 + 0x20))(plVar2,local_108,&local_158);
        fVar43 = *pfVar20;
        fVar53 = pfVar20[1];
        fVar54 = pfVar20[2];
        fVar89 = pfVar20[3];
        uVar25 = local_2c0;
      }
      goto LAB_142fbc90f;
    }
LAB_142fbd1c8:
    uVar24 = (ulonglong)local_2d4;
  }
LAB_142fbd1cc:
  fVar97 = (float)local_2d0;
LAB_142fbd1d1:
  *local_2a8 = (uint)uVar24;
  uVar24 = uVar24 & 0xffffffffffffff00;
  local_2a8[4] = (uint)fVar91;
  local_2a8[5] = (uint)fVar92;
  local_2a8[6] = (uint)fVar93;
  local_2a8[7] = (uint)fVar94;
  local_2a8[1] = (uint)fVar97;
LAB_142fbd1e1:
  local_2a8[2] = (uint)fVar112;
  return uVar24;
LAB_142fbcd61:
  fVar91 = (*param_2 - fVar91) * auVar69._0_4_ + fVar91;
  fVar92 = (param_2[1] - fVar92) * auVar69._4_4_ + fVar92;
  fVar93 = (param_2[2] - fVar93) * auVar69._8_4_ + fVar93;
  fVar94 = (param_2[3] - fVar94) * auVar69._12_4_ + fVar94;
LAB_142fbcd79:
  local_1f0 = &local_2b8;
  plVar2 = *(longlong **)(param_2 + 0xe);
  local_230 = (undefined4 *)&local_178;
  local_228 = CONCAT44(fVar92,fVar91);
  uStack_220 = CONCAT44(fVar94,fVar93);
  fVar43 = (local_268 - fVar91) * (local_268 - fVar91);
  fVar53 = (fStack_264 - fVar92) * (fStack_264 - fVar92);
  fVar54 = (fStack_260 - fVar93) * (fStack_260 - fVar93);
  auVar70._0_4_ = fVar53 + fVar43 + fVar54;
  auVar70._4_4_ = fVar53 + fVar43 + fVar54;
  auVar70._8_4_ = fVar53 + fVar43 + fVar54;
  auVar70._12_4_ = fVar53 + fVar43 + fVar54;
  auVar55 = rsqrtps(auVar56,auVar70);
  fVar43 = auVar55._0_4_;
  fVar53 = auVar55._4_4_;
  fVar54 = auVar55._8_4_;
  fVar89 = auVar55._12_4_;
  auVar56._0_4_ = fVar43 * 0.5;
  auVar56._4_4_ = fVar53 * 0.5;
  auVar56._8_4_ = fVar54 * 0.5;
  auVar56._12_4_ = fVar89 * 0.5;
  fVar43 = (float)(~-(uint)(auVar70._0_4_ <= 0.0) &
                  (uint)((3.0 - auVar70._0_4_ * fVar43 * fVar43) * auVar56._0_4_ * auVar70._0_4_));
  fVar53 = (float)(~-(uint)(auVar70._4_4_ <= 0.0) &
                  (uint)((3.0 - auVar70._4_4_ * fVar53 * fVar53) * auVar56._4_4_ * auVar70._4_4_));
  fVar54 = (float)(~-(uint)(auVar70._8_4_ <= 0.0) &
                  (uint)((3.0 - auVar70._8_4_ * fVar54 * fVar54) * auVar56._8_4_ * auVar70._8_4_));
  fVar89 = (float)(~-(uint)(auVar70._12_4_ <= 0.0) &
                  (uint)((3.0 - auVar70._12_4_ * fVar89 * fVar89) * auVar56._12_4_ * auVar70._12_4_)
                  );
  fVar76 = fVar91;
  fVar80 = fVar92;
  fVar75 = fVar93;
  fVar90 = fVar94;
  local_238 = fVar97;
  local_1f8 = uVar27;
  if ((plVar2 != (longlong *)0x0) || (*(longlong *)(param_2 + 0xc) != 0)) {
    fVar97 = (float)local_2d0;
    if (plVar2 != (longlong *)0x0) {
      local_188 = local_278;
      local_198 = local_2b0;
      local_180 = 0x22;
      if (fVar97 == param_2[8]) {
        local_180 = 0x12;
      }
      local_190 = param_2 + 10;
      cVar16 = (**(code **)(*plVar2 + 0x28))(plVar2,&local_198);
      uVar17 = DAT_1467f06f0;
      uVar106 = uRam00000001467f06f4;
      uVar107 = uRam00000001467f06f8;
      fVar88 = fRam00000001467f06fc;
      uVar108 = _DAT_1467f06e0;
      uVar109 = uRam00000001467f06e4;
      uVar110 = uRam00000001467f06e8;
      uVar111 = DAT_1467f06ec;
      if (cVar16 == '\0') {
LAB_142fbd106:
        fVar43 = param_2[4];
        fVar53 = param_2[5];
        fVar54 = param_2[6];
        fVar89 = param_2[7];
        uVar24 = (ulonglong)local_2d4;
        fVar82 = fVar91 - fVar43;
        fVar84 = fVar92 - fVar53;
        fVar86 = fVar93 - fVar54;
        auVar73._0_4_ = (float)(~-(uint)(fVar82 == 0.0) & (uint)fVar82);
        auVar73._4_4_ = (float)(~-(uint)(fVar84 == 0.0) & (uint)fVar84);
        auVar73._8_4_ = (float)(~-(uint)(fVar86 == 0.0) & (uint)fVar86);
        auVar73._12_4_ = (float)(~-(uint)(fVar88 == 0.0) & (uint)fVar88);
        auVar55 = rcpps(auVar56,auVar73);
        fVar99 = (float)(~-(uint)(auVar73._0_4_ == 0.0) &
                         (uint)((2.0 - auVar55._0_4_ * auVar73._0_4_) * auVar55._0_4_) |
                        -(uint)(auVar73._0_4_ == 0.0) & 0x7f7fffee);
        fVar100 = (float)(~-(uint)(auVar73._4_4_ == 0.0) &
                          (uint)((2.0 - auVar55._4_4_ * auVar73._4_4_) * auVar55._4_4_) |
                         -(uint)(auVar73._4_4_ == 0.0) & 0x7f7fffee);
        fVar101 = (float)(~-(uint)(auVar73._8_4_ == 0.0) &
                          (uint)((2.0 - auVar55._8_4_ * auVar73._8_4_) * auVar55._8_4_) |
                         -(uint)(auVar73._8_4_ == 0.0) & 0x7f7fffee);
        fVar102 = (float)(~-(uint)(auVar73._12_4_ == 0.0) &
                          (uint)((2.0 - auVar55._12_4_ * auVar73._12_4_) * auVar55._12_4_) |
                         -(uint)(auVar73._12_4_ == 0.0) & 0x7f7fffee);
        auVar74._0_4_ = fVar99 * (local_248 - fVar43);
        auVar74._4_4_ = fVar100 * (fStack_244 - fVar53);
        auVar74._8_4_ = fVar101 * (fStack_240 - fVar54);
        auVar74._12_4_ = fVar102 * (fStack_23c - fVar89);
        auVar62._0_8_ =
             CONCAT44(fVar100 * ((float)local_258._4_4_ - fVar53),
                      fVar99 * ((float)local_258._0_4_ - fVar43));
        auVar62._8_4_ = fVar101 * (fStack_250 - fVar54);
        auVar62._12_4_ = fVar102 * (fStack_24c - fVar89);
        auVar78._8_4_ = auVar62._8_4_;
        auVar78._0_8_ = auVar62._0_8_;
        auVar78._12_4_ = auVar62._12_4_;
        auVar55 = minps(auVar78,auVar74);
        auVar96 = maxps(auVar62,auVar74);
        uVar18 = auVar55._0_4_;
        uVar64 = auVar55._4_4_;
        auVar79._8_4_ = auVar55._8_4_;
        auVar51._4_4_ = uVar64;
        auVar51._0_4_ = uVar64;
        auVar51._8_4_ = uVar64;
        auVar51._12_4_ = uVar64;
        auVar40._4_4_ = uVar18;
        auVar40._0_4_ = uVar18;
        auVar40._8_4_ = uVar18;
        auVar40._12_4_ = uVar18;
        auVar55 = maxps(auVar51,auVar40);
        uVar18 = auVar96._0_4_;
        uVar64 = auVar96._4_4_;
        auVar63._8_4_ = auVar96._8_4_;
        auVar79._4_4_ = auVar79._8_4_;
        auVar79._0_4_ = auVar79._8_4_;
        auVar79._12_4_ = auVar79._8_4_;
        auVar96 = maxps(auVar79,auVar55);
        auVar41._4_4_ = uVar18;
        auVar41._0_4_ = uVar18;
        auVar41._8_4_ = uVar18;
        auVar41._12_4_ = uVar18;
        auVar52._4_4_ = uVar64;
        auVar52._0_4_ = uVar64;
        auVar52._8_4_ = uVar64;
        auVar52._12_4_ = uVar64;
        auVar63._4_4_ = auVar63._8_4_;
        auVar63._0_4_ = auVar63._8_4_;
        auVar63._12_4_ = auVar63._8_4_;
        auVar55 = minps(auVar52,auVar41);
        auVar8._4_4_ = uVar109;
        auVar8._0_4_ = uVar108;
        auVar8._8_4_ = uVar110;
        auVar8._12_4_ = uVar111;
        auVar96 = maxps(auVar96,auVar8);
        auVar55 = minps(auVar63,auVar55);
        auVar5._4_4_ = uVar106;
        auVar5._0_4_ = uVar17;
        auVar5._8_4_ = uVar107;
        auVar5._12_4_ = fVar88;
        auVar55 = minps(auVar55,auVar5);
        if (auVar96._0_4_ <= auVar55._0_4_) {
          fVar91 = fVar82 * auVar96._0_4_ + fVar43;
          fVar92 = fVar84 * auVar96._4_4_ + fVar53;
          fVar93 = fVar86 * auVar96._8_4_ + fVar54;
          fVar94 = (fVar94 - fVar89) * auVar96._12_4_ + fVar89;
        }
        goto LAB_142fbd1d1;
      }
      uVar23 = local_2b8 >> 0x20;
      fVar81 = (float)local_208._0_4_;
      fVar83 = (float)local_208._4_4_;
      fVar85 = (float)uStack_200;
      fVar87 = uStack_200._4_4_;
      fVar76 = (float)local_228;
      fVar80 = local_228._4_4_;
      fVar75 = (float)uStack_220;
      fVar90 = uStack_220._4_4_;
    }
    plVar2 = *(longlong **)(param_2 + 0xc);
    if (plVar2 != (longlong *)0x0) {
      local_158 = lVar22;
      local_140 = 0x52;
      local_148 = local_278;
      local_138 = CONCAT44(fVar82,fVar112);
      uStack_130 = CONCAT44(fVar86,fVar84);
      fVar97 = (local_268 - fVar91) * (local_268 - fVar91);
      fVar43 = (fStack_264 - fVar92) * (fStack_264 - fVar92);
      fVar53 = (fStack_260 - fVar93) * (fStack_260 - fVar93);
      fVar89 = (fVar76 - fVar91) * (fVar76 - fVar91);
      fVar88 = (fVar80 - fVar92) * (fVar80 - fVar92);
      fVar81 = (fVar75 - fVar93) * (fVar75 - fVar93);
      auVar71._0_4_ = fVar43 + fVar97 + fVar53;
      auVar71._4_4_ = fVar43 + fVar97 + fVar53;
      auVar71._8_4_ = fVar43 + fVar97 + fVar53;
      auVar71._12_4_ = fVar43 + fVar97 + fVar53;
      auVar55 = rsqrtps(auVar56,auVar71);
      fVar97 = auVar55._0_4_;
      fVar43 = auVar55._4_4_;
      fVar53 = auVar55._8_4_;
      fVar54 = auVar55._12_4_;
      auVar50._0_4_ = (3.0 - auVar71._0_4_ * fVar97 * fVar97) * fVar97 * 0.5 * auVar71._0_4_;
      auVar50._4_4_ = (3.0 - auVar71._4_4_ * fVar43 * fVar43) * fVar43 * 0.5 * auVar71._4_4_;
      auVar50._8_4_ = (3.0 - auVar71._8_4_ * fVar53 * fVar53) * fVar53 * 0.5 * auVar71._8_4_;
      auVar50._12_4_ = (3.0 - auVar71._12_4_ * fVar54 * fVar54) * fVar54 * 0.5 * auVar71._12_4_;
      local_128 = (float)(~-(uint)(auVar71._0_4_ <= 0.0) & (uint)auVar50._0_4_);
      fStack_124 = (float)(~-(uint)(auVar71._4_4_ <= 0.0) & (uint)auVar50._4_4_);
      fStack_120 = (float)(~-(uint)(auVar71._8_4_ <= 0.0) & (uint)auVar50._8_4_);
      fStack_11c = (float)(~-(uint)(auVar71._12_4_ <= 0.0) & (uint)auVar50._12_4_);
      auVar72._0_4_ = fVar88 + fVar89 + fVar81;
      auVar72._4_4_ = fVar88 + fVar89 + fVar81;
      auVar72._8_4_ = fVar88 + fVar89 + fVar81;
      auVar72._12_4_ = fVar88 + fVar89 + fVar81;
      auVar55 = rsqrtps(auVar50,auVar72);
      fVar97 = auVar55._0_4_;
      fVar43 = auVar55._4_4_;
      fVar53 = auVar55._8_4_;
      fVar54 = auVar55._12_4_;
      auVar56._0_4_ =
           (float)(~-(uint)(auVar72._0_4_ <= 0.0) &
                  (uint)((3.0 - auVar72._0_4_ * fVar97 * fVar97) * fVar97 * 0.5 * auVar72._0_4_));
      auVar56._4_4_ =
           (float)(~-(uint)(auVar72._4_4_ <= 0.0) &
                  (uint)((3.0 - auVar72._4_4_ * fVar43 * fVar43) * fVar43 * 0.5 * auVar72._4_4_));
      auVar56._8_4_ =
           (float)(~-(uint)(auVar72._8_4_ <= 0.0) &
                  (uint)((3.0 - auVar72._8_4_ * fVar53 * fVar53) * fVar53 * 0.5 * auVar72._8_4_));
      auVar56._12_4_ =
           (float)(~-(uint)(auVar72._12_4_ <= 0.0) &
                  (uint)((3.0 - auVar72._12_4_ * fVar54 * fVar54) * fVar54 * 0.5 * auVar72._12_4_));
      local_150 = param_2 + 10;
      local_118 = auVar56;
      pfVar20 = (float *)(**(code **)(*plVar2 + 0x20))(plVar2,local_f8,&local_158);
      fVar43 = *pfVar20;
      fVar53 = pfVar20[1];
      fVar54 = pfVar20[2];
      fVar89 = pfVar20[3];
      uVar23 = local_2b8 >> 0x20;
      fVar81 = (float)local_208._0_4_;
      fVar83 = (float)local_208._4_4_;
      fVar85 = (float)uStack_200;
      fVar87 = uStack_200._4_4_;
      fVar76 = (float)local_228;
      fVar80 = local_228._4_4_;
      fVar75 = (float)uStack_220;
      fVar90 = uStack_220._4_4_;
      uVar17 = DAT_1467f06f0;
      uVar106 = uRam00000001467f06f4;
      uVar107 = uRam00000001467f06f8;
      fVar88 = fRam00000001467f06fc;
      uVar108 = _DAT_1467f06e0;
      uVar109 = uRam00000001467f06e4;
      uVar110 = uRam00000001467f06e8;
      uVar111 = DAT_1467f06ec;
    }
  }
  fVar112 = fVar112 + fVar43;
  fVar82 = fVar82 + fVar53;
  fVar84 = fVar84 + fVar54;
  fVar86 = fVar86 + fVar89;
  local_292 = uStack_172;
  local_288 = local_168;
  local_298 = CONCAT22(uStack_176,local_178);
  local_294 = uStack_174;
  local_290 = CONCAT22(uStack_16e,uStack_170);
  local_28c = uStack_16c;
  local_284 = local_164;
  fVar97 = (float)uVar23;
  lVar21 = *(longlong *)(local_108[0] + 0x18);
  if ((*(int *)(lVar21 + 0x48) == 0) ||
     (iVar31 = *(int *)(*(longlong *)(lVar21 + 0x40) + (ulonglong)((uint)fVar97 & 0x3fffff) * 4),
     iVar31 == -1)) {
    uVar28 = 0xffffffff;
    uVar29 = 0;
  }
  else {
    local_2c8 = *(ulonglong *)(*(longlong *)(lVar21 + 0x50) + (longlong)iVar31 * 8);
    uVar28 = local_2c8 & 0xffffffff;
    uVar29 = local_2c8 >> 0x20;
  }
  uVar25 = (ulonglong)((uint)fVar97 >> 0x16);
  local_270 = &local_298;
  uVar26 = uVar15;
  param_1 = local_2b0;
  fVar43 = fVar91;
  fVar53 = fVar92;
  fVar54 = fVar93;
  fVar89 = fVar94;
  local_2d0 = uVar23;
  local_278[0] = fVar97;
  local_268 = fVar76;
  fStack_264 = fVar80;
  fStack_260 = fVar75;
  fStack_25c = fVar90;
  _local_258 = _local_218;
  local_248 = fVar81;
  fStack_244 = fVar83;
  fStack_240 = fVar85;
  fStack_23c = fVar87;
  if (local_2d8 != '\0') goto LAB_142fbd08e;
  goto LAB_142fbc9a0;
}



// FUNCTION 142fbd250 FUN_142fbd250 body=403 status=ok
// SIG undefined FUN_142fbd250(void)

undefined8 FUN_142fbd250(longlong param_1,uint param_2,undefined8 param_3,float *param_4)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  longlong *plVar8;
  float fVar9;
  float fVar10;
  int local_res8 [2];
  uint local_res10 [2];
  uint *local_res20;
  
  local_res10[0] = param_2 >> 0x16;
  if (local_res10[0] != *(uint *)(param_1 + 0x60)) {
    *(uint *)(param_1 + 0x60) = local_res10[0];
    if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
      lVar4 = *(longlong *)(param_1 + 0x50);
      if (*(longlong *)(param_1 + 0x50) == 0) {
        lVar4 = param_1 + 0x48;
      }
      uVar2 = *(uint *)(lVar4 + ((longlong)*(int *)(param_1 + 0x58) - 1U & (ulonglong)local_res10[0]
                                ) * 4);
      if (uVar2 != 0xffffffff) {
        do {
          puVar6 = (uint *)((longlong)(int)uVar2 * 0x20 + *(longlong *)(param_1 + 0x10));
          if (*puVar6 == local_res10[0]) {
            if (uVar2 != 0xffffffff) goto LAB_142fbd2e2;
            break;
          }
          uVar2 = puVar6[6];
        } while (uVar2 != 0xffffffff);
      }
    }
    puVar6 = (uint *)0x0;
LAB_142fbd2e2:
    puVar5 = puVar6 + 2;
    if (puVar6 == (uint *)0x0) {
      puVar5 = (uint *)0x0;
    }
    *(uint **)(param_1 + 0x68) = puVar5;
    if (puVar5 == (uint *)0x0) {
      lVar4 = *(longlong *)
               (*(longlong *)
                 ((ulonglong)local_res10[0] * 0x100 +
                 *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x38)) + 0x18);
      local_res20 = local_res10;
      iVar7 = *(int *)(lVar4 + 0xd8) + *(int *)(lVar4 + 0x20);
      TSet<TTuple<enum_EFlareQuestCallback::Type,TArray<UFlareQuest_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<enum_EFlareQuestCallback::Type,TArray<UFlareQuest_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<enum_EFlareQuestCallback::Type_const_&>_>
                (param_1 + 0x10,local_res8,&local_res20);
      plVar8 = (longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)local_res8[0] * 0x20 + 8);
      *(longlong **)(param_1 + 0x68) = plVar8;
      lVar4 = plVar8[1];
      iVar3 = (int)lVar4 + iVar7;
      *(int *)(plVar8 + 1) = iVar3;
      if (*(int *)((longlong)plVar8 + 0xc) < iVar3) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar8);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*plVar8 + (longlong)(int)lVar4 * 4),0,(longlong)iVar7 << 2);
    }
  }
  fVar9 = *param_4;
  plVar8 = *(longlong **)(param_1 + 0x68);
  if (fVar9 <= 0.0001) {
    fVar9 = 0.0001;
  }
  lVar4 = *plVar8;
  fVar1 = *(float *)(lVar4 + (ulonglong)(param_2 & 0x3fffff) * 4);
  fVar10 = fVar9;
  if ((0.0 < fVar1) && (fVar10 = fVar1, fVar9 <= fVar1)) {
    fVar10 = fVar9;
  }
  *(float *)(lVar4 + (ulonglong)(param_2 & 0x3fffff) * 4) = fVar10;
  *(float *)(param_1 + 8) = fVar10;
  return CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
}



// FUNCTION 142fbd3f0 FUN_142fbd3f0 body=198 status=ok
// SIG undefined FUN_142fbd3f0(void)

void FUN_142fbd3f0(longlong param_1,undefined1 (*param_2) [16],float *param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  undefined1 auVar3 [14];
  undefined1 auVar4 [14];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [14];
  
  auVar1 = *param_2;
  auVar3._10_2_ = 0;
  auVar3._0_10_ = auVar1._0_10_;
  auVar3._12_2_ = auVar1._6_2_;
  auVar4._8_2_ = auVar1._4_2_;
  auVar4._0_8_ = auVar1._0_8_;
  auVar4._10_4_ = auVar3._10_4_;
  auVar13._6_8_ = 0;
  auVar13._0_6_ = auVar4._8_6_;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38);
  fVar5 = *(float *)(lVar2 + 0x90);
  fVar6 = *(float *)(lVar2 + 0x94);
  fVar7 = *(float *)(lVar2 + 0x98);
  fVar8 = *(float *)(lVar2 + 0x9c);
  fVar9 = *(float *)(lVar2 + 0xa0);
  fVar10 = *(float *)(lVar2 + 0xa4);
  fVar11 = *(float *)(lVar2 + 0xa8);
  fVar12 = *(float *)(lVar2 + 0xac);
  *param_3 = fVar5 * ((float)auVar1._0_2_ + 0.0) + fVar9;
  param_3[1] = fVar6 * ((float)(int)CONCAT82(SUB148(auVar13 << 0x40,6),auVar1._2_2_) + 0.0) + fVar10
  ;
  param_3[2] = fVar7 * ((float)(auVar4._8_4_ >> 0x10) * 65536.0 + (float)(auVar4._8_4_ & 0xffff)) +
               fVar11;
  param_3[3] = fVar8 * ((float)auVar1._6_2_ + 0.0) + fVar12;
  param_3[4] = fVar5 * ((float)auVar1._8_2_ + 0.0) + fVar9;
  param_3[5] = fVar6 * ((float)auVar1._10_2_ + 0.0) + fVar10;
  param_3[6] = fVar7 * ((float)auVar1._12_2_ + 0.0) + fVar11;
  param_3[7] = fVar8 * ((float)auVar1._14_2_ + 0.0) + fVar12;
  FUN_142fbdd20(param_1 + 0x30,param_3);
  fVar5 = *(float *)(param_1 + 0x44);
  fVar6 = *(float *)(param_1 + 0x48);
  fVar7 = *(float *)(param_1 + 0x4c);
  *param_3 = *(float *)(param_1 + 0x40) + *param_3;
  param_3[1] = fVar5 + param_3[1];
  param_3[2] = fVar6 + param_3[2];
  param_3[3] = fVar7 + param_3[3];
  fVar5 = *(float *)(param_1 + 0x44);
  fVar6 = *(float *)(param_1 + 0x48);
  fVar7 = *(float *)(param_1 + 0x4c);
  param_3[4] = *(float *)(param_1 + 0x40) + param_3[4];
  param_3[5] = fVar5 + param_3[5];
  param_3[6] = fVar6 + param_3[6];
  param_3[7] = fVar7 + param_3[7];
  return;
}



// FUNCTION 142fbd4c0 FUN_142fbd4c0 body=86 status=ok
// SIG undefined FUN_142fbd4c0(void)

longlong FUN_142fbd4c0(longlong param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *param_2;
  lVar3 = (longlong)iVar2;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(int *)(lVar1 + 0x30) <= iVar2) {
    return *(longlong *)(lVar1 + 0xe0) + (longlong)(iVar2 - *(int *)(lVar1 + 0x30)) * 0x14;
  }
  if (*(int *)(lVar1 + 0x78) != 0) {
    iVar2 = *(int *)(*(longlong *)(lVar1 + 0x70) + lVar3 * 4);
  }
  if (iVar2 == -1) {
    return *(longlong *)(lVar1 + 0x28) + lVar3 * 0x14;
  }
  return *(longlong *)(lVar1 + 0xc0) + (longlong)iVar2 * 0x14;
}



// FUNCTION 142fbd520 FUN_142fbd520 body=83 status=ok
// SIG undefined FUN_142fbd520(void)

longlong FUN_142fbd520(longlong param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *param_2;
  lVar3 = (longlong)iVar2;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(int *)(lVar1 + 0x20) <= iVar2) {
    return (longlong)(iVar2 - *(int *)(lVar1 + 0x20)) * 0x10 + *(longlong *)(lVar1 + 0xd0);
  }
  if (*(int *)(lVar1 + 0x98) != 0) {
    iVar2 = *(int *)(*(longlong *)(lVar1 + 0x90) + lVar3 * 4);
  }
  if (iVar2 == -1) {
    return lVar3 * 0x10 + *(longlong *)(lVar1 + 0x18);
  }
  return (longlong)iVar2 * 0x10 + *(longlong *)(lVar1 + 0xb0);
}



// FUNCTION 142fbd590 FUN_142fbd590 body=15 status=ok
// SIG undefined FUN_142fbd590(void)

void FUN_142fbd590(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  *param_2 = param_1 + 0x18;
  *param_3 = 8;
  return;
}



// FUNCTION 142fbd650 FUN_142fbd650 body=62 status=ok
// SIG undefined FUN_142fbd650(void)

void FUN_142fbd650(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
  }
  else {
    uVar1 = FUN_142fbdb90();
  }
  FUN_14383c580(uVar1,param_2,param_3);
  return;
}



// FUNCTION 142fbd7d0 FUN_142fbd7d0 body=210 status=ok
// SIG undefined FUN_142fbd7d0(void)

bool FUN_142fbd7d0(longlong param_1,longlong param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar4 = *param_3;
  lVar3 = *(longlong *)(param_2 + 0x18);
  iVar1 = *(int *)(lVar3 + 0x50);
  uVar6 = 0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if (iVar4 < *(int *)(lVar3 + 0x20)) {
    iVar5 = iVar4;
    if (*(int *)(lVar3 + 0x98) != 0) {
      iVar5 = *(int *)(*(longlong *)(lVar3 + 0x90) + (longlong)iVar4 * 4);
    }
    if (iVar5 == -1) {
      uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x48) + (longlong)(iVar1 * iVar4) * 4);
    }
    else {
      uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x120) + (longlong)(iVar5 * iVar1) * 4);
    }
  }
  else {
    uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x140) +
                     (longlong)((iVar4 - *(int *)(lVar3 + 0x20)) * iVar1) * 4);
  }
  if (((((int)uVar2 < -1) && (iVar4 = -2 - uVar2, uVar2 = uVar6, -1 < iVar4)) &&
      (iVar4 < *(int *)(*(longlong *)(param_1 + 0x20) + 0x18))) &&
     ((lVar3 = (longlong)iVar4 * 0x10 + *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10),
      lVar3 != 0 && (*(char *)(lVar3 + 0xc) != '\0')))) {
    uVar2 = *(uint *)(lVar3 + 8);
  }
  return (*(uint *)(param_1 + 0x18) >> (uVar2 & 0x1f) & 1) != 0;
}



// FUNCTION 142fbd8b0 FUN_142fbd8b0 body=357 status=ok
// SIG undefined FUN_142fbd8b0(void)

longlong FUN_142fbd8b0(longlong *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  LOCK();
  UNLOCK();
  lVar2 = param_1[1];
  if (param_1[1] == 0) {
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar1 + 0x58),0x40);
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_143718910(lVar2);
    }
    LOCK();
    lVar4 = param_1[1];
    bVar5 = lVar4 == 0;
    if (bVar5) {
      param_1[1] = lVar3;
      lVar4 = 0;
    }
    UNLOCK();
    lVar2 = lVar3;
    if ((!bVar5) && (lVar2 = lVar4, lVar3 != 0)) {
      FUN_143718950(lVar3);
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),lVar3,0x40);
    }
  }
  FUN_143718980(lVar2);
  LOCK();
  UNLOCK();
  if ((char)param_1[2] == '\0') {
    LOCK();
    UNLOCK();
    LOCK();
    UNLOCK();
    if (*(short *)(*param_1 + 0x12) != 1) {
      thunk_FUN_143719c70(0x21dbd06c);
      lVar3 = *param_1;
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      lVar4 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                        (*(longlong **)((longlong)pvVar1 + 0x58),0xd0);
      if (lVar4 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = FUN_142f8af30(lVar4,lVar3);
      }
      thunk_FUN_143719c70(0x25659f08);
      LOCK();
      UNLOCK();
      if (*param_1 != 0) {
        FUN_14370c150();
      }
      *param_1 = lVar3;
    }
    LOCK();
    UNLOCK();
    *(undefined1 *)(param_1 + 2) = 1;
  }
  FUN_143718b00(lVar2);
  return *param_1;
}



// FUNCTION 142fbda20 FUN_142fbda20 body=357 status=ok
// SIG undefined FUN_142fbda20(void)

longlong FUN_142fbda20(longlong *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  LOCK();
  UNLOCK();
  lVar2 = param_1[1];
  if (param_1[1] == 0) {
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar1 + 0x58),0x40);
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_143718910(lVar2);
    }
    LOCK();
    lVar4 = param_1[1];
    bVar5 = lVar4 == 0;
    if (bVar5) {
      param_1[1] = lVar3;
      lVar4 = 0;
    }
    UNLOCK();
    lVar2 = lVar3;
    if ((!bVar5) && (lVar2 = lVar4, lVar3 != 0)) {
      FUN_143718950(lVar3);
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),lVar3,0x40);
    }
  }
  FUN_143718980(lVar2);
  LOCK();
  UNLOCK();
  if ((char)param_1[2] == '\0') {
    LOCK();
    UNLOCK();
    LOCK();
    UNLOCK();
    if (*(short *)(*param_1 + 0x12) != 1) {
      thunk_FUN_143719c70(0x21dbd06c);
      lVar3 = *param_1;
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      lVar4 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                        (*(longlong **)((longlong)pvVar1 + 0x58),0x1b0);
      if (lVar4 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = FUN_143836300(lVar4,lVar3);
      }
      thunk_FUN_143719c70(0x25659f08);
      LOCK();
      UNLOCK();
      if (*param_1 != 0) {
        FUN_14370c150();
      }
      *param_1 = lVar3;
    }
    LOCK();
    UNLOCK();
    *(undefined1 *)(param_1 + 2) = 1;
  }
  FUN_143718b00(lVar2);
  return *param_1;
}



// FUNCTION 142fbdb90 FUN_142fbdb90 body=357 status=ok
// SIG undefined FUN_142fbdb90(void)

longlong FUN_142fbdb90(longlong *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  LOCK();
  UNLOCK();
  lVar2 = param_1[1];
  if (param_1[1] == 0) {
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar1 + 0x58),0x40);
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_143718910(lVar2);
    }
    LOCK();
    lVar4 = param_1[1];
    bVar5 = lVar4 == 0;
    if (bVar5) {
      param_1[1] = lVar3;
      lVar4 = 0;
    }
    UNLOCK();
    lVar2 = lVar3;
    if ((!bVar5) && (lVar2 = lVar4, lVar3 != 0)) {
      FUN_143718950(lVar3);
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),lVar3,0x40);
    }
  }
  FUN_143718980(lVar2);
  LOCK();
  UNLOCK();
  if ((char)param_1[2] == '\0') {
    LOCK();
    UNLOCK();
    LOCK();
    UNLOCK();
    if (*(short *)(*param_1 + 0x12) != 1) {
      thunk_FUN_143719c70(0x21dbd06c);
      lVar3 = *param_1;
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      lVar4 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                        (*(longlong **)((longlong)pvVar1 + 0x58),0xa0);
      if (lVar4 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = FUN_14383bd50(lVar4,lVar3);
      }
      thunk_FUN_143719c70(0x25659f08);
      LOCK();
      UNLOCK();
      if (*param_1 != 0) {
        FUN_14370c150();
      }
      *param_1 = lVar3;
    }
    LOCK();
    UNLOCK();
    *(undefined1 *)(param_1 + 2) = 1;
  }
  FUN_143718b00(lVar2);
  return *param_1;
}



// FUNCTION 142fbdd00 FUN_142fbdd00 body=24 status=ok
// SIG undefined FUN_142fbdd00(void)

undefined8 FUN_142fbdd00(longlong param_1,longlong *param_2,int param_3)

{
  if ((param_3 == 8) && (*param_2 == *(longlong *)(param_1 + 0x18))) {
    return 1;
  }
  return 0;
}



// FUNCTION 142fbdd20 FUN_142fbdd20 body=210 status=ok
// SIG undefined FUN_142fbdd20(void)

void FUN_142fbdd20(byte *param_1,undefined1 (*param_2) [16])

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  
  bVar1 = *param_1;
  if (bVar1 != 0) {
    uVar2 = *(uint *)*param_2;
    uVar3 = *(uint *)(*param_2 + 4);
    uVar4 = *(uint *)(*param_2 + 8);
    uVar5 = *(uint *)param_2[1];
    uVar6 = *(uint *)(param_2[1] + 4);
    uVar7 = *(uint *)(param_2[1] + 8);
    uVar20 = (uint)bVar1;
    uVar14 = -(uint)(0x16a8300 << uVar20 < 0);
    uVar15 = -(uint)(0x502ab000 << uVar20 < 0);
    uVar16 = -(uint)(0xa2a8c00 << uVar20 < 0);
    uVar17 = -(uint)(0xa154c00 << uVar20 < 0);
    uVar18 = -(uint)(0x1554300 << uVar20 < 0);
    uVar19 = -(uint)(0x50157000 << uVar20 < 0);
    uVar20 = -(uint)(0 << uVar20 < 0);
    auVar10._0_4_ = uVar4 & uVar17;
    auVar10._4_4_ = uVar2 & uVar18;
    auVar10._8_4_ = uVar3 & uVar19;
    auVar10._12_4_ = *(uint *)(*param_2 + 0xc) & uVar20;
    auVar11._0_4_ = ~uVar17 & (uVar3 & uVar14 | ~uVar14 & uVar2);
    auVar11._4_4_ = ~uVar18 & (uVar4 & uVar15 | ~uVar15 & uVar3);
    auVar11._8_4_ = ~uVar19 & (uVar2 & uVar16 | ~uVar16 & uVar4);
    auVar11._12_4_ = ~uVar20 & *(uint *)(*param_2 + 0xc);
    uVar8 = (ulonglong)bVar1;
    auVar13._0_4_ = (0xae71e0U >> uVar8) << 0x1f;
    auVar13._4_4_ = (0xb9e306U >> uVar8) << 0x1f;
    auVar13._8_4_ = (0xeb903cU >> uVar8) << 0x1f;
    auVar13._12_4_ = (0U >> uVar8) << 0x1f;
    auVar12._0_4_ = ~uVar17 & (uVar6 & uVar14 | ~uVar14 & uVar5);
    auVar12._4_4_ = ~uVar18 & (uVar7 & uVar15 | ~uVar15 & uVar6);
    auVar12._8_4_ = ~uVar19 & (uVar5 & uVar16 | ~uVar16 & uVar7);
    auVar12._12_4_ = ~uVar20 & *(uint *)(param_2[1] + 0xc);
    auVar9._4_4_ = uVar5 & uVar18;
    auVar9._0_4_ = uVar7 & uVar17;
    auVar9._8_4_ = uVar6 & uVar19;
    auVar9._12_4_ = *(uint *)(param_2[1] + 0xc) & uVar20;
    auVar11 = auVar13 ^ (auVar11 | auVar10);
    auVar13 = auVar13 ^ (auVar12 | auVar9);
    auVar9 = minps(auVar11,auVar13);
    auVar12 = maxps(auVar11,auVar13);
    *param_2 = auVar9;
    param_2[1] = auVar12;
  }
  return;
}



// FUNCTION 142fbde00 FUN_142fbde00 body=52 status=ok
// SIG undefined FUN_142fbde00(void)

void FUN_142fbde00(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x98) = param_2;
    return;
  }
  lVar1 = FUN_142fbdb90();
  *(undefined4 *)(lVar1 + 0x98) = param_2;
  return;
}



// FUNCTION 142fbde40 FUN_142fbde40 body=368 status=ok
// SIG undefined FUN_142fbde40(void)

ulonglong FUN_142fbde40(longlong param_1,longlong param_2,longlong param_3)

{
  char extraout_AL;
  char extraout_AL_00;
  uint7 extraout_var;
  uint7 extraout_var_00;
  ulonglong uVar1;
  uint7 uVar2;
  char *pcVar3;
  char *pcVar4;
  ulonglong uVar5;
  undefined8 local_48;
  undefined4 uStack_40;
  float fStack_3c;
  undefined4 local_38;
  
  uVar1 = *(ulonglong *)(param_1 + 0xf38);
  uVar5 = uVar1;
  if (uVar1 == 0) {
    uVar5 = param_1 + 0x738;
  }
  pcVar4 = (char *)((longlong)*(int *)(param_2 + 0x18) * 0x40 + uVar5);
  if ((*pcVar4 == '\0') ||
     (pcVar3 = (char *)((longlong)*(int *)(param_3 + 0x18) * 0x40 + uVar5), *pcVar3 == '\0')) {
    return uVar1 & 0xffffffffffffff00;
  }
  UAIBlueprintHelperLibrary::IsValidAILocation(pcVar4 + 0x24);
  uVar2 = extraout_var;
  if (extraout_AL == '\0') {
LAB_142fbdf9c:
    uVar1 = CONCAT71(uVar2,1);
  }
  else {
    local_48 = *(undefined8 *)(pcVar4 + 0x24);
    local_38 = *(undefined4 *)(pcVar4 + 0x34);
    _uStack_40 = CONCAT44((*(float *)(pcVar3 + 4) + *(float *)(pcVar4 + 4)) -
                          *(float *)(pcVar4 + 0x30),(int)*(undefined8 *)(pcVar4 + 0x2c));
    FUN_142c73900(&local_48,pcVar3 + 0x14);
    if (extraout_AL_00 == '\0') {
      uVar2 = extraout_var_00;
      if ((SQRT((*(float *)(pcVar3 + 0x18) - *(float *)(pcVar4 + 0x18)) *
                (*(float *)(pcVar3 + 0x18) - *(float *)(pcVar4 + 0x18)) +
                (*(float *)(pcVar3 + 0x14) - *(float *)(pcVar4 + 0x14)) *
                (*(float *)(pcVar3 + 0x14) - *(float *)(pcVar4 + 0x14)) +
                (*(float *)(pcVar3 + 0x1c) - *(float *)(pcVar4 + 0x1c)) *
                (*(float *)(pcVar3 + 0x1c) - *(float *)(pcVar4 + 0x1c))) - *(float *)(pcVar3 + 4)) -
          *(float *)(pcVar4 + 4) <=
          SQRT((*(float *)(pcVar4 + 0x28) - *(float *)(pcVar4 + 0x18)) *
               (*(float *)(pcVar4 + 0x28) - *(float *)(pcVar4 + 0x18)) +
               (*(float *)(pcVar4 + 0x24) - *(float *)(pcVar4 + 0x14)) *
               (*(float *)(pcVar4 + 0x24) - *(float *)(pcVar4 + 0x14)) +
               (*(float *)(pcVar4 + 0x2c) - *(float *)(pcVar4 + 0x1c)) *
               (*(float *)(pcVar4 + 0x2c) - *(float *)(pcVar4 + 0x1c))) - *(float *)(pcVar4 + 0x30))
      goto LAB_142fbdf9c;
    }
    uVar1 = (ulonglong)extraout_var_00 << 8;
  }
  return uVar1;
}



// FUNCTION 142fbdfb0 FUN_142fbdfb0 body=174 status=ok
// SIG undefined FUN_142fbdfb0(void)

void FUN_142fbdfb0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  float local_18;
  float fStack_14;
  float local_10;
  
  local_18 = *(float *)(param_2 + 0x80) * 100.0;
  fStack_14 = *(float *)(param_2 + 0x84) * 100.0;
  local_10 = *(float *)(param_2 + 0x88) * 100.0;
  lVar1 = *(longlong *)(param_1 + 0x728);
  if (*(longlong *)(param_1 + 0x728) == 0) {
    lVar1 = param_1 + 0x28;
  }
  lVar2 = *(longlong *)(param_1 + 0xf38);
  if (*(longlong *)(param_1 + 0xf38) == 0) {
    lVar2 = param_1 + 0x738;
  }
  FUN_142f96820((longlong)*(int *)(param_2 + 0x18) * 0x40 + lVar2,
                lVar1 + (longlong)*(int *)(param_3 + 0x18) * 0x1c,&local_18,param_1 + 0x18);
  return;
}



// FUNCTION 142fbe0a0 FUN_142fbe0a0 body=53 status=ok
// SIG undefined FUN_142fbe0a0(void)

void FUN_142fbe0a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_145a14298;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142fbe0e0 FUN_142fbe0e0 body=162 status=ok
// SIG undefined FUN_142fbe0e0(void)

longlong FUN_142fbe0e0(void)

{
  if (DAT_146b446b8 == 0) {
    FUN_14171ccd0(L"/Script/GbxNav",L"GbxNavFlyLayer",&DAT_146b446b8,FUN_140447710,0x48,0x10000000,0
                  ,L"Engine",FUN_142fbf6c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_142fbe4e0,&LAB_140447700,0);
  }
  return DAT_146b446b8;
}



// FUNCTION 142fbe1b0 FUN_142fbe1b0 body=47 status=ok
// SIG undefined FUN_142fbe1b0(void)

longlong FUN_142fbe1b0(void)

{
  if (DAT_146b44730 == 0) {
    FUN_141786440(&DAT_146b44730,&PTR_FUN_145a11cc0);
  }
  return DAT_146b44730;
}



// FUNCTION 142fbe1e0 FUN_142fbe1e0 body=53 status=ok
// SIG undefined FUN_142fbe1e0(void)

void FUN_142fbe1e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &PTR_FUN_145a14b78;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142fbe240 FUN_142fbe240 body=53 status=ok
// SIG undefined FUN_142fbe240(void)

void FUN_142fbe240(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x3c;
    *puVar1 = &PTR_FUN_145a14c90;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142fbe290 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGPingUsable::GetPrivateStaticClass(void)

{
  if (DAT_146b446c8 == 0) {
    FUN_14171ccd0(L"/Script/GbxNav",L"GbxNavFlySection",&DAT_146b446c8,FUN_140447710,0x4a8,
                  0x10000000,0,L"Engine",&LAB_142fbf540,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_142fc0680,&LAB_140447700,0);
  }
  return DAT_146b446c8;
}



// FUNCTION 142fbe360 FUN_142fbe360 body=53 status=ok
// SIG undefined FUN_142fbe360(void)

void FUN_142fbe360(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_145a14da8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142fbe3e0 FUN_142fbe3e0 body=162 status=ok
// SIG undefined FUN_142fbe3e0(void)

longlong FUN_142fbe3e0(void)

{
  if (DAT_146b446d8 == 0) {
    FUN_14171ccd0(L"/Script/GbxNav",L"GbxNavFlySectionComponent",&DAT_146b446d8,FUN_140447710,2000,
                  0x10000000,0,L"Engine",&LAB_142fbf710,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142fc4450,&LAB_140447700,0);
  }
  return DAT_146b446d8;
}



// FUNCTION 142fbe4a0 FUN_142fbe4a0 body=53 status=ok
// SIG undefined FUN_142fbe4a0(void)

void FUN_142fbe4a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x128;
    *puVar1 = &PTR_FUN_145a150d8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142fbe4e0 FUN_142fbe4e0 body=162 status=ok
// SIG undefined FUN_142fbe4e0(void)

longlong FUN_142fbe4e0(void)

{
  if (DAT_146b44738 == 0) {
    FUN_14171ccd0(L"/Script/GbxNav",L"GbxNavLayer",&DAT_146b44738,FUN_140447710,0x38,0x10000000,0,
                  L"Engine",FUN_142fbf770,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_142ba7280,&LAB_140447700,0);
  }
  return DAT_146b44738;
}



// FUNCTION 142fbe590 FUN_142fbe590 body=162 status=ok
// SIG undefined FUN_142fbe590(void)

longlong FUN_142fbe590(void)

{
  if (DAT_146b446f8 == 0) {
    FUN_14171ccd0(L"/Script/GbxNav",L"GbxNavGlobalData",&DAT_146b446f8,FUN_140447710,0x78,0x10000000
                  ,0,L"Engine",FUN_142fbf730,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146b446f8;
}



// FUNCTION 142fbe640 FUN_142fbe640 body=162 status=ok
// SIG undefined FUN_142fbe640(void)

longlong FUN_142fbe640(void)

{
  if (DAT_146b44768 == 0) {
    FUN_14171ccd0(L"/Script/GbxNav",L"GbxNavMeshLayer",&DAT_146b44768,FUN_140447710,0x50,0x10000000,
                  0,L"Engine",FUN_142fbf7b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_142fbe4e0,&LAB_140447700,0);
  }
  return DAT_146b44768;
}



// FUNCTION 142fbe6f0 FUN_142fbe6f0 body=162 status=ok
// SIG undefined FUN_142fbe6f0(void)

longlong FUN_142fbe6f0(void)

{
  if (DAT_146b44578 == 0) {
    FUN_14171ccd0(L"/Script/GbxNav",L"GbxNavArea",&DAT_146b44578,FUN_140447710,0x58,0x10000000,0,
                  L"Engine",FUN_142fbf5d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPrimaryDataAsset::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b44578;
}



// FUNCTION 142fbe7b0 FUN_142fbe7b0 body=162 status=ok
// SIG undefined FUN_142fbe7b0(void)

longlong FUN_142fbe7b0(void)

{
  if (DAT_146b44598 == 0) {
    FUN_14171ccd0(L"/Script/GbxNav",L"GbxNavAreaData",&DAT_146b44598,FUN_140447710,0x40,0x10000000,0
                  ,L"Engine",FUN_142fbf620,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDataAsset::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b44598;
}



// FUNCTION 142fbe870 FUN_142fbe870 body=53 status=ok
// SIG undefined FUN_142fbe870(void)

void FUN_142fbe870(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_145a15510;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142fbe8b0 FUN_142fbe8b0 body=53 status=ok
// SIG undefined FUN_142fbe8b0(void)

void FUN_142fbe8b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_145a148b8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142fbe910 FUN_142fbe910 body=162 status=ok
// SIG undefined FUN_142fbe910(void)

longlong FUN_142fbe910(void)

{
  if (DAT_146b445d8 == 0) {
    FUN_14171ccd0(L"/Script/GbxNav",L"GbxNavBlueprintLibrary",&DAT_146b445d8,FUN_142fc0700,0x28,
                  0x10000000,0,L"Engine",FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146b445d8;
}



// FUNCTION 142fbe9c0 FUN_142fbe9c0 body=47 status=ok
// SIG undefined FUN_142fbe9c0(void)

longlong FUN_142fbe9c0(void)

{
  if (DAT_146b445d0 == 0) {
    FUN_141786440(&DAT_146b445d0,&PTR_FUN_145a124c0);
  }
  return DAT_146b445d0;
}



// FUNCTION 142fbe9f0 FUN_142fbe9f0 body=47 status=ok
// SIG undefined FUN_142fbe9f0(void)

longlong FUN_142fbe9f0(void)

{
  if (DAT_146b445a0 == 0) {
    FUN_141786a30(&DAT_146b445a0,&PTR_FUN_14676f240);
  }
  return DAT_146b445a0;
}



// FUNCTION 142fbea20 FUN_142fbea20 body=47 status=ok
// SIG undefined FUN_142fbea20(void)

longlong FUN_142fbea20(void)

{
  if (DAT_146b445a8 == 0) {
    FUN_141786a30(&DAT_146b445a8,&PTR_FUN_14676f3d0);
  }
  return DAT_146b445a8;
}



// FUNCTION 142fbea50 FUN_142fbea50 body=47 status=ok
// SIG undefined FUN_142fbea50(void)

longlong FUN_142fbea50(void)

{
  if (DAT_146b445b0 == 0) {
    FUN_141786a30(&DAT_146b445b0,&PTR_FUN_14676f490);
  }
  return DAT_146b445b0;
}



// FUNCTION 142fbea80 FUN_142fbea80 body=47 status=ok
// SIG undefined FUN_142fbea80(void)

longlong FUN_142fbea80(void)

{
  if (DAT_146b445b8 == 0) {
    FUN_141786a30(&DAT_146b445b8,&PTR_FUN_14676f550);
  }
  return DAT_146b445b8;
}



// FUNCTION 142fbeab0 FUN_142fbeab0 body=47 status=ok
// SIG undefined FUN_142fbeab0(void)

longlong FUN_142fbeab0(void)

{
  if (DAT_146b445c0 == 0) {
    FUN_141786a30(&DAT_146b445c0,&PTR_FUN_14676f610);
  }
  return DAT_146b445c0;
}



// FUNCTION 142fbeae0 FUN_142fbeae0 body=47 status=ok
// SIG undefined FUN_142fbeae0(void)

longlong FUN_142fbeae0(void)

{
  if (DAT_146b445c8 == 0) {
    FUN_141786a30(&DAT_146b445c8,&PTR_FUN_14676f710);
  }
  return DAT_146b445c8;
}



// FUNCTION 142fbeb10 FUN_142fbeb10 body=53 status=ok
// SIG undefined FUN_142fbeb10(void)

void FUN_142fbeb10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_145a15628;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142fbeb60 FUN_142fbeb60 body=53 status=ok
// SIG undefined FUN_142fbeb60(void)

void FUN_142fbeb60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_145a14a30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142fbebb0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMovieScene3DTransformSection::GetPrivateStaticClass(void)

{
  if (DAT_146b44600 == 0) {
    FUN_14171ccd0(L"/Script/GbxNav",L"GbxNavBoxComponent",&DAT_146b44600,FUN_142fc0730,0x730,
                  0x10000000,0,L"Engine",&LAB_142fbf660,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1412e8700,&LAB_140447700,0);
  }
  return DAT_146b44600;
}



// FUNCTION 142fbec60 FUN_142fbec60 body=47 status=ok
// SIG undefined FUN_142fbec60(void)

longlong FUN_142fbec60(void)

{
  if (DAT_146b445f8 == 0) {
    FUN_141786440(&DAT_146b445f8,&PTR_GetPrivateStaticClass_145a129e0);
  }
  return DAT_146b445f8;
}



// FUNCTION 142fbec90 FUN_142fbec90 body=162 status=ok
// SIG undefined FUN_142fbec90(void)

longlong FUN_142fbec90(void)

{
  if (DAT_146b444c0 == 0) {
    FUN_14171ccd0(L"/Script/GbxNav",L"AIVehicleFlightComponent",&DAT_146b444c0,FUN_142fc06a0,0x2c0,
                  0x10000004,0,L"Engine",&LAB_142fbf560,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1429365a0,&LAB_140447700,0);
  }
  return DAT_146b444c0;
}



// FUNCTION 142fbed40 FUN_142fbed40 body=47 status=ok
// SIG undefined FUN_142fbed40(void)

longlong FUN_142fbed40(void)

{
  if (DAT_146b445f0 == 0) {
    FUN_141786a30(&DAT_146b445f0,&PTR_FUN_14676f8c0);
  }
  return DAT_146b445f0;
}



// FUNCTION 142fbed80 Z_Construct_UPackage__Script_Engine body=47 status=ok
// SIG undefined Z_Construct_UPackage__Script_Engine(void)

longlong Z_Construct_UPackage__Script_Engine(void)

{
  if (DAT_146b444c8 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146b444c8,&PTR_s__Script_GbxNav_145a13e58);
  }
  return DAT_146b444c8;
}



// FUNCTION 142fbedb0 FUN_142fbedb0 body=47 status=ok
// SIG undefined FUN_142fbedb0(void)

longlong FUN_142fbedb0(void)

{
  if (DAT_146b444b8 == 0) {
    FUN_141786440(&DAT_146b444b8,&PTR_FUN_145a12d70);
  }
  return DAT_146b444b8;
}



// FUNCTION 142fbede0 FUN_142fbede0 body=47 status=ok
// SIG undefined FUN_142fbede0(void)

longlong FUN_142fbede0(void)

{
  if (DAT_146b444b0 == 0) {
    FUN_141786a30(&DAT_146b444b0,&PTR_FUN_14676e3a0);
  }
  return DAT_146b444b0;
}



// FUNCTION 142fbee10 FUN_142fbee10 body=53 status=ok
// SIG undefined FUN_142fbee10(void)

void FUN_142fbee10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_145a13d30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142fbee60 FUN_142fbee60 body=162 status=ok
// SIG undefined FUN_142fbee60(void)

longlong FUN_142fbee60(void)

{
  if (DAT_146b44500 == 0) {
    FUN_14171ccd0(L"/Script/GbxNav",L"GbxNavAnimTable",&DAT_146b44500,FUN_140447710,0x58,0x10000000,
                  0,L"Engine",&LAB_142fbf5c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UXPrimaryDataAsset::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b44500;
}



// FUNCTION 142fbef10 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UCreateSessionCallbackProxy::GetPrivateStaticClass(void)

{
  if (DAT_146b44518 == 0) {
    FUN_14171ccd0(L"/Script/GbxNav",L"GbxAnimStateManager_AINav",&DAT_146b44518,
                  StaticRegisterNativesUCreateSessionCallbackProxy,0x90,0x10000000,0,L"Engine",
                  &LAB_142fbf5b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14294d7a0,&LAB_140447700,0);
  }
  return DAT_146b44518;
}



// FUNCTION 142fbefc0 FUN_142fbefc0 body=47 status=ok
// SIG undefined FUN_142fbefc0(void)

longlong FUN_142fbefc0(void)

{
  if (DAT_146b44688 == 0) {
    FUN_141786440(&DAT_146b44688,&PTR_GetPrivateStaticClass_145a13450);
  }
  return DAT_146b44688;
}



// FUNCTION 142fbeff0 FUN_142fbeff0 body=47 status=ok
// SIG undefined FUN_142fbeff0(void)

longlong FUN_142fbeff0(void)

{
  if (DAT_146b44668 == 0) {
    FUN_141786a30(&DAT_146b44668,&PTR_FUN_146770390);
  }
  return DAT_146b44668;
}



// FUNCTION 142fbf020 FUN_142fbf020 body=47 status=ok
// SIG undefined FUN_142fbf020(void)

longlong FUN_142fbf020(void)

{
  if (DAT_146b44670 == 0) {
    FUN_141786a30(&DAT_146b44670,&PTR_FUN_1467703d0);
  }
  return DAT_146b44670;
}



// FUNCTION 142fbf050 FUN_142fbf050 body=47 status=ok
// SIG undefined FUN_142fbf050(void)

longlong FUN_142fbf050(void)

{
  if (DAT_146b44678 == 0) {
    FUN_141786a30(&DAT_146b44678,&PTR_FUN_146770450);
  }
  return DAT_146b44678;
}



// FUNCTION 142fbf080 FUN_142fbf080 body=47 status=ok
// SIG undefined FUN_142fbf080(void)

longlong FUN_142fbf080(void)

{
  if (DAT_146b44680 == 0) {
    FUN_141786a30(&DAT_146b44680,&PTR_FUN_1467704d0);
  }
  return DAT_146b44680;
}



// FUNCTION 142fbf0b0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UDEPRECATED_StaminaCondition::StaticClass(void)

{
  if (DAT_146b44528 == 0) {
    FUN_14171ccd0(L"/Script/GbxNav",L"GbxAnimStateManager_NavIdle",&DAT_146b44528,FUN_140447710,0x38
                  ,0x12000000,0,L"Engine",InternalConstructor<UAIResource_Logic>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14294d7a0,&LAB_140447700,0);
  }
  return DAT_146b44528;
}



// FUNCTION 142fbf160 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UDEPRECATED_StaminaStateDecorator::StaticClass(void)

{
  if (DAT_146b44538 == 0) {
    FUN_14171ccd0(L"/Script/GbxNav",L"GbxNavIdleTurnTable",&DAT_146b44538,FUN_140447710,0x48,
                  0x12000000,0,L"Engine",InternalConstructor<UAnimNotify_PlayChatter>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UXPrimaryDataAsset::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b44538;
}



// FUNCTION 142fbf210 FUN_142fbf210 body=162 status=ok
// SIG undefined FUN_142fbf210(void)

longlong FUN_142fbf210(void)

{
  if (DAT_146b44548 == 0) {
    FUN_14171ccd0(L"/Script/GbxNav",L"GbxAnimStateManager_NavIdleTurn",&DAT_146b44548,FUN_140447710,
                  0x40,0x12000000,0,L"Engine",FUN_142e2ea50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_142e2d6e0,&LAB_140447700,0);
  }
  return DAT_146b44548;
}



// FUNCTION 142fbf2c0 FUN_142fbf2c0 body=162 status=ok
// SIG undefined FUN_142fbf2c0(void)

longlong FUN_142fbf2c0(void)

{
  if (DAT_146b44558 == 0) {
    FUN_14171ccd0(L"/Script/GbxNav",L"GbxAnimStateManager_NavTable",&DAT_146b44558,FUN_140447710,
                  0x40,0x12000000,0,L"Engine",FUN_142e2ea50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_142fbf210,&LAB_140447700,0);
  }
  return DAT_146b44558;
}



// FUNCTION 142fbf370 FUN_142fbf370 body=162 status=ok
// SIG undefined FUN_142fbf370(void)

longlong FUN_142fbf370(void)

{
  if (DAT_146b44568 == 0) {
    FUN_14171ccd0(L"/Script/GbxNav",L"GbxAnimStateManager_NavHop",&DAT_146b44568,FUN_140447710,0x40,
                  0x12000000,0,L"Engine",FUN_142e2ea50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_142e2d6e0,&LAB_140447700,0);
  }
  return DAT_146b44568;
}



// FUNCTION 142fbf430 FUN_142fbf430 body=47 status=ok
// SIG undefined FUN_142fbf430(void)

longlong FUN_142fbf430(void)

{
  if (DAT_146b44510 == 0) {
    FUN_141786440(&DAT_146b44510,&PTR_GetPrivateStaticClass_145a0fc50);
  }
  return DAT_146b44510;
}



// FUNCTION 142fbf460 FUN_142fbf460 body=47 status=ok
// SIG undefined FUN_142fbf460(void)

longlong FUN_142fbf460(void)

{
  if (DAT_146b44508 == 0) {
    FUN_141786a30(&DAT_146b44508,&PTR_FUN_14676e9b0);
  }
  return DAT_146b44508;
}



// FUNCTION 142fbf490 FUN_142fbf490 body=47 status=ok
// SIG undefined FUN_142fbf490(void)

longlong FUN_142fbf490(void)

{
  if (DAT_146b44540 == 0) {
    FUN_141786440(&DAT_146b44540,&PTR_FUN_145a104b0);
  }
  return DAT_146b44540;
}



// FUNCTION 142fbf4c0 FUN_142fbf4c0 body=53 status=ok
// SIG undefined FUN_142fbf4c0(void)

void FUN_142fbf4c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_145a14180;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142fbf500 FUN_142fbf500 body=53 status=ok
// SIG undefined FUN_142fbf500(void)

void FUN_142fbf500(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb8;
    *puVar1 = &PTR_FUN_145a14fa0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142fbf580 InternalConstructor<UAIResource_Logic> body=41 status=ok
// SIG undefined InternalConstructor<UAIResource_Logic>(void)

void InternalConstructor<UAIResource_Logic>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1422a21a0(puVar1,param_1);
    *puVar1 = &PTR_FUN_145a13e80;
  }
  return;
}



// FUNCTION 142fbf5d0 FUN_142fbf5d0 body=69 status=ok
// SIG undefined FUN_142fbf5d0(void)

void FUN_142fbf5d0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UDataAsset::UDataAsset(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__145a143c0;
    *(undefined2 *)((longlong)puVar1 + 0x31) = 0xa0;
    *(undefined1 *)(puVar1 + 6) = 0x30;
    *(undefined1 *)((longlong)puVar1 + 0x33) = 0x80;
    puVar1[7] = 0;
    puVar1[8] = 0;
    *(undefined1 *)(puVar1 + 10) = 3;
  }
  return;
}



// FUNCTION 142fbf620 FUN_142fbf620 body=51 status=ok
// SIG undefined FUN_142fbf620(void)

void FUN_142fbf620(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UDataAsset::UDataAsset(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__145a14640;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  return;
}



// FUNCTION 142fbf6c0 FUN_142fbf6c0 body=69 status=ok
// SIG undefined FUN_142fbf6c0(void)

void FUN_142fbf6c0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UDataAsset::UDataAsset(puVar1,param_1);
    *(undefined2 *)((longlong)puVar1 + 0x31) = 0xa0;
    *(undefined1 *)(puVar1 + 6) = 0x30;
    *(undefined1 *)((longlong)puVar1 + 0x33) = 0x80;
    *puVar1 = &PTR_FUN_144ad2400;
    *(undefined4 *)(puVar1 + 7) = 0x42c80000;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x42c80000;
  }
  return;
}



// FUNCTION 142fbf730 FUN_142fbf730 body=59 status=ok
// SIG undefined FUN_142fbf730(void)

void FUN_142fbf730(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__145a151f0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
  }
  return;
}



// FUNCTION 142fbf770 FUN_142fbf770 body=55 status=ok
// SIG undefined FUN_142fbf770(void)

void FUN_142fbf770(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UDataAsset::UDataAsset(puVar1,param_1);
    *puVar1 = &PTR_FUN_1449a7910;
    *(undefined2 *)((longlong)puVar1 + 0x31) = 0xa0;
    *(undefined1 *)(puVar1 + 6) = 0x30;
    *(undefined1 *)((longlong)puVar1 + 0x33) = 0x80;
  }
  return;
}



// FUNCTION 142fbf7b0 FUN_142fbf7b0 body=84 status=ok
// SIG undefined FUN_142fbf7b0(void)

void FUN_142fbf7b0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UDataAsset::UDataAsset(puVar1,param_1);
    *(undefined2 *)((longlong)puVar1 + 0x31) = 0xa0;
    *(undefined1 *)(puVar1 + 6) = 0x30;
    *(undefined1 *)((longlong)puVar1 + 0x33) = 0x80;
    *puVar1 = &PTR_FUN_1440f96c8;
    *(undefined4 *)(puVar1 + 7) = 0x42c80000;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x42c80000;
    *(undefined1 *)(puVar1 + 8) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0x42c80000;
    *(undefined1 *)(puVar1 + 9) = 0;
  }
  return;
}



// FUNCTION 142fbf810 FUN_142fbf810 body=484 status=ok
// SIG undefined FUN_142fbf810(void)

undefined8 * FUN_142fbf810(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 local_38;
  undefined1 local_30 [24];
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  local_38 = param_2[8];
  FString::FString(local_30,param_2 + 9);
  FSoftObjectPath::operator=(param_1 + 8,&local_38);
  puVar3 = param_1 + 0xb;
  if (puVar3 != param_2 + 0xb) {
    iVar1 = *(int *)(param_2 + 0xc);
    pvVar2 = (void *)param_2[0xb];
    *(int *)(param_1 + 0xc) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 100) == 0)) {
      *(undefined4 *)((longlong)param_1 + 100) = 0;
    }
    else {
      TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1);
      _guard_xfg_dispatch_icall_nop((void *)*puVar3,pvVar2,(longlong)iVar1 * 0x28);
    }
  }
  puVar3 = param_1 + 0xd;
  if (puVar3 != param_2 + 0xd) {
    iVar1 = *(int *)(param_2 + 0xe);
    pvVar2 = (void *)param_2[0xd];
    *(int *)(param_1 + 0xe) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0x74) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x74) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1);
      _guard_xfg_dispatch_icall_nop((void *)*puVar3,pvVar2,(longlong)iVar1 << 4);
    }
  }
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  *(undefined1 *)((longlong)param_1 + 0x79) = *(undefined1 *)((longlong)param_2 + 0x79);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x7c);
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  param_1[0x14] = param_2[0x14];
  puVar3 = param_1 + 0x15;
  if (puVar3 != param_2 + 0x15) {
    iVar1 = *(int *)(param_2 + 0x16);
    pvVar2 = (void *)param_2[0x15];
    *(int *)(param_1 + 0x16) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0xb4) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
      return param_1;
    }
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar3,iVar1);
    _guard_xfg_dispatch_icall_nop((void *)*puVar3,pvVar2,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 142fbfa00 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UHeightfieldMinMaxTexture::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 142fbfb50 Construct body=50 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FAnimNode_StateResult>::Construct
               (undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_142c8c8a0(param_2);
  *param_2 = &PTR_FUN_144a9faa8;
  return;
}



// FUNCTION 142fbfb90 FUN_142fbfb90 body=91 status=ok
// SIG undefined FUN_142fbfb90(void)

void FUN_142fbfb90(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = 0;
  UCheatManagerGunfire::GetAllCheats(param_2 + 1);
  *(undefined2 *)(param_2 + 3) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0x43fa0000;
  *(undefined1 *)(param_2 + 4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0x3f800000;
  *(undefined4 *)(param_2 + 5) = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0x3f800000;
  return;
}



// FUNCTION 142fbfce0 FUN_142fbfce0 body=216 status=ok
// SIG undefined FUN_142fbfce0(void)

undefined8 FUN_142fbfce0(undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  
  if (param_4 != 0) {
    puVar6 = (undefined8 *)(param_3 + 0x28);
    do {
      uVar3 = *(undefined4 *)((longlong)puVar6 + -0x24);
      uVar4 = *(undefined4 *)(puVar6 + -4);
      uVar5 = *(undefined4 *)((longlong)puVar6 + -0x1c);
      *param_2 = *(undefined4 *)(puVar6 + -5);
      param_2[1] = uVar3;
      param_2[2] = uVar4;
      param_2[3] = uVar5;
      puVar1 = (undefined8 *)(param_2 + 10);
      *(undefined8 *)(param_2 + 4) = puVar6[-3];
      param_2[6] = *(undefined4 *)(puVar6 + -2);
      *(undefined8 *)(param_2 + 8) = puVar6[-1];
      if (puVar1 != puVar6) {
        iVar2 = *(int *)(puVar6 + 1);
        _Src = (void *)*puVar6;
        param_2[0xc] = iVar2;
        if ((iVar2 == 0) && (param_2[0xd] == 0)) {
          param_2[0xd] = 0;
        }
        else {
          TArray<FVector,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 0xc);
        }
      }
      puVar6 = puVar6 + 7;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0xe;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142fbfdc0 FUN_142fbfdc0 body=74 status=ok
// SIG undefined FUN_142fbfdc0(void)

undefined1 FUN_142fbfdc0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_142fbf810(param_2 + param_3,param_3);
      param_3 = param_3 + 0xb8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142fbfeb0 FUN_142fbfeb0 body=168 status=ok
// SIG undefined FUN_142fbfeb0(void)

undefined8 FUN_142fbfeb0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      iVar2 = *(int *)(param_3 + 1);
      _Src = (void *)*param_3;
      *(int *)(param_2 + 1) = iVar2;
      if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        TArray<SWaapiPickerRow::KeyValueArgs,FDefaultAllocator>::ResizeForCopy(param_2,iVar2);
        _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar2 << 5);
      }
    }
    puVar1 = param_3 + 2;
    param_3 = param_3 + 3;
    param_2[2] = *puVar1;
    param_2 = param_2 + 3;
  }
  return 1;
}



// FUNCTION 142fbff60 FUN_142fbff60 body=79 status=ok
// SIG undefined FUN_142fbff60(void)

void FUN_142fbff60(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xa8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x48) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142fbffb0 FUN_142fbffb0 body=85 status=ok
// SIG undefined FUN_142fbffb0(void)

void FUN_142fbffb0(void)

{
  if (DAT_146b44350 == 0) {
    if (DAT_146b444c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b444c8,&PTR_s__Script_GbxNav_145a13e58);
    }
    DAT_146b44350 = GetStaticEnum(FUN_142fc1080,DAT_146b444c8,L"EAvoidWhileIdle");
  }
  return;
}



// FUNCTION 142fc0010 FUN_142fc0010 body=85 status=ok
// SIG undefined FUN_142fc0010(void)

void FUN_142fc0010(void)

{
  if (DAT_146b44348 == 0) {
    if (DAT_146b444c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b444c8,&PTR_s__Script_GbxNav_145a13e58);
    }
    DAT_146b44348 = GetStaticEnum(FUN_142fc10b0,DAT_146b444c8,L"EFlightMovementState");
  }
  return;
}



// FUNCTION 142fc0070 FUN_142fc0070 body=85 status=ok
// SIG undefined FUN_142fc0070(void)

void FUN_142fc0070(void)

{
  if (DAT_146b44360 == 0) {
    if (DAT_146b444c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b444c8,&PTR_s__Script_GbxNav_145a13e58);
    }
    DAT_146b44360 = GetStaticEnum(FUN_142fc10e0,DAT_146b444c8,L"EGbxGoalResult");
  }
  return;
}



// FUNCTION 142fc00d0 FUN_142fc00d0 body=85 status=ok
// SIG undefined FUN_142fc00d0(void)

void FUN_142fc00d0(void)

{
  if (DAT_146b44368 == 0) {
    if (DAT_146b444c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b444c8,&PTR_s__Script_GbxNav_145a13e58);
    }
    DAT_146b44368 = GetStaticEnum(FUN_142fc1110,DAT_146b444c8,L"EGbxNavAnimTableType");
  }
  return;
}



// FUNCTION 142fc0130 FUN_142fc0130 body=85 status=ok
// SIG undefined FUN_142fc0130(void)

void FUN_142fc0130(void)

{
  if (DAT_146b44320 == 0) {
    if (DAT_146b444c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b444c8,&PTR_s__Script_GbxNav_145a13e58);
    }
    DAT_146b44320 = GetStaticEnum(FUN_142fc1140,DAT_146b444c8,L"EGbxNavFlyRoundingMode");
  }
  return;
}



// FUNCTION 142fc0190 FUN_142fc0190 body=85 status=ok
// SIG undefined FUN_142fc0190(void)

void FUN_142fc0190(void)

{
  if (DAT_146b44328 == 0) {
    if (DAT_146b444c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b444c8,&PTR_s__Script_GbxNav_145a13e58);
    }
    DAT_146b44328 = GetStaticEnum(FUN_142fc1170,DAT_146b444c8,L"EGbxNavGoalCheats");
  }
  return;
}



// FUNCTION 142fc01f0 FUN_142fc01f0 body=85 status=ok
// SIG undefined FUN_142fc01f0(void)

void FUN_142fc01f0(void)

{
  if (DAT_146b44340 == 0) {
    if (DAT_146b444c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b444c8,&PTR_s__Script_GbxNav_145a13e58);
    }
    DAT_146b44340 = GetStaticEnum(FUN_142fc11a0,DAT_146b444c8,L"EGbxNavGoalReach");
  }
  return;
}



// FUNCTION 142fc0250 FUN_142fc0250 body=85 status=ok
// SIG undefined FUN_142fc0250(void)

void FUN_142fc0250(void)

{
  if (DAT_146b44318 == 0) {
    if (DAT_146b444c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b444c8,&PTR_s__Script_GbxNav_145a13e58);
    }
    DAT_146b44318 = GetStaticEnum(FUN_142fc11d0,DAT_146b444c8,L"EGbxNavMoveStyleDefault");
  }
  return;
}



// FUNCTION 142fc02b0 FUN_142fc02b0 body=85 status=ok
// SIG undefined FUN_142fc02b0(void)

void FUN_142fc02b0(void)

{
  if (DAT_146b44358 == 0) {
    if (DAT_146b444c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b444c8,&PTR_s__Script_GbxNav_145a13e58);
    }
    DAT_146b44358 = GetStaticEnum(FUN_142fc1200,DAT_146b444c8,L"EGbxNavState");
  }
  return;
}



// FUNCTION 142fc0310 FUN_142fc0310 body=85 status=ok
// SIG undefined FUN_142fc0310(void)

void FUN_142fc0310(void)

{
  if (DAT_146b44330 == 0) {
    if (DAT_146b444c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b444c8,&PTR_s__Script_GbxNav_145a13e58);
    }
    DAT_146b44330 = GetStaticEnum(FUN_142fc1230,DAT_146b444c8,L"EGbxOffsetType");
  }
  return;
}



// FUNCTION 142fc0370 FUN_142fc0370 body=85 status=ok
// SIG undefined FUN_142fc0370(void)

void FUN_142fc0370(void)

{
  if (DAT_146b44338 == 0) {
    if (DAT_146b444c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b444c8,&PTR_s__Script_GbxNav_145a13e58);
    }
    DAT_146b44338 = GetStaticEnum(FUN_142fc1260,DAT_146b444c8,L"EGbxStrafeType");
  }
  return;
}



// FUNCTION 142fc0410 FUN_142fc0410 body=162 status=ok
// SIG undefined FUN_142fc0410(void)

longlong FUN_142fc0410(void)

{
  if (DAT_146b44648 == 0) {
    FUN_14171ccd0(L"/Script/GbxNav",L"GbxNavCharacterMovementComponent",&DAT_146b44648,FUN_140447710
                  ,0x2890,0x10000004,0,L"Engine",&LAB_142fbf680,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_142e39920,&LAB_140447700,0);
  }
  return DAT_146b44648;
}



// FUNCTION 142fc04c0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AAICharacter::GetPrivateStaticClass(void)

{
  if (DAT_146b44690 == 0) {
    FUN_14171ccd0(L"/Script/GbxNav",L"GbxNavComponent",&DAT_146b44690,FUN_142fc0760,0xaf0,0x10000000
                  ,0,L"Engine",&LAB_142fbf6a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_142e6a0e0,&LAB_140447700,0);
  }
  return DAT_146b44690;
}



// FUNCTION 142fc0570 FUN_142fc0570 body=6 status=ok
// SIG undefined FUN_142fc0570(void)

undefined8 FUN_142fc0570(void)

{
  return 0xd75de849;
}



// FUNCTION 142fc0580 FUN_142fc0580 body=6 status=ok
// SIG undefined FUN_142fc0580(void)

undefined8 FUN_142fc0580(void)

{
  return 0xfdb9bcab;
}



// FUNCTION 142fc0590 FUN_142fc0590 body=6 status=ok
// SIG undefined FUN_142fc0590(void)

undefined8 FUN_142fc0590(void)

{
  return 0x57781114;
}



// FUNCTION 142fc05a0 FUN_142fc05a0 body=6 status=ok
// SIG undefined FUN_142fc05a0(void)

undefined8 FUN_142fc05a0(void)

{
  return 0xa29e04f7;
}



// FUNCTION 142fc05b0 FUN_142fc05b0 body=6 status=ok
// SIG undefined FUN_142fc05b0(void)

undefined8 FUN_142fc05b0(void)

{
  return 0x61a2c75c;
}



// FUNCTION 142fc05c0 FUN_142fc05c0 body=6 status=ok
// SIG undefined FUN_142fc05c0(void)

undefined8 FUN_142fc05c0(void)

{
  return 0xca8ae403;
}



// FUNCTION 142fc05d0 FUN_142fc05d0 body=6 status=ok
// SIG undefined FUN_142fc05d0(void)

undefined8 FUN_142fc05d0(void)

{
  return 0xa413fcf8;
}



// FUNCTION 142fc05e0 FUN_142fc05e0 body=6 status=ok
// SIG undefined FUN_142fc05e0(void)

undefined8 FUN_142fc05e0(void)

{
  return 0x1a6ffd45;
}



// FUNCTION 142fc05f0 FUN_142fc05f0 body=6 status=ok
// SIG undefined FUN_142fc05f0(void)

undefined8 FUN_142fc05f0(void)

{
  return 0xa3193b43;
}



// FUNCTION 142fc0600 FUN_142fc0600 body=6 status=ok
// SIG undefined FUN_142fc0600(void)

undefined8 FUN_142fc0600(void)

{
  return 0x60f5528;
}



// FUNCTION 142fc0610 FUN_142fc0610 body=6 status=ok
// SIG undefined FUN_142fc0610(void)

undefined8 FUN_142fc0610(void)

{
  return 0x982c012a;
}



// FUNCTION 142fc0620 FUN_142fc0620 body=6 status=ok
// SIG undefined FUN_142fc0620(void)

undefined8 FUN_142fc0620(void)

{
  return 0x1bb5cd9a;
}



// FUNCTION 142fc0630 FUN_142fc0630 body=6 status=ok
// SIG undefined FUN_142fc0630(void)

undefined8 FUN_142fc0630(void)

{
  return 0x6ed7d0fc;
}



// FUNCTION 142fc0690 thunk_FUN_142fc4450 body=5 status=ok
// SIG undefined thunk_FUN_142fc4450(void)

void thunk_FUN_142fc4450(void)

{
  FUN_142fc4450();
  return;
}



// FUNCTION 142fc06a0 FUN_142fc06a0 body=34 status=ok
// SIG undefined FUN_142fc06a0(void)

void FUN_142fc06a0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142fbec90();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnRep_FlightState_145a13e48,1);
  return;
}



// FUNCTION 142fc06d0 StaticRegisterNativesUCreateSessionCallbackProxy body=34 status=ok
// SIG undefined StaticRegisterNativesUCreateSessionCallbackProxy(void)

void UCreateSessionCallbackProxy::StaticRegisterNativesUCreateSessionCallbackProxy(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_Owner_PostBeginPlay_145a143b0,1);
  return;
}



// FUNCTION 142fc0700 FUN_142fc0700 body=34 status=ok
// SIG undefined FUN_142fc0700(void)

void FUN_142fc0700(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142fbe910();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_FindNavMeshPoint_145a149d0,6);
  return;
}



// FUNCTION 142fc0730 FUN_142fc0730 body=34 status=ok
// SIG undefined FUN_142fc0730(void)

void FUN_142fc0730(void)

{
  undefined8 uVar1;
  
  uVar1 = UMovieScene3DTransformSection::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_DoAutoResize_145a14b48,1);
  return;
}



// FUNCTION 142fc0760 FUN_142fc0760 body=34 status=ok
// SIG undefined FUN_142fc0760(void)

void FUN_142fc0760(void)

{
  undefined8 uVar1;
  
  uVar1 = AAICharacter::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetPathFindingData_145a14f60,4);
  return;
}



// FUNCTION 142fc0790 FUN_142fc0790 body=113 status=ok
// SIG undefined FUN_142fc0790(void)

void FUN_142fc0790(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b444a0 == 0) {
    if (DAT_146b444c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b444c8,&PTR_s__Script_GbxNav_145a13e58);
    }
    lVar1 = DAT_146b444c8;
    uVar2 = FUN_142fc0570();
    DAT_146b444a0 = GetStaticStruct(FUN_142fc1290,lVar1,L"FlightState",0x28,uVar2);
  }
  return;
}



// FUNCTION 142fc0810 FUN_142fc0810 body=113 status=ok
// SIG undefined FUN_142fc0810(void)

void FUN_142fc0810(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b444e8 == 0) {
    if (DAT_146b444c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b444c8,&PTR_s__Script_GbxNav_145a13e58);
    }
    lVar1 = DAT_146b444c8;
    uVar2 = FUN_142fc0580();
    DAT_146b444e8 = GetStaticStruct(FUN_142fc12c0,lVar1,L"GbxNavAnimTableRow",0x38,uVar2);
  }
  return;
}



// FUNCTION 142fc0890 FUN_142fc0890 body=113 status=ok
// SIG undefined FUN_142fc0890(void)

void FUN_142fc0890(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b44580 == 0) {
    if (DAT_146b444c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b444c8,&PTR_s__Script_GbxNav_145a13e58);
    }
    lVar1 = DAT_146b444c8;
    uVar2 = FUN_142fc0590();
    DAT_146b44580 = GetStaticStruct(FUN_142fc12f0,lVar1,L"GbxNavAreaItem",0x18,uVar2);
  }
  return;
}



// FUNCTION 142fc0910 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FSlateMeshVertex::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b44620 == 0) {
    if (DAT_146b444c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b444c8,&PTR_s__Script_GbxNav_145a13e58);
    }
    lVar1 = DAT_146b444c8;
    uVar2 = FUN_142fc05a0();
    DAT_146b44620 = GetStaticStruct(FUN_142fc1320,lVar1,L"GbxNavAvoidanceOptions",0x3c,uVar2);
  }
  return;
}



// FUNCTION 142fc0990 FUN_142fc0990 body=113 status=ok
// SIG undefined FUN_142fc0990(void)

void FUN_142fc0990(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b445e0 == 0) {
    if (DAT_146b444c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b444c8,&PTR_s__Script_GbxNav_145a13e58);
    }
    lVar1 = DAT_146b444c8;
    uVar2 = FUN_142fc05b0();
    DAT_146b445e0 = GetStaticStruct(FUN_142fc1350,lVar1,L"GbxNavBoundsTracker",0x38,uVar2);
  }
  return;
}



// FUNCTION 142fc0a10 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FEventReply::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b44698 == 0) {
    if (DAT_146b444c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b444c8,&PTR_s__Script_GbxNav_145a13e58);
    }
    lVar1 = DAT_146b444c8;
    uVar2 = FUN_142fc05c0();
    DAT_146b44698 = GetStaticStruct(FUN_142fc1380,lVar1,L"GbxNavCorrecter",0xb8,uVar2);
  }
  return;
}



// FUNCTION 142fc0a90 FUN_142fc0a90 body=113 status=ok
// SIG undefined FUN_142fc0a90(void)

void FUN_142fc0a90(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b446e0 == 0) {
    if (DAT_146b444c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b444c8,&PTR_s__Script_GbxNav_145a13e58);
    }
    lVar1 = DAT_146b444c8;
    uVar2 = FUN_142fc05d0();
    DAT_146b446e0 = GetStaticStruct(FUN_142fc13b0,lVar1,L"GbxNavForwardState",0x128,uVar2);
  }
  return;
}



// FUNCTION 142fc0b10 FUN_142fc0b10 body=113 status=ok
// SIG undefined FUN_142fc0b10(void)

void FUN_142fc0b10(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b44720 == 0) {
    if (DAT_146b444c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b444c8,&PTR_s__Script_GbxNav_145a13e58);
    }
    lVar1 = DAT_146b444c8;
    uVar2 = FUN_142fc05e0();
    DAT_146b44720 = GetStaticStruct(FUN_142fc13e0,lVar1,L"GbxNavGoalModifiers",0x28,uVar2);
  }
  return;
}



// FUNCTION 142fc0b90 FUN_142fc0b90 body=113 status=ok
// SIG undefined FUN_142fc0b90(void)

void FUN_142fc0b90(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b444d8 == 0) {
    if (DAT_146b444c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b444c8,&PTR_s__Script_GbxNav_145a13e58);
    }
    lVar1 = DAT_146b444c8;
    uVar2 = FUN_142fc05f0();
    DAT_146b444d8 = GetStaticStruct(FUN_142fc1410,lVar1,L"GbxNavIdleTurnTableRow",0x20,uVar2);
  }
  return;
}



// FUNCTION 142fc0c10 FUN_142fc0c10 body=113 status=ok
// SIG undefined FUN_142fc0c10(void)

void FUN_142fc0c10(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b44750 == 0) {
    if (DAT_146b444c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b444c8,&PTR_s__Script_GbxNav_145a13e58);
    }
    lVar1 = DAT_146b444c8;
    uVar2 = FUN_142fc0600();
    DAT_146b44750 = GetStaticStruct(FUN_142fc1440,lVar1,L"GbxNavLayerItem",0x20,uVar2);
  }
  return;
}



// FUNCTION 142fc0c90 FUN_142fc0c90 body=113 status=ok
// SIG undefined FUN_142fc0c90(void)

void FUN_142fc0c90(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b44740 == 0) {
    if (DAT_146b444c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b444c8,&PTR_s__Script_GbxNav_145a13e58);
    }
    lVar1 = DAT_146b444c8;
    uVar2 = FUN_142fc0610();
    DAT_146b44740 = GetStaticStruct(FUN_142fc1470,lVar1,L"GbxNavLayerState",0x18,uVar2);
  }
  return;
}



// FUNCTION 142fc0d10 FUN_142fc0d10 body=113 status=ok
// SIG undefined FUN_142fc0d10(void)

void FUN_142fc0d10(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b44630 == 0) {
    if (DAT_146b444c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b444c8,&PTR_s__Script_GbxNav_145a13e58);
    }
    lVar1 = DAT_146b444c8;
    uVar2 = FUN_142fc0620();
    DAT_146b44630 = GetStaticStruct(FUN_142fc14a0,lVar1,L"GbxNavMovementOptions",0x38,uVar2);
  }
  return;
}



// FUNCTION 142fc0d90 FUN_142fc0d90 body=113 status=ok
// SIG undefined FUN_142fc0d90(void)

void FUN_142fc0d90(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b44610 == 0) {
    if (DAT_146b444c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b444c8,&PTR_s__Script_GbxNav_145a13e58);
    }
    lVar1 = DAT_146b444c8;
    uVar2 = FUN_142fc0630();
    DAT_146b44610 = GetStaticStruct(FUN_142fc14d0,lVar1,L"GbxNavSlowdownData",0x14,uVar2);
  }
  return;
}



// FUNCTION 142fc0e10 FUN_142fc0e10 body=47 status=ok
// SIG undefined FUN_142fc0e10(void)

longlong FUN_142fc0e10(void)

{
  if (DAT_146b446c0 == 0) {
    FUN_141786440(&DAT_146b446c0,&PTR_GetPrivateStaticClass_145a10380);
  }
  return DAT_146b446c0;
}



// FUNCTION 142fc0e40 FUN_142fc0e40 body=47 status=ok
// SIG undefined FUN_142fc0e40(void)

longlong FUN_142fc0e40(void)

{
  if (DAT_146b44560 == 0) {
    FUN_141786440(&DAT_146b44560,&PTR_FUN_145a10a20);
  }
  return DAT_146b44560;
}



// FUNCTION 142fc0e70 FUN_142fc0e70 body=47 status=ok
// SIG undefined FUN_142fc0e70(void)

longlong FUN_142fc0e70(void)

{
  if (DAT_146b44520 == 0) {
    FUN_141786440(&DAT_146b44520,&PTR_StaticClass_145a10030);
  }
  return DAT_146b44520;
}



// FUNCTION 142fc0ea0 FUN_142fc0ea0 body=47 status=ok
// SIG undefined FUN_142fc0ea0(void)

longlong FUN_142fc0ea0(void)

{
  if (DAT_146b44550 == 0) {
    FUN_141786440(&DAT_146b44550,&PTR_FUN_145a107f0);
  }
  return DAT_146b44550;
}



// FUNCTION 142fc0ed0 FUN_142fc0ed0 body=47 status=ok
// SIG undefined FUN_142fc0ed0(void)

longlong FUN_142fc0ed0(void)

{
  if (DAT_146b44530 == 0) {
    FUN_141786440(&DAT_146b44530,&PTR_StaticClass_145a10220);
  }
  return DAT_146b44530;
}



// FUNCTION 142fc0f00 FUN_142fc0f00 body=47 status=ok
// SIG undefined FUN_142fc0f00(void)

longlong FUN_142fc0f00(void)

{
  if (DAT_146b444f8 == 0) {
    FUN_141786440(&DAT_146b444f8,&PTR_FUN_145a0f750);
  }
  return DAT_146b444f8;
}



// FUNCTION 142fc0f30 FUN_142fc0f30 body=47 status=ok
// SIG undefined FUN_142fc0f30(void)

longlong FUN_142fc0f30(void)

{
  if (DAT_146b44570 == 0) {
    FUN_141786440(&DAT_146b44570,&PTR_FUN_145a11430);
  }
  return DAT_146b44570;
}



// FUNCTION 142fc0f60 FUN_142fc0f60 body=47 status=ok
// SIG undefined FUN_142fc0f60(void)

longlong FUN_142fc0f60(void)

{
  if (DAT_146b44590 == 0) {
    FUN_141786440(&DAT_146b44590,&PTR_FUN_145a11d90);
  }
  return DAT_146b44590;
}



// FUNCTION 142fc0f90 FUN_142fc0f90 body=47 status=ok
// SIG undefined FUN_142fc0f90(void)

longlong FUN_142fc0f90(void)

{
  if (DAT_146b44640 == 0) {
    FUN_141786440(&DAT_146b44640,&PTR_thunk_FUN_142fc0410_145a10b10);
  }
  return DAT_146b44640;
}



// FUNCTION 142fc0fc0 FUN_142fc0fc0 body=47 status=ok
// SIG undefined FUN_142fc0fc0(void)

longlong FUN_142fc0fc0(void)

{
  if (DAT_146b446b0 == 0) {
    FUN_141786440(&DAT_146b446b0,&PTR_FUN_145a0fb90);
  }
  return DAT_146b446b0;
}



// FUNCTION 142fc0ff0 FUN_142fc0ff0 body=47 status=ok
// SIG undefined FUN_142fc0ff0(void)

longlong FUN_142fc0ff0(void)

{
  if (DAT_146b446d0 == 0) {
    FUN_141786440(&DAT_146b446d0,&PTR_FUN_145a11070);
  }
  return DAT_146b446d0;
}



// FUNCTION 142fc1020 FUN_142fc1020 body=47 status=ok
// SIG undefined FUN_142fc1020(void)

longlong FUN_142fc1020(void)

{
  if (DAT_146b446f0 == 0) {
    FUN_141786440(&DAT_146b446f0,&PTR_FUN_145a115f0);
  }
  return DAT_146b446f0;
}



// FUNCTION 142fc1050 FUN_142fc1050 body=47 status=ok
// SIG undefined FUN_142fc1050(void)

longlong FUN_142fc1050(void)

{
  if (DAT_146b44760 == 0) {
    FUN_141786440(&DAT_146b44760,&PTR_FUN_145a12790);
  }
  return DAT_146b44760;
}



// FUNCTION 142fc1080 FUN_142fc1080 body=47 status=ok
// SIG undefined FUN_142fc1080(void)

longlong FUN_142fc1080(void)

{
  if (DAT_146b44650 == 0) {
    FUN_1417866a0(&DAT_146b44650,&PTR_Z_Construct_UPackage__Script_Engine_146771e60);
  }
  return DAT_146b44650;
}



// FUNCTION 142fc10b0 FUN_142fc10b0 body=47 status=ok
// SIG undefined FUN_142fc10b0(void)

longlong FUN_142fc10b0(void)

{
  if (DAT_146b44498 == 0) {
    FUN_1417866a0(&DAT_146b44498,&PTR_Z_Construct_UPackage__Script_Engine_146771d70);
  }
  return DAT_146b44498;
}



// FUNCTION 142fc10e0 FUN_142fc10e0 body=47 status=ok
// SIG undefined FUN_142fc10e0(void)

longlong FUN_142fc10e0(void)

{
  if (DAT_146b44660 == 0) {
    FUN_1417866a0(&DAT_146b44660,&PTR_Z_Construct_UPackage__Script_Engine_146771f00);
  }
  return DAT_146b44660;
}



// FUNCTION 142fc1110 FUN_142fc1110 body=47 status=ok
// SIG undefined FUN_142fc1110(void)

longlong FUN_142fc1110(void)

{
  if (DAT_146b444d0 == 0) {
    FUN_1417866a0(&DAT_146b444d0,&PTR_Z_Construct_UPackage__Script_Engine_146771dc0);
  }
  return DAT_146b444d0;
}



// FUNCTION 142fc1140 FUN_142fc1140 body=47 status=ok
// SIG undefined FUN_142fc1140(void)

longlong FUN_142fc1140(void)

{
  if (DAT_146b446a8 == 0) {
    FUN_1417866a0(&DAT_146b446a8,&PTR_Z_Construct_UPackage__Script_Engine_146771f50);
  }
  return DAT_146b446a8;
}



// FUNCTION 142fc1170 FUN_142fc1170 body=47 status=ok
// SIG undefined FUN_142fc1170(void)

longlong FUN_142fc1170(void)

{
  if (DAT_146b44700 == 0) {
    FUN_1417866a0(&DAT_146b44700,&PTR_Z_Construct_UPackage__Script_Engine_146771fa0);
  }
  return DAT_146b44700;
}


